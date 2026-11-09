// sample_demo_multi_camera_eptz — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00012024 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 00012048 size=12 ===== */

void RK_MPI_SYS_Exit(void)

{
  (*(code *)PTR_RK_MPI_SYS_Exit_0003700c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetEptz @ 00012054 size=12 ===== */

void RK_MPI_VI_GetEptz(void)

{
  (*(code *)PTR_RK_MPI_VI_GetEptz_00037010)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm @ 00012060 size=12 ===== */

void rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm_00037014)();
  return;
}



/* ===== <EXTERNAL>::bind @ 0001206c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_bind_00037018)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_QueryChnStatus @ 00012078 size=12 ===== */

void RK_MPI_VI_QueryChnStatus(void)

{
  (*(code *)PTR_RK_MPI_VI_QueryChnStatus_0003701c)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00012084 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00037020)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnWrapBufAttr @ 00012090 size=12 ===== */

void RK_MPI_VI_SetChnWrapBufAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetChnWrapBufAttr_00037024)();
  return;
}



/* ===== <EXTERNAL>::htons @ 0001209c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint16_t htons(uint16_t __hostshort)

{
  uint16_t uVar1;
  
  uVar1 = (*(code *)PTR_htons_00037028)(__hostshort);
  return uVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_GetStream @ 000120a8 size=12 ===== */

void RK_MPI_VENC_GetStream(void)

{
  (*(code *)PTR_RK_MPI_VENC_GetStream_0003702c)();
  return;
}



/* ===== <EXTERNAL>::calloc @ 000120b4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_00037030)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 000120c0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00037034)();
  return piVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_EnableMotionDeblur @ 000120cc size=12 ===== */

void RK_MPI_VENC_EnableMotionDeblur(void)

{
  (*(code *)PTR_RK_MPI_VENC_EnableMotionDeblur_00037038)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetComboAttr @ 000120d8 size=12 ===== */

void RK_MPI_VENC_SetComboAttr(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetComboAttr_0003703c)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_destroy @ 000120e4 size=12 ===== */

void rk_aiq_uapi2_camgroup_destroy(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_destroy_00037040)();
  return;
}



/* ===== <EXTERNAL>::clock_gettime @ 000120f0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_clock_gettime_00037044)(__clock_id);
  return iVar1;
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_ae_setExpSwAttr @ 000120fc size=12 ===== */

void rk_aiq_user_api2_ae_setExpSwAttr(void)

{
  (*(code *)PTR_rk_aiq_user_api2_ae_setExpSwAttr_00037048)();
  return;
}



/* ===== <EXTERNAL>::fwrite @ 00012108 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_0003704c)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_switch_scene @ 00012114 size=12 ===== */

void rk_aiq_uapi2_sysctl_switch_scene(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_switch_scene_00037050)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChn @ 00012120 size=12 ===== */

void RK_MPI_VI_DisableChn(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableChn_00037054)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_StopPipe @ 0001212c size=12 ===== */

void RK_MPI_VI_StopPipe(void)

{
  (*(code *)PTR_RK_MPI_VI_StopPipe_00037058)();
  return;
}



/* ===== <EXTERNAL>::usleep @ 00012138 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_usleep_0003705c)(__useconds);
  return iVar1;
}



/* ===== <EXTERNAL>::memcpy @ 00012144 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00037060)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_setMulCamConc @ 00012150 size=12 ===== */

void rk_aiq_uapi2_sysctl_setMulCamConc(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_setMulCamConc_00037064)();
  return;
}



/* ===== <EXTERNAL>::sleep @ 0001215c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_sleep_00037068)(__seconds);
  return uVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_CreateChn @ 00012168 size=12 ===== */

void RK_MPI_VENC_CreateChn(void)

