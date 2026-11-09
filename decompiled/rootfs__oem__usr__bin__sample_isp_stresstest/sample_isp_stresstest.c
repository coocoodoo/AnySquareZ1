// sample_isp_stresstest — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 000117d8 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 000117fc size=12 ===== */

void RK_MPI_SYS_Exit(void)

{
  (*(code *)PTR_RK_MPI_SYS_Exit_0002700c)();
  return;
}



/* ===== <EXTERNAL>::sem_init @ 00011808 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sem_init(sem_t *__sem,int __pshared,uint __value)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sem_init_00027010)(__sem);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Bind @ 00011814 size=12 ===== */

void RK_MPI_SYS_Bind(void)

{
  (*(code *)PTR_RK_MPI_SYS_Bind_00027014)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm @ 00011820 size=12 ===== */

void rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm_00027018)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_QueryChnStatus @ 0001182c size=12 ===== */

void RK_MPI_VI_QueryChnStatus(void)

{
  (*(code *)PTR_RK_MPI_VI_QueryChnStatus_0002701c)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00011838 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00027020)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnWrapBufAttr @ 00011844 size=12 ===== */

void RK_MPI_VI_SetChnWrapBufAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetChnWrapBufAttr_00027024)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_destroy @ 00011850 size=12 ===== */

void rk_aiq_uapi2_camgroup_destroy(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_destroy_00027028)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_ae_setExpSwAttr @ 0001185c size=12 ===== */

void rk_aiq_user_api2_ae_setExpSwAttr(void)

{
  (*(code *)PTR_rk_aiq_user_api2_ae_setExpSwAttr_0002702c)();
  return;
}



/* ===== <EXTERNAL>::fwrite @ 00011868 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_00027030)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::system @ 00011874 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int system(char *__command)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_system_00027034)(__command);
  return iVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_switch_scene @ 00011880 size=12 ===== */

void rk_aiq_uapi2_sysctl_switch_scene(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_switch_scene_00027038)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetChnAttr @ 0001188c size=12 ===== */

void RK_MPI_VI_GetChnAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_GetChnAttr_0002703c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChn @ 00011898 size=12 ===== */

void RK_MPI_VI_DisableChn(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableChn_00027040)();
  return;
}



/* ===== <EXTERNAL>::memcpy @ 000118a4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00027044)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_setMulCamConc @ 000118b0 size=12 ===== */

void rk_aiq_uapi2_sysctl_setMulCamConc(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_setMulCamConc_00027048)();
  return;
}



/* ===== <EXTERNAL>::sleep @ 000118bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_sleep_0002704c)(__seconds);
  return uVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_ReleaseChnFrame @ 000118c8 size=12 ===== */

void RK_MPI_VI_ReleaseChnFrame(void)

{
  (*(code *)PTR_RK_MPI_VI_ReleaseChnFrame_00027050)();
  return;
}



/* ===== <EXTERNAL>::pthread_mutex_init @ 000118d4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_00027054)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_create @ 000118e0 size=12 ===== */

void rk_aiq_uapi2_camgroup_create(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_create_00027058)();
  return;
}



/* ===== <EXTERNAL>::gettimeofday @ 000118ec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_gettimeofday_0002705c)(__tv);
  return iVar1;
}



/* ===== <EXTERNAL>::prctl @ 000118f8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int prctl(int __option,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_prctl_00027060)(__option);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevAttr @ 00011904 size=12 ===== */

void RK_MPI_VI_GetDevAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_GetDevAttr_00027064)();
  return;
}



/* ===== <EXTERNAL>::setenv @ 00011910 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setenv(char *__name,char *__value,int __replace)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setenv_00027068)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::malloc @ 0001191c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0002706c)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_aldch_v21_SetAttrib @ 00011928 size=12 ===== */

void rk_aiq_user_api2_aldch_v21_SetAttrib(void)

{
  (*(code *)PTR_rk_aiq_user_api2_aldch_v21_SetAttrib_00027070)();
  return;
}



/* ===== <EXTERNAL>::strrchr @ 00011934 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strrchr_00027074)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::fopen64 @ 0001194c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen64_0002707c)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_setMirrorFlip @ 00011958 size=12 ===== */

void rk_aiq_uapi2_setMirrorFlip(void)

{
  (*(code *)PTR_rk_aiq_uapi2_setMirrorFlip_00027080)();
  return;
}



/* ===== <EXTERNAL>::setlinebuf @ 00011964 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void setlinebuf(FILE *__stream)

{
  (*(code *)PTR_setlinebuf_00027084)(__stream);
  return;
}



/* ===== <EXTERNAL>::strlen @ 00011970 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00027088)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::pthread_mutex_lock @ 0001197c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_0002708c)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::snprintf @ 00011988 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_00027090)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_aldch_v21_GetAttrib @ 00011994 size=12 ===== */

void rk_aiq_user_api2_aldch_v21_GetAttrib(void)

{
  (*(code *)PTR_rk_aiq_user_api2_aldch_v21_GetAttrib_00027094)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnAttr @ 000119a0 size=12 ===== */

void RK_MPI_VI_SetChnAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetChnAttr_00027098)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_UnBind @ 000119ac size=12 ===== */

void RK_MPI_SYS_UnBind(void)

{
  (*(code *)PTR_RK_MPI_SYS_UnBind_0002709c)();
  return;
}



/* ===== <EXTERNAL>::sem_destroy @ 000119b8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sem_destroy(sem_t *__sem)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sem_destroy_000270a0)(__sem);
  return iVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_prepare @ 000119c4 size=12 ===== */

void rk_aiq_uapi2_camgroup_prepare(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_prepare_000270a4)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 000119d0 size=12 ===== */

void RK_MPI_SYS_Init(void)

{
  (*(code *)PTR_RK_MPI_SYS_Init_000270a8)();
  return;
}



/* ===== <EXTERNAL>::pthread_mutex_destroy @ 000119dc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_000270ac)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId @ 000119e8 size=12 ===== */

void rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId_000270b0)();
  return;
}



/* ===== <EXTERNAL>::fclose @ 000119f4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_000270b4)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::fread @ 00011a00 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fread_000270b8)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_PauseChn @ 00011a0c size=12 ===== */

void RK_MPI_VI_PauseChn(void)

{
  (*(code *)PTR_RK_MPI_VI_PauseChn_000270bc)();
  return;
}



/* ===== <EXTERNAL>::RK_LOG @ 00011a18 size=12 ===== */

void RK_LOG(void)

