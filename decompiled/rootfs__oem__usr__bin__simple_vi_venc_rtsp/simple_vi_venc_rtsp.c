// simple_vi_venc_rtsp — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 000111a8 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 000111cc size=12 ===== */

void RK_MPI_SYS_Exit(void)

{
  (*(code *)PTR_RK_MPI_SYS_Exit_0003300c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Bind @ 000111d8 size=12 ===== */

void RK_MPI_SYS_Bind(void)

{
  (*(code *)PTR_RK_MPI_SYS_Bind_00033010)();
  return;
}



/* ===== <EXTERNAL>::bind @ 000111e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_bind_00033014)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 000111f0 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00033018)();
  return;
}



/* ===== <EXTERNAL>::htons @ 000111fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint16_t htons(uint16_t __hostshort)

{
  uint16_t uVar1;
  
  uVar1 = (*(code *)PTR_htons_0003301c)(__hostshort);
  return uVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_GetStream @ 00011208 size=12 ===== */

void RK_MPI_VENC_GetStream(void)

{
  (*(code *)PTR_RK_MPI_VENC_GetStream_00033020)();
  return;
}



/* ===== <EXTERNAL>::calloc @ 00011214 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_00033024)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 00011220 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00033028)();
  return piVar1;
}



/* ===== <EXTERNAL>::clock_gettime @ 0001122c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_clock_gettime_0003302c)(__clock_id);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableChn @ 00011238 size=12 ===== */

void RK_MPI_VI_DisableChn(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableChn_00033030)();
  return;
}



/* ===== <EXTERNAL>::usleep @ 00011244 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_usleep_00033034)(__useconds);
  return iVar1;
}



/* ===== <EXTERNAL>::memcpy @ 00011250 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00033038)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_CreateChn @ 0001125c size=12 ===== */

void RK_MPI_VENC_CreateChn(void)

{
  (*(code *)PTR_RK_MPI_VENC_CreateChn_0003303c)();
  return;
}



/* ===== <EXTERNAL>::send @ 00011268 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t send(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_send_00033040)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::gettimeofday @ 00011274 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_gettimeofday_00033044)(__tv);
  return iVar1;
}



/* ===== <EXTERNAL>::strcat @ 00011280 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcat_00033048)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevAttr @ 0001128c size=12 ===== */

void RK_MPI_VI_GetDevAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_GetDevAttr_0003304c)();
  return;
}



/* ===== <EXTERNAL>::malloc @ 00011298 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00033050)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::strncmp @ 000112a4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_00033054)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::recv @ 000112bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recv(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_recv_0003305c)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::strlen @ 000112c8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00033060)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::ctime @ 000112d4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * ctime(time_t *__timer)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_ctime_00033064)(__timer);
  return pcVar1;
}



/* ===== <EXTERNAL>::sendto @ 000112e0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t sendto(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,socklen_t __addr_len)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_sendto_00033068)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::fcntl @ 000112ec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fcntl(int __fd,int __cmd,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fcntl_0003306c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::snprintf @ 000112f8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_00033070)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::htonl @ 00011304 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint32_t htonl(uint32_t __hostlong)

{
  uint32_t uVar1;
  
  uVar1 = (*(code *)PTR_htonl_00033074)(__hostlong);
  return uVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnAttr @ 00011310 size=12 ===== */

void RK_MPI_VI_SetChnAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetChnAttr_00033078)();
  return;
}



/* ===== <EXTERNAL>::select @ 0001131c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_select_0003307c)(__nfds);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_UnBind @ 00011328 size=12 ===== */

void RK_MPI_SYS_UnBind(void)

{
  (*(code *)PTR_RK_MPI_SYS_UnBind_00033080)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 00011334 size=12 ===== */

void RK_MPI_SYS_Init(void)

{
  (*(code *)PTR_RK_MPI_SYS_Init_00033084)();
  return;
}



/* ===== <EXTERNAL>::memmove @ 00011340 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_00033088)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::setsockopt @ 0001134c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setsockopt_0003308c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_LOG @ 00011358 size=12 ===== */

void RK_LOG(void)

{
  (*(code *)PTR_RK_LOG_00033090)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StopRecvFrame @ 00011364 size=12 ===== */

void RK_MPI_VENC_StopRecvFrame(void)

{
  (*(code *)PTR_RK_MPI_VENC_StopRecvFrame_00033094)();
  return;
}



/* ===== <EXTERNAL>::time @ 00011370 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_00033098)(__timer);
  return tVar1;
}



/* ===== <EXTERNAL>::pthread_create @ 0001137c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_0003309c)(__newthread);
  return iVar1;
}



/* ===== <EXTERNAL>::close @ 00011388 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_000330a0)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::sscanf @ 00011394 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sscanf_000330a4)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::strncpy @ 000113a0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_000330a8)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevBindPipe @ 000113ac size=12 ===== */

void RK_MPI_VI_SetDevBindPipe(void)

{
  (*(code *)PTR_RK_MPI_VI_SetDevBindPipe_000330ac)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevIsEnable @ 000113b8 size=12 ===== */

void RK_MPI_VI_GetDevIsEnable(void)

{
  (*(code *)PTR_RK_MPI_VI_GetDevIsEnable_000330b0)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableDev @ 000113c4 size=12 ===== */

void RK_MPI_VI_EnableDev(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableDev_000330b4)();
  return;
}



/* ===== <EXTERNAL>::memset @ 000113d0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_000330b8)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::inet_ntoa @ 000113dc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * inet_ntoa(in_addr __in)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_inet_ntoa_000330bc)(__in.s_addr);
  return pcVar1;
}



/* ===== <EXTERNAL>::fprintf @ 000113e8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_000330c0)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::ntohs @ 000113f4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint16_t ntohs(uint16_t __netshort)

{
  uint16_t uVar1;
  
  uVar1 = (*(code *)PTR_ntohs_000330c4)(__netshort);
  return uVar1;
}



/* ===== <EXTERNAL>::abort @ 00011400 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_000330c8)();
  return;
}



/* ===== <EXTERNAL>::recvfrom @ 0001140c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recvfrom(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,socklen_t *__addr_len)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_recvfrom_000330cc)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::sprintf @ 00011418 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_000330d0)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StartRecvFrame @ 00011424 size=12 ===== */

void RK_MPI_VENC_StartRecvFrame(void)

{
  (*(code *)PTR_RK_MPI_VENC_StartRecvFrame_000330d4)();
  return;
}



/* ===== <EXTERNAL>::socket @ 00011430 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_socket_000330d8)(__domain);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 0001143c size=12 ===== */

void RK_MPI_MB_Handle2VirAddr(void)

{
  (*(code *)PTR_RK_MPI_MB_Handle2VirAddr_000330dc)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_DestroyChn @ 00011448 size=12 ===== */

void RK_MPI_VENC_DestroyChn(void)

{
  (*(code *)PTR_RK_MPI_VENC_DestroyChn_000330e0)();
  return;
}



/* ===== <EXTERNAL>::raise @ 00011454 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_000330e4)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::strstr @ 00011460 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strstr_000330e8)(__haystack);
  return pcVar1;
}



/* ===== <EXTERNAL>::strcmp @ 0001146c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_000330ec)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VENC_ReleaseStream @ 00011478 size=12 ===== */

void RK_MPI_VENC_ReleaseStream(void)

{
  (*(code *)PTR_RK_MPI_VENC_ReleaseStream_000330f0)();
  return;
}



/* ===== <EXTERNAL>::getopt @ 00011484 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getopt_000330f4)(___argc);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevAttr @ 00011490 size=12 ===== */

void RK_MPI_VI_SetDevAttr(void)

{
  (*(code *)PTR_RK_MPI_VI_SetDevAttr_000330f8)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChn @ 0001149c size=12 ===== */

void RK_MPI_VI_EnableChn(void)

{
  (*(code *)PTR_RK_MPI_VI_EnableChn_000330fc)();
  return;
}



/* ===== <EXTERNAL>::accept @ 000114a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int accept(int __fd,sockaddr *__addr,socklen_t *__addr_len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_accept_00033100)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 000114b4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00033104)(__ptr);
  return;
}



/* ===== <EXTERNAL>::atoi @ 000114c0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_00033108)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::strerror @ 000114cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_0003310c)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::listen @ 000114d8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int listen(int __fd,int __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_listen_00033110)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::printf @ 000114e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00033114)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableDev @ 000114f0 size=12 ===== */

void RK_MPI_VI_DisableDev(void)

{
  (*(code *)PTR_RK_MPI_VI_DisableDev_00033118)();
  return;
}



/* ===== <EXTERNAL>::puts @ 000114fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_0003311c)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::signal @ 00011508 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = (__sighandler_t)(*(code *)PTR_signal_00033120)(__sig);
  return p_Var1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00011514 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00033124)();
  return;
}



/* ===== <EXTERNAL>::pthread_join @ 00011520 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_00033128)(__th);
  return iVar1;
}



/* ===== FUN_00011530 @ 00011530 size=1188 ===== */

/* WARNING: Type propagation algorithm not settling */

int FUN_00011530(int param_1,char **param_2)

{
  undefined4 *puVar1;
  __useconds_t __useconds;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  pthread_t local_c0 [3];
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_9c;
  undefined4 local_98;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  undefined4 local_80;
  undefined4 local_60;
  undefined4 local_5c;
  int local_48;
  
  puVar1 = DAT_000119d8;
  iVar8 = 0;
  iVar9 = 8;
  iVar6 = 0x438;
  iVar7 = 0x780;
  uVar3 = DAT_000119d4;
  while (iVar2 = getopt(param_1,param_2,DAT_000119dc), iVar2 != -1) {
    if (iVar2 == 99) {
      iVar2 = atoi((char *)*puVar1);
      piVar4 = DAT_000119ec;
LAB_00011780:
      *piVar4 = iVar2;
    }
    else if (iVar2 < 100) {
      if (iVar2 != 0x61) {
        if (0x61 < iVar2) {
          iVar2 = atoi((char *)*puVar1);
          piVar4 = DAT_00011a44;
          goto LAB_00011780;
        }
        if (iVar2 != 0x49) {
LAB_000116a0:
          pcVar5 = *param_2;
          puts(DAT_00011a14);
          printf(DAT_00011a18,pcVar5);
          puts(DAT_00011a1c);
          puts(DAT_00011a20);
          puts(DAT_00011a24);
          puts(DAT_00011a28);
          puts(DAT_00011a2c);
          puts(DAT_00011a30);
          pcVar5 = DAT_00011a34;
LAB_00011738:
          puts(pcVar5);
          return 0;
        }
        iVar8 = atoi((char *)*puVar1);
      }
    }
    else if (iVar2 == 0x68) {
      iVar6 = atoi((char *)*puVar1);
    }
    else if (iVar2 == 0x77) {
      iVar7 = atoi((char *)*puVar1);
    }
    else {
      if (iVar2 != 0x65) goto LAB_000116a0;
      pcVar5 = (char *)*puVar1;
      iVar9 = strcmp(pcVar5,DAT_00011a38);
      if (iVar9 == 0) {
        iVar9 = 8;
        uVar3 = DAT_000119d4;
      }
      else {
        iVar9 = strcmp(pcVar5,DAT_00011a3c);
        pcVar5 = DAT_00011a40;
        if (iVar9 != 0) goto LAB_00011738;
        iVar9 = 0xc;
        uVar3 = DAT_00011a48;
      }
    }
  }
  printf(DAT_000119e0,uVar3);
  printf(DAT_000119e4,iVar7,iVar6);
  printf(DAT_000119e8,iVar8);
  piVar4 = DAT_000119f4;
  printf(DAT_000119f0,*DAT_000119ec);
  signal(2,DAT_000119f8);
  iVar2 = FUN_00012fa0(0x22a);
  uVar3 = DAT_000119fc;
  *piVar4 = iVar2;
  uVar10 = FUN_00012ddc(iVar2,uVar3);
  puVar1 = DAT_00011a00;
  uVar3 = (undefined4)((ulonglong)uVar10 >> 0x20);
  if (iVar9 == 8) {
    uVar3 = 1;
  }
  *DAT_00011a00 = (int)uVar10;
  if (iVar9 != 8) {
    if (iVar9 != 0xc) {
      puts(DAT_00011a4c);
      return -1;
    }
    uVar3 = 2;
  }
  FUN_00013010((int)uVar10,uVar3,0);
  uVar3 = *puVar1;
  uVar10 = FUN_00017f84();
  uVar11 = FUN_00018090();
  FUN_000180c8(uVar3,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,(int)((ulonglong)uVar10 >> 0x20),
               uVar11);
  iVar2 = RK_MPI_SYS_Init();
  if (iVar2 == 0) {
    FUN_00011db8();
    FUN_00011ea4(iVar8,iVar7,iVar6);
    printf(DAT_00011a54,DAT_00011a50);
    memset(&local_ac,0,0x84);
    local_60 = 1;
    local_48 = *DAT_00011a44;
    local_80 = 2;
    local_5c = 0x3c;
    local_9c = (iVar6 * iVar7 * 3) / 2;
    local_98 = 100;
    local_b0 = iVar9;
    local_90 = iVar7;
    local_8c = iVar6;
    local_88 = iVar7;
    local_84 = iVar6;
    RK_MPI_VENC_CreateChn(0,&local_b0);
    local_c0[1] = 0xffffffff;
    RK_MPI_VENC_StartRecvFrame(0,local_c0 + 1);
    local_c0[1] = 8;
    local_b0 = 4;
    local_c0[2] = iVar2;
    local_b4 = iVar8;
    local_ac = iVar2;
    local_a8 = iVar2;
    puts(DAT_00011a58);
    iVar7 = RK_MPI_SYS_Bind(local_c0 + 1,&local_b0);
    if (iVar7 == 0) {
      pthread_create(local_c0,(pthread_attr_t *)0x0,DAT_00011a60,(void *)0x0);
      __useconds = DAT_00011a68;
      pcVar5 = DAT_00011a64;
      while (*pcVar5 == '\0') {
        usleep(__useconds);
      }
      pthread_join(local_c0[0],(void **)0x0);
      if (*piVar4 != 0) {
        FUN_00013630();
      }
      iVar7 = RK_MPI_SYS_UnBind(local_c0 + 1,&local_b0);
      if (iVar7 != 0) {
        RK_LOG(2,DAT_00011a0c,DAT_00011a6c,DAT_00011a08,0x1a8,iVar7);
      }
      uVar3 = RK_MPI_VI_DisableChn(0,iVar8);
      RK_LOG(2,DAT_00011a0c,DAT_00011a70,DAT_00011a08,0x1ac,uVar3);
      iVar7 = RK_MPI_VENC_StopRecvFrame(0);
      if (iVar7 != 0) {
        return iVar7;
      }
      iVar7 = RK_MPI_VENC_DestroyChn();
      if (iVar7 != 0) {
        RK_LOG(2,DAT_00011a0c,DAT_00011a74,DAT_00011a08,0x1b5,iVar7);
      }
      iVar7 = RK_MPI_VI_DisableDev(0);
      RK_LOG(2,DAT_00011a0c,DAT_00011a78,DAT_00011a08,0x1b9,iVar7);
      goto LAB_00011658;
    }
    uVar12 = 0x197;
    uVar3 = DAT_00011a5c;
  }
  else {
    uVar12 = 0x180;
    iVar7 = -1;
    uVar3 = DAT_00011a04;
  }
  RK_LOG(2,DAT_00011a0c,uVar3,DAT_00011a08,uVar12);
LAB_00011658:
  RK_LOG(2,DAT_00011a0c,DAT_00011a10,DAT_00011a08,0x1bc,iVar7);
  RK_MPI_SYS_Exit();
  return 0;
}



/* ===== entry @ 00011a7c size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00033058)
            (DAT_00011ab0,param_2,&stack0x00000004,DAT_00011ab4,DAT_00011aac,param_1);
  return;
}



/* ===== FUN_00011ab8 @ 00011ab8 size=32 ===== */

void FUN_00011ab8(void)

{
  if (DAT_00011adc == DAT_00011ad8) {
    return;
  }
  if (DAT_00011ae0 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011ad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011ae0)();
  return;
}



/* ===== _FINI_0 @ 00011b1c size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00011b58;
  if (*DAT_00011b58 != '\0') {
    return;
  }
  FUN_00011ab8();
  if (DAT_00011b5c != 0) {
    __deregister_frame_info(DAT_00011b60);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00011b64 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00011b88 != 0) {
    __register_frame_info(DAT_00011b90,DAT_00011b8c);
  }
  if ((DAT_00011b14 - DAT_00011b10 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00011b18 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011b0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011b18)();
  return;
}



/* ===== FUN_00011bc8 @ 00011bc8 size=68 ===== */

longlong FUN_00011bc8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  timespec local_10;
  undefined4 uStack_8;
  
  local_10.tv_sec = 0;
  local_10.tv_nsec = 0;
  uStack_8 = param_3;
  clock_gettime(1,&local_10);
  lVar1 = FUN_0001fdcc(local_10.tv_nsec,local_10.tv_nsec >> 0x1f,1000,0);
  return (longlong)local_10.tv_sec * (longlong)DAT_00011c0c + lVar1;
}



/* ===== FUN_00011c10 @ 00011c10 size=376 ===== */

undefined4 FUN_00011c10(void)

{
  char *pcVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  undefined4 *local_1c0 [5];
  undefined4 local_1ac;
  
  printf(DAT_00011d8c,DAT_00011d88);
  local_1c0[0] = malloc(0x88);
  uVar2 = DAT_00011d94;
  pcVar1 = DAT_00011d90;
  uVar10 = 0;
  do {
    if (*pcVar1 != '\0') {
LAB_00011d5c:
      printf(DAT_00011db4,DAT_00011d88);
      free(local_1c0[0]);
      return 0;
    }
    iVar5 = RK_MPI_VENC_GetStream(0,local_1c0,DAT_00011d98);
    piVar4 = DAT_00011da0;
    piVar3 = DAT_00011d9c;
    if (iVar5 == 0) {
      if ((*DAT_00011d9c != 0) && (*DAT_00011da0 != 0)) {
        uVar6 = RK_MPI_MB_Handle2VirAddr(*local_1c0[0]);
        FUN_00016b18(*piVar4,uVar6,local_1c0[0][1],local_1c0[0],*(undefined8 *)(local_1c0[0] + 2));
        FUN_00015f6c(*piVar3);
      }
      uVar13 = FUN_00011bc8();
      uVar7 = local_1c0[0][2];
      iVar8 = local_1c0[0][3];
      iVar11 = (uint)uVar13 - uVar7;
      iVar12 = (int)((ulonglong)uVar13 >> 0x20) - (iVar8 + (uint)((uint)uVar13 < uVar7));
      uVar9 = local_1c0[0][1];
      uVar6 = local_1ac;
      RK_LOG(5,uVar2,DAT_00011da4,DAT_00011da8,0x54,uVar10,local_1ac,uVar9,uVar7,iVar8,iVar11,iVar12
            );
      iVar5 = RK_MPI_VENC_ReleaseStream(0,local_1c0);
      if (iVar5 != 0) {
        RK_LOG(2,uVar2,DAT_00011dac,DAT_00011da8,0x58,iVar5,uVar6,uVar9,uVar7,iVar8,iVar11,iVar12);
      }
      uVar10 = uVar10 + 1;
    }
    if (*DAT_00011db0 < uVar10) {
      *pcVar1 = '\x01';
      goto LAB_00011d5c;
    }
    usleep(10000);
  } while( true );
}



/* ===== FUN_00011db8 @ 00011db8 size=208 ===== */

undefined4 FUN_00011db8(void)

{
  int iVar1;
  char *__format;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int local_4c;
  int local_48;
  
  puts(DAT_00011e88);
  uStack_64 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_60 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_50 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_68 = 0;
  local_5c = 0;
  uStack_58 = uStack_64;
  uStack_54 = uStack_60;
  memset(&local_4c,0,0x44);
  iVar1 = RK_MPI_VI_GetDevAttr(0,&local_68);
  if (iVar1 == DAT_00011e8c) {
    iVar1 = RK_MPI_VI_SetDevAttr(0,&local_68);
    __format = DAT_00011e90;
    if (iVar1 != 0) goto LAB_00011e5c;
  }
  else {
    puts(DAT_00011e9c);
  }
  iVar1 = RK_MPI_VI_GetDevIsEnable(0);
  if (iVar1 == 0) {
    puts(DAT_00011ea0);
    return 0;
  }
  iVar1 = RK_MPI_VI_EnableDev(0);
  __format = DAT_00011e94;
  if ((iVar1 == 0) &&
     (local_4c = iVar1, local_48 = iVar1, iVar1 = RK_MPI_VI_SetDevBindPipe(0,&local_4c),
     __format = DAT_00011e98, iVar1 == 0)) {
    return 0;
  }
LAB_00011e5c:
  printf(__format,iVar1);
  return 0xffffffff;
}



/* ===== FUN_00011ea4 @ 00011ea4 size=128 ===== */

uint FUN_00011ea4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 local_7c;
  undefined4 local_78;
  undefined1 auStack_74 [24];
  undefined4 local_5c;
  undefined4 local_4c;
  undefined4 local_40;
  
  memset(auStack_74,0,100);
  local_40 = 4;
  local_4c = 2;
  local_5c = 2;
  local_7c = param_2;
  local_78 = param_3;
  uVar1 = RK_MPI_VI_SetChnAttr(0,param_1,&local_7c);
  uVar2 = RK_MPI_VI_EnableChn(0,param_1);
  uVar1 = uVar1 | uVar2;
  if (uVar1 != 0) {
    printf(DAT_00011f24,uVar1);
  }
  return uVar1;
}



/* ===== FUN_00011f28 @ 00011f28 size=28 ===== */

int FUN_00011f28(void)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  return *piVar1;
}



/* ===== FUN_00011f44 @ 00011f44 size=40 ===== */

char * FUN_00011f44(int param_1)

{
  char *pcVar1;
  
  pcVar1 = strerror(param_1);
  return pcVar1;
}



/* ===== FUN_00011f6c @ 00011f6c size=156 ===== */

void * FUN_00011f6c(void)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,0x14);
  if (pvVar1 == (void *)0x0) {
    printf((char *)(DAT_00012010 + 0x11fb8),DAT_0001200c + 0x11fb0,0x9a,DAT_00012008 + 0x11fa4);
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



/* ===== FUN_00012014 @ 00012014 size=48 ===== */

void FUN_00012014(void *param_1)

{
  if (param_1 != (void *)0x0) {
    free(param_1);
  }
  return;
}



/* ===== FUN_00012044 @ 00012044 size=204 ===== */

void * FUN_00012044(int param_1)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,0x168);
  if (pvVar1 == (void *)0x0) {
    printf((char *)(DAT_00012118 + 0x12094),DAT_00012114 + 0x1208c,0xad,DAT_00012110 + 0x12080);
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



/* ===== FUN_0001211c @ 0001211c size=136 ===== */

void FUN_0001211c(void *param_1)

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



/* ===== FUN_000121a4 @ 000121a4 size=180 ===== */

void * FUN_000121a4(int param_1)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,0x434);
  if (pvVar1 == (void *)0x0) {
    printf((char *)(DAT_00012260 + 0x121f4),DAT_0001225c + 0x121ec,0xc4,DAT_00012258 + 0x121e0);
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



/* ===== FUN_00012264 @ 00012264 size=136 ===== */

void FUN_00012264(void *param_1)

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



/* ===== FUN_000122ec @ 000122ec size=128 ===== */

void FUN_000122ec(int param_1,int param_2)

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



/* ===== FUN_0001236c @ 0001236c size=144 ===== */

void FUN_0001236c(int param_1)

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



/* ===== FUN_000123fc @ 000123fc size=536 ===== */

int * FUN_000123fc(int param_1)

{
  undefined4 uVar1;
  int local_2c;
  sockaddr local_24;
  int local_14;
  int local_10;
  int *local_c;
  
  local_c = (int *)0x0;
  local_c = (int *)FUN_00011f6c();
  if (local_c == (int *)0x0) {
    local_c = (int *)0x0;
  }
  else {
    local_10 = socket(2,1,0);
    if (local_10 == -1) {
      uVar1 = FUN_00011f28();
      uVar1 = FUN_00011f44(uVar1);
      printf((char *)(DAT_0001261c + 0x12488),DAT_00012618 + 0x12480,0xfa,DAT_00012614 + 0x12474,
             uVar1);
      FUN_00012014(local_c);
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
        uVar1 = FUN_00011f28();
        uVar1 = FUN_00011f44(uVar1);
        printf((char *)(DAT_00012628 + 0x1254c),DAT_00012624 + 0x12544,0x108,DAT_00012620 + 0x12538,
               uVar1);
        close(local_10);
        FUN_00012014(local_c);
        local_c = (int *)0x0;
      }
      else {
        local_14 = listen(local_10,0x80);
        if (local_14 == -1) {
          uVar1 = FUN_00011f28();
          uVar1 = FUN_00011f44(uVar1);
          printf((char *)(DAT_00012634 + 0x125b8),DAT_00012630 + 0x125b0,0x110,
                 DAT_0001262c + 0x125a4,uVar1);
          close(local_10);
          FUN_00012014(local_c);
          local_c = (int *)0x0;
        }
        else {
          *local_c = local_10;
          printf((char *)(DAT_00012640 + 0x12604),DAT_0001263c + 0x125fc,0x118,
                 DAT_00012638 + 0x125f0,local_2c);
        }
      }
    }
  }
  return local_c;
}



/* ===== FUN_00012644 @ 00012644 size=932 ===== */

undefined4 FUN_00012644(int param_1)

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
    printf((char *)(DAT_000129f0 + 0x126d8),DAT_000129ec + 0x126d0,0x15b,DAT_000129e8 + 0x126c4,
           pcVar2);
  }
  else {
    local_c = local_c | 0x800;
    local_c = fcntl(param_1,4,local_c);
    if ((int)local_c < 0) {
      piVar1 = __errno_location();
      pcVar2 = strerror(*piVar1);
      printf((char *)(DAT_000129fc + 0x12744),DAT_000129f8 + 0x1273c,0x160,DAT_000129f4 + 0x12730,
             pcVar2);
    }
  }
  local_c = setsockopt(param_1,1,7,&local_10,4);
  if (local_c == -1) {
    uVar3 = FUN_00011f28();
    uVar3 = FUN_00011f44(uVar3);
    printf((char *)(DAT_00012a08 + 0x127ac),DAT_00012a04 + 0x127a4,0x166,DAT_00012a00 + 0x12798,
           uVar3);
  }
  local_c = setsockopt(param_1,1,9,&local_14,4);
  if (local_c == -1) {
    uVar3 = FUN_00011f28();
    uVar3 = FUN_00011f44(uVar3);
    printf((char *)(DAT_00012a14 + 0x12814),DAT_00012a10 + 0x1280c,0x16b,DAT_00012a0c + 0x12800,
           uVar3);
  }
  local_c = setsockopt(param_1,6,4,&local_18,4);
  if (local_c == -1) {
    uVar3 = FUN_00011f28();
    uVar3 = FUN_00011f44(uVar3);
    printf((char *)(DAT_00012a20 + 0x1287c),DAT_00012a1c + 0x12874,0x170,DAT_00012a18 + 0x12868,
           uVar3);
  }
  local_c = setsockopt(param_1,6,5,&local_1c,4);
  if (local_c == -1) {
    uVar3 = FUN_00011f28();
    uVar3 = FUN_00011f44(uVar3);
    printf((char *)(DAT_00012a2c + 0x128e4),DAT_00012a28 + 0x128dc,0x175,DAT_00012a24 + 0x128d0,
           uVar3);
  }
  local_c = setsockopt(param_1,6,6,&local_20,4);
  if (local_c == -1) {
    uVar3 = FUN_00011f28();
    uVar3 = FUN_00011f44(uVar3);
    printf((char *)(DAT_00012a38 + 0x1294c),DAT_00012a34 + 0x12944,0x17a,DAT_00012a30 + 0x12938,
           uVar3);
  }
  memset(&local_28,0,8);
  local_28 = 1;
  local_24 = 0;
  local_c = setsockopt(param_1,1,0xd,&local_28,8);
  if (local_c == -1) {
    uVar3 = FUN_00011f28();
    uVar3 = FUN_00011f44(uVar3);
    printf((char *)(DAT_00012a44 + 0x129d8),DAT_00012a40 + 0x129d0,0x182,DAT_00012a3c + 0x129c4,
           uVar3);
  }
  return 0;
}



