// sample_vpss_stresstest — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00011d70 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 00011d94 size=12 ===== */

void RK_MPI_SYS_Exit(void)

{
  (*(code *)PTR_RK_MPI_SYS_Exit_0002700c)();
  return;
}



/* ===== <EXTERNAL>::sem_init @ 00011da0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sem_init(sem_t *__sem,int __pshared,uint __value)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sem_init_00027010)(__sem);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Bind @ 00011dac size=12 ===== */

void RK_MPI_SYS_Bind(void)

{
  (*(code *)PTR_RK_MPI_SYS_Bind_00027014)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_SetVProcDev @ 00011db8 size=12 ===== */

void RK_MPI_VPSS_SetVProcDev(void)

{
  (*(code *)PTR_RK_MPI_VPSS_SetVProcDev_00027018)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm @ 00011dc4 size=12 ===== */

void rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm_0002701c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_QueryChnStatus @ 00011dd0 size=12 ===== */

void RK_MPI_VI_QueryChnStatus(void)

{
  (*(code *)PTR_RK_MPI_VI_QueryChnStatus_00027020)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00011ddc size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00027024)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnWrapBufAttr @ 00011de8 size=12 ===== */

void RK_MPI_VI_SetChnWrapBufAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetChnWrapBufAttr_00027028)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_GetGrpCrop @ 00011df4 size=12 ===== */

void RK_MPI_VPSS_GetGrpCrop(void)

{
  (*(code *)PTR_RK_MPI_VPSS_GetGrpCrop_0002702c)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_destroy @ 00011e00 size=12 ===== */

void rk_aiq_uapi2_camgroup_destroy(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_destroy_00027030)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_ae_setExpSwAttr @ 00011e0c size=12 ===== */

void rk_aiq_user_api2_ae_setExpSwAttr(void)

{
  (*(code *)PTR_rk_aiq_user_api2_ae_setExpSwAttr_00027034)();
  return;
}



/* ===== <EXTERNAL>::fwrite @ 00011e18 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_00027038)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::system @ 00011e24 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int system(char *__command)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_system_0002703c)(__command);
  return iVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_switch_scene @ 00011e30 size=12 ===== */

void rk_aiq_uapi2_sysctl_switch_scene(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_switch_scene_00027040)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChn @ 00011e3c size=12 ===== */

void RK_MPI_VI_DisableChn(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableChn_00027044)();
  return;
}



/* ===== <EXTERNAL>::usleep @ 00011e48 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_usleep_00027048)(__useconds);
  return iVar1;
}



/* ===== <EXTERNAL>::memcpy @ 00011e54 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_0002704c)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_SetChnCrop @ 00011e60 size=12 ===== */

void RK_MPI_VPSS_SetChnCrop(void)

{
  (*(code *)PTR_RK_MPI_VPSS_SetChnCrop_00027050)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_setMulCamConc @ 00011e6c size=12 ===== */

void rk_aiq_uapi2_sysctl_setMulCamConc(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_setMulCamConc_00027054)();
  return;
}



/* ===== <EXTERNAL>::sleep @ 00011e78 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_sleep_00027058)(__seconds);
  return uVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_ReleaseChnFrame @ 00011e84 size=12 ===== */

void RK_MPI_VI_ReleaseChnFrame(void)

{
  (*(code *)PTR_RK_MPI_VI_ReleaseChnFrame_0002705c)();
  return;
}



/* ===== <EXTERNAL>::pthread_mutex_init @ 00011e90 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_00027060)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_create @ 00011e9c size=12 ===== */

void rk_aiq_uapi2_camgroup_create(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_create_00027064)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_GetMB @ 00011ea8 size=12 ===== */

void RK_MPI_MB_GetMB(void)

{
  (*(code *)PTR_RK_MPI_MB_GetMB_00027068)();
  return;
}



/* ===== <EXTERNAL>::gettimeofday @ 00011eb4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_gettimeofday_0002706c)(__tv);
  return iVar1;
}



/* ===== <EXTERNAL>::prctl @ 00011ec0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int prctl(int __option,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_prctl_00027070)(__option);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevAttr @ 00011ecc size=12 ===== */

void RK_MPI_VI_GetDevAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_GetDevAttr_00027074)();
  return;
}



/* ===== <EXTERNAL>::setenv @ 00011ed8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setenv(char *__name,char *__value,int __replace)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setenv_00027078)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::malloc @ 00011ee4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0002707c)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_aldch_v21_SetAttrib @ 00011ef0 size=12 ===== */

void rk_aiq_user_api2_aldch_v21_SetAttrib(void)

{
  (*(code *)PTR_rk_aiq_user_api2_aldch_v21_SetAttrib_00027080)();
  return;
}



/* ===== <EXTERNAL>::strrchr @ 00011efc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strrchr_00027084)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::fopen64 @ 00011f14 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen64_0002708c)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::RK_MPI_CAL_VGS_GetPicBufferSize @ 00011f20 size=12 ===== */

void RK_MPI_CAL_VGS_GetPicBufferSize(void)

{
  (*(code *)PTR_RK_MPI_CAL_VGS_GetPicBufferSize_00027090)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_setMirrorFlip @ 00011f2c size=12 ===== */

void rk_aiq_uapi2_setMirrorFlip(void)

{
  (*(code *)PTR_rk_aiq_uapi2_setMirrorFlip_00027094)();
  return;
}



/* ===== <EXTERNAL>::setlinebuf @ 00011f38 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void setlinebuf(FILE *__stream)

{
  (*(code *)PTR_setlinebuf_00027098)(__stream);
  return;
}



/* ===== <EXTERNAL>::strlen @ 00011f44 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_0002709c)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::pthread_mutex_lock @ 00011f50 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_000270a0)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_GetChnCrop @ 00011f5c size=12 ===== */

void RK_MPI_VPSS_GetChnCrop(void)

{
  (*(code *)PTR_RK_MPI_VPSS_GetChnCrop_000270a4)();
  return;
}



/* ===== <EXTERNAL>::snprintf @ 00011f68 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_000270a8)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_aldch_v21_GetAttrib @ 00011f74 size=12 ===== */

void rk_aiq_user_api2_aldch_v21_GetAttrib(void)

{
  (*(code *)PTR_rk_aiq_user_api2_aldch_v21_GetAttrib_000270ac)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnAttr @ 00011f80 size=12 ===== */

void RK_MPI_VI_SetChnAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetChnAttr_000270b0)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_UnBind @ 00011f8c size=12 ===== */

void RK_MPI_SYS_UnBind(void)

{
  (*(code *)PTR_RK_MPI_SYS_UnBind_000270b4)();
  return;
}



/* ===== <EXTERNAL>::sem_destroy @ 00011f98 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sem_destroy(sem_t *__sem)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sem_destroy_000270b8)(__sem);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_ReleaseChnFrame @ 00011fa4 size=12 ===== */

void RK_MPI_VPSS_ReleaseChnFrame(void)

{
  (*(code *)PTR_RK_MPI_VPSS_ReleaseChnFrame_000270bc)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_prepare @ 00011fb0 size=12 ===== */

void rk_aiq_uapi2_camgroup_prepare(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_prepare_000270c0)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 00011fbc size=12 ===== */

void RK_MPI_SYS_Init(void)

{
  (*(code *)PTR_RK_MPI_SYS_Init_000270c4)();
  return;
}



/* ===== <EXTERNAL>::pthread_mutex_destroy @ 00011fc8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_000270c8)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId @ 00011fd4 size=12 ===== */

void rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId_000270cc)();
  return;
}



/* ===== <EXTERNAL>::fclose @ 00011fe0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_000270d0)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::fread @ 00011fec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fread_000270d4)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_GetChnFrame @ 00011ff8 size=12 ===== */

void RK_MPI_VPSS_GetChnFrame(void)