{
  (*(code *)PTR_RK_MPI_VENC_CreateChn_0003706c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_ReleaseChnFrame @ 00012174 size=12 ===== */

void RK_MPI_VI_ReleaseChnFrame(void)

{
  (*(code *)PTR_RK_MPI_VI_ReleaseChnFrame_00037070)();
  return;
}



/* ===== <EXTERNAL>::send @ 00012180 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t send(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_send_00037074)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_create @ 0001218c size=12 ===== */

void rk_aiq_uapi2_camgroup_create(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_create_00037078)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_GetMB @ 00012198 size=12 ===== */

void RK_MPI_MB_GetMB(void)

{
  (*(code *)PTR_RK_MPI_MB_GetMB_0003707c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_EnableSvc @ 000121a4 size=12 ===== */

void RK_MPI_VENC_EnableSvc(void)

{
  (*(code *)PTR_RK_MPI_VENC_EnableSvc_00037080)();
  return;
}



/* ===== <EXTERNAL>::gettimeofday @ 000121b0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_gettimeofday_00037084)(__tv);
  return iVar1;
}



/* ===== <EXTERNAL>::strcat @ 000121bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcat_00037088)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevAttr @ 000121c8 size=12 ===== */

void RK_MPI_VI_GetDevAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_GetDevAttr_0003708c)();
  return;
}



/* ===== <EXTERNAL>::setenv @ 000121d4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setenv(char *__name,char *__value,int __replace)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setenv_00037090)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::malloc @ 000121e0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00037094)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_aldch_v21_SetAttrib @ 000121ec size=12 ===== */

void rk_aiq_user_api2_aldch_v21_SetAttrib(void)

{
  (*(code *)PTR_rk_aiq_user_api2_aldch_v21_SetAttrib_00037098)();
  return;
}



/* ===== <EXTERNAL>::strrchr @ 000121f8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strrchr_0003709c)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::strncmp @ 00012204 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_000370a0)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::fopen64 @ 0001221c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen64_000370a8)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_setMirrorFlip @ 00012228 size=12 ===== */

void rk_aiq_uapi2_setMirrorFlip(void)

{
  (*(code *)PTR_rk_aiq_uapi2_setMirrorFlip_000370ac)();
  return;
}



/* ===== <EXTERNAL>::setlinebuf @ 00012234 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void setlinebuf(FILE *__stream)

{
  (*(code *)PTR_setlinebuf_000370b0)(__stream);
  return;
}



/* ===== <EXTERNAL>::recv @ 00012240 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recv(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_recv_000370b4)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::strlen @ 0001224c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_000370b8)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::ctime @ 00012258 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * ctime(time_t *__timer)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_ctime_000370bc)(__timer);
  return pcVar1;
}



/* ===== <EXTERNAL>::sendto @ 00012264 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t sendto(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,socklen_t __addr_len)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_sendto_000370c0)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::fcntl @ 00012270 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fcntl(int __fd,int __cmd,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fcntl_000370c4)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::snprintf @ 0001227c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_000370c8)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::htonl @ 00012288 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint32_t htonl(uint32_t __hostlong)

{
  uint32_t uVar1;
  
  uVar1 = (*(code *)PTR_htonl_000370cc)(__hostlong);
  return uVar1;
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_aldch_v21_GetAttrib @ 00012294 size=12 ===== */

void rk_aiq_user_api2_aldch_v21_GetAttrib(void)

{
  (*(code *)PTR_rk_aiq_user_api2_aldch_v21_GetAttrib_000370d0)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnAttr @ 000122a0 size=12 ===== */

void RK_MPI_VI_SetChnAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetChnAttr_000370d4)();
  return;
}



/* ===== <EXTERNAL>::select @ 000122ac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_select_000370d8)(__nfds);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SendFrame @ 000122b8 size=12 ===== */

void RK_MPI_VENC_SendFrame(void)

{
  (*(code *)PTR_RK_MPI_VENC_SendFrame_000370dc)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetChnRefBufShareAttr @ 000122c4 size=12 ===== */

void RK_MPI_VENC_SetChnRefBufShareAttr(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetChnRefBufShareAttr_000370e0)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_prepare @ 000122d0 size=12 ===== */

void rk_aiq_uapi2_camgroup_prepare(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_prepare_000370e4)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 000122dc size=12 ===== */

void RK_MPI_SYS_Init(void)

{
  (*(code *)PTR_RK_MPI_SYS_Init_000370e8)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId @ 000122e8 size=12 ===== */

void rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId_000370ec)();
  return;
}



/* ===== <EXTERNAL>::memmove @ 000122f4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_000370f0)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::fclose @ 00012300 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_000370f4)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::setsockopt @ 0001230c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setsockopt_000370f8)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_LOG @ 00012318 size=12 ===== */

void RK_LOG(void)

{
  (*(code *)PTR_RK_LOG_000370fc)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_getCamInfos @ 00012324 size=12 ===== */

void rk_aiq_uapi2_camgroup_getCamInfos(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_getCamInfos_00037100)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_start @ 00012330 size=12 ===== */

void rk_aiq_uapi2_camgroup_start(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_start_00037104)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StopRecvFrame @ 0001233c size=12 ===== */

void RK_MPI_VENC_StopRecvFrame(void)

{
  (*(code *)PTR_RK_MPI_VENC_StopRecvFrame_00037108)();
  return;
}



/* ===== <EXTERNAL>::time @ 00012348 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_0003710c)(__timer);
  return tVar1;
}



/* ===== <EXTERNAL>::fileno @ 00012354 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fileno(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fileno_00037110)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::pthread_create @ 00012360 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_00037114)(__newthread);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_StartPipe @ 0001236c size=12 ===== */

void RK_MPI_VI_StartPipe(void)

{
  (*(code *)PTR_RK_MPI_VI_StartPipe_00037118)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetRcParam @ 00012378 size=12 ===== */

void RK_MPI_VENC_SetRcParam(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetRcParam_0003711c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChnExt @ 00012384 size=12 ===== */

void RK_MPI_VI_DisableChnExt(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableChnExt_00037120)();
  return;
}



/* ===== <EXTERNAL>::close @ 00012390 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_00037124)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetChnFrame @ 0001239c size=12 ===== */

void RK_MPI_VI_GetChnFrame(void)

{
  (*(code *)PTR_RK_MPI_VI_GetChnFrame_00037128)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChnExt @ 000123a8 size=12 ===== */

void RK_MPI_VI_EnableChnExt(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableChnExt_0003712c)();
  return;
}



/* ===== <EXTERNAL>::sscanf @ 000123b4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sscanf_00037130)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::strncpy @ 000123c0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_00037134)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetChnBufWrapAttr @ 000123cc size=12 ===== */

void RK_MPI_VENC_SetChnBufWrapAttr(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetChnBufWrapAttr_00037138)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevBindPipe @ 000123d8 size=12 ===== */

void RK_MPI_VI_SetDevBindPipe(void)

{
  (*(code *)PTR_RK_MPI_VI_SetDevBindPipe_0003713c)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_prepare @ 000123e4 size=12 ===== */

void rk_aiq_uapi2_sysctl_prepare(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_prepare_00037140)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevIsEnable @ 000123f0 size=12 ===== */

void RK_MPI_VI_GetDevIsEnable(void)

{
  (*(code *)PTR_RK_MPI_VI_GetDevIsEnable_00037144)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_init @ 000123fc size=12 ===== */

void rk_aiq_uapi2_sysctl_init(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_init_00037148)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableDev @ 00012408 size=12 ===== */

void RK_MPI_VI_EnableDev(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableDev_0003714c)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_start @ 00012414 size=12 ===== */

void rk_aiq_uapi2_sysctl_start(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_start_00037150)();
  return;
}



/* ===== <EXTERNAL>::fflush @ 00012420 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_00037154)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 0001242c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00037158)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::inet_ntoa @ 00012438 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * inet_ntoa(in_addr __in)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_inet_ntoa_0003715c)(__in.s_addr);
  return pcVar1;
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_ae_getExpSwAttr @ 00012444 size=12 ===== */

void rk_aiq_user_api2_ae_getExpSwAttr(void)

{
  (*(code *)PTR_rk_aiq_user_api2_ae_getExpSwAttr_00037160)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_preInit_devBufCnt @ 00012450 size=12 ===== */

void rk_aiq_uapi2_sysctl_preInit_devBufCnt(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_preInit_devBufCnt_00037164)();
  return;
}



/* ===== <EXTERNAL>::fprintf @ 0001245c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00037168)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::ntohs @ 00012468 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint16_t ntohs(uint16_t __netshort)

{
  uint16_t uVar1;
  
  uVar1 = (*(code *)PTR_ntohs_0003716c)(__netshort);
  return uVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_ChnSaveFile @ 00012474 size=12 ===== */

void RK_MPI_VI_ChnSaveFile(void)

{
  (*(code *)PTR_RK_MPI_VI_ChnSaveFile_00037170)();
  return;
}



/* ===== <EXTERNAL>::abort @ 00012480 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00037174)();
  return;
}



/* ===== <EXTERNAL>::recvfrom @ 0001248c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recvfrom(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,socklen_t *__addr_len)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_recvfrom_00037178)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::sprintf @ 00012498 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_0003717c)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_MmzFlushCache @ 000124a4 size=12 ===== */

void RK_MPI_SYS_MmzFlushCache(void)

{
  (*(code *)PTR_RK_MPI_SYS_MmzFlushCache_00037180)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StartRecvFrame @ 000124b0 size=12 ===== */

void RK_MPI_VENC_StartRecvFrame(void)

{
  (*(code *)PTR_RK_MPI_VENC_StartRecvFrame_00037184)();
  return;
}



/* ===== <EXTERNAL>::socket @ 000124bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_socket_00037188)(__domain);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 000124c8 size=12 ===== */

void RK_MPI_MB_Handle2VirAddr(void)

{
  (*(code *)PTR_RK_MPI_MB_Handle2VirAddr_0003718c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_ReleaseMB @ 000124d4 size=12 ===== */

void RK_MPI_MB_ReleaseMB(void)

{
  (*(code *)PTR_RK_MPI_MB_ReleaseMB_00037190)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_DestroyChn @ 000124e0 size=12 ===== */

void RK_MPI_VENC_DestroyChn(void)

{
  (*(code *)PTR_RK_MPI_VENC_DestroyChn_00037194)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetMjpegParam @ 000124ec size=12 ===== */

void RK_MPI_VENC_SetMjpegParam(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetMjpegParam_00037198)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_deinit @ 000124f8 size=12 ===== */

void rk_aiq_uapi2_sysctl_deinit(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_deinit_0003719c)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_stop @ 00012504 size=12 ===== */

void rk_aiq_uapi2_sysctl_stop(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_stop_000371a0)();
  return;
}



/* ===== <EXTERNAL>::raise @ 00012510 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_000371a4)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::strstr @ 0001251c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strstr_000371a8)(__haystack);
  return pcVar1;
}



/* ===== <EXTERNAL>::strcmp @ 00012528 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_000371ac)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_ReleaseStream @ 00012534 size=12 ===== */

void RK_MPI_VENC_ReleaseStream(void)

{
  (*(code *)PTR_RK_MPI_VENC_ReleaseStream_000371b0)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetEptz @ 00012540 size=12 ===== */

void RK_MPI_VI_SetEptz(void)

{
  (*(code *)PTR_RK_MPI_VI_SetEptz_000371b4)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevAttr @ 0001254c size=12 ===== */

void RK_MPI_VI_SetDevAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetDevAttr_000371b8)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChn @ 00012558 size=12 ===== */

void RK_MPI_VI_EnableChn(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableChn_000371bc)();
  return;
}



/* ===== <EXTERNAL>::accept @ 00012564 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int accept(int __fd,sockaddr *__addr,socklen_t *__addr_len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_accept_000371c0)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 00012570 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_000371c4)(__ptr);
  return;
}



/* ===== <EXTERNAL>::atoi @ 0001257c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_000371c8)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetJpegParam @ 00012588 size=12 ===== */

void RK_MPI_VENC_SetJpegParam(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetJpegParam_000371cc)();
  return;
}



/* ===== <EXTERNAL>::fsync @ 00012594 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fsync(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fsync_000371d0)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::strerror @ 000125a0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_000371d4)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::listen @ 000125ac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int listen(int __fd,int __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_listen_000371d8)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::printf @ 000125b8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_000371dc)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::getopt_long @ 000125c4 size=12 ===== */

void getopt_long(void)

{
  (*(code *)PTR_getopt_long_000371e0)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableDev @ 000125d0 size=12 ===== */

void RK_MPI_VI_DisableDev(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableDev_000371e4)();
  return;
}



/* ===== <EXTERNAL>::puts @ 000125dc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_000371e8)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_stop @ 000125e8 size=12 ===== */

void rk_aiq_uapi2_camgroup_stop(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_stop_000371ec)();
  return;
}



/* ===== <EXTERNAL>::signal @ 000125f4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = (__sighandler_t)(*(code *)PTR_signal_000371f0)(__sig);
  return p_Var1;
}



/* ===== <EXTERNAL>::strcpy @ 00012600 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_000371f4)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0001260c size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_000371f8)();
  return;
}



/* ===== <EXTERNAL>::pthread_join @ 00012618 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_000371fc)(__th);
  return iVar1;
}



/* ===== FUN_00012628 @ 00012628 size=2524 ===== */

undefined4 FUN_00012628(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  void *__s;
  undefined4 *__ptr;
  pthread_t *ppVar4;
  int iVar5;
  int iVar6;
  pthread_t pVar7;
  undefined4 uVar8;
  pthread_t pVar9;
  int iVar10;
  uint uVar11;
  void *pvVar12;
  uint uVar13;
  char *__nptr;
  int iVar14;
  char *pcVar15;
  char *pcVar16;
  int iVar17;
  pthread_t pVar18;
  pthread_t pVar19;
  pthread_t pVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined4 uVar23;
  int local_a0;
  undefined4 local_98;
  void *local_94;
  int local_90;
  int local_8c;
  int local_88;
  char *local_84;
  pthread_t local_74;
  pthread_t pStack_70;
  pthread_t pStack_6c;
  pthread_t pStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  char *local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  puVar2 = DAT_00013004;
  if (param_1 < 2) {
    FUN_00013278(*param_2);
    *puVar2 = 0xffffffff;
  }
  else {
    __s = malloc(0x9b0);
    if (__s == (void *)0x0) {
      RK_LOG(2,DAT_00013010,DAT_00013008,DAT_0001300c,0x1b7);
      *puVar2 = 0xffffffff;
      FUN_00013318();
    }
    else {
      memset(__s,0,0x9b0);
      __ptr = malloc(0x20);
      if (__ptr == (undefined4 *)0x0) {
        uVar23 = 0x1bf;
        uVar8 = DAT_00013014;
      }
      else {
        pVar9 = 0;
        pVar18 = *(pthread_t *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        pVar19 = *(pthread_t *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        pVar20 = *(pthread_t *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        *__ptr = 0;
        __ptr[1] = pVar18;
        __ptr[2] = pVar19;
        __ptr[3] = pVar20;
        __ptr[4] = 0;
        __ptr[5] = pVar18;
        __ptr[6] = 0;
        __ptr[7] = pVar18;
        ppVar4 = malloc(0x28);
        *DAT_00013018 = (int)ppVar4;
        if (ppVar4 != (pthread_t *)0x0) {
          *ppVar4 = pVar9;
          ppVar4[1] = pVar18;
          ppVar4[2] = pVar19;
          ppVar4[3] = pVar20;
          ppVar4[3] = 0xffffffff;
          ppVar4[6] = 1;
          ppVar4[4] = pVar9;
          ppVar4[5] = pVar18;
          *puVar2 = 0;
          ppVar4[8] = pVar9;
          ppVar4[9] = pVar18;
          ppVar4[7] = 0x14;
          ppVar4[8] = 0x3c;
          signal(2,DAT_00013028);
          signal(0xf,DAT_00013028);
          local_84 = (char *)0x0;
          local_98 = 1;
          iVar17 = 5;
          local_8c = 0x438;
          local_88 = 0;
          local_90 = 0x780;
          pcVar15 = DAT_0001302c;
LAB_000127c8:
          do {
            iVar5 = getopt_long(param_1,param_2,DAT_00013034,DAT_00013030,0);
            if (iVar5 == -1) {
              if (pcVar15 == (char *)0x0) {
LAB_00012b50:
                iVar5 = RK_MPI_SYS_Init();
                puVar2 = DAT_0001307c;
                if (iVar5 == 0) {
                  iVar5 = FUN_000161c0(0x22a);
                  uVar8 = DAT_00013084;
                  uVar13 = 0;
                  *DAT_00013080 = iVar5;
                  uVar8 = FUN_00015ffc(iVar5,uVar8);
                  if (iVar17 == 5) {
                    uVar23 = 1;
                  }
                  else {
                    uVar23 = 2;
                  }
                  *puVar2 = uVar8;
                  FUN_00016230(uVar8,uVar23,0,0);
                  uVar8 = *puVar2;
                  uVar21 = FUN_0001b1a4();
                  uVar22 = FUN_0001b2b0();
                  FUN_0001b2e8(uVar8,(int)((ulonglong)uVar22 >> 0x20),(int)uVar21,
                               (int)((ulonglong)uVar21 >> 0x20),uVar22);
                  RK_LOG(5,DAT_00013010,DAT_00013088,DAT_0001308c,0x17a,DAT_00013084);
                  *DAT_00013090 = 1;
                  pvVar12 = __s;
                  while( true ) {
                    *(uint *)((int)pvVar12 + 0x1c) = uVar13;
                    *(uint *)((int)pvVar12 + 0x20) = uVar13;
                    *(int *)((int)pvVar12 + 0x10) = local_90;
                    *(undefined4 *)((int)pvVar12 + 0x24) = 0;
                    *(undefined4 *)((int)pvVar12 + 0xdc) = 4;
                    *(int *)((int)pvVar12 + 0x14) = local_8c;
                    *(undefined4 *)((int)pvVar12 + 0xa8) = 0;
                    *(undefined4 *)((int)pvVar12 + 0xb4) = 0;
                    *(int *)((int)pvVar12 + 0x104) = local_90;
                    *(int *)((int)pvVar12 + 0x108) = local_8c;
                    *(undefined4 *)((int)pvVar12 + 0xd0) = 2;
                    *(undefined4 *)((int)pvVar12 + 0xc0) = 2;
                    *(undefined4 *)((int)pvVar12 + 0xc4) = 0xffffffff;
                    *(undefined4 *)((int)pvVar12 + 200) = 0xffffffff;
                    iVar5 = __ptr[1];
                    *(int *)((int)pvVar12 + 8) = iVar5;
                    if (local_88 == 0) {
                      uVar11 = 0;
                    }
                    else {
                      uVar11 = uVar13 ^ 1;
                    }
                    if (uVar11 != 0) {
                      iVar10 = *(int *)((int)__s + 0x10);
                      *(undefined4 *)((int)__s + 4) = 1;
                      iVar6 = FUN_00022ef0(iVar10,local_88);
                      iVar14 = *(int *)((int)__s + 0x14);
                      uVar11 = iVar6 + 1U & 0xfffffffe;
                      *(uint *)((int)__s + 0x38) = uVar11;
                      iVar6 = FUN_00022ef0(iVar14,local_88);
                      *(uint *)((int)__s + 0x30) = (iVar10 - uVar11 >> 1) + 1 & 0xfffffffe;
                      uVar11 = iVar6 + 1U & 0xfffffffe;
                      *(uint *)((int)__s + 0x3c) = uVar11;
                      *(uint *)((int)__s + 0x34) = (iVar14 - uVar11 >> 1) + 1 & 0xfffffffe;
                    }
                    FUN_000139d4(pvVar12);
                    if (uVar13 == 1) break;
                    uVar13 = 1;
                    pvVar12 = (void *)((int)pvVar12 + 0x390);
                  }
                  pvVar12 = (void *)((int)__s + 0x720);
                  local_94 = __s;
                  if (iVar5 == 1) {
                    iVar6 = RK_MPI_VI_StartPipe(*(undefined4 *)((int)__s + 0x20));
                    if (iVar6 == 0) {
                      iVar6 = RK_MPI_VI_StartPipe(*(undefined4 *)((int)__s + 0x3b0));
                      local_a0 = 1;
                      if (iVar6 == 0) goto LAB_00012e40;
                    }
                    else {
                      local_a0 = 0;
                    }
                    RK_LOG(2,DAT_00013010,DAT_00013094,DAT_0001300c,0x25e,iVar6,
                           *(undefined4 *)((int)__s + local_a0 * 0x390 + 0x20));
                    *DAT_00013004 = 0;
                    uVar8 = DAT_00013098;
                    uVar23 = DAT_00013010;
                    uVar1 = DAT_0001300c;
LAB_00012dcc:
                    do {
                      iVar17 = RK_MPI_VI_StopPipe(*(undefined4 *)((int)local_94 + 0x20));
                      if (iVar17 != 0) {
                        RK_LOG(2,uVar23,uVar8,uVar1,0x29a,iVar17,
                               *(undefined4 *)((int)local_94 + 0x20));
                        *DAT_00013004 = 0;
                      }
                      local_94 = (void *)((int)local_94 + 0x390);
                    } while (local_94 != pvVar12);
                  }
                  else {
LAB_00012e40:
                    uVar8 = DAT_0001309c;
                    *(int *)((int)__s + 0x760) = iVar17;
                    *(int *)((int)__s + 0x734) = local_90;
                    *(undefined4 *)((int)__s + 0x994) = uVar8;
                    *(int *)((int)__s + 0x738) = local_8c;
                    *(undefined4 *)((int)__s + 0x740) = 0x32;
                    *(undefined4 *)((int)__s + 0x744) = 0x800;
                    *(char **)((int)__s + 0x9a0) = local_84;
                    if (iVar17 == 5) {
                      uVar8 = 100;
                    }
                    else {
                      uVar8 = 0;
                    }
                    *(undefined4 *)((int)__s + 0x768) = 0;
                    *(undefined4 *)((int)__s + 0x764) = local_98;
                    *(undefined4 *)((int)__s + 0x784) = uVar8;
                    *(undefined4 *)((int)__s + 0x9a4) = 1;
                    *(undefined4 *)((int)__s + 0x7e4) = 1;
                    FUN_00013ecc(pvVar12);
                    piVar3 = DAT_00013018;
                    pthread_create(&local_74,(pthread_attr_t *)0x0,DAT_000130a0,__s);
                    RK_LOG(5,DAT_00013010,DAT_000130a4,DAT_0001300c,0x281);
                    while (*(int *)*piVar3 == 0) {
                      sleep(1);
                    }
                    RK_LOG(5,DAT_00013010,DAT_000130a8,DAT_0001300c,0x285);
                    pVar9 = *(pthread_t *)((int)__s + 0x990);
                    *(undefined4 *)(*piVar3 + 8) = 1;
                    pthread_join(pVar9,(void **)0x0);
                    FUN_000145dc(pvVar12);
                    if (*DAT_00013080 != 0) {
                      FUN_00016850();
                    }
                    *DAT_00013090 = 0;
                    *(undefined4 *)(*piVar3 + 4) = 1;
                    pthread_join(local_74,(void **)0x0);
                    uVar8 = DAT_00013098;
                    uVar23 = DAT_00013010;
                    uVar1 = DAT_0001300c;
                    if (iVar5 == 1) goto LAB_00012dcc;
                  }
                  FUN_00013e58(__s);
                  FUN_00013e58((int)__s + 0x390);
                }
                else {
                  *DAT_00013004 = 0xffffffff;
                }
                RK_MPI_SYS_Exit();
                if (pcVar15 != (char *)0x0) {
                  iVar17 = __ptr[1];
                  uVar13 = 0;
                  if (iVar17 == 0) {
                    while( true ) {
                      if ((uint)__ptr[6] <= uVar13) goto LAB_000126e0;
                      iVar17 = FUN_00014bdc(uVar13);
                      if (iVar17 != 0) break;
                      uVar13 = uVar13 + 1;
                    }
                    uVar23 = 0xb8;
                    uVar8 = DAT_000130ac;
                  }
                  else if (iVar17 == 1) {
                    iVar17 = FUN_00014c64(__ptr[5]);
                    if (iVar17 == 0) goto LAB_000126e0;
                    uVar23 = 0xbf;
                    uVar8 = DAT_00013074;
                  }
                  else {
                    uVar23 = 0xc3;
                    uVar8 = DAT_000130b0;
                  }
                  RK_LOG(2,DAT_00013010,uVar8,DAT_00013078,uVar23,iVar17);
                }
              }
              else {
                printf(DAT_00013038,pcVar15);
                piVar3 = DAT_00013018;
                ppVar4 = (pthread_t *)__ptr[1];
                __ptr[7] = 0;
                iVar5 = *piVar3;
                *__ptr = 1;
                __ptr[2] = pcVar15;
                __ptr[6] = 2;
                *(undefined4 *)(iVar5 + 0x24) = 2;
                if (ppVar4 == (pthread_t *)0x0) {
                  __ptr[3] = 0;
                  __ptr[4] = 1;
                  iVar5 = FUN_00014728(0,0,1,pcVar15);
                  iVar6 = FUN_00014ce4(0);
                  if (iVar6 == 0 && iVar5 == 0) {
                    iVar5 = FUN_00014728(1,0,1,pcVar15);
                    iVar6 = FUN_00014ce4(1);
                    ppVar4 = (pthread_t *)0x1;
                    if (iVar5 == 0 && iVar6 == 0) goto LAB_00012b50;
                  }
                  uVar23 = 0x99;
                  uVar8 = DAT_0001303c;
LAB_000128a0:
                  RK_LOG(2,DAT_00013010,uVar8,DAT_00013040,uVar23,ppVar4);
                }
                else {
                  if (ppVar4 != (pthread_t *)0x1) {
                    uVar23 = 0xaa;
                    uVar8 = DAT_000130b4;
                    goto LAB_000128a0;
                  }
                  uStack_60 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
                  ppVar4 = &local_74;
                  __ptr[5] = 0;
                  local_54 = 2;
                  local_44 = 0;
                  local_64 = 0;
                  local_5c = 0;
                  local_4c = 0;
                  uStack_40 = 0;
                  local_74 = pVar9;
                  pStack_70 = pVar18;
                  pStack_6c = pVar19;
                  pStack_68 = pVar20;
                  uStack_58 = uStack_60;
                  local_50 = pcVar15;
                  uStack_48 = uStack_60;
                  uStack_3c = uStack_60;
                  iVar5 = FUN_00014a50(0,0,1,0,0,ppVar4);
                  if (iVar5 == 0) goto LAB_00012b50;
                  printf(DAT_0001306c,DAT_00013068);
                }
                RK_LOG(2,DAT_00013010,DAT_00013070,DAT_0001300c,0x22b,ppVar4);
              }
              goto LAB_000126e0;
            }
            __nptr = (char *)*DAT_00013044;
            if (iVar5 == 0x73) {
              pVar7 = atoi(__nptr);
              ppVar4[6] = pVar7;
              goto LAB_000127c8;
            }
            if (iVar5 < 0x74) {
              if (iVar5 == 0x68) {
                local_8c = atoi(__nptr);
              }
              else {
                if (iVar5 < 0x69) {
                  if (iVar5 == 0x61) {
                    pcVar15 = __nptr;
                    if (__nptr == (char *)0x0) {
                      pcVar16 = (char *)param_2[*DAT_00013048];
                      pcVar15 = pcVar16;
                      if ((pcVar16 != (char *)0x0) && (pcVar15 = __nptr, *pcVar16 != '-')) {
                        *DAT_00013048 = *DAT_00013048 + 1;
                        pcVar15 = pcVar16;
                      }
                    }
                    goto LAB_000127c8;
                  }
                  if (iVar5 != 0x65) goto LAB_000128d8;
                  iVar17 = strcmp(__nptr,DAT_0001304c);
                  if (iVar17 == 0) {
                    local_98 = 1;
                  }
                  else {
                    iVar17 = strcmp(__nptr,DAT_00013050);
                    if (iVar17 == 0) {
                      local_98 = 2;
                    }
                    else {
                      iVar17 = strcmp(__nptr,DAT_00013054);
                      if (iVar17 != 0) {
                        iVar17 = strcmp(__nptr,DAT_00013058);
                        if (iVar17 == 0) {
                          local_98 = 8;
                        }
                        else {
                          iVar17 = strcmp(__nptr,DAT_0001305c);
                          if (iVar17 == 0) {
                            local_98 = 9;
                          }
                          else {
                            iVar17 = strcmp(__nptr,DAT_00013060);
                            if (iVar17 != 0) {
                              puts(DAT_00013064);
                              FUN_00013278(*param_2);
                              *DAT_00013004 = 0xffffffff;
                              goto LAB_00012654;
                            }
                            local_98 = 10;
                          }
                        }
                        iVar17 = 6;
                        goto LAB_000127c8;
                      }
                      local_98 = 3;
                    }
                  }
                  iVar17 = 5;
                  goto LAB_000127c8;
                }
                if (iVar5 != 0x69) goto code_r0x000128f8;
                iVar5 = atoi(__nptr);
                __ptr[1] = iVar5;
              }
              goto LAB_000127c8;
            }
            if (iVar5 == 0x7a) {
              local_88 = atoi(__nptr);
            }
            else if (iVar5 < 0x7b) {
              if (iVar5 == 0x74) {
                pVar7 = atoi(__nptr);
                ppVar4[7] = pVar7;
              }
              else {
                if (iVar5 != 0x77) goto LAB_000128d8;
                local_90 = atoi(__nptr);
              }
            }
            else if (iVar5 == 0xda) {
              pVar7 = atoi(__nptr);
              ppVar4[5] = pVar7;
            }
            else {
              if (iVar5 != 0xe0) goto LAB_000128d8;
              pVar7 = atoi(__nptr);
              ppVar4[8] = pVar7;
            }
          } while( true );
        }
        RK_LOG(2,DAT_00013010,DAT_0001301c,DAT_00013020,0x189);
        uVar23 = 0x1c7;
        uVar8 = DAT_00013024;
      }
      RK_LOG(2,DAT_00013010,uVar8,DAT_0001300c,uVar23);
      *puVar2 = 0xffffffff;
LAB_000126e0:
      FUN_00013318();
      if (__ptr != (undefined4 *)0x0) {
        free(__ptr);
      }
      free(__s);
    }
  }
LAB_00012654:
  return *DAT_00013004;
code_r0x000128f8:
  local_84 = __nptr;
  if (iVar5 != 0x6f) {
LAB_000128d8:
    FUN_00013278(*param_2);
    return 0;
  }
  goto LAB_000127c8;
}



/* ===== entry @ 000130b8 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_000370a4)
            (DAT_000130ec,param_2,&stack0x00000004,DAT_000130f0,DAT_000130e8,param_1);
  return;
}



/* ===== FUN_000130f4 @ 000130f4 size=32 ===== */

void FUN_000130f4(void)

{
  if (DAT_00013118 == DAT_00013114) {
    return;
  }
  if (DAT_0001311c == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00013110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0001311c)();
  return;
}



/* ===== _FINI_0 @ 00013158 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00013194;
  if (*DAT_00013194 != '\0') {
    return;
  }
  FUN_000130f4();
  if (DAT_00013198 != 0) {
    __deregister_frame_info(DAT_0001319c);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 000131a0 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_000131c4 != 0) {
    __register_frame_info(DAT_000131cc,DAT_000131c8);
  }
  if ((DAT_00013150 - DAT_0001314c >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00013154 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00013148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00013154)();
  return;
}



/* ===== FUN_000131d0 @ 000131d0 size=60 ===== */

void FUN_000131d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  RK_LOG(2,DAT_00013214,DAT_0001320c,DAT_00013210,0x5a,param_1,param_2,param_4);
  *(undefined4 *)*DAT_00013218 = 1;
  return;
}



/* ===== FUN_0001321c @ 0001321c size=72 ===== */

void FUN_0001321c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  RK_LOG(2,DAT_0001326c,DAT_00013264,DAT_00013268,0x54,param_1,param_2,param_4);
  *DAT_00013270 = 0xffffffff;
  *(undefined4 *)*DAT_00013274 = 1;
  return;
}



/* ===== FUN_00013278 @ 00013278 size=112 ===== */

void FUN_00013278(undefined4 param_1)

{
  puts(DAT_000132e8);
  printf(DAT_000132ec,param_1);
  puts(DAT_000132f0);
  puts(DAT_000132f4);
  puts(DAT_000132f8);
  puts(DAT_000132fc);
  puts(DAT_00013300);
  puts(DAT_00013304);
  puts(DAT_00013308);
  puts(DAT_0001330c);
  puts(DAT_00013310);
  puts(DAT_00013314);
  return;
}



/* ===== FUN_00013318 @ 00013318 size=40 ===== */

undefined4 FUN_00013318(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_00013340;
  if ((void *)*DAT_00013340 != (void *)0x0) {
    free((void *)*DAT_00013340);
    *puVar1 = 0;
  }
  return 0;
}



/* ===== FUN_00013344 @ 00013344 size=1016 ===== */

undefined4 FUN_00013344(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  uint *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int local_4c;
  undefined4 local_40;
  uint uStack_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint uStack_2c;
  
  uVar2 = DAT_00013740;
  piVar1 = DAT_0001373c;
  iVar10 = 0;
  local_4c = 0;
  do {
    while( true ) {
      while( true ) {
        if (*(int *)(*piVar1 + 4) != 0) {
          RK_LOG(5,DAT_00013740,DAT_00013744,DAT_00013748,0x133);
          return 0;
        }
        iVar4 = RK_MPI_VI_GetChnFrame
                          (*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
                           param_1 + 0x318,2000);
        if (iVar4 == 0) break;
        RK_LOG(2,uVar2,DAT_0001374c,DAT_00013748,0xff,iVar4,*(undefined4 *)(param_1 + 0x20),
               *(undefined4 *)(param_1 + 0x24));
      }
      iVar4 = RK_MPI_VI_GetChnFrame
                        (*(undefined4 *)(param_1 + 0x3b0),*(undefined4 *)(param_1 + 0x3b4),
                         param_1 + 0x6a8,2000);
      if (iVar4 == 0) break;
      RK_LOG(2,uVar2,DAT_0001374c,DAT_00013748,0x106,iVar4,*(undefined4 *)(param_1 + 0x3b0),
             *(undefined4 *)(param_1 + 0x3b4));
      RK_MPI_VI_ReleaseChnFrame
                (*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),param_1 + 0x318);
    }
    if (*(int *)(*piVar1 + 0x14) == iVar10) {
      uStack_3c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      local_38 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      local_34 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      iVar11 = *(int *)(*piVar1 + 0x10) * 0x390 + param_1;
      local_40 = 0;
      local_30 = 0;
      iVar4 = *(int *)(iVar11 + 0x10);
      iVar6 = *(int *)(iVar11 + 0x14);
      uStack_2c = uStack_3c;
      iVar10 = RK_MPI_VI_GetEptz(*(undefined4 *)(iVar11 + 0x20),*(undefined4 *)(iVar11 + 0x24),
                                 &local_40);
      puVar3 = DAT_00013770;
      if (iVar10 == 0) {
        uVar12 = *DAT_00013770;
        iVar10 = FUN_00022ef0(iVar4 * 10,uVar12);
        uVar8 = iVar10 + 1U & 0xfffffffe;
        local_30 = uVar8;
        iVar10 = FUN_00022ef0(iVar6 * 10,uVar12);
        local_38 = (*(int *)(iVar11 + 0x10) - uVar8 >> 1) + 1 & 0xfffffffe;
        uStack_2c = iVar10 + 1U & 0xfffffffe;
        local_34 = (*(int *)(iVar11 + 0x14) - uStack_2c >> 1) + 1 & 0xfffffffe;
        uVar8 = local_30;
        iVar10 = RK_MPI_VI_SetEptz(*(undefined4 *)(iVar11 + 0x20),*(undefined4 *)(iVar11 + 0x24),
                                   local_40,uStack_3c,local_38,local_34,local_30,uStack_2c);
        if (iVar10 != 0) {
          uVar7 = *(undefined4 *)(iVar11 + 0x24);
          RK_LOG(2,uVar2,DAT_00013774,DAT_00013754,0xe2,iVar10,*(undefined4 *)(iVar11 + 0x20),uVar7)
          ;
          uVar5 = 0xe3;
          goto LAB_000134d8;
        }
        iVar10 = *piVar1;
        uVar9 = *(int *)(iVar10 + 0x18) + *puVar3;
        uVar12 = *(uint *)(iVar10 + 0x1c);
        if (*(uint *)(iVar10 + 0x20) < uVar9) {
          uVar9 = 10;
        }
        *puVar3 = uVar9;
        if (uVar12 < uVar9) {
          *(undefined4 *)(iVar10 + 0x10) = 1;
        }
        else {
          *(undefined4 *)(iVar10 + 0x10) = 0;
        }
      }
      else {
        uVar7 = *(undefined4 *)(iVar11 + 0x24);
        RK_LOG(2,uVar2,DAT_00013750,DAT_00013754,0xd4,iVar10,*(undefined4 *)(iVar11 + 0x20),uVar7,
               *(undefined4 *)(*piVar1 + 0x10));
        uVar5 = 0xd5;
LAB_000134d8:
        FUN_0001321c(DAT_00013758,uVar5);
        uVar8 = *(uint *)(*piVar1 + 0x10);
        RK_LOG(2,uVar2,DAT_0001375c,DAT_00013748,0x112,iVar10,uVar8,uVar7);
        FUN_0001321c(DAT_00013760,0x113);
      }
      local_4c = local_4c + 1;
      iVar4 = *(int *)(*piVar1 + 0xc);
      iVar10 = 0;
      if (iVar4 < local_4c && 0 < iVar4) {
        iVar10 = 0;
        RK_LOG(2,uVar2,DAT_00013764,DAT_00013748,0x11a,iVar4,uVar8);
        FUN_000131d0(DAT_00013760,0x11b);
      }
    }
    iVar4 = RK_MPI_VENC_SendFrame(0,*(int *)(*piVar1 + 0x10) * 0x390 + param_1 + 0x318,2000);
    if (iVar4 != 0) {
      RK_LOG(2,uVar2,DAT_00013768,DAT_00013748,0x124,iVar4,*(undefined4 *)(*piVar1 + 0x10));
      FUN_0001321c(DAT_00013760,0x125);
    }
    iVar4 = param_1 + 0x318;
    for (uVar8 = 0; uVar8 < *(uint *)(*piVar1 + 0x24); uVar8 = uVar8 + 1) {
      RK_MPI_VI_ReleaseChnFrame
                (*(undefined4 *)(iVar4 + -0x2f8),*(undefined4 *)(iVar4 + -0x2f4),iVar4);
      iVar4 = iVar4 + 0x390;
    }
    iVar10 = iVar10 + 1;
    RK_LOG(5,uVar2,DAT_0001376c,DAT_00013748,0x130,iVar10);
  } while( true );
}



/* ===== FUN_00013778 @ 00013778 size=504 ===== */

undefined4 FUN_00013778(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  FILE *__stream;
  int __fd;
  int iVar4;
  int iVar5;
  void *local_124;
  char acStack_120 [256];
  
  local_124 = (void *)0x0;
  memset(acStack_120,0,0xff);
  if (*(int *)(param_1 + 0x280) == 0) {
    __stream = (FILE *)0x0;
    __fd = 0;
  }
  else {
    snprintf(acStack_120,0xff,DAT_00013970,*(int *)(param_1 + 0x280),*(undefined4 *)(param_1 + 0x48)
            );
    __stream = fopen64(acStack_120,DAT_00013974);
    if (__stream == (FILE *)0x0) {
      RK_LOG(2,DAT_00013978,DAT_0001397c,DAT_00013980,0x144,*(undefined4 *)(param_1 + 0x48),
             *(undefined4 *)(param_1 + 0x280));
      FUN_0001321c(DAT_00013984,0x145);
      return 0;
    }
    __fd = fileno(__stream);
  }
  piVar3 = DAT_0001398c;
  piVar2 = DAT_00013988;
  uVar1 = DAT_00013978;
  iVar5 = 0;
  do {
    do {
      if (*(int *)(*piVar2 + 8) != 0) goto LAB_000138fc;
      iVar4 = FUN_00014504(param_1,&local_124);
    } while (iVar4 != 0);
    if ((__stream != (FILE *)0x0) && (*(int *)*piVar2 == 0)) {
      fwrite(local_124,1,*(size_t *)(*(int *)(param_1 + 0xe0) + 4),__stream);
      fflush(__stream);
    }
    if (*piVar3 == 0) {
      RK_LOG(5,uVar1,DAT_0001399c,DAT_00013980,0x158,*(undefined4 *)(param_1 + 0x48),iVar5);
    }
    else {
      iVar4 = *(int *)(param_1 + 0xe0);
      FUN_00019d38(*DAT_00013990,local_124,*(undefined4 *)(iVar4 + 4),DAT_00013990,
                   *(undefined4 *)(iVar4 + 8),*(undefined4 *)(iVar4 + 0xc));
      FUN_0001918c(*DAT_00013994);
    }
    iVar5 = iVar5 + 1;
    FUN_0001458c(param_1);
  } while (iVar5 < *(int *)(param_1 + 0x38) || *(int *)(param_1 + 0x38) < 1);
  FUN_000131d0(DAT_00013984,0x15e);
LAB_000138fc:
  if (__stream != (FILE *)0x0) {
    fsync(__fd);
    fclose(__stream);
  }
  RK_LOG(5,DAT_00013978,DAT_00013998,DAT_00013980,0x16a,*(undefined4 *)(param_1 + 0x48));
  return 0;
}



/* ===== FUN_000139d4 @ 000139d4 size=764 ===== */

int FUN_000139d4(int *param_1)

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
  if (iVar1 == DAT_00013cd0) {
    iVar1 = RK_MPI_VI_SetDevAttr(param_1[7],param_1 + 0x10);
    if (iVar1 == 0) goto LAB_00013a4c;
    uVar7 = 0x29;
    uVar5 = DAT_00013cd4;
  }
  else {
    RK_LOG(2,DAT_00013cdc,DAT_00013ce0,DAT_00013cd8,0x2d);
LAB_00013a4c:
    iVar1 = RK_MPI_VI_GetDevIsEnable(param_1[7]);
    if (iVar1 == 0) {
      RK_LOG(2,DAT_00013cdc,DAT_00013cf0,DAT_00013cd8,0x42);
LAB_00013b08:
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
            uVar5 = DAT_00013cf8;
LAB_00013b88:
            RK_LOG(2,DAT_00013cdc,uVar5,DAT_00013cd8,uVar7,uVar6);
            return -1;
          }
          local_1c = 1;
          local_14 = param_1[4] * uVar4 * 3 >> 1;
          uStack_18 = uVar4;
          uVar6 = RK_MPI_VI_SetChnWrapBufAttr(param_1[8],param_1[9],&local_1c);
          if (uVar6 != 0) {
            uVar7 = 0x59;
            uVar5 = DAT_00013cfc;
            goto LAB_00013b88;
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
            uVar5 = DAT_00013d08;
            goto LAB_00013cc8;
          }
          uVar7 = 0x6d;
          uVar5 = DAT_00013d04;
          goto LAB_00013abc;
        }
        RK_LOG(2,DAT_00013cdc,DAT_00013d00,DAT_00013cd8,0x66,iVar1,param_1[8],param_1[9]);
      }
      else {
        uVar7 = 0x4a;
        uVar5 = DAT_00013cf4;
LAB_00013abc:
        RK_LOG(2,DAT_00013cdc,uVar5,DAT_00013cd8,uVar7,iVar1);
      }
      iVar1 = RK_MPI_VI_DisableDev(param_1[7]);
      uVar7 = 0x7d;
      uVar5 = DAT_00013cec;
    }
    else {
      iVar1 = RK_MPI_VI_EnableDev(param_1[7]);
      if (iVar1 == 0) {
        param_1[0x17] = 1;
        param_1[0x18] = param_1[8];
        iVar1 = RK_MPI_VI_SetDevBindPipe(param_1[7],param_1 + 0x17);
        if (iVar1 == 0) goto LAB_00013b08;
        uVar7 = 0x3e;
        uVar5 = DAT_00013ce8;
        goto LAB_00013abc;
      }
      uVar7 = 0x36;
      uVar5 = DAT_00013ce4;
    }
  }
  uVar2 = 2;
  iVar3 = iVar1;
LAB_00013cc8:
  RK_LOG(uVar2,DAT_00013cdc,uVar5,DAT_00013cd8,uVar7,iVar3);
  return iVar1;
}



/* ===== FUN_00013d0c @ 00013d0c size=236 ===== */

undefined4 FUN_00013d0c(int param_1,undefined4 *param_2)

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
    RK_LOG(5,DAT_00013dfc,DAT_00013df8,DAT_00013e00,0x92,*(undefined4 *)(param_1 + 0x1c),
           *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),uVar2,
           *(undefined4 *)(param_1 + 0x380),*(undefined4 *)(param_1 + 900),
           *(undefined4 *)(param_1 + 0x368),*(undefined4 *)(param_1 + 0x374),
           *(undefined4 *)(param_1 + 0x378),*(undefined4 *)(param_1 + 0x36c),
           *(undefined4 *)(param_1 + 0x37c));
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
    RK_LOG(2,DAT_00013dfc,DAT_00013e04,DAT_00013e00,0x94,*(undefined4 *)(param_1 + 0x1c),iVar1);
  }
  return uVar2;
}



/* ===== FUN_00013e08 @ 00013e08 size=68 ===== */

undefined4 FUN_00013e08(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = RK_MPI_VI_ReleaseChnFrame
                    (*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),param_1 + 0x318
                     ,param_4,param_1,param_2,param_3);
  if (iVar1 != 0) {
    RK_LOG(2,DAT_00013e54,DAT_00013e50,DAT_00013e4c,0xa0,iVar1);
  }
  return 0;
}



/* ===== FUN_00013e58 @ 00013e58 size=104 ===== */

uint FUN_00013e58(int param_1,undefined4 param_2,undefined4 param_3)

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
    RK_LOG(2,DAT_00013ec8,DAT_00013ec4,DAT_00013ec0,0xaf,uVar1);
  }
  return uVar1;
}



/* ===== FUN_00013ecc @ 00013ecc size=1268 ===== */

int FUN_00013ecc(int *param_1)

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
    RK_LOG(2,DAT_000143c0,DAT_000143d0,DAT_000143c8,0x54);
    param_1[0x27] = 5;
    param_1[0x13] = 0xf;
    param_1[0x20] = 0;
    *(undefined1 *)(param_1 + 0x21) = 0;
    param_1[0x26] = 0;
    goto LAB_00013f8c;
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
    goto LAB_00013f8c;
  }
  if (iVar3 == 6) {
    param_1[0x13] = 0xc;
    if (iVar5 != 8) {
      bVar7 = iVar5 == 9;
      goto LAB_00013f38;
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
      goto LAB_00013f8c;
    }
    bVar7 = iVar5 == 2;
LAB_00013f38:
    if (!bVar7) goto LAB_00013f8c;
  }
  param_1[0x27] = iVar5;
  param_1[0x2c] = 1;
  param_1[0x28] = param_1[8];
  param_1[0x2d] = param_1[9];
  param_1[0x2a] = 1;
  param_1[0x2b] = param_1[7];
  param_1[0x29] = param_1[7];