/* ===== FUN_00012a48 @ 00012a48 size=304 ===== */

undefined4 * FUN_00012a48(int *param_1)

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
    uVar2 = FUN_00011f28();
    uVar2 = FUN_00011f44(uVar2);
    printf((char *)(DAT_00012b80 + 0x12ac8),DAT_00012b7c + 0x12ac0,0x191,DAT_00012b78 + 0x12ab4,
           uVar2);
    local_14 = (undefined4 *)0x0;
  }
  else {
    FUN_00012644(local_18);
    pcVar3 = inet_ntoa((in_addr)auStack_28._4_4_);
    uVar1 = ntohs(auStack_28._2_2_);
    printf((char *)(DAT_00012b8c + 0x12b1c),DAT_00012b88 + 0x12b14,0x198,DAT_00012b84 + 0x12b08,
           pcVar3,(uint)uVar1);
    local_14 = (undefined4 *)FUN_000121a4(param_1);
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



/* ===== FUN_00012b90 @ 00012b90 size=160 ===== */

void FUN_00012b90(int param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    uVar2 = *(undefined4 *)(param_1 + 4);
    pcVar1 = inet_ntoa((in_addr)*(in_addr_t *)(param_1 + 8));
    printf((char *)(DAT_00012c38 + 0x12bec),DAT_00012c34 + 0x12be4,0x1ab,DAT_00012c30 + 0x12bd8,
           uVar2,pcVar1);
    FUN_0001236c(param_1);
    FUN_00014648(param_1,0);
    FUN_00014648(param_1,1);
    close(*(int *)(param_1 + 4));
    FUN_00012264(param_1);
  }
  return;
}



/* ===== FUN_00012c3c @ 00012c3c size=408 ===== */

bool FUN_00012c3c(char *param_1,char *param_2)

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
    *(undefined2 *)(local_48 + sVar1) = *(undefined2 *)(DAT_00012dd4 + 0x12d38);
  }
  sVar1 = strlen(local_88);
  if (*(char *)((int)&local_8c + sVar1 + 3) != '/') {
    sVar1 = strlen(local_88);
    *(undefined2 *)(local_88 + sVar1) = *(undefined2 *)(DAT_00012dd8 + 0x12d8c);
  }
  sVar1 = strlen(local_48);
  iVar2 = strncmp(local_48,local_88,sVar1);
  return iVar2 == 0;
}



/* ===== FUN_00012ddc @ 00012ddc size=416 ===== */

char * FUN_00012ddc(int param_1,char *param_2)

{
  int iVar1;
  char *local_c;
  
  local_c = (char *)0x0;
  if (((param_1 == 0) || (param_2 == (char *)0x0)) || (*param_2 == '\0')) {
    printf((char *)(DAT_00012f84 + 0x12e48),DAT_00012f80 + 0x12e40,0x1cc,DAT_00012f7c + 0x12e34);
  }
  else {
    for (local_c = *(char **)(param_1 + 4); local_c != (char *)0x0;
        local_c = *(char **)(local_c + 0x15c)) {
      iVar1 = FUN_00012c3c(local_c,param_2);
      if ((iVar1 != 0) || (iVar1 = FUN_00012c3c(param_2,local_c), iVar1 != 0)) {
        printf((char *)(DAT_00012f90 + 0x12ec4),DAT_00012f8c + 0x12ebc,0x1d2,DAT_00012f88 + 0x12eb0,
               local_c,param_2);
        goto LAB_00012f58;
      }
    }
    local_c = (char *)FUN_00012044(param_1);
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
      printf((char *)(DAT_00012f9c + 0x12f4c),DAT_00012f98 + 0x12f44,0x1e0,DAT_00012f94 + 0x12f38,
             local_c);
      return local_c;
    }
  }
LAB_00012f58:
  if (local_c != (char *)0x0) {
    free(local_c);
  }
  return (char *)0x0;
}



/* ===== FUN_00012fa0 @ 00012fa0 size=40 ===== */

undefined4 FUN_00012fa0(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000123fc(param_1);
  return uVar1;
}



/* ===== FUN_00012fc8 @ 00012fc8 size=72 ===== */

undefined4 FUN_00012fc8(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00012ddc(param_1,param_2);
  FUN_00013010(uVar1,1,0,0);
  return uVar1;
}



/* ===== FUN_00013010 @ 00013010 size=596 ===== */

undefined4 FUN_00013010(int param_1,int param_2,int param_3,int param_4)

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
        iVar1 = FUN_0001df5c(param_3,param_4,param_1 + 0x48);
        if (iVar1 < 1) {
          printf((char *)(DAT_00013278 + 0x13188),DAT_00013274 + 0x13180,0x220,
                 DAT_00013270 + 0x13174);
        }
      }
      else if ((param_2 == 2) && (iVar1 = FUN_0001e1c0(param_3,param_4,param_1 + 0x48), iVar1 < 1))
      {
        printf((char *)(DAT_00013284 + 0x131d0),DAT_00013280 + 0x131c8,0x226,DAT_0001327c + 0x131bc)
        ;
      }
    }
    if (*(int *)(param_1 + 0x138) == 0) {
      uVar2 = FUN_0001d62c(0x5b0,0x4b1);
      *(undefined4 *)(param_1 + 0x138) = uVar2;
      if (*(int *)(param_1 + 0x138) == 0) {
        printf((char *)(DAT_00013290 + 0x13240),DAT_0001328c + 0x13238,0x230,DAT_00013288 + 0x1322c)
        ;
        *(undefined4 *)(param_1 + 0x40) = 0;
        return 0xffffffff;
      }
    }
    uVar2 = 0;
  }
  else {
    printf((char *)(DAT_0001326c + 0x130a4),DAT_00013268 + 0x1309c,0x211,DAT_00013264 + 0x13090,
           param_2);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== FUN_00013294 @ 00013294 size=516 ===== */

undefined4 FUN_00013294(int param_1,int param_2,int param_3,int param_4)

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
       (iVar1 = FUN_0001e4c4(param_3,param_4,param_1 + 0x114), iVar1 < 1)) {
      printf((char *)(DAT_000134ac + 0x1340c),DAT_000134a8 + 0x13404,0x255,DAT_000134a4 + 0x133f8);
    }
    if (*(int *)(param_1 + 0x13c) == 0) {
      uVar2 = FUN_0001d62c(0x5b0,0x29);
      *(undefined4 *)(param_1 + 0x13c) = uVar2;
      if (*(int *)(param_1 + 0x13c) == 0) {
        printf((char *)(DAT_000134b8 + 0x13474),DAT_000134b4 + 0x1346c,0x25f,DAT_000134b0 + 0x13460)
        ;
        *(undefined4 *)(param_1 + 0x44) = 0;
        return 0xffffffff;
      }
    }
    uVar2 = 0;
  }
  else {
    printf((char *)(DAT_000134a0 + 0x1332c),DAT_0001349c + 0x13324,0x245,DAT_00013498 + 0x13318,
           param_2);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== FUN_00013560 @ 00013560 size=196 ===== */

void FUN_00013560(int param_1)

{
  if (param_1 != 0) {
    while (*(int *)(param_1 + 0x154) != 0) {
      FUN_00012b90(*(int *)(param_1 + 0x154));
    }
    printf((char *)(DAT_0001362c + 0x135d0),DAT_00013628 + 0x135c8,0x285,DAT_00013624 + 0x135bc,
           param_1);
    if (*(int *)(param_1 + 0x138) != 0) {
      FUN_0001dac0(*(undefined4 *)(param_1 + 0x138));
    }
    if (*(int *)(param_1 + 0x13c) != 0) {
      FUN_0001dac0(*(undefined4 *)(param_1 + 0x13c));
    }
    FUN_0001211c(param_1);
  }
  return;
}



/* ===== FUN_00013630 @ 00013630 size=144 ===== */

void FUN_00013630(int *param_1)

{
  if (param_1 != (int *)0x0) {
    while (param_1[3] != 0) {
      FUN_00012b90(param_1[3]);
    }
    while (param_1[1] != 0) {
      FUN_00013560(param_1[1]);
    }
    close(*param_1);
    FUN_00012014(param_1);
  }
  return;
}



/* ===== FUN_000136c0 @ 000136c0 size=1128 ===== */

int FUN_000136c0(int param_1,int param_2,char *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *local_c;
  
  iVar1 = sprintf(param_3,(char *)(DAT_00013b28 + 0x136f0));
  pcVar3 = param_3 + iVar1;
  iVar1 = sprintf(pcVar3,(char *)(DAT_00013b2c + 0x13718));
  pcVar3 = pcVar3 + iVar1;
  iVar1 = sprintf(pcVar3,(char *)(DAT_00013b30 + 0x13740));
  pcVar3 = pcVar3 + iVar1;
  iVar1 = sprintf(pcVar3,(char *)(DAT_00013b34 + 0x13768));
  pcVar3 = pcVar3 + iVar1;
  iVar1 = param_2;
  if (param_2 == 0) {
    iVar1 = DAT_00013b38 + 0x137a4;
  }
  iVar1 = sprintf(pcVar3,(char *)(DAT_00013b3c + 0x137b0),iVar1);
  iVar2 = sprintf(pcVar3 + iVar1,(char *)(DAT_00013b40 + 0x137d8));
  local_c = pcVar3 + iVar1 + iVar2;
  if (*(int *)(param_1 + 0x40) != 0) {
    if (*(int *)(param_1 + 0x40) == 1) {
      iVar1 = FUN_0001e638(0x60,*(undefined4 *)(param_1 + 0x120),param_1 + 0x48,local_c,
                           param_4 - ((int)local_c - (int)param_3));
      local_c = local_c + iVar1;
    }
    else if (*(int *)(param_1 + 0x40) == 2) {
      iVar1 = FUN_0001e880(0x60,*(undefined4 *)(param_1 + 0x120),param_1 + 0x48,local_c,
                           param_4 - ((int)local_c - (int)param_3));
      local_c = local_c + iVar1;
    }
    if (param_2 == 0) {
      iVar1 = sprintf(local_c,(char *)(DAT_00013b50 + 0x13928),DAT_00013b4c + 0x1391c);
      local_c = local_c + iVar1;
    }
    else {
      iVar1 = sprintf(local_c,(char *)(DAT_00013b48 + 0x138f4),param_2,DAT_00013b44 + 0x138e8);
      local_c = local_c + iVar1;
    }
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    iVar1 = *(int *)(param_1 + 0x44);
    if (iVar1 == 0x4002) {
      iVar1 = FUN_0001ec20(0x61,*(undefined4 *)(param_1 + 0x130),*(undefined1 *)(param_1 + 0x134),
                           local_c,param_4 - ((int)local_c - (int)param_3));
      local_c = local_c + iVar1;
    }
    else if (iVar1 == 0x4003) {
      iVar1 = FUN_0001ecf0(0x61,*(undefined4 *)(param_1 + 0x130),*(undefined1 *)(param_1 + 0x134),
                           param_1 + 0x114,local_c,param_4 - ((int)local_c - (int)param_3));
      local_c = local_c + iVar1;
    }
    else if (iVar1 == 0x4001) {
      iVar1 = FUN_0001eb50(0x61,*(undefined4 *)(param_1 + 0x130),*(undefined1 *)(param_1 + 0x134),
                           local_c,param_4 - ((int)local_c - (int)param_3));
      local_c = local_c + iVar1;
    }
    if (param_2 == 0) {
      iVar1 = sprintf(local_c,(char *)(DAT_00013b60 + 0x13af4),DAT_00013b5c + 0x13ae8);
      local_c = local_c + iVar1;
    }
    else {
      iVar1 = sprintf(local_c,(char *)(DAT_00013b58 + 0x13ac0),param_2,DAT_00013b54 + 0x13ab4);
      local_c = local_c + iVar1;
    }
  }
  return (int)local_c - (int)param_3;
}



/* ===== FUN_00013b64 @ 00013b64 size=164 ===== */

undefined4 FUN_00013b64(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  printf((char *)(DAT_00013c10 + 0x13ba4),DAT_00013c0c + 0x13b9c,0x2d5,DAT_00013c08 + 0x13b90);
  FUN_0001d2fc(param_3,0x6f);
  return 0;
}



/* ===== FUN_00013c14 @ 00013c14 size=648 ===== */

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_00013c14(int param_1,int param_2,int param_3)

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
  printf((char *)(DAT_00013ea4 + 0x13cbc),DAT_00013ea0 + 0x13cb4,0x2ea,DAT_00013e9c + 0x13ca8);
  iVar1 = FUN_0001d0b4(param_2,local_418);
  if ((iVar1 < 0) && ((local_418[0] & 1) == 0)) {
    FUN_0001cb3c(param_3,0x196);
    printf((char *)(DAT_00013eb0 + 0x13d18),DAT_00013eac + 0x13d10,0x2ed,DAT_00013ea8 + 0x13d04);
  }
  else {
    if (*local_14 == 1) {
      sVar2 = strlen(local_498);
      uVar3 = *(undefined4 *)(DAT_00013eb4 + 0x13d64);
      *(undefined4 *)(local_498 + sVar2) = *(undefined4 *)(DAT_00013eb4 + 0x13d60);
      *(undefined4 *)((int)&uStack_494 + sVar2) = uVar3;
      auStack_490[sVar2] = *(undefined1 *)(DAT_00013eb4 + 0x13d68);
    }
    else {
      sVar2 = strlen(local_498);
      uVar3 = *(undefined4 *)(DAT_00013eb8 + 0x13da8);
      *(undefined4 *)(local_498 + sVar2) = *(undefined4 *)(DAT_00013eb8 + 0x13da4);
      *(undefined4 *)((int)&uStack_494 + sVar2) = uVar3;
    }
    strcat(local_498,(char *)((int)local_14 + 6));
    if ((short)local_14[1] != 0) {
      sVar2 = strlen(local_498);
      sprintf(local_498 + sVar2,(char *)(DAT_00013ebc + 0x13e10),(uint)*(ushort *)(local_14 + 1));
    }
    strcat(local_498,local_c);
    local_10 = FUN_000136c0(local_c,local_498,local_418 + 1,0x400);
    FUN_0001d4e8(param_3,0);
    FUN_0001d5bc(param_3,local_10);
    uVar3 = FUN_000186cc(local_418 + 1,local_10);
    *(undefined4 *)(param_3 + 0xa8) = uVar3;
  }
  return 0;
}



