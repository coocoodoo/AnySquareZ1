// sample_demo_vi_venc_stresstest — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00012a94 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 00012ab8 size=12 ===== */

void RK_MPI_SYS_Exit(void)

{
  (*(code *)PTR_RK_MPI_SYS_Exit_0004000c)();
  return;
}



/* ===== <EXTERNAL>::sem_init @ 00012ac4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sem_init(sem_t *__sem,int __pshared,uint __value)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sem_init_00040010)(__sem);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Bind @ 00012ad0 size=12 ===== */

void RK_MPI_SYS_Bind(void)

{
  (*(code *)PTR_RK_MPI_SYS_Bind_00040014)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm @ 00012adc size=12 ===== */

void rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm_00040018)();
  return;
}



/* ===== <EXTERNAL>::bind @ 00012ae8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_bind_0004001c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_QueryChnStatus @ 00012af4 size=12 ===== */

void RK_MPI_VI_QueryChnStatus(void)

{
  (*(code *)PTR_RK_MPI_VI_QueryChnStatus_00040020)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00012b00 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00040024)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnWrapBufAttr @ 00012b0c size=12 ===== */

void RK_MPI_VI_SetChnWrapBufAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetChnWrapBufAttr_00040028)();
  return;
}



/* ===== <EXTERNAL>::htons @ 00012b18 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint16_t htons(uint16_t __hostshort)

{
  uint16_t uVar1;
  
  uVar1 = (*(code *)PTR_htons_0004002c)(__hostshort);
  return uVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_GetStream @ 00012b24 size=12 ===== */

void RK_MPI_VENC_GetStream(void)

{
  (*(code *)PTR_RK_MPI_VENC_GetStream_00040030)();
  return;
}



/* ===== <EXTERNAL>::calloc @ 00012b30 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_00040034)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 00012b3c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00040038)();
  return piVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_EnableMotionDeblur @ 00012b48 size=12 ===== */

void RK_MPI_VENC_EnableMotionDeblur(void)

{
  (*(code *)PTR_RK_MPI_VENC_EnableMotionDeblur_0004003c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetComboAttr @ 00012b54 size=12 ===== */

void RK_MPI_VENC_SetComboAttr(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetComboAttr_00040040)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_destroy @ 00012b60 size=12 ===== */

void rk_aiq_uapi2_camgroup_destroy(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_destroy_00040044)();
  return;
}



/* ===== <EXTERNAL>::clock_gettime @ 00012b6c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_clock_gettime_00040048)(__clock_id);
  return iVar1;
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_ae_setExpSwAttr @ 00012b78 size=12 ===== */

void rk_aiq_user_api2_ae_setExpSwAttr(void)

{
  (*(code *)PTR_rk_aiq_user_api2_ae_setExpSwAttr_0004004c)();
  return;
}



/* ===== <EXTERNAL>::fwrite @ 00012b84 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_00040050)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::ROCKIVA_PushFrame @ 00012b90 size=12 ===== */

void ROCKIVA_PushFrame(void)

{
  (*(code *)PTR_ROCKIVA_PushFrame_00040054)();
  return;
}



/* ===== <EXTERNAL>::system @ 00012b9c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int system(char *__command)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_system_00040058)(__command);
  return iVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_switch_scene @ 00012ba8 size=12 ===== */

void rk_aiq_uapi2_sysctl_switch_scene(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_switch_scene_0004005c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetChnAttr @ 00012bb4 size=12 ===== */

void RK_MPI_VI_GetChnAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_GetChnAttr_00040060)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChn @ 00012bc0 size=12 ===== */

void RK_MPI_VI_DisableChn(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableChn_00040064)();
  return;
}



/* ===== <EXTERNAL>::usleep @ 00012bcc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_usleep_00040068)(__useconds);
  return iVar1;
}



/* ===== <EXTERNAL>::memcpy @ 00012bd8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_0004006c)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_setMulCamConc @ 00012be4 size=12 ===== */

void rk_aiq_uapi2_sysctl_setMulCamConc(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_setMulCamConc_00040070)();
  return;
}



/* ===== <EXTERNAL>::RK_TDE_Open @ 00012bf0 size=12 ===== */

void RK_TDE_Open(void)

