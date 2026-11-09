// sample_demo_vi_avs_venc — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00012698 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 000126bc size=12 ===== */

void RK_MPI_SYS_Exit(void)

{
  (*(code *)PTR_RK_MPI_SYS_Exit_0003c00c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Bind @ 000126c8 size=12 ===== */

void RK_MPI_SYS_Bind(void)

{
  (*(code *)PTR_RK_MPI_SYS_Bind_0003c010)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm @ 000126d4 size=12 ===== */

void rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm_0003c014)();
  return;
}



/* ===== <EXTERNAL>::bind @ 000126e0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_bind_0003c018)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_QueryChnStatus @ 000126ec size=12 ===== */

void RK_MPI_VI_QueryChnStatus(void)

{
  (*(code *)PTR_RK_MPI_VI_QueryChnStatus_0003c01c)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 000126f8 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_0003c020)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnWrapBufAttr @ 00012704 size=12 ===== */

void RK_MPI_VI_SetChnWrapBufAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetChnWrapBufAttr_0003c024)();
  return;
}



/* ===== <EXTERNAL>::htons @ 00012710 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint16_t htons(uint16_t __hostshort)

{
  uint16_t uVar1;
  
  uVar1 = (*(code *)PTR_htons_0003c028)(__hostshort);
  return uVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_GetStream @ 0001271c size=12 ===== */

void RK_MPI_VENC_GetStream(void)

{
  (*(code *)PTR_RK_MPI_VENC_GetStream_0003c02c)();
  return;
}



/* ===== <EXTERNAL>::calloc @ 00012728 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_0003c030)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 00012734 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_0003c034)();
  return piVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_EnableMotionDeblur @ 00012740 size=12 ===== */

void RK_MPI_VENC_EnableMotionDeblur(void)

{
  (*(code *)PTR_RK_MPI_VENC_EnableMotionDeblur_0003c038)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetComboAttr @ 0001274c size=12 ===== */

void RK_MPI_VENC_SetComboAttr(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetComboAttr_0003c03c)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_destroy @ 00012758 size=12 ===== */

void rk_aiq_uapi2_camgroup_destroy(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_destroy_0003c040)();
  return;
}



/* ===== <EXTERNAL>::clock_gettime @ 00012764 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_clock_gettime_0003c044)(__clock_id);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_CAL_AVS_GetFinalLutBufferSize @ 00012770 size=12 ===== */

void RK_MPI_CAL_AVS_GetFinalLutBufferSize(void)

