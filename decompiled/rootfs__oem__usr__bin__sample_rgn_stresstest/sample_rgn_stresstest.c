// sample_rgn_stresstest — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 000123d4 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 000123f8 size=12 ===== */

void RK_MPI_SYS_Exit(void)

{
  (*(code *)PTR_RK_MPI_SYS_Exit_0003b00c)();
  return;
}



/* ===== <EXTERNAL>::sem_init @ 00012404 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sem_init(sem_t *__sem,int __pshared,uint __value)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sem_init_0003b010)(__sem);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Bind @ 00012410 size=12 ===== */

void RK_MPI_SYS_Bind(void)

{
  (*(code *)PTR_RK_MPI_SYS_Bind_0003b014)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm @ 0001241c size=12 ===== */

void rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm_0003b018)();
  return;
}



/* ===== <EXTERNAL>::bind @ 00012428 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_bind_0003b01c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_QueryChnStatus @ 00012434 size=12 ===== */

void RK_MPI_VI_QueryChnStatus(void)

{
  (*(code *)PTR_RK_MPI_VI_QueryChnStatus_0003b020)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00012440 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_0003b024)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnWrapBufAttr @ 0001244c size=12 ===== */

void RK_MPI_VI_SetChnWrapBufAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetChnWrapBufAttr_0003b028)();
  return;
}



/* ===== <EXTERNAL>::htons @ 00012458 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint16_t htons(uint16_t __hostshort)

{
  uint16_t uVar1;
  
  uVar1 = (*(code *)PTR_htons_0003b02c)(__hostshort);
  return uVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_GetStream @ 00012464 size=12 ===== */

void RK_MPI_VENC_GetStream(void)

{
  (*(code *)PTR_RK_MPI_VENC_GetStream_0003b030)();
  return;
}



/* ===== <EXTERNAL>::calloc @ 00012470 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_0003b034)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 0001247c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_0003b038)();
  return piVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_EnableMotionDeblur @ 00012488 size=12 ===== */

void RK_MPI_VENC_EnableMotionDeblur(void)

{
  (*(code *)PTR_RK_MPI_VENC_EnableMotionDeblur_0003b03c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetComboAttr @ 00012494 size=12 ===== */

void RK_MPI_VENC_SetComboAttr(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetComboAttr_0003b040)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_destroy @ 000124a0 size=12 ===== */

void rk_aiq_uapi2_camgroup_destroy(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_destroy_0003b044)();
  return;
}



/* ===== <EXTERNAL>::clock_gettime @ 000124ac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_clock_gettime_0003b048)(__clock_id);
  return iVar1;
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_ae_setExpSwAttr @ 000124b8 size=12 ===== */

void rk_aiq_user_api2_ae_setExpSwAttr(void)

{
  (*(code *)PTR_rk_aiq_user_api2_ae_setExpSwAttr_0003b04c)();
  return;
}



/* ===== <EXTERNAL>::fwrite @ 000124c4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_0003b050)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::system @ 000124d0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int system(char *__command)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_system_0003b054)(__command);
  return iVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_switch_scene @ 000124dc size=12 ===== */

void rk_aiq_uapi2_sysctl_switch_scene(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_switch_scene_0003b058)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChn @ 000124e8 size=12 ===== */

void RK_MPI_VI_DisableChn(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableChn_0003b05c)();
  return;
}



/* ===== <EXTERNAL>::usleep @ 000124f4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_usleep_0003b060)(__useconds);
  return iVar1;
}



/* ===== <EXTERNAL>::memcpy @ 00012500 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_0003b064)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_setMulCamConc @ 0001250c size=12 ===== */

void rk_aiq_uapi2_sysctl_setMulCamConc(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_setMulCamConc_0003b068)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_RGN_DetachFromChn @ 00012518 size=12 ===== */

void RK_MPI_RGN_DetachFromChn(void)

{
  (*(code *)PTR_RK_MPI_RGN_DetachFromChn_0003b06c)();
  return;
}



/* ===== <EXTERNAL>::sleep @ 00012524 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_sleep_0003b070)(__seconds);
  return uVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_CreateChn @ 00012530 size=12 ===== */

void RK_MPI_VENC_CreateChn(void)

{
  (*(code *)PTR_RK_MPI_VENC_CreateChn_0003b074)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_ReleaseChnFrame @ 0001253c size=12 ===== */

void RK_MPI_VI_ReleaseChnFrame(void)

{
  (*(code *)PTR_RK_MPI_VI_ReleaseChnFrame_0003b078)();
  return;
}



/* ===== <EXTERNAL>::send @ 00012548 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t send(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_send_0003b07c)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::pthread_mutex_init @ 00012554 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_0003b080)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_create @ 00012560 size=12 ===== */

void rk_aiq_uapi2_camgroup_create(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_create_0003b084)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_GetMB @ 0001256c size=12 ===== */

void RK_MPI_MB_GetMB(void)

{
  (*(code *)PTR_RK_MPI_MB_GetMB_0003b088)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_EnableSvc @ 00012578 size=12 ===== */

void RK_MPI_VENC_EnableSvc(void)

{
  (*(code *)PTR_RK_MPI_VENC_EnableSvc_0003b08c)();
  return;
}



/* ===== <EXTERNAL>::gettimeofday @ 00012584 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_gettimeofday_0003b090)(__tv);
  return iVar1;
}



/* ===== <EXTERNAL>::strcat @ 00012590 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcat_0003b094)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::prctl @ 0001259c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int prctl(int __option,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_prctl_0003b098)(__option);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevAttr @ 000125a8 size=12 ===== */

void RK_MPI_VI_GetDevAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_GetDevAttr_0003b09c)();
  return;
}



/* ===== <EXTERNAL>::setenv @ 000125b4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setenv(char *__name,char *__value,int __replace)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setenv_0003b0a0)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::malloc @ 000125c0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0003b0a4)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_aldch_v21_SetAttrib @ 000125cc size=12 ===== */

void rk_aiq_user_api2_aldch_v21_SetAttrib(void)

{
  (*(code *)PTR_rk_aiq_user_api2_aldch_v21_SetAttrib_0003b0a8)();
  return;
}



/* ===== <EXTERNAL>::strrchr @ 000125d8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strrchr_0003b0ac)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::strncmp @ 000125e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_0003b0b0)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::fopen64 @ 000125fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen64_0003b0b8)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_setMirrorFlip @ 00012608 size=12 ===== */

void rk_aiq_uapi2_setMirrorFlip(void)

{
  (*(code *)PTR_rk_aiq_uapi2_setMirrorFlip_0003b0bc)();
  return;
}



/* ===== <EXTERNAL>::setlinebuf @ 00012614 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void setlinebuf(FILE *__stream)

{
  (*(code *)PTR_setlinebuf_0003b0c0)(__stream);
  return;
}



/* ===== <EXTERNAL>::recv @ 00012620 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recv(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_recv_0003b0c4)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::strlen @ 0001262c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_0003b0c8)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::pthread_mutex_lock @ 00012638 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_0003b0cc)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::ctime @ 00012644 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * ctime(time_t *__timer)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_ctime_0003b0d0)(__timer);
  return pcVar1;
}



/* ===== <EXTERNAL>::sendto @ 00012650 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t sendto(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,socklen_t __addr_len)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_sendto_0003b0d4)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::fcntl @ 0001265c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fcntl(int __fd,int __cmd,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fcntl_0003b0d8)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::snprintf @ 00012668 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_0003b0dc)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::htonl @ 00012674 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint32_t htonl(uint32_t __hostlong)

{
  uint32_t uVar1;
  
  uVar1 = (*(code *)PTR_htonl_0003b0e0)(__hostlong);
  return uVar1;
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_aldch_v21_GetAttrib @ 00012680 size=12 ===== */

void rk_aiq_user_api2_aldch_v21_GetAttrib(void)

{
  (*(code *)PTR_rk_aiq_user_api2_aldch_v21_GetAttrib_0003b0e4)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_RGN_Destroy @ 0001268c size=12 ===== */

void RK_MPI_RGN_Destroy(void)

{
  (*(code *)PTR_RK_MPI_RGN_Destroy_0003b0e8)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnAttr @ 00012698 size=12 ===== */

void RK_MPI_VI_SetChnAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetChnAttr_0003b0ec)();
  return;
}



/* ===== <EXTERNAL>::select @ 000126a4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_select_0003b0f0)(__nfds);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_UnBind @ 000126b0 size=12 ===== */

void RK_MPI_SYS_UnBind(void)

{
  (*(code *)PTR_RK_MPI_SYS_UnBind_0003b0f4)();
  return;
}



/* ===== <EXTERNAL>::sem_destroy @ 000126bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sem_destroy(sem_t *__sem)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sem_destroy_0003b0f8)(__sem);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SendFrame @ 000126c8 size=12 ===== */

void RK_MPI_VENC_SendFrame(void)

{
  (*(code *)PTR_RK_MPI_VENC_SendFrame_0003b0fc)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetChnRefBufShareAttr @ 000126d4 size=12 ===== */

void RK_MPI_VENC_SetChnRefBufShareAttr(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetChnRefBufShareAttr_0003b100)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_prepare @ 000126e0 size=12 ===== */

void rk_aiq_uapi2_camgroup_prepare(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_prepare_0003b104)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 000126ec size=12 ===== */

void RK_MPI_SYS_Init(void)

{
  (*(code *)PTR_RK_MPI_SYS_Init_0003b108)();
  return;
}



/* ===== <EXTERNAL>::pthread_mutex_destroy @ 000126f8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_0003b10c)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId @ 00012704 size=12 ===== */

void rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId_0003b110)();
  return;
}



/* ===== <EXTERNAL>::memmove @ 00012710 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_0003b114)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::fclose @ 0001271c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_0003b118)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_RGN_SetBitMap @ 00012728 size=12 ===== */

void RK_MPI_RGN_SetBitMap(void)

{
  (*(code *)PTR_RK_MPI_RGN_SetBitMap_0003b11c)();
  return;
}



/* ===== <EXTERNAL>::setsockopt @ 00012734 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setsockopt_0003b120)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::fread @ 00012740 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fread_0003b124)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::RK_MPI_RGN_AttachToChn @ 0001274c size=12 ===== */

void RK_MPI_RGN_AttachToChn(void)

{
  (*(code *)PTR_RK_MPI_RGN_AttachToChn_0003b128)();
  return;
}



/* ===== <EXTERNAL>::RK_LOG @ 00012758 size=12 ===== */

void RK_LOG(void)

{
  (*(code *)PTR_RK_LOG_0003b12c)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_getCamInfos @ 00012764 size=12 ===== */

void rk_aiq_uapi2_camgroup_getCamInfos(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_getCamInfos_0003b130)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_start @ 00012770 size=12 ===== */

void rk_aiq_uapi2_camgroup_start(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_start_0003b134)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StopRecvFrame @ 0001277c size=12 ===== */

void RK_MPI_VENC_StopRecvFrame(void)

{
  (*(code *)PTR_RK_MPI_VENC_StopRecvFrame_0003b138)();
  return;
}



/* ===== <EXTERNAL>::time @ 00012788 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_0003b13c)(__timer);
  return tVar1;
}



/* ===== <EXTERNAL>::pthread_create @ 00012794 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_0003b140)(__newthread);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_RGN_GetDisplayAttr @ 000127a0 size=12 ===== */

void RK_MPI_RGN_GetDisplayAttr(void)

{
  (*(code *)PTR_RK_MPI_RGN_GetDisplayAttr_0003b144)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetRcParam @ 000127ac size=12 ===== */

void RK_MPI_VENC_SetRcParam(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetRcParam_0003b148)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_RGN_SetDisplayAttr @ 000127b8 size=12 ===== */

void RK_MPI_RGN_SetDisplayAttr(void)

{
  (*(code *)PTR_RK_MPI_RGN_SetDisplayAttr_0003b14c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChnExt @ 000127c4 size=12 ===== */

void RK_MPI_VI_DisableChnExt(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableChnExt_0003b150)();
  return;
}



/* ===== <EXTERNAL>::close @ 000127d0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_0003b154)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetChnFrame @ 000127dc size=12 ===== */

void RK_MPI_VI_GetChnFrame(void)

{
  (*(code *)PTR_RK_MPI_VI_GetChnFrame_0003b158)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChnExt @ 000127e8 size=12 ===== */

void RK_MPI_VI_EnableChnExt(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableChnExt_0003b15c)();
  return;
}



/* ===== <EXTERNAL>::sscanf @ 000127f4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sscanf_0003b160)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::strncpy @ 00012800 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_0003b164)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetChnBufWrapAttr @ 0001280c size=12 ===== */

void RK_MPI_VENC_SetChnBufWrapAttr(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetChnBufWrapAttr_0003b168)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevBindPipe @ 00012818 size=12 ===== */

void RK_MPI_VI_SetDevBindPipe(void)

{
  (*(code *)PTR_RK_MPI_VI_SetDevBindPipe_0003b16c)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_prepare @ 00012824 size=12 ===== */

void rk_aiq_uapi2_sysctl_prepare(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_prepare_0003b170)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevIsEnable @ 00012830 size=12 ===== */

void RK_MPI_VI_GetDevIsEnable(void)

{
  (*(code *)PTR_RK_MPI_VI_GetDevIsEnable_0003b174)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_init @ 0001283c size=12 ===== */

void rk_aiq_uapi2_sysctl_init(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_init_0003b178)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableDev @ 00012848 size=12 ===== */

void RK_MPI_VI_EnableDev(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableDev_0003b17c)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_start @ 00012854 size=12 ===== */

void rk_aiq_uapi2_sysctl_start(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_start_0003b180)();
  return;
}



/* ===== <EXTERNAL>::fflush @ 00012860 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_0003b184)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 0001286c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0003b188)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::RK_MPI_RGN_Create @ 00012878 size=12 ===== */

void RK_MPI_RGN_Create(void)

{
  (*(code *)PTR_RK_MPI_RGN_Create_0003b18c)();
  return;
}



/* ===== <EXTERNAL>::inet_ntoa @ 00012884 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * inet_ntoa(in_addr __in)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_inet_ntoa_0003b190)(__in.s_addr);
  return pcVar1;
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_ae_getExpSwAttr @ 00012890 size=12 ===== */

void rk_aiq_user_api2_ae_getExpSwAttr(void)

{
  (*(code *)PTR_rk_aiq_user_api2_ae_getExpSwAttr_0003b194)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_preInit_devBufCnt @ 0001289c size=12 ===== */

void rk_aiq_uapi2_sysctl_preInit_devBufCnt(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_preInit_devBufCnt_0003b198)();
  return;
}



/* ===== <EXTERNAL>::fprintf @ 000128a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_0003b19c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::ntohs @ 000128b4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint16_t ntohs(uint16_t __netshort)

{
  uint16_t uVar1;
  
  uVar1 = (*(code *)PTR_ntohs_0003b1a0)(__netshort);
  return uVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_ChnSaveFile @ 000128c0 size=12 ===== */

void RK_MPI_VI_ChnSaveFile(void)

{
  (*(code *)PTR_RK_MPI_VI_ChnSaveFile_0003b1a4)();
  return;
}



/* ===== <EXTERNAL>::abort @ 000128cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_0003b1a8)();
  return;
}



/* ===== <EXTERNAL>::recvfrom @ 000128d8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recvfrom(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,socklen_t *__addr_len)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_recvfrom_0003b1ac)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::sprintf @ 000128e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_0003b1b0)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_MmzFlushCache @ 000128f0 size=12 ===== */

void RK_MPI_SYS_MmzFlushCache(void)

{
  (*(code *)PTR_RK_MPI_SYS_MmzFlushCache_0003b1b4)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StartRecvFrame @ 000128fc size=12 ===== */

void RK_MPI_VENC_StartRecvFrame(void)

{
  (*(code *)PTR_RK_MPI_VENC_StartRecvFrame_0003b1b8)();
  return;
}



/* ===== <EXTERNAL>::socket @ 00012908 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_socket_0003b1bc)(__domain);
  return iVar1;
}



/* ===== <EXTERNAL>::fseek @ 00012914 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fseek_0003b1c0)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 00012920 size=12 ===== */

void RK_MPI_MB_Handle2VirAddr(void)

{
  (*(code *)PTR_RK_MPI_MB_Handle2VirAddr_0003b1c4)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_ReleaseMB @ 0001292c size=12 ===== */

void RK_MPI_MB_ReleaseMB(void)

{
  (*(code *)PTR_RK_MPI_MB_ReleaseMB_0003b1c8)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_DestroyChn @ 00012938 size=12 ===== */

void RK_MPI_VENC_DestroyChn(void)

{
  (*(code *)PTR_RK_MPI_VENC_DestroyChn_0003b1cc)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetMjpegParam @ 00012944 size=12 ===== */

void RK_MPI_VENC_SetMjpegParam(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetMjpegParam_0003b1d0)();
  return;
}



/* ===== <EXTERNAL>::pthread_mutex_unlock @ 00012950 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_0003b1d4)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_deinit @ 0001295c size=12 ===== */

void rk_aiq_uapi2_sysctl_deinit(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_deinit_0003b1d8)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_stop @ 00012968 size=12 ===== */

void rk_aiq_uapi2_sysctl_stop(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_stop_0003b1dc)();
  return;
}



/* ===== <EXTERNAL>::raise @ 00012974 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_0003b1e0)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::sem_post @ 00012980 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sem_post(sem_t *__sem)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sem_post_0003b1e4)(__sem);
  return iVar1;
}



/* ===== <EXTERNAL>::strstr @ 0001298c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strstr_0003b1e8)(__haystack);
  return pcVar1;
}



/* ===== <EXTERNAL>::strcmp @ 00012998 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_0003b1ec)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_ReleaseStream @ 000129a4 size=12 ===== */

void RK_MPI_VENC_ReleaseStream(void)

{
  (*(code *)PTR_RK_MPI_VENC_ReleaseStream_0003b1f0)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetEptz @ 000129b0 size=12 ===== */

void RK_MPI_VI_SetEptz(void)

{
  (*(code *)PTR_RK_MPI_VI_SetEptz_0003b1f4)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevAttr @ 000129bc size=12 ===== */

void RK_MPI_VI_SetDevAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetDevAttr_0003b1f8)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChn @ 000129c8 size=12 ===== */

void RK_MPI_VI_EnableChn(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableChn_0003b1fc)();
  return;
}



/* ===== <EXTERNAL>::accept @ 000129d4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int accept(int __fd,sockaddr *__addr,socklen_t *__addr_len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_accept_0003b200)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 000129e0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0003b204)(__ptr);
  return;
}



/* ===== <EXTERNAL>::atoi @ 000129ec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_0003b208)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetJpegParam @ 000129f8 size=12 ===== */

void RK_MPI_VENC_SetJpegParam(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetJpegParam_0003b20c)();
  return;
}



/* ===== <EXTERNAL>::strerror @ 00012a04 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_0003b210)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::listen @ 00012a10 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int listen(int __fd,int __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_listen_0003b214)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::printf @ 00012a1c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_0003b218)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::getopt_long @ 00012a28 size=12 ===== */

void getopt_long(void)

{
  (*(code *)PTR_getopt_long_0003b21c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableDev @ 00012a34 size=12 ===== */

void RK_MPI_VI_DisableDev(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableDev_0003b220)();
  return;
}



/* ===== <EXTERNAL>::puts @ 00012a40 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_0003b224)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_stop @ 00012a4c size=12 ===== */

void rk_aiq_uapi2_camgroup_stop(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_stop_0003b228)();
  return;
}



/* ===== <EXTERNAL>::signal @ 00012a58 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = (__sighandler_t)(*(code *)PTR_signal_0003b22c)(__sig);
  return p_Var1;
}



/* ===== <EXTERNAL>::strcpy @ 00012a64 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_0003b230)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00012a70 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_0003b234)();
  return;
}



/* ===== <EXTERNAL>::sem_wait @ 00012a7c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sem_wait(sem_t *__sem)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sem_wait_0003b238)(__sem);
  return iVar1;
}



/* ===== <EXTERNAL>::pthread_join @ 00012a88 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_0003b23c)(__th);
  return iVar1;
}



/* ===== FUN_00012a98 @ 00012a98 size=3472 ===== */

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_00012a98(int param_1,undefined4 *param_2)

{
  int *piVar1;
  char *pcVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
  char *pcVar12;
  undefined4 uVar13;
  char *__nptr;
  uint uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  char *local_54;
  undefined4 local_48;
  pthread_t local_44 [3];
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  
  if (param_1 < 2) {
LAB_00012ab0:
    FUN_00013aa8(*param_2);
  }
  else {
    pvVar3 = malloc(0x2760);
    *DAT_00013828 = (int)pvVar3;
    if (pvVar3 == (void *)0x0) {
      uVar17 = 0x232;
      uVar13 = DAT_0001382c;
    }
    else {
      memset(pvVar3,0,0x2760);
      puVar4 = malloc(0x2c);
      *DAT_00013844 = (int)puVar4;
      if (puVar4 == (undefined4 *)0x0) {
        uVar17 = 0x239;
        uVar13 = DAT_00013848;
      }
      else {
        uVar13 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        puVar4[7] = 500;
        puVar4[8] = 0;
        puVar4[9] = uVar13;
        puVar4[6] = 0xffffffff;
        *puVar4 = 0;
        puVar4[1] = uVar13;
        puVar4[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        puVar4[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        puVar4[4] = 0;
        puVar4[5] = uVar13;
        puVar4[9] = 0;
        puVar4[10] = uVar13;
        sem_init(DAT_0001384c,0,0);
        iVar5 = pthread_mutex_init(DAT_00013850,(pthread_mutexattr_t *)0x0);
        if (iVar5 == 0) {
          uVar13 = 1;
          iVar5 = 5;
          uVar14 = 0x438;
          signal(2,DAT_00013858);
          local_5c = 0x19;
          local_58 = -1;
          local_60 = 0x780;
          local_64 = 0;
          pcVar12 = (char *)0x0;
          pcVar2 = (char *)0x0;
LAB_00012bf0:
          local_54 = pcVar2;
          iVar6 = getopt_long(param_1,param_2,DAT_00013860,DAT_0001385c,0);
          if (iVar6 == -1) goto code_r0x00012c18;
          __nptr = (char *)*DAT_00013874;
          pcVar2 = local_54;
          if (iVar6 == 0x69) {
            *(char **)(*DAT_00013844 + 0x24) = __nptr;
            goto LAB_00012bf0;
          }
          if (iVar6 < 0x6a) {
            if (iVar6 == 99) {
              iVar6 = atoi(__nptr);
              *(int *)(*DAT_00013844 + 0x1c) = iVar6;
              goto LAB_00012bf0;
            }
            if (iVar6 < 100) {
              if (iVar6 == 0x49) {
                *(char **)(*DAT_00013844 + 0x28) = __nptr;
              }
              else {
                if (iVar6 != 0x61) goto LAB_00012d20;
                pcVar12 = __nptr;
                if (__nptr == (char *)0x0) {
                  pcVar12 = (char *)param_2[*DAT_00013894];
                  if (pcVar12 != (char *)0x0) {
                    if (*pcVar12 == '-') {
                      pcVar12 = (char *)0x0;
                    }
                    else {
                      *DAT_00013894 = *DAT_00013894 + 1;
                    }
                  }
                }
              }
              goto LAB_00012bf0;
            }
            if (iVar6 == 0x66) {
              local_5c = atoi(__nptr);
              goto LAB_00012bf0;
            }
            if (iVar6 == 0x68) {
              uVar14 = atoi(__nptr);
              goto LAB_00012bf0;
            }
            if (iVar6 == 0x65) {
              iVar5 = strcmp(__nptr,DAT_00013878);
              if (iVar5 == 0) {
                uVar13 = 1;
              }
              else {
                iVar5 = strcmp(__nptr,DAT_0001387c);
                if (iVar5 == 0) {
                  uVar13 = 2;
                }
                else {
                  iVar5 = strcmp(__nptr,DAT_00013880);
                  if (iVar5 != 0) {
                    iVar5 = strcmp(__nptr,DAT_00013884);
                    if (iVar5 == 0) {
                      uVar13 = 8;
                    }
                    else {
                      iVar5 = strcmp(__nptr,DAT_00013888);
                      if (iVar5 == 0) {
                        uVar13 = 9;
                      }
                      else {
                        iVar5 = strcmp(__nptr,DAT_0001388c);
                        if (iVar5 != 0) {
                          puts(DAT_00013890);
                          goto LAB_00012ab0;
                        }
                        uVar13 = 10;
                      }
                    }
                    iVar5 = 6;
                    goto LAB_00012bf0;
                  }
                  uVar13 = 3;
                }
              }
              iVar5 = 5;
              goto LAB_00012bf0;
            }
          }
          else {
            pcVar2 = __nptr;
            if (iVar6 == 0x6f) goto LAB_00012bf0;
            if (iVar6 < 0x70) {
              if (iVar6 == 0x6c) {
                local_58 = atoi(__nptr);
                pcVar2 = local_54;
                goto LAB_00012bf0;
              }
              if (iVar6 == 0x6d) {
                iVar7 = *DAT_00013844;
                iVar6 = atoi(__nptr);
                *(int *)(iVar7 + 0x14) = iVar6;
                pcVar2 = local_54;
                goto LAB_00012bf0;
              }
            }
            else {
              if (iVar6 == 0x77) {
                local_60 = atoi(__nptr);
                pcVar2 = local_54;
                goto LAB_00012bf0;
              }
              if (iVar6 == 0xe0) {
                iVar7 = *DAT_00013844;
                iVar6 = atoi(__nptr);
                *(int *)(iVar7 + 0x18) = iVar6;
                pcVar2 = local_54;
                goto LAB_00012bf0;
              }
              if (iVar6 == 0x72) {
                local_64 = atoi(__nptr);
                *(int *)(*DAT_00013844 + 0x10) = local_64;
                pcVar2 = local_54;
                goto LAB_00012bf0;
              }
            }
          }
LAB_00012d20:
          FUN_00013aa8(*param_2);
          return 0;
        }
        uVar17 = 0x244;
        uVar13 = DAT_00013854;
      }
    }
    RK_LOG(2,DAT_00013834,uVar13,DAT_00013830,uVar17);
    RK_LOG(2,DAT_00013834,DAT_00013838,DAT_0001383c,0x277);
  }
  *DAT_00013840 = 0xffffffff;
  goto LAB_00012b18;
code_r0x00012c18:
  if (pcVar12 == (char *)0x0) {
LAB_00012f40:
    iVar6 = RK_MPI_SYS_Init();
    puVar4 = DAT_0001389c;
    if (iVar6 == 0) {
      iVar6 = FUN_00018e00(0x22a);
      uVar17 = DAT_000138a4;
      *DAT_000138a0 = iVar6;
      uVar17 = FUN_00018c3c(iVar6,uVar17);
      if (iVar5 == 5) {
        uVar10 = 1;
      }
      else {
        uVar10 = 2;
      }
      *puVar4 = uVar17;
      FUN_00018e70(uVar17,uVar10,0,0);
      uVar17 = *puVar4;
      uVar15 = FUN_0001dde4();
      uVar16 = FUN_0001def0();
      iVar6 = (int)((ulonglong)uVar16 >> 0x20);
      FUN_0001df28(uVar17,iVar6,(int)uVar15,(int)((ulonglong)uVar15 >> 0x20),uVar16);
      piVar1 = DAT_00013828;
      piVar8 = (int *)*DAT_00013828;
      *DAT_000138a8 = 1;
      piVar8[0x41] = local_60;
      piVar8[5] = uVar14;
      piVar8[4] = local_60;
      piVar8[7] = 0;
      piVar8[8] = 0;
      piVar8[9] = 0;
      piVar8[0x2a] = 0;
      piVar8[0x2d] = 0;
      piVar8[0x31] = -1;
      piVar8[0x32] = -1;
      piVar8[0x34] = 3;
      piVar8[0x42] = uVar14;
      *piVar8 = local_64;
      piVar8[3] = uVar14 >> 2;
      piVar8[0x37] = 4;
      piVar8[0x30] = 1;
      iVar7 = FUN_000141d0();
      uVar17 = DAT_00013834;
      if (iVar7 == 0) {
        iVar9 = *piVar1;
        *(uint *)(iVar9 + 0x3a0) = uVar14 >> 2;
        *(int *)(iVar9 + 0x3a4) = local_60;
        *(undefined4 *)(iVar9 + 0x3d8) = 0;
        *(uint *)(iVar9 + 0x3a8) = uVar14;
        *(int *)(iVar9 + 0x3ac) = local_5c;
        *(undefined4 *)(iVar9 + 0x3b0) = 0x32;
        *(undefined4 *)(iVar9 + 0x3b4) = 0x1000;
        uVar17 = DAT_000138b0;
        *(int *)(iVar9 + 0x3d0) = iVar5;
        *(undefined4 *)(iVar9 + 0x3d4) = uVar13;
        *(undefined4 *)(iVar9 + 0x604) = uVar17;
        *(undefined4 *)(iVar9 + 0x454) = 1;
        *(int *)(iVar9 + 0x3c8) = local_58;
        *(char **)(iVar9 + 0x610) = local_54;
        *(int *)(iVar9 + 0x398) = local_64;
        if (iVar5 == 5) {
          uVar13 = 100;
        }
        else {
          uVar13 = 0;
        }
        *(undefined4 *)(iVar9 + 0x3f4) = uVar13;
        FUN_000151e4();
        local_44[1] = 8;
        iVar5 = *piVar1;
        local_34 = 4;
        local_44[2] = *(undefined4 *)(iVar5 + 0x1c);
        local_38 = *(undefined4 *)(iVar5 + 0x24);
        local_2c = *(undefined4 *)(iVar5 + 0x3d8);
        local_30 = iVar7;
        iVar5 = FUN_00014884(local_44 + 1,&local_34);
        if (iVar5 != 0) {
          RK_LOG(2,DAT_00013834,DAT_000138b4,DAT_0001383c,0x32c,iVar5);
          FUN_00013a4c(DAT_000138b8,0x32d);
          iVar6 = iVar5;
        }
        iVar5 = *piVar1;
        local_44[0] = 0;
        *(undefined4 *)(iVar5 + 0x674) = 0;
        *(undefined4 *)(iVar5 + 0x65c) = 0;
        *(undefined4 *)(iVar5 + 0x654) = *(undefined4 *)(iVar5 + 0x1c);
        *(undefined4 *)(iVar5 + 0x660) = 0;
        *(undefined4 *)(iVar5 + 0x670) = 0;
        *(undefined4 *)(iVar5 + 0x678) = 2;
        *(undefined4 *)(iVar5 + 0x650) = 8;
        *(undefined4 *)(iVar5 + 0x658) = 6;
        *(undefined4 *)(iVar5 + 0x664) = 0x80;
        *(undefined4 *)(iVar5 + 0x668) = 0x80;
        *(undefined4 *)(iVar5 + 0x66c) = 0xff0000;
        *(undefined4 *)(iVar5 + 0x628) = 0x80;
        *(undefined4 *)(iVar5 + 0x62c) = 0x80;
        local_48 = 0;
        iVar5 = FUN_00014bf0();
        iVar7 = *piVar1;
        if (iVar5 == 0) {
          *(undefined4 *)(iVar7 + 0xb1c) = 0;
          *(undefined4 *)(iVar7 + 0xb34) = 1;
          *(undefined4 *)(iVar7 + 0xb14) = *(undefined4 *)(iVar7 + 0x1c);
          uVar13 = DAT_000138dc;
          *(undefined4 *)(iVar7 + 0xb38) = 2;
          *(undefined4 *)(iVar7 + 0xb10) = 8;
          *(undefined4 *)(iVar7 + 0xb18) = 6;
          *(undefined4 *)(iVar7 + 0xb20) = 0x100;
          *(undefined4 *)(iVar7 + 0xb24) = 0x80;
          *(undefined4 *)(iVar7 + 0xb28) = 0x80;
          *(undefined4 *)(iVar7 + 0xb2c) = uVar13;
          *(undefined4 *)(iVar7 + 0xae8) = 0x80;
          *(undefined4 *)(iVar7 + 0xaec) = 0x80;
          *(undefined4 *)(iVar7 + 0xb30) = 1;
          iVar5 = FUN_00014bf0(iVar7 + 0xae0);
          iVar7 = *piVar1;
          if (iVar5 != 0) {
            uVar13 = *(undefined4 *)(iVar7 + 0xb34);
            uVar17 = 0x12a;
            goto LAB_00013200;
          }
          *(undefined4 *)(iVar7 + 0xfe0) = 0;
          *(undefined4 *)(iVar7 + 0xff8) = 3;
          *(undefined4 *)(iVar7 + 0xfd4) = *(undefined4 *)(iVar7 + 0x1c);
          *(undefined4 *)(iVar7 + 0xff4) = 2;
          *(undefined4 *)(iVar7 + 0xfd0) = 8;
          *(undefined4 *)(iVar7 + 0xfd8) = 6;
          *(uint *)(iVar7 + 0xfdc) = *(int *)(iVar7 + 0x10) - 0x7fU & 0xfffffffe;
          *(undefined4 *)(iVar7 + 0xfe4) = 0x80;
          *(undefined4 *)(iVar7 + 0xfe8) = 0x80;
          *(undefined4 *)(iVar7 + 0xfa8) = 0x80;
          *(undefined4 *)(iVar7 + 0xfac) = 0x80;
          *(undefined4 *)(iVar7 + 0xff0) = 2;
          iVar5 = FUN_00014bf0(iVar7 + 4000);
          if (iVar5 != 0) {
            uVar13 = *(undefined4 *)(*piVar1 + 0xff4);
            uVar17 = 0x13f;
            goto LAB_00013200;
          }
          iVar5 = *piVar1;
          *(undefined4 *)(iVar5 + 0x14b4) = 3;
          *(undefined4 *)(iVar5 + 0x14b8) = 3;
          *(undefined4 *)(iVar5 + 0x1494) = *(undefined4 *)(iVar5 + 0x1c);
          *(undefined4 *)(iVar5 + 0x1490) = 8;
          *(undefined4 *)(iVar5 + 0x1498) = 6;
          *(undefined4 *)(iVar5 + 0x14a0) = 0x100;
          *(uint *)(iVar5 + 0x149c) = *(int *)(iVar5 + 0x10) - 0x7fU & 0xfffffffe;
          *(undefined4 *)(iVar5 + 0x14a4) = 0x80;
          *(undefined4 *)(iVar5 + 0x14a8) = 0x80;
          *(undefined4 *)(iVar5 + 0x1468) = 0x80;
          *(undefined4 *)(iVar5 + 0x146c) = 0x80;
          *(undefined4 *)(iVar5 + 0x14b0) = 3;
          iVar5 = FUN_00014bf0(iVar5 + 0x1460);
          piVar8 = DAT_00013844;
          if (iVar5 != 0) {
            uVar13 = *(undefined4 *)(*piVar1 + 0x14b4);
            uVar17 = 0x154;
            goto LAB_00013200;
          }
          iVar5 = FUN_00014088(*(undefined4 *)(*DAT_00013844 + 0x24),&local_48,local_44);
          if (iVar5 != 0) {
            RK_LOG(2,DAT_00013834,DAT_000138e0,DAT_000138bc,0x175);
            local_48 = 0x80;
            local_44[0] = 0x80;
          }
          iVar5 = *piVar1;
          *(undefined4 *)(iVar5 + 0x1974) = 4;
          *(undefined4 *)(iVar5 + 0x1954) = 0;
          *(undefined4 *)(iVar5 + 0x1958) = *(undefined4 *)(iVar5 + 0x3d8);
          *(undefined4 *)(iVar5 + 0x1960) = 0;
          *(undefined4 *)(iVar5 + 0x1978) = 0;
          *(undefined4 *)(iVar5 + 0x1950) = 4;
          *(uint *)(iVar5 + 0x195c) = (*(uint *)(iVar5 + 0x3a4) >> 1) + 0xf & 0xfffffff0;
          *(undefined4 *)(iVar5 + 0x1964) = local_48;
          *(undefined4 *)(iVar5 + 0x1928) = 0x80;
          *(undefined4 *)(iVar5 + 0x192c) = 0x80;
          *(pthread_t *)(iVar5 + 0x1968) = local_44[0];
          uVar13 = DAT_000138e4;
          *(undefined4 *)(iVar5 + 0x1970) = 4;
          *(undefined4 *)(iVar5 + 0x1924) = uVar13;
          *(undefined4 *)(iVar5 + 0x1920) = *(undefined4 *)(*piVar8 + 0x24);
          iVar5 = FUN_00014bf0(iVar5 + 0x1920);
          if (iVar5 != 0) {
            uVar13 = *(undefined4 *)(*piVar1 + 0x1974);
            uVar17 = 0x18a;
            goto LAB_00013200;
          }
          iVar5 = FUN_00014088(*(undefined4 *)(*piVar8 + 0x28),&local_48,local_44);
          if (iVar5 != 0) {
            RK_LOG(2,DAT_00013834,DAT_000138e0,DAT_000138bc,0x191);
            local_48 = 0x80;
            local_44[0] = 0x80;
          }
          iVar5 = *piVar1;
          *(undefined4 *)(iVar5 + 0x1e38) = 0;
          *(undefined4 *)(iVar5 + 0x1e10) = 4;
          *(undefined4 *)(iVar5 + 0x1e14) = 0;
          *(undefined4 *)(iVar5 + 0x1e34) = 5;
          *(undefined4 *)(iVar5 + 0x1e18) = *(undefined4 *)(iVar5 + 0x3d8);
          *(uint *)(iVar5 + 0x1e1c) = (*(uint *)(iVar5 + 0x3a4) >> 1) + 0xf & 0xfffffff0;
          *(uint *)(iVar5 + 0x1e20) = (*(uint *)(iVar5 + 0x3a8) >> 1) + 0xf & 0xfffffff0;
          *(undefined4 *)(iVar5 + 0x1e24) = local_48;
          *(undefined4 *)(iVar5 + 0x1de8) = 0x80;
          *(undefined4 *)(iVar5 + 0x1dec) = 0x80;
          *(pthread_t *)(iVar5 + 0x1e28) = local_44[0];
          uVar13 = DAT_000138e4;
          *(undefined4 *)(iVar5 + 0x1e30) = 5;
          *(undefined4 *)(iVar5 + 0x1de4) = uVar13;
          *(undefined4 *)(iVar5 + 0x1de0) = *(undefined4 *)(*piVar8 + 0x28);
          iVar5 = FUN_00014bf0(iVar5 + 0x1de0);
          if (iVar5 != 0) {
            uVar13 = *(undefined4 *)(*piVar1 + 0x1e34);
            uVar17 = 0x1a6;
            goto LAB_00013200;
          }
          iVar5 = FUN_00014088(*(undefined4 *)(*piVar8 + 0x28),&local_48,local_44);
          if (iVar5 != 0) {
            RK_LOG(2,DAT_00013834,DAT_000138e0,DAT_000138bc,0x1ad);
            local_48 = 0x80;
            local_44[0] = 0x80;
          }
          iVar5 = *piVar1;
          *(undefined4 *)(iVar5 + 0x22f8) = 0;
          *(undefined4 *)(iVar5 + 0x22d0) = 4;
          *(undefined4 *)(iVar5 + 0x22d4) = 0;
          *(undefined4 *)(iVar5 + 0x22f4) = 6;
          *(undefined4 *)(iVar5 + 0x22d8) = *(undefined4 *)(iVar5 + 0x3d8);
          *(uint *)(iVar5 + 0x22dc) = (*(uint *)(iVar5 + 0x3a4) >> 1) + 0xf & 0xfffffff0;
          *(undefined4 *)(iVar5 + 0x22f0) = 6;
          *(pthread_t *)(iVar5 + 0x22e8) = local_44[0];
          *(pthread_t *)(iVar5 + 0x22e0) =
               (*(int *)(iVar5 + 0x3a8) - local_44[0]) + 0xf & 0xfffffff0;
          *(undefined4 *)(iVar5 + 0x22e4) = local_48;
          *(undefined4 *)(iVar5 + 0x22a4) = DAT_000138e4;
          *(undefined4 *)(iVar5 + 0x22a8) = 0x80;
          *(undefined4 *)(iVar5 + 0x22ac) = 0x80;
          *(undefined4 *)(iVar5 + 0x22a0) = *(undefined4 *)(*piVar8 + 0x28);
          iVar5 = FUN_00014bf0(iVar5 + 0x22a0);
          if (iVar5 != 0) {
            uVar13 = *(undefined4 *)(*piVar1 + 0x22f4);
            uVar17 = 0x1c3;
            goto LAB_00013200;
          }
        }
        else {
          uVar13 = *(undefined4 *)(iVar7 + 0x674);
          uVar17 = 0x115;
LAB_00013200:
          RK_LOG(2,DAT_00013834,DAT_000138c0,DAT_000138bc,uVar17,iVar5,uVar13);
          iVar6 = iVar5;
        }
        piVar8 = DAT_00013844;
        pvVar3 = (void *)*DAT_00013844;
        if (*(int *)((int)pvVar3 + 0x14) != 0) {
          *(undefined4 *)((int)pvVar3 + 0xc) = 1;
          pthread_create(local_44,(pthread_attr_t *)0x0,DAT_000138c4,pvVar3);
        }
        printf(DAT_000138c8,DAT_000138b8);
        while (piVar11 = (int *)*piVar8, *piVar11 == 0) {
          sleep(1);
        }
        if (piVar11[5] != 0) {
          piVar11[2] = 1;
          pthread_join(local_44[0],(void **)0x0);
        }
        uVar10 = DAT_000138d0;
        uVar17 = DAT_000138cc;
        uVar13 = DAT_00013834;
        iVar5 = 0;
        do {
          iVar7 = FUN_00015154(*piVar1 + iVar5 * 0x4c0 + 0x620);
          if (iVar7 != 0) {
            iVar6 = iVar7;
            RK_LOG(2,uVar13,uVar10,uVar17,0x1d0,iVar7,
                   *(undefined4 *)(*piVar1 + iVar5 * 0x4c0 + 0x674));
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 != 7);
        if (iVar7 != 0) {
          RK_LOG(2,DAT_00013834,DAT_000138d4,DAT_0001383c,0x348,iVar6);
          FUN_00013a4c(DAT_000138b8,0x349);
        }
        puVar4 = DAT_00013840;
        *(undefined4 *)(*piVar8 + 4) = 1;
        pthread_join(*(pthread_t *)(*piVar1 + 0x600),(void **)0x0);
        local_44[1] = 8;
        iVar5 = *piVar1;
        local_34 = 4;
        local_30 = 0;
        local_44[2] = *(undefined4 *)(iVar5 + 0x1c);
        local_38 = *(undefined4 *)(iVar5 + 0x24);
        local_2c = *(undefined4 *)(iVar5 + 0x3d8);
        iVar5 = FUN_000148cc(local_44 + 1,&local_34);
        if (iVar5 != 0) {
          RK_LOG(2,DAT_00013834,DAT_000138b4,DAT_0001383c,0x359,iVar5);
          *puVar4 = 0xffffffff;
        }
        FUN_000158f4(*piVar1 + 0x390);
        if (*DAT_000138a0 != 0) {
          FUN_00019490();
        }
        iVar5 = FUN_00014654(*piVar1);
        if (iVar5 != 0) {
          RK_LOG(2,DAT_00013834,DAT_000138d8,DAT_0001383c,0x365,iVar5);
          *puVar4 = 0xffffffff;
        }
      }
      else {
        *DAT_00013840 = 0xffffffff;
        RK_LOG(2,uVar17,DAT_000138ac,DAT_0001383c,0x303,iVar7);
      }
    }
    else {
      RK_LOG(2,DAT_00013834,DAT_00013898,DAT_0001383c,0x2e0);
      *DAT_00013840 = 0xffffffff;
    }
    RK_MPI_SYS_Exit();
    if (pcVar12 != (char *)0x0) {
      FUN_00017170(0);
    }
  }
  else {
    printf(DAT_00013864,pcVar12);
    printf(DAT_00013868,0);
    uVar17 = 0;
    RK_LOG(2,DAT_00013834,DAT_0001386c,DAT_0001383c,0x2d3,0);
    iVar6 = FUN_00016cbc(0,0,0,pcVar12);
    iVar7 = FUN_00017278(0);
    if (iVar6 == 0 && iVar7 == 0) goto LAB_00012f40;
    RK_LOG(2,DAT_00013834,DAT_00013870,DAT_0001383c,0x2d8,uVar17);
    *DAT_00013840 = 0xffffffff;
  }
  piVar1 = DAT_00013828;
  if ((void *)*DAT_00013828 != (void *)0x0) {
    free((void *)*DAT_00013828);
    *piVar1 = 0;
  }
  piVar1 = DAT_00013844;
  if ((void *)*DAT_00013844 != (void *)0x0) {
    free((void *)*DAT_00013844);
    *piVar1 = 0;
  }
  sem_destroy(DAT_0001384c);
  pthread_mutex_destroy(DAT_00013850);
LAB_00012b18:
  return *DAT_00013840;
}



/* ===== entry @ 000138e8 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_0003b0b4)
            (DAT_0001391c,param_2,&stack0x00000004,DAT_00013920,DAT_00013918,param_1);
  return;
}



/* ===== FUN_00013924 @ 00013924 size=32 ===== */

void FUN_00013924(void)

{
  if (DAT_00013948 == DAT_00013944) {
    return;
  }
  if (DAT_0001394c == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00013940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0001394c)();
  return;
}



/* ===== _FINI_0 @ 00013988 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_000139c4;
  if (*DAT_000139c4 != '\0') {
    return;
  }
  FUN_00013924();
  if (DAT_000139c8 != 0) {
    __deregister_frame_info(DAT_000139cc);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 000139d0 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_000139f4 != 0) {
    __register_frame_info(DAT_000139fc,DAT_000139f8);
  }
  if ((DAT_00013980 - DAT_0001397c >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00013984 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00013978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00013984)();
  return;
}



/* ===== FUN_00013a00 @ 00013a00 size=60 ===== */

void FUN_00013a00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  RK_LOG(2,DAT_00013a44,DAT_00013a3c,DAT_00013a40,0x53,param_1,param_2,param_4);
  *(undefined4 *)*DAT_00013a48 = 1;
  return;
}



/* ===== FUN_00013a4c @ 00013a4c size=72 ===== */

void FUN_00013a4c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  RK_LOG(2,DAT_00013a9c,DAT_00013a94,DAT_00013a98,0x4d,param_1,param_2,param_4);
  *DAT_00013aa0 = 0xffffffff;
  *(undefined4 *)*DAT_00013aa4 = 1;
  return;
}



/* ===== FUN_00013aa8 @ 00013aa8 size=136 ===== */

void FUN_00013aa8(undefined4 param_1)

{
  puts(DAT_00013b30);
  printf(DAT_00013b34,param_1);
  puts(DAT_00013b38);
  puts(DAT_00013b3c);
  puts(DAT_00013b40);
  puts(DAT_00013b44);
  puts(DAT_00013b48);
  puts(DAT_00013b4c);
  puts(DAT_00013b50);
  puts(DAT_00013b54);
  puts(DAT_00013b58);
  puts(DAT_00013b5c);
  puts(DAT_00013b60);
  puts(DAT_00013b64);
  puts(DAT_00013b68);
  return;
}



/* ===== FUN_00013b6c @ 00013b6c size=572 ===== */

undefined4 FUN_00013b6c(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  pthread_mutex_t *__mutex;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  piVar1 = DAT_00013da8;
  prctl(0xf,DAT_00013dac);
  sleep(3);
  FUN_00014a68(DAT_00013db0,*(undefined4 *)(*piVar1 + 0x14));
  uVar3 = DAT_00013db8;
  piVar2 = DAT_00013db4;
  iVar7 = *(int *)(*piVar1 + 0x14);
  if (iVar7 == 1) {
    iVar9 = *(int *)(*piVar1 + 0x18);
    iVar7 = 0;
    do {
      iVar8 = 0;
      if (*(int *)(*piVar1 + 8) != 0) goto LAB_00013d30;
      do {
        iVar6 = FUN_00015154(*piVar2 + iVar8 * 0x4c0 + 0x620);
        if (iVar6 != 0) {
          RK_LOG(2,uVar3,DAT_00013dbc,DAT_00013dc0,0x1e1,iVar6,
                 *(undefined4 *)(*piVar2 + iVar8 * 0x4c0 + 0x674));
        }
        uVar5 = DAT_00013dc4;
        uVar4 = DAT_00013dc0;
        iVar8 = iVar8 + 1;
      } while (iVar8 != 7);
      iVar8 = 0;
      do {
        iVar6 = FUN_00014bf0(*piVar2 + iVar8 * 0x4c0 + 0x620);
        if (iVar6 != 0) {
          RK_LOG(2,uVar3,uVar5,uVar4,0x1ea,*(undefined4 *)(*piVar2 + iVar8 * 0x4c0 + 0x674),iVar6);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 != 7);
      pthread_mutex_lock(DAT_00013dc8);
      __mutex = DAT_00013dc8;
      iVar7 = iVar7 + 1;
      *(undefined4 *)(*piVar1 + 0x20) = 0;
      pthread_mutex_unlock(__mutex);
      sem_wait(DAT_00013dcc);
      iVar8 = iVar7;
      RK_LOG(2,uVar3,DAT_00013dd0,DAT_00013dc0,499,iVar9,iVar7);
    } while (iVar7 < iVar9 || iVar9 < 1);
    RK_LOG(2,DAT_00013db8,DAT_00013dd4,DAT_00013dc0,0x1f7,iVar7,iVar8);
    uVar3 = DAT_00013dd8;
    *(undefined4 *)(*piVar1 + 0xc) = 0;
    FUN_00013a00(uVar3,0x1f9);
LAB_00013d30:
    RK_LOG(2,DAT_00013db8,DAT_00013ddc,DAT_00013dc0,0x1fd);
  }
  else {
    RK_LOG(2,DAT_00013db8,DAT_00013dec,DAT_00013de8,0x20d,iVar7);
  }
  FUN_00014a68(DAT_00013de0,*(undefined4 *)(*piVar1 + 0x14));
  RK_LOG(2,DAT_00013db8,DAT_00013de4,DAT_00013de8,0x211);
  return 0;
}



/* ===== FUN_00013df0 @ 00013df0 size=556 ===== */

undefined4 FUN_00013df0(int param_1)

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
  if (*(int *)(param_1 + 0x280) != 0) {
    snprintf(acStack_120,0xff,DAT_0001401c,*(int *)(param_1 + 0x280),*(undefined4 *)(param_1 + 0x48)
            );
    __s = fopen64(acStack_120,DAT_00014020);
    if (__s == (FILE *)0x0) {
      RK_LOG(2,DAT_00014024,DAT_00014028,DAT_0001402c,0x9b,*(undefined4 *)(param_1 + 0x48),
             *(undefined4 *)(param_1 + 0x280));
      FUN_00013a4c(DAT_00014030,0x9c);
      return 0;
    }
  }
  piVar2 = DAT_00014050;
  uVar1 = DAT_00014024;
  iVar5 = 0;
  do {
    do {
      if (*(int *)(*piVar2 + 4) != 0) {
LAB_00013fb4:
        if (__s != (FILE *)0x0) {
          fclose(__s);
        }
        RK_LOG(2,DAT_00014024,DAT_0001404c,DAT_0001402c,0xcd);
        return 0;
      }
      iVar3 = FUN_0001581c(param_1,&local_124);
    } while (iVar3 != 0);
    iVar4 = *(int *)(param_1 + 0x38);
    bVar6 = iVar5 == iVar4;
    iVar3 = iVar5 - iVar4;
    if (iVar5 >= iVar4) {
      bVar6 = iVar4 == 0;
      iVar3 = iVar4;
    }
    if (!bVar6 && iVar3 < 0 == (iVar5 < iVar4 && SBORROW4(iVar5,iVar4))) {
      FUN_000158a4(param_1);
      FUN_00013a00(DAT_00014030,0xa7);
      goto LAB_00013fb4;
    }
    if (__s != (FILE *)0x0) {
      fwrite(local_124,1,*(size_t *)(*(int *)(param_1 + 0xe0) + 4),__s);
      fflush(__s);
    }
    if (*DAT_00014034 == 0) {
      RK_LOG(2,uVar1,DAT_00014048,DAT_0001402c,0xb6,iVar5);
    }
    else {
      iVar3 = *(int *)(param_1 + 0xe0);
      FUN_0001c978(*DAT_00014038,local_124,*(undefined4 *)(iVar3 + 4),DAT_00014038,
                   *(undefined4 *)(iVar3 + 8),*(undefined4 *)(iVar3 + 0xc));
      FUN_0001bdcc(*DAT_0001403c);
    }
    if (*(int *)(*piVar2 + 0xc) != 0) {
      pthread_mutex_lock(DAT_00014040);
      __mutex = DAT_00014040;
      *(int *)(*piVar2 + 0x20) = *(int *)(*piVar2 + 0x20) + 1;
      pthread_mutex_unlock(__mutex);
      if (*(int *)(*piVar2 + 0x20) == *(int *)(*piVar2 + 0x1c)) {
        sem_post(DAT_00014044);
      }
    }
    RK_LOG(5,uVar1,DAT_00014048,DAT_0001402c,0xc3,iVar5);
    FUN_000158a4(param_1);
    iVar5 = iVar5 + 1;
  } while( true );
}



/* ===== FUN_00014088 @ 00014088 size=300 ===== */

undefined4 FUN_00014088(char *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  FILE *__stream;
  short local_46;
  undefined1 auStack_44 [4];
  undefined4 local_40;
  undefined4 local_3c;
  
  if (param_1 == (char *)0x0) {
    RK_LOG(2,DAT_000141bc,DAT_000141b4,DAT_000141b8,0xdf);
  }
  else {
    __stream = fopen64(param_1,DAT_000141c0);
    if (__stream == (FILE *)0x0) {
      RK_LOG(2,DAT_000141bc,DAT_000141c4,DAT_000141b8,0xe5,param_1);
    }
    else {
      fread(&local_46,1,2,__stream);
      if (local_46 == 0x4d42) {
        fseek(__stream,0xc,1);
        fread(auStack_44,1,0x2c,__stream);
        uVar2 = DAT_000141cc;
        uVar1 = DAT_000141bc;
        *param_2 = local_40;
        *param_3 = local_3c;
        RK_LOG(2,uVar1,uVar2,DAT_000141b8,0xf4,*param_2,local_3c);
        fclose(__stream);
        return 0;
      }
      RK_LOG(2,DAT_000141bc,DAT_000141c8,DAT_000141b8,0xeb);
      fclose(__stream);
    }
  }
  return 0xffffffff;
}



/* ===== FUN_000141d0 @ 000141d0 size=764 ===== */

int FUN_000141d0(int *param_1)

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
  if (iVar1 == DAT_000144cc) {
    iVar1 = RK_MPI_VI_SetDevAttr(param_1[7],param_1 + 0x10);
    if (iVar1 == 0) goto LAB_00014248;
    uVar7 = 0x29;
    uVar5 = DAT_000144d0;
  }
  else {
    RK_LOG(2,DAT_000144d8,DAT_000144dc,DAT_000144d4,0x2d);
LAB_00014248:
    iVar1 = RK_MPI_VI_GetDevIsEnable(param_1[7]);
    if (iVar1 == 0) {
      RK_LOG(2,DAT_000144d8,DAT_000144ec,DAT_000144d4,0x42);
LAB_00014304:
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
            uVar5 = DAT_000144f4;
LAB_00014384:
            RK_LOG(2,DAT_000144d8,uVar5,DAT_000144d4,uVar7,uVar6);
            return -1;
          }
          local_1c = 1;
          local_14 = param_1[4] * uVar4 * 3 >> 1;
          uStack_18 = uVar4;
          uVar6 = RK_MPI_VI_SetChnWrapBufAttr(param_1[8],param_1[9],&local_1c);
          if (uVar6 != 0) {
            uVar7 = 0x59;
            uVar5 = DAT_000144f8;
            goto LAB_00014384;
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
            uVar5 = DAT_00014504;
            goto LAB_000144c4;
          }
          uVar7 = 0x6d;
          uVar5 = DAT_00014500;
          goto LAB_000142b8;
        }
        RK_LOG(2,DAT_000144d8,DAT_000144fc,DAT_000144d4,0x66,iVar1,param_1[8],param_1[9]);
      }
      else {
        uVar7 = 0x4a;
        uVar5 = DAT_000144f0;
LAB_000142b8:
        RK_LOG(2,DAT_000144d8,uVar5,DAT_000144d4,uVar7,iVar1);
      }
      iVar1 = RK_MPI_VI_DisableDev(param_1[7]);
      uVar7 = 0x7d;
      uVar5 = DAT_000144e8;
    }
    else {
      iVar1 = RK_MPI_VI_EnableDev(param_1[7]);
      if (iVar1 == 0) {
        param_1[0x17] = 1;
        param_1[0x18] = param_1[8];
        iVar1 = RK_MPI_VI_SetDevBindPipe(param_1[7],param_1 + 0x17);
        if (iVar1 == 0) goto LAB_00014304;
        uVar7 = 0x3e;
        uVar5 = DAT_000144e4;
        goto LAB_000142b8;
      }
      uVar7 = 0x36;
      uVar5 = DAT_000144e0;
    }
  }
  uVar2 = 2;
  iVar3 = iVar1;
LAB_000144c4:
  RK_LOG(uVar2,DAT_000144d8,uVar5,DAT_000144d4,uVar7,iVar3);
  return iVar1;
}



/* ===== FUN_00014508 @ 00014508 size=236 ===== */

undefined4 FUN_00014508(int param_1,undefined4 *param_2)

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
    RK_LOG(5,DAT_000145f8,DAT_000145f4,DAT_000145fc,0x92,*(undefined4 *)(param_1 + 0x1c),
           *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),uVar2,
           *(undefined4 *)(param_1 + 0x380),*(undefined4 *)(param_1 + 900),
           *(undefined4 *)(param_1 + 0x368),*(undefined4 *)(param_1 + 0x374),
           *(undefined4 *)(param_1 + 0x378),*(undefined4 *)(param_1 + 0x36c),
           *(undefined4 *)(param_1 + 0x37c));
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
    RK_LOG(2,DAT_000145f8,DAT_00014600,DAT_000145fc,0x94,*(undefined4 *)(param_1 + 0x1c),iVar1);
  }
  return uVar2;
}



/* ===== FUN_00014604 @ 00014604 size=68 ===== */

undefined4 FUN_00014604(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = RK_MPI_VI_ReleaseChnFrame
                    (*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),param_1 + 0x318
                     ,param_4,param_1,param_2,param_3);
  if (iVar1 != 0) {
    RK_LOG(2,DAT_00014650,DAT_0001464c,DAT_00014648,0xa0,iVar1);
  }
  return 0;
}



/* ===== FUN_00014654 @ 00014654 size=104 ===== */

uint FUN_00014654(int param_1,undefined4 param_2,undefined4 param_3)

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
    RK_LOG(2,DAT_000146c4,DAT_000146c0,DAT_000146bc,0xaf,uVar1);
  }
  return uVar1;
}



/* ===== FUN_000146c8 @ 000146c8 size=368 ===== */

void FUN_000146c8(undefined4 param_1,int param_2)

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
  
  piVar2 = DAT_00014858;
  piVar1 = DAT_00014854;
  iVar7 = *DAT_00014854;
  *DAT_00014858 = *DAT_00014858 + param_2;
  ptVar4 = DAT_00014860;
  if (iVar7 == 0) {
    gettimeofday(DAT_0001485c,(__timezone_ptr_t)0x0);
  }
  else if (iVar7 == 100) {
    gettimeofday(DAT_00014860,(__timezone_ptr_t)0x0);
    ptVar3 = DAT_0001485c;
    printf(DAT_00014864,param_1);
    printf(DAT_00014868,ptVar3->tv_sec,ptVar3->tv_usec);
    printf(DAT_0001486c,ptVar4->tv_sec,ptVar4->tv_usec);
    piVar5 = DAT_00014870;
    iVar7 = ptVar4->tv_sec - ptVar3->tv_sec;
    iVar6 = ptVar4->tv_usec - ptVar3->tv_usec;
    *DAT_00014870 = iVar7;
    piVar5[1] = iVar6;
    if (iVar6 < 0) {
      *piVar5 = iVar7 + -1;
      piVar5[1] = iVar6 + 1000000;
    }
    dVar9 = (double)VectorSignedToFloat(*piVar5,(byte)(in_fpscr >> 0x16) & 3);
    dVar10 = (double)VectorSignedToFloat(piVar5[1],(byte)(in_fpscr >> 0x16) & 3);
    fVar8 = (float)VectorSignedToFloat(*piVar2,(byte)(in_fpscr >> 0x16) & 3);
    dVar9 = dVar10 / DAT_00014838 + dVar9 * DAT_00014838;
    printf(DAT_00014874,100,SUB84(dVar9,0),(int)((ulonglong)dVar9 >> 0x20),
           ((double)(fVar8 * 8.0 * DAT_00014850) / dVar9) * DAT_00014840 * DAT_00014840);
    printf(DAT_00014878);
    printf(DAT_0001487c);
    puts(DAT_00014880);
    *piVar1 = 0;
    *piVar2 = 0;
    return;
  }
  *piVar1 = iVar7 + 1;
  return;
}



/* ===== FUN_00014884 @ 00014884 size=60 ===== */

int FUN_00014884(void)

{
  int iVar1;
  
  iVar1 = RK_MPI_SYS_Bind();
  if (iVar1 != 0) {
    RK_LOG(2,DAT_000148c8,DAT_000148c4,DAT_000148c0,0x4d,iVar1);
  }
  return iVar1;
}



/* ===== FUN_000148cc @ 000148cc size=60 ===== */

int FUN_000148cc(void)

{
  int iVar1;
  
  iVar1 = RK_MPI_SYS_UnBind();
  if (iVar1 != 0) {
    RK_LOG(2,DAT_00014910,DAT_0001490c,DAT_00014908,0x59,iVar1);
  }
  return iVar1;
}



/* ===== FUN_00014914 @ 00014914 size=312 ===== */

undefined4 FUN_00014914(char *param_1,undefined4 *param_2,undefined4 *param_3)

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
    RK_LOG(2,DAT_00014a54,DAT_00014a4c,DAT_00014a50,0x69);
  }
  else {
    __stream = fopen64(param_1,DAT_00014a58);
    if (__stream == (FILE *)0x0) {
      RK_LOG(2,DAT_00014a54,DAT_00014a5c,DAT_00014a50,0x6f,param_1);
    }
    else {
      fread(&local_46,1,2,__stream);
      if (local_46 == 0x4d42) {
        fseek(__stream,0xc,1);
        fread(auStack_44,1,0x2c,__stream);
        uVar2 = DAT_00014a64;
        uVar1 = DAT_00014a54;
        *param_2 = local_40;
        *param_3 = local_3c;
        RK_LOG(2,uVar1,uVar2,DAT_00014a50,0x7e,*param_2,local_3c);
        fclose(__stream);
        return 0;
      }
      RK_LOG(2,DAT_00014a54,DAT_00014a60,DAT_00014a50,0x75);
      fclose(__stream);
    }
  }
  return 0xffffffff;
}



/* ===== FUN_00014a68 @ 00014a68 size=72 ===== */

undefined4 FUN_00014a68(undefined4 param_1,undefined4 param_2)

{
  char acStack_110 [260];
  
  system(DAT_00014ab0);
  sprintf(acStack_110,DAT_00014ab4,param_1,param_2);
  system(acStack_110);
  system(DAT_00014ab8);
  return 0;
}



/* ===== FUN_00014abc @ 00014abc size=288 ===== */

undefined4 FUN_00014abc(char *param_1,char *param_2,size_t param_3,undefined4 *param_4)

{
  FILE *__stream;
  FILE *__stream_00;
  size_t sVar1;
  uint unaff_r4;
  
  __stream = fopen64(param_1,DAT_00014bdc);
  __stream_00 = fopen64(param_2,DAT_00014bdc);
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
    RK_LOG(2,DAT_00014be8,DAT_00014bec,DAT_00014be0,0xa0,param_1,param_2);
  }
  else {
    RK_LOG(2,DAT_00014be8,DAT_00014be4,DAT_00014be0,0x9a,param_1,param_2,__stream,__stream_00);
    if (__stream == (FILE *)0x0) goto LAB_00014b48;
  }
  fclose(__stream);
LAB_00014b48:
  if (__stream_00 != (FILE *)0x0) {
    fclose(__stream_00);
  }
  return 0xffffffff;
}



/* ===== FUN_00014bf0 @ 00014bf0 size=1276 ===== */

undefined4 FUN_00014bf0(undefined4 *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStack_60 [12];
  undefined4 local_54 [2];
  ushort local_4c;
  ushort local_4a;
  undefined1 auStack_44 [4];
  int local_40;
  int local_3c;
  
  iVar10 = param_1[0x16];
  if (iVar10 == 2) {
    param_1[0x11c] = 1;
    param_1[0x11d] = 2;
    param_1[0x11e] = param_1[0xf];
    param_1[0x11f] = param_1[0x10];
    param_1[0x120] = param_1[0x11];
    param_1[0x121] = param_1[0x12];
    param_1[0x122] = param_1[0x13];
LAB_00014e6c:
    param_1[0x123] = param_1[0x14];
  }
  else {
    if (iVar10 == 3) {
      param_1[0x11c] = 1;
      param_1[0x11d] = 3;
      param_1[0x122] = 3;
      param_1[0x11e] = param_1[0xf];
      param_1[0x11f] = param_1[0x10];
      param_1[0x120] = param_1[0x11];
      param_1[0x121] = param_1[0x12];
      goto LAB_00014e6c;
    }
    if (iVar10 != 0) {
      uVar5 = 0x91;
      uVar6 = DAT_00015150;
      goto LAB_00014e0c;
    }
    param_1[0x11d] = 0;
    param_1[0x11c] = 1;
    param_1[0x17] = param_1[1];
    param_1[0x18] = param_1[0x11];
    param_1[0x19] = param_1[0x12];
    param_1[0x11e] = param_1[0xf];
    param_1[0x11f] = param_1[0x10];
    param_1[0x121] = param_1[2];
    param_1[0x120] = param_1[3];
    param_1[0x122] = param_1[0x14];
    iVar10 = FUN_000177f4(*param_1,auStack_60,auStack_44);
    if (iVar10 < 0) {
      RK_LOG(2,DAT_00015124,DAT_0001511c,DAT_00015120,0x26);
    }
    switch(param_1[1]) {
    case 0x1000a:
      local_54[0] = 4;
      break;
    default:
      goto switchD_00014cb4_caseD_1000b;
    case 0x10010:
      local_54[0] = 8;
      break;
    case 0x10012:
      local_54[0] = 9;
      break;
    case 0x10015:
      local_54[0] = 5;
    }
    if (iVar10 < 0) {
      iVar12 = param_1[0x11];
      iVar10 = param_1[0x12];
      pvVar1 = malloc(iVar10 * iVar12 * 4);
      param_1[8] = pvVar1;
      if (pvVar1 == (void *)0x0) {
        uVar6 = 0x41;
LAB_00014de0:
        RK_LOG(2,DAT_00015124,DAT_00015130,DAT_00015120,uVar6);
switchD_00014cb4_caseD_1000b:
        uVar5 = 0x75;
        iVar10 = -1;
        uVar6 = DAT_00015134;
        goto LAB_00014e0c;
      }
      FUN_00016190(pvVar1,iVar12,iVar10,iVar12,iVar10,param_1[1],0);
      param_1[5] = param_1[0x11];
      uVar7 = param_1[0x12];
    }
    else {
      pvVar1 = malloc(local_3c * local_40 * 4);
      param_1[8] = pvVar1;
      if (pvVar1 == (void *)0x0) {
        uVar6 = 0x51;
        goto LAB_00014de0;
      }
      FUN_00017d2c(*param_1,local_54,pvVar1);
      param_1[5] = (uint)local_4a;
      uVar7 = (uint)local_4c;
    }
    param_1[6] = uVar7;
    param_1[4] = param_1[1];
  }
  iVar10 = RK_MPI_RGN_Create(param_1[0x15],param_1 + 0x16);
  if (iVar10 != 0) {
    uVar5 = param_1[0x15];
    uVar15 = 0x97;
    uVar6 = DAT_00015128;
    goto LAB_00014d90;
  }
  puVar11 = param_1 + 0xc;
  puVar13 = param_1 + 0x11c;
  iVar10 = RK_MPI_RGN_AttachToChn(param_1[0x15],puVar11,puVar13);
  if (iVar10 != 0) {
    uVar5 = param_1[0x15];
    uVar15 = 0x9d;
    uVar6 = DAT_00015138;
    goto LAB_00014d90;
  }
  if (param_1[0x16] == 0) {
    iVar10 = RK_MPI_RGN_SetBitMap(param_1[0x15],param_1 + 4);
    if (iVar10 != 0) {
      RK_LOG(2,DAT_00015124,DAT_0001513c,DAT_0001512c,0xa6,iVar10);
      if ((void *)param_1[8] == (void *)0x0) {
        return 0xffffffff;
      }
      free((void *)param_1[8]);
      param_1[8] = 0;
      return 0xffffffff;
    }
    if ((void *)param_1[8] != (void *)0x0) {
      free((void *)param_1[8]);
      param_1[8] = 0;
    }
  }
  iVar10 = RK_MPI_RGN_GetDisplayAttr(param_1[0x15],puVar11,puVar13);
  if (iVar10 != 0) {
    uVar5 = param_1[0x15];
    uVar15 = 0xbd;
    uVar6 = DAT_00015140;
    goto LAB_00014d90;
  }
  iVar10 = param_1[0x16];
  if (iVar10 == 2) {
    param_1[0x11c] = 1;
    uVar8 = param_1[0xf];
    uVar4 = param_1[0x10];
    uVar3 = param_1[0x11];
    uVar2 = param_1[0x12];
    uVar14 = param_1[0x13];
    param_1[0x11e] = uVar8;
    uVar9 = param_1[0x15];
    param_1[0x11f] = uVar4;
    param_1[0x120] = uVar3;
    param_1[0x11d] = 2;
    uVar16 = 0xe0;
    param_1[0x121] = uVar2;
    param_1[0x122] = uVar14;
    param_1[0x123] = param_1[0x14];
    uVar6 = DAT_00015124;
    uVar15 = DAT_0001514c;
    uVar5 = DAT_0001512c;
LAB_00015024:
    RK_LOG(2,uVar6,uVar15,uVar5,uVar16,uVar9,uVar8,uVar4,uVar3,uVar2,uVar14);
  }
  else {
    if (iVar10 != 3) {
      if (iVar10 != 0) {
        uVar5 = 0xee;
        uVar6 = DAT_00015150;
LAB_00014e0c:
        RK_LOG(2,DAT_00015124,uVar6,DAT_0001512c,uVar5,iVar10);
        return 0xffffffff;
      }
      param_1[0x11c] = 1;
      uVar8 = param_1[0xf];
      uVar4 = param_1[0x10];
      uVar3 = param_1[2];
      param_1[0x11e] = uVar8;
      uVar9 = param_1[0x15];
      param_1[0x11d] = 0;
      uVar2 = param_1[3];
      uVar14 = param_1[0x14];
      param_1[0x11f] = uVar4;
      param_1[0x121] = uVar3;
      uVar15 = DAT_00015144;
      uVar5 = DAT_0001512c;
      uVar6 = DAT_00015124;
      uVar16 = 0xd0;
      param_1[0x120] = uVar2;
      param_1[0x122] = uVar14;
      goto LAB_00015024;
    }
    param_1[0x11c] = 1;
    param_1[0x11d] = 3;
    param_1[0x122] = 3;
    param_1[0x11e] = param_1[0xf];
    param_1[0x11f] = param_1[0x10];
    param_1[0x120] = param_1[0x11];
    param_1[0x121] = param_1[0x12];
    param_1[0x123] = param_1[0x14];
  }
  iVar10 = RK_MPI_RGN_SetDisplayAttr(param_1[0x15],puVar11,puVar13);
  if (iVar10 == 0) {
    return 0;
  }
  uVar5 = param_1[0x15];
  uVar15 = 0xf6;
  uVar6 = DAT_00015148;
LAB_00014d90:
  RK_LOG(2,DAT_00015124,uVar6,DAT_0001512c,uVar15,uVar5,iVar10);
  return 0xffffffff;
}



/* ===== FUN_00015154 @ 00015154 size=128 ===== */

undefined4 FUN_00015154(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = RK_MPI_RGN_DetachFromChn
                    (*(undefined4 *)(param_1 + 0x54),param_1 + 0x30,param_3,param_4,param_1,param_2,
                     param_3,param_4);
  if (iVar1 == 0) {
    iVar1 = RK_MPI_RGN_Destroy(*(undefined4 *)(param_1 + 0x54));
    if (iVar1 == 0) {
      return 0;
    }
    uVar3 = *(undefined4 *)(param_1 + 0x54);
    uVar4 = 0x108;
    uVar2 = DAT_000151e0;
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x54);
    uVar4 = 0x102;
    uVar2 = DAT_000151d4;
  }
  RK_LOG(2,DAT_000151dc,uVar2,DAT_000151d8,uVar4,uVar3,iVar1);
  return 0xffffffff;
}



/* ===== FUN_000151e4 @ 000151e4 size=1268 ===== */

int FUN_000151e4(int *param_1)

{
  undefined1 auVar1 [16];
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  __start_routine *__start_routine;
  bool bVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  int local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  int local_d8;
  int iStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  int local_c8;
  int iStack_c4;
  int local_c0;
  int iStack_bc;
  int local_b8;
  int iStack_b4;
  int local_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  int local_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int local_70;
  int iStack_6c;
  int local_68;
  int iStack_64;
  int local_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int local_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  int local_28;
  int iStack_24;
  int local_20;
  int iStack_1c;
  undefined4 local_18;
  
  iVar3 = param_1[0x10];
  if (iVar3 == 7) {
    RK_LOG(2,DAT_000156d8,DAT_000156e8,DAT_000156e0,0x54);
    param_1[0x27] = 5;
    param_1[0x13] = 0xf;
    param_1[0x20] = 0;
    *(undefined1 *)(param_1 + 0x21) = 0;
    param_1[0x26] = 0;
    goto LAB_000152a4;
  }
  iVar5 = param_1[0x11];
  if (iVar3 == 8) {
    param_1[0x13] = 9;
    if ((iVar5 == 5) || (iVar5 == 6)) {
      param_1[0x27] = iVar5;
      param_1[0x2b] = 1;
      param_1[0x29] = 1;
      param_1[0x2a] = param_1[7];
      param_1[0x28] = param_1[7];
      param_1[0x2c] = param_1[5] * param_1[6] * 8;
    }
    goto LAB_000152a4;
  }
  if (iVar3 == 6) {
    param_1[0x13] = 0xc;
    if (iVar5 != 8) {
      bVar7 = iVar5 == 9;
      goto LAB_00015250;
    }
  }
  else {
    param_1[0x13] = 8;
    if (iVar5 == 1) {
      param_1[0x27] = 1;
      param_1[0x2c] = 1;
      param_1[0x28] = param_1[8];
      param_1[0x2d] = param_1[9];
      param_1[0x2b] = param_1[7];
      param_1[0x29] = param_1[7];
      param_1[0x2a] = 1;
      goto LAB_000152a4;
    }
    bVar7 = iVar5 == 2;
LAB_00015250:
    if (!bVar7) goto LAB_000152a4;
  }
  param_1[0x27] = iVar5;
  param_1[0x2c] = 1;
  param_1[0x28] = param_1[8];
  param_1[0x2d] = param_1[9];
  param_1[0x2a] = 1;
  param_1[0x2b] = param_1[7];
  param_1[0x29] = param_1[7];
LAB_000152a4:
  uVar4 = DAT_000156d8;
  iVar3 = param_1[5];
  param_1[0x16] = param_1[0xf];
  iVar5 = param_1[6];
  param_1[0x14] = iVar3;
  param_1[0x1b] = iVar3;
  param_1[0x1c] = iVar5;
  param_1[0x15] = iVar5;
  param_1[0x1e] = iVar5 + 1U & 0xfffffffe;
  iVar5 = param_1[0xc];
  param_1[0x1d] = iVar3 + 1U & 0xfffffffe;
  uVar8 = DAT_000156dc;
  if (iVar5 == 0) {
    iVar5 = 3;
  }
  param_1[0x1f] = iVar5;
  RK_LOG(2,uVar4,uVar8,DAT_000156e0,0x81,param_1[0x12],iVar5);
  uVar6 = param_1[0xd];
  if (uVar6 == 0) {
    uVar6 = (uint)(param_1[6] * param_1[5] * 3) >> 1;
  }
  param_1[0x18] = uVar6;
  iVar3 = RK_MPI_VENC_CreateChn(param_1[0x12],param_1 + 0x13);
  if (iVar3 == 0) {
    if (param_1[0xa1] != 0) {
      local_d8 = 1;
      iVar3 = RK_MPI_VENC_SetChnRefBufShareAttr(param_1[0x12],&local_d8);
      if (iVar3 != 0) {
        printf(DAT_000156ec);
      }
    }
    if (param_1[2] != 0) {
      local_110 = param_1[4];
      local_10c = 0;
      local_114 = 1;
      local_118 = 1;
      iVar3 = RK_MPI_VENC_SetChnBufWrapAttr(param_1[0x12],&local_114);
      if (iVar3 != 0) {
        RK_LOG(2,DAT_000156d8,DAT_000156f0,DAT_000156e0,0xa1,iVar3,iVar5);
        return -1;
      }
      RK_MPI_VENC_SetChnRefBufShareAttr(param_1[0x12],&local_118);
    }
    uStack_104 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    local_100 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    local_fc = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    local_108 = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_e8 = 0;
    local_e0 = 0;
    if ((param_1[0x10] == 5) || (uStack_f4 = uStack_104, uStack_dc = uStack_104, param_1[0x10] == 6)
       ) {
      local_100 = 0x33;
      local_f8 = 0x33;
      local_fc = 10;
      uStack_f4 = 10;
      uStack_dc = 0x1c;
    }
    uStack_ec = uStack_104;
    uStack_e4 = uStack_dc;
    iVar3 = RK_MPI_VENC_SetRcParam(param_1[0x12],&local_108);
    if (iVar3 == 0) {
      if ((*param_1 == 0) || (iVar3 = RK_MPI_VENC_EnableSvc(param_1[0x12]), iVar3 == 0)) {
        if ((param_1[1] == 0) || (iVar3 = RK_MPI_VENC_EnableMotionDeblur(param_1[0x12]), iVar3 == 0)
           ) {
          local_11c = 0xffffffff;
          iVar3 = RK_MPI_VENC_StartRecvFrame(param_1[0x12],&local_11c);
          if (iVar3 == 0) {
            if (param_1[0x13] == 0xf) {
              memset(&iStack_d4,0,0xc4);
              local_d8 = param_1[10];
              iVar3 = RK_MPI_VENC_SetJpegParam(param_1[0x12],&local_d8);
              if (iVar3 != 0) {
                RK_LOG(2,DAT_000156d8,DAT_00015700,DAT_000156e0,0xdc,iVar3);
                return iVar3;
              }
            }
            else if (param_1[0x13] == 9) {
              auVar1._8_8_ = SUB158(SUB1615((undefined1  [16])0x0,1),7);
              auVar1._0_8_ = 0x101010101010101;
              auVar1 = auVar1 << 0x40 | auVar1;
              local_d8 = *(int *)auVar1;
              iStack_d4 = *(int *)(auVar1 + (undefined1  [16])0x4);
              uStack_d0 = *(undefined4 *)(auVar1 + (undefined1  [16])0x8);
              uStack_cc = *(undefined4 *)(auVar1 + (undefined1  [16])0xc);
              local_18 = 100;
              local_c8 = local_d8;
              iStack_c4 = iStack_d4;
              local_c0 = local_d8;
              iStack_bc = iStack_d4;
              local_b8 = local_d8;
              iStack_b4 = iStack_d4;
              local_b0 = local_d8;
              iStack_ac = iStack_d4;
              local_a8 = local_d8;
              iStack_a4 = iStack_d4;
              local_a0 = local_d8;
              iStack_9c = iStack_d4;
              local_98 = local_d8;
              iStack_94 = iStack_d4;
              uStack_90 = uStack_d0;
              uStack_8c = uStack_cc;
              local_88 = local_d8;
              iStack_84 = iStack_d4;
              local_80 = local_d8;
              iStack_7c = iStack_d4;
              local_78 = local_d8;
              iStack_74 = iStack_d4;
              local_70 = local_d8;
              iStack_6c = iStack_d4;
              local_68 = local_d8;
              iStack_64 = iStack_d4;
              local_60 = local_d8;
              iStack_5c = iStack_d4;
              local_58 = local_d8;
              iStack_54 = iStack_d4;
              uStack_50 = uStack_d0;
              uStack_4c = uStack_cc;
              local_48 = local_d8;
              iStack_44 = iStack_d4;
              local_40 = local_d8;
              iStack_3c = iStack_d4;
              local_38 = local_d8;
              iStack_34 = iStack_d4;
              local_30 = local_d8;
              iStack_2c = iStack_d4;
              local_28 = local_d8;
              iStack_24 = iStack_d4;
              local_20 = local_d8;
              iStack_1c = iStack_d4;
              RK_MPI_VENC_SetMjpegParam(param_1[0x12],&local_d8);
            }
            if (param_1[3] != 0) {
              local_d8 = 1;
              iStack_d4 = param_1[0xb];
              RK_MPI_VENC_SetComboAttr(param_1[0x12],&local_d8);
            }
            __start_routine = (__start_routine *)param_1[0x9d];
            if (__start_routine == (__start_routine *)0x0) {
              return 0;
            }
            pvVar2 = malloc(0x88);
            param_1[0x38] = (int)pvVar2;
            pthread_create((pthread_t *)(param_1 + 0x9c),(pthread_attr_t *)0x0,__start_routine,
                           param_1);
            return 0;
          }
          uVar8 = 0xd2;
          uVar4 = DAT_000156fc;
          iVar9 = param_1[0x12];
        }
        else {
          uVar8 = 0xca;
          uVar4 = DAT_000156f8;
          iVar9 = iVar3;
        }
      }
      else {
        uVar8 = 0xc1;
        uVar4 = DAT_000156f8;
        iVar9 = iVar3;
      }
    }
    else {
      uVar8 = 0xb9;
      uVar4 = DAT_000156f4;
      iVar9 = iVar3;
    }
  }
  else {
    uVar8 = 0x8a;
    uVar4 = DAT_000156e4;
    iVar9 = iVar3;
  }
  RK_LOG(2,DAT_000156d8,uVar4,DAT_000156e0,uVar8,iVar9,iVar5);
  return iVar3;
}



/* ===== FUN_00015704 @ 00015704 size=264 ===== */

undefined4
FUN_00015704(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_r3;
  undefined4 uVar6;
  int local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  
  uVar2 = DAT_00015810;
  uVar1 = DAT_0001580c;
  while( true ) {
    uVar6 = 1;
    iVar4 = RK_MPI_MB_GetMB(*(undefined4 *)(param_1 + 0x278));
    if (iVar4 != 0) break;
    RK_LOG(2,uVar2,DAT_00015814,uVar1,0x105,0);
    usleep(2000);
  }
  RK_MPI_MB_Handle2VirAddr();
  uVar3 = DAT_00015818;
  RK_MPI_SYS_MmzFlushCache(iVar4,0);
  uVar2 = DAT_00015810;
  uVar1 = DAT_0001580c;
  local_60 = 0;
  local_58 = param_6;
  local_78 = iVar4;
  local_74 = param_3;
  local_70 = param_4;
  local_6c = param_3;
  local_68 = param_4;
  while (iVar5 = RK_MPI_VENC_SendFrame
                           (*(undefined4 *)(param_1 + 0x48),&local_78,0xffffffff,param_6,uVar6),
        iVar5 != 0) {
    uVar6 = 0x11e;
    RK_LOG(2,uVar2,uVar3,uVar1,0x11e,iVar5);
    usleep(10000);
    param_6 = extraout_r3;
  }
  RK_MPI_MB_ReleaseMB(iVar4);
  return 0;
}



/* ===== FUN_0001581c @ 0001581c size=124 ===== */

undefined4 FUN_0001581c(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar2 = DAT_000158a0;
  uVar1 = DAT_0001589c;
  uVar4 = DAT_00015898;
  while (iVar3 = RK_MPI_VENC_GetStream(*(undefined4 *)(param_1 + 0x48),param_1 + 0xe0,2000),
        iVar3 != 0) {
    RK_LOG(2,uVar2,uVar1,uVar4,0x12f,*(undefined4 *)(param_1 + 0x48),iVar3);
  }
  uVar4 = RK_MPI_MB_Handle2VirAddr(**(undefined4 **)(param_1 + 0xe0));
  *param_2 = uVar4;
  return 0;
}



/* ===== FUN_000158a4 @ 000158a4 size=68 ===== */

int FUN_000158a4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = RK_MPI_VENC_ReleaseStream
                    (*(undefined4 *)(param_1 + 0x48),param_1 + 0xe0,param_3,param_4,param_1,param_2)
  ;
  if (iVar1 != 0) {
    RK_LOG(2,DAT_000158f0,DAT_000158ec,DAT_000158e8,0x13a,iVar1);
  }
  return iVar1;
}



/* ===== FUN_000158f4 @ 000158f4 size=136 ===== */

int FUN_000158f4(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = RK_MPI_VENC_StopRecvFrame(*(undefined4 *)(param_1 + 0x48));
  if (iVar1 == 0) {
    RK_LOG(2,DAT_00015980,DAT_0001597c,DAT_00015984,0x147,*(undefined4 *)(param_1 + 0x48),param_3);
    iVar2 = RK_MPI_VENC_DestroyChn(*(undefined4 *)(param_1 + 0x48));
    if (iVar2 != 0) {
      RK_LOG(2,DAT_00015980,DAT_00015988,DAT_00015984,0x14a,iVar2,param_3);
    }
    if (*(void **)(param_1 + 0xe0) != (void *)0x0) {
      free(*(void **)(param_1 + 0xe0));
    }
  }
  return iVar1;
}



/* ===== FUN_0001598c @ 0001598c size=192 ===== */

void FUN_0001598c(int *param_1,int *param_2,int *param_3,int param_4,int param_5,byte param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = (uint)param_6;
  uVar4 = uVar5 * 3 + param_5 + param_4 & 0xff;
  iVar1 = (uVar5 * 5 + 0x40 + param_4 / 2 & 0xff) - 0x80;
  iVar3 = (uVar5 * 2 + -0x80 + param_5 / 2 & 0xff) - 0x80;
  iVar2 = uVar4 - (iVar3 * 0x58 + iVar1 * 0xb8 >> 8);
  iVar3 = uVar4 + (iVar3 * 0x1c7 >> 8);
  iVar1 = uVar4 + (iVar1 * 0x168 >> 8);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else if (0xfe < iVar1) {
    iVar1 = 0xff;
  }
  *param_1 = iVar1;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (0xfe < iVar2) {
    iVar2 = 0xff;
  }
  *param_2 = iVar2;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0xfe < iVar3) {
    iVar3 = 0xff;
  }
  *param_3 = iVar3;
  return;
}



/* ===== FUN_00016078 @ 00016078 size=128 ===== */

uint FUN_00016078(uint param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  
  if (param_1 != 0) {
    return param_1;
  }
  bVar1 = param_4 * param_2 - param_3 != 0 && param_3 <= param_4 * param_2;
  if (bVar1) {
    RK_LOG(3,DAT_00016100,DAT_000160f8,DAT_000160fc,0x1b7,param_3,param_2,param_4);
    RK_LOG(3,DAT_00016100,DAT_00016104,DAT_000160fc,0x1b9,param_3,param_4,param_3 * param_4);
  }
  return (uint)bVar1;
}



/* ===== FUN_00016108 @ 00016108 size=120 ===== */

int FUN_00016108(int param_1,uint param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  
  if ((param_1 == 0) && (uVar1 = (param_2 + param_3 * 8) - 1 & param_3 * -8, param_2 != uVar1)) {
    RK_LOG(3,DAT_00016184,DAT_00016180,DAT_00016188,0x1c6,param_4,param_3,param_4);
    RK_LOG(3,DAT_00016184,DAT_0001618c,DAT_00016188,0x1c8,uVar1);
    param_1 = 1;
  }
  return param_1;
}



/* ===== FUN_00016190 @ 00016190 size=2632 ===== */

undefined4
FUN_00016190(char *param_1,uint param_2,uint param_3,uint param_4,int param_5,uint param_6,
            uint param_7)

{
  char cVar1;
  char cVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  code *pcVar9;
  char *pcVar10;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 auStack_2c [2];
  
  puVar3 = DAT_00016bec;
  uVar4 = param_5 * param_4;
  if (DAT_00016bd8 < param_6) {
    if (DAT_00016be8 < param_6) {
      if (DAT_00016bfc <= param_6) {
        if (param_6 <= DAT_00016bfc + 3) goto LAB_00016350;
        if (param_6 <= DAT_00016bfc + 6) goto LAB_000163e8;
      }
      goto LAB_000161f4;
    }
    if (param_6 < DAT_00016be8 - 3) {
      if (param_6 <= DAT_00016be8 - 6) {
        uVar4 = 0;
        pcVar9 = *(code **)(DAT_00016bf0 + (param_6 - 0x10000) * 4);
        iVar5 = FUN_00016078(*DAT_00016bec,param_2,param_4,3);
        if (iVar5 != 0) {
          param_4 = param_4 * 3;
          *puVar3 = 1;
        }
        puVar3 = DAT_00016bf4;
        iVar5 = FUN_00016108(*DAT_00016bf4,param_4,3,DAT_00016c04);
        if (iVar5 != 0) {
          param_4 = param_4 + 0x17 & 0xffffffe8;
          *puVar3 = 1;
        }
        for (; uVar4 != param_3; uVar4 = uVar4 + 1) {
          for (uVar6 = 0; uVar6 != param_2; uVar6 = uVar6 + 1) {
            FUN_0001598c(&local_34,&local_30,auStack_2c,uVar6,uVar4,param_7);
            (*pcVar9)(param_1 + uVar6 * 3,local_34,local_30,auStack_2c[0],1);
          }
          param_1 = param_1 + param_4;
        }
        return 0;
      }
LAB_00016350:
      uVar4 = 0;
      pcVar9 = *(code **)(DAT_00016bf0 + (param_6 - 0x10000) * 4);
      iVar5 = FUN_00016078(*DAT_00016bec,param_2,param_4,4);
      if (iVar5 != 0) {
        param_4 = param_4 << 2;
        *puVar3 = 1;
      }
      puVar3 = DAT_00016bf4;
      iVar5 = FUN_00016108(*DAT_00016bf4,param_4,4,DAT_00016bf8);
      if (iVar5 != 0) {
        param_4 = param_4 + 0x1f & 0xffffffe0;
        *puVar3 = 1;
      }
      for (; uVar4 != param_3; uVar4 = uVar4 + 1) {
        for (uVar6 = 0; uVar6 != param_2; uVar6 = uVar6 + 1) {
          FUN_0001598c(&local_34,&local_30,auStack_2c,uVar6,uVar4,param_7);
          (*pcVar9)(param_1 + uVar6 * 4,local_34,local_30,auStack_2c[0],1);
        }
        param_1 = param_1 + param_4;
      }
      return 0;
    }
  }
  else if (param_6 < 0x10000) {
    cVar2 = (char)param_7;
    if (param_6 == 8) {
      pcVar8 = param_1;
      for (uVar6 = 0; uVar6 != param_3; uVar6 = uVar6 + 1) {
        for (uVar7 = 0; uVar7 != param_2; uVar7 = uVar7 + 1) {
          pcVar8[uVar7] = cVar2 * '\x03' + (char)uVar6 + (char)uVar7;
        }
        pcVar8 = pcVar8 + param_4;
      }
      param_1 = param_1 + uVar4 + 1;
      for (uVar4 = 0; uVar4 != param_3; uVar4 = uVar4 + 1) {
        for (uVar6 = 0; param_2 >> 1 != uVar6; uVar6 = uVar6 + 1) {
          param_1[uVar6 * 2] = cVar2 * '\x02' + -0x80 + (char)(uVar4 >> 1);
          param_1[uVar6 * 2 + -1] = cVar2 * '\x05' + '@' + (char)uVar6;
        }
        param_1 = param_1 + param_4;
      }
      return 0;
    }
    if (param_6 < 9) {
      if (param_6 == 4) {
        pcVar8 = param_1;
        for (uVar6 = 0; uVar6 != param_3; uVar6 = uVar6 + 1) {
          for (uVar7 = 0; uVar7 != param_2; uVar7 = uVar7 + 1) {
            pcVar8[uVar7] = cVar2 * '\x03' + (char)uVar6 + (char)uVar7;
          }
          pcVar8 = pcVar8 + param_4;
        }
        param_2 = param_2 >> 1;
        pcVar8 = param_1 + param_2 + uVar4;
        for (uVar7 = 0; uVar6 >> 1 != uVar7; uVar7 = uVar7 + 1) {
          for (pcVar10 = pcVar8 + -param_2; pcVar10 != pcVar8; pcVar10 = pcVar10 + 1) {
            *pcVar10 = cVar2 * '\x02' + -0x80 + (char)uVar7;
          }
          pcVar8 = pcVar8 + (param_4 >> 1);
        }
        param_1 = param_1 + (uVar4 >> 2) + uVar4;
        for (uVar4 = 0; uVar7 != uVar4; uVar4 = uVar4 + 1) {
          for (uVar6 = 0; param_2 != uVar6; uVar6 = uVar6 + 1) {
            param_1[uVar6] = cVar2 * '\x05' + '@' + (char)uVar6;
          }
          param_1 = param_1 + (param_4 >> 1);
        }
        return 0;
      }
      if (param_6 < 5) {
        if (param_6 == 0) {
          pcVar8 = param_1;
          for (uVar6 = 0; uVar6 != param_3; uVar6 = uVar6 + 1) {
            for (uVar7 = 0; uVar7 != param_2; uVar7 = uVar7 + 1) {
              pcVar8[uVar7] = cVar2 * '\x03' + (char)uVar6 + (char)uVar7;
            }
            pcVar8 = pcVar8 + param_4;
          }
          param_1 = param_1 + uVar4 + 1;
          for (uVar4 = 0; uVar6 >> 1 != uVar4; uVar4 = uVar4 + 1) {
            for (uVar7 = 0; param_2 >> 1 != uVar7; uVar7 = uVar7 + 1) {
              param_1[uVar7 * 2 + -1] = cVar2 * '\x02' + -0x80 + (char)uVar4;
              param_1[uVar7 * 2] = cVar2 * '\x05' + '@' + (char)uVar7;
            }
            param_1 = param_1 + param_4;
          }
          return 0;
        }
        if (param_6 == 2) {
          pcVar8 = param_1;
          for (uVar6 = 0; uVar6 != param_3; uVar6 = uVar6 + 1) {
            for (uVar7 = 0; uVar7 != param_2; uVar7 = uVar7 + 1) {
              pcVar8[uVar7] = cVar2 * '\x03' + (char)uVar6 + (char)uVar7;
            }
            pcVar8 = pcVar8 + param_4;
          }
          param_1 = param_1 + uVar4 + 1;
          for (uVar4 = 0; uVar4 != param_3; uVar4 = uVar4 + 1) {
            for (uVar6 = 0; param_2 >> 1 != uVar6; uVar6 = uVar6 + 1) {
              param_1[uVar6 * 2 + -1] = cVar2 * '\x02' + -0x80 + (char)(uVar4 >> 1);
              param_1[uVar6 * 2] = cVar2 * '\x05' + '@' + (char)uVar6;
            }
            param_1 = param_1 + param_4;
          }
          return 0;
        }
      }
      else {
        if (param_6 == 6) {
          pcVar8 = param_1;
          for (uVar6 = 0; uVar6 != param_3; uVar6 = uVar6 + 1) {
            for (uVar7 = 0; uVar7 != param_2; uVar7 = uVar7 + 1) {
              pcVar8[uVar7] = cVar2 * '\x03' + (char)uVar6 + (char)uVar7;
            }
            pcVar8 = pcVar8 + param_4;
          }
          param_1 = param_1 + uVar4 + 1;
          for (uVar4 = 0; uVar6 >> 1 != uVar4; uVar4 = uVar4 + 1) {
            for (uVar7 = 0; param_2 >> 1 != uVar7; uVar7 = uVar7 + 1) {
              param_1[uVar7 * 2] = cVar2 * '\x02' + -0x80 + (char)uVar4;
              param_1[uVar7 * 2 + -1] = cVar2 * '\x05' + '@' + (char)uVar7;
            }
            param_1 = param_1 + param_4;
          }
          return 0;
        }
        if (param_6 == 7) {
          pcVar8 = param_1;
          for (uVar6 = 0; uVar6 != param_3; uVar6 = uVar6 + 1) {
            for (uVar7 = 0; uVar7 != param_2; uVar7 = uVar7 + 1) {
              pcVar8[uVar7] = cVar2 * '\x03' + (char)uVar6 + (char)uVar7;
            }
            pcVar8 = pcVar8 + param_4;
          }
          param_2 = param_2 >> 1;
          pcVar8 = param_1 + param_2 + uVar4;
          for (uVar6 = 0; uVar6 != param_3; uVar6 = uVar6 + 1) {
            for (pcVar10 = pcVar8 + -param_2; pcVar8 != pcVar10; pcVar10 = pcVar10 + 1) {
              *pcVar10 = cVar2 * '\x02' + -0x80 + (char)(uVar6 >> 1);
            }
            pcVar8 = pcVar8 + (param_4 >> 1);
          }
          param_1 = param_1 + (uVar4 >> 1) + uVar4;
          for (uVar4 = 0; uVar4 != param_3; uVar4 = uVar4 + 1) {
            for (uVar6 = 0; param_2 != uVar6; uVar6 = uVar6 + 1) {
              param_1[uVar6] = cVar2 * '\x05' + '@' + (char)uVar6;
            }
            param_1 = param_1 + (param_4 >> 1);
          }
          return 0;
        }
      }
    }
    else {
      if (param_6 == 0xb) {
        for (uVar4 = 0; uVar4 != param_3; uVar4 = uVar4 + 1) {
          for (uVar6 = 0; uVar6 != param_2; uVar6 = uVar6 + 1) {
            param_1[uVar6] = cVar2 * '\x03' + (char)uVar4 + (char)uVar6;
          }
          param_1 = param_1 + param_4;
        }
        return 0;
      }
      if (param_6 < 0xc) {
        if (param_6 == 9) {
          for (uVar4 = 0; uVar4 != param_3; uVar4 = uVar4 + 1) {
            uVar6 = ((param_7 & 0xff) * 3 & 0xff) + uVar4;
            uVar7 = 0;
            pcVar8 = param_1;
            while( true ) {
              if (param_2 >> 1 == uVar7) break;
              cVar1 = (char)uVar6;
              *pcVar8 = cVar1;
              uVar6 = (uVar6 & 0xff) + 2;
              pcVar8[2] = cVar1 + '\x01';
              cVar1 = (char)uVar7;
              uVar7 = uVar7 + 1;
              pcVar8[1] = cVar2 * '\x02' + -0x80 + (char)(uVar4 >> 1);
              pcVar8[3] = cVar2 * '\x05' + '@' + cVar1;
              pcVar8 = pcVar8 + 4;
            }
            param_1 = param_1 + param_4 * 2;
          }
          return 0;
        }
        if (param_6 == 10) {
          for (uVar4 = 0; uVar4 != param_3; uVar4 = uVar4 + 1) {
            uVar6 = ((param_7 & 0xff) * 3 & 0xff) + uVar4;
            uVar7 = 0;
            pcVar8 = param_1;
            while( true ) {
              if (param_2 >> 1 == uVar7) break;
              cVar1 = (char)uVar6;
              pcVar8[1] = cVar1;
              uVar6 = (uVar6 & 0xff) + 2;
              pcVar8[3] = cVar1 + '\x01';
              cVar1 = (char)uVar7;
              uVar7 = uVar7 + 1;
              *pcVar8 = cVar2 * '\x02' + -0x80 + (char)(uVar4 >> 1);
              pcVar8[2] = cVar2 * '\x05' + '@' + cVar1;
              pcVar8 = pcVar8 + 4;
            }
            param_1 = param_1 + param_4 * 2;
          }
          return 0;
        }
      }
      else {
        if (param_6 == 0x11) {
          for (uVar4 = 0; uVar4 != param_3; uVar4 = uVar4 + 1) {
            uVar6 = ((param_7 & 0xff) * 3 & 0xff) + uVar4;
            uVar7 = 0;
            pcVar8 = param_1;
            while( true ) {
              if (param_2 >> 1 == uVar7) break;
              cVar1 = (char)uVar6;
              *pcVar8 = cVar1;
              uVar6 = (uVar6 & 0xff) + 2;
              pcVar8[2] = cVar1 + '\x01';
              cVar1 = (char)uVar7;
              uVar7 = uVar7 + 1;
              pcVar8[3] = cVar2 * '\x02' + -0x80 + (char)(uVar4 >> 1);
              pcVar8[1] = cVar2 * '\x05' + '@' + cVar1;
              pcVar8 = pcVar8 + 4;
            }
            param_1 = param_1 + param_4 * 2;
          }
          return 0;
        }
        if (param_6 == 0x12) {
          for (uVar4 = 0; uVar4 != param_3; uVar4 = uVar4 + 1) {
            uVar6 = ((param_7 & 0xff) * 3 & 0xff) + uVar4;
            uVar7 = 0;
            pcVar8 = param_1;
            while( true ) {
              if (param_2 >> 1 == uVar7) break;
              cVar1 = (char)uVar6;
              pcVar8[1] = cVar1;
              uVar6 = (uVar6 & 0xff) + 2;
              pcVar8[3] = cVar1 + '\x01';
              cVar1 = (char)uVar7;
              uVar7 = uVar7 + 1;
              pcVar8[2] = cVar2 * '\x02' + -0x80 + (char)(uVar4 >> 1);
              *pcVar8 = cVar2 * '\x05' + '@' + cVar1;
              pcVar8 = pcVar8 + 4;
            }
            param_1 = param_1 + param_4 * 2;
          }
          return 0;
        }
      }
    }
LAB_000161f4:
    RK_LOG(2,DAT_00016be0,DAT_00016bdc,DAT_00016be4,0x2df,param_6);
    return 0xffffffff;
  }
LAB_000163e8:
  uVar4 = 0;
  pcVar9 = *(code **)(DAT_00016bf0 + (param_6 - 0x10000) * 4);
  iVar5 = FUN_00016078(*DAT_00016bec,param_2,param_4,2);
  if (iVar5 != 0) {
    param_4 = param_4 << 1;
    *puVar3 = 1;
  }
  puVar3 = DAT_00016bf4;
  iVar5 = FUN_00016108(*DAT_00016bf4,param_4,2,DAT_00016c00);
  if (iVar5 != 0) {
    param_4 = param_4 + 0xf & 0xfffffff0;
    *puVar3 = 1;
  }
  for (; uVar4 != param_3; uVar4 = uVar4 + 1) {
    for (uVar6 = 0; uVar6 != param_2; uVar6 = uVar6 + 1) {
      FUN_0001598c(&local_34,&local_30,auStack_2c,uVar6,uVar4,param_7);
      (*pcVar9)(param_1 + uVar6 * 2,local_34,local_30,auStack_2c[0],1);
    }
    param_1 = param_1 + param_4;
  }
  return 0;
}



/* ===== FUN_00016cbc @ 00016cbc size=236 ===== */

undefined4 FUN_00016cbc(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  char *__format;
  undefined4 uVar2;
  char acStack_158 [16];
  undefined1 auStack_148 [304];
  
  iVar1 = DAT_00016db4;
  if (param_1 < 8) {
    setlinebuf((FILE *)*DAT_00016db0);
    __format = DAT_00016dc0;
    if (param_4 == 0) {
      puts(DAT_00016db8);
      uVar2 = 0;
    }
    else {
      *(undefined4 *)(DAT_00016dbc + param_1 * 4) = param_2;
      snprintf(acStack_158,0x10,__format,param_2);
      setenv(DAT_00016dc4,acStack_158,1);
      rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId(param_1,auStack_148);
      printf(DAT_00016dc8,param_1,auStack_148,param_4);
      rk_aiq_uapi2_sysctl_preInit_devBufCnt(auStack_148,DAT_00016dcc,2);
      uVar2 = rk_aiq_uapi2_sysctl_init(auStack_148,param_4,DAT_00016dd4,DAT_00016dd0);
      if (param_3 != 0) {
        rk_aiq_uapi2_sysctl_setMulCamConc(uVar2,1);
      }
    }
    *(undefined4 *)(iVar1 + param_1 * 4) = uVar2;
    uVar2 = 0;
  }
  else {
    printf(DAT_00016dac,DAT_00016da8);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== FUN_00016dd8 @ 00016dd8 size=488 ===== */

int FUN_00016dd8(int param_1,ushort *param_2,int param_3)

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
  iVar3 = DAT_00016fc4;
  __format = DAT_00016fc0;
  __s = param_2;
  if ((int)param_2 - 1U < 2) {
    iVar4 = rk_aiq_uapi2_camgroup_getCamInfos
                      (*(undefined4 *)(DAT_00016fc4 + param_1 * 4),&local_108);
    if (iVar4 == 0) {
      piVar7 = &local_108;
      iVar4 = 0;
      for (iVar8 = 0; iVar8 < local_108; iVar8 = iVar8 + 1) {
        iVar6 = rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm
                          (*(undefined4 *)(iVar3 + param_1 * 4),piVar7[1]);
        if (iVar6 == 0) {
          puts(DAT_00016fe0);
          goto LAB_00016fb0;
        }
        printf(DAT_00016fc8,piVar7[1],piVar7[9]);
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
              puts(DAT_00016fcc);
              local_84 = -1;
            }
            else {
              uVar1 = __s[2];
              uVar2 = __s[3];
              printf(DAT_00016fd4,(uint)*__s,(uint)__s[1],(uint)uVar1,(uint)uVar2,(uint)__s[4],
                     (uint)__s[5]);
              local_84 = ((uint)uVar2 * (uint)uVar1 + 6) * 2;
            }
          }
          else {
            pcVar5 = strrchr((char *)__s,0x2f);
            __format = DAT_00016fd8;
            if (pcVar5 == (char *)0x0) goto LAB_00016f30;
            local_bc = 1;
            local_8c = 1;
            local_90 = (ushort *)0x1;
            memcpy(&local_88,__s,(size_t)(pcVar5 + (1 - (int)__s)));
            strcpy(acStack_48,pcVar5 + 1);
            printf(DAT_00016fdc,&local_88,acStack_48);
          }
          iVar6 = rk_aiq_user_api2_aldch_v21_SetAttrib(iVar6,auStack_c4);
          iVar4 = 0;
          if (iVar6 != 0) {
            printf(DAT_00016fd0,iVar6);
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
LAB_00016f30:
    printf(__format,__s);
LAB_00016fb0:
    iVar4 = -1;
  }
  return iVar4;
}



/* ===== FUN_00016fe4 @ 00016fe4 size=352 ===== */

undefined4
FUN_00016fe4(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5,
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
  
  uVar1 = DAT_00017168;
  __format_00 = DAT_00017164;
  __format = DAT_00017160;
  if (param_1 < 8) {
    for (iVar4 = 0; iVar3 = DAT_00017154, iVar4 < *(int *)(param_6 + 0x20); iVar4 = iVar4 + 1) {
      iVar3 = rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId(iVar4,acStack_558);
      __s = DAT_0001714c;
      if (iVar3 != 0) goto LAB_0001703c;
      printf(__format,param_1,iVar4,acStack_558,*(undefined4 *)(param_6 + 0x24));
      __dest = auStack_428 + iVar4 * 0x80;
      sVar2 = strlen(acStack_558);
      memcpy(__dest,acStack_558,sVar2 + 1);
      *(undefined1 **)(param_6 + iVar4 * 4) = __dest;
      printf(__format_00,iVar4,__dest);
      iVar3 = rk_aiq_uapi2_sysctl_preInit_devBufCnt(acStack_558,uVar1,2);
      __s = DAT_00017150;
      if (iVar3 != 0) goto LAB_0001703c;
    }
    iVar4 = rk_aiq_uapi2_camgroup_create(param_6);
    *(int *)(iVar3 + param_1 * 4) = iVar4;
    __s = DAT_00017158;
    if (iVar4 != 0) {
      if (param_4 != 0) {
        FUN_00016dd8(param_1,param_4 & 0xff,param_5);
      }
      iVar4 = rk_aiq_uapi2_camgroup_prepare(*(undefined4 *)(iVar3 + param_1 * 4),param_2);
      iVar3 = rk_aiq_uapi2_camgroup_start(*(undefined4 *)(iVar3 + param_1 * 4));
      __s = DAT_0001715c;
      if (iVar4 == 0 && iVar3 == 0) {
        puts(DAT_0001716c);
        return 0;
      }
    }
LAB_0001703c:
    puts(__s);
  }
  else {
    printf(DAT_00017148,DAT_00017144,8);
  }
  return 0xffffffff;
}



/* ===== FUN_00017170 @ 00017170 size=112 ===== */

undefined4 FUN_00017170(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_000171e0;
  if ((param_1 < 8) && (*(int *)(DAT_000171e0 + param_1 * 4) != 0)) {
    puts(DAT_000171ec);
    rk_aiq_uapi2_sysctl_stop(*(undefined4 *)(iVar1 + param_1 * 4),0);
    puts(DAT_000171f0);
    rk_aiq_uapi2_sysctl_deinit(*(undefined4 *)(iVar1 + param_1 * 4));
    puts(DAT_000171f4);
    *(undefined4 *)(iVar1 + param_1 * 4) = 0;
    return 0;
  }
  printf(DAT_000171e8,DAT_000171e4,param_1);
  return 0xffffffff;
}



/* ===== FUN_00017278 @ 00017278 size=152 ===== */

undefined4 FUN_00017278(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_00017310;
  if ((param_1 < 8) && (iVar1 = *(int *)(DAT_00017310 + param_1 * 4), iVar1 != 0)) {
    iVar1 = rk_aiq_uapi2_sysctl_prepare(iVar1,0,0,*(undefined4 *)(DAT_0001731c + param_1 * 4));
    if (iVar1 == 0) {
      puts(DAT_00017324);
      iVar2 = rk_aiq_uapi2_sysctl_start(*(undefined4 *)(iVar2 + param_1 * 4));
      if (iVar2 == 0) {
        puts(DAT_0001732c);
        return 0;
      }
      puts(DAT_00017328);
    }
    else {
      puts(DAT_00017320);
      *(undefined4 *)(iVar2 + param_1 * 4) = 0;
    }
  }
  else {
    printf(DAT_00017318,DAT_00017314);
  }
  return 0xffffffff;
}



/* ===== FUN_000176dc @ 000176dc size=136 ===== */

uint FUN_000176dc(int param_1,int param_2,int param_3,byte param_4,char param_5,char param_6,
                 int param_7)

{
  uint uVar1;
  byte bVar2;
  
  uVar1 = 0;
  bVar2 = param_4;
  while (bVar2 = bVar2 - 1, bVar2 != 0xff) {
    uVar1 = uVar1 | 1 << (uint)bVar2;
  }
  return (param_2 >> (uint)(byte)(8 - param_6) & 0xffU) << (uint)(byte)(param_4 + param_5) |
         (param_3 >> (8U - param_7 & 0xff) & 0xffU) << (uint)(byte)(param_5 + param_6 + param_4) |
         (param_1 >> (uint)(byte)(8 - param_5) & 0xffU) << (uint)param_4 | uVar1;
}



/* ===== FUN_00017764 @ 00017764 size=144 ===== */

uint FUN_00017764(int param_1,int param_2,int param_3,char param_4,char param_5,char param_6,
                 byte param_7)

{
  uint uVar1;
  byte bVar2;
  
  bVar2 = param_4 + param_5 + param_6 + param_7;
  uVar1 = 0;
  while( true ) {
    bVar2 = bVar2 - 1;
    if (param_4 == '\0') break;
    param_4 = param_4 + -1;
    uVar1 = uVar1 | 1 << (uint)bVar2;
  }
  return param_3 >> (uint)(byte)(8 - param_7) & 0xffU |
         (param_2 >> (uint)(byte)(8 - param_6) & 0xffU) << (uint)param_7 |
         (param_1 >> (uint)(byte)(8 - param_5) & 0xffU) << (uint)(byte)(param_6 + param_7) | uVar1;
}



/* ===== FUN_000177f4 @ 000177f4 size=184 ===== */

undefined4 FUN_000177f4(char *param_1,void *param_2,void *param_3)

{
  FILE *__stream;
  undefined4 uStack_1c;
  void *pvStack_18;
  
  uStack_1c = param_2;
  pvStack_18 = param_3;
  if (param_1 == (char *)0x0) {
    puts(DAT_000178ac);
  }
  else {
    __stream = fopen64(param_1,DAT_000178b0);
    if (__stream == (FILE *)0x0) {
      printf(DAT_000178b4,param_1);
    }
    else {
      fread((void *)((int)&uStack_1c + 2),1,2,__stream);
      if (uStack_1c._2_2_ == 0x4d42) {
        fread(param_2,1,0xc,__stream);
        fread(param_3,1,0x2c,__stream);
        fclose(__stream);
        return 0;
      }
      puts(DAT_000178b8);
      fclose(__stream);
    }
  }
  return 0xffffffff;
}



/* ===== FUN_000178bc @ 000178bc size=872 ===== */

undefined4 FUN_000178bc(char *param_1,uint *param_2,uint param_3)

{
  uint __n;
  undefined2 uVar1;
  int iVar2;
  char *__s;
  FILE *__stream;
  void *__ptr;
  size_t sVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined2 *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  size_t __size;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint local_6c;
  undefined1 auStack_60 [8];
  long local_58;
  undefined1 auStack_54 [4];
  ushort local_50;
  uint local_4c;
  ushort local_46;
  int local_44;
  
  __s = DAT_00017c4c;
  if (param_1 != (char *)0x0) {
    iVar2 = FUN_000177f4(param_1,auStack_60,auStack_54);
    if (iVar2 < 0) {
      return 0xffffffff;
    }
    __n = (uint)(local_46 >> 3);
    __s = DAT_00017c50;
    if (((0xf < local_46) && (__s = DAT_00017c54, local_44 == 0)) &&
       (__s = DAT_00017c58, -1 < (int)local_4c)) {
      __stream = fopen64(param_1,DAT_00017c5c);
      if (__stream == (FILE *)0x0) {
        printf(DAT_00017c60,param_1);
        return 0xffffffff;
      }
      uVar8 = (uint)local_50;
      *param_2 = uVar8;
      if ((int)local_4c < 1) {
        local_4c = -local_4c;
      }
      uVar11 = local_4c & 0xffff;
      param_2[1] = uVar11;
      uVar12 = uVar8 * __n;
      if ((uVar12 & 3) != 0) {
        uVar12 = (uVar12 & 0xfffc) + 4;
      }
      __size = uVar11 * uVar12;
      __ptr = malloc(__size);
      if (__ptr == (void *)0x0) {
        puts(DAT_00017c64);
        fclose(__stream);
        return 0xffffffff;
      }
      uVar14 = param_2[3];
      fseek(__stream,local_58,0);
      sVar3 = fread(__ptr,1,__size,__stream);
      if (__size - sVar3 != 0) {
        printf(DAT_00017c68,uVar11,uVar12,0xb6);
        return 0xffffffff;
      }
      if (param_3 < 6) {
        uVar13 = *param_2 << 1;
      }
      else {
        uVar13 = *param_2 << 2;
      }
      param_2[2] = uVar13;
      local_6c = 0;
      iVar2 = DAT_00017c6c + param_3 * 0x10;
      do {
        uVar13 = local_6c & 0xffff;
        if (uVar11 <= uVar13) {
          free(__ptr);
          fclose(__stream);
          return 0;
        }
        iVar9 = uVar12 * ((uVar11 - 1) - uVar13);
        for (uVar10 = 0; uVar5 = uVar10 & 0xffff, uVar5 < uVar8; uVar10 = uVar10 + 1) {
          if (__n != 3) {
            if ((__n - 2 & 0xfffd) == 0) {
              memcpy((void *)(uVar14 + param_2[2] * uVar13 + __n * uVar5),
                     (void *)((int)__ptr + __n * uVar5 + iVar9),__n);
            }
            goto LAB_00017ad8;
          }
          switch(param_3) {
          case 0:
          case 2:
          case 3:
          case 4:
            iVar7 = param_2[2] * uVar13 + uVar5 * 2;
            iVar16 = uVar5 * 3 + iVar9;
            uVar1 = FUN_000176dc(*(undefined1 *)((int)__ptr + iVar16 + 2),
                                 *(undefined1 *)((int)__ptr + iVar16 + 1),
                                 *(undefined1 *)((int)__ptr + iVar16),
                                 *(undefined4 *)(DAT_00017c6c + param_3 * 0x10),
                                 *(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8),
                                 *(undefined4 *)(iVar2 + 0xc));
            goto LAB_00017ad4;
          default:
            printf(DAT_00017c78,DAT_00017c74,0xea);
            break;
          case 5:
            iVar7 = param_2[2] * uVar13 + uVar5 * 2;
            iVar16 = uVar5 * 3 + iVar9;
            uVar1 = FUN_00017764(*(undefined1 *)((int)__ptr + iVar16 + 2),
                                 *(undefined1 *)((int)__ptr + iVar16 + 1),
                                 *(undefined1 *)((int)__ptr + iVar16),DAT_00017c70[-1],*DAT_00017c70
                                 ,DAT_00017c70[1],DAT_00017c70[2]);
LAB_00017ad4:
            *(undefined2 *)(uVar14 + iVar7) = uVar1;
            break;
          case 6:
          case 8:
            uVar15 = param_2[2];
            iVar7 = uVar5 * 3 + iVar9;
            uVar4 = FUN_000176dc(*(undefined1 *)((int)__ptr + iVar7 + 2),
                                 *(undefined1 *)((int)__ptr + iVar7 + 1),
                                 *(undefined1 *)((int)__ptr + iVar7),
                                 *(undefined4 *)(DAT_00017c6c + param_3 * 0x10),
                                 *(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8),
                                 *(undefined4 *)(iVar2 + 0xc));
            *(undefined4 *)(uVar14 + uVar15 * uVar13 + uVar5 * 4) = uVar4;
            break;
          case 7:
          case 9:
            iVar7 = param_2[2] * uVar13 + uVar5 * 4;
            puVar6 = (undefined2 *)((int)__ptr + uVar5 * 3 + iVar9);
            *(undefined2 *)(uVar14 + iVar7) = *puVar6;
            *(undefined1 *)(uVar14 + iVar7 + 2) = *(undefined1 *)(puVar6 + 1);
            *(undefined1 *)(param_2[2] * uVar13 + uVar14 + uVar5 * 4 + 3) = 0xff;
          }
LAB_00017ad8:
        }
        local_6c = local_6c + 1;
      } while( true );
    }
  }
  puts(__s);
  return 0xffffffff;
}



/* ===== FUN_00017c7c @ 00017c7c size=76 ===== */

char * FUN_00017c7c(char *param_1)

{
  char *pcVar1;
  size_t sVar2;
  char *pcVar3;
  char *pcVar4;
  
  if (param_1 == (char *)0x0) {
    printf(DAT_00017cc8);
    pcVar4 = (char *)0x0;
  }
  else {
    sVar2 = strlen(param_1);
    pcVar1 = param_1 + sVar2;
    pcVar3 = (char *)0x0;
    do {
      pcVar4 = pcVar1;
      if (pcVar4 == param_1) {
        return pcVar3;
      }
      pcVar1 = pcVar4 + -1;
      pcVar3 = pcVar4;
    } while (*pcVar4 != '.');
    pcVar4 = pcVar4 + 1;
  }
  return pcVar4;
}



/* ===== FUN_00017ccc @ 00017ccc size=84 ===== */

undefined4 FUN_00017ccc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = (char *)FUN_00017c7c();
  iVar2 = strcmp(pcVar1,DAT_00017d20);
  pcVar1 = DAT_00017d28;
  if ((iVar2 == 0) &&
     (iVar2 = FUN_000178bc(param_1,param_2,param_3), pcVar1 = DAT_00017d24, iVar2 == 0)) {
    return 0;
  }
  puts(pcVar1);
  return 0xffffffff;
}



/* ===== FUN_00017d2c @ 00017d2c size=84 ===== */

undefined4 FUN_00017d2c(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined4 *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_18 = param_1;
  local_14 = param_2;
  local_10 = param_3;
  local_c = param_3;
  iVar1 = FUN_00017ccc(param_1,&local_18,*param_2);
  if (iVar1 < 0) {
    puts(DAT_00017d80);
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
    *(short *)(param_2 + 2) = (short)local_14;
    *(short *)((int)param_2 + 10) = (short)local_18;
    *(short *)(param_2 + 3) = (short)local_10;
  }
  return uVar2;
}



/* ===== FUN_00017d88 @ 00017d88 size=28 ===== */

int FUN_00017d88(void)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  return *piVar1;
}



/* ===== FUN_00017da4 @ 00017da4 size=40 ===== */

char * FUN_00017da4(int param_1)

{
  char *pcVar1;
  
  pcVar1 = strerror(param_1);
  return pcVar1;
}



/* ===== FUN_00017dcc @ 00017dcc size=156 ===== */

void * FUN_00017dcc(void)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,0x14);
  if (pvVar1 == (void *)0x0) {
    printf((char *)(DAT_00017e70 + 0x17e18),DAT_00017e6c + 0x17e10,0x9a,DAT_00017e68 + 0x17e04);
    pvVar1 = (void *)0x0;
  }
  else {
    *(undefined4 *)((int)pvVar1 + 4) = 0;
    *(int *)((int)pvVar1 + 8) = (int)pvVar1 + 4;
    *(undefined4 *)((int)pvVar1 + 0xc) = 0;
    *(int *)((int)pvVar1 + 0x10) = (int)pvVar1 + 0xc;
  }
  return pvVar1;
}



/* ===== FUN_00017e74 @ 00017e74 size=48 ===== */

void FUN_00017e74(void *param_1)

{
  if (param_1 != (void *)0x0) {
    free(param_1);
  }
  return;
}



/* ===== FUN_00017ea4 @ 00017ea4 size=204 ===== */

void * FUN_00017ea4(int param_1)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,0x168);
  if (pvVar1 == (void *)0x0) {
    printf((char *)(DAT_00017f78 + 0x17ef4),DAT_00017f74 + 0x17eec,0xad,DAT_00017f70 + 0x17ee0);
    pvVar1 = (void *)0x0;
  }
  else {
    *(int *)((int)pvVar1 + 0x150) = param_1;
    *(undefined4 *)((int)pvVar1 + 0x154) = 0;
    *(int *)((int)pvVar1 + 0x158) = (int)pvVar1 + 0x154;
    *(undefined4 *)((int)pvVar1 + 0x15c) = 0;
    *(undefined4 *)((int)pvVar1 + 0x160) = *(undefined4 *)(param_1 + 8);
    **(undefined4 **)(param_1 + 8) = pvVar1;
    *(int *)(param_1 + 8) = (int)pvVar1 + 0x15c;
  }
  return pvVar1;
}



/* ===== FUN_00017f7c @ 00017f7c size=136 ===== */

void FUN_00017f7c(void *param_1)

{
  if (param_1 != (void *)0x0) {
    if (*(int *)((int)param_1 + 0x15c) == 0) {
      *(undefined4 *)(*(int *)((int)param_1 + 0x150) + 8) = *(undefined4 *)((int)param_1 + 0x160);
    }
    else {
      *(undefined4 *)(*(int *)((int)param_1 + 0x15c) + 0x160) =
           *(undefined4 *)((int)param_1 + 0x160);
    }
    **(undefined4 **)((int)param_1 + 0x160) = *(undefined4 *)((int)param_1 + 0x15c);
    free(param_1);
  }
  return;
}



/* ===== FUN_00018004 @ 00018004 size=180 ===== */

void * FUN_00018004(int param_1)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,0x434);
  if (pvVar1 == (void *)0x0) {
    printf((char *)(DAT_000180c0 + 0x18054),DAT_000180bc + 0x1804c,0xc4,DAT_000180b8 + 0x18040);
    pvVar1 = (void *)0x0;
  }
  else {
    *(int *)((int)pvVar1 + 0x41c) = param_1;
    *(undefined4 *)((int)pvVar1 + 0x424) = 0;
    *(undefined4 *)((int)pvVar1 + 0x428) = *(undefined4 *)(param_1 + 0x10);
    **(undefined4 **)(param_1 + 0x10) = pvVar1;
    *(int *)(param_1 + 0x10) = (int)pvVar1 + 0x424;
  }
  return pvVar1;
}



/* ===== FUN_000180c4 @ 000180c4 size=136 ===== */

void FUN_000180c4(void *param_1)

{
  if (param_1 != (void *)0x0) {
    if (*(int *)((int)param_1 + 0x424) == 0) {
      *(undefined4 *)(*(int *)((int)param_1 + 0x41c) + 0x10) = *(undefined4 *)((int)param_1 + 0x428)
      ;
    }
    else {
      *(undefined4 *)(*(int *)((int)param_1 + 0x424) + 0x428) =
           *(undefined4 *)((int)param_1 + 0x428);
    }
    **(undefined4 **)((int)param_1 + 0x428) = *(undefined4 *)((int)param_1 + 0x424);
    free(param_1);
  }
  return;
}



/* ===== FUN_0001814c @ 0001814c size=128 ===== */

void FUN_0001814c(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x420) == 0) {
    *(int *)(param_1 + 0x420) = param_2;
    *(undefined4 *)(param_1 + 0x42c) = 0;
    *(undefined4 *)(param_1 + 0x430) = *(undefined4 *)(param_2 + 0x158);
    **(int **)(param_2 + 0x158) = param_1;
    *(int *)(param_2 + 0x158) = param_1 + 0x42c;
  }
  return;
}



/* ===== FUN_000181cc @ 000181cc size=144 ===== */

void FUN_000181cc(int param_1)

{
  if (*(int *)(param_1 + 0x420) != 0) {
    if (*(int *)(param_1 + 0x42c) == 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x420) + 0x158) = *(undefined4 *)(param_1 + 0x430);
    }
    else {
      *(undefined4 *)(*(int *)(param_1 + 0x42c) + 0x430) = *(undefined4 *)(param_1 + 0x430);
    }
    **(undefined4 **)(param_1 + 0x430) = *(undefined4 *)(param_1 + 0x42c);
    *(undefined4 *)(param_1 + 0x420) = 0;
  }
  return;
}



/* ===== FUN_0001825c @ 0001825c size=536 ===== */

int * FUN_0001825c(int param_1)

{
  undefined4 uVar1;
  int local_2c;
  sockaddr local_24;
  int local_14;
  int local_10;
  int *local_c;
  
  local_c = (int *)0x0;
  local_c = (int *)FUN_00017dcc();
  if (local_c == (int *)0x0) {
    local_c = (int *)0x0;
  }
  else {
    local_10 = socket(2,1,0);
    if (local_10 == -1) {
      uVar1 = FUN_00017d88();
      uVar1 = FUN_00017da4(uVar1);
      printf((char *)(DAT_0001847c + 0x182e8),DAT_00018478 + 0x182e0,0xfa,DAT_00018474 + 0x182d4,
             uVar1);
      FUN_00017e74(local_c);
      local_c = (int *)0x0;
    }
    else {
      local_2c = param_1;
      if (param_1 < 1) {
        local_2c = 0x22a;
      }
      memset(&local_24,0,0x10);
      local_24.sa_family = 2;
      local_24.sa_data._2_4_ = htonl(0);
      local_24.sa_data._0_2_ = htons((uint16_t)local_2c);
      local_14 = bind(local_10,&local_24,0x10);
      if (local_14 == -1) {
        uVar1 = FUN_00017d88();
        uVar1 = FUN_00017da4(uVar1);
        printf((char *)(DAT_00018488 + 0x183ac),DAT_00018484 + 0x183a4,0x108,DAT_00018480 + 0x18398,
               uVar1);
        close(local_10);
        FUN_00017e74(local_c);
        local_c = (int *)0x0;
      }
      else {
        local_14 = listen(local_10,0x80);
        if (local_14 == -1) {
          uVar1 = FUN_00017d88();
          uVar1 = FUN_00017da4(uVar1);
          printf((char *)(DAT_00018494 + 0x18418),DAT_00018490 + 0x18410,0x110,
                 DAT_0001848c + 0x18404,uVar1);
          close(local_10);
          FUN_00017e74(local_c);
          local_c = (int *)0x0;
        }
        else {
          *local_c = local_10;
          printf((char *)(DAT_000184a0 + 0x18464),DAT_0001849c + 0x1845c,0x118,
                 DAT_00018498 + 0x18450,local_2c);
        }
      }
    }
  }
  return local_c;
}



/* ===== FUN_000184a4 @ 000184a4 size=932 ===== */

undefined4 FUN_000184a4(int param_1)

{
  int *piVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  
  local_10 = 0x80000;
  local_14 = 1;
  local_18 = 0x3c;
  local_1c = 3;
  local_20 = 5;
  local_c = fcntl(param_1,3,0);
  if ((int)local_c < 0) {
    piVar1 = __errno_location();
    pcVar2 = strerror(*piVar1);
    printf((char *)(DAT_00018850 + 0x18538),DAT_0001884c + 0x18530,0x15b,DAT_00018848 + 0x18524,
           pcVar2);
  }
  else {
    local_c = local_c | 0x800;
    local_c = fcntl(param_1,4,local_c);
    if ((int)local_c < 0) {
      piVar1 = __errno_location();
      pcVar2 = strerror(*piVar1);
      printf((char *)(DAT_0001885c + 0x185a4),DAT_00018858 + 0x1859c,0x160,DAT_00018854 + 0x18590,
             pcVar2);
    }
  }
  local_c = setsockopt(param_1,1,7,&local_10,4);
  if (local_c == -1) {
    uVar3 = FUN_00017d88();
    uVar3 = FUN_00017da4(uVar3);
    printf((char *)(DAT_00018868 + 0x1860c),DAT_00018864 + 0x18604,0x166,DAT_00018860 + 0x185f8,
           uVar3);
  }
  local_c = setsockopt(param_1,1,9,&local_14,4);
  if (local_c == -1) {
    uVar3 = FUN_00017d88();
    uVar3 = FUN_00017da4(uVar3);
    printf((char *)(DAT_00018874 + 0x18674),DAT_00018870 + 0x1866c,0x16b,DAT_0001886c + 0x18660,
           uVar3);
  }
  local_c = setsockopt(param_1,6,4,&local_18,4);
  if (local_c == -1) {
    uVar3 = FUN_00017d88();
    uVar3 = FUN_00017da4(uVar3);
    printf((char *)(DAT_00018880 + 0x186dc),DAT_0001887c + 0x186d4,0x170,DAT_00018878 + 0x186c8,
           uVar3);
  }
  local_c = setsockopt(param_1,6,5,&local_1c,4);
  if (local_c == -1) {
    uVar3 = FUN_00017d88();
    uVar3 = FUN_00017da4(uVar3);
    printf((char *)(DAT_0001888c + 0x18744),DAT_00018888 + 0x1873c,0x175,DAT_00018884 + 0x18730,
           uVar3);
  }
  local_c = setsockopt(param_1,6,6,&local_20,4);
  if (local_c == -1) {
    uVar3 = FUN_00017d88();
    uVar3 = FUN_00017da4(uVar3);
    printf((char *)(DAT_00018898 + 0x187ac),DAT_00018894 + 0x187a4,0x17a,DAT_00018890 + 0x18798,
           uVar3);
  }
  memset(&local_28,0,8);
  local_28 = 1;
  local_24 = 0;
  local_c = setsockopt(param_1,1,0xd,&local_28,8);
  if (local_c == -1) {
    uVar3 = FUN_00017d88();
    uVar3 = FUN_00017da4(uVar3);
    printf((char *)(DAT_000188a4 + 0x18838),DAT_000188a0 + 0x18830,0x182,DAT_0001889c + 0x18824,
           uVar3);
  }
  return 0;
}



/* ===== FUN_000188a8 @ 000188a8 size=304 ===== */

undefined4 * FUN_000188a8(int *param_1)

{
  uint16_t uVar1;
  undefined4 uVar2;
  char *pcVar3;
  socklen_t local_2c;
  undefined1 auStack_28 [16];
  int local_18;
  undefined4 *local_14;
  
  local_14 = (undefined4 *)0x0;
  local_2c = 0x10;
  local_18 = accept(*param_1,(sockaddr *)auStack_28,&local_2c);
  if (local_18 == -1) {
    uVar2 = FUN_00017d88();
    uVar2 = FUN_00017da4(uVar2);
    printf((char *)(DAT_000189e0 + 0x18928),DAT_000189dc + 0x18920,0x191,DAT_000189d8 + 0x18914,
           uVar2);
    local_14 = (undefined4 *)0x0;
  }
  else {
    FUN_000184a4(local_18);
    pcVar3 = inet_ntoa((in_addr)auStack_28._4_4_);
    uVar1 = ntohs(auStack_28._2_2_);
    printf((char *)(DAT_000189ec + 0x1897c),DAT_000189e8 + 0x18974,0x198,DAT_000189e4 + 0x18968,
           pcVar3,(uint)uVar1);
    local_14 = (undefined4 *)FUN_00018004(param_1);
    if (local_14 == (undefined4 *)0x0) {
      close(local_18);
      local_14 = (undefined4 *)0x0;
    }
    else {
      *local_14 = 0;
      local_14[1] = local_18;
      local_14[2] = auStack_28._4_4_;
    }
  }
  return local_14;
}



/* ===== FUN_000189f0 @ 000189f0 size=160 ===== */

void FUN_000189f0(int param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    uVar2 = *(undefined4 *)(param_1 + 4);
    pcVar1 = inet_ntoa((in_addr)*(in_addr_t *)(param_1 + 8));
    printf((char *)(DAT_00018a98 + 0x18a4c),DAT_00018a94 + 0x18a44,0x1ab,DAT_00018a90 + 0x18a38,
           uVar2,pcVar1);
    FUN_000181cc(param_1);
    FUN_0001a4a8(param_1,0);
    FUN_0001a4a8(param_1,1);
    close(*(int *)(param_1 + 4));
    FUN_000180c4(param_1);
  }
  return;
}



/* ===== FUN_00018a9c @ 00018a9c size=408 ===== */

bool FUN_00018a9c(char *param_1,char *param_2)

{
  size_t sVar1;
  int iVar2;
  undefined4 local_8c;
  char local_88 [4];
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
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
  char local_48 [4];
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 uStack_c;
  
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  uStack_84 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_80 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_7c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_88[0] = '\0';
  local_88[1] = '\0';
  local_88[2] = '\0';
  local_88[3] = '\0';
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_8c = param_1;
  uStack_74 = uStack_84;
  uStack_6c = uStack_84;
  uStack_64 = uStack_84;
  uStack_5c = uStack_84;
  uStack_54 = uStack_84;
  uStack_4c = uStack_84;
  uStack_34 = uStack_44;
  uStack_2c = uStack_44;
  uStack_24 = uStack_44;
  uStack_1c = uStack_44;
  uStack_14 = uStack_44;
  uStack_c = uStack_44;
  strncpy(local_48,param_1,0x3e);
  strncpy(local_88,param_2,0x3e);
  sVar1 = strlen(local_48);
  if (*(char *)((int)&uStack_4c + sVar1 + 3) != '/') {
    sVar1 = strlen(local_48);
    *(undefined2 *)(local_48 + sVar1) = *(undefined2 *)(DAT_00018c34 + 0x18b98);
  }
  sVar1 = strlen(local_88);
  if (*(char *)((int)&local_8c + sVar1 + 3) != '/') {
    sVar1 = strlen(local_88);
    *(undefined2 *)(local_88 + sVar1) = *(undefined2 *)(DAT_00018c38 + 0x18bec);
  }
  sVar1 = strlen(local_48);
  iVar2 = strncmp(local_48,local_88,sVar1);
  return iVar2 == 0;
}



/* ===== FUN_00018c3c @ 00018c3c size=416 ===== */

char * FUN_00018c3c(int param_1,char *param_2)

{
  int iVar1;
  char *local_c;
  
  local_c = (char *)0x0;
  if (((param_1 == 0) || (param_2 == (char *)0x0)) || (*param_2 == '\0')) {
    printf((char *)(DAT_00018de4 + 0x18ca8),DAT_00018de0 + 0x18ca0,0x1cc,DAT_00018ddc + 0x18c94);
  }
  else {
    for (local_c = *(char **)(param_1 + 4); local_c != (char *)0x0;
        local_c = *(char **)(local_c + 0x15c)) {
      iVar1 = FUN_00018a9c(local_c,param_2);
      if ((iVar1 != 0) || (iVar1 = FUN_00018a9c(param_2,local_c), iVar1 != 0)) {
        printf((char *)(DAT_00018df0 + 0x18d24),DAT_00018dec + 0x18d1c,0x1d2,DAT_00018de8 + 0x18d10,
               local_c,param_2);
        goto LAB_00018db8;
      }
    }
    local_c = (char *)FUN_00017ea4(param_1);
    if (local_c != (char *)0x0) {
      strncpy(local_c,param_2,0x3f);
      local_c[0x40] = '\0';
      local_c[0x41] = '\0';
      local_c[0x42] = '\0';
      local_c[0x43] = '\0';
      local_c[0x44] = '\0';
      local_c[0x45] = '\0';
      local_c[0x46] = '\0';
      local_c[0x47] = '\0';
      printf((char *)(DAT_00018dfc + 0x18dac),DAT_00018df8 + 0x18da4,0x1e0,DAT_00018df4 + 0x18d98,
             local_c);
      return local_c;
    }
  }
LAB_00018db8:
  if (local_c != (char *)0x0) {
    free(local_c);
  }
  return (char *)0x0;
}



/* ===== FUN_00018e00 @ 00018e00 size=40 ===== */

undefined4 FUN_00018e00(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001825c(param_1);
  return uVar1;
}



/* ===== FUN_00018e28 @ 00018e28 size=72 ===== */

undefined4 FUN_00018e28(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00018c3c(param_1,param_2);
  FUN_00018e70(uVar1,1,0,0);
  return uVar1;
}



/* ===== FUN_00018e70 @ 00018e70 size=596 ===== */

undefined4 FUN_00018e70(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 == 0) || ((*(int *)(param_1 + 0x40) != 0 && (param_2 != *(int *)(param_1 + 0x40)))))
  {
    uVar2 = 0xffffffff;
  }
  else if (param_2 - 1U < 2) {
    *(int *)(param_1 + 0x40) = param_2;
    *(undefined1 *)(param_1 + 0x118) = 0x60;
    *(undefined2 *)(param_1 + 0x11a) = 0;
    *(undefined4 *)(param_1 + 0x11c) = 0;
    *(undefined1 **)(param_1 + 0x120) = &LAB_00015f90;
    memset((void *)(param_1 + 0x48),0,0xcc);
    if ((param_3 != 0) && (0 < param_4)) {
      if (param_2 == 1) {
        iVar1 = FUN_00023dbc(param_3,param_4,param_1 + 0x48);
        if (iVar1 < 1) {
          printf((char *)(DAT_000190d8 + 0x18fe8),DAT_000190d4 + 0x18fe0,0x220,
                 DAT_000190d0 + 0x18fd4);
        }
      }
      else if ((param_2 == 2) && (iVar1 = FUN_00024020(param_3,param_4,param_1 + 0x48), iVar1 < 1))
      {
        printf((char *)(DAT_000190e4 + 0x19030),DAT_000190e0 + 0x19028,0x226,DAT_000190dc + 0x1901c)
        ;
      }
    }
    if (*(int *)(param_1 + 0x138) == 0) {
      uVar2 = FUN_0002348c(0x5b0,0x4b1);
      *(undefined4 *)(param_1 + 0x138) = uVar2;
      if (*(int *)(param_1 + 0x138) == 0) {
        printf((char *)(DAT_000190f0 + 0x190a0),DAT_000190ec + 0x19098,0x230,DAT_000190e8 + 0x1908c)
        ;
        *(undefined4 *)(param_1 + 0x40) = 0;
        return 0xffffffff;
      }
    }
    uVar2 = 0;
  }
  else {
    printf((char *)(DAT_000190cc + 0x18f04),DAT_000190c8 + 0x18efc,0x211,DAT_000190c4 + 0x18ef0,
           param_2);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== FUN_000190f4 @ 000190f4 size=516 ===== */

undefined4 FUN_000190f4(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 == 0) || ((*(int *)(param_1 + 0x44) != 0 && (param_2 != *(int *)(param_1 + 0x44)))))
  {
    uVar2 = 0xffffffff;
  }
  else if (param_2 - 0x4001U < 3) {
    *(int *)(param_1 + 0x44) = param_2;
    *(undefined1 *)(param_1 + 0x128) = 0x61;
    *(undefined2 *)(param_1 + 0x12a) = 0;
    *(undefined4 *)(param_1 + 300) = 0;
    *(undefined4 *)(param_1 + 0x130) = 8000;
    *(undefined1 *)(param_1 + 0x134) = 1;
    memset((void *)(param_1 + 0x114),0,4);
    if ((((param_3 != 0) && (0 < param_4)) && (param_2 == 0x4003)) &&
       (iVar1 = FUN_00024324(param_3,param_4,param_1 + 0x114), iVar1 < 1)) {
      printf((char *)(DAT_0001930c + 0x1926c),DAT_00019308 + 0x19264,0x255,DAT_00019304 + 0x19258);
    }
    if (*(int *)(param_1 + 0x13c) == 0) {
      uVar2 = FUN_0002348c(0x5b0,0x29);
      *(undefined4 *)(param_1 + 0x13c) = uVar2;
      if (*(int *)(param_1 + 0x13c) == 0) {
        printf((char *)(DAT_00019318 + 0x192d4),DAT_00019314 + 0x192cc,0x25f,DAT_00019310 + 0x192c0)
        ;
        *(undefined4 *)(param_1 + 0x44) = 0;
        return 0xffffffff;
      }
    }
    uVar2 = 0;
  }
  else {
    printf((char *)(DAT_00019300 + 0x1918c),DAT_000192fc + 0x19184,0x245,DAT_000192f8 + 0x19178,
           param_2);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== FUN_000193c0 @ 000193c0 size=196 ===== */

void FUN_000193c0(int param_1)

{
  if (param_1 != 0) {
    while (*(int *)(param_1 + 0x154) != 0) {
      FUN_000189f0(*(int *)(param_1 + 0x154));
    }
    printf((char *)(DAT_0001948c + 0x19430),DAT_00019488 + 0x19428,0x285,DAT_00019484 + 0x1941c,
           param_1);
    if (*(int *)(param_1 + 0x138) != 0) {
      FUN_00023920(*(undefined4 *)(param_1 + 0x138));
    }
    if (*(int *)(param_1 + 0x13c) != 0) {
      FUN_00023920(*(undefined4 *)(param_1 + 0x13c));
    }
    FUN_00017f7c(param_1);
  }
  return;
}



/* ===== FUN_00019490 @ 00019490 size=144 ===== */

void FUN_00019490(int *param_1)

{
  if (param_1 != (int *)0x0) {
    while (param_1[3] != 0) {
      FUN_000189f0(param_1[3]);
    }
    while (param_1[1] != 0) {
      FUN_000193c0(param_1[1]);
    }
    close(*param_1);
    FUN_00017e74(param_1);
  }
  return;
}



/* ===== FUN_00019520 @ 00019520 size=1128 ===== */

int FUN_00019520(int param_1,int param_2,char *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *local_c;
  
  iVar1 = sprintf(param_3,(char *)(DAT_00019988 + 0x19550));
  pcVar3 = param_3 + iVar1;
  iVar1 = sprintf(pcVar3,(char *)(DAT_0001998c + 0x19578));
  pcVar3 = pcVar3 + iVar1;
  iVar1 = sprintf(pcVar3,(char *)(DAT_00019990 + 0x195a0));
  pcVar3 = pcVar3 + iVar1;
  iVar1 = sprintf(pcVar3,(char *)(DAT_00019994 + 0x195c8));
  pcVar3 = pcVar3 + iVar1;
  iVar1 = param_2;
  if (param_2 == 0) {
    iVar1 = DAT_00019998 + 0x19604;
  }
  iVar1 = sprintf(pcVar3,(char *)(DAT_0001999c + 0x19610),iVar1);
  iVar2 = sprintf(pcVar3 + iVar1,(char *)(DAT_000199a0 + 0x19638));
  local_c = pcVar3 + iVar1 + iVar2;
  if (*(int *)(param_1 + 0x40) != 0) {
    if (*(int *)(param_1 + 0x40) == 1) {
      iVar1 = FUN_00024498(0x60,*(undefined4 *)(param_1 + 0x120),param_1 + 0x48,local_c,
                           param_4 - ((int)local_c - (int)param_3));
      local_c = local_c + iVar1;
    }
    else if (*(int *)(param_1 + 0x40) == 2) {
      iVar1 = FUN_000246e0(0x60,*(undefined4 *)(param_1 + 0x120),param_1 + 0x48,local_c,
                           param_4 - ((int)local_c - (int)param_3));
      local_c = local_c + iVar1;
    }
    if (param_2 == 0) {
      iVar1 = sprintf(local_c,(char *)(DAT_000199b0 + 0x19788),DAT_000199ac + 0x1977c);
      local_c = local_c + iVar1;
    }
    else {
      iVar1 = sprintf(local_c,(char *)(DAT_000199a8 + 0x19754),param_2,DAT_000199a4 + 0x19748);
      local_c = local_c + iVar1;
    }
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    iVar1 = *(int *)(param_1 + 0x44);
    if (iVar1 == 0x4002) {
      iVar1 = FUN_00024a80(0x61,*(undefined4 *)(param_1 + 0x130),*(undefined1 *)(param_1 + 0x134),
                           local_c,param_4 - ((int)local_c - (int)param_3));
      local_c = local_c + iVar1;
    }
    else if (iVar1 == 0x4003) {
      iVar1 = FUN_00024b50(0x61,*(undefined4 *)(param_1 + 0x130),*(undefined1 *)(param_1 + 0x134),
                           param_1 + 0x114,local_c,param_4 - ((int)local_c - (int)param_3));
      local_c = local_c + iVar1;
    }
    else if (iVar1 == 0x4001) {
      iVar1 = FUN_000249b0(0x61,*(undefined4 *)(param_1 + 0x130),*(undefined1 *)(param_1 + 0x134),
                           local_c,param_4 - ((int)local_c - (int)param_3));
      local_c = local_c + iVar1;
    }
    if (param_2 == 0) {
      iVar1 = sprintf(local_c,(char *)(DAT_000199c0 + 0x19954),DAT_000199bc + 0x19948);
      local_c = local_c + iVar1;
    }
    else {
      iVar1 = sprintf(local_c,(char *)(DAT_000199b8 + 0x19920),param_2,DAT_000199b4 + 0x19914);
      local_c = local_c + iVar1;
    }
  }
  return (int)local_c - (int)param_3;
}



/* ===== FUN_000199c4 @ 000199c4 size=164 ===== */

undefined4 FUN_000199c4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  printf((char *)(DAT_00019a70 + 0x19a04),DAT_00019a6c + 0x199fc,0x2d5,DAT_00019a68 + 0x199f0);
  FUN_0002315c(param_3,0x6f);
  return 0;
}



/* ===== FUN_00019a74 @ 00019a74 size=648 ===== */

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_00019a74(int param_1,int param_2,int param_3)

{
  int iVar1;
  size_t sVar2;
  undefined4 uVar3;
  char local_498 [4];
  undefined4 uStack_494;
  undefined1 auStack_490 [120];
  uint local_418 [2];
  undefined1 auStack_410 [1020];
  int *local_14;
  undefined4 local_10;
  char *local_c;
  
  local_c = *(char **)(param_1 + 0x420);
  local_418[1] = 0;
  memset(auStack_410,0,0x3fc);
  local_10 = 0;
  local_418[0] = 0;
  local_14 = (int *)(param_2 + 8);
  local_498[0] = '\0';
  local_498[1] = '\0';
  local_498[2] = '\0';
  local_498[3] = '\0';
  memset(&uStack_494,0,0x7c);
  printf((char *)(DAT_00019d04 + 0x19b1c),DAT_00019d00 + 0x19b14,0x2ea,DAT_00019cfc + 0x19b08);
  iVar1 = FUN_00022f14(param_2,local_418);
  if ((iVar1 < 0) && ((local_418[0] & 1) == 0)) {
    FUN_0002299c(param_3,0x196);
    printf((char *)(DAT_00019d10 + 0x19b78),DAT_00019d0c + 0x19b70,0x2ed,DAT_00019d08 + 0x19b64);
  }
  else {
    if (*local_14 == 1) {
      sVar2 = strlen(local_498);
      uVar3 = *(undefined4 *)(DAT_00019d14 + 0x19bc4);
      *(undefined4 *)(local_498 + sVar2) = *(undefined4 *)(DAT_00019d14 + 0x19bc0);
      *(undefined4 *)((int)&uStack_494 + sVar2) = uVar3;
      auStack_490[sVar2] = *(undefined1 *)(DAT_00019d14 + 0x19bc8);
    }
    else {
      sVar2 = strlen(local_498);
      uVar3 = *(undefined4 *)(DAT_00019d18 + 0x19c08);
      *(undefined4 *)(local_498 + sVar2) = *(undefined4 *)(DAT_00019d18 + 0x19c04);
      *(undefined4 *)((int)&uStack_494 + sVar2) = uVar3;
    }
    strcat(local_498,(char *)((int)local_14 + 6));
    if ((short)local_14[1] != 0) {
      sVar2 = strlen(local_498);
      sprintf(local_498 + sVar2,(char *)(DAT_00019d1c + 0x19c70),(uint)*(ushort *)(local_14 + 1));
    }
    strcat(local_498,local_c);
    local_10 = FUN_00019520(local_c,local_498,local_418 + 1,0x400);
    FUN_00023348(param_3,0);
    FUN_0002341c(param_3,local_10);
    uVar3 = FUN_0001e52c(local_418 + 1,local_10);
    *(undefined4 *)(param_3 + 0xa8) = uVar3;
  }
  return 0;
}



/* ===== FUN_00019d20 @ 00019d20 size=52 ===== */

int FUN_00019d20(void)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_00019d54 + 0x19d34);
  *(int *)(DAT_00019d58 + 0x19d44) = iVar1 + 1;
  return iVar1;
}



/* ===== FUN_00019d5c @ 00019d5c size=1048 ===== */

undefined4 FUN_00019d5c(undefined4 *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  char *pcVar3;
  sockaddr local_2c;
  uint local_1c;
  uint16_t local_16;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0xc000;
  while( true ) {
    if (0xffff < local_c) {
      printf((char *)(DAT_0001a1c4 + 0x1a164),DAT_0001a1c0 + 0x1a15c,0x363,DAT_0001a1bc + 0x1a150);
      return 0xffffffff;
    }
    local_10 = socket(2,2,0);
    if (local_10 == -1) break;
    local_14 = socket(2,2,0);
    if (local_14 == -1) {
      uVar1 = FUN_00017d88();
      uVar1 = FUN_00017da4(uVar1);
      printf((char *)(DAT_0001a188 + 0x19e30),DAT_0001a184 + 0x19e28,0x31a,DAT_0001a180 + 0x19e1c,
             uVar1);
      close(local_10);
      return 0xffffffff;
    }
    local_16 = (uint16_t)local_c;
    memset(&local_2c,0,0x10);
    local_2c.sa_family = 2;
    local_2c.sa_data._2_4_ = htonl(0);
    local_2c.sa_data._0_2_ = htons(local_16);
    local_1c = bind(local_10,&local_2c,0x10);
    if (local_1c == -1) {
      close(local_10);
      close(local_14);
    }
    else {
      local_16 = (short)local_c + 1;
      memset(&local_2c,0,0x10);
      local_2c.sa_family = 2;
      local_2c.sa_data._2_4_ = htonl(0);
      local_2c.sa_data._0_2_ = htons(local_16);
      local_1c = bind(local_14,&local_2c,0x10);
      if (local_1c != -1) {
        local_1c = fcntl(local_10,3,0);
        if ((int)local_1c < 0) {
          piVar2 = __errno_location();
          pcVar3 = strerror(*piVar2);
          printf((char *)(DAT_0001a194 + 0x19fa4),DAT_0001a190 + 0x19f9c,0x347,
                 DAT_0001a18c + 0x19f90,pcVar3);
        }
        else {
          local_1c = local_1c | 0x800;
          local_1c = fcntl(local_10,4,local_1c);
          if ((int)local_1c < 0) {
            piVar2 = __errno_location();
            pcVar3 = strerror(*piVar2);
            printf((char *)(DAT_0001a1a0 + 0x1a010),DAT_0001a19c + 0x1a008,0x34c,
                   DAT_0001a198 + 0x19ffc,pcVar3);
          }
        }
        local_1c = fcntl(local_14,3,0);
        if ((int)local_1c < 0) {
          piVar2 = __errno_location();
          pcVar3 = strerror(*piVar2);
          printf((char *)(DAT_0001a1ac + 0x1a06c),DAT_0001a1a8 + 0x1a064,0x351,
                 DAT_0001a1a4 + 0x1a058,pcVar3);
        }
        else {
          local_1c = local_1c | 0x800;
          local_1c = fcntl(local_14,4,local_1c);
          if ((int)local_1c < 0) {
            piVar2 = __errno_location();
            pcVar3 = strerror(*piVar2);
            printf((char *)(DAT_0001a1b8 + 0x1a0d8),DAT_0001a1b4 + 0x1a0d0,0x356,
                   DAT_0001a1b0 + 0x1a0c4,pcVar3);
          }
        }
        *param_1 = 0;
        param_1[4] = local_10;
        param_1[5] = local_14;
        *(short *)(param_1 + 6) = (short)local_c;
        *(short *)((int)param_1 + 0x1a) = (short)local_c + 1;
        return 0;
      }
      close(local_10);
      close(local_14);
    }
    local_c = local_c + 2;
  }
  uVar1 = FUN_00017d88();
  uVar1 = FUN_00017da4(uVar1);
  printf((char *)(DAT_0001a17c + 0x19dd0),DAT_0001a178 + 0x19dc8,0x314,DAT_0001a174 + 0x19dbc,uVar1)
  ;
  return 0xffffffff;
}



/* ===== FUN_0001a1c8 @ 0001a1c8 size=684 ===== */

undefined4 FUN_0001a1c8(int param_1,int param_2,int param_3,short param_4,uint param_5)

{
  ushort uVar1;
  uint *__ptr;
  int *piVar2;
  char *pcVar3;
  uint uVar4;
  in_addr __in;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  
  __in.s_addr = *(in_addr_t *)(param_1 + 8);
  __ptr = calloc(1,0x40);
  if (__ptr == (uint *)0x0) {
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    printf((char *)(DAT_0001a47c + 0x1a24c),DAT_0001a478 + 0x1a244,0x36e,DAT_0001a474 + 0x1a238,
           pcVar3);
    uVar5 = 0xffffffff;
  }
  else {
    *__ptr = (uint)(param_3 != 0);
    __ptr[8] = __in.s_addr;
    uVar4 = FUN_00019d20();
    __ptr[10] = uVar4;
    if (param_3 == 0) {
      iVar6 = FUN_00019d5c(__ptr);
      if (iVar6 < 0) {
        free(__ptr);
        return 0xffffffff;
      }
      *(short *)(__ptr + 7) = param_4;
      *(short *)((int)__ptr + 0x1e) = param_4 + 1;
      if (param_2 == 0) {
        iVar6 = DAT_0001a498 + 0x1a3c0;
      }
      else {
        iVar6 = DAT_0001a494 + 0x1a3b0;
      }
      uVar7 = __ptr[10];
      uVar4 = __ptr[6];
      uVar1 = *(ushort *)((int)__ptr + 0x1a);
      pcVar3 = inet_ntoa(__in);
      printf((char *)(DAT_0001a4a4 + 0x1a43c),DAT_0001a4a0 + 0x1a434,0x38b,DAT_0001a49c + 0x1a428,
             iVar6,uVar7,(uint)(ushort)uVar4,(uint)uVar1,pcVar3,(uint)(ushort)__ptr[7],
             (uint)*(ushort *)((int)__ptr + 0x1e));
    }
    else {
      __ptr[1] = *(uint *)(param_1 + 4);
      __ptr[2] = param_5;
      __ptr[3] = param_5 + 1;
      if (param_2 == 0) {
        iVar6 = DAT_0001a484 + 0x1a2f0;
      }
      else {
        iVar6 = DAT_0001a480 + 0x1a2e0;
      }
      uVar4 = __ptr[10];
      pcVar3 = inet_ntoa(__in);
      printf((char *)(DAT_0001a490 + 0x1a348),DAT_0001a48c + 0x1a340,0x37e,DAT_0001a488 + 0x1a334,
             iVar6,uVar4,pcVar3,__ptr[2],__ptr[3]);
    }
    if (param_2 == 0) {
      *(uint **)(param_1 + 0x414) = __ptr;
    }
    else {
      *(uint **)(param_1 + 0x418) = __ptr;
    }
    uVar5 = 0;
  }
  return uVar5;
}



/* ===== FUN_0001a4a8 @ 0001a4a8 size=164 ===== */

void FUN_0001a4a8(int param_1,int param_2)

{
  int *local_c;
  
  if (param_2 == 0) {
    local_c = *(int **)(param_1 + 0x414);
    *(undefined4 *)(param_1 + 0x414) = 0;
  }
  else {
    local_c = *(int **)(param_1 + 0x418);
    *(undefined4 *)(param_1 + 0x418) = 0;
  }
  if (local_c != (int *)0x0) {
    if (*local_c == 0) {
      close(local_c[4]);
      close(local_c[5]);
    }
    free(local_c);
  }
  return;
}



/* ===== FUN_0001a54c @ 0001a54c size=1096 ===== */

undefined4 FUN_0001a54c(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char local_9c [8];
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  char local_5c [8];
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = param_1[0x108];
  local_18 = 0;
  local_c = 0;
  local_10 = 0;
  local_5c[0] = '\0';
  local_5c[1] = '\0';
  local_5c[2] = '\0';
  local_5c[3] = '\0';
  uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_50 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_5c[4] = '\0';
  local_5c[5] = '\0';
  local_5c[6] = '\0';
  local_5c[7] = '\0';
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  uStack_24 = 0;
  local_9c[0] = '\0';
  local_9c[1] = '\0';
  local_9c[2] = '\0';
  local_9c[3] = '\0';
  uStack_94 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_90 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_8c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_9c[4] = '\0';
  local_9c[5] = '\0';
  local_9c[6] = '\0';
  local_9c[7] = '\0';
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  uStack_64 = 0;
  uStack_84 = uStack_94;
  uStack_7c = uStack_94;
  uStack_74 = uStack_94;
  uStack_6c = uStack_94;
  uStack_60 = uStack_94;
  uStack_44 = uStack_54;
  uStack_3c = uStack_54;
  uStack_34 = uStack_54;
  uStack_2c = uStack_54;
  uStack_20 = uStack_54;
  printf((char *)(DAT_0001a99c + 0x1a628),DAT_0001a998 + 0x1a620,0x3b6,DAT_0001a994 + 0x1a614);
  if (*(int *)(param_2 + 0x80) == 0) {
    FUN_0002299c(param_3,0x1cd);
    printf((char *)(DAT_0001a9a8 + 0x1a664),DAT_0001a9a4 + 0x1a65c,0x3ba,DAT_0001a9a0 + 0x1a650);
  }
  else {
    if (**(int **)(param_2 + 0x80) == 1) {
      local_c = 1;
      if ((*(uint *)(*(int *)(param_2 + 0x80) + 4) & 0x20) == 0) {
        printf((char *)(DAT_0001a9b4 + 0x1a6c0),DAT_0001a9b0 + 0x1a6b8,0x3c1,DAT_0001a9ac + 0x1a6ac)
        ;
        FUN_0002299c(param_3,0x1cd);
        return 0;
      }
    }
    else if ((*(uint *)(*(int *)(param_2 + 0x80) + 4) & 8) == 0) {
      printf((char *)(DAT_0001a9c0 + 0x1a70c),DAT_0001a9bc + 0x1a704,0x3c7,DAT_0001a9b8 + 0x1a6f8);
      FUN_0002299c(param_3,0x1cd);
      return 0;
    }
    snprintf(local_5c,0x3f,(char *)(DAT_0001a9c8 + 0x1a740),local_14,DAT_0001a9c4 + 0x1a734);
    snprintf(local_9c,0x3f,(char *)(DAT_0001a9d0 + 0x1a764),local_14,DAT_0001a9cc + 0x1a758);
    if ((*(int *)(local_14 + 0x40) == 0) ||
       (iVar1 = FUN_00018a9c(local_5c,param_2 + 0x2e), iVar1 == 0)) {
      if ((*(int *)(local_14 + 0x44) == 0) ||
         (iVar1 = FUN_00018a9c(local_9c,param_2 + 0x2e), iVar1 == 0)) {
        printf((char *)(DAT_0001a9dc + 0x1a814),DAT_0001a9d8 + 0x1a80c,0x3d4,DAT_0001a9d4 + 0x1a800,
               param_2 + 0x2e);
        FUN_0002299c(param_3,0x1cd);
        return 0;
      }
      local_10 = 1;
    }
    else {
      local_10 = 0;
    }
    FUN_0001a4a8(param_1,local_10);
    local_1c = FUN_0001a1c8(param_1,local_10,local_c,*(undefined2 *)(*(int *)(param_2 + 0x80) + 0xc)
                            ,*(undefined1 *)(*(int *)(param_2 + 0x80) + 0x10));
    if (local_1c < 0) {
      FUN_0002299c(param_3,500);
    }
    else {
      if (local_10 == 0) {
        local_18 = param_1[0x105];
      }
      else {
        local_18 = param_1[0x106];
      }
      if (local_c == 0) {
        FUN_00022d1c(param_3,*(undefined4 *)(local_18 + 0x28),*(undefined2 *)(local_18 + 0x1c),
                     *(undefined2 *)(local_18 + 0x18));
      }
      else {
        FUN_00022e38(param_3,*(undefined4 *)(local_18 + 0x28),*(undefined4 *)(local_18 + 8));
      }
      if (*param_1 == 2) {
        if (local_10 == 0) {
          uVar2 = *(undefined4 *)(local_14 + 0x138);
        }
        else {
          uVar2 = *(undefined4 *)(local_14 + 0x13c);
        }
        uVar2 = FUN_000237b4(uVar2);
        *(undefined4 *)(local_18 + 0x24) = uVar2;
      }
      if (*param_1 == 0) {
        *param_1 = 1;
        iVar1 = FUN_00021aac();
        param_1[3] = iVar1;
        FUN_00022b18(param_3,param_1[3]);
      }
    }
  }
  return 0;
}



/* ===== FUN_0001a9e0 @ 0001a9e0 size=184 ===== */

undefined4 FUN_0001a9e0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  printf((char *)(DAT_0001aaa0 + 0x1aa18),DAT_0001aa9c + 0x1aa10,0x3fb,DAT_0001aa98 + 0x1aa04);
  if ((*param_1 == 1) || (*param_1 == 2)) {
    if (*param_1 != 1) {
      *param_1 = 1;
    }
  }
  else {
    FUN_0002299c(param_3,0x1c7);
    printf((char *)(DAT_0001aaac + 0x1aa64),DAT_0001aaa8 + 0x1aa5c,0x3ff,DAT_0001aaa4 + 0x1aa50);
  }
  return 0;
}



/* ===== FUN_0001aab0 @ 0001aab0 size=324 ===== */

undefined4 FUN_0001aab0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[0x108];
  printf((char *)(DAT_0001abfc + 0x1aaf4),DAT_0001abf8 + 0x1aaec,0x40d,DAT_0001abf4 + 0x1aae0);
  if ((*param_1 == 1) || (*param_1 == 2)) {
    if (*param_1 != 2) {
      if ((param_1[0x105] != 0) && (*(int *)(iVar2 + 0x138) != 0)) {
        iVar3 = param_1[0x105];
        uVar1 = FUN_000237b4(*(undefined4 *)(iVar2 + 0x138));
        *(undefined4 *)(iVar3 + 0x24) = uVar1;
      }
      if ((param_1[0x106] != 0) && (*(int *)(iVar2 + 0x13c) != 0)) {
        iVar3 = param_1[0x106];
        uVar1 = FUN_000237b4(*(undefined4 *)(iVar2 + 0x13c));
        *(undefined4 *)(iVar3 + 0x24) = uVar1;
      }
      *param_1 = 2;
    }
  }
  else {
    FUN_0002299c(param_3,0x1c7);
    printf((char *)(DAT_0001ac08 + 0x1ab40),DAT_0001ac04 + 0x1ab38,0x411,DAT_0001ac00 + 0x1ab2c);
  }
  return 0;
}



/* ===== FUN_0001ac0c @ 0001ac0c size=456 ===== */

undefined4 FUN_0001ac0c(undefined4 *param_1,int param_2)

{
  int iVar1;
  char local_8c [8];
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  char local_4c [8];
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 local_c;
  
  local_c = param_1[0x108];
  local_4c[0] = '\0';
  local_4c[1] = '\0';
  local_4c[2] = '\0';
  local_4c[3] = '\0';
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_4c[4] = '\0';
  local_4c[5] = '\0';
  local_4c[6] = '\0';
  local_4c[7] = '\0';
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  uStack_14 = 0;
  local_8c[0] = '\0';
  local_8c[1] = '\0';
  local_8c[2] = '\0';
  local_8c[3] = '\0';
  uStack_84 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_80 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_7c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_8c[4] = '\0';
  local_8c[5] = '\0';
  local_8c[6] = '\0';
  local_8c[7] = '\0';
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  uStack_54 = 0;
  uStack_74 = uStack_84;
  uStack_6c = uStack_84;
  uStack_64 = uStack_84;
  uStack_5c = uStack_84;
  uStack_50 = uStack_84;
  uStack_34 = uStack_44;
  uStack_2c = uStack_44;
  uStack_24 = uStack_44;
  uStack_1c = uStack_44;
  uStack_10 = uStack_44;
  printf((char *)(DAT_0001addc + 0x1acd0),DAT_0001add8 + 0x1acc8,0x425,DAT_0001add4 + 0x1acbc);
  snprintf(local_4c,0x3f,(char *)(DAT_0001ade4 + 0x1acf0),local_c,DAT_0001ade0 + 0x1ace4);
  snprintf(local_8c,0x3f,(char *)(DAT_0001adec + 0x1ad14),local_c,DAT_0001ade8 + 0x1ad08);
  iVar1 = FUN_00018a9c(local_4c,param_2 + 0x2e);
  if (iVar1 == 0) {
    iVar1 = FUN_00018a9c(local_8c,param_2 + 0x2e);
    if (iVar1 == 0) {
      FUN_0001a4a8(param_1,0);
      FUN_0001a4a8(param_1,1);
    }
    else {
      FUN_0001a4a8(param_1,1);
    }
  }
  else {
    FUN_0001a4a8(param_1,0);
  }
  if ((param_1[0x105] == 0) && (param_1[0x106] == 0)) {
    *param_1 = 0;
  }
  return 0;
}



/* ===== FUN_0001adf0 @ 0001adf0 size=856 ===== */

undefined4 FUN_0001adf0(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_10 = param_1[0x107];
  local_c = param_1[0x108];
  local_14 = param_2 + 0x2e;
  local_18 = 0;
  local_1c = 0;
  FUN_0002299c(param_3,200);
  FUN_00022bf4(param_3,0);
  FUN_00023238(param_3,DAT_0001b148 + 0x1ae60);
  iVar1 = FUN_000229e8(param_2,&local_18);
  if (iVar1 < 0) {
    FUN_0002299c(param_3,400);
    printf((char *)(DAT_0001b154 + 0x1aeb0),DAT_0001b150 + 0x1aea8,0x448,DAT_0001b14c + 0x1ae9c);
    uVar2 = 0;
  }
  else {
    FUN_00022a48(param_3,local_18);
    if (*param_1 != 0) {
      iVar1 = FUN_00022ab8(param_2,&local_1c);
      if ((iVar1 < 0) || (param_1[3] != local_1c)) {
        printf((char *)(DAT_0001b160 + 0x1af28),DAT_0001b15c + 0x1af20,0x44f,DAT_0001b158 + 0x1af14)
        ;
        FUN_0002299c(param_3,0x1c6);
        return 0;
      }
      FUN_00022b18(param_3,local_1c);
    }
    if (local_c == 0) {
      if (*(int *)(param_2 + 4) != 0) {
        local_c = *(int *)(local_10 + 4);
        while ((local_c != 0 && (iVar1 = FUN_00018a9c(local_c,local_14), iVar1 == 0))) {
          local_c = *(int *)(local_c + 0x15c);
        }
        if (local_c == 0) {
          printf((char *)(DAT_0001b178 + 0x1b048),DAT_0001b174 + 0x1b040,0x463,
                 DAT_0001b170 + 0x1b034,local_14);
          FUN_0002299c(param_3,0x1c6);
          return 0;
        }
        FUN_0001814c(param_1,local_c);
      }
    }
    else {
      iVar1 = FUN_00018a9c(local_c,local_14);
      if (iVar1 == 0) {
        printf((char *)(DAT_0001b16c + 0x1afa4),DAT_0001b168 + 0x1af9c,0x458,DAT_0001b164 + 0x1af90,
               local_14,local_c);
        FUN_0002299c(param_3,0x1c3);
        return 0;
      }
    }
    switch(*(undefined4 *)(param_2 + 4)) {
    case 0:
      uVar2 = FUN_000199c4(param_1,param_2,param_3);
      break;
    case 1:
      uVar2 = FUN_00019a74(param_1,param_2,param_3);
      break;
    case 2:
      uVar2 = FUN_0001a54c(param_1,param_2,param_3);
      break;
    case 3:
      uVar2 = FUN_0001aab0(param_1,param_2,param_3);
      break;
    case 4:
    default:
      FUN_0002299c(param_3,0x1f5);
      uVar2 = 0;
      break;
    case 5:
      uVar2 = FUN_0001a9e0(param_1,param_2,param_3);
      break;
    case 6:
      uVar2 = FUN_0001ac0c(param_1,param_2,param_3);
    }
  }
  return uVar2;
}



/* ===== FUN_0001b17c @ 0001b17c size=528 ===== */

int FUN_0001b17c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_c;
  
  if (*(int *)(param_1 + 0x410) != 0x3ff) {
    local_c = recv(*(int *)(param_1 + 4),(void *)(param_1 + 0x10 + *(int *)(param_1 + 0x410)),
                   0x3ff - *(int *)(param_1 + 0x410),0x40);
    if (local_c == 0) {
      printf((char *)(DAT_0001b394 + 0x1b208),DAT_0001b390 + 0x1b200,0x486,DAT_0001b38c + 0x1b1f4);
      return -1;
    }
    if (local_c == -1) {
      iVar1 = FUN_00017d88();
      if ((iVar1 != 0xb) && (iVar1 = FUN_00017d88(), iVar1 != 4)) {
        uVar2 = FUN_00017d88();
        uVar2 = FUN_00017da4(uVar2);
        printf((char *)(DAT_0001b3a0 + 0x1b274),DAT_0001b39c + 0x1b26c,0x48b,DAT_0001b398 + 0x1b260,
               uVar2);
        return -1;
      }
      local_c = 0;
    }
    *(int *)(param_1 + 0x410) = *(int *)(param_1 + 0x410) + local_c;
    *(undefined1 *)(param_1 + *(int *)(param_1 + 0x410) + 0x10) = 0;
  }
  if (*(int *)(param_1 + 0x410) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_00021d0c(param_2,param_1 + 0x10,*(undefined4 *)(param_1 + 0x410));
    if (iVar1 < 0) {
      printf((char *)(DAT_0001b3ac + 0x1b318),DAT_0001b3a8 + 0x1b310,0x49a,DAT_0001b3a4 + 0x1b304);
      iVar1 = -1;
    }
    else if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      memmove((void *)(param_1 + 0x10),(void *)(param_1 + 0x10 + iVar1),
              *(int *)(param_1 + 0x410) - iVar1);
      *(int *)(param_1 + 0x410) = *(int *)(param_1 + 0x410) - iVar1;
    }
  }
  return iVar1;
}



/* ===== FUN_0001b3b0 @ 0001b3b0 size=268 ===== */

ssize_t FUN_0001b3b0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_40c;
  undefined1 auStack_408 [1020];
  size_t local_c;
  
  local_40c = 0;
  memset(auStack_408,0,0x3fc);
  local_c = FUN_000220c8(param_2,&local_40c,0x400);
  if ((int)local_c < 0) {
    printf((char *)(DAT_0001b4c4 + 0x1b434),DAT_0001b4c0 + 0x1b42c,0x4ad,DAT_0001b4bc + 0x1b420);
    local_c = -1;
  }
  else {
    local_c = send(*(int *)(param_1 + 4),&local_40c,local_c,0);
    if (local_c == -1) {
      uVar1 = FUN_00017d88();
      uVar1 = FUN_00017da4(uVar1);
      printf((char *)(DAT_0001b4d0 + 0x1b4a4),DAT_0001b4cc + 0x1b49c,0x4b3,DAT_0001b4c8 + 0x1b490,
             uVar1);
      local_c = -1;
    }
  }
  return local_c;
}



/* ===== FUN_0001b4d4 @ 0001b4d4 size=388 ===== */

ssize_t FUN_0001b4d4(int param_1,int param_2)

{
  ushort uVar1;
  uint16_t uVar2;
  uint16_t uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined1 auStack_ac [128];
  socklen_t local_2c;
  sockaddr sStack_28;
  ssize_t local_18;
  int local_14;
  
  if (param_2 == 0) {
    local_14 = *(int *)(param_1 + 0x414);
  }
  else {
    local_14 = *(int *)(param_1 + 0x418);
  }
  local_2c = 0x10;
  local_18 = recvfrom(*(int *)(local_14 + 0x10),auStack_ac,0x80,0x40,&sStack_28,&local_2c);
  if (local_18 == -1) {
    iVar4 = FUN_00017d88();
    if ((iVar4 == 0xb) || (iVar4 = FUN_00017d88(), iVar4 == 4)) {
      local_18 = 0;
    }
    else {
      uVar5 = FUN_00017d88();
      uVar5 = FUN_00017da4(uVar5);
      printf((char *)(DAT_0001b660 + 0x1b5a4),DAT_0001b65c + 0x1b59c,0x4c6,DAT_0001b658 + 0x1b590,
             uVar5);
      local_18 = -1;
    }
  }
  else {
    uVar3 = *(uint16_t *)(local_14 + 0x1c);
    uVar2 = ntohs(sStack_28.sa_data._0_2_);
    if (uVar3 != uVar2) {
      pcVar6 = inet_ntoa((in_addr)*(in_addr_t *)(local_14 + 0x20));
      uVar1 = *(ushort *)(local_14 + 0x1c);
      uVar3 = ntohs(sStack_28.sa_data._0_2_);
      printf((char *)(DAT_0001b66c + 0x1b62c),DAT_0001b668 + 0x1b624,0x4d0,DAT_0001b664 + 0x1b618,
             pcVar6,(uint)uVar1,(uint)uVar3);
      uVar3 = ntohs(sStack_28.sa_data._0_2_);
      *(uint16_t *)(local_14 + 0x1c) = uVar3;
    }
  }
  return local_18;
}



/* ===== FUN_0001b670 @ 0001b670 size=388 ===== */

ssize_t FUN_0001b670(int param_1,int param_2)

{
  ushort uVar1;
  uint16_t uVar2;
  uint16_t uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined1 auStack_ac [128];
  socklen_t local_2c;
  sockaddr sStack_28;
  ssize_t local_18;
  int local_14;
  
  if (param_2 == 0) {
    local_14 = *(int *)(param_1 + 0x414);
  }
  else {
    local_14 = *(int *)(param_1 + 0x418);
  }
  local_2c = 0x10;
  local_18 = recvfrom(*(int *)(local_14 + 0x14),auStack_ac,0x80,0x40,&sStack_28,&local_2c);
  if (local_18 == -1) {
    iVar4 = FUN_00017d88();
    if ((iVar4 == 0xb) || (iVar4 = FUN_00017d88(), iVar4 == 4)) {
      local_18 = 0;
    }
    else {
      uVar5 = FUN_00017d88();
      uVar5 = FUN_00017da4(uVar5);
      printf((char *)(DAT_0001b7fc + 0x1b740),DAT_0001b7f8 + 0x1b738,0x4e3,DAT_0001b7f4 + 0x1b72c,
             uVar5);
      local_18 = -1;
    }
  }
  else {
    uVar3 = *(uint16_t *)(local_14 + 0x1e);
    uVar2 = ntohs(sStack_28.sa_data._0_2_);
    if (uVar3 != uVar2) {
      pcVar6 = inet_ntoa((in_addr)*(in_addr_t *)(local_14 + 0x20));
      uVar1 = *(ushort *)(local_14 + 0x1e);
      uVar3 = ntohs(sStack_28.sa_data._0_2_);
      printf((char *)(DAT_0001b808 + 0x1b7c8),DAT_0001b804 + 0x1b7c0,0x4ed,DAT_0001b800 + 0x1b7b4,
             pcVar6,(uint)uVar1,(uint)uVar3);
      uVar3 = ntohs(sStack_28.sa_data._0_2_);
      *(uint16_t *)(local_14 + 0x1e) = uVar3;
    }
  }
  return local_18;
}



/* ===== FUN_0001b80c @ 0001b80c size=740 ===== */

size_t FUN_0001b80c(int *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  sockaddr local_34;
  undefined1 local_24;
  undefined1 local_23;
  uint16_t local_22;
  ssize_t local_20;
  int local_1c;
  ssize_t local_18;
  int local_14;
  
  if (*param_1 == 0) {
    local_1c = param_1[4];
    local_20 = 0xffffffff;
    memset(&local_34,0,0x10);
    local_34.sa_family = 2;
    local_34.sa_data._2_4_ = param_1[8];
    local_34.sa_data._0_2_ = htons(*(uint16_t *)(param_1 + 7));
    local_20 = sendto(local_1c,param_2,param_3,0,&local_34,0x10);
    if (local_20 == -1) {
      iVar1 = FUN_00017d88();
      if ((iVar1 == 0xb) || (iVar1 = FUN_00017d88(), iVar1 == 4)) {
        param_3 = 0;
      }
      else {
        pcVar2 = inet_ntoa((in_addr)param_1[8]);
        uVar3 = FUN_00017d88();
        uVar3 = FUN_00017da4(uVar3);
        printf((char *)(DAT_0001bb10 + 0x1bad0),DAT_0001bb0c + 0x1bac8,0x528,DAT_0001bb08 + 0x1babc,
               param_3,pcVar2,uVar3);
        param_3 = 0xffffffff;
      }
    }
  }
  else {
    local_18 = 0xffffffff;
    local_14 = param_1[1];
    local_24 = 0x24;
    local_23 = (undefined1)param_1[2];
    local_22 = htons((uint16_t)param_3);
    local_18 = send(local_14,&local_24,4,0);
    if (local_18 == -1) {
      iVar1 = FUN_00017d88();
      if ((iVar1 == 0xb) || (iVar1 = FUN_00017d88(), iVar1 == 4)) {
        param_3 = 0;
      }
      else {
        pcVar2 = inet_ntoa((in_addr)param_1[8]);
        uVar3 = FUN_00017d88();
        uVar3 = FUN_00017da4(uVar3);
        printf((char *)(DAT_0001baf8 + 0x1b91c),DAT_0001baf4 + 0x1b914,0x50d,DAT_0001baf0 + 0x1b908,
               pcVar2,uVar3);
        param_3 = 0xffffffff;
      }
    }
    else {
      local_18 = send(local_14,param_2,param_3,0);
      if (local_18 == -1) {
        iVar1 = FUN_00017d88();
        if ((iVar1 == 0xb) || (iVar1 = FUN_00017d88(), iVar1 == 4)) {
          param_3 = 0;
        }
        else {
          pcVar2 = inet_ntoa((in_addr)param_1[8]);
          uVar3 = FUN_00017d88();
          uVar3 = FUN_00017da4(uVar3);
          printf((char *)(DAT_0001bb04 + 0x1b9c4),DAT_0001bb00 + 0x1b9bc,0x516,
                 DAT_0001bafc + 0x1b9b0,param_3,pcVar2,uVar3);
          param_3 = 0xffffffff;
        }
      }
    }
  }
  return param_3;
}



/* ===== FUN_0001bb14 @ 0001bb14 size=348 ===== */

int FUN_0001bb14(int param_1)

{
  uint32_t uVar1;
  undefined4 uVar2;
  int iVar3;
  uint32_t *puVar4;
  int *local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  
  local_18 = *(int *)(param_1 + 0x420);
  local_1c = *(undefined4 *)(local_18 + 0x138);
  local_20 = *(int *)(param_1 + 0x414);
  local_24 = 0;
  local_28 = (int *)0x0;
  local_14 = 0;
  do {
    iVar3 = FUN_00023670(local_1c,*(undefined4 *)(local_20 + 0x24));
    if (iVar3 < 1) {
      return local_14;
    }
    FUN_000235c0(local_1c,*(undefined4 *)(local_20 + 0x24),&local_24,&local_28);
    if (0 < *local_28) {
      puVar4 = (uint32_t *)(local_24 + 8);
      uVar1 = htonl(*(uint32_t *)(local_20 + 0x28));
      *puVar4 = uVar1;
      iVar3 = FUN_0001b80c(local_20,local_24,*local_28);
      if (iVar3 != *local_28) {
        return local_14;
      }
      *(int *)(local_20 + 0x2c) = *(int *)(local_20 + 0x2c) + 1;
      *(int *)(local_20 + 0x30) = *(int *)(local_20 + 0x30) + *local_28 + -0xc;
    }
    uVar2 = FUN_0002371c(local_1c,*(undefined4 *)(local_20 + 0x24));
    *(undefined4 *)(local_20 + 0x24) = uVar2;
    local_14 = local_14 + 1;
  } while( true );
}



/* ===== FUN_0001bc70 @ 0001bc70 size=348 ===== */

int FUN_0001bc70(int param_1)

{
  uint32_t uVar1;
  undefined4 uVar2;
  int iVar3;
  uint32_t *puVar4;
  int *local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  
  local_18 = *(int *)(param_1 + 0x420);
  local_1c = *(undefined4 *)(local_18 + 0x13c);
  local_20 = *(int *)(param_1 + 0x418);
  local_24 = 0;
  local_28 = (int *)0x0;
  local_14 = 0;
  do {
    iVar3 = FUN_00023670(local_1c,*(undefined4 *)(local_20 + 0x24));
    if (iVar3 < 1) {
      return local_14;
    }
    FUN_000235c0(local_1c,*(undefined4 *)(local_20 + 0x24),&local_24,&local_28);
    if (0 < *local_28) {
      puVar4 = (uint32_t *)(local_24 + 8);
      uVar1 = htonl(*(uint32_t *)(local_20 + 0x28));
      *puVar4 = uVar1;
      iVar3 = FUN_0001b80c(local_20,local_24,*local_28);
      if (iVar3 != *local_28) {
        return local_14;
      }
      *(int *)(local_20 + 0x2c) = *(int *)(local_20 + 0x2c) + 1;
      *(int *)(local_20 + 0x30) = *(int *)(local_20 + 0x30) + *local_28 + -0xc;
    }
    uVar2 = FUN_0002371c(local_1c,*(undefined4 *)(local_20 + 0x24));
    *(undefined4 *)(local_20 + 0x24) = uVar2;
    local_14 = local_14 + 1;
  } while( true );
}



/* ===== FUN_0001bdcc @ 0001bdcc size=2952 ===== */

undefined4 FUN_0001bdcc(uint *param_1)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int local_2a4 [43];
  undefined1 auStack_1f8 [172];
  fd_set fStack_14c;
  fd_set fStack_cc;
  timeval local_4c;
  int *local_44;
  int *local_40;
  int local_3c;
  int local_38;
  int *local_34;
  int *local_30;
  int local_2c;
  fd_set *local_28;
  fd_set *local_24;
  uint *local_20;
  int *local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  int *local_c;
  
  local_20 = param_1;
  local_c = (int *)0x0;
  if (param_1 == (uint *)0x0) {
    uVar4 = 0xffffffff;
  }
  else {
    local_24 = &fStack_cc;
    for (local_14 = 0; local_14 < 0x20; local_14 = local_14 + 1) {
      fStack_cc.fds_bits[local_14] = 0;
    }
    local_28 = &fStack_14c;
    for (local_18 = 0; local_18 < 0x20; local_18 = local_18 + 1) {
      fStack_14c.fds_bits[local_18] = 0;
    }
    fStack_cc.fds_bits[*param_1 >> 5] = fStack_cc.fds_bits[*param_1 >> 5] | 1 << (*param_1 & 0x1f);
    local_10 = *local_20;
    for (local_c = (int *)local_20[3]; local_c != (int *)0x0; local_c = (int *)local_c[0x109]) {
      local_2c = local_c[0x108];
      local_30 = (int *)local_c[0x105];
      local_34 = (int *)local_c[0x106];
      fStack_cc.fds_bits[(uint)local_c[1] >> 5] =
           fStack_cc.fds_bits[(uint)local_c[1] >> 5] | 1 << (local_c[1] & 0x1fU);
      if ((int)local_10 < local_c[1]) {
        local_10 = local_c[1];
      }
      if (*local_c == 2) {
        if ((local_30 != (int *)0x0) &&
           (iVar3 = FUN_00023670(*(undefined4 *)(local_2c + 0x138),local_30[9]), 0 < iVar3)) {
          if (*local_30 == 0) {
            fStack_14c.fds_bits[(uint)local_30[4] >> 5] =
                 fStack_14c.fds_bits[(uint)local_30[4] >> 5] | 1 << (local_30[4] & 0x1fU);
            if ((int)local_10 < local_30[4]) {
              local_10 = local_30[4];
            }
          }
          else {
            fStack_14c.fds_bits[(uint)local_30[1] >> 5] =
                 fStack_14c.fds_bits[(uint)local_30[1] >> 5] | 1 << (local_30[1] & 0x1fU);
            if ((int)local_10 < local_30[1]) {
              local_10 = local_30[1];
            }
          }
        }
        if ((local_34 != (int *)0x0) &&
           (iVar3 = FUN_00023670(*(undefined4 *)(local_2c + 0x13c),local_34[9]), 0 < iVar3)) {
          if (*local_34 == 0) {
            fStack_14c.fds_bits[(uint)local_34[4] >> 5] =
                 fStack_14c.fds_bits[(uint)local_34[4] >> 5] | 1 << (local_34[4] & 0x1fU);
            if ((int)local_10 < local_34[4]) {
              local_10 = local_34[4];
            }
          }
          else {
            fStack_14c.fds_bits[(uint)local_34[1] >> 5] =
                 fStack_14c.fds_bits[(uint)local_34[1] >> 5] | 1 << (local_34[1] & 0x1fU);
            if ((int)local_10 < local_34[1]) {
              local_10 = local_34[1];
            }
          }
        }
        if ((local_30 != (int *)0x0) && (*local_30 == 0)) {
          fStack_cc.fds_bits[(uint)local_30[4] >> 5] =
               fStack_cc.fds_bits[(uint)local_30[4] >> 5] | 1 << (local_30[4] & 0x1fU);
          fStack_cc.fds_bits[(uint)local_30[5] >> 5] =
               fStack_cc.fds_bits[(uint)local_30[5] >> 5] | 1 << (local_30[5] & 0x1fU);
          if ((int)local_10 < local_30[4]) {
            local_10 = local_30[4];
          }
          if ((int)local_10 < local_30[5]) {
            local_10 = local_30[5];
          }
        }
        if ((local_34 != (int *)0x0) && (*local_34 == 0)) {
          fStack_cc.fds_bits[(uint)local_34[4] >> 5] =
               fStack_cc.fds_bits[(uint)local_34[4] >> 5] | 1 << (local_34[4] & 0x1fU);
          fStack_cc.fds_bits[(uint)local_34[5] >> 5] =
               fStack_cc.fds_bits[(uint)local_34[5] >> 5] | 1 << (local_34[5] & 0x1fU);
          if ((int)local_10 < local_34[4]) {
            local_10 = local_34[4];
          }
          if ((int)local_10 < local_34[5]) {
            local_10 = local_34[5];
          }
        }
      }
    }
    memset(&local_4c,0,8);
    local_4c.tv_sec = 0;
    local_4c.tv_usec = 0;
    local_38 = select(local_10 + 1,&fStack_cc,&fStack_14c,(fd_set *)0x0,&local_4c);
    if (local_38 < 0) {
      piVar1 = __errno_location();
      pcVar2 = strerror(*piVar1);
      printf((char *)(DAT_0001c95c + 0x1c408),DAT_0001c958 + 0x1c400,0x5c7,DAT_0001c954 + 0x1c3f4,
             pcVar2);
      uVar4 = 0xffffffff;
    }
    else if (local_38 == 0) {
      uVar4 = 0;
    }
    else {
      if ((fStack_cc.fds_bits[*local_20 >> 5] >> (*local_20 & 0x1f) & 1U) != 0) {
        FUN_000188a8(local_20);
      }
      local_c = (int *)local_20[3];
LAB_0001c938:
      piVar1 = local_c;
      if (local_c != (int *)0x0) {
        local_1c = local_c;
        local_3c = local_c[0x108];
        local_40 = (int *)local_c[0x105];
        local_44 = (int *)local_c[0x106];
        local_c = (int *)local_c[0x109];
        if ((fStack_cc.fds_bits[(uint)piVar1[1] >> 5] >> (piVar1[1] & 0x1fU) & 1U) != 0)
        goto LAB_0001c4e4;
        goto LAB_0001c62c;
      }
      uVar4 = 1;
    }
  }
  return uVar4;
LAB_0001c4e4:
  do {
    FUN_000218c4(local_2a4);
    FUN_000218c4(auStack_1f8);
    local_38 = FUN_0001b17c(local_1c,local_2a4);
    if (local_38 == 0) break;
    if (local_38 < 0) {
      FUN_000189f0(local_1c);
      local_1c = (int *)0x0;
      break;
    }
    if (local_2a4[0] == 2) {
      FUN_00021900(local_2a4);
    }
    else if (local_2a4[0] == 0) {
      local_38 = FUN_0001adf0(local_1c,local_2a4,auStack_1f8);
      if (local_38 < 0) {
        printf((char *)(DAT_0001c974 + 0x1c5dc),DAT_0001c970 + 0x1c5d4,0x5f8,DAT_0001c96c + 0x1c5c8)
        ;
      }
      else {
        FUN_0001b3b0(local_1c,auStack_1f8);
      }
      FUN_00021900(local_2a4);
      FUN_00021900(auStack_1f8);
    }
    else {
      printf((char *)(DAT_0001c968 + 0x1c588),DAT_0001c964 + 0x1c580,0x5f1,DAT_0001c960 + 0x1c574);
      FUN_00021900(local_2a4);
    }
  } while (local_1c != (int *)0x0);
  if (local_1c != (int *)0x0) {
LAB_0001c62c:
    if (*local_1c == 2) {
      if ((local_40 != (int *)0x0) &&
         (iVar3 = FUN_00023670(*(undefined4 *)(local_3c + 0x138),local_40[9]), 0 < iVar3)) {
        if ((*local_40 == 0) ||
           ((fStack_14c.fds_bits[(uint)local_40[1] >> 5] >> (local_40[1] & 0x1fU) & 1U) == 0)) {
          if ((*local_40 == 0) &&
             ((fStack_14c.fds_bits[(uint)local_40[4] >> 5] >> (local_40[4] & 0x1fU) & 1U) != 0)) {
            FUN_0001bb14(local_1c);
          }
        }
        else {
          FUN_0001bb14(local_1c);
        }
      }
      if ((local_44 != (int *)0x0) &&
         (iVar3 = FUN_00023670(*(undefined4 *)(local_3c + 0x13c),local_44[9]), 0 < iVar3)) {
        if ((*local_44 == 0) ||
           ((fStack_14c.fds_bits[(uint)local_44[1] >> 5] >> (local_44[1] & 0x1fU) & 1U) == 0)) {
          if ((*local_44 == 0) &&
             ((fStack_14c.fds_bits[(uint)local_44[4] >> 5] >> (local_44[4] & 0x1fU) & 1U) != 0)) {
            FUN_0001bc70(local_1c);
          }
        }
        else {
          FUN_0001bc70(local_1c);
        }
      }
      if ((local_40 != (int *)0x0) && (*local_40 == 0)) {
        if ((fStack_cc.fds_bits[(uint)local_40[4] >> 5] >> (local_40[4] & 0x1fU) & 1U) != 0) {
          FUN_0001b4d4(local_1c,0);
        }
        if ((fStack_cc.fds_bits[(uint)local_40[5] >> 5] >> (local_40[5] & 0x1fU) & 1U) != 0) {
          FUN_0001b670(local_1c,0);
        }
      }
      if ((local_44 != (int *)0x0) && (*local_44 == 0)) {
        if ((fStack_cc.fds_bits[(uint)local_44[4] >> 5] >> (local_44[4] & 0x1fU) & 1U) != 0) {
          FUN_0001b4d4(local_1c,1);
        }
        if ((fStack_cc.fds_bits[(uint)local_44[5] >> 5] >> (local_44[5] & 0x1fU) & 1U) != 0) {
          FUN_0001b670(local_1c,1);
        }
      }
    }
  }
  goto LAB_0001c938;
}



/* ===== FUN_0001c978 @ 0001c978 size=1940 ===== */

int FUN_0001c978(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int local_1c68;
  undefined4 auStack_1c64 [600];
  int aiStack_1304 [601];
  int aiStack_9a0 [601];
  int local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  int *local_14;
  
  local_30 = 0;
  local_14 = (int *)0x0;
  local_2c = param_1;
  memset(aiStack_9a0,0,0x964);
  memset(aiStack_1304,0,0x964);
  memset(auStack_1c64,0,0x960);
  if (((local_2c == 0) || (param_2 == 0)) || (*(int *)(local_2c + 0x40) == 0)) {
    param_3 = -1;
  }
  else {
    local_30 = *(undefined4 *)(local_2c + 0x138);
    local_1c = FUN_000237b4(local_30);
    for (local_18 = 0; local_18 < 600; local_18 = local_18 + 1) {
      iVar3 = FUN_0002371c(local_30,local_1c);
      iVar4 = FUN_00023778(local_30);
      if (iVar3 == iVar4) {
        FUN_00023898(local_30);
      }
      FUN_000235c0(local_30,local_1c,aiStack_9a0 + local_18,auStack_1c64 + local_18);
      aiStack_1304[local_18] = 0x5b0;
      local_1c = FUN_0002371c(local_30,local_1c);
    }
    aiStack_9a0[local_18] = 0;
    aiStack_1304[local_18] = 0;
    for (local_14 = *(int **)(local_2c + 0x154); local_14 != (int *)0x0;
        local_14 = (int *)local_14[0x10b]) {
      local_34 = local_14[0x105];
      if (((*local_14 == 2) && (local_34 != 0)) &&
         ((iVar3 = FUN_00023670(local_30,*(undefined4 *)(local_34 + 0x24)), iVar3 == 0 &&
          (iVar4 = *(int *)(local_34 + 0x24), iVar3 = FUN_000237b4(local_30), iVar4 != iVar3)))) {
        uVar1 = FUN_00023778(local_30);
        *(undefined4 *)(local_34 + 0x24) = uVar1;
        pcVar2 = inet_ntoa((in_addr)local_14[2]);
        printf((char *)(DAT_0001d114 + 0x1cc20),DAT_0001d110 + 0x1cc18,0x658,DAT_0001d10c + 0x1cc0c,
               pcVar2);
      }
    }
    if (*(int *)(local_2c + 0x40) == 1) {
      if (((*(int *)(local_2c + 0xcc) == 0) || (*(int *)(local_2c + 0xcc) == 0)) &&
         (iVar3 = FUN_00024428(param_2,param_3,local_2c + 0x48), iVar3 < 0)) {
        printf((char *)(DAT_0001d120 + 0x1ccd0),DAT_0001d11c + 0x1ccc8,0x660,DAT_0001d118 + 0x1ccbc)
        ;
      }
    }
    else if ((*(int *)(local_2c + 0x40) == 2) &&
            ((((*(int *)(local_2c + 0x110) == 0 || (*(int *)(local_2c + 0x110) == 0)) ||
              (*(int *)(local_2c + 0x108) == 0)) &&
             (iVar3 = FUN_00024460(param_2,param_3,local_2c + 0x48), iVar3 < 0)))) {
      printf((char *)(DAT_0001d12c + 0x1cd58),DAT_0001d128 + 0x1cd50,0x66a,DAT_0001d124 + 0x1cd44);
    }
    local_24 = 0;
    local_20 = 0;
    while( true ) {
      if (((param_3 <= local_24) || (aiStack_9a0[local_20] == 0)) || (aiStack_1304[local_20] < 1))
      goto LAB_0001cff8;
      local_38 = 0;
      local_1c68 = 0;
      local_38 = FUN_00023be0(param_2 + local_24,param_3 - local_24,&local_1c68);
      if (local_38 == 0) break;
      if (*(int *)(local_2c + 0x40) == 1) {
        local_28 = FUN_00024c58(local_2c + 0x118,local_38,local_1c68,param_6,param_5,param_6,
                                aiStack_9a0 + local_20,aiStack_1304 + local_20);
        if (local_28 < 1) {
          printf((char *)(DAT_0001d144 + 0x1ceb8),DAT_0001d140 + 0x1ceb0,0x685,
                 DAT_0001d13c + 0x1cea4,local_28);
          return -1;
        }
      }
      else if (*(int *)(local_2c + 0x40) == 2) {
        local_28 = FUN_000251f4(local_2c + 0x118,local_38,local_1c68,param_6,param_5,param_6,
                                aiStack_9a0 + local_20,aiStack_1304 + local_20);
        if (local_28 < 1) {
          printf((char *)(DAT_0001d150 + 0x1cf54),DAT_0001d14c + 0x1cf4c,0x68c,
                 DAT_0001d148 + 0x1cf40,local_28);
          return -1;
        }
      }
      local_20 = local_20 + local_28;
      local_24 = (local_38 - param_2) + local_1c68;
    }
    printf((char *)(DAT_0001d138 + 0x1ce04),DAT_0001d134 + 0x1cdfc,0x67c,DAT_0001d130 + 0x1cdf0);
LAB_0001cff8:
    for (local_18 = 0; local_18 < local_20; local_18 = local_18 + 1) {
      *(int *)auStack_1c64[local_18] = aiStack_1304[local_18];
      FUN_000237f0(local_30);
    }
    for (local_14 = *(int **)(local_2c + 0x154); local_14 != (int *)0x0;
        local_14 = (int *)local_14[0x10b]) {
      local_3c = local_14[0x105];
      if ((*local_14 == 2) && (local_3c != 0)) {
        FUN_0001e008(local_3c,*(undefined4 *)(local_2c + 0x144),*(undefined4 *)(local_2c + 0x140),
                     *(undefined4 *)(local_2c + 0x144),param_5,param_6,
                     *(undefined4 *)(local_2c + 0x120));
        FUN_0001bb14(local_14);
      }
    }
  }
  return param_3;
}



/* ===== FUN_0001d154 @ 0001d154 size=1968 ===== */

int FUN_0001d154(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                undefined4 param_6)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int local_1c68;
  undefined4 auStack_1c64 [600];
  int aiStack_1304 [601];
  int aiStack_9a0 [601];
  int local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  int *local_14;
  
  local_30 = 0;
  local_14 = (int *)0x0;
  local_2c = param_2;
  memset(aiStack_9a0,0,0x964);
  memset(aiStack_1304,0,0x964);
  memset(auStack_1c64,0,0x960);
  if (((local_2c == 0) || (param_3 == 0)) || (*(int *)(local_2c + 0x40) == 0)) {
    param_4 = -1;
  }
  else {
    local_30 = *(undefined4 *)(local_2c + 0x138);
    local_1c = FUN_000237b4(local_30);
    for (local_18 = 0; local_18 < 600; local_18 = local_18 + 1) {
      iVar3 = FUN_0002371c(local_30,local_1c);
      iVar4 = FUN_00023778(local_30);
      if (iVar3 == iVar4) {
        FUN_00023898(local_30);
      }
      FUN_000235c0(local_30,local_1c,aiStack_9a0 + local_18,auStack_1c64 + local_18);
      aiStack_1304[local_18] = 0x5b0;
      local_1c = FUN_0002371c(local_30,local_1c);
    }
    aiStack_9a0[local_18] = 0;
    aiStack_1304[local_18] = 0;
    for (local_14 = *(int **)(local_2c + 0x154); local_14 != (int *)0x0;
        local_14 = (int *)local_14[0x10b]) {
      local_34 = local_14[0x105];
      if (((*local_14 == 2) && (local_34 != 0)) &&
         ((iVar3 = FUN_00023670(local_30,*(undefined4 *)(local_34 + 0x24)), iVar3 == 0 &&
          (iVar4 = *(int *)(local_34 + 0x24), iVar3 = FUN_000237b4(local_30), iVar4 != iVar3)))) {
        uVar1 = FUN_00023778(local_30);
        *(undefined4 *)(local_34 + 0x24) = uVar1;
        pcVar2 = inet_ntoa((in_addr)local_14[2]);
        printf((char *)(DAT_0001d90c + 0x1d408),DAT_0001d908 + 0x1d400,0x6c9,DAT_0001d904 + 0x1d3f4,
               pcVar2);
      }
    }
    if (*(int *)(local_2c + 0x40) == 1) {
      if (((*(int *)(local_2c + 0xcc) == 0) || (*(int *)(local_2c + 0xcc) == 0)) &&
         (iVar3 = FUN_00024428(param_3,param_4,local_2c + 0x48), iVar3 < 0)) {
        printf((char *)(DAT_0001d918 + 0x1d4b8),DAT_0001d914 + 0x1d4b0,0x6d1,DAT_0001d910 + 0x1d4a4)
        ;
      }
    }
    else if ((*(int *)(local_2c + 0x40) == 2) &&
            ((((*(int *)(local_2c + 0x110) == 0 || (*(int *)(local_2c + 0x110) == 0)) ||
              (*(int *)(local_2c + 0x108) == 0)) &&
             (iVar3 = FUN_00024460(param_3,param_4,local_2c + 0x48), iVar3 < 0)))) {
      printf((char *)(DAT_0001d924 + 0x1d540),DAT_0001d920 + 0x1d538,0x6db,DAT_0001d91c + 0x1d52c);
    }
    local_24 = 0;
    local_20 = 0;
    while( true ) {
      if (((param_4 <= local_24) || (aiStack_9a0[local_20] == 0)) || (aiStack_1304[local_20] < 1))
      goto LAB_0001d7e0;
      local_38 = 0;
      local_1c68 = 0;
      local_38 = FUN_00023be0(param_3 + local_24,param_4 - local_24,&local_1c68);
      if (local_38 == 0) break;
      if (*(int *)(local_2c + 0x40) == 1) {
        local_28 = FUN_00024c58(local_2c + 0x118,local_38,local_1c68,param_6,param_5,param_6,
                                aiStack_9a0 + local_20,aiStack_1304 + local_20);
        if (local_28 < 1) {
          printf((char *)(DAT_0001d93c + 0x1d6a0),DAT_0001d938 + 0x1d698,0x6f6,
                 DAT_0001d934 + 0x1d68c,local_28);
          return -1;
        }
      }
      else if (*(int *)(local_2c + 0x40) == 2) {
        local_28 = FUN_000251f4(local_2c + 0x118,local_38,local_1c68,param_6,param_5,param_6,
                                aiStack_9a0 + local_20,aiStack_1304 + local_20);
        if (local_28 < 1) {
          printf((char *)(DAT_0001d948 + 0x1d73c),DAT_0001d944 + 0x1d734,0x6fd,
                 DAT_0001d940 + 0x1d728,local_28);
          return -1;
        }
      }
      local_20 = local_20 + local_28;
      local_24 = (local_38 - param_3) + local_1c68;
    }
    printf((char *)(DAT_0001d930 + 0x1d5ec),DAT_0001d92c + 0x1d5e4,0x6ed,DAT_0001d928 + 0x1d5d8);
LAB_0001d7e0:
    for (local_18 = 0; local_18 < local_20; local_18 = local_18 + 1) {
      *(int *)auStack_1c64[local_18] = aiStack_1304[local_18];
      FUN_000237f0(local_30);
    }
    for (local_14 = *(int **)(local_2c + 0x154); local_14 != (int *)0x0;
        local_14 = (int *)local_14[0x10b]) {
      local_3c = local_14[0x105];
      if ((*local_14 == 2) && (local_3c != 0)) {
        FUN_0001e008(local_3c,*(undefined4 *)(local_2c + 0x144),*(undefined4 *)(local_2c + 0x140),
                     *(undefined4 *)(local_2c + 0x144),param_5,param_6,
                     *(undefined4 *)(local_2c + 0x120));
        FUN_0001bb14(local_14);
      }
    }
    FUN_0001bdcc(param_1);
  }
  return param_4;
}



/* ===== FUN_0001d94c @ 0001d94c size=1140 ===== */

undefined4
FUN_0001d94c(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 auStack_128 [20];
  undefined4 auStack_d8 [21];
  undefined4 auStack_84 [21];
  int local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  int *local_14;
  
  local_28 = 0;
  local_14 = (int *)0x0;
  local_24 = param_1;
  memset(auStack_84,0,0x54);
  memset(auStack_d8,0,0x54);
  memset(auStack_128,0,0x50);
  if (((local_24 == 0) || (param_2 == 0)) || (*(int *)(local_24 + 0x44) == 0)) {
    param_3 = 0xffffffff;
  }
  else {
    local_28 = *(undefined4 *)(local_24 + 0x13c);
    local_1c = FUN_000237b4(local_28);
    for (local_18 = 0; local_18 < 0x14; local_18 = local_18 + 1) {
      iVar3 = FUN_0002371c(local_28,local_1c);
      iVar4 = FUN_00023778(local_28);
      if (iVar3 == iVar4) {
        FUN_00023898(local_28);
      }
      FUN_000235c0(local_28,local_1c,auStack_84 + local_18,auStack_128 + local_18);
      auStack_d8[local_18] = 0x5b0;
      local_1c = FUN_0002371c(local_28,local_1c);
    }
    auStack_84[local_18] = 0;
    auStack_d8[local_18] = 0;
    for (local_14 = *(int **)(local_24 + 0x154); local_14 != (int *)0x0;
        local_14 = (int *)local_14[0x10b]) {
      local_2c = local_14[0x106];
      if (((*local_14 == 2) && (local_2c != 0)) &&
         ((iVar3 = FUN_00023670(local_28,*(undefined4 *)(local_2c + 0x24)), iVar3 == 0 &&
          (iVar4 = *(int *)(local_2c + 0x24), iVar3 = FUN_000237b4(local_28), iVar4 != iVar3)))) {
        uVar1 = FUN_00023778(local_28);
        *(undefined4 *)(local_2c + 0x24) = uVar1;
        pcVar2 = inet_ntoa((in_addr)local_14[2]);
        printf((char *)(DAT_0001ddc8 + 0x1db94),DAT_0001ddc4 + 0x1db8c,0x73c,DAT_0001ddc0 + 0x1db80,
               pcVar2);
      }
    }
    iVar3 = *(int *)(local_24 + 0x44);
    if (0x4000 < iVar3) {
      if (iVar3 < 0x4003) {
        local_20 = FUN_000257c8(local_24 + 0x128,param_2,param_3,param_6,param_5,param_6,auStack_84,
                                auStack_d8);
        if (local_20 < 1) {
          printf((char *)(DAT_0001ddd4 + 0x1dc44),DAT_0001ddd0 + 0x1dc3c,0x745,
                 DAT_0001ddcc + 0x1dc30,local_20);
          return 0xffffffff;
        }
      }
      else if (iVar3 == 0x4003) {
        local_20 = FUN_00025ae0(local_24 + 0x128,param_2,param_3,param_6,param_5,param_6,auStack_84,
                                auStack_d8);
        if (local_20 < 1) {
          printf((char *)(DAT_0001dde0 + 0x1dcb0),DAT_0001dddc + 0x1dca8,0x74c,
                 DAT_0001ddd8 + 0x1dc9c,local_20);
          return 0xffffffff;
        }
      }
    }
    for (local_18 = 0; local_18 < local_20; local_18 = local_18 + 1) {
      *(undefined4 *)auStack_128[local_18] = auStack_d8[local_18];
      FUN_000237f0(local_28);
    }
    for (local_14 = *(int **)(local_24 + 0x154); local_14 != (int *)0x0;
        local_14 = (int *)local_14[0x10b]) {
      local_30 = local_14[0x106];
      if ((*local_14 == 2) && (local_30 != 0)) {
        FUN_0001e008(local_30,*(undefined4 *)(local_24 + 0x14c),*(undefined4 *)(local_24 + 0x148),
                     *(undefined4 *)(local_24 + 0x14c),param_5,param_6,
                     *(undefined4 *)(local_24 + 0x130));
        FUN_0001bc70(local_14);
      }
    }
  }
  return param_3;
}



/* ===== FUN_0001dde4 @ 0001dde4 size=148 ===== */

longlong FUN_0001dde4(void)

{
  longlong lVar1;
  timespec local_18;
  
  clock_gettime(1,&local_18);
  lVar1 = FUN_00025c2c(local_18.tv_nsec,local_18.tv_nsec >> 0x1f,1000,0);
  return lVar1 + CONCAT44((local_18.tv_sec >> 0x1f) * 1000000 +
                          (int)((ulonglong)(uint)local_18.tv_sec * 1000000 >> 0x20),
                          (int)((ulonglong)(uint)local_18.tv_sec * 1000000));
}



/* ===== FUN_0001de78 @ 0001de78 size=120 ===== */

undefined8 FUN_0001de78(void)

{
  uint uVar1;
  timeval local_18;
  
  gettimeofday(&local_18,(__timezone_ptr_t)0x0);
  uVar1 = (uint)((ulonglong)(uint)local_18.tv_sec * 1000000);
  return CONCAT44((local_18.tv_sec >> 0x1f) * 1000000 +
                  (int)((ulonglong)(uint)local_18.tv_sec * 1000000 >> 0x20) +
                  (local_18.tv_usec >> 0x1f) + (uint)CARRY4(uVar1,local_18.tv_usec),
                  uVar1 + local_18.tv_usec);
}



/* ===== FUN_0001def0 @ 0001def0 size=48 ===== */

longlong FUN_0001def0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_0001de78();
  return lVar1 + CONCAT44(DAT_0001df24,DAT_0001df20);
}



/* ===== FUN_0001df28 @ 0001df28 size=112 ===== */

undefined4
FUN_0001df28(int param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,int param_6)

{
  undefined4 uVar1;
  
  if ((param_1 == 0) || (*(int *)(param_1 + 0x40) == 0)) {
    uVar1 = 0xffffffff;
  }
  else {
    *(ulonglong *)(param_1 + 0x140) =
         CONCAT44(param_6 - (param_4 + (uint)(param_5 < param_3)),param_5 - param_3);
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_0001e008 @ 0001e008 size=1168 ===== */

size_t FUN_0001e008(int *param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,
                   uint param_6,uint param_7)

{
  uint16_t uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 extraout_r2;
  size_t sVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  undefined1 local_7c;
  undefined1 local_7b;
  uint16_t local_7a;
  undefined1 auStack_78 [28];
  sockaddr local_5c;
  undefined4 local_4c;
  uint32_t uStack_48;
  uint32_t local_44;
  uint32_t local_40;
  uint32_t uStack_3c;
  uint32_t local_38;
  uint32_t local_34;
  ssize_t local_30;
  int local_2c;
  ssize_t local_28;
  int local_24;
  size_t local_20;
  uint32_t local_1c;
  uint32_t local_18;
  uint32_t local_14;
  
  uStack_48 = *(uint32_t *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_44 = *(uint32_t *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  local_34 = *(uint32_t *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_4c = 0;
  local_40 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0x1c;
  if (param_1[0xe] != 0 || param_1[0xf] != 0) {
    uVar8 = (uint)*(undefined8 *)(param_1 + 0xe);
    uVar6 = (int)((ulonglong)*(undefined8 *)(param_1 + 0xe) >> 0x20) + DAT_0001e374 +
            (uint)CARRY4(uVar8,DAT_0001e370);
    bVar7 = uVar6 <= param_6;
    if (param_6 == uVar6) {
      bVar7 = uVar8 + DAT_0001e370 <= param_5;
    }
    if (!bVar7) {
      return 0;
    }
  }
  uStack_3c = uStack_48;
  local_38 = local_44;
  local_14 = FUN_00025c2c(param_3 + param_5,param_4 + param_6 + (uint)CARRY4(param_3,param_5),
                          1000000,0);
  FUN_00025c2c(param_3 + param_5,param_4 + param_6 + (uint)CARRY4(param_3,param_5),1000000,0);
  local_18 = FUN_00025c2c(0,extraout_r2,1000000,0);
  local_1c = FUN_00025c2c((int)((ulonglong)param_7 * (ulonglong)param_5),
                          param_7 * param_6 + (int)((ulonglong)param_7 * (ulonglong)param_5 >> 0x20)
                          ,1000000,0);
  local_4c = CONCAT22(local_4c._2_2_,0xc880);
  sVar5 = local_20 + 3;
  if (-1 < (int)local_20) {
    sVar5 = local_20;
  }
  uVar1 = htons((short)((int)sVar5 >> 2) - 1);
  local_4c = CONCAT22(uVar1,(undefined2)local_4c);
  uStack_48 = htonl(param_1[10]);
  local_44 = htonl(local_14);
  local_40 = htonl(local_18);
  uStack_3c = htonl(local_1c);
  local_38 = htonl(param_1[0xb]);
  local_34 = htonl(param_1[0xc]);
  if (*param_1 == 0) {
    local_2c = param_1[5];
    local_30 = 0xffffffff;
    memset(&local_5c,0,0x10);
    local_5c.sa_family = 2;
    local_5c.sa_data._2_4_ = param_1[8];
    local_5c.sa_data._0_2_ = htons(*(uint16_t *)((int)param_1 + 0x1e));
    local_30 = sendto(local_2c,&local_4c,local_20,0,&local_5c,0x10);
    if (local_30 == -1) {
      iVar2 = FUN_00017d88();
      if ((iVar2 != 0xb) && (iVar2 = FUN_00017d88(), iVar2 != 4)) {
        pcVar3 = inet_ntoa((in_addr)param_1[8]);
        uVar4 = FUN_00017d88();
        uVar4 = FUN_00017da4(uVar4);
        printf((char *)(DAT_0001e38c + 0x1e48c),DAT_0001e388 + 0x1e484,0x7f0,DAT_0001e384 + 0x1e478,
               local_20,pcVar3,uVar4);
        return 0xffffffff;
      }
      return 0;
    }
  }
  else {
    local_28 = 0xffffffff;
    local_24 = param_1[1];
    local_7c = 0x24;
    local_7b = (undefined1)param_1[3];
    local_7a = htons((uint16_t)local_20);
    memcpy(auStack_78,&local_4c,local_20);
    local_28 = send(local_24,&local_7c,0x20,0);
    if (local_28 == -1) {
      iVar2 = FUN_00017d88();
      if ((iVar2 != 0xb) && (iVar2 = FUN_00017d88(), iVar2 != 4)) {
        pcVar3 = inet_ntoa((in_addr)param_1[8]);
        uVar4 = FUN_00017d88();
        uVar4 = FUN_00017da4(uVar4);
        printf((char *)(DAT_0001e380 + 0x1e360),DAT_0001e37c + 0x1e358,0x7de,DAT_0001e378 + 0x1e34c,
               pcVar3,uVar4);
        return 0xffffffff;
      }
      return 0;
    }
  }
  param_1[0xe] = param_5;
  param_1[0xf] = param_6;
  return local_20;
}



/* ===== FUN_0001e4b8 @ 0001e4b8 size=68 ===== */

void * FUN_0001e4b8(size_t param_1)

{
  void *pvVar1;
  
  if ((int)param_1 < 1) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = calloc(1,param_1);
  }
  return pvVar1;
}



/* ===== FUN_0001e4fc @ 0001e4fc size=48 ===== */

void FUN_0001e4fc(void *param_1)

{
  if (param_1 != (void *)0x0) {
    free(param_1);
  }
  return;
}



/* ===== FUN_0001e52c @ 0001e52c size=104 ===== */

void * FUN_0001e52c(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = calloc(1,param_2);
  if ((__dest != (void *)0x0) && (param_1 != (void *)0x0)) {
    memcpy(__dest,param_1,param_2);
  }
  return __dest;
}



/* ===== FUN_0001e594 @ 0001e594 size=120 ===== */

void * FUN_0001e594(char *param_1)

{
  size_t __n;
  void *__dest;
  
  __n = strlen(param_1);
  __dest = calloc(1,__n + 1);
  if ((__dest != (void *)0x0) && (param_1 != (char *)0x0)) {
    memcpy(__dest,param_1,__n);
  }
  return __dest;
}



/* ===== FUN_0001e60c @ 0001e60c size=172 ===== */

undefined4 FUN_0001e60c(int param_1,int param_2,int param_3)

{
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (param_2 <= local_c) {
      return *(undefined4 *)(param_1 + param_2 * 0xc + -4);
    }
    if (param_3 == *(int *)(param_1 + local_c * 0xc)) break;
    local_c = local_c + 1;
  }
  return *(undefined4 *)(param_1 + local_c * 0xc + 8);
}



/* ===== FUN_0001e6b8 @ 0001e6b8 size=204 ===== */

undefined4 FUN_0001e6b8(int param_1,int param_2,char *param_3)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (param_2 <= local_c) {
      return *(undefined4 *)(param_1 + param_2 * 0xc + -0xc);
    }
    iVar1 = strncmp(*(char **)(param_1 + local_c * 0xc + 8),param_3,
                    *(size_t *)(param_1 + local_c * 0xc + 4));
    if (iVar1 == 0) break;
    local_c = local_c + 1;
  }
  return *(undefined4 *)(param_1 + local_c * 0xc);
}



/* ===== FUN_0001e784 @ 0001e784 size=928 ===== */

int FUN_0001e784(byte *param_1,int *param_2)

{
  byte *__src;
  int iVar1;
  int iVar2;
  size_t local_1c;
  byte *local_18;
  byte *local_14;
  
  iVar2 = DAT_0001eb24 + 0x1e7a4;
  local_14 = param_1;
  iVar1 = FUN_0001e6b8(DAT_0001eb28 + 0x1e7bc,3,param_1);
  *param_2 = iVar1;
  if (*param_2 == 2) {
    printf((char *)(DAT_0001eb34 + 0x1e808),DAT_0001eb30 + 0x1e800,0xaa,DAT_0001eb2c + 0x1e7f4,
           param_1);
    iVar1 = -1;
  }
  else {
    *(undefined2 *)(param_2 + 1) = 0;
    *(undefined1 *)((int)param_2 + 6) = 0;
    *(undefined1 *)((int)param_2 + 0x26) = 0;
    for (; ((*(ushort *)(**(int **)(iVar2 + DAT_0001eb38) + (uint)*local_14 * 2) & 2) != 0 ||
           (*local_14 == 0x3a)); local_14 = local_14 + 1) {
    }
    if ((*local_14 == 0x2f) && (local_14[1] == 0x2f)) {
      local_14 = local_14 + 2;
      for (local_18 = local_14;
          (((*(ushort *)(**(int **)(iVar2 + DAT_0001eb38) + (uint)*local_18 * 2) & 0x80) != 0 &&
           (*local_18 != 0x3a)) && (*local_18 != 0x2f)); local_18 = local_18 + 1) {
      }
      if (*local_18 == 0x3a) {
        iVar1 = sscanf((char *)(local_18 + 1),(char *)(DAT_0001eb48 + 0x1e96c),&local_1c);
        if (iVar1 != 1) {
          printf((char *)(DAT_0001eb54 + 0x1e9a4),DAT_0001eb50 + 0x1e99c,0xbc,DAT_0001eb4c + 0x1e990
                 ,param_1);
          return -1;
        }
        *(undefined2 *)(param_2 + 1) = (undefined2)local_1c;
      }
      local_1c = (int)local_18 - (int)local_14;
      if (0x1f < local_1c) {
        local_1c = 0x1f;
      }
      memcpy((void *)((int)param_2 + 6),local_14,local_1c);
      *(undefined1 *)((int)param_2 + local_1c + 6) = 0;
      for (; (__src = local_18,
             (*(ushort *)(**(int **)(iVar2 + DAT_0001eb38) + (uint)*local_18 * 2) & 0x80) != 0 &&
             (*local_18 != 0x2f)); local_18 = local_18 + 1) {
      }
      if (*local_18 == 0x2f) {
        local_14 = local_18;
        while ((*(ushort *)(**(int **)(iVar2 + DAT_0001eb38) + (uint)*local_18 * 2) & 0x80) != 0) {
          local_18 = local_18 + 1;
        }
        local_1c = (int)local_18 - (int)__src;
        if (0x3f < local_1c) {
          local_1c = 0x3f;
        }
        memcpy((void *)((int)param_2 + 0x26),__src,local_1c);
        *(undefined1 *)((int)param_2 + local_1c + 0x26) = 0;
        iVar1 = (int)local_18 - (int)param_1;
      }
      else {
        iVar1 = (int)local_18 - (int)param_1;
      }
    }
    else {
      printf((char *)(DAT_0001eb44 + 0x1e8cc),DAT_0001eb40 + 0x1e8c4,0xb3,DAT_0001eb3c + 0x1e8b8,
             param_1);
      iVar1 = -1;
    }
  }
  return iVar1;
}



/* ===== FUN_0001eb58 @ 0001eb58 size=256 ===== */

size_t FUN_0001eb58(undefined4 *param_1,char *param_2,size_t param_3)

{
  undefined4 uVar1;
  size_t sVar2;
  
  if (*(short *)(param_1 + 1) == 0) {
    uVar1 = FUN_0001e60c(DAT_0001ec60 + 0x1ec08,3,*param_1);
    snprintf(param_2,param_3,(char *)(DAT_0001ec64 + 0x1ec38),uVar1,(int)param_1 + 6,
             (int)param_1 + 0x26);
  }
  else {
    uVar1 = FUN_0001e60c(DAT_0001ec58 + 0x1eba0,3,*param_1);
    snprintf(param_2,param_3,(char *)(DAT_0001ec5c + 0x1ebdc),uVar1,(int)param_1 + 6,
             (uint)*(ushort *)(param_1 + 1),(int)param_1 + 0x26);
  }
  sVar2 = strlen(param_2);
  return sVar2;
}



/* ===== FUN_0001ec68 @ 0001ec68 size=788 ===== */

undefined4 FUN_0001ec68(undefined4 *param_1,byte *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int local_18;
  byte *local_14;
  
  iVar2 = DAT_0001ef7c + 0x1ec88;
  local_14 = param_2;
  local_18 = FUN_0001e6b8(DAT_0001ef80 + 0x1eca0,0xc,param_2);
  if (local_18 == 0xb) {
    local_18 = FUN_0001e6b8(DAT_0001ef98 + 0x1ee08,2,local_14);
    if (local_18 == 1) {
      if (*local_14 == 0x24) {
        *param_1 = 2;
        *(byte *)(param_1 + 1) = local_14[1];
        *(undefined2 *)((int)param_1 + 6) = *(undefined2 *)(local_14 + 2);
        *(undefined1 *)(param_1 + 2) = 0;
        uVar1 = 0;
      }
      else {
        printf((char *)(DAT_0001efb4 + 0x1ef2c),DAT_0001efb0 + 0x1ef24,0x10c,DAT_0001efac + 0x1ef18,
               param_2);
        uVar1 = 0xffffffff;
      }
    }
    else {
      *param_1 = 1;
      param_1[1] = local_18;
      while ((*(ushort *)(**(int **)(iVar2 + DAT_0001ef84) + (uint)*local_14 * 2) & 0x80) != 0) {
        local_14 = local_14 + 1;
      }
      local_14 = local_14 + 1;
      iVar2 = sscanf((char *)local_14,(char *)(DAT_0001ef9c + 0x1ee98),&local_18);
      if (iVar2 == 1) {
        param_1[2] = local_18;
        uVar1 = 0;
      }
      else {
        printf((char *)(DAT_0001efa8 + 0x1eed4),DAT_0001efa4 + 0x1eecc,0x104,DAT_0001efa0 + 0x1eec0,
               param_2);
        uVar1 = 0xffffffff;
      }
    }
  }
  else {
    *param_1 = 0;
    param_1[1] = local_18;
    while ((*(ushort *)(**(int **)(iVar2 + DAT_0001ef84) + (uint)*local_14 * 2) & 0x80) != 0) {
      local_14 = local_14 + 1;
    }
    local_14 = local_14 + 1;
    local_18 = FUN_0001e784(local_14,param_1 + 2);
    if (local_18 < 1) {
      uVar1 = 0xffffffff;
    }
    else {
      while ((*(ushort *)(**(int **)(iVar2 + DAT_0001ef84) + (uint)*local_14 * 2) & 0x80) != 0) {
        local_14 = local_14 + 1;
      }
      local_14 = local_14 + 1;
      local_18 = FUN_0001e6b8(DAT_0001ef88 + 0x1eda4,2,local_14);
      if (local_18 == 1) {
        printf((char *)(DAT_0001ef94 + 0x1ede4),DAT_0001ef90 + 0x1eddc,0xf7,DAT_0001ef8c + 0x1edd0,
               param_2);
        uVar1 = 0xffffffff;
      }
      else {
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}



/* ===== FUN_0001efb8 @ 0001efb8 size=536 ===== */

char * FUN_0001efb8(int *param_1,char *param_2,size_t param_3)

{
  undefined4 uVar1;
  size_t sVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  
  if (*param_1 == 0) {
    uVar1 = FUN_0001e60c(DAT_0001f1d0 + 0x1f008,0xc,param_1[1]);
    snprintf(param_2,param_3,(char *)(DAT_0001f1d4 + 0x1f01c),uVar1);
    sVar2 = strlen(param_2);
    pcVar5 = param_2 + sVar2;
    iVar6 = param_3 - sVar2;
    if (iVar6 < 2) {
      pcVar5 = pcVar5 + -(int)param_2;
    }
    else {
      iVar3 = FUN_0001eb58(param_1 + 2,pcVar5,iVar6);
      pcVar5 = pcVar5 + iVar3;
      if (iVar6 - iVar3 < 2) {
        pcVar5 = pcVar5 + -(int)param_2;
      }
      else {
        uVar1 = FUN_0001e60c(DAT_0001f1d8 + 0x1f0e8,2,param_1[0x1c]);
        snprintf(pcVar5,iVar6 - iVar3,(char *)(DAT_0001f1dc + 0x1f0fc),uVar1);
        sVar2 = strlen(pcVar5);
        pcVar5 = pcVar5 + (sVar2 - (int)param_2);
      }
    }
  }
  else if (*param_1 == 1) {
    uVar1 = FUN_0001e60c(DAT_0001f1e0 + 0x1f15c,2,param_1[1]);
    iVar6 = param_1[2];
    uVar4 = FUN_0001e60c(DAT_0001f1e4 + 0x1f188,0x2b,param_1[2]);
    snprintf(param_2,param_3,(char *)(DAT_0001f1e8 + 0x1f1a8),uVar1,iVar6,uVar4);
    pcVar5 = (char *)strlen(param_2);
  }
  else {
    pcVar5 = (char *)0x0;
  }
  return pcVar5;
}



/* ===== FUN_0001f1ec @ 0001f1ec size=952 ===== */

undefined4 FUN_0001f1ec(int param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_14;
  char *local_10;
  int local_c;
  
  local_c = param_1 + 4;
  if (*(int *)(param_1 + 0x80) != 0) {
    FUN_0001e4fc(*(undefined4 *)(param_1 + 0x80));
    *(undefined4 *)(local_c + 0x7c) = 0;
  }
  uVar1 = FUN_0001e4b8(0x14);
  *(undefined4 *)(local_c + 0x7c) = uVar1;
  if (*(int *)(local_c + 0x7c) == 0) {
    printf((char *)(DAT_0001f5b0 + 0x1f288),DAT_0001f5ac + 0x1f280,0x153,DAT_0001f5a8 + 0x1f274,
           DAT_0001f5a4 + 0x1f268);
    uVar1 = 0xffffffff;
  }
  else {
    local_10 = strstr(param_2,(char *)(DAT_0001f5b4 + 0x1f29c));
    if (local_10 == (char *)0x0) {
      printf((char *)(DAT_0001f5c0 + 0x1f2dc),DAT_0001f5bc + 0x1f2d4,0x159,DAT_0001f5b8 + 0x1f2c8,
             param_2);
      FUN_0001e4fc(*(undefined4 *)(local_c + 0x7c));
      *(undefined4 *)(local_c + 0x7c) = 0;
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = FUN_0001e6b8(DAT_0001f5c4 + 0x1f314,3,local_10);
      **(undefined4 **)(local_c + 0x7c) = uVar1;
      local_10 = strstr(param_2,(char *)(DAT_0001f5c8 + 0x1f334));
      if ((local_10 != (char *)0x0) &&
         (iVar2 = sscanf(local_10,(char *)(DAT_0001f5cc + 0x1f360),&local_14), iVar2 == 1)) {
        *(uint *)(*(int *)(local_c + 0x7c) + 4) = *(uint *)(*(int *)(local_c + 0x7c) + 4) | 1;
        *(undefined4 *)(*(int *)(local_c + 0x7c) + 8) = local_14;
      }
      local_10 = strstr(param_2,(char *)(DAT_0001f5d0 + 0x1f3ac));
      if (local_10 != (char *)0x0) {
        *(uint *)(*(int *)(local_c + 0x7c) + 4) = *(uint *)(*(int *)(local_c + 0x7c) + 4) | 2;
      }
      local_10 = strstr(param_2,(char *)(DAT_0001f5d4 + 0x1f3ec));
      if (local_10 != (char *)0x0) {
        *(uint *)(*(int *)(local_c + 0x7c) + 4) = *(uint *)(*(int *)(local_c + 0x7c) + 4) | 4;
      }
      local_10 = strstr(param_2,(char *)(DAT_0001f5d8 + 0x1f42c));
      if ((local_10 != (char *)0x0) &&
         (iVar2 = sscanf(local_10,(char *)(DAT_0001f5dc + 0x1f458),&local_14), iVar2 == 1)) {
        *(uint *)(*(int *)(local_c + 0x7c) + 4) = *(uint *)(*(int *)(local_c + 0x7c) + 4) | 8;
        *(short *)(*(int *)(local_c + 0x7c) + 0xc) = (short)local_14;
      }
      local_10 = strstr(param_2,(char *)(DAT_0001f5e0 + 0x1f4a8));
      if ((local_10 != (char *)0x0) &&
         (iVar2 = sscanf(local_10,(char *)(DAT_0001f5e4 + 0x1f4d4),&local_14), iVar2 == 1)) {
        *(uint *)(*(int *)(local_c + 0x7c) + 4) = *(uint *)(*(int *)(local_c + 0x7c) + 4) | 0x10;
        *(short *)(*(int *)(local_c + 0x7c) + 0xe) = (short)local_14;
      }
      local_10 = strstr(param_2,(char *)(DAT_0001f5e8 + 0x1f524));
      if ((local_10 != (char *)0x0) &&
         (iVar2 = sscanf(local_10,(char *)(DAT_0001f5ec + 0x1f550),&local_14), iVar2 == 1)) {
        *(uint *)(*(int *)(local_c + 0x7c) + 4) = *(uint *)(*(int *)(local_c + 0x7c) + 4) | 0x20;
        *(undefined1 *)(*(int *)(local_c + 0x7c) + 0x10) = (undefined1)local_14;
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ===== FUN_0001f5f0 @ 0001f5f0 size=1192 ===== */

char * FUN_0001f5f0(int param_1,char *param_2,size_t param_3)

{
  undefined4 uVar1;
  size_t sVar2;
  size_t local_2c;
  char *local_14;
  
  if (*(int *)(param_1 + 0x80) == 0) {
    local_14 = (char *)0x0;
  }
  else {
    uVar1 = FUN_0001e60c(DAT_0001fa98 + 0x1f650,3,**(undefined4 **)(param_1 + 0x80));
    snprintf(param_2,param_3,(char *)(DAT_0001fa9c + 0x1f664),uVar1);
    local_2c = strlen(param_2);
    local_14 = param_2 + local_2c;
    local_2c = param_3 - local_2c;
    if ((int)local_2c < 2) {
      local_14 = local_14 + -(int)param_2;
    }
    else {
      if ((*(uint *)(*(int *)(param_1 + 0x80) + 4) & 1) != 0) {
        snprintf(local_14,local_2c,(char *)(DAT_0001faa0 + 0x1f6ec),
                 *(undefined4 *)(*(int *)(param_1 + 0x80) + 8));
        sVar2 = strlen(local_14);
        local_14 = local_14 + sVar2;
        local_2c = local_2c - sVar2;
        if ((int)local_2c < 2) {
          return local_14 + -(int)param_2;
        }
      }
      if ((*(uint *)(*(int *)(param_1 + 0x80) + 4) & 4) == 0) {
        if ((*(uint *)(*(int *)(param_1 + 0x80) + 4) & 2) != 0) {
          snprintf(local_14,local_2c,(char *)(DAT_0001faa8 + 0x1f7e0));
          sVar2 = strlen(local_14);
          local_14 = local_14 + sVar2;
          local_2c = local_2c - sVar2;
          if ((int)local_2c < 2) {
            return local_14 + -(int)param_2;
          }
        }
      }
      else {
        snprintf(local_14,local_2c,(char *)(DAT_0001faa4 + 0x1f764));
        sVar2 = strlen(local_14);
        local_14 = local_14 + sVar2;
        local_2c = local_2c - sVar2;
        if ((int)local_2c < 2) {
          return local_14 + -(int)param_2;
        }
      }
      if ((*(uint *)(*(int *)(param_1 + 0x80) + 4) & 8) != 0) {
        snprintf(local_14,local_2c,(char *)(DAT_0001faac + 0x1f884),
                 (uint)*(ushort *)(*(int *)(param_1 + 0x80) + 0xc),
                 *(ushort *)(*(int *)(param_1 + 0x80) + 0xc) + 1);
        sVar2 = strlen(local_14);
        local_14 = local_14 + sVar2;
        local_2c = local_2c - sVar2;
        if ((int)local_2c < 2) {
          return local_14 + -(int)param_2;
        }
      }
      if ((*(uint *)(*(int *)(param_1 + 0x80) + 4) & 0x10) != 0) {
        snprintf(local_14,local_2c,(char *)(DAT_0001fab0 + 0x1f924),
                 (uint)*(ushort *)(*(int *)(param_1 + 0x80) + 0xe),
                 *(ushort *)(*(int *)(param_1 + 0x80) + 0xe) + 1);
        sVar2 = strlen(local_14);
        local_14 = local_14 + sVar2;
        local_2c = local_2c - sVar2;
        if ((int)local_2c < 2) {
          return local_14 + -(int)param_2;
        }
      }
      if ((*(uint *)(*(int *)(param_1 + 0x80) + 4) & 0x20) != 0) {
        snprintf(local_14,local_2c,(char *)(DAT_0001fab4 + 0x1f9c4),
                 (uint)*(byte *)(*(int *)(param_1 + 0x80) + 0x10),
                 *(byte *)(*(int *)(param_1 + 0x80) + 0x10) + 1);
        sVar2 = strlen(local_14);
        local_14 = local_14 + sVar2;
        local_2c = local_2c - sVar2;
        if ((int)local_2c < 2) {
          return local_14 + -(int)param_2;
        }
      }
      snprintf(local_14,local_2c,(char *)(DAT_0001fab8 + 0x1fa24));
      sVar2 = strlen(local_14);
      if ((int)(local_2c - sVar2) < 2) {
        local_14 = local_14 + (sVar2 - (int)param_2);
      }
      else {
        local_14 = local_14 + (sVar2 - (int)param_2);
      }
    }
  }
  return local_14;
}



/* ===== FUN_0001fae4 @ 0001fae4 size=44 ===== */

undefined4 FUN_0001fae4(void)

{
  return 0;
}



/* ===== FUN_0001fb38 @ 0001fb38 size=44 ===== */

undefined4 FUN_0001fb38(void)

{
  return 0;
}



/* ===== FUN_0001fb8c @ 0001fb8c size=44 ===== */

undefined4 FUN_0001fb8c(void)

{
  return 0;
}



/* ===== FUN_0001fbb8 @ 0001fbb8 size=312 ===== */

undefined4 FUN_0001fbb8(int param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x74) != 0) {
    FUN_0001e4fc(*(undefined4 *)(param_1 + 0x74));
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  uVar1 = FUN_0001e4b8(4);
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  if (*(int *)(param_1 + 0x74) == 0) {
    printf((char *)(DAT_0001fcfc + 0x1fc54),DAT_0001fcf8 + 0x1fc4c,0x201,DAT_0001fcf4 + 0x1fc40,
           DAT_0001fcf0 + 0x1fc34);
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = sscanf(param_2,(char *)(DAT_0001fd00 + 0x1fc74),*(undefined4 *)(param_1 + 0x74));
    if (iVar2 == 1) {
      uVar1 = 0;
    }
    else {
      FUN_0001e4fc(*(undefined4 *)(param_1 + 0x74));
      *(undefined4 *)(param_1 + 0x74) = 0;
      printf((char *)(DAT_0001fd10 + 0x1fcd8),DAT_0001fd0c + 0x1fcd0,0x201,DAT_0001fd08 + 0x1fcc4,
             DAT_0001fd04 + 0x1fcb8,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_0001fd14 @ 0001fd14 size=104 ===== */

size_t FUN_0001fd14(int param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  
  if (*(int *)(param_1 + 0x74) == 0) {
    sVar1 = 0;
  }
  else {
    snprintf(param_2,param_3,(char *)(DAT_0001fd7c + 0x1fd58),**(undefined4 **)(param_1 + 0x74));
    sVar1 = strlen(param_2);
  }
  return sVar1;
}



/* ===== FUN_0001fd80 @ 0001fd80 size=312 ===== */

undefined4 FUN_0001fd80(int param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x7c) != 0) {
    FUN_0001e4fc(*(undefined4 *)(param_1 + 0x7c));
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  uVar1 = FUN_0001e4b8(4);
  *(undefined4 *)(param_1 + 0x7c) = uVar1;
  if (*(int *)(param_1 + 0x7c) == 0) {
    printf((char *)(DAT_0001fec4 + 0x1fe1c),DAT_0001fec0 + 0x1fe14,0x202,DAT_0001febc + 0x1fe08,
           DAT_0001feb8 + 0x1fdfc);
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = sscanf(param_2,(char *)(DAT_0001fec8 + 0x1fe3c),*(undefined4 *)(param_1 + 0x7c));
    if (iVar2 == 1) {
      uVar1 = 0;
    }
    else {
      FUN_0001e4fc(*(undefined4 *)(param_1 + 0x7c));
      *(undefined4 *)(param_1 + 0x7c) = 0;
      printf((char *)(DAT_0001fed8 + 0x1fea0),DAT_0001fed4 + 0x1fe98,0x202,DAT_0001fed0 + 0x1fe8c,
             DAT_0001fecc + 0x1fe80,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_0001fedc @ 0001fedc size=104 ===== */

size_t FUN_0001fedc(int param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  
  if (*(int *)(param_1 + 0x7c) == 0) {
    sVar1 = 0;
  }
  else {
    snprintf(param_2,param_3,(char *)(DAT_0001ff44 + 0x1ff20),**(undefined4 **)(param_1 + 0x7c));
    sVar1 = strlen(param_2);
  }
  return sVar1;
}



/* ===== FUN_0001ff48 @ 0001ff48 size=312 ===== */

undefined4 FUN_0001ff48(int param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xa0) != 0) {
    FUN_0001e4fc(*(undefined4 *)(param_1 + 0xa0));
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  uVar1 = FUN_0001e4b8(4);
  *(undefined4 *)(param_1 + 0xa0) = uVar1;
  if (*(int *)(param_1 + 0xa0) == 0) {
    printf((char *)(DAT_0002008c + 0x1ffe4),DAT_00020088 + 0x1ffdc,0x203,DAT_00020084 + 0x1ffd0,
           DAT_00020080 + 0x1ffc4);
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = sscanf(param_2,(char *)(DAT_00020090 + 0x20004),*(undefined4 *)(param_1 + 0xa0));
    if (iVar2 == 1) {
      uVar1 = 0;
    }
    else {
      FUN_0001e4fc(*(undefined4 *)(param_1 + 0xa0));
      *(undefined4 *)(param_1 + 0xa0) = 0;
      printf((char *)(DAT_000200a0 + 0x20068),DAT_0002009c + 0x20060,0x203,DAT_00020098 + 0x20054,
             DAT_00020094 + 0x20048,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_000200a4 @ 000200a4 size=104 ===== */

size_t FUN_000200a4(int param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  
  if (*(int *)(param_1 + 0xa0) == 0) {
    sVar1 = 0;
  }
  else {
    snprintf(param_2,param_3,(char *)(DAT_0002010c + 0x200e8),**(undefined4 **)(param_1 + 0xa0));
    sVar1 = strlen(param_2);
  }
  return sVar1;
}



/* ===== FUN_00020110 @ 00020110 size=548 ===== */

undefined4 FUN_00020110(int param_1,byte *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint local_18;
  byte *local_14;
  
  iVar2 = DAT_00020334 + 0x20130;
  local_18 = 0;
  if (*(int *)(param_1 + 0x9c) != 0) {
    FUN_0001e4fc(*(undefined4 *)(param_1 + 0x9c));
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  uVar1 = FUN_0001e4b8(0x40);
  *(undefined4 *)(param_1 + 0x9c) = uVar1;
  local_14 = param_2;
  if (*(int *)(param_1 + 0x9c) == 0) {
    printf((char *)(DAT_00020344 + 0x201c4),DAT_00020340 + 0x201bc,0x22d,DAT_0002033c + 0x201b0,
           DAT_00020338 + 0x201a4);
    uVar1 = 0xffffffff;
  }
  else {
    for (; ((*(ushort *)(**(int **)(iVar2 + DAT_00020348) + (uint)*local_14 * 2) & 0x80) != 0 &&
           (*local_14 != 0x3a)); local_14 = local_14 + 1) {
    }
    if (*local_14 == 0x3a) {
      do {
        local_14 = local_14 + 1;
      } while (*local_14 == 0x20);
      while (((*(ushort *)(**(int **)(iVar2 + DAT_00020348) + (uint)*local_14 * 2) & 0x40) != 0 &&
             (local_18 < 0x3f))) {
        *(byte *)(*(int *)(param_1 + 0x9c) + local_18) = *local_14;
        local_18 = local_18 + 1;
        local_14 = local_14 + 1;
      }
      *(undefined1 *)(*(int *)(param_1 + 0x9c) + local_18) = 0;
      uVar1 = 0;
    }
    else {
      FUN_0001e4fc(*(undefined4 *)(param_1 + 0x9c));
      *(undefined4 *)(param_1 + 0x9c) = 0;
      printf((char *)(DAT_00020358 + 0x20274),DAT_00020354 + 0x2026c,0x22d,DAT_00020350 + 0x20260,
             DAT_0002034c + 0x20254,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_0002035c @ 0002035c size=100 ===== */

size_t FUN_0002035c(int param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  
  if (*(int *)(param_1 + 0x9c) == 0) {
    sVar1 = 0;
  }
  else {
    snprintf(param_2,param_3,(char *)(DAT_000203c0 + 0x2039c),*(undefined4 *)(param_1 + 0x9c));
    sVar1 = strlen(param_2);
  }
  return sVar1;
}



/* ===== FUN_000203c4 @ 000203c4 size=548 ===== */

undefined4 FUN_000203c4(int param_1,byte *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint local_18;
  byte *local_14;
  
  iVar2 = DAT_000205e8 + 0x203e4;
  local_18 = 0;
  if (*(int *)(param_1 + 0x90) != 0) {
    FUN_0001e4fc(*(undefined4 *)(param_1 + 0x90));
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  uVar1 = FUN_0001e4b8(0x40);
  *(undefined4 *)(param_1 + 0x90) = uVar1;
  local_14 = param_2;
  if (*(int *)(param_1 + 0x90) == 0) {
    printf((char *)(DAT_000205f8 + 0x20478),DAT_000205f4 + 0x20470,0x22e,DAT_000205f0 + 0x20464,
           DAT_000205ec + 0x20458);
    uVar1 = 0xffffffff;
  }
  else {
    for (; ((*(ushort *)(**(int **)(iVar2 + DAT_000205fc) + (uint)*local_14 * 2) & 0x80) != 0 &&
           (*local_14 != 0x3a)); local_14 = local_14 + 1) {
    }
    if (*local_14 == 0x3a) {
      do {
        local_14 = local_14 + 1;
      } while (*local_14 == 0x20);
      while (((*(ushort *)(**(int **)(iVar2 + DAT_000205fc) + (uint)*local_14 * 2) & 0x40) != 0 &&
             (local_18 < 0x3f))) {
        *(byte *)(*(int *)(param_1 + 0x90) + local_18) = *local_14;
        local_18 = local_18 + 1;
        local_14 = local_14 + 1;
      }
      *(undefined1 *)(*(int *)(param_1 + 0x90) + local_18) = 0;
      uVar1 = 0;
    }
    else {
      FUN_0001e4fc(*(undefined4 *)(param_1 + 0x90));
      *(undefined4 *)(param_1 + 0x90) = 0;
      printf((char *)(DAT_0002060c + 0x20528),DAT_00020608 + 0x20520,0x22e,DAT_00020604 + 0x20514,
             DAT_00020600 + 0x20508,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_00020610 @ 00020610 size=100 ===== */

size_t FUN_00020610(int param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  
  if (*(int *)(param_1 + 0x90) == 0) {
    sVar1 = 0;
  }
  else {
    snprintf(param_2,param_3,(char *)(DAT_00020674 + 0x20650),*(undefined4 *)(param_1 + 0x90));
    sVar1 = strlen(param_2);
  }
  return sVar1;
}



/* ===== FUN_00020678 @ 00020678 size=548 ===== */

undefined4 FUN_00020678(int param_1,byte *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint local_18;
  byte *local_14;
  
  iVar2 = DAT_0002089c + 0x20698;
  local_18 = 0;
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_0001e4fc(*(undefined4 *)(param_1 + 0x78));
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  uVar1 = FUN_0001e4b8(0x20);
  *(undefined4 *)(param_1 + 0x78) = uVar1;
  local_14 = param_2;
  if (*(int *)(param_1 + 0x78) == 0) {
    printf((char *)(DAT_000208ac + 0x2072c),DAT_000208a8 + 0x20724,0x22f,DAT_000208a4 + 0x20718,
           DAT_000208a0 + 0x2070c);
    uVar1 = 0xffffffff;
  }
  else {
    for (; ((*(ushort *)(**(int **)(iVar2 + DAT_000208b0) + (uint)*local_14 * 2) & 0x80) != 0 &&
           (*local_14 != 0x3a)); local_14 = local_14 + 1) {
    }
    if (*local_14 == 0x3a) {
      do {
        local_14 = local_14 + 1;
      } while (*local_14 == 0x20);
      while (((*(ushort *)(**(int **)(iVar2 + DAT_000208b0) + (uint)*local_14 * 2) & 0x40) != 0 &&
             (local_18 < 0x1f))) {
        *(byte *)(*(int *)(param_1 + 0x78) + local_18) = *local_14;
        local_18 = local_18 + 1;
        local_14 = local_14 + 1;
      }
      *(undefined1 *)(*(int *)(param_1 + 0x78) + local_18) = 0;
      uVar1 = 0;
    }
    else {
      FUN_0001e4fc(*(undefined4 *)(param_1 + 0x78));
      *(undefined4 *)(param_1 + 0x78) = 0;
      printf((char *)(DAT_000208c0 + 0x207dc),DAT_000208bc + 0x207d4,0x22f,DAT_000208b8 + 0x207c8,
             DAT_000208b4 + 0x207bc,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_000208c4 @ 000208c4 size=100 ===== */

size_t FUN_000208c4(int param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  
  if (*(int *)(param_1 + 0x78) == 0) {
    sVar1 = 0;
  }
  else {
    snprintf(param_2,param_3,(char *)(DAT_00020928 + 0x20904),*(undefined4 *)(param_1 + 0x78));
    sVar1 = strlen(param_2);
  }
  return sVar1;
}



/* ===== FUN_0002092c @ 0002092c size=648 ===== */

undefined4 FUN_0002092c(int param_1,byte *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  int local_18;
  byte *local_14;
  
  iVar3 = DAT_00020bb4 + 0x2094c;
  if (*(int *)(param_1 + 0xa4) != 0) {
    FUN_0001e4fc(*(undefined4 *)(param_1 + 0xa4));
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  uVar1 = FUN_0001e4b8(4);
  *(undefined4 *)(param_1 + 0xa4) = uVar1;
  local_14 = param_2;
  if (*(int *)(param_1 + 0xa4) == 0) {
    printf((char *)(DAT_00020bc4 + 0x209e8),DAT_00020bc0 + 0x209e0,0x264,DAT_00020bbc + 0x209d4,
           DAT_00020bb8 + 0x209c8);
  }
  else {
    for (; ((*(ushort *)(**(int **)(iVar3 + DAT_00020bc8) + (uint)*local_14 * 2) & 0x80) != 0 &&
           (*local_14 != 0x3a)); local_14 = local_14 + 1) {
    }
    if (*local_14 == 0x3a) {
      do {
        local_14 = local_14 + 1;
      } while (*local_14 == 0x20);
      for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
        if ((*(int *)(DAT_00020bdc + local_18 * 0xc + 0x20ae8) != 0) &&
           (pcVar2 = strstr((char *)local_14,*(char **)(DAT_00020be0 + local_18 * 0xc + 0x20b14)),
           pcVar2 != (char *)0x0)) {
          **(undefined4 **)(param_1 + 0xa4) =
               *(undefined4 *)(DAT_00020be4 + 0x20b50 + local_18 * 0xc);
          return 0;
        }
      }
      FUN_0001e4fc(*(undefined4 *)(param_1 + 0xa4));
      *(undefined4 *)(param_1 + 0xa4) = 0;
    }
    else {
      FUN_0001e4fc(*(undefined4 *)(param_1 + 0xa4));
      *(undefined4 *)(param_1 + 0xa4) = 0;
      printf((char *)(DAT_00020bd8 + 0x20a98),DAT_00020bd4 + 0x20a90,0x264,DAT_00020bd0 + 0x20a84,
             DAT_00020bcc + 0x20a78,param_2);
    }
  }
  return 0xffffffff;
}



/* ===== FUN_00020be8 @ 00020be8 size=232 ===== */

size_t FUN_00020be8(int param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  int local_c;
  
  if (*(int *)(param_1 + 0xa4) != 0) {
    for (local_c = 0; local_c < 4; local_c = local_c + 1) {
      if (**(int **)(param_1 + 0xa4) == *(int *)(DAT_00020cd0 + 0x20c3c + local_c * 0xc)) {
        snprintf(param_2,param_3,(char *)(DAT_00020cd8 + 0x20c84),
                 *(undefined4 *)(DAT_00020cd4 + local_c * 0xc + 0x20c6c));
        sVar1 = strlen(param_2);
        return sVar1;
      }
    }
  }
  return 0;
}



/* ===== FUN_00020cdc @ 00020cdc size=636 ===== */

undefined4 FUN_00020cdc(int param_1,byte *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  int local_18;
  byte *local_14;
  
  iVar3 = DAT_00020f58 + 0x20cfc;
  if (*(int *)(param_1 + 0x94) != 0) {
    FUN_0001e4fc(*(undefined4 *)(param_1 + 0x94));
    *(undefined4 *)(param_1 + 0x94) = 0;
  }
  uVar1 = FUN_0001e4b8(4);
  *(undefined4 *)(param_1 + 0x94) = uVar1;
  local_14 = param_2;
  if (*(int *)(param_1 + 0x94) == 0) {
    printf((char *)(DAT_00020f68 + 0x20d98),DAT_00020f64 + 0x20d90,0x2ab,DAT_00020f60 + 0x20d84,
           DAT_00020f5c + 0x20d78);
    uVar1 = 0xffffffff;
  }
  else {
    for (; ((*(ushort *)(**(int **)(iVar3 + DAT_00020f6c) + (uint)*local_14 * 2) & 0x80) != 0 &&
           (*local_14 != 0x3a)); local_14 = local_14 + 1) {
    }
    if (*local_14 == 0x3a) {
      do {
        local_14 = local_14 + 1;
      } while (*local_14 == 0x20);
      for (local_18 = 0; local_18 < 0xc; local_18 = local_18 + 1) {
        if ((*(int *)(DAT_00020f80 + local_18 * 0xc + 0x20e98) != 0) &&
           (pcVar2 = strstr((char *)local_14,*(char **)(DAT_00020f84 + local_18 * 0xc + 0x20ec4)),
           pcVar2 != (char *)0x0)) {
          **(uint **)(param_1 + 0x94) =
               **(uint **)(param_1 + 0x94) |
               1 << (*(uint *)(DAT_00020f88 + 0x20f00 + local_18 * 0xc) & 0xff);
        }
      }
      uVar1 = 0;
    }
    else {
      FUN_0001e4fc(*(undefined4 *)(param_1 + 0x94));
      *(undefined4 *)(param_1 + 0x94) = 0;
      printf((char *)(DAT_00020f7c + 0x20e48),DAT_00020f78 + 0x20e40,0x2ab,DAT_00020f74 + 0x20e34,
             DAT_00020f70 + 0x20e28,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_00020f8c @ 00020f8c size=568 ===== */

char * FUN_00020f8c(int param_1,char *param_2,size_t param_3)

{
  bool bVar1;
  size_t sVar2;
  size_t local_2c;
  int local_10;
  char *local_c;
  
  if (*(int *)(param_1 + 0x94) == 0) {
    local_c = (char *)0x0;
  }
  else {
    bVar1 = false;
    snprintf(param_2,param_3,(char *)(DAT_000211c8 + 0x20fe4),DAT_000211c4 + 0x20fdc);
    local_2c = strlen(param_2);
    local_c = param_2 + local_2c;
    local_2c = param_3 - local_2c;
    if ((int)local_2c < 2) {
      local_c = local_c + -(int)param_2;
    }
    else {
      for (local_10 = 0; local_10 < 0xc; local_10 = local_10 + 1) {
        if ((**(uint **)(param_1 + 0x94) &
            1 << (*(uint *)(DAT_000211cc + 0x21058 + local_10 * 0xc) & 0xff)) != 0) {
          if (bVar1) {
            snprintf(local_c,local_2c,(char *)(DAT_000211d4 + 0x210b8),
                     *(undefined4 *)(DAT_000211d0 + local_10 * 0xc + 0x210a0));
          }
          else {
            snprintf(local_c,local_2c,(char *)(DAT_000211dc + 0x210f4),
                     *(undefined4 *)(DAT_000211d8 + local_10 * 0xc + 0x210dc));
            bVar1 = true;
          }
          sVar2 = strlen(local_c);
          local_c = local_c + sVar2;
          local_2c = local_2c - sVar2;
          if ((int)local_2c < 2) {
            return local_c + -(int)param_2;
          }
        }
      }
      snprintf(local_c,local_2c,(char *)(DAT_000211e0 + 0x2117c));
      sVar2 = strlen(local_c);
      local_c = local_c + (sVar2 - (int)param_2);
    }
  }
  return local_c;
}



/* ===== FUN_000211e4 @ 000211e4 size=636 ===== */

undefined4 FUN_000211e4(int param_1,byte *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  int local_18;
  byte *local_14;
  
  iVar3 = DAT_00021460 + 0x21204;
  if (*(int *)(param_1 + 0x88) != 0) {
    FUN_0001e4fc(*(undefined4 *)(param_1 + 0x88));
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  uVar1 = FUN_0001e4b8(4);
  *(undefined4 *)(param_1 + 0x88) = uVar1;
  local_14 = param_2;
  if (*(int *)(param_1 + 0x88) == 0) {
    printf((char *)(DAT_00021470 + 0x212a0),DAT_0002146c + 0x21298,0x2ac,DAT_00021468 + 0x2128c,
           DAT_00021464 + 0x21280);
    uVar1 = 0xffffffff;
  }
  else {
    for (; ((*(ushort *)(**(int **)(iVar3 + DAT_00021474) + (uint)*local_14 * 2) & 0x80) != 0 &&
           (*local_14 != 0x3a)); local_14 = local_14 + 1) {
    }
    if (*local_14 == 0x3a) {
      do {
        local_14 = local_14 + 1;
      } while (*local_14 == 0x20);
      for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
        if ((*(int *)(DAT_00021488 + local_18 * 0xc + 0x213a0) != 0) &&
           (pcVar2 = strstr((char *)local_14,*(char **)(DAT_0002148c + local_18 * 0xc + 0x213cc)),
           pcVar2 != (char *)0x0)) {
          **(uint **)(param_1 + 0x88) =
               **(uint **)(param_1 + 0x88) |
               1 << (*(uint *)(DAT_00021490 + 0x21408 + local_18 * 0xc) & 0xff);
        }
      }
      uVar1 = 0;
    }
    else {
      FUN_0001e4fc(*(undefined4 *)(param_1 + 0x88));
      *(undefined4 *)(param_1 + 0x88) = 0;
      printf((char *)(DAT_00021484 + 0x21350),DAT_00021480 + 0x21348,0x2ac,DAT_0002147c + 0x2133c,
             DAT_00021478 + 0x21330,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_00021494 @ 00021494 size=568 ===== */

char * FUN_00021494(int param_1,char *param_2,size_t param_3)

{
  bool bVar1;
  size_t sVar2;
  size_t local_2c;
  int local_10;
  char *local_c;
  
  if (*(int *)(param_1 + 0x88) == 0) {
    local_c = (char *)0x0;
  }
  else {
    bVar1 = false;
    snprintf(param_2,param_3,(char *)(DAT_000216d0 + 0x214ec),DAT_000216cc + 0x214e4);
    local_2c = strlen(param_2);
    local_c = param_2 + local_2c;
    local_2c = param_3 - local_2c;
    if ((int)local_2c < 2) {
      local_c = local_c + -(int)param_2;
    }
    else {
      for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
        if ((**(uint **)(param_1 + 0x88) &
            1 << (*(uint *)(DAT_000216d4 + 0x21560 + local_10 * 0xc) & 0xff)) != 0) {
          if (bVar1) {
            snprintf(local_c,local_2c,(char *)(DAT_000216dc + 0x215c0),
                     *(undefined4 *)(DAT_000216d8 + local_10 * 0xc + 0x215a8));
          }
          else {
            snprintf(local_c,local_2c,(char *)(DAT_000216e4 + 0x215fc),
                     *(undefined4 *)(DAT_000216e0 + local_10 * 0xc + 0x215e4));
            bVar1 = true;
          }
          sVar2 = strlen(local_c);
          local_c = local_c + sVar2;
          local_2c = local_2c - sVar2;
          if ((int)local_2c < 2) {
            return local_c + -(int)param_2;
          }
        }
      }
      snprintf(local_c,local_2c,(char *)(DAT_000216e8 + 0x21684));
      sVar2 = strlen(local_c);
      local_c = local_c + (sVar2 - (int)param_2);
    }
  }
  return local_c;
}



/* ===== FUN_000216ec @ 000216ec size=192 ===== */

undefined4 FUN_000216ec(char *param_1)

{
  int iVar1;
  int iVar2;
  int local_c;
  
  iVar2 = DAT_000217ac + 0x21708;
  local_c = 0;
  while( true ) {
    if (0xc < local_c) {
      return 0;
    }
    iVar1 = strncmp(*(char **)(iVar2 + local_c * 0xc + 4),param_1,*(size_t *)(iVar2 + local_c * 0xc)
                   );
    if (iVar1 == 0) break;
    local_c = local_c + 1;
  }
  return *(undefined4 *)(iVar2 + local_c * 0xc + 8);
}



/* ===== FUN_000217b0 @ 000217b0 size=276 ===== */

char * FUN_000217b0(char *param_1,void *param_2,int param_3)

{
  size_t local_1c;
  char *local_c;
  
  for (local_c = param_1; ((*local_c != '\0' && (*local_c != '\r')) && (*local_c != '\n'));
      local_c = local_c + 1) {
  }
  if ((*local_c == '\r') && (local_c[1] == '\n')) {
    if ((param_2 != (void *)0x0) && (0 < param_3)) {
      local_1c = param_3 - 1;
      if ((int)local_c - (int)param_1 < (int)local_1c) {
        local_1c = (int)local_c - (int)param_1;
      }
      memcpy(param_2,param_1,local_1c);
      *(undefined1 *)((int)param_2 + local_1c) = 0;
    }
    local_c = local_c + 2;
  }
  else {
    local_c = (char *)0x0;
  }
  return local_c;
}



/* ===== FUN_000218c4 @ 000218c4 size=60 ===== */

undefined4 FUN_000218c4(void *param_1)

{
  if (param_1 != (void *)0x0) {
    memset(param_1,0,0xac);
  }
  return 0;
}



/* ===== FUN_00021900 @ 00021900 size=428 ===== */

void FUN_00021900(void *param_1)

{
  if (*(int *)((int)param_1 + 0x74) != 0) {
    FUN_0001e4fc(*(undefined4 *)((int)param_1 + 0x74));
  }
  if (*(int *)((int)param_1 + 0x78) != 0) {
    FUN_0001e4fc(*(undefined4 *)((int)param_1 + 0x78));
  }
  if (*(int *)((int)param_1 + 0x7c) != 0) {
    FUN_0001e4fc(*(undefined4 *)((int)param_1 + 0x7c));
  }
  if (*(int *)((int)param_1 + 0x80) != 0) {
    FUN_0001e4fc(*(undefined4 *)((int)param_1 + 0x80));
  }
  if (*(int *)((int)param_1 + 0x84) != 0) {
    FUN_0001e4fc(*(undefined4 *)((int)param_1 + 0x84));
  }
  if (*(int *)((int)param_1 + 0x88) != 0) {
    FUN_0001e4fc(*(undefined4 *)((int)param_1 + 0x88));
  }
  if (*(int *)((int)param_1 + 0x90) != 0) {
    FUN_0001e4fc(*(undefined4 *)((int)param_1 + 0x90));
  }
  if (*(int *)((int)param_1 + 0x94) != 0) {
    FUN_0001e4fc(*(undefined4 *)((int)param_1 + 0x94));
  }
  if (*(int *)((int)param_1 + 0x9c) != 0) {
    FUN_0001e4fc(*(undefined4 *)((int)param_1 + 0x9c));
  }
  if (*(int *)((int)param_1 + 0xa4) != 0) {
    FUN_0001e4fc(*(undefined4 *)((int)param_1 + 0xa4));
  }
  if (*(int *)((int)param_1 + 0xa0) != 0) {
    FUN_0001e4fc(*(undefined4 *)((int)param_1 + 0xa0));
  }
  if (*(int *)((int)param_1 + 0xa8) != 0) {
    FUN_0001e4fc(*(undefined4 *)((int)param_1 + 0xa8));
  }
  memset(param_1,0,0xac);
  return;
}



/* ===== FUN_00021aac @ 00021aac size=52 ===== */

int FUN_00021aac(void)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_00021ae0 + 0x21ac0);
  *(int *)(DAT_00021ae4 + 0x21ad0) = iVar1 + 1;
  return iVar1;
}



/* ===== FUN_00021ae8 @ 00021ae8 size=516 ===== */

char * FUN_00021ae8(char *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  int local_18;
  char *local_14;
  char *local_10;
  char *local_c;
  
  local_14 = (char *)0x0;
  local_18 = 0;
  local_10 = param_1;
  local_c = strstr(param_1,(char *)(DAT_00021cec + 0x21b20));
  if ((local_c == (char *)0x0) || (param_2 <= (int)(local_c + (1 - (int)local_10)))) {
    if (param_2 < 0x101) {
      pcVar2 = (char *)0x0;
    }
    else {
      pcVar2 = (char *)0xffffffff;
    }
  }
  else {
    local_14 = strstr(local_10,(char *)(DAT_00021cf0 + 0x21b7c));
    if ((local_14 == (char *)0x0) || (param_2 <= (int)(local_14 + (3 - (int)local_10)))) {
      if (param_2 < 0x401) {
        pcVar2 = (char *)0x0;
      }
      else {
        pcVar2 = (char *)0xffffffff;
      }
    }
    else {
      local_14 = local_14 + (4 - (int)local_10);
      local_c = local_10;
      do {
        local_c = (char *)FUN_000217b0(local_c,0,0);
        if ((local_c == (char *)0x0) ||
           (iVar1 = strncmp(local_c,(char *)(DAT_00021cf4 + 0x21bfc),2), iVar1 == 0)) {
          if (param_2 < (int)(local_14 + local_18)) {
            return (char *)0x0;
          }
          return local_14 + local_18;
        }
        iVar1 = strncmp(local_c,(char *)(DAT_00021cf8 + 0x21c20),0xe);
      } while ((iVar1 != 0) ||
              (iVar1 = sscanf(local_c,(char *)(DAT_00021cfc + 0x21c48),&local_18), iVar1 == 1));
      printf((char *)(DAT_00021d08 + 0x21c84),DAT_00021d04 + 0x21c7c,0x33d,DAT_00021d00 + 0x21c70,
             local_c);
      pcVar2 = (char *)0xffffffff;
    }
  }
  return pcVar2;
}



/* ===== FUN_00021d0c @ 00021d0c size=896 ===== */

int FUN_00021d0c(undefined4 *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  char local_11c [256];
  code *local_1c;
  uint16_t local_16;
  char *local_14;
  int local_10;
  char *local_c;
  
  local_14 = param_2;
  local_c = param_2;
  memset(param_1,0,0xac);
  if (*local_14 == '$') {
    local_16 = *(uint16_t *)(local_c + 2);
    local_16 = ntohs(local_16);
    if ((int)(local_16 + 3) < param_3) {
      *param_1 = 2;
      *(char *)(param_1 + 1) = local_c[1];
      *(uint16_t *)((int)param_1 + 6) = local_16;
      uVar1 = FUN_0001e52c(param_2 + 4,local_16);
      param_1[0x2a] = uVar1;
      iVar2 = local_16 + 4;
    }
    else {
      iVar2 = 0;
    }
  }
  else {
    pcVar3 = local_14;
    printf((char *)(DAT_00022094 + 0x21e10),DAT_00022090 + 0x21e08,0x361,DAT_0002208c + 0x21dfc,
           local_14);
    iVar2 = FUN_00021ae8(param_2,param_3);
    if (0 < iVar2) {
      local_10 = iVar2;
      local_c = (char *)FUN_000217b0(local_c,local_11c,0x100);
      if (local_c == (char *)0x0) {
        iVar2 = -1;
      }
      else {
        local_10 = FUN_0001ec68(param_1,local_11c);
        if (local_10 < 0) {
          iVar2 = -1;
        }
        else {
          do {
            while( true ) {
              local_c = (char *)FUN_000217b0(local_c,local_11c,0x100);
              if ((local_c == (char *)0x0) || (local_11c[0] == '\0')) goto LAB_00021f64;
              local_1c = (code *)FUN_000216ec(local_11c);
              if (local_1c != (code *)0x0) break;
              pcVar3 = local_11c;
              printf((char *)(DAT_000220a0 + 0x21ee4),DAT_0002209c + 0x21edc,0x378,
                     DAT_00022098 + 0x21ed0,pcVar3);
            }
            local_10 = (*local_1c)(param_1,local_11c);
          } while (-1 < local_10);
          pcVar3 = local_11c;
          printf((char *)(DAT_000220ac + 0x21f34),DAT_000220a8 + 0x21f2c,0x37e,
                 DAT_000220a4 + 0x21f20,pcVar3);
LAB_00021f64:
          if ((local_c == (char *)0x0) || (local_11c[0] != '\0')) {
            FUN_00021900(param_1);
            iVar2 = -1;
          }
          else {
            if (param_1[0x28] != 0) {
              uVar1 = FUN_0001e52c(local_c,*(undefined4 *)param_1[0x28]);
              param_1[0x2a] = uVar1;
              if (param_1[0x2a] == 0) {
                printf((char *)(DAT_000220b8 + 0x21ff4),DAT_000220b4 + 0x21fec,0x38b,
                       DAT_000220b0 + 0x21fe0,pcVar3);
                FUN_00021900(param_1);
                return -1;
              }
            }
            local_10 = (int)local_c - (int)local_14;
            if (param_1[0x28] != 0) {
              local_10 = *(int *)param_1[0x28] + local_10;
            }
            if (local_10 != iVar2) {
              printf((char *)(DAT_000220c4 + 0x2207c),DAT_000220c0 + 0x22074,0x396,
                     DAT_000220bc + 0x22068,iVar2,local_10);
            }
          }
        }
      }
    }
  }
  return iVar2;
}



/* ===== FUN_000220c8 @ 000220c8 size=2104 ===== */

int FUN_000220c8(int *param_1,undefined4 *param_2,int param_3)

{
  uint16_t __hostshort;
  uint16_t uVar1;
  int iVar2;
  size_t sVar3;
  size_t local_34;
  undefined4 local_24;
  size_t local_18;
  char *local_14;
  
  if (*param_1 == 2) {
    __hostshort = *(uint16_t *)((int)param_1 + 6);
    iVar2 = param_1[1];
    uVar1 = htons(__hostshort);
    local_24 = CONCAT22(uVar1,CONCAT11((char)iVar2,0x24));
    local_34 = param_3;
    if ((int)(__hostshort + 4) < param_3) {
      local_34 = __hostshort + 4;
    }
    *param_2 = local_24;
    if (param_1[0x2a] != 0) {
      memcpy(param_2 + 1,(void *)param_1[0x2a],local_34 - 4);
    }
  }
  else {
    iVar2 = FUN_0001efb8(param_1,param_2,param_3);
    if (iVar2 < 0) {
      local_34 = -1;
    }
    else {
      local_14 = (char *)((int)param_2 + iVar2);
      local_34 = param_3 - iVar2;
      if ((int)local_34 < 2) {
        local_34 = (int)local_14 - (int)param_2;
      }
      else {
        if (param_1[0x1d] != 0) {
          iVar2 = FUN_0001fd14(param_1,local_14,local_34);
          if (iVar2 < 0) {
            return -1;
          }
          local_14 = local_14 + iVar2;
          local_34 = local_34 - iVar2;
          if ((int)local_34 < 2) {
            return (int)local_14 - (int)param_2;
          }
        }
        if (param_1[0x1e] != 0) {
          iVar2 = FUN_000208c4(param_1,local_14,local_34);
          if (iVar2 < 0) {
            return -1;
          }
          local_14 = local_14 + iVar2;
          local_34 = local_34 - iVar2;
          if ((int)local_34 < 2) {
            return (int)local_14 - (int)param_2;
          }
        }
        if (param_1[0x1f] != 0) {
          iVar2 = FUN_0001fedc(param_1,local_14,local_34);
          if (iVar2 < 0) {
            return -1;
          }
          local_14 = local_14 + iVar2;
          local_34 = local_34 - iVar2;
          if ((int)local_34 < 2) {
            return (int)local_14 - (int)param_2;
          }
        }
        if (param_1[0x20] != 0) {
          iVar2 = FUN_0001f5f0(param_1,local_14,local_34);
          if (iVar2 < 0) {
            return -1;
          }
          local_14 = local_14 + iVar2;
          local_34 = local_34 - iVar2;
          if ((int)local_34 < 2) {
            return (int)local_14 - (int)param_2;
          }
        }
        if (param_1[0x21] != 0) {
          iVar2 = FUN_0001fae4(param_1,local_14,local_34);
          if (iVar2 < 0) {
            return -1;
          }
          local_14 = local_14 + iVar2;
          local_34 = local_34 - iVar2;
          if ((int)local_34 < 2) {
            return (int)local_14 - (int)param_2;
          }
        }
        if (param_1[0x22] != 0) {
          iVar2 = FUN_00021494(param_1,local_14,local_34);
          if (iVar2 < 0) {
            return -1;
          }
          local_14 = local_14 + iVar2;
          local_34 = local_34 - iVar2;
          if ((int)local_34 < 2) {
            return (int)local_14 - (int)param_2;
          }
        }
        if (param_1[0x23] != 0) {
          iVar2 = FUN_0001fb38(param_1,local_14,local_34);
          if (iVar2 < 0) {
            return -1;
          }
          local_14 = local_14 + iVar2;
          local_34 = local_34 - iVar2;
          if ((int)local_34 < 2) {
            return (int)local_14 - (int)param_2;
          }
        }
        if (param_1[0x24] != 0) {
          iVar2 = FUN_00020610(param_1,local_14,local_34);
          if (iVar2 < 0) {
            return -1;
          }
          local_14 = local_14 + iVar2;
          local_34 = local_34 - iVar2;
          if ((int)local_34 < 2) {
            return (int)local_14 - (int)param_2;
          }
        }
        if (param_1[0x25] != 0) {
          iVar2 = FUN_00020f8c(param_1,local_14,local_34);
          if (iVar2 < 0) {
            return -1;
          }
          local_14 = local_14 + iVar2;
          local_34 = local_34 - iVar2;
          if ((int)local_34 < 2) {
            return (int)local_14 - (int)param_2;
          }
        }
        if (param_1[0x26] != 0) {
          iVar2 = FUN_0001fb8c(param_1,local_14,local_34);
          if (iVar2 < 0) {
            return -1;
          }
          local_14 = local_14 + iVar2;
          local_34 = local_34 - iVar2;
          if ((int)local_34 < 2) {
            return (int)local_14 - (int)param_2;
          }
        }
        if (param_1[0x27] != 0) {
          iVar2 = FUN_0002035c(param_1,local_14,local_34);
          if (iVar2 < 0) {
            return -1;
          }
          local_14 = local_14 + iVar2;
          local_34 = local_34 - iVar2;
          if ((int)local_34 < 2) {
            return (int)local_14 - (int)param_2;
          }
        }
        if (param_1[0x29] != 0) {
          iVar2 = FUN_00020be8(param_1,local_14,local_34);
          if (iVar2 < 0) {
            return -1;
          }
          local_14 = local_14 + iVar2;
          local_34 = local_34 - iVar2;
          if ((int)local_34 < 2) {
            return (int)local_14 - (int)param_2;
          }
        }
        if (param_1[0x28] != 0) {
          iVar2 = FUN_000200a4(param_1,local_14,local_34);
          if (iVar2 < 0) {
            return -1;
          }
          local_14 = local_14 + iVar2;
          local_34 = local_34 - iVar2;
          if ((int)local_34 < 2) {
            return (int)local_14 - (int)param_2;
          }
        }
        snprintf(local_14,local_34,(char *)(DAT_00022900 + 0x227f8));
        sVar3 = strlen(local_14);
        if ((int)sVar3 < 0) {
          local_34 = -1;
        }
        else {
          local_14 = local_14 + sVar3;
          local_34 = local_34 - sVar3;
          if ((int)local_34 < 2) {
            local_34 = (int)local_14 - (int)param_2;
          }
          else {
            if (param_1[0x28] != 0) {
              local_18 = *(size_t *)param_1[0x28];
              if ((int)local_34 < (int)*(size_t *)param_1[0x28]) {
                local_18 = local_34;
              }
              memcpy(local_14,(void *)param_1[0x2a],local_18);
              local_14 = local_14 + local_18;
            }
            printf((char *)(DAT_0002290c + 0x228e8),DAT_00022908 + 0x228e0,0x3e6,
                   DAT_00022904 + 0x228d4,param_2);
            local_34 = (int)local_14 - (int)param_2;
          }
        }
      }
    }
  }
  return local_34;
}



/* ===== FUN_00022910 @ 00022910 size=140 ===== */

undefined4 FUN_00022910(undefined4 *param_1,undefined4 param_2,char *param_3,char *param_4)

{
  *param_1 = 0;
  param_1[1] = param_2;
  param_1[2] = 0;
  strncpy((char *)((int)param_1 + 0xe),param_3,0x1f);
  strncpy((char *)((int)param_1 + 0x2e),param_4,0x3f);
  param_1[0x1c] = 0;
  return 0;
}



/* ===== FUN_0002299c @ 0002299c size=76 ===== */

undefined4 FUN_0002299c(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = 1;
  param_1[1] = 0;
  param_1[2] = param_2;
  return 0;
}



/* ===== FUN_000229e8 @ 000229e8 size=96 ===== */

undefined4 FUN_000229e8(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x74) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = **(undefined4 **)(param_1 + 0x74);
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_00022a48 @ 00022a48 size=112 ===== */

undefined4 FUN_00022a48(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x74) == 0) {
    uVar1 = FUN_0001e4b8(4);
    *(undefined4 *)(param_1 + 0x74) = uVar1;
  }
  if (*(int *)(param_1 + 0x74) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    **(undefined4 **)(param_1 + 0x74) = param_2;
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_00022ab8 @ 00022ab8 size=96 ===== */

undefined4 FUN_00022ab8(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x7c) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = **(undefined4 **)(param_1 + 0x7c);
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_00022b18 @ 00022b18 size=112 ===== */

undefined4 FUN_00022b18(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x7c) == 0) {
    uVar1 = FUN_0001e4b8(4);
    *(undefined4 *)(param_1 + 0x7c) = uVar1;
  }
  if (*(int *)(param_1 + 0x7c) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    **(undefined4 **)(param_1 + 0x7c) = param_2;
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_00022b88 @ 00022b88 size=108 ===== */

undefined4 FUN_00022b88(int param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x78) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    if (param_2 != (char *)0x0) {
      strncpy(param_2,*(char **)(param_1 + 0x78),param_3 - 1);
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_00022bf4 @ 00022bf4 size=288 ===== */

undefined4 FUN_00022bf4(int param_1,char *param_2)

{
  undefined4 uVar1;
  char *__src;
  char *__dest;
  int iVar2;
  time_t local_18;
  byte *local_14;
  
  iVar2 = DAT_00022d14 + 0x22c14;
  if (*(int *)(param_1 + 0x78) == 0) {
    uVar1 = FUN_0001e4b8(0x20);
    *(undefined4 *)(param_1 + 0x78) = uVar1;
  }
  if (*(int *)(param_1 + 0x78) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    if (param_2 == (char *)0x0) {
      local_18 = time((time_t *)0x0);
      __dest = *(char **)(param_1 + 0x78);
      __src = ctime(&local_18);
      strncpy(__dest,__src,0x1f);
      local_14 = *(byte **)(param_1 + 0x78);
      while ((*(ushort *)(**(int **)(iVar2 + DAT_00022d18) + (uint)*local_14 * 2) & 0x40) != 0) {
        local_14 = local_14 + 1;
      }
      *local_14 = 0;
    }
    else {
      strncpy(*(char **)(param_1 + 0x78),param_2,0x1f);
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_00022d1c @ 00022d1c size=284 ===== */

undefined4 FUN_00022d1c(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x80) == 0) {
    uVar1 = FUN_0001e4b8(0x14);
    *(undefined4 *)(param_1 + 0x80) = uVar1;
  }
  if (*(int *)(param_1 + 0x80) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    **(undefined4 **)(param_1 + 0x80) = 0;
    *(uint *)(*(int *)(param_1 + 0x80) + 4) = *(uint *)(*(int *)(param_1 + 0x80) + 4) | 3;
    *(undefined4 *)(*(int *)(param_1 + 0x80) + 8) = param_2;
    if (-1 < param_3) {
      *(uint *)(*(int *)(param_1 + 0x80) + 4) = *(uint *)(*(int *)(param_1 + 0x80) + 4) | 8;
      *(short *)(*(int *)(param_1 + 0x80) + 0xc) = (short)param_3;
    }
    if (-1 < param_4) {
      *(uint *)(*(int *)(param_1 + 0x80) + 4) = *(uint *)(*(int *)(param_1 + 0x80) + 4) | 0x10;
      *(short *)(*(int *)(param_1 + 0x80) + 0xe) = (short)param_4;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_00022e38 @ 00022e38 size=220 ===== */

undefined4 FUN_00022e38(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x80) == 0) {
    uVar1 = FUN_0001e4b8(0x14);
    *(undefined4 *)(param_1 + 0x80) = uVar1;
  }
  if (*(int *)(param_1 + 0x80) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    **(undefined4 **)(param_1 + 0x80) = 1;
    *(uint *)(*(int *)(param_1 + 0x80) + 4) = *(uint *)(*(int *)(param_1 + 0x80) + 4) | 1;
    *(undefined4 *)(*(int *)(param_1 + 0x80) + 8) = param_2;
    if (-1 < param_3) {
      *(uint *)(*(int *)(param_1 + 0x80) + 4) = *(uint *)(*(int *)(param_1 + 0x80) + 4) | 0x20;
      *(char *)(*(int *)(param_1 + 0x80) + 0x10) = (char)param_3;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_00022f14 @ 00022f14 size=96 ===== */

undefined4 FUN_00022f14(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x88) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = **(undefined4 **)(param_1 + 0x88);
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_00022f74 @ 00022f74 size=112 ===== */

undefined4 FUN_00022f74(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x88) == 0) {
    uVar1 = FUN_0001e4b8(4);
    *(undefined4 *)(param_1 + 0x88) = uVar1;
  }
  if (*(int *)(param_1 + 0x88) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    **(undefined4 **)(param_1 + 0x88) = param_2;
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_00022fe4 @ 00022fe4 size=108 ===== */

undefined4 FUN_00022fe4(int param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x90) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    if (param_2 != (char *)0x0) {
      strncpy(param_2,*(char **)(param_1 + 0x90),param_3 - 1);
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_00023050 @ 00023050 size=168 ===== */

undefined4 FUN_00023050(int param_1,char *param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x90) == 0) {
    uVar1 = FUN_0001e4b8(0x40);
    *(undefined4 *)(param_1 + 0x90) = uVar1;
  }
  if (*(int *)(param_1 + 0x90) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    if (param_2 == (char *)0x0) {
      strncpy(*(char **)(param_1 + 0x90),(char *)(DAT_000230f8 + 0x230e4),0x3f);
    }
    else {
      strncpy(*(char **)(param_1 + 0x90),param_2,0x3f);
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_0002315c @ 0002315c size=112 ===== */

undefined4 FUN_0002315c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x94) == 0) {
    uVar1 = FUN_0001e4b8(4);
    *(undefined4 *)(param_1 + 0x94) = uVar1;
  }
  if (*(int *)(param_1 + 0x94) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    **(undefined4 **)(param_1 + 0x94) = param_2;
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_000231cc @ 000231cc size=108 ===== */

undefined4 FUN_000231cc(int param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    if (param_2 != (char *)0x0) {
      strncpy(param_2,*(char **)(param_1 + 0x9c),param_3 - 1);
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_00023238 @ 00023238 size=168 ===== */

undefined4 FUN_00023238(int param_1,char *param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar1 = FUN_0001e4b8(0x40);
    *(undefined4 *)(param_1 + 0x9c) = uVar1;
  }
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    if (param_2 == (char *)0x0) {
      strncpy(*(char **)(param_1 + 0x9c),(char *)(DAT_000232e0 + 0x232cc),0x3f);
    }
    else {
      strncpy(*(char **)(param_1 + 0x9c),param_2,0x3f);
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_00023348 @ 00023348 size=112 ===== */

undefined4 FUN_00023348(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xa4) == 0) {
    uVar1 = FUN_0001e4b8(4);
    *(undefined4 *)(param_1 + 0xa4) = uVar1;
  }
  if (*(int *)(param_1 + 0xa4) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    **(undefined4 **)(param_1 + 0xa4) = param_2;
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_0002341c @ 0002341c size=112 ===== */

undefined4 FUN_0002341c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xa0) == 0) {
    uVar1 = FUN_0001e4b8(4);
    *(undefined4 *)(param_1 + 0xa0) = uVar1;
  }
  if (*(int *)(param_1 + 0xa0) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    **(undefined4 **)(param_1 + 0xa0) = param_2;
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_0002348c @ 0002348c size=292 ===== */

int * FUN_0002348c(int param_1,int param_2)

{
  int *piVar1;
  
  if ((param_1 < 1) || (param_2 < 1)) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = calloc(1,param_2 * param_1 + param_2 * 4 + 0x18);
    if (piVar1 == (int *)0x0) {
      printf((char *)(DAT_000235b8 + 0x23520),DAT_000235b4 + 0x23518,0x16,DAT_000235b0 + 0x2350c);
      piVar1 = (int *)0x0;
    }
    else {
      printf((char *)(DAT_000235bc + 0x23558),param_2 * param_1 + param_2 * 4 + 0x18);
      *piVar1 = param_1;
      piVar1[1] = param_2;
      piVar1[4] = (int)(piVar1 + 6);
      piVar1[5] = (int)(piVar1 + param_2 + 6);
    }
  }
  return piVar1;
}



/* ===== FUN_000235c0 @ 000235c0 size=176 ===== */

undefined4 FUN_000235c0(int *param_1,int param_2,int *param_3,int *param_4)

{
  undefined4 uVar1;
  
  if ((param_1 == (int *)0x0) || (param_1[1] <= param_2)) {
    uVar1 = 0xffffffff;
  }
  else {
    if (param_3 != (int *)0x0) {
      *param_3 = param_1[5] + param_2 * *param_1;
    }
    if (param_4 != (int *)0x0) {
      *param_4 = param_1[4] + param_2 * 4;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_00023670 @ 00023670 size=172 ===== */

undefined4 FUN_00023670(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else if (((param_2 < *(int *)(param_1 + 8)) || (*(int *)(param_1 + 0xc) <= param_2)) &&
          ((*(int *)(param_1 + 8) <= *(int *)(param_1 + 0xc) ||
           ((param_2 < *(int *)(param_1 + 8) && (*(int *)(param_1 + 0xc) <= param_2)))))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* ===== FUN_0002371c @ 0002371c size=92 ===== */

undefined4 FUN_0002371c(int param_1,int param_2)

{
  undefined4 extraout_r1;
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    FUN_00025c0c(param_2 + 1,*(undefined4 *)(param_1 + 4));
    uVar1 = extraout_r1;
  }
  return uVar1;
}



/* ===== FUN_00023778 @ 00023778 size=60 ===== */

undefined4 FUN_00023778(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 8);
  }
  return uVar1;
}



/* ===== FUN_000237b4 @ 000237b4 size=60 ===== */

undefined4 FUN_000237b4(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0xc);
  }
  return uVar1;
}



/* ===== FUN_000237f0 @ 000237f0 size=168 ===== */

undefined4 FUN_000237f0(int param_1)

{
  int extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    FUN_00025c0c(*(int *)(param_1 + 0xc) + 1,*(undefined4 *)(param_1 + 4));
    if (extraout_r1 == *(int *)(param_1 + 8)) {
      uVar1 = 0xffffffff;
    }
    else {
      FUN_00025c0c(*(int *)(param_1 + 0xc) + 1,*(undefined4 *)(param_1 + 4));
      *(undefined4 *)(param_1 + 0xc) = extraout_r1_00;
      uVar1 = *(undefined4 *)(param_1 + 0xc);
    }
  }
  return uVar1;
}



/* ===== FUN_00023898 @ 00023898 size=136 ===== */

undefined4 FUN_00023898(int param_1)

{
  undefined4 extraout_r1;
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else if (*(int *)(param_1 + 8) == *(int *)(param_1 + 0xc)) {
    uVar1 = 0xffffffff;
  }
  else {
    FUN_00025c0c(*(int *)(param_1 + 8) + 1,*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 8) = extraout_r1;
    uVar1 = *(undefined4 *)(param_1 + 8);
  }
  return uVar1;
}



/* ===== FUN_00023920 @ 00023920 size=48 ===== */

void FUN_00023920(void *param_1)

{
  if (param_1 != (void *)0x0) {
    free(param_1);
  }
  return;
}



/* ===== FUN_00023950 @ 00023950 size=636 ===== */

undefined1 * FUN_00023950(undefined1 *param_1,int param_2,byte *param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  undefined1 *puVar3;
  uint uVar4;
  byte *local_2c;
  uint local_18;
  uint local_14;
  int local_10;
  undefined1 *local_c;
  
  local_14 = 0;
  if ((param_4 < 0x3fffffff) &&
     (local_2c = param_3, local_18 = param_4, local_c = param_1,
     ((int)(param_4 + 2) / 3) * 4 < param_2)) {
    while (3 < (int)local_18) {
      bVar1 = *local_2c;
      uVar4 = (uint)bVar1 << 0x18 | (uint)local_2c[1] << 0x10;
      bVar2 = local_2c[2];
      local_2c = local_2c + 3;
      local_18 = local_18 - 3;
      *local_c = *(undefined1 *)(DAT_00023bcc + 0x23a58 + (uint)(bVar1 >> 2));
      local_c[1] = *(undefined1 *)(DAT_00023bd0 + 0x23a80 + ((uVar4 & 0x3f00000) >> 0x14));
      puVar3 = local_c + 3;
      local_c[2] = *(undefined1 *)
                    (DAT_00023bd4 + 0x23aa8 + ((uVar4 | (uint)bVar2 << 8) >> 0xe & 0x3f));
      local_c = local_c + 4;
      *puVar3 = *(undefined1 *)(DAT_00023bd8 + 0x23ad0 + (((uint)bVar2 << 8 & 0x3f00) >> 8));
    }
    local_10 = 0;
    for (; local_18 != 0; local_18 = local_18 - 1) {
      local_10 = local_10 * 0x100 + (uint)*local_2c;
      local_14 = local_14 + 8;
      local_2c = local_2c + 1;
    }
    for (; 0 < (int)local_14; local_14 = local_14 - 6) {
      *local_c = *(undefined1 *)
                  (DAT_00023bdc + 0x23b60 + ((uint)(local_10 << 6) >> (local_14 & 0xff) & 0x3f));
      local_c = local_c + 1;
    }
    while (((int)local_c - (int)param_1 & 3U) != 0) {
      *local_c = 0x3d;
      local_c = local_c + 1;
    }
    *local_c = 0;
  }
  else {
    param_1 = (undefined1 *)0x0;
  }
  return param_1;
}



/* ===== FUN_00023be0 @ 00023be0 size=476 ===== */

char * FUN_00023be0(char *param_1,int param_2,int *param_3)

{
  int local_18;
  char *local_14;
  char *local_c;
  
  local_c = (char *)0x0;
  local_18 = param_2;
  local_14 = param_1;
  while( true ) {
    while( true ) {
      while( true ) {
        if (local_18 < 3) {
          if (local_c == (char *)0x0) {
            local_c = (char *)0x0;
          }
          else {
            *param_3 = (int)(local_14 + (local_18 - (int)local_c));
          }
          return local_c;
        }
        if (((*local_14 != '\0') || (local_14[1] != '\0')) || (local_14[2] != '\x01')) break;
        if (local_c != (char *)0x0) {
          *param_3 = (int)local_14 - (int)local_c;
          return local_c;
        }
        if (local_18 < 4) {
          return (char *)0x0;
        }
        local_c = local_14;
        local_14 = local_14 + 3;
        local_18 = local_18 + -3;
      }
      if (((3 < local_18) && (*local_14 == '\0')) &&
         ((local_14[1] == '\0' && ((local_14[2] == '\0' && (local_14[3] == '\x01')))))) break;
      local_14 = local_14 + 1;
      local_18 = local_18 + -1;
    }
    if (local_c != (char *)0x0) {
      *param_3 = (int)local_14 - (int)local_c;
      return local_c;
    }
    if (local_18 < 5) break;
    local_c = local_14;
    local_14 = local_14 + 4;
    local_18 = local_18 + -4;
  }
  return (char *)0x0;
}



/* ===== FUN_00023dbc @ 00023dbc size=588 ===== */

bool FUN_00023dbc(int param_1,int param_2,void *param_3)

{
  int iVar1;
  size_t local_20;
  byte local_19;
  int local_18;
  int local_14;
  byte *local_10;
  int local_c;
  
  local_10 = (byte *)0x0;
  local_20 = 0;
  local_18 = 0;
  local_14 = param_2;
  local_c = param_1;
  while ((3 < local_14 &&
         (((local_19 = 0, *(int *)((int)param_3 + 0x80) == 0 || (*(int *)((int)param_3 + 0x84) == 0)
           ) && (iVar1 = FUN_00023be0(local_c,local_14,&local_20), iVar1 != 0))))) {
    local_14 = local_14 - ((iVar1 - local_c) + local_20);
    local_c = iVar1 + local_20;
    if (*(char *)(iVar1 + 2) == '\0') {
      local_10 = (byte *)(iVar1 + 4);
      local_20 = local_20 - 4;
    }
    else {
      local_10 = (byte *)(iVar1 + 3);
      local_20 = local_20 - 3;
    }
    local_19 = *local_10 & 0x1f;
    if (local_19 == 7) {
      printf((char *)(DAT_00024010 + 0x23f0c),DAT_0002400c + 0x23f04,0x86,DAT_00024008 + 0x23ef8,
             local_20);
      if (0x40 < (int)local_20) {
        local_20 = 0x40;
      }
      memcpy(param_3,local_10,local_20);
      *(size_t *)((int)param_3 + 0x80) = local_20;
      local_18 = local_18 + 1;
    }
    if (local_19 == 8) {
      printf((char *)(DAT_0002401c + 0x23f84),DAT_00024018 + 0x23f7c,0x8e,DAT_00024014 + 0x23f70,
             local_20);
      if (0x40 < (int)local_20) {
        local_20 = 0x40;
      }
      memcpy((void *)((int)param_3 + 0x40),local_10,local_20);
      *(size_t *)((int)param_3 + 0x84) = local_20;
      local_18 = local_18 + 1;
    }
  }
  return 1 < local_18;
}



/* ===== FUN_00024020 @ 00024020 size=736 ===== */

bool FUN_00024020(int param_1,int param_2,void *param_3)

{
  int iVar1;
  size_t local_20;
  byte local_19;
  int local_18;
  int local_14;
  byte *local_10;
  int local_c;
  
  local_10 = (byte *)0x0;
  local_20 = 0;
  local_18 = 0;
  local_14 = param_2;
  local_c = param_1;
  while (((3 < local_14 &&
          (((local_19 = 0, *(int *)((int)param_3 + 0xc0) == 0 ||
            (*(int *)((int)param_3 + 0xc4) == 0)) || (*(int *)((int)param_3 + 200) == 0)))) &&
         (iVar1 = FUN_00023be0(local_c,local_14,&local_20), iVar1 != 0))) {
    local_14 = local_14 - ((iVar1 - local_c) + local_20);
    local_c = iVar1 + local_20;
    if (*(char *)(iVar1 + 2) == '\0') {
      local_10 = (byte *)(iVar1 + 4);
      local_20 = local_20 - 4;
    }
    else {
      local_10 = (byte *)(iVar1 + 3);
      local_20 = local_20 - 3;
    }
    local_19 = *local_10 >> 1 & 0x3f;
    if (local_19 == 0x20) {
      printf((char *)(DAT_00024308 + 0x24188),DAT_00024304 + 0x24180,0xba,DAT_00024300 + 0x24174,
             local_20);
      if (0x40 < (int)local_20) {
        local_20 = 0x40;
      }
      memcpy(param_3,local_10,local_20);
      *(size_t *)((int)param_3 + 0xc0) = local_20;
      local_18 = local_18 + 1;
    }
    if (local_19 == 0x21) {
      printf((char *)(DAT_00024314 + 0x24200),DAT_00024310 + 0x241f8,0xc2,DAT_0002430c + 0x241ec,
             local_20);
      if (0x40 < (int)local_20) {
        local_20 = 0x40;
      }
      memcpy((void *)((int)param_3 + 0x40),local_10,local_20);
      *(size_t *)((int)param_3 + 0xc4) = local_20;
      local_18 = local_18 + 1;
    }
    if (local_19 == 0x22) {
      printf((char *)(DAT_00024320 + 0x2427c),DAT_0002431c + 0x24274,0xca,DAT_00024318 + 0x24268,
             local_20);
      if (0x40 < (int)local_20) {
        local_20 = 0x40;
      }
      memcpy((void *)((int)param_3 + 0x80),local_10,local_20);
      *(size_t *)((int)param_3 + 200) = local_20;
      local_18 = local_18 + 1;
    }
  }
  return 2 < local_18;
}



/* ===== FUN_00024324 @ 00024324 size=236 ===== */

undefined4 FUN_00024324(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 != 4) {
    printf((char *)(DAT_00024418 + 0x24368),DAT_00024414 + 0x24360,0xdb,DAT_00024410 + 0x24354);
    return 0xffffffff;
  }
  iVar1 = *param_1;
  if (iVar1 == 24000) {
code_r0x000243f4:
    *param_3 = iVar1;
    uVar2 = 1;
  }
  else {
    if (iVar1 < 0x5dc1) {
      if (iVar1 == 16000) goto code_r0x000243f4;
    }
    else if ((iVar1 == 32000) || (iVar1 == 40000)) goto code_r0x000243f4;
    printf((char *)(DAT_00024424 + 0x243e8),DAT_00024420 + 0x243e0,0xe8,DAT_0002441c + 0x243d4);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== FUN_00024428 @ 00024428 size=56 ===== */

undefined4 FUN_00024428(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00023dbc(param_1,param_2,param_3);
  return uVar1;
}



/* ===== FUN_00024460 @ 00024460 size=56 ===== */

undefined4 FUN_00024460(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00024020(param_1,param_2,param_3);
  return uVar1;
}



/* ===== FUN_00024498 @ 00024498 size=556 ===== */

int FUN_00024498(undefined4 param_1,undefined4 param_2,int param_3,char *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *local_c;
  
  iVar1 = sprintf(param_4,(char *)(DAT_000246c4 + 0x244cc),param_1);
  pcVar4 = param_4 + iVar1;
  iVar1 = sprintf(pcVar4,(char *)(DAT_000246c8 + 0x244f4));
  iVar2 = sprintf(pcVar4 + iVar1,(char *)(DAT_000246cc + 0x24524),param_1,param_2);
  local_c = pcVar4 + iVar1 + iVar2;
  if ((*(int *)(param_3 + 0x80) == 0) || (*(int *)(param_3 + 0x84) == 0)) {
    iVar1 = sprintf(local_c,(char *)(DAT_000246dc + 0x24690),param_1);
    local_c = local_c + iVar1;
  }
  else {
    uVar5 = *(undefined4 *)(param_3 + 0x80);
    uVar6 = *(undefined4 *)(param_3 + 0x84);
    iVar1 = sprintf(local_c,(char *)(DAT_000246d0 + 0x24598),param_1);
    local_c = local_c + iVar1;
    FUN_00023950(local_c,param_5 - ((int)local_c - (int)param_4),param_3,uVar5);
    sVar3 = strlen(local_c);
    iVar1 = sprintf(local_c + sVar3,(char *)(DAT_000246d4 + 0x245fc));
    pcVar4 = local_c + sVar3 + iVar1;
    FUN_00023950(pcVar4,param_5 - ((int)pcVar4 - (int)param_4),param_3 + 0x40,uVar6);
    sVar3 = strlen(pcVar4);
    iVar1 = sprintf(pcVar4 + sVar3,(char *)(DAT_000246d8 + 0x24660));
    local_c = pcVar4 + sVar3 + iVar1;
  }
  return (int)local_c - (int)param_4;
}



/* ===== FUN_000246e0 @ 000246e0 size=688 ===== */

int FUN_000246e0(undefined4 param_1,undefined4 param_2,int param_3,char *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *local_c;
  
  iVar1 = sprintf(param_4,(char *)(DAT_00024990 + 0x24714),param_1);
  pcVar4 = param_4 + iVar1;
  iVar1 = sprintf(pcVar4,(char *)(DAT_00024994 + 0x2473c));
  iVar2 = sprintf(pcVar4 + iVar1,(char *)(DAT_00024998 + 0x2476c),param_1,param_2);
  local_c = pcVar4 + iVar1 + iVar2;
  if (((*(int *)(param_3 + 0xc0) != 0) && (*(int *)(param_3 + 0xc4) != 0)) &&
     (*(int *)(param_3 + 200) != 0)) {
    uVar5 = *(undefined4 *)(param_3 + 0xc0);
    uVar6 = *(undefined4 *)(param_3 + 0xc4);
    uVar7 = *(undefined4 *)(param_3 + 200);
    iVar1 = sprintf(local_c,(char *)(DAT_0002499c + 0x24808),param_1);
    iVar2 = sprintf(local_c + iVar1,(char *)(DAT_000249a0 + 0x24830));
    pcVar4 = local_c + iVar1 + iVar2;
    FUN_00023950(pcVar4,param_5 - ((int)pcVar4 - (int)param_4),param_3,uVar5);
    sVar3 = strlen(pcVar4);
    iVar1 = sprintf(pcVar4 + sVar3,(char *)(DAT_000249a4 + 0x24894));
    pcVar4 = pcVar4 + sVar3 + iVar1;
    FUN_00023950(pcVar4,param_5 - ((int)pcVar4 - (int)param_4),param_3 + 0x40,uVar6);
    sVar3 = strlen(pcVar4);
    iVar1 = sprintf(pcVar4 + sVar3,(char *)(DAT_000249a8 + 0x248f8));
    pcVar4 = pcVar4 + sVar3 + iVar1;
    FUN_00023950(pcVar4,param_5 - ((int)pcVar4 - (int)param_4),param_3 + 0x80,uVar7);
    sVar3 = strlen(pcVar4);
    iVar1 = sprintf(pcVar4 + sVar3,(char *)(DAT_000249ac + 0x2495c));
    local_c = pcVar4 + sVar3 + iVar1;
  }
  return (int)local_c - (int)param_4;
}



/* ===== FUN_000249b0 @ 000249b0 size=196 ===== */

char * FUN_000249b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  int iVar1;
  int iVar2;
  char *__s;
  
  iVar1 = sprintf(param_4,(char *)(DAT_00024a74 + 0x249e4),param_1);
  __s = param_4 + iVar1;
  iVar1 = sprintf(__s,(char *)(DAT_00024a78 + 0x24a0c));
  iVar2 = sprintf(__s + iVar1,(char *)(DAT_00024a7c + 0x24a44),param_1,param_2,param_3);
  return __s + iVar1 + (iVar2 - (int)param_4);
}



/* ===== FUN_00024a80 @ 00024a80 size=196 ===== */

char * FUN_00024a80(undefined4 param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  int iVar1;
  int iVar2;
  char *__s;
  
  iVar1 = sprintf(param_4,(char *)(DAT_00024b44 + 0x24ab4),param_1);
  __s = param_4 + iVar1;
  iVar1 = sprintf(__s,(char *)(DAT_00024b48 + 0x24adc));
  iVar2 = sprintf(__s + iVar1,(char *)(DAT_00024b4c + 0x24b14),param_1,param_2,param_3);
  return __s + iVar1 + (iVar2 - (int)param_4);
}



/* ===== FUN_00024b50 @ 00024b50 size=252 ===== */

char * FUN_00024b50(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint *param_4,
                   char *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *__s;
  
  iVar1 = sprintf(param_5,(char *)(DAT_00024c4c + 0x24b84),param_1);
  __s = param_5 + iVar1;
  iVar1 = sprintf(__s,(char *)(DAT_00024c50 + 0x24bac));
  if (*param_4 == 0) {
    uVar3 = 0x20;
  }
  else {
    uVar3 = *param_4 / 1000;
  }
  iVar2 = sprintf(__s + iVar1,(char *)(DAT_00024c54 + 0x24c1c),param_1,uVar3,param_2,param_3);
  return __s + iVar1 + (iVar2 - (int)param_5);
}



/* ===== FUN_00024c58 @ 00024c58 size=1436 ===== */

int FUN_00024c58(byte *param_1,byte *param_2,size_t param_3,undefined4 param_4,uint param_5,
                int param_6,int *param_7,int *param_8)

{
  byte bVar1;
  longlong lVar2;
  bool bVar3;
  uint16_t uVar4;
  uint32_t __hostlong;
  uint32_t uVar5;
  byte *pbVar6;
  int iVar7;
  size_t local_2c;
  byte *local_28;
  int local_c;
  
  local_c = 0;
  if ((((param_1 == (byte *)0x0) || (param_2 == (byte *)0x0)) || ((int)param_3 < 1)) ||
     ((param_7 == (int *)0x0 || (param_8 == (int *)0x0)))) {
    local_c = -1;
  }
  else {
    local_2c = param_3;
    local_28 = param_2;
    if (((*param_2 == 0) && (param_2[1] == 0)) && (param_2[2] == 1)) {
      local_28 = param_2 + 3;
      local_2c = param_3 - 3;
    }
    if ((((*local_28 == 0) && (local_28[1] == 0)) && (local_28[2] == 0)) && (local_28[3] == 1)) {
      local_28 = local_28 + 4;
      local_2c = local_2c - 4;
    }
    bVar1 = *local_28;
    lVar2 = (ulonglong)*(uint *)(param_1 + 8) * (ulonglong)param_5;
    __hostlong = FUN_00025c2c((int)lVar2,
                              *(uint *)(param_1 + 8) * param_6 + (int)((ulonglong)lVar2 >> 0x20),
                              1000000,0);
    for (; ((0 < (int)local_2c && (param_7[local_c] != 0)) && (0xc < param_8[local_c]));
        local_c = local_c + 1) {
      pbVar6 = (byte *)param_7[local_c];
      iVar7 = param_8[local_c];
      *pbVar6 = *pbVar6 & 0x3f | 0x80;
      *pbVar6 = *pbVar6 & 0xdf;
      *pbVar6 = *pbVar6 & 0xef;
      *pbVar6 = *pbVar6 & 0xf0;
      pbVar6[1] = pbVar6[1] & 0x7f;
      pbVar6[1] = pbVar6[1] & 0x80 | *param_1 & 0x7f;
      uVar4 = *(uint16_t *)(param_1 + 2);
      *(uint16_t *)(param_1 + 2) = uVar4 + 1;
      uVar4 = htons(uVar4);
      *(uint16_t *)(pbVar6 + 2) = uVar4;
      uVar5 = htonl(__hostlong);
      *(uint32_t *)(pbVar6 + 4) = uVar5;
      uVar5 = htonl(*(uint32_t *)(param_1 + 4));
      *(uint32_t *)(pbVar6 + 8) = uVar5;
      if ((local_c == 0) && ((int)local_2c < iVar7 + -0xb)) {
        pbVar6[1] = pbVar6[1] | 0x80;
        memcpy((void *)(*param_7 + 0xc),local_28,local_2c);
        *param_8 = local_2c + 0xc;
        local_28 = local_28 + local_2c;
        local_2c = 0;
      }
      else {
        bVar3 = false;
        if (local_c == 0) {
          local_28 = local_28 + 1;
          local_2c = local_2c - 1;
        }
        else if ((int)local_2c < iVar7 + -0xd) {
          bVar3 = true;
        }
        pbVar6[1] = pbVar6[1] & 0x7f | bVar3 << 7;
        *(byte *)(param_7[local_c] + 0xc) = bVar1 & 0xe0 | 0x1c;
        *(byte *)(param_7[local_c] + 0xd) = bVar1 & 0x1f;
        if (local_c == 0) {
          *(byte *)(*param_7 + 0xd) =
               ~((byte)~(byte)(((uint)*(byte *)(*param_7 + 0xd) << 0x19) >> 0x18) >> 1);
        }
        if (bVar3) {
          *(byte *)(param_7[local_c] + 0xd) = *(byte *)(param_7[local_c] + 0xd) | 0x40;
          memcpy((void *)(param_7[local_c] + 0xe),local_28,local_2c);
          param_8[local_c] = local_2c + 0xe;
          local_28 = local_28 + local_2c;
          local_2c = 0;
        }
        else {
          memcpy((void *)(param_7[local_c] + 0xe),local_28,iVar7 - 0xe);
          param_8[local_c] = iVar7;
          local_28 = local_28 + iVar7 + -0xe;
          local_2c = local_2c - (iVar7 + -0xe);
        }
      }
    }
  }
  return local_c;
}



/* ===== FUN_000251f4 @ 000251f4 size=1492 ===== */

int FUN_000251f4(byte *param_1,byte *param_2,size_t param_3,undefined4 param_4,uint param_5,
                int param_6,int *param_7,int *param_8)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  bool bVar4;
  uint16_t uVar5;
  uint32_t __hostlong;
  uint32_t uVar6;
  byte *pbVar7;
  int iVar8;
  size_t local_2c;
  byte *local_28;
  int local_c;
  
  local_c = 0;
  if ((((param_1 == (byte *)0x0) || (param_2 == (byte *)0x0)) || ((int)param_3 < 1)) ||
     ((param_7 == (int *)0x0 || (param_8 == (int *)0x0)))) {
    local_c = -1;
  }
  else {
    local_2c = param_3;
    local_28 = param_2;
    if (((*param_2 == 0) && (param_2[1] == 0)) && (param_2[2] == 1)) {
      local_28 = param_2 + 3;
      local_2c = param_3 - 3;
    }
    if ((((*local_28 == 0) && (local_28[1] == 0)) && (local_28[2] == 0)) && (local_28[3] == 1)) {
      local_28 = local_28 + 4;
      local_2c = local_2c - 4;
    }
    bVar1 = *local_28;
    bVar2 = local_28[1];
    lVar3 = (ulonglong)*(uint *)(param_1 + 8) * (ulonglong)param_5;
    __hostlong = FUN_00025c2c((int)lVar3,
                              *(uint *)(param_1 + 8) * param_6 + (int)((ulonglong)lVar3 >> 0x20),
                              1000000,0);
    for (; ((0 < (int)local_2c && (param_7[local_c] != 0)) && (0xc < param_8[local_c]));
        local_c = local_c + 1) {
      pbVar7 = (byte *)param_7[local_c];
      iVar8 = param_8[local_c];
      *pbVar7 = *pbVar7 & 0x3f | 0x80;
      *pbVar7 = *pbVar7 & 0xdf;
      *pbVar7 = *pbVar7 & 0xef;
      *pbVar7 = *pbVar7 & 0xf0;
      pbVar7[1] = pbVar7[1] & 0x7f;
      pbVar7[1] = pbVar7[1] & 0x80 | *param_1 & 0x7f;
      uVar5 = *(uint16_t *)(param_1 + 2);
      *(uint16_t *)(param_1 + 2) = uVar5 + 1;
      uVar5 = htons(uVar5);
      *(uint16_t *)(pbVar7 + 2) = uVar5;
      uVar6 = htonl(__hostlong);
      *(uint32_t *)(pbVar7 + 4) = uVar6;
      uVar6 = htonl(*(uint32_t *)(param_1 + 4));
      *(uint32_t *)(pbVar7 + 8) = uVar6;
      if ((local_c == 0) && ((int)local_2c < iVar8 + -0xb)) {
        pbVar7[1] = pbVar7[1] | 0x80;
        memcpy((void *)(*param_7 + 0xc),local_28,local_2c);
        *param_8 = local_2c + 0xc;
        local_28 = local_28 + local_2c;
        local_2c = 0;
      }
      else {
        bVar4 = false;
        if (local_c == 0) {
          local_28 = local_28 + 2;
          local_2c = local_2c - 2;
        }
        else if ((int)local_2c < iVar8 + -0xe) {
          bVar4 = true;
        }
        pbVar7[1] = pbVar7[1] & 0x7f | bVar4 << 7;
        *(byte *)(param_7[local_c] + 0xc) = bVar1 & 0x81 | 0x62;
        *(byte *)(param_7[local_c] + 0xd) = bVar2;
        *(byte *)(param_7[local_c] + 0xe) = bVar1 >> 1 & 0x3f;
        if (local_c == 0) {
          *(byte *)(*param_7 + 0xe) =
               ~((byte)~(byte)(((uint)*(byte *)(*param_7 + 0xe) << 0x19) >> 0x18) >> 1);
        }
        if (bVar4) {
          *(byte *)(param_7[local_c] + 0xe) = *(byte *)(param_7[local_c] + 0xe) | 0x40;
          memcpy((void *)(param_7[local_c] + 0xf),local_28,local_2c);
          param_8[local_c] = local_2c + 0xf;
          local_28 = local_28 + local_2c;
          local_2c = 0;
        }
        else {
          memcpy((void *)(param_7[local_c] + 0xf),local_28,iVar8 - 0xf);
          param_8[local_c] = iVar8;
          local_28 = local_28 + iVar8 + -0xf;
          local_2c = local_2c - (iVar8 + -0xf);
        }
      }
    }
  }
  return local_c;
}



/* ===== FUN_000257c8 @ 000257c8 size=792 ===== */

int FUN_000257c8(byte *param_1,void *param_2,size_t param_3,undefined4 param_4,uint param_5,
                int param_6,int param_7,int param_8)

{
  longlong lVar1;
  uint16_t uVar2;
  uint32_t __hostlong;
  uint32_t uVar3;
  byte *pbVar4;
  int iVar5;
  size_t sVar6;
  size_t local_24;
  void *local_20;
  int local_c;
  
  local_c = 0;
  if ((((param_1 == (byte *)0x0) || (param_2 == (void *)0x0)) || ((int)param_3 < 1)) ||
     ((param_7 == 0 || (param_8 == 0)))) {
    local_c = -1;
  }
  else {
    lVar1 = (ulonglong)*(uint *)(param_1 + 8) * (ulonglong)param_5;
    __hostlong = FUN_00025c2c((int)lVar1,
                              *(uint *)(param_1 + 8) * param_6 + (int)((ulonglong)lVar1 >> 0x20),
                              1000000,0);
    local_24 = param_3;
    local_20 = param_2;
    for (; ((sVar6 = local_24, 0 < (int)local_24 && (*(int *)(param_7 + local_c * 4) != 0)) &&
           (0xc < *(int *)(param_8 + local_c * 4))); local_c = local_c + 1) {
      pbVar4 = *(byte **)(param_7 + local_c * 4);
      iVar5 = *(int *)(param_8 + local_c * 4);
      *pbVar4 = *pbVar4 & 0x3f | 0x80;
      *pbVar4 = *pbVar4 & 0xdf;
      *pbVar4 = *pbVar4 & 0xef;
      *pbVar4 = *pbVar4 & 0xf0;
      pbVar4[1] = pbVar4[1] & 0x7f | (*(short *)(param_1 + 2) == 0) << 7;
      pbVar4[1] = pbVar4[1] & 0x80 | *param_1 & 0x7f;
      uVar2 = *(uint16_t *)(param_1 + 2);
      *(uint16_t *)(param_1 + 2) = uVar2 + 1;
      uVar2 = htons(uVar2);
      *(uint16_t *)(pbVar4 + 2) = uVar2;
      uVar3 = htonl(__hostlong);
      *(uint32_t *)(pbVar4 + 4) = uVar3;
      uVar3 = htonl(*(uint32_t *)(param_1 + 4));
      *(uint32_t *)(pbVar4 + 8) = uVar3;
      if ((int)local_24 < iVar5 + -0xb) {
        memcpy((void *)(*(int *)(param_7 + local_c * 4) + 0xc),local_20,local_24);
        *(size_t *)(param_8 + local_c * 4) = local_24 + 0xc;
        local_24 = 0;
      }
      else {
        memcpy((void *)(*(int *)(param_7 + local_c * 4) + 0xc),local_20,iVar5 - 0xc);
        *(int *)(param_8 + local_c * 4) = iVar5;
        sVar6 = iVar5 - 0xc;
        local_24 = local_24 - (iVar5 + -0xc);
      }
      local_20 = (void *)((int)local_20 + sVar6);
    }
  }
  return local_c;
}



/* ===== FUN_00025ae0 @ 00025ae0 size=80 ===== */

undefined4
FUN_00025ae0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000257c8(param_1,param_2,param_3,param_6,param_5,param_6,param_7,param_8);
  return uVar1;
}



/* ===== FUN_00025b38 @ 00025b38 size=196 ===== */

uint FUN_00025b38(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool in_NG;
  bool bVar6;
  
  uVar5 = param_1 ^ param_2;
  uVar2 = param_2;
  if (in_NG) {
    uVar2 = -param_2;
  }
  if (uVar2 - 1 == 0) {
    if ((int)param_2 < 0) {
      param_1 = -param_1;
    }
    return param_1;
  }
  uVar4 = param_1;
  if ((int)param_1 < 0) {
    uVar4 = -param_1;
  }
  if (uVar4 <= uVar2) {
    if (uVar4 < uVar2) {
      param_1 = 0;
    }
    if (uVar4 == uVar2) {
      param_1 = (int)uVar5 >> 0x1f | 1;
    }
    return param_1;
  }
  if ((uVar2 & uVar2 - 1) == 0) {
    uVar4 = uVar4 >> (0x1fU - LZCOUNT(uVar2) & 0xff);
    if ((int)uVar5 < 0) {
      uVar4 = -uVar4;
    }
    return uVar4;
  }
  uVar3 = uVar2 << (LZCOUNT(uVar2) - LZCOUNT(uVar4) & 0xffU);
  uVar2 = 1 << (LZCOUNT(uVar2) - LZCOUNT(uVar4) & 0xffU);
  uVar1 = 0;
  while( true ) {
    if (uVar3 <= uVar4) {
      uVar4 = uVar4 - uVar3;
      uVar1 = uVar1 | uVar2;
    }
    if (uVar3 >> 1 <= uVar4) {
      uVar4 = uVar4 - (uVar3 >> 1);
      uVar1 = uVar1 | uVar2 >> 1;
    }
    if (uVar3 >> 2 <= uVar4) {
      uVar4 = uVar4 - (uVar3 >> 2);
      uVar1 = uVar1 | uVar2 >> 2;
    }
    if (uVar3 >> 3 <= uVar4) {
      uVar4 = uVar4 - (uVar3 >> 3);
      uVar1 = uVar1 | uVar2 >> 3;
    }
    bVar6 = uVar4 == 0;
    if (!bVar6) {
      uVar2 = uVar2 >> 4;
      bVar6 = uVar2 == 0;
    }
    if (bVar6) break;
    uVar3 = uVar3 >> 4;
  }
  if ((int)uVar5 < 0) {
    uVar1 = -uVar1;
  }
  return uVar1;
}



/* ===== FUN_00025c0c @ 00025c0c size=48 ===== */

void FUN_00025c0c(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_00025b38();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_00025c2c @ 00025c2c size=76 ===== */

void FUN_00025c2c(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  if (param_4 != 0 || param_3 != 0) {
    FUN_00025c78();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_00025c78 @ 00025c78 size=328 ===== */

undefined8 FUN_00025c78(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

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



/* ===== _fini @ 00025dc0 size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 0003c000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0003c010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_setMirrorFlip @ 0003c014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_setMirrorFlip(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_EnableMotionDeblur @ 0003c018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_EnableMotionDeblur(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_preInit_devBufCnt @ 0003c01c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_preInit_devBufCnt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::recvfrom @ 0003c020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recvfrom(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,socklen_t *__addr_len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 0003c024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_RGN_SetBitMap @ 0003c028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_RGN_SetBitMap(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 0003c02c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevAttr @ 0003c030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetDevAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetChnFrame @ 0003c034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetChnFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setlinebuf @ 0003c038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void setlinebuf(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 0003c03c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::accept @ 0003c040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int accept(int __fd,sockaddr *__addr,socklen_t *__addr_len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 0003c044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 0003c048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 0003c04c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcat @ 0003c050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 0003c054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_RGN_Create @ 0003c058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_RGN_Create(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memmove @ 0003c05c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_ae_setExpSwAttr @ 0003c060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_user_api2_ae_setExpSwAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::raise @ 0003c064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 0003c068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 0003c06c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_join @ 0003c070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 0003c074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setenv @ 0003c078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setenv(char *__name,char *__value,int __replace)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableDev @ 0003c07c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_EnableDev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_RGN_DetachFromChn @ 0003c080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_RGN_DetachFromChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevAttr @ 0003c084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetDevAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 0003c088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableDev @ 0003c08c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_DisableDev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sem_wait @ 0003c090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sem_wait(sem_t *__sem)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_destroy @ 0003c094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_destroy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_RGN_AttachToChn @ 0003c098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_RGN_AttachToChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0003c09c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Bind @ 0003c0a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Bind(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChnExt @ 0003c0a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_EnableChnExt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ntohs @ 0003c0a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint16_t ntohs(uint16_t __netshort)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 0003c0ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_lock @ 0003c0b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::send @ 0003c0b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t send(int __fd,void *__buf,size_t __n,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_start @ 0003c0b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_start(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_RGN_SetDisplayAttr @ 0003c0bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_RGN_SetDisplayAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetJpegParam @ 0003c0c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetJpegParam(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::recv @ 0003c0c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recv(int __fd,void *__buf,size_t __n,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_prepare @ 0003c0c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_prepare(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fseek @ 0003c0cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_deinit @ 0003c0d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_deinit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StartRecvFrame @ 0003c0d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_StartRecvFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt_long @ 0003c0d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void getopt_long(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetComboAttr @ 0003c0dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetComboAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_destroy @ 0003c0e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_MmzFlushCache @ 0003c0e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_MmzFlushCache(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 0003c0e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::listen @ 0003c0ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int listen(int __fd,int __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sendto @ 0003c0f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t sendto(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,socklen_t __addr_len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ctime @ 0003c0f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * ctime(time_t *__timer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SendFrame @ 0003c0f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SendFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 0003c0fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 0003c100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_LOG @ 0003c104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_LOG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::prctl @ 0003c108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int prctl(int __option,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_create @ 0003c10c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_create(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 0003c110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clock_gettime @ 0003c114 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strrchr @ 0003c118 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_unlock @ 0003c11c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetMjpegParam @ 0003c120 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetMjpegParam(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::socket @ 0003c124 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_ae_getExpSwAttr @ 0003c128 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_user_api2_ae_getExpSwAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_init @ 0003c12c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_aldch_v21_GetAttrib @ 0003c130 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_user_api2_aldch_v21_GetAttrib(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setsockopt @ 0003c134 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChn @ 0003c138 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_EnableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_getCamInfos @ 0003c13c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_getCamInfos(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_setMulCamConc @ 0003c140 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_setMulCamConc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId @ 0003c144 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::inet_ntoa @ 0003c148 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * inet_ntoa(in_addr __in)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::time @ 0003c14c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_QueryChnStatus @ 0003c150 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_QueryChnStatus(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChn @ 0003c154 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_DisableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnWrapBufAttr @ 0003c158 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetChnWrapBufAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_stop @ 0003c15c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_stop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetEptz @ 0003c160 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetEptz(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetChnBufWrapAttr @ 0003c164 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetChnBufWrapAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fcntl @ 0003c168 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fcntl(int __fd,int __cmd,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_EnableSvc @ 0003c16c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_EnableSvc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetRcParam @ 0003c170 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetRcParam(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_switch_scene @ 0003c174 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_switch_scene(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sem_init @ 0003c178 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sem_init(sem_t *__sem,int __pshared,uint __value)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm @ 0003c17c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::htonl @ 0003c180 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint32_t htonl(uint32_t __hostlong)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevIsEnable @ 0003c184 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetDevIsEnable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::signal @ 0003c188 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen64 @ 0003c18c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_create @ 0003c190 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StopRecvFrame @ 0003c194 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_StopRecvFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::htons @ 0003c198 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint16_t htons(uint16_t __hostshort)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_GetMB @ 0003c19c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_GetMB(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::select @ 0003c1a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 0003c1a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 0003c1a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Exit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_aldch_v21_SetAttrib @ 0003c1ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_user_api2_aldch_v21_SetAttrib(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 0003c1b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usleep @ 0003c1b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 0003c1b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_RGN_Destroy @ 0003c1bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_RGN_Destroy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_prepare @ 0003c1c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_prepare(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnAttr @ 0003c1c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetChnAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_ReleaseChnFrame @ 0003c1c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_ReleaseChnFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sem_post @ 0003c1cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sem_post(sem_t *__sem)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 0003c1d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_GetStream @ 0003c1d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_GetStream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_start @ 0003c1d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_start(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::system @ 0003c1dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int system(char *__command)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChnExt @ 0003c1e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_DisableChnExt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sleep @ 0003c1e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 0003c1e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 0003c1ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_Handle2VirAddr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strstr @ 0003c1f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sscanf @ 0003c1f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_RGN_GetDisplayAttr @ 0003c1f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_RGN_GetDisplayAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevBindPipe @ 0003c1fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetDevBindPipe(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_UnBind @ 0003c200 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_UnBind(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_ChnSaveFile @ 0003c204 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_ChnSaveFile(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 0003c208 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gettimeofday @ 0003c20c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sem_destroy @ 0003c210 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sem_destroy(sem_t *__sem)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_ReleaseMB @ 0003c214 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_ReleaseMB(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 0003c218 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetChnRefBufShareAttr @ 0003c21c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetChnRefBufShareAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fread @ 0003c220 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_stop @ 0003c224 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_stop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::bind @ 0003c228 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_DestroyChn @ 0003c22c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_DestroyChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 0003c230 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_init @ 0003c234 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_CreateChn @ 0003c238 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_CreateChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_ReleaseStream @ 0003c23c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_ReleaseStream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


