// simple_vi_eptz_test — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00011278 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 0001129c size=12 ===== */

void RK_MPI_SYS_Exit(void)

{
  (*(code *)PTR_RK_MPI_SYS_Exit_0003300c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetEptz @ 000112a8 size=12 ===== */

void RK_MPI_VI_GetEptz(void)

{
  (*(code *)PTR_RK_MPI_VI_GetEptz_00033010)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Bind @ 000112b4 size=12 ===== */

void RK_MPI_SYS_Bind(void)

{
  (*(code *)PTR_RK_MPI_SYS_Bind_00033014)();
  return;
}



/* ===== <EXTERNAL>::bind @ 000112c0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_bind_00033018)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 000112cc size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_0003301c)();
  return;
}



/* ===== <EXTERNAL>::htons @ 000112d8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint16_t htons(uint16_t __hostshort)

{
  uint16_t uVar1;
  
  uVar1 = (*(code *)PTR_htons_00033020)(__hostshort);
  return uVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_GetStream @ 000112e4 size=12 ===== */

void RK_MPI_VENC_GetStream(void)

{
  (*(code *)PTR_RK_MPI_VENC_GetStream_00033024)();
  return;
}



/* ===== <EXTERNAL>::calloc @ 000112f0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_00033028)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 000112fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_0003302c)();
  return piVar1;
}



/* ===== <EXTERNAL>::clock_gettime @ 00011308 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_clock_gettime_00033030)(__clock_id);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChn @ 00011314 size=12 ===== */

void RK_MPI_VI_DisableChn(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableChn_00033034)();
  return;
}



/* ===== <EXTERNAL>::usleep @ 00011320 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_usleep_00033038)(__useconds);
  return iVar1;
}



/* ===== <EXTERNAL>::memcpy @ 0001132c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_0003303c)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_CreateChn @ 00011338 size=12 ===== */

void RK_MPI_VENC_CreateChn(void)

{
  (*(code *)PTR_RK_MPI_VENC_CreateChn_00033040)();
  return;
}



/* ===== <EXTERNAL>::send @ 00011344 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t send(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_send_00033044)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::gettimeofday @ 00011350 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_gettimeofday_00033048)(__tv);
  return iVar1;
}



/* ===== <EXTERNAL>::strcat @ 0001135c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcat_0003304c)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevAttr @ 00011368 size=12 ===== */

void RK_MPI_VI_GetDevAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_GetDevAttr_00033050)();
  return;
}



/* ===== <EXTERNAL>::malloc @ 00011374 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00033054)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::strncmp @ 00011380 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_00033058)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::recv @ 00011398 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recv(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_recv_00033060)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::strlen @ 000113a4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00033064)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::ctime @ 000113b0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * ctime(time_t *__timer)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_ctime_00033068)(__timer);
  return pcVar1;
}



/* ===== <EXTERNAL>::sendto @ 000113bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t sendto(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,socklen_t __addr_len)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_sendto_0003306c)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::fcntl @ 000113c8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fcntl(int __fd,int __cmd,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fcntl_00033070)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::snprintf @ 000113d4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_00033074)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::htonl @ 000113e0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint32_t htonl(uint32_t __hostlong)

{
  uint32_t uVar1;
  
  uVar1 = (*(code *)PTR_htonl_00033078)(__hostlong);
  return uVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnAttr @ 000113ec size=12 ===== */

void RK_MPI_VI_SetChnAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetChnAttr_0003307c)();
  return;
}



/* ===== <EXTERNAL>::select @ 000113f8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_select_00033080)(__nfds);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_UnBind @ 00011404 size=12 ===== */

void RK_MPI_SYS_UnBind(void)

{
  (*(code *)PTR_RK_MPI_SYS_UnBind_00033084)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 00011410 size=12 ===== */

void RK_MPI_SYS_Init(void)

{
  (*(code *)PTR_RK_MPI_SYS_Init_00033088)();
  return;
}



/* ===== <EXTERNAL>::memmove @ 0001141c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_0003308c)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::setsockopt @ 00011428 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setsockopt_00033090)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_LOG @ 00011434 size=12 ===== */

void RK_LOG(void)

{
  (*(code *)PTR_RK_LOG_00033094)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StopRecvFrame @ 00011440 size=12 ===== */

void RK_MPI_VENC_StopRecvFrame(void)

{
  (*(code *)PTR_RK_MPI_VENC_StopRecvFrame_00033098)();
  return;
}



/* ===== <EXTERNAL>::time @ 0001144c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_0003309c)(__timer);
  return tVar1;
}



/* ===== <EXTERNAL>::pthread_create @ 00011458 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_000330a0)(__newthread);
  return iVar1;
}



/* ===== <EXTERNAL>::close @ 00011464 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_000330a4)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::sscanf @ 00011470 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sscanf_000330a8)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::strncpy @ 0001147c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_000330ac)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevBindPipe @ 00011488 size=12 ===== */

void RK_MPI_VI_SetDevBindPipe(void)

{
  (*(code *)PTR_RK_MPI_VI_SetDevBindPipe_000330b0)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevIsEnable @ 00011494 size=12 ===== */

void RK_MPI_VI_GetDevIsEnable(void)

{
  (*(code *)PTR_RK_MPI_VI_GetDevIsEnable_000330b4)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableDev @ 000114a0 size=12 ===== */

void RK_MPI_VI_EnableDev(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableDev_000330b8)();
  return;
}



/* ===== <EXTERNAL>::memset @ 000114ac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_000330bc)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::inet_ntoa @ 000114b8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * inet_ntoa(in_addr __in)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_inet_ntoa_000330c0)(__in.s_addr);
  return pcVar1;
}



/* ===== <EXTERNAL>::RK_MPI_MB_DestroyPool @ 000114c4 size=12 ===== */

void RK_MPI_MB_DestroyPool(void)

{
  (*(code *)PTR_RK_MPI_MB_DestroyPool_000330c4)();
  return;
}



/* ===== <EXTERNAL>::fprintf @ 000114d0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_000330c8)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::ntohs @ 000114dc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint16_t ntohs(uint16_t __netshort)

{
  uint16_t uVar1;
  
  uVar1 = (*(code *)PTR_ntohs_000330cc)(__netshort);
  return uVar1;
}



/* ===== <EXTERNAL>::abort @ 000114e8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_000330d0)();
  return;
}



/* ===== <EXTERNAL>::recvfrom @ 000114f4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recvfrom(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,socklen_t *__addr_len)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_recvfrom_000330d4)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::sprintf @ 00011500 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_000330d8)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StartRecvFrame @ 0001150c size=12 ===== */

void RK_MPI_VENC_StartRecvFrame(void)

{
  (*(code *)PTR_RK_MPI_VENC_StartRecvFrame_000330dc)();
  return;
}



/* ===== <EXTERNAL>::socket @ 00011518 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_socket_000330e0)(__domain);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 00011524 size=12 ===== */

void RK_MPI_MB_Handle2VirAddr(void)

{
  (*(code *)PTR_RK_MPI_MB_Handle2VirAddr_000330e4)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_DestroyChn @ 00011530 size=12 ===== */

void RK_MPI_VENC_DestroyChn(void)

{
  (*(code *)PTR_RK_MPI_VENC_DestroyChn_000330e8)();
  return;
}



/* ===== <EXTERNAL>::raise @ 0001153c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_000330ec)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::strstr @ 00011548 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strstr_000330f0)(__haystack);
  return pcVar1;
}



/* ===== <EXTERNAL>::strcmp @ 00011554 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_000330f4)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_ReleaseStream @ 00011560 size=12 ===== */

void RK_MPI_VENC_ReleaseStream(void)

{
  (*(code *)PTR_RK_MPI_VENC_ReleaseStream_000330f8)();
  return;
}



/* ===== <EXTERNAL>::getopt @ 0001156c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getopt_000330fc)(___argc);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetEptz @ 00011578 size=12 ===== */

void RK_MPI_VI_SetEptz(void)

{
  (*(code *)PTR_RK_MPI_VI_SetEptz_00033100)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevAttr @ 00011584 size=12 ===== */

void RK_MPI_VI_SetDevAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetDevAttr_00033104)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChn @ 00011590 size=12 ===== */

void RK_MPI_VI_EnableChn(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableChn_00033108)();
  return;
}



/* ===== <EXTERNAL>::accept @ 0001159c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int accept(int __fd,sockaddr *__addr,socklen_t *__addr_len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_accept_0003310c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 000115a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00033110)(__ptr);
  return;
}



/* ===== <EXTERNAL>::atoi @ 000115b4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_00033114)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DetachMbPool @ 000115c0 size=12 ===== */

void RK_MPI_VI_DetachMbPool(void)

{
  (*(code *)PTR_RK_MPI_VI_DetachMbPool_00033118)();
  return;
}



/* ===== <EXTERNAL>::strerror @ 000115cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_0003311c)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::listen @ 000115d8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int listen(int __fd,int __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_listen_00033120)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::printf @ 000115e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00033124)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableDev @ 000115f0 size=12 ===== */

void RK_MPI_VI_DisableDev(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableDev_00033128)();
  return;
}



/* ===== <EXTERNAL>::puts @ 000115fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_0003312c)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::signal @ 00011608 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = (__sighandler_t)(*(code *)PTR_signal_00033130)(__sig);
  return p_Var1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00011614 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00033134)();
  return;
}



/* ===== <EXTERNAL>::pthread_join @ 00011620 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_00033138)(__th);
  return iVar1;
}



/* ===== FUN_00011630 @ 00011630 size=1744 ===== */

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_00011630(int param_1,char **param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  __useconds_t __useconds;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  pthread_t local_d0 [6];
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  int local_b0;
  int local_ac [4];
  uint local_9c;
  undefined4 local_98;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  undefined4 local_80;
  undefined4 local_74;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_48;
  
  puVar1 = DAT_00011d04;
  iVar12 = 0;
  iVar11 = 8;
  iVar8 = 0x438;
  iVar10 = 0x780;
  uVar7 = DAT_00011d00;
LAB_00011658:
  do {
    iVar4 = getopt(param_1,param_2,DAT_00011d08);
    if (iVar4 == -1) {
      RK_LOG(3,DAT_00011d10,DAT_00011d0c,DAT_00011d14,0x1c0,uVar7);
      RK_LOG(3,DAT_00011d10,DAT_00011d18,DAT_00011d14,0x1c1,iVar10,iVar8);
      RK_LOG(3,DAT_00011d10,DAT_00011d1c,DAT_00011d14,0x1c2,iVar12);
      piVar2 = DAT_00011d28;
      iVar4 = *DAT_00011d20;
      RK_LOG(3,DAT_00011d10,DAT_00011d24,DAT_00011d14,0x1c3,iVar4);
      signal(2,DAT_00011d2c);
      iVar12 = FUN_00013248(0x22a);
      *piVar2 = iVar12;
      if (iVar12 == 0) {
        uVar7 = 0x1d2;
LAB_00011750:
        iVar10 = 0;
        uVar15 = DAT_00011d38;
      }
      else {
        iVar12 = FUN_00013084(iVar12,DAT_00011d30);
        piVar3 = DAT_00011d34;
        *DAT_00011d34 = iVar12;
        if (iVar12 == 0) {
          uVar7 = 0x1d7;
          goto LAB_00011750;
        }
        if (iVar11 == 8) {
          uVar7 = 1;
        }
        else {
          if (iVar11 != 0xc) {
            RK_LOG(2,DAT_00011d10,DAT_00011d74,DAT_00011d14,0x1df,iVar4);
            return 0xffffffff;
          }
          uVar7 = 2;
        }
        FUN_000132b8(iVar12,uVar7,0);
        iVar12 = *piVar3;
        uVar13 = FUN_0001822c();
        uVar14 = FUN_00018338();
        FUN_00018370(iVar12,(int)((ulonglong)uVar14 >> 0x20),(int)uVar13,
                     (int)((ulonglong)uVar13 >> 0x20),uVar14);
        iVar12 = RK_MPI_SYS_Init();
        if (iVar12 != 0) {
          iVar10 = 0;
          RK_LOG(2,DAT_00011d10,DAT_00011d70,DAT_00011d14,0x1e6);
          goto LAB_00011768;
        }
        uVar7 = DAT_00011d78;
        RK_LOG(4,DAT_00011d10,DAT_00011d7c,DAT_00011d80,0xe9,DAT_00011d78);
        local_d0[2] = *(pthread_t *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        local_d0[3] = *(pthread_t *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_b4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        local_d0[1] = 0;
        local_d0[4] = 0;
        local_d0[5] = local_d0[2];
        uStack_b8 = local_d0[3];
        memset(&local_b0,0,0x44);
        iVar12 = RK_MPI_VI_GetDevAttr(0,local_d0 + 1);
        if (iVar12 == DAT_00011d84) {
          iVar12 = RK_MPI_VI_SetDevAttr(0,local_d0 + 1);
          if (iVar12 == 0) goto LAB_00011b48;
          uVar15 = 0xf8;
          uVar7 = DAT_00011d88;
LAB_000119f0:
          RK_LOG(2,DAT_00011d10,uVar7,DAT_00011d80,uVar15,iVar12);
        }
        else {
          RK_LOG(2,DAT_00011d10,DAT_00011d98,DAT_00011d80,0xfc,uVar7);
LAB_00011b48:
          iVar12 = RK_MPI_VI_GetDevIsEnable(0);
          if (iVar12 != 0) {
            iVar12 = RK_MPI_VI_EnableDev(0);
            if (iVar12 == 0) {
              local_b0 = iVar12;
              local_ac[0] = iVar12;
              iVar12 = RK_MPI_VI_SetDevBindPipe(0,&local_b0);
              if (iVar12 == 0) goto LAB_000119fc;
              uVar15 = 0x10c;
              uVar7 = DAT_00011da0;
            }
            else {
              uVar15 = 0x104;
              uVar7 = DAT_00011d9c;
            }
            goto LAB_000119f0;
          }
          RK_LOG(2,DAT_00011d10,DAT_00011da4,DAT_00011d80,0x110);
        }
LAB_000119fc:
        memset(local_ac + 1,0,100);
        local_80 = 2;
        local_74 = 4;
        local_90 = 2;
        local_b0 = iVar10;
        local_ac[0] = iVar8;
        uVar5 = RK_MPI_VI_SetChnAttr(0,0,&local_b0);
        uVar6 = RK_MPI_VI_EnableChn(0);
        if ((uVar5 | uVar6) != 0) {
          RK_LOG(2,DAT_00011d10,DAT_00011d90,DAT_00011d8c,0x128,uVar5 | uVar6);
        }
        memset(local_ac,0,0x84);
        local_48 = 0x2800;
        local_60 = 1;
        local_5c = 1;
        local_98 = 100;
        local_9c = (uint)(iVar8 * iVar10 * 3) >> 1;
        local_80 = 2;
        local_b0 = iVar11;
        local_90 = iVar10;
        local_8c = iVar8;
        local_88 = iVar10;
        local_84 = iVar8;
        RK_MPI_VENC_CreateChn(0,&local_b0);
        local_d0[1] = 0xffffffff;
        RK_MPI_VENC_StartRecvFrame(0,local_d0 + 1);
        local_d0[3] = 0;
        local_d0[1] = 8;
        local_d0[2] = 0;
        local_ac[1] = 0;
        local_b0 = 4;
        local_ac[0] = 0;
        iVar10 = RK_MPI_SYS_Bind(local_d0 + 1,&local_b0);
        if (iVar10 == 0) {
          pthread_create(local_d0,(pthread_attr_t *)0x0,DAT_00011da8,(void *)0x0);
          __useconds = DAT_00011db0;
          pcVar9 = DAT_00011dac;
          while (*pcVar9 == '\0') {
            usleep(__useconds);
          }
          pthread_join(local_d0[0],(void **)0x0);
          if (*piVar2 != 0) {
            FUN_000138d8();
          }
          iVar10 = RK_MPI_SYS_UnBind(local_d0 + 1,&local_b0);
          if (iVar10 == 0) {
            uVar7 = RK_MPI_VI_DisableChn(0,0);
            RK_LOG(3,DAT_00011d10,DAT_00011db8,DAT_00011d14,0x210,uVar7);
            iVar10 = RK_MPI_VENC_StopRecvFrame(0);
            if (iVar10 != 0) {
              uVar15 = 0x214;
              uVar7 = DAT_00011dbc;
LAB_00011ca4:
              RK_LOG(2,DAT_00011d10,uVar7,DAT_00011d14,uVar15,iVar10);
              return 0xffffffff;
            }
            iVar10 = RK_MPI_VENC_DestroyChn();
            if (iVar10 != 0) {
              uVar15 = 0x21a;
              uVar7 = DAT_00011dc0;
              goto LAB_00011ca4;
            }
            iVar10 = RK_MPI_VI_DisableDev();
            uVar16 = 0x21f;
            uVar15 = 3;
            uVar7 = DAT_00011dc4;
          }
          else {
            uVar16 = 0x20b;
            uVar15 = 2;
            uVar7 = DAT_00011db4;
          }
          RK_LOG(uVar15,DAT_00011d10,uVar7,DAT_00011d14,uVar16,iVar10);
LAB_00011768:
          RK_LOG(2,DAT_00011d10,DAT_00011d3c,DAT_00011d14,0x222,iVar10);
          RK_MPI_SYS_Exit();
          return 0;
        }
        uVar7 = 0x1fb;
        uVar15 = DAT_00011d94;
      }
      RK_LOG(2,DAT_00011d10,uVar15,DAT_00011d14,uVar7);
      goto LAB_00011768;
    }
    if (iVar4 != 99) {
      if (iVar4 < 100) {
        if (iVar4 == 0x49) {
          iVar12 = atoi((char *)*puVar1);
        }
        else if (iVar4 != 0x61) {
LAB_000117ac:
          pcVar9 = *param_2;
          puts(DAT_00011d40);
          printf(DAT_00011d44,pcVar9);
          puts(DAT_00011d48);
          puts(DAT_00011d4c);
          puts(DAT_00011d50);
          puts(DAT_00011d54);
          puts(DAT_00011d58);
          puts(DAT_00011d5c);
          return 0;
        }
      }
      else if (iVar4 == 0x68) {
        iVar8 = atoi((char *)*puVar1);
      }
      else if (iVar4 == 0x77) {
        iVar10 = atoi((char *)*puVar1);
      }
      else {
        if (iVar4 != 0x65) goto LAB_000117ac;
        pcVar9 = (char *)*puVar1;
        iVar11 = strcmp(pcVar9,DAT_00011d60);
        if (iVar11 == 0) {
          iVar11 = 8;
          uVar7 = DAT_00011d00;
        }
        else {
          iVar11 = strcmp(pcVar9,DAT_00011d64);
          if (iVar11 != 0) {
            RK_LOG(2,DAT_00011d10,DAT_00011d68,DAT_00011d14,0x1b5);
            return 0;
          }
          iVar11 = 0xc;
          uVar7 = DAT_00011d6c;
        }
      }
      goto LAB_00011658;
    }
    iVar4 = atoi((char *)*puVar1);
    *DAT_00011d20 = iVar4;
  } while( true );
}



/* ===== entry @ 00011dc8 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_0003305c)
            (DAT_00011dfc,param_2,&stack0x00000004,DAT_00011e00,DAT_00011df8,param_1);
  return;
}



/* ===== FUN_00011e04 @ 00011e04 size=32 ===== */

void FUN_00011e04(void)

{
  if (DAT_00011e28 == DAT_00011e24) {
    return;
  }
  if (DAT_00011e2c == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011e2c)();
  return;
}



/* ===== _FINI_0 @ 00011e68 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00011ea4;
  if (*DAT_00011ea4 != '\0') {
    return;
  }
  FUN_00011e04();
  if (DAT_00011ea8 != 0) {
    __deregister_frame_info(DAT_00011eac);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00011eb0 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00011ed4 != 0) {
    __register_frame_info(DAT_00011edc,DAT_00011ed8);
  }
  if ((DAT_00011e60 - DAT_00011e5c >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00011e64 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011e64)();
  return;
}



/* ===== FUN_00011ee0 @ 00011ee0 size=664 ===== */

undefined4 FUN_00011ee0(void)

{
  bool bVar1;
  bool bVar2;
  char *pcVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  uint extraout_r1;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined4 uVar19;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  int iStack_1f4;
  int local_1f0;
  int local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  int local_1e0;
  int iStack_1dc;
  int local_1d8;
  int local_1d4;
  undefined4 *local_1d0 [107];
  
  iVar15 = 0;
  iVar16 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  iVar17 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iVar18 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_200 = 1;
  local_1f8 = 0;
  local_1fc = 1;
  iStack_1f4 = iVar16;
  local_1f0 = iVar17;
  local_1ec = iVar18;
  local_1d0[0] = malloc(0x88);
  pcVar3 = DAT_00012178;
  if (local_1d0[0] != (undefined4 *)0x0) {
    uVar10 = 0;
    do {
      if (*pcVar3 != '\0') goto LAB_00012018;
      iVar6 = RK_MPI_VENC_GetStream(0,local_1d0,DAT_00012188);
      piVar5 = DAT_00012190;
      piVar4 = DAT_0001218c;
      if (iVar6 != 0) {
        uVar19 = 0xae;
        uVar7 = DAT_00012180;
LAB_0001214c:
        RK_LOG(2,DAT_00012198,uVar7,DAT_00012184,uVar19,iVar6);
        goto LAB_00012158;
      }
      if ((*DAT_0001218c != 0) && (*DAT_00012190 != 0)) {
        uVar7 = RK_MPI_MB_Handle2VirAddr(*local_1d0[0]);
        FUN_00016dc0(*piVar5,uVar7,local_1d0[0][1],local_1d0[0],local_1d0[0][2],local_1d0[0][3]);
        FUN_00016214(*piVar4);
      }
      iVar6 = RK_MPI_VENC_ReleaseStream(0,local_1d0);
      if (iVar6 != 0) {
        uVar19 = 0xa8;
        uVar7 = DAT_00012194;
        goto LAB_0001214c;
      }
      uVar10 = uVar10 + 1;
      iVar11 = 0x280;
      local_1e4 = 1;
      local_1e8 = 1;
      local_1e0 = iVar15;
      iStack_1dc = iVar16;
      local_1d8 = iVar17;
      local_1d4 = iVar18;
      FUN_00020020(uVar10,0x14);
      iVar14 = 0x168;
      bVar2 = false;
      iVar8 = 0;
      uVar9 = 0;
      iVar12 = 0;
      iVar13 = 0;
      bVar1 = false;
      iVar6 = 0;
      do {
        if (uVar9 < 0xb) {
          if (uVar9 == extraout_r1) {
            iVar6 = uVar9 << 5;
            iVar8 = uVar9 * 0x12;
            iVar12 = 0x5a0 - iVar14;
            iVar13 = 0xa00 - iVar11;
LAB_00011fa0:
            bVar2 = true;
            bVar1 = true;
          }
        }
        else if (uVar9 == extraout_r1) {
          iVar6 = uVar9 * -0x20 + 0x280;
          iVar8 = uVar9 * -0x12 + 0x168;
          iVar12 = iVar14;
          iVar13 = iVar11;
          goto LAB_00011fa0;
        }
        uVar9 = uVar9 + 1;
        iVar11 = iVar11 + 0x40;
        iVar14 = iVar14 + 0x24;
      } while (uVar9 != 0x14);
      if ((bVar1) &&
         (local_1e0 = iVar6, iStack_1dc = iVar8, local_1d8 = iVar13, local_1d4 = iVar12, bVar2)) {
        RK_MPI_VI_SetEptz(0,0,local_1e8,local_1e4,iVar6,iVar8,iVar13,iVar12);
      }
    } while (uVar10 <= *DAT_0001217c);
    *DAT_00012178 = '\x01';
LAB_00012018:
    RK_MPI_VI_GetEptz(0,0,&local_200);
    if ((local_1f0 != 0x780) || (local_1ec != 0x438)) {
      local_1f0 = 0x780;
      local_1ec = 0x438;
      RK_MPI_VI_SetEptz(0,0,local_200,local_1fc,local_1f8,iStack_1f4,0x780,0x438);
    }
LAB_00012158:
    RK_MPI_VI_DetachMbPool(0);
    RK_MPI_MB_DestroyPool(1);
    free(local_1d0[0]);
  }
  return 0;
}



/* ===== FUN_000121d0 @ 000121d0 size=28 ===== */

int FUN_000121d0(void)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  return *piVar1;
}



/* ===== FUN_000121ec @ 000121ec size=40 ===== */

char * FUN_000121ec(int param_1)

{
  char *pcVar1;
  
  pcVar1 = strerror(param_1);
  return pcVar1;
}



/* ===== FUN_00012214 @ 00012214 size=156 ===== */

void * FUN_00012214(void)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,0x14);
  if (pvVar1 == (void *)0x0) {
    printf((char *)(DAT_000122b8 + 0x12260),DAT_000122b4 + 0x12258,0x9a,DAT_000122b0 + 0x1224c);
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



/* ===== FUN_000122bc @ 000122bc size=48 ===== */

void FUN_000122bc(void *param_1)

{
  if (param_1 != (void *)0x0) {
    free(param_1);
  }
  return;
}



/* ===== FUN_000122ec @ 000122ec size=204 ===== */

void * FUN_000122ec(int param_1)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,0x168);
  if (pvVar1 == (void *)0x0) {
    printf((char *)(DAT_000123c0 + 0x1233c),DAT_000123bc + 0x12334,0xad,DAT_000123b8 + 0x12328);
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



/* ===== FUN_000123c4 @ 000123c4 size=136 ===== */

void FUN_000123c4(void *param_1)

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



/* ===== FUN_0001244c @ 0001244c size=180 ===== */

void * FUN_0001244c(int param_1)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,0x434);
  if (pvVar1 == (void *)0x0) {
    printf((char *)(DAT_00012508 + 0x1249c),DAT_00012504 + 0x12494,0xc4,DAT_00012500 + 0x12488);
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



/* ===== FUN_0001250c @ 0001250c size=136 ===== */

void FUN_0001250c(void *param_1)

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



/* ===== FUN_00012594 @ 00012594 size=128 ===== */

void FUN_00012594(int param_1,int param_2)

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



/* ===== FUN_00012614 @ 00012614 size=144 ===== */

void FUN_00012614(int param_1)

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



/* ===== FUN_000126a4 @ 000126a4 size=536 ===== */

int * FUN_000126a4(int param_1)

{
  undefined4 uVar1;
  int local_2c;
  sockaddr local_24;
  int local_14;
  int local_10;
  int *local_c;
  
  local_c = (int *)0x0;
  local_c = (int *)FUN_00012214();
  if (local_c == (int *)0x0) {
    local_c = (int *)0x0;
  }
  else {
    local_10 = socket(2,1,0);
    if (local_10 == -1) {
      uVar1 = FUN_000121d0();
      uVar1 = FUN_000121ec(uVar1);
      printf((char *)(DAT_000128c4 + 0x12730),DAT_000128c0 + 0x12728,0xfa,DAT_000128bc + 0x1271c,
             uVar1);
      FUN_000122bc(local_c);
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
        uVar1 = FUN_000121d0();
        uVar1 = FUN_000121ec(uVar1);
        printf((char *)(DAT_000128d0 + 0x127f4),DAT_000128cc + 0x127ec,0x108,DAT_000128c8 + 0x127e0,
               uVar1);
        close(local_10);
        FUN_000122bc(local_c);
        local_c = (int *)0x0;
      }
      else {
        local_14 = listen(local_10,0x80);
        if (local_14 == -1) {
          uVar1 = FUN_000121d0();
          uVar1 = FUN_000121ec(uVar1);
          printf((char *)(DAT_000128dc + 0x12860),DAT_000128d8 + 0x12858,0x110,
                 DAT_000128d4 + 0x1284c,uVar1);
          close(local_10);
          FUN_000122bc(local_c);
          local_c = (int *)0x0;
        }
        else {
          *local_c = local_10;
          printf((char *)(DAT_000128e8 + 0x128ac),DAT_000128e4 + 0x128a4,0x118,
                 DAT_000128e0 + 0x12898,local_2c);
        }
      }
    }
  }
  return local_c;
}



/* ===== FUN_000128ec @ 000128ec size=932 ===== */

undefined4 FUN_000128ec(int param_1)

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
    printf((char *)(DAT_00012c98 + 0x12980),DAT_00012c94 + 0x12978,0x15b,DAT_00012c90 + 0x1296c,
           pcVar2);
  }
  else {
    local_c = local_c | 0x800;
    local_c = fcntl(param_1,4,local_c);
    if ((int)local_c < 0) {
      piVar1 = __errno_location();
      pcVar2 = strerror(*piVar1);
      printf((char *)(DAT_00012ca4 + 0x129ec),DAT_00012ca0 + 0x129e4,0x160,DAT_00012c9c + 0x129d8,
             pcVar2);
    }
  }
  local_c = setsockopt(param_1,1,7,&local_10,4);
  if (local_c == -1) {
    uVar3 = FUN_000121d0();
    uVar3 = FUN_000121ec(uVar3);
    printf((char *)(DAT_00012cb0 + 0x12a54),DAT_00012cac + 0x12a4c,0x166,DAT_00012ca8 + 0x12a40,
           uVar3);
  }
  local_c = setsockopt(param_1,1,9,&local_14,4);
  if (local_c == -1) {
    uVar3 = FUN_000121d0();
    uVar3 = FUN_000121ec(uVar3);
    printf((char *)(DAT_00012cbc + 0x12abc),DAT_00012cb8 + 0x12ab4,0x16b,DAT_00012cb4 + 0x12aa8,
           uVar3);
  }
  local_c = setsockopt(param_1,6,4,&local_18,4);
  if (local_c == -1) {
    uVar3 = FUN_000121d0();
    uVar3 = FUN_000121ec(uVar3);
    printf((char *)(DAT_00012cc8 + 0x12b24),DAT_00012cc4 + 0x12b1c,0x170,DAT_00012cc0 + 0x12b10,
           uVar3);
  }
  local_c = setsockopt(param_1,6,5,&local_1c,4);
  if (local_c == -1) {
    uVar3 = FUN_000121d0();
    uVar3 = FUN_000121ec(uVar3);
    printf((char *)(DAT_00012cd4 + 0x12b8c),DAT_00012cd0 + 0x12b84,0x175,DAT_00012ccc + 0x12b78,
           uVar3);
  }
  local_c = setsockopt(param_1,6,6,&local_20,4);
  if (local_c == -1) {
    uVar3 = FUN_000121d0();
    uVar3 = FUN_000121ec(uVar3);
    printf((char *)(DAT_00012ce0 + 0x12bf4),DAT_00012cdc + 0x12bec,0x17a,DAT_00012cd8 + 0x12be0,
           uVar3);
  }
  memset(&local_28,0,8);
  local_28 = 1;
  local_24 = 0;
  local_c = setsockopt(param_1,1,0xd,&local_28,8);
  if (local_c == -1) {
    uVar3 = FUN_000121d0();
    uVar3 = FUN_000121ec(uVar3);
    printf((char *)(DAT_00012cec + 0x12c80),DAT_00012ce8 + 0x12c78,0x182,DAT_00012ce4 + 0x12c6c,
           uVar3);
  }
  return 0;
}



