// sample_avs_stresstest — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00011c44 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 00011c68 size=12 ===== */

void RK_MPI_SYS_Exit(void)

{
  (*(code *)PTR_RK_MPI_SYS_Exit_0002800c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AVS_GetChnAttr @ 00011c74 size=12 ===== */

void RK_MPI_AVS_GetChnAttr(void)

{
  (*(code *)PTR_RK_MPI_AVS_GetChnAttr_00028010)();
  return;
}



/* ===== <EXTERNAL>::sem_init @ 00011c80 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sem_init(sem_t *__sem,int __pshared,uint __value)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sem_init_00028014)(__sem);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Bind @ 00011c8c size=12 ===== */

void RK_MPI_SYS_Bind(void)

{
  (*(code *)PTR_RK_MPI_SYS_Bind_00028018)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm @ 00011c98 size=12 ===== */

void rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm_0002801c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_QueryChnStatus @ 00011ca4 size=12 ===== */

void RK_MPI_VI_QueryChnStatus(void)

{
  (*(code *)PTR_RK_MPI_VI_QueryChnStatus_00028020)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00011cb0 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00028024)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnWrapBufAttr @ 00011cbc size=12 ===== */

void RK_MPI_VI_SetChnWrapBufAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetChnWrapBufAttr_00028028)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_destroy @ 00011cc8 size=12 ===== */

void rk_aiq_uapi2_camgroup_destroy(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_destroy_0002802c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_CAL_AVS_GetFinalLutBufferSize @ 00011cd4 size=12 ===== */

void RK_MPI_CAL_AVS_GetFinalLutBufferSize(void)

{
  (*(code *)PTR_RK_MPI_CAL_AVS_GetFinalLutBufferSize_00028030)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_ae_setExpSwAttr @ 00011ce0 size=12 ===== */

void rk_aiq_user_api2_ae_setExpSwAttr(void)

{
  (*(code *)PTR_rk_aiq_user_api2_ae_setExpSwAttr_00028034)();
  return;
}



/* ===== <EXTERNAL>::fwrite @ 00011cec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_00028038)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::system @ 00011cf8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int system(char *__command)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_system_0002803c)(__command);
  return iVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_switch_scene @ 00011d04 size=12 ===== */

void rk_aiq_uapi2_sysctl_switch_scene(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_switch_scene_00028040)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChn @ 00011d10 size=12 ===== */

void RK_MPI_VI_DisableChn(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableChn_00028044)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_StopPipe @ 00011d1c size=12 ===== */

void RK_MPI_VI_StopPipe(void)

{
  (*(code *)PTR_RK_MPI_VI_StopPipe_00028048)();
  return;
}



/* ===== <EXTERNAL>::usleep @ 00011d28 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_usleep_0002804c)(__useconds);
  return iVar1;
}



/* ===== <EXTERNAL>::memcpy @ 00011d34 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00028050)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_setMulCamConc @ 00011d40 size=12 ===== */

void rk_aiq_uapi2_sysctl_setMulCamConc(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_setMulCamConc_00028054)();
  return;
}



/* ===== <EXTERNAL>::sleep @ 00011d4c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_sleep_00028058)(__seconds);
  return uVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_ReleaseChnFrame @ 00011d58 size=12 ===== */

void RK_MPI_VI_ReleaseChnFrame(void)

{
  (*(code *)PTR_RK_MPI_VI_ReleaseChnFrame_0002805c)();
  return;
}



/* ===== <EXTERNAL>::pthread_mutex_init @ 00011d64 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_00028060)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_create @ 00011d70 size=12 ===== */

void rk_aiq_uapi2_camgroup_create(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_create_00028064)();
  return;
}



/* ===== <EXTERNAL>::gettimeofday @ 00011d7c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_gettimeofday_00028068)(__tv);
  return iVar1;
}



/* ===== <EXTERNAL>::prctl @ 00011d88 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int prctl(int __option,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_prctl_0002806c)(__option);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevAttr @ 00011d94 size=12 ===== */

void RK_MPI_VI_GetDevAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_GetDevAttr_00028070)();
  return;
}



/* ===== <EXTERNAL>::setenv @ 00011da0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setenv(char *__name,char *__value,int __replace)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setenv_00028074)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::malloc @ 00011dac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00028078)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_aldch_v21_SetAttrib @ 00011db8 size=12 ===== */

void rk_aiq_user_api2_aldch_v21_SetAttrib(void)

{
  (*(code *)PTR_rk_aiq_user_api2_aldch_v21_SetAttrib_0002807c)();
  return;
}



/* ===== <EXTERNAL>::strrchr @ 00011dc4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strrchr_00028080)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::fopen64 @ 00011ddc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen64_00028088)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AVS_StopGrp @ 00011de8 size=12 ===== */

void RK_MPI_AVS_StopGrp(void)