{
  (*(code *)PTR_RK_TDE_Open_00040074)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_RGN_DetachFromChn @ 00012bfc size=12 ===== */

void RK_MPI_RGN_DetachFromChn(void)

{
  (*(code *)PTR_RK_MPI_RGN_DetachFromChn_00040078)();
  return;
}



/* ===== <EXTERNAL>::sleep @ 00012c08 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_sleep_0004007c)(__seconds);
  return uVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_CreateChn @ 00012c14 size=12 ===== */

void RK_MPI_VENC_CreateChn(void)

{
  (*(code *)PTR_RK_MPI_VENC_CreateChn_00040080)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_ReleaseChnFrame @ 00012c20 size=12 ===== */

void RK_MPI_VI_ReleaseChnFrame(void)

{
  (*(code *)PTR_RK_MPI_VI_ReleaseChnFrame_00040084)();
  return;
}



/* ===== <EXTERNAL>::send @ 00012c2c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t send(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_send_00040088)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::pthread_mutex_init @ 00012c38 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_0004008c)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2Fd @ 00012c44 size=12 ===== */

void RK_MPI_MB_Handle2Fd(void)

{
  (*(code *)PTR_RK_MPI_MB_Handle2Fd_00040090)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_create @ 00012c50 size=12 ===== */

void rk_aiq_uapi2_camgroup_create(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_create_00040094)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_GetMB @ 00012c5c size=12 ===== */

void RK_MPI_MB_GetMB(void)

{
  (*(code *)PTR_RK_MPI_MB_GetMB_00040098)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_EnableSvc @ 00012c68 size=12 ===== */

void RK_MPI_VENC_EnableSvc(void)

{
  (*(code *)PTR_RK_MPI_VENC_EnableSvc_0004009c)();
  return;
}



/* ===== <EXTERNAL>::gettimeofday @ 00012c74 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_gettimeofday_000400a0)(__tv);
  return iVar1;
}



/* ===== <EXTERNAL>::strcat @ 00012c80 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcat_000400a4)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::prctl @ 00012c8c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int prctl(int __option,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_prctl_000400a8)(__option);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevAttr @ 00012c98 size=12 ===== */

void RK_MPI_VI_GetDevAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_GetDevAttr_000400ac)();
  return;
}



/* ===== <EXTERNAL>::ROCKIVA_BA_Init @ 00012ca4 size=12 ===== */

void ROCKIVA_BA_Init(void)

{
  (*(code *)PTR_ROCKIVA_BA_Init_000400b0)();
  return;
}



/* ===== <EXTERNAL>::setenv @ 00012cb0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setenv(char *__name,char *__value,int __replace)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setenv_000400b4)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::malloc @ 00012cbc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_000400b8)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_aldch_v21_SetAttrib @ 00012cc8 size=12 ===== */

void rk_aiq_user_api2_aldch_v21_SetAttrib(void)

{
  (*(code *)PTR_rk_aiq_user_api2_aldch_v21_SetAttrib_000400bc)();
  return;
}



/* ===== <EXTERNAL>::ROCKIVA_BA_Release @ 00012cd4 size=12 ===== */

void ROCKIVA_BA_Release(void)

{
  (*(code *)PTR_ROCKIVA_BA_Release_000400c0)();
  return;
}



/* ===== <EXTERNAL>::ROCKIVA_Release @ 00012ce0 size=12 ===== */

void ROCKIVA_Release(void)

{
  (*(code *)PTR_ROCKIVA_Release_000400c4)();
  return;
}



/* ===== <EXTERNAL>::strrchr @ 00012cec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strrchr_000400c8)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::strncmp @ 00012cf8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_000400cc)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::fopen64 @ 00012d10 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen64_000400d4)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::RK_TDE_QuickCopy @ 00012d1c size=12 ===== */

void RK_TDE_QuickCopy(void)

{
  (*(code *)PTR_RK_TDE_QuickCopy_000400d8)();
  return;
}



/* ===== <EXTERNAL>::ROCKIVA_SetFrameReleaseCallback @ 00012d28 size=12 ===== */

void ROCKIVA_SetFrameReleaseCallback(void)

{
  (*(code *)PTR_ROCKIVA_SetFrameReleaseCallback_000400dc)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_setMirrorFlip @ 00012d34 size=12 ===== */

void rk_aiq_uapi2_setMirrorFlip(void)

{
  (*(code *)PTR_rk_aiq_uapi2_setMirrorFlip_000400e0)();
  return;
}



/* ===== <EXTERNAL>::setlinebuf @ 00012d40 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void setlinebuf(FILE *__stream)

{
  (*(code *)PTR_setlinebuf_000400e4)(__stream);
  return;
}



/* ===== <EXTERNAL>::recv @ 00012d4c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recv(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_recv_000400e8)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::strlen @ 00012d58 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_000400ec)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::pthread_mutex_lock @ 00012d64 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_000400f0)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::ctime @ 00012d70 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * ctime(time_t *__timer)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_ctime_000400f4)(__timer);
  return pcVar1;
}



/* ===== <EXTERNAL>::sendto @ 00012d7c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t sendto(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,socklen_t __addr_len)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_sendto_000400f8)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::fcntl @ 00012d88 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fcntl(int __fd,int __cmd,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fcntl_000400fc)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::snprintf @ 00012d94 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_00040100)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::htonl @ 00012da0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint32_t htonl(uint32_t __hostlong)

{
  uint32_t uVar1;
  
  uVar1 = (*(code *)PTR_htonl_00040104)(__hostlong);
  return uVar1;
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_aldch_v21_GetAttrib @ 00012dac size=12 ===== */

void rk_aiq_user_api2_aldch_v21_GetAttrib(void)

{
  (*(code *)PTR_rk_aiq_user_api2_aldch_v21_GetAttrib_00040108)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_RGN_Destroy @ 00012db8 size=12 ===== */

void RK_MPI_RGN_Destroy(void)

{
  (*(code *)PTR_RK_MPI_RGN_Destroy_0004010c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnAttr @ 00012dc4 size=12 ===== */

void RK_MPI_VI_SetChnAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetChnAttr_00040110)();
  return;
}



/* ===== <EXTERNAL>::select @ 00012dd0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_select_00040114)(__nfds);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_UnBind @ 00012ddc size=12 ===== */

void RK_MPI_SYS_UnBind(void)

{
  (*(code *)PTR_RK_MPI_SYS_UnBind_00040118)();
  return;
}



/* ===== <EXTERNAL>::sem_destroy @ 00012de8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sem_destroy(sem_t *__sem)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sem_destroy_0004011c)(__sem);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SendFrame @ 00012df4 size=12 ===== */

void RK_MPI_VENC_SendFrame(void)

{
  (*(code *)PTR_RK_MPI_VENC_SendFrame_00040120)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_IVS_DestroyChn @ 00012e00 size=12 ===== */

void RK_MPI_IVS_DestroyChn(void)

{
  (*(code *)PTR_RK_MPI_IVS_DestroyChn_00040124)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetChnRefBufShareAttr @ 00012e0c size=12 ===== */

void RK_MPI_VENC_SetChnRefBufShareAttr(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetChnRefBufShareAttr_00040128)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_prepare @ 00012e18 size=12 ===== */

void rk_aiq_uapi2_camgroup_prepare(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_prepare_0004012c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetChnRotation @ 00012e24 size=12 ===== */

void RK_MPI_VENC_SetChnRotation(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetChnRotation_00040130)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 00012e30 size=12 ===== */

void RK_MPI_SYS_Init(void)

{
  (*(code *)PTR_RK_MPI_SYS_Init_00040134)();
  return;
}



/* ===== <EXTERNAL>::pthread_mutex_destroy @ 00012e3c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_00040138)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId @ 00012e48 size=12 ===== */

void rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId_0004013c)();
  return;
}



/* ===== <EXTERNAL>::memmove @ 00012e54 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_00040140)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::fclose @ 00012e60 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_00040144)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_RGN_SetBitMap @ 00012e6c size=12 ===== */

void RK_MPI_RGN_SetBitMap(void)

{
  (*(code *)PTR_RK_MPI_RGN_SetBitMap_00040148)();
  return;
}



/* ===== <EXTERNAL>::setsockopt @ 00012e78 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setsockopt_0004014c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::fread @ 00012e84 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fread_00040150)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_PauseChn @ 00012e90 size=12 ===== */

void RK_MPI_VI_PauseChn(void)

{
  (*(code *)PTR_RK_MPI_VI_PauseChn_00040154)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_RGN_AttachToChn @ 00012e9c size=12 ===== */

void RK_MPI_RGN_AttachToChn(void)

{
  (*(code *)PTR_RK_MPI_RGN_AttachToChn_00040158)();
  return;
}



/* ===== <EXTERNAL>::RK_LOG @ 00012ea8 size=12 ===== */

void RK_LOG(void)

{
  (*(code *)PTR_RK_LOG_0004015c)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_getCamInfos @ 00012eb4 size=12 ===== */

void rk_aiq_uapi2_camgroup_getCamInfos(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_getCamInfos_00040160)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_ResumeChn @ 00012ec0 size=12 ===== */

void RK_MPI_VI_ResumeChn(void)

{
  (*(code *)PTR_RK_MPI_VI_ResumeChn_00040164)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_start @ 00012ecc size=12 ===== */

void rk_aiq_uapi2_camgroup_start(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_start_00040168)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StopRecvFrame @ 00012ed8 size=12 ===== */

void RK_MPI_VENC_StopRecvFrame(void)

{
  (*(code *)PTR_RK_MPI_VENC_StopRecvFrame_0004016c)();
  return;
}



/* ===== <EXTERNAL>::time @ 00012ee4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_00040170)(__timer);
  return tVar1;
}



/* ===== <EXTERNAL>::RK_TDE_EndJob @ 00012ef0 size=12 ===== */

void RK_TDE_EndJob(void)

{
  (*(code *)PTR_RK_TDE_EndJob_00040174)();
  return;
}



/* ===== <EXTERNAL>::fileno @ 00012efc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fileno(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fileno_00040178)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::pthread_create @ 00012f08 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_0004017c)(__newthread);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_RGN_GetDisplayAttr @ 00012f14 size=12 ===== */

void RK_MPI_RGN_GetDisplayAttr(void)

{
  (*(code *)PTR_RK_MPI_RGN_GetDisplayAttr_00040180)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetRcParam @ 00012f20 size=12 ===== */

void RK_MPI_VENC_SetRcParam(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetRcParam_00040184)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_RGN_SetDisplayAttr @ 00012f2c size=12 ===== */

void RK_MPI_RGN_SetDisplayAttr(void)

{
  (*(code *)PTR_RK_MPI_RGN_SetDisplayAttr_00040188)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChnExt @ 00012f38 size=12 ===== */

void RK_MPI_VI_DisableChnExt(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableChnExt_0004018c)();
  return;
}



/* ===== <EXTERNAL>::close @ 00012f44 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_00040190)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_GetChnAttr @ 00012f50 size=12 ===== */

void RK_MPI_VENC_GetChnAttr(void)

{
  (*(code *)PTR_RK_MPI_VENC_GetChnAttr_00040194)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetChnFrame @ 00012f5c size=12 ===== */

void RK_MPI_VI_GetChnFrame(void)

{
  (*(code *)PTR_RK_MPI_VI_GetChnFrame_00040198)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_IVS_ReleaseResults @ 00012f68 size=12 ===== */

void RK_MPI_IVS_ReleaseResults(void)

{
  (*(code *)PTR_RK_MPI_IVS_ReleaseResults_0004019c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_CreatePool @ 00012f74 size=12 ===== */

void RK_MPI_MB_CreatePool(void)

{
  (*(code *)PTR_RK_MPI_MB_CreatePool_000401a0)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChnExt @ 00012f80 size=12 ===== */

void RK_MPI_VI_EnableChnExt(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableChnExt_000401a4)();
  return;
}



/* ===== <EXTERNAL>::sscanf @ 00012f8c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sscanf_000401a8)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::strncpy @ 00012f98 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_000401ac)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetChnBufWrapAttr @ 00012fa4 size=12 ===== */

void RK_MPI_VENC_SetChnBufWrapAttr(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetChnBufWrapAttr_000401b0)();
  return;
}



/* ===== <EXTERNAL>::RK_TDE_WaitForDone @ 00012fb0 size=12 ===== */

void RK_TDE_WaitForDone(void)

{
  (*(code *)PTR_RK_TDE_WaitForDone_000401b4)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevBindPipe @ 00012fbc size=12 ===== */

void RK_MPI_VI_SetDevBindPipe(void)

{
  (*(code *)PTR_RK_MPI_VI_SetDevBindPipe_000401b8)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_prepare @ 00012fc8 size=12 ===== */

void rk_aiq_uapi2_sysctl_prepare(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_prepare_000401bc)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevIsEnable @ 00012fd4 size=12 ===== */

void RK_MPI_VI_GetDevIsEnable(void)

{
  (*(code *)PTR_RK_MPI_VI_GetDevIsEnable_000401c0)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_init @ 00012fe0 size=12 ===== */

void rk_aiq_uapi2_sysctl_init(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_init_000401c4)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableDev @ 00012fec size=12 ===== */

void RK_MPI_VI_EnableDev(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableDev_000401c8)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_RequestIDR @ 00012ff8 size=12 ===== */

void RK_MPI_VENC_RequestIDR(void)

{
  (*(code *)PTR_RK_MPI_VENC_RequestIDR_000401cc)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_start @ 00013004 size=12 ===== */

void rk_aiq_uapi2_sysctl_start(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_start_000401d0)();
  return;
}



/* ===== <EXTERNAL>::fflush @ 00013010 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_000401d4)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 0001301c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_000401d8)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::RK_MPI_RGN_Create @ 00013028 size=12 ===== */

void RK_MPI_RGN_Create(void)

{
  (*(code *)PTR_RK_MPI_RGN_Create_000401dc)();
  return;
}



/* ===== <EXTERNAL>::inet_ntoa @ 00013034 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * inet_ntoa(in_addr __in)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_inet_ntoa_000401e0)(__in.s_addr);
  return pcVar1;
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_ae_getExpSwAttr @ 00013040 size=12 ===== */

void rk_aiq_user_api2_ae_getExpSwAttr(void)

{
  (*(code *)PTR_rk_aiq_user_api2_ae_getExpSwAttr_000401e4)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_preInit_devBufCnt @ 0001304c size=12 ===== */

void rk_aiq_uapi2_sysctl_preInit_devBufCnt(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_preInit_devBufCnt_000401e8)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_GetChnRotation @ 00013058 size=12 ===== */

void RK_MPI_VENC_GetChnRotation(void)

{
  (*(code *)PTR_RK_MPI_VENC_GetChnRotation_000401ec)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_IVS_GetResults @ 00013064 size=12 ===== */

void RK_MPI_IVS_GetResults(void)

{
  (*(code *)PTR_RK_MPI_IVS_GetResults_000401f0)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_DestroyPool @ 00013070 size=12 ===== */

void RK_MPI_MB_DestroyPool(void)

{
  (*(code *)PTR_RK_MPI_MB_DestroyPool_000401f4)();
  return;
}



/* ===== <EXTERNAL>::ROCKIVA_Init @ 0001307c size=12 ===== */

void ROCKIVA_Init(void)

{
  (*(code *)PTR_ROCKIVA_Init_000401f8)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_IVS_CreateChn @ 00013088 size=12 ===== */

void RK_MPI_IVS_CreateChn(void)

{
  (*(code *)PTR_RK_MPI_IVS_CreateChn_000401fc)();
  return;
}



/* ===== <EXTERNAL>::fprintf @ 00013094 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00040200)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::ntohs @ 000130a0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint16_t ntohs(uint16_t __netshort)

{
  uint16_t uVar1;
  
  uVar1 = (*(code *)PTR_ntohs_00040204)(__netshort);
  return uVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetChnAttr @ 000130ac size=12 ===== */

void RK_MPI_VENC_SetChnAttr(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetChnAttr_00040208)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_ChnSaveFile @ 000130b8 size=12 ===== */

void RK_MPI_VI_ChnSaveFile(void)

{
  (*(code *)PTR_RK_MPI_VI_ChnSaveFile_0004020c)();
  return;
}



/* ===== <EXTERNAL>::abort @ 000130c4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00040210)();
  return;
}



/* ===== <EXTERNAL>::recvfrom @ 000130d0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recvfrom(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,socklen_t *__addr_len)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_recvfrom_00040214)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::RK_TDE_BeginJob @ 000130dc size=12 ===== */

void RK_TDE_BeginJob(void)

{
  (*(code *)PTR_RK_TDE_BeginJob_00040218)();
  return;
}



/* ===== <EXTERNAL>::sprintf @ 000130e8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_0004021c)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_MmzFlushCache @ 000130f4 size=12 ===== */

void RK_MPI_SYS_MmzFlushCache(void)

{
  (*(code *)PTR_RK_MPI_SYS_MmzFlushCache_00040220)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StartRecvFrame @ 00013100 size=12 ===== */

void RK_MPI_VENC_StartRecvFrame(void)

{
  (*(code *)PTR_RK_MPI_VENC_StartRecvFrame_00040224)();
  return;
}



/* ===== <EXTERNAL>::socket @ 0001310c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_socket_00040228)(__domain);
  return iVar1;
}



/* ===== <EXTERNAL>::fseek @ 00013118 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fseek_0004022c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 00013124 size=12 ===== */

void RK_MPI_MB_Handle2VirAddr(void)

{
  (*(code *)PTR_RK_MPI_MB_Handle2VirAddr_00040230)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_ReleaseMB @ 00013130 size=12 ===== */

void RK_MPI_MB_ReleaseMB(void)

{
  (*(code *)PTR_RK_MPI_MB_ReleaseMB_00040234)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_DestroyChn @ 0001313c size=12 ===== */

void RK_MPI_VENC_DestroyChn(void)

{
  (*(code *)PTR_RK_MPI_VENC_DestroyChn_00040238)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetMjpegParam @ 00013148 size=12 ===== */

void RK_MPI_VENC_SetMjpegParam(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetMjpegParam_0004023c)();
  return;
}



/* ===== <EXTERNAL>::pthread_mutex_unlock @ 00013154 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_00040240)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_deinit @ 00013160 size=12 ===== */

void rk_aiq_uapi2_sysctl_deinit(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_deinit_00040244)();
  return;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_stop @ 0001316c size=12 ===== */

void rk_aiq_uapi2_sysctl_stop(void)

{
  (*(code *)PTR_rk_aiq_uapi2_sysctl_stop_00040248)();
  return;
}



/* ===== <EXTERNAL>::raise @ 00013178 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_0004024c)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::sem_post @ 00013184 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sem_post(sem_t *__sem)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sem_post_00040250)(__sem);
  return iVar1;
}



/* ===== <EXTERNAL>::strstr @ 00013190 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strstr_00040254)(__haystack);
  return pcVar1;
}



/* ===== <EXTERNAL>::strcmp @ 0001319c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_00040258)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_ReleaseStream @ 000131a8 size=12 ===== */

void RK_MPI_VENC_ReleaseStream(void)

{
  (*(code *)PTR_RK_MPI_VENC_ReleaseStream_0004025c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetEptz @ 000131b4 size=12 ===== */

void RK_MPI_VI_SetEptz(void)

{
  (*(code *)PTR_RK_MPI_VI_SetEptz_00040260)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_IVS_GetChnAttr @ 000131c0 size=12 ===== */

void RK_MPI_IVS_GetChnAttr(void)

{
  (*(code *)PTR_RK_MPI_IVS_GetChnAttr_00040264)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevAttr @ 000131cc size=12 ===== */

void RK_MPI_VI_SetDevAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetDevAttr_00040268)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChn @ 000131d8 size=12 ===== */

void RK_MPI_VI_EnableChn(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableChn_0004026c)();
  return;
}



/* ===== <EXTERNAL>::accept @ 000131e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int accept(int __fd,sockaddr *__addr,socklen_t *__addr_len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_accept_00040270)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 000131f0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00040274)(__ptr);
  return;
}



/* ===== <EXTERNAL>::atoi @ 000131fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_00040278)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetJpegParam @ 00013208 size=12 ===== */

void RK_MPI_VENC_SetJpegParam(void)

{
  (*(code *)PTR_RK_MPI_VENC_SetJpegParam_0004027c)();
  return;
}



/* ===== <EXTERNAL>::fsync @ 00013214 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fsync(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fsync_00040280)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::strerror @ 00013220 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_00040284)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::listen @ 0001322c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int listen(int __fd,int __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_listen_00040288)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::printf @ 00013238 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_0004028c)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::getopt_long @ 00013244 size=12 ===== */

void getopt_long(void)

{
  (*(code *)PTR_getopt_long_00040290)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableDev @ 00013250 size=12 ===== */

void RK_MPI_VI_DisableDev(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableDev_00040294)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_CAL_TDE_GetPicBufferSize @ 0001325c size=12 ===== */

void RK_MPI_CAL_TDE_GetPicBufferSize(void)

{
  (*(code *)PTR_RK_MPI_CAL_TDE_GetPicBufferSize_00040298)();
  return;
}



/* ===== <EXTERNAL>::puts @ 00013268 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_0004029c)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_stop @ 00013274 size=12 ===== */

void rk_aiq_uapi2_camgroup_stop(void)

{
  (*(code *)PTR_rk_aiq_uapi2_camgroup_stop_000402a0)();
  return;
}



/* ===== <EXTERNAL>::signal @ 00013280 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = (__sighandler_t)(*(code *)PTR_signal_000402a4)(__sig);
  return p_Var1;
}



/* ===== <EXTERNAL>::RK_TDE_CancelJob @ 0001328c size=12 ===== */

void RK_TDE_CancelJob(void)

{
  (*(code *)PTR_RK_TDE_CancelJob_000402a8)();
  return;
}



/* ===== <EXTERNAL>::RK_TDE_Close @ 00013298 size=12 ===== */

void RK_TDE_Close(void)

{
  (*(code *)PTR_RK_TDE_Close_000402ac)();
  return;
}



/* ===== <EXTERNAL>::strcpy @ 000132a4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_000402b0)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 000132b0 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_000402b4)();
  return;
}



/* ===== <EXTERNAL>::sem_wait @ 000132bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sem_wait(sem_t *__sem)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sem_wait_000402b8)(__sem);
  return iVar1;
}



/* ===== <EXTERNAL>::pthread_join @ 000132c8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_000402bc)(__th);
  return iVar1;
}



/* ===== entry @ 00014078 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_000400d0)
            (DAT_000140ac,param_2,&stack0x00000004,DAT_000140b0,DAT_000140a8,param_1);
  return;
}



/* ===== FUN_000140b4 @ 000140b4 size=32 ===== */

void FUN_000140b4(void)

{
  if (DAT_000140d8 == DAT_000140d4) {
    return;
  }
  if (DAT_000140dc == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000140dc)();
  return;
}



/* ===== _FINI_0 @ 00014118 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00014154;
  if (*DAT_00014154 != '\0') {
    return;
  }
  FUN_000140b4();
  if (DAT_00014158 != 0) {
    __deregister_frame_info(DAT_0001415c);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00014160 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00014184 != 0) {
    __register_frame_info(DAT_0001418c,DAT_00014188);
  }
  if ((DAT_00014110 - DAT_0001410c >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00014114 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00014114)();
  return;
}



/* ===== FUN_00014190 @ 00014190 size=72 ===== */

void FUN_00014190(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  RK_LOG(2,DAT_000141e0,DAT_000141d8,DAT_000141dc,0x67,param_1,param_2,param_4);
  *DAT_000141e4 = 0xffffffff;
  *(undefined4 *)*DAT_000141e8 = 1;
  return;
}



/* ===== FUN_000141ec @ 000141ec size=60 ===== */

void FUN_000141ec(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  RK_LOG(2,DAT_00014230,DAT_00014228,DAT_0001422c,0x6d,param_1,param_2,param_4);
  *(undefined4 *)*DAT_00014234 = 1;
  return;
}



/* ===== FUN_00014238 @ 00014238 size=176 ===== */

void FUN_00014238(undefined4 param_1)

{
  puts(DAT_000142e8);
  printf(DAT_000142ec,param_1);
  puts(DAT_000142f0);
  puts(DAT_000142f4);
  puts(DAT_000142f8);
  puts(DAT_000142fc);
  puts(DAT_00014300);
  puts(DAT_00014304);
  puts(DAT_00014308);
  puts(DAT_0001430c);
  puts(DAT_00014310);
  puts(DAT_00014314);
  puts(DAT_00014318);
  puts(DAT_0001431c);
  puts(DAT_00014320);
  puts(DAT_00014324);
  puts(DAT_00014328);
  puts(DAT_0001432c);
  puts(DAT_00014330);
  puts(DAT_00014334);
  return;
}



/* ===== FUN_00014338 @ 00014338 size=136 ===== */

int FUN_00014338(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = DAT_000143c0;
  iVar3 = 4;
  do {
    iVar4 = iVar3 * 0x4c0;
    iVar2 = *piVar1;
    iVar2 = RK_MPI_RGN_DetachFromChn
                      (*(undefined4 *)(iVar2 + iVar4 + 0x1544),iVar2 + iVar4 + 0x1520,iVar2 + iVar4,
                       iVar2,param_1,param_2,param_3,param_4);
    if (iVar2 != 0) {
      RK_LOG(2,DAT_000143c8,DAT_000143c4,DAT_000143cc,0x277,
             *(undefined4 *)(*piVar1 + iVar4 + 0x1544),iVar2);
      return iVar2;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 7);
  return 0;
}



/* ===== FUN_000143d0 @ 000143d0 size=144 ===== */

int FUN_000143d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = DAT_00014460;
  iVar5 = 0x2820;
  iVar4 = 4;
  do {
    iVar2 = *piVar1;
    iVar3 = iVar2 + iVar4 * 0x4c0;
    iVar2 = RK_MPI_RGN_AttachToChn
                      (*(undefined4 *)(iVar3 + 0x1544),iVar2 + iVar5,iVar2 + iVar5 + 0x440,iVar3,
                       param_1,param_2,param_3,param_4);
    if (iVar2 != 0) {
      RK_LOG(2,DAT_00014468,DAT_00014464,DAT_0001446c,0x287,
             *(undefined4 *)(*piVar1 + iVar4 * 0x4c0 + 0x1544),iVar2);
      return iVar2;
    }
    iVar4 = iVar4 + 1;
    iVar5 = iVar5 + 0x4c0;
  } while (iVar4 != 7);
  return 0;
}



/* ===== FUN_00014470 @ 00014470 size=848 ===== */

uint FUN_00014470(undefined4 param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  __start_routine *__start_routine;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  void *__arg;
  int iVar8;
  bool bVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  
  uVar7 = DAT_000147c4;
  piVar1 = DAT_000147c0;
  iVar8 = 0;
  do {
    iVar4 = FUN_000191b4(*piVar1 + iVar8 * 0x4c0 + 0x14f0);
    if (iVar4 != 0) {
      RK_LOG(2,uVar7,DAT_000147c8,DAT_000147cc,0x58d,iVar4,
             *(undefined4 *)(*piVar1 + iVar8 * 0x4c0 + 0x1544));
    }
    piVar2 = DAT_000147d0;
    iVar8 = iVar8 + 1;
  } while (iVar8 != 7);
  iVar8 = *DAT_000147d0;
  *(undefined4 *)(iVar8 + 0x14) = 1;
  pthread_join(*(pthread_t *)(iVar8 + 0x68),(void **)0x0);
  FUN_0001836c(*piVar1 + 0x3630);
  *(undefined4 *)(*piVar2 + 4) = 1;
  pthread_join(*(pthread_t *)(*piVar1 + 0xd20),(void **)0x0);
  local_40 = 8;
  iVar8 = *piVar1;
  local_34 = 4;
  local_30 = 0;
  local_3c = *(undefined4 *)(iVar8 + 0x1c);
  local_38 = *(undefined4 *)(iVar8 + 0x24);
  local_2c = *(undefined4 *)(iVar8 + 0xaf8);
  uVar5 = FUN_0001892c(&local_40,&local_34);
  if (uVar5 == 0) {
    FUN_00019954(*piVar1 + 0xab0);
    uVar10 = RK_MPI_VI_DisableChn(*(undefined4 *)(*piVar1 + 0x20),*(undefined4 *)(*piVar1 + 0x24));
    uVar7 = (undefined4)((ulonglong)uVar10 >> 0x20);
    uVar5 = (uint)uVar10;
    if (uVar5 == 0) {
      iVar8 = *piVar1;
      bVar9 = param_3 != 0;
      if (bVar9) {
        uVar7 = 2;
      }
      *(int *)(iVar8 + 0x24) = param_3;
      *(undefined4 *)(iVar8 + 0xa0) = param_1;
      *(undefined4 *)(iVar8 + 0xa4) = param_2;
      *(undefined4 *)(iVar8 + 0x363c) = param_1;
      *(undefined4 *)(iVar8 + 0x3640) = param_2;
      if (bVar9) {
        *(undefined4 *)(iVar8 + 0xa8) = uVar7;
      }
      else {
        *(undefined4 *)(iVar8 + 0xa8) = 0;
      }
      *(undefined4 *)(iVar8 + 0xac4) = param_1;
      *(undefined4 *)(iVar8 + 0xac8) = param_2;
      if (bVar9) {
        *(undefined4 *)(iVar8 + 0x3644) = uVar7;
        *(undefined4 *)(iVar8 + 0xaec) = uVar7;
      }
      else {
        *(undefined4 *)(iVar8 + 0x3644) = 0;
        *(undefined4 *)(iVar8 + 0xaec) = 0;
      }
      uVar5 = RK_MPI_VI_SetChnAttr(*(undefined4 *)(iVar8 + 0x20),param_3,iVar8 + 0xa0);
      uVar6 = RK_MPI_VI_EnableChn(*(undefined4 *)(*piVar1 + 0x20),param_3);
      if ((uVar5 | uVar6) != 0) {
        RK_LOG(2,DAT_000147c4,DAT_000147dc,DAT_000147cc,0x5c6);
        return uVar5 | uVar6;
      }
      iVar8 = *piVar1;
      *(undefined4 *)(*piVar2 + 4) = 0;
      FUN_00019244(iVar8 + 0xab0);
      uVar5 = FUN_00017f48(*piVar1 + 0x3630);
      __start_routine = DAT_000147e4;
      if (uVar5 == 0) {
        iVar8 = *piVar2;
        __arg = (void *)*piVar1;
        *(undefined4 *)(iVar8 + 0x14) = 0;
        pthread_create((pthread_t *)(iVar8 + 0x68),(pthread_attr_t *)0x0,__start_routine,__arg);
        local_40 = 8;
        iVar8 = *piVar1;
        local_3c = *(undefined4 *)(iVar8 + 0x1c);
        local_38 = *(undefined4 *)(iVar8 + 0x24);
        local_2c = *(undefined4 *)(iVar8 + 0xaf8);
        local_34 = 4;
        local_30 = uVar5;
        uVar5 = FUN_000188e4(&local_40,&local_34);
        uVar3 = DAT_000147e8;
        uVar11 = DAT_000147cc;
        uVar7 = DAT_000147c4;
        if (uVar5 == 0) {
          iVar8 = 0;
          do {
            uVar5 = FUN_00018c50(*piVar1 + iVar8 * 0x4c0 + 0x14f0);
            if (uVar5 != 0) {
              RK_LOG(2,uVar7,uVar3,uVar11,0x5e9,*(undefined4 *)(*piVar1 + iVar8 * 0x4c0 + 0x1544),
                     uVar5);
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 != 7);
          RK_LOG(2,DAT_000147c4,DAT_000147ec,DAT_000147cc,0x5ed);
          return uVar5;
        }
        uVar11 = 0x5e1;
        uVar7 = DAT_000147f0;
      }
      else {
        uVar11 = 0x5cf;
        uVar7 = DAT_000147e0;
      }
    }
    else {
      uVar11 = 0x5ad;
      uVar7 = DAT_000147d8;
    }
  }
  else {
    uVar11 = 0x5a5;
    uVar7 = DAT_000147d4;
  }
  RK_LOG(2,DAT_000147c4,uVar7,DAT_000147cc,uVar11,uVar5);
  return uVar5;
}



/* ===== FUN_000147f4 @ 000147f4 size=116 ===== */

void FUN_000147f4(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  pthread_mutex_t *__mutex;
  
  iVar3 = DAT_00014870;
  iVar2 = DAT_0001486c;
  piVar1 = DAT_00014868;
  iVar4 = 0;
  do {
    if (*(int *)(*piVar1 + 0x28) == 0 || iVar4 != 2) {
      __mutex = (pthread_mutex_t *)(iVar4 * 0x18 + iVar2);
      pthread_mutex_lock(__mutex);
      *(undefined4 *)(*piVar1 + (iVar4 + 0x10) * 4) = 0;
      pthread_mutex_unlock(__mutex);
      sem_wait((sem_t *)(iVar3 + iVar4 * 0x10));
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 4);
  return;
}



/* ===== FUN_00014874 @ 00014874 size=780 ===== */

undefined4 FUN_00014874(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  FILE *__stream;
  int iVar3;
  char *__format;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  void *local_12c;
  char acStack_128 [260];
  
  local_12c = (void *)0x0;
  memset(acStack_128,0,0xff);
  sprintf(acStack_128,DAT_00014b80,*(undefined4 *)(param_1 + 0x48));
  prctl(0xf,acStack_128);
  iVar6 = *(int *)(param_1 + 0x280);
  if (iVar6 == 0) {
    __stream = (FILE *)0x0;
    iVar6 = 0;
  }
  else {
    memset(acStack_128,0,0xff);
    __format = DAT_00014b84;
    if (1 < *(int *)(param_1 + 0x48) - 2U) {
      __format = DAT_00014b88;
    }
    snprintf(acStack_128,0xff,__format,iVar6,*(int *)(param_1 + 0x48));
    __stream = fopen64(acStack_128,DAT_00014b8c);
    if (__stream == (FILE *)0x0) {
      RK_LOG(2,DAT_00014b90,DAT_00014b94,DAT_00014b98,0x124,*(undefined4 *)(param_1 + 0x48),
             *(undefined4 *)(param_1 + 0x280));
      FUN_00014190(DAT_00014b9c,0x125);
      return 0;
    }
    iVar6 = fileno(__stream);
  }
  piVar2 = DAT_00014ba0;
  uVar1 = DAT_00014b90;
  iVar7 = 0;
  do {
    do {
      if (*(int *)(*piVar2 + *(int *)(param_1 + 0x48) * 4 + 4) != 0) {
LAB_00014b14:
        if (__stream != (FILE *)0x0) {
          fsync(iVar6);
          fclose(__stream);
        }
        RK_LOG(2,DAT_00014b90,DAT_00014bc0,DAT_00014b98,0x162,*(undefined4 *)(param_1 + 0x48));
        return 0;
      }
      iVar3 = FUN_0001987c(param_1,&local_12c);
    } while (iVar3 != 0);
    iVar5 = *(int *)(param_1 + 0x38);
    bVar8 = iVar7 == iVar5;
    iVar3 = iVar7 - iVar5;
    if (iVar7 >= iVar5) {
      bVar8 = iVar5 == 0;
      iVar3 = iVar5;
    }
    if (!bVar8 && iVar3 < 0 == (iVar7 < iVar5 && SBORROW4(iVar7,iVar5))) {
      FUN_00019904(param_1);
      FUN_000141ec(DAT_00014b9c,0x131);
      goto LAB_00014b14;
    }
    if ((__stream != (FILE *)0x0) && (*(int *)*piVar2 == 0)) {
      if (*(int *)(param_1 + 0x48) - 2U < 2) {
        fseek(__stream,0,0);
      }
      fwrite(local_12c,1,*(size_t *)(*(int *)(param_1 + 0xe0) + 4),__stream);
      fflush(__stream);
    }
    if ((*DAT_00014ba4 == 0) || (*(int *)(param_1 + 0x48) - 2U < 2)) {
      RK_LOG(5,uVar1,DAT_00014bbc,DAT_00014b98,0x147,*(int *)(param_1 + 0x48),iVar7);
    }
    else {
      pthread_mutex_lock(DAT_00014ba8);
      FUN_000209d8(*(undefined4 *)(DAT_00014bac + *(int *)(param_1 + 0x48) * 4),local_12c,
                   *(undefined4 *)(*(int *)(param_1 + 0xe0) + 4),DAT_00014bac,
                   *(undefined8 *)(*(int *)(param_1 + 0xe0) + 8));
      FUN_0001fe2c(*DAT_00014bb0);
      pthread_mutex_unlock(DAT_00014ba8);
    }
    iVar3 = DAT_00014bb4;
    if (*(int *)(*piVar2 + 0x24) != 0) {
      pthread_mutex_lock((pthread_mutex_t *)(*(int *)(param_1 + 0x48) * 0x18 + DAT_00014bb4));
      iVar5 = *(int *)(param_1 + 0x48);
      iVar4 = *piVar2 + iVar5 * 4;
      *(int *)(iVar4 + 0x40) = *(int *)(iVar4 + 0x40) + 1;
      pthread_mutex_unlock((pthread_mutex_t *)(iVar5 * 0x18 + iVar3));
      if (*(int *)(*piVar2 + (*(int *)(param_1 + 0x48) + 0x10) * 4) == *(int *)(*piVar2 + 0x3c)) {
        sem_post((sem_t *)(DAT_00014bb8 + *(int *)(param_1 + 0x48) * 0x10));
      }
    }
    RK_LOG(5,uVar1,DAT_00014bbc,DAT_00014b98,0x155,*(undefined4 *)(param_1 + 0x48),iVar7);
    FUN_00019904(param_1);
    iVar7 = iVar7 + 1;
  } while( true );
}



/* ===== FUN_00014bc4 @ 00014bc4 size=188 ===== */

void FUN_00014bc4(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  uVar3 = DAT_00014c88;
  uVar2 = DAT_00014c84;
  uVar1 = DAT_00014c80;
  iVar5 = param_1;
  iVar7 = param_1;
  for (uVar6 = 0; uVar6 < *(uint *)(param_1 + 4); uVar6 = uVar6 + 1) {
    if (*(int *)(iVar5 + 0x2c) == 0) {
      iVar7 = 0x180;
      RK_LOG(2,uVar3,DAT_00014c8c,uVar1);
      FUN_00014190(DAT_00014c90,0x181);
    }
    else {
      iVar4 = RK_MPI_VI_ReleaseChnFrame
                        (0,2,*(int *)(iVar5 + 0x2c),*(uint *)(param_1 + 4),iVar7,param_2,param_3);
      if (iVar4 != 0) {
        iVar7 = 0x186;
        RK_LOG(2,uVar3,uVar2,uVar1);
        FUN_00014190(DAT_00014c90,0x187);
        param_2 = iVar4;
      }
      free(*(void **)(iVar5 + 0x2c));
    }
    iVar5 = iVar5 + 0x28;
  }
  return;
}



/* ===== FUN_00014cc8 @ 00014cc8 size=344 ===== */

undefined4 FUN_00014cc8(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *__dest;
  int iVar7;
  int iVar8;
  undefined4 local_54;
  int local_50 [3];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 *local_2c;
  
  piVar1 = DAT_00014e20;
  prctl(0xf,DAT_00014e24);
  uVar3 = DAT_00014e2c;
  piVar2 = DAT_00014e28;
  local_54 = 0;
  iVar5 = FUN_00029b90(1000,*(undefined4 *)(*piVar1 + 0x3aa0));
  uVar4 = DAT_00014e30;
  iVar7 = 0;
LAB_00014d10:
  do {
    if (*(int *)(*piVar2 + 0x20) != 0) {
      RK_LOG(2,DAT_00014e30,DAT_00014e34,DAT_00014e2c,0x1b2);
      return 0;
    }
    iVar6 = FUN_00017d88(*piVar1 + 0x720,&local_54);
    iVar8 = iVar7;
    if (iVar6 == 0) {
      __dest = malloc(0x50);
      if (__dest == (undefined4 *)0x0) {
        RK_LOG(2,uVar4,DAT_00014e38,uVar3,0x19c);
        FUN_00017e84(*piVar1 + 0x720);
        goto LAB_00014d10;
      }
      memcpy(__dest,(void *)(*piVar1 + 0xa38),0x50);
      local_30 = RK_MPI_MB_Handle2Fd(*__dest);
      uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      iVar8 = iVar7 + 1;
      local_50[1] = 0;
      iVar6 = *piVar1;
      local_40 = *(undefined4 *)(iVar6 + 0x3aa8);
      local_50[2] = CONCAT22((short)__dest[2],(short)__dest[1]);
      local_44 = *(undefined4 *)(iVar6 + 0x3aac);
      local_50[0] = iVar7;
      local_2c = __dest;
      ROCKIVA_PushFrame(*(undefined4 *)(iVar6 + 0x3aa4),local_50,0);
    }
    usleep(iVar5 * 1000);
    iVar7 = iVar8;
  } while( true );
}



/* ===== FUN_00014e3c @ 00014e3c size=552 ===== */

undefined4 FUN_00014e3c(void)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  byte *pbVar7;
  int extraout_r1;
  uint uVar8;
  byte *pbVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  undefined8 local_3b0;
  undefined1 auStack_3a8 [56];
  int local_370;
  
  prctl(0xf,DAT_00015064);
  uVar6 = DAT_00015074;
  uVar5 = DAT_00015070;
  piVar4 = DAT_0001506c;
  uVar11 = 0;
  iVar13 = 0;
  uVar12 = *(uint *)(*DAT_00015068 + 0x3700);
  memset(auStack_3a8,0,0x388);
  RK_MPI_IVS_GetChnAttr(0,auStack_3a8);
  uVar12 = uVar12 >> 6;
  RK_LOG(2,DAT_00015070,DAT_00015078,DAT_0001507c,0x1c5,local_370);
  while (*(int *)(*piVar4 + 0x1c) == 0) {
    local_3b0 = 0;
    local_370 = RK_MPI_IVS_GetResults(0,&local_3b0,2000);
    if (local_370 == 0) {
      iVar13 = iVar13 + 1;
      iVar10 = (int)local_3b0;
      RK_LOG(5,uVar5,DAT_00015084,DAT_0001507c,0x1cc,(int)local_3b0);
      FUN_00029c38(iVar13,10);
      if ((extraout_r1 == 0) && ((int)local_3b0 == 1)) {
        pbVar9 = *(byte **)(Elf32_Ehdr_00010000.e_ident_pad + local_3b0._4_4_ + -1);
        uVar1 = *(uint *)(Elf32_Ehdr_00010000.e_ident_pad + local_3b0._4_4_ + 3) >> 6;
        if (pbVar9 != (byte *)0x0) {
          pbVar7 = pbVar9 + uVar12;
          pbVar16 = pbVar9 + uVar1 * 0x40;
          uVar11 = 0;
          for (; pbVar15 = pbVar9, pbVar9 != pbVar16; pbVar9 = pbVar9 + 0x40) {
            while (pbVar15 != pbVar7) {
              pbVar14 = pbVar15 + 1;
              bVar3 = *pbVar15;
              uVar8 = 0;
              do {
                uVar2 = uVar8 & 0xff;
                uVar8 = uVar8 + 1;
                if (((int)(uint)bVar3 >> uVar2 & 1U) != 0) {
                  uVar11 = uVar11 + 1;
                }
                pbVar15 = pbVar14;
              } while (uVar8 != 8);
            }
            pbVar7 = pbVar7 + 0x40;
          }
        }
        if ((uint)((ulonglong)uVar6 * (ulonglong)(uVar1 * uVar12 * 8) >> 0x22) < uVar11) {
          RK_LOG(2,uVar5,DAT_00015088,DAT_0001507c,0x1dd,iVar10);
        }
        iVar13 = 0;
      }
      local_370 = iVar10;
      if (0 < (int)local_3b0) {
        iVar10 = *(int *)(Elf32_Ehdr_00010000.e_ident_pad + local_3b0._4_4_ + 0xf);
        if (iVar10 != 0) {
          RK_LOG(2,uVar5,DAT_0001508c,DAT_0001507c,0x1e3,iVar10);
          local_370 = iVar10;
        }
      }
      RK_MPI_IVS_ReleaseResults(0,&local_3b0);
    }
    else {
      RK_LOG(2,uVar5,DAT_00015090,DAT_0001507c,0x1ea,local_370);
    }
  }
  RK_LOG(2,DAT_00015070,DAT_00015080,DAT_0001507c,0x1ee,local_370);
  return 0;
}



/* ===== FUN_00015094 @ 00015094 size=304 ===== */

undefined4 FUN_00015094(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char acStack_128 [260];
  
  uVar3 = FUN_0001ce60(0x22a);
  uVar2 = DAT_000151d0;
  uVar4 = DAT_000151cc;
  puVar6 = DAT_000151c8;
  puVar1 = DAT_000151c4;
  iVar5 = 0;
  *DAT_000151c4 = uVar3;
  memset(acStack_128,0,0xff);
  do {
    if (1 < iVar5 - 2U) {
      sprintf(acStack_128,DAT_000151d4,iVar5);
      uVar7 = FUN_0001cc9c(*puVar1,acStack_128);
      uVar3 = (undefined4)((ulonglong)uVar7 >> 0x20);
      if (param_1 == 5) {
        uVar3 = 1;
      }
      *puVar6 = (int)uVar7;
      if (param_1 != 5) {
        if (param_1 != 6) {
          RK_LOG(2,DAT_000151d0,DAT_000151e0,DAT_000151cc,0x685);
          uVar4 = 0;
          goto LAB_000151b4;
        }
        uVar3 = 2;
      }
      FUN_0001ced0((int)uVar7,uVar3);
      uVar3 = *puVar6;
      uVar7 = FUN_00021e44();
      uVar8 = FUN_00021f50();
      FUN_00021f88(uVar3,(int)((ulonglong)uVar8 >> 0x20),(int)uVar7,(int)((ulonglong)uVar7 >> 0x20),
                   uVar8);
      RK_LOG(2,uVar2,DAT_000151d8,uVar4,0x68a,acStack_128);
    }
    iVar5 = iVar5 + 1;
    puVar6 = puVar6 + 1;
  } while (iVar5 != 4);
  uVar4 = 1;
LAB_000151b4:
  *DAT_000151dc = uVar4;
  return 0;
}



/* ===== FUN_000151e4 @ 000151e4 size=2148 ===== */

uint FUN_000151e4(int param_1)

{
  int *piVar1;
  int *piVar2;
  __start_routine *p_Var3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  void *__arg;
  int iVar8;
  undefined4 uVar9;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  uint local_28;
  undefined4 local_24;
  
  piVar1 = DAT_00015a48;
  if (param_1 != 0) {
    iVar4 = *DAT_00015a48;
    uVar5 = FUN_0001ad1c(*(undefined4 *)(iVar4 + 0x30),*(undefined4 *)(iVar4 + 0x5c),
                         *(undefined4 *)(iVar4 + 0x2c),*(undefined4 *)(iVar4 + 0x58));
    uVar6 = FUN_0001b2d8(*(undefined4 *)(*piVar1 + 0x30));
    uVar5 = uVar5 | uVar6;
    if (uVar5 != 0) {
      uVar9 = 0x69f;
      uVar7 = DAT_00015a4c;
      goto LAB_00015238;
    }
  }
  iVar4 = RK_MPI_SYS_Init();
  piVar1 = DAT_00015a48;
  if (iVar4 != 0) {
    RK_LOG(2,DAT_00015a54,DAT_00015a58,DAT_00015a50,0x6a5);
    return 0xffffffff;
  }
  uVar5 = FUN_00015094(*(undefined4 *)(*DAT_00015a48 + 0x60));
  piVar2 = DAT_00015a60;
  if (uVar5 != 0) {
    uVar9 = 0x6ab;
    uVar7 = DAT_00015a5c;
LAB_00015238:
    RK_LOG(2,DAT_00015a54,uVar7,DAT_00015a50,uVar9);
    return uVar5;
  }
  uVar6 = FUN_00017a50(*DAT_00015a60);
  if (uVar6 != 0) {
    uVar9 = 0x6b1;
    uVar7 = DAT_00015a64;
    goto LAB_00015310;
  }
  uVar6 = FUN_00017a50(*piVar2 + 0x390);
  if (uVar6 != 0) {
    uVar9 = 0x6b7;
    uVar7 = DAT_00015a64;
    goto LAB_00015310;
  }
  uVar6 = FUN_00017a50(*piVar2 + 0x720);
  if (uVar6 != 0) {
    uVar9 = 0x6be;
    uVar7 = DAT_00015a64;
    goto LAB_00015310;
  }
  uVar6 = FUN_00018690(*piVar2 + 0x36f8);
  if (uVar6 != 0) {
    uVar9 = 0x6c5;
    uVar7 = DAT_00015a68;
    goto LAB_00015310;
  }
  FUN_000183d0(*piVar2 + 0x3a84);
  iVar4 = *piVar2;
  *(undefined4 *)(*piVar1 + 4) = 0;
  FUN_00019244(iVar4 + 0xab0);
  iVar4 = *piVar2;
  *(undefined4 *)(*piVar1 + 8) = 0;
  FUN_00019244(iVar4 + 0xd40);
  if (*(int *)(*piVar1 + 0x28) == 0) {
    iVar4 = *piVar2;
    *(undefined4 *)(*piVar1 + 0xc) = 0;
    FUN_00019244(iVar4 + 0xfd0);
  }
  iVar4 = *piVar2;
  *(undefined4 *)(*piVar1 + 0x10) = 0;
  FUN_00019244(iVar4 + 0x1260);
  if (*(int *)(*piVar1 + 0x28) == 0) {
    FUN_00017f48(*piVar2 + 0x3630);
  }
  iVar4 = *piVar2;
  local_38 = 0;
  local_2c = 0;
  *(undefined4 *)(iVar4 + 0x1544) = 0;
  *(undefined4 *)(iVar4 + 0x1548) = 2;
  *(undefined4 *)(iVar4 + 0x1524) = *(undefined4 *)(iVar4 + 0x1c);
  *(undefined4 *)(iVar4 + 0x1520) = 8;
  *(undefined4 *)(iVar4 + 0x1528) = 6;
  *(undefined4 *)(iVar4 + 0x152c) = 0;
  *(undefined4 *)(iVar4 + 0x1530) = 0;
  *(undefined4 *)(iVar4 + 0x1534) = 0x100;
  *(undefined4 *)(iVar4 + 0x1538) = 0x100;
  *(undefined4 *)(iVar4 + 0x153c) = 0xff0000;
  *(undefined4 *)(iVar4 + 0x1540) = 0;
  iVar4 = FUN_00018c50(iVar4 + 0x14f0);
  if (iVar4 == 0) {
    iVar4 = *piVar2;
    *(undefined4 *)(iVar4 + 0x19ec) = 0;
    *(undefined4 *)(iVar4 + 0x1a04) = 1;
    *(undefined4 *)(iVar4 + 0x19e4) = *(undefined4 *)(iVar4 + 0x1c);
    *(undefined4 *)(iVar4 + 0x1a08) = 2;
    *(undefined4 *)(iVar4 + 0x19e0) = 8;
    *(uint *)(iVar4 + 0x19f0) = *(int *)(iVar4 + 0x14) - 0xffU & 0xfffffffe;
    uVar7 = DAT_00015a78;
    *(undefined4 *)(iVar4 + 0x19e8) = 6;
    *(undefined4 *)(iVar4 + 0x19f4) = 0x100;
    *(undefined4 *)(iVar4 + 0x19f8) = 0x100;
    *(undefined4 *)(iVar4 + 0x19fc) = uVar7;
    *(undefined4 *)(iVar4 + 0x1a00) = 1;
    iVar4 = FUN_00018c50(iVar4 + 0x19b0);
    if (iVar4 != 0) {
      uVar7 = *(undefined4 *)(*piVar2 + 0x1a04);
      uVar9 = 0x4ba;
      goto LAB_00015464;
    }
    iVar4 = *piVar2;
    *(undefined4 *)(iVar4 + 0x1ec4) = 2;
    *(undefined4 *)(iVar4 + 0x1ec8) = 3;
    *(undefined4 *)(iVar4 + 0x1ea4) = *(undefined4 *)(iVar4 + 0x1c);
    *(undefined4 *)(iVar4 + 0x1eb0) = 0;
    *(undefined4 *)(iVar4 + 0x1ea0) = 8;
    *(undefined4 *)(iVar4 + 0x1ea8) = 6;
    *(uint *)(iVar4 + 0x1eac) = *(int *)(iVar4 + 0x10) - 0xffU & 0xfffffffe;
    *(undefined4 *)(iVar4 + 0x1eb4) = 0x100;
    *(undefined4 *)(iVar4 + 0x1eb8) = 0x100;
    *(undefined4 *)(iVar4 + 0x1ec0) = 2;
    iVar4 = FUN_00018c50(iVar4 + 0x1e70);
    if (iVar4 != 0) {
      uVar7 = *(undefined4 *)(*piVar2 + 0x1ec4);
      uVar9 = 0x4cd;
      goto LAB_00015464;
    }
    iVar4 = *piVar2;
    *(undefined4 *)(iVar4 + 0x2384) = 3;
    *(undefined4 *)(iVar4 + 0x2388) = 3;
    *(undefined4 *)(iVar4 + 0x2364) = *(undefined4 *)(iVar4 + 0x1c);
    *(undefined4 *)(iVar4 + 0x2360) = 8;
    *(undefined4 *)(iVar4 + 0x2368) = 6;
    *(uint *)(iVar4 + 0x236c) = *(int *)(iVar4 + 0x10) - 0xffU & 0xfffffffe;
    *(undefined4 *)(iVar4 + 0x2374) = 0x100;
    *(undefined4 *)(iVar4 + 0x2378) = 0x100;
    *(undefined4 *)(iVar4 + 0x2380) = 3;
    *(uint *)(iVar4 + 0x2370) = *(int *)(iVar4 + 0x14) - 0xffU & 0xfffffffe;
    iVar4 = FUN_00018c50(iVar4 + 0x2330);
    if (iVar4 != 0) {
      uVar7 = *(undefined4 *)(*piVar2 + 0x2384);
      uVar9 = 0x4e1;
      goto LAB_00015464;
    }
    iVar4 = FUN_00018974(*(undefined4 *)(*piVar1 + 0x50),&local_38,&local_2c);
    if (iVar4 != 0) {
      RK_LOG(2,DAT_00015a54,DAT_00015a7c,DAT_00015a6c,0x503);
      local_38 = 0x80;
      local_2c = 0x80;
    }
    iVar4 = *piVar2;
    *(undefined4 *)(iVar4 + 0x2844) = 4;
    *(undefined4 *)(iVar4 + 0x2824) = 0;
    *(undefined4 *)(iVar4 + 0x2828) = *(undefined4 *)(iVar4 + 0xaf8);
    *(undefined4 *)(iVar4 + 0x2830) = 0;
    *(undefined4 *)(iVar4 + 0x2848) = 0;
    *(undefined4 *)(iVar4 + 0x2820) = 4;
    *(uint *)(iVar4 + 0x282c) = (*(uint *)(iVar4 + 0xac4) >> 1) + 0xf & 0xfffffff0;
    *(undefined4 *)(iVar4 + 0x2834) = local_38;
    *(undefined4 *)(iVar4 + 0x27f8) = 0x80;
    *(undefined4 *)(iVar4 + 0x27fc) = 0x80;
    *(int *)(iVar4 + 0x2838) = local_2c;
    uVar7 = DAT_00015a80;
    *(undefined4 *)(iVar4 + 0x2840) = 4;
    *(undefined4 *)(iVar4 + 0x27f4) = uVar7;
    *(undefined4 *)(iVar4 + 0x27f0) = *(undefined4 *)(*piVar1 + 0x50);
    iVar4 = FUN_00018c50(iVar4 + 0x27f0);
    if (iVar4 != 0) {
      uVar7 = *(undefined4 *)(*piVar2 + 0x2844);
      uVar9 = 0x519;
      goto LAB_00015464;
    }
    iVar4 = FUN_00018974(*(undefined4 *)(*piVar1 + 0x54),&local_38,&local_2c);
    if (iVar4 != 0) {
      RK_LOG(2,DAT_00015a54,DAT_00015a7c,DAT_00015a6c,0x521);
      local_38 = 0x80;
      local_2c = 0x80;
    }
    iVar4 = *piVar2;
    *(undefined4 *)(iVar4 + 0x2d08) = 0;
    *(undefined4 *)(iVar4 + 0x2ce0) = 4;
    *(undefined4 *)(iVar4 + 0x2ce4) = 0;
    *(undefined4 *)(iVar4 + 0x2d04) = 5;
    *(undefined4 *)(iVar4 + 0x2ce8) = *(undefined4 *)(iVar4 + 0xaf8);
    *(uint *)(iVar4 + 0x2cec) = (*(uint *)(iVar4 + 0xac4) >> 1) + 0xf & 0xfffffff0;
    *(uint *)(iVar4 + 0x2cf0) = (*(uint *)(iVar4 + 0xac8) >> 1) + 0xf & 0xfffffff0;
    *(undefined4 *)(iVar4 + 0x2cf4) = local_38;
    *(undefined4 *)(iVar4 + 0x2cb8) = 0x80;
    *(undefined4 *)(iVar4 + 0x2cbc) = 0x80;
    *(int *)(iVar4 + 0x2cf8) = local_2c;
    uVar7 = DAT_00015a80;
    *(undefined4 *)(iVar4 + 0x2d00) = 5;
    *(undefined4 *)(iVar4 + 0x2cb4) = uVar7;
    *(undefined4 *)(iVar4 + 0x2cb0) = *(undefined4 *)(*piVar1 + 0x54);
    iVar4 = FUN_00018c50(iVar4 + 0x2cb0);
    if (iVar4 != 0) {
      uVar7 = *(undefined4 *)(*piVar2 + 0x2d04);
      uVar9 = 0x538;
      goto LAB_00015464;
    }
    iVar4 = FUN_00018974(*(undefined4 *)(*piVar1 + 0x54),&local_38,&local_2c);
    if (iVar4 != 0) {
      RK_LOG(2,DAT_00015a54,DAT_00015a7c,DAT_00015a6c,0x540);
      local_38 = 0x80;
      local_2c = 0x80;
    }
    iVar4 = *piVar2;
    *(undefined4 *)(iVar4 + 0x31c8) = 0;
    *(undefined4 *)(iVar4 + 0x31a0) = 4;
    *(undefined4 *)(iVar4 + 0x31a4) = 0;
    *(undefined4 *)(iVar4 + 0x31c4) = 6;
    *(undefined4 *)(iVar4 + 0x31a8) = *(undefined4 *)(iVar4 + 0xaf8);
    *(uint *)(iVar4 + 0x31ac) = (*(uint *)(iVar4 + 0xac4) >> 1) + 0xf & 0xfffffff0;
    *(uint *)(iVar4 + 0x31b0) = (*(int *)(iVar4 + 0xac8) - local_2c) + 0xfU & 0xfffffff0;
    *(int *)(iVar4 + 0x31b8) = local_2c;
    *(undefined4 *)(iVar4 + 0x31c0) = 6;
    *(undefined4 *)(iVar4 + 0x31b4) = local_38;
    *(undefined4 *)(iVar4 + 0x3174) = DAT_00015a80;
    *(undefined4 *)(iVar4 + 0x3178) = 0x80;
    *(undefined4 *)(iVar4 + 0x317c) = 0x80;
    *(undefined4 *)(iVar4 + 0x3170) = *(undefined4 *)(*piVar1 + 0x54);
    iVar4 = FUN_00018c50(iVar4 + 0x3170);
    if (iVar4 != 0) {
      uVar7 = *(undefined4 *)(*piVar2 + 0x31c4);
      uVar9 = 0x557;
      goto LAB_00015464;
    }
  }
  else {
    uVar7 = *(undefined4 *)(*piVar2 + 0x1544);
    uVar9 = 0x4a6;
LAB_00015464:
    RK_LOG(2,DAT_00015a54,DAT_00015a70,DAT_00015a6c,uVar9,iVar4,uVar7);
  }
  iVar4 = *piVar2;
  local_38 = 8;
  local_34 = *(undefined4 *)(iVar4 + 0x1c);
  local_30 = *(undefined4 *)(iVar4 + 0x24);
  local_24 = *(undefined4 *)(iVar4 + 0xaf8);
  local_2c = 4;
  local_28 = 0;
  uVar6 = FUN_000188e4(&local_38,&local_2c);
  if (uVar6 == 0) {
    iVar4 = *piVar2;
    local_38 = 8;
    local_34 = *(undefined4 *)(iVar4 + 0x3ac);
    local_30 = *(undefined4 *)(iVar4 + 0x3b4);
    local_24 = *(undefined4 *)(iVar4 + 0xd88);
    local_2c = 4;
    local_28 = uVar6;
    uVar6 = FUN_000188e4(&local_38,&local_2c);
    if (uVar6 == 0) {
      iVar4 = *piVar2;
      local_38 = 8;
      local_34 = *(undefined4 *)(iVar4 + 0x73c);
      local_30 = *(undefined4 *)(iVar4 + 0x744);
      local_24 = *(undefined4 *)(iVar4 + 0x36f8);
      local_2c = 0x14;
      local_28 = uVar6;
      uVar6 = FUN_000188e4(&local_38,&local_2c);
      if (uVar6 == 0) {
        if (*(int *)(*piVar1 + 0x28) == 0) {
          RK_LOG(2,DAT_00015a54,DAT_00015a8c,DAT_00015a50,0x70e);
          p_Var3 = DAT_00015a90;
          iVar4 = *piVar1;
          __arg = (void *)*piVar2;
          *(undefined4 *)(iVar4 + 0x14) = 0;
          pthread_create((pthread_t *)(iVar4 + 0x68),(pthread_attr_t *)0x0,p_Var3,__arg);
        }
        p_Var3 = DAT_00015a94;
        iVar4 = *piVar1;
        iVar8 = *piVar2;
        *(undefined4 *)(iVar4 + 0x1c) = 0;
        pthread_create((pthread_t *)(iVar4 + 100),(pthread_attr_t *)0x0,p_Var3,
                       (void *)(iVar8 + 0x36f8));
        p_Var3 = DAT_00015a98;
        iVar4 = *piVar1;
        *(undefined4 *)(iVar4 + 0x20) = 0;
        pthread_create((pthread_t *)(iVar4 + 0x6c),(pthread_attr_t *)0x0,p_Var3,(void *)0x0);
        return 0;
      }
      uVar9 = 0x708;
      uVar7 = DAT_00015a88;
    }
    else {
      uVar9 = 0x6fa;
      uVar7 = DAT_00015a84;
    }
  }
  else {
    uVar9 = 0x6ed;
    uVar7 = DAT_00015a74;
  }
LAB_00015310:
  RK_LOG(2,DAT_00015a54,uVar7,DAT_00015a50,uVar9,uVar6);
  return uVar6;
}



/* ===== FUN_00015a9c @ 00015a9c size=868 ===== */

uint FUN_00015a9c(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  undefined4 local_24;
  
  uVar7 = DAT_00015e04;
  piVar1 = DAT_00015e00;
  iVar8 = 0;
  do {
    iVar3 = FUN_000191b4(*piVar1 + iVar8 * 0x4c0 + 0x14f0);
    if (iVar3 != 0) {
      RK_LOG(2,uVar7,DAT_00015e08,DAT_00015e0c,0x564,iVar3,
             *(undefined4 *)(*piVar1 + iVar8 * 0x4c0 + 0x1544));
    }
    piVar2 = DAT_00015e10;
    iVar8 = iVar8 + 1;
  } while (iVar8 != 7);
  iVar8 = *DAT_00015e10;
  *(undefined4 *)(iVar8 + 0x20) = 1;
  pthread_join(*(pthread_t *)(iVar8 + 0x6c),(void **)0x0);
  FUN_00018614(*piVar1 + 0x3a84);
  iVar8 = *piVar2;
  *(undefined4 *)(iVar8 + 0x1c) = 1;
  pthread_join(*(pthread_t *)(iVar8 + 100),(void **)0x0);
  uVar4 = RK_MPI_IVS_DestroyChn(*(undefined4 *)(*piVar1 + 0x36f8));
  if (uVar4 == 0) {
    if (*(int *)(*piVar2 + 0x28) == 0) {
      RK_LOG(2,DAT_00015e04,DAT_00015e1c,DAT_00015e18,0x73f);
      *(undefined4 *)(*piVar2 + 0xc) = 1;
      pthread_join(*(pthread_t *)(*piVar1 + 0x1240),(void **)0x0);
      FUN_00019954(*piVar1 + 0xfd0);
      iVar8 = *piVar2;
      *(undefined4 *)(iVar8 + 0x14) = 1;
      pthread_join(*(pthread_t *)(iVar8 + 0x68),(void **)0x0);
      FUN_0001836c(*piVar1 + 0x3630);
    }
    *(undefined4 *)(*piVar2 + 0x10) = 1;
    pthread_join(*(pthread_t *)(*piVar1 + 0x14d0),(void **)0x0);
    FUN_00019954(*piVar1 + 0x1260);
    *(undefined4 *)(*piVar2 + 4) = 1;
    pthread_join(*(pthread_t *)(*piVar1 + 0xd20),(void **)0x0);
    iVar8 = *piVar1;
    local_38 = 8;
    local_34 = *(undefined4 *)(iVar8 + 0x1c);
    local_2c = 4;
    local_30 = *(undefined4 *)(iVar8 + 0x24);
    local_24 = *(undefined4 *)(iVar8 + 0xaf8);
    local_28 = 0;
    uVar4 = FUN_0001892c(&local_38,&local_2c);
    if (uVar4 == 0) {
      FUN_00019954(*piVar1 + 0xab0);
      *(undefined4 *)(*piVar2 + 8) = 1;
      pthread_join(*(pthread_t *)(*piVar1 + 0xfb0),(void **)0x0);
      iVar8 = *piVar1;
      local_34 = *(undefined4 *)(iVar8 + 0x3ac);
      local_38 = 8;
      local_2c = 4;
      local_30 = *(undefined4 *)(iVar8 + 0x3b4);
      local_24 = *(undefined4 *)(iVar8 + 0xd88);
      local_28 = uVar4;
      uVar4 = FUN_0001892c(&local_38,&local_2c);
      if (uVar4 == 0) {
        FUN_00019954(*piVar1 + 0xd40);
        uVar5 = RK_MPI_VI_DisableChn
                          (*(undefined4 *)(*piVar1 + 0x20),*(undefined4 *)(*piVar1 + 0x24));
        uVar6 = RK_MPI_VI_DisableChn
                          (*(undefined4 *)(*piVar1 + 0x3b0),*(undefined4 *)(*piVar1 + 0x3b4));
        uVar4 = RK_MPI_VI_DisableChn
                          (*(undefined4 *)(*piVar1 + 0x740),*(undefined4 *)(*piVar1 + 0x744));
        uVar4 = uVar5 | uVar6 | uVar4;
        if (uVar4 == 0) {
          uVar4 = RK_MPI_VI_DisableDev(*(undefined4 *)(*piVar1 + 0x1c));
          if (uVar4 == 0) {
            if (*DAT_00015e28 != 0) {
              FUN_0001d4f0();
            }
            uVar4 = RK_MPI_SYS_Exit();
            if (uVar4 == 0) {
              uVar4 = FUN_0001b1d0(*(undefined4 *)(*piVar2 + 0x30));
              if (uVar4 == 0) {
                return 0;
              }
              uVar9 = 0x790;
              uVar7 = DAT_00015e30;
            }
            else {
              uVar9 = 0x78a;
              uVar7 = DAT_00015e2c;
            }
          }
          else {
            uVar9 = 0x782;
            uVar7 = DAT_00015e24;
          }
        }
        else {
          uVar9 = 0x77d;
          uVar7 = DAT_00015e24;
        }
      }
      else {
        uVar9 = 0x773;
        uVar7 = DAT_00015e20;
      }
    }
    else {
      uVar9 = 0x761;
      uVar7 = DAT_00015e20;
    }
  }
  else {
    uVar9 = 0x739;
    uVar7 = DAT_00015e14;
  }
  RK_LOG(2,DAT_00015e04,uVar7,DAT_00015e18,uVar9,uVar4);
  return uVar4;
}



/* ===== FUN_00015ee8 @ 00015ee8 size=820 ===== */

uint FUN_00015ee8(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  uint local_19c;
  undefined4 local_198;
  int local_194;
  undefined4 local_190;
  undefined1 auStack_128 [32];
  int local_108;
  int local_104;
  uint local_100;
  uint local_fc;
  undefined1 auStack_a0 [32];
  int local_80;
  int local_7c;
  uint local_78;
  uint local_74;
  
  uVar1 = FUN_00014338();
  if (uVar1 == 0) {
    local_1ac = 8;
    local_1a8 = *(undefined4 *)(param_3 + 0x1c);
    local_1a4 = *(undefined4 *)(param_3 + 0x24);
    local_1a0 = 4;
    local_198 = *(undefined4 *)(param_2 + 0x48);
    local_19c = uVar1;
    uVar1 = FUN_0001892c(&local_1ac,&local_1a0);
    if (uVar1 != 0) {
      uVar8 = *(undefined4 *)(param_2 + 0x48);
      uVar6 = *(undefined4 *)(param_3 + 0x24);
      uVar7 = *(undefined4 *)(param_3 + 0x1c);
      uVar9 = 0x2ac;
      uVar4 = DAT_00016228;
LAB_00015f9c:
      RK_LOG(2,DAT_00016224,uVar4,DAT_00016220,uVar9,uVar7,uVar6,uVar8);
      return uVar1;
    }
    memset(auStack_128,0,0x88);
    memset(auStack_a0,0,0x88);
    uVar2 = RK_MPI_VENC_GetChnAttr(*(undefined4 *)(param_2 + 0x48),auStack_128);
    uVar3 = RK_MPI_VENC_GetChnAttr(*param_4,auStack_a0);
    RK_LOG(5,DAT_00016224,DAT_0001622c,DAT_00016220,0x2b5,local_108,local_104);
    local_80 = *(int *)(param_2 + 0x14);
    if (local_108 == local_80) {
      local_80 = 0x2c0;
      local_7c = 0x240;
      local_78 = 0x2c0;
      local_74 = 0x240;
    }
    else {
      local_7c = *(int *)(param_2 + 0x18);
      local_78 = local_80 + 1U & 0xfffffffe;
      local_74 = local_7c + 1U & 0xfffffffe;
    }
    uVar4 = *(undefined4 *)(param_2 + 0x48);
    *(int *)(param_1 + 0x34) = local_80;
    *(int *)(param_1 + 0x30) = local_7c;
    local_108 = local_80;
    local_104 = local_7c;
    local_100 = local_78;
    local_fc = local_74;
    uVar5 = RK_MPI_VENC_SetChnAttr(uVar4,auStack_128);
    uVar1 = RK_MPI_VENC_SetChnAttr(*param_4,auStack_a0);
    uVar1 = uVar2 | uVar3 | uVar5 | uVar1;
    if (uVar1 == 0) {
      memset(&local_194,0,0x6c);
      uVar1 = RK_MPI_VI_GetChnAttr
                        (*(undefined4 *)(param_3 + 0x20),*(undefined4 *)(param_3 + 0x24),&local_194)
      ;
      RK_LOG(5,DAT_00016224,DAT_0001622c,DAT_00016220,0x2d6,local_194,local_190);
      if (local_194 == *(int *)(param_3 + 0x10)) {
        local_194 = 0x2c0;
        local_190 = 0x240;
      }
      else {
        local_190 = *(undefined4 *)(param_3 + 0x14);
        local_194 = *(int *)(param_3 + 0x10);
      }
      uVar2 = RK_MPI_VI_SetChnAttr
                        (*(undefined4 *)(param_3 + 0x20),*(undefined4 *)(param_3 + 0x24),&local_194)
      ;
      uVar1 = uVar1 | uVar2;
      if (uVar1 == 0) {
        local_1ac = 8;
        local_1a8 = *(undefined4 *)(param_3 + 0x1c);
        local_1a4 = *(undefined4 *)(param_3 + 0x24);
        local_1a0 = 4;
        local_198 = *(undefined4 *)(param_2 + 0x48);
        local_19c = uVar1;
        uVar1 = FUN_000188e4(&local_1ac,&local_1a0);
        if (uVar1 != 0) {
          uVar8 = *(undefined4 *)(param_2 + 0x48);
          uVar6 = *(undefined4 *)(param_3 + 0x24);
          uVar7 = *(undefined4 *)(param_3 + 0x1c);
          uVar9 = 0x2ef;
          uVar4 = DAT_00016238;
          goto LAB_00015f9c;
        }
        uVar1 = FUN_000143d0();
        if (uVar1 == 0) {
          RK_LOG(2,DAT_00016224,DAT_00016240,DAT_00016220,0x2fa,local_194,local_190);
          return 0;
        }
        uVar8 = 0x2f5;
        uVar4 = DAT_0001623c;
      }
      else {
        uVar8 = 0x2e1;
        uVar4 = DAT_00016234;
      }
    }
    else {
      uVar8 = 0x2d0;
      uVar4 = DAT_00016230;
    }
  }
  else {
    uVar8 = 0x29e;
    uVar4 = DAT_0001621c;
  }
  RK_LOG(2,DAT_00016224,uVar4,DAT_00016220,uVar8);
  return uVar1;
}



/* ===== FUN_00016244 @ 00016244 size=468 ===== */

int FUN_00016244(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                int param_5,int param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  
  iVar1 = FUN_00014338();
  if (iVar1 != 0) {
    uVar5 = 0x30a;
    uVar4 = DAT_00016418;
LAB_00016280:
    RK_LOG(2,DAT_00016420,uVar4,DAT_0001641c,uVar5);
    return iVar1;
  }
  *param_4 = 1;
  if (*(int *)(param_5 + 0x274) != 0) {
    pthread_join(*(pthread_t *)(param_5 + 0x270),(void **)0x0);
  }
  local_3c = *(undefined4 *)(param_6 + 0x1c);
  local_40 = 8;
  local_38 = *(undefined4 *)(param_6 + 0x24);
  local_34 = 4;
  local_30 = 0;
  local_2c = *(undefined4 *)(param_5 + 0x48);
  iVar1 = FUN_0001892c(&local_40,&local_34);
  if (iVar1 == 0) {
    iVar1 = FUN_00019954(param_5);
    if (iVar1 == 0) {
      *(undefined4 *)(param_5 + 0x40) = param_1;
      *(undefined4 *)(param_5 + 0x44) = param_2;
      *(undefined4 *)(param_5 + 100) = param_3;
      *param_4 = 0;
      iVar1 = FUN_00019244(param_5);
      if (iVar1 == 0) {
        local_3c = *(undefined4 *)(param_6 + 0x1c);
        local_40 = 8;
        local_38 = *(undefined4 *)(param_6 + 0x24);
        local_34 = 4;
        local_2c = *(undefined4 *)(param_5 + 0x48);
        local_30 = iVar1;
        iVar1 = FUN_000188e4(&local_40,&local_34);
        if (iVar1 == 0) {
          iVar1 = FUN_000143d0();
          if (iVar1 == 0) {
            return 0;
          }
          uVar5 = 0x344;
          uVar4 = DAT_00016430;
          goto LAB_00016280;
        }
        uVar5 = *(undefined4 *)(param_5 + 0x48);
        uVar2 = *(undefined4 *)(param_6 + 0x24);
        uVar3 = *(undefined4 *)(param_6 + 0x1c);
        uVar6 = 0x33d;
        uVar4 = DAT_0001642c;
        goto LAB_0001631c;
      }
      uVar4 = 0x32f;
    }
    else {
      uVar4 = 0x323;
    }
    RK_LOG(2,DAT_00016420,DAT_00016428,DAT_0001641c,uVar4,iVar1);
  }
  else {
    uVar5 = *(undefined4 *)(param_5 + 0x48);
    uVar2 = *(undefined4 *)(param_6 + 0x24);
    uVar3 = *(undefined4 *)(param_6 + 0x1c);
    uVar6 = 0x31d;
    uVar4 = DAT_00016424;
LAB_0001631c:
    RK_LOG(2,DAT_00016420,uVar4,DAT_0001641c,uVar6,uVar3,uVar2,uVar5);
  }
  return iVar1;
}



/* ===== FUN_00016434 @ 00016434 size=4408 ===== */

undefined4 FUN_00016434(void)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  
  uVar5 = 0;
  prctl(0xf,DAT_00017408);
  uVar2 = DAT_00017410;
  piVar1 = DAT_0001740c;
  FUN_000147f4();
  FUN_00018ac8(DAT_00017414,*(undefined4 *)(*piVar1 + 0x34));
  do {
    if (*(int *)(*piVar1 + 0x18) != 0) goto LAB_00016678;
    uVar3 = *(int *)(*piVar1 + 0x34) - 1;
                    /* WARNING: Could not recover jumptable at 0x000164a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    if (uVar3 < 0xe) {
      uVar2 = (*(code *)(&switchD_000164a0::switchdataD_000164a8)[uVar3])();
      return uVar2;
    }
    RK_LOG(2,uVar2,DAT_00017570,DAT_00017574,0x85c);
    FUN_000147f4();
    uVar5 = uVar5 + 1;
    uVar4 = *(undefined4 *)(*piVar1 + 0x38);
    uVar3 = uVar5;
    RK_LOG(2,uVar2,DAT_00017430,DAT_00017558,0x862,0,uVar4,uVar5);
  } while (*(uint *)(*piVar1 + 0x38) == 0 || uVar5 < *(uint *)(*piVar1 + 0x38));
  RK_LOG(2,DAT_00017410,DAT_00017434,DAT_00017558,0x865,0,uVar4,uVar3);
  uVar2 = DAT_00017424;
  *(undefined4 *)(*piVar1 + 0x24) = 0;
  FUN_000141ec(uVar2,0x867);
LAB_00016678:
  FUN_00018ac8(DAT_00017438,*(undefined4 *)(*piVar1 + 0x34));
  RK_LOG(2,DAT_00017410,DAT_0001743c,DAT_00017558,0x86c);
  return 0;
}



/* ===== FUN_00017724 @ 00017724 size=120 ===== */

void FUN_00017724(undefined4 param_1,int param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_0001779c;
  if (param_2 == 0) {
    param_3 = 0;
  }
  else {
    param_3 = param_3 & 1;
  }
  if (param_3 != 0) {
    FUN_00018310(*DAT_0001779c + 0x3630);
  }
  iVar2 = *piVar1;
  RK_MPI_VI_ReleaseChnFrame
            (*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x24),iVar2 + 0x318);
  if (((int *)*DAT_000177a0)[0xd] != 0xe) {
    if (*(int *)*DAT_000177a0 == 0) {
      FUN_00014190(DAT_000177a4,param_1);
      return;
    }
    FUN_000141ec();
    return;
  }
  return;
}



/* ===== FUN_000177a8 @ 000177a8 size=624 ===== */

undefined4 FUN_000177a8(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  
  prctl(0xf,DAT_00017a18,param_3,param_4,param_1,param_2,param_3,param_4);
  RK_LOG(2,DAT_00017a20,DAT_00017a1c,DAT_00017a24,0xd2);
  piVar3 = DAT_00017a2c;
  piVar2 = DAT_00017a28;
  uVar1 = DAT_00017a20;
LAB_000177e0:
  while( true ) {
    while( true ) {
      iVar4 = *piVar2;
      if (*(int *)(*piVar3 + 0x14) != 0) {
        RK_LOG(2,DAT_00017a20,DAT_00017a30,DAT_00017a24,0x109,*(undefined4 *)(iVar4 + 0x24),param_3,
               param_4);
        return 0;
      }
      iVar4 = RK_MPI_VI_GetChnFrame
                        (*(undefined4 *)(iVar4 + 0x20),*(undefined4 *)(iVar4 + 0x24),iVar4 + 0x318,
                         2000);
      if (iVar4 == 0) break;
      param_4 = *(undefined4 *)(*piVar2 + 0x24);
      param_3 = *(undefined4 *)(*piVar2 + 0x20);
      RK_LOG(2,uVar1,DAT_00017a4c,DAT_00017a24,0x106,iVar4,param_3,param_4);
      param_2 = iVar4;
    }
    iVar4 = FUN_000182a4(*piVar2 + 0x3630);
    if (iVar4 == 0) break;
    RK_LOG(2,uVar1,DAT_00017a34,DAT_00017a24,0xdb,param_2,param_3,param_4);
    uVar5 = 0xdc;
    uVar6 = 0;
    uVar7 = 0;
    iVar4 = param_2;
LAB_0001787c:
    FUN_00017724(uVar5,uVar6,uVar7);
    param_2 = iVar4;
  }
  iVar4 = FUN_00018144(*piVar2 + 0x3630,*piVar2 + 0x318);
  if (iVar4 != 0) {
    RK_LOG(2,uVar1,DAT_00017a38,DAT_00017a24,0xe2,iVar4);
    uVar7 = 1;
    uVar5 = 0xe4;
    uVar6 = *(undefined4 *)(*piVar2 + 0x36a8);
    goto LAB_0001787c;
  }
  iVar4 = RK_MPI_VENC_SendFrame(*(undefined4 *)(*piVar2 + 0x1018),*piVar2 + 0x36a8,2000);
  if (iVar4 != 0) {
    param_3 = *(undefined4 *)(*piVar2 + 0x1018);
    RK_LOG(2,uVar1,DAT_00017a3c,DAT_00017a24,0xec,iVar4,param_3);
    uVar7 = 1;
    uVar5 = 0xee;
    uVar6 = *(undefined4 *)(*piVar2 + 0x36a8);
    goto LAB_0001787c;
  }
  iVar4 = FUN_00018310(*piVar2 + 0x3630);
  if (iVar4 == 0) goto LAB_00017990;
  RK_LOG(2,uVar1,DAT_00017a40,DAT_00017a24,0xf4,iVar4);
  iVar8 = *piVar2;
  RK_MPI_VI_ReleaseChnFrame
            (*(undefined4 *)(iVar8 + 0x20),*(undefined4 *)(iVar8 + 0x24),iVar8 + 0x318);
  uVar6 = 0xf7;
  goto LAB_00017984;
LAB_00017990:
  iVar4 = *piVar2;
  iVar4 = RK_MPI_VI_ReleaseChnFrame
                    (*(undefined4 *)(iVar4 + 0x20),*(undefined4 *)(iVar4 + 0x24),iVar4 + 0x318);
  if (iVar4 != 0) {
    param_4 = *(undefined4 *)(*piVar2 + 0x24);
    param_3 = *(undefined4 *)(*piVar2 + 0x20);
    RK_LOG(2,uVar1,DAT_00017a48,DAT_00017a24,0xff,iVar4,param_3,param_4);
    uVar6 = 0x100;
LAB_00017984:
    FUN_00014190(DAT_00017a44,uVar6);
    param_2 = iVar4;
  }
  goto LAB_000177e0;
}



/* ===== FUN_00017a50 @ 00017a50 size=764 ===== */

int FUN_00017a50(int *param_1)

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
  if (iVar1 == DAT_00017d4c) {
    iVar1 = RK_MPI_VI_SetDevAttr(param_1[7],param_1 + 0x10);
    if (iVar1 == 0) goto LAB_00017ac8;
    uVar7 = 0x29;
    uVar5 = DAT_00017d50;
  }
  else {
    RK_LOG(2,DAT_00017d58,DAT_00017d5c,DAT_00017d54,0x2d);
LAB_00017ac8:
    iVar1 = RK_MPI_VI_GetDevIsEnable(param_1[7]);
    if (iVar1 == 0) {
      RK_LOG(2,DAT_00017d58,DAT_00017d6c,DAT_00017d54,0x42);
LAB_00017b84:
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
            uVar5 = DAT_00017d74;
LAB_00017c04:
            RK_LOG(2,DAT_00017d58,uVar5,DAT_00017d54,uVar7,uVar6);
            return -1;
          }
          local_1c = 1;
          local_14 = param_1[4] * uVar4 * 3 >> 1;
          uStack_18 = uVar4;
          uVar6 = RK_MPI_VI_SetChnWrapBufAttr(param_1[8],param_1[9],&local_1c);
          if (uVar6 != 0) {
            uVar7 = 0x59;
            uVar5 = DAT_00017d78;
            goto LAB_00017c04;
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
            uVar5 = DAT_00017d84;
            goto LAB_00017d44;
          }
          uVar7 = 0x6d;
          uVar5 = DAT_00017d80;
          goto LAB_00017b38;
        }
        RK_LOG(2,DAT_00017d58,DAT_00017d7c,DAT_00017d54,0x66,iVar1,param_1[8],param_1[9]);
      }
      else {
        uVar7 = 0x4a;
        uVar5 = DAT_00017d70;
LAB_00017b38:
        RK_LOG(2,DAT_00017d58,uVar5,DAT_00017d54,uVar7,iVar1);
      }
      iVar1 = RK_MPI_VI_DisableDev(param_1[7]);
      uVar7 = 0x7d;
      uVar5 = DAT_00017d68;
    }
    else {
      iVar1 = RK_MPI_VI_EnableDev(param_1[7]);
      if (iVar1 == 0) {
        param_1[0x17] = 1;
        param_1[0x18] = param_1[8];
        iVar1 = RK_MPI_VI_SetDevBindPipe(param_1[7],param_1 + 0x17);
        if (iVar1 == 0) goto LAB_00017b84;
        uVar7 = 0x3e;
        uVar5 = DAT_00017d64;
        goto LAB_00017b38;
      }
      uVar7 = 0x36;
      uVar5 = DAT_00017d60;
    }
  }
  uVar2 = 2;
  iVar3 = iVar1;
LAB_00017d44:
  RK_LOG(uVar2,DAT_00017d58,uVar5,DAT_00017d54,uVar7,iVar3);
  return iVar1;
}



/* ===== FUN_00017d88 @ 00017d88 size=236 ===== */

undefined4 FUN_00017d88(int param_1,undefined4 *param_2)

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
    RK_LOG(5,DAT_00017e78,DAT_00017e74,DAT_00017e7c,0x92,*(undefined4 *)(param_1 + 0x1c),
           *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),uVar2,
           *(undefined4 *)(param_1 + 0x380),*(undefined4 *)(param_1 + 900),
           *(undefined4 *)(param_1 + 0x368),*(undefined4 *)(param_1 + 0x374),
           *(undefined4 *)(param_1 + 0x378),*(undefined4 *)(param_1 + 0x36c),
           *(undefined4 *)(param_1 + 0x37c));
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
    RK_LOG(2,DAT_00017e78,DAT_00017e80,DAT_00017e7c,0x94,*(undefined4 *)(param_1 + 0x1c),iVar1);
  }
  return uVar2;
}



/* ===== FUN_00017e84 @ 00017e84 size=68 ===== */

undefined4 FUN_00017e84(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = RK_MPI_VI_ReleaseChnFrame
                    (*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),param_1 + 0x318
                     ,param_4,param_1,param_2,param_3);
  if (iVar1 != 0) {
    RK_LOG(2,DAT_00017ed0,DAT_00017ecc,DAT_00017ec8,0xa0,iVar1);
  }
  return 0;
}



/* ===== FUN_00017ed4 @ 00017ed4 size=104 ===== */

uint FUN_00017ed4(int param_1,undefined4 param_2,undefined4 param_3)

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
    RK_LOG(2,DAT_00017f44,DAT_00017f40,DAT_00017f3c,0xaf,uVar1);
  }
  return uVar1;
}



/* ===== FUN_00017f48 @ 00017f48 size=480 ===== */

int FUN_00017f48(int param_1)

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
  RK_LOG(5,DAT_0001812c,DAT_00018128,DAT_00018130,0x2d,local_5c);
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
    RK_LOG(2,DAT_0001812c,DAT_00018138,DAT_00018130,0x3c,local_5c);
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
      RK_LOG(2,DAT_0001812c,DAT_0001813c,DAT_00018130,0x46,uVar5);
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
    uVar3 = DAT_00018140;
  }
  else {
    uVar5 = 0x2f;
    uVar3 = DAT_00018134;
  }
  RK_LOG(2,DAT_0001812c,uVar3,DAT_00018130,uVar5,iVar1);
  return iVar1;
}



/* ===== FUN_00018144 @ 00018144 size=324 ===== */

int FUN_00018144(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined4 uVar5;
  
  iVar1 = RK_TDE_BeginJob();
  bVar4 = iVar1 == DAT_00018288;
  param_1[9] = iVar1;
  if (bVar4) {
    iVar1 = -1;
    RK_LOG(2,DAT_00018290,DAT_0001828c,DAT_00018294,0x6a,*param_1);
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
        RK_LOG(2,DAT_00018290,DAT_000182a0,DAT_00018294,0x84,iVar1,*param_1);
        return iVar1;
      }
      uVar3 = *param_1;
      uVar5 = 0x7d;
      uVar2 = DAT_0001829c;
    }
    else {
      uVar3 = *param_1;
      uVar5 = 0x77;
      uVar2 = DAT_00018298;
    }
    RK_LOG(2,DAT_00018290,uVar2,DAT_00018294,uVar5,iVar1,uVar3);
    RK_TDE_CancelJob(param_1[9]);
  }
  return iVar1;
}



/* ===== FUN_000182a4 @ 000182a4 size=96 ===== */

undefined4 FUN_000182a4(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = RK_MPI_MB_GetMB(param_1[0x1c],param_2,param_1[7],0,1,param_2);
  param_1[0x1e] = iVar1;
  if (iVar1 == 0) {
    RK_LOG(2,DAT_00018308,DAT_00018304,DAT_0001830c,0x91,*param_1);
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== FUN_00018310 @ 00018310 size=80 ===== */

int FUN_00018310(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = RK_MPI_MB_ReleaseMB(param_1[0x1e]);
  if (iVar1 != 0) {
    RK_LOG(2,DAT_00018364,DAT_00018360,DAT_00018368,0x9c,*param_1,iVar1);
  }
  return iVar1;
}



/* ===== FUN_0001836c @ 0001836c size=88 ===== */

int FUN_0001836c(int param_1)

{
  int iVar1;
  
  iVar1 = RK_MPI_MB_DestroyPool(*(undefined4 *)(param_1 + 0x70));
  if (iVar1 == 0) {
    RK_TDE_Close();
  }
  else {
    RK_LOG(2,DAT_000183c8,DAT_000183c4,DAT_000183cc,0xaa,iVar1,*(undefined4 *)(param_1 + 0x70));
  }
  return iVar1;
}



/* ===== FUN_000183d0 @ 000183d0 size=556 ===== */

int FUN_000183d0(undefined4 *param_1)

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
  uVar1 = DAT_00018608;
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
    uVar2 = FUN_00029b90(iVar5 * 10000,uVar9);
    *(undefined2 *)(param_1 + 0x99f) = uVar2;
    iVar7 = param_1[4];
    uVar3 = FUN_00029b90(iVar7 * 10000,uVar8);
    *(undefined2 *)((int)param_1 + 0x267e) = uVar3;
    uVar4 = FUN_00029b90((iVar5 + param_1[5]) * 10000,uVar9);
    *(undefined2 *)(param_1 + 0x9a0) = uVar4;
    *(undefined2 *)((int)param_1 + 0x2682) = uVar3;
    *(undefined2 *)(param_1 + 0x9a1) = uVar4;
    uVar3 = FUN_00029b90((iVar7 + param_1[6]) * 10000,uVar8);
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
      uVar6 = DAT_00018610;
    }
    else {
      uVar10 = 0x5d;
      uVar6 = DAT_0001860c;
    }
  }
  else {
    uVar10 = 0x30;
    uVar6 = DAT_000185fc;
  }
  RK_LOG(2,DAT_00018604,uVar6,DAT_00018600,uVar10,iVar5);
  return iVar5;
}



/* ===== FUN_00018614 @ 00018614 size=108 ===== */

int FUN_00018614(int param_1,undefined4 param_2,undefined4 param_3)

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
    uVar2 = DAT_0001868c;
  }
  else {
    uVar3 = 0x6e;
    uVar2 = DAT_00018680;
  }
  RK_LOG(2,DAT_00018688,uVar2,DAT_00018684,uVar3,iVar1,param_3);
  return iVar1;
}



/* ===== FUN_00018690 @ 00018690 size=68 ===== */

int FUN_00018690(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = RK_MPI_IVS_CreateChn(*param_1,param_1 + 1,param_3,param_4,param_1,param_2);
  if (iVar1 != 0) {
    RK_LOG(2,DAT_000186dc,DAT_000186d8,DAT_000186d4,0x24,iVar1);
  }
  return iVar1;
}



/* ===== FUN_000186e0 @ 000186e0 size=60 ===== */

int FUN_000186e0(void)

{
  int iVar1;
  
  iVar1 = RK_MPI_IVS_DestroyChn();
  if (iVar1 != 0) {
    RK_LOG(2,DAT_00018724,DAT_00018720,DAT_0001871c,0x2e,iVar1);
  }
  return iVar1;
}



/* ===== FUN_000188e4 @ 000188e4 size=60 ===== */

int FUN_000188e4(void)

{
  int iVar1;
  
  iVar1 = RK_MPI_SYS_Bind();
  if (iVar1 != 0) {
    RK_LOG(2,DAT_00018928,DAT_00018924,DAT_00018920,0x4d,iVar1);
  }
  return iVar1;
}



/* ===== FUN_0001892c @ 0001892c size=60 ===== */

int FUN_0001892c(void)

{
  int iVar1;
  
  iVar1 = RK_MPI_SYS_UnBind();
  if (iVar1 != 0) {
    RK_LOG(2,DAT_00018970,DAT_0001896c,DAT_00018968,0x59,iVar1);
  }
  return iVar1;
}



/* ===== FUN_00018974 @ 00018974 size=312 ===== */

undefined4 FUN_00018974(char *param_1,undefined4 *param_2,undefined4 *param_3)

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
    RK_LOG(2,DAT_00018ab4,DAT_00018aac,DAT_00018ab0,0x69);
  }
  else {
    __stream = fopen64(param_1,DAT_00018ab8);
    if (__stream == (FILE *)0x0) {
      RK_LOG(2,DAT_00018ab4,DAT_00018abc,DAT_00018ab0,0x6f,param_1);
    }
    else {
      fread(&local_46,1,2,__stream);
      if (local_46 == 0x4d42) {
        fseek(__stream,0xc,1);
        fread(auStack_44,1,0x2c,__stream);
        uVar2 = DAT_00018ac4;
        uVar1 = DAT_00018ab4;
        *param_2 = local_40;
        *param_3 = local_3c;
        RK_LOG(2,uVar1,uVar2,DAT_00018ab0,0x7e,*param_2,local_3c);
        fclose(__stream);
        return 0;
      }
      RK_LOG(2,DAT_00018ab4,DAT_00018ac0,DAT_00018ab0,0x75);
      fclose(__stream);
    }
  }
  return 0xffffffff;
}



/* ===== FUN_00018ac8 @ 00018ac8 size=72 ===== */

undefined4 FUN_00018ac8(undefined4 param_1,undefined4 param_2)

{
  char acStack_110 [260];
  
  system(DAT_00018b10);
  sprintf(acStack_110,DAT_00018b14,param_1,param_2);
  system(acStack_110);
  system(DAT_00018b18);
  return 0;
}



/* ===== FUN_00018b1c @ 00018b1c size=288 ===== */

undefined4 FUN_00018b1c(char *param_1,char *param_2,size_t param_3,undefined4 *param_4)

{
  FILE *__stream;
  FILE *__stream_00;
  size_t sVar1;
  uint unaff_r4;
  
  __stream = fopen64(param_1,DAT_00018c3c);
  __stream_00 = fopen64(param_2,DAT_00018c3c);
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
    RK_LOG(2,DAT_00018c48,DAT_00018c4c,DAT_00018c40,0xa0,param_1,param_2);
  }
  else {
    RK_LOG(2,DAT_00018c48,DAT_00018c44,DAT_00018c40,0x9a,param_1,param_2,__stream,__stream_00);
    if (__stream == (FILE *)0x0) goto LAB_00018ba8;
  }
  fclose(__stream);
LAB_00018ba8:
  if (__stream_00 != (FILE *)0x0) {
    fclose(__stream_00);
  }
  return 0xffffffff;
}



/* ===== FUN_00018c50 @ 00018c50 size=1276 ===== */

undefined4 FUN_00018c50(undefined4 *param_1)

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
LAB_00018ecc:
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
      goto LAB_00018ecc;
    }
    if (iVar10 != 0) {
      uVar5 = 0x91;
      uVar6 = DAT_000191b0;
      goto LAB_00018e6c;
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
    iVar10 = FUN_0001b854(*param_1,auStack_60,auStack_44);
    if (iVar10 < 0) {
      RK_LOG(2,DAT_00019184,DAT_0001917c,DAT_00019180,0x26);
    }
    switch(param_1[1]) {
    case 0x1000a:
      local_54[0] = 4;
      break;
    default:
      goto switchD_00018d14_caseD_1000b;
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
LAB_00018e40:
        RK_LOG(2,DAT_00019184,DAT_00019190,DAT_00019180,uVar6);
switchD_00018d14_caseD_1000b:
        uVar5 = 0x75;
        iVar10 = -1;
        uVar6 = DAT_00019194;
        goto LAB_00018e6c;
      }
      FUN_0001a1f0(pvVar1,iVar12,iVar10,iVar12,iVar10,param_1[1],0);
      param_1[5] = param_1[0x11];
      uVar7 = param_1[0x12];
    }
    else {
      pvVar1 = malloc(local_3c * local_40 * 4);
      param_1[8] = pvVar1;
      if (pvVar1 == (void *)0x0) {
        uVar6 = 0x51;
        goto LAB_00018e40;
      }
      FUN_0001bd8c(*param_1,local_54,pvVar1);
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
    uVar6 = DAT_00019188;
    goto LAB_00018df0;
  }
  puVar11 = param_1 + 0xc;
  puVar13 = param_1 + 0x11c;
  iVar10 = RK_MPI_RGN_AttachToChn(param_1[0x15],puVar11,puVar13);
  if (iVar10 != 0) {
    uVar5 = param_1[0x15];
    uVar15 = 0x9d;
    uVar6 = DAT_00019198;
    goto LAB_00018df0;
  }
  if (param_1[0x16] == 0) {
    iVar10 = RK_MPI_RGN_SetBitMap(param_1[0x15],param_1 + 4);
    if (iVar10 != 0) {
      RK_LOG(2,DAT_00019184,DAT_0001919c,DAT_0001918c,0xa6,iVar10);
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
    uVar6 = DAT_000191a0;
    goto LAB_00018df0;
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
    uVar6 = DAT_00019184;
    uVar15 = DAT_000191ac;
    uVar5 = DAT_0001918c;
LAB_00019084:
    RK_LOG(2,uVar6,uVar15,uVar5,uVar16,uVar9,uVar8,uVar4,uVar3,uVar2,uVar14);
  }
  else {
    if (iVar10 != 3) {
      if (iVar10 != 0) {
        uVar5 = 0xee;
        uVar6 = DAT_000191b0;
LAB_00018e6c:
        RK_LOG(2,DAT_00019184,uVar6,DAT_0001918c,uVar5,iVar10);
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
      uVar15 = DAT_000191a4;
      uVar5 = DAT_0001918c;
      uVar6 = DAT_00019184;
      uVar16 = 0xd0;
      param_1[0x120] = uVar2;
      param_1[0x122] = uVar14;
      goto LAB_00019084;
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
  uVar6 = DAT_000191a8;
LAB_00018df0:
  RK_LOG(2,DAT_00019184,uVar6,DAT_0001918c,uVar15,uVar5,iVar10);
  return 0xffffffff;
}



/* ===== FUN_000191b4 @ 000191b4 size=128 ===== */

undefined4 FUN_000191b4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
    uVar2 = DAT_00019240;
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x54);
    uVar4 = 0x102;
    uVar2 = DAT_00019234;
  }
  RK_LOG(2,DAT_0001923c,uVar2,DAT_00019238,uVar4,uVar3,iVar1);
  return 0xffffffff;
}



/* ===== FUN_00019244 @ 00019244 size=1268 ===== */

int FUN_00019244(int *param_1)

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
    RK_LOG(2,DAT_00019738,DAT_00019748,DAT_00019740,0x54);
    param_1[0x27] = 5;
    param_1[0x13] = 0xf;
    param_1[0x20] = 0;
    *(undefined1 *)(param_1 + 0x21) = 0;
    param_1[0x26] = 0;
    goto LAB_00019304;
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
    goto LAB_00019304;
  }
  if (iVar3 == 6) {
    param_1[0x13] = 0xc;
    if (iVar5 != 8) {
      bVar7 = iVar5 == 9;
      goto LAB_000192b0;
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
      goto LAB_00019304;
    }
    bVar7 = iVar5 == 2;
LAB_000192b0:
    if (!bVar7) goto LAB_00019304;
  }
  param_1[0x27] = iVar5;
  param_1[0x2c] = 1;
  param_1[0x28] = param_1[8];
  param_1[0x2d] = param_1[9];
  param_1[0x2a] = 1;
  param_1[0x2b] = param_1[7];
  param_1[0x29] = param_1[7];
LAB_00019304:
  uVar4 = DAT_00019738;
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
  uVar8 = DAT_0001973c;
  if (iVar5 == 0) {
    iVar5 = 3;
  }
  param_1[0x1f] = iVar5;
  RK_LOG(2,uVar4,uVar8,DAT_00019740,0x81,param_1[0x12],iVar5);
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
        printf(DAT_0001974c);
      }
    }
    if (param_1[2] != 0) {
      local_110 = param_1[4];
      local_10c = 0;
      local_114 = 1;
      local_118 = 1;
      iVar3 = RK_MPI_VENC_SetChnBufWrapAttr(param_1[0x12],&local_114);
      if (iVar3 != 0) {
        RK_LOG(2,DAT_00019738,DAT_00019750,DAT_00019740,0xa1,iVar3,iVar5);
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
                RK_LOG(2,DAT_00019738,DAT_00019760,DAT_00019740,0xdc,iVar3);
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
          uVar4 = DAT_0001975c;
          iVar9 = param_1[0x12];
        }
        else {
          uVar8 = 0xca;
          uVar4 = DAT_00019758;
          iVar9 = iVar3;
        }
      }
      else {
        uVar8 = 0xc1;
        uVar4 = DAT_00019758;
        iVar9 = iVar3;
      }
    }
    else {
      uVar8 = 0xb9;
      uVar4 = DAT_00019754;
      iVar9 = iVar3;
    }
  }
  else {
    uVar8 = 0x8a;
    uVar4 = DAT_00019744;
    iVar9 = iVar3;
  }
  RK_LOG(2,DAT_00019738,uVar4,DAT_00019740,uVar8,iVar9,iVar5);
  return iVar3;
}