{
  (*(code *)PTR_RK_LOG_000270c0)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_getCamInfos @ 00011a24 size=12 ===== */

void rk_aiq_uapi2_camgroup_getCamInfos(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_getCamInfos_000270c4)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_ResumeChn @ 00011a30 size=12 ===== */

void RK_MPI_VI_ResumeChn(void)

{
  (*(code *)PTR_RK_MPI_VI_ResumeChn_000270c8)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_start @ 00011a3c size=12 ===== */

void rk_aiq_uapi2_camgroup_start(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_start_000270cc)();
  return;
}



/* ===== <EXTERNAL>::pthread_create @ 00011a48 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_000270d0)(__newthread);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChnExt @ 00011a54 size=12 ===== */

void RK_MPI_VI_DisableChnExt(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableChnExt_000270d4)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetChnFrame @ 00011a60 size=12 ===== */

void RK_MPI_VI_GetChnFrame(void)

{
  (*(code *)PTR_RK_MPI_VI_GetChnFrame_000270d8)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChnExt @ 00011a6c size=12 ===== */

void RK_MPI_VI_EnableChnExt(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableChnExt_000270dc)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevBindPipe @ 00011a78 size=12 ===== */

void RK_MPI_VI_SetDevBindPipe(void)

{
  (*(code *)PTR_RK_MPI_VI_SetDevBindPipe_000270e0)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_prepare @ 00011a84 size=12 ===== */

void rk_aiq_uapi2_sysctl_prepare(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_prepare_000270e4)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevIsEnable @ 00011a90 size=12 ===== */

void RK_MPI_VI_GetDevIsEnable(void)

{
  (*(code *)PTR_RK_MPI_VI_GetDevIsEnable_000270e8)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_init @ 00011a9c size=12 ===== */

void rk_aiq_uapi2_sysctl_init(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_init_000270ec)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableDev @ 00011aa8 size=12 ===== */

void RK_MPI_VI_EnableDev(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableDev_000270f0)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_start @ 00011ab4 size=12 ===== */

void rk_aiq_uapi2_sysctl_start(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_start_000270f4)();
  return;
}



/* ===== <EXTERNAL>::fflush @ 00011ac0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_000270f8)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 00011acc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_000270fc)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_ae_getExpSwAttr @ 00011ad8 size=12 ===== */

void rk_aiq_user_api2_ae_getExpSwAttr(void)

{
  (*(code *)PTR_rk_aiq_user_api2_ae_getExpSwAttr_00027100)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_preInit_devBufCnt @ 00011ae4 size=12 ===== */

void rk_aiq_uapi2_sysctl_preInit_devBufCnt(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_preInit_devBufCnt_00027104)();
  return;
}



/* ===== <EXTERNAL>::fprintf @ 00011af0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00027108)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_ChnSaveFile @ 00011afc size=12 ===== */

void RK_MPI_VI_ChnSaveFile(void)

{
  (*(code *)PTR_RK_MPI_VI_ChnSaveFile_0002710c)();
  return;
}



/* ===== <EXTERNAL>::abort @ 00011b08 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00027110)();
  return;
}



/* ===== <EXTERNAL>::sprintf @ 00011b14 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_00027114)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::fseek @ 00011b20 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fseek_00027118)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 00011b2c size=12 ===== */

void RK_MPI_MB_Handle2VirAddr(void)

{
  (*(code *)PTR_RK_MPI_MB_Handle2VirAddr_0002711c)();
  return;
}



/* ===== <EXTERNAL>::pthread_mutex_unlock @ 00011b38 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_00027120)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_deinit @ 00011b44 size=12 ===== */

void rk_aiq_uapi2_sysctl_deinit(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_deinit_00027124)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_stop @ 00011b50 size=12 ===== */

void rk_aiq_uapi2_sysctl_stop(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_stop_00027128)();
  return;
}



/* ===== <EXTERNAL>::sem_post @ 00011b5c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sem_post(sem_t *__sem)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sem_post_0002712c)(__sem);
  return iVar1;
}



/* ===== <EXTERNAL>::strcmp @ 00011b68 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_00027130)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetEptz @ 00011b74 size=12 ===== */

void RK_MPI_VI_SetEptz(void)

{
  (*(code *)PTR_RK_MPI_VI_SetEptz_00027134)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevAttr @ 00011b80 size=12 ===== */

void RK_MPI_VI_SetDevAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetDevAttr_00027138)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChn @ 00011b8c size=12 ===== */

void RK_MPI_VI_EnableChn(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableChn_0002713c)();
  return;
}



/* ===== <EXTERNAL>::free @ 00011b98 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00027140)(__ptr);
  return;
}



/* ===== <EXTERNAL>::atoi @ 00011ba4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_00027144)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::printf @ 00011bb0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00027148)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::getopt_long @ 00011bbc size=12 ===== */

void getopt_long(void)

{
  (*(code *)PTR_getopt_long_0002714c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableDev @ 00011bc8 size=12 ===== */

void RK_MPI_VI_DisableDev(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableDev_00027150)();
  return;
}



/* ===== <EXTERNAL>::puts @ 00011bd4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00027154)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_stop @ 00011be0 size=12 ===== */

void rk_aiq_uapi2_camgroup_stop(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_stop_00027158)();
  return;
}



/* ===== <EXTERNAL>::signal @ 00011bec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = (__sighandler_t)(*(code *)PTR_signal_0002715c)(__sig);
  return p_Var1;
}



/* ===== <EXTERNAL>::strcpy @ 00011bf8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_00027160)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00011c04 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00027164)();
  return;
}



/* ===== <EXTERNAL>::sem_wait @ 00011c10 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sem_wait(sem_t *__sem)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sem_wait_00027168)(__sem);
  return iVar1;
}



/* ===== <EXTERNAL>::pthread_join @ 00011c1c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_0002716c)(__th);
  return iVar1;
}



/* ===== FUN_00011c28 @ 00011c28 size=1724 ===== */

undefined4 FUN_00011c28(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int *piVar2;
  char *pcVar3;
  void *pvVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  pthread_t *ppVar12;
  char *pcVar13;
  char *pcVar14;
  char *__nptr;
  undefined4 uVar15;
  int local_50;
  int local_4c;
  char *local_48;
  int local_44;
  char *local_40;
  int local_3c;
  int local_38;
  pthread_t local_2c [2];
  
  if (param_1 < 2) {
    FUN_0001300c(*param_2);
  }
  else {
    pvVar4 = malloc(0x390);
    *DAT_000122e8 = (int)pvVar4;
    if (pvVar4 == (void *)0x0) {
      uVar15 = 0x222;
      uVar11 = DAT_000122ec;
    }
    else {
      memset(pvVar4,0,0x390);
      puVar5 = malloc(0x38);
      *DAT_00012300 = (int)puVar5;
      if (puVar5 == (undefined4 *)0x0) {
        uVar15 = 0x229;
        uVar11 = DAT_00012304;
      }
      else {
        uVar11 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        puVar5[8] = 0;
        puVar5[9] = uVar11;
        puVar5[9] = 500;
        uVar15 = DAT_00012308;
        puVar5[6] = 0;
        puVar5[7] = uVar11;
        puVar5[7] = 0xffffffff;
        puVar5[10] = 0;
        puVar5[0xb] = uVar11;
        puVar5[0xd] = uVar15;
        *puVar5 = 0;
        puVar5[1] = uVar11;
        puVar5[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        puVar5[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        puVar5[4] = 0;
        puVar5[5] = uVar11;
        puVar5[0xb] = 0;
        puVar5[0xc] = uVar11;
        sem_init(DAT_0001230c,0,0);
        iVar6 = pthread_mutex_init(DAT_00012310,(pthread_mutexattr_t *)0x0);
        if (iVar6 == 0) {
          signal(2,DAT_00012318);
          local_50 = -1;
          local_44 = -1;
          local_3c = 0x438;
          local_38 = 0x780;
          iVar6 = 0;
          iVar8 = 0;
          iVar10 = 0;
          local_4c = 0;
          pcVar13 = (char *)0x0;
          pcVar3 = (char *)0x0;
          local_40 = (char *)0x0;
LAB_00011d94:
          do {
            local_48 = pcVar3;
            iVar7 = getopt_long(param_1,param_2,DAT_00012320,DAT_0001231c,0);
            if (iVar7 == -1) {
              if (pcVar13 != (char *)0x0) {
                printf(DAT_00012324,pcVar13);
                printf(DAT_00012328,0);
                uVar15 = DAT_0001232c;
                uVar11 = DAT_000122f4;
                iVar7 = *DAT_00012300;
                *(int *)(iVar7 + 0x20) = iVar10;
                *(int *)(iVar7 + 0x2c) = iVar8;
                *(undefined4 *)(iVar7 + 0x14) = 0;
                *(char **)(iVar7 + 0x30) = pcVar13;
                iVar7 = iVar8;
                RK_LOG(2,uVar11,uVar15,DAT_000122fc,0x2d3,iVar8);
                iVar8 = FUN_00013bbc(iVar10,iVar8,0,pcVar13);
                iVar9 = FUN_00014178(iVar10);
                if (iVar8 != 0 || iVar9 != 0) {
                  RK_LOG(2,DAT_000122f4,DAT_00012330,DAT_000122fc,0x2d7,iVar7);
                  *DAT_000122e4 = 0xffffffff;
                  goto LAB_0001201c;
                }
              }
              iVar8 = RK_MPI_SYS_Init();
              piVar1 = DAT_000122e8;
              if (iVar8 == 0) {
                iVar8 = *DAT_000122e8;
                *(int *)(iVar8 + 0x10) = local_38;
                *(int *)(iVar8 + 0x1c) = iVar10;
                *(int *)(iVar8 + 0x20) = iVar10;
                *(int *)(iVar8 + 0x14) = local_3c;
                *(int *)(iVar8 + 0xa8) = iVar6;
                *(undefined4 *)(iVar8 + 0xb4) = 0;
                *(int *)(iVar8 + 0x24) = local_4c;
                *(undefined4 *)(iVar8 + 0xd0) = 2;
                *(undefined4 *)(iVar8 + 0xdc) = 4;
                *(undefined4 *)(iVar8 + 0xc0) = 1;
                *(int *)(iVar8 + 0xc4) = local_50;
                *(int *)(iVar8 + 200) = local_50;
                *(char **)(iVar8 + 0x388) = local_40;
                *(int *)(iVar8 + 0x18) = local_44;
                if (local_48 != (char *)0x0) {
                  strcpy((char *)(iVar8 + 0xe0),local_48);
                }
                iVar6 = FUN_000130e8(iVar8);
                piVar2 = DAT_00012300;
                uVar11 = DAT_000122f4;
                if (iVar6 == 0) {
                  pthread_create((pthread_t *)*DAT_00012300,(pthread_attr_t *)0x0,DAT_00012360,
                                 (void *)*piVar1);
                  pvVar4 = (void *)*piVar2;
                  if (*(int *)((int)pvVar4 + 0x18) != 0) {
                    *(undefined4 *)((int)pvVar4 + 0x10) = 1;
                    pthread_create(local_2c,(pthread_attr_t *)0x0,DAT_00012364,pvVar4);
                  }
                  printf(DAT_0001236c,DAT_00012368);
                  while (iVar6 = *piVar2, *(int *)(iVar6 + 4) == 0) {
                    sleep(1);
                  }
                  if (*(int *)(iVar6 + 0x18) != 0) {
                    *(undefined4 *)(iVar6 + 0xc) = 1;
                    pthread_join(local_2c[0],(void **)0x0);
                  }
                  ppVar12 = (pthread_t *)*piVar2;
                  ppVar12[2] = 1;
                  pthread_join(*ppVar12,(void **)0x0);
                  FUN_0001356c(*piVar1);
                }
                else {
                  *DAT_000122e4 = 0xffffffff;
                  RK_LOG(2,uVar11,DAT_0001235c,DAT_000122fc,0x2f8,iVar6);
                }
              }
              else {
                *DAT_000122e4 = 0xffffffff;
              }
              RK_MPI_SYS_Exit();
              if (pcVar13 != (char *)0x0) {
                FUN_00014070(iVar10);
              }
LAB_0001201c:
              piVar1 = DAT_000122e8;
              if ((void *)*DAT_000122e8 != (void *)0x0) {
                free((void *)*DAT_000122e8);
                *piVar1 = 0;
              }
              piVar1 = DAT_00012300;
              if ((void *)*DAT_00012300 != (void *)0x0) {
                free((void *)*DAT_00012300);
                *piVar1 = 0;
              }
              sem_destroy(DAT_0001230c);
              pthread_mutex_destroy(DAT_00012310);
              goto LAB_00011c54;
            }
            __nptr = (char *)*DAT_00012334;
            pcVar3 = local_48;
            if (iVar7 == 0x6d) {
              iVar9 = *DAT_00012300;
              iVar7 = atoi(__nptr);
              *(int *)(iVar9 + 0x18) = iVar7;
              goto LAB_00011d94;
            }
            if (iVar7 < 0x6e) {
              pcVar3 = __nptr;
              if (iVar7 != 100) {
                if (iVar7 < 0x65) {
                  if (iVar7 == 0x61) {
                    pcVar13 = __nptr;
                    pcVar3 = local_48;
                    if (__nptr == (char *)0x0) {
                      pcVar14 = (char *)param_2[*DAT_0001233c];
                      pcVar13 = pcVar14;
                      if ((pcVar14 != (char *)0x0) && (pcVar13 = __nptr, *pcVar14 != '-')) {
                        *DAT_0001233c = *DAT_0001233c + 1;
                        pcVar13 = pcVar14;
                      }
                    }
                  }
                  else if (iVar7 == 99) {
                    iVar7 = atoi(__nptr);
                    *(int *)(*DAT_00012300 + 0x24) = iVar7;
                    pcVar3 = local_48;
                  }
                  else {
                    if (iVar7 != 0x49) goto LAB_00012100;
                    iVar10 = atoi(__nptr);
                    pcVar3 = local_48;
                  }
                }
                else if (iVar7 == 0x68) {
                  local_3c = atoi(__nptr);
                  pcVar3 = local_48;
                }
                else if (iVar7 == 0x6c) {
                  local_44 = atoi(__nptr);
                  pcVar3 = local_48;
                }
                else {
                  if (iVar7 != 0x66) goto LAB_00012100;
                  local_50 = atoi(__nptr);
                  pcVar3 = local_48;
                }
              }
            }
            else if (iVar7 == 0xcf) {
              *(char **)(*DAT_00012300 + 0x34) = __nptr;
            }
            else if (iVar7 < 0xd0) {
              if (iVar7 == 0x77) {
                local_38 = atoi(__nptr);
              }
              else if (iVar7 == 0xcc) {
                local_4c = atoi(__nptr);
              }
              else {
                local_40 = __nptr;
                if (iVar7 != 0x6f) {
LAB_00012100:
                  FUN_0001300c(*param_2);
                  return 0;
                }
              }
            }
            else if (iVar7 == 0xd6) {
              iVar6 = strcmp(__nptr,DAT_00012340);
              if (iVar6 != 0) {
                iVar6 = strcmp(__nptr,DAT_00012344);
                if (iVar6 == 0) {
                  iVar6 = 2;
                }
                else {
                  iVar6 = strcmp(__nptr,DAT_00012348);
                  if (iVar6 == 0) {
                    iVar6 = 10;
                  }
                  else {
                    iVar6 = strcmp(__nptr,DAT_0001234c);
                    if (iVar6 == 0) {
                      iVar6 = 0x10000;
                    }
                    else {
                      iVar7 = strcmp(__nptr,DAT_00012350);
                      iVar6 = DAT_00012358;
                      if (iVar7 != 0) {
                        RK_LOG(2,DAT_000122f4,DAT_00012354,DAT_000122fc,0x291);
                        goto LAB_00012014;
                      }
                    }
                    local_4c = 1;
                  }
                }
              }
            }
            else if (iVar7 == 0xe0) {
              iVar9 = *DAT_00012300;
              iVar7 = atoi(__nptr);
              *(int *)(iVar9 + 0x1c) = iVar7;
            }
            else {
              if (iVar7 != 0xd5) goto LAB_00012100;
              iVar8 = atoi(__nptr);
              if (iVar8 != 0) {
                if (iVar8 != 1) {
                  RK_LOG(2,DAT_000122f4,DAT_00012338,DAT_000122fc,0x2ae);
                  *DAT_000122e4 = 0xffffffff;
LAB_00012014:
                  FUN_0001300c(*param_2);
                  goto LAB_0001201c;
                }
                iVar8 = 0x10;
              }
            }
          } while( true );
        }
        uVar15 = 0x235;
        uVar11 = DAT_00012314;
      }
    }
    RK_LOG(2,DAT_000122f4,uVar11,DAT_000122f0,uVar15);
    RK_LOG(2,DAT_000122f4,DAT_000122f8,DAT_000122fc,0x267);
  }
  *DAT_000122e4 = 0xffffffff;
LAB_00011c54:
  return *DAT_000122e4;
}



/* ===== entry @ 00012370 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00027078)
            (DAT_000123a4,param_2,&stack0x00000004,DAT_000123a8,DAT_000123a0,param_1);
  return;
}



/* ===== FUN_000123ac @ 000123ac size=32 ===== */

void FUN_000123ac(void)

{
  if (DAT_000123d0 == DAT_000123cc) {
    return;
  }
  if (DAT_000123d4 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000123c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000123d4)();
  return;
}



/* ===== _FINI_0 @ 00012410 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_0001244c;
  if (*DAT_0001244c != '\0') {
    return;
  }
  FUN_000123ac();
  if (DAT_00012450 != 0) {
    __deregister_frame_info(DAT_00012454);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00012458 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_0001247c != 0) {
    __register_frame_info(DAT_00012484,DAT_00012480);
  }
  if ((DAT_00012408 - DAT_00012404 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_0001240c == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00012400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0001240c)();
  return;
}



/* ===== FUN_00012488 @ 00012488 size=72 ===== */

void FUN_00012488(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  RK_LOG(2,DAT_000124d8,DAT_000124d0,DAT_000124d4,0x4a,param_1,param_2,param_4);
  *DAT_000124dc = 0xffffffff;
  *(undefined4 *)(*DAT_000124e0 + 4) = 1;
  return;
}



/* ===== FUN_000124e4 @ 000124e4 size=60 ===== */

void FUN_000124e4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  RK_LOG(2,DAT_00012528,DAT_00012520,DAT_00012524,0x50,param_1,param_2,param_4);
  *(undefined4 *)(*DAT_0001252c + 4) = 1;
  return;
}



/* ===== FUN_00012530 @ 00012530 size=52 ===== */

void FUN_00012530(void)

{
  pthread_mutex_t *__mutex;
  
  __mutex = DAT_00012564;
  pthread_mutex_lock(DAT_00012564);
  *(undefined4 *)(*DAT_00012568 + 0x28) = 0;
  pthread_mutex_unlock(__mutex);
  sem_wait(DAT_0001256c);
  return;
}



/* ===== FUN_00012570 @ 00012570 size=1988 ===== */

undefined4 FUN_00012570(void)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  
  piVar1 = DAT_00012d4c;
  prctl(0xf,DAT_00012d50);
  sleep(3);
  FUN_00013980(DAT_00012d54,*(undefined4 *)(*piVar1 + 0x18));
  uVar3 = *(int *)(*piVar1 + 0x18) - 1;
                    /* WARNING: Could not recover jumptable at 0x000125b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (uVar3 < 6) {
    uVar2 = (*(code *)(&switchD_000125b0::switchdataD_000125b8)[uVar3])();
    return uVar2;
  }
  RK_LOG(2,DAT_00012d58,DAT_00012df0,DAT_00012d7c,0x217,*(int *)(*piVar1 + 0x18));
  FUN_00013980(DAT_00012d74,*(undefined4 *)(*piVar1 + 0x18));
  RK_LOG(2,DAT_00012d58,DAT_00012d78,DAT_00012d7c,0x21a);
  return 0;
}



/* ===== FUN_00012df4 @ 00012df4 size=444 ===== */

undefined4 FUN_00012df4(int param_1)

{
  undefined4 uVar1;
  pthread_mutex_t *__mutex;
  int *piVar2;
  FILE *__s;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  void *local_124;
  char acStack_120 [260];
  
  local_124 = (void *)0x0;
  memset(acStack_120,0,0xff);
  __s = (FILE *)0x0;
  if (*(int *)(param_1 + 0x388) != 0) {
    snprintf(acStack_120,0xff,DAT_00012fb0,*(int *)(param_1 + 0x388),*(undefined4 *)(param_1 + 0x1c)
            );
    __s = fopen64(acStack_120,DAT_00012fb4);
    if (__s == (FILE *)0x0) {
      RK_LOG(2,DAT_00012fb8,DAT_00012fbc,DAT_00012fc0,0x9f,*(undefined4 *)(param_1 + 0x1c),
             *(undefined4 *)(param_1 + 0x388));
      FUN_00012488(DAT_00012fc4,0xa0);
      return 0;
    }
  }
  piVar2 = DAT_00012fd4;
  uVar1 = DAT_00012fb8;
  iVar5 = 0;
  do {
    do {
      if (*(int *)(*piVar2 + 8) != 0) {
LAB_00012f88:
        if (__s != (FILE *)0x0) {
          fclose(__s);
        }
        return 0;
      }
      iVar3 = FUN_00013420(param_1,&local_124);
    } while (iVar3 != 0);
    iVar4 = *(int *)(param_1 + 0x18);
    bVar6 = iVar5 == iVar4;
    iVar3 = iVar5 - iVar4;
    if (iVar5 >= iVar4) {
      bVar6 = iVar4 == 0;
      iVar3 = iVar4;
    }
    if (!bVar6 && iVar3 < 0 == (iVar5 < iVar4 && SBORROW4(iVar5,iVar4))) {
      FUN_0001351c(param_1);
      FUN_000124e4(DAT_00012fc4,0xac);
      goto LAB_00012f88;
    }
    if (__s != (FILE *)0x0) {
      fwrite(local_124,1,(uint)(*(int *)(param_1 + 0x31c) * *(int *)(param_1 + 800) * 3) >> 1,__s);
      fflush(__s);
    }
    iVar5 = iVar5 + 1;
    FUN_0001351c(param_1);
    if (*(int *)(*piVar2 + 0x10) != 0) {
      pthread_mutex_lock(DAT_00012fc8);
      __mutex = DAT_00012fc8;
      *(int *)(*piVar2 + 0x28) = *(int *)(*piVar2 + 0x28) + 1;
      pthread_mutex_unlock(__mutex);
      if (*(int *)(*piVar2 + 0x28) == *(int *)(*piVar2 + 0x24)) {
        sem_post(DAT_00012fcc);
      }
    }
    RK_LOG(2,uVar1,DAT_00012fd0,DAT_00012fc0,0xc5,iVar5);
  } while( true );
}



/* ===== FUN_0001300c @ 0001300c size=152 ===== */

void FUN_0001300c(undefined4 param_1)

{
  puts(DAT_000130a4);
  printf(DAT_000130a8,param_1);
  puts(DAT_000130ac);
  puts(DAT_000130b0);
  puts(DAT_000130b4);
  puts(DAT_000130b8);
  puts(DAT_000130bc);
  puts(DAT_000130c0);
  puts(DAT_000130c4);
  puts(DAT_000130c8);
  puts(DAT_000130cc);
  puts(DAT_000130d0);
  puts(DAT_000130d4);
  puts(DAT_000130d8);
  puts(DAT_000130dc);
  puts(DAT_000130e0);
  puts(DAT_000130e4);
  return;
}



/* ===== FUN_000130e8 @ 000130e8 size=764 ===== */

int FUN_000130e8(int *param_1)

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
  if (iVar1 == DAT_000133e4) {
    iVar1 = RK_MPI_VI_SetDevAttr(param_1[7],param_1 + 0x10);
    if (iVar1 == 0) goto LAB_00013160;
    uVar7 = 0x29;
    uVar5 = DAT_000133e8;
  }
  else {
    RK_LOG(2,DAT_000133f0,DAT_000133f4,DAT_000133ec,0x2d);
LAB_00013160:
    iVar1 = RK_MPI_VI_GetDevIsEnable(param_1[7]);
    if (iVar1 == 0) {
      RK_LOG(2,DAT_000133f0,DAT_00013404,DAT_000133ec,0x42);
LAB_0001321c:
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
            uVar5 = DAT_0001340c;
LAB_0001329c:
            RK_LOG(2,DAT_000133f0,uVar5,DAT_000133ec,uVar7,uVar6);
            return -1;
          }
          local_1c = 1;
          local_14 = param_1[4] * uVar4 * 3 >> 1;
          uStack_18 = uVar4;
          uVar6 = RK_MPI_VI_SetChnWrapBufAttr(param_1[8],param_1[9],&local_1c);
          if (uVar6 != 0) {
            uVar7 = 0x59;
            uVar5 = DAT_00013410;
            goto LAB_0001329c;
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
            uVar5 = DAT_0001341c;
            goto LAB_000133dc;
          }
          uVar7 = 0x6d;
          uVar5 = DAT_00013418;
          goto LAB_000131d0;
        }
        RK_LOG(2,DAT_000133f0,DAT_00013414,DAT_000133ec,0x66,iVar1,param_1[8],param_1[9]);
      }
      else {
        uVar7 = 0x4a;
        uVar5 = DAT_00013408;
LAB_000131d0:
        RK_LOG(2,DAT_000133f0,uVar5,DAT_000133ec,uVar7,iVar1);
      }
      iVar1 = RK_MPI_VI_DisableDev(param_1[7]);
      uVar7 = 0x7d;
      uVar5 = DAT_00013400;
    }
    else {
      iVar1 = RK_MPI_VI_EnableDev(param_1[7]);
      if (iVar1 == 0) {
        param_1[0x17] = 1;
        param_1[0x18] = param_1[8];
        iVar1 = RK_MPI_VI_SetDevBindPipe(param_1[7],param_1 + 0x17);
        if (iVar1 == 0) goto LAB_0001321c;
        uVar7 = 0x3e;
        uVar5 = DAT_000133fc;
        goto LAB_000131d0;
      }
      uVar7 = 0x36;
      uVar5 = DAT_000133f8;
    }
  }
  uVar2 = 2;
  iVar3 = iVar1;