/* ===== FUN_00013ec0 @ 00013ec0 size=52 ===== */

int FUN_00013ec0(void)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_00013ef4 + 0x13ed4);
  *(int *)(DAT_00013ef8 + 0x13ee4) = iVar1 + 1;
  return iVar1;
}



/* ===== FUN_00013efc @ 00013efc size=1048 ===== */

undefined4 FUN_00013efc(undefined4 *param_1)

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
      printf((char *)(DAT_00014364 + 0x14304),DAT_00014360 + 0x142fc,0x363,DAT_0001435c + 0x142f0);
      return 0xffffffff;
    }
    local_10 = socket(2,2,0);
    if (local_10 == -1) break;
    local_14 = socket(2,2,0);
    if (local_14 == -1) {
      uVar1 = FUN_00011f28();
      uVar1 = FUN_00011f44(uVar1);
      printf((char *)(DAT_00014328 + 0x13fd0),DAT_00014324 + 0x13fc8,0x31a,DAT_00014320 + 0x13fbc,
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
          printf((char *)(DAT_00014334 + 0x14144),DAT_00014330 + 0x1413c,0x347,
                 DAT_0001432c + 0x14130,pcVar3);
        }
        else {
          local_1c = local_1c | 0x800;
          local_1c = fcntl(local_10,4,local_1c);
          if ((int)local_1c < 0) {
            piVar2 = __errno_location();
            pcVar3 = strerror(*piVar2);
            printf((char *)(DAT_00014340 + 0x141b0),DAT_0001433c + 0x141a8,0x34c,
                   DAT_00014338 + 0x1419c,pcVar3);
          }
        }
        local_1c = fcntl(local_14,3,0);
        if ((int)local_1c < 0) {
          piVar2 = __errno_location();
          pcVar3 = strerror(*piVar2);
          printf((char *)(DAT_0001434c + 0x1420c),DAT_00014348 + 0x14204,0x351,
                 DAT_00014344 + 0x141f8,pcVar3);
        }
        else {
          local_1c = local_1c | 0x800;
          local_1c = fcntl(local_14,4,local_1c);
          if ((int)local_1c < 0) {
            piVar2 = __errno_location();
            pcVar3 = strerror(*piVar2);
            printf((char *)(DAT_00014358 + 0x14278),DAT_00014354 + 0x14270,0x356,
                   DAT_00014350 + 0x14264,pcVar3);
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
  uVar1 = FUN_00011f28();
  uVar1 = FUN_00011f44(uVar1);
  printf((char *)(DAT_0001431c + 0x13f70),DAT_00014318 + 0x13f68,0x314,DAT_00014314 + 0x13f5c,uVar1)
  ;
  return 0xffffffff;
}



/* ===== FUN_00014368 @ 00014368 size=684 ===== */

undefined4 FUN_00014368(int param_1,int param_2,int param_3,short param_4,uint param_5)

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
    printf((char *)(DAT_0001461c + 0x143ec),DAT_00014618 + 0x143e4,0x36e,DAT_00014614 + 0x143d8,
           pcVar3);
    uVar5 = 0xffffffff;
  }
  else {
    *__ptr = (uint)(param_3 != 0);
    __ptr[8] = __in.s_addr;
    uVar4 = FUN_00013ec0();
    __ptr[10] = uVar4;
    if (param_3 == 0) {
      iVar6 = FUN_00013efc(__ptr);
      if (iVar6 < 0) {
        free(__ptr);
        return 0xffffffff;
      }
      *(short *)(__ptr + 7) = param_4;
      *(short *)((int)__ptr + 0x1e) = param_4 + 1;
      if (param_2 == 0) {
        iVar6 = DAT_00014638 + 0x14560;
      }
      else {
        iVar6 = DAT_00014634 + 0x14550;
      }
      uVar7 = __ptr[10];
      uVar4 = __ptr[6];
      uVar1 = *(ushort *)((int)__ptr + 0x1a);
      pcVar3 = inet_ntoa(__in);
      printf((char *)(DAT_00014644 + 0x145dc),DAT_00014640 + 0x145d4,0x38b,DAT_0001463c + 0x145c8,
             iVar6,uVar7,(uint)(ushort)uVar4,(uint)uVar1,pcVar3,(uint)(ushort)__ptr[7],
             (uint)*(ushort *)((int)__ptr + 0x1e));
    }
    else {
      __ptr[1] = *(uint *)(param_1 + 4);
      __ptr[2] = param_5;
      __ptr[3] = param_5 + 1;
      if (param_2 == 0) {
        iVar6 = DAT_00014624 + 0x14490;
      }
      else {
        iVar6 = DAT_00014620 + 0x14480;
      }
      uVar4 = __ptr[10];
      pcVar3 = inet_ntoa(__in);
      printf((char *)(DAT_00014630 + 0x144e8),DAT_0001462c + 0x144e0,0x37e,DAT_00014628 + 0x144d4,
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



/* ===== FUN_00014648 @ 00014648 size=164 ===== */

void FUN_00014648(int param_1,int param_2)

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



/* ===== FUN_000146ec @ 000146ec size=1096 ===== */

undefined4 FUN_000146ec(int *param_1,int param_2,undefined4 param_3)

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
  printf((char *)(DAT_00014b3c + 0x147c8),DAT_00014b38 + 0x147c0,0x3b6,DAT_00014b34 + 0x147b4);
  if (*(int *)(param_2 + 0x80) == 0) {
    FUN_0001cb3c(param_3,0x1cd);
    printf((char *)(DAT_00014b48 + 0x14804),DAT_00014b44 + 0x147fc,0x3ba,DAT_00014b40 + 0x147f0);
  }
  else {
    if (**(int **)(param_2 + 0x80) == 1) {
      local_c = 1;
      if ((*(uint *)(*(int *)(param_2 + 0x80) + 4) & 0x20) == 0) {
        printf((char *)(DAT_00014b54 + 0x14860),DAT_00014b50 + 0x14858,0x3c1,DAT_00014b4c + 0x1484c)
        ;
        FUN_0001cb3c(param_3,0x1cd);
        return 0;
      }
    }
    else if ((*(uint *)(*(int *)(param_2 + 0x80) + 4) & 8) == 0) {
      printf((char *)(DAT_00014b60 + 0x148ac),DAT_00014b5c + 0x148a4,0x3c7,DAT_00014b58 + 0x14898);
      FUN_0001cb3c(param_3,0x1cd);
      return 0;
    }
    snprintf(local_5c,0x3f,(char *)(DAT_00014b68 + 0x148e0),local_14,DAT_00014b64 + 0x148d4);
    snprintf(local_9c,0x3f,(char *)(DAT_00014b70 + 0x14904),local_14,DAT_00014b6c + 0x148f8);
    if ((*(int *)(local_14 + 0x40) == 0) ||
       (iVar1 = FUN_00012c3c(local_5c,param_2 + 0x2e), iVar1 == 0)) {
      if ((*(int *)(local_14 + 0x44) == 0) ||
         (iVar1 = FUN_00012c3c(local_9c,param_2 + 0x2e), iVar1 == 0)) {
        printf((char *)(DAT_00014b7c + 0x149b4),DAT_00014b78 + 0x149ac,0x3d4,DAT_00014b74 + 0x149a0,
               param_2 + 0x2e);
        FUN_0001cb3c(param_3,0x1cd);
        return 0;
      }
      local_10 = 1;
    }
    else {
      local_10 = 0;
    }
    FUN_00014648(param_1,local_10);
    local_1c = FUN_00014368(param_1,local_10,local_c,*(undefined2 *)(*(int *)(param_2 + 0x80) + 0xc)
                            ,*(undefined1 *)(*(int *)(param_2 + 0x80) + 0x10));
    if (local_1c < 0) {
      FUN_0001cb3c(param_3,500);
    }
    else {
      if (local_10 == 0) {
        local_18 = param_1[0x105];
      }
      else {
        local_18 = param_1[0x106];
      }
      if (local_c == 0) {
        FUN_0001cebc(param_3,*(undefined4 *)(local_18 + 0x28),*(undefined2 *)(local_18 + 0x1c),
                     *(undefined2 *)(local_18 + 0x18));
      }
      else {
        FUN_0001cfd8(param_3,*(undefined4 *)(local_18 + 0x28),*(undefined4 *)(local_18 + 8));
      }
      if (*param_1 == 2) {
        if (local_10 == 0) {
          uVar2 = *(undefined4 *)(local_14 + 0x138);
        }
        else {
          uVar2 = *(undefined4 *)(local_14 + 0x13c);
        }
        uVar2 = FUN_0001d954(uVar2);
        *(undefined4 *)(local_18 + 0x24) = uVar2;
      }
      if (*param_1 == 0) {
        *param_1 = 1;
        iVar1 = FUN_0001bc4c();
        param_1[3] = iVar1;
        FUN_0001ccb8(param_3,param_1[3]);
      }
    }
  }
  return 0;
}



/* ===== FUN_00014b80 @ 00014b80 size=184 ===== */

undefined4 FUN_00014b80(int *param_1,undefined4 param_2,undefined4 param_3)

{
  printf((char *)(DAT_00014c40 + 0x14bb8),DAT_00014c3c + 0x14bb0,0x3fb,DAT_00014c38 + 0x14ba4);
  if ((*param_1 == 1) || (*param_1 == 2)) {
    if (*param_1 != 1) {
      *param_1 = 1;
    }
  }
  else {
    FUN_0001cb3c(param_3,0x1c7);
    printf((char *)(DAT_00014c4c + 0x14c04),DAT_00014c48 + 0x14bfc,0x3ff,DAT_00014c44 + 0x14bf0);
  }
  return 0;
}



/* ===== FUN_00014c50 @ 00014c50 size=324 ===== */

undefined4 FUN_00014c50(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[0x108];
  printf((char *)(DAT_00014d9c + 0x14c94),DAT_00014d98 + 0x14c8c,0x40d,DAT_00014d94 + 0x14c80);
  if ((*param_1 == 1) || (*param_1 == 2)) {
    if (*param_1 != 2) {
      if ((param_1[0x105] != 0) && (*(int *)(iVar2 + 0x138) != 0)) {
        iVar3 = param_1[0x105];
        uVar1 = FUN_0001d954(*(undefined4 *)(iVar2 + 0x138));
        *(undefined4 *)(iVar3 + 0x24) = uVar1;
      }
      if ((param_1[0x106] != 0) && (*(int *)(iVar2 + 0x13c) != 0)) {
        iVar3 = param_1[0x106];
        uVar1 = FUN_0001d954(*(undefined4 *)(iVar2 + 0x13c));
        *(undefined4 *)(iVar3 + 0x24) = uVar1;
      }
      *param_1 = 2;
    }
  }
  else {
    FUN_0001cb3c(param_3,0x1c7);
    printf((char *)(DAT_00014da8 + 0x14ce0),DAT_00014da4 + 0x14cd8,0x411,DAT_00014da0 + 0x14ccc);
  }
  return 0;
}



/* ===== FUN_00014dac @ 00014dac size=456 ===== */

undefined4 FUN_00014dac(undefined4 *param_1,int param_2)

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
  printf((char *)(DAT_00014f7c + 0x14e70),DAT_00014f78 + 0x14e68,0x425,DAT_00014f74 + 0x14e5c);
  snprintf(local_4c,0x3f,(char *)(DAT_00014f84 + 0x14e90),local_c,DAT_00014f80 + 0x14e84);
  snprintf(local_8c,0x3f,(char *)(DAT_00014f8c + 0x14eb4),local_c,DAT_00014f88 + 0x14ea8);
  iVar1 = FUN_00012c3c(local_4c,param_2 + 0x2e);
  if (iVar1 == 0) {
    iVar1 = FUN_00012c3c(local_8c,param_2 + 0x2e);
    if (iVar1 == 0) {
      FUN_00014648(param_1,0);
      FUN_00014648(param_1,1);
    }
    else {
      FUN_00014648(param_1,1);
    }
  }
  else {
    FUN_00014648(param_1,0);
  }
  if ((param_1[0x105] == 0) && (param_1[0x106] == 0)) {
    *param_1 = 0;
  }
  return 0;
}



/* ===== FUN_00014f90 @ 00014f90 size=856 ===== */

undefined4 FUN_00014f90(int *param_1,int param_2,undefined4 param_3)

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
  FUN_0001cb3c(param_3,200);
  FUN_0001cd94(param_3,0);
  FUN_0001d3d8(param_3,DAT_000152e8 + 0x15000);
  iVar1 = FUN_0001cb88(param_2,&local_18);
  if (iVar1 < 0) {
    FUN_0001cb3c(param_3,400);
    printf((char *)(DAT_000152f4 + 0x15050),DAT_000152f0 + 0x15048,0x448,DAT_000152ec + 0x1503c);
    uVar2 = 0;
  }
  else {
    FUN_0001cbe8(param_3,local_18);
    if (*param_1 != 0) {
      iVar1 = FUN_0001cc58(param_2,&local_1c);
      if ((iVar1 < 0) || (param_1[3] != local_1c)) {
        printf((char *)(DAT_00015300 + 0x150c8),DAT_000152fc + 0x150c0,0x44f,DAT_000152f8 + 0x150b4)
        ;
        FUN_0001cb3c(param_3,0x1c6);
        return 0;
      }
      FUN_0001ccb8(param_3,local_1c);
    }
    if (local_c == 0) {
      if (*(int *)(param_2 + 4) != 0) {
        local_c = *(int *)(local_10 + 4);
        while ((local_c != 0 && (iVar1 = FUN_00012c3c(local_c,local_14), iVar1 == 0))) {
          local_c = *(int *)(local_c + 0x15c);
        }
        if (local_c == 0) {
          printf((char *)(DAT_00015318 + 0x151e8),DAT_00015314 + 0x151e0,0x463,
                 DAT_00015310 + 0x151d4,local_14);
          FUN_0001cb3c(param_3,0x1c6);
          return 0;
        }
        FUN_000122ec(param_1,local_c);
      }
    }
    else {
      iVar1 = FUN_00012c3c(local_c,local_14);
      if (iVar1 == 0) {
        printf((char *)(DAT_0001530c + 0x15144),DAT_00015308 + 0x1513c,0x458,DAT_00015304 + 0x15130,
               local_14,local_c);
        FUN_0001cb3c(param_3,0x1c3);
        return 0;
      }
    }
    switch(*(undefined4 *)(param_2 + 4)) {
    case 0:
      uVar2 = FUN_00013b64(param_1,param_2,param_3);
      break;
    case 1:
      uVar2 = FUN_00013c14(param_1,param_2,param_3);
      break;
    case 2:
      uVar2 = FUN_000146ec(param_1,param_2,param_3);
      break;
    case 3:
      uVar2 = FUN_00014c50(param_1,param_2,param_3);
      break;
    case 4:
    default:
      FUN_0001cb3c(param_3,0x1f5);
      uVar2 = 0;
      break;
    case 5:
      uVar2 = FUN_00014b80(param_1,param_2,param_3);
      break;
    case 6:
      uVar2 = FUN_00014dac(param_1,param_2,param_3);
    }
  }
  return uVar2;
}



/* ===== FUN_0001531c @ 0001531c size=528 ===== */

int FUN_0001531c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_c;
  
  if (*(int *)(param_1 + 0x410) != 0x3ff) {
    local_c = recv(*(int *)(param_1 + 4),(void *)(param_1 + 0x10 + *(int *)(param_1 + 0x410)),
                   0x3ff - *(int *)(param_1 + 0x410),0x40);
    if (local_c == 0) {
      printf((char *)(DAT_00015534 + 0x153a8),DAT_00015530 + 0x153a0,0x486,DAT_0001552c + 0x15394);
      return -1;
    }
    if (local_c == -1) {
      iVar1 = FUN_00011f28();
      if ((iVar1 != 0xb) && (iVar1 = FUN_00011f28(), iVar1 != 4)) {
        uVar2 = FUN_00011f28();
        uVar2 = FUN_00011f44(uVar2);
        printf((char *)(DAT_00015540 + 0x15414),DAT_0001553c + 0x1540c,0x48b,DAT_00015538 + 0x15400,
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
    iVar1 = FUN_0001beac(param_2,param_1 + 0x10,*(undefined4 *)(param_1 + 0x410));
    if (iVar1 < 0) {
      printf((char *)(DAT_0001554c + 0x154b8),DAT_00015548 + 0x154b0,0x49a,DAT_00015544 + 0x154a4);
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



/* ===== FUN_00015550 @ 00015550 size=268 ===== */

ssize_t FUN_00015550(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_40c;
  undefined1 auStack_408 [1020];
  size_t local_c;
  
  local_40c = 0;
  memset(auStack_408,0,0x3fc);
  local_c = FUN_0001c268(param_2,&local_40c,0x400);
  if ((int)local_c < 0) {
    printf((char *)(DAT_00015664 + 0x155d4),DAT_00015660 + 0x155cc,0x4ad,DAT_0001565c + 0x155c0);
    local_c = -1;
  }
  else {
    local_c = send(*(int *)(param_1 + 4),&local_40c,local_c,0);
    if (local_c == -1) {
      uVar1 = FUN_00011f28();
      uVar1 = FUN_00011f44(uVar1);
      printf((char *)(DAT_00015670 + 0x15644),DAT_0001566c + 0x1563c,0x4b3,DAT_00015668 + 0x15630,
             uVar1);
      local_c = -1;
    }
  }
  return local_c;
}



/* ===== FUN_00015674 @ 00015674 size=388 ===== */

ssize_t FUN_00015674(int param_1,int param_2)

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
    iVar4 = FUN_00011f28();
    if ((iVar4 == 0xb) || (iVar4 = FUN_00011f28(), iVar4 == 4)) {
      local_18 = 0;
    }
    else {
      uVar5 = FUN_00011f28();
      uVar5 = FUN_00011f44(uVar5);
      printf((char *)(DAT_00015800 + 0x15744),DAT_000157fc + 0x1573c,0x4c6,DAT_000157f8 + 0x15730,
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
      printf((char *)(DAT_0001580c + 0x157cc),DAT_00015808 + 0x157c4,0x4d0,DAT_00015804 + 0x157b8,
             pcVar6,(uint)uVar1,(uint)uVar3);
      uVar3 = ntohs(sStack_28.sa_data._0_2_);
      *(uint16_t *)(local_14 + 0x1c) = uVar3;
    }
  }
  return local_18;
}



/* ===== FUN_00015810 @ 00015810 size=388 ===== */

ssize_t FUN_00015810(int param_1,int param_2)

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
    iVar4 = FUN_00011f28();
    if ((iVar4 == 0xb) || (iVar4 = FUN_00011f28(), iVar4 == 4)) {
      local_18 = 0;
    }
    else {
      uVar5 = FUN_00011f28();
      uVar5 = FUN_00011f44(uVar5);
      printf((char *)(DAT_0001599c + 0x158e0),DAT_00015998 + 0x158d8,0x4e3,DAT_00015994 + 0x158cc,
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
      printf((char *)(DAT_000159a8 + 0x15968),DAT_000159a4 + 0x15960,0x4ed,DAT_000159a0 + 0x15954,
             pcVar6,(uint)uVar1,(uint)uVar3);
      uVar3 = ntohs(sStack_28.sa_data._0_2_);
      *(uint16_t *)(local_14 + 0x1e) = uVar3;
    }
  }
  return local_18;
}



/* ===== FUN_000159ac @ 000159ac size=740 ===== */

size_t FUN_000159ac(int *param_1,void *param_2,size_t param_3)

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
      iVar1 = FUN_00011f28();
      if ((iVar1 == 0xb) || (iVar1 = FUN_00011f28(), iVar1 == 4)) {
        param_3 = 0;
      }
      else {
        pcVar2 = inet_ntoa((in_addr)param_1[8]);
        uVar3 = FUN_00011f28();
        uVar3 = FUN_00011f44(uVar3);
        printf((char *)(DAT_00015cb0 + 0x15c70),DAT_00015cac + 0x15c68,0x528,DAT_00015ca8 + 0x15c5c,
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
      iVar1 = FUN_00011f28();
      if ((iVar1 == 0xb) || (iVar1 = FUN_00011f28(), iVar1 == 4)) {
        param_3 = 0;
      }
      else {
        pcVar2 = inet_ntoa((in_addr)param_1[8]);
        uVar3 = FUN_00011f28();
        uVar3 = FUN_00011f44(uVar3);
        printf((char *)(DAT_00015c98 + 0x15abc),DAT_00015c94 + 0x15ab4,0x50d,DAT_00015c90 + 0x15aa8,
               pcVar2,uVar3);
        param_3 = 0xffffffff;
      }
    }
    else {
      local_18 = send(local_14,param_2,param_3,0);
      if (local_18 == -1) {
        iVar1 = FUN_00011f28();
        if ((iVar1 == 0xb) || (iVar1 = FUN_00011f28(), iVar1 == 4)) {
          param_3 = 0;
        }
        else {
          pcVar2 = inet_ntoa((in_addr)param_1[8]);
          uVar3 = FUN_00011f28();
          uVar3 = FUN_00011f44(uVar3);
          printf((char *)(DAT_00015ca4 + 0x15b64),DAT_00015ca0 + 0x15b5c,0x516,
                 DAT_00015c9c + 0x15b50,param_3,pcVar2,uVar3);
          param_3 = 0xffffffff;
        }
      }
    }
  }
  return param_3;
}



/* ===== FUN_00015cb4 @ 00015cb4 size=348 ===== */

int FUN_00015cb4(int param_1)

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
    iVar3 = FUN_0001d810(local_1c,*(undefined4 *)(local_20 + 0x24));
    if (iVar3 < 1) {
      return local_14;
    }
    FUN_0001d760(local_1c,*(undefined4 *)(local_20 + 0x24),&local_24,&local_28);
    if (0 < *local_28) {
      puVar4 = (uint32_t *)(local_24 + 8);
      uVar1 = htonl(*(uint32_t *)(local_20 + 0x28));
      *puVar4 = uVar1;
      iVar3 = FUN_000159ac(local_20,local_24,*local_28);
      if (iVar3 != *local_28) {
        return local_14;
      }
      *(int *)(local_20 + 0x2c) = *(int *)(local_20 + 0x2c) + 1;
      *(int *)(local_20 + 0x30) = *(int *)(local_20 + 0x30) + *local_28 + -0xc;
    }
    uVar2 = FUN_0001d8bc(local_1c,*(undefined4 *)(local_20 + 0x24));
    *(undefined4 *)(local_20 + 0x24) = uVar2;
    local_14 = local_14 + 1;
  } while( true );
}



/* ===== FUN_00015e10 @ 00015e10 size=348 ===== */

int FUN_00015e10(int param_1)

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
    iVar3 = FUN_0001d810(local_1c,*(undefined4 *)(local_20 + 0x24));
    if (iVar3 < 1) {
      return local_14;
    }
    FUN_0001d760(local_1c,*(undefined4 *)(local_20 + 0x24),&local_24,&local_28);
    if (0 < *local_28) {
      puVar4 = (uint32_t *)(local_24 + 8);
      uVar1 = htonl(*(uint32_t *)(local_20 + 0x28));
      *puVar4 = uVar1;
      iVar3 = FUN_000159ac(local_20,local_24,*local_28);
      if (iVar3 != *local_28) {
        return local_14;
      }
      *(int *)(local_20 + 0x2c) = *(int *)(local_20 + 0x2c) + 1;
      *(int *)(local_20 + 0x30) = *(int *)(local_20 + 0x30) + *local_28 + -0xc;
    }
    uVar2 = FUN_0001d8bc(local_1c,*(undefined4 *)(local_20 + 0x24));
    *(undefined4 *)(local_20 + 0x24) = uVar2;
    local_14 = local_14 + 1;
  } while( true );
}



