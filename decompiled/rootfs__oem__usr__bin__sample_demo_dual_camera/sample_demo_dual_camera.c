// sample_demo_dual_camera — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 000121fc size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 00012220 size=12 ===== */

void RK_MPI_SYS_Exit(void)

{
  (*(code *)PTR_RK_MPI_SYS_Exit_0003800c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Bind @ 0001222c size=12 ===== */

void RK_MPI_SYS_Bind(void)

{
  (*(code *)PTR_RK_MPI_SYS_Bind_00038010)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm @ 00012238 size=12 ===== */

void rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm_00038014)();
  return;
}



/* ===== <EXTERNAL>::bind @ 00012244 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_bind_00038018)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_QueryChnStatus @ 00012250 size=12 ===== */

void RK_MPI_VI_QueryChnStatus(void)

{
  (*(code *)PTR_RK_MPI_VI_QueryChnStatus_0003801c)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 0001225c size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00038020)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnWrapBufAttr @ 00012268 size=12 ===== */

void RK_MPI_VI_SetChnWrapBufAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetChnWrapBufAttr_00038024)();
  return;
}



/* ===== <EXTERNAL>::htons @ 00012274 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint16_t htons(uint16_t __hostshort)

{
  uint16_t uVar1;
  
  uVar1 = (*(code *)PTR_htons_00038028)(__hostshort);
  return uVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_GetStream @ 00012280 size=12 ===== */

void RK_MPI_VENC_GetStream(void)

{
  (*(code *)PTR_RK_MPI_VENC_GetStream_0003802c)();
  return;
}



/* ===== <EXTERNAL>::calloc @ 0001228c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_00038030)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 00012298 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00038034)();
  return piVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_EnableMotionDeblur @ 000122a4 size=12 ===== */

void RK_MPI_VENC_EnableMotionDeblur(void)

{
  (*(code *)PTR_RK_MPI_VENC_EnableMotionDeblur_00038038)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetComboAttr @ 000122b0 size=12 ===== */

void RK_MPI_VENC_SetComboAttr(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetComboAttr_0003803c)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_destroy @ 000122bc size=12 ===== */

void rk_aiq_uapi2_camgroup_destroy(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_destroy_00038040)();
  return;
}



/* ===== <EXTERNAL>::clock_gettime @ 000122c8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_clock_gettime_00038044)(__clock_id);
  return iVar1;
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_ae_setExpSwAttr @ 000122d4 size=12 ===== */

void rk_aiq_user_api2_ae_setExpSwAttr(void)

{
  (*(code *)PTR_rk_aiq_user_api2_ae_setExpSwAttr_00038048)();
  return;
}



/* ===== <EXTERNAL>::ROCKIVA_PushFrame @ 000122e0 size=12 ===== */

void ROCKIVA_PushFrame(void)

{
  (*(code *)PTR_ROCKIVA_PushFrame_0003804c)();
  return;
}



/* ===== <EXTERNAL>::system @ 000122ec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int system(char *__command)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_system_00038050)(__command);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChn @ 00012304 size=12 ===== */

void RK_MPI_VI_DisableChn(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableChn_00038058)();
  return;
}



/* ===== <EXTERNAL>::usleep @ 00012310 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_usleep_0003805c)(__useconds);
  return iVar1;
}



/* ===== <EXTERNAL>::memcpy @ 0001231c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00038060)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_setMulCamConc @ 00012328 size=12 ===== */

void rk_aiq_uapi2_sysctl_setMulCamConc(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_setMulCamConc_00038064)();
  return;
}



/* ===== <EXTERNAL>::sleep @ 00012334 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_sleep_00038068)(__seconds);
  return uVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_CreateChn @ 00012340 size=12 ===== */

void RK_MPI_VENC_CreateChn(void)

{
  (*(code *)PTR_RK_MPI_VENC_CreateChn_0003806c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_ReleaseChnFrame @ 0001234c size=12 ===== */

void RK_MPI_VI_ReleaseChnFrame(void)

{
  (*(code *)PTR_RK_MPI_VI_ReleaseChnFrame_00038070)();
  return;
}



/* ===== <EXTERNAL>::send @ 00012358 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t send(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_send_00038074)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2Fd @ 00012364 size=12 ===== */

void RK_MPI_MB_Handle2Fd(void)

{
  (*(code *)PTR_RK_MPI_MB_Handle2Fd_00038078)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_create @ 00012370 size=12 ===== */

void rk_aiq_uapi2_camgroup_create(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_create_0003807c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_GetMB @ 0001237c size=12 ===== */

void RK_MPI_MB_GetMB(void)

{
  (*(code *)PTR_RK_MPI_MB_GetMB_00038080)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_EnableSvc @ 00012388 size=12 ===== */

void RK_MPI_VENC_EnableSvc(void)

{
  (*(code *)PTR_RK_MPI_VENC_EnableSvc_00038084)();
  return;
}



/* ===== <EXTERNAL>::gettimeofday @ 00012394 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_gettimeofday_00038088)(__tv);
  return iVar1;
}



/* ===== <EXTERNAL>::strcat @ 000123a0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcat_0003808c)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevAttr @ 000123ac size=12 ===== */

void RK_MPI_VI_GetDevAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_GetDevAttr_00038090)();
  return;
}



/* ===== <EXTERNAL>::ROCKIVA_BA_Init @ 000123b8 size=12 ===== */

void ROCKIVA_BA_Init(void)

{
  (*(code *)PTR_ROCKIVA_BA_Init_00038094)();
  return;
}



/* ===== <EXTERNAL>::setenv @ 000123c4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setenv(char *__name,char *__value,int __replace)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setenv_00038098)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::malloc @ 000123d0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0003809c)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_aldch_v21_SetAttrib @ 000123dc size=12 ===== */

void rk_aiq_user_api2_aldch_v21_SetAttrib(void)

{
  (*(code *)PTR_rk_aiq_user_api2_aldch_v21_SetAttrib_000380a0)();
  return;
}



/* ===== <EXTERNAL>::ROCKIVA_BA_Release @ 000123e8 size=12 ===== */

void ROCKIVA_BA_Release(void)

{
  (*(code *)PTR_ROCKIVA_BA_Release_000380a4)();
  return;
}



/* ===== <EXTERNAL>::ROCKIVA_Release @ 000123f4 size=12 ===== */

void ROCKIVA_Release(void)

{
  (*(code *)PTR_ROCKIVA_Release_000380a8)();
  return;
}



/* ===== <EXTERNAL>::strrchr @ 00012400 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strrchr_000380ac)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::strncmp @ 0001240c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_000380b0)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::fopen64 @ 00012424 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen64_000380b8)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_setMirrorFlip @ 00012430 size=12 ===== */

void rk_aiq_uapi2_setMirrorFlip(void)

{
  (*(code *)PTR_rk_aiq_uapi2_setMirrorFlip_000380bc)();
  return;
}



/* ===== <EXTERNAL>::setlinebuf @ 0001243c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void setlinebuf(FILE *__stream)

{
  (*(code *)PTR_setlinebuf_000380c0)(__stream);
  return;
}



/* ===== <EXTERNAL>::recv @ 00012448 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recv(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_recv_000380c4)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::strlen @ 00012454 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_000380c8)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::pthread_mutex_lock @ 00012460 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_000380cc)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::ctime @ 0001246c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * ctime(time_t *__timer)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_ctime_000380d0)(__timer);
  return pcVar1;
}



/* ===== <EXTERNAL>::sendto @ 00012478 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t sendto(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,socklen_t __addr_len)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_sendto_000380d4)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::fcntl @ 00012484 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fcntl(int __fd,int __cmd,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fcntl_000380d8)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::snprintf @ 00012490 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_000380dc)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::htonl @ 0001249c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint32_t htonl(uint32_t __hostlong)

{
  uint32_t uVar1;
  
  uVar1 = (*(code *)PTR_htonl_000380e0)(__hostlong);
  return uVar1;
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_aldch_v21_GetAttrib @ 000124a8 size=12 ===== */

void rk_aiq_user_api2_aldch_v21_GetAttrib(void)

{
  (*(code *)PTR_rk_aiq_user_api2_aldch_v21_GetAttrib_000380e4)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnAttr @ 000124b4 size=12 ===== */

void RK_MPI_VI_SetChnAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetChnAttr_000380e8)();
  return;
}



/* ===== <EXTERNAL>::select @ 000124c0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_select_000380ec)(__nfds);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_UnBind @ 000124cc size=12 ===== */

void RK_MPI_SYS_UnBind(void)

{
  (*(code *)PTR_RK_MPI_SYS_UnBind_000380f0)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SendFrame @ 000124d8 size=12 ===== */

void RK_MPI_VENC_SendFrame(void)

{
  (*(code *)PTR_RK_MPI_VENC_SendFrame_000380f4)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetChnRefBufShareAttr @ 000124e4 size=12 ===== */

void RK_MPI_VENC_SetChnRefBufShareAttr(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetChnRefBufShareAttr_000380f8)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_prepare @ 000124f0 size=12 ===== */

void rk_aiq_uapi2_camgroup_prepare(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_prepare_000380fc)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 000124fc size=12 ===== */

void RK_MPI_SYS_Init(void)

{
  (*(code *)PTR_RK_MPI_SYS_Init_00038100)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId @ 00012508 size=12 ===== */

void rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId_00038104)();
  return;
}



/* ===== <EXTERNAL>::memmove @ 00012514 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_00038108)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::fclose @ 00012520 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_0003810c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::setsockopt @ 0001252c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setsockopt_00038110)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::fread @ 00012538 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fread_00038114)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::RK_LOG @ 00012544 size=12 ===== */

void RK_LOG(void)

{
  (*(code *)PTR_RK_LOG_00038118)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_getCamInfos @ 00012550 size=12 ===== */

void rk_aiq_uapi2_camgroup_getCamInfos(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_getCamInfos_0003811c)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_start @ 0001255c size=12 ===== */

void rk_aiq_uapi2_camgroup_start(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_start_00038120)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StopRecvFrame @ 00012568 size=12 ===== */

void RK_MPI_VENC_StopRecvFrame(void)

{
  (*(code *)PTR_RK_MPI_VENC_StopRecvFrame_00038124)();
  return;
}



/* ===== <EXTERNAL>::time @ 00012574 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_00038128)(__timer);
  return tVar1;
}



/* ===== <EXTERNAL>::pthread_create @ 00012580 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_0003812c)(__newthread);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetRcParam @ 0001258c size=12 ===== */

void RK_MPI_VENC_SetRcParam(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetRcParam_00038130)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChnExt @ 00012598 size=12 ===== */

void RK_MPI_VI_DisableChnExt(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableChnExt_00038134)();
  return;
}



/* ===== <EXTERNAL>::close @ 000125a4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_00038138)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetChnFrame @ 000125b0 size=12 ===== */

void RK_MPI_VI_GetChnFrame(void)

{
  (*(code *)PTR_RK_MPI_VI_GetChnFrame_0003813c)();
  return;
}



/* ===== <EXTERNAL>::sigaction @ 000125bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigaction(int __sig,sigaction *__act,sigaction *__oact)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sigaction_00038140)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChnExt @ 000125c8 size=12 ===== */

void RK_MPI_VI_EnableChnExt(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableChnExt_00038144)();
  return;
}



/* ===== <EXTERNAL>::sscanf @ 000125d4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sscanf_00038148)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::strncpy @ 000125e0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_0003814c)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetChnBufWrapAttr @ 000125ec size=12 ===== */

void RK_MPI_VENC_SetChnBufWrapAttr(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetChnBufWrapAttr_00038150)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevBindPipe @ 000125f8 size=12 ===== */

void RK_MPI_VI_SetDevBindPipe(void)

{
  (*(code *)PTR_RK_MPI_VI_SetDevBindPipe_00038154)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_prepare @ 00012604 size=12 ===== */

void rk_aiq_uapi2_sysctl_prepare(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_prepare_00038158)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevIsEnable @ 00012610 size=12 ===== */

void RK_MPI_VI_GetDevIsEnable(void)

{
  (*(code *)PTR_RK_MPI_VI_GetDevIsEnable_0003815c)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_init @ 0001261c size=12 ===== */

void rk_aiq_uapi2_sysctl_init(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_init_00038160)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableDev @ 00012628 size=12 ===== */

void RK_MPI_VI_EnableDev(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableDev_00038164)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_start @ 00012634 size=12 ===== */

void rk_aiq_uapi2_sysctl_start(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_start_00038168)();
  return;
}



/* ===== <EXTERNAL>::memset @ 00012640 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0003816c)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::inet_ntoa @ 0001264c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * inet_ntoa(in_addr __in)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_inet_ntoa_00038170)(__in.s_addr);
  return pcVar1;
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_ae_getExpSwAttr @ 00012658 size=12 ===== */

void rk_aiq_user_api2_ae_getExpSwAttr(void)

{
  (*(code *)PTR_rk_aiq_user_api2_ae_getExpSwAttr_00038174)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_preInit_devBufCnt @ 00012664 size=12 ===== */

void rk_aiq_uapi2_sysctl_preInit_devBufCnt(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_preInit_devBufCnt_00038178)();
  return;
}



/* ===== <EXTERNAL>::ROCKIVA_Init @ 00012670 size=12 ===== */

void ROCKIVA_Init(void)

{
  (*(code *)PTR_ROCKIVA_Init_0003817c)();
  return;
}



/* ===== <EXTERNAL>::fprintf @ 0001267c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00038180)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::ntohs @ 00012688 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint16_t ntohs(uint16_t __netshort)

{
  uint16_t uVar1;
  
  uVar1 = (*(code *)PTR_ntohs_00038184)(__netshort);
  return uVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_ChnSaveFile @ 00012694 size=12 ===== */

void RK_MPI_VI_ChnSaveFile(void)

{
  (*(code *)PTR_RK_MPI_VI_ChnSaveFile_00038188)();
  return;
}



/* ===== <EXTERNAL>::abort @ 000126a0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_0003818c)();
  return;
}



/* ===== <EXTERNAL>::recvfrom @ 000126ac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recvfrom(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,socklen_t *__addr_len)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_recvfrom_00038190)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::sigemptyset @ 000126b8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigemptyset(sigset_t *__set)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sigemptyset_00038194)(__set);
  return iVar1;
}



/* ===== <EXTERNAL>::sprintf @ 000126c4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_00038198)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_MmzFlushCache @ 000126d0 size=12 ===== */

void RK_MPI_SYS_MmzFlushCache(void)

{
  (*(code *)PTR_RK_MPI_SYS_MmzFlushCache_0003819c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StartRecvFrame @ 000126dc size=12 ===== */

void RK_MPI_VENC_StartRecvFrame(void)

{
  (*(code *)PTR_RK_MPI_VENC_StartRecvFrame_000381a0)();
  return;
}



/* ===== <EXTERNAL>::socket @ 000126e8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_socket_000381a4)(__domain);
  return iVar1;
}



/* ===== <EXTERNAL>::fseek @ 000126f4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fseek_000381a8)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 00012700 size=12 ===== */

void RK_MPI_MB_Handle2VirAddr(void)

{
  (*(code *)PTR_RK_MPI_MB_Handle2VirAddr_000381ac)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_ReleaseMB @ 0001270c size=12 ===== */

void RK_MPI_MB_ReleaseMB(void)

{
  (*(code *)PTR_RK_MPI_MB_ReleaseMB_000381b0)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_DestroyChn @ 00012718 size=12 ===== */

void RK_MPI_VENC_DestroyChn(void)

{
  (*(code *)PTR_RK_MPI_VENC_DestroyChn_000381b4)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetMjpegParam @ 00012724 size=12 ===== */

void RK_MPI_VENC_SetMjpegParam(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetMjpegParam_000381b8)();
  return;
}



/* ===== <EXTERNAL>::pthread_mutex_unlock @ 00012730 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_000381bc)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_deinit @ 0001273c size=12 ===== */

void rk_aiq_uapi2_sysctl_deinit(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_deinit_000381c0)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_stop @ 00012748 size=12 ===== */

void rk_aiq_uapi2_sysctl_stop(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_stop_000381c4)();
  return;
}



/* ===== <EXTERNAL>::raise @ 00012754 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_000381c8)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::strstr @ 00012760 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strstr_000381cc)(__haystack);
  return pcVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_ReleaseStream @ 0001276c size=12 ===== */

void RK_MPI_VENC_ReleaseStream(void)

{
  (*(code *)PTR_RK_MPI_VENC_ReleaseStream_000381d0)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetEptz @ 00012778 size=12 ===== */

void RK_MPI_VI_SetEptz(void)

{
  (*(code *)PTR_RK_MPI_VI_SetEptz_000381d4)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevAttr @ 00012784 size=12 ===== */

void RK_MPI_VI_SetDevAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetDevAttr_000381d8)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChn @ 00012790 size=12 ===== */

void RK_MPI_VI_EnableChn(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableChn_000381dc)();
  return;
}



/* ===== <EXTERNAL>::accept @ 0001279c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int accept(int __fd,sockaddr *__addr,socklen_t *__addr_len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_accept_000381e0)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 000127a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_000381e4)(__ptr);
  return;
}



/* ===== <EXTERNAL>::atoi @ 000127b4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_000381e8)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetJpegParam @ 000127c0 size=12 ===== */

void RK_MPI_VENC_SetJpegParam(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetJpegParam_000381ec)();
  return;
}



/* ===== <EXTERNAL>::strerror @ 000127cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_000381f0)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::listen @ 000127d8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int listen(int __fd,int __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_listen_000381f4)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::printf @ 000127e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_000381f8)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::getopt_long @ 000127f0 size=12 ===== */

void getopt_long(void)

{
  (*(code *)PTR_getopt_long_000381fc)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableDev @ 000127fc size=12 ===== */

void RK_MPI_VI_DisableDev(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableDev_00038200)();
  return;
}



/* ===== <EXTERNAL>::puts @ 00012808 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00038204)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_stop @ 00012814 size=12 ===== */

void rk_aiq_uapi2_camgroup_stop(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_stop_00038208)();
  return;
}



/* ===== <EXTERNAL>::signal @ 00012820 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = (__sighandler_t)(*(code *)PTR_signal_0003820c)(__sig);
  return p_Var1;
}



/* ===== <EXTERNAL>::strcpy @ 0001282c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_00038210)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00012838 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00038214)();
  return;
}



/* ===== <EXTERNAL>::pthread_join @ 00012844 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_00038218)(__th);
  return iVar1;
}



/* ===== entry @ 00013240 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_000380b4)
            (DAT_00013274,param_2,&stack0x00000004,DAT_00013278,DAT_00013270,param_1);
  return;
}



/* ===== FUN_0001327c @ 0001327c size=32 ===== */

void FUN_0001327c(void)

{
  if (DAT_000132a0 == DAT_0001329c) {
    return;
  }
  if (DAT_000132a4 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00013298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000132a4)();
  return;
}



/* ===== _FINI_0 @ 000132e0 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_0001331c;
  if (*DAT_0001331c != '\0') {
    return;
  }
  FUN_0001327c();
  if (DAT_00013320 != 0) {
    __deregister_frame_info(DAT_00013324);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00013328 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_0001334c != 0) {
    __register_frame_info(DAT_00013354,DAT_00013350);
  }
  if ((DAT_000132d8 - DAT_000132d4 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_000132dc == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000132d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000132dc)();
  return;
}



/* ===== FUN_00013370 @ 00013370 size=136 ===== */

void FUN_00013370(undefined4 param_1)

{
  puts(DAT_000133f8);
  printf(DAT_000133fc,param_1);
  puts(DAT_00013400);
  puts(DAT_00013404);
  puts(DAT_00013408);
  puts(DAT_0001340c);
  puts(DAT_00013410);
  puts(DAT_00013414);
  puts(DAT_00013418);
  puts(DAT_0001341c);
  puts(DAT_00013420);
  puts(DAT_00013424);
  puts(DAT_00013428);
  puts(DAT_0001342c);
  puts(DAT_00013430);
  return;
}



/* ===== FUN_00013434 @ 00013434 size=292 ===== */

undefined4 FUN_00013434(int param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 local_1c;
  
  uVar3 = DAT_00013560;
  uVar2 = DAT_0001355c;
  pcVar1 = DAT_00013558;
  iVar5 = 0;
  printf(DAT_00013568,DAT_00013564,param_1);
  local_1c = 0;
  do {
    if (*pcVar1 != '\0') {
      return 0;
    }
    iVar4 = FUN_00014df0(param_1,&local_1c);
    if (iVar4 == 0) {
      RK_LOG(5,uVar3,DAT_0001356c,uVar2,0xc2,*(undefined4 *)(param_1 + 0x48),iVar5,
             *(undefined4 *)(*(int *)(param_1 + 0xe0) + 4));
      if (0 < *(int *)(param_1 + 0x38) && *(int *)(param_1 + 0x38) <= iVar5) {
        FUN_00014e78(param_1);
        *pcVar1 = '\x01';
        return 0;
      }
      iVar5 = iVar5 + 1;
      FUN_00014290(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(*(int *)(param_1 + 0xe0) + 4));
      pthread_mutex_lock(DAT_00013570);
      iVar4 = *(int *)(param_1 + 0xe0);
      FUN_0001a628(*DAT_00013574,local_1c,*(undefined4 *)(iVar4 + 4),DAT_00013574,
                   *(undefined4 *)(iVar4 + 8),*(undefined4 *)(iVar4 + 0xc));
      FUN_00019a7c(*DAT_00013578);
      pthread_mutex_unlock(DAT_00013570);
      FUN_00014e78(param_1);
    }
    usleep(1000);
  } while( true );
}



/* ===== FUN_0001357c @ 0001357c size=292 ===== */

undefined4 FUN_0001357c(int param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 local_1c;
  
  uVar3 = DAT_000136a8;
  uVar2 = DAT_000136a4;
  pcVar1 = DAT_000136a0;
  iVar5 = 0;
  printf(DAT_000136b0,DAT_000136ac,param_1);
  local_1c = 0;
  do {
    if (*pcVar1 != '\0') {
      return 0;
    }
    iVar4 = FUN_00014df0(param_1,&local_1c);
    if (iVar4 == 0) {
      RK_LOG(5,uVar3,DAT_000136b4,uVar2,0x9b,*(undefined4 *)(param_1 + 0x48),iVar5,
             *(undefined4 *)(*(int *)(param_1 + 0xe0) + 4));
      if (0 < *(int *)(param_1 + 0x38) && *(int *)(param_1 + 0x38) <= iVar5) {
        FUN_00014e78(param_1);
        *pcVar1 = '\x01';
        return 0;
      }
      iVar5 = iVar5 + 1;
      FUN_00014290(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(*(int *)(param_1 + 0xe0) + 4));
      pthread_mutex_lock(DAT_000136b8);
      iVar4 = *(int *)(param_1 + 0xe0);
      FUN_0001a628(*DAT_000136bc,local_1c,*(undefined4 *)(iVar4 + 4),DAT_000136bc,
                   *(undefined4 *)(iVar4 + 8),*(undefined4 *)(iVar4 + 0xc));
      FUN_00019a7c(*DAT_000136c0);
      pthread_mutex_unlock(DAT_000136b8);
      FUN_00014e78(param_1);
    }
    usleep(1000);
  } while( true );
}



/* ===== FUN_000136c4 @ 000136c4 size=292 ===== */

undefined4 FUN_000136c4(int param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 local_1c;
  
  uVar3 = DAT_000137f0;
  uVar2 = DAT_000137ec;
  pcVar1 = DAT_000137e8;
  iVar5 = 0;
  printf(DAT_000137f8,DAT_000137f4,param_1);
  local_1c = 0;
  do {
    if (*pcVar1 != '\0') {
      return 0;
    }
    iVar4 = FUN_00014df0(param_1,&local_1c);
    if (iVar4 == 0) {
      RK_LOG(5,uVar3,DAT_000137fc,uVar2,0x74,*(undefined4 *)(param_1 + 0x48),iVar5,
             *(undefined4 *)(*(int *)(param_1 + 0xe0) + 4));
      if (0 < *(int *)(param_1 + 0x38) && *(int *)(param_1 + 0x38) <= iVar5) {
        FUN_00014e78(param_1);
        *pcVar1 = '\x01';
        return 0;
      }
      iVar5 = iVar5 + 1;
      FUN_00014290(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(*(int *)(param_1 + 0xe0) + 4));
      pthread_mutex_lock(DAT_00013800);
      iVar4 = *(int *)(param_1 + 0xe0);
      FUN_0001a628(*DAT_00013804,local_1c,*(undefined4 *)(iVar4 + 4),DAT_00013804,
                   *(undefined4 *)(iVar4 + 8),*(undefined4 *)(iVar4 + 0xc));
      FUN_00019a7c(*DAT_00013808);
      pthread_mutex_unlock(DAT_00013800);
      FUN_00014e78(param_1);
    }
    usleep(1000);
  } while( true );
}



/* ===== FUN_0001380c @ 0001380c size=292 ===== */

undefined4 FUN_0001380c(int param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 local_1c;
  
  uVar3 = DAT_00013938;
  uVar2 = DAT_00013934;
  pcVar1 = DAT_00013930;
  iVar5 = 0;
  printf(DAT_00013940,DAT_0001393c,param_1);
  local_1c = 0;
  do {
    if (*pcVar1 != '\0') {
      return 0;
    }
    iVar4 = FUN_00014df0(param_1,&local_1c);
    if (iVar4 == 0) {
      RK_LOG(5,uVar3,DAT_00013944,uVar2,0x4d,*(undefined4 *)(param_1 + 0x48),iVar5,
             *(undefined4 *)(*(int *)(param_1 + 0xe0) + 4));
      if (0 < *(int *)(param_1 + 0x38) && *(int *)(param_1 + 0x38) <= iVar5) {
        FUN_00014e78(param_1);
        *pcVar1 = '\x01';
        return 0;
      }
      iVar5 = iVar5 + 1;
      FUN_00014290(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(*(int *)(param_1 + 0xe0) + 4));
      pthread_mutex_lock(DAT_00013948);
      iVar4 = *(int *)(param_1 + 0xe0);
      FUN_0001a628(*DAT_0001394c,local_1c,*(undefined4 *)(iVar4 + 4),DAT_0001394c,
                   *(undefined4 *)(iVar4 + 8),*(undefined4 *)(iVar4 + 0xc));
      FUN_00019a7c(*DAT_00013950);
      pthread_mutex_unlock(DAT_00013948);
      FUN_00014e78(param_1);
    }
    usleep(1000);
  } while( true );
}



/* ===== FUN_00013a1c @ 00013a1c size=336 ===== */

undefined4 FUN_00013a1c(void)

{
  undefined4 *__s;
  undefined4 *puVar1;
  char *__format;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  __s = DAT_00013b6c;
  memset(DAT_00013b70,0,0x3584);
  memset(__s,0,0x980);
  puVar1 = DAT_00013b78;
  strcpy((char *)(__s + 0x21),DAT_00013b74);
  __s[0x25a] = __s[0x25a] | 7;
  uVar4 = DAT_00013b7c;
  *__s = 0;
  __s[0x45] = uVar4;
  __s[0x46] = 7;
  __s[0x43] = 4;
  ROCKIVA_Init(puVar1,0,__s,0);
  puts(DAT_00013b80);
  __format = DAT_00013b8c;
  uVar4 = DAT_00013b88;
  iVar3 = DAT_00013b84;
  *(undefined1 *)(DAT_00013b84 + 0x730) = 0x32;
  *(undefined4 *)(iVar3 + 0x654) = uVar4;
  *(undefined4 *)(iVar3 + 0x72c) = 1000;
  uVar2 = DAT_00013b94;
  uVar4 = DAT_00013b90;
  *(undefined1 *)(iVar3 + 0x640) = 1;
  *(undefined4 *)(iVar3 + 0x658) = uVar4;
  *(undefined4 *)(iVar3 + 0x6d8) = uVar2;
  *(undefined4 *)(iVar3 + 0x644) = 0;
  *(undefined4 *)(iVar3 + 0x6cc) = 5;
  *(undefined4 *)(iVar3 + 0x648) = 4;
  *(undefined4 *)(iVar3 + 0x728) = 2;
  *(undefined4 *)(iVar3 + 0x64c) = 0;
  *(undefined4 *)(iVar3 + 0x650) = 10000;
  printf(__format,0,0,10000,0,10000,10000,0,10000);
  uVar4 = DAT_00013b98;
  uVar2 = *puVar1;
  *(undefined1 *)(iVar3 + 0x1581) = 0;
  iVar3 = ROCKIVA_BA_Init(uVar2,iVar3 + -0x2000,uVar4);
  if (iVar3 == 0) {
    puts(DAT_00013ba0);
    *DAT_00013ba4 = 1;
    uVar4 = 0;
  }
  else {
    printf(DAT_00013b9c,iVar3);
    uVar4 = 0xffffffff;
  }
  return uVar4;
}



/* ===== FUN_00013ba8 @ 00013ba8 size=44 ===== */

undefined4 FUN_00013ba8(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_00013bd4;
  uVar2 = *DAT_00013bd4;
  *DAT_00013bd8 = 0;
  ROCKIVA_BA_Release(uVar2);
  ROCKIVA_Release(*puVar1);
  return 0;
}



/* ===== FUN_00013bdc @ 00013bdc size=144 ===== */

undefined4 FUN_00013bdc(undefined2 param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *__ptr;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*DAT_00013c6c != 0) {
    __ptr = malloc(0x28);
    uVar2 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    __ptr[1] = 0;
    __ptr[2] = uVar2;
    __ptr[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    __ptr[4] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    __ptr[3] = 7;
    puVar1 = DAT_00013c70;
    __ptr[5] = 0;
    __ptr[6] = uVar2;
    __ptr[4] = 0;
    __ptr[8] = 0;
    __ptr[9] = uVar2;
    *(undefined2 *)(__ptr + 2) = param_1;
    __ptr[8] = param_4;
    *(undefined2 *)((int)__ptr + 10) = param_2;
    *__ptr = param_3;
    __ptr[6] = 0;
    __ptr[7] = 0;
    uVar2 = ROCKIVA_PushFrame(*puVar1,__ptr);
    free(__ptr);
  }
  return uVar2;
}



/* ===== FUN_00013c74 @ 00013c74 size=256 ===== */

undefined4 FUN_00013c74(undefined4 param_1)

{
  char *pcVar1;
  char *__format;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_68;
  uint local_64;
  uint local_60;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  iVar5 = 0;
  printf(DAT_00013d78,DAT_00013d74,param_1);
  uVar2 = DAT_00013d84;
  __format = DAT_00013d80;
  pcVar1 = DAT_00013d7c;
  while (*pcVar1 == '\0') {
    iVar3 = RK_MPI_VI_GetChnFrame(0,1,&local_68,1000);
    if (iVar3 == 0) {
      FUN_000238dc(local_30,uStack_2c,1000,0);
      RK_LOG(5,uVar2,DAT_00013d88,DAT_00013d8c,0x165,iVar5,local_64,local_60,local_34);
      RK_MPI_MB_Handle2VirAddr(local_68);
      uVar4 = RK_MPI_MB_Handle2Fd(local_68);
      FUN_00013bdc(local_64 & 0xffff,local_60 & 0xffff,iVar5,uVar4);
      iVar3 = RK_MPI_VI_ReleaseChnFrame(0,1,&local_68);
      if (iVar3 != 0) {
        printf(DAT_00013d90);
      }
      iVar5 = iVar5 + 1;
    }
    else {
      printf(__format,iVar3);
    }
  }
  return 0;
}



/* ===== FUN_00013d94 @ 00013d94 size=764 ===== */

int FUN_00013d94(int *param_1)

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
  if (iVar1 == DAT_00014090) {
    iVar1 = RK_MPI_VI_SetDevAttr(param_1[7],param_1 + 0x10);
    if (iVar1 == 0) goto LAB_00013e0c;
    uVar7 = 0x29;
    uVar5 = DAT_00014094;
  }
  else {
    RK_LOG(2,DAT_0001409c,DAT_000140a0,DAT_00014098,0x2d);
LAB_00013e0c:
    iVar1 = RK_MPI_VI_GetDevIsEnable(param_1[7]);
    if (iVar1 == 0) {
      RK_LOG(2,DAT_0001409c,DAT_000140b0,DAT_00014098,0x42);
LAB_00013ec8:
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
            uVar5 = DAT_000140b8;
LAB_00013f48:
            RK_LOG(2,DAT_0001409c,uVar5,DAT_00014098,uVar7,uVar6);
            return -1;
          }
          local_1c = 1;
          local_14 = param_1[4] * uVar4 * 3 >> 1;
          uStack_18 = uVar4;
          uVar6 = RK_MPI_VI_SetChnWrapBufAttr(param_1[8],param_1[9],&local_1c);
          if (uVar6 != 0) {
            uVar7 = 0x59;
            uVar5 = DAT_000140bc;
            goto LAB_00013f48;
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
            uVar5 = DAT_000140c8;
            goto LAB_00014088;
          }
          uVar7 = 0x6d;
          uVar5 = DAT_000140c4;
          goto LAB_00013e7c;
        }
        RK_LOG(2,DAT_0001409c,DAT_000140c0,DAT_00014098,0x66,iVar1,param_1[8],param_1[9]);
      }
      else {
        uVar7 = 0x4a;
        uVar5 = DAT_000140b4;
LAB_00013e7c:
        RK_LOG(2,DAT_0001409c,uVar5,DAT_00014098,uVar7,iVar1);
      }
      iVar1 = RK_MPI_VI_DisableDev(param_1[7]);
      uVar7 = 0x7d;
      uVar5 = DAT_000140ac;
    }
    else {
      iVar1 = RK_MPI_VI_EnableDev(param_1[7]);
      if (iVar1 == 0) {
        param_1[0x17] = 1;
        param_1[0x18] = param_1[8];
        iVar1 = RK_MPI_VI_SetDevBindPipe(param_1[7],param_1 + 0x17);
        if (iVar1 == 0) goto LAB_00013ec8;
        uVar7 = 0x3e;
        uVar5 = DAT_000140a8;
        goto LAB_00013e7c;
      }
      uVar7 = 0x36;
      uVar5 = DAT_000140a4;
    }
  }
  uVar2 = 2;
  iVar3 = iVar1;
LAB_00014088:
  RK_LOG(uVar2,DAT_0001409c,uVar5,DAT_00014098,uVar7,iVar3);
  return iVar1;
}