{
  (*(code *)PTR_RK_MPI_VPSS_GetChnFrame_000270d8)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_EnableChn @ 00012004 size=12 ===== */

void RK_MPI_VPSS_EnableChn(void)

{
  (*(code *)PTR_RK_MPI_VPSS_EnableChn_000270dc)();
  return;
}



/* ===== <EXTERNAL>::RK_LOG @ 00012010 size=12 ===== */

void RK_LOG(void)

{
  (*(code *)PTR_RK_LOG_000270e0)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_getCamInfos @ 0001201c size=12 ===== */

void rk_aiq_uapi2_camgroup_getCamInfos(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_getCamInfos_000270e4)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_start @ 00012028 size=12 ===== */

void rk_aiq_uapi2_camgroup_start(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_start_000270e8)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_StartGrp @ 00012034 size=12 ===== */

void RK_MPI_VPSS_StartGrp(void)

{
  (*(code *)PTR_RK_MPI_VPSS_StartGrp_000270ec)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_DisableChn @ 00012040 size=12 ===== */

void RK_MPI_VPSS_DisableChn(void)

{
  (*(code *)PTR_RK_MPI_VPSS_DisableChn_000270f0)();
  return;
}



/* ===== <EXTERNAL>::pthread_create @ 0001204c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_000270f4)(__newthread);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_SendFrame @ 00012058 size=12 ===== */

void RK_MPI_VPSS_SendFrame(void)

{
  (*(code *)PTR_RK_MPI_VPSS_SendFrame_000270f8)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChnExt @ 00012064 size=12 ===== */

void RK_MPI_VI_DisableChnExt(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableChnExt_000270fc)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetChnFrame @ 00012070 size=12 ===== */

void RK_MPI_VI_GetChnFrame(void)

{
  (*(code *)PTR_RK_MPI_VI_GetChnFrame_00027100)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChnExt @ 0001207c size=12 ===== */

void RK_MPI_VI_EnableChnExt(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableChnExt_00027104)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevBindPipe @ 00012088 size=12 ===== */

void RK_MPI_VI_SetDevBindPipe(void)

{
  (*(code *)PTR_RK_MPI_VI_SetDevBindPipe_00027108)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_SetChnAttr @ 00012094 size=12 ===== */

void RK_MPI_VPSS_SetChnAttr(void)

{
  (*(code *)PTR_RK_MPI_VPSS_SetChnAttr_0002710c)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_prepare @ 000120a0 size=12 ===== */

void rk_aiq_uapi2_sysctl_prepare(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_prepare_00027110)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevIsEnable @ 000120ac size=12 ===== */

void RK_MPI_VI_GetDevIsEnable(void)

{
  (*(code *)PTR_RK_MPI_VI_GetDevIsEnable_00027114)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_init @ 000120b8 size=12 ===== */

void rk_aiq_uapi2_sysctl_init(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_init_00027118)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableDev @ 000120c4 size=12 ===== */

void RK_MPI_VI_EnableDev(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableDev_0002711c)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_start @ 000120d0 size=12 ===== */

void rk_aiq_uapi2_sysctl_start(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_start_00027120)();
  return;
}



/* ===== <EXTERNAL>::fflush @ 000120dc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_00027124)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 000120e8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00027128)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_CreateGrp @ 000120f4 size=12 ===== */

void RK_MPI_VPSS_CreateGrp(void)

{
  (*(code *)PTR_RK_MPI_VPSS_CreateGrp_0002712c)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_ae_getExpSwAttr @ 00012100 size=12 ===== */

void rk_aiq_user_api2_ae_getExpSwAttr(void)

{
  (*(code *)PTR_rk_aiq_user_api2_ae_getExpSwAttr_00027130)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_preInit_devBufCnt @ 0001210c size=12 ===== */

void rk_aiq_uapi2_sysctl_preInit_devBufCnt(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_preInit_devBufCnt_00027134)();
  return;
}



/* ===== <EXTERNAL>::fprintf @ 00012118 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00027138)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_GetVProcDev @ 00012124 size=12 ===== */

void RK_MPI_VPSS_GetVProcDev(void)

{
  (*(code *)PTR_RK_MPI_VPSS_GetVProcDev_0002713c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_ChnSaveFile @ 00012130 size=12 ===== */

void RK_MPI_VI_ChnSaveFile(void)

{
  (*(code *)PTR_RK_MPI_VI_ChnSaveFile_00027140)();
  return;
}



/* ===== <EXTERNAL>::abort @ 0001213c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00027144)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_StopGrp @ 00012148 size=12 ===== */

void RK_MPI_VPSS_StopGrp(void)

{
  (*(code *)PTR_RK_MPI_VPSS_StopGrp_00027148)();
  return;
}



/* ===== <EXTERNAL>::sprintf @ 00012154 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_0002714c)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_MmzFlushCache @ 00012160 size=12 ===== */

void RK_MPI_SYS_MmzFlushCache(void)

{
  (*(code *)PTR_RK_MPI_SYS_MmzFlushCache_00027150)();
  return;
}



/* ===== <EXTERNAL>::fseek @ 0001216c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fseek_00027154)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_GetChnAttr @ 00012178 size=12 ===== */

void RK_MPI_VPSS_GetChnAttr(void)

{
  (*(code *)PTR_RK_MPI_VPSS_GetChnAttr_00027158)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 00012184 size=12 ===== */

void RK_MPI_MB_Handle2VirAddr(void)

{
  (*(code *)PTR_RK_MPI_MB_Handle2VirAddr_0002715c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_ReleaseMB @ 00012190 size=12 ===== */

void RK_MPI_MB_ReleaseMB(void)

{
  (*(code *)PTR_RK_MPI_MB_ReleaseMB_00027160)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_SetGrpCrop @ 0001219c size=12 ===== */

void RK_MPI_VPSS_SetGrpCrop(void)

{
  (*(code *)PTR_RK_MPI_VPSS_SetGrpCrop_00027164)();
  return;
}



/* ===== <EXTERNAL>::pthread_mutex_unlock @ 000121a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_00027168)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_deinit @ 000121b4 size=12 ===== */

void rk_aiq_uapi2_sysctl_deinit(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_deinit_0002716c)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_stop @ 000121c0 size=12 ===== */

void rk_aiq_uapi2_sysctl_stop(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_stop_00027170)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_ResetGrp @ 000121cc size=12 ===== */

void RK_MPI_VPSS_ResetGrp(void)

{
  (*(code *)PTR_RK_MPI_VPSS_ResetGrp_00027174)();
  return;
}



/* ===== <EXTERNAL>::sem_post @ 000121d8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sem_post(sem_t *__sem)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sem_post_00027178)(__sem);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetEptz @ 000121e4 size=12 ===== */

void RK_MPI_VI_SetEptz(void)

{
  (*(code *)PTR_RK_MPI_VI_SetEptz_0002717c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevAttr @ 000121f0 size=12 ===== */

void RK_MPI_VI_SetDevAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetDevAttr_00027180)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChn @ 000121fc size=12 ===== */

void RK_MPI_VI_EnableChn(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableChn_00027184)();
  return;
}



/* ===== <EXTERNAL>::free @ 00012208 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00027188)(__ptr);
  return;
}



/* ===== <EXTERNAL>::atoi @ 00012214 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_0002718c)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::strchr @ 00012220 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_00027190)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::printf @ 0001222c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00027194)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::getopt_long @ 00012238 size=12 ===== */

void getopt_long(void)

{
  (*(code *)PTR_getopt_long_00027198)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableDev @ 00012244 size=12 ===== */

void RK_MPI_VI_DisableDev(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableDev_0002719c)();
  return;
}



/* ===== <EXTERNAL>::puts @ 00012250 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_000271a0)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_SetChnRotation @ 0001225c size=12 ===== */

void RK_MPI_VPSS_SetChnRotation(void)

{
  (*(code *)PTR_RK_MPI_VPSS_SetChnRotation_000271a4)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_stop @ 00012268 size=12 ===== */

void rk_aiq_uapi2_camgroup_stop(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_stop_000271a8)();
  return;
}



/* ===== <EXTERNAL>::signal @ 00012274 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = (__sighandler_t)(*(code *)PTR_signal_000271ac)(__sig);
  return p_Var1;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_DestroyGrp @ 00012280 size=12 ===== */

void RK_MPI_VPSS_DestroyGrp(void)

{
  (*(code *)PTR_RK_MPI_VPSS_DestroyGrp_000271b0)();
  return;
}



/* ===== <EXTERNAL>::strcpy @ 0001228c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_000271b4)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_GetChnRotation @ 00012298 size=12 ===== */

void RK_MPI_VPSS_GetChnRotation(void)

{
  (*(code *)PTR_RK_MPI_VPSS_GetChnRotation_000271b8)();
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 000122a4 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_000271bc)();
  return;
}



/* ===== <EXTERNAL>::sem_wait @ 000122b0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sem_wait(sem_t *__sem)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sem_wait_000271c0)(__sem);
  return iVar1;
}



/* ===== <EXTERNAL>::pthread_join @ 000122bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_000271c4)(__th);
  return iVar1;
}



/* ===== FUN_000122c8 @ 000122c8 size=1600 ===== */

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_000122c8(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  void *pvVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  undefined4 uVar15;
  undefined4 local_64;
  char *local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  pthread_t local_44 [3];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  piVar1 = DAT_00012908;
  local_44[0] = 0;
  if (param_1 < 2) {
LAB_000122e8:
    uVar10 = 0;
    FUN_0001339c(*param_2);
  }
  else {
    pvVar4 = malloc(0x650);
    piVar2 = DAT_0001290c;
    *piVar1 = (int)pvVar4;
    if (pvVar4 == (void *)0x0) {
      uVar15 = 0x191;
      uVar10 = DAT_00012910;
    }
    else {
      memset(pvVar4,0,0x650);
      puVar5 = malloc(0x2c);
      *piVar2 = (int)puVar5;
      if (puVar5 == (undefined4 *)0x0) {
        uVar15 = 0x198;
        uVar10 = DAT_00012924;
      }
      else {
        uVar10 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        puVar5[4] = 0;
        puVar5[5] = uVar10;
        puVar5[5] = 0xffffffff;
        puVar5[6] = 0;
        puVar5[7] = uVar10;
        puVar5[6] = 10;
        puVar5[9] = 0;
        puVar5[10] = uVar10;
        puVar5[8] = 0x500;
        puVar5[9] = 800;
        *puVar5 = 0;
        puVar5[1] = uVar10;
        puVar5[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        puVar5[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        sem_init(DAT_00012928,0,0);
        iVar6 = pthread_mutex_init(DAT_0001292c,(pthread_mutexattr_t *)0x0);
        pcVar12 = DAT_00012930;
        if (iVar6 == 0) {
          iVar6 = 0x438;
          signal(2,DAT_00012934);
          local_5c = -1;
          local_58 = 0x780;
          local_54 = 0x438;
          local_50 = 0x780;
          local_64 = 0;
          local_60 = (char *)0x0;
LAB_00012444:
          iVar7 = getopt_long(param_1,param_2,DAT_0001293c,DAT_00012938,0);
          if (iVar7 == -1) {
            printf(DAT_00012940,0);
            printf(DAT_00012944,local_60);
            printf(DAT_00012948,pcVar12);
            if (pcVar12 != (char *)0x0) {
              printf(DAT_0001294c,pcVar12);
              uVar8 = FUN_00014674(0,0,local_64,pcVar12);
              uVar9 = FUN_00014c30(0);
              if ((uVar8 | uVar9) != 0) {
                RK_LOG(2,DAT_00012918,DAT_00012950,DAT_0001291c,0x22b,uVar8 | uVar9);
                *DAT_00012954 = 0xffffffff;
                goto LAB_000124f4;
              }
            }
            iVar7 = RK_MPI_SYS_Init();
            if (iVar7 == 0) {
              iVar7 = *piVar1;
              *(undefined4 *)(iVar7 + 0x1c) = 0;
              *(int *)(iVar7 + 0x10) = local_50;
              *(undefined4 *)(iVar7 + 0x20) = 0;
              *(undefined4 *)(iVar7 + 0x24) = 1;
              *(int *)(iVar7 + 0x14) = local_54;
              *(undefined4 *)(iVar7 + 0xd0) = 2;
              *(undefined4 *)(iVar7 + 0xdc) = 4;
              *(undefined4 *)(iVar7 + 0xc0) = 2;
              *(undefined4 *)(iVar7 + 0xa8) = 0;
              *(undefined4 *)(iVar7 + 0xb4) = 0;
              *(undefined4 *)(iVar7 + 0xc4) = 0xffffffff;
              *(undefined4 *)(iVar7 + 200) = 0xffffffff;
              FUN_00013ba0();
              iVar7 = *piVar1;
              *(undefined4 *)(iVar7 + 0x394) = 0;
              *(int *)(iVar7 + 0x390) = local_5c;
              *(undefined4 *)(iVar7 + 0x398) = 0;
              *(undefined4 *)(iVar7 + 0x3dc) = 1;
              *(char **)(iVar7 + 0x5f8) = local_60;
              *(undefined4 *)(iVar7 + 0x3b0) = 0;
              *(undefined4 *)(iVar7 + 0x3c0) = 0;
              *(undefined4 *)(iVar7 + 0x4c0) = 0;
              *(undefined4 *)(iVar7 + 0x4d8) = 0;
              *(undefined4 *)(iVar7 + 0x4d4) = 0;
              *(undefined4 *)(iVar7 + 0x4d0) = 0;
              *(undefined4 *)(iVar7 + 0x4dc) = 0xffffffff;
              *(undefined4 *)(iVar7 + 0x4e0) = 0xffffffff;
              *(int *)(iVar7 + 0x4c4) = local_58;
              *(int *)(iVar7 + 0x4c8) = iVar6;
              iVar6 = FUN_00013430();
              if (iVar6 != 0) {
                RK_LOG(2,DAT_00012918,DAT_00012964,DAT_0001291c,0x259,iVar6);
                FUN_00012ae0(DAT_00012968,0x25a);
              }
              piVar3 = DAT_0001290c;
              local_44[1] = 8;
              iVar6 = *piVar1;
              local_44[2] = *(undefined4 *)(iVar6 + 0x1c);
              local_38 = *(undefined4 *)(iVar6 + 0x24);
              local_34 = 6;
              local_30 = *(undefined4 *)(iVar6 + 0x394);
              local_2c = *(undefined4 *)(iVar6 + 0x398);
              FUN_00014254(local_44 + 1,&local_34);
              pthread_create((pthread_t *)(*piVar3 + 0x28),(pthread_attr_t *)0x0,DAT_0001296c,
                             (void *)(*piVar1 + 0x390));
              pvVar4 = (void *)*piVar3;
              if (*(int *)((int)pvVar4 + 0x10) != 0) {
                *(undefined4 *)((int)pvVar4 + 0xc) = 1;
                pthread_create(local_44,(pthread_attr_t *)0x0,DAT_00012970,pvVar4);
              }
              printf(DAT_00012974,DAT_00012968);
              while (*(int *)*piVar3 == 0) {
                sleep(1);
              }
              printf(DAT_00012978,DAT_00012968);
              pvVar4 = (void *)*piVar3;
              if (*(int *)((int)pvVar4 + 0x10) != 0) {
                *(undefined4 *)((int)pvVar4 + 8) = 1;
                pthread_create(local_44,(pthread_attr_t *)0x0,DAT_00012970,pvVar4);
              }
              iVar6 = *piVar2;
              *(undefined4 *)(iVar6 + 4) = 1;
              pthread_join(*(pthread_t *)(iVar6 + 0x28),(void **)0x0);
              local_44[1] = 8;
              iVar6 = *piVar1;
              local_44[2] = *(undefined4 *)(iVar6 + 0x1c);
              local_38 = *(undefined4 *)(iVar6 + 0x24);
              local_34 = 6;
              local_30 = *(undefined4 *)(iVar6 + 0x394);
              local_2c = *(undefined4 *)(iVar6 + 0x398);
              FUN_0001429c(local_44 + 1,&local_34);
              FUN_00013ac4(*piVar1 + 0x390);
              FUN_00014024(*piVar1);
            }
            RK_MPI_SYS_Exit();
            if (pcVar12 != (char *)0x0) {
              FUN_00014b28(0);
            }
LAB_000124f4:
            piVar1 = DAT_00012908;
            if ((void *)*DAT_00012908 != (void *)0x0) {
              free((void *)*DAT_00012908);
              *piVar1 = 0;
            }
            piVar1 = DAT_0001290c;
            if ((void *)*DAT_0001290c != (void *)0x0) {
              free((void *)*DAT_0001290c);
              *piVar1 = 0;
            }
            sem_destroy(DAT_00012928);
            pthread_mutex_destroy(DAT_0001292c);
            return *DAT_00012954;
          }
          pcVar14 = (char *)*DAT_0001295c;
          if (iVar7 == 0x6d) {
            iVar11 = *DAT_0001290c;
            iVar7 = atoi(pcVar14);
            *(int *)(iVar11 + 0x10) = iVar7;
            goto LAB_00012444;
          }
          if (iVar7 < 0x6e) {
            if (iVar7 == 0x61) {
              pcVar12 = pcVar14;
              if (pcVar14 == (char *)0x0) {
                pcVar13 = (char *)param_2[*DAT_00012960];
                pcVar12 = pcVar13;
                if ((pcVar13 != (char *)0x0) && (pcVar12 = pcVar14, *pcVar13 != '-')) {
                  *DAT_00012960 = *DAT_00012960 + 1;
                  pcVar12 = pcVar13;
                }
              }
            }
            else if (iVar7 < 0x62) {
              if (iVar7 != 0x4d) goto LAB_000122e8;
              iVar7 = atoi(pcVar14);
              if (iVar7 != 0) {
                local_64 = 1;
              }
            }
            else if (iVar7 == 99) {
              iVar7 = atoi(pcVar14);
              *(int *)(*DAT_0001290c + 0x18) = iVar7;
            }
            else {
              if (iVar7 != 0x6c) goto LAB_000122e8;
              local_5c = atoi(pcVar14);
            }
            goto LAB_00012444;
          }
          if (iVar7 == 0xe0) {
            iVar11 = *DAT_0001290c;
            iVar7 = atoi(pcVar14);
            *(int *)(iVar11 + 0x14) = iVar7;
            goto LAB_00012444;
          }
          if (0xe0 < iVar7) {
            if (iVar7 == 0xe3) {
              local_58 = atoi(pcVar14);
              pcVar14 = strchr(pcVar14,0x78);
              iVar6 = atoi(pcVar14 + 1);
            }
            else {
              if (iVar7 != 0xe9) goto LAB_000122e8;
              local_50 = atoi(pcVar14);
              pcVar14 = strchr(pcVar14,0x78);
              local_54 = atoi(pcVar14 + 1);
            }
            goto LAB_00012444;
          }
          local_60 = pcVar14;
          if (iVar7 == 0x6f) goto LAB_00012444;
          goto LAB_000122e8;
        }
        uVar15 = 0x1a5;
        uVar10 = DAT_00012958;
      }
    }
    RK_LOG(2,DAT_00012918,uVar10,DAT_00012914,uVar15);
    if ((void *)*piVar1 != (void *)0x0) {
      free((void *)*piVar1);
      *piVar1 = 0;
    }
    if ((void *)*piVar2 != (void *)0x0) {
      free((void *)*piVar2);
      *piVar2 = 0;
    }
    uVar10 = 0xffffffff;
    RK_LOG(2,DAT_00012918,DAT_00012920,DAT_0001291c,0x1e0,0xffffffff);
  }
  return uVar10;
}



/* ===== entry @ 0001297c size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00027088)
            (DAT_000129b0,param_2,&stack0x00000004,DAT_000129b4,DAT_000129ac,param_1);
  return;
}



/* ===== FUN_000129b8 @ 000129b8 size=32 ===== */

void FUN_000129b8(void)

{
  if (DAT_000129dc == DAT_000129d8) {
    return;
  }
  if (DAT_000129e0 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000129d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000129e0)();
  return;
}



/* ===== _FINI_0 @ 00012a1c size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00012a58;
  if (*DAT_00012a58 != '\0') {
    return;
  }
  FUN_000129b8();
  if (DAT_00012a5c != 0) {
    __deregister_frame_info(DAT_00012a60);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00012a64 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00012a88 != 0) {
    __register_frame_info(DAT_00012a90,DAT_00012a8c);
  }
  if ((DAT_00012a14 - DAT_00012a10 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00012a18 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00012a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00012a18)();
  return;
}



/* ===== FUN_00012a94 @ 00012a94 size=60 ===== */

void FUN_00012a94(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  RK_LOG(2,DAT_00012ad8,DAT_00012ad0,DAT_00012ad4,0x4a,param_1,param_2,param_4);
  *(undefined4 *)*DAT_00012adc = 1;
  return;
}



/* ===== FUN_00012ae0 @ 00012ae0 size=72 ===== */

void FUN_00012ae0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  RK_LOG(2,DAT_00012b30,DAT_00012b28,DAT_00012b2c,0x44,param_1,param_2,param_4);
  *DAT_00012b34 = 0xffffffff;
  *(undefined4 *)*DAT_00012b38 = 1;
  return;
}



/* ===== FUN_00012b3c @ 00012b3c size=52 ===== */

void FUN_00012b3c(void)

{
  pthread_mutex_t *__mutex;
  
  __mutex = DAT_00012b70;
  pthread_mutex_lock(DAT_00012b70);
  *(undefined4 *)(*DAT_00012b74 + 0x1c) = 0;
  pthread_mutex_unlock(__mutex);
  sem_wait(DAT_00012b78);
  return;
}



/* ===== FUN_00012b7c @ 00012b7c size=1004 ===== */

undefined4 FUN_00012b7c(void)

{
  int *piVar1;
  int *piVar2;
  __start_routine *__start_routine;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  bool bVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  int local_70;
  undefined4 local_6c;
  
  piVar1 = DAT_00012f68;
  prctl(0xf,DAT_00012f6c);
  FUN_00012b3c();
  FUN_00014438(DAT_00012f70,*(undefined4 *)(*piVar1 + 0x10));
  uVar7 = DAT_00012fac;
  __start_routine = DAT_00012f84;
  piVar2 = DAT_00012f80;
  uVar4 = DAT_00012f78;
  iVar5 = *piVar1;
  iVar6 = *(int *)(iVar5 + 0x10);
  if (iVar6 == 1) {
    iVar6 = *(int *)(iVar5 + 0x14);
    iVar5 = 0;
    do {
      iVar9 = *piVar1;
      if (*(int *)(iVar9 + 8) != 0) goto LAB_00012c98;
      *(undefined4 *)(iVar9 + 4) = 1;
      pthread_join(*(pthread_t *)(iVar9 + 0x28),(void **)0x0);
      local_80 = 8;
      iVar9 = *piVar2;
      local_7c = *(undefined4 *)(iVar9 + 0x1c);
      local_78 = *(undefined4 *)(iVar9 + 0x24);
      local_74 = 6;
      local_70 = *(int *)(iVar9 + 0x394);
      local_6c = *(undefined4 *)(iVar9 + 0x398);
      FUN_0001429c(&local_80,&local_74);
      iVar9 = FUN_00013ac4(*piVar2 + 0x390);
      if (iVar9 != 0) {
        RK_LOG(2,DAT_00012f78,DAT_00012f88,DAT_00012f8c,0x118,iVar9);
        uVar4 = 0x119;
LAB_00012c90:
        FUN_00012ae0(DAT_00012f90,uVar4);
        goto LAB_00012c98;
      }
      iVar9 = FUN_00013430(*piVar2 + 0x390);
      if (iVar9 != 0) {
        RK_LOG(2,DAT_00012f78,DAT_00012fa0,DAT_00012f8c,0x120,iVar9);
        uVar4 = 0x121;
        goto LAB_00012c90;
      }
      FUN_00014254(&local_80,&local_74);
      iVar9 = *piVar1;
      iVar3 = *piVar2;
      *(undefined4 *)(iVar9 + 4) = 0;
      pthread_create((pthread_t *)(iVar9 + 0x28),(pthread_attr_t *)0x0,__start_routine,
                     (void *)(iVar3 + 0x390));
      iVar5 = iVar5 + 1;
      FUN_00012b3c();
      iVar9 = iVar5;
      RK_LOG(2,uVar4,DAT_00012fa4,DAT_00012f8c,0x132,iVar6,iVar5);
    } while (iVar5 < iVar6 || iVar6 < 1);
    RK_LOG(2,DAT_00012f78,DAT_00012fa8,DAT_00012f8c,0x136,iVar5,iVar9);
    uVar4 = DAT_00012f90;
    *(undefined4 *)(*piVar1 + 0xc) = 0;
    FUN_00012a94(uVar4,0x138);
LAB_00012c98:
    uVar8 = 0x13c;
    uVar4 = DAT_00012f94;
    uVar7 = DAT_00012f8c;
  }
  else {
    if (iVar6 != 2) {
      RK_LOG(2,DAT_00012f78,DAT_00012f74,DAT_00012f7c,0x186,iVar6);
      goto LAB_00012cb4;
    }
    iVar6 = 0;
    iVar5 = *(int *)(iVar5 + 0x14);
    iVar9 = *(int *)(*DAT_00012f80 + 0x4c4);
    uVar8 = *(undefined4 *)(*DAT_00012f80 + 0x4c8);
    do {
      if (*(int *)(*piVar1 + 8) != 0) goto LAB_00012e5c;
      memset(&local_74,0,0x4c);
      iVar3 = RK_MPI_VPSS_GetChnAttr
                        (*(undefined4 *)(*piVar2 + 0x394),*(undefined4 *)(*piVar2 + 0x398),&local_74
                        );
      if (iVar3 != 0) {
        RK_LOG(2,DAT_00012f78,DAT_00012fb0,DAT_00012fb4,0x14c,iVar3);
        uVar4 = 0x14d;
LAB_00012e54:
        FUN_00012ae0(DAT_00012fb8,uVar4);
        goto LAB_00012e5c;
      }
      bVar10 = iVar9 == local_70;
      local_6c = uVar8;
      local_70 = iVar9;
      if (bVar10) {
        local_6c = *(undefined4 *)(*piVar1 + 0x24);
        local_70 = *(int *)(*piVar1 + 0x20);
      }
      iVar3 = RK_MPI_VPSS_SetChnAttr
                        (*(undefined4 *)(*piVar2 + 0x394),*(undefined4 *)(*piVar2 + 0x398),&local_74
                        );
      if (iVar3 != 0) {
        RK_LOG(2,DAT_00012f78,DAT_00012fc0,DAT_00012fb4,0x15d,iVar3);
        uVar4 = 0x15e;
        goto LAB_00012e54;
      }
      FUN_00012b3c();
      iVar6 = iVar6 + 1;
      uVar11 = local_6c;
      iVar3 = iVar5;
      iVar12 = iVar6;
      RK_LOG(2,uVar4,uVar7,DAT_00012fb4,0x168,local_70,local_6c,iVar5,iVar6);
    } while (iVar6 < iVar5 || iVar5 < 1);
    RK_LOG(2,DAT_00012f78,DAT_00012fc4,DAT_00012fb4,0x16c,iVar6,uVar11,iVar3,iVar12);
    uVar4 = DAT_00012fb8;
    *(undefined4 *)(*piVar1 + 0xc) = 0;
    FUN_00012a94(uVar4,0x16e);
LAB_00012e5c:
    uVar8 = 0x173;
    uVar4 = DAT_00012fbc;
    uVar7 = DAT_00012fb4;
  }
  RK_LOG(2,DAT_00012f78,uVar4,uVar7,uVar8);
LAB_00012cb4:
  FUN_00014438(DAT_00012f98,*(undefined4 *)(*piVar1 + 0x10));
  RK_LOG(2,DAT_00012f78,DAT_00012f9c,DAT_00012f7c,0x189);
  return 0;
}



/* ===== FUN_00012fc8 @ 00012fc8 size=872 ===== */

undefined4 FUN_00012fc8(int *param_1)

{
  pthread_mutex_t *__mutex;
  undefined4 uVar1;
  int *piVar2;
  FILE *__s;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  void *local_140;
  size_t local_13c [4];
  int local_12c;
  int local_128;
  int local_124;
  char acStack_120 [256];
  
  local_140 = (void *)0x0;
  memset(acStack_120,0,0x100);
  __s = (FILE *)0x0;
  if (param_1[0x9a] != 0) {
    snprintf(acStack_120,0x100,DAT_00013330,param_1[0x9a],param_1[2]);
    __s = fopen64(acStack_120,DAT_00013334);
    if (__s == (FILE *)0x0) {
      printf(DAT_00013338,param_1[2],param_1[0x9a]);
      FUN_00012ae0(DAT_0001333c,0x8d);
      return 0;
    }
  }
  piVar2 = DAT_00013364;
  uVar1 = DAT_0001335c;
  iVar8 = 0;
  do {
    if (*(int *)(*piVar2 + 4) != 0) {
LAB_00013214:
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
      RK_LOG(2,DAT_0001335c,DAT_00013358,DAT_00013340,0xf5);
      return 0;
    }
    iVar3 = FUN_00013938(param_1,&local_140);
    if (iVar3 == 0) {
      if (*param_1 <= iVar8 && 0 < *param_1) {
        FUN_00013a18(param_1);
        FUN_00012a94(DAT_0001333c,0x99);
        goto LAB_00013214;
      }
      if (__s != (FILE *)0x0) {
        local_13c[3] = param_1[0x9d];
        local_12c = param_1[0x9e];
        local_13c[0] = 0;
        local_124 = param_1[0xa4];
        local_13c[1] = 0;
        local_13c[2] = 0;
        local_128 = param_1[0xa2];
        iVar3 = RK_MPI_CAL_VGS_GetPicBufferSize(local_13c + 3,local_13c);
        if (iVar3 == 0) {
          fwrite(local_140,1,local_13c[0],__s);
          fflush(__s);
        }
        else {
          RK_LOG(2,uVar1,DAT_00013344,DAT_00013340,0xa7,iVar3);
        }
      }
      iVar3 = param_1[0x4d];
      iVar7 = param_1[0x9d];
      if (iVar3 == iVar7) {
        iVar4 = param_1[0x9e];
        if (((iVar4 != param_1[0x4e]) || (iVar3 != param_1[0x9f])) ||
           ((iVar4 != param_1[0xa0] || (param_1[0xa2] != param_1[0x50])))) {
          RK_LOG(2,uVar1,DAT_00013348,DAT_00013340,0xc0,iVar3,param_1[0x4e],iVar7,iVar4,
                 param_1[0xa2],param_1[0x50]);
          uVar5 = 0xc1;
          goto LAB_00013134;
        }
      }
      else {
        iVar3 = *(int *)(*piVar2 + 0x20);
        if (iVar7 == iVar3) {
          iVar6 = param_1[0x9e];
          iVar4 = *(int *)(*piVar2 + 0x24);
          if ((((iVar6 == iVar4) && (iVar7 == param_1[0x9f])) && (iVar6 == param_1[0xa0])) &&
             (param_1[0xa2] == param_1[0x50])) goto LAB_0001313c;
          RK_LOG(2,uVar1,DAT_00013348,DAT_00013340,0xd5,iVar3,iVar4,iVar7,iVar6,param_1[0xa2],
                 param_1[0x50]);
          uVar5 = 0xd6;
        }
        else {
          RK_LOG(2,uVar1,DAT_00013360,DAT_00013340,0xdb,param_1[0x9f],param_1[0xa0]);
          uVar5 = 0xdc;
        }
LAB_00013134:
        FUN_00012ae0(DAT_0001333c,uVar5);
      }
LAB_0001313c:
      iVar8 = iVar8 + 1;
      FUN_00013a18(param_1);
      if (*(int *)(*piVar2 + 0xc) != 0) {
        pthread_mutex_lock(DAT_0001334c);
        __mutex = DAT_0001334c;
        *(int *)(*piVar2 + 0x1c) = *(int *)(*piVar2 + 0x1c) + 1;
        pthread_mutex_unlock(__mutex);
        if (*(int *)(*piVar2 + 0x1c) == *(int *)(*piVar2 + 0x18)) {
          sem_post(DAT_00013350);
        }
      }
      RK_LOG(2,uVar1,DAT_00013354,DAT_00013340,0xec,iVar8);
    }
    usleep(1000);
  } while( true );
}



/* ===== FUN_0001339c @ 0001339c size=104 ===== */

void FUN_0001339c(undefined4 param_1)

{
  puts(DAT_00013404);
  printf(DAT_00013408,param_1);
  puts(DAT_0001340c);
  puts(DAT_00013410);
  puts(DAT_00013414);
  puts(DAT_00013418);
  puts(DAT_0001341c);
  puts(DAT_00013420);
  puts(DAT_00013424);
  puts(DAT_00013428);
  puts(DAT_0001342c);
  return;
}



/* ===== FUN_00013430 @ 00013430 size=928 ===== */

int FUN_00013430(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int local_30;
  undefined4 local_2c [2];
  
  local_30 = 0;
  if (0xff < *(int *)(param_1 + 4)) {
    RK_LOG(2,DAT_000137d8,DAT_000137d4,DAT_000137d0,0x26,0x100);
    return -1;
  }
  *(undefined4 *)(param_1 + 0x18) = 0x1000;
  *(undefined4 *)(param_1 + 0x1c) = 0x1000;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  iVar1 = RK_MPI_VPSS_CreateGrp(*(int *)(param_1 + 4),param_1 + 0x18);
  if (iVar1 == 0) {
    iVar1 = RK_MPI_VPSS_SetVProcDev(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x4c));
    if (iVar1 == 0) {
      iVar1 = RK_MPI_VPSS_GetVProcDev(*(undefined4 *)(param_1 + 4),local_2c);
      uVar2 = *(undefined4 *)(param_1 + 4);
      if (iVar1 == 0) {
        RK_LOG(4,DAT_000137d8,DAT_000137e8,DAT_000137d0,0x41,uVar2,local_2c[0]);
        iVar1 = RK_MPI_VPSS_ResetGrp(*(undefined4 *)(param_1 + 4));
        if (iVar1 == 0) {
          iVar1 = RK_MPI_VPSS_SetGrpCrop(*(undefined4 *)(param_1 + 4),param_1 + 0x34);
          if (iVar1 == 0) {
            iVar1 = RK_MPI_VPSS_GetGrpCrop(*(undefined4 *)(param_1 + 4),param_1 + 0x34);
            if (iVar1 == 0) {
              iVar3 = 0;
              iVar4 = param_1;
              do {
                if ((*(int *)(iVar4 + 0x134) != 0) && (*(int *)(iVar4 + 0x138) != 0)) {
                  iVar5 = iVar3 * 0x18 + param_1 + 0x60;
                  iVar1 = RK_MPI_VPSS_SetChnCrop(*(undefined4 *)(param_1 + 4),iVar3,iVar5);
                  if (iVar1 != 0) {
                    uVar6 = 0x5b;
                    uVar2 = DAT_000137f8;
                    goto LAB_000134b4;
                  }
                  iVar1 = RK_MPI_VPSS_GetChnCrop(*(undefined4 *)(param_1 + 4),iVar3,iVar5);
                  if (iVar1 != 0) {
                    uVar6 = 0x61;
                    uVar2 = DAT_000137fc;
                    goto LAB_000134b4;
                  }
                  iVar1 = RK_MPI_VPSS_SetChnRotation
                                    (*(undefined4 *)(param_1 + 4),iVar3,
                                     *(undefined4 *)(param_1 + 0x50 + iVar3 * 4));
                  if (iVar1 != 0) {
                    uVar6 = 0x68;
                    uVar2 = DAT_00013800;
                    goto LAB_000134b4;
                  }
                  iVar1 = RK_MPI_VPSS_GetChnRotation(*(undefined4 *)(param_1 + 4),iVar3,&local_30);
                  if (iVar1 != 0) {
                    uVar6 = 0x6d;
                    uVar2 = DAT_00013804;
                    goto LAB_000134b4;
                  }
                  if (*(int *)(param_1 + 0x50 + iVar3 * 4) != local_30) {
                    RK_LOG(2,DAT_000137d8,DAT_00013808,DAT_000137d0,0x71);
                    return -1;
                  }
                  iVar1 = RK_MPI_VPSS_SetChnAttr(*(undefined4 *)(param_1 + 4),iVar3,iVar4 + 0x130);
                  if (iVar1 != 0) {
                    uVar6 = 0x8c;
                    uVar2 = DAT_0001380c;
                    goto LAB_000134b4;
                  }
                  iVar1 = RK_MPI_VPSS_GetChnAttr(*(undefined4 *)(param_1 + 4),iVar3,iVar4 + 0x130);
                  if (iVar1 != 0) {
                    uVar6 = 0x92;
                    uVar2 = DAT_00013810;
                    goto LAB_000134b4;
                  }
                  iVar1 = RK_MPI_VPSS_EnableChn(*(undefined4 *)(param_1 + 4),iVar3);
                  if (iVar1 != 0) {
                    uVar6 = 0x97;
                    uVar2 = DAT_00013814;
                    goto LAB_000134b4;
                  }
                }
                iVar3 = iVar3 + 1;
                iVar4 = iVar4 + 0x4c;
              } while (iVar3 != 4);
              iVar1 = RK_MPI_VPSS_StartGrp(*(undefined4 *)(param_1 + 4));
              if (iVar1 == 0) {
                return 0;
              }
              uVar6 = 0x9f;
              uVar2 = DAT_00013818;
            }
            else {
              uVar6 = 0x50;
              uVar2 = DAT_000137f4;
            }
          }
          else {
            uVar6 = 0x4b;
            uVar2 = DAT_000137f0;
          }
        }
        else {
          uVar6 = 0x45;
          uVar2 = DAT_000137ec;
        }
        goto LAB_000134b4;
      }
      uVar7 = 0x3e;
      uVar6 = DAT_000137e4;
    }
    else {
      uVar2 = *(undefined4 *)(param_1 + 4);
      uVar7 = 0x37;
      uVar6 = DAT_000137e0;
    }
    RK_LOG(2,DAT_000137d8,uVar6,DAT_000137d0,uVar7,uVar2,iVar1);
  }
  else {
    uVar6 = 0x30;
    uVar2 = DAT_000137dc;
LAB_000134b4:
    RK_LOG(2,DAT_000137d8,uVar2,DAT_000137d0,uVar6,iVar1);
  }
  return iVar1;
}



/* ===== FUN_0001381c @ 0001381c size=268 ===== */

undefined4
FUN_0001381c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  
  uVar2 = DAT_0001392c;
  uVar1 = DAT_00013928;
  while( true ) {
    uVar6 = 1;
    iVar4 = RK_MPI_MB_GetMB(*(undefined4 *)(param_1 + 0x260));
    if (iVar4 != 0) break;
    RK_LOG(2,uVar2,DAT_00013930,uVar1,0xb2,0);
    usleep(2000);
  }
  RK_MPI_MB_Handle2VirAddr();
  uVar3 = DAT_00013934;
  RK_MPI_SYS_MmzFlushCache(iVar4,0);
  uVar2 = DAT_0001392c;
  uVar1 = DAT_00013928;
  local_60 = 0;
  local_58 = param_6;
  local_78 = iVar4;
  local_74 = param_3;
  local_70 = param_4;
  local_6c = param_3;
  local_68 = param_4;
  while (iVar5 = RK_MPI_VPSS_SendFrame(*(undefined4 *)(param_1 + 4),0,&local_78,0xffffffff,uVar6),
        iVar5 != 0) {
    uVar6 = 0xcb;
    RK_LOG(2,uVar2,uVar3,uVar1,0xcb,iVar5);
    usleep(10000);
  }
  RK_MPI_MB_ReleaseMB(iVar4);
  return 0;
}



/* ===== FUN_00013938 @ 00013938 size=208 ===== */

int FUN_00013938(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_2c [3];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = RK_MPI_VPSS_GetChnFrame
                    (*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),param_1 + 0x270,
                     0xffffffff);
  if (iVar1 != 0) {
    RK_LOG(2,DAT_00013a10,DAT_00013a0c,DAT_00013a08,0xdb,iVar1);
  }
  local_20 = *(undefined4 *)(param_1 + 0x27c);
  local_1c = *(undefined4 *)(param_1 + 0x280);
  local_18 = *(undefined4 *)(param_1 + 0x288);
  local_14 = *(undefined4 *)(param_1 + 0x290);
  iVar1 = RK_MPI_CAL_VGS_GetPicBufferSize(&local_20,local_2c);
  if (iVar1 == 0) {
    RK_MPI_SYS_MmzFlushCache(*(undefined4 *)(param_1 + 0x270),1);
    uVar2 = RK_MPI_MB_Handle2VirAddr(*(undefined4 *)(param_1 + 0x270));
    *param_2 = uVar2;
    *(undefined4 *)(param_1 + 0x2b0) = local_2c[0];
    *(undefined4 *)(param_1 + 0x2b4) = 0;
  }
  else {
    RK_LOG(2,DAT_00013a10,DAT_00013a14,DAT_00013a08,0xe4,iVar1);
  }
  return iVar1;
}



/* ===== FUN_00013a18 @ 00013a18 size=68 ===== */

undefined4 FUN_00013a18(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = RK_MPI_VPSS_ReleaseChnFrame
                    (*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),param_1 + 0x270,
                     param_4,param_1,param_2,param_3);
  if (iVar1 != 0) {
    RK_LOG(2,DAT_00013a64,DAT_00013a60,DAT_00013a5c,0xf7,iVar1);
  }
  return 0;
}



/* ===== FUN_00013a68 @ 00013a68 size=80 ===== */

int FUN_00013a68(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = RK_MPI_VPSS_SetChnAttr
                    (*(undefined4 *)(param_1 + 4),*(int *)(param_1 + 8),
                     *(int *)(param_1 + 8) * 0x4c + param_1 + 0x130,param_4,param_1,param_2);
  if (iVar1 != 0) {
    RK_LOG(2,DAT_00013ac0,DAT_00013abc,DAT_00013ab8,0x103,iVar1);
  }
  return iVar1;
}



/* ===== FUN_00013ac4 @ 00013ac4 size=200 ===== */

int FUN_00013ac4(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar3 = 0;
  iVar4 = param_1;
  while (((*(int *)(iVar4 + 0x134) == 0 || (*(int *)(iVar4 + 0x138) == 0)) ||
         (iVar1 = RK_MPI_VPSS_DisableChn(*(undefined4 *)(param_1 + 4),iVar3), iVar1 == 0))) {
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 0x4c;
    if (iVar3 == 4) {
      iVar1 = RK_MPI_VPSS_StopGrp(*(undefined4 *)(param_1 + 4));
      if (iVar1 == 0) {
        iVar1 = RK_MPI_VPSS_DestroyGrp(*(undefined4 *)(param_1 + 4));
        if (iVar1 == 0) {
          return 0;
        }
        uVar5 = 0x122;
        uVar2 = DAT_00013b9c;
      }
      else {
        uVar5 = 0x11c;
        uVar2 = DAT_00013b98;
      }
LAB_00013b14:
      RK_LOG(2,DAT_00013b94,uVar2,DAT_00013b90,uVar5,iVar1,param_3);
      return iVar1;
    }
  }
  uVar5 = 0x114;
  uVar2 = DAT_00013b8c;
  goto LAB_00013b14;
}



/* ===== FUN_00013ba0 @ 00013ba0 size=764 ===== */

int FUN_00013ba0(int *param_1)

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
  if (iVar1 == DAT_00013e9c) {
    iVar1 = RK_MPI_VI_SetDevAttr(param_1[7],param_1 + 0x10);
    if (iVar1 == 0) goto LAB_00013c18;
    uVar7 = 0x29;
    uVar5 = DAT_00013ea0;
  }
  else {
    RK_LOG(2,DAT_00013ea8,DAT_00013eac,DAT_00013ea4,0x2d);
LAB_00013c18:
    iVar1 = RK_MPI_VI_GetDevIsEnable(param_1[7]);
    if (iVar1 == 0) {
      RK_LOG(2,DAT_00013ea8,DAT_00013ebc,DAT_00013ea4,0x42);
LAB_00013cd4:
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
            uVar5 = DAT_00013ec4;
LAB_00013d54:
            RK_LOG(2,DAT_00013ea8,uVar5,DAT_00013ea4,uVar7,uVar6);
            return -1;
          }
          local_1c = 1;
          local_14 = param_1[4] * uVar4 * 3 >> 1;
          uStack_18 = uVar4;
          uVar6 = RK_MPI_VI_SetChnWrapBufAttr(param_1[8],param_1[9],&local_1c);
          if (uVar6 != 0) {
            uVar7 = 0x59;
            uVar5 = DAT_00013ec8;
            goto LAB_00013d54;
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
            uVar5 = DAT_00013ed4;
            goto LAB_00013e94;
          }
          uVar7 = 0x6d;
          uVar5 = DAT_00013ed0;
          goto LAB_00013c88;
        }
        RK_LOG(2,DAT_00013ea8,DAT_00013ecc,DAT_00013ea4,0x66,iVar1,param_1[8],param_1[9]);
      }
      else {
        uVar7 = 0x4a;
        uVar5 = DAT_00013ec0;
LAB_00013c88:
        RK_LOG(2,DAT_00013ea8,uVar5,DAT_00013ea4,uVar7,iVar1);
      }
      iVar1 = RK_MPI_VI_DisableDev(param_1[7]);
      uVar7 = 0x7d;
      uVar5 = DAT_00013eb8;
    }
    else {
      iVar1 = RK_MPI_VI_EnableDev(param_1[7]);
      if (iVar1 == 0) {
        param_1[0x17] = 1;
        param_1[0x18] = param_1[8];
        iVar1 = RK_MPI_VI_SetDevBindPipe(param_1[7],param_1 + 0x17);
        if (iVar1 == 0) goto LAB_00013cd4;
        uVar7 = 0x3e;
        uVar5 = DAT_00013eb4;
        goto LAB_00013c88;
      }
      uVar7 = 0x36;
      uVar5 = DAT_00013eb0;
    }
  }
  uVar2 = 2;
  iVar3 = iVar1;
LAB_00013e94:
  RK_LOG(uVar2,DAT_00013ea8,uVar5,DAT_00013ea4,uVar7,iVar3);
  return iVar1;
}



/* ===== FUN_00013ed8 @ 00013ed8 size=236 ===== */

undefined4 FUN_00013ed8(int param_1,undefined4 *param_2)

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
    RK_LOG(5,DAT_00013fc8,DAT_00013fc4,DAT_00013fcc,0x92,*(undefined4 *)(param_1 + 0x1c),
           *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),uVar2,
           *(undefined4 *)(param_1 + 0x380),*(undefined4 *)(param_1 + 900),
           *(undefined4 *)(param_1 + 0x368),*(undefined4 *)(param_1 + 0x374),
           *(undefined4 *)(param_1 + 0x378),*(undefined4 *)(param_1 + 0x36c),
           *(undefined4 *)(param_1 + 0x37c));
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
    RK_LOG(2,DAT_00013fc8,DAT_00013fd0,DAT_00013fcc,0x94,*(undefined4 *)(param_1 + 0x1c),iVar1);
  }
  return uVar2;
}



/* ===== FUN_00013fd4 @ 00013fd4 size=68 ===== */

undefined4 FUN_00013fd4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = RK_MPI_VI_ReleaseChnFrame
                    (*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),param_1 + 0x318
                     ,param_4,param_1,param_2,param_3);
  if (iVar1 != 0) {
    RK_LOG(2,DAT_00014020,DAT_0001401c,DAT_00014018,0xa0,iVar1);
  }
  return 0;
}



/* ===== FUN_00014024 @ 00014024 size=104 ===== */

uint FUN_00014024(int param_1,undefined4 param_2,undefined4 param_3)

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
    RK_LOG(2,DAT_00014094,DAT_00014090,DAT_0001408c,0xaf,uVar1);
  }
  return uVar1;
}