/* ===== FUN_00012cf0 @ 00012cf0 size=304 ===== */

undefined4 * FUN_00012cf0(int *param_1)

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
    uVar2 = FUN_000121d0();
    uVar2 = FUN_000121ec(uVar2);
    printf((char *)(DAT_00012e28 + 0x12d70),DAT_00012e24 + 0x12d68,0x191,DAT_00012e20 + 0x12d5c,
           uVar2);
    local_14 = (undefined4 *)0x0;
  }
  else {
    FUN_000128ec(local_18);
    pcVar3 = inet_ntoa((in_addr)auStack_28._4_4_);
    uVar1 = ntohs(auStack_28._2_2_);
    printf((char *)(DAT_00012e34 + 0x12dc4),DAT_00012e30 + 0x12dbc,0x198,DAT_00012e2c + 0x12db0,
           pcVar3,(uint)uVar1);
    local_14 = (undefined4 *)FUN_0001244c(param_1);
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



/* ===== FUN_00012e38 @ 00012e38 size=160 ===== */

void FUN_00012e38(int param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    uVar2 = *(undefined4 *)(param_1 + 4);
    pcVar1 = inet_ntoa((in_addr)*(in_addr_t *)(param_1 + 8));
    printf((char *)(DAT_00012ee0 + 0x12e94),DAT_00012edc + 0x12e8c,0x1ab,DAT_00012ed8 + 0x12e80,
           uVar2,pcVar1);
    FUN_00012614(param_1);
    FUN_000148f0(param_1,0);
    FUN_000148f0(param_1,1);
    close(*(int *)(param_1 + 4));
    FUN_0001250c(param_1);
  }
  return;
}



/* ===== FUN_00012ee4 @ 00012ee4 size=408 ===== */

bool FUN_00012ee4(char *param_1,char *param_2)

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
    *(undefined2 *)(local_48 + sVar1) = *(undefined2 *)(DAT_0001307c + 0x12fe0);
  }
  sVar1 = strlen(local_88);
  if (*(char *)((int)&local_8c + sVar1 + 3) != '/') {
    sVar1 = strlen(local_88);
    *(undefined2 *)(local_88 + sVar1) = *(undefined2 *)(DAT_00013080 + 0x13034);
  }
  sVar1 = strlen(local_48);
  iVar2 = strncmp(local_48,local_88,sVar1);
  return iVar2 == 0;
}



/* ===== FUN_00013084 @ 00013084 size=416 ===== */

char * FUN_00013084(int param_1,char *param_2)

{
  int iVar1;
  char *local_c;
  
  local_c = (char *)0x0;
  if (((param_1 == 0) || (param_2 == (char *)0x0)) || (*param_2 == '\0')) {
    printf((char *)(DAT_0001322c + 0x130f0),DAT_00013228 + 0x130e8,0x1cc,DAT_00013224 + 0x130dc);
  }
  else {
    for (local_c = *(char **)(param_1 + 4); local_c != (char *)0x0;
        local_c = *(char **)(local_c + 0x15c)) {
      iVar1 = FUN_00012ee4(local_c,param_2);
      if ((iVar1 != 0) || (iVar1 = FUN_00012ee4(param_2,local_c), iVar1 != 0)) {
        printf((char *)(DAT_00013238 + 0x1316c),DAT_00013234 + 0x13164,0x1d2,DAT_00013230 + 0x13158,
               local_c,param_2);
        goto LAB_00013200;
      }
    }
    local_c = (char *)FUN_000122ec(param_1);
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
      printf((char *)(DAT_00013244 + 0x131f4),DAT_00013240 + 0x131ec,0x1e0,DAT_0001323c + 0x131e0,
             local_c);
      return local_c;
    }
  }
LAB_00013200:
  if (local_c != (char *)0x0) {
    free(local_c);
  }
  return (char *)0x0;
}



/* ===== FUN_00013248 @ 00013248 size=40 ===== */

undefined4 FUN_00013248(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000126a4(param_1);
  return uVar1;
}



/* ===== FUN_00013270 @ 00013270 size=72 ===== */

undefined4 FUN_00013270(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00013084(param_1,param_2);
  FUN_000132b8(uVar1,1,0,0);
  return uVar1;
}



/* ===== FUN_000132b8 @ 000132b8 size=596 ===== */

undefined4 FUN_000132b8(int param_1,int param_2,int param_3,int param_4)

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
        iVar1 = FUN_0001e204(param_3,param_4,param_1 + 0x48);
        if (iVar1 < 1) {
          printf((char *)(DAT_00013520 + 0x13430),DAT_0001351c + 0x13428,0x220,
                 DAT_00013518 + 0x1341c);
        }
      }
      else if ((param_2 == 2) && (iVar1 = FUN_0001e468(param_3,param_4,param_1 + 0x48), iVar1 < 1))
      {
        printf((char *)(DAT_0001352c + 0x13478),DAT_00013528 + 0x13470,0x226,DAT_00013524 + 0x13464)
        ;
      }
    }
    if (*(int *)(param_1 + 0x138) == 0) {
      uVar2 = FUN_0001d8d4(0x5b0,0x4b1);
      *(undefined4 *)(param_1 + 0x138) = uVar2;
      if (*(int *)(param_1 + 0x138) == 0) {
        printf((char *)(DAT_00013538 + 0x134e8),DAT_00013534 + 0x134e0,0x230,DAT_00013530 + 0x134d4)
        ;
        *(undefined4 *)(param_1 + 0x40) = 0;
        return 0xffffffff;
      }
    }
    uVar2 = 0;
  }
  else {
    printf((char *)(DAT_00013514 + 0x1334c),DAT_00013510 + 0x13344,0x211,DAT_0001350c + 0x13338,
           param_2);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== FUN_0001353c @ 0001353c size=516 ===== */

undefined4 FUN_0001353c(int param_1,int param_2,int param_3,int param_4)

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
       (iVar1 = FUN_0001e76c(param_3,param_4,param_1 + 0x114), iVar1 < 1)) {
      printf((char *)(DAT_00013754 + 0x136b4),DAT_00013750 + 0x136ac,0x255,DAT_0001374c + 0x136a0);
    }
    if (*(int *)(param_1 + 0x13c) == 0) {
      uVar2 = FUN_0001d8d4(0x5b0,0x29);
      *(undefined4 *)(param_1 + 0x13c) = uVar2;
      if (*(int *)(param_1 + 0x13c) == 0) {
        printf((char *)(DAT_00013760 + 0x1371c),DAT_0001375c + 0x13714,0x25f,DAT_00013758 + 0x13708)
        ;
        *(undefined4 *)(param_1 + 0x44) = 0;
        return 0xffffffff;
      }
    }
    uVar2 = 0;
  }
  else {
    printf((char *)(DAT_00013748 + 0x135d4),DAT_00013744 + 0x135cc,0x245,DAT_00013740 + 0x135c0,
           param_2);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== FUN_00013808 @ 00013808 size=196 ===== */

void FUN_00013808(int param_1)

{
  if (param_1 != 0) {
    while (*(int *)(param_1 + 0x154) != 0) {
      FUN_00012e38(*(int *)(param_1 + 0x154));
    }
    printf((char *)(DAT_000138d4 + 0x13878),DAT_000138d0 + 0x13870,0x285,DAT_000138cc + 0x13864,
           param_1);
    if (*(int *)(param_1 + 0x138) != 0) {
      FUN_0001dd68(*(undefined4 *)(param_1 + 0x138));
    }
    if (*(int *)(param_1 + 0x13c) != 0) {
      FUN_0001dd68(*(undefined4 *)(param_1 + 0x13c));
    }
    FUN_000123c4(param_1);
  }
  return;
}



/* ===== FUN_000138d8 @ 000138d8 size=144 ===== */

void FUN_000138d8(int *param_1)

{
  if (param_1 != (int *)0x0) {
    while (param_1[3] != 0) {
      FUN_00012e38(param_1[3]);
    }
    while (param_1[1] != 0) {
      FUN_00013808(param_1[1]);
    }
    close(*param_1);
    FUN_000122bc(param_1);
  }
  return;
}



/* ===== FUN_00013968 @ 00013968 size=1128 ===== */

int FUN_00013968(int param_1,int param_2,char *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *local_c;
  
  iVar1 = sprintf(param_3,(char *)(DAT_00013dd0 + 0x13998));
  pcVar3 = param_3 + iVar1;
  iVar1 = sprintf(pcVar3,(char *)(DAT_00013dd4 + 0x139c0));
  pcVar3 = pcVar3 + iVar1;
  iVar1 = sprintf(pcVar3,(char *)(DAT_00013dd8 + 0x139e8));
  pcVar3 = pcVar3 + iVar1;
  iVar1 = sprintf(pcVar3,(char *)(DAT_00013ddc + 0x13a10));
  pcVar3 = pcVar3 + iVar1;
  iVar1 = param_2;
  if (param_2 == 0) {
    iVar1 = DAT_00013de0 + 0x13a4c;
  }
  iVar1 = sprintf(pcVar3,(char *)(DAT_00013de4 + 0x13a58),iVar1);
  iVar2 = sprintf(pcVar3 + iVar1,(char *)(DAT_00013de8 + 0x13a80));
  local_c = pcVar3 + iVar1 + iVar2;
  if (*(int *)(param_1 + 0x40) != 0) {
    if (*(int *)(param_1 + 0x40) == 1) {
      iVar1 = FUN_0001e8e0(0x60,*(undefined4 *)(param_1 + 0x120),param_1 + 0x48,local_c,
                           param_4 - ((int)local_c - (int)param_3));
      local_c = local_c + iVar1;
    }
    else if (*(int *)(param_1 + 0x40) == 2) {
      iVar1 = FUN_0001eb28(0x60,*(undefined4 *)(param_1 + 0x120),param_1 + 0x48,local_c,
                           param_4 - ((int)local_c - (int)param_3));
      local_c = local_c + iVar1;
    }
    if (param_2 == 0) {
      iVar1 = sprintf(local_c,(char *)(DAT_00013df8 + 0x13bd0),DAT_00013df4 + 0x13bc4);
      local_c = local_c + iVar1;
    }
    else {
      iVar1 = sprintf(local_c,(char *)(DAT_00013df0 + 0x13b9c),param_2,DAT_00013dec + 0x13b90);
      local_c = local_c + iVar1;
    }
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    iVar1 = *(int *)(param_1 + 0x44);
    if (iVar1 == 0x4002) {
      iVar1 = FUN_0001eec8(0x61,*(undefined4 *)(param_1 + 0x130),*(undefined1 *)(param_1 + 0x134),
                           local_c,param_4 - ((int)local_c - (int)param_3));
      local_c = local_c + iVar1;
    }
    else if (iVar1 == 0x4003) {
      iVar1 = FUN_0001ef98(0x61,*(undefined4 *)(param_1 + 0x130),*(undefined1 *)(param_1 + 0x134),
                           param_1 + 0x114,local_c,param_4 - ((int)local_c - (int)param_3));
      local_c = local_c + iVar1;
    }
    else if (iVar1 == 0x4001) {
      iVar1 = FUN_0001edf8(0x61,*(undefined4 *)(param_1 + 0x130),*(undefined1 *)(param_1 + 0x134),
                           local_c,param_4 - ((int)local_c - (int)param_3));
      local_c = local_c + iVar1;
    }
    if (param_2 == 0) {
      iVar1 = sprintf(local_c,(char *)(DAT_00013e08 + 0x13d9c),DAT_00013e04 + 0x13d90);
      local_c = local_c + iVar1;
    }
    else {
      iVar1 = sprintf(local_c,(char *)(DAT_00013e00 + 0x13d68),param_2,DAT_00013dfc + 0x13d5c);
      local_c = local_c + iVar1;
    }
  }
  return (int)local_c - (int)param_3;
}



/* ===== FUN_00013e0c @ 00013e0c size=164 ===== */

undefined4 FUN_00013e0c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  printf((char *)(DAT_00013eb8 + 0x13e4c),DAT_00013eb4 + 0x13e44,0x2d5,DAT_00013eb0 + 0x13e38);
  FUN_0001d5a4(param_3,0x6f);
  return 0;
}