{
  (*(code *)PTR_RK_MPI_CAL_AVS_GetFinalLutBufferSize_0003c048)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_ae_setExpSwAttr @ 0001277c size=12 ===== */

void rk_aiq_user_api2_ae_setExpSwAttr(void)

{
  (*(code *)PTR_rk_aiq_user_api2_ae_setExpSwAttr_0003c04c)();
  return;
}



/* ===== <EXTERNAL>::fwrite @ 00012788 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_0003c050)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::system @ 00012794 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int system(char *__command)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_system_0003c054)(__command);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChn @ 000127ac size=12 ===== */

void RK_MPI_VI_DisableChn(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableChn_0003c05c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_StopPipe @ 000127b8 size=12 ===== */

void RK_MPI_VI_StopPipe(void)

{
  (*(code *)PTR_RK_MPI_VI_StopPipe_0003c060)();
  return;
}



/* ===== <EXTERNAL>::usleep @ 000127c4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_usleep_0003c064)(__useconds);
  return iVar1;
}



/* ===== <EXTERNAL>::memcpy @ 000127d0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_0003c068)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_setMulCamConc @ 000127dc size=12 ===== */

void rk_aiq_uapi2_sysctl_setMulCamConc(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_setMulCamConc_0003c06c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_RGN_DetachFromChn @ 000127e8 size=12 ===== */

void RK_MPI_RGN_DetachFromChn(void)

{
  (*(code *)PTR_RK_MPI_RGN_DetachFromChn_0003c070)();
  return;
}



/* ===== <EXTERNAL>::sleep @ 000127f4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_sleep_0003c074)(__seconds);
  return uVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_CreateChn @ 00012800 size=12 ===== */

void RK_MPI_VENC_CreateChn(void)

{
  (*(code *)PTR_RK_MPI_VENC_CreateChn_0003c078)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_ReleaseChnFrame @ 0001280c size=12 ===== */

void RK_MPI_VI_ReleaseChnFrame(void)

{
  (*(code *)PTR_RK_MPI_VI_ReleaseChnFrame_0003c07c)();
  return;
}



/* ===== <EXTERNAL>::send @ 00012818 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t send(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_send_0003c080)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::pthread_mutex_init @ 00012824 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_0003c084)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_create @ 00012830 size=12 ===== */

void rk_aiq_uapi2_camgroup_create(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_create_0003c088)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_GetMB @ 0001283c size=12 ===== */

void RK_MPI_MB_GetMB(void)

{
  (*(code *)PTR_RK_MPI_MB_GetMB_0003c08c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_EnableSvc @ 00012848 size=12 ===== */

void RK_MPI_VENC_EnableSvc(void)

{
  (*(code *)PTR_RK_MPI_VENC_EnableSvc_0003c090)();
  return;
}



/* ===== <EXTERNAL>::gettimeofday @ 00012854 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_gettimeofday_0003c094)(__tv);
  return iVar1;
}



/* ===== <EXTERNAL>::strcat @ 00012860 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcat_0003c098)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevAttr @ 0001286c size=12 ===== */

void RK_MPI_VI_GetDevAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_GetDevAttr_0003c09c)();
  return;
}



/* ===== <EXTERNAL>::setenv @ 00012878 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setenv(char *__name,char *__value,int __replace)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setenv_0003c0a0)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::malloc @ 00012884 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0003c0a4)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_aldch_v21_SetAttrib @ 00012890 size=12 ===== */

void rk_aiq_user_api2_aldch_v21_SetAttrib(void)

{
  (*(code *)PTR_rk_aiq_user_api2_aldch_v21_SetAttrib_0003c0a8)();
  return;
}



/* ===== <EXTERNAL>::strrchr @ 0001289c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strrchr_0003c0ac)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::strncmp @ 000128a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_0003c0b0)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::fopen64 @ 000128c0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen64_0003c0b8)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AVS_StopGrp @ 000128cc size=12 ===== */

void RK_MPI_AVS_StopGrp(void)

{
  (*(code *)PTR_RK_MPI_AVS_StopGrp_0003c0bc)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_setMirrorFlip @ 000128d8 size=12 ===== */

void rk_aiq_uapi2_setMirrorFlip(void)

{
  (*(code *)PTR_rk_aiq_uapi2_setMirrorFlip_0003c0c0)();
  return;
}



/* ===== <EXTERNAL>::setlinebuf @ 000128e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void setlinebuf(FILE *__stream)

{
  (*(code *)PTR_setlinebuf_0003c0c4)(__stream);
  return;
}



/* ===== <EXTERNAL>::recv @ 000128f0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recv(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_recv_0003c0c8)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::strlen @ 000128fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_0003c0cc)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::pthread_mutex_lock @ 00012908 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_0003c0d0)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::ctime @ 00012914 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * ctime(time_t *__timer)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_ctime_0003c0d4)(__timer);
  return pcVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AVS_GetFinalLut @ 00012920 size=12 ===== */

void RK_MPI_AVS_GetFinalLut(void)

{
  (*(code *)PTR_RK_MPI_AVS_GetFinalLut_0003c0d8)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AVS_ReleaseChnFrame @ 0001292c size=12 ===== */

void RK_MPI_AVS_ReleaseChnFrame(void)

{
  (*(code *)PTR_RK_MPI_AVS_ReleaseChnFrame_0003c0dc)();
  return;
}



/* ===== <EXTERNAL>::sendto @ 00012938 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t sendto(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,socklen_t __addr_len)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_sendto_0003c0e0)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::fcntl @ 00012944 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fcntl(int __fd,int __cmd,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fcntl_0003c0e4)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::snprintf @ 00012950 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_0003c0e8)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AVS_DestroyGrp @ 0001295c size=12 ===== */

void RK_MPI_AVS_DestroyGrp(void)

{
  (*(code *)PTR_RK_MPI_AVS_DestroyGrp_0003c0ec)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AVS_StartGrp @ 00012968 size=12 ===== */

void RK_MPI_AVS_StartGrp(void)

{
  (*(code *)PTR_RK_MPI_AVS_StartGrp_0003c0f0)();
  return;
}



/* ===== <EXTERNAL>::htonl @ 00012974 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint32_t htonl(uint32_t __hostlong)

{
  uint32_t uVar1;
  
  uVar1 = (*(code *)PTR_htonl_0003c0f4)(__hostlong);
  return uVar1;
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_aldch_v21_GetAttrib @ 00012980 size=12 ===== */

void rk_aiq_user_api2_aldch_v21_GetAttrib(void)

{
  (*(code *)PTR_rk_aiq_user_api2_aldch_v21_GetAttrib_0003c0f8)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_RGN_Destroy @ 0001298c size=12 ===== */

void RK_MPI_RGN_Destroy(void)

{
  (*(code *)PTR_RK_MPI_RGN_Destroy_0003c0fc)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnAttr @ 00012998 size=12 ===== */

void RK_MPI_VI_SetChnAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetChnAttr_0003c100)();
  return;
}



/* ===== <EXTERNAL>::select @ 000129a4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_select_0003c104)(__nfds);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_UnBind @ 000129b0 size=12 ===== */

void RK_MPI_SYS_UnBind(void)

{
  (*(code *)PTR_RK_MPI_SYS_UnBind_0003c108)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SendFrame @ 000129bc size=12 ===== */

void RK_MPI_VENC_SendFrame(void)

{
  (*(code *)PTR_RK_MPI_VENC_SendFrame_0003c10c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetChnRefBufShareAttr @ 000129c8 size=12 ===== */

void RK_MPI_VENC_SetChnRefBufShareAttr(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetChnRefBufShareAttr_0003c110)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_prepare @ 000129d4 size=12 ===== */

void rk_aiq_uapi2_camgroup_prepare(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_prepare_0003c114)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 000129e0 size=12 ===== */

void RK_MPI_SYS_Init(void)

{
  (*(code *)PTR_RK_MPI_SYS_Init_0003c118)();
  return;
}



/* ===== <EXTERNAL>::pthread_mutex_destroy @ 000129ec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_0003c11c)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId @ 000129f8 size=12 ===== */

void rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId_0003c120)();
  return;
}



/* ===== <EXTERNAL>::memmove @ 00012a04 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_0003c124)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::fclose @ 00012a10 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_0003c128)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_RGN_SetBitMap @ 00012a1c size=12 ===== */

void RK_MPI_RGN_SetBitMap(void)

{
  (*(code *)PTR_RK_MPI_RGN_SetBitMap_0003c12c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AVS_EnableChn @ 00012a28 size=12 ===== */

void RK_MPI_AVS_EnableChn(void)

{
  (*(code *)PTR_RK_MPI_AVS_EnableChn_0003c130)();
  return;
}



/* ===== <EXTERNAL>::setsockopt @ 00012a34 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setsockopt_0003c134)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::fread @ 00012a40 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fread_0003c138)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::RK_MPI_RGN_AttachToChn @ 00012a4c size=12 ===== */

void RK_MPI_RGN_AttachToChn(void)

{
  (*(code *)PTR_RK_MPI_RGN_AttachToChn_0003c13c)();
  return;
}



/* ===== <EXTERNAL>::RK_LOG @ 00012a58 size=12 ===== */

void RK_LOG(void)

{
  (*(code *)PTR_RK_LOG_0003c140)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_getCamInfos @ 00012a64 size=12 ===== */

void rk_aiq_uapi2_camgroup_getCamInfos(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_getCamInfos_0003c144)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_start @ 00012a70 size=12 ===== */

void rk_aiq_uapi2_camgroup_start(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_start_0003c148)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StopRecvFrame @ 00012a7c size=12 ===== */

void RK_MPI_VENC_StopRecvFrame(void)

{
  (*(code *)PTR_RK_MPI_VENC_StopRecvFrame_0003c14c)();
  return;
}



/* ===== <EXTERNAL>::time @ 00012a88 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_0003c150)(__timer);
  return tVar1;
}



/* ===== <EXTERNAL>::pthread_create @ 00012a94 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_0003c154)(__newthread);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_StartPipe @ 00012aa0 size=12 ===== */

void RK_MPI_VI_StartPipe(void)

{
  (*(code *)PTR_RK_MPI_VI_StartPipe_0003c158)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_RGN_GetDisplayAttr @ 00012aac size=12 ===== */

void RK_MPI_RGN_GetDisplayAttr(void)

{
  (*(code *)PTR_RK_MPI_RGN_GetDisplayAttr_0003c15c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetRcParam @ 00012ab8 size=12 ===== */

void RK_MPI_VENC_SetRcParam(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetRcParam_0003c160)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_RGN_SetDisplayAttr @ 00012ac4 size=12 ===== */

void RK_MPI_RGN_SetDisplayAttr(void)

{
  (*(code *)PTR_RK_MPI_RGN_SetDisplayAttr_0003c164)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChnExt @ 00012ad0 size=12 ===== */

void RK_MPI_VI_DisableChnExt(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableChnExt_0003c168)();
  return;
}



/* ===== <EXTERNAL>::close @ 00012adc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_0003c16c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetChnFrame @ 00012ae8 size=12 ===== */

void RK_MPI_VI_GetChnFrame(void)

{
  (*(code *)PTR_RK_MPI_VI_GetChnFrame_0003c170)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChnExt @ 00012af4 size=12 ===== */

void RK_MPI_VI_EnableChnExt(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableChnExt_0003c174)();
  return;
}



/* ===== <EXTERNAL>::sscanf @ 00012b00 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sscanf_0003c178)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::strncpy @ 00012b0c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_0003c17c)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetChnBufWrapAttr @ 00012b18 size=12 ===== */

void RK_MPI_VENC_SetChnBufWrapAttr(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetChnBufWrapAttr_0003c180)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevBindPipe @ 00012b24 size=12 ===== */

void RK_MPI_VI_SetDevBindPipe(void)

{
  (*(code *)PTR_RK_MPI_VI_SetDevBindPipe_0003c184)();
  return;
}



/* ===== <EXTERNAL>::atof @ 00012b30 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double atof(char *__nptr)

{
  undefined4 uVar1;
  undefined4 extraout_s1;
  
  uVar1 = (*(code *)PTR_atof_0003c188)(__nptr);
  return (double)CONCAT44(extraout_s1,uVar1);
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_prepare @ 00012b3c size=12 ===== */

void rk_aiq_uapi2_sysctl_prepare(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_prepare_0003c18c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevIsEnable @ 00012b48 size=12 ===== */

void RK_MPI_VI_GetDevIsEnable(void)

{
  (*(code *)PTR_RK_MPI_VI_GetDevIsEnable_0003c190)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_init @ 00012b54 size=12 ===== */

void rk_aiq_uapi2_sysctl_init(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_init_0003c194)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableDev @ 00012b60 size=12 ===== */

void RK_MPI_VI_EnableDev(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableDev_0003c198)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_start @ 00012b6c size=12 ===== */

void rk_aiq_uapi2_sysctl_start(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_start_0003c19c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_CreateMB @ 00012b78 size=12 ===== */

void RK_MPI_SYS_CreateMB(void)

{
  (*(code *)PTR_RK_MPI_SYS_CreateMB_0003c1a0)();
  return;
}



/* ===== <EXTERNAL>::fflush @ 00012b84 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_0003c1a4)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 00012b90 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0003c1a8)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::RK_MPI_RGN_Create @ 00012b9c size=12 ===== */

void RK_MPI_RGN_Create(void)

{
  (*(code *)PTR_RK_MPI_RGN_Create_0003c1ac)();
  return;
}



/* ===== <EXTERNAL>::inet_ntoa @ 00012ba8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * inet_ntoa(in_addr __in)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_inet_ntoa_0003c1b0)(__in.s_addr);
  return pcVar1;
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_ae_getExpSwAttr @ 00012bb4 size=12 ===== */

void rk_aiq_user_api2_ae_getExpSwAttr(void)

{
  (*(code *)PTR_rk_aiq_user_api2_ae_getExpSwAttr_0003c1b4)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AVS_GetChnFrame @ 00012bc0 size=12 ===== */

void RK_MPI_AVS_GetChnFrame(void)

{
  (*(code *)PTR_RK_MPI_AVS_GetChnFrame_0003c1b8)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_preInit_devBufCnt @ 00012bcc size=12 ===== */

void rk_aiq_uapi2_sysctl_preInit_devBufCnt(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_preInit_devBufCnt_0003c1bc)();
  return;
}



/* ===== <EXTERNAL>::fprintf @ 00012bd8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_0003c1c0)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::ntohs @ 00012be4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint16_t ntohs(uint16_t __netshort)

{
  uint16_t uVar1;
  
  uVar1 = (*(code *)PTR_ntohs_0003c1c4)(__netshort);
  return uVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_ChnSaveFile @ 00012bf0 size=12 ===== */

void RK_MPI_VI_ChnSaveFile(void)

{
  (*(code *)PTR_RK_MPI_VI_ChnSaveFile_0003c1c8)();
  return;
}



/* ===== <EXTERNAL>::abort @ 00012bfc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_0003c1cc)();
  return;
}



/* ===== <EXTERNAL>::recvfrom @ 00012c08 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recvfrom(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,socklen_t *__addr_len)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_recvfrom_0003c1d0)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::sprintf @ 00012c14 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_0003c1d4)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_MmzFlushCache @ 00012c20 size=12 ===== */

void RK_MPI_SYS_MmzFlushCache(void)

{
  (*(code *)PTR_RK_MPI_SYS_MmzFlushCache_0003c1d8)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StartRecvFrame @ 00012c2c size=12 ===== */

void RK_MPI_VENC_StartRecvFrame(void)

{
  (*(code *)PTR_RK_MPI_VENC_StartRecvFrame_0003c1dc)();
  return;
}



/* ===== <EXTERNAL>::socket @ 00012c38 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_socket_0003c1e0)(__domain);
  return iVar1;
}



/* ===== <EXTERNAL>::fseek @ 00012c44 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fseek_0003c1e4)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Free @ 00012c50 size=12 ===== */

void RK_MPI_SYS_Free(void)

{
  (*(code *)PTR_RK_MPI_SYS_Free_0003c1e8)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 00012c5c size=12 ===== */

void RK_MPI_MB_Handle2VirAddr(void)

{
  (*(code *)PTR_RK_MPI_MB_Handle2VirAddr_0003c1ec)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_ReleaseMB @ 00012c68 size=12 ===== */

void RK_MPI_MB_ReleaseMB(void)

{
  (*(code *)PTR_RK_MPI_MB_ReleaseMB_0003c1f0)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_DestroyChn @ 00012c74 size=12 ===== */

void RK_MPI_VENC_DestroyChn(void)

{
  (*(code *)PTR_RK_MPI_VENC_DestroyChn_0003c1f4)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetMjpegParam @ 00012c80 size=12 ===== */

void RK_MPI_VENC_SetMjpegParam(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetMjpegParam_0003c1f8)();
  return;
}



/* ===== <EXTERNAL>::pthread_mutex_unlock @ 00012c8c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_0003c1fc)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_deinit @ 00012c98 size=12 ===== */

void rk_aiq_uapi2_sysctl_deinit(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_deinit_0003c200)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_stop @ 00012ca4 size=12 ===== */

void rk_aiq_uapi2_sysctl_stop(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_stop_0003c204)();
  return;
}



/* ===== <EXTERNAL>::raise @ 00012cb0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_0003c208)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::strstr @ 00012cbc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strstr_0003c20c)(__haystack);
  return pcVar1;
}



/* ===== <EXTERNAL>::strcmp @ 00012cc8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_0003c210)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_ReleaseStream @ 00012cd4 size=12 ===== */

void RK_MPI_VENC_ReleaseStream(void)

{
  (*(code *)PTR_RK_MPI_VENC_ReleaseStream_0003c214)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetEptz @ 00012ce0 size=12 ===== */

void RK_MPI_VI_SetEptz(void)

{
  (*(code *)PTR_RK_MPI_VI_SetEptz_0003c218)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevAttr @ 00012cec size=12 ===== */

void RK_MPI_VI_SetDevAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetDevAttr_0003c21c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AVS_SetChnAttr @ 00012cf8 size=12 ===== */

void RK_MPI_AVS_SetChnAttr(void)

{
  (*(code *)PTR_RK_MPI_AVS_SetChnAttr_0003c220)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChn @ 00012d04 size=12 ===== */

void RK_MPI_VI_EnableChn(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableChn_0003c224)();
  return;
}



/* ===== <EXTERNAL>::accept @ 00012d10 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int accept(int __fd,sockaddr *__addr,socklen_t *__addr_len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_accept_0003c228)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 00012d1c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0003c22c)(__ptr);
  return;
}



/* ===== <EXTERNAL>::atoi @ 00012d28 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_0003c230)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetJpegParam @ 00012d34 size=12 ===== */

void RK_MPI_VENC_SetJpegParam(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetJpegParam_0003c234)();
  return;
}



/* ===== <EXTERNAL>::strchr @ 00012d40 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_0003c238)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::strerror @ 00012d4c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_0003c23c)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::listen @ 00012d58 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int listen(int __fd,int __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_listen_0003c240)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::printf @ 00012d64 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_0003c244)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::getopt_long @ 00012d70 size=12 ===== */

void getopt_long(void)

{
  (*(code *)PTR_getopt_long_0003c248)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AVS_CreateGrp @ 00012d7c size=12 ===== */

void RK_MPI_AVS_CreateGrp(void)

{
  (*(code *)PTR_RK_MPI_AVS_CreateGrp_0003c24c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableDev @ 00012d88 size=12 ===== */

void RK_MPI_VI_DisableDev(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableDev_0003c250)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AVS_DisableChn @ 00012d94 size=12 ===== */

void RK_MPI_AVS_DisableChn(void)

{
  (*(code *)PTR_RK_MPI_AVS_DisableChn_0003c254)();
  return;
}



/* ===== <EXTERNAL>::puts @ 00012da0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_0003c258)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_stop @ 00012dac size=12 ===== */

void rk_aiq_uapi2_camgroup_stop(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_stop_0003c25c)();
  return;
}



/* ===== <EXTERNAL>::signal @ 00012db8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = (__sighandler_t)(*(code *)PTR_signal_0003c260)(__sig);
  return p_Var1;
}



/* ===== <EXTERNAL>::strcpy @ 00012dc4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_0003c264)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00012dd0 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_0003c268)();
  return;
}



/* ===== <EXTERNAL>::pthread_join @ 00012ddc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_0003c26c)(__th);
  return iVar1;
}



/* ===== FUN_00012de8 @ 00012de8 size=4076 ===== */

/* WARNING: Type propagation algorithm not settling */

int FUN_00012de8(int param_1,undefined4 *param_2)

{
  longlong lVar1;
  int *piVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  void *__s;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  pthread_t __th;
  undefined4 extraout_r1;
  int iVar12;
  int iVar13;
  void *pvVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  char *pcVar17;
  char *pcVar18;
  double dVar19;
  char *pcVar20;
  undefined4 uVar21;
  float fVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined4 uVar25;
  char *local_1e0;
  char *local_1dc;
  int local_1d8;
  int local_1d4;
  int local_1d0;
  int local_1cc;
  undefined4 local_1c8;
  int local_1c4;
  int local_1c0;
  int local_1bc;
  int local_1b8;
  int local_1b4;
  int local_1b0;
  int local_1ac;
  char *local_1a8;
  int local_1a4;
  char *local_1a0;
  char *local_19c;
  int local_198;
  int local_194;
  int local_190;
  int local_18c;
  int local_180;
  int local_17c [3];
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  int local_164;
  char *local_160;
  char *pcStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  char *pcStack_14c;
  undefined4 local_148;
  char *pcStack_144;
  undefined4 local_140;
  char *pcStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  int local_120;
  char *local_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  
  uVar11 = 0;
  pcVar20 = *(char **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uVar25 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uVar21 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_160 = (char *)0x0;
  local_150 = 0;
  local_148 = 0;
  pcStack_15c = pcVar20;
  uStack_158 = uVar25;
  uStack_154 = uVar21;
  pcStack_14c = pcVar20;
  pcStack_144 = pcVar20;
  if (1 < param_1) {
    __s = malloc(0x28e0);
    if (__s == (void *)0x0) {
      RK_LOG(2,DAT_00013ddc,DAT_00013dd4,DAT_00013dd8,0xec);
      return -1;
    }
    memset(__s,0,0x28e0);
    iVar7 = pthread_mutex_init(DAT_00013de0,(pthread_mutexattr_t *)0x0);
    if (iVar7 != 0) {
      RK_LOG(2,DAT_00013ddc,DAT_00013de4,DAT_00013dd8,0xf2);
      goto LAB_00012ea4;
    }
    fVar22 = 5.0;
    signal(2,DAT_00013de8);
    iVar13 = 2;
    local_1dc = DAT_00013dec;
    local_1cc = 1;
    local_190 = 1;
    local_18c = 0x1000;
    local_198 = -1;
    local_1bc = 0xf;
    local_1c8 = 1;
    local_1d4 = 5;
    local_1b8 = 0x220;
    local_1b4 = 0x780;
    local_1e0 = DAT_00013df4;
    local_1c4 = 0x438;
    local_1c0 = 0xf00;
    local_194 = 2;
    local_1a0 = DAT_00013dfc;
    local_1d8 = 2;
    local_1b0 = 0x438;
    local_1ac = 0x780;
    local_1a4 = 1;
    iVar7 = 0;
    uVar15 = DAT_00013df0;
    pcVar18 = DAT_00013df8;
    pcVar4 = local_1e0;
    pcVar5 = (char *)0x0;
    pcVar6 = (char *)0x0;
LAB_00012f58:
    while( true ) {
      while( true ) {
        do {
          local_19c = pcVar6;
          local_1a8 = pcVar5;
          local_1e0 = pcVar4;
          iVar8 = getopt_long(param_1,param_2,DAT_00013e04,DAT_00013e00,0);
          if (iVar8 == -1) {
            printf(DAT_00013e08,0);
            printf(DAT_00013e0c,0);
            printf(DAT_00013e10,local_1a0);
            printf(DAT_00013e18,DAT_00013e14);
            printf(DAT_00013e1c,uVar15);
            printf(DAT_00013e20,local_1a8);
            printf(DAT_00013e24,local_1dc);
            printf(DAT_00013e28);
            printf(DAT_00013e2c,local_1e0);
            printf(DAT_00013e30,pcVar18);
            if (pcVar18 != (char *)0x0 && (local_1e0 != (char *)0x0 && iVar13 == 1)) {
              local_160 = local_1e0;
              pcStack_15c = pcVar18;
            }
            iVar9 = RK_MPI_SYS_Init();
            iVar8 = -1;
            if (iVar9 != 0) goto LAB_0001303c;
            *(int *)((int)__s + 0x1c80) = iVar13;
            *(undefined4 *)((int)__s + 0x1c98) = 0;
            *(undefined4 *)((int)__s + 0x1c9c) = 0;
            *(int *)((int)__s + 0x1c88) = local_1ac;
            *(int *)((int)__s + 0x1c8c) = local_1b0;
            *(float *)((int)__s + 0x1c90) = fVar22;
            *(char ***)((int)__s + 0x1c94) = &local_160;
            *(int *)((int)__s + 0x1cd0) = local_1ac;
            *(undefined4 *)((int)__s + 0x1ca8) = 0;
            *(int *)((int)__s + 0x1cd4) = local_1b0;
            *(undefined4 *)((int)__s + 0x1cd8) = 1;
            *(int *)((int)__s + 0x1cac) = local_1d8;
            *(undefined4 *)((int)__s + 0x1cb0) = 1;
            *(undefined4 *)((int)__s + 0x1cf8) = 0;
            *(int *)((int)__s + 0x1d98) = local_1c0;
            *(int *)((int)__s + 0x1d9c) = local_1c4;
            *(undefined4 *)((int)__s + 0x1da4) = 0xffffffff;
            *(undefined4 *)((int)__s + 0x1da8) = 0xffffffff;
            *(float *)((int)__s + 0x1da0) = fVar22;
            *(undefined4 *)((int)__s + 0x1cb4) = 1;
            *(char **)((int)__s + 0x1cb8) = local_1a0;
            *(undefined4 *)((int)__s + 0x1e70) = 0xffffffff;
            *(undefined4 *)((int)__s + 0x1e74) = 0xffffffff;
            *(undefined4 *)((int)__s + 0x1e64) = 0;
            *(undefined4 *)((int)__s + 0x1e90) = 0xffffffff;
            *(undefined4 *)((int)__s + 0x1e94) = 0xffffffff;
            *(int *)((int)__s + 0x1e5c) = local_1c0;
            *(undefined4 *)((int)__s + 0x1e78) = 2;
            *(int *)((int)__s + 0x1e7c) = local_1b4;
            *(int *)((int)__s + 0x1e60) = local_1c4;
            *(undefined4 *)((int)__s + 0x1e6c) = 1;
            *(undefined4 *)((int)__s + 0x1e98) = 2;
            *(undefined4 *)((int)__s + 0x1e68) = 0;
            *(undefined4 *)((int)__s + 0x1e84) = 0;
            *(undefined4 *)((int)__s + 0x1e88) = 0;
            *(undefined4 *)((int)__s + 0x1e8c) = 1;
            *(int *)((int)__s + 0x1e80) = local_1b8;
            iVar12 = (int)__s + 0x1c80;
            iVar9 = FUN_000147fc(iVar12);
            if (iVar9 != 0) {
              RK_LOG(2,DAT_00013ddc,DAT_00013e58,DAT_00013dd8,0x1b0,iVar9);
            }
            if (local_1dc == (char *)0x0) goto LAB_000135e8;
            printf(DAT_00013e5c,local_1dc);
            printf(DAT_00013e60,0);
            iVar9 = local_1cc;
            if (local_1cc == 0) goto LAB_000135dc;
            uStack_12c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
            local_120 = local_1d8;
            local_11c = local_1dc;
            local_110 = 0;
            local_130 = 0;
            local_128 = 0;
            local_118 = 0;
            uStack_10c = 0;
            local_140 = uVar11;
            pcStack_13c = pcVar20;
            uStack_138 = uVar25;
            uStack_134 = uVar21;
            uStack_124 = uStack_12c;
            uStack_114 = uStack_12c;
            uStack_108 = uStack_12c;
            iVar7 = FUN_0001774c(0,iVar7,0,iVar13,&local_160,&local_140);
            if (iVar7 != 0) {
              RK_LOG(2,DAT_00013ddc,DAT_00013e64,DAT_00013dd8,0x1ca);
              return -1;
            }
            RK_LOG(2,DAT_00013ddc,DAT_00013e84,DAT_00013dd8,0x1cd);
            iVar7 = FUN_00017b40(0,local_1bc);
            if (iVar7 == 0) {
              uVar25 = 0x1d4;
              uVar11 = DAT_00013e8c;
            }
            else {
              uVar25 = 0x1d2;
              uVar11 = DAT_00013e88;
            }
            RK_LOG(2,DAT_00013ddc,uVar11,DAT_00013dd8,uVar25);
            goto LAB_000135e8;
          }
          pcVar17 = (char *)*DAT_00013e34;
          pcVar4 = local_1e0;
          pcVar5 = pcVar17;
          pcVar6 = local_19c;
        } while (iVar8 == 0x6f);
        pcVar5 = local_1a8;
        if (iVar8 < 0x70) break;
        if (iVar8 == 0xd4) {
          local_1c0 = atoi(pcVar17);
          pcVar17 = strchr(pcVar17,0x78);
          local_1c4 = atoi(pcVar17 + 1);
        }
        else if (iVar8 < 0xd5) {
          pcVar6 = pcVar17;
          if (iVar8 != 0xcb) {
            if (iVar8 < 0xcc) {
              pcVar18 = pcVar17;
              pcVar6 = local_19c;
              if (iVar8 != 0xb9) goto LAB_00012e18;
            }
            else if (iVar8 == 0xd0) {
              iVar13 = atoi(pcVar17);
              pcVar6 = local_19c;
            }
            else {
              if (iVar8 != 0xd3) goto LAB_00012e18;
              local_1a4 = atoi(pcVar17);
              pcVar6 = local_19c;
            }
          }
        }
        else if (iVar8 == 0xd9) {
          local_194 = atoi(pcVar17);
        }
        else if (iVar8 < 0xda) {
          if (iVar8 == 0xd5) {
            iVar7 = atoi(pcVar17);
            if (iVar7 != 0) {
              if (iVar7 == 1) {
                iVar7 = 0x10;
              }
              else {
                if (iVar7 != 2) {
                  RK_LOG(2,DAT_00013ddc,DAT_00013e50,DAT_00013dd8,0x152);
                  FUN_00013fdc(*param_2);
                  goto LAB_00012ea4;
                }
                iVar7 = 0x20;
              }
            }
          }
          else {
            if (iVar8 != 0xd7) goto LAB_00012e18;
            local_1b4 = atoi(pcVar17);
            pcVar17 = strchr(pcVar17,0x78);
            local_1b8 = atoi(pcVar17 + 1);
          }
        }
        else if (iVar8 == 0xdf) {
          local_190 = atoi(pcVar17);
        }
        else {
          if (iVar8 != 0xe9) goto LAB_00012e18;
          local_1ac = atoi(pcVar17);
          pcVar17 = strchr(pcVar17,0x78);
          local_1b0 = atoi(pcVar17 + 1);
        }
      }
      if (iVar8 != 0x62) break;
      local_18c = atoi(pcVar17);
    }
    if (0x62 < iVar8) {
      if (iVar8 == 0x69) {
        local_1cc = atoi(pcVar17);
      }
      else {
        if (0x69 < iVar8) {
          if (iVar8 == 0x6c) {
            local_198 = atoi(pcVar17);
          }
          else {
            if (iVar8 != 0x6e) goto LAB_00012e18;
            local_1d8 = atoi(pcVar17);
          }
          goto LAB_00012f58;
        }
        if (iVar8 != 100) {
          if (iVar8 != 0x65) goto LAB_00012e18;
          iVar8 = strcmp(pcVar17,DAT_00013e3c);
          if (iVar8 == 0) {
            local_1c8 = 1;
          }
          else {
            iVar8 = strcmp(pcVar17,DAT_00013e40);
            if (iVar8 != 0) {
              iVar8 = strcmp(pcVar17,DAT_00013e44);
              if (iVar8 == 0) {
                local_1c8 = 8;
              }
              else {
                iVar8 = strcmp(pcVar17,DAT_00013e48);
                if (iVar8 != 0) {
                  RK_LOG(2,DAT_00013ddc,DAT_00013e4c,DAT_00013dd8,0x122);
                  return 0;
                }
                local_1c8 = 9;
              }
              local_1d4 = 6;
              uVar15 = DAT_00013e54;
              goto LAB_00012f58;
            }
            local_1c8 = 2;
          }
          local_1d4 = 5;
          uVar15 = DAT_00013df0;
          goto LAB_00012f58;
        }
        dVar19 = atof(pcVar17);
        fVar22 = (float)dVar19;
      }
      goto LAB_00012f58;
    }
    if (iVar8 == 0x46) {
      local_1bc = atoi(pcVar17);
      goto LAB_00012f58;
    }
    if (0x46 < iVar8) {
      pcVar4 = pcVar17;
      if (iVar8 != 0x4c) {
        if (iVar8 != 0x61) goto LAB_00012e18;
        pcVar4 = local_1e0;
        local_1dc = pcVar17;
        if (pcVar17 == (char *)0x0) {
          local_1dc = (char *)param_2[*DAT_00013e38];
          if (local_1dc != (char *)0x0) {
            if (*local_1dc == '-') {
              local_1dc = (char *)0x0;
            }
            else {
              *DAT_00013e38 = *DAT_00013e38 + 1;
            }
          }
        }
      }
      goto LAB_00012f58;
    }
    local_1a0 = pcVar17;
    if (iVar8 == 0x41) goto LAB_00012f58;
  }
LAB_00012e18:
  FUN_00013fdc(*param_2);
  return 0;
LAB_000135dc:
  if (local_1d8 <= iVar9) goto LAB_000135e8;
  iVar13 = FUN_00017424(iVar9,iVar7,0,local_1dc);
  iVar10 = FUN_000179e0(iVar9);
  if (iVar13 != 0 || iVar10 != 0) {
    uVar25 = 0x1bc;
    uVar11 = DAT_00013e68;
    goto LAB_000135c8;
  }
  iVar9 = iVar9 + 1;
  goto LAB_000135dc;
LAB_000135e8:
  puVar16 = DAT_00013e70;
  piVar2 = DAT_00013e6c;
  memset(&local_140,0,0xff);
  iVar7 = FUN_00019568(0x22a);
  pcVar20 = DAT_00013e74;
  iVar13 = 0;
  *piVar2 = iVar7;
  while( true ) {
    sprintf((char *)&local_140,pcVar20,iVar13);
    uVar11 = FUN_000193a4(*piVar2,&local_140);
    if (local_1d4 == 5) {
      uVar25 = 1;
    }
    else {
      uVar25 = 2;
    }
    *puVar16 = uVar11;
    FUN_000195d8(uVar11,uVar25,0);
    uVar11 = *puVar16;
    uVar23 = FUN_0001e54c();
    uVar24 = FUN_0001e658();
    FUN_0001e690(uVar11,(int)((ulonglong)uVar24 >> 0x20),(int)uVar23,
                 (int)((ulonglong)uVar23 >> 0x20),uVar24);
    if (iVar13 == 1) break;
    iVar13 = 1;
    puVar16 = puVar16 + 1;
  }
  pvVar14 = __s;
  for (iVar7 = 0; iVar7 < local_1d8; iVar7 = iVar7 + 1) {
    *(int *)((int)pvVar14 + 0x1c) = iVar7;
    *(int *)((int)pvVar14 + 0x20) = iVar7;
    *(int *)((int)pvVar14 + 0x10) = local_1ac;
    *(undefined4 *)((int)pvVar14 + 0xdc) = 4;
    *(undefined4 *)((int)pvVar14 + 0xc0) = 0;
    *(int *)((int)pvVar14 + 0x14) = local_1b0;
    *(undefined4 *)((int)pvVar14 + 0xa8) = 0;
    *(undefined4 *)((int)pvVar14 + 0xb4) = 0;
    *(int *)((int)pvVar14 + 0x24) = local_190;
    *(undefined4 *)((int)pvVar14 + 0xc4) = 0xffffffff;
    *(undefined4 *)((int)pvVar14 + 200) = 0xffffffff;
    *(int *)((int)pvVar14 + 8) = local_1cc;
    *(int *)((int)pvVar14 + 0xd0) = local_194;
    FUN_00014304(pvVar14);
    pvVar14 = (void *)((int)pvVar14 + 0x390);
  }
  iVar7 = 0;
  pvVar14 = __s;
  while ((iVar7 < local_1d8 && (*(int *)((int)pvVar14 + 8) != 0))) {
    puVar16 = (undefined4 *)((int)pvVar14 + 0x20);
    pvVar14 = (void *)((int)pvVar14 + 0x390);
    iVar13 = RK_MPI_VI_StartPipe(*puVar16);
    if (iVar13 != 0) {
      RK_LOG(2,DAT_00013ddc,DAT_00013e90,DAT_00013dd8,0x206,iVar13,
             *(undefined4 *)((int)__s + iVar7 * 0x390 + 0x20));
      goto LAB_00013850;
    }
    iVar7 = iVar7 + 1;
  }
  iVar7 = FUN_00014ab4(iVar12);
  uVar3 = DAT_00013e94;
  if (iVar7 == 0) {
    *(undefined4 *)((int)__s + 0x1f48) = 0;
    *(int *)((int)__s + 0x1f14) = local_1c0;
    *(int *)((int)__s + 0x1f18) = local_1c4;
    *(int *)((int)__s + 0x1f1c) = local_1bc;
    *(int *)((int)__s + 0x1f20) = local_1bc << 1;
    *(int *)((int)__s + 0x1f24) = local_18c;
    *(int *)((int)__s + 8000) = local_1d4;
    *(undefined4 *)((int)__s + 0x1f44) = local_1c8;
    *(undefined4 *)((int)__s + 0x2174) = DAT_00013e98;
    *(int *)((int)__s + 0x1f38) = local_198;
    *(char **)((int)__s + 0x2180) = local_1a8;
    *(undefined4 *)((int)__s + 0x1f30) = 3;
    if (local_1d4 == 5) {
      uVar11 = 0x42;
    }
    else {
      uVar11 = 0;
    }
    *(uint *)((int)__s + 0x1f34) =
         (uint)((ulonglong)uVar3 * (ulonglong)(uint)(local_1c4 * local_1c0) >> 0x21);
    *(undefined4 *)((int)__s + 0x2184) = 1;
    *(undefined4 *)((int)__s + 0x1fc4) = 1;
    *(undefined4 *)((int)__s + 0x1f64) = uVar11;
    FUN_0001594c((int)__s + 0x1f00);
    *(undefined4 *)((int)__s + 0x21d8) = 1;
    *(int *)((int)__s + 0x21a4) = local_1b4;
    *(int *)((int)__s + 0x21b0) = local_1bc << 1;
    *(int *)((int)__s + 0x21a8) = local_1b8;
    *(undefined4 *)((int)__s + 0x2414) = 1;
    *(undefined4 *)((int)__s + 0x2254) = 1;
    *(int *)((int)__s + 0x21ac) = local_1bc;
    *(undefined4 *)((int)__s + 0x21c0) = 3;
    *(undefined4 *)((int)__s + 0x21f4) = uVar11;
    *(int *)((int)__s + 0x21d0) = local_1d4;
    *(undefined4 *)((int)__s + 0x21d4) = local_1c8;
    *(undefined4 *)((int)__s + 0x2404) = DAT_00013e98;
    *(int *)((int)__s + 0x21c8) = local_198;
    *(char **)((int)__s + 0x2410) = local_1a8;
    lVar1 = (ulonglong)uVar3 * (ulonglong)(uint)(local_1b8 * local_1b4);
    *(uint *)((int)__s + 0x21c4) = (uint)((ulonglong)lVar1 >> 0x21);
    *(undefined4 *)((int)__s + 0x21b4) = 0x400;
    FUN_0001594c((int)__s + 0x2190,extraout_r1,(int)lVar1);
    local_180 = iVar7;
    local_17c[0] = iVar7;
    iVar7 = FUN_0001507c(local_19c,&local_180,local_17c);
    if (iVar7 != 0) {
      RK_LOG(2,DAT_00013ddc,DAT_00013e9c,DAT_00013dd8,0x24d);
      local_180 = 0x80;
      local_17c[0] = 0x80;
    }
    *(undefined4 *)((int)__s + 0x2450) = 4;
    *(undefined4 *)((int)__s + 0x2474) = 0;
    *(undefined4 *)((int)__s + 0x2478) = 0;
    *(undefined4 *)((int)__s + 0x2454) = 0;
    *(undefined4 *)((int)__s + 0x2460) = 0;
    *(undefined4 *)((int)__s + 0x2458) = *(undefined4 *)((int)__s + 0x1f48);
    *(uint *)((int)__s + 0x245c) = *(uint *)((int)__s + 0x1f14) >> 1;
    *(int *)((int)__s + 0x2464) = local_180;
    *(int *)((int)__s + 0x2468) = local_17c[0];
    *(undefined4 *)((int)__s + 0x2424) = DAT_00013ea0;
    *(undefined4 *)((int)__s + 0x2428) = 0x80;
    *(undefined4 *)((int)__s + 0x242c) = 0x80;
    *(char **)((int)__s + 0x2420) = local_19c;
    *(undefined4 *)((int)__s + 0x2470) = 1;
    if (local_1a4 != 0) {
      FUN_00015358((int)__s + 0x2420);
    }
    local_164 = 0;
    puVar16 = (undefined4 *)((int)__s + 0x1c);
    while( true ) {
      if (local_1d8 <= local_164) break;
      local_17c[2] = *puVar16;
      iVar7 = local_164 + 1;
      local_170 = puVar16[2];
      local_17c[1] = 8;
      local_16c = 0x11;
      local_168 = *(undefined4 *)((int)__s + 0x1c98);
      FUN_00014fec(local_17c + 1,&local_16c);
      local_164 = iVar7;
      puVar16 = puVar16 + 0xe4;
    }
    local_170 = *(undefined4 *)((int)__s + 0x1c9c);
    local_164 = *(undefined4 *)((int)__s + 0x1f48);
    local_17c[1] = 0x11;
    local_16c = 4;
    local_168 = 0;
    local_17c[2] = *(undefined4 *)((int)__s + 0x1c98);
    FUN_00014fec(local_17c + 1,&local_16c);
    pcVar20 = DAT_00013ea4;
    local_17c[1] = 0x11;
    local_17c[2] = *(undefined4 *)((int)__s + 0x1c98);
    local_16c = 4;
    local_168 = 0;
    local_170 = 1;
    local_164 = *(undefined4 *)((int)__s + 0x21d8);
    FUN_00014fec(local_17c + 1,&local_16c);
    printf(DAT_00013ea8,DAT_00013e78);
    while (*pcVar20 == '\0') {
      sleep(1);
    }
    printf(DAT_00013eac,DAT_00013e78);
    if (local_1a4 != 0) {
      FUN_000158bc((int)__s + 0x2420);
    }
    *DAT_00013eb0 = 1;
    pthread_join(*(pthread_t *)((int)__s + 0x2170),(void **)0x0);
    local_17c[1] = 0x11;
    local_17c[2] = *(undefined4 *)((int)__s + 0x1c98);
    local_16c = 4;
    local_168 = 0;
    local_170 = *(undefined4 *)((int)__s + 0x1c9c);
    local_164 = *(undefined4 *)((int)__s + 0x1f48);
    iVar7 = FUN_00015034(local_17c + 1,&local_16c);
    if (iVar7 != 0) {
      RK_LOG(2,DAT_00013ddc,DAT_00013eb4,DAT_00013dd8,0x297,iVar7);
    }
    FUN_0001605c((int)__s + 0x1f00);
    __th = *(pthread_t *)((int)__s + 0x2400);
    DAT_00013eb0[1] = 1;
    pthread_join(__th,(void **)0x0);
    local_17c[1] = 0x11;
    local_17c[2] = *(undefined4 *)((int)__s + 0x1c98);
    local_16c = 4;
    local_168 = 0;
    local_164 = *(int *)((int)__s + 0x21d8);
    local_170 = 1;
    iVar7 = FUN_00015034(local_17c + 1,&local_16c);
    if (iVar7 != 0) {
      RK_LOG(2,DAT_00013ddc,DAT_00013eb4,DAT_00013dd8,0x2a7,iVar7);
    }
    FUN_0001605c((int)__s + 0x2190);
    if (*DAT_00013e6c != 0) {
      FUN_00019bf8();
    }
    puVar16 = (undefined4 *)((int)__s + 0x1c);
    for (iVar7 = 0; iVar7 < local_1d8; iVar7 = iVar7 + 1) {
      local_17c[2] = *puVar16;
      local_17c[1] = 8;
      local_170 = puVar16[2];
      local_16c = 0x11;
      local_168 = *(undefined4 *)((int)__s + 0x1c98);
      local_164 = iVar7;
      FUN_00015034(local_17c + 1,&local_16c);
      puVar16 = puVar16 + 0xe4;
    }
    FUN_00014cc4(iVar12);
    FUN_00014d98(iVar12);
  }
  else {
    printf(DAT_00013e7c,DAT_00013e78,0x20e);
  }
  uVar21 = DAT_00013e80;
  uVar25 = DAT_00013ddc;
  uVar11 = DAT_00013dd8;
  iVar7 = 0;
  for (pvVar14 = __s; (iVar7 < local_1d8 && (*(int *)((int)pvVar14 + 8) != 0));
      pvVar14 = (void *)((int)pvVar14 + 0x390)) {
    iVar13 = RK_MPI_VI_StopPipe(*(undefined4 *)((int)pvVar14 + 0x20));
    if (iVar13 != 0) {
      RK_LOG(2,uVar25,uVar21,uVar11,0x2c3,iVar13,*(undefined4 *)((int)pvVar14 + 0x20));
    }
    iVar7 = iVar7 + 1;
  }
LAB_00013850:
  for (local_1e0 = (char *)0x0; (int)local_1e0 < local_1d8; local_1e0 = (char *)((int)local_1e0 + 1)
      ) {
    FUN_00014788((void *)((int)local_1e0 * 0x390 + (int)__s));
  }
LAB_0001303c:
  RK_MPI_SYS_Exit();
  if (local_1dc != (char *)0x0) {
    local_1d0 = 0;
    if (local_1cc == 0) {
      for (; local_1d0 < local_1d8; local_1d0 = local_1d0 + 1) {
        iVar8 = FUN_000178d8(local_1d0);
        if (iVar8 != 0) {
          uVar25 = 0x2d5;
          uVar11 = DAT_00013ebc;
          iVar9 = iVar8;
          goto LAB_000135c8;
        }
      }
    }
    else {
      if (local_1cc != 1) {
        uVar25 = 0x2e0;
        uVar11 = DAT_00013ec0;
        iVar9 = local_1cc;
LAB_000135c8:
        RK_LOG(2,DAT_00013ddc,uVar11,DAT_00013dd8,uVar25,iVar9);
        return iVar8;
      }
      iVar8 = FUN_00017960(0);
      if (iVar8 != 0) {
        uVar25 = 0x2dc;
        uVar11 = DAT_00013eb8;
        iVar9 = iVar8;
        goto LAB_000135c8;
      }
    }
  }
  pthread_mutex_destroy(DAT_00013de0);
LAB_00012ea4:
  free(__s);
  return 0;
}



/* ===== entry @ 00013ec4 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_0003c0b4)
            (DAT_00013ef8,param_2,&stack0x00000004,DAT_00013efc,DAT_00013ef4,param_1);
  return;
}



/* ===== FUN_00013f00 @ 00013f00 size=32 ===== */

void FUN_00013f00(void)

{
  if (DAT_00013f24 == DAT_00013f20) {
    return;
  }
  if (DAT_00013f28 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00013f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00013f28)();
  return;
}



/* ===== _FINI_0 @ 00013f64 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00013fa0;
  if (*DAT_00013fa0 != '\0') {
    return;
  }
  FUN_00013f00();
  if (DAT_00013fa4 != 0) {
    __deregister_frame_info(DAT_00013fa8);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00013fac size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00013fd0 != 0) {
    __register_frame_info(DAT_00013fd8,DAT_00013fd4);
  }
  if ((DAT_00013f5c - DAT_00013f58 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00013f60 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00013f54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00013f60)();
  return;
}



/* ===== FUN_00013fdc @ 00013fdc size=208 ===== */

void FUN_00013fdc(undefined4 param_1)

{
  puts(DAT_000140ac);
  printf(DAT_000140b0,param_1);
  puts(DAT_000140b4);
  puts(DAT_000140b8);
  puts(DAT_000140bc);
  puts(DAT_000140c0);
  puts(DAT_000140c4);
  puts(DAT_000140c8);
  puts(DAT_000140cc);
  puts(DAT_000140d0);
  puts(DAT_000140d4);
  puts(DAT_000140d8);
  puts(DAT_000140dc);
  puts(DAT_000140e0);
  puts(DAT_000140e4);
  puts(DAT_000140e8);
  puts(DAT_000140ec);
  puts(DAT_000140f0);
  puts(DAT_000140f4);
  puts(DAT_000140f8);
  puts(DAT_000140fc);
  puts(DAT_00014100);
  puts(DAT_00014104);
  puts(DAT_00014108);
  return;
}



/* ===== FUN_0001410c @ 0001410c size=412 ===== */

undefined4 FUN_0001410c(int param_1)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  undefined4 uVar2;
  FILE *__s;
  int iVar3;
  int iVar4;
  int iVar5;
  void *local_12c;
  char acStack_128 [260];
  
  local_12c = (void *)0x0;
  memset(acStack_128,0,0x100);
  __s = (FILE *)0x0;
  if (*(int *)(param_1 + 0x280) != 0) {
    snprintf(acStack_128,0x100,DAT_000142a8,*(int *)(param_1 + 0x280),
             *(undefined4 *)(param_1 + 0x48));
    __s = fopen64(acStack_128,DAT_000142ac);
    if (__s == (FILE *)0x0) {
      printf(DAT_000142b0,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x280));
      return 0;
    }
  }
  uVar2 = DAT_000142cc;
  __mutex = DAT_000142c8;
  iVar1 = DAT_000142c4;
  iVar5 = 0;
  do {
    if (*(char *)(iVar1 + *(int *)(param_1 + 0x48)) != '\0') {
LAB_00014280:
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
      return 0;
    }
    iVar3 = FUN_00015f84(param_1,&local_12c);
    iVar4 = iVar5;
    if (iVar3 == 0) {
      if (*(int *)(param_1 + 0x38) <= iVar5 && 0 < *(int *)(param_1 + 0x38)) {
        FUN_0001600c(param_1);
        goto LAB_00014280;
      }
      if (__s != (FILE *)0x0) {
        fwrite(local_12c,1,*(size_t *)(*(int *)(param_1 + 0xe0) + 4),__s);
        fflush(__s);
      }
      pthread_mutex_lock(__mutex);
      iVar4 = *(int *)(param_1 + 0xe0);
      FUN_0001d0e0(*(undefined4 *)(DAT_000142b4 + *(int *)(param_1 + 0x48) * 4),local_12c,
                   *(undefined4 *)(iVar4 + 4),DAT_000142b4,*(undefined4 *)(iVar4 + 8),
                   *(undefined4 *)(iVar4 + 0xc));
      FUN_0001c534(*DAT_000142b8);
      pthread_mutex_unlock(__mutex);
      iVar4 = iVar5 + 1;
      RK_LOG(5,uVar2,DAT_000142bc,DAT_000142c0,0xb0,*(undefined4 *)(param_1 + 0x48),iVar5,
             *(undefined4 *)(*(int *)(param_1 + 0xe0) + 4));
      FUN_0001600c(param_1);
    }
    usleep(1000);
    iVar5 = iVar4;
  } while( true );
}



/* ===== FUN_00014304 @ 00014304 size=764 ===== */

int FUN_00014304(int *param_1)

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
  if (iVar1 == DAT_00014600) {
    iVar1 = RK_MPI_VI_SetDevAttr(param_1[7],param_1 + 0x10);
    if (iVar1 == 0) goto LAB_0001437c;
    uVar7 = 0x29;
    uVar5 = DAT_00014604;
  }
  else {
    RK_LOG(2,DAT_0001460c,DAT_00014610,DAT_00014608,0x2d);
LAB_0001437c:
    iVar1 = RK_MPI_VI_GetDevIsEnable(param_1[7]);
    if (iVar1 == 0) {
      RK_LOG(2,DAT_0001460c,DAT_00014620,DAT_00014608,0x42);
LAB_00014438:
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
            uVar5 = DAT_00014628;
LAB_000144b8:
            RK_LOG(2,DAT_0001460c,uVar5,DAT_00014608,uVar7,uVar6);
            return -1;
          }
          local_1c = 1;
          local_14 = param_1[4] * uVar4 * 3 >> 1;
          uStack_18 = uVar4;
          uVar6 = RK_MPI_VI_SetChnWrapBufAttr(param_1[8],param_1[9],&local_1c);
          if (uVar6 != 0) {
            uVar7 = 0x59;
            uVar5 = DAT_0001462c;
            goto LAB_000144b8;
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
            uVar5 = DAT_00014638;
            goto LAB_000145f8;
          }
          uVar7 = 0x6d;
          uVar5 = DAT_00014634;
          goto LAB_000143ec;
        }
        RK_LOG(2,DAT_0001460c,DAT_00014630,DAT_00014608,0x66,iVar1,param_1[8],param_1[9]);
      }
      else {
        uVar7 = 0x4a;
        uVar5 = DAT_00014624;
LAB_000143ec:
        RK_LOG(2,DAT_0001460c,uVar5,DAT_00014608,uVar7,iVar1);
      }
      iVar1 = RK_MPI_VI_DisableDev(param_1[7]);
      uVar7 = 0x7d;
      uVar5 = DAT_0001461c;
    }
    else {
      iVar1 = RK_MPI_VI_EnableDev(param_1[7]);
      if (iVar1 == 0) {
        param_1[0x17] = 1;
        param_1[0x18] = param_1[8];
        iVar1 = RK_MPI_VI_SetDevBindPipe(param_1[7],param_1 + 0x17);
        if (iVar1 == 0) goto LAB_00014438;
        uVar7 = 0x3e;
        uVar5 = DAT_00014618;
        goto LAB_000143ec;
      }
      uVar7 = 0x36;
      uVar5 = DAT_00014614;
    }
  }
  uVar2 = 2;
  iVar3 = iVar1;
LAB_000145f8:
  RK_LOG(uVar2,DAT_0001460c,uVar5,DAT_00014608,uVar7,iVar3);
  return iVar1;
}



/* ===== FUN_0001463c @ 0001463c size=236 ===== */

undefined4 FUN_0001463c(int param_1,undefined4 *param_2)

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
    RK_LOG(5,DAT_0001472c,DAT_00014728,DAT_00014730,0x92,*(undefined4 *)(param_1 + 0x1c),
           *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),uVar2,
           *(undefined4 *)(param_1 + 0x380),*(undefined4 *)(param_1 + 900),
           *(undefined4 *)(param_1 + 0x368),*(undefined4 *)(param_1 + 0x374),
           *(undefined4 *)(param_1 + 0x378),*(undefined4 *)(param_1 + 0x36c),
           *(undefined4 *)(param_1 + 0x37c));
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
    RK_LOG(2,DAT_0001472c,DAT_00014734,DAT_00014730,0x94,*(undefined4 *)(param_1 + 0x1c),iVar1);
  }
  return uVar2;
}



/* ===== FUN_00014738 @ 00014738 size=68 ===== */

undefined4 FUN_00014738(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = RK_MPI_VI_ReleaseChnFrame
                    (*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),param_1 + 0x318
                     ,param_4,param_1,param_2,param_3);
  if (iVar1 != 0) {
    RK_LOG(2,DAT_00014784,DAT_00014780,DAT_0001477c,0xa0,iVar1);
  }
  return 0;
}



/* ===== FUN_00014788 @ 00014788 size=104 ===== */

uint FUN_00014788(int param_1,undefined4 param_2,undefined4 param_3)

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
    RK_LOG(2,DAT_000147f8,DAT_000147f4,DAT_000147f0,0xaf,uVar1);
  }
  return uVar1;
}



/* ===== FUN_000147fc @ 000147fc size=652 ===== */

int FUN_000147fc(int *param_1)

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
    RK_LOG(2,DAT_00014a90,DAT_00014a8c,DAT_00014a88,0x25,iVar2);
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
    uVar1 = DAT_00014a98;
    uVar14 = DAT_00014a90;
    uVar5 = DAT_00014a88;
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
          RK_LOG(2,DAT_00014a90,DAT_00014aa4,DAT_00014a88,0x3b);
          return -1;
        }
        RK_LOG(5,uVar14,uVar1,uVar5,0x3f,iVar2,uVar7,pvVar3);
        uVar6 = *(undefined4 *)(param_1[5] + uVar7 * 4);
        local_48 = local_9c[0];
        uStack_44 = 0;
        uVar15 = uVar7;
        local_60 = uVar6;
        uStack_3c = uVar6;
        RK_LOG(5,uVar14,DAT_00014aa8,uVar5,0x44,param_1[5],uVar7,uVar6);
        puVar4 = puVar8 + 4;
        puVar8 = puVar8 + 1;
        iVar2 = RK_MPI_SYS_CreateMB(puVar4,&local_60);
        if (iVar2 != 0) {
          RK_LOG(2,DAT_00014a90,DAT_00014aac,DAT_00014a88,0x48,iVar2,uVar15,uVar6);
          return iVar2;
        }
      }
      RK_LOG(2,DAT_00014a90,DAT_00014a9c,DAT_00014a88,0x4c);
      iVar2 = RK_MPI_AVS_GetFinalLut(param_1[6],&local_80);
      uVar7 = 0;
      if (iVar2 == 0) {
        for (; uVar7 < (uint)param_1[0xb]; uVar7 = uVar7 + 1) {
          RK_MPI_SYS_Free(*(undefined4 *)((int)&local_70 + uVar7 * 4));
        }
        goto LAB_00014a68;
      }
      uVar14 = 0x4f;
      uVar5 = DAT_00014aa0;
    }
    else {
      uVar14 = 0x32;
      uVar5 = DAT_00014a94;
    }
    RK_LOG(2,DAT_00014a90,uVar5,DAT_00014a88,uVar14,iVar2);
  }
  else {
LAB_00014a68:
    RK_LOG(2,DAT_00014a90,DAT_00014ab0,DAT_00014a88,0x57);
    iVar2 = 0;
  }
  return iVar2;
}



/* ===== FUN_00014ab4 @ 00014ab4 size=300 ===== */

int FUN_00014ab4(int param_1,undefined4 param_2,undefined4 param_3)

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
            uVar2 = DAT_00014bf0;
            goto LAB_00014b70;
          }
          iVar1 = RK_MPI_AVS_EnableChn(*(undefined4 *)(param_1 + 0x18),iVar4);
          if (iVar1 != 0) {
            uVar5 = 0x75;
            uVar2 = DAT_00014bf4;
            goto LAB_00014b70;
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
      uVar2 = DAT_00014bf8;
LAB_00014b70:
      RK_LOG(2,DAT_00014be8,uVar2,DAT_00014be4,uVar5,iVar1);
      return iVar1;
    }
    uVar5 = 0x65;
    uVar2 = DAT_00014bec;
  }
  else {
    uVar5 = 0x60;
    uVar2 = DAT_00014be0;
  }
  RK_LOG(2,DAT_00014be8,uVar2,DAT_00014be4,uVar5,2);
  return -1;
}



/* ===== FUN_00014bfc @ 00014bfc size=108 ===== */

undefined4 FUN_00014bfc(int param_1,undefined4 *param_2)

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
    RK_LOG(2,DAT_00014c6c,DAT_00014c68,DAT_00014c70,0x8d,*(undefined4 *)(param_1 + 0x18),iVar1);
  }
  return 0;
}



/* ===== FUN_00014c74 @ 00014c74 size=68 ===== */

undefined4 FUN_00014c74(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = RK_MPI_AVS_ReleaseChnFrame
                    (*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),param_1 + 0x220
                     ,param_4,param_1,param_2,param_3);
  if (iVar1 != 0) {
    RK_LOG(2,DAT_00014cc0,DAT_00014cbc,DAT_00014cb8,0x98,iVar1);
  }
  return 0;
}



/* ===== FUN_00014cc4 @ 00014cc4 size=196 ===== */

int FUN_00014cc4(int param_1)

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
      RK_LOG(2,DAT_00014d90,DAT_00014d94,DAT_00014d88,0xab,iVar1);
    }
  }
  else {
    RK_LOG(2,DAT_00014d90,DAT_00014d8c,DAT_00014d88,0xa2,iVar1);
  }
  return iVar1;
}