/* ===== FUN_00014098 @ 00014098 size=368 ===== */

void FUN_00014098(undefined4 param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  timeval *ptVar3;
  timeval *ptVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint in_fpscr;
  float fVar8;
  double dVar9;
  double dVar10;
  
  piVar2 = DAT_00014228;
  piVar1 = DAT_00014224;
  iVar7 = *DAT_00014224;
  *DAT_00014228 = *DAT_00014228 + param_2;
  ptVar4 = DAT_00014230;
  if (iVar7 == 0) {
    gettimeofday(DAT_0001422c,(__timezone_ptr_t)0x0);
  }
  else if (iVar7 == 100) {
    gettimeofday(DAT_00014230,(__timezone_ptr_t)0x0);
    ptVar3 = DAT_0001422c;
    printf(DAT_00014234,param_1);
    printf(DAT_00014238,ptVar3->tv_sec,ptVar3->tv_usec);
    printf(DAT_0001423c,ptVar4->tv_sec,ptVar4->tv_usec);
    piVar5 = DAT_00014240;
    iVar7 = ptVar4->tv_sec - ptVar3->tv_sec;
    iVar6 = ptVar4->tv_usec - ptVar3->tv_usec;
    *DAT_00014240 = iVar7;
    piVar5[1] = iVar6;
    if (iVar6 < 0) {
      *piVar5 = iVar7 + -1;
      piVar5[1] = iVar6 + 1000000;
    }
    dVar9 = (double)VectorSignedToFloat(*piVar5,(byte)(in_fpscr >> 0x16) & 3);
    dVar10 = (double)VectorSignedToFloat(piVar5[1],(byte)(in_fpscr >> 0x16) & 3);
    fVar8 = (float)VectorSignedToFloat(*piVar2,(byte)(in_fpscr >> 0x16) & 3);
    dVar9 = dVar10 / DAT_00014208 + dVar9 * DAT_00014208;
    printf(DAT_00014244,100,SUB84(dVar9,0),(int)((ulonglong)dVar9 >> 0x20),
           ((double)(fVar8 * 8.0 * DAT_00014220) / dVar9) * DAT_00014210 * DAT_00014210);
    printf(DAT_00014248);
    printf(DAT_0001424c);
    puts(DAT_00014250);
    *piVar1 = 0;
    *piVar2 = 0;
    return;
  }
  *piVar1 = iVar7 + 1;
  return;
}



