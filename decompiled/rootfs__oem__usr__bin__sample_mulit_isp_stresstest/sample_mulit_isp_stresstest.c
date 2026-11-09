// sample_mulit_isp_stresstest — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 000118ac size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 000118d0 size=12 ===== */

void RK_MPI_SYS_Exit(void)

{
  (*(code *)PTR_RK_MPI_SYS_Exit_0002700c)();
  return;
}



/* ===== <EXTERNAL>::sem_init @ 000118dc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sem_init(sem_t *__sem,int __pshared,uint __value)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sem_init_00027010)(__sem);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Bind @ 000118e8 size=12 ===== */

void RK_MPI_SYS_Bind(void)

{
  (*(code *)PTR_RK_MPI_SYS_Bind_00027014)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm @ 000118f4 size=12 ===== */

void rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm_00027018)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_QueryChnStatus @ 00011900 size=12 ===== */

void RK_MPI_VI_QueryChnStatus(void)

{
  (*(code *)PTR_RK_MPI_VI_QueryChnStatus_0002701c)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 0001190c size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00027020)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnWrapBufAttr @ 00011918 size=12 ===== */

void RK_MPI_VI_SetChnWrapBufAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetChnWrapBufAttr_00027024)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_destroy @ 00011924 size=12 ===== */

void rk_aiq_uapi2_camgroup_destroy(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_destroy_00027028)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_ae_setExpSwAttr @ 00011930 size=12 ===== */

void rk_aiq_user_api2_ae_setExpSwAttr(void)

{
  (*(code *)PTR_rk_aiq_user_api2_ae_setExpSwAttr_0002702c)();
  return;
}



/* ===== <EXTERNAL>::fwrite @ 0001193c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_00027030)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::system @ 00011948 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int system(char *__command)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_system_00027034)(__command);
  return iVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_switch_scene @ 00011954 size=12 ===== */

void rk_aiq_uapi2_sysctl_switch_scene(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_switch_scene_00027038)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetChnAttr @ 00011960 size=12 ===== */

void RK_MPI_VI_GetChnAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_GetChnAttr_0002703c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChn @ 0001196c size=12 ===== */

void RK_MPI_VI_DisableChn(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableChn_00027040)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_StopPipe @ 00011978 size=12 ===== */

void RK_MPI_VI_StopPipe(void)

{
  (*(code *)PTR_RK_MPI_VI_StopPipe_00027044)();
  return;
}



/* ===== <EXTERNAL>::memcpy @ 00011984 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00027048)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_setMulCamConc @ 00011990 size=12 ===== */

void rk_aiq_uapi2_sysctl_setMulCamConc(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_setMulCamConc_0002704c)();
  return;
}



/* ===== <EXTERNAL>::sleep @ 0001199c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_sleep_00027050)(__seconds);
  return uVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_ReleaseChnFrame @ 000119a8 size=12 ===== */

void RK_MPI_VI_ReleaseChnFrame(void)

{
  (*(code *)PTR_RK_MPI_VI_ReleaseChnFrame_00027054)();
  return;
}



/* ===== <EXTERNAL>::pthread_mutex_init @ 000119b4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_00027058)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_create @ 000119c0 size=12 ===== */

void rk_aiq_uapi2_camgroup_create(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_create_0002705c)();
  return;
}



/* ===== <EXTERNAL>::gettimeofday @ 000119cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_gettimeofday_00027060)(__tv);
  return iVar1;
}



/* ===== <EXTERNAL>::prctl @ 000119d8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int prctl(int __option,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_prctl_00027064)(__option);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevAttr @ 000119e4 size=12 ===== */

void RK_MPI_VI_GetDevAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_GetDevAttr_00027068)();
  return;
}



/* ===== <EXTERNAL>::setenv @ 000119f0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setenv(char *__name,char *__value,int __replace)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setenv_0002706c)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::malloc @ 000119fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00027070)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_aldch_v21_SetAttrib @ 00011a08 size=12 ===== */

void rk_aiq_user_api2_aldch_v21_SetAttrib(void)

{
  (*(code *)PTR_rk_aiq_user_api2_aldch_v21_SetAttrib_00027074)();
  return;
}



/* ===== <EXTERNAL>::strrchr @ 00011a14 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strrchr_00027078)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::fopen64 @ 00011a2c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen64_00027080)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_setMirrorFlip @ 00011a38 size=12 ===== */

void rk_aiq_uapi2_setMirrorFlip(void)

{
  (*(code *)PTR_rk_aiq_uapi2_setMirrorFlip_00027084)();
  return;
}



/* ===== <EXTERNAL>::setlinebuf @ 00011a44 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void setlinebuf(FILE *__stream)

{
  (*(code *)PTR_setlinebuf_00027088)(__stream);
  return;
}



/* ===== <EXTERNAL>::strlen @ 00011a50 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_0002708c)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::pthread_mutex_lock @ 00011a5c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_00027090)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::snprintf @ 00011a68 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_00027094)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_aldch_v21_GetAttrib @ 00011a74 size=12 ===== */

void rk_aiq_user_api2_aldch_v21_GetAttrib(void)

{
  (*(code *)PTR_rk_aiq_user_api2_aldch_v21_GetAttrib_00027098)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnAttr @ 00011a80 size=12 ===== */

void RK_MPI_VI_SetChnAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetChnAttr_0002709c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_UnBind @ 00011a8c size=12 ===== */

void RK_MPI_SYS_UnBind(void)

{
  (*(code *)PTR_RK_MPI_SYS_UnBind_000270a0)();
  return;
}



/* ===== <EXTERNAL>::sem_destroy @ 00011a98 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sem_destroy(sem_t *__sem)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sem_destroy_000270a4)(__sem);
  return iVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_prepare @ 00011aa4 size=12 ===== */

void rk_aiq_uapi2_camgroup_prepare(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_prepare_000270a8)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 00011ab0 size=12 ===== */

void RK_MPI_SYS_Init(void)

{
  (*(code *)PTR_RK_MPI_SYS_Init_000270ac)();
  return;
}



/* ===== <EXTERNAL>::pthread_mutex_destroy @ 00011abc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_000270b0)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId @ 00011ac8 size=12 ===== */

void rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId_000270b4)();
  return;
}