/* ===== FUN_00014d98 @ 00014d98 size=140 ===== */

int FUN_00014d98(int *param_1,undefined4 param_2,undefined4 param_3)

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
    RK_LOG(2,DAT_00014e2c,DAT_00014e28,DAT_00014e24,0xb9,iVar1,param_3);
  }
  return iVar1;
}



/* ===== FUN_00014e30 @ 00014e30 size=368 ===== */

void FUN_00014e30(undefined4 param_1,int param_2)

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
  
  piVar2 = DAT_00014fc0;
  piVar1 = DAT_00014fbc;
  iVar7 = *DAT_00014fbc;
  *DAT_00014fc0 = *DAT_00014fc0 + param_2;
  ptVar4 = DAT_00014fc8;
  if (iVar7 == 0) {
    gettimeofday(DAT_00014fc4,(__timezone_ptr_t)0x0);
  }
  else if (iVar7 == 100) {
    gettimeofday(DAT_00014fc8,(__timezone_ptr_t)0x0);
    ptVar3 = DAT_00014fc4;
    printf(DAT_00014fcc,param_1);
    printf(DAT_00014fd0,ptVar3->tv_sec,ptVar3->tv_usec);
    printf(DAT_00014fd4,ptVar4->tv_sec,ptVar4->tv_usec);
    piVar5 = DAT_00014fd8;
    iVar7 = ptVar4->tv_sec - ptVar3->tv_sec;
    iVar6 = ptVar4->tv_usec - ptVar3->tv_usec;
    *DAT_00014fd8 = iVar7;
    piVar5[1] = iVar6;
    if (iVar6 < 0) {
      *piVar5 = iVar7 + -1;
      piVar5[1] = iVar6 + 1000000;
    }
    dVar9 = (double)VectorSignedToFloat(*piVar5,(byte)(in_fpscr >> 0x16) & 3);
    dVar10 = (double)VectorSignedToFloat(piVar5[1],(byte)(in_fpscr >> 0x16) & 3);
    fVar8 = (float)VectorSignedToFloat(*piVar2,(byte)(in_fpscr >> 0x16) & 3);
    dVar9 = dVar10 / DAT_00014fa0 + dVar9 * DAT_00014fa0;
    printf(DAT_00014fdc,100,SUB84(dVar9,0),(int)((ulonglong)dVar9 >> 0x20),
           ((double)(fVar8 * 8.0 * DAT_00014fb8) / dVar9) * DAT_00014fa8 * DAT_00014fa8);
    printf(DAT_00014fe0);
    printf(DAT_00014fe4);
    puts(DAT_00014fe8);
    *piVar1 = 0;
    *piVar2 = 0;
    return;
  }
  *piVar1 = iVar7 + 1;
  return;
}



/* ===== FUN_00014fec @ 00014fec size=60 ===== */

int FUN_00014fec(void)

{
  int iVar1;
  
  iVar1 = RK_MPI_SYS_Bind();
  if (iVar1 != 0) {
    RK_LOG(2,DAT_00015030,DAT_0001502c,DAT_00015028,0x4d,iVar1);
  }
  return iVar1;
}



/* ===== FUN_00015034 @ 00015034 size=60 ===== */

int FUN_00015034(void)

{
  int iVar1;
  
  iVar1 = RK_MPI_SYS_UnBind();
  if (iVar1 != 0) {
    RK_LOG(2,DAT_00015078,DAT_00015074,DAT_00015070,0x59,iVar1);
  }
  return iVar1;
}



/* ===== FUN_0001507c @ 0001507c size=312 ===== */

undefined4 FUN_0001507c(char *param_1,undefined4 *param_2,undefined4 *param_3)

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
    RK_LOG(2,DAT_000151bc,DAT_000151b4,DAT_000151b8,0x69);
  }
  else {
    __stream = fopen64(param_1,DAT_000151c0);
    if (__stream == (FILE *)0x0) {
      RK_LOG(2,DAT_000151bc,DAT_000151c4,DAT_000151b8,0x6f,param_1);
    }
    else {
      fread(&local_46,1,2,__stream);
      if (local_46 == 0x4d42) {
        fseek(__stream,0xc,1);
        fread(auStack_44,1,0x2c,__stream);
        uVar2 = DAT_000151cc;
        uVar1 = DAT_000151bc;
        *param_2 = local_40;
        *param_3 = local_3c;
        RK_LOG(2,uVar1,uVar2,DAT_000151b8,0x7e,*param_2,local_3c);
        fclose(__stream);
        return 0;
      }
      RK_LOG(2,DAT_000151bc,DAT_000151c8,DAT_000151b8,0x75);
      fclose(__stream);
    }
  }
  return 0xffffffff;
}



/* ===== FUN_000151d0 @ 000151d0 size=72 ===== */

undefined4 FUN_000151d0(undefined4 param_1,undefined4 param_2)

{
  char acStack_110 [260];
  
  system(DAT_00015218);
  sprintf(acStack_110,DAT_0001521c,param_1,param_2);
  system(acStack_110);
  system(DAT_00015220);
  return 0;
}



/* ===== FUN_00015224 @ 00015224 size=288 ===== */

undefined4 FUN_00015224(char *param_1,char *param_2,size_t param_3,undefined4 *param_4)

{
  FILE *__stream;
  FILE *__stream_00;
  size_t sVar1;
  uint unaff_r4;
  
  __stream = fopen64(param_1,DAT_00015344);
  __stream_00 = fopen64(param_2,DAT_00015344);
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
    RK_LOG(2,DAT_00015350,DAT_00015354,DAT_00015348,0xa0,param_1,param_2);
  }
  else {
    RK_LOG(2,DAT_00015350,DAT_0001534c,DAT_00015348,0x9a,param_1,param_2,__stream,__stream_00);
    if (__stream == (FILE *)0x0) goto LAB_000152b0;
  }
  fclose(__stream);
LAB_000152b0:
  if (__stream_00 != (FILE *)0x0) {
    fclose(__stream_00);
  }
  return 0xffffffff;
}



/* ===== FUN_00015358 @ 00015358 size=1276 ===== */

undefined4 FUN_00015358(undefined4 *param_1)

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
LAB_000155d4:
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
      goto LAB_000155d4;
    }
    if (iVar10 != 0) {
      uVar5 = 0x91;
      uVar6 = DAT_000158b8;
      goto LAB_00015574;
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
    iVar10 = FUN_00017f5c(*param_1,auStack_60,auStack_44);
    if (iVar10 < 0) {
      RK_LOG(2,DAT_0001588c,DAT_00015884,DAT_00015888,0x26);
    }
    switch(param_1[1]) {
    case 0x1000a:
      local_54[0] = 4;
      break;
    default:
      goto switchD_0001541c_caseD_1000b;
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
LAB_00015548:
        RK_LOG(2,DAT_0001588c,DAT_00015898,DAT_00015888,uVar6);
switchD_0001541c_caseD_1000b:
        uVar5 = 0x75;
        iVar10 = -1;
        uVar6 = DAT_0001589c;
        goto LAB_00015574;
      }
      FUN_000168f8(pvVar1,iVar12,iVar10,iVar12,iVar10,param_1[1],0);
      param_1[5] = param_1[0x11];
      uVar7 = param_1[0x12];
    }
    else {
      pvVar1 = malloc(local_3c * local_40 * 4);
      param_1[8] = pvVar1;
      if (pvVar1 == (void *)0x0) {
        uVar6 = 0x51;
        goto LAB_00015548;
      }
      FUN_00018494(*param_1,local_54,pvVar1);
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
    uVar6 = DAT_00015890;
    goto LAB_000154f8;
  }
  puVar11 = param_1 + 0xc;
  puVar13 = param_1 + 0x11c;
  iVar10 = RK_MPI_RGN_AttachToChn(param_1[0x15],puVar11,puVar13);
  if (iVar10 != 0) {
    uVar5 = param_1[0x15];
    uVar15 = 0x9d;
    uVar6 = DAT_000158a0;
    goto LAB_000154f8;
  }
  if (param_1[0x16] == 0) {
    iVar10 = RK_MPI_RGN_SetBitMap(param_1[0x15],param_1 + 4);
    if (iVar10 != 0) {
      RK_LOG(2,DAT_0001588c,DAT_000158a4,DAT_00015894,0xa6,iVar10);
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
    uVar6 = DAT_000158a8;
    goto LAB_000154f8;
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
    uVar6 = DAT_0001588c;
    uVar15 = DAT_000158b4;
    uVar5 = DAT_00015894;
LAB_0001578c:
    RK_LOG(2,uVar6,uVar15,uVar5,uVar16,uVar9,uVar8,uVar4,uVar3,uVar2,uVar14);
  }
  else {
    if (iVar10 != 3) {
      if (iVar10 != 0) {
        uVar5 = 0xee;
        uVar6 = DAT_000158b8;
LAB_00015574:
        RK_LOG(2,DAT_0001588c,uVar6,DAT_00015894,uVar5,iVar10);
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
      uVar15 = DAT_000158ac;
      uVar5 = DAT_00015894;
      uVar6 = DAT_0001588c;
      uVar16 = 0xd0;
      param_1[0x120] = uVar2;
      param_1[0x122] = uVar14;
      goto LAB_0001578c;
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
  uVar6 = DAT_000158b0;
LAB_000154f8:
  RK_LOG(2,DAT_0001588c,uVar6,DAT_00015894,uVar15,uVar5,iVar10);
  return 0xffffffff;
}



/* ===== FUN_000158bc @ 000158bc size=128 ===== */

undefined4 FUN_000158bc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
    uVar2 = DAT_00015948;
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x54);
    uVar4 = 0x102;
    uVar2 = DAT_0001593c;
  }
  RK_LOG(2,DAT_00015944,uVar2,DAT_00015940,uVar4,uVar3,iVar1);
  return 0xffffffff;
}



/* ===== FUN_0001594c @ 0001594c size=1268 ===== */

int FUN_0001594c(int *param_1)

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
    RK_LOG(2,DAT_00015e40,DAT_00015e50,DAT_00015e48,0x54);
    param_1[0x27] = 5;
    param_1[0x13] = 0xf;
    param_1[0x20] = 0;
    *(undefined1 *)(param_1 + 0x21) = 0;
    param_1[0x26] = 0;
    goto LAB_00015a0c;
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
    goto LAB_00015a0c;
  }
  if (iVar3 == 6) {
    param_1[0x13] = 0xc;
    if (iVar5 != 8) {
      bVar7 = iVar5 == 9;
      goto LAB_000159b8;
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
      goto LAB_00015a0c;
    }
    bVar7 = iVar5 == 2;
LAB_000159b8:
    if (!bVar7) goto LAB_00015a0c;
  }
  param_1[0x27] = iVar5;
  param_1[0x2c] = 1;
  param_1[0x28] = param_1[8];
  param_1[0x2d] = param_1[9];
  param_1[0x2a] = 1;
  param_1[0x2b] = param_1[7];
  param_1[0x29] = param_1[7];
LAB_00015a0c:
  uVar4 = DAT_00015e40;
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
  uVar8 = DAT_00015e44;
  if (iVar5 == 0) {
    iVar5 = 3;
  }
  param_1[0x1f] = iVar5;
  RK_LOG(2,uVar4,uVar8,DAT_00015e48,0x81,param_1[0x12],iVar5);
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
        printf(DAT_00015e54);
      }
    }
    if (param_1[2] != 0) {
      local_110 = param_1[4];
      local_10c = 0;
      local_114 = 1;
      local_118 = 1;
      iVar3 = RK_MPI_VENC_SetChnBufWrapAttr(param_1[0x12],&local_114);
      if (iVar3 != 0) {
        RK_LOG(2,DAT_00015e40,DAT_00015e58,DAT_00015e48,0xa1,iVar3,iVar5);
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
                RK_LOG(2,DAT_00015e40,DAT_00015e68,DAT_00015e48,0xdc,iVar3);
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
          uVar4 = DAT_00015e64;
          iVar9 = param_1[0x12];
        }
        else {
          uVar8 = 0xca;
          uVar4 = DAT_00015e60;
          iVar9 = iVar3;
        }
      }
      else {
        uVar8 = 0xc1;
        uVar4 = DAT_00015e60;
        iVar9 = iVar3;
      }
    }
    else {
      uVar8 = 0xb9;
      uVar4 = DAT_00015e5c;
      iVar9 = iVar3;
    }
  }
  else {
    uVar8 = 0x8a;
    uVar4 = DAT_00015e4c;
    iVar9 = iVar3;
  }
  RK_LOG(2,DAT_00015e40,uVar4,DAT_00015e48,uVar8,iVar9,iVar5);
  return iVar3;
}



/* ===== FUN_00015e6c @ 00015e6c size=264 ===== */

undefined4
FUN_00015e6c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
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
  
  uVar2 = DAT_00015f78;
  uVar1 = DAT_00015f74;
  while( true ) {
    uVar6 = 1;
    iVar4 = RK_MPI_MB_GetMB(*(undefined4 *)(param_1 + 0x278));
    if (iVar4 != 0) break;
    RK_LOG(2,uVar2,DAT_00015f7c,uVar1,0x105,0);
    usleep(2000);
  }
  RK_MPI_MB_Handle2VirAddr();
  uVar3 = DAT_00015f80;
  RK_MPI_SYS_MmzFlushCache(iVar4,0);
  uVar2 = DAT_00015f78;
  uVar1 = DAT_00015f74;
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



/* ===== FUN_00015f84 @ 00015f84 size=124 ===== */

undefined4 FUN_00015f84(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar2 = DAT_00016008;
  uVar1 = DAT_00016004;
  uVar4 = DAT_00016000;
  while (iVar3 = RK_MPI_VENC_GetStream(*(undefined4 *)(param_1 + 0x48),param_1 + 0xe0,2000),
        iVar3 != 0) {
    RK_LOG(2,uVar2,uVar1,uVar4,0x12f,*(undefined4 *)(param_1 + 0x48),iVar3);
  }
  uVar4 = RK_MPI_MB_Handle2VirAddr(**(undefined4 **)(param_1 + 0xe0));
  *param_2 = uVar4;
  return 0;
}



/* ===== FUN_0001600c @ 0001600c size=68 ===== */

int FUN_0001600c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = RK_MPI_VENC_ReleaseStream
                    (*(undefined4 *)(param_1 + 0x48),param_1 + 0xe0,param_3,param_4,param_1,param_2)
  ;
  if (iVar1 != 0) {
    RK_LOG(2,DAT_00016058,DAT_00016054,DAT_00016050,0x13a,iVar1);
  }
  return iVar1;
}



/* ===== FUN_0001605c @ 0001605c size=136 ===== */

int FUN_0001605c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = RK_MPI_VENC_StopRecvFrame(*(undefined4 *)(param_1 + 0x48));
  if (iVar1 == 0) {
    RK_LOG(2,DAT_000160e8,DAT_000160e4,DAT_000160ec,0x147,*(undefined4 *)(param_1 + 0x48),param_3);
    iVar2 = RK_MPI_VENC_DestroyChn(*(undefined4 *)(param_1 + 0x48));
    if (iVar2 != 0) {
      RK_LOG(2,DAT_000160e8,DAT_000160f0,DAT_000160ec,0x14a,iVar2,param_3);
    }
    if (*(void **)(param_1 + 0xe0) != (void *)0x0) {
      free(*(void **)(param_1 + 0xe0));
    }
  }
  return iVar1;
}



/* ===== FUN_000160f4 @ 000160f4 size=192 ===== */

void FUN_000160f4(int *param_1,int *param_2,int *param_3,int param_4,int param_5,byte param_6)

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



/* ===== FUN_000167e0 @ 000167e0 size=128 ===== */

uint FUN_000167e0(uint param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  
  if (param_1 != 0) {
    return param_1;
  }
  bVar1 = param_4 * param_2 - param_3 != 0 && param_3 <= param_4 * param_2;
  if (bVar1) {
    RK_LOG(3,DAT_00016868,DAT_00016860,DAT_00016864,0x1b7,param_3,param_2,param_4);
    RK_LOG(3,DAT_00016868,DAT_0001686c,DAT_00016864,0x1b9,param_3,param_4,param_3 * param_4);
  }
  return (uint)bVar1;
}



/* ===== FUN_00016870 @ 00016870 size=120 ===== */

int FUN_00016870(int param_1,uint param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  
  if ((param_1 == 0) && (uVar1 = (param_2 + param_3 * 8) - 1 & param_3 * -8, param_2 != uVar1)) {
    RK_LOG(3,DAT_000168ec,DAT_000168e8,DAT_000168f0,0x1c6,param_4,param_3,param_4);
    RK_LOG(3,DAT_000168ec,DAT_000168f4,DAT_000168f0,0x1c8,uVar1);
    param_1 = 1;
  }
  return param_1;
}



/* ===== FUN_000168f8 @ 000168f8 size=2632 ===== */