{
  (*(code *)PTR_RK_MPI_AVS_StopGrp_0002808c)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_setMirrorFlip @ 00011df4 size=12 ===== */

void rk_aiq_uapi2_setMirrorFlip(void)

{
  (*(code *)PTR_rk_aiq_uapi2_setMirrorFlip_00028090)();
  return;
}



/* ===== <EXTERNAL>::setlinebuf @ 00011e00 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void setlinebuf(FILE *__stream)

{
  (*(code *)PTR_setlinebuf_00028094)(__stream);
  return;
}



/* ===== <EXTERNAL>::strlen @ 00011e0c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00028098)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::pthread_mutex_lock @ 00011e18 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_0002809c)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AVS_GetFinalLut @ 00011e24 size=12 ===== */

void RK_MPI_AVS_GetFinalLut(void)

{
  (*(code *)PTR_RK_MPI_AVS_GetFinalLut_000280a0)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AVS_ReleaseChnFrame @ 00011e30 size=12 ===== */

void RK_MPI_AVS_ReleaseChnFrame(void)

{
  (*(code *)PTR_RK_MPI_AVS_ReleaseChnFrame_000280a4)();
  return;
}



/* ===== <EXTERNAL>::snprintf @ 00011e3c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_000280a8)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AVS_DestroyGrp @ 00011e48 size=12 ===== */

void RK_MPI_AVS_DestroyGrp(void)

{
  (*(code *)PTR_RK_MPI_AVS_DestroyGrp_000280ac)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AVS_StartGrp @ 00011e54 size=12 ===== */

void RK_MPI_AVS_StartGrp(void)

{
  (*(code *)PTR_RK_MPI_AVS_StartGrp_000280b0)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_aldch_v21_GetAttrib @ 00011e60 size=12 ===== */

void rk_aiq_user_api2_aldch_v21_GetAttrib(void)

{
  (*(code *)PTR_rk_aiq_user_api2_aldch_v21_GetAttrib_000280b4)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnAttr @ 00011e6c size=12 ===== */

void RK_MPI_VI_SetChnAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetChnAttr_000280b8)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_UnBind @ 00011e78 size=12 ===== */

void RK_MPI_SYS_UnBind(void)

{
  (*(code *)PTR_RK_MPI_SYS_UnBind_000280bc)();
  return;
}



/* ===== <EXTERNAL>::sem_destroy @ 00011e84 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sem_destroy(sem_t *__sem)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sem_destroy_000280c0)(__sem);
  return iVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_prepare @ 00011e90 size=12 ===== */

void rk_aiq_uapi2_camgroup_prepare(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_prepare_000280c4)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 00011e9c size=12 ===== */

void RK_MPI_SYS_Init(void)

{
  (*(code *)PTR_RK_MPI_SYS_Init_000280c8)();
  return;
}



/* ===== <EXTERNAL>::pthread_mutex_destroy @ 00011ea8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_000280cc)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId @ 00011eb4 size=12 ===== */

void rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId_000280d0)();
  return;
}



/* ===== <EXTERNAL>::fclose @ 00011ec0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_000280d4)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AVS_EnableChn @ 00011ecc size=12 ===== */

void RK_MPI_AVS_EnableChn(void)

{
  (*(code *)PTR_RK_MPI_AVS_EnableChn_000280d8)();
  return;
}



/* ===== <EXTERNAL>::fread @ 00011ed8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fread_000280dc)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::RK_LOG @ 00011ee4 size=12 ===== */

void RK_LOG(void)

{
  (*(code *)PTR_RK_LOG_000280e0)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_getCamInfos @ 00011ef0 size=12 ===== */

void rk_aiq_uapi2_camgroup_getCamInfos(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_getCamInfos_000280e4)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_start @ 00011efc size=12 ===== */

void rk_aiq_uapi2_camgroup_start(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_start_000280e8)();
  return;
}



/* ===== <EXTERNAL>::pthread_create @ 00011f08 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_000280ec)(__newthread);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_StartPipe @ 00011f14 size=12 ===== */

void RK_MPI_VI_StartPipe(void)

{
  (*(code *)PTR_RK_MPI_VI_StartPipe_000280f0)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChnExt @ 00011f20 size=12 ===== */

void RK_MPI_VI_DisableChnExt(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableChnExt_000280f4)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetChnFrame @ 00011f2c size=12 ===== */

void RK_MPI_VI_GetChnFrame(void)

{
  (*(code *)PTR_RK_MPI_VI_GetChnFrame_000280f8)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChnExt @ 00011f38 size=12 ===== */

void RK_MPI_VI_EnableChnExt(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableChnExt_000280fc)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevBindPipe @ 00011f44 size=12 ===== */

void RK_MPI_VI_SetDevBindPipe(void)

{
  (*(code *)PTR_RK_MPI_VI_SetDevBindPipe_00028100)();
  return;
}



/* ===== <EXTERNAL>::atof @ 00011f50 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double atof(char *__nptr)

{
  undefined4 uVar1;
  undefined4 extraout_s1;
  
  uVar1 = (*(code *)PTR_atof_00028104)(__nptr);
  return (double)CONCAT44(extraout_s1,uVar1);
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_prepare @ 00011f5c size=12 ===== */

void rk_aiq_uapi2_sysctl_prepare(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_prepare_00028108)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevIsEnable @ 00011f68 size=12 ===== */

void RK_MPI_VI_GetDevIsEnable(void)

{
  (*(code *)PTR_RK_MPI_VI_GetDevIsEnable_0002810c)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_init @ 00011f74 size=12 ===== */

void rk_aiq_uapi2_sysctl_init(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_init_00028110)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableDev @ 00011f80 size=12 ===== */

void RK_MPI_VI_EnableDev(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableDev_00028114)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_start @ 00011f8c size=12 ===== */

void rk_aiq_uapi2_sysctl_start(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_start_00028118)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_CreateMB @ 00011f98 size=12 ===== */

void RK_MPI_SYS_CreateMB(void)

{
  (*(code *)PTR_RK_MPI_SYS_CreateMB_0002811c)();
  return;
}



/* ===== <EXTERNAL>::fflush @ 00011fa4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_00028120)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 00011fb0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00028124)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_ae_getExpSwAttr @ 00011fbc size=12 ===== */

void rk_aiq_user_api2_ae_getExpSwAttr(void)

{
  (*(code *)PTR_rk_aiq_user_api2_ae_getExpSwAttr_00028128)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AVS_GetChnFrame @ 00011fc8 size=12 ===== */

void RK_MPI_AVS_GetChnFrame(void)

{
  (*(code *)PTR_RK_MPI_AVS_GetChnFrame_0002812c)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_preInit_devBufCnt @ 00011fd4 size=12 ===== */

void rk_aiq_uapi2_sysctl_preInit_devBufCnt(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_preInit_devBufCnt_00028130)();
  return;
}



/* ===== <EXTERNAL>::fprintf @ 00011fe0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00028134)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_ChnSaveFile @ 00011fec size=12 ===== */

void RK_MPI_VI_ChnSaveFile(void)

{
  (*(code *)PTR_RK_MPI_VI_ChnSaveFile_00028138)();
  return;
}



/* ===== <EXTERNAL>::abort @ 00011ff8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_0002813c)();
  return;
}



/* ===== <EXTERNAL>::sprintf @ 00012004 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_00028140)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::fseek @ 00012010 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fseek_00028144)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Free @ 0001201c size=12 ===== */

void RK_MPI_SYS_Free(void)

{
  (*(code *)PTR_RK_MPI_SYS_Free_00028148)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 00012028 size=12 ===== */

void RK_MPI_MB_Handle2VirAddr(void)

{
  (*(code *)PTR_RK_MPI_MB_Handle2VirAddr_0002814c)();
  return;
}



/* ===== <EXTERNAL>::pthread_mutex_unlock @ 00012034 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_00028150)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_deinit @ 00012040 size=12 ===== */

void rk_aiq_uapi2_sysctl_deinit(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_deinit_00028154)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_stop @ 0001204c size=12 ===== */

void rk_aiq_uapi2_sysctl_stop(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_stop_00028158)();
  return;
}



/* ===== <EXTERNAL>::raise @ 00012058 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_0002815c)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::sem_post @ 00012064 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sem_post(sem_t *__sem)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sem_post_00028160)(__sem);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetEptz @ 00012070 size=12 ===== */

void RK_MPI_VI_SetEptz(void)

{
  (*(code *)PTR_RK_MPI_VI_SetEptz_00028164)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevAttr @ 0001207c size=12 ===== */

void RK_MPI_VI_SetDevAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetDevAttr_00028168)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AVS_SetChnAttr @ 00012088 size=12 ===== */

void RK_MPI_AVS_SetChnAttr(void)

{
  (*(code *)PTR_RK_MPI_AVS_SetChnAttr_0002816c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChn @ 00012094 size=12 ===== */

void RK_MPI_VI_EnableChn(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableChn_00028170)();
  return;
}



/* ===== <EXTERNAL>::free @ 000120a0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00028174)(__ptr);
  return;
}



/* ===== <EXTERNAL>::atoi @ 000120ac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_00028178)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::strchr @ 000120b8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_0002817c)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::printf @ 000120c4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00028180)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::getopt_long @ 000120d0 size=12 ===== */

void getopt_long(void)

{
  (*(code *)PTR_getopt_long_00028184)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AVS_CreateGrp @ 000120dc size=12 ===== */

void RK_MPI_AVS_CreateGrp(void)

{
  (*(code *)PTR_RK_MPI_AVS_CreateGrp_00028188)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableDev @ 000120e8 size=12 ===== */

void RK_MPI_VI_DisableDev(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableDev_0002818c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_CAL_TDE_GetPicBufferSize @ 000120f4 size=12 ===== */

void RK_MPI_CAL_TDE_GetPicBufferSize(void)

{
  (*(code *)PTR_RK_MPI_CAL_TDE_GetPicBufferSize_00028190)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AVS_DisableChn @ 00012100 size=12 ===== */

void RK_MPI_AVS_DisableChn(void)

{
  (*(code *)PTR_RK_MPI_AVS_DisableChn_00028194)();
  return;
}



/* ===== <EXTERNAL>::puts @ 0001210c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00028198)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_stop @ 00012118 size=12 ===== */

void rk_aiq_uapi2_camgroup_stop(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_stop_0002819c)();
  return;
}



/* ===== <EXTERNAL>::signal @ 00012124 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = (__sighandler_t)(*(code *)PTR_signal_000281a0)(__sig);
  return p_Var1;
}



/* ===== <EXTERNAL>::strcpy @ 00012130 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_000281a4)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0001213c size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_000281a8)();
  return;
}



/* ===== <EXTERNAL>::sem_wait @ 00012148 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sem_wait(sem_t *__sem)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sem_wait_000281ac)(__sem);
  return iVar1;
}



/* ===== <EXTERNAL>::pthread_join @ 00012154 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_000281b0)(__th);
  return iVar1;
}



/* ===== FUN_00012160 @ 00012160 size=2884 ===== */

/* WARNING: Type propagation algorithm not settling */

int FUN_00012160(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int *piVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  void *pvVar6;
  undefined4 *puVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  char *pcVar13;
  int iVar14;
  int iVar15;
  char *__nptr;
  undefined4 uVar16;
  double dVar17;
  char *pcVar18;
  float fVar19;
  undefined4 uVar20;
  int local_e8;
  int local_e4;
  char *local_e0;
  int local_dc;
  int local_d8;
  char *local_d4;
  char *local_d0;
  int local_cc;
  int local_c8;
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
  
  piVar1 = DAT_00012ca4;
  uVar11 = 0;
  pcVar18 = *(char **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  iVar10 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uVar20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_ac[0] = 0;
  local_9c = (char *)0x0;
  local_8c = 0;
  local_84 = 0;
  pcStack_98 = pcVar18;
  iStack_94 = iVar10;
  uStack_90 = uVar20;
  pcStack_88 = pcVar18;
  pcStack_80 = pcVar18;
  if (param_1 < 2) {
    FUN_00013854(*param_2);
    return 0;
  }
  pvVar6 = malloc(0x1ef8);
  piVar2 = DAT_00012ca8;
  *piVar1 = (int)pvVar6;
  if (pvVar6 == (void *)0x0) {
    uVar20 = 0x1b5;
    uVar11 = DAT_00012cac;
  }
  else {
    memset(pvVar6,0,0x1ef8);
    puVar7 = malloc(0x30);
    *piVar2 = (int)puVar7;
    if (puVar7 == (undefined4 *)0x0) {
      uVar20 = 0x1bc;
      uVar11 = DAT_00012cc0;
    }
    else {
      puVar7[8] = uVar11;
      puVar7[9] = pcVar18;
      puVar7[7] = 10;
      puVar7[10] = uVar11;
      puVar7[0xb] = pcVar18;
      *puVar7 = uVar11;
      puVar7[1] = pcVar18;
      puVar7[2] = iVar10;
      puVar7[3] = uVar20;
      puVar7[6] = 0xffffffff;
      puVar7[4] = uVar11;
      puVar7[5] = pcVar18;
      puVar7[9] = 0x870;
      puVar7[10] = 800;
      sem_init(DAT_00012cc4,0,0);
      iVar14 = pthread_mutex_init(DAT_00012cc8,(pthread_mutexattr_t *)0x0);
      pcVar13 = DAT_00012cd0;
      if (iVar14 == 0) {
        fVar19 = 5.0;
        signal(2,DAT_00012ccc);
        iVar14 = 2;
        local_bc = -1;
        iVar12 = 2;
        local_e0 = DAT_00012cd4;
        local_cc = 0x438;
        local_c8 = 0xf00;
        local_d0 = DAT_00012cd8;
        local_c4 = 2;
        local_b8 = 0xf;
        local_c0 = 2;
        local_dc = 0x438;
        local_d8 = 0x780;
        local_e4 = 1;
        uVar16 = 0;
        pcVar3 = DAT_00012cdc;
        pcVar4 = local_e0;
        pcVar5 = (char *)0x0;
        do {
          while( true ) {
            do {
              while( true ) {
                while( true ) {
                  while( true ) {
                    while( true ) {
                      local_d4 = pcVar5;
                      local_e0 = pcVar4;
                      pcVar9 = pcVar3;
                      iVar8 = getopt_long(param_1,param_2,DAT_00012ce4,DAT_00012ce0,0);
                      if (iVar8 == -1) {
                        printf(DAT_00012ce8,0);
                        printf(DAT_00012cec,0);
                        printf(DAT_00012cf0,local_d0);
                        printf(DAT_00012cf8,DAT_00012cf4);
                        printf(DAT_00012cfc,local_d4);
                        printf(DAT_00012d00,pcVar13);
                        printf(DAT_00012d04);
                        printf(DAT_00012d08,local_e0);
                        printf(DAT_00012d0c,pcVar9);
                        if (pcVar9 != (char *)0x0 && (local_e0 != (char *)0x0 && iVar14 == 1)) {
                          local_9c = local_e0;
                          pcStack_98 = pcVar9;
                        }
                        iVar8 = RK_MPI_SYS_Init();
                        if (iVar8 != 0) goto LAB_00012408;
                        iVar8 = *DAT_00012ca4;
                        *(char **)(iVar8 + 0x1ef0) = local_d4;
                        *(undefined4 *)(iVar8 + 0x1c98) = 0;
                        *(undefined4 *)(iVar8 + 0x1c9c) = 0;
                        *(int *)(iVar8 + 0x1c84) = local_bc;
                        *(int *)(iVar8 + 0x1c80) = iVar14;
                        *(int *)(iVar8 + 0x1c88) = local_d8;
                        *(int *)(iVar8 + 0x1c8c) = local_dc;
                        *(float *)(iVar8 + 0x1c90) = fVar19;
                        *(char **)(iVar8 + 0x1cb8) = local_d0;
                        *(int *)(iVar8 + 0x1d98) = local_c8;
                        *(int *)(iVar8 + 0x1cd0) = local_d8;
                        *(undefined4 *)(iVar8 + 0x1cd8) = 1;
                        *(int *)(iVar8 + 0x1d9c) = local_cc;
                        *(int *)(iVar8 + 0x1cd4) = local_dc;
                        *(undefined4 *)(iVar8 + 0x1cb0) = 1;
                        *(undefined4 *)(iVar8 + 0x1cb4) = 1;
                        *(char ***)(iVar8 + 0x1c94) = &local_9c;
                        *(undefined4 *)(iVar8 + 0x1ca8) = 0;
                        *(int *)(iVar8 + 0x1cac) = iVar12;
                        *(undefined4 *)(iVar8 + 0x1cf8) = 0;
                        *(undefined4 *)(iVar8 + 0x1da4) = 0xffffffff;
                        *(undefined4 *)(iVar8 + 0x1da8) = 0xffffffff;
                        *(float *)(iVar8 + 0x1da0) = fVar19;
                        *(undefined4 *)(iVar8 + 0x1e6c) = 1;
                        *(undefined4 *)(iVar8 + 0x1e64) = 0;
                        *(undefined4 *)(iVar8 + 0x1e70) = 0xffffffff;
                        *(int *)(iVar8 + 0x1e5c) = local_c8;
                        *(undefined4 *)(iVar8 + 0x1e74) = 0xffffffff;
                        *(undefined4 *)(iVar8 + 0x1e78) = 2;
                        *(int *)(iVar8 + 0x1e60) = local_cc;
                        *(undefined4 *)(iVar8 + 0x1e68) = 0;
                        FUN_00013e64(iVar8 + 0x1c80);
                        if (pcVar13 == (char *)0x0) goto LAB_00012880;
                        printf(DAT_00012d20,pcVar13);
                        printf(DAT_00012d24,uVar16);
                        if (local_e4 == 0) {
                          iVar10 = 0;
                          goto LAB_00012878;
                        }
                        uStack_68 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
                        local_4c = 0;
                        local_6c = 0;
                        local_64 = 0;
                        local_54 = 0;
                        uStack_48 = 0;
                        local_7c = uVar11;
                        pcStack_78 = pcVar18;
                        local_74 = iVar10;
                        uStack_70 = uVar20;
                        uStack_60 = uStack_68;
                        local_5c = iVar12;
                        local_58 = pcVar13;
                        uStack_50 = uStack_68;
                        uStack_44 = uStack_68;
                        iVar10 = FUN_00014d9c(0,0,uVar16,iVar14,&local_9c,&local_7c);
                        if (iVar10 == 0) {
                          RK_LOG(2,DAT_00012cb4,DAT_00012d4c,DAT_00012cbc,0x2c3);
                          iVar10 = FUN_00015190(0,local_b8);
                          if (iVar10 == 0) {
                            RK_LOG(2,DAT_00012cb4,DAT_00012d54,DAT_00012cbc,0x2cb);
                            goto LAB_00012880;
                          }
                          uVar20 = 0x2c8;
                          uVar11 = DAT_00012d50;
                        }
                        else {
                          uVar20 = 0x2c0;
                          uVar11 = DAT_00012d28;
                        }
                        RK_LOG(2,DAT_00012cb4,uVar11,DAT_00012cbc,uVar20);
                        return iVar10;
                      }
                      __nptr = (char *)*DAT_00012d18;
                      pcVar3 = pcVar9;
                      pcVar4 = local_e0;
                      pcVar5 = local_d4;
                      if (iVar8 != 0x6d) break;
                      iVar15 = *DAT_00012ca8;
                      iVar8 = atoi(__nptr);
                      *(int *)(iVar15 + 0x14) = iVar8;
                    }
                    if (iVar8 < 0x6e) break;
                    if (iVar8 == 0xd4) {
                      local_c8 = atoi(__nptr);
                      pcVar9 = strchr(__nptr,0x78);
                      local_cc = atoi(pcVar9 + 1);
                    }
                    else if (iVar8 < 0xd5) {
                      pcVar5 = __nptr;
                      if (iVar8 != 0x6f) {
                        if (iVar8 < 0x6f) {
                          iVar12 = atoi(__nptr);
                          pcVar5 = local_d4;
                        }
                        else {
                          pcVar3 = __nptr;
                          pcVar5 = local_d4;
                          if (iVar8 != 0xb9) {
                            if (iVar8 != 0xd0) goto LAB_000124b0;
                            iVar14 = atoi(__nptr);
                            pcVar3 = pcVar9;
                          }
                        }
                      }
                    }
                    else if (iVar8 == 0xdf) {
                      local_c0 = atoi(__nptr);
                    }
                    else if (iVar8 < 0xe0) {
                      if (iVar8 != 0xd9) goto LAB_000124b0;
                      local_c4 = atoi(__nptr);
                    }
                    else if (iVar8 == 0xe0) {
                      iVar15 = *DAT_00012ca8;
                      iVar8 = atoi(__nptr);
                      *(int *)(iVar15 + 0x18) = iVar8;
                    }
                    else {
                      if (iVar8 != 0xe9) goto LAB_000124b0;
                      local_d8 = atoi(__nptr);
                      pcVar9 = strchr(__nptr,0x78);
                      local_dc = atoi(pcVar9 + 1);
                    }
                  }
                  if (iVar8 != 99) break;
                  iVar8 = atoi(__nptr);
                  *(int *)(*DAT_00012ca8 + 0x1c) = iVar8;
                }
                if (iVar8 < 100) break;
                if (iVar8 == 0x66) {
                  local_b8 = atoi(__nptr);
                }
                else if (iVar8 < 0x67) {
                  if (iVar8 != 100) goto LAB_000124b0;
                  dVar17 = atof(__nptr);
                  fVar19 = (float)dVar17;
                }
                else if (iVar8 == 0x69) {
                  local_e4 = atoi(__nptr);
                }
                else {
                  if (iVar8 != 0x6c) goto LAB_000124b0;
                  local_bc = atoi(__nptr);
                }
              }
              pcVar4 = __nptr;
            } while (iVar8 == 0x4c);
            if (iVar8 < 0x4d) break;
            if (iVar8 == 0x4d) {
              iVar8 = atoi(__nptr);
              pcVar4 = local_e0;
              if (iVar8 != 0) {
                uVar16 = 1;
              }
            }
            else {
              if (iVar8 != 0x61) goto LAB_000124b0;
              pcVar13 = __nptr;
              pcVar4 = local_e0;
              if (__nptr == (char *)0x0) {
                pcVar13 = (char *)param_2[*DAT_00012d1c];
                if (pcVar13 != (char *)0x0) {
                  if (*pcVar13 == '-') {
                    pcVar13 = (char *)0x0;
                  }
                  else {
                    *DAT_00012d1c = *DAT_00012d1c + 1;
                  }
                }
              }
            }
          }
          pcVar4 = local_e0;
          local_d0 = __nptr;
        } while (iVar8 == 0x41);
LAB_000124b0:
        FUN_00013854(*param_2);
        return 0;
      }
      uVar20 = 0x1c9;
      uVar11 = DAT_00012d14;
    }
  }
  RK_LOG(2,DAT_00012cb4,uVar11,DAT_00012cb0,uVar20);
  if ((void *)*piVar1 != (void *)0x0) {
    free((void *)*piVar1);
    *piVar1 = 0;
  }
  if ((void *)*piVar2 != (void *)0x0) {
    free((void *)*piVar2);
    *piVar2 = 0;
  }
  uVar20 = 0x213;
  iVar14 = -1;
  uVar11 = DAT_00012cb8;
  iVar10 = -1;
LAB_00012230:
  RK_LOG(2,DAT_00012cb4,uVar11,DAT_00012cbc,uVar20,iVar10);
  return iVar14;
LAB_00012878:
  if (iVar12 <= iVar10) goto LAB_00012880;
  iVar14 = FUN_00014a74(iVar10,0,uVar16,pcVar13);
  iVar8 = FUN_00015030(iVar10);
  if (iVar14 != 0 || iVar8 != 0) {
    uVar20 = 0x2b1;
    iVar14 = -1;
    uVar11 = DAT_00012d2c;
    goto LAB_00012230;
  }
  iVar10 = iVar10 + 1;
  goto LAB_00012878;
LAB_00012880:
  piVar1 = DAT_00012ca4;
  for (iVar10 = 0; iVar10 < iVar12; iVar10 = iVar10 + 1) {
    iVar14 = iVar10 * 0x390 + *piVar1;
    *(int *)(iVar14 + 0x10) = local_d8;
    *(int *)(iVar14 + 0x1c) = iVar10;
    *(int *)(iVar14 + 0x20) = iVar10;
    *(int *)(iVar14 + 0x14) = local_dc;
    *(int *)(iVar14 + 0x24) = local_c0;
    *(int *)(iVar14 + 8) = local_e4;
    *(int *)(iVar14 + 0xd0) = local_c4;
    *(undefined4 *)(iVar14 + 0xdc) = 4;
    *(undefined4 *)(iVar14 + 0xc0) = 0;
    *(undefined4 *)(iVar14 + 0xa8) = 0;
    *(undefined4 *)(iVar14 + 0xb4) = 0;
    *(undefined4 *)(iVar14 + 0xc4) = 0xffffffff;
    *(undefined4 *)(iVar14 + 200) = 0xffffffff;
    FUN_0001396c();
  }
  for (iVar10 = 0; iVar10 < iVar12; iVar10 = iVar10 + 1) {
    iVar14 = *piVar1 + iVar10 * 0x390;
    if (*(int *)(iVar14 + 8) == 0) break;
    iVar14 = RK_MPI_VI_StartPipe(*(undefined4 *)(iVar14 + 0x20));
    if (iVar14 != 0) {
      RK_LOG(2,DAT_00012cb4,DAT_00012d58,DAT_00012cbc,0x2ec,iVar14,
             *(undefined4 *)(*piVar1 + iVar10 * 0x390 + 0x20));
      goto LAB_00012b7c;
    }
  }
  iVar10 = FUN_0001411c(*piVar1 + 0x1c80);
  if (iVar10 != 0) {
    RK_LOG(2,DAT_00012cb4,DAT_00012d30,DAT_00012cbc,0x2f4,iVar10);
    FUN_00012ec8(DAT_00012d34,0x2f5);
  }
  for (iVar10 = 0; piVar2 = DAT_00012ca8, iVar14 = *piVar1, iVar10 < iVar12; iVar10 = iVar10 + 1) {
    iVar8 = iVar10 * 0x390 + iVar14;
    local_ac[1] = 8;
    pcStack_78 = *(char **)(iVar14 + 0x1c98);
    local_ac[2] = *(undefined4 *)(iVar8 + 0x1c);
    local_a0 = *(undefined4 *)(iVar8 + 0x24);
    local_7c = 0x11;
    local_74 = iVar10;
    FUN_00014654(local_ac + 1,&local_7c);
  }
  pthread_create((pthread_t *)(*DAT_00012ca8 + 0x2c),(pthread_attr_t *)0x0,DAT_00012d38,
                 (void *)(iVar14 + 0x1c80));
  pvVar6 = (void *)*piVar2;
  if (*(int *)((int)pvVar6 + 0x14) != 0) {
    *(undefined4 *)((int)pvVar6 + 0xc) = 1;
    pthread_create(local_ac,(pthread_attr_t *)0x0,DAT_00012d3c,pvVar6);
  }
  printf(DAT_00012d40,DAT_00012d34);
  while (*(int *)*piVar2 == 0) {
    sleep(1);
  }
  printf(DAT_00012d44,DAT_00012d34);
  pvVar6 = (void *)*piVar2;
  if (*(int *)((int)pvVar6 + 0x14) != 0) {
    *(undefined4 *)((int)pvVar6 + 8) = 1;
    pthread_create(local_ac,(pthread_attr_t *)0x0,DAT_00012d3c,pvVar6);
  }
  iVar10 = *piVar2;
  *(undefined4 *)(iVar10 + 4) = 1;
  pthread_join(*(pthread_t *)(iVar10 + 0x2c),(void **)0x0);
  for (iVar10 = 0; uVar11 = DAT_00012cbc, iVar14 = *piVar1, iVar10 < iVar12; iVar10 = iVar10 + 1) {
    iVar8 = iVar10 * 0x390 + iVar14;
    local_ac[1] = 8;
    local_ac[2] = *(undefined4 *)(iVar8 + 0x1c);
    local_a0 = *(undefined4 *)(iVar8 + 0x24);
    local_7c = 0x11;
    pcStack_78 = *(char **)(iVar14 + 0x1c98);
    local_74 = iVar10;
    FUN_0001469c(local_ac + 1,&local_7c);
  }
  FUN_0001432c(iVar14 + 0x1c80);
  uVar16 = DAT_00012d48;
  uVar20 = DAT_00012cb4;
  FUN_00014400(*piVar1 + 0x1c80);
  for (iVar10 = 0; iVar10 < iVar12; iVar10 = iVar10 + 1) {
    iVar14 = *piVar1 + iVar10 * 0x390;
    if (*(int *)(iVar14 + 8) == 0) break;
    iVar14 = RK_MPI_VI_StopPipe(*(undefined4 *)(iVar14 + 0x20));
    if (iVar14 != 0) {
      RK_LOG(2,uVar20,uVar16,uVar11,0x332,iVar14,*(undefined4 *)(*piVar1 + iVar10 * 0x390 + 0x20));
    }
  }
LAB_00012b7c:
  for (iVar10 = 0; iVar10 < iVar12; iVar10 = iVar10 + 1) {
    FUN_00013df0(iVar10 * 0x390 + *piVar1);
  }
LAB_00012408:
  RK_MPI_SYS_Exit();
  if (pcVar13 != (char *)0x0) {
    local_e8 = 0;
    if (local_e4 == 0) {
      for (; local_e8 < iVar12; local_e8 = local_e8 + 1) {
        iVar14 = FUN_00014f28(local_e8);
        if (iVar14 != 0) {
          uVar20 = 0x343;
          uVar11 = DAT_00012d60;
          iVar10 = iVar14;
          goto LAB_00012230;
        }
      }
    }
    else {
      iVar14 = FUN_00014fb0(0);
      if (iVar14 != 0) {
        uVar20 = 0x34a;
        uVar11 = DAT_00012d5c;
        iVar10 = iVar14;
        goto LAB_00012230;
      }
    }
  }
  piVar1 = DAT_00012ca4;
  if ((void *)*DAT_00012ca4 != (void *)0x0) {
    free((void *)*DAT_00012ca4);
    *piVar1 = 0;
  }
  piVar1 = DAT_00012ca8;
  if ((void *)*DAT_00012ca8 != (void *)0x0) {
    free((void *)*DAT_00012ca8);
    *piVar1 = 0;
  }
  sem_destroy(DAT_00012cc4);
  pthread_mutex_destroy(DAT_00012cc8);
  return *DAT_00012d10;
}



/* ===== entry @ 00012d64 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00028084)
            (DAT_00012d98,param_2,&stack0x00000004,DAT_00012d9c,DAT_00012d94,param_1);
  return;
}



/* ===== FUN_00012da0 @ 00012da0 size=32 ===== */

void FUN_00012da0(void)

{
  if (DAT_00012dc4 == DAT_00012dc0) {
    return;
  }
  if (DAT_00012dc8 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00012dbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00012dc8)();
  return;
}



/* ===== _FINI_0 @ 00012e04 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00012e40;
  if (*DAT_00012e40 != '\0') {
    return;
  }
  FUN_00012da0();
  if (DAT_00012e44 != 0) {
    __deregister_frame_info(DAT_00012e48);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00012e4c size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00012e70 != 0) {
    __register_frame_info(DAT_00012e78,DAT_00012e74);
  }
  if ((DAT_00012dfc - DAT_00012df8 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00012e00 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00012df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00012e00)();
  return;
}



/* ===== FUN_00012e7c @ 00012e7c size=60 ===== */

void FUN_00012e7c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  RK_LOG(2,DAT_00012ec0,DAT_00012eb8,DAT_00012ebc,0x4d,param_1,param_2,param_4);
  *(undefined4 *)*DAT_00012ec4 = 1;
  return;
}



/* ===== FUN_00012ec8 @ 00012ec8 size=72 ===== */

void FUN_00012ec8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  RK_LOG(2,DAT_00012f18,DAT_00012f10,DAT_00012f14,0x47,param_1,param_2,param_4);
  *DAT_00012f1c = 0xffffffff;
  *(undefined4 *)*DAT_00012f20 = 1;
  return;
}



/* ===== FUN_00012f24 @ 00012f24 size=52 ===== */

void FUN_00012f24(void)

{
  pthread_mutex_t *__mutex;
  
  __mutex = DAT_00012f58;
  pthread_mutex_lock(DAT_00012f58);
  *(undefined4 *)(*DAT_00012f5c + 0x20) = 0;
  pthread_mutex_unlock(__mutex);
  sem_wait(DAT_00012f60);
  return;
}



/* ===== FUN_00012f64 @ 00012f64 size=1160 ===== */

undefined4 FUN_00012f64(void)

{
  int *piVar1;
  int *piVar2;
  __start_routine *__start_routine;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  bool bVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  undefined4 uStack_44;
  uint local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  piVar1 = DAT_000133ec;
  prctl(0xf,DAT_000133f0);
  FUN_00012f24();
  FUN_00014838(DAT_000133f4,*(undefined4 *)(*piVar1 + 0x14));
  uVar9 = DAT_00013430;
  piVar2 = DAT_00013404;
  uVar6 = DAT_000133fc;
  iVar7 = *piVar1;
  iVar8 = *(int *)(iVar7 + 0x14);
  if (iVar8 == 1) {
    iVar8 = *(int *)(iVar7 + 0x18);
    iVar7 = 0;
    do {
      iVar11 = *piVar1;
      if (*(int *)(iVar11 + 8) != 0) goto LAB_00013064;
      *(undefined4 *)(iVar11 + 4) = 1;
      pthread_join(*(pthread_t *)(iVar11 + 0x2c),(void **)0x0);
      for (uVar3 = 0; iVar11 = *piVar2, uVar3 < *(uint *)(iVar11 + 0x1cac); uVar3 = uVar3 + 1) {
        iVar5 = uVar3 * 0x390 + iVar11;
        local_54 = 8;
        local_50 = *(undefined4 *)(iVar5 + 0x1c);
        local_4c = *(undefined4 *)(iVar5 + 0x24);
        local_48 = 0x11;
        uStack_44 = *(undefined4 *)(iVar11 + 0x1c98);
        local_40 = uVar3;
        FUN_0001469c(&local_54,&local_48);
      }
      uVar3 = FUN_0001432c(iVar11 + 0x1c80);
      uVar4 = FUN_00014400(*piVar2 + 0x1c80);
      if ((uVar3 | uVar4) != 0) {
        RK_LOG(2,DAT_000133fc,DAT_00013408,DAT_0001340c,0x138,uVar3 | uVar4);
        uVar6 = 0x139;
LAB_0001305c:
        FUN_00012ec8(DAT_00013410,uVar6);
        goto LAB_00013064;
      }
      uVar3 = FUN_00013e64(*piVar2 + 0x1c80);
      uVar4 = FUN_0001411c(*piVar2 + 0x1c80);
      if ((uVar3 | uVar4) != 0) {
        RK_LOG(2,DAT_000133fc,DAT_0001342c,DAT_0001340c,0x141,uVar3 | uVar4);
        uVar6 = 0x142;
        goto LAB_0001305c;
      }
      for (uVar3 = 0; __start_routine = DAT_00013420, iVar11 = *piVar2,
          uVar3 < *(uint *)(iVar11 + 0x1cac); uVar3 = uVar3 + 1) {
        iVar5 = uVar3 * 0x390 + iVar11;
        local_54 = 8;
        local_50 = *(undefined4 *)(iVar5 + 0x1c);
        local_4c = *(undefined4 *)(iVar5 + 0x24);
        local_48 = 0x11;
        uStack_44 = *(undefined4 *)(iVar11 + 0x1c98);
        local_40 = uVar3;
        FUN_00014654(&local_54,&local_48);
      }
      iVar5 = *piVar1;
      *(undefined4 *)(iVar5 + 4) = 0;
      iVar7 = iVar7 + 1;
      pthread_create((pthread_t *)(iVar5 + 0x2c),(pthread_attr_t *)0x0,__start_routine,
                     (void *)(iVar11 + 0x1c80));
      FUN_00012f24();
      iVar11 = iVar7;
      RK_LOG(2,uVar6,DAT_00013424,DAT_0001340c,0x15a,iVar8,iVar7);
    } while (iVar7 < iVar8 || iVar8 < 1);
    RK_LOG(2,DAT_000133fc,DAT_00013428,DAT_0001340c,0x15e,iVar7,iVar11);
    uVar6 = DAT_00013410;
    *(undefined4 *)(*piVar1 + 0xc) = 0;
    FUN_00012e7c(uVar6,0x160);
LAB_00013064:
    uVar10 = 0x164;
    uVar6 = DAT_00013414;
    uVar9 = DAT_0001340c;
  }
  else {
    if (iVar8 != 2) {
      RK_LOG(2,DAT_000133fc,DAT_000133f8,DAT_00013400,0x1aa,iVar8);
      goto LAB_00013080;
    }
    iVar8 = 0;
    iVar7 = *(int *)(iVar7 + 0x18);
    iVar11 = *(int *)(*DAT_00013404 + 0x1e5c);
    uVar10 = *(undefined4 *)(*DAT_00013404 + 0x1e60);
    do {
      if (*(int *)(*piVar1 + 8) != 0) goto LAB_000132dc;
      uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      local_40 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      local_48 = 0;
      local_38 = 0;
      local_30 = 0;
      uStack_34 = uStack_44;
      uStack_2c = uStack_44;
      iVar5 = RK_MPI_AVS_GetChnAttr
                        (*(undefined4 *)(*piVar2 + 0x1c98),*(undefined4 *)(*piVar2 + 0x1c9c),
                         &local_48);
      if (iVar5 != 0) {
        RK_LOG(2,DAT_000133fc,DAT_00013434,DAT_00013438,0x173,iVar5);
        uVar6 = 0x174;
LAB_000132d4:
        FUN_00012ec8(DAT_0001343c,uVar6);
        goto LAB_000132dc;
      }
      bVar12 = iVar11 == local_48;
      uStack_44 = uVar10;
      local_48 = iVar11;
      if (bVar12) {
        uStack_44 = *(undefined4 *)(*piVar1 + 0x28);
        local_48 = *(int *)(*piVar1 + 0x24);
      }
      iVar5 = RK_MPI_AVS_SetChnAttr
                        (*(undefined4 *)(*piVar2 + 0x1c98),*(undefined4 *)(*piVar2 + 0x1c9c),
                         &local_48);
      if (iVar5 != 0) {
        RK_LOG(2,DAT_000133fc,DAT_00013444,DAT_00013438,0x182,iVar5);
        uVar6 = 0x183;
        goto LAB_000132d4;
      }
      FUN_00012f24();
      iVar8 = iVar8 + 1;
      uVar13 = uStack_44;
      iVar5 = iVar7;
      iVar14 = iVar8;
      RK_LOG(2,uVar6,uVar9,DAT_00013438,0x18d,local_48,uStack_44,iVar7,iVar8);
    } while (iVar8 < iVar7 || iVar7 < 1);
    RK_LOG(2,DAT_000133fc,DAT_00013448,DAT_00013438,0x191,iVar8,uVar13,iVar5,iVar14);
    uVar6 = DAT_0001343c;
    *(undefined4 *)(*piVar1 + 0xc) = 0;
    FUN_00012e7c(uVar6,0x193);
LAB_000132dc:
    uVar10 = 0x198;
    uVar6 = DAT_00013440;
    uVar9 = DAT_00013438;
  }
  RK_LOG(2,DAT_000133fc,uVar6,uVar9,uVar10);
LAB_00013080:
  FUN_00014838(DAT_00013418,*(undefined4 *)(*piVar1 + 0x14));
  RK_LOG(2,DAT_000133fc,DAT_0001341c,DAT_00013400,0x1ad);
  return 0;
}



/* ===== FUN_0001344c @ 0001344c size=920 ===== */

undefined4 FUN_0001344c(int param_1)

{
  pthread_mutex_t *__mutex;
  undefined4 uVar1;
  int *piVar2;
  FILE *__s;
  size_t sVar3;
  void *pvVar4;
  int iVar5;
  size_t sVar6;
  undefined4 uVar7;
  void *pvVar8;
  size_t sVar9;
  void *pvVar10;
  undefined8 uVar11;
  void *pvVar12;
  size_t sVar13;
  void *pvVar14;
  void *local_140;
  size_t local_13c [4];
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  char acStack_120 [260];
  
  local_140 = (void *)0x0;
  memset(acStack_120,0,0x100);
  __s = (FILE *)0x0;
  if (*(int *)(param_1 + 0x270) != 0) {
    snprintf(acStack_120,0x100,DAT_000137e4,*(int *)(param_1 + 0x270),
             *(undefined4 *)(param_1 + 0x1c));
    __s = fopen64(acStack_120,DAT_000137e8);
    if (__s == (FILE *)0x0) {
      printf(DAT_000137ec,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x270));
      FUN_00012ec8(DAT_000137f0,0xab);
      return 0;
    }
  }
  piVar2 = DAT_0001381c;
  uVar1 = DAT_00013814;
  pvVar10 = (void *)0x0;
  do {
    if (*(int *)(*piVar2 + 4) != 0) {
LAB_000136e0:
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
      RK_LOG(2,DAT_00013814,DAT_00013810,DAT_000137f4,0x112);
      return 0;
    }
    iVar5 = FUN_00014264(param_1,&local_140);
    if (iVar5 == 0) {
      if (*(int *)(param_1 + 4) <= (int)pvVar10 && 0 < *(int *)(param_1 + 4)) {
        FUN_000142dc(param_1);
        FUN_00012e7c(DAT_000137f0,0xb7);
        goto LAB_000136e0;
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
          RK_LOG(2,uVar1,DAT_000137f8,DAT_000137f4,0xc5,iVar5);
        }
      }
      uVar11 = FUN_00015494(*(undefined4 *)(param_1 + 600),*(undefined4 *)(param_1 + 0x25c),1000,0);
      pvVar12 = local_140;
      sVar13 = local_13c[0];
      pvVar14 = pvVar10;
      RK_LOG(5,uVar1,DAT_000137fc,DAT_000137f4,0xcf,*(undefined4 *)(param_1 + 0x18),local_140,
             local_13c[0],pvVar10);
      sVar6 = *(size_t *)(param_1 + 0x1dc);
      sVar3 = *(size_t *)(param_1 + 0x224);
      sVar9 = *(size_t *)(param_1 + 0x22c);
      pvVar8 = *(void **)(param_1 + 0x230);
      if (sVar6 == sVar3) {
        pvVar4 = *(void **)(param_1 + 0x1e0);
        if (((*(void **)(param_1 + 0x228) != pvVar4) || (sVar6 != sVar9)) ||
           ((pvVar4 != pvVar8 || (*(int *)(param_1 + 0x238) != 0)))) {
          pvVar14 = pvVar8;
          RK_LOG(2,uVar1,DAT_00013800,DAT_000137f4,0xdf,sVar6,pvVar4,sVar9,pvVar8,
                 *(int *)(param_1 + 0x238),uVar11);
          uVar7 = 0xe0;
          pvVar8 = pvVar4;
          sVar13 = sVar9;
          goto LAB_00013600;
        }
      }
      else {
        if (sVar3 == *(size_t *)(*piVar2 + 0x24)) {
          pvVar4 = *(void **)(*piVar2 + 0x28);
          if ((((*(void **)(param_1 + 0x228) == pvVar4) && (sVar3 == sVar9)) && (pvVar4 == pvVar8))
             && (*(int *)(param_1 + 0x238) == 0)) goto LAB_00013608;
          pvVar14 = pvVar8;
          RK_LOG(2,uVar1,DAT_00013800,DAT_000137f4,0xf2,pvVar4,pvVar4,sVar9,pvVar8,
                 *(int *)(param_1 + 0x238),uVar11);
          uVar7 = 0xf3;
          pvVar8 = pvVar4;
          sVar13 = sVar9;
        }
        else {
          RK_LOG(2,uVar1,DAT_00013818,DAT_000137f4,0xf8,sVar9,pvVar8,sVar13,pvVar14);
          uVar7 = 0xf9;
        }
LAB_00013600:
        FUN_00012ec8(DAT_000137f0,uVar7);
        pvVar12 = pvVar8;
      }
LAB_00013608:
      pvVar10 = (void *)((int)pvVar10 + 1);
      FUN_000142dc(param_1);
      if (*(int *)(*piVar2 + 0xc) != 0) {
        pthread_mutex_lock(DAT_00013804);
        __mutex = DAT_00013804;
        *(int *)(*piVar2 + 0x20) = *(int *)(*piVar2 + 0x20) + 1;
        pthread_mutex_unlock(__mutex);
        if (*(int *)(*piVar2 + 0x20) == *(int *)(*piVar2 + 0x1c)) {
          sem_post(DAT_00013808);
        }
      }
      RK_LOG(2,uVar1,DAT_0001380c,DAT_000137f4,0x109,pvVar10,pvVar12,sVar13,pvVar14);
    }
    usleep(1000);
  } while( true );
}



/* ===== FUN_00013854 @ 00013854 size=192 ===== */

void FUN_00013854(undefined4 param_1)

{
  puts(DAT_00013914);
  printf(DAT_00013918,param_1);
  puts(DAT_0001391c);
  puts(DAT_00013920);
  puts(DAT_00013924);
  puts(DAT_00013928);
  puts(DAT_0001392c);
  puts(DAT_00013930);
  puts(DAT_00013934);
  puts(DAT_00013938);
  puts(DAT_0001393c);
  puts(DAT_00013940);
  puts(DAT_00013944);
  puts(DAT_00013948);
  puts(DAT_0001394c);
  puts(DAT_00013950);
  puts(DAT_00013954);
  puts(DAT_00013958);
  puts(DAT_0001395c);
  puts(DAT_00013960);
  puts(DAT_00013964);
  puts(DAT_00013968);
  return;
}



/* ===== FUN_0001396c @ 0001396c size=764 ===== */

int FUN_0001396c(int *param_1)

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
  if (iVar1 == DAT_00013c68) {
    iVar1 = RK_MPI_VI_SetDevAttr(param_1[7],param_1 + 0x10);
    if (iVar1 == 0) goto LAB_000139e4;
    uVar7 = 0x29;
    uVar5 = DAT_00013c6c;
  }
  else {
    RK_LOG(2,DAT_00013c74,DAT_00013c78,DAT_00013c70,0x2d);
LAB_000139e4:
    iVar1 = RK_MPI_VI_GetDevIsEnable(param_1[7]);
    if (iVar1 == 0) {
      RK_LOG(2,DAT_00013c74,DAT_00013c88,DAT_00013c70,0x42);
LAB_00013aa0:
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
            uVar5 = DAT_00013c90;
LAB_00013b20:
            RK_LOG(2,DAT_00013c74,uVar5,DAT_00013c70,uVar7,uVar6);
            return -1;
          }
          local_1c = 1;
          local_14 = param_1[4] * uVar4 * 3 >> 1;
          uStack_18 = uVar4;
          uVar6 = RK_MPI_VI_SetChnWrapBufAttr(param_1[8],param_1[9],&local_1c);
          if (uVar6 != 0) {
            uVar7 = 0x59;
            uVar5 = DAT_00013c94;
            goto LAB_00013b20;
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
            uVar5 = DAT_00013ca0;
            goto LAB_00013c60;
          }
          uVar7 = 0x6d;
          uVar5 = DAT_00013c9c;
          goto LAB_00013a54;
        }
        RK_LOG(2,DAT_00013c74,DAT_00013c98,DAT_00013c70,0x66,iVar1,param_1[8],param_1[9]);
      }
      else {
        uVar7 = 0x4a;
        uVar5 = DAT_00013c8c;
LAB_00013a54:
        RK_LOG(2,DAT_00013c74,uVar5,DAT_00013c70,uVar7,iVar1);
      }
      iVar1 = RK_MPI_VI_DisableDev(param_1[7]);
      uVar7 = 0x7d;
      uVar5 = DAT_00013c84;
    }
    else {
      iVar1 = RK_MPI_VI_EnableDev(param_1[7]);
      if (iVar1 == 0) {
        param_1[0x17] = 1;
        param_1[0x18] = param_1[8];
        iVar1 = RK_MPI_VI_SetDevBindPipe(param_1[7],param_1 + 0x17);
        if (iVar1 == 0) goto LAB_00013aa0;
        uVar7 = 0x3e;
        uVar5 = DAT_00013c80;
        goto LAB_00013a54;
      }
      uVar7 = 0x36;
      uVar5 = DAT_00013c7c;
    }
  }
  uVar2 = 2;
  iVar3 = iVar1;
LAB_00013c60:
  RK_LOG(uVar2,DAT_00013c74,uVar5,DAT_00013c70,uVar7,iVar3);
  return iVar1;
}



/* ===== FUN_00013ca4 @ 00013ca4 size=236 ===== */

undefined4 FUN_00013ca4(int param_1,undefined4 *param_2)

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
    RK_LOG(5,DAT_00013d94,DAT_00013d90,DAT_00013d98,0x92,*(undefined4 *)(param_1 + 0x1c),
           *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),uVar2,
           *(undefined4 *)(param_1 + 0x380),*(undefined4 *)(param_1 + 900),
           *(undefined4 *)(param_1 + 0x368),*(undefined4 *)(param_1 + 0x374),
           *(undefined4 *)(param_1 + 0x378),*(undefined4 *)(param_1 + 0x36c),
           *(undefined4 *)(param_1 + 0x37c));
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
    RK_LOG(2,DAT_00013d94,DAT_00013d9c,DAT_00013d98,0x94,*(undefined4 *)(param_1 + 0x1c),iVar1);
  }
  return uVar2;
}