LAB_00013f8c:
  uVar4 = DAT_000143c0;
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
  uVar8 = DAT_000143c4;
  if (iVar5 == 0) {
    iVar5 = 3;
  }
  param_1[0x1f] = iVar5;
  RK_LOG(2,uVar4,uVar8,DAT_000143c8,0x81,param_1[0x12],iVar5);
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
        printf(DAT_000143d4);
      }
    }
    if (param_1[2] != 0) {
      local_110 = param_1[4];
      local_10c = 0;
      local_114 = 1;
      local_118 = 1;
      iVar3 = RK_MPI_VENC_SetChnBufWrapAttr(param_1[0x12],&local_114);
      if (iVar3 != 0) {
        RK_LOG(2,DAT_000143c0,DAT_000143d8,DAT_000143c8,0xa1,iVar3,iVar5);
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
                RK_LOG(2,DAT_000143c0,DAT_000143e8,DAT_000143c8,0xdc,iVar3);
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
          uVar4 = DAT_000143e4;
          iVar9 = param_1[0x12];
        }
        else {
          uVar8 = 0xca;
          uVar4 = DAT_000143e0;
          iVar9 = iVar3;
        }
      }
      else {
        uVar8 = 0xc1;
        uVar4 = DAT_000143e0;
        iVar9 = iVar3;
      }
    }
    else {
      uVar8 = 0xb9;
      uVar4 = DAT_000143dc;
      iVar9 = iVar3;
    }
  }
  else {
    uVar8 = 0x8a;
    uVar4 = DAT_000143cc;
    iVar9 = iVar3;
  }
  RK_LOG(2,DAT_000143c0,uVar4,DAT_000143c8,uVar8,iVar9,iVar5);
  return iVar3;
}



/* ===== FUN_000143ec @ 000143ec size=264 ===== */

undefined4
FUN_000143ec(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
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
  
  uVar2 = DAT_000144f8;
  uVar1 = DAT_000144f4;
  while( true ) {
    uVar6 = 1;
    iVar4 = RK_MPI_MB_GetMB(*(undefined4 *)(param_1 + 0x278));
    if (iVar4 != 0) break;
    RK_LOG(2,uVar2,DAT_000144fc,uVar1,0x105,0);
    usleep(2000);
  }
  RK_MPI_MB_Handle2VirAddr();
  uVar3 = DAT_00014500;
  RK_MPI_SYS_MmzFlushCache(iVar4,0);
  uVar2 = DAT_000144f8;
  uVar1 = DAT_000144f4;
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



/* ===== FUN_00014504 @ 00014504 size=124 ===== */

undefined4 FUN_00014504(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar2 = DAT_00014588;
  uVar1 = DAT_00014584;
  uVar4 = DAT_00014580;
  while (iVar3 = RK_MPI_VENC_GetStream(*(undefined4 *)(param_1 + 0x48),param_1 + 0xe0,2000),
        iVar3 != 0) {
    RK_LOG(2,uVar2,uVar1,uVar4,0x12f,*(undefined4 *)(param_1 + 0x48),iVar3);
  }
  uVar4 = RK_MPI_MB_Handle2VirAddr(**(undefined4 **)(param_1 + 0xe0));
  *param_2 = uVar4;
  return 0;
}



/* ===== FUN_0001458c @ 0001458c size=68 ===== */

int FUN_0001458c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = RK_MPI_VENC_ReleaseStream
                    (*(undefined4 *)(param_1 + 0x48),param_1 + 0xe0,param_3,param_4,param_1,param_2)
  ;
  if (iVar1 != 0) {
    RK_LOG(2,DAT_000145d8,DAT_000145d4,DAT_000145d0,0x13a,iVar1);
  }
  return iVar1;
}



/* ===== FUN_000145dc @ 000145dc size=136 ===== */

int FUN_000145dc(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = RK_MPI_VENC_StopRecvFrame(*(undefined4 *)(param_1 + 0x48));
  if (iVar1 == 0) {
    RK_LOG(2,DAT_00014668,DAT_00014664,DAT_0001466c,0x147,*(undefined4 *)(param_1 + 0x48),param_3);
    iVar2 = RK_MPI_VENC_DestroyChn(*(undefined4 *)(param_1 + 0x48));
    if (iVar2 != 0) {
      RK_LOG(2,DAT_00014668,DAT_00014670,DAT_0001466c,0x14a,iVar2,param_3);
    }
    if (*(void **)(param_1 + 0xe0) != (void *)0x0) {
      free(*(void **)(param_1 + 0xe0));
    }
  }
  return iVar1;
}



/* ===== FUN_00014728 @ 00014728 size=236 ===== */

undefined4 FUN_00014728(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  char *__format;
  undefined4 uVar2;
  char acStack_158 [16];
  undefined1 auStack_148 [304];
  
  iVar1 = DAT_00014820;
  if (param_1 < 8) {
    setlinebuf((FILE *)*DAT_0001481c);
    __format = DAT_0001482c;
    if (param_4 == 0) {
      puts(DAT_00014824);
      uVar2 = 0;
    }
    else {
      *(undefined4 *)(DAT_00014828 + param_1 * 4) = param_2;
      snprintf(acStack_158,0x10,__format,param_2);
      setenv(DAT_00014830,acStack_158,1);
      rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId(param_1,auStack_148);
      printf(DAT_00014834,param_1,auStack_148,param_4);
      rk_aiq_uapi2_sysctl_preInit_devBufCnt(auStack_148,DAT_00014838,2);
      uVar2 = rk_aiq_uapi2_sysctl_init(auStack_148,param_4,DAT_00014840,DAT_0001483c);
      if (param_3 != 0) {
        rk_aiq_uapi2_sysctl_setMulCamConc(uVar2,1);
      }
    }
    *(undefined4 *)(iVar1 + param_1 * 4) = uVar2;
    uVar2 = 0;
  }
  else {
    printf(DAT_00014818,DAT_00014814);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== FUN_00014844 @ 00014844 size=488 ===== */

int FUN_00014844(int param_1,ushort *param_2,int param_3)

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
  iVar3 = DAT_00014a30;
  __format = DAT_00014a2c;
  __s = param_2;
  if ((int)param_2 - 1U < 2) {
    iVar4 = rk_aiq_uapi2_camgroup_getCamInfos
                      (*(undefined4 *)(DAT_00014a30 + param_1 * 4),&local_108);
    if (iVar4 == 0) {
      piVar7 = &local_108;
      iVar4 = 0;
      for (iVar8 = 0; iVar8 < local_108; iVar8 = iVar8 + 1) {
        iVar6 = rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm
                          (*(undefined4 *)(iVar3 + param_1 * 4),piVar7[1]);
        if (iVar6 == 0) {
          puts(DAT_00014a4c);
          goto LAB_00014a1c;
        }
        printf(DAT_00014a34,piVar7[1],piVar7[9]);
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
              puts(DAT_00014a38);
              local_84 = -1;
            }
            else {
              uVar1 = __s[2];
              uVar2 = __s[3];
              printf(DAT_00014a40,(uint)*__s,(uint)__s[1],(uint)uVar1,(uint)uVar2,(uint)__s[4],
                     (uint)__s[5]);
              local_84 = ((uint)uVar2 * (uint)uVar1 + 6) * 2;
            }
          }
          else {
            pcVar5 = strrchr((char *)__s,0x2f);
            __format = DAT_00014a44;
            if (pcVar5 == (char *)0x0) goto LAB_0001499c;
            local_bc = 1;
            local_8c = 1;
            local_90 = (ushort *)0x1;
            memcpy(&local_88,__s,(size_t)(pcVar5 + (1 - (int)__s)));
            strcpy(acStack_48,pcVar5 + 1);
            printf(DAT_00014a48,&local_88,acStack_48);
          }
          iVar6 = rk_aiq_user_api2_aldch_v21_SetAttrib(iVar6,auStack_c4);
          iVar4 = 0;
          if (iVar6 != 0) {
            printf(DAT_00014a3c,iVar6);
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
LAB_0001499c:
    printf(__format,__s);
LAB_00014a1c:
    iVar4 = -1;
  }
  return iVar4;
}



/* ===== FUN_00014a50 @ 00014a50 size=352 ===== */

undefined4
FUN_00014a50(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5,
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
  
  uVar1 = DAT_00014bd4;
  __format_00 = DAT_00014bd0;
  __format = DAT_00014bcc;
  if (param_1 < 8) {
    for (iVar4 = 0; iVar3 = DAT_00014bc0, iVar4 < *(int *)(param_6 + 0x20); iVar4 = iVar4 + 1) {
      iVar3 = rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId(iVar4,acStack_558);
      __s = DAT_00014bb8;
      if (iVar3 != 0) goto LAB_00014aa8;
      printf(__format,param_1,iVar4,acStack_558,*(undefined4 *)(param_6 + 0x24));
      __dest = auStack_428 + iVar4 * 0x80;
      sVar2 = strlen(acStack_558);
      memcpy(__dest,acStack_558,sVar2 + 1);
      *(undefined1 **)(param_6 + iVar4 * 4) = __dest;
      printf(__format_00,iVar4,__dest);
      iVar3 = rk_aiq_uapi2_sysctl_preInit_devBufCnt(acStack_558,uVar1,2);
      __s = DAT_00014bbc;
      if (iVar3 != 0) goto LAB_00014aa8;
    }
    iVar4 = rk_aiq_uapi2_camgroup_create(param_6);
    *(int *)(iVar3 + param_1 * 4) = iVar4;
    __s = DAT_00014bc4;
    if (iVar4 != 0) {
      if (param_4 != 0) {
        FUN_00014844(param_1,param_4 & 0xff,param_5);
      }
      iVar4 = rk_aiq_uapi2_camgroup_prepare(*(undefined4 *)(iVar3 + param_1 * 4),param_2);
      iVar3 = rk_aiq_uapi2_camgroup_start(*(undefined4 *)(iVar3 + param_1 * 4));
      __s = DAT_00014bc8;
      if (iVar4 == 0 && iVar3 == 0) {
        puts(DAT_00014bd8);
        return 0;
      }
    }
LAB_00014aa8:
    puts(__s);
  }
  else {
    printf(DAT_00014bb4,DAT_00014bb0,8);
  }
  return 0xffffffff;
}



/* ===== FUN_00014bdc @ 00014bdc size=112 ===== */

undefined4 FUN_00014bdc(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_00014c4c;
  if ((param_1 < 8) && (*(int *)(DAT_00014c4c + param_1 * 4) != 0)) {
    puts(DAT_00014c58);
    rk_aiq_uapi2_sysctl_stop(*(undefined4 *)(iVar1 + param_1 * 4),0);
    puts(DAT_00014c5c);
    rk_aiq_uapi2_sysctl_deinit(*(undefined4 *)(iVar1 + param_1 * 4));
    puts(DAT_00014c60);
    *(undefined4 *)(iVar1 + param_1 * 4) = 0;
    return 0;
  }
  printf(DAT_00014c54,DAT_00014c50,param_1);
  return 0xffffffff;
}



/* ===== FUN_00014c64 @ 00014c64 size=104 ===== */

undefined4 FUN_00014c64(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_00014ccc;
  if (param_1 < 8) {
    if (*(int *)(DAT_00014ccc + param_1 * 4) != 0) {
      puts(DAT_00014cd8);
      rk_aiq_uapi2_camgroup_stop(*(undefined4 *)(iVar1 + param_1 * 4));
      puts(DAT_00014cdc);
      rk_aiq_uapi2_camgroup_destroy(*(undefined4 *)(iVar1 + param_1 * 4));
      puts(DAT_00014ce0);
      *(undefined4 *)(iVar1 + param_1 * 4) = 0;
      return 0;
    }
  }
  printf(DAT_00014cd4,DAT_00014cd0);
  return 0xffffffff;
}



/* ===== FUN_00014ce4 @ 00014ce4 size=152 ===== */

undefined4 FUN_00014ce4(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_00014d7c;
  if ((param_1 < 8) && (iVar1 = *(int *)(DAT_00014d7c + param_1 * 4), iVar1 != 0)) {
    iVar1 = rk_aiq_uapi2_sysctl_prepare(iVar1,0,0,*(undefined4 *)(DAT_00014d88 + param_1 * 4));
    if (iVar1 == 0) {
      puts(DAT_00014d90);
      iVar2 = rk_aiq_uapi2_sysctl_start(*(undefined4 *)(iVar2 + param_1 * 4));
      if (iVar2 == 0) {
        puts(DAT_00014d98);
        return 0;
      }
      puts(DAT_00014d94);
    }
    else {
      puts(DAT_00014d8c);
      *(undefined4 *)(iVar2 + param_1 * 4) = 0;
    }
  }
  else {
    printf(DAT_00014d84,DAT_00014d80);
  }
  return 0xffffffff;
}



/* ===== FUN_00015148 @ 00015148 size=28 ===== */

int FUN_00015148(void)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  return *piVar1;
}



/* ===== FUN_00015164 @ 00015164 size=40 ===== */

char * FUN_00015164(int param_1)

{
  char *pcVar1;
  
  pcVar1 = strerror(param_1);
  return pcVar1;
}



/* ===== FUN_0001518c @ 0001518c size=156 ===== */

void * FUN_0001518c(void)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,0x14);
  if (pvVar1 == (void *)0x0) {
    printf((char *)(DAT_00015230 + 0x151d8),DAT_0001522c + 0x151d0,0x9a,DAT_00015228 + 0x151c4);
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



/* ===== FUN_00015234 @ 00015234 size=48 ===== */

void FUN_00015234(void *param_1)

{
  if (param_1 != (void *)0x0) {
    free(param_1);
  }
  return;
}



/* ===== FUN_00015264 @ 00015264 size=204 ===== */

void * FUN_00015264(int param_1)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,0x168);
  if (pvVar1 == (void *)0x0) {
    printf((char *)(DAT_00015338 + 0x152b4),DAT_00015334 + 0x152ac,0xad,DAT_00015330 + 0x152a0);
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



/* ===== FUN_0001533c @ 0001533c size=136 ===== */

void FUN_0001533c(void *param_1)

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



/* ===== FUN_000153c4 @ 000153c4 size=180 ===== */

void * FUN_000153c4(int param_1)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,0x434);
  if (pvVar1 == (void *)0x0) {
    printf((char *)(DAT_00015480 + 0x15414),DAT_0001547c + 0x1540c,0xc4,DAT_00015478 + 0x15400);
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



/* ===== FUN_00015484 @ 00015484 size=136 ===== */

void FUN_00015484(void *param_1)

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



/* ===== FUN_0001550c @ 0001550c size=128 ===== */

void FUN_0001550c(int param_1,int param_2)

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



/* ===== FUN_0001558c @ 0001558c size=144 ===== */

void FUN_0001558c(int param_1)

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



/* ===== FUN_0001561c @ 0001561c size=536 ===== */

int * FUN_0001561c(int param_1)

{
  undefined4 uVar1;
  int local_2c;
  sockaddr local_24;
  int local_14;
  int local_10;
  int *local_c;
  
  local_c = (int *)0x0;
  local_c = (int *)FUN_0001518c();
  if (local_c == (int *)0x0) {
    local_c = (int *)0x0;
  }
  else {
    local_10 = socket(2,1,0);
    if (local_10 == -1) {
      uVar1 = FUN_00015148();
      uVar1 = FUN_00015164(uVar1);
      printf((char *)(DAT_0001583c + 0x156a8),DAT_00015838 + 0x156a0,0xfa,DAT_00015834 + 0x15694,
             uVar1);
      FUN_00015234(local_c);
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
        uVar1 = FUN_00015148();
        uVar1 = FUN_00015164(uVar1);
        printf((char *)(DAT_00015848 + 0x1576c),DAT_00015844 + 0x15764,0x108,DAT_00015840 + 0x15758,
               uVar1);
        close(local_10);
        FUN_00015234(local_c);
        local_c = (int *)0x0;
      }
      else {
        local_14 = listen(local_10,0x80);
        if (local_14 == -1) {
          uVar1 = FUN_00015148();
          uVar1 = FUN_00015164(uVar1);
          printf((char *)(DAT_00015854 + 0x157d8),DAT_00015850 + 0x157d0,0x110,
                 DAT_0001584c + 0x157c4,uVar1);
          close(local_10);
          FUN_00015234(local_c);
          local_c = (int *)0x0;
        }
        else {
          *local_c = local_10;
          printf((char *)(DAT_00015860 + 0x15824),DAT_0001585c + 0x1581c,0x118,
                 DAT_00015858 + 0x15810,local_2c);
        }
      }
    }
  }
  return local_c;
}



/* ===== FUN_00015864 @ 00015864 size=932 ===== */

undefined4 FUN_00015864(int param_1)

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
    printf((char *)(DAT_00015c10 + 0x158f8),DAT_00015c0c + 0x158f0,0x15b,DAT_00015c08 + 0x158e4,
           pcVar2);
  }
  else {
    local_c = local_c | 0x800;
    local_c = fcntl(param_1,4,local_c);
    if ((int)local_c < 0) {
      piVar1 = __errno_location();
      pcVar2 = strerror(*piVar1);
      printf((char *)(DAT_00015c1c + 0x15964),DAT_00015c18 + 0x1595c,0x160,DAT_00015c14 + 0x15950,
             pcVar2);
    }
  }
  local_c = setsockopt(param_1,1,7,&local_10,4);
  if (local_c == -1) {
    uVar3 = FUN_00015148();
    uVar3 = FUN_00015164(uVar3);
    printf((char *)(DAT_00015c28 + 0x159cc),DAT_00015c24 + 0x159c4,0x166,DAT_00015c20 + 0x159b8,
           uVar3);
  }
  local_c = setsockopt(param_1,1,9,&local_14,4);
  if (local_c == -1) {
    uVar3 = FUN_00015148();
    uVar3 = FUN_00015164(uVar3);
    printf((char *)(DAT_00015c34 + 0x15a34),DAT_00015c30 + 0x15a2c,0x16b,DAT_00015c2c + 0x15a20,
           uVar3);
  }
  local_c = setsockopt(param_1,6,4,&local_18,4);
  if (local_c == -1) {
    uVar3 = FUN_00015148();
    uVar3 = FUN_00015164(uVar3);
    printf((char *)(DAT_00015c40 + 0x15a9c),DAT_00015c3c + 0x15a94,0x170,DAT_00015c38 + 0x15a88,
           uVar3);
  }
  local_c = setsockopt(param_1,6,5,&local_1c,4);
  if (local_c == -1) {
    uVar3 = FUN_00015148();
    uVar3 = FUN_00015164(uVar3);
    printf((char *)(DAT_00015c4c + 0x15b04),DAT_00015c48 + 0x15afc,0x175,DAT_00015c44 + 0x15af0,
           uVar3);
  }
  local_c = setsockopt(param_1,6,6,&local_20,4);
  if (local_c == -1) {
    uVar3 = FUN_00015148();
    uVar3 = FUN_00015164(uVar3);
    printf((char *)(DAT_00015c58 + 0x15b6c),DAT_00015c54 + 0x15b64,0x17a,DAT_00015c50 + 0x15b58,
           uVar3);
  }
  memset(&local_28,0,8);
  local_28 = 1;
  local_24 = 0;
  local_c = setsockopt(param_1,1,0xd,&local_28,8);
  if (local_c == -1) {
    uVar3 = FUN_00015148();
    uVar3 = FUN_00015164(uVar3);
    printf((char *)(DAT_00015c64 + 0x15bf8),DAT_00015c60 + 0x15bf0,0x182,DAT_00015c5c + 0x15be4,
           uVar3);
  }
  return 0;
}



/* ===== FUN_00015c68 @ 00015c68 size=304 ===== */

undefined4 * FUN_00015c68(int *param_1)

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
    uVar2 = FUN_00015148();
    uVar2 = FUN_00015164(uVar2);
    printf((char *)(DAT_00015da0 + 0x15ce8),DAT_00015d9c + 0x15ce0,0x191,DAT_00015d98 + 0x15cd4,
           uVar2);
    local_14 = (undefined4 *)0x0;
  }
  else {
    FUN_00015864(local_18);
    pcVar3 = inet_ntoa((in_addr)auStack_28._4_4_);
    uVar1 = ntohs(auStack_28._2_2_);
    printf((char *)(DAT_00015dac + 0x15d3c),DAT_00015da8 + 0x15d34,0x198,DAT_00015da4 + 0x15d28,
           pcVar3,(uint)uVar1);
    local_14 = (undefined4 *)FUN_000153c4(param_1);
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



/* ===== FUN_00015db0 @ 00015db0 size=160 ===== */

void FUN_00015db0(int param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    uVar2 = *(undefined4 *)(param_1 + 4);
    pcVar1 = inet_ntoa((in_addr)*(in_addr_t *)(param_1 + 8));
    printf((char *)(DAT_00015e58 + 0x15e0c),DAT_00015e54 + 0x15e04,0x1ab,DAT_00015e50 + 0x15df8,
           uVar2,pcVar1);
    FUN_0001558c(param_1);
    FUN_00017868(param_1,0);
    FUN_00017868(param_1,1);
    close(*(int *)(param_1 + 4));
    FUN_00015484(param_1);
  }
  return;
}



/* ===== FUN_00015e5c @ 00015e5c size=408 ===== */

bool FUN_00015e5c(char *param_1,char *param_2)

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
    *(undefined2 *)(local_48 + sVar1) = *(undefined2 *)(DAT_00015ff4 + 0x15f58);
  }
  sVar1 = strlen(local_88);
  if (*(char *)((int)&local_8c + sVar1 + 3) != '/') {
    sVar1 = strlen(local_88);
    *(undefined2 *)(local_88 + sVar1) = *(undefined2 *)(DAT_00015ff8 + 0x15fac);
  }
  sVar1 = strlen(local_48);
  iVar2 = strncmp(local_48,local_88,sVar1);
  return iVar2 == 0;
}



/* ===== FUN_00015ffc @ 00015ffc size=416 ===== */

char * FUN_00015ffc(int param_1,char *param_2)

{
  int iVar1;
  char *local_c;
  
  local_c = (char *)0x0;
  if (((param_1 == 0) || (param_2 == (char *)0x0)) || (*param_2 == '\0')) {
    printf((char *)(DAT_000161a4 + 0x16068),DAT_000161a0 + 0x16060,0x1cc,DAT_0001619c + 0x16054);
  }
  else {
    for (local_c = *(char **)(param_1 + 4); local_c != (char *)0x0;
        local_c = *(char **)(local_c + 0x15c)) {
      iVar1 = FUN_00015e5c(local_c,param_2);
      if ((iVar1 != 0) || (iVar1 = FUN_00015e5c(param_2,local_c), iVar1 != 0)) {
        printf((char *)(DAT_000161b0 + 0x160e4),DAT_000161ac + 0x160dc,0x1d2,DAT_000161a8 + 0x160d0,
               local_c,param_2);
        goto LAB_00016178;
      }
    }
    local_c = (char *)FUN_00015264(param_1);
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
      printf((char *)(DAT_000161bc + 0x1616c),DAT_000161b8 + 0x16164,0x1e0,DAT_000161b4 + 0x16158,
             local_c);
      return local_c;
    }
  }
LAB_00016178:
  if (local_c != (char *)0x0) {
    free(local_c);
  }
  return (char *)0x0;
}



/* ===== FUN_000161c0 @ 000161c0 size=40 ===== */

undefined4 FUN_000161c0(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001561c(param_1);
  return uVar1;
}



/* ===== FUN_000161e8 @ 000161e8 size=72 ===== */

undefined4 FUN_000161e8(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00015ffc(param_1,param_2);
  FUN_00016230(uVar1,1,0,0);
  return uVar1;
}



/* ===== FUN_00016230 @ 00016230 size=596 ===== */