undefined4
FUN_000168f8(char *param_1,uint param_2,uint param_3,uint param_4,int param_5,uint param_6,
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
  
  puVar3 = DAT_00017354;
  uVar4 = param_5 * param_4;
  if (DAT_00017340 < param_6) {
    if (DAT_00017350 < param_6) {
      if (DAT_00017364 <= param_6) {
        if (param_6 <= DAT_00017364 + 3) goto LAB_00016ab8;
        if (param_6 <= DAT_00017364 + 6) goto LAB_00016b50;
      }
      goto LAB_0001695c;
    }
    if (param_6 < DAT_00017350 - 3) {
      if (param_6 <= DAT_00017350 - 6) {
        uVar4 = 0;
        pcVar9 = *(code **)(DAT_00017358 + (param_6 - 0x10000) * 4);
        iVar5 = FUN_000167e0(*DAT_00017354,param_2,param_4,3);
        if (iVar5 != 0) {
          param_4 = param_4 * 3;
          *puVar3 = 1;
        }
        puVar3 = DAT_0001735c;
        iVar5 = FUN_00016870(*DAT_0001735c,param_4,3,DAT_0001736c);
        if (iVar5 != 0) {
          param_4 = param_4 + 0x17 & 0xffffffe8;
          *puVar3 = 1;
        }
        for (; uVar4 != param_3; uVar4 = uVar4 + 1) {
          for (uVar6 = 0; uVar6 != param_2; uVar6 = uVar6 + 1) {
            FUN_000160f4(&local_34,&local_30,auStack_2c,uVar6,uVar4,param_7);
            (*pcVar9)(param_1 + uVar6 * 3,local_34,local_30,auStack_2c[0],1);
          }
          param_1 = param_1 + param_4;
        }
        return 0;
      }
LAB_00016ab8:
      uVar4 = 0;
      pcVar9 = *(code **)(DAT_00017358 + (param_6 - 0x10000) * 4);
      iVar5 = FUN_000167e0(*DAT_00017354,param_2,param_4,4);
      if (iVar5 != 0) {
        param_4 = param_4 << 2;
        *puVar3 = 1;
      }
      puVar3 = DAT_0001735c;
      iVar5 = FUN_00016870(*DAT_0001735c,param_4,4,DAT_00017360);
      if (iVar5 != 0) {
        param_4 = param_4 + 0x1f & 0xffffffe0;
        *puVar3 = 1;
      }
      for (; uVar4 != param_3; uVar4 = uVar4 + 1) {
        for (uVar6 = 0; uVar6 != param_2; uVar6 = uVar6 + 1) {
          FUN_000160f4(&local_34,&local_30,auStack_2c,uVar6,uVar4,param_7);
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
LAB_0001695c:
    RK_LOG(2,DAT_00017348,DAT_00017344,DAT_0001734c,0x2df,param_6);
    return 0xffffffff;
  }
LAB_00016b50:
  uVar4 = 0;
  pcVar9 = *(code **)(DAT_00017358 + (param_6 - 0x10000) * 4);
  iVar5 = FUN_000167e0(*DAT_00017354,param_2,param_4,2);
  if (iVar5 != 0) {
    param_4 = param_4 << 1;
    *puVar3 = 1;
  }
  puVar3 = DAT_0001735c;
  iVar5 = FUN_00016870(*DAT_0001735c,param_4,2,DAT_00017368);
  if (iVar5 != 0) {
    param_4 = param_4 + 0xf & 0xfffffff0;
    *puVar3 = 1;
  }
  for (; uVar4 != param_3; uVar4 = uVar4 + 1) {
    for (uVar6 = 0; uVar6 != param_2; uVar6 = uVar6 + 1) {
      FUN_000160f4(&local_34,&local_30,auStack_2c,uVar6,uVar4,param_7);
      (*pcVar9)(param_1 + uVar6 * 2,local_34,local_30,auStack_2c[0],1);
    }
    param_1 = param_1 + param_4;
  }
  return 0;
}



/* ===== FUN_00017424 @ 00017424 size=236 ===== */

undefined4 FUN_00017424(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  char *__format;
  undefined4 uVar2;
  char acStack_158 [16];
  undefined1 auStack_148 [304];
  
  iVar1 = DAT_0001751c;
  if (param_1 < 8) {
    setlinebuf((FILE *)*DAT_00017518);
    __format = DAT_00017528;
    if (param_4 == 0) {
      puts(DAT_00017520);
      uVar2 = 0;
    }
    else {
      *(undefined4 *)(DAT_00017524 + param_1 * 4) = param_2;
      snprintf(acStack_158,0x10,__format,param_2);
      setenv(DAT_0001752c,acStack_158,1);
      rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId(param_1,auStack_148);
      printf(DAT_00017530,param_1,auStack_148,param_4);
      rk_aiq_uapi2_sysctl_preInit_devBufCnt(auStack_148,DAT_00017534,2);
      uVar2 = rk_aiq_uapi2_sysctl_init(auStack_148,param_4,DAT_0001753c,DAT_00017538);
      if (param_3 != 0) {
        rk_aiq_uapi2_sysctl_setMulCamConc(uVar2,1);
      }
    }
    *(undefined4 *)(iVar1 + param_1 * 4) = uVar2;
    uVar2 = 0;
  }
  else {
    printf(DAT_00017514,DAT_00017510);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== FUN_00017540 @ 00017540 size=488 ===== */

int FUN_00017540(int param_1,ushort *param_2,int param_3)

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
  iVar3 = DAT_0001772c;
  __format = DAT_00017728;
  __s = param_2;
  if ((int)param_2 - 1U < 2) {
    iVar4 = rk_aiq_uapi2_camgroup_getCamInfos
                      (*(undefined4 *)(DAT_0001772c + param_1 * 4),&local_108);
    if (iVar4 == 0) {
      piVar7 = &local_108;
      iVar4 = 0;
      for (iVar8 = 0; iVar8 < local_108; iVar8 = iVar8 + 1) {
        iVar6 = rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm
                          (*(undefined4 *)(iVar3 + param_1 * 4),piVar7[1]);
        if (iVar6 == 0) {
          puts(DAT_00017748);
          goto LAB_00017718;
        }
        printf(DAT_00017730,piVar7[1],piVar7[9]);
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
              puts(DAT_00017734);
              local_84 = -1;
            }
            else {
              uVar1 = __s[2];
              uVar2 = __s[3];
              printf(DAT_0001773c,(uint)*__s,(uint)__s[1],(uint)uVar1,(uint)uVar2,(uint)__s[4],
                     (uint)__s[5]);
              local_84 = ((uint)uVar2 * (uint)uVar1 + 6) * 2;
            }
          }
          else {
            pcVar5 = strrchr((char *)__s,0x2f);
            __format = DAT_00017740;
            if (pcVar5 == (char *)0x0) goto LAB_00017698;
            local_bc = 1;
            local_8c = 1;
            local_90 = (ushort *)0x1;
            memcpy(&local_88,__s,(size_t)(pcVar5 + (1 - (int)__s)));
            strcpy(acStack_48,pcVar5 + 1);
            printf(DAT_00017744,&local_88,acStack_48);
          }
          iVar6 = rk_aiq_user_api2_aldch_v21_SetAttrib(iVar6,auStack_c4);
          iVar4 = 0;
          if (iVar6 != 0) {
            printf(DAT_00017738,iVar6);
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
LAB_00017698:
    printf(__format,__s);
LAB_00017718:
    iVar4 = -1;
  }
  return iVar4;
}



/* ===== FUN_0001774c @ 0001774c size=352 ===== */

undefined4
FUN_0001774c(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5,
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
  
  uVar1 = DAT_000178d0;
  __format_00 = DAT_000178cc;
  __format = DAT_000178c8;
  if (param_1 < 8) {
    for (iVar4 = 0; iVar3 = DAT_000178bc, iVar4 < *(int *)(param_6 + 0x20); iVar4 = iVar4 + 1) {
      iVar3 = rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId(iVar4,acStack_558);
      __s = DAT_000178b4;
      if (iVar3 != 0) goto LAB_000177a4;
      printf(__format,param_1,iVar4,acStack_558,*(undefined4 *)(param_6 + 0x24));
      __dest = auStack_428 + iVar4 * 0x80;
      sVar2 = strlen(acStack_558);
      memcpy(__dest,acStack_558,sVar2 + 1);
      *(undefined1 **)(param_6 + iVar4 * 4) = __dest;
      printf(__format_00,iVar4,__dest);
      iVar3 = rk_aiq_uapi2_sysctl_preInit_devBufCnt(acStack_558,uVar1,2);
      __s = DAT_000178b8;
      if (iVar3 != 0) goto LAB_000177a4;
    }
    iVar4 = rk_aiq_uapi2_camgroup_create(param_6);
    *(int *)(iVar3 + param_1 * 4) = iVar4;
    __s = DAT_000178c0;
    if (iVar4 != 0) {
      if (param_4 != 0) {
        FUN_00017540(param_1,param_4 & 0xff,param_5);
      }
      iVar4 = rk_aiq_uapi2_camgroup_prepare(*(undefined4 *)(iVar3 + param_1 * 4),param_2);
      iVar3 = rk_aiq_uapi2_camgroup_start(*(undefined4 *)(iVar3 + param_1 * 4));
      __s = DAT_000178c4;
      if (iVar4 == 0 && iVar3 == 0) {
        puts(DAT_000178d4);
        return 0;
      }
    }
LAB_000177a4:
    puts(__s);
  }
  else {
    printf(DAT_000178b0,DAT_000178ac,8);
  }
  return 0xffffffff;
}



/* ===== FUN_000178d8 @ 000178d8 size=112 ===== */

undefined4 FUN_000178d8(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_00017948;
  if ((param_1 < 8) && (*(int *)(DAT_00017948 + param_1 * 4) != 0)) {
    puts(DAT_00017954);
    rk_aiq_uapi2_sysctl_stop(*(undefined4 *)(iVar1 + param_1 * 4),0);
    puts(DAT_00017958);
    rk_aiq_uapi2_sysctl_deinit(*(undefined4 *)(iVar1 + param_1 * 4));
    puts(DAT_0001795c);
    *(undefined4 *)(iVar1 + param_1 * 4) = 0;
    return 0;
  }
  printf(DAT_00017950,DAT_0001794c,param_1);
  return 0xffffffff;
}



/* ===== FUN_00017960 @ 00017960 size=104 ===== */

undefined4 FUN_00017960(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_000179c8;
  if (param_1 < 8) {
    if (*(int *)(DAT_000179c8 + param_1 * 4) != 0) {
      puts(DAT_000179d4);
      rk_aiq_uapi2_camgroup_stop(*(undefined4 *)(iVar1 + param_1 * 4));
      puts(DAT_000179d8);
      rk_aiq_uapi2_camgroup_destroy(*(undefined4 *)(iVar1 + param_1 * 4));
      puts(DAT_000179dc);
      *(undefined4 *)(iVar1 + param_1 * 4) = 0;
      return 0;
    }
  }
  printf(DAT_000179d0,DAT_000179cc);
  return 0xffffffff;
}



/* ===== FUN_000179e0 @ 000179e0 size=152 ===== */

undefined4 FUN_000179e0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_00017a78;
  if ((param_1 < 8) && (iVar1 = *(int *)(DAT_00017a78 + param_1 * 4), iVar1 != 0)) {
    iVar1 = rk_aiq_uapi2_sysctl_prepare(iVar1,0,0,*(undefined4 *)(DAT_00017a84 + param_1 * 4));
    if (iVar1 == 0) {
      puts(DAT_00017a8c);
      iVar2 = rk_aiq_uapi2_sysctl_start(*(undefined4 *)(iVar2 + param_1 * 4));
      if (iVar2 == 0) {
        puts(DAT_00017a94);
        return 0;
      }
      puts(DAT_00017a90);
    }
    else {
      puts(DAT_00017a88);
      *(undefined4 *)(iVar2 + param_1 * 4) = 0;
    }
  }
  else {
    printf(DAT_00017a80,DAT_00017a7c);
  }
  return 0xffffffff;
}



/* ===== FUN_00017b40 @ 00017b40 size=156 ===== */

undefined4 FUN_00017b40(int param_1,int param_2)

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
  
  iVar1 = DAT_00017bdc;
  if ((param_1 < 8) && (iVar2 = *(int *)(DAT_00017bdc + param_1 * 4), iVar2 != 0)) {
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
    printf(DAT_00017be4,DAT_00017be0);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



/* ===== FUN_00017e44 @ 00017e44 size=136 ===== */

uint FUN_00017e44(int param_1,int param_2,int param_3,byte param_4,char param_5,char param_6,
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



/* ===== FUN_00017ecc @ 00017ecc size=144 ===== */

uint FUN_00017ecc(int param_1,int param_2,int param_3,char param_4,char param_5,char param_6,
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



/* ===== FUN_00017f5c @ 00017f5c size=184 ===== */

undefined4 FUN_00017f5c(char *param_1,void *param_2,void *param_3)

{
  FILE *__stream;
  undefined4 uStack_1c;
  void *pvStack_18;
  
  uStack_1c = param_2;
  pvStack_18 = param_3;
  if (param_1 == (char *)0x0) {
    puts(DAT_00018014);
  }
  else {
    __stream = fopen64(param_1,DAT_00018018);
    if (__stream == (FILE *)0x0) {
      printf(DAT_0001801c,param_1);
    }
    else {
      fread((void *)((int)&uStack_1c + 2),1,2,__stream);
      if (uStack_1c._2_2_ == 0x4d42) {
        fread(param_2,1,0xc,__stream);
        fread(param_3,1,0x2c,__stream);
        fclose(__stream);
        return 0;
      }
      puts(DAT_00018020);
      fclose(__stream);
    }
  }
  return 0xffffffff;
}



/* ===== FUN_00018024 @ 00018024 size=872 ===== */

undefined4 FUN_00018024(char *param_1,uint *param_2,uint param_3)

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
  
  __s = DAT_000183b4;
  if (param_1 != (char *)0x0) {
    iVar2 = FUN_00017f5c(param_1,auStack_60,auStack_54);
    if (iVar2 < 0) {
      return 0xffffffff;
    }
    __n = (uint)(local_46 >> 3);
    __s = DAT_000183b8;
    if (((0xf < local_46) && (__s = DAT_000183bc, local_44 == 0)) &&
       (__s = DAT_000183c0, -1 < (int)local_4c)) {
      __stream = fopen64(param_1,DAT_000183c4);
      if (__stream == (FILE *)0x0) {
        printf(DAT_000183c8,param_1);
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
        puts(DAT_000183cc);
        fclose(__stream);
        return 0xffffffff;
      }
      uVar14 = param_2[3];
      fseek(__stream,local_58,0);
      sVar3 = fread(__ptr,1,__size,__stream);
      if (__size - sVar3 != 0) {
        printf(DAT_000183d0,uVar11,uVar12,0xb6);
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
      iVar2 = DAT_000183d4 + param_3 * 0x10;
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
            goto LAB_00018240;
          }
          switch(param_3) {
          case 0:
          case 2:
          case 3:
          case 4:
            iVar7 = param_2[2] * uVar13 + uVar5 * 2;
            iVar16 = uVar5 * 3 + iVar9;
            uVar1 = FUN_00017e44(*(undefined1 *)((int)__ptr + iVar16 + 2),
                                 *(undefined1 *)((int)__ptr + iVar16 + 1),
                                 *(undefined1 *)((int)__ptr + iVar16),
                                 *(undefined4 *)(DAT_000183d4 + param_3 * 0x10),
                                 *(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8),
                                 *(undefined4 *)(iVar2 + 0xc));
            goto LAB_0001823c;
          default:
            printf(DAT_000183e0,DAT_000183dc,0xea);
            break;
          case 5:
            iVar7 = param_2[2] * uVar13 + uVar5 * 2;
            iVar16 = uVar5 * 3 + iVar9;
            uVar1 = FUN_00017ecc(*(undefined1 *)((int)__ptr + iVar16 + 2),
                                 *(undefined1 *)((int)__ptr + iVar16 + 1),
                                 *(undefined1 *)((int)__ptr + iVar16),DAT_000183d8[-1],*DAT_000183d8
                                 ,DAT_000183d8[1],DAT_000183d8[2]);
LAB_0001823c:
            *(undefined2 *)(uVar14 + iVar7) = uVar1;
            break;
          case 6:
          case 8:
            uVar15 = param_2[2];
            iVar7 = uVar5 * 3 + iVar9;
            uVar4 = FUN_00017e44(*(undefined1 *)((int)__ptr + iVar7 + 2),
                                 *(undefined1 *)((int)__ptr + iVar7 + 1),
                                 *(undefined1 *)((int)__ptr + iVar7),
                                 *(undefined4 *)(DAT_000183d4 + param_3 * 0x10),
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
LAB_00018240:
        }
        local_6c = local_6c + 1;
      } while( true );
    }
  }
  puts(__s);
  return 0xffffffff;
}



/* ===== FUN_000183e4 @ 000183e4 size=76 ===== */

char * FUN_000183e4(char *param_1)

{
  char *pcVar1;
  size_t sVar2;
  char *pcVar3;
  char *pcVar4;
  
  if (param_1 == (char *)0x0) {
    printf(DAT_00018430);
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



/* ===== FUN_00018434 @ 00018434 size=84 ===== */

undefined4 FUN_00018434(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = (char *)FUN_000183e4();
  iVar2 = strcmp(pcVar1,DAT_00018488);
  pcVar1 = DAT_00018490;
  if ((iVar2 == 0) &&
     (iVar2 = FUN_00018024(param_1,param_2,param_3), pcVar1 = DAT_0001848c, iVar2 == 0)) {
    return 0;
  }
  puts(pcVar1);
  return 0xffffffff;
}



/* ===== FUN_00018494 @ 00018494 size=84 ===== */

undefined4 FUN_00018494(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

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
  iVar1 = FUN_00018434(param_1,&local_18,*param_2);
  if (iVar1 < 0) {
    puts(DAT_000184e8);
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



/* ===== FUN_000184f0 @ 000184f0 size=28 ===== */

int FUN_000184f0(void)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  return *piVar1;
}



/* ===== FUN_0001850c @ 0001850c size=40 ===== */

char * FUN_0001850c(int param_1)

{
  char *pcVar1;
  
  pcVar1 = strerror(param_1);
  return pcVar1;
}



/* ===== FUN_00018534 @ 00018534 size=156 ===== */

void * FUN_00018534(void)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,0x14);
  if (pvVar1 == (void *)0x0) {
    printf((char *)(DAT_000185d8 + 0x18580),DAT_000185d4 + 0x18578,0x9a,DAT_000185d0 + 0x1856c);
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



/* ===== FUN_000185dc @ 000185dc size=48 ===== */

void FUN_000185dc(void *param_1)

{
  if (param_1 != (void *)0x0) {
    free(param_1);
  }
  return;
}



/* ===== FUN_0001860c @ 0001860c size=204 ===== */

void * FUN_0001860c(int param_1)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,0x168);
  if (pvVar1 == (void *)0x0) {
    printf((char *)(DAT_000186e0 + 0x1865c),DAT_000186dc + 0x18654,0xad,DAT_000186d8 + 0x18648);
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



/* ===== FUN_000186e4 @ 000186e4 size=136 ===== */

void FUN_000186e4(void *param_1)

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



/* ===== FUN_0001876c @ 0001876c size=180 ===== */

void * FUN_0001876c(int param_1)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,0x434);
  if (pvVar1 == (void *)0x0) {
    printf((char *)(DAT_00018828 + 0x187bc),DAT_00018824 + 0x187b4,0xc4,DAT_00018820 + 0x187a8);
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



/* ===== FUN_0001882c @ 0001882c size=136 ===== */

void FUN_0001882c(void *param_1)

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



/* ===== FUN_000188b4 @ 000188b4 size=128 ===== */

void FUN_000188b4(int param_1,int param_2)

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



/* ===== FUN_00018934 @ 00018934 size=144 ===== */

void FUN_00018934(int param_1)

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



/* ===== FUN_000189c4 @ 000189c4 size=536 ===== */

int * FUN_000189c4(int param_1)

{
  undefined4 uVar1;
  int local_2c;
  sockaddr local_24;
  int local_14;
  int local_10;
  int *local_c;
  
  local_c = (int *)0x0;
  local_c = (int *)FUN_00018534();
  if (local_c == (int *)0x0) {
    local_c = (int *)0x0;
  }
  else {
    local_10 = socket(2,1,0);
    if (local_10 == -1) {
      uVar1 = FUN_000184f0();
      uVar1 = FUN_0001850c(uVar1);
      printf((char *)(DAT_00018be4 + 0x18a50),DAT_00018be0 + 0x18a48,0xfa,DAT_00018bdc + 0x18a3c,
             uVar1);
      FUN_000185dc(local_c);
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
        uVar1 = FUN_000184f0();
        uVar1 = FUN_0001850c(uVar1);
        printf((char *)(DAT_00018bf0 + 0x18b14),DAT_00018bec + 0x18b0c,0x108,DAT_00018be8 + 0x18b00,
               uVar1);
        close(local_10);
        FUN_000185dc(local_c);
        local_c = (int *)0x0;
      }
      else {
        local_14 = listen(local_10,0x80);
        if (local_14 == -1) {
          uVar1 = FUN_000184f0();
          uVar1 = FUN_0001850c(uVar1);
          printf((char *)(DAT_00018bfc + 0x18b80),DAT_00018bf8 + 0x18b78,0x110,
                 DAT_00018bf4 + 0x18b6c,uVar1);
          close(local_10);
          FUN_000185dc(local_c);
          local_c = (int *)0x0;
        }
        else {
          *local_c = local_10;
          printf((char *)(DAT_00018c08 + 0x18bcc),DAT_00018c04 + 0x18bc4,0x118,
                 DAT_00018c00 + 0x18bb8,local_2c);
        }
      }
    }
  }
  return local_c;
}



/* ===== FUN_00018c0c @ 00018c0c size=932 ===== */

undefined4 FUN_00018c0c(int param_1)

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
    printf((char *)(DAT_00018fb8 + 0x18ca0),DAT_00018fb4 + 0x18c98,0x15b,DAT_00018fb0 + 0x18c8c,
           pcVar2);
  }
  else {
    local_c = local_c | 0x800;
    local_c = fcntl(param_1,4,local_c);
    if ((int)local_c < 0) {
      piVar1 = __errno_location();
      pcVar2 = strerror(*piVar1);
      printf((char *)(DAT_00018fc4 + 0x18d0c),DAT_00018fc0 + 0x18d04,0x160,DAT_00018fbc + 0x18cf8,
             pcVar2);
    }
  }
  local_c = setsockopt(param_1,1,7,&local_10,4);
  if (local_c == -1) {
    uVar3 = FUN_000184f0();
    uVar3 = FUN_0001850c(uVar3);
    printf((char *)(DAT_00018fd0 + 0x18d74),DAT_00018fcc + 0x18d6c,0x166,DAT_00018fc8 + 0x18d60,
           uVar3);
  }
  local_c = setsockopt(param_1,1,9,&local_14,4);
  if (local_c == -1) {
    uVar3 = FUN_000184f0();
    uVar3 = FUN_0001850c(uVar3);
    printf((char *)(DAT_00018fdc + 0x18ddc),DAT_00018fd8 + 0x18dd4,0x16b,DAT_00018fd4 + 0x18dc8,
           uVar3);
  }
  local_c = setsockopt(param_1,6,4,&local_18,4);
  if (local_c == -1) {
    uVar3 = FUN_000184f0();
    uVar3 = FUN_0001850c(uVar3);
    printf((char *)(DAT_00018fe8 + 0x18e44),DAT_00018fe4 + 0x18e3c,0x170,DAT_00018fe0 + 0x18e30,
           uVar3);
  }
  local_c = setsockopt(param_1,6,5,&local_1c,4);
  if (local_c == -1) {
    uVar3 = FUN_000184f0();
    uVar3 = FUN_0001850c(uVar3);
    printf((char *)(DAT_00018ff4 + 0x18eac),DAT_00018ff0 + 0x18ea4,0x175,DAT_00018fec + 0x18e98,
           uVar3);
  }
  local_c = setsockopt(param_1,6,6,&local_20,4);
  if (local_c == -1) {
    uVar3 = FUN_000184f0();
    uVar3 = FUN_0001850c(uVar3);
    printf((char *)(DAT_00019000 + 0x18f14),DAT_00018ffc + 0x18f0c,0x17a,DAT_00018ff8 + 0x18f00,
           uVar3);
  }
  memset(&local_28,0,8);
  local_28 = 1;
  local_24 = 0;
  local_c = setsockopt(param_1,1,0xd,&local_28,8);
  if (local_c == -1) {
    uVar3 = FUN_000184f0();
    uVar3 = FUN_0001850c(uVar3);
    printf((char *)(DAT_0001900c + 0x18fa0),DAT_00019008 + 0x18f98,0x182,DAT_00019004 + 0x18f8c,
           uVar3);
  }
  return 0;
}



/* ===== FUN_00019010 @ 00019010 size=304 ===== */

undefined4 * FUN_00019010(int *param_1)

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
    uVar2 = FUN_000184f0();
    uVar2 = FUN_0001850c(uVar2);
    printf((char *)(DAT_00019148 + 0x19090),DAT_00019144 + 0x19088,0x191,DAT_00019140 + 0x1907c,
           uVar2);
    local_14 = (undefined4 *)0x0;
  }
  else {
    FUN_00018c0c(local_18);
    pcVar3 = inet_ntoa((in_addr)auStack_28._4_4_);
    uVar1 = ntohs(auStack_28._2_2_);
    printf((char *)(DAT_00019154 + 0x190e4),DAT_00019150 + 0x190dc,0x198,DAT_0001914c + 0x190d0,
           pcVar3,(uint)uVar1);
    local_14 = (undefined4 *)FUN_0001876c(param_1);
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



/* ===== FUN_00019158 @ 00019158 size=160 ===== */

void FUN_00019158(int param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    uVar2 = *(undefined4 *)(param_1 + 4);
    pcVar1 = inet_ntoa((in_addr)*(in_addr_t *)(param_1 + 8));
    printf((char *)(DAT_00019200 + 0x191b4),DAT_000191fc + 0x191ac,0x1ab,DAT_000191f8 + 0x191a0,
           uVar2,pcVar1);
    FUN_00018934(param_1);
    FUN_0001ac10(param_1,0);
    FUN_0001ac10(param_1,1);
    close(*(int *)(param_1 + 4));
    FUN_0001882c(param_1);
  }
  return;
}



/* ===== FUN_00019204 @ 00019204 size=408 ===== */

bool FUN_00019204(char *param_1,char *param_2)

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
    *(undefined2 *)(local_48 + sVar1) = *(undefined2 *)(DAT_0001939c + 0x19300);
  }
  sVar1 = strlen(local_88);
  if (*(char *)((int)&local_8c + sVar1 + 3) != '/') {
    sVar1 = strlen(local_88);
    *(undefined2 *)(local_88 + sVar1) = *(undefined2 *)(DAT_000193a0 + 0x19354);
  }
  sVar1 = strlen(local_48);
  iVar2 = strncmp(local_48,local_88,sVar1);
  return iVar2 == 0;
}



/* ===== FUN_000193a4 @ 000193a4 size=416 ===== */

char * FUN_000193a4(int param_1,char *param_2)

{
  int iVar1;
  char *local_c;
  
  local_c = (char *)0x0;
  if (((param_1 == 0) || (param_2 == (char *)0x0)) || (*param_2 == '\0')) {
    printf((char *)(DAT_0001954c + 0x19410),DAT_00019548 + 0x19408,0x1cc,DAT_00019544 + 0x193fc);
  }
  else {
    for (local_c = *(char **)(param_1 + 4); local_c != (char *)0x0;
        local_c = *(char **)(local_c + 0x15c)) {
      iVar1 = FUN_00019204(local_c,param_2);
      if ((iVar1 != 0) || (iVar1 = FUN_00019204(param_2,local_c), iVar1 != 0)) {
        printf((char *)(DAT_00019558 + 0x1948c),DAT_00019554 + 0x19484,0x1d2,DAT_00019550 + 0x19478,
               local_c,param_2);
        goto LAB_00019520;
      }
    }
    local_c = (char *)FUN_0001860c(param_1);
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
      printf((char *)(DAT_00019564 + 0x19514),DAT_00019560 + 0x1950c,0x1e0,DAT_0001955c + 0x19500,
             local_c);
      return local_c;
    }
  }
LAB_00019520:
  if (local_c != (char *)0x0) {
    free(local_c);
  }
  return (char *)0x0;
}



/* ===== FUN_00019568 @ 00019568 size=40 ===== */

undefined4 FUN_00019568(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000189c4(param_1);
  return uVar1;
}



/* ===== FUN_00019590 @ 00019590 size=72 ===== */

undefined4 FUN_00019590(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000193a4(param_1,param_2);
  FUN_000195d8(uVar1,1,0,0);
  return uVar1;
}



/* ===== FUN_000195d8 @ 000195d8 size=596 ===== */

undefined4 FUN_000195d8(int param_1,int param_2,int param_3,int param_4)

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
    *(undefined4 *)(param_1 + 0x120) = 90000;
    memset((void *)(param_1 + 0x48),0,0xcc);
    if ((param_3 != 0) && (0 < param_4)) {
      if (param_2 == 1) {
        iVar1 = FUN_00024524(param_3,param_4,param_1 + 0x48);
        if (iVar1 < 1) {
          printf((char *)(DAT_00019840 + 0x19750),DAT_0001983c + 0x19748,0x220,
                 DAT_00019838 + 0x1973c);
        }
      }
      else if ((param_2 == 2) && (iVar1 = FUN_00024788(param_3,param_4,param_1 + 0x48), iVar1 < 1))
      {
        printf((char *)(DAT_0001984c + 0x19798),DAT_00019848 + 0x19790,0x226,DAT_00019844 + 0x19784)
        ;
      }
    }
    if (*(int *)(param_1 + 0x138) == 0) {
      uVar2 = FUN_00023bf4(0x5b0,0x4b1);
      *(undefined4 *)(param_1 + 0x138) = uVar2;
      if (*(int *)(param_1 + 0x138) == 0) {
        printf((char *)(DAT_00019858 + 0x19808),DAT_00019854 + 0x19800,0x230,DAT_00019850 + 0x197f4)
        ;
        *(undefined4 *)(param_1 + 0x40) = 0;
        return 0xffffffff;
      }
    }
    uVar2 = 0;
  }
  else {
    printf((char *)(DAT_00019834 + 0x1966c),DAT_00019830 + 0x19664,0x211,DAT_0001982c + 0x19658,
           param_2);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== FUN_0001985c @ 0001985c size=516 ===== */

undefined4 FUN_0001985c(int param_1,int param_2,int param_3,int param_4)

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
       (iVar1 = FUN_00024a8c(param_3,param_4,param_1 + 0x114), iVar1 < 1)) {
      printf((char *)(DAT_00019a74 + 0x199d4),DAT_00019a70 + 0x199cc,0x255,DAT_00019a6c + 0x199c0);
    }
    if (*(int *)(param_1 + 0x13c) == 0) {
      uVar2 = FUN_00023bf4(0x5b0,0x29);
      *(undefined4 *)(param_1 + 0x13c) = uVar2;
      if (*(int *)(param_1 + 0x13c) == 0) {
        printf((char *)(DAT_00019a80 + 0x19a3c),DAT_00019a7c + 0x19a34,0x25f,DAT_00019a78 + 0x19a28)
        ;
        *(undefined4 *)(param_1 + 0x44) = 0;
        return 0xffffffff;
      }
    }
    uVar2 = 0;
  }
  else {
    printf((char *)(DAT_00019a68 + 0x198f4),DAT_00019a64 + 0x198ec,0x245,DAT_00019a60 + 0x198e0,
           param_2);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== FUN_00019b28 @ 00019b28 size=196 ===== */

void FUN_00019b28(int param_1)

{
  if (param_1 != 0) {
    while (*(int *)(param_1 + 0x154) != 0) {
      FUN_00019158(*(int *)(param_1 + 0x154));
    }
    printf((char *)(DAT_00019bf4 + 0x19b98),DAT_00019bf0 + 0x19b90,0x285,DAT_00019bec + 0x19b84,
           param_1);
    if (*(int *)(param_1 + 0x138) != 0) {
      FUN_00024088(*(undefined4 *)(param_1 + 0x138));
    }
    if (*(int *)(param_1 + 0x13c) != 0) {
      FUN_00024088(*(undefined4 *)(param_1 + 0x13c));
    }
    FUN_000186e4(param_1);
  }
  return;
}



/* ===== FUN_00019bf8 @ 00019bf8 size=144 ===== */

void FUN_00019bf8(int *param_1)

{
  if (param_1 != (int *)0x0) {
    while (param_1[3] != 0) {
      FUN_00019158(param_1[3]);
    }
    while (param_1[1] != 0) {
      FUN_00019b28(param_1[1]);
    }
    close(*param_1);
    FUN_000185dc(param_1);
  }
  return;
}



/* ===== FUN_00019c88 @ 00019c88 size=1128 ===== */

int FUN_00019c88(int param_1,int param_2,char *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *local_c;
  
  iVar1 = sprintf(param_3,(char *)(DAT_0001a0f0 + 0x19cb8));
  pcVar3 = param_3 + iVar1;
  iVar1 = sprintf(pcVar3,(char *)(DAT_0001a0f4 + 0x19ce0));
  pcVar3 = pcVar3 + iVar1;
  iVar1 = sprintf(pcVar3,(char *)(DAT_0001a0f8 + 0x19d08));
  pcVar3 = pcVar3 + iVar1;
  iVar1 = sprintf(pcVar3,(char *)(DAT_0001a0fc + 0x19d30));
  pcVar3 = pcVar3 + iVar1;
  iVar1 = param_2;
  if (param_2 == 0) {
    iVar1 = DAT_0001a100 + 0x19d6c;
  }
  iVar1 = sprintf(pcVar3,(char *)(DAT_0001a104 + 0x19d78),iVar1);
  iVar2 = sprintf(pcVar3 + iVar1,(char *)(DAT_0001a108 + 0x19da0));
  local_c = pcVar3 + iVar1 + iVar2;
  if (*(int *)(param_1 + 0x40) != 0) {
    if (*(int *)(param_1 + 0x40) == 1) {
      iVar1 = FUN_00024c00(0x60,*(undefined4 *)(param_1 + 0x120),param_1 + 0x48,local_c,
                           param_4 - ((int)local_c - (int)param_3));
      local_c = local_c + iVar1;
    }
    else if (*(int *)(param_1 + 0x40) == 2) {
      iVar1 = FUN_00024e48(0x60,*(undefined4 *)(param_1 + 0x120),param_1 + 0x48,local_c,
                           param_4 - ((int)local_c - (int)param_3));
      local_c = local_c + iVar1;
    }
    if (param_2 == 0) {
      iVar1 = sprintf(local_c,(char *)(DAT_0001a118 + 0x19ef0),DAT_0001a114 + 0x19ee4);
      local_c = local_c + iVar1;
    }
    else {
      iVar1 = sprintf(local_c,(char *)(DAT_0001a110 + 0x19ebc),param_2,DAT_0001a10c + 0x19eb0);
      local_c = local_c + iVar1;
    }
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    iVar1 = *(int *)(param_1 + 0x44);
    if (iVar1 == 0x4002) {
      iVar1 = FUN_000251e8(0x61,*(undefined4 *)(param_1 + 0x130),*(undefined1 *)(param_1 + 0x134),
                           local_c,param_4 - ((int)local_c - (int)param_3));
      local_c = local_c + iVar1;
    }
    else if (iVar1 == 0x4003) {
      iVar1 = FUN_000252b8(0x61,*(undefined4 *)(param_1 + 0x130),*(undefined1 *)(param_1 + 0x134),
                           param_1 + 0x114,local_c,param_4 - ((int)local_c - (int)param_3));
      local_c = local_c + iVar1;
    }
    else if (iVar1 == 0x4001) {
      iVar1 = FUN_00025118(0x61,*(undefined4 *)(param_1 + 0x130),*(undefined1 *)(param_1 + 0x134),
                           local_c,param_4 - ((int)local_c - (int)param_3));
      local_c = local_c + iVar1;
    }
    if (param_2 == 0) {
      iVar1 = sprintf(local_c,(char *)(DAT_0001a128 + 0x1a0bc),DAT_0001a124 + 0x1a0b0);
      local_c = local_c + iVar1;
    }
    else {
      iVar1 = sprintf(local_c,(char *)(DAT_0001a120 + 0x1a088),param_2,DAT_0001a11c + 0x1a07c);
      local_c = local_c + iVar1;
    }
  }
  return (int)local_c - (int)param_3;
}



/* ===== FUN_0001a12c @ 0001a12c size=164 ===== */

undefined4 FUN_0001a12c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  printf((char *)(DAT_0001a1d8 + 0x1a16c),DAT_0001a1d4 + 0x1a164,0x2d5,DAT_0001a1d0 + 0x1a158);
  FUN_000238c4(param_3,0x6f);
  return 0;
}



/* ===== FUN_0001a1dc @ 0001a1dc size=648 ===== */

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_0001a1dc(int param_1,int param_2,int param_3)

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
  printf((char *)(DAT_0001a46c + 0x1a284),DAT_0001a468 + 0x1a27c,0x2ea,DAT_0001a464 + 0x1a270);
  iVar1 = FUN_0002367c(param_2,local_418);
  if ((iVar1 < 0) && ((local_418[0] & 1) == 0)) {
    FUN_00023104(param_3,0x196);
    printf((char *)(DAT_0001a478 + 0x1a2e0),DAT_0001a474 + 0x1a2d8,0x2ed,DAT_0001a470 + 0x1a2cc);
  }
  else {
    if (*local_14 == 1) {
      sVar2 = strlen(local_498);
      uVar3 = *(undefined4 *)(DAT_0001a47c + 0x1a32c);
      *(undefined4 *)(local_498 + sVar2) = *(undefined4 *)(DAT_0001a47c + 0x1a328);
      *(undefined4 *)((int)&uStack_494 + sVar2) = uVar3;
      auStack_490[sVar2] = *(undefined1 *)(DAT_0001a47c + 0x1a330);
    }
    else {
      sVar2 = strlen(local_498);
      uVar3 = *(undefined4 *)(DAT_0001a480 + 0x1a370);
      *(undefined4 *)(local_498 + sVar2) = *(undefined4 *)(DAT_0001a480 + 0x1a36c);
      *(undefined4 *)((int)&uStack_494 + sVar2) = uVar3;
    }
    strcat(local_498,(char *)((int)local_14 + 6));
    if ((short)local_14[1] != 0) {
      sVar2 = strlen(local_498);
      sprintf(local_498 + sVar2,(char *)(DAT_0001a484 + 0x1a3d8),(uint)*(ushort *)(local_14 + 1));
    }
    strcat(local_498,local_c);
    local_10 = FUN_00019c88(local_c,local_498,local_418 + 1,0x400);
    FUN_00023ab0(param_3,0);
    FUN_00023b84(param_3,local_10);
    uVar3 = FUN_0001ec94(local_418 + 1,local_10);
    *(undefined4 *)(param_3 + 0xa8) = uVar3;
  }
  return 0;
}



/* ===== FUN_0001a488 @ 0001a488 size=52 ===== */

int FUN_0001a488(void)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0001a4bc + 0x1a49c);
  *(int *)(DAT_0001a4c0 + 0x1a4ac) = iVar1 + 1;
  return iVar1;
}



/* ===== FUN_0001a4c4 @ 0001a4c4 size=1048 ===== */