/* ===== FUN_00014254 @ 00014254 size=60 ===== */

int FUN_00014254(void)

{
  int iVar1;
  
  iVar1 = RK_MPI_SYS_Bind();
  if (iVar1 != 0) {
    RK_LOG(2,DAT_00014298,DAT_00014294,DAT_00014290,0x4d,iVar1);
  }
  return iVar1;
}



/* ===== FUN_0001429c @ 0001429c size=60 ===== */

int FUN_0001429c(void)

{
  int iVar1;
  
  iVar1 = RK_MPI_SYS_UnBind();
  if (iVar1 != 0) {
    RK_LOG(2,DAT_000142e0,DAT_000142dc,DAT_000142d8,0x59,iVar1);
  }
  return iVar1;
}



/* ===== FUN_000142e4 @ 000142e4 size=312 ===== */

undefined4 FUN_000142e4(char *param_1,undefined4 *param_2,undefined4 *param_3)

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
    RK_LOG(2,DAT_00014424,DAT_0001441c,DAT_00014420,0x69);
  }
  else {
    __stream = fopen64(param_1,DAT_00014428);
    if (__stream == (FILE *)0x0) {
      RK_LOG(2,DAT_00014424,DAT_0001442c,DAT_00014420,0x6f,param_1);
    }
    else {
      fread(&local_46,1,2,__stream);
      if (local_46 == 0x4d42) {
        fseek(__stream,0xc,1);
        fread(auStack_44,1,0x2c,__stream);
        uVar2 = DAT_00014434;
        uVar1 = DAT_00014424;
        *param_2 = local_40;
        *param_3 = local_3c;
        RK_LOG(2,uVar1,uVar2,DAT_00014420,0x7e,*param_2,local_3c);
        fclose(__stream);
        return 0;
      }
      RK_LOG(2,DAT_00014424,DAT_00014430,DAT_00014420,0x75);
      fclose(__stream);
    }
  }
  return 0xffffffff;
}



