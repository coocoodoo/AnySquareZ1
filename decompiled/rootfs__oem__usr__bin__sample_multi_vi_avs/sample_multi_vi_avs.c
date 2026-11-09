// sample_multi_vi_avs — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00011a5c size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 00011a80 size=12 ===== */

void RK_MPI_SYS_Exit(void)

{
  (*(code *)PTR_RK_MPI_SYS_Exit_0002700c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Bind @ 00011a8c size=12 ===== */

void RK_MPI_SYS_Bind(void)

{
  (*(code *)PTR_RK_MPI_SYS_Bind_00027010)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm @ 00011a98 size=12 ===== */

void rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm_00027014)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_QueryChnStatus @ 00011aa4 size=12 ===== */

void RK_MPI_VI_QueryChnStatus(void)

{
  (*(code *)PTR_RK_MPI_VI_QueryChnStatus_00027018)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00011ab0 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_0002701c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnWrapBufAttr @ 00011abc size=12 ===== */

void RK_MPI_VI_SetChnWrapBufAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetChnWrapBufAttr_00027020)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_destroy @ 00011ac8 size=12 ===== */

void rk_aiq_uapi2_camgroup_destroy(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_destroy_00027024)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_CAL_AVS_GetFinalLutBufferSize @ 00011ad4 size=12 ===== */

void RK_MPI_CAL_AVS_GetFinalLutBufferSize(void)

{
  (*(code *)PTR_RK_MPI_CAL_AVS_GetFinalLutBufferSize_00027028)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_ae_setExpSwAttr @ 00011ae0 size=12 ===== */

void rk_aiq_user_api2_ae_setExpSwAttr(void)

{
  (*(code *)PTR_rk_aiq_user_api2_ae_setExpSwAttr_0002702c)();
  return;
}



/* ===== <EXTERNAL>::fwrite @ 00011aec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_00027030)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::system @ 00011af8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int system(char *__command)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_system_00027034)(__command);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChn @ 00011b10 size=12 ===== */

void RK_MPI_VI_DisableChn(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableChn_0002703c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_StopPipe @ 00011b1c size=12 ===== */

void RK_MPI_VI_StopPipe(void)

{
  (*(code *)PTR_RK_MPI_VI_StopPipe_00027040)();
  return;
}



/* ===== <EXTERNAL>::usleep @ 00011b28 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_usleep_00027044)(__useconds);
  return iVar1;
}



/* ===== <EXTERNAL>::memcpy @ 00011b34 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00027048)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_setMulCamConc @ 00011b40 size=12 ===== */

void rk_aiq_uapi2_sysctl_setMulCamConc(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_setMulCamConc_0002704c)();
  return;
}



/* ===== <EXTERNAL>::sleep @ 00011b4c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_sleep_00027050)(__seconds);
  return uVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_ReleaseChnFrame @ 00011b58 size=12 ===== */

void RK_MPI_VI_ReleaseChnFrame(void)

{
  (*(code *)PTR_RK_MPI_VI_ReleaseChnFrame_00027054)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_create @ 00011b64 size=12 ===== */

void rk_aiq_uapi2_camgroup_create(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_create_00027058)();
  return;
}



/* ===== <EXTERNAL>::gettimeofday @ 00011b70 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_gettimeofday_0002705c)(__tv);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevAttr @ 00011b7c size=12 ===== */

void RK_MPI_VI_GetDevAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_GetDevAttr_00027060)();
  return;
}



/* ===== <EXTERNAL>::setenv @ 00011b88 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setenv(char *__name,char *__value,int __replace)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setenv_00027064)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::malloc @ 00011b94 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00027068)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_aldch_v21_SetAttrib @ 00011ba0 size=12 ===== */

void rk_aiq_user_api2_aldch_v21_SetAttrib(void)

{
  (*(code *)PTR_rk_aiq_user_api2_aldch_v21_SetAttrib_0002706c)();
  return;
}



/* ===== <EXTERNAL>::strrchr @ 00011bac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strrchr_00027070)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::fopen64 @ 00011bc4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen64_00027078)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AVS_StopGrp @ 00011bd0 size=12 ===== */

void RK_MPI_AVS_StopGrp(void)

{
  (*(code *)PTR_RK_MPI_AVS_StopGrp_0002707c)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_setMirrorFlip @ 00011bdc size=12 ===== */

void rk_aiq_uapi2_setMirrorFlip(void)

{
  (*(code *)PTR_rk_aiq_uapi2_setMirrorFlip_00027080)();
  return;
}



/* ===== <EXTERNAL>::setlinebuf @ 00011be8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void setlinebuf(FILE *__stream)

{
  (*(code *)PTR_setlinebuf_00027084)(__stream);
  return;
}



/* ===== <EXTERNAL>::strlen @ 00011bf4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00027088)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AVS_GetFinalLut @ 00011c00 size=12 ===== */

void RK_MPI_AVS_GetFinalLut(void)

{
  (*(code *)PTR_RK_MPI_AVS_GetFinalLut_0002708c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AVS_ReleaseChnFrame @ 00011c0c size=12 ===== */

void RK_MPI_AVS_ReleaseChnFrame(void)

{
  (*(code *)PTR_RK_MPI_AVS_ReleaseChnFrame_00027090)();
  return;
}



/* ===== <EXTERNAL>::snprintf @ 00011c18 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_00027094)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AVS_DestroyGrp @ 00011c24 size=12 ===== */

void RK_MPI_AVS_DestroyGrp(void)

{
  (*(code *)PTR_RK_MPI_AVS_DestroyGrp_00027098)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AVS_StartGrp @ 00011c30 size=12 ===== */

void RK_MPI_AVS_StartGrp(void)

{
  (*(code *)PTR_RK_MPI_AVS_StartGrp_0002709c)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_aldch_v21_GetAttrib @ 00011c3c size=12 ===== */

void rk_aiq_user_api2_aldch_v21_GetAttrib(void)

{
  (*(code *)PTR_rk_aiq_user_api2_aldch_v21_GetAttrib_000270a0)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnAttr @ 00011c48 size=12 ===== */

void RK_MPI_VI_SetChnAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetChnAttr_000270a4)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_UnBind @ 00011c54 size=12 ===== */

void RK_MPI_SYS_UnBind(void)

{
  (*(code *)PTR_RK_MPI_SYS_UnBind_000270a8)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_prepare @ 00011c60 size=12 ===== */

void rk_aiq_uapi2_camgroup_prepare(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_prepare_000270ac)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 00011c6c size=12 ===== */

void RK_MPI_SYS_Init(void)

{
  (*(code *)PTR_RK_MPI_SYS_Init_000270b0)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId @ 00011c78 size=12 ===== */

void rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId_000270b4)();
  return;
}



/* ===== <EXTERNAL>::fclose @ 00011c84 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_000270b8)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AVS_EnableChn @ 00011c90 size=12 ===== */

void RK_MPI_AVS_EnableChn(void)

{
  (*(code *)PTR_RK_MPI_AVS_EnableChn_000270bc)();
  return;
}



/* ===== <EXTERNAL>::fread @ 00011c9c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fread_000270c0)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::RK_LOG @ 00011ca8 size=12 ===== */

void RK_LOG(void)

{
  (*(code *)PTR_RK_LOG_000270c4)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_getCamInfos @ 00011cb4 size=12 ===== */

void rk_aiq_uapi2_camgroup_getCamInfos(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_getCamInfos_000270c8)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_start @ 00011cc0 size=12 ===== */

void rk_aiq_uapi2_camgroup_start(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_start_000270cc)();
  return;
}



/* ===== <EXTERNAL>::pthread_create @ 00011ccc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_000270d0)(__newthread);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_StartPipe @ 00011cd8 size=12 ===== */

void RK_MPI_VI_StartPipe(void)

{
  (*(code *)PTR_RK_MPI_VI_StartPipe_000270d4)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChnExt @ 00011ce4 size=12 ===== */

void RK_MPI_VI_DisableChnExt(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableChnExt_000270d8)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetChnFrame @ 00011cf0 size=12 ===== */

void RK_MPI_VI_GetChnFrame(void)

{
  (*(code *)PTR_RK_MPI_VI_GetChnFrame_000270dc)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChnExt @ 00011cfc size=12 ===== */

void RK_MPI_VI_EnableChnExt(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableChnExt_000270e0)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevBindPipe @ 00011d08 size=12 ===== */

void RK_MPI_VI_SetDevBindPipe(void)

{
  (*(code *)PTR_RK_MPI_VI_SetDevBindPipe_000270e4)();
  return;
}



/* ===== <EXTERNAL>::atof @ 00011d14 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double atof(char *__nptr)

{
  undefined4 uVar1;
  undefined4 extraout_s1;
  
  uVar1 = (*(code *)PTR_atof_000270e8)(__nptr);
  return (double)CONCAT44(extraout_s1,uVar1);
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_prepare @ 00011d20 size=12 ===== */

void rk_aiq_uapi2_sysctl_prepare(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_prepare_000270ec)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevIsEnable @ 00011d2c size=12 ===== */

void RK_MPI_VI_GetDevIsEnable(void)

{
  (*(code *)PTR_RK_MPI_VI_GetDevIsEnable_000270f0)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_init @ 00011d38 size=12 ===== */

void rk_aiq_uapi2_sysctl_init(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_init_000270f4)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableDev @ 00011d44 size=12 ===== */

void RK_MPI_VI_EnableDev(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableDev_000270f8)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_start @ 00011d50 size=12 ===== */

void rk_aiq_uapi2_sysctl_start(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_start_000270fc)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_CreateMB @ 00011d5c size=12 ===== */

void RK_MPI_SYS_CreateMB(void)

{
  (*(code *)PTR_RK_MPI_SYS_CreateMB_00027100)();
  return;
}



/* ===== <EXTERNAL>::fflush @ 00011d68 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_00027104)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 00011d74 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00027108)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_ae_getExpSwAttr @ 00011d80 size=12 ===== */

void rk_aiq_user_api2_ae_getExpSwAttr(void)

{
  (*(code *)PTR_rk_aiq_user_api2_ae_getExpSwAttr_0002710c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AVS_GetChnFrame @ 00011d8c size=12 ===== */

void RK_MPI_AVS_GetChnFrame(void)

{
  (*(code *)PTR_RK_MPI_AVS_GetChnFrame_00027110)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_preInit_devBufCnt @ 00011d98 size=12 ===== */

void rk_aiq_uapi2_sysctl_preInit_devBufCnt(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_preInit_devBufCnt_00027114)();
  return;
}



/* ===== <EXTERNAL>::fprintf @ 00011da4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00027118)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_ChnSaveFile @ 00011db0 size=12 ===== */

void RK_MPI_VI_ChnSaveFile(void)

{
  (*(code *)PTR_RK_MPI_VI_ChnSaveFile_0002711c)();
  return;
}



/* ===== <EXTERNAL>::abort @ 00011dbc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00027120)();
  return;
}



/* ===== <EXTERNAL>::fseek @ 00011dd4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fseek_00027128)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Free @ 00011de0 size=12 ===== */

void RK_MPI_SYS_Free(void)

{
  (*(code *)PTR_RK_MPI_SYS_Free_0002712c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 00011dec size=12 ===== */

void RK_MPI_MB_Handle2VirAddr(void)

{
  (*(code *)PTR_RK_MPI_MB_Handle2VirAddr_00027130)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_deinit @ 00011df8 size=12 ===== */

void rk_aiq_uapi2_sysctl_deinit(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_deinit_00027134)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_stop @ 00011e04 size=12 ===== */

void rk_aiq_uapi2_sysctl_stop(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_stop_00027138)();
  return;
}



/* ===== <EXTERNAL>::raise @ 00011e10 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_0002713c)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetEptz @ 00011e1c size=12 ===== */

void RK_MPI_VI_SetEptz(void)

{
  (*(code *)PTR_RK_MPI_VI_SetEptz_00027140)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevAttr @ 00011e28 size=12 ===== */

void RK_MPI_VI_SetDevAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetDevAttr_00027144)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AVS_SetChnAttr @ 00011e34 size=12 ===== */

void RK_MPI_AVS_SetChnAttr(void)

{
  (*(code *)PTR_RK_MPI_AVS_SetChnAttr_00027148)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChn @ 00011e40 size=12 ===== */

void RK_MPI_VI_EnableChn(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableChn_0002714c)();
  return;
}



/* ===== <EXTERNAL>::free @ 00011e4c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00027150)(__ptr);
  return;
}



/* ===== <EXTERNAL>::atoi @ 00011e58 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_00027154)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::strchr @ 00011e64 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_00027158)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::printf @ 00011e70 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_0002715c)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::getopt_long @ 00011e7c size=12 ===== */

void getopt_long(void)

{
  (*(code *)PTR_getopt_long_00027160)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AVS_CreateGrp @ 00011e88 size=12 ===== */

void RK_MPI_AVS_CreateGrp(void)

{
  (*(code *)PTR_RK_MPI_AVS_CreateGrp_00027164)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableDev @ 00011e94 size=12 ===== */

void RK_MPI_VI_DisableDev(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableDev_00027168)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_CAL_TDE_GetPicBufferSize @ 00011ea0 size=12 ===== */

void RK_MPI_CAL_TDE_GetPicBufferSize(void)

{
  (*(code *)PTR_RK_MPI_CAL_TDE_GetPicBufferSize_0002716c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AVS_DisableChn @ 00011eac size=12 ===== */

void RK_MPI_AVS_DisableChn(void)

{
  (*(code *)PTR_RK_MPI_AVS_DisableChn_00027170)();
  return;
}



/* ===== <EXTERNAL>::puts @ 00011eb8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00027174)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_stop @ 00011ec4 size=12 ===== */

void rk_aiq_uapi2_camgroup_stop(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_stop_00027178)();
  return;
}



/* ===== <EXTERNAL>::signal @ 00011ed0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = (__sighandler_t)(*(code *)PTR_signal_0002717c)(__sig);
  return p_Var1;
}



/* ===== <EXTERNAL>::strcpy @ 00011edc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_00027180)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00011ee8 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00027184)();
  return;
}



/* ===== <EXTERNAL>::pthread_join @ 00011ef4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_00027188)(__th);
  return iVar1;
}



/* ===== FUN_00011f00 @ 00011f00 size=2276 ===== */

/* WARNING: Type propagation algorithm not settling */

int FUN_00011f00(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  void *__s;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  char *__nptr;
  void *pvVar12;
  undefined4 *puVar13;
  void *pvVar14;
  char *pcVar15;
  int iVar16;
  double dVar17;
  char *pcVar18;
  float fVar19;
  undefined4 uVar20;
  int local_e4;
  undefined4 local_e0;
  int local_dc;
  int local_d8;
  char *local_d4;
  int local_d0;
  int local_cc;
  char *local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  pthread_t local_ac [3];
  undefined4 local_a0;
  char *local_9c;
  char *pcStack_98;
  int iStack_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  char *pcStack_88;
  undefined4 local_84;
  char *pcStack_80;
  undefined4 local_7c;
  char *pcStack_78;
  int local_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  int local_5c;
  char *local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  uVar7 = 0;
  pcVar18 = *(char **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  iVar8 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uVar20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_9c = (char *)0x0;
  local_8c = 0;
  local_84 = 0;
  pcStack_98 = pcVar18;
  iStack_94 = iVar8;
  uStack_90 = uVar20;
  pcStack_88 = pcVar18;
  pcStack_80 = pcVar18;
  if (1 < param_1) {
    fVar19 = 5.0;
    __s = malloc(0x1ef8);
    pcVar3 = DAT_000127ec;
    pcVar2 = DAT_000127e8;
    pcVar10 = DAT_000127e4;
    iVar16 = 2;
    iVar9 = 2;
    memset(__s,0,0x1ef8);
    signal(2,DAT_000127f0);
    local_c0 = -1;
    local_c8 = (char *)0x0;
    local_bc = 2;
    local_e4 = 1;
    local_e0 = 0;
    local_d4 = DAT_000127f4;
    local_d0 = 0xf00;
    local_cc = 0x438;
    local_b8 = 2;
    local_c4 = 0xf;
    local_dc = 0x780;
    local_d8 = 0x438;
    pcVar4 = local_c8;
    do {
      while( true ) {
        do {
          while( true ) {
            while( true ) {
              while( true ) {
                while( true ) {
                  local_c8 = pcVar4;
                  pcVar15 = pcVar3;
                  pcVar11 = pcVar2;
                  iVar5 = getopt_long(param_1,param_2,DAT_000127fc,DAT_000127f8,0);
                  if (iVar5 == -1) {
                    printf(DAT_00012800,0);
                    printf(DAT_00012804,0);
                    printf(DAT_00012808,local_d4);
                    printf(DAT_00012810,DAT_0001280c);
                    printf(DAT_00012814,local_c8);
                    printf(DAT_00012818,pcVar10);
                    printf(DAT_0001281c);
                    printf(DAT_00012820,pcVar15);
                    printf(DAT_00012824,pcVar11);
                    if (pcVar11 != (char *)0x0 && (pcVar15 != (char *)0x0 && iVar16 == 1)) {
                      local_9c = pcVar15;
                      pcStack_98 = pcVar11;
                    }
                    iVar5 = RK_MPI_SYS_Init();
                    if (iVar5 != 0) goto LAB_00012094;
                    *(int *)((int)__s + 0x1c88) = local_dc;
                    *(undefined4 *)((int)__s + 0x1c98) = 0;
                    *(undefined4 *)((int)__s + 0x1c9c) = 0;
                    *(int *)((int)__s + 0x1c8c) = local_d8;
                    *(int *)((int)__s + 0x1c80) = iVar16;
                    *(float *)((int)__s + 0x1c90) = fVar19;
                    *(char **)((int)__s + 0x1cb8) = local_d4;
                    *(int *)((int)__s + 0x1d98) = local_d0;
                    *(int *)((int)__s + 0x1cd0) = local_dc;
                    *(undefined4 *)((int)__s + 0x1cd8) = 1;
                    *(int *)((int)__s + 0x1d9c) = local_cc;
                    *(int *)((int)__s + 0x1cd4) = local_d8;
                    *(undefined4 *)((int)__s + 0x1cb0) = 1;
                    *(undefined4 *)((int)__s + 0x1da4) = 0xffffffff;
                    *(undefined4 *)((int)__s + 0x1da8) = 0xffffffff;
                    *(undefined4 *)((int)__s + 0x1cb4) = 1;
                    *(char ***)((int)__s + 0x1c94) = &local_9c;
                    *(undefined4 *)((int)__s + 0x1ca8) = 0;
                    *(int *)((int)__s + 0x1cac) = iVar9;
                    *(undefined4 *)((int)__s + 0x1cf8) = 0;
                    *(float *)((int)__s + 0x1da0) = fVar19;
                    *(undefined4 *)((int)__s + 0x1e70) = 0xffffffff;
                    *(undefined4 *)((int)__s + 0x1e74) = 0xffffffff;
                    *(undefined4 *)((int)__s + 0x1e64) = 0;
                    *(undefined4 *)((int)__s + 0x1e6c) = 1;
                    *(undefined4 *)((int)__s + 0x1e78) = 2;
                    *(undefined4 *)((int)__s + 0x1e68) = 0;
                    *(int *)((int)__s + 0x1e5c) = local_d0;
                    *(int *)((int)__s + 0x1e60) = local_cc;
                    pvVar12 = (void *)((int)__s + 0x1c80);
                    FUN_000131c0(pvVar12);
                    if (pcVar10 == (char *)0x0) goto LAB_00012454;
                    printf(DAT_00012830,pcVar10);
                    printf(DAT_00012834,local_e0);
                    iVar5 = -1;
                    if (local_e4 == 0) {
                      iVar8 = 0;
                      goto LAB_0001244c;
                    }
                    uStack_68 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
                    local_4c = 0;
                    local_6c = 0;
                    local_64 = 0;
                    local_54 = 0;
                    uStack_48 = 0;
                    local_7c = uVar7;
                    pcStack_78 = pcVar18;
                    local_74 = iVar8;
                    uStack_70 = uVar20;
                    uStack_60 = uStack_68;
                    local_5c = iVar9;
                    local_58 = pcVar10;
                    uStack_50 = uStack_68;
                    uStack_44 = uStack_68;
                    iVar8 = FUN_000140fc(0,0,local_e0,iVar16,&local_9c,&local_7c);
                    if (iVar8 == 0) {
                      RK_LOG(2,DAT_00012840,DAT_00012864,DAT_0001283c,0x17d);
                      iVar8 = FUN_000144f0(0,local_c4);
                      if (iVar8 == 0) {
                        RK_LOG(2,DAT_00012840,DAT_0001286c,DAT_0001283c,0x185);
                        goto LAB_00012454;
                      }
                      uVar20 = 0x182;
                      uVar7 = DAT_00012868;
                    }
                    else {
                      uVar20 = 0x17a;
                      uVar7 = DAT_00012838;
                    }
                    RK_LOG(2,DAT_00012840,uVar7,DAT_0001283c,uVar20);
                    return -1;
                  }
                  __nptr = (char *)*DAT_00012828;
                  pcVar2 = pcVar11;
                  pcVar3 = pcVar15;
                  pcVar4 = local_c8;
                  if (iVar5 != 0x6c) break;
                  local_c0 = atoi(__nptr);
                }
                if (iVar5 < 0x6d) break;
                if (iVar5 == 0xd0) {
                  iVar16 = atoi(__nptr);
                }
                else if (iVar5 < 0xd1) {
                  pcVar4 = __nptr;
                  if ((iVar5 != 0x6f) && (pcVar2 = __nptr, pcVar4 = local_c8, iVar5 != 0xb9)) {
                    if (iVar5 != 0x6e) goto LAB_00011f30;
                    iVar9 = atoi(__nptr);
                    pcVar2 = pcVar11;
                  }
                }
                else if (iVar5 == 0xd9) {
                  local_bc = atoi(__nptr);
                }
                else if (iVar5 < 0xda) {
                  if (iVar5 != 0xd4) goto LAB_00011f30;
                  local_d0 = atoi(__nptr);
                  pcVar11 = strchr(__nptr,0x78);
                  local_cc = atoi(pcVar11 + 1);
                }
                else if (iVar5 == 0xdf) {
                  local_b8 = atoi(__nptr);
                }
                else {
                  if (iVar5 != 0xe9) goto LAB_00011f30;
                  local_dc = atoi(__nptr);
                  pcVar11 = strchr(__nptr,0x78);
                  local_d8 = atoi(pcVar11 + 1);
                }
              }
              if (iVar5 != 0x61) break;
              pcVar10 = __nptr;
              if (__nptr == (char *)0x0) {
                pcVar11 = (char *)param_2[*DAT_0001282c];
                pcVar10 = pcVar11;
                if ((pcVar11 != (char *)0x0) && (pcVar10 = __nptr, *pcVar11 != '-')) {
                  *DAT_0001282c = *DAT_0001282c + 1;
                  pcVar10 = pcVar11;
                }
              }
            }
            if (iVar5 < 0x62) break;
            if (iVar5 == 0x66) {
              local_c4 = atoi(__nptr);
            }
            else if (iVar5 == 0x69) {
              local_e4 = atoi(__nptr);
            }
            else {
              if (iVar5 != 100) goto LAB_00011f30;
              dVar17 = atof(__nptr);
              fVar19 = (float)dVar17;
            }
          }
          pcVar3 = __nptr;
        } while (iVar5 == 0x4c);
        if (iVar5 != 0x4d) break;
        iVar5 = atoi(__nptr);
        pcVar3 = pcVar15;
        if (iVar5 != 0) {
          local_e0 = 1;
        }
      }
      pcVar3 = pcVar15;
      local_d4 = __nptr;
    } while (iVar5 == 0x41);
  }
LAB_00011f30:
  FUN_00012bd4(*param_2);
  return 0;
LAB_0001244c:
  if (iVar9 <= iVar8) goto LAB_00012454;
  iVar16 = FUN_00013dd4(iVar8,0,local_e0,pcVar10);
  iVar6 = FUN_00014390(iVar8);
  if (iVar16 != 0 || iVar6 != 0) {
    uVar20 = 0x16c;
    uVar7 = DAT_00012844;
    goto LAB_00012438;
  }
  iVar8 = iVar8 + 1;
  goto LAB_0001244c;
LAB_00012454:
  pvVar14 = __s;
  for (iVar8 = 0; iVar8 < iVar9; iVar8 = iVar8 + 1) {
    *(int *)((int)pvVar14 + 0x1c) = iVar8;
    *(int *)((int)pvVar14 + 0x20) = iVar8;
    *(int *)((int)pvVar14 + 0x10) = local_dc;
    *(undefined4 *)((int)pvVar14 + 0xdc) = 4;
    *(undefined4 *)((int)pvVar14 + 0xc0) = 0;
    *(int *)((int)pvVar14 + 0x14) = local_d8;
    *(undefined4 *)((int)pvVar14 + 0xa8) = 0;
    *(undefined4 *)((int)pvVar14 + 0xb4) = 0;
    *(int *)((int)pvVar14 + 0x24) = local_b8;
    *(undefined4 *)((int)pvVar14 + 0xc4) = 0xffffffff;
    *(undefined4 *)((int)pvVar14 + 200) = 0xffffffff;
    *(int *)((int)pvVar14 + 8) = local_e4;
    *(int *)((int)pvVar14 + 0xd0) = local_bc;
    FUN_00012cc8(pvVar14);
    pvVar14 = (void *)((int)pvVar14 + 0x390);
  }
  iVar8 = 0;
  pvVar14 = __s;
  while ((iVar8 < iVar9 && (*(int *)((int)pvVar14 + 8) != 0))) {
    puVar13 = (undefined4 *)((int)pvVar14 + 0x20);
    pvVar14 = (void *)((int)pvVar14 + 0x390);
    iVar16 = RK_MPI_VI_StartPipe(*puVar13);
    if (iVar16 != 0) {
      RK_LOG(2,DAT_00012840,DAT_00012870,DAT_0001283c,0x1a6,iVar16,
             *(undefined4 *)((int)__s + iVar8 * 0x390 + 0x20));
      goto LAB_000126d4;
    }
    iVar8 = iVar8 + 1;
  }
  *(char **)((int)__s + 0x1ef0) = local_c8;
  *(int *)((int)__s + 0x1c84) = local_c0;
  iVar8 = FUN_00013478(pvVar12);
  if (iVar8 != 0) {
    RK_LOG(2,DAT_00012840,DAT_00012848,DAT_0001283c,0x1b0);
  }
  puVar13 = (undefined4 *)((int)__s + 0x1c);
  for (iVar8 = 0; iVar8 < iVar9; iVar8 = iVar8 + 1) {
    local_ac[2] = *puVar13;
    local_ac[1] = 8;
    local_a0 = puVar13[2];
    local_7c = 0x11;
    pcStack_78 = *(char **)((int)__s + 0x1c98);
    local_74 = iVar8;
    FUN_000139b4(local_ac + 1,&local_7c);
    puVar13 = puVar13 + 0xe4;
  }
  pthread_create(local_ac,(pthread_attr_t *)0x0,DAT_0001284c,pvVar12);
  printf(DAT_00012854,DAT_00012850);
  pcVar18 = DAT_00012858;
  while (*pcVar18 == '\0') {
    sleep(1);
  }
  printf(DAT_0001285c,DAT_00012850);
  pthread_join(local_ac[0],(void **)0x0);
  puVar13 = (undefined4 *)((int)__s + 0x1c);
  for (iVar8 = 0; uVar7 = DAT_0001283c, iVar8 < iVar9; iVar8 = iVar8 + 1) {
    local_ac[2] = *puVar13;
    local_ac[1] = 8;
    local_a0 = puVar13[2];
    local_7c = 0x11;
    pcStack_78 = *(char **)((int)__s + 0x1c98);
    local_74 = iVar8;
    FUN_000139fc(local_ac + 1,&local_7c);
    puVar13 = puVar13 + 0xe4;
  }
  FUN_00013688(pvVar12);
  FUN_0001375c(pvVar12);
  uVar1 = DAT_00012860;
  uVar20 = DAT_00012840;
  iVar8 = 0;
  for (pvVar12 = __s; (iVar8 < iVar9 && (*(int *)((int)pvVar12 + 8) != 0));
      pvVar12 = (void *)((int)pvVar12 + 0x390)) {
    iVar16 = RK_MPI_VI_StopPipe(*(undefined4 *)((int)pvVar12 + 0x20));
    if (iVar16 != 0) {
      RK_LOG(2,uVar20,uVar1,uVar7,0x1de,iVar16,*(undefined4 *)((int)pvVar12 + 0x20));
    }
    iVar8 = iVar8 + 1;
  }
LAB_000126d4:
  for (iVar8 = 0; iVar8 < iVar9; iVar8 = iVar8 + 1) {
    FUN_0001314c((void *)(iVar8 * 0x390 + (int)__s));
  }
LAB_00012094:
  RK_MPI_SYS_Exit();
  if (pcVar10 != (char *)0x0) {
    if (local_e4 == 0) {
      for (iVar8 = 0; iVar8 < iVar9; iVar8 = iVar8 + 1) {
        iVar5 = FUN_00014288(iVar8);
        if (iVar5 != 0) {
          uVar20 = 0x1ef;
          uVar7 = DAT_00012878;
          iVar8 = iVar5;
          goto LAB_00012438;
        }
      }
    }
    else {
      iVar5 = FUN_00014310(0);
      if (iVar5 != 0) {
        uVar20 = 0x1f6;
        uVar7 = DAT_00012874;
        iVar8 = iVar5;
LAB_00012438:
        RK_LOG(2,DAT_00012840,uVar7,DAT_0001283c,uVar20,iVar8);
        return iVar5;
      }
    }
  }
  free(__s);
  return 0;
}



/* ===== entry @ 0001287c size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00027074)
            (DAT_000128b0,param_2,&stack0x00000004,DAT_000128b4,DAT_000128ac,param_1);
  return;
}



/* ===== FUN_000128b8 @ 000128b8 size=32 ===== */

void FUN_000128b8(void)

{
  if (DAT_000128dc == DAT_000128d8) {
    return;
  }
  if (DAT_000128e0 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000128d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000128e0)();
  return;
}



/* ===== _FINI_0 @ 0001291c size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00012958;
  if (*DAT_00012958 != '\0') {
    return;
  }
  FUN_000128b8();
  if (DAT_0001295c != 0) {
    __deregister_frame_info(DAT_00012960);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00012964 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00012988 != 0) {
    __register_frame_info(DAT_00012990,DAT_0001298c);
  }
  if ((DAT_00012914 - DAT_00012910 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00012918 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001290c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00012918)();
  return;
}



/* ===== FUN_00012994 @ 00012994 size=492 ===== */

undefined4 FUN_00012994(int param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  FILE *__s;
  int iVar5;
  int iVar6;
  int iVar7;
  void *local_140;
  size_t local_13c [4];
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  char acStack_120 [256];
  
  memset(acStack_120,0,0x100);
  pcVar1 = DAT_00012b80;
  local_140 = (void *)0x0;
  __s = (FILE *)0x0;
  if (*(int *)(param_1 + 0x270) != 0) {
    snprintf(acStack_120,0x100,DAT_00012b84,*(int *)(param_1 + 0x270),
             *(undefined4 *)(param_1 + 0x18));
    __s = fopen64(acStack_120,DAT_00012b88);
    if (__s == (FILE *)0x0) {
      printf(DAT_00012b8c,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x270));
      *pcVar1 = '\x01';
      return 0;
    }
  }
  uVar4 = DAT_00012b9c;
  uVar3 = DAT_00012b98;
  uVar2 = DAT_00012b94;
  iVar7 = 0;
  do {
    if (*pcVar1 != '\0') {
LAB_00012b38:
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
      return 0;
    }
    iVar6 = FUN_000135c0(param_1,&local_140);
    iVar5 = iVar7;
    if (iVar6 == 0) {
      if (*(int *)(param_1 + 4) <= iVar7 && 0 < *(int *)(param_1 + 4)) {
        FUN_00013638(param_1);
        *pcVar1 = '\x01';
        goto LAB_00012b38;
      }
      if (__s != (FILE *)0x0) {
        local_13c[3] = *(undefined4 *)(param_1 + 0x224);
        local_12c = *(undefined4 *)(param_1 + 0x228);
        local_13c[0] = 0;
        local_124 = *(undefined4 *)(param_1 + 0x240);
        local_13c[1] = 0;
        local_13c[2] = 0;
        local_128 = *(undefined4 *)(param_1 + 0x238);
        iVar5 = RK_MPI_CAL_TDE_GetPicBufferSize(local_13c + 3,local_13c);
        if (iVar5 == 0) {
          fwrite(local_140,1,local_13c[0],__s);
          fflush(__s);
        }
        else {
          RK_LOG(2,uVar4,DAT_00012b90,uVar2,0x9c,iVar5);
        }
      }
      FUN_000147f4(*(undefined4 *)(param_1 + 600),*(undefined4 *)(param_1 + 0x25c),1000,0);
      iVar5 = iVar7 + 1;
      RK_LOG(2,uVar4,uVar3,uVar2,0xa6,*(undefined4 *)(param_1 + 0x18),local_140,local_13c[0],iVar7);
      FUN_00013638(param_1);
    }
    usleep(1000);
    iVar7 = iVar5;
  } while( true );
}



/* ===== FUN_00012bd4 @ 00012bd4 size=168 ===== */

void FUN_00012bd4(undefined4 param_1)

{
  puts(DAT_00012c7c);
  printf(DAT_00012c80,param_1);
  puts(DAT_00012c84);
  puts(DAT_00012c88);
  puts(DAT_00012c8c);
  puts(DAT_00012c90);
  puts(DAT_00012c94);
  puts(DAT_00012c98);
  puts(DAT_00012c9c);
  puts(DAT_00012ca0);
  puts(DAT_00012ca4);
  puts(DAT_00012ca8);
  puts(DAT_00012cac);
  puts(DAT_00012cb0);
  puts(DAT_00012cb4);
  puts(DAT_00012cb8);
  puts(DAT_00012cbc);
  puts(DAT_00012cc0);
  puts(DAT_00012cc4);
  return;
}



/* ===== FUN_00012cc8 @ 00012cc8 size=764 ===== */

int FUN_00012cc8(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 local_1c;
  uint uStack_18;
  uint local_14;
  
  iVar1 = RK_MPI_VI_GetDevAttr(param_1[7],param_1 + 0x10);
  if (iVar1 == DAT_00012fc4) {
    iVar1 = RK_MPI_VI_SetDevAttr(param_1[7],param_1 + 0x10);
    if (iVar1 == 0) goto LAB_00012d40;
    uVar7 = 0x29;
    uVar5 = DAT_00012fc8;
  }
  else {
    RK_LOG(2,DAT_00012fd0,DAT_00012fd4,DAT_00012fcc,0x2d);
LAB_00012d40:
    iVar1 = RK_MPI_VI_GetDevIsEnable(param_1[7]);
    if (iVar1 == 0) {
      RK_LOG(2,DAT_00012fd0,DAT_00012fe4,DAT_00012fcc,0x42);
LAB_00012dfc:
      param_1[0x28] = param_1[4];
      param_1[0x29] = param_1[5];
      iVar1 = RK_MPI_VI_SetChnAttr(param_1[8],param_1[9],param_1 + 0x28);
      if (iVar1 == 0) {
        if (*param_1 != 0) {
          uVar4 = param_1[3];
          uVar6 = param_1[5];
          local_1c = 0;
          uStack_18 = 0;
          local_14 = 0;
          if ((uVar4 < 0x80) || (uVar6 < uVar4)) {
            uVar7 = 0x51;
            uVar5 = DAT_00012fec;
LAB_00012e7c:
            RK_LOG(2,DAT_00012fd0,uVar5,DAT_00012fcc,uVar7,uVar6);
            return -1;
          }
          local_1c = 1;
          local_14 = param_1[4] * uVar4 * 3 >> 1;
          uStack_18 = uVar4;
          uVar6 = RK_MPI_VI_SetChnWrapBufAttr(param_1[8],param_1[9],&local_1c);
          if (uVar6 != 0) {
            uVar7 = 0x59;
            uVar5 = DAT_00012ff0;
            goto LAB_00012e7c;
          }
        }
        if (param_1[2] == 0) {
          iVar1 = RK_MPI_VI_EnableChn();
        }
        else {
          iVar1 = RK_MPI_VI_EnableChnExt(param_1[8],param_1[9]);
        }
        if (iVar1 == 0) {
          if ((param_1[1] == 0) ||
             (iVar1 = RK_MPI_VI_SetEptz(param_1[8],param_1[9],param_1[10],param_1[0xb],param_1[0xc],
                                        param_1[0xd],param_1[0xe],param_1[0xf]), iVar1 == 0)) {
            iVar1 = 0;
            if (param_1[0x43] == 0) {
              return 0;
            }
            iVar3 = RK_MPI_VI_ChnSaveFile(param_1[8],param_1[9],param_1 + 0x43);
            uVar7 = 0x75;
            uVar2 = 5;
            uVar5 = DAT_00012ffc;
            goto LAB_00012fbc;
          }
          uVar7 = 0x6d;
          uVar5 = DAT_00012ff8;
          goto LAB_00012db0;
        }
        RK_LOG(2,DAT_00012fd0,DAT_00012ff4,DAT_00012fcc,0x66,iVar1,param_1[8],param_1[9]);
      }
      else {
        uVar7 = 0x4a;
        uVar5 = DAT_00012fe8;
LAB_00012db0:
        RK_LOG(2,DAT_00012fd0,uVar5,DAT_00012fcc,uVar7,iVar1);
      }
      iVar1 = RK_MPI_VI_DisableDev(param_1[7]);
      uVar7 = 0x7d;
      uVar5 = DAT_00012fe0;
    }
    else {
      iVar1 = RK_MPI_VI_EnableDev(param_1[7]);
      if (iVar1 == 0) {
        param_1[0x17] = 1;
        param_1[0x18] = param_1[8];
        iVar1 = RK_MPI_VI_SetDevBindPipe(param_1[7],param_1 + 0x17);
        if (iVar1 == 0) goto LAB_00012dfc;
        uVar7 = 0x3e;
        uVar5 = DAT_00012fdc;
        goto LAB_00012db0;
      }
      uVar7 = 0x36;
      uVar5 = DAT_00012fd8;
    }
  }
  uVar2 = 2;
  iVar3 = iVar1;
LAB_00012fbc:
  RK_LOG(uVar2,DAT_00012fd0,uVar5,DAT_00012fcc,uVar7,iVar3);
  return iVar1;
}



/* ===== FUN_00013000 @ 00013000 size=236 ===== */

undefined4 FUN_00013000(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = RK_MPI_VI_GetChnFrame
                    (*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),param_1 + 0x318
                     ,0xffffffff);
  if (iVar1 == 0) {
    uVar2 = RK_MPI_MB_Handle2VirAddr(*(undefined4 *)(param_1 + 0x318));
    *param_2 = uVar2;
    uVar2 = RK_MPI_VI_QueryChnStatus
                      (*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
                       param_1 + 0x368);
    RK_LOG(5,DAT_000130f0,DAT_000130ec,DAT_000130f4,0x92,*(undefined4 *)(param_1 + 0x1c),
           *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),uVar2,
           *(undefined4 *)(param_1 + 0x380),*(undefined4 *)(param_1 + 900),
           *(undefined4 *)(param_1 + 0x368),*(undefined4 *)(param_1 + 0x374),
           *(undefined4 *)(param_1 + 0x378),*(undefined4 *)(param_1 + 0x36c),
           *(undefined4 *)(param_1 + 0x37c));
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
    RK_LOG(2,DAT_000130f0,DAT_000130f8,DAT_000130f4,0x94,*(undefined4 *)(param_1 + 0x1c),iVar1);
  }
  return uVar2;
}



/* ===== FUN_000130fc @ 000130fc size=68 ===== */

undefined4 FUN_000130fc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = RK_MPI_VI_ReleaseChnFrame
                    (*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),param_1 + 0x318
                     ,param_4,param_1,param_2,param_3);
  if (iVar1 != 0) {
    RK_LOG(2,DAT_00013148,DAT_00013144,DAT_00013140,0xa0,iVar1);
  }
  return 0;
}



/* ===== FUN_0001314c @ 0001314c size=104 ===== */

uint FUN_0001314c(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 8) == 0) {
    uVar1 = RK_MPI_VI_DisableChn();
  }
  else {
    uVar1 = RK_MPI_VI_DisableChnExt
                      (*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),param_3,
                       *(int *)(param_1 + 8),param_1,param_2,param_3);
  }
  uVar2 = RK_MPI_VI_DisableDev(*(undefined4 *)(param_1 + 0x1c));
  uVar1 = uVar1 | uVar2;
  if (uVar1 != 0) {
    RK_LOG(2,DAT_000131bc,DAT_000131b8,DAT_000131b4,0xaf,uVar1);
  }
  return uVar1;
}



/* ===== FUN_000131c0 @ 000131c0 size=652 ===== */

int FUN_000131c0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 in_q4 [16];
  undefined1 auVar10 [16];
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  size_t local_9c [4];
  int local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  size_t local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 uStack_34;
  undefined8 uStack_2c;
  
  uStack_34 = in_q4._0_8_;
  uStack_2c = in_q4._8_8_;
  iVar2 = RK_MPI_AVS_CreateGrp(param_1[6],param_1 + 10);
  if (iVar2 != 0) {
    RK_LOG(2,DAT_00013454,DAT_00013450,DAT_0001344c,0x25,iVar2);
    return iVar2;
  }
  if (*param_1 == 2) {
    local_9c[3] = param_1[2];
    auVar10._8_8_ = 0;
    auVar10._0_8_ = in_q4._8_8_;
    auVar10 = auVar10 << 0x40;
    local_8c = param_1[3];
    local_9c[0] = 0;
    local_88 = 0;
    local_9c[1] = 0;
    local_9c[2] = 0;
    iVar2 = RK_MPI_CAL_AVS_GetFinalLutBufferSize(local_9c + 3,local_9c);
    uVar1 = DAT_0001345c;
    uVar14 = DAT_00013454;
    uVar5 = DAT_0001344c;
    if ((iVar2 == 0) && (local_9c[0] != 0)) {
      uVar9 = 0;
      uVar11 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uVar12 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uVar13 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      puVar8 = &local_80;
      local_80 = 0;
      local_70 = auVar10._0_8_;
      uStack_7c = uVar11;
      uStack_78 = uVar12;
      uStack_74 = uVar13;
      local_68 = local_70;
      for (uVar7 = 0; uVar7 < (uint)param_1[0xb]; uVar7 = uVar7 + 1) {
        uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        iVar2 = param_1[5];
        local_50 = 0;
        local_48 = 0;
        local_40 = 0;
        local_60 = uVar9;
        uStack_5c = uVar11;
        uStack_58 = uVar12;
        uStack_54 = uVar13;
        uStack_44 = uStack_4c;
        uStack_3c = uStack_4c;
        pvVar3 = malloc(local_9c[0]);
        *(void **)(iVar2 + uVar7 * 4) = pvVar3;
        if (pvVar3 == (void *)0x0) {
          RK_LOG(2,DAT_00013454,DAT_00013468,DAT_0001344c,0x3b);
          return -1;
        }
        RK_LOG(5,uVar14,uVar1,uVar5,0x3f,iVar2,uVar7,pvVar3);
        uVar6 = *(undefined4 *)(param_1[5] + uVar7 * 4);
        local_48 = local_9c[0];
        uStack_44 = 0;
        uVar15 = uVar7;
        local_60 = uVar6;
        uStack_3c = uVar6;
        RK_LOG(5,uVar14,DAT_0001346c,uVar5,0x44,param_1[5],uVar7,uVar6);
        puVar4 = puVar8 + 4;
        puVar8 = puVar8 + 1;
        iVar2 = RK_MPI_SYS_CreateMB(puVar4,&local_60);
        if (iVar2 != 0) {
          RK_LOG(2,DAT_00013454,DAT_00013470,DAT_0001344c,0x48,iVar2,uVar15,uVar6);
          return iVar2;
        }
      }
      RK_LOG(2,DAT_00013454,DAT_00013460,DAT_0001344c,0x4c);
      iVar2 = RK_MPI_AVS_GetFinalLut(param_1[6],&local_80);
      uVar7 = 0;
      if (iVar2 == 0) {
        for (; uVar7 < (uint)param_1[0xb]; uVar7 = uVar7 + 1) {
          RK_MPI_SYS_Free(*(undefined4 *)((int)&local_70 + uVar7 * 4));
        }
        goto LAB_0001342c;
      }
      uVar14 = 0x4f;
      uVar5 = DAT_00013464;
    }
    else {
      uVar14 = 0x32;
      uVar5 = DAT_00013458;
    }
    RK_LOG(2,DAT_00013454,uVar5,DAT_0001344c,uVar14,iVar2);
  }
  else {
LAB_0001342c:
    RK_LOG(2,DAT_00013454,DAT_00013474,DAT_0001344c,0x57);
    iVar2 = 0;
  }
  return iVar2;
}



/* ===== FUN_00013478 @ 00013478 size=300 ===== */

int FUN_00013478(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x18) < 2) {
    if (*(int *)(param_1 + 0x1c) < 2) {
      iVar4 = 0;
      iVar3 = param_1;
      iVar6 = param_1;
      while( true ) {
        if ((*(int *)(iVar3 + 0x1dc) != 0) && (*(int *)(iVar3 + 0x1e0) != 0)) {
          iVar1 = RK_MPI_AVS_SetChnAttr
                            (*(undefined4 *)(param_1 + 0x18),iVar4,iVar3 + 0x1dc,
                             *(int *)(iVar3 + 0x1e0),iVar6,param_2,param_3);
          if (iVar1 != 0) {
            uVar5 = 0x6f;
            uVar2 = DAT_000135b4;
            goto LAB_00013534;
          }
          iVar1 = RK_MPI_AVS_EnableChn(*(undefined4 *)(param_1 + 0x18),iVar4);
          if (iVar1 != 0) {
            uVar5 = 0x75;
            uVar2 = DAT_000135b8;
            goto LAB_00013534;
          }
        }
        iVar3 = iVar3 + 0x20;
        if (iVar4 == 1) break;
        iVar4 = 1;
      }
      iVar1 = RK_MPI_AVS_StartGrp(*(undefined4 *)(param_1 + 0x18));
      if (iVar1 == 0) {
        return 0;
      }
      uVar5 = 0x7d;
      uVar2 = DAT_000135bc;
LAB_00013534:
      RK_LOG(2,DAT_000135ac,uVar2,DAT_000135a8,uVar5,iVar1);
      return iVar1;
    }
    uVar5 = 0x65;
    uVar2 = DAT_000135b0;
  }
  else {
    uVar5 = 0x60;
    uVar2 = DAT_000135a4;
  }
  RK_LOG(2,DAT_000135ac,uVar2,DAT_000135a8,uVar5,2);
  return -1;
}



/* ===== FUN_000135c0 @ 000135c0 size=108 ===== */

undefined4 FUN_000135c0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = RK_MPI_AVS_GetChnFrame
                    (*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),param_1 + 0x220
                     ,0xffffffff);
  if (iVar1 == 0) {
    uVar2 = RK_MPI_MB_Handle2VirAddr(*(undefined4 *)(param_1 + 0x220));
    *param_2 = uVar2;
  }
  else {
    RK_LOG(2,DAT_00013630,DAT_0001362c,DAT_00013634,0x8d,*(undefined4 *)(param_1 + 0x18),iVar1);
  }
  return 0;
}



/* ===== FUN_00013638 @ 00013638 size=68 ===== */

undefined4 FUN_00013638(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = RK_MPI_AVS_ReleaseChnFrame
                    (*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),param_1 + 0x220
                     ,param_4,param_1,param_2,param_3);
  if (iVar1 != 0) {
    RK_LOG(2,DAT_00013684,DAT_00013680,DAT_0001367c,0x98,iVar1);
  }
  return 0;
}



/* ===== FUN_00013688 @ 00013688 size=196 ===== */

int FUN_00013688(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = RK_MPI_AVS_StopGrp(*(undefined4 *)(param_1 + 0x18));
  if (iVar1 == 0) {
    if ((((*(int *)(param_1 + 0x1dc) != 0) && (*(int *)(param_1 + 0x1e0) != 0)) &&
        (iVar2 = RK_MPI_AVS_DisableChn(*(undefined4 *)(param_1 + 0x18),0), iVar2 != 0)) ||
       (((*(int *)(param_1 + 0x1fc) != 0 && (*(int *)(param_1 + 0x200) != 0)) &&
        (iVar2 = RK_MPI_AVS_DisableChn(*(undefined4 *)(param_1 + 0x18),1), iVar2 != 0)))) {
      iVar1 = iVar2;
      RK_LOG(2,DAT_00013754,DAT_00013758,DAT_0001374c,0xab,iVar1);
    }
  }
  else {
    RK_LOG(2,DAT_00013754,DAT_00013750,DAT_0001374c,0xa2,iVar1);
  }
  return iVar1;
}



/* ===== FUN_0001375c @ 0001375c size=140 ===== */

int FUN_0001375c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  void *__ptr;
  uint uVar2;
  
  iVar1 = RK_MPI_AVS_DestroyGrp(param_1[6]);
  if (iVar1 == 0) {
    if (*param_1 == 2) {
      for (uVar2 = 0; uVar2 < (uint)param_1[0xb]; uVar2 = uVar2 + 1) {
        __ptr = *(void **)(param_1[5] + uVar2 * 4);
        if (__ptr != (void *)0x0) {
          free(__ptr);
          *(undefined4 *)(param_1[5] + uVar2 * 4) = 0;
        }
      }
    }
  }
  else {
    RK_LOG(2,DAT_000137f0,DAT_000137ec,DAT_000137e8,0xb9,iVar1,param_3);
  }
  return iVar1;
}



/* ===== FUN_000139b4 @ 000139b4 size=60 ===== */

int FUN_000139b4(void)

{
  int iVar1;
  
  iVar1 = RK_MPI_SYS_Bind();
  if (iVar1 != 0) {
    RK_LOG(2,DAT_000139f8,DAT_000139f4,DAT_000139f0,0x4d,iVar1);
  }
  return iVar1;
}



/* ===== FUN_000139fc @ 000139fc size=60 ===== */

int FUN_000139fc(void)

{
  int iVar1;
  
  iVar1 = RK_MPI_SYS_UnBind();
  if (iVar1 != 0) {
    RK_LOG(2,DAT_00013a40,DAT_00013a3c,DAT_00013a38,0x59,iVar1);
  }
  return iVar1;
}



/* ===== FUN_00013a44 @ 00013a44 size=312 ===== */

undefined4 FUN_00013a44(char *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  FILE *__stream;
  short local_46;
  undefined1 auStack_44 [4];
  undefined4 local_40;
  undefined4 local_3c;
  
  *param_2 = 0x100;
  *param_3 = 0x100;
  if (param_1 == (char *)0x0) {
    RK_LOG(2,DAT_00013b84,DAT_00013b7c,DAT_00013b80,0x69);
  }
  else {
    __stream = fopen64(param_1,DAT_00013b88);
    if (__stream == (FILE *)0x0) {
      RK_LOG(2,DAT_00013b84,DAT_00013b8c,DAT_00013b80,0x6f,param_1);
    }
    else {
      fread(&local_46,1,2,__stream);
      if (local_46 == 0x4d42) {
        fseek(__stream,0xc,1);
        fread(auStack_44,1,0x2c,__stream);
        uVar2 = DAT_00013b94;
        uVar1 = DAT_00013b84;
        *param_2 = local_40;
        *param_3 = local_3c;
        RK_LOG(2,uVar1,uVar2,DAT_00013b80,0x7e,*param_2,local_3c);
        fclose(__stream);
        return 0;
      }
      RK_LOG(2,DAT_00013b84,DAT_00013b90,DAT_00013b80,0x75);
      fclose(__stream);
    }
  }
  return 0xffffffff;
}



/* ===== FUN_00013dd4 @ 00013dd4 size=236 ===== */

undefined4 FUN_00013dd4(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  char *__format;
  undefined4 uVar2;
  char acStack_158 [16];
  undefined1 auStack_148 [304];
  
  iVar1 = DAT_00013ecc;
  if (param_1 < 8) {
    setlinebuf((FILE *)*DAT_00013ec8);
    __format = DAT_00013ed8;
    if (param_4 == 0) {
      puts(DAT_00013ed0);
      uVar2 = 0;
    }
    else {
      *(undefined4 *)(DAT_00013ed4 + param_1 * 4) = param_2;
      snprintf(acStack_158,0x10,__format,param_2);
      setenv(DAT_00013edc,acStack_158,1);
      rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId(param_1,auStack_148);
      printf(DAT_00013ee0,param_1,auStack_148,param_4);
      rk_aiq_uapi2_sysctl_preInit_devBufCnt(auStack_148,DAT_00013ee4,2);
      uVar2 = rk_aiq_uapi2_sysctl_init(auStack_148,param_4,DAT_00013eec,DAT_00013ee8);
      if (param_3 != 0) {
        rk_aiq_uapi2_sysctl_setMulCamConc(uVar2,1);
      }
    }
    *(undefined4 *)(iVar1 + param_1 * 4) = uVar2;
    uVar2 = 0;
  }
  else {
    printf(DAT_00013ec4,DAT_00013ec0);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== FUN_00013ef0 @ 00013ef0 size=488 ===== */

int FUN_00013ef0(int param_1,ushort *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *__format;
  int iVar6;
  ushort *__s;
  int *piVar7;
  int iVar8;
  int local_108;
  int local_104 [8];
  int local_e4 [8];
  undefined1 auStack_c4 [8];
  undefined1 local_bc;
  ushort *local_90;
  undefined1 local_8c;
  ushort *local_88;
  int local_84;
  char acStack_48 [36];
  
  memset(&local_108,0,0x44);
  iVar3 = DAT_000140dc;
  __format = DAT_000140d8;
  __s = param_2;
  if ((int)param_2 - 1U < 2) {
    iVar4 = rk_aiq_uapi2_camgroup_getCamInfos
                      (*(undefined4 *)(DAT_000140dc + param_1 * 4),&local_108);
    if (iVar4 == 0) {
      piVar7 = &local_108;
      iVar4 = 0;
      for (iVar8 = 0; iVar8 < local_108; iVar8 = iVar8 + 1) {
        iVar6 = rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm
                          (*(undefined4 *)(iVar3 + param_1 * 4),piVar7[1]);
        if (iVar6 == 0) {
          puts(DAT_000140f8);
          goto LAB_000140c8;
        }
        printf(DAT_000140e0,piVar7[1],piVar7[9]);
        memset(auStack_c4,0,0x9c);
        iVar4 = rk_aiq_user_api2_aldch_v21_GetAttrib(iVar6,auStack_c4);
        if (iVar4 == 0) {
          __s = *(ushort **)(param_3 + iVar8 * 4);
          if (param_2 == (ushort *)0x2) {
            local_bc = 1;
            local_8c = 1;
            local_90 = param_2;
            local_88 = __s;
            if (__s == (ushort *)0x0) {
              puts(DAT_000140e4);
              local_84 = -1;
            }
            else {
              uVar1 = __s[2];
              uVar2 = __s[3];
              printf(DAT_000140ec,(uint)*__s,(uint)__s[1],(uint)uVar1,(uint)uVar2,(uint)__s[4],
                     (uint)__s[5]);
              local_84 = ((uint)uVar2 * (uint)uVar1 + 6) * 2;
            }
          }
          else {
            pcVar5 = strrchr((char *)__s,0x2f);
            __format = DAT_000140f0;
            if (pcVar5 == (char *)0x0) goto LAB_00014048;
            local_bc = 1;
            local_8c = 1;
            local_90 = (ushort *)0x1;
            memcpy(&local_88,__s,(size_t)(pcVar5 + (1 - (int)__s)));
            strcpy(acStack_48,pcVar5 + 1);
            printf(DAT_000140f4,&local_88,acStack_48);
          }
          iVar6 = rk_aiq_user_api2_aldch_v21_SetAttrib(iVar6,auStack_c4);
          iVar4 = 0;
          if (iVar6 != 0) {
            printf(DAT_000140e8,iVar6);
            return iVar6;
          }
        }
        piVar7 = piVar7 + 1;
      }
    }
    else {
      iVar4 = 0;
    }
  }
  else {
LAB_00014048:
    printf(__format,__s);
LAB_000140c8:
    iVar4 = -1;
  }
  return iVar4;
}



/* ===== FUN_000140fc @ 000140fc size=352 ===== */

undefined4
FUN_000140fc(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5,
            int param_6)

{
  char *__format;
  char *__format_00;
  undefined4 uVar1;
  char *__s;
  size_t sVar2;
  int iVar3;
  int iVar4;
  undefined1 *__dest;
  char acStack_558 [304];
  undefined1 auStack_428 [1028];
  
  uVar1 = DAT_00014280;
  __format_00 = DAT_0001427c;
  __format = DAT_00014278;
  if (param_1 < 8) {
    for (iVar4 = 0; iVar3 = DAT_0001426c, iVar4 < *(int *)(param_6 + 0x20); iVar4 = iVar4 + 1) {
      iVar3 = rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId(iVar4,acStack_558);
      __s = DAT_00014264;
      if (iVar3 != 0) goto LAB_00014154;
      printf(__format,param_1,iVar4,acStack_558,*(undefined4 *)(param_6 + 0x24));
      __dest = auStack_428 + iVar4 * 0x80;
      sVar2 = strlen(acStack_558);
      memcpy(__dest,acStack_558,sVar2 + 1);
      *(undefined1 **)(param_6 + iVar4 * 4) = __dest;
      printf(__format_00,iVar4,__dest);
      iVar3 = rk_aiq_uapi2_sysctl_preInit_devBufCnt(acStack_558,uVar1,2);
      __s = DAT_00014268;
      if (iVar3 != 0) goto LAB_00014154;
    }
    iVar4 = rk_aiq_uapi2_camgroup_create(param_6);
    *(int *)(iVar3 + param_1 * 4) = iVar4;
    __s = DAT_00014270;
    if (iVar4 != 0) {
      if (param_4 != 0) {
        FUN_00013ef0(param_1,param_4 & 0xff,param_5);
      }
      iVar4 = rk_aiq_uapi2_camgroup_prepare(*(undefined4 *)(iVar3 + param_1 * 4),param_2);
      iVar3 = rk_aiq_uapi2_camgroup_start(*(undefined4 *)(iVar3 + param_1 * 4));
      __s = DAT_00014274;
      if (iVar4 == 0 && iVar3 == 0) {
        puts(DAT_00014284);
        return 0;
      }
    }
LAB_00014154:
    puts(__s);
  }
  else {
    printf(DAT_00014260,DAT_0001425c,8);
  }
  return 0xffffffff;
}



/* ===== FUN_00014288 @ 00014288 size=112 ===== */

undefined4 FUN_00014288(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_000142f8;
  if ((param_1 < 8) && (*(int *)(DAT_000142f8 + param_1 * 4) != 0)) {
    puts(DAT_00014304);
    rk_aiq_uapi2_sysctl_stop(*(undefined4 *)(iVar1 + param_1 * 4),0);
    puts(DAT_00014308);
    rk_aiq_uapi2_sysctl_deinit(*(undefined4 *)(iVar1 + param_1 * 4));
    puts(DAT_0001430c);
    *(undefined4 *)(iVar1 + param_1 * 4) = 0;
    return 0;
  }
  printf(DAT_00014300,DAT_000142fc,param_1);
  return 0xffffffff;
}



/* ===== FUN_00014310 @ 00014310 size=104 ===== */

undefined4 FUN_00014310(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_00014378;
  if (param_1 < 8) {
    if (*(int *)(DAT_00014378 + param_1 * 4) != 0) {
      puts(DAT_00014384);
      rk_aiq_uapi2_camgroup_stop(*(undefined4 *)(iVar1 + param_1 * 4));
      puts(DAT_00014388);
      rk_aiq_uapi2_camgroup_destroy(*(undefined4 *)(iVar1 + param_1 * 4));
      puts(DAT_0001438c);
      *(undefined4 *)(iVar1 + param_1 * 4) = 0;
      return 0;
    }
  }
  printf(DAT_00014380,DAT_0001437c);
  return 0xffffffff;
}



/* ===== FUN_00014390 @ 00014390 size=152 ===== */

undefined4 FUN_00014390(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_00014428;
  if ((param_1 < 8) && (iVar1 = *(int *)(DAT_00014428 + param_1 * 4), iVar1 != 0)) {
    iVar1 = rk_aiq_uapi2_sysctl_prepare(iVar1,0,0,*(undefined4 *)(DAT_00014434 + param_1 * 4));
    if (iVar1 == 0) {
      puts(DAT_0001443c);
      iVar2 = rk_aiq_uapi2_sysctl_start(*(undefined4 *)(iVar2 + param_1 * 4));
      if (iVar2 == 0) {
        puts(DAT_00014444);
        return 0;
      }
      puts(DAT_00014440);
    }
    else {
      puts(DAT_00014438);
      *(undefined4 *)(iVar2 + param_1 * 4) = 0;
    }
  }
  else {
    printf(DAT_00014430,DAT_0001442c);
  }
  return 0xffffffff;
}



/* ===== FUN_000144f0 @ 000144f0 size=156 ===== */

undefined4 FUN_000144f0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint in_fpscr;
  undefined1 auStack_a18 [1276];
  undefined4 local_51c;
  undefined4 uStack_518;
  undefined4 uStack_514;
  undefined1 auStack_510 [292];
  undefined1 local_3ec;
  undefined4 local_3e8;
  
  iVar1 = DAT_0001458c;
  if ((param_1 < 8) && (iVar2 = *(int *)(DAT_0001458c + param_1 * 4), iVar2 != 0)) {
    rk_aiq_user_api2_ae_getExpSwAttr(iVar2,&local_51c);
    local_3ec = param_2 != 0;
    if ((bool)local_3ec) {
      local_3e8 = VectorUnsignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
    }
    memcpy(auStack_a18,auStack_510,0x4f8);
    uVar3 = rk_aiq_user_api2_ae_setExpSwAttr
                      (*(undefined4 *)(iVar1 + param_1 * 4),local_51c,uStack_518,uStack_514);
  }
  else {
    printf(DAT_00014594,DAT_00014590);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



/* ===== FUN_000147f4 @ 000147f4 size=76 ===== */

void FUN_000147f4(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  if (param_4 != 0 || param_3 != 0) {
    FUN_00014840();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_00014840 @ 00014840 size=328 ===== */

undefined8 FUN_00014840(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  bVar8 = param_4 <= param_2;
  if (param_2 == param_4) {
    bVar8 = param_3 <= param_1;
  }
  if (bVar8) {
    if (param_4 == 0) {
      iVar3 = LZCOUNT(param_3) + 0x20;
    }
    else {
      iVar3 = LZCOUNT(param_4);
    }
    if (param_2 == 0) {
      iVar6 = LZCOUNT(param_1) + 0x20;
    }
    else {
      iVar6 = LZCOUNT(param_2);
    }
    uVar7 = iVar3 - iVar6;
    uVar2 = param_4 << (uVar7 & 0xff) | param_3 << (uVar7 - 0x20 & 0xff) |
            param_3 >> (0x20 - uVar7 & 0xff);
    param_3 = param_3 << (uVar7 & 0xff);
    bVar8 = uVar2 <= param_2;
    if (param_2 == uVar2) {
      bVar8 = param_3 <= param_1;
    }
    if (bVar8) {
      bVar8 = param_1 < param_3;
      param_1 = param_1 - param_3;
      param_2 = param_2 - (uVar2 + bVar8);
      uVar9 = CONCAT44(0 << (uVar7 & 0xff) | 1 << (uVar7 - 0x20 & 0xff) |
                       1U >> (0x20 - uVar7 & 0xff),1 << (uVar7 & 0xff));
    }
    else {
      uVar9 = 0;
    }
    if (uVar7 != 0) {
      uVar1 = param_3 >> 1 | uVar2 << 0x1f;
      uVar2 = uVar2 >> 1;
      uVar4 = uVar7;
      do {
        bVar8 = uVar2 <= param_2;
        if (param_2 == uVar2) {
          bVar8 = uVar1 <= param_1;
        }
        if (bVar8) {
          bVar8 = param_1 < uVar1;
          uVar5 = param_1 - uVar1;
          param_1 = uVar5 * 2 + 1;
          param_2 = (param_2 - (uVar2 + bVar8)) * 2 + (uint)CARRY4(uVar5,uVar5) +
                    (uint)(0xfffffffe < uVar5 * 2);
        }
        else {
          bVar8 = CARRY4(param_1,param_1);
          param_1 = param_1 * 2;
          param_2 = param_2 * 2 + (uint)bVar8;
        }
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      uVar10 = CONCAT44(param_2,param_1);
      param_1 = param_1 >> (uVar7 & 0xff) | param_2 << (0x20 - uVar7 & 0xff) |
                param_2 >> (uVar7 - 0x20 & 0xff);
      param_2 = param_2 >> (uVar7 & 0xff);
      uVar9 = VectorAdd(uVar9,uVar10,8);
      uVar9 = VectorSub(uVar9,CONCAT44(param_2 << (uVar7 & 0xff) | param_1 << (uVar7 - 0x20 & 0xff)
                                       | param_1 >> (0x20 - uVar7 & 0xff),param_1 << (uVar7 & 0xff))
                        ,8);
    }
  }
  else {
    uVar9 = 0;
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = param_1;
    param_5[1] = param_2;
  }
  return uVar9;
}



/* ===== _fini @ 00014988 size=16 ===== */

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



/* ===== <EXTERNAL>::__deregister_frame_info @ 0002800c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_start @ 00028010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_start(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen64 @ 00028014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_stop @ 00028018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_stop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AVS_DestroyGrp @ 0002801c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AVS_DestroyGrp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 00028020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AVS_GetChnFrame @ 00028024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AVS_GetChnFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AVS_StopGrp @ 00028028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AVS_StopGrp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 0002802c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevAttr @ 00028030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetDevAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_StartPipe @ 00028034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_StartPipe(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_ChnSaveFile @ 00028038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_ChnSaveFile(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_start @ 0002803c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_start(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 00028040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevBindPipe @ 00028044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetDevBindPipe(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_deinit @ 00028048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_deinit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_QueryChnStatus @ 0002804c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_QueryChnStatus(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usleep @ 00028050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_CAL_TDE_GetPicBufferSize @ 00028054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_CAL_TDE_GetPicBufferSize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::signal @ 00028058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId @ 0002805c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 00028060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_Handle2VirAddr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AVS_CreateGrp @ 00028064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AVS_CreateGrp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChnExt @ 00028068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_EnableChnExt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_getCamInfos @ 0002806c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_getCamInfos(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 00028070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sleep @ 00028074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_create @ 00028078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableDev @ 0002807c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_EnableDev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_destroy @ 00028080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_destroy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atof @ 00028084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double atof(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 00028088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_UnBind @ 0002808c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_UnBind(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_prepare @ 00028090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_prepare(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 00028094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_ae_getExpSwAttr @ 00028098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_user_api2_ae_getExpSwAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 0002809c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strchr @ 000280a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setlinebuf @ 000280a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void setlinebuf(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AVS_DisableChn @ 000280a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AVS_DisableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnAttr @ 000280ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetChnAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_CreateMB @ 000280b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_CreateMB(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Free @ 000280b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Free(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_join @ 000280b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChn @ 000280bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_DisableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strrchr @ 000280c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 000280c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_aldch_v21_SetAttrib @ 000280c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_user_api2_aldch_v21_SetAttrib(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_preInit_devBufCnt @ 000280cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_preInit_devBufCnt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AVS_StartGrp @ 000280d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AVS_StartGrp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_CAL_AVS_GetFinalLutBufferSize @ 000280d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_CAL_AVS_GetFinalLutBufferSize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 000280d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Bind @ 000280dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Bind(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_ReleaseChnFrame @ 000280e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_ReleaseChnFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 000280e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_setMirrorFlip @ 000280e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_setMirrorFlip(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChnExt @ 000280ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_DisableChnExt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::raise @ 000280f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AVS_GetFinalLut @ 000280f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AVS_GetFinalLut(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_create @ 000280f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_create(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetEptz @ 000280fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetEptz(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::system @ 00028100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int system(char *__command)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AVS_ReleaseChnFrame @ 00028104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AVS_ReleaseChnFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_StopPipe @ 00028108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_StopPipe(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_init @ 0002810c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gettimeofday @ 00028110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 00028114 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableDev @ 00028118 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_DisableDev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetChnFrame @ 0002811c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetChnFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 00028120 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AVS_SetChnAttr @ 00028124 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AVS_SetChnAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fseek @ 00028128 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 0002812c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00028130 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 00028134 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Exit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_ae_setExpSwAttr @ 00028138 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_user_api2_ae_setExpSwAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_stop @ 0002813c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_stop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fread @ 00028140 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 00028144 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt_long @ 00028148 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void getopt_long(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 0002814c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevAttr @ 00028150 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetDevAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_prepare @ 00028154 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_prepare(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm @ 00028158 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 0002815c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AVS_EnableChn @ 00028160 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AVS_EnableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnWrapBufAttr @ 00028164 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetChnWrapBufAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_setMulCamConc @ 00028168 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_setMulCamConc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 0002816c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevIsEnable @ 00028170 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetDevIsEnable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_switch_scene @ 00028174 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_switch_scene(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_aldch_v21_GetAttrib @ 00028178 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_user_api2_aldch_v21_GetAttrib(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_LOG @ 0002817c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_LOG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setenv @ 00028180 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setenv(char *__name,char *__value,int __replace)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChn @ 00028184 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_EnableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


