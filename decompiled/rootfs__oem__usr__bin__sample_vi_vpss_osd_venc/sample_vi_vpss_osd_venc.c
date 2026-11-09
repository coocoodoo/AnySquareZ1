// sample_vi_vpss_osd_venc — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 000126e0 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 00012704 size=12 ===== */

void RK_MPI_SYS_Exit(void)

{
  (*(code *)PTR_RK_MPI_SYS_Exit_0003b00c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Bind @ 00012710 size=12 ===== */

void RK_MPI_SYS_Bind(void)

{
  (*(code *)PTR_RK_MPI_SYS_Bind_0003b010)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_SetVProcDev @ 0001271c size=12 ===== */

void RK_MPI_VPSS_SetVProcDev(void)

{
  (*(code *)PTR_RK_MPI_VPSS_SetVProcDev_0003b014)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm @ 00012728 size=12 ===== */

void rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm_0003b018)();
  return;
}



/* ===== <EXTERNAL>::bind @ 00012734 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_bind_0003b01c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_QueryChnStatus @ 00012740 size=12 ===== */

void RK_MPI_VI_QueryChnStatus(void)

{
  (*(code *)PTR_RK_MPI_VI_QueryChnStatus_0003b020)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 0001274c size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_0003b024)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnWrapBufAttr @ 00012758 size=12 ===== */

void RK_MPI_VI_SetChnWrapBufAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetChnWrapBufAttr_0003b028)();
  return;
}



/* ===== <EXTERNAL>::htons @ 00012764 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint16_t htons(uint16_t __hostshort)

{
  uint16_t uVar1;
  
  uVar1 = (*(code *)PTR_htons_0003b02c)(__hostshort);
  return uVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_GetStream @ 00012770 size=12 ===== */

void RK_MPI_VENC_GetStream(void)

{
  (*(code *)PTR_RK_MPI_VENC_GetStream_0003b030)();
  return;
}



/* ===== <EXTERNAL>::calloc @ 0001277c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_0003b034)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 00012788 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_0003b038)();
  return piVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_GetGrpCrop @ 00012794 size=12 ===== */

void RK_MPI_VPSS_GetGrpCrop(void)