/* ===== FUN_00013da0 @ 00013da0 size=68 ===== */

undefined4 FUN_00013da0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = RK_MPI_VI_ReleaseChnFrame
                    (*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),param_1 + 0x318
                     ,param_4,param_1,param_2,param_3);
  if (iVar1 != 0) {
    RK_LOG(2,DAT_00013dec,DAT_00013de8,DAT_00013de4,0xa0,iVar1);
  }
  return 0;
}



/* ===== FUN_00013df0 @ 00013df0 size=104 ===== */

uint FUN_00013df0(int param_1,undefined4 param_2,undefined4 param_3)

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
    RK_LOG(2,DAT_00013e60,DAT_00013e5c,DAT_00013e58,0xaf,uVar1);
  }
  return uVar1;
}



/* ===== FUN_00013e64 @ 00013e64 size=652 ===== */

int FUN_00013e64(int *param_1)

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
    RK_LOG(2,DAT_000140f8,DAT_000140f4,DAT_000140f0,0x25,iVar2);
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
    uVar1 = DAT_00014100;
    uVar14 = DAT_000140f8;
    uVar5 = DAT_000140f0;
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
          RK_LOG(2,DAT_000140f8,DAT_0001410c,DAT_000140f0,0x3b);
          return -1;
        }
        RK_LOG(5,uVar14,uVar1,uVar5,0x3f,iVar2,uVar7,pvVar3);
        uVar6 = *(undefined4 *)(param_1[5] + uVar7 * 4);
        local_48 = local_9c[0];
        uStack_44 = 0;
        uVar15 = uVar7;
        local_60 = uVar6;
        uStack_3c = uVar6;
        RK_LOG(5,uVar14,DAT_00014110,uVar5,0x44,param_1[5],uVar7,uVar6);
        puVar4 = puVar8 + 4;
        puVar8 = puVar8 + 1;
        iVar2 = RK_MPI_SYS_CreateMB(puVar4,&local_60);
        if (iVar2 != 0) {
          RK_LOG(2,DAT_000140f8,DAT_00014114,DAT_000140f0,0x48,iVar2,uVar15,uVar6);
          return iVar2;
        }
      }
      RK_LOG(2,DAT_000140f8,DAT_00014104,DAT_000140f0,0x4c);
      iVar2 = RK_MPI_AVS_GetFinalLut(param_1[6],&local_80);
      uVar7 = 0;
      if (iVar2 == 0) {
        for (; uVar7 < (uint)param_1[0xb]; uVar7 = uVar7 + 1) {
          RK_MPI_SYS_Free(*(undefined4 *)((int)&local_70 + uVar7 * 4));
        }
        goto LAB_000140d0;
      }
      uVar14 = 0x4f;
      uVar5 = DAT_00014108;
    }
    else {
      uVar14 = 0x32;
      uVar5 = DAT_000140fc;
    }
    RK_LOG(2,DAT_000140f8,uVar5,DAT_000140f0,uVar14,iVar2);
  }
  else {
LAB_000140d0:
    RK_LOG(2,DAT_000140f8,DAT_00014118,DAT_000140f0,0x57);
    iVar2 = 0;
  }
  return iVar2;
}