/* ===== FUN_00019764 @ 00019764 size=264 ===== */

undefined4
FUN_00019764(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
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
  
  uVar2 = DAT_00019870;
  uVar1 = DAT_0001986c;
  while( true ) {
    uVar6 = 1;
    iVar4 = RK_MPI_MB_GetMB(*(undefined4 *)(param_1 + 0x278));
    if (iVar4 != 0) break;
    RK_LOG(2,uVar2,DAT_00019874,uVar1,0x105,0);
    usleep(2000);
  }
  RK_MPI_MB_Handle2VirAddr();
  uVar3 = DAT_00019878;
  RK_MPI_SYS_MmzFlushCache(iVar4,0);
  uVar2 = DAT_00019870;
  uVar1 = DAT_0001986c;
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



/* ===== FUN_0001987c @ 0001987c size=124 ===== */

undefined4 FUN_0001987c(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar2 = DAT_00019900;
  uVar1 = DAT_000198fc;
  uVar4 = DAT_000198f8;
  while (iVar3 = RK_MPI_VENC_GetStream(*(undefined4 *)(param_1 + 0x48),param_1 + 0xe0,2000),
        iVar3 != 0) {
    RK_LOG(2,uVar2,uVar1,uVar4,0x12f,*(undefined4 *)(param_1 + 0x48),iVar3);
  }
  uVar4 = RK_MPI_MB_Handle2VirAddr(**(undefined4 **)(param_1 + 0xe0));
  *param_2 = uVar4;
  return 0;
}



/* ===== FUN_00019904 @ 00019904 size=68 ===== */

int FUN_00019904(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = RK_MPI_VENC_ReleaseStream
                    (*(undefined4 *)(param_1 + 0x48),param_1 + 0xe0,param_3,param_4,param_1,param_2)
  ;
  if (iVar1 != 0) {
    RK_LOG(2,DAT_00019950,DAT_0001994c,DAT_00019948,0x13a,iVar1);
  }
  return iVar1;
}



/* ===== FUN_00019954 @ 00019954 size=136 ===== */

int FUN_00019954(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = RK_MPI_VENC_StopRecvFrame(*(undefined4 *)(param_1 + 0x48));
  if (iVar1 == 0) {
    RK_LOG(2,DAT_000199e0,DAT_000199dc,DAT_000199e4,0x147,*(undefined4 *)(param_1 + 0x48),param_3);
    iVar2 = RK_MPI_VENC_DestroyChn(*(undefined4 *)(param_1 + 0x48));
    if (iVar2 != 0) {
      RK_LOG(2,DAT_000199e0,DAT_000199e8,DAT_000199e4,0x14a,iVar2,param_3);
    }
    if (*(void **)(param_1 + 0xe0) != (void *)0x0) {
      free(*(void **)(param_1 + 0xe0));
    }
  }
  return iVar1;
}



/* ===== FUN_000199ec @ 000199ec size=192 ===== */

void FUN_000199ec(int *param_1,int *param_2,int *param_3,int param_4,int param_5,byte param_6)

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



/* ===== FUN_0001a0d8 @ 0001a0d8 size=128 ===== */

uint FUN_0001a0d8(uint param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  
  if (param_1 != 0) {
    return param_1;
  }
  bVar1 = param_4 * param_2 - param_3 != 0 && param_3 <= param_4 * param_2;
  if (bVar1) {
    RK_LOG(3,DAT_0001a160,DAT_0001a158,DAT_0001a15c,0x1b7,param_3,param_2,param_4);
    RK_LOG(3,DAT_0001a160,DAT_0001a164,DAT_0001a15c,0x1b9,param_3,param_4,param_3 * param_4);
  }
  return (uint)bVar1;
}



/* ===== FUN_0001a168 @ 0001a168 size=120 ===== */

int FUN_0001a168(int param_1,uint param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  
  if ((param_1 == 0) && (uVar1 = (param_2 + param_3 * 8) - 1 & param_3 * -8, param_2 != uVar1)) {
    RK_LOG(3,DAT_0001a1e4,DAT_0001a1e0,DAT_0001a1e8,0x1c6,param_4,param_3,param_4);
    RK_LOG(3,DAT_0001a1e4,DAT_0001a1ec,DAT_0001a1e8,0x1c8,uVar1);
    param_1 = 1;
  }
  return param_1;
}



/* ===== FUN_0001a1f0 @ 0001a1f0 size=2632 ===== */

undefined4
FUN_0001a1f0(char *param_1,uint param_2,uint param_3,uint param_4,int param_5,uint param_6,
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
  
  puVar3 = DAT_0001ac4c;
  uVar4 = param_5 * param_4;
  if (DAT_0001ac38 < param_6) {
    if (DAT_0001ac48 < param_6) {
      if (DAT_0001ac5c <= param_6) {
        if (param_6 <= DAT_0001ac5c + 3) goto LAB_0001a3b0;
        if (param_6 <= DAT_0001ac5c + 6) goto LAB_0001a448;
      }
      goto LAB_0001a254;
    }
    if (param_6 < DAT_0001ac48 - 3) {
      if (param_6 <= DAT_0001ac48 - 6) {
        uVar4 = 0;
        pcVar9 = *(code **)(DAT_0001ac50 + (param_6 - 0x10000) * 4);
        iVar5 = FUN_0001a0d8(*DAT_0001ac4c,param_2,param_4,3);
        if (iVar5 != 0) {
          param_4 = param_4 * 3;
          *puVar3 = 1;
        }
        puVar3 = DAT_0001ac54;
        iVar5 = FUN_0001a168(*DAT_0001ac54,param_4,3,DAT_0001ac64);
        if (iVar5 != 0) {
          param_4 = param_4 + 0x17 & 0xffffffe8;
          *puVar3 = 1;
        }
        for (; uVar4 != param_3; uVar4 = uVar4 + 1) {
          for (uVar6 = 0; uVar6 != param_2; uVar6 = uVar6 + 1) {
            FUN_000199ec(&local_34,&local_30,auStack_2c,uVar6,uVar4,param_7);
            (*pcVar9)(param_1 + uVar6 * 3,local_34,local_30,auStack_2c[0],1);
          }
          param_1 = param_1 + param_4;
        }
        return 0;
      }
LAB_0001a3b0:
      uVar4 = 0;
      pcVar9 = *(code **)(DAT_0001ac50 + (param_6 - 0x10000) * 4);
      iVar5 = FUN_0001a0d8(*DAT_0001ac4c,param_2,param_4,4);
      if (iVar5 != 0) {
        param_4 = param_4 << 2;
        *puVar3 = 1;
      }
      puVar3 = DAT_0001ac54;
      iVar5 = FUN_0001a168(*DAT_0001ac54,param_4,4,DAT_0001ac58);
      if (iVar5 != 0) {
        param_4 = param_4 + 0x1f & 0xffffffe0;
        *puVar3 = 1;
      }
      for (; uVar4 != param_3; uVar4 = uVar4 + 1) {
        for (uVar6 = 0; uVar6 != param_2; uVar6 = uVar6 + 1) {
          FUN_000199ec(&local_34,&local_30,auStack_2c,uVar6,uVar4,param_7);
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
LAB_0001a254:
    RK_LOG(2,DAT_0001ac40,DAT_0001ac3c,DAT_0001ac44,0x2df,param_6);
    return 0xffffffff;
  }
LAB_0001a448:
  uVar4 = 0;
  pcVar9 = *(code **)(DAT_0001ac50 + (param_6 - 0x10000) * 4);
  iVar5 = FUN_0001a0d8(*DAT_0001ac4c,param_2,param_4,2);
  if (iVar5 != 0) {
    param_4 = param_4 << 1;
    *puVar3 = 1;
  }
  puVar3 = DAT_0001ac54;
  iVar5 = FUN_0001a168(*DAT_0001ac54,param_4,2,DAT_0001ac60);
  if (iVar5 != 0) {
    param_4 = param_4 + 0xf & 0xfffffff0;
    *puVar3 = 1;
  }
  for (; uVar4 != param_3; uVar4 = uVar4 + 1) {
    for (uVar6 = 0; uVar6 != param_2; uVar6 = uVar6 + 1) {
      FUN_000199ec(&local_34,&local_30,auStack_2c,uVar6,uVar4,param_7);
      (*pcVar9)(param_1 + uVar6 * 2,local_34,local_30,auStack_2c[0],1);
    }
    param_1 = param_1 + param_4;
  }
  return 0;
}



/* ===== FUN_0001ad1c @ 0001ad1c size=236 ===== */

undefined4 FUN_0001ad1c(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  char *__format;
  undefined4 uVar2;
  char acStack_158 [16];
  undefined1 auStack_148 [304];
  
  iVar1 = DAT_0001ae14;
  if (param_1 < 8) {
    setlinebuf((FILE *)*DAT_0001ae10);
    __format = DAT_0001ae20;
    if (param_4 == 0) {
      puts(DAT_0001ae18);
      uVar2 = 0;
    }
    else {
      *(undefined4 *)(DAT_0001ae1c + param_1 * 4) = param_2;
      snprintf(acStack_158,0x10,__format,param_2);
      setenv(DAT_0001ae24,acStack_158,1);
      rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId(param_1,auStack_148);
      printf(DAT_0001ae28,param_1,auStack_148,param_4);
      rk_aiq_uapi2_sysctl_preInit_devBufCnt(auStack_148,DAT_0001ae2c,2);
      uVar2 = rk_aiq_uapi2_sysctl_init(auStack_148,param_4,DAT_0001ae34,DAT_0001ae30);
      if (param_3 != 0) {
        rk_aiq_uapi2_sysctl_setMulCamConc(uVar2,1);
      }
    }
    *(undefined4 *)(iVar1 + param_1 * 4) = uVar2;
    uVar2 = 0;
  }
  else {
    printf(DAT_0001ae0c,DAT_0001ae08);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== FUN_0001ae38 @ 0001ae38 size=488 ===== */

int FUN_0001ae38(int param_1,ushort *param_2,int param_3)

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
  iVar3 = DAT_0001b024;
  __format = DAT_0001b020;
  __s = param_2;
  if ((int)param_2 - 1U < 2) {
    iVar4 = rk_aiq_uapi2_camgroup_getCamInfos
                      (*(undefined4 *)(DAT_0001b024 + param_1 * 4),&local_108);
    if (iVar4 == 0) {
      piVar7 = &local_108;
      iVar4 = 0;
      for (iVar8 = 0; iVar8 < local_108; iVar8 = iVar8 + 1) {
        iVar6 = rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm
                          (*(undefined4 *)(iVar3 + param_1 * 4),piVar7[1]);
        if (iVar6 == 0) {
          puts(DAT_0001b040);
          goto LAB_0001b010;
        }
        printf(DAT_0001b028,piVar7[1],piVar7[9]);
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
              puts(DAT_0001b02c);
              local_84 = -1;
            }
            else {
              uVar1 = __s[2];
              uVar2 = __s[3];
              printf(DAT_0001b034,(uint)*__s,(uint)__s[1],(uint)uVar1,(uint)uVar2,(uint)__s[4],
                     (uint)__s[5]);
              local_84 = ((uint)uVar2 * (uint)uVar1 + 6) * 2;
            }
          }
          else {
            pcVar5 = strrchr((char *)__s,0x2f);
            __format = DAT_0001b038;
            if (pcVar5 == (char *)0x0) goto LAB_0001af90;
            local_bc = 1;
            local_8c = 1;
            local_90 = (ushort *)0x1;
            memcpy(&local_88,__s,(size_t)(pcVar5 + (1 - (int)__s)));
            strcpy(acStack_48,pcVar5 + 1);
            printf(DAT_0001b03c,&local_88,acStack_48);
          }
          iVar6 = rk_aiq_user_api2_aldch_v21_SetAttrib(iVar6,auStack_c4);
          iVar4 = 0;
          if (iVar6 != 0) {
            printf(DAT_0001b030,iVar6);
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
LAB_0001af90:
    printf(__format,__s);
LAB_0001b010:
    iVar4 = -1;
  }
  return iVar4;
}



/* ===== FUN_0001b044 @ 0001b044 size=352 ===== */

undefined4
FUN_0001b044(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5,
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
  
  uVar1 = DAT_0001b1c8;
  __format_00 = DAT_0001b1c4;
  __format = DAT_0001b1c0;
  if (param_1 < 8) {
    for (iVar4 = 0; iVar3 = DAT_0001b1b4, iVar4 < *(int *)(param_6 + 0x20); iVar4 = iVar4 + 1) {
      iVar3 = rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId(iVar4,acStack_558);
      __s = DAT_0001b1ac;
      if (iVar3 != 0) goto LAB_0001b09c;
      printf(__format,param_1,iVar4,acStack_558,*(undefined4 *)(param_6 + 0x24));
      __dest = auStack_428 + iVar4 * 0x80;
      sVar2 = strlen(acStack_558);
      memcpy(__dest,acStack_558,sVar2 + 1);
      *(undefined1 **)(param_6 + iVar4 * 4) = __dest;
      printf(__format_00,iVar4,__dest);
      iVar3 = rk_aiq_uapi2_sysctl_preInit_devBufCnt(acStack_558,uVar1,2);
      __s = DAT_0001b1b0;
      if (iVar3 != 0) goto LAB_0001b09c;
    }
    iVar4 = rk_aiq_uapi2_camgroup_create(param_6);
    *(int *)(iVar3 + param_1 * 4) = iVar4;
    __s = DAT_0001b1b8;
    if (iVar4 != 0) {
      if (param_4 != 0) {
        FUN_0001ae38(param_1,param_4 & 0xff,param_5);
      }
      iVar4 = rk_aiq_uapi2_camgroup_prepare(*(undefined4 *)(iVar3 + param_1 * 4),param_2);
      iVar3 = rk_aiq_uapi2_camgroup_start(*(undefined4 *)(iVar3 + param_1 * 4));
      __s = DAT_0001b1bc;
      if (iVar4 == 0 && iVar3 == 0) {
        puts(DAT_0001b1cc);
        return 0;
      }
    }
LAB_0001b09c:
    puts(__s);
  }
  else {
    printf(DAT_0001b1a8,DAT_0001b1a4,8);
  }
  return 0xffffffff;
}



/* ===== FUN_0001b1d0 @ 0001b1d0 size=112 ===== */

undefined4 FUN_0001b1d0(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_0001b240;
  if ((param_1 < 8) && (*(int *)(DAT_0001b240 + param_1 * 4) != 0)) {
    puts(DAT_0001b24c);
    rk_aiq_uapi2_sysctl_stop(*(undefined4 *)(iVar1 + param_1 * 4),0);
    puts(DAT_0001b250);
    rk_aiq_uapi2_sysctl_deinit(*(undefined4 *)(iVar1 + param_1 * 4));
    puts(DAT_0001b254);
    *(undefined4 *)(iVar1 + param_1 * 4) = 0;
    return 0;
  }
  printf(DAT_0001b248,DAT_0001b244,param_1);
  return 0xffffffff;
}



/* ===== FUN_0001b2d8 @ 0001b2d8 size=152 ===== */

undefined4 FUN_0001b2d8(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_0001b370;
  if ((param_1 < 8) && (iVar1 = *(int *)(DAT_0001b370 + param_1 * 4), iVar1 != 0)) {
    iVar1 = rk_aiq_uapi2_sysctl_prepare(iVar1,0,0,*(undefined4 *)(DAT_0001b37c + param_1 * 4));
    if (iVar1 == 0) {
      puts(DAT_0001b384);
      iVar2 = rk_aiq_uapi2_sysctl_start(*(undefined4 *)(iVar2 + param_1 * 4));
      if (iVar2 == 0) {
        puts(DAT_0001b38c);
        return 0;
      }
      puts(DAT_0001b388);
    }
    else {
      puts(DAT_0001b380);
      *(undefined4 *)(iVar2 + param_1 * 4) = 0;
    }
  }
  else {
    printf(DAT_0001b378,DAT_0001b374);
  }
  return 0xffffffff;
}



/* ===== FUN_0001b574 @ 0001b574 size=204 ===== */

int FUN_0001b574(uint param_1,undefined1 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_b4 [8];
  undefined1 local_ac;
  undefined1 local_ab;
  
  memset(auStack_b4,0,0x9c);
  iVar1 = DAT_0001b640;
  if ((param_1 < 8) && (iVar2 = *(int *)(DAT_0001b640 + param_1 * 4), iVar2 != 0)) {
    iVar2 = rk_aiq_user_api2_aldch_v21_GetAttrib(iVar2,auStack_b4);
    if (iVar2 == 0) {
      local_ac = param_3 != 0;
      local_ab = param_2;
      iVar2 = rk_aiq_user_api2_aldch_v21_SetAttrib(*(undefined4 *)(iVar1 + param_1 * 4),auStack_b4);
      if (iVar2 == 0) {
        return 0;
      }
      uVar4 = 0x196;
      uVar3 = DAT_0001b654;
    }
    else {
      uVar4 = 399;
      uVar3 = DAT_0001b64c;
    }
    RK_LOG(2,DAT_0001b650,uVar3,DAT_0001b644,uVar4,iVar2);
  }
  else {
    iVar2 = -1;
    printf(DAT_0001b648,DAT_0001b644,8);
  }
  return iVar2;
}



/* ===== FUN_0001b658 @ 0001b658 size=204 ===== */

int FUN_0001b658(uint param_1,undefined1 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_b4 [8];
  undefined1 local_ac;
  undefined1 local_ab;
  
  memset(auStack_b4,0,0x9c);
  iVar1 = DAT_0001b724;
  if ((param_1 < 8) && (iVar2 = *(int *)(DAT_0001b724 + param_1 * 4), iVar2 != 0)) {
    iVar2 = rk_aiq_user_api2_aldch_v21_GetAttrib(iVar2,auStack_b4);
    if (iVar2 == 0) {
      local_ac = param_3 != 0;
      local_ab = param_2;
      iVar2 = rk_aiq_user_api2_aldch_v21_SetAttrib(*(undefined4 *)(iVar1 + param_1 * 4),auStack_b4);
      if (iVar2 == 0) {
        return 0;
      }
      uVar4 = 0x1b1;
      uVar3 = DAT_0001b738;
    }
    else {
      uVar4 = 0x1a9;
      uVar3 = DAT_0001b730;
    }
    RK_LOG(2,DAT_0001b734,uVar3,DAT_0001b728,uVar4,iVar2);
  }
  else {
    iVar2 = -1;
    printf(DAT_0001b72c,DAT_0001b728,8);
  }
  return iVar2;
}



/* ===== FUN_0001b73c @ 0001b73c size=136 ===== */

uint FUN_0001b73c(int param_1,int param_2,int param_3,byte param_4,char param_5,char param_6,
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



/* ===== FUN_0001b7c4 @ 0001b7c4 size=144 ===== */

uint FUN_0001b7c4(int param_1,int param_2,int param_3,char param_4,char param_5,char param_6,
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



/* ===== FUN_0001b854 @ 0001b854 size=184 ===== */

undefined4 FUN_0001b854(char *param_1,void *param_2,void *param_3)

{
  FILE *__stream;
  undefined4 uStack_1c;
  void *pvStack_18;
  
  uStack_1c = param_2;
  pvStack_18 = param_3;
  if (param_1 == (char *)0x0) {
    puts(DAT_0001b90c);
  }
  else {
    __stream = fopen64(param_1,DAT_0001b910);
    if (__stream == (FILE *)0x0) {
      printf(DAT_0001b914,param_1);
    }
    else {
      fread((void *)((int)&uStack_1c + 2),1,2,__stream);
      if (uStack_1c._2_2_ == 0x4d42) {
        fread(param_2,1,0xc,__stream);
        fread(param_3,1,0x2c,__stream);
        fclose(__stream);
        return 0;
      }
      puts(DAT_0001b918);
      fclose(__stream);
    }
  }
  return 0xffffffff;
}



/* ===== FUN_0001b91c @ 0001b91c size=872 ===== */

undefined4 FUN_0001b91c(char *param_1,uint *param_2,uint param_3)

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
  
  __s = DAT_0001bcac;
  if (param_1 != (char *)0x0) {
    iVar2 = FUN_0001b854(param_1,auStack_60,auStack_54);
    if (iVar2 < 0) {
      return 0xffffffff;
    }
    __n = (uint)(local_46 >> 3);
    __s = DAT_0001bcb0;
    if (((0xf < local_46) && (__s = DAT_0001bcb4, local_44 == 0)) &&
       (__s = DAT_0001bcb8, -1 < (int)local_4c)) {
      __stream = fopen64(param_1,DAT_0001bcbc);
      if (__stream == (FILE *)0x0) {
        printf(DAT_0001bcc0,param_1);
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
        puts(DAT_0001bcc4);
        fclose(__stream);
        return 0xffffffff;
      }
      uVar14 = param_2[3];
      fseek(__stream,local_58,0);
      sVar3 = fread(__ptr,1,__size,__stream);
      if (__size - sVar3 != 0) {
        printf(DAT_0001bcc8,uVar11,uVar12,0xb6);
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
      iVar2 = DAT_0001bccc + param_3 * 0x10;
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
            goto LAB_0001bb38;
          }
          switch(param_3) {
          case 0:
          case 2:
          case 3:
          case 4:
            iVar7 = param_2[2] * uVar13 + uVar5 * 2;
            iVar16 = uVar5 * 3 + iVar9;
            uVar1 = FUN_0001b73c(*(undefined1 *)((int)__ptr + iVar16 + 2),
                                 *(undefined1 *)((int)__ptr + iVar16 + 1),
                                 *(undefined1 *)((int)__ptr + iVar16),
                                 *(undefined4 *)(DAT_0001bccc + param_3 * 0x10),
                                 *(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8),
                                 *(undefined4 *)(iVar2 + 0xc));
            goto LAB_0001bb34;
          default:
            printf(DAT_0001bcd8,DAT_0001bcd4,0xea);
            break;
          case 5:
            iVar7 = param_2[2] * uVar13 + uVar5 * 2;
            iVar16 = uVar5 * 3 + iVar9;
            uVar1 = FUN_0001b7c4(*(undefined1 *)((int)__ptr + iVar16 + 2),
                                 *(undefined1 *)((int)__ptr + iVar16 + 1),
                                 *(undefined1 *)((int)__ptr + iVar16),DAT_0001bcd0[-1],*DAT_0001bcd0
                                 ,DAT_0001bcd0[1],DAT_0001bcd0[2]);
LAB_0001bb34:
            *(undefined2 *)(uVar14 + iVar7) = uVar1;
            break;
          case 6:
          case 8:
            uVar15 = param_2[2];
            iVar7 = uVar5 * 3 + iVar9;
            uVar4 = FUN_0001b73c(*(undefined1 *)((int)__ptr + iVar7 + 2),
                                 *(undefined1 *)((int)__ptr + iVar7 + 1),
                                 *(undefined1 *)((int)__ptr + iVar7),
                                 *(undefined4 *)(DAT_0001bccc + param_3 * 0x10),
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
LAB_0001bb38:
        }
        local_6c = local_6c + 1;
      } while( true );
    }
  }
  puts(__s);
  return 0xffffffff;
}



/* ===== FUN_0001bcdc @ 0001bcdc size=76 ===== */

char * FUN_0001bcdc(char *param_1)

{
  char *pcVar1;
  size_t sVar2;
  char *pcVar3;
  char *pcVar4;
  
  if (param_1 == (char *)0x0) {
    printf(DAT_0001bd28);
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



/* ===== FUN_0001bd2c @ 0001bd2c size=84 ===== */

undefined4 FUN_0001bd2c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = (char *)FUN_0001bcdc();
  iVar2 = strcmp(pcVar1,DAT_0001bd80);
  pcVar1 = DAT_0001bd88;
  if ((iVar2 == 0) &&
     (iVar2 = FUN_0001b91c(param_1,param_2,param_3), pcVar1 = DAT_0001bd84, iVar2 == 0)) {
    return 0;
  }
  puts(pcVar1);
  return 0xffffffff;
}



/* ===== FUN_0001bd8c @ 0001bd8c size=84 ===== */

undefined4 FUN_0001bd8c(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

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
  iVar1 = FUN_0001bd2c(param_1,&local_18,*param_2);
  if (iVar1 < 0) {
    puts(DAT_0001bde0);
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



/* ===== FUN_0001bde8 @ 0001bde8 size=28 ===== */

int FUN_0001bde8(void)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  return *piVar1;
}



/* ===== FUN_0001be04 @ 0001be04 size=40 ===== */

char * FUN_0001be04(int param_1)

{
  char *pcVar1;
  
  pcVar1 = strerror(param_1);
  return pcVar1;
}



/* ===== FUN_0001be2c @ 0001be2c size=156 ===== */

void * FUN_0001be2c(void)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,0x14);
  if (pvVar1 == (void *)0x0) {
    printf((char *)(DAT_0001bed0 + 0x1be78),DAT_0001becc + 0x1be70,0x9a,DAT_0001bec8 + 0x1be64);
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



/* ===== FUN_0001bed4 @ 0001bed4 size=48 ===== */

void FUN_0001bed4(void *param_1)

{
  if (param_1 != (void *)0x0) {
    free(param_1);
  }
  return;
}



/* ===== FUN_0001bf04 @ 0001bf04 size=204 ===== */

void * FUN_0001bf04(int param_1)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,0x168);
  if (pvVar1 == (void *)0x0) {
    printf((char *)(DAT_0001bfd8 + 0x1bf54),DAT_0001bfd4 + 0x1bf4c,0xad,DAT_0001bfd0 + 0x1bf40);
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



/* ===== FUN_0001bfdc @ 0001bfdc size=136 ===== */

void FUN_0001bfdc(void *param_1)

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



/* ===== FUN_0001c064 @ 0001c064 size=180 ===== */

void * FUN_0001c064(int param_1)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,0x434);
  if (pvVar1 == (void *)0x0) {
    printf((char *)(DAT_0001c120 + 0x1c0b4),DAT_0001c11c + 0x1c0ac,0xc4,DAT_0001c118 + 0x1c0a0);
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



/* ===== FUN_0001c124 @ 0001c124 size=136 ===== */

void FUN_0001c124(void *param_1)

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



/* ===== FUN_0001c1ac @ 0001c1ac size=128 ===== */

void FUN_0001c1ac(int param_1,int param_2)

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



/* ===== FUN_0001c22c @ 0001c22c size=144 ===== */

void FUN_0001c22c(int param_1)

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



/* ===== FUN_0001c2bc @ 0001c2bc size=536 ===== */

int * FUN_0001c2bc(int param_1)

{
  undefined4 uVar1;
  int local_2c;
  sockaddr local_24;
  int local_14;
  int local_10;
  int *local_c;
  
  local_c = (int *)0x0;
  local_c = (int *)FUN_0001be2c();
  if (local_c == (int *)0x0) {
    local_c = (int *)0x0;
  }
  else {
    local_10 = socket(2,1,0);
    if (local_10 == -1) {
      uVar1 = FUN_0001bde8();
      uVar1 = FUN_0001be04(uVar1);
      printf((char *)(DAT_0001c4dc + 0x1c348),DAT_0001c4d8 + 0x1c340,0xfa,DAT_0001c4d4 + 0x1c334,
             uVar1);
      FUN_0001bed4(local_c);
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
        uVar1 = FUN_0001bde8();
        uVar1 = FUN_0001be04(uVar1);
        printf((char *)(DAT_0001c4e8 + 0x1c40c),DAT_0001c4e4 + 0x1c404,0x108,DAT_0001c4e0 + 0x1c3f8,
               uVar1);
        close(local_10);
        FUN_0001bed4(local_c);
        local_c = (int *)0x0;
      }
      else {
        local_14 = listen(local_10,0x80);
        if (local_14 == -1) {
          uVar1 = FUN_0001bde8();
          uVar1 = FUN_0001be04(uVar1);
          printf((char *)(DAT_0001c4f4 + 0x1c478),DAT_0001c4f0 + 0x1c470,0x110,
                 DAT_0001c4ec + 0x1c464,uVar1);
          close(local_10);
          FUN_0001bed4(local_c);
          local_c = (int *)0x0;
        }
        else {
          *local_c = local_10;
          printf((char *)(DAT_0001c500 + 0x1c4c4),DAT_0001c4fc + 0x1c4bc,0x118,
                 DAT_0001c4f8 + 0x1c4b0,local_2c);
        }
      }
    }
  }
  return local_c;
}



/* ===== FUN_0001c504 @ 0001c504 size=932 ===== */

undefined4 FUN_0001c504(int param_1)

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
    printf((char *)(DAT_0001c8b0 + 0x1c598),DAT_0001c8ac + 0x1c590,0x15b,DAT_0001c8a8 + 0x1c584,
           pcVar2);
  }
  else {
    local_c = local_c | 0x800;
    local_c = fcntl(param_1,4,local_c);
    if ((int)local_c < 0) {
      piVar1 = __errno_location();
      pcVar2 = strerror(*piVar1);
      printf((char *)(DAT_0001c8bc + 0x1c604),DAT_0001c8b8 + 0x1c5fc,0x160,DAT_0001c8b4 + 0x1c5f0,
             pcVar2);
    }
  }
  local_c = setsockopt(param_1,1,7,&local_10,4);
  if (local_c == -1) {
    uVar3 = FUN_0001bde8();
    uVar3 = FUN_0001be04(uVar3);
    printf((char *)(DAT_0001c8c8 + 0x1c66c),DAT_0001c8c4 + 0x1c664,0x166,DAT_0001c8c0 + 0x1c658,
           uVar3);
  }
  local_c = setsockopt(param_1,1,9,&local_14,4);
  if (local_c == -1) {
    uVar3 = FUN_0001bde8();
    uVar3 = FUN_0001be04(uVar3);
    printf((char *)(DAT_0001c8d4 + 0x1c6d4),DAT_0001c8d0 + 0x1c6cc,0x16b,DAT_0001c8cc + 0x1c6c0,
           uVar3);
  }
  local_c = setsockopt(param_1,6,4,&local_18,4);
  if (local_c == -1) {
    uVar3 = FUN_0001bde8();
    uVar3 = FUN_0001be04(uVar3);
    printf((char *)(DAT_0001c8e0 + 0x1c73c),DAT_0001c8dc + 0x1c734,0x170,DAT_0001c8d8 + 0x1c728,
           uVar3);
  }
  local_c = setsockopt(param_1,6,5,&local_1c,4);
  if (local_c == -1) {
    uVar3 = FUN_0001bde8();
    uVar3 = FUN_0001be04(uVar3);
    printf((char *)(DAT_0001c8ec + 0x1c7a4),DAT_0001c8e8 + 0x1c79c,0x175,DAT_0001c8e4 + 0x1c790,
           uVar3);
  }
  local_c = setsockopt(param_1,6,6,&local_20,4);
  if (local_c == -1) {
    uVar3 = FUN_0001bde8();
    uVar3 = FUN_0001be04(uVar3);
    printf((char *)(DAT_0001c8f8 + 0x1c80c),DAT_0001c8f4 + 0x1c804,0x17a,DAT_0001c8f0 + 0x1c7f8,
           uVar3);
  }
  memset(&local_28,0,8);
  local_28 = 1;
  local_24 = 0;
  local_c = setsockopt(param_1,1,0xd,&local_28,8);
  if (local_c == -1) {
    uVar3 = FUN_0001bde8();
    uVar3 = FUN_0001be04(uVar3);
    printf((char *)(DAT_0001c904 + 0x1c898),DAT_0001c900 + 0x1c890,0x182,DAT_0001c8fc + 0x1c884,
           uVar3);
  }
  return 0;
}



/* ===== FUN_0001c908 @ 0001c908 size=304 ===== */

undefined4 * FUN_0001c908(int *param_1)

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
    uVar2 = FUN_0001bde8();
    uVar2 = FUN_0001be04(uVar2);
    printf((char *)(DAT_0001ca40 + 0x1c988),DAT_0001ca3c + 0x1c980,0x191,DAT_0001ca38 + 0x1c974,
           uVar2);
    local_14 = (undefined4 *)0x0;
  }
  else {
    FUN_0001c504(local_18);
    pcVar3 = inet_ntoa((in_addr)auStack_28._4_4_);
    uVar1 = ntohs(auStack_28._2_2_);
    printf((char *)(DAT_0001ca4c + 0x1c9dc),DAT_0001ca48 + 0x1c9d4,0x198,DAT_0001ca44 + 0x1c9c8,
           pcVar3,(uint)uVar1);
    local_14 = (undefined4 *)FUN_0001c064(param_1);
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



/* ===== FUN_0001ca50 @ 0001ca50 size=160 ===== */

void FUN_0001ca50(int param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    uVar2 = *(undefined4 *)(param_1 + 4);
    pcVar1 = inet_ntoa((in_addr)*(in_addr_t *)(param_1 + 8));
    printf((char *)(DAT_0001caf8 + 0x1caac),DAT_0001caf4 + 0x1caa4,0x1ab,DAT_0001caf0 + 0x1ca98,
           uVar2,pcVar1);
    FUN_0001c22c(param_1);
    FUN_0001e508(param_1,0);
    FUN_0001e508(param_1,1);
    close(*(int *)(param_1 + 4));
    FUN_0001c124(param_1);
  }
  return;
}



/* ===== FUN_0001cafc @ 0001cafc size=408 ===== */

bool FUN_0001cafc(char *param_1,char *param_2)

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
    *(undefined2 *)(local_48 + sVar1) = *(undefined2 *)(DAT_0001cc94 + 0x1cbf8);
  }
  sVar1 = strlen(local_88);
  if (*(char *)((int)&local_8c + sVar1 + 3) != '/') {
    sVar1 = strlen(local_88);
    *(undefined2 *)(local_88 + sVar1) = *(undefined2 *)(DAT_0001cc98 + 0x1cc4c);
  }
  sVar1 = strlen(local_48);
  iVar2 = strncmp(local_48,local_88,sVar1);
  return iVar2 == 0;
}



/* ===== FUN_0001cc9c @ 0001cc9c size=416 ===== */

char * FUN_0001cc9c(int param_1,char *param_2)

{
  int iVar1;
  char *local_c;
  
  local_c = (char *)0x0;
  if (((param_1 == 0) || (param_2 == (char *)0x0)) || (*param_2 == '\0')) {
    printf((char *)(DAT_0001ce44 + 0x1cd08),DAT_0001ce40 + 0x1cd00,0x1cc,DAT_0001ce3c + 0x1ccf4);
  }
  else {
    for (local_c = *(char **)(param_1 + 4); local_c != (char *)0x0;
        local_c = *(char **)(local_c + 0x15c)) {
      iVar1 = FUN_0001cafc(local_c,param_2);
      if ((iVar1 != 0) || (iVar1 = FUN_0001cafc(param_2,local_c), iVar1 != 0)) {
        printf((char *)(DAT_0001ce50 + 0x1cd84),DAT_0001ce4c + 0x1cd7c,0x1d2,DAT_0001ce48 + 0x1cd70,
               local_c,param_2);
        goto LAB_0001ce18;
      }
    }
    local_c = (char *)FUN_0001bf04(param_1);
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
      printf((char *)(DAT_0001ce5c + 0x1ce0c),DAT_0001ce58 + 0x1ce04,0x1e0,DAT_0001ce54 + 0x1cdf8,
             local_c);
      return local_c;
    }
  }
LAB_0001ce18:
  if (local_c != (char *)0x0) {
    free(local_c);
  }
  return (char *)0x0;
}



/* ===== FUN_0001ce60 @ 0001ce60 size=40 ===== */

undefined4 FUN_0001ce60(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001c2bc(param_1);
  return uVar1;
}



/* ===== FUN_0001ce88 @ 0001ce88 size=72 ===== */

undefined4 FUN_0001ce88(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001cc9c(param_1,param_2);
  FUN_0001ced0(uVar1,1,0,0);
  return uVar1;
}



/* ===== FUN_0001ced0 @ 0001ced0 size=596 ===== */

undefined4 FUN_0001ced0(int param_1,int param_2,int param_3,int param_4)

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
        iVar1 = FUN_00027e1c(param_3,param_4,param_1 + 0x48);
        if (iVar1 < 1) {
          printf((char *)(DAT_0001d138 + 0x1d048),DAT_0001d134 + 0x1d040,0x220,
                 DAT_0001d130 + 0x1d034);
        }
      }
      else if ((param_2 == 2) && (iVar1 = FUN_00028080(param_3,param_4,param_1 + 0x48), iVar1 < 1))
      {
        printf((char *)(DAT_0001d144 + 0x1d090),DAT_0001d140 + 0x1d088,0x226,DAT_0001d13c + 0x1d07c)
        ;
      }
    }
    if (*(int *)(param_1 + 0x138) == 0) {
      uVar2 = FUN_000274ec(0x5b0,0x4b1);
      *(undefined4 *)(param_1 + 0x138) = uVar2;
      if (*(int *)(param_1 + 0x138) == 0) {
        printf((char *)(DAT_0001d150 + 0x1d100),DAT_0001d14c + 0x1d0f8,0x230,DAT_0001d148 + 0x1d0ec)
        ;
        *(undefined4 *)(param_1 + 0x40) = 0;
        return 0xffffffff;
      }
    }
    uVar2 = 0;
  }
  else {
    printf((char *)(DAT_0001d12c + 0x1cf64),DAT_0001d128 + 0x1cf5c,0x211,DAT_0001d124 + 0x1cf50,
           param_2);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== FUN_0001d154 @ 0001d154 size=516 ===== */

undefined4 FUN_0001d154(int param_1,int param_2,int param_3,int param_4)

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
       (iVar1 = FUN_00028384(param_3,param_4,param_1 + 0x114), iVar1 < 1)) {
      printf((char *)(DAT_0001d36c + 0x1d2cc),DAT_0001d368 + 0x1d2c4,0x255,DAT_0001d364 + 0x1d2b8);
    }
    if (*(int *)(param_1 + 0x13c) == 0) {
      uVar2 = FUN_000274ec(0x5b0,0x29);
      *(undefined4 *)(param_1 + 0x13c) = uVar2;
      if (*(int *)(param_1 + 0x13c) == 0) {
        printf((char *)(DAT_0001d378 + 0x1d334),DAT_0001d374 + 0x1d32c,0x25f,DAT_0001d370 + 0x1d320)
        ;
        *(undefined4 *)(param_1 + 0x44) = 0;
        return 0xffffffff;
      }
    }
    uVar2 = 0;
  }
  else {
    printf((char *)(DAT_0001d360 + 0x1d1ec),DAT_0001d35c + 0x1d1e4,0x245,DAT_0001d358 + 0x1d1d8,
           param_2);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== FUN_0001d420 @ 0001d420 size=196 ===== */

void FUN_0001d420(int param_1)

{
  if (param_1 != 0) {
    while (*(int *)(param_1 + 0x154) != 0) {
      FUN_0001ca50(*(int *)(param_1 + 0x154));
    }
    printf((char *)(DAT_0001d4ec + 0x1d490),DAT_0001d4e8 + 0x1d488,0x285,DAT_0001d4e4 + 0x1d47c,
           param_1);
    if (*(int *)(param_1 + 0x138) != 0) {
      FUN_00027980(*(undefined4 *)(param_1 + 0x138));
    }
    if (*(int *)(param_1 + 0x13c) != 0) {
      FUN_00027980(*(undefined4 *)(param_1 + 0x13c));
    }
    FUN_0001bfdc(param_1);
  }
  return;
}



/* ===== FUN_0001d4f0 @ 0001d4f0 size=144 ===== */

void FUN_0001d4f0(int *param_1)

{
  if (param_1 != (int *)0x0) {
    while (param_1[3] != 0) {
      FUN_0001ca50(param_1[3]);
    }
    while (param_1[1] != 0) {
      FUN_0001d420(param_1[1]);
    }
    close(*param_1);
    FUN_0001bed4(param_1);
  }
  return;
}



/* ===== FUN_0001d580 @ 0001d580 size=1128 ===== */

int FUN_0001d580(int param_1,int param_2,char *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *local_c;
  
  iVar1 = sprintf(param_3,(char *)(DAT_0001d9e8 + 0x1d5b0));
  pcVar3 = param_3 + iVar1;
  iVar1 = sprintf(pcVar3,(char *)(DAT_0001d9ec + 0x1d5d8));
  pcVar3 = pcVar3 + iVar1;
  iVar1 = sprintf(pcVar3,(char *)(DAT_0001d9f0 + 0x1d600));
  pcVar3 = pcVar3 + iVar1;
  iVar1 = sprintf(pcVar3,(char *)(DAT_0001d9f4 + 0x1d628));
  pcVar3 = pcVar3 + iVar1;
  iVar1 = param_2;
  if (param_2 == 0) {
    iVar1 = DAT_0001d9f8 + 0x1d664;
  }
  iVar1 = sprintf(pcVar3,(char *)(DAT_0001d9fc + 0x1d670),iVar1);
  iVar2 = sprintf(pcVar3 + iVar1,(char *)(DAT_0001da00 + 0x1d698));
  local_c = pcVar3 + iVar1 + iVar2;
  if (*(int *)(param_1 + 0x40) != 0) {
    if (*(int *)(param_1 + 0x40) == 1) {
      iVar1 = FUN_000284f8(0x60,*(undefined4 *)(param_1 + 0x120),param_1 + 0x48,local_c,
                           param_4 - ((int)local_c - (int)param_3));
      local_c = local_c + iVar1;
    }
    else if (*(int *)(param_1 + 0x40) == 2) {
      iVar1 = FUN_00028740(0x60,*(undefined4 *)(param_1 + 0x120),param_1 + 0x48,local_c,
                           param_4 - ((int)local_c - (int)param_3));
      local_c = local_c + iVar1;
    }
    if (param_2 == 0) {
      iVar1 = sprintf(local_c,(char *)(DAT_0001da10 + 0x1d7e8),DAT_0001da0c + 0x1d7dc);
      local_c = local_c + iVar1;
    }
    else {
      iVar1 = sprintf(local_c,(char *)(DAT_0001da08 + 0x1d7b4),param_2,DAT_0001da04 + 0x1d7a8);
      local_c = local_c + iVar1;
    }
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    iVar1 = *(int *)(param_1 + 0x44);
    if (iVar1 == 0x4002) {
      iVar1 = FUN_00028ae0(0x61,*(undefined4 *)(param_1 + 0x130),*(undefined1 *)(param_1 + 0x134),
                           local_c,param_4 - ((int)local_c - (int)param_3));
      local_c = local_c + iVar1;
    }
    else if (iVar1 == 0x4003) {
      iVar1 = FUN_00028bb0(0x61,*(undefined4 *)(param_1 + 0x130),*(undefined1 *)(param_1 + 0x134),
                           param_1 + 0x114,local_c,param_4 - ((int)local_c - (int)param_3));
      local_c = local_c + iVar1;
    }
    else if (iVar1 == 0x4001) {
      iVar1 = FUN_00028a10(0x61,*(undefined4 *)(param_1 + 0x130),*(undefined1 *)(param_1 + 0x134),
                           local_c,param_4 - ((int)local_c - (int)param_3));
      local_c = local_c + iVar1;
    }
    if (param_2 == 0) {
      iVar1 = sprintf(local_c,(char *)(DAT_0001da20 + 0x1d9b4),DAT_0001da1c + 0x1d9a8);
      local_c = local_c + iVar1;
    }
    else {
      iVar1 = sprintf(local_c,(char *)(DAT_0001da18 + 0x1d980),param_2,DAT_0001da14 + 0x1d974);
      local_c = local_c + iVar1;
    }
  }
  return (int)local_c - (int)param_3;
}



/* ===== FUN_0001da24 @ 0001da24 size=164 ===== */

undefined4 FUN_0001da24(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  printf((char *)(DAT_0001dad0 + 0x1da64),DAT_0001dacc + 0x1da5c,0x2d5,DAT_0001dac8 + 0x1da50);
  FUN_000271bc(param_3,0x6f);
  return 0;
}



/* ===== FUN_0001dad4 @ 0001dad4 size=648 ===== */

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_0001dad4(int param_1,int param_2,int param_3)

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
  printf((char *)(DAT_0001dd64 + 0x1db7c),DAT_0001dd60 + 0x1db74,0x2ea,DAT_0001dd5c + 0x1db68);
  iVar1 = FUN_00026f74(param_2,local_418);
  if ((iVar1 < 0) && ((local_418[0] & 1) == 0)) {
    FUN_000269fc(param_3,0x196);
    printf((char *)(DAT_0001dd70 + 0x1dbd8),DAT_0001dd6c + 0x1dbd0,0x2ed,DAT_0001dd68 + 0x1dbc4);
  }
  else {
    if (*local_14 == 1) {
      sVar2 = strlen(local_498);
      uVar3 = *(undefined4 *)(DAT_0001dd74 + 0x1dc24);
      *(undefined4 *)(local_498 + sVar2) = *(undefined4 *)(DAT_0001dd74 + 0x1dc20);
      *(undefined4 *)((int)&uStack_494 + sVar2) = uVar3;
      auStack_490[sVar2] = *(undefined1 *)(DAT_0001dd74 + 0x1dc28);
    }
    else {
      sVar2 = strlen(local_498);
      uVar3 = *(undefined4 *)(DAT_0001dd78 + 0x1dc68);
      *(undefined4 *)(local_498 + sVar2) = *(undefined4 *)(DAT_0001dd78 + 0x1dc64);
      *(undefined4 *)((int)&uStack_494 + sVar2) = uVar3;
    }
    strcat(local_498,(char *)((int)local_14 + 6));
    if ((short)local_14[1] != 0) {
      sVar2 = strlen(local_498);
      sprintf(local_498 + sVar2,(char *)(DAT_0001dd7c + 0x1dcd0),(uint)*(ushort *)(local_14 + 1));
    }
    strcat(local_498,local_c);
    local_10 = FUN_0001d580(local_c,local_498,local_418 + 1,0x400);
    FUN_000273a8(param_3,0);
    FUN_0002747c(param_3,local_10);
    uVar3 = FUN_0002258c(local_418 + 1,local_10);
    *(undefined4 *)(param_3 + 0xa8) = uVar3;
  }
  return 0;
}