undefined4 FUN_0001a4c4(undefined4 *param_1)

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
      printf((char *)(DAT_0001a92c + 0x1a8cc),DAT_0001a928 + 0x1a8c4,0x363,DAT_0001a924 + 0x1a8b8);
      return 0xffffffff;
    }
    local_10 = socket(2,2,0);
    if (local_10 == -1) break;
    local_14 = socket(2,2,0);
    if (local_14 == -1) {
      uVar1 = FUN_000184f0();
      uVar1 = FUN_0001850c(uVar1);
      printf((char *)(DAT_0001a8f0 + 0x1a598),DAT_0001a8ec + 0x1a590,0x31a,DAT_0001a8e8 + 0x1a584,
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
          printf((char *)(DAT_0001a8fc + 0x1a70c),DAT_0001a8f8 + 0x1a704,0x347,
                 DAT_0001a8f4 + 0x1a6f8,pcVar3);
        }
        else {
          local_1c = local_1c | 0x800;
          local_1c = fcntl(local_10,4,local_1c);
          if ((int)local_1c < 0) {
            piVar2 = __errno_location();
            pcVar3 = strerror(*piVar2);
            printf((char *)(DAT_0001a908 + 0x1a778),DAT_0001a904 + 0x1a770,0x34c,
                   DAT_0001a900 + 0x1a764,pcVar3);
          }
        }
        local_1c = fcntl(local_14,3,0);
        if ((int)local_1c < 0) {
          piVar2 = __errno_location();
          pcVar3 = strerror(*piVar2);
          printf((char *)(DAT_0001a914 + 0x1a7d4),DAT_0001a910 + 0x1a7cc,0x351,
                 DAT_0001a90c + 0x1a7c0,pcVar3);
        }
        else {
          local_1c = local_1c | 0x800;
          local_1c = fcntl(local_14,4,local_1c);
          if ((int)local_1c < 0) {
            piVar2 = __errno_location();
            pcVar3 = strerror(*piVar2);
            printf((char *)(DAT_0001a920 + 0x1a840),DAT_0001a91c + 0x1a838,0x356,
                   DAT_0001a918 + 0x1a82c,pcVar3);
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
  uVar1 = FUN_000184f0();
  uVar1 = FUN_0001850c(uVar1);
  printf((char *)(DAT_0001a8e4 + 0x1a538),DAT_0001a8e0 + 0x1a530,0x314,DAT_0001a8dc + 0x1a524,uVar1)
  ;
  return 0xffffffff;
}



/* ===== FUN_0001a930 @ 0001a930 size=684 ===== */

undefined4 FUN_0001a930(int param_1,int param_2,int param_3,short param_4,uint param_5)

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
    printf((char *)(DAT_0001abe4 + 0x1a9b4),DAT_0001abe0 + 0x1a9ac,0x36e,DAT_0001abdc + 0x1a9a0,
           pcVar3);
    uVar5 = 0xffffffff;
  }
  else {
    *__ptr = (uint)(param_3 != 0);
    __ptr[8] = __in.s_addr;
    uVar4 = FUN_0001a488();
    __ptr[10] = uVar4;
    if (param_3 == 0) {
      iVar6 = FUN_0001a4c4(__ptr);
      if (iVar6 < 0) {
        free(__ptr);
        return 0xffffffff;
      }
      *(short *)(__ptr + 7) = param_4;
      *(short *)((int)__ptr + 0x1e) = param_4 + 1;
      if (param_2 == 0) {
        iVar6 = DAT_0001ac00 + 0x1ab28;
      }
      else {
        iVar6 = DAT_0001abfc + 0x1ab18;
      }
      uVar7 = __ptr[10];
      uVar4 = __ptr[6];
      uVar1 = *(ushort *)((int)__ptr + 0x1a);
      pcVar3 = inet_ntoa(__in);
      printf((char *)(DAT_0001ac0c + 0x1aba4),DAT_0001ac08 + 0x1ab9c,0x38b,DAT_0001ac04 + 0x1ab90,
             iVar6,uVar7,(uint)(ushort)uVar4,(uint)uVar1,pcVar3,(uint)(ushort)__ptr[7],
             (uint)*(ushort *)((int)__ptr + 0x1e));
    }
    else {
      __ptr[1] = *(uint *)(param_1 + 4);
      __ptr[2] = param_5;
      __ptr[3] = param_5 + 1;
      if (param_2 == 0) {
        iVar6 = DAT_0001abec + 0x1aa58;
      }
      else {
        iVar6 = DAT_0001abe8 + 0x1aa48;
      }
      uVar4 = __ptr[10];
      pcVar3 = inet_ntoa(__in);
      printf((char *)(DAT_0001abf8 + 0x1aab0),DAT_0001abf4 + 0x1aaa8,0x37e,DAT_0001abf0 + 0x1aa9c,
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



/* ===== FUN_0001ac10 @ 0001ac10 size=164 ===== */

void FUN_0001ac10(int param_1,int param_2)

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



/* ===== FUN_0001acb4 @ 0001acb4 size=1096 ===== */

undefined4 FUN_0001acb4(int *param_1,int param_2,undefined4 param_3)

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
  printf((char *)(DAT_0001b104 + 0x1ad90),DAT_0001b100 + 0x1ad88,0x3b6,DAT_0001b0fc + 0x1ad7c);
  if (*(int *)(param_2 + 0x80) == 0) {
    FUN_00023104(param_3,0x1cd);
    printf((char *)(DAT_0001b110 + 0x1adcc),DAT_0001b10c + 0x1adc4,0x3ba,DAT_0001b108 + 0x1adb8);
  }
  else {
    if (**(int **)(param_2 + 0x80) == 1) {
      local_c = 1;
      if ((*(uint *)(*(int *)(param_2 + 0x80) + 4) & 0x20) == 0) {
        printf((char *)(DAT_0001b11c + 0x1ae28),DAT_0001b118 + 0x1ae20,0x3c1,DAT_0001b114 + 0x1ae14)
        ;
        FUN_00023104(param_3,0x1cd);
        return 0;
      }
    }
    else if ((*(uint *)(*(int *)(param_2 + 0x80) + 4) & 8) == 0) {
      printf((char *)(DAT_0001b128 + 0x1ae74),DAT_0001b124 + 0x1ae6c,0x3c7,DAT_0001b120 + 0x1ae60);
      FUN_00023104(param_3,0x1cd);
      return 0;
    }
    snprintf(local_5c,0x3f,(char *)(DAT_0001b130 + 0x1aea8),local_14,DAT_0001b12c + 0x1ae9c);
    snprintf(local_9c,0x3f,(char *)(DAT_0001b138 + 0x1aecc),local_14,DAT_0001b134 + 0x1aec0);
    if ((*(int *)(local_14 + 0x40) == 0) ||
       (iVar1 = FUN_00019204(local_5c,param_2 + 0x2e), iVar1 == 0)) {
      if ((*(int *)(local_14 + 0x44) == 0) ||
         (iVar1 = FUN_00019204(local_9c,param_2 + 0x2e), iVar1 == 0)) {
        printf((char *)(DAT_0001b144 + 0x1af7c),DAT_0001b140 + 0x1af74,0x3d4,DAT_0001b13c + 0x1af68,
               param_2 + 0x2e);
        FUN_00023104(param_3,0x1cd);
        return 0;
      }
      local_10 = 1;
    }
    else {
      local_10 = 0;
    }
    FUN_0001ac10(param_1,local_10);
    local_1c = FUN_0001a930(param_1,local_10,local_c,*(undefined2 *)(*(int *)(param_2 + 0x80) + 0xc)
                            ,*(undefined1 *)(*(int *)(param_2 + 0x80) + 0x10));
    if (local_1c < 0) {
      FUN_00023104(param_3,500);
    }
    else {
      if (local_10 == 0) {
        local_18 = param_1[0x105];
      }
      else {
        local_18 = param_1[0x106];
      }
      if (local_c == 0) {
        FUN_00023484(param_3,*(undefined4 *)(local_18 + 0x28),*(undefined2 *)(local_18 + 0x1c),
                     *(undefined2 *)(local_18 + 0x18));
      }
      else {
        FUN_000235a0(param_3,*(undefined4 *)(local_18 + 0x28),*(undefined4 *)(local_18 + 8));
      }
      if (*param_1 == 2) {
        if (local_10 == 0) {
          uVar2 = *(undefined4 *)(local_14 + 0x138);
        }
        else {
          uVar2 = *(undefined4 *)(local_14 + 0x13c);
        }
        uVar2 = FUN_00023f1c(uVar2);
        *(undefined4 *)(local_18 + 0x24) = uVar2;
      }
      if (*param_1 == 0) {
        *param_1 = 1;
        iVar1 = FUN_00022214();
        param_1[3] = iVar1;
        FUN_00023280(param_3,param_1[3]);
      }
    }
  }
  return 0;
}



/* ===== FUN_0001b148 @ 0001b148 size=184 ===== */

undefined4 FUN_0001b148(int *param_1,undefined4 param_2,undefined4 param_3)

{
  printf((char *)(DAT_0001b208 + 0x1b180),DAT_0001b204 + 0x1b178,0x3fb,DAT_0001b200 + 0x1b16c);
  if ((*param_1 == 1) || (*param_1 == 2)) {
    if (*param_1 != 1) {
      *param_1 = 1;
    }
  }
  else {
    FUN_00023104(param_3,0x1c7);
    printf((char *)(DAT_0001b214 + 0x1b1cc),DAT_0001b210 + 0x1b1c4,0x3ff,DAT_0001b20c + 0x1b1b8);
  }
  return 0;
}



/* ===== FUN_0001b218 @ 0001b218 size=324 ===== */

undefined4 FUN_0001b218(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[0x108];
  printf((char *)(DAT_0001b364 + 0x1b25c),DAT_0001b360 + 0x1b254,0x40d,DAT_0001b35c + 0x1b248);
  if ((*param_1 == 1) || (*param_1 == 2)) {
    if (*param_1 != 2) {
      if ((param_1[0x105] != 0) && (*(int *)(iVar2 + 0x138) != 0)) {
        iVar3 = param_1[0x105];
        uVar1 = FUN_00023f1c(*(undefined4 *)(iVar2 + 0x138));
        *(undefined4 *)(iVar3 + 0x24) = uVar1;
      }
      if ((param_1[0x106] != 0) && (*(int *)(iVar2 + 0x13c) != 0)) {
        iVar3 = param_1[0x106];
        uVar1 = FUN_00023f1c(*(undefined4 *)(iVar2 + 0x13c));
        *(undefined4 *)(iVar3 + 0x24) = uVar1;
      }
      *param_1 = 2;
    }
  }
  else {
    FUN_00023104(param_3,0x1c7);
    printf((char *)(DAT_0001b370 + 0x1b2a8),DAT_0001b36c + 0x1b2a0,0x411,DAT_0001b368 + 0x1b294);
  }
  return 0;
}



/* ===== FUN_0001b374 @ 0001b374 size=456 ===== */

undefined4 FUN_0001b374(undefined4 *param_1,int param_2)

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
  printf((char *)(DAT_0001b544 + 0x1b438),DAT_0001b540 + 0x1b430,0x425,DAT_0001b53c + 0x1b424);
  snprintf(local_4c,0x3f,(char *)(DAT_0001b54c + 0x1b458),local_c,DAT_0001b548 + 0x1b44c);
  snprintf(local_8c,0x3f,(char *)(DAT_0001b554 + 0x1b47c),local_c,DAT_0001b550 + 0x1b470);
  iVar1 = FUN_00019204(local_4c,param_2 + 0x2e);
  if (iVar1 == 0) {
    iVar1 = FUN_00019204(local_8c,param_2 + 0x2e);
    if (iVar1 == 0) {
      FUN_0001ac10(param_1,0);
      FUN_0001ac10(param_1,1);
    }
    else {
      FUN_0001ac10(param_1,1);
    }
  }
  else {
    FUN_0001ac10(param_1,0);
  }
  if ((param_1[0x105] == 0) && (param_1[0x106] == 0)) {
    *param_1 = 0;
  }
  return 0;
}



/* ===== FUN_0001b558 @ 0001b558 size=856 ===== */

undefined4 FUN_0001b558(int *param_1,int param_2,undefined4 param_3)

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
  FUN_00023104(param_3,200);
  FUN_0002335c(param_3,0);
  FUN_000239a0(param_3,DAT_0001b8b0 + 0x1b5c8);
  iVar1 = FUN_00023150(param_2,&local_18);
  if (iVar1 < 0) {
    FUN_00023104(param_3,400);
    printf((char *)(DAT_0001b8bc + 0x1b618),DAT_0001b8b8 + 0x1b610,0x448,DAT_0001b8b4 + 0x1b604);
    uVar2 = 0;
  }
  else {
    FUN_000231b0(param_3,local_18);
    if (*param_1 != 0) {
      iVar1 = FUN_00023220(param_2,&local_1c);
      if ((iVar1 < 0) || (param_1[3] != local_1c)) {
        printf((char *)(DAT_0001b8c8 + 0x1b690),DAT_0001b8c4 + 0x1b688,0x44f,DAT_0001b8c0 + 0x1b67c)
        ;
        FUN_00023104(param_3,0x1c6);
        return 0;
      }
      FUN_00023280(param_3,local_1c);
    }
    if (local_c == 0) {
      if (*(int *)(param_2 + 4) != 0) {
        local_c = *(int *)(local_10 + 4);
        while ((local_c != 0 && (iVar1 = FUN_00019204(local_c,local_14), iVar1 == 0))) {
          local_c = *(int *)(local_c + 0x15c);
        }
        if (local_c == 0) {
          printf((char *)(DAT_0001b8e0 + 0x1b7b0),DAT_0001b8dc + 0x1b7a8,0x463,
                 DAT_0001b8d8 + 0x1b79c,local_14);
          FUN_00023104(param_3,0x1c6);
          return 0;
        }
        FUN_000188b4(param_1,local_c);
      }
    }
    else {
      iVar1 = FUN_00019204(local_c,local_14);
      if (iVar1 == 0) {
        printf((char *)(DAT_0001b8d4 + 0x1b70c),DAT_0001b8d0 + 0x1b704,0x458,DAT_0001b8cc + 0x1b6f8,
               local_14,local_c);
        FUN_00023104(param_3,0x1c3);
        return 0;
      }
    }
    switch(*(undefined4 *)(param_2 + 4)) {
    case 0:
      uVar2 = FUN_0001a12c(param_1,param_2,param_3);
      break;
    case 1:
      uVar2 = FUN_0001a1dc(param_1,param_2,param_3);
      break;
    case 2:
      uVar2 = FUN_0001acb4(param_1,param_2,param_3);
      break;
    case 3:
      uVar2 = FUN_0001b218(param_1,param_2,param_3);
      break;
    case 4:
    default:
      FUN_00023104(param_3,0x1f5);
      uVar2 = 0;
      break;
    case 5:
      uVar2 = FUN_0001b148(param_1,param_2,param_3);
      break;
    case 6:
      uVar2 = FUN_0001b374(param_1,param_2,param_3);
    }
  }
  return uVar2;
}



/* ===== FUN_0001b8e4 @ 0001b8e4 size=528 ===== */

int FUN_0001b8e4(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_c;
  
  if (*(int *)(param_1 + 0x410) != 0x3ff) {
    local_c = recv(*(int *)(param_1 + 4),(void *)(param_1 + 0x10 + *(int *)(param_1 + 0x410)),
                   0x3ff - *(int *)(param_1 + 0x410),0x40);
    if (local_c == 0) {
      printf((char *)(DAT_0001bafc + 0x1b970),DAT_0001baf8 + 0x1b968,0x486,DAT_0001baf4 + 0x1b95c);
      return -1;
    }
    if (local_c == -1) {
      iVar1 = FUN_000184f0();
      if ((iVar1 != 0xb) && (iVar1 = FUN_000184f0(), iVar1 != 4)) {
        uVar2 = FUN_000184f0();
        uVar2 = FUN_0001850c(uVar2);
        printf((char *)(DAT_0001bb08 + 0x1b9dc),DAT_0001bb04 + 0x1b9d4,0x48b,DAT_0001bb00 + 0x1b9c8,
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
    iVar1 = FUN_00022474(param_2,param_1 + 0x10,*(undefined4 *)(param_1 + 0x410));
    if (iVar1 < 0) {
      printf((char *)(DAT_0001bb14 + 0x1ba80),DAT_0001bb10 + 0x1ba78,0x49a,DAT_0001bb0c + 0x1ba6c);
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



/* ===== FUN_0001bb18 @ 0001bb18 size=268 ===== */

ssize_t FUN_0001bb18(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_40c;
  undefined1 auStack_408 [1020];
  size_t local_c;
  
  local_40c = 0;
  memset(auStack_408,0,0x3fc);
  local_c = FUN_00022830(param_2,&local_40c,0x400);
  if ((int)local_c < 0) {
    printf((char *)(DAT_0001bc2c + 0x1bb9c),DAT_0001bc28 + 0x1bb94,0x4ad,DAT_0001bc24 + 0x1bb88);
    local_c = -1;
  }
  else {
    local_c = send(*(int *)(param_1 + 4),&local_40c,local_c,0);
    if (local_c == -1) {
      uVar1 = FUN_000184f0();
      uVar1 = FUN_0001850c(uVar1);
      printf((char *)(DAT_0001bc38 + 0x1bc0c),DAT_0001bc34 + 0x1bc04,0x4b3,DAT_0001bc30 + 0x1bbf8,
             uVar1);
      local_c = -1;
    }
  }
  return local_c;
}



/* ===== FUN_0001bc3c @ 0001bc3c size=388 ===== */

ssize_t FUN_0001bc3c(int param_1,int param_2)

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
    iVar4 = FUN_000184f0();
    if ((iVar4 == 0xb) || (iVar4 = FUN_000184f0(), iVar4 == 4)) {
      local_18 = 0;
    }
    else {
      uVar5 = FUN_000184f0();
      uVar5 = FUN_0001850c(uVar5);
      printf((char *)(DAT_0001bdc8 + 0x1bd0c),DAT_0001bdc4 + 0x1bd04,0x4c6,DAT_0001bdc0 + 0x1bcf8,
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
      printf((char *)(DAT_0001bdd4 + 0x1bd94),DAT_0001bdd0 + 0x1bd8c,0x4d0,DAT_0001bdcc + 0x1bd80,
             pcVar6,(uint)uVar1,(uint)uVar3);
      uVar3 = ntohs(sStack_28.sa_data._0_2_);
      *(uint16_t *)(local_14 + 0x1c) = uVar3;
    }
  }
  return local_18;
}



/* ===== FUN_0001bdd8 @ 0001bdd8 size=388 ===== */

ssize_t FUN_0001bdd8(int param_1,int param_2)

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
    iVar4 = FUN_000184f0();
    if ((iVar4 == 0xb) || (iVar4 = FUN_000184f0(), iVar4 == 4)) {
      local_18 = 0;
    }
    else {
      uVar5 = FUN_000184f0();
      uVar5 = FUN_0001850c(uVar5);
      printf((char *)(DAT_0001bf64 + 0x1bea8),DAT_0001bf60 + 0x1bea0,0x4e3,DAT_0001bf5c + 0x1be94,
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
      printf((char *)(DAT_0001bf70 + 0x1bf30),DAT_0001bf6c + 0x1bf28,0x4ed,DAT_0001bf68 + 0x1bf1c,
             pcVar6,(uint)uVar1,(uint)uVar3);
      uVar3 = ntohs(sStack_28.sa_data._0_2_);
      *(uint16_t *)(local_14 + 0x1e) = uVar3;
    }
  }
  return local_18;
}



/* ===== FUN_0001bf74 @ 0001bf74 size=740 ===== */

size_t FUN_0001bf74(int *param_1,void *param_2,size_t param_3)

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
      iVar1 = FUN_000184f0();
      if ((iVar1 == 0xb) || (iVar1 = FUN_000184f0(), iVar1 == 4)) {
        param_3 = 0;
      }
      else {
        pcVar2 = inet_ntoa((in_addr)param_1[8]);
        uVar3 = FUN_000184f0();
        uVar3 = FUN_0001850c(uVar3);
        printf((char *)(DAT_0001c278 + 0x1c238),DAT_0001c274 + 0x1c230,0x528,DAT_0001c270 + 0x1c224,
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
      iVar1 = FUN_000184f0();
      if ((iVar1 == 0xb) || (iVar1 = FUN_000184f0(), iVar1 == 4)) {
        param_3 = 0;
      }
      else {
        pcVar2 = inet_ntoa((in_addr)param_1[8]);
        uVar3 = FUN_000184f0();
        uVar3 = FUN_0001850c(uVar3);
        printf((char *)(DAT_0001c260 + 0x1c084),DAT_0001c25c + 0x1c07c,0x50d,DAT_0001c258 + 0x1c070,
               pcVar2,uVar3);
        param_3 = 0xffffffff;
      }
    }
    else {
      local_18 = send(local_14,param_2,param_3,0);
      if (local_18 == -1) {
        iVar1 = FUN_000184f0();
        if ((iVar1 == 0xb) || (iVar1 = FUN_000184f0(), iVar1 == 4)) {
          param_3 = 0;
        }
        else {
          pcVar2 = inet_ntoa((in_addr)param_1[8]);
          uVar3 = FUN_000184f0();
          uVar3 = FUN_0001850c(uVar3);
          printf((char *)(DAT_0001c26c + 0x1c12c),DAT_0001c268 + 0x1c124,0x516,
                 DAT_0001c264 + 0x1c118,param_3,pcVar2,uVar3);
          param_3 = 0xffffffff;
        }
      }
    }
  }
  return param_3;
}



/* ===== FUN_0001c27c @ 0001c27c size=348 ===== */

int FUN_0001c27c(int param_1)

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
    iVar3 = FUN_00023dd8(local_1c,*(undefined4 *)(local_20 + 0x24));
    if (iVar3 < 1) {
      return local_14;
    }
    FUN_00023d28(local_1c,*(undefined4 *)(local_20 + 0x24),&local_24,&local_28);
    if (0 < *local_28) {
      puVar4 = (uint32_t *)(local_24 + 8);
      uVar1 = htonl(*(uint32_t *)(local_20 + 0x28));
      *puVar4 = uVar1;
      iVar3 = FUN_0001bf74(local_20,local_24,*local_28);
      if (iVar3 != *local_28) {
        return local_14;
      }
      *(int *)(local_20 + 0x2c) = *(int *)(local_20 + 0x2c) + 1;
      *(int *)(local_20 + 0x30) = *(int *)(local_20 + 0x30) + *local_28 + -0xc;
    }
    uVar2 = FUN_00023e84(local_1c,*(undefined4 *)(local_20 + 0x24));
    *(undefined4 *)(local_20 + 0x24) = uVar2;
    local_14 = local_14 + 1;
  } while( true );
}



/* ===== FUN_0001c3d8 @ 0001c3d8 size=348 ===== */

int FUN_0001c3d8(int param_1)

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
    iVar3 = FUN_00023dd8(local_1c,*(undefined4 *)(local_20 + 0x24));
    if (iVar3 < 1) {
      return local_14;
    }
    FUN_00023d28(local_1c,*(undefined4 *)(local_20 + 0x24),&local_24,&local_28);
    if (0 < *local_28) {
      puVar4 = (uint32_t *)(local_24 + 8);
      uVar1 = htonl(*(uint32_t *)(local_20 + 0x28));
      *puVar4 = uVar1;
      iVar3 = FUN_0001bf74(local_20,local_24,*local_28);
      if (iVar3 != *local_28) {
        return local_14;
      }
      *(int *)(local_20 + 0x2c) = *(int *)(local_20 + 0x2c) + 1;
      *(int *)(local_20 + 0x30) = *(int *)(local_20 + 0x30) + *local_28 + -0xc;
    }
    uVar2 = FUN_00023e84(local_1c,*(undefined4 *)(local_20 + 0x24));
    *(undefined4 *)(local_20 + 0x24) = uVar2;
    local_14 = local_14 + 1;
  } while( true );
}



/* ===== FUN_0001c534 @ 0001c534 size=2952 ===== */

undefined4 FUN_0001c534(uint *param_1)

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
           (iVar3 = FUN_00023dd8(*(undefined4 *)(local_2c + 0x138),local_30[9]), 0 < iVar3)) {
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
           (iVar3 = FUN_00023dd8(*(undefined4 *)(local_2c + 0x13c),local_34[9]), 0 < iVar3)) {
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
      printf((char *)(DAT_0001d0c4 + 0x1cb70),DAT_0001d0c0 + 0x1cb68,0x5c7,DAT_0001d0bc + 0x1cb5c,
             pcVar2);
      uVar4 = 0xffffffff;
    }
    else if (local_38 == 0) {
      uVar4 = 0;
    }
    else {
      if ((fStack_cc.fds_bits[*local_20 >> 5] >> (*local_20 & 0x1f) & 1U) != 0) {
        FUN_00019010(local_20);
      }
      local_c = (int *)local_20[3];
LAB_0001d0a0:
      piVar1 = local_c;
      if (local_c != (int *)0x0) {
        local_1c = local_c;
        local_3c = local_c[0x108];
        local_40 = (int *)local_c[0x105];
        local_44 = (int *)local_c[0x106];
        local_c = (int *)local_c[0x109];
        if ((fStack_cc.fds_bits[(uint)piVar1[1] >> 5] >> (piVar1[1] & 0x1fU) & 1U) != 0)
        goto LAB_0001cc4c;
        goto LAB_0001cd94;
      }
      uVar4 = 1;
    }
  }
  return uVar4;
LAB_0001cc4c:
  do {
    FUN_0002202c(local_2a4);
    FUN_0002202c(auStack_1f8);
    local_38 = FUN_0001b8e4(local_1c,local_2a4);
    if (local_38 == 0) break;
    if (local_38 < 0) {
      FUN_00019158(local_1c);
      local_1c = (int *)0x0;
      break;
    }
    if (local_2a4[0] == 2) {
      FUN_00022068(local_2a4);
    }
    else if (local_2a4[0] == 0) {
      local_38 = FUN_0001b558(local_1c,local_2a4,auStack_1f8);
      if (local_38 < 0) {
        printf((char *)(DAT_0001d0dc + 0x1cd44),DAT_0001d0d8 + 0x1cd3c,0x5f8,DAT_0001d0d4 + 0x1cd30)
        ;
      }
      else {
        FUN_0001bb18(local_1c,auStack_1f8);
      }
      FUN_00022068(local_2a4);
      FUN_00022068(auStack_1f8);
    }
    else {
      printf((char *)(DAT_0001d0d0 + 0x1ccf0),DAT_0001d0cc + 0x1cce8,0x5f1,DAT_0001d0c8 + 0x1ccdc);
      FUN_00022068(local_2a4);
    }
  } while (local_1c != (int *)0x0);
  if (local_1c != (int *)0x0) {
LAB_0001cd94:
    if (*local_1c == 2) {
      if ((local_40 != (int *)0x0) &&
         (iVar3 = FUN_00023dd8(*(undefined4 *)(local_3c + 0x138),local_40[9]), 0 < iVar3)) {
        if ((*local_40 == 0) ||
           ((fStack_14c.fds_bits[(uint)local_40[1] >> 5] >> (local_40[1] & 0x1fU) & 1U) == 0)) {
          if ((*local_40 == 0) &&
             ((fStack_14c.fds_bits[(uint)local_40[4] >> 5] >> (local_40[4] & 0x1fU) & 1U) != 0)) {
            FUN_0001c27c(local_1c);
          }
        }
        else {
          FUN_0001c27c(local_1c);
        }
      }
      if ((local_44 != (int *)0x0) &&
         (iVar3 = FUN_00023dd8(*(undefined4 *)(local_3c + 0x13c),local_44[9]), 0 < iVar3)) {
        if ((*local_44 == 0) ||
           ((fStack_14c.fds_bits[(uint)local_44[1] >> 5] >> (local_44[1] & 0x1fU) & 1U) == 0)) {
          if ((*local_44 == 0) &&
             ((fStack_14c.fds_bits[(uint)local_44[4] >> 5] >> (local_44[4] & 0x1fU) & 1U) != 0)) {
            FUN_0001c3d8(local_1c);
          }
        }
        else {
          FUN_0001c3d8(local_1c);
        }
      }
      if ((local_40 != (int *)0x0) && (*local_40 == 0)) {
        if ((fStack_cc.fds_bits[(uint)local_40[4] >> 5] >> (local_40[4] & 0x1fU) & 1U) != 0) {
          FUN_0001bc3c(local_1c,0);
        }
        if ((fStack_cc.fds_bits[(uint)local_40[5] >> 5] >> (local_40[5] & 0x1fU) & 1U) != 0) {
          FUN_0001bdd8(local_1c,0);
        }
      }
      if ((local_44 != (int *)0x0) && (*local_44 == 0)) {
        if ((fStack_cc.fds_bits[(uint)local_44[4] >> 5] >> (local_44[4] & 0x1fU) & 1U) != 0) {
          FUN_0001bc3c(local_1c,1);
        }
        if ((fStack_cc.fds_bits[(uint)local_44[5] >> 5] >> (local_44[5] & 0x1fU) & 1U) != 0) {
          FUN_0001bdd8(local_1c,1);
        }
      }
    }
  }
  goto LAB_0001d0a0;
}



/* ===== FUN_0001d0e0 @ 0001d0e0 size=1940 ===== */