/* ===== FUN_0001411c @ 0001411c size=300 ===== */

int FUN_0001411c(int param_1,undefined4 param_2,undefined4 param_3)

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
            uVar2 = DAT_00014258;
            goto LAB_000141d8;
          }
          iVar1 = RK_MPI_AVS_EnableChn(*(undefined4 *)(param_1 + 0x18),iVar4);
          if (iVar1 != 0) {
            uVar5 = 0x75;
            uVar2 = DAT_0001425c;
            goto LAB_000141d8;
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
      uVar2 = DAT_00014260;
LAB_000141d8:
      RK_LOG(2,DAT_00014250,uVar2,DAT_0001424c,uVar5,iVar1);
      return iVar1;
    }
    uVar5 = 0x65;
    uVar2 = DAT_00014254;
  }
  else {
    uVar5 = 0x60;
    uVar2 = DAT_00014248;
  }
  RK_LOG(2,DAT_00014250,uVar2,DAT_0001424c,uVar5,2);
  return -1;
}



/* ===== FUN_00014264 @ 00014264 size=108 ===== */

undefined4 FUN_00014264(int param_1,undefined4 *param_2)

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
    RK_LOG(2,DAT_000142d4,DAT_000142d0,DAT_000142d8,0x8d,*(undefined4 *)(param_1 + 0x18),iVar1);
  }
  return 0;
}