/* ===== FUN_00014438 @ 00014438 size=72 ===== */

undefined4 FUN_00014438(undefined4 param_1,undefined4 param_2)

{
  char acStack_110 [260];
  
  system(DAT_00014480);
  sprintf(acStack_110,DAT_00014484,param_1,param_2);
  system(acStack_110);
  system(DAT_00014488);
  return 0;
}



/* ===== FUN_0001448c @ 0001448c size=288 ===== */

undefined4 FUN_0001448c(char *param_1,char *param_2,size_t param_3,undefined4 *param_4)

{
  FILE *__stream;
  FILE *__stream_00;
  size_t sVar1;
  uint unaff_r4;
  
  __stream = fopen64(param_1,DAT_000145ac);
  __stream_00 = fopen64(param_2,DAT_000145ac);
  if (__stream == (FILE *)0x0) {
    unaff_r4 = 1;
  }
  if (__stream != (FILE *)0x0) {
    unaff_r4 = (uint)(__stream_00 == (FILE *)0x0);
  }
  if (unaff_r4 == 0) {
    sVar1 = fread((void *)*param_4,1,param_3,__stream);
    if ((param_3 == sVar1) &&
       (sVar1 = fread((void *)param_4[1],1,param_3,__stream_00), param_3 == sVar1)) {
      fclose(__stream);
      fclose(__stream_00);
      return 0;
    }
    RK_LOG(2,DAT_000145b8,DAT_000145bc,DAT_000145b0,0xa0,param_1,param_2);
  }
  else {
    RK_LOG(2,DAT_000145b8,DAT_000145b4,DAT_000145b0,0x9a,param_1,param_2,__stream,__stream_00);
    if (__stream == (FILE *)0x0) goto LAB_00014518;
  }
  fclose(__stream);
LAB_00014518:
  if (__stream_00 != (FILE *)0x0) {
    fclose(__stream_00);
  }
  return 0xffffffff;
}