{
  (*(code *)PTR_RK_MPI_VPSS_GetGrpCrop_0003b03c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_EnableMotionDeblur @ 000127a0 size=12 ===== */

void RK_MPI_VENC_EnableMotionDeblur(void)

{
  (*(code *)PTR_RK_MPI_VENC_EnableMotionDeblur_0003b040)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetComboAttr @ 000127ac size=12 ===== */

void RK_MPI_VENC_SetComboAttr(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetComboAttr_0003b044)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_destroy @ 000127b8 size=12 ===== */

void rk_aiq_uapi2_camgroup_destroy(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_destroy_0003b048)();
  return;
}



/* ===== <EXTERNAL>::clock_gettime @ 000127c4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_clock_gettime_0003b04c)(__clock_id);
  return iVar1;
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_ae_setExpSwAttr @ 000127d0 size=12 ===== */

void rk_aiq_user_api2_ae_setExpSwAttr(void)

{
  (*(code *)PTR_rk_aiq_user_api2_ae_setExpSwAttr_0003b050)();
  return;
}



/* ===== <EXTERNAL>::fwrite @ 000127dc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_0003b054)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::system @ 000127e8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int system(char *__command)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_system_0003b058)(__command);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChn @ 00012800 size=12 ===== */

void RK_MPI_VI_DisableChn(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableChn_0003b060)();
  return;
}



/* ===== <EXTERNAL>::usleep @ 0001280c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_usleep_0003b064)(__useconds);
  return iVar1;
}



/* ===== <EXTERNAL>::memcpy @ 00012818 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_0003b068)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_SetChnCrop @ 00012824 size=12 ===== */

void RK_MPI_VPSS_SetChnCrop(void)

{
  (*(code *)PTR_RK_MPI_VPSS_SetChnCrop_0003b06c)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_setMulCamConc @ 00012830 size=12 ===== */

void rk_aiq_uapi2_sysctl_setMulCamConc(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_setMulCamConc_0003b070)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_RGN_DetachFromChn @ 0001283c size=12 ===== */

void RK_MPI_RGN_DetachFromChn(void)

{
  (*(code *)PTR_RK_MPI_RGN_DetachFromChn_0003b074)();
  return;
}



/* ===== <EXTERNAL>::sleep @ 00012848 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_sleep_0003b078)(__seconds);
  return uVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_CreateChn @ 00012854 size=12 ===== */

void RK_MPI_VENC_CreateChn(void)

{
  (*(code *)PTR_RK_MPI_VENC_CreateChn_0003b07c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_ReleaseChnFrame @ 00012860 size=12 ===== */

void RK_MPI_VI_ReleaseChnFrame(void)

{
  (*(code *)PTR_RK_MPI_VI_ReleaseChnFrame_0003b080)();
  return;
}



/* ===== <EXTERNAL>::send @ 0001286c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t send(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_send_0003b084)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_create @ 00012878 size=12 ===== */

void rk_aiq_uapi2_camgroup_create(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_create_0003b088)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_GetMB @ 00012884 size=12 ===== */

void RK_MPI_MB_GetMB(void)

{
  (*(code *)PTR_RK_MPI_MB_GetMB_0003b08c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_EnableSvc @ 00012890 size=12 ===== */

void RK_MPI_VENC_EnableSvc(void)

{
  (*(code *)PTR_RK_MPI_VENC_EnableSvc_0003b090)();
  return;
}



/* ===== <EXTERNAL>::gettimeofday @ 0001289c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_gettimeofday_0003b094)(__tv);
  return iVar1;
}



/* ===== <EXTERNAL>::strcat @ 000128a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcat_0003b098)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevAttr @ 000128b4 size=12 ===== */

void RK_MPI_VI_GetDevAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_GetDevAttr_0003b09c)();
  return;
}



/* ===== <EXTERNAL>::setenv @ 000128c0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setenv(char *__name,char *__value,int __replace)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setenv_0003b0a0)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::malloc @ 000128cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0003b0a4)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_aldch_v21_SetAttrib @ 000128d8 size=12 ===== */

void rk_aiq_user_api2_aldch_v21_SetAttrib(void)

{
  (*(code *)PTR_rk_aiq_user_api2_aldch_v21_SetAttrib_0003b0a8)();
  return;
}



/* ===== <EXTERNAL>::strrchr @ 000128e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strrchr_0003b0ac)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::strncmp @ 000128f0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_0003b0b0)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::fopen64 @ 00012908 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen64_0003b0b8)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::RK_MPI_CAL_VGS_GetPicBufferSize @ 00012914 size=12 ===== */

void RK_MPI_CAL_VGS_GetPicBufferSize(void)

{
  (*(code *)PTR_RK_MPI_CAL_VGS_GetPicBufferSize_0003b0bc)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_setMirrorFlip @ 00012920 size=12 ===== */

void rk_aiq_uapi2_setMirrorFlip(void)

{
  (*(code *)PTR_rk_aiq_uapi2_setMirrorFlip_0003b0c0)();
  return;
}



/* ===== <EXTERNAL>::setlinebuf @ 0001292c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void setlinebuf(FILE *__stream)

{
  (*(code *)PTR_setlinebuf_0003b0c4)(__stream);
  return;
}



/* ===== <EXTERNAL>::recv @ 00012938 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recv(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_recv_0003b0c8)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::strlen @ 00012944 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_0003b0cc)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::ctime @ 00012950 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * ctime(time_t *__timer)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_ctime_0003b0d0)(__timer);
  return pcVar1;
}



/* ===== <EXTERNAL>::sendto @ 0001295c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t sendto(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,socklen_t __addr_len)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_sendto_0003b0d4)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_GetChnCrop @ 00012968 size=12 ===== */

void RK_MPI_VPSS_GetChnCrop(void)

{
  (*(code *)PTR_RK_MPI_VPSS_GetChnCrop_0003b0d8)();
  return;
}



/* ===== <EXTERNAL>::fcntl @ 00012974 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fcntl(int __fd,int __cmd,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fcntl_0003b0dc)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::snprintf @ 00012980 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_0003b0e0)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::htonl @ 0001298c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint32_t htonl(uint32_t __hostlong)

{
  uint32_t uVar1;
  
  uVar1 = (*(code *)PTR_htonl_0003b0e4)(__hostlong);
  return uVar1;
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_aldch_v21_GetAttrib @ 00012998 size=12 ===== */

void rk_aiq_user_api2_aldch_v21_GetAttrib(void)

{
  (*(code *)PTR_rk_aiq_user_api2_aldch_v21_GetAttrib_0003b0e8)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_RGN_Destroy @ 000129a4 size=12 ===== */

void RK_MPI_RGN_Destroy(void)

{
  (*(code *)PTR_RK_MPI_RGN_Destroy_0003b0ec)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnAttr @ 000129b0 size=12 ===== */

void RK_MPI_VI_SetChnAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetChnAttr_0003b0f0)();
  return;
}



/* ===== <EXTERNAL>::select @ 000129bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_select_0003b0f4)(__nfds);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_UnBind @ 000129c8 size=12 ===== */

void RK_MPI_SYS_UnBind(void)

{
  (*(code *)PTR_RK_MPI_SYS_UnBind_0003b0f8)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SendFrame @ 000129d4 size=12 ===== */

void RK_MPI_VENC_SendFrame(void)

{
  (*(code *)PTR_RK_MPI_VENC_SendFrame_0003b0fc)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetChnRefBufShareAttr @ 000129e0 size=12 ===== */

void RK_MPI_VENC_SetChnRefBufShareAttr(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetChnRefBufShareAttr_0003b100)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_ReleaseChnFrame @ 000129ec size=12 ===== */

void RK_MPI_VPSS_ReleaseChnFrame(void)

{
  (*(code *)PTR_RK_MPI_VPSS_ReleaseChnFrame_0003b104)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_prepare @ 000129f8 size=12 ===== */

void rk_aiq_uapi2_camgroup_prepare(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_prepare_0003b108)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 00012a04 size=12 ===== */

void RK_MPI_SYS_Init(void)

{
  (*(code *)PTR_RK_MPI_SYS_Init_0003b10c)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId @ 00012a10 size=12 ===== */

void rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId_0003b110)();
  return;
}



/* ===== <EXTERNAL>::memmove @ 00012a1c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_0003b114)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::fclose @ 00012a28 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_0003b118)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_RGN_SetBitMap @ 00012a34 size=12 ===== */

void RK_MPI_RGN_SetBitMap(void)

{
  (*(code *)PTR_RK_MPI_RGN_SetBitMap_0003b11c)();
  return;
}



/* ===== <EXTERNAL>::setsockopt @ 00012a40 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setsockopt_0003b120)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::fread @ 00012a4c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fread_0003b124)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_GetChnFrame @ 00012a58 size=12 ===== */

void RK_MPI_VPSS_GetChnFrame(void)

{
  (*(code *)PTR_RK_MPI_VPSS_GetChnFrame_0003b128)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_EnableChn @ 00012a64 size=12 ===== */

void RK_MPI_VPSS_EnableChn(void)

{
  (*(code *)PTR_RK_MPI_VPSS_EnableChn_0003b12c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_RGN_AttachToChn @ 00012a70 size=12 ===== */

void RK_MPI_RGN_AttachToChn(void)

{
  (*(code *)PTR_RK_MPI_RGN_AttachToChn_0003b130)();
  return;
}



/* ===== <EXTERNAL>::RK_LOG @ 00012a7c size=12 ===== */

void RK_LOG(void)

{
  (*(code *)PTR_RK_LOG_0003b134)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_getCamInfos @ 00012a88 size=12 ===== */

void rk_aiq_uapi2_camgroup_getCamInfos(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_getCamInfos_0003b138)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_start @ 00012a94 size=12 ===== */

void rk_aiq_uapi2_camgroup_start(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_start_0003b13c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StopRecvFrame @ 00012aa0 size=12 ===== */

void RK_MPI_VENC_StopRecvFrame(void)

{
  (*(code *)PTR_RK_MPI_VENC_StopRecvFrame_0003b140)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_StartGrp @ 00012aac size=12 ===== */

void RK_MPI_VPSS_StartGrp(void)

{
  (*(code *)PTR_RK_MPI_VPSS_StartGrp_0003b144)();
  return;
}



/* ===== <EXTERNAL>::time @ 00012ab8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_0003b148)(__timer);
  return tVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_DisableChn @ 00012ac4 size=12 ===== */

void RK_MPI_VPSS_DisableChn(void)

{
  (*(code *)PTR_RK_MPI_VPSS_DisableChn_0003b14c)();
  return;
}



/* ===== <EXTERNAL>::pthread_create @ 00012ad0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_0003b150)(__newthread);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_RGN_GetDisplayAttr @ 00012adc size=12 ===== */

void RK_MPI_RGN_GetDisplayAttr(void)

{
  (*(code *)PTR_RK_MPI_RGN_GetDisplayAttr_0003b154)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetRcParam @ 00012ae8 size=12 ===== */

void RK_MPI_VENC_SetRcParam(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetRcParam_0003b158)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_SendFrame @ 00012af4 size=12 ===== */

void RK_MPI_VPSS_SendFrame(void)

{
  (*(code *)PTR_RK_MPI_VPSS_SendFrame_0003b15c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_RGN_SetDisplayAttr @ 00012b00 size=12 ===== */

void RK_MPI_RGN_SetDisplayAttr(void)

{
  (*(code *)PTR_RK_MPI_RGN_SetDisplayAttr_0003b160)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChnExt @ 00012b0c size=12 ===== */

void RK_MPI_VI_DisableChnExt(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableChnExt_0003b164)();
  return;
}



/* ===== <EXTERNAL>::close @ 00012b18 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_0003b168)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetChnFrame @ 00012b24 size=12 ===== */

void RK_MPI_VI_GetChnFrame(void)

{
  (*(code *)PTR_RK_MPI_VI_GetChnFrame_0003b16c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChnExt @ 00012b30 size=12 ===== */

void RK_MPI_VI_EnableChnExt(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableChnExt_0003b170)();
  return;
}



/* ===== <EXTERNAL>::sscanf @ 00012b3c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sscanf_0003b174)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::strncpy @ 00012b48 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_0003b178)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetChnBufWrapAttr @ 00012b54 size=12 ===== */

void RK_MPI_VENC_SetChnBufWrapAttr(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetChnBufWrapAttr_0003b17c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevBindPipe @ 00012b60 size=12 ===== */

void RK_MPI_VI_SetDevBindPipe(void)

{
  (*(code *)PTR_RK_MPI_VI_SetDevBindPipe_0003b180)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_SetChnAttr @ 00012b6c size=12 ===== */

void RK_MPI_VPSS_SetChnAttr(void)

{
  (*(code *)PTR_RK_MPI_VPSS_SetChnAttr_0003b184)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_prepare @ 00012b78 size=12 ===== */

void rk_aiq_uapi2_sysctl_prepare(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_prepare_0003b188)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevIsEnable @ 00012b84 size=12 ===== */

void RK_MPI_VI_GetDevIsEnable(void)

{
  (*(code *)PTR_RK_MPI_VI_GetDevIsEnable_0003b18c)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_init @ 00012b90 size=12 ===== */

void rk_aiq_uapi2_sysctl_init(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_init_0003b190)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableDev @ 00012b9c size=12 ===== */

void RK_MPI_VI_EnableDev(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableDev_0003b194)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_start @ 00012ba8 size=12 ===== */

void rk_aiq_uapi2_sysctl_start(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_start_0003b198)();
  return;
}



/* ===== <EXTERNAL>::fflush @ 00012bb4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_0003b19c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 00012bc0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0003b1a0)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::RK_MPI_RGN_Create @ 00012bcc size=12 ===== */

void RK_MPI_RGN_Create(void)

{
  (*(code *)PTR_RK_MPI_RGN_Create_0003b1a4)();
  return;
}



/* ===== <EXTERNAL>::inet_ntoa @ 00012bd8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * inet_ntoa(in_addr __in)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_inet_ntoa_0003b1a8)(__in.s_addr);
  return pcVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_CreateGrp @ 00012be4 size=12 ===== */

void RK_MPI_VPSS_CreateGrp(void)

{
  (*(code *)PTR_RK_MPI_VPSS_CreateGrp_0003b1ac)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_ae_getExpSwAttr @ 00012bf0 size=12 ===== */

void rk_aiq_user_api2_ae_getExpSwAttr(void)

{
  (*(code *)PTR_rk_aiq_user_api2_ae_getExpSwAttr_0003b1b0)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_preInit_devBufCnt @ 00012bfc size=12 ===== */

void rk_aiq_uapi2_sysctl_preInit_devBufCnt(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_preInit_devBufCnt_0003b1b4)();
  return;
}



/* ===== <EXTERNAL>::fprintf @ 00012c08 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_0003b1b8)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::ntohs @ 00012c14 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint16_t ntohs(uint16_t __netshort)

{
  uint16_t uVar1;
  
  uVar1 = (*(code *)PTR_ntohs_0003b1bc)(__netshort);
  return uVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_GetVProcDev @ 00012c20 size=12 ===== */

void RK_MPI_VPSS_GetVProcDev(void)

{
  (*(code *)PTR_RK_MPI_VPSS_GetVProcDev_0003b1c0)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_ChnSaveFile @ 00012c2c size=12 ===== */

void RK_MPI_VI_ChnSaveFile(void)

{
  (*(code *)PTR_RK_MPI_VI_ChnSaveFile_0003b1c4)();
  return;
}



/* ===== <EXTERNAL>::abort @ 00012c38 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_0003b1c8)();
  return;
}



/* ===== <EXTERNAL>::recvfrom @ 00012c44 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recvfrom(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,socklen_t *__addr_len)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_recvfrom_0003b1cc)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_StopGrp @ 00012c50 size=12 ===== */

void RK_MPI_VPSS_StopGrp(void)

{
  (*(code *)PTR_RK_MPI_VPSS_StopGrp_0003b1d0)();
  return;
}



/* ===== <EXTERNAL>::sprintf @ 00012c5c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_0003b1d4)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_MmzFlushCache @ 00012c68 size=12 ===== */

void RK_MPI_SYS_MmzFlushCache(void)

{
  (*(code *)PTR_RK_MPI_SYS_MmzFlushCache_0003b1d8)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StartRecvFrame @ 00012c74 size=12 ===== */

void RK_MPI_VENC_StartRecvFrame(void)

{
  (*(code *)PTR_RK_MPI_VENC_StartRecvFrame_0003b1dc)();
  return;
}



/* ===== <EXTERNAL>::socket @ 00012c80 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_socket_0003b1e0)(__domain);
  return iVar1;
}



/* ===== <EXTERNAL>::fseek @ 00012c8c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fseek_0003b1e4)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_GetChnAttr @ 00012c98 size=12 ===== */

void RK_MPI_VPSS_GetChnAttr(void)

{
  (*(code *)PTR_RK_MPI_VPSS_GetChnAttr_0003b1e8)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 00012ca4 size=12 ===== */

void RK_MPI_MB_Handle2VirAddr(void)

{
  (*(code *)PTR_RK_MPI_MB_Handle2VirAddr_0003b1ec)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_ReleaseMB @ 00012cb0 size=12 ===== */

void RK_MPI_MB_ReleaseMB(void)

{
  (*(code *)PTR_RK_MPI_MB_ReleaseMB_0003b1f0)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_SetGrpCrop @ 00012cbc size=12 ===== */

void RK_MPI_VPSS_SetGrpCrop(void)

{
  (*(code *)PTR_RK_MPI_VPSS_SetGrpCrop_0003b1f4)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_DestroyChn @ 00012cc8 size=12 ===== */

void RK_MPI_VENC_DestroyChn(void)

{
  (*(code *)PTR_RK_MPI_VENC_DestroyChn_0003b1f8)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetMjpegParam @ 00012cd4 size=12 ===== */

void RK_MPI_VENC_SetMjpegParam(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetMjpegParam_0003b1fc)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_deinit @ 00012ce0 size=12 ===== */

void rk_aiq_uapi2_sysctl_deinit(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_deinit_0003b200)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_stop @ 00012cec size=12 ===== */

void rk_aiq_uapi2_sysctl_stop(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_stop_0003b204)();
  return;
}



/* ===== <EXTERNAL>::raise @ 00012cf8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_0003b208)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_ResetGrp @ 00012d04 size=12 ===== */

void RK_MPI_VPSS_ResetGrp(void)

{
  (*(code *)PTR_RK_MPI_VPSS_ResetGrp_0003b20c)();
  return;
}



/* ===== <EXTERNAL>::strstr @ 00012d10 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strstr_0003b210)(__haystack);
  return pcVar1;
}



/* ===== <EXTERNAL>::strcmp @ 00012d1c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_0003b214)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_ReleaseStream @ 00012d28 size=12 ===== */

void RK_MPI_VENC_ReleaseStream(void)

{
  (*(code *)PTR_RK_MPI_VENC_ReleaseStream_0003b218)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetEptz @ 00012d34 size=12 ===== */

void RK_MPI_VI_SetEptz(void)

{
  (*(code *)PTR_RK_MPI_VI_SetEptz_0003b21c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevAttr @ 00012d40 size=12 ===== */

void RK_MPI_VI_SetDevAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetDevAttr_0003b220)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChn @ 00012d4c size=12 ===== */

void RK_MPI_VI_EnableChn(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableChn_0003b224)();
  return;
}



/* ===== <EXTERNAL>::accept @ 00012d58 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int accept(int __fd,sockaddr *__addr,socklen_t *__addr_len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_accept_0003b228)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 00012d64 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0003b22c)(__ptr);
  return;
}



/* ===== <EXTERNAL>::atoi @ 00012d70 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_0003b230)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetJpegParam @ 00012d7c size=12 ===== */

void RK_MPI_VENC_SetJpegParam(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetJpegParam_0003b234)();
  return;
}



/* ===== <EXTERNAL>::strerror @ 00012d88 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_0003b238)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::listen @ 00012d94 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int listen(int __fd,int __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_listen_0003b23c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::printf @ 00012da0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_0003b240)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::getopt_long @ 00012dac size=12 ===== */

void getopt_long(void)

{
  (*(code *)PTR_getopt_long_0003b244)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableDev @ 00012db8 size=12 ===== */

void RK_MPI_VI_DisableDev(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableDev_0003b248)();
  return;
}



/* ===== <EXTERNAL>::puts @ 00012dc4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_0003b24c)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_SetChnRotation @ 00012dd0 size=12 ===== */

void RK_MPI_VPSS_SetChnRotation(void)

{
  (*(code *)PTR_RK_MPI_VPSS_SetChnRotation_0003b250)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_stop @ 00012ddc size=12 ===== */

void rk_aiq_uapi2_camgroup_stop(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_stop_0003b254)();
  return;
}



/* ===== <EXTERNAL>::signal @ 00012de8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = (__sighandler_t)(*(code *)PTR_signal_0003b258)(__sig);
  return p_Var1;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_DestroyGrp @ 00012df4 size=12 ===== */

void RK_MPI_VPSS_DestroyGrp(void)

{
  (*(code *)PTR_RK_MPI_VPSS_DestroyGrp_0003b25c)();
  return;
}



/* ===== <EXTERNAL>::strcpy @ 00012e00 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_0003b260)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_GetChnRotation @ 00012e0c size=12 ===== */

void RK_MPI_VPSS_GetChnRotation(void)

{
  (*(code *)PTR_RK_MPI_VPSS_GetChnRotation_0003b264)();
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00012e18 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_0003b268)();
  return;
}



/* ===== <EXTERNAL>::pthread_join @ 00012e24 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_0003b26c)(__th);
  return iVar1;
}



/* ===== FUN_00012e30 @ 00012e30 size=2472 ===== */

undefined4 FUN_00012e30(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  void *__s;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  char *__nptr;
  undefined8 uVar12;
  undefined8 uVar13;
  int local_7c;
  int local_78;
  int local_74;
  undefined4 local_70;
  char *local_68;
  undefined4 local_64;
  undefined4 local_60;
  char *local_58;
  int local_54;
  int local_50;
  int local_4c;
  char *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  uVar5 = DAT_000137d8;
  if (param_1 < 2) {
LAB_00013548:
    FUN_00013984(*param_2);
  }
  else {
    __s = malloc(0x1310);
    uVar11 = 1;
    iVar8 = 5;
    memset(__s,0,0x1310);
    signal(2,DAT_000137dc);
    iVar10 = -1;
    local_54 = 0x1000;
    local_50 = -1;
    local_70 = 0;
    local_60 = 0x780;
    local_4c = 0;
    local_64 = 0x438;
    local_78 = 0x438;
    local_7c = 0;
    local_58 = (char *)0x0;
    local_48 = (char *)0x0;
    local_68 = (char *)0x0;
    local_74 = 0x780;
    pcVar6 = (char *)0x0;
    pcVar1 = local_68;
    pcVar2 = local_58;
    pcVar3 = local_48;
LAB_00012ec4:
    local_48 = pcVar3;
    local_58 = pcVar2;
    local_68 = pcVar1;
    iVar4 = getopt_long(param_1,param_2,DAT_000137e4,DAT_000137e0,0);
    if (iVar4 != -1) {
      __nptr = (char *)*DAT_00013834;
      pcVar1 = __nptr;
      pcVar2 = local_58;
      pcVar3 = local_48;
      if (iVar4 != 100) {
        pcVar1 = local_68;
        if (iVar4 < 0x65) {
          if (iVar4 == 0x4c) {
            local_4c = atoi(__nptr);
          }
          else if (iVar4 < 0x4d) {
            if (iVar4 == 0x44) {
              iVar10 = atoi(__nptr);
              local_64 = 0x438;
              if (iVar10 == 3) {
                local_60 = 0x780;
              }
              else {
                local_60 = 0x438;
                local_64 = 0x780;
              }
            }
            else {
              if (iVar4 != 0x49) goto LAB_00013548;
              local_7c = atoi(__nptr);
            }
          }
          else if (iVar4 == 0x61) {
            pcVar6 = __nptr;
            if (__nptr == (char *)0x0) {
              pcVar7 = (char *)param_2[*DAT_00013838];
              pcVar6 = pcVar7;
              if ((pcVar7 != (char *)0x0) && (pcVar6 = __nptr, *pcVar7 != '-')) {
                *DAT_00013838 = *DAT_00013838 + 1;
                pcVar6 = pcVar7;
              }
            }
          }
          else if (iVar4 == 0x62) {
            local_54 = atoi(__nptr);
          }
          else {
            if (iVar4 != 0x4d) goto LAB_00013548;
            iVar4 = atoi(__nptr);
            if (iVar4 != 0) {
              local_70 = 1;
            }
          }
        }
        else {
          pcVar3 = __nptr;
          if (iVar4 != 0x69) {
            if (iVar4 < 0x6a) {
              if (iVar4 != 0x65) {
                if (iVar4 != 0x68) goto LAB_00013548;
                local_78 = atoi(__nptr);
                pcVar3 = local_48;
                goto LAB_00012ec4;
              }
              iVar8 = strcmp(__nptr,DAT_0001383c);
              if (iVar8 == 0) {
                uVar11 = 1;
              }
              else {
                iVar8 = strcmp(__nptr,DAT_00013840);
                if (iVar8 == 0) {
                  uVar11 = 2;
                }
                else {
                  iVar8 = strcmp(__nptr,DAT_00013844);
                  if (iVar8 != 0) {
                    iVar8 = strcmp(__nptr,DAT_00013848);
                    if (iVar8 == 0) {
                      uVar11 = 8;
                    }
                    else {
                      iVar8 = strcmp(__nptr,DAT_0001384c);
                      if (iVar8 == 0) {
                        uVar11 = 9;
                      }
                      else {
                        iVar8 = strcmp(__nptr,DAT_00013850);
                        if (iVar8 != 0) {
                          iVar8 = strcmp(__nptr,DAT_00013854);
                          if (iVar8 == 0) {
                            uVar11 = 5;
                          }
                          else {
                            iVar8 = strcmp(__nptr,DAT_00013858);
                            if (iVar8 != 0) {
                              puts(DAT_0001385c);
                              return 0;
                            }
                            uVar11 = 6;
                          }
                          iVar8 = 8;
                          uVar5 = DAT_00013864;
                          pcVar3 = local_48;
                          goto LAB_00012ec4;
                        }
                        uVar11 = 10;
                      }
                    }
                    iVar8 = 6;
                    uVar5 = DAT_00013860;
                    pcVar3 = local_48;
                    goto LAB_00012ec4;
                  }
                  uVar11 = 3;
                }
              }
              iVar8 = 5;
              uVar5 = DAT_000137d8;
              pcVar3 = local_48;
              goto LAB_00012ec4;
            }
            pcVar2 = __nptr;
            pcVar3 = local_48;
            if (iVar4 != 0x6f) {
              if (iVar4 == 0x77) {
                local_74 = atoi(__nptr);
                pcVar2 = local_58;
              }
              else {
                if (iVar4 != 0x6c) goto LAB_00013548;
                local_50 = atoi(__nptr);
                pcVar2 = local_58;
              }
            }
          }
        }
      }
      goto LAB_00012ec4;
    }
    printf(DAT_000137e8,local_7c);
    printf(DAT_000137ec,local_68);
    printf(DAT_000137f0,uVar5);
    printf(DAT_000137f4,local_58);
    printf(DAT_000137f8,pcVar6);
    if (pcVar6 != (char *)0x0) {
      printf(DAT_000137fc,pcVar6);
      printf(DAT_00013800,local_70);
      FUN_00016eb4(local_7c,0,local_70,pcVar6);
      FUN_00017470(local_7c);
    }
    puVar9 = DAT_00013804;
    iVar4 = FUN_00018ff8(0x22a);
    uVar5 = DAT_0001380c;
    *DAT_00013808 = iVar4;
    uVar12 = FUN_00018e34(iVar4,uVar5);
    uVar5 = (undefined4)((ulonglong)uVar12 >> 0x20);
    if (iVar8 == 5) {
      uVar5 = 1;
    }
    *puVar9 = (int)uVar12;
    if (iVar8 != 5) {
      if (iVar8 != 6) {
        puts(DAT_00013868);
        return 0xffffffff;
      }
      uVar5 = 2;
    }
    FUN_00019068((int)uVar12,uVar5);
    uVar5 = *puVar9;
    uVar12 = FUN_0001dfdc();
    uVar13 = FUN_0001e0e8();
    FUN_0001e120(uVar5,(int)((ulonglong)uVar13 >> 0x20),(int)uVar12,(int)((ulonglong)uVar12 >> 0x20)
                 ,uVar13);
    iVar4 = RK_MPI_SYS_Init();
    if (iVar4 == 0) {
      *(undefined4 *)((int)__s + 0xc0) = 0;
      *(undefined4 *)((int)__s + 0xa8) = 0;
      *(int *)((int)__s + 0x10) = local_74;
      *(int *)((int)__s + 0x14) = local_78;
      *(int *)((int)__s + 0x1c) = local_7c;
      *(int *)((int)__s + 0x20) = local_7c;
      *(undefined4 *)((int)__s + 0x24) = 1;
      *(undefined4 *)((int)__s + 0xd0) = 3;
      *(undefined4 *)((int)__s + 0xdc) = 4;
      *(undefined4 *)((int)__s + 0xc4) = 0xffffffff;
      *(undefined4 *)((int)__s + 200) = 0xffffffff;
      if (local_68 != (char *)0x0) {
        strcpy((char *)((int)__s + 0xe0),local_68);
      }
      FUN_000143b4(__s);
      uVar5 = DAT_00013810;
      *(int *)((int)__s + 0x484) = local_74;
      *(undefined4 *)((int)__s + 0x444) = 0;
      *(undefined4 *)((int)__s + 0x448) = 0;
      *(int *)((int)__s + 0x488) = local_78;
      *(undefined4 *)((int)__s + 0x48c) = 1;
      *(undefined4 *)((int)__s + 0x460) = 0;
      *(undefined4 *)((int)__s + 0x470) = 0;
      *(undefined4 *)((int)__s + 0x474) = 0;
      *(undefined4 *)((int)__s + 0x478) = 0;
      *(undefined4 *)((int)__s + 0x47c) = 0;
      *(undefined4 *)((int)__s + 0x480) = 0;
      *(undefined4 *)((int)__s + 0x4a0) = 1;
      *(undefined4 *)((int)__s + 0x4a4) = 0;
      *(undefined4 *)((int)__s + 0x4a8) = 0;
      *(undefined4 *)((int)__s + 0x4ac) = 0;
      uVar5 = FUN_00025d28(uVar5,local_74);
      *(undefined4 *)((int)__s + 0x4b0) = uVar5;
      uVar5 = FUN_00025d28(DAT_00013814,local_78);
      *(undefined4 *)((int)__s + 0x508) = 0x3c;
      *(undefined4 *)((int)__s + 0x574) = 0x780;
      *(undefined4 *)((int)__s + 0x490) = 0;
      *(undefined4 *)((int)__s + 0x500) = 0;
      *(undefined4 *)((int)__s + 0x570) = 0;
      *(undefined4 *)((int)__s + 0x588) = 0;
      *(undefined4 *)((int)__s + 0x584) = 0;
      *(undefined4 *)((int)__s + 0x580) = 0;
      *(undefined4 *)((int)__s + 0x58c) = 0xffffffff;
      *(undefined4 *)((int)__s + 0x590) = 0xffffffff;
      *(undefined4 *)((int)__s + 0x578) = 0x438;
      *(undefined4 *)((int)__s + 0x4b4) = uVar5;
      if (-1 < iVar10) {
        *(undefined4 *)((int)__s + 0x5d8) = 0xffffffff;
        *(undefined4 *)((int)__s + 0x5dc) = 0xffffffff;
        *(undefined4 *)((int)__s + 0x494) = 0;
        *(undefined4 *)((int)__s + 0x5bc) = 0;
        *(int *)((int)__s + 0x5c0) = local_74;
        *(undefined4 *)((int)__s + 0x5d4) = 0;
        *(undefined4 *)((int)__s + 0x5d0) = 0;
        *(int *)((int)__s + 0x5c4) = local_78;
        if (iVar10 == 3) {
          *(int *)((int)__s + 0x5c0) = local_78;
          local_78 = local_74;
        }
        *(undefined4 *)((int)__s + 0x5cc) = 0;
        if (iVar10 == 3) {
          *(undefined4 *)((int)__s + 0x494) = 1;
          *(int *)((int)__s + 0x5c4) = local_78;
        }
      }
      FUN_00013c44((int)__s + 0x440);
      *(undefined4 *)((int)__s + 0x714) = 0x780;
      *(undefined4 *)((int)__s + 0x718) = 0x438;
      *(undefined4 *)((int)__s + 0x720) = 0x32;
      *(undefined4 *)((int)__s + 0x71c) = 0x1e;
      *(int *)((int)__s + 0x740) = iVar8;
      *(int *)((int)__s + 0x724) = local_54;
      uVar5 = DAT_00013818;
      *(undefined4 *)((int)__s + 0x744) = uVar11;
      *(undefined4 *)((int)__s + 0x748) = 0;
      *(undefined4 *)((int)__s + 0x974) = uVar5;
      *(undefined4 *)((int)__s + 0x7c4) = 1;
      *(int *)((int)__s + 0x738) = local_50;
      *(char **)((int)__s + 0x980) = local_58;
      *(undefined4 *)((int)__s + 0x764) = 100;
      FUN_000153dc((int)__s + 0x700);
      *(undefined4 *)((int)__s + 0x9d8) = 0x60;
      *(undefined4 *)((int)__s + 0x9e8) = 2;
      *(undefined4 *)((int)__s + 0x9c4) = *(undefined4 *)((int)__s + 0x748);
      *(undefined4 *)((int)__s + 0x9cc) = 0x530;
      *(undefined4 *)((int)__s + 0x9d0) = 0x3d0;
      *(undefined4 *)((int)__s + 0x9d4) = 0x240;
      *(undefined4 *)((int)__s + 0x9dc) = 0xf800;
      *(undefined4 *)((int)__s + 0x9c0) = 4;
      *(undefined4 *)((int)__s + 0x9e4) = 0;
      *(undefined4 *)((int)__s + 0x9c8) = 0;
      *(undefined4 *)((int)__s + 0x9e0) = 1;
      FUN_00014de8((int)__s + 0x990);
      *(undefined4 *)((int)__s + 0xe80) = 4;
      *(undefined4 *)((int)__s + 0xe98) = 0x60;
      *(undefined4 *)((int)__s + 0xe84) = *(undefined4 *)((int)__s + 0x748);
      *(undefined4 *)((int)__s + 0xe94) = 0xa0;
      uVar5 = DAT_0001381c;
      *(undefined4 *)((int)__s + 0xea4) = 1;
      *(undefined4 *)((int)__s + 0xea8) = 0;
      *(undefined4 *)((int)__s + 0xe54) = uVar5;
      *(undefined4 *)((int)__s + 0xe88) = 0;
      *(undefined4 *)((int)__s + 0xe8c) = 0;
      *(undefined4 *)((int)__s + 0xe90) = 0;
      *(undefined4 *)((int)__s + 0xe58) = 0x80;
      *(undefined4 *)((int)__s + 0xe5c) = 0x80;
      *(undefined4 *)((int)__s + 0xea0) = 1;
      puVar9 = (undefined4 *)((int)__s + 0xe50);
      *puVar9 = local_48;
      FUN_00014de8(puVar9);
      if (-1 < iVar10) {
        *(undefined4 *)((int)__s + 0x3f8) = 0x1e;
        uVar5 = DAT_00013820;
        *(int *)((int)__s + 0x39c) = local_4c;
        *(undefined4 *)((int)__s + 0x390) = 3;
        *(int *)((int)__s + 0x398) = iVar10;
        *(undefined4 *)((int)__s + 1000) = local_64;
        *(undefined4 *)((int)__s + 0x3a8) = 0x200;
        *(undefined4 *)((int)__s + 0x394) = 0;
        *(undefined4 *)((int)__s + 0x3ec) = local_60;
        *(undefined4 *)((int)__s + 0x3ac) = 0x2e;
        *(undefined4 *)((int)__s + 0x3a0) = 1;
        *(undefined4 *)((int)__s + 0x3f0) = local_64;
        *(undefined4 *)((int)__s + 0x3e0) = 0;
        *(undefined4 *)((int)__s + 0x3e4) = 0;
        *(undefined4 *)((int)__s + 0x3f4) = local_60;
        *(undefined4 *)((int)__s + 0x3fc) = uVar5;
        *(undefined4 *)((int)__s + 0x410) = 0;
        *(undefined4 *)((int)__s + 0x418) = local_64;
        *(undefined4 *)((int)__s + 0x414) = 0;
        *(undefined4 *)((int)__s + 0x40c) = 1;
        *(undefined4 *)((int)__s + 0x41c) = local_60;
        if (iVar10 != 3) {
          *(undefined4 *)((int)__s + 0x3a8) = 0x2000;
          *(undefined4 *)((int)__s + 0x3ac) = 10;
        }
        FUN_00014dd8((int)__s + 0x390);
      }
      local_40 = 8;
      local_3c = *(undefined4 *)((int)__s + 0x1c);
      local_34 = 6;
      local_38 = *(undefined4 *)((int)__s + 0x24);
      local_30 = *(undefined4 *)((int)__s + 0x444);
      local_2c = *(undefined4 *)((int)__s + 0x448);
      FUN_00014a6c(&local_40,&local_34);
      local_3c = *(undefined4 *)((int)__s + 0x444);
      local_34 = 4;
      local_30 = 0;
      local_38 = *(undefined4 *)((int)__s + 0x448);
      local_40 = 6;
      local_2c = *(undefined4 *)((int)__s + 0x748);
      FUN_00014a6c(&local_40,&local_34);
      if (-1 < iVar10) {
        local_3c = *(undefined4 *)((int)__s + 0x444);
        local_38 = 1;
        local_34 = 9;
        local_30 = *(undefined4 *)((int)__s + 0x39c);
        local_40 = 6;
        local_2c = *(undefined4 *)((int)__s + 0x394);
        FUN_00014a6c(&local_40,&local_34);
      }
      printf(DAT_00013828,DAT_00013824);
      pcVar1 = DAT_0001382c;
      while (*pcVar1 == '\0') {
        sleep(1);
      }
      printf(DAT_00013830,DAT_00013824);
      if (*(int *)((int)__s + 0x974) != 0) {
        pthread_join(*(pthread_t *)((int)__s + 0x970),(void **)0x0);
      }
      if (*DAT_00013808 != 0) {
        FUN_00019688();
      }
      if (-1 < iVar10) {
        local_3c = *(undefined4 *)((int)__s + 0x444);
        local_38 = 1;
        local_34 = 9;
        local_40 = 6;
        local_30 = *(undefined4 *)((int)__s + 0x39c);
        local_2c = *(undefined4 *)((int)__s + 0x394);
        FUN_00014ab4(&local_40,&local_34);
      }
      local_3c = *(undefined4 *)((int)__s + 0x444);
      local_34 = 4;
      local_30 = 0;
      local_38 = *(undefined4 *)((int)__s + 0x448);
      local_40 = 6;
      local_2c = *(undefined4 *)((int)__s + 0x748);
      FUN_00014ab4(&local_40,&local_34);
      local_40 = 8;
      local_3c = *(undefined4 *)((int)__s + 0x1c);
      local_34 = 6;
      local_38 = *(undefined4 *)((int)__s + 0x24);
      local_30 = *(undefined4 *)((int)__s + 0x444);
      local_2c = *(undefined4 *)((int)__s + 0x448);
      FUN_00014ab4(&local_40,&local_34);
      if (-1 < iVar10) {
        FUN_00014de0((int)__s + 0x390);
      }
      FUN_0001534c(puVar9);
      FUN_0001534c((int)__s + 0x990);
      FUN_00015aec((int)__s + 0x700);
      FUN_000142d8((int)__s + 0x440);
      FUN_00014838(__s);
    }
    RK_MPI_SYS_Exit();
    if (pcVar6 != (char *)0x0) {
      FUN_00017368(local_7c);
    }
    free(__s);
  }
  return 0;
}



/* ===== entry @ 0001386c size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_0003b0b4)
            (DAT_000138a0,param_2,&stack0x00000004,DAT_000138a4,DAT_0001389c,param_1);
  return;
}



/* ===== FUN_000138a8 @ 000138a8 size=32 ===== */

void FUN_000138a8(void)

{
  if (DAT_000138cc == DAT_000138c8) {
    return;
  }
  if (DAT_000138d0 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000138c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000138d0)();
  return;
}



/* ===== _FINI_0 @ 0001390c size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00013948;
  if (*DAT_00013948 != '\0') {
    return;
  }
  FUN_000138a8();
  if (DAT_0001394c != 0) {
    __deregister_frame_info(DAT_00013950);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00013954 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00013978 != 0) {
    __register_frame_info(DAT_00013980,DAT_0001397c);
  }
  if ((DAT_00013904 - DAT_00013900 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00013908 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000138fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00013908)();
  return;
}



/* ===== FUN_00013984 @ 00013984 size=136 ===== */

void FUN_00013984(undefined4 param_1)

{
  puts(DAT_00013a0c);
  printf(DAT_00013a10,param_1);
  puts(DAT_00013a14);
  puts(DAT_00013a18);
  puts(DAT_00013a1c);
  puts(DAT_00013a20);
  puts(DAT_00013a24);
  puts(DAT_00013a28);
  puts(DAT_00013a2c);
  puts(DAT_00013a30);
  puts(DAT_00013a34);
  puts(DAT_00013a38);
  puts(DAT_00013a3c);
  puts(DAT_00013a40);
  puts(DAT_00013a44);
  return;
}



/* ===== FUN_00013a48 @ 00013a48 size=420 ===== */

undefined4 FUN_00013a48(int param_1)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  FILE *__s;
  int iVar5;
  int iVar6;
  int iVar7;
  void *local_124;
  char acStack_120 [256];
  
  memset(acStack_120,0,0x100);
  pcVar1 = DAT_00013bec;
  local_124 = (void *)0x0;
  __s = (FILE *)0x0;
  if (*(int *)(param_1 + 0x280) != 0) {
    snprintf(acStack_120,0x100,DAT_00013bf0,*(int *)(param_1 + 0x280),
             *(undefined4 *)(param_1 + 0x48));
    __s = fopen64(acStack_120,DAT_00013bf4);
    if (__s == (FILE *)0x0) {
      printf(DAT_00013bf8,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x280));
      *pcVar1 = '\x01';
      return 0;
    }
  }
  uVar4 = DAT_00013c0c;
  puVar3 = DAT_00013c08;
  puVar2 = DAT_00013c04;
  iVar7 = 0;
  do {
    if (*pcVar1 != '\0') {
LAB_00013bc4:
      if (__s != (FILE *)0x0) {
        fclose(__s);
      }
      return 0;
    }
    iVar5 = FUN_00015a14(param_1,&local_124);
    iVar6 = iVar7;
    if (iVar5 == 0) {
      if (*(int *)(param_1 + 0x38) <= iVar7 && 0 < *(int *)(param_1 + 0x38)) {
        FUN_00015a9c(param_1);
        *pcVar1 = '\x01';
        goto LAB_00013bc4;
      }
      if (__s != (FILE *)0x0) {
        fwrite(local_124,1,*(size_t *)(*(int *)(param_1 + 0xe0) + 4),__s);
        fflush(__s);
      }
      FUN_000148b0(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(*(int *)(param_1 + 0xe0) + 4));
      iVar6 = *(int *)(param_1 + 0xe0);
      FUN_0001cb70(*puVar2,local_124,*(undefined4 *)(iVar6 + 4),iVar6,*(undefined4 *)(iVar6 + 8),
                   *(undefined4 *)(iVar6 + 0xc));
      FUN_0001bfc4(*puVar3);
      iVar6 = iVar7 + 1;
      RK_LOG(5,uVar4,DAT_00013bfc,DAT_00013c00,0x99,*(undefined4 *)(param_1 + 0x48),iVar7,
             *(undefined4 *)(*(int *)(param_1 + 0xe0) + 4));
      FUN_00015a9c(param_1);
    }
    usleep(1000);
    iVar7 = iVar6;
  } while( true );
}



/* ===== FUN_00013c44 @ 00013c44 size=928 ===== */

int FUN_00013c44(int param_1)

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
    RK_LOG(2,DAT_00013fec,DAT_00013fe8,DAT_00013fe4,0x26,0x100);
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
        RK_LOG(4,DAT_00013fec,DAT_00013ffc,DAT_00013fe4,0x41,uVar2,local_2c[0]);
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
                    uVar2 = DAT_0001400c;
                    goto LAB_00013cc8;
                  }
                  iVar1 = RK_MPI_VPSS_GetChnCrop(*(undefined4 *)(param_1 + 4),iVar3,iVar5);
                  if (iVar1 != 0) {
                    uVar6 = 0x61;
                    uVar2 = DAT_00014010;
                    goto LAB_00013cc8;
                  }
                  iVar1 = RK_MPI_VPSS_SetChnRotation
                                    (*(undefined4 *)(param_1 + 4),iVar3,
                                     *(undefined4 *)(param_1 + 0x50 + iVar3 * 4));
                  if (iVar1 != 0) {
                    uVar6 = 0x68;
                    uVar2 = DAT_00014014;
                    goto LAB_00013cc8;
                  }
                  iVar1 = RK_MPI_VPSS_GetChnRotation(*(undefined4 *)(param_1 + 4),iVar3,&local_30);
                  if (iVar1 != 0) {
                    uVar6 = 0x6d;
                    uVar2 = DAT_00014018;
                    goto LAB_00013cc8;
                  }
                  if (*(int *)(param_1 + 0x50 + iVar3 * 4) != local_30) {
                    RK_LOG(2,DAT_00013fec,DAT_0001401c,DAT_00013fe4,0x71);
                    return -1;
                  }
                  iVar1 = RK_MPI_VPSS_SetChnAttr(*(undefined4 *)(param_1 + 4),iVar3,iVar4 + 0x130);
                  if (iVar1 != 0) {
                    uVar6 = 0x8c;
                    uVar2 = DAT_00014020;
                    goto LAB_00013cc8;
                  }
                  iVar1 = RK_MPI_VPSS_GetChnAttr(*(undefined4 *)(param_1 + 4),iVar3,iVar4 + 0x130);
                  if (iVar1 != 0) {
                    uVar6 = 0x92;
                    uVar2 = DAT_00014024;
                    goto LAB_00013cc8;
                  }
                  iVar1 = RK_MPI_VPSS_EnableChn(*(undefined4 *)(param_1 + 4),iVar3);
                  if (iVar1 != 0) {
                    uVar6 = 0x97;
                    uVar2 = DAT_00014028;
                    goto LAB_00013cc8;
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
              uVar2 = DAT_0001402c;
            }
            else {
              uVar6 = 0x50;
              uVar2 = DAT_00014008;
            }
          }
          else {
            uVar6 = 0x4b;
            uVar2 = DAT_00014004;
          }
        }
        else {
          uVar6 = 0x45;
          uVar2 = DAT_00014000;
        }
        goto LAB_00013cc8;
      }
      uVar7 = 0x3e;
      uVar6 = DAT_00013ff8;
    }
    else {
      uVar2 = *(undefined4 *)(param_1 + 4);
      uVar7 = 0x37;
      uVar6 = DAT_00013ff4;
    }
    RK_LOG(2,DAT_00013fec,uVar6,DAT_00013fe4,uVar7,uVar2,iVar1);
  }
  else {
    uVar6 = 0x30;
    uVar2 = DAT_00013ff0;
LAB_00013cc8:
    RK_LOG(2,DAT_00013fec,uVar2,DAT_00013fe4,uVar6,iVar1);
  }
  return iVar1;
}



/* ===== FUN_00014030 @ 00014030 size=268 ===== */

undefined4
FUN_00014030(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
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
  
  uVar2 = DAT_00014140;
  uVar1 = DAT_0001413c;
  while( true ) {
    uVar6 = 1;
    iVar4 = RK_MPI_MB_GetMB(*(undefined4 *)(param_1 + 0x260));
    if (iVar4 != 0) break;
    RK_LOG(2,uVar2,DAT_00014144,uVar1,0xb2,0);
    usleep(2000);
  }
  RK_MPI_MB_Handle2VirAddr();
  uVar3 = DAT_00014148;
  RK_MPI_SYS_MmzFlushCache(iVar4,0);
  uVar2 = DAT_00014140;
  uVar1 = DAT_0001413c;
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



/* ===== FUN_0001414c @ 0001414c size=208 ===== */

int FUN_0001414c(int param_1,undefined4 *param_2)

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
    RK_LOG(2,DAT_00014224,DAT_00014220,DAT_0001421c,0xdb,iVar1);
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
    RK_LOG(2,DAT_00014224,DAT_00014228,DAT_0001421c,0xe4,iVar1);
  }
  return iVar1;
}



/* ===== FUN_0001422c @ 0001422c size=68 ===== */

undefined4 FUN_0001422c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = RK_MPI_VPSS_ReleaseChnFrame
                    (*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),param_1 + 0x270,
                     param_4,param_1,param_2,param_3);
  if (iVar1 != 0) {
    RK_LOG(2,DAT_00014278,DAT_00014274,DAT_00014270,0xf7,iVar1);
  }
  return 0;
}



/* ===== FUN_000142d8 @ 000142d8 size=200 ===== */

int FUN_000142d8(int param_1,undefined4 param_2,undefined4 param_3)

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
        uVar2 = DAT_000143b0;
      }
      else {
        uVar5 = 0x11c;
        uVar2 = DAT_000143ac;
      }
LAB_00014328:
      RK_LOG(2,DAT_000143a8,uVar2,DAT_000143a4,uVar5,iVar1,param_3);
      return iVar1;
    }
  }
  uVar5 = 0x114;
  uVar2 = DAT_000143a0;
  goto LAB_00014328;
}



/* ===== FUN_000143b4 @ 000143b4 size=764 ===== */

int FUN_000143b4(int *param_1)

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
  if (iVar1 == DAT_000146b0) {
    iVar1 = RK_MPI_VI_SetDevAttr(param_1[7],param_1 + 0x10);
    if (iVar1 == 0) goto LAB_0001442c;
    uVar7 = 0x29;
    uVar5 = DAT_000146b4;
  }
  else {
    RK_LOG(2,DAT_000146bc,DAT_000146c0,DAT_000146b8,0x2d);
LAB_0001442c:
    iVar1 = RK_MPI_VI_GetDevIsEnable(param_1[7]);
    if (iVar1 == 0) {
      RK_LOG(2,DAT_000146bc,DAT_000146d0,DAT_000146b8,0x42);
LAB_000144e8:
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
            uVar5 = DAT_000146d8;
LAB_00014568:
            RK_LOG(2,DAT_000146bc,uVar5,DAT_000146b8,uVar7,uVar6);
            return -1;
          }
          local_1c = 1;
          local_14 = param_1[4] * uVar4 * 3 >> 1;
          uStack_18 = uVar4;
          uVar6 = RK_MPI_VI_SetChnWrapBufAttr(param_1[8],param_1[9],&local_1c);
          if (uVar6 != 0) {
            uVar7 = 0x59;
            uVar5 = DAT_000146dc;
            goto LAB_00014568;
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
            uVar5 = DAT_000146e8;
            goto LAB_000146a8;
          }
          uVar7 = 0x6d;
          uVar5 = DAT_000146e4;
          goto LAB_0001449c;
        }
        RK_LOG(2,DAT_000146bc,DAT_000146e0,DAT_000146b8,0x66,iVar1,param_1[8],param_1[9]);
      }
      else {
        uVar7 = 0x4a;
        uVar5 = DAT_000146d4;
LAB_0001449c:
        RK_LOG(2,DAT_000146bc,uVar5,DAT_000146b8,uVar7,iVar1);
      }
      iVar1 = RK_MPI_VI_DisableDev(param_1[7]);
      uVar7 = 0x7d;
      uVar5 = DAT_000146cc;
    }
    else {
      iVar1 = RK_MPI_VI_EnableDev(param_1[7]);
      if (iVar1 == 0) {
        param_1[0x17] = 1;
        param_1[0x18] = param_1[8];
        iVar1 = RK_MPI_VI_SetDevBindPipe(param_1[7],param_1 + 0x17);
        if (iVar1 == 0) goto LAB_000144e8;
        uVar7 = 0x3e;
        uVar5 = DAT_000146c8;
        goto LAB_0001449c;
      }
      uVar7 = 0x36;
      uVar5 = DAT_000146c4;
    }
  }
  uVar2 = 2;
  iVar3 = iVar1;
LAB_000146a8:
  RK_LOG(uVar2,DAT_000146bc,uVar5,DAT_000146b8,uVar7,iVar3);
  return iVar1;
}



/* ===== FUN_000146ec @ 000146ec size=236 ===== */

undefined4 FUN_000146ec(int param_1,undefined4 *param_2)

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
    RK_LOG(5,DAT_000147dc,DAT_000147d8,DAT_000147e0,0x92,*(undefined4 *)(param_1 + 0x1c),
           *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),uVar2,
           *(undefined4 *)(param_1 + 0x380),*(undefined4 *)(param_1 + 900),
           *(undefined4 *)(param_1 + 0x368),*(undefined4 *)(param_1 + 0x374),
           *(undefined4 *)(param_1 + 0x378),*(undefined4 *)(param_1 + 0x36c),
           *(undefined4 *)(param_1 + 0x37c));
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
    RK_LOG(2,DAT_000147dc,DAT_000147e4,DAT_000147e0,0x94,*(undefined4 *)(param_1 + 0x1c),iVar1);
  }
  return uVar2;
}



/* ===== FUN_000147e8 @ 000147e8 size=68 ===== */

undefined4 FUN_000147e8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = RK_MPI_VI_ReleaseChnFrame
                    (*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),param_1 + 0x318
                     ,param_4,param_1,param_2,param_3);
  if (iVar1 != 0) {
    RK_LOG(2,DAT_00014834,DAT_00014830,DAT_0001482c,0xa0,iVar1);
  }
  return 0;
}



/* ===== FUN_00014838 @ 00014838 size=104 ===== */

uint FUN_00014838(int param_1,undefined4 param_2,undefined4 param_3)

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
    RK_LOG(2,DAT_000148a8,DAT_000148a4,DAT_000148a0,0xaf,uVar1);
  }
  return uVar1;
}



/* ===== FUN_000148b0 @ 000148b0 size=368 ===== */

void FUN_000148b0(undefined4 param_1,int param_2)

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
  
  piVar2 = DAT_00014a40;
  piVar1 = DAT_00014a3c;
  iVar7 = *DAT_00014a3c;
  *DAT_00014a40 = *DAT_00014a40 + param_2;
  ptVar4 = DAT_00014a48;
  if (iVar7 == 0) {
    gettimeofday(DAT_00014a44,(__timezone_ptr_t)0x0);
  }
  else if (iVar7 == 100) {
    gettimeofday(DAT_00014a48,(__timezone_ptr_t)0x0);
    ptVar3 = DAT_00014a44;
    printf(DAT_00014a4c,param_1);
    printf(DAT_00014a50,ptVar3->tv_sec,ptVar3->tv_usec);
    printf(DAT_00014a54,ptVar4->tv_sec,ptVar4->tv_usec);
    piVar5 = DAT_00014a58;
    iVar7 = ptVar4->tv_sec - ptVar3->tv_sec;
    iVar6 = ptVar4->tv_usec - ptVar3->tv_usec;
    *DAT_00014a58 = iVar7;
    piVar5[1] = iVar6;
    if (iVar6 < 0) {
      *piVar5 = iVar7 + -1;
      piVar5[1] = iVar6 + 1000000;
    }
    dVar9 = (double)VectorSignedToFloat(*piVar5,(byte)(in_fpscr >> 0x16) & 3);
    dVar10 = (double)VectorSignedToFloat(piVar5[1],(byte)(in_fpscr >> 0x16) & 3);
    fVar8 = (float)VectorSignedToFloat(*piVar2,(byte)(in_fpscr >> 0x16) & 3);
    dVar9 = dVar10 / DAT_00014a20 + dVar9 * DAT_00014a20;
    printf(DAT_00014a5c,100,SUB84(dVar9,0),(int)((ulonglong)dVar9 >> 0x20),
           ((double)(fVar8 * 8.0 * DAT_00014a38) / dVar9) * DAT_00014a28 * DAT_00014a28);
    printf(DAT_00014a60);
    printf(DAT_00014a64);
    puts(DAT_00014a68);
    *piVar1 = 0;
    *piVar2 = 0;
    return;
  }
  *piVar1 = iVar7 + 1;
  return;
}