int FUN_0001d0e0(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
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
    local_1c = FUN_00023f1c(local_30);
    for (local_18 = 0; local_18 < 600; local_18 = local_18 + 1) {
      iVar3 = FUN_00023e84(local_30,local_1c);
      iVar4 = FUN_00023ee0(local_30);
      if (iVar3 == iVar4) {
        FUN_00024000(local_30);
      }
      FUN_00023d28(local_30,local_1c,aiStack_9a0 + local_18,auStack_1c64 + local_18);
      aiStack_1304[local_18] = 0x5b0;
      local_1c = FUN_00023e84(local_30,local_1c);
    }
    aiStack_9a0[local_18] = 0;
    aiStack_1304[local_18] = 0;
    for (local_14 = *(int **)(local_2c + 0x154); local_14 != (int *)0x0;
        local_14 = (int *)local_14[0x10b]) {
      local_34 = local_14[0x105];
      if (((*local_14 == 2) && (local_34 != 0)) &&
         ((iVar3 = FUN_00023dd8(local_30,*(undefined4 *)(local_34 + 0x24)), iVar3 == 0 &&
          (iVar4 = *(int *)(local_34 + 0x24), iVar3 = FUN_00023f1c(local_30), iVar4 != iVar3)))) {
        uVar1 = FUN_00023ee0(local_30);
        *(undefined4 *)(local_34 + 0x24) = uVar1;
        pcVar2 = inet_ntoa((in_addr)local_14[2]);
        printf((char *)(DAT_0001d87c + 0x1d388),DAT_0001d878 + 0x1d380,0x658,DAT_0001d874 + 0x1d374,
               pcVar2);
      }
    }
    if (*(int *)(local_2c + 0x40) == 1) {
      if (((*(int *)(local_2c + 0xcc) == 0) || (*(int *)(local_2c + 0xcc) == 0)) &&
         (iVar3 = FUN_00024b90(param_2,param_3,local_2c + 0x48), iVar3 < 0)) {
        printf((char *)(DAT_0001d888 + 0x1d438),DAT_0001d884 + 0x1d430,0x660,DAT_0001d880 + 0x1d424)
        ;
      }
    }
    else if ((*(int *)(local_2c + 0x40) == 2) &&
            ((((*(int *)(local_2c + 0x110) == 0 || (*(int *)(local_2c + 0x110) == 0)) ||
              (*(int *)(local_2c + 0x108) == 0)) &&
             (iVar3 = FUN_00024bc8(param_2,param_3,local_2c + 0x48), iVar3 < 0)))) {
      printf((char *)(DAT_0001d894 + 120000),DAT_0001d890 + 0x1d4b8,0x66a,DAT_0001d88c + 0x1d4ac);
    }
    local_24 = 0;
    local_20 = 0;
    while( true ) {
      if (((param_3 <= local_24) || (aiStack_9a0[local_20] == 0)) || (aiStack_1304[local_20] < 1))
      goto LAB_0001d760;
      local_38 = 0;
      local_1c68 = 0;
      local_38 = FUN_00024348(param_2 + local_24,param_3 - local_24,&local_1c68);
      if (local_38 == 0) break;
      if (*(int *)(local_2c + 0x40) == 1) {
        local_28 = FUN_000253c0(local_2c + 0x118,local_38,local_1c68,param_6,param_5,param_6,
                                aiStack_9a0 + local_20,aiStack_1304 + local_20);
        if (local_28 < 1) {
          printf((char *)(DAT_0001d8ac + 0x1d620),DAT_0001d8a8 + 0x1d618,0x685,
                 DAT_0001d8a4 + 0x1d60c,local_28);
          return -1;
        }
      }
      else if (*(int *)(local_2c + 0x40) == 2) {
        local_28 = FUN_0002595c(local_2c + 0x118,local_38,local_1c68,param_6,param_5,param_6,
                                aiStack_9a0 + local_20,aiStack_1304 + local_20);
        if (local_28 < 1) {
          printf((char *)(DAT_0001d8b8 + 0x1d6bc),DAT_0001d8b4 + 0x1d6b4,0x68c,
                 DAT_0001d8b0 + 0x1d6a8,local_28);
          return -1;
        }
      }
      local_20 = local_20 + local_28;
      local_24 = (local_38 - param_2) + local_1c68;
    }
    printf((char *)(DAT_0001d8a0 + 0x1d56c),DAT_0001d89c + 0x1d564,0x67c,DAT_0001d898 + 0x1d558);
LAB_0001d760:
    for (local_18 = 0; local_18 < local_20; local_18 = local_18 + 1) {
      *(int *)auStack_1c64[local_18] = aiStack_1304[local_18];
      FUN_00023f58(local_30);
    }
    for (local_14 = *(int **)(local_2c + 0x154); local_14 != (int *)0x0;
        local_14 = (int *)local_14[0x10b]) {
      local_3c = local_14[0x105];
      if ((*local_14 == 2) && (local_3c != 0)) {
        FUN_0001e770(local_3c,*(undefined4 *)(local_2c + 0x144),*(undefined4 *)(local_2c + 0x140),
                     *(undefined4 *)(local_2c + 0x144),param_5,param_6,
                     *(undefined4 *)(local_2c + 0x120));
        FUN_0001c27c(local_14);
      }
    }
  }
  return param_3;
}



/* ===== FUN_0001d8bc @ 0001d8bc size=1968 ===== */

int FUN_0001d8bc(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 param_5,
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
    local_1c = FUN_00023f1c(local_30);
    for (local_18 = 0; local_18 < 600; local_18 = local_18 + 1) {
      iVar3 = FUN_00023e84(local_30,local_1c);
      iVar4 = FUN_00023ee0(local_30);
      if (iVar3 == iVar4) {
        FUN_00024000(local_30);
      }
      FUN_00023d28(local_30,local_1c,aiStack_9a0 + local_18,auStack_1c64 + local_18);
      aiStack_1304[local_18] = 0x5b0;
      local_1c = FUN_00023e84(local_30,local_1c);
    }
    aiStack_9a0[local_18] = 0;
    aiStack_1304[local_18] = 0;
    for (local_14 = *(int **)(local_2c + 0x154); local_14 != (int *)0x0;
        local_14 = (int *)local_14[0x10b]) {
      local_34 = local_14[0x105];
      if (((*local_14 == 2) && (local_34 != 0)) &&
         ((iVar3 = FUN_00023dd8(local_30,*(undefined4 *)(local_34 + 0x24)), iVar3 == 0 &&
          (iVar4 = *(int *)(local_34 + 0x24), iVar3 = FUN_00023f1c(local_30), iVar4 != iVar3)))) {
        uVar1 = FUN_00023ee0(local_30);
        *(undefined4 *)(local_34 + 0x24) = uVar1;
        pcVar2 = inet_ntoa((in_addr)local_14[2]);
        printf((char *)(DAT_0001e074 + 0x1db70),DAT_0001e070 + 0x1db68,0x6c9,DAT_0001e06c + 0x1db5c,
               pcVar2);
      }
    }
    if (*(int *)(local_2c + 0x40) == 1) {
      if (((*(int *)(local_2c + 0xcc) == 0) || (*(int *)(local_2c + 0xcc) == 0)) &&
         (iVar3 = FUN_00024b90(param_3,param_4,local_2c + 0x48), iVar3 < 0)) {
        printf((char *)(DAT_0001e080 + 0x1dc20),DAT_0001e07c + 0x1dc18,0x6d1,DAT_0001e078 + 0x1dc0c)
        ;
      }
    }
    else if ((*(int *)(local_2c + 0x40) == 2) &&
            ((((*(int *)(local_2c + 0x110) == 0 || (*(int *)(local_2c + 0x110) == 0)) ||
              (*(int *)(local_2c + 0x108) == 0)) &&
             (iVar3 = FUN_00024bc8(param_3,param_4,local_2c + 0x48), iVar3 < 0)))) {
      printf((char *)(DAT_0001e08c + 0x1dca8),DAT_0001e088 + 0x1dca0,0x6db,DAT_0001e084 + 0x1dc94);
    }
    local_24 = 0;
    local_20 = 0;
    while( true ) {
      if (((param_4 <= local_24) || (aiStack_9a0[local_20] == 0)) || (aiStack_1304[local_20] < 1))
      goto LAB_0001df48;
      local_38 = 0;
      local_1c68 = 0;
      local_38 = FUN_00024348(param_3 + local_24,param_4 - local_24,&local_1c68);
      if (local_38 == 0) break;
      if (*(int *)(local_2c + 0x40) == 1) {
        local_28 = FUN_000253c0(local_2c + 0x118,local_38,local_1c68,param_6,param_5,param_6,
                                aiStack_9a0 + local_20,aiStack_1304 + local_20);
        if (local_28 < 1) {
          printf((char *)(DAT_0001e0a4 + 0x1de08),DAT_0001e0a0 + 0x1de00,0x6f6,
                 DAT_0001e09c + 0x1ddf4,local_28);
          return -1;
        }
      }
      else if (*(int *)(local_2c + 0x40) == 2) {
        local_28 = FUN_0002595c(local_2c + 0x118,local_38,local_1c68,param_6,param_5,param_6,
                                aiStack_9a0 + local_20,aiStack_1304 + local_20);
        if (local_28 < 1) {
          printf((char *)(DAT_0001e0b0 + 0x1dea4),DAT_0001e0ac + 0x1de9c,0x6fd,
                 DAT_0001e0a8 + 0x1de90,local_28);
          return -1;
        }
      }
      local_20 = local_20 + local_28;
      local_24 = (local_38 - param_3) + local_1c68;
    }
    printf((char *)(DAT_0001e098 + 0x1dd54),DAT_0001e094 + 0x1dd4c,0x6ed,DAT_0001e090 + 0x1dd40);
LAB_0001df48:
    for (local_18 = 0; local_18 < local_20; local_18 = local_18 + 1) {
      *(int *)auStack_1c64[local_18] = aiStack_1304[local_18];
      FUN_00023f58(local_30);
    }
    for (local_14 = *(int **)(local_2c + 0x154); local_14 != (int *)0x0;
        local_14 = (int *)local_14[0x10b]) {
      local_3c = local_14[0x105];
      if ((*local_14 == 2) && (local_3c != 0)) {
        FUN_0001e770(local_3c,*(undefined4 *)(local_2c + 0x144),*(undefined4 *)(local_2c + 0x140),
                     *(undefined4 *)(local_2c + 0x144),param_5,param_6,
                     *(undefined4 *)(local_2c + 0x120));
        FUN_0001c27c(local_14);
      }
    }
    FUN_0001c534(param_1);
  }
  return param_4;
}



/* ===== FUN_0001e0b4 @ 0001e0b4 size=1140 ===== */

undefined4
FUN_0001e0b4(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
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
    local_1c = FUN_00023f1c(local_28);
    for (local_18 = 0; local_18 < 0x14; local_18 = local_18 + 1) {
      iVar3 = FUN_00023e84(local_28,local_1c);
      iVar4 = FUN_00023ee0(local_28);
      if (iVar3 == iVar4) {
        FUN_00024000(local_28);
      }
      FUN_00023d28(local_28,local_1c,auStack_84 + local_18,auStack_128 + local_18);
      auStack_d8[local_18] = 0x5b0;
      local_1c = FUN_00023e84(local_28,local_1c);
    }
    auStack_84[local_18] = 0;
    auStack_d8[local_18] = 0;
    for (local_14 = *(int **)(local_24 + 0x154); local_14 != (int *)0x0;
        local_14 = (int *)local_14[0x10b]) {
      local_2c = local_14[0x106];
      if (((*local_14 == 2) && (local_2c != 0)) &&
         ((iVar3 = FUN_00023dd8(local_28,*(undefined4 *)(local_2c + 0x24)), iVar3 == 0 &&
          (iVar4 = *(int *)(local_2c + 0x24), iVar3 = FUN_00023f1c(local_28), iVar4 != iVar3)))) {
        uVar1 = FUN_00023ee0(local_28);
        *(undefined4 *)(local_2c + 0x24) = uVar1;
        pcVar2 = inet_ntoa((in_addr)local_14[2]);
        printf((char *)(DAT_0001e530 + 0x1e2fc),DAT_0001e52c + 0x1e2f4,0x73c,DAT_0001e528 + 0x1e2e8,
               pcVar2);
      }
    }
    iVar3 = *(int *)(local_24 + 0x44);
    if (0x4000 < iVar3) {
      if (iVar3 < 0x4003) {
        local_20 = FUN_00025f30(local_24 + 0x128,param_2,param_3,param_6,param_5,param_6,auStack_84,
                                auStack_d8);
        if (local_20 < 1) {
          printf((char *)(DAT_0001e53c + 0x1e3ac),DAT_0001e538 + 0x1e3a4,0x745,
                 DAT_0001e534 + 0x1e398,local_20);
          return 0xffffffff;
        }
      }
      else if (iVar3 == 0x4003) {
        local_20 = FUN_00026248(local_24 + 0x128,param_2,param_3,param_6,param_5,param_6,auStack_84,
                                auStack_d8);
        if (local_20 < 1) {
          printf((char *)(DAT_0001e548 + 0x1e418),DAT_0001e544 + 0x1e410,0x74c,
                 DAT_0001e540 + 0x1e404,local_20);
          return 0xffffffff;
        }
      }
    }
    for (local_18 = 0; local_18 < local_20; local_18 = local_18 + 1) {
      *(undefined4 *)auStack_128[local_18] = auStack_d8[local_18];
      FUN_00023f58(local_28);
    }
    for (local_14 = *(int **)(local_24 + 0x154); local_14 != (int *)0x0;
        local_14 = (int *)local_14[0x10b]) {
      local_30 = local_14[0x106];
      if ((*local_14 == 2) && (local_30 != 0)) {
        FUN_0001e770(local_30,*(undefined4 *)(local_24 + 0x14c),*(undefined4 *)(local_24 + 0x148),
                     *(undefined4 *)(local_24 + 0x14c),param_5,param_6,
                     *(undefined4 *)(local_24 + 0x130));
        FUN_0001c3d8(local_14);
      }
    }
  }
  return param_3;
}



/* ===== FUN_0001e54c @ 0001e54c size=148 ===== */

longlong FUN_0001e54c(void)

{
  longlong lVar1;
  timespec local_18;
  
  clock_gettime(1,&local_18);
  lVar1 = FUN_00026394(local_18.tv_nsec,local_18.tv_nsec >> 0x1f,1000,0);
  return lVar1 + CONCAT44((local_18.tv_sec >> 0x1f) * 1000000 +
                          (int)((ulonglong)(uint)local_18.tv_sec * 1000000 >> 0x20),
                          (int)((ulonglong)(uint)local_18.tv_sec * 1000000));
}



/* ===== FUN_0001e5e0 @ 0001e5e0 size=120 ===== */

undefined8 FUN_0001e5e0(void)

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



/* ===== FUN_0001e658 @ 0001e658 size=48 ===== */

longlong FUN_0001e658(void)

{
  longlong lVar1;
  
  lVar1 = FUN_0001e5e0();
  return lVar1 + CONCAT44(DAT_0001e68c,DAT_0001e688);
}



/* ===== FUN_0001e690 @ 0001e690 size=112 ===== */

undefined4
FUN_0001e690(int param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,int param_6)

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



/* ===== FUN_0001e770 @ 0001e770 size=1168 ===== */

