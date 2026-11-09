// sample_demo_vi_venc — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00012820 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 00012844 size=12 ===== */

void RK_MPI_SYS_Exit(void)

{
  (*(code *)PTR_RK_MPI_SYS_Exit_0003d00c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Bind @ 00012850 size=12 ===== */

void RK_MPI_SYS_Bind(void)

{
  (*(code *)PTR_RK_MPI_SYS_Bind_0003d010)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm @ 0001285c size=12 ===== */

void rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm_0003d014)();
  return;
}



/* ===== <EXTERNAL>::bind @ 00012868 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_bind_0003d018)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_QueryChnStatus @ 00012874 size=12 ===== */

void RK_MPI_VI_QueryChnStatus(void)

{
  (*(code *)PTR_RK_MPI_VI_QueryChnStatus_0003d01c)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00012880 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_0003d020)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnWrapBufAttr @ 0001288c size=12 ===== */

void RK_MPI_VI_SetChnWrapBufAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetChnWrapBufAttr_0003d024)();
  return;
}



/* ===== <EXTERNAL>::htons @ 00012898 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint16_t htons(uint16_t __hostshort)

{
  uint16_t uVar1;
  
  uVar1 = (*(code *)PTR_htons_0003d028)(__hostshort);
  return uVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_GetStream @ 000128a4 size=12 ===== */

void RK_MPI_VENC_GetStream(void)

{
  (*(code *)PTR_RK_MPI_VENC_GetStream_0003d02c)();
  return;
}



/* ===== <EXTERNAL>::calloc @ 000128b0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_0003d030)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 000128bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_0003d034)();
  return piVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_EnableMotionDeblur @ 000128c8 size=12 ===== */

void RK_MPI_VENC_EnableMotionDeblur(void)

{
  (*(code *)PTR_RK_MPI_VENC_EnableMotionDeblur_0003d038)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetComboAttr @ 000128d4 size=12 ===== */

void RK_MPI_VENC_SetComboAttr(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetComboAttr_0003d03c)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_destroy @ 000128e0 size=12 ===== */

void rk_aiq_uapi2_camgroup_destroy(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_destroy_0003d040)();
  return;
}



/* ===== <EXTERNAL>::clock_gettime @ 000128ec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_clock_gettime_0003d044)(__clock_id);
  return iVar1;
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_ae_setExpSwAttr @ 000128f8 size=12 ===== */

void rk_aiq_user_api2_ae_setExpSwAttr(void)

{
  (*(code *)PTR_rk_aiq_user_api2_ae_setExpSwAttr_0003d048)();
  return;
}



/* ===== <EXTERNAL>::fwrite @ 00012904 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_0003d04c)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::ROCKIVA_PushFrame @ 00012910 size=12 ===== */

void ROCKIVA_PushFrame(void)

{
  (*(code *)PTR_ROCKIVA_PushFrame_0003d050)();
  return;
}



/* ===== <EXTERNAL>::system @ 0001291c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int system(char *__command)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_system_0003d054)(__command);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChn @ 00012934 size=12 ===== */

void RK_MPI_VI_DisableChn(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableChn_0003d05c)();
  return;
}



/* ===== <EXTERNAL>::usleep @ 00012940 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_usleep_0003d060)(__useconds);
  return iVar1;
}



/* ===== <EXTERNAL>::memcpy @ 0001294c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_0003d064)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_setMulCamConc @ 00012958 size=12 ===== */

void rk_aiq_uapi2_sysctl_setMulCamConc(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_setMulCamConc_0003d068)();
  return;
}



/* ===== <EXTERNAL>::RK_TDE_Open @ 00012964 size=12 ===== */

void RK_TDE_Open(void)

{
  (*(code *)PTR_RK_TDE_Open_0003d06c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_RGN_DetachFromChn @ 00012970 size=12 ===== */

void RK_MPI_RGN_DetachFromChn(void)

{
  (*(code *)PTR_RK_MPI_RGN_DetachFromChn_0003d070)();
  return;
}



/* ===== <EXTERNAL>::sleep @ 0001297c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_sleep_0003d074)(__seconds);
  return uVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_CreateChn @ 00012988 size=12 ===== */

void RK_MPI_VENC_CreateChn(void)

{
  (*(code *)PTR_RK_MPI_VENC_CreateChn_0003d078)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_ReleaseChnFrame @ 00012994 size=12 ===== */

void RK_MPI_VI_ReleaseChnFrame(void)

{
  (*(code *)PTR_RK_MPI_VI_ReleaseChnFrame_0003d07c)();
  return;
}



/* ===== <EXTERNAL>::send @ 000129a0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t send(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_send_0003d080)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::pthread_mutex_init @ 000129ac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_0003d084)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2Fd @ 000129b8 size=12 ===== */

void RK_MPI_MB_Handle2Fd(void)

{
  (*(code *)PTR_RK_MPI_MB_Handle2Fd_0003d088)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_create @ 000129c4 size=12 ===== */

void rk_aiq_uapi2_camgroup_create(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_create_0003d08c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_GetMB @ 000129d0 size=12 ===== */

void RK_MPI_MB_GetMB(void)

{
  (*(code *)PTR_RK_MPI_MB_GetMB_0003d090)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_EnableSvc @ 000129dc size=12 ===== */

void RK_MPI_VENC_EnableSvc(void)

{
  (*(code *)PTR_RK_MPI_VENC_EnableSvc_0003d094)();
  return;
}



/* ===== <EXTERNAL>::gettimeofday @ 000129e8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_gettimeofday_0003d098)(__tv);
  return iVar1;
}



/* ===== <EXTERNAL>::strcat @ 000129f4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcat_0003d09c)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::prctl @ 00012a00 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int prctl(int __option,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_prctl_0003d0a0)(__option);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevAttr @ 00012a0c size=12 ===== */

void RK_MPI_VI_GetDevAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_GetDevAttr_0003d0a4)();
  return;
}



/* ===== <EXTERNAL>::ROCKIVA_BA_Init @ 00012a18 size=12 ===== */

void ROCKIVA_BA_Init(void)

{
  (*(code *)PTR_ROCKIVA_BA_Init_0003d0a8)();
  return;
}



/* ===== <EXTERNAL>::setenv @ 00012a24 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setenv(char *__name,char *__value,int __replace)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setenv_0003d0ac)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::malloc @ 00012a30 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0003d0b0)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_aldch_v21_SetAttrib @ 00012a3c size=12 ===== */

void rk_aiq_user_api2_aldch_v21_SetAttrib(void)

{
  (*(code *)PTR_rk_aiq_user_api2_aldch_v21_SetAttrib_0003d0b4)();
  return;
}



/* ===== <EXTERNAL>::ROCKIVA_BA_Release @ 00012a48 size=12 ===== */

void ROCKIVA_BA_Release(void)

{
  (*(code *)PTR_ROCKIVA_BA_Release_0003d0b8)();
  return;
}



/* ===== <EXTERNAL>::ROCKIVA_Release @ 00012a54 size=12 ===== */

void ROCKIVA_Release(void)

{
  (*(code *)PTR_ROCKIVA_Release_0003d0bc)();
  return;
}



/* ===== <EXTERNAL>::strrchr @ 00012a60 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strrchr_0003d0c0)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::strncmp @ 00012a6c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_0003d0c4)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::fopen64 @ 00012a84 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen64_0003d0cc)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::RK_TDE_QuickCopy @ 00012a90 size=12 ===== */

void RK_TDE_QuickCopy(void)

{
  (*(code *)PTR_RK_TDE_QuickCopy_0003d0d0)();
  return;
}



/* ===== <EXTERNAL>::ROCKIVA_SetFrameReleaseCallback @ 00012a9c size=12 ===== */

void ROCKIVA_SetFrameReleaseCallback(void)

{
  (*(code *)PTR_ROCKIVA_SetFrameReleaseCallback_0003d0d4)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_setMirrorFlip @ 00012aa8 size=12 ===== */

void rk_aiq_uapi2_setMirrorFlip(void)

{
  (*(code *)PTR_rk_aiq_uapi2_setMirrorFlip_0003d0d8)();
  return;
}



/* ===== <EXTERNAL>::setlinebuf @ 00012ab4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void setlinebuf(FILE *__stream)

{
  (*(code *)PTR_setlinebuf_0003d0dc)(__stream);
  return;
}



/* ===== <EXTERNAL>::recv @ 00012ac0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recv(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_recv_0003d0e0)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::strlen @ 00012acc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_0003d0e4)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::pthread_mutex_lock @ 00012ad8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_0003d0e8)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::ctime @ 00012ae4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * ctime(time_t *__timer)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_ctime_0003d0ec)(__timer);
  return pcVar1;
}



/* ===== <EXTERNAL>::sendto @ 00012af0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t sendto(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,socklen_t __addr_len)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_sendto_0003d0f0)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::fcntl @ 00012afc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fcntl(int __fd,int __cmd,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fcntl_0003d0f4)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::snprintf @ 00012b08 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_0003d0f8)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::htonl @ 00012b14 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint32_t htonl(uint32_t __hostlong)

{
  uint32_t uVar1;
  
  uVar1 = (*(code *)PTR_htonl_0003d0fc)(__hostlong);
  return uVar1;
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_aldch_v21_GetAttrib @ 00012b20 size=12 ===== */

void rk_aiq_user_api2_aldch_v21_GetAttrib(void)

{
  (*(code *)PTR_rk_aiq_user_api2_aldch_v21_GetAttrib_0003d100)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_RGN_Destroy @ 00012b2c size=12 ===== */

void RK_MPI_RGN_Destroy(void)

{
  (*(code *)PTR_RK_MPI_RGN_Destroy_0003d104)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnAttr @ 00012b38 size=12 ===== */

void RK_MPI_VI_SetChnAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetChnAttr_0003d108)();
  return;
}



/* ===== <EXTERNAL>::select @ 00012b44 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_select_0003d10c)(__nfds);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_UnBind @ 00012b50 size=12 ===== */

void RK_MPI_SYS_UnBind(void)

{
  (*(code *)PTR_RK_MPI_SYS_UnBind_0003d110)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SendFrame @ 00012b5c size=12 ===== */

void RK_MPI_VENC_SendFrame(void)

{
  (*(code *)PTR_RK_MPI_VENC_SendFrame_0003d114)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_IVS_DestroyChn @ 00012b68 size=12 ===== */

void RK_MPI_IVS_DestroyChn(void)

{
  (*(code *)PTR_RK_MPI_IVS_DestroyChn_0003d118)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetChnRefBufShareAttr @ 00012b74 size=12 ===== */

void RK_MPI_VENC_SetChnRefBufShareAttr(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetChnRefBufShareAttr_0003d11c)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_prepare @ 00012b80 size=12 ===== */

void rk_aiq_uapi2_camgroup_prepare(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_prepare_0003d120)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 00012b8c size=12 ===== */

void RK_MPI_SYS_Init(void)

{
  (*(code *)PTR_RK_MPI_SYS_Init_0003d124)();
  return;
}



/* ===== <EXTERNAL>::pthread_mutex_destroy @ 00012b98 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_0003d128)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId @ 00012ba4 size=12 ===== */

void rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId_0003d12c)();
  return;
}



/* ===== <EXTERNAL>::memmove @ 00012bb0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_0003d130)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::fclose @ 00012bbc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_0003d134)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_RGN_SetBitMap @ 00012bc8 size=12 ===== */

void RK_MPI_RGN_SetBitMap(void)

{
  (*(code *)PTR_RK_MPI_RGN_SetBitMap_0003d138)();
  return;
}



/* ===== <EXTERNAL>::setsockopt @ 00012bd4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setsockopt_0003d13c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::fread @ 00012be0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fread_0003d140)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::RK_MPI_RGN_AttachToChn @ 00012bec size=12 ===== */

void RK_MPI_RGN_AttachToChn(void)

{
  (*(code *)PTR_RK_MPI_RGN_AttachToChn_0003d144)();
  return;
}



/* ===== <EXTERNAL>::RK_LOG @ 00012bf8 size=12 ===== */

void RK_LOG(void)

{
  (*(code *)PTR_RK_LOG_0003d148)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_getCamInfos @ 00012c04 size=12 ===== */

void rk_aiq_uapi2_camgroup_getCamInfos(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_getCamInfos_0003d14c)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_start @ 00012c10 size=12 ===== */

void rk_aiq_uapi2_camgroup_start(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_start_0003d150)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StopRecvFrame @ 00012c1c size=12 ===== */

void RK_MPI_VENC_StopRecvFrame(void)

{
  (*(code *)PTR_RK_MPI_VENC_StopRecvFrame_0003d154)();
  return;
}



/* ===== <EXTERNAL>::time @ 00012c28 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_0003d158)(__timer);
  return tVar1;
}



/* ===== <EXTERNAL>::RK_TDE_EndJob @ 00012c34 size=12 ===== */

void RK_TDE_EndJob(void)

{
  (*(code *)PTR_RK_TDE_EndJob_0003d15c)();
  return;
}



/* ===== <EXTERNAL>::fileno @ 00012c40 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fileno(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fileno_0003d160)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::pthread_create @ 00012c4c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_0003d164)(__newthread);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_RGN_GetDisplayAttr @ 00012c58 size=12 ===== */

void RK_MPI_RGN_GetDisplayAttr(void)

{
  (*(code *)PTR_RK_MPI_RGN_GetDisplayAttr_0003d168)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetRcParam @ 00012c64 size=12 ===== */

void RK_MPI_VENC_SetRcParam(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetRcParam_0003d16c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_RGN_SetDisplayAttr @ 00012c70 size=12 ===== */

void RK_MPI_RGN_SetDisplayAttr(void)

{
  (*(code *)PTR_RK_MPI_RGN_SetDisplayAttr_0003d170)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChnExt @ 00012c7c size=12 ===== */

void RK_MPI_VI_DisableChnExt(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableChnExt_0003d174)();
  return;
}



/* ===== <EXTERNAL>::close @ 00012c88 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_0003d178)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetChnFrame @ 00012c94 size=12 ===== */

void RK_MPI_VI_GetChnFrame(void)

{
  (*(code *)PTR_RK_MPI_VI_GetChnFrame_0003d17c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_IVS_ReleaseResults @ 00012ca0 size=12 ===== */

void RK_MPI_IVS_ReleaseResults(void)

{
  (*(code *)PTR_RK_MPI_IVS_ReleaseResults_0003d180)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_CreatePool @ 00012cac size=12 ===== */

void RK_MPI_MB_CreatePool(void)

{
  (*(code *)PTR_RK_MPI_MB_CreatePool_0003d184)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChnExt @ 00012cb8 size=12 ===== */

void RK_MPI_VI_EnableChnExt(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableChnExt_0003d188)();
  return;
}



/* ===== <EXTERNAL>::sscanf @ 00012cc4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sscanf_0003d18c)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::strncpy @ 00012cd0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_0003d190)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetChnBufWrapAttr @ 00012cdc size=12 ===== */

void RK_MPI_VENC_SetChnBufWrapAttr(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetChnBufWrapAttr_0003d194)();
  return;
}



/* ===== <EXTERNAL>::RK_TDE_WaitForDone @ 00012ce8 size=12 ===== */

void RK_TDE_WaitForDone(void)

{
  (*(code *)PTR_RK_TDE_WaitForDone_0003d198)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevBindPipe @ 00012cf4 size=12 ===== */

void RK_MPI_VI_SetDevBindPipe(void)

{
  (*(code *)PTR_RK_MPI_VI_SetDevBindPipe_0003d19c)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_prepare @ 00012d00 size=12 ===== */

void rk_aiq_uapi2_sysctl_prepare(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_prepare_0003d1a0)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevIsEnable @ 00012d0c size=12 ===== */

void RK_MPI_VI_GetDevIsEnable(void)

{
  (*(code *)PTR_RK_MPI_VI_GetDevIsEnable_0003d1a4)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_init @ 00012d18 size=12 ===== */

void rk_aiq_uapi2_sysctl_init(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_init_0003d1a8)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableDev @ 00012d24 size=12 ===== */

void RK_MPI_VI_EnableDev(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableDev_0003d1ac)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_start @ 00012d30 size=12 ===== */

void rk_aiq_uapi2_sysctl_start(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_start_0003d1b0)();
  return;
}



/* ===== <EXTERNAL>::fflush @ 00012d3c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_0003d1b4)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 00012d48 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0003d1b8)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::RK_MPI_RGN_Create @ 00012d54 size=12 ===== */

void RK_MPI_RGN_Create(void)

{
  (*(code *)PTR_RK_MPI_RGN_Create_0003d1bc)();
  return;
}



/* ===== <EXTERNAL>::inet_ntoa @ 00012d60 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * inet_ntoa(in_addr __in)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_inet_ntoa_0003d1c0)(__in.s_addr);
  return pcVar1;
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_ae_getExpSwAttr @ 00012d6c size=12 ===== */

void rk_aiq_user_api2_ae_getExpSwAttr(void)

{
  (*(code *)PTR_rk_aiq_user_api2_ae_getExpSwAttr_0003d1c4)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_preInit_devBufCnt @ 00012d78 size=12 ===== */

void rk_aiq_uapi2_sysctl_preInit_devBufCnt(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_preInit_devBufCnt_0003d1c8)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_IVS_GetResults @ 00012d84 size=12 ===== */

void RK_MPI_IVS_GetResults(void)

{
  (*(code *)PTR_RK_MPI_IVS_GetResults_0003d1cc)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_DestroyPool @ 00012d90 size=12 ===== */

void RK_MPI_MB_DestroyPool(void)

{
  (*(code *)PTR_RK_MPI_MB_DestroyPool_0003d1d0)();
  return;
}



/* ===== <EXTERNAL>::ROCKIVA_Init @ 00012d9c size=12 ===== */

void ROCKIVA_Init(void)

{
  (*(code *)PTR_ROCKIVA_Init_0003d1d4)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_IVS_CreateChn @ 00012da8 size=12 ===== */

void RK_MPI_IVS_CreateChn(void)

{
  (*(code *)PTR_RK_MPI_IVS_CreateChn_0003d1d8)();
  return;
}



/* ===== <EXTERNAL>::fprintf @ 00012db4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_0003d1dc)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::ntohs @ 00012dc0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint16_t ntohs(uint16_t __netshort)

{
  uint16_t uVar1;
  
  uVar1 = (*(code *)PTR_ntohs_0003d1e0)(__netshort);
  return uVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_ChnSaveFile @ 00012dcc size=12 ===== */

void RK_MPI_VI_ChnSaveFile(void)

{
  (*(code *)PTR_RK_MPI_VI_ChnSaveFile_0003d1e4)();
  return;
}



/* ===== <EXTERNAL>::abort @ 00012dd8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_0003d1e8)();
  return;
}



/* ===== <EXTERNAL>::recvfrom @ 00012de4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recvfrom(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,socklen_t *__addr_len)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_recvfrom_0003d1ec)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::RK_TDE_BeginJob @ 00012df0 size=12 ===== */

void RK_TDE_BeginJob(void)

{
  (*(code *)PTR_RK_TDE_BeginJob_0003d1f0)();
  return;
}



/* ===== <EXTERNAL>::sprintf @ 00012dfc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_0003d1f4)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_MmzFlushCache @ 00012e08 size=12 ===== */

void RK_MPI_SYS_MmzFlushCache(void)

{
  (*(code *)PTR_RK_MPI_SYS_MmzFlushCache_0003d1f8)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StartRecvFrame @ 00012e14 size=12 ===== */

void RK_MPI_VENC_StartRecvFrame(void)

{
  (*(code *)PTR_RK_MPI_VENC_StartRecvFrame_0003d1fc)();
  return;
}



/* ===== <EXTERNAL>::socket @ 00012e20 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_socket_0003d200)(__domain);
  return iVar1;
}



/* ===== <EXTERNAL>::fseek @ 00012e2c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fseek_0003d204)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 00012e38 size=12 ===== */

void RK_MPI_MB_Handle2VirAddr(void)

{
  (*(code *)PTR_RK_MPI_MB_Handle2VirAddr_0003d208)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_ReleaseMB @ 00012e44 size=12 ===== */

void RK_MPI_MB_ReleaseMB(void)

{
  (*(code *)PTR_RK_MPI_MB_ReleaseMB_0003d20c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_DestroyChn @ 00012e50 size=12 ===== */

void RK_MPI_VENC_DestroyChn(void)

{
  (*(code *)PTR_RK_MPI_VENC_DestroyChn_0003d210)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetMjpegParam @ 00012e5c size=12 ===== */

void RK_MPI_VENC_SetMjpegParam(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetMjpegParam_0003d214)();
  return;
}



/* ===== <EXTERNAL>::pthread_mutex_unlock @ 00012e68 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_0003d218)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_deinit @ 00012e74 size=12 ===== */

void rk_aiq_uapi2_sysctl_deinit(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_deinit_0003d21c)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_stop @ 00012e80 size=12 ===== */

void rk_aiq_uapi2_sysctl_stop(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_stop_0003d220)();
  return;
}



/* ===== <EXTERNAL>::raise @ 00012e8c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_0003d224)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::strstr @ 00012e98 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strstr_0003d228)(__haystack);
  return pcVar1;
}



/* ===== <EXTERNAL>::strcmp @ 00012ea4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_0003d22c)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_ReleaseStream @ 00012eb0 size=12 ===== */

void RK_MPI_VENC_ReleaseStream(void)

{
  (*(code *)PTR_RK_MPI_VENC_ReleaseStream_0003d230)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetEptz @ 00012ebc size=12 ===== */

void RK_MPI_VI_SetEptz(void)

{
  (*(code *)PTR_RK_MPI_VI_SetEptz_0003d234)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_IVS_GetChnAttr @ 00012ec8 size=12 ===== */

void RK_MPI_IVS_GetChnAttr(void)

{
  (*(code *)PTR_RK_MPI_IVS_GetChnAttr_0003d238)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevAttr @ 00012ed4 size=12 ===== */

void RK_MPI_VI_SetDevAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetDevAttr_0003d23c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChn @ 00012ee0 size=12 ===== */

void RK_MPI_VI_EnableChn(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableChn_0003d240)();
  return;
}



/* ===== <EXTERNAL>::accept @ 00012eec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int accept(int __fd,sockaddr *__addr,socklen_t *__addr_len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_accept_0003d244)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 00012ef8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0003d248)(__ptr);
  return;
}



/* ===== <EXTERNAL>::atoi @ 00012f04 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_0003d24c)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetJpegParam @ 00012f10 size=12 ===== */

void RK_MPI_VENC_SetJpegParam(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetJpegParam_0003d250)();
  return;
}



/* ===== <EXTERNAL>::fsync @ 00012f1c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fsync(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fsync_0003d254)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::strerror @ 00012f28 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_0003d258)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::listen @ 00012f34 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int listen(int __fd,int __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_listen_0003d25c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::printf @ 00012f40 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_0003d260)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::getopt_long @ 00012f4c size=12 ===== */

void getopt_long(void)

{
  (*(code *)PTR_getopt_long_0003d264)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableDev @ 00012f58 size=12 ===== */

void RK_MPI_VI_DisableDev(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableDev_0003d268)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_CAL_TDE_GetPicBufferSize @ 00012f64 size=12 ===== */

void RK_MPI_CAL_TDE_GetPicBufferSize(void)

{
  (*(code *)PTR_RK_MPI_CAL_TDE_GetPicBufferSize_0003d26c)();
  return;
}



/* ===== <EXTERNAL>::puts @ 00012f70 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_0003d270)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_stop @ 00012f7c size=12 ===== */

void rk_aiq_uapi2_camgroup_stop(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_stop_0003d274)();
  return;
}



/* ===== <EXTERNAL>::signal @ 00012f88 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = (__sighandler_t)(*(code *)PTR_signal_0003d278)(__sig);
  return p_Var1;
}



/* ===== <EXTERNAL>::RK_TDE_CancelJob @ 00012f94 size=12 ===== */

void RK_TDE_CancelJob(void)

{
  (*(code *)PTR_RK_TDE_CancelJob_0003d27c)();
  return;
}



/* ===== <EXTERNAL>::RK_TDE_Close @ 00012fa0 size=12 ===== */

void RK_TDE_Close(void)

{
  (*(code *)PTR_RK_TDE_Close_0003d280)();
  return;
}



/* ===== <EXTERNAL>::strcpy @ 00012fac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_0003d284)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00012fb8 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_0003d288)();
  return;
}



/* ===== <EXTERNAL>::pthread_join @ 00012fc4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_0003d28c)(__th);
  return iVar1;
}



/* ===== entry @ 00014968 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_0003d0c8)
            (DAT_0001499c,param_2,&stack0x00000004,DAT_000149a0,DAT_00014998,param_1);
  return;
}



/* ===== FUN_000149a4 @ 000149a4 size=32 ===== */

void FUN_000149a4(void)

{
  if (DAT_000149c8 == DAT_000149c4) {
    return;
  }
  if (DAT_000149cc == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000149c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000149cc)();
  return;
}



/* ===== _FINI_0 @ 00014a08 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00014a44;
  if (*DAT_00014a44 != '\0') {
    return;
  }
  FUN_000149a4();
  if (DAT_00014a48 != 0) {
    __deregister_frame_info(DAT_00014a4c);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00014a50 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00014a74 != 0) {
    __register_frame_info(DAT_00014a7c,DAT_00014a78);
  }
  if ((DAT_00014a00 - DAT_000149fc >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00014a04 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000149f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00014a04)();
  return;
}



/* ===== FUN_00014a80 @ 00014a80 size=60 ===== */

void FUN_00014a80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  RK_LOG(2,DAT_00014ac4,DAT_00014abc,DAT_00014ac0,0x58,param_1,param_2,param_4);
  *(undefined4 *)*DAT_00014ac8 = 1;
  return;
}



/* ===== FUN_00014acc @ 00014acc size=72 ===== */

void FUN_00014acc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  RK_LOG(2,DAT_00014b1c,DAT_00014b14,DAT_00014b18,0x52,param_1,param_2,param_4);
  *DAT_00014b20 = 0xffffffff;
  *(undefined4 *)*DAT_00014b24 = 1;
  return;
}



/* ===== FUN_00014b28 @ 00014b28 size=152 ===== */

void FUN_00014b28(undefined4 param_1)

{
  puts(DAT_00014bc0);
  printf(DAT_00014bc4,param_1);
  puts(DAT_00014bc8);
  puts(DAT_00014bcc);
  puts(DAT_00014bd0);
  puts(DAT_00014bd4);
  puts(DAT_00014bd8);
  puts(DAT_00014bdc);
  puts(DAT_00014be0);
  puts(DAT_00014be4);
  puts(DAT_00014be8);
  puts(DAT_00014bec);
  puts(DAT_00014bf0);
  puts(DAT_00014bf4);
  puts(DAT_00014bf8);
  puts(DAT_00014bfc);
  puts(DAT_00014c00);
  return;
}



/* ===== FUN_00014c04 @ 00014c04 size=316 ===== */

undefined4 FUN_00014c04(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *__dest;
  int iVar4;
  int iVar5;
  undefined4 local_54;
  int local_50 [3];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 *local_2c;
  
  prctl(0xf,DAT_00014d40);
  local_54 = 0;
  iVar2 = FUN_00027868(1000,*(undefined4 *)(param_1 + 0x3aa0));
  piVar1 = DAT_00014d44;
  iVar4 = 0;
LAB_00014c40:
  do {
    if (*(int *)(*piVar1 + 0x1c) != 0) {
      RK_LOG(2,DAT_00014d50,DAT_00014d48,DAT_00014d4c,0x184);
      return 0;
    }
    iVar3 = FUN_00015a60(param_1 + 0x720,&local_54);
    iVar5 = iVar4;
    if (iVar3 == 0) {
      __dest = malloc(0x50);
      if (__dest == (undefined4 *)0x0) {
        RK_LOG(2,DAT_00014d50,DAT_00014d54,DAT_00014d4c,0x16e);
        FUN_00015b5c(param_1 + 0x720);
        goto LAB_00014c40;
      }
      memcpy(__dest,(void *)(param_1 + 0xa38),0x50);
      local_30 = RK_MPI_MB_Handle2Fd(*__dest);
      uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      local_40 = *(undefined4 *)(param_1 + 0x3aa8);
      local_50[1] = 0;
      iVar5 = iVar4 + 1;
      local_50[2] = CONCAT22((short)__dest[2],(short)__dest[1]);
      local_44 = *(undefined4 *)(param_1 + 0x3aac);
      local_50[0] = iVar4;
      local_2c = __dest;
      ROCKIVA_PushFrame(*(undefined4 *)(param_1 + 0x3aa4),local_50,0);
    }
    usleep(iVar2 * 1000);
    iVar4 = iVar5;
  } while( true );
}



/* ===== FUN_00014d58 @ 00014d58 size=548 ===== */

undefined4 FUN_00014d58(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  int extraout_r1;
  uint uVar9;
  byte *pbVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  byte *pbVar15;
  byte *pbVar16;
  undefined8 local_3b8;
  undefined1 auStack_3b0 [56];
  int local_378;
  
  piVar4 = DAT_00014f80;
  prctl(0xf,DAT_00014f7c);
  uVar13 = param_1[2];
  memset(auStack_3b0,0,0x388);
  RK_MPI_IVS_GetChnAttr(*param_1,auStack_3b0);
  uVar12 = 0;
  iVar14 = 0;
  RK_LOG(2,DAT_00014f88,DAT_00014f84,DAT_00014f8c,0x198,local_378);
  uVar6 = DAT_00014f90;
  uVar5 = DAT_00014f88;
  while (*(int *)(*piVar4 + 0x18) == 0) {
    local_3b8 = 0;
    local_378 = RK_MPI_IVS_GetResults(*param_1,&local_3b8,2000);
    if (local_378 == 0) {
      iVar14 = iVar14 + 1;
      iVar11 = (int)local_3b8;
      RK_LOG(5,uVar5,DAT_00014f98,DAT_00014f8c,0x19f,(int)local_3b8);
      FUN_00027910(iVar14,10);
      if ((extraout_r1 == 0) && ((int)local_3b8 == 1)) {
        pbVar10 = *(byte **)(Elf32_Ehdr_00010000.e_ident_pad + local_3b8._4_4_ + -1);
        uVar1 = *(uint *)(Elf32_Ehdr_00010000.e_ident_pad + local_3b8._4_4_ + 3) >> 6;
        if (pbVar10 != (byte *)0x0) {
          pbVar15 = pbVar10 + (uVar13 >> 6);
          pbVar16 = pbVar10 + uVar1 * 0x40;
          uVar12 = 0;
          for (; pbVar8 = pbVar10, pbVar10 != pbVar16; pbVar10 = pbVar10 + 0x40) {
            while (pbVar8 != pbVar15) {
              pbVar7 = pbVar8 + 1;
              bVar3 = *pbVar8;
              uVar9 = 0;
              do {
                uVar2 = uVar9 & 0xff;
                uVar9 = uVar9 + 1;
                if (((int)(uint)bVar3 >> uVar2 & 1U) != 0) {
                  uVar12 = uVar12 + 1;
                }
                pbVar8 = pbVar7;
              } while (uVar9 != 8);
            }
            pbVar15 = pbVar15 + 0x40;
          }
        }
        if ((uint)((ulonglong)uVar6 * (ulonglong)(uVar1 * (uVar13 >> 6) * 8) >> 0x22) < uVar12) {
          RK_LOG(2,uVar5,DAT_00014f9c,DAT_00014f8c,0x1b0,iVar11);
        }
        iVar14 = 0;
      }
      local_378 = iVar11;
      if (0 < (int)local_3b8) {
        iVar11 = *(int *)(Elf32_Ehdr_00010000.e_ident_pad + local_3b8._4_4_ + 0xf);
        if (iVar11 != 0) {
          RK_LOG(2,uVar5,DAT_00014fa0,DAT_00014f8c,0x1b6,iVar11);
          local_378 = iVar11;
        }
      }
      RK_MPI_IVS_ReleaseResults(*param_1,&local_3b8);
    }
    else {
      RK_LOG(2,uVar5,DAT_00014fa4,DAT_00014f8c,0x1bd,local_378);
    }
  }
  RK_LOG(2,DAT_00014f88,DAT_00014f94,DAT_00014f8c,0x1c1,local_378);
  return 0;
}



/* ===== FUN_00014fa8 @ 00014fa8 size=188 ===== */

void FUN_00014fa8(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  uVar3 = DAT_0001506c;
  uVar2 = DAT_00015068;
  uVar1 = DAT_00015064;
  iVar5 = param_1;
  iVar7 = param_1;
  for (uVar6 = 0; uVar6 < *(uint *)(param_1 + 4); uVar6 = uVar6 + 1) {
    if (*(int *)(iVar5 + 0x2c) == 0) {
      iVar7 = 0x151;
      RK_LOG(2,uVar3,DAT_00015070,uVar1);
      FUN_00014acc(DAT_00015074,0x152);
    }
    else {
      iVar4 = RK_MPI_VI_ReleaseChnFrame
                        (0,2,*(int *)(iVar5 + 0x2c),*(uint *)(param_1 + 4),iVar7,param_2,param_3);
      if (iVar4 != 0) {
        iVar7 = 0x157;
        RK_LOG(2,uVar3,uVar2,uVar1);
        FUN_00014acc(DAT_00015074,0x158);
        param_2 = iVar4;
      }
      free(*(void **)(iVar5 + 0x2c));
    }
    iVar5 = iVar5 + 0x28;
  }
  return;
}



/* ===== FUN_00015078 @ 00015078 size=664 ===== */

undefined4 FUN_00015078(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  FILE *__stream;
  int iVar4;
  char *__format;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  void *local_124;
  char acStack_120 [256];
  
  local_124 = (void *)0x0;
  memset(acStack_120,0,0xff);
  sprintf(acStack_120,DAT_00015310,*(undefined4 *)(param_1 + 0x48));
  prctl(0xf,acStack_120);
  iVar6 = *(int *)(param_1 + 0x280);
  if (iVar6 == 0) {
    __stream = (FILE *)0x0;
    iVar6 = 0;
  }
  else {
    memset(acStack_120,0,0xff);
    __format = DAT_00015314;
    if (1 < *(int *)(param_1 + 0x48) - 2U) {
      __format = DAT_00015318;
    }
    snprintf(acStack_120,0xff,__format,iVar6,*(int *)(param_1 + 0x48));
    __stream = fopen64(acStack_120,DAT_0001531c);
    if (__stream == (FILE *)0x0) {
      RK_LOG(2,DAT_00015320,DAT_00015324,DAT_00015328,0x100,*(undefined4 *)(param_1 + 0x48),
             *(undefined4 *)(param_1 + 0x280));
      FUN_00014acc(DAT_0001532c,0x101);
      return 0;
    }
    iVar6 = fileno(__stream);
  }
  piVar3 = DAT_00015334;
  piVar2 = DAT_00015330;
  uVar1 = DAT_00015320;
  iVar7 = 0;
  do {
    do {
      if (*(int *)(*piVar2 + *(int *)(param_1 + 0x48) * 4 + 4) != 0) {
LAB_000152a4:
        if (__stream != (FILE *)0x0) {
          fsync(iVar6);
          fclose(__stream);
        }
        RK_LOG(2,DAT_00015320,DAT_00015348,DAT_00015328,0x133,*(undefined4 *)(param_1 + 0x48));
        return 0;
      }
      iVar4 = FUN_00017554(param_1,&local_124);
    } while (iVar4 != 0);
    iVar5 = *(int *)(param_1 + 0x38);
    bVar8 = iVar7 == iVar5;
    iVar4 = iVar7 - iVar5;
    if (iVar7 >= iVar5) {
      bVar8 = iVar5 == 0;
      iVar4 = iVar5;
    }
    if (!bVar8 && iVar4 < 0 == (iVar7 < iVar5 && SBORROW4(iVar7,iVar5))) {
      FUN_000175dc(param_1);
      FUN_00014a80(DAT_0001532c,0x10d);
      goto LAB_000152a4;
    }
    if ((__stream != (FILE *)0x0) && (*(int *)*piVar2 == 0)) {
      if (*(int *)(param_1 + 0x48) - 2U < 2) {
        fseek(__stream,0,0);
      }
      fwrite(local_124,1,*(size_t *)(*(int *)(param_1 + 0xe0) + 4),__stream);
      fflush(__stream);
    }
    if ((*piVar3 == 0) || (*(int *)(param_1 + 0x48) - 2U < 2)) {
      RK_LOG(5,uVar1,DAT_00015344,DAT_00015328,0x123,*(int *)(param_1 + 0x48),iVar7);
    }
    else {
      pthread_mutex_lock(DAT_00015338);
      FUN_0001e6b0(*(undefined4 *)(DAT_0001533c + *(int *)(param_1 + 0x48) * 4),local_124,
                   *(undefined4 *)(*(int *)(param_1 + 0xe0) + 4),DAT_0001533c,
                   *(undefined8 *)(*(int *)(param_1 + 0xe0) + 8));
      FUN_0001db04(*DAT_00015340);
      pthread_mutex_unlock(DAT_00015338);
    }
    RK_LOG(5,uVar1,DAT_00015344,DAT_00015328,0x126,*(undefined4 *)(param_1 + 0x48),iVar7);
    FUN_000175dc(param_1);
    iVar7 = iVar7 + 1;
  } while( true );
}



/* ===== FUN_00015434 @ 00015434 size=100 ===== */

void FUN_00015434(undefined4 param_1,int param_2,uint param_3,int param_4)

{
  if (param_2 == 0) {
    param_3 = 0;
  }
  else {
    param_3 = param_3 & 1;
  }
  if (param_3 != 0) {
    FUN_00015fe8(param_4 + 0x3630);
  }
  RK_MPI_VI_ReleaseChnFrame
            (*(undefined4 *)(param_4 + 0x20),*(undefined4 *)(param_4 + 0x24),param_4 + 0x318);
  if (*(int *)*DAT_00015498 == 0) {
    FUN_00014acc(DAT_0001549c,param_1);
    return;
  }
  FUN_00014a80();
  return;
}



/* ===== FUN_000154a0 @ 000154a0 size=596 ===== */

undefined4 FUN_000154a0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  
  prctl(0xf,DAT_000156f4,param_3,param_4,param_1,param_2,param_3,param_4);
  RK_LOG(2,DAT_000156fc,DAT_000156f8,DAT_00015700,0xac);
  piVar3 = DAT_00015704;
  uVar2 = DAT_00015700;
  uVar1 = DAT_000156fc;
LAB_000154dc:
  while( true ) {
    while( true ) {
      if (*(int *)(*piVar3 + 0x14) != 0) {
        RK_LOG(2,DAT_000156fc,DAT_00015708,DAT_00015700,0xe5,*(undefined4 *)(param_1 + 0x24),param_3
               ,param_4);
        return 0;
      }
      iVar9 = param_1 + 0x318;
      iVar4 = RK_MPI_VI_GetChnFrame
                        (*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),iVar9,2000)
      ;
      if (iVar4 == 0) break;
      param_4 = *(undefined4 *)(param_1 + 0x24);
      param_3 = *(undefined4 *)(param_1 + 0x20);
      RK_LOG(2,uVar1,DAT_00015724,uVar2,0xe2,iVar4,param_3,param_4);
      param_2 = iVar4;
    }
    iVar8 = param_1 + 0x3630;
    iVar4 = FUN_00015f7c(iVar8);
    if (iVar4 == 0) break;
    RK_LOG(2,uVar1,DAT_0001570c,uVar2,0xb5,param_2,param_3,param_4);
    uVar5 = 0xb6;
    uVar6 = 0;
    uVar7 = 0;
    iVar4 = param_2;
LAB_0001557c:
    FUN_00015434(uVar5,uVar6,uVar7,param_1);
    param_2 = iVar4;
  }
  iVar4 = FUN_00015e1c(iVar8,iVar9);
  if (iVar4 != 0) {
    RK_LOG(2,uVar1,DAT_00015710,uVar2,0xbc,iVar4);
    uVar7 = 1;
    uVar6 = *(undefined4 *)(param_1 + 0x36a8);
    uVar5 = 0xbd;
    goto LAB_0001557c;
  }
  iVar4 = RK_MPI_VENC_SendFrame(*(undefined4 *)(param_1 + 0x1018),param_1 + 0x36a8,2000);
  if (iVar4 != 0) {
    param_3 = *(undefined4 *)(param_1 + 0x1018);
    RK_LOG(2,uVar1,DAT_00015714,uVar2,199,iVar4,param_3);
    uVar7 = 1;
    uVar6 = *(undefined4 *)(param_1 + 0x36a8);
    uVar5 = 200;
    goto LAB_0001557c;
  }
  iVar4 = FUN_00015fe8(iVar8);
  if (iVar4 == 0) goto LAB_00015678;
  RK_LOG(2,uVar1,DAT_00015718,uVar2,0xd0,iVar4);
  RK_MPI_VI_ReleaseChnFrame(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),iVar9);
  uVar6 = 0xd3;
  goto LAB_0001566c;
LAB_00015678:
  iVar4 = RK_MPI_VI_ReleaseChnFrame
                    (*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),iVar9);
  if (iVar4 != 0) {
    param_4 = *(undefined4 *)(param_1 + 0x24);
    param_3 = *(undefined4 *)(param_1 + 0x20);
    RK_LOG(2,uVar1,DAT_00015720,uVar2,0xdb,iVar4,param_3,param_4);
    uVar6 = 0xdc;
LAB_0001566c:
    FUN_00014acc(DAT_0001571c,uVar6);
    param_2 = iVar4;
  }
  goto LAB_000154dc;
}



/* ===== FUN_00015728 @ 00015728 size=764 ===== */

int FUN_00015728(int *param_1)

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
  if (iVar1 == DAT_00015a24) {
    iVar1 = RK_MPI_VI_SetDevAttr(param_1[7],param_1 + 0x10);
    if (iVar1 == 0) goto LAB_000157a0;
    uVar7 = 0x29;
    uVar5 = DAT_00015a28;
  }
  else {
    RK_LOG(2,DAT_00015a30,DAT_00015a34,DAT_00015a2c,0x2d);
LAB_000157a0:
    iVar1 = RK_MPI_VI_GetDevIsEnable(param_1[7]);
    if (iVar1 == 0) {
      RK_LOG(2,DAT_00015a30,DAT_00015a44,DAT_00015a2c,0x42);
LAB_0001585c:
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
            uVar5 = DAT_00015a4c;
LAB_000158dc:
            RK_LOG(2,DAT_00015a30,uVar5,DAT_00015a2c,uVar7,uVar6);
            return -1;
          }
          local_1c = 1;
          local_14 = param_1[4] * uVar4 * 3 >> 1;
          uStack_18 = uVar4;
          uVar6 = RK_MPI_VI_SetChnWrapBufAttr(param_1[8],param_1[9],&local_1c);
          if (uVar6 != 0) {
            uVar7 = 0x59;
            uVar5 = DAT_00015a50;
            goto LAB_000158dc;
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
            uVar5 = DAT_00015a5c;
            goto LAB_00015a1c;
          }
          uVar7 = 0x6d;
          uVar5 = DAT_00015a58;
          goto LAB_00015810;
        }
        RK_LOG(2,DAT_00015a30,DAT_00015a54,DAT_00015a2c,0x66,iVar1,param_1[8],param_1[9]);
      }
      else {
        uVar7 = 0x4a;
        uVar5 = DAT_00015a48;
LAB_00015810:
        RK_LOG(2,DAT_00015a30,uVar5,DAT_00015a2c,uVar7,iVar1);
      }
      iVar1 = RK_MPI_VI_DisableDev(param_1[7]);
      uVar7 = 0x7d;
      uVar5 = DAT_00015a40;
    }
    else {
      iVar1 = RK_MPI_VI_EnableDev(param_1[7]);
      if (iVar1 == 0) {
        param_1[0x17] = 1;
        param_1[0x18] = param_1[8];
        iVar1 = RK_MPI_VI_SetDevBindPipe(param_1[7],param_1 + 0x17);
        if (iVar1 == 0) goto LAB_0001585c;
        uVar7 = 0x3e;
        uVar5 = DAT_00015a3c;
        goto LAB_00015810;
      }
      uVar7 = 0x36;
      uVar5 = DAT_00015a38;
    }
  }
  uVar2 = 2;
  iVar3 = iVar1;
LAB_00015a1c:
  RK_LOG(uVar2,DAT_00015a30,uVar5,DAT_00015a2c,uVar7,iVar3);
  return iVar1;
}



/* ===== FUN_00015a60 @ 00015a60 size=236 ===== */

undefined4 FUN_00015a60(int param_1,undefined4 *param_2)

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
    RK_LOG(5,DAT_00015b50,DAT_00015b4c,DAT_00015b54,0x92,*(undefined4 *)(param_1 + 0x1c),
           *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),uVar2,
           *(undefined4 *)(param_1 + 0x380),*(undefined4 *)(param_1 + 900),
           *(undefined4 *)(param_1 + 0x368),*(undefined4 *)(param_1 + 0x374),
           *(undefined4 *)(param_1 + 0x378),*(undefined4 *)(param_1 + 0x36c),
           *(undefined4 *)(param_1 + 0x37c));
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
    RK_LOG(2,DAT_00015b50,DAT_00015b58,DAT_00015b54,0x94,*(undefined4 *)(param_1 + 0x1c),iVar1);
  }
  return uVar2;
}



/* ===== FUN_00015b5c @ 00015b5c size=68 ===== */

undefined4 FUN_00015b5c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = RK_MPI_VI_ReleaseChnFrame
                    (*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),param_1 + 0x318
                     ,param_4,param_1,param_2,param_3);
  if (iVar1 != 0) {
    RK_LOG(2,DAT_00015ba8,DAT_00015ba4,DAT_00015ba0,0xa0,iVar1);
  }
  return 0;
}



/* ===== FUN_00015bac @ 00015bac size=104 ===== */

uint FUN_00015bac(int param_1,undefined4 param_2,undefined4 param_3)

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
    RK_LOG(2,DAT_00015c1c,DAT_00015c18,DAT_00015c14,0xaf,uVar1);
  }
  return uVar1;
}



/* ===== FUN_00015c20 @ 00015c20 size=480 ===== */

int FUN_00015c20(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_5c;
  undefined4 uStack_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  int iStack_3c;
  int local_38;
  undefined4 uStack_34;
  int local_30;
  int iStack_2c;
  undefined4 local_28;
  int iStack_24;
  
  uVar3 = 0;
  iVar2 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  iVar4 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_5c = 0;
  local_40 = 0;
  local_50 = *(undefined4 *)(param_1 + 4);
  local_30 = 0;
  local_4c = *(undefined4 *)(param_1 + 8);
  local_28 = 0;
  local_48 = *(undefined4 *)(param_1 + 0x14);
  uStack_58 = 0;
  local_44 = *(undefined4 *)(param_1 + 0x18);
  iStack_54 = iVar2;
  iStack_3c = iVar2;
  local_38 = iVar4;
  iStack_2c = iVar2;
  iStack_24 = iVar2;
  iVar1 = RK_MPI_CAL_TDE_GetPicBufferSize(&local_50,&local_5c);
  RK_LOG(5,DAT_00015e04,DAT_00015e00,DAT_00015e08,0x2d,local_5c);
  if (iVar1 == 0) {
    local_38 = *(int *)(param_1 + 0x20);
    local_40 = local_5c;
    if (local_38 == 0) {
      local_38 = 1;
    }
    uVar5 = local_5c;
    iStack_3c = iVar1;
    uStack_34 = uVar3;
    local_30 = iVar2;
    iStack_2c = iVar4;
    local_28 = uVar3;
    iStack_24 = iVar2;
    RK_LOG(2,DAT_00015e04,DAT_00015e10,DAT_00015e08,0x3c,local_5c);
    *(undefined4 *)(param_1 + 0x1c) = local_5c;
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x18);
    iVar2 = RK_MPI_MB_CreatePool(&local_40);
    *(int *)(param_1 + 0x70) = iVar2;
    if (iVar2 == -1) {
      RK_LOG(2,DAT_00015e04,DAT_00015e14,DAT_00015e08,0x46,uVar5);
      return -1;
    }
    uVar3 = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x44) = uVar3;
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x18);
    uVar5 = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    *(undefined4 *)(param_1 + 0x48) = uVar5;
    *(undefined4 *)(param_1 + 0x54) = uVar5;
    *(undefined4 *)(param_1 + 0x68) = uVar3;
    *(undefined4 *)(param_1 + 0x6c) = uVar5;
    iVar1 = RK_TDE_Open();
    if (iVar1 == 0) {
      return 0;
    }
    uVar5 = 0x5e;
    uVar3 = DAT_00015e18;
  }
  else {
    uVar5 = 0x2f;
    uVar3 = DAT_00015e0c;
  }
  RK_LOG(2,DAT_00015e04,uVar3,DAT_00015e08,uVar5,iVar1);
  return iVar1;
}