/* ===== FUN_00014a6c @ 00014a6c size=60 ===== */

int FUN_00014a6c(void)

{
  int iVar1;
  
  iVar1 = RK_MPI_SYS_Bind();
  if (iVar1 != 0) {
    RK_LOG(2,DAT_00014ab0,DAT_00014aac,DAT_00014aa8,0x4d,iVar1);
  }
  return iVar1;
}



/* ===== FUN_00014ab4 @ 00014ab4 size=60 ===== */

int FUN_00014ab4(void)

{
  int iVar1;
  
  iVar1 = RK_MPI_SYS_UnBind();
  if (iVar1 != 0) {
    RK_LOG(2,DAT_00014af8,DAT_00014af4,DAT_00014af0,0x59,iVar1);
  }
  return iVar1;
}



/* ===== FUN_00014afc @ 00014afc size=312 ===== */

undefined4 FUN_00014afc(char *param_1,undefined4 *param_2,undefined4 *param_3)

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
    RK_LOG(2,DAT_00014c3c,DAT_00014c34,DAT_00014c38,0x69);
  }
  else {
    __stream = fopen64(param_1,DAT_00014c40);
    if (__stream == (FILE *)0x0) {
      RK_LOG(2,DAT_00014c3c,DAT_00014c44,DAT_00014c38,0x6f,param_1);
    }
    else {
      fread(&local_46,1,2,__stream);
      if (local_46 == 0x4d42) {
        fseek(__stream,0xc,1);
        fread(auStack_44,1,0x2c,__stream);
        uVar2 = DAT_00014c4c;
        uVar1 = DAT_00014c3c;
        *param_2 = local_40;
        *param_3 = local_3c;
        RK_LOG(2,uVar1,uVar2,DAT_00014c38,0x7e,*param_2,local_3c);
        fclose(__stream);
        return 0;
      }
      RK_LOG(2,DAT_00014c3c,DAT_00014c48,DAT_00014c38,0x75);
      fclose(__stream);
    }
  }
  return 0xffffffff;
}



/* ===== FUN_00014dd8 @ 00014dd8 size=8 ===== */

undefined4 FUN_00014dd8(void)

{
  return 0;
}



/* ===== FUN_00014de0 @ 00014de0 size=8 ===== */

undefined4 FUN_00014de0(void)

{
  return 0;
}



/* ===== FUN_00014de8 @ 00014de8 size=1276 ===== */

undefined4 FUN_00014de8(undefined4 *param_1)

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
LAB_00015064:
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
      goto LAB_00015064;
    }
    if (iVar10 != 0) {
      uVar5 = 0x91;
      uVar6 = DAT_00015348;
      goto LAB_00015004;
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
    iVar10 = FUN_000179ec(*param_1,auStack_60,auStack_44);
    if (iVar10 < 0) {
      RK_LOG(2,DAT_0001531c,DAT_00015314,DAT_00015318,0x26);
    }
    switch(param_1[1]) {
    case 0x1000a:
      local_54[0] = 4;
      break;
    default:
      goto switchD_00014eac_caseD_1000b;
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
LAB_00014fd8:
        RK_LOG(2,DAT_0001531c,DAT_00015328,DAT_00015318,uVar6);
switchD_00014eac_caseD_1000b:
        uVar5 = 0x75;
        iVar10 = -1;
        uVar6 = DAT_0001532c;
        goto LAB_00015004;
      }
      FUN_00016388(pvVar1,iVar12,iVar10,iVar12,iVar10,param_1[1],0);
      param_1[5] = param_1[0x11];
      uVar7 = param_1[0x12];
    }
    else {
      pvVar1 = malloc(local_3c * local_40 * 4);
      param_1[8] = pvVar1;
      if (pvVar1 == (void *)0x0) {
        uVar6 = 0x51;
        goto LAB_00014fd8;
      }
      FUN_00017f24(*param_1,local_54,pvVar1);
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
    uVar6 = DAT_00015320;
    goto LAB_00014f88;
  }
  puVar11 = param_1 + 0xc;
  puVar13 = param_1 + 0x11c;
  iVar10 = RK_MPI_RGN_AttachToChn(param_1[0x15],puVar11,puVar13);
  if (iVar10 != 0) {
    uVar5 = param_1[0x15];
    uVar15 = 0x9d;
    uVar6 = DAT_00015330;
    goto LAB_00014f88;
  }
  if (param_1[0x16] == 0) {
    iVar10 = RK_MPI_RGN_SetBitMap(param_1[0x15],param_1 + 4);
    if (iVar10 != 0) {
      RK_LOG(2,DAT_0001531c,DAT_00015334,DAT_00015324,0xa6,iVar10);
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
    uVar6 = DAT_00015338;
    goto LAB_00014f88;
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
    uVar6 = DAT_0001531c;
    uVar15 = DAT_00015344;
    uVar5 = DAT_00015324;
LAB_0001521c:
    RK_LOG(2,uVar6,uVar15,uVar5,uVar16,uVar9,uVar8,uVar4,uVar3,uVar2,uVar14);
  }
  else {
    if (iVar10 != 3) {
      if (iVar10 != 0) {
        uVar5 = 0xee;
        uVar6 = DAT_00015348;
LAB_00015004:
        RK_LOG(2,DAT_0001531c,uVar6,DAT_00015324,uVar5,iVar10);
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
      uVar15 = DAT_0001533c;
      uVar5 = DAT_00015324;
      uVar6 = DAT_0001531c;
      uVar16 = 0xd0;
      param_1[0x120] = uVar2;
      param_1[0x122] = uVar14;
      goto LAB_0001521c;
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
  uVar6 = DAT_00015340;
LAB_00014f88:
  RK_LOG(2,DAT_0001531c,uVar6,DAT_00015324,uVar15,uVar5,iVar10);
  return 0xffffffff;
}



/* ===== FUN_0001534c @ 0001534c size=128 ===== */

undefined4 FUN_0001534c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
    uVar2 = DAT_000153d8;
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x54);
    uVar4 = 0x102;
    uVar2 = DAT_000153cc;
  }
  RK_LOG(2,DAT_000153d4,uVar2,DAT_000153d0,uVar4,uVar3,iVar1);
  return 0xffffffff;
}



/* ===== FUN_000153dc @ 000153dc size=1268 ===== */

int FUN_000153dc(int *param_1)

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
    RK_LOG(2,DAT_000158d0,DAT_000158e0,DAT_000158d8,0x54);
    param_1[0x27] = 5;
    param_1[0x13] = 0xf;
    param_1[0x20] = 0;
    *(undefined1 *)(param_1 + 0x21) = 0;
    param_1[0x26] = 0;
    goto LAB_0001549c;
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
    goto LAB_0001549c;
  }
  if (iVar3 == 6) {
    param_1[0x13] = 0xc;
    if (iVar5 != 8) {
      bVar7 = iVar5 == 9;
      goto LAB_00015448;
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
      goto LAB_0001549c;
    }
    bVar7 = iVar5 == 2;
LAB_00015448:
    if (!bVar7) goto LAB_0001549c;
  }
  param_1[0x27] = iVar5;
  param_1[0x2c] = 1;
  param_1[0x28] = param_1[8];
  param_1[0x2d] = param_1[9];
  param_1[0x2a] = 1;
  param_1[0x2b] = param_1[7];
  param_1[0x29] = param_1[7];
LAB_0001549c:
  uVar4 = DAT_000158d0;
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
  uVar8 = DAT_000158d4;
  if (iVar5 == 0) {
    iVar5 = 3;
  }
  param_1[0x1f] = iVar5;
  RK_LOG(2,uVar4,uVar8,DAT_000158d8,0x81,param_1[0x12],iVar5);
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
        printf(DAT_000158e4);
      }
    }
    if (param_1[2] != 0) {
      local_110 = param_1[4];
      local_10c = 0;
      local_114 = 1;
      local_118 = 1;
      iVar3 = RK_MPI_VENC_SetChnBufWrapAttr(param_1[0x12],&local_114);
      if (iVar3 != 0) {
        RK_LOG(2,DAT_000158d0,DAT_000158e8,DAT_000158d8,0xa1,iVar3,iVar5);
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
                RK_LOG(2,DAT_000158d0,DAT_000158f8,DAT_000158d8,0xdc,iVar3);
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
          uVar4 = DAT_000158f4;
          iVar9 = param_1[0x12];
        }
        else {
          uVar8 = 0xca;
          uVar4 = DAT_000158f0;
          iVar9 = iVar3;
        }
      }
      else {
        uVar8 = 0xc1;
        uVar4 = DAT_000158f0;
        iVar9 = iVar3;
      }
    }
    else {
      uVar8 = 0xb9;
      uVar4 = DAT_000158ec;
      iVar9 = iVar3;
    }
  }
  else {
    uVar8 = 0x8a;
    uVar4 = DAT_000158dc;
    iVar9 = iVar3;
  }
  RK_LOG(2,DAT_000158d0,uVar4,DAT_000158d8,uVar8,iVar9,iVar5);
  return iVar3;
}



/* ===== FUN_000158fc @ 000158fc size=264 ===== */

undefined4
FUN_000158fc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
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
  
  uVar2 = DAT_00015a08;
  uVar1 = DAT_00015a04;
  while( true ) {
    uVar6 = 1;
    iVar4 = RK_MPI_MB_GetMB(*(undefined4 *)(param_1 + 0x278));
    if (iVar4 != 0) break;
    RK_LOG(2,uVar2,DAT_00015a0c,uVar1,0x105,0);
    usleep(2000);
  }
  RK_MPI_MB_Handle2VirAddr();
  uVar3 = DAT_00015a10;
  RK_MPI_SYS_MmzFlushCache(iVar4,0);
  uVar2 = DAT_00015a08;
  uVar1 = DAT_00015a04;
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



/* ===== FUN_00015a14 @ 00015a14 size=124 ===== */

undefined4 FUN_00015a14(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar2 = DAT_00015a98;
  uVar1 = DAT_00015a94;
  uVar4 = DAT_00015a90;
  while (iVar3 = RK_MPI_VENC_GetStream(*(undefined4 *)(param_1 + 0x48),param_1 + 0xe0,2000),
        iVar3 != 0) {
    RK_LOG(2,uVar2,uVar1,uVar4,0x12f,*(undefined4 *)(param_1 + 0x48),iVar3);
  }
  uVar4 = RK_MPI_MB_Handle2VirAddr(**(undefined4 **)(param_1 + 0xe0));
  *param_2 = uVar4;
  return 0;
}



/* ===== FUN_00015a9c @ 00015a9c size=68 ===== */

int FUN_00015a9c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = RK_MPI_VENC_ReleaseStream
                    (*(undefined4 *)(param_1 + 0x48),param_1 + 0xe0,param_3,param_4,param_1,param_2)
  ;
  if (iVar1 != 0) {
    RK_LOG(2,DAT_00015ae8,DAT_00015ae4,DAT_00015ae0,0x13a,iVar1);
  }
  return iVar1;
}



/* ===== FUN_00015aec @ 00015aec size=136 ===== */

int FUN_00015aec(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = RK_MPI_VENC_StopRecvFrame(*(undefined4 *)(param_1 + 0x48));
  if (iVar1 == 0) {
    RK_LOG(2,DAT_00015b78,DAT_00015b74,DAT_00015b7c,0x147,*(undefined4 *)(param_1 + 0x48),param_3);
    iVar2 = RK_MPI_VENC_DestroyChn(*(undefined4 *)(param_1 + 0x48));
    if (iVar2 != 0) {
      RK_LOG(2,DAT_00015b78,DAT_00015b80,DAT_00015b7c,0x14a,iVar2,param_3);
    }
    if (*(void **)(param_1 + 0xe0) != (void *)0x0) {
      free(*(void **)(param_1 + 0xe0));
    }
  }
  return iVar1;
}



/* ===== FUN_00015b84 @ 00015b84 size=192 ===== */

void FUN_00015b84(int *param_1,int *param_2,int *param_3,int param_4,int param_5,byte param_6)

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



/* ===== FUN_00016270 @ 00016270 size=128 ===== */

uint FUN_00016270(uint param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  
  if (param_1 != 0) {
    return param_1;
  }
  bVar1 = param_4 * param_2 - param_3 != 0 && param_3 <= param_4 * param_2;
  if (bVar1) {
    RK_LOG(3,DAT_000162f8,DAT_000162f0,DAT_000162f4,0x1b7,param_3,param_2,param_4);
    RK_LOG(3,DAT_000162f8,DAT_000162fc,DAT_000162f4,0x1b9,param_3,param_4,param_3 * param_4);
  }
  return (uint)bVar1;
}



/* ===== FUN_00016300 @ 00016300 size=120 ===== */

int FUN_00016300(int param_1,uint param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  
  if ((param_1 == 0) && (uVar1 = (param_2 + param_3 * 8) - 1 & param_3 * -8, param_2 != uVar1)) {
    RK_LOG(3,DAT_0001637c,DAT_00016378,DAT_00016380,0x1c6,param_4,param_3,param_4);
    RK_LOG(3,DAT_0001637c,DAT_00016384,DAT_00016380,0x1c8,uVar1);
    param_1 = 1;
  }
  return param_1;
}



/* ===== FUN_00016388 @ 00016388 size=2632 ===== */