undefined4 FUN_00016230(int param_1,int param_2,int param_3,int param_4)

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
        iVar1 = FUN_0002117c(param_3,param_4,param_1 + 0x48);
        if (iVar1 < 1) {
          printf((char *)(DAT_00016498 + 0x163a8),DAT_00016494 + 0x163a0,0x220,
                 DAT_00016490 + 0x16394);
        }
      }
      else if ((param_2 == 2) && (iVar1 = FUN_000213e0(param_3,param_4,param_1 + 0x48), iVar1 < 1))
      {
        printf((char *)(DAT_000164a4 + 0x163f0),DAT_000164a0 + 0x163e8,0x226,DAT_0001649c + 0x163dc)
        ;
      }
    }
    if (*(int *)(param_1 + 0x138) == 0) {
      uVar2 = FUN_0002084c(0x5b0,0x4b1);
      *(undefined4 *)(param_1 + 0x138) = uVar2;
      if (*(int *)(param_1 + 0x138) == 0) {
        printf((char *)(DAT_000164b0 + 0x16460),DAT_000164ac + 0x16458,0x230,DAT_000164a8 + 0x1644c)
        ;
        *(undefined4 *)(param_1 + 0x40) = 0;
        return 0xffffffff;
      }
    }
    uVar2 = 0;
  }
  else {
    printf((char *)(DAT_0001648c + 0x162c4),DAT_00016488 + 0x162bc,0x211,DAT_00016484 + 0x162b0,
           param_2);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== FUN_000164b4 @ 000164b4 size=516 ===== */

undefined4 FUN_000164b4(int param_1,int param_2,int param_3,int param_4)

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
       (iVar1 = FUN_000216e4(param_3,param_4,param_1 + 0x114), iVar1 < 1)) {
      printf((char *)(DAT_000166cc + 0x1662c),DAT_000166c8 + 0x16624,0x255,DAT_000166c4 + 0x16618);
    }
    if (*(int *)(param_1 + 0x13c) == 0) {
      uVar2 = FUN_0002084c(0x5b0,0x29);
      *(undefined4 *)(param_1 + 0x13c) = uVar2;
      if (*(int *)(param_1 + 0x13c) == 0) {
        printf((char *)(DAT_000166d8 + 0x16694),DAT_000166d4 + 0x1668c,0x25f,DAT_000166d0 + 0x16680)
        ;
        *(undefined4 *)(param_1 + 0x44) = 0;
        return 0xffffffff;
      }
    }
    uVar2 = 0;
  }
  else {
    printf((char *)(DAT_000166c0 + 0x1654c),DAT_000166bc + 0x16544,0x245,DAT_000166b8 + 0x16538,
           param_2);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== FUN_00016780 @ 00016780 size=196 ===== */

void FUN_00016780(int param_1)

{
  if (param_1 != 0) {
    while (*(int *)(param_1 + 0x154) != 0) {
      FUN_00015db0(*(int *)(param_1 + 0x154));
    }
    printf((char *)(DAT_0001684c + 0x167f0),DAT_00016848 + 0x167e8,0x285,DAT_00016844 + 0x167dc,
           param_1);
    if (*(int *)(param_1 + 0x138) != 0) {
      FUN_00020ce0(*(undefined4 *)(param_1 + 0x138));
    }
    if (*(int *)(param_1 + 0x13c) != 0) {
      FUN_00020ce0(*(undefined4 *)(param_1 + 0x13c));
    }
    FUN_0001533c(param_1);
  }
  return;
}



/* ===== FUN_00016850 @ 00016850 size=144 ===== */

void FUN_00016850(int *param_1)

{
  if (param_1 != (int *)0x0) {
    while (param_1[3] != 0) {
      FUN_00015db0(param_1[3]);
    }
    while (param_1[1] != 0) {
      FUN_00016780(param_1[1]);
    }
    close(*param_1);
    FUN_00015234(param_1);
  }
  return;
}



/* ===== FUN_000168e0 @ 000168e0 size=1128 ===== */

int FUN_000168e0(int param_1,int param_2,char *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *local_c;
  
  iVar1 = sprintf(param_3,(char *)(DAT_00016d48 + 0x16910));
  pcVar3 = param_3 + iVar1;
  iVar1 = sprintf(pcVar3,(char *)(DAT_00016d4c + 0x16938));
  pcVar3 = pcVar3 + iVar1;
  iVar1 = sprintf(pcVar3,(char *)(DAT_00016d50 + 0x16960));
  pcVar3 = pcVar3 + iVar1;
  iVar1 = sprintf(pcVar3,(char *)(DAT_00016d54 + 0x16988));
  pcVar3 = pcVar3 + iVar1;
  iVar1 = param_2;
  if (param_2 == 0) {
    iVar1 = DAT_00016d58 + 0x169c4;
  }
  iVar1 = sprintf(pcVar3,(char *)(DAT_00016d5c + 0x169d0),iVar1);
  iVar2 = sprintf(pcVar3 + iVar1,(char *)(DAT_00016d60 + 0x169f8));
  local_c = pcVar3 + iVar1 + iVar2;
  if (*(int *)(param_1 + 0x40) != 0) {
    if (*(int *)(param_1 + 0x40) == 1) {
      iVar1 = FUN_00021858(0x60,*(undefined4 *)(param_1 + 0x120),param_1 + 0x48,local_c,
                           param_4 - ((int)local_c - (int)param_3));
      local_c = local_c + iVar1;
    }
    else if (*(int *)(param_1 + 0x40) == 2) {
      iVar1 = FUN_00021aa0(0x60,*(undefined4 *)(param_1 + 0x120),param_1 + 0x48,local_c,
                           param_4 - ((int)local_c - (int)param_3));
      local_c = local_c + iVar1;
    }
    if (param_2 == 0) {
      iVar1 = sprintf(local_c,(char *)(DAT_00016d70 + 93000),DAT_00016d6c + 0x16b3c);
      local_c = local_c + iVar1;
    }
    else {
      iVar1 = sprintf(local_c,(char *)(DAT_00016d68 + 0x16b14),param_2,DAT_00016d64 + 0x16b08);
      local_c = local_c + iVar1;
    }
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    iVar1 = *(int *)(param_1 + 0x44);
    if (iVar1 == 0x4002) {
      iVar1 = FUN_00021e40(0x61,*(undefined4 *)(param_1 + 0x130),*(undefined1 *)(param_1 + 0x134),
                           local_c,param_4 - ((int)local_c - (int)param_3));
      local_c = local_c + iVar1;
    }
    else if (iVar1 == 0x4003) {
      iVar1 = FUN_00021f10(0x61,*(undefined4 *)(param_1 + 0x130),*(undefined1 *)(param_1 + 0x134),
                           param_1 + 0x114,local_c,param_4 - ((int)local_c - (int)param_3));
      local_c = local_c + iVar1;
    }
    else if (iVar1 == 0x4001) {
      iVar1 = FUN_00021d70(0x61,*(undefined4 *)(param_1 + 0x130),*(undefined1 *)(param_1 + 0x134),
                           local_c,param_4 - ((int)local_c - (int)param_3));
      local_c = local_c + iVar1;
    }
    if (param_2 == 0) {
      iVar1 = sprintf(local_c,(char *)(DAT_00016d80 + 0x16d14),DAT_00016d7c + 0x16d08);
      local_c = local_c + iVar1;
    }
    else {
      iVar1 = sprintf(local_c,(char *)(DAT_00016d78 + 0x16ce0),param_2,DAT_00016d74 + 0x16cd4);
      local_c = local_c + iVar1;
    }
  }
  return (int)local_c - (int)param_3;
}



/* ===== FUN_00016d84 @ 00016d84 size=164 ===== */

undefined4 FUN_00016d84(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  printf((char *)(DAT_00016e30 + 0x16dc4),DAT_00016e2c + 0x16dbc,0x2d5,DAT_00016e28 + 0x16db0);
  FUN_0002051c(param_3,0x6f);
  return 0;
}



/* ===== FUN_00016e34 @ 00016e34 size=648 ===== */

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_00016e34(int param_1,int param_2,int param_3)

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
  printf((char *)(DAT_000170c4 + 0x16edc),DAT_000170c0 + 0x16ed4,0x2ea,DAT_000170bc + 0x16ec8);
  iVar1 = FUN_000202d4(param_2,local_418);
  if ((iVar1 < 0) && ((local_418[0] & 1) == 0)) {
    FUN_0001fd5c(param_3,0x196);
    printf((char *)(DAT_000170d0 + 0x16f38),DAT_000170cc + 94000,0x2ed,DAT_000170c8 + 0x16f24);
  }
  else {
    if (*local_14 == 1) {
      sVar2 = strlen(local_498);
      uVar3 = *(undefined4 *)(DAT_000170d4 + 0x16f84);
      *(undefined4 *)(local_498 + sVar2) = *(undefined4 *)(DAT_000170d4 + 0x16f80);
      *(undefined4 *)((int)&uStack_494 + sVar2) = uVar3;
      auStack_490[sVar2] = *(undefined1 *)(DAT_000170d4 + 0x16f88);
    }
    else {
      sVar2 = strlen(local_498);
      uVar3 = *(undefined4 *)(DAT_000170d8 + 0x16fc8);
      *(undefined4 *)(local_498 + sVar2) = *(undefined4 *)(DAT_000170d8 + 0x16fc4);
      *(undefined4 *)((int)&uStack_494 + sVar2) = uVar3;
    }
    strcat(local_498,(char *)((int)local_14 + 6));
    if ((short)local_14[1] != 0) {
      sVar2 = strlen(local_498);
      sprintf(local_498 + sVar2,(char *)(DAT_000170dc + 0x17030),(uint)*(ushort *)(local_14 + 1));
    }
    strcat(local_498,local_c);
    local_10 = FUN_000168e0(local_c,local_498,local_418 + 1,0x400);
    FUN_00020708(param_3,0);
    FUN_000207dc(param_3,local_10);
    uVar3 = FUN_0001b8ec(local_418 + 1,local_10);
    *(undefined4 *)(param_3 + 0xa8) = uVar3;
  }
  return 0;
}



/* ===== FUN_000170e0 @ 000170e0 size=52 ===== */

int FUN_000170e0(void)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_00017114 + 0x170f4);
  *(int *)(DAT_00017118 + 0x17104) = iVar1 + 1;
  return iVar1;
}



/* ===== FUN_0001711c @ 0001711c size=1048 ===== */

undefined4 FUN_0001711c(undefined4 *param_1)

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
      printf((char *)(DAT_00017584 + 0x17524),DAT_00017580 + 0x1751c,0x363,DAT_0001757c + 0x17510);
      return 0xffffffff;
    }
    local_10 = socket(2,2,0);
    if (local_10 == -1) break;
    local_14 = socket(2,2,0);
    if (local_14 == -1) {
      uVar1 = FUN_00015148();
      uVar1 = FUN_00015164(uVar1);
      printf((char *)(DAT_00017548 + 0x171f0),DAT_00017544 + 0x171e8,0x31a,DAT_00017540 + 0x171dc,
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
          printf((char *)(DAT_00017554 + 0x17364),DAT_00017550 + 0x1735c,0x347,
                 DAT_0001754c + 0x17350,pcVar3);
        }
        else {
          local_1c = local_1c | 0x800;
          local_1c = fcntl(local_10,4,local_1c);
          if ((int)local_1c < 0) {
            piVar2 = __errno_location();
            pcVar3 = strerror(*piVar2);
            printf((char *)(DAT_00017560 + 0x173d0),DAT_0001755c + 0x173c8,0x34c,
                   DAT_00017558 + 0x173bc,pcVar3);
          }
        }
        local_1c = fcntl(local_14,3,0);
        if ((int)local_1c < 0) {
          piVar2 = __errno_location();
          pcVar3 = strerror(*piVar2);
          printf((char *)(DAT_0001756c + 0x1742c),DAT_00017568 + 0x17424,0x351,
                 DAT_00017564 + 0x17418,pcVar3);
        }
        else {
          local_1c = local_1c | 0x800;
          local_1c = fcntl(local_14,4,local_1c);
          if ((int)local_1c < 0) {
            piVar2 = __errno_location();
            pcVar3 = strerror(*piVar2);
            printf((char *)(DAT_00017578 + 0x17498),DAT_00017574 + 0x17490,0x356,
                   DAT_00017570 + 0x17484,pcVar3);
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
  uVar1 = FUN_00015148();
  uVar1 = FUN_00015164(uVar1);
  printf((char *)(DAT_0001753c + 0x17190),DAT_00017538 + 0x17188,0x314,DAT_00017534 + 0x1717c,uVar1)
  ;
  return 0xffffffff;
}



/* ===== FUN_00017588 @ 00017588 size=684 ===== */

undefined4 FUN_00017588(int param_1,int param_2,int param_3,short param_4,uint param_5)

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
    printf((char *)(DAT_0001783c + 0x1760c),DAT_00017838 + 0x17604,0x36e,DAT_00017834 + 0x175f8,
           pcVar3);
    uVar5 = 0xffffffff;
  }
  else {
    *__ptr = (uint)(param_3 != 0);
    __ptr[8] = __in.s_addr;
    uVar4 = FUN_000170e0();
    __ptr[10] = uVar4;
    if (param_3 == 0) {
      iVar6 = FUN_0001711c(__ptr);
      if (iVar6 < 0) {
        free(__ptr);
        return 0xffffffff;
      }
      *(short *)(__ptr + 7) = param_4;
      *(short *)((int)__ptr + 0x1e) = param_4 + 1;
      if (param_2 == 0) {
        iVar6 = DAT_00017858 + 0x17780;
      }
      else {
        iVar6 = DAT_00017854 + 0x17770;
      }
      uVar7 = __ptr[10];
      uVar4 = __ptr[6];
      uVar1 = *(ushort *)((int)__ptr + 0x1a);
      pcVar3 = inet_ntoa(__in);
      printf((char *)(DAT_00017864 + 0x177fc),DAT_00017860 + 0x177f4,0x38b,DAT_0001785c + 0x177e8,
             iVar6,uVar7,(uint)(ushort)uVar4,(uint)uVar1,pcVar3,(uint)(ushort)__ptr[7],
             (uint)*(ushort *)((int)__ptr + 0x1e));
    }
    else {
      __ptr[1] = *(uint *)(param_1 + 4);
      __ptr[2] = param_5;
      __ptr[3] = param_5 + 1;
      if (param_2 == 0) {
        iVar6 = DAT_00017844 + 0x176b0;
      }
      else {
        iVar6 = DAT_00017840 + 0x176a0;
      }
      uVar4 = __ptr[10];
      pcVar3 = inet_ntoa(__in);
      printf((char *)(DAT_00017850 + 0x17708),DAT_0001784c + 96000,0x37e,DAT_00017848 + 0x176f4,
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



/* ===== FUN_00017868 @ 00017868 size=164 ===== */

void FUN_00017868(int param_1,int param_2)

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



/* ===== FUN_0001790c @ 0001790c size=1096 ===== */

undefined4 FUN_0001790c(int *param_1,int param_2,undefined4 param_3)

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
  printf((char *)(DAT_00017d5c + 0x179e8),DAT_00017d58 + 0x179e0,0x3b6,DAT_00017d54 + 0x179d4);
  if (*(int *)(param_2 + 0x80) == 0) {
    FUN_0001fd5c(param_3,0x1cd);
    printf((char *)(DAT_00017d68 + 0x17a24),DAT_00017d64 + 0x17a1c,0x3ba,DAT_00017d60 + 0x17a10);
  }
  else {
    if (**(int **)(param_2 + 0x80) == 1) {
      local_c = 1;
      if ((*(uint *)(*(int *)(param_2 + 0x80) + 4) & 0x20) == 0) {
        printf((char *)(DAT_00017d74 + 0x17a80),DAT_00017d70 + 0x17a78,0x3c1,DAT_00017d6c + 0x17a6c)
        ;
        FUN_0001fd5c(param_3,0x1cd);
        return 0;
      }
    }
    else if ((*(uint *)(*(int *)(param_2 + 0x80) + 4) & 8) == 0) {
      printf((char *)(DAT_00017d80 + 0x17acc),DAT_00017d7c + 0x17ac4,0x3c7,DAT_00017d78 + 0x17ab8);
      FUN_0001fd5c(param_3,0x1cd);
      return 0;
    }
    snprintf(local_5c,0x3f,(char *)(DAT_00017d88 + 0x17b00),local_14,DAT_00017d84 + 0x17af4);
    snprintf(local_9c,0x3f,(char *)(DAT_00017d90 + 0x17b24),local_14,DAT_00017d8c + 0x17b18);
    if ((*(int *)(local_14 + 0x40) == 0) ||
       (iVar1 = FUN_00015e5c(local_5c,param_2 + 0x2e), iVar1 == 0)) {
      if ((*(int *)(local_14 + 0x44) == 0) ||
         (iVar1 = FUN_00015e5c(local_9c,param_2 + 0x2e), iVar1 == 0)) {
        printf((char *)(DAT_00017d9c + 0x17bd4),DAT_00017d98 + 0x17bcc,0x3d4,DAT_00017d94 + 0x17bc0,
               param_2 + 0x2e);
        FUN_0001fd5c(param_3,0x1cd);
        return 0;
      }
      local_10 = 1;
    }
    else {
      local_10 = 0;
    }
    FUN_00017868(param_1,local_10);
    local_1c = FUN_00017588(param_1,local_10,local_c,*(undefined2 *)(*(int *)(param_2 + 0x80) + 0xc)
                            ,*(undefined1 *)(*(int *)(param_2 + 0x80) + 0x10));
    if (local_1c < 0) {
      FUN_0001fd5c(param_3,500);
    }
    else {
      if (local_10 == 0) {
        local_18 = param_1[0x105];
      }
      else {
        local_18 = param_1[0x106];
      }
      if (local_c == 0) {
        FUN_000200dc(param_3,*(undefined4 *)(local_18 + 0x28),*(undefined2 *)(local_18 + 0x1c),
                     *(undefined2 *)(local_18 + 0x18));
      }
      else {
        FUN_000201f8(param_3,*(undefined4 *)(local_18 + 0x28),*(undefined4 *)(local_18 + 8));
      }
      if (*param_1 == 2) {
        if (local_10 == 0) {
          uVar2 = *(undefined4 *)(local_14 + 0x138);
        }
        else {
          uVar2 = *(undefined4 *)(local_14 + 0x13c);
        }
        uVar2 = FUN_00020b74(uVar2);
        *(undefined4 *)(local_18 + 0x24) = uVar2;
      }
      if (*param_1 == 0) {
        *param_1 = 1;
        iVar1 = FUN_0001ee6c();
        param_1[3] = iVar1;
        FUN_0001fed8(param_3,param_1[3]);
      }
    }
  }
  return 0;
}



/* ===== FUN_00017da0 @ 00017da0 size=184 ===== */

undefined4 FUN_00017da0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  printf((char *)(DAT_00017e60 + 0x17dd8),DAT_00017e5c + 0x17dd0,0x3fb,DAT_00017e58 + 0x17dc4);
  if ((*param_1 == 1) || (*param_1 == 2)) {
    if (*param_1 != 1) {
      *param_1 = 1;
    }
  }
  else {
    FUN_0001fd5c(param_3,0x1c7);
    printf((char *)(DAT_00017e6c + 0x17e24),DAT_00017e68 + 0x17e1c,0x3ff,DAT_00017e64 + 0x17e10);
  }
  return 0;
}



/* ===== FUN_00017e70 @ 00017e70 size=324 ===== */

undefined4 FUN_00017e70(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[0x108];
  printf((char *)(DAT_00017fbc + 0x17eb4),DAT_00017fb8 + 0x17eac,0x40d,DAT_00017fb4 + 0x17ea0);
  if ((*param_1 == 1) || (*param_1 == 2)) {
    if (*param_1 != 2) {
      if ((param_1[0x105] != 0) && (*(int *)(iVar2 + 0x138) != 0)) {
        iVar3 = param_1[0x105];
        uVar1 = FUN_00020b74(*(undefined4 *)(iVar2 + 0x138));
        *(undefined4 *)(iVar3 + 0x24) = uVar1;
      }
      if ((param_1[0x106] != 0) && (*(int *)(iVar2 + 0x13c) != 0)) {
        iVar3 = param_1[0x106];
        uVar1 = FUN_00020b74(*(undefined4 *)(iVar2 + 0x13c));
        *(undefined4 *)(iVar3 + 0x24) = uVar1;
      }
      *param_1 = 2;
    }
  }
  else {
    FUN_0001fd5c(param_3,0x1c7);
    printf((char *)(DAT_00017fc8 + 0x17f00),DAT_00017fc4 + 0x17ef8,0x411,DAT_00017fc0 + 0x17eec);
  }
  return 0;
}



/* ===== FUN_00017fcc @ 00017fcc size=456 ===== */

undefined4 FUN_00017fcc(undefined4 *param_1,int param_2)

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
  printf((char *)(DAT_0001819c + 0x18090),DAT_00018198 + 0x18088,0x425,DAT_00018194 + 0x1807c);
  snprintf(local_4c,0x3f,(char *)(DAT_000181a4 + 0x180b0),local_c,DAT_000181a0 + 0x180a4);
  snprintf(local_8c,0x3f,(char *)(DAT_000181ac + 0x180d4),local_c,DAT_000181a8 + 0x180c8);
  iVar1 = FUN_00015e5c(local_4c,param_2 + 0x2e);
  if (iVar1 == 0) {
    iVar1 = FUN_00015e5c(local_8c,param_2 + 0x2e);
    if (iVar1 == 0) {
      FUN_00017868(param_1,0);
      FUN_00017868(param_1,1);
    }
    else {
      FUN_00017868(param_1,1);
    }
  }
  else {
    FUN_00017868(param_1,0);
  }
  if ((param_1[0x105] == 0) && (param_1[0x106] == 0)) {
    *param_1 = 0;
  }
  return 0;
}



/* ===== FUN_000181b0 @ 000181b0 size=856 ===== */

undefined4 FUN_000181b0(int *param_1,int param_2,undefined4 param_3)

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
  FUN_0001fd5c(param_3,200);
  FUN_0001ffb4(param_3,0);
  FUN_000205f8(param_3,DAT_00018508 + 0x18220);
  iVar1 = FUN_0001fda8(param_2,&local_18);
  if (iVar1 < 0) {
    FUN_0001fd5c(param_3,400);
    printf((char *)(DAT_00018514 + 0x18270),DAT_00018510 + 0x18268,0x448,DAT_0001850c + 0x1825c);
    uVar2 = 0;
  }
  else {
    FUN_0001fe08(param_3,local_18);
    if (*param_1 != 0) {
      iVar1 = FUN_0001fe78(param_2,&local_1c);
      if ((iVar1 < 0) || (param_1[3] != local_1c)) {
        printf((char *)(DAT_00018520 + 0x182e8),DAT_0001851c + 0x182e0,0x44f,DAT_00018518 + 0x182d4)
        ;
        FUN_0001fd5c(param_3,0x1c6);
        return 0;
      }
      FUN_0001fed8(param_3,local_1c);
    }
    if (local_c == 0) {
      if (*(int *)(param_2 + 4) != 0) {
        local_c = *(int *)(local_10 + 4);
        while ((local_c != 0 && (iVar1 = FUN_00015e5c(local_c,local_14), iVar1 == 0))) {
          local_c = *(int *)(local_c + 0x15c);
        }
        if (local_c == 0) {
          printf((char *)(DAT_00018538 + 0x18408),DAT_00018534 + 0x18400,0x463,
                 DAT_00018530 + 0x183f4,local_14);
          FUN_0001fd5c(param_3,0x1c6);
          return 0;
        }
        FUN_0001550c(param_1,local_c);
      }
    }
    else {
      iVar1 = FUN_00015e5c(local_c,local_14);
      if (iVar1 == 0) {
        printf((char *)(DAT_0001852c + 0x18364),DAT_00018528 + 0x1835c,0x458,DAT_00018524 + 0x18350,
               local_14,local_c);
        FUN_0001fd5c(param_3,0x1c3);
        return 0;
      }
    }
    switch(*(undefined4 *)(param_2 + 4)) {
    case 0:
      uVar2 = FUN_00016d84(param_1,param_2,param_3);
      break;
    case 1:
      uVar2 = FUN_00016e34(param_1,param_2,param_3);
      break;
    case 2:
      uVar2 = FUN_0001790c(param_1,param_2,param_3);
      break;
    case 3:
      uVar2 = FUN_00017e70(param_1,param_2,param_3);
      break;
    case 4:
    default:
      FUN_0001fd5c(param_3,0x1f5);
      uVar2 = 0;
      break;
    case 5:
      uVar2 = FUN_00017da0(param_1,param_2,param_3);
      break;
    case 6:
      uVar2 = FUN_00017fcc(param_1,param_2,param_3);
    }
  }
  return uVar2;
}



/* ===== FUN_0001853c @ 0001853c size=528 ===== */

int FUN_0001853c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_c;
  
  if (*(int *)(param_1 + 0x410) != 0x3ff) {
    local_c = recv(*(int *)(param_1 + 4),(void *)(param_1 + 0x10 + *(int *)(param_1 + 0x410)),
                   0x3ff - *(int *)(param_1 + 0x410),0x40);
    if (local_c == 0) {
      printf((char *)(DAT_00018754 + 0x185c8),DAT_00018750 + 0x185c0,0x486,DAT_0001874c + 0x185b4);
      return -1;
    }
    if (local_c == -1) {
      iVar1 = FUN_00015148();
      if ((iVar1 != 0xb) && (iVar1 = FUN_00015148(), iVar1 != 4)) {
        uVar2 = FUN_00015148();
        uVar2 = FUN_00015164(uVar2);
        printf((char *)(DAT_00018760 + 0x18634),DAT_0001875c + 0x1862c,0x48b,DAT_00018758 + 0x18620,
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
    iVar1 = FUN_0001f0cc(param_2,param_1 + 0x10,*(undefined4 *)(param_1 + 0x410));
    if (iVar1 < 0) {
      printf((char *)(DAT_0001876c + 0x186d8),DAT_00018768 + 0x186d0,0x49a,DAT_00018764 + 0x186c4);
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



/* ===== FUN_00018770 @ 00018770 size=268 ===== */

ssize_t FUN_00018770(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_40c;
  undefined1 auStack_408 [1020];
  size_t local_c;
  
  local_40c = 0;
  memset(auStack_408,0,0x3fc);
  local_c = FUN_0001f488(param_2,&local_40c,0x400);
  if ((int)local_c < 0) {
    printf((char *)(DAT_00018884 + 0x187f4),DAT_00018880 + 0x187ec,0x4ad,DAT_0001887c + 0x187e0);
    local_c = -1;
  }
  else {
    local_c = send(*(int *)(param_1 + 4),&local_40c,local_c,0);
    if (local_c == -1) {
      uVar1 = FUN_00015148();
      uVar1 = FUN_00015164(uVar1);
      printf((char *)(DAT_00018890 + 0x18864),DAT_0001888c + 0x1885c,0x4b3,DAT_00018888 + 0x18850,
             uVar1);
      local_c = -1;
    }
  }
  return local_c;
}



/* ===== FUN_00018894 @ 00018894 size=388 ===== */

ssize_t FUN_00018894(int param_1,int param_2)

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
    iVar4 = FUN_00015148();
    if ((iVar4 == 0xb) || (iVar4 = FUN_00015148(), iVar4 == 4)) {
      local_18 = 0;
    }
    else {
      uVar5 = FUN_00015148();
      uVar5 = FUN_00015164(uVar5);
      printf((char *)(DAT_00018a20 + 0x18964),DAT_00018a1c + 0x1895c,0x4c6,DAT_00018a18 + 0x18950,
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
      printf((char *)(DAT_00018a2c + 0x189ec),DAT_00018a28 + 0x189e4,0x4d0,DAT_00018a24 + 0x189d8,
             pcVar6,(uint)uVar1,(uint)uVar3);
      uVar3 = ntohs(sStack_28.sa_data._0_2_);
      *(uint16_t *)(local_14 + 0x1c) = uVar3;
    }
  }
  return local_18;
}



/* ===== FUN_00018a30 @ 00018a30 size=388 ===== */

ssize_t FUN_00018a30(int param_1,int param_2)

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
    iVar4 = FUN_00015148();
    if ((iVar4 == 0xb) || (iVar4 = FUN_00015148(), iVar4 == 4)) {
      local_18 = 0;
    }
    else {
      uVar5 = FUN_00015148();
      uVar5 = FUN_00015164(uVar5);
      printf((char *)(DAT_00018bbc + 0x18b00),DAT_00018bb8 + 0x18af8,0x4e3,DAT_00018bb4 + 0x18aec,
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
      printf((char *)(DAT_00018bc8 + 0x18b88),DAT_00018bc4 + 0x18b80,0x4ed,DAT_00018bc0 + 0x18b74,
             pcVar6,(uint)uVar1,(uint)uVar3);
      uVar3 = ntohs(sStack_28.sa_data._0_2_);
      *(uint16_t *)(local_14 + 0x1e) = uVar3;
    }
  }
  return local_18;
}



/* ===== FUN_00018bcc @ 00018bcc size=740 ===== */

size_t FUN_00018bcc(int *param_1,void *param_2,size_t param_3)

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
      iVar1 = FUN_00015148();
      if ((iVar1 == 0xb) || (iVar1 = FUN_00015148(), iVar1 == 4)) {
        param_3 = 0;
      }
      else {
        pcVar2 = inet_ntoa((in_addr)param_1[8]);
        uVar3 = FUN_00015148();
        uVar3 = FUN_00015164(uVar3);
        printf((char *)(DAT_00018ed0 + 0x18e90),DAT_00018ecc + 0x18e88,0x528,DAT_00018ec8 + 0x18e7c,
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
      iVar1 = FUN_00015148();
      if ((iVar1 == 0xb) || (iVar1 = FUN_00015148(), iVar1 == 4)) {
        param_3 = 0;
      }
      else {
        pcVar2 = inet_ntoa((in_addr)param_1[8]);
        uVar3 = FUN_00015148();
        uVar3 = FUN_00015164(uVar3);
        printf((char *)(DAT_00018eb8 + 0x18cdc),DAT_00018eb4 + 0x18cd4,0x50d,DAT_00018eb0 + 0x18cc8,
               pcVar2,uVar3);
        param_3 = 0xffffffff;
      }
    }
    else {
      local_18 = send(local_14,param_2,param_3,0);
      if (local_18 == -1) {
        iVar1 = FUN_00015148();
        if ((iVar1 == 0xb) || (iVar1 = FUN_00015148(), iVar1 == 4)) {
          param_3 = 0;
        }
        else {
          pcVar2 = inet_ntoa((in_addr)param_1[8]);
          uVar3 = FUN_00015148();
          uVar3 = FUN_00015164(uVar3);
          printf((char *)(DAT_00018ec4 + 0x18d84),DAT_00018ec0 + 0x18d7c,0x516,
                 DAT_00018ebc + 0x18d70,param_3,pcVar2,uVar3);
          param_3 = 0xffffffff;
        }
      }
    }
  }
  return param_3;
}



/* ===== FUN_00018ed4 @ 00018ed4 size=348 ===== */

int FUN_00018ed4(int param_1)

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
    iVar3 = FUN_00020a30(local_1c,*(undefined4 *)(local_20 + 0x24));
    if (iVar3 < 1) {
      return local_14;
    }
    FUN_00020980(local_1c,*(undefined4 *)(local_20 + 0x24),&local_24,&local_28);
    if (0 < *local_28) {
      puVar4 = (uint32_t *)(local_24 + 8);
      uVar1 = htonl(*(uint32_t *)(local_20 + 0x28));
      *puVar4 = uVar1;
      iVar3 = FUN_00018bcc(local_20,local_24,*local_28);
      if (iVar3 != *local_28) {
        return local_14;
      }
      *(int *)(local_20 + 0x2c) = *(int *)(local_20 + 0x2c) + 1;
      *(int *)(local_20 + 0x30) = *(int *)(local_20 + 0x30) + *local_28 + -0xc;
    }
    uVar2 = FUN_00020adc(local_1c,*(undefined4 *)(local_20 + 0x24));
    *(undefined4 *)(local_20 + 0x24) = uVar2;
    local_14 = local_14 + 1;
  } while( true );
}