/* ===== FUN_00015e1c @ 00015e1c size=324 ===== */

int FUN_00015e1c(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined4 uVar5;
  
  iVar1 = RK_TDE_BeginJob();
  bVar4 = iVar1 == DAT_00015f60;
  param_1[9] = iVar1;
  if (bVar4) {
    iVar1 = -1;
    RK_LOG(2,DAT_00015f68,DAT_00015f64,DAT_00015f6c,0x6a,*param_1);
  }
  else {
    param_1[10] = *param_2;
    param_1[0x13] = param_1[0x1e];
    param_1[0x2b] = param_2[0xd];
    uVar2 = param_2[0xf];
    param_1[0x2c] = param_2[0xe];
    param_1[0x2d] = uVar2;
    iVar1 = RK_TDE_QuickCopy(iVar1,param_1 + 10,param_1 + 0xf,param_1 + 0x13,param_1 + 0x18);
    if (iVar1 == 0) {
      iVar1 = RK_TDE_EndJob(param_1[9],0,1,0xffffffff);
      if (iVar1 == 0) {
        iVar1 = RK_TDE_WaitForDone(param_1[9]);
        if (iVar1 == 0) {
          return 0;
        }
        RK_LOG(2,DAT_00015f68,DAT_00015f78,DAT_00015f6c,0x84,iVar1,*param_1);
        return iVar1;
      }
      uVar3 = *param_1;
      uVar5 = 0x7d;
      uVar2 = DAT_00015f74;
    }
    else {
      uVar3 = *param_1;
      uVar5 = 0x77;
      uVar2 = DAT_00015f70;
    }
    RK_LOG(2,DAT_00015f68,uVar2,DAT_00015f6c,uVar5,iVar1,uVar3);
    RK_TDE_CancelJob(param_1[9]);
  }
  return iVar1;
}



/* ===== FUN_00015f7c @ 00015f7c size=96 ===== */

undefined4 FUN_00015f7c(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = RK_MPI_MB_GetMB(param_1[0x1c],param_2,param_1[7],0,1,param_2);
  param_1[0x1e] = iVar1;
  if (iVar1 == 0) {
    RK_LOG(2,DAT_00015fe0,DAT_00015fdc,DAT_00015fe4,0x91,*param_1);
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== FUN_00015fe8 @ 00015fe8 size=80 ===== */

int FUN_00015fe8(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = RK_MPI_MB_ReleaseMB(param_1[0x1e]);
  if (iVar1 != 0) {
    RK_LOG(2,DAT_0001603c,DAT_00016038,DAT_00016040,0x9c,*param_1,iVar1);
  }
  return iVar1;
}



/* ===== FUN_00016044 @ 00016044 size=88 ===== */

int FUN_00016044(int param_1)

{
  int iVar1;
  
  iVar1 = RK_MPI_MB_DestroyPool(*(undefined4 *)(param_1 + 0x70));
  if (iVar1 == 0) {
    RK_TDE_Close();
  }
  else {
    RK_LOG(2,DAT_000160a0,DAT_0001609c,DAT_000160a4,0xaa,iVar1,*(undefined4 *)(param_1 + 0x70));
  }
  return iVar1;
}



/* ===== FUN_000160a8 @ 000160a8 size=556 ===== */

int FUN_000160a8(undefined4 *param_1)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  
  snprintf((char *)(param_1 + 0xdc9),0x80,(char *)*param_1);
  param_1[0xda8] = 0;
  param_1[0xdeb] = 4;
  param_1[0x1002] = param_1[0xb];
  *(short *)(param_1 + 0xded) = (short)param_1[1];
  *(short *)((int)param_1 + 0x37b6) = (short)param_1[2];
  param_1[0xdee] = param_1[10];
  param_1[0xdef] = param_1[9];
  iVar5 = ROCKIVA_Init(param_1 + 8,0,param_1 + 0xda8);
  uVar1 = DAT_000162e0;
  if (iVar5 == 0) {
    *(undefined1 *)(param_1 + 0x99c) = 1;
    *(undefined1 *)(param_1 + 0x9d8) = 0x5a;
    uVar9 = param_1[1];
    uVar8 = param_1[2];
    param_1[0x9d7] = 1000;
    *(short *)(param_1 + 0x9c2) = (short)(uint)((ulonglong)uVar1 * (ulonglong)uVar9 >> 0x25);
    *(short *)((int)param_1 + 0x270a) = (short)(uint)((ulonglong)uVar1 * (ulonglong)uVar8 >> 0x25);
    param_1[0x9bf] = 5;
    param_1[0x9d6] = 0x52;
    iVar5 = param_1[3];
    param_1[0x99e] = 4;
    param_1[0x99d] = 0;
    uVar2 = FUN_00027868(iVar5 * 10000,uVar9);
    *(undefined2 *)(param_1 + 0x99f) = uVar2;
    iVar7 = param_1[4];
    uVar3 = FUN_00027868(iVar7 * 10000,uVar8);
    *(undefined2 *)((int)param_1 + 0x267e) = uVar3;
    uVar4 = FUN_00027868((iVar5 + param_1[5]) * 10000,uVar9);
    *(undefined2 *)(param_1 + 0x9a0) = uVar4;
    *(undefined2 *)((int)param_1 + 0x2682) = uVar3;
    *(undefined2 *)(param_1 + 0x9a1) = uVar4;
    uVar3 = FUN_00027868((iVar7 + param_1[6]) * 10000,uVar8);
    *(undefined2 *)((int)param_1 + 0x2686) = uVar3;
    *(undefined2 *)(param_1 + 0x9a2) = uVar2;
    *(undefined2 *)((int)param_1 + 0x268a) = uVar3;
    *(undefined1 *)((int)param_1 + 0x35b1) = 0;
    iVar5 = ROCKIVA_BA_Init(param_1[8],param_1 + 0xc,param_1[0x1008]);
    if (iVar5 == 0) {
      iVar5 = ROCKIVA_SetFrameReleaseCallback(param_1[8],param_1[0x1009]);
      if (iVar5 == 0) {
        return 0;
      }
      uVar10 = 99;
      uVar6 = DAT_000162e8;
    }
    else {
      uVar10 = 0x5d;
      uVar6 = DAT_000162e4;
    }
  }
  else {
    uVar10 = 0x30;
    uVar6 = DAT_000162d4;
  }
  RK_LOG(2,DAT_000162dc,uVar6,DAT_000162d8,uVar10,iVar5);
  return iVar5;
}



/* ===== FUN_000162ec @ 000162ec size=108 ===== */

int FUN_000162ec(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = ROCKIVA_BA_Release(*(undefined4 *)(param_1 + 0x20));
  if (iVar1 == 0) {
    iVar1 = ROCKIVA_Release(*(undefined4 *)(param_1 + 0x20));
    if (iVar1 == 0) {
      return 0;
    }
    uVar3 = 0x74;
    uVar2 = DAT_00016364;
  }
  else {
    uVar3 = 0x6e;
    uVar2 = DAT_00016358;
  }
  RK_LOG(2,DAT_00016360,uVar2,DAT_0001635c,uVar3,iVar1,param_3);
  return iVar1;
}



/* ===== FUN_00016368 @ 00016368 size=68 ===== */

int FUN_00016368(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = RK_MPI_IVS_CreateChn(*param_1,param_1 + 1,param_3,param_4,param_1,param_2);
  if (iVar1 != 0) {
    RK_LOG(2,DAT_000163b4,DAT_000163b0,DAT_000163ac,0x24,iVar1);
  }
  return iVar1;
}



/* ===== FUN_000163b8 @ 000163b8 size=60 ===== */

int FUN_000163b8(void)

{
  int iVar1;
  
  iVar1 = RK_MPI_IVS_DestroyChn();
  if (iVar1 != 0) {
    RK_LOG(2,DAT_000163fc,DAT_000163f8,DAT_000163f4,0x2e,iVar1);
  }
  return iVar1;
}



/* ===== FUN_000165bc @ 000165bc size=60 ===== */

int FUN_000165bc(void)

{
  int iVar1;
  
  iVar1 = RK_MPI_SYS_Bind();
  if (iVar1 != 0) {
    RK_LOG(2,DAT_00016600,DAT_000165fc,DAT_000165f8,0x4d,iVar1);
  }
  return iVar1;
}



/* ===== FUN_00016604 @ 00016604 size=60 ===== */

int FUN_00016604(void)

{
  int iVar1;
  
  iVar1 = RK_MPI_SYS_UnBind();
  if (iVar1 != 0) {
    RK_LOG(2,DAT_00016648,DAT_00016644,DAT_00016640,0x59,iVar1);
  }
  return iVar1;
}



/* ===== FUN_0001664c @ 0001664c size=312 ===== */

undefined4 FUN_0001664c(char *param_1,undefined4 *param_2,undefined4 *param_3)

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
    RK_LOG(2,DAT_0001678c,DAT_00016784,DAT_00016788,0x69);
  }
  else {
    __stream = fopen64(param_1,DAT_00016790);
    if (__stream == (FILE *)0x0) {
      RK_LOG(2,DAT_0001678c,DAT_00016794,DAT_00016788,0x6f,param_1);
    }
    else {
      fread(&local_46,1,2,__stream);
      if (local_46 == 0x4d42) {
        fseek(__stream,0xc,1);
        fread(auStack_44,1,0x2c,__stream);
        uVar2 = DAT_0001679c;
        uVar1 = DAT_0001678c;
        *param_2 = local_40;
        *param_3 = local_3c;
        RK_LOG(2,uVar1,uVar2,DAT_00016788,0x7e,*param_2,local_3c);
        fclose(__stream);
        return 0;
      }
      RK_LOG(2,DAT_0001678c,DAT_00016798,DAT_00016788,0x75);
      fclose(__stream);
    }
  }
  return 0xffffffff;
}