undefined4
FUN_00016388(char *param_1,uint param_2,uint param_3,uint param_4,int param_5,uint param_6,
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
  
  puVar3 = DAT_00016de4;
  uVar4 = param_5 * param_4;
  if (DAT_00016dd0 < param_6) {
    if (DAT_00016de0 < param_6) {
      if (DAT_00016df4 <= param_6) {
        if (param_6 <= DAT_00016df4 + 3) goto LAB_00016548;
        if (param_6 <= DAT_00016df4 + 6) goto LAB_000165e0;
      }
      goto LAB_000163ec;
    }
    if (param_6 < DAT_00016de0 - 3) {
      if (param_6 <= DAT_00016de0 - 6) {
        uVar4 = 0;
        pcVar9 = *(code **)(DAT_00016de8 + (param_6 - 0x10000) * 4);
        iVar5 = FUN_00016270(*DAT_00016de4,param_2,param_4,3);
        if (iVar5 != 0) {
          param_4 = param_4 * 3;
          *puVar3 = 1;
        }
        puVar3 = DAT_00016dec;
        iVar5 = FUN_00016300(*DAT_00016dec,param_4,3,DAT_00016dfc);
        if (iVar5 != 0) {
          param_4 = param_4 + 0x17 & 0xffffffe8;
          *puVar3 = 1;
        }
        for (; uVar4 != param_3; uVar4 = uVar4 + 1) {
          for (uVar6 = 0; uVar6 != param_2; uVar6 = uVar6 + 1) {
            FUN_00015b84(&local_34,&local_30,auStack_2c,uVar6,uVar4,param_7);
            (*pcVar9)(param_1 + uVar6 * 3,local_34,local_30,auStack_2c[0],1);
          }
          param_1 = param_1 + param_4;
        }
        return 0;
      }
LAB_00016548:
      uVar4 = 0;
      pcVar9 = *(code **)(DAT_00016de8 + (param_6 - 0x10000) * 4);
      iVar5 = FUN_00016270(*DAT_00016de4,param_2,param_4,4);
      if (iVar5 != 0) {
        param_4 = param_4 << 2;
        *puVar3 = 1;
      }
      puVar3 = DAT_00016dec;
      iVar5 = FUN_00016300(*DAT_00016dec,param_4,4,DAT_00016df0);
      if (iVar5 != 0) {
        param_4 = param_4 + 0x1f & 0xffffffe0;
        *puVar3 = 1;
      }
      for (; uVar4 != param_3; uVar4 = uVar4 + 1) {
        for (uVar6 = 0; uVar6 != param_2; uVar6 = uVar6 + 1) {
          FUN_00015b84(&local_34,&local_30,auStack_2c,uVar6,uVar4,param_7);
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
LAB_000163ec:
    RK_LOG(2,DAT_00016dd8,DAT_00016dd4,DAT_00016ddc,0x2df,param_6);
    return 0xffffffff;
  }
LAB_000165e0:
  uVar4 = 0;
  pcVar9 = *(code **)(DAT_00016de8 + (param_6 - 0x10000) * 4);
  iVar5 = FUN_00016270(*DAT_00016de4,param_2,param_4,2);
  if (iVar5 != 0) {
    param_4 = param_4 << 1;
    *puVar3 = 1;
  }
  puVar3 = DAT_00016dec;
  iVar5 = FUN_00016300(*DAT_00016dec,param_4,2,DAT_00016df8);
  if (iVar5 != 0) {
    param_4 = param_4 + 0xf & 0xfffffff0;
    *puVar3 = 1;
  }
  for (; uVar4 != param_3; uVar4 = uVar4 + 1) {
    for (uVar6 = 0; uVar6 != param_2; uVar6 = uVar6 + 1) {
      FUN_00015b84(&local_34,&local_30,auStack_2c,uVar6,uVar4,param_7);
      (*pcVar9)(param_1 + uVar6 * 2,local_34,local_30,auStack_2c[0],1);
    }
    param_1 = param_1 + param_4;
  }
  return 0;
}



/* ===== FUN_00016eb4 @ 00016eb4 size=236 ===== */

undefined4 FUN_00016eb4(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  char *__format;
  undefined4 uVar2;
  char acStack_158 [16];
  undefined1 auStack_148 [304];
  
  iVar1 = DAT_00016fac;
  if (param_1 < 8) {
    setlinebuf((FILE *)*DAT_00016fa8);
    __format = DAT_00016fb8;
    if (param_4 == 0) {
      puts(DAT_00016fb0);
      uVar2 = 0;
    }
    else {
      *(undefined4 *)(DAT_00016fb4 + param_1 * 4) = param_2;
      snprintf(acStack_158,0x10,__format,param_2);
      setenv(DAT_00016fbc,acStack_158,1);
      rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId(param_1,auStack_148);
      printf(DAT_00016fc0,param_1,auStack_148,param_4);
      rk_aiq_uapi2_sysctl_preInit_devBufCnt(auStack_148,DAT_00016fc4,2);
      uVar2 = rk_aiq_uapi2_sysctl_init(auStack_148,param_4,DAT_00016fcc,DAT_00016fc8);
      if (param_3 != 0) {
        rk_aiq_uapi2_sysctl_setMulCamConc(uVar2,1);
      }
    }
    *(undefined4 *)(iVar1 + param_1 * 4) = uVar2;
    uVar2 = 0;
  }
  else {
    printf(DAT_00016fa4,DAT_00016fa0);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== FUN_00016fd0 @ 00016fd0 size=488 ===== */

int FUN_00016fd0(int param_1,ushort *param_2,int param_3)

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
  iVar3 = DAT_000171bc;
  __format = DAT_000171b8;
  __s = param_2;
  if ((int)param_2 - 1U < 2) {
    iVar4 = rk_aiq_uapi2_camgroup_getCamInfos
                      (*(undefined4 *)(DAT_000171bc + param_1 * 4),&local_108);
    if (iVar4 == 0) {
      piVar7 = &local_108;
      iVar4 = 0;
      for (iVar8 = 0; iVar8 < local_108; iVar8 = iVar8 + 1) {
        iVar6 = rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm
                          (*(undefined4 *)(iVar3 + param_1 * 4),piVar7[1]);
        if (iVar6 == 0) {
          puts(DAT_000171d8);
          goto LAB_000171a8;
        }
        printf(DAT_000171c0,piVar7[1],piVar7[9]);
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
              puts(DAT_000171c4);
              local_84 = -1;
            }
            else {
              uVar1 = __s[2];
              uVar2 = __s[3];
              printf(DAT_000171cc,(uint)*__s,(uint)__s[1],(uint)uVar1,(uint)uVar2,(uint)__s[4],
                     (uint)__s[5]);
              local_84 = ((uint)uVar2 * (uint)uVar1 + 6) * 2;
            }
          }
          else {
            pcVar5 = strrchr((char *)__s,0x2f);
            __format = DAT_000171d0;
            if (pcVar5 == (char *)0x0) goto LAB_00017128;
            local_bc = 1;
            local_8c = 1;
            local_90 = (ushort *)0x1;
            memcpy(&local_88,__s,(size_t)(pcVar5 + (1 - (int)__s)));
            strcpy(acStack_48,pcVar5 + 1);
            printf(DAT_000171d4,&local_88,acStack_48);
          }
          iVar6 = rk_aiq_user_api2_aldch_v21_SetAttrib(iVar6,auStack_c4);
          iVar4 = 0;
          if (iVar6 != 0) {
            printf(DAT_000171c8,iVar6);
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
LAB_00017128:
    printf(__format,__s);
LAB_000171a8:
    iVar4 = -1;
  }
  return iVar4;
}



/* ===== FUN_000171dc @ 000171dc size=352 ===== */

undefined4
FUN_000171dc(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5,
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
  
  uVar1 = DAT_00017360;
  __format_00 = DAT_0001735c;
  __format = DAT_00017358;
  if (param_1 < 8) {
    for (iVar4 = 0; iVar3 = DAT_0001734c, iVar4 < *(int *)(param_6 + 0x20); iVar4 = iVar4 + 1) {
      iVar3 = rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId(iVar4,acStack_558);
      __s = DAT_00017344;
      if (iVar3 != 0) goto LAB_00017234;
      printf(__format,param_1,iVar4,acStack_558,*(undefined4 *)(param_6 + 0x24));
      __dest = auStack_428 + iVar4 * 0x80;
      sVar2 = strlen(acStack_558);
      memcpy(__dest,acStack_558,sVar2 + 1);
      *(undefined1 **)(param_6 + iVar4 * 4) = __dest;
      printf(__format_00,iVar4,__dest);
      iVar3 = rk_aiq_uapi2_sysctl_preInit_devBufCnt(acStack_558,uVar1,2);
      __s = DAT_00017348;
      if (iVar3 != 0) goto LAB_00017234;
    }
    iVar4 = rk_aiq_uapi2_camgroup_create(param_6);
    *(int *)(iVar3 + param_1 * 4) = iVar4;
    __s = DAT_00017350;
    if (iVar4 != 0) {
      if (param_4 != 0) {
        FUN_00016fd0(param_1,param_4 & 0xff,param_5);
      }
      iVar4 = rk_aiq_uapi2_camgroup_prepare(*(undefined4 *)(iVar3 + param_1 * 4),param_2);
      iVar3 = rk_aiq_uapi2_camgroup_start(*(undefined4 *)(iVar3 + param_1 * 4));
      __s = DAT_00017354;
      if (iVar4 == 0 && iVar3 == 0) {
        puts(DAT_00017364);
        return 0;
      }
    }
LAB_00017234:
    puts(__s);
  }
  else {
    printf(DAT_00017340,DAT_0001733c,8);
  }
  return 0xffffffff;
}



/* ===== FUN_00017368 @ 00017368 size=112 ===== */

undefined4 FUN_00017368(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_000173d8;
  if ((param_1 < 8) && (*(int *)(DAT_000173d8 + param_1 * 4) != 0)) {
    puts(DAT_000173e4);
    rk_aiq_uapi2_sysctl_stop(*(undefined4 *)(iVar1 + param_1 * 4),0);
    puts(DAT_000173e8);
    rk_aiq_uapi2_sysctl_deinit(*(undefined4 *)(iVar1 + param_1 * 4));
    puts(DAT_000173ec);
    *(undefined4 *)(iVar1 + param_1 * 4) = 0;
    return 0;
  }
  printf(DAT_000173e0,DAT_000173dc,param_1);
  return 0xffffffff;
}



/* ===== FUN_00017470 @ 00017470 size=152 ===== */

undefined4 FUN_00017470(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_00017508;
  if ((param_1 < 8) && (iVar1 = *(int *)(DAT_00017508 + param_1 * 4), iVar1 != 0)) {
    iVar1 = rk_aiq_uapi2_sysctl_prepare(iVar1,0,0,*(undefined4 *)(DAT_00017514 + param_1 * 4));
    if (iVar1 == 0) {
      puts(DAT_0001751c);
      iVar2 = rk_aiq_uapi2_sysctl_start(*(undefined4 *)(iVar2 + param_1 * 4));
      if (iVar2 == 0) {
        puts(DAT_00017524);
        return 0;
      }
      puts(DAT_00017520);
    }
    else {
      puts(DAT_00017518);
      *(undefined4 *)(iVar2 + param_1 * 4) = 0;
    }
  }
  else {
    printf(DAT_00017510,DAT_0001750c);
  }
  return 0xffffffff;
}



/* ===== FUN_000178d4 @ 000178d4 size=136 ===== */

uint FUN_000178d4(int param_1,int param_2,int param_3,byte param_4,char param_5,char param_6,
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



/* ===== FUN_0001795c @ 0001795c size=144 ===== */

uint FUN_0001795c(int param_1,int param_2,int param_3,char param_4,char param_5,char param_6,
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



/* ===== FUN_000179ec @ 000179ec size=184 ===== */

undefined4 FUN_000179ec(char *param_1,void *param_2,void *param_3)

{
  FILE *__stream;
  undefined4 uStack_1c;
  void *pvStack_18;
  
  uStack_1c = param_2;
  pvStack_18 = param_3;
  if (param_1 == (char *)0x0) {
    puts(DAT_00017aa4);
  }
  else {
    __stream = fopen64(param_1,DAT_00017aa8);
    if (__stream == (FILE *)0x0) {
      printf(DAT_00017aac,param_1);
    }
    else {
      fread((void *)((int)&uStack_1c + 2),1,2,__stream);
      if (uStack_1c._2_2_ == 0x4d42) {
        fread(param_2,1,0xc,__stream);
        fread(param_3,1,0x2c,__stream);
        fclose(__stream);
        return 0;
      }
      puts(DAT_00017ab0);
      fclose(__stream);
    }
  }
  return 0xffffffff;
}



/* ===== FUN_00017ab4 @ 00017ab4 size=872 ===== */

undefined4 FUN_00017ab4(char *param_1,uint *param_2,uint param_3)

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
  
  __s = DAT_00017e44;
  if (param_1 != (char *)0x0) {
    iVar2 = FUN_000179ec(param_1,auStack_60,auStack_54);
    if (iVar2 < 0) {
      return 0xffffffff;
    }
    __n = (uint)(local_46 >> 3);
    __s = DAT_00017e48;
    if (((0xf < local_46) && (__s = DAT_00017e4c, local_44 == 0)) &&
       (__s = DAT_00017e50, -1 < (int)local_4c)) {
      __stream = fopen64(param_1,DAT_00017e54);
      if (__stream == (FILE *)0x0) {
        printf(DAT_00017e58,param_1);
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
        puts(DAT_00017e5c);
        fclose(__stream);
        return 0xffffffff;
      }
      uVar14 = param_2[3];
      fseek(__stream,local_58,0);
      sVar3 = fread(__ptr,1,__size,__stream);
      if (__size - sVar3 != 0) {
        printf(DAT_00017e60,uVar11,uVar12,0xb6);
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
      iVar2 = DAT_00017e64 + param_3 * 0x10;
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
            goto LAB_00017cd0;
          }
          switch(param_3) {
          case 0:
          case 2:
          case 3:
          case 4:
            iVar7 = param_2[2] * uVar13 + uVar5 * 2;
            iVar16 = uVar5 * 3 + iVar9;
            uVar1 = FUN_000178d4(*(undefined1 *)((int)__ptr + iVar16 + 2),
                                 *(undefined1 *)((int)__ptr + iVar16 + 1),
                                 *(undefined1 *)((int)__ptr + iVar16),
                                 *(undefined4 *)(DAT_00017e64 + param_3 * 0x10),
                                 *(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8),
                                 *(undefined4 *)(iVar2 + 0xc));
            goto LAB_00017ccc;
          default:
            printf(DAT_00017e70,DAT_00017e6c,0xea);
            break;
          case 5:
            iVar7 = param_2[2] * uVar13 + uVar5 * 2;
            iVar16 = uVar5 * 3 + iVar9;
            uVar1 = FUN_0001795c(*(undefined1 *)((int)__ptr + iVar16 + 2),
                                 *(undefined1 *)((int)__ptr + iVar16 + 1),
                                 *(undefined1 *)((int)__ptr + iVar16),DAT_00017e68[-1],*DAT_00017e68
                                 ,DAT_00017e68[1],DAT_00017e68[2]);
LAB_00017ccc:
            *(undefined2 *)(uVar14 + iVar7) = uVar1;
            break;
          case 6:
          case 8:
            uVar15 = param_2[2];
            iVar7 = uVar5 * 3 + iVar9;
            uVar4 = FUN_000178d4(*(undefined1 *)((int)__ptr + iVar7 + 2),
                                 *(undefined1 *)((int)__ptr + iVar7 + 1),
                                 *(undefined1 *)((int)__ptr + iVar7),
                                 *(undefined4 *)(DAT_00017e64 + param_3 * 0x10),
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
LAB_00017cd0:
        }
        local_6c = local_6c + 1;
      } while( true );
    }
  }
  puts(__s);
  return 0xffffffff;
}



/* ===== FUN_00017e74 @ 00017e74 size=76 ===== */

char * FUN_00017e74(char *param_1)

{
  char *pcVar1;
  size_t sVar2;
  char *pcVar3;
  char *pcVar4;
  
  if (param_1 == (char *)0x0) {
    printf(DAT_00017ec0);
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



/* ===== FUN_00017ec4 @ 00017ec4 size=84 ===== */

undefined4 FUN_00017ec4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = (char *)FUN_00017e74();
  iVar2 = strcmp(pcVar1,DAT_00017f18);
  pcVar1 = DAT_00017f20;
  if ((iVar2 == 0) &&
     (iVar2 = FUN_00017ab4(param_1,param_2,param_3), pcVar1 = DAT_00017f1c, iVar2 == 0)) {
    return 0;
  }
  puts(pcVar1);
  return 0xffffffff;
}



/* ===== FUN_00017f24 @ 00017f24 size=84 ===== */

undefined4 FUN_00017f24(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

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
  iVar1 = FUN_00017ec4(param_1,&local_18,*param_2);
  if (iVar1 < 0) {
    puts(DAT_00017f78);
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



/* ===== FUN_00017f80 @ 00017f80 size=28 ===== */

int FUN_00017f80(void)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  return *piVar1;
}



/* ===== FUN_00017f9c @ 00017f9c size=40 ===== */

char * FUN_00017f9c(int param_1)

{
  char *pcVar1;
  
  pcVar1 = strerror(param_1);
  return pcVar1;
}



/* ===== FUN_00017fc4 @ 00017fc4 size=156 ===== */

void * FUN_00017fc4(void)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,0x14);
  if (pvVar1 == (void *)0x0) {
    printf((char *)(DAT_00018068 + 0x18010),DAT_00018064 + 0x18008,0x9a,DAT_00018060 + 0x17ffc);
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



/* ===== FUN_0001806c @ 0001806c size=48 ===== */

void FUN_0001806c(void *param_1)

{
  if (param_1 != (void *)0x0) {
    free(param_1);
  }
  return;
}



/* ===== FUN_0001809c @ 0001809c size=204 ===== */

void * FUN_0001809c(int param_1)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,0x168);
  if (pvVar1 == (void *)0x0) {
    printf((char *)(DAT_00018170 + 0x180ec),DAT_0001816c + 0x180e4,0xad,DAT_00018168 + 0x180d8);
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



/* ===== FUN_00018174 @ 00018174 size=136 ===== */

void FUN_00018174(void *param_1)

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



/* ===== FUN_000181fc @ 000181fc size=180 ===== */

void * FUN_000181fc(int param_1)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,0x434);
  if (pvVar1 == (void *)0x0) {
    printf((char *)(DAT_000182b8 + 0x1824c),DAT_000182b4 + 0x18244,0xc4,DAT_000182b0 + 0x18238);
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



/* ===== FUN_000182bc @ 000182bc size=136 ===== */

void FUN_000182bc(void *param_1)

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



/* ===== FUN_00018344 @ 00018344 size=128 ===== */

void FUN_00018344(int param_1,int param_2)

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



/* ===== FUN_000183c4 @ 000183c4 size=144 ===== */

void FUN_000183c4(int param_1)

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



/* ===== FUN_00018454 @ 00018454 size=536 ===== */

int * FUN_00018454(int param_1)

{
  undefined4 uVar1;
  int local_2c;
  sockaddr local_24;
  int local_14;
  int local_10;
  int *local_c;
  
  local_c = (int *)0x0;
  local_c = (int *)FUN_00017fc4();
  if (local_c == (int *)0x0) {
    local_c = (int *)0x0;
  }
  else {
    local_10 = socket(2,1,0);
    if (local_10 == -1) {
      uVar1 = FUN_00017f80();
      uVar1 = FUN_00017f9c(uVar1);
      printf((char *)(DAT_00018674 + 0x184e0),DAT_00018670 + 0x184d8,0xfa,DAT_0001866c + 0x184cc,
             uVar1);
      FUN_0001806c(local_c);
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
        uVar1 = FUN_00017f80();
        uVar1 = FUN_00017f9c(uVar1);
        printf((char *)(DAT_00018680 + 0x185a4),DAT_0001867c + 0x1859c,0x108,DAT_00018678 + 0x18590,
               uVar1);
        close(local_10);
        FUN_0001806c(local_c);
        local_c = (int *)0x0;
      }
      else {
        local_14 = listen(local_10,0x80);
        if (local_14 == -1) {
          uVar1 = FUN_00017f80();
          uVar1 = FUN_00017f9c(uVar1);
          printf((char *)(DAT_0001868c + 0x18610),DAT_00018688 + 0x18608,0x110,
                 DAT_00018684 + 0x185fc,uVar1);
          close(local_10);
          FUN_0001806c(local_c);
          local_c = (int *)0x0;
        }
        else {
          *local_c = local_10;
          printf((char *)(DAT_00018698 + 0x1865c),DAT_00018694 + 0x18654,0x118,
                 DAT_00018690 + 0x18648,local_2c);
        }
      }
    }
  }
  return local_c;
}



/* ===== FUN_0001869c @ 0001869c size=932 ===== */

undefined4 FUN_0001869c(int param_1)

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
    printf((char *)(DAT_00018a48 + 0x18730),DAT_00018a44 + 0x18728,0x15b,DAT_00018a40 + 0x1871c,
           pcVar2);
  }
  else {
    local_c = local_c | 0x800;
    local_c = fcntl(param_1,4,local_c);
    if ((int)local_c < 0) {
      piVar1 = __errno_location();
      pcVar2 = strerror(*piVar1);
      printf((char *)(DAT_00018a54 + 0x1879c),DAT_00018a50 + 0x18794,0x160,DAT_00018a4c + 0x18788,
             pcVar2);
    }
  }
  local_c = setsockopt(param_1,1,7,&local_10,4);
  if (local_c == -1) {
    uVar3 = FUN_00017f80();
    uVar3 = FUN_00017f9c(uVar3);
    printf((char *)(DAT_00018a60 + 0x18804),DAT_00018a5c + 0x187fc,0x166,DAT_00018a58 + 0x187f0,
           uVar3);
  }
  local_c = setsockopt(param_1,1,9,&local_14,4);
  if (local_c == -1) {
    uVar3 = FUN_00017f80();
    uVar3 = FUN_00017f9c(uVar3);
    printf((char *)(DAT_00018a6c + 0x1886c),DAT_00018a68 + 0x18864,0x16b,DAT_00018a64 + 0x18858,
           uVar3);
  }
  local_c = setsockopt(param_1,6,4,&local_18,4);
  if (local_c == -1) {
    uVar3 = FUN_00017f80();
    uVar3 = FUN_00017f9c(uVar3);
    printf((char *)(DAT_00018a78 + 0x188d4),DAT_00018a74 + 0x188cc,0x170,DAT_00018a70 + 0x188c0,
           uVar3);
  }
  local_c = setsockopt(param_1,6,5,&local_1c,4);
  if (local_c == -1) {
    uVar3 = FUN_00017f80();
    uVar3 = FUN_00017f9c(uVar3);
    printf((char *)(DAT_00018a84 + 0x1893c),DAT_00018a80 + 0x18934,0x175,DAT_00018a7c + 0x18928,
           uVar3);
  }
  local_c = setsockopt(param_1,6,6,&local_20,4);
  if (local_c == -1) {
    uVar3 = FUN_00017f80();
    uVar3 = FUN_00017f9c(uVar3);
    printf((char *)(DAT_00018a90 + 0x189a4),DAT_00018a8c + 0x1899c,0x17a,DAT_00018a88 + 0x18990,
           uVar3);
  }
  memset(&local_28,0,8);
  local_28 = 1;
  local_24 = 0;
  local_c = setsockopt(param_1,1,0xd,&local_28,8);
  if (local_c == -1) {
    uVar3 = FUN_00017f80();
    uVar3 = FUN_00017f9c(uVar3);
    printf((char *)(DAT_00018a9c + 0x18a30),DAT_00018a98 + 0x18a28,0x182,DAT_00018a94 + 0x18a1c,
           uVar3);
  }
  return 0;
}



/* ===== FUN_00018aa0 @ 00018aa0 size=304 ===== */

undefined4 * FUN_00018aa0(int *param_1)

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
    uVar2 = FUN_00017f80();
    uVar2 = FUN_00017f9c(uVar2);
    printf((char *)(DAT_00018bd8 + 0x18b20),DAT_00018bd4 + 0x18b18,0x191,DAT_00018bd0 + 0x18b0c,
           uVar2);
    local_14 = (undefined4 *)0x0;
  }
  else {
    FUN_0001869c(local_18);
    pcVar3 = inet_ntoa((in_addr)auStack_28._4_4_);
    uVar1 = ntohs(auStack_28._2_2_);
    printf((char *)(DAT_00018be4 + 0x18b74),DAT_00018be0 + 0x18b6c,0x198,DAT_00018bdc + 0x18b60,
           pcVar3,(uint)uVar1);
    local_14 = (undefined4 *)FUN_000181fc(param_1);
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



/* ===== FUN_00018be8 @ 00018be8 size=160 ===== */

void FUN_00018be8(int param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    uVar2 = *(undefined4 *)(param_1 + 4);
    pcVar1 = inet_ntoa((in_addr)*(in_addr_t *)(param_1 + 8));
    printf((char *)(DAT_00018c90 + 0x18c44),DAT_00018c8c + 0x18c3c,0x1ab,DAT_00018c88 + 0x18c30,
           uVar2,pcVar1);
    FUN_000183c4(param_1);
    FUN_0001a6a0(param_1,0);
    FUN_0001a6a0(param_1,1);
    close(*(int *)(param_1 + 4));
    FUN_000182bc(param_1);
  }
  return;
}



/* ===== FUN_00018c94 @ 00018c94 size=408 ===== */

bool FUN_00018c94(char *param_1,char *param_2)

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
    *(undefined2 *)(local_48 + sVar1) = *(undefined2 *)(DAT_00018e2c + 0x18d90);
  }
  sVar1 = strlen(local_88);
  if (*(char *)((int)&local_8c + sVar1 + 3) != '/') {
    sVar1 = strlen(local_88);
    *(undefined2 *)(local_88 + sVar1) = *(undefined2 *)(DAT_00018e30 + 0x18de4);
  }
  sVar1 = strlen(local_48);
  iVar2 = strncmp(local_48,local_88,sVar1);
  return iVar2 == 0;
}



/* ===== FUN_00018e34 @ 00018e34 size=416 ===== */

char * FUN_00018e34(int param_1,char *param_2)

{
  int iVar1;
  char *local_c;
  
  local_c = (char *)0x0;
  if (((param_1 == 0) || (param_2 == (char *)0x0)) || (*param_2 == '\0')) {
    printf((char *)(DAT_00018fdc + 0x18ea0),DAT_00018fd8 + 0x18e98,0x1cc,DAT_00018fd4 + 0x18e8c);
  }
  else {
    for (local_c = *(char **)(param_1 + 4); local_c != (char *)0x0;
        local_c = *(char **)(local_c + 0x15c)) {
      iVar1 = FUN_00018c94(local_c,param_2);
      if ((iVar1 != 0) || (iVar1 = FUN_00018c94(param_2,local_c), iVar1 != 0)) {
        printf((char *)(DAT_00018fe8 + 0x18f1c),DAT_00018fe4 + 0x18f14,0x1d2,DAT_00018fe0 + 0x18f08,
               local_c,param_2);
        goto LAB_00018fb0;
      }
    }
    local_c = (char *)FUN_0001809c(param_1);
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
      printf((char *)(DAT_00018ff4 + 0x18fa4),DAT_00018ff0 + 0x18f9c,0x1e0,DAT_00018fec + 0x18f90,
             local_c);
      return local_c;
    }
  }
LAB_00018fb0:
  if (local_c != (char *)0x0) {
    free(local_c);
  }
  return (char *)0x0;
}



/* ===== FUN_00018ff8 @ 00018ff8 size=40 ===== */

undefined4 FUN_00018ff8(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00018454(param_1);
  return uVar1;
}



/* ===== FUN_00019020 @ 00019020 size=72 ===== */

undefined4 FUN_00019020(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00018e34(param_1,param_2);
  FUN_00019068(uVar1,1,0,0);
  return uVar1;
}



/* ===== FUN_00019068 @ 00019068 size=596 ===== */

undefined4 FUN_00019068(int param_1,int param_2,int param_3,int param_4)

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
        iVar1 = FUN_00023fb4(param_3,param_4,param_1 + 0x48);
        if (iVar1 < 1) {
          printf((char *)(DAT_000192d0 + 0x191e0),DAT_000192cc + 0x191d8,0x220,
                 DAT_000192c8 + 0x191cc);
        }
      }
      else if ((param_2 == 2) && (iVar1 = FUN_00024218(param_3,param_4,param_1 + 0x48), iVar1 < 1))
      {
        printf((char *)(DAT_000192dc + 0x19228),DAT_000192d8 + 0x19220,0x226,DAT_000192d4 + 0x19214)
        ;
      }
    }
    if (*(int *)(param_1 + 0x138) == 0) {
      uVar2 = FUN_00023684(0x5b0,0x4b1);
      *(undefined4 *)(param_1 + 0x138) = uVar2;
      if (*(int *)(param_1 + 0x138) == 0) {
        printf((char *)(DAT_000192e8 + 0x19298),DAT_000192e4 + 0x19290,0x230,DAT_000192e0 + 0x19284)
        ;
        *(undefined4 *)(param_1 + 0x40) = 0;
        return 0xffffffff;
      }
    }
    uVar2 = 0;
  }
  else {
    printf((char *)(DAT_000192c4 + 0x190fc),DAT_000192c0 + 0x190f4,0x211,DAT_000192bc + 0x190e8,
           param_2);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== FUN_000192ec @ 000192ec size=516 ===== */

undefined4 FUN_000192ec(int param_1,int param_2,int param_3,int param_4)

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
       (iVar1 = FUN_0002451c(param_3,param_4,param_1 + 0x114), iVar1 < 1)) {
      printf((char *)(DAT_00019504 + 0x19464),DAT_00019500 + 0x1945c,0x255,DAT_000194fc + 0x19450);
    }
    if (*(int *)(param_1 + 0x13c) == 0) {
      uVar2 = FUN_00023684(0x5b0,0x29);
      *(undefined4 *)(param_1 + 0x13c) = uVar2;
      if (*(int *)(param_1 + 0x13c) == 0) {
        printf((char *)(DAT_00019510 + 0x194cc),DAT_0001950c + 0x194c4,0x25f,DAT_00019508 + 0x194b8)
        ;
        *(undefined4 *)(param_1 + 0x44) = 0;
        return 0xffffffff;
      }
    }
    uVar2 = 0;
  }
  else {
    printf((char *)(DAT_000194f8 + 0x19384),DAT_000194f4 + 0x1937c,0x245,DAT_000194f0 + 0x19370,
           param_2);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== FUN_000195b8 @ 000195b8 size=196 ===== */

void FUN_000195b8(int param_1)

{
  if (param_1 != 0) {
    while (*(int *)(param_1 + 0x154) != 0) {
      FUN_00018be8(*(int *)(param_1 + 0x154));
    }
    printf((char *)(DAT_00019684 + 0x19628),DAT_00019680 + 0x19620,0x285,DAT_0001967c + 0x19614,
           param_1);
    if (*(int *)(param_1 + 0x138) != 0) {
      FUN_00023b18(*(undefined4 *)(param_1 + 0x138));
    }
    if (*(int *)(param_1 + 0x13c) != 0) {
      FUN_00023b18(*(undefined4 *)(param_1 + 0x13c));
    }
    FUN_00018174(param_1);
  }
  return;
}



/* ===== FUN_00019688 @ 00019688 size=144 ===== */

void FUN_00019688(int *param_1)

{
  if (param_1 != (int *)0x0) {
    while (param_1[3] != 0) {
      FUN_00018be8(param_1[3]);
    }
    while (param_1[1] != 0) {
      FUN_000195b8(param_1[1]);
    }
    close(*param_1);
    FUN_0001806c(param_1);
  }
  return;
}



/* ===== FUN_00019718 @ 00019718 size=1128 ===== */

int FUN_00019718(int param_1,int param_2,char *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *local_c;
  
  iVar1 = sprintf(param_3,(char *)(DAT_00019b80 + 0x19748));
  pcVar3 = param_3 + iVar1;
  iVar1 = sprintf(pcVar3,(char *)(DAT_00019b84 + 0x19770));
  pcVar3 = pcVar3 + iVar1;
  iVar1 = sprintf(pcVar3,(char *)(DAT_00019b88 + 0x19798));
  pcVar3 = pcVar3 + iVar1;
  iVar1 = sprintf(pcVar3,(char *)(DAT_00019b8c + 0x197c0));
  pcVar3 = pcVar3 + iVar1;
  iVar1 = param_2;
  if (param_2 == 0) {
    iVar1 = DAT_00019b90 + 0x197fc;
  }
  iVar1 = sprintf(pcVar3,(char *)(DAT_00019b94 + 0x19808),iVar1);
  iVar2 = sprintf(pcVar3 + iVar1,(char *)(DAT_00019b98 + 0x19830));
  local_c = pcVar3 + iVar1 + iVar2;
  if (*(int *)(param_1 + 0x40) != 0) {
    if (*(int *)(param_1 + 0x40) == 1) {
      iVar1 = FUN_00024690(0x60,*(undefined4 *)(param_1 + 0x120),param_1 + 0x48,local_c,
                           param_4 - ((int)local_c - (int)param_3));
      local_c = local_c + iVar1;
    }
    else if (*(int *)(param_1 + 0x40) == 2) {
      iVar1 = FUN_000248d8(0x60,*(undefined4 *)(param_1 + 0x120),param_1 + 0x48,local_c,
                           param_4 - ((int)local_c - (int)param_3));
      local_c = local_c + iVar1;
    }
    if (param_2 == 0) {
      iVar1 = sprintf(local_c,(char *)(DAT_00019ba8 + 0x19980),DAT_00019ba4 + 0x19974);
      local_c = local_c + iVar1;
    }
    else {
      iVar1 = sprintf(local_c,(char *)(DAT_00019ba0 + 0x1994c),param_2,DAT_00019b9c + 0x19940);
      local_c = local_c + iVar1;
    }
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    iVar1 = *(int *)(param_1 + 0x44);
    if (iVar1 == 0x4002) {
      iVar1 = FUN_00024c78(0x61,*(undefined4 *)(param_1 + 0x130),*(undefined1 *)(param_1 + 0x134),
                           local_c,param_4 - ((int)local_c - (int)param_3));
      local_c = local_c + iVar1;
    }
    else if (iVar1 == 0x4003) {
      iVar1 = FUN_00024d48(0x61,*(undefined4 *)(param_1 + 0x130),*(undefined1 *)(param_1 + 0x134),
                           param_1 + 0x114,local_c,param_4 - ((int)local_c - (int)param_3));
      local_c = local_c + iVar1;
    }
    else if (iVar1 == 0x4001) {
      iVar1 = FUN_00024ba8(0x61,*(undefined4 *)(param_1 + 0x130),*(undefined1 *)(param_1 + 0x134),
                           local_c,param_4 - ((int)local_c - (int)param_3));
      local_c = local_c + iVar1;
    }
    if (param_2 == 0) {
      iVar1 = sprintf(local_c,(char *)(DAT_00019bb8 + 0x19b4c),DAT_00019bb4 + 0x19b40);
      local_c = local_c + iVar1;
    }
    else {
      iVar1 = sprintf(local_c,(char *)(DAT_00019bb0 + 0x19b18),param_2,DAT_00019bac + 0x19b0c);
      local_c = local_c + iVar1;
    }
  }
  return (int)local_c - (int)param_3;
}



/* ===== FUN_00019bbc @ 00019bbc size=164 ===== */

undefined4 FUN_00019bbc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  printf((char *)(DAT_00019c68 + 0x19bfc),DAT_00019c64 + 0x19bf4,0x2d5,DAT_00019c60 + 0x19be8);
  FUN_00023354(param_3,0x6f);
  return 0;
}



/* ===== FUN_00019c6c @ 00019c6c size=648 ===== */

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_00019c6c(int param_1,int param_2,int param_3)

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
  printf((char *)(DAT_00019efc + 0x19d14),DAT_00019ef8 + 0x19d0c,0x2ea,DAT_00019ef4 + 0x19d00);
  iVar1 = FUN_0002310c(param_2,local_418);
  if ((iVar1 < 0) && ((local_418[0] & 1) == 0)) {
    FUN_00022b94(param_3,0x196);
    printf((char *)(DAT_00019f08 + 0x19d70),DAT_00019f04 + 0x19d68,0x2ed,DAT_00019f00 + 0x19d5c);
  }
  else {
    if (*local_14 == 1) {
      sVar2 = strlen(local_498);
      uVar3 = *(undefined4 *)(DAT_00019f0c + 0x19dbc);
      *(undefined4 *)(local_498 + sVar2) = *(undefined4 *)(DAT_00019f0c + 0x19db8);
      *(undefined4 *)((int)&uStack_494 + sVar2) = uVar3;
      auStack_490[sVar2] = *(undefined1 *)(DAT_00019f0c + 0x19dc0);
    }
    else {
      sVar2 = strlen(local_498);
      uVar3 = *(undefined4 *)(DAT_00019f10 + 0x19e00);
      *(undefined4 *)(local_498 + sVar2) = *(undefined4 *)(DAT_00019f10 + 0x19dfc);
      *(undefined4 *)((int)&uStack_494 + sVar2) = uVar3;
    }
    strcat(local_498,(char *)((int)local_14 + 6));
    if ((short)local_14[1] != 0) {
      sVar2 = strlen(local_498);
      sprintf(local_498 + sVar2,(char *)(DAT_00019f14 + 0x19e68),(uint)*(ushort *)(local_14 + 1));
    }
    strcat(local_498,local_c);
    local_10 = FUN_00019718(local_c,local_498,local_418 + 1,0x400);
    FUN_00023540(param_3,0);
    FUN_00023614(param_3,local_10);
    uVar3 = FUN_0001e724(local_418 + 1,local_10);
    *(undefined4 *)(param_3 + 0xa8) = uVar3;
  }
  return 0;
}



/* ===== FUN_00019f18 @ 00019f18 size=52 ===== */

int FUN_00019f18(void)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_00019f4c + 0x19f2c);
  *(int *)(DAT_00019f50 + 0x19f3c) = iVar1 + 1;
  return iVar1;
}



/* ===== FUN_00019f54 @ 00019f54 size=1048 ===== */