/* ===== FUN_00019030 @ 00019030 size=348 ===== */

int FUN_00019030(int param_1)

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
    iVar3 = FUN_00020a30(local_1c,*(undefined4 *)(local_20 + 0x24));
    if (iVar3 < 1) {
      return local_14;
    }
    FUN_00020980(local_1c,*(undefined4 *)(local_20 + 0x24),&local_24,&local_28);
    if (0 < *local_28) {
      puVar4 = (uint32_t *)(local_24 + 8);
      uVar1 = htonl(*(uint32_t *)(local_20 + 0x28));
      *puVar4 = uVar1;
      iVar3 = FUN_00018bcc(local_20,local_24,*local_28);
      if (iVar3 != *local_28) {
        return local_14;
      }
      *(int *)(local_20 + 0x2c) = *(int *)(local_20 + 0x2c) + 1;
      *(int *)(local_20 + 0x30) = *(int *)(local_20 + 0x30) + *local_28 + -0xc;
    }
    uVar2 = FUN_00020adc(local_1c,*(undefined4 *)(local_20 + 0x24));
    *(undefined4 *)(local_20 + 0x24) = uVar2;
    local_14 = local_14 + 1;
  } while( true );
}



/* ===== FUN_0001918c @ 0001918c size=2952 ===== */

undefined4 FUN_0001918c(uint *param_1)

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
           (iVar3 = FUN_00020a30(*(undefined4 *)(local_2c + 0x138),local_30[9]), 0 < iVar3)) {
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
           (iVar3 = FUN_00020a30(*(undefined4 *)(local_2c + 0x13c),local_34[9]), 0 < iVar3)) {
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
      printf((char *)(DAT_00019d1c + 0x197c8),DAT_00019d18 + 0x197c0,0x5c7,DAT_00019d14 + 0x197b4,
             pcVar2);
      uVar4 = 0xffffffff;
    }
    else if (local_38 == 0) {
      uVar4 = 0;
    }
    else {
      if ((fStack_cc.fds_bits[*local_20 >> 5] >> (*local_20 & 0x1f) & 1U) != 0) {
        FUN_00015c68(local_20);
      }
      local_c = (int *)local_20[3];
LAB_00019cf8:
      piVar1 = local_c;
      if (local_c != (int *)0x0) {
        local_1c = local_c;
        local_3c = local_c[0x108];
        local_40 = (int *)local_c[0x105];
        local_44 = (int *)local_c[0x106];
        local_c = (int *)local_c[0x109];
        if ((fStack_cc.fds_bits[(uint)piVar1[1] >> 5] >> (piVar1[1] & 0x1fU) & 1U) != 0)
        goto LAB_000198a4;
        goto LAB_000199ec;
      }
      uVar4 = 1;
    }
  }
  return uVar4;
LAB_000198a4:
  do {
    FUN_0001ec84(local_2a4);
    FUN_0001ec84(auStack_1f8);
    local_38 = FUN_0001853c(local_1c,local_2a4);
    if (local_38 == 0) break;
    if (local_38 < 0) {
      FUN_00015db0(local_1c);
      local_1c = (int *)0x0;
      break;
    }
    if (local_2a4[0] == 2) {
      FUN_0001ecc0(local_2a4);
    }
    else if (local_2a4[0] == 0) {
      local_38 = FUN_000181b0(local_1c,local_2a4,auStack_1f8);
      if (local_38 < 0) {
        printf((char *)(DAT_00019d34 + 0x1999c),DAT_00019d30 + 0x19994,0x5f8,DAT_00019d2c + 0x19988)
        ;
      }
      else {
        FUN_00018770(local_1c,auStack_1f8);
      }
      FUN_0001ecc0(local_2a4);
      FUN_0001ecc0(auStack_1f8);
    }
    else {
      printf((char *)(DAT_00019d28 + 0x19948),DAT_00019d24 + 0x19940,0x5f1,DAT_00019d20 + 0x19934);
      FUN_0001ecc0(local_2a4);
    }
  } while (local_1c != (int *)0x0);
  if (local_1c != (int *)0x0) {
LAB_000199ec:
    if (*local_1c == 2) {
      if ((local_40 != (int *)0x0) &&
         (iVar3 = FUN_00020a30(*(undefined4 *)(local_3c + 0x138),local_40[9]), 0 < iVar3)) {
        if ((*local_40 == 0) ||
           ((fStack_14c.fds_bits[(uint)local_40[1] >> 5] >> (local_40[1] & 0x1fU) & 1U) == 0)) {
          if ((*local_40 == 0) &&
             ((fStack_14c.fds_bits[(uint)local_40[4] >> 5] >> (local_40[4] & 0x1fU) & 1U) != 0)) {
            FUN_00018ed4(local_1c);
          }
        }
        else {
          FUN_00018ed4(local_1c);
        }
      }
      if ((local_44 != (int *)0x0) &&
         (iVar3 = FUN_00020a30(*(undefined4 *)(local_3c + 0x13c),local_44[9]), 0 < iVar3)) {
        if ((*local_44 == 0) ||
           ((fStack_14c.fds_bits[(uint)local_44[1] >> 5] >> (local_44[1] & 0x1fU) & 1U) == 0)) {
          if ((*local_44 == 0) &&
             ((fStack_14c.fds_bits[(uint)local_44[4] >> 5] >> (local_44[4] & 0x1fU) & 1U) != 0)) {
            FUN_00019030(local_1c);
          }
        }
        else {
          FUN_00019030(local_1c);
        }
      }
      if ((local_40 != (int *)0x0) && (*local_40 == 0)) {
        if ((fStack_cc.fds_bits[(uint)local_40[4] >> 5] >> (local_40[4] & 0x1fU) & 1U) != 0) {
          FUN_00018894(local_1c,0);
        }
        if ((fStack_cc.fds_bits[(uint)local_40[5] >> 5] >> (local_40[5] & 0x1fU) & 1U) != 0) {
          FUN_00018a30(local_1c,0);
        }
      }
      if ((local_44 != (int *)0x0) && (*local_44 == 0)) {
        if ((fStack_cc.fds_bits[(uint)local_44[4] >> 5] >> (local_44[4] & 0x1fU) & 1U) != 0) {
          FUN_00018894(local_1c,1);
        }
        if ((fStack_cc.fds_bits[(uint)local_44[5] >> 5] >> (local_44[5] & 0x1fU) & 1U) != 0) {
          FUN_00018a30(local_1c,1);
        }
      }
    }
  }
  goto LAB_00019cf8;
}



/* ===== FUN_00019d38 @ 00019d38 size=1940 ===== */

int FUN_00019d38(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
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
    local_1c = FUN_00020b74(local_30);
    for (local_18 = 0; local_18 < 600; local_18 = local_18 + 1) {
      iVar3 = FUN_00020adc(local_30,local_1c);
      iVar4 = FUN_00020b38(local_30);
      if (iVar3 == iVar4) {
        FUN_00020c58(local_30);
      }
      FUN_00020980(local_30,local_1c,aiStack_9a0 + local_18,auStack_1c64 + local_18);
      aiStack_1304[local_18] = 0x5b0;
      local_1c = FUN_00020adc(local_30,local_1c);
    }
    aiStack_9a0[local_18] = 0;
    aiStack_1304[local_18] = 0;
    for (local_14 = *(int **)(local_2c + 0x154); local_14 != (int *)0x0;
        local_14 = (int *)local_14[0x10b]) {
      local_34 = local_14[0x105];
      if (((*local_14 == 2) && (local_34 != 0)) &&
         ((iVar3 = FUN_00020a30(local_30,*(undefined4 *)(local_34 + 0x24)), iVar3 == 0 &&
          (iVar4 = *(int *)(local_34 + 0x24), iVar3 = FUN_00020b74(local_30), iVar4 != iVar3)))) {
        uVar1 = FUN_00020b38(local_30);
        *(undefined4 *)(local_34 + 0x24) = uVar1;
        pcVar2 = inet_ntoa((in_addr)local_14[2]);
        printf((char *)(DAT_0001a4d4 + 0x19fe0),DAT_0001a4d0 + 0x19fd8,0x658,DAT_0001a4cc + 0x19fcc,
               pcVar2);
      }
    }
    if (*(int *)(local_2c + 0x40) == 1) {
      if (((*(int *)(local_2c + 0xcc) == 0) || (*(int *)(local_2c + 0xcc) == 0)) &&
         (iVar3 = FUN_000217e8(param_2,param_3,local_2c + 0x48), iVar3 < 0)) {
        printf((char *)(DAT_0001a4e0 + 0x1a090),DAT_0001a4dc + 0x1a088,0x660,DAT_0001a4d8 + 0x1a07c)
        ;
      }
    }
    else if ((*(int *)(local_2c + 0x40) == 2) &&
            ((((*(int *)(local_2c + 0x110) == 0 || (*(int *)(local_2c + 0x110) == 0)) ||
              (*(int *)(local_2c + 0x108) == 0)) &&
             (iVar3 = FUN_00021820(param_2,param_3,local_2c + 0x48), iVar3 < 0)))) {
      printf((char *)(DAT_0001a4ec + 0x1a118),DAT_0001a4e8 + 0x1a110,0x66a,DAT_0001a4e4 + 0x1a104);
    }
    local_24 = 0;
    local_20 = 0;
    while( true ) {
      if (((param_3 <= local_24) || (aiStack_9a0[local_20] == 0)) || (aiStack_1304[local_20] < 1))
      goto LAB_0001a3b8;
      local_38 = 0;
      local_1c68 = 0;
      local_38 = FUN_00020fa0(param_2 + local_24,param_3 - local_24,&local_1c68);
      if (local_38 == 0) break;
      if (*(int *)(local_2c + 0x40) == 1) {
        local_28 = FUN_00022018(local_2c + 0x118,local_38,local_1c68,param_6,param_5,param_6,
                                aiStack_9a0 + local_20,aiStack_1304 + local_20);
        if (local_28 < 1) {
          printf((char *)(DAT_0001a504 + 0x1a278),DAT_0001a500 + 0x1a270,0x685,
                 DAT_0001a4fc + 0x1a264,local_28);
          return -1;
        }
      }
      else if (*(int *)(local_2c + 0x40) == 2) {
        local_28 = FUN_000225b4(local_2c + 0x118,local_38,local_1c68,param_6,param_5,param_6,
                                aiStack_9a0 + local_20,aiStack_1304 + local_20);
        if (local_28 < 1) {
          printf((char *)(DAT_0001a510 + 0x1a314),DAT_0001a50c + 0x1a30c,0x68c,
                 DAT_0001a508 + 0x1a300,local_28);
          return -1;
        }
      }
      local_20 = local_20 + local_28;
      local_24 = (local_38 - param_2) + local_1c68;
    }
    printf((char *)(DAT_0001a4f8 + 0x1a1c4),DAT_0001a4f4 + 0x1a1bc,0x67c,DAT_0001a4f0 + 0x1a1b0);
LAB_0001a3b8:
    for (local_18 = 0; local_18 < local_20; local_18 = local_18 + 1) {
      *(int *)auStack_1c64[local_18] = aiStack_1304[local_18];
      FUN_00020bb0(local_30);
    }
    for (local_14 = *(int **)(local_2c + 0x154); local_14 != (int *)0x0;
        local_14 = (int *)local_14[0x10b]) {
      local_3c = local_14[0x105];
      if ((*local_14 == 2) && (local_3c != 0)) {
        FUN_0001b3c8(local_3c,*(undefined4 *)(local_2c + 0x144),*(undefined4 *)(local_2c + 0x140),
                     *(undefined4 *)(local_2c + 0x144),param_5,param_6,
                     *(undefined4 *)(local_2c + 0x120));
        FUN_00018ed4(local_14);
      }
    }
  }
  return param_3;
}



/* ===== FUN_0001a514 @ 0001a514 size=1968 ===== */

int FUN_0001a514(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 param_5,
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
    local_1c = FUN_00020b74(local_30);
    for (local_18 = 0; local_18 < 600; local_18 = local_18 + 1) {
      iVar3 = FUN_00020adc(local_30,local_1c);
      iVar4 = FUN_00020b38(local_30);
      if (iVar3 == iVar4) {
        FUN_00020c58(local_30);
      }
      FUN_00020980(local_30,local_1c,aiStack_9a0 + local_18,auStack_1c64 + local_18);
      aiStack_1304[local_18] = 0x5b0;
      local_1c = FUN_00020adc(local_30,local_1c);
    }
    aiStack_9a0[local_18] = 0;
    aiStack_1304[local_18] = 0;
    for (local_14 = *(int **)(local_2c + 0x154); local_14 != (int *)0x0;
        local_14 = (int *)local_14[0x10b]) {
      local_34 = local_14[0x105];
      if (((*local_14 == 2) && (local_34 != 0)) &&
         ((iVar3 = FUN_00020a30(local_30,*(undefined4 *)(local_34 + 0x24)), iVar3 == 0 &&
          (iVar4 = *(int *)(local_34 + 0x24), iVar3 = FUN_00020b74(local_30), iVar4 != iVar3)))) {
        uVar1 = FUN_00020b38(local_30);
        *(undefined4 *)(local_34 + 0x24) = uVar1;
        pcVar2 = inet_ntoa((in_addr)local_14[2]);
        printf((char *)(DAT_0001accc + 0x1a7c8),DAT_0001acc8 + 0x1a7c0,0x6c9,DAT_0001acc4 + 0x1a7b4,
               pcVar2);
      }
    }
    if (*(int *)(local_2c + 0x40) == 1) {
      if (((*(int *)(local_2c + 0xcc) == 0) || (*(int *)(local_2c + 0xcc) == 0)) &&
         (iVar3 = FUN_000217e8(param_3,param_4,local_2c + 0x48), iVar3 < 0)) {
        printf((char *)(DAT_0001acd8 + 0x1a878),DAT_0001acd4 + 0x1a870,0x6d1,DAT_0001acd0 + 0x1a864)
        ;
      }
    }
    else if ((*(int *)(local_2c + 0x40) == 2) &&
            ((((*(int *)(local_2c + 0x110) == 0 || (*(int *)(local_2c + 0x110) == 0)) ||
              (*(int *)(local_2c + 0x108) == 0)) &&
             (iVar3 = FUN_00021820(param_3,param_4,local_2c + 0x48), iVar3 < 0)))) {
      printf((char *)(DAT_0001ace4 + 0x1a900),DAT_0001ace0 + 0x1a8f8,0x6db,DAT_0001acdc + 0x1a8ec);
    }
    local_24 = 0;
    local_20 = 0;
    while( true ) {
      if (((param_4 <= local_24) || (aiStack_9a0[local_20] == 0)) || (aiStack_1304[local_20] < 1))
      goto LAB_0001aba0;
      local_38 = 0;
      local_1c68 = 0;
      local_38 = FUN_00020fa0(param_3 + local_24,param_4 - local_24,&local_1c68);
      if (local_38 == 0) break;
      if (*(int *)(local_2c + 0x40) == 1) {
        local_28 = FUN_00022018(local_2c + 0x118,local_38,local_1c68,param_6,param_5,param_6,
                                aiStack_9a0 + local_20,aiStack_1304 + local_20);
        if (local_28 < 1) {
          printf((char *)(DAT_0001acfc + 0x1aa60),DAT_0001acf8 + 0x1aa58,0x6f6,
                 DAT_0001acf4 + 0x1aa4c,local_28);
          return -1;
        }
      }
      else if (*(int *)(local_2c + 0x40) == 2) {
        local_28 = FUN_000225b4(local_2c + 0x118,local_38,local_1c68,param_6,param_5,param_6,
                                aiStack_9a0 + local_20,aiStack_1304 + local_20);
        if (local_28 < 1) {
          printf((char *)(DAT_0001ad08 + 0x1aafc),DAT_0001ad04 + 0x1aaf4,0x6fd,
                 DAT_0001ad00 + 0x1aae8,local_28);
          return -1;
        }
      }
      local_20 = local_20 + local_28;
      local_24 = (local_38 - param_3) + local_1c68;
    }
    printf((char *)(DAT_0001acf0 + 0x1a9ac),DAT_0001acec + 0x1a9a4,0x6ed,DAT_0001ace8 + 0x1a998);
LAB_0001aba0:
    for (local_18 = 0; local_18 < local_20; local_18 = local_18 + 1) {
      *(int *)auStack_1c64[local_18] = aiStack_1304[local_18];
      FUN_00020bb0(local_30);
    }
    for (local_14 = *(int **)(local_2c + 0x154); local_14 != (int *)0x0;
        local_14 = (int *)local_14[0x10b]) {
      local_3c = local_14[0x105];
      if ((*local_14 == 2) && (local_3c != 0)) {
        FUN_0001b3c8(local_3c,*(undefined4 *)(local_2c + 0x144),*(undefined4 *)(local_2c + 0x140),
                     *(undefined4 *)(local_2c + 0x144),param_5,param_6,
                     *(undefined4 *)(local_2c + 0x120));
        FUN_00018ed4(local_14);
      }
    }
    FUN_0001918c(param_1);
  }
  return param_4;
}



/* ===== FUN_0001ad0c @ 0001ad0c size=1140 ===== */

undefined4
FUN_0001ad0c(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
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
    local_1c = FUN_00020b74(local_28);
    for (local_18 = 0; local_18 < 0x14; local_18 = local_18 + 1) {
      iVar3 = FUN_00020adc(local_28,local_1c);
      iVar4 = FUN_00020b38(local_28);
      if (iVar3 == iVar4) {
        FUN_00020c58(local_28);
      }
      FUN_00020980(local_28,local_1c,auStack_84 + local_18,auStack_128 + local_18);
      auStack_d8[local_18] = 0x5b0;
      local_1c = FUN_00020adc(local_28,local_1c);
    }
    auStack_84[local_18] = 0;
    auStack_d8[local_18] = 0;
    for (local_14 = *(int **)(local_24 + 0x154); local_14 != (int *)0x0;
        local_14 = (int *)local_14[0x10b]) {
      local_2c = local_14[0x106];
      if (((*local_14 == 2) && (local_2c != 0)) &&
         ((iVar3 = FUN_00020a30(local_28,*(undefined4 *)(local_2c + 0x24)), iVar3 == 0 &&
          (iVar4 = *(int *)(local_2c + 0x24), iVar3 = FUN_00020b74(local_28), iVar4 != iVar3)))) {
        uVar1 = FUN_00020b38(local_28);
        *(undefined4 *)(local_2c + 0x24) = uVar1;
        pcVar2 = inet_ntoa((in_addr)local_14[2]);
        printf((char *)(DAT_0001b188 + 0x1af54),DAT_0001b184 + 0x1af4c,0x73c,DAT_0001b180 + 0x1af40,
               pcVar2);
      }
    }
    iVar3 = *(int *)(local_24 + 0x44);
    if (0x4000 < iVar3) {
      if (iVar3 < 0x4003) {
        local_20 = FUN_00022b88(local_24 + 0x128,param_2,param_3,param_6,param_5,param_6,auStack_84,
                                auStack_d8);
        if (local_20 < 1) {
          printf((char *)(DAT_0001b194 + 0x1b004),DAT_0001b190 + 0x1affc,0x745,
                 DAT_0001b18c + 0x1aff0,local_20);
          return 0xffffffff;
        }
      }
      else if (iVar3 == 0x4003) {
        local_20 = FUN_00022ea0(local_24 + 0x128,param_2,param_3,param_6,param_5,param_6,auStack_84,
                                auStack_d8);
        if (local_20 < 1) {
          printf((char *)(DAT_0001b1a0 + 0x1b070),DAT_0001b19c + 0x1b068,0x74c,
                 DAT_0001b198 + 0x1b05c,local_20);
          return 0xffffffff;
        }
      }
    }
    for (local_18 = 0; local_18 < local_20; local_18 = local_18 + 1) {
      *(undefined4 *)auStack_128[local_18] = auStack_d8[local_18];
      FUN_00020bb0(local_28);
    }
    for (local_14 = *(int **)(local_24 + 0x154); local_14 != (int *)0x0;
        local_14 = (int *)local_14[0x10b]) {
      local_30 = local_14[0x106];
      if ((*local_14 == 2) && (local_30 != 0)) {
        FUN_0001b3c8(local_30,*(undefined4 *)(local_24 + 0x14c),*(undefined4 *)(local_24 + 0x148),
                     *(undefined4 *)(local_24 + 0x14c),param_5,param_6,
                     *(undefined4 *)(local_24 + 0x130));
        FUN_00019030(local_14);
      }
    }
  }
  return param_3;
}



/* ===== FUN_0001b1a4 @ 0001b1a4 size=148 ===== */

longlong FUN_0001b1a4(void)

{
  longlong lVar1;
  timespec local_18;
  
  clock_gettime(1,&local_18);
  lVar1 = FUN_000230b4(local_18.tv_nsec,local_18.tv_nsec >> 0x1f,1000,0);
  return lVar1 + CONCAT44((local_18.tv_sec >> 0x1f) * 1000000 +
                          (int)((ulonglong)(uint)local_18.tv_sec * 1000000 >> 0x20),
                          (int)((ulonglong)(uint)local_18.tv_sec * 1000000));
}



/* ===== FUN_0001b238 @ 0001b238 size=120 ===== */

undefined8 FUN_0001b238(void)

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



/* ===== FUN_0001b2b0 @ 0001b2b0 size=48 ===== */

longlong FUN_0001b2b0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_0001b238();
  return lVar1 + CONCAT44(DAT_0001b2e4,DAT_0001b2e0);
}



/* ===== FUN_0001b2e8 @ 0001b2e8 size=112 ===== */

undefined4
FUN_0001b2e8(int param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,int param_6)

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



/* ===== FUN_0001b3c8 @ 0001b3c8 size=1168 ===== */