/* ===== FUN_000142dc @ 000142dc size=68 ===== */

undefined4 FUN_000142dc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = RK_MPI_AVS_ReleaseChnFrame
                    (*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),param_1 + 0x220
                     ,param_4,param_1,param_2,param_3);
  if (iVar1 != 0) {
    RK_LOG(2,DAT_00014328,DAT_00014324,DAT_00014320,0x98,iVar1);
  }
  return 0;
}



/* ===== FUN_0001432c @ 0001432c size=196 ===== */

int FUN_0001432c(int param_1)

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
      RK_LOG(2,DAT_000143f8,DAT_000143fc,DAT_000143f0,0xab,iVar1);
    }
  }
  else {
    RK_LOG(2,DAT_000143f8,DAT_000143f4,DAT_000143f0,0xa2,iVar1);
  }
  return iVar1;
}



/* ===== FUN_00014400 @ 00014400 size=140 ===== */

int FUN_00014400(int *param_1,undefined4 param_2,undefined4 param_3)

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
    RK_LOG(2,DAT_00014494,DAT_00014490,DAT_0001448c,0xb9,iVar1,param_3);
  }
  return iVar1;
}



/* ===== FUN_00014498 @ 00014498 size=368 ===== */

void FUN_00014498(undefined4 param_1,int param_2)

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
  
  piVar2 = DAT_00014628;
  piVar1 = DAT_00014624;
  iVar7 = *DAT_00014624;
  *DAT_00014628 = *DAT_00014628 + param_2;
  ptVar4 = DAT_00014630;
  if (iVar7 == 0) {
    gettimeofday(DAT_0001462c,(__timezone_ptr_t)0x0);
  }
  else if (iVar7 == 100) {
    gettimeofday(DAT_00014630,(__timezone_ptr_t)0x0);
    ptVar3 = DAT_0001462c;
    printf(DAT_00014634,param_1);
    printf(DAT_00014638,ptVar3->tv_sec,ptVar3->tv_usec);
    printf(DAT_0001463c,ptVar4->tv_sec,ptVar4->tv_usec);
    piVar5 = DAT_00014640;
    iVar7 = ptVar4->tv_sec - ptVar3->tv_sec;
    iVar6 = ptVar4->tv_usec - ptVar3->tv_usec;
    *DAT_00014640 = iVar7;
    piVar5[1] = iVar6;
    if (iVar6 < 0) {
      *piVar5 = iVar7 + -1;
      piVar5[1] = iVar6 + 1000000;
    }
    dVar9 = (double)VectorSignedToFloat(*piVar5,(byte)(in_fpscr >> 0x16) & 3);
    dVar10 = (double)VectorSignedToFloat(piVar5[1],(byte)(in_fpscr >> 0x16) & 3);
    fVar8 = (float)VectorSignedToFloat(*piVar2,(byte)(in_fpscr >> 0x16) & 3);
    dVar9 = dVar10 / DAT_00014608 + dVar9 * DAT_00014608;
    printf(DAT_00014644,100,SUB84(dVar9,0),(int)((ulonglong)dVar9 >> 0x20),
           ((double)(fVar8 * 8.0 * DAT_00014620) / dVar9) * DAT_00014610 * DAT_00014610);
    printf(DAT_00014648);
    printf(DAT_0001464c);
    puts(DAT_00014650);
    *piVar1 = 0;
    *piVar2 = 0;
    return;
  }
  *piVar1 = iVar7 + 1;
  return;
}