/* ===== FUN_0001dd80 @ 0001dd80 size=52 ===== */

int FUN_0001dd80(void)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0001ddb4 + 0x1dd94);
  *(int *)(DAT_0001ddb8 + 0x1dda4) = iVar1 + 1;
  return iVar1;
}



/* ===== FUN_0001ddbc @ 0001ddbc size=1048 ===== */

undefined4 FUN_0001ddbc(undefined4 *param_1)

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
      printf((char *)(DAT_0001e224 + 0x1e1c4),DAT_0001e220 + 0x1e1bc,0x363,DAT_0001e21c + 0x1e1b0);
      return 0xffffffff;
    }
    local_10 = socket(2,2,0);
    if (local_10 == -1) break;
    local_14 = socket(2,2,0);
    if (local_14 == -1) {
      uVar1 = FUN_0001bde8();
      uVar1 = FUN_0001be04(uVar1);
      printf((char *)(DAT_0001e1e8 + 0x1de90),DAT_0001e1e4 + 0x1de88,0x31a,DAT_0001e1e0 + 0x1de7c,
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
          printf((char *)(DAT_0001e1f4 + 0x1e004),DAT_0001e1f0 + 0x1dffc,0x347,
                 DAT_0001e1ec + 0x1dff0,pcVar3);
        }
        else {
          local_1c = local_1c | 0x800;
          local_1c = fcntl(local_10,4,local_1c);
          if ((int)local_1c < 0) {
            piVar2 = __errno_location();
            pcVar3 = strerror(*piVar2);
            printf((char *)(DAT_0001e200 + 0x1e070),DAT_0001e1fc + 0x1e068,0x34c,
                   DAT_0001e1f8 + 0x1e05c,pcVar3);
          }
        }
        local_1c = fcntl(local_14,3,0);
        if ((int)local_1c < 0) {
          piVar2 = __errno_location();
          pcVar3 = strerror(*piVar2);
          printf((char *)(DAT_0001e20c + 0x1e0cc),DAT_0001e208 + 0x1e0c4,0x351,
                 DAT_0001e204 + 0x1e0b8,pcVar3);
        }
        else {
          local_1c = local_1c | 0x800;
          local_1c = fcntl(local_14,4,local_1c);
          if ((int)local_1c < 0) {
            piVar2 = __errno_location();
            pcVar3 = strerror(*piVar2);
            printf((char *)(DAT_0001e218 + 0x1e138),DAT_0001e214 + 0x1e130,0x356,
                   DAT_0001e210 + 0x1e124,pcVar3);
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
  uVar1 = FUN_0001bde8();
  uVar1 = FUN_0001be04(uVar1);
  printf((char *)(DAT_0001e1dc + 0x1de30),DAT_0001e1d8 + 0x1de28,0x314,DAT_0001e1d4 + 0x1de1c,uVar1)
  ;
  return 0xffffffff;
}



/* ===== FUN_0001e228 @ 0001e228 size=684 ===== */

undefined4 FUN_0001e228(int param_1,int param_2,int param_3,short param_4,uint param_5)

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
    printf((char *)(DAT_0001e4dc + 0x1e2ac),DAT_0001e4d8 + 0x1e2a4,0x36e,DAT_0001e4d4 + 0x1e298,
           pcVar3);
    uVar5 = 0xffffffff;
  }
  else {
    *__ptr = (uint)(param_3 != 0);
    __ptr[8] = __in.s_addr;
    uVar4 = FUN_0001dd80();
    __ptr[10] = uVar4;
    if (param_3 == 0) {
      iVar6 = FUN_0001ddbc(__ptr);
      if (iVar6 < 0) {
        free(__ptr);
        return 0xffffffff;
      }
      *(short *)(__ptr + 7) = param_4;
      *(short *)((int)__ptr + 0x1e) = param_4 + 1;
      if (param_2 == 0) {
        iVar6 = DAT_0001e4f8 + 0x1e420;
      }
      else {
        iVar6 = DAT_0001e4f4 + 0x1e410;
      }
      uVar7 = __ptr[10];
      uVar4 = __ptr[6];
      uVar1 = *(ushort *)((int)__ptr + 0x1a);
      pcVar3 = inet_ntoa(__in);
      printf((char *)(DAT_0001e504 + 0x1e49c),DAT_0001e500 + 0x1e494,0x38b,DAT_0001e4fc + 0x1e488,
             iVar6,uVar7,(uint)(ushort)uVar4,(uint)uVar1,pcVar3,(uint)(ushort)__ptr[7],
             (uint)*(ushort *)((int)__ptr + 0x1e));
    }
    else {
      __ptr[1] = *(uint *)(param_1 + 4);
      __ptr[2] = param_5;
      __ptr[3] = param_5 + 1;
      if (param_2 == 0) {
        iVar6 = DAT_0001e4e4 + 0x1e350;
      }
      else {
        iVar6 = DAT_0001e4e0 + 0x1e340;
      }
      uVar4 = __ptr[10];
      pcVar3 = inet_ntoa(__in);
      printf((char *)(DAT_0001e4f0 + 0x1e3a8),DAT_0001e4ec + 0x1e3a0,0x37e,DAT_0001e4e8 + 0x1e394,
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



/* ===== FUN_0001e508 @ 0001e508 size=164 ===== */

void FUN_0001e508(int param_1,int param_2)

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



/* ===== FUN_0001e5ac @ 0001e5ac size=1096 ===== */

undefined4 FUN_0001e5ac(int *param_1,int param_2,undefined4 param_3)

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
  printf((char *)(DAT_0001e9fc + 0x1e688),DAT_0001e9f8 + 0x1e680,0x3b6,DAT_0001e9f4 + 0x1e674);
  if (*(int *)(param_2 + 0x80) == 0) {
    FUN_000269fc(param_3,0x1cd);
    printf((char *)(DAT_0001ea08 + 0x1e6c4),DAT_0001ea04 + 0x1e6bc,0x3ba,DAT_0001ea00 + 0x1e6b0);
  }
  else {
    if (**(int **)(param_2 + 0x80) == 1) {
      local_c = 1;
      if ((*(uint *)(*(int *)(param_2 + 0x80) + 4) & 0x20) == 0) {
        printf((char *)(DAT_0001ea14 + 0x1e720),DAT_0001ea10 + 0x1e718,0x3c1,DAT_0001ea0c + 0x1e70c)
        ;
        FUN_000269fc(param_3,0x1cd);
        return 0;
      }
    }
    else if ((*(uint *)(*(int *)(param_2 + 0x80) + 4) & 8) == 0) {
      printf((char *)(DAT_0001ea20 + 0x1e76c),DAT_0001ea1c + 0x1e764,0x3c7,DAT_0001ea18 + 0x1e758);
      FUN_000269fc(param_3,0x1cd);
      return 0;
    }
    snprintf(local_5c,0x3f,(char *)(DAT_0001ea28 + 0x1e7a0),local_14,DAT_0001ea24 + 0x1e794);
    snprintf(local_9c,0x3f,(char *)(DAT_0001ea30 + 0x1e7c4),local_14,DAT_0001ea2c + 0x1e7b8);
    if ((*(int *)(local_14 + 0x40) == 0) ||
       (iVar1 = FUN_0001cafc(local_5c,param_2 + 0x2e), iVar1 == 0)) {
      if ((*(int *)(local_14 + 0x44) == 0) ||
         (iVar1 = FUN_0001cafc(local_9c,param_2 + 0x2e), iVar1 == 0)) {
        printf((char *)(DAT_0001ea3c + 0x1e874),DAT_0001ea38 + 0x1e86c,0x3d4,DAT_0001ea34 + 0x1e860,
               param_2 + 0x2e);
        FUN_000269fc(param_3,0x1cd);
        return 0;
      }
      local_10 = 1;
    }
    else {
      local_10 = 0;
    }
    FUN_0001e508(param_1,local_10);
    local_1c = FUN_0001e228(param_1,local_10,local_c,*(undefined2 *)(*(int *)(param_2 + 0x80) + 0xc)
                            ,*(undefined1 *)(*(int *)(param_2 + 0x80) + 0x10));
    if (local_1c < 0) {
      FUN_000269fc(param_3,500);
    }
    else {
      if (local_10 == 0) {
        local_18 = param_1[0x105];
      }
      else {
        local_18 = param_1[0x106];
      }
      if (local_c == 0) {
        FUN_00026d7c(param_3,*(undefined4 *)(local_18 + 0x28),*(undefined2 *)(local_18 + 0x1c),
                     *(undefined2 *)(local_18 + 0x18));
      }
      else {
        FUN_00026e98(param_3,*(undefined4 *)(local_18 + 0x28),*(undefined4 *)(local_18 + 8));
      }
      if (*param_1 == 2) {
        if (local_10 == 0) {
          uVar2 = *(undefined4 *)(local_14 + 0x138);
        }
        else {
          uVar2 = *(undefined4 *)(local_14 + 0x13c);
        }
        uVar2 = FUN_00027814(uVar2);
        *(undefined4 *)(local_18 + 0x24) = uVar2;
      }
      if (*param_1 == 0) {
        *param_1 = 1;
        iVar1 = FUN_00025b0c();
        param_1[3] = iVar1;
        FUN_00026b78(param_3,param_1[3]);
      }
    }
  }
  return 0;
}



/* ===== FUN_0001ea40 @ 0001ea40 size=184 ===== */

undefined4 FUN_0001ea40(int *param_1,undefined4 param_2,undefined4 param_3)

{
  printf((char *)(DAT_0001eb00 + 0x1ea78),DAT_0001eafc + 0x1ea70,0x3fb,DAT_0001eaf8 + 0x1ea64);
  if ((*param_1 == 1) || (*param_1 == 2)) {
    if (*param_1 != 1) {
      *param_1 = 1;
    }
  }
  else {
    FUN_000269fc(param_3,0x1c7);
    printf((char *)(DAT_0001eb0c + 0x1eac4),DAT_0001eb08 + 0x1eabc,0x3ff,DAT_0001eb04 + 0x1eab0);
  }
  return 0;
}



/* ===== FUN_0001eb10 @ 0001eb10 size=324 ===== */

undefined4 FUN_0001eb10(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[0x108];
  printf((char *)(DAT_0001ec5c + 0x1eb54),DAT_0001ec58 + 0x1eb4c,0x40d,DAT_0001ec54 + 0x1eb40);
  if ((*param_1 == 1) || (*param_1 == 2)) {
    if (*param_1 != 2) {
      if ((param_1[0x105] != 0) && (*(int *)(iVar2 + 0x138) != 0)) {
        iVar3 = param_1[0x105];
        uVar1 = FUN_00027814(*(undefined4 *)(iVar2 + 0x138));
        *(undefined4 *)(iVar3 + 0x24) = uVar1;
      }
      if ((param_1[0x106] != 0) && (*(int *)(iVar2 + 0x13c) != 0)) {
        iVar3 = param_1[0x106];
        uVar1 = FUN_00027814(*(undefined4 *)(iVar2 + 0x13c));
        *(undefined4 *)(iVar3 + 0x24) = uVar1;
      }
      *param_1 = 2;
    }
  }
  else {
    FUN_000269fc(param_3,0x1c7);
    printf((char *)(DAT_0001ec68 + 0x1eba0),DAT_0001ec64 + 0x1eb98,0x411,DAT_0001ec60 + 0x1eb8c);
  }
  return 0;
}



/* ===== FUN_0001ec6c @ 0001ec6c size=456 ===== */

undefined4 FUN_0001ec6c(undefined4 *param_1,int param_2)

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
  printf((char *)(DAT_0001ee3c + 0x1ed30),DAT_0001ee38 + 0x1ed28,0x425,DAT_0001ee34 + 0x1ed1c);
  snprintf(local_4c,0x3f,(char *)(DAT_0001ee44 + 0x1ed50),local_c,DAT_0001ee40 + 0x1ed44);
  snprintf(local_8c,0x3f,(char *)(DAT_0001ee4c + 0x1ed74),local_c,DAT_0001ee48 + 0x1ed68);
  iVar1 = FUN_0001cafc(local_4c,param_2 + 0x2e);
  if (iVar1 == 0) {
    iVar1 = FUN_0001cafc(local_8c,param_2 + 0x2e);
    if (iVar1 == 0) {
      FUN_0001e508(param_1,0);
      FUN_0001e508(param_1,1);
    }
    else {
      FUN_0001e508(param_1,1);
    }
  }
  else {
    FUN_0001e508(param_1,0);
  }
  if ((param_1[0x105] == 0) && (param_1[0x106] == 0)) {
    *param_1 = 0;
  }
  return 0;
}



/* ===== FUN_0001ee50 @ 0001ee50 size=856 ===== */

undefined4 FUN_0001ee50(int *param_1,int param_2,undefined4 param_3)

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
  FUN_000269fc(param_3,200);
  FUN_00026c54(param_3,0);
  FUN_00027298(param_3,DAT_0001f1a8 + 0x1eec0);
  iVar1 = FUN_00026a48(param_2,&local_18);
  if (iVar1 < 0) {
    FUN_000269fc(param_3,400);
    printf((char *)(DAT_0001f1b4 + 0x1ef10),DAT_0001f1b0 + 0x1ef08,0x448,DAT_0001f1ac + 0x1eefc);
    uVar2 = 0;
  }
  else {
    FUN_00026aa8(param_3,local_18);
    if (*param_1 != 0) {
      iVar1 = FUN_00026b18(param_2,&local_1c);
      if ((iVar1 < 0) || (param_1[3] != local_1c)) {
        printf((char *)(DAT_0001f1c0 + 0x1ef88),DAT_0001f1bc + 0x1ef80,0x44f,DAT_0001f1b8 + 0x1ef74)
        ;
        FUN_000269fc(param_3,0x1c6);
        return 0;
      }
      FUN_00026b78(param_3,local_1c);
    }
    if (local_c == 0) {
      if (*(int *)(param_2 + 4) != 0) {
        local_c = *(int *)(local_10 + 4);
        while ((local_c != 0 && (iVar1 = FUN_0001cafc(local_c,local_14), iVar1 == 0))) {
          local_c = *(int *)(local_c + 0x15c);
        }
        if (local_c == 0) {
          printf((char *)(DAT_0001f1d8 + 0x1f0a8),DAT_0001f1d4 + 0x1f0a0,0x463,
                 DAT_0001f1d0 + 0x1f094,local_14);
          FUN_000269fc(param_3,0x1c6);
          return 0;
        }
        FUN_0001c1ac(param_1,local_c);
      }
    }
    else {
      iVar1 = FUN_0001cafc(local_c,local_14);
      if (iVar1 == 0) {
        printf((char *)(DAT_0001f1cc + 0x1f004),DAT_0001f1c8 + 0x1effc,0x458,DAT_0001f1c4 + 0x1eff0,
               local_14,local_c);
        FUN_000269fc(param_3,0x1c3);
        return 0;
      }
    }
    switch(*(undefined4 *)(param_2 + 4)) {
    case 0:
      uVar2 = FUN_0001da24(param_1,param_2,param_3);
      break;
    case 1:
      uVar2 = FUN_0001dad4(param_1,param_2,param_3);
      break;
    case 2:
      uVar2 = FUN_0001e5ac(param_1,param_2,param_3);
      break;
    case 3:
      uVar2 = FUN_0001eb10(param_1,param_2,param_3);
      break;
    case 4:
    default:
      FUN_000269fc(param_3,0x1f5);
      uVar2 = 0;
      break;
    case 5:
      uVar2 = FUN_0001ea40(param_1,param_2,param_3);
      break;
    case 6:
      uVar2 = FUN_0001ec6c(param_1,param_2,param_3);
    }
  }
  return uVar2;
}



/* ===== FUN_0001f1dc @ 0001f1dc size=528 ===== */

int FUN_0001f1dc(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_c;
  
  if (*(int *)(param_1 + 0x410) != 0x3ff) {
    local_c = recv(*(int *)(param_1 + 4),(void *)(param_1 + 0x10 + *(int *)(param_1 + 0x410)),
                   0x3ff - *(int *)(param_1 + 0x410),0x40);
    if (local_c == 0) {
      printf((char *)(DAT_0001f3f4 + 0x1f268),DAT_0001f3f0 + 0x1f260,0x486,DAT_0001f3ec + 0x1f254);
      return -1;
    }
    if (local_c == -1) {
      iVar1 = FUN_0001bde8();
      if ((iVar1 != 0xb) && (iVar1 = FUN_0001bde8(), iVar1 != 4)) {
        uVar2 = FUN_0001bde8();
        uVar2 = FUN_0001be04(uVar2);
        printf((char *)(DAT_0001f400 + 0x1f2d4),DAT_0001f3fc + 0x1f2cc,0x48b,DAT_0001f3f8 + 0x1f2c0,
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
    iVar1 = FUN_00025d6c(param_2,param_1 + 0x10,*(undefined4 *)(param_1 + 0x410));
    if (iVar1 < 0) {
      printf((char *)(DAT_0001f40c + 0x1f378),DAT_0001f408 + 0x1f370,0x49a,DAT_0001f404 + 0x1f364);
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



/* ===== FUN_0001f410 @ 0001f410 size=268 ===== */

ssize_t FUN_0001f410(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_40c;
  undefined1 auStack_408 [1020];
  size_t local_c;
  
  local_40c = 0;
  memset(auStack_408,0,0x3fc);
  local_c = FUN_00026128(param_2,&local_40c,0x400);
  if ((int)local_c < 0) {
    printf((char *)(DAT_0001f524 + 0x1f494),DAT_0001f520 + 0x1f48c,0x4ad,DAT_0001f51c + 0x1f480);
    local_c = -1;
  }
  else {
    local_c = send(*(int *)(param_1 + 4),&local_40c,local_c,0);
    if (local_c == -1) {
      uVar1 = FUN_0001bde8();
      uVar1 = FUN_0001be04(uVar1);
      printf((char *)(DAT_0001f530 + 0x1f504),DAT_0001f52c + 0x1f4fc,0x4b3,DAT_0001f528 + 0x1f4f0,
             uVar1);
      local_c = -1;
    }
  }
  return local_c;
}



/* ===== FUN_0001f534 @ 0001f534 size=388 ===== */

ssize_t FUN_0001f534(int param_1,int param_2)

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
    iVar4 = FUN_0001bde8();
    if ((iVar4 == 0xb) || (iVar4 = FUN_0001bde8(), iVar4 == 4)) {
      local_18 = 0;
    }
    else {
      uVar5 = FUN_0001bde8();
      uVar5 = FUN_0001be04(uVar5);
      printf((char *)(DAT_0001f6c0 + 0x1f604),DAT_0001f6bc + 0x1f5fc,0x4c6,DAT_0001f6b8 + 0x1f5f0,
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
      printf((char *)(DAT_0001f6cc + 0x1f68c),DAT_0001f6c8 + 0x1f684,0x4d0,DAT_0001f6c4 + 0x1f678,
             pcVar6,(uint)uVar1,(uint)uVar3);
      uVar3 = ntohs(sStack_28.sa_data._0_2_);
      *(uint16_t *)(local_14 + 0x1c) = uVar3;
    }
  }
  return local_18;
}



/* ===== FUN_0001f6d0 @ 0001f6d0 size=388 ===== */

ssize_t FUN_0001f6d0(int param_1,int param_2)

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
    iVar4 = FUN_0001bde8();
    if ((iVar4 == 0xb) || (iVar4 = FUN_0001bde8(), iVar4 == 4)) {
      local_18 = 0;
    }
    else {
      uVar5 = FUN_0001bde8();
      uVar5 = FUN_0001be04(uVar5);
      printf((char *)(DAT_0001f85c + 0x1f7a0),DAT_0001f858 + 0x1f798,0x4e3,DAT_0001f854 + 0x1f78c,
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
      printf((char *)(DAT_0001f868 + 0x1f828),DAT_0001f864 + 0x1f820,0x4ed,DAT_0001f860 + 0x1f814,
             pcVar6,(uint)uVar1,(uint)uVar3);
      uVar3 = ntohs(sStack_28.sa_data._0_2_);
      *(uint16_t *)(local_14 + 0x1e) = uVar3;
    }
  }
  return local_18;
}



/* ===== FUN_0001f86c @ 0001f86c size=740 ===== */

size_t FUN_0001f86c(int *param_1,void *param_2,size_t param_3)

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
      iVar1 = FUN_0001bde8();
      if ((iVar1 == 0xb) || (iVar1 = FUN_0001bde8(), iVar1 == 4)) {
        param_3 = 0;
      }
      else {
        pcVar2 = inet_ntoa((in_addr)param_1[8]);
        uVar3 = FUN_0001bde8();
        uVar3 = FUN_0001be04(uVar3);
        printf((char *)(DAT_0001fb70 + 0x1fb30),DAT_0001fb6c + 0x1fb28,0x528,DAT_0001fb68 + 0x1fb1c,
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
      iVar1 = FUN_0001bde8();
      if ((iVar1 == 0xb) || (iVar1 = FUN_0001bde8(), iVar1 == 4)) {
        param_3 = 0;
      }
      else {
        pcVar2 = inet_ntoa((in_addr)param_1[8]);
        uVar3 = FUN_0001bde8();
        uVar3 = FUN_0001be04(uVar3);
        printf((char *)(DAT_0001fb58 + 0x1f97c),DAT_0001fb54 + 0x1f974,0x50d,DAT_0001fb50 + 0x1f968,
               pcVar2,uVar3);
        param_3 = 0xffffffff;
      }
    }
    else {
      local_18 = send(local_14,param_2,param_3,0);
      if (local_18 == -1) {
        iVar1 = FUN_0001bde8();
        if ((iVar1 == 0xb) || (iVar1 = FUN_0001bde8(), iVar1 == 4)) {
          param_3 = 0;
        }
        else {
          pcVar2 = inet_ntoa((in_addr)param_1[8]);
          uVar3 = FUN_0001bde8();
          uVar3 = FUN_0001be04(uVar3);
          printf((char *)(DAT_0001fb64 + 0x1fa24),DAT_0001fb60 + 0x1fa1c,0x516,
                 DAT_0001fb5c + 0x1fa10,param_3,pcVar2,uVar3);
          param_3 = 0xffffffff;
        }
      }
    }
  }
  return param_3;
}



/* ===== FUN_0001fb74 @ 0001fb74 size=348 ===== */

int FUN_0001fb74(int param_1)

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
    iVar3 = FUN_000276d0(local_1c,*(undefined4 *)(local_20 + 0x24));
    if (iVar3 < 1) {
      return local_14;
    }
    FUN_00027620(local_1c,*(undefined4 *)(local_20 + 0x24),&local_24,&local_28);
    if (0 < *local_28) {
      puVar4 = (uint32_t *)(local_24 + 8);
      uVar1 = htonl(*(uint32_t *)(local_20 + 0x28));
      *puVar4 = uVar1;
      iVar3 = FUN_0001f86c(local_20,local_24,*local_28);
      if (iVar3 != *local_28) {
        return local_14;
      }
      *(int *)(local_20 + 0x2c) = *(int *)(local_20 + 0x2c) + 1;
      *(int *)(local_20 + 0x30) = *(int *)(local_20 + 0x30) + *local_28 + -0xc;
    }
    uVar2 = FUN_0002777c(local_1c,*(undefined4 *)(local_20 + 0x24));
    *(undefined4 *)(local_20 + 0x24) = uVar2;
    local_14 = local_14 + 1;
  } while( true );
}



/* ===== FUN_0001fcd0 @ 0001fcd0 size=348 ===== */

int FUN_0001fcd0(int param_1)

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
    iVar3 = FUN_000276d0(local_1c,*(undefined4 *)(local_20 + 0x24));
    if (iVar3 < 1) {
      return local_14;
    }
    FUN_00027620(local_1c,*(undefined4 *)(local_20 + 0x24),&local_24,&local_28);
    if (0 < *local_28) {
      puVar4 = (uint32_t *)(local_24 + 8);
      uVar1 = htonl(*(uint32_t *)(local_20 + 0x28));
      *puVar4 = uVar1;
      iVar3 = FUN_0001f86c(local_20,local_24,*local_28);
      if (iVar3 != *local_28) {
        return local_14;
      }
      *(int *)(local_20 + 0x2c) = *(int *)(local_20 + 0x2c) + 1;
      *(int *)(local_20 + 0x30) = *(int *)(local_20 + 0x30) + *local_28 + -0xc;
    }
    uVar2 = FUN_0002777c(local_1c,*(undefined4 *)(local_20 + 0x24));
    *(undefined4 *)(local_20 + 0x24) = uVar2;
    local_14 = local_14 + 1;
  } while( true );
}