/* ===== FUN_000140cc @ 000140cc size=236 ===== */

undefined4 FUN_000140cc(int param_1,undefined4 *param_2)

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
    RK_LOG(5,DAT_000141bc,DAT_000141b8,DAT_000141c0,0x92,*(undefined4 *)(param_1 + 0x1c),
           *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),uVar2,
           *(undefined4 *)(param_1 + 0x380),*(undefined4 *)(param_1 + 900),
           *(undefined4 *)(param_1 + 0x368),*(undefined4 *)(param_1 + 0x374),
           *(undefined4 *)(param_1 + 0x378),*(undefined4 *)(param_1 + 0x36c),
           *(undefined4 *)(param_1 + 0x37c));
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
    RK_LOG(2,DAT_000141bc,DAT_000141c4,DAT_000141c0,0x94,*(undefined4 *)(param_1 + 0x1c),iVar1);
  }
  return uVar2;
}



/* ===== FUN_000141c8 @ 000141c8 size=68 ===== */

undefined4 FUN_000141c8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = RK_MPI_VI_ReleaseChnFrame
                    (*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),param_1 + 0x318
                     ,param_4,param_1,param_2,param_3);
  if (iVar1 != 0) {
    RK_LOG(2,DAT_00014214,DAT_00014210,DAT_0001420c,0xa0,iVar1);
  }
  return 0;
}



/* ===== FUN_00014218 @ 00014218 size=104 ===== */

uint FUN_00014218(int param_1,undefined4 param_2,undefined4 param_3)

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
    RK_LOG(2,DAT_00014288,DAT_00014284,DAT_00014280,0xaf,uVar1);
  }
  return uVar1;
}



/* ===== FUN_00014290 @ 00014290 size=368 ===== */

void FUN_00014290(undefined4 param_1,int param_2)

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
  
  piVar2 = DAT_00014420;
  piVar1 = DAT_0001441c;
  iVar7 = *DAT_0001441c;
  *DAT_00014420 = *DAT_00014420 + param_2;
  ptVar4 = DAT_00014428;
  if (iVar7 == 0) {
    gettimeofday(DAT_00014424,(__timezone_ptr_t)0x0);
  }
  else if (iVar7 == 100) {
    gettimeofday(DAT_00014428,(__timezone_ptr_t)0x0);
    ptVar3 = DAT_00014424;
    printf(DAT_0001442c,param_1);
    printf(DAT_00014430,ptVar3->tv_sec,ptVar3->tv_usec);
    printf(DAT_00014434,ptVar4->tv_sec,ptVar4->tv_usec);
    piVar5 = DAT_00014438;
    iVar7 = ptVar4->tv_sec - ptVar3->tv_sec;
    iVar6 = ptVar4->tv_usec - ptVar3->tv_usec;
    *DAT_00014438 = iVar7;
    piVar5[1] = iVar6;
    if (iVar6 < 0) {
      *piVar5 = iVar7 + -1;
      piVar5[1] = iVar6 + 1000000;
    }
    dVar9 = (double)VectorSignedToFloat(*piVar5,(byte)(in_fpscr >> 0x16) & 3);
    dVar10 = (double)VectorSignedToFloat(piVar5[1],(byte)(in_fpscr >> 0x16) & 3);
    fVar8 = (float)VectorSignedToFloat(*piVar2,(byte)(in_fpscr >> 0x16) & 3);
    dVar9 = dVar10 / DAT_00014400 + dVar9 * DAT_00014400;
    printf(DAT_0001443c,100,SUB84(dVar9,0),(int)((ulonglong)dVar9 >> 0x20),
           ((double)(fVar8 * 8.0 * DAT_00014418) / dVar9) * DAT_00014408 * DAT_00014408);
    printf(DAT_00014440);
    printf(DAT_00014444);
    puts(DAT_00014448);
    *piVar1 = 0;
    *piVar2 = 0;
    return;
  }
  *piVar1 = iVar7 + 1;
  return;
}



/* ===== FUN_0001444c @ 0001444c size=60 ===== */

int FUN_0001444c(void)

{
  int iVar1;
  
  iVar1 = RK_MPI_SYS_Bind();
  if (iVar1 != 0) {
    RK_LOG(2,DAT_00014490,DAT_0001448c,DAT_00014488,0x4d,iVar1);
  }
  return iVar1;
}



/* ===== FUN_00014494 @ 00014494 size=60 ===== */

int FUN_00014494(void)

{
  int iVar1;
  
  iVar1 = RK_MPI_SYS_UnBind();
  if (iVar1 != 0) {
    RK_LOG(2,DAT_000144d8,DAT_000144d4,DAT_000144d0,0x59,iVar1);
  }
  return iVar1;
}



/* ===== FUN_000144dc @ 000144dc size=312 ===== */

undefined4 FUN_000144dc(char *param_1,undefined4 *param_2,undefined4 *param_3)

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
    RK_LOG(2,DAT_0001461c,DAT_00014614,DAT_00014618,0x69);
  }
  else {
    __stream = fopen64(param_1,DAT_00014620);
    if (__stream == (FILE *)0x0) {
      RK_LOG(2,DAT_0001461c,DAT_00014624,DAT_00014618,0x6f,param_1);
    }
    else {
      fread(&local_46,1,2,__stream);
      if (local_46 == 0x4d42) {
        fseek(__stream,0xc,1);
        fread(auStack_44,1,0x2c,__stream);
        uVar2 = DAT_0001462c;
        uVar1 = DAT_0001461c;
        *param_2 = local_40;
        *param_3 = local_3c;
        RK_LOG(2,uVar1,uVar2,DAT_00014618,0x7e,*param_2,local_3c);
        fclose(__stream);
        return 0;
      }
      RK_LOG(2,DAT_0001461c,DAT_00014628,DAT_00014618,0x75);
      fclose(__stream);
    }
  }
  return 0xffffffff;
}



/* ===== FUN_000147b8 @ 000147b8 size=1268 ===== */

int FUN_000147b8(int *param_1)

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
    RK_LOG(2,DAT_00014cac,DAT_00014cbc,DAT_00014cb4,0x54);
    param_1[0x27] = 5;
    param_1[0x13] = 0xf;
    param_1[0x20] = 0;
    *(undefined1 *)(param_1 + 0x21) = 0;
    param_1[0x26] = 0;
    goto LAB_00014878;
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
    goto LAB_00014878;
  }
  if (iVar3 == 6) {
    param_1[0x13] = 0xc;
    if (iVar5 != 8) {
      bVar7 = iVar5 == 9;
      goto LAB_00014824;
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
      goto LAB_00014878;
    }
    bVar7 = iVar5 == 2;
LAB_00014824:
    if (!bVar7) goto LAB_00014878;
  }
  param_1[0x27] = iVar5;
  param_1[0x2c] = 1;
  param_1[0x28] = param_1[8];
  param_1[0x2d] = param_1[9];
  param_1[0x2a] = 1;
  param_1[0x2b] = param_1[7];
  param_1[0x29] = param_1[7];
LAB_00014878:
  uVar4 = DAT_00014cac;
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
  uVar8 = DAT_00014cb0;
  if (iVar5 == 0) {
    iVar5 = 3;
  }
  param_1[0x1f] = iVar5;
  RK_LOG(2,uVar4,uVar8,DAT_00014cb4,0x81,param_1[0x12],iVar5);
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
        printf(DAT_00014cc0);
      }
    }
    if (param_1[2] != 0) {
      local_110 = param_1[4];
      local_10c = 0;
      local_114 = 1;
      local_118 = 1;
      iVar3 = RK_MPI_VENC_SetChnBufWrapAttr(param_1[0x12],&local_114);
      if (iVar3 != 0) {
        RK_LOG(2,DAT_00014cac,DAT_00014cc4,DAT_00014cb4,0xa1,iVar3,iVar5);
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
                RK_LOG(2,DAT_00014cac,DAT_00014cd4,DAT_00014cb4,0xdc,iVar3);
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
          uVar4 = DAT_00014cd0;
          iVar9 = param_1[0x12];
        }
        else {
          uVar8 = 0xca;
          uVar4 = DAT_00014ccc;
          iVar9 = iVar3;
        }
      }
      else {
        uVar8 = 0xc1;
        uVar4 = DAT_00014ccc;
        iVar9 = iVar3;
      }
    }
    else {
      uVar8 = 0xb9;
      uVar4 = DAT_00014cc8;
      iVar9 = iVar3;
    }
  }
  else {
    uVar8 = 0x8a;
    uVar4 = DAT_00014cb8;
    iVar9 = iVar3;
  }
  RK_LOG(2,DAT_00014cac,uVar4,DAT_00014cb4,uVar8,iVar9,iVar5);
  return iVar3;
}



/* ===== FUN_00014cd8 @ 00014cd8 size=264 ===== */

undefined4
FUN_00014cd8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
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
  
  uVar2 = DAT_00014de4;
  uVar1 = DAT_00014de0;
  while( true ) {
    uVar6 = 1;
    iVar4 = RK_MPI_MB_GetMB(*(undefined4 *)(param_1 + 0x278));
    if (iVar4 != 0) break;
    RK_LOG(2,uVar2,DAT_00014de8,uVar1,0x105,0);
    usleep(2000);
  }
  RK_MPI_MB_Handle2VirAddr();
  uVar3 = DAT_00014dec;
  RK_MPI_SYS_MmzFlushCache(iVar4,0);
  uVar2 = DAT_00014de4;
  uVar1 = DAT_00014de0;
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



/* ===== FUN_00014df0 @ 00014df0 size=124 ===== */

undefined4 FUN_00014df0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar2 = DAT_00014e74;
  uVar1 = DAT_00014e70;
  uVar4 = DAT_00014e6c;
  while (iVar3 = RK_MPI_VENC_GetStream(*(undefined4 *)(param_1 + 0x48),param_1 + 0xe0,2000),
        iVar3 != 0) {
    RK_LOG(2,uVar2,uVar1,uVar4,0x12f,*(undefined4 *)(param_1 + 0x48),iVar3);
  }
  uVar4 = RK_MPI_MB_Handle2VirAddr(**(undefined4 **)(param_1 + 0xe0));
  *param_2 = uVar4;
  return 0;
}



/* ===== FUN_00014e78 @ 00014e78 size=68 ===== */

int FUN_00014e78(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = RK_MPI_VENC_ReleaseStream
                    (*(undefined4 *)(param_1 + 0x48),param_1 + 0xe0,param_3,param_4,param_1,param_2)
  ;
  if (iVar1 != 0) {
    RK_LOG(2,DAT_00014ec4,DAT_00014ec0,DAT_00014ebc,0x13a,iVar1);
  }
  return iVar1;
}



/* ===== FUN_00014ec8 @ 00014ec8 size=136 ===== */

int FUN_00014ec8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = RK_MPI_VENC_StopRecvFrame(*(undefined4 *)(param_1 + 0x48));
  if (iVar1 == 0) {
    RK_LOG(2,DAT_00014f54,DAT_00014f50,DAT_00014f58,0x147,*(undefined4 *)(param_1 + 0x48),param_3);
    iVar2 = RK_MPI_VENC_DestroyChn(*(undefined4 *)(param_1 + 0x48));
    if (iVar2 != 0) {
      RK_LOG(2,DAT_00014f54,DAT_00014f5c,DAT_00014f58,0x14a,iVar2,param_3);
    }
    if (*(void **)(param_1 + 0xe0) != (void *)0x0) {
      free(*(void **)(param_1 + 0xe0));
    }
  }
  return iVar1;
}



/* ===== FUN_00015014 @ 00015014 size=236 ===== */