/* ===== <EXTERNAL>::fclose @ 00011ad4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_000270b8)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::fread @ 00011ae0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fread_000270bc)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_PauseChn @ 00011aec size=12 ===== */

void RK_MPI_VI_PauseChn(void)

{
  (*(code *)PTR_RK_MPI_VI_PauseChn_000270c0)();
  return;
}



/* ===== <EXTERNAL>::RK_LOG @ 00011af8 size=12 ===== */

void RK_LOG(void)

{
  (*(code *)PTR_RK_LOG_000270c4)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_getCamInfos @ 00011b04 size=12 ===== */

void rk_aiq_uapi2_camgroup_getCamInfos(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_getCamInfos_000270c8)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_ResumeChn @ 00011b10 size=12 ===== */

void RK_MPI_VI_ResumeChn(void)

{
  (*(code *)PTR_RK_MPI_VI_ResumeChn_000270cc)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_start @ 00011b1c size=12 ===== */

void rk_aiq_uapi2_camgroup_start(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_start_000270d0)();
  return;
}



/* ===== <EXTERNAL>::fileno @ 00011b28 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fileno(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fileno_000270d4)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::pthread_create @ 00011b34 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_000270d8)(__newthread);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_StartPipe @ 00011b40 size=12 ===== */

void RK_MPI_VI_StartPipe(void)

{
  (*(code *)PTR_RK_MPI_VI_StartPipe_000270dc)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChnExt @ 00011b4c size=12 ===== */

void RK_MPI_VI_DisableChnExt(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableChnExt_000270e0)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetChnFrame @ 00011b58 size=12 ===== */

void RK_MPI_VI_GetChnFrame(void)

{
  (*(code *)PTR_RK_MPI_VI_GetChnFrame_000270e4)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChnExt @ 00011b64 size=12 ===== */

void RK_MPI_VI_EnableChnExt(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableChnExt_000270e8)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevBindPipe @ 00011b70 size=12 ===== */

void RK_MPI_VI_SetDevBindPipe(void)

{
  (*(code *)PTR_RK_MPI_VI_SetDevBindPipe_000270ec)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_prepare @ 00011b7c size=12 ===== */

void rk_aiq_uapi2_sysctl_prepare(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_prepare_000270f0)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevIsEnable @ 00011b88 size=12 ===== */

void RK_MPI_VI_GetDevIsEnable(void)

{
  (*(code *)PTR_RK_MPI_VI_GetDevIsEnable_000270f4)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_init @ 00011b94 size=12 ===== */

void rk_aiq_uapi2_sysctl_init(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_init_000270f8)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableDev @ 00011ba0 size=12 ===== */

void RK_MPI_VI_EnableDev(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableDev_000270fc)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_start @ 00011bac size=12 ===== */

void rk_aiq_uapi2_sysctl_start(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_start_00027100)();
  return;
}



/* ===== <EXTERNAL>::fflush @ 00011bb8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_00027104)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 00011bc4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00027108)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_ae_getExpSwAttr @ 00011bd0 size=12 ===== */

void rk_aiq_user_api2_ae_getExpSwAttr(void)

{
  (*(code *)PTR_rk_aiq_user_api2_ae_getExpSwAttr_0002710c)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_preInit_devBufCnt @ 00011bdc size=12 ===== */

void rk_aiq_uapi2_sysctl_preInit_devBufCnt(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_preInit_devBufCnt_00027110)();
  return;
}



/* ===== <EXTERNAL>::fprintf @ 00011be8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00027114)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_ChnSaveFile @ 00011bf4 size=12 ===== */

void RK_MPI_VI_ChnSaveFile(void)

{
  (*(code *)PTR_RK_MPI_VI_ChnSaveFile_00027118)();
  return;
}



/* ===== <EXTERNAL>::abort @ 00011c00 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_0002711c)();
  return;
}



/* ===== <EXTERNAL>::sprintf @ 00011c0c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_00027120)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::fseek @ 00011c18 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fseek_00027124)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 00011c24 size=12 ===== */

void RK_MPI_MB_Handle2VirAddr(void)

{
  (*(code *)PTR_RK_MPI_MB_Handle2VirAddr_00027128)();
  return;
}



/* ===== <EXTERNAL>::pthread_mutex_unlock @ 00011c30 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_0002712c)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_deinit @ 00011c3c size=12 ===== */

void rk_aiq_uapi2_sysctl_deinit(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_deinit_00027130)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_stop @ 00011c48 size=12 ===== */

void rk_aiq_uapi2_sysctl_stop(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_stop_00027134)();
  return;
}



/* ===== <EXTERNAL>::sem_post @ 00011c54 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sem_post(sem_t *__sem)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sem_post_00027138)(__sem);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetEptz @ 00011c60 size=12 ===== */

void RK_MPI_VI_SetEptz(void)

{
  (*(code *)PTR_RK_MPI_VI_SetEptz_0002713c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevAttr @ 00011c6c size=12 ===== */

void RK_MPI_VI_SetDevAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetDevAttr_00027140)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChn @ 00011c78 size=12 ===== */

void RK_MPI_VI_EnableChn(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableChn_00027144)();
  return;
}



/* ===== <EXTERNAL>::free @ 00011c84 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00027148)(__ptr);
  return;
}



/* ===== <EXTERNAL>::atoi @ 00011c90 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_0002714c)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::strchr @ 00011c9c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_00027150)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::fsync @ 00011ca8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fsync(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fsync_00027154)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::printf @ 00011cb4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00027158)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::getopt_long @ 00011cc0 size=12 ===== */

void getopt_long(void)

{
  (*(code *)PTR_getopt_long_0002715c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableDev @ 00011ccc size=12 ===== */

void RK_MPI_VI_DisableDev(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableDev_00027160)();
  return;
}



/* ===== <EXTERNAL>::puts @ 00011cd8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00027164)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_stop @ 00011ce4 size=12 ===== */

void rk_aiq_uapi2_camgroup_stop(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_stop_00027168)();
  return;
}



/* ===== <EXTERNAL>::signal @ 00011cf0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = (__sighandler_t)(*(code *)PTR_signal_0002716c)(__sig);
  return p_Var1;
}



/* ===== <EXTERNAL>::strcpy @ 00011cfc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_00027170)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00011d08 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00027174)();
  return;
}



/* ===== <EXTERNAL>::sem_wait @ 00011d14 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sem_wait(sem_t *__sem)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sem_wait_00027178)(__sem);
  return iVar1;
}



/* ===== <EXTERNAL>::pthread_join @ 00011d20 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_0002717c)(__th);
  return iVar1;
}



/* ===== entry @ 000123b8 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_0002707c)
            (DAT_000123ec,param_2,&stack0x00000004,DAT_000123f0,DAT_000123e8,param_1);
  return;
}



/* ===== FUN_000123f4 @ 000123f4 size=32 ===== */

void FUN_000123f4(void)

{
  if (DAT_00012418 == DAT_00012414) {
    return;
  }
  if (DAT_0001241c == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00012410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0001241c)();
  return;
}



/* ===== _FINI_0 @ 00012458 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00012494;
  if (*DAT_00012494 != '\0') {
    return;
  }
  FUN_000123f4();
  if (DAT_00012498 != 0) {
    __deregister_frame_info(DAT_0001249c);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 000124a0 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_000124c4 != 0) {
    __register_frame_info(DAT_000124cc,DAT_000124c8);
  }
  if ((DAT_00012450 - DAT_0001244c >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00012454 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00012448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00012454)();
  return;
}



/* ===== FUN_000124d0 @ 000124d0 size=72 ===== */

void FUN_000124d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  RK_LOG(2,DAT_00012520,DAT_00012518,DAT_0001251c,0x4a,param_1,param_2,param_4);
  *DAT_00012524 = 0xffffffff;
  *(undefined4 *)*DAT_00012528 = 1;
  return;
}



/* ===== FUN_0001252c @ 0001252c size=60 ===== */

void FUN_0001252c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  RK_LOG(2,DAT_00012570,DAT_00012568,DAT_0001256c,0x50,param_1,param_2,param_4);
  *(undefined4 *)*DAT_00012574 = 1;
  return;
}



/* ===== FUN_00012578 @ 00012578 size=96 ===== */

void FUN_00012578(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  pthread_mutex_t *__mutex;
  
  iVar3 = DAT_000125e0;
  iVar2 = DAT_000125dc;
  piVar1 = DAT_000125d8;
  for (uVar4 = 0; uVar4 < *(uint *)(*piVar1 + 0x3c); uVar4 = uVar4 + 1) {
    __mutex = (pthread_mutex_t *)(uVar4 * 0x18 + iVar2);
    pthread_mutex_lock(__mutex);
    *(undefined4 *)(*piVar1 + (uVar4 + 0xc) * 4 + 4) = 0;
    pthread_mutex_unlock(__mutex);
    sem_wait((sem_t *)(iVar3 + uVar4 * 0x10));
  }
  return;
}



/* ===== FUN_00012878 @ 00012878 size=120 ===== */

void FUN_00012878(undefined4 param_1)

{
  puts(DAT_000128f0);
  printf(DAT_000128f4,param_1);
  puts(DAT_000128f8);
  puts(DAT_000128fc);
  puts(DAT_00012900);
  puts(DAT_00012904);
  puts(DAT_00012908);
  puts(DAT_0001290c);
  puts(DAT_00012910);
  puts(DAT_00012914);
  puts(DAT_00012918);
  puts(DAT_0001291c);
  puts(DAT_00012920);
  return;
}



/* ===== FUN_00012924 @ 00012924 size=304 ===== */

undefined4 FUN_00012924(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  piVar1 = DAT_00012a54;
  iVar2 = *DAT_00012a54;
  uVar5 = *(uint *)(iVar2 + 0x18);
  if (uVar5 == 0) {
    for (; iVar2 = *piVar1, uVar5 < *(uint *)(iVar2 + 0x3c); uVar5 = uVar5 + 1) {
      iVar4 = (uVar5 + 8) * 4;
      iVar2 = FUN_0001467c(*(undefined4 *)(iVar2 + iVar4 + 4),*(undefined4 *)(iVar2 + 0x40),
                           *(undefined4 *)(iVar2 + 0x14),*(undefined4 *)(iVar2 + 0x44));
      iVar4 = FUN_00014c38(*(undefined4 *)(*piVar1 + iVar4 + 4));
      if (iVar2 != 0 || iVar4 != 0) {
        uVar6 = 0x87;
        uVar3 = DAT_00012a60;
        goto LAB_00012a0c;
      }
    }
    uVar3 = 0;
  }
  else {
    if (uVar5 == 1) {
      uStack_50 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      local_54 = 0;
      local_24 = 0;
      local_44 = 0;
      local_3c = 0;
      local_2c = 0;
      uStack_20 = 0;
      local_34 = *(undefined4 *)(iVar2 + 0x3c);
      uStack_30 = *(undefined4 *)(iVar2 + 0x44);
      uStack_40 = uStack_50;
      uStack_38 = uStack_50;
      uStack_28 = uStack_50;
      uStack_1c = uStack_50;
      iVar2 = FUN_000149a4(*(undefined4 *)(iVar2 + 0x2c),*(undefined4 *)(iVar2 + 0x40),
                           *(int *)(iVar2 + 0x14) != 0,0,0,&local_54);
      if (iVar2 == 0) {
        return 0;
      }
      printf(DAT_00012a5c,DAT_00012a58);
    }
    else {
      uVar6 = 0x98;
      uVar3 = DAT_00012a6c;
LAB_00012a0c:
      RK_LOG(2,DAT_00012a68,uVar3,DAT_00012a64,uVar6,uVar5);
    }
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



/* ===== FUN_00012a70 @ 00012a70 size=176 ===== */

int FUN_00012a70(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  piVar1 = DAT_00012b20;
  iVar3 = *(int *)(*DAT_00012b20 + 0x18);
  if (iVar3 == 0) {
    for (uVar4 = 0; uVar4 < *(uint *)(*piVar1 + 0x3c); uVar4 = uVar4 + 1) {
      FUN_00014b30(uVar4);
    }
    iVar2 = 0;
  }
  else if (iVar3 == 1) {
    iVar2 = FUN_00014bb8(*(undefined4 *)(*DAT_00012b20 + 0x2c));
    if (iVar2 != 0) {
      RK_LOG(2,DAT_00012b2c,DAT_00012b28,DAT_00012b24,0xaa,iVar2,param_3);
    }
  }
  else {
    iVar2 = -1;
    RK_LOG(2,DAT_00012b2c,DAT_00012b30,DAT_00012b24,0xae,iVar3,param_3);
  }
  return iVar2;
}



/* ===== FUN_00012b34 @ 00012b34 size=3572 ===== */

undefined4 FUN_00012b34(void)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  
  piVar1 = DAT_0001393c;
  prctl(0xf,DAT_00013940);
  FUN_00012578();
  FUN_00014440(DAT_00013944,*(undefined4 *)(*piVar1 + 0x1c));
  uVar3 = *(int *)(*piVar1 + 0x1c) - 1;
                    /* WARNING: Could not recover jumptable at 0x00012b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (uVar3 < 5) {
    uVar2 = (*(code *)(&switchD_00012b70::switchdataD_00012b78)[uVar3])();
    return uVar2;
  }
  RK_LOG(2,DAT_0001394c,DAT_00013a00,DAT_0001396c,0x296,*(int *)(*piVar1 + 0x1c));
  FUN_00014440(DAT_00013964,*(undefined4 *)(*piVar1 + 0x1c));
  RK_LOG(2,DAT_0001394c,DAT_00013968,DAT_0001396c,0x29b);
  return 0;
}



/* ===== FUN_00013a04 @ 00013a04 size=252 ===== */

undefined4 FUN_00013a04(undefined4 param_1,undefined4 param_2)

{
  sem_t *__sem;
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  pvVar1 = malloc(0x720);
  *DAT_00013b00 = pvVar1;
  if (pvVar1 == (void *)0x0) {
    uVar4 = 0x2a3;
    uVar3 = DAT_00013b04;
  }
  else {
    memset(pvVar1,0,0x720);
    pvVar1 = malloc(0x50);
    *DAT_00013b10 = pvVar1;
    if (pvVar1 == (void *)0x0) {
      uVar4 = 0x2aa;
      uVar3 = DAT_00013b14;
    }
    else {
      memset(pvVar1,0,0x50);
      __sem = DAT_00013b18;
      *(undefined4 *)((int)pvVar1 + 0x20) = 0xffffffff;
      *(undefined4 *)((int)pvVar1 + 0x30) = 500;
      sem_init(__sem,0,0);
      iVar2 = pthread_mutex_init(DAT_00013b1c,(pthread_mutexattr_t *)0x0);
      if (iVar2 == 0) {
        sem_init(DAT_00013b24,0,0);
        iVar2 = pthread_mutex_init(DAT_00013b28,(pthread_mutexattr_t *)0x0);
        if (iVar2 == 0) {
          return 0;
        }
      }
      uVar4 = 0x2b6;
      uVar3 = DAT_00013b20;
    }
  }
  RK_LOG(2,DAT_00013b0c,uVar3,DAT_00013b08,uVar4,param_2);
  return 0xffffffff;
}



/* ===== FUN_00013b2c @ 00013b2c size=100 ===== */

undefined4 FUN_00013b2c(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_00013b90;
  if ((void *)*DAT_00013b90 != (void *)0x0) {
    free((void *)*DAT_00013b90);
    *puVar1 = 0;
  }
  puVar1 = DAT_00013b94;
  if ((void *)*DAT_00013b94 != (void *)0x0) {
    free((void *)*DAT_00013b94);
    *puVar1 = 0;
  }
  sem_destroy(DAT_00013b98);
  pthread_mutex_destroy(DAT_00013b9c);
  sem_destroy(DAT_00013ba0);
  pthread_mutex_destroy(DAT_00013ba4);
  return 0;
}



/* ===== FUN_00013ba8 @ 00013ba8 size=764 ===== */

int FUN_00013ba8(int *param_1)

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
  if (iVar1 == DAT_00013ea4) {
    iVar1 = RK_MPI_VI_SetDevAttr(param_1[7],param_1 + 0x10);
    if (iVar1 == 0) goto LAB_00013c20;
    uVar7 = 0x29;
    uVar5 = DAT_00013ea8;
  }
  else {
    RK_LOG(2,DAT_00013eb0,DAT_00013eb4,DAT_00013eac,0x2d);
LAB_00013c20:
    iVar1 = RK_MPI_VI_GetDevIsEnable(param_1[7]);
    if (iVar1 == 0) {
      RK_LOG(2,DAT_00013eb0,DAT_00013ec4,DAT_00013eac,0x42);
LAB_00013cdc:
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
            uVar5 = DAT_00013ecc;
LAB_00013d5c:
            RK_LOG(2,DAT_00013eb0,uVar5,DAT_00013eac,uVar7,uVar6);
            return -1;
          }
          local_1c = 1;
          local_14 = param_1[4] * uVar4 * 3 >> 1;
          uStack_18 = uVar4;
          uVar6 = RK_MPI_VI_SetChnWrapBufAttr(param_1[8],param_1[9],&local_1c);
          if (uVar6 != 0) {
            uVar7 = 0x59;
            uVar5 = DAT_00013ed0;
            goto LAB_00013d5c;
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
            uVar5 = DAT_00013edc;
            goto LAB_00013e9c;
          }
          uVar7 = 0x6d;
          uVar5 = DAT_00013ed8;
          goto LAB_00013c90;
        }
        RK_LOG(2,DAT_00013eb0,DAT_00013ed4,DAT_00013eac,0x66,iVar1,param_1[8],param_1[9]);
      }
      else {
        uVar7 = 0x4a;
        uVar5 = DAT_00013ec8;
LAB_00013c90:
        RK_LOG(2,DAT_00013eb0,uVar5,DAT_00013eac,uVar7,iVar1);
      }
      iVar1 = RK_MPI_VI_DisableDev(param_1[7]);
      uVar7 = 0x7d;
      uVar5 = DAT_00013ec0;
    }
    else {
      iVar1 = RK_MPI_VI_EnableDev(param_1[7]);
      if (iVar1 == 0) {
        param_1[0x17] = 1;
        param_1[0x18] = param_1[8];
        iVar1 = RK_MPI_VI_SetDevBindPipe(param_1[7],param_1 + 0x17);
        if (iVar1 == 0) goto LAB_00013cdc;
        uVar7 = 0x3e;
        uVar5 = DAT_00013ebc;
        goto LAB_00013c90;
      }
      uVar7 = 0x36;
      uVar5 = DAT_00013eb8;
    }
  }
  uVar2 = 2;
  iVar3 = iVar1;