/* ===== FUN_00013ebc @ 00013ebc size=648 ===== */

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_00013ebc(int param_1,int param_2,int param_3)

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
  printf((char *)(DAT_0001414c + 0x13f64),DAT_00014148 + 0x13f5c,0x2ea,DAT_00014144 + 0x13f50);
  iVar1 = FUN_0001d35c(param_2,local_418);
  if ((iVar1 < 0) && ((local_418[0] & 1) == 0)) {
    FUN_0001cde4(param_3,0x196);
    printf((char *)(DAT_00014158 + 0x13fc0),DAT_00014154 + 0x13fb8,0x2ed,DAT_00014150 + 0x13fac);
  }
  else {
    if (*local_14 == 1) {
      sVar2 = strlen(local_498);
      uVar3 = *(undefined4 *)(DAT_0001415c + 0x1400c);
      *(undefined4 *)(local_498 + sVar2) = *(undefined4 *)(DAT_0001415c + 0x14008);
      *(undefined4 *)((int)&uStack_494 + sVar2) = uVar3;
      auStack_490[sVar2] = *(undefined1 *)(DAT_0001415c + 0x14010);
    }
    else {
      sVar2 = strlen(local_498);
      uVar3 = *(undefined4 *)(DAT_00014160 + 82000);
      *(undefined4 *)(local_498 + sVar2) = *(undefined4 *)(DAT_00014160 + 0x1404c);
      *(undefined4 *)((int)&uStack_494 + sVar2) = uVar3;
    }
    strcat(local_498,(char *)((int)local_14 + 6));
    if ((short)local_14[1] != 0) {
      sVar2 = strlen(local_498);
      sprintf(local_498 + sVar2,(char *)(DAT_00014164 + 0x140b8),(uint)*(ushort *)(local_14 + 1));
    }
    strcat(local_498,local_c);
    local_10 = FUN_00013968(local_c,local_498,local_418 + 1,0x400);
    FUN_0001d790(param_3,0);
    FUN_0001d864(param_3,local_10);
    uVar3 = FUN_00018974(local_418 + 1,local_10);
    *(undefined4 *)(param_3 + 0xa8) = uVar3;
  }
  return 0;
}



/* ===== FUN_00014168 @ 00014168 size=52 ===== */

int FUN_00014168(void)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0001419c + 0x1417c);
  *(int *)(DAT_000141a0 + 0x1418c) = iVar1 + 1;
  return iVar1;
}



/* ===== FUN_000141a4 @ 000141a4 size=1048 ===== */

undefined4 FUN_000141a4(undefined4 *param_1)

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
      printf((char *)(DAT_0001460c + 0x145ac),DAT_00014608 + 0x145a4,0x363,DAT_00014604 + 0x14598);
      return 0xffffffff;
    }
    local_10 = socket(2,2,0);
    if (local_10 == -1) break;
    local_14 = socket(2,2,0);
    if (local_14 == -1) {
      uVar1 = FUN_000121d0();
      uVar1 = FUN_000121ec(uVar1);
      printf((char *)(DAT_000145d0 + 0x14278),DAT_000145cc + 0x14270,0x31a,DAT_000145c8 + 0x14264,
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
          printf((char *)(DAT_000145dc + 0x143ec),DAT_000145d8 + 0x143e4,0x347,
                 DAT_000145d4 + 0x143d8,pcVar3);
        }
        else {
          local_1c = local_1c | 0x800;
          local_1c = fcntl(local_10,4,local_1c);
          if ((int)local_1c < 0) {
            piVar2 = __errno_location();
            pcVar3 = strerror(*piVar2);
            printf((char *)(DAT_000145e8 + 0x14458),DAT_000145e4 + 0x14450,0x34c,
                   DAT_000145e0 + 0x14444,pcVar3);
          }
        }
        local_1c = fcntl(local_14,3,0);
        if ((int)local_1c < 0) {
          piVar2 = __errno_location();
          pcVar3 = strerror(*piVar2);
          printf((char *)(DAT_000145f4 + 0x144b4),DAT_000145f0 + 0x144ac,0x351,
                 DAT_000145ec + 0x144a0,pcVar3);
        }
        else {
          local_1c = local_1c | 0x800;
          local_1c = fcntl(local_14,4,local_1c);
          if ((int)local_1c < 0) {
            piVar2 = __errno_location();
            pcVar3 = strerror(*piVar2);
            printf((char *)(DAT_00014600 + 0x14520),DAT_000145fc + 0x14518,0x356,
                   DAT_000145f8 + 0x1450c,pcVar3);
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
  uVar1 = FUN_000121d0();
  uVar1 = FUN_000121ec(uVar1);
  printf((char *)(DAT_000145c4 + 0x14218),DAT_000145c0 + 0x14210,0x314,DAT_000145bc + 0x14204,uVar1)
  ;
  return 0xffffffff;
}



/* ===== FUN_00014610 @ 00014610 size=684 ===== */

undefined4 FUN_00014610(int param_1,int param_2,int param_3,short param_4,uint param_5)

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
    printf((char *)(DAT_000148c4 + 0x14694),DAT_000148c0 + 0x1468c,0x36e,DAT_000148bc + 0x14680,
           pcVar3);
    uVar5 = 0xffffffff;
  }
  else {
    *__ptr = (uint)(param_3 != 0);
    __ptr[8] = __in.s_addr;
    uVar4 = FUN_00014168();
    __ptr[10] = uVar4;
    if (param_3 == 0) {
      iVar6 = FUN_000141a4(__ptr);
      if (iVar6 < 0) {
        free(__ptr);
        return 0xffffffff;
      }
      *(short *)(__ptr + 7) = param_4;
      *(short *)((int)__ptr + 0x1e) = param_4 + 1;
      if (param_2 == 0) {
        iVar6 = DAT_000148e0 + 0x14808;
      }
      else {
        iVar6 = DAT_000148dc + 0x147f8;
      }
      uVar7 = __ptr[10];
      uVar4 = __ptr[6];
      uVar1 = *(ushort *)((int)__ptr + 0x1a);
      pcVar3 = inet_ntoa(__in);
      printf((char *)(DAT_000148ec + 0x14884),DAT_000148e8 + 0x1487c,0x38b,DAT_000148e4 + 0x14870,
             iVar6,uVar7,(uint)(ushort)uVar4,(uint)uVar1,pcVar3,(uint)(ushort)__ptr[7],
             (uint)*(ushort *)((int)__ptr + 0x1e));
    }
    else {
      __ptr[1] = *(uint *)(param_1 + 4);
      __ptr[2] = param_5;
      __ptr[3] = param_5 + 1;
      if (param_2 == 0) {
        iVar6 = DAT_000148cc + 0x14738;
      }
      else {
        iVar6 = DAT_000148c8 + 0x14728;
      }
      uVar4 = __ptr[10];
      pcVar3 = inet_ntoa(__in);
      printf((char *)(DAT_000148d8 + 0x14790),DAT_000148d4 + 0x14788,0x37e,DAT_000148d0 + 0x1477c,
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



/* ===== FUN_000148f0 @ 000148f0 size=164 ===== */

void FUN_000148f0(int param_1,int param_2)

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



/* ===== FUN_00014994 @ 00014994 size=1096 ===== */

undefined4 FUN_00014994(int *param_1,int param_2,undefined4 param_3)

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
  printf((char *)(DAT_00014de4 + 0x14a70),DAT_00014de0 + 0x14a68,0x3b6,DAT_00014ddc + 0x14a5c);
  if (*(int *)(param_2 + 0x80) == 0) {
    FUN_0001cde4(param_3,0x1cd);
    printf((char *)(DAT_00014df0 + 0x14aac),DAT_00014dec + 0x14aa4,0x3ba,DAT_00014de8 + 0x14a98);
  }
  else {
    if (**(int **)(param_2 + 0x80) == 1) {
      local_c = 1;
      if ((*(uint *)(*(int *)(param_2 + 0x80) + 4) & 0x20) == 0) {
        printf((char *)(DAT_00014dfc + 0x14b08),DAT_00014df8 + 0x14b00,0x3c1,DAT_00014df4 + 0x14af4)
        ;
        FUN_0001cde4(param_3,0x1cd);
        return 0;
      }
    }
    else if ((*(uint *)(*(int *)(param_2 + 0x80) + 4) & 8) == 0) {
      printf((char *)(DAT_00014e08 + 0x14b54),DAT_00014e04 + 0x14b4c,0x3c7,DAT_00014e00 + 0x14b40);
      FUN_0001cde4(param_3,0x1cd);
      return 0;
    }
    snprintf(local_5c,0x3f,(char *)(DAT_00014e10 + 0x14b88),local_14,DAT_00014e0c + 0x14b7c);
    snprintf(local_9c,0x3f,(char *)(DAT_00014e18 + 0x14bac),local_14,DAT_00014e14 + 0x14ba0);
    if ((*(int *)(local_14 + 0x40) == 0) ||
       (iVar1 = FUN_00012ee4(local_5c,param_2 + 0x2e), iVar1 == 0)) {
      if ((*(int *)(local_14 + 0x44) == 0) ||
         (iVar1 = FUN_00012ee4(local_9c,param_2 + 0x2e), iVar1 == 0)) {
        printf((char *)(DAT_00014e24 + 0x14c5c),DAT_00014e20 + 0x14c54,0x3d4,DAT_00014e1c + 0x14c48,
               param_2 + 0x2e);
        FUN_0001cde4(param_3,0x1cd);
        return 0;
      }
      local_10 = 1;
    }
    else {
      local_10 = 0;
    }
    FUN_000148f0(param_1,local_10);
    local_1c = FUN_00014610(param_1,local_10,local_c,*(undefined2 *)(*(int *)(param_2 + 0x80) + 0xc)
                            ,*(undefined1 *)(*(int *)(param_2 + 0x80) + 0x10));
    if (local_1c < 0) {
      FUN_0001cde4(param_3,500);
    }
    else {
      if (local_10 == 0) {
        local_18 = param_1[0x105];
      }
      else {
        local_18 = param_1[0x106];
      }
      if (local_c == 0) {
        FUN_0001d164(param_3,*(undefined4 *)(local_18 + 0x28),*(undefined2 *)(local_18 + 0x1c),
                     *(undefined2 *)(local_18 + 0x18));
      }
      else {
        FUN_0001d280(param_3,*(undefined4 *)(local_18 + 0x28),*(undefined4 *)(local_18 + 8));
      }
      if (*param_1 == 2) {
        if (local_10 == 0) {
          uVar2 = *(undefined4 *)(local_14 + 0x138);
        }
        else {
          uVar2 = *(undefined4 *)(local_14 + 0x13c);
        }
        uVar2 = FUN_0001dbfc(uVar2);
        *(undefined4 *)(local_18 + 0x24) = uVar2;
      }
      if (*param_1 == 0) {
        *param_1 = 1;
        iVar1 = FUN_0001bef4();
        param_1[3] = iVar1;
        FUN_0001cf60(param_3,param_1[3]);
      }
    }
  }
  return 0;
}



/* ===== FUN_00014e28 @ 00014e28 size=184 ===== */

undefined4 FUN_00014e28(int *param_1,undefined4 param_2,undefined4 param_3)

{
  printf((char *)(DAT_00014ee8 + 0x14e60),DAT_00014ee4 + 0x14e58,0x3fb,DAT_00014ee0 + 0x14e4c);
  if ((*param_1 == 1) || (*param_1 == 2)) {
    if (*param_1 != 1) {
      *param_1 = 1;
    }
  }
  else {
    FUN_0001cde4(param_3,0x1c7);
    printf((char *)(DAT_00014ef4 + 0x14eac),DAT_00014ef0 + 0x14ea4,0x3ff,DAT_00014eec + 0x14e98);
  }
  return 0;
}



/* ===== FUN_00014ef8 @ 00014ef8 size=324 ===== */

undefined4 FUN_00014ef8(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[0x108];
  printf((char *)(DAT_00015044 + 0x14f3c),DAT_00015040 + 0x14f34,0x40d,DAT_0001503c + 0x14f28);
  if ((*param_1 == 1) || (*param_1 == 2)) {
    if (*param_1 != 2) {
      if ((param_1[0x105] != 0) && (*(int *)(iVar2 + 0x138) != 0)) {
        iVar3 = param_1[0x105];
        uVar1 = FUN_0001dbfc(*(undefined4 *)(iVar2 + 0x138));
        *(undefined4 *)(iVar3 + 0x24) = uVar1;
      }
      if ((param_1[0x106] != 0) && (*(int *)(iVar2 + 0x13c) != 0)) {
        iVar3 = param_1[0x106];
        uVar1 = FUN_0001dbfc(*(undefined4 *)(iVar2 + 0x13c));
        *(undefined4 *)(iVar3 + 0x24) = uVar1;
      }
      *param_1 = 2;
    }
  }
  else {
    FUN_0001cde4(param_3,0x1c7);
    printf((char *)(DAT_00015050 + 0x14f88),DAT_0001504c + 0x14f80,0x411,DAT_00015048 + 0x14f74);
  }
  return 0;
}



/* ===== FUN_00015054 @ 00015054 size=456 ===== */

undefined4 FUN_00015054(undefined4 *param_1,int param_2)

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
  printf((char *)(DAT_00015224 + 0x15118),DAT_00015220 + 0x15110,0x425,DAT_0001521c + 0x15104);
  snprintf(local_4c,0x3f,(char *)(DAT_0001522c + 0x15138),local_c,DAT_00015228 + 0x1512c);
  snprintf(local_8c,0x3f,(char *)(DAT_00015234 + 0x1515c),local_c,DAT_00015230 + 0x15150);
  iVar1 = FUN_00012ee4(local_4c,param_2 + 0x2e);
  if (iVar1 == 0) {
    iVar1 = FUN_00012ee4(local_8c,param_2 + 0x2e);
    if (iVar1 == 0) {
      FUN_000148f0(param_1,0);
      FUN_000148f0(param_1,1);
    }
    else {
      FUN_000148f0(param_1,1);
    }
  }
  else {
    FUN_000148f0(param_1,0);
  }
  if ((param_1[0x105] == 0) && (param_1[0x106] == 0)) {
    *param_1 = 0;
  }
  return 0;
}



/* ===== FUN_00015238 @ 00015238 size=856 ===== */

undefined4 FUN_00015238(int *param_1,int param_2,undefined4 param_3)

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
  FUN_0001cde4(param_3,200);
  FUN_0001d03c(param_3,0);
  FUN_0001d680(param_3,DAT_00015590 + 0x152a8);
  iVar1 = FUN_0001ce30(param_2,&local_18);
  if (iVar1 < 0) {
    FUN_0001cde4(param_3,400);
    printf((char *)(DAT_0001559c + 0x152f8),DAT_00015598 + 0x152f0,0x448,DAT_00015594 + 0x152e4);
    uVar2 = 0;
  }
  else {
    FUN_0001ce90(param_3,local_18);
    if (*param_1 != 0) {
      iVar1 = FUN_0001cf00(param_2,&local_1c);
      if ((iVar1 < 0) || (param_1[3] != local_1c)) {
        printf((char *)(DAT_000155a8 + 0x15370),DAT_000155a4 + 0x15368,0x44f,DAT_000155a0 + 0x1535c)
        ;
        FUN_0001cde4(param_3,0x1c6);
        return 0;
      }
      FUN_0001cf60(param_3,local_1c);
    }
    if (local_c == 0) {
      if (*(int *)(param_2 + 4) != 0) {
        local_c = *(int *)(local_10 + 4);
        while ((local_c != 0 && (iVar1 = FUN_00012ee4(local_c,local_14), iVar1 == 0))) {
          local_c = *(int *)(local_c + 0x15c);
        }
        if (local_c == 0) {
          printf((char *)(DAT_000155c0 + 0x15490),DAT_000155bc + 0x15488,0x463,
                 DAT_000155b8 + 0x1547c,local_14);
          FUN_0001cde4(param_3,0x1c6);
          return 0;
        }
        FUN_00012594(param_1,local_c);
      }
    }
    else {
      iVar1 = FUN_00012ee4(local_c,local_14);
      if (iVar1 == 0) {
        printf((char *)(DAT_000155b4 + 0x153ec),DAT_000155b0 + 0x153e4,0x458,DAT_000155ac + 87000,
               local_14,local_c);
        FUN_0001cde4(param_3,0x1c3);
        return 0;
      }
    }
    switch(*(undefined4 *)(param_2 + 4)) {
    case 0:
      uVar2 = FUN_00013e0c(param_1,param_2,param_3);
      break;
    case 1:
      uVar2 = FUN_00013ebc(param_1,param_2,param_3);
      break;
    case 2:
      uVar2 = FUN_00014994(param_1,param_2,param_3);
      break;
    case 3:
      uVar2 = FUN_00014ef8(param_1,param_2,param_3);
      break;
    case 4:
    default:
      FUN_0001cde4(param_3,0x1f5);
      uVar2 = 0;
      break;
    case 5:
      uVar2 = FUN_00014e28(param_1,param_2,param_3);
      break;
    case 6:
      uVar2 = FUN_00015054(param_1,param_2,param_3);
    }
  }
  return uVar2;
}



/* ===== FUN_000155c4 @ 000155c4 size=528 ===== */

int FUN_000155c4(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_c;
  
  if (*(int *)(param_1 + 0x410) != 0x3ff) {
    local_c = recv(*(int *)(param_1 + 4),(void *)(param_1 + 0x10 + *(int *)(param_1 + 0x410)),
                   0x3ff - *(int *)(param_1 + 0x410),0x40);
    if (local_c == 0) {
      printf((char *)(DAT_000157dc + 0x15650),DAT_000157d8 + 0x15648,0x486,DAT_000157d4 + 0x1563c);
      return -1;
    }
    if (local_c == -1) {
      iVar1 = FUN_000121d0();
      if ((iVar1 != 0xb) && (iVar1 = FUN_000121d0(), iVar1 != 4)) {
        uVar2 = FUN_000121d0();
        uVar2 = FUN_000121ec(uVar2);
        printf((char *)(DAT_000157e8 + 0x156bc),DAT_000157e4 + 0x156b4,0x48b,DAT_000157e0 + 0x156a8,
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
    iVar1 = FUN_0001c154(param_2,param_1 + 0x10,*(undefined4 *)(param_1 + 0x410));
    if (iVar1 < 0) {
      printf((char *)(DAT_000157f4 + 0x15760),DAT_000157f0 + 0x15758,0x49a,DAT_000157ec + 0x1574c);
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



/* ===== FUN_000157f8 @ 000157f8 size=268 ===== */

ssize_t FUN_000157f8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_40c;
  undefined1 auStack_408 [1020];
  size_t local_c;
  
  local_40c = 0;
  memset(auStack_408,0,0x3fc);
  local_c = FUN_0001c510(param_2,&local_40c,0x400);
  if ((int)local_c < 0) {
    printf((char *)(DAT_0001590c + 0x1587c),DAT_00015908 + 0x15874,0x4ad,DAT_00015904 + 0x15868);
    local_c = -1;
  }
  else {
    local_c = send(*(int *)(param_1 + 4),&local_40c,local_c,0);
    if (local_c == -1) {
      uVar1 = FUN_000121d0();
      uVar1 = FUN_000121ec(uVar1);
      printf((char *)(DAT_00015918 + 0x158ec),DAT_00015914 + 0x158e4,0x4b3,DAT_00015910 + 0x158d8,
             uVar1);
      local_c = -1;
    }
  }
  return local_c;
}



/* ===== FUN_0001591c @ 0001591c size=388 ===== */

ssize_t FUN_0001591c(int param_1,int param_2)

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
    iVar4 = FUN_000121d0();
    if ((iVar4 == 0xb) || (iVar4 = FUN_000121d0(), iVar4 == 4)) {
      local_18 = 0;
    }
    else {
      uVar5 = FUN_000121d0();
      uVar5 = FUN_000121ec(uVar5);
      printf((char *)(DAT_00015aa8 + 0x159ec),DAT_00015aa4 + 0x159e4,0x4c6,DAT_00015aa0 + 0x159d8,
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
      printf((char *)(DAT_00015ab4 + 0x15a74),DAT_00015ab0 + 0x15a6c,0x4d0,DAT_00015aac + 0x15a60,
             pcVar6,(uint)uVar1,(uint)uVar3);
      uVar3 = ntohs(sStack_28.sa_data._0_2_);
      *(uint16_t *)(local_14 + 0x1c) = uVar3;
    }
  }
  return local_18;
}



/* ===== FUN_00015ab8 @ 00015ab8 size=388 ===== */

ssize_t FUN_00015ab8(int param_1,int param_2)

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
    iVar4 = FUN_000121d0();
    if ((iVar4 == 0xb) || (iVar4 = FUN_000121d0(), iVar4 == 4)) {
      local_18 = 0;
    }
    else {
      uVar5 = FUN_000121d0();
      uVar5 = FUN_000121ec(uVar5);
      printf((char *)(DAT_00015c44 + 0x15b88),DAT_00015c40 + 0x15b80,0x4e3,DAT_00015c3c + 0x15b74,
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
      printf((char *)(DAT_00015c50 + 0x15c10),DAT_00015c4c + 0x15c08,0x4ed,DAT_00015c48 + 0x15bfc,
             pcVar6,(uint)uVar1,(uint)uVar3);
      uVar3 = ntohs(sStack_28.sa_data._0_2_);
      *(uint16_t *)(local_14 + 0x1e) = uVar3;
    }
  }
  return local_18;
}



/* ===== FUN_00015c54 @ 00015c54 size=740 ===== */

size_t FUN_00015c54(int *param_1,void *param_2,size_t param_3)

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
      iVar1 = FUN_000121d0();
      if ((iVar1 == 0xb) || (iVar1 = FUN_000121d0(), iVar1 == 4)) {
        param_3 = 0;
      }
      else {
        pcVar2 = inet_ntoa((in_addr)param_1[8]);
        uVar3 = FUN_000121d0();
        uVar3 = FUN_000121ec(uVar3);
        printf((char *)(DAT_00015f58 + 0x15f18),DAT_00015f54 + 0x15f10,0x528,DAT_00015f50 + 0x15f04,
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
      iVar1 = FUN_000121d0();
      if ((iVar1 == 0xb) || (iVar1 = FUN_000121d0(), iVar1 == 4)) {
        param_3 = 0;
      }
      else {
        pcVar2 = inet_ntoa((in_addr)param_1[8]);
        uVar3 = FUN_000121d0();
        uVar3 = FUN_000121ec(uVar3);
        printf((char *)(DAT_00015f40 + 0x15d64),DAT_00015f3c + 0x15d5c,0x50d,DAT_00015f38 + 0x15d50,
               pcVar2,uVar3);
        param_3 = 0xffffffff;
      }
    }
    else {
      local_18 = send(local_14,param_2,param_3,0);
      if (local_18 == -1) {
        iVar1 = FUN_000121d0();
        if ((iVar1 == 0xb) || (iVar1 = FUN_000121d0(), iVar1 == 4)) {
          param_3 = 0;
        }
        else {
          pcVar2 = inet_ntoa((in_addr)param_1[8]);
          uVar3 = FUN_000121d0();
          uVar3 = FUN_000121ec(uVar3);
          printf((char *)(DAT_00015f4c + 0x15e0c),DAT_00015f48 + 0x15e04,0x516,
                 DAT_00015f44 + 0x15df8,param_3,pcVar2,uVar3);
          param_3 = 0xffffffff;
        }
      }
    }
  }
  return param_3;
}



/* ===== FUN_00015f5c @ 00015f5c size=348 ===== */

int FUN_00015f5c(int param_1)

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
    iVar3 = FUN_0001dab8(local_1c,*(undefined4 *)(local_20 + 0x24));
    if (iVar3 < 1) {
      return local_14;
    }
    FUN_0001da08(local_1c,*(undefined4 *)(local_20 + 0x24),&local_24,&local_28);
    if (0 < *local_28) {
      puVar4 = (uint32_t *)(local_24 + 8);
      uVar1 = htonl(*(uint32_t *)(local_20 + 0x28));
      *puVar4 = uVar1;
      iVar3 = FUN_00015c54(local_20,local_24,*local_28);
      if (iVar3 != *local_28) {
        return local_14;
      }
      *(int *)(local_20 + 0x2c) = *(int *)(local_20 + 0x2c) + 1;
      *(int *)(local_20 + 0x30) = *(int *)(local_20 + 0x30) + *local_28 + -0xc;
    }
    uVar2 = FUN_0001db64(local_1c,*(undefined4 *)(local_20 + 0x24));
    *(undefined4 *)(local_20 + 0x24) = uVar2;
    local_14 = local_14 + 1;
  } while( true );
}



/* ===== FUN_000160b8 @ 000160b8 size=348 ===== */

int FUN_000160b8(int param_1)

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
    iVar3 = FUN_0001dab8(local_1c,*(undefined4 *)(local_20 + 0x24));
    if (iVar3 < 1) {
      return local_14;
    }
    FUN_0001da08(local_1c,*(undefined4 *)(local_20 + 0x24),&local_24,&local_28);
    if (0 < *local_28) {
      puVar4 = (uint32_t *)(local_24 + 8);
      uVar1 = htonl(*(uint32_t *)(local_20 + 0x28));
      *puVar4 = uVar1;
      iVar3 = FUN_00015c54(local_20,local_24,*local_28);
      if (iVar3 != *local_28) {
        return local_14;
      }
      *(int *)(local_20 + 0x2c) = *(int *)(local_20 + 0x2c) + 1;
      *(int *)(local_20 + 0x30) = *(int *)(local_20 + 0x30) + *local_28 + -0xc;
    }
    uVar2 = FUN_0001db64(local_1c,*(undefined4 *)(local_20 + 0x24));
    *(undefined4 *)(local_20 + 0x24) = uVar2;
    local_14 = local_14 + 1;
  } while( true );
}