undefined4 FUN_00015014(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  char *__format;
  undefined4 uVar2;
  char acStack_158 [16];
  undefined1 auStack_148 [304];
  
  iVar1 = DAT_0001510c;
  if (param_1 < 8) {
    setlinebuf((FILE *)*DAT_00015108);
    __format = DAT_00015118;
    if (param_4 == 0) {
      puts(DAT_00015110);
      uVar2 = 0;
    }
    else {
      *(undefined4 *)(DAT_00015114 + param_1 * 4) = param_2;
      snprintf(acStack_158,0x10,__format,param_2);
      setenv(DAT_0001511c,acStack_158,1);
      rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId(param_1,auStack_148);
      printf(DAT_00015120,param_1,auStack_148,param_4);
      rk_aiq_uapi2_sysctl_preInit_devBufCnt(auStack_148,DAT_00015124,2);
      uVar2 = rk_aiq_uapi2_sysctl_init(auStack_148,param_4,DAT_0001512c,DAT_00015128);
      if (param_3 != 0) {
        rk_aiq_uapi2_sysctl_setMulCamConc(uVar2,1);
      }
    }
    *(undefined4 *)(iVar1 + param_1 * 4) = uVar2;
    uVar2 = 0;
  }
  else {
    printf(DAT_00015104,DAT_00015100);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== FUN_00015130 @ 00015130 size=488 ===== */

int FUN_00015130(int param_1,ushort *param_2,int param_3)

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
  iVar3 = DAT_0001531c;
  __format = DAT_00015318;
  __s = param_2;
  if ((int)param_2 - 1U < 2) {
    iVar4 = rk_aiq_uapi2_camgroup_getCamInfos
                      (*(undefined4 *)(DAT_0001531c + param_1 * 4),&local_108);
    if (iVar4 == 0) {
      piVar7 = &local_108;
      iVar4 = 0;
      for (iVar8 = 0; iVar8 < local_108; iVar8 = iVar8 + 1) {
        iVar6 = rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm
                          (*(undefined4 *)(iVar3 + param_1 * 4),piVar7[1]);
        if (iVar6 == 0) {
          puts(DAT_00015338);
          goto LAB_00015308;
        }
        printf(DAT_00015320,piVar7[1],piVar7[9]);
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
              puts(DAT_00015324);
              local_84 = -1;
            }
            else {
              uVar1 = __s[2];
              uVar2 = __s[3];
              printf(DAT_0001532c,(uint)*__s,(uint)__s[1],(uint)uVar1,(uint)uVar2,(uint)__s[4],
                     (uint)__s[5]);
              local_84 = ((uint)uVar2 * (uint)uVar1 + 6) * 2;
            }
          }
          else {
            pcVar5 = strrchr((char *)__s,0x2f);
            __format = DAT_00015330;
            if (pcVar5 == (char *)0x0) goto LAB_00015288;
            local_bc = 1;
            local_8c = 1;
            local_90 = (ushort *)0x1;
            memcpy(&local_88,__s,(size_t)(pcVar5 + (1 - (int)__s)));
            strcpy(acStack_48,pcVar5 + 1);
            printf(DAT_00015334,&local_88,acStack_48);
          }
          iVar6 = rk_aiq_user_api2_aldch_v21_SetAttrib(iVar6,auStack_c4);
          iVar4 = 0;
          if (iVar6 != 0) {
            printf(DAT_00015328,iVar6);
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
LAB_00015288:
    printf(__format,__s);
LAB_00015308:
    iVar4 = -1;
  }
  return iVar4;
}



/* ===== FUN_0001533c @ 0001533c size=352 ===== */

undefined4
FUN_0001533c(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5,
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
  
  uVar1 = DAT_000154c0;
  __format_00 = DAT_000154bc;
  __format = DAT_000154b8;
  if (param_1 < 8) {
    for (iVar4 = 0; iVar3 = DAT_000154ac, iVar4 < *(int *)(param_6 + 0x20); iVar4 = iVar4 + 1) {
      iVar3 = rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId(iVar4,acStack_558);
      __s = DAT_000154a4;
      if (iVar3 != 0) goto LAB_00015394;
      printf(__format,param_1,iVar4,acStack_558,*(undefined4 *)(param_6 + 0x24));
      __dest = auStack_428 + iVar4 * 0x80;
      sVar2 = strlen(acStack_558);
      memcpy(__dest,acStack_558,sVar2 + 1);
      *(undefined1 **)(param_6 + iVar4 * 4) = __dest;
      printf(__format_00,iVar4,__dest);
      iVar3 = rk_aiq_uapi2_sysctl_preInit_devBufCnt(acStack_558,uVar1,2);
      __s = DAT_000154a8;
      if (iVar3 != 0) goto LAB_00015394;
    }
    iVar4 = rk_aiq_uapi2_camgroup_create(param_6);
    *(int *)(iVar3 + param_1 * 4) = iVar4;
    __s = DAT_000154b0;
    if (iVar4 != 0) {
      if (param_4 != 0) {
        FUN_00015130(param_1,param_4 & 0xff,param_5);
      }
      iVar4 = rk_aiq_uapi2_camgroup_prepare(*(undefined4 *)(iVar3 + param_1 * 4),param_2);
      iVar3 = rk_aiq_uapi2_camgroup_start(*(undefined4 *)(iVar3 + param_1 * 4));
      __s = DAT_000154b4;
      if (iVar4 == 0 && iVar3 == 0) {
        puts(DAT_000154c4);
        return 0;
      }
    }
LAB_00015394:
    puts(__s);
  }
  else {
    printf(DAT_000154a0,DAT_0001549c,8);
  }
  return 0xffffffff;
}



/* ===== FUN_000154c8 @ 000154c8 size=112 ===== */

undefined4 FUN_000154c8(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_00015538;
  if ((param_1 < 8) && (*(int *)(DAT_00015538 + param_1 * 4) != 0)) {
    puts(DAT_00015544);
    rk_aiq_uapi2_sysctl_stop(*(undefined4 *)(iVar1 + param_1 * 4),0);
    puts(DAT_00015548);
    rk_aiq_uapi2_sysctl_deinit(*(undefined4 *)(iVar1 + param_1 * 4));
    puts(DAT_0001554c);
    *(undefined4 *)(iVar1 + param_1 * 4) = 0;
    return 0;
  }
  printf(DAT_00015540,DAT_0001553c,param_1);
  return 0xffffffff;
}



/* ===== FUN_000155d0 @ 000155d0 size=152 ===== */

undefined4 FUN_000155d0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_00015668;
  if ((param_1 < 8) && (iVar1 = *(int *)(DAT_00015668 + param_1 * 4), iVar1 != 0)) {
    iVar1 = rk_aiq_uapi2_sysctl_prepare(iVar1,0,0,*(undefined4 *)(DAT_00015674 + param_1 * 4));
    if (iVar1 == 0) {
      puts(DAT_0001567c);
      iVar2 = rk_aiq_uapi2_sysctl_start(*(undefined4 *)(iVar2 + param_1 * 4));
      if (iVar2 == 0) {
        puts(DAT_00015684);
        return 0;
      }
      puts(DAT_00015680);
    }
    else {
      puts(DAT_00015678);
      *(undefined4 *)(iVar2 + param_1 * 4) = 0;
    }
  }
  else {
    printf(DAT_00015670,DAT_0001566c);
  }
  return 0xffffffff;
}



/* ===== FUN_00015688 @ 00015688 size=156 ===== */

undefined4 FUN_00015688(int param_1,int param_2)

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
  
  iVar1 = DAT_00015724;
  if ((param_1 < 8) && (iVar2 = *(int *)(DAT_00015724 + param_1 * 4), iVar2 != 0)) {
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
    printf(DAT_0001572c,DAT_00015728);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



/* ===== FUN_00015a38 @ 00015a38 size=28 ===== */

int FUN_00015a38(void)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  return *piVar1;
}



/* ===== FUN_00015a54 @ 00015a54 size=40 ===== */

char * FUN_00015a54(int param_1)

{
  char *pcVar1;
  
  pcVar1 = strerror(param_1);
  return pcVar1;
}



/* ===== FUN_00015a7c @ 00015a7c size=156 ===== */

void * FUN_00015a7c(void)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,0x14);
  if (pvVar1 == (void *)0x0) {
    printf((char *)(DAT_00015b20 + 0x15ac8),DAT_00015b1c + 0x15ac0,0x9a,DAT_00015b18 + 0x15ab4);
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



/* ===== FUN_00015b24 @ 00015b24 size=48 ===== */

void FUN_00015b24(void *param_1)

{
  if (param_1 != (void *)0x0) {
    free(param_1);
  }
  return;
}



/* ===== FUN_00015b54 @ 00015b54 size=204 ===== */

void * FUN_00015b54(int param_1)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,0x168);
  if (pvVar1 == (void *)0x0) {
    printf((char *)(DAT_00015c28 + 0x15ba4),DAT_00015c24 + 0x15b9c,0xad,DAT_00015c20 + 0x15b90);
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



/* ===== FUN_00015c2c @ 00015c2c size=136 ===== */

void FUN_00015c2c(void *param_1)

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



/* ===== FUN_00015cb4 @ 00015cb4 size=180 ===== */

void * FUN_00015cb4(int param_1)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,0x434);
  if (pvVar1 == (void *)0x0) {
    printf((char *)(DAT_00015d70 + 0x15d04),DAT_00015d6c + 0x15cfc,0xc4,DAT_00015d68 + 0x15cf0);
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



/* ===== FUN_00015d74 @ 00015d74 size=136 ===== */

void FUN_00015d74(void *param_1)

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



/* ===== FUN_00015dfc @ 00015dfc size=128 ===== */

void FUN_00015dfc(int param_1,int param_2)

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



/* ===== FUN_00015e7c @ 00015e7c size=144 ===== */

void FUN_00015e7c(int param_1)

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



/* ===== FUN_00015f0c @ 00015f0c size=536 ===== */

int * FUN_00015f0c(int param_1)

{
  undefined4 uVar1;
  int local_2c;
  sockaddr local_24;
  int local_14;
  int local_10;
  int *local_c;
  
  local_c = (int *)0x0;
  local_c = (int *)FUN_00015a7c();
  if (local_c == (int *)0x0) {
    local_c = (int *)0x0;
  }
  else {
    local_10 = socket(2,1,0);
    if (local_10 == -1) {
      uVar1 = FUN_00015a38();
      uVar1 = FUN_00015a54(uVar1);
      printf((char *)(DAT_0001612c + 0x15f98),DAT_00016128 + 90000,0xfa,DAT_00016124 + 0x15f84,uVar1
            );
      FUN_00015b24(local_c);
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
        uVar1 = FUN_00015a38();
        uVar1 = FUN_00015a54(uVar1);
        printf((char *)(DAT_00016138 + 0x1605c),DAT_00016134 + 0x16054,0x108,DAT_00016130 + 0x16048,
               uVar1);
        close(local_10);
        FUN_00015b24(local_c);
        local_c = (int *)0x0;
      }
      else {
        local_14 = listen(local_10,0x80);
        if (local_14 == -1) {
          uVar1 = FUN_00015a38();
          uVar1 = FUN_00015a54(uVar1);
          printf((char *)(DAT_00016144 + 0x160c8),DAT_00016140 + 0x160c0,0x110,
                 DAT_0001613c + 0x160b4,uVar1);
          close(local_10);
          FUN_00015b24(local_c);
          local_c = (int *)0x0;
        }
        else {
          *local_c = local_10;
          printf((char *)(DAT_00016150 + 0x16114),DAT_0001614c + 0x1610c,0x118,
                 DAT_00016148 + 0x16100,local_2c);
        }
      }
    }
  }
  return local_c;
}



/* ===== FUN_00016154 @ 00016154 size=932 ===== */

undefined4 FUN_00016154(int param_1)

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
    printf((char *)(DAT_00016500 + 0x161e8),DAT_000164fc + 0x161e0,0x15b,DAT_000164f8 + 0x161d4,
           pcVar2);
  }
  else {
    local_c = local_c | 0x800;
    local_c = fcntl(param_1,4,local_c);
    if ((int)local_c < 0) {
      piVar1 = __errno_location();
      pcVar2 = strerror(*piVar1);
      printf((char *)(DAT_0001650c + 0x16254),DAT_00016508 + 0x1624c,0x160,DAT_00016504 + 0x16240,
             pcVar2);
    }
  }
  local_c = setsockopt(param_1,1,7,&local_10,4);
  if (local_c == -1) {
    uVar3 = FUN_00015a38();
    uVar3 = FUN_00015a54(uVar3);
    printf((char *)(DAT_00016518 + 0x162bc),DAT_00016514 + 0x162b4,0x166,DAT_00016510 + 0x162a8,
           uVar3);
  }
  local_c = setsockopt(param_1,1,9,&local_14,4);
  if (local_c == -1) {
    uVar3 = FUN_00015a38();
    uVar3 = FUN_00015a54(uVar3);
    printf((char *)(DAT_00016524 + 0x16324),DAT_00016520 + 0x1631c,0x16b,DAT_0001651c + 0x16310,
           uVar3);
  }
  local_c = setsockopt(param_1,6,4,&local_18,4);
  if (local_c == -1) {
    uVar3 = FUN_00015a38();
    uVar3 = FUN_00015a54(uVar3);
    printf((char *)(DAT_00016530 + 0x1638c),DAT_0001652c + 0x16384,0x170,DAT_00016528 + 91000,uVar3)
    ;
  }
  local_c = setsockopt(param_1,6,5,&local_1c,4);
  if (local_c == -1) {
    uVar3 = FUN_00015a38();
    uVar3 = FUN_00015a54(uVar3);
    printf((char *)(DAT_0001653c + 0x163f4),DAT_00016538 + 0x163ec,0x175,DAT_00016534 + 0x163e0,
           uVar3);
  }
  local_c = setsockopt(param_1,6,6,&local_20,4);
  if (local_c == -1) {
    uVar3 = FUN_00015a38();
    uVar3 = FUN_00015a54(uVar3);
    printf((char *)(DAT_00016548 + 0x1645c),DAT_00016544 + 0x16454,0x17a,DAT_00016540 + 0x16448,
           uVar3);
  }
  memset(&local_28,0,8);
  local_28 = 1;
  local_24 = 0;
  local_c = setsockopt(param_1,1,0xd,&local_28,8);
  if (local_c == -1) {
    uVar3 = FUN_00015a38();
    uVar3 = FUN_00015a54(uVar3);
    printf((char *)(DAT_00016554 + 0x164e8),DAT_00016550 + 0x164e0,0x182,DAT_0001654c + 0x164d4,
           uVar3);
  }
  return 0;
}



/* ===== FUN_00016558 @ 00016558 size=304 ===== */

undefined4 * FUN_00016558(int *param_1)

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
    uVar2 = FUN_00015a38();
    uVar2 = FUN_00015a54(uVar2);
    printf((char *)(DAT_00016690 + 0x165d8),DAT_0001668c + 0x165d0,0x191,DAT_00016688 + 0x165c4,
           uVar2);
    local_14 = (undefined4 *)0x0;
  }
  else {
    FUN_00016154(local_18);
    pcVar3 = inet_ntoa((in_addr)auStack_28._4_4_);
    uVar1 = ntohs(auStack_28._2_2_);
    printf((char *)(DAT_0001669c + 0x1662c),DAT_00016698 + 0x16624,0x198,DAT_00016694 + 0x16618,
           pcVar3,(uint)uVar1);
    local_14 = (undefined4 *)FUN_00015cb4(param_1);
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



/* ===== FUN_000166a0 @ 000166a0 size=160 ===== */

void FUN_000166a0(int param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    uVar2 = *(undefined4 *)(param_1 + 4);
    pcVar1 = inet_ntoa((in_addr)*(in_addr_t *)(param_1 + 8));
    printf((char *)(DAT_00016748 + 0x166fc),DAT_00016744 + 0x166f4,0x1ab,DAT_00016740 + 0x166e8,
           uVar2,pcVar1);
    FUN_00015e7c(param_1);
    FUN_00018158(param_1,0);
    FUN_00018158(param_1,1);
    close(*(int *)(param_1 + 4));
    FUN_00015d74(param_1);
  }
  return;
}



/* ===== FUN_0001674c @ 0001674c size=408 ===== */

bool FUN_0001674c(char *param_1,char *param_2)

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
    *(undefined2 *)(local_48 + sVar1) = *(undefined2 *)(DAT_000168e4 + 0x16848);
  }
  sVar1 = strlen(local_88);
  if (*(char *)((int)&local_8c + sVar1 + 3) != '/') {
    sVar1 = strlen(local_88);
    *(undefined2 *)(local_88 + sVar1) = *(undefined2 *)(DAT_000168e8 + 0x1689c);
  }
  sVar1 = strlen(local_48);
  iVar2 = strncmp(local_48,local_88,sVar1);
  return iVar2 == 0;
}



/* ===== FUN_000168ec @ 000168ec size=416 ===== */

char * FUN_000168ec(int param_1,char *param_2)

{
  int iVar1;
  char *local_c;
  
  local_c = (char *)0x0;
  if (((param_1 == 0) || (param_2 == (char *)0x0)) || (*param_2 == '\0')) {
    printf((char *)(DAT_00016a94 + 0x16958),DAT_00016a90 + 0x16950,0x1cc,DAT_00016a8c + 0x16944);
  }
  else {
    for (local_c = *(char **)(param_1 + 4); local_c != (char *)0x0;
        local_c = *(char **)(local_c + 0x15c)) {
      iVar1 = FUN_0001674c(local_c,param_2);
      if ((iVar1 != 0) || (iVar1 = FUN_0001674c(param_2,local_c), iVar1 != 0)) {
        printf((char *)(DAT_00016aa0 + 0x169d4),DAT_00016a9c + 0x169cc,0x1d2,DAT_00016a98 + 0x169c0,
               local_c,param_2);
        goto LAB_00016a68;
      }
    }
    local_c = (char *)FUN_00015b54(param_1);
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
      printf((char *)(DAT_00016aac + 0x16a5c),DAT_00016aa8 + 0x16a54,0x1e0,DAT_00016aa4 + 0x16a48,
             local_c);
      return local_c;
    }
  }
LAB_00016a68:
  if (local_c != (char *)0x0) {
    free(local_c);
  }
  return (char *)0x0;
}



/* ===== FUN_00016ab0 @ 00016ab0 size=40 ===== */

undefined4 FUN_00016ab0(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00015f0c(param_1);
  return uVar1;
}



/* ===== FUN_00016ad8 @ 00016ad8 size=72 ===== */

undefined4 FUN_00016ad8(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000168ec(param_1,param_2);
  FUN_00016b20(uVar1,1,0,0);
  return uVar1;
}



/* ===== FUN_00016b20 @ 00016b20 size=596 ===== */

undefined4 FUN_00016b20(int param_1,int param_2,int param_3,int param_4)

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
        iVar1 = FUN_00021a6c(param_3,param_4,param_1 + 0x48);
        if (iVar1 < 1) {
          printf((char *)(DAT_00016d88 + 0x16c98),DAT_00016d84 + 0x16c90,0x220,
                 DAT_00016d80 + 0x16c84);
        }
      }
      else if ((param_2 == 2) && (iVar1 = FUN_00021cd0(param_3,param_4,param_1 + 0x48), iVar1 < 1))
      {
        printf((char *)(DAT_00016d94 + 0x16ce0),DAT_00016d90 + 0x16cd8,0x226,DAT_00016d8c + 0x16ccc)
        ;
      }
    }
    if (*(int *)(param_1 + 0x138) == 0) {
      uVar2 = FUN_0002113c(0x5b0,0x4b1);
      *(undefined4 *)(param_1 + 0x138) = uVar2;
      if (*(int *)(param_1 + 0x138) == 0) {
        printf((char *)(DAT_00016da0 + 0x16d50),DAT_00016d9c + 0x16d48,0x230,DAT_00016d98 + 0x16d3c)
        ;
        *(undefined4 *)(param_1 + 0x40) = 0;
        return 0xffffffff;
      }
    }
    uVar2 = 0;
  }
  else {
    printf((char *)(DAT_00016d7c + 0x16bb4),DAT_00016d78 + 0x16bac,0x211,DAT_00016d74 + 0x16ba0,
           param_2);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== FUN_00016da4 @ 00016da4 size=516 ===== */

undefined4 FUN_00016da4(int param_1,int param_2,int param_3,int param_4)

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
       (iVar1 = FUN_00021fd4(param_3,param_4,param_1 + 0x114), iVar1 < 1)) {
      printf((char *)(DAT_00016fbc + 0x16f1c),DAT_00016fb8 + 0x16f14,0x255,DAT_00016fb4 + 0x16f08);
    }
    if (*(int *)(param_1 + 0x13c) == 0) {
      uVar2 = FUN_0002113c(0x5b0,0x29);
      *(undefined4 *)(param_1 + 0x13c) = uVar2;
      if (*(int *)(param_1 + 0x13c) == 0) {
        printf((char *)(DAT_00016fc8 + 0x16f84),DAT_00016fc4 + 0x16f7c,0x25f,DAT_00016fc0 + 0x16f70)
        ;
        *(undefined4 *)(param_1 + 0x44) = 0;
        return 0xffffffff;
      }
    }
    uVar2 = 0;
  }
  else {
    printf((char *)(DAT_00016fb0 + 0x16e3c),DAT_00016fac + 0x16e34,0x245,DAT_00016fa8 + 0x16e28,
           param_2);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== FUN_00017070 @ 00017070 size=196 ===== */

void FUN_00017070(int param_1)

{
  if (param_1 != 0) {
    while (*(int *)(param_1 + 0x154) != 0) {
      FUN_000166a0(*(int *)(param_1 + 0x154));
    }
    printf((char *)(DAT_0001713c + 0x170e0),DAT_00017138 + 0x170d8,0x285,DAT_00017134 + 0x170cc,
           param_1);
    if (*(int *)(param_1 + 0x138) != 0) {
      FUN_000215d0(*(undefined4 *)(param_1 + 0x138));
    }
    if (*(int *)(param_1 + 0x13c) != 0) {
      FUN_000215d0(*(undefined4 *)(param_1 + 0x13c));
    }
    FUN_00015c2c(param_1);
  }
  return;
}



/* ===== FUN_00017140 @ 00017140 size=144 ===== */

void FUN_00017140(int *param_1)

{
  if (param_1 != (int *)0x0) {
    while (param_1[3] != 0) {
      FUN_000166a0(param_1[3]);
    }
    while (param_1[1] != 0) {
      FUN_00017070(param_1[1]);
    }
    close(*param_1);
    FUN_00015b24(param_1);
  }
  return;
}



/* ===== FUN_000171d0 @ 000171d0 size=1128 ===== */

int FUN_000171d0(int param_1,int param_2,char *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *local_c;
  
  iVar1 = sprintf(param_3,(char *)(DAT_00017638 + 0x17200));
  pcVar3 = param_3 + iVar1;
  iVar1 = sprintf(pcVar3,(char *)(DAT_0001763c + 0x17228));
  pcVar3 = pcVar3 + iVar1;
  iVar1 = sprintf(pcVar3,(char *)(DAT_00017640 + 0x17250));
  pcVar3 = pcVar3 + iVar1;
  iVar1 = sprintf(pcVar3,(char *)(DAT_00017644 + 0x17278));
  pcVar3 = pcVar3 + iVar1;
  iVar1 = param_2;
  if (param_2 == 0) {
    iVar1 = DAT_00017648 + 0x172b4;
  }
  iVar1 = sprintf(pcVar3,(char *)(DAT_0001764c + 0x172c0),iVar1);
  iVar2 = sprintf(pcVar3 + iVar1,(char *)(DAT_00017650 + 0x172e8));
  local_c = pcVar3 + iVar1 + iVar2;
  if (*(int *)(param_1 + 0x40) != 0) {
    if (*(int *)(param_1 + 0x40) == 1) {
      iVar1 = FUN_00022148(0x60,*(undefined4 *)(param_1 + 0x120),param_1 + 0x48,local_c,
                           param_4 - ((int)local_c - (int)param_3));
      local_c = local_c + iVar1;
    }
    else if (*(int *)(param_1 + 0x40) == 2) {
      iVar1 = FUN_00022390(0x60,*(undefined4 *)(param_1 + 0x120),param_1 + 0x48,local_c,
                           param_4 - ((int)local_c - (int)param_3));
      local_c = local_c + iVar1;
    }
    if (param_2 == 0) {
      iVar1 = sprintf(local_c,(char *)(DAT_00017660 + 0x17438),DAT_0001765c + 0x1742c);
      local_c = local_c + iVar1;
    }
    else {
      iVar1 = sprintf(local_c,(char *)(DAT_00017658 + 0x17404),param_2,DAT_00017654 + 0x173f8);
      local_c = local_c + iVar1;
    }
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    iVar1 = *(int *)(param_1 + 0x44);
    if (iVar1 == 0x4002) {
      iVar1 = FUN_00022730(0x61,*(undefined4 *)(param_1 + 0x130),*(undefined1 *)(param_1 + 0x134),
                           local_c,param_4 - ((int)local_c - (int)param_3));
      local_c = local_c + iVar1;
    }
    else if (iVar1 == 0x4003) {
      iVar1 = FUN_00022800(0x61,*(undefined4 *)(param_1 + 0x130),*(undefined1 *)(param_1 + 0x134),
                           param_1 + 0x114,local_c,param_4 - ((int)local_c - (int)param_3));
      local_c = local_c + iVar1;
    }
    else if (iVar1 == 0x4001) {
      iVar1 = FUN_00022660(0x61,*(undefined4 *)(param_1 + 0x130),*(undefined1 *)(param_1 + 0x134),
                           local_c,param_4 - ((int)local_c - (int)param_3));
      local_c = local_c + iVar1;
    }
    if (param_2 == 0) {
      iVar1 = sprintf(local_c,(char *)(DAT_00017670 + 0x17604),DAT_0001766c + 0x175f8);
      local_c = local_c + iVar1;
    }
    else {
      iVar1 = sprintf(local_c,(char *)(DAT_00017668 + 0x175d0),param_2,DAT_00017664 + 0x175c4);
      local_c = local_c + iVar1;
    }
  }
  return (int)local_c - (int)param_3;
}



/* ===== FUN_00017674 @ 00017674 size=164 ===== */

undefined4 FUN_00017674(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  printf((char *)(DAT_00017720 + 0x176b4),DAT_0001771c + 0x176ac,0x2d5,DAT_00017718 + 0x176a0);
  FUN_00020e0c(param_3,0x6f);
  return 0;
}



/* ===== FUN_00017724 @ 00017724 size=648 ===== */

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_00017724(int param_1,int param_2,int param_3)

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
  printf((char *)(DAT_000179b4 + 0x177cc),DAT_000179b0 + 0x177c4,0x2ea,DAT_000179ac + 0x177b8);
  iVar1 = FUN_00020bc4(param_2,local_418);
  if ((iVar1 < 0) && ((local_418[0] & 1) == 0)) {
    FUN_0002064c(param_3,0x196);
    printf((char *)(DAT_000179c0 + 0x17828),DAT_000179bc + 0x17820,0x2ed,DAT_000179b8 + 0x17814);
  }
  else {
    if (*local_14 == 1) {
      sVar2 = strlen(local_498);
      uVar3 = *(undefined4 *)(DAT_000179c4 + 0x17874);
      *(undefined4 *)(local_498 + sVar2) = *(undefined4 *)(DAT_000179c4 + 0x17870);
      *(undefined4 *)((int)&uStack_494 + sVar2) = uVar3;
      auStack_490[sVar2] = *(undefined1 *)(DAT_000179c4 + 0x17878);
    }
    else {
      sVar2 = strlen(local_498);
      uVar3 = *(undefined4 *)(DAT_000179c8 + 0x178b8);
      *(undefined4 *)(local_498 + sVar2) = *(undefined4 *)(DAT_000179c8 + 0x178b4);
      *(undefined4 *)((int)&uStack_494 + sVar2) = uVar3;
    }
    strcat(local_498,(char *)((int)local_14 + 6));
    if ((short)local_14[1] != 0) {
      sVar2 = strlen(local_498);
      sprintf(local_498 + sVar2,(char *)(DAT_000179cc + 0x17920),(uint)*(ushort *)(local_14 + 1));
    }
    strcat(local_498,local_c);
    local_10 = FUN_000171d0(local_c,local_498,local_418 + 1,0x400);
    FUN_00020ff8(param_3,0);
    FUN_000210cc(param_3,local_10);
    uVar3 = FUN_0001c1dc(local_418 + 1,local_10);
    *(undefined4 *)(param_3 + 0xa8) = uVar3;
  }
  return 0;
}