size_t FUN_0001e770(int *param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,
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
    uVar6 = (int)((ulonglong)*(undefined8 *)(param_1 + 0xe) >> 0x20) + DAT_0001eadc +
            (uint)CARRY4(uVar8,DAT_0001ead8);
    bVar7 = uVar6 <= param_6;
    if (param_6 == uVar6) {
      bVar7 = uVar8 + DAT_0001ead8 <= param_5;
    }
    if (!bVar7) {
      return 0;
    }
  }
  uStack_3c = uStack_48;
  local_38 = local_44;
  local_14 = FUN_00026394(param_3 + param_5,param_4 + param_6 + (uint)CARRY4(param_3,param_5),
                          1000000,0);
  FUN_00026394(param_3 + param_5,param_4 + param_6 + (uint)CARRY4(param_3,param_5),1000000,0);
  local_18 = FUN_00026394(0,extraout_r2,1000000,0);
  local_1c = FUN_00026394((int)((ulonglong)param_7 * (ulonglong)param_5),
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
      iVar2 = FUN_000184f0();
      if ((iVar2 != 0xb) && (iVar2 = FUN_000184f0(), iVar2 != 4)) {
        pcVar3 = inet_ntoa((in_addr)param_1[8]);
        uVar4 = FUN_000184f0();
        uVar4 = FUN_0001850c(uVar4);
        printf((char *)(DAT_0001eaf4 + 0x1ebf4),DAT_0001eaf0 + 0x1ebec,0x7f0,DAT_0001eaec + 0x1ebe0,
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
      iVar2 = FUN_000184f0();
      if ((iVar2 != 0xb) && (iVar2 = FUN_000184f0(), iVar2 != 4)) {
        pcVar3 = inet_ntoa((in_addr)param_1[8]);
        uVar4 = FUN_000184f0();
        uVar4 = FUN_0001850c(uVar4);
        printf((char *)(DAT_0001eae8 + 0x1eac8),DAT_0001eae4 + 0x1eac0,0x7de,DAT_0001eae0 + 0x1eab4,
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



/* ===== FUN_0001ec20 @ 0001ec20 size=68 ===== */

void * FUN_0001ec20(size_t param_1)

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



/* ===== FUN_0001ec64 @ 0001ec64 size=48 ===== */

void FUN_0001ec64(void *param_1)

{
  if (param_1 != (void *)0x0) {
    free(param_1);
  }
  return;
}



/* ===== FUN_0001ec94 @ 0001ec94 size=104 ===== */

void * FUN_0001ec94(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = calloc(1,param_2);
  if ((__dest != (void *)0x0) && (param_1 != (void *)0x0)) {
    memcpy(__dest,param_1,param_2);
  }
  return __dest;
}



/* ===== FUN_0001ecfc @ 0001ecfc size=120 ===== */

void * FUN_0001ecfc(char *param_1)

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



/* ===== FUN_0001ed74 @ 0001ed74 size=172 ===== */

undefined4 FUN_0001ed74(int param_1,int param_2,int param_3)

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



/* ===== FUN_0001ee20 @ 0001ee20 size=204 ===== */

undefined4 FUN_0001ee20(int param_1,int param_2,char *param_3)

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



/* ===== FUN_0001eeec @ 0001eeec size=928 ===== */

int FUN_0001eeec(byte *param_1,int *param_2)

{
  byte *__src;
  int iVar1;
  int iVar2;
  size_t local_1c;
  byte *local_18;
  byte *local_14;
  
  iVar2 = DAT_0001f28c + 0x1ef0c;
  local_14 = param_1;
  iVar1 = FUN_0001ee20(DAT_0001f290 + 0x1ef24,3,param_1);
  *param_2 = iVar1;
  if (*param_2 == 2) {
    printf((char *)(DAT_0001f29c + 0x1ef70),DAT_0001f298 + 0x1ef68,0xaa,DAT_0001f294 + 0x1ef5c,
           param_1);
    iVar1 = -1;
  }
  else {
    *(undefined2 *)(param_2 + 1) = 0;
    *(undefined1 *)((int)param_2 + 6) = 0;
    *(undefined1 *)((int)param_2 + 0x26) = 0;
    for (; ((*(ushort *)(**(int **)(iVar2 + DAT_0001f2a0) + (uint)*local_14 * 2) & 2) != 0 ||
           (*local_14 == 0x3a)); local_14 = local_14 + 1) {
    }
    if ((*local_14 == 0x2f) && (local_14[1] == 0x2f)) {
      local_14 = local_14 + 2;
      for (local_18 = local_14;
          (((*(ushort *)(**(int **)(iVar2 + DAT_0001f2a0) + (uint)*local_18 * 2) & 0x80) != 0 &&
           (*local_18 != 0x3a)) && (*local_18 != 0x2f)); local_18 = local_18 + 1) {
      }
      if (*local_18 == 0x3a) {
        iVar1 = sscanf((char *)(local_18 + 1),(char *)(DAT_0001f2b0 + 0x1f0d4),&local_1c);
        if (iVar1 != 1) {
          printf((char *)(DAT_0001f2bc + 0x1f10c),DAT_0001f2b8 + 0x1f104,0xbc,DAT_0001f2b4 + 0x1f0f8
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
             (*(ushort *)(**(int **)(iVar2 + DAT_0001f2a0) + (uint)*local_18 * 2) & 0x80) != 0 &&
             (*local_18 != 0x2f)); local_18 = local_18 + 1) {
      }
      if (*local_18 == 0x2f) {
        local_14 = local_18;
        while ((*(ushort *)(**(int **)(iVar2 + DAT_0001f2a0) + (uint)*local_18 * 2) & 0x80) != 0) {
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
      printf((char *)(DAT_0001f2ac + 0x1f034),DAT_0001f2a8 + 0x1f02c,0xb3,DAT_0001f2a4 + 0x1f020,
             param_1);
      iVar1 = -1;
    }
  }
  return iVar1;
}



/* ===== FUN_0001f2c0 @ 0001f2c0 size=256 ===== */

size_t FUN_0001f2c0(undefined4 *param_1,char *param_2,size_t param_3)

{
  undefined4 uVar1;
  size_t sVar2;
  
  if (*(short *)(param_1 + 1) == 0) {
    uVar1 = FUN_0001ed74(DAT_0001f3c8 + 0x1f370,3,*param_1);
    snprintf(param_2,param_3,(char *)(DAT_0001f3cc + 0x1f3a0),uVar1,(int)param_1 + 6,
             (int)param_1 + 0x26);
  }
  else {
    uVar1 = FUN_0001ed74(DAT_0001f3c0 + 0x1f308,3,*param_1);
    snprintf(param_2,param_3,(char *)(DAT_0001f3c4 + 0x1f344),uVar1,(int)param_1 + 6,
             (uint)*(ushort *)(param_1 + 1),(int)param_1 + 0x26);
  }
  sVar2 = strlen(param_2);
  return sVar2;
}



/* ===== FUN_0001f3d0 @ 0001f3d0 size=788 ===== */

undefined4 FUN_0001f3d0(undefined4 *param_1,byte *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int local_18;
  byte *local_14;
  
  iVar2 = DAT_0001f6e4 + 0x1f3f0;
  local_14 = param_2;
  local_18 = FUN_0001ee20(DAT_0001f6e8 + 0x1f408,0xc,param_2);
  if (local_18 == 0xb) {
    local_18 = FUN_0001ee20(DAT_0001f700 + 0x1f570,2,local_14);
    if (local_18 == 1) {
      if (*local_14 == 0x24) {
        *param_1 = 2;
        *(byte *)(param_1 + 1) = local_14[1];
        *(undefined2 *)((int)param_1 + 6) = *(undefined2 *)(local_14 + 2);
        *(undefined1 *)(param_1 + 2) = 0;
        uVar1 = 0;
      }
      else {
        printf((char *)(DAT_0001f71c + 0x1f694),DAT_0001f718 + 0x1f68c,0x10c,DAT_0001f714 + 0x1f680,
               param_2);
        uVar1 = 0xffffffff;
      }
    }
    else {
      *param_1 = 1;
      param_1[1] = local_18;
      while ((*(ushort *)(**(int **)(iVar2 + DAT_0001f6ec) + (uint)*local_14 * 2) & 0x80) != 0) {
        local_14 = local_14 + 1;
      }
      local_14 = local_14 + 1;
      iVar2 = sscanf((char *)local_14,(char *)(DAT_0001f704 + 0x1f600),&local_18);
      if (iVar2 == 1) {
        param_1[2] = local_18;
        uVar1 = 0;
      }
      else {
        printf((char *)(DAT_0001f710 + 0x1f63c),DAT_0001f70c + 0x1f634,0x104,DAT_0001f708 + 0x1f628,
               param_2);
        uVar1 = 0xffffffff;
      }
    }
  }
  else {
    *param_1 = 0;
    param_1[1] = local_18;
    while ((*(ushort *)(**(int **)(iVar2 + DAT_0001f6ec) + (uint)*local_14 * 2) & 0x80) != 0) {
      local_14 = local_14 + 1;
    }
    local_14 = local_14 + 1;
    local_18 = FUN_0001eeec(local_14,param_1 + 2);
    if (local_18 < 1) {
      uVar1 = 0xffffffff;
    }
    else {
      while ((*(ushort *)(**(int **)(iVar2 + DAT_0001f6ec) + (uint)*local_14 * 2) & 0x80) != 0) {
        local_14 = local_14 + 1;
      }
      local_14 = local_14 + 1;
      local_18 = FUN_0001ee20(DAT_0001f6f0 + 0x1f50c,2,local_14);
      if (local_18 == 1) {
        printf((char *)(DAT_0001f6fc + 0x1f54c),DAT_0001f6f8 + 0x1f544,0xf7,DAT_0001f6f4 + 0x1f538,
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



/* ===== FUN_0001f720 @ 0001f720 size=536 ===== */

char * FUN_0001f720(int *param_1,char *param_2,size_t param_3)

{
  undefined4 uVar1;
  size_t sVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  
  if (*param_1 == 0) {
    uVar1 = FUN_0001ed74(DAT_0001f938 + 0x1f770,0xc,param_1[1]);
    snprintf(param_2,param_3,(char *)(DAT_0001f93c + 0x1f784),uVar1);
    sVar2 = strlen(param_2);
    pcVar5 = param_2 + sVar2;
    iVar6 = param_3 - sVar2;
    if (iVar6 < 2) {
      pcVar5 = pcVar5 + -(int)param_2;
    }
    else {
      iVar3 = FUN_0001f2c0(param_1 + 2,pcVar5,iVar6);
      pcVar5 = pcVar5 + iVar3;
      if (iVar6 - iVar3 < 2) {
        pcVar5 = pcVar5 + -(int)param_2;
      }
      else {
        uVar1 = FUN_0001ed74(DAT_0001f940 + 0x1f850,2,param_1[0x1c]);
        snprintf(pcVar5,iVar6 - iVar3,(char *)(DAT_0001f944 + 0x1f864),uVar1);
        sVar2 = strlen(pcVar5);
        pcVar5 = pcVar5 + (sVar2 - (int)param_2);
      }
    }
  }
  else if (*param_1 == 1) {
    uVar1 = FUN_0001ed74(DAT_0001f948 + 0x1f8c4,2,param_1[1]);
    iVar6 = param_1[2];
    uVar4 = FUN_0001ed74(DAT_0001f94c + 0x1f8f0,0x2b,param_1[2]);
    snprintf(param_2,param_3,(char *)(DAT_0001f950 + 0x1f910),uVar1,iVar6,uVar4);
    pcVar5 = (char *)strlen(param_2);
  }
  else {
    pcVar5 = (char *)0x0;
  }
  return pcVar5;
}



/* ===== FUN_0001f954 @ 0001f954 size=952 ===== */

undefined4 FUN_0001f954(int param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_14;
  char *local_10;
  int local_c;
  
  local_c = param_1 + 4;
  if (*(int *)(param_1 + 0x80) != 0) {
    FUN_0001ec64(*(undefined4 *)(param_1 + 0x80));
    *(undefined4 *)(local_c + 0x7c) = 0;
  }
  uVar1 = FUN_0001ec20(0x14);
  *(undefined4 *)(local_c + 0x7c) = uVar1;
  if (*(int *)(local_c + 0x7c) == 0) {
    printf((char *)(DAT_0001fd18 + 0x1f9f0),DAT_0001fd14 + 0x1f9e8,0x153,DAT_0001fd10 + 0x1f9dc,
           DAT_0001fd0c + 0x1f9d0);
    uVar1 = 0xffffffff;
  }
  else {
    local_10 = strstr(param_2,(char *)(DAT_0001fd1c + 0x1fa04));
    if (local_10 == (char *)0x0) {
      printf((char *)(DAT_0001fd28 + 0x1fa44),DAT_0001fd24 + 0x1fa3c,0x159,DAT_0001fd20 + 0x1fa30,
             param_2);
      FUN_0001ec64(*(undefined4 *)(local_c + 0x7c));
      *(undefined4 *)(local_c + 0x7c) = 0;
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = FUN_0001ee20(DAT_0001fd2c + 0x1fa7c,3,local_10);
      **(undefined4 **)(local_c + 0x7c) = uVar1;
      local_10 = strstr(param_2,(char *)(DAT_0001fd30 + 0x1fa9c));
      if ((local_10 != (char *)0x0) &&
         (iVar2 = sscanf(local_10,(char *)(DAT_0001fd34 + 0x1fac8),&local_14), iVar2 == 1)) {
        *(uint *)(*(int *)(local_c + 0x7c) + 4) = *(uint *)(*(int *)(local_c + 0x7c) + 4) | 1;
        *(undefined4 *)(*(int *)(local_c + 0x7c) + 8) = local_14;
      }
      local_10 = strstr(param_2,(char *)(DAT_0001fd38 + 0x1fb14));
      if (local_10 != (char *)0x0) {
        *(uint *)(*(int *)(local_c + 0x7c) + 4) = *(uint *)(*(int *)(local_c + 0x7c) + 4) | 2;
      }
      local_10 = strstr(param_2,(char *)(DAT_0001fd3c + 0x1fb54));
      if (local_10 != (char *)0x0) {
        *(uint *)(*(int *)(local_c + 0x7c) + 4) = *(uint *)(*(int *)(local_c + 0x7c) + 4) | 4;
      }
      local_10 = strstr(param_2,(char *)(DAT_0001fd40 + 0x1fb94));
      if ((local_10 != (char *)0x0) &&
         (iVar2 = sscanf(local_10,(char *)(DAT_0001fd44 + 0x1fbc0),&local_14), iVar2 == 1)) {
        *(uint *)(*(int *)(local_c + 0x7c) + 4) = *(uint *)(*(int *)(local_c + 0x7c) + 4) | 8;
        *(short *)(*(int *)(local_c + 0x7c) + 0xc) = (short)local_14;
      }
      local_10 = strstr(param_2,(char *)(DAT_0001fd48 + 0x1fc10));
      if ((local_10 != (char *)0x0) &&
         (iVar2 = sscanf(local_10,(char *)(DAT_0001fd4c + 0x1fc3c),&local_14), iVar2 == 1)) {
        *(uint *)(*(int *)(local_c + 0x7c) + 4) = *(uint *)(*(int *)(local_c + 0x7c) + 4) | 0x10;
        *(short *)(*(int *)(local_c + 0x7c) + 0xe) = (short)local_14;
      }
      local_10 = strstr(param_2,(char *)(DAT_0001fd50 + 0x1fc8c));
      if ((local_10 != (char *)0x0) &&
         (iVar2 = sscanf(local_10,(char *)(DAT_0001fd54 + 0x1fcb8),&local_14), iVar2 == 1)) {
        *(uint *)(*(int *)(local_c + 0x7c) + 4) = *(uint *)(*(int *)(local_c + 0x7c) + 4) | 0x20;
        *(undefined1 *)(*(int *)(local_c + 0x7c) + 0x10) = (undefined1)local_14;
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ===== FUN_0001fd58 @ 0001fd58 size=1192 ===== */

char * FUN_0001fd58(int param_1,char *param_2,size_t param_3)

{
  undefined4 uVar1;
  size_t sVar2;
  size_t local_2c;
  char *local_14;
  
  if (*(int *)(param_1 + 0x80) == 0) {
    local_14 = (char *)0x0;
  }
  else {
    uVar1 = FUN_0001ed74(DAT_00020200 + 0x1fdb8,3,**(undefined4 **)(param_1 + 0x80));
    snprintf(param_2,param_3,(char *)(DAT_00020204 + 0x1fdcc),uVar1);
    local_2c = strlen(param_2);
    local_14 = param_2 + local_2c;
    local_2c = param_3 - local_2c;
    if ((int)local_2c < 2) {
      local_14 = local_14 + -(int)param_2;
    }
    else {
      if ((*(uint *)(*(int *)(param_1 + 0x80) + 4) & 1) != 0) {
        snprintf(local_14,local_2c,(char *)(DAT_00020208 + 0x1fe54),
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
          snprintf(local_14,local_2c,(char *)(DAT_00020210 + 0x1ff48));
          sVar2 = strlen(local_14);
          local_14 = local_14 + sVar2;
          local_2c = local_2c - sVar2;
          if ((int)local_2c < 2) {
            return local_14 + -(int)param_2;
          }
        }
      }
      else {
        snprintf(local_14,local_2c,(char *)(DAT_0002020c + 0x1fecc));
        sVar2 = strlen(local_14);
        local_14 = local_14 + sVar2;
        local_2c = local_2c - sVar2;
        if ((int)local_2c < 2) {
          return local_14 + -(int)param_2;
        }
      }
      if ((*(uint *)(*(int *)(param_1 + 0x80) + 4) & 8) != 0) {
        snprintf(local_14,local_2c,(char *)(DAT_00020214 + 0x1ffec),
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
        snprintf(local_14,local_2c,(char *)(DAT_00020218 + 0x2008c),
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
        snprintf(local_14,local_2c,(char *)(DAT_0002021c + 0x2012c),
                 (uint)*(byte *)(*(int *)(param_1 + 0x80) + 0x10),
                 *(byte *)(*(int *)(param_1 + 0x80) + 0x10) + 1);
        sVar2 = strlen(local_14);
        local_14 = local_14 + sVar2;
        local_2c = local_2c - sVar2;
        if ((int)local_2c < 2) {
          return local_14 + -(int)param_2;
        }
      }
      snprintf(local_14,local_2c,(char *)(DAT_00020220 + 0x2018c));
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



/* ===== FUN_0002024c @ 0002024c size=44 ===== */

undefined4 FUN_0002024c(void)

{
  return 0;
}



/* ===== FUN_000202a0 @ 000202a0 size=44 ===== */

undefined4 FUN_000202a0(void)

{
  return 0;
}



/* ===== FUN_000202f4 @ 000202f4 size=44 ===== */

undefined4 FUN_000202f4(void)

{
  return 0;
}



/* ===== FUN_00020320 @ 00020320 size=312 ===== */

undefined4 FUN_00020320(int param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x74) != 0) {
    FUN_0001ec64(*(undefined4 *)(param_1 + 0x74));
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  uVar1 = FUN_0001ec20(4);
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  if (*(int *)(param_1 + 0x74) == 0) {
    printf((char *)(DAT_00020464 + 0x203bc),DAT_00020460 + 0x203b4,0x201,DAT_0002045c + 0x203a8,
           DAT_00020458 + 0x2039c);
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = sscanf(param_2,(char *)(DAT_00020468 + 0x203dc),*(undefined4 *)(param_1 + 0x74));
    if (iVar2 == 1) {
      uVar1 = 0;
    }
    else {
      FUN_0001ec64(*(undefined4 *)(param_1 + 0x74));
      *(undefined4 *)(param_1 + 0x74) = 0;
      printf((char *)(DAT_00020478 + 0x20440),DAT_00020474 + 0x20438,0x201,DAT_00020470 + 0x2042c,
             DAT_0002046c + 0x20420,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_0002047c @ 0002047c size=104 ===== */

size_t FUN_0002047c(int param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  
  if (*(int *)(param_1 + 0x74) == 0) {
    sVar1 = 0;
  }
  else {
    snprintf(param_2,param_3,(char *)(DAT_000204e4 + 0x204c0),**(undefined4 **)(param_1 + 0x74));
    sVar1 = strlen(param_2);
  }
  return sVar1;
}



/* ===== FUN_000204e8 @ 000204e8 size=312 ===== */

undefined4 FUN_000204e8(int param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x7c) != 0) {
    FUN_0001ec64(*(undefined4 *)(param_1 + 0x7c));
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  uVar1 = FUN_0001ec20(4);
  *(undefined4 *)(param_1 + 0x7c) = uVar1;
  if (*(int *)(param_1 + 0x7c) == 0) {
    printf((char *)(DAT_0002062c + 0x20584),DAT_00020628 + 0x2057c,0x202,DAT_00020624 + 0x20570,
           DAT_00020620 + 0x20564);
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = sscanf(param_2,(char *)(DAT_00020630 + 0x205a4),*(undefined4 *)(param_1 + 0x7c));
    if (iVar2 == 1) {
      uVar1 = 0;
    }
    else {
      FUN_0001ec64(*(undefined4 *)(param_1 + 0x7c));
      *(undefined4 *)(param_1 + 0x7c) = 0;
      printf((char *)(DAT_00020640 + 0x20608),DAT_0002063c + 0x20600,0x202,DAT_00020638 + 0x205f4,
             DAT_00020634 + 0x205e8,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_00020644 @ 00020644 size=104 ===== */

size_t FUN_00020644(int param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  
  if (*(int *)(param_1 + 0x7c) == 0) {
    sVar1 = 0;
  }
  else {
    snprintf(param_2,param_3,(char *)(DAT_000206ac + 0x20688),**(undefined4 **)(param_1 + 0x7c));
    sVar1 = strlen(param_2);
  }
  return sVar1;
}



/* ===== FUN_000206b0 @ 000206b0 size=312 ===== */

undefined4 FUN_000206b0(int param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xa0) != 0) {
    FUN_0001ec64(*(undefined4 *)(param_1 + 0xa0));
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  uVar1 = FUN_0001ec20(4);
  *(undefined4 *)(param_1 + 0xa0) = uVar1;
  if (*(int *)(param_1 + 0xa0) == 0) {
    printf((char *)(DAT_000207f4 + 0x2074c),DAT_000207f0 + 0x20744,0x203,DAT_000207ec + 0x20738,
           DAT_000207e8 + 0x2072c);
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = sscanf(param_2,(char *)(DAT_000207f8 + 0x2076c),*(undefined4 *)(param_1 + 0xa0));
    if (iVar2 == 1) {
      uVar1 = 0;
    }
    else {
      FUN_0001ec64(*(undefined4 *)(param_1 + 0xa0));
      *(undefined4 *)(param_1 + 0xa0) = 0;
      printf((char *)(DAT_00020808 + 0x207d0),DAT_00020804 + 0x207c8,0x203,DAT_00020800 + 0x207bc,
             DAT_000207fc + 0x207b0,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_0002080c @ 0002080c size=104 ===== */

size_t FUN_0002080c(int param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  
  if (*(int *)(param_1 + 0xa0) == 0) {
    sVar1 = 0;
  }
  else {
    snprintf(param_2,param_3,(char *)(DAT_00020874 + 0x20850),**(undefined4 **)(param_1 + 0xa0));
    sVar1 = strlen(param_2);
  }
  return sVar1;
}



/* ===== FUN_00020878 @ 00020878 size=548 ===== */

undefined4 FUN_00020878(int param_1,byte *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint local_18;
  byte *local_14;
  
  iVar2 = DAT_00020a9c + 0x20898;
  local_18 = 0;
  if (*(int *)(param_1 + 0x9c) != 0) {
    FUN_0001ec64(*(undefined4 *)(param_1 + 0x9c));
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  uVar1 = FUN_0001ec20(0x40);
  *(undefined4 *)(param_1 + 0x9c) = uVar1;
  local_14 = param_2;
  if (*(int *)(param_1 + 0x9c) == 0) {
    printf((char *)(DAT_00020aac + 0x2092c),DAT_00020aa8 + 0x20924,0x22d,DAT_00020aa4 + 0x20918,
           DAT_00020aa0 + 0x2090c);
    uVar1 = 0xffffffff;
  }
  else {
    for (; ((*(ushort *)(**(int **)(iVar2 + DAT_00020ab0) + (uint)*local_14 * 2) & 0x80) != 0 &&
           (*local_14 != 0x3a)); local_14 = local_14 + 1) {
    }
    if (*local_14 == 0x3a) {
      do {
        local_14 = local_14 + 1;
      } while (*local_14 == 0x20);
      while (((*(ushort *)(**(int **)(iVar2 + DAT_00020ab0) + (uint)*local_14 * 2) & 0x40) != 0 &&
             (local_18 < 0x3f))) {
        *(byte *)(*(int *)(param_1 + 0x9c) + local_18) = *local_14;
        local_18 = local_18 + 1;
        local_14 = local_14 + 1;
      }
      *(undefined1 *)(*(int *)(param_1 + 0x9c) + local_18) = 0;
      uVar1 = 0;
    }
    else {
      FUN_0001ec64(*(undefined4 *)(param_1 + 0x9c));
      *(undefined4 *)(param_1 + 0x9c) = 0;
      printf((char *)(DAT_00020ac0 + 0x209dc),DAT_00020abc + 0x209d4,0x22d,DAT_00020ab8 + 0x209c8,
             DAT_00020ab4 + 0x209bc,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_00020ac4 @ 00020ac4 size=100 ===== */

size_t FUN_00020ac4(int param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  
  if (*(int *)(param_1 + 0x9c) == 0) {
    sVar1 = 0;
  }
  else {
    snprintf(param_2,param_3,(char *)(DAT_00020b28 + 0x20b04),*(undefined4 *)(param_1 + 0x9c));
    sVar1 = strlen(param_2);
  }
  return sVar1;
}



/* ===== FUN_00020b2c @ 00020b2c size=548 ===== */

undefined4 FUN_00020b2c(int param_1,byte *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint local_18;
  byte *local_14;
  
  iVar2 = DAT_00020d50 + 0x20b4c;
  local_18 = 0;
  if (*(int *)(param_1 + 0x90) != 0) {
    FUN_0001ec64(*(undefined4 *)(param_1 + 0x90));
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  uVar1 = FUN_0001ec20(0x40);
  *(undefined4 *)(param_1 + 0x90) = uVar1;
  local_14 = param_2;
  if (*(int *)(param_1 + 0x90) == 0) {
    printf((char *)(DAT_00020d60 + 0x20be0),DAT_00020d5c + 0x20bd8,0x22e,DAT_00020d58 + 0x20bcc,
           DAT_00020d54 + 0x20bc0);
    uVar1 = 0xffffffff;
  }
  else {
    for (; ((*(ushort *)(**(int **)(iVar2 + DAT_00020d64) + (uint)*local_14 * 2) & 0x80) != 0 &&
           (*local_14 != 0x3a)); local_14 = local_14 + 1) {
    }
    if (*local_14 == 0x3a) {
      do {
        local_14 = local_14 + 1;
      } while (*local_14 == 0x20);
      while (((*(ushort *)(**(int **)(iVar2 + DAT_00020d64) + (uint)*local_14 * 2) & 0x40) != 0 &&
             (local_18 < 0x3f))) {
        *(byte *)(*(int *)(param_1 + 0x90) + local_18) = *local_14;
        local_18 = local_18 + 1;
        local_14 = local_14 + 1;
      }
      *(undefined1 *)(*(int *)(param_1 + 0x90) + local_18) = 0;
      uVar1 = 0;
    }
    else {
      FUN_0001ec64(*(undefined4 *)(param_1 + 0x90));
      *(undefined4 *)(param_1 + 0x90) = 0;
      printf((char *)(DAT_00020d74 + 0x20c90),DAT_00020d70 + 0x20c88,0x22e,DAT_00020d6c + 0x20c7c,
             DAT_00020d68 + 0x20c70,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_00020d78 @ 00020d78 size=100 ===== */

size_t FUN_00020d78(int param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  
  if (*(int *)(param_1 + 0x90) == 0) {
    sVar1 = 0;
  }
  else {
    snprintf(param_2,param_3,(char *)(DAT_00020ddc + 0x20db8),*(undefined4 *)(param_1 + 0x90));
    sVar1 = strlen(param_2);
  }
  return sVar1;
}



/* ===== FUN_00020de0 @ 00020de0 size=548 ===== */

undefined4 FUN_00020de0(int param_1,byte *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint local_18;
  byte *local_14;
  
  iVar2 = DAT_00021004 + 0x20e00;
  local_18 = 0;
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_0001ec64(*(undefined4 *)(param_1 + 0x78));
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  uVar1 = FUN_0001ec20(0x20);
  *(undefined4 *)(param_1 + 0x78) = uVar1;
  local_14 = param_2;
  if (*(int *)(param_1 + 0x78) == 0) {
    printf((char *)(DAT_00021014 + 0x20e94),DAT_00021010 + 0x20e8c,0x22f,DAT_0002100c + 0x20e80,
           DAT_00021008 + 0x20e74);
    uVar1 = 0xffffffff;
  }
  else {
    for (; ((*(ushort *)(**(int **)(iVar2 + DAT_00021018) + (uint)*local_14 * 2) & 0x80) != 0 &&
           (*local_14 != 0x3a)); local_14 = local_14 + 1) {
    }
    if (*local_14 == 0x3a) {
      do {
        local_14 = local_14 + 1;
      } while (*local_14 == 0x20);
      while (((*(ushort *)(**(int **)(iVar2 + DAT_00021018) + (uint)*local_14 * 2) & 0x40) != 0 &&
             (local_18 < 0x1f))) {
        *(byte *)(*(int *)(param_1 + 0x78) + local_18) = *local_14;
        local_18 = local_18 + 1;
        local_14 = local_14 + 1;
      }
      *(undefined1 *)(*(int *)(param_1 + 0x78) + local_18) = 0;
      uVar1 = 0;
    }
    else {
      FUN_0001ec64(*(undefined4 *)(param_1 + 0x78));
      *(undefined4 *)(param_1 + 0x78) = 0;
      printf((char *)(DAT_00021028 + 0x20f44),DAT_00021024 + 0x20f3c,0x22f,DAT_00021020 + 0x20f30,
             DAT_0002101c + 0x20f24,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_0002102c @ 0002102c size=100 ===== */

size_t FUN_0002102c(int param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  
  if (*(int *)(param_1 + 0x78) == 0) {
    sVar1 = 0;
  }
  else {
    snprintf(param_2,param_3,(char *)(DAT_00021090 + 0x2106c),*(undefined4 *)(param_1 + 0x78));
    sVar1 = strlen(param_2);
  }
  return sVar1;
}



/* ===== FUN_00021094 @ 00021094 size=648 ===== */

undefined4 FUN_00021094(int param_1,byte *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  int local_18;
  byte *local_14;
  
  iVar3 = DAT_0002131c + 0x210b4;
  if (*(int *)(param_1 + 0xa4) != 0) {
    FUN_0001ec64(*(undefined4 *)(param_1 + 0xa4));
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  uVar1 = FUN_0001ec20(4);
  *(undefined4 *)(param_1 + 0xa4) = uVar1;
  local_14 = param_2;
  if (*(int *)(param_1 + 0xa4) == 0) {
    printf((char *)(DAT_0002132c + 0x21150),DAT_00021328 + 0x21148,0x264,DAT_00021324 + 0x2113c,
           DAT_00021320 + 0x21130);
  }
  else {
    for (; ((*(ushort *)(**(int **)(iVar3 + DAT_00021330) + (uint)*local_14 * 2) & 0x80) != 0 &&
           (*local_14 != 0x3a)); local_14 = local_14 + 1) {
    }
    if (*local_14 == 0x3a) {
      do {
        local_14 = local_14 + 1;
      } while (*local_14 == 0x20);
      for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
        if ((*(int *)(DAT_00021344 + local_18 * 0xc + 0x21250) != 0) &&
           (pcVar2 = strstr((char *)local_14,*(char **)(DAT_00021348 + local_18 * 0xc + 0x2127c)),
           pcVar2 != (char *)0x0)) {
          **(undefined4 **)(param_1 + 0xa4) =
               *(undefined4 *)(DAT_0002134c + 0x212b8 + local_18 * 0xc);
          return 0;
        }
      }
      FUN_0001ec64(*(undefined4 *)(param_1 + 0xa4));
      *(undefined4 *)(param_1 + 0xa4) = 0;
    }
    else {
      FUN_0001ec64(*(undefined4 *)(param_1 + 0xa4));
      *(undefined4 *)(param_1 + 0xa4) = 0;
      printf((char *)(DAT_00021340 + 0x21200),DAT_0002133c + 0x211f8,0x264,DAT_00021338 + 0x211ec,
             DAT_00021334 + 0x211e0,param_2);
    }
  }
  return 0xffffffff;
}



/* ===== FUN_00021350 @ 00021350 size=232 ===== */

size_t FUN_00021350(int param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  int local_c;
  
  if (*(int *)(param_1 + 0xa4) != 0) {
    for (local_c = 0; local_c < 4; local_c = local_c + 1) {
      if (**(int **)(param_1 + 0xa4) == *(int *)(DAT_00021438 + 0x213a4 + local_c * 0xc)) {
        snprintf(param_2,param_3,(char *)(DAT_00021440 + 0x213ec),
                 *(undefined4 *)(DAT_0002143c + local_c * 0xc + 0x213d4));
        sVar1 = strlen(param_2);
        return sVar1;
      }
    }
  }
  return 0;
}



/* ===== FUN_00021444 @ 00021444 size=636 ===== */

undefined4 FUN_00021444(int param_1,byte *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  int local_18;
  byte *local_14;
  
  iVar3 = DAT_000216c0 + 0x21464;
  if (*(int *)(param_1 + 0x94) != 0) {
    FUN_0001ec64(*(undefined4 *)(param_1 + 0x94));
    *(undefined4 *)(param_1 + 0x94) = 0;
  }
  uVar1 = FUN_0001ec20(4);
  *(undefined4 *)(param_1 + 0x94) = uVar1;
  local_14 = param_2;
  if (*(int *)(param_1 + 0x94) == 0) {
    printf((char *)(DAT_000216d0 + 0x21500),DAT_000216cc + 0x214f8,0x2ab,DAT_000216c8 + 0x214ec,
           DAT_000216c4 + 0x214e0);
    uVar1 = 0xffffffff;
  }
  else {
    for (; ((*(ushort *)(**(int **)(iVar3 + DAT_000216d4) + (uint)*local_14 * 2) & 0x80) != 0 &&
           (*local_14 != 0x3a)); local_14 = local_14 + 1) {
    }
    if (*local_14 == 0x3a) {
      do {
        local_14 = local_14 + 1;
      } while (*local_14 == 0x20);
      for (local_18 = 0; local_18 < 0xc; local_18 = local_18 + 1) {
        if ((*(int *)(DAT_000216e8 + local_18 * 0xc + 0x21600) != 0) &&
           (pcVar2 = strstr((char *)local_14,*(char **)(DAT_000216ec + local_18 * 0xc + 0x2162c)),
           pcVar2 != (char *)0x0)) {
          **(uint **)(param_1 + 0x94) =
               **(uint **)(param_1 + 0x94) |
               1 << (*(uint *)(DAT_000216f0 + 0x21668 + local_18 * 0xc) & 0xff);
        }
      }
      uVar1 = 0;
    }
    else {
      FUN_0001ec64(*(undefined4 *)(param_1 + 0x94));
      *(undefined4 *)(param_1 + 0x94) = 0;
      printf((char *)(DAT_000216e4 + 0x215b0),DAT_000216e0 + 0x215a8,0x2ab,DAT_000216dc + 0x2159c,
             DAT_000216d8 + 0x21590,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_000216f4 @ 000216f4 size=568 ===== */

char * FUN_000216f4(int param_1,char *param_2,size_t param_3)

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
    snprintf(param_2,param_3,(char *)(DAT_00021930 + 0x2174c),DAT_0002192c + 0x21744);
    local_2c = strlen(param_2);
    local_c = param_2 + local_2c;
    local_2c = param_3 - local_2c;
    if ((int)local_2c < 2) {
      local_c = local_c + -(int)param_2;
    }
    else {
      for (local_10 = 0; local_10 < 0xc; local_10 = local_10 + 1) {
        if ((**(uint **)(param_1 + 0x94) &
            1 << (*(uint *)(DAT_00021934 + 0x217c0 + local_10 * 0xc) & 0xff)) != 0) {
          if (bVar1) {
            snprintf(local_c,local_2c,(char *)(DAT_0002193c + 0x21820),
                     *(undefined4 *)(DAT_00021938 + local_10 * 0xc + 0x21808));
          }
          else {
            snprintf(local_c,local_2c,(char *)(DAT_00021944 + 0x2185c),
                     *(undefined4 *)(DAT_00021940 + local_10 * 0xc + 0x21844));
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
      snprintf(local_c,local_2c,(char *)(DAT_00021948 + 0x218e4));
      sVar2 = strlen(local_c);
      local_c = local_c + (sVar2 - (int)param_2);
    }
  }
  return local_c;
}



/* ===== FUN_0002194c @ 0002194c size=636 ===== */

undefined4 FUN_0002194c(int param_1,byte *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  int local_18;
  byte *local_14;
  
  iVar3 = DAT_00021bc8 + 0x2196c;
  if (*(int *)(param_1 + 0x88) != 0) {
    FUN_0001ec64(*(undefined4 *)(param_1 + 0x88));
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  uVar1 = FUN_0001ec20(4);
  *(undefined4 *)(param_1 + 0x88) = uVar1;
  local_14 = param_2;
  if (*(int *)(param_1 + 0x88) == 0) {
    printf((char *)(DAT_00021bd8 + 0x21a08),DAT_00021bd4 + 0x21a00,0x2ac,DAT_00021bd0 + 0x219f4,
           DAT_00021bcc + 0x219e8);
    uVar1 = 0xffffffff;
  }
  else {
    for (; ((*(ushort *)(**(int **)(iVar3 + DAT_00021bdc) + (uint)*local_14 * 2) & 0x80) != 0 &&
           (*local_14 != 0x3a)); local_14 = local_14 + 1) {
    }
    if (*local_14 == 0x3a) {
      do {
        local_14 = local_14 + 1;
      } while (*local_14 == 0x20);
      for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
        if ((*(int *)(DAT_00021bf0 + local_18 * 0xc + 0x21b08) != 0) &&
           (pcVar2 = strstr((char *)local_14,*(char **)(DAT_00021bf4 + local_18 * 0xc + 0x21b34)),
           pcVar2 != (char *)0x0)) {
          **(uint **)(param_1 + 0x88) =
               **(uint **)(param_1 + 0x88) |
               1 << (*(uint *)(DAT_00021bf8 + 0x21b70 + local_18 * 0xc) & 0xff);
        }
      }
      uVar1 = 0;
    }
    else {
      FUN_0001ec64(*(undefined4 *)(param_1 + 0x88));
      *(undefined4 *)(param_1 + 0x88) = 0;
      printf((char *)(DAT_00021bec + 0x21ab8),DAT_00021be8 + 0x21ab0,0x2ac,DAT_00021be4 + 0x21aa4,
             DAT_00021be0 + 0x21a98,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_00021bfc @ 00021bfc size=568 ===== */

char * FUN_00021bfc(int param_1,char *param_2,size_t param_3)

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
    snprintf(param_2,param_3,(char *)(DAT_00021e38 + 0x21c54),DAT_00021e34 + 0x21c4c);
    local_2c = strlen(param_2);
    local_c = param_2 + local_2c;
    local_2c = param_3 - local_2c;
    if ((int)local_2c < 2) {
      local_c = local_c + -(int)param_2;
    }
    else {
      for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
        if ((**(uint **)(param_1 + 0x88) &
            1 << (*(uint *)(DAT_00021e3c + 0x21cc8 + local_10 * 0xc) & 0xff)) != 0) {
          if (bVar1) {
            snprintf(local_c,local_2c,(char *)(DAT_00021e44 + 0x21d28),
                     *(undefined4 *)(DAT_00021e40 + local_10 * 0xc + 0x21d10));
          }
          else {
            snprintf(local_c,local_2c,(char *)(DAT_00021e4c + 0x21d64),
                     *(undefined4 *)(DAT_00021e48 + local_10 * 0xc + 0x21d4c));
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
      snprintf(local_c,local_2c,(char *)(DAT_00021e50 + 0x21dec));
      sVar2 = strlen(local_c);
      local_c = local_c + (sVar2 - (int)param_2);
    }
  }
  return local_c;
}



/* ===== FUN_00021e54 @ 00021e54 size=192 ===== */

undefined4 FUN_00021e54(char *param_1)

{
  int iVar1;
  int iVar2;
  int local_c;
  
  iVar2 = DAT_00021f14 + 0x21e70;
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



/* ===== FUN_00021f18 @ 00021f18 size=276 ===== */

char * FUN_00021f18(char *param_1,void *param_2,int param_3)

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



/* ===== FUN_0002202c @ 0002202c size=60 ===== */

undefined4 FUN_0002202c(void *param_1)

{
  if (param_1 != (void *)0x0) {
    memset(param_1,0,0xac);
  }
  return 0;
}



/* ===== FUN_00022068 @ 00022068 size=428 ===== */

void FUN_00022068(void *param_1)

{
  if (*(int *)((int)param_1 + 0x74) != 0) {
    FUN_0001ec64(*(undefined4 *)((int)param_1 + 0x74));
  }
  if (*(int *)((int)param_1 + 0x78) != 0) {
    FUN_0001ec64(*(undefined4 *)((int)param_1 + 0x78));
  }
  if (*(int *)((int)param_1 + 0x7c) != 0) {
    FUN_0001ec64(*(undefined4 *)((int)param_1 + 0x7c));
  }
  if (*(int *)((int)param_1 + 0x80) != 0) {
    FUN_0001ec64(*(undefined4 *)((int)param_1 + 0x80));
  }
  if (*(int *)((int)param_1 + 0x84) != 0) {
    FUN_0001ec64(*(undefined4 *)((int)param_1 + 0x84));
  }
  if (*(int *)((int)param_1 + 0x88) != 0) {
    FUN_0001ec64(*(undefined4 *)((int)param_1 + 0x88));
  }
  if (*(int *)((int)param_1 + 0x90) != 0) {
    FUN_0001ec64(*(undefined4 *)((int)param_1 + 0x90));
  }
  if (*(int *)((int)param_1 + 0x94) != 0) {
    FUN_0001ec64(*(undefined4 *)((int)param_1 + 0x94));
  }
  if (*(int *)((int)param_1 + 0x9c) != 0) {
    FUN_0001ec64(*(undefined4 *)((int)param_1 + 0x9c));
  }
  if (*(int *)((int)param_1 + 0xa4) != 0) {
    FUN_0001ec64(*(undefined4 *)((int)param_1 + 0xa4));
  }
  if (*(int *)((int)param_1 + 0xa0) != 0) {
    FUN_0001ec64(*(undefined4 *)((int)param_1 + 0xa0));
  }
  if (*(int *)((int)param_1 + 0xa8) != 0) {
    FUN_0001ec64(*(undefined4 *)((int)param_1 + 0xa8));
  }
  memset(param_1,0,0xac);
  return;
}



/* ===== FUN_00022214 @ 00022214 size=52 ===== */

int FUN_00022214(void)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_00022248 + 0x22228);
  *(int *)(DAT_0002224c + 0x22238) = iVar1 + 1;
  return iVar1;
}



/* ===== FUN_00022250 @ 00022250 size=516 ===== */

char * FUN_00022250(char *param_1,int param_2)

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
  local_c = strstr(param_1,(char *)(DAT_00022454 + 0x22288));
  if ((local_c == (char *)0x0) || (param_2 <= (int)(local_c + (1 - (int)local_10)))) {
    if (param_2 < 0x101) {
      pcVar2 = (char *)0x0;
    }
    else {
      pcVar2 = (char *)0xffffffff;
    }
  }
  else {
    local_14 = strstr(local_10,(char *)(DAT_00022458 + 0x222e4));
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
        local_c = (char *)FUN_00021f18(local_c,0,0);
        if ((local_c == (char *)0x0) ||
           (iVar1 = strncmp(local_c,(char *)(DAT_0002245c + 0x22364),2), iVar1 == 0)) {
          if (param_2 < (int)(local_14 + local_18)) {
            return (char *)0x0;
          }
          return local_14 + local_18;
        }
        iVar1 = strncmp(local_c,(char *)(DAT_00022460 + 0x22388),0xe);
      } while ((iVar1 != 0) ||
              (iVar1 = sscanf(local_c,(char *)(DAT_00022464 + 0x223b0),&local_18), iVar1 == 1));
      printf((char *)(DAT_00022470 + 0x223ec),DAT_0002246c + 0x223e4,0x33d,DAT_00022468 + 0x223d8,
             local_c);
      pcVar2 = (char *)0xffffffff;
    }
  }
  return pcVar2;
}



/* ===== FUN_00022474 @ 00022474 size=896 ===== */

int FUN_00022474(undefined4 *param_1,char *param_2,int param_3)

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
      uVar1 = FUN_0001ec94(param_2 + 4,local_16);
      param_1[0x2a] = uVar1;
      iVar2 = local_16 + 4;
    }
    else {
      iVar2 = 0;
    }
  }
  else {
    pcVar3 = local_14;
    printf((char *)(DAT_000227fc + 0x22578),DAT_000227f8 + 0x22570,0x361,DAT_000227f4 + 0x22564,
           local_14);
    iVar2 = FUN_00022250(param_2,param_3);
    if (0 < iVar2) {
      local_10 = iVar2;
      local_c = (char *)FUN_00021f18(local_c,local_11c,0x100);
      if (local_c == (char *)0x0) {
        iVar2 = -1;
      }
      else {
        local_10 = FUN_0001f3d0(param_1,local_11c);
        if (local_10 < 0) {
          iVar2 = -1;
        }
        else {
          do {
            while( true ) {
              local_c = (char *)FUN_00021f18(local_c,local_11c,0x100);
              if ((local_c == (char *)0x0) || (local_11c[0] == '\0')) goto LAB_000226cc;
              local_1c = (code *)FUN_00021e54(local_11c);
              if (local_1c != (code *)0x0) break;
              pcVar3 = local_11c;
              printf((char *)(DAT_00022808 + 0x2264c),DAT_00022804 + 0x22644,0x378,
                     DAT_00022800 + 0x22638,pcVar3);
            }
            local_10 = (*local_1c)(param_1,local_11c);
          } while (-1 < local_10);
          pcVar3 = local_11c;
          printf((char *)(DAT_00022814 + 0x2269c),DAT_00022810 + 0x22694,0x37e,
                 DAT_0002280c + 0x22688,pcVar3);
LAB_000226cc:
          if ((local_c == (char *)0x0) || (local_11c[0] != '\0')) {
            FUN_00022068(param_1);
            iVar2 = -1;
          }
          else {
            if (param_1[0x28] != 0) {
              uVar1 = FUN_0001ec94(local_c,*(undefined4 *)param_1[0x28]);
              param_1[0x2a] = uVar1;
              if (param_1[0x2a] == 0) {
                printf((char *)(DAT_00022820 + 0x2275c),DAT_0002281c + 0x22754,0x38b,
                       DAT_00022818 + 0x22748,pcVar3);
                FUN_00022068(param_1);
                return -1;
              }
            }
            local_10 = (int)local_c - (int)local_14;
            if (param_1[0x28] != 0) {
              local_10 = *(int *)param_1[0x28] + local_10;
            }
            if (local_10 != iVar2) {
              printf((char *)(DAT_0002282c + 0x227e4),DAT_00022828 + 0x227dc,0x396,
                     DAT_00022824 + 0x227d0,iVar2,local_10);
            }
          }
        }
      }
    }
  }
  return iVar2;
}



/* ===== FUN_00022830 @ 00022830 size=2104 ===== */

int FUN_00022830(int *param_1,undefined4 *param_2,int param_3)

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
    iVar2 = FUN_0001f720(param_1,param_2,param_3);
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
          iVar2 = FUN_0002047c(param_1,local_14,local_34);
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
          iVar2 = FUN_0002102c(param_1,local_14,local_34);
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
          iVar2 = FUN_00020644(param_1,local_14,local_34);
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
          iVar2 = FUN_0001fd58(param_1,local_14,local_34);
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
          iVar2 = FUN_0002024c(param_1,local_14,local_34);
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
          iVar2 = FUN_00021bfc(param_1,local_14,local_34);
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
          iVar2 = FUN_000202a0(param_1,local_14,local_34);
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
          iVar2 = FUN_00020d78(param_1,local_14,local_34);
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
          iVar2 = FUN_000216f4(param_1,local_14,local_34);
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
          iVar2 = FUN_000202f4(param_1,local_14,local_34);
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
          iVar2 = FUN_00020ac4(param_1,local_14,local_34);
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
          iVar2 = FUN_00021350(param_1,local_14,local_34);
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
          iVar2 = FUN_0002080c(param_1,local_14,local_34);
          if (iVar2 < 0) {
            return -1;
          }
          local_14 = local_14 + iVar2;
          local_34 = local_34 - iVar2;
          if ((int)local_34 < 2) {
            return (int)local_14 - (int)param_2;
          }
        }
        snprintf(local_14,local_34,(char *)(DAT_00023068 + 0x22f60));
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
            printf((char *)(DAT_00023074 + 0x23050),DAT_00023070 + 0x23048,0x3e6,
                   DAT_0002306c + 0x2303c,param_2);
            local_34 = (int)local_14 - (int)param_2;
          }
        }
      }
    }
  }
  return local_34;
}



/* ===== FUN_00023078 @ 00023078 size=140 ===== */

undefined4 FUN_00023078(undefined4 *param_1,undefined4 param_2,char *param_3,char *param_4)

{
  *param_1 = 0;
  param_1[1] = param_2;
  param_1[2] = 0;
  strncpy((char *)((int)param_1 + 0xe),param_3,0x1f);
  strncpy((char *)((int)param_1 + 0x2e),param_4,0x3f);
  param_1[0x1c] = 0;
  return 0;
}



/* ===== FUN_00023104 @ 00023104 size=76 ===== */

undefined4 FUN_00023104(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = 1;
  param_1[1] = 0;
  param_1[2] = param_2;
  return 0;
}



/* ===== FUN_00023150 @ 00023150 size=96 ===== */

undefined4 FUN_00023150(int param_1,undefined4 *param_2)

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



/* ===== FUN_000231b0 @ 000231b0 size=112 ===== */

undefined4 FUN_000231b0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x74) == 0) {
    uVar1 = FUN_0001ec20(4);
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



/* ===== FUN_00023220 @ 00023220 size=96 ===== */

undefined4 FUN_00023220(int param_1,undefined4 *param_2)

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



/* ===== FUN_00023280 @ 00023280 size=112 ===== */

undefined4 FUN_00023280(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x7c) == 0) {
    uVar1 = FUN_0001ec20(4);
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



/* ===== FUN_000232f0 @ 000232f0 size=108 ===== */

undefined4 FUN_000232f0(int param_1,char *param_2,int param_3)

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



/* ===== FUN_0002335c @ 0002335c size=288 ===== */

undefined4 FUN_0002335c(int param_1,char *param_2)

{
  undefined4 uVar1;
  char *__src;
  char *__dest;
  int iVar2;
  time_t local_18;
  byte *local_14;
  
  iVar2 = DAT_0002347c + 0x2337c;
  if (*(int *)(param_1 + 0x78) == 0) {
    uVar1 = FUN_0001ec20(0x20);
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
      while ((*(ushort *)(**(int **)(iVar2 + DAT_00023480) + (uint)*local_14 * 2) & 0x40) != 0) {
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



/* ===== FUN_00023484 @ 00023484 size=284 ===== */

undefined4 FUN_00023484(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x80) == 0) {
    uVar1 = FUN_0001ec20(0x14);
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



/* ===== FUN_000235a0 @ 000235a0 size=220 ===== */

undefined4 FUN_000235a0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x80) == 0) {
    uVar1 = FUN_0001ec20(0x14);
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



/* ===== FUN_0002367c @ 0002367c size=96 ===== */

undefined4 FUN_0002367c(int param_1,undefined4 *param_2)

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



/* ===== FUN_000236dc @ 000236dc size=112 ===== */

undefined4 FUN_000236dc(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x88) == 0) {
    uVar1 = FUN_0001ec20(4);
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



/* ===== FUN_0002374c @ 0002374c size=108 ===== */

undefined4 FUN_0002374c(int param_1,char *param_2,int param_3)

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



/* ===== FUN_000237b8 @ 000237b8 size=168 ===== */

undefined4 FUN_000237b8(int param_1,char *param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x90) == 0) {
    uVar1 = FUN_0001ec20(0x40);
    *(undefined4 *)(param_1 + 0x90) = uVar1;
  }
  if (*(int *)(param_1 + 0x90) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    if (param_2 == (char *)0x0) {
      strncpy(*(char **)(param_1 + 0x90),(char *)(DAT_00023860 + 0x2384c),0x3f);
    }
    else {
      strncpy(*(char **)(param_1 + 0x90),param_2,0x3f);
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_000238c4 @ 000238c4 size=112 ===== */

undefined4 FUN_000238c4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x94) == 0) {
    uVar1 = FUN_0001ec20(4);
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



/* ===== FUN_00023934 @ 00023934 size=108 ===== */

undefined4 FUN_00023934(int param_1,char *param_2,int param_3)

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



/* ===== FUN_000239a0 @ 000239a0 size=168 ===== */

undefined4 FUN_000239a0(int param_1,char *param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar1 = FUN_0001ec20(0x40);
    *(undefined4 *)(param_1 + 0x9c) = uVar1;
  }
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    if (param_2 == (char *)0x0) {
      strncpy(*(char **)(param_1 + 0x9c),(char *)(DAT_00023a48 + 0x23a34),0x3f);
    }
    else {
      strncpy(*(char **)(param_1 + 0x9c),param_2,0x3f);
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_00023ab0 @ 00023ab0 size=112 ===== */

undefined4 FUN_00023ab0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xa4) == 0) {
    uVar1 = FUN_0001ec20(4);
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



/* ===== FUN_00023b84 @ 00023b84 size=112 ===== */

undefined4 FUN_00023b84(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xa0) == 0) {
    uVar1 = FUN_0001ec20(4);
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



/* ===== FUN_00023bf4 @ 00023bf4 size=292 ===== */

int * FUN_00023bf4(int param_1,int param_2)

{
  int *piVar1;
  
  if ((param_1 < 1) || (param_2 < 1)) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = calloc(1,param_2 * param_1 + param_2 * 4 + 0x18);
    if (piVar1 == (int *)0x0) {
      printf((char *)(DAT_00023d20 + 0x23c88),DAT_00023d1c + 0x23c80,0x16,DAT_00023d18 + 0x23c74);
      piVar1 = (int *)0x0;
    }
    else {
      printf((char *)(DAT_00023d24 + 0x23cc0),param_2 * param_1 + param_2 * 4 + 0x18);
      *piVar1 = param_1;
      piVar1[1] = param_2;
      piVar1[4] = (int)(piVar1 + 6);
      piVar1[5] = (int)(piVar1 + param_2 + 6);
    }
  }
  return piVar1;
}



/* ===== FUN_00023d28 @ 00023d28 size=176 ===== */

undefined4 FUN_00023d28(int *param_1,int param_2,int *param_3,int *param_4)

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



/* ===== FUN_00023dd8 @ 00023dd8 size=172 ===== */

undefined4 FUN_00023dd8(int param_1,int param_2)

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



/* ===== FUN_00023e84 @ 00023e84 size=92 ===== */

undefined4 FUN_00023e84(int param_1,int param_2)

{
  undefined4 extraout_r1;
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    FUN_00026374(param_2 + 1,*(undefined4 *)(param_1 + 4));
    uVar1 = extraout_r1;
  }
  return uVar1;
}



/* ===== FUN_00023ee0 @ 00023ee0 size=60 ===== */

undefined4 FUN_00023ee0(int param_1)

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



/* ===== FUN_00023f1c @ 00023f1c size=60 ===== */

undefined4 FUN_00023f1c(int param_1)

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



/* ===== FUN_00023f58 @ 00023f58 size=168 ===== */

undefined4 FUN_00023f58(int param_1)

{
  int extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    FUN_00026374(*(int *)(param_1 + 0xc) + 1,*(undefined4 *)(param_1 + 4));
    if (extraout_r1 == *(int *)(param_1 + 8)) {
      uVar1 = 0xffffffff;
    }
    else {
      FUN_00026374(*(int *)(param_1 + 0xc) + 1,*(undefined4 *)(param_1 + 4));
      *(undefined4 *)(param_1 + 0xc) = extraout_r1_00;
      uVar1 = *(undefined4 *)(param_1 + 0xc);
    }
  }
  return uVar1;
}



/* ===== FUN_00024000 @ 00024000 size=136 ===== */

undefined4 FUN_00024000(int param_1)

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
    FUN_00026374(*(int *)(param_1 + 8) + 1,*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 8) = extraout_r1;
    uVar1 = *(undefined4 *)(param_1 + 8);
  }
  return uVar1;
}



/* ===== FUN_00024088 @ 00024088 size=48 ===== */

void FUN_00024088(void *param_1)

{
  if (param_1 != (void *)0x0) {
    free(param_1);
  }
  return;
}



/* ===== FUN_000240b8 @ 000240b8 size=636 ===== */

undefined1 * FUN_000240b8(undefined1 *param_1,int param_2,byte *param_3,uint param_4)

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
      *local_c = *(undefined1 *)(DAT_00024334 + 0x241c0 + (uint)(bVar1 >> 2));
      local_c[1] = *(undefined1 *)(DAT_00024338 + 0x241e8 + ((uVar4 & 0x3f00000) >> 0x14));
      puVar3 = local_c + 3;
      local_c[2] = *(undefined1 *)
                    (DAT_0002433c + 0x24210 + ((uVar4 | (uint)bVar2 << 8) >> 0xe & 0x3f));
      local_c = local_c + 4;
      *puVar3 = *(undefined1 *)(DAT_00024340 + 0x24238 + (((uint)bVar2 << 8 & 0x3f00) >> 8));
    }
    local_10 = 0;
    for (; local_18 != 0; local_18 = local_18 - 1) {
      local_10 = local_10 * 0x100 + (uint)*local_2c;
      local_14 = local_14 + 8;
      local_2c = local_2c + 1;
    }
    for (; 0 < (int)local_14; local_14 = local_14 - 6) {
      *local_c = *(undefined1 *)
                  (DAT_00024344 + 0x242c8 + ((uint)(local_10 << 6) >> (local_14 & 0xff) & 0x3f));
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



/* ===== FUN_00024348 @ 00024348 size=476 ===== */

char * FUN_00024348(char *param_1,int param_2,int *param_3)

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



/* ===== FUN_00024524 @ 00024524 size=588 ===== */

bool FUN_00024524(int param_1,int param_2,void *param_3)

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
           ) && (iVar1 = FUN_00024348(local_c,local_14,&local_20), iVar1 != 0))))) {
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
      printf((char *)(DAT_00024778 + 0x24674),DAT_00024774 + 0x2466c,0x86,DAT_00024770 + 0x24660,
             local_20);
      if (0x40 < (int)local_20) {
        local_20 = 0x40;
      }
      memcpy(param_3,local_10,local_20);
      *(size_t *)((int)param_3 + 0x80) = local_20;
      local_18 = local_18 + 1;
    }
    if (local_19 == 8) {
      printf((char *)(DAT_00024784 + 0x246ec),DAT_00024780 + 0x246e4,0x8e,DAT_0002477c + 0x246d8,
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



/* ===== FUN_00024788 @ 00024788 size=736 ===== */

bool FUN_00024788(int param_1,int param_2,void *param_3)

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
         (iVar1 = FUN_00024348(local_c,local_14,&local_20), iVar1 != 0))) {
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
      printf((char *)(DAT_00024a70 + 0x248f0),DAT_00024a6c + 0x248e8,0xba,DAT_00024a68 + 0x248dc,
             local_20);
      if (0x40 < (int)local_20) {
        local_20 = 0x40;
      }
      memcpy(param_3,local_10,local_20);
      *(size_t *)((int)param_3 + 0xc0) = local_20;
      local_18 = local_18 + 1;
    }
    if (local_19 == 0x21) {
      printf((char *)(DAT_00024a7c + 0x24968),DAT_00024a78 + 0x24960,0xc2,DAT_00024a74 + 0x24954,
             local_20);
      if (0x40 < (int)local_20) {
        local_20 = 0x40;
      }
      memcpy((void *)((int)param_3 + 0x40),local_10,local_20);
      *(size_t *)((int)param_3 + 0xc4) = local_20;
      local_18 = local_18 + 1;
    }
    if (local_19 == 0x22) {
      printf((char *)(DAT_00024a88 + 0x249e4),DAT_00024a84 + 0x249dc,0xca,DAT_00024a80 + 0x249d0,
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



/* ===== FUN_00024a8c @ 00024a8c size=236 ===== */

undefined4 FUN_00024a8c(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 != 4) {
    printf((char *)(DAT_00024b80 + 0x24ad0),DAT_00024b7c + 0x24ac8,0xdb,DAT_00024b78 + 0x24abc);
    return 0xffffffff;
  }
  iVar1 = *param_1;
  if (iVar1 == 24000) {
code_r0x00024b5c:
    *param_3 = iVar1;
    uVar2 = 1;
  }
  else {
    if (iVar1 < 0x5dc1) {
      if (iVar1 == 16000) goto code_r0x00024b5c;
    }
    else if ((iVar1 == 32000) || (iVar1 == 40000)) goto code_r0x00024b5c;
    printf((char *)(DAT_00024b8c + 0x24b50),DAT_00024b88 + 0x24b48,0xe8,DAT_00024b84 + 0x24b3c);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== FUN_00024b90 @ 00024b90 size=56 ===== */

undefined4 FUN_00024b90(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00024524(param_1,param_2,param_3);
  return uVar1;
}



/* ===== FUN_00024bc8 @ 00024bc8 size=56 ===== */

undefined4 FUN_00024bc8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00024788(param_1,param_2,param_3);
  return uVar1;
}



/* ===== FUN_00024c00 @ 00024c00 size=556 ===== */

int FUN_00024c00(undefined4 param_1,undefined4 param_2,int param_3,char *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *local_c;
  
  iVar1 = sprintf(param_4,(char *)(DAT_00024e2c + 0x24c34),param_1);
  pcVar4 = param_4 + iVar1;
  iVar1 = sprintf(pcVar4,(char *)(DAT_00024e30 + 0x24c5c));
  iVar2 = sprintf(pcVar4 + iVar1,(char *)(DAT_00024e34 + 0x24c8c),param_1,param_2);
  local_c = pcVar4 + iVar1 + iVar2;
  if ((*(int *)(param_3 + 0x80) == 0) || (*(int *)(param_3 + 0x84) == 0)) {
    iVar1 = sprintf(local_c,(char *)(DAT_00024e44 + 0x24df8),param_1);
    local_c = local_c + iVar1;
  }
  else {
    uVar5 = *(undefined4 *)(param_3 + 0x80);
    uVar6 = *(undefined4 *)(param_3 + 0x84);
    iVar1 = sprintf(local_c,(char *)(DAT_00024e38 + 0x24d00),param_1);
    local_c = local_c + iVar1;
    FUN_000240b8(local_c,param_5 - ((int)local_c - (int)param_4),param_3,uVar5);
    sVar3 = strlen(local_c);
    iVar1 = sprintf(local_c + sVar3,(char *)(DAT_00024e3c + 0x24d64));
    pcVar4 = local_c + sVar3 + iVar1;
    FUN_000240b8(pcVar4,param_5 - ((int)pcVar4 - (int)param_4),param_3 + 0x40,uVar6);
    sVar3 = strlen(pcVar4);
    iVar1 = sprintf(pcVar4 + sVar3,(char *)(DAT_00024e40 + 0x24dc8));
    local_c = pcVar4 + sVar3 + iVar1;
  }
  return (int)local_c - (int)param_4;
}



/* ===== FUN_00024e48 @ 00024e48 size=688 ===== */

int FUN_00024e48(undefined4 param_1,undefined4 param_2,int param_3,char *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *local_c;
  
  iVar1 = sprintf(param_4,(char *)(DAT_000250f8 + 0x24e7c),param_1);
  pcVar4 = param_4 + iVar1;
  iVar1 = sprintf(pcVar4,(char *)(DAT_000250fc + 0x24ea4));
  iVar2 = sprintf(pcVar4 + iVar1,(char *)(DAT_00025100 + 0x24ed4),param_1,param_2);
  local_c = pcVar4 + iVar1 + iVar2;
  if (((*(int *)(param_3 + 0xc0) != 0) && (*(int *)(param_3 + 0xc4) != 0)) &&
     (*(int *)(param_3 + 200) != 0)) {
    uVar5 = *(undefined4 *)(param_3 + 0xc0);
    uVar6 = *(undefined4 *)(param_3 + 0xc4);
    uVar7 = *(undefined4 *)(param_3 + 200);
    iVar1 = sprintf(local_c,(char *)(DAT_00025104 + 0x24f70),param_1);
    iVar2 = sprintf(local_c + iVar1,(char *)(DAT_00025108 + 0x24f98));
    pcVar4 = local_c + iVar1 + iVar2;
    FUN_000240b8(pcVar4,param_5 - ((int)pcVar4 - (int)param_4),param_3,uVar5);
    sVar3 = strlen(pcVar4);
    iVar1 = sprintf(pcVar4 + sVar3,(char *)(DAT_0002510c + 0x24ffc));
    pcVar4 = pcVar4 + sVar3 + iVar1;
    FUN_000240b8(pcVar4,param_5 - ((int)pcVar4 - (int)param_4),param_3 + 0x40,uVar6);
    sVar3 = strlen(pcVar4);
    iVar1 = sprintf(pcVar4 + sVar3,(char *)(DAT_00025110 + 0x25060));
    pcVar4 = pcVar4 + sVar3 + iVar1;
    FUN_000240b8(pcVar4,param_5 - ((int)pcVar4 - (int)param_4),param_3 + 0x80,uVar7);
    sVar3 = strlen(pcVar4);
    iVar1 = sprintf(pcVar4 + sVar3,(char *)(DAT_00025114 + 0x250c4));
    local_c = pcVar4 + sVar3 + iVar1;
  }
  return (int)local_c - (int)param_4;
}



/* ===== FUN_00025118 @ 00025118 size=196 ===== */

char * FUN_00025118(undefined4 param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  int iVar1;
  int iVar2;
  char *__s;
  
  iVar1 = sprintf(param_4,(char *)(DAT_000251dc + 0x2514c),param_1);
  __s = param_4 + iVar1;
  iVar1 = sprintf(__s,(char *)(DAT_000251e0 + 0x25174));
  iVar2 = sprintf(__s + iVar1,(char *)(DAT_000251e4 + 0x251ac),param_1,param_2,param_3);
  return __s + iVar1 + (iVar2 - (int)param_4);
}



/* ===== FUN_000251e8 @ 000251e8 size=196 ===== */

char * FUN_000251e8(undefined4 param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  int iVar1;
  int iVar2;
  char *__s;
  
  iVar1 = sprintf(param_4,(char *)(DAT_000252ac + 0x2521c),param_1);
  __s = param_4 + iVar1;
  iVar1 = sprintf(__s,(char *)(DAT_000252b0 + 0x25244));
  iVar2 = sprintf(__s + iVar1,(char *)(DAT_000252b4 + 0x2527c),param_1,param_2,param_3);
  return __s + iVar1 + (iVar2 - (int)param_4);
}



/* ===== FUN_000252b8 @ 000252b8 size=252 ===== */

char * FUN_000252b8(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint *param_4,
                   char *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *__s;
  
  iVar1 = sprintf(param_5,(char *)(DAT_000253b4 + 0x252ec),param_1);
  __s = param_5 + iVar1;
  iVar1 = sprintf(__s,(char *)(DAT_000253b8 + 0x25314));
  if (*param_4 == 0) {
    uVar3 = 0x20;
  }
  else {
    uVar3 = *param_4 / 1000;
  }
  iVar2 = sprintf(__s + iVar1,(char *)(DAT_000253bc + 0x25384),param_1,uVar3,param_2,param_3);
  return __s + iVar1 + (iVar2 - (int)param_5);
}



/* ===== FUN_000253c0 @ 000253c0 size=1436 ===== */

int FUN_000253c0(byte *param_1,byte *param_2,size_t param_3,undefined4 param_4,uint param_5,
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
    __hostlong = FUN_00026394((int)lVar2,
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



/* ===== FUN_0002595c @ 0002595c size=1492 ===== */

int FUN_0002595c(byte *param_1,byte *param_2,size_t param_3,undefined4 param_4,uint param_5,
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
    __hostlong = FUN_00026394((int)lVar3,
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



/* ===== FUN_00025f30 @ 00025f30 size=792 ===== */

int FUN_00025f30(byte *param_1,void *param_2,size_t param_3,undefined4 param_4,uint param_5,
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
    __hostlong = FUN_00026394((int)lVar1,
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



/* ===== FUN_00026248 @ 00026248 size=80 ===== */

undefined4
FUN_00026248(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00025f30(param_1,param_2,param_3,param_6,param_5,param_6,param_7,param_8);
  return uVar1;
}



/* ===== FUN_000262a0 @ 000262a0 size=196 ===== */

uint FUN_000262a0(uint param_1,uint param_2)

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



/* ===== FUN_00026374 @ 00026374 size=48 ===== */

void FUN_00026374(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_000262a0();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_00026394 @ 00026394 size=76 ===== */

void FUN_00026394(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  if (param_4 != 0 || param_3 != 0) {
    FUN_000263e0();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_000263e0 @ 000263e0 size=328 ===== */

undefined8 FUN_000263e0(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

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



/* ===== _fini @ 00026528 size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 0003d000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0003d010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_setMirrorFlip @ 0003d014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_setMirrorFlip(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AVS_DisableChn @ 0003d018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AVS_DisableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_EnableMotionDeblur @ 0003d01c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_EnableMotionDeblur(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_preInit_devBufCnt @ 0003d020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_preInit_devBufCnt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::recvfrom @ 0003d024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recvfrom(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,socklen_t *__addr_len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 0003d028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_RGN_SetBitMap @ 0003d02c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_RGN_SetBitMap(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AVS_StartGrp @ 0003d030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AVS_StartGrp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 0003d034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevAttr @ 0003d038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetDevAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetChnFrame @ 0003d03c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetChnFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setlinebuf @ 0003d040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void setlinebuf(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 0003d044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::accept @ 0003d048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int accept(int __fd,sockaddr *__addr,socklen_t *__addr_len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 0003d04c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 0003d050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 0003d054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcat @ 0003d058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 0003d05c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AVS_ReleaseChnFrame @ 0003d060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AVS_ReleaseChnFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_RGN_Create @ 0003d064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_RGN_Create(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memmove @ 0003d068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Free @ 0003d06c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Free(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_ae_setExpSwAttr @ 0003d070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_user_api2_ae_setExpSwAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::raise @ 0003d074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AVS_SetChnAttr @ 0003d078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AVS_SetChnAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 0003d07c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 0003d080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AVS_CreateGrp @ 0003d084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AVS_CreateGrp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_join @ 0003d088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 0003d08c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setenv @ 0003d090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setenv(char *__name,char *__value,int __replace)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableDev @ 0003d094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_EnableDev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AVS_StopGrp @ 0003d098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AVS_StopGrp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_StartPipe @ 0003d09c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_StartPipe(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_RGN_DetachFromChn @ 0003d0a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_RGN_DetachFromChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevAttr @ 0003d0a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetDevAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 0003d0a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AVS_DestroyGrp @ 0003d0ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AVS_DestroyGrp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableDev @ 0003d0b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_DisableDev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_destroy @ 0003d0b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_destroy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_RGN_AttachToChn @ 0003d0b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_RGN_AttachToChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0003d0bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Bind @ 0003d0c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Bind(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChnExt @ 0003d0c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_EnableChnExt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ntohs @ 0003d0c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint16_t ntohs(uint16_t __netshort)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 0003d0cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_lock @ 0003d0d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::send @ 0003d0d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t send(int __fd,void *__buf,size_t __n,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_start @ 0003d0d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_start(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_RGN_SetDisplayAttr @ 0003d0dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_RGN_SetDisplayAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetJpegParam @ 0003d0e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetJpegParam(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::recv @ 0003d0e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recv(int __fd,void *__buf,size_t __n,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_prepare @ 0003d0e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_prepare(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fseek @ 0003d0ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_deinit @ 0003d0f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_deinit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atof @ 0003d0f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double atof(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StartRecvFrame @ 0003d0f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_StartRecvFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt_long @ 0003d0fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void getopt_long(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetComboAttr @ 0003d100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetComboAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_destroy @ 0003d104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_MmzFlushCache @ 0003d108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_MmzFlushCache(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 0003d10c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::listen @ 0003d110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int listen(int __fd,int __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sendto @ 0003d114 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t sendto(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,socklen_t __addr_len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ctime @ 0003d118 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * ctime(time_t *__timer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SendFrame @ 0003d11c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SendFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 0003d120 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 0003d124 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_LOG @ 0003d128 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_LOG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_create @ 0003d12c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_create(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 0003d130 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clock_gettime @ 0003d134 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strrchr @ 0003d138 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_unlock @ 0003d13c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetMjpegParam @ 0003d140 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetMjpegParam(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::socket @ 0003d144 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_ae_getExpSwAttr @ 0003d148 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_user_api2_ae_getExpSwAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_init @ 0003d14c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_StopPipe @ 0003d150 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_StopPipe(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_aldch_v21_GetAttrib @ 0003d154 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_user_api2_aldch_v21_GetAttrib(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setsockopt @ 0003d158 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChn @ 0003d15c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_EnableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_CAL_AVS_GetFinalLutBufferSize @ 0003d160 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_CAL_AVS_GetFinalLutBufferSize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_getCamInfos @ 0003d164 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_getCamInfos(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_setMulCamConc @ 0003d168 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_setMulCamConc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId @ 0003d16c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::inet_ntoa @ 0003d170 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * inet_ntoa(in_addr __in)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::time @ 0003d174 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_QueryChnStatus @ 0003d178 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_QueryChnStatus(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChn @ 0003d17c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_DisableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AVS_EnableChn @ 0003d180 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AVS_EnableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnWrapBufAttr @ 0003d184 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetChnWrapBufAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AVS_GetFinalLut @ 0003d188 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AVS_GetFinalLut(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_stop @ 0003d18c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_stop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetEptz @ 0003d190 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetEptz(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetChnBufWrapAttr @ 0003d194 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetChnBufWrapAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fcntl @ 0003d198 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fcntl(int __fd,int __cmd,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_EnableSvc @ 0003d19c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_EnableSvc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetRcParam @ 0003d1a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetRcParam(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_switch_scene @ 0003d1a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_switch_scene(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm @ 0003d1a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::htonl @ 0003d1ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint32_t htonl(uint32_t __hostlong)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevIsEnable @ 0003d1b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetDevIsEnable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::signal @ 0003d1b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen64 @ 0003d1b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_create @ 0003d1bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StopRecvFrame @ 0003d1c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_StopRecvFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::htons @ 0003d1c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint16_t htons(uint16_t __hostshort)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_GetMB @ 0003d1c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_GetMB(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::select @ 0003d1cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 0003d1d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 0003d1d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Exit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_aldch_v21_SetAttrib @ 0003d1d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_user_api2_aldch_v21_SetAttrib(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 0003d1dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usleep @ 0003d1e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 0003d1e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_RGN_Destroy @ 0003d1e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_RGN_Destroy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_prepare @ 0003d1ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_prepare(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnAttr @ 0003d1f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetChnAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_ReleaseChnFrame @ 0003d1f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_ReleaseChnFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_CreateMB @ 0003d1f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_CreateMB(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 0003d1fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_GetStream @ 0003d200 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_GetStream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strchr @ 0003d204 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_start @ 0003d208 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_start(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::system @ 0003d20c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int system(char *__command)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChnExt @ 0003d210 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_DisableChnExt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sleep @ 0003d214 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 0003d218 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 0003d21c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_Handle2VirAddr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strstr @ 0003d220 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sscanf @ 0003d224 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_RGN_GetDisplayAttr @ 0003d228 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_RGN_GetDisplayAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevBindPipe @ 0003d22c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetDevBindPipe(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_UnBind @ 0003d230 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_UnBind(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_ChnSaveFile @ 0003d234 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_ChnSaveFile(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 0003d238 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gettimeofday @ 0003d23c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AVS_GetChnFrame @ 0003d240 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AVS_GetChnFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_ReleaseMB @ 0003d244 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_ReleaseMB(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 0003d248 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetChnRefBufShareAttr @ 0003d24c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetChnRefBufShareAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fread @ 0003d250 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_stop @ 0003d254 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_stop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::bind @ 0003d258 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_DestroyChn @ 0003d25c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_DestroyChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 0003d260 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_init @ 0003d264 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_CreateChn @ 0003d268 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_CreateChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_ReleaseStream @ 0003d26c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_ReleaseStream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