/* ===== FUN_00016214 @ 00016214 size=2952 ===== */

undefined4 FUN_00016214(uint *param_1)

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
           (iVar3 = FUN_0001dab8(*(undefined4 *)(local_2c + 0x138),local_30[9]), 0 < iVar3)) {
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
           (iVar3 = FUN_0001dab8(*(undefined4 *)(local_2c + 0x13c),local_34[9]), 0 < iVar3)) {
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
      printf((char *)(DAT_00016da4 + 0x16850),DAT_00016da0 + 0x16848,0x5c7,DAT_00016d9c + 0x1683c,
             pcVar2);
      uVar4 = 0xffffffff;
    }
    else if (local_38 == 0) {
      uVar4 = 0;
    }
    else {
      if ((fStack_cc.fds_bits[*local_20 >> 5] >> (*local_20 & 0x1f) & 1U) != 0) {
        FUN_00012cf0(local_20);
      }
      local_c = (int *)local_20[3];
LAB_00016d80:
      piVar1 = local_c;
      if (local_c != (int *)0x0) {
        local_1c = local_c;
        local_3c = local_c[0x108];
        local_40 = (int *)local_c[0x105];
        local_44 = (int *)local_c[0x106];
        local_c = (int *)local_c[0x109];
        if ((fStack_cc.fds_bits[(uint)piVar1[1] >> 5] >> (piVar1[1] & 0x1fU) & 1U) != 0)
        goto LAB_0001692c;
        goto LAB_00016a74;
      }
      uVar4 = 1;
    }
  }
  return uVar4;
LAB_0001692c:
  do {
    FUN_0001bd0c(local_2a4);
    FUN_0001bd0c(auStack_1f8);
    local_38 = FUN_000155c4(local_1c,local_2a4);
    if (local_38 == 0) break;
    if (local_38 < 0) {
      FUN_00012e38(local_1c);
      local_1c = (int *)0x0;
      break;
    }
    if (local_2a4[0] == 2) {
      FUN_0001bd48(local_2a4);
    }
    else if (local_2a4[0] == 0) {
      local_38 = FUN_00015238(local_1c,local_2a4,auStack_1f8);
      if (local_38 < 0) {
        printf((char *)(DAT_00016dbc + 0x16a24),DAT_00016db8 + 0x16a1c,0x5f8,DAT_00016db4 + 0x16a10)
        ;
      }
      else {
        FUN_000157f8(local_1c,auStack_1f8);
      }
      FUN_0001bd48(local_2a4);
      FUN_0001bd48(auStack_1f8);
    }
    else {
      printf((char *)(DAT_00016db0 + 0x169d0),DAT_00016dac + 0x169c8,0x5f1,DAT_00016da8 + 0x169bc);
      FUN_0001bd48(local_2a4);
    }
  } while (local_1c != (int *)0x0);
  if (local_1c != (int *)0x0) {
LAB_00016a74:
    if (*local_1c == 2) {
      if ((local_40 != (int *)0x0) &&
         (iVar3 = FUN_0001dab8(*(undefined4 *)(local_3c + 0x138),local_40[9]), 0 < iVar3)) {
        if ((*local_40 == 0) ||
           ((fStack_14c.fds_bits[(uint)local_40[1] >> 5] >> (local_40[1] & 0x1fU) & 1U) == 0)) {
          if ((*local_40 == 0) &&
             ((fStack_14c.fds_bits[(uint)local_40[4] >> 5] >> (local_40[4] & 0x1fU) & 1U) != 0)) {
            FUN_00015f5c(local_1c);
          }
        }
        else {
          FUN_00015f5c(local_1c);
        }
      }
      if ((local_44 != (int *)0x0) &&
         (iVar3 = FUN_0001dab8(*(undefined4 *)(local_3c + 0x13c),local_44[9]), 0 < iVar3)) {
        if ((*local_44 == 0) ||
           ((fStack_14c.fds_bits[(uint)local_44[1] >> 5] >> (local_44[1] & 0x1fU) & 1U) == 0)) {
          if ((*local_44 == 0) &&
             ((fStack_14c.fds_bits[(uint)local_44[4] >> 5] >> (local_44[4] & 0x1fU) & 1U) != 0)) {
            FUN_000160b8(local_1c);
          }
        }
        else {
          FUN_000160b8(local_1c);
        }
      }
      if ((local_40 != (int *)0x0) && (*local_40 == 0)) {
        if ((fStack_cc.fds_bits[(uint)local_40[4] >> 5] >> (local_40[4] & 0x1fU) & 1U) != 0) {
          FUN_0001591c(local_1c,0);
        }
        if ((fStack_cc.fds_bits[(uint)local_40[5] >> 5] >> (local_40[5] & 0x1fU) & 1U) != 0) {
          FUN_00015ab8(local_1c,0);
        }
      }
      if ((local_44 != (int *)0x0) && (*local_44 == 0)) {
        if ((fStack_cc.fds_bits[(uint)local_44[4] >> 5] >> (local_44[4] & 0x1fU) & 1U) != 0) {
          FUN_0001591c(local_1c,1);
        }
        if ((fStack_cc.fds_bits[(uint)local_44[5] >> 5] >> (local_44[5] & 0x1fU) & 1U) != 0) {
          FUN_00015ab8(local_1c,1);
        }
      }
    }
  }
  goto LAB_00016d80;
}



/* ===== FUN_00016dc0 @ 00016dc0 size=1940 ===== */

int FUN_00016dc0(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
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
    local_1c = FUN_0001dbfc(local_30);
    for (local_18 = 0; local_18 < 600; local_18 = local_18 + 1) {
      iVar3 = FUN_0001db64(local_30,local_1c);
      iVar4 = FUN_0001dbc0(local_30);
      if (iVar3 == iVar4) {
        FUN_0001dce0(local_30);
      }
      FUN_0001da08(local_30,local_1c,aiStack_9a0 + local_18,auStack_1c64 + local_18);
      aiStack_1304[local_18] = 0x5b0;
      local_1c = FUN_0001db64(local_30,local_1c);
    }
    aiStack_9a0[local_18] = 0;
    aiStack_1304[local_18] = 0;
    for (local_14 = *(int **)(local_2c + 0x154); local_14 != (int *)0x0;
        local_14 = (int *)local_14[0x10b]) {
      local_34 = local_14[0x105];
      if (((*local_14 == 2) && (local_34 != 0)) &&
         ((iVar3 = FUN_0001dab8(local_30,*(undefined4 *)(local_34 + 0x24)), iVar3 == 0 &&
          (iVar4 = *(int *)(local_34 + 0x24), iVar3 = FUN_0001dbfc(local_30), iVar4 != iVar3)))) {
        uVar1 = FUN_0001dbc0(local_30);
        *(undefined4 *)(local_34 + 0x24) = uVar1;
        pcVar2 = inet_ntoa((in_addr)local_14[2]);
        printf((char *)(DAT_0001755c + 0x17068),DAT_00017558 + 0x17060,0x658,DAT_00017554 + 0x17054,
               pcVar2);
      }
    }
    if (*(int *)(local_2c + 0x40) == 1) {
      if (((*(int *)(local_2c + 0xcc) == 0) || (*(int *)(local_2c + 0xcc) == 0)) &&
         (iVar3 = FUN_0001e870(param_2,param_3,local_2c + 0x48), iVar3 < 0)) {
        printf((char *)(DAT_00017568 + 0x17118),DAT_00017564 + 0x17110,0x660,DAT_00017560 + 0x17104)
        ;
      }
    }
    else if ((*(int *)(local_2c + 0x40) == 2) &&
            ((((*(int *)(local_2c + 0x110) == 0 || (*(int *)(local_2c + 0x110) == 0)) ||
              (*(int *)(local_2c + 0x108) == 0)) &&
             (iVar3 = FUN_0001e8a8(param_2,param_3,local_2c + 0x48), iVar3 < 0)))) {
      printf((char *)(DAT_00017574 + 0x171a0),DAT_00017570 + 0x17198,0x66a,DAT_0001756c + 0x1718c);
    }
    local_24 = 0;
    local_20 = 0;
    while( true ) {
      if (((param_3 <= local_24) || (aiStack_9a0[local_20] == 0)) || (aiStack_1304[local_20] < 1))
      goto LAB_00017440;
      local_38 = 0;
      local_1c68 = 0;
      local_38 = FUN_0001e028(param_2 + local_24,param_3 - local_24,&local_1c68);
      if (local_38 == 0) break;
      if (*(int *)(local_2c + 0x40) == 1) {
        local_28 = FUN_0001f0a0(local_2c + 0x118,local_38,local_1c68,param_6,param_5,param_6,
                                aiStack_9a0 + local_20,aiStack_1304 + local_20);
        if (local_28 < 1) {
          printf((char *)(DAT_0001758c + 0x17300),DAT_00017588 + 0x172f8,0x685,
                 DAT_00017584 + 0x172ec,local_28);
          return -1;
        }
      }
      else if (*(int *)(local_2c + 0x40) == 2) {
        local_28 = FUN_0001f63c(local_2c + 0x118,local_38,local_1c68,param_6,param_5,param_6,
                                aiStack_9a0 + local_20,aiStack_1304 + local_20);
        if (local_28 < 1) {
          printf((char *)(DAT_00017598 + 0x1739c),DAT_00017594 + 0x17394,0x68c,
                 DAT_00017590 + 0x17388,local_28);
          return -1;
        }
      }
      local_20 = local_20 + local_28;
      local_24 = (local_38 - param_2) + local_1c68;
    }
    printf((char *)(DAT_00017580 + 0x1724c),DAT_0001757c + 0x17244,0x67c,DAT_00017578 + 0x17238);
LAB_00017440:
    for (local_18 = 0; local_18 < local_20; local_18 = local_18 + 1) {
      *(int *)auStack_1c64[local_18] = aiStack_1304[local_18];
      FUN_0001dc38(local_30);
    }
    for (local_14 = *(int **)(local_2c + 0x154); local_14 != (int *)0x0;
        local_14 = (int *)local_14[0x10b]) {
      local_3c = local_14[0x105];
      if ((*local_14 == 2) && (local_3c != 0)) {
        FUN_00018450(local_3c,*(undefined4 *)(local_2c + 0x144),*(undefined4 *)(local_2c + 0x140),
                     *(undefined4 *)(local_2c + 0x144),param_5,param_6,
                     *(undefined4 *)(local_2c + 0x120));
        FUN_00015f5c(local_14);
      }
    }
  }
  return param_3;
}



/* ===== FUN_0001759c @ 0001759c size=1968 ===== */