LAB_00013e9c:
  RK_LOG(uVar2,DAT_00013eb0,uVar5,DAT_00013eac,uVar7,iVar3);
  return iVar1;
}



/* ===== FUN_00013ee0 @ 00013ee0 size=236 ===== */

undefined4 FUN_00013ee0(int param_1,undefined4 *param_2)

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
    RK_LOG(5,DAT_00013fd0,DAT_00013fcc,DAT_00013fd4,0x92,*(undefined4 *)(param_1 + 0x1c),
           *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),uVar2,
           *(undefined4 *)(param_1 + 0x380),*(undefined4 *)(param_1 + 900),
           *(undefined4 *)(param_1 + 0x368),*(undefined4 *)(param_1 + 0x374),
           *(undefined4 *)(param_1 + 0x378),*(undefined4 *)(param_1 + 0x36c),
           *(undefined4 *)(param_1 + 0x37c));
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
    RK_LOG(2,DAT_00013fd0,DAT_00013fd8,DAT_00013fd4,0x94,*(undefined4 *)(param_1 + 0x1c),iVar1);
  }
  return uVar2;
}



/* ===== FUN_00013fdc @ 00013fdc size=68 ===== */

undefined4 FUN_00013fdc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = RK_MPI_VI_ReleaseChnFrame
                    (*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),param_1 + 0x318
                     ,param_4,param_1,param_2,param_3);
  if (iVar1 != 0) {
    RK_LOG(2,DAT_00014028,DAT_00014024,DAT_00014020,0xa0,iVar1);
  }
  return 0;
}