/* ===== FUN_000179d0 @ 000179d0 size=52 ===== */

int FUN_000179d0(void)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_00017a04 + 0x179e4);
  *(int *)(DAT_00017a08 + 0x179f4) = iVar1 + 1;
  return iVar1;
}



/* ===== FUN_00017a0c @ 00017a0c size=1048 ===== */

undefined4 FUN_00017a0c(undefined4 *param_1)

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
      printf((char *)(DAT_00017e74 + 0x17e14),DAT_00017e70 + 0x17e0c,0x363,DAT_00017e6c + 0x17e00);
      return 0xffffffff;
    }
    local_10 = socket(2,2,0);
    if (local_10 == -1) break;
    local_14 = socket(2,2,0);
    if (local_14 == -1) {
      uVar1 = FUN_00015a38();
      uVar1 = FUN_00015a54(uVar1);
      printf((char *)(DAT_00017e38 + 0x17ae0),DAT_00017e34 + 0x17ad8,0x31a,DAT_00017e30 + 0x17acc,
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
          printf((char *)(DAT_00017e44 + 0x17c54),DAT_00017e40 + 0x17c4c,0x347,
                 DAT_00017e3c + 0x17c40,pcVar3);
        }
        else {
          local_1c = local_1c | 0x800;
          local_1c = fcntl(local_10,4,local_1c);
          if ((int)local_1c < 0) {
            piVar2 = __errno_location();
            pcVar3 = strerror(*piVar2);
            printf((char *)(DAT_00017e50 + 0x17cc0),DAT_00017e4c + 0x17cb8,0x34c,
                   DAT_00017e48 + 0x17cac,pcVar3);
          }
        }
        local_1c = fcntl(local_14,3,0);
        if ((int)local_1c < 0) {
          piVar2 = __errno_location();
          pcVar3 = strerror(*piVar2);
          printf((char *)(DAT_00017e5c + 0x17d1c),DAT_00017e58 + 0x17d14,0x351,
                 DAT_00017e54 + 0x17d08,pcVar3);
        }
        else {
          local_1c = local_1c | 0x800;
          local_1c = fcntl(local_14,4,local_1c);
          if ((int)local_1c < 0) {
            piVar2 = __errno_location();
            pcVar3 = strerror(*piVar2);
            printf((char *)(DAT_00017e68 + 0x17d88),DAT_00017e64 + 0x17d80,0x356,
                   DAT_00017e60 + 0x17d74,pcVar3);
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
  uVar1 = FUN_00015a38();
  uVar1 = FUN_00015a54(uVar1);
  printf((char *)(DAT_00017e2c + 0x17a80),DAT_00017e28 + 0x17a78,0x314,DAT_00017e24 + 0x17a6c,uVar1)
  ;
  return 0xffffffff;
}



/* ===== FUN_00017e78 @ 00017e78 size=684 ===== */

undefined4 FUN_00017e78(int param_1,int param_2,int param_3,short param_4,uint param_5)

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
    printf((char *)(DAT_0001812c + 0x17efc),DAT_00018128 + 0x17ef4,0x36e,DAT_00018124 + 0x17ee8,
           pcVar3);
    uVar5 = 0xffffffff;
  }
  else {
    *__ptr = (uint)(param_3 != 0);
    __ptr[8] = __in.s_addr;
    uVar4 = FUN_000179d0();
    __ptr[10] = uVar4;
    if (param_3 == 0) {
      iVar6 = FUN_00017a0c(__ptr);
      if (iVar6 < 0) {
        free(__ptr);
        return 0xffffffff;
      }
      *(short *)(__ptr + 7) = param_4;
      *(short *)((int)__ptr + 0x1e) = param_4 + 1;
      if (param_2 == 0) {
        iVar6 = DAT_00018148 + 0x18070;
      }
      else {
        iVar6 = DAT_00018144 + 0x18060;
      }
      uVar7 = __ptr[10];
      uVar4 = __ptr[6];
      uVar1 = *(ushort *)((int)__ptr + 0x1a);
      pcVar3 = inet_ntoa(__in);
      printf((char *)(DAT_00018154 + 0x180ec),DAT_00018150 + 0x180e4,0x38b,DAT_0001814c + 0x180d8,
             iVar6,uVar7,(uint)(ushort)uVar4,(uint)uVar1,pcVar3,(uint)(ushort)__ptr[7],
             (uint)*(ushort *)((int)__ptr + 0x1e));
    }
    else {
      __ptr[1] = *(uint *)(param_1 + 4);
      __ptr[2] = param_5;
      __ptr[3] = param_5 + 1;
      if (param_2 == 0) {
        iVar6 = DAT_00018134 + 0x17fa0;
      }
      else {
        iVar6 = DAT_00018130 + 0x17f90;
      }
      uVar4 = __ptr[10];
      pcVar3 = inet_ntoa(__in);
      printf((char *)(DAT_00018140 + 0x17ff8),DAT_0001813c + 0x17ff0,0x37e,DAT_00018138 + 0x17fe4,
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



/* ===== FUN_00018158 @ 00018158 size=164 ===== */

void FUN_00018158(int param_1,int param_2)

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



/* ===== FUN_000181fc @ 000181fc size=1096 ===== */

undefined4 FUN_000181fc(int *param_1,int param_2,undefined4 param_3)

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
  printf((char *)(DAT_0001864c + 0x182d8),DAT_00018648 + 0x182d0,0x3b6,DAT_00018644 + 0x182c4);
  if (*(int *)(param_2 + 0x80) == 0) {
    FUN_0002064c(param_3,0x1cd);
    printf((char *)(DAT_00018658 + 0x18314),DAT_00018654 + 0x1830c,0x3ba,DAT_00018650 + 0x18300);
  }
  else {
    if (**(int **)(param_2 + 0x80) == 1) {
      local_c = 1;
      if ((*(uint *)(*(int *)(param_2 + 0x80) + 4) & 0x20) == 0) {
        printf((char *)(DAT_00018664 + 0x18370),DAT_00018660 + 0x18368,0x3c1,DAT_0001865c + 0x1835c)
        ;
        FUN_0002064c(param_3,0x1cd);
        return 0;
      }
    }
    else if ((*(uint *)(*(int *)(param_2 + 0x80) + 4) & 8) == 0) {
      printf((char *)(DAT_00018670 + 0x183bc),DAT_0001866c + 0x183b4,0x3c7,DAT_00018668 + 0x183a8);
      FUN_0002064c(param_3,0x1cd);
      return 0;
    }
    snprintf(local_5c,0x3f,(char *)(DAT_00018678 + 0x183f0),local_14,DAT_00018674 + 0x183e4);
    snprintf(local_9c,0x3f,(char *)(DAT_00018680 + 0x18414),local_14,DAT_0001867c + 0x18408);
    if ((*(int *)(local_14 + 0x40) == 0) ||
       (iVar1 = FUN_0001674c(local_5c,param_2 + 0x2e), iVar1 == 0)) {
      if ((*(int *)(local_14 + 0x44) == 0) ||
         (iVar1 = FUN_0001674c(local_9c,param_2 + 0x2e), iVar1 == 0)) {
        printf((char *)(DAT_0001868c + 0x184c4),DAT_00018688 + 0x184bc,0x3d4,DAT_00018684 + 0x184b0,
               param_2 + 0x2e);
        FUN_0002064c(param_3,0x1cd);
        return 0;
      }
      local_10 = 1;
    }
    else {
      local_10 = 0;
    }
    FUN_00018158(param_1,local_10);
    local_1c = FUN_00017e78(param_1,local_10,local_c,*(undefined2 *)(*(int *)(param_2 + 0x80) + 0xc)
                            ,*(undefined1 *)(*(int *)(param_2 + 0x80) + 0x10));
    if (local_1c < 0) {
      FUN_0002064c(param_3,500);
    }
    else {
      if (local_10 == 0) {
        local_18 = param_1[0x105];
      }
      else {
        local_18 = param_1[0x106];
      }
      if (local_c == 0) {
        FUN_000209cc(param_3,*(undefined4 *)(local_18 + 0x28),*(undefined2 *)(local_18 + 0x1c),
                     *(undefined2 *)(local_18 + 0x18));
      }
      else {
        FUN_00020ae8(param_3,*(undefined4 *)(local_18 + 0x28),*(undefined4 *)(local_18 + 8));
      }
      if (*param_1 == 2) {
        if (local_10 == 0) {
          uVar2 = *(undefined4 *)(local_14 + 0x138);
        }
        else {
          uVar2 = *(undefined4 *)(local_14 + 0x13c);
        }
        uVar2 = FUN_00021464(uVar2);
        *(undefined4 *)(local_18 + 0x24) = uVar2;
      }
      if (*param_1 == 0) {
        *param_1 = 1;
        iVar1 = FUN_0001f75c();
        param_1[3] = iVar1;
        FUN_000207c8(param_3,param_1[3]);
      }
    }
  }
  return 0;
}



/* ===== FUN_00018690 @ 00018690 size=184 ===== */

undefined4 FUN_00018690(int *param_1,undefined4 param_2,undefined4 param_3)

{
  printf((char *)(DAT_00018750 + 0x186c8),DAT_0001874c + 0x186c0,0x3fb,DAT_00018748 + 0x186b4);
  if ((*param_1 == 1) || (*param_1 == 2)) {
    if (*param_1 != 1) {
      *param_1 = 1;
    }
  }
  else {
    FUN_0002064c(param_3,0x1c7);
    printf((char *)(DAT_0001875c + 0x18714),DAT_00018758 + 0x1870c,0x3ff,DAT_00018754 + 0x18700);
  }
  return 0;
}



/* ===== FUN_00018760 @ 00018760 size=324 ===== */

undefined4 FUN_00018760(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[0x108];
  printf((char *)(DAT_000188ac + 0x187a4),DAT_000188a8 + 0x1879c,0x40d,DAT_000188a4 + 0x18790);
  if ((*param_1 == 1) || (*param_1 == 2)) {
    if (*param_1 != 2) {
      if ((param_1[0x105] != 0) && (*(int *)(iVar2 + 0x138) != 0)) {
        iVar3 = param_1[0x105];
        uVar1 = FUN_00021464(*(undefined4 *)(iVar2 + 0x138));
        *(undefined4 *)(iVar3 + 0x24) = uVar1;
      }
      if ((param_1[0x106] != 0) && (*(int *)(iVar2 + 0x13c) != 0)) {
        iVar3 = param_1[0x106];
        uVar1 = FUN_00021464(*(undefined4 *)(iVar2 + 0x13c));
        *(undefined4 *)(iVar3 + 0x24) = uVar1;
      }
      *param_1 = 2;
    }
  }
  else {
    FUN_0002064c(param_3,0x1c7);
    printf((char *)(DAT_000188b8 + 0x187f0),DAT_000188b4 + 0x187e8,0x411,DAT_000188b0 + 0x187dc);
  }
  return 0;
}



/* ===== FUN_000188bc @ 000188bc size=456 ===== */

undefined4 FUN_000188bc(undefined4 *param_1,int param_2)

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
  printf((char *)(DAT_00018a8c + 0x18980),DAT_00018a88 + 0x18978,0x425,DAT_00018a84 + 0x1896c);
  snprintf(local_4c,0x3f,(char *)(DAT_00018a94 + 0x189a0),local_c,DAT_00018a90 + 0x18994);
  snprintf(local_8c,0x3f,(char *)(DAT_00018a9c + 0x189c4),local_c,DAT_00018a98 + 0x189b8);
  iVar1 = FUN_0001674c(local_4c,param_2 + 0x2e);
  if (iVar1 == 0) {
    iVar1 = FUN_0001674c(local_8c,param_2 + 0x2e);
    if (iVar1 == 0) {
      FUN_00018158(param_1,0);
      FUN_00018158(param_1,1);
    }
    else {
      FUN_00018158(param_1,1);
    }
  }
  else {
    FUN_00018158(param_1,0);
  }
  if ((param_1[0x105] == 0) && (param_1[0x106] == 0)) {
    *param_1 = 0;
  }
  return 0;
}



/* ===== FUN_00018aa0 @ 00018aa0 size=856 ===== */

undefined4 FUN_00018aa0(int *param_1,int param_2,undefined4 param_3)

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
  FUN_0002064c(param_3,200);
  FUN_000208a4(param_3,0);
  FUN_00020ee8(param_3,DAT_00018df8 + 0x18b10);
  iVar1 = FUN_00020698(param_2,&local_18);
  if (iVar1 < 0) {
    FUN_0002064c(param_3,400);
    printf((char *)(DAT_00018e04 + 0x18b60),DAT_00018e00 + 0x18b58,0x448,DAT_00018dfc + 0x18b4c);
    uVar2 = 0;
  }
  else {
    FUN_000206f8(param_3,local_18);
    if (*param_1 != 0) {
      iVar1 = FUN_00020768(param_2,&local_1c);
      if ((iVar1 < 0) || (param_1[3] != local_1c)) {
        printf((char *)(DAT_00018e10 + 0x18bd8),DAT_00018e0c + 0x18bd0,0x44f,DAT_00018e08 + 0x18bc4)
        ;
        FUN_0002064c(param_3,0x1c6);
        return 0;
      }
      FUN_000207c8(param_3,local_1c);
    }
    if (local_c == 0) {
      if (*(int *)(param_2 + 4) != 0) {
        local_c = *(int *)(local_10 + 4);
        while ((local_c != 0 && (iVar1 = FUN_0001674c(local_c,local_14), iVar1 == 0))) {
          local_c = *(int *)(local_c + 0x15c);
        }
        if (local_c == 0) {
          printf((char *)(DAT_00018e28 + 0x18cf8),DAT_00018e24 + 0x18cf0,0x463,
                 DAT_00018e20 + 0x18ce4,local_14);
          FUN_0002064c(param_3,0x1c6);
          return 0;
        }
        FUN_00015dfc(param_1,local_c);
      }
    }
    else {
      iVar1 = FUN_0001674c(local_c,local_14);
      if (iVar1 == 0) {
        printf((char *)(DAT_00018e1c + 0x18c54),DAT_00018e18 + 0x18c4c,0x458,DAT_00018e14 + 0x18c40,
               local_14,local_c);
        FUN_0002064c(param_3,0x1c3);
        return 0;
      }
    }
    switch(*(undefined4 *)(param_2 + 4)) {
    case 0:
      uVar2 = FUN_00017674(param_1,param_2,param_3);
      break;
    case 1:
      uVar2 = FUN_00017724(param_1,param_2,param_3);
      break;
    case 2:
      uVar2 = FUN_000181fc(param_1,param_2,param_3);
      break;
    case 3:
      uVar2 = FUN_00018760(param_1,param_2,param_3);
      break;
    case 4:
    default:
      FUN_0002064c(param_3,0x1f5);
      uVar2 = 0;
      break;
    case 5:
      uVar2 = FUN_00018690(param_1,param_2,param_3);
      break;
    case 6:
      uVar2 = FUN_000188bc(param_1,param_2,param_3);
    }
  }
  return uVar2;
}



/* ===== FUN_00018e2c @ 00018e2c size=528 ===== */

int FUN_00018e2c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_c;
  
  if (*(int *)(param_1 + 0x410) != 0x3ff) {
    local_c = recv(*(int *)(param_1 + 4),(void *)(param_1 + 0x10 + *(int *)(param_1 + 0x410)),
                   0x3ff - *(int *)(param_1 + 0x410),0x40);
    if (local_c == 0) {
      printf((char *)(DAT_00019044 + 0x18eb8),DAT_00019040 + 0x18eb0,0x486,DAT_0001903c + 0x18ea4);
      return -1;
    }
    if (local_c == -1) {
      iVar1 = FUN_00015a38();
      if ((iVar1 != 0xb) && (iVar1 = FUN_00015a38(), iVar1 != 4)) {
        uVar2 = FUN_00015a38();
        uVar2 = FUN_00015a54(uVar2);
        printf((char *)(DAT_00019050 + 0x18f24),DAT_0001904c + 0x18f1c,0x48b,DAT_00019048 + 0x18f10,
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
    iVar1 = FUN_0001f9bc(param_2,param_1 + 0x10,*(undefined4 *)(param_1 + 0x410));
    if (iVar1 < 0) {
      printf((char *)(DAT_0001905c + 0x18fc8),DAT_00019058 + 0x18fc0,0x49a,DAT_00019054 + 0x18fb4);
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



/* ===== FUN_00019060 @ 00019060 size=268 ===== */

ssize_t FUN_00019060(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_40c;
  undefined1 auStack_408 [1020];
  size_t local_c;
  
  local_40c = 0;
  memset(auStack_408,0,0x3fc);
  local_c = FUN_0001fd78(param_2,&local_40c,0x400);
  if ((int)local_c < 0) {
    printf((char *)(DAT_00019174 + 0x190e4),DAT_00019170 + 0x190dc,0x4ad,DAT_0001916c + 0x190d0);
    local_c = -1;
  }
  else {
    local_c = send(*(int *)(param_1 + 4),&local_40c,local_c,0);
    if (local_c == -1) {
      uVar1 = FUN_00015a38();
      uVar1 = FUN_00015a54(uVar1);
      printf((char *)(DAT_00019180 + 0x19154),DAT_0001917c + 0x1914c,0x4b3,DAT_00019178 + 0x19140,
             uVar1);
      local_c = -1;
    }
  }
  return local_c;
}



/* ===== FUN_00019184 @ 00019184 size=388 ===== */

ssize_t FUN_00019184(int param_1,int param_2)

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
    iVar4 = FUN_00015a38();
    if ((iVar4 == 0xb) || (iVar4 = FUN_00015a38(), iVar4 == 4)) {
      local_18 = 0;
    }
    else {
      uVar5 = FUN_00015a38();
      uVar5 = FUN_00015a54(uVar5);
      printf((char *)(DAT_00019310 + 0x19254),DAT_0001930c + 0x1924c,0x4c6,DAT_00019308 + 0x19240,
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
      printf((char *)(DAT_0001931c + 0x192dc),DAT_00019318 + 0x192d4,0x4d0,DAT_00019314 + 0x192c8,
             pcVar6,(uint)uVar1,(uint)uVar3);
      uVar3 = ntohs(sStack_28.sa_data._0_2_);
      *(uint16_t *)(local_14 + 0x1c) = uVar3;
    }
  }
  return local_18;
}



/* ===== FUN_00019320 @ 00019320 size=388 ===== */

ssize_t FUN_00019320(int param_1,int param_2)

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
    iVar4 = FUN_00015a38();
    if ((iVar4 == 0xb) || (iVar4 = FUN_00015a38(), iVar4 == 4)) {
      local_18 = 0;
    }
    else {
      uVar5 = FUN_00015a38();
      uVar5 = FUN_00015a54(uVar5);
      printf((char *)(DAT_000194ac + 0x193f0),DAT_000194a8 + 0x193e8,0x4e3,DAT_000194a4 + 0x193dc,
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
      printf((char *)(DAT_000194b8 + 0x19478),DAT_000194b4 + 0x19470,0x4ed,DAT_000194b0 + 0x19464,
             pcVar6,(uint)uVar1,(uint)uVar3);
      uVar3 = ntohs(sStack_28.sa_data._0_2_);
      *(uint16_t *)(local_14 + 0x1e) = uVar3;
    }
  }
  return local_18;
}



/* ===== FUN_000194bc @ 000194bc size=740 ===== */

size_t FUN_000194bc(int *param_1,void *param_2,size_t param_3)

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
      iVar1 = FUN_00015a38();
      if ((iVar1 == 0xb) || (iVar1 = FUN_00015a38(), iVar1 == 4)) {
        param_3 = 0;
      }
      else {
        pcVar2 = inet_ntoa((in_addr)param_1[8]);
        uVar3 = FUN_00015a38();
        uVar3 = FUN_00015a54(uVar3);
        printf((char *)(DAT_000197c0 + 0x19780),DAT_000197bc + 0x19778,0x528,DAT_000197b8 + 0x1976c,
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
      iVar1 = FUN_00015a38();
      if ((iVar1 == 0xb) || (iVar1 = FUN_00015a38(), iVar1 == 4)) {
        param_3 = 0;
      }
      else {
        pcVar2 = inet_ntoa((in_addr)param_1[8]);
        uVar3 = FUN_00015a38();
        uVar3 = FUN_00015a54(uVar3);
        printf((char *)(DAT_000197a8 + 0x195cc),DAT_000197a4 + 0x195c4,0x50d,DAT_000197a0 + 0x195b8,
               pcVar2,uVar3);
        param_3 = 0xffffffff;
      }
    }
    else {
      local_18 = send(local_14,param_2,param_3,0);
      if (local_18 == -1) {
        iVar1 = FUN_00015a38();
        if ((iVar1 == 0xb) || (iVar1 = FUN_00015a38(), iVar1 == 4)) {
          param_3 = 0;
        }
        else {
          pcVar2 = inet_ntoa((in_addr)param_1[8]);
          uVar3 = FUN_00015a38();
          uVar3 = FUN_00015a54(uVar3);
          printf((char *)(DAT_000197b4 + 0x19674),DAT_000197b0 + 0x1966c,0x516,
                 DAT_000197ac + 0x19660,param_3,pcVar2,uVar3);
          param_3 = 0xffffffff;
        }
      }
    }
  }
  return param_3;
}



/* ===== FUN_000197c4 @ 000197c4 size=348 ===== */

int FUN_000197c4(int param_1)

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
    iVar3 = FUN_00021320(local_1c,*(undefined4 *)(local_20 + 0x24));
    if (iVar3 < 1) {
      return local_14;
    }
    FUN_00021270(local_1c,*(undefined4 *)(local_20 + 0x24),&local_24,&local_28);
    if (0 < *local_28) {
      puVar4 = (uint32_t *)(local_24 + 8);
      uVar1 = htonl(*(uint32_t *)(local_20 + 0x28));
      *puVar4 = uVar1;
      iVar3 = FUN_000194bc(local_20,local_24,*local_28);
      if (iVar3 != *local_28) {
        return local_14;
      }
      *(int *)(local_20 + 0x2c) = *(int *)(local_20 + 0x2c) + 1;
      *(int *)(local_20 + 0x30) = *(int *)(local_20 + 0x30) + *local_28 + -0xc;
    }
    uVar2 = FUN_000213cc(local_1c,*(undefined4 *)(local_20 + 0x24));
    *(undefined4 *)(local_20 + 0x24) = uVar2;
    local_14 = local_14 + 1;
  } while( true );
}



/* ===== FUN_00019920 @ 00019920 size=348 ===== */

int FUN_00019920(int param_1)

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
    iVar3 = FUN_00021320(local_1c,*(undefined4 *)(local_20 + 0x24));
    if (iVar3 < 1) {
      return local_14;
    }
    FUN_00021270(local_1c,*(undefined4 *)(local_20 + 0x24),&local_24,&local_28);
    if (0 < *local_28) {
      puVar4 = (uint32_t *)(local_24 + 8);
      uVar1 = htonl(*(uint32_t *)(local_20 + 0x28));
      *puVar4 = uVar1;
      iVar3 = FUN_000194bc(local_20,local_24,*local_28);
      if (iVar3 != *local_28) {
        return local_14;
      }
      *(int *)(local_20 + 0x2c) = *(int *)(local_20 + 0x2c) + 1;
      *(int *)(local_20 + 0x30) = *(int *)(local_20 + 0x30) + *local_28 + -0xc;
    }
    uVar2 = FUN_000213cc(local_1c,*(undefined4 *)(local_20 + 0x24));
    *(undefined4 *)(local_20 + 0x24) = uVar2;
    local_14 = local_14 + 1;
  } while( true );
}