/* ===== FUN_00014654 @ 00014654 size=60 ===== */

int FUN_00014654(void)

{
  int iVar1;
  
  iVar1 = RK_MPI_SYS_Bind();
  if (iVar1 != 0) {
    RK_LOG(2,DAT_00014698,DAT_00014694,DAT_00014690,0x4d,iVar1);
  }
  return iVar1;
}



/* ===== FUN_0001469c @ 0001469c size=60 ===== */

int FUN_0001469c(void)

{
  int iVar1;
  
  iVar1 = RK_MPI_SYS_UnBind();
  if (iVar1 != 0) {
    RK_LOG(2,DAT_000146e0,DAT_000146dc,DAT_000146d8,0x59,iVar1);
  }
  return iVar1;
}



/* ===== FUN_000146e4 @ 000146e4 size=312 ===== */

undefined4 FUN_000146e4(char *param_1,undefined4 *param_2,undefined4 *param_3)

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
    RK_LOG(2,DAT_00014824,DAT_0001481c,DAT_00014820,0x69);
  }
  else {
    __stream = fopen64(param_1,DAT_00014828);
    if (__stream == (FILE *)0x0) {
      RK_LOG(2,DAT_00014824,DAT_0001482c,DAT_00014820,0x6f,param_1);
    }
    else {
      fread(&local_46,1,2,__stream);
      if (local_46 == 0x4d42) {
        fseek(__stream,0xc,1);
        fread(auStack_44,1,0x2c,__stream);
        uVar2 = DAT_00014834;
        uVar1 = DAT_00014824;
        *param_2 = local_40;
        *param_3 = local_3c;
        RK_LOG(2,uVar1,uVar2,DAT_00014820,0x7e,*param_2,local_3c);
        fclose(__stream);
        return 0;
      }
      RK_LOG(2,DAT_00014824,DAT_00014830,DAT_00014820,0x75);
      fclose(__stream);
    }
  }
  return 0xffffffff;
}