undefined4 FUN_00019f54(undefined4 *param_1)

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
      printf((char *)(DAT_0001a3bc + 0x1a35c),DAT_0001a3b8 + 0x1a354,0x363,DAT_0001a3b4 + 0x1a348);
      return 0xffffffff;
    }
    local_10 = socket(2,2,0);
    if (local_10 == -1) break;
    local_14 = socket(2,2,0);
    if (local_14 == -1) {
      uVar1 = FUN_00017f80();
      uVar1 = FUN_00017f9c(uVar1);
      printf((char *)(DAT_0001a380 + 0x1a028),DAT_0001a37c + 0x1a020,0x31a,DAT_0001a378 + 0x1a014,
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
          printf((char *)(DAT_0001a38c + 0x1a19c),DAT_0001a388 + 0x1a194,0x347,
                 DAT_0001a384 + 0x1a188,pcVar3);
        }
        else {
          local_1c = local_1c | 0x800;
          local_1c = fcntl(local_10,4,local_1c);
          if ((int)local_1c < 0) {
            piVar2 = __errno_location();
            pcVar3 = strerror(*piVar2);
            printf((char *)(DAT_0001a398 + 0x1a208),DAT_0001a394 + 0x1a200,0x34c,
                   DAT_0001a390 + 0x1a1f4,pcVar3);
          }
        }
        local_1c = fcntl(local_14,3,0);
        if ((int)local_1c < 0) {
          piVar2 = __errno_location();
          pcVar3 = strerror(*piVar2);
          printf((char *)(DAT_0001a3a4 + 0x1a264),DAT_0001a3a0 + 0x1a25c,0x351,
                 DAT_0001a39c + 0x1a250,pcVar3);
        }
        else {
          local_1c = local_1c | 0x800;
          local_1c = fcntl(local_14,4,local_1c);
          if ((int)local_1c < 0) {
            piVar2 = __errno_location();
            pcVar3 = strerror(*piVar2);
            printf((char *)(DAT_0001a3b0 + 0x1a2d0),DAT_0001a3ac + 0x1a2c8,0x356,
                   DAT_0001a3a8 + 0x1a2bc,pcVar3);
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
  uVar1 = FUN_00017f80();
  uVar1 = FUN_00017f9c(uVar1);
  printf((char *)(DAT_0001a374 + 0x19fc8),DAT_0001a370 + 0x19fc0,0x314,DAT_0001a36c + 0x19fb4,uVar1)
  ;
  return 0xffffffff;
}



/* ===== FUN_0001a3c0 @ 0001a3c0 size=684 ===== */

undefined4 FUN_0001a3c0(int param_1,int param_2,int param_3,short param_4,uint param_5)

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
    printf((char *)(DAT_0001a674 + 0x1a444),DAT_0001a670 + 0x1a43c,0x36e,DAT_0001a66c + 0x1a430,
           pcVar3);
    uVar5 = 0xffffffff;
  }
  else {
    *__ptr = (uint)(param_3 != 0);
    __ptr[8] = __in.s_addr;
    uVar4 = FUN_00019f18();
    __ptr[10] = uVar4;
    if (param_3 == 0) {
      iVar6 = FUN_00019f54(__ptr);
      if (iVar6 < 0) {
        free(__ptr);
        return 0xffffffff;
      }
      *(short *)(__ptr + 7) = param_4;
      *(short *)((int)__ptr + 0x1e) = param_4 + 1;
      if (param_2 == 0) {
        iVar6 = DAT_0001a690 + 0x1a5b8;
      }
      else {
        iVar6 = DAT_0001a68c + 0x1a5a8;
      }
      uVar7 = __ptr[10];
      uVar4 = __ptr[6];
      uVar1 = *(ushort *)((int)__ptr + 0x1a);
      pcVar3 = inet_ntoa(__in);
      printf((char *)(DAT_0001a69c + 0x1a634),DAT_0001a698 + 0x1a62c,0x38b,DAT_0001a694 + 0x1a620,
             iVar6,uVar7,(uint)(ushort)uVar4,(uint)uVar1,pcVar3,(uint)(ushort)__ptr[7],
             (uint)*(ushort *)((int)__ptr + 0x1e));
    }
    else {
      __ptr[1] = *(uint *)(param_1 + 4);
      __ptr[2] = param_5;
      __ptr[3] = param_5 + 1;
      if (param_2 == 0) {
        iVar6 = DAT_0001a67c + 0x1a4e8;
      }
      else {
        iVar6 = DAT_0001a678 + 0x1a4d8;
      }
      uVar4 = __ptr[10];
      pcVar3 = inet_ntoa(__in);
      printf((char *)(DAT_0001a688 + 0x1a540),DAT_0001a684 + 0x1a538,0x37e,DAT_0001a680 + 0x1a52c,
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



/* ===== FUN_0001a6a0 @ 0001a6a0 size=164 ===== */

void FUN_0001a6a0(int param_1,int param_2)

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



/* ===== FUN_0001a744 @ 0001a744 size=1096 ===== */

undefined4 FUN_0001a744(int *param_1,int param_2,undefined4 param_3)

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
  printf((char *)(DAT_0001ab94 + 0x1a820),DAT_0001ab90 + 0x1a818,0x3b6,DAT_0001ab8c + 0x1a80c);
  if (*(int *)(param_2 + 0x80) == 0) {
    FUN_00022b94(param_3,0x1cd);
    printf((char *)(DAT_0001aba0 + 0x1a85c),DAT_0001ab9c + 0x1a854,0x3ba,DAT_0001ab98 + 0x1a848);
  }
  else {
    if (**(int **)(param_2 + 0x80) == 1) {
      local_c = 1;
      if ((*(uint *)(*(int *)(param_2 + 0x80) + 4) & 0x20) == 0) {
        printf((char *)(DAT_0001abac + 0x1a8b8),DAT_0001aba8 + 0x1a8b0,0x3c1,DAT_0001aba4 + 0x1a8a4)
        ;
        FUN_00022b94(param_3,0x1cd);
        return 0;
      }
    }
    else if ((*(uint *)(*(int *)(param_2 + 0x80) + 4) & 8) == 0) {
      printf((char *)(DAT_0001abb8 + 0x1a904),DAT_0001abb4 + 0x1a8fc,0x3c7,DAT_0001abb0 + 0x1a8f0);
      FUN_00022b94(param_3,0x1cd);
      return 0;
    }
    snprintf(local_5c,0x3f,(char *)(DAT_0001abc0 + 0x1a938),local_14,DAT_0001abbc + 0x1a92c);
    snprintf(local_9c,0x3f,(char *)(DAT_0001abc8 + 0x1a95c),local_14,DAT_0001abc4 + 0x1a950);
    if ((*(int *)(local_14 + 0x40) == 0) ||
       (iVar1 = FUN_00018c94(local_5c,param_2 + 0x2e), iVar1 == 0)) {
      if ((*(int *)(local_14 + 0x44) == 0) ||
         (iVar1 = FUN_00018c94(local_9c,param_2 + 0x2e), iVar1 == 0)) {
        printf((char *)(DAT_0001abd4 + 0x1aa0c),DAT_0001abd0 + 0x1aa04,0x3d4,DAT_0001abcc + 0x1a9f8,
               param_2 + 0x2e);
        FUN_00022b94(param_3,0x1cd);
        return 0;
      }
      local_10 = 1;
    }
    else {
      local_10 = 0;
    }
    FUN_0001a6a0(param_1,local_10);
    local_1c = FUN_0001a3c0(param_1,local_10,local_c,*(undefined2 *)(*(int *)(param_2 + 0x80) + 0xc)
                            ,*(undefined1 *)(*(int *)(param_2 + 0x80) + 0x10));
    if (local_1c < 0) {
      FUN_00022b94(param_3,500);
    }
    else {
      if (local_10 == 0) {
        local_18 = param_1[0x105];
      }
      else {
        local_18 = param_1[0x106];
      }
      if (local_c == 0) {
        FUN_00022f14(param_3,*(undefined4 *)(local_18 + 0x28),*(undefined2 *)(local_18 + 0x1c),
                     *(undefined2 *)(local_18 + 0x18));
      }
      else {
        FUN_00023030(param_3,*(undefined4 *)(local_18 + 0x28),*(undefined4 *)(local_18 + 8));
      }
      if (*param_1 == 2) {
        if (local_10 == 0) {
          uVar2 = *(undefined4 *)(local_14 + 0x138);
        }
        else {
          uVar2 = *(undefined4 *)(local_14 + 0x13c);
        }
        uVar2 = FUN_000239ac(uVar2);
        *(undefined4 *)(local_18 + 0x24) = uVar2;
      }
      if (*param_1 == 0) {
        *param_1 = 1;
        iVar1 = FUN_00021ca4();
        param_1[3] = iVar1;
        FUN_00022d10(param_3,param_1[3]);
      }
    }
  }
  return 0;
}



/* ===== FUN_0001abd8 @ 0001abd8 size=184 ===== */

undefined4 FUN_0001abd8(int *param_1,undefined4 param_2,undefined4 param_3)

{
  printf((char *)(DAT_0001ac98 + 0x1ac10),DAT_0001ac94 + 0x1ac08,0x3fb,DAT_0001ac90 + 0x1abfc);
  if ((*param_1 == 1) || (*param_1 == 2)) {
    if (*param_1 != 1) {
      *param_1 = 1;
    }
  }
  else {
    FUN_00022b94(param_3,0x1c7);
    printf((char *)(DAT_0001aca4 + 0x1ac5c),DAT_0001aca0 + 0x1ac54,0x3ff,DAT_0001ac9c + 0x1ac48);
  }
  return 0;
}



/* ===== FUN_0001aca8 @ 0001aca8 size=324 ===== */

undefined4 FUN_0001aca8(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[0x108];
  printf((char *)(DAT_0001adf4 + 0x1acec),DAT_0001adf0 + 0x1ace4,0x40d,DAT_0001adec + 0x1acd8);
  if ((*param_1 == 1) || (*param_1 == 2)) {
    if (*param_1 != 2) {
      if ((param_1[0x105] != 0) && (*(int *)(iVar2 + 0x138) != 0)) {
        iVar3 = param_1[0x105];
        uVar1 = FUN_000239ac(*(undefined4 *)(iVar2 + 0x138));
        *(undefined4 *)(iVar3 + 0x24) = uVar1;
      }
      if ((param_1[0x106] != 0) && (*(int *)(iVar2 + 0x13c) != 0)) {
        iVar3 = param_1[0x106];
        uVar1 = FUN_000239ac(*(undefined4 *)(iVar2 + 0x13c));
        *(undefined4 *)(iVar3 + 0x24) = uVar1;
      }
      *param_1 = 2;
    }
  }
  else {
    FUN_00022b94(param_3,0x1c7);
    printf((char *)(DAT_0001ae00 + 0x1ad38),DAT_0001adfc + 0x1ad30,0x411,DAT_0001adf8 + 0x1ad24);
  }
  return 0;
}



/* ===== FUN_0001ae04 @ 0001ae04 size=456 ===== */

undefined4 FUN_0001ae04(undefined4 *param_1,int param_2)

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
  printf((char *)(DAT_0001afd4 + 0x1aec8),DAT_0001afd0 + 0x1aec0,0x425,DAT_0001afcc + 0x1aeb4);
  snprintf(local_4c,0x3f,(char *)(DAT_0001afdc + 0x1aee8),local_c,DAT_0001afd8 + 0x1aedc);
  snprintf(local_8c,0x3f,(char *)(DAT_0001afe4 + 0x1af0c),local_c,DAT_0001afe0 + 0x1af00);
  iVar1 = FUN_00018c94(local_4c,param_2 + 0x2e);
  if (iVar1 == 0) {
    iVar1 = FUN_00018c94(local_8c,param_2 + 0x2e);
    if (iVar1 == 0) {
      FUN_0001a6a0(param_1,0);
      FUN_0001a6a0(param_1,1);
    }
    else {
      FUN_0001a6a0(param_1,1);
    }
  }
  else {
    FUN_0001a6a0(param_1,0);
  }
  if ((param_1[0x105] == 0) && (param_1[0x106] == 0)) {
    *param_1 = 0;
  }
  return 0;
}



/* ===== FUN_0001afe8 @ 0001afe8 size=856 ===== */

undefined4 FUN_0001afe8(int *param_1,int param_2,undefined4 param_3)

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
  FUN_00022b94(param_3,200);
  FUN_00022dec(param_3,0);
  FUN_00023430(param_3,DAT_0001b340 + 0x1b058);
  iVar1 = FUN_00022be0(param_2,&local_18);
  if (iVar1 < 0) {
    FUN_00022b94(param_3,400);
    printf((char *)(DAT_0001b34c + 0x1b0a8),DAT_0001b348 + 0x1b0a0,0x448,DAT_0001b344 + 0x1b094);
    uVar2 = 0;
  }
  else {
    FUN_00022c40(param_3,local_18);
    if (*param_1 != 0) {
      iVar1 = FUN_00022cb0(param_2,&local_1c);
      if ((iVar1 < 0) || (param_1[3] != local_1c)) {
        printf((char *)(DAT_0001b358 + 0x1b120),DAT_0001b354 + 0x1b118,0x44f,DAT_0001b350 + 0x1b10c)
        ;
        FUN_00022b94(param_3,0x1c6);
        return 0;
      }
      FUN_00022d10(param_3,local_1c);
    }
    if (local_c == 0) {
      if (*(int *)(param_2 + 4) != 0) {
        local_c = *(int *)(local_10 + 4);
        while ((local_c != 0 && (iVar1 = FUN_00018c94(local_c,local_14), iVar1 == 0))) {
          local_c = *(int *)(local_c + 0x15c);
        }
        if (local_c == 0) {
          printf((char *)(DAT_0001b370 + 0x1b240),DAT_0001b36c + 0x1b238,0x463,
                 DAT_0001b368 + 0x1b22c,local_14);
          FUN_00022b94(param_3,0x1c6);
          return 0;
        }
        FUN_00018344(param_1,local_c);
      }
    }
    else {
      iVar1 = FUN_00018c94(local_c,local_14);
      if (iVar1 == 0) {
        printf((char *)(DAT_0001b364 + 0x1b19c),DAT_0001b360 + 0x1b194,0x458,DAT_0001b35c + 0x1b188,
               local_14,local_c);
        FUN_00022b94(param_3,0x1c3);
        return 0;
      }
    }
    switch(*(undefined4 *)(param_2 + 4)) {
    case 0:
      uVar2 = FUN_00019bbc(param_1,param_2,param_3);
      break;
    case 1:
      uVar2 = FUN_00019c6c(param_1,param_2,param_3);
      break;
    case 2:
      uVar2 = FUN_0001a744(param_1,param_2,param_3);
      break;
    case 3:
      uVar2 = FUN_0001aca8(param_1,param_2,param_3);
      break;
    case 4:
    default:
      FUN_00022b94(param_3,0x1f5);
      uVar2 = 0;
      break;
    case 5:
      uVar2 = FUN_0001abd8(param_1,param_2,param_3);
      break;
    case 6:
      uVar2 = FUN_0001ae04(param_1,param_2,param_3);
    }
  }
  return uVar2;
}



/* ===== FUN_0001b374 @ 0001b374 size=528 ===== */

int FUN_0001b374(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_c;
  
  if (*(int *)(param_1 + 0x410) != 0x3ff) {
    local_c = recv(*(int *)(param_1 + 4),(void *)(param_1 + 0x10 + *(int *)(param_1 + 0x410)),
                   0x3ff - *(int *)(param_1 + 0x410),0x40);
    if (local_c == 0) {
      printf((char *)(DAT_0001b58c + 0x1b400),DAT_0001b588 + 0x1b3f8,0x486,DAT_0001b584 + 0x1b3ec);
      return -1;
    }
    if (local_c == -1) {
      iVar1 = FUN_00017f80();
      if ((iVar1 != 0xb) && (iVar1 = FUN_00017f80(), iVar1 != 4)) {
        uVar2 = FUN_00017f80();
        uVar2 = FUN_00017f9c(uVar2);
        printf((char *)(DAT_0001b598 + 0x1b46c),DAT_0001b594 + 0x1b464,0x48b,DAT_0001b590 + 0x1b458,
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
    iVar1 = FUN_00021f04(param_2,param_1 + 0x10,*(undefined4 *)(param_1 + 0x410));
    if (iVar1 < 0) {
      printf((char *)(DAT_0001b5a4 + 0x1b510),DAT_0001b5a0 + 0x1b508,0x49a,DAT_0001b59c + 0x1b4fc);
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



/* ===== FUN_0001b5a8 @ 0001b5a8 size=268 ===== */

ssize_t FUN_0001b5a8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_40c;
  undefined1 auStack_408 [1020];
  size_t local_c;
  
  local_40c = 0;
  memset(auStack_408,0,0x3fc);
  local_c = FUN_000222c0(param_2,&local_40c,0x400);
  if ((int)local_c < 0) {
    printf((char *)(DAT_0001b6bc + 0x1b62c),DAT_0001b6b8 + 0x1b624,0x4ad,DAT_0001b6b4 + 0x1b618);
    local_c = -1;
  }
  else {
    local_c = send(*(int *)(param_1 + 4),&local_40c,local_c,0);
    if (local_c == -1) {
      uVar1 = FUN_00017f80();
      uVar1 = FUN_00017f9c(uVar1);
      printf((char *)(DAT_0001b6c8 + 0x1b69c),DAT_0001b6c4 + 0x1b694,0x4b3,DAT_0001b6c0 + 0x1b688,
             uVar1);
      local_c = -1;
    }
  }
  return local_c;
}



/* ===== FUN_0001b6cc @ 0001b6cc size=388 ===== */

ssize_t FUN_0001b6cc(int param_1,int param_2)

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
    iVar4 = FUN_00017f80();
    if ((iVar4 == 0xb) || (iVar4 = FUN_00017f80(), iVar4 == 4)) {
      local_18 = 0;
    }
    else {
      uVar5 = FUN_00017f80();
      uVar5 = FUN_00017f9c(uVar5);
      printf((char *)(DAT_0001b858 + 0x1b79c),DAT_0001b854 + 0x1b794,0x4c6,DAT_0001b850 + 0x1b788,
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
      printf((char *)(DAT_0001b864 + 0x1b824),DAT_0001b860 + 0x1b81c,0x4d0,DAT_0001b85c + 0x1b810,
             pcVar6,(uint)uVar1,(uint)uVar3);
      uVar3 = ntohs(sStack_28.sa_data._0_2_);
      *(uint16_t *)(local_14 + 0x1c) = uVar3;
    }
  }
  return local_18;
}



/* ===== FUN_0001b868 @ 0001b868 size=388 ===== */

ssize_t FUN_0001b868(int param_1,int param_2)

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
    iVar4 = FUN_00017f80();
    if ((iVar4 == 0xb) || (iVar4 = FUN_00017f80(), iVar4 == 4)) {
      local_18 = 0;
    }
    else {
      uVar5 = FUN_00017f80();
      uVar5 = FUN_00017f9c(uVar5);
      printf((char *)(DAT_0001b9f4 + 0x1b938),DAT_0001b9f0 + 0x1b930,0x4e3,DAT_0001b9ec + 0x1b924,
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
      printf((char *)(DAT_0001ba00 + 0x1b9c0),DAT_0001b9fc + 0x1b9b8,0x4ed,DAT_0001b9f8 + 0x1b9ac,
             pcVar6,(uint)uVar1,(uint)uVar3);
      uVar3 = ntohs(sStack_28.sa_data._0_2_);
      *(uint16_t *)(local_14 + 0x1e) = uVar3;
    }
  }
  return local_18;
}



/* ===== FUN_0001ba04 @ 0001ba04 size=740 ===== */

size_t FUN_0001ba04(int *param_1,void *param_2,size_t param_3)

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
      iVar1 = FUN_00017f80();
      if ((iVar1 == 0xb) || (iVar1 = FUN_00017f80(), iVar1 == 4)) {
        param_3 = 0;
      }
      else {
        pcVar2 = inet_ntoa((in_addr)param_1[8]);
        uVar3 = FUN_00017f80();
        uVar3 = FUN_00017f9c(uVar3);
        printf((char *)(DAT_0001bd08 + 0x1bcc8),DAT_0001bd04 + 0x1bcc0,0x528,DAT_0001bd00 + 0x1bcb4,
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
      iVar1 = FUN_00017f80();
      if ((iVar1 == 0xb) || (iVar1 = FUN_00017f80(), iVar1 == 4)) {
        param_3 = 0;
      }
      else {
        pcVar2 = inet_ntoa((in_addr)param_1[8]);
        uVar3 = FUN_00017f80();
        uVar3 = FUN_00017f9c(uVar3);
        printf((char *)(DAT_0001bcf0 + 0x1bb14),DAT_0001bcec + 0x1bb0c,0x50d,DAT_0001bce8 + 0x1bb00,
               pcVar2,uVar3);
        param_3 = 0xffffffff;
      }
    }
    else {
      local_18 = send(local_14,param_2,param_3,0);
      if (local_18 == -1) {
        iVar1 = FUN_00017f80();
        if ((iVar1 == 0xb) || (iVar1 = FUN_00017f80(), iVar1 == 4)) {
          param_3 = 0;
        }
        else {
          pcVar2 = inet_ntoa((in_addr)param_1[8]);
          uVar3 = FUN_00017f80();
          uVar3 = FUN_00017f9c(uVar3);
          printf((char *)(DAT_0001bcfc + 0x1bbbc),DAT_0001bcf8 + 0x1bbb4,0x516,
                 DAT_0001bcf4 + 0x1bba8,param_3,pcVar2,uVar3);
          param_3 = 0xffffffff;
        }
      }
    }
  }
  return param_3;
}



/* ===== FUN_0001bd0c @ 0001bd0c size=348 ===== */

int FUN_0001bd0c(int param_1)

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
    iVar3 = FUN_00023868(local_1c,*(undefined4 *)(local_20 + 0x24));
    if (iVar3 < 1) {
      return local_14;
    }
    FUN_000237b8(local_1c,*(undefined4 *)(local_20 + 0x24),&local_24,&local_28);
    if (0 < *local_28) {
      puVar4 = (uint32_t *)(local_24 + 8);
      uVar1 = htonl(*(uint32_t *)(local_20 + 0x28));
      *puVar4 = uVar1;
      iVar3 = FUN_0001ba04(local_20,local_24,*local_28);
      if (iVar3 != *local_28) {
        return local_14;
      }
      *(int *)(local_20 + 0x2c) = *(int *)(local_20 + 0x2c) + 1;
      *(int *)(local_20 + 0x30) = *(int *)(local_20 + 0x30) + *local_28 + -0xc;
    }
    uVar2 = FUN_00023914(local_1c,*(undefined4 *)(local_20 + 0x24));
    *(undefined4 *)(local_20 + 0x24) = uVar2;
    local_14 = local_14 + 1;
  } while( true );
}



/* ===== FUN_0001be68 @ 0001be68 size=348 ===== */

int FUN_0001be68(int param_1)

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
    iVar3 = FUN_00023868(local_1c,*(undefined4 *)(local_20 + 0x24));
    if (iVar3 < 1) {
      return local_14;
    }
    FUN_000237b8(local_1c,*(undefined4 *)(local_20 + 0x24),&local_24,&local_28);
    if (0 < *local_28) {
      puVar4 = (uint32_t *)(local_24 + 8);
      uVar1 = htonl(*(uint32_t *)(local_20 + 0x28));
      *puVar4 = uVar1;
      iVar3 = FUN_0001ba04(local_20,local_24,*local_28);
      if (iVar3 != *local_28) {
        return local_14;
      }
      *(int *)(local_20 + 0x2c) = *(int *)(local_20 + 0x2c) + 1;
      *(int *)(local_20 + 0x30) = *(int *)(local_20 + 0x30) + *local_28 + -0xc;
    }
    uVar2 = FUN_00023914(local_1c,*(undefined4 *)(local_20 + 0x24));
    *(undefined4 *)(local_20 + 0x24) = uVar2;
    local_14 = local_14 + 1;
  } while( true );
}



/* ===== FUN_0001bfc4 @ 0001bfc4 size=2952 ===== */

undefined4 FUN_0001bfc4(uint *param_1)

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
           (iVar3 = FUN_00023868(*(undefined4 *)(local_2c + 0x138),local_30[9]), 0 < iVar3)) {
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
           (iVar3 = FUN_00023868(*(undefined4 *)(local_2c + 0x13c),local_34[9]), 0 < iVar3)) {
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
      printf((char *)(DAT_0001cb54 + 0x1c600),DAT_0001cb50 + 0x1c5f8,0x5c7,DAT_0001cb4c + 0x1c5ec,
             pcVar2);
      uVar4 = 0xffffffff;
    }
    else if (local_38 == 0) {
      uVar4 = 0;
    }
    else {
      if ((fStack_cc.fds_bits[*local_20 >> 5] >> (*local_20 & 0x1f) & 1U) != 0) {
        FUN_00018aa0(local_20);
      }
      local_c = (int *)local_20[3];
LAB_0001cb30:
      piVar1 = local_c;
      if (local_c != (int *)0x0) {
        local_1c = local_c;
        local_3c = local_c[0x108];
        local_40 = (int *)local_c[0x105];
        local_44 = (int *)local_c[0x106];
        local_c = (int *)local_c[0x109];
        if ((fStack_cc.fds_bits[(uint)piVar1[1] >> 5] >> (piVar1[1] & 0x1fU) & 1U) != 0)
        goto LAB_0001c6dc;
        goto LAB_0001c824;
      }
      uVar4 = 1;
    }
  }
  return uVar4;
LAB_0001c6dc:
  do {
    FUN_00021abc(local_2a4);
    FUN_00021abc(auStack_1f8);
    local_38 = FUN_0001b374(local_1c,local_2a4);
    if (local_38 == 0) break;
    if (local_38 < 0) {
      FUN_00018be8(local_1c);
      local_1c = (int *)0x0;
      break;
    }
    if (local_2a4[0] == 2) {
      FUN_00021af8(local_2a4);
    }
    else if (local_2a4[0] == 0) {
      local_38 = FUN_0001afe8(local_1c,local_2a4,auStack_1f8);
      if (local_38 < 0) {
        printf((char *)(DAT_0001cb6c + 0x1c7d4),DAT_0001cb68 + 0x1c7cc,0x5f8,DAT_0001cb64 + 0x1c7c0)
        ;
      }
      else {
        FUN_0001b5a8(local_1c,auStack_1f8);
      }
      FUN_00021af8(local_2a4);
      FUN_00021af8(auStack_1f8);
    }
    else {
      printf((char *)(DAT_0001cb60 + 0x1c780),DAT_0001cb5c + 0x1c778,0x5f1,DAT_0001cb58 + 0x1c76c);
      FUN_00021af8(local_2a4);
    }
  } while (local_1c != (int *)0x0);
  if (local_1c != (int *)0x0) {
LAB_0001c824:
    if (*local_1c == 2) {
      if ((local_40 != (int *)0x0) &&
         (iVar3 = FUN_00023868(*(undefined4 *)(local_3c + 0x138),local_40[9]), 0 < iVar3)) {
        if ((*local_40 == 0) ||
           ((fStack_14c.fds_bits[(uint)local_40[1] >> 5] >> (local_40[1] & 0x1fU) & 1U) == 0)) {
          if ((*local_40 == 0) &&
             ((fStack_14c.fds_bits[(uint)local_40[4] >> 5] >> (local_40[4] & 0x1fU) & 1U) != 0)) {
            FUN_0001bd0c(local_1c);
          }
        }
        else {
          FUN_0001bd0c(local_1c);
        }
      }
      if ((local_44 != (int *)0x0) &&
         (iVar3 = FUN_00023868(*(undefined4 *)(local_3c + 0x13c),local_44[9]), 0 < iVar3)) {
        if ((*local_44 == 0) ||
           ((fStack_14c.fds_bits[(uint)local_44[1] >> 5] >> (local_44[1] & 0x1fU) & 1U) == 0)) {
          if ((*local_44 == 0) &&
             ((fStack_14c.fds_bits[(uint)local_44[4] >> 5] >> (local_44[4] & 0x1fU) & 1U) != 0)) {
            FUN_0001be68(local_1c);
          }
        }
        else {
          FUN_0001be68(local_1c);
        }
      }
      if ((local_40 != (int *)0x0) && (*local_40 == 0)) {
        if ((fStack_cc.fds_bits[(uint)local_40[4] >> 5] >> (local_40[4] & 0x1fU) & 1U) != 0) {
          FUN_0001b6cc(local_1c,0);
        }
        if ((fStack_cc.fds_bits[(uint)local_40[5] >> 5] >> (local_40[5] & 0x1fU) & 1U) != 0) {
          FUN_0001b868(local_1c,0);
        }
      }
      if ((local_44 != (int *)0x0) && (*local_44 == 0)) {
        if ((fStack_cc.fds_bits[(uint)local_44[4] >> 5] >> (local_44[4] & 0x1fU) & 1U) != 0) {
          FUN_0001b6cc(local_1c,1);
        }
        if ((fStack_cc.fds_bits[(uint)local_44[5] >> 5] >> (local_44[5] & 0x1fU) & 1U) != 0) {
          FUN_0001b868(local_1c,1);
        }
      }
    }
  }
  goto LAB_0001cb30;
}



/* ===== FUN_0001cb70 @ 0001cb70 size=1940 ===== */

int FUN_0001cb70(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
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
    local_1c = FUN_000239ac(local_30);
    for (local_18 = 0; local_18 < 600; local_18 = local_18 + 1) {
      iVar3 = FUN_00023914(local_30,local_1c);
      iVar4 = FUN_00023970(local_30);
      if (iVar3 == iVar4) {
        FUN_00023a90(local_30);
      }
      FUN_000237b8(local_30,local_1c,aiStack_9a0 + local_18,auStack_1c64 + local_18);
      aiStack_1304[local_18] = 0x5b0;
      local_1c = FUN_00023914(local_30,local_1c);
    }
    aiStack_9a0[local_18] = 0;
    aiStack_1304[local_18] = 0;
    for (local_14 = *(int **)(local_2c + 0x154); local_14 != (int *)0x0;
        local_14 = (int *)local_14[0x10b]) {
      local_34 = local_14[0x105];
      if (((*local_14 == 2) && (local_34 != 0)) &&
         ((iVar3 = FUN_00023868(local_30,*(undefined4 *)(local_34 + 0x24)), iVar3 == 0 &&
          (iVar4 = *(int *)(local_34 + 0x24), iVar3 = FUN_000239ac(local_30), iVar4 != iVar3)))) {
        uVar1 = FUN_00023970(local_30);
        *(undefined4 *)(local_34 + 0x24) = uVar1;
        pcVar2 = inet_ntoa((in_addr)local_14[2]);
        printf((char *)(DAT_0001d30c + 0x1ce18),DAT_0001d308 + 0x1ce10,0x658,DAT_0001d304 + 0x1ce04,
               pcVar2);
      }
    }
    if (*(int *)(local_2c + 0x40) == 1) {
      if (((*(int *)(local_2c + 0xcc) == 0) || (*(int *)(local_2c + 0xcc) == 0)) &&
         (iVar3 = FUN_00024620(param_2,param_3,local_2c + 0x48), iVar3 < 0)) {
        printf((char *)(DAT_0001d318 + 0x1cec8),DAT_0001d314 + 0x1cec0,0x660,DAT_0001d310 + 0x1ceb4)
        ;
      }
    }
    else if ((*(int *)(local_2c + 0x40) == 2) &&
            ((((*(int *)(local_2c + 0x110) == 0 || (*(int *)(local_2c + 0x110) == 0)) ||
              (*(int *)(local_2c + 0x108) == 0)) &&
             (iVar3 = FUN_00024658(param_2,param_3,local_2c + 0x48), iVar3 < 0)))) {
      printf((char *)(DAT_0001d324 + 0x1cf50),DAT_0001d320 + 0x1cf48,0x66a,DAT_0001d31c + 0x1cf3c);
    }
    local_24 = 0;
    local_20 = 0;
    while( true ) {
      if (((param_3 <= local_24) || (aiStack_9a0[local_20] == 0)) || (aiStack_1304[local_20] < 1))
      goto LAB_0001d1f0;
      local_38 = 0;
      local_1c68 = 0;
      local_38 = FUN_00023dd8(param_2 + local_24,param_3 - local_24,&local_1c68);
      if (local_38 == 0) break;
      if (*(int *)(local_2c + 0x40) == 1) {
        local_28 = FUN_00024e50(local_2c + 0x118,local_38,local_1c68,param_6,param_5,param_6,
                                aiStack_9a0 + local_20,aiStack_1304 + local_20);
        if (local_28 < 1) {
          printf((char *)(DAT_0001d33c + 0x1d0b0),DAT_0001d338 + 0x1d0a8,0x685,
                 DAT_0001d334 + 0x1d09c,local_28);
          return -1;
        }
      }
      else if (*(int *)(local_2c + 0x40) == 2) {
        local_28 = FUN_000253ec(local_2c + 0x118,local_38,local_1c68,param_6,param_5,param_6,
                                aiStack_9a0 + local_20,aiStack_1304 + local_20);
        if (local_28 < 1) {
          printf((char *)(DAT_0001d348 + 0x1d14c),DAT_0001d344 + 0x1d144,0x68c,
                 DAT_0001d340 + 0x1d138,local_28);
          return -1;
        }
      }
      local_20 = local_20 + local_28;
      local_24 = (local_38 - param_2) + local_1c68;
    }
    printf((char *)(DAT_0001d330 + 0x1cffc),DAT_0001d32c + 0x1cff4,0x67c,DAT_0001d328 + 0x1cfe8);
LAB_0001d1f0:
    for (local_18 = 0; local_18 < local_20; local_18 = local_18 + 1) {
      *(int *)auStack_1c64[local_18] = aiStack_1304[local_18];
      FUN_000239e8(local_30);
    }
    for (local_14 = *(int **)(local_2c + 0x154); local_14 != (int *)0x0;
        local_14 = (int *)local_14[0x10b]) {
      local_3c = local_14[0x105];
      if ((*local_14 == 2) && (local_3c != 0)) {
        FUN_0001e200(local_3c,*(undefined4 *)(local_2c + 0x144),*(undefined4 *)(local_2c + 0x140),
                     *(undefined4 *)(local_2c + 0x144),param_5,param_6,
                     *(undefined4 *)(local_2c + 0x120));
        FUN_0001bd0c(local_14);
      }
    }
  }
  return param_3;
}



/* ===== FUN_0001d34c @ 0001d34c size=1968 ===== */