/* ===== FUN_000167a0 @ 000167a0 size=72 ===== */

undefined4 FUN_000167a0(undefined4 param_1,undefined4 param_2)

{
  char acStack_110 [260];
  
  system(DAT_000167e8);
  sprintf(acStack_110,DAT_000167ec,param_1,param_2);
  system(acStack_110);
  system(DAT_000167f0);
  return 0;
}



/* ===== FUN_000167f4 @ 000167f4 size=288 ===== */

undefined4 FUN_000167f4(char *param_1,char *param_2,size_t param_3,undefined4 *param_4)

{
  FILE *__stream;
  FILE *__stream_00;
  size_t sVar1;
  uint unaff_r4;
  
  __stream = fopen64(param_1,DAT_00016914);
  __stream_00 = fopen64(param_2,DAT_00016914);
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
    RK_LOG(2,DAT_00016920,DAT_00016924,DAT_00016918,0xa0,param_1,param_2);
  }
  else {
    RK_LOG(2,DAT_00016920,DAT_0001691c,DAT_00016918,0x9a,param_1,param_2,__stream,__stream_00);
    if (__stream == (FILE *)0x0) goto LAB_00016880;
  }
  fclose(__stream);
LAB_00016880:
  if (__stream_00 != (FILE *)0x0) {
    fclose(__stream_00);
  }
  return 0xffffffff;
}



/* ===== FUN_00016928 @ 00016928 size=1276 ===== */

undefined4 FUN_00016928(undefined4 *param_1)

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
LAB_00016ba4:
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
      goto LAB_00016ba4;
    }
    if (iVar10 != 0) {
      uVar5 = 0x91;
      uVar6 = DAT_00016e88;
      goto LAB_00016b44;
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
    iVar10 = FUN_0001952c(*param_1,auStack_60,auStack_44);
    if (iVar10 < 0) {
      RK_LOG(2,DAT_00016e5c,DAT_00016e54,DAT_00016e58,0x26);
    }
    switch(param_1[1]) {
    case 0x1000a:
      local_54[0] = 4;
      break;
    default:
      goto switchD_000169ec_caseD_1000b;
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
LAB_00016b18:
        RK_LOG(2,DAT_00016e5c,DAT_00016e68,DAT_00016e58,uVar6);
switchD_000169ec_caseD_1000b:
        uVar5 = 0x75;
        iVar10 = -1;
        uVar6 = DAT_00016e6c;
        goto LAB_00016b44;
      }
      FUN_00017ec8(pvVar1,iVar12,iVar10,iVar12,iVar10,param_1[1],0);
      param_1[5] = param_1[0x11];
      uVar7 = param_1[0x12];
    }
    else {
      pvVar1 = malloc(local_3c * local_40 * 4);
      param_1[8] = pvVar1;
      if (pvVar1 == (void *)0x0) {
        uVar6 = 0x51;
        goto LAB_00016b18;
      }
      FUN_00019a64(*param_1,local_54,pvVar1);
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
    uVar6 = DAT_00016e60;
    goto LAB_00016ac8;
  }
  puVar11 = param_1 + 0xc;
  puVar13 = param_1 + 0x11c;
  iVar10 = RK_MPI_RGN_AttachToChn(param_1[0x15],puVar11,puVar13);
  if (iVar10 != 0) {
    uVar5 = param_1[0x15];
    uVar15 = 0x9d;
    uVar6 = DAT_00016e70;
    goto LAB_00016ac8;
  }
  if (param_1[0x16] == 0) {
    iVar10 = RK_MPI_RGN_SetBitMap(param_1[0x15],param_1 + 4);
    if (iVar10 != 0) {
      RK_LOG(2,DAT_00016e5c,DAT_00016e74,DAT_00016e64,0xa6,iVar10);
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
    uVar6 = DAT_00016e78;
    goto LAB_00016ac8;
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
    uVar6 = DAT_00016e5c;
    uVar15 = DAT_00016e84;
    uVar5 = DAT_00016e64;
LAB_00016d5c:
    RK_LOG(2,uVar6,uVar15,uVar5,uVar16,uVar9,uVar8,uVar4,uVar3,uVar2,uVar14);
  }
  else {
    if (iVar10 != 3) {
      if (iVar10 != 0) {
        uVar5 = 0xee;
        uVar6 = DAT_00016e88;
LAB_00016b44:
        RK_LOG(2,DAT_00016e5c,uVar6,DAT_00016e64,uVar5,iVar10);
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
      uVar15 = DAT_00016e7c;
      uVar5 = DAT_00016e64;
      uVar6 = DAT_00016e5c;
      uVar16 = 0xd0;
      param_1[0x120] = uVar2;
      param_1[0x122] = uVar14;
      goto LAB_00016d5c;
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
  uVar6 = DAT_00016e80;
LAB_00016ac8:
  RK_LOG(2,DAT_00016e5c,uVar6,DAT_00016e64,uVar15,uVar5,iVar10);
  return 0xffffffff;
}



/* ===== FUN_00016e8c @ 00016e8c size=128 ===== */

undefined4 FUN_00016e8c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
    uVar2 = DAT_00016f18;
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x54);
    uVar4 = 0x102;
    uVar2 = DAT_00016f0c;
  }
  RK_LOG(2,DAT_00016f14,uVar2,DAT_00016f10,uVar4,uVar3,iVar1);
  return 0xffffffff;
}



/* ===== FUN_00016f1c @ 00016f1c size=1268 ===== */

int FUN_00016f1c(int *param_1)

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
    RK_LOG(2,DAT_00017410,DAT_00017420,DAT_00017418,0x54);
    param_1[0x27] = 5;
    param_1[0x13] = 0xf;
    param_1[0x20] = 0;
    *(undefined1 *)(param_1 + 0x21) = 0;
    param_1[0x26] = 0;
    goto LAB_00016fdc;
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
    goto LAB_00016fdc;
  }
  if (iVar3 == 6) {
    param_1[0x13] = 0xc;
    if (iVar5 != 8) {
      bVar7 = iVar5 == 9;
      goto LAB_00016f88;
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
      goto LAB_00016fdc;
    }
    bVar7 = iVar5 == 2;
LAB_00016f88:
    if (!bVar7) goto LAB_00016fdc;
  }
  param_1[0x27] = iVar5;
  param_1[0x2c] = 1;
  param_1[0x28] = param_1[8];
  param_1[0x2d] = param_1[9];
  param_1[0x2a] = 1;
  param_1[0x2b] = param_1[7];
  param_1[0x29] = param_1[7];
LAB_00016fdc:
  uVar4 = DAT_00017410;
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
  uVar8 = DAT_00017414;
  if (iVar5 == 0) {
    iVar5 = 3;
  }
  param_1[0x1f] = iVar5;
  RK_LOG(2,uVar4,uVar8,DAT_00017418,0x81,param_1[0x12],iVar5);
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
        printf(DAT_00017424);
      }
    }
    if (param_1[2] != 0) {
      local_110 = param_1[4];
      local_10c = 0;
      local_114 = 1;
      local_118 = 1;
      iVar3 = RK_MPI_VENC_SetChnBufWrapAttr(param_1[0x12],&local_114);
      if (iVar3 != 0) {
        RK_LOG(2,DAT_00017410,DAT_00017428,DAT_00017418,0xa1,iVar3,iVar5);
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
                RK_LOG(2,DAT_00017410,DAT_00017438,DAT_00017418,0xdc,iVar3);
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
          uVar4 = DAT_00017434;
          iVar9 = param_1[0x12];
        }
        else {
          uVar8 = 0xca;
          uVar4 = DAT_00017430;
          iVar9 = iVar3;
        }
      }
      else {
        uVar8 = 0xc1;
        uVar4 = DAT_00017430;
        iVar9 = iVar3;
      }
    }
    else {
      uVar8 = 0xb9;
      uVar4 = DAT_0001742c;
      iVar9 = iVar3;
    }
  }
  else {
    uVar8 = 0x8a;
    uVar4 = DAT_0001741c;
    iVar9 = iVar3;
  }
  RK_LOG(2,DAT_00017410,uVar4,DAT_00017418,uVar8,iVar9,iVar5);
  return iVar3;
}



/* ===== FUN_0001743c @ 0001743c size=264 ===== */

undefined4
FUN_0001743c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
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
  
  uVar2 = DAT_00017548;
  uVar1 = DAT_00017544;
  while( true ) {
    uVar6 = 1;
    iVar4 = RK_MPI_MB_GetMB(*(undefined4 *)(param_1 + 0x278));
    if (iVar4 != 0) break;
    RK_LOG(2,uVar2,DAT_0001754c,uVar1,0x105,0);
    usleep(2000);
  }
  RK_MPI_MB_Handle2VirAddr();
  uVar3 = DAT_00017550;
  RK_MPI_SYS_MmzFlushCache(iVar4,0);
  uVar2 = DAT_00017548;
  uVar1 = DAT_00017544;
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



/* ===== FUN_00017554 @ 00017554 size=124 ===== */

undefined4 FUN_00017554(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar2 = DAT_000175d8;
  uVar1 = DAT_000175d4;
  uVar4 = DAT_000175d0;
  while (iVar3 = RK_MPI_VENC_GetStream(*(undefined4 *)(param_1 + 0x48),param_1 + 0xe0,2000),
        iVar3 != 0) {
    RK_LOG(2,uVar2,uVar1,uVar4,0x12f,*(undefined4 *)(param_1 + 0x48),iVar3);
  }
  uVar4 = RK_MPI_MB_Handle2VirAddr(**(undefined4 **)(param_1 + 0xe0));
  *param_2 = uVar4;
  return 0;
}



/* ===== FUN_000175dc @ 000175dc size=68 ===== */

int FUN_000175dc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = RK_MPI_VENC_ReleaseStream
                    (*(undefined4 *)(param_1 + 0x48),param_1 + 0xe0,param_3,param_4,param_1,param_2)
  ;
  if (iVar1 != 0) {
    RK_LOG(2,DAT_00017628,DAT_00017624,DAT_00017620,0x13a,iVar1);
  }
  return iVar1;
}



/* ===== FUN_0001762c @ 0001762c size=136 ===== */

int FUN_0001762c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = RK_MPI_VENC_StopRecvFrame(*(undefined4 *)(param_1 + 0x48));
  if (iVar1 == 0) {
    RK_LOG(2,DAT_000176b8,DAT_000176b4,DAT_000176bc,0x147,*(undefined4 *)(param_1 + 0x48),param_3);
    iVar2 = RK_MPI_VENC_DestroyChn(*(undefined4 *)(param_1 + 0x48));
    if (iVar2 != 0) {
      RK_LOG(2,DAT_000176b8,DAT_000176c0,DAT_000176bc,0x14a,iVar2,param_3);
    }
    if (*(void **)(param_1 + 0xe0) != (void *)0x0) {
      free(*(void **)(param_1 + 0xe0));
    }
  }
  return iVar1;
}



/* ===== FUN_000176c4 @ 000176c4 size=192 ===== */

void FUN_000176c4(int *param_1,int *param_2,int *param_3,int param_4,int param_5,byte param_6)

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



/* ===== FUN_00017db0 @ 00017db0 size=128 ===== */

uint FUN_00017db0(uint param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  
  if (param_1 != 0) {
    return param_1;
  }
  bVar1 = param_4 * param_2 - param_3 != 0 && param_3 <= param_4 * param_2;
  if (bVar1) {
    RK_LOG(3,DAT_00017e38,DAT_00017e30,DAT_00017e34,0x1b7,param_3,param_2,param_4);
    RK_LOG(3,DAT_00017e38,DAT_00017e3c,DAT_00017e34,0x1b9,param_3,param_4,param_3 * param_4);
  }
  return (uint)bVar1;
}



/* ===== FUN_00017e40 @ 00017e40 size=120 ===== */

int FUN_00017e40(int param_1,uint param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  
  if ((param_1 == 0) && (uVar1 = (param_2 + param_3 * 8) - 1 & param_3 * -8, param_2 != uVar1)) {
    RK_LOG(3,DAT_00017ebc,DAT_00017eb8,DAT_00017ec0,0x1c6,param_4,param_3,param_4);
    RK_LOG(3,DAT_00017ebc,DAT_00017ec4,DAT_00017ec0,0x1c8,uVar1);
    param_1 = 1;
  }
  return param_1;
}



/* ===== FUN_00017ec8 @ 00017ec8 size=2632 ===== */