/* ===== FUN_0001402c @ 0001402c size=104 ===== */

uint FUN_0001402c(int param_1,undefined4 param_2,undefined4 param_3)

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
    RK_LOG(2,DAT_0001409c,DAT_00014098,DAT_00014094,0xaf,uVar1);
  }
  return uVar1;
}



/* ===== FUN_000140a0 @ 000140a0 size=368 ===== */

void FUN_000140a0(undefined4 param_1,int param_2)

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
  
  piVar2 = DAT_00014230;
  piVar1 = DAT_0001422c;
  iVar7 = *DAT_0001422c;
  *DAT_00014230 = *DAT_00014230 + param_2;
  ptVar4 = DAT_00014238;
  if (iVar7 == 0) {
    gettimeofday(DAT_00014234,(__timezone_ptr_t)0x0);
  }
  else if (iVar7 == 100) {
    gettimeofday(DAT_00014238,(__timezone_ptr_t)0x0);
    ptVar3 = DAT_00014234;
    printf(DAT_0001423c,param_1);
    printf(DAT_00014240,ptVar3->tv_sec,ptVar3->tv_usec);
    printf(DAT_00014244,ptVar4->tv_sec,ptVar4->tv_usec);
    piVar5 = DAT_00014248;
    iVar7 = ptVar4->tv_sec - ptVar3->tv_sec;
    iVar6 = ptVar4->tv_usec - ptVar3->tv_usec;
    *DAT_00014248 = iVar7;
    piVar5[1] = iVar6;
    if (iVar6 < 0) {
      *piVar5 = iVar7 + -1;
      piVar5[1] = iVar6 + 1000000;
    }
    dVar9 = (double)VectorSignedToFloat(*piVar5,(byte)(in_fpscr >> 0x16) & 3);
    dVar10 = (double)VectorSignedToFloat(piVar5[1],(byte)(in_fpscr >> 0x16) & 3);
    fVar8 = (float)VectorSignedToFloat(*piVar2,(byte)(in_fpscr >> 0x16) & 3);
    dVar9 = dVar10 / DAT_00014210 + dVar9 * DAT_00014210;
    printf(DAT_0001424c,100,SUB84(dVar9,0),(int)((ulonglong)dVar9 >> 0x20),
           ((double)(fVar8 * 8.0 * DAT_00014228) / dVar9) * DAT_00014218 * DAT_00014218);
    printf(DAT_00014250);
    printf(DAT_00014254);
    puts(DAT_00014258);
    *piVar1 = 0;
    *piVar2 = 0;
    return;
  }
  *piVar1 = iVar7 + 1;
  return;
}