int FUN_0001759c(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 param_5,
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
    local_1c = FUN_0001dbfc(local_30);
    for (local_18 = 0; local_18 < 600; local_18 = local_18 + 1) {
      iVar3 = FUN_0001db64(local_30,local_1c);
      iVar4 = FUN_0001dbc0(local_30);
      if (iVar3 == iVar4) {
        FUN_0001dce0(local_30);
      }
      FUN_0001da08(local_30,local_1c,aiStack_9a0 + local_18,auStack_1c64 + local_18);
      aiStack_1304[local_18] = 0x5b0;
      local_1c = FUN_0001db64(local_30,local_1c);
    }
    aiStack_9a0[local_18] = 0;
    aiStack_1304[local_18] = 0;
    for (local_14 = *(int **)(local_2c + 0x154); local_14 != (int *)0x0;
        local_14 = (int *)local_14[0x10b]) {
      local_34 = local_14[0x105];
      if (((*local_14 == 2) && (local_34 != 0)) &&
         ((iVar3 = FUN_0001dab8(local_30,*(undefined4 *)(local_34 + 0x24)), iVar3 == 0 &&
          (iVar4 = *(int *)(local_34 + 0x24), iVar3 = FUN_0001dbfc(local_30), iVar4 != iVar3)))) {
        uVar1 = FUN_0001dbc0(local_30);
        *(undefined4 *)(local_34 + 0x24) = uVar1;
        pcVar2 = inet_ntoa((in_addr)local_14[2]);
        printf((char *)(DAT_00017d54 + 0x17850),DAT_00017d50 + 0x17848,0x6c9,DAT_00017d4c + 0x1783c,
               pcVar2);
      }
    }
    if (*(int *)(local_2c + 0x40) == 1) {
      if (((*(int *)(local_2c + 0xcc) == 0) || (*(int *)(local_2c + 0xcc) == 0)) &&
         (iVar3 = FUN_0001e870(param_3,param_4,local_2c + 0x48), iVar3 < 0)) {
        printf((char *)(DAT_00017d60 + 0x17900),DAT_00017d5c + 0x178f8,0x6d1,DAT_00017d58 + 0x178ec)
        ;
      }
    }
    else if ((*(int *)(local_2c + 0x40) == 2) &&
            ((((*(int *)(local_2c + 0x110) == 0 || (*(int *)(local_2c + 0x110) == 0)) ||
              (*(int *)(local_2c + 0x108) == 0)) &&
             (iVar3 = FUN_0001e8a8(param_3,param_4,local_2c + 0x48), iVar3 < 0)))) {
      printf((char *)(DAT_00017d6c + 0x17988),DAT_00017d68 + 0x17980,0x6db,DAT_00017d64 + 0x17974);
    }
    local_24 = 0;
    local_20 = 0;
    while( true ) {
      if (((param_4 <= local_24) || (aiStack_9a0[local_20] == 0)) || (aiStack_1304[local_20] < 1))
      goto LAB_00017c28;
      local_38 = 0;
      local_1c68 = 0;
      local_38 = FUN_0001e028(param_3 + local_24,param_4 - local_24,&local_1c68);
      if (local_38 == 0) break;
      if (*(int *)(local_2c + 0x40) == 1) {
        local_28 = FUN_0001f0a0(local_2c + 0x118,local_38,local_1c68,param_6,param_5,param_6,
                                aiStack_9a0 + local_20,aiStack_1304 + local_20);
        if (local_28 < 1) {
          printf((char *)(DAT_00017d84 + 97000),DAT_00017d80 + 0x17ae0,0x6f6,DAT_00017d7c + 0x17ad4,
                 local_28);
          return -1;
        }
      }
      else if (*(int *)(local_2c + 0x40) == 2) {
        local_28 = FUN_0001f63c(local_2c + 0x118,local_38,local_1c68,param_6,param_5,param_6,
                                aiStack_9a0 + local_20,aiStack_1304 + local_20);
        if (local_28 < 1) {
          printf((char *)(DAT_00017d90 + 0x17b84),DAT_00017d8c + 0x17b7c,0x6fd,
                 DAT_00017d88 + 0x17b70,local_28);
          return -1;
        }
      }
      local_20 = local_20 + local_28;
      local_24 = (local_38 - param_3) + local_1c68;
    }
    printf((char *)(DAT_00017d78 + 0x17a34),DAT_00017d74 + 0x17a2c,0x6ed,DAT_00017d70 + 0x17a20);
LAB_00017c28:
    for (local_18 = 0; local_18 < local_20; local_18 = local_18 + 1) {
      *(int *)auStack_1c64[local_18] = aiStack_1304[local_18];
      FUN_0001dc38(local_30);
    }
    for (local_14 = *(int **)(local_2c + 0x154); local_14 != (int *)0x0;
        local_14 = (int *)local_14[0x10b]) {
      local_3c = local_14[0x105];
      if ((*local_14 == 2) && (local_3c != 0)) {
        FUN_00018450(local_3c,*(undefined4 *)(local_2c + 0x144),*(undefined4 *)(local_2c + 0x140),
                     *(undefined4 *)(local_2c + 0x144),param_5,param_6,
                     *(undefined4 *)(local_2c + 0x120));
        FUN_00015f5c(local_14);
      }
    }
    FUN_00016214(param_1);
  }
  return param_4;
}



/* ===== FUN_00017d94 @ 00017d94 size=1140 ===== */

undefined4
FUN_00017d94(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
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
    local_1c = FUN_0001dbfc(local_28);
    for (local_18 = 0; local_18 < 0x14; local_18 = local_18 + 1) {
      iVar3 = FUN_0001db64(local_28,local_1c);
      iVar4 = FUN_0001dbc0(local_28);
      if (iVar3 == iVar4) {
        FUN_0001dce0(local_28);
      }
      FUN_0001da08(local_28,local_1c,auStack_84 + local_18,auStack_128 + local_18);
      auStack_d8[local_18] = 0x5b0;
      local_1c = FUN_0001db64(local_28,local_1c);
    }
    auStack_84[local_18] = 0;
    auStack_d8[local_18] = 0;
    for (local_14 = *(int **)(local_24 + 0x154); local_14 != (int *)0x0;
        local_14 = (int *)local_14[0x10b]) {
      local_2c = local_14[0x106];
      if (((*local_14 == 2) && (local_2c != 0)) &&
         ((iVar3 = FUN_0001dab8(local_28,*(undefined4 *)(local_2c + 0x24)), iVar3 == 0 &&
          (iVar4 = *(int *)(local_2c + 0x24), iVar3 = FUN_0001dbfc(local_28), iVar4 != iVar3)))) {
        uVar1 = FUN_0001dbc0(local_28);
        *(undefined4 *)(local_2c + 0x24) = uVar1;
        pcVar2 = inet_ntoa((in_addr)local_14[2]);
        printf((char *)(DAT_00018210 + 0x17fdc),DAT_0001820c + 0x17fd4,0x73c,DAT_00018208 + 0x17fc8,
               pcVar2);
      }
    }
    iVar3 = *(int *)(local_24 + 0x44);
    if (0x4000 < iVar3) {
      if (iVar3 < 0x4003) {
        local_20 = FUN_0001fc10(local_24 + 0x128,param_2,param_3,param_6,param_5,param_6,auStack_84,
                                auStack_d8);
        if (local_20 < 1) {
          printf((char *)(DAT_0001821c + 0x1808c),DAT_00018218 + 0x18084,0x745,
                 DAT_00018214 + 0x18078,local_20);
          return 0xffffffff;
        }
      }
      else if (iVar3 == 0x4003) {
        local_20 = FUN_0001ff28(local_24 + 0x128,param_2,param_3,param_6,param_5,param_6,auStack_84,
                                auStack_d8);
        if (local_20 < 1) {
          printf((char *)(DAT_00018228 + 0x180f8),DAT_00018224 + 0x180f0,0x74c,
                 DAT_00018220 + 0x180e4,local_20);
          return 0xffffffff;
        }
      }
    }
    for (local_18 = 0; local_18 < local_20; local_18 = local_18 + 1) {
      *(undefined4 *)auStack_128[local_18] = auStack_d8[local_18];
      FUN_0001dc38(local_28);
    }
    for (local_14 = *(int **)(local_24 + 0x154); local_14 != (int *)0x0;
        local_14 = (int *)local_14[0x10b]) {
      local_30 = local_14[0x106];
      if ((*local_14 == 2) && (local_30 != 0)) {
        FUN_00018450(local_30,*(undefined4 *)(local_24 + 0x14c),*(undefined4 *)(local_24 + 0x148),
                     *(undefined4 *)(local_24 + 0x14c),param_5,param_6,
                     *(undefined4 *)(local_24 + 0x130));
        FUN_000160b8(local_14);
      }
    }
  }
  return param_3;
}



/* ===== FUN_0001822c @ 0001822c size=148 ===== */

longlong FUN_0001822c(void)

{
  longlong lVar1;
  timespec local_18;
  
  clock_gettime(1,&local_18);
  lVar1 = FUN_0002013c(local_18.tv_nsec,local_18.tv_nsec >> 0x1f,1000,0);
  return lVar1 + CONCAT44((local_18.tv_sec >> 0x1f) * 1000000 +
                          (int)((ulonglong)(uint)local_18.tv_sec * 1000000 >> 0x20),
                          (int)((ulonglong)(uint)local_18.tv_sec * 1000000));
}



/* ===== FUN_000182c0 @ 000182c0 size=120 ===== */

undefined8 FUN_000182c0(void)

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



/* ===== FUN_00018338 @ 00018338 size=48 ===== */

longlong FUN_00018338(void)

{
  longlong lVar1;
  
  lVar1 = FUN_000182c0();
  return lVar1 + CONCAT44(DAT_0001836c,DAT_00018368);
}



/* ===== FUN_00018370 @ 00018370 size=112 ===== */

undefined4
FUN_00018370(int param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,int param_6)

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



/* ===== FUN_00018450 @ 00018450 size=1168 ===== */