undefined4
FUN_00017ec8(char *param_1,uint param_2,uint param_3,uint param_4,int param_5,uint param_6,
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
  
  puVar3 = DAT_00018924;
  uVar4 = param_5 * param_4;
  if (DAT_00018910 < param_6) {
    if (DAT_00018920 < param_6) {
      if (DAT_00018934 <= param_6) {
        if (param_6 <= DAT_00018934 + 3) goto LAB_00018088;
        if (param_6 <= DAT_00018934 + 6) goto LAB_00018120;
      }
      goto LAB_00017f2c;
    }
    if (param_6 < DAT_00018920 - 3) {
      if (param_6 <= DAT_00018920 - 6) {
        uVar4 = 0;
        pcVar9 = *(code **)(DAT_00018928 + (param_6 - 0x10000) * 4);
        iVar5 = FUN_00017db0(*DAT_00018924,param_2,param_4,3);
        if (iVar5 != 0) {
          param_4 = param_4 * 3;
          *puVar3 = 1;
        }
        puVar3 = DAT_0001892c;
        iVar5 = FUN_00017e40(*DAT_0001892c,param_4,3,DAT_0001893c);
        if (iVar5 != 0) {
          param_4 = param_4 + 0x17 & 0xffffffe8;
          *puVar3 = 1;
        }
        for (; uVar4 != param_3; uVar4 = uVar4 + 1) {
          for (uVar6 = 0; uVar6 != param_2; uVar6 = uVar6 + 1) {
            FUN_000176c4(&local_34,&local_30,auStack_2c,uVar6,uVar4,param_7);
            (*pcVar9)(param_1 + uVar6 * 3,local_34,local_30,auStack_2c[0],1);
          }
          param_1 = param_1 + param_4;
        }
        return 0;
      }
LAB_00018088:
      uVar4 = 0;
      pcVar9 = *(code **)(DAT_00018928 + (param_6 - 0x10000) * 4);
      iVar5 = FUN_00017db0(*DAT_00018924,param_2,param_4,4);
      if (iVar5 != 0) {
        param_4 = param_4 << 2;
        *puVar3 = 1;
      }
      puVar3 = DAT_0001892c;
      iVar5 = FUN_00017e40(*DAT_0001892c,param_4,4,DAT_00018930);
      if (iVar5 != 0) {
        param_4 = param_4 + 0x1f & 0xffffffe0;
        *puVar3 = 1;
      }
      for (; uVar4 != param_3; uVar4 = uVar4 + 1) {
        for (uVar6 = 0; uVar6 != param_2; uVar6 = uVar6 + 1) {
          FUN_000176c4(&local_34,&local_30,auStack_2c,uVar6,uVar4,param_7);
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
LAB_00017f2c:
    RK_LOG(2,DAT_00018918,DAT_00018914,DAT_0001891c,0x2df,param_6);
    return 0xffffffff;
  }
LAB_00018120:
  uVar4 = 0;
  pcVar9 = *(code **)(DAT_00018928 + (param_6 - 0x10000) * 4);
  iVar5 = FUN_00017db0(*DAT_00018924,param_2,param_4,2);
  if (iVar5 != 0) {
    param_4 = param_4 << 1;
    *puVar3 = 1;
  }
  puVar3 = DAT_0001892c;
  iVar5 = FUN_00017e40(*DAT_0001892c,param_4,2,DAT_00018938);
  if (iVar5 != 0) {
    param_4 = param_4 + 0xf & 0xfffffff0;
    *puVar3 = 1;
  }
  for (; uVar4 != param_3; uVar4 = uVar4 + 1) {
    for (uVar6 = 0; uVar6 != param_2; uVar6 = uVar6 + 1) {
      FUN_000176c4(&local_34,&local_30,auStack_2c,uVar6,uVar4,param_7);
      (*pcVar9)(param_1 + uVar6 * 2,local_34,local_30,auStack_2c[0],1);
    }
    param_1 = param_1 + param_4;
  }
  return 0;
}



/* ===== FUN_000189f4 @ 000189f4 size=236 ===== */

undefined4 FUN_000189f4(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  char *__format;
  undefined4 uVar2;
  char acStack_158 [16];
  undefined1 auStack_148 [304];
  
  iVar1 = DAT_00018aec;
  if (param_1 < 8) {
    setlinebuf((FILE *)*DAT_00018ae8);
    __format = DAT_00018af8;
    if (param_4 == 0) {
      puts(DAT_00018af0);
      uVar2 = 0;
    }
    else {
      *(undefined4 *)(DAT_00018af4 + param_1 * 4) = param_2;
      snprintf(acStack_158,0x10,__format,param_2);
      setenv(DAT_00018afc,acStack_158,1);
      rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId(param_1,auStack_148);
      printf(DAT_00018b00,param_1,auStack_148,param_4);
      rk_aiq_uapi2_sysctl_preInit_devBufCnt(auStack_148,DAT_00018b04,2);
      uVar2 = rk_aiq_uapi2_sysctl_init(auStack_148,param_4,DAT_00018b0c,DAT_00018b08);
      if (param_3 != 0) {
        rk_aiq_uapi2_sysctl_setMulCamConc(uVar2,1);
      }
    }
    *(undefined4 *)(iVar1 + param_1 * 4) = uVar2;
    uVar2 = 0;
  }
  else {
    printf(DAT_00018ae4,DAT_00018ae0);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== FUN_00018b10 @ 00018b10 size=488 ===== */

int FUN_00018b10(int param_1,ushort *param_2,int param_3)

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
  iVar3 = DAT_00018cfc;
  __format = DAT_00018cf8;
  __s = param_2;
  if ((int)param_2 - 1U < 2) {
    iVar4 = rk_aiq_uapi2_camgroup_getCamInfos
                      (*(undefined4 *)(DAT_00018cfc + param_1 * 4),&local_108);
    if (iVar4 == 0) {
      piVar7 = &local_108;
      iVar4 = 0;
      for (iVar8 = 0; iVar8 < local_108; iVar8 = iVar8 + 1) {
        iVar6 = rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm
                          (*(undefined4 *)(iVar3 + param_1 * 4),piVar7[1]);
        if (iVar6 == 0) {
          puts(DAT_00018d18);
          goto LAB_00018ce8;
        }
        printf(DAT_00018d00,piVar7[1],piVar7[9]);
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
              puts(DAT_00018d04);
              local_84 = -1;
            }
            else {
              uVar1 = __s[2];
              uVar2 = __s[3];
              printf(DAT_00018d0c,(uint)*__s,(uint)__s[1],(uint)uVar1,(uint)uVar2,(uint)__s[4],
                     (uint)__s[5]);
              local_84 = ((uint)uVar2 * (uint)uVar1 + 6) * 2;
            }
          }
          else {
            pcVar5 = strrchr((char *)__s,0x2f);
            __format = DAT_00018d10;
            if (pcVar5 == (char *)0x0) goto LAB_00018c68;
            local_bc = 1;
            local_8c = 1;
            local_90 = (ushort *)0x1;
            memcpy(&local_88,__s,(size_t)(pcVar5 + (1 - (int)__s)));
            strcpy(acStack_48,pcVar5 + 1);
            printf(DAT_00018d14,&local_88,acStack_48);
          }
          iVar6 = rk_aiq_user_api2_aldch_v21_SetAttrib(iVar6,auStack_c4);
          iVar4 = 0;
          if (iVar6 != 0) {
            printf(DAT_00018d08,iVar6);
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
LAB_00018c68:
    printf(__format,__s);
LAB_00018ce8:
    iVar4 = -1;
  }
  return iVar4;
}



/* ===== FUN_00018d1c @ 00018d1c size=352 ===== */

undefined4
FUN_00018d1c(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5,
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
  
  uVar1 = DAT_00018ea0;
  __format_00 = DAT_00018e9c;
  __format = DAT_00018e98;
  if (param_1 < 8) {
    for (iVar4 = 0; iVar3 = DAT_00018e8c, iVar4 < *(int *)(param_6 + 0x20); iVar4 = iVar4 + 1) {
      iVar3 = rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId(iVar4,acStack_558);
      __s = DAT_00018e84;
      if (iVar3 != 0) goto LAB_00018d74;
      printf(__format,param_1,iVar4,acStack_558,*(undefined4 *)(param_6 + 0x24));
      __dest = auStack_428 + iVar4 * 0x80;
      sVar2 = strlen(acStack_558);
      memcpy(__dest,acStack_558,sVar2 + 1);
      *(undefined1 **)(param_6 + iVar4 * 4) = __dest;
      printf(__format_00,iVar4,__dest);
      iVar3 = rk_aiq_uapi2_sysctl_preInit_devBufCnt(acStack_558,uVar1,2);
      __s = DAT_00018e88;
      if (iVar3 != 0) goto LAB_00018d74;
    }
    iVar4 = rk_aiq_uapi2_camgroup_create(param_6);
    *(int *)(iVar3 + param_1 * 4) = iVar4;
    __s = DAT_00018e90;
    if (iVar4 != 0) {
      if (param_4 != 0) {
        FUN_00018b10(param_1,param_4 & 0xff,param_5);
      }
      iVar4 = rk_aiq_uapi2_camgroup_prepare(*(undefined4 *)(iVar3 + param_1 * 4),param_2);
      iVar3 = rk_aiq_uapi2_camgroup_start(*(undefined4 *)(iVar3 + param_1 * 4));
      __s = DAT_00018e94;
      if (iVar4 == 0 && iVar3 == 0) {
        puts(DAT_00018ea4);
        return 0;
      }
    }
LAB_00018d74:
    puts(__s);
  }
  else {
    printf(DAT_00018e80,DAT_00018e7c,8);
  }
  return 0xffffffff;
}



/* ===== FUN_00018ea8 @ 00018ea8 size=112 ===== */

undefined4 FUN_00018ea8(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_00018f18;
  if ((param_1 < 8) && (*(int *)(DAT_00018f18 + param_1 * 4) != 0)) {
    puts(DAT_00018f24);
    rk_aiq_uapi2_sysctl_stop(*(undefined4 *)(iVar1 + param_1 * 4),0);
    puts(DAT_00018f28);
    rk_aiq_uapi2_sysctl_deinit(*(undefined4 *)(iVar1 + param_1 * 4));
    puts(DAT_00018f2c);
    *(undefined4 *)(iVar1 + param_1 * 4) = 0;
    return 0;
  }
  printf(DAT_00018f20,DAT_00018f1c,param_1);
  return 0xffffffff;
}



/* ===== FUN_00018fb0 @ 00018fb0 size=152 ===== */

undefined4 FUN_00018fb0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_00019048;
  if ((param_1 < 8) && (iVar1 = *(int *)(DAT_00019048 + param_1 * 4), iVar1 != 0)) {
    iVar1 = rk_aiq_uapi2_sysctl_prepare(iVar1,0,0,*(undefined4 *)(DAT_00019054 + param_1 * 4));
    if (iVar1 == 0) {
      puts(DAT_0001905c);
      iVar2 = rk_aiq_uapi2_sysctl_start(*(undefined4 *)(iVar2 + param_1 * 4));
      if (iVar2 == 0) {
        puts(DAT_00019064);
        return 0;
      }
      puts(DAT_00019060);
    }
    else {
      puts(DAT_00019058);
      *(undefined4 *)(iVar2 + param_1 * 4) = 0;
    }
  }
  else {
    printf(DAT_00019050,DAT_0001904c);
  }
  return 0xffffffff;
}



/* ===== FUN_00019414 @ 00019414 size=136 ===== */

uint FUN_00019414(int param_1,int param_2,int param_3,byte param_4,char param_5,char param_6,
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



/* ===== FUN_0001949c @ 0001949c size=144 ===== */

uint FUN_0001949c(int param_1,int param_2,int param_3,char param_4,char param_5,char param_6,
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



/* ===== FUN_0001952c @ 0001952c size=184 ===== */

undefined4 FUN_0001952c(char *param_1,void *param_2,void *param_3)

{
  FILE *__stream;
  undefined4 uStack_1c;
  void *pvStack_18;
  
  uStack_1c = param_2;
  pvStack_18 = param_3;
  if (param_1 == (char *)0x0) {
    puts(DAT_000195e4);
  }
  else {
    __stream = fopen64(param_1,DAT_000195e8);
    if (__stream == (FILE *)0x0) {
      printf(DAT_000195ec,param_1);
    }
    else {
      fread((void *)((int)&uStack_1c + 2),1,2,__stream);
      if (uStack_1c._2_2_ == 0x4d42) {
        fread(param_2,1,0xc,__stream);
        fread(param_3,1,0x2c,__stream);
        fclose(__stream);
        return 0;
      }
      puts(DAT_000195f0);
      fclose(__stream);
    }
  }
  return 0xffffffff;
}



/* ===== FUN_000195f4 @ 000195f4 size=872 ===== */

undefined4 FUN_000195f4(char *param_1,uint *param_2,uint param_3)

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
  
  __s = DAT_00019984;
  if (param_1 != (char *)0x0) {
    iVar2 = FUN_0001952c(param_1,auStack_60,auStack_54);
    if (iVar2 < 0) {
      return 0xffffffff;
    }
    __n = (uint)(local_46 >> 3);
    __s = DAT_00019988;
    if (((0xf < local_46) && (__s = DAT_0001998c, local_44 == 0)) &&
       (__s = DAT_00019990, -1 < (int)local_4c)) {
      __stream = fopen64(param_1,DAT_00019994);
      if (__stream == (FILE *)0x0) {
        printf(DAT_00019998,param_1);
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
        puts(DAT_0001999c);
        fclose(__stream);
        return 0xffffffff;
      }
      uVar14 = param_2[3];
      fseek(__stream,local_58,0);
      sVar3 = fread(__ptr,1,__size,__stream);
      if (__size - sVar3 != 0) {
        printf(DAT_000199a0,uVar11,uVar12,0xb6);
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
      iVar2 = DAT_000199a4 + param_3 * 0x10;
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
            goto LAB_00019810;
          }
          switch(param_3) {
          case 0:
          case 2:
          case 3:
          case 4:
            iVar7 = param_2[2] * uVar13 + uVar5 * 2;
            iVar16 = uVar5 * 3 + iVar9;
            uVar1 = FUN_00019414(*(undefined1 *)((int)__ptr + iVar16 + 2),
                                 *(undefined1 *)((int)__ptr + iVar16 + 1),
                                 *(undefined1 *)((int)__ptr + iVar16),
                                 *(undefined4 *)(DAT_000199a4 + param_3 * 0x10),
                                 *(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8),
                                 *(undefined4 *)(iVar2 + 0xc));
            goto LAB_0001980c;
          default:
            printf(DAT_000199b0,DAT_000199ac,0xea);
            break;
          case 5:
            iVar7 = param_2[2] * uVar13 + uVar5 * 2;
            iVar16 = uVar5 * 3 + iVar9;
            uVar1 = FUN_0001949c(*(undefined1 *)((int)__ptr + iVar16 + 2),
                                 *(undefined1 *)((int)__ptr + iVar16 + 1),
                                 *(undefined1 *)((int)__ptr + iVar16),DAT_000199a8[-1],*DAT_000199a8
                                 ,DAT_000199a8[1],DAT_000199a8[2]);
LAB_0001980c:
            *(undefined2 *)(uVar14 + iVar7) = uVar1;
            break;
          case 6:
          case 8:
            uVar15 = param_2[2];
            iVar7 = uVar5 * 3 + iVar9;
            uVar4 = FUN_00019414(*(undefined1 *)((int)__ptr + iVar7 + 2),
                                 *(undefined1 *)((int)__ptr + iVar7 + 1),
                                 *(undefined1 *)((int)__ptr + iVar7),
                                 *(undefined4 *)(DAT_000199a4 + param_3 * 0x10),
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
LAB_00019810:
        }
        local_6c = local_6c + 1;
      } while( true );
    }
  }
  puts(__s);
  return 0xffffffff;
}



/* ===== FUN_000199b4 @ 000199b4 size=76 ===== */

char * FUN_000199b4(char *param_1)

{
  char *pcVar1;
  size_t sVar2;
  char *pcVar3;
  char *pcVar4;
  
  if (param_1 == (char *)0x0) {
    printf(DAT_00019a00);
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



/* ===== FUN_00019a04 @ 00019a04 size=84 ===== */

undefined4 FUN_00019a04(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = (char *)FUN_000199b4();
  iVar2 = strcmp(pcVar1,DAT_00019a58);
  pcVar1 = DAT_00019a60;
  if ((iVar2 == 0) &&
     (iVar2 = FUN_000195f4(param_1,param_2,param_3), pcVar1 = DAT_00019a5c, iVar2 == 0)) {
    return 0;
  }
  puts(pcVar1);
  return 0xffffffff;
}



/* ===== FUN_00019a64 @ 00019a64 size=84 ===== */

undefined4 FUN_00019a64(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

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
  iVar1 = FUN_00019a04(param_1,&local_18,*param_2);
  if (iVar1 < 0) {
    puts(DAT_00019ab8);
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



/* ===== FUN_00019ac0 @ 00019ac0 size=28 ===== */

int FUN_00019ac0(void)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  return *piVar1;
}



/* ===== FUN_00019adc @ 00019adc size=40 ===== */

char * FUN_00019adc(int param_1)

{
  char *pcVar1;
  
  pcVar1 = strerror(param_1);
  return pcVar1;
}



/* ===== FUN_00019b04 @ 00019b04 size=156 ===== */

void * FUN_00019b04(void)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,0x14);
  if (pvVar1 == (void *)0x0) {
    printf((char *)(DAT_00019ba8 + 0x19b50),DAT_00019ba4 + 0x19b48,0x9a,DAT_00019ba0 + 0x19b3c);
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



/* ===== FUN_00019bac @ 00019bac size=48 ===== */

void FUN_00019bac(void *param_1)

{
  if (param_1 != (void *)0x0) {
    free(param_1);
  }
  return;
}



/* ===== FUN_00019bdc @ 00019bdc size=204 ===== */

void * FUN_00019bdc(int param_1)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,0x168);
  if (pvVar1 == (void *)0x0) {
    printf((char *)(DAT_00019cb0 + 0x19c2c),DAT_00019cac + 0x19c24,0xad,DAT_00019ca8 + 0x19c18);
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



/* ===== FUN_00019cb4 @ 00019cb4 size=136 ===== */

void FUN_00019cb4(void *param_1)

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



/* ===== FUN_00019d3c @ 00019d3c size=180 ===== */

void * FUN_00019d3c(int param_1)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,0x434);
  if (pvVar1 == (void *)0x0) {
    printf((char *)(DAT_00019df8 + 0x19d8c),DAT_00019df4 + 0x19d84,0xc4,DAT_00019df0 + 0x19d78);
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



/* ===== FUN_00019dfc @ 00019dfc size=136 ===== */

void FUN_00019dfc(void *param_1)

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



/* ===== FUN_00019e84 @ 00019e84 size=128 ===== */

void FUN_00019e84(int param_1,int param_2)

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



/* ===== FUN_00019f04 @ 00019f04 size=144 ===== */

void FUN_00019f04(int param_1)

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



/* ===== FUN_00019f94 @ 00019f94 size=536 ===== */

int * FUN_00019f94(int param_1)

{
  undefined4 uVar1;
  int local_2c;
  sockaddr local_24;
  int local_14;
  int local_10;
  int *local_c;
  
  local_c = (int *)0x0;
  local_c = (int *)FUN_00019b04();
  if (local_c == (int *)0x0) {
    local_c = (int *)0x0;
  }
  else {
    local_10 = socket(2,1,0);
    if (local_10 == -1) {
      uVar1 = FUN_00019ac0();
      uVar1 = FUN_00019adc(uVar1);
      printf((char *)(DAT_0001a1b4 + 0x1a020),DAT_0001a1b0 + 0x1a018,0xfa,DAT_0001a1ac + 0x1a00c,
             uVar1);
      FUN_00019bac(local_c);
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
        uVar1 = FUN_00019ac0();
        uVar1 = FUN_00019adc(uVar1);
        printf((char *)(DAT_0001a1c0 + 0x1a0e4),DAT_0001a1bc + 0x1a0dc,0x108,DAT_0001a1b8 + 0x1a0d0,
               uVar1);
        close(local_10);
        FUN_00019bac(local_c);
        local_c = (int *)0x0;
      }
      else {
        local_14 = listen(local_10,0x80);
        if (local_14 == -1) {
          uVar1 = FUN_00019ac0();
          uVar1 = FUN_00019adc(uVar1);
          printf((char *)(DAT_0001a1cc + 0x1a150),DAT_0001a1c8 + 0x1a148,0x110,
                 DAT_0001a1c4 + 0x1a13c,uVar1);
          close(local_10);
          FUN_00019bac(local_c);
          local_c = (int *)0x0;
        }
        else {
          *local_c = local_10;
          printf((char *)(DAT_0001a1d8 + 0x1a19c),DAT_0001a1d4 + 0x1a194,0x118,
                 DAT_0001a1d0 + 0x1a188,local_2c);
        }
      }
    }
  }
  return local_c;
}



/* ===== FUN_0001a1dc @ 0001a1dc size=932 ===== */

undefined4 FUN_0001a1dc(int param_1)

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
    printf((char *)(DAT_0001a588 + 0x1a270),DAT_0001a584 + 0x1a268,0x15b,DAT_0001a580 + 0x1a25c,
           pcVar2);
  }
  else {
    local_c = local_c | 0x800;
    local_c = fcntl(param_1,4,local_c);
    if ((int)local_c < 0) {
      piVar1 = __errno_location();
      pcVar2 = strerror(*piVar1);
      printf((char *)(DAT_0001a594 + 0x1a2dc),DAT_0001a590 + 0x1a2d4,0x160,DAT_0001a58c + 0x1a2c8,
             pcVar2);
    }
  }
  local_c = setsockopt(param_1,1,7,&local_10,4);
  if (local_c == -1) {
    uVar3 = FUN_00019ac0();
    uVar3 = FUN_00019adc(uVar3);
    printf((char *)(DAT_0001a5a0 + 0x1a344),DAT_0001a59c + 0x1a33c,0x166,DAT_0001a598 + 0x1a330,
           uVar3);
  }
  local_c = setsockopt(param_1,1,9,&local_14,4);
  if (local_c == -1) {
    uVar3 = FUN_00019ac0();
    uVar3 = FUN_00019adc(uVar3);
    printf((char *)(DAT_0001a5ac + 0x1a3ac),DAT_0001a5a8 + 0x1a3a4,0x16b,DAT_0001a5a4 + 0x1a398,
           uVar3);
  }
  local_c = setsockopt(param_1,6,4,&local_18,4);
  if (local_c == -1) {
    uVar3 = FUN_00019ac0();
    uVar3 = FUN_00019adc(uVar3);
    printf((char *)(DAT_0001a5b8 + 0x1a414),DAT_0001a5b4 + 0x1a40c,0x170,DAT_0001a5b0 + 0x1a400,
           uVar3);
  }
  local_c = setsockopt(param_1,6,5,&local_1c,4);
  if (local_c == -1) {
    uVar3 = FUN_00019ac0();
    uVar3 = FUN_00019adc(uVar3);
    printf((char *)(DAT_0001a5c4 + 0x1a47c),DAT_0001a5c0 + 0x1a474,0x175,DAT_0001a5bc + 0x1a468,
           uVar3);
  }
  local_c = setsockopt(param_1,6,6,&local_20,4);
  if (local_c == -1) {
    uVar3 = FUN_00019ac0();
    uVar3 = FUN_00019adc(uVar3);
    printf((char *)(DAT_0001a5d0 + 0x1a4e4),DAT_0001a5cc + 0x1a4dc,0x17a,DAT_0001a5c8 + 0x1a4d0,
           uVar3);
  }
  memset(&local_28,0,8);
  local_28 = 1;
  local_24 = 0;
  local_c = setsockopt(param_1,1,0xd,&local_28,8);
  if (local_c == -1) {
    uVar3 = FUN_00019ac0();
    uVar3 = FUN_00019adc(uVar3);
    printf((char *)(DAT_0001a5dc + 0x1a570),DAT_0001a5d8 + 0x1a568,0x182,DAT_0001a5d4 + 0x1a55c,
           uVar3);
  }
  return 0;
}



/* ===== FUN_0001a5e0 @ 0001a5e0 size=304 ===== */

undefined4 * FUN_0001a5e0(int *param_1)

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
    uVar2 = FUN_00019ac0();
    uVar2 = FUN_00019adc(uVar2);
    printf((char *)(DAT_0001a718 + 0x1a660),DAT_0001a714 + 0x1a658,0x191,DAT_0001a710 + 0x1a64c,
           uVar2);
    local_14 = (undefined4 *)0x0;
  }
  else {
    FUN_0001a1dc(local_18);
    pcVar3 = inet_ntoa((in_addr)auStack_28._4_4_);
    uVar1 = ntohs(auStack_28._2_2_);
    printf((char *)(DAT_0001a724 + 0x1a6b4),DAT_0001a720 + 0x1a6ac,0x198,DAT_0001a71c + 0x1a6a0,
           pcVar3,(uint)uVar1);
    local_14 = (undefined4 *)FUN_00019d3c(param_1);
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



/* ===== FUN_0001a728 @ 0001a728 size=160 ===== */

void FUN_0001a728(int param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    uVar2 = *(undefined4 *)(param_1 + 4);
    pcVar1 = inet_ntoa((in_addr)*(in_addr_t *)(param_1 + 8));
    printf((char *)(DAT_0001a7d0 + 0x1a784),DAT_0001a7cc + 0x1a77c,0x1ab,DAT_0001a7c8 + 0x1a770,
           uVar2,pcVar1);
    FUN_00019f04(param_1);
    FUN_0001c1e0(param_1,0);
    FUN_0001c1e0(param_1,1);
    close(*(int *)(param_1 + 4));
    FUN_00019dfc(param_1);
  }
  return;
}



/* ===== FUN_0001a7d4 @ 0001a7d4 size=408 ===== */

bool FUN_0001a7d4(char *param_1,char *param_2)

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
    *(undefined2 *)(local_48 + sVar1) = *(undefined2 *)(DAT_0001a96c + 0x1a8d0);
  }
  sVar1 = strlen(local_88);
  if (*(char *)((int)&local_8c + sVar1 + 3) != '/') {
    sVar1 = strlen(local_88);
    *(undefined2 *)(local_88 + sVar1) = *(undefined2 *)(DAT_0001a970 + 0x1a924);
  }
  sVar1 = strlen(local_48);
  iVar2 = strncmp(local_48,local_88,sVar1);
  return iVar2 == 0;
}



/* ===== FUN_0001a974 @ 0001a974 size=416 ===== */

char * FUN_0001a974(int param_1,char *param_2)

{
  int iVar1;
  char *local_c;
  
  local_c = (char *)0x0;
  if (((param_1 == 0) || (param_2 == (char *)0x0)) || (*param_2 == '\0')) {
    printf((char *)(DAT_0001ab1c + 0x1a9e0),DAT_0001ab18 + 0x1a9d8,0x1cc,DAT_0001ab14 + 0x1a9cc);
  }
  else {
    for (local_c = *(char **)(param_1 + 4); local_c != (char *)0x0;
        local_c = *(char **)(local_c + 0x15c)) {
      iVar1 = FUN_0001a7d4(local_c,param_2);
      if ((iVar1 != 0) || (iVar1 = FUN_0001a7d4(param_2,local_c), iVar1 != 0)) {
        printf((char *)(DAT_0001ab28 + 0x1aa5c),DAT_0001ab24 + 0x1aa54,0x1d2,DAT_0001ab20 + 0x1aa48,
               local_c,param_2);
        goto LAB_0001aaf0;
      }
    }
    local_c = (char *)FUN_00019bdc(param_1);
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
      printf((char *)(DAT_0001ab34 + 0x1aae4),DAT_0001ab30 + 0x1aadc,0x1e0,DAT_0001ab2c + 0x1aad0,
             local_c);
      return local_c;
    }
  }
LAB_0001aaf0:
  if (local_c != (char *)0x0) {
    free(local_c);
  }
  return (char *)0x0;
}



/* ===== FUN_0001ab38 @ 0001ab38 size=40 ===== */

undefined4 FUN_0001ab38(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00019f94(param_1);
  return uVar1;
}



/* ===== FUN_0001ab60 @ 0001ab60 size=72 ===== */

undefined4 FUN_0001ab60(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001a974(param_1,param_2);
  FUN_0001aba8(uVar1,1,0,0);
  return uVar1;
}



/* ===== FUN_0001aba8 @ 0001aba8 size=596 ===== */

undefined4 FUN_0001aba8(int param_1,int param_2,int param_3,int param_4)

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
        iVar1 = FUN_00025af4(param_3,param_4,param_1 + 0x48);
        if (iVar1 < 1) {
          printf((char *)(DAT_0001ae10 + 0x1ad20),DAT_0001ae0c + 0x1ad18,0x220,
                 DAT_0001ae08 + 0x1ad0c);
        }
      }
      else if ((param_2 == 2) && (iVar1 = FUN_00025d58(param_3,param_4,param_1 + 0x48), iVar1 < 1))
      {
        printf((char *)(DAT_0001ae1c + 0x1ad68),DAT_0001ae18 + 0x1ad60,0x226,DAT_0001ae14 + 0x1ad54)
        ;
      }
    }
    if (*(int *)(param_1 + 0x138) == 0) {
      uVar2 = FUN_000251c4(0x5b0,0x4b1);
      *(undefined4 *)(param_1 + 0x138) = uVar2;
      if (*(int *)(param_1 + 0x138) == 0) {
        printf((char *)(DAT_0001ae28 + 0x1add8),DAT_0001ae24 + 0x1add0,0x230,DAT_0001ae20 + 0x1adc4)
        ;
        *(undefined4 *)(param_1 + 0x40) = 0;
        return 0xffffffff;
      }
    }
    uVar2 = 0;
  }
  else {
    printf((char *)(DAT_0001ae04 + 0x1ac3c),DAT_0001ae00 + 0x1ac34,0x211,DAT_0001adfc + 0x1ac28,
           param_2);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== FUN_0001ae2c @ 0001ae2c size=516 ===== */

undefined4 FUN_0001ae2c(int param_1,int param_2,int param_3,int param_4)

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
       (iVar1 = FUN_0002605c(param_3,param_4,param_1 + 0x114), iVar1 < 1)) {
      printf((char *)(DAT_0001b044 + 0x1afa4),DAT_0001b040 + 0x1af9c,0x255,DAT_0001b03c + 0x1af90);
    }
    if (*(int *)(param_1 + 0x13c) == 0) {
      uVar2 = FUN_000251c4(0x5b0,0x29);
      *(undefined4 *)(param_1 + 0x13c) = uVar2;
      if (*(int *)(param_1 + 0x13c) == 0) {
        printf((char *)(DAT_0001b050 + 0x1b00c),DAT_0001b04c + 0x1b004,0x25f,DAT_0001b048 + 0x1aff8)
        ;
        *(undefined4 *)(param_1 + 0x44) = 0;
        return 0xffffffff;
      }
    }
    uVar2 = 0;
  }
  else {
    printf((char *)(DAT_0001b038 + 0x1aec4),DAT_0001b034 + 0x1aebc,0x245,DAT_0001b030 + 0x1aeb0,
           param_2);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== FUN_0001b0f8 @ 0001b0f8 size=196 ===== */

void FUN_0001b0f8(int param_1)

{
  if (param_1 != 0) {
    while (*(int *)(param_1 + 0x154) != 0) {
      FUN_0001a728(*(int *)(param_1 + 0x154));
    }
    printf((char *)(DAT_0001b1c4 + 0x1b168),DAT_0001b1c0 + 0x1b160,0x285,DAT_0001b1bc + 0x1b154,
           param_1);
    if (*(int *)(param_1 + 0x138) != 0) {
      FUN_00025658(*(undefined4 *)(param_1 + 0x138));
    }
    if (*(int *)(param_1 + 0x13c) != 0) {
      FUN_00025658(*(undefined4 *)(param_1 + 0x13c));
    }
    FUN_00019cb4(param_1);
  }
  return;
}



/* ===== FUN_0001b1c8 @ 0001b1c8 size=144 ===== */

void FUN_0001b1c8(int *param_1)

{
  if (param_1 != (int *)0x0) {
    while (param_1[3] != 0) {
      FUN_0001a728(param_1[3]);
    }
    while (param_1[1] != 0) {
      FUN_0001b0f8(param_1[1]);
    }
    close(*param_1);
    FUN_00019bac(param_1);
  }
  return;
}



/* ===== FUN_0001b258 @ 0001b258 size=1128 ===== */

int FUN_0001b258(int param_1,int param_2,char *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *local_c;
  
  iVar1 = sprintf(param_3,(char *)(DAT_0001b6c0 + 0x1b288));
  pcVar3 = param_3 + iVar1;
  iVar1 = sprintf(pcVar3,(char *)(DAT_0001b6c4 + 0x1b2b0));
  pcVar3 = pcVar3 + iVar1;
  iVar1 = sprintf(pcVar3,(char *)(DAT_0001b6c8 + 0x1b2d8));
  pcVar3 = pcVar3 + iVar1;
  iVar1 = sprintf(pcVar3,(char *)(DAT_0001b6cc + 0x1b300));
  pcVar3 = pcVar3 + iVar1;
  iVar1 = param_2;
  if (param_2 == 0) {
    iVar1 = DAT_0001b6d0 + 0x1b33c;
  }
  iVar1 = sprintf(pcVar3,(char *)(DAT_0001b6d4 + 0x1b348),iVar1);
  iVar2 = sprintf(pcVar3 + iVar1,(char *)(DAT_0001b6d8 + 0x1b370));
  local_c = pcVar3 + iVar1 + iVar2;
  if (*(int *)(param_1 + 0x40) != 0) {
    if (*(int *)(param_1 + 0x40) == 1) {
      iVar1 = FUN_000261d0(0x60,*(undefined4 *)(param_1 + 0x120),param_1 + 0x48,local_c,
                           param_4 - ((int)local_c - (int)param_3));
      local_c = local_c + iVar1;
    }
    else if (*(int *)(param_1 + 0x40) == 2) {
      iVar1 = FUN_00026418(0x60,*(undefined4 *)(param_1 + 0x120),param_1 + 0x48,local_c,
                           param_4 - ((int)local_c - (int)param_3));
      local_c = local_c + iVar1;
    }
    if (param_2 == 0) {
      iVar1 = sprintf(local_c,(char *)(DAT_0001b6e8 + 0x1b4c0),DAT_0001b6e4 + 0x1b4b4);
      local_c = local_c + iVar1;
    }
    else {
      iVar1 = sprintf(local_c,(char *)(DAT_0001b6e0 + 0x1b48c),param_2,DAT_0001b6dc + 0x1b480);
      local_c = local_c + iVar1;
    }
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    iVar1 = *(int *)(param_1 + 0x44);
    if (iVar1 == 0x4002) {
      iVar1 = FUN_000267b8(0x61,*(undefined4 *)(param_1 + 0x130),*(undefined1 *)(param_1 + 0x134),
                           local_c,param_4 - ((int)local_c - (int)param_3));
      local_c = local_c + iVar1;
    }
    else if (iVar1 == 0x4003) {
      iVar1 = FUN_00026888(0x61,*(undefined4 *)(param_1 + 0x130),*(undefined1 *)(param_1 + 0x134),
                           param_1 + 0x114,local_c,param_4 - ((int)local_c - (int)param_3));
      local_c = local_c + iVar1;
    }
    else if (iVar1 == 0x4001) {
      iVar1 = FUN_000266e8(0x61,*(undefined4 *)(param_1 + 0x130),*(undefined1 *)(param_1 + 0x134),
                           local_c,param_4 - ((int)local_c - (int)param_3));
      local_c = local_c + iVar1;
    }
    if (param_2 == 0) {
      iVar1 = sprintf(local_c,(char *)(DAT_0001b6f8 + 0x1b68c),DAT_0001b6f4 + 0x1b680);
      local_c = local_c + iVar1;
    }
    else {
      iVar1 = sprintf(local_c,(char *)(DAT_0001b6f0 + 0x1b658),param_2,DAT_0001b6ec + 0x1b64c);
      local_c = local_c + iVar1;
    }
  }
  return (int)local_c - (int)param_3;
}



/* ===== FUN_0001b6fc @ 0001b6fc size=164 ===== */

undefined4 FUN_0001b6fc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  printf((char *)(DAT_0001b7a8 + 0x1b73c),DAT_0001b7a4 + 0x1b734,0x2d5,DAT_0001b7a0 + 0x1b728);
  FUN_00024e94(param_3,0x6f);
  return 0;
}



/* ===== FUN_0001b7ac @ 0001b7ac size=648 ===== */

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_0001b7ac(int param_1,int param_2,int param_3)

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
  printf((char *)(DAT_0001ba3c + 0x1b854),DAT_0001ba38 + 0x1b84c,0x2ea,DAT_0001ba34 + 0x1b840);
  iVar1 = FUN_00024c4c(param_2,local_418);
  if ((iVar1 < 0) && ((local_418[0] & 1) == 0)) {
    FUN_000246d4(param_3,0x196);
    printf((char *)(DAT_0001ba48 + 0x1b8b0),DAT_0001ba44 + 0x1b8a8,0x2ed,DAT_0001ba40 + 0x1b89c);
  }
  else {
    if (*local_14 == 1) {
      sVar2 = strlen(local_498);
      uVar3 = *(undefined4 *)(DAT_0001ba4c + 0x1b8fc);
      *(undefined4 *)(local_498 + sVar2) = *(undefined4 *)(DAT_0001ba4c + 0x1b8f8);
      *(undefined4 *)((int)&uStack_494 + sVar2) = uVar3;
      auStack_490[sVar2] = *(undefined1 *)(DAT_0001ba4c + 0x1b900);
    }
    else {
      sVar2 = strlen(local_498);
      uVar3 = *(undefined4 *)(DAT_0001ba50 + 0x1b940);
      *(undefined4 *)(local_498 + sVar2) = *(undefined4 *)(DAT_0001ba50 + 0x1b93c);
      *(undefined4 *)((int)&uStack_494 + sVar2) = uVar3;
    }
    strcat(local_498,(char *)((int)local_14 + 6));
    if ((short)local_14[1] != 0) {
      sVar2 = strlen(local_498);
      sprintf(local_498 + sVar2,(char *)(DAT_0001ba54 + 0x1b9a8),(uint)*(ushort *)(local_14 + 1));
    }
    strcat(local_498,local_c);
    local_10 = FUN_0001b258(local_c,local_498,local_418 + 1,0x400);
    FUN_00025080(param_3,0);
    FUN_00025154(param_3,local_10);
    uVar3 = FUN_00020264(local_418 + 1,local_10);
    *(undefined4 *)(param_3 + 0xa8) = uVar3;
  }
  return 0;
}



/* ===== FUN_0001ba58 @ 0001ba58 size=52 ===== */

int FUN_0001ba58(void)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0001ba8c + 0x1ba6c);
  *(int *)(DAT_0001ba90 + 0x1ba7c) = iVar1 + 1;
  return iVar1;
}



/* ===== FUN_0001ba94 @ 0001ba94 size=1048 ===== */