/* ===== FUN_00015f6c @ 00015f6c size=2952 ===== */

undefined4 FUN_00015f6c(uint *param_1)

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
           (iVar3 = FUN_0001d810(*(undefined4 *)(local_2c + 0x138),local_30[9]), 0 < iVar3)) {
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
           (iVar3 = FUN_0001d810(*(undefined4 *)(local_2c + 0x13c),local_34[9]), 0 < iVar3)) {
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
      printf((char *)(DAT_00016afc + 0x165a8),DAT_00016af8 + 0x165a0,0x5c7,DAT_00016af4 + 0x16594,
             pcVar2);
      uVar4 = 0xffffffff;
    }
    else if (local_38 == 0) {
      uVar4 = 0;
    }
    else {
      if ((fStack_cc.fds_bits[*local_20 >> 5] >> (*local_20 & 0x1f) & 1U) != 0) {
        FUN_00012a48(local_20);
      }
      local_c = (int *)local_20[3];
LAB_00016ad8:
      piVar1 = local_c;
      if (local_c != (int *)0x0) {
        local_1c = local_c;
        local_3c = local_c[0x108];
        local_40 = (int *)local_c[0x105];
        local_44 = (int *)local_c[0x106];
        local_c = (int *)local_c[0x109];
        if ((fStack_cc.fds_bits[(uint)piVar1[1] >> 5] >> (piVar1[1] & 0x1fU) & 1U) != 0)
        goto LAB_00016684;
        goto LAB_000167cc;
      }
      uVar4 = 1;
    }
  }
  return uVar4;
LAB_00016684:
  do {
    FUN_0001ba64(local_2a4);
    FUN_0001ba64(auStack_1f8);
    local_38 = FUN_0001531c(local_1c,local_2a4);
    if (local_38 == 0) break;
    if (local_38 < 0) {
      FUN_00012b90(local_1c);
      local_1c = (int *)0x0;
      break;
    }
    if (local_2a4[0] == 2) {
      FUN_0001baa0(local_2a4);
    }
    else if (local_2a4[0] == 0) {
      local_38 = FUN_00014f90(local_1c,local_2a4,auStack_1f8);
      if (local_38 < 0) {
        printf((char *)(DAT_00016b14 + 0x1677c),DAT_00016b10 + 0x16774,0x5f8,DAT_00016b0c + 0x16768)
        ;
      }
      else {
        FUN_00015550(local_1c,auStack_1f8);
      }
      FUN_0001baa0(local_2a4);
      FUN_0001baa0(auStack_1f8);
    }
    else {
      printf((char *)(DAT_00016b08 + 0x16728),DAT_00016b04 + 0x16720,0x5f1,DAT_00016b00 + 0x16714);
      FUN_0001baa0(local_2a4);
    }
  } while (local_1c != (int *)0x0);
  if (local_1c != (int *)0x0) {
LAB_000167cc:
    if (*local_1c == 2) {
      if ((local_40 != (int *)0x0) &&
         (iVar3 = FUN_0001d810(*(undefined4 *)(local_3c + 0x138),local_40[9]), 0 < iVar3)) {
        if ((*local_40 == 0) ||
           ((fStack_14c.fds_bits[(uint)local_40[1] >> 5] >> (local_40[1] & 0x1fU) & 1U) == 0)) {
          if ((*local_40 == 0) &&
             ((fStack_14c.fds_bits[(uint)local_40[4] >> 5] >> (local_40[4] & 0x1fU) & 1U) != 0)) {
            FUN_00015cb4(local_1c);
          }
        }
        else {
          FUN_00015cb4(local_1c);
        }
      }
      if ((local_44 != (int *)0x0) &&
         (iVar3 = FUN_0001d810(*(undefined4 *)(local_3c + 0x13c),local_44[9]), 0 < iVar3)) {
        if ((*local_44 == 0) ||
           ((fStack_14c.fds_bits[(uint)local_44[1] >> 5] >> (local_44[1] & 0x1fU) & 1U) == 0)) {
          if ((*local_44 == 0) &&
             ((fStack_14c.fds_bits[(uint)local_44[4] >> 5] >> (local_44[4] & 0x1fU) & 1U) != 0)) {
            FUN_00015e10(local_1c);
          }
        }
        else {
          FUN_00015e10(local_1c);
        }
      }
      if ((local_40 != (int *)0x0) && (*local_40 == 0)) {
        if ((fStack_cc.fds_bits[(uint)local_40[4] >> 5] >> (local_40[4] & 0x1fU) & 1U) != 0) {
          FUN_00015674(local_1c,0);
        }
        if ((fStack_cc.fds_bits[(uint)local_40[5] >> 5] >> (local_40[5] & 0x1fU) & 1U) != 0) {
          FUN_00015810(local_1c,0);
        }
      }
      if ((local_44 != (int *)0x0) && (*local_44 == 0)) {
        if ((fStack_cc.fds_bits[(uint)local_44[4] >> 5] >> (local_44[4] & 0x1fU) & 1U) != 0) {
          FUN_00015674(local_1c,1);
        }
        if ((fStack_cc.fds_bits[(uint)local_44[5] >> 5] >> (local_44[5] & 0x1fU) & 1U) != 0) {
          FUN_00015810(local_1c,1);
        }
      }
    }
  }
  goto LAB_00016ad8;
}



/* ===== FUN_00016b18 @ 00016b18 size=1940 ===== */

int FUN_00016b18(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
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
    local_1c = FUN_0001d954(local_30);
    for (local_18 = 0; local_18 < 600; local_18 = local_18 + 1) {
      iVar3 = FUN_0001d8bc(local_30,local_1c);
      iVar4 = FUN_0001d918(local_30);
      if (iVar3 == iVar4) {
        FUN_0001da38(local_30);
      }
      FUN_0001d760(local_30,local_1c,aiStack_9a0 + local_18,auStack_1c64 + local_18);
      aiStack_1304[local_18] = 0x5b0;
      local_1c = FUN_0001d8bc(local_30,local_1c);
    }
    aiStack_9a0[local_18] = 0;
    aiStack_1304[local_18] = 0;
    for (local_14 = *(int **)(local_2c + 0x154); local_14 != (int *)0x0;
        local_14 = (int *)local_14[0x10b]) {
      local_34 = local_14[0x105];
      if (((*local_14 == 2) && (local_34 != 0)) &&
         ((iVar3 = FUN_0001d810(local_30,*(undefined4 *)(local_34 + 0x24)), iVar3 == 0 &&
          (iVar4 = *(int *)(local_34 + 0x24), iVar3 = FUN_0001d954(local_30), iVar4 != iVar3)))) {
        uVar1 = FUN_0001d918(local_30);
        *(undefined4 *)(local_34 + 0x24) = uVar1;
        pcVar2 = inet_ntoa((in_addr)local_14[2]);
        printf((char *)(DAT_000172b4 + 0x16dc0),DAT_000172b0 + 0x16db8,0x658,DAT_000172ac + 0x16dac,
               pcVar2);
      }
    }
    if (*(int *)(local_2c + 0x40) == 1) {
      if (((*(int *)(local_2c + 0xcc) == 0) || (*(int *)(local_2c + 0xcc) == 0)) &&
         (iVar3 = FUN_0001e5c8(param_2,param_3,local_2c + 0x48), iVar3 < 0)) {
        printf((char *)(DAT_000172c0 + 0x16e70),DAT_000172bc + 0x16e68,0x660,DAT_000172b8 + 0x16e5c)
        ;
      }
    }
    else if ((*(int *)(local_2c + 0x40) == 2) &&
            ((((*(int *)(local_2c + 0x110) == 0 || (*(int *)(local_2c + 0x110) == 0)) ||
              (*(int *)(local_2c + 0x108) == 0)) &&
             (iVar3 = FUN_0001e600(param_2,param_3,local_2c + 0x48), iVar3 < 0)))) {
      printf((char *)(DAT_000172cc + 0x16ef8),DAT_000172c8 + 0x16ef0,0x66a,DAT_000172c4 + 0x16ee4);
    }
    local_24 = 0;
    local_20 = 0;
    while( true ) {
      if (((param_3 <= local_24) || (aiStack_9a0[local_20] == 0)) || (aiStack_1304[local_20] < 1))
      goto LAB_00017198;
      local_38 = 0;
      local_1c68 = 0;
      local_38 = FUN_0001dd80(param_2 + local_24,param_3 - local_24,&local_1c68);
      if (local_38 == 0) break;
      if (*(int *)(local_2c + 0x40) == 1) {
        local_28 = FUN_0001edf8(local_2c + 0x118,local_38,local_1c68,param_6,param_5,param_6,
                                aiStack_9a0 + local_20,aiStack_1304 + local_20);
        if (local_28 < 1) {
          printf((char *)(DAT_000172e4 + 0x17058),DAT_000172e0 + 0x17050,0x685,
                 DAT_000172dc + 0x17044,local_28);
          return -1;
        }
      }
      else if (*(int *)(local_2c + 0x40) == 2) {
        local_28 = FUN_0001f394(local_2c + 0x118,local_38,local_1c68,param_6,param_5,param_6,
                                aiStack_9a0 + local_20,aiStack_1304 + local_20);
        if (local_28 < 1) {
          printf((char *)(DAT_000172f0 + 0x170f4),DAT_000172ec + 0x170ec,0x68c,
                 DAT_000172e8 + 0x170e0,local_28);
          return -1;
        }
      }
      local_20 = local_20 + local_28;
      local_24 = (local_38 - param_2) + local_1c68;
    }
    printf((char *)(DAT_000172d8 + 0x16fa4),DAT_000172d4 + 0x16f9c,0x67c,DAT_000172d0 + 0x16f90);
LAB_00017198:
    for (local_18 = 0; local_18 < local_20; local_18 = local_18 + 1) {
      *(int *)auStack_1c64[local_18] = aiStack_1304[local_18];
      FUN_0001d990(local_30);
    }
    for (local_14 = *(int **)(local_2c + 0x154); local_14 != (int *)0x0;
        local_14 = (int *)local_14[0x10b]) {
      local_3c = local_14[0x105];
      if ((*local_14 == 2) && (local_3c != 0)) {
        FUN_000181a8(local_3c,*(undefined4 *)(local_2c + 0x144),*(undefined4 *)(local_2c + 0x140),
                     *(undefined4 *)(local_2c + 0x144),param_5,param_6,
                     *(undefined4 *)(local_2c + 0x120));
        FUN_00015cb4(local_14);
      }
    }
  }
  return param_3;
}



/* ===== FUN_000172f4 @ 000172f4 size=1968 ===== */

int FUN_000172f4(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 param_5,
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
    local_1c = FUN_0001d954(local_30);
    for (local_18 = 0; local_18 < 600; local_18 = local_18 + 1) {
      iVar3 = FUN_0001d8bc(local_30,local_1c);
      iVar4 = FUN_0001d918(local_30);
      if (iVar3 == iVar4) {
        FUN_0001da38(local_30);
      }
      FUN_0001d760(local_30,local_1c,aiStack_9a0 + local_18,auStack_1c64 + local_18);
      aiStack_1304[local_18] = 0x5b0;
      local_1c = FUN_0001d8bc(local_30,local_1c);
    }
    aiStack_9a0[local_18] = 0;
    aiStack_1304[local_18] = 0;
    for (local_14 = *(int **)(local_2c + 0x154); local_14 != (int *)0x0;
        local_14 = (int *)local_14[0x10b]) {
      local_34 = local_14[0x105];
      if (((*local_14 == 2) && (local_34 != 0)) &&
         ((iVar3 = FUN_0001d810(local_30,*(undefined4 *)(local_34 + 0x24)), iVar3 == 0 &&
          (iVar4 = *(int *)(local_34 + 0x24), iVar3 = FUN_0001d954(local_30), iVar4 != iVar3)))) {
        uVar1 = FUN_0001d918(local_30);
        *(undefined4 *)(local_34 + 0x24) = uVar1;
        pcVar2 = inet_ntoa((in_addr)local_14[2]);
        printf((char *)(DAT_00017aac + 0x175a8),DAT_00017aa8 + 0x175a0,0x6c9,DAT_00017aa4 + 0x17594,
               pcVar2);
      }
    }
    if (*(int *)(local_2c + 0x40) == 1) {
      if (((*(int *)(local_2c + 0xcc) == 0) || (*(int *)(local_2c + 0xcc) == 0)) &&
         (iVar3 = FUN_0001e5c8(param_3,param_4,local_2c + 0x48), iVar3 < 0)) {
        printf((char *)(DAT_00017ab8 + 0x17658),DAT_00017ab4 + 0x17650,0x6d1,DAT_00017ab0 + 0x17644)
        ;
      }
    }
    else if ((*(int *)(local_2c + 0x40) == 2) &&
            ((((*(int *)(local_2c + 0x110) == 0 || (*(int *)(local_2c + 0x110) == 0)) ||
              (*(int *)(local_2c + 0x108) == 0)) &&
             (iVar3 = FUN_0001e600(param_3,param_4,local_2c + 0x48), iVar3 < 0)))) {
      printf((char *)(DAT_00017ac4 + 0x176e0),DAT_00017ac0 + 0x176d8,0x6db,DAT_00017abc + 0x176cc);
    }
    local_24 = 0;
    local_20 = 0;
    while( true ) {
      if (((param_4 <= local_24) || (aiStack_9a0[local_20] == 0)) || (aiStack_1304[local_20] < 1))
      goto LAB_00017980;
      local_38 = 0;
      local_1c68 = 0;
      local_38 = FUN_0001dd80(param_3 + local_24,param_4 - local_24,&local_1c68);
      if (local_38 == 0) break;
      if (*(int *)(local_2c + 0x40) == 1) {
        local_28 = FUN_0001edf8(local_2c + 0x118,local_38,local_1c68,param_6,param_5,param_6,
                                aiStack_9a0 + local_20,aiStack_1304 + local_20);
        if (local_28 < 1) {
          printf((char *)(DAT_00017adc + 0x17840),DAT_00017ad8 + 0x17838,0x6f6,
                 DAT_00017ad4 + 0x1782c,local_28);
          return -1;
        }
      }
      else if (*(int *)(local_2c + 0x40) == 2) {
        local_28 = FUN_0001f394(local_2c + 0x118,local_38,local_1c68,param_6,param_5,param_6,
                                aiStack_9a0 + local_20,aiStack_1304 + local_20);
        if (local_28 < 1) {
          printf((char *)(DAT_00017ae8 + 0x178dc),DAT_00017ae4 + 0x178d4,0x6fd,
                 DAT_00017ae0 + 0x178c8,local_28);
          return -1;
        }
      }
      local_20 = local_20 + local_28;
      local_24 = (local_38 - param_3) + local_1c68;
    }
    printf((char *)(DAT_00017ad0 + 0x1778c),DAT_00017acc + 0x17784,0x6ed,DAT_00017ac8 + 0x17778);
LAB_00017980:
    for (local_18 = 0; local_18 < local_20; local_18 = local_18 + 1) {
      *(int *)auStack_1c64[local_18] = aiStack_1304[local_18];
      FUN_0001d990(local_30);
    }
    for (local_14 = *(int **)(local_2c + 0x154); local_14 != (int *)0x0;
        local_14 = (int *)local_14[0x10b]) {
      local_3c = local_14[0x105];
      if ((*local_14 == 2) && (local_3c != 0)) {
        FUN_000181a8(local_3c,*(undefined4 *)(local_2c + 0x144),*(undefined4 *)(local_2c + 0x140),
                     *(undefined4 *)(local_2c + 0x144),param_5,param_6,
                     *(undefined4 *)(local_2c + 0x120));
        FUN_00015cb4(local_14);
      }
    }
    FUN_00015f6c(param_1);
  }
  return param_4;
}