LAB_000133dc:
  RK_LOG(uVar2,DAT_000133f0,uVar5,DAT_000133ec,uVar7,iVar3);
  return iVar1;
}



/* ===== FUN_00013420 @ 00013420 size=236 ===== */

undefined4 FUN_00013420(int param_1,undefined4 *param_2)

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
    RK_LOG(5,DAT_00013510,DAT_0001350c,DAT_00013514,0x92,*(undefined4 *)(param_1 + 0x1c),
           *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),uVar2,
           *(undefined4 *)(param_1 + 0x380),*(undefined4 *)(param_1 + 900),
           *(undefined4 *)(param_1 + 0x368),*(undefined4 *)(param_1 + 0x374),
           *(undefined4 *)(param_1 + 0x378),*(undefined4 *)(param_1 + 0x36c),
           *(undefined4 *)(param_1 + 0x37c));
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
    RK_LOG(2,DAT_00013510,DAT_00013518,DAT_00013514,0x94,*(undefined4 *)(param_1 + 0x1c),iVar1);
  }
  return uVar2;
}



/* ===== FUN_0001351c @ 0001351c size=68 ===== */

undefined4 FUN_0001351c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = RK_MPI_VI_ReleaseChnFrame
                    (*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),param_1 + 0x318
                     ,param_4,param_1,param_2,param_3);
  if (iVar1 != 0) {
    RK_LOG(2,DAT_00013568,DAT_00013564,DAT_00013560,0xa0,iVar1);
  }
  return 0;
}