undefined4 FUN_0001ba94(undefined4 *param_1)

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
      printf((char *)(DAT_0001befc + 0x1be9c),DAT_0001bef8 + 0x1be94,0x363,DAT_0001bef4 + 0x1be88);
      return 0xffffffff;
    }
    local_10 = socket(2,2,0);
    if (local_10 == -1) break;
    local_14 = socket(2,2,0);
    if (local_14 == -1) {
      uVar1 = FUN_00019ac0();
      uVar1 = FUN_00019adc(uVar1);
      printf((char *)(DAT_0001bec0 + 0x1bb68),DAT_0001bebc + 0x1bb60,0x31a,DAT_0001beb8 + 0x1bb54,
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
          printf((char *)(DAT_0001becc + 0x1bcdc),DAT_0001bec8 + 0x1bcd4,0x347,
                 DAT_0001bec4 + 0x1bcc8,pcVar3);
        }
        else {
          local_1c = local_1c | 0x800;
          local_1c = fcntl(local_10,4,local_1c);
          if ((int)local_1c < 0) {
            piVar2 = __errno_location();
            pcVar3 = strerror(*piVar2);
            printf((char *)(DAT_0001bed8 + 0x1bd48),DAT_0001bed4 + 0x1bd40,0x34c,
                   DAT_0001bed0 + 0x1bd34,pcVar3);
          }
        }
        local_1c = fcntl(local_14,3,0);
        if ((int)local_1c < 0) {
          piVar2 = __errno_location();
          pcVar3 = strerror(*piVar2);
          printf((char *)(DAT_0001bee4 + 0x1bda4),DAT_0001bee0 + 0x1bd9c,0x351,
                 DAT_0001bedc + 0x1bd90,pcVar3);
        }
        else {
          local_1c = local_1c | 0x800;
          local_1c = fcntl(local_14,4,local_1c);
          if ((int)local_1c < 0) {
            piVar2 = __errno_location();
            pcVar3 = strerror(*piVar2);
            printf((char *)(DAT_0001bef0 + 0x1be10),DAT_0001beec + 0x1be08,0x356,
                   DAT_0001bee8 + 0x1bdfc,pcVar3);
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
  uVar1 = FUN_00019ac0();
  uVar1 = FUN_00019adc(uVar1);
  printf((char *)(DAT_0001beb4 + 0x1bb08),DAT_0001beb0 + 0x1bb00,0x314,DAT_0001beac + 0x1baf4,uVar1)
  ;
  return 0xffffffff;
}



/* ===== FUN_0001bf00 @ 0001bf00 size=684 ===== */

undefined4 FUN_0001bf00(int param_1,int param_2,int param_3,short param_4,uint param_5)

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
    printf((char *)(DAT_0001c1b4 + 0x1bf84),DAT_0001c1b0 + 0x1bf7c,0x36e,DAT_0001c1ac + 0x1bf70,
           pcVar3);
    uVar5 = 0xffffffff;
  }
  else {
    *__ptr = (uint)(param_3 != 0);
    __ptr[8] = __in.s_addr;
    uVar4 = FUN_0001ba58();
    __ptr[10] = uVar4;
    if (param_3 == 0) {
      iVar6 = FUN_0001ba94(__ptr);
      if (iVar6 < 0) {
        free(__ptr);
        return 0xffffffff;
      }
      *(short *)(__ptr + 7) = param_4;
      *(short *)((int)__ptr + 0x1e) = param_4 + 1;
      if (param_2 == 0) {
        iVar6 = DAT_0001c1d0 + 0x1c0f8;
      }
      else {
        iVar6 = DAT_0001c1cc + 0x1c0e8;
      }
      uVar7 = __ptr[10];
      uVar4 = __ptr[6];
      uVar1 = *(ushort *)((int)__ptr + 0x1a);
      pcVar3 = inet_ntoa(__in);
      printf((char *)(DAT_0001c1dc + 0x1c174),DAT_0001c1d8 + 0x1c16c,0x38b,DAT_0001c1d4 + 0x1c160,
             iVar6,uVar7,(uint)(ushort)uVar4,(uint)uVar1,pcVar3,(uint)(ushort)__ptr[7],
             (uint)*(ushort *)((int)__ptr + 0x1e));
    }
    else {
      __ptr[1] = *(uint *)(param_1 + 4);
      __ptr[2] = param_5;
      __ptr[3] = param_5 + 1;
      if (param_2 == 0) {
        iVar6 = DAT_0001c1bc + 0x1c028;
      }
      else {
        iVar6 = DAT_0001c1b8 + 0x1c018;
      }
      uVar4 = __ptr[10];
      pcVar3 = inet_ntoa(__in);
      printf((char *)(DAT_0001c1c8 + 0x1c080),DAT_0001c1c4 + 0x1c078,0x37e,DAT_0001c1c0 + 0x1c06c,
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



/* ===== FUN_0001c1e0 @ 0001c1e0 size=164 ===== */

void FUN_0001c1e0(int param_1,int param_2)

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



/* ===== FUN_0001c284 @ 0001c284 size=1096 ===== */

undefined4 FUN_0001c284(int *param_1,int param_2,undefined4 param_3)

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
  printf((char *)(DAT_0001c6d4 + 0x1c360),DAT_0001c6d0 + 0x1c358,0x3b6,DAT_0001c6cc + 0x1c34c);
  if (*(int *)(param_2 + 0x80) == 0) {
    FUN_000246d4(param_3,0x1cd);
    printf((char *)(DAT_0001c6e0 + 0x1c39c),DAT_0001c6dc + 0x1c394,0x3ba,DAT_0001c6d8 + 0x1c388);
  }
  else {
    if (**(int **)(param_2 + 0x80) == 1) {
      local_c = 1;
      if ((*(uint *)(*(int *)(param_2 + 0x80) + 4) & 0x20) == 0) {
        printf((char *)(DAT_0001c6ec + 0x1c3f8),DAT_0001c6e8 + 0x1c3f0,0x3c1,DAT_0001c6e4 + 0x1c3e4)
        ;
        FUN_000246d4(param_3,0x1cd);
        return 0;
      }
    }
    else if ((*(uint *)(*(int *)(param_2 + 0x80) + 4) & 8) == 0) {
      printf((char *)(DAT_0001c6f8 + 0x1c444),DAT_0001c6f4 + 0x1c43c,0x3c7,DAT_0001c6f0 + 0x1c430);
      FUN_000246d4(param_3,0x1cd);
      return 0;
    }
    snprintf(local_5c,0x3f,(char *)(DAT_0001c700 + 0x1c478),local_14,DAT_0001c6fc + 0x1c46c);
    snprintf(local_9c,0x3f,(char *)(DAT_0001c708 + 0x1c49c),local_14,DAT_0001c704 + 0x1c490);
    if ((*(int *)(local_14 + 0x40) == 0) ||
       (iVar1 = FUN_0001a7d4(local_5c,param_2 + 0x2e), iVar1 == 0)) {
      if ((*(int *)(local_14 + 0x44) == 0) ||
         (iVar1 = FUN_0001a7d4(local_9c,param_2 + 0x2e), iVar1 == 0)) {
        printf((char *)(DAT_0001c714 + 0x1c54c),DAT_0001c710 + 0x1c544,0x3d4,DAT_0001c70c + 0x1c538,
               param_2 + 0x2e);
        FUN_000246d4(param_3,0x1cd);
        return 0;
      }
      local_10 = 1;
    }
    else {
      local_10 = 0;
    }
    FUN_0001c1e0(param_1,local_10);
    local_1c = FUN_0001bf00(param_1,local_10,local_c,*(undefined2 *)(*(int *)(param_2 + 0x80) + 0xc)
                            ,*(undefined1 *)(*(int *)(param_2 + 0x80) + 0x10));
    if (local_1c < 0) {
      FUN_000246d4(param_3,500);
    }
    else {
      if (local_10 == 0) {
        local_18 = param_1[0x105];
      }
      else {
        local_18 = param_1[0x106];
      }
      if (local_c == 0) {
        FUN_00024a54(param_3,*(undefined4 *)(local_18 + 0x28),*(undefined2 *)(local_18 + 0x1c),
                     *(undefined2 *)(local_18 + 0x18));
      }
      else {
        FUN_00024b70(param_3,*(undefined4 *)(local_18 + 0x28),*(undefined4 *)(local_18 + 8));
      }
      if (*param_1 == 2) {
        if (local_10 == 0) {
          uVar2 = *(undefined4 *)(local_14 + 0x138);
        }
        else {
          uVar2 = *(undefined4 *)(local_14 + 0x13c);
        }
        uVar2 = FUN_000254ec(uVar2);
        *(undefined4 *)(local_18 + 0x24) = uVar2;
      }
      if (*param_1 == 0) {
        *param_1 = 1;
        iVar1 = FUN_000237e4();
        param_1[3] = iVar1;
        FUN_00024850(param_3,param_1[3]);
      }
    }
  }
  return 0;
}



/* ===== FUN_0001c718 @ 0001c718 size=184 ===== */

undefined4 FUN_0001c718(int *param_1,undefined4 param_2,undefined4 param_3)

{
  printf((char *)(DAT_0001c7d8 + 0x1c750),DAT_0001c7d4 + 0x1c748,0x3fb,DAT_0001c7d0 + 0x1c73c);
  if ((*param_1 == 1) || (*param_1 == 2)) {
    if (*param_1 != 1) {
      *param_1 = 1;
    }
  }
  else {
    FUN_000246d4(param_3,0x1c7);
    printf((char *)(DAT_0001c7e4 + 0x1c79c),DAT_0001c7e0 + 0x1c794,0x3ff,DAT_0001c7dc + 0x1c788);
  }
  return 0;
}



/* ===== FUN_0001c7e8 @ 0001c7e8 size=324 ===== */

undefined4 FUN_0001c7e8(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[0x108];
  printf((char *)(DAT_0001c934 + 0x1c82c),DAT_0001c930 + 0x1c824,0x40d,DAT_0001c92c + 0x1c818);
  if ((*param_1 == 1) || (*param_1 == 2)) {
    if (*param_1 != 2) {
      if ((param_1[0x105] != 0) && (*(int *)(iVar2 + 0x138) != 0)) {
        iVar3 = param_1[0x105];
        uVar1 = FUN_000254ec(*(undefined4 *)(iVar2 + 0x138));
        *(undefined4 *)(iVar3 + 0x24) = uVar1;
      }
      if ((param_1[0x106] != 0) && (*(int *)(iVar2 + 0x13c) != 0)) {
        iVar3 = param_1[0x106];
        uVar1 = FUN_000254ec(*(undefined4 *)(iVar2 + 0x13c));
        *(undefined4 *)(iVar3 + 0x24) = uVar1;
      }
      *param_1 = 2;
    }
  }
  else {
    FUN_000246d4(param_3,0x1c7);
    printf((char *)(DAT_0001c940 + 0x1c878),DAT_0001c93c + 0x1c870,0x411,DAT_0001c938 + 0x1c864);
  }
  return 0;
}



/* ===== FUN_0001c944 @ 0001c944 size=456 ===== */

undefined4 FUN_0001c944(undefined4 *param_1,int param_2)

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
  printf((char *)(DAT_0001cb14 + 0x1ca08),DAT_0001cb10 + 0x1ca00,0x425,DAT_0001cb0c + 0x1c9f4);
  snprintf(local_4c,0x3f,(char *)(DAT_0001cb1c + 0x1ca28),local_c,DAT_0001cb18 + 0x1ca1c);
  snprintf(local_8c,0x3f,(char *)(DAT_0001cb24 + 0x1ca4c),local_c,DAT_0001cb20 + 0x1ca40);
  iVar1 = FUN_0001a7d4(local_4c,param_2 + 0x2e);
  if (iVar1 == 0) {
    iVar1 = FUN_0001a7d4(local_8c,param_2 + 0x2e);
    if (iVar1 == 0) {
      FUN_0001c1e0(param_1,0);
      FUN_0001c1e0(param_1,1);
    }
    else {
      FUN_0001c1e0(param_1,1);
    }
  }
  else {
    FUN_0001c1e0(param_1,0);
  }
  if ((param_1[0x105] == 0) && (param_1[0x106] == 0)) {
    *param_1 = 0;
  }
  return 0;
}



/* ===== FUN_0001cb28 @ 0001cb28 size=856 ===== */

undefined4 FUN_0001cb28(int *param_1,int param_2,undefined4 param_3)

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
  FUN_000246d4(param_3,200);
  FUN_0002492c(param_3,0);
  FUN_00024f70(param_3,DAT_0001ce80 + 0x1cb98);
  iVar1 = FUN_00024720(param_2,&local_18);
  if (iVar1 < 0) {
    FUN_000246d4(param_3,400);
    printf((char *)(DAT_0001ce8c + 0x1cbe8),DAT_0001ce88 + 0x1cbe0,0x448,DAT_0001ce84 + 0x1cbd4);
    uVar2 = 0;
  }
  else {
    FUN_00024780(param_3,local_18);
    if (*param_1 != 0) {
      iVar1 = FUN_000247f0(param_2,&local_1c);
      if ((iVar1 < 0) || (param_1[3] != local_1c)) {
        printf((char *)(DAT_0001ce98 + 0x1cc60),DAT_0001ce94 + 0x1cc58,0x44f,DAT_0001ce90 + 0x1cc4c)
        ;
        FUN_000246d4(param_3,0x1c6);
        return 0;
      }
      FUN_00024850(param_3,local_1c);
    }
    if (local_c == 0) {
      if (*(int *)(param_2 + 4) != 0) {
        local_c = *(int *)(local_10 + 4);
        while ((local_c != 0 && (iVar1 = FUN_0001a7d4(local_c,local_14), iVar1 == 0))) {
          local_c = *(int *)(local_c + 0x15c);
        }
        if (local_c == 0) {
          printf((char *)(DAT_0001ceb0 + 0x1cd80),DAT_0001ceac + 0x1cd78,0x463,
                 DAT_0001cea8 + 0x1cd6c,local_14);
          FUN_000246d4(param_3,0x1c6);
          return 0;
        }
        FUN_00019e84(param_1,local_c);
      }
    }
    else {
      iVar1 = FUN_0001a7d4(local_c,local_14);
      if (iVar1 == 0) {
        printf((char *)(DAT_0001cea4 + 0x1ccdc),DAT_0001cea0 + 0x1ccd4,0x458,DAT_0001ce9c + 0x1ccc8,
               local_14,local_c);
        FUN_000246d4(param_3,0x1c3);
        return 0;
      }
    }
    switch(*(undefined4 *)(param_2 + 4)) {
    case 0:
      uVar2 = FUN_0001b6fc(param_1,param_2,param_3);
      break;
    case 1:
      uVar2 = FUN_0001b7ac(param_1,param_2,param_3);
      break;
    case 2:
      uVar2 = FUN_0001c284(param_1,param_2,param_3);
      break;
    case 3:
      uVar2 = FUN_0001c7e8(param_1,param_2,param_3);
      break;
    case 4:
    default:
      FUN_000246d4(param_3,0x1f5);
      uVar2 = 0;
      break;
    case 5:
      uVar2 = FUN_0001c718(param_1,param_2,param_3);
      break;
    case 6:
      uVar2 = FUN_0001c944(param_1,param_2,param_3);
    }
  }
  return uVar2;
}



/* ===== FUN_0001ceb4 @ 0001ceb4 size=528 ===== */

int FUN_0001ceb4(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_c;
  
  if (*(int *)(param_1 + 0x410) != 0x3ff) {
    local_c = recv(*(int *)(param_1 + 4),(void *)(param_1 + 0x10 + *(int *)(param_1 + 0x410)),
                   0x3ff - *(int *)(param_1 + 0x410),0x40);
    if (local_c == 0) {
      printf((char *)(DAT_0001d0cc + 0x1cf40),DAT_0001d0c8 + 0x1cf38,0x486,DAT_0001d0c4 + 0x1cf2c);
      return -1;
    }
    if (local_c == -1) {
      iVar1 = FUN_00019ac0();
      if ((iVar1 != 0xb) && (iVar1 = FUN_00019ac0(), iVar1 != 4)) {
        uVar2 = FUN_00019ac0();
        uVar2 = FUN_00019adc(uVar2);
        printf((char *)(DAT_0001d0d8 + 0x1cfac),DAT_0001d0d4 + 0x1cfa4,0x48b,DAT_0001d0d0 + 0x1cf98,
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
    iVar1 = FUN_00023a44(param_2,param_1 + 0x10,*(undefined4 *)(param_1 + 0x410));
    if (iVar1 < 0) {
      printf((char *)(DAT_0001d0e4 + 0x1d050),DAT_0001d0e0 + 0x1d048,0x49a,DAT_0001d0dc + 0x1d03c);
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



/* ===== FUN_0001d0e8 @ 0001d0e8 size=268 ===== */

ssize_t FUN_0001d0e8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_40c;
  undefined1 auStack_408 [1020];
  size_t local_c;
  
  local_40c = 0;
  memset(auStack_408,0,0x3fc);
  local_c = FUN_00023e00(param_2,&local_40c,0x400);
  if ((int)local_c < 0) {
    printf((char *)(DAT_0001d1fc + 0x1d16c),DAT_0001d1f8 + 0x1d164,0x4ad,DAT_0001d1f4 + 0x1d158);
    local_c = -1;
  }
  else {
    local_c = send(*(int *)(param_1 + 4),&local_40c,local_c,0);
    if (local_c == -1) {
      uVar1 = FUN_00019ac0();
      uVar1 = FUN_00019adc(uVar1);
      printf((char *)(DAT_0001d208 + 0x1d1dc),DAT_0001d204 + 0x1d1d4,0x4b3,DAT_0001d200 + 0x1d1c8,
             uVar1);
      local_c = -1;
    }
  }
  return local_c;
}



/* ===== FUN_0001d20c @ 0001d20c size=388 ===== */

ssize_t FUN_0001d20c(int param_1,int param_2)

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
    iVar4 = FUN_00019ac0();
    if ((iVar4 == 0xb) || (iVar4 = FUN_00019ac0(), iVar4 == 4)) {
      local_18 = 0;
    }
    else {
      uVar5 = FUN_00019ac0();
      uVar5 = FUN_00019adc(uVar5);
      printf((char *)(DAT_0001d398 + 0x1d2dc),DAT_0001d394 + 0x1d2d4,0x4c6,DAT_0001d390 + 0x1d2c8,
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
      printf((char *)(DAT_0001d3a4 + 0x1d364),DAT_0001d3a0 + 0x1d35c,0x4d0,DAT_0001d39c + 0x1d350,
             pcVar6,(uint)uVar1,(uint)uVar3);
      uVar3 = ntohs(sStack_28.sa_data._0_2_);
      *(uint16_t *)(local_14 + 0x1c) = uVar3;
    }
  }
  return local_18;
}



/* ===== FUN_0001d3a8 @ 0001d3a8 size=388 ===== */

ssize_t FUN_0001d3a8(int param_1,int param_2)

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
    iVar4 = FUN_00019ac0();
    if ((iVar4 == 0xb) || (iVar4 = FUN_00019ac0(), iVar4 == 4)) {
      local_18 = 0;
    }
    else {
      uVar5 = FUN_00019ac0();
      uVar5 = FUN_00019adc(uVar5);
      printf((char *)(DAT_0001d534 + 0x1d478),DAT_0001d530 + 0x1d470,0x4e3,DAT_0001d52c + 0x1d464,
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
      printf((char *)(DAT_0001d540 + 0x1d500),DAT_0001d53c + 0x1d4f8,0x4ed,DAT_0001d538 + 0x1d4ec,
             pcVar6,(uint)uVar1,(uint)uVar3);
      uVar3 = ntohs(sStack_28.sa_data._0_2_);
      *(uint16_t *)(local_14 + 0x1e) = uVar3;
    }
  }
  return local_18;
}



/* ===== FUN_0001d544 @ 0001d544 size=740 ===== */

size_t FUN_0001d544(int *param_1,void *param_2,size_t param_3)

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
      iVar1 = FUN_00019ac0();
      if ((iVar1 == 0xb) || (iVar1 = FUN_00019ac0(), iVar1 == 4)) {
        param_3 = 0;
      }
      else {
        pcVar2 = inet_ntoa((in_addr)param_1[8]);
        uVar3 = FUN_00019ac0();
        uVar3 = FUN_00019adc(uVar3);
        printf((char *)(DAT_0001d848 + 0x1d808),DAT_0001d844 + 0x1d800,0x528,DAT_0001d840 + 0x1d7f4,
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
      iVar1 = FUN_00019ac0();
      if ((iVar1 == 0xb) || (iVar1 = FUN_00019ac0(), iVar1 == 4)) {
        param_3 = 0;
      }
      else {
        pcVar2 = inet_ntoa((in_addr)param_1[8]);
        uVar3 = FUN_00019ac0();
        uVar3 = FUN_00019adc(uVar3);
        printf((char *)(DAT_0001d830 + 0x1d654),DAT_0001d82c + 0x1d64c,0x50d,DAT_0001d828 + 0x1d640,
               pcVar2,uVar3);
        param_3 = 0xffffffff;
      }
    }
    else {
      local_18 = send(local_14,param_2,param_3,0);
      if (local_18 == -1) {
        iVar1 = FUN_00019ac0();
        if ((iVar1 == 0xb) || (iVar1 = FUN_00019ac0(), iVar1 == 4)) {
          param_3 = 0;
        }
        else {
          pcVar2 = inet_ntoa((in_addr)param_1[8]);
          uVar3 = FUN_00019ac0();
          uVar3 = FUN_00019adc(uVar3);
          printf((char *)(DAT_0001d83c + 0x1d6fc),DAT_0001d838 + 0x1d6f4,0x516,
                 DAT_0001d834 + 0x1d6e8,param_3,pcVar2,uVar3);
          param_3 = 0xffffffff;
        }
      }
    }
  }
  return param_3;
}



/* ===== FUN_0001d84c @ 0001d84c size=348 ===== */

int FUN_0001d84c(int param_1)

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
    iVar3 = FUN_000253a8(local_1c,*(undefined4 *)(local_20 + 0x24));
    if (iVar3 < 1) {
      return local_14;
    }
    FUN_000252f8(local_1c,*(undefined4 *)(local_20 + 0x24),&local_24,&local_28);
    if (0 < *local_28) {
      puVar4 = (uint32_t *)(local_24 + 8);
      uVar1 = htonl(*(uint32_t *)(local_20 + 0x28));
      *puVar4 = uVar1;
      iVar3 = FUN_0001d544(local_20,local_24,*local_28);
      if (iVar3 != *local_28) {
        return local_14;
      }
      *(int *)(local_20 + 0x2c) = *(int *)(local_20 + 0x2c) + 1;
      *(int *)(local_20 + 0x30) = *(int *)(local_20 + 0x30) + *local_28 + -0xc;
    }
    uVar2 = FUN_00025454(local_1c,*(undefined4 *)(local_20 + 0x24));
    *(undefined4 *)(local_20 + 0x24) = uVar2;
    local_14 = local_14 + 1;
  } while( true );
}



/* ===== FUN_0001d9a8 @ 0001d9a8 size=348 ===== */

int FUN_0001d9a8(int param_1)

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
    iVar3 = FUN_000253a8(local_1c,*(undefined4 *)(local_20 + 0x24));
    if (iVar3 < 1) {
      return local_14;
    }
    FUN_000252f8(local_1c,*(undefined4 *)(local_20 + 0x24),&local_24,&local_28);
    if (0 < *local_28) {
      puVar4 = (uint32_t *)(local_24 + 8);
      uVar1 = htonl(*(uint32_t *)(local_20 + 0x28));
      *puVar4 = uVar1;
      iVar3 = FUN_0001d544(local_20,local_24,*local_28);
      if (iVar3 != *local_28) {
        return local_14;
      }
      *(int *)(local_20 + 0x2c) = *(int *)(local_20 + 0x2c) + 1;
      *(int *)(local_20 + 0x30) = *(int *)(local_20 + 0x30) + *local_28 + -0xc;
    }
    uVar2 = FUN_00025454(local_1c,*(undefined4 *)(local_20 + 0x24));
    *(undefined4 *)(local_20 + 0x24) = uVar2;
    local_14 = local_14 + 1;
  } while( true );
}



/* ===== FUN_0001db04 @ 0001db04 size=2952 ===== */

undefined4 FUN_0001db04(uint *param_1)

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
           (iVar3 = FUN_000253a8(*(undefined4 *)(local_2c + 0x138),local_30[9]), 0 < iVar3)) {
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
           (iVar3 = FUN_000253a8(*(undefined4 *)(local_2c + 0x13c),local_34[9]), 0 < iVar3)) {
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
      printf((char *)(DAT_0001e694 + 0x1e140),DAT_0001e690 + 0x1e138,0x5c7,DAT_0001e68c + 0x1e12c,
             pcVar2);
      uVar4 = 0xffffffff;
    }
    else if (local_38 == 0) {
      uVar4 = 0;
    }
    else {
      if ((fStack_cc.fds_bits[*local_20 >> 5] >> (*local_20 & 0x1f) & 1U) != 0) {
        FUN_0001a5e0(local_20);
      }
      local_c = (int *)local_20[3];
LAB_0001e670:
      piVar1 = local_c;
      if (local_c != (int *)0x0) {
        local_1c = local_c;
        local_3c = local_c[0x108];
        local_40 = (int *)local_c[0x105];
        local_44 = (int *)local_c[0x106];
        local_c = (int *)local_c[0x109];
        if ((fStack_cc.fds_bits[(uint)piVar1[1] >> 5] >> (piVar1[1] & 0x1fU) & 1U) != 0)
        goto LAB_0001e21c;
        goto LAB_0001e364;
      }
      uVar4 = 1;
    }
  }
  return uVar4;
LAB_0001e21c:
  do {
    FUN_000235fc(local_2a4);
    FUN_000235fc(auStack_1f8);
    local_38 = FUN_0001ceb4(local_1c,local_2a4);
    if (local_38 == 0) break;
    if (local_38 < 0) {
      FUN_0001a728(local_1c);
      local_1c = (int *)0x0;
      break;
    }
    if (local_2a4[0] == 2) {
      FUN_00023638(local_2a4);
    }
    else if (local_2a4[0] == 0) {
      local_38 = FUN_0001cb28(local_1c,local_2a4,auStack_1f8);
      if (local_38 < 0) {
        printf((char *)(DAT_0001e6ac + 0x1e314),DAT_0001e6a8 + 0x1e30c,0x5f8,DAT_0001e6a4 + 0x1e300)
        ;
      }
      else {
        FUN_0001d0e8(local_1c,auStack_1f8);
      }
      FUN_00023638(local_2a4);
      FUN_00023638(auStack_1f8);
    }
    else {
      printf((char *)(DAT_0001e6a0 + 0x1e2c0),DAT_0001e69c + 0x1e2b8,0x5f1,DAT_0001e698 + 0x1e2ac);
      FUN_00023638(local_2a4);
    }
  } while (local_1c != (int *)0x0);
  if (local_1c != (int *)0x0) {
LAB_0001e364:
    if (*local_1c == 2) {
      if ((local_40 != (int *)0x0) &&
         (iVar3 = FUN_000253a8(*(undefined4 *)(local_3c + 0x138),local_40[9]), 0 < iVar3)) {
        if ((*local_40 == 0) ||
           ((fStack_14c.fds_bits[(uint)local_40[1] >> 5] >> (local_40[1] & 0x1fU) & 1U) == 0)) {
          if ((*local_40 == 0) &&
             ((fStack_14c.fds_bits[(uint)local_40[4] >> 5] >> (local_40[4] & 0x1fU) & 1U) != 0)) {
            FUN_0001d84c(local_1c);
          }
        }
        else {
          FUN_0001d84c(local_1c);
        }
      }
      if ((local_44 != (int *)0x0) &&
         (iVar3 = FUN_000253a8(*(undefined4 *)(local_3c + 0x13c),local_44[9]), 0 < iVar3)) {
        if ((*local_44 == 0) ||
           ((fStack_14c.fds_bits[(uint)local_44[1] >> 5] >> (local_44[1] & 0x1fU) & 1U) == 0)) {
          if ((*local_44 == 0) &&
             ((fStack_14c.fds_bits[(uint)local_44[4] >> 5] >> (local_44[4] & 0x1fU) & 1U) != 0)) {
            FUN_0001d9a8(local_1c);
          }
        }
        else {
          FUN_0001d9a8(local_1c);
        }
      }
      if ((local_40 != (int *)0x0) && (*local_40 == 0)) {
        if ((fStack_cc.fds_bits[(uint)local_40[4] >> 5] >> (local_40[4] & 0x1fU) & 1U) != 0) {
          FUN_0001d20c(local_1c,0);
        }
        if ((fStack_cc.fds_bits[(uint)local_40[5] >> 5] >> (local_40[5] & 0x1fU) & 1U) != 0) {
          FUN_0001d3a8(local_1c,0);
        }
      }
      if ((local_44 != (int *)0x0) && (*local_44 == 0)) {
        if ((fStack_cc.fds_bits[(uint)local_44[4] >> 5] >> (local_44[4] & 0x1fU) & 1U) != 0) {
          FUN_0001d20c(local_1c,1);
        }
        if ((fStack_cc.fds_bits[(uint)local_44[5] >> 5] >> (local_44[5] & 0x1fU) & 1U) != 0) {
          FUN_0001d3a8(local_1c,1);
        }
      }
    }
  }
  goto LAB_0001e670;
}



/* ===== FUN_0001e6b0 @ 0001e6b0 size=1940 ===== */

int FUN_0001e6b0(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
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
    local_1c = FUN_000254ec(local_30);
    for (local_18 = 0; local_18 < 600; local_18 = local_18 + 1) {
      iVar3 = FUN_00025454(local_30,local_1c);
      iVar4 = FUN_000254b0(local_30);
      if (iVar3 == iVar4) {
        FUN_000255d0(local_30);
      }
      FUN_000252f8(local_30,local_1c,aiStack_9a0 + local_18,auStack_1c64 + local_18);
      aiStack_1304[local_18] = 0x5b0;
      local_1c = FUN_00025454(local_30,local_1c);
    }
    aiStack_9a0[local_18] = 0;
    aiStack_1304[local_18] = 0;
    for (local_14 = *(int **)(local_2c + 0x154); local_14 != (int *)0x0;
        local_14 = (int *)local_14[0x10b]) {
      local_34 = local_14[0x105];
      if (((*local_14 == 2) && (local_34 != 0)) &&
         ((iVar3 = FUN_000253a8(local_30,*(undefined4 *)(local_34 + 0x24)), iVar3 == 0 &&
          (iVar4 = *(int *)(local_34 + 0x24), iVar3 = FUN_000254ec(local_30), iVar4 != iVar3)))) {
        uVar1 = FUN_000254b0(local_30);
        *(undefined4 *)(local_34 + 0x24) = uVar1;
        pcVar2 = inet_ntoa((in_addr)local_14[2]);
        printf((char *)(DAT_0001ee4c + 0x1e958),DAT_0001ee48 + 0x1e950,0x658,DAT_0001ee44 + 0x1e944,
               pcVar2);
      }
    }
    if (*(int *)(local_2c + 0x40) == 1) {
      if (((*(int *)(local_2c + 0xcc) == 0) || (*(int *)(local_2c + 0xcc) == 0)) &&
         (iVar3 = FUN_00026160(param_2,param_3,local_2c + 0x48), iVar3 < 0)) {
        printf((char *)(DAT_0001ee58 + 0x1ea08),DAT_0001ee54 + 0x1ea00,0x660,DAT_0001ee50 + 0x1e9f4)
        ;
      }
    }
    else if ((*(int *)(local_2c + 0x40) == 2) &&
            ((((*(int *)(local_2c + 0x110) == 0 || (*(int *)(local_2c + 0x110) == 0)) ||
              (*(int *)(local_2c + 0x108) == 0)) &&
             (iVar3 = FUN_00026198(param_2,param_3,local_2c + 0x48), iVar3 < 0)))) {
      printf((char *)(DAT_0001ee64 + 0x1ea90),DAT_0001ee60 + 0x1ea88,0x66a,DAT_0001ee5c + 0x1ea7c);
    }
    local_24 = 0;
    local_20 = 0;
    while( true ) {
      if (((param_3 <= local_24) || (aiStack_9a0[local_20] == 0)) || (aiStack_1304[local_20] < 1))
      goto LAB_0001ed30;
      local_38 = 0;
      local_1c68 = 0;
      local_38 = FUN_00025918(param_2 + local_24,param_3 - local_24,&local_1c68);
      if (local_38 == 0) break;
      if (*(int *)(local_2c + 0x40) == 1) {
        local_28 = FUN_00026990(local_2c + 0x118,local_38,local_1c68,param_6,param_5,param_6,
                                aiStack_9a0 + local_20,aiStack_1304 + local_20);
        if (local_28 < 1) {
          printf((char *)(DAT_0001ee7c + 0x1ebf0),DAT_0001ee78 + 0x1ebe8,0x685,
                 DAT_0001ee74 + 0x1ebdc,local_28);
          return -1;
        }
      }
      else if (*(int *)(local_2c + 0x40) == 2) {
        local_28 = FUN_00026f2c(local_2c + 0x118,local_38,local_1c68,param_6,param_5,param_6,
                                aiStack_9a0 + local_20,aiStack_1304 + local_20);
        if (local_28 < 1) {
          printf((char *)(DAT_0001ee88 + 0x1ec8c),DAT_0001ee84 + 0x1ec84,0x68c,
                 DAT_0001ee80 + 0x1ec78,local_28);
          return -1;
        }
      }
      local_20 = local_20 + local_28;
      local_24 = (local_38 - param_2) + local_1c68;
    }
    printf((char *)(DAT_0001ee70 + 0x1eb3c),DAT_0001ee6c + 0x1eb34,0x67c,DAT_0001ee68 + 0x1eb28);
LAB_0001ed30:
    for (local_18 = 0; local_18 < local_20; local_18 = local_18 + 1) {
      *(int *)auStack_1c64[local_18] = aiStack_1304[local_18];
      FUN_00025528(local_30);
    }
    for (local_14 = *(int **)(local_2c + 0x154); local_14 != (int *)0x0;
        local_14 = (int *)local_14[0x10b]) {
      local_3c = local_14[0x105];
      if ((*local_14 == 2) && (local_3c != 0)) {
        FUN_0001fd40(local_3c,*(undefined4 *)(local_2c + 0x144),*(undefined4 *)(local_2c + 0x140),
                     *(undefined4 *)(local_2c + 0x144),param_5,param_6,
                     *(undefined4 *)(local_2c + 0x120));
        FUN_0001d84c(local_14);
      }
    }
  }
  return param_3;
}



/* ===== FUN_0001ee8c @ 0001ee8c size=1968 ===== */