/* ===== FUN_00014440 @ 00014440 size=72 ===== */

undefined4 FUN_00014440(undefined4 param_1,undefined4 param_2)

{
  char acStack_110 [260];
  
  system(DAT_00014488);
  sprintf(acStack_110,DAT_0001448c,param_1,param_2);
  system(acStack_110);
  system(DAT_00014490);
  return 0;
}



/* ===== FUN_00014494 @ 00014494 size=288 ===== */

undefined4 FUN_00014494(char *param_1,char *param_2,size_t param_3,undefined4 *param_4)

{
  FILE *__stream;
  FILE *__stream_00;
  size_t sVar1;
  uint unaff_r4;
  
  __stream = fopen64(param_1,DAT_000145b4);
  __stream_00 = fopen64(param_2,DAT_000145b4);
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
    RK_LOG(2,DAT_000145c0,DAT_000145c4,DAT_000145b8,0xa0,param_1,param_2);
  }
  else {
    RK_LOG(2,DAT_000145c0,DAT_000145bc,DAT_000145b8,0x9a,param_1,param_2,__stream,__stream_00);
    if (__stream == (FILE *)0x0) goto LAB_00014520;
  }
  fclose(__stream);
LAB_00014520:
  if (__stream_00 != (FILE *)0x0) {
    fclose(__stream_00);
  }
  return 0xffffffff;
}