/* ===== FUN_00017aec @ 00017aec size=1140 ===== */

undefined4
FUN_00017aec(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
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
    local_1c = FUN_0001d954(local_28);
    for (local_18 = 0; local_18 < 0x14; local_18 = local_18 + 1) {
      iVar3 = FUN_0001d8bc(local_28,local_1c);
      iVar4 = FUN_0001d918(local_28);
      if (iVar3 == iVar4) {
        FUN_0001da38(local_28);
      }
      FUN_0001d760(local_28,local_1c,auStack_84 + local_18,auStack_128 + local_18);
      auStack_d8[local_18] = 0x5b0;
      local_1c = FUN_0001d8bc(local_28,local_1c);
    }
    auStack_84[local_18] = 0;
    auStack_d8[local_18] = 0;
    for (local_14 = *(int **)(local_24 + 0x154); local_14 != (int *)0x0;
        local_14 = (int *)local_14[0x10b]) {
      local_2c = local_14[0x106];
      if (((*local_14 == 2) && (local_2c != 0)) &&
         ((iVar3 = FUN_0001d810(local_28,*(undefined4 *)(local_2c + 0x24)), iVar3 == 0 &&
          (iVar4 = *(int *)(local_2c + 0x24), iVar3 = FUN_0001d954(local_28), iVar4 != iVar3)))) {
        uVar1 = FUN_0001d918(local_28);
        *(undefined4 *)(local_2c + 0x24) = uVar1;
        pcVar2 = inet_ntoa((in_addr)local_14[2]);
        printf((char *)(DAT_00017f68 + 0x17d34),DAT_00017f64 + 0x17d2c,0x73c,DAT_00017f60 + 0x17d20,
               pcVar2);
      }
    }
    iVar3 = *(int *)(local_24 + 0x44);
    if (0x4000 < iVar3) {
      if (iVar3 < 0x4003) {
        local_20 = FUN_0001f968(local_24 + 0x128,param_2,param_3,param_6,param_5,param_6,auStack_84,
                                auStack_d8);
        if (local_20 < 1) {
          printf((char *)(DAT_00017f74 + 0x17de4),DAT_00017f70 + 0x17ddc,0x745,
                 DAT_00017f6c + 0x17dd0,local_20);
          return 0xffffffff;
        }
      }
      else if (iVar3 == 0x4003) {
        local_20 = FUN_0001fc80(local_24 + 0x128,param_2,param_3,param_6,param_5,param_6,auStack_84,
                                auStack_d8);
        if (local_20 < 1) {
          printf((char *)(DAT_00017f80 + 0x17e50),DAT_00017f7c + 0x17e48,0x74c,
                 DAT_00017f78 + 0x17e3c,local_20);
          return 0xffffffff;
        }
      }
    }
    for (local_18 = 0; local_18 < local_20; local_18 = local_18 + 1) {
      *(undefined4 *)auStack_128[local_18] = auStack_d8[local_18];
      FUN_0001d990(local_28);
    }
    for (local_14 = *(int **)(local_24 + 0x154); local_14 != (int *)0x0;
        local_14 = (int *)local_14[0x10b]) {
      local_30 = local_14[0x106];
      if ((*local_14 == 2) && (local_30 != 0)) {
        FUN_000181a8(local_30,*(undefined4 *)(local_24 + 0x14c),*(undefined4 *)(local_24 + 0x148),
                     *(undefined4 *)(local_24 + 0x14c),param_5,param_6,
                     *(undefined4 *)(local_24 + 0x130));
        FUN_00015e10(local_14);
      }
    }
  }
  return param_3;
}



/* ===== FUN_00017f84 @ 00017f84 size=148 ===== */

longlong FUN_00017f84(void)

{
  longlong lVar1;
  timespec local_18;
  
  clock_gettime(1,&local_18);
  lVar1 = FUN_0001fdcc(local_18.tv_nsec,local_18.tv_nsec >> 0x1f,1000,0);
  return lVar1 + CONCAT44((local_18.tv_sec >> 0x1f) * 1000000 +
                          (int)((ulonglong)(uint)local_18.tv_sec * 1000000 >> 0x20),
                          (int)((ulonglong)(uint)local_18.tv_sec * 1000000));
}



/* ===== FUN_00018018 @ 00018018 size=120 ===== */

undefined8 FUN_00018018(void)

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



/* ===== FUN_00018090 @ 00018090 size=48 ===== */

longlong FUN_00018090(void)

{
  longlong lVar1;
  
  lVar1 = FUN_00018018();
  return lVar1 + CONCAT44(DAT_000180c4,DAT_000180c0);
}



/* ===== FUN_000180c8 @ 000180c8 size=112 ===== */

undefined4
FUN_000180c8(int param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,int param_6)

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



/* ===== FUN_000181a8 @ 000181a8 size=1168 ===== */