int FUN_0001ee8c(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 param_5,
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
    local_1c = FUN_000254ec(local_30);
    for (local_18 = 0; local_18 < 600; local_18 = local_18 + 1) {
      iVar3 = FUN_00025454(local_30,local_1c);
      iVar4 = FUN_000254b0(local_30);
      if (iVar3 == iVar4) {
        FUN_000255d0(local_30);
      }
      FUN_000252f8(local_30,local_1c,aiStack_9a0 + local_18,auStack_1c64 + local_18);
      aiStack_1304[local_18] = 0x5b0;
      local_1c = FUN_00025454(local_30,local_1c);
    }
    aiStack_9a0[local_18] = 0;
    aiStack_1304[local_18] = 0;
    for (local_14 = *(int **)(local_2c + 0x154); local_14 != (int *)0x0;
        local_14 = (int *)local_14[0x10b]) {
      local_34 = local_14[0x105];
      if (((*local_14 == 2) && (local_34 != 0)) &&
         ((iVar3 = FUN_000253a8(local_30,*(undefined4 *)(local_34 + 0x24)), iVar3 == 0 &&
          (iVar4 = *(int *)(local_34 + 0x24), iVar3 = FUN_000254ec(local_30), iVar4 != iVar3)))) {
        uVar1 = FUN_000254b0(local_30);
        *(undefined4 *)(local_34 + 0x24) = uVar1;
        pcVar2 = inet_ntoa((in_addr)local_14[2]);
        printf((char *)(DAT_0001f644 + 0x1f140),DAT_0001f640 + 0x1f138,0x6c9,DAT_0001f63c + 0x1f12c,
               pcVar2);
      }
    }
    if (*(int *)(local_2c + 0x40) == 1) {
      if (((*(int *)(local_2c + 0xcc) == 0) || (*(int *)(local_2c + 0xcc) == 0)) &&
         (iVar3 = FUN_00026160(param_3,param_4,local_2c + 0x48), iVar3 < 0)) {
        printf((char *)(DAT_0001f650 + 0x1f1f0),DAT_0001f64c + 0x1f1e8,0x6d1,DAT_0001f648 + 0x1f1dc)
        ;
      }
    }
    else if ((*(int *)(local_2c + 0x40) == 2) &&
            ((((*(int *)(local_2c + 0x110) == 0 || (*(int *)(local_2c + 0x110) == 0)) ||
              (*(int *)(local_2c + 0x108) == 0)) &&
             (iVar3 = FUN_00026198(param_3,param_4,local_2c + 0x48), iVar3 < 0)))) {
      printf((char *)(DAT_0001f65c + 0x1f278),DAT_0001f658 + 0x1f270,0x6db,DAT_0001f654 + 0x1f264);
    }
    local_24 = 0;
    local_20 = 0;
    while( true ) {
      if (((param_4 <= local_24) || (aiStack_9a0[local_20] == 0)) || (aiStack_1304[local_20] < 1))
      goto LAB_0001f518;
      local_38 = 0;
      local_1c68 = 0;
      local_38 = FUN_00025918(param_3 + local_24,param_4 - local_24,&local_1c68);
      if (local_38 == 0) break;
      if (*(int *)(local_2c + 0x40) == 1) {
        local_28 = FUN_00026990(local_2c + 0x118,local_38,local_1c68,param_6,param_5,param_6,
                                aiStack_9a0 + local_20,aiStack_1304 + local_20);
        if (local_28 < 1) {
          printf((char *)(DAT_0001f674 + 0x1f3d8),DAT_0001f670 + 0x1f3d0,0x6f6,
                 DAT_0001f66c + 0x1f3c4,local_28);
          return -1;
        }
      }
      else if (*(int *)(local_2c + 0x40) == 2) {
        local_28 = FUN_00026f2c(local_2c + 0x118,local_38,local_1c68,param_6,param_5,param_6,
                                aiStack_9a0 + local_20,aiStack_1304 + local_20);
        if (local_28 < 1) {
          printf((char *)(DAT_0001f680 + 0x1f474),DAT_0001f67c + 0x1f46c,0x6fd,
                 DAT_0001f678 + 0x1f460,local_28);
          return -1;
        }
      }
      local_20 = local_20 + local_28;
      local_24 = (local_38 - param_3) + local_1c68;
    }
    printf((char *)(DAT_0001f668 + 0x1f324),DAT_0001f664 + 0x1f31c,0x6ed,DAT_0001f660 + 0x1f310);
LAB_0001f518:
    for (local_18 = 0; local_18 < local_20; local_18 = local_18 + 1) {
      *(int *)auStack_1c64[local_18] = aiStack_1304[local_18];
      FUN_00025528(local_30);
    }
    for (local_14 = *(int **)(local_2c + 0x154); local_14 != (int *)0x0;
        local_14 = (int *)local_14[0x10b]) {
      local_3c = local_14[0x105];
      if ((*local_14 == 2) && (local_3c != 0)) {
        FUN_0001fd40(local_3c,*(undefined4 *)(local_2c + 0x144),*(undefined4 *)(local_2c + 0x140),
                     *(undefined4 *)(local_2c + 0x144),param_5,param_6,
                     *(undefined4 *)(local_2c + 0x120));
        FUN_0001d84c(local_14);
      }
    }
    FUN_0001db04(param_1);
  }
  return param_4;
}



/* ===== FUN_0001f684 @ 0001f684 size=1140 ===== */

undefined4
FUN_0001f684(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
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
    local_1c = FUN_000254ec(local_28);
    for (local_18 = 0; local_18 < 0x14; local_18 = local_18 + 1) {
      iVar3 = FUN_00025454(local_28,local_1c);
      iVar4 = FUN_000254b0(local_28);
      if (iVar3 == iVar4) {
        FUN_000255d0(local_28);
      }
      FUN_000252f8(local_28,local_1c,auStack_84 + local_18,auStack_128 + local_18);
      auStack_d8[local_18] = 0x5b0;
      local_1c = FUN_00025454(local_28,local_1c);
    }
    auStack_84[local_18] = 0;
    auStack_d8[local_18] = 0;
    for (local_14 = *(int **)(local_24 + 0x154); local_14 != (int *)0x0;
        local_14 = (int *)local_14[0x10b]) {
      local_2c = local_14[0x106];
      if (((*local_14 == 2) && (local_2c != 0)) &&
         ((iVar3 = FUN_000253a8(local_28,*(undefined4 *)(local_2c + 0x24)), iVar3 == 0 &&
          (iVar4 = *(int *)(local_2c + 0x24), iVar3 = FUN_000254ec(local_28), iVar4 != iVar3)))) {
        uVar1 = FUN_000254b0(local_28);
        *(undefined4 *)(local_2c + 0x24) = uVar1;
        pcVar2 = inet_ntoa((in_addr)local_14[2]);
        printf((char *)(DAT_0001fb00 + 0x1f8cc),DAT_0001fafc + 0x1f8c4,0x73c,DAT_0001faf8 + 0x1f8b8,
               pcVar2);
      }
    }
    iVar3 = *(int *)(local_24 + 0x44);
    if (0x4000 < iVar3) {
      if (iVar3 < 0x4003) {
        local_20 = FUN_00027500(local_24 + 0x128,param_2,param_3,param_6,param_5,param_6,auStack_84,
                                auStack_d8);
        if (local_20 < 1) {
          printf((char *)(DAT_0001fb0c + 0x1f97c),DAT_0001fb08 + 0x1f974,0x745,
                 DAT_0001fb04 + 0x1f968,local_20);
          return 0xffffffff;
        }
      }
      else if (iVar3 == 0x4003) {
        local_20 = FUN_00027818(local_24 + 0x128,param_2,param_3,param_6,param_5,param_6,auStack_84,
                                auStack_d8);
        if (local_20 < 1) {
          printf((char *)(DAT_0001fb18 + 0x1f9e8),DAT_0001fb14 + 0x1f9e0,0x74c,
                 DAT_0001fb10 + 0x1f9d4,local_20);
          return 0xffffffff;
        }
      }
    }
    for (local_18 = 0; local_18 < local_20; local_18 = local_18 + 1) {
      *(undefined4 *)auStack_128[local_18] = auStack_d8[local_18];
      FUN_00025528(local_28);
    }
    for (local_14 = *(int **)(local_24 + 0x154); local_14 != (int *)0x0;
        local_14 = (int *)local_14[0x10b]) {
      local_30 = local_14[0x106];
      if ((*local_14 == 2) && (local_30 != 0)) {
        FUN_0001fd40(local_30,*(undefined4 *)(local_24 + 0x14c),*(undefined4 *)(local_24 + 0x148),
                     *(undefined4 *)(local_24 + 0x14c),param_5,param_6,
                     *(undefined4 *)(local_24 + 0x130));
        FUN_0001d9a8(local_14);
      }
    }
  }
  return param_3;
}



/* ===== FUN_0001fb1c @ 0001fb1c size=148 ===== */

longlong FUN_0001fb1c(void)

{
  longlong lVar1;
  timespec local_18;
  
  clock_gettime(1,&local_18);
  lVar1 = FUN_00027a2c(local_18.tv_nsec,local_18.tv_nsec >> 0x1f,1000,0);
  return lVar1 + CONCAT44((local_18.tv_sec >> 0x1f) * 1000000 +
                          (int)((ulonglong)(uint)local_18.tv_sec * 1000000 >> 0x20),
                          (int)((ulonglong)(uint)local_18.tv_sec * 1000000));
}



/* ===== FUN_0001fbb0 @ 0001fbb0 size=120 ===== */

undefined8 FUN_0001fbb0(void)

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



/* ===== FUN_0001fc28 @ 0001fc28 size=48 ===== */

longlong FUN_0001fc28(void)

{
  longlong lVar1;
  
  lVar1 = FUN_0001fbb0();
  return lVar1 + CONCAT44(DAT_0001fc5c,DAT_0001fc58);
}



/* ===== FUN_0001fc60 @ 0001fc60 size=112 ===== */

undefined4
FUN_0001fc60(int param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,int param_6)

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



/* ===== FUN_0001fd40 @ 0001fd40 size=1168 ===== */