/* ===== FUN_00019a7c @ 00019a7c size=2952 ===== */

undefined4 FUN_00019a7c(uint *param_1)

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
           (iVar3 = FUN_00021320(*(undefined4 *)(local_2c + 0x138),local_30[9]), 0 < iVar3)) {
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
           (iVar3 = FUN_00021320(*(undefined4 *)(local_2c + 0x13c),local_34[9]), 0 < iVar3)) {
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
      printf((char *)(DAT_0001a60c + 0x1a0b8),DAT_0001a608 + 0x1a0b0,0x5c7,DAT_0001a604 + 0x1a0a4,
             pcVar2);
      uVar4 = 0xffffffff;
    }
    else if (local_38 == 0) {
      uVar4 = 0;
    }
    else {
      if ((fStack_cc.fds_bits[*local_20 >> 5] >> (*local_20 & 0x1f) & 1U) != 0) {
        FUN_00016558(local_20);
      }
      local_c = (int *)local_20[3];
LAB_0001a5e8:
      piVar1 = local_c;
      if (local_c != (int *)0x0) {
        local_1c = local_c;
        local_3c = local_c[0x108];
        local_40 = (int *)local_c[0x105];
        local_44 = (int *)local_c[0x106];
        local_c = (int *)local_c[0x109];
        if ((fStack_cc.fds_bits[(uint)piVar1[1] >> 5] >> (piVar1[1] & 0x1fU) & 1U) != 0)
        goto LAB_0001a194;
        goto LAB_0001a2dc;
      }
      uVar4 = 1;
    }
  }
  return uVar4;
LAB_0001a194:
  do {
    FUN_0001f574(local_2a4);
    FUN_0001f574(auStack_1f8);
    local_38 = FUN_00018e2c(local_1c,local_2a4);
    if (local_38 == 0) break;
    if (local_38 < 0) {
      FUN_000166a0(local_1c);
      local_1c = (int *)0x0;
      break;
    }
    if (local_2a4[0] == 2) {
      FUN_0001f5b0(local_2a4);
    }
    else if (local_2a4[0] == 0) {
      local_38 = FUN_00018aa0(local_1c,local_2a4,auStack_1f8);
      if (local_38 < 0) {
        printf((char *)(DAT_0001a624 + 0x1a28c),DAT_0001a620 + 0x1a284,0x5f8,DAT_0001a61c + 0x1a278)
        ;
      }
      else {
        FUN_00019060(local_1c,auStack_1f8);
      }
      FUN_0001f5b0(local_2a4);
      FUN_0001f5b0(auStack_1f8);
    }
    else {
      printf((char *)(DAT_0001a618 + 0x1a238),DAT_0001a614 + 0x1a230,0x5f1,DAT_0001a610 + 0x1a224);
      FUN_0001f5b0(local_2a4);
    }
  } while (local_1c != (int *)0x0);
  if (local_1c != (int *)0x0) {
LAB_0001a2dc:
    if (*local_1c == 2) {
      if ((local_40 != (int *)0x0) &&
         (iVar3 = FUN_00021320(*(undefined4 *)(local_3c + 0x138),local_40[9]), 0 < iVar3)) {
        if ((*local_40 == 0) ||
           ((fStack_14c.fds_bits[(uint)local_40[1] >> 5] >> (local_40[1] & 0x1fU) & 1U) == 0)) {
          if ((*local_40 == 0) &&
             ((fStack_14c.fds_bits[(uint)local_40[4] >> 5] >> (local_40[4] & 0x1fU) & 1U) != 0)) {
            FUN_000197c4(local_1c);
          }
        }
        else {
          FUN_000197c4(local_1c);
        }
      }
      if ((local_44 != (int *)0x0) &&
         (iVar3 = FUN_00021320(*(undefined4 *)(local_3c + 0x13c),local_44[9]), 0 < iVar3)) {
        if ((*local_44 == 0) ||
           ((fStack_14c.fds_bits[(uint)local_44[1] >> 5] >> (local_44[1] & 0x1fU) & 1U) == 0)) {
          if ((*local_44 == 0) &&
             ((fStack_14c.fds_bits[(uint)local_44[4] >> 5] >> (local_44[4] & 0x1fU) & 1U) != 0)) {
            FUN_00019920(local_1c);
          }
        }
        else {
          FUN_00019920(local_1c);
        }
      }
      if ((local_40 != (int *)0x0) && (*local_40 == 0)) {
        if ((fStack_cc.fds_bits[(uint)local_40[4] >> 5] >> (local_40[4] & 0x1fU) & 1U) != 0) {
          FUN_00019184(local_1c,0);
        }
        if ((fStack_cc.fds_bits[(uint)local_40[5] >> 5] >> (local_40[5] & 0x1fU) & 1U) != 0) {
          FUN_00019320(local_1c,0);
        }
      }
      if ((local_44 != (int *)0x0) && (*local_44 == 0)) {
        if ((fStack_cc.fds_bits[(uint)local_44[4] >> 5] >> (local_44[4] & 0x1fU) & 1U) != 0) {
          FUN_00019184(local_1c,1);
        }
        if ((fStack_cc.fds_bits[(uint)local_44[5] >> 5] >> (local_44[5] & 0x1fU) & 1U) != 0) {
          FUN_00019320(local_1c,1);
        }
      }
    }
  }
  goto LAB_0001a5e8;
}



/* ===== FUN_0001a628 @ 0001a628 size=1940 ===== */

int FUN_0001a628(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
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
    local_1c = FUN_00021464(local_30);
    for (local_18 = 0; local_18 < 600; local_18 = local_18 + 1) {
      iVar3 = FUN_000213cc(local_30,local_1c);
      iVar4 = FUN_00021428(local_30);
      if (iVar3 == iVar4) {
        FUN_00021548(local_30);
      }
      FUN_00021270(local_30,local_1c,aiStack_9a0 + local_18,auStack_1c64 + local_18);
      aiStack_1304[local_18] = 0x5b0;
      local_1c = FUN_000213cc(local_30,local_1c);
    }
    aiStack_9a0[local_18] = 0;
    aiStack_1304[local_18] = 0;
    for (local_14 = *(int **)(local_2c + 0x154); local_14 != (int *)0x0;
        local_14 = (int *)local_14[0x10b]) {
      local_34 = local_14[0x105];
      if (((*local_14 == 2) && (local_34 != 0)) &&
         ((iVar3 = FUN_00021320(local_30,*(undefined4 *)(local_34 + 0x24)), iVar3 == 0 &&
          (iVar4 = *(int *)(local_34 + 0x24), iVar3 = FUN_00021464(local_30), iVar4 != iVar3)))) {
        uVar1 = FUN_00021428(local_30);
        *(undefined4 *)(local_34 + 0x24) = uVar1;
        pcVar2 = inet_ntoa((in_addr)local_14[2]);
        printf((char *)(DAT_0001adc4 + 0x1a8d0),DAT_0001adc0 + 0x1a8c8,0x658,DAT_0001adbc + 0x1a8bc,
               pcVar2);
      }
    }
    if (*(int *)(local_2c + 0x40) == 1) {
      if (((*(int *)(local_2c + 0xcc) == 0) || (*(int *)(local_2c + 0xcc) == 0)) &&
         (iVar3 = FUN_000220d8(param_2,param_3,local_2c + 0x48), iVar3 < 0)) {
        printf((char *)(DAT_0001add0 + 0x1a980),DAT_0001adcc + 0x1a978,0x660,DAT_0001adc8 + 0x1a96c)
        ;
      }
    }
    else if ((*(int *)(local_2c + 0x40) == 2) &&
            ((((*(int *)(local_2c + 0x110) == 0 || (*(int *)(local_2c + 0x110) == 0)) ||
              (*(int *)(local_2c + 0x108) == 0)) &&
             (iVar3 = FUN_00022110(param_2,param_3,local_2c + 0x48), iVar3 < 0)))) {
      printf((char *)(DAT_0001addc + 0x1aa08),DAT_0001add8 + 0x1aa00,0x66a,DAT_0001add4 + 0x1a9f4);
    }
    local_24 = 0;
    local_20 = 0;
    while( true ) {
      if (((param_3 <= local_24) || (aiStack_9a0[local_20] == 0)) || (aiStack_1304[local_20] < 1))
      goto LAB_0001aca8;
      local_38 = 0;
      local_1c68 = 0;
      local_38 = FUN_00021890(param_2 + local_24,param_3 - local_24,&local_1c68);
      if (local_38 == 0) break;
      if (*(int *)(local_2c + 0x40) == 1) {
        local_28 = FUN_00022908(local_2c + 0x118,local_38,local_1c68,param_6,param_5,param_6,
                                aiStack_9a0 + local_20,aiStack_1304 + local_20);
        if (local_28 < 1) {
          printf((char *)(DAT_0001adf4 + 0x1ab68),DAT_0001adf0 + 0x1ab60,0x685,
                 DAT_0001adec + 0x1ab54,local_28);
          return -1;
        }
      }
      else if (*(int *)(local_2c + 0x40) == 2) {
        local_28 = FUN_00022ea4(local_2c + 0x118,local_38,local_1c68,param_6,param_5,param_6,
                                aiStack_9a0 + local_20,aiStack_1304 + local_20);
        if (local_28 < 1) {
          printf((char *)(DAT_0001ae00 + 0x1ac04),DAT_0001adfc + 0x1abfc,0x68c,
                 DAT_0001adf8 + 0x1abf0,local_28);
          return -1;
        }
      }
      local_20 = local_20 + local_28;
      local_24 = (local_38 - param_2) + local_1c68;
    }
    printf((char *)(DAT_0001ade8 + 0x1aab4),DAT_0001ade4 + 0x1aaac,0x67c,DAT_0001ade0 + 0x1aaa0);
LAB_0001aca8:
    for (local_18 = 0; local_18 < local_20; local_18 = local_18 + 1) {
      *(int *)auStack_1c64[local_18] = aiStack_1304[local_18];
      FUN_000214a0(local_30);
    }
    for (local_14 = *(int **)(local_2c + 0x154); local_14 != (int *)0x0;
        local_14 = (int *)local_14[0x10b]) {
      local_3c = local_14[0x105];
      if ((*local_14 == 2) && (local_3c != 0)) {
        FUN_0001bcb8(local_3c,*(undefined4 *)(local_2c + 0x144),*(undefined4 *)(local_2c + 0x140),
                     *(undefined4 *)(local_2c + 0x144),param_5,param_6,
                     *(undefined4 *)(local_2c + 0x120));
        FUN_000197c4(local_14);
      }
    }
  }
  return param_3;
}



/* ===== FUN_0001ae04 @ 0001ae04 size=1968 ===== */

int FUN_0001ae04(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 param_5,
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
    local_1c = FUN_00021464(local_30);
    for (local_18 = 0; local_18 < 600; local_18 = local_18 + 1) {
      iVar3 = FUN_000213cc(local_30,local_1c);
      iVar4 = FUN_00021428(local_30);
      if (iVar3 == iVar4) {
        FUN_00021548(local_30);
      }
      FUN_00021270(local_30,local_1c,aiStack_9a0 + local_18,auStack_1c64 + local_18);
      aiStack_1304[local_18] = 0x5b0;
      local_1c = FUN_000213cc(local_30,local_1c);
    }
    aiStack_9a0[local_18] = 0;
    aiStack_1304[local_18] = 0;
    for (local_14 = *(int **)(local_2c + 0x154); local_14 != (int *)0x0;
        local_14 = (int *)local_14[0x10b]) {
      local_34 = local_14[0x105];
      if (((*local_14 == 2) && (local_34 != 0)) &&
         ((iVar3 = FUN_00021320(local_30,*(undefined4 *)(local_34 + 0x24)), iVar3 == 0 &&
          (iVar4 = *(int *)(local_34 + 0x24), iVar3 = FUN_00021464(local_30), iVar4 != iVar3)))) {
        uVar1 = FUN_00021428(local_30);
        *(undefined4 *)(local_34 + 0x24) = uVar1;
        pcVar2 = inet_ntoa((in_addr)local_14[2]);
        printf((char *)(DAT_0001b5bc + 0x1b0b8),DAT_0001b5b8 + 0x1b0b0,0x6c9,DAT_0001b5b4 + 0x1b0a4,
               pcVar2);
      }
    }
    if (*(int *)(local_2c + 0x40) == 1) {
      if (((*(int *)(local_2c + 0xcc) == 0) || (*(int *)(local_2c + 0xcc) == 0)) &&
         (iVar3 = FUN_000220d8(param_3,param_4,local_2c + 0x48), iVar3 < 0)) {
        printf((char *)(DAT_0001b5c8 + 0x1b168),DAT_0001b5c4 + 0x1b160,0x6d1,DAT_0001b5c0 + 0x1b154)
        ;
      }
    }
    else if ((*(int *)(local_2c + 0x40) == 2) &&
            ((((*(int *)(local_2c + 0x110) == 0 || (*(int *)(local_2c + 0x110) == 0)) ||
              (*(int *)(local_2c + 0x108) == 0)) &&
             (iVar3 = FUN_00022110(param_3,param_4,local_2c + 0x48), iVar3 < 0)))) {
      printf((char *)(DAT_0001b5d4 + 0x1b1f0),DAT_0001b5d0 + 0x1b1e8,0x6db,DAT_0001b5cc + 0x1b1dc);
    }
    local_24 = 0;
    local_20 = 0;
    while( true ) {
      if (((param_4 <= local_24) || (aiStack_9a0[local_20] == 0)) || (aiStack_1304[local_20] < 1))
      goto LAB_0001b490;
      local_38 = 0;
      local_1c68 = 0;
      local_38 = FUN_00021890(param_3 + local_24,param_4 - local_24,&local_1c68);
      if (local_38 == 0) break;
      if (*(int *)(local_2c + 0x40) == 1) {
        local_28 = FUN_00022908(local_2c + 0x118,local_38,local_1c68,param_6,param_5,param_6,
                                aiStack_9a0 + local_20,aiStack_1304 + local_20);
        if (local_28 < 1) {
          printf((char *)(DAT_0001b5ec + 0x1b350),DAT_0001b5e8 + 0x1b348,0x6f6,
                 DAT_0001b5e4 + 0x1b33c,local_28);
          return -1;
        }
      }
      else if (*(int *)(local_2c + 0x40) == 2) {
        local_28 = FUN_00022ea4(local_2c + 0x118,local_38,local_1c68,param_6,param_5,param_6,
                                aiStack_9a0 + local_20,aiStack_1304 + local_20);
        if (local_28 < 1) {
          printf((char *)(DAT_0001b5f8 + 0x1b3ec),DAT_0001b5f4 + 0x1b3e4,0x6fd,
                 DAT_0001b5f0 + 0x1b3d8,local_28);
          return -1;
        }
      }
      local_20 = local_20 + local_28;
      local_24 = (local_38 - param_3) + local_1c68;
    }
    printf((char *)(DAT_0001b5e0 + 0x1b29c),DAT_0001b5dc + 0x1b294,0x6ed,DAT_0001b5d8 + 0x1b288);
LAB_0001b490:
    for (local_18 = 0; local_18 < local_20; local_18 = local_18 + 1) {
      *(int *)auStack_1c64[local_18] = aiStack_1304[local_18];
      FUN_000214a0(local_30);
    }
    for (local_14 = *(int **)(local_2c + 0x154); local_14 != (int *)0x0;
        local_14 = (int *)local_14[0x10b]) {
      local_3c = local_14[0x105];
      if ((*local_14 == 2) && (local_3c != 0)) {
        FUN_0001bcb8(local_3c,*(undefined4 *)(local_2c + 0x144),*(undefined4 *)(local_2c + 0x140),
                     *(undefined4 *)(local_2c + 0x144),param_5,param_6,
                     *(undefined4 *)(local_2c + 0x120));
        FUN_000197c4(local_14);
      }
    }
    FUN_00019a7c(param_1);
  }
  return param_4;
}



/* ===== FUN_0001b5fc @ 0001b5fc size=1140 ===== */

undefined4
FUN_0001b5fc(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
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
    local_1c = FUN_00021464(local_28);
    for (local_18 = 0; local_18 < 0x14; local_18 = local_18 + 1) {
      iVar3 = FUN_000213cc(local_28,local_1c);
      iVar4 = FUN_00021428(local_28);
      if (iVar3 == iVar4) {
        FUN_00021548(local_28);
      }
      FUN_00021270(local_28,local_1c,auStack_84 + local_18,auStack_128 + local_18);
      auStack_d8[local_18] = 0x5b0;
      local_1c = FUN_000213cc(local_28,local_1c);
    }
    auStack_84[local_18] = 0;
    auStack_d8[local_18] = 0;
    for (local_14 = *(int **)(local_24 + 0x154); local_14 != (int *)0x0;
        local_14 = (int *)local_14[0x10b]) {
      local_2c = local_14[0x106];
      if (((*local_14 == 2) && (local_2c != 0)) &&
         ((iVar3 = FUN_00021320(local_28,*(undefined4 *)(local_2c + 0x24)), iVar3 == 0 &&
          (iVar4 = *(int *)(local_2c + 0x24), iVar3 = FUN_00021464(local_28), iVar4 != iVar3)))) {
        uVar1 = FUN_00021428(local_28);
        *(undefined4 *)(local_2c + 0x24) = uVar1;
        pcVar2 = inet_ntoa((in_addr)local_14[2]);
        printf((char *)(DAT_0001ba78 + 0x1b844),DAT_0001ba74 + 0x1b83c,0x73c,DAT_0001ba70 + 0x1b830,
               pcVar2);
      }
    }
    iVar3 = *(int *)(local_24 + 0x44);
    if (0x4000 < iVar3) {
      if (iVar3 < 0x4003) {
        local_20 = FUN_00023478(local_24 + 0x128,param_2,param_3,param_6,param_5,param_6,auStack_84,
                                auStack_d8);
        if (local_20 < 1) {
          printf((char *)(DAT_0001ba84 + 0x1b8f4),DAT_0001ba80 + 0x1b8ec,0x745,
                 DAT_0001ba7c + 0x1b8e0,local_20);
          return 0xffffffff;
        }
      }
      else if (iVar3 == 0x4003) {
        local_20 = FUN_00023790(local_24 + 0x128,param_2,param_3,param_6,param_5,param_6,auStack_84,
                                auStack_d8);
        if (local_20 < 1) {
          printf((char *)(DAT_0001ba90 + 0x1b960),DAT_0001ba8c + 0x1b958,0x74c,
                 DAT_0001ba88 + 0x1b94c,local_20);
          return 0xffffffff;
        }
      }
    }
    for (local_18 = 0; local_18 < local_20; local_18 = local_18 + 1) {
      *(undefined4 *)auStack_128[local_18] = auStack_d8[local_18];
      FUN_000214a0(local_28);
    }
    for (local_14 = *(int **)(local_24 + 0x154); local_14 != (int *)0x0;
        local_14 = (int *)local_14[0x10b]) {
      local_30 = local_14[0x106];
      if ((*local_14 == 2) && (local_30 != 0)) {
        FUN_0001bcb8(local_30,*(undefined4 *)(local_24 + 0x14c),*(undefined4 *)(local_24 + 0x148),
                     *(undefined4 *)(local_24 + 0x14c),param_5,param_6,
                     *(undefined4 *)(local_24 + 0x130));
        FUN_00019920(local_14);
      }
    }
  }
  return param_3;
}



/* ===== FUN_0001ba94 @ 0001ba94 size=148 ===== */

longlong FUN_0001ba94(void)

{
  longlong lVar1;
  timespec local_18;
  
  clock_gettime(1,&local_18);
  lVar1 = FUN_000238dc(local_18.tv_nsec,local_18.tv_nsec >> 0x1f,1000,0);
  return lVar1 + CONCAT44((local_18.tv_sec >> 0x1f) * 1000000 +
                          (int)((ulonglong)(uint)local_18.tv_sec * 1000000 >> 0x20),
                          (int)((ulonglong)(uint)local_18.tv_sec * 1000000));
}



/* ===== FUN_0001bb28 @ 0001bb28 size=120 ===== */

undefined8 FUN_0001bb28(void)

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



/* ===== FUN_0001bba0 @ 0001bba0 size=48 ===== */

longlong FUN_0001bba0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_0001bb28();
  return lVar1 + CONCAT44(DAT_0001bbd4,DAT_0001bbd0);
}



/* ===== FUN_0001bbd8 @ 0001bbd8 size=112 ===== */

undefined4
FUN_0001bbd8(int param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,int param_6)

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



/* ===== FUN_0001bcb8 @ 0001bcb8 size=1168 ===== */