/* ===== FUN_0001356c @ 0001356c size=104 ===== */

uint FUN_0001356c(int param_1,undefined4 param_2,undefined4 param_3)

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
    RK_LOG(2,DAT_000135dc,DAT_000135d8,DAT_000135d4,0xaf,uVar1);
  }
  return uVar1;
}



/* ===== FUN_000135e0 @ 000135e0 size=368 ===== */

void FUN_000135e0(undefined4 param_1,int param_2)

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
  
  piVar2 = DAT_00013770;
  piVar1 = DAT_0001376c;
  iVar7 = *DAT_0001376c;
  *DAT_00013770 = *DAT_00013770 + param_2;
  ptVar4 = DAT_00013778;
  if (iVar7 == 0) {
    gettimeofday(DAT_00013774,(__timezone_ptr_t)0x0);
  }
  else if (iVar7 == 100) {
    gettimeofday(DAT_00013778,(__timezone_ptr_t)0x0);
    ptVar3 = DAT_00013774;
    printf(DAT_0001377c,param_1);
    printf(DAT_00013780,ptVar3->tv_sec,ptVar3->tv_usec);
    printf(DAT_00013784,ptVar4->tv_sec,ptVar4->tv_usec);
    piVar5 = DAT_00013788;
    iVar7 = ptVar4->tv_sec - ptVar3->tv_sec;
    iVar6 = ptVar4->tv_usec - ptVar3->tv_usec;
    *DAT_00013788 = iVar7;
    piVar5[1] = iVar6;
    if (iVar6 < 0) {
      *piVar5 = iVar7 + -1;
      piVar5[1] = iVar6 + 1000000;
    }
    dVar9 = (double)VectorSignedToFloat(*piVar5,(byte)(in_fpscr >> 0x16) & 3);
    dVar10 = (double)VectorSignedToFloat(piVar5[1],(byte)(in_fpscr >> 0x16) & 3);
    fVar8 = (float)VectorSignedToFloat(*piVar2,(byte)(in_fpscr >> 0x16) & 3);
    dVar9 = dVar10 / DAT_00013750 + dVar9 * DAT_00013750;
    printf(DAT_0001378c,100,SUB84(dVar9,0),(int)((ulonglong)dVar9 >> 0x20),
           ((double)(fVar8 * 8.0 * DAT_00013768) / dVar9) * DAT_00013758 * DAT_00013758);
    printf(DAT_00013790);
    printf(DAT_00013794);
    puts(DAT_00013798);
    *piVar1 = 0;
    *piVar2 = 0;
    return;
  }
  *piVar1 = iVar7 + 1;
  return;
}