size_t FUN_0001fd40(int *param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,
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
    uVar6 = (int)((ulonglong)*(undefined8 *)(param_1 + 0xe) >> 0x20) + DAT_000200ac +
            (uint)CARRY4(uVar8,DAT_000200a8);
    bVar7 = uVar6 <= param_6;
    if (param_6 == uVar6) {
      bVar7 = uVar8 + DAT_000200a8 <= param_5;
    }
    if (!bVar7) {
      return 0;
    }
  }
  uStack_3c = uStack_48;
  local_38 = local_44;
  local_14 = FUN_00027a2c(param_3 + param_5,param_4 + param_6 + (uint)CARRY4(param_3,param_5),
                          1000000,0);
  FUN_00027a2c(param_3 + param_5,param_4 + param_6 + (uint)CARRY4(param_3,param_5),1000000,0);
  local_18 = FUN_00027a2c(0,extraout_r2,1000000,0);
  local_1c = FUN_00027a2c((int)((ulonglong)param_7 * (ulonglong)param_5),
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
      iVar2 = FUN_00019ac0();
      if ((iVar2 != 0xb) && (iVar2 = FUN_00019ac0(), iVar2 != 4)) {
        pcVar3 = inet_ntoa((in_addr)param_1[8]);
        uVar4 = FUN_00019ac0();
        uVar4 = FUN_00019adc(uVar4);
        printf((char *)(DAT_000200c4 + 0x201c4),DAT_000200c0 + 0x201bc,0x7f0,DAT_000200bc + 0x201b0,
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
      iVar2 = FUN_00019ac0();
      if ((iVar2 != 0xb) && (iVar2 = FUN_00019ac0(), iVar2 != 4)) {
        pcVar3 = inet_ntoa((in_addr)param_1[8]);
        uVar4 = FUN_00019ac0();
        uVar4 = FUN_00019adc(uVar4);
        printf((char *)(DAT_000200b8 + 0x20098),DAT_000200b4 + 0x20090,0x7de,DAT_000200b0 + 0x20084,
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



/* ===== FUN_000201f0 @ 000201f0 size=68 ===== */

void * FUN_000201f0(size_t param_1)

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



/* ===== FUN_00020234 @ 00020234 size=48 ===== */

void FUN_00020234(void *param_1)

{
  if (param_1 != (void *)0x0) {
    free(param_1);
  }
  return;
}



/* ===== FUN_00020264 @ 00020264 size=104 ===== */

void * FUN_00020264(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = calloc(1,param_2);
  if ((__dest != (void *)0x0) && (param_1 != (void *)0x0)) {
    memcpy(__dest,param_1,param_2);
  }
  return __dest;
}



/* ===== FUN_000202cc @ 000202cc size=120 ===== */

void * FUN_000202cc(char *param_1)

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



/* ===== FUN_00020344 @ 00020344 size=172 ===== */

undefined4 FUN_00020344(int param_1,int param_2,int param_3)

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



/* ===== FUN_000203f0 @ 000203f0 size=204 ===== */

undefined4 FUN_000203f0(int param_1,int param_2,char *param_3)

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



/* ===== FUN_000204bc @ 000204bc size=928 ===== */

int FUN_000204bc(byte *param_1,int *param_2)

{
  byte *__src;
  int iVar1;
  int iVar2;
  size_t local_1c;
  byte *local_18;
  byte *local_14;
  
  iVar2 = DAT_0002085c + 0x204dc;
  local_14 = param_1;
  iVar1 = FUN_000203f0(DAT_00020860 + 0x204f4,3,param_1);
  *param_2 = iVar1;
  if (*param_2 == 2) {
    printf((char *)(DAT_0002086c + 0x20540),DAT_00020868 + 0x20538,0xaa,DAT_00020864 + 0x2052c,
           param_1);
    iVar1 = -1;
  }
  else {
    *(undefined2 *)(param_2 + 1) = 0;
    *(undefined1 *)((int)param_2 + 6) = 0;
    *(undefined1 *)((int)param_2 + 0x26) = 0;
    for (; ((*(ushort *)(**(int **)(iVar2 + DAT_00020870) + (uint)*local_14 * 2) & 2) != 0 ||
           (*local_14 == 0x3a)); local_14 = local_14 + 1) {
    }
    if ((*local_14 == 0x2f) && (local_14[1] == 0x2f)) {
      local_14 = local_14 + 2;
      for (local_18 = local_14;
          (((*(ushort *)(**(int **)(iVar2 + DAT_00020870) + (uint)*local_18 * 2) & 0x80) != 0 &&
           (*local_18 != 0x3a)) && (*local_18 != 0x2f)); local_18 = local_18 + 1) {
      }
      if (*local_18 == 0x3a) {
        iVar1 = sscanf((char *)(local_18 + 1),(char *)(DAT_00020880 + 0x206a4),&local_1c);
        if (iVar1 != 1) {
          printf((char *)(DAT_0002088c + 0x206dc),DAT_00020888 + 0x206d4,0xbc,DAT_00020884 + 0x206c8
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
             (*(ushort *)(**(int **)(iVar2 + DAT_00020870) + (uint)*local_18 * 2) & 0x80) != 0 &&
             (*local_18 != 0x2f)); local_18 = local_18 + 1) {
      }
      if (*local_18 == 0x2f) {
        local_14 = local_18;
        while ((*(ushort *)(**(int **)(iVar2 + DAT_00020870) + (uint)*local_18 * 2) & 0x80) != 0) {
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
      printf((char *)(DAT_0002087c + 0x20604),DAT_00020878 + 0x205fc,0xb3,DAT_00020874 + 0x205f0,
             param_1);
      iVar1 = -1;
    }
  }
  return iVar1;
}



/* ===== FUN_00020890 @ 00020890 size=256 ===== */

size_t FUN_00020890(undefined4 *param_1,char *param_2,size_t param_3)

{
  undefined4 uVar1;
  size_t sVar2;
  
  if (*(short *)(param_1 + 1) == 0) {
    uVar1 = FUN_00020344(DAT_00020998 + 0x20940,3,*param_1);
    snprintf(param_2,param_3,(char *)(DAT_0002099c + 0x20970),uVar1,(int)param_1 + 6,
             (int)param_1 + 0x26);
  }
  else {
    uVar1 = FUN_00020344(DAT_00020990 + 0x208d8,3,*param_1);
    snprintf(param_2,param_3,(char *)(DAT_00020994 + 0x20914),uVar1,(int)param_1 + 6,
             (uint)*(ushort *)(param_1 + 1),(int)param_1 + 0x26);
  }
  sVar2 = strlen(param_2);
  return sVar2;
}



/* ===== FUN_000209a0 @ 000209a0 size=788 ===== */

undefined4 FUN_000209a0(undefined4 *param_1,byte *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int local_18;
  byte *local_14;
  
  iVar2 = DAT_00020cb4 + 0x209c0;
  local_14 = param_2;
  local_18 = FUN_000203f0(DAT_00020cb8 + 0x209d8,0xc,param_2);
  if (local_18 == 0xb) {
    local_18 = FUN_000203f0(DAT_00020cd0 + 0x20b40,2,local_14);
    if (local_18 == 1) {
      if (*local_14 == 0x24) {
        *param_1 = 2;
        *(byte *)(param_1 + 1) = local_14[1];
        *(undefined2 *)((int)param_1 + 6) = *(undefined2 *)(local_14 + 2);
        *(undefined1 *)(param_1 + 2) = 0;
        uVar1 = 0;
      }
      else {
        printf((char *)(DAT_00020cec + 0x20c64),DAT_00020ce8 + 0x20c5c,0x10c,DAT_00020ce4 + 0x20c50,
               param_2);
        uVar1 = 0xffffffff;
      }
    }
    else {
      *param_1 = 1;
      param_1[1] = local_18;
      while ((*(ushort *)(**(int **)(iVar2 + DAT_00020cbc) + (uint)*local_14 * 2) & 0x80) != 0) {
        local_14 = local_14 + 1;
      }
      local_14 = local_14 + 1;
      iVar2 = sscanf((char *)local_14,(char *)(DAT_00020cd4 + 0x20bd0),&local_18);
      if (iVar2 == 1) {
        param_1[2] = local_18;
        uVar1 = 0;
      }
      else {
        printf((char *)(DAT_00020ce0 + 0x20c0c),DAT_00020cdc + 0x20c04,0x104,DAT_00020cd8 + 0x20bf8,
               param_2);
        uVar1 = 0xffffffff;
      }
    }
  }
  else {
    *param_1 = 0;
    param_1[1] = local_18;
    while ((*(ushort *)(**(int **)(iVar2 + DAT_00020cbc) + (uint)*local_14 * 2) & 0x80) != 0) {
      local_14 = local_14 + 1;
    }
    local_14 = local_14 + 1;
    local_18 = FUN_000204bc(local_14,param_1 + 2);
    if (local_18 < 1) {
      uVar1 = 0xffffffff;
    }
    else {
      while ((*(ushort *)(**(int **)(iVar2 + DAT_00020cbc) + (uint)*local_14 * 2) & 0x80) != 0) {
        local_14 = local_14 + 1;
      }
      local_14 = local_14 + 1;
      local_18 = FUN_000203f0(DAT_00020cc0 + 0x20adc,2,local_14);
      if (local_18 == 1) {
        printf((char *)(DAT_00020ccc + 0x20b1c),DAT_00020cc8 + 0x20b14,0xf7,DAT_00020cc4 + 0x20b08,
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



/* ===== FUN_00020cf0 @ 00020cf0 size=536 ===== */

char * FUN_00020cf0(int *param_1,char *param_2,size_t param_3)

{
  undefined4 uVar1;
  size_t sVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  
  if (*param_1 == 0) {
    uVar1 = FUN_00020344(DAT_00020f08 + 0x20d40,0xc,param_1[1]);
    snprintf(param_2,param_3,(char *)(DAT_00020f0c + 0x20d54),uVar1);
    sVar2 = strlen(param_2);
    pcVar5 = param_2 + sVar2;
    iVar6 = param_3 - sVar2;
    if (iVar6 < 2) {
      pcVar5 = pcVar5 + -(int)param_2;
    }
    else {
      iVar3 = FUN_00020890(param_1 + 2,pcVar5,iVar6);
      pcVar5 = pcVar5 + iVar3;
      if (iVar6 - iVar3 < 2) {
        pcVar5 = pcVar5 + -(int)param_2;
      }
      else {
        uVar1 = FUN_00020344(DAT_00020f10 + 0x20e20,2,param_1[0x1c]);
        snprintf(pcVar5,iVar6 - iVar3,(char *)(DAT_00020f14 + 0x20e34),uVar1);
        sVar2 = strlen(pcVar5);
        pcVar5 = pcVar5 + (sVar2 - (int)param_2);
      }
    }
  }
  else if (*param_1 == 1) {
    uVar1 = FUN_00020344(DAT_00020f18 + 0x20e94,2,param_1[1]);
    iVar6 = param_1[2];
    uVar4 = FUN_00020344(DAT_00020f1c + 0x20ec0,0x2b,param_1[2]);
    snprintf(param_2,param_3,(char *)(DAT_00020f20 + 0x20ee0),uVar1,iVar6,uVar4);
    pcVar5 = (char *)strlen(param_2);
  }
  else {
    pcVar5 = (char *)0x0;
  }
  return pcVar5;
}



/* ===== FUN_00020f24 @ 00020f24 size=952 ===== */

undefined4 FUN_00020f24(int param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_14;
  char *local_10;
  int local_c;
  
  local_c = param_1 + 4;
  if (*(int *)(param_1 + 0x80) != 0) {
    FUN_00020234(*(undefined4 *)(param_1 + 0x80));
    *(undefined4 *)(local_c + 0x7c) = 0;
  }
  uVar1 = FUN_000201f0(0x14);
  *(undefined4 *)(local_c + 0x7c) = uVar1;
  if (*(int *)(local_c + 0x7c) == 0) {
    printf((char *)(DAT_000212e8 + 0x20fc0),DAT_000212e4 + 0x20fb8,0x153,DAT_000212e0 + 0x20fac,
           DAT_000212dc + 0x20fa0);
    uVar1 = 0xffffffff;
  }
  else {
    local_10 = strstr(param_2,(char *)(DAT_000212ec + 0x20fd4));
    if (local_10 == (char *)0x0) {
      printf((char *)(DAT_000212f8 + 0x21014),DAT_000212f4 + 0x2100c,0x159,DAT_000212f0 + 0x21000,
             param_2);
      FUN_00020234(*(undefined4 *)(local_c + 0x7c));
      *(undefined4 *)(local_c + 0x7c) = 0;
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = FUN_000203f0(DAT_000212fc + 0x2104c,3,local_10);
      **(undefined4 **)(local_c + 0x7c) = uVar1;
      local_10 = strstr(param_2,(char *)(DAT_00021300 + 0x2106c));
      if ((local_10 != (char *)0x0) &&
         (iVar2 = sscanf(local_10,(char *)(DAT_00021304 + 0x21098),&local_14), iVar2 == 1)) {
        *(uint *)(*(int *)(local_c + 0x7c) + 4) = *(uint *)(*(int *)(local_c + 0x7c) + 4) | 1;
        *(undefined4 *)(*(int *)(local_c + 0x7c) + 8) = local_14;
      }
      local_10 = strstr(param_2,(char *)(DAT_00021308 + 0x210e4));
      if (local_10 != (char *)0x0) {
        *(uint *)(*(int *)(local_c + 0x7c) + 4) = *(uint *)(*(int *)(local_c + 0x7c) + 4) | 2;
      }
      local_10 = strstr(param_2,(char *)(DAT_0002130c + 0x21124));
      if (local_10 != (char *)0x0) {
        *(uint *)(*(int *)(local_c + 0x7c) + 4) = *(uint *)(*(int *)(local_c + 0x7c) + 4) | 4;
      }
      local_10 = strstr(param_2,(char *)(DAT_00021310 + 0x21164));
      if ((local_10 != (char *)0x0) &&
         (iVar2 = sscanf(local_10,(char *)(DAT_00021314 + 0x21190),&local_14), iVar2 == 1)) {
        *(uint *)(*(int *)(local_c + 0x7c) + 4) = *(uint *)(*(int *)(local_c + 0x7c) + 4) | 8;
        *(short *)(*(int *)(local_c + 0x7c) + 0xc) = (short)local_14;
      }
      local_10 = strstr(param_2,(char *)(DAT_00021318 + 0x211e0));
      if ((local_10 != (char *)0x0) &&
         (iVar2 = sscanf(local_10,(char *)(DAT_0002131c + 0x2120c),&local_14), iVar2 == 1)) {
        *(uint *)(*(int *)(local_c + 0x7c) + 4) = *(uint *)(*(int *)(local_c + 0x7c) + 4) | 0x10;
        *(short *)(*(int *)(local_c + 0x7c) + 0xe) = (short)local_14;
      }
      local_10 = strstr(param_2,(char *)(DAT_00021320 + 0x2125c));
      if ((local_10 != (char *)0x0) &&
         (iVar2 = sscanf(local_10,(char *)(DAT_00021324 + 0x21288),&local_14), iVar2 == 1)) {
        *(uint *)(*(int *)(local_c + 0x7c) + 4) = *(uint *)(*(int *)(local_c + 0x7c) + 4) | 0x20;
        *(undefined1 *)(*(int *)(local_c + 0x7c) + 0x10) = (undefined1)local_14;
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ===== FUN_00021328 @ 00021328 size=1192 ===== */

char * FUN_00021328(int param_1,char *param_2,size_t param_3)

{
  undefined4 uVar1;
  size_t sVar2;
  size_t local_2c;
  char *local_14;
  
  if (*(int *)(param_1 + 0x80) == 0) {
    local_14 = (char *)0x0;
  }
  else {
    uVar1 = FUN_00020344(DAT_000217d0 + 0x21388,3,**(undefined4 **)(param_1 + 0x80));
    snprintf(param_2,param_3,(char *)(DAT_000217d4 + 0x2139c),uVar1);
    local_2c = strlen(param_2);
    local_14 = param_2 + local_2c;
    local_2c = param_3 - local_2c;
    if ((int)local_2c < 2) {
      local_14 = local_14 + -(int)param_2;
    }
    else {
      if ((*(uint *)(*(int *)(param_1 + 0x80) + 4) & 1) != 0) {
        snprintf(local_14,local_2c,(char *)(DAT_000217d8 + 0x21424),
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
          snprintf(local_14,local_2c,(char *)(DAT_000217e0 + 0x21518));
          sVar2 = strlen(local_14);
          local_14 = local_14 + sVar2;
          local_2c = local_2c - sVar2;
          if ((int)local_2c < 2) {
            return local_14 + -(int)param_2;
          }
        }
      }
      else {
        snprintf(local_14,local_2c,(char *)(DAT_000217dc + 0x2149c));
        sVar2 = strlen(local_14);
        local_14 = local_14 + sVar2;
        local_2c = local_2c - sVar2;
        if ((int)local_2c < 2) {
          return local_14 + -(int)param_2;
        }
      }
      if ((*(uint *)(*(int *)(param_1 + 0x80) + 4) & 8) != 0) {
        snprintf(local_14,local_2c,(char *)(DAT_000217e4 + 0x215bc),
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
        snprintf(local_14,local_2c,(char *)(DAT_000217e8 + 0x2165c),
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
        snprintf(local_14,local_2c,(char *)(DAT_000217ec + 0x216fc),
                 (uint)*(byte *)(*(int *)(param_1 + 0x80) + 0x10),
                 *(byte *)(*(int *)(param_1 + 0x80) + 0x10) + 1);
        sVar2 = strlen(local_14);
        local_14 = local_14 + sVar2;
        local_2c = local_2c - sVar2;
        if ((int)local_2c < 2) {
          return local_14 + -(int)param_2;
        }
      }
      snprintf(local_14,local_2c,(char *)(DAT_000217f0 + 0x2175c));
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



/* ===== FUN_0002181c @ 0002181c size=44 ===== */

undefined4 FUN_0002181c(void)

{
  return 0;
}



/* ===== FUN_00021870 @ 00021870 size=44 ===== */

undefined4 FUN_00021870(void)

{
  return 0;
}



/* ===== FUN_000218c4 @ 000218c4 size=44 ===== */

undefined4 FUN_000218c4(void)

{
  return 0;
}



/* ===== FUN_000218f0 @ 000218f0 size=312 ===== */

undefined4 FUN_000218f0(int param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x74) != 0) {
    FUN_00020234(*(undefined4 *)(param_1 + 0x74));
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  uVar1 = FUN_000201f0(4);
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  if (*(int *)(param_1 + 0x74) == 0) {
    printf((char *)(DAT_00021a34 + 0x2198c),DAT_00021a30 + 0x21984,0x201,DAT_00021a2c + 0x21978,
           DAT_00021a28 + 0x2196c);
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = sscanf(param_2,(char *)(DAT_00021a38 + 0x219ac),*(undefined4 *)(param_1 + 0x74));
    if (iVar2 == 1) {
      uVar1 = 0;
    }
    else {
      FUN_00020234(*(undefined4 *)(param_1 + 0x74));
      *(undefined4 *)(param_1 + 0x74) = 0;
      printf((char *)(DAT_00021a48 + 0x21a10),DAT_00021a44 + 0x21a08,0x201,DAT_00021a40 + 0x219fc,
             DAT_00021a3c + 0x219f0,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_00021a4c @ 00021a4c size=104 ===== */

size_t FUN_00021a4c(int param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  
  if (*(int *)(param_1 + 0x74) == 0) {
    sVar1 = 0;
  }
  else {
    snprintf(param_2,param_3,(char *)(DAT_00021ab4 + 0x21a90),**(undefined4 **)(param_1 + 0x74));
    sVar1 = strlen(param_2);
  }
  return sVar1;
}



/* ===== FUN_00021ab8 @ 00021ab8 size=312 ===== */

undefined4 FUN_00021ab8(int param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x7c) != 0) {
    FUN_00020234(*(undefined4 *)(param_1 + 0x7c));
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  uVar1 = FUN_000201f0(4);
  *(undefined4 *)(param_1 + 0x7c) = uVar1;
  if (*(int *)(param_1 + 0x7c) == 0) {
    printf((char *)(DAT_00021bfc + 0x21b54),DAT_00021bf8 + 0x21b4c,0x202,DAT_00021bf4 + 0x21b40,
           DAT_00021bf0 + 0x21b34);
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = sscanf(param_2,(char *)(DAT_00021c00 + 0x21b74),*(undefined4 *)(param_1 + 0x7c));
    if (iVar2 == 1) {
      uVar1 = 0;
    }
    else {
      FUN_00020234(*(undefined4 *)(param_1 + 0x7c));
      *(undefined4 *)(param_1 + 0x7c) = 0;
      printf((char *)(DAT_00021c10 + 0x21bd8),DAT_00021c0c + 0x21bd0,0x202,DAT_00021c08 + 0x21bc4,
             DAT_00021c04 + 0x21bb8,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_00021c14 @ 00021c14 size=104 ===== */

size_t FUN_00021c14(int param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  
  if (*(int *)(param_1 + 0x7c) == 0) {
    sVar1 = 0;
  }
  else {
    snprintf(param_2,param_3,(char *)(DAT_00021c7c + 0x21c58),**(undefined4 **)(param_1 + 0x7c));
    sVar1 = strlen(param_2);
  }
  return sVar1;
}



/* ===== FUN_00021c80 @ 00021c80 size=312 ===== */

undefined4 FUN_00021c80(int param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xa0) != 0) {
    FUN_00020234(*(undefined4 *)(param_1 + 0xa0));
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  uVar1 = FUN_000201f0(4);
  *(undefined4 *)(param_1 + 0xa0) = uVar1;
  if (*(int *)(param_1 + 0xa0) == 0) {
    printf((char *)(DAT_00021dc4 + 0x21d1c),DAT_00021dc0 + 0x21d14,0x203,DAT_00021dbc + 0x21d08,
           DAT_00021db8 + 0x21cfc);
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = sscanf(param_2,(char *)(DAT_00021dc8 + 0x21d3c),*(undefined4 *)(param_1 + 0xa0));
    if (iVar2 == 1) {
      uVar1 = 0;
    }
    else {
      FUN_00020234(*(undefined4 *)(param_1 + 0xa0));
      *(undefined4 *)(param_1 + 0xa0) = 0;
      printf((char *)(DAT_00021dd8 + 0x21da0),DAT_00021dd4 + 0x21d98,0x203,DAT_00021dd0 + 0x21d8c,
             DAT_00021dcc + 0x21d80,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_00021ddc @ 00021ddc size=104 ===== */

size_t FUN_00021ddc(int param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  
  if (*(int *)(param_1 + 0xa0) == 0) {
    sVar1 = 0;
  }
  else {
    snprintf(param_2,param_3,(char *)(DAT_00021e44 + 0x21e20),**(undefined4 **)(param_1 + 0xa0));
    sVar1 = strlen(param_2);
  }
  return sVar1;
}



/* ===== FUN_00021e48 @ 00021e48 size=548 ===== */

undefined4 FUN_00021e48(int param_1,byte *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint local_18;
  byte *local_14;
  
  iVar2 = DAT_0002206c + 0x21e68;
  local_18 = 0;
  if (*(int *)(param_1 + 0x9c) != 0) {
    FUN_00020234(*(undefined4 *)(param_1 + 0x9c));
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  uVar1 = FUN_000201f0(0x40);
  *(undefined4 *)(param_1 + 0x9c) = uVar1;
  local_14 = param_2;
  if (*(int *)(param_1 + 0x9c) == 0) {
    printf((char *)(DAT_0002207c + 0x21efc),DAT_00022078 + 0x21ef4,0x22d,DAT_00022074 + 0x21ee8,
           DAT_00022070 + 0x21edc);
    uVar1 = 0xffffffff;
  }
  else {
    for (; ((*(ushort *)(**(int **)(iVar2 + DAT_00022080) + (uint)*local_14 * 2) & 0x80) != 0 &&
           (*local_14 != 0x3a)); local_14 = local_14 + 1) {
    }
    if (*local_14 == 0x3a) {
      do {
        local_14 = local_14 + 1;
      } while (*local_14 == 0x20);
      while (((*(ushort *)(**(int **)(iVar2 + DAT_00022080) + (uint)*local_14 * 2) & 0x40) != 0 &&
             (local_18 < 0x3f))) {
        *(byte *)(*(int *)(param_1 + 0x9c) + local_18) = *local_14;
        local_18 = local_18 + 1;
        local_14 = local_14 + 1;
      }
      *(undefined1 *)(*(int *)(param_1 + 0x9c) + local_18) = 0;
      uVar1 = 0;
    }
    else {
      FUN_00020234(*(undefined4 *)(param_1 + 0x9c));
      *(undefined4 *)(param_1 + 0x9c) = 0;
      printf((char *)(DAT_00022090 + 0x21fac),DAT_0002208c + 0x21fa4,0x22d,DAT_00022088 + 0x21f98,
             DAT_00022084 + 0x21f8c,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_00022094 @ 00022094 size=100 ===== */

size_t FUN_00022094(int param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  
  if (*(int *)(param_1 + 0x9c) == 0) {
    sVar1 = 0;
  }
  else {
    snprintf(param_2,param_3,(char *)(DAT_000220f8 + 0x220d4),*(undefined4 *)(param_1 + 0x9c));
    sVar1 = strlen(param_2);
  }
  return sVar1;
}



/* ===== FUN_000220fc @ 000220fc size=548 ===== */

undefined4 FUN_000220fc(int param_1,byte *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint local_18;
  byte *local_14;
  
  iVar2 = DAT_00022320 + 0x2211c;
  local_18 = 0;
  if (*(int *)(param_1 + 0x90) != 0) {
    FUN_00020234(*(undefined4 *)(param_1 + 0x90));
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  uVar1 = FUN_000201f0(0x40);
  *(undefined4 *)(param_1 + 0x90) = uVar1;
  local_14 = param_2;
  if (*(int *)(param_1 + 0x90) == 0) {
    printf((char *)(DAT_00022330 + 0x221b0),DAT_0002232c + 0x221a8,0x22e,DAT_00022328 + 0x2219c,
           DAT_00022324 + 0x22190);
    uVar1 = 0xffffffff;
  }
  else {
    for (; ((*(ushort *)(**(int **)(iVar2 + DAT_00022334) + (uint)*local_14 * 2) & 0x80) != 0 &&
           (*local_14 != 0x3a)); local_14 = local_14 + 1) {
    }
    if (*local_14 == 0x3a) {
      do {
        local_14 = local_14 + 1;
      } while (*local_14 == 0x20);
      while (((*(ushort *)(**(int **)(iVar2 + DAT_00022334) + (uint)*local_14 * 2) & 0x40) != 0 &&
             (local_18 < 0x3f))) {
        *(byte *)(*(int *)(param_1 + 0x90) + local_18) = *local_14;
        local_18 = local_18 + 1;
        local_14 = local_14 + 1;
      }
      *(undefined1 *)(*(int *)(param_1 + 0x90) + local_18) = 0;
      uVar1 = 0;
    }
    else {
      FUN_00020234(*(undefined4 *)(param_1 + 0x90));
      *(undefined4 *)(param_1 + 0x90) = 0;
      printf((char *)(DAT_00022344 + 0x22260),DAT_00022340 + 0x22258,0x22e,DAT_0002233c + 0x2224c,
             DAT_00022338 + 0x22240,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_00022348 @ 00022348 size=100 ===== */

size_t FUN_00022348(int param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  
  if (*(int *)(param_1 + 0x90) == 0) {
    sVar1 = 0;
  }
  else {
    snprintf(param_2,param_3,(char *)(DAT_000223ac + 0x22388),*(undefined4 *)(param_1 + 0x90));
    sVar1 = strlen(param_2);
  }
  return sVar1;
}



/* ===== FUN_000223b0 @ 000223b0 size=548 ===== */

undefined4 FUN_000223b0(int param_1,byte *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint local_18;
  byte *local_14;
  
  iVar2 = DAT_000225d4 + 0x223d0;
  local_18 = 0;
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_00020234(*(undefined4 *)(param_1 + 0x78));
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  uVar1 = FUN_000201f0(0x20);
  *(undefined4 *)(param_1 + 0x78) = uVar1;
  local_14 = param_2;
  if (*(int *)(param_1 + 0x78) == 0) {
    printf((char *)(DAT_000225e4 + 0x22464),DAT_000225e0 + 0x2245c,0x22f,DAT_000225dc + 0x22450,
           DAT_000225d8 + 0x22444);
    uVar1 = 0xffffffff;
  }
  else {
    for (; ((*(ushort *)(**(int **)(iVar2 + DAT_000225e8) + (uint)*local_14 * 2) & 0x80) != 0 &&
           (*local_14 != 0x3a)); local_14 = local_14 + 1) {
    }
    if (*local_14 == 0x3a) {
      do {
        local_14 = local_14 + 1;
      } while (*local_14 == 0x20);
      while (((*(ushort *)(**(int **)(iVar2 + DAT_000225e8) + (uint)*local_14 * 2) & 0x40) != 0 &&
             (local_18 < 0x1f))) {
        *(byte *)(*(int *)(param_1 + 0x78) + local_18) = *local_14;
        local_18 = local_18 + 1;
        local_14 = local_14 + 1;
      }
      *(undefined1 *)(*(int *)(param_1 + 0x78) + local_18) = 0;
      uVar1 = 0;
    }
    else {
      FUN_00020234(*(undefined4 *)(param_1 + 0x78));
      *(undefined4 *)(param_1 + 0x78) = 0;
      printf((char *)(DAT_000225f8 + 0x22514),DAT_000225f4 + 0x2250c,0x22f,DAT_000225f0 + 0x22500,
             DAT_000225ec + 0x224f4,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_000225fc @ 000225fc size=100 ===== */

size_t FUN_000225fc(int param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  
  if (*(int *)(param_1 + 0x78) == 0) {
    sVar1 = 0;
  }
  else {
    snprintf(param_2,param_3,(char *)(DAT_00022660 + 0x2263c),*(undefined4 *)(param_1 + 0x78));
    sVar1 = strlen(param_2);
  }
  return sVar1;
}



/* ===== FUN_00022664 @ 00022664 size=648 ===== */

undefined4 FUN_00022664(int param_1,byte *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  int local_18;
  byte *local_14;
  
  iVar3 = DAT_000228ec + 0x22684;
  if (*(int *)(param_1 + 0xa4) != 0) {
    FUN_00020234(*(undefined4 *)(param_1 + 0xa4));
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  uVar1 = FUN_000201f0(4);
  *(undefined4 *)(param_1 + 0xa4) = uVar1;
  local_14 = param_2;
  if (*(int *)(param_1 + 0xa4) == 0) {
    printf((char *)(DAT_000228fc + 0x22720),DAT_000228f8 + 0x22718,0x264,DAT_000228f4 + 0x2270c,
           DAT_000228f0 + 0x22700);
  }
  else {
    for (; ((*(ushort *)(**(int **)(iVar3 + DAT_00022900) + (uint)*local_14 * 2) & 0x80) != 0 &&
           (*local_14 != 0x3a)); local_14 = local_14 + 1) {
    }
    if (*local_14 == 0x3a) {
      do {
        local_14 = local_14 + 1;
      } while (*local_14 == 0x20);
      for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
        if ((*(int *)(DAT_00022914 + local_18 * 0xc + 0x22820) != 0) &&
           (pcVar2 = strstr((char *)local_14,*(char **)(DAT_00022918 + local_18 * 0xc + 0x2284c)),
           pcVar2 != (char *)0x0)) {
          **(undefined4 **)(param_1 + 0xa4) =
               *(undefined4 *)(DAT_0002291c + 0x22888 + local_18 * 0xc);
          return 0;
        }
      }
      FUN_00020234(*(undefined4 *)(param_1 + 0xa4));
      *(undefined4 *)(param_1 + 0xa4) = 0;
    }
    else {
      FUN_00020234(*(undefined4 *)(param_1 + 0xa4));
      *(undefined4 *)(param_1 + 0xa4) = 0;
      printf((char *)(DAT_00022910 + 0x227d0),DAT_0002290c + 0x227c8,0x264,DAT_00022908 + 0x227bc,
             DAT_00022904 + 0x227b0,param_2);
    }
  }
  return 0xffffffff;
}



/* ===== FUN_00022920 @ 00022920 size=232 ===== */

size_t FUN_00022920(int param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  int local_c;
  
  if (*(int *)(param_1 + 0xa4) != 0) {
    for (local_c = 0; local_c < 4; local_c = local_c + 1) {
      if (**(int **)(param_1 + 0xa4) == *(int *)(DAT_00022a08 + 0x22974 + local_c * 0xc)) {
        snprintf(param_2,param_3,(char *)(DAT_00022a10 + 0x229bc),
                 *(undefined4 *)(DAT_00022a0c + local_c * 0xc + 0x229a4));
        sVar1 = strlen(param_2);
        return sVar1;
      }
    }
  }
  return 0;
}



/* ===== FUN_00022a14 @ 00022a14 size=636 ===== */

undefined4 FUN_00022a14(int param_1,byte *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  int local_18;
  byte *local_14;
  
  iVar3 = DAT_00022c90 + 0x22a34;
  if (*(int *)(param_1 + 0x94) != 0) {
    FUN_00020234(*(undefined4 *)(param_1 + 0x94));
    *(undefined4 *)(param_1 + 0x94) = 0;
  }
  uVar1 = FUN_000201f0(4);
  *(undefined4 *)(param_1 + 0x94) = uVar1;
  local_14 = param_2;
  if (*(int *)(param_1 + 0x94) == 0) {
    printf((char *)(DAT_00022ca0 + 0x22ad0),DAT_00022c9c + 0x22ac8,0x2ab,DAT_00022c98 + 0x22abc,
           DAT_00022c94 + 0x22ab0);
    uVar1 = 0xffffffff;
  }
  else {
    for (; ((*(ushort *)(**(int **)(iVar3 + DAT_00022ca4) + (uint)*local_14 * 2) & 0x80) != 0 &&
           (*local_14 != 0x3a)); local_14 = local_14 + 1) {
    }
    if (*local_14 == 0x3a) {
      do {
        local_14 = local_14 + 1;
      } while (*local_14 == 0x20);
      for (local_18 = 0; local_18 < 0xc; local_18 = local_18 + 1) {
        if ((*(int *)(DAT_00022cb8 + local_18 * 0xc + 0x22bd0) != 0) &&
           (pcVar2 = strstr((char *)local_14,*(char **)(DAT_00022cbc + local_18 * 0xc + 0x22bfc)),
           pcVar2 != (char *)0x0)) {
          **(uint **)(param_1 + 0x94) =
               **(uint **)(param_1 + 0x94) |
               1 << (*(uint *)(DAT_00022cc0 + 0x22c38 + local_18 * 0xc) & 0xff);
        }
      }
      uVar1 = 0;
    }
    else {
      FUN_00020234(*(undefined4 *)(param_1 + 0x94));
      *(undefined4 *)(param_1 + 0x94) = 0;
      printf((char *)(DAT_00022cb4 + 0x22b80),DAT_00022cb0 + 0x22b78,0x2ab,DAT_00022cac + 0x22b6c,
             DAT_00022ca8 + 0x22b60,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_00022cc4 @ 00022cc4 size=568 ===== */

char * FUN_00022cc4(int param_1,char *param_2,size_t param_3)

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
    snprintf(param_2,param_3,(char *)(DAT_00022f00 + 0x22d1c),DAT_00022efc + 0x22d14);
    local_2c = strlen(param_2);
    local_c = param_2 + local_2c;
    local_2c = param_3 - local_2c;
    if ((int)local_2c < 2) {
      local_c = local_c + -(int)param_2;
    }
    else {
      for (local_10 = 0; local_10 < 0xc; local_10 = local_10 + 1) {
        if ((**(uint **)(param_1 + 0x94) &
            1 << (*(uint *)(DAT_00022f04 + 0x22d90 + local_10 * 0xc) & 0xff)) != 0) {
          if (bVar1) {
            snprintf(local_c,local_2c,(char *)(DAT_00022f0c + 0x22df0),
                     *(undefined4 *)(DAT_00022f08 + local_10 * 0xc + 0x22dd8));
          }
          else {
            snprintf(local_c,local_2c,(char *)(DAT_00022f14 + 0x22e2c),
                     *(undefined4 *)(DAT_00022f10 + local_10 * 0xc + 0x22e14));
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
      snprintf(local_c,local_2c,(char *)(DAT_00022f18 + 0x22eb4));
      sVar2 = strlen(local_c);
      local_c = local_c + (sVar2 - (int)param_2);
    }
  }
  return local_c;
}



/* ===== FUN_00022f1c @ 00022f1c size=636 ===== */

undefined4 FUN_00022f1c(int param_1,byte *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  int local_18;
  byte *local_14;
  
  iVar3 = DAT_00023198 + 0x22f3c;
  if (*(int *)(param_1 + 0x88) != 0) {
    FUN_00020234(*(undefined4 *)(param_1 + 0x88));
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  uVar1 = FUN_000201f0(4);
  *(undefined4 *)(param_1 + 0x88) = uVar1;
  local_14 = param_2;
  if (*(int *)(param_1 + 0x88) == 0) {
    printf((char *)(DAT_000231a8 + 0x22fd8),DAT_000231a4 + 0x22fd0,0x2ac,DAT_000231a0 + 0x22fc4,
           DAT_0002319c + 0x22fb8);
    uVar1 = 0xffffffff;
  }
  else {
    for (; ((*(ushort *)(**(int **)(iVar3 + DAT_000231ac) + (uint)*local_14 * 2) & 0x80) != 0 &&
           (*local_14 != 0x3a)); local_14 = local_14 + 1) {
    }
    if (*local_14 == 0x3a) {
      do {
        local_14 = local_14 + 1;
      } while (*local_14 == 0x20);
      for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
        if ((*(int *)(DAT_000231c0 + local_18 * 0xc + 0x230d8) != 0) &&
           (pcVar2 = strstr((char *)local_14,*(char **)(DAT_000231c4 + local_18 * 0xc + 0x23104)),
           pcVar2 != (char *)0x0)) {
          **(uint **)(param_1 + 0x88) =
               **(uint **)(param_1 + 0x88) |
               1 << (*(uint *)(DAT_000231c8 + 0x23140 + local_18 * 0xc) & 0xff);
        }
      }
      uVar1 = 0;
    }
    else {
      FUN_00020234(*(undefined4 *)(param_1 + 0x88));
      *(undefined4 *)(param_1 + 0x88) = 0;
      printf((char *)(DAT_000231bc + 0x23088),DAT_000231b8 + 0x23080,0x2ac,DAT_000231b4 + 0x23074,
             DAT_000231b0 + 0x23068,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_000231cc @ 000231cc size=568 ===== */

char * FUN_000231cc(int param_1,char *param_2,size_t param_3)

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
    snprintf(param_2,param_3,(char *)(DAT_00023408 + 0x23224),DAT_00023404 + 0x2321c);
    local_2c = strlen(param_2);
    local_c = param_2 + local_2c;
    local_2c = param_3 - local_2c;
    if ((int)local_2c < 2) {
      local_c = local_c + -(int)param_2;
    }
    else {
      for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
        if ((**(uint **)(param_1 + 0x88) &
            1 << (*(uint *)(DAT_0002340c + 0x23298 + local_10 * 0xc) & 0xff)) != 0) {
          if (bVar1) {
            snprintf(local_c,local_2c,(char *)(DAT_00023414 + 0x232f8),
                     *(undefined4 *)(DAT_00023410 + local_10 * 0xc + 0x232e0));
          }
          else {
            snprintf(local_c,local_2c,(char *)(DAT_0002341c + 0x23334),
                     *(undefined4 *)(DAT_00023418 + local_10 * 0xc + 0x2331c));
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
      snprintf(local_c,local_2c,(char *)(DAT_00023420 + 0x233bc));
      sVar2 = strlen(local_c);
      local_c = local_c + (sVar2 - (int)param_2);
    }
  }
  return local_c;
}



/* ===== FUN_00023424 @ 00023424 size=192 ===== */

undefined4 FUN_00023424(char *param_1)

{
  int iVar1;
  int iVar2;
  int local_c;
  
  iVar2 = DAT_000234e4 + 0x23440;
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



/* ===== FUN_000234e8 @ 000234e8 size=276 ===== */

char * FUN_000234e8(char *param_1,void *param_2,int param_3)

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



/* ===== FUN_000235fc @ 000235fc size=60 ===== */

undefined4 FUN_000235fc(void *param_1)

{
  if (param_1 != (void *)0x0) {
    memset(param_1,0,0xac);
  }
  return 0;
}



/* ===== FUN_00023638 @ 00023638 size=428 ===== */

void FUN_00023638(void *param_1)

{
  if (*(int *)((int)param_1 + 0x74) != 0) {
    FUN_00020234(*(undefined4 *)((int)param_1 + 0x74));
  }
  if (*(int *)((int)param_1 + 0x78) != 0) {
    FUN_00020234(*(undefined4 *)((int)param_1 + 0x78));
  }
  if (*(int *)((int)param_1 + 0x7c) != 0) {
    FUN_00020234(*(undefined4 *)((int)param_1 + 0x7c));
  }
  if (*(int *)((int)param_1 + 0x80) != 0) {
    FUN_00020234(*(undefined4 *)((int)param_1 + 0x80));
  }
  if (*(int *)((int)param_1 + 0x84) != 0) {
    FUN_00020234(*(undefined4 *)((int)param_1 + 0x84));
  }
  if (*(int *)((int)param_1 + 0x88) != 0) {
    FUN_00020234(*(undefined4 *)((int)param_1 + 0x88));
  }
  if (*(int *)((int)param_1 + 0x90) != 0) {
    FUN_00020234(*(undefined4 *)((int)param_1 + 0x90));
  }
  if (*(int *)((int)param_1 + 0x94) != 0) {
    FUN_00020234(*(undefined4 *)((int)param_1 + 0x94));
  }
  if (*(int *)((int)param_1 + 0x9c) != 0) {
    FUN_00020234(*(undefined4 *)((int)param_1 + 0x9c));
  }
  if (*(int *)((int)param_1 + 0xa4) != 0) {
    FUN_00020234(*(undefined4 *)((int)param_1 + 0xa4));
  }
  if (*(int *)((int)param_1 + 0xa0) != 0) {
    FUN_00020234(*(undefined4 *)((int)param_1 + 0xa0));
  }
  if (*(int *)((int)param_1 + 0xa8) != 0) {
    FUN_00020234(*(undefined4 *)((int)param_1 + 0xa8));
  }
  memset(param_1,0,0xac);
  return;
}



/* ===== FUN_000237e4 @ 000237e4 size=52 ===== */

int FUN_000237e4(void)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_00023818 + 0x237f8);
  *(int *)(DAT_0002381c + 0x23808) = iVar1 + 1;
  return iVar1;
}



/* ===== FUN_00023820 @ 00023820 size=516 ===== */

char * FUN_00023820(char *param_1,int param_2)

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
  local_c = strstr(param_1,(char *)(DAT_00023a24 + 0x23858));
  if ((local_c == (char *)0x0) || (param_2 <= (int)(local_c + (1 - (int)local_10)))) {
    if (param_2 < 0x101) {
      pcVar2 = (char *)0x0;
    }
    else {
      pcVar2 = (char *)0xffffffff;
    }
  }
  else {
    local_14 = strstr(local_10,(char *)(DAT_00023a28 + 0x238b4));
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
        local_c = (char *)FUN_000234e8(local_c,0,0);
        if ((local_c == (char *)0x0) ||
           (iVar1 = strncmp(local_c,(char *)(DAT_00023a2c + 0x23934),2), iVar1 == 0)) {
          if (param_2 < (int)(local_14 + local_18)) {
            return (char *)0x0;
          }
          return local_14 + local_18;
        }
        iVar1 = strncmp(local_c,(char *)(DAT_00023a30 + 0x23958),0xe);
      } while ((iVar1 != 0) ||
              (iVar1 = sscanf(local_c,(char *)(DAT_00023a34 + 0x23980),&local_18), iVar1 == 1));
      printf((char *)(DAT_00023a40 + 0x239bc),DAT_00023a3c + 0x239b4,0x33d,DAT_00023a38 + 0x239a8,
             local_c);
      pcVar2 = (char *)0xffffffff;
    }
  }
  return pcVar2;
}



/* ===== FUN_00023a44 @ 00023a44 size=896 ===== */

int FUN_00023a44(undefined4 *param_1,char *param_2,int param_3)

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
      uVar1 = FUN_00020264(param_2 + 4,local_16);
      param_1[0x2a] = uVar1;
      iVar2 = local_16 + 4;
    }
    else {
      iVar2 = 0;
    }
  }
  else {
    pcVar3 = local_14;
    printf((char *)(DAT_00023dcc + 0x23b48),DAT_00023dc8 + 0x23b40,0x361,DAT_00023dc4 + 0x23b34,
           local_14);
    iVar2 = FUN_00023820(param_2,param_3);
    if (0 < iVar2) {
      local_10 = iVar2;
      local_c = (char *)FUN_000234e8(local_c,local_11c,0x100);
      if (local_c == (char *)0x0) {
        iVar2 = -1;
      }
      else {
        local_10 = FUN_000209a0(param_1,local_11c);
        if (local_10 < 0) {
          iVar2 = -1;
        }
        else {
          do {
            while( true ) {
              local_c = (char *)FUN_000234e8(local_c,local_11c,0x100);
              if ((local_c == (char *)0x0) || (local_11c[0] == '\0')) goto LAB_00023c9c;
              local_1c = (code *)FUN_00023424(local_11c);
              if (local_1c != (code *)0x0) break;
              pcVar3 = local_11c;
              printf((char *)(DAT_00023dd8 + 0x23c1c),DAT_00023dd4 + 0x23c14,0x378,
                     DAT_00023dd0 + 0x23c08,pcVar3);
            }
            local_10 = (*local_1c)(param_1,local_11c);
          } while (-1 < local_10);
          pcVar3 = local_11c;
          printf((char *)(DAT_00023de4 + 0x23c6c),DAT_00023de0 + 0x23c64,0x37e,
                 DAT_00023ddc + 0x23c58,pcVar3);
LAB_00023c9c:
          if ((local_c == (char *)0x0) || (local_11c[0] != '\0')) {
            FUN_00023638(param_1);
            iVar2 = -1;
          }
          else {
            if (param_1[0x28] != 0) {
              uVar1 = FUN_00020264(local_c,*(undefined4 *)param_1[0x28]);
              param_1[0x2a] = uVar1;
              if (param_1[0x2a] == 0) {
                printf((char *)(DAT_00023df0 + 0x23d2c),DAT_00023dec + 0x23d24,0x38b,
                       DAT_00023de8 + 0x23d18,pcVar3);
                FUN_00023638(param_1);
                return -1;
              }
            }
            local_10 = (int)local_c - (int)local_14;
            if (param_1[0x28] != 0) {
              local_10 = *(int *)param_1[0x28] + local_10;
            }
            if (local_10 != iVar2) {
              printf((char *)(DAT_00023dfc + 0x23db4),DAT_00023df8 + 0x23dac,0x396,
                     DAT_00023df4 + 0x23da0,iVar2,local_10);
            }
          }
        }
      }
    }
  }
  return iVar2;
}



/* ===== FUN_00023e00 @ 00023e00 size=2104 ===== */

int FUN_00023e00(int *param_1,undefined4 *param_2,int param_3)

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
    iVar2 = FUN_00020cf0(param_1,param_2,param_3);
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
          iVar2 = FUN_00021a4c(param_1,local_14,local_34);
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
          iVar2 = FUN_000225fc(param_1,local_14,local_34);
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
          iVar2 = FUN_00021c14(param_1,local_14,local_34);
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
          iVar2 = FUN_00021328(param_1,local_14,local_34);
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
          iVar2 = FUN_0002181c(param_1,local_14,local_34);
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
          iVar2 = FUN_000231cc(param_1,local_14,local_34);
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
          iVar2 = FUN_00021870(param_1,local_14,local_34);
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
          iVar2 = FUN_00022348(param_1,local_14,local_34);
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
          iVar2 = FUN_00022cc4(param_1,local_14,local_34);
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
          iVar2 = FUN_000218c4(param_1,local_14,local_34);
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
          iVar2 = FUN_00022094(param_1,local_14,local_34);
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
          iVar2 = FUN_00022920(param_1,local_14,local_34);
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
          iVar2 = FUN_00021ddc(param_1,local_14,local_34);
          if (iVar2 < 0) {
            return -1;
          }
          local_14 = local_14 + iVar2;
          local_34 = local_34 - iVar2;
          if ((int)local_34 < 2) {
            return (int)local_14 - (int)param_2;
          }
        }
        snprintf(local_14,local_34,(char *)(DAT_00024638 + 0x24530));
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
            printf((char *)(DAT_00024644 + 0x24620),DAT_00024640 + 0x24618,0x3e6,
                   DAT_0002463c + 0x2460c,param_2);
            local_34 = (int)local_14 - (int)param_2;
          }
        }
      }
    }
  }
  return local_34;
}



/* ===== FUN_00024648 @ 00024648 size=140 ===== */

undefined4 FUN_00024648(undefined4 *param_1,undefined4 param_2,char *param_3,char *param_4)

{
  *param_1 = 0;
  param_1[1] = param_2;
  param_1[2] = 0;
  strncpy((char *)((int)param_1 + 0xe),param_3,0x1f);
  strncpy((char *)((int)param_1 + 0x2e),param_4,0x3f);
  param_1[0x1c] = 0;
  return 0;
}



/* ===== FUN_000246d4 @ 000246d4 size=76 ===== */

undefined4 FUN_000246d4(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = 1;
  param_1[1] = 0;
  param_1[2] = param_2;
  return 0;
}



/* ===== FUN_00024720 @ 00024720 size=96 ===== */

undefined4 FUN_00024720(int param_1,undefined4 *param_2)

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



/* ===== FUN_00024780 @ 00024780 size=112 ===== */

undefined4 FUN_00024780(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x74) == 0) {
    uVar1 = FUN_000201f0(4);
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



/* ===== FUN_000247f0 @ 000247f0 size=96 ===== */

undefined4 FUN_000247f0(int param_1,undefined4 *param_2)

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



/* ===== FUN_00024850 @ 00024850 size=112 ===== */

undefined4 FUN_00024850(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x7c) == 0) {
    uVar1 = FUN_000201f0(4);
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



/* ===== FUN_000248c0 @ 000248c0 size=108 ===== */

undefined4 FUN_000248c0(int param_1,char *param_2,int param_3)

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



/* ===== FUN_0002492c @ 0002492c size=288 ===== */

undefined4 FUN_0002492c(int param_1,char *param_2)

{
  undefined4 uVar1;
  char *__src;
  char *__dest;
  int iVar2;
  time_t local_18;
  byte *local_14;
  
  iVar2 = DAT_00024a4c + 0x2494c;
  if (*(int *)(param_1 + 0x78) == 0) {
    uVar1 = FUN_000201f0(0x20);
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
      while ((*(ushort *)(**(int **)(iVar2 + DAT_00024a50) + (uint)*local_14 * 2) & 0x40) != 0) {
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



/* ===== FUN_00024a54 @ 00024a54 size=284 ===== */

undefined4 FUN_00024a54(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x80) == 0) {
    uVar1 = FUN_000201f0(0x14);
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



/* ===== FUN_00024b70 @ 00024b70 size=220 ===== */

undefined4 FUN_00024b70(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x80) == 0) {
    uVar1 = FUN_000201f0(0x14);
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



/* ===== FUN_00024c4c @ 00024c4c size=96 ===== */

undefined4 FUN_00024c4c(int param_1,undefined4 *param_2)

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



/* ===== FUN_00024cac @ 00024cac size=112 ===== */

undefined4 FUN_00024cac(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x88) == 0) {
    uVar1 = FUN_000201f0(4);
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



/* ===== FUN_00024d1c @ 00024d1c size=108 ===== */

undefined4 FUN_00024d1c(int param_1,char *param_2,int param_3)

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



/* ===== FUN_00024d88 @ 00024d88 size=168 ===== */

undefined4 FUN_00024d88(int param_1,char *param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x90) == 0) {
    uVar1 = FUN_000201f0(0x40);
    *(undefined4 *)(param_1 + 0x90) = uVar1;
  }
  if (*(int *)(param_1 + 0x90) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    if (param_2 == (char *)0x0) {
      strncpy(*(char **)(param_1 + 0x90),(char *)(DAT_00024e30 + 0x24e1c),0x3f);
    }
    else {
      strncpy(*(char **)(param_1 + 0x90),param_2,0x3f);
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_00024e94 @ 00024e94 size=112 ===== */

undefined4 FUN_00024e94(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x94) == 0) {
    uVar1 = FUN_000201f0(4);
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



/* ===== FUN_00024f04 @ 00024f04 size=108 ===== */

undefined4 FUN_00024f04(int param_1,char *param_2,int param_3)

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



/* ===== FUN_00024f70 @ 00024f70 size=168 ===== */

undefined4 FUN_00024f70(int param_1,char *param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar1 = FUN_000201f0(0x40);
    *(undefined4 *)(param_1 + 0x9c) = uVar1;
  }
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    if (param_2 == (char *)0x0) {
      strncpy(*(char **)(param_1 + 0x9c),(char *)(DAT_00025018 + 0x25004),0x3f);
    }
    else {
      strncpy(*(char **)(param_1 + 0x9c),param_2,0x3f);
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_00025080 @ 00025080 size=112 ===== */

undefined4 FUN_00025080(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xa4) == 0) {
    uVar1 = FUN_000201f0(4);
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



/* ===== FUN_00025154 @ 00025154 size=112 ===== */

undefined4 FUN_00025154(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xa0) == 0) {
    uVar1 = FUN_000201f0(4);
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



/* ===== FUN_000251c4 @ 000251c4 size=292 ===== */

int * FUN_000251c4(int param_1,int param_2)

{
  int *piVar1;
  
  if ((param_1 < 1) || (param_2 < 1)) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = calloc(1,param_2 * param_1 + param_2 * 4 + 0x18);
    if (piVar1 == (int *)0x0) {
      printf((char *)(DAT_000252f0 + 0x25258),DAT_000252ec + 0x25250,0x16,DAT_000252e8 + 0x25244);
      piVar1 = (int *)0x0;
    }
    else {
      printf((char *)(DAT_000252f4 + 0x25290),param_2 * param_1 + param_2 * 4 + 0x18);
      *piVar1 = param_1;
      piVar1[1] = param_2;
      piVar1[4] = (int)(piVar1 + 6);
      piVar1[5] = (int)(piVar1 + param_2 + 6);
    }
  }
  return piVar1;
}



/* ===== FUN_000252f8 @ 000252f8 size=176 ===== */

undefined4 FUN_000252f8(int *param_1,int param_2,int *param_3,int *param_4)

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



/* ===== FUN_000253a8 @ 000253a8 size=172 ===== */

undefined4 FUN_000253a8(int param_1,int param_2)

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



/* ===== FUN_00025454 @ 00025454 size=92 ===== */

undefined4 FUN_00025454(int param_1,int param_2)

{
  undefined4 extraout_r1;
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    FUN_00027a0c(param_2 + 1,*(undefined4 *)(param_1 + 4));
    uVar1 = extraout_r1;
  }
  return uVar1;
}



/* ===== FUN_000254b0 @ 000254b0 size=60 ===== */

undefined4 FUN_000254b0(int param_1)

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



/* ===== FUN_000254ec @ 000254ec size=60 ===== */

undefined4 FUN_000254ec(int param_1)

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



/* ===== FUN_00025528 @ 00025528 size=168 ===== */

undefined4 FUN_00025528(int param_1)

{
  int extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    FUN_00027a0c(*(int *)(param_1 + 0xc) + 1,*(undefined4 *)(param_1 + 4));
    if (extraout_r1 == *(int *)(param_1 + 8)) {
      uVar1 = 0xffffffff;
    }
    else {
      FUN_00027a0c(*(int *)(param_1 + 0xc) + 1,*(undefined4 *)(param_1 + 4));
      *(undefined4 *)(param_1 + 0xc) = extraout_r1_00;
      uVar1 = *(undefined4 *)(param_1 + 0xc);
    }
  }
  return uVar1;
}



/* ===== FUN_000255d0 @ 000255d0 size=136 ===== */

undefined4 FUN_000255d0(int param_1)

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
    FUN_00027a0c(*(int *)(param_1 + 8) + 1,*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 8) = extraout_r1;
    uVar1 = *(undefined4 *)(param_1 + 8);
  }
  return uVar1;
}



/* ===== FUN_00025658 @ 00025658 size=48 ===== */

void FUN_00025658(void *param_1)

{
  if (param_1 != (void *)0x0) {
    free(param_1);
  }
  return;
}



/* ===== FUN_00025688 @ 00025688 size=636 ===== */

undefined1 * FUN_00025688(undefined1 *param_1,int param_2,byte *param_3,uint param_4)

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
      *local_c = *(undefined1 *)(DAT_00025904 + 0x25790 + (uint)(bVar1 >> 2));
      local_c[1] = *(undefined1 *)(DAT_00025908 + 0x257b8 + ((uVar4 & 0x3f00000) >> 0x14));
      puVar3 = local_c + 3;
      local_c[2] = *(undefined1 *)
                    (DAT_0002590c + 0x257e0 + ((uVar4 | (uint)bVar2 << 8) >> 0xe & 0x3f));
      local_c = local_c + 4;
      *puVar3 = *(undefined1 *)(DAT_00025910 + 0x25808 + (((uint)bVar2 << 8 & 0x3f00) >> 8));
    }
    local_10 = 0;
    for (; local_18 != 0; local_18 = local_18 - 1) {
      local_10 = local_10 * 0x100 + (uint)*local_2c;
      local_14 = local_14 + 8;
      local_2c = local_2c + 1;
    }
    for (; 0 < (int)local_14; local_14 = local_14 - 6) {
      *local_c = *(undefined1 *)
                  (DAT_00025914 + 0x25898 + ((uint)(local_10 << 6) >> (local_14 & 0xff) & 0x3f));
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



/* ===== FUN_00025918 @ 00025918 size=476 ===== */

char * FUN_00025918(char *param_1,int param_2,int *param_3)

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



/* ===== FUN_00025af4 @ 00025af4 size=588 ===== */

bool FUN_00025af4(int param_1,int param_2,void *param_3)

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
           ) && (iVar1 = FUN_00025918(local_c,local_14,&local_20), iVar1 != 0))))) {
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
      printf((char *)(DAT_00025d48 + 0x25c44),DAT_00025d44 + 0x25c3c,0x86,DAT_00025d40 + 0x25c30,
             local_20);
      if (0x40 < (int)local_20) {
        local_20 = 0x40;
      }
      memcpy(param_3,local_10,local_20);
      *(size_t *)((int)param_3 + 0x80) = local_20;
      local_18 = local_18 + 1;
    }
    if (local_19 == 8) {
      printf((char *)(DAT_00025d54 + 0x25cbc),DAT_00025d50 + 0x25cb4,0x8e,DAT_00025d4c + 0x25ca8,
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



/* ===== FUN_00025d58 @ 00025d58 size=736 ===== */

bool FUN_00025d58(int param_1,int param_2,void *param_3)

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
         (iVar1 = FUN_00025918(local_c,local_14,&local_20), iVar1 != 0))) {
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
      printf((char *)(DAT_00026040 + 0x25ec0),DAT_0002603c + 0x25eb8,0xba,DAT_00026038 + 0x25eac,
             local_20);
      if (0x40 < (int)local_20) {
        local_20 = 0x40;
      }
      memcpy(param_3,local_10,local_20);
      *(size_t *)((int)param_3 + 0xc0) = local_20;
      local_18 = local_18 + 1;
    }
    if (local_19 == 0x21) {
      printf((char *)(DAT_0002604c + 0x25f38),DAT_00026048 + 0x25f30,0xc2,DAT_00026044 + 0x25f24,
             local_20);
      if (0x40 < (int)local_20) {
        local_20 = 0x40;
      }
      memcpy((void *)((int)param_3 + 0x40),local_10,local_20);
      *(size_t *)((int)param_3 + 0xc4) = local_20;
      local_18 = local_18 + 1;
    }
    if (local_19 == 0x22) {
      printf((char *)(DAT_00026058 + 0x25fb4),DAT_00026054 + 0x25fac,0xca,DAT_00026050 + 0x25fa0,
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



/* ===== FUN_0002605c @ 0002605c size=236 ===== */

undefined4 FUN_0002605c(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 != 4) {
    printf((char *)(DAT_00026150 + 0x260a0),DAT_0002614c + 0x26098,0xdb,DAT_00026148 + 0x2608c);
    return 0xffffffff;
  }
  iVar1 = *param_1;
  if (iVar1 == 24000) {
code_r0x0002612c:
    *param_3 = iVar1;
    uVar2 = 1;
  }
  else {
    if (iVar1 < 0x5dc1) {
      if (iVar1 == 16000) goto code_r0x0002612c;
    }
    else if ((iVar1 == 32000) || (iVar1 == 40000)) goto code_r0x0002612c;
    printf((char *)(DAT_0002615c + 0x26120),DAT_00026158 + 0x26118,0xe8,DAT_00026154 + 0x2610c);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== FUN_00026160 @ 00026160 size=56 ===== */

undefined4 FUN_00026160(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00025af4(param_1,param_2,param_3);
  return uVar1;
}



/* ===== FUN_00026198 @ 00026198 size=56 ===== */

undefined4 FUN_00026198(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00025d58(param_1,param_2,param_3);
  return uVar1;
}



/* ===== FUN_000261d0 @ 000261d0 size=556 ===== */

int FUN_000261d0(undefined4 param_1,undefined4 param_2,int param_3,char *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *local_c;
  
  iVar1 = sprintf(param_4,(char *)(DAT_000263fc + 0x26204),param_1);
  pcVar4 = param_4 + iVar1;
  iVar1 = sprintf(pcVar4,(char *)(DAT_00026400 + 0x2622c));
  iVar2 = sprintf(pcVar4 + iVar1,(char *)(DAT_00026404 + 0x2625c),param_1,param_2);
  local_c = pcVar4 + iVar1 + iVar2;
  if ((*(int *)(param_3 + 0x80) == 0) || (*(int *)(param_3 + 0x84) == 0)) {
    iVar1 = sprintf(local_c,(char *)(DAT_00026414 + 0x263c8),param_1);
    local_c = local_c + iVar1;
  }
  else {
    uVar5 = *(undefined4 *)(param_3 + 0x80);
    uVar6 = *(undefined4 *)(param_3 + 0x84);
    iVar1 = sprintf(local_c,(char *)(DAT_00026408 + 0x262d0),param_1);
    local_c = local_c + iVar1;
    FUN_00025688(local_c,param_5 - ((int)local_c - (int)param_4),param_3,uVar5);
    sVar3 = strlen(local_c);
    iVar1 = sprintf(local_c + sVar3,(char *)(DAT_0002640c + 0x26334));
    pcVar4 = local_c + sVar3 + iVar1;
    FUN_00025688(pcVar4,param_5 - ((int)pcVar4 - (int)param_4),param_3 + 0x40,uVar6);
    sVar3 = strlen(pcVar4);
    iVar1 = sprintf(pcVar4 + sVar3,(char *)(DAT_00026410 + 0x26398));
    local_c = pcVar4 + sVar3 + iVar1;
  }
  return (int)local_c - (int)param_4;
}



/* ===== FUN_00026418 @ 00026418 size=688 ===== */

int FUN_00026418(undefined4 param_1,undefined4 param_2,int param_3,char *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *local_c;
  
  iVar1 = sprintf(param_4,(char *)(DAT_000266c8 + 0x2644c),param_1);
  pcVar4 = param_4 + iVar1;
  iVar1 = sprintf(pcVar4,(char *)(DAT_000266cc + 0x26474));
  iVar2 = sprintf(pcVar4 + iVar1,(char *)(DAT_000266d0 + 0x264a4),param_1,param_2);
  local_c = pcVar4 + iVar1 + iVar2;
  if (((*(int *)(param_3 + 0xc0) != 0) && (*(int *)(param_3 + 0xc4) != 0)) &&
     (*(int *)(param_3 + 200) != 0)) {
    uVar5 = *(undefined4 *)(param_3 + 0xc0);
    uVar6 = *(undefined4 *)(param_3 + 0xc4);
    uVar7 = *(undefined4 *)(param_3 + 200);
    iVar1 = sprintf(local_c,(char *)(DAT_000266d4 + 0x26540),param_1);
    iVar2 = sprintf(local_c + iVar1,(char *)(DAT_000266d8 + 0x26568));
    pcVar4 = local_c + iVar1 + iVar2;
    FUN_00025688(pcVar4,param_5 - ((int)pcVar4 - (int)param_4),param_3,uVar5);
    sVar3 = strlen(pcVar4);
    iVar1 = sprintf(pcVar4 + sVar3,(char *)(DAT_000266dc + 0x265cc));
    pcVar4 = pcVar4 + sVar3 + iVar1;
    FUN_00025688(pcVar4,param_5 - ((int)pcVar4 - (int)param_4),param_3 + 0x40,uVar6);
    sVar3 = strlen(pcVar4);
    iVar1 = sprintf(pcVar4 + sVar3,(char *)(DAT_000266e0 + 0x26630));
    pcVar4 = pcVar4 + sVar3 + iVar1;
    FUN_00025688(pcVar4,param_5 - ((int)pcVar4 - (int)param_4),param_3 + 0x80,uVar7);
    sVar3 = strlen(pcVar4);
    iVar1 = sprintf(pcVar4 + sVar3,(char *)(DAT_000266e4 + 0x26694));
    local_c = pcVar4 + sVar3 + iVar1;
  }
  return (int)local_c - (int)param_4;
}



/* ===== FUN_000266e8 @ 000266e8 size=196 ===== */

char * FUN_000266e8(undefined4 param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  int iVar1;
  int iVar2;
  char *__s;
  
  iVar1 = sprintf(param_4,(char *)(DAT_000267ac + 0x2671c),param_1);
  __s = param_4 + iVar1;
  iVar1 = sprintf(__s,(char *)(DAT_000267b0 + 0x26744));
  iVar2 = sprintf(__s + iVar1,(char *)(DAT_000267b4 + 0x2677c),param_1,param_2,param_3);
  return __s + iVar1 + (iVar2 - (int)param_4);
}



/* ===== FUN_000267b8 @ 000267b8 size=196 ===== */

char * FUN_000267b8(undefined4 param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  int iVar1;
  int iVar2;
  char *__s;
  
  iVar1 = sprintf(param_4,(char *)(DAT_0002687c + 0x267ec),param_1);
  __s = param_4 + iVar1;
  iVar1 = sprintf(__s,(char *)(DAT_00026880 + 0x26814));
  iVar2 = sprintf(__s + iVar1,(char *)(DAT_00026884 + 0x2684c),param_1,param_2,param_3);
  return __s + iVar1 + (iVar2 - (int)param_4);
}



/* ===== FUN_00026888 @ 00026888 size=252 ===== */

char * FUN_00026888(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint *param_4,
                   char *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *__s;
  
  iVar1 = sprintf(param_5,(char *)(DAT_00026984 + 0x268bc),param_1);
  __s = param_5 + iVar1;
  iVar1 = sprintf(__s,(char *)(DAT_00026988 + 0x268e4));
  if (*param_4 == 0) {
    uVar3 = 0x20;
  }
  else {
    uVar3 = *param_4 / 1000;
  }
  iVar2 = sprintf(__s + iVar1,(char *)(DAT_0002698c + 0x26954),param_1,uVar3,param_2,param_3);
  return __s + iVar1 + (iVar2 - (int)param_5);
}



/* ===== FUN_00026990 @ 00026990 size=1436 ===== */

int FUN_00026990(byte *param_1,byte *param_2,size_t param_3,undefined4 param_4,uint param_5,
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
    __hostlong = FUN_00027a2c((int)lVar2,
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



/* ===== FUN_00026f2c @ 00026f2c size=1492 ===== */

int FUN_00026f2c(byte *param_1,byte *param_2,size_t param_3,undefined4 param_4,uint param_5,
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
    __hostlong = FUN_00027a2c((int)lVar3,
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



/* ===== FUN_00027500 @ 00027500 size=792 ===== */

int FUN_00027500(byte *param_1,void *param_2,size_t param_3,undefined4 param_4,uint param_5,
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
    __hostlong = FUN_00027a2c((int)lVar1,
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



/* ===== FUN_00027818 @ 00027818 size=80 ===== */

undefined4
FUN_00027818(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00027500(param_1,param_2,param_3,param_6,param_5,param_6,param_7,param_8);
  return uVar1;
}



/* ===== FUN_00027868 @ 00027868 size=168 ===== */

ulonglong FUN_00027868(uint param_1,uint param_2)

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



/* ===== FUN_00027910 @ 00027910 size=32 ===== */

void FUN_00027910(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_00027868();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_00027938 @ 00027938 size=196 ===== */

uint FUN_00027938(uint param_1,uint param_2)

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



/* ===== FUN_00027a0c @ 00027a0c size=48 ===== */

void FUN_00027a0c(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_00027938();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_00027a2c @ 00027a2c size=76 ===== */

void FUN_00027a2c(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  if (param_4 != 0 || param_3 != 0) {
    FUN_00027a78();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_00027a78 @ 00027a78 size=328 ===== */

undefined8 FUN_00027a78(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

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



/* ===== _fini @ 00027bc0 size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 0003e000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0003e010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_setMirrorFlip @ 0003e014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_setMirrorFlip(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_EnableMotionDeblur @ 0003e018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_EnableMotionDeblur(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_preInit_devBufCnt @ 0003e01c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_preInit_devBufCnt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::recvfrom @ 0003e020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recvfrom(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,socklen_t *__addr_len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 0003e024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_RGN_SetBitMap @ 0003e028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_RGN_SetBitMap(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_IVS_DestroyChn @ 0003e02c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_IVS_DestroyChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 0003e030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevAttr @ 0003e034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetDevAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetChnFrame @ 0003e038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetChnFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setlinebuf @ 0003e03c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void setlinebuf(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 0003e040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::accept @ 0003e044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int accept(int __fd,sockaddr *__addr,socklen_t *__addr_len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 0003e048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 0003e04c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 0003e050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcat @ 0003e054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 0003e058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_RGN_Create @ 0003e05c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_RGN_Create(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memmove @ 0003e060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_ae_setExpSwAttr @ 0003e064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_user_api2_ae_setExpSwAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::raise @ 0003e068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_TDE_Close @ 0003e06c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_TDE_Close(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 0003e070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_TDE_BeginJob @ 0003e074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_TDE_BeginJob(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 0003e078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_join @ 0003e07c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 0003e080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_IVS_GetResults @ 0003e084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_IVS_GetResults(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setenv @ 0003e088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setenv(char *__name,char *__value,int __replace)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableDev @ 0003e08c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_EnableDev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_DestroyPool @ 0003e090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_DestroyPool(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_RGN_DetachFromChn @ 0003e094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_RGN_DetachFromChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevAttr @ 0003e098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetDevAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 0003e09c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableDev @ 0003e0a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_DisableDev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_destroy @ 0003e0a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_destroy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_RGN_AttachToChn @ 0003e0a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_RGN_AttachToChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0003e0ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Bind @ 0003e0b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Bind(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChnExt @ 0003e0b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_EnableChnExt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ntohs @ 0003e0b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint16_t ntohs(uint16_t __netshort)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 0003e0bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_lock @ 0003e0c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::send @ 0003e0c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t send(int __fd,void *__buf,size_t __n,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_IVS_ReleaseResults @ 0003e0c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_IVS_ReleaseResults(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_start @ 0003e0cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_start(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_RGN_SetDisplayAttr @ 0003e0d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_RGN_SetDisplayAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetJpegParam @ 0003e0d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetJpegParam(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::recv @ 0003e0d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recv(int __fd,void *__buf,size_t __n,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_prepare @ 0003e0dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_prepare(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fseek @ 0003e0e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_deinit @ 0003e0e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_deinit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StartRecvFrame @ 0003e0e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_StartRecvFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt_long @ 0003e0ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void getopt_long(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetComboAttr @ 0003e0f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetComboAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_destroy @ 0003e0f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_MmzFlushCache @ 0003e0f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_MmzFlushCache(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 0003e0fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::listen @ 0003e100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int listen(int __fd,int __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_TDE_CancelJob @ 0003e104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_TDE_CancelJob(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sendto @ 0003e108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t sendto(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,socklen_t __addr_len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ctime @ 0003e10c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * ctime(time_t *__timer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SendFrame @ 0003e110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SendFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 0003e114 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 0003e118 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_CreatePool @ 0003e11c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_CreatePool(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_LOG @ 0003e120 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_LOG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::prctl @ 0003e124 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int prctl(int __option,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_create @ 0003e128 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_create(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 0003e12c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ROCKIVA_Init @ 0003e130 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ROCKIVA_Init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clock_gettime @ 0003e134 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strrchr @ 0003e138 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_unlock @ 0003e13c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetMjpegParam @ 0003e140 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetMjpegParam(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::socket @ 0003e144 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ROCKIVA_BA_Release @ 0003e148 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ROCKIVA_BA_Release(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_ae_getExpSwAttr @ 0003e14c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_user_api2_ae_getExpSwAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_init @ 0003e150 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ROCKIVA_SetFrameReleaseCallback @ 0003e154 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ROCKIVA_SetFrameReleaseCallback(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_aldch_v21_GetAttrib @ 0003e158 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_user_api2_aldch_v21_GetAttrib(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setsockopt @ 0003e15c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_IVS_GetChnAttr @ 0003e160 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_IVS_GetChnAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChn @ 0003e164 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_EnableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_getCamInfos @ 0003e168 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_getCamInfos(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_setMulCamConc @ 0003e16c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_setMulCamConc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId @ 0003e170 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::inet_ntoa @ 0003e174 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * inet_ntoa(in_addr __in)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::time @ 0003e178 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_QueryChnStatus @ 0003e17c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_QueryChnStatus(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChn @ 0003e180 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_DisableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_TDE_Open @ 0003e184 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_TDE_Open(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnWrapBufAttr @ 0003e188 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetChnWrapBufAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_stop @ 0003e18c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_stop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetEptz @ 0003e190 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetEptz(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetChnBufWrapAttr @ 0003e194 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetChnBufWrapAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2Fd @ 0003e198 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_Handle2Fd(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_TDE_QuickCopy @ 0003e19c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_TDE_QuickCopy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fcntl @ 0003e1a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fcntl(int __fd,int __cmd,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_EnableSvc @ 0003e1a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_EnableSvc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetRcParam @ 0003e1a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetRcParam(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_switch_scene @ 0003e1ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_switch_scene(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm @ 0003e1b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::htonl @ 0003e1b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint32_t htonl(uint32_t __hostlong)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevIsEnable @ 0003e1b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetDevIsEnable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::signal @ 0003e1bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen64 @ 0003e1c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_create @ 0003e1c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StopRecvFrame @ 0003e1c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_StopRecvFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::htons @ 0003e1cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint16_t htons(uint16_t __hostshort)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_GetMB @ 0003e1d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_GetMB(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::select @ 0003e1d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fileno @ 0003e1d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fileno(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 0003e1dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fsync @ 0003e1e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fsync(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 0003e1e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Exit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ROCKIVA_BA_Init @ 0003e1e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ROCKIVA_BA_Init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_aldch_v21_SetAttrib @ 0003e1ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_user_api2_aldch_v21_SetAttrib(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 0003e1f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usleep @ 0003e1f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 0003e1f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_RGN_Destroy @ 0003e1fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_RGN_Destroy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_prepare @ 0003e200 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_prepare(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnAttr @ 0003e204 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetChnAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_ReleaseChnFrame @ 0003e208 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_ReleaseChnFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_TDE_EndJob @ 0003e20c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_TDE_EndJob(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 0003e210 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_GetStream @ 0003e214 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_GetStream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_start @ 0003e218 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_start(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::system @ 0003e21c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int system(char *__command)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChnExt @ 0003e220 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_DisableChnExt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sleep @ 0003e224 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 0003e228 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 0003e22c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_Handle2VirAddr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strstr @ 0003e230 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sscanf @ 0003e234 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_RGN_GetDisplayAttr @ 0003e238 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_RGN_GetDisplayAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevBindPipe @ 0003e23c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetDevBindPipe(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_UnBind @ 0003e240 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_UnBind(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_ChnSaveFile @ 0003e244 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_ChnSaveFile(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 0003e248 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gettimeofday @ 0003e24c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_ReleaseMB @ 0003e250 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_ReleaseMB(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 0003e254 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetChnRefBufShareAttr @ 0003e258 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetChnRefBufShareAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fread @ 0003e25c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_stop @ 0003e260 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_stop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::bind @ 0003e264 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_TDE_WaitForDone @ 0003e268 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_TDE_WaitForDone(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_IVS_CreateChn @ 0003e26c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_IVS_CreateChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_DestroyChn @ 0003e270 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_DestroyChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ROCKIVA_PushFrame @ 0003e274 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ROCKIVA_PushFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 0003e278 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_CAL_TDE_GetPicBufferSize @ 0003e27c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_CAL_TDE_GetPicBufferSize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_init @ 0003e280 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_CreateChn @ 0003e284 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_CreateChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ROCKIVA_Release @ 0003e288 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ROCKIVA_Release(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_ReleaseStream @ 0003e28c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_ReleaseStream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