size_t FUN_0001b3c8(int *param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,
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
    uVar6 = (int)((ulonglong)*(undefined8 *)(param_1 + 0xe) >> 0x20) + DAT_0001b734 +
            (uint)CARRY4(uVar8,DAT_0001b730);
    bVar7 = uVar6 <= param_6;
    if (param_6 == uVar6) {
      bVar7 = uVar8 + DAT_0001b730 <= param_5;
    }
    if (!bVar7) {
      return 0;
    }
  }
  uStack_3c = uStack_48;
  local_38 = local_44;
  local_14 = FUN_000230b4(param_3 + param_5,param_4 + param_6 + (uint)CARRY4(param_3,param_5),
                          1000000,0);
  FUN_000230b4(param_3 + param_5,param_4 + param_6 + (uint)CARRY4(param_3,param_5),1000000,0);
  local_18 = FUN_000230b4(0,extraout_r2,1000000,0);
  local_1c = FUN_000230b4((int)((ulonglong)param_7 * (ulonglong)param_5),
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
      iVar2 = FUN_00015148();
      if ((iVar2 != 0xb) && (iVar2 = FUN_00015148(), iVar2 != 4)) {
        pcVar3 = inet_ntoa((in_addr)param_1[8]);
        uVar4 = FUN_00015148();
        uVar4 = FUN_00015164(uVar4);
        printf((char *)(DAT_0001b74c + 0x1b84c),DAT_0001b748 + 0x1b844,0x7f0,DAT_0001b744 + 0x1b838,
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
      iVar2 = FUN_00015148();
      if ((iVar2 != 0xb) && (iVar2 = FUN_00015148(), iVar2 != 4)) {
        pcVar3 = inet_ntoa((in_addr)param_1[8]);
        uVar4 = FUN_00015148();
        uVar4 = FUN_00015164(uVar4);
        printf((char *)(DAT_0001b740 + 0x1b720),DAT_0001b73c + 0x1b718,0x7de,DAT_0001b738 + 0x1b70c,
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



/* ===== FUN_0001b878 @ 0001b878 size=68 ===== */

void * FUN_0001b878(size_t param_1)

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



/* ===== FUN_0001b8bc @ 0001b8bc size=48 ===== */

void FUN_0001b8bc(void *param_1)

{
  if (param_1 != (void *)0x0) {
    free(param_1);
  }
  return;
}



/* ===== FUN_0001b8ec @ 0001b8ec size=104 ===== */

void * FUN_0001b8ec(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = calloc(1,param_2);
  if ((__dest != (void *)0x0) && (param_1 != (void *)0x0)) {
    memcpy(__dest,param_1,param_2);
  }
  return __dest;
}



/* ===== FUN_0001b954 @ 0001b954 size=120 ===== */

void * FUN_0001b954(char *param_1)

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



/* ===== FUN_0001b9cc @ 0001b9cc size=172 ===== */

undefined4 FUN_0001b9cc(int param_1,int param_2,int param_3)

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



/* ===== FUN_0001ba78 @ 0001ba78 size=204 ===== */

undefined4 FUN_0001ba78(int param_1,int param_2,char *param_3)

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



/* ===== FUN_0001bb44 @ 0001bb44 size=928 ===== */

int FUN_0001bb44(byte *param_1,int *param_2)

{
  byte *__src;
  int iVar1;
  int iVar2;
  size_t local_1c;
  byte *local_18;
  byte *local_14;
  
  iVar2 = DAT_0001bee4 + 0x1bb64;
  local_14 = param_1;
  iVar1 = FUN_0001ba78(DAT_0001bee8 + 0x1bb7c,3,param_1);
  *param_2 = iVar1;
  if (*param_2 == 2) {
    printf((char *)(DAT_0001bef4 + 0x1bbc8),DAT_0001bef0 + 0x1bbc0,0xaa,DAT_0001beec + 0x1bbb4,
           param_1);
    iVar1 = -1;
  }
  else {
    *(undefined2 *)(param_2 + 1) = 0;
    *(undefined1 *)((int)param_2 + 6) = 0;
    *(undefined1 *)((int)param_2 + 0x26) = 0;
    for (; ((*(ushort *)(**(int **)(iVar2 + DAT_0001bef8) + (uint)*local_14 * 2) & 2) != 0 ||
           (*local_14 == 0x3a)); local_14 = local_14 + 1) {
    }
    if ((*local_14 == 0x2f) && (local_14[1] == 0x2f)) {
      local_14 = local_14 + 2;
      for (local_18 = local_14;
          (((*(ushort *)(**(int **)(iVar2 + DAT_0001bef8) + (uint)*local_18 * 2) & 0x80) != 0 &&
           (*local_18 != 0x3a)) && (*local_18 != 0x2f)); local_18 = local_18 + 1) {
      }
      if (*local_18 == 0x3a) {
        iVar1 = sscanf((char *)(local_18 + 1),(char *)(DAT_0001bf08 + 0x1bd2c),&local_1c);
        if (iVar1 != 1) {
          printf((char *)(DAT_0001bf14 + 0x1bd64),DAT_0001bf10 + 0x1bd5c,0xbc,DAT_0001bf0c + 0x1bd50
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
             (*(ushort *)(**(int **)(iVar2 + DAT_0001bef8) + (uint)*local_18 * 2) & 0x80) != 0 &&
             (*local_18 != 0x2f)); local_18 = local_18 + 1) {
      }
      if (*local_18 == 0x2f) {
        local_14 = local_18;
        while ((*(ushort *)(**(int **)(iVar2 + DAT_0001bef8) + (uint)*local_18 * 2) & 0x80) != 0) {
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
      printf((char *)(DAT_0001bf04 + 0x1bc8c),DAT_0001bf00 + 0x1bc84,0xb3,DAT_0001befc + 0x1bc78,
             param_1);
      iVar1 = -1;
    }
  }
  return iVar1;
}



/* ===== FUN_0001bf18 @ 0001bf18 size=256 ===== */

size_t FUN_0001bf18(undefined4 *param_1,char *param_2,size_t param_3)

{
  undefined4 uVar1;
  size_t sVar2;
  
  if (*(short *)(param_1 + 1) == 0) {
    uVar1 = FUN_0001b9cc(DAT_0001c020 + 0x1bfc8,3,*param_1);
    snprintf(param_2,param_3,(char *)(DAT_0001c024 + 0x1bff8),uVar1,(int)param_1 + 6,
             (int)param_1 + 0x26);
  }
  else {
    uVar1 = FUN_0001b9cc(DAT_0001c018 + 0x1bf60,3,*param_1);
    snprintf(param_2,param_3,(char *)(DAT_0001c01c + 0x1bf9c),uVar1,(int)param_1 + 6,
             (uint)*(ushort *)(param_1 + 1),(int)param_1 + 0x26);
  }
  sVar2 = strlen(param_2);
  return sVar2;
}



/* ===== FUN_0001c028 @ 0001c028 size=788 ===== */

undefined4 FUN_0001c028(undefined4 *param_1,byte *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int local_18;
  byte *local_14;
  
  iVar2 = DAT_0001c33c + 0x1c048;
  local_14 = param_2;
  local_18 = FUN_0001ba78(DAT_0001c340 + 0x1c060,0xc,param_2);
  if (local_18 == 0xb) {
    local_18 = FUN_0001ba78(DAT_0001c358 + 0x1c1c8,2,local_14);
    if (local_18 == 1) {
      if (*local_14 == 0x24) {
        *param_1 = 2;
        *(byte *)(param_1 + 1) = local_14[1];
        *(undefined2 *)((int)param_1 + 6) = *(undefined2 *)(local_14 + 2);
        *(undefined1 *)(param_1 + 2) = 0;
        uVar1 = 0;
      }
      else {
        printf((char *)(DAT_0001c374 + 0x1c2ec),DAT_0001c370 + 0x1c2e4,0x10c,DAT_0001c36c + 0x1c2d8,
               param_2);
        uVar1 = 0xffffffff;
      }
    }
    else {
      *param_1 = 1;
      param_1[1] = local_18;
      while ((*(ushort *)(**(int **)(iVar2 + DAT_0001c344) + (uint)*local_14 * 2) & 0x80) != 0) {
        local_14 = local_14 + 1;
      }
      local_14 = local_14 + 1;
      iVar2 = sscanf((char *)local_14,(char *)(DAT_0001c35c + 0x1c258),&local_18);
      if (iVar2 == 1) {
        param_1[2] = local_18;
        uVar1 = 0;
      }
      else {
        printf((char *)(DAT_0001c368 + 0x1c294),DAT_0001c364 + 0x1c28c,0x104,DAT_0001c360 + 0x1c280,
               param_2);
        uVar1 = 0xffffffff;
      }
    }
  }
  else {
    *param_1 = 0;
    param_1[1] = local_18;
    while ((*(ushort *)(**(int **)(iVar2 + DAT_0001c344) + (uint)*local_14 * 2) & 0x80) != 0) {
      local_14 = local_14 + 1;
    }
    local_14 = local_14 + 1;
    local_18 = FUN_0001bb44(local_14,param_1 + 2);
    if (local_18 < 1) {
      uVar1 = 0xffffffff;
    }
    else {
      while ((*(ushort *)(**(int **)(iVar2 + DAT_0001c344) + (uint)*local_14 * 2) & 0x80) != 0) {
        local_14 = local_14 + 1;
      }
      local_14 = local_14 + 1;
      local_18 = FUN_0001ba78(DAT_0001c348 + 0x1c164,2,local_14);
      if (local_18 == 1) {
        printf((char *)(DAT_0001c354 + 0x1c1a4),DAT_0001c350 + 0x1c19c,0xf7,DAT_0001c34c + 0x1c190,
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



/* ===== FUN_0001c378 @ 0001c378 size=536 ===== */

char * FUN_0001c378(int *param_1,char *param_2,size_t param_3)

{
  undefined4 uVar1;
  size_t sVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  
  if (*param_1 == 0) {
    uVar1 = FUN_0001b9cc(DAT_0001c590 + 0x1c3c8,0xc,param_1[1]);
    snprintf(param_2,param_3,(char *)(DAT_0001c594 + 0x1c3dc),uVar1);
    sVar2 = strlen(param_2);
    pcVar5 = param_2 + sVar2;
    iVar6 = param_3 - sVar2;
    if (iVar6 < 2) {
      pcVar5 = pcVar5 + -(int)param_2;
    }
    else {
      iVar3 = FUN_0001bf18(param_1 + 2,pcVar5,iVar6);
      pcVar5 = pcVar5 + iVar3;
      if (iVar6 - iVar3 < 2) {
        pcVar5 = pcVar5 + -(int)param_2;
      }
      else {
        uVar1 = FUN_0001b9cc(DAT_0001c598 + 0x1c4a8,2,param_1[0x1c]);
        snprintf(pcVar5,iVar6 - iVar3,(char *)(DAT_0001c59c + 0x1c4bc),uVar1);
        sVar2 = strlen(pcVar5);
        pcVar5 = pcVar5 + (sVar2 - (int)param_2);
      }
    }
  }
  else if (*param_1 == 1) {
    uVar1 = FUN_0001b9cc(DAT_0001c5a0 + 0x1c51c,2,param_1[1]);
    iVar6 = param_1[2];
    uVar4 = FUN_0001b9cc(DAT_0001c5a4 + 0x1c548,0x2b,param_1[2]);
    snprintf(param_2,param_3,(char *)(DAT_0001c5a8 + 0x1c568),uVar1,iVar6,uVar4);
    pcVar5 = (char *)strlen(param_2);
  }
  else {
    pcVar5 = (char *)0x0;
  }
  return pcVar5;
}



/* ===== FUN_0001c5ac @ 0001c5ac size=952 ===== */

undefined4 FUN_0001c5ac(int param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_14;
  char *local_10;
  int local_c;
  
  local_c = param_1 + 4;
  if (*(int *)(param_1 + 0x80) != 0) {
    FUN_0001b8bc(*(undefined4 *)(param_1 + 0x80));
    *(undefined4 *)(local_c + 0x7c) = 0;
  }
  uVar1 = FUN_0001b878(0x14);
  *(undefined4 *)(local_c + 0x7c) = uVar1;
  if (*(int *)(local_c + 0x7c) == 0) {
    printf((char *)(DAT_0001c970 + 0x1c648),DAT_0001c96c + 0x1c640,0x153,DAT_0001c968 + 0x1c634,
           DAT_0001c964 + 0x1c628);
    uVar1 = 0xffffffff;
  }
  else {
    local_10 = strstr(param_2,(char *)(DAT_0001c974 + 0x1c65c));
    if (local_10 == (char *)0x0) {
      printf((char *)(DAT_0001c980 + 0x1c69c),DAT_0001c97c + 0x1c694,0x159,DAT_0001c978 + 0x1c688,
             param_2);
      FUN_0001b8bc(*(undefined4 *)(local_c + 0x7c));
      *(undefined4 *)(local_c + 0x7c) = 0;
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = FUN_0001ba78(DAT_0001c984 + 0x1c6d4,3,local_10);
      **(undefined4 **)(local_c + 0x7c) = uVar1;
      local_10 = strstr(param_2,(char *)(DAT_0001c988 + 0x1c6f4));
      if ((local_10 != (char *)0x0) &&
         (iVar2 = sscanf(local_10,(char *)(DAT_0001c98c + 0x1c720),&local_14), iVar2 == 1)) {
        *(uint *)(*(int *)(local_c + 0x7c) + 4) = *(uint *)(*(int *)(local_c + 0x7c) + 4) | 1;
        *(undefined4 *)(*(int *)(local_c + 0x7c) + 8) = local_14;
      }
      local_10 = strstr(param_2,(char *)(DAT_0001c990 + 0x1c76c));
      if (local_10 != (char *)0x0) {
        *(uint *)(*(int *)(local_c + 0x7c) + 4) = *(uint *)(*(int *)(local_c + 0x7c) + 4) | 2;
      }
      local_10 = strstr(param_2,(char *)(DAT_0001c994 + 0x1c7ac));
      if (local_10 != (char *)0x0) {
        *(uint *)(*(int *)(local_c + 0x7c) + 4) = *(uint *)(*(int *)(local_c + 0x7c) + 4) | 4;
      }
      local_10 = strstr(param_2,(char *)(DAT_0001c998 + 0x1c7ec));
      if ((local_10 != (char *)0x0) &&
         (iVar2 = sscanf(local_10,(char *)(DAT_0001c99c + 0x1c818),&local_14), iVar2 == 1)) {
        *(uint *)(*(int *)(local_c + 0x7c) + 4) = *(uint *)(*(int *)(local_c + 0x7c) + 4) | 8;
        *(short *)(*(int *)(local_c + 0x7c) + 0xc) = (short)local_14;
      }
      local_10 = strstr(param_2,(char *)(DAT_0001c9a0 + 0x1c868));
      if ((local_10 != (char *)0x0) &&
         (iVar2 = sscanf(local_10,(char *)(DAT_0001c9a4 + 0x1c894),&local_14), iVar2 == 1)) {
        *(uint *)(*(int *)(local_c + 0x7c) + 4) = *(uint *)(*(int *)(local_c + 0x7c) + 4) | 0x10;
        *(short *)(*(int *)(local_c + 0x7c) + 0xe) = (short)local_14;
      }
      local_10 = strstr(param_2,(char *)(DAT_0001c9a8 + 0x1c8e4));
      if ((local_10 != (char *)0x0) &&
         (iVar2 = sscanf(local_10,(char *)(DAT_0001c9ac + 0x1c910),&local_14), iVar2 == 1)) {
        *(uint *)(*(int *)(local_c + 0x7c) + 4) = *(uint *)(*(int *)(local_c + 0x7c) + 4) | 0x20;
        *(undefined1 *)(*(int *)(local_c + 0x7c) + 0x10) = (undefined1)local_14;
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ===== FUN_0001c9b0 @ 0001c9b0 size=1192 ===== */

char * FUN_0001c9b0(int param_1,char *param_2,size_t param_3)

{
  undefined4 uVar1;
  size_t sVar2;
  size_t local_2c;
  char *local_14;
  
  if (*(int *)(param_1 + 0x80) == 0) {
    local_14 = (char *)0x0;
  }
  else {
    uVar1 = FUN_0001b9cc(DAT_0001ce58 + 0x1ca10,3,**(undefined4 **)(param_1 + 0x80));
    snprintf(param_2,param_3,(char *)(DAT_0001ce5c + 0x1ca24),uVar1);
    local_2c = strlen(param_2);
    local_14 = param_2 + local_2c;
    local_2c = param_3 - local_2c;
    if ((int)local_2c < 2) {
      local_14 = local_14 + -(int)param_2;
    }
    else {
      if ((*(uint *)(*(int *)(param_1 + 0x80) + 4) & 1) != 0) {
        snprintf(local_14,local_2c,(char *)(DAT_0001ce60 + 0x1caac),
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
          snprintf(local_14,local_2c,(char *)(DAT_0001ce68 + 0x1cba0));
          sVar2 = strlen(local_14);
          local_14 = local_14 + sVar2;
          local_2c = local_2c - sVar2;
          if ((int)local_2c < 2) {
            return local_14 + -(int)param_2;
          }
        }
      }
      else {
        snprintf(local_14,local_2c,(char *)(DAT_0001ce64 + 0x1cb24));
        sVar2 = strlen(local_14);
        local_14 = local_14 + sVar2;
        local_2c = local_2c - sVar2;
        if ((int)local_2c < 2) {
          return local_14 + -(int)param_2;
        }
      }
      if ((*(uint *)(*(int *)(param_1 + 0x80) + 4) & 8) != 0) {
        snprintf(local_14,local_2c,(char *)(DAT_0001ce6c + 0x1cc44),
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
        snprintf(local_14,local_2c,(char *)(DAT_0001ce70 + 0x1cce4),
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
        snprintf(local_14,local_2c,(char *)(DAT_0001ce74 + 0x1cd84),
                 (uint)*(byte *)(*(int *)(param_1 + 0x80) + 0x10),
                 *(byte *)(*(int *)(param_1 + 0x80) + 0x10) + 1);
        sVar2 = strlen(local_14);
        local_14 = local_14 + sVar2;
        local_2c = local_2c - sVar2;
        if ((int)local_2c < 2) {
          return local_14 + -(int)param_2;
        }
      }
      snprintf(local_14,local_2c,(char *)(DAT_0001ce78 + 0x1cde4));
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



/* ===== FUN_0001cea4 @ 0001cea4 size=44 ===== */

undefined4 FUN_0001cea4(void)

{
  return 0;
}



/* ===== FUN_0001cef8 @ 0001cef8 size=44 ===== */

undefined4 FUN_0001cef8(void)

{
  return 0;
}



/* ===== FUN_0001cf4c @ 0001cf4c size=44 ===== */

undefined4 FUN_0001cf4c(void)

{
  return 0;
}



/* ===== FUN_0001cf78 @ 0001cf78 size=312 ===== */

undefined4 FUN_0001cf78(int param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x74) != 0) {
    FUN_0001b8bc(*(undefined4 *)(param_1 + 0x74));
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  uVar1 = FUN_0001b878(4);
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  if (*(int *)(param_1 + 0x74) == 0) {
    printf((char *)(DAT_0001d0bc + 0x1d014),DAT_0001d0b8 + 0x1d00c,0x201,DAT_0001d0b4 + 0x1d000,
           DAT_0001d0b0 + 0x1cff4);
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = sscanf(param_2,(char *)(DAT_0001d0c0 + 0x1d034),*(undefined4 *)(param_1 + 0x74));
    if (iVar2 == 1) {
      uVar1 = 0;
    }
    else {
      FUN_0001b8bc(*(undefined4 *)(param_1 + 0x74));
      *(undefined4 *)(param_1 + 0x74) = 0;
      printf((char *)(DAT_0001d0d0 + 0x1d098),DAT_0001d0cc + 0x1d090,0x201,DAT_0001d0c8 + 0x1d084,
             DAT_0001d0c4 + 0x1d078,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_0001d0d4 @ 0001d0d4 size=104 ===== */

size_t FUN_0001d0d4(int param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  
  if (*(int *)(param_1 + 0x74) == 0) {
    sVar1 = 0;
  }
  else {
    snprintf(param_2,param_3,(char *)(DAT_0001d13c + 0x1d118),**(undefined4 **)(param_1 + 0x74));
    sVar1 = strlen(param_2);
  }
  return sVar1;
}



/* ===== FUN_0001d140 @ 0001d140 size=312 ===== */

undefined4 FUN_0001d140(int param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x7c) != 0) {
    FUN_0001b8bc(*(undefined4 *)(param_1 + 0x7c));
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  uVar1 = FUN_0001b878(4);
  *(undefined4 *)(param_1 + 0x7c) = uVar1;
  if (*(int *)(param_1 + 0x7c) == 0) {
    printf((char *)(DAT_0001d284 + 0x1d1dc),DAT_0001d280 + 0x1d1d4,0x202,DAT_0001d27c + 0x1d1c8,
           DAT_0001d278 + 0x1d1bc);
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = sscanf(param_2,(char *)(DAT_0001d288 + 0x1d1fc),*(undefined4 *)(param_1 + 0x7c));
    if (iVar2 == 1) {
      uVar1 = 0;
    }
    else {
      FUN_0001b8bc(*(undefined4 *)(param_1 + 0x7c));
      *(undefined4 *)(param_1 + 0x7c) = 0;
      printf((char *)(DAT_0001d298 + 0x1d260),DAT_0001d294 + 0x1d258,0x202,DAT_0001d290 + 0x1d24c,
             DAT_0001d28c + 0x1d240,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_0001d29c @ 0001d29c size=104 ===== */

size_t FUN_0001d29c(int param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  
  if (*(int *)(param_1 + 0x7c) == 0) {
    sVar1 = 0;
  }
  else {
    snprintf(param_2,param_3,(char *)(DAT_0001d304 + 0x1d2e0),**(undefined4 **)(param_1 + 0x7c));
    sVar1 = strlen(param_2);
  }
  return sVar1;
}



/* ===== FUN_0001d308 @ 0001d308 size=312 ===== */

undefined4 FUN_0001d308(int param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xa0) != 0) {
    FUN_0001b8bc(*(undefined4 *)(param_1 + 0xa0));
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  uVar1 = FUN_0001b878(4);
  *(undefined4 *)(param_1 + 0xa0) = uVar1;
  if (*(int *)(param_1 + 0xa0) == 0) {
    printf((char *)(DAT_0001d44c + 0x1d3a4),DAT_0001d448 + 0x1d39c,0x203,DAT_0001d444 + 0x1d390,
           DAT_0001d440 + 0x1d384);
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = sscanf(param_2,(char *)(DAT_0001d450 + 0x1d3c4),*(undefined4 *)(param_1 + 0xa0));
    if (iVar2 == 1) {
      uVar1 = 0;
    }
    else {
      FUN_0001b8bc(*(undefined4 *)(param_1 + 0xa0));
      *(undefined4 *)(param_1 + 0xa0) = 0;
      printf((char *)(DAT_0001d460 + 0x1d428),DAT_0001d45c + 0x1d420,0x203,DAT_0001d458 + 0x1d414,
             DAT_0001d454 + 0x1d408,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_0001d464 @ 0001d464 size=104 ===== */

size_t FUN_0001d464(int param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  
  if (*(int *)(param_1 + 0xa0) == 0) {
    sVar1 = 0;
  }
  else {
    snprintf(param_2,param_3,(char *)(DAT_0001d4cc + 0x1d4a8),**(undefined4 **)(param_1 + 0xa0));
    sVar1 = strlen(param_2);
  }
  return sVar1;
}



/* ===== FUN_0001d4d0 @ 0001d4d0 size=548 ===== */

undefined4 FUN_0001d4d0(int param_1,byte *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint local_18;
  byte *local_14;
  
  iVar2 = DAT_0001d6f4 + 0x1d4f0;
  local_18 = 0;
  if (*(int *)(param_1 + 0x9c) != 0) {
    FUN_0001b8bc(*(undefined4 *)(param_1 + 0x9c));
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  uVar1 = FUN_0001b878(0x40);
  *(undefined4 *)(param_1 + 0x9c) = uVar1;
  local_14 = param_2;
  if (*(int *)(param_1 + 0x9c) == 0) {
    printf((char *)(DAT_0001d704 + 0x1d584),DAT_0001d700 + 0x1d57c,0x22d,DAT_0001d6fc + 0x1d570,
           DAT_0001d6f8 + 0x1d564);
    uVar1 = 0xffffffff;
  }
  else {
    for (; ((*(ushort *)(**(int **)(iVar2 + DAT_0001d708) + (uint)*local_14 * 2) & 0x80) != 0 &&
           (*local_14 != 0x3a)); local_14 = local_14 + 1) {
    }
    if (*local_14 == 0x3a) {
      do {
        local_14 = local_14 + 1;
      } while (*local_14 == 0x20);
      while (((*(ushort *)(**(int **)(iVar2 + DAT_0001d708) + (uint)*local_14 * 2) & 0x40) != 0 &&
             (local_18 < 0x3f))) {
        *(byte *)(*(int *)(param_1 + 0x9c) + local_18) = *local_14;
        local_18 = local_18 + 1;
        local_14 = local_14 + 1;
      }
      *(undefined1 *)(*(int *)(param_1 + 0x9c) + local_18) = 0;
      uVar1 = 0;
    }
    else {
      FUN_0001b8bc(*(undefined4 *)(param_1 + 0x9c));
      *(undefined4 *)(param_1 + 0x9c) = 0;
      printf((char *)(DAT_0001d718 + 0x1d634),DAT_0001d714 + 0x1d62c,0x22d,DAT_0001d710 + 0x1d620,
             DAT_0001d70c + 0x1d614,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_0001d71c @ 0001d71c size=100 ===== */

size_t FUN_0001d71c(int param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  
  if (*(int *)(param_1 + 0x9c) == 0) {
    sVar1 = 0;
  }
  else {
    snprintf(param_2,param_3,(char *)(DAT_0001d780 + 0x1d75c),*(undefined4 *)(param_1 + 0x9c));
    sVar1 = strlen(param_2);
  }
  return sVar1;
}



/* ===== FUN_0001d784 @ 0001d784 size=548 ===== */

undefined4 FUN_0001d784(int param_1,byte *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint local_18;
  byte *local_14;
  
  iVar2 = DAT_0001d9a8 + 0x1d7a4;
  local_18 = 0;
  if (*(int *)(param_1 + 0x90) != 0) {
    FUN_0001b8bc(*(undefined4 *)(param_1 + 0x90));
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  uVar1 = FUN_0001b878(0x40);
  *(undefined4 *)(param_1 + 0x90) = uVar1;
  local_14 = param_2;
  if (*(int *)(param_1 + 0x90) == 0) {
    printf((char *)(DAT_0001d9b8 + 0x1d838),DAT_0001d9b4 + 0x1d830,0x22e,DAT_0001d9b0 + 0x1d824,
           DAT_0001d9ac + 0x1d818);
    uVar1 = 0xffffffff;
  }
  else {
    for (; ((*(ushort *)(**(int **)(iVar2 + DAT_0001d9bc) + (uint)*local_14 * 2) & 0x80) != 0 &&
           (*local_14 != 0x3a)); local_14 = local_14 + 1) {
    }
    if (*local_14 == 0x3a) {
      do {
        local_14 = local_14 + 1;
      } while (*local_14 == 0x20);
      while (((*(ushort *)(**(int **)(iVar2 + DAT_0001d9bc) + (uint)*local_14 * 2) & 0x40) != 0 &&
             (local_18 < 0x3f))) {
        *(byte *)(*(int *)(param_1 + 0x90) + local_18) = *local_14;
        local_18 = local_18 + 1;
        local_14 = local_14 + 1;
      }
      *(undefined1 *)(*(int *)(param_1 + 0x90) + local_18) = 0;
      uVar1 = 0;
    }
    else {
      FUN_0001b8bc(*(undefined4 *)(param_1 + 0x90));
      *(undefined4 *)(param_1 + 0x90) = 0;
      printf((char *)(DAT_0001d9cc + 0x1d8e8),DAT_0001d9c8 + 0x1d8e0,0x22e,DAT_0001d9c4 + 0x1d8d4,
             DAT_0001d9c0 + 0x1d8c8,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_0001d9d0 @ 0001d9d0 size=100 ===== */

size_t FUN_0001d9d0(int param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  
  if (*(int *)(param_1 + 0x90) == 0) {
    sVar1 = 0;
  }
  else {
    snprintf(param_2,param_3,(char *)(DAT_0001da34 + 0x1da10),*(undefined4 *)(param_1 + 0x90));
    sVar1 = strlen(param_2);
  }
  return sVar1;
}



/* ===== FUN_0001da38 @ 0001da38 size=548 ===== */

undefined4 FUN_0001da38(int param_1,byte *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint local_18;
  byte *local_14;
  
  iVar2 = DAT_0001dc5c + 0x1da58;
  local_18 = 0;
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_0001b8bc(*(undefined4 *)(param_1 + 0x78));
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  uVar1 = FUN_0001b878(0x20);
  *(undefined4 *)(param_1 + 0x78) = uVar1;
  local_14 = param_2;
  if (*(int *)(param_1 + 0x78) == 0) {
    printf((char *)(DAT_0001dc6c + 0x1daec),DAT_0001dc68 + 0x1dae4,0x22f,DAT_0001dc64 + 0x1dad8,
           DAT_0001dc60 + 0x1dacc);
    uVar1 = 0xffffffff;
  }
  else {
    for (; ((*(ushort *)(**(int **)(iVar2 + DAT_0001dc70) + (uint)*local_14 * 2) & 0x80) != 0 &&
           (*local_14 != 0x3a)); local_14 = local_14 + 1) {
    }
    if (*local_14 == 0x3a) {
      do {
        local_14 = local_14 + 1;
      } while (*local_14 == 0x20);
      while (((*(ushort *)(**(int **)(iVar2 + DAT_0001dc70) + (uint)*local_14 * 2) & 0x40) != 0 &&
             (local_18 < 0x1f))) {
        *(byte *)(*(int *)(param_1 + 0x78) + local_18) = *local_14;
        local_18 = local_18 + 1;
        local_14 = local_14 + 1;
      }
      *(undefined1 *)(*(int *)(param_1 + 0x78) + local_18) = 0;
      uVar1 = 0;
    }
    else {
      FUN_0001b8bc(*(undefined4 *)(param_1 + 0x78));
      *(undefined4 *)(param_1 + 0x78) = 0;
      printf((char *)(DAT_0001dc80 + 0x1db9c),DAT_0001dc7c + 0x1db94,0x22f,DAT_0001dc78 + 0x1db88,
             DAT_0001dc74 + 0x1db7c,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_0001dc84 @ 0001dc84 size=100 ===== */

size_t FUN_0001dc84(int param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  
  if (*(int *)(param_1 + 0x78) == 0) {
    sVar1 = 0;
  }
  else {
    snprintf(param_2,param_3,(char *)(DAT_0001dce8 + 0x1dcc4),*(undefined4 *)(param_1 + 0x78));
    sVar1 = strlen(param_2);
  }
  return sVar1;
}



/* ===== FUN_0001dcec @ 0001dcec size=648 ===== */

undefined4 FUN_0001dcec(int param_1,byte *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  int local_18;
  byte *local_14;
  
  iVar3 = DAT_0001df74 + 0x1dd0c;
  if (*(int *)(param_1 + 0xa4) != 0) {
    FUN_0001b8bc(*(undefined4 *)(param_1 + 0xa4));
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  uVar1 = FUN_0001b878(4);
  *(undefined4 *)(param_1 + 0xa4) = uVar1;
  local_14 = param_2;
  if (*(int *)(param_1 + 0xa4) == 0) {
    printf((char *)(DAT_0001df84 + 0x1dda8),DAT_0001df80 + 0x1dda0,0x264,DAT_0001df7c + 0x1dd94,
           DAT_0001df78 + 0x1dd88);
  }
  else {
    for (; ((*(ushort *)(**(int **)(iVar3 + DAT_0001df88) + (uint)*local_14 * 2) & 0x80) != 0 &&
           (*local_14 != 0x3a)); local_14 = local_14 + 1) {
    }
    if (*local_14 == 0x3a) {
      do {
        local_14 = local_14 + 1;
      } while (*local_14 == 0x20);
      for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
        if ((*(int *)(DAT_0001df9c + local_18 * 0xc + 0x1dea8) != 0) &&
           (pcVar2 = strstr((char *)local_14,*(char **)(DAT_0001dfa0 + local_18 * 0xc + 0x1ded4)),
           pcVar2 != (char *)0x0)) {
          **(undefined4 **)(param_1 + 0xa4) =
               *(undefined4 *)(DAT_0001dfa4 + 0x1df10 + local_18 * 0xc);
          return 0;
        }
      }
      FUN_0001b8bc(*(undefined4 *)(param_1 + 0xa4));
      *(undefined4 *)(param_1 + 0xa4) = 0;
    }
    else {
      FUN_0001b8bc(*(undefined4 *)(param_1 + 0xa4));
      *(undefined4 *)(param_1 + 0xa4) = 0;
      printf((char *)(DAT_0001df98 + 0x1de58),DAT_0001df94 + 0x1de50,0x264,DAT_0001df90 + 0x1de44,
             DAT_0001df8c + 0x1de38,param_2);
    }
  }
  return 0xffffffff;
}



/* ===== FUN_0001dfa8 @ 0001dfa8 size=232 ===== */

size_t FUN_0001dfa8(int param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  int local_c;
  
  if (*(int *)(param_1 + 0xa4) != 0) {
    for (local_c = 0; local_c < 4; local_c = local_c + 1) {
      if (**(int **)(param_1 + 0xa4) == *(int *)(DAT_0001e090 + 0x1dffc + local_c * 0xc)) {
        snprintf(param_2,param_3,(char *)(DAT_0001e098 + 0x1e044),
                 *(undefined4 *)(DAT_0001e094 + local_c * 0xc + 0x1e02c));
        sVar1 = strlen(param_2);
        return sVar1;
      }
    }
  }
  return 0;
}



/* ===== FUN_0001e09c @ 0001e09c size=636 ===== */

undefined4 FUN_0001e09c(int param_1,byte *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  int local_18;
  byte *local_14;
  
  iVar3 = DAT_0001e318 + 0x1e0bc;
  if (*(int *)(param_1 + 0x94) != 0) {
    FUN_0001b8bc(*(undefined4 *)(param_1 + 0x94));
    *(undefined4 *)(param_1 + 0x94) = 0;
  }
  uVar1 = FUN_0001b878(4);
  *(undefined4 *)(param_1 + 0x94) = uVar1;
  local_14 = param_2;
  if (*(int *)(param_1 + 0x94) == 0) {
    printf((char *)(DAT_0001e328 + 0x1e158),DAT_0001e324 + 0x1e150,0x2ab,DAT_0001e320 + 0x1e144,
           DAT_0001e31c + 0x1e138);
    uVar1 = 0xffffffff;
  }
  else {
    for (; ((*(ushort *)(**(int **)(iVar3 + DAT_0001e32c) + (uint)*local_14 * 2) & 0x80) != 0 &&
           (*local_14 != 0x3a)); local_14 = local_14 + 1) {
    }
    if (*local_14 == 0x3a) {
      do {
        local_14 = local_14 + 1;
      } while (*local_14 == 0x20);
      for (local_18 = 0; local_18 < 0xc; local_18 = local_18 + 1) {
        if ((*(int *)(DAT_0001e340 + local_18 * 0xc + 0x1e258) != 0) &&
           (pcVar2 = strstr((char *)local_14,*(char **)(DAT_0001e344 + local_18 * 0xc + 0x1e284)),
           pcVar2 != (char *)0x0)) {
          **(uint **)(param_1 + 0x94) =
               **(uint **)(param_1 + 0x94) |
               1 << (*(uint *)(DAT_0001e348 + 0x1e2c0 + local_18 * 0xc) & 0xff);
        }
      }
      uVar1 = 0;
    }
    else {
      FUN_0001b8bc(*(undefined4 *)(param_1 + 0x94));
      *(undefined4 *)(param_1 + 0x94) = 0;
      printf((char *)(DAT_0001e33c + 0x1e208),DAT_0001e338 + 0x1e200,0x2ab,DAT_0001e334 + 0x1e1f4,
             DAT_0001e330 + 0x1e1e8,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_0001e34c @ 0001e34c size=568 ===== */

char * FUN_0001e34c(int param_1,char *param_2,size_t param_3)

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
    snprintf(param_2,param_3,(char *)(DAT_0001e588 + 0x1e3a4),DAT_0001e584 + 0x1e39c);
    local_2c = strlen(param_2);
    local_c = param_2 + local_2c;
    local_2c = param_3 - local_2c;
    if ((int)local_2c < 2) {
      local_c = local_c + -(int)param_2;
    }
    else {
      for (local_10 = 0; local_10 < 0xc; local_10 = local_10 + 1) {
        if ((**(uint **)(param_1 + 0x94) &
            1 << (*(uint *)(DAT_0001e58c + 0x1e418 + local_10 * 0xc) & 0xff)) != 0) {
          if (bVar1) {
            snprintf(local_c,local_2c,(char *)(DAT_0001e594 + 0x1e478),
                     *(undefined4 *)(DAT_0001e590 + local_10 * 0xc + 0x1e460));
          }
          else {
            snprintf(local_c,local_2c,(char *)(DAT_0001e59c + 0x1e4b4),
                     *(undefined4 *)(DAT_0001e598 + local_10 * 0xc + 0x1e49c));
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
      snprintf(local_c,local_2c,(char *)(DAT_0001e5a0 + 0x1e53c));
      sVar2 = strlen(local_c);
      local_c = local_c + (sVar2 - (int)param_2);
    }
  }
  return local_c;
}



/* ===== FUN_0001e5a4 @ 0001e5a4 size=636 ===== */

undefined4 FUN_0001e5a4(int param_1,byte *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  int local_18;
  byte *local_14;
  
  iVar3 = DAT_0001e820 + 0x1e5c4;
  if (*(int *)(param_1 + 0x88) != 0) {
    FUN_0001b8bc(*(undefined4 *)(param_1 + 0x88));
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  uVar1 = FUN_0001b878(4);
  *(undefined4 *)(param_1 + 0x88) = uVar1;
  local_14 = param_2;
  if (*(int *)(param_1 + 0x88) == 0) {
    printf((char *)(DAT_0001e830 + 0x1e660),DAT_0001e82c + 0x1e658,0x2ac,DAT_0001e828 + 0x1e64c,
           DAT_0001e824 + 0x1e640);
    uVar1 = 0xffffffff;
  }
  else {
    for (; ((*(ushort *)(**(int **)(iVar3 + DAT_0001e834) + (uint)*local_14 * 2) & 0x80) != 0 &&
           (*local_14 != 0x3a)); local_14 = local_14 + 1) {
    }
    if (*local_14 == 0x3a) {
      do {
        local_14 = local_14 + 1;
      } while (*local_14 == 0x20);
      for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
        if ((*(int *)(DAT_0001e848 + local_18 * 0xc + 0x1e760) != 0) &&
           (pcVar2 = strstr((char *)local_14,*(char **)(DAT_0001e84c + local_18 * 0xc + 0x1e78c)),
           pcVar2 != (char *)0x0)) {
          **(uint **)(param_1 + 0x88) =
               **(uint **)(param_1 + 0x88) |
               1 << (*(uint *)(DAT_0001e850 + 0x1e7c8 + local_18 * 0xc) & 0xff);
        }
      }
      uVar1 = 0;
    }
    else {
      FUN_0001b8bc(*(undefined4 *)(param_1 + 0x88));
      *(undefined4 *)(param_1 + 0x88) = 0;
      printf((char *)(DAT_0001e844 + 0x1e710),DAT_0001e840 + 0x1e708,0x2ac,DAT_0001e83c + 0x1e6fc,
             DAT_0001e838 + 0x1e6f0,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_0001e854 @ 0001e854 size=568 ===== */

char * FUN_0001e854(int param_1,char *param_2,size_t param_3)

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
    snprintf(param_2,param_3,(char *)(DAT_0001ea90 + 0x1e8ac),DAT_0001ea8c + 0x1e8a4);
    local_2c = strlen(param_2);
    local_c = param_2 + local_2c;
    local_2c = param_3 - local_2c;
    if ((int)local_2c < 2) {
      local_c = local_c + -(int)param_2;
    }
    else {
      for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
        if ((**(uint **)(param_1 + 0x88) &
            1 << (*(uint *)(DAT_0001ea94 + 0x1e920 + local_10 * 0xc) & 0xff)) != 0) {
          if (bVar1) {
            snprintf(local_c,local_2c,(char *)(DAT_0001ea9c + 0x1e980),
                     *(undefined4 *)(DAT_0001ea98 + local_10 * 0xc + 0x1e968));
          }
          else {
            snprintf(local_c,local_2c,(char *)(DAT_0001eaa4 + 0x1e9bc),
                     *(undefined4 *)(DAT_0001eaa0 + local_10 * 0xc + 0x1e9a4));
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
      snprintf(local_c,local_2c,(char *)(DAT_0001eaa8 + 0x1ea44));
      sVar2 = strlen(local_c);
      local_c = local_c + (sVar2 - (int)param_2);
    }
  }
  return local_c;
}



/* ===== FUN_0001eaac @ 0001eaac size=192 ===== */

undefined4 FUN_0001eaac(char *param_1)

{
  int iVar1;
  int iVar2;
  int local_c;
  
  iVar2 = DAT_0001eb6c + 0x1eac8;
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



/* ===== FUN_0001eb70 @ 0001eb70 size=276 ===== */

char * FUN_0001eb70(char *param_1,void *param_2,int param_3)

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



/* ===== FUN_0001ec84 @ 0001ec84 size=60 ===== */

undefined4 FUN_0001ec84(void *param_1)

{
  if (param_1 != (void *)0x0) {
    memset(param_1,0,0xac);
  }
  return 0;
}



/* ===== FUN_0001ecc0 @ 0001ecc0 size=428 ===== */

void FUN_0001ecc0(void *param_1)

{
  if (*(int *)((int)param_1 + 0x74) != 0) {
    FUN_0001b8bc(*(undefined4 *)((int)param_1 + 0x74));
  }
  if (*(int *)((int)param_1 + 0x78) != 0) {
    FUN_0001b8bc(*(undefined4 *)((int)param_1 + 0x78));
  }
  if (*(int *)((int)param_1 + 0x7c) != 0) {
    FUN_0001b8bc(*(undefined4 *)((int)param_1 + 0x7c));
  }
  if (*(int *)((int)param_1 + 0x80) != 0) {
    FUN_0001b8bc(*(undefined4 *)((int)param_1 + 0x80));
  }
  if (*(int *)((int)param_1 + 0x84) != 0) {
    FUN_0001b8bc(*(undefined4 *)((int)param_1 + 0x84));
  }
  if (*(int *)((int)param_1 + 0x88) != 0) {
    FUN_0001b8bc(*(undefined4 *)((int)param_1 + 0x88));
  }
  if (*(int *)((int)param_1 + 0x90) != 0) {
    FUN_0001b8bc(*(undefined4 *)((int)param_1 + 0x90));
  }
  if (*(int *)((int)param_1 + 0x94) != 0) {
    FUN_0001b8bc(*(undefined4 *)((int)param_1 + 0x94));
  }
  if (*(int *)((int)param_1 + 0x9c) != 0) {
    FUN_0001b8bc(*(undefined4 *)((int)param_1 + 0x9c));
  }
  if (*(int *)((int)param_1 + 0xa4) != 0) {
    FUN_0001b8bc(*(undefined4 *)((int)param_1 + 0xa4));
  }
  if (*(int *)((int)param_1 + 0xa0) != 0) {
    FUN_0001b8bc(*(undefined4 *)((int)param_1 + 0xa0));
  }
  if (*(int *)((int)param_1 + 0xa8) != 0) {
    FUN_0001b8bc(*(undefined4 *)((int)param_1 + 0xa8));
  }
  memset(param_1,0,0xac);
  return;
}



/* ===== FUN_0001ee6c @ 0001ee6c size=52 ===== */

int FUN_0001ee6c(void)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0001eea0 + 0x1ee80);
  *(int *)(DAT_0001eea4 + 0x1ee90) = iVar1 + 1;
  return iVar1;
}



/* ===== FUN_0001eea8 @ 0001eea8 size=516 ===== */

char * FUN_0001eea8(char *param_1,int param_2)

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
  local_c = strstr(param_1,(char *)(DAT_0001f0ac + 0x1eee0));
  if ((local_c == (char *)0x0) || (param_2 <= (int)(local_c + (1 - (int)local_10)))) {
    if (param_2 < 0x101) {
      pcVar2 = (char *)0x0;
    }
    else {
      pcVar2 = (char *)0xffffffff;
    }
  }
  else {
    local_14 = strstr(local_10,(char *)(DAT_0001f0b0 + 0x1ef3c));
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
        local_c = (char *)FUN_0001eb70(local_c,0,0);
        if ((local_c == (char *)0x0) ||
           (iVar1 = strncmp(local_c,(char *)(DAT_0001f0b4 + 0x1efbc),2), iVar1 == 0)) {
          if (param_2 < (int)(local_14 + local_18)) {
            return (char *)0x0;
          }
          return local_14 + local_18;
        }
        iVar1 = strncmp(local_c,(char *)(DAT_0001f0b8 + 0x1efe0),0xe);
      } while ((iVar1 != 0) ||
              (iVar1 = sscanf(local_c,(char *)(DAT_0001f0bc + 0x1f008),&local_18), iVar1 == 1));
      printf((char *)(DAT_0001f0c8 + 0x1f044),DAT_0001f0c4 + 0x1f03c,0x33d,DAT_0001f0c0 + 0x1f030,
             local_c);
      pcVar2 = (char *)0xffffffff;
    }
  }
  return pcVar2;
}



/* ===== FUN_0001f0cc @ 0001f0cc size=896 ===== */

int FUN_0001f0cc(undefined4 *param_1,char *param_2,int param_3)

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
      uVar1 = FUN_0001b8ec(param_2 + 4,local_16);
      param_1[0x2a] = uVar1;
      iVar2 = local_16 + 4;
    }
    else {
      iVar2 = 0;
    }
  }
  else {
    pcVar3 = local_14;
    printf((char *)(DAT_0001f454 + 0x1f1d0),DAT_0001f450 + 0x1f1c8,0x361,DAT_0001f44c + 0x1f1bc,
           local_14);
    iVar2 = FUN_0001eea8(param_2,param_3);
    if (0 < iVar2) {
      local_10 = iVar2;
      local_c = (char *)FUN_0001eb70(local_c,local_11c,0x100);
      if (local_c == (char *)0x0) {
        iVar2 = -1;
      }
      else {
        local_10 = FUN_0001c028(param_1,local_11c);
        if (local_10 < 0) {
          iVar2 = -1;
        }
        else {
          do {
            while( true ) {
              local_c = (char *)FUN_0001eb70(local_c,local_11c,0x100);
              if ((local_c == (char *)0x0) || (local_11c[0] == '\0')) goto LAB_0001f324;
              local_1c = (code *)FUN_0001eaac(local_11c);
              if (local_1c != (code *)0x0) break;
              pcVar3 = local_11c;
              printf((char *)(DAT_0001f460 + 0x1f2a4),DAT_0001f45c + 0x1f29c,0x378,
                     DAT_0001f458 + 0x1f290,pcVar3);
            }
            local_10 = (*local_1c)(param_1,local_11c);
          } while (-1 < local_10);
          pcVar3 = local_11c;
          printf((char *)(DAT_0001f46c + 0x1f2f4),DAT_0001f468 + 0x1f2ec,0x37e,
                 DAT_0001f464 + 0x1f2e0,pcVar3);
LAB_0001f324:
          if ((local_c == (char *)0x0) || (local_11c[0] != '\0')) {
            FUN_0001ecc0(param_1);
            iVar2 = -1;
          }
          else {
            if (param_1[0x28] != 0) {
              uVar1 = FUN_0001b8ec(local_c,*(undefined4 *)param_1[0x28]);
              param_1[0x2a] = uVar1;
              if (param_1[0x2a] == 0) {
                printf((char *)(DAT_0001f478 + 0x1f3b4),DAT_0001f474 + 0x1f3ac,0x38b,
                       DAT_0001f470 + 0x1f3a0,pcVar3);
                FUN_0001ecc0(param_1);
                return -1;
              }
            }
            local_10 = (int)local_c - (int)local_14;
            if (param_1[0x28] != 0) {
              local_10 = *(int *)param_1[0x28] + local_10;
            }
            if (local_10 != iVar2) {
              printf((char *)(DAT_0001f484 + 0x1f43c),DAT_0001f480 + 0x1f434,0x396,
                     DAT_0001f47c + 0x1f428,iVar2,local_10);
            }
          }
        }
      }
    }
  }
  return iVar2;
}



/* ===== FUN_0001f488 @ 0001f488 size=2104 ===== */

int FUN_0001f488(int *param_1,undefined4 *param_2,int param_3)

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
    iVar2 = FUN_0001c378(param_1,param_2,param_3);
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
          iVar2 = FUN_0001d0d4(param_1,local_14,local_34);
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
          iVar2 = FUN_0001dc84(param_1,local_14,local_34);
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
          iVar2 = FUN_0001d29c(param_1,local_14,local_34);
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
          iVar2 = FUN_0001c9b0(param_1,local_14,local_34);
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
          iVar2 = FUN_0001cea4(param_1,local_14,local_34);
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
          iVar2 = FUN_0001e854(param_1,local_14,local_34);
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
          iVar2 = FUN_0001cef8(param_1,local_14,local_34);
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
          iVar2 = FUN_0001d9d0(param_1,local_14,local_34);
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
          iVar2 = FUN_0001e34c(param_1,local_14,local_34);
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
          iVar2 = FUN_0001cf4c(param_1,local_14,local_34);
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
          iVar2 = FUN_0001d71c(param_1,local_14,local_34);
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
          iVar2 = FUN_0001dfa8(param_1,local_14,local_34);
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
          iVar2 = FUN_0001d464(param_1,local_14,local_34);
          if (iVar2 < 0) {
            return -1;
          }
          local_14 = local_14 + iVar2;
          local_34 = local_34 - iVar2;
          if ((int)local_34 < 2) {
            return (int)local_14 - (int)param_2;
          }
        }
        snprintf(local_14,local_34,(char *)(DAT_0001fcc0 + 0x1fbb8));
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
            printf((char *)(DAT_0001fccc + 0x1fca8),DAT_0001fcc8 + 0x1fca0,0x3e6,
                   DAT_0001fcc4 + 0x1fc94,param_2);
            local_34 = (int)local_14 - (int)param_2;
          }
        }
      }
    }
  }
  return local_34;
}



/* ===== FUN_0001fcd0 @ 0001fcd0 size=140 ===== */

undefined4 FUN_0001fcd0(undefined4 *param_1,undefined4 param_2,char *param_3,char *param_4)

{
  *param_1 = 0;
  param_1[1] = param_2;
  param_1[2] = 0;
  strncpy((char *)((int)param_1 + 0xe),param_3,0x1f);
  strncpy((char *)((int)param_1 + 0x2e),param_4,0x3f);
  param_1[0x1c] = 0;
  return 0;
}



/* ===== FUN_0001fd5c @ 0001fd5c size=76 ===== */

undefined4 FUN_0001fd5c(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = 1;
  param_1[1] = 0;
  param_1[2] = param_2;
  return 0;
}



/* ===== FUN_0001fda8 @ 0001fda8 size=96 ===== */

undefined4 FUN_0001fda8(int param_1,undefined4 *param_2)

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



/* ===== FUN_0001fe08 @ 0001fe08 size=112 ===== */

undefined4 FUN_0001fe08(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x74) == 0) {
    uVar1 = FUN_0001b878(4);
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



/* ===== FUN_0001fe78 @ 0001fe78 size=96 ===== */

undefined4 FUN_0001fe78(int param_1,undefined4 *param_2)

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



/* ===== FUN_0001fed8 @ 0001fed8 size=112 ===== */

undefined4 FUN_0001fed8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x7c) == 0) {
    uVar1 = FUN_0001b878(4);
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



/* ===== FUN_0001ff48 @ 0001ff48 size=108 ===== */

undefined4 FUN_0001ff48(int param_1,char *param_2,int param_3)

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



/* ===== FUN_0001ffb4 @ 0001ffb4 size=288 ===== */

undefined4 FUN_0001ffb4(int param_1,char *param_2)

{
  undefined4 uVar1;
  char *__src;
  char *__dest;
  int iVar2;
  time_t local_18;
  byte *local_14;
  
  iVar2 = DAT_000200d4 + 0x1ffd4;
  if (*(int *)(param_1 + 0x78) == 0) {
    uVar1 = FUN_0001b878(0x20);
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
      while ((*(ushort *)(**(int **)(iVar2 + DAT_000200d8) + (uint)*local_14 * 2) & 0x40) != 0) {
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



/* ===== FUN_000200dc @ 000200dc size=284 ===== */

undefined4 FUN_000200dc(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x80) == 0) {
    uVar1 = FUN_0001b878(0x14);
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



/* ===== FUN_000201f8 @ 000201f8 size=220 ===== */

undefined4 FUN_000201f8(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x80) == 0) {
    uVar1 = FUN_0001b878(0x14);
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



/* ===== FUN_000202d4 @ 000202d4 size=96 ===== */

undefined4 FUN_000202d4(int param_1,undefined4 *param_2)

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



/* ===== FUN_00020334 @ 00020334 size=112 ===== */

undefined4 FUN_00020334(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x88) == 0) {
    uVar1 = FUN_0001b878(4);
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



/* ===== FUN_000203a4 @ 000203a4 size=108 ===== */

undefined4 FUN_000203a4(int param_1,char *param_2,int param_3)

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



/* ===== FUN_00020410 @ 00020410 size=168 ===== */

undefined4 FUN_00020410(int param_1,char *param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x90) == 0) {
    uVar1 = FUN_0001b878(0x40);
    *(undefined4 *)(param_1 + 0x90) = uVar1;
  }
  if (*(int *)(param_1 + 0x90) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    if (param_2 == (char *)0x0) {
      strncpy(*(char **)(param_1 + 0x90),(char *)(DAT_000204b8 + 0x204a4),0x3f);
    }
    else {
      strncpy(*(char **)(param_1 + 0x90),param_2,0x3f);
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_0002051c @ 0002051c size=112 ===== */

undefined4 FUN_0002051c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x94) == 0) {
    uVar1 = FUN_0001b878(4);
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



/* ===== FUN_0002058c @ 0002058c size=108 ===== */

undefined4 FUN_0002058c(int param_1,char *param_2,int param_3)

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



/* ===== FUN_000205f8 @ 000205f8 size=168 ===== */

undefined4 FUN_000205f8(int param_1,char *param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar1 = FUN_0001b878(0x40);
    *(undefined4 *)(param_1 + 0x9c) = uVar1;
  }
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    if (param_2 == (char *)0x0) {
      strncpy(*(char **)(param_1 + 0x9c),(char *)(DAT_000206a0 + 0x2068c),0x3f);
    }
    else {
      strncpy(*(char **)(param_1 + 0x9c),param_2,0x3f);
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_00020708 @ 00020708 size=112 ===== */

undefined4 FUN_00020708(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xa4) == 0) {
    uVar1 = FUN_0001b878(4);
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



/* ===== FUN_000207dc @ 000207dc size=112 ===== */

undefined4 FUN_000207dc(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xa0) == 0) {
    uVar1 = FUN_0001b878(4);
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



/* ===== FUN_0002084c @ 0002084c size=292 ===== */

int * FUN_0002084c(int param_1,int param_2)

{
  int *piVar1;
  
  if ((param_1 < 1) || (param_2 < 1)) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = calloc(1,param_2 * param_1 + param_2 * 4 + 0x18);
    if (piVar1 == (int *)0x0) {
      printf((char *)(DAT_00020978 + 0x208e0),DAT_00020974 + 0x208d8,0x16,DAT_00020970 + 0x208cc);
      piVar1 = (int *)0x0;
    }
    else {
      printf((char *)(DAT_0002097c + 0x20918),param_2 * param_1 + param_2 * 4 + 0x18);
      *piVar1 = param_1;
      piVar1[1] = param_2;
      piVar1[4] = (int)(piVar1 + 6);
      piVar1[5] = (int)(piVar1 + param_2 + 6);
    }
  }
  return piVar1;
}



/* ===== FUN_00020980 @ 00020980 size=176 ===== */

undefined4 FUN_00020980(int *param_1,int param_2,int *param_3,int *param_4)

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



/* ===== FUN_00020a30 @ 00020a30 size=172 ===== */

undefined4 FUN_00020a30(int param_1,int param_2)

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



/* ===== FUN_00020adc @ 00020adc size=92 ===== */

undefined4 FUN_00020adc(int param_1,int param_2)

{
  undefined4 extraout_r1;
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    FUN_00023094(param_2 + 1,*(undefined4 *)(param_1 + 4));
    uVar1 = extraout_r1;
  }
  return uVar1;
}



/* ===== FUN_00020b38 @ 00020b38 size=60 ===== */

undefined4 FUN_00020b38(int param_1)

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



/* ===== FUN_00020b74 @ 00020b74 size=60 ===== */

undefined4 FUN_00020b74(int param_1)

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



/* ===== FUN_00020bb0 @ 00020bb0 size=168 ===== */

undefined4 FUN_00020bb0(int param_1)

{
  int extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    FUN_00023094(*(int *)(param_1 + 0xc) + 1,*(undefined4 *)(param_1 + 4));
    if (extraout_r1 == *(int *)(param_1 + 8)) {
      uVar1 = 0xffffffff;
    }
    else {
      FUN_00023094(*(int *)(param_1 + 0xc) + 1,*(undefined4 *)(param_1 + 4));
      *(undefined4 *)(param_1 + 0xc) = extraout_r1_00;
      uVar1 = *(undefined4 *)(param_1 + 0xc);
    }
  }
  return uVar1;
}



/* ===== FUN_00020c58 @ 00020c58 size=136 ===== */

undefined4 FUN_00020c58(int param_1)

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
    FUN_00023094(*(int *)(param_1 + 8) + 1,*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 8) = extraout_r1;
    uVar1 = *(undefined4 *)(param_1 + 8);
  }
  return uVar1;
}



/* ===== FUN_00020ce0 @ 00020ce0 size=48 ===== */

void FUN_00020ce0(void *param_1)

{
  if (param_1 != (void *)0x0) {
    free(param_1);
  }
  return;
}



/* ===== FUN_00020d10 @ 00020d10 size=636 ===== */

undefined1 * FUN_00020d10(undefined1 *param_1,int param_2,byte *param_3,uint param_4)

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
      *local_c = *(undefined1 *)(DAT_00020f8c + 0x20e18 + (uint)(bVar1 >> 2));
      local_c[1] = *(undefined1 *)(DAT_00020f90 + 0x20e40 + ((uVar4 & 0x3f00000) >> 0x14));
      puVar3 = local_c + 3;
      local_c[2] = *(undefined1 *)
                    (DAT_00020f94 + 0x20e68 + ((uVar4 | (uint)bVar2 << 8) >> 0xe & 0x3f));
      local_c = local_c + 4;
      *puVar3 = *(undefined1 *)(DAT_00020f98 + 0x20e90 + (((uint)bVar2 << 8 & 0x3f00) >> 8));
    }
    local_10 = 0;
    for (; local_18 != 0; local_18 = local_18 - 1) {
      local_10 = local_10 * 0x100 + (uint)*local_2c;
      local_14 = local_14 + 8;
      local_2c = local_2c + 1;
    }
    for (; 0 < (int)local_14; local_14 = local_14 - 6) {
      *local_c = *(undefined1 *)
                  (DAT_00020f9c + 0x20f20 + ((uint)(local_10 << 6) >> (local_14 & 0xff) & 0x3f));
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



/* ===== FUN_00020fa0 @ 00020fa0 size=476 ===== */

char * FUN_00020fa0(char *param_1,int param_2,int *param_3)

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



/* ===== FUN_0002117c @ 0002117c size=588 ===== */

bool FUN_0002117c(int param_1,int param_2,void *param_3)

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
           ) && (iVar1 = FUN_00020fa0(local_c,local_14,&local_20), iVar1 != 0))))) {
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
      printf((char *)(DAT_000213d0 + 0x212cc),DAT_000213cc + 0x212c4,0x86,DAT_000213c8 + 0x212b8,
             local_20);
      if (0x40 < (int)local_20) {
        local_20 = 0x40;
      }
      memcpy(param_3,local_10,local_20);
      *(size_t *)((int)param_3 + 0x80) = local_20;
      local_18 = local_18 + 1;
    }
    if (local_19 == 8) {
      printf((char *)(DAT_000213dc + 0x21344),DAT_000213d8 + 0x2133c,0x8e,DAT_000213d4 + 0x21330,
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



/* ===== FUN_000213e0 @ 000213e0 size=736 ===== */

bool FUN_000213e0(int param_1,int param_2,void *param_3)

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
         (iVar1 = FUN_00020fa0(local_c,local_14,&local_20), iVar1 != 0))) {
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
      printf((char *)(DAT_000216c8 + 0x21548),DAT_000216c4 + 0x21540,0xba,DAT_000216c0 + 0x21534,
             local_20);
      if (0x40 < (int)local_20) {
        local_20 = 0x40;
      }
      memcpy(param_3,local_10,local_20);
      *(size_t *)((int)param_3 + 0xc0) = local_20;
      local_18 = local_18 + 1;
    }
    if (local_19 == 0x21) {
      printf((char *)(DAT_000216d4 + 0x215c0),DAT_000216d0 + 0x215b8,0xc2,DAT_000216cc + 0x215ac,
             local_20);
      if (0x40 < (int)local_20) {
        local_20 = 0x40;
      }
      memcpy((void *)((int)param_3 + 0x40),local_10,local_20);
      *(size_t *)((int)param_3 + 0xc4) = local_20;
      local_18 = local_18 + 1;
    }
    if (local_19 == 0x22) {
      printf((char *)(DAT_000216e0 + 0x2163c),DAT_000216dc + 0x21634,0xca,DAT_000216d8 + 0x21628,
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



/* ===== FUN_000216e4 @ 000216e4 size=236 ===== */

undefined4 FUN_000216e4(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 != 4) {
    printf((char *)(DAT_000217d8 + 0x21728),DAT_000217d4 + 0x21720,0xdb,DAT_000217d0 + 0x21714);
    return 0xffffffff;
  }
  iVar1 = *param_1;
  if (iVar1 == 24000) {
code_r0x000217b4:
    *param_3 = iVar1;
    uVar2 = 1;
  }
  else {
    if (iVar1 < 0x5dc1) {
      if (iVar1 == 16000) goto code_r0x000217b4;
    }
    else if ((iVar1 == 32000) || (iVar1 == 40000)) goto code_r0x000217b4;
    printf((char *)(DAT_000217e4 + 0x217a8),DAT_000217e0 + 0x217a0,0xe8,DAT_000217dc + 0x21794);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== FUN_000217e8 @ 000217e8 size=56 ===== */

undefined4 FUN_000217e8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0002117c(param_1,param_2,param_3);
  return uVar1;
}



/* ===== FUN_00021820 @ 00021820 size=56 ===== */

undefined4 FUN_00021820(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000213e0(param_1,param_2,param_3);
  return uVar1;
}



/* ===== FUN_00021858 @ 00021858 size=556 ===== */

int FUN_00021858(undefined4 param_1,undefined4 param_2,int param_3,char *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *local_c;
  
  iVar1 = sprintf(param_4,(char *)(DAT_00021a84 + 0x2188c),param_1);
  pcVar4 = param_4 + iVar1;
  iVar1 = sprintf(pcVar4,(char *)(DAT_00021a88 + 0x218b4));
  iVar2 = sprintf(pcVar4 + iVar1,(char *)(DAT_00021a8c + 0x218e4),param_1,param_2);
  local_c = pcVar4 + iVar1 + iVar2;
  if ((*(int *)(param_3 + 0x80) == 0) || (*(int *)(param_3 + 0x84) == 0)) {
    iVar1 = sprintf(local_c,(char *)(DAT_00021a9c + 0x21a50),param_1);
    local_c = local_c + iVar1;
  }
  else {
    uVar5 = *(undefined4 *)(param_3 + 0x80);
    uVar6 = *(undefined4 *)(param_3 + 0x84);
    iVar1 = sprintf(local_c,(char *)(DAT_00021a90 + 0x21958),param_1);
    local_c = local_c + iVar1;
    FUN_00020d10(local_c,param_5 - ((int)local_c - (int)param_4),param_3,uVar5);
    sVar3 = strlen(local_c);
    iVar1 = sprintf(local_c + sVar3,(char *)(DAT_00021a94 + 0x219bc));
    pcVar4 = local_c + sVar3 + iVar1;
    FUN_00020d10(pcVar4,param_5 - ((int)pcVar4 - (int)param_4),param_3 + 0x40,uVar6);
    sVar3 = strlen(pcVar4);
    iVar1 = sprintf(pcVar4 + sVar3,(char *)(DAT_00021a98 + 0x21a20));
    local_c = pcVar4 + sVar3 + iVar1;
  }
  return (int)local_c - (int)param_4;
}



/* ===== FUN_00021aa0 @ 00021aa0 size=688 ===== */

int FUN_00021aa0(undefined4 param_1,undefined4 param_2,int param_3,char *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *local_c;
  
  iVar1 = sprintf(param_4,(char *)(DAT_00021d50 + 0x21ad4),param_1);
  pcVar4 = param_4 + iVar1;
  iVar1 = sprintf(pcVar4,(char *)(DAT_00021d54 + 0x21afc));
  iVar2 = sprintf(pcVar4 + iVar1,(char *)(DAT_00021d58 + 0x21b2c),param_1,param_2);
  local_c = pcVar4 + iVar1 + iVar2;
  if (((*(int *)(param_3 + 0xc0) != 0) && (*(int *)(param_3 + 0xc4) != 0)) &&
     (*(int *)(param_3 + 200) != 0)) {
    uVar5 = *(undefined4 *)(param_3 + 0xc0);
    uVar6 = *(undefined4 *)(param_3 + 0xc4);
    uVar7 = *(undefined4 *)(param_3 + 200);
    iVar1 = sprintf(local_c,(char *)(DAT_00021d5c + 0x21bc8),param_1);
    iVar2 = sprintf(local_c + iVar1,(char *)(DAT_00021d60 + 0x21bf0));
    pcVar4 = local_c + iVar1 + iVar2;
    FUN_00020d10(pcVar4,param_5 - ((int)pcVar4 - (int)param_4),param_3,uVar5);
    sVar3 = strlen(pcVar4);
    iVar1 = sprintf(pcVar4 + sVar3,(char *)(DAT_00021d64 + 0x21c54));
    pcVar4 = pcVar4 + sVar3 + iVar1;
    FUN_00020d10(pcVar4,param_5 - ((int)pcVar4 - (int)param_4),param_3 + 0x40,uVar6);
    sVar3 = strlen(pcVar4);
    iVar1 = sprintf(pcVar4 + sVar3,(char *)(DAT_00021d68 + 0x21cb8));
    pcVar4 = pcVar4 + sVar3 + iVar1;
    FUN_00020d10(pcVar4,param_5 - ((int)pcVar4 - (int)param_4),param_3 + 0x80,uVar7);
    sVar3 = strlen(pcVar4);
    iVar1 = sprintf(pcVar4 + sVar3,(char *)(DAT_00021d6c + 0x21d1c));
    local_c = pcVar4 + sVar3 + iVar1;
  }
  return (int)local_c - (int)param_4;
}



/* ===== FUN_00021d70 @ 00021d70 size=196 ===== */

char * FUN_00021d70(undefined4 param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  int iVar1;
  int iVar2;
  char *__s;
  
  iVar1 = sprintf(param_4,(char *)(DAT_00021e34 + 0x21da4),param_1);
  __s = param_4 + iVar1;
  iVar1 = sprintf(__s,(char *)(DAT_00021e38 + 0x21dcc));
  iVar2 = sprintf(__s + iVar1,(char *)(DAT_00021e3c + 0x21e04),param_1,param_2,param_3);
  return __s + iVar1 + (iVar2 - (int)param_4);
}



/* ===== FUN_00021e40 @ 00021e40 size=196 ===== */

char * FUN_00021e40(undefined4 param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  int iVar1;
  int iVar2;
  char *__s;
  
  iVar1 = sprintf(param_4,(char *)(DAT_00021f04 + 0x21e74),param_1);
  __s = param_4 + iVar1;
  iVar1 = sprintf(__s,(char *)(DAT_00021f08 + 0x21e9c));
  iVar2 = sprintf(__s + iVar1,(char *)(DAT_00021f0c + 0x21ed4),param_1,param_2,param_3);
  return __s + iVar1 + (iVar2 - (int)param_4);
}



/* ===== FUN_00021f10 @ 00021f10 size=252 ===== */

char * FUN_00021f10(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint *param_4,
                   char *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *__s;
  
  iVar1 = sprintf(param_5,(char *)(DAT_0002200c + 0x21f44),param_1);
  __s = param_5 + iVar1;
  iVar1 = sprintf(__s,(char *)(DAT_00022010 + 0x21f6c));
  if (*param_4 == 0) {
    uVar3 = 0x20;
  }
  else {
    uVar3 = *param_4 / 1000;
  }
  iVar2 = sprintf(__s + iVar1,(char *)(DAT_00022014 + 0x21fdc),param_1,uVar3,param_2,param_3);
  return __s + iVar1 + (iVar2 - (int)param_5);
}



/* ===== FUN_00022018 @ 00022018 size=1436 ===== */

int FUN_00022018(byte *param_1,byte *param_2,size_t param_3,undefined4 param_4,uint param_5,
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
    __hostlong = FUN_000230b4((int)lVar2,
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



/* ===== FUN_000225b4 @ 000225b4 size=1492 ===== */

int FUN_000225b4(byte *param_1,byte *param_2,size_t param_3,undefined4 param_4,uint param_5,
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
    __hostlong = FUN_000230b4((int)lVar3,
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



/* ===== FUN_00022b88 @ 00022b88 size=792 ===== */

int FUN_00022b88(byte *param_1,void *param_2,size_t param_3,undefined4 param_4,uint param_5,
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
    __hostlong = FUN_000230b4((int)lVar1,
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



/* ===== FUN_00022ea0 @ 00022ea0 size=80 ===== */

undefined4
FUN_00022ea0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00022b88(param_1,param_2,param_3,param_6,param_5,param_6,param_7,param_8);
  return uVar1;
}



/* ===== FUN_00022ef0 @ 00022ef0 size=168 ===== */

ulonglong FUN_00022ef0(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  if (param_2 - 1 == 0) {
    return CONCAT44(param_2,param_1);
  }
  if (param_2 == 0) {
    uVar1 = raise(8);
    return (ulonglong)uVar1;
  }
  if (param_1 <= param_2) {
    return CONCAT44(param_2,(uint)(param_1 == param_2));
  }
  if ((param_2 & param_2 - 1) == 0) {
    return CONCAT44(param_2,param_1 >> (0x1fU - LZCOUNT(param_2) & 0xff));
  }
  uVar2 = param_2 << (LZCOUNT(param_2) - LZCOUNT(param_1) & 0xffU);
  uVar1 = 1 << (LZCOUNT(param_2) - LZCOUNT(param_1) & 0xffU);
  uVar3 = 0;
  while( true ) {
    if (uVar2 <= param_1) {
      param_1 = param_1 - uVar2;
      uVar3 = uVar3 | uVar1;
    }
    if (uVar2 >> 1 <= param_1) {
      param_1 = param_1 - (uVar2 >> 1);
      uVar3 = uVar3 | uVar1 >> 1;
    }
    if (uVar2 >> 2 <= param_1) {
      param_1 = param_1 - (uVar2 >> 2);
      uVar3 = uVar3 | uVar1 >> 2;
    }
    if (uVar2 >> 3 <= param_1) {
      param_1 = param_1 - (uVar2 >> 3);
      uVar3 = uVar3 | uVar1 >> 3;
    }
    bVar4 = param_1 == 0;
    if (!bVar4) {
      uVar1 = uVar1 >> 4;
      bVar4 = uVar1 == 0;
    }
    if (bVar4) break;
    uVar2 = uVar2 >> 4;
  }
  return CONCAT44(uVar2,uVar3);
}



/* ===== FUN_00022fc0 @ 00022fc0 size=196 ===== */

uint FUN_00022fc0(uint param_1,uint param_2)

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



/* ===== FUN_00023094 @ 00023094 size=48 ===== */

void FUN_00023094(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_00022fc0();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_000230b4 @ 000230b4 size=76 ===== */

void FUN_000230b4(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  if (param_4 != 0 || param_3 != 0) {
    FUN_00023100();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_00023100 @ 00023100 size=328 ===== */

undefined8 FUN_00023100(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

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



/* ===== _fini @ 00023248 size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00038000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00038010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 00038014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_start @ 00038018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_start(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen64 @ 0003801c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strstr @ 00038020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_DestroyChn @ 00038024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_DestroyChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_stop @ 00038028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_stop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 0003802c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 00038030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevAttr @ 00038034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetDevAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_StartPipe @ 00038038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_StartPipe(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_ChnSaveFile @ 0003803c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_ChnSaveFile(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::listen @ 00038040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int listen(int __fd,int __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 00038044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fcntl @ 00038048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fcntl(int __fd,int __cmd,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_start @ 0003804c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_start(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 00038050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevBindPipe @ 00038054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetDevBindPipe(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_deinit @ 00038058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_deinit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetMjpegParam @ 0003805c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetMjpegParam(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 00038060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_QueryChnStatus @ 00038064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_QueryChnStatus(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usleep @ 00038068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::signal @ 0003806c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId @ 00038070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 00038074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_Handle2VirAddr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SendFrame @ 00038078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SendFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChnExt @ 0003807c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_EnableChnExt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::recv @ 00038080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recv(int __fd,void *__buf,size_t __n,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_getCamInfos @ 00038084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_getCamInfos(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 00038088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 0003808c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fsync @ 00038090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fsync(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sleep @ 00038094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::send @ 00038098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t send(int __fd,void *__buf,size_t __n,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_create @ 0003809c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableDev @ 000380a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_EnableDev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 000380a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_destroy @ 000380a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_destroy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 000380ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetChnRefBufShareAttr @ 000380b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetChnRefBufShareAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_ReleaseStream @ 000380b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_ReleaseStream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::time @ 000380b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_prepare @ 000380bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_prepare(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 000380c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_ReleaseMB @ 000380c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_ReleaseMB(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 000380c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_ae_getExpSwAttr @ 000380cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_user_api2_ae_getExpSwAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 000380d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetEptz @ 000380d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetEptz(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setlinebuf @ 000380d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void setlinebuf(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::select @ 000380dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetRcParam @ 000380e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetRcParam(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnAttr @ 000380e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetChnAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_join @ 000380e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChn @ 000380ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_DisableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strrchr @ 000380f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 000380f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::inet_ntoa @ 000380f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * inet_ntoa(in_addr __in)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_EnableMotionDeblur @ 000380fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_EnableMotionDeblur(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_aldch_v21_SetAttrib @ 00038100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_user_api2_aldch_v21_SetAttrib(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setsockopt @ 00038104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_preInit_devBufCnt @ 00038108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_preInit_devBufCnt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_GetMB @ 0003810c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_GetMB(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 00038110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetComboAttr @ 00038114 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetComboAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clock_gettime @ 00038118 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_ReleaseChnFrame @ 0003811c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_ReleaseChnFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_MmzFlushCache @ 00038120 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_MmzFlushCache(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 00038124 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetJpegParam @ 00038128 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetJpegParam(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_setMirrorFlip @ 0003812c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_setMirrorFlip(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChnExt @ 00038130 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_DisableChnExt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::raise @ 00038134 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ntohs @ 00038138 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint16_t ntohs(uint16_t __netshort)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::recvfrom @ 0003813c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recvfrom(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,socklen_t *__addr_len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_CreateChn @ 00038140 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_CreateChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::htonl @ 00038144 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint32_t htonl(uint32_t __hostlong)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_create @ 00038148 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_create(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sscanf @ 0003814c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetEptz @ 00038150 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetEptz(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memmove @ 00038154 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_StopPipe @ 00038158 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_StopPipe(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_init @ 0003815c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::htons @ 00038160 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint16_t htons(uint16_t __hostshort)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gettimeofday @ 00038164 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 00038168 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableDev @ 0003816c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_DisableDev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 00038170 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetChnFrame @ 00038174 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetChnFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 00038178 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StopRecvFrame @ 0003817c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_StopRecvFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 00038180 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00038184 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 00038188 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Exit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_ae_setExpSwAttr @ 0003818c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_user_api2_ae_setExpSwAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetChnBufWrapAttr @ 00038190 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetChnBufWrapAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fileno @ 00038194 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fileno(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_stop @ 00038198 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_stop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ctime @ 0003819c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * ctime(time_t *__timer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sendto @ 000381a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t sendto(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,socklen_t __addr_len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 000381a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StartRecvFrame @ 000381a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_StartRecvFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt_long @ 000381ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void getopt_long(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_EnableSvc @ 000381b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_EnableSvc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 000381b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevAttr @ 000381b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetDevAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_prepare @ 000381bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_prepare(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm @ 000381c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_GetStream @ 000381c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_GetStream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 000381c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::accept @ 000381cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int accept(int __fd,sockaddr *__addr,socklen_t *__addr_len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::bind @ 000381d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnWrapBufAttr @ 000381d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetChnWrapBufAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_setMulCamConc @ 000381d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_setMulCamConc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 000381dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevIsEnable @ 000381e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetDevIsEnable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::socket @ 000381e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_switch_scene @ 000381e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_switch_scene(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_aldch_v21_GetAttrib @ 000381ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_user_api2_aldch_v21_GetAttrib(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcat @ 000381f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_LOG @ 000381f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_LOG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setenv @ 000381f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setenv(char *__name,char *__value,int __replace)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChn @ 000381fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_EnableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