/* ===== FUN_00013980 @ 00013980 size=72 ===== */

undefined4 FUN_00013980(undefined4 param_1,undefined4 param_2)

{
  char acStack_110 [260];
  
  system(DAT_000139c8);
  sprintf(acStack_110,DAT_000139cc,param_1,param_2);
  system(acStack_110);
  system(DAT_000139d0);
  return 0;
}



/* ===== FUN_000139d4 @ 000139d4 size=288 ===== */

undefined4 FUN_000139d4(char *param_1,char *param_2,size_t param_3,undefined4 *param_4)

{
  FILE *__stream;
  FILE *__stream_00;
  size_t sVar1;
  uint unaff_r4;
  
  __stream = fopen64(param_1,DAT_00013af4);
  __stream_00 = fopen64(param_2,DAT_00013af4);
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
    RK_LOG(2,DAT_00013b00,DAT_00013b04,DAT_00013af8,0xa0,param_1,param_2);
  }
  else {
    RK_LOG(2,DAT_00013b00,DAT_00013afc,DAT_00013af8,0x9a,param_1,param_2,__stream,__stream_00);
    if (__stream == (FILE *)0x0) goto LAB_00013a60;
  }
  fclose(__stream);
LAB_00013a60:
  if (__stream_00 != (FILE *)0x0) {
    fclose(__stream_00);
  }
  return 0xffffffff;
}