size_t FUN_0001bcb8(int *param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,
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
    uVar6 = (int)((ulonglong)*(undefined8 *)(param_1 + 0xe) >> 0x20) + DAT_0001c024 +
            (uint)CARRY4(uVar8,DAT_0001c020);
    bVar7 = uVar6 <= param_6;
    if (param_6 == uVar6) {
      bVar7 = uVar8 + DAT_0001c020 <= param_5;
    }
    if (!bVar7) {
      return 0;
    }
  }
  uStack_3c = uStack_48;
  local_38 = local_44;
  local_14 = FUN_000238dc(param_3 + param_5,param_4 + param_6 + (uint)CARRY4(param_3,param_5),
                          1000000,0);
  FUN_000238dc(param_3 + param_5,param_4 + param_6 + (uint)CARRY4(param_3,param_5),1000000,0);
  local_18 = FUN_000238dc(0,extraout_r2,1000000,0);
  local_1c = FUN_000238dc((int)((ulonglong)param_7 * (ulonglong)param_5),
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
      iVar2 = FUN_00015a38();
      if ((iVar2 != 0xb) && (iVar2 = FUN_00015a38(), iVar2 != 4)) {
        pcVar3 = inet_ntoa((in_addr)param_1[8]);
        uVar4 = FUN_00015a38();
        uVar4 = FUN_00015a54(uVar4);
        printf((char *)(DAT_0001c03c + 0x1c13c),DAT_0001c038 + 0x1c134,0x7f0,DAT_0001c034 + 0x1c128,
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
      iVar2 = FUN_00015a38();
      if ((iVar2 != 0xb) && (iVar2 = FUN_00015a38(), iVar2 != 4)) {
        pcVar3 = inet_ntoa((in_addr)param_1[8]);
        uVar4 = FUN_00015a38();
        uVar4 = FUN_00015a54(uVar4);
        printf((char *)(DAT_0001c030 + 0x1c010),DAT_0001c02c + 0x1c008,0x7de,DAT_0001c028 + 0x1bffc,
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



/* ===== FUN_0001c168 @ 0001c168 size=68 ===== */

void * FUN_0001c168(size_t param_1)

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



/* ===== FUN_0001c1ac @ 0001c1ac size=48 ===== */

void FUN_0001c1ac(void *param_1)

{
  if (param_1 != (void *)0x0) {
    free(param_1);
  }
  return;
}



/* ===== FUN_0001c1dc @ 0001c1dc size=104 ===== */

void * FUN_0001c1dc(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = calloc(1,param_2);
  if ((__dest != (void *)0x0) && (param_1 != (void *)0x0)) {
    memcpy(__dest,param_1,param_2);
  }
  return __dest;
}



/* ===== FUN_0001c244 @ 0001c244 size=120 ===== */

void * FUN_0001c244(char *param_1)

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



/* ===== FUN_0001c2bc @ 0001c2bc size=172 ===== */

undefined4 FUN_0001c2bc(int param_1,int param_2,int param_3)

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



/* ===== FUN_0001c368 @ 0001c368 size=204 ===== */

undefined4 FUN_0001c368(int param_1,int param_2,char *param_3)

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



/* ===== FUN_0001c434 @ 0001c434 size=928 ===== */

int FUN_0001c434(byte *param_1,int *param_2)

{
  byte *__src;
  int iVar1;
  int iVar2;
  size_t local_1c;
  byte *local_18;
  byte *local_14;
  
  iVar2 = DAT_0001c7d4 + 0x1c454;
  local_14 = param_1;
  iVar1 = FUN_0001c368(DAT_0001c7d8 + 0x1c46c,3,param_1);
  *param_2 = iVar1;
  if (*param_2 == 2) {
    printf((char *)(DAT_0001c7e4 + 0x1c4b8),DAT_0001c7e0 + 0x1c4b0,0xaa,DAT_0001c7dc + 0x1c4a4,
           param_1);
    iVar1 = -1;
  }
  else {
    *(undefined2 *)(param_2 + 1) = 0;
    *(undefined1 *)((int)param_2 + 6) = 0;
    *(undefined1 *)((int)param_2 + 0x26) = 0;
    for (; ((*(ushort *)(**(int **)(iVar2 + DAT_0001c7e8) + (uint)*local_14 * 2) & 2) != 0 ||
           (*local_14 == 0x3a)); local_14 = local_14 + 1) {
    }
    if ((*local_14 == 0x2f) && (local_14[1] == 0x2f)) {
      local_14 = local_14 + 2;
      for (local_18 = local_14;
          (((*(ushort *)(**(int **)(iVar2 + DAT_0001c7e8) + (uint)*local_18 * 2) & 0x80) != 0 &&
           (*local_18 != 0x3a)) && (*local_18 != 0x2f)); local_18 = local_18 + 1) {
      }
      if (*local_18 == 0x3a) {
        iVar1 = sscanf((char *)(local_18 + 1),(char *)(DAT_0001c7f8 + 0x1c61c),&local_1c);
        if (iVar1 != 1) {
          printf((char *)(DAT_0001c804 + 0x1c654),DAT_0001c800 + 0x1c64c,0xbc,DAT_0001c7fc + 0x1c640
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
             (*(ushort *)(**(int **)(iVar2 + DAT_0001c7e8) + (uint)*local_18 * 2) & 0x80) != 0 &&
             (*local_18 != 0x2f)); local_18 = local_18 + 1) {
      }
      if (*local_18 == 0x2f) {
        local_14 = local_18;
        while ((*(ushort *)(**(int **)(iVar2 + DAT_0001c7e8) + (uint)*local_18 * 2) & 0x80) != 0) {
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
      printf((char *)(DAT_0001c7f4 + 0x1c57c),DAT_0001c7f0 + 0x1c574,0xb3,DAT_0001c7ec + 0x1c568,
             param_1);
      iVar1 = -1;
    }
  }
  return iVar1;
}



/* ===== FUN_0001c808 @ 0001c808 size=256 ===== */

size_t FUN_0001c808(undefined4 *param_1,char *param_2,size_t param_3)

{
  undefined4 uVar1;
  size_t sVar2;
  
  if (*(short *)(param_1 + 1) == 0) {
    uVar1 = FUN_0001c2bc(DAT_0001c910 + 0x1c8b8,3,*param_1);
    snprintf(param_2,param_3,(char *)(DAT_0001c914 + 0x1c8e8),uVar1,(int)param_1 + 6,
             (int)param_1 + 0x26);
  }
  else {
    uVar1 = FUN_0001c2bc(DAT_0001c908 + 0x1c850,3,*param_1);
    snprintf(param_2,param_3,(char *)(DAT_0001c90c + 0x1c88c),uVar1,(int)param_1 + 6,
             (uint)*(ushort *)(param_1 + 1),(int)param_1 + 0x26);
  }
  sVar2 = strlen(param_2);
  return sVar2;
}



/* ===== FUN_0001c918 @ 0001c918 size=788 ===== */

undefined4 FUN_0001c918(undefined4 *param_1,byte *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int local_18;
  byte *local_14;
  
  iVar2 = DAT_0001cc2c + 0x1c938;
  local_14 = param_2;
  local_18 = FUN_0001c368(DAT_0001cc30 + 0x1c950,0xc,param_2);
  if (local_18 == 0xb) {
    local_18 = FUN_0001c368(DAT_0001cc48 + 0x1cab8,2,local_14);
    if (local_18 == 1) {
      if (*local_14 == 0x24) {
        *param_1 = 2;
        *(byte *)(param_1 + 1) = local_14[1];
        *(undefined2 *)((int)param_1 + 6) = *(undefined2 *)(local_14 + 2);
        *(undefined1 *)(param_1 + 2) = 0;
        uVar1 = 0;
      }
      else {
        printf((char *)(DAT_0001cc64 + 0x1cbdc),DAT_0001cc60 + 0x1cbd4,0x10c,DAT_0001cc5c + 0x1cbc8,
               param_2);
        uVar1 = 0xffffffff;
      }
    }
    else {
      *param_1 = 1;
      param_1[1] = local_18;
      while ((*(ushort *)(**(int **)(iVar2 + DAT_0001cc34) + (uint)*local_14 * 2) & 0x80) != 0) {
        local_14 = local_14 + 1;
      }
      local_14 = local_14 + 1;
      iVar2 = sscanf((char *)local_14,(char *)(DAT_0001cc4c + 0x1cb48),&local_18);
      if (iVar2 == 1) {
        param_1[2] = local_18;
        uVar1 = 0;
      }
      else {
        printf((char *)(DAT_0001cc58 + 0x1cb84),DAT_0001cc54 + 0x1cb7c,0x104,DAT_0001cc50 + 0x1cb70,
               param_2);
        uVar1 = 0xffffffff;
      }
    }
  }
  else {
    *param_1 = 0;
    param_1[1] = local_18;
    while ((*(ushort *)(**(int **)(iVar2 + DAT_0001cc34) + (uint)*local_14 * 2) & 0x80) != 0) {
      local_14 = local_14 + 1;
    }
    local_14 = local_14 + 1;
    local_18 = FUN_0001c434(local_14,param_1 + 2);
    if (local_18 < 1) {
      uVar1 = 0xffffffff;
    }
    else {
      while ((*(ushort *)(**(int **)(iVar2 + DAT_0001cc34) + (uint)*local_14 * 2) & 0x80) != 0) {
        local_14 = local_14 + 1;
      }
      local_14 = local_14 + 1;
      local_18 = FUN_0001c368(DAT_0001cc38 + 0x1ca54,2,local_14);
      if (local_18 == 1) {
        printf((char *)(DAT_0001cc44 + 0x1ca94),DAT_0001cc40 + 0x1ca8c,0xf7,DAT_0001cc3c + 0x1ca80,
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



/* ===== FUN_0001cc68 @ 0001cc68 size=536 ===== */

char * FUN_0001cc68(int *param_1,char *param_2,size_t param_3)

{
  undefined4 uVar1;
  size_t sVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  
  if (*param_1 == 0) {
    uVar1 = FUN_0001c2bc(DAT_0001ce80 + 0x1ccb8,0xc,param_1[1]);
    snprintf(param_2,param_3,(char *)(DAT_0001ce84 + 0x1cccc),uVar1);
    sVar2 = strlen(param_2);
    pcVar5 = param_2 + sVar2;
    iVar6 = param_3 - sVar2;
    if (iVar6 < 2) {
      pcVar5 = pcVar5 + -(int)param_2;
    }
    else {
      iVar3 = FUN_0001c808(param_1 + 2,pcVar5,iVar6);
      pcVar5 = pcVar5 + iVar3;
      if (iVar6 - iVar3 < 2) {
        pcVar5 = pcVar5 + -(int)param_2;
      }
      else {
        uVar1 = FUN_0001c2bc(DAT_0001ce88 + 0x1cd98,2,param_1[0x1c]);
        snprintf(pcVar5,iVar6 - iVar3,(char *)(DAT_0001ce8c + 0x1cdac),uVar1);
        sVar2 = strlen(pcVar5);
        pcVar5 = pcVar5 + (sVar2 - (int)param_2);
      }
    }
  }
  else if (*param_1 == 1) {
    uVar1 = FUN_0001c2bc(DAT_0001ce90 + 0x1ce0c,2,param_1[1]);
    iVar6 = param_1[2];
    uVar4 = FUN_0001c2bc(DAT_0001ce94 + 0x1ce38,0x2b,param_1[2]);
    snprintf(param_2,param_3,(char *)(DAT_0001ce98 + 0x1ce58),uVar1,iVar6,uVar4);
    pcVar5 = (char *)strlen(param_2);
  }
  else {
    pcVar5 = (char *)0x0;
  }
  return pcVar5;
}



/* ===== FUN_0001ce9c @ 0001ce9c size=952 ===== */

undefined4 FUN_0001ce9c(int param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_14;
  char *local_10;
  int local_c;
  
  local_c = param_1 + 4;
  if (*(int *)(param_1 + 0x80) != 0) {
    FUN_0001c1ac(*(undefined4 *)(param_1 + 0x80));
    *(undefined4 *)(local_c + 0x7c) = 0;
  }
  uVar1 = FUN_0001c168(0x14);
  *(undefined4 *)(local_c + 0x7c) = uVar1;
  if (*(int *)(local_c + 0x7c) == 0) {
    printf((char *)(DAT_0001d260 + 0x1cf38),DAT_0001d25c + 0x1cf30,0x153,DAT_0001d258 + 0x1cf24,
           DAT_0001d254 + 0x1cf18);
    uVar1 = 0xffffffff;
  }
  else {
    local_10 = strstr(param_2,(char *)(DAT_0001d264 + 0x1cf4c));
    if (local_10 == (char *)0x0) {
      printf((char *)(DAT_0001d270 + 0x1cf8c),DAT_0001d26c + 0x1cf84,0x159,DAT_0001d268 + 0x1cf78,
             param_2);
      FUN_0001c1ac(*(undefined4 *)(local_c + 0x7c));
      *(undefined4 *)(local_c + 0x7c) = 0;
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = FUN_0001c368(DAT_0001d274 + 0x1cfc4,3,local_10);
      **(undefined4 **)(local_c + 0x7c) = uVar1;
      local_10 = strstr(param_2,(char *)(DAT_0001d278 + 0x1cfe4));
      if ((local_10 != (char *)0x0) &&
         (iVar2 = sscanf(local_10,(char *)(DAT_0001d27c + 0x1d010),&local_14), iVar2 == 1)) {
        *(uint *)(*(int *)(local_c + 0x7c) + 4) = *(uint *)(*(int *)(local_c + 0x7c) + 4) | 1;
        *(undefined4 *)(*(int *)(local_c + 0x7c) + 8) = local_14;
      }
      local_10 = strstr(param_2,(char *)(DAT_0001d280 + 0x1d05c));
      if (local_10 != (char *)0x0) {
        *(uint *)(*(int *)(local_c + 0x7c) + 4) = *(uint *)(*(int *)(local_c + 0x7c) + 4) | 2;
      }
      local_10 = strstr(param_2,(char *)(DAT_0001d284 + 0x1d09c));
      if (local_10 != (char *)0x0) {
        *(uint *)(*(int *)(local_c + 0x7c) + 4) = *(uint *)(*(int *)(local_c + 0x7c) + 4) | 4;
      }
      local_10 = strstr(param_2,(char *)(DAT_0001d288 + 0x1d0dc));
      if ((local_10 != (char *)0x0) &&
         (iVar2 = sscanf(local_10,(char *)(DAT_0001d28c + 0x1d108),&local_14), iVar2 == 1)) {
        *(uint *)(*(int *)(local_c + 0x7c) + 4) = *(uint *)(*(int *)(local_c + 0x7c) + 4) | 8;
        *(short *)(*(int *)(local_c + 0x7c) + 0xc) = (short)local_14;
      }
      local_10 = strstr(param_2,(char *)(DAT_0001d290 + 0x1d158));
      if ((local_10 != (char *)0x0) &&
         (iVar2 = sscanf(local_10,(char *)(DAT_0001d294 + 0x1d184),&local_14), iVar2 == 1)) {
        *(uint *)(*(int *)(local_c + 0x7c) + 4) = *(uint *)(*(int *)(local_c + 0x7c) + 4) | 0x10;
        *(short *)(*(int *)(local_c + 0x7c) + 0xe) = (short)local_14;
      }
      local_10 = strstr(param_2,(char *)(DAT_0001d298 + 0x1d1d4));
      if ((local_10 != (char *)0x0) &&
         (iVar2 = sscanf(local_10,(char *)(DAT_0001d29c + 0x1d200),&local_14), iVar2 == 1)) {
        *(uint *)(*(int *)(local_c + 0x7c) + 4) = *(uint *)(*(int *)(local_c + 0x7c) + 4) | 0x20;
        *(undefined1 *)(*(int *)(local_c + 0x7c) + 0x10) = (undefined1)local_14;
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ===== FUN_0001d2a0 @ 0001d2a0 size=1192 ===== */

char * FUN_0001d2a0(int param_1,char *param_2,size_t param_3)

{
  undefined4 uVar1;
  size_t sVar2;
  size_t local_2c;
  char *local_14;
  
  if (*(int *)(param_1 + 0x80) == 0) {
    local_14 = (char *)0x0;
  }
  else {
    uVar1 = FUN_0001c2bc(DAT_0001d748 + 0x1d300,3,**(undefined4 **)(param_1 + 0x80));
    snprintf(param_2,param_3,(char *)(DAT_0001d74c + 0x1d314),uVar1);
    local_2c = strlen(param_2);
    local_14 = param_2 + local_2c;
    local_2c = param_3 - local_2c;
    if ((int)local_2c < 2) {
      local_14 = local_14 + -(int)param_2;
    }
    else {
      if ((*(uint *)(*(int *)(param_1 + 0x80) + 4) & 1) != 0) {
        snprintf(local_14,local_2c,(char *)(DAT_0001d750 + 0x1d39c),
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
          snprintf(local_14,local_2c,(char *)(DAT_0001d758 + 0x1d490));
          sVar2 = strlen(local_14);
          local_14 = local_14 + sVar2;
          local_2c = local_2c - sVar2;
          if ((int)local_2c < 2) {
            return local_14 + -(int)param_2;
          }
        }
      }
      else {
        snprintf(local_14,local_2c,(char *)(DAT_0001d754 + 0x1d414));
        sVar2 = strlen(local_14);
        local_14 = local_14 + sVar2;
        local_2c = local_2c - sVar2;
        if ((int)local_2c < 2) {
          return local_14 + -(int)param_2;
        }
      }
      if ((*(uint *)(*(int *)(param_1 + 0x80) + 4) & 8) != 0) {
        snprintf(local_14,local_2c,(char *)(DAT_0001d75c + 0x1d534),
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
        snprintf(local_14,local_2c,(char *)(DAT_0001d760 + 0x1d5d4),
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
        snprintf(local_14,local_2c,(char *)(DAT_0001d764 + 0x1d674),
                 (uint)*(byte *)(*(int *)(param_1 + 0x80) + 0x10),
                 *(byte *)(*(int *)(param_1 + 0x80) + 0x10) + 1);
        sVar2 = strlen(local_14);
        local_14 = local_14 + sVar2;
        local_2c = local_2c - sVar2;
        if ((int)local_2c < 2) {
          return local_14 + -(int)param_2;
        }
      }
      snprintf(local_14,local_2c,(char *)(DAT_0001d768 + 0x1d6d4));
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



/* ===== FUN_0001d794 @ 0001d794 size=44 ===== */

undefined4 FUN_0001d794(void)

{
  return 0;
}



/* ===== FUN_0001d7e8 @ 0001d7e8 size=44 ===== */

undefined4 FUN_0001d7e8(void)

{
  return 0;
}



/* ===== FUN_0001d83c @ 0001d83c size=44 ===== */

undefined4 FUN_0001d83c(void)

{
  return 0;
}



/* ===== FUN_0001d868 @ 0001d868 size=312 ===== */

undefined4 FUN_0001d868(int param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x74) != 0) {
    FUN_0001c1ac(*(undefined4 *)(param_1 + 0x74));
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  uVar1 = FUN_0001c168(4);
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  if (*(int *)(param_1 + 0x74) == 0) {
    printf((char *)(DAT_0001d9ac + 0x1d904),DAT_0001d9a8 + 0x1d8fc,0x201,DAT_0001d9a4 + 0x1d8f0,
           DAT_0001d9a0 + 0x1d8e4);
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = sscanf(param_2,(char *)(DAT_0001d9b0 + 0x1d924),*(undefined4 *)(param_1 + 0x74));
    if (iVar2 == 1) {
      uVar1 = 0;
    }
    else {
      FUN_0001c1ac(*(undefined4 *)(param_1 + 0x74));
      *(undefined4 *)(param_1 + 0x74) = 0;
      printf((char *)(DAT_0001d9c0 + 0x1d988),DAT_0001d9bc + 0x1d980,0x201,DAT_0001d9b8 + 0x1d974,
             DAT_0001d9b4 + 0x1d968,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_0001d9c4 @ 0001d9c4 size=104 ===== */

size_t FUN_0001d9c4(int param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  
  if (*(int *)(param_1 + 0x74) == 0) {
    sVar1 = 0;
  }
  else {
    snprintf(param_2,param_3,(char *)(DAT_0001da2c + 0x1da08),**(undefined4 **)(param_1 + 0x74));
    sVar1 = strlen(param_2);
  }
  return sVar1;
}



/* ===== FUN_0001da30 @ 0001da30 size=312 ===== */

undefined4 FUN_0001da30(int param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x7c) != 0) {
    FUN_0001c1ac(*(undefined4 *)(param_1 + 0x7c));
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  uVar1 = FUN_0001c168(4);
  *(undefined4 *)(param_1 + 0x7c) = uVar1;
  if (*(int *)(param_1 + 0x7c) == 0) {
    printf((char *)(DAT_0001db74 + 0x1dacc),DAT_0001db70 + 0x1dac4,0x202,DAT_0001db6c + 0x1dab8,
           DAT_0001db68 + 0x1daac);
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = sscanf(param_2,(char *)(DAT_0001db78 + 0x1daec),*(undefined4 *)(param_1 + 0x7c));
    if (iVar2 == 1) {
      uVar1 = 0;
    }
    else {
      FUN_0001c1ac(*(undefined4 *)(param_1 + 0x7c));
      *(undefined4 *)(param_1 + 0x7c) = 0;
      printf((char *)(DAT_0001db88 + 0x1db50),DAT_0001db84 + 0x1db48,0x202,DAT_0001db80 + 0x1db3c,
             DAT_0001db7c + 0x1db30,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_0001db8c @ 0001db8c size=104 ===== */

size_t FUN_0001db8c(int param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  
  if (*(int *)(param_1 + 0x7c) == 0) {
    sVar1 = 0;
  }
  else {
    snprintf(param_2,param_3,(char *)(DAT_0001dbf4 + 0x1dbd0),**(undefined4 **)(param_1 + 0x7c));
    sVar1 = strlen(param_2);
  }
  return sVar1;
}



/* ===== FUN_0001dbf8 @ 0001dbf8 size=312 ===== */

undefined4 FUN_0001dbf8(int param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xa0) != 0) {
    FUN_0001c1ac(*(undefined4 *)(param_1 + 0xa0));
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  uVar1 = FUN_0001c168(4);
  *(undefined4 *)(param_1 + 0xa0) = uVar1;
  if (*(int *)(param_1 + 0xa0) == 0) {
    printf((char *)(DAT_0001dd3c + 0x1dc94),DAT_0001dd38 + 0x1dc8c,0x203,DAT_0001dd34 + 0x1dc80,
           DAT_0001dd30 + 0x1dc74);
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = sscanf(param_2,(char *)(DAT_0001dd40 + 0x1dcb4),*(undefined4 *)(param_1 + 0xa0));
    if (iVar2 == 1) {
      uVar1 = 0;
    }
    else {
      FUN_0001c1ac(*(undefined4 *)(param_1 + 0xa0));
      *(undefined4 *)(param_1 + 0xa0) = 0;
      printf((char *)(DAT_0001dd50 + 0x1dd18),DAT_0001dd4c + 0x1dd10,0x203,DAT_0001dd48 + 0x1dd04,
             DAT_0001dd44 + 0x1dcf8,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_0001dd54 @ 0001dd54 size=104 ===== */

size_t FUN_0001dd54(int param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  
  if (*(int *)(param_1 + 0xa0) == 0) {
    sVar1 = 0;
  }
  else {
    snprintf(param_2,param_3,(char *)(DAT_0001ddbc + 0x1dd98),**(undefined4 **)(param_1 + 0xa0));
    sVar1 = strlen(param_2);
  }
  return sVar1;
}



/* ===== FUN_0001ddc0 @ 0001ddc0 size=548 ===== */

undefined4 FUN_0001ddc0(int param_1,byte *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint local_18;
  byte *local_14;
  
  iVar2 = DAT_0001dfe4 + 0x1dde0;
  local_18 = 0;
  if (*(int *)(param_1 + 0x9c) != 0) {
    FUN_0001c1ac(*(undefined4 *)(param_1 + 0x9c));
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  uVar1 = FUN_0001c168(0x40);
  *(undefined4 *)(param_1 + 0x9c) = uVar1;
  local_14 = param_2;
  if (*(int *)(param_1 + 0x9c) == 0) {
    printf((char *)(DAT_0001dff4 + 0x1de74),DAT_0001dff0 + 0x1de6c,0x22d,DAT_0001dfec + 0x1de60,
           DAT_0001dfe8 + 0x1de54);
    uVar1 = 0xffffffff;
  }
  else {
    for (; ((*(ushort *)(**(int **)(iVar2 + DAT_0001dff8) + (uint)*local_14 * 2) & 0x80) != 0 &&
           (*local_14 != 0x3a)); local_14 = local_14 + 1) {
    }
    if (*local_14 == 0x3a) {
      do {
        local_14 = local_14 + 1;
      } while (*local_14 == 0x20);
      while (((*(ushort *)(**(int **)(iVar2 + DAT_0001dff8) + (uint)*local_14 * 2) & 0x40) != 0 &&
             (local_18 < 0x3f))) {
        *(byte *)(*(int *)(param_1 + 0x9c) + local_18) = *local_14;
        local_18 = local_18 + 1;
        local_14 = local_14 + 1;
      }
      *(undefined1 *)(*(int *)(param_1 + 0x9c) + local_18) = 0;
      uVar1 = 0;
    }
    else {
      FUN_0001c1ac(*(undefined4 *)(param_1 + 0x9c));
      *(undefined4 *)(param_1 + 0x9c) = 0;
      printf((char *)(DAT_0001e008 + 0x1df24),DAT_0001e004 + 0x1df1c,0x22d,DAT_0001e000 + 0x1df10,
             DAT_0001dffc + 0x1df04,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_0001e00c @ 0001e00c size=100 ===== */

size_t FUN_0001e00c(int param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  
  if (*(int *)(param_1 + 0x9c) == 0) {
    sVar1 = 0;
  }
  else {
    snprintf(param_2,param_3,(char *)(DAT_0001e070 + 0x1e04c),*(undefined4 *)(param_1 + 0x9c));
    sVar1 = strlen(param_2);
  }
  return sVar1;
}



/* ===== FUN_0001e074 @ 0001e074 size=548 ===== */

undefined4 FUN_0001e074(int param_1,byte *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint local_18;
  byte *local_14;
  
  iVar2 = DAT_0001e298 + 0x1e094;
  local_18 = 0;
  if (*(int *)(param_1 + 0x90) != 0) {
    FUN_0001c1ac(*(undefined4 *)(param_1 + 0x90));
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  uVar1 = FUN_0001c168(0x40);
  *(undefined4 *)(param_1 + 0x90) = uVar1;
  local_14 = param_2;
  if (*(int *)(param_1 + 0x90) == 0) {
    printf((char *)(DAT_0001e2a8 + 0x1e128),DAT_0001e2a4 + 0x1e120,0x22e,DAT_0001e2a0 + 0x1e114,
           DAT_0001e29c + 0x1e108);
    uVar1 = 0xffffffff;
  }
  else {
    for (; ((*(ushort *)(**(int **)(iVar2 + DAT_0001e2ac) + (uint)*local_14 * 2) & 0x80) != 0 &&
           (*local_14 != 0x3a)); local_14 = local_14 + 1) {
    }
    if (*local_14 == 0x3a) {
      do {
        local_14 = local_14 + 1;
      } while (*local_14 == 0x20);
      while (((*(ushort *)(**(int **)(iVar2 + DAT_0001e2ac) + (uint)*local_14 * 2) & 0x40) != 0 &&
             (local_18 < 0x3f))) {
        *(byte *)(*(int *)(param_1 + 0x90) + local_18) = *local_14;
        local_18 = local_18 + 1;
        local_14 = local_14 + 1;
      }
      *(undefined1 *)(*(int *)(param_1 + 0x90) + local_18) = 0;
      uVar1 = 0;
    }
    else {
      FUN_0001c1ac(*(undefined4 *)(param_1 + 0x90));
      *(undefined4 *)(param_1 + 0x90) = 0;
      printf((char *)(DAT_0001e2bc + 0x1e1d8),DAT_0001e2b8 + 0x1e1d0,0x22e,DAT_0001e2b4 + 0x1e1c4,
             DAT_0001e2b0 + 0x1e1b8,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_0001e2c0 @ 0001e2c0 size=100 ===== */

size_t FUN_0001e2c0(int param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  
  if (*(int *)(param_1 + 0x90) == 0) {
    sVar1 = 0;
  }
  else {
    snprintf(param_2,param_3,(char *)(DAT_0001e324 + 0x1e300),*(undefined4 *)(param_1 + 0x90));
    sVar1 = strlen(param_2);
  }
  return sVar1;
}



/* ===== FUN_0001e328 @ 0001e328 size=548 ===== */

undefined4 FUN_0001e328(int param_1,byte *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint local_18;
  byte *local_14;
  
  iVar2 = DAT_0001e54c + 0x1e348;
  local_18 = 0;
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_0001c1ac(*(undefined4 *)(param_1 + 0x78));
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  uVar1 = FUN_0001c168(0x20);
  *(undefined4 *)(param_1 + 0x78) = uVar1;
  local_14 = param_2;
  if (*(int *)(param_1 + 0x78) == 0) {
    printf((char *)(DAT_0001e55c + 0x1e3dc),DAT_0001e558 + 0x1e3d4,0x22f,DAT_0001e554 + 0x1e3c8,
           DAT_0001e550 + 0x1e3bc);
    uVar1 = 0xffffffff;
  }
  else {
    for (; ((*(ushort *)(**(int **)(iVar2 + DAT_0001e560) + (uint)*local_14 * 2) & 0x80) != 0 &&
           (*local_14 != 0x3a)); local_14 = local_14 + 1) {
    }
    if (*local_14 == 0x3a) {
      do {
        local_14 = local_14 + 1;
      } while (*local_14 == 0x20);
      while (((*(ushort *)(**(int **)(iVar2 + DAT_0001e560) + (uint)*local_14 * 2) & 0x40) != 0 &&
             (local_18 < 0x1f))) {
        *(byte *)(*(int *)(param_1 + 0x78) + local_18) = *local_14;
        local_18 = local_18 + 1;
        local_14 = local_14 + 1;
      }
      *(undefined1 *)(*(int *)(param_1 + 0x78) + local_18) = 0;
      uVar1 = 0;
    }
    else {
      FUN_0001c1ac(*(undefined4 *)(param_1 + 0x78));
      *(undefined4 *)(param_1 + 0x78) = 0;
      printf((char *)(DAT_0001e570 + 0x1e48c),DAT_0001e56c + 0x1e484,0x22f,DAT_0001e568 + 0x1e478,
             DAT_0001e564 + 0x1e46c,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_0001e574 @ 0001e574 size=100 ===== */

size_t FUN_0001e574(int param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  
  if (*(int *)(param_1 + 0x78) == 0) {
    sVar1 = 0;
  }
  else {
    snprintf(param_2,param_3,(char *)(DAT_0001e5d8 + 0x1e5b4),*(undefined4 *)(param_1 + 0x78));
    sVar1 = strlen(param_2);
  }
  return sVar1;
}



/* ===== FUN_0001e5dc @ 0001e5dc size=648 ===== */

undefined4 FUN_0001e5dc(int param_1,byte *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  int local_18;
  byte *local_14;
  
  iVar3 = DAT_0001e864 + 0x1e5fc;
  if (*(int *)(param_1 + 0xa4) != 0) {
    FUN_0001c1ac(*(undefined4 *)(param_1 + 0xa4));
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  uVar1 = FUN_0001c168(4);
  *(undefined4 *)(param_1 + 0xa4) = uVar1;
  local_14 = param_2;
  if (*(int *)(param_1 + 0xa4) == 0) {
    printf((char *)(DAT_0001e874 + 0x1e698),DAT_0001e870 + 0x1e690,0x264,DAT_0001e86c + 0x1e684,
           DAT_0001e868 + 0x1e678);
  }
  else {
    for (; ((*(ushort *)(**(int **)(iVar3 + DAT_0001e878) + (uint)*local_14 * 2) & 0x80) != 0 &&
           (*local_14 != 0x3a)); local_14 = local_14 + 1) {
    }
    if (*local_14 == 0x3a) {
      do {
        local_14 = local_14 + 1;
      } while (*local_14 == 0x20);
      for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
        if ((*(int *)(DAT_0001e88c + local_18 * 0xc + 0x1e798) != 0) &&
           (pcVar2 = strstr((char *)local_14,*(char **)(DAT_0001e890 + local_18 * 0xc + 0x1e7c4)),
           pcVar2 != (char *)0x0)) {
          **(undefined4 **)(param_1 + 0xa4) =
               *(undefined4 *)(DAT_0001e894 + 0x1e800 + local_18 * 0xc);
          return 0;
        }
      }
      FUN_0001c1ac(*(undefined4 *)(param_1 + 0xa4));
      *(undefined4 *)(param_1 + 0xa4) = 0;
    }
    else {
      FUN_0001c1ac(*(undefined4 *)(param_1 + 0xa4));
      *(undefined4 *)(param_1 + 0xa4) = 0;
      printf((char *)(DAT_0001e888 + 0x1e748),DAT_0001e884 + 0x1e740,0x264,DAT_0001e880 + 0x1e734,
             DAT_0001e87c + 0x1e728,param_2);
    }
  }
  return 0xffffffff;
}



/* ===== FUN_0001e898 @ 0001e898 size=232 ===== */

size_t FUN_0001e898(int param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  int local_c;
  
  if (*(int *)(param_1 + 0xa4) != 0) {
    for (local_c = 0; local_c < 4; local_c = local_c + 1) {
      if (**(int **)(param_1 + 0xa4) == *(int *)(DAT_0001e980 + 0x1e8ec + local_c * 0xc)) {
        snprintf(param_2,param_3,(char *)(DAT_0001e988 + 0x1e934),
                 *(undefined4 *)(DAT_0001e984 + local_c * 0xc + 0x1e91c));
        sVar1 = strlen(param_2);
        return sVar1;
      }
    }
  }
  return 0;
}



/* ===== FUN_0001e98c @ 0001e98c size=636 ===== */

undefined4 FUN_0001e98c(int param_1,byte *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  int local_18;
  byte *local_14;
  
  iVar3 = DAT_0001ec08 + 0x1e9ac;
  if (*(int *)(param_1 + 0x94) != 0) {
    FUN_0001c1ac(*(undefined4 *)(param_1 + 0x94));
    *(undefined4 *)(param_1 + 0x94) = 0;
  }
  uVar1 = FUN_0001c168(4);
  *(undefined4 *)(param_1 + 0x94) = uVar1;
  local_14 = param_2;
  if (*(int *)(param_1 + 0x94) == 0) {
    printf((char *)(DAT_0001ec18 + 0x1ea48),DAT_0001ec14 + 0x1ea40,0x2ab,DAT_0001ec10 + 0x1ea34,
           DAT_0001ec0c + 0x1ea28);
    uVar1 = 0xffffffff;
  }
  else {
    for (; ((*(ushort *)(**(int **)(iVar3 + DAT_0001ec1c) + (uint)*local_14 * 2) & 0x80) != 0 &&
           (*local_14 != 0x3a)); local_14 = local_14 + 1) {
    }
    if (*local_14 == 0x3a) {
      do {
        local_14 = local_14 + 1;
      } while (*local_14 == 0x20);
      for (local_18 = 0; local_18 < 0xc; local_18 = local_18 + 1) {
        if ((*(int *)(DAT_0001ec30 + local_18 * 0xc + 0x1eb48) != 0) &&
           (pcVar2 = strstr((char *)local_14,*(char **)(DAT_0001ec34 + local_18 * 0xc + 0x1eb74)),
           pcVar2 != (char *)0x0)) {
          **(uint **)(param_1 + 0x94) =
               **(uint **)(param_1 + 0x94) |
               1 << (*(uint *)(DAT_0001ec38 + 0x1ebb0 + local_18 * 0xc) & 0xff);
        }
      }
      uVar1 = 0;
    }
    else {
      FUN_0001c1ac(*(undefined4 *)(param_1 + 0x94));
      *(undefined4 *)(param_1 + 0x94) = 0;
      printf((char *)(DAT_0001ec2c + 0x1eaf8),DAT_0001ec28 + 0x1eaf0,0x2ab,DAT_0001ec24 + 0x1eae4,
             DAT_0001ec20 + 0x1ead8,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_0001ec3c @ 0001ec3c size=568 ===== */

char * FUN_0001ec3c(int param_1,char *param_2,size_t param_3)

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
    snprintf(param_2,param_3,(char *)(DAT_0001ee78 + 0x1ec94),DAT_0001ee74 + 0x1ec8c);
    local_2c = strlen(param_2);
    local_c = param_2 + local_2c;
    local_2c = param_3 - local_2c;
    if ((int)local_2c < 2) {
      local_c = local_c + -(int)param_2;
    }
    else {
      for (local_10 = 0; local_10 < 0xc; local_10 = local_10 + 1) {
        if ((**(uint **)(param_1 + 0x94) &
            1 << (*(uint *)(DAT_0001ee7c + 0x1ed08 + local_10 * 0xc) & 0xff)) != 0) {
          if (bVar1) {
            snprintf(local_c,local_2c,(char *)(DAT_0001ee84 + 0x1ed68),
                     *(undefined4 *)(DAT_0001ee80 + local_10 * 0xc + 0x1ed50));
          }
          else {
            snprintf(local_c,local_2c,(char *)(DAT_0001ee8c + 0x1eda4),
                     *(undefined4 *)(DAT_0001ee88 + local_10 * 0xc + 0x1ed8c));
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
      snprintf(local_c,local_2c,(char *)(DAT_0001ee90 + 0x1ee2c));
      sVar2 = strlen(local_c);
      local_c = local_c + (sVar2 - (int)param_2);
    }
  }
  return local_c;
}



/* ===== FUN_0001ee94 @ 0001ee94 size=636 ===== */

undefined4 FUN_0001ee94(int param_1,byte *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  int local_18;
  byte *local_14;
  
  iVar3 = DAT_0001f110 + 0x1eeb4;
  if (*(int *)(param_1 + 0x88) != 0) {
    FUN_0001c1ac(*(undefined4 *)(param_1 + 0x88));
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  uVar1 = FUN_0001c168(4);
  *(undefined4 *)(param_1 + 0x88) = uVar1;
  local_14 = param_2;
  if (*(int *)(param_1 + 0x88) == 0) {
    printf((char *)(DAT_0001f120 + 0x1ef50),DAT_0001f11c + 0x1ef48,0x2ac,DAT_0001f118 + 0x1ef3c,
           DAT_0001f114 + 0x1ef30);
    uVar1 = 0xffffffff;
  }
  else {
    for (; ((*(ushort *)(**(int **)(iVar3 + DAT_0001f124) + (uint)*local_14 * 2) & 0x80) != 0 &&
           (*local_14 != 0x3a)); local_14 = local_14 + 1) {
    }
    if (*local_14 == 0x3a) {
      do {
        local_14 = local_14 + 1;
      } while (*local_14 == 0x20);
      for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
        if ((*(int *)(DAT_0001f138 + local_18 * 0xc + 0x1f050) != 0) &&
           (pcVar2 = strstr((char *)local_14,*(char **)(DAT_0001f13c + local_18 * 0xc + 0x1f07c)),
           pcVar2 != (char *)0x0)) {
          **(uint **)(param_1 + 0x88) =
               **(uint **)(param_1 + 0x88) |
               1 << (*(uint *)(DAT_0001f140 + 0x1f0b8 + local_18 * 0xc) & 0xff);
        }
      }
      uVar1 = 0;
    }
    else {
      FUN_0001c1ac(*(undefined4 *)(param_1 + 0x88));
      *(undefined4 *)(param_1 + 0x88) = 0;
      printf((char *)(DAT_0001f134 + 0x1f000),DAT_0001f130 + 0x1eff8,0x2ac,DAT_0001f12c + 0x1efec,
             DAT_0001f128 + 0x1efe0,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_0001f144 @ 0001f144 size=568 ===== */

char * FUN_0001f144(int param_1,char *param_2,size_t param_3)

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
    snprintf(param_2,param_3,(char *)(DAT_0001f380 + 0x1f19c),DAT_0001f37c + 0x1f194);
    local_2c = strlen(param_2);
    local_c = param_2 + local_2c;
    local_2c = param_3 - local_2c;
    if ((int)local_2c < 2) {
      local_c = local_c + -(int)param_2;
    }
    else {
      for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
        if ((**(uint **)(param_1 + 0x88) &
            1 << (*(uint *)(DAT_0001f384 + 0x1f210 + local_10 * 0xc) & 0xff)) != 0) {
          if (bVar1) {
            snprintf(local_c,local_2c,(char *)(DAT_0001f38c + 0x1f270),
                     *(undefined4 *)(DAT_0001f388 + local_10 * 0xc + 0x1f258));
          }
          else {
            snprintf(local_c,local_2c,(char *)(DAT_0001f394 + 0x1f2ac),
                     *(undefined4 *)(DAT_0001f390 + local_10 * 0xc + 0x1f294));
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
      snprintf(local_c,local_2c,(char *)(DAT_0001f398 + 0x1f334));
      sVar2 = strlen(local_c);
      local_c = local_c + (sVar2 - (int)param_2);
    }
  }
  return local_c;
}



/* ===== FUN_0001f39c @ 0001f39c size=192 ===== */

undefined4 FUN_0001f39c(char *param_1)

{
  int iVar1;
  int iVar2;
  int local_c;
  
  iVar2 = DAT_0001f45c + 0x1f3b8;
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



/* ===== FUN_0001f460 @ 0001f460 size=276 ===== */

char * FUN_0001f460(char *param_1,void *param_2,int param_3)

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



/* ===== FUN_0001f574 @ 0001f574 size=60 ===== */

undefined4 FUN_0001f574(void *param_1)

{
  if (param_1 != (void *)0x0) {
    memset(param_1,0,0xac);
  }
  return 0;
}



/* ===== FUN_0001f5b0 @ 0001f5b0 size=428 ===== */

void FUN_0001f5b0(void *param_1)

{
  if (*(int *)((int)param_1 + 0x74) != 0) {
    FUN_0001c1ac(*(undefined4 *)((int)param_1 + 0x74));
  }
  if (*(int *)((int)param_1 + 0x78) != 0) {
    FUN_0001c1ac(*(undefined4 *)((int)param_1 + 0x78));
  }
  if (*(int *)((int)param_1 + 0x7c) != 0) {
    FUN_0001c1ac(*(undefined4 *)((int)param_1 + 0x7c));
  }
  if (*(int *)((int)param_1 + 0x80) != 0) {
    FUN_0001c1ac(*(undefined4 *)((int)param_1 + 0x80));
  }
  if (*(int *)((int)param_1 + 0x84) != 0) {
    FUN_0001c1ac(*(undefined4 *)((int)param_1 + 0x84));
  }
  if (*(int *)((int)param_1 + 0x88) != 0) {
    FUN_0001c1ac(*(undefined4 *)((int)param_1 + 0x88));
  }
  if (*(int *)((int)param_1 + 0x90) != 0) {
    FUN_0001c1ac(*(undefined4 *)((int)param_1 + 0x90));
  }
  if (*(int *)((int)param_1 + 0x94) != 0) {
    FUN_0001c1ac(*(undefined4 *)((int)param_1 + 0x94));
  }
  if (*(int *)((int)param_1 + 0x9c) != 0) {
    FUN_0001c1ac(*(undefined4 *)((int)param_1 + 0x9c));
  }
  if (*(int *)((int)param_1 + 0xa4) != 0) {
    FUN_0001c1ac(*(undefined4 *)((int)param_1 + 0xa4));
  }
  if (*(int *)((int)param_1 + 0xa0) != 0) {
    FUN_0001c1ac(*(undefined4 *)((int)param_1 + 0xa0));
  }
  if (*(int *)((int)param_1 + 0xa8) != 0) {
    FUN_0001c1ac(*(undefined4 *)((int)param_1 + 0xa8));
  }
  memset(param_1,0,0xac);
  return;
}



/* ===== FUN_0001f75c @ 0001f75c size=52 ===== */

int FUN_0001f75c(void)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0001f790 + 0x1f770);
  *(int *)(DAT_0001f794 + 0x1f780) = iVar1 + 1;
  return iVar1;
}



/* ===== FUN_0001f798 @ 0001f798 size=516 ===== */

char * FUN_0001f798(char *param_1,int param_2)

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
  local_c = strstr(param_1,(char *)(DAT_0001f99c + 0x1f7d0));
  if ((local_c == (char *)0x0) || (param_2 <= (int)(local_c + (1 - (int)local_10)))) {
    if (param_2 < 0x101) {
      pcVar2 = (char *)0x0;
    }
    else {
      pcVar2 = (char *)0xffffffff;
    }
  }
  else {
    local_14 = strstr(local_10,(char *)(DAT_0001f9a0 + 0x1f82c));
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
        local_c = (char *)FUN_0001f460(local_c,0,0);
        if ((local_c == (char *)0x0) ||
           (iVar1 = strncmp(local_c,(char *)(DAT_0001f9a4 + 0x1f8ac),2), iVar1 == 0)) {
          if (param_2 < (int)(local_14 + local_18)) {
            return (char *)0x0;
          }
          return local_14 + local_18;
        }
        iVar1 = strncmp(local_c,(char *)(DAT_0001f9a8 + 0x1f8d0),0xe);
      } while ((iVar1 != 0) ||
              (iVar1 = sscanf(local_c,(char *)(DAT_0001f9ac + 0x1f8f8),&local_18), iVar1 == 1));
      printf((char *)(DAT_0001f9b8 + 0x1f934),DAT_0001f9b4 + 0x1f92c,0x33d,DAT_0001f9b0 + 0x1f920,
             local_c);
      pcVar2 = (char *)0xffffffff;
    }
  }
  return pcVar2;
}



/* ===== FUN_0001f9bc @ 0001f9bc size=896 ===== */

int FUN_0001f9bc(undefined4 *param_1,char *param_2,int param_3)

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
      uVar1 = FUN_0001c1dc(param_2 + 4,local_16);
      param_1[0x2a] = uVar1;
      iVar2 = local_16 + 4;
    }
    else {
      iVar2 = 0;
    }
  }
  else {
    pcVar3 = local_14;
    printf((char *)(DAT_0001fd44 + 0x1fac0),DAT_0001fd40 + 0x1fab8,0x361,DAT_0001fd3c + 0x1faac,
           local_14);
    iVar2 = FUN_0001f798(param_2,param_3);
    if (0 < iVar2) {
      local_10 = iVar2;
      local_c = (char *)FUN_0001f460(local_c,local_11c,0x100);
      if (local_c == (char *)0x0) {
        iVar2 = -1;
      }
      else {
        local_10 = FUN_0001c918(param_1,local_11c);
        if (local_10 < 0) {
          iVar2 = -1;
        }
        else {
          do {
            while( true ) {
              local_c = (char *)FUN_0001f460(local_c,local_11c,0x100);
              if ((local_c == (char *)0x0) || (local_11c[0] == '\0')) goto LAB_0001fc14;
              local_1c = (code *)FUN_0001f39c(local_11c);
              if (local_1c != (code *)0x0) break;
              pcVar3 = local_11c;
              printf((char *)(DAT_0001fd50 + 0x1fb94),DAT_0001fd4c + 0x1fb8c,0x378,
                     DAT_0001fd48 + 0x1fb80,pcVar3);
            }
            local_10 = (*local_1c)(param_1,local_11c);
          } while (-1 < local_10);
          pcVar3 = local_11c;
          printf((char *)(DAT_0001fd5c + 0x1fbe4),DAT_0001fd58 + 0x1fbdc,0x37e,DAT_0001fd54 + 130000
                 ,pcVar3);
LAB_0001fc14:
          if ((local_c == (char *)0x0) || (local_11c[0] != '\0')) {
            FUN_0001f5b0(param_1);
            iVar2 = -1;
          }
          else {
            if (param_1[0x28] != 0) {
              uVar1 = FUN_0001c1dc(local_c,*(undefined4 *)param_1[0x28]);
              param_1[0x2a] = uVar1;
              if (param_1[0x2a] == 0) {
                printf((char *)(DAT_0001fd68 + 0x1fca4),DAT_0001fd64 + 0x1fc9c,0x38b,
                       DAT_0001fd60 + 0x1fc90,pcVar3);
                FUN_0001f5b0(param_1);
                return -1;
              }
            }
            local_10 = (int)local_c - (int)local_14;
            if (param_1[0x28] != 0) {
              local_10 = *(int *)param_1[0x28] + local_10;
            }
            if (local_10 != iVar2) {
              printf((char *)(DAT_0001fd74 + 0x1fd2c),DAT_0001fd70 + 0x1fd24,0x396,
                     DAT_0001fd6c + 0x1fd18,iVar2,local_10);
            }
          }
        }
      }
    }
  }
  return iVar2;
}



/* ===== FUN_0001fd78 @ 0001fd78 size=2104 ===== */

int FUN_0001fd78(int *param_1,undefined4 *param_2,int param_3)

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
    iVar2 = FUN_0001cc68(param_1,param_2,param_3);
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
          iVar2 = FUN_0001d9c4(param_1,local_14,local_34);
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
          iVar2 = FUN_0001e574(param_1,local_14,local_34);
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
          iVar2 = FUN_0001db8c(param_1,local_14,local_34);
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
          iVar2 = FUN_0001d2a0(param_1,local_14,local_34);
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
          iVar2 = FUN_0001d794(param_1,local_14,local_34);
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
          iVar2 = FUN_0001f144(param_1,local_14,local_34);
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
          iVar2 = FUN_0001d7e8(param_1,local_14,local_34);
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
          iVar2 = FUN_0001e2c0(param_1,local_14,local_34);
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
          iVar2 = FUN_0001ec3c(param_1,local_14,local_34);
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
          iVar2 = FUN_0001d83c(param_1,local_14,local_34);
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
          iVar2 = FUN_0001e00c(param_1,local_14,local_34);
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
          iVar2 = FUN_0001e898(param_1,local_14,local_34);
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
          iVar2 = FUN_0001dd54(param_1,local_14,local_34);
          if (iVar2 < 0) {
            return -1;
          }
          local_14 = local_14 + iVar2;
          local_34 = local_34 - iVar2;
          if ((int)local_34 < 2) {
            return (int)local_14 - (int)param_2;
          }
        }
        snprintf(local_14,local_34,(char *)(DAT_000205b0 + 0x204a8));
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
            printf((char *)(DAT_000205bc + 0x20598),DAT_000205b8 + 0x20590,0x3e6,
                   DAT_000205b4 + 0x20584,param_2);
            local_34 = (int)local_14 - (int)param_2;
          }
        }
      }
    }
  }
  return local_34;
}



/* ===== FUN_000205c0 @ 000205c0 size=140 ===== */

undefined4 FUN_000205c0(undefined4 *param_1,undefined4 param_2,char *param_3,char *param_4)

{
  *param_1 = 0;
  param_1[1] = param_2;
  param_1[2] = 0;
  strncpy((char *)((int)param_1 + 0xe),param_3,0x1f);
  strncpy((char *)((int)param_1 + 0x2e),param_4,0x3f);
  param_1[0x1c] = 0;
  return 0;
}



/* ===== FUN_0002064c @ 0002064c size=76 ===== */

undefined4 FUN_0002064c(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = 1;
  param_1[1] = 0;
  param_1[2] = param_2;
  return 0;
}



/* ===== FUN_00020698 @ 00020698 size=96 ===== */

undefined4 FUN_00020698(int param_1,undefined4 *param_2)

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



/* ===== FUN_000206f8 @ 000206f8 size=112 ===== */

undefined4 FUN_000206f8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x74) == 0) {
    uVar1 = FUN_0001c168(4);
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



/* ===== FUN_00020768 @ 00020768 size=96 ===== */

undefined4 FUN_00020768(int param_1,undefined4 *param_2)

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



/* ===== FUN_000207c8 @ 000207c8 size=112 ===== */

undefined4 FUN_000207c8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x7c) == 0) {
    uVar1 = FUN_0001c168(4);
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



/* ===== FUN_00020838 @ 00020838 size=108 ===== */

undefined4 FUN_00020838(int param_1,char *param_2,int param_3)

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



/* ===== FUN_000208a4 @ 000208a4 size=288 ===== */

undefined4 FUN_000208a4(int param_1,char *param_2)

{
  undefined4 uVar1;
  char *__src;
  char *__dest;
  int iVar2;
  time_t local_18;
  byte *local_14;
  
  iVar2 = DAT_000209c4 + 0x208c4;
  if (*(int *)(param_1 + 0x78) == 0) {
    uVar1 = FUN_0001c168(0x20);
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
      while ((*(ushort *)(**(int **)(iVar2 + DAT_000209c8) + (uint)*local_14 * 2) & 0x40) != 0) {
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



/* ===== FUN_000209cc @ 000209cc size=284 ===== */

undefined4 FUN_000209cc(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x80) == 0) {
    uVar1 = FUN_0001c168(0x14);
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



/* ===== FUN_00020ae8 @ 00020ae8 size=220 ===== */

undefined4 FUN_00020ae8(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x80) == 0) {
    uVar1 = FUN_0001c168(0x14);
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



/* ===== FUN_00020bc4 @ 00020bc4 size=96 ===== */

undefined4 FUN_00020bc4(int param_1,undefined4 *param_2)

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



/* ===== FUN_00020c24 @ 00020c24 size=112 ===== */

undefined4 FUN_00020c24(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x88) == 0) {
    uVar1 = FUN_0001c168(4);
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



/* ===== FUN_00020c94 @ 00020c94 size=108 ===== */

undefined4 FUN_00020c94(int param_1,char *param_2,int param_3)

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



/* ===== FUN_00020d00 @ 00020d00 size=168 ===== */

undefined4 FUN_00020d00(int param_1,char *param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x90) == 0) {
    uVar1 = FUN_0001c168(0x40);
    *(undefined4 *)(param_1 + 0x90) = uVar1;
  }
  if (*(int *)(param_1 + 0x90) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    if (param_2 == (char *)0x0) {
      strncpy(*(char **)(param_1 + 0x90),(char *)(DAT_00020da8 + 0x20d94),0x3f);
    }
    else {
      strncpy(*(char **)(param_1 + 0x90),param_2,0x3f);
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_00020e0c @ 00020e0c size=112 ===== */

undefined4 FUN_00020e0c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x94) == 0) {
    uVar1 = FUN_0001c168(4);
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



/* ===== FUN_00020e7c @ 00020e7c size=108 ===== */

undefined4 FUN_00020e7c(int param_1,char *param_2,int param_3)

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



/* ===== FUN_00020ee8 @ 00020ee8 size=168 ===== */

undefined4 FUN_00020ee8(int param_1,char *param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar1 = FUN_0001c168(0x40);
    *(undefined4 *)(param_1 + 0x9c) = uVar1;
  }
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    if (param_2 == (char *)0x0) {
      strncpy(*(char **)(param_1 + 0x9c),(char *)(DAT_00020f90 + 0x20f7c),0x3f);
    }
    else {
      strncpy(*(char **)(param_1 + 0x9c),param_2,0x3f);
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_00020ff8 @ 00020ff8 size=112 ===== */

undefined4 FUN_00020ff8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xa4) == 0) {
    uVar1 = FUN_0001c168(4);
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



/* ===== FUN_000210cc @ 000210cc size=112 ===== */

undefined4 FUN_000210cc(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xa0) == 0) {
    uVar1 = FUN_0001c168(4);
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



/* ===== FUN_0002113c @ 0002113c size=292 ===== */

int * FUN_0002113c(int param_1,int param_2)

{
  int *piVar1;
  
  if ((param_1 < 1) || (param_2 < 1)) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = calloc(1,param_2 * param_1 + param_2 * 4 + 0x18);
    if (piVar1 == (int *)0x0) {
      printf((char *)(DAT_00021268 + 0x211d0),DAT_00021264 + 0x211c8,0x16,DAT_00021260 + 0x211bc);
      piVar1 = (int *)0x0;
    }
    else {
      printf((char *)(DAT_0002126c + 0x21208),param_2 * param_1 + param_2 * 4 + 0x18);
      *piVar1 = param_1;
      piVar1[1] = param_2;
      piVar1[4] = (int)(piVar1 + 6);
      piVar1[5] = (int)(piVar1 + param_2 + 6);
    }
  }
  return piVar1;
}



/* ===== FUN_00021270 @ 00021270 size=176 ===== */

undefined4 FUN_00021270(int *param_1,int param_2,int *param_3,int *param_4)

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



/* ===== FUN_00021320 @ 00021320 size=172 ===== */

undefined4 FUN_00021320(int param_1,int param_2)

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



/* ===== FUN_000213cc @ 000213cc size=92 ===== */

undefined4 FUN_000213cc(int param_1,int param_2)

{
  undefined4 extraout_r1;
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    FUN_000238bc(param_2 + 1,*(undefined4 *)(param_1 + 4));
    uVar1 = extraout_r1;
  }
  return uVar1;
}



/* ===== FUN_00021428 @ 00021428 size=60 ===== */

undefined4 FUN_00021428(int param_1)

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



/* ===== FUN_00021464 @ 00021464 size=60 ===== */

undefined4 FUN_00021464(int param_1)

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



/* ===== FUN_000214a0 @ 000214a0 size=168 ===== */

undefined4 FUN_000214a0(int param_1)

{
  int extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    FUN_000238bc(*(int *)(param_1 + 0xc) + 1,*(undefined4 *)(param_1 + 4));
    if (extraout_r1 == *(int *)(param_1 + 8)) {
      uVar1 = 0xffffffff;
    }
    else {
      FUN_000238bc(*(int *)(param_1 + 0xc) + 1,*(undefined4 *)(param_1 + 4));
      *(undefined4 *)(param_1 + 0xc) = extraout_r1_00;
      uVar1 = *(undefined4 *)(param_1 + 0xc);
    }
  }
  return uVar1;
}



/* ===== FUN_00021548 @ 00021548 size=136 ===== */

undefined4 FUN_00021548(int param_1)

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
    FUN_000238bc(*(int *)(param_1 + 8) + 1,*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 8) = extraout_r1;
    uVar1 = *(undefined4 *)(param_1 + 8);
  }
  return uVar1;
}



/* ===== FUN_000215d0 @ 000215d0 size=48 ===== */

void FUN_000215d0(void *param_1)

{
  if (param_1 != (void *)0x0) {
    free(param_1);
  }
  return;
}



/* ===== FUN_00021600 @ 00021600 size=636 ===== */

undefined1 * FUN_00021600(undefined1 *param_1,int param_2,byte *param_3,uint param_4)

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
      *local_c = *(undefined1 *)(DAT_0002187c + 0x21708 + (uint)(bVar1 >> 2));
      local_c[1] = *(undefined1 *)(DAT_00021880 + 0x21730 + ((uVar4 & 0x3f00000) >> 0x14));
      puVar3 = local_c + 3;
      local_c[2] = *(undefined1 *)
                    (DAT_00021884 + 0x21758 + ((uVar4 | (uint)bVar2 << 8) >> 0xe & 0x3f));
      local_c = local_c + 4;
      *puVar3 = *(undefined1 *)(DAT_00021888 + 0x21780 + (((uint)bVar2 << 8 & 0x3f00) >> 8));
    }
    local_10 = 0;
    for (; local_18 != 0; local_18 = local_18 - 1) {
      local_10 = local_10 * 0x100 + (uint)*local_2c;
      local_14 = local_14 + 8;
      local_2c = local_2c + 1;
    }
    for (; 0 < (int)local_14; local_14 = local_14 - 6) {
      *local_c = *(undefined1 *)
                  (DAT_0002188c + 0x21810 + ((uint)(local_10 << 6) >> (local_14 & 0xff) & 0x3f));
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



/* ===== FUN_00021890 @ 00021890 size=476 ===== */

char * FUN_00021890(char *param_1,int param_2,int *param_3)

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



/* ===== FUN_00021a6c @ 00021a6c size=588 ===== */

bool FUN_00021a6c(int param_1,int param_2,void *param_3)

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
           ) && (iVar1 = FUN_00021890(local_c,local_14,&local_20), iVar1 != 0))))) {
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
      printf((char *)(DAT_00021cc0 + 0x21bbc),DAT_00021cbc + 0x21bb4,0x86,DAT_00021cb8 + 0x21ba8,
             local_20);
      if (0x40 < (int)local_20) {
        local_20 = 0x40;
      }
      memcpy(param_3,local_10,local_20);
      *(size_t *)((int)param_3 + 0x80) = local_20;
      local_18 = local_18 + 1;
    }
    if (local_19 == 8) {
      printf((char *)(DAT_00021ccc + 0x21c34),DAT_00021cc8 + 0x21c2c,0x8e,DAT_00021cc4 + 0x21c20,
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



/* ===== FUN_00021cd0 @ 00021cd0 size=736 ===== */

bool FUN_00021cd0(int param_1,int param_2,void *param_3)

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
         (iVar1 = FUN_00021890(local_c,local_14,&local_20), iVar1 != 0))) {
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
      printf((char *)(DAT_00021fb8 + 0x21e38),DAT_00021fb4 + 0x21e30,0xba,DAT_00021fb0 + 0x21e24,
             local_20);
      if (0x40 < (int)local_20) {
        local_20 = 0x40;
      }
      memcpy(param_3,local_10,local_20);
      *(size_t *)((int)param_3 + 0xc0) = local_20;
      local_18 = local_18 + 1;
    }
    if (local_19 == 0x21) {
      printf((char *)(DAT_00021fc4 + 0x21eb0),DAT_00021fc0 + 0x21ea8,0xc2,DAT_00021fbc + 0x21e9c,
             local_20);
      if (0x40 < (int)local_20) {
        local_20 = 0x40;
      }
      memcpy((void *)((int)param_3 + 0x40),local_10,local_20);
      *(size_t *)((int)param_3 + 0xc4) = local_20;
      local_18 = local_18 + 1;
    }
    if (local_19 == 0x22) {
      printf((char *)(DAT_00021fd0 + 0x21f2c),DAT_00021fcc + 0x21f24,0xca,DAT_00021fc8 + 0x21f18,
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



/* ===== FUN_00021fd4 @ 00021fd4 size=236 ===== */

undefined4 FUN_00021fd4(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 != 4) {
    printf((char *)(DAT_000220c8 + 0x22018),DAT_000220c4 + 0x22010,0xdb,DAT_000220c0 + 0x22004);
    return 0xffffffff;
  }
  iVar1 = *param_1;
  if (iVar1 == 24000) {
code_r0x000220a4:
    *param_3 = iVar1;
    uVar2 = 1;
  }
  else {
    if (iVar1 < 0x5dc1) {
      if (iVar1 == 16000) goto code_r0x000220a4;
    }
    else if ((iVar1 == 32000) || (iVar1 == 40000)) goto code_r0x000220a4;
    printf((char *)(DAT_000220d4 + 0x22098),DAT_000220d0 + 0x22090,0xe8,DAT_000220cc + 0x22084);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== FUN_000220d8 @ 000220d8 size=56 ===== */

undefined4 FUN_000220d8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00021a6c(param_1,param_2,param_3);
  return uVar1;
}



/* ===== FUN_00022110 @ 00022110 size=56 ===== */

undefined4 FUN_00022110(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00021cd0(param_1,param_2,param_3);
  return uVar1;
}



/* ===== FUN_00022148 @ 00022148 size=556 ===== */

int FUN_00022148(undefined4 param_1,undefined4 param_2,int param_3,char *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *local_c;
  
  iVar1 = sprintf(param_4,(char *)(DAT_00022374 + 0x2217c),param_1);
  pcVar4 = param_4 + iVar1;
  iVar1 = sprintf(pcVar4,(char *)(DAT_00022378 + 0x221a4));
  iVar2 = sprintf(pcVar4 + iVar1,(char *)(DAT_0002237c + 0x221d4),param_1,param_2);
  local_c = pcVar4 + iVar1 + iVar2;
  if ((*(int *)(param_3 + 0x80) == 0) || (*(int *)(param_3 + 0x84) == 0)) {
    iVar1 = sprintf(local_c,(char *)(DAT_0002238c + 0x22340),param_1);
    local_c = local_c + iVar1;
  }
  else {
    uVar5 = *(undefined4 *)(param_3 + 0x80);
    uVar6 = *(undefined4 *)(param_3 + 0x84);
    iVar1 = sprintf(local_c,(char *)(DAT_00022380 + 0x22248),param_1);
    local_c = local_c + iVar1;
    FUN_00021600(local_c,param_5 - ((int)local_c - (int)param_4),param_3,uVar5);
    sVar3 = strlen(local_c);
    iVar1 = sprintf(local_c + sVar3,(char *)(DAT_00022384 + 0x222ac));
    pcVar4 = local_c + sVar3 + iVar1;
    FUN_00021600(pcVar4,param_5 - ((int)pcVar4 - (int)param_4),param_3 + 0x40,uVar6);
    sVar3 = strlen(pcVar4);
    iVar1 = sprintf(pcVar4 + sVar3,(char *)(DAT_00022388 + 0x22310));
    local_c = pcVar4 + sVar3 + iVar1;
  }
  return (int)local_c - (int)param_4;
}



/* ===== FUN_00022390 @ 00022390 size=688 ===== */

int FUN_00022390(undefined4 param_1,undefined4 param_2,int param_3,char *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *local_c;
  
  iVar1 = sprintf(param_4,(char *)(DAT_00022640 + 0x223c4),param_1);
  pcVar4 = param_4 + iVar1;
  iVar1 = sprintf(pcVar4,(char *)(DAT_00022644 + 0x223ec));
  iVar2 = sprintf(pcVar4 + iVar1,(char *)(DAT_00022648 + 0x2241c),param_1,param_2);
  local_c = pcVar4 + iVar1 + iVar2;
  if (((*(int *)(param_3 + 0xc0) != 0) && (*(int *)(param_3 + 0xc4) != 0)) &&
     (*(int *)(param_3 + 200) != 0)) {
    uVar5 = *(undefined4 *)(param_3 + 0xc0);
    uVar6 = *(undefined4 *)(param_3 + 0xc4);
    uVar7 = *(undefined4 *)(param_3 + 200);
    iVar1 = sprintf(local_c,(char *)(DAT_0002264c + 0x224b8),param_1);
    iVar2 = sprintf(local_c + iVar1,(char *)(DAT_00022650 + 0x224e0));
    pcVar4 = local_c + iVar1 + iVar2;
    FUN_00021600(pcVar4,param_5 - ((int)pcVar4 - (int)param_4),param_3,uVar5);
    sVar3 = strlen(pcVar4);
    iVar1 = sprintf(pcVar4 + sVar3,(char *)(DAT_00022654 + 0x22544));
    pcVar4 = pcVar4 + sVar3 + iVar1;
    FUN_00021600(pcVar4,param_5 - ((int)pcVar4 - (int)param_4),param_3 + 0x40,uVar6);
    sVar3 = strlen(pcVar4);
    iVar1 = sprintf(pcVar4 + sVar3,(char *)(DAT_00022658 + 0x225a8));
    pcVar4 = pcVar4 + sVar3 + iVar1;
    FUN_00021600(pcVar4,param_5 - ((int)pcVar4 - (int)param_4),param_3 + 0x80,uVar7);
    sVar3 = strlen(pcVar4);
    iVar1 = sprintf(pcVar4 + sVar3,(char *)(DAT_0002265c + 0x2260c));
    local_c = pcVar4 + sVar3 + iVar1;
  }
  return (int)local_c - (int)param_4;
}



/* ===== FUN_00022660 @ 00022660 size=196 ===== */

char * FUN_00022660(undefined4 param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  int iVar1;
  int iVar2;
  char *__s;
  
  iVar1 = sprintf(param_4,(char *)(DAT_00022724 + 0x22694),param_1);
  __s = param_4 + iVar1;
  iVar1 = sprintf(__s,(char *)(DAT_00022728 + 0x226bc));
  iVar2 = sprintf(__s + iVar1,(char *)(DAT_0002272c + 0x226f4),param_1,param_2,param_3);
  return __s + iVar1 + (iVar2 - (int)param_4);
}



/* ===== FUN_00022730 @ 00022730 size=196 ===== */

char * FUN_00022730(undefined4 param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  int iVar1;
  int iVar2;
  char *__s;
  
  iVar1 = sprintf(param_4,(char *)(DAT_000227f4 + 0x22764),param_1);
  __s = param_4 + iVar1;
  iVar1 = sprintf(__s,(char *)(DAT_000227f8 + 0x2278c));
  iVar2 = sprintf(__s + iVar1,(char *)(DAT_000227fc + 0x227c4),param_1,param_2,param_3);
  return __s + iVar1 + (iVar2 - (int)param_4);
}



/* ===== FUN_00022800 @ 00022800 size=252 ===== */

char * FUN_00022800(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint *param_4,
                   char *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *__s;
  
  iVar1 = sprintf(param_5,(char *)(DAT_000228fc + 0x22834),param_1);
  __s = param_5 + iVar1;
  iVar1 = sprintf(__s,(char *)(DAT_00022900 + 0x2285c));
  if (*param_4 == 0) {
    uVar3 = 0x20;
  }
  else {
    uVar3 = *param_4 / 1000;
  }
  iVar2 = sprintf(__s + iVar1,(char *)(DAT_00022904 + 0x228cc),param_1,uVar3,param_2,param_3);
  return __s + iVar1 + (iVar2 - (int)param_5);
}



/* ===== FUN_00022908 @ 00022908 size=1436 ===== */

int FUN_00022908(byte *param_1,byte *param_2,size_t param_3,undefined4 param_4,uint param_5,
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
    __hostlong = FUN_000238dc((int)lVar2,
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



/* ===== FUN_00022ea4 @ 00022ea4 size=1492 ===== */

int FUN_00022ea4(byte *param_1,byte *param_2,size_t param_3,undefined4 param_4,uint param_5,
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
    __hostlong = FUN_000238dc((int)lVar3,
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



/* ===== FUN_00023478 @ 00023478 size=792 ===== */

int FUN_00023478(byte *param_1,void *param_2,size_t param_3,undefined4 param_4,uint param_5,
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
    __hostlong = FUN_000238dc((int)lVar1,
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



/* ===== FUN_00023790 @ 00023790 size=80 ===== */

undefined4
FUN_00023790(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00023478(param_1,param_2,param_3,param_6,param_5,param_6,param_7,param_8);
  return uVar1;
}



/* ===== FUN_000237e8 @ 000237e8 size=196 ===== */

uint FUN_000237e8(uint param_1,uint param_2)

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



/* ===== FUN_000238bc @ 000238bc size=48 ===== */

void FUN_000238bc(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_000237e8();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_000238dc @ 000238dc size=76 ===== */

void FUN_000238dc(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  if (param_4 != 0 || param_3 != 0) {
    FUN_00023928();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_00023928 @ 00023928 size=328 ===== */

undefined8 FUN_00023928(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

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



/* ===== _fini @ 00023a70 size=16 ===== */

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



/* ===== <EXTERNAL>::RK_MPI_VENC_EnableMotionDeblur @ 0003d018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_EnableMotionDeblur(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_preInit_devBufCnt @ 0003d01c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_preInit_devBufCnt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::recvfrom @ 0003d020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recvfrom(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,socklen_t *__addr_len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 0003d024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 0003d028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevAttr @ 0003d02c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetDevAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetChnFrame @ 0003d030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetChnFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setlinebuf @ 0003d034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void setlinebuf(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::accept @ 0003d038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int accept(int __fd,sockaddr *__addr,socklen_t *__addr_len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 0003d03c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 0003d040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcat @ 0003d044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 0003d048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memmove @ 0003d04c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_ae_setExpSwAttr @ 0003d050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_user_api2_ae_setExpSwAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::raise @ 0003d054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 0003d058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 0003d05c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_join @ 0003d060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 0003d064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setenv @ 0003d068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setenv(char *__name,char *__value,int __replace)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableDev @ 0003d06c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_EnableDev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevAttr @ 0003d070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetDevAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 0003d074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableDev @ 0003d078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_DisableDev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_destroy @ 0003d07c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_destroy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0003d080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Bind @ 0003d084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Bind(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChnExt @ 0003d088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_EnableChnExt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ntohs @ 0003d08c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint16_t ntohs(uint16_t __netshort)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 0003d090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_lock @ 0003d094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::send @ 0003d098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t send(int __fd,void *__buf,size_t __n,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_start @ 0003d09c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_start(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetJpegParam @ 0003d0a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetJpegParam(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::recv @ 0003d0a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recv(int __fd,void *__buf,size_t __n,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_prepare @ 0003d0a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_prepare(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fseek @ 0003d0ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_deinit @ 0003d0b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_deinit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StartRecvFrame @ 0003d0b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_StartRecvFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt_long @ 0003d0b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void getopt_long(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetComboAttr @ 0003d0bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetComboAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_MmzFlushCache @ 0003d0c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_MmzFlushCache(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 0003d0c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::listen @ 0003d0c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int listen(int __fd,int __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sendto @ 0003d0cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t sendto(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,socklen_t __addr_len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ctime @ 0003d0d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * ctime(time_t *__timer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SendFrame @ 0003d0d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SendFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 0003d0d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 0003d0dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_LOG @ 0003d0e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_LOG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_create @ 0003d0e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_create(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ROCKIVA_Init @ 0003d0e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ROCKIVA_Init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clock_gettime @ 0003d0ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strrchr @ 0003d0f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_unlock @ 0003d0f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sigemptyset @ 0003d0f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigemptyset(sigset_t *__set)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetMjpegParam @ 0003d0fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetMjpegParam(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::socket @ 0003d100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ROCKIVA_BA_Release @ 0003d104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ROCKIVA_BA_Release(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_ae_getExpSwAttr @ 0003d108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_user_api2_ae_getExpSwAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_aldch_v21_GetAttrib @ 0003d10c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_user_api2_aldch_v21_GetAttrib(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setsockopt @ 0003d110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChn @ 0003d114 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_EnableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_getCamInfos @ 0003d118 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_getCamInfos(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_setMulCamConc @ 0003d11c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_setMulCamConc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId @ 0003d120 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::inet_ntoa @ 0003d124 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * inet_ntoa(in_addr __in)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::time @ 0003d128 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_QueryChnStatus @ 0003d12c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_QueryChnStatus(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChn @ 0003d130 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_DisableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnWrapBufAttr @ 0003d134 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetChnWrapBufAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_stop @ 0003d138 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_stop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetEptz @ 0003d13c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetEptz(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetChnBufWrapAttr @ 0003d140 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetChnBufWrapAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2Fd @ 0003d144 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_Handle2Fd(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fcntl @ 0003d148 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fcntl(int __fd,int __cmd,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_EnableSvc @ 0003d14c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_EnableSvc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetRcParam @ 0003d150 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetRcParam(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_switch_scene @ 0003d154 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_switch_scene(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm @ 0003d158 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::htonl @ 0003d15c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint32_t htonl(uint32_t __hostlong)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevIsEnable @ 0003d160 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetDevIsEnable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::signal @ 0003d164 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen64 @ 0003d168 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_create @ 0003d16c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StopRecvFrame @ 0003d170 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_StopRecvFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::htons @ 0003d174 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint16_t htons(uint16_t __hostshort)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_GetMB @ 0003d178 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_GetMB(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::select @ 0003d17c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 0003d180 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 0003d184 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Exit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ROCKIVA_BA_Init @ 0003d188 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ROCKIVA_BA_Init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_aldch_v21_SetAttrib @ 0003d18c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_user_api2_aldch_v21_SetAttrib(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 0003d190 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usleep @ 0003d194 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 0003d198 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_prepare @ 0003d19c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_prepare(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnAttr @ 0003d1a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetChnAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_ReleaseChnFrame @ 0003d1a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_ReleaseChnFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 0003d1a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_GetStream @ 0003d1ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_GetStream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_start @ 0003d1b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_start(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::system @ 0003d1b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int system(char *__command)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChnExt @ 0003d1b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_DisableChnExt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sleep @ 0003d1bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 0003d1c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 0003d1c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_Handle2VirAddr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strstr @ 0003d1c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sscanf @ 0003d1cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sigaction @ 0003d1d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigaction(int __sig,sigaction *__act,sigaction *__oact)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevBindPipe @ 0003d1d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetDevBindPipe(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_UnBind @ 0003d1d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_UnBind(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_ChnSaveFile @ 0003d1dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_ChnSaveFile(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 0003d1e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gettimeofday @ 0003d1e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_ReleaseMB @ 0003d1e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_ReleaseMB(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 0003d1ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetChnRefBufShareAttr @ 0003d1f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetChnRefBufShareAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fread @ 0003d1f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_stop @ 0003d1f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_stop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::bind @ 0003d1fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_DestroyChn @ 0003d200 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_DestroyChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ROCKIVA_PushFrame @ 0003d204 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ROCKIVA_PushFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 0003d208 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_init @ 0003d20c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_CreateChn @ 0003d210 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_CreateChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ROCKIVA_Release @ 0003d214 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ROCKIVA_Release(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_ReleaseStream @ 0003d218 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_ReleaseStream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