/* ===== FUN_0001467c @ 0001467c size=236 ===== */

undefined4 FUN_0001467c(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  char *__format;
  undefined4 uVar2;
  char acStack_158 [16];
  undefined1 auStack_148 [304];
  
  iVar1 = DAT_00014774;
  if (param_1 < 8) {
    setlinebuf((FILE *)*DAT_00014770);
    __format = DAT_00014780;
    if (param_4 == 0) {
      puts(DAT_00014778);
      uVar2 = 0;
    }
    else {
      *(undefined4 *)(DAT_0001477c + param_1 * 4) = param_2;
      snprintf(acStack_158,0x10,__format,param_2);
      setenv(DAT_00014784,acStack_158,1);
      rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId(param_1,auStack_148);
      printf(DAT_00014788,param_1,auStack_148,param_4);
      rk_aiq_uapi2_sysctl_preInit_devBufCnt(auStack_148,DAT_0001478c,2);
      uVar2 = rk_aiq_uapi2_sysctl_init(auStack_148,param_4,DAT_00014794,DAT_00014790);
      if (param_3 != 0) {
        rk_aiq_uapi2_sysctl_setMulCamConc(uVar2,1);
      }
    }
    *(undefined4 *)(iVar1 + param_1 * 4) = uVar2;
    uVar2 = 0;
  }
  else {
    printf(DAT_0001476c,DAT_00014768);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== FUN_00014798 @ 00014798 size=488 ===== */

int FUN_00014798(int param_1,ushort *param_2,int param_3)

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
  iVar3 = DAT_00014984;
  __format = DAT_00014980;
  __s = param_2;
  if ((int)param_2 - 1U < 2) {
    iVar4 = rk_aiq_uapi2_camgroup_getCamInfos
                      (*(undefined4 *)(DAT_00014984 + param_1 * 4),&local_108);
    if (iVar4 == 0) {
      piVar7 = &local_108;
      iVar4 = 0;
      for (iVar8 = 0; iVar8 < local_108; iVar8 = iVar8 + 1) {
        iVar6 = rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm
                          (*(undefined4 *)(iVar3 + param_1 * 4),piVar7[1]);
        if (iVar6 == 0) {
          puts(DAT_000149a0);
          goto LAB_00014970;
        }
        printf(DAT_00014988,piVar7[1],piVar7[9]);
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
              puts(DAT_0001498c);
              local_84 = -1;
            }
            else {
              uVar1 = __s[2];
              uVar2 = __s[3];
              printf(DAT_00014994,(uint)*__s,(uint)__s[1],(uint)uVar1,(uint)uVar2,(uint)__s[4],
                     (uint)__s[5]);
              local_84 = ((uint)uVar2 * (uint)uVar1 + 6) * 2;
            }
          }
          else {
            pcVar5 = strrchr((char *)__s,0x2f);
            __format = DAT_00014998;
            if (pcVar5 == (char *)0x0) goto LAB_000148f0;
            local_bc = 1;
            local_8c = 1;
            local_90 = (ushort *)0x1;
            memcpy(&local_88,__s,(size_t)(pcVar5 + (1 - (int)__s)));
            strcpy(acStack_48,pcVar5 + 1);
            printf(DAT_0001499c,&local_88,acStack_48);
          }
          iVar6 = rk_aiq_user_api2_aldch_v21_SetAttrib(iVar6,auStack_c4);
          iVar4 = 0;
          if (iVar6 != 0) {
            printf(DAT_00014990,iVar6);
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
LAB_000148f0:
    printf(__format,__s);
LAB_00014970:
    iVar4 = -1;
  }
  return iVar4;
}



/* ===== FUN_000149a4 @ 000149a4 size=352 ===== */

undefined4
FUN_000149a4(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5,
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
  
  uVar1 = DAT_00014b28;
  __format_00 = DAT_00014b24;
  __format = DAT_00014b20;
  if (param_1 < 8) {
    for (iVar4 = 0; iVar3 = DAT_00014b14, iVar4 < *(int *)(param_6 + 0x20); iVar4 = iVar4 + 1) {
      iVar3 = rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId(iVar4,acStack_558);
      __s = DAT_00014b0c;
      if (iVar3 != 0) goto LAB_000149fc;
      printf(__format,param_1,iVar4,acStack_558,*(undefined4 *)(param_6 + 0x24));
      __dest = auStack_428 + iVar4 * 0x80;
      sVar2 = strlen(acStack_558);
      memcpy(__dest,acStack_558,sVar2 + 1);
      *(undefined1 **)(param_6 + iVar4 * 4) = __dest;
      printf(__format_00,iVar4,__dest);
      iVar3 = rk_aiq_uapi2_sysctl_preInit_devBufCnt(acStack_558,uVar1,2);
      __s = DAT_00014b10;
      if (iVar3 != 0) goto LAB_000149fc;
    }
    iVar4 = rk_aiq_uapi2_camgroup_create(param_6);
    *(int *)(iVar3 + param_1 * 4) = iVar4;
    __s = DAT_00014b18;
    if (iVar4 != 0) {
      if (param_4 != 0) {
        FUN_00014798(param_1,param_4 & 0xff,param_5);
      }
      iVar4 = rk_aiq_uapi2_camgroup_prepare(*(undefined4 *)(iVar3 + param_1 * 4),param_2);
      iVar3 = rk_aiq_uapi2_camgroup_start(*(undefined4 *)(iVar3 + param_1 * 4));
      __s = DAT_00014b1c;
      if (iVar4 == 0 && iVar3 == 0) {
        puts(DAT_00014b2c);
        return 0;
      }
    }
LAB_000149fc:
    puts(__s);
  }
  else {
    printf(DAT_00014b08,DAT_00014b04,8);
  }
  return 0xffffffff;
}



/* ===== FUN_00014b30 @ 00014b30 size=112 ===== */

undefined4 FUN_00014b30(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_00014ba0;
  if ((param_1 < 8) && (*(int *)(DAT_00014ba0 + param_1 * 4) != 0)) {
    puts(DAT_00014bac);
    rk_aiq_uapi2_sysctl_stop(*(undefined4 *)(iVar1 + param_1 * 4),0);
    puts(DAT_00014bb0);
    rk_aiq_uapi2_sysctl_deinit(*(undefined4 *)(iVar1 + param_1 * 4));
    puts(DAT_00014bb4);
    *(undefined4 *)(iVar1 + param_1 * 4) = 0;
    return 0;
  }
  printf(DAT_00014ba8,DAT_00014ba4,param_1);
  return 0xffffffff;
}



/* ===== FUN_00014bb8 @ 00014bb8 size=104 ===== */

undefined4 FUN_00014bb8(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_00014c20;
  if (param_1 < 8) {
    if (*(int *)(DAT_00014c20 + param_1 * 4) != 0) {
      puts(DAT_00014c2c);
      rk_aiq_uapi2_camgroup_stop(*(undefined4 *)(iVar1 + param_1 * 4));
      puts(DAT_00014c30);
      rk_aiq_uapi2_camgroup_destroy(*(undefined4 *)(iVar1 + param_1 * 4));
      puts(DAT_00014c34);
      *(undefined4 *)(iVar1 + param_1 * 4) = 0;
      return 0;
    }
  }
  printf(DAT_00014c28,DAT_00014c24);
  return 0xffffffff;
}



/* ===== FUN_00014c38 @ 00014c38 size=152 ===== */

undefined4 FUN_00014c38(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_00014cd0;
  if ((param_1 < 8) && (iVar1 = *(int *)(DAT_00014cd0 + param_1 * 4), iVar1 != 0)) {
    iVar1 = rk_aiq_uapi2_sysctl_prepare(iVar1,0,0,*(undefined4 *)(DAT_00014cdc + param_1 * 4));
    if (iVar1 == 0) {
      puts(DAT_00014ce4);
      iVar2 = rk_aiq_uapi2_sysctl_start(*(undefined4 *)(iVar2 + param_1 * 4));
      if (iVar2 == 0) {
        puts(DAT_00014cec);
        return 0;
      }
      puts(DAT_00014ce8);
    }
    else {
      puts(DAT_00014ce0);
      *(undefined4 *)(iVar2 + param_1 * 4) = 0;
    }
  }
  else {
    printf(DAT_00014cd8,DAT_00014cd4);
  }
  return 0xffffffff;
}



/* ===== FUN_00014ed4 @ 00014ed4 size=204 ===== */

int FUN_00014ed4(uint param_1,undefined1 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_b4 [8];
  undefined1 local_ac;
  undefined1 local_ab;
  
  memset(auStack_b4,0,0x9c);
  iVar1 = DAT_00014fa0;
  if ((param_1 < 8) && (iVar2 = *(int *)(DAT_00014fa0 + param_1 * 4), iVar2 != 0)) {
    iVar2 = rk_aiq_user_api2_aldch_v21_GetAttrib(iVar2,auStack_b4);
    if (iVar2 == 0) {
      local_ac = param_3 != 0;
      local_ab = param_2;
      iVar2 = rk_aiq_user_api2_aldch_v21_SetAttrib(*(undefined4 *)(iVar1 + param_1 * 4),auStack_b4);
      if (iVar2 == 0) {
        return 0;
      }
      uVar4 = 0x196;
      uVar3 = DAT_00014fb4;
    }
    else {
      uVar4 = 399;
      uVar3 = DAT_00014fac;
    }
    RK_LOG(2,DAT_00014fb0,uVar3,DAT_00014fa4,uVar4,iVar2);
  }
  else {
    iVar2 = -1;
    printf(DAT_00014fa8,DAT_00014fa4,8);
  }
  return iVar2;
}



/* ===== FUN_00014fb8 @ 00014fb8 size=204 ===== */

int FUN_00014fb8(uint param_1,undefined1 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_b4 [8];
  undefined1 local_ac;
  undefined1 local_ab;
  
  memset(auStack_b4,0,0x9c);
  iVar1 = DAT_00015084;
  if ((param_1 < 8) && (iVar2 = *(int *)(DAT_00015084 + param_1 * 4), iVar2 != 0)) {
    iVar2 = rk_aiq_user_api2_aldch_v21_GetAttrib(iVar2,auStack_b4);
    if (iVar2 == 0) {
      local_ac = param_3 != 0;
      local_ab = param_2;
      iVar2 = rk_aiq_user_api2_aldch_v21_SetAttrib(*(undefined4 *)(iVar1 + param_1 * 4),auStack_b4);
      if (iVar2 == 0) {
        return 0;
      }
      uVar4 = 0x1b1;
      uVar3 = DAT_00015098;
    }
    else {
      uVar4 = 0x1a9;
      uVar3 = DAT_00015090;
    }
    RK_LOG(2,DAT_00015094,uVar3,DAT_00015088,uVar4,iVar2);
  }
  else {
    iVar2 = -1;
    printf(DAT_0001508c,DAT_00015088,8);
  }
  return iVar2;
}



/* ===== _fini @ 0001509c size=16 ===== */

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



/* ===== <EXTERNAL>::RK_MPI_VI_GetChnFrame @ 00028010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetChnFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnWrapBufAttr @ 00028014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetChnWrapBufAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChn @ 00028018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_DisableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_ae_setExpSwAttr @ 0002801c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_user_api2_ae_setExpSwAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 00028020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_ResumeChn @ 00028024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_ResumeChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_StartPipe @ 00028028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_StartPipe(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_prepare @ 0002802c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_prepare(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 00028030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 00028034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetChnAttr @ 00028038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetChnAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_setMirrorFlip @ 0002803c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_setMirrorFlip(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_lock @ 00028040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 00028044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 00028048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

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



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChnExt @ 00028050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_DisableChnExt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevAttr @ 00028054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetDevAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_UnBind @ 00028058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_UnBind(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_prepare @ 0002805c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_prepare(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strrchr @ 00028060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 00028064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_Handle2VirAddr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sem_destroy @ 00028068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sem_destroy(sem_t *__sem)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 0002806c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_unlock @ 00028070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sem_post @ 00028074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sem_post(sem_t *__sem)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 00028078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Exit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 0002807c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fsync @ 00028080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fsync(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_LOG @ 00028084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_LOG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 00028088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_join @ 0002808c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnAttr @ 00028090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetChnAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_StopPipe @ 00028094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_StopPipe(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_start @ 00028098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_start(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_destroy @ 0002809c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 000280a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_QueryChnStatus @ 000280a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_QueryChnStatus(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setlinebuf @ 000280a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void setlinebuf(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 000280ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sem_wait @ 000280b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sem_wait(sem_t *__sem)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sleep @ 000280b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setenv @ 000280b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setenv(char *__name,char *__value,int __replace)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_init @ 000280bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_stop @ 000280c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_stop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fread @ 000280c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gettimeofday @ 000280c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sem_init @ 000280cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sem_init(sem_t *__sem,int __pshared,uint __value)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_switch_scene @ 000280d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_switch_scene(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableDev @ 000280d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_EnableDev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_getCamInfos @ 000280d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_getCamInfos(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::prctl @ 000280dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int prctl(int __option,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChnExt @ 000280e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_EnableChnExt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::system @ 000280e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int system(char *__command)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::signal @ 000280e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Bind @ 000280ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Bind(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_stop @ 000280f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_stop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChn @ 000280f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_EnableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 000280f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_start @ 000280fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_start(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_preInit_devBufCnt @ 00028100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_preInit_devBufCnt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_destroy @ 00028104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_destroy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 00028108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fileno @ 0002810c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fileno(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 00028110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 00028114 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_aldch_v21_SetAttrib @ 00028118 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_user_api2_aldch_v21_SetAttrib(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevIsEnable @ 0002811c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetDevIsEnable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_setMulCamConc @ 00028120 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_setMulCamConc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_PauseChn @ 00028124 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_PauseChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevBindPipe @ 00028128 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetDevBindPipe(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetEptz @ 0002812c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetEptz(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId @ 00028130 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_init @ 00028134 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_ReleaseChnFrame @ 00028138 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_ReleaseChnFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_aldch_v21_GetAttrib @ 0002813c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_user_api2_aldch_v21_GetAttrib(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00028140 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt_long @ 00028144 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void getopt_long(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strchr @ 00028148 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_ChnSaveFile @ 0002814c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_ChnSaveFile(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_deinit @ 00028150 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_deinit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen64 @ 00028154 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fseek @ 00028158 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableDev @ 0002815c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_DisableDev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm @ 00028160 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevAttr @ 00028164 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetDevAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 00028168 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_create @ 0002816c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_create(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_ae_getExpSwAttr @ 00028170 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_user_api2_ae_getExpSwAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 00028174 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 00028178 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