/* ===== FUN_00014838 @ 00014838 size=72 ===== */

undefined4 FUN_00014838(undefined4 param_1,undefined4 param_2)

{
  char acStack_110 [260];
  
  system(DAT_00014880);
  sprintf(acStack_110,DAT_00014884,param_1,param_2);
  system(acStack_110);
  system(DAT_00014888);
  return 0;
}



/* ===== FUN_0001488c @ 0001488c size=288 ===== */

undefined4 FUN_0001488c(char *param_1,char *param_2,size_t param_3,undefined4 *param_4)

{
  FILE *__stream;
  FILE *__stream_00;
  size_t sVar1;
  uint unaff_r4;
  
  __stream = fopen64(param_1,DAT_000149ac);
  __stream_00 = fopen64(param_2,DAT_000149ac);
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
    RK_LOG(2,DAT_000149b8,DAT_000149bc,DAT_000149b0,0xa0,param_1,param_2);
  }
  else {
    RK_LOG(2,DAT_000149b8,DAT_000149b4,DAT_000149b0,0x9a,param_1,param_2,__stream,__stream_00);
    if (__stream == (FILE *)0x0) goto LAB_00014918;
  }
  fclose(__stream);
LAB_00014918:
  if (__stream_00 != (FILE *)0x0) {
    fclose(__stream_00);
  }
  return 0xffffffff;
}



/* ===== FUN_00014a74 @ 00014a74 size=236 ===== */