int FUN_0001d34c(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 param_5,
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
    local_1c = FUN_000239ac(local_30);
    for (local_18 = 0; local_18 < 600; local_18 = local_18 + 1) {
      iVar3 = FUN_00023914(local_30,local_1c);
      iVar4 = FUN_00023970(local_30);
      if (iVar3 == iVar4) {
        FUN_00023a90(local_30);
      }
      FUN_000237b8(local_30,local_1c,aiStack_9a0 + local_18,auStack_1c64 + local_18);
      aiStack_1304[local_18] = 0x5b0;
      local_1c = FUN_00023914(local_30,local_1c);
    }
    aiStack_9a0[local_18] = 0;
    aiStack_1304[local_18] = 0;
    for (local_14 = *(int **)(local_2c + 0x154); local_14 != (int *)0x0;
        local_14 = (int *)local_14[0x10b]) {
      local_34 = local_14[0x105];
      if (((*local_14 == 2) && (local_34 != 0)) &&
         ((iVar3 = FUN_00023868(local_30,*(undefined4 *)(local_34 + 0x24)), iVar3 == 0 &&
          (iVar4 = *(int *)(local_34 + 0x24), iVar3 = FUN_000239ac(local_30), iVar4 != iVar3)))) {
        uVar1 = FUN_00023970(local_30);
        *(undefined4 *)(local_34 + 0x24) = uVar1;
        pcVar2 = inet_ntoa((in_addr)local_14[2]);
        printf((char *)(DAT_0001db04 + 0x1d600),DAT_0001db00 + 0x1d5f8,0x6c9,DAT_0001dafc + 0x1d5ec,
               pcVar2);
      }
    }
    if (*(int *)(local_2c + 0x40) == 1) {
      if (((*(int *)(local_2c + 0xcc) == 0) || (*(int *)(local_2c + 0xcc) == 0)) &&
         (iVar3 = FUN_00024620(param_3,param_4,local_2c + 0x48), iVar3 < 0)) {
        printf((char *)(DAT_0001db10 + 0x1d6b0),DAT_0001db0c + 0x1d6a8,0x6d1,DAT_0001db08 + 0x1d69c)
        ;
      }
    }
    else if ((*(int *)(local_2c + 0x40) == 2) &&
            ((((*(int *)(local_2c + 0x110) == 0 || (*(int *)(local_2c + 0x110) == 0)) ||
              (*(int *)(local_2c + 0x108) == 0)) &&
             (iVar3 = FUN_00024658(param_3,param_4,local_2c + 0x48), iVar3 < 0)))) {
      printf((char *)(DAT_0001db1c + 0x1d738),DAT_0001db18 + 0x1d730,0x6db,DAT_0001db14 + 0x1d724);
    }
    local_24 = 0;
    local_20 = 0;
    while( true ) {
      if (((param_4 <= local_24) || (aiStack_9a0[local_20] == 0)) || (aiStack_1304[local_20] < 1))
      goto LAB_0001d9d8;
      local_38 = 0;
      local_1c68 = 0;
      local_38 = FUN_00023dd8(param_3 + local_24,param_4 - local_24,&local_1c68);
      if (local_38 == 0) break;
      if (*(int *)(local_2c + 0x40) == 1) {
        local_28 = FUN_00024e50(local_2c + 0x118,local_38,local_1c68,param_6,param_5,param_6,
                                aiStack_9a0 + local_20,aiStack_1304 + local_20);
        if (local_28 < 1) {
          printf((char *)(DAT_0001db34 + 0x1d898),DAT_0001db30 + 0x1d890,0x6f6,
                 DAT_0001db2c + 0x1d884,local_28);
          return -1;
        }
      }
      else if (*(int *)(local_2c + 0x40) == 2) {
        local_28 = FUN_000253ec(local_2c + 0x118,local_38,local_1c68,param_6,param_5,param_6,
                                aiStack_9a0 + local_20,aiStack_1304 + local_20);
        if (local_28 < 1) {
          printf((char *)(DAT_0001db40 + 0x1d934),DAT_0001db3c + 0x1d92c,0x6fd,
                 DAT_0001db38 + 0x1d920,local_28);
          return -1;
        }
      }
      local_20 = local_20 + local_28;
      local_24 = (local_38 - param_3) + local_1c68;
    }
    printf((char *)(DAT_0001db28 + 0x1d7e4),DAT_0001db24 + 0x1d7dc,0x6ed,DAT_0001db20 + 0x1d7d0);
LAB_0001d9d8:
    for (local_18 = 0; local_18 < local_20; local_18 = local_18 + 1) {
      *(int *)auStack_1c64[local_18] = aiStack_1304[local_18];
      FUN_000239e8(local_30);
    }
    for (local_14 = *(int **)(local_2c + 0x154); local_14 != (int *)0x0;
        local_14 = (int *)local_14[0x10b]) {
      local_3c = local_14[0x105];
      if ((*local_14 == 2) && (local_3c != 0)) {
        FUN_0001e200(local_3c,*(undefined4 *)(local_2c + 0x144),*(undefined4 *)(local_2c + 0x140),
                     *(undefined4 *)(local_2c + 0x144),param_5,param_6,
                     *(undefined4 *)(local_2c + 0x120));
        FUN_0001bd0c(local_14);
      }
    }
    FUN_0001bfc4(param_1);
  }
  return param_4;
}



/* ===== FUN_0001db44 @ 0001db44 size=1140 ===== */

undefined4
FUN_0001db44(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
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
    local_1c = FUN_000239ac(local_28);
    for (local_18 = 0; local_18 < 0x14; local_18 = local_18 + 1) {
      iVar3 = FUN_00023914(local_28,local_1c);
      iVar4 = FUN_00023970(local_28);
      if (iVar3 == iVar4) {
        FUN_00023a90(local_28);
      }
      FUN_000237b8(local_28,local_1c,auStack_84 + local_18,auStack_128 + local_18);
      auStack_d8[local_18] = 0x5b0;
      local_1c = FUN_00023914(local_28,local_1c);
    }
    auStack_84[local_18] = 0;
    auStack_d8[local_18] = 0;
    for (local_14 = *(int **)(local_24 + 0x154); local_14 != (int *)0x0;
        local_14 = (int *)local_14[0x10b]) {
      local_2c = local_14[0x106];
      if (((*local_14 == 2) && (local_2c != 0)) &&
         ((iVar3 = FUN_00023868(local_28,*(undefined4 *)(local_2c + 0x24)), iVar3 == 0 &&
          (iVar4 = *(int *)(local_2c + 0x24), iVar3 = FUN_000239ac(local_28), iVar4 != iVar3)))) {
        uVar1 = FUN_00023970(local_28);
        *(undefined4 *)(local_2c + 0x24) = uVar1;
        pcVar2 = inet_ntoa((in_addr)local_14[2]);
        printf((char *)(DAT_0001dfc0 + 0x1dd8c),DAT_0001dfbc + 0x1dd84,0x73c,DAT_0001dfb8 + 0x1dd78,
               pcVar2);
      }
    }
    iVar3 = *(int *)(local_24 + 0x44);
    if (0x4000 < iVar3) {
      if (iVar3 < 0x4003) {
        local_20 = FUN_000259c0(local_24 + 0x128,param_2,param_3,param_6,param_5,param_6,auStack_84,
                                auStack_d8);
        if (local_20 < 1) {
          printf((char *)(DAT_0001dfcc + 0x1de3c),DAT_0001dfc8 + 0x1de34,0x745,
                 DAT_0001dfc4 + 0x1de28,local_20);
          return 0xffffffff;
        }
      }
      else if (iVar3 == 0x4003) {
        local_20 = FUN_00025cd8(local_24 + 0x128,param_2,param_3,param_6,param_5,param_6,auStack_84,
                                auStack_d8);
        if (local_20 < 1) {
          printf((char *)(DAT_0001dfd8 + 0x1dea8),DAT_0001dfd4 + 0x1dea0,0x74c,
                 DAT_0001dfd0 + 0x1de94,local_20);
          return 0xffffffff;
        }
      }
    }
    for (local_18 = 0; local_18 < local_20; local_18 = local_18 + 1) {
      *(undefined4 *)auStack_128[local_18] = auStack_d8[local_18];
      FUN_000239e8(local_28);
    }
    for (local_14 = *(int **)(local_24 + 0x154); local_14 != (int *)0x0;
        local_14 = (int *)local_14[0x10b]) {
      local_30 = local_14[0x106];
      if ((*local_14 == 2) && (local_30 != 0)) {
        FUN_0001e200(local_30,*(undefined4 *)(local_24 + 0x14c),*(undefined4 *)(local_24 + 0x148),
                     *(undefined4 *)(local_24 + 0x14c),param_5,param_6,
                     *(undefined4 *)(local_24 + 0x130));
        FUN_0001be68(local_14);
      }
    }
  }
  return param_3;
}



/* ===== FUN_0001dfdc @ 0001dfdc size=148 ===== */

longlong FUN_0001dfdc(void)

{
  longlong lVar1;
  timespec local_18;
  
  clock_gettime(1,&local_18);
  lVar1 = FUN_00025e24(local_18.tv_nsec,local_18.tv_nsec >> 0x1f,1000,0);
  return lVar1 + CONCAT44((local_18.tv_sec >> 0x1f) * 1000000 +
                          (int)((ulonglong)(uint)local_18.tv_sec * 1000000 >> 0x20),
                          (int)((ulonglong)(uint)local_18.tv_sec * 1000000));
}



/* ===== FUN_0001e070 @ 0001e070 size=120 ===== */

undefined8 FUN_0001e070(void)

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



/* ===== FUN_0001e0e8 @ 0001e0e8 size=48 ===== */

longlong FUN_0001e0e8(void)

{
  longlong lVar1;
  
  lVar1 = FUN_0001e070();
  return lVar1 + CONCAT44(DAT_0001e11c,DAT_0001e118);
}



/* ===== FUN_0001e120 @ 0001e120 size=112 ===== */

undefined4
FUN_0001e120(int param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,int param_6)

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



/* ===== FUN_0001e200 @ 0001e200 size=1168 ===== */