/* ===== FUN_00014674 @ 00014674 size=236 ===== */

undefined4 FUN_00014674(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  char *__format;
  undefined4 uVar2;
  char acStack_158 [16];
  undefined1 auStack_148 [304];
  
  iVar1 = DAT_0001476c;
  if (param_1 < 8) {
    setlinebuf((FILE *)*DAT_00014768);
    __format = DAT_00014778;
    if (param_4 == 0) {
      puts(DAT_00014770);
      uVar2 = 0;
    }
    else {
      *(undefined4 *)(DAT_00014774 + param_1 * 4) = param_2;
      snprintf(acStack_158,0x10,__format,param_2);
      setenv(DAT_0001477c,acStack_158,1);
      rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId(param_1,auStack_148);
      printf(DAT_00014780,param_1,auStack_148,param_4);
      rk_aiq_uapi2_sysctl_preInit_devBufCnt(auStack_148,DAT_00014784,2);
      uVar2 = rk_aiq_uapi2_sysctl_init(auStack_148,param_4,DAT_0001478c,DAT_00014788);
      if (param_3 != 0) {
        rk_aiq_uapi2_sysctl_setMulCamConc(uVar2,1);
      }
    }
    *(undefined4 *)(iVar1 + param_1 * 4) = uVar2;
    uVar2 = 0;
  }
  else {
    printf(DAT_00014764,DAT_00014760);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== FUN_00014790 @ 00014790 size=488 ===== */

int FUN_00014790(int param_1,ushort *param_2,int param_3)

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
  iVar3 = DAT_0001497c;
  __format = DAT_00014978;
  __s = param_2;
  if ((int)param_2 - 1U < 2) {
    iVar4 = rk_aiq_uapi2_camgroup_getCamInfos
                      (*(undefined4 *)(DAT_0001497c + param_1 * 4),&local_108);
    if (iVar4 == 0) {
      piVar7 = &local_108;
      iVar4 = 0;
      for (iVar8 = 0; iVar8 < local_108; iVar8 = iVar8 + 1) {
        iVar6 = rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm
                          (*(undefined4 *)(iVar3 + param_1 * 4),piVar7[1]);
        if (iVar6 == 0) {
          puts(DAT_00014998);
          goto LAB_00014968;
        }
        printf(DAT_00014980,piVar7[1],piVar7[9]);
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
              puts(DAT_00014984);
              local_84 = -1;
            }
            else {
              uVar1 = __s[2];
              uVar2 = __s[3];
              printf(DAT_0001498c,(uint)*__s,(uint)__s[1],(uint)uVar1,(uint)uVar2,(uint)__s[4],
                     (uint)__s[5]);
              local_84 = ((uint)uVar2 * (uint)uVar1 + 6) * 2;
            }
          }
          else {
            pcVar5 = strrchr((char *)__s,0x2f);
            __format = DAT_00014990;
            if (pcVar5 == (char *)0x0) goto LAB_000148e8;
            local_bc = 1;
            local_8c = 1;
            local_90 = (ushort *)0x1;
            memcpy(&local_88,__s,(size_t)(pcVar5 + (1 - (int)__s)));
            strcpy(acStack_48,pcVar5 + 1);
            printf(DAT_00014994,&local_88,acStack_48);
          }
          iVar6 = rk_aiq_user_api2_aldch_v21_SetAttrib(iVar6,auStack_c4);
          iVar4 = 0;
          if (iVar6 != 0) {
            printf(DAT_00014988,iVar6);
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
LAB_000148e8:
    printf(__format,__s);
LAB_00014968:
    iVar4 = -1;
  }
  return iVar4;
}



/* ===== FUN_0001499c @ 0001499c size=352 ===== */

undefined4
FUN_0001499c(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5,
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
  
  uVar1 = DAT_00014b20;
  __format_00 = DAT_00014b1c;
  __format = DAT_00014b18;
  if (param_1 < 8) {
    for (iVar4 = 0; iVar3 = DAT_00014b0c, iVar4 < *(int *)(param_6 + 0x20); iVar4 = iVar4 + 1) {
      iVar3 = rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId(iVar4,acStack_558);
      __s = DAT_00014b04;
      if (iVar3 != 0) goto LAB_000149f4;
      printf(__format,param_1,iVar4,acStack_558,*(undefined4 *)(param_6 + 0x24));
      __dest = auStack_428 + iVar4 * 0x80;
      sVar2 = strlen(acStack_558);
      memcpy(__dest,acStack_558,sVar2 + 1);
      *(undefined1 **)(param_6 + iVar4 * 4) = __dest;
      printf(__format_00,iVar4,__dest);
      iVar3 = rk_aiq_uapi2_sysctl_preInit_devBufCnt(acStack_558,uVar1,2);
      __s = DAT_00014b08;
      if (iVar3 != 0) goto LAB_000149f4;
    }
    iVar4 = rk_aiq_uapi2_camgroup_create(param_6);
    *(int *)(iVar3 + param_1 * 4) = iVar4;
    __s = DAT_00014b10;
    if (iVar4 != 0) {
      if (param_4 != 0) {
        FUN_00014790(param_1,param_4 & 0xff,param_5);
      }
      iVar4 = rk_aiq_uapi2_camgroup_prepare(*(undefined4 *)(iVar3 + param_1 * 4),param_2);
      iVar3 = rk_aiq_uapi2_camgroup_start(*(undefined4 *)(iVar3 + param_1 * 4));
      __s = DAT_00014b14;
      if (iVar4 == 0 && iVar3 == 0) {
        puts(DAT_00014b24);
        return 0;
      }
    }
LAB_000149f4:
    puts(__s);
  }
  else {
    printf(DAT_00014b00,DAT_00014afc,8);
  }
  return 0xffffffff;
}



/* ===== FUN_00014b28 @ 00014b28 size=112 ===== */

undefined4 FUN_00014b28(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_00014b98;
  if ((param_1 < 8) && (*(int *)(DAT_00014b98 + param_1 * 4) != 0)) {
    puts(DAT_00014ba4);
    rk_aiq_uapi2_sysctl_stop(*(undefined4 *)(iVar1 + param_1 * 4),0);
    puts(DAT_00014ba8);
    rk_aiq_uapi2_sysctl_deinit(*(undefined4 *)(iVar1 + param_1 * 4));
    puts(DAT_00014bac);
    *(undefined4 *)(iVar1 + param_1 * 4) = 0;
    return 0;
  }
  printf(DAT_00014ba0,DAT_00014b9c,param_1);
  return 0xffffffff;
}



/* ===== FUN_00014c30 @ 00014c30 size=152 ===== */

undefined4 FUN_00014c30(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_00014cc8;
  if ((param_1 < 8) && (iVar1 = *(int *)(DAT_00014cc8 + param_1 * 4), iVar1 != 0)) {
    iVar1 = rk_aiq_uapi2_sysctl_prepare(iVar1,0,0,*(undefined4 *)(DAT_00014cd4 + param_1 * 4));
    if (iVar1 == 0) {
      puts(DAT_00014cdc);
      iVar2 = rk_aiq_uapi2_sysctl_start(*(undefined4 *)(iVar2 + param_1 * 4));
      if (iVar2 == 0) {
        puts(DAT_00014ce4);
        return 0;
      }
      puts(DAT_00014ce0);
    }
    else {
      puts(DAT_00014cd8);
      *(undefined4 *)(iVar2 + param_1 * 4) = 0;
    }
  }
  else {
    printf(DAT_00014cd0,DAT_00014ccc);
  }
  return 0xffffffff;
}



/* ===== _fini @ 00015094 size=16 ===== */

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



/* ===== <EXTERNAL>::RK_MPI_VPSS_GetChnCrop @ 00028010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_GetChnCrop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sem_destroy @ 00028014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sem_destroy(sem_t *__sem)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_start @ 00028018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_start(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen64 @ 0002801c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_stop @ 00028020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_stop(void)

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



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevAttr @ 0002802c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetDevAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_DisableChn @ 00028030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_DisableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_ChnSaveFile @ 00028034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_ChnSaveFile(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_start @ 00028038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_start(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 0002803c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevBindPipe @ 00028040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetDevBindPipe(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_deinit @ 00028044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_deinit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_QueryChnStatus @ 00028048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_QueryChnStatus(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usleep @ 0002804c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::signal @ 00028050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId @ 00028054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 00028058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_Handle2VirAddr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_destroy @ 0002805c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChnExt @ 00028060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_EnableChnExt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_getCamInfos @ 00028064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_getCamInfos(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 00028068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_GetChnAttr @ 0002806c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_GetChnAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_SetChnCrop @ 00028070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_SetChnCrop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_ResetGrp @ 00028074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_ResetGrp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sleep @ 00028078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_create @ 0002807c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_GetChnFrame @ 00028080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_GetChnFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableDev @ 00028084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_EnableDev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_destroy @ 00028088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_destroy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_StartGrp @ 0002808c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_StartGrp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sem_wait @ 00028090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sem_wait(sem_t *__sem)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 00028094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_UnBind @ 00028098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_UnBind(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_prepare @ 0002809c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_prepare(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 000280a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_ReleaseMB @ 000280a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_ReleaseMB(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_GetGrpCrop @ 000280a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_GetGrpCrop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_ae_getExpSwAttr @ 000280ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_user_api2_ae_getExpSwAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 000280b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strchr @ 000280b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setlinebuf @ 000280b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void setlinebuf(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_EnableChn @ 000280bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_EnableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_unlock @ 000280c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnAttr @ 000280c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetChnAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_join @ 000280c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChn @ 000280cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_DisableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strrchr @ 000280d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 000280d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_aldch_v21_SetAttrib @ 000280d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_user_api2_aldch_v21_SetAttrib(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_preInit_devBufCnt @ 000280dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_preInit_devBufCnt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_GetMB @ 000280e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_GetMB(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 000280e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Bind @ 000280e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Bind(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_SetChnAttr @ 000280ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_SetChnAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sem_init @ 000280f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sem_init(sem_t *__sem,int __pshared,uint __value)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_ReleaseChnFrame @ 000280f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_ReleaseChnFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_CAL_VGS_GetPicBufferSize @ 000280f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_CAL_VGS_GetPicBufferSize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_MmzFlushCache @ 000280fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_MmzFlushCache(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 00028100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_setMirrorFlip @ 00028104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_setMirrorFlip(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChnExt @ 00028108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_DisableChnExt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sem_post @ 0002810c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sem_post(sem_t *__sem)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_GetChnRotation @ 00028110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_GetChnRotation(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_StopGrp @ 00028114 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_StopGrp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_create @ 00028118 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_create(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_lock @ 0002811c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetEptz @ 00028120 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetEptz(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::system @ 00028124 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int system(char *__command)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_SetGrpCrop @ 00028128 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_SetGrpCrop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_SetChnRotation @ 0002812c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_SetChnRotation(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_init @ 00028130 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gettimeofday @ 00028134 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_CreateGrp @ 00028138 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_CreateGrp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 0002813c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_SetVProcDev @ 00028140 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_SetVProcDev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_GetVProcDev @ 00028144 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_GetVProcDev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableDev @ 00028148 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_DisableDev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetChnFrame @ 0002814c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetChnFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 00028150 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fseek @ 00028154 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 00028158 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0002815c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_ReleaseChnFrame @ 00028160 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_ReleaseChnFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 00028164 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Exit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_ae_setExpSwAttr @ 00028168 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_user_api2_ae_setExpSwAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::prctl @ 0002816c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int prctl(int __option,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_stop @ 00028170 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_stop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fread @ 00028174 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_DestroyGrp @ 00028178 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_DestroyGrp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 0002817c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt_long @ 00028180 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void getopt_long(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 00028184 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevAttr @ 00028188 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetDevAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_prepare @ 0002818c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_prepare(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm @ 00028190 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 00028194 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnWrapBufAttr @ 00028198 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetChnWrapBufAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_setMulCamConc @ 0002819c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_setMulCamConc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 000281a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevIsEnable @ 000281a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetDevIsEnable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_switch_scene @ 000281a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_switch_scene(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_aldch_v21_GetAttrib @ 000281ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_user_api2_aldch_v21_GetAttrib(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_LOG @ 000281b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_LOG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_SendFrame @ 000281b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_SendFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_init @ 000281b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setenv @ 000281bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setenv(char *__name,char *__value,int __replace)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChn @ 000281c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_EnableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