undefined4 FUN_00014a74(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  char *__format;
  undefined4 uVar2;
  char acStack_158 [16];
  undefined1 auStack_148 [304];
  
  iVar1 = DAT_00014b6c;
  if (param_1 < 8) {
    setlinebuf((FILE *)*DAT_00014b68);
    __format = DAT_00014b78;
    if (param_4 == 0) {
      puts(DAT_00014b70);
      uVar2 = 0;
    }
    else {
      *(undefined4 *)(DAT_00014b74 + param_1 * 4) = param_2;
      snprintf(acStack_158,0x10,__format,param_2);
      setenv(DAT_00014b7c,acStack_158,1);
      rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId(param_1,auStack_148);
      printf(DAT_00014b80,param_1,auStack_148,param_4);
      rk_aiq_uapi2_sysctl_preInit_devBufCnt(auStack_148,DAT_00014b84,2);
      uVar2 = rk_aiq_uapi2_sysctl_init(auStack_148,param_4,DAT_00014b8c,DAT_00014b88);
      if (param_3 != 0) {
        rk_aiq_uapi2_sysctl_setMulCamConc(uVar2,1);
      }
    }
    *(undefined4 *)(iVar1 + param_1 * 4) = uVar2;
    uVar2 = 0;
  }
  else {
    printf(DAT_00014b64,DAT_00014b60);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== FUN_00014b90 @ 00014b90 size=488 ===== */

int FUN_00014b90(int param_1,ushort *param_2,int param_3)

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
  iVar3 = DAT_00014d7c;
  __format = DAT_00014d78;
  __s = param_2;
  if ((int)param_2 - 1U < 2) {
    iVar4 = rk_aiq_uapi2_camgroup_getCamInfos
                      (*(undefined4 *)(DAT_00014d7c + param_1 * 4),&local_108);
    if (iVar4 == 0) {
      piVar7 = &local_108;
      iVar4 = 0;
      for (iVar8 = 0; iVar8 < local_108; iVar8 = iVar8 + 1) {
        iVar6 = rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm
                          (*(undefined4 *)(iVar3 + param_1 * 4),piVar7[1]);
        if (iVar6 == 0) {
          puts(DAT_00014d98);
          goto LAB_00014d68;
        }
        printf(DAT_00014d80,piVar7[1],piVar7[9]);
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
              puts(DAT_00014d84);
              local_84 = -1;
            }
            else {
              uVar1 = __s[2];
              uVar2 = __s[3];
              printf(DAT_00014d8c,(uint)*__s,(uint)__s[1],(uint)uVar1,(uint)uVar2,(uint)__s[4],
                     (uint)__s[5]);
              local_84 = ((uint)uVar2 * (uint)uVar1 + 6) * 2;
            }
          }
          else {
            pcVar5 = strrchr((char *)__s,0x2f);
            __format = DAT_00014d90;
            if (pcVar5 == (char *)0x0) goto LAB_00014ce8;
            local_bc = 1;
            local_8c = 1;
            local_90 = (ushort *)0x1;
            memcpy(&local_88,__s,(size_t)(pcVar5 + (1 - (int)__s)));
            strcpy(acStack_48,pcVar5 + 1);
            printf(DAT_00014d94,&local_88,acStack_48);
          }
          iVar6 = rk_aiq_user_api2_aldch_v21_SetAttrib(iVar6,auStack_c4);
          iVar4 = 0;
          if (iVar6 != 0) {
            printf(DAT_00014d88,iVar6);
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
LAB_00014ce8:
    printf(__format,__s);
LAB_00014d68:
    iVar4 = -1;
  }
  return iVar4;
}



/* ===== FUN_00014d9c @ 00014d9c size=352 ===== */

undefined4
FUN_00014d9c(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5,
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
  
  uVar1 = DAT_00014f20;
  __format_00 = DAT_00014f1c;
  __format = DAT_00014f18;
  if (param_1 < 8) {
    for (iVar4 = 0; iVar3 = DAT_00014f0c, iVar4 < *(int *)(param_6 + 0x20); iVar4 = iVar4 + 1) {
      iVar3 = rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId(iVar4,acStack_558);
      __s = DAT_00014f04;
      if (iVar3 != 0) goto LAB_00014df4;
      printf(__format,param_1,iVar4,acStack_558,*(undefined4 *)(param_6 + 0x24));
      __dest = auStack_428 + iVar4 * 0x80;
      sVar2 = strlen(acStack_558);
      memcpy(__dest,acStack_558,sVar2 + 1);
      *(undefined1 **)(param_6 + iVar4 * 4) = __dest;
      printf(__format_00,iVar4,__dest);
      iVar3 = rk_aiq_uapi2_sysctl_preInit_devBufCnt(acStack_558,uVar1,2);
      __s = DAT_00014f08;
      if (iVar3 != 0) goto LAB_00014df4;
    }
    iVar4 = rk_aiq_uapi2_camgroup_create(param_6);
    *(int *)(iVar3 + param_1 * 4) = iVar4;
    __s = DAT_00014f10;
    if (iVar4 != 0) {
      if (param_4 != 0) {
        FUN_00014b90(param_1,param_4 & 0xff,param_5);
      }
      iVar4 = rk_aiq_uapi2_camgroup_prepare(*(undefined4 *)(iVar3 + param_1 * 4),param_2);
      iVar3 = rk_aiq_uapi2_camgroup_start(*(undefined4 *)(iVar3 + param_1 * 4));
      __s = DAT_00014f14;
      if (iVar4 == 0 && iVar3 == 0) {
        puts(DAT_00014f24);
        return 0;
      }
    }
LAB_00014df4:
    puts(__s);
  }
  else {
    printf(DAT_00014f00,DAT_00014efc,8);
  }
  return 0xffffffff;
}



/* ===== FUN_00014f28 @ 00014f28 size=112 ===== */

undefined4 FUN_00014f28(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_00014f98;
  if ((param_1 < 8) && (*(int *)(DAT_00014f98 + param_1 * 4) != 0)) {
    puts(DAT_00014fa4);
    rk_aiq_uapi2_sysctl_stop(*(undefined4 *)(iVar1 + param_1 * 4),0);
    puts(DAT_00014fa8);
    rk_aiq_uapi2_sysctl_deinit(*(undefined4 *)(iVar1 + param_1 * 4));
    puts(DAT_00014fac);
    *(undefined4 *)(iVar1 + param_1 * 4) = 0;
    return 0;
  }
  printf(DAT_00014fa0,DAT_00014f9c,param_1);
  return 0xffffffff;
}



/* ===== FUN_00014fb0 @ 00014fb0 size=104 ===== */

undefined4 FUN_00014fb0(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_00015018;
  if (param_1 < 8) {
    if (*(int *)(DAT_00015018 + param_1 * 4) != 0) {
      puts(DAT_00015024);
      rk_aiq_uapi2_camgroup_stop(*(undefined4 *)(iVar1 + param_1 * 4));
      puts(DAT_00015028);
      rk_aiq_uapi2_camgroup_destroy(*(undefined4 *)(iVar1 + param_1 * 4));
      puts(DAT_0001502c);
      *(undefined4 *)(iVar1 + param_1 * 4) = 0;
      return 0;
    }
  }
  printf(DAT_00015020,DAT_0001501c);
  return 0xffffffff;
}



/* ===== FUN_00015030 @ 00015030 size=152 ===== */

undefined4 FUN_00015030(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_000150c8;
  if ((param_1 < 8) && (iVar1 = *(int *)(DAT_000150c8 + param_1 * 4), iVar1 != 0)) {
    iVar1 = rk_aiq_uapi2_sysctl_prepare(iVar1,0,0,*(undefined4 *)(DAT_000150d4 + param_1 * 4));
    if (iVar1 == 0) {
      puts(DAT_000150dc);
      iVar2 = rk_aiq_uapi2_sysctl_start(*(undefined4 *)(iVar2 + param_1 * 4));
      if (iVar2 == 0) {
        puts(DAT_000150e4);
        return 0;
      }
      puts(DAT_000150e0);
    }
    else {
      puts(DAT_000150d8);
      *(undefined4 *)(iVar2 + param_1 * 4) = 0;
    }
  }
  else {
    printf(DAT_000150d0,DAT_000150cc);
  }
  return 0xffffffff;
}



/* ===== FUN_00015190 @ 00015190 size=156 ===== */

undefined4 FUN_00015190(int param_1,int param_2)

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
  
  iVar1 = DAT_0001522c;
  if ((param_1 < 8) && (iVar2 = *(int *)(DAT_0001522c + param_1 * 4), iVar2 != 0)) {
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
    printf(DAT_00015234,DAT_00015230);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



/* ===== FUN_00015494 @ 00015494 size=76 ===== */

void FUN_00015494(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  if (param_4 != 0 || param_3 != 0) {
    FUN_000154e0();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_000154e0 @ 000154e0 size=328 ===== */

undefined8 FUN_000154e0(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

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



/* ===== _fini @ 00015628 size=16 ===== */

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



/* ===== <EXTERNAL>::__deregister_frame_info @ 0002900c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sem_destroy @ 00029010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sem_destroy(sem_t *__sem)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_start @ 00029014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_start(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen64 @ 00029018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_stop @ 0002901c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_stop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AVS_DestroyGrp @ 00029020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AVS_DestroyGrp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 00029024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AVS_GetChnFrame @ 00029028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AVS_GetChnFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AVS_StopGrp @ 0002902c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AVS_StopGrp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 00029030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevAttr @ 00029034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetDevAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_StartPipe @ 00029038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_StartPipe(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_ChnSaveFile @ 0002903c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_ChnSaveFile(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_start @ 00029040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_start(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 00029044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevBindPipe @ 00029048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetDevBindPipe(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_deinit @ 0002904c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_deinit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_QueryChnStatus @ 00029050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_QueryChnStatus(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usleep @ 00029054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_CAL_TDE_GetPicBufferSize @ 00029058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_CAL_TDE_GetPicBufferSize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::signal @ 0002905c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId @ 00029060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 00029064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_Handle2VirAddr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AVS_CreateGrp @ 00029068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AVS_CreateGrp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_destroy @ 0002906c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChnExt @ 00029070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_EnableChnExt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_getCamInfos @ 00029074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_getCamInfos(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 00029078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sleep @ 0002907c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_create @ 00029080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableDev @ 00029084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_EnableDev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_destroy @ 00029088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_destroy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atof @ 0002908c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double atof(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sem_wait @ 00029090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sem_wait(sem_t *__sem)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 00029094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_UnBind @ 00029098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_UnBind(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_prepare @ 0002909c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_prepare(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 000290a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_ae_getExpSwAttr @ 000290a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_user_api2_ae_getExpSwAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 000290a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strchr @ 000290ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setlinebuf @ 000290b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void setlinebuf(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_unlock @ 000290b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AVS_DisableChn @ 000290b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AVS_DisableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnAttr @ 000290bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetChnAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_CreateMB @ 000290c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_CreateMB(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Free @ 000290c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Free(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_join @ 000290c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChn @ 000290cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_DisableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strrchr @ 000290d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 000290d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_aldch_v21_SetAttrib @ 000290d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_user_api2_aldch_v21_SetAttrib(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_preInit_devBufCnt @ 000290dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_preInit_devBufCnt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AVS_StartGrp @ 000290e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AVS_StartGrp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_CAL_AVS_GetFinalLutBufferSize @ 000290e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_CAL_AVS_GetFinalLutBufferSize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 000290e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Bind @ 000290ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Bind(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sem_init @ 000290f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sem_init(sem_t *__sem,int __pshared,uint __value)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_ReleaseChnFrame @ 000290f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_ReleaseChnFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 000290f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_setMirrorFlip @ 000290fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_setMirrorFlip(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChnExt @ 00029100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_DisableChnExt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::raise @ 00029104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sem_post @ 00029108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sem_post(sem_t *__sem)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AVS_GetChnAttr @ 0002910c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AVS_GetChnAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AVS_GetFinalLut @ 00029110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AVS_GetFinalLut(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_create @ 00029114 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_create(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_lock @ 00029118 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetEptz @ 0002911c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetEptz(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::system @ 00029120 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int system(char *__command)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AVS_ReleaseChnFrame @ 00029124 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AVS_ReleaseChnFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_StopPipe @ 00029128 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_StopPipe(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_init @ 0002912c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gettimeofday @ 00029130 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 00029134 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableDev @ 00029138 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_DisableDev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetChnFrame @ 0002913c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetChnFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 00029140 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AVS_SetChnAttr @ 00029144 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AVS_SetChnAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fseek @ 00029148 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 0002914c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00029150 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 00029154 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Exit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_ae_setExpSwAttr @ 00029158 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_user_api2_ae_setExpSwAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::prctl @ 0002915c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int prctl(int __option,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_stop @ 00029160 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_stop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fread @ 00029164 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 00029168 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt_long @ 0002916c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void getopt_long(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 00029170 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevAttr @ 00029174 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetDevAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_prepare @ 00029178 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_prepare(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm @ 0002917c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 00029180 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AVS_EnableChn @ 00029184 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AVS_EnableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnWrapBufAttr @ 00029188 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetChnWrapBufAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_setMulCamConc @ 0002918c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_setMulCamConc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 00029190 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevIsEnable @ 00029194 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetDevIsEnable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_switch_scene @ 00029198 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_switch_scene(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_aldch_v21_GetAttrib @ 0002919c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_user_api2_aldch_v21_GetAttrib(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_LOG @ 000291a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_LOG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_init @ 000291a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setenv @ 000291a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setenv(char *__name,char *__value,int __replace)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChn @ 000291ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_EnableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