/* ===== FUN_0001fe2c @ 0001fe2c size=2952 ===== */

undefined4 FUN_0001fe2c(uint *param_1)

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
           (iVar3 = FUN_000276d0(*(undefined4 *)(local_2c + 0x138),local_30[9]), 0 < iVar3)) {
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
           (iVar3 = FUN_000276d0(*(undefined4 *)(local_2c + 0x13c),local_34[9]), 0 < iVar3)) {
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
      printf((char *)(DAT_000209bc + 0x20468),DAT_000209b8 + 0x20460,0x5c7,DAT_000209b4 + 0x20454,
             pcVar2);
      uVar4 = 0xffffffff;
    }
    else if (local_38 == 0) {
      uVar4 = 0;
    }
    else {
      if ((fStack_cc.fds_bits[*local_20 >> 5] >> (*local_20 & 0x1f) & 1U) != 0) {
        FUN_0001c908(local_20);
      }
      local_c = (int *)local_20[3];
LAB_00020998:
      piVar1 = local_c;
      if (local_c != (int *)0x0) {
        local_1c = local_c;
        local_3c = local_c[0x108];
        local_40 = (int *)local_c[0x105];
        local_44 = (int *)local_c[0x106];
        local_c = (int *)local_c[0x109];
        if ((fStack_cc.fds_bits[(uint)piVar1[1] >> 5] >> (piVar1[1] & 0x1fU) & 1U) != 0)
        goto LAB_00020544;
        goto LAB_0002068c;
      }
      uVar4 = 1;
    }
  }
  return uVar4;