size_t FUN_00018450(int *param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,
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
    uVar6 = (int)((ulonglong)*(undefined8 *)(param_1 + 0xe) >> 0x20) + DAT_000187bc +
            (uint)CARRY4(uVar8,DAT_000187b8);
    bVar7 = uVar6 <= param_6;
    if (param_6 == uVar6) {
      bVar7 = uVar8 + DAT_000187b8 <= param_5;
    }
    if (!bVar7) {
      return 0;
    }
  }
  uStack_3c = uStack_48;
  local_38 = local_44;
  local_14 = FUN_0002013c(param_3 + param_5,param_4 + param_6 + (uint)CARRY4(param_3,param_5),
                          1000000,0);
  FUN_0002013c(param_3 + param_5,param_4 + param_6 + (uint)CARRY4(param_3,param_5),1000000,0);
  local_18 = FUN_0002013c(0,extraout_r2,1000000,0);
  local_1c = FUN_0002013c((int)((ulonglong)param_7 * (ulonglong)param_5),
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
      iVar2 = FUN_000121d0();
      if ((iVar2 != 0xb) && (iVar2 = FUN_000121d0(), iVar2 != 4)) {
        pcVar3 = inet_ntoa((in_addr)param_1[8]);
        uVar4 = FUN_000121d0();
        uVar4 = FUN_000121ec(uVar4);
        printf((char *)(DAT_000187d4 + 0x188d4),DAT_000187d0 + 0x188cc,0x7f0,DAT_000187cc + 0x188c0,
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
      iVar2 = FUN_000121d0();
      if ((iVar2 != 0xb) && (iVar2 = FUN_000121d0(), iVar2 != 4)) {
        pcVar3 = inet_ntoa((in_addr)param_1[8]);
        uVar4 = FUN_000121d0();
        uVar4 = FUN_000121ec(uVar4);
        printf((char *)(DAT_000187c8 + 0x187a8),DAT_000187c4 + 0x187a0,0x7de,DAT_000187c0 + 0x18794,
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



/* ===== FUN_00018900 @ 00018900 size=68 ===== */

void * FUN_00018900(size_t param_1)

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



/* ===== FUN_00018944 @ 00018944 size=48 ===== */

void FUN_00018944(void *param_1)

{
  if (param_1 != (void *)0x0) {
    free(param_1);
  }
  return;
}



/* ===== FUN_00018974 @ 00018974 size=104 ===== */

void * FUN_00018974(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = calloc(1,param_2);
  if ((__dest != (void *)0x0) && (param_1 != (void *)0x0)) {
    memcpy(__dest,param_1,param_2);
  }
  return __dest;
}



/* ===== FUN_000189dc @ 000189dc size=120 ===== */

void * FUN_000189dc(char *param_1)

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



/* ===== FUN_00018a54 @ 00018a54 size=172 ===== */

undefined4 FUN_00018a54(int param_1,int param_2,int param_3)

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



/* ===== FUN_00018b00 @ 00018b00 size=204 ===== */

undefined4 FUN_00018b00(int param_1,int param_2,char *param_3)

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



/* ===== FUN_00018bcc @ 00018bcc size=928 ===== */

int FUN_00018bcc(byte *param_1,int *param_2)

{
  byte *__src;
  int iVar1;
  int iVar2;
  size_t local_1c;
  byte *local_18;
  byte *local_14;
  
  iVar2 = DAT_00018f6c + 0x18bec;
  local_14 = param_1;
  iVar1 = FUN_00018b00(DAT_00018f70 + 0x18c04,3,param_1);
  *param_2 = iVar1;
  if (*param_2 == 2) {
    printf((char *)(DAT_00018f7c + 0x18c50),DAT_00018f78 + 0x18c48,0xaa,DAT_00018f74 + 0x18c3c,
           param_1);
    iVar1 = -1;
  }
  else {
    *(undefined2 *)(param_2 + 1) = 0;
    *(undefined1 *)((int)param_2 + 6) = 0;
    *(undefined1 *)((int)param_2 + 0x26) = 0;
    for (; ((*(ushort *)(**(int **)(iVar2 + DAT_00018f80) + (uint)*local_14 * 2) & 2) != 0 ||
           (*local_14 == 0x3a)); local_14 = local_14 + 1) {
    }
    if ((*local_14 == 0x2f) && (local_14[1] == 0x2f)) {
      local_14 = local_14 + 2;
      for (local_18 = local_14;
          (((*(ushort *)(**(int **)(iVar2 + DAT_00018f80) + (uint)*local_18 * 2) & 0x80) != 0 &&
           (*local_18 != 0x3a)) && (*local_18 != 0x2f)); local_18 = local_18 + 1) {
      }
      if (*local_18 == 0x3a) {
        iVar1 = sscanf((char *)(local_18 + 1),(char *)(DAT_00018f90 + 0x18db4),&local_1c);
        if (iVar1 != 1) {
          printf((char *)(DAT_00018f9c + 0x18dec),DAT_00018f98 + 0x18de4,0xbc,DAT_00018f94 + 0x18dd8
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
             (*(ushort *)(**(int **)(iVar2 + DAT_00018f80) + (uint)*local_18 * 2) & 0x80) != 0 &&
             (*local_18 != 0x2f)); local_18 = local_18 + 1) {
      }
      if (*local_18 == 0x2f) {
        local_14 = local_18;
        while ((*(ushort *)(**(int **)(iVar2 + DAT_00018f80) + (uint)*local_18 * 2) & 0x80) != 0) {
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
      printf((char *)(DAT_00018f8c + 0x18d14),DAT_00018f88 + 0x18d0c,0xb3,DAT_00018f84 + 0x18d00,
             param_1);
      iVar1 = -1;
    }
  }
  return iVar1;
}



/* ===== FUN_00018fa0 @ 00018fa0 size=256 ===== */

size_t FUN_00018fa0(undefined4 *param_1,char *param_2,size_t param_3)

{
  undefined4 uVar1;
  size_t sVar2;
  
  if (*(short *)(param_1 + 1) == 0) {
    uVar1 = FUN_00018a54(DAT_000190a8 + 0x19050,3,*param_1);
    snprintf(param_2,param_3,(char *)(DAT_000190ac + 0x19080),uVar1,(int)param_1 + 6,
             (int)param_1 + 0x26);
  }
  else {
    uVar1 = FUN_00018a54(DAT_000190a0 + 0x18fe8,3,*param_1);
    snprintf(param_2,param_3,(char *)(DAT_000190a4 + 0x19024),uVar1,(int)param_1 + 6,
             (uint)*(ushort *)(param_1 + 1),(int)param_1 + 0x26);
  }
  sVar2 = strlen(param_2);
  return sVar2;
}



/* ===== FUN_000190b0 @ 000190b0 size=788 ===== */

undefined4 FUN_000190b0(undefined4 *param_1,byte *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int local_18;
  byte *local_14;
  
  iVar2 = DAT_000193c4 + 0x190d0;
  local_14 = param_2;
  local_18 = FUN_00018b00(DAT_000193c8 + 0x190e8,0xc,param_2);
  if (local_18 == 0xb) {
    local_18 = FUN_00018b00(DAT_000193e0 + 0x19250,2,local_14);
    if (local_18 == 1) {
      if (*local_14 == 0x24) {
        *param_1 = 2;
        *(byte *)(param_1 + 1) = local_14[1];
        *(undefined2 *)((int)param_1 + 6) = *(undefined2 *)(local_14 + 2);
        *(undefined1 *)(param_1 + 2) = 0;
        uVar1 = 0;
      }
      else {
        printf((char *)(DAT_000193fc + 0x19374),DAT_000193f8 + 0x1936c,0x10c,DAT_000193f4 + 0x19360,
               param_2);
        uVar1 = 0xffffffff;
      }
    }
    else {
      *param_1 = 1;
      param_1[1] = local_18;
      while ((*(ushort *)(**(int **)(iVar2 + DAT_000193cc) + (uint)*local_14 * 2) & 0x80) != 0) {
        local_14 = local_14 + 1;
      }
      local_14 = local_14 + 1;
      iVar2 = sscanf((char *)local_14,(char *)(DAT_000193e4 + 0x192e0),&local_18);
      if (iVar2 == 1) {
        param_1[2] = local_18;
        uVar1 = 0;
      }
      else {
        printf((char *)(DAT_000193f0 + 0x1931c),DAT_000193ec + 0x19314,0x104,DAT_000193e8 + 0x19308,
               param_2);
        uVar1 = 0xffffffff;
      }
    }
  }
  else {
    *param_1 = 0;
    param_1[1] = local_18;
    while ((*(ushort *)(**(int **)(iVar2 + DAT_000193cc) + (uint)*local_14 * 2) & 0x80) != 0) {
      local_14 = local_14 + 1;
    }
    local_14 = local_14 + 1;
    local_18 = FUN_00018bcc(local_14,param_1 + 2);
    if (local_18 < 1) {
      uVar1 = 0xffffffff;
    }
    else {
      while ((*(ushort *)(**(int **)(iVar2 + DAT_000193cc) + (uint)*local_14 * 2) & 0x80) != 0) {
        local_14 = local_14 + 1;
      }
      local_14 = local_14 + 1;
      local_18 = FUN_00018b00(DAT_000193d0 + 0x191ec,2,local_14);
      if (local_18 == 1) {
        printf((char *)(DAT_000193dc + 0x1922c),DAT_000193d8 + 0x19224,0xf7,DAT_000193d4 + 0x19218,
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



/* ===== FUN_00019400 @ 00019400 size=536 ===== */

char * FUN_00019400(int *param_1,char *param_2,size_t param_3)

{
  undefined4 uVar1;
  size_t sVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  
  if (*param_1 == 0) {
    uVar1 = FUN_00018a54(DAT_00019618 + 0x19450,0xc,param_1[1]);
    snprintf(param_2,param_3,(char *)(DAT_0001961c + 0x19464),uVar1);
    sVar2 = strlen(param_2);
    pcVar5 = param_2 + sVar2;
    iVar6 = param_3 - sVar2;
    if (iVar6 < 2) {
      pcVar5 = pcVar5 + -(int)param_2;
    }
    else {
      iVar3 = FUN_00018fa0(param_1 + 2,pcVar5,iVar6);
      pcVar5 = pcVar5 + iVar3;
      if (iVar6 - iVar3 < 2) {
        pcVar5 = pcVar5 + -(int)param_2;
      }
      else {
        uVar1 = FUN_00018a54(DAT_00019620 + 0x19530,2,param_1[0x1c]);
        snprintf(pcVar5,iVar6 - iVar3,(char *)(DAT_00019624 + 0x19544),uVar1);
        sVar2 = strlen(pcVar5);
        pcVar5 = pcVar5 + (sVar2 - (int)param_2);
      }
    }
  }
  else if (*param_1 == 1) {
    uVar1 = FUN_00018a54(DAT_00019628 + 0x195a4,2,param_1[1]);
    iVar6 = param_1[2];
    uVar4 = FUN_00018a54(DAT_0001962c + 0x195d0,0x2b,param_1[2]);
    snprintf(param_2,param_3,(char *)(DAT_00019630 + 0x195f0),uVar1,iVar6,uVar4);
    pcVar5 = (char *)strlen(param_2);
  }
  else {
    pcVar5 = (char *)0x0;
  }
  return pcVar5;
}



/* ===== FUN_00019634 @ 00019634 size=952 ===== */

undefined4 FUN_00019634(int param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_14;
  char *local_10;
  int local_c;
  
  local_c = param_1 + 4;
  if (*(int *)(param_1 + 0x80) != 0) {
    FUN_00018944(*(undefined4 *)(param_1 + 0x80));
    *(undefined4 *)(local_c + 0x7c) = 0;
  }
  uVar1 = FUN_00018900(0x14);
  *(undefined4 *)(local_c + 0x7c) = uVar1;
  if (*(int *)(local_c + 0x7c) == 0) {
    printf((char *)(DAT_000199f8 + 0x196d0),DAT_000199f4 + 0x196c8,0x153,DAT_000199f0 + 0x196bc,
           DAT_000199ec + 0x196b0);
    uVar1 = 0xffffffff;
  }
  else {
    local_10 = strstr(param_2,(char *)(DAT_000199fc + 0x196e4));
    if (local_10 == (char *)0x0) {
      printf((char *)(DAT_00019a08 + 0x19724),DAT_00019a04 + 0x1971c,0x159,DAT_00019a00 + 0x19710,
             param_2);
      FUN_00018944(*(undefined4 *)(local_c + 0x7c));
      *(undefined4 *)(local_c + 0x7c) = 0;
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = FUN_00018b00(DAT_00019a0c + 0x1975c,3,local_10);
      **(undefined4 **)(local_c + 0x7c) = uVar1;
      local_10 = strstr(param_2,(char *)(DAT_00019a10 + 0x1977c));
      if ((local_10 != (char *)0x0) &&
         (iVar2 = sscanf(local_10,(char *)(DAT_00019a14 + 0x197a8),&local_14), iVar2 == 1)) {
        *(uint *)(*(int *)(local_c + 0x7c) + 4) = *(uint *)(*(int *)(local_c + 0x7c) + 4) | 1;
        *(undefined4 *)(*(int *)(local_c + 0x7c) + 8) = local_14;
      }
      local_10 = strstr(param_2,(char *)(DAT_00019a18 + 0x197f4));
      if (local_10 != (char *)0x0) {
        *(uint *)(*(int *)(local_c + 0x7c) + 4) = *(uint *)(*(int *)(local_c + 0x7c) + 4) | 2;
      }
      local_10 = strstr(param_2,(char *)(DAT_00019a1c + 0x19834));
      if (local_10 != (char *)0x0) {
        *(uint *)(*(int *)(local_c + 0x7c) + 4) = *(uint *)(*(int *)(local_c + 0x7c) + 4) | 4;
      }
      local_10 = strstr(param_2,(char *)(DAT_00019a20 + 0x19874));
      if ((local_10 != (char *)0x0) &&
         (iVar2 = sscanf(local_10,(char *)(DAT_00019a24 + 0x198a0),&local_14), iVar2 == 1)) {
        *(uint *)(*(int *)(local_c + 0x7c) + 4) = *(uint *)(*(int *)(local_c + 0x7c) + 4) | 8;
        *(short *)(*(int *)(local_c + 0x7c) + 0xc) = (short)local_14;
      }
      local_10 = strstr(param_2,(char *)(DAT_00019a28 + 0x198f0));
      if ((local_10 != (char *)0x0) &&
         (iVar2 = sscanf(local_10,(char *)(DAT_00019a2c + 0x1991c),&local_14), iVar2 == 1)) {
        *(uint *)(*(int *)(local_c + 0x7c) + 4) = *(uint *)(*(int *)(local_c + 0x7c) + 4) | 0x10;
        *(short *)(*(int *)(local_c + 0x7c) + 0xe) = (short)local_14;
      }
      local_10 = strstr(param_2,(char *)(DAT_00019a30 + 0x1996c));
      if ((local_10 != (char *)0x0) &&
         (iVar2 = sscanf(local_10,(char *)(DAT_00019a34 + 0x19998),&local_14), iVar2 == 1)) {
        *(uint *)(*(int *)(local_c + 0x7c) + 4) = *(uint *)(*(int *)(local_c + 0x7c) + 4) | 0x20;
        *(undefined1 *)(*(int *)(local_c + 0x7c) + 0x10) = (undefined1)local_14;
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ===== FUN_00019a38 @ 00019a38 size=1192 ===== */

char * FUN_00019a38(int param_1,char *param_2,size_t param_3)

{
  undefined4 uVar1;
  size_t sVar2;
  size_t local_2c;
  char *local_14;
  
  if (*(int *)(param_1 + 0x80) == 0) {
    local_14 = (char *)0x0;
  }
  else {
    uVar1 = FUN_00018a54(DAT_00019ee0 + 0x19a98,3,**(undefined4 **)(param_1 + 0x80));
    snprintf(param_2,param_3,(char *)(DAT_00019ee4 + 0x19aac),uVar1);
    local_2c = strlen(param_2);
    local_14 = param_2 + local_2c;
    local_2c = param_3 - local_2c;
    if ((int)local_2c < 2) {
      local_14 = local_14 + -(int)param_2;
    }
    else {
      if ((*(uint *)(*(int *)(param_1 + 0x80) + 4) & 1) != 0) {
        snprintf(local_14,local_2c,(char *)(DAT_00019ee8 + 0x19b34),
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
          snprintf(local_14,local_2c,(char *)(DAT_00019ef0 + 0x19c28));
          sVar2 = strlen(local_14);
          local_14 = local_14 + sVar2;
          local_2c = local_2c - sVar2;
          if ((int)local_2c < 2) {
            return local_14 + -(int)param_2;
          }
        }
      }
      else {
        snprintf(local_14,local_2c,(char *)(DAT_00019eec + 0x19bac));
        sVar2 = strlen(local_14);
        local_14 = local_14 + sVar2;
        local_2c = local_2c - sVar2;
        if ((int)local_2c < 2) {
          return local_14 + -(int)param_2;
        }
      }
      if ((*(uint *)(*(int *)(param_1 + 0x80) + 4) & 8) != 0) {
        snprintf(local_14,local_2c,(char *)(DAT_00019ef4 + 0x19ccc),
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
        snprintf(local_14,local_2c,(char *)(DAT_00019ef8 + 0x19d6c),
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
        snprintf(local_14,local_2c,(char *)(DAT_00019efc + 0x19e0c),
                 (uint)*(byte *)(*(int *)(param_1 + 0x80) + 0x10),
                 *(byte *)(*(int *)(param_1 + 0x80) + 0x10) + 1);
        sVar2 = strlen(local_14);
        local_14 = local_14 + sVar2;
        local_2c = local_2c - sVar2;
        if ((int)local_2c < 2) {
          return local_14 + -(int)param_2;
        }
      }
      snprintf(local_14,local_2c,(char *)(DAT_00019f00 + 0x19e6c));
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



/* ===== FUN_00019f2c @ 00019f2c size=44 ===== */

undefined4 FUN_00019f2c(void)

{
  return 0;
}



/* ===== FUN_00019f80 @ 00019f80 size=44 ===== */

undefined4 FUN_00019f80(void)

{
  return 0;
}



/* ===== FUN_00019fd4 @ 00019fd4 size=44 ===== */

undefined4 FUN_00019fd4(void)

{
  return 0;
}



/* ===== FUN_0001a000 @ 0001a000 size=312 ===== */

undefined4 FUN_0001a000(int param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x74) != 0) {
    FUN_00018944(*(undefined4 *)(param_1 + 0x74));
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  uVar1 = FUN_00018900(4);
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  if (*(int *)(param_1 + 0x74) == 0) {
    printf((char *)(DAT_0001a144 + 0x1a09c),DAT_0001a140 + 0x1a094,0x201,DAT_0001a13c + 0x1a088,
           DAT_0001a138 + 0x1a07c);
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = sscanf(param_2,(char *)(DAT_0001a148 + 0x1a0bc),*(undefined4 *)(param_1 + 0x74));
    if (iVar2 == 1) {
      uVar1 = 0;
    }
    else {
      FUN_00018944(*(undefined4 *)(param_1 + 0x74));
      *(undefined4 *)(param_1 + 0x74) = 0;
      printf((char *)(DAT_0001a158 + 0x1a120),DAT_0001a154 + 0x1a118,0x201,DAT_0001a150 + 0x1a10c,
             DAT_0001a14c + 0x1a100,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_0001a15c @ 0001a15c size=104 ===== */

size_t FUN_0001a15c(int param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  
  if (*(int *)(param_1 + 0x74) == 0) {
    sVar1 = 0;
  }
  else {
    snprintf(param_2,param_3,(char *)(DAT_0001a1c4 + 0x1a1a0),**(undefined4 **)(param_1 + 0x74));
    sVar1 = strlen(param_2);
  }
  return sVar1;
}



/* ===== FUN_0001a1c8 @ 0001a1c8 size=312 ===== */

undefined4 FUN_0001a1c8(int param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x7c) != 0) {
    FUN_00018944(*(undefined4 *)(param_1 + 0x7c));
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  uVar1 = FUN_00018900(4);
  *(undefined4 *)(param_1 + 0x7c) = uVar1;
  if (*(int *)(param_1 + 0x7c) == 0) {
    printf((char *)(DAT_0001a30c + 0x1a264),DAT_0001a308 + 0x1a25c,0x202,DAT_0001a304 + 0x1a250,
           DAT_0001a300 + 0x1a244);
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = sscanf(param_2,(char *)(DAT_0001a310 + 0x1a284),*(undefined4 *)(param_1 + 0x7c));
    if (iVar2 == 1) {
      uVar1 = 0;
    }
    else {
      FUN_00018944(*(undefined4 *)(param_1 + 0x7c));
      *(undefined4 *)(param_1 + 0x7c) = 0;
      printf((char *)(DAT_0001a320 + 0x1a2e8),DAT_0001a31c + 0x1a2e0,0x202,DAT_0001a318 + 0x1a2d4,
             DAT_0001a314 + 0x1a2c8,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_0001a324 @ 0001a324 size=104 ===== */

size_t FUN_0001a324(int param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  
  if (*(int *)(param_1 + 0x7c) == 0) {
    sVar1 = 0;
  }
  else {
    snprintf(param_2,param_3,(char *)(DAT_0001a38c + 0x1a368),**(undefined4 **)(param_1 + 0x7c));
    sVar1 = strlen(param_2);
  }
  return sVar1;
}



/* ===== FUN_0001a390 @ 0001a390 size=312 ===== */

undefined4 FUN_0001a390(int param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xa0) != 0) {
    FUN_00018944(*(undefined4 *)(param_1 + 0xa0));
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  uVar1 = FUN_00018900(4);
  *(undefined4 *)(param_1 + 0xa0) = uVar1;
  if (*(int *)(param_1 + 0xa0) == 0) {
    printf((char *)(DAT_0001a4d4 + 0x1a42c),DAT_0001a4d0 + 0x1a424,0x203,DAT_0001a4cc + 0x1a418,
           DAT_0001a4c8 + 0x1a40c);
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = sscanf(param_2,(char *)(DAT_0001a4d8 + 0x1a44c),*(undefined4 *)(param_1 + 0xa0));
    if (iVar2 == 1) {
      uVar1 = 0;
    }
    else {
      FUN_00018944(*(undefined4 *)(param_1 + 0xa0));
      *(undefined4 *)(param_1 + 0xa0) = 0;
      printf((char *)(DAT_0001a4e8 + 0x1a4b0),DAT_0001a4e4 + 0x1a4a8,0x203,DAT_0001a4e0 + 0x1a49c,
             DAT_0001a4dc + 0x1a490,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_0001a4ec @ 0001a4ec size=104 ===== */

size_t FUN_0001a4ec(int param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  
  if (*(int *)(param_1 + 0xa0) == 0) {
    sVar1 = 0;
  }
  else {
    snprintf(param_2,param_3,(char *)(DAT_0001a554 + 0x1a530),**(undefined4 **)(param_1 + 0xa0));
    sVar1 = strlen(param_2);
  }
  return sVar1;
}



/* ===== FUN_0001a558 @ 0001a558 size=548 ===== */

undefined4 FUN_0001a558(int param_1,byte *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint local_18;
  byte *local_14;
  
  iVar2 = DAT_0001a77c + 0x1a578;
  local_18 = 0;
  if (*(int *)(param_1 + 0x9c) != 0) {
    FUN_00018944(*(undefined4 *)(param_1 + 0x9c));
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  uVar1 = FUN_00018900(0x40);
  *(undefined4 *)(param_1 + 0x9c) = uVar1;
  local_14 = param_2;
  if (*(int *)(param_1 + 0x9c) == 0) {
    printf((char *)(DAT_0001a78c + 0x1a60c),DAT_0001a788 + 0x1a604,0x22d,DAT_0001a784 + 0x1a5f8,
           DAT_0001a780 + 0x1a5ec);
    uVar1 = 0xffffffff;
  }
  else {
    for (; ((*(ushort *)(**(int **)(iVar2 + DAT_0001a790) + (uint)*local_14 * 2) & 0x80) != 0 &&
           (*local_14 != 0x3a)); local_14 = local_14 + 1) {
    }
    if (*local_14 == 0x3a) {
      do {
        local_14 = local_14 + 1;
      } while (*local_14 == 0x20);
      while (((*(ushort *)(**(int **)(iVar2 + DAT_0001a790) + (uint)*local_14 * 2) & 0x40) != 0 &&
             (local_18 < 0x3f))) {
        *(byte *)(*(int *)(param_1 + 0x9c) + local_18) = *local_14;
        local_18 = local_18 + 1;
        local_14 = local_14 + 1;
      }
      *(undefined1 *)(*(int *)(param_1 + 0x9c) + local_18) = 0;
      uVar1 = 0;
    }
    else {
      FUN_00018944(*(undefined4 *)(param_1 + 0x9c));
      *(undefined4 *)(param_1 + 0x9c) = 0;
      printf((char *)(DAT_0001a7a0 + 0x1a6bc),DAT_0001a79c + 0x1a6b4,0x22d,DAT_0001a798 + 0x1a6a8,
             DAT_0001a794 + 0x1a69c,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_0001a7a4 @ 0001a7a4 size=100 ===== */

size_t FUN_0001a7a4(int param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  
  if (*(int *)(param_1 + 0x9c) == 0) {
    sVar1 = 0;
  }
  else {
    snprintf(param_2,param_3,(char *)(DAT_0001a808 + 0x1a7e4),*(undefined4 *)(param_1 + 0x9c));
    sVar1 = strlen(param_2);
  }
  return sVar1;
}



/* ===== FUN_0001a80c @ 0001a80c size=548 ===== */

undefined4 FUN_0001a80c(int param_1,byte *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint local_18;
  byte *local_14;
  
  iVar2 = DAT_0001aa30 + 0x1a82c;
  local_18 = 0;
  if (*(int *)(param_1 + 0x90) != 0) {
    FUN_00018944(*(undefined4 *)(param_1 + 0x90));
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  uVar1 = FUN_00018900(0x40);
  *(undefined4 *)(param_1 + 0x90) = uVar1;
  local_14 = param_2;
  if (*(int *)(param_1 + 0x90) == 0) {
    printf((char *)(DAT_0001aa40 + 0x1a8c0),DAT_0001aa3c + 0x1a8b8,0x22e,DAT_0001aa38 + 0x1a8ac,
           DAT_0001aa34 + 0x1a8a0);
    uVar1 = 0xffffffff;
  }
  else {
    for (; ((*(ushort *)(**(int **)(iVar2 + DAT_0001aa44) + (uint)*local_14 * 2) & 0x80) != 0 &&
           (*local_14 != 0x3a)); local_14 = local_14 + 1) {
    }
    if (*local_14 == 0x3a) {
      do {
        local_14 = local_14 + 1;
      } while (*local_14 == 0x20);
      while (((*(ushort *)(**(int **)(iVar2 + DAT_0001aa44) + (uint)*local_14 * 2) & 0x40) != 0 &&
             (local_18 < 0x3f))) {
        *(byte *)(*(int *)(param_1 + 0x90) + local_18) = *local_14;
        local_18 = local_18 + 1;
        local_14 = local_14 + 1;
      }
      *(undefined1 *)(*(int *)(param_1 + 0x90) + local_18) = 0;
      uVar1 = 0;
    }
    else {
      FUN_00018944(*(undefined4 *)(param_1 + 0x90));
      *(undefined4 *)(param_1 + 0x90) = 0;
      printf((char *)(DAT_0001aa54 + 0x1a970),DAT_0001aa50 + 0x1a968,0x22e,DAT_0001aa4c + 0x1a95c,
             DAT_0001aa48 + 0x1a950,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_0001aa58 @ 0001aa58 size=100 ===== */

size_t FUN_0001aa58(int param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  
  if (*(int *)(param_1 + 0x90) == 0) {
    sVar1 = 0;
  }
  else {
    snprintf(param_2,param_3,(char *)(DAT_0001aabc + 0x1aa98),*(undefined4 *)(param_1 + 0x90));
    sVar1 = strlen(param_2);
  }
  return sVar1;
}



/* ===== FUN_0001aac0 @ 0001aac0 size=548 ===== */

undefined4 FUN_0001aac0(int param_1,byte *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint local_18;
  byte *local_14;
  
  iVar2 = DAT_0001ace4 + 0x1aae0;
  local_18 = 0;
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_00018944(*(undefined4 *)(param_1 + 0x78));
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  uVar1 = FUN_00018900(0x20);
  *(undefined4 *)(param_1 + 0x78) = uVar1;
  local_14 = param_2;
  if (*(int *)(param_1 + 0x78) == 0) {
    printf((char *)(DAT_0001acf4 + 0x1ab74),DAT_0001acf0 + 0x1ab6c,0x22f,DAT_0001acec + 0x1ab60,
           DAT_0001ace8 + 0x1ab54);
    uVar1 = 0xffffffff;
  }
  else {
    for (; ((*(ushort *)(**(int **)(iVar2 + DAT_0001acf8) + (uint)*local_14 * 2) & 0x80) != 0 &&
           (*local_14 != 0x3a)); local_14 = local_14 + 1) {
    }
    if (*local_14 == 0x3a) {
      do {
        local_14 = local_14 + 1;
      } while (*local_14 == 0x20);
      while (((*(ushort *)(**(int **)(iVar2 + DAT_0001acf8) + (uint)*local_14 * 2) & 0x40) != 0 &&
             (local_18 < 0x1f))) {
        *(byte *)(*(int *)(param_1 + 0x78) + local_18) = *local_14;
        local_18 = local_18 + 1;
        local_14 = local_14 + 1;
      }
      *(undefined1 *)(*(int *)(param_1 + 0x78) + local_18) = 0;
      uVar1 = 0;
    }
    else {
      FUN_00018944(*(undefined4 *)(param_1 + 0x78));
      *(undefined4 *)(param_1 + 0x78) = 0;
      printf((char *)(DAT_0001ad08 + 0x1ac24),DAT_0001ad04 + 0x1ac1c,0x22f,DAT_0001ad00 + 0x1ac10,
             DAT_0001acfc + 0x1ac04,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_0001ad0c @ 0001ad0c size=100 ===== */

size_t FUN_0001ad0c(int param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  
  if (*(int *)(param_1 + 0x78) == 0) {
    sVar1 = 0;
  }
  else {
    snprintf(param_2,param_3,(char *)(DAT_0001ad70 + 0x1ad4c),*(undefined4 *)(param_1 + 0x78));
    sVar1 = strlen(param_2);
  }
  return sVar1;
}



/* ===== FUN_0001ad74 @ 0001ad74 size=648 ===== */

undefined4 FUN_0001ad74(int param_1,byte *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  int local_18;
  byte *local_14;
  
  iVar3 = DAT_0001affc + 0x1ad94;
  if (*(int *)(param_1 + 0xa4) != 0) {
    FUN_00018944(*(undefined4 *)(param_1 + 0xa4));
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  uVar1 = FUN_00018900(4);
  *(undefined4 *)(param_1 + 0xa4) = uVar1;
  local_14 = param_2;
  if (*(int *)(param_1 + 0xa4) == 0) {
    printf((char *)(DAT_0001b00c + 0x1ae30),DAT_0001b008 + 0x1ae28,0x264,DAT_0001b004 + 0x1ae1c,
           DAT_0001b000 + 0x1ae10);
  }
  else {
    for (; ((*(ushort *)(**(int **)(iVar3 + DAT_0001b010) + (uint)*local_14 * 2) & 0x80) != 0 &&
           (*local_14 != 0x3a)); local_14 = local_14 + 1) {
    }
    if (*local_14 == 0x3a) {
      do {
        local_14 = local_14 + 1;
      } while (*local_14 == 0x20);
      for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
        if ((*(int *)(DAT_0001b024 + local_18 * 0xc + 0x1af30) != 0) &&
           (pcVar2 = strstr((char *)local_14,*(char **)(DAT_0001b028 + local_18 * 0xc + 0x1af5c)),
           pcVar2 != (char *)0x0)) {
          **(undefined4 **)(param_1 + 0xa4) =
               *(undefined4 *)(DAT_0001b02c + 0x1af98 + local_18 * 0xc);
          return 0;
        }
      }
      FUN_00018944(*(undefined4 *)(param_1 + 0xa4));
      *(undefined4 *)(param_1 + 0xa4) = 0;
    }
    else {
      FUN_00018944(*(undefined4 *)(param_1 + 0xa4));
      *(undefined4 *)(param_1 + 0xa4) = 0;
      printf((char *)(DAT_0001b020 + 0x1aee0),DAT_0001b01c + 0x1aed8,0x264,DAT_0001b018 + 0x1aecc,
             DAT_0001b014 + 0x1aec0,param_2);
    }
  }
  return 0xffffffff;
}



/* ===== FUN_0001b030 @ 0001b030 size=232 ===== */

size_t FUN_0001b030(int param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  int local_c;
  
  if (*(int *)(param_1 + 0xa4) != 0) {
    for (local_c = 0; local_c < 4; local_c = local_c + 1) {
      if (**(int **)(param_1 + 0xa4) == *(int *)(DAT_0001b118 + 0x1b084 + local_c * 0xc)) {
        snprintf(param_2,param_3,(char *)(DAT_0001b120 + 0x1b0cc),
                 *(undefined4 *)(DAT_0001b11c + local_c * 0xc + 0x1b0b4));
        sVar1 = strlen(param_2);
        return sVar1;
      }
    }
  }
  return 0;
}



/* ===== FUN_0001b124 @ 0001b124 size=636 ===== */

undefined4 FUN_0001b124(int param_1,byte *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  int local_18;
  byte *local_14;
  
  iVar3 = DAT_0001b3a0 + 0x1b144;
  if (*(int *)(param_1 + 0x94) != 0) {
    FUN_00018944(*(undefined4 *)(param_1 + 0x94));
    *(undefined4 *)(param_1 + 0x94) = 0;
  }
  uVar1 = FUN_00018900(4);
  *(undefined4 *)(param_1 + 0x94) = uVar1;
  local_14 = param_2;
  if (*(int *)(param_1 + 0x94) == 0) {
    printf((char *)(DAT_0001b3b0 + 0x1b1e0),DAT_0001b3ac + 0x1b1d8,0x2ab,DAT_0001b3a8 + 0x1b1cc,
           DAT_0001b3a4 + 0x1b1c0);
    uVar1 = 0xffffffff;
  }
  else {
    for (; ((*(ushort *)(**(int **)(iVar3 + DAT_0001b3b4) + (uint)*local_14 * 2) & 0x80) != 0 &&
           (*local_14 != 0x3a)); local_14 = local_14 + 1) {
    }
    if (*local_14 == 0x3a) {
      do {
        local_14 = local_14 + 1;
      } while (*local_14 == 0x20);
      for (local_18 = 0; local_18 < 0xc; local_18 = local_18 + 1) {
        if ((*(int *)(DAT_0001b3c8 + local_18 * 0xc + 0x1b2e0) != 0) &&
           (pcVar2 = strstr((char *)local_14,*(char **)(DAT_0001b3cc + local_18 * 0xc + 0x1b30c)),
           pcVar2 != (char *)0x0)) {
          **(uint **)(param_1 + 0x94) =
               **(uint **)(param_1 + 0x94) |
               1 << (*(uint *)(DAT_0001b3d0 + 0x1b348 + local_18 * 0xc) & 0xff);
        }
      }
      uVar1 = 0;
    }
    else {
      FUN_00018944(*(undefined4 *)(param_1 + 0x94));
      *(undefined4 *)(param_1 + 0x94) = 0;
      printf((char *)(DAT_0001b3c4 + 0x1b290),DAT_0001b3c0 + 0x1b288,0x2ab,DAT_0001b3bc + 0x1b27c,
             DAT_0001b3b8 + 0x1b270,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_0001b3d4 @ 0001b3d4 size=568 ===== */

char * FUN_0001b3d4(int param_1,char *param_2,size_t param_3)

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
    snprintf(param_2,param_3,(char *)(DAT_0001b610 + 0x1b42c),DAT_0001b60c + 0x1b424);
    local_2c = strlen(param_2);
    local_c = param_2 + local_2c;
    local_2c = param_3 - local_2c;
    if ((int)local_2c < 2) {
      local_c = local_c + -(int)param_2;
    }
    else {
      for (local_10 = 0; local_10 < 0xc; local_10 = local_10 + 1) {
        if ((**(uint **)(param_1 + 0x94) &
            1 << (*(uint *)(DAT_0001b614 + 0x1b4a0 + local_10 * 0xc) & 0xff)) != 0) {
          if (bVar1) {
            snprintf(local_c,local_2c,(char *)(DAT_0001b61c + 0x1b500),
                     *(undefined4 *)(DAT_0001b618 + local_10 * 0xc + 0x1b4e8));
          }
          else {
            snprintf(local_c,local_2c,(char *)(DAT_0001b624 + 0x1b53c),
                     *(undefined4 *)(DAT_0001b620 + local_10 * 0xc + 0x1b524));
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
      snprintf(local_c,local_2c,(char *)(DAT_0001b628 + 0x1b5c4));
      sVar2 = strlen(local_c);
      local_c = local_c + (sVar2 - (int)param_2);
    }
  }
  return local_c;
}



/* ===== FUN_0001b62c @ 0001b62c size=636 ===== */

undefined4 FUN_0001b62c(int param_1,byte *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  int local_18;
  byte *local_14;
  
  iVar3 = DAT_0001b8a8 + 0x1b64c;
  if (*(int *)(param_1 + 0x88) != 0) {
    FUN_00018944(*(undefined4 *)(param_1 + 0x88));
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  uVar1 = FUN_00018900(4);
  *(undefined4 *)(param_1 + 0x88) = uVar1;
  local_14 = param_2;
  if (*(int *)(param_1 + 0x88) == 0) {
    printf((char *)(DAT_0001b8b8 + 0x1b6e8),DAT_0001b8b4 + 0x1b6e0,0x2ac,DAT_0001b8b0 + 0x1b6d4,
           DAT_0001b8ac + 0x1b6c8);
    uVar1 = 0xffffffff;
  }
  else {
    for (; ((*(ushort *)(**(int **)(iVar3 + DAT_0001b8bc) + (uint)*local_14 * 2) & 0x80) != 0 &&
           (*local_14 != 0x3a)); local_14 = local_14 + 1) {
    }
    if (*local_14 == 0x3a) {
      do {
        local_14 = local_14 + 1;
      } while (*local_14 == 0x20);
      for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
        if ((*(int *)(DAT_0001b8d0 + local_18 * 0xc + 0x1b7e8) != 0) &&
           (pcVar2 = strstr((char *)local_14,*(char **)(DAT_0001b8d4 + local_18 * 0xc + 0x1b814)),
           pcVar2 != (char *)0x0)) {
          **(uint **)(param_1 + 0x88) =
               **(uint **)(param_1 + 0x88) |
               1 << (*(uint *)(DAT_0001b8d8 + 0x1b850 + local_18 * 0xc) & 0xff);
        }
      }
      uVar1 = 0;
    }
    else {
      FUN_00018944(*(undefined4 *)(param_1 + 0x88));
      *(undefined4 *)(param_1 + 0x88) = 0;
      printf((char *)(DAT_0001b8cc + 0x1b798),DAT_0001b8c8 + 0x1b790,0x2ac,DAT_0001b8c4 + 0x1b784,
             DAT_0001b8c0 + 0x1b778,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_0001b8dc @ 0001b8dc size=568 ===== */

char * FUN_0001b8dc(int param_1,char *param_2,size_t param_3)

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
    snprintf(param_2,param_3,(char *)(DAT_0001bb18 + 0x1b934),DAT_0001bb14 + 0x1b92c);
    local_2c = strlen(param_2);
    local_c = param_2 + local_2c;
    local_2c = param_3 - local_2c;
    if ((int)local_2c < 2) {
      local_c = local_c + -(int)param_2;
    }
    else {
      for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
        if ((**(uint **)(param_1 + 0x88) &
            1 << (*(uint *)(DAT_0001bb1c + 0x1b9a8 + local_10 * 0xc) & 0xff)) != 0) {
          if (bVar1) {
            snprintf(local_c,local_2c,(char *)(DAT_0001bb24 + 0x1ba08),
                     *(undefined4 *)(DAT_0001bb20 + local_10 * 0xc + 0x1b9f0));
          }
          else {
            snprintf(local_c,local_2c,(char *)(DAT_0001bb2c + 0x1ba44),
                     *(undefined4 *)(DAT_0001bb28 + local_10 * 0xc + 0x1ba2c));
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
      snprintf(local_c,local_2c,(char *)(DAT_0001bb30 + 0x1bacc));
      sVar2 = strlen(local_c);
      local_c = local_c + (sVar2 - (int)param_2);
    }
  }
  return local_c;
}



/* ===== FUN_0001bb34 @ 0001bb34 size=192 ===== */

undefined4 FUN_0001bb34(char *param_1)

{
  int iVar1;
  int iVar2;
  int local_c;
  
  iVar2 = DAT_0001bbf4 + 0x1bb50;
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



/* ===== FUN_0001bbf8 @ 0001bbf8 size=276 ===== */

char * FUN_0001bbf8(char *param_1,void *param_2,int param_3)

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



/* ===== FUN_0001bd0c @ 0001bd0c size=60 ===== */

undefined4 FUN_0001bd0c(void *param_1)

{
  if (param_1 != (void *)0x0) {
    memset(param_1,0,0xac);
  }
  return 0;
}



/* ===== FUN_0001bd48 @ 0001bd48 size=428 ===== */

void FUN_0001bd48(void *param_1)

{
  if (*(int *)((int)param_1 + 0x74) != 0) {
    FUN_00018944(*(undefined4 *)((int)param_1 + 0x74));
  }
  if (*(int *)((int)param_1 + 0x78) != 0) {
    FUN_00018944(*(undefined4 *)((int)param_1 + 0x78));
  }
  if (*(int *)((int)param_1 + 0x7c) != 0) {
    FUN_00018944(*(undefined4 *)((int)param_1 + 0x7c));
  }
  if (*(int *)((int)param_1 + 0x80) != 0) {
    FUN_00018944(*(undefined4 *)((int)param_1 + 0x80));
  }
  if (*(int *)((int)param_1 + 0x84) != 0) {
    FUN_00018944(*(undefined4 *)((int)param_1 + 0x84));
  }
  if (*(int *)((int)param_1 + 0x88) != 0) {
    FUN_00018944(*(undefined4 *)((int)param_1 + 0x88));
  }
  if (*(int *)((int)param_1 + 0x90) != 0) {
    FUN_00018944(*(undefined4 *)((int)param_1 + 0x90));
  }
  if (*(int *)((int)param_1 + 0x94) != 0) {
    FUN_00018944(*(undefined4 *)((int)param_1 + 0x94));
  }
  if (*(int *)((int)param_1 + 0x9c) != 0) {
    FUN_00018944(*(undefined4 *)((int)param_1 + 0x9c));
  }
  if (*(int *)((int)param_1 + 0xa4) != 0) {
    FUN_00018944(*(undefined4 *)((int)param_1 + 0xa4));
  }
  if (*(int *)((int)param_1 + 0xa0) != 0) {
    FUN_00018944(*(undefined4 *)((int)param_1 + 0xa0));
  }
  if (*(int *)((int)param_1 + 0xa8) != 0) {
    FUN_00018944(*(undefined4 *)((int)param_1 + 0xa8));
  }
  memset(param_1,0,0xac);
  return;
}



/* ===== FUN_0001bef4 @ 0001bef4 size=52 ===== */

int FUN_0001bef4(void)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0001bf28 + 0x1bf08);
  *(int *)(DAT_0001bf2c + 0x1bf18) = iVar1 + 1;
  return iVar1;
}



/* ===== FUN_0001bf30 @ 0001bf30 size=516 ===== */

char * FUN_0001bf30(char *param_1,int param_2)

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
  local_c = strstr(param_1,(char *)(DAT_0001c134 + 0x1bf68));
  if ((local_c == (char *)0x0) || (param_2 <= (int)(local_c + (1 - (int)local_10)))) {
    if (param_2 < 0x101) {
      pcVar2 = (char *)0x0;
    }
    else {
      pcVar2 = (char *)0xffffffff;
    }
  }
  else {
    local_14 = strstr(local_10,(char *)(DAT_0001c138 + 0x1bfc4));
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
        local_c = (char *)FUN_0001bbf8(local_c,0,0);
        if ((local_c == (char *)0x0) ||
           (iVar1 = strncmp(local_c,(char *)(DAT_0001c13c + 0x1c044),2), iVar1 == 0)) {
          if (param_2 < (int)(local_14 + local_18)) {
            return (char *)0x0;
          }
          return local_14 + local_18;
        }
        iVar1 = strncmp(local_c,(char *)(DAT_0001c140 + 0x1c068),0xe);
      } while ((iVar1 != 0) ||
              (iVar1 = sscanf(local_c,(char *)(DAT_0001c144 + 0x1c090),&local_18), iVar1 == 1));
      printf((char *)(DAT_0001c150 + 0x1c0cc),DAT_0001c14c + 0x1c0c4,0x33d,DAT_0001c148 + 0x1c0b8,
             local_c);
      pcVar2 = (char *)0xffffffff;
    }
  }
  return pcVar2;
}



/* ===== FUN_0001c154 @ 0001c154 size=896 ===== */

int FUN_0001c154(undefined4 *param_1,char *param_2,int param_3)

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
      uVar1 = FUN_00018974(param_2 + 4,local_16);
      param_1[0x2a] = uVar1;
      iVar2 = local_16 + 4;
    }
    else {
      iVar2 = 0;
    }
  }
  else {
    pcVar3 = local_14;
    printf((char *)(DAT_0001c4dc + 0x1c258),DAT_0001c4d8 + 0x1c250,0x361,DAT_0001c4d4 + 0x1c244,
           local_14);
    iVar2 = FUN_0001bf30(param_2,param_3);
    if (0 < iVar2) {
      local_10 = iVar2;
      local_c = (char *)FUN_0001bbf8(local_c,local_11c,0x100);
      if (local_c == (char *)0x0) {
        iVar2 = -1;
      }
      else {
        local_10 = FUN_000190b0(param_1,local_11c);
        if (local_10 < 0) {
          iVar2 = -1;
        }
        else {
          do {
            while( true ) {
              local_c = (char *)FUN_0001bbf8(local_c,local_11c,0x100);
              if ((local_c == (char *)0x0) || (local_11c[0] == '\0')) goto LAB_0001c3ac;
              local_1c = (code *)FUN_0001bb34(local_11c);
              if (local_1c != (code *)0x0) break;
              pcVar3 = local_11c;
              printf((char *)(DAT_0001c4e8 + 0x1c32c),DAT_0001c4e4 + 0x1c324,0x378,
                     DAT_0001c4e0 + 0x1c318,pcVar3);
            }
            local_10 = (*local_1c)(param_1,local_11c);
          } while (-1 < local_10);
          pcVar3 = local_11c;
          printf((char *)(DAT_0001c4f4 + 0x1c37c),DAT_0001c4f0 + 0x1c374,0x37e,
                 DAT_0001c4ec + 0x1c368,pcVar3);
LAB_0001c3ac:
          if ((local_c == (char *)0x0) || (local_11c[0] != '\0')) {
            FUN_0001bd48(param_1);
            iVar2 = -1;
          }
          else {
            if (param_1[0x28] != 0) {
              uVar1 = FUN_00018974(local_c,*(undefined4 *)param_1[0x28]);
              param_1[0x2a] = uVar1;
              if (param_1[0x2a] == 0) {
                printf((char *)(DAT_0001c500 + 0x1c43c),DAT_0001c4fc + 0x1c434,0x38b,
                       DAT_0001c4f8 + 0x1c428,pcVar3);
                FUN_0001bd48(param_1);
                return -1;
              }
            }
            local_10 = (int)local_c - (int)local_14;
            if (param_1[0x28] != 0) {
              local_10 = *(int *)param_1[0x28] + local_10;
            }
            if (local_10 != iVar2) {
              printf((char *)(DAT_0001c50c + 0x1c4c4),DAT_0001c508 + 0x1c4bc,0x396,
                     DAT_0001c504 + 0x1c4b0,iVar2,local_10);
            }
          }
        }
      }
    }
  }
  return iVar2;
}



/* ===== FUN_0001c510 @ 0001c510 size=2104 ===== */

int FUN_0001c510(int *param_1,undefined4 *param_2,int param_3)

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
    iVar2 = FUN_00019400(param_1,param_2,param_3);
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
          iVar2 = FUN_0001a15c(param_1,local_14,local_34);
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
          iVar2 = FUN_0001ad0c(param_1,local_14,local_34);
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
          iVar2 = FUN_0001a324(param_1,local_14,local_34);
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
          iVar2 = FUN_00019a38(param_1,local_14,local_34);
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
          iVar2 = FUN_00019f2c(param_1,local_14,local_34);
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
          iVar2 = FUN_0001b8dc(param_1,local_14,local_34);
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
          iVar2 = FUN_00019f80(param_1,local_14,local_34);
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
          iVar2 = FUN_0001aa58(param_1,local_14,local_34);
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
          iVar2 = FUN_0001b3d4(param_1,local_14,local_34);
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
          iVar2 = FUN_00019fd4(param_1,local_14,local_34);
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
          iVar2 = FUN_0001a7a4(param_1,local_14,local_34);
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
          iVar2 = FUN_0001b030(param_1,local_14,local_34);
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
          iVar2 = FUN_0001a4ec(param_1,local_14,local_34);
          if (iVar2 < 0) {
            return -1;
          }
          local_14 = local_14 + iVar2;
          local_34 = local_34 - iVar2;
          if ((int)local_34 < 2) {
            return (int)local_14 - (int)param_2;
          }
        }
        snprintf(local_14,local_34,(char *)(DAT_0001cd48 + 0x1cc40));
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
            printf((char *)(DAT_0001cd54 + 0x1cd30),DAT_0001cd50 + 0x1cd28,0x3e6,
                   DAT_0001cd4c + 0x1cd1c,param_2);
            local_34 = (int)local_14 - (int)param_2;
          }
        }
      }
    }
  }
  return local_34;
}



/* ===== FUN_0001cd58 @ 0001cd58 size=140 ===== */

undefined4 FUN_0001cd58(undefined4 *param_1,undefined4 param_2,char *param_3,char *param_4)

{
  *param_1 = 0;
  param_1[1] = param_2;
  param_1[2] = 0;
  strncpy((char *)((int)param_1 + 0xe),param_3,0x1f);
  strncpy((char *)((int)param_1 + 0x2e),param_4,0x3f);
  param_1[0x1c] = 0;
  return 0;
}



/* ===== FUN_0001cde4 @ 0001cde4 size=76 ===== */

undefined4 FUN_0001cde4(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = 1;
  param_1[1] = 0;
  param_1[2] = param_2;
  return 0;
}



/* ===== FUN_0001ce30 @ 0001ce30 size=96 ===== */

undefined4 FUN_0001ce30(int param_1,undefined4 *param_2)

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



/* ===== FUN_0001ce90 @ 0001ce90 size=112 ===== */

undefined4 FUN_0001ce90(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x74) == 0) {
    uVar1 = FUN_00018900(4);
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



/* ===== FUN_0001cf00 @ 0001cf00 size=96 ===== */

undefined4 FUN_0001cf00(int param_1,undefined4 *param_2)

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



/* ===== FUN_0001cf60 @ 0001cf60 size=112 ===== */

undefined4 FUN_0001cf60(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x7c) == 0) {
    uVar1 = FUN_00018900(4);
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



/* ===== FUN_0001cfd0 @ 0001cfd0 size=108 ===== */

undefined4 FUN_0001cfd0(int param_1,char *param_2,int param_3)

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



/* ===== FUN_0001d03c @ 0001d03c size=288 ===== */

undefined4 FUN_0001d03c(int param_1,char *param_2)

{
  undefined4 uVar1;
  char *__src;
  char *__dest;
  int iVar2;
  time_t local_18;
  byte *local_14;
  
  iVar2 = DAT_0001d15c + 0x1d05c;
  if (*(int *)(param_1 + 0x78) == 0) {
    uVar1 = FUN_00018900(0x20);
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
      while ((*(ushort *)(**(int **)(iVar2 + DAT_0001d160) + (uint)*local_14 * 2) & 0x40) != 0) {
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



/* ===== FUN_0001d164 @ 0001d164 size=284 ===== */

undefined4 FUN_0001d164(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x80) == 0) {
    uVar1 = FUN_00018900(0x14);
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



/* ===== FUN_0001d280 @ 0001d280 size=220 ===== */

undefined4 FUN_0001d280(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x80) == 0) {
    uVar1 = FUN_00018900(0x14);
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



/* ===== FUN_0001d35c @ 0001d35c size=96 ===== */

undefined4 FUN_0001d35c(int param_1,undefined4 *param_2)

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



/* ===== FUN_0001d3bc @ 0001d3bc size=112 ===== */

undefined4 FUN_0001d3bc(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x88) == 0) {
    uVar1 = FUN_00018900(4);
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



/* ===== FUN_0001d42c @ 0001d42c size=108 ===== */

undefined4 FUN_0001d42c(int param_1,char *param_2,int param_3)

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



/* ===== FUN_0001d498 @ 0001d498 size=168 ===== */

undefined4 FUN_0001d498(int param_1,char *param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x90) == 0) {
    uVar1 = FUN_00018900(0x40);
    *(undefined4 *)(param_1 + 0x90) = uVar1;
  }
  if (*(int *)(param_1 + 0x90) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    if (param_2 == (char *)0x0) {
      strncpy(*(char **)(param_1 + 0x90),(char *)(DAT_0001d540 + 0x1d52c),0x3f);
    }
    else {
      strncpy(*(char **)(param_1 + 0x90),param_2,0x3f);
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_0001d5a4 @ 0001d5a4 size=112 ===== */

undefined4 FUN_0001d5a4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x94) == 0) {
    uVar1 = FUN_00018900(4);
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



/* ===== FUN_0001d614 @ 0001d614 size=108 ===== */

undefined4 FUN_0001d614(int param_1,char *param_2,int param_3)

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



/* ===== FUN_0001d680 @ 0001d680 size=168 ===== */

undefined4 FUN_0001d680(int param_1,char *param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar1 = FUN_00018900(0x40);
    *(undefined4 *)(param_1 + 0x9c) = uVar1;
  }
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    if (param_2 == (char *)0x0) {
      strncpy(*(char **)(param_1 + 0x9c),(char *)(DAT_0001d728 + 0x1d714),0x3f);
    }
    else {
      strncpy(*(char **)(param_1 + 0x9c),param_2,0x3f);
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_0001d790 @ 0001d790 size=112 ===== */

undefined4 FUN_0001d790(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xa4) == 0) {
    uVar1 = FUN_00018900(4);
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



/* ===== FUN_0001d864 @ 0001d864 size=112 ===== */

undefined4 FUN_0001d864(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xa0) == 0) {
    uVar1 = FUN_00018900(4);
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



/* ===== FUN_0001d8d4 @ 0001d8d4 size=292 ===== */

int * FUN_0001d8d4(int param_1,int param_2)

{
  int *piVar1;
  
  if ((param_1 < 1) || (param_2 < 1)) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = calloc(1,param_2 * param_1 + param_2 * 4 + 0x18);
    if (piVar1 == (int *)0x0) {
      printf((char *)(DAT_0001da00 + 0x1d968),DAT_0001d9fc + 0x1d960,0x16,DAT_0001d9f8 + 0x1d954);
      piVar1 = (int *)0x0;
    }
    else {
      printf((char *)(DAT_0001da04 + 0x1d9a0),param_2 * param_1 + param_2 * 4 + 0x18);
      *piVar1 = param_1;
      piVar1[1] = param_2;
      piVar1[4] = (int)(piVar1 + 6);
      piVar1[5] = (int)(piVar1 + param_2 + 6);
    }
  }
  return piVar1;
}



/* ===== FUN_0001da08 @ 0001da08 size=176 ===== */

undefined4 FUN_0001da08(int *param_1,int param_2,int *param_3,int *param_4)

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



/* ===== FUN_0001dab8 @ 0001dab8 size=172 ===== */

undefined4 FUN_0001dab8(int param_1,int param_2)

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



/* ===== FUN_0001db64 @ 0001db64 size=92 ===== */

undefined4 FUN_0001db64(int param_1,int param_2)

{
  undefined4 extraout_r1;
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    FUN_0002011c(param_2 + 1,*(undefined4 *)(param_1 + 4));
    uVar1 = extraout_r1;
  }
  return uVar1;
}



/* ===== FUN_0001dbc0 @ 0001dbc0 size=60 ===== */

undefined4 FUN_0001dbc0(int param_1)

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



/* ===== FUN_0001dbfc @ 0001dbfc size=60 ===== */

undefined4 FUN_0001dbfc(int param_1)

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



/* ===== FUN_0001dc38 @ 0001dc38 size=168 ===== */

undefined4 FUN_0001dc38(int param_1)

{
  int extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    FUN_0002011c(*(int *)(param_1 + 0xc) + 1,*(undefined4 *)(param_1 + 4));
    if (extraout_r1 == *(int *)(param_1 + 8)) {
      uVar1 = 0xffffffff;
    }
    else {
      FUN_0002011c(*(int *)(param_1 + 0xc) + 1,*(undefined4 *)(param_1 + 4));
      *(undefined4 *)(param_1 + 0xc) = extraout_r1_00;
      uVar1 = *(undefined4 *)(param_1 + 0xc);
    }
  }
  return uVar1;
}



/* ===== FUN_0001dce0 @ 0001dce0 size=136 ===== */

undefined4 FUN_0001dce0(int param_1)

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
    FUN_0002011c(*(int *)(param_1 + 8) + 1,*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 8) = extraout_r1;
    uVar1 = *(undefined4 *)(param_1 + 8);
  }
  return uVar1;
}



/* ===== FUN_0001dd68 @ 0001dd68 size=48 ===== */

void FUN_0001dd68(void *param_1)

{
  if (param_1 != (void *)0x0) {
    free(param_1);
  }
  return;
}



/* ===== FUN_0001dd98 @ 0001dd98 size=636 ===== */

undefined1 * FUN_0001dd98(undefined1 *param_1,int param_2,byte *param_3,uint param_4)

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
      *local_c = *(undefined1 *)(DAT_0001e014 + 0x1dea0 + (uint)(bVar1 >> 2));
      local_c[1] = *(undefined1 *)(DAT_0001e018 + 0x1dec8 + ((uVar4 & 0x3f00000) >> 0x14));
      puVar3 = local_c + 3;
      local_c[2] = *(undefined1 *)
                    (DAT_0001e01c + 0x1def0 + ((uVar4 | (uint)bVar2 << 8) >> 0xe & 0x3f));
      local_c = local_c + 4;
      *puVar3 = *(undefined1 *)(DAT_0001e020 + 0x1df18 + (((uint)bVar2 << 8 & 0x3f00) >> 8));
    }
    local_10 = 0;
    for (; local_18 != 0; local_18 = local_18 - 1) {
      local_10 = local_10 * 0x100 + (uint)*local_2c;
      local_14 = local_14 + 8;
      local_2c = local_2c + 1;
    }
    for (; 0 < (int)local_14; local_14 = local_14 - 6) {
      *local_c = *(undefined1 *)
                  (DAT_0001e024 + 0x1dfa8 + ((uint)(local_10 << 6) >> (local_14 & 0xff) & 0x3f));
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



/* ===== FUN_0001e028 @ 0001e028 size=476 ===== */

char * FUN_0001e028(char *param_1,int param_2,int *param_3)

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



/* ===== FUN_0001e204 @ 0001e204 size=588 ===== */

bool FUN_0001e204(int param_1,int param_2,void *param_3)

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
           ) && (iVar1 = FUN_0001e028(local_c,local_14,&local_20), iVar1 != 0))))) {
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
      printf((char *)(DAT_0001e458 + 0x1e354),DAT_0001e454 + 0x1e34c,0x86,DAT_0001e450 + 0x1e340,
             local_20);
      if (0x40 < (int)local_20) {
        local_20 = 0x40;
      }
      memcpy(param_3,local_10,local_20);
      *(size_t *)((int)param_3 + 0x80) = local_20;
      local_18 = local_18 + 1;
    }
    if (local_19 == 8) {
      printf((char *)(DAT_0001e464 + 0x1e3cc),DAT_0001e460 + 0x1e3c4,0x8e,DAT_0001e45c + 0x1e3b8,
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



/* ===== FUN_0001e468 @ 0001e468 size=736 ===== */

bool FUN_0001e468(int param_1,int param_2,void *param_3)

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
         (iVar1 = FUN_0001e028(local_c,local_14,&local_20), iVar1 != 0))) {
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
      printf((char *)(DAT_0001e750 + 0x1e5d0),DAT_0001e74c + 0x1e5c8,0xba,DAT_0001e748 + 0x1e5bc,
             local_20);
      if (0x40 < (int)local_20) {
        local_20 = 0x40;
      }
      memcpy(param_3,local_10,local_20);
      *(size_t *)((int)param_3 + 0xc0) = local_20;
      local_18 = local_18 + 1;
    }
    if (local_19 == 0x21) {
      printf((char *)(DAT_0001e75c + 0x1e648),DAT_0001e758 + 0x1e640,0xc2,DAT_0001e754 + 0x1e634,
             local_20);
      if (0x40 < (int)local_20) {
        local_20 = 0x40;
      }
      memcpy((void *)((int)param_3 + 0x40),local_10,local_20);
      *(size_t *)((int)param_3 + 0xc4) = local_20;
      local_18 = local_18 + 1;
    }
    if (local_19 == 0x22) {
      printf((char *)(DAT_0001e768 + 0x1e6c4),DAT_0001e764 + 0x1e6bc,0xca,DAT_0001e760 + 0x1e6b0,
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



/* ===== FUN_0001e76c @ 0001e76c size=236 ===== */

undefined4 FUN_0001e76c(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 != 4) {
    printf((char *)(DAT_0001e860 + 0x1e7b0),DAT_0001e85c + 0x1e7a8,0xdb,DAT_0001e858 + 0x1e79c);
    return 0xffffffff;
  }
  iVar1 = *param_1;
  if (iVar1 == 24000) {
code_r0x0001e83c:
    *param_3 = iVar1;
    uVar2 = 1;
  }
  else {
    if (iVar1 < 0x5dc1) {
      if (iVar1 == 16000) goto code_r0x0001e83c;
    }
    else if ((iVar1 == 32000) || (iVar1 == 40000)) goto code_r0x0001e83c;
    printf((char *)(DAT_0001e86c + 0x1e830),DAT_0001e868 + 0x1e828,0xe8,DAT_0001e864 + 0x1e81c);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== FUN_0001e870 @ 0001e870 size=56 ===== */

undefined4 FUN_0001e870(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001e204(param_1,param_2,param_3);
  return uVar1;
}



/* ===== FUN_0001e8a8 @ 0001e8a8 size=56 ===== */

undefined4 FUN_0001e8a8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001e468(param_1,param_2,param_3);
  return uVar1;
}



/* ===== FUN_0001e8e0 @ 0001e8e0 size=556 ===== */

int FUN_0001e8e0(undefined4 param_1,undefined4 param_2,int param_3,char *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *local_c;
  
  iVar1 = sprintf(param_4,(char *)(DAT_0001eb0c + 0x1e914),param_1);
  pcVar4 = param_4 + iVar1;
  iVar1 = sprintf(pcVar4,(char *)(DAT_0001eb10 + 0x1e93c));
  iVar2 = sprintf(pcVar4 + iVar1,(char *)(DAT_0001eb14 + 0x1e96c),param_1,param_2);
  local_c = pcVar4 + iVar1 + iVar2;
  if ((*(int *)(param_3 + 0x80) == 0) || (*(int *)(param_3 + 0x84) == 0)) {
    iVar1 = sprintf(local_c,(char *)(DAT_0001eb24 + 0x1ead8),param_1);
    local_c = local_c + iVar1;
  }
  else {
    uVar5 = *(undefined4 *)(param_3 + 0x80);
    uVar6 = *(undefined4 *)(param_3 + 0x84);
    iVar1 = sprintf(local_c,(char *)(DAT_0001eb18 + 0x1e9e0),param_1);
    local_c = local_c + iVar1;
    FUN_0001dd98(local_c,param_5 - ((int)local_c - (int)param_4),param_3,uVar5);
    sVar3 = strlen(local_c);
    iVar1 = sprintf(local_c + sVar3,(char *)(DAT_0001eb1c + 0x1ea44));
    pcVar4 = local_c + sVar3 + iVar1;
    FUN_0001dd98(pcVar4,param_5 - ((int)pcVar4 - (int)param_4),param_3 + 0x40,uVar6);
    sVar3 = strlen(pcVar4);
    iVar1 = sprintf(pcVar4 + sVar3,(char *)(DAT_0001eb20 + 0x1eaa8));
    local_c = pcVar4 + sVar3 + iVar1;
  }
  return (int)local_c - (int)param_4;
}



/* ===== FUN_0001eb28 @ 0001eb28 size=688 ===== */

int FUN_0001eb28(undefined4 param_1,undefined4 param_2,int param_3,char *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *local_c;
  
  iVar1 = sprintf(param_4,(char *)(DAT_0001edd8 + 0x1eb5c),param_1);
  pcVar4 = param_4 + iVar1;
  iVar1 = sprintf(pcVar4,(char *)(DAT_0001eddc + 0x1eb84));
  iVar2 = sprintf(pcVar4 + iVar1,(char *)(DAT_0001ede0 + 0x1ebb4),param_1,param_2);
  local_c = pcVar4 + iVar1 + iVar2;
  if (((*(int *)(param_3 + 0xc0) != 0) && (*(int *)(param_3 + 0xc4) != 0)) &&
     (*(int *)(param_3 + 200) != 0)) {
    uVar5 = *(undefined4 *)(param_3 + 0xc0);
    uVar6 = *(undefined4 *)(param_3 + 0xc4);
    uVar7 = *(undefined4 *)(param_3 + 200);
    iVar1 = sprintf(local_c,(char *)(DAT_0001ede4 + 0x1ec50),param_1);
    iVar2 = sprintf(local_c + iVar1,(char *)(DAT_0001ede8 + 0x1ec78));
    pcVar4 = local_c + iVar1 + iVar2;
    FUN_0001dd98(pcVar4,param_5 - ((int)pcVar4 - (int)param_4),param_3,uVar5);
    sVar3 = strlen(pcVar4);
    iVar1 = sprintf(pcVar4 + sVar3,(char *)(DAT_0001edec + 0x1ecdc));
    pcVar4 = pcVar4 + sVar3 + iVar1;
    FUN_0001dd98(pcVar4,param_5 - ((int)pcVar4 - (int)param_4),param_3 + 0x40,uVar6);
    sVar3 = strlen(pcVar4);
    iVar1 = sprintf(pcVar4 + sVar3,(char *)(DAT_0001edf0 + 0x1ed40));
    pcVar4 = pcVar4 + sVar3 + iVar1;
    FUN_0001dd98(pcVar4,param_5 - ((int)pcVar4 - (int)param_4),param_3 + 0x80,uVar7);
    sVar3 = strlen(pcVar4);
    iVar1 = sprintf(pcVar4 + sVar3,(char *)(DAT_0001edf4 + 0x1eda4));
    local_c = pcVar4 + sVar3 + iVar1;
  }
  return (int)local_c - (int)param_4;
}



/* ===== FUN_0001edf8 @ 0001edf8 size=196 ===== */

char * FUN_0001edf8(undefined4 param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  int iVar1;
  int iVar2;
  char *__s;
  
  iVar1 = sprintf(param_4,(char *)(DAT_0001eebc + 0x1ee2c),param_1);
  __s = param_4 + iVar1;
  iVar1 = sprintf(__s,(char *)(DAT_0001eec0 + 0x1ee54));
  iVar2 = sprintf(__s + iVar1,(char *)(DAT_0001eec4 + 0x1ee8c),param_1,param_2,param_3);
  return __s + iVar1 + (iVar2 - (int)param_4);
}



/* ===== FUN_0001eec8 @ 0001eec8 size=196 ===== */

char * FUN_0001eec8(undefined4 param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  int iVar1;
  int iVar2;
  char *__s;
  
  iVar1 = sprintf(param_4,(char *)(DAT_0001ef8c + 0x1eefc),param_1);
  __s = param_4 + iVar1;
  iVar1 = sprintf(__s,(char *)(DAT_0001ef90 + 0x1ef24));
  iVar2 = sprintf(__s + iVar1,(char *)(DAT_0001ef94 + 0x1ef5c),param_1,param_2,param_3);
  return __s + iVar1 + (iVar2 - (int)param_4);
}



/* ===== FUN_0001ef98 @ 0001ef98 size=252 ===== */

char * FUN_0001ef98(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint *param_4,
                   char *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *__s;
  
  iVar1 = sprintf(param_5,(char *)(DAT_0001f094 + 0x1efcc),param_1);
  __s = param_5 + iVar1;
  iVar1 = sprintf(__s,(char *)(DAT_0001f098 + 0x1eff4));
  if (*param_4 == 0) {
    uVar3 = 0x20;
  }
  else {
    uVar3 = *param_4 / 1000;
  }
  iVar2 = sprintf(__s + iVar1,(char *)(DAT_0001f09c + 0x1f064),param_1,uVar3,param_2,param_3);
  return __s + iVar1 + (iVar2 - (int)param_5);
}



/* ===== FUN_0001f0a0 @ 0001f0a0 size=1436 ===== */

int FUN_0001f0a0(byte *param_1,byte *param_2,size_t param_3,undefined4 param_4,uint param_5,
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
    __hostlong = FUN_0002013c((int)lVar2,
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



/* ===== FUN_0001f63c @ 0001f63c size=1492 ===== */

int FUN_0001f63c(byte *param_1,byte *param_2,size_t param_3,undefined4 param_4,uint param_5,
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
    __hostlong = FUN_0002013c((int)lVar3,
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



/* ===== FUN_0001fc10 @ 0001fc10 size=792 ===== */

int FUN_0001fc10(byte *param_1,void *param_2,size_t param_3,undefined4 param_4,uint param_5,
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
    __hostlong = FUN_0002013c((int)lVar1,
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



/* ===== FUN_0001ff28 @ 0001ff28 size=80 ===== */

undefined4
FUN_0001ff28(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001fc10(param_1,param_2,param_3,param_6,param_5,param_6,param_7,param_8);
  return uVar1;
}



/* ===== FUN_0001ff78 @ 0001ff78 size=168 ===== */

ulonglong FUN_0001ff78(uint param_1,uint param_2)

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



/* ===== FUN_00020020 @ 00020020 size=32 ===== */

void FUN_00020020(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_0001ff78();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_00020048 @ 00020048 size=196 ===== */

uint FUN_00020048(uint param_1,uint param_2)

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



/* ===== FUN_0002011c @ 0002011c size=48 ===== */

void FUN_0002011c(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_00020048();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_0002013c @ 0002013c size=76 ===== */

void FUN_0002013c(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  if (param_4 != 0 || param_3 != 0) {
    FUN_00020188();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_00020188 @ 00020188 size=328 ===== */

undefined8 FUN_00020188(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

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



/* ===== _fini @ 000202d0 size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00034000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00034010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::htons @ 00034014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint16_t htons(uint16_t __hostshort)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChn @ 00034018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_DisableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usleep @ 0003401c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::select @ 00034020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 00034024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_DestroyChn @ 00034028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_DestroyChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 0003402c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 00034030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 00034034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_create @ 00034038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevAttr @ 0003403c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetDevAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_UnBind @ 00034040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_UnBind(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_ReleaseStream @ 00034044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_ReleaseStream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 00034048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_CreateChn @ 0003404c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_CreateChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::listen @ 00034050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int listen(int __fd,int __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 00034054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::time @ 00034058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_DestroyPool @ 0003405c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_DestroyPool(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 00034060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_Handle2VirAddr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ctime @ 00034064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * ctime(time_t *__timer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sscanf @ 00034068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clock_gettime @ 0003406c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 00034070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::send @ 00034074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t send(int __fd,void *__buf,size_t __n,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 00034078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Exit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 0003407c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::socket @ 00034080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_LOG @ 00034084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_LOG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 00034088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt @ 0003408c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 00034090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_join @ 00034094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetEptz @ 00034098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetEptz(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnAttr @ 0003409c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetChnAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memmove @ 000340a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 000340a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 000340a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 000340ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcat @ 000340b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gettimeofday @ 000340b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableDev @ 000340b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_EnableDev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StartRecvFrame @ 000340bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_StartRecvFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::signal @ 000340c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Bind @ 000340c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Bind(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::recvfrom @ 000340c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recvfrom(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,socklen_t *__addr_len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChn @ 000340cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_EnableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setsockopt @ 000340d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_GetStream @ 000340d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_GetStream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 000340d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fcntl @ 000340dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fcntl(int __fd,int __cmd,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 000340e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 000340e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_DetachMbPool @ 000340e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_DetachMbPool(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StopRecvFrame @ 000340ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_StopRecvFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 000340f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevIsEnable @ 000340f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetDevIsEnable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 000340f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::accept @ 000340fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int accept(int __fd,sockaddr *__addr,socklen_t *__addr_len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::recv @ 00034100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recv(int __fd,void *__buf,size_t __n,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::raise @ 00034104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevBindPipe @ 00034108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetDevBindPipe(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetEptz @ 0003410c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetEptz(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sendto @ 00034110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t sendto(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,socklen_t __addr_len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strstr @ 00034114 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00034118 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::inet_ntoa @ 0003411c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * inet_ntoa(in_addr __in)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::htonl @ 00034120 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint32_t htonl(uint32_t __hostlong)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableDev @ 00034124 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_DisableDev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevAttr @ 00034128 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetDevAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ntohs @ 0003412c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint16_t ntohs(uint16_t __netshort)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 00034130 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::bind @ 00034134 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 00034138 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