/* ===== FUN_00013bbc @ 00013bbc size=236 ===== */

undefined4 FUN_00013bbc(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  char *__format;
  undefined4 uVar2;
  char acStack_158 [16];
  undefined1 auStack_148 [304];
  
  iVar1 = DAT_00013cb4;
  if (param_1 < 8) {
    setlinebuf((FILE *)*DAT_00013cb0);
    __format = DAT_00013cc0;
    if (param_4 == 0) {
      puts(DAT_00013cb8);
      uVar2 = 0;
    }
    else {
      *(undefined4 *)(DAT_00013cbc + param_1 * 4) = param_2;
      snprintf(acStack_158,0x10,__format,param_2);
      setenv(DAT_00013cc4,acStack_158,1);
      rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId(param_1,auStack_148);
      printf(DAT_00013cc8,param_1,auStack_148,param_4);
      rk_aiq_uapi2_sysctl_preInit_devBufCnt(auStack_148,DAT_00013ccc,2);
      uVar2 = rk_aiq_uapi2_sysctl_init(auStack_148,param_4,DAT_00013cd4,DAT_00013cd0);
      if (param_3 != 0) {
        rk_aiq_uapi2_sysctl_setMulCamConc(uVar2,1);
      }
    }
    *(undefined4 *)(iVar1 + param_1 * 4) = uVar2;
    uVar2 = 0;
  }
  else {
    printf(DAT_00013cac,DAT_00013ca8);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== FUN_00013cd8 @ 00013cd8 size=488 ===== */

int FUN_00013cd8(int param_1,ushort *param_2,int param_3)

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
  iVar3 = DAT_00013ec4;
  __format = DAT_00013ec0;
  __s = param_2;
  if ((int)param_2 - 1U < 2) {
    iVar4 = rk_aiq_uapi2_camgroup_getCamInfos
                      (*(undefined4 *)(DAT_00013ec4 + param_1 * 4),&local_108);
    if (iVar4 == 0) {
      piVar7 = &local_108;
      iVar4 = 0;
      for (iVar8 = 0; iVar8 < local_108; iVar8 = iVar8 + 1) {
        iVar6 = rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm
                          (*(undefined4 *)(iVar3 + param_1 * 4),piVar7[1]);
        if (iVar6 == 0) {
          puts(DAT_00013ee0);
          goto LAB_00013eb0;
        }
        printf(DAT_00013ec8,piVar7[1],piVar7[9]);
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
              puts(DAT_00013ecc);
              local_84 = -1;
            }
            else {
              uVar1 = __s[2];
              uVar2 = __s[3];
              printf(DAT_00013ed4,(uint)*__s,(uint)__s[1],(uint)uVar1,(uint)uVar2,(uint)__s[4],
                     (uint)__s[5]);
              local_84 = ((uint)uVar2 * (uint)uVar1 + 6) * 2;
            }
          }
          else {
            pcVar5 = strrchr((char *)__s,0x2f);
            __format = DAT_00013ed8;
            if (pcVar5 == (char *)0x0) goto LAB_00013e30;
            local_bc = 1;
            local_8c = 1;
            local_90 = (ushort *)0x1;
            memcpy(&local_88,__s,(size_t)(pcVar5 + (1 - (int)__s)));
            strcpy(acStack_48,pcVar5 + 1);
            printf(DAT_00013edc,&local_88,acStack_48);
          }
          iVar6 = rk_aiq_user_api2_aldch_v21_SetAttrib(iVar6,auStack_c4);
          iVar4 = 0;
          if (iVar6 != 0) {
            printf(DAT_00013ed0,iVar6);
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
LAB_00013e30:
    printf(__format,__s);
LAB_00013eb0:
    iVar4 = -1;
  }
  return iVar4;
}



/* ===== FUN_00013ee4 @ 00013ee4 size=352 ===== */

undefined4
FUN_00013ee4(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5,
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
  
  uVar1 = DAT_00014068;
  __format_00 = DAT_00014064;
  __format = DAT_00014060;
  if (param_1 < 8) {
    for (iVar4 = 0; iVar3 = DAT_00014054, iVar4 < *(int *)(param_6 + 0x20); iVar4 = iVar4 + 1) {
      iVar3 = rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId(iVar4,acStack_558);
      __s = DAT_0001404c;
      if (iVar3 != 0) goto LAB_00013f3c;
      printf(__format,param_1,iVar4,acStack_558,*(undefined4 *)(param_6 + 0x24));
      __dest = auStack_428 + iVar4 * 0x80;
      sVar2 = strlen(acStack_558);
      memcpy(__dest,acStack_558,sVar2 + 1);
      *(undefined1 **)(param_6 + iVar4 * 4) = __dest;
      printf(__format_00,iVar4,__dest);
      iVar3 = rk_aiq_uapi2_sysctl_preInit_devBufCnt(acStack_558,uVar1,2);
      __s = DAT_00014050;
      if (iVar3 != 0) goto LAB_00013f3c;
    }
    iVar4 = rk_aiq_uapi2_camgroup_create(param_6);
    *(int *)(iVar3 + param_1 * 4) = iVar4;
    __s = DAT_00014058;
    if (iVar4 != 0) {
      if (param_4 != 0) {
        FUN_00013cd8(param_1,param_4 & 0xff,param_5);
      }
      iVar4 = rk_aiq_uapi2_camgroup_prepare(*(undefined4 *)(iVar3 + param_1 * 4),param_2);
      iVar3 = rk_aiq_uapi2_camgroup_start(*(undefined4 *)(iVar3 + param_1 * 4));
      __s = DAT_0001405c;
      if (iVar4 == 0 && iVar3 == 0) {
        puts(DAT_0001406c);
        return 0;
      }
    }
LAB_00013f3c:
    puts(__s);
  }
  else {
    printf(DAT_00014048,DAT_00014044,8);
  }
  return 0xffffffff;
}



/* ===== FUN_00014070 @ 00014070 size=112 ===== */

undefined4 FUN_00014070(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_000140e0;
  if ((param_1 < 8) && (*(int *)(DAT_000140e0 + param_1 * 4) != 0)) {
    puts(DAT_000140ec);
    rk_aiq_uapi2_sysctl_stop(*(undefined4 *)(iVar1 + param_1 * 4),0);
    puts(DAT_000140f0);
    rk_aiq_uapi2_sysctl_deinit(*(undefined4 *)(iVar1 + param_1 * 4));
    puts(DAT_000140f4);
    *(undefined4 *)(iVar1 + param_1 * 4) = 0;
    return 0;
  }
  printf(DAT_000140e8,DAT_000140e4,param_1);
  return 0xffffffff;
}



/* ===== FUN_00014178 @ 00014178 size=152 ===== */

undefined4 FUN_00014178(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_00014210;
  if ((param_1 < 8) && (iVar1 = *(int *)(DAT_00014210 + param_1 * 4), iVar1 != 0)) {
    iVar1 = rk_aiq_uapi2_sysctl_prepare(iVar1,0,0,*(undefined4 *)(DAT_0001421c + param_1 * 4));
    if (iVar1 == 0) {
      puts(DAT_00014224);
      iVar2 = rk_aiq_uapi2_sysctl_start(*(undefined4 *)(iVar2 + param_1 * 4));
      if (iVar2 == 0) {
        puts(DAT_0001422c);
        return 0;
      }
      puts(DAT_00014228);
    }
    else {
      puts(DAT_00014220);
      *(undefined4 *)(iVar2 + param_1 * 4) = 0;
    }
  }
  else {
    printf(DAT_00014218,DAT_00014214);
  }
  return 0xffffffff;
}



/* ===== FUN_00014414 @ 00014414 size=204 ===== */

int FUN_00014414(uint param_1,undefined1 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_b4 [8];
  undefined1 local_ac;
  undefined1 local_ab;
  
  memset(auStack_b4,0,0x9c);
  iVar1 = DAT_000144e0;
  if ((param_1 < 8) && (iVar2 = *(int *)(DAT_000144e0 + param_1 * 4), iVar2 != 0)) {
    iVar2 = rk_aiq_user_api2_aldch_v21_GetAttrib(iVar2,auStack_b4);
    if (iVar2 == 0) {
      local_ac = param_3 != 0;
      local_ab = param_2;
      iVar2 = rk_aiq_user_api2_aldch_v21_SetAttrib(*(undefined4 *)(iVar1 + param_1 * 4),auStack_b4);
      if (iVar2 == 0) {
        return 0;
      }
      uVar4 = 0x196;
      uVar3 = DAT_000144f4;
    }
    else {
      uVar4 = 399;
      uVar3 = DAT_000144ec;
    }
    RK_LOG(2,DAT_000144f0,uVar3,DAT_000144e4,uVar4,iVar2);
  }
  else {
    iVar2 = -1;
    printf(DAT_000144e8,DAT_000144e4,8);
  }
  return iVar2;
}



/* ===== FUN_000144f8 @ 000144f8 size=204 ===== */

int FUN_000144f8(uint param_1,undefined1 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_b4 [8];
  undefined1 local_ac;
  undefined1 local_ab;
  
  memset(auStack_b4,0,0x9c);
  iVar1 = DAT_000145c4;
  if ((param_1 < 8) && (iVar2 = *(int *)(DAT_000145c4 + param_1 * 4), iVar2 != 0)) {
    iVar2 = rk_aiq_user_api2_aldch_v21_GetAttrib(iVar2,auStack_b4);
    if (iVar2 == 0) {
      local_ac = param_3 != 0;
      local_ab = param_2;
      iVar2 = rk_aiq_user_api2_aldch_v21_SetAttrib(*(undefined4 *)(iVar1 + param_1 * 4),auStack_b4);
      if (iVar2 == 0) {
        return 0;
      }
      uVar4 = 0x1b1;
      uVar3 = DAT_000145d8;
    }
    else {
      uVar4 = 0x1a9;
      uVar3 = DAT_000145d0;
    }
    RK_LOG(2,DAT_000145d4,uVar3,DAT_000145c8,uVar4,iVar2);
  }
  else {
    iVar2 = -1;
    printf(DAT_000145cc,DAT_000145c8,8);
  }
  return iVar2;
}



/* ===== _fini @ 000145dc size=16 ===== */

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



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_prepare @ 00028028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_prepare(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 0002802c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 00028030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetChnAttr @ 00028034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetChnAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_setMirrorFlip @ 00028038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_setMirrorFlip(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_lock @ 0002803c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 00028040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 00028044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_create @ 00028048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChnExt @ 0002804c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_DisableChnExt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevAttr @ 00028050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetDevAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_UnBind @ 00028054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_UnBind(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_prepare @ 00028058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_prepare(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strrchr @ 0002805c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

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



/* ===== <EXTERNAL>::sem_destroy @ 00028064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sem_destroy(sem_t *__sem)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 00028068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_unlock @ 0002806c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sem_post @ 00028070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sem_post(sem_t *__sem)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 00028074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Exit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 00028078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_LOG @ 0002807c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_LOG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 00028080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 00028084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_join @ 00028088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnAttr @ 0002808c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetChnAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_start @ 00028090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_start(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_destroy @ 00028094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 00028098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_QueryChnStatus @ 0002809c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_QueryChnStatus(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setlinebuf @ 000280a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void setlinebuf(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 000280a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sem_wait @ 000280a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sem_wait(sem_t *__sem)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sleep @ 000280ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setenv @ 000280b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setenv(char *__name,char *__value,int __replace)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_init @ 000280b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_stop @ 000280b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_stop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fread @ 000280bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gettimeofday @ 000280c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sem_init @ 000280c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sem_init(sem_t *__sem,int __pshared,uint __value)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_switch_scene @ 000280c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_switch_scene(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableDev @ 000280cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_EnableDev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_getCamInfos @ 000280d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_getCamInfos(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::prctl @ 000280d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int prctl(int __option,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChnExt @ 000280d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_EnableChnExt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::system @ 000280dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int system(char *__command)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::signal @ 000280e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Bind @ 000280e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Bind(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_stop @ 000280e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_stop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChn @ 000280ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_EnableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 000280f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_start @ 000280f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_start(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_preInit_devBufCnt @ 000280f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_preInit_devBufCnt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_destroy @ 000280fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_destroy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 00028100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 00028104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 00028108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_aldch_v21_SetAttrib @ 0002810c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_user_api2_aldch_v21_SetAttrib(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevIsEnable @ 00028110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetDevIsEnable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_setMulCamConc @ 00028114 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_setMulCamConc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_PauseChn @ 00028118 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_PauseChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevBindPipe @ 0002811c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetDevBindPipe(void)

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



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId @ 00028124 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_init @ 00028128 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_ReleaseChnFrame @ 0002812c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_ReleaseChnFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_aldch_v21_GetAttrib @ 00028130 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_user_api2_aldch_v21_GetAttrib(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00028134 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt_long @ 00028138 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void getopt_long(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_ChnSaveFile @ 0002813c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_ChnSaveFile(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_deinit @ 00028140 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_deinit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen64 @ 00028144 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fseek @ 00028148 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableDev @ 0002814c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_DisableDev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm @ 00028150 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevAttr @ 00028154 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetDevAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 00028158 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_create @ 0002815c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_create(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_ae_getExpSwAttr @ 00028160 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_user_api2_ae_getExpSwAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 00028164 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 00028168 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