size_t FUN_0001e200(int *param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,
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
    uVar6 = (int)((ulonglong)*(undefined8 *)(param_1 + 0xe) >> 0x20) + DAT_0001e56c +
            (uint)CARRY4(uVar8,DAT_0001e568);
    bVar7 = uVar6 <= param_6;
    if (param_6 == uVar6) {
      bVar7 = uVar8 + DAT_0001e568 <= param_5;
    }
    if (!bVar7) {
      return 0;
    }
  }
  uStack_3c = uStack_48;
  local_38 = local_44;
  local_14 = FUN_00025e24(param_3 + param_5,param_4 + param_6 + (uint)CARRY4(param_3,param_5),
                          1000000,0);
  FUN_00025e24(param_3 + param_5,param_4 + param_6 + (uint)CARRY4(param_3,param_5),1000000,0);
  local_18 = FUN_00025e24(0,extraout_r2,1000000,0);
  local_1c = FUN_00025e24((int)((ulonglong)param_7 * (ulonglong)param_5),
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
      iVar2 = FUN_00017f80();
      if ((iVar2 != 0xb) && (iVar2 = FUN_00017f80(), iVar2 != 4)) {
        pcVar3 = inet_ntoa((in_addr)param_1[8]);
        uVar4 = FUN_00017f80();
        uVar4 = FUN_00017f9c(uVar4);
        printf((char *)(DAT_0001e584 + 0x1e684),DAT_0001e580 + 0x1e67c,0x7f0,DAT_0001e57c + 0x1e670,
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
      iVar2 = FUN_00017f80();
      if ((iVar2 != 0xb) && (iVar2 = FUN_00017f80(), iVar2 != 4)) {
        pcVar3 = inet_ntoa((in_addr)param_1[8]);
        uVar4 = FUN_00017f80();
        uVar4 = FUN_00017f9c(uVar4);
        printf((char *)(DAT_0001e578 + 0x1e558),DAT_0001e574 + 0x1e550,0x7de,DAT_0001e570 + 0x1e544,
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



/* ===== FUN_0001e6b0 @ 0001e6b0 size=68 ===== */

void * FUN_0001e6b0(size_t param_1)

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



/* ===== FUN_0001e6f4 @ 0001e6f4 size=48 ===== */

void FUN_0001e6f4(void *param_1)

{
  if (param_1 != (void *)0x0) {
    free(param_1);
  }
  return;
}



/* ===== FUN_0001e724 @ 0001e724 size=104 ===== */

void * FUN_0001e724(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = calloc(1,param_2);
  if ((__dest != (void *)0x0) && (param_1 != (void *)0x0)) {
    memcpy(__dest,param_1,param_2);
  }
  return __dest;
}



/* ===== FUN_0001e78c @ 0001e78c size=120 ===== */

void * FUN_0001e78c(char *param_1)

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



/* ===== FUN_0001e804 @ 0001e804 size=172 ===== */

undefined4 FUN_0001e804(int param_1,int param_2,int param_3)

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



/* ===== FUN_0001e8b0 @ 0001e8b0 size=204 ===== */

undefined4 FUN_0001e8b0(int param_1,int param_2,char *param_3)

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



/* ===== FUN_0001e97c @ 0001e97c size=928 ===== */

int FUN_0001e97c(byte *param_1,int *param_2)

{
  byte *__src;
  int iVar1;
  int iVar2;
  size_t local_1c;
  byte *local_18;
  byte *local_14;
  
  iVar2 = DAT_0001ed1c + 0x1e99c;
  local_14 = param_1;
  iVar1 = FUN_0001e8b0(DAT_0001ed20 + 0x1e9b4,3,param_1);
  *param_2 = iVar1;
  if (*param_2 == 2) {
    printf((char *)(DAT_0001ed2c + 0x1ea00),DAT_0001ed28 + 0x1e9f8,0xaa,DAT_0001ed24 + 0x1e9ec,
           param_1);
    iVar1 = -1;
  }
  else {
    *(undefined2 *)(param_2 + 1) = 0;
    *(undefined1 *)((int)param_2 + 6) = 0;
    *(undefined1 *)((int)param_2 + 0x26) = 0;
    for (; ((*(ushort *)(**(int **)(iVar2 + DAT_0001ed30) + (uint)*local_14 * 2) & 2) != 0 ||
           (*local_14 == 0x3a)); local_14 = local_14 + 1) {
    }
    if ((*local_14 == 0x2f) && (local_14[1] == 0x2f)) {
      local_14 = local_14 + 2;
      for (local_18 = local_14;
          (((*(ushort *)(**(int **)(iVar2 + DAT_0001ed30) + (uint)*local_18 * 2) & 0x80) != 0 &&
           (*local_18 != 0x3a)) && (*local_18 != 0x2f)); local_18 = local_18 + 1) {
      }
      if (*local_18 == 0x3a) {
        iVar1 = sscanf((char *)(local_18 + 1),(char *)(DAT_0001ed40 + 0x1eb64),&local_1c);
        if (iVar1 != 1) {
          printf((char *)(DAT_0001ed4c + 0x1eb9c),DAT_0001ed48 + 0x1eb94,0xbc,DAT_0001ed44 + 0x1eb88
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
             (*(ushort *)(**(int **)(iVar2 + DAT_0001ed30) + (uint)*local_18 * 2) & 0x80) != 0 &&
             (*local_18 != 0x2f)); local_18 = local_18 + 1) {
      }
      if (*local_18 == 0x2f) {
        local_14 = local_18;
        while ((*(ushort *)(**(int **)(iVar2 + DAT_0001ed30) + (uint)*local_18 * 2) & 0x80) != 0) {
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
      printf((char *)(DAT_0001ed3c + 0x1eac4),DAT_0001ed38 + 0x1eabc,0xb3,DAT_0001ed34 + 0x1eab0,
             param_1);
      iVar1 = -1;
    }
  }
  return iVar1;
}



/* ===== FUN_0001ed50 @ 0001ed50 size=256 ===== */

size_t FUN_0001ed50(undefined4 *param_1,char *param_2,size_t param_3)

{
  undefined4 uVar1;
  size_t sVar2;
  
  if (*(short *)(param_1 + 1) == 0) {
    uVar1 = FUN_0001e804(DAT_0001ee58 + 0x1ee00,3,*param_1);
    snprintf(param_2,param_3,(char *)(DAT_0001ee5c + 0x1ee30),uVar1,(int)param_1 + 6,
             (int)param_1 + 0x26);
  }
  else {
    uVar1 = FUN_0001e804(DAT_0001ee50 + 0x1ed98,3,*param_1);
    snprintf(param_2,param_3,(char *)(DAT_0001ee54 + 0x1edd4),uVar1,(int)param_1 + 6,
             (uint)*(ushort *)(param_1 + 1),(int)param_1 + 0x26);
  }
  sVar2 = strlen(param_2);
  return sVar2;
}



/* ===== FUN_0001ee60 @ 0001ee60 size=788 ===== */

undefined4 FUN_0001ee60(undefined4 *param_1,byte *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int local_18;
  byte *local_14;
  
  iVar2 = DAT_0001f174 + 0x1ee80;
  local_14 = param_2;
  local_18 = FUN_0001e8b0(DAT_0001f178 + 0x1ee98,0xc,param_2);
  if (local_18 == 0xb) {
    local_18 = FUN_0001e8b0(DAT_0001f190 + 0x1f000,2,local_14);
    if (local_18 == 1) {
      if (*local_14 == 0x24) {
        *param_1 = 2;
        *(byte *)(param_1 + 1) = local_14[1];
        *(undefined2 *)((int)param_1 + 6) = *(undefined2 *)(local_14 + 2);
        *(undefined1 *)(param_1 + 2) = 0;
        uVar1 = 0;
      }
      else {
        printf((char *)(DAT_0001f1ac + 0x1f124),DAT_0001f1a8 + 0x1f11c,0x10c,DAT_0001f1a4 + 0x1f110,
               param_2);
        uVar1 = 0xffffffff;
      }
    }
    else {
      *param_1 = 1;
      param_1[1] = local_18;
      while ((*(ushort *)(**(int **)(iVar2 + DAT_0001f17c) + (uint)*local_14 * 2) & 0x80) != 0) {
        local_14 = local_14 + 1;
      }
      local_14 = local_14 + 1;
      iVar2 = sscanf((char *)local_14,(char *)(DAT_0001f194 + 0x1f090),&local_18);
      if (iVar2 == 1) {
        param_1[2] = local_18;
        uVar1 = 0;
      }
      else {
        printf((char *)(DAT_0001f1a0 + 0x1f0cc),DAT_0001f19c + 0x1f0c4,0x104,DAT_0001f198 + 0x1f0b8,
               param_2);
        uVar1 = 0xffffffff;
      }
    }
  }
  else {
    *param_1 = 0;
    param_1[1] = local_18;
    while ((*(ushort *)(**(int **)(iVar2 + DAT_0001f17c) + (uint)*local_14 * 2) & 0x80) != 0) {
      local_14 = local_14 + 1;
    }
    local_14 = local_14 + 1;
    local_18 = FUN_0001e97c(local_14,param_1 + 2);
    if (local_18 < 1) {
      uVar1 = 0xffffffff;
    }
    else {
      while ((*(ushort *)(**(int **)(iVar2 + DAT_0001f17c) + (uint)*local_14 * 2) & 0x80) != 0) {
        local_14 = local_14 + 1;
      }
      local_14 = local_14 + 1;
      local_18 = FUN_0001e8b0(DAT_0001f180 + 0x1ef9c,2,local_14);
      if (local_18 == 1) {
        printf((char *)(DAT_0001f18c + 0x1efdc),DAT_0001f188 + 0x1efd4,0xf7,DAT_0001f184 + 0x1efc8,
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



/* ===== FUN_0001f1b0 @ 0001f1b0 size=536 ===== */

char * FUN_0001f1b0(int *param_1,char *param_2,size_t param_3)

{
  undefined4 uVar1;
  size_t sVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  
  if (*param_1 == 0) {
    uVar1 = FUN_0001e804(DAT_0001f3c8 + 0x1f200,0xc,param_1[1]);
    snprintf(param_2,param_3,(char *)(DAT_0001f3cc + 0x1f214),uVar1);
    sVar2 = strlen(param_2);
    pcVar5 = param_2 + sVar2;
    iVar6 = param_3 - sVar2;
    if (iVar6 < 2) {
      pcVar5 = pcVar5 + -(int)param_2;
    }
    else {
      iVar3 = FUN_0001ed50(param_1 + 2,pcVar5,iVar6);
      pcVar5 = pcVar5 + iVar3;
      if (iVar6 - iVar3 < 2) {
        pcVar5 = pcVar5 + -(int)param_2;
      }
      else {
        uVar1 = FUN_0001e804(DAT_0001f3d0 + 0x1f2e0,2,param_1[0x1c]);
        snprintf(pcVar5,iVar6 - iVar3,(char *)(DAT_0001f3d4 + 0x1f2f4),uVar1);
        sVar2 = strlen(pcVar5);
        pcVar5 = pcVar5 + (sVar2 - (int)param_2);
      }
    }
  }
  else if (*param_1 == 1) {
    uVar1 = FUN_0001e804(DAT_0001f3d8 + 0x1f354,2,param_1[1]);
    iVar6 = param_1[2];
    uVar4 = FUN_0001e804(DAT_0001f3dc + 0x1f380,0x2b,param_1[2]);
    snprintf(param_2,param_3,(char *)(DAT_0001f3e0 + 0x1f3a0),uVar1,iVar6,uVar4);
    pcVar5 = (char *)strlen(param_2);
  }
  else {
    pcVar5 = (char *)0x0;
  }
  return pcVar5;
}



/* ===== FUN_0001f3e4 @ 0001f3e4 size=952 ===== */

undefined4 FUN_0001f3e4(int param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_14;
  char *local_10;
  int local_c;
  
  local_c = param_1 + 4;
  if (*(int *)(param_1 + 0x80) != 0) {
    FUN_0001e6f4(*(undefined4 *)(param_1 + 0x80));
    *(undefined4 *)(local_c + 0x7c) = 0;
  }
  uVar1 = FUN_0001e6b0(0x14);
  *(undefined4 *)(local_c + 0x7c) = uVar1;
  if (*(int *)(local_c + 0x7c) == 0) {
    printf((char *)(DAT_0001f7a8 + 0x1f480),DAT_0001f7a4 + 0x1f478,0x153,DAT_0001f7a0 + 0x1f46c,
           DAT_0001f79c + 0x1f460);
    uVar1 = 0xffffffff;
  }
  else {
    local_10 = strstr(param_2,(char *)(DAT_0001f7ac + 0x1f494));
    if (local_10 == (char *)0x0) {
      printf((char *)(DAT_0001f7b8 + 0x1f4d4),DAT_0001f7b4 + 0x1f4cc,0x159,DAT_0001f7b0 + 0x1f4c0,
             param_2);
      FUN_0001e6f4(*(undefined4 *)(local_c + 0x7c));
      *(undefined4 *)(local_c + 0x7c) = 0;
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = FUN_0001e8b0(DAT_0001f7bc + 0x1f50c,3,local_10);
      **(undefined4 **)(local_c + 0x7c) = uVar1;
      local_10 = strstr(param_2,(char *)(DAT_0001f7c0 + 0x1f52c));
      if ((local_10 != (char *)0x0) &&
         (iVar2 = sscanf(local_10,(char *)(DAT_0001f7c4 + 0x1f558),&local_14), iVar2 == 1)) {
        *(uint *)(*(int *)(local_c + 0x7c) + 4) = *(uint *)(*(int *)(local_c + 0x7c) + 4) | 1;
        *(undefined4 *)(*(int *)(local_c + 0x7c) + 8) = local_14;
      }
      local_10 = strstr(param_2,(char *)(DAT_0001f7c8 + 0x1f5a4));
      if (local_10 != (char *)0x0) {
        *(uint *)(*(int *)(local_c + 0x7c) + 4) = *(uint *)(*(int *)(local_c + 0x7c) + 4) | 2;
      }
      local_10 = strstr(param_2,(char *)(DAT_0001f7cc + 0x1f5e4));
      if (local_10 != (char *)0x0) {
        *(uint *)(*(int *)(local_c + 0x7c) + 4) = *(uint *)(*(int *)(local_c + 0x7c) + 4) | 4;
      }
      local_10 = strstr(param_2,(char *)(DAT_0001f7d0 + 0x1f624));
      if ((local_10 != (char *)0x0) &&
         (iVar2 = sscanf(local_10,(char *)(DAT_0001f7d4 + 0x1f650),&local_14), iVar2 == 1)) {
        *(uint *)(*(int *)(local_c + 0x7c) + 4) = *(uint *)(*(int *)(local_c + 0x7c) + 4) | 8;
        *(short *)(*(int *)(local_c + 0x7c) + 0xc) = (short)local_14;
      }
      local_10 = strstr(param_2,(char *)(DAT_0001f7d8 + 0x1f6a0));
      if ((local_10 != (char *)0x0) &&
         (iVar2 = sscanf(local_10,(char *)(DAT_0001f7dc + 0x1f6cc),&local_14), iVar2 == 1)) {
        *(uint *)(*(int *)(local_c + 0x7c) + 4) = *(uint *)(*(int *)(local_c + 0x7c) + 4) | 0x10;
        *(short *)(*(int *)(local_c + 0x7c) + 0xe) = (short)local_14;
      }
      local_10 = strstr(param_2,(char *)(DAT_0001f7e0 + 0x1f71c));
      if ((local_10 != (char *)0x0) &&
         (iVar2 = sscanf(local_10,(char *)(DAT_0001f7e4 + 0x1f748),&local_14), iVar2 == 1)) {
        *(uint *)(*(int *)(local_c + 0x7c) + 4) = *(uint *)(*(int *)(local_c + 0x7c) + 4) | 0x20;
        *(undefined1 *)(*(int *)(local_c + 0x7c) + 0x10) = (undefined1)local_14;
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ===== FUN_0001f7e8 @ 0001f7e8 size=1192 ===== */

char * FUN_0001f7e8(int param_1,char *param_2,size_t param_3)

{
  undefined4 uVar1;
  size_t sVar2;
  size_t local_2c;
  char *local_14;
  
  if (*(int *)(param_1 + 0x80) == 0) {
    local_14 = (char *)0x0;
  }
  else {
    uVar1 = FUN_0001e804(DAT_0001fc90 + 0x1f848,3,**(undefined4 **)(param_1 + 0x80));
    snprintf(param_2,param_3,(char *)(DAT_0001fc94 + 0x1f85c),uVar1);
    local_2c = strlen(param_2);
    local_14 = param_2 + local_2c;
    local_2c = param_3 - local_2c;
    if ((int)local_2c < 2) {
      local_14 = local_14 + -(int)param_2;
    }
    else {
      if ((*(uint *)(*(int *)(param_1 + 0x80) + 4) & 1) != 0) {
        snprintf(local_14,local_2c,(char *)(DAT_0001fc98 + 0x1f8e4),
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
          snprintf(local_14,local_2c,(char *)(DAT_0001fca0 + 0x1f9d8));
          sVar2 = strlen(local_14);
          local_14 = local_14 + sVar2;
          local_2c = local_2c - sVar2;
          if ((int)local_2c < 2) {
            return local_14 + -(int)param_2;
          }
        }
      }
      else {
        snprintf(local_14,local_2c,(char *)(DAT_0001fc9c + 0x1f95c));
        sVar2 = strlen(local_14);
        local_14 = local_14 + sVar2;
        local_2c = local_2c - sVar2;
        if ((int)local_2c < 2) {
          return local_14 + -(int)param_2;
        }
      }
      if ((*(uint *)(*(int *)(param_1 + 0x80) + 4) & 8) != 0) {
        snprintf(local_14,local_2c,(char *)(DAT_0001fca4 + 0x1fa7c),
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
        snprintf(local_14,local_2c,(char *)(DAT_0001fca8 + 0x1fb1c),
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
        snprintf(local_14,local_2c,(char *)(DAT_0001fcac + 0x1fbbc),
                 (uint)*(byte *)(*(int *)(param_1 + 0x80) + 0x10),
                 *(byte *)(*(int *)(param_1 + 0x80) + 0x10) + 1);
        sVar2 = strlen(local_14);
        local_14 = local_14 + sVar2;
        local_2c = local_2c - sVar2;
        if ((int)local_2c < 2) {
          return local_14 + -(int)param_2;
        }
      }
      snprintf(local_14,local_2c,(char *)(DAT_0001fcb0 + 0x1fc1c));
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



/* ===== FUN_0001fcdc @ 0001fcdc size=44 ===== */

undefined4 FUN_0001fcdc(void)

{
  return 0;
}



/* ===== FUN_0001fd30 @ 0001fd30 size=44 ===== */

undefined4 FUN_0001fd30(void)

{
  return 0;
}



/* ===== FUN_0001fd84 @ 0001fd84 size=44 ===== */

undefined4 FUN_0001fd84(void)

{
  return 0;
}



/* ===== FUN_0001fdb0 @ 0001fdb0 size=312 ===== */

undefined4 FUN_0001fdb0(int param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x74) != 0) {
    FUN_0001e6f4(*(undefined4 *)(param_1 + 0x74));
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  uVar1 = FUN_0001e6b0(4);
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  if (*(int *)(param_1 + 0x74) == 0) {
    printf((char *)(DAT_0001fef4 + 0x1fe4c),DAT_0001fef0 + 0x1fe44,0x201,DAT_0001feec + 0x1fe38,
           DAT_0001fee8 + 0x1fe2c);
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = sscanf(param_2,(char *)(DAT_0001fef8 + 0x1fe6c),*(undefined4 *)(param_1 + 0x74));
    if (iVar2 == 1) {
      uVar1 = 0;
    }
    else {
      FUN_0001e6f4(*(undefined4 *)(param_1 + 0x74));
      *(undefined4 *)(param_1 + 0x74) = 0;
      printf((char *)(DAT_0001ff08 + 0x1fed0),DAT_0001ff04 + 0x1fec8,0x201,DAT_0001ff00 + 0x1febc,
             DAT_0001fefc + 0x1feb0,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_0001ff0c @ 0001ff0c size=104 ===== */

size_t FUN_0001ff0c(int param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  
  if (*(int *)(param_1 + 0x74) == 0) {
    sVar1 = 0;
  }
  else {
    snprintf(param_2,param_3,(char *)(DAT_0001ff74 + 0x1ff50),**(undefined4 **)(param_1 + 0x74));
    sVar1 = strlen(param_2);
  }
  return sVar1;
}



/* ===== FUN_0001ff78 @ 0001ff78 size=312 ===== */

undefined4 FUN_0001ff78(int param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x7c) != 0) {
    FUN_0001e6f4(*(undefined4 *)(param_1 + 0x7c));
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  uVar1 = FUN_0001e6b0(4);
  *(undefined4 *)(param_1 + 0x7c) = uVar1;
  if (*(int *)(param_1 + 0x7c) == 0) {
    printf((char *)(DAT_000200bc + 0x20014),DAT_000200b8 + 0x2000c,0x202,DAT_000200b4 + 0x20000,
           DAT_000200b0 + 0x1fff4);
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = sscanf(param_2,(char *)(DAT_000200c0 + 0x20034),*(undefined4 *)(param_1 + 0x7c));
    if (iVar2 == 1) {
      uVar1 = 0;
    }
    else {
      FUN_0001e6f4(*(undefined4 *)(param_1 + 0x7c));
      *(undefined4 *)(param_1 + 0x7c) = 0;
      printf((char *)(DAT_000200d0 + 0x20098),DAT_000200cc + 0x20090,0x202,DAT_000200c8 + 0x20084,
             DAT_000200c4 + 0x20078,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_000200d4 @ 000200d4 size=104 ===== */

size_t FUN_000200d4(int param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  
  if (*(int *)(param_1 + 0x7c) == 0) {
    sVar1 = 0;
  }
  else {
    snprintf(param_2,param_3,(char *)(DAT_0002013c + 0x20118),**(undefined4 **)(param_1 + 0x7c));
    sVar1 = strlen(param_2);
  }
  return sVar1;
}



/* ===== FUN_00020140 @ 00020140 size=312 ===== */

undefined4 FUN_00020140(int param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xa0) != 0) {
    FUN_0001e6f4(*(undefined4 *)(param_1 + 0xa0));
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  uVar1 = FUN_0001e6b0(4);
  *(undefined4 *)(param_1 + 0xa0) = uVar1;
  if (*(int *)(param_1 + 0xa0) == 0) {
    printf((char *)(DAT_00020284 + 0x201dc),DAT_00020280 + 0x201d4,0x203,DAT_0002027c + 0x201c8,
           DAT_00020278 + 0x201bc);
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = sscanf(param_2,(char *)(DAT_00020288 + 0x201fc),*(undefined4 *)(param_1 + 0xa0));
    if (iVar2 == 1) {
      uVar1 = 0;
    }
    else {
      FUN_0001e6f4(*(undefined4 *)(param_1 + 0xa0));
      *(undefined4 *)(param_1 + 0xa0) = 0;
      printf((char *)(DAT_00020298 + 0x20260),DAT_00020294 + 0x20258,0x203,DAT_00020290 + 0x2024c,
             DAT_0002028c + 0x20240,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_0002029c @ 0002029c size=104 ===== */

size_t FUN_0002029c(int param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  
  if (*(int *)(param_1 + 0xa0) == 0) {
    sVar1 = 0;
  }
  else {
    snprintf(param_2,param_3,(char *)(DAT_00020304 + 0x202e0),**(undefined4 **)(param_1 + 0xa0));
    sVar1 = strlen(param_2);
  }
  return sVar1;
}



/* ===== FUN_00020308 @ 00020308 size=548 ===== */

undefined4 FUN_00020308(int param_1,byte *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint local_18;
  byte *local_14;
  
  iVar2 = DAT_0002052c + 0x20328;
  local_18 = 0;
  if (*(int *)(param_1 + 0x9c) != 0) {
    FUN_0001e6f4(*(undefined4 *)(param_1 + 0x9c));
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  uVar1 = FUN_0001e6b0(0x40);
  *(undefined4 *)(param_1 + 0x9c) = uVar1;
  local_14 = param_2;
  if (*(int *)(param_1 + 0x9c) == 0) {
    printf((char *)(DAT_0002053c + 0x203bc),DAT_00020538 + 0x203b4,0x22d,DAT_00020534 + 0x203a8,
           DAT_00020530 + 0x2039c);
    uVar1 = 0xffffffff;
  }
  else {
    for (; ((*(ushort *)(**(int **)(iVar2 + DAT_00020540) + (uint)*local_14 * 2) & 0x80) != 0 &&
           (*local_14 != 0x3a)); local_14 = local_14 + 1) {
    }
    if (*local_14 == 0x3a) {
      do {
        local_14 = local_14 + 1;
      } while (*local_14 == 0x20);
      while (((*(ushort *)(**(int **)(iVar2 + DAT_00020540) + (uint)*local_14 * 2) & 0x40) != 0 &&
             (local_18 < 0x3f))) {
        *(byte *)(*(int *)(param_1 + 0x9c) + local_18) = *local_14;
        local_18 = local_18 + 1;
        local_14 = local_14 + 1;
      }
      *(undefined1 *)(*(int *)(param_1 + 0x9c) + local_18) = 0;
      uVar1 = 0;
    }
    else {
      FUN_0001e6f4(*(undefined4 *)(param_1 + 0x9c));
      *(undefined4 *)(param_1 + 0x9c) = 0;
      printf((char *)(DAT_00020550 + 0x2046c),DAT_0002054c + 0x20464,0x22d,DAT_00020548 + 0x20458,
             DAT_00020544 + 0x2044c,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_00020554 @ 00020554 size=100 ===== */

size_t FUN_00020554(int param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  
  if (*(int *)(param_1 + 0x9c) == 0) {
    sVar1 = 0;
  }
  else {
    snprintf(param_2,param_3,(char *)(DAT_000205b8 + 0x20594),*(undefined4 *)(param_1 + 0x9c));
    sVar1 = strlen(param_2);
  }
  return sVar1;
}



/* ===== FUN_000205bc @ 000205bc size=548 ===== */

undefined4 FUN_000205bc(int param_1,byte *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint local_18;
  byte *local_14;
  
  iVar2 = DAT_000207e0 + 0x205dc;
  local_18 = 0;
  if (*(int *)(param_1 + 0x90) != 0) {
    FUN_0001e6f4(*(undefined4 *)(param_1 + 0x90));
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  uVar1 = FUN_0001e6b0(0x40);
  *(undefined4 *)(param_1 + 0x90) = uVar1;
  local_14 = param_2;
  if (*(int *)(param_1 + 0x90) == 0) {
    printf((char *)(DAT_000207f0 + 0x20670),DAT_000207ec + 0x20668,0x22e,DAT_000207e8 + 0x2065c,
           DAT_000207e4 + 0x20650);
    uVar1 = 0xffffffff;
  }
  else {
    for (; ((*(ushort *)(**(int **)(iVar2 + DAT_000207f4) + (uint)*local_14 * 2) & 0x80) != 0 &&
           (*local_14 != 0x3a)); local_14 = local_14 + 1) {
    }
    if (*local_14 == 0x3a) {
      do {
        local_14 = local_14 + 1;
      } while (*local_14 == 0x20);
      while (((*(ushort *)(**(int **)(iVar2 + DAT_000207f4) + (uint)*local_14 * 2) & 0x40) != 0 &&
             (local_18 < 0x3f))) {
        *(byte *)(*(int *)(param_1 + 0x90) + local_18) = *local_14;
        local_18 = local_18 + 1;
        local_14 = local_14 + 1;
      }
      *(undefined1 *)(*(int *)(param_1 + 0x90) + local_18) = 0;
      uVar1 = 0;
    }
    else {
      FUN_0001e6f4(*(undefined4 *)(param_1 + 0x90));
      *(undefined4 *)(param_1 + 0x90) = 0;
      printf((char *)(DAT_00020804 + 0x20720),DAT_00020800 + 0x20718,0x22e,DAT_000207fc + 0x2070c,
             DAT_000207f8 + 0x20700,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_00020808 @ 00020808 size=100 ===== */

size_t FUN_00020808(int param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  
  if (*(int *)(param_1 + 0x90) == 0) {
    sVar1 = 0;
  }
  else {
    snprintf(param_2,param_3,(char *)(DAT_0002086c + 0x20848),*(undefined4 *)(param_1 + 0x90));
    sVar1 = strlen(param_2);
  }
  return sVar1;
}



/* ===== FUN_00020870 @ 00020870 size=548 ===== */

undefined4 FUN_00020870(int param_1,byte *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint local_18;
  byte *local_14;
  
  iVar2 = DAT_00020a94 + 0x20890;
  local_18 = 0;
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_0001e6f4(*(undefined4 *)(param_1 + 0x78));
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  uVar1 = FUN_0001e6b0(0x20);
  *(undefined4 *)(param_1 + 0x78) = uVar1;
  local_14 = param_2;
  if (*(int *)(param_1 + 0x78) == 0) {
    printf((char *)(DAT_00020aa4 + 0x20924),DAT_00020aa0 + 0x2091c,0x22f,DAT_00020a9c + 0x20910,
           DAT_00020a98 + 0x20904);
    uVar1 = 0xffffffff;
  }
  else {
    for (; ((*(ushort *)(**(int **)(iVar2 + DAT_00020aa8) + (uint)*local_14 * 2) & 0x80) != 0 &&
           (*local_14 != 0x3a)); local_14 = local_14 + 1) {
    }
    if (*local_14 == 0x3a) {
      do {
        local_14 = local_14 + 1;
      } while (*local_14 == 0x20);
      while (((*(ushort *)(**(int **)(iVar2 + DAT_00020aa8) + (uint)*local_14 * 2) & 0x40) != 0 &&
             (local_18 < 0x1f))) {
        *(byte *)(*(int *)(param_1 + 0x78) + local_18) = *local_14;
        local_18 = local_18 + 1;
        local_14 = local_14 + 1;
      }
      *(undefined1 *)(*(int *)(param_1 + 0x78) + local_18) = 0;
      uVar1 = 0;
    }
    else {
      FUN_0001e6f4(*(undefined4 *)(param_1 + 0x78));
      *(undefined4 *)(param_1 + 0x78) = 0;
      printf((char *)(DAT_00020ab8 + 0x209d4),DAT_00020ab4 + 0x209cc,0x22f,DAT_00020ab0 + 0x209c0,
             DAT_00020aac + 0x209b4,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_00020abc @ 00020abc size=100 ===== */

size_t FUN_00020abc(int param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  
  if (*(int *)(param_1 + 0x78) == 0) {
    sVar1 = 0;
  }
  else {
    snprintf(param_2,param_3,(char *)(DAT_00020b20 + 0x20afc),*(undefined4 *)(param_1 + 0x78));
    sVar1 = strlen(param_2);
  }
  return sVar1;
}



/* ===== FUN_00020b24 @ 00020b24 size=648 ===== */

undefined4 FUN_00020b24(int param_1,byte *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  int local_18;
  byte *local_14;
  
  iVar3 = DAT_00020dac + 0x20b44;
  if (*(int *)(param_1 + 0xa4) != 0) {
    FUN_0001e6f4(*(undefined4 *)(param_1 + 0xa4));
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  uVar1 = FUN_0001e6b0(4);
  *(undefined4 *)(param_1 + 0xa4) = uVar1;
  local_14 = param_2;
  if (*(int *)(param_1 + 0xa4) == 0) {
    printf((char *)(DAT_00020dbc + 0x20be0),DAT_00020db8 + 0x20bd8,0x264,DAT_00020db4 + 0x20bcc,
           DAT_00020db0 + 0x20bc0);
  }
  else {
    for (; ((*(ushort *)(**(int **)(iVar3 + DAT_00020dc0) + (uint)*local_14 * 2) & 0x80) != 0 &&
           (*local_14 != 0x3a)); local_14 = local_14 + 1) {
    }
    if (*local_14 == 0x3a) {
      do {
        local_14 = local_14 + 1;
      } while (*local_14 == 0x20);
      for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
        if ((*(int *)(DAT_00020dd4 + local_18 * 0xc + 0x20ce0) != 0) &&
           (pcVar2 = strstr((char *)local_14,*(char **)(DAT_00020dd8 + local_18 * 0xc + 0x20d0c)),
           pcVar2 != (char *)0x0)) {
          **(undefined4 **)(param_1 + 0xa4) =
               *(undefined4 *)(DAT_00020ddc + 0x20d48 + local_18 * 0xc);
          return 0;
        }
      }
      FUN_0001e6f4(*(undefined4 *)(param_1 + 0xa4));
      *(undefined4 *)(param_1 + 0xa4) = 0;
    }
    else {
      FUN_0001e6f4(*(undefined4 *)(param_1 + 0xa4));
      *(undefined4 *)(param_1 + 0xa4) = 0;
      printf((char *)(DAT_00020dd0 + 0x20c90),DAT_00020dcc + 0x20c88,0x264,DAT_00020dc8 + 0x20c7c,
             DAT_00020dc4 + 0x20c70,param_2);
    }
  }
  return 0xffffffff;
}



/* ===== FUN_00020de0 @ 00020de0 size=232 ===== */

size_t FUN_00020de0(int param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  int local_c;
  
  if (*(int *)(param_1 + 0xa4) != 0) {
    for (local_c = 0; local_c < 4; local_c = local_c + 1) {
      if (**(int **)(param_1 + 0xa4) == *(int *)(DAT_00020ec8 + 0x20e34 + local_c * 0xc)) {
        snprintf(param_2,param_3,(char *)(DAT_00020ed0 + 0x20e7c),
                 *(undefined4 *)(DAT_00020ecc + local_c * 0xc + 0x20e64));
        sVar1 = strlen(param_2);
        return sVar1;
      }
    }
  }
  return 0;
}



/* ===== FUN_00020ed4 @ 00020ed4 size=636 ===== */

undefined4 FUN_00020ed4(int param_1,byte *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  int local_18;
  byte *local_14;
  
  iVar3 = DAT_00021150 + 0x20ef4;
  if (*(int *)(param_1 + 0x94) != 0) {
    FUN_0001e6f4(*(undefined4 *)(param_1 + 0x94));
    *(undefined4 *)(param_1 + 0x94) = 0;
  }
  uVar1 = FUN_0001e6b0(4);
  *(undefined4 *)(param_1 + 0x94) = uVar1;
  local_14 = param_2;
  if (*(int *)(param_1 + 0x94) == 0) {
    printf((char *)(DAT_00021160 + 0x20f90),DAT_0002115c + 0x20f88,0x2ab,DAT_00021158 + 0x20f7c,
           DAT_00021154 + 0x20f70);
    uVar1 = 0xffffffff;
  }
  else {
    for (; ((*(ushort *)(**(int **)(iVar3 + DAT_00021164) + (uint)*local_14 * 2) & 0x80) != 0 &&
           (*local_14 != 0x3a)); local_14 = local_14 + 1) {
    }
    if (*local_14 == 0x3a) {
      do {
        local_14 = local_14 + 1;
      } while (*local_14 == 0x20);
      for (local_18 = 0; local_18 < 0xc; local_18 = local_18 + 1) {
        if ((*(int *)(DAT_00021178 + local_18 * 0xc + 0x21090) != 0) &&
           (pcVar2 = strstr((char *)local_14,*(char **)(DAT_0002117c + local_18 * 0xc + 0x210bc)),
           pcVar2 != (char *)0x0)) {
          **(uint **)(param_1 + 0x94) =
               **(uint **)(param_1 + 0x94) |
               1 << (*(uint *)(DAT_00021180 + 0x210f8 + local_18 * 0xc) & 0xff);
        }
      }
      uVar1 = 0;
    }
    else {
      FUN_0001e6f4(*(undefined4 *)(param_1 + 0x94));
      *(undefined4 *)(param_1 + 0x94) = 0;
      printf((char *)(DAT_00021174 + 0x21040),DAT_00021170 + 0x21038,0x2ab,DAT_0002116c + 0x2102c,
             DAT_00021168 + 0x21020,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_00021184 @ 00021184 size=568 ===== */

char * FUN_00021184(int param_1,char *param_2,size_t param_3)

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
    snprintf(param_2,param_3,(char *)(DAT_000213c0 + 0x211dc),DAT_000213bc + 0x211d4);
    local_2c = strlen(param_2);
    local_c = param_2 + local_2c;
    local_2c = param_3 - local_2c;
    if ((int)local_2c < 2) {
      local_c = local_c + -(int)param_2;
    }
    else {
      for (local_10 = 0; local_10 < 0xc; local_10 = local_10 + 1) {
        if ((**(uint **)(param_1 + 0x94) &
            1 << (*(uint *)(DAT_000213c4 + 0x21250 + local_10 * 0xc) & 0xff)) != 0) {
          if (bVar1) {
            snprintf(local_c,local_2c,(char *)(DAT_000213cc + 0x212b0),
                     *(undefined4 *)(DAT_000213c8 + local_10 * 0xc + 0x21298));
          }
          else {
            snprintf(local_c,local_2c,(char *)(DAT_000213d4 + 0x212ec),
                     *(undefined4 *)(DAT_000213d0 + local_10 * 0xc + 0x212d4));
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
      snprintf(local_c,local_2c,(char *)(DAT_000213d8 + 0x21374));
      sVar2 = strlen(local_c);
      local_c = local_c + (sVar2 - (int)param_2);
    }
  }
  return local_c;
}



/* ===== FUN_000213dc @ 000213dc size=636 ===== */

undefined4 FUN_000213dc(int param_1,byte *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  int local_18;
  byte *local_14;
  
  iVar3 = DAT_00021658 + 0x213fc;
  if (*(int *)(param_1 + 0x88) != 0) {
    FUN_0001e6f4(*(undefined4 *)(param_1 + 0x88));
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  uVar1 = FUN_0001e6b0(4);
  *(undefined4 *)(param_1 + 0x88) = uVar1;
  local_14 = param_2;
  if (*(int *)(param_1 + 0x88) == 0) {
    printf((char *)(DAT_00021668 + 0x21498),DAT_00021664 + 0x21490,0x2ac,DAT_00021660 + 0x21484,
           DAT_0002165c + 0x21478);
    uVar1 = 0xffffffff;
  }
  else {
    for (; ((*(ushort *)(**(int **)(iVar3 + DAT_0002166c) + (uint)*local_14 * 2) & 0x80) != 0 &&
           (*local_14 != 0x3a)); local_14 = local_14 + 1) {
    }
    if (*local_14 == 0x3a) {
      do {
        local_14 = local_14 + 1;
      } while (*local_14 == 0x20);
      for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
        if ((*(int *)(DAT_00021680 + local_18 * 0xc + 0x21598) != 0) &&
           (pcVar2 = strstr((char *)local_14,*(char **)(DAT_00021684 + local_18 * 0xc + 0x215c4)),
           pcVar2 != (char *)0x0)) {
          **(uint **)(param_1 + 0x88) =
               **(uint **)(param_1 + 0x88) |
               1 << (*(uint *)(DAT_00021688 + 0x21600 + local_18 * 0xc) & 0xff);
        }
      }
      uVar1 = 0;
    }
    else {
      FUN_0001e6f4(*(undefined4 *)(param_1 + 0x88));
      *(undefined4 *)(param_1 + 0x88) = 0;
      printf((char *)(DAT_0002167c + 0x21548),DAT_00021678 + 0x21540,0x2ac,DAT_00021674 + 0x21534,
             DAT_00021670 + 0x21528,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_0002168c @ 0002168c size=568 ===== */

char * FUN_0002168c(int param_1,char *param_2,size_t param_3)

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
    snprintf(param_2,param_3,(char *)(DAT_000218c8 + 0x216e4),DAT_000218c4 + 0x216dc);
    local_2c = strlen(param_2);
    local_c = param_2 + local_2c;
    local_2c = param_3 - local_2c;
    if ((int)local_2c < 2) {
      local_c = local_c + -(int)param_2;
    }
    else {
      for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
        if ((**(uint **)(param_1 + 0x88) &
            1 << (*(uint *)(DAT_000218cc + 0x21758 + local_10 * 0xc) & 0xff)) != 0) {
          if (bVar1) {
            snprintf(local_c,local_2c,(char *)(DAT_000218d4 + 0x217b8),
                     *(undefined4 *)(DAT_000218d0 + local_10 * 0xc + 0x217a0));
          }
          else {
            snprintf(local_c,local_2c,(char *)(DAT_000218dc + 0x217f4),
                     *(undefined4 *)(DAT_000218d8 + local_10 * 0xc + 0x217dc));
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
      snprintf(local_c,local_2c,(char *)(DAT_000218e0 + 0x2187c));
      sVar2 = strlen(local_c);
      local_c = local_c + (sVar2 - (int)param_2);
    }
  }
  return local_c;
}



/* ===== FUN_000218e4 @ 000218e4 size=192 ===== */

undefined4 FUN_000218e4(char *param_1)

{
  int iVar1;
  int iVar2;
  int local_c;
  
  iVar2 = DAT_000219a4 + 0x21900;
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



/* ===== FUN_000219a8 @ 000219a8 size=276 ===== */

char * FUN_000219a8(char *param_1,void *param_2,int param_3)

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



/* ===== FUN_00021abc @ 00021abc size=60 ===== */

undefined4 FUN_00021abc(void *param_1)

{
  if (param_1 != (void *)0x0) {
    memset(param_1,0,0xac);
  }
  return 0;
}



/* ===== FUN_00021af8 @ 00021af8 size=428 ===== */

void FUN_00021af8(void *param_1)

{
  if (*(int *)((int)param_1 + 0x74) != 0) {
    FUN_0001e6f4(*(undefined4 *)((int)param_1 + 0x74));
  }
  if (*(int *)((int)param_1 + 0x78) != 0) {
    FUN_0001e6f4(*(undefined4 *)((int)param_1 + 0x78));
  }
  if (*(int *)((int)param_1 + 0x7c) != 0) {
    FUN_0001e6f4(*(undefined4 *)((int)param_1 + 0x7c));
  }
  if (*(int *)((int)param_1 + 0x80) != 0) {
    FUN_0001e6f4(*(undefined4 *)((int)param_1 + 0x80));
  }
  if (*(int *)((int)param_1 + 0x84) != 0) {
    FUN_0001e6f4(*(undefined4 *)((int)param_1 + 0x84));
  }
  if (*(int *)((int)param_1 + 0x88) != 0) {
    FUN_0001e6f4(*(undefined4 *)((int)param_1 + 0x88));
  }
  if (*(int *)((int)param_1 + 0x90) != 0) {
    FUN_0001e6f4(*(undefined4 *)((int)param_1 + 0x90));
  }
  if (*(int *)((int)param_1 + 0x94) != 0) {
    FUN_0001e6f4(*(undefined4 *)((int)param_1 + 0x94));
  }
  if (*(int *)((int)param_1 + 0x9c) != 0) {
    FUN_0001e6f4(*(undefined4 *)((int)param_1 + 0x9c));
  }
  if (*(int *)((int)param_1 + 0xa4) != 0) {
    FUN_0001e6f4(*(undefined4 *)((int)param_1 + 0xa4));
  }
  if (*(int *)((int)param_1 + 0xa0) != 0) {
    FUN_0001e6f4(*(undefined4 *)((int)param_1 + 0xa0));
  }
  if (*(int *)((int)param_1 + 0xa8) != 0) {
    FUN_0001e6f4(*(undefined4 *)((int)param_1 + 0xa8));
  }
  memset(param_1,0,0xac);
  return;
}



/* ===== FUN_00021ca4 @ 00021ca4 size=52 ===== */

int FUN_00021ca4(void)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_00021cd8 + 0x21cb8);
  *(int *)(DAT_00021cdc + 0x21cc8) = iVar1 + 1;
  return iVar1;
}



/* ===== FUN_00021ce0 @ 00021ce0 size=516 ===== */

char * FUN_00021ce0(char *param_1,int param_2)

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
  local_c = strstr(param_1,(char *)(DAT_00021ee4 + 0x21d18));
  if ((local_c == (char *)0x0) || (param_2 <= (int)(local_c + (1 - (int)local_10)))) {
    if (param_2 < 0x101) {
      pcVar2 = (char *)0x0;
    }
    else {
      pcVar2 = (char *)0xffffffff;
    }
  }
  else {
    local_14 = strstr(local_10,(char *)(DAT_00021ee8 + 0x21d74));
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
        local_c = (char *)FUN_000219a8(local_c,0,0);
        if ((local_c == (char *)0x0) ||
           (iVar1 = strncmp(local_c,(char *)(DAT_00021eec + 0x21df4),2), iVar1 == 0)) {
          if (param_2 < (int)(local_14 + local_18)) {
            return (char *)0x0;
          }
          return local_14 + local_18;
        }
        iVar1 = strncmp(local_c,(char *)(DAT_00021ef0 + 0x21e18),0xe);
      } while ((iVar1 != 0) ||
              (iVar1 = sscanf(local_c,(char *)(DAT_00021ef4 + 0x21e40),&local_18), iVar1 == 1));
      printf((char *)(DAT_00021f00 + 0x21e7c),DAT_00021efc + 0x21e74,0x33d,DAT_00021ef8 + 0x21e68,
             local_c);
      pcVar2 = (char *)0xffffffff;
    }
  }
  return pcVar2;
}



/* ===== FUN_00021f04 @ 00021f04 size=896 ===== */

int FUN_00021f04(undefined4 *param_1,char *param_2,int param_3)

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
      uVar1 = FUN_0001e724(param_2 + 4,local_16);
      param_1[0x2a] = uVar1;
      iVar2 = local_16 + 4;
    }
    else {
      iVar2 = 0;
    }
  }
  else {
    pcVar3 = local_14;
    printf((char *)(DAT_0002228c + 0x22008),DAT_00022288 + 0x22000,0x361,DAT_00022284 + 0x21ff4,
           local_14);
    iVar2 = FUN_00021ce0(param_2,param_3);
    if (0 < iVar2) {
      local_10 = iVar2;
      local_c = (char *)FUN_000219a8(local_c,local_11c,0x100);
      if (local_c == (char *)0x0) {
        iVar2 = -1;
      }
      else {
        local_10 = FUN_0001ee60(param_1,local_11c);
        if (local_10 < 0) {
          iVar2 = -1;
        }
        else {
          do {
            while( true ) {
              local_c = (char *)FUN_000219a8(local_c,local_11c,0x100);
              if ((local_c == (char *)0x0) || (local_11c[0] == '\0')) goto LAB_0002215c;
              local_1c = (code *)FUN_000218e4(local_11c);
              if (local_1c != (code *)0x0) break;
              pcVar3 = local_11c;
              printf((char *)(DAT_00022298 + 0x220dc),DAT_00022294 + 0x220d4,0x378,
                     DAT_00022290 + 0x220c8,pcVar3);
            }
            local_10 = (*local_1c)(param_1,local_11c);
          } while (-1 < local_10);
          pcVar3 = local_11c;
          printf((char *)(DAT_000222a4 + 0x2212c),DAT_000222a0 + 0x22124,0x37e,
                 DAT_0002229c + 0x22118,pcVar3);
LAB_0002215c:
          if ((local_c == (char *)0x0) || (local_11c[0] != '\0')) {
            FUN_00021af8(param_1);
            iVar2 = -1;
          }
          else {
            if (param_1[0x28] != 0) {
              uVar1 = FUN_0001e724(local_c,*(undefined4 *)param_1[0x28]);
              param_1[0x2a] = uVar1;
              if (param_1[0x2a] == 0) {
                printf((char *)(DAT_000222b0 + 0x221ec),DAT_000222ac + 0x221e4,0x38b,
                       DAT_000222a8 + 0x221d8,pcVar3);
                FUN_00021af8(param_1);
                return -1;
              }
            }
            local_10 = (int)local_c - (int)local_14;
            if (param_1[0x28] != 0) {
              local_10 = *(int *)param_1[0x28] + local_10;
            }
            if (local_10 != iVar2) {
              printf((char *)(DAT_000222bc + 0x22274),DAT_000222b8 + 0x2226c,0x396,
                     DAT_000222b4 + 0x22260,iVar2,local_10);
            }
          }
        }
      }
    }
  }
  return iVar2;
}



/* ===== FUN_000222c0 @ 000222c0 size=2104 ===== */

int FUN_000222c0(int *param_1,undefined4 *param_2,int param_3)

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
    iVar2 = FUN_0001f1b0(param_1,param_2,param_3);
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
          iVar2 = FUN_0001ff0c(param_1,local_14,local_34);
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
          iVar2 = FUN_00020abc(param_1,local_14,local_34);
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
          iVar2 = FUN_000200d4(param_1,local_14,local_34);
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
          iVar2 = FUN_0001f7e8(param_1,local_14,local_34);
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
          iVar2 = FUN_0001fcdc(param_1,local_14,local_34);
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
          iVar2 = FUN_0002168c(param_1,local_14,local_34);
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
          iVar2 = FUN_0001fd30(param_1,local_14,local_34);
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
          iVar2 = FUN_00020808(param_1,local_14,local_34);
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
          iVar2 = FUN_00021184(param_1,local_14,local_34);
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
          iVar2 = FUN_0001fd84(param_1,local_14,local_34);
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
          iVar2 = FUN_00020554(param_1,local_14,local_34);
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
          iVar2 = FUN_00020de0(param_1,local_14,local_34);
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
          iVar2 = FUN_0002029c(param_1,local_14,local_34);
          if (iVar2 < 0) {
            return -1;
          }
          local_14 = local_14 + iVar2;
          local_34 = local_34 - iVar2;
          if ((int)local_34 < 2) {
            return (int)local_14 - (int)param_2;
          }
        }
        snprintf(local_14,local_34,(char *)(DAT_00022af8 + 0x229f0));
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
            printf((char *)(DAT_00022b04 + 0x22ae0),DAT_00022b00 + 0x22ad8,0x3e6,
                   DAT_00022afc + 0x22acc,param_2);
            local_34 = (int)local_14 - (int)param_2;
          }
        }
      }
    }
  }
  return local_34;
}



/* ===== FUN_00022b08 @ 00022b08 size=140 ===== */

undefined4 FUN_00022b08(undefined4 *param_1,undefined4 param_2,char *param_3,char *param_4)

{
  *param_1 = 0;
  param_1[1] = param_2;
  param_1[2] = 0;
  strncpy((char *)((int)param_1 + 0xe),param_3,0x1f);
  strncpy((char *)((int)param_1 + 0x2e),param_4,0x3f);
  param_1[0x1c] = 0;
  return 0;
}



/* ===== FUN_00022b94 @ 00022b94 size=76 ===== */

undefined4 FUN_00022b94(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = 1;
  param_1[1] = 0;
  param_1[2] = param_2;
  return 0;
}



/* ===== FUN_00022be0 @ 00022be0 size=96 ===== */

undefined4 FUN_00022be0(int param_1,undefined4 *param_2)

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



/* ===== FUN_00022c40 @ 00022c40 size=112 ===== */

undefined4 FUN_00022c40(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x74) == 0) {
    uVar1 = FUN_0001e6b0(4);
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



/* ===== FUN_00022cb0 @ 00022cb0 size=96 ===== */

undefined4 FUN_00022cb0(int param_1,undefined4 *param_2)

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



/* ===== FUN_00022d10 @ 00022d10 size=112 ===== */

undefined4 FUN_00022d10(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x7c) == 0) {
    uVar1 = FUN_0001e6b0(4);
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



/* ===== FUN_00022d80 @ 00022d80 size=108 ===== */

undefined4 FUN_00022d80(int param_1,char *param_2,int param_3)

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



/* ===== FUN_00022dec @ 00022dec size=288 ===== */

undefined4 FUN_00022dec(int param_1,char *param_2)

{
  undefined4 uVar1;
  char *__src;
  char *__dest;
  int iVar2;
  time_t local_18;
  byte *local_14;
  
  iVar2 = DAT_00022f0c + 0x22e0c;
  if (*(int *)(param_1 + 0x78) == 0) {
    uVar1 = FUN_0001e6b0(0x20);
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
      while ((*(ushort *)(**(int **)(iVar2 + DAT_00022f10) + (uint)*local_14 * 2) & 0x40) != 0) {
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



/* ===== FUN_00022f14 @ 00022f14 size=284 ===== */

undefined4 FUN_00022f14(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x80) == 0) {
    uVar1 = FUN_0001e6b0(0x14);
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



/* ===== FUN_00023030 @ 00023030 size=220 ===== */

undefined4 FUN_00023030(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x80) == 0) {
    uVar1 = FUN_0001e6b0(0x14);
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



/* ===== FUN_0002310c @ 0002310c size=96 ===== */

undefined4 FUN_0002310c(int param_1,undefined4 *param_2)

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



/* ===== FUN_0002316c @ 0002316c size=112 ===== */

undefined4 FUN_0002316c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x88) == 0) {
    uVar1 = FUN_0001e6b0(4);
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



/* ===== FUN_000231dc @ 000231dc size=108 ===== */

undefined4 FUN_000231dc(int param_1,char *param_2,int param_3)

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



/* ===== FUN_00023248 @ 00023248 size=168 ===== */

undefined4 FUN_00023248(int param_1,char *param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x90) == 0) {
    uVar1 = FUN_0001e6b0(0x40);
    *(undefined4 *)(param_1 + 0x90) = uVar1;
  }
  if (*(int *)(param_1 + 0x90) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    if (param_2 == (char *)0x0) {
      strncpy(*(char **)(param_1 + 0x90),(char *)(DAT_000232f0 + 0x232dc),0x3f);
    }
    else {
      strncpy(*(char **)(param_1 + 0x90),param_2,0x3f);
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_00023354 @ 00023354 size=112 ===== */

undefined4 FUN_00023354(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x94) == 0) {
    uVar1 = FUN_0001e6b0(4);
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



/* ===== FUN_000233c4 @ 000233c4 size=108 ===== */

undefined4 FUN_000233c4(int param_1,char *param_2,int param_3)

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



/* ===== FUN_00023430 @ 00023430 size=168 ===== */

undefined4 FUN_00023430(int param_1,char *param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar1 = FUN_0001e6b0(0x40);
    *(undefined4 *)(param_1 + 0x9c) = uVar1;
  }
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    if (param_2 == (char *)0x0) {
      strncpy(*(char **)(param_1 + 0x9c),(char *)(DAT_000234d8 + 0x234c4),0x3f);
    }
    else {
      strncpy(*(char **)(param_1 + 0x9c),param_2,0x3f);
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_00023540 @ 00023540 size=112 ===== */

undefined4 FUN_00023540(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xa4) == 0) {
    uVar1 = FUN_0001e6b0(4);
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



/* ===== FUN_00023614 @ 00023614 size=112 ===== */

undefined4 FUN_00023614(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xa0) == 0) {
    uVar1 = FUN_0001e6b0(4);
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



/* ===== FUN_00023684 @ 00023684 size=292 ===== */

int * FUN_00023684(int param_1,int param_2)

{
  int *piVar1;
  
  if ((param_1 < 1) || (param_2 < 1)) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = calloc(1,param_2 * param_1 + param_2 * 4 + 0x18);
    if (piVar1 == (int *)0x0) {
      printf((char *)(DAT_000237b0 + 0x23718),DAT_000237ac + 0x23710,0x16,DAT_000237a8 + 0x23704);
      piVar1 = (int *)0x0;
    }
    else {
      printf((char *)(DAT_000237b4 + 0x23750),param_2 * param_1 + param_2 * 4 + 0x18);
      *piVar1 = param_1;
      piVar1[1] = param_2;
      piVar1[4] = (int)(piVar1 + 6);
      piVar1[5] = (int)(piVar1 + param_2 + 6);
    }
  }
  return piVar1;
}



/* ===== FUN_000237b8 @ 000237b8 size=176 ===== */

undefined4 FUN_000237b8(int *param_1,int param_2,int *param_3,int *param_4)

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



/* ===== FUN_00023868 @ 00023868 size=172 ===== */

undefined4 FUN_00023868(int param_1,int param_2)

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



/* ===== FUN_00023914 @ 00023914 size=92 ===== */

undefined4 FUN_00023914(int param_1,int param_2)

{
  undefined4 extraout_r1;
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    FUN_00025e04(param_2 + 1,*(undefined4 *)(param_1 + 4));
    uVar1 = extraout_r1;
  }
  return uVar1;
}



/* ===== FUN_00023970 @ 00023970 size=60 ===== */

undefined4 FUN_00023970(int param_1)

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



/* ===== FUN_000239ac @ 000239ac size=60 ===== */

undefined4 FUN_000239ac(int param_1)

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



/* ===== FUN_000239e8 @ 000239e8 size=168 ===== */

undefined4 FUN_000239e8(int param_1)

{
  int extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    FUN_00025e04(*(int *)(param_1 + 0xc) + 1,*(undefined4 *)(param_1 + 4));
    if (extraout_r1 == *(int *)(param_1 + 8)) {
      uVar1 = 0xffffffff;
    }
    else {
      FUN_00025e04(*(int *)(param_1 + 0xc) + 1,*(undefined4 *)(param_1 + 4));
      *(undefined4 *)(param_1 + 0xc) = extraout_r1_00;
      uVar1 = *(undefined4 *)(param_1 + 0xc);
    }
  }
  return uVar1;
}



/* ===== FUN_00023a90 @ 00023a90 size=136 ===== */

undefined4 FUN_00023a90(int param_1)

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
    FUN_00025e04(*(int *)(param_1 + 8) + 1,*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 8) = extraout_r1;
    uVar1 = *(undefined4 *)(param_1 + 8);
  }
  return uVar1;
}



/* ===== FUN_00023b18 @ 00023b18 size=48 ===== */

void FUN_00023b18(void *param_1)

{
  if (param_1 != (void *)0x0) {
    free(param_1);
  }
  return;
}



/* ===== FUN_00023b48 @ 00023b48 size=636 ===== */

undefined1 * FUN_00023b48(undefined1 *param_1,int param_2,byte *param_3,uint param_4)

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
      *local_c = *(undefined1 *)(DAT_00023dc4 + 0x23c50 + (uint)(bVar1 >> 2));
      local_c[1] = *(undefined1 *)(DAT_00023dc8 + 0x23c78 + ((uVar4 & 0x3f00000) >> 0x14));
      puVar3 = local_c + 3;
      local_c[2] = *(undefined1 *)
                    (DAT_00023dcc + 0x23ca0 + ((uVar4 | (uint)bVar2 << 8) >> 0xe & 0x3f));
      local_c = local_c + 4;
      *puVar3 = *(undefined1 *)(DAT_00023dd0 + 0x23cc8 + (((uint)bVar2 << 8 & 0x3f00) >> 8));
    }
    local_10 = 0;
    for (; local_18 != 0; local_18 = local_18 - 1) {
      local_10 = local_10 * 0x100 + (uint)*local_2c;
      local_14 = local_14 + 8;
      local_2c = local_2c + 1;
    }
    for (; 0 < (int)local_14; local_14 = local_14 - 6) {
      *local_c = *(undefined1 *)
                  (DAT_00023dd4 + 0x23d58 + ((uint)(local_10 << 6) >> (local_14 & 0xff) & 0x3f));
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



/* ===== FUN_00023dd8 @ 00023dd8 size=476 ===== */

char * FUN_00023dd8(char *param_1,int param_2,int *param_3)

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



/* ===== FUN_00023fb4 @ 00023fb4 size=588 ===== */

bool FUN_00023fb4(int param_1,int param_2,void *param_3)

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
           ) && (iVar1 = FUN_00023dd8(local_c,local_14,&local_20), iVar1 != 0))))) {
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
      printf((char *)(DAT_00024208 + 0x24104),DAT_00024204 + 0x240fc,0x86,DAT_00024200 + 0x240f0,
             local_20);
      if (0x40 < (int)local_20) {
        local_20 = 0x40;
      }
      memcpy(param_3,local_10,local_20);
      *(size_t *)((int)param_3 + 0x80) = local_20;
      local_18 = local_18 + 1;
    }
    if (local_19 == 8) {
      printf((char *)(DAT_00024214 + 0x2417c),DAT_00024210 + 0x24174,0x8e,DAT_0002420c + 0x24168,
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



/* ===== FUN_00024218 @ 00024218 size=736 ===== */

bool FUN_00024218(int param_1,int param_2,void *param_3)

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
         (iVar1 = FUN_00023dd8(local_c,local_14,&local_20), iVar1 != 0))) {
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
      printf((char *)(DAT_00024500 + 0x24380),DAT_000244fc + 0x24378,0xba,DAT_000244f8 + 0x2436c,
             local_20);
      if (0x40 < (int)local_20) {
        local_20 = 0x40;
      }
      memcpy(param_3,local_10,local_20);
      *(size_t *)((int)param_3 + 0xc0) = local_20;
      local_18 = local_18 + 1;
    }
    if (local_19 == 0x21) {
      printf((char *)(DAT_0002450c + 0x243f8),DAT_00024508 + 0x243f0,0xc2,DAT_00024504 + 0x243e4,
             local_20);
      if (0x40 < (int)local_20) {
        local_20 = 0x40;
      }
      memcpy((void *)((int)param_3 + 0x40),local_10,local_20);
      *(size_t *)((int)param_3 + 0xc4) = local_20;
      local_18 = local_18 + 1;
    }
    if (local_19 == 0x22) {
      printf((char *)(DAT_00024518 + 0x24474),DAT_00024514 + 0x2446c,0xca,DAT_00024510 + 0x24460,
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



/* ===== FUN_0002451c @ 0002451c size=236 ===== */

undefined4 FUN_0002451c(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 != 4) {
    printf((char *)(DAT_00024610 + 0x24560),DAT_0002460c + 0x24558,0xdb,DAT_00024608 + 0x2454c);
    return 0xffffffff;
  }
  iVar1 = *param_1;
  if (iVar1 == 24000) {
code_r0x000245ec:
    *param_3 = iVar1;
    uVar2 = 1;
  }
  else {
    if (iVar1 < 0x5dc1) {
      if (iVar1 == 16000) goto code_r0x000245ec;
    }
    else if ((iVar1 == 32000) || (iVar1 == 40000)) goto code_r0x000245ec;
    printf((char *)(DAT_0002461c + 0x245e0),DAT_00024618 + 0x245d8,0xe8,DAT_00024614 + 0x245cc);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== FUN_00024620 @ 00024620 size=56 ===== */

undefined4 FUN_00024620(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00023fb4(param_1,param_2,param_3);
  return uVar1;
}



/* ===== FUN_00024658 @ 00024658 size=56 ===== */

undefined4 FUN_00024658(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00024218(param_1,param_2,param_3);
  return uVar1;
}



/* ===== FUN_00024690 @ 00024690 size=556 ===== */

int FUN_00024690(undefined4 param_1,undefined4 param_2,int param_3,char *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *local_c;
  
  iVar1 = sprintf(param_4,(char *)(DAT_000248bc + 0x246c4),param_1);
  pcVar4 = param_4 + iVar1;
  iVar1 = sprintf(pcVar4,(char *)(DAT_000248c0 + 0x246ec));
  iVar2 = sprintf(pcVar4 + iVar1,(char *)(DAT_000248c4 + 0x2471c),param_1,param_2);
  local_c = pcVar4 + iVar1 + iVar2;
  if ((*(int *)(param_3 + 0x80) == 0) || (*(int *)(param_3 + 0x84) == 0)) {
    iVar1 = sprintf(local_c,(char *)(DAT_000248d4 + 0x24888),param_1);
    local_c = local_c + iVar1;
  }
  else {
    uVar5 = *(undefined4 *)(param_3 + 0x80);
    uVar6 = *(undefined4 *)(param_3 + 0x84);
    iVar1 = sprintf(local_c,(char *)(DAT_000248c8 + 0x24790),param_1);
    local_c = local_c + iVar1;
    FUN_00023b48(local_c,param_5 - ((int)local_c - (int)param_4),param_3,uVar5);
    sVar3 = strlen(local_c);
    iVar1 = sprintf(local_c + sVar3,(char *)(DAT_000248cc + 0x247f4));
    pcVar4 = local_c + sVar3 + iVar1;
    FUN_00023b48(pcVar4,param_5 - ((int)pcVar4 - (int)param_4),param_3 + 0x40,uVar6);
    sVar3 = strlen(pcVar4);
    iVar1 = sprintf(pcVar4 + sVar3,(char *)(DAT_000248d0 + 0x24858));
    local_c = pcVar4 + sVar3 + iVar1;
  }
  return (int)local_c - (int)param_4;
}



/* ===== FUN_000248d8 @ 000248d8 size=688 ===== */

int FUN_000248d8(undefined4 param_1,undefined4 param_2,int param_3,char *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *local_c;
  
  iVar1 = sprintf(param_4,(char *)(DAT_00024b88 + 0x2490c),param_1);
  pcVar4 = param_4 + iVar1;
  iVar1 = sprintf(pcVar4,(char *)(DAT_00024b8c + 0x24934));
  iVar2 = sprintf(pcVar4 + iVar1,(char *)(DAT_00024b90 + 0x24964),param_1,param_2);
  local_c = pcVar4 + iVar1 + iVar2;
  if (((*(int *)(param_3 + 0xc0) != 0) && (*(int *)(param_3 + 0xc4) != 0)) &&
     (*(int *)(param_3 + 200) != 0)) {
    uVar5 = *(undefined4 *)(param_3 + 0xc0);
    uVar6 = *(undefined4 *)(param_3 + 0xc4);
    uVar7 = *(undefined4 *)(param_3 + 200);
    iVar1 = sprintf(local_c,(char *)(DAT_00024b94 + 0x24a00),param_1);
    iVar2 = sprintf(local_c + iVar1,(char *)(DAT_00024b98 + 0x24a28));
    pcVar4 = local_c + iVar1 + iVar2;
    FUN_00023b48(pcVar4,param_5 - ((int)pcVar4 - (int)param_4),param_3,uVar5);
    sVar3 = strlen(pcVar4);
    iVar1 = sprintf(pcVar4 + sVar3,(char *)(DAT_00024b9c + 0x24a8c));
    pcVar4 = pcVar4 + sVar3 + iVar1;
    FUN_00023b48(pcVar4,param_5 - ((int)pcVar4 - (int)param_4),param_3 + 0x40,uVar6);
    sVar3 = strlen(pcVar4);
    iVar1 = sprintf(pcVar4 + sVar3,(char *)(DAT_00024ba0 + 0x24af0));
    pcVar4 = pcVar4 + sVar3 + iVar1;
    FUN_00023b48(pcVar4,param_5 - ((int)pcVar4 - (int)param_4),param_3 + 0x80,uVar7);
    sVar3 = strlen(pcVar4);
    iVar1 = sprintf(pcVar4 + sVar3,(char *)(DAT_00024ba4 + 0x24b54));
    local_c = pcVar4 + sVar3 + iVar1;
  }
  return (int)local_c - (int)param_4;
}



/* ===== FUN_00024ba8 @ 00024ba8 size=196 ===== */

char * FUN_00024ba8(undefined4 param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  int iVar1;
  int iVar2;
  char *__s;
  
  iVar1 = sprintf(param_4,(char *)(DAT_00024c6c + 0x24bdc),param_1);
  __s = param_4 + iVar1;
  iVar1 = sprintf(__s,(char *)(DAT_00024c70 + 0x24c04));
  iVar2 = sprintf(__s + iVar1,(char *)(DAT_00024c74 + 0x24c3c),param_1,param_2,param_3);
  return __s + iVar1 + (iVar2 - (int)param_4);
}



/* ===== FUN_00024c78 @ 00024c78 size=196 ===== */

char * FUN_00024c78(undefined4 param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  int iVar1;
  int iVar2;
  char *__s;
  
  iVar1 = sprintf(param_4,(char *)(DAT_00024d3c + 0x24cac),param_1);
  __s = param_4 + iVar1;
  iVar1 = sprintf(__s,(char *)(DAT_00024d40 + 0x24cd4));
  iVar2 = sprintf(__s + iVar1,(char *)(DAT_00024d44 + 0x24d0c),param_1,param_2,param_3);
  return __s + iVar1 + (iVar2 - (int)param_4);
}



/* ===== FUN_00024d48 @ 00024d48 size=252 ===== */

char * FUN_00024d48(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint *param_4,
                   char *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *__s;
  
  iVar1 = sprintf(param_5,(char *)(DAT_00024e44 + 0x24d7c),param_1);
  __s = param_5 + iVar1;
  iVar1 = sprintf(__s,(char *)(DAT_00024e48 + 0x24da4));
  if (*param_4 == 0) {
    uVar3 = 0x20;
  }
  else {
    uVar3 = *param_4 / 1000;
  }
  iVar2 = sprintf(__s + iVar1,(char *)(DAT_00024e4c + 0x24e14),param_1,uVar3,param_2,param_3);
  return __s + iVar1 + (iVar2 - (int)param_5);
}



/* ===== FUN_00024e50 @ 00024e50 size=1436 ===== */

int FUN_00024e50(byte *param_1,byte *param_2,size_t param_3,undefined4 param_4,uint param_5,
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
    __hostlong = FUN_00025e24((int)lVar2,
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



/* ===== FUN_000253ec @ 000253ec size=1492 ===== */

int FUN_000253ec(byte *param_1,byte *param_2,size_t param_3,undefined4 param_4,uint param_5,
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
    __hostlong = FUN_00025e24((int)lVar3,
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



/* ===== FUN_000259c0 @ 000259c0 size=792 ===== */

int FUN_000259c0(byte *param_1,void *param_2,size_t param_3,undefined4 param_4,uint param_5,
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
    __hostlong = FUN_00025e24((int)lVar1,
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



/* ===== FUN_00025cd8 @ 00025cd8 size=80 ===== */

undefined4
FUN_00025cd8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000259c0(param_1,param_2,param_3,param_6,param_5,param_6,param_7,param_8);
  return uVar1;
}



/* ===== FUN_00025d28 @ 00025d28 size=24 ===== */

ulonglong FUN_00025d28(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  if (param_2 == 0) {
    uVar2 = raise(8);
    return (ulonglong)uVar2;
  }
  uVar5 = param_1 ^ param_2;
  uVar2 = param_2;
  if ((int)param_2 < 0) {
    uVar2 = -param_2;
  }
  if (uVar2 - 1 == 0) {
    if ((int)param_2 < 0) {
      param_1 = -param_1;
    }
    return CONCAT44(uVar2,param_1);
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
    return CONCAT44(uVar2,param_1);
  }
  if ((uVar2 & uVar2 - 1) == 0) {
    uVar4 = uVar4 >> (0x1fU - LZCOUNT(uVar2) & 0xff);
    if ((int)uVar5 < 0) {
      uVar4 = -uVar4;
    }
    return CONCAT44(uVar2,uVar4);
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
  return CONCAT44(uVar3,uVar1);
}



/* ===== FUN_00025d30 @ 00025d30 size=196 ===== */

uint FUN_00025d30(uint param_1,uint param_2)

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



/* ===== FUN_00025e04 @ 00025e04 size=32 ===== */

void FUN_00025e04(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_00025d30();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_00025e24 @ 00025e24 size=76 ===== */

void FUN_00025e24(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  if (param_4 != 0 || param_3 != 0) {
    FUN_00025e70();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_00025e70 @ 00025e70 size=328 ===== */

undefined8 FUN_00025e70(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

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



/* ===== _fini @ 00025fb8 size=16 ===== */

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



/* ===== <EXTERNAL>::RK_MPI_VPSS_SendFrame @ 0003c01c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_SendFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_preInit_devBufCnt @ 0003c020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_preInit_devBufCnt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::recvfrom @ 0003c024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recvfrom(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,socklen_t *__addr_len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 0003c028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_RGN_SetBitMap @ 0003c02c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_RGN_SetBitMap(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 0003c030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevAttr @ 0003c034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetDevAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetChnFrame @ 0003c038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetChnFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setlinebuf @ 0003c03c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void setlinebuf(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 0003c040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_ReleaseChnFrame @ 0003c044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_ReleaseChnFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::accept @ 0003c048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int accept(int __fd,sockaddr *__addr,socklen_t *__addr_len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 0003c04c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 0003c050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 0003c054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcat @ 0003c058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 0003c05c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_RGN_Create @ 0003c060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_RGN_Create(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memmove @ 0003c064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_ae_setExpSwAttr @ 0003c068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_user_api2_ae_setExpSwAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::raise @ 0003c06c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 0003c070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 0003c074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_SetGrpCrop @ 0003c078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_SetGrpCrop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_join @ 0003c07c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_GetChnCrop @ 0003c080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_GetChnCrop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 0003c084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setenv @ 0003c088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setenv(char *__name,char *__value,int __replace)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableDev @ 0003c08c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_EnableDev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_RGN_DetachFromChn @ 0003c090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_RGN_DetachFromChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevAttr @ 0003c094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetDevAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 0003c098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableDev @ 0003c09c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_DisableDev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_destroy @ 0003c0a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_destroy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_RGN_AttachToChn @ 0003c0a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_RGN_AttachToChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0003c0a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Bind @ 0003c0ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Bind(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChnExt @ 0003c0b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_EnableChnExt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ntohs @ 0003c0b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint16_t ntohs(uint16_t __netshort)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 0003c0b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::send @ 0003c0bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t send(int __fd,void *__buf,size_t __n,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_start @ 0003c0c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_start(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_SetChnRotation @ 0003c0c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_SetChnRotation(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_GetChnFrame @ 0003c0c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_GetChnFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_RGN_SetDisplayAttr @ 0003c0cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_RGN_SetDisplayAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_StopGrp @ 0003c0d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_StopGrp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetJpegParam @ 0003c0d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetJpegParam(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::recv @ 0003c0d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recv(int __fd,void *__buf,size_t __n,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_prepare @ 0003c0dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_prepare(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fseek @ 0003c0e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_deinit @ 0003c0e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_deinit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StartRecvFrame @ 0003c0e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_StartRecvFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt_long @ 0003c0ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void getopt_long(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetComboAttr @ 0003c0f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetComboAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_SetChnCrop @ 0003c0f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_SetChnCrop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_MmzFlushCache @ 0003c0f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_MmzFlushCache(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 0003c0fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::listen @ 0003c100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int listen(int __fd,int __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sendto @ 0003c104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t sendto(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,socklen_t __addr_len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_StartGrp @ 0003c108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_StartGrp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ctime @ 0003c10c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * ctime(time_t *__timer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SendFrame @ 0003c110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SendFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_CreateGrp @ 0003c114 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_CreateGrp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_GetChnAttr @ 0003c118 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_GetChnAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 0003c11c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 0003c120 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_LOG @ 0003c124 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_LOG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_DisableChn @ 0003c128 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_DisableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_create @ 0003c12c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_create(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 0003c130 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clock_gettime @ 0003c134 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strrchr @ 0003c138 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetMjpegParam @ 0003c13c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetMjpegParam(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::socket @ 0003c140 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_ae_getExpSwAttr @ 0003c144 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_user_api2_ae_getExpSwAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_aldch_v21_GetAttrib @ 0003c148 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_user_api2_aldch_v21_GetAttrib(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setsockopt @ 0003c14c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChn @ 0003c150 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_EnableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_SetChnAttr @ 0003c154 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_SetChnAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_getCamInfos @ 0003c158 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_getCamInfos(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_setMulCamConc @ 0003c15c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_setMulCamConc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId @ 0003c160 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::inet_ntoa @ 0003c164 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * inet_ntoa(in_addr __in)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::time @ 0003c168 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_QueryChnStatus @ 0003c16c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_QueryChnStatus(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChn @ 0003c170 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_DisableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnWrapBufAttr @ 0003c174 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetChnWrapBufAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_stop @ 0003c178 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_stop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetEptz @ 0003c17c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetEptz(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetChnBufWrapAttr @ 0003c180 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetChnBufWrapAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fcntl @ 0003c184 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fcntl(int __fd,int __cmd,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_EnableSvc @ 0003c188 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_EnableSvc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetRcParam @ 0003c18c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetRcParam(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_DestroyGrp @ 0003c190 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_DestroyGrp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_switch_scene @ 0003c194 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_switch_scene(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm @ 0003c198 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::htonl @ 0003c19c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint32_t htonl(uint32_t __hostlong)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevIsEnable @ 0003c1a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetDevIsEnable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::signal @ 0003c1a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen64 @ 0003c1a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_create @ 0003c1ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_CAL_VGS_GetPicBufferSize @ 0003c1b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_CAL_VGS_GetPicBufferSize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StopRecvFrame @ 0003c1b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_StopRecvFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::htons @ 0003c1b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint16_t htons(uint16_t __hostshort)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_SetVProcDev @ 0003c1bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_SetVProcDev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_GetMB @ 0003c1c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_GetMB(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::select @ 0003c1c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 0003c1c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 0003c1cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Exit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_aldch_v21_SetAttrib @ 0003c1d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_user_api2_aldch_v21_SetAttrib(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 0003c1d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_ResetGrp @ 0003c1d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_ResetGrp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usleep @ 0003c1dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 0003c1e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_RGN_Destroy @ 0003c1e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_RGN_Destroy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_prepare @ 0003c1e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_prepare(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnAttr @ 0003c1ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetChnAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_ReleaseChnFrame @ 0003c1f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_ReleaseChnFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 0003c1f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_GetStream @ 0003c1f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_GetStream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_GetVProcDev @ 0003c1fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_GetVProcDev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_start @ 0003c200 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_start(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::system @ 0003c204 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int system(char *__command)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChnExt @ 0003c208 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_DisableChnExt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_EnableChn @ 0003c20c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_EnableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sleep @ 0003c210 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 0003c214 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 0003c218 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_Handle2VirAddr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strstr @ 0003c21c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sscanf @ 0003c220 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_RGN_GetDisplayAttr @ 0003c224 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_RGN_GetDisplayAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevBindPipe @ 0003c228 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetDevBindPipe(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_UnBind @ 0003c22c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_UnBind(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_ChnSaveFile @ 0003c230 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_ChnSaveFile(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 0003c234 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gettimeofday @ 0003c238 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_ReleaseMB @ 0003c23c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_ReleaseMB(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 0003c240 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetChnRefBufShareAttr @ 0003c244 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetChnRefBufShareAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fread @ 0003c248 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_stop @ 0003c24c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_stop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::bind @ 0003c250 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_DestroyChn @ 0003c254 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_DestroyChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 0003c258 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_GetGrpCrop @ 0003c25c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_GetGrpCrop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_GetChnRotation @ 0003c260 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_GetChnRotation(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_init @ 0003c264 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_CreateChn @ 0003c268 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_CreateChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_ReleaseStream @ 0003c26c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_ReleaseStream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