LAB_00020544:
  do {
    FUN_00025924(local_2a4);
    FUN_00025924(auStack_1f8);
    local_38 = FUN_0001f1dc(local_1c,local_2a4);
    if (local_38 == 0) break;
    if (local_38 < 0) {
      FUN_0001ca50(local_1c);
      local_1c = (int *)0x0;
      break;
    }
    if (local_2a4[0] == 2) {
      FUN_00025960(local_2a4);
    }
    else if (local_2a4[0] == 0) {
      local_38 = FUN_0001ee50(local_1c,local_2a4,auStack_1f8);
      if (local_38 < 0) {
        printf((char *)(DAT_000209d4 + 0x2063c),DAT_000209d0 + 0x20634,0x5f8,DAT_000209cc + 0x20628)
        ;
      }
      else {
        FUN_0001f410(local_1c,auStack_1f8);
      }
      FUN_00025960(local_2a4);
      FUN_00025960(auStack_1f8);
    }
    else {
      printf((char *)(DAT_000209c8 + 0x205e8),DAT_000209c4 + 0x205e0,0x5f1,DAT_000209c0 + 0x205d4);
      FUN_00025960(local_2a4);
    }
  } while (local_1c != (int *)0x0);
  if (local_1c != (int *)0x0) {
LAB_0002068c:
    if (*local_1c == 2) {
      if ((local_40 != (int *)0x0) &&
         (iVar3 = FUN_000276d0(*(undefined4 *)(local_3c + 0x138),local_40[9]), 0 < iVar3)) {
        if ((*local_40 == 0) ||
           ((fStack_14c.fds_bits[(uint)local_40[1] >> 5] >> (local_40[1] & 0x1fU) & 1U) == 0)) {
          if ((*local_40 == 0) &&
             ((fStack_14c.fds_bits[(uint)local_40[4] >> 5] >> (local_40[4] & 0x1fU) & 1U) != 0)) {
            FUN_0001fb74(local_1c);
          }
        }
        else {
          FUN_0001fb74(local_1c);
        }
      }
      if ((local_44 != (int *)0x0) &&
         (iVar3 = FUN_000276d0(*(undefined4 *)(local_3c + 0x13c),local_44[9]), 0 < iVar3)) {
        if ((*local_44 == 0) ||
           ((fStack_14c.fds_bits[(uint)local_44[1] >> 5] >> (local_44[1] & 0x1fU) & 1U) == 0)) {
          if ((*local_44 == 0) &&
             ((fStack_14c.fds_bits[(uint)local_44[4] >> 5] >> (local_44[4] & 0x1fU) & 1U) != 0)) {
            FUN_0001fcd0(local_1c);
          }
        }
        else {
          FUN_0001fcd0(local_1c);
        }
      }
      if ((local_40 != (int *)0x0) && (*local_40 == 0)) {
        if ((fStack_cc.fds_bits[(uint)local_40[4] >> 5] >> (local_40[4] & 0x1fU) & 1U) != 0) {
          FUN_0001f534(local_1c,0);
        }
        if ((fStack_cc.fds_bits[(uint)local_40[5] >> 5] >> (local_40[5] & 0x1fU) & 1U) != 0) {
          FUN_0001f6d0(local_1c,0);
        }
      }
      if ((local_44 != (int *)0x0) && (*local_44 == 0)) {
        if ((fStack_cc.fds_bits[(uint)local_44[4] >> 5] >> (local_44[4] & 0x1fU) & 1U) != 0) {
          FUN_0001f534(local_1c,1);
        }
        if ((fStack_cc.fds_bits[(uint)local_44[5] >> 5] >> (local_44[5] & 0x1fU) & 1U) != 0) {
          FUN_0001f6d0(local_1c,1);
        }
      }
    }
  }
  goto LAB_00020998;
}



/* ===== FUN_000209d8 @ 000209d8 size=1940 ===== */

int FUN_000209d8(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
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
    local_1c = FUN_00027814(local_30);
    for (local_18 = 0; local_18 < 600; local_18 = local_18 + 1) {
      iVar3 = FUN_0002777c(local_30,local_1c);
      iVar4 = FUN_000277d8(local_30);
      if (iVar3 == iVar4) {
        FUN_000278f8(local_30);
      }
      FUN_00027620(local_30,local_1c,aiStack_9a0 + local_18,auStack_1c64 + local_18);
      aiStack_1304[local_18] = 0x5b0;
      local_1c = FUN_0002777c(local_30,local_1c);
    }
    aiStack_9a0[local_18] = 0;
    aiStack_1304[local_18] = 0;
    for (local_14 = *(int **)(local_2c + 0x154); local_14 != (int *)0x0;
        local_14 = (int *)local_14[0x10b]) {
      local_34 = local_14[0x105];
      if (((*local_14 == 2) && (local_34 != 0)) &&
         ((iVar3 = FUN_000276d0(local_30,*(undefined4 *)(local_34 + 0x24)), iVar3 == 0 &&
          (iVar4 = *(int *)(local_34 + 0x24), iVar3 = FUN_00027814(local_30), iVar4 != iVar3)))) {
        uVar1 = FUN_000277d8(local_30);
        *(undefined4 *)(local_34 + 0x24) = uVar1;
        pcVar2 = inet_ntoa((in_addr)local_14[2]);
        printf((char *)(DAT_00021174 + 0x20c80),DAT_00021170 + 0x20c78,0x658,DAT_0002116c + 0x20c6c,
               pcVar2);
      }
    }
    if (*(int *)(local_2c + 0x40) == 1) {
      if (((*(int *)(local_2c + 0xcc) == 0) || (*(int *)(local_2c + 0xcc) == 0)) &&
         (iVar3 = FUN_00028488(param_2,param_3,local_2c + 0x48), iVar3 < 0)) {
        printf((char *)(DAT_00021180 + 0x20d30),DAT_0002117c + 0x20d28,0x660,DAT_00021178 + 0x20d1c)
        ;
      }
    }
    else if ((*(int *)(local_2c + 0x40) == 2) &&
            ((((*(int *)(local_2c + 0x110) == 0 || (*(int *)(local_2c + 0x110) == 0)) ||
              (*(int *)(local_2c + 0x108) == 0)) &&
             (iVar3 = FUN_000284c0(param_2,param_3,local_2c + 0x48), iVar3 < 0)))) {
      printf((char *)(DAT_0002118c + 0x20db8),DAT_00021188 + 0x20db0,0x66a,DAT_00021184 + 0x20da4);
    }
    local_24 = 0;
    local_20 = 0;
    while( true ) {
      if (((param_3 <= local_24) || (aiStack_9a0[local_20] == 0)) || (aiStack_1304[local_20] < 1))
      goto LAB_00021058;
      local_38 = 0;
      local_1c68 = 0;
      local_38 = FUN_00027c40(param_2 + local_24,param_3 - local_24,&local_1c68);
      if (local_38 == 0) break;
      if (*(int *)(local_2c + 0x40) == 1) {
        local_28 = FUN_00028cb8(local_2c + 0x118,local_38,local_1c68,param_6,param_5,param_6,
                                aiStack_9a0 + local_20,aiStack_1304 + local_20);
        if (local_28 < 1) {
          printf((char *)(DAT_000211a4 + 0x20f18),DAT_000211a0 + 0x20f10,0x685,
                 DAT_0002119c + 0x20f04,local_28);
          return -1;
        }
      }
      else if (*(int *)(local_2c + 0x40) == 2) {
        local_28 = FUN_00029254(local_2c + 0x118,local_38,local_1c68,param_6,param_5,param_6,
                                aiStack_9a0 + local_20,aiStack_1304 + local_20);
        if (local_28 < 1) {
          printf((char *)(DAT_000211b0 + 0x20fb4),DAT_000211ac + 0x20fac,0x68c,
                 DAT_000211a8 + 0x20fa0,local_28);
          return -1;
        }
      }
      local_20 = local_20 + local_28;
      local_24 = (local_38 - param_2) + local_1c68;
    }
    printf((char *)(DAT_00021198 + 0x20e64),DAT_00021194 + 0x20e5c,0x67c,DAT_00021190 + 0x20e50);
LAB_00021058:
    for (local_18 = 0; local_18 < local_20; local_18 = local_18 + 1) {
      *(int *)auStack_1c64[local_18] = aiStack_1304[local_18];
      FUN_00027850(local_30);
    }
    for (local_14 = *(int **)(local_2c + 0x154); local_14 != (int *)0x0;
        local_14 = (int *)local_14[0x10b]) {
      local_3c = local_14[0x105];
      if ((*local_14 == 2) && (local_3c != 0)) {
        FUN_00022068(local_3c,*(undefined4 *)(local_2c + 0x144),*(undefined4 *)(local_2c + 0x140),
                     *(undefined4 *)(local_2c + 0x144),param_5,param_6,
                     *(undefined4 *)(local_2c + 0x120));
        FUN_0001fb74(local_14);
      }
    }
  }
  return param_3;
}



/* ===== FUN_000211b4 @ 000211b4 size=1968 ===== */

int FUN_000211b4(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 param_5,
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
    local_1c = FUN_00027814(local_30);
    for (local_18 = 0; local_18 < 600; local_18 = local_18 + 1) {
      iVar3 = FUN_0002777c(local_30,local_1c);
      iVar4 = FUN_000277d8(local_30);
      if (iVar3 == iVar4) {
        FUN_000278f8(local_30);
      }
      FUN_00027620(local_30,local_1c,aiStack_9a0 + local_18,auStack_1c64 + local_18);
      aiStack_1304[local_18] = 0x5b0;
      local_1c = FUN_0002777c(local_30,local_1c);
    }
    aiStack_9a0[local_18] = 0;
    aiStack_1304[local_18] = 0;
    for (local_14 = *(int **)(local_2c + 0x154); local_14 != (int *)0x0;
        local_14 = (int *)local_14[0x10b]) {
      local_34 = local_14[0x105];
      if (((*local_14 == 2) && (local_34 != 0)) &&
         ((iVar3 = FUN_000276d0(local_30,*(undefined4 *)(local_34 + 0x24)), iVar3 == 0 &&
          (iVar4 = *(int *)(local_34 + 0x24), iVar3 = FUN_00027814(local_30), iVar4 != iVar3)))) {
        uVar1 = FUN_000277d8(local_30);
        *(undefined4 *)(local_34 + 0x24) = uVar1;
        pcVar2 = inet_ntoa((in_addr)local_14[2]);
        printf((char *)(DAT_0002196c + 0x21468),DAT_00021968 + 0x21460,0x6c9,DAT_00021964 + 0x21454,
               pcVar2);
      }
    }
    if (*(int *)(local_2c + 0x40) == 1) {
      if (((*(int *)(local_2c + 0xcc) == 0) || (*(int *)(local_2c + 0xcc) == 0)) &&
         (iVar3 = FUN_00028488(param_3,param_4,local_2c + 0x48), iVar3 < 0)) {
        printf((char *)(DAT_00021978 + 0x21518),DAT_00021974 + 0x21510,0x6d1,DAT_00021970 + 0x21504)
        ;
      }
    }
    else if ((*(int *)(local_2c + 0x40) == 2) &&
            ((((*(int *)(local_2c + 0x110) == 0 || (*(int *)(local_2c + 0x110) == 0)) ||
              (*(int *)(local_2c + 0x108) == 0)) &&
             (iVar3 = FUN_000284c0(param_3,param_4,local_2c + 0x48), iVar3 < 0)))) {
      printf((char *)(DAT_00021984 + 0x215a0),DAT_00021980 + 0x21598,0x6db,DAT_0002197c + 0x2158c);
    }
    local_24 = 0;
    local_20 = 0;
    while( true ) {
      if (((param_4 <= local_24) || (aiStack_9a0[local_20] == 0)) || (aiStack_1304[local_20] < 1))
      goto LAB_00021840;
      local_38 = 0;
      local_1c68 = 0;
      local_38 = FUN_00027c40(param_3 + local_24,param_4 - local_24,&local_1c68);
      if (local_38 == 0) break;
      if (*(int *)(local_2c + 0x40) == 1) {
        local_28 = FUN_00028cb8(local_2c + 0x118,local_38,local_1c68,param_6,param_5,param_6,
                                aiStack_9a0 + local_20,aiStack_1304 + local_20);
        if (local_28 < 1) {
          printf((char *)(DAT_0002199c + 0x21700),DAT_00021998 + 0x216f8,0x6f6,
                 DAT_00021994 + 0x216ec,local_28);
          return -1;
        }
      }
      else if (*(int *)(local_2c + 0x40) == 2) {
        local_28 = FUN_00029254(local_2c + 0x118,local_38,local_1c68,param_6,param_5,param_6,
                                aiStack_9a0 + local_20,aiStack_1304 + local_20);
        if (local_28 < 1) {
          printf((char *)(DAT_000219a8 + 0x2179c),DAT_000219a4 + 0x21794,0x6fd,
                 DAT_000219a0 + 0x21788,local_28);
          return -1;
        }
      }
      local_20 = local_20 + local_28;
      local_24 = (local_38 - param_3) + local_1c68;
    }
    printf((char *)(DAT_00021990 + 0x2164c),DAT_0002198c + 0x21644,0x6ed,DAT_00021988 + 0x21638);
LAB_00021840:
    for (local_18 = 0; local_18 < local_20; local_18 = local_18 + 1) {
      *(int *)auStack_1c64[local_18] = aiStack_1304[local_18];
      FUN_00027850(local_30);
    }
    for (local_14 = *(int **)(local_2c + 0x154); local_14 != (int *)0x0;
        local_14 = (int *)local_14[0x10b]) {
      local_3c = local_14[0x105];
      if ((*local_14 == 2) && (local_3c != 0)) {
        FUN_00022068(local_3c,*(undefined4 *)(local_2c + 0x144),*(undefined4 *)(local_2c + 0x140),
                     *(undefined4 *)(local_2c + 0x144),param_5,param_6,
                     *(undefined4 *)(local_2c + 0x120));
        FUN_0001fb74(local_14);
      }
    }
    FUN_0001fe2c(param_1);
  }
  return param_4;
}



/* ===== FUN_000219ac @ 000219ac size=1140 ===== */

undefined4
FUN_000219ac(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
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
    local_1c = FUN_00027814(local_28);
    for (local_18 = 0; local_18 < 0x14; local_18 = local_18 + 1) {
      iVar3 = FUN_0002777c(local_28,local_1c);
      iVar4 = FUN_000277d8(local_28);
      if (iVar3 == iVar4) {
        FUN_000278f8(local_28);
      }
      FUN_00027620(local_28,local_1c,auStack_84 + local_18,auStack_128 + local_18);
      auStack_d8[local_18] = 0x5b0;
      local_1c = FUN_0002777c(local_28,local_1c);
    }
    auStack_84[local_18] = 0;
    auStack_d8[local_18] = 0;
    for (local_14 = *(int **)(local_24 + 0x154); local_14 != (int *)0x0;
        local_14 = (int *)local_14[0x10b]) {
      local_2c = local_14[0x106];
      if (((*local_14 == 2) && (local_2c != 0)) &&
         ((iVar3 = FUN_000276d0(local_28,*(undefined4 *)(local_2c + 0x24)), iVar3 == 0 &&
          (iVar4 = *(int *)(local_2c + 0x24), iVar3 = FUN_00027814(local_28), iVar4 != iVar3)))) {
        uVar1 = FUN_000277d8(local_28);
        *(undefined4 *)(local_2c + 0x24) = uVar1;
        pcVar2 = inet_ntoa((in_addr)local_14[2]);
        printf((char *)(DAT_00021e28 + 0x21bf4),DAT_00021e24 + 0x21bec,0x73c,DAT_00021e20 + 0x21be0,
               pcVar2);
      }
    }
    iVar3 = *(int *)(local_24 + 0x44);
    if (0x4000 < iVar3) {
      if (iVar3 < 0x4003) {
        local_20 = FUN_00029828(local_24 + 0x128,param_2,param_3,param_6,param_5,param_6,auStack_84,
                                auStack_d8);
        if (local_20 < 1) {
          printf((char *)(DAT_00021e34 + 0x21ca4),DAT_00021e30 + 0x21c9c,0x745,
                 DAT_00021e2c + 0x21c90,local_20);
          return 0xffffffff;
        }
      }
      else if (iVar3 == 0x4003) {
        local_20 = FUN_00029b40(local_24 + 0x128,param_2,param_3,param_6,param_5,param_6,auStack_84,
                                auStack_d8);
        if (local_20 < 1) {
          printf((char *)(DAT_00021e40 + 0x21d10),DAT_00021e3c + 0x21d08,0x74c,
                 DAT_00021e38 + 0x21cfc,local_20);
          return 0xffffffff;
        }
      }
    }
    for (local_18 = 0; local_18 < local_20; local_18 = local_18 + 1) {
      *(undefined4 *)auStack_128[local_18] = auStack_d8[local_18];
      FUN_00027850(local_28);
    }
    for (local_14 = *(int **)(local_24 + 0x154); local_14 != (int *)0x0;
        local_14 = (int *)local_14[0x10b]) {
      local_30 = local_14[0x106];
      if ((*local_14 == 2) && (local_30 != 0)) {
        FUN_00022068(local_30,*(undefined4 *)(local_24 + 0x14c),*(undefined4 *)(local_24 + 0x148),
                     *(undefined4 *)(local_24 + 0x14c),param_5,param_6,
                     *(undefined4 *)(local_24 + 0x130));
        FUN_0001fcd0(local_14);
      }
    }
  }
  return param_3;
}



/* ===== FUN_00021e44 @ 00021e44 size=148 ===== */

longlong FUN_00021e44(void)

{
  longlong lVar1;
  timespec local_18;
  
  clock_gettime(1,&local_18);
  lVar1 = FUN_00029d54(local_18.tv_nsec,local_18.tv_nsec >> 0x1f,1000,0);
  return lVar1 + CONCAT44((local_18.tv_sec >> 0x1f) * 1000000 +
                          (int)((ulonglong)(uint)local_18.tv_sec * 1000000 >> 0x20),
                          (int)((ulonglong)(uint)local_18.tv_sec * 1000000));
}



/* ===== FUN_00021ed8 @ 00021ed8 size=120 ===== */

undefined8 FUN_00021ed8(void)

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



/* ===== FUN_00021f50 @ 00021f50 size=48 ===== */

longlong FUN_00021f50(void)

{
  longlong lVar1;
  
  lVar1 = FUN_00021ed8();
  return lVar1 + CONCAT44(DAT_00021f84,DAT_00021f80);
}



/* ===== FUN_00021f88 @ 00021f88 size=112 ===== */

undefined4
FUN_00021f88(int param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,int param_6)

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



/* ===== FUN_00022068 @ 00022068 size=1168 ===== */