size_t FUN_000181a8(int *param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,
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
    uVar6 = (int)((ulonglong)*(undefined8 *)(param_1 + 0xe) >> 0x20) + DAT_00018514 +
            (uint)CARRY4(uVar8,DAT_00018510);
    bVar7 = uVar6 <= param_6;
    if (param_6 == uVar6) {
      bVar7 = uVar8 + DAT_00018510 <= param_5;
    }
    if (!bVar7) {
      return 0;
    }
  }
  uStack_3c = uStack_48;
  local_38 = local_44;
  local_14 = FUN_0001fdcc(param_3 + param_5,param_4 + param_6 + (uint)CARRY4(param_3,param_5),
                          1000000,0);
  FUN_0001fdcc(param_3 + param_5,param_4 + param_6 + (uint)CARRY4(param_3,param_5),1000000,0);
  local_18 = FUN_0001fdcc(0,extraout_r2,1000000,0);
  local_1c = FUN_0001fdcc((int)((ulonglong)param_7 * (ulonglong)param_5),
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
      iVar2 = FUN_00011f28();
      if ((iVar2 != 0xb) && (iVar2 = FUN_00011f28(), iVar2 != 4)) {
        pcVar3 = inet_ntoa((in_addr)param_1[8]);
        uVar4 = FUN_00011f28();
        uVar4 = FUN_00011f44(uVar4);
        printf((char *)(DAT_0001852c + 0x1862c),DAT_00018528 + 0x18624,0x7f0,DAT_00018524 + 0x18618,
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
      iVar2 = FUN_00011f28();
      if ((iVar2 != 0xb) && (iVar2 = FUN_00011f28(), iVar2 != 4)) {
        pcVar3 = inet_ntoa((in_addr)param_1[8]);
        uVar4 = FUN_00011f28();
        uVar4 = FUN_00011f44(uVar4);
        printf((char *)(DAT_00018520 + 0x18500),DAT_0001851c + 0x184f8,0x7de,DAT_00018518 + 0x184ec,
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



/* ===== FUN_00018658 @ 00018658 size=68 ===== */

void * FUN_00018658(size_t param_1)

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



/* ===== FUN_0001869c @ 0001869c size=48 ===== */

void FUN_0001869c(void *param_1)

{
  if (param_1 != (void *)0x0) {
    free(param_1);
  }
  return;
}



/* ===== FUN_000186cc @ 000186cc size=104 ===== */

void * FUN_000186cc(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = calloc(1,param_2);
  if ((__dest != (void *)0x0) && (param_1 != (void *)0x0)) {
    memcpy(__dest,param_1,param_2);
  }
  return __dest;
}



/* ===== FUN_00018734 @ 00018734 size=120 ===== */

void * FUN_00018734(char *param_1)

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



/* ===== FUN_000187ac @ 000187ac size=172 ===== */

undefined4 FUN_000187ac(int param_1,int param_2,int param_3)

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



/* ===== FUN_00018858 @ 00018858 size=204 ===== */

undefined4 FUN_00018858(int param_1,int param_2,char *param_3)

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



/* ===== FUN_00018924 @ 00018924 size=928 ===== */

int FUN_00018924(byte *param_1,int *param_2)

{
  byte *__src;
  int iVar1;
  int iVar2;
  size_t local_1c;
  byte *local_18;
  byte *local_14;
  
  iVar2 = DAT_00018cc4 + 0x18944;
  local_14 = param_1;
  iVar1 = FUN_00018858(DAT_00018cc8 + 0x1895c,3,param_1);
  *param_2 = iVar1;
  if (*param_2 == 2) {
    printf((char *)(DAT_00018cd4 + 0x189a8),DAT_00018cd0 + 0x189a0,0xaa,DAT_00018ccc + 0x18994,
           param_1);
    iVar1 = -1;
  }
  else {
    *(undefined2 *)(param_2 + 1) = 0;
    *(undefined1 *)((int)param_2 + 6) = 0;
    *(undefined1 *)((int)param_2 + 0x26) = 0;
    for (; ((*(ushort *)(**(int **)(iVar2 + DAT_00018cd8) + (uint)*local_14 * 2) & 2) != 0 ||
           (*local_14 == 0x3a)); local_14 = local_14 + 1) {
    }
    if ((*local_14 == 0x2f) && (local_14[1] == 0x2f)) {
      local_14 = local_14 + 2;
      for (local_18 = local_14;
          (((*(ushort *)(**(int **)(iVar2 + DAT_00018cd8) + (uint)*local_18 * 2) & 0x80) != 0 &&
           (*local_18 != 0x3a)) && (*local_18 != 0x2f)); local_18 = local_18 + 1) {
      }
      if (*local_18 == 0x3a) {
        iVar1 = sscanf((char *)(local_18 + 1),(char *)(DAT_00018ce8 + 0x18b0c),&local_1c);
        if (iVar1 != 1) {
          printf((char *)(DAT_00018cf4 + 0x18b44),DAT_00018cf0 + 0x18b3c,0xbc,DAT_00018cec + 0x18b30
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
             (*(ushort *)(**(int **)(iVar2 + DAT_00018cd8) + (uint)*local_18 * 2) & 0x80) != 0 &&
             (*local_18 != 0x2f)); local_18 = local_18 + 1) {
      }
      if (*local_18 == 0x2f) {
        local_14 = local_18;
        while ((*(ushort *)(**(int **)(iVar2 + DAT_00018cd8) + (uint)*local_18 * 2) & 0x80) != 0) {
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
      printf((char *)(DAT_00018ce4 + 0x18a6c),DAT_00018ce0 + 0x18a64,0xb3,DAT_00018cdc + 0x18a58,
             param_1);
      iVar1 = -1;
    }
  }
  return iVar1;
}



/* ===== FUN_00018cf8 @ 00018cf8 size=256 ===== */

size_t FUN_00018cf8(undefined4 *param_1,char *param_2,size_t param_3)

{
  undefined4 uVar1;
  size_t sVar2;
  
  if (*(short *)(param_1 + 1) == 0) {
    uVar1 = FUN_000187ac(DAT_00018e00 + 0x18da8,3,*param_1);
    snprintf(param_2,param_3,(char *)(DAT_00018e04 + 0x18dd8),uVar1,(int)param_1 + 6,
             (int)param_1 + 0x26);
  }
  else {
    uVar1 = FUN_000187ac(DAT_00018df8 + 0x18d40,3,*param_1);
    snprintf(param_2,param_3,(char *)(DAT_00018dfc + 0x18d7c),uVar1,(int)param_1 + 6,
             (uint)*(ushort *)(param_1 + 1),(int)param_1 + 0x26);
  }
  sVar2 = strlen(param_2);
  return sVar2;
}



/* ===== FUN_00018e08 @ 00018e08 size=788 ===== */

undefined4 FUN_00018e08(undefined4 *param_1,byte *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int local_18;
  byte *local_14;
  
  iVar2 = DAT_0001911c + 0x18e28;
  local_14 = param_2;
  local_18 = FUN_00018858(DAT_00019120 + 0x18e40,0xc,param_2);
  if (local_18 == 0xb) {
    local_18 = FUN_00018858(DAT_00019138 + 0x18fa8,2,local_14);
    if (local_18 == 1) {
      if (*local_14 == 0x24) {
        *param_1 = 2;
        *(byte *)(param_1 + 1) = local_14[1];
        *(undefined2 *)((int)param_1 + 6) = *(undefined2 *)(local_14 + 2);
        *(undefined1 *)(param_1 + 2) = 0;
        uVar1 = 0;
      }
      else {
        printf((char *)(DAT_00019154 + 0x190cc),DAT_00019150 + 0x190c4,0x10c,DAT_0001914c + 0x190b8,
               param_2);
        uVar1 = 0xffffffff;
      }
    }
    else {
      *param_1 = 1;
      param_1[1] = local_18;
      while ((*(ushort *)(**(int **)(iVar2 + DAT_00019124) + (uint)*local_14 * 2) & 0x80) != 0) {
        local_14 = local_14 + 1;
      }
      local_14 = local_14 + 1;
      iVar2 = sscanf((char *)local_14,(char *)(DAT_0001913c + 0x19038),&local_18);
      if (iVar2 == 1) {
        param_1[2] = local_18;
        uVar1 = 0;
      }
      else {
        printf((char *)(DAT_00019148 + 0x19074),DAT_00019144 + 0x1906c,0x104,DAT_00019140 + 0x19060,
               param_2);
        uVar1 = 0xffffffff;
      }
    }
  }
  else {
    *param_1 = 0;
    param_1[1] = local_18;
    while ((*(ushort *)(**(int **)(iVar2 + DAT_00019124) + (uint)*local_14 * 2) & 0x80) != 0) {
      local_14 = local_14 + 1;
    }
    local_14 = local_14 + 1;
    local_18 = FUN_00018924(local_14,param_1 + 2);
    if (local_18 < 1) {
      uVar1 = 0xffffffff;
    }
    else {
      while ((*(ushort *)(**(int **)(iVar2 + DAT_00019124) + (uint)*local_14 * 2) & 0x80) != 0) {
        local_14 = local_14 + 1;
      }
      local_14 = local_14 + 1;
      local_18 = FUN_00018858(DAT_00019128 + 0x18f44,2,local_14);
      if (local_18 == 1) {
        printf((char *)(DAT_00019134 + 0x18f84),DAT_00019130 + 0x18f7c,0xf7,DAT_0001912c + 0x18f70,
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



/* ===== FUN_00019158 @ 00019158 size=536 ===== */

char * FUN_00019158(int *param_1,char *param_2,size_t param_3)

{
  undefined4 uVar1;
  size_t sVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  
  if (*param_1 == 0) {
    uVar1 = FUN_000187ac(DAT_00019370 + 0x191a8,0xc,param_1[1]);
    snprintf(param_2,param_3,(char *)(DAT_00019374 + 0x191bc),uVar1);
    sVar2 = strlen(param_2);
    pcVar5 = param_2 + sVar2;
    iVar6 = param_3 - sVar2;
    if (iVar6 < 2) {
      pcVar5 = pcVar5 + -(int)param_2;
    }
    else {
      iVar3 = FUN_00018cf8(param_1 + 2,pcVar5,iVar6);
      pcVar5 = pcVar5 + iVar3;
      if (iVar6 - iVar3 < 2) {
        pcVar5 = pcVar5 + -(int)param_2;
      }
      else {
        uVar1 = FUN_000187ac(DAT_00019378 + 0x19288,2,param_1[0x1c]);
        snprintf(pcVar5,iVar6 - iVar3,(char *)(DAT_0001937c + 0x1929c),uVar1);
        sVar2 = strlen(pcVar5);
        pcVar5 = pcVar5 + (sVar2 - (int)param_2);
      }
    }
  }
  else if (*param_1 == 1) {
    uVar1 = FUN_000187ac(DAT_00019380 + 0x192fc,2,param_1[1]);
    iVar6 = param_1[2];
    uVar4 = FUN_000187ac(DAT_00019384 + 0x19328,0x2b,param_1[2]);
    snprintf(param_2,param_3,(char *)(DAT_00019388 + 0x19348),uVar1,iVar6,uVar4);
    pcVar5 = (char *)strlen(param_2);
  }
  else {
    pcVar5 = (char *)0x0;
  }
  return pcVar5;
}



/* ===== FUN_0001938c @ 0001938c size=952 ===== */

undefined4 FUN_0001938c(int param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_14;
  char *local_10;
  int local_c;
  
  local_c = param_1 + 4;
  if (*(int *)(param_1 + 0x80) != 0) {
    FUN_0001869c(*(undefined4 *)(param_1 + 0x80));
    *(undefined4 *)(local_c + 0x7c) = 0;
  }
  uVar1 = FUN_00018658(0x14);
  *(undefined4 *)(local_c + 0x7c) = uVar1;
  if (*(int *)(local_c + 0x7c) == 0) {
    printf((char *)(DAT_00019750 + 0x19428),DAT_0001974c + 0x19420,0x153,DAT_00019748 + 0x19414,
           DAT_00019744 + 0x19408);
    uVar1 = 0xffffffff;
  }
  else {
    local_10 = strstr(param_2,(char *)(DAT_00019754 + 0x1943c));
    if (local_10 == (char *)0x0) {
      printf((char *)(DAT_00019760 + 0x1947c),DAT_0001975c + 0x19474,0x159,DAT_00019758 + 0x19468,
             param_2);
      FUN_0001869c(*(undefined4 *)(local_c + 0x7c));
      *(undefined4 *)(local_c + 0x7c) = 0;
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = FUN_00018858(DAT_00019764 + 0x194b4,3,local_10);
      **(undefined4 **)(local_c + 0x7c) = uVar1;
      local_10 = strstr(param_2,(char *)(DAT_00019768 + 0x194d4));
      if ((local_10 != (char *)0x0) &&
         (iVar2 = sscanf(local_10,(char *)(DAT_0001976c + 0x19500),&local_14), iVar2 == 1)) {
        *(uint *)(*(int *)(local_c + 0x7c) + 4) = *(uint *)(*(int *)(local_c + 0x7c) + 4) | 1;
        *(undefined4 *)(*(int *)(local_c + 0x7c) + 8) = local_14;
      }
      local_10 = strstr(param_2,(char *)(DAT_00019770 + 0x1954c));
      if (local_10 != (char *)0x0) {
        *(uint *)(*(int *)(local_c + 0x7c) + 4) = *(uint *)(*(int *)(local_c + 0x7c) + 4) | 2;
      }
      local_10 = strstr(param_2,(char *)(DAT_00019774 + 0x1958c));
      if (local_10 != (char *)0x0) {
        *(uint *)(*(int *)(local_c + 0x7c) + 4) = *(uint *)(*(int *)(local_c + 0x7c) + 4) | 4;
      }
      local_10 = strstr(param_2,(char *)(DAT_00019778 + 0x195cc));
      if ((local_10 != (char *)0x0) &&
         (iVar2 = sscanf(local_10,(char *)(DAT_0001977c + 0x195f8),&local_14), iVar2 == 1)) {
        *(uint *)(*(int *)(local_c + 0x7c) + 4) = *(uint *)(*(int *)(local_c + 0x7c) + 4) | 8;
        *(short *)(*(int *)(local_c + 0x7c) + 0xc) = (short)local_14;
      }
      local_10 = strstr(param_2,(char *)(DAT_00019780 + 0x19648));
      if ((local_10 != (char *)0x0) &&
         (iVar2 = sscanf(local_10,(char *)(DAT_00019784 + 0x19674),&local_14), iVar2 == 1)) {
        *(uint *)(*(int *)(local_c + 0x7c) + 4) = *(uint *)(*(int *)(local_c + 0x7c) + 4) | 0x10;
        *(short *)(*(int *)(local_c + 0x7c) + 0xe) = (short)local_14;
      }
      local_10 = strstr(param_2,(char *)(DAT_00019788 + 0x196c4));
      if ((local_10 != (char *)0x0) &&
         (iVar2 = sscanf(local_10,(char *)(DAT_0001978c + 0x196f0),&local_14), iVar2 == 1)) {
        *(uint *)(*(int *)(local_c + 0x7c) + 4) = *(uint *)(*(int *)(local_c + 0x7c) + 4) | 0x20;
        *(undefined1 *)(*(int *)(local_c + 0x7c) + 0x10) = (undefined1)local_14;
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ===== FUN_00019790 @ 00019790 size=1192 ===== */

char * FUN_00019790(int param_1,char *param_2,size_t param_3)

{
  undefined4 uVar1;
  size_t sVar2;
  size_t local_2c;
  char *local_14;
  
  if (*(int *)(param_1 + 0x80) == 0) {
    local_14 = (char *)0x0;
  }
  else {
    uVar1 = FUN_000187ac(DAT_00019c38 + 0x197f0,3,**(undefined4 **)(param_1 + 0x80));
    snprintf(param_2,param_3,(char *)(DAT_00019c3c + 0x19804),uVar1);
    local_2c = strlen(param_2);
    local_14 = param_2 + local_2c;
    local_2c = param_3 - local_2c;
    if ((int)local_2c < 2) {
      local_14 = local_14 + -(int)param_2;
    }
    else {
      if ((*(uint *)(*(int *)(param_1 + 0x80) + 4) & 1) != 0) {
        snprintf(local_14,local_2c,(char *)(DAT_00019c40 + 0x1988c),
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
          snprintf(local_14,local_2c,(char *)(DAT_00019c48 + 0x19980));
          sVar2 = strlen(local_14);
          local_14 = local_14 + sVar2;
          local_2c = local_2c - sVar2;
          if ((int)local_2c < 2) {
            return local_14 + -(int)param_2;
          }
        }
      }
      else {
        snprintf(local_14,local_2c,(char *)(DAT_00019c44 + 0x19904));
        sVar2 = strlen(local_14);
        local_14 = local_14 + sVar2;
        local_2c = local_2c - sVar2;
        if ((int)local_2c < 2) {
          return local_14 + -(int)param_2;
        }
      }
      if ((*(uint *)(*(int *)(param_1 + 0x80) + 4) & 8) != 0) {
        snprintf(local_14,local_2c,(char *)(DAT_00019c4c + 0x19a24),
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
        snprintf(local_14,local_2c,(char *)(DAT_00019c50 + 0x19ac4),
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
        snprintf(local_14,local_2c,(char *)(DAT_00019c54 + 0x19b64),
                 (uint)*(byte *)(*(int *)(param_1 + 0x80) + 0x10),
                 *(byte *)(*(int *)(param_1 + 0x80) + 0x10) + 1);
        sVar2 = strlen(local_14);
        local_14 = local_14 + sVar2;
        local_2c = local_2c - sVar2;
        if ((int)local_2c < 2) {
          return local_14 + -(int)param_2;
        }
      }
      snprintf(local_14,local_2c,(char *)(DAT_00019c58 + 0x19bc4));
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



/* ===== FUN_00019c84 @ 00019c84 size=44 ===== */

undefined4 FUN_00019c84(void)

{
  return 0;
}



/* ===== FUN_00019cd8 @ 00019cd8 size=44 ===== */

undefined4 FUN_00019cd8(void)

{
  return 0;
}



/* ===== FUN_00019d2c @ 00019d2c size=44 ===== */

undefined4 FUN_00019d2c(void)

{
  return 0;
}



/* ===== FUN_00019d58 @ 00019d58 size=312 ===== */

undefined4 FUN_00019d58(int param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x74) != 0) {
    FUN_0001869c(*(undefined4 *)(param_1 + 0x74));
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  uVar1 = FUN_00018658(4);
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  if (*(int *)(param_1 + 0x74) == 0) {
    printf((char *)(DAT_00019e9c + 0x19df4),DAT_00019e98 + 0x19dec,0x201,DAT_00019e94 + 0x19de0,
           DAT_00019e90 + 0x19dd4);
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = sscanf(param_2,(char *)(DAT_00019ea0 + 0x19e14),*(undefined4 *)(param_1 + 0x74));
    if (iVar2 == 1) {
      uVar1 = 0;
    }
    else {
      FUN_0001869c(*(undefined4 *)(param_1 + 0x74));
      *(undefined4 *)(param_1 + 0x74) = 0;
      printf((char *)(DAT_00019eb0 + 0x19e78),DAT_00019eac + 0x19e70,0x201,DAT_00019ea8 + 0x19e64,
             DAT_00019ea4 + 0x19e58,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_00019eb4 @ 00019eb4 size=104 ===== */

size_t FUN_00019eb4(int param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  
  if (*(int *)(param_1 + 0x74) == 0) {
    sVar1 = 0;
  }
  else {
    snprintf(param_2,param_3,(char *)(DAT_00019f1c + 0x19ef8),**(undefined4 **)(param_1 + 0x74));
    sVar1 = strlen(param_2);
  }
  return sVar1;
}



/* ===== FUN_00019f20 @ 00019f20 size=312 ===== */

undefined4 FUN_00019f20(int param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x7c) != 0) {
    FUN_0001869c(*(undefined4 *)(param_1 + 0x7c));
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  uVar1 = FUN_00018658(4);
  *(undefined4 *)(param_1 + 0x7c) = uVar1;
  if (*(int *)(param_1 + 0x7c) == 0) {
    printf((char *)(DAT_0001a064 + 0x19fbc),DAT_0001a060 + 0x19fb4,0x202,DAT_0001a05c + 0x19fa8,
           DAT_0001a058 + 0x19f9c);
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = sscanf(param_2,(char *)(DAT_0001a068 + 0x19fdc),*(undefined4 *)(param_1 + 0x7c));
    if (iVar2 == 1) {
      uVar1 = 0;
    }
    else {
      FUN_0001869c(*(undefined4 *)(param_1 + 0x7c));
      *(undefined4 *)(param_1 + 0x7c) = 0;
      printf((char *)(DAT_0001a078 + 0x1a040),DAT_0001a074 + 0x1a038,0x202,DAT_0001a070 + 0x1a02c,
             DAT_0001a06c + 0x1a020,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_0001a07c @ 0001a07c size=104 ===== */

size_t FUN_0001a07c(int param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  
  if (*(int *)(param_1 + 0x7c) == 0) {
    sVar1 = 0;
  }
  else {
    snprintf(param_2,param_3,(char *)(DAT_0001a0e4 + 0x1a0c0),**(undefined4 **)(param_1 + 0x7c));
    sVar1 = strlen(param_2);
  }
  return sVar1;
}



/* ===== FUN_0001a0e8 @ 0001a0e8 size=312 ===== */

undefined4 FUN_0001a0e8(int param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xa0) != 0) {
    FUN_0001869c(*(undefined4 *)(param_1 + 0xa0));
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  uVar1 = FUN_00018658(4);
  *(undefined4 *)(param_1 + 0xa0) = uVar1;
  if (*(int *)(param_1 + 0xa0) == 0) {
    printf((char *)(DAT_0001a22c + 0x1a184),DAT_0001a228 + 0x1a17c,0x203,DAT_0001a224 + 0x1a170,
           DAT_0001a220 + 0x1a164);
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = sscanf(param_2,(char *)(DAT_0001a230 + 0x1a1a4),*(undefined4 *)(param_1 + 0xa0));
    if (iVar2 == 1) {
      uVar1 = 0;
    }
    else {
      FUN_0001869c(*(undefined4 *)(param_1 + 0xa0));
      *(undefined4 *)(param_1 + 0xa0) = 0;
      printf((char *)(DAT_0001a240 + 0x1a208),DAT_0001a23c + 0x1a200,0x203,DAT_0001a238 + 0x1a1f4,
             DAT_0001a234 + 0x1a1e8,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_0001a244 @ 0001a244 size=104 ===== */

size_t FUN_0001a244(int param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  
  if (*(int *)(param_1 + 0xa0) == 0) {
    sVar1 = 0;
  }
  else {
    snprintf(param_2,param_3,(char *)(DAT_0001a2ac + 0x1a288),**(undefined4 **)(param_1 + 0xa0));
    sVar1 = strlen(param_2);
  }
  return sVar1;
}



/* ===== FUN_0001a2b0 @ 0001a2b0 size=548 ===== */

undefined4 FUN_0001a2b0(int param_1,byte *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint local_18;
  byte *local_14;
  
  iVar2 = DAT_0001a4d4 + 0x1a2d0;
  local_18 = 0;
  if (*(int *)(param_1 + 0x9c) != 0) {
    FUN_0001869c(*(undefined4 *)(param_1 + 0x9c));
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  uVar1 = FUN_00018658(0x40);
  *(undefined4 *)(param_1 + 0x9c) = uVar1;
  local_14 = param_2;
  if (*(int *)(param_1 + 0x9c) == 0) {
    printf((char *)(DAT_0001a4e4 + 0x1a364),DAT_0001a4e0 + 0x1a35c,0x22d,DAT_0001a4dc + 0x1a350,
           DAT_0001a4d8 + 0x1a344);
    uVar1 = 0xffffffff;
  }
  else {
    for (; ((*(ushort *)(**(int **)(iVar2 + DAT_0001a4e8) + (uint)*local_14 * 2) & 0x80) != 0 &&
           (*local_14 != 0x3a)); local_14 = local_14 + 1) {
    }
    if (*local_14 == 0x3a) {
      do {
        local_14 = local_14 + 1;
      } while (*local_14 == 0x20);
      while (((*(ushort *)(**(int **)(iVar2 + DAT_0001a4e8) + (uint)*local_14 * 2) & 0x40) != 0 &&
             (local_18 < 0x3f))) {
        *(byte *)(*(int *)(param_1 + 0x9c) + local_18) = *local_14;
        local_18 = local_18 + 1;
        local_14 = local_14 + 1;
      }
      *(undefined1 *)(*(int *)(param_1 + 0x9c) + local_18) = 0;
      uVar1 = 0;
    }
    else {
      FUN_0001869c(*(undefined4 *)(param_1 + 0x9c));
      *(undefined4 *)(param_1 + 0x9c) = 0;
      printf((char *)(DAT_0001a4f8 + 0x1a414),DAT_0001a4f4 + 0x1a40c,0x22d,DAT_0001a4f0 + 0x1a400,
             DAT_0001a4ec + 0x1a3f4,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_0001a4fc @ 0001a4fc size=100 ===== */

size_t FUN_0001a4fc(int param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  
  if (*(int *)(param_1 + 0x9c) == 0) {
    sVar1 = 0;
  }
  else {
    snprintf(param_2,param_3,(char *)(DAT_0001a560 + 0x1a53c),*(undefined4 *)(param_1 + 0x9c));
    sVar1 = strlen(param_2);
  }
  return sVar1;
}



/* ===== FUN_0001a564 @ 0001a564 size=548 ===== */

undefined4 FUN_0001a564(int param_1,byte *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint local_18;
  byte *local_14;
  
  iVar2 = DAT_0001a788 + 0x1a584;
  local_18 = 0;
  if (*(int *)(param_1 + 0x90) != 0) {
    FUN_0001869c(*(undefined4 *)(param_1 + 0x90));
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  uVar1 = FUN_00018658(0x40);
  *(undefined4 *)(param_1 + 0x90) = uVar1;
  local_14 = param_2;
  if (*(int *)(param_1 + 0x90) == 0) {
    printf((char *)(DAT_0001a798 + 0x1a618),DAT_0001a794 + 0x1a610,0x22e,DAT_0001a790 + 0x1a604,
           DAT_0001a78c + 0x1a5f8);
    uVar1 = 0xffffffff;
  }
  else {
    for (; ((*(ushort *)(**(int **)(iVar2 + DAT_0001a79c) + (uint)*local_14 * 2) & 0x80) != 0 &&
           (*local_14 != 0x3a)); local_14 = local_14 + 1) {
    }
    if (*local_14 == 0x3a) {
      do {
        local_14 = local_14 + 1;
      } while (*local_14 == 0x20);
      while (((*(ushort *)(**(int **)(iVar2 + DAT_0001a79c) + (uint)*local_14 * 2) & 0x40) != 0 &&
             (local_18 < 0x3f))) {
        *(byte *)(*(int *)(param_1 + 0x90) + local_18) = *local_14;
        local_18 = local_18 + 1;
        local_14 = local_14 + 1;
      }
      *(undefined1 *)(*(int *)(param_1 + 0x90) + local_18) = 0;
      uVar1 = 0;
    }
    else {
      FUN_0001869c(*(undefined4 *)(param_1 + 0x90));
      *(undefined4 *)(param_1 + 0x90) = 0;
      printf((char *)(DAT_0001a7ac + 0x1a6c8),DAT_0001a7a8 + 0x1a6c0,0x22e,DAT_0001a7a4 + 0x1a6b4,
             DAT_0001a7a0 + 0x1a6a8,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_0001a7b0 @ 0001a7b0 size=100 ===== */

size_t FUN_0001a7b0(int param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  
  if (*(int *)(param_1 + 0x90) == 0) {
    sVar1 = 0;
  }
  else {
    snprintf(param_2,param_3,(char *)(DAT_0001a814 + 0x1a7f0),*(undefined4 *)(param_1 + 0x90));
    sVar1 = strlen(param_2);
  }
  return sVar1;
}



/* ===== FUN_0001a818 @ 0001a818 size=548 ===== */

undefined4 FUN_0001a818(int param_1,byte *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint local_18;
  byte *local_14;
  
  iVar2 = DAT_0001aa3c + 0x1a838;
  local_18 = 0;
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_0001869c(*(undefined4 *)(param_1 + 0x78));
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  uVar1 = FUN_00018658(0x20);
  *(undefined4 *)(param_1 + 0x78) = uVar1;
  local_14 = param_2;
  if (*(int *)(param_1 + 0x78) == 0) {
    printf((char *)(DAT_0001aa4c + 0x1a8cc),DAT_0001aa48 + 0x1a8c4,0x22f,DAT_0001aa44 + 0x1a8b8,
           DAT_0001aa40 + 0x1a8ac);
    uVar1 = 0xffffffff;
  }
  else {
    for (; ((*(ushort *)(**(int **)(iVar2 + DAT_0001aa50) + (uint)*local_14 * 2) & 0x80) != 0 &&
           (*local_14 != 0x3a)); local_14 = local_14 + 1) {
    }
    if (*local_14 == 0x3a) {
      do {
        local_14 = local_14 + 1;
      } while (*local_14 == 0x20);
      while (((*(ushort *)(**(int **)(iVar2 + DAT_0001aa50) + (uint)*local_14 * 2) & 0x40) != 0 &&
             (local_18 < 0x1f))) {
        *(byte *)(*(int *)(param_1 + 0x78) + local_18) = *local_14;
        local_18 = local_18 + 1;
        local_14 = local_14 + 1;
      }
      *(undefined1 *)(*(int *)(param_1 + 0x78) + local_18) = 0;
      uVar1 = 0;
    }
    else {
      FUN_0001869c(*(undefined4 *)(param_1 + 0x78));
      *(undefined4 *)(param_1 + 0x78) = 0;
      printf((char *)(DAT_0001aa60 + 0x1a97c),DAT_0001aa5c + 0x1a974,0x22f,DAT_0001aa58 + 0x1a968,
             DAT_0001aa54 + 0x1a95c,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_0001aa64 @ 0001aa64 size=100 ===== */

size_t FUN_0001aa64(int param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  
  if (*(int *)(param_1 + 0x78) == 0) {
    sVar1 = 0;
  }
  else {
    snprintf(param_2,param_3,(char *)(DAT_0001aac8 + 0x1aaa4),*(undefined4 *)(param_1 + 0x78));
    sVar1 = strlen(param_2);
  }
  return sVar1;
}



/* ===== FUN_0001aacc @ 0001aacc size=648 ===== */

undefined4 FUN_0001aacc(int param_1,byte *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  int local_18;
  byte *local_14;
  
  iVar3 = DAT_0001ad54 + 0x1aaec;
  if (*(int *)(param_1 + 0xa4) != 0) {
    FUN_0001869c(*(undefined4 *)(param_1 + 0xa4));
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  uVar1 = FUN_00018658(4);
  *(undefined4 *)(param_1 + 0xa4) = uVar1;
  local_14 = param_2;
  if (*(int *)(param_1 + 0xa4) == 0) {
    printf((char *)(DAT_0001ad64 + 0x1ab88),DAT_0001ad60 + 0x1ab80,0x264,DAT_0001ad5c + 0x1ab74,
           DAT_0001ad58 + 0x1ab68);
  }
  else {
    for (; ((*(ushort *)(**(int **)(iVar3 + DAT_0001ad68) + (uint)*local_14 * 2) & 0x80) != 0 &&
           (*local_14 != 0x3a)); local_14 = local_14 + 1) {
    }
    if (*local_14 == 0x3a) {
      do {
        local_14 = local_14 + 1;
      } while (*local_14 == 0x20);
      for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
        if ((*(int *)(DAT_0001ad7c + local_18 * 0xc + 0x1ac88) != 0) &&
           (pcVar2 = strstr((char *)local_14,*(char **)(DAT_0001ad80 + local_18 * 0xc + 0x1acb4)),
           pcVar2 != (char *)0x0)) {
          **(undefined4 **)(param_1 + 0xa4) =
               *(undefined4 *)(DAT_0001ad84 + 0x1acf0 + local_18 * 0xc);
          return 0;
        }
      }
      FUN_0001869c(*(undefined4 *)(param_1 + 0xa4));
      *(undefined4 *)(param_1 + 0xa4) = 0;
    }
    else {
      FUN_0001869c(*(undefined4 *)(param_1 + 0xa4));
      *(undefined4 *)(param_1 + 0xa4) = 0;
      printf((char *)(DAT_0001ad78 + 0x1ac38),DAT_0001ad74 + 0x1ac30,0x264,DAT_0001ad70 + 0x1ac24,
             DAT_0001ad6c + 0x1ac18,param_2);
    }
  }
  return 0xffffffff;
}



/* ===== FUN_0001ad88 @ 0001ad88 size=232 ===== */

size_t FUN_0001ad88(int param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  int local_c;
  
  if (*(int *)(param_1 + 0xa4) != 0) {
    for (local_c = 0; local_c < 4; local_c = local_c + 1) {
      if (**(int **)(param_1 + 0xa4) == *(int *)(DAT_0001ae70 + 0x1addc + local_c * 0xc)) {
        snprintf(param_2,param_3,(char *)(DAT_0001ae78 + 0x1ae24),
                 *(undefined4 *)(DAT_0001ae74 + local_c * 0xc + 0x1ae0c));
        sVar1 = strlen(param_2);
        return sVar1;
      }
    }
  }
  return 0;
}



/* ===== FUN_0001ae7c @ 0001ae7c size=636 ===== */

undefined4 FUN_0001ae7c(int param_1,byte *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  int local_18;
  byte *local_14;
  
  iVar3 = DAT_0001b0f8 + 0x1ae9c;
  if (*(int *)(param_1 + 0x94) != 0) {
    FUN_0001869c(*(undefined4 *)(param_1 + 0x94));
    *(undefined4 *)(param_1 + 0x94) = 0;
  }
  uVar1 = FUN_00018658(4);
  *(undefined4 *)(param_1 + 0x94) = uVar1;
  local_14 = param_2;
  if (*(int *)(param_1 + 0x94) == 0) {
    printf((char *)(DAT_0001b108 + 0x1af38),DAT_0001b104 + 0x1af30,0x2ab,DAT_0001b100 + 0x1af24,
           DAT_0001b0fc + 0x1af18);
    uVar1 = 0xffffffff;
  }
  else {
    for (; ((*(ushort *)(**(int **)(iVar3 + DAT_0001b10c) + (uint)*local_14 * 2) & 0x80) != 0 &&
           (*local_14 != 0x3a)); local_14 = local_14 + 1) {
    }
    if (*local_14 == 0x3a) {
      do {
        local_14 = local_14 + 1;
      } while (*local_14 == 0x20);
      for (local_18 = 0; local_18 < 0xc; local_18 = local_18 + 1) {
        if ((*(int *)(DAT_0001b120 + local_18 * 0xc + 0x1b038) != 0) &&
           (pcVar2 = strstr((char *)local_14,*(char **)(DAT_0001b124 + local_18 * 0xc + 0x1b064)),
           pcVar2 != (char *)0x0)) {
          **(uint **)(param_1 + 0x94) =
               **(uint **)(param_1 + 0x94) |
               1 << (*(uint *)(DAT_0001b128 + 0x1b0a0 + local_18 * 0xc) & 0xff);
        }
      }
      uVar1 = 0;
    }
    else {
      FUN_0001869c(*(undefined4 *)(param_1 + 0x94));
      *(undefined4 *)(param_1 + 0x94) = 0;
      printf((char *)(DAT_0001b11c + 0x1afe8),DAT_0001b118 + 0x1afe0,0x2ab,DAT_0001b114 + 0x1afd4,
             DAT_0001b110 + 0x1afc8,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_0001b12c @ 0001b12c size=568 ===== */

char * FUN_0001b12c(int param_1,char *param_2,size_t param_3)

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
    snprintf(param_2,param_3,(char *)(DAT_0001b368 + 0x1b184),DAT_0001b364 + 0x1b17c);
    local_2c = strlen(param_2);
    local_c = param_2 + local_2c;
    local_2c = param_3 - local_2c;
    if ((int)local_2c < 2) {
      local_c = local_c + -(int)param_2;
    }
    else {
      for (local_10 = 0; local_10 < 0xc; local_10 = local_10 + 1) {
        if ((**(uint **)(param_1 + 0x94) &
            1 << (*(uint *)(DAT_0001b36c + 0x1b1f8 + local_10 * 0xc) & 0xff)) != 0) {
          if (bVar1) {
            snprintf(local_c,local_2c,(char *)(DAT_0001b374 + 0x1b258),
                     *(undefined4 *)(DAT_0001b370 + local_10 * 0xc + 0x1b240));
          }
          else {
            snprintf(local_c,local_2c,(char *)(DAT_0001b37c + 0x1b294),
                     *(undefined4 *)(DAT_0001b378 + local_10 * 0xc + 0x1b27c));
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
      snprintf(local_c,local_2c,(char *)(DAT_0001b380 + 0x1b31c));
      sVar2 = strlen(local_c);
      local_c = local_c + (sVar2 - (int)param_2);
    }
  }
  return local_c;
}



/* ===== FUN_0001b384 @ 0001b384 size=636 ===== */

undefined4 FUN_0001b384(int param_1,byte *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  int local_18;
  byte *local_14;
  
  iVar3 = DAT_0001b600 + 0x1b3a4;
  if (*(int *)(param_1 + 0x88) != 0) {
    FUN_0001869c(*(undefined4 *)(param_1 + 0x88));
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  uVar1 = FUN_00018658(4);
  *(undefined4 *)(param_1 + 0x88) = uVar1;
  local_14 = param_2;
  if (*(int *)(param_1 + 0x88) == 0) {
    printf((char *)(DAT_0001b610 + 0x1b440),DAT_0001b60c + 0x1b438,0x2ac,DAT_0001b608 + 0x1b42c,
           DAT_0001b604 + 0x1b420);
    uVar1 = 0xffffffff;
  }
  else {
    for (; ((*(ushort *)(**(int **)(iVar3 + DAT_0001b614) + (uint)*local_14 * 2) & 0x80) != 0 &&
           (*local_14 != 0x3a)); local_14 = local_14 + 1) {
    }
    if (*local_14 == 0x3a) {
      do {
        local_14 = local_14 + 1;
      } while (*local_14 == 0x20);
      for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
        if ((*(int *)(DAT_0001b628 + local_18 * 0xc + 0x1b540) != 0) &&
           (pcVar2 = strstr((char *)local_14,*(char **)(DAT_0001b62c + local_18 * 0xc + 0x1b56c)),
           pcVar2 != (char *)0x0)) {
          **(uint **)(param_1 + 0x88) =
               **(uint **)(param_1 + 0x88) |
               1 << (*(uint *)(DAT_0001b630 + 0x1b5a8 + local_18 * 0xc) & 0xff);
        }
      }
      uVar1 = 0;
    }
    else {
      FUN_0001869c(*(undefined4 *)(param_1 + 0x88));
      *(undefined4 *)(param_1 + 0x88) = 0;
      printf((char *)(DAT_0001b624 + 0x1b4f0),DAT_0001b620 + 0x1b4e8,0x2ac,DAT_0001b61c + 0x1b4dc,
             DAT_0001b618 + 0x1b4d0,param_2);
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}



/* ===== FUN_0001b634 @ 0001b634 size=568 ===== */

char * FUN_0001b634(int param_1,char *param_2,size_t param_3)

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
    snprintf(param_2,param_3,(char *)(DAT_0001b870 + 0x1b68c),DAT_0001b86c + 0x1b684);
    local_2c = strlen(param_2);
    local_c = param_2 + local_2c;
    local_2c = param_3 - local_2c;
    if ((int)local_2c < 2) {
      local_c = local_c + -(int)param_2;
    }
    else {
      for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
        if ((**(uint **)(param_1 + 0x88) &
            1 << (*(uint *)(DAT_0001b874 + 0x1b700 + local_10 * 0xc) & 0xff)) != 0) {
          if (bVar1) {
            snprintf(local_c,local_2c,(char *)(DAT_0001b87c + 0x1b760),
                     *(undefined4 *)(DAT_0001b878 + local_10 * 0xc + 0x1b748));
          }
          else {
            snprintf(local_c,local_2c,(char *)(DAT_0001b884 + 0x1b79c),
                     *(undefined4 *)(DAT_0001b880 + local_10 * 0xc + 0x1b784));
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
      snprintf(local_c,local_2c,(char *)(DAT_0001b888 + 0x1b824));
      sVar2 = strlen(local_c);
      local_c = local_c + (sVar2 - (int)param_2);
    }
  }
  return local_c;
}



/* ===== FUN_0001b88c @ 0001b88c size=192 ===== */

undefined4 FUN_0001b88c(char *param_1)

{
  int iVar1;
  int iVar2;
  int local_c;
  
  iVar2 = DAT_0001b94c + 0x1b8a8;
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



/* ===== FUN_0001b950 @ 0001b950 size=276 ===== */

char * FUN_0001b950(char *param_1,void *param_2,int param_3)

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



/* ===== FUN_0001ba64 @ 0001ba64 size=60 ===== */

undefined4 FUN_0001ba64(void *param_1)

{
  if (param_1 != (void *)0x0) {
    memset(param_1,0,0xac);
  }
  return 0;
}



/* ===== FUN_0001baa0 @ 0001baa0 size=428 ===== */

void FUN_0001baa0(void *param_1)

{
  if (*(int *)((int)param_1 + 0x74) != 0) {
    FUN_0001869c(*(undefined4 *)((int)param_1 + 0x74));
  }
  if (*(int *)((int)param_1 + 0x78) != 0) {
    FUN_0001869c(*(undefined4 *)((int)param_1 + 0x78));
  }
  if (*(int *)((int)param_1 + 0x7c) != 0) {
    FUN_0001869c(*(undefined4 *)((int)param_1 + 0x7c));
  }
  if (*(int *)((int)param_1 + 0x80) != 0) {
    FUN_0001869c(*(undefined4 *)((int)param_1 + 0x80));
  }
  if (*(int *)((int)param_1 + 0x84) != 0) {
    FUN_0001869c(*(undefined4 *)((int)param_1 + 0x84));
  }
  if (*(int *)((int)param_1 + 0x88) != 0) {
    FUN_0001869c(*(undefined4 *)((int)param_1 + 0x88));
  }
  if (*(int *)((int)param_1 + 0x90) != 0) {
    FUN_0001869c(*(undefined4 *)((int)param_1 + 0x90));
  }
  if (*(int *)((int)param_1 + 0x94) != 0) {
    FUN_0001869c(*(undefined4 *)((int)param_1 + 0x94));
  }
  if (*(int *)((int)param_1 + 0x9c) != 0) {
    FUN_0001869c(*(undefined4 *)((int)param_1 + 0x9c));
  }
  if (*(int *)((int)param_1 + 0xa4) != 0) {
    FUN_0001869c(*(undefined4 *)((int)param_1 + 0xa4));
  }
  if (*(int *)((int)param_1 + 0xa0) != 0) {
    FUN_0001869c(*(undefined4 *)((int)param_1 + 0xa0));
  }
  if (*(int *)((int)param_1 + 0xa8) != 0) {
    FUN_0001869c(*(undefined4 *)((int)param_1 + 0xa8));
  }
  memset(param_1,0,0xac);
  return;
}



/* ===== FUN_0001bc4c @ 0001bc4c size=52 ===== */

int FUN_0001bc4c(void)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0001bc80 + 0x1bc60);
  *(int *)(DAT_0001bc84 + 0x1bc70) = iVar1 + 1;
  return iVar1;
}



/* ===== FUN_0001bc88 @ 0001bc88 size=516 ===== */

char * FUN_0001bc88(char *param_1,int param_2)

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
  local_c = strstr(param_1,(char *)(DAT_0001be8c + 0x1bcc0));
  if ((local_c == (char *)0x0) || (param_2 <= (int)(local_c + (1 - (int)local_10)))) {
    if (param_2 < 0x101) {
      pcVar2 = (char *)0x0;
    }
    else {
      pcVar2 = (char *)0xffffffff;
    }
  }
  else {
    local_14 = strstr(local_10,(char *)(DAT_0001be90 + 0x1bd1c));
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
        local_c = (char *)FUN_0001b950(local_c,0,0);
        if ((local_c == (char *)0x0) ||
           (iVar1 = strncmp(local_c,(char *)(DAT_0001be94 + 0x1bd9c),2), iVar1 == 0)) {
          if (param_2 < (int)(local_14 + local_18)) {
            return (char *)0x0;
          }
          return local_14 + local_18;
        }
        iVar1 = strncmp(local_c,(char *)(DAT_0001be98 + 0x1bdc0),0xe);
      } while ((iVar1 != 0) ||
              (iVar1 = sscanf(local_c,(char *)(DAT_0001be9c + 0x1bde8),&local_18), iVar1 == 1));
      printf((char *)(DAT_0001bea8 + 0x1be24),DAT_0001bea4 + 0x1be1c,0x33d,DAT_0001bea0 + 0x1be10,
             local_c);
      pcVar2 = (char *)0xffffffff;
    }
  }
  return pcVar2;
}



/* ===== FUN_0001beac @ 0001beac size=896 ===== */

int FUN_0001beac(undefined4 *param_1,char *param_2,int param_3)

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
      uVar1 = FUN_000186cc(param_2 + 4,local_16);
      param_1[0x2a] = uVar1;
      iVar2 = local_16 + 4;
    }
    else {
      iVar2 = 0;
    }
  }
  else {
    pcVar3 = local_14;
    printf((char *)(DAT_0001c234 + 0x1bfb0),DAT_0001c230 + 0x1bfa8,0x361,DAT_0001c22c + 0x1bf9c,
           local_14);
    iVar2 = FUN_0001bc88(param_2,param_3);
    if (0 < iVar2) {
      local_10 = iVar2;
      local_c = (char *)FUN_0001b950(local_c,local_11c,0x100);
      if (local_c == (char *)0x0) {
        iVar2 = -1;
      }
      else {
        local_10 = FUN_00018e08(param_1,local_11c);
        if (local_10 < 0) {
          iVar2 = -1;
        }
        else {
          do {
            while( true ) {
              local_c = (char *)FUN_0001b950(local_c,local_11c,0x100);
              if ((local_c == (char *)0x0) || (local_11c[0] == '\0')) goto LAB_0001c104;
              local_1c = (code *)FUN_0001b88c(local_11c);
              if (local_1c != (code *)0x0) break;
              pcVar3 = local_11c;
              printf((char *)(DAT_0001c240 + 0x1c084),DAT_0001c23c + 0x1c07c,0x378,
                     DAT_0001c238 + 0x1c070,pcVar3);
            }
            local_10 = (*local_1c)(param_1,local_11c);
          } while (-1 < local_10);
          pcVar3 = local_11c;
          printf((char *)(DAT_0001c24c + 0x1c0d4),DAT_0001c248 + 0x1c0cc,0x37e,
                 DAT_0001c244 + 0x1c0c0,pcVar3);
LAB_0001c104:
          if ((local_c == (char *)0x0) || (local_11c[0] != '\0')) {
            FUN_0001baa0(param_1);
            iVar2 = -1;
          }
          else {
            if (param_1[0x28] != 0) {
              uVar1 = FUN_000186cc(local_c,*(undefined4 *)param_1[0x28]);
              param_1[0x2a] = uVar1;
              if (param_1[0x2a] == 0) {
                printf((char *)(DAT_0001c258 + 0x1c194),DAT_0001c254 + 0x1c18c,0x38b,
                       DAT_0001c250 + 0x1c180,pcVar3);
                FUN_0001baa0(param_1);
                return -1;
              }
            }
            local_10 = (int)local_c - (int)local_14;
            if (param_1[0x28] != 0) {
              local_10 = *(int *)param_1[0x28] + local_10;
            }
            if (local_10 != iVar2) {
              printf((char *)(DAT_0001c264 + 0x1c21c),DAT_0001c260 + 0x1c214,0x396,
                     DAT_0001c25c + 0x1c208,iVar2,local_10);
            }
          }
        }
      }
    }
  }
  return iVar2;
}



/* ===== FUN_0001c268 @ 0001c268 size=2104 ===== */

int FUN_0001c268(int *param_1,undefined4 *param_2,int param_3)

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
    iVar2 = FUN_00019158(param_1,param_2,param_3);
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
          iVar2 = FUN_00019eb4(param_1,local_14,local_34);
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
          iVar2 = FUN_0001aa64(param_1,local_14,local_34);
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
          iVar2 = FUN_0001a07c(param_1,local_14,local_34);
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
          iVar2 = FUN_00019790(param_1,local_14,local_34);
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
          iVar2 = FUN_00019c84(param_1,local_14,local_34);
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
          iVar2 = FUN_0001b634(param_1,local_14,local_34);
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
          iVar2 = FUN_00019cd8(param_1,local_14,local_34);
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
          iVar2 = FUN_0001a7b0(param_1,local_14,local_34);
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
          iVar2 = FUN_0001b12c(param_1,local_14,local_34);
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
          iVar2 = FUN_00019d2c(param_1,local_14,local_34);
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
          iVar2 = FUN_0001a4fc(param_1,local_14,local_34);
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
          iVar2 = FUN_0001ad88(param_1,local_14,local_34);
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
          iVar2 = FUN_0001a244(param_1,local_14,local_34);
          if (iVar2 < 0) {
            return -1;
          }
          local_14 = local_14 + iVar2;
          local_34 = local_34 - iVar2;
          if ((int)local_34 < 2) {
            return (int)local_14 - (int)param_2;
          }
        }
        snprintf(local_14,local_34,(char *)(DAT_0001caa0 + 0x1c998));
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
            printf((char *)(DAT_0001caac + 0x1ca88),DAT_0001caa8 + 0x1ca80,0x3e6,
                   DAT_0001caa4 + 0x1ca74,param_2);
            local_34 = (int)local_14 - (int)param_2;
          }
        }
      }
    }
  }
  return local_34;
}



/* ===== FUN_0001cab0 @ 0001cab0 size=140 ===== */

undefined4 FUN_0001cab0(undefined4 *param_1,undefined4 param_2,char *param_3,char *param_4)

{
  *param_1 = 0;
  param_1[1] = param_2;
  param_1[2] = 0;
  strncpy((char *)((int)param_1 + 0xe),param_3,0x1f);
  strncpy((char *)((int)param_1 + 0x2e),param_4,0x3f);
  param_1[0x1c] = 0;
  return 0;
}



/* ===== FUN_0001cb3c @ 0001cb3c size=76 ===== */

undefined4 FUN_0001cb3c(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = 1;
  param_1[1] = 0;
  param_1[2] = param_2;
  return 0;
}



/* ===== FUN_0001cb88 @ 0001cb88 size=96 ===== */

undefined4 FUN_0001cb88(int param_1,undefined4 *param_2)

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



/* ===== FUN_0001cbe8 @ 0001cbe8 size=112 ===== */

undefined4 FUN_0001cbe8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x74) == 0) {
    uVar1 = FUN_00018658(4);
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



/* ===== FUN_0001cc58 @ 0001cc58 size=96 ===== */

undefined4 FUN_0001cc58(int param_1,undefined4 *param_2)

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



/* ===== FUN_0001ccb8 @ 0001ccb8 size=112 ===== */

undefined4 FUN_0001ccb8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x7c) == 0) {
    uVar1 = FUN_00018658(4);
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



/* ===== FUN_0001cd28 @ 0001cd28 size=108 ===== */

undefined4 FUN_0001cd28(int param_1,char *param_2,int param_3)

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



/* ===== FUN_0001cd94 @ 0001cd94 size=288 ===== */

undefined4 FUN_0001cd94(int param_1,char *param_2)

{
  undefined4 uVar1;
  char *__src;
  char *__dest;
  int iVar2;
  time_t local_18;
  byte *local_14;
  
  iVar2 = DAT_0001ceb4 + 0x1cdb4;
  if (*(int *)(param_1 + 0x78) == 0) {
    uVar1 = FUN_00018658(0x20);
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
      while ((*(ushort *)(**(int **)(iVar2 + DAT_0001ceb8) + (uint)*local_14 * 2) & 0x40) != 0) {
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



/* ===== FUN_0001cebc @ 0001cebc size=284 ===== */

undefined4 FUN_0001cebc(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x80) == 0) {
    uVar1 = FUN_00018658(0x14);
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



/* ===== FUN_0001cfd8 @ 0001cfd8 size=220 ===== */

undefined4 FUN_0001cfd8(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x80) == 0) {
    uVar1 = FUN_00018658(0x14);
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



/* ===== FUN_0001d0b4 @ 0001d0b4 size=96 ===== */

undefined4 FUN_0001d0b4(int param_1,undefined4 *param_2)

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



/* ===== FUN_0001d114 @ 0001d114 size=112 ===== */

undefined4 FUN_0001d114(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x88) == 0) {
    uVar1 = FUN_00018658(4);
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



/* ===== FUN_0001d184 @ 0001d184 size=108 ===== */

undefined4 FUN_0001d184(int param_1,char *param_2,int param_3)

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



/* ===== FUN_0001d1f0 @ 0001d1f0 size=168 ===== */

undefined4 FUN_0001d1f0(int param_1,char *param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x90) == 0) {
    uVar1 = FUN_00018658(0x40);
    *(undefined4 *)(param_1 + 0x90) = uVar1;
  }
  if (*(int *)(param_1 + 0x90) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    if (param_2 == (char *)0x0) {
      strncpy(*(char **)(param_1 + 0x90),(char *)(DAT_0001d298 + 0x1d284),0x3f);
    }
    else {
      strncpy(*(char **)(param_1 + 0x90),param_2,0x3f);
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_0001d2fc @ 0001d2fc size=112 ===== */

undefined4 FUN_0001d2fc(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x94) == 0) {
    uVar1 = FUN_00018658(4);
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



/* ===== FUN_0001d36c @ 0001d36c size=108 ===== */

undefined4 FUN_0001d36c(int param_1,char *param_2,int param_3)

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



/* ===== FUN_0001d3d8 @ 0001d3d8 size=168 ===== */

undefined4 FUN_0001d3d8(int param_1,char *param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar1 = FUN_00018658(0x40);
    *(undefined4 *)(param_1 + 0x9c) = uVar1;
  }
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    if (param_2 == (char *)0x0) {
      strncpy(*(char **)(param_1 + 0x9c),(char *)(DAT_0001d480 + 0x1d46c),0x3f);
    }
    else {
      strncpy(*(char **)(param_1 + 0x9c),param_2,0x3f);
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_0001d4e8 @ 0001d4e8 size=112 ===== */

undefined4 FUN_0001d4e8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xa4) == 0) {
    uVar1 = FUN_00018658(4);
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



/* ===== FUN_0001d5bc @ 0001d5bc size=112 ===== */

undefined4 FUN_0001d5bc(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xa0) == 0) {
    uVar1 = FUN_00018658(4);
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



/* ===== FUN_0001d62c @ 0001d62c size=292 ===== */

int * FUN_0001d62c(int param_1,int param_2)

{
  int *piVar1;
  
  if ((param_1 < 1) || (param_2 < 1)) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = calloc(1,param_2 * param_1 + param_2 * 4 + 0x18);
    if (piVar1 == (int *)0x0) {
      printf((char *)(DAT_0001d758 + 0x1d6c0),DAT_0001d754 + 0x1d6b8,0x16,DAT_0001d750 + 0x1d6ac);
      piVar1 = (int *)0x0;
    }
    else {
      printf((char *)(DAT_0001d75c + 0x1d6f8),param_2 * param_1 + param_2 * 4 + 0x18);
      *piVar1 = param_1;
      piVar1[1] = param_2;
      piVar1[4] = (int)(piVar1 + 6);
      piVar1[5] = (int)(piVar1 + param_2 + 6);
    }
  }
  return piVar1;
}



/* ===== FUN_0001d760 @ 0001d760 size=176 ===== */

undefined4 FUN_0001d760(int *param_1,int param_2,int *param_3,int *param_4)

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



/* ===== FUN_0001d810 @ 0001d810 size=172 ===== */

undefined4 FUN_0001d810(int param_1,int param_2)

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



/* ===== FUN_0001d8bc @ 0001d8bc size=92 ===== */

undefined4 FUN_0001d8bc(int param_1,int param_2)

{
  undefined4 extraout_r1;
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    FUN_0001fdac(param_2 + 1,*(undefined4 *)(param_1 + 4));
    uVar1 = extraout_r1;
  }
  return uVar1;
}



/* ===== FUN_0001d918 @ 0001d918 size=60 ===== */

undefined4 FUN_0001d918(int param_1)

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



/* ===== FUN_0001d954 @ 0001d954 size=60 ===== */

undefined4 FUN_0001d954(int param_1)

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



/* ===== FUN_0001d990 @ 0001d990 size=168 ===== */

undefined4 FUN_0001d990(int param_1)

{
  int extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    FUN_0001fdac(*(int *)(param_1 + 0xc) + 1,*(undefined4 *)(param_1 + 4));
    if (extraout_r1 == *(int *)(param_1 + 8)) {
      uVar1 = 0xffffffff;
    }
    else {
      FUN_0001fdac(*(int *)(param_1 + 0xc) + 1,*(undefined4 *)(param_1 + 4));
      *(undefined4 *)(param_1 + 0xc) = extraout_r1_00;
      uVar1 = *(undefined4 *)(param_1 + 0xc);
    }
  }
  return uVar1;
}



/* ===== FUN_0001da38 @ 0001da38 size=136 ===== */

undefined4 FUN_0001da38(int param_1)

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
    FUN_0001fdac(*(int *)(param_1 + 8) + 1,*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 8) = extraout_r1;
    uVar1 = *(undefined4 *)(param_1 + 8);
  }
  return uVar1;
}



/* ===== FUN_0001dac0 @ 0001dac0 size=48 ===== */

void FUN_0001dac0(void *param_1)

{
  if (param_1 != (void *)0x0) {
    free(param_1);
  }
  return;
}



/* ===== FUN_0001daf0 @ 0001daf0 size=636 ===== */

undefined1 * FUN_0001daf0(undefined1 *param_1,int param_2,byte *param_3,uint param_4)

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
      *local_c = *(undefined1 *)(DAT_0001dd6c + 0x1dbf8 + (uint)(bVar1 >> 2));
      local_c[1] = *(undefined1 *)(DAT_0001dd70 + 0x1dc20 + ((uVar4 & 0x3f00000) >> 0x14));
      puVar3 = local_c + 3;
      local_c[2] = *(undefined1 *)
                    (DAT_0001dd74 + 0x1dc48 + ((uVar4 | (uint)bVar2 << 8) >> 0xe & 0x3f));
      local_c = local_c + 4;
      *puVar3 = *(undefined1 *)(DAT_0001dd78 + 0x1dc70 + (((uint)bVar2 << 8 & 0x3f00) >> 8));
    }
    local_10 = 0;
    for (; local_18 != 0; local_18 = local_18 - 1) {
      local_10 = local_10 * 0x100 + (uint)*local_2c;
      local_14 = local_14 + 8;
      local_2c = local_2c + 1;
    }
    for (; 0 < (int)local_14; local_14 = local_14 - 6) {
      *local_c = *(undefined1 *)
                  (DAT_0001dd7c + 0x1dd00 + ((uint)(local_10 << 6) >> (local_14 & 0xff) & 0x3f));
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



/* ===== FUN_0001dd80 @ 0001dd80 size=476 ===== */

char * FUN_0001dd80(char *param_1,int param_2,int *param_3)

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



/* ===== FUN_0001df5c @ 0001df5c size=588 ===== */

bool FUN_0001df5c(int param_1,int param_2,void *param_3)

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
           ) && (iVar1 = FUN_0001dd80(local_c,local_14,&local_20), iVar1 != 0))))) {
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
      printf((char *)(DAT_0001e1b0 + 0x1e0ac),DAT_0001e1ac + 0x1e0a4,0x86,DAT_0001e1a8 + 0x1e098,
             local_20);
      if (0x40 < (int)local_20) {
        local_20 = 0x40;
      }
      memcpy(param_3,local_10,local_20);
      *(size_t *)((int)param_3 + 0x80) = local_20;
      local_18 = local_18 + 1;
    }
    if (local_19 == 8) {
      printf((char *)(DAT_0001e1bc + 0x1e124),DAT_0001e1b8 + 0x1e11c,0x8e,DAT_0001e1b4 + 0x1e110,
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



/* ===== FUN_0001e1c0 @ 0001e1c0 size=736 ===== */

bool FUN_0001e1c0(int param_1,int param_2,void *param_3)

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
         (iVar1 = FUN_0001dd80(local_c,local_14,&local_20), iVar1 != 0))) {
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
      printf((char *)(DAT_0001e4a8 + 0x1e328),DAT_0001e4a4 + 0x1e320,0xba,DAT_0001e4a0 + 0x1e314,
             local_20);
      if (0x40 < (int)local_20) {
        local_20 = 0x40;
      }
      memcpy(param_3,local_10,local_20);
      *(size_t *)((int)param_3 + 0xc0) = local_20;
      local_18 = local_18 + 1;
    }
    if (local_19 == 0x21) {
      printf((char *)(DAT_0001e4b4 + 0x1e3a0),DAT_0001e4b0 + 0x1e398,0xc2,DAT_0001e4ac + 0x1e38c,
             local_20);
      if (0x40 < (int)local_20) {
        local_20 = 0x40;
      }
      memcpy((void *)((int)param_3 + 0x40),local_10,local_20);
      *(size_t *)((int)param_3 + 0xc4) = local_20;
      local_18 = local_18 + 1;
    }
    if (local_19 == 0x22) {
      printf((char *)(DAT_0001e4c0 + 0x1e41c),DAT_0001e4bc + 0x1e414,0xca,DAT_0001e4b8 + 0x1e408,
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



/* ===== FUN_0001e4c4 @ 0001e4c4 size=236 ===== */

undefined4 FUN_0001e4c4(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 != 4) {
    printf((char *)(DAT_0001e5b8 + 0x1e508),DAT_0001e5b4 + 0x1e500,0xdb,DAT_0001e5b0 + 0x1e4f4);
    return 0xffffffff;
  }
  iVar1 = *param_1;
  if (iVar1 == 24000) {
code_r0x0001e594:
    *param_3 = iVar1;
    uVar2 = 1;
  }
  else {
    if (iVar1 < 0x5dc1) {
      if (iVar1 == 16000) goto code_r0x0001e594;
    }
    else if ((iVar1 == 32000) || (iVar1 == 40000)) goto code_r0x0001e594;
    printf((char *)(DAT_0001e5c4 + 0x1e588),DAT_0001e5c0 + 0x1e580,0xe8,DAT_0001e5bc + 0x1e574);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== FUN_0001e5c8 @ 0001e5c8 size=56 ===== */

undefined4 FUN_0001e5c8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001df5c(param_1,param_2,param_3);
  return uVar1;
}



/* ===== FUN_0001e600 @ 0001e600 size=56 ===== */

undefined4 FUN_0001e600(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001e1c0(param_1,param_2,param_3);
  return uVar1;
}



/* ===== FUN_0001e638 @ 0001e638 size=556 ===== */

int FUN_0001e638(undefined4 param_1,undefined4 param_2,int param_3,char *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *local_c;
  
  iVar1 = sprintf(param_4,(char *)(DAT_0001e864 + 0x1e66c),param_1);
  pcVar4 = param_4 + iVar1;
  iVar1 = sprintf(pcVar4,(char *)(DAT_0001e868 + 0x1e694));
  iVar2 = sprintf(pcVar4 + iVar1,(char *)(DAT_0001e86c + 0x1e6c4),param_1,param_2);
  local_c = pcVar4 + iVar1 + iVar2;
  if ((*(int *)(param_3 + 0x80) == 0) || (*(int *)(param_3 + 0x84) == 0)) {
    iVar1 = sprintf(local_c,(char *)(DAT_0001e87c + 0x1e830),param_1);
    local_c = local_c + iVar1;
  }
  else {
    uVar5 = *(undefined4 *)(param_3 + 0x80);
    uVar6 = *(undefined4 *)(param_3 + 0x84);
    iVar1 = sprintf(local_c,(char *)(DAT_0001e870 + 0x1e738),param_1);
    local_c = local_c + iVar1;
    FUN_0001daf0(local_c,param_5 - ((int)local_c - (int)param_4),param_3,uVar5);
    sVar3 = strlen(local_c);
    iVar1 = sprintf(local_c + sVar3,(char *)(DAT_0001e874 + 0x1e79c));
    pcVar4 = local_c + sVar3 + iVar1;
    FUN_0001daf0(pcVar4,param_5 - ((int)pcVar4 - (int)param_4),param_3 + 0x40,uVar6);
    sVar3 = strlen(pcVar4);
    iVar1 = sprintf(pcVar4 + sVar3,(char *)(DAT_0001e878 + 0x1e800));
    local_c = pcVar4 + sVar3 + iVar1;
  }
  return (int)local_c - (int)param_4;
}



/* ===== FUN_0001e880 @ 0001e880 size=688 ===== */

int FUN_0001e880(undefined4 param_1,undefined4 param_2,int param_3,char *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *local_c;
  
  iVar1 = sprintf(param_4,(char *)(DAT_0001eb30 + 0x1e8b4),param_1);
  pcVar4 = param_4 + iVar1;
  iVar1 = sprintf(pcVar4,(char *)(DAT_0001eb34 + 0x1e8dc));
  iVar2 = sprintf(pcVar4 + iVar1,(char *)(DAT_0001eb38 + 0x1e90c),param_1,param_2);
  local_c = pcVar4 + iVar1 + iVar2;
  if (((*(int *)(param_3 + 0xc0) != 0) && (*(int *)(param_3 + 0xc4) != 0)) &&
     (*(int *)(param_3 + 200) != 0)) {
    uVar5 = *(undefined4 *)(param_3 + 0xc0);
    uVar6 = *(undefined4 *)(param_3 + 0xc4);
    uVar7 = *(undefined4 *)(param_3 + 200);
    iVar1 = sprintf(local_c,(char *)(DAT_0001eb3c + 0x1e9a8),param_1);
    iVar2 = sprintf(local_c + iVar1,(char *)(DAT_0001eb40 + 0x1e9d0));
    pcVar4 = local_c + iVar1 + iVar2;
    FUN_0001daf0(pcVar4,param_5 - ((int)pcVar4 - (int)param_4),param_3,uVar5);
    sVar3 = strlen(pcVar4);
    iVar1 = sprintf(pcVar4 + sVar3,(char *)(DAT_0001eb44 + 0x1ea34));
    pcVar4 = pcVar4 + sVar3 + iVar1;
    FUN_0001daf0(pcVar4,param_5 - ((int)pcVar4 - (int)param_4),param_3 + 0x40,uVar6);
    sVar3 = strlen(pcVar4);
    iVar1 = sprintf(pcVar4 + sVar3,(char *)(DAT_0001eb48 + 0x1ea98));
    pcVar4 = pcVar4 + sVar3 + iVar1;
    FUN_0001daf0(pcVar4,param_5 - ((int)pcVar4 - (int)param_4),param_3 + 0x80,uVar7);
    sVar3 = strlen(pcVar4);
    iVar1 = sprintf(pcVar4 + sVar3,(char *)(DAT_0001eb4c + 0x1eafc));
    local_c = pcVar4 + sVar3 + iVar1;
  }
  return (int)local_c - (int)param_4;
}



/* ===== FUN_0001eb50 @ 0001eb50 size=196 ===== */

char * FUN_0001eb50(undefined4 param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  int iVar1;
  int iVar2;
  char *__s;
  
  iVar1 = sprintf(param_4,(char *)(DAT_0001ec14 + 0x1eb84),param_1);
  __s = param_4 + iVar1;
  iVar1 = sprintf(__s,(char *)(DAT_0001ec18 + 0x1ebac));
  iVar2 = sprintf(__s + iVar1,(char *)(DAT_0001ec1c + 0x1ebe4),param_1,param_2,param_3);
  return __s + iVar1 + (iVar2 - (int)param_4);
}



/* ===== FUN_0001ec20 @ 0001ec20 size=196 ===== */

char * FUN_0001ec20(undefined4 param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  int iVar1;
  int iVar2;
  char *__s;
  
  iVar1 = sprintf(param_4,(char *)(DAT_0001ece4 + 0x1ec54),param_1);
  __s = param_4 + iVar1;
  iVar1 = sprintf(__s,(char *)(DAT_0001ece8 + 0x1ec7c));
  iVar2 = sprintf(__s + iVar1,(char *)(DAT_0001ecec + 0x1ecb4),param_1,param_2,param_3);
  return __s + iVar1 + (iVar2 - (int)param_4);
}



/* ===== FUN_0001ecf0 @ 0001ecf0 size=252 ===== */

char * FUN_0001ecf0(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint *param_4,
                   char *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *__s;
  
  iVar1 = sprintf(param_5,(char *)(DAT_0001edec + 0x1ed24),param_1);
  __s = param_5 + iVar1;
  iVar1 = sprintf(__s,(char *)(DAT_0001edf0 + 0x1ed4c));
  if (*param_4 == 0) {
    uVar3 = 0x20;
  }
  else {
    uVar3 = *param_4 / 1000;
  }
  iVar2 = sprintf(__s + iVar1,(char *)(DAT_0001edf4 + 0x1edbc),param_1,uVar3,param_2,param_3);
  return __s + iVar1 + (iVar2 - (int)param_5);
}



/* ===== FUN_0001edf8 @ 0001edf8 size=1436 ===== */

int FUN_0001edf8(byte *param_1,byte *param_2,size_t param_3,undefined4 param_4,uint param_5,
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
    __hostlong = FUN_0001fdcc((int)lVar2,
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



/* ===== FUN_0001f394 @ 0001f394 size=1492 ===== */

int FUN_0001f394(byte *param_1,byte *param_2,size_t param_3,undefined4 param_4,uint param_5,
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
    __hostlong = FUN_0001fdcc((int)lVar3,
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



/* ===== FUN_0001f968 @ 0001f968 size=792 ===== */

int FUN_0001f968(byte *param_1,void *param_2,size_t param_3,undefined4 param_4,uint param_5,
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
    __hostlong = FUN_0001fdcc((int)lVar1,
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



/* ===== FUN_0001fc80 @ 0001fc80 size=80 ===== */

undefined4
FUN_0001fc80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001f968(param_1,param_2,param_3,param_6,param_5,param_6,param_7,param_8);
  return uVar1;
}



/* ===== FUN_0001fcd8 @ 0001fcd8 size=196 ===== */

uint FUN_0001fcd8(uint param_1,uint param_2)

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



/* ===== FUN_0001fdac @ 0001fdac size=48 ===== */

void FUN_0001fdac(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_0001fcd8();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_0001fdcc @ 0001fdcc size=76 ===== */

void FUN_0001fdcc(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  if (param_4 != 0 || param_3 != 0) {
    FUN_0001fe18();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_0001fe18 @ 0001fe18 size=328 ===== */

undefined8 FUN_0001fe18(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

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



/* ===== _fini @ 0001ff60 size=16 ===== */

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



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 0003405c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_Handle2VirAddr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ctime @ 00034060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * ctime(time_t *__timer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sscanf @ 00034064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clock_gettime @ 00034068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 0003406c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::send @ 00034070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t send(int __fd,void *__buf,size_t __n,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 00034074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Exit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 00034078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::socket @ 0003407c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_LOG @ 00034080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_LOG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 00034084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt @ 00034088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 0003408c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_join @ 00034090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetChnAttr @ 00034094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetChnAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memmove @ 00034098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 0003409c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 000340a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 000340a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcat @ 000340a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gettimeofday @ 000340ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableDev @ 000340b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_EnableDev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StartRecvFrame @ 000340b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_StartRecvFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::signal @ 000340b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Bind @ 000340bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Bind(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::recvfrom @ 000340c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recvfrom(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,socklen_t *__addr_len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_EnableChn @ 000340c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_EnableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setsockopt @ 000340c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_GetStream @ 000340cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_GetStream(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 000340d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fcntl @ 000340d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fcntl(int __fd,int __cmd,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 000340d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 000340dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VENC_StopRecvFrame @ 000340e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VENC_StopRecvFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 000340e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevIsEnable @ 000340e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetDevIsEnable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 000340ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::accept @ 000340f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int accept(int __fd,sockaddr *__addr,socklen_t *__addr_len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::recv @ 000340f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recv(int __fd,void *__buf,size_t __n,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::raise @ 000340f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_SetDevBindPipe @ 000340fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_SetDevBindPipe(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sendto @ 00034100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t sendto(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,socklen_t __addr_len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strstr @ 00034104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00034108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::inet_ntoa @ 0003410c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * inet_ntoa(in_addr __in)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::htonl @ 00034110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint32_t htonl(uint32_t __hostlong)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_DisableDev @ 00034114 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_DisableDev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VI_GetDevAttr @ 00034118 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VI_GetDevAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ntohs @ 0003411c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint16_t ntohs(uint16_t __netshort)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 00034120 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::bind @ 00034124 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 00034128 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