size_t FUN_00022068(int *param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,
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
    uVar6 = (int)((ulonglong)*(undefined8 *)(param_1 + 0xe) >> 0x20) + DAT_000223d4 +
            (uint)CARRY4(uVar8,DAT_000223d0);
    bVar7 = uVar6 <= param_6;
    if (param_6 == uVar6) {
      bVar7 = uVar8 + DAT_000223d0 <= param_5;
    }
    if (!bVar7) {
      return 0;
    }
  }
  uStack_3c = uStack_48;
  local_38 = local_44;
  local_14 = FUN_00029d54(param_3 + param_5,param_4 + param_6 + (uint)CARRY4(param_3,param_5),
                          1000000,0);
  FUN_00029d54(param_3 + param_5,param_4 + param_6 + (uint)CARRY4(param_3,param_5),1000000,0);
  local_18 = FUN_00029d54(0,extraout_r2,1000000,0);
  local_1c = FUN_00029d54((int)((ulonglong)param_7 * (ulonglong)param_5),
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
      iVar2 = FUN_0001bde8();
      if ((iVar2 != 0xb) && (iVar2 = FUN_0001bde8(), iVar2 != 4)) {
        pcVar3 = inet_ntoa((in_addr)param_1[8]);
        uVar4 = FUN_0001bde8();
        uVar4 = FUN_0001be04(uVar4);
        printf((char *)(DAT_000223ec + 0x224ec),DAT_000223e8 + 0x224e4,0x7f0,DAT_000223e4 + 0x224d8,
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
      iVar2 = FUN_0001bde8();
      if ((iVar2 != 0xb) && (iVar2 = FUN_0001bde8(), iVar2 != 4)) {
        pcVar3 = inet_ntoa((in_addr)param_1[8]);
        uVar4 = FUN_0001bde8();
        uVar4 = FUN_0001be04(uVar4);
        printf((char *)(DAT_000223e0 + 0x223c0),DAT_000223dc + 0x223b8,0x7de,DAT_000223d8 + 0x223ac,
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



/* ===== FUN_00022518 @ 00022518 size=68 ===== */

void * FUN_00022518(size_t param_1)

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



/* ===== FUN_0002255c @ 0002255c size=48 ===== */

void FUN_0002255c(void *param_1)

{
  if (param_1 != (void *)0x0) {
    free(param_1);
  }
  return;
}



/* ===== FUN_0002258c @ 0002258c size=104 ===== */

void * FUN_0002258c(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = calloc(1,param_2);
  if ((__dest != (void *)0x0) && (param_1 != (void *)0x0)) {
    memcpy(__dest,param_1,param_2);
  }
  return __dest;
}



/* ===== FUN_000225f4 @ 000225f4 size=120 ===== */

void * FUN_000225f4(char *param_1)

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



/* ===== FUN_0002266c @ 0002266c size=172 ===== */

undefined4 FUN_0002266c(int param_1,int param_2,int param_3)

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



/* ===== FUN_00022718 @ 00022718 size=204 ===== */

undefined4 FUN_00022718(int param_1,int param_2,char *param_3)

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



/* ===== FUN_000227e4 @ 000227e4 size=928 ===== */

int FUN_000227e4(byte *param_1,int *param_2)

{
  byte *__src;
  int iVar1;
  int iVar2;
  size_t local_1c;
  byte *local_18;
  byte *local_14;
  
  iVar2 = DAT_00022b84 + 0x22804;
  local_14 = param_1;
  iVar1 = FUN_00022718(DAT_00022b88 + 0x2281c,3,param_1);
  *param_2 = iVar1;
  if (*param_2 == 2) {
    printf((char *)(DAT_00022b94 + 0x22868),DAT_00022b90 + 0x22860,0xaa,DAT_00022b8c + 0x22854,
           param_1);
    iVar1 = -1;
  }
  else {
    *(undefined2 *)(param_2 + 1) = 0;
    *(undefined1 *)((int)param_2 + 6) = 0;
    *(undefined1 *)((int)param_2 + 0x26) = 0;
    for (; ((*(ushort *)(**(int **)(iVar2 + DAT_00022b98) + (uint)*local_14 * 2) & 2) != 0 ||
           (*local_14 == 0x3a)); local_14 = local_14 + 1) {
    }
    if ((*local_14 == 0x2f) && (local_14[1] == 0x2f)) {
      local_14 = local_14 + 2;
      for (local_18 = local_14;
          (((*(ushort *)(**(int **)(iVar2 + DAT_00022b98) + (uint)*local_18 * 2) & 0x80) != 0 &&
           (*local_18 != 0x3a)) && (*local_18 != 0x2f)); local_18 = local_18 + 1) {
      }
      if (*local_18 == 0x3a) {
        iVar1 = sscanf((char *)(local_18 + 1),(char *)(DAT_00022ba8 + 0x229cc),&local_1c);
        if (iVar1 != 1) {
          printf((char *)(DAT_00022bb4 + 0x22a04),DAT_00022bb0 + 0x229fc,0xbc,DAT_00022bac + 0x229f0
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
             (*(ushort *)(**(int **)(iVar2 + DAT_00022b98) + (uint)*local_18 * 2) & 0x80) != 0 &&
             (*local_18 != 0x2f)); local_18 = local_18 + 1) {
      }
      if (*local_18 == 0x2f) {
        local_14 = local_18;
        while ((*(ushort *)(**(int **)(iVar2 + DAT_00022b98) + (uint)*local_18 * 2) & 0x80) != 0) {
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
      printf((char *)(DAT_00022ba4 + 0x2292c),DAT_00022ba0 + 0x22924,0xb3,DAT_00022b9c + 0x22918,
             param_1);
      iVar1 = -1;
    }
  }
  return iVar1;
}



/* ===== FUN_00022bb8 @ 00022bb8 size=256 ===== */

size_t FUN_00022bb8(undefined4 *param_1,char *param_2,size_t param_3)

{
  undefined4 uVar1;
  size_t sVar2;
  
  if (*(short *)(param_1 + 1) == 0) {
    uVar1 = FUN_0002266c(DAT_00022cc0 + 0x22c68,3,*param_1);
    snprintf(param_2,param_3,(char *)(DAT_00022cc4 + 0x22c98),uVar1,(int)param_1 + 6,
             (int)param_1 + 0x26);
  }
  else {
    uVar1 = FUN_0002266c(DAT_00022cb8 + 0x22c00,3,*param_1);
    snprintf(param_2,param_3,(char *)(DAT_00022cbc + 0x22c3c),uVar1,(int)param_1 + 6,
             (uint)*(ushort *)(param_1 + 1),(int)param_1 + 0x26);
  }
  sVar2 = strlen(param_2);
  return sVar2;
}



/* ===== FUN_00022cc8 @ 00022cc8 size=788 ===== */

undefined4 FUN_00022cc8(undefined4 *param_1,byte *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int local_18;
  byte *local_14;
  
  iVar2 = DAT_00022fdc + 0x22ce8;
  local_14 = param_2;
  local_18 = FUN_00022718(DAT_00022fe0 + 0x22d00,0xc,param_2);
  if (local_18 == 0xb) {
    local_18 = FUN_00022718(DAT_00022ff8 + 0x22e68,2,local_14);
    if (local_18 == 1) {
      if (*local_14 == 0x24) {
        *param_1 = 2;
        *(byte *)(param_1 + 1) = local_14[1];
        *(undefined2 *)((int)param_1 + 6) = *(undefined2 *)(local_14 + 2);
        *(undefined1 *)(param_1 + 2) = 0;
        uVar1 = 0;
      }
      else {
        printf((char *)(DAT_00023014 + 0x22f8c),DAT_00023010 + 0x22f84,0x10c,DAT_0002300c + 0x22f78,
               param_2);
        uVar1 = 0xffffffff;
      }
    }
    else {
      *param_1 = 1;
      param_1[1] = local_18;
      while ((*(ushort *)(**(int **)(iVar2 + DAT_00022fe4) + (uint)*local_14 * 2) & 0x80) != 0) {
        local_14 = local_14 + 1;
      }
      local_14 = local_14 + 1;
      iVar2 = sscanf((char *)local_14,(char *)(DAT_00022ffc + 0x22ef8),&local_18);
      if (iVar2 == 1) {
        param_1[2] = local_18;
        uVar1 = 0;
      }
      else {
        printf((char *)(DAT_00023008 + 0x22f34),DAT_00023004 + 0x22f2c,0x104,DAT_00023000 + 0x22f20,
               param_2);
        uVar1 = 0xffffffff;
      }
    }
  }
  else {
    *param_1 = 0;
    param_1[1] = local_18;
    while ((*(ushort *)(**(int **)(iVar2 + DAT_00022fe4) + (uint)*local_14 * 2) & 0x80) != 0) {
      local_14 = local_14 + 1;
    }
    local_14 = local_14 + 1;
    local_18 = FUN_000227e4(local_14,param_1 + 2);
    if (local_18 < 1) {
      uVar1 = 0xffffffff;
    }
    else {
      while ((*(ushort *)(**(int **)(iVar2 + DAT_00022fe4) + (uint)*local_14 * 2) & 0x80) != 0) {
        local_14 = local_14 + 1;
      }
      local_14 = local_14 + 1;
      local_18 = FUN_00022718(DAT_00022fe8 + 0x22e04,2,local_14);
      if (local_18 == 1) {
        printf((char *)(DAT_00022ff4 + 0x22e44),DAT_00022ff0 + 0x22e3c,0xf7,DAT_00022fec + 0x22e30,
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



/* ===== FUN_00023018 @ 00023018 size=536 ===== */

char * FUN_00023018(int *param_1,char *param_2,size_t param_3)

{
  undefined4 uVar1;
  size_t sVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  
  if (*param_1 == 0) {
    uVar1 = FUN_0002266c(DAT_00023230 + 0x23068,0xc,param_1[1]);
    snprintf(param_2,param_3,(char *)(DAT_00023234 + 0x2307c),uVar1);
    sVar2 = strlen(param_2);
    pcVar5 = param_2 + sVar2;
    iVar6 = param_3 - sVar2;
    if (iVar6 < 2) {
      pcVar5 = pcVar5 + -(int)param_2;
    }
    else {
      iVar3 = FUN_00022bb8(param_1 + 2,pcVar5,iVar6);
      pcVar5 = pcVar5 + iVar3;
      if (iVar6 - iVar3 < 2) {
        pcVar5 = pcVar5 + -(int)param_2;
      }
      else {
        uVar1 = FUN_0002266c(DAT_00023238 + 0x23148,2,param_1[0x1c]);
        snprintf(pcVar5,iVar6 - iVar3,(char *)(DAT_0002323c + 0x2315c),uVar1);
        sVar2 = strlen(pcVar5);
        pcVar5 = pcVar5 + (sVar2 - (int)param_2);
      }
    }
  }
  else if (*param_1 == 1) {
    uVar1 = FUN_0002266c(DAT_00023240 + 0x231bc,2,param_1[1]);
    iVar6 = param_1[2];
    uVar4 = FUN_0002266c(DAT_00023244 + 0x231e8,0x2b,param_1[2]);
    snprintf(param_2,param_3,(char *)(DAT_00023248 + 0x23208),uVar1,iVar6,uVar4);
    pcVar5 = (char *)strlen(param_2);
  }
  else {
    pcVar5 = (char *)0x0;
  }
  return pcVar5;
}



/* ===== FUN_0002324c @ 0002324c size=952 ===== */

undefined4 FUN_0002324c(int param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_14;
  char *local_10;
  int local_c;
  
  local_c = param_1 + 4;
  if (*(int *)(param_1 + 0x80) != 0) {
    FUN_0002255c(*(undefined4 *)(param_1 + 0x80));
    *(undefined4 *)(local_c + 0x7c) = 0;
  }
  uVar1 = FUN_00022518(0x14);
  *(undefined4 *)(local_c + 0x7c) = uVar1;
  if (*(int *)(local_c + 0x7c) == 0) {
    printf((char *)(DAT_00023610 + 0x232e8),DAT_0002360c + 0x232e0,0x153,DAT_00023608 + 0x232d4,
           DAT_00023604 + 0x232c8);
    uVar1 = 0xffffffff;
  }
  else {
    local_10 = strstr(param_2,(char *)(DAT_00023614 + 0x232fc));
    if (local_10 == (char *)0x0) {
      printf((char *)(DAT_00023620 + 0x2333c),DAT_0002361c + 0x23334,0x159,DAT_00023618 + 0x23328,
             param_2);
      FUN_0002255c(*(undefined4 *)(local_c + 0x7c));
      *(undefined4 *)(local_c + 0x7c) = 0;
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = FUN_00022718(DAT_00023624 + 0x23374,3,local_10);
      **(undefined4 **)(local_c + 0x7c) = uVar1;
      local_10 = strstr(param_2,(char *)(DAT_00023628 + 0x23394));
      if ((local_10 != (char *)0x0) &&
         (iVar2 = sscanf(local_10,(char *)(DAT_0002362c + 0x233c0),&local_14), iVar2 == 1)) {
        *(uint *)(*(int *)(local_c + 0x7c) + 4) = *(uint *)(*(int *)(local_c + 0x7c) + 4) | 1;
        *(undefined4 *)(*(int *)(local_c + 0x7c) + 8) = local_14;
      }
      local_10 = strstr(param_2,(char *)(DAT_00023630 + 0x2340c));
      if (local_10 != (char *)0x0) {
        *(uint *)(*(int *)(local_c + 0x7c) + 4) = *(uint *)(*(int *)(local_c + 0x7c) + 4) | 2;
      }
      local_10 = strstr(param_2,(char *)(DAT_00023634 + 0x2344c));
      if (local_10 != (char *)0x0) {
        *(uint *)(*(int *)(local_c + 0x7c) + 4) = *(uint *)(*(int *)(local_c + 0x7c) + 4) | 4;
      }
      local_10 = strstr(param_2,(char *)(DAT_00023638 + 0x2348c));
      if ((local_10 != (char *)0x0) &&
         (iVar2 = sscanf(local_10,(char *)(DAT_0002363c + 0x234b8),&local_14), iVar2 == 1)) {
        *(uint *)(*(int *)(local_c + 0x7c) + 4) = *(uint *)(*(int *)(local_c + 0x7c) + 4) | 8;
        *(short *)(*(int *)(local_c + 0x7c) + 0xc) = (short)local_14;
      }
      local_10 = strstr(param_2,(char *)(DAT_00023640 + 0x23508));
      if ((local_10 != (char *)0x0) &&
         (iVar2 = sscanf(local_10,(char *)(DAT_00023644 + 0x23534),&local_14), iVar2 == 1)) {
        *(uint *)(*(int *)(local_c + 0x7c) + 4) = *(uint *)(*(int *)(local_c + 0x7c) + 4) | 0x10;
        *(short *)(*(int *)(local_c + 0x7c) + 0xe) = (short)local_14;
      }
      local_10 = strstr(param_2,(char *)(DAT_00023648 + 0x23584));
      if ((local_10 != (char *)0x0) &&
         (iVar2 = sscanf(local_10,(char *)(DAT_0002364c + 0x235b0),&local_14), iVar2 == 1)) {
        *(uint *)(*(int *)(local_c + 0x7c) + 4) = *(uint *)(*(int *)(local_c + 0x7c) + 4) | 0x20;
        *(undefined1 *)(*(int *)(local_c + 0x7c) + 0x10) = (undefined1)local_14;
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ===== FUN_00023650 @ 00023650 size=1192 ===== */

char * FUN_00023650(int param_1,char *param_2,size_t param_3)

{
  undefined4 uVar1;
  size_t sVar2;
  size_t local_2c;
  char *local_14;
  
  if (*(int *)(param_1 + 0x80) == 0) {
    local_14 = (char *)0x0;
  }
  else {
    uVar1 = FUN_0002266c(DAT_00023af8 + 0x236b0,3,**(undefined4 **)(param_1 + 0x80));
    snprintf(param_2,param_3,(char *)(DAT_00023afc + 0x236c4),uVar1);
    local_2c = strlen(param_2);
    local_14 = param_2 + local_2c;
    local_2c = param_3 - local_2c;
    if ((int)local_2c < 2) {
      local_14 = local_14 + -(int)param_2;
    }
    else {
      if ((*(uint *)(*(int *)(param_1 + 0x80) + 4) & 1) != 0) {
        snprintf(local_14,local_2c,(char *)(DAT_00023b00 + 0x2374c),
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
          snprintf(local_14,local_2c,(char *)(DAT_00023b08 + 0x23840));
          sVar2 = strlen(local_14);
          local_14 = local_14 + sVar2;
          local_2c = local_2c - sVar2;
          if ((int)local_2c < 2) {
            return local_14 + -(int)param_2;
          }
        }
      }
      else {
        snprintf(local_14,local_2c,(char *)(DAT_00023b04 + 0x237c4));
        sVar2 = strlen(local_14);
        local_14 = local_14 + sVar2;
        local_2c = local_2c - sVar2;
        if ((int)local_2c < 2) {
          return local_14 + -(int)param_2;
        }
      }
      if ((*(uint *)(*(int *)(param_1 + 0x80) + 4) & 8) != 0) {
        snprintf(local_14,local_2c,(char *)(DAT_00023b0c + 0x238e4),
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
        snprintf(local_14,local_2c,(char *)(DAT_00023b10 + 0x23984),
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
        snprintf(local_14,local_2c,(char *)(DAT_00023b14 + 0x23a24),
                 (uint)*(byte *)(*(int *)(param_1 + 0x80) + 0x10),
                 *(byte *)(*(int *)(param_1 + 0x80) + 0x10) + 1);
        sVar2 = strlen(local_14);
        local_14 = local_14 + sVar2;
        local_2c = local_2c - sVar2;
        if ((int)local_2c < 2) {
          return local_14 + -(int)param_2;
        }
      }
      snprintf(local_14,local_2c,(char *)(DAT_00023b18 + 0x23a84));
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



/* ===== FUN_00023b44 @ 00023b44 size=44 ===== */

undefined4 FUN_00023b44(void)

{
  return 0;
}



/* ===== FUN_00023b98 @ 00023b98 size=44 ===== */

undefined4 FUN_00023b98(void)

{
  return 0;
}



/* ===== FUN_00023bec @ 00023bec size=44 ===== */

undefined4 FUN_00023bec(void)

{
  return 0;
}



/* ===== FUN_00023c18 @ 00023c18 size=312 ===== */

undefined4 FUN_00023c18(int param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x74) != 0) {
    FUN_0002255c(*(undefined4 *)(param_1 + 0x74));
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  uVar1 = FUN_00022518(4);
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  if (*(int *)(param_1 + 0x74) == 0) {
    printf((char *)(DAT_00023d5c + 0x23cb4),DAT_00023d58 + 0x23cac,0x201,DAT_00023d54 + 0x23ca0,
           DAT_00023d50 + 0x23c94);
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = sscanf(param_2,(char *)(DAT_00023d60 + 0x23cd4),*(undefined4 *)(param_1 + 0x74));
    if (iVar2 == 1) {
      uVar1 = 0;
    }
    else {
      FUN_0002255c(*(undefined4 *)(param_1 + 0x74));
      *(undefined4 *)(param_1 + 0x74) = 0;
      printf((char *)(DAT_00023d70 + 0x23d38),DAT_00023d6c + 0x23d30,0x201,DAT_00023d68 + 0x23d24,
             DAT_00023d64 + 0x23d18,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_00023d74 @ 00023d74 size=104 ===== */

size_t FUN_00023d74(int param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  
  if (*(int *)(param_1 + 0x74) == 0) {
    sVar1 = 0;
  }
  else {
    snprintf(param_2,param_3,(char *)(DAT_00023ddc + 0x23db8),**(undefined4 **)(param_1 + 0x74));
    sVar1 = strlen(param_2);
  }
  return sVar1;
}



/* ===== FUN_00023de0 @ 00023de0 size=312 ===== */

undefined4 FUN_00023de0(int param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x7c) != 0) {
    FUN_0002255c(*(undefined4 *)(param_1 + 0x7c));
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  uVar1 = FUN_00022518(4);
  *(undefined4 *)(param_1 + 0x7c) = uVar1;
  if (*(int *)(param_1 + 0x7c) == 0) {
    printf((char *)(DAT_00023f24 + 0x23e7c),DAT_00023f20 + 0x23e74,0x202,DAT_00023f1c + 0x23e68,
           DAT_00023f18 + 0x23e5c);
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = sscanf(param_2,(char *)(DAT_00023f28 + 0x23e9c),*(undefined4 *)(param_1 + 0x7c));
    if (iVar2 == 1) {
      uVar1 = 0;
    }
    else {
      FUN_0002255c(*(undefined4 *)(param_1 + 0x7c));
      *(undefined4 *)(param_1 + 0x7c) = 0;
      printf((char *)(DAT_00023f38 + 0x23f00),DAT_00023f34 + 0x23ef8,0x202,DAT_00023f30 + 0x23eec,
             DAT_00023f2c + 0x23ee0,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_00023f3c @ 00023f3c size=104 ===== */

size_t FUN_00023f3c(int param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  
  if (*(int *)(param_1 + 0x7c) == 0) {
    sVar1 = 0;
  }
  else {
    snprintf(param_2,param_3,(char *)(DAT_00023fa4 + 0x23f80),**(undefined4 **)(param_1 + 0x7c));
    sVar1 = strlen(param_2);
  }
  return sVar1;
}



/* ===== FUN_00023fa8 @ 00023fa8 size=312 ===== */

undefined4 FUN_00023fa8(int param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xa0) != 0) {
    FUN_0002255c(*(undefined4 *)(param_1 + 0xa0));
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  uVar1 = FUN_00022518(4);
  *(undefined4 *)(param_1 + 0xa0) = uVar1;
  if (*(int *)(param_1 + 0xa0) == 0) {
    printf((char *)(DAT_000240ec + 0x24044),DAT_000240e8 + 0x2403c,0x203,DAT_000240e4 + 0x24030,
           DAT_000240e0 + 0x24024);
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = sscanf(param_2,(char *)(DAT_000240f0 + 0x24064),*(undefined4 *)(param_1 + 0xa0));
    if (iVar2 == 1) {
      uVar1 = 0;
    }
    else {
      FUN_0002255c(*(undefined4 *)(param_1 + 0xa0));
      *(undefined4 *)(param_1 + 0xa0) = 0;
      printf((char *)(DAT_00024100 + 0x240c8),DAT_000240fc + 0x240c0,0x203,DAT_000240f8 + 0x240b4,
             DAT_000240f4 + 0x240a8,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_00024104 @ 00024104 size=104 ===== */

size_t FUN_00024104(int param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  
  if (*(int *)(param_1 + 0xa0) == 0) {
    sVar1 = 0;
  }
  else {
    snprintf(param_2,param_3,(char *)(DAT_0002416c + 0x24148),**(undefined4 **)(param_1 + 0xa0));
    sVar1 = strlen(param_2);
  }
  return sVar1;
}



/* ===== FUN_00024170 @ 00024170 size=548 ===== */

undefined4 FUN_00024170(int param_1,byte *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint local_18;
  byte *local_14;
  
  iVar2 = DAT_00024394 + 0x24190;
  local_18 = 0;
  if (*(int *)(param_1 + 0x9c) != 0) {
    FUN_0002255c(*(undefined4 *)(param_1 + 0x9c));
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  uVar1 = FUN_00022518(0x40);
  *(undefined4 *)(param_1 + 0x9c) = uVar1;
  local_14 = param_2;
  if (*(int *)(param_1 + 0x9c) == 0) {
    printf((char *)(DAT_000243a4 + 0x24224),DAT_000243a0 + 0x2421c,0x22d,DAT_0002439c + 0x24210,
           DAT_00024398 + 0x24204);
    uVar1 = 0xffffffff;
  }
  else {
    for (; ((*(ushort *)(**(int **)(iVar2 + DAT_000243a8) + (uint)*local_14 * 2) & 0x80) != 0 &&
           (*local_14 != 0x3a)); local_14 = local_14 + 1) {
    }
    if (*local_14 == 0x3a) {
      do {
        local_14 = local_14 + 1;
      } while (*local_14 == 0x20);
      while (((*(ushort *)(**(int **)(iVar2 + DAT_000243a8) + (uint)*local_14 * 2) & 0x40) != 0 &&
             (local_18 < 0x3f))) {
        *(byte *)(*(int *)(param_1 + 0x9c) + local_18) = *local_14;
        local_18 = local_18 + 1;
        local_14 = local_14 + 1;
      }
      *(undefined1 *)(*(int *)(param_1 + 0x9c) + local_18) = 0;
      uVar1 = 0;
    }
    else {
      FUN_0002255c(*(undefined4 *)(param_1 + 0x9c));
      *(undefined4 *)(param_1 + 0x9c) = 0;
      printf((char *)(DAT_000243b8 + 0x242d4),DAT_000243b4 + 0x242cc,0x22d,DAT_000243b0 + 0x242c0,
             DAT_000243ac + 0x242b4,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_000243bc @ 000243bc size=100 ===== */

size_t FUN_000243bc(int param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  
  if (*(int *)(param_1 + 0x9c) == 0) {
    sVar1 = 0;
  }
  else {
    snprintf(param_2,param_3,(char *)(DAT_00024420 + 0x243fc),*(undefined4 *)(param_1 + 0x9c));
    sVar1 = strlen(param_2);
  }
  return sVar1;
}



/* ===== FUN_00024424 @ 00024424 size=548 ===== */

undefined4 FUN_00024424(int param_1,byte *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint local_18;
  byte *local_14;
  
  iVar2 = DAT_00024648 + 0x24444;
  local_18 = 0;
  if (*(int *)(param_1 + 0x90) != 0) {
    FUN_0002255c(*(undefined4 *)(param_1 + 0x90));
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  uVar1 = FUN_00022518(0x40);
  *(undefined4 *)(param_1 + 0x90) = uVar1;
  local_14 = param_2;
  if (*(int *)(param_1 + 0x90) == 0) {
    printf((char *)(DAT_00024658 + 0x244d8),DAT_00024654 + 0x244d0,0x22e,DAT_00024650 + 0x244c4,
           DAT_0002464c + 0x244b8);
    uVar1 = 0xffffffff;
  }
  else {
    for (; ((*(ushort *)(**(int **)(iVar2 + DAT_0002465c) + (uint)*local_14 * 2) & 0x80) != 0 &&
           (*local_14 != 0x3a)); local_14 = local_14 + 1) {
    }
    if (*local_14 == 0x3a) {
      do {
        local_14 = local_14 + 1;
      } while (*local_14 == 0x20);
      while (((*(ushort *)(**(int **)(iVar2 + DAT_0002465c) + (uint)*local_14 * 2) & 0x40) != 0 &&
             (local_18 < 0x3f))) {
        *(byte *)(*(int *)(param_1 + 0x90) + local_18) = *local_14;
        local_18 = local_18 + 1;
        local_14 = local_14 + 1;
      }
      *(undefined1 *)(*(int *)(param_1 + 0x90) + local_18) = 0;
      uVar1 = 0;
    }
    else {
      FUN_0002255c(*(undefined4 *)(param_1 + 0x90));
      *(undefined4 *)(param_1 + 0x90) = 0;
      printf((char *)(DAT_0002466c + 0x24588),DAT_00024668 + 0x24580,0x22e,DAT_00024664 + 0x24574,
             DAT_00024660 + 0x24568,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_00024670 @ 00024670 size=100 ===== */

size_t FUN_00024670(int param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  
  if (*(int *)(param_1 + 0x90) == 0) {
    sVar1 = 0;
  }
  else {
    snprintf(param_2,param_3,(char *)(DAT_000246d4 + 0x246b0),*(undefined4 *)(param_1 + 0x90));
    sVar1 = strlen(param_2);
  }
  return sVar1;
}



/* ===== FUN_000246d8 @ 000246d8 size=548 ===== */

undefined4 FUN_000246d8(int param_1,byte *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint local_18;
  byte *local_14;
  
  iVar2 = DAT_000248fc + 0x246f8;
  local_18 = 0;
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_0002255c(*(undefined4 *)(param_1 + 0x78));
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  uVar1 = FUN_00022518(0x20);
  *(undefined4 *)(param_1 + 0x78) = uVar1;
  local_14 = param_2;
  if (*(int *)(param_1 + 0x78) == 0) {
    printf((char *)(DAT_0002490c + 0x2478c),DAT_00024908 + 0x24784,0x22f,DAT_00024904 + 0x24778,
           DAT_00024900 + 0x2476c);
    uVar1 = 0xffffffff;
  }
  else {
    for (; ((*(ushort *)(**(int **)(iVar2 + DAT_00024910) + (uint)*local_14 * 2) & 0x80) != 0 &&
           (*local_14 != 0x3a)); local_14 = local_14 + 1) {
    }
    if (*local_14 == 0x3a) {
      do {
        local_14 = local_14 + 1;
      } while (*local_14 == 0x20);
      while (((*(ushort *)(**(int **)(iVar2 + DAT_00024910) + (uint)*local_14 * 2) & 0x40) != 0 &&
             (local_18 < 0x1f))) {
        *(byte *)(*(int *)(param_1 + 0x78) + local_18) = *local_14;
        local_18 = local_18 + 1;
        local_14 = local_14 + 1;
      }
      *(undefined1 *)(*(int *)(param_1 + 0x78) + local_18) = 0;
      uVar1 = 0;
    }
    else {
      FUN_0002255c(*(undefined4 *)(param_1 + 0x78));
      *(undefined4 *)(param_1 + 0x78) = 0;
      printf((char *)(DAT_00024920 + 0x2483c),DAT_0002491c + 0x24834,0x22f,DAT_00024918 + 0x24828,
             DAT_00024914 + 0x2481c,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_00024924 @ 00024924 size=100 ===== */

size_t FUN_00024924(int param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  
  if (*(int *)(param_1 + 0x78) == 0) {
    sVar1 = 0;
  }
  else {
    snprintf(param_2,param_3,(char *)(DAT_00024988 + 0x24964),*(undefined4 *)(param_1 + 0x78));
    sVar1 = strlen(param_2);
  }
  return sVar1;
}



/* ===== FUN_0002498c @ 0002498c size=648 ===== */

undefined4 FUN_0002498c(int param_1,byte *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  int local_18;
  byte *local_14;
  
  iVar3 = DAT_00024c14 + 0x249ac;
  if (*(int *)(param_1 + 0xa4) != 0) {
    FUN_0002255c(*(undefined4 *)(param_1 + 0xa4));
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  uVar1 = FUN_00022518(4);
  *(undefined4 *)(param_1 + 0xa4) = uVar1;
  local_14 = param_2;
  if (*(int *)(param_1 + 0xa4) == 0) {
    printf((char *)(DAT_00024c24 + 0x24a48),DAT_00024c20 + 0x24a40,0x264,DAT_00024c1c + 0x24a34,
           DAT_00024c18 + 0x24a28);
  }
  else {
    for (; ((*(ushort *)(**(int **)(iVar3 + DAT_00024c28) + (uint)*local_14 * 2) & 0x80) != 0 &&
           (*local_14 != 0x3a)); local_14 = local_14 + 1) {
    }
    if (*local_14 == 0x3a) {
      do {
        local_14 = local_14 + 1;
      } while (*local_14 == 0x20);
      for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
        if ((*(int *)(DAT_00024c3c + local_18 * 0xc + 0x24b48) != 0) &&
           (pcVar2 = strstr((char *)local_14,*(char **)(DAT_00024c40 + local_18 * 0xc + 0x24b74)),
           pcVar2 != (char *)0x0)) {
          **(undefined4 **)(param_1 + 0xa4) =
               *(undefined4 *)(DAT_00024c44 + 0x24bb0 + local_18 * 0xc);
          return 0;
        }
      }
      FUN_0002255c(*(undefined4 *)(param_1 + 0xa4));
      *(undefined4 *)(param_1 + 0xa4) = 0;
    }
    else {
      FUN_0002255c(*(undefined4 *)(param_1 + 0xa4));
      *(undefined4 *)(param_1 + 0xa4) = 0;
      printf((char *)(DAT_00024c38 + 0x24af8),DAT_00024c34 + 0x24af0,0x264,DAT_00024c30 + 0x24ae4,
             DAT_00024c2c + 0x24ad8,param_2);
    }
  }
  return 0xffffffff;
}



/* ===== FUN_00024c48 @ 00024c48 size=232 ===== */

size_t FUN_00024c48(int param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  int local_c;
  
  if (*(int *)(param_1 + 0xa4) != 0) {
    for (local_c = 0; local_c < 4; local_c = local_c + 1) {
      if (**(int **)(param_1 + 0xa4) == *(int *)(DAT_00024d30 + 0x24c9c + local_c * 0xc)) {
        snprintf(param_2,param_3,(char *)(DAT_00024d38 + 0x24ce4),
                 *(undefined4 *)(DAT_00024d34 + local_c * 0xc + 0x24ccc));
        sVar1 = strlen(param_2);
        return sVar1;
      }
    }
  }
  return 0;
}



/* ===== FUN_00024d3c @ 00024d3c size=636 ===== */

undefined4 FUN_00024d3c(int param_1,byte *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  int local_18;
  byte *local_14;
  
  iVar3 = DAT_00024fb8 + 0x24d5c;
  if (*(int *)(param_1 + 0x94) != 0) {
    FUN_0002255c(*(undefined4 *)(param_1 + 0x94));
    *(undefined4 *)(param_1 + 0x94) = 0;
  }
  uVar1 = FUN_00022518(4);
  *(undefined4 *)(param_1 + 0x94) = uVar1;
  local_14 = param_2;
  if (*(int *)(param_1 + 0x94) == 0) {
    printf((char *)(DAT_00024fc8 + 0x24df8),DAT_00024fc4 + 0x24df0,0x2ab,DAT_00024fc0 + 0x24de4,
           DAT_00024fbc + 0x24dd8);
    uVar1 = 0xffffffff;
  }
  else {
    for (; ((*(ushort *)(**(int **)(iVar3 + DAT_00024fcc) + (uint)*local_14 * 2) & 0x80) != 0 &&
           (*local_14 != 0x3a)); local_14 = local_14 + 1) {
    }
    if (*local_14 == 0x3a) {
      do {
        local_14 = local_14 + 1;
      } while (*local_14 == 0x20);
      for (local_18 = 0; local_18 < 0xc; local_18 = local_18 + 1) {
        if ((*(int *)(DAT_00024fe0 + local_18 * 0xc + 0x24ef8) != 0) &&
           (pcVar2 = strstr((char *)local_14,*(char **)(DAT_00024fe4 + local_18 * 0xc + 0x24f24)),
           pcVar2 != (char *)0x0)) {
          **(uint **)(param_1 + 0x94) =
               **(uint **)(param_1 + 0x94) |
               1 << (*(uint *)(DAT_00024fe8 + 0x24f60 + local_18 * 0xc) & 0xff);
        }
      }
      uVar1 = 0;
    }
    else {
      FUN_0002255c(*(undefined4 *)(param_1 + 0x94));
      *(undefined4 *)(param_1 + 0x94) = 0;
      printf((char *)(DAT_00024fdc + 0x24ea8),DAT_00024fd8 + 0x24ea0,0x2ab,DAT_00024fd4 + 0x24e94,
             DAT_00024fd0 + 0x24e88,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_00024fec @ 00024fec size=568 ===== */

char * FUN_00024fec(int param_1,char *param_2,size_t param_3)

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
    snprintf(param_2,param_3,(char *)(DAT_00025228 + 0x25044),DAT_00025224 + 0x2503c);
    local_2c = strlen(param_2);
    local_c = param_2 + local_2c;
    local_2c = param_3 - local_2c;
    if ((int)local_2c < 2) {
      local_c = local_c + -(int)param_2;
    }
    else {
      for (local_10 = 0; local_10 < 0xc; local_10 = local_10 + 1) {
        if ((**(uint **)(param_1 + 0x94) &
            1 << (*(uint *)(DAT_0002522c + 0x250b8 + local_10 * 0xc) & 0xff)) != 0) {
          if (bVar1) {
            snprintf(local_c,local_2c,(char *)(DAT_00025234 + 0x25118),
                     *(undefined4 *)(DAT_00025230 + local_10 * 0xc + 0x25100));
          }
          else {
            snprintf(local_c,local_2c,(char *)(DAT_0002523c + 0x25154),
                     *(undefined4 *)(DAT_00025238 + local_10 * 0xc + 0x2513c));
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
      snprintf(local_c,local_2c,(char *)(DAT_00025240 + 0x251dc));
      sVar2 = strlen(local_c);
      local_c = local_c + (sVar2 - (int)param_2);
    }
  }
  return local_c;
}



/* ===== FUN_00025244 @ 00025244 size=636 ===== */

undefined4 FUN_00025244(int param_1,byte *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  int local_18;
  byte *local_14;
  
  iVar3 = DAT_000254c0 + 0x25264;
  if (*(int *)(param_1 + 0x88) != 0) {
    FUN_0002255c(*(undefined4 *)(param_1 + 0x88));
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  uVar1 = FUN_00022518(4);
  *(undefined4 *)(param_1 + 0x88) = uVar1;
  local_14 = param_2;
  if (*(int *)(param_1 + 0x88) == 0) {
    printf((char *)(DAT_000254d0 + 0x25300),DAT_000254cc + 0x252f8,0x2ac,DAT_000254c8 + 0x252ec,
           DAT_000254c4 + 0x252e0);
    uVar1 = 0xffffffff;
  }
  else {
    for (; ((*(ushort *)(**(int **)(iVar3 + DAT_000254d4) + (uint)*local_14 * 2) & 0x80) != 0 &&
           (*local_14 != 0x3a)); local_14 = local_14 + 1) {
    }
    if (*local_14 == 0x3a) {
      do {
        local_14 = local_14 + 1;
      } while (*local_14 == 0x20);
      for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
        if ((*(int *)(DAT_000254e8 + local_18 * 0xc + 0x25400) != 0) &&
           (pcVar2 = strstr((char *)local_14,*(char **)(DAT_000254ec + local_18 * 0xc + 0x2542c)),
           pcVar2 != (char *)0x0)) {
          **(uint **)(param_1 + 0x88) =
               **(uint **)(param_1 + 0x88) |
               1 << (*(uint *)(DAT_000254f0 + 0x25468 + local_18 * 0xc) & 0xff);
        }
      }
      uVar1 = 0;
    }
    else {
      FUN_0002255c(*(undefined4 *)(param_1 + 0x88));
      *(undefined4 *)(param_1 + 0x88) = 0;
      printf((char *)(DAT_000254e4 + 0x253b0),DAT_000254e0 + 0x253a8,0x2ac,DAT_000254dc + 0x2539c,
             DAT_000254d8 + 0x25390,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_000254f4 @ 000254f4 size=568 ===== */

char * FUN_000254f4(int param_1,char *param_2,size_t param_3)

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
    snprintf(param_2,param_3,(char *)(DAT_00025730 + 0x2554c),DAT_0002572c + 0x25544);
    local_2c = strlen(param_2);
    local_c = param_2 + local_2c;
    local_2c = param_3 - local_2c;
    if ((int)local_2c < 2) {
      local_c = local_c + -(int)param_2;
    }
    else {
      for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
        if ((**(uint **)(param_1 + 0x88) &
            1 << (*(uint *)(DAT_00025734 + 0x255c0 + local_10 * 0xc) & 0xff)) != 0) {
          if (bVar1) {
            snprintf(local_c,local_2c,(char *)(DAT_0002573c + 0x25620),
                     *(undefined4 *)(DAT_00025738 + local_10 * 0xc + 0x25608));
          }
          else {
            snprintf(local_c,local_2c,(char *)(DAT_00025744 + 0x2565c),
                     *(undefined4 *)(DAT_00025740 + local_10 * 0xc + 0x25644));
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
      snprintf(local_c,local_2c,(char *)(DAT_00025748 + 0x256e4));
      sVar2 = strlen(local_c);
      local_c = local_c + (sVar2 - (int)param_2);
    }
  }
  return local_c;
}



/* ===== FUN_0002574c @ 0002574c size=192 ===== */

undefined4 FUN_0002574c(char *param_1)

{
  int iVar1;
  int iVar2;
  int local_c;
  
  iVar2 = DAT_0002580c + 0x25768;
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



/* ===== FUN_00025810 @ 00025810 size=276 ===== */

char * FUN_00025810(char *param_1,void *param_2,int param_3)

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



/* ===== FUN_00025924 @ 00025924 size=60 ===== */

undefined4 FUN_00025924(void *param_1)

{
  if (param_1 != (void *)0x0) {
    memset(param_1,0,0xac);
  }
  return 0;
}



/* ===== FUN_00025960 @ 00025960 size=428 ===== */

void FUN_00025960(void *param_1)

{
  if (*(int *)((int)param_1 + 0x74) != 0) {
    FUN_0002255c(*(undefined4 *)((int)param_1 + 0x74));
  }
  if (*(int *)((int)param_1 + 0x78) != 0) {
    FUN_0002255c(*(undefined4 *)((int)param_1 + 0x78));
  }
  if (*(int *)((int)param_1 + 0x7c) != 0) {
    FUN_0002255c(*(undefined4 *)((int)param_1 + 0x7c));
  }
  if (*(int *)((int)param_1 + 0x80) != 0) {
    FUN_0002255c(*(undefined4 *)((int)param_1 + 0x80));
  }
  if (*(int *)((int)param_1 + 0x84) != 0) {
    FUN_0002255c(*(undefined4 *)((int)param_1 + 0x84));
  }
  if (*(int *)((int)param_1 + 0x88) != 0) {
    FUN_0002255c(*(undefined4 *)((int)param_1 + 0x88));
  }
  if (*(int *)((int)param_1 + 0x90) != 0) {
    FUN_0002255c(*(undefined4 *)((int)param_1 + 0x90));
  }
  if (*(int *)((int)param_1 + 0x94) != 0) {
    FUN_0002255c(*(undefined4 *)((int)param_1 + 0x94));
  }
  if (*(int *)((int)param_1 + 0x9c) != 0) {
    FUN_0002255c(*(undefined4 *)((int)param_1 + 0x9c));
  }
  if (*(int *)((int)param_1 + 0xa4) != 0) {
    FUN_0002255c(*(undefined4 *)((int)param_1 + 0xa4));
  }
  if (*(int *)((int)param_1 + 0xa0) != 0) {
    FUN_0002255c(*(undefined4 *)((int)param_1 + 0xa0));
  }
  if (*(int *)((int)param_1 + 0xa8) != 0) {
    FUN_0002255c(*(undefined4 *)((int)param_1 + 0xa8));
  }
  memset(param_1,0,0xac);
  return;
}



/* ===== FUN_00025b0c @ 00025b0c size=52 ===== */

int FUN_00025b0c(void)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_00025b40 + 0x25b20);
  *(int *)(DAT_00025b44 + 0x25b30) = iVar1 + 1;
  return iVar1;
}



/* ===== FUN_00025b48 @ 00025b48 size=516 ===== */

char * FUN_00025b48(char *param_1,int param_2)

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
  local_c = strstr(param_1,(char *)(DAT_00025d4c + 0x25b80));
  if ((local_c == (char *)0x0) || (param_2 <= (int)(local_c + (1 - (int)local_10)))) {
    if (param_2 < 0x101) {
      pcVar2 = (char *)0x0;
    }
    else {
      pcVar2 = (char *)0xffffffff;
    }
  }
  else {
    local_14 = strstr(local_10,(char *)(DAT_00025d50 + 0x25bdc));
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
        local_c = (char *)FUN_00025810(local_c,0,0);
        if ((local_c == (char *)0x0) ||
           (iVar1 = strncmp(local_c,(char *)(DAT_00025d54 + 0x25c5c),2), iVar1 == 0)) {
          if (param_2 < (int)(local_14 + local_18)) {
            return (char *)0x0;
          }
          return local_14 + local_18;
        }
        iVar1 = strncmp(local_c,(char *)(DAT_00025d58 + 0x25c80),0xe);
      } while ((iVar1 != 0) ||
              (iVar1 = sscanf(local_c,(char *)(DAT_00025d5c + 0x25ca8),&local_18), iVar1 == 1));
      printf((char *)(DAT_00025d68 + 0x25ce4),DAT_00025d64 + 0x25cdc,0x33d,DAT_00025d60 + 0x25cd0,
             local_c);
      pcVar2 = (char *)0xffffffff;
    }
  }
  return pcVar2;
}



/* ===== FUN_00025d6c @ 00025d6c size=896 ===== */

int FUN_00025d6c(undefined4 *param_1,char *param_2,int param_3)

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
      uVar1 = FUN_0002258c(param_2 + 4,local_16);
      param_1[0x2a] = uVar1;
      iVar2 = local_16 + 4;
    }
    else {
      iVar2 = 0;
    }
  }
  else {
    pcVar3 = local_14;
    printf((char *)(DAT_000260f4 + 0x25e70),DAT_000260f0 + 0x25e68,0x361,DAT_000260ec + 0x25e5c,
           local_14);
    iVar2 = FUN_00025b48(param_2,param_3);
    if (0 < iVar2) {
      local_10 = iVar2;
      local_c = (char *)FUN_00025810(local_c,local_11c,0x100);
      if (local_c == (char *)0x0) {
        iVar2 = -1;
      }
      else {
        local_10 = FUN_00022cc8(param_1,local_11c);
        if (local_10 < 0) {
          iVar2 = -1;
        }
        else {
          do {
            while( true ) {
              local_c = (char *)FUN_00025810(local_c,local_11c,0x100);
              if ((local_c == (char *)0x0) || (local_11c[0] == '\0')) goto LAB_00025fc4;
              local_1c = (code *)FUN_0002574c(local_11c);
              if (local_1c != (code *)0x0) break;
              pcVar3 = local_11c;
              printf((char *)(DAT_00026100 + 0x25f44),DAT_000260fc + 0x25f3c,0x378,
                     DAT_000260f8 + 0x25f30,pcVar3);
            }
            local_10 = (*local_1c)(param_1,local_11c);
          } while (-1 < local_10);
          pcVar3 = local_11c;
          printf((char *)(DAT_0002610c + 0x25f94),DAT_00026108 + 0x25f8c,0x37e,
                 DAT_00026104 + 0x25f80,pcVar3);
LAB_00025fc4:
          if ((local_c == (char *)0x0) || (local_11c[0] != '\0')) {
            FUN_00025960(param_1);
            iVar2 = -1;
          }
          else {
            if (param_1[0x28] != 0) {
              uVar1 = FUN_0002258c(local_c,*(undefined4 *)param_1[0x28]);
              param_1[0x2a] = uVar1;
              if (param_1[0x2a] == 0) {
                printf((char *)(DAT_00026118 + 0x26054),DAT_00026114 + 0x2604c,0x38b,
                       DAT_00026110 + 0x26040,pcVar3);
                FUN_00025960(param_1);
                return -1;
              }
            }
            local_10 = (int)local_c - (int)local_14;
            if (param_1[0x28] != 0) {
              local_10 = *(int *)param_1[0x28] + local_10;
            }
            if (local_10 != iVar2) {
              printf((char *)(DAT_00026124 + 0x260dc),DAT_00026120 + 0x260d4,0x396,
                     DAT_0002611c + 0x260c8,iVar2,local_10);
            }
          }
        }
      }
    }
  }
  return iVar2;
}



/* ===== FUN_00026128 @ 00026128 size=2104 ===== */

int FUN_00026128(int *param_1,undefined4 *param_2,int param_3)

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
    iVar2 = FUN_00023018(param_1,param_2,param_3);
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
          iVar2 = FUN_00023d74(param_1,local_14,local_34);
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
          iVar2 = FUN_00024924(param_1,local_14,local_34);
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
          iVar2 = FUN_00023f3c(param_1,local_14,local_34);
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
          iVar2 = FUN_00023650(param_1,local_14,local_34);
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
          iVar2 = FUN_00023b44(param_1,local_14,local_34);
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
          iVar2 = FUN_000254f4(param_1,local_14,local_34);
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
          iVar2 = FUN_00023b98(param_1,local_14,local_34);
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
          iVar2 = FUN_00024670(param_1,local_14,local_34);
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
          iVar2 = FUN_00024fec(param_1,local_14,local_34);
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
          iVar2 = FUN_00023bec(param_1,local_14,local_34);
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
          iVar2 = FUN_000243bc(param_1,local_14,local_34);
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
          iVar2 = FUN_00024c48(param_1,local_14,local_34);
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
          iVar2 = FUN_00024104(param_1,local_14,local_34);
          if (iVar2 < 0) {
            return -1;
          }
          local_14 = local_14 + iVar2;
          local_34 = local_34 - iVar2;
          if ((int)local_34 < 2) {
            return (int)local_14 - (int)param_2;
          }
        }
        snprintf(local_14,local_34,(char *)(DAT_00026960 + 0x26858));
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
            printf((char *)(DAT_0002696c + 0x26948),DAT_00026968 + 0x26940,0x3e6,
                   DAT_00026964 + 0x26934,param_2);
            local_34 = (int)local_14 - (int)param_2;
          }
        }
      }
    }
  }
  return local_34;
}



/* ===== FUN_00026970 @ 00026970 size=140 ===== */

undefined4 FUN_00026970(undefined4 *param_1,undefined4 param_2,char *param_3,char *param_4)

{
  *param_1 = 0;
  param_1[1] = param_2;
  param_1[2] = 0;
  strncpy((char *)((int)param_1 + 0xe),param_3,0x1f);
  strncpy((char *)((int)param_1 + 0x2e),param_4,0x3f);
  param_1[0x1c] = 0;
  return 0;
}



/* ===== FUN_000269fc @ 000269fc size=76 ===== */

undefined4 FUN_000269fc(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = 1;
  param_1[1] = 0;
  param_1[2] = param_2;
  return 0;
}



/* ===== FUN_00026a48 @ 00026a48 size=96 ===== */

undefined4 FUN_00026a48(int param_1,undefined4 *param_2)

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



/* ===== FUN_00026aa8 @ 00026aa8 size=112 ===== */

undefined4 FUN_00026aa8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x74) == 0) {
    uVar1 = FUN_00022518(4);
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



/* ===== FUN_00026b18 @ 00026b18 size=96 ===== */

undefined4 FUN_00026b18(int param_1,undefined4 *param_2)

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



/* ===== FUN_00026b78 @ 00026b78 size=112 ===== */

undefined4 FUN_00026b78(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x7c) == 0) {
    uVar1 = FUN_00022518(4);
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



/* ===== FUN_00026be8 @ 00026be8 size=108 ===== */

undefined4 FUN_00026be8(int param_1,char *param_2,int param_3)

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



/* ===== FUN_00026c54 @ 00026c54 size=288 ===== */

undefined4 FUN_00026c54(int param_1,char *param_2)

{
  undefined4 uVar1;
  char *__src;
  char *__dest;
  int iVar2;
  time_t local_18;
  byte *local_14;
  
  iVar2 = DAT_00026d74 + 0x26c74;
  if (*(int *)(param_1 + 0x78) == 0) {
    uVar1 = FUN_00022518(0x20);
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
      while ((*(ushort *)(**(int **)(iVar2 + DAT_00026d78) + (uint)*local_14 * 2) & 0x40) != 0) {
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



/* ===== FUN_00026d7c @ 00026d7c size=284 ===== */

undefined4 FUN_00026d7c(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x80) == 0) {
    uVar1 = FUN_00022518(0x14);
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



/* ===== FUN_00026e98 @ 00026e98 size=220 ===== */

undefined4 FUN_00026e98(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x80) == 0) {
    uVar1 = FUN_00022518(0x14);
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



/* ===== FUN_00026f74 @ 00026f74 size=96 ===== */

undefined4 FUN_00026f74(int param_1,undefined4 *param_2)

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



/* ===== FUN_00026fd4 @ 00026fd4 size=112 ===== */

undefined4 FUN_00026fd4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x88) == 0) {
    uVar1 = FUN_00022518(4);
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



/* ===== FUN_00027044 @ 00027044 size=108 ===== */

undefined4 FUN_00027044(int param_1,char *param_2,int param_3)

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



/* ===== FUN_000270b0 @ 000270b0 size=168 ===== */

undefined4 FUN_000270b0(int param_1,char *param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x90) == 0) {
    uVar1 = FUN_00022518(0x40);
    *(undefined4 *)(param_1 + 0x90) = uVar1;
  }
  if (*(int *)(param_1 + 0x90) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    if (param_2 == (char *)0x0) {
      strncpy(*(char **)(param_1 + 0x90),(char *)(DAT_00027158 + 0x27144),0x3f);
    }
    else {
      strncpy(*(char **)(param_1 + 0x90),param_2,0x3f);
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_000271bc @ 000271bc size=112 ===== */

undefined4 FUN_000271bc(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x94) == 0) {
    uVar1 = FUN_00022518(4);
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



/* ===== FUN_0002722c @ 0002722c size=108 ===== */

undefined4 FUN_0002722c(int param_1,char *param_2,int param_3)

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



/* ===== FUN_00027298 @ 00027298 size=168 ===== */

undefined4 FUN_00027298(int param_1,char *param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar1 = FUN_00022518(0x40);
    *(undefined4 *)(param_1 + 0x9c) = uVar1;
  }
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    if (param_2 == (char *)0x0) {
      strncpy(*(char **)(param_1 + 0x9c),(char *)(DAT_00027340 + 0x2732c),0x3f);
    }
    else {
      strncpy(*(char **)(param_1 + 0x9c),param_2,0x3f);
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_000273a8 @ 000273a8 size=112 ===== */

undefined4 FUN_000273a8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xa4) == 0) {
    uVar1 = FUN_00022518(4);
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



/* ===== FUN_0002747c @ 0002747c size=112 ===== */

undefined4 FUN_0002747c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xa0) == 0) {
    uVar1 = FUN_00022518(4);
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



/* ===== FUN_000274ec @ 000274ec size=292 ===== */

int * FUN_000274ec(int param_1,int param_2)

{
  int *piVar1;
  
  if ((param_1 < 1) || (param_2 < 1)) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = calloc(1,param_2 * param_1 + param_2 * 4 + 0x18);
    if (piVar1 == (int *)0x0) {
      printf((char *)(DAT_00027618 + 0x27580),DAT_00027614 + 0x27578,0x16,DAT_00027610 + 0x2756c);
      piVar1 = (int *)0x0;
    }
    else {
      printf((char *)(DAT_0002761c + 0x275b8),param_2 * param_1 + param_2 * 4 + 0x18);
      *piVar1 = param_1;
      piVar1[1] = param_2;
      piVar1[4] = (int)(piVar1 + 6);
      piVar1[5] = (int)(piVar1 + param_2 + 6);
    }
  }
  return piVar1;
}



/* ===== FUN_00027620 @ 00027620 size=176 ===== */

undefined4 FUN_00027620(int *param_1,int param_2,int *param_3,int *param_4)

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



/* ===== FUN_000276d0 @ 000276d0 size=172 ===== */

undefined4 FUN_000276d0(int param_1,int param_2)

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



/* ===== FUN_0002777c @ 0002777c size=92 ===== */

undefined4 FUN_0002777c(int param_1,int param_2)

{
  undefined4 extraout_r1;
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    FUN_00029d34(param_2 + 1,*(undefined4 *)(param_1 + 4));
    uVar1 = extraout_r1;
  }
  return uVar1;
}



/* ===== FUN_000277d8 @ 000277d8 size=60 ===== */

undefined4 FUN_000277d8(int param_1)

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



/* ===== FUN_00027814 @ 00027814 size=60 ===== */

undefined4 FUN_00027814(int param_1)

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



/* ===== FUN_00027850 @ 00027850 size=168 ===== */

undefined4 FUN_00027850(int param_1)

{
  int extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    FUN_00029d34(*(int *)(param_1 + 0xc) + 1,*(undefined4 *)(param_1 + 4));
    if (extraout_r1 == *(int *)(param_1 + 8)) {
      uVar1 = 0xffffffff;
    }
    else {
      FUN_00029d34(*(int *)(param_1 + 0xc) + 1,*(undefined4 *)(param_1 + 4));
      *(undefined4 *)(param_1 + 0xc) = extraout_r1_00;
      uVar1 = *(undefined4 *)(param_1 + 0xc);
    }
  }
  return uVar1;
}



/* ===== FUN_000278f8 @ 000278f8 size=136 ===== */

undefined4 FUN_000278f8(int param_1)

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
    FUN_00029d34(*(int *)(param_1 + 8) + 1,*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 8) = extraout_r1;
    uVar1 = *(undefined4 *)(param_1 + 8);
  }
  return uVar1;
}



/* ===== FUN_00027980 @ 00027980 size=48 ===== */

void FUN_00027980(void *param_1)

{
  if (param_1 != (void *)0x0) {
    free(param_1);
  }
  return;
}



/* ===== FUN_000279b0 @ 000279b0 size=636 ===== */

undefined1 * FUN_000279b0(undefined1 *param_1,int param_2,byte *param_3,uint param_4)

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
      *local_c = *(undefined1 *)(DAT_00027c2c + 0x27ab8 + (uint)(bVar1 >> 2));
      local_c[1] = *(undefined1 *)(DAT_00027c30 + 0x27ae0 + ((uVar4 & 0x3f00000) >> 0x14));
      puVar3 = local_c + 3;
      local_c[2] = *(undefined1 *)
                    (DAT_00027c34 + 0x27b08 + ((uVar4 | (uint)bVar2 << 8) >> 0xe & 0x3f));
      local_c = local_c + 4;
      *puVar3 = *(undefined1 *)(DAT_00027c38 + 0x27b30 + (((uint)bVar2 << 8 & 0x3f00) >> 8));
    }
    local_10 = 0;
    for (; local_18 != 0; local_18 = local_18 - 1) {
      local_10 = local_10 * 0x100 + (uint)*local_2c;
      local_14 = local_14 + 8;
      local_2c = local_2c + 1;
    }
    for (; 0 < (int)local_14; local_14 = local_14 - 6) {
      *local_c = *(undefined1 *)
                  (DAT_00027c3c + 0x27bc0 + ((uint)(local_10 << 6) >> (local_14 & 0xff) & 0x3f));
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



/* ===== FUN_00027c40 @ 00027c40 size=476 ===== */

char * FUN_00027c40(char *param_1,int param_2,int *param_3)

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



/* ===== FUN_00027e1c @ 00027e1c size=588 ===== */

bool FUN_00027e1c(int param_1,int param_2,void *param_3)

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
           ) && (iVar1 = FUN_00027c40(local_c,local_14,&local_20), iVar1 != 0))))) {
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
      printf((char *)(DAT_00028070 + 0x27f6c),DAT_0002806c + 0x27f64,0x86,DAT_00028068 + 0x27f58,
             local_20);
      if (0x40 < (int)local_20) {
        local_20 = 0x40;
      }
      memcpy(param_3,local_10,local_20);
      *(size_t *)((int)param_3 + 0x80) = local_20;
      local_18 = local_18 + 1;
    }
    if (local_19 == 8) {
      printf((char *)(DAT_0002807c + 0x27fe4),DAT_00028078 + 0x27fdc,0x8e,DAT_00028074 + 0x27fd0,
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



/* ===== FUN_00028080 @ 00028080 size=736 ===== */

bool FUN_00028080(int param_1,int param_2,void *param_3)

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
         (iVar1 = FUN_00027c40(local_c,local_14,&local_20), iVar1 != 0))) {
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
      printf((char *)(DAT_00028368 + 0x281e8),DAT_00028364 + 0x281e0,0xba,DAT_00028360 + 0x281d4,
             local_20);
      if (0x40 < (int)local_20) {
        local_20 = 0x40;
      }
      memcpy(param_3,local_10,local_20);
      *(size_t *)((int)param_3 + 0xc0) = local_20;
      local_18 = local_18 + 1;
    }
    if (local_19 == 0x21) {
      printf((char *)(DAT_00028374 + 0x28260),DAT_00028370 + 0x28258,0xc2,DAT_0002836c + 0x2824c,
             local_20);
      if (0x40 < (int)local_20) {
        local_20 = 0x40;
      }
      memcpy((void *)((int)param_3 + 0x40),local_10,local_20);
      *(size_t *)((int)param_3 + 0xc4) = local_20;
      local_18 = local_18 + 1;
    }
    if (local_19 == 0x22) {
      printf((char *)(DAT_00028380 + 0x282dc),DAT_0002837c + 0x282d4,0xca,DAT_00028378 + 0x282c8,
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



/* ===== FUN_00028384 @ 00028384 size=236 ===== */

undefined4 FUN_00028384(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 != 4) {
    printf((char *)(DAT_00028478 + 0x283c8),DAT_00028474 + 0x283c0,0xdb,DAT_00028470 + 0x283b4);
    return 0xffffffff;
  }
  iVar1 = *param_1;
  if (iVar1 == 24000) {
code_r0x00028454:
    *param_3 = iVar1;
    uVar2 = 1;
  }
  else {
    if (iVar1 < 0x5dc1) {
      if (iVar1 == 16000) goto code_r0x00028454;
    }
    else if ((iVar1 == 32000) || (iVar1 == 40000)) goto code_r0x00028454;
    printf((char *)(DAT_00028484 + 0x28448),DAT_00028480 + 0x28440,0xe8,DAT_0002847c + 0x28434);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== FUN_00028488 @ 00028488 size=56 ===== */

undefined4 FUN_00028488(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00027e1c(param_1,param_2,param_3);
  return uVar1;
}



/* ===== FUN_000284c0 @ 000284c0 size=56 ===== */

undefined4 FUN_000284c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00028080(param_1,param_2,param_3);
  return uVar1;
}



/* ===== FUN_000284f8 @ 000284f8 size=556 ===== */

int FUN_000284f8(undefined4 param_1,undefined4 param_2,int param_3,char *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *local_c;
  
  iVar1 = sprintf(param_4,(char *)(DAT_00028724 + 0x2852c),param_1);
  pcVar4 = param_4 + iVar1;
  iVar1 = sprintf(pcVar4,(char *)(DAT_00028728 + 0x28554));
  iVar2 = sprintf(pcVar4 + iVar1,(char *)(DAT_0002872c + 0x28584),param_1,param_2);
  local_c = pcVar4 + iVar1 + iVar2;
  if ((*(int *)(param_3 + 0x80) == 0) || (*(int *)(param_3 + 0x84) == 0)) {
    iVar1 = sprintf(local_c,(char *)(DAT_0002873c + 0x286f0),param_1);
    local_c = local_c + iVar1;
  }
  else {
    uVar5 = *(undefined4 *)(param_3 + 0x80);
    uVar6 = *(undefined4 *)(param_3 + 0x84);
    iVar1 = sprintf(local_c,(char *)(DAT_00028730 + 0x285f8),param_1);
    local_c = local_c + iVar1;
    FUN_000279b0(local_c,param_5 - ((int)local_c - (int)param_4),param_3,uVar5);
    sVar3 = strlen(local_c);
    iVar1 = sprintf(local_c + sVar3,(char *)(DAT_00028734 + 0x2865c));
    pcVar4 = local_c + sVar3 + iVar1;
    FUN_000279b0(pcVar4,param_5 - ((int)pcVar4 - (int)param_4),param_3 + 0x40,uVar6);
    sVar3 = strlen(pcVar4);
    iVar1 = sprintf(pcVar4 + sVar3,(char *)(DAT_00028738 + 0x286c0));
    local_c = pcVar4 + sVar3 + iVar1;
  }
  return (int)local_c - (int)param_4;
}



/* ===== FUN_00028740 @ 00028740 size=688 ===== */

int FUN_00028740(undefined4 param_1,undefined4 param_2,int param_3,char *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *local_c;
  
  iVar1 = sprintf(param_4,(char *)(DAT_000289f0 + 0x28774),param_1);
  pcVar4 = param_4 + iVar1;
  iVar1 = sprintf(pcVar4,(char *)(DAT_000289f4 + 0x2879c));
  iVar2 = sprintf(pcVar4 + iVar1,(char *)(DAT_000289f8 + 0x287cc),param_1,param_2);
  local_c = pcVar4 + iVar1 + iVar2;
  if (((*(int *)(param_3 + 0xc0) != 0) && (*(int *)(param_3 + 0xc4) != 0)) &&
     (*(int *)(param_3 + 200) != 0)) {
    uVar5 = *(undefined4 *)(param_3 + 0xc0);
    uVar6 = *(undefined4 *)(param_3 + 0xc4);
    uVar7 = *(undefined4 *)(param_3 + 200);
    iVar1 = sprintf(local_c,(char *)(DAT_000289fc + 0x28868),param_1);
    iVar2 = sprintf(local_c + iVar1,(char *)(DAT_00028a00 + 0x28890));
    pcVar4 = local_c + iVar1 + iVar2;
    FUN_000279b0(pcVar4,param_5 - ((int)pcVar4 - (int)param_4),param_3,uVar5);
    sVar3 = strlen(pcVar4);
    iVar1 = sprintf(pcVar4 + sVar3,(char *)(DAT_00028a04 + 0x288f4));
    pcVar4 = pcVar4 + sVar3 + iVar1;
    FUN_000279b0(pcVar4,param_5 - ((int)pcVar4 - (int)param_4),param_3 + 0x40,uVar6);
    sVar3 = strlen(pcVar4);
    iVar1 = sprintf(pcVar4 + sVar3,(char *)(DAT_00028a08 + 0x28958));
    pcVar4 = pcVar4 + sVar3 + iVar1;
    FUN_000279b0(pcVar4,param_5 - ((int)pcVar4 - (int)param_4),param_3 + 0x80,uVar7);
    sVar3 = strlen(pcVar4);
    iVar1 = sprintf(pcVar4 + sVar3,(char *)(DAT_00028a0c + 0x289bc));
    local_c = pcVar4 + sVar3 + iVar1;
  }
  return (int)local_c - (int)param_4;
}



/* ===== FUN_00028a10 @ 00028a10 size=196 ===== */

char * FUN_00028a10(undefined4 param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  int iVar1;
  int iVar2;
  char *__s;
  
  iVar1 = sprintf(param_4,(char *)(DAT_00028ad4 + 0x28a44),param_1);
  __s = param_4 + iVar1;
  iVar1 = sprintf(__s,(char *)(DAT_00028ad8 + 0x28a6c));
  iVar2 = sprintf(__s + iVar1,(char *)(DAT_00028adc + 0x28aa4),param_1,param_2,param_3);
  return __s + iVar1 + (iVar2 - (int)param_4);
}



/* ===== FUN_00028ae0 @ 00028ae0 size=196 ===== */

char * FUN_00028ae0(undefined4 param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  int iVar1;
  int iVar2;
  char *__s;
  
  iVar1 = sprintf(param_4,(char *)(DAT_00028ba4 + 0x28b14),param_1);
  __s = param_4 + iVar1;
  iVar1 = sprintf(__s,(char *)(DAT_00028ba8 + 0x28b3c));
  iVar2 = sprintf(__s + iVar1,(char *)(DAT_00028bac + 0x28b74),param_1,param_2,param_3);
  return __s + iVar1 + (iVar2 - (int)param_4);
}



/* ===== FUN_00028bb0 @ 00028bb0 size=252 ===== */

char * FUN_00028bb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint *param_4,
                   char *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *__s;
  
  iVar1 = sprintf(param_5,(char *)(DAT_00028cac + 0x28be4),param_1);
  __s = param_5 + iVar1;
  iVar1 = sprintf(__s,(char *)(DAT_00028cb0 + 0x28c0c));
  if (*param_4 == 0) {
    uVar3 = 0x20;
  }
  else {
    uVar3 = *param_4 / 1000;
  }
  iVar2 = sprintf(__s + iVar1,(char *)(DAT_00028cb4 + 0x28c7c),param_1,uVar3,param_2,param_3);
  return __s + iVar1 + (iVar2 - (int)param_5);
}



/* ===== FUN_00028cb8 @ 00028cb8 size=1436 ===== */

int FUN_00028cb8(byte *param_1,byte *param_2,size_t param_3,undefined4 param_4,uint param_5,
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
    __hostlong = FUN_00029d54((int)lVar2,
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



/* ===== FUN_00029254 @ 00029254 size=1492 ===== */

int FUN_00029254(byte *param_1,byte *param_2,size_t param_3,undefined4 param_4,uint param_5,
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
    __hostlong = FUN_00029d54((int)lVar3,
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



/* ===== FUN_00029828 @ 00029828 size=792 ===== */

int FUN_00029828(byte *param_1,void *param_2,size_t param_3,undefined4 param_4,uint param_5,
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
    __hostlong = FUN_00029d54((int)lVar1,
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



/* ===== FUN_00029b40 @ 00029b40 size=80 ===== */

undefined4
FUN_00029b40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00029828(param_1,param_2,param_3,param_6,param_5,param_6,param_7,param_8);
  return uVar1;
}



/* ===== FUN_00029b90 @ 00029b90 size=168 ===== */

ulonglong FUN_00029b90(uint param_1,uint param_2)

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



/* ===== FUN_00029c38 @ 00029c38 size=32 ===== */

void FUN_00029c38(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_00029b90();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_00029c60 @ 00029c60 size=196 ===== */

uint FUN_00029c60(uint param_1,uint param_2)

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



/* ===== FUN_00029d34 @ 00029d34 size=48 ===== */

void FUN_00029d34(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_00029c60();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_00029d54 @ 00029d54 size=76 ===== */

void FUN_00029d54(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  if (param_4 != 0 || param_3 != 0) {
    FUN_00029da0();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_00029da0 @ 00029da0 size=328 ===== */

undefined8 FUN_00029da0(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

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



/* ===== _fini @ 00029ee8 size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00041000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00041010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_setMirrorFlip @ 00041014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_setMirrorFlip(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_EnableMotionDeblur @ 00041018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_EnableMotionDeblur(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_preInit_devBufCnt @ 0004101c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_preInit_devBufCnt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::recvfrom @ 00041020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recvfrom(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,socklen_t *__addr_len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 00041024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_RGN_SetBitMap @ 00041028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_RGN_SetBitMap(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_IVS_DestroyChn @ 0004102c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_IVS_DestroyChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 00041030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevAttr @ 00041034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetDevAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetChnFrame @ 00041038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetChnFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setlinebuf @ 0004103c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void setlinebuf(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 00041040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::accept @ 00041044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int accept(int __fd,sockaddr *__addr,socklen_t *__addr_len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 00041048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 0004104c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 00041050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcat @ 00041054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 00041058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_RGN_Create @ 0004105c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_RGN_Create(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memmove @ 00041060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_ae_setExpSwAttr @ 00041064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_user_api2_ae_setExpSwAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::raise @ 00041068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_TDE_Close @ 0004106c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_TDE_Close(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 00041070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_TDE_BeginJob @ 00041074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_TDE_BeginJob(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 00041078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_ResumeChn @ 0004107c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_ResumeChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_join @ 00041080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 00041084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_IVS_GetResults @ 00041088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_IVS_GetResults(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setenv @ 0004108c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setenv(char *__name,char *__value,int __replace)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableDev @ 00041090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_EnableDev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_DestroyPool @ 00041094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_DestroyPool(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_RGN_DetachFromChn @ 00041098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_RGN_DetachFromChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevAttr @ 0004109c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetDevAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 000410a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableDev @ 000410a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_DisableDev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sem_wait @ 000410a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sem_wait(sem_t *__sem)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_destroy @ 000410ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_destroy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_RGN_AttachToChn @ 000410b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_RGN_AttachToChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 000410b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Bind @ 000410b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Bind(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChnExt @ 000410bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_EnableChnExt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ntohs @ 000410c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint16_t ntohs(uint16_t __netshort)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 000410c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_lock @ 000410c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::send @ 000410cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t send(int __fd,void *__buf,size_t __n,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_IVS_ReleaseResults @ 000410d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_IVS_ReleaseResults(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_start @ 000410d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_start(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_RGN_SetDisplayAttr @ 000410d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_RGN_SetDisplayAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetJpegParam @ 000410dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetJpegParam(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::recv @ 000410e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recv(int __fd,void *__buf,size_t __n,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_prepare @ 000410e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_prepare(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fseek @ 000410e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_deinit @ 000410ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_deinit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StartRecvFrame @ 000410f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_StartRecvFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt_long @ 000410f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void getopt_long(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetComboAttr @ 000410f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetComboAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_destroy @ 000410fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_MmzFlushCache @ 00041100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_MmzFlushCache(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 00041104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::listen @ 00041108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int listen(int __fd,int __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_TDE_CancelJob @ 0004110c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_TDE_CancelJob(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sendto @ 00041110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t sendto(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,socklen_t __addr_len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ctime @ 00041114 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * ctime(time_t *__timer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SendFrame @ 00041118 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SendFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 0004111c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 00041120 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_GetChnRotation @ 00041124 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_GetChnRotation(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_CreatePool @ 00041128 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_CreatePool(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_LOG @ 0004112c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_LOG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::prctl @ 00041130 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int prctl(int __option,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_create @ 00041134 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_create(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_RequestIDR @ 00041138 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_RequestIDR(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 0004113c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ROCKIVA_Init @ 00041140 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ROCKIVA_Init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clock_gettime @ 00041144 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strrchr @ 00041148 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_PauseChn @ 0004114c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_PauseChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_unlock @ 00041150 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetMjpegParam @ 00041154 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetMjpegParam(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::socket @ 00041158 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ROCKIVA_BA_Release @ 0004115c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ROCKIVA_BA_Release(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_ae_getExpSwAttr @ 00041160 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_user_api2_ae_getExpSwAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_init @ 00041164 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ROCKIVA_SetFrameReleaseCallback @ 00041168 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ROCKIVA_SetFrameReleaseCallback(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_aldch_v21_GetAttrib @ 0004116c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_user_api2_aldch_v21_GetAttrib(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setsockopt @ 00041170 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_IVS_GetChnAttr @ 00041174 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_IVS_GetChnAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChn @ 00041178 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_EnableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_GetChnAttr @ 0004117c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_GetChnAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_getCamInfos @ 00041180 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_getCamInfos(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_setMulCamConc @ 00041184 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_setMulCamConc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId @ 00041188 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_enumStaticMetasByPhyId(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::inet_ntoa @ 0004118c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * inet_ntoa(in_addr __in)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::time @ 00041190 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_QueryChnStatus @ 00041194 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_QueryChnStatus(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChn @ 00041198 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_DisableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_TDE_Open @ 0004119c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_TDE_Open(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnWrapBufAttr @ 000411a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetChnWrapBufAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_stop @ 000411a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_stop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetEptz @ 000411a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetEptz(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetChnBufWrapAttr @ 000411ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetChnBufWrapAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2Fd @ 000411b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_Handle2Fd(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetChnAttr @ 000411b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetChnAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_TDE_QuickCopy @ 000411b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_TDE_QuickCopy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fcntl @ 000411bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fcntl(int __fd,int __cmd,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_EnableSvc @ 000411c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_EnableSvc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetRcParam @ 000411c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetRcParam(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_switch_scene @ 000411c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_switch_scene(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sem_init @ 000411cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sem_init(sem_t *__sem,int __pshared,uint __value)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm @ 000411d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_getAiqCtxBySnsNm(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::htonl @ 000411d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint32_t htonl(uint32_t __hostlong)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevIsEnable @ 000411d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetDevIsEnable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::signal @ 000411dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen64 @ 000411e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_create @ 000411e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetChnAttr @ 000411e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetChnAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StopRecvFrame @ 000411ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_StopRecvFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::htons @ 000411f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint16_t htons(uint16_t __hostshort)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_GetMB @ 000411f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_GetMB(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::select @ 000411f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fileno @ 000411fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fileno(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 00041200 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fsync @ 00041204 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fsync(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 00041208 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Exit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ROCKIVA_BA_Init @ 0004120c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ROCKIVA_BA_Init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_user_api2_aldch_v21_SetAttrib @ 00041210 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_user_api2_aldch_v21_SetAttrib(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 00041214 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usleep @ 00041218 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 0004121c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_RGN_Destroy @ 00041220 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_RGN_Destroy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_prepare @ 00041224 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_prepare(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnAttr @ 00041228 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetChnAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_ReleaseChnFrame @ 0004122c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_ReleaseChnFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetChnRotation @ 00041230 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetChnRotation(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_TDE_EndJob @ 00041234 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_TDE_EndJob(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sem_post @ 00041238 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sem_post(sem_t *__sem)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 0004123c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_GetStream @ 00041240 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_GetStream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_start @ 00041244 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_start(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::system @ 00041248 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int system(char *__command)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChnExt @ 0004124c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_DisableChnExt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sleep @ 00041250 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 00041254 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 00041258 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_Handle2VirAddr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strstr @ 0004125c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sscanf @ 00041260 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_RGN_GetDisplayAttr @ 00041264 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_RGN_GetDisplayAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevBindPipe @ 00041268 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetDevBindPipe(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_UnBind @ 0004126c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_UnBind(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_ChnSaveFile @ 00041270 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_ChnSaveFile(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 00041274 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gettimeofday @ 00041278 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sem_destroy @ 0004127c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sem_destroy(sem_t *__sem)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_ReleaseMB @ 00041280 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_ReleaseMB(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 00041284 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_SetChnRefBufShareAttr @ 00041288 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_SetChnRefBufShareAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fread @ 0004128c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_camgroup_stop @ 00041290 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_camgroup_stop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::bind @ 00041294 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_TDE_WaitForDone @ 00041298 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_TDE_WaitForDone(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_IVS_CreateChn @ 0004129c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_IVS_CreateChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_DestroyChn @ 000412a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_DestroyChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ROCKIVA_PushFrame @ 000412a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ROCKIVA_PushFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 000412a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_CAL_TDE_GetPicBufferSize @ 000412ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_CAL_TDE_GetPicBufferSize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_aiq_uapi2_sysctl_init @ 000412b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_aiq_uapi2_sysctl_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_CreateChn @ 000412b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_CreateChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ROCKIVA_Release @ 000412b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ROCKIVA_Release(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_ReleaseStream @ 000412bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_ReleaseStream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


