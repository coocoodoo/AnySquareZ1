// btmgmt — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _DT_INIT @ 00012624 size=16 ===== */

void _DT_INIT(void)

{
  return;
}



/* ===== <EXTERNAL>::strcpy @ 00012654 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_0003fea0)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::epoll_create1 @ 00012660 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int epoll_create1(int __flags)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_epoll_create1_0003fea4)(__flags);
  return iVar1;
}



/* ===== <EXTERNAL>::ioctl @ 0001266c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_0003fea8)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::printf @ 00012684 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_0003feb0)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::recv @ 00012690 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recv(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_recv_0003feb4)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::connect @ 0001269c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int connect(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_connect_0003feb8)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::epoll_wait @ 000126a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int epoll_wait(int __epfd,epoll_event *__events,int __maxevents,int __timeout)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_epoll_wait_0003febc)(__epfd);
  return iVar1;
}



/* ===== <EXTERNAL>::strerror @ 000126b4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_0003fec0)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::strndup @ 000126c0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strndup(char *__string,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strndup_0003fec4)(__string);
  return pcVar1;
}



/* ===== <EXTERNAL>::memmove @ 000126cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_0003fec8)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::getopt_long @ 000126d8 size=12 ===== */

void getopt_long(void)

{
  (*(code *)PTR_getopt_long_0003fecc)();
  return;
}



/* ===== <EXTERNAL>::snprintf @ 000126e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_0003fed0)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::fgets @ 000126f0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_fgets_0003fed4)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::memcpy @ 000126fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_0003fed8)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::puts @ 00012708 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_0003fedc)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00012714 size=12 ===== */

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_0003fee0)();
  return;
}



/* ===== <EXTERNAL>::malloc @ 00012720 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0003fee4)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::vsnprintf @ 0001272c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vsnprintf_0003fee8)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::socket @ 00012738 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_socket_0003feec)(__domain);
  return iVar1;
}



/* ===== <EXTERNAL>::select @ 00012744 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_select_0003fef0)(__nfds);
  return iVar1;
}



/* ===== <EXTERNAL>::fflush @ 00012750 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_0003fef4)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::strncasecmp @ 0001275c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncasecmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncasecmp_0003fef8)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::send @ 00012768 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t send(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_send_0003fefc)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::abort @ 00012774 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_0003ff00)();
  return;
}



/* ===== <EXTERNAL>::epoll_ctl @ 00012780 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int epoll_ctl(int __epfd,int __op,int __fd,epoll_event *__event)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_epoll_ctl_0003ff04)(__epfd);
  return iVar1;
}



/* ===== <EXTERNAL>::__stack_chk_fail @ 0001278c size=12 ===== */

void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_0003ff08)();
  return;
}



/* ===== <EXTERNAL>::strtol @ 00012798 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_strtol_0003ff0c)(__nptr);
  return lVar1;
}



/* ===== <EXTERNAL>::calloc @ 000127a4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_0003ff10)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::write @ 000127b0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_write_0003ff14)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::fprintf @ 000127bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_0003ff18)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::strcat @ 000127c8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcat_0003ff1c)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::bind @ 000127d4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_bind_0003ff20)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::signalfd @ 000127e0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int signalfd(int __fd,sigset_t *__mask,int __flags)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_signalfd_0003ff24)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::vprintf @ 000127ec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vprintf(char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vprintf_0003ff28)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 000127f8 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_0003ff2c)();
  return;
}



/* ===== <EXTERNAL>::setsockopt @ 00012804 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setsockopt_0003ff30)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::read @ 00012810 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_0003ff34)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::strncmp @ 0001281c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_0003ff38)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::strncpy @ 00012828 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_0003ff3c)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::strcasecmp @ 00012834 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcasecmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcasecmp_0003ff40)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::realloc @ 00012840 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_realloc_0003ff44)(__ptr);
  return pvVar1;
}



/* ===== <EXTERNAL>::memcmp @ 0001284c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_0003ff48)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::sscanf @ 00012858 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sscanf_0003ff4c)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::timerfd_create @ 00012864 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int timerfd_create(clockid_t __clock_id,int __flags)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_timerfd_create_0003ff50)(__clock_id);
  return iVar1;
}



/* ===== <EXTERNAL>::strdup @ 0001287c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strdup(char *__s)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strdup_0003ff58)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::memset @ 00012888 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0003ff5c)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::open64 @ 00012894 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open64_0003ff60)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::syslog @ 000128ac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void syslog(int __pri,char *__fmt,...)

{
  (*(code *)PTR_syslog_0003ff68)(__pri);
  return;
}



/* ===== <EXTERNAL>::strcmp @ 000128b8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_0003ff6c)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::shutdown @ 000128c4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int shutdown(int __fd,int __how)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_shutdown_0003ff70)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::sprintf @ 000128d0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_0003ff74)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::asprintf @ 000128dc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int asprintf(char **__ptr,char *__fmt,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_asprintf_0003ff78)(__ptr);
  return iVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 00012900 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_0003ff84)();
  return piVar1;
}



/* ===== <EXTERNAL>::exit @ 0001290c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_0003ff88)(__status);
  return;
}



/* ===== <EXTERNAL>::atoi @ 00012918 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_0003ff8c)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::strlen @ 00012924 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_0003ff90)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::fputs @ 00012930 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_0003ff94)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::timerfd_settime @ 0001293c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int timerfd_settime(int __ufd,int __flags,itimerspec *__utmr,itimerspec *__otmr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_timerfd_settime_0003ff98)(__ufd);
  return iVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00012948 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_0003ff9c)();
  return;
}



/* ===== <EXTERNAL>::close @ 00012954 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_0003ffa0)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::vfprintf @ 00012960 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vfprintf_0003ffa4)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 0001296c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0003ffa8)(__ptr);
  return;
}



/* ===== <EXTERNAL>::sigprocmask @ 00012978 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigprocmask(int __how,sigset_t *__set,sigset_t *__oset)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sigprocmask_0003ffac)(__how);
  return iVar1;
}



/* ===== FUN_00012984 @ 00012984 size=1084 ===== */

int FUN_00012984(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  
  uVar6 = 0xffff;
  iVar5 = DAT_00012dc0 + 0x12b8c;
  iVar9 = DAT_00012dc4 + 0x129b8;
  pcVar10 = (char *)(DAT_00012dc8 + 0x129bc);
  iVar8 = DAT_00012dcc + 0x129c0;
  while( true ) {
    iVar7 = 0;
    iVar1 = getopt_long(param_1,param_2,iVar9,iVar5,0);
    if (iVar1 == -1) break;
    if (iVar1 == 0x69) {
      pcVar2 = (char *)**(undefined4 **)(iVar8 + DAT_00012de0);
      sVar3 = strlen(pcVar2);
      if ((3 < sVar3) && (iVar1 = strncasecmp(pcVar2,pcVar10,3), iVar1 == 0)) {
        pcVar2 = pcVar2 + 4;
      }
      uVar6 = atoi(pcVar2);
      uVar6 = uVar6 & 0xffff;
    }
    else {
      if (iVar1 != 0x76) goto LAB_00012a74;
      *(undefined1 *)(DAT_00012de4 + 0x12adc) = 1;
    }
  }
  iVar5 = **(int **)(iVar8 + DAT_00012dd0);
  **(int **)(iVar8 + DAT_00012dd0) = 0;
  param_1 = param_1 - iVar5;
  if (param_1 < 1) {
LAB_00012a74:
    FUN_000151fc();
  }
  else {
    FUN_00019998();
    iVar1 = FUN_0001b300();
    iVar9 = DAT_00012dd4;
    if (iVar1 == 0) {
      fputs((char *)(DAT_00012de8 + 0x12af4),(FILE *)**(undefined4 **)(iVar8 + DAT_00012dd8));
    }
    else {
      pcVar10 = *(char **)(param_2 + iVar5 * 4);
      iVar5 = DAT_00012dd4 + 0x12c0c;
      while( true ) {
        pcVar2 = *(char **)(iVar7 * 0xc + iVar5);
        if (pcVar2 == (char *)0x0) break;
        iVar4 = strcmp(pcVar2,pcVar10);
        if (iVar4 == 0) {
          (**(code **)(iVar9 + iVar7 * 0xc + 0x12c10))(iVar1,uVar6,param_1);
          FUN_0001b718(iVar1,3,uVar6,DAT_00012dec + 0x12b5c,0,0);
          FUN_0001b718(iVar1,4,uVar6,DAT_00012df0 + 0x12b7c,0,0);
          FUN_0001b718(iVar1,5,uVar6,DAT_00012df4 + 0x12b9c,0,0);
          FUN_0001b718(iVar1,6,uVar6,DAT_00012df8 + 0x12bbc,0,0);
          FUN_0001b718(iVar1,0x13,uVar6,DAT_00012dfc + 0x12bdc,0,0);
          FUN_0001b718(iVar1,9,uVar6,DAT_00012e00 + 0x12bfc,0,0);
          FUN_0001b718(iVar1,0xb,uVar6,DAT_00012e04 + 0x12c1c,0,0);
          FUN_0001b718(iVar1,0xc,uVar6,DAT_00012e08 + 0x12c3c,0,0);
          FUN_0001b718(iVar1,0xd,uVar6,DAT_00012e0c + 0x12c5c,0,0);
          FUN_0001b718(iVar1,0x11,uVar6,DAT_00012e10 + 0x12c7c,0,0);
          FUN_0001b718(iVar1,8,uVar6,DAT_00012e14 + 0x12c9c,0,0);
          FUN_0001b718(iVar1,0x12,uVar6,DAT_00012e18 + 0x12cbc,iVar1,0);
          FUN_0001b718(iVar1,0xe,uVar6,DAT_00012e1c + 0x12cdc,iVar1,0);
          FUN_0001b718(iVar1,0xf,uVar6,DAT_00012e20 + 0x12cfc,iVar1,0);
          FUN_0001b718(iVar1,0x10,uVar6,DAT_00012e24 + 0x12d1c,iVar1,0);
          FUN_0001b718(iVar1,0x17,uVar6,DAT_00012e28 + 0x12d3c,iVar1,0);
          FUN_0001b718(iVar1,0x1d,uVar6,DAT_00012e2c + 0x12d5c,0,0);
          FUN_0001b718(iVar1,0x1e,uVar6,DAT_00012e30 + 0x12d7c,0,0);
          FUN_0001b718(iVar1,0x1f,uVar6,DAT_00012e34 + 0x12d94,0,0);
          iVar5 = FUN_00019c04();
          FUN_0001b6b8(iVar1);
          FUN_0001b890(iVar1);
          FUN_0001b8f4(iVar1);
          return iVar5;
        }
        iVar7 = iVar7 + 1;
      }
      fprintf((FILE *)**(undefined4 **)(iVar8 + DAT_00012dd8),(char *)(DAT_00012ddc + 0x12a54),
              pcVar10);
      FUN_0001b8f4(iVar1);
    }
    iVar7 = 1;
  }
  return iVar7;
}



/* ===== entry @ 00012e38 size=80 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_0003ff54)
            (*(undefined4 *)((int)&DAT_00012e80 + DAT_00012e8c + DAT_00012e80),param_2,
             &stack0x00000004,*(undefined4 *)((int)&DAT_00012e80 + DAT_00012e88 + DAT_00012e80),
             *(undefined4 *)((int)&DAT_00012e80 + DAT_00012e84 + DAT_00012e80),param_1);
  return;
}



/* ===== FUN_00012e90 @ 00012e90 size=72 ===== */

void FUN_00012e90(void)

{
  code *pcVar1;
  
  if (DAT_00012edc + 0x12ea8 == DAT_00012ed8 + 0x12ea0) {
    return;
  }
  pcVar1 = *(code **)(DAT_00012ee0 + 0x12eb0 + DAT_00012ee4);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== _FINI_0 @ 00012f4c size=112 ===== */

void _FINI_0(void)

{
  int iVar1;
  
  iVar1 = DAT_00012fc0 + 0x12f68;
  if (*(char *)(DAT_00012fbc + 0x12f5c) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + DAT_00012fc4) != 0) {
    __cxa_finalize(*(undefined4 *)(DAT_00012fc8 + 0x12f88));
  }
  FUN_00012e90();
  if (*(int *)(iVar1 + DAT_00012fcc) != 0) {
    __deregister_frame_info(DAT_00012fd0 + 0x12fa8);
  }
  *(undefined1 *)(DAT_00012fd4 + 0x12fb8) = 1;
  return;
}



/* ===== _INIT_0 @ 00012fd8 size=140 ===== */

void _INIT_0(void)

{
  code *pcVar1;
  
  if (*(int *)(DAT_00013010 + 0x12fe8 + DAT_00013014) != 0) {
    __register_frame_info(DAT_0001301c + 0x13008,DAT_00013018 + 0x13004);
  }
  if (((DAT_00012f40 + 0x12f00) - (DAT_00012f3c + 0x12ef8) >> 2) / 2 == 0) {
    return;
  }
  pcVar1 = *(code **)(DAT_00012f44 + 0x12f08 + DAT_00012f48);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== FUN_00013020 @ 00013020 size=104 ===== */

void FUN_00013020(uint param_1)

{
  int iVar1;
  int *piVar2;
  int aiStack_18 [4];
  
  piVar2 = *(int **)(DAT_00013088 + 0x1303c + DAT_0001308c);
  aiStack_18[3] = *piVar2;
  aiStack_18[0] = *(int *)(DAT_00013090 + 0x13050);
  aiStack_18[1] = *(undefined4 *)(DAT_00013090 + 0x13054);
  aiStack_18[2] = *(undefined4 *)(DAT_00013090 + 0x13058);
  if (param_1 < 3) {
    iVar1 = aiStack_18[param_1];
  }
  else {
    iVar1 = DAT_00013094 + 0x13070;
  }
  if (aiStack_18[3] == *piVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}



/* ===== FUN_000130c4 @ 000130c4 size=68 ===== */

void FUN_000130c4(uint param_1)

{
  if ((param_1 & 1) != 0) {
    printf((char *)(DAT_0001310c + 0x130e8),DAT_00013108 + 0x130e4);
  }
  if ((param_1 & 2) == 0) {
    return;
  }
  printf((char *)(DAT_00013114 + 0x13104),DAT_00013110 + 0x13100);
  return;
}



/* ===== FUN_00013170 @ 00013170 size=68 ===== */

void FUN_00013170(uint param_1)

{
  uint uVar1;
  int iVar2;
  char *__format;
  
  uVar1 = 0;
  iVar2 = DAT_000131b4 + 0x13190;
  __format = (char *)(DAT_000131b8 + 0x13194);
  do {
    if ((param_1 & 1 << (uVar1 & 0xff)) != 0) {
      printf(__format,*(undefined4 *)(iVar2 + uVar1 * 4));
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 != 0xf);
  return;
}



/* ===== FUN_00013214 @ 00013214 size=452 ===== */

void FUN_00013214(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  byte bVar1;
  char *pcVar2;
  size_t sVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  char *__s;
  undefined4 local_4c;
  undefined2 local_48;
  uint local_46;
  undefined1 local_42;
  char acStack_41 [21];
  int local_2c;
  
  iVar6 = DAT_000133d8 + 0x13234;
  piVar5 = *(int **)(iVar6 + DAT_000133dc);
  local_2c = *piVar5;
  if (param_2 == 7) {
    __s = acStack_41 + 1;
    if (*(char *)(DAT_000133e8 + 0x13290) != '\0') {
      FUN_0001ba0c(param_3,__s);
      printf((char *)(DAT_000133ec + 0x132b8),param_1,__s);
    }
    printf((char *)(DAT_000133f0 + 0x132c8));
    fflush((FILE *)**(undefined4 **)(iVar6 + DAT_000133f4));
    acStack_41[1] = '\0';
    acStack_41[2] = '\0';
    acStack_41[3] = '\0';
    acStack_41[4] = '\0';
    acStack_41[5] = '\0';
    acStack_41[6] = '\0';
    acStack_41[7] = '\0';
    pcVar2 = fgets(__s,7,(FILE *)**(undefined4 **)(iVar6 + DAT_000133f8));
    local_48 = *(undefined2 *)(param_3 + 1);
    bVar1 = *(byte *)((int)param_3 + 6);
    if ((pcVar2 == (char *)0x0) || (acStack_41[1] == '\n')) {
      local_4c = *param_3;
      local_42 = 0;
      uVar4 = 0x1f;
      local_46 = (uint)bVar1;
      iVar6 = DAT_000133fc + 0x13354;
    }
    else {
      sVar3 = strlen(__s);
      if (acStack_41[sVar3] == '\n') {
        acStack_41[sVar3] = '\0';
      }
      iVar6 = atoi(__s);
      local_4c = *param_3;
      uVar4 = 0x1e;
      local_46 = CONCAT31((int3)iVar6,bVar1);
      local_42 = (undefined1)((uint)iVar6 >> 0x18);
      iVar6 = DAT_00013400 + 0x133c8;
    }
    FUN_0001b4ec(param_4,uVar4,param_1,0xb,&local_4c,iVar6,0,0);
  }
  else {
    fprintf((FILE *)**(undefined4 **)(iVar6 + DAT_000133e0),(char *)(DAT_000133e4 + 0x1325c),param_2
           );
  }
  if (local_2c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_00013404 @ 00013404 size=140 ===== */

void FUN_00013404(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 local_14;
  undefined2 local_10;
  undefined1 local_e;
  int local_c;
  
  piVar1 = *(int **)(DAT_00013490 + 0x13418 + DAT_00013494);
  local_14 = *param_3;
  local_c = *piVar1;
  local_10 = *(undefined2 *)(param_3 + 1);
  local_e = *(undefined1 *)((int)param_3 + 6);
  FUN_0001b4ec(param_1,0x1d,param_2,7,&local_14,DAT_00013498 + 0x13460,0,0);
  if (local_c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_0001349c @ 0001349c size=456 ===== */

void FUN_0001349c(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  char *pcVar1;
  size_t sVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 local_48;
  undefined2 local_44;
  undefined1 local_42;
  char cStack_41;
  uint local_40;
  undefined1 local_3c;
  undefined1 auStack_38 [20];
  int local_24;
  
  iVar3 = DAT_00013664 + 0x134bc;
  piVar4 = *(int **)(iVar3 + DAT_00013668);
  local_24 = *piVar4;
  if (param_2 == 0xc) {
    FUN_0001ba0c(param_3,auStack_38);
    uVar5 = param_3[2];
    if (*(char *)(DAT_00013674 + 0x13520) != '\0') {
      printf((char *)(DAT_00013678 + 0x13548),param_1,auStack_38,uVar5,
             (uint)*(byte *)((int)param_3 + 7));
    }
    if (*(char *)((int)param_3 + 7) == '\0') {
      printf((char *)(DAT_00013688 + 0x135d8),uVar5,auStack_38);
    }
    else {
      printf((char *)(DAT_0001367c + 0x13564),auStack_38);
    }
    fflush((FILE *)**(undefined4 **)(iVar3 + DAT_00013680));
    local_40 = 0;
    local_3c = 0;
    pcVar1 = fgets((char *)&local_40,5,(FILE *)**(undefined4 **)(iVar3 + DAT_00013684));
    if ((pcVar1 != (char *)0x0) && ((char)local_40 != '\n')) {
      sVar2 = strlen((char *)&local_40);
      if ((&cStack_41)[sVar2] == '\n') {
        (&cStack_41)[sVar2] = '\0';
      }
      if ((local_40 & 0xdf) == 0x59) {
        local_42 = *(undefined1 *)((int)param_3 + 6);
        local_48 = *param_3;
        local_44 = *(undefined2 *)(param_3 + 1);
        FUN_0001b4ec(param_4,0x1c,param_1,7,&local_48,DAT_0001368c + 0x13640,0,0);
        goto LAB_000134e4;
      }
    }
    FUN_00013404(param_4,param_1,param_3);
  }
  else {
    fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_0001366c),(char *)(DAT_00013670 + 0x134e0),param_2
           );
  }
LAB_000134e4:
  if (local_24 != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_00013768 @ 00013768 size=368 ===== */

void FUN_00013768(uint param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  FILE *__stream;
  int iVar3;
  int *piVar4;
  undefined1 auStack_30 [20];
  int local_1c;
  
  iVar3 = DAT_000138d8 + 0x13784;
  piVar4 = *(int **)(iVar3 + DAT_000138dc);
  local_1c = *piVar4;
  if (param_2 == 0 && param_1 != 0) {
    if (param_1 < 0x13) {
      iVar2 = *(int *)(DAT_000138e4 + param_1 * 4 + 0x13800);
    }
    else {
      iVar2 = DAT_000138ec + 0x137fc;
    }
    fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_000138e0),(char *)(DAT_000138e8 + 0x137d8),param_1
            ,iVar2);
  }
  else if (param_2 < 10) {
    fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_000138e0),(char *)(DAT_000138f0 + 0x13820));
  }
  else {
    FUN_0001ba0c(param_3,auStack_30,param_2);
    if (param_1 == 0) {
      uVar1 = FUN_00013020(*(undefined1 *)(param_3 + 6));
      printf((char *)(DAT_00013900 + 0x138b4),auStack_30,uVar1);
      printf((char *)(DAT_00013904 + 0x138cc),(int)*(char *)(param_3 + 7),
             (int)*(char *)(param_3 + 8),(int)*(char *)(param_3 + 9));
    }
    else {
      __stream = (FILE *)**(undefined4 **)(iVar3 + DAT_000138e0);
      uVar1 = FUN_00013020(*(undefined1 *)(param_3 + 6));
      if (param_1 < 0x13) {
        iVar3 = *(int *)(DAT_000138f4 + param_1 * 4 + 0x138a8);
      }
      else {
        iVar3 = DAT_000138fc + 0x1389c;
      }
      fprintf(__stream,(char *)(DAT_000138f8 + 0x1388c),auStack_30,uVar1,param_1,iVar3);
    }
  }
  FUN_000199e4();
  if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_00013e94 @ 00013e94 size=484 ===== */

void FUN_00013e94(uint param_1,undefined4 param_2,uint param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FILE *__stream;
  int *piVar5;
  undefined1 auStack_38 [20];
  int local_24;
  
  iVar4 = DAT_00014078 + 0x13eb4;
  piVar5 = *(int **)(iVar4 + DAT_0001407c);
  local_24 = *piVar5;
  if (param_4 == 0 && param_3 != 0) {
    if (param_1 < 0x3a) {
      iVar2 = *(int *)(DAT_00014084 + param_1 * 4 + 0x13f80);
    }
    else {
      iVar2 = DAT_00014090 + 0x13f4c;
    }
    if (param_3 < 0x13) {
      iVar3 = *(int *)(DAT_00014088 + param_3 * 4 + 0x13f4c);
    }
    else {
      iVar3 = DAT_00014094 + 0x13f58;
    }
    fprintf((FILE *)**(undefined4 **)(iVar4 + DAT_00014080),(char *)(DAT_0001408c + 0x13f28),iVar2,
            param_3,iVar3);
  }
  else if (param_4 == 7) {
    FUN_0001ba0c(param_5,auStack_38);
    if (param_3 == 0) {
      if (param_1 < 0x3a) {
        iVar4 = *(int *)(DAT_000140b8 + param_1 * 4 + 0x140d4);
      }
      else {
        iVar4 = DAT_000140c0 + 0x14070;
      }
      printf((char *)(DAT_000140bc + 0x14060),iVar4,auStack_38);
    }
    else {
      __stream = (FILE *)**(undefined4 **)(iVar4 + DAT_00014080);
      if (param_1 < 0x3a) {
        iVar4 = *(int *)(DAT_000140a4 + param_1 * 4 + 0x14060);
      }
      else {
        iVar4 = DAT_000140b0 + 0x1402c;
      }
      uVar1 = FUN_00013020(*(undefined1 *)(param_5 + 6));
      if (param_3 < 0x13) {
        iVar2 = *(int *)(DAT_000140a8 + param_3 * 4 + 0x14034);
      }
      else {
        iVar2 = DAT_000140b4 + 0x14038;
      }
      fprintf(__stream,(char *)(DAT_000140ac + 0x14018),iVar4,auStack_38,uVar1,param_3,iVar2);
    }
  }
  else {
    if (param_1 < 0x3a) {
      iVar2 = *(int *)(DAT_00014098 + param_1 * 4 + 0x14008);
    }
    else {
      iVar2 = DAT_000140a0 + 0x13fa0;
    }
    fprintf((FILE *)**(undefined4 **)(iVar4 + DAT_00014080),(char *)(DAT_0001409c + 0x13f90),iVar2);
  }
  FUN_000199e4();
  if (local_24 != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_000140c4 @ 000140c4 size=316 ===== */

void FUN_000140c4(uint param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_30 [20];
  int local_1c;
  
  iVar2 = DAT_00014200 + 0x140e0;
  piVar3 = *(int **)(iVar2 + DAT_00014204);
  local_1c = *piVar3;
  if (param_2 == 0 && param_1 != 0) {
    if (param_1 < 0x13) {
      iVar1 = *(int *)(DAT_0001420c + param_1 * 4 + 0x1415c);
    }
    else {
      iVar1 = DAT_00014214 + 0x14158;
    }
    fprintf((FILE *)**(undefined4 **)(iVar2 + DAT_00014208),(char *)(DAT_00014210 + 0x14134),param_1
            ,iVar1);
  }
  else if (param_2 == 7) {
    FUN_0001ba0c(param_3,auStack_30);
    if (param_1 == 0) {
      printf((char *)(DAT_00014228 + 0x141f4),auStack_30);
    }
    else {
      if (param_1 < 0x13) {
        iVar1 = *(int *)(DAT_0001421c + param_1 * 4 + 0x141f4);
      }
      else {
        iVar1 = DAT_00014224 + 0x141e4;
      }
      fprintf((FILE *)**(undefined4 **)(iVar2 + DAT_00014208),(char *)(DAT_00014220 + 0x141d4),
              auStack_30,param_1,iVar1);
    }
  }
  else {
    fprintf((FILE *)**(undefined4 **)(iVar2 + DAT_00014208),(char *)(DAT_00014218 + 0x14178),param_2
           );
  }
  FUN_000199e4();
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_0001422c @ 0001422c size=336 ===== */

void FUN_0001422c(uint param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  FILE *__stream;
  int *piVar4;
  undefined1 auStack_30 [20];
  int local_1c;
  
  iVar3 = DAT_0001437c + 0x14248;
  piVar4 = *(int **)(iVar3 + DAT_00014380);
  local_1c = *piVar4;
  if (param_2 == 0 && param_1 != 0) {
    if (param_1 < 0x13) {
      iVar2 = *(int *)(DAT_00014388 + param_1 * 4 + 0x142c4);
    }
    else {
      iVar2 = DAT_00014390 + 0x142c0;
    }
    fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_00014384),(char *)(DAT_0001438c + 0x1429c),param_1
            ,iVar2);
  }
  else if (param_2 == 7) {
    FUN_0001ba0c(param_3,auStack_30);
    if (param_1 == 0) {
      printf((char *)(DAT_000143a4 + 0x14370),auStack_30);
    }
    else {
      __stream = (FILE *)**(undefined4 **)(iVar3 + DAT_00014384);
      uVar1 = FUN_00013020(*(undefined1 *)(param_3 + 6));
      if (param_1 < 0x13) {
        iVar3 = *(int *)(DAT_00014398 + param_1 * 4 + 0x1436c);
      }
      else {
        iVar3 = DAT_000143a0 + 0x14360;
      }
      fprintf(__stream,(char *)(DAT_0001439c + 0x14350),auStack_30,uVar1,param_1,iVar3);
    }
  }
  else {
    fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_00014384),(char *)(DAT_00014394 + 0x142e0),param_2
           );
  }
  FUN_000199e4();
  if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_000143a8 @ 000143a8 size=344 ===== */

void FUN_000143a8(uint param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  FILE *__stream;
  int *piVar4;
  undefined1 auStack_30 [20];
  int local_1c;
  
  iVar3 = DAT_00014500 + 0x143c4;
  piVar4 = *(int **)(iVar3 + DAT_00014504);
  local_1c = *piVar4;
  if (param_2 == 0 && param_1 != 0) {
    if (param_1 < 0x13) {
      iVar2 = *(int *)(DAT_0001450c + param_1 * 4 + 0x14440);
    }
    else {
      iVar2 = DAT_00014514 + 0x1443c;
    }
    fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_00014508),(char *)(DAT_00014510 + 0x14418),param_1
            ,iVar2);
  }
  else if (param_2 == 7) {
    FUN_0001ba0c(param_3,auStack_30);
    if (param_1 == 0) {
      uVar1 = FUN_00013020(*(undefined1 *)(param_3 + 6));
      printf((char *)(DAT_00014528 + 0x144f4),auStack_30,uVar1);
    }
    else {
      __stream = (FILE *)**(undefined4 **)(iVar3 + DAT_00014508);
      uVar1 = FUN_00013020(*(undefined1 *)(param_3 + 6));
      if (param_1 < 0x13) {
        iVar3 = *(int *)(DAT_0001451c + param_1 * 4 + 0x144e8);
      }
      else {
        iVar3 = DAT_00014524 + 0x144dc;
      }
      fprintf(__stream,(char *)(DAT_00014520 + 0x144cc),auStack_30,uVar1,param_1,iVar3);
    }
  }
  else {
    fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_00014508),(char *)(DAT_00014518 + 0x1445c),param_2
           );
  }
  FUN_000199e4();
  if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_0001469c @ 0001469c size=316 ===== */

void FUN_0001469c(uint param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_30 [20];
  int local_1c;
  
  iVar2 = DAT_000147d8 + 0x146b8;
  piVar3 = *(int **)(iVar2 + DAT_000147dc);
  local_1c = *piVar3;
  if (param_2 == 0 && param_1 != 0) {
    if (param_1 < 0x13) {
      iVar1 = *(int *)(DAT_000147e4 + param_1 * 4 + 0x14734);
    }
    else {
      iVar1 = DAT_000147ec + 0x14730;
    }
    fprintf((FILE *)**(undefined4 **)(iVar2 + DAT_000147e0),(char *)(DAT_000147e8 + 0x1470c),param_1
            ,iVar1);
  }
  else if (param_2 == 7) {
    FUN_0001ba0c(param_3,auStack_30);
    if (param_1 == 0) {
      printf((char *)(DAT_000147f4 + 0x14780),auStack_30);
    }
    else {
      if (param_1 < 0x13) {
        iVar1 = *(int *)((int)&DAT_000147e0 + DAT_000147f8 + param_1 * 4);
      }
      else {
        iVar1 = DAT_00014800 + 0x147d0;
      }
      fprintf((FILE *)**(undefined4 **)(iVar2 + DAT_000147e0),(char *)(DAT_000147fc + 0x147c0),
              auStack_30,param_1,iVar1);
    }
  }
  else {
    fprintf((FILE *)**(undefined4 **)(iVar2 + DAT_000147e0),(char *)(DAT_000147f0 + 0x14750),param_2
           );
  }
  FUN_000199e4();
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_00014804 @ 00014804 size=372 ===== */

void FUN_00014804(uint param_1,uint param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_30 [20];
  int local_1c;
  
  iVar1 = DAT_00014980;
  iVar2 = DAT_00014978 + 0x14824;
  piVar3 = *(int **)(iVar2 + DAT_0001497c);
  local_1c = *piVar3;
  *(int *)(DAT_00014980 + 0x14834) = *(int *)(DAT_00014980 + 0x14834) + -1;
  if (param_1 == 0) {
    if (param_2 < 0x118) {
      fprintf((FILE *)**(undefined4 **)(iVar2 + DAT_00014984),(char *)(DAT_00014994 + 0x148b8),
              param_2);
    }
    else {
      FUN_0001ba0c(param_3,auStack_30);
      printf((char *)(DAT_00014998 + 0x148ec),param_4 & 0xffff,auStack_30,
             (uint)*(byte *)(param_3 + 6),(uint)*(ushort *)(param_3 + 7),
             (uint)*(byte *)(param_3 + 0x13),(uint)*(byte *)(param_3 + 0x12),
             (uint)*(byte *)(param_3 + 0x11));
      printf((char *)(DAT_0001499c + 0x14910));
      FUN_00013170(*(undefined4 *)(param_3 + 9));
      printf((char *)(DAT_000149a0 + 0x14924));
      FUN_00013170(*(undefined4 *)(param_3 + 0xd));
      printf((char *)(DAT_000149a4 + 0x1493c),param_3 + 0x14);
      printf((char *)(DAT_000149a8 + 0x14950),param_3 + 0x10d);
      if (0 < *(int *)(iVar1 + 0x14834)) goto LAB_0001495c;
    }
  }
  else {
    if (param_1 < 0x13) {
      iVar1 = *(int *)(DAT_00014988 + param_1 * 4 + 0x148a8);
    }
    else {
      iVar1 = DAT_00014990 + 0x14894;
    }
    fprintf((FILE *)**(undefined4 **)(iVar2 + DAT_00014984),(char *)(DAT_0001498c + 0x14880),
            param_4 & 0xffff,param_1,iVar1);
  }
  FUN_000199e4();
LAB_0001495c:
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_000151d0 @ 000151d0 size=36 ===== */

void FUN_000151d0(void)

{
  puts((char *)(DAT_000151f4 + 0x151e0));
  *(undefined1 *)(DAT_000151f8 + 0x151f0) = 1;
  return;
}



/* ===== FUN_000151fc @ 000151fc size=124 ===== */

void FUN_000151fc(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = DAT_00015280;
  printf((char *)(DAT_0001527c + 0x15214),DAT_00015278 + 0x15210);
  iVar2 = DAT_00015288;
  puts((char *)(DAT_00015284 + 0x15228));
  puts((char *)(DAT_0001528c + 0x15240));
  puts((char *)(DAT_00015290 + 0x1524c));
  piVar3 = (int *)(iVar1 + 0x1541c);
  while( true ) {
    if (*piVar3 == 0) break;
    printf((char *)(iVar2 + 0x1523c),*piVar3,piVar3[2]);
    piVar3 = piVar3 + 3;
  }
  puts((char *)(DAT_00015294 + 0x15268));
  return;
}



/* ===== FUN_00015298 @ 00015298 size=468 ===== */

void FUN_00015298(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  char *pcVar1;
  size_t __n;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  undefined1 local_61;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined2 uStack_48;
  undefined2 local_46;
  undefined2 uStack_44;
  undefined2 uStack_42;
  undefined2 uStack_40;
  int local_3c;
  
  iVar4 = DAT_0001546c + 0x152b4;
  piVar5 = *(int **)(iVar4 + DAT_00015470);
  local_3c = *piVar5;
  if (param_2 == 8) {
    if (*(char *)(DAT_0001547c + 0x15310) != '\0') {
      FUN_0001ba0c(param_3,&local_50);
      printf((char *)(DAT_00015480 + 0x15338),param_1,&local_50);
    }
    uVar2 = 0;
    uVar3 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uVar6 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uVar7 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    printf((char *)(DAT_00015484 + 0x15348));
    fflush((FILE *)**(undefined4 **)(iVar4 + DAT_00015488));
    uStack_48 = (undefined2)uVar6;
    local_46 = (undefined2)uVar2;
    uStack_44 = (undefined2)((uint)uVar2 >> 0x10);
    uStack_42 = (undefined2)uVar3;
    uStack_40 = (undefined2)((uint)uVar3 >> 0x10);
    local_50 = uVar2;
    uStack_4c = uVar3;
    pcVar1 = fgets((char *)&local_50,0x12,(FILE *)**(undefined4 **)(iVar4 + DAT_0001548c));
    local_64 = *(undefined2 *)(param_3 + 1);
    local_62 = *(undefined1 *)((int)param_3 + 6);
    if ((pcVar1 == (char *)0x0) || ((char)local_50 == '\n')) {
      local_68 = *param_3;
      uVar2 = 0x17;
      iVar4 = DAT_00015490 + 0x153d0;
      uVar3 = 7;
    }
    else {
      __n = strlen((char *)&local_50);
      local_68 = *param_3;
      if (*(char *)((int)&uStack_54 + __n + 3) == '\n') {
        *(undefined1 *)((int)&uStack_54 + __n + 3) = 0;
        __n = __n - 1;
      }
      local_61 = (undefined1)__n;
      local_60 = uVar2;
      uStack_5c = uVar3;
      uStack_58 = uVar6;
      uStack_54 = uVar7;
      memcpy(&local_60,&local_50,__n);
      uVar2 = 0x16;
      iVar4 = DAT_00015494 + 0x15458;
      uVar3 = 0x18;
    }
    FUN_0001b4ec(param_4,uVar2,param_1,uVar3,&local_68,iVar4,0,0);
  }
  else {
    fprintf((FILE *)**(undefined4 **)(iVar4 + DAT_00015474),(char *)(DAT_00015478 + 0x152e0),param_2
           );
  }
  if (local_3c == *piVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ===== FUN_00015498 @ 00015498 size=628 ===== */

void FUN_00015498(undefined4 param_1,uint param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  char *__ptr;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  byte *pbVar9;
  undefined4 local_40;
  undefined2 local_3c;
  ushort local_3a;
  undefined1 auStack_38 [20];
  int local_24;
  
  iVar4 = DAT_0001570c + 0x154b8;
  piVar7 = *(int **)(iVar4 + DAT_00015710);
  local_24 = *piVar7;
  if (param_2 < 0xe) {
    fprintf((FILE *)**(undefined4 **)(iVar4 + DAT_00015714),(char *)(DAT_00015718 + 0x154e4),param_2
           );
  }
  else {
    uVar6 = (uint)*(ushort *)(param_3 + 3);
    if (param_2 == uVar6 + 0xe) {
      if ((*(char *)(DAT_00015720 + 0x15538) != '\0') || (*(char *)(DAT_00015720 + 0x15540) != '\0')
         ) {
        uVar8 = param_3[2];
        FUN_0001ba0c(param_3,auStack_38);
        uVar1 = FUN_00013020(*(undefined1 *)((int)param_3 + 6));
        pbVar9 = (byte *)((int)param_3 + 0xe);
        printf((char *)(DAT_00015724 + 0x15590),param_1,auStack_38,uVar1,
               (int)*(char *)((int)param_3 + 7),uVar8);
        if (*(char *)((int)param_3 + 6) != '\0') {
          if (1 < uVar6) {
            uVar5 = 0;
            pbVar3 = pbVar9;
            do {
              uVar2 = 0;
              if (*pbVar3 == 0) goto LAB_000155e0;
              iVar4 = *pbVar3 + 1;
              uVar5 = uVar5 + iVar4 & 0xff;
              if (uVar6 < uVar5) break;
              if (pbVar3[1] == 1) {
                uVar2 = (uint)pbVar3[2];
                goto LAB_000155e0;
              }
              pbVar3 = pbVar3 + iVar4;
            } while ((int)uVar5 < (int)(uVar6 - 1));
          }
          uVar2 = 0;
LAB_000155e0:
          printf((char *)(DAT_00015728 + 0x155ec),uVar2);
        }
        if (1 < uVar6) {
          uVar5 = 0;
          do {
            uVar2 = (uint)*pbVar9;
            if (uVar2 == 0) break;
            uVar5 = uVar5 + uVar2 + 1 & 0xff;
            if (uVar6 < uVar5) break;
            if (pbVar9[1] - 8 < 2) {
              __ptr = strndup((char *)(pbVar9 + 2),uVar2 - 1);
              if (__ptr != (char *)0x0) {
                printf((char *)(DAT_00015730 + 0x1568c),__ptr);
                goto LAB_0001568c;
              }
              break;
            }
            pbVar9 = pbVar9 + uVar2 + 1;
          } while ((int)uVar5 < (int)(uVar6 - 1));
        }
        __ptr = (char *)0x0;
        printf((char *)(DAT_0001572c + 0x15654),uVar6);
LAB_0001568c:
        free(__ptr);
        if ((*(char *)(DAT_00015734 + 0x156a8) != '\0') && ((uVar8 & 1) != 0)) {
          local_40 = *param_3;
          local_3c = *(undefined2 *)(param_3 + 1);
          local_3a = (ushort)*(byte *)((int)param_3 + 6);
          FUN_0001b4ec(param_4,0x25,param_1,8,&local_40,DAT_00015738 + 0x156e0,0,0);
        }
      }
    }
    else {
      fprintf((FILE *)**(undefined4 **)(iVar4 + DAT_00015714),(char *)(DAT_0001571c + 0x15524),
              uVar6 + 0xe,param_2);
    }
  }
  if (local_24 == *piVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ===== FUN_0001573c @ 0001573c size=344 ===== */

void FUN_0001573c(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 local_30 [3];
  uint local_2d;
  undefined1 uStack_29;
  
  iVar4 = DAT_00015894 + 0x1575c;
  piVar2 = *(int **)(iVar4 + DAT_00015898);
  iVar3 = *piVar2;
  uStack_29 = (undefined1)((uint)iVar3 >> 0x18);
  iVar5 = 0xffff;
  if (param_2 != 0xffff) {
    iVar5 = param_2;
  }
  local_2d = iVar3 << 8;
  if (param_2 == 0xffff) {
    iVar5 = 0;
  }
  iVar6 = DAT_0001589c + 0x15798;
  iVar3 = DAT_000158a0 + 0x1579c;
  local_2d = local_2d | 7;
LAB_000157a0:
  do {
    iVar1 = getopt_long(param_3,param_4,iVar3,iVar6,0);
    if (iVar1 == -1) {
      **(undefined4 **)(iVar4 + DAT_000158a4) = 0;
      local_30[0] = (undefined1)local_2d;
      iVar5 = FUN_0001b420(param_1,0x23,iVar5,1,local_30,DAT_000158a8 + 0x157f4,0,0);
      if (iVar5 != 0) {
        if (CONCAT13(uStack_29,local_2d._1_3_) == *piVar2) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      fputs((char *)(DAT_000158b0 + 0x15820),(FILE *)**(undefined4 **)(iVar4 + DAT_000158ac));
      iVar5 = 1;
LAB_00015870:
                    /* WARNING: Subroutine does not return */
      exit(iVar5);
    }
    if (iVar1 != 0x62) {
      if (iVar1 != 0x6c) {
        puts((char *)(DAT_000158b4 + 0x1586c));
        iVar5 = 0;
        goto LAB_00015870;
      }
      local_2d = local_2d & 0xfffffffe | 6;
      goto LAB_000157a0;
    }
    local_2d = local_2d & 0xfffffff9 | 1;
  } while( true );
}



/* ===== FUN_00015ae4 @ 00015ae4 size=156 ===== */

int FUN_00015ae4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined2 *__ptr;
  int iVar2;
  
  iVar2 = DAT_00015b80 + 0x15b04;
  __ptr = calloc(1,8);
  if (__ptr == (undefined2 *)0x0) {
    iVar2 = 0;
  }
  else {
    __ptr[1] = (short)param_2;
    *(undefined4 *)(__ptr + 2) = param_6;
    iVar1 = DAT_00015b84;
    *__ptr = (short)param_3;
    iVar2 = FUN_0001b420(param_1,param_2,param_3,param_4,param_5,DAT_00015b88 + 0x15b54,__ptr,
                         *(undefined4 *)(iVar2 + iVar1));
    if (iVar2 == 0) {
      free(__ptr);
    }
  }
  return iVar2;
}



/* ===== FUN_00015b8c @ 00015b8c size=312 ===== */

void FUN_00015b8c(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  char *__s1;
  int iVar2;
  int *piVar3;
  undefined1 local_25;
  int local_24;
  
  iVar2 = DAT_00015cc4 + 0x15bac;
  piVar3 = *(int **)(iVar2 + DAT_00015cc8);
  local_24 = *piVar3;
  if (param_4 < 2) {
    puts((char *)(DAT_00015ccc + 0x15bcc));
  }
  else {
    __s1 = *(char **)(param_5 + 4);
    iVar1 = strcasecmp(__s1,(char *)(DAT_00015cd0 + 0x15bec));
    if ((iVar1 == 0) || (iVar1 = strcasecmp(__s1,(char *)(DAT_00015cd4 + 0x15c04)), iVar1 == 0)) {
      local_25 = 1;
    }
    else {
      iVar1 = strcasecmp(__s1,(char *)(DAT_00015ce8 + 0x15c8c));
      local_25 = 0;
      if (iVar1 != 0) {
        iVar1 = atoi(__s1);
        local_25 = (undefined1)iVar1;
      }
    }
    if (param_2 == 0xffff) {
      param_2 = 0;
    }
    iVar1 = FUN_00015ae4(param_1,param_3,param_2,1,&local_25,DAT_00015cd8 + 0x15c2c);
    if (iVar1 != 0) {
      if (local_24 != *piVar3) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    fprintf((FILE *)**(undefined4 **)(iVar2 + DAT_00015ce0),(char *)(DAT_00015ce4 + 0x15c74),
            *(undefined4 *)((int)&DAT_00015ce8 + DAT_00015cdc + param_3 * 4));
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00015e20 @ 00015e20 size=284 ===== */

void FUN_00015e20(undefined4 param_1,int param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  int iVar2;
  char *__s1;
  int iVar3;
  int *piVar4;
  int local_20;
  int local_1c;
  
  iVar3 = DAT_00015f3c + 0x15e3c;
  piVar4 = *(int **)(iVar3 + DAT_00015f40);
  local_1c = *piVar4;
  local_20 = param_3;
  if (param_3 < 2) {
    puts((char *)(DAT_00015f44 + 0x15e54));
  }
  else {
    __s1 = *(char **)(param_4 + 4);
    iVar2 = strcasecmp(__s1,(char *)(DAT_00015f48 + 0x15e74));
    if ((iVar2 == 0) || (iVar2 = strcasecmp(__s1,(char *)(DAT_00015f4c + 0x15e8c)), iVar2 == 0)) {
      local_20 = CONCAT31(local_20._1_3_,1);
    }
    else {
      iVar2 = strcasecmp(__s1,(char *)(DAT_00015f5c + 0x15f04));
      uVar1 = 0;
      if (iVar2 != 0) {
        iVar2 = atoi(__s1);
        uVar1 = (undefined1)iVar2;
      }
      local_20 = CONCAT31(local_20._1_3_,uVar1);
    }
    if (param_2 == 0xffff) {
      param_2 = 0;
    }
    iVar2 = FUN_00015ae4(param_1,0x38,param_2,1,&local_20,DAT_00015f50 + 0x15eb4);
    if (iVar2 != 0) {
      if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    fputs((char *)(DAT_00015f58 + 0x15eec),(FILE *)**(undefined4 **)(iVar3 + DAT_00015f54));
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00015f60 @ 00015f60 size=312 ===== */

void FUN_00015f60(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined1 uVar2;
  char *__s1;
  int iVar3;
  int *piVar4;
  undefined4 uStack_20;
  int local_1c;
  
  iVar3 = DAT_00016098 + 0x15f7c;
  piVar4 = *(int **)(iVar3 + DAT_0001609c);
  local_1c = *piVar4;
  uStack_20 = param_3;
  if (param_3 < 2) {
    puts((char *)(DAT_000160a0 + 0x15f94));
    goto LAB_00015f94;
  }
  __s1 = *(char **)(param_4 + 4);
  iVar1 = strcasecmp(__s1,(char *)(DAT_000160a4 + 0x15fb4));
  if ((iVar1 == 0) || (iVar1 = strcasecmp(__s1,(char *)(DAT_000160a8 + 0x15fcc)), iVar1 == 0)) {
    uVar2 = 1;
LAB_00015fd8:
    uStack_20 = CONCAT13(uVar2,(undefined3)uStack_20);
  }
  else {
    iVar1 = strcasecmp(__s1,(char *)(DAT_000160b8 + 0x16044));
    uVar2 = 0;
    if (iVar1 != 0) {
      iVar1 = strcasecmp(__s1,(char *)(DAT_000160bc + 0x16064));
      if (iVar1 == 0) {
        uVar2 = 2;
        goto LAB_00015fd8;
      }
      iVar1 = atoi(__s1);
      uVar2 = (undefined1)iVar1;
    }
    uStack_20 = CONCAT13(uVar2,(undefined3)uStack_20);
  }
  if (param_2 == 0xffff) {
    param_2 = 0;
  }
  iVar1 = FUN_00015ae4(param_1,0x2d,param_2,1,(int)&uStack_20 + 3,DAT_000160ac + 0x15ff4);
  if (iVar1 != 0) {
    if (local_1c == *piVar4) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  fputs((char *)(DAT_000160b4 + 0x1602c),(FILE *)**(undefined4 **)(iVar3 + DAT_000160b0));
LAB_00015f94:
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_000160c0 @ 000160c0 size=356 ===== */

void FUN_000160c0(undefined4 param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined1 uVar2;
  char *__s1;
  int iVar3;
  int *piVar4;
  undefined1 local_30 [4];
  int local_2c;
  
  iVar3 = DAT_00016224 + 0x160e0;
  piVar4 = *(int **)(iVar3 + DAT_00016228);
  local_2c = *piVar4;
  if (param_3 < 2) {
    printf((char *)(DAT_0001622c + 0x160fc),*param_4);
    goto LAB_000160fc;
  }
  __s1 = (char *)param_4[1];
  local_30._0_3_ = 0;
  iVar1 = strcasecmp(__s1,(char *)(DAT_00016230 + 0x16124));
  if ((iVar1 == 0) || (iVar1 = strcasecmp(__s1,(char *)(DAT_00016234 + 0x1614c)), iVar1 == 0)) {
    uVar2 = 1;
LAB_00016158:
    local_30[0] = uVar2;
  }
  else {
    iVar1 = strcasecmp(__s1,(char *)(DAT_00016244 + 0x161d4));
    if (iVar1 != 0) {
      iVar1 = strcasecmp(__s1,(char *)(DAT_00016248 + 0x161ec));
      if (iVar1 == 0) {
        uVar2 = 2;
        goto LAB_00016158;
      }
      iVar1 = atoi(__s1);
      local_30[0] = (char)iVar1;
    }
  }
  if (param_3 != 2) {
    iVar1 = atoi((char *)param_4[2]);
    local_30._1_2_ = (short)iVar1;
  }
  if (param_2 == 0xffff) {
    param_2 = 0;
  }
  iVar1 = FUN_00015ae4(param_1,6,param_2,3,local_30,DAT_00016238 + 0x16188);
  if (iVar1 != 0) {
    if (local_2c == *piVar4) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  fputs((char *)(DAT_00016240 + 0x161bc),(FILE *)**(undefined4 **)(iVar3 + DAT_0001623c));
LAB_000160fc:
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_0001624c @ 0001624c size=60 ===== */

void FUN_0001624c(undefined4 *param_1,char *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*param_2 == '\x19') {
    FUN_00020c98();
    return;
  }
  if (*param_2 == '\x1a') {
    FUN_00020d08();
    return;
  }
  uVar1 = *(undefined4 *)(param_2 + 4);
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0xc);
  *param_1 = *(undefined4 *)param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = *(undefined4 *)(param_2 + 0x10);
  return;
}



/* ===== FUN_00016288 @ 00016288 size=308 ===== */

void FUN_00016288(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  int iStack_5c;
  uint uStack_58;
  int iStack_54;
  undefined1 uStack_50;
  undefined1 auStack_4c [20];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [16];
  int local_24;
  
  iVar3 = DAT_000163bc + 0x162a8;
  piVar4 = *(int **)(iVar3 + DAT_000163c0);
  local_24 = *piVar4;
  if (param_3 < 3) {
    puts((char *)(DAT_000163c4 + 0x162c0));
  }
  else {
    if (param_2 == 0xffff) {
      param_2 = 0;
    }
    iVar1 = FUN_00019654(auStack_4c,*(undefined4 *)(param_4 + 4));
    if (iVar1 < 0) {
      printf((char *)(DAT_000163c8 + 0x16304),*(undefined4 *)(param_4 + 4));
    }
    else {
      iStack_5c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      local_60 = 0;
      uStack_58 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8) & 0xff;
      iStack_54 = iStack_5c << 8;
      uStack_50 = (undefined1)((uint)iStack_5c >> 0x18);
      FUN_0001624c(auStack_38,auStack_4c);
      iVar1 = 0xf;
      puVar2 = auStack_34;
      do {
        *(undefined1 *)((int)&local_70 + iVar1) = *puVar2;
        bVar5 = iVar1 != 0;
        iVar1 = iVar1 + -1;
        puVar2 = puVar2 + 1;
      } while (bVar5);
      local_60 = local_70;
      iStack_5c = uStack_6c;
      uStack_58 = uStack_68;
      iStack_54 = uStack_64;
      iVar1 = atoi(*(char **)(param_4 + 8));
      uStack_50 = (undefined1)iVar1;
      iVar1 = FUN_00015ae4(param_1,0x10,param_2,0x11,&local_60,DAT_000163cc + 0x1636c);
      if (iVar1 != 0) {
        if (local_24 != *piVar4) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      fputs((char *)(DAT_000163d4 + 0x16398),(FILE *)**(undefined4 **)(iVar3 + DAT_000163d0));
    }
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_000163d8 @ 000163d8 size=268 ===== */

void FUN_000163d8(undefined4 param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char acStack_128 [249];
  char acStack_2f [11];
  int local_24;
  
  iVar2 = DAT_000164e4 + 0x163f8;
  piVar3 = *(int **)(iVar2 + DAT_000164e8);
  local_24 = *piVar3;
  if (param_3 < 2) {
    printf((char *)(DAT_000164ec + 0x16414),*param_4);
  }
  else {
    if (param_2 == 0xffff) {
      param_2 = 0;
    }
    memset(acStack_128,0,0x104);
    strncpy(acStack_128,(char *)param_4[1],0xf8);
    if (param_3 != 2) {
      strncpy(acStack_2f,(char *)param_4[2],0xb);
    }
    iVar1 = FUN_0001b420(param_1,0xf,param_2,0x104,acStack_128,DAT_000164f0 + 0x1649c,0,0);
    if (iVar1 != 0) {
      if (local_24 != *piVar3) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    fputs((char *)(DAT_000164f8 + 0x164c0),(FILE *)**(undefined4 **)(iVar2 + DAT_000164f4));
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_000164fc @ 000164fc size=424 ===== */

void FUN_000164fc(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  ssize_t sVar2;
  int iVar3;
  FILE *__stream;
  char *pcVar4;
  int *piVar5;
  undefined1 local_30;
  undefined1 auStack_2f [19];
  int local_1c;
  
  iVar3 = DAT_000166a4 + 0x1651c;
  piVar5 = *(int **)(iVar3 + DAT_000166a8);
  local_1c = *piVar5;
  if (param_3 < 2) {
    puts((char *)(DAT_000166ac + 0x16534));
  }
  else {
    pcVar4 = *(char **)(param_4 + 4);
    iVar1 = strcasecmp(pcVar4,(char *)(DAT_000166b0 + 0x16554));
    if ((iVar1 == 0) || (iVar1 = strcasecmp(pcVar4,(char *)(DAT_000166b4 + 0x1656c)), iVar1 == 0)) {
      local_30 = 1;
    }
    else {
      iVar1 = strcasecmp(pcVar4,(char *)(DAT_000166c4 + 0x165e0));
      local_30 = 0;
      if (iVar1 != 0) {
        iVar1 = atoi(pcVar4);
        local_30 = (undefined1)iVar1;
      }
    }
    if (param_2 == 0xffff) {
      param_2 = 0;
    }
    iVar1 = open64((char *)(DAT_000166b8 + 0x16594),0);
    if (iVar1 < 0) {
      __stream = (FILE *)**(undefined4 **)(iVar3 + DAT_000166bc);
      piVar5 = __errno_location();
      pcVar4 = strerror(*piVar5);
      fprintf(__stream,(char *)(DAT_000166c0 + 0x165cc),pcVar4);
    }
    else {
      sVar2 = read(iVar1,auStack_2f,0x10);
      if (sVar2 == 0x10) {
        close(iVar1);
        iVar1 = FUN_00015ae4(param_1,0x2f,param_2,0x11,&local_30,DAT_000166cc + 0x16654);
        if (iVar1 != 0) {
          if (local_1c == *piVar5) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        fputs((char *)(DAT_000166d0 + 0x16680),(FILE *)**(undefined4 **)(iVar3 + DAT_000166bc));
      }
      else {
        fputs((char *)(DAT_000166c8 + 0x16624),(FILE *)**(undefined4 **)(iVar3 + DAT_000166bc));
        close(iVar1);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00016974 @ 00016974 size=312 ===== */

void FUN_00016974(uint param_1,uint param_2,undefined4 param_3)

{
  FILE *__stream;
  char *__format;
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_30 [20];
  int local_1c;
  
  iVar2 = DAT_00016aac + 0x16990;
  piVar3 = *(int **)(iVar2 + DAT_00016ab0);
  local_1c = *piVar3;
  if (param_2 == 0 && param_1 != 0) {
    __stream = (FILE *)**(undefined4 **)(iVar2 + DAT_00016ab4);
    if (param_1 < 0x13) {
      iVar1 = *(int *)(DAT_00016ab8 + param_1 * 4 + 0x16a0c);
    }
    else {
      iVar1 = DAT_00016ac0 + 0x16a04;
    }
    __format = (char *)(DAT_00016abc + 0x169e4);
    param_2 = param_1;
  }
  else {
    if (param_2 == 7) {
      FUN_0001ba0c(param_3,auStack_30);
      if (param_1 == 0) {
        printf((char *)(DAT_00016ad4 + 0x16aa0),auStack_30);
      }
      else {
        if (param_1 < 0x13) {
          iVar1 = *(int *)(DAT_00016ac8 + param_1 * 4 + 0x16aa0);
        }
        else {
          iVar1 = DAT_00016ad0 + 0x16a90;
        }
        fprintf((FILE *)**(undefined4 **)(iVar2 + DAT_00016ab4),(char *)(DAT_00016acc + 0x16a80),
                auStack_30,param_1,iVar1);
      }
      goto LAB_000169e4;
    }
    iVar1 = 7;
    __format = (char *)(DAT_00016ac4 + 0x16a28);
    __stream = (FILE *)**(undefined4 **)(iVar2 + DAT_00016ab4);
  }
  fprintf(__stream,__format,param_2,iVar1);
LAB_000169e4:
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_00016d9c @ 00016d9c size=232 ===== */

void FUN_00016d9c(undefined4 param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  undefined1 auStack_30 [20];
  int local_1c;
  
  iVar1 = DAT_00016e84 + 0x16dbc;
  piVar4 = *(int **)(iVar1 + DAT_00016e88);
  local_1c = *piVar4;
  if (param_2 < 0xd) {
    fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_00016e8c),(char *)(DAT_00016e90 + 0x16de0),param_2
           );
  }
  else {
    uVar3 = (uint)*(ushort *)(param_3 + 0xb);
    if (param_2 == uVar3 + 0xd) {
      if (*(char *)(DAT_00016e98 + 0x16e3c) != '\0') {
        FUN_0001ba0c(param_3,auStack_30);
        uVar2 = FUN_00013020(*(undefined1 *)(param_3 + 6));
        printf((char *)(DAT_00016e9c + 0x16e78),param_1,auStack_30,uVar2,uVar3);
      }
    }
    else {
      fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_00016e8c),(char *)(DAT_00016e94 + 0x16e28),
              param_2,uVar3);
    }
  }
  if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_00017488 @ 00017488 size=204 ===== */

void FUN_00017488(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_24;
  undefined3 uStack_20;
  int local_1c;
  
  iVar1 = DAT_00017554 + 0x174a8;
  piVar3 = *(int **)(iVar1 + DAT_00017558);
  iVar2 = 0xffff;
  if (param_2 != 0xffff) {
    iVar2 = param_2;
  }
  local_1c = *piVar3;
  if (param_2 == 0xffff) {
    iVar2 = 0;
  }
  local_24 = 0;
  uStack_20 = 0;
  if (1 < param_3) {
    FUN_0001bb20(*(undefined4 *)(param_4 + 4),&local_24);
  }
  iVar2 = FUN_0001b420(param_1,0x32,iVar2,7,&local_24,DAT_0001755c + 0x17508,0,0);
  if (iVar2 == 0) {
    fputs((char *)(DAT_00017564 + 0x1752c),(FILE *)**(undefined4 **)(iVar1 + DAT_00017560));
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_00017568 @ 00017568 size=240 ===== */

void FUN_00017568(undefined4 param_1,int param_2,int param_3,int param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined2 local_20;
  undefined2 local_1e;
  int local_1c;
  
  iVar3 = DAT_00017658 + 0x17588;
  piVar4 = *(int **)(iVar3 + DAT_0001765c);
  local_1c = *piVar4;
  if (param_3 < 3) {
    puts((char *)(DAT_00017660 + 0x175a0));
  }
  else {
    if (param_2 == 0xffff) {
      param_2 = 0;
    }
    lVar1 = strtol(*(char **)(param_4 + 4),(char **)0x0,0);
    local_20 = (undefined2)lVar1;
    lVar1 = strtol(*(char **)(param_4 + 8),(char **)0x0,0);
    local_1e = (undefined2)lVar1;
    iVar2 = FUN_0001b420(param_1,0x2c,param_2,4,&local_20,DAT_00017664 + 0x17608,0,0);
    if (iVar2 != 0) {
      if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    fputs((char *)(DAT_0001766c + 0x17634),(FILE *)**(undefined4 **)(iVar3 + DAT_00017668));
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00017670 @ 00017670 size=216 ===== */

void FUN_00017670(undefined4 param_1,int param_2,int param_3,int param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined1 local_20 [4];
  int local_1c;
  
  iVar3 = DAT_00017748 + 0x17690;
  piVar4 = *(int **)(iVar3 + DAT_0001774c);
  local_1c = *piVar4;
  if (param_3 < 2) {
    puts((char *)(DAT_00017750 + 0x176a8));
  }
  else {
    if (param_2 == 0xffff) {
      param_2 = 0;
    }
    lVar1 = strtol(*(char **)(param_4 + 4),(char **)0x0,0);
    local_20[0] = (undefined1)lVar1;
    iVar2 = FUN_0001b420(param_1,0x18,param_2,1,local_20,DAT_00017754 + 0x176f8,0,0);
    if (iVar2 != 0) {
      if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    fputs((char *)(DAT_0001775c + 0x17724),(FILE *)**(undefined4 **)(iVar3 + DAT_00017758));
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00017760 @ 00017760 size=208 ===== */

void FUN_00017760(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_24 [8];
  int local_1c;
  
  iVar2 = DAT_00017830 + 0x17780;
  piVar3 = *(int **)(iVar2 + DAT_00017834);
  local_1c = *piVar3;
  if (param_3 < 2) {
    puts((char *)(DAT_00017838 + 0x17798));
  }
  else {
    if (param_2 == 0xffff) {
      param_2 = 0;
    }
    FUN_0001bb20(*(undefined4 *)(param_4 + 4),auStack_24);
    iVar1 = FUN_0001b420(param_1,0x2b,param_2,6,auStack_24,DAT_0001783c + 0x177e8,0,0);
    if (iVar1 != 0) {
      if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    fputs((char *)(DAT_00017844 + 0x1780c),(FILE *)**(undefined4 **)(iVar2 + DAT_00017840));
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00017848 @ 00017848 size=112 ===== */

void FUN_00017848(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_000178bc;
  if (param_2 == 0xffff) {
    param_2 = 0;
  }
  iVar2 = FUN_0001b420(param_1,0x20,param_2,0,0,DAT_000178b8 + 0x17860,0,0);
  if (iVar2 == 0) {
    fputs((char *)(DAT_000178c4 + 0x178a4),(FILE *)**(undefined4 **)(iVar1 + 0x1788c + DAT_000178c0)
         );
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}



/* ===== FUN_000178c8 @ 000178c8 size=164 ===== */

void FUN_000178c8(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined2 local_18 [2];
  int local_14;
  
  iVar2 = DAT_0001796c + 0x178e4;
  piVar3 = *(int **)(iVar2 + DAT_00017970);
  if (param_2 == 0xffff) {
    param_2 = 0;
  }
  local_14 = *piVar3;
  local_18[0] = 0;
  iVar1 = FUN_0001b420(param_1,0x30,param_2,2,local_18,DAT_00017974 + 0x17918,0,0);
  if (iVar1 == 0) {
    fputs((char *)(DAT_0001797c + 0x17944),(FILE *)**(undefined4 **)(iVar2 + DAT_00017978));
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  if (local_14 != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_00017980 @ 00017980 size=164 ===== */

void FUN_00017980(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined2 local_18 [2];
  int local_14;
  
  iVar2 = DAT_00017a24 + 0x1799c;
  piVar3 = *(int **)(iVar2 + DAT_00017a28);
  if (param_2 == 0xffff) {
    param_2 = 0;
  }
  local_14 = *piVar3;
  local_18[0] = 0;
  iVar1 = FUN_0001b420(param_1,0x13,param_2,2,local_18,DAT_00017a2c + 0x179d0,0,0);
  if (iVar1 == 0) {
    fputs((char *)(DAT_00017a34 + 0x179fc),(FILE *)**(undefined4 **)(iVar2 + DAT_00017a30));
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  if (local_14 != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_00017a38 @ 00017a38 size=168 ===== */

void FUN_00017a38(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined2 local_18;
  undefined1 local_16;
  int local_14;
  
  iVar2 = DAT_00017ae0 + 0x17a54;
  piVar3 = *(int **)(iVar2 + DAT_00017ae4);
  local_18 = 0;
  local_14 = *piVar3;
  local_16 = 0;
  if (param_2 == 0xffff) {
    param_2 = 0;
  }
  iVar1 = FUN_0001b420(param_1,0x12,param_2,3,&local_18,DAT_00017ae8 + 0x17a7c,0,0);
  if (iVar1 == 0) {
    fputs((char *)(DAT_00017af0 + 0x17ab8),(FILE *)**(undefined4 **)(iVar2 + DAT_00017aec));
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  if (local_14 != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_00017af4 @ 00017af4 size=112 ===== */

void FUN_00017af4(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_00017b68;
  if (param_2 == 0xffff) {
    param_2 = 0;
  }
  iVar2 = FUN_0001b420(param_1,0x15,param_2,0,0,DAT_00017b64 + 0x17b0c,0,0);
  if (iVar2 == 0) {
    fputs((char *)(DAT_00017b70 + 0x17b50),(FILE *)**(undefined4 **)(iVar1 + 0x17b38 + DAT_00017b6c)
         );
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}



/* ===== FUN_00017b74 @ 00017b74 size=172 ===== */

void FUN_00017b74(undefined4 param_1,int param_2)

{
  int iVar1;
  char *__s;
  FILE *__stream;
  int iVar2;
  
  iVar2 = DAT_00017c20 + 0x17b94;
  if (param_2 == 0xffff) {
    iVar1 = FUN_0001b420(param_1,3,0xffff,0,0,DAT_00017c24 + 0x17ba4,param_1,0);
    if (iVar1 != 0) {
      return;
    }
    __s = (char *)(DAT_00017c2c + 0x17bd0);
    __stream = (FILE *)**(undefined4 **)(iVar2 + DAT_00017c28);
  }
  else {
    iVar1 = FUN_0001b420(param_1,4,param_2,0,0,DAT_00017c30 + 0x17bec,param_2,0);
    if (iVar1 != 0) {
      return;
    }
    __s = (char *)(DAT_00017c34 + 0x17c14);
    __stream = (FILE *)**(undefined4 **)(iVar2 + DAT_00017c28);
  }
  fputs(__s,__stream);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00017c38 @ 00017c38 size=172 ===== */

void FUN_00017c38(undefined4 param_1,int param_2)

{
  int iVar1;
  char *__s;
  FILE *__stream;
  int iVar2;
  
  iVar2 = DAT_00017ce4 + 0x17c58;
  if (param_2 == 0xffff) {
    iVar1 = FUN_0001b420(param_1,0x36,0xffff,0,0,DAT_00017ce8 + 0x17c68,param_1,0);
    if (iVar1 != 0) {
      return;
    }
    __s = (char *)(DAT_00017cf0 + 0x17c94);
    __stream = (FILE *)**(undefined4 **)(iVar2 + DAT_00017cec);
  }
  else {
    iVar1 = FUN_0001b420(param_1,0x37,param_2,0,0,DAT_00017cf4 + 0x17cb0,param_2,0);
    if (iVar1 != 0) {
      return;
    }
    __s = (char *)(DAT_00017cf8 + 0x17cd8);
    __stream = (FILE *)**(undefined4 **)(iVar2 + DAT_00017cec);
  }
  fputs(__s,__stream);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00017cfc @ 00017cfc size=100 ===== */

void FUN_00017cfc(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_00017d64;
  iVar2 = FUN_0001b420(param_1,2,0xffff,0,0,DAT_00017d60 + 0x17d18,0,0);
  if (iVar2 == 0) {
    fputs((char *)(DAT_00017d6c + 0x17d4c),(FILE *)**(undefined4 **)(iVar1 + 0x17d38 + DAT_00017d68)
         );
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}



/* ===== FUN_00017d70 @ 00017d70 size=100 ===== */

void FUN_00017d70(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_00017dd8;
  iVar2 = FUN_0001b420(param_1,1,0xffff,0,0,DAT_00017dd4 + 0x17d8c,0,0);
  if (iVar2 == 0) {
    fputs((char *)(DAT_00017de0 + 0x17dc0),(FILE *)**(undefined4 **)(iVar1 + 0x17dac + DAT_00017ddc)
         );
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}



/* ===== FUN_00017de4 @ 00017de4 size=196 ===== */

void FUN_00017de4(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_24 [8];
  int local_1c;
  
  iVar2 = DAT_00017ea8 + 0x17e04;
  piVar3 = *(int **)(iVar2 + DAT_00017eac);
  local_1c = *piVar3;
  if (param_3 < 2) {
    puts((char *)(DAT_00017eb0 + 0x17e1c));
  }
  else {
    if (param_2 == 0xffff) {
      param_2 = 0;
    }
    FUN_0001bb20(*(undefined4 *)(param_4 + 4),auStack_24);
    iVar1 = FUN_00015ae4(param_1,0x39,param_2,6,auStack_24,DAT_00017eb4 + 0x17e5c);
    if (iVar1 != 0) {
      if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    fputs((char *)(DAT_00017ebc + 0x17e84),(FILE *)**(undefined4 **)(iVar2 + DAT_00017eb8));
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00017ec0 @ 00017ec0 size=212 ===== */

void FUN_00017ec0(undefined4 param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_20;
  int local_1c;
  
  iVar3 = DAT_00017f94 + 0x17edc;
  piVar4 = *(int **)(iVar3 + DAT_00017f98);
  local_1c = *piVar4;
  local_20 = param_3;
  if (param_3 < 3) {
    printf((char *)(DAT_00017f9c + 0x17ef8),*param_4,param_3,local_1c,param_1,param_2);
  }
  else {
    iVar1 = atoi((char *)param_4[1]);
    local_20 = CONCAT31(local_20._1_3_,(char)iVar1);
    iVar2 = atoi((char *)param_4[2]);
    iVar1 = 0xffff;
    if (param_2 != 0xffff) {
      iVar1 = param_2;
    }
    local_20._0_2_ = CONCAT11((char)iVar2,(undefined1)local_20);
    if (param_2 == 0xffff) {
      iVar1 = 0;
    }
    iVar1 = FUN_00015ae4(param_1,0xe,iVar1,2,&local_20,DAT_00017fa0 + 0x17f34);
    if (iVar1 != 0) {
      if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    fputs((char *)(DAT_00017fa8 + 0x17f70),(FILE *)**(undefined4 **)(iVar3 + DAT_00017fa4));
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00017fac @ 00017fac size=288 ===== */

void FUN_00017fac(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 auStack_4c [20];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [16];
  int local_24;
  
  iVar3 = DAT_000180cc + 0x17fcc;
  piVar4 = *(int **)(iVar3 + DAT_000180d0);
  local_24 = *piVar4;
  if (param_3 < 2) {
    puts((char *)(DAT_000180d4 + 0x17fe4));
  }
  else {
    if (param_2 == 0xffff) {
      param_2 = 0;
    }
    iVar1 = FUN_00019654(auStack_4c,*(undefined4 *)(param_4 + 4));
    if (iVar1 < 0) {
      printf((char *)(DAT_000180d8 + 0x18028),*(undefined4 *)(param_4 + 4));
    }
    else {
      uStack_68 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_64 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_60 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      local_6c = 0;
      FUN_0001624c(auStack_38,auStack_4c);
      iVar1 = 0xf;
      puVar2 = auStack_34;
      do {
        *(undefined1 *)((int)&local_5c + iVar1) = *puVar2;
        bVar5 = iVar1 != 0;
        iVar1 = iVar1 + -1;
        puVar2 = puVar2 + 1;
      } while (bVar5);
      local_6c = local_5c;
      uStack_68 = uStack_58;
      uStack_64 = uStack_54;
      uStack_60 = uStack_50;
      iVar1 = FUN_00015ae4(param_1,0x11,param_2,0x10,&local_6c,DAT_000180dc + 0x18084);
      if (iVar1 != 0) {
        if (local_24 != *piVar4) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      fputs((char *)(DAT_000180e4 + 0x180a8),(FILE *)**(undefined4 **)(iVar3 + DAT_000180e0));
    }
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_000180e8 @ 000180e8 size=100 ===== */

void FUN_000180e8(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  
  piVar1 = *(int **)(DAT_0001814c + 0x180fc + DAT_00018150);
  local_c = *piVar1;
  local_18 = DAT_00018154 + 0x18114;
  local_14 = DAT_00018158 + 0x18120;
  local_10 = 0;
  FUN_00017fac(param_1,param_2,2,&local_18);
  if (local_c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_0001815c @ 0001815c size=468 ===== */

void FUN_0001815c(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined8 local_48;
  undefined1 auStack_40 [20];
  int local_2c;
  
  uVar7 = 0;
  iVar6 = DAT_00018330 + 0x1817c;
  piVar3 = *(int **)(iVar6 + DAT_00018334);
  uVar8 = 1;
  local_2c = *piVar3;
  iVar4 = DAT_00018338 + 0x181e8;
  iVar5 = DAT_0001833c + 0x181b8;
LAB_000181b8:
  do {
    iVar1 = getopt_long(param_3,param_4,iVar5,iVar4,0);
    if (iVar1 == -1) {
      iVar4 = **(int **)(iVar6 + DAT_00018340);
      **(int **)(iVar6 + DAT_00018340) = 0;
      if (param_3 - iVar4 < 1) {
        puts((char *)(DAT_00018344 + 0x18200));
      }
      else {
        if (param_2 == 0xffff) {
          param_2 = 0;
        }
        local_48 = 0;
        FUN_0001bb20(*(undefined4 *)(param_4 + iVar4 * 4),&local_48);
        local_48 = CONCAT17((char)uVar8,CONCAT16((char)uVar7,(undefined6)local_48));
        FUN_0001ba0c(&local_48,auStack_40);
        uVar2 = FUN_00013020(local_48._6_1_);
        printf((char *)(DAT_00018350 + 0x182bc),auStack_40,uVar2);
        iVar4 = FUN_0001b420(param_1,0x19,param_2,8,&local_48,DAT_00018354 + 0x182e4,0,0);
        if (iVar4 != 0) {
          if (local_2c != *piVar3) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
        fputs((char *)(DAT_0001835c + 0x18308),(FILE *)**(undefined4 **)(iVar6 + DAT_00018358));
      }
      iVar4 = 1;
LAB_00018230:
                    /* WARNING: Subroutine does not return */
      exit(iVar4);
    }
    if (iVar1 != 99) {
      if (iVar1 != 0x74) {
        puts((char *)(DAT_0001834c + 0x1822c));
        iVar4 = 0;
        goto LAB_00018230;
      }
      uVar7 = strtol((char *)**(undefined4 **)(iVar6 + DAT_00018348),(char **)0x0,0);
      uVar7 = uVar7 & 0xff;
      goto LAB_000181b8;
    }
    uVar8 = strtol((char *)**(undefined4 **)(iVar6 + DAT_00018348),(char **)0x0,0);
    uVar8 = uVar8 & 0xff;
  } while( true );
}



/* ===== FUN_00018360 @ 00018360 size=468 ===== */

void FUN_00018360(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined8 local_48;
  undefined1 auStack_40 [20];
  int local_2c;
  
  uVar7 = 0;
  iVar6 = DAT_00018534 + 0x18380;
  piVar3 = *(int **)(iVar6 + DAT_00018538);
  uVar8 = 0;
  local_2c = *piVar3;
  iVar4 = DAT_0001853c + 0x1842c;
  iVar5 = DAT_00018540 + 0x183bc;
LAB_000183bc:
  do {
    iVar1 = getopt_long(param_3,param_4,iVar5,iVar4,0);
    if (iVar1 == -1) {
      iVar4 = **(int **)(iVar6 + DAT_00018544);
      **(int **)(iVar6 + DAT_00018544) = 0;
      if (param_3 - iVar4 < 1) {
        puts((char *)(DAT_00018548 + 0x18404));
      }
      else {
        if (param_2 == 0xffff) {
          param_2 = 0;
        }
        local_48 = 0;
        FUN_0001bb20(*(undefined4 *)(param_4 + iVar4 * 4),&local_48);
        local_48 = CONCAT17((char)uVar8,CONCAT16((char)uVar7,(undefined6)local_48));
        FUN_0001ba0c(&local_48,auStack_40);
        uVar2 = FUN_00013020(local_48._6_1_);
        printf((char *)(DAT_00018554 + 0x184c0),auStack_40,uVar2);
        iVar4 = FUN_0001b420(param_1,0x33,param_2,8,&local_48,DAT_00018558 + 0x184e8,0,0);
        if (iVar4 != 0) {
          if (local_2c != *piVar3) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
        fputs((char *)(DAT_00018560 + 0x1850c),(FILE *)**(undefined4 **)(iVar6 + DAT_0001855c));
      }
      iVar4 = 1;
LAB_00018434:
                    /* WARNING: Subroutine does not return */
      exit(iVar4);
    }
    if (iVar1 != 0x61) {
      if (iVar1 != 0x74) {
        puts((char *)(DAT_00018550 + 0x18430));
        iVar4 = 0;
        goto LAB_00018434;
      }
      uVar7 = strtol((char *)**(undefined4 **)(iVar6 + DAT_0001854c),(char **)0x0,0);
      uVar7 = uVar7 & 0xff;
      goto LAB_000183bc;
    }
    uVar8 = strtol((char *)**(undefined4 **)(iVar6 + DAT_0001854c),(char **)0x0,0);
    uVar8 = uVar8 & 0xff;
  } while( true );
}



/* ===== FUN_00018564 @ 00018564 size=372 ===== */

void FUN_00018564(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 local_34;
  undefined2 uStack_30;
  undefined1 local_2e;
  int local_2c;
  
  uVar5 = 0;
  iVar4 = DAT_000186d8 + 0x18584;
  piVar2 = *(int **)(iVar4 + DAT_000186dc);
  iVar6 = DAT_000186e0 + 0x1865c;
  local_2c = *piVar2;
  iVar3 = DAT_000186e4 + 0x185b8;
  do {
    iVar1 = getopt_long(param_3,param_4,iVar3,iVar6,0);
    if (iVar1 == -1) {
      iVar3 = **(int **)(iVar4 + DAT_000186e8);
      **(int **)(iVar4 + DAT_000186e8) = 0;
      if (param_3 - iVar3 < 1) {
        puts((char *)(DAT_000186ec + 0x18600));
      }
      else {
        if (param_2 == 0xffff) {
          param_2 = 0;
        }
        local_34 = 0;
        uStack_30 = 0;
        local_2e = 0;
        FUN_0001bb20(*(undefined4 *)(param_4 + iVar3 * 4),&local_34);
        local_2e = (undefined1)uVar5;
        iVar3 = FUN_00015ae4(param_1,0x26,param_2,7,&local_34,DAT_000186f8 + 0x18684);
        if (iVar3 != 0) {
          if (local_2c != *piVar2) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
        fputs((char *)(DAT_00018700 + 0x186b0),(FILE *)**(undefined4 **)(iVar4 + DAT_000186fc));
      }
      iVar3 = 1;
LAB_00018640:
                    /* WARNING: Subroutine does not return */
      exit(iVar3);
    }
    if (iVar1 != 0x74) {
      puts((char *)(DAT_000186f4 + 0x1863c));
      iVar3 = 0;
      goto LAB_00018640;
    }
    uVar5 = strtol((char *)**(undefined4 **)(iVar4 + DAT_000186f0),(char **)0x0,0);
    uVar5 = uVar5 & 0xff;
  } while( true );
}



/* ===== FUN_00018704 @ 00018704 size=372 ===== */

void FUN_00018704(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 local_34;
  undefined2 uStack_30;
  undefined1 local_2e;
  int local_2c;
  
  uVar5 = 0;
  iVar4 = DAT_00018878 + 0x18724;
  piVar2 = *(int **)(iVar4 + DAT_0001887c);
  iVar6 = DAT_00018880 + 0x187fc;
  local_2c = *piVar2;
  iVar3 = DAT_00018884 + 0x18758;
  do {
    iVar1 = getopt_long(param_3,param_4,iVar3,iVar6,0);
    if (iVar1 == -1) {
      iVar3 = **(int **)(iVar4 + DAT_00018888);
      **(int **)(iVar4 + DAT_00018888) = 0;
      if (param_3 - iVar3 < 1) {
        puts((char *)(DAT_0001888c + 0x187a0));
      }
      else {
        if (param_2 == 0xffff) {
          param_2 = 0;
        }
        local_34 = 0;
        uStack_30 = 0;
        local_2e = 0;
        FUN_0001bb20(*(undefined4 *)(param_4 + iVar3 * 4),&local_34);
        local_2e = (undefined1)uVar5;
        iVar3 = FUN_00015ae4(param_1,0x27,param_2,7,&local_34,DAT_00018898 + 0x18824);
        if (iVar3 != 0) {
          if (local_2c != *piVar2) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
        fputs((char *)(DAT_000188a0 + 0x18850),(FILE *)**(undefined4 **)(iVar4 + DAT_0001889c));
      }
      iVar3 = 1;
LAB_000187e0:
                    /* WARNING: Subroutine does not return */
      exit(iVar3);
    }
    if (iVar1 != 0x74) {
      puts((char *)(DAT_00018894 + 0x187dc));
      iVar3 = 0;
      goto LAB_000187e0;
    }
    uVar5 = strtol((char *)**(undefined4 **)(iVar4 + DAT_00018890),(char **)0x0,0);
    uVar5 = uVar5 & 0xff;
  } while( true );
}



/* ===== FUN_000188a4 @ 000188a4 size=380 ===== */

void FUN_000188a4(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 local_34;
  undefined2 uStack_30;
  undefined1 local_2e;
  int local_2c;
  
  uVar5 = 0;
  iVar4 = DAT_00018a20 + 0x188c4;
  piVar2 = *(int **)(iVar4 + DAT_00018a24);
  iVar6 = DAT_00018a28 + 0x189cc;
  local_2c = *piVar2;
  iVar3 = DAT_00018a2c + 0x188f8;
  do {
    iVar1 = getopt_long(param_3,param_4,iVar3,iVar6,0);
    if (iVar1 == -1) {
      iVar3 = **(int **)(iVar4 + DAT_00018a30);
      **(int **)(iVar4 + DAT_00018a30) = 0;
      if (param_3 - iVar3 < 1) {
        puts((char *)(DAT_00018a34 + 0x18940));
      }
      else {
        if (param_2 == 0xffff) {
          param_2 = 0;
        }
        local_34 = 0;
        uStack_30 = 0;
        local_2e = 0;
        FUN_0001bb20(*(undefined4 *)(param_4 + iVar3 * 4),&local_34);
        local_2e = (undefined1)uVar5;
        iVar3 = FUN_0001b420(param_1,0x1a,param_2,7,&local_34,DAT_00018a40 + 0x189c4,0,0);
        if (iVar3 != 0) {
          if (local_2c != *piVar2) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
        fputs((char *)(DAT_00018a48 + 0x189f8),(FILE *)**(undefined4 **)(iVar4 + DAT_00018a44));
      }
      iVar3 = 1;
LAB_00018980:
                    /* WARNING: Subroutine does not return */
      exit(iVar3);
    }
    if (iVar1 != 0x74) {
      puts((char *)(DAT_00018a3c + 0x1897c));
      iVar3 = 0;
      goto LAB_00018980;
    }
    uVar5 = strtol((char *)**(undefined4 **)(iVar4 + DAT_00018a38),(char **)0x0,0);
    uVar5 = uVar5 & 0xff;
  } while( true );
}



/* ===== FUN_00018a4c @ 00018a4c size=380 ===== */

void FUN_00018a4c(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 local_34;
  undefined2 uStack_30;
  undefined1 local_2e;
  int local_2c;
  
  uVar5 = 0;
  iVar4 = DAT_00018bc8 + 0x18a6c;
  piVar2 = *(int **)(iVar4 + DAT_00018bcc);
  iVar6 = DAT_00018bd0 + 0x18ba4;
  local_2c = *piVar2;
  iVar3 = DAT_00018bd4 + 0x18aa0;
  do {
    iVar1 = getopt_long(param_3,param_4,iVar3,iVar6,0);
    if (iVar1 == -1) {
      iVar3 = **(int **)(iVar4 + DAT_00018bd8);
      **(int **)(iVar4 + DAT_00018bd8) = 0;
      if (param_3 - iVar3 < 1) {
        puts((char *)(DAT_00018bdc + 0x18ae8));
      }
      else {
        if (param_2 == 0xffff) {
          param_2 = 0;
        }
        local_34 = 0;
        uStack_30 = 0;
        local_2e = 0;
        FUN_0001bb20(*(undefined4 *)(param_4 + iVar3 * 4),&local_34);
        local_2e = (undefined1)uVar5;
        iVar3 = FUN_0001b420(param_1,0x14,param_2,7,&local_34,DAT_00018be8 + 0x18b6c,0,0);
        if (iVar3 != 0) {
          if (local_2c != *piVar2) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
        fputs((char *)(DAT_00018bf0 + 0x18ba0),(FILE *)**(undefined4 **)(iVar4 + DAT_00018bec));
      }
      iVar3 = 1;
LAB_00018b28:
                    /* WARNING: Subroutine does not return */
      exit(iVar3);
    }
    if (iVar1 != 0x74) {
      puts((char *)(DAT_00018be4 + 0x18b24));
      iVar3 = 0;
      goto LAB_00018b28;
    }
    uVar5 = strtol((char *)**(undefined4 **)(iVar4 + DAT_00018be0),(char **)0x0,0);
    uVar5 = uVar5 & 0xff;
  } while( true );
}



/* ===== FUN_00018bf4 @ 00018bf4 size=380 ===== */

void FUN_00018bf4(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 local_34;
  undefined2 uStack_30;
  undefined1 local_2e;
  int local_2c;
  
  uVar5 = 0;
  iVar4 = DAT_00018d70 + 0x18c14;
  piVar2 = *(int **)(iVar4 + DAT_00018d74);
  iVar6 = (int)&DAT_00018d7c + DAT_00018d78;
  local_2c = *piVar2;
  iVar3 = DAT_00018d7c + 0x18c48;
  do {
    iVar1 = getopt_long(param_3,param_4,iVar3,iVar6,0);
    if (iVar1 == -1) {
      iVar3 = **(int **)(iVar4 + DAT_00018d80);
      **(int **)(iVar4 + DAT_00018d80) = 0;
      if (param_3 - iVar3 < 1) {
        puts((char *)(DAT_00018d84 + 0x18c90));
      }
      else {
        if (param_2 == 0xffff) {
          param_2 = 0;
        }
        local_34 = 0;
        uStack_30 = 0;
        local_2e = 0;
        FUN_0001bb20(*(undefined4 *)(param_4 + iVar3 * 4),&local_34);
        local_2e = (undefined1)uVar5;
        iVar3 = FUN_0001b420(param_1,0x31,param_2,7,&local_34,DAT_00018d90 + 0x18d14,0,0);
        if (iVar3 != 0) {
          if (local_2c != *piVar2) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
        fputs((char *)(DAT_00018d98 + 0x18d48),(FILE *)**(undefined4 **)(iVar4 + DAT_00018d94));
      }
      iVar3 = 1;
LAB_00018cd0:
                    /* WARNING: Subroutine does not return */
      exit(iVar3);
    }
    if (iVar1 != 0x74) {
      puts((char *)(DAT_00018d8c + 0x18ccc));
      iVar3 = 0;
      goto LAB_00018cd0;
    }
    uVar5 = strtol((char *)**(undefined4 **)(iVar4 + DAT_00018d88),(char **)0x0,0);
    uVar5 = uVar5 & 0xff;
  } while( true );
}



/* ===== FUN_00018d9c @ 00018d9c size=388 ===== */

void FUN_00018d9c(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 local_34;
  int local_2c;
  
  uVar5 = 0;
  iVar4 = DAT_00018f20 + 0x18dbc;
  piVar2 = *(int **)(iVar4 + DAT_00018f24);
  iVar6 = DAT_00018f28 + 0x18f54;
  local_2c = *piVar2;
  iVar3 = DAT_00018f2c + 0x18df0;
  do {
    iVar1 = getopt_long(param_3,param_4,iVar3,iVar6,0);
    if (iVar1 == -1) {
      iVar3 = **(int **)(iVar4 + DAT_00018f30);
      **(int **)(iVar4 + DAT_00018f30) = 0;
      if (param_3 - iVar3 < 1) {
        puts((char *)(DAT_00018f34 + 0x18e38));
      }
      else {
        if (param_2 == 0xffff) {
          param_2 = 0;
        }
        local_34 = 0;
        FUN_0001bb20(*(undefined4 *)(param_4 + iVar3 * 4),&local_34);
        local_34 = CONCAT17(1,CONCAT16((char)uVar5,(undefined6)local_34));
        iVar3 = FUN_0001b420(param_1,0x1b,param_2,8,&local_34,DAT_00018f40 + 0x18ed0,0,0);
        if (iVar3 != 0) {
          if (local_2c != *piVar2) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
        fputs((char *)(DAT_00018f48 + 0x18ef8),(FILE *)**(undefined4 **)(iVar4 + DAT_00018f44));
      }
      iVar3 = 1;
LAB_00018e78:
                    /* WARNING: Subroutine does not return */
      exit(iVar3);
    }
    if (iVar1 != 0x74) {
      puts((char *)(DAT_00018f3c + 0x18e74));
      iVar3 = 0;
      goto LAB_00018e78;
    }
    uVar5 = strtol((char *)**(undefined4 **)(iVar4 + DAT_00018f38),(char **)0x0,0);
    uVar5 = uVar5 & 0xff;
  } while( true );
}



/* ===== FUN_00018f4c @ 00018f4c size=424 ===== */

void FUN_00018f4c(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 local_48;
  undefined2 uStack_44;
  undefined1 local_42;
  undefined1 auStack_40 [20];
  int local_2c;
  
  uVar6 = 0;
  iVar5 = DAT_000190f4 + 0x18f6c;
  piVar3 = *(int **)(iVar5 + DAT_000190f8);
  iVar7 = DAT_000190fc + 0x19134;
  local_2c = *piVar3;
  iVar4 = DAT_00019100 + 0x18fa0;
  do {
    iVar1 = getopt_long(param_3,param_4,iVar4,iVar7,0);
    if (iVar1 == -1) {
      iVar4 = **(int **)(iVar5 + DAT_00019104);
      **(int **)(iVar5 + DAT_00019104) = 0;
      if (param_3 - iVar4 < 1) {
        puts((char *)(DAT_00019108 + 0x18fe8));
      }
      else {
        if (param_2 == 0xffff) {
          param_2 = 0;
        }
        local_48 = 0;
        uStack_44 = 0;
        local_42 = 0;
        FUN_0001bb20(*(undefined4 *)(param_4 + iVar4 * 4),&local_48);
        local_42 = (undefined1)uVar6;
        FUN_0001ba0c(&local_48,auStack_40);
        uVar2 = FUN_00013020(local_42);
        printf((char *)(DAT_00019114 + 0x19084),auStack_40,uVar2);
        iVar4 = FUN_0001b420(param_1,0x34,param_2,7,&local_48,DAT_00019118 + 0x1909c,0,0);
        if (iVar4 != 0) {
          if (local_2c != *piVar3) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
        fputs((char *)(DAT_00019120 + 0x190cc),(FILE *)**(undefined4 **)(iVar5 + DAT_0001911c));
      }
      iVar4 = 1;
LAB_00019028:
                    /* WARNING: Subroutine does not return */
      exit(iVar4);
    }
    if (iVar1 != 0x74) {
      puts((char *)(DAT_00019110 + 0x19024));
      iVar4 = 0;
      goto LAB_00019028;
    }
    uVar6 = strtol((char *)**(undefined4 **)(iVar5 + DAT_0001910c),(char **)0x0,0);
    uVar6 = uVar6 & 0xff;
  } while( true );
}



/* ===== FUN_00019124 @ 00019124 size=100 ===== */

void FUN_00019124(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  
  piVar1 = *(int **)(DAT_00019188 + 0x19138 + DAT_0001918c);
  local_c = *piVar1;
  local_18 = DAT_00019190 + 0x19150;
  local_14 = DAT_00019194 + 0x1915c;
  local_10 = 0;
  FUN_00018f4c(param_1,param_2,2,&local_18);
  if (local_c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_00019198 @ 00019198 size=336 ===== */

void FUN_00019198(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined2 local_3a;
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  undefined2 local_2e;
  int local_2c;
  
  iVar2 = DAT_000192e8 + 0x191b8;
  piVar3 = *(int **)(iVar2 + DAT_000192ec);
  local_2c = *piVar3;
  if (param_3 < 2) {
LAB_000191c4:
    puts((char *)(DAT_000192f0 + 0x191d0));
    puts((char *)(DAT_000192f4 + 0x191dc));
  }
  else {
    iVar1 = sscanf(*(char **)(param_4 + 4),(char *)(DAT_000192f8 + 0x1920c),&local_3a,&local_38,
                   &local_36);
    if (iVar1 == 3) {
      local_34 = 1;
    }
    else {
      iVar1 = sscanf(*(char **)(param_4 + 4),(char *)(DAT_000192fc + 0x19234),&local_3a,&local_38,
                     &local_36);
      if (iVar1 != 3) goto LAB_000191c4;
      local_34 = 2;
    }
    local_32 = local_3a;
    if (param_2 == 0xffff) {
      param_2 = 0;
    }
    local_30 = local_38;
    local_2e = local_36;
    iVar1 = FUN_0001b420(param_1,0x28,param_2,8,&local_34,DAT_00019300 + 0x19290,0,0);
    if (iVar1 != 0) {
      if (local_2c == *piVar3) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    fputs((char *)(DAT_00019308 + 0x192bc),(FILE *)**(undefined4 **)(iVar2 + DAT_00019304));
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_0001930c @ 0001930c size=84 ===== */

bool FUN_0001930c(char *param_1)

{
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  if ((((sVar1 == 0x24) && (param_1[8] == '-')) && (param_1[0xd] == '-')) && (param_1[0x12] == '-'))
  {
    return param_1[0x17] == '-';
  }
  return false;
}



/* ===== FUN_00019360 @ 00019360 size=68 ===== */

undefined2 FUN_00019360(char *param_1)

{
  char *__s1;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = DAT_000193a4 + 0x19378;
  while( true ) {
    __s1 = *(char **)(iVar2 + iVar3 * 8);
    if (__s1 == (char *)0x0) {
      return 0;
    }
    iVar1 = strcasecmp(__s1,param_1);
    if (iVar1 == 0) break;
    iVar3 = iVar3 + 1;
  }
  return *(undefined2 *)(iVar2 + iVar3 * 8 + 4);
}



/* ===== FUN_00019654 @ 00019654 size=384 ===== */

void FUN_00019654(undefined4 param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  size_t sVar4;
  uint uVar5;
  int *piVar6;
  ushort local_40;
  ushort local_3e;
  ushort local_3c;
  ushort local_3a;
  uint local_38;
  uint local_34;
  char *local_30;
  uint local_2c;
  ushort local_28;
  ushort local_26;
  ushort local_24;
  uint local_22;
  ushort local_1e;
  int local_1c;
  
  piVar6 = *(int **)(DAT_000197d4 + 0x19664 + DAT_000197d8);
  local_1c = *piVar6;
  iVar1 = FUN_0001930c(param_2);
  if (iVar1 == 0) {
LAB_00019750:
    pcVar3 = (char *)FUN_00019360(param_2);
    if (pcVar3 == (char *)0x0) {
      sVar4 = strlen(param_2);
      local_30 = pcVar3;
      if ((sVar4 & 0xfffffffd) == 4) {
        uVar5 = strtol(param_2,&local_30,0x10);
        if ((local_30 != (char *)0x0) && (*local_30 == '\0')) {
          FUN_000200bc(param_1,uVar5 & 0xffff);
          uVar2 = 0;
          goto LAB_0001973c;
        }
      }
      uVar2 = 0xffffffea;
      goto LAB_0001973c;
    }
    FUN_000200bc(param_1,pcVar3);
  }
  else {
    iVar1 = sscanf(param_2,(char *)(DAT_000197dc + 0x196bc),&local_38,&local_40,&local_3e,&local_3c,
                   &local_34,&local_3a);
    if (iVar1 != 6) goto LAB_00019750;
    local_3e = local_3e << 8 | local_3e >> 8;
    local_3c = local_3c << 8 | local_3c >> 8;
    local_38 = local_38 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8 |
               local_38 >> 0x18;
    local_40 = local_40 << 8 | local_40 >> 8;
    local_34 = local_34 << 0x18 | (local_34 >> 8 & 0xff) << 0x10 | (local_34 >> 0x10 & 0xff) << 8 |
               local_34 >> 0x18;
    local_3a = local_3a << 8 | local_3a >> 8;
    local_2c = local_38;
    local_28 = local_40;
    local_26 = local_3e;
    local_24 = local_3c;
    local_22 = local_34;
    local_1e = local_3a;
    FUN_000200fc(param_1,&local_2c);
  }
  uVar2 = 0;
LAB_0001973c:
  if (local_1c != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}



/* ===== FUN_000197e0 @ 000197e0 size=48 ===== */

void FUN_000197e0(int *param_1)

{
  close(*param_1);
  *param_1 = -1;
  if ((code *)param_1[2] == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001980c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_1[2])(param_1[3]);
  return;
}



/* ===== FUN_000198a4 @ 000198a4 size=108 ===== */

void FUN_000198a4(int param_1,uint param_2)

{
  int *piVar1;
  itimerspec local_1c;
  int local_c;
  
  piVar1 = *(int **)(DAT_00019910 + 0x198b4 + DAT_00019914);
  local_c = *piVar1;
  local_1c.it_interval.tv_sec = 0;
  local_1c.it_interval.tv_nsec = 0;
  local_1c.it_value.tv_sec = param_2 / 1000;
  local_1c.it_value.tv_nsec = (param_2 % 1000) * 1000;
  timerfd_settime(param_1,0,&local_1c,(itimerspec *)0x0);
  if (local_c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_00019998 @ 00019998 size=68 ===== */

void FUN_00019998(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = epoll_create1(0x80000);
  iVar2 = 0;
  puVar3 = (undefined4 *)(DAT_000199dc + 0x199c0);
  *(int *)(DAT_000199dc + 0x199bc) = iVar1;
  do {
    *puVar3 = 0;
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (iVar2 != 0x80);
  *(undefined4 *)(DAT_000199e0 + 0x199d8) = 0;
  return;
}



/* ===== FUN_000199e4 @ 000199e4 size=20 ===== */

void FUN_000199e4(void)

{
  *(undefined4 *)(DAT_000199f8 + 0x199f4) = 1;
  return;
}



/* ===== FUN_000199fc @ 000199fc size=228 ===== */

void FUN_000199fc(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  uint *__ptr;
  int iVar2;
  int *piVar3;
  epoll_event local_40;
  int local_2c;
  
  piVar3 = *(int **)(DAT_00019ae0 + 0x19a1c + DAT_00019ae4);
  local_2c = *piVar3;
  if (param_1 < 0x80 && param_3 != 0) {
    __ptr = malloc(0x14);
    if (__ptr == (uint *)0x0) {
      iVar2 = -0xc;
    }
    else {
      __ptr[4] = param_4;
      iVar1 = DAT_00019ae8;
      __ptr[1] = param_2;
      __ptr[2] = param_3;
      iVar2 = *(int *)(iVar1 + 0x19a84);
      *__ptr = param_1;
      __ptr[3] = param_5;
      local_40._4_4_ = 0;
      local_40.data.u64._4_4_ = 0;
      local_40.events = param_2;
      local_40.data.ptr = __ptr;
      iVar2 = epoll_ctl(iVar2,1,param_1,&local_40);
      if (iVar2 < 0) {
        free(__ptr);
      }
      else {
        *(uint **)(iVar1 + param_1 * 4 + 0x19a88) = __ptr;
        iVar2 = 0;
      }
    }
  }
  else {
    iVar2 = -0x16;
  }
  if (local_2c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2);
  }
  return;
}



/* ===== FUN_00019aec @ 00019aec size=156 ===== */

void FUN_00019aec(uint param_1,uint32_t param_2)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  epoll_event local_28;
  int local_14;
  
  uVar1 = param_1;
  if (0x7f < param_1) {
    uVar1 = 0xffffffea;
  }
  piVar3 = *(int **)(DAT_00019b88 + 0x19b04 + DAT_00019b8c);
  local_14 = *piVar3;
  if (param_1 < 0x80) {
    piVar2 = *(int **)(DAT_00019b90 + uVar1 * 4 + 0x19b2c);
    if (piVar2 == (int *)0x0) {
      uVar1 = 0xfffffffa;
    }
    else {
      local_28._4_4_ = 0;
      local_28.data.u64._4_4_ = 0;
      local_28.events = param_2;
      local_28.data.ptr = piVar2;
      uVar1 = epoll_ctl(*(int *)(DAT_00019b90 + 0x19b28),3,*piVar2,&local_28);
      if (-1 < (int)uVar1) {
        piVar2[1] = param_2;
        uVar1 = 0;
      }
    }
  }
  if (local_14 == *piVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}



/* ===== FUN_00019b94 @ 00019b94 size=108 ===== */

int FUN_00019b94(uint param_1)

{
  int iVar1;
  int __fd;
  int *__ptr;
  int iVar2;
  
  iVar2 = DAT_00019c00;
  if (param_1 < 0x80) {
    iVar1 = DAT_00019c00 + 0x19bb0 + param_1 * 4;
    __ptr = *(int **)(iVar1 + 8);
    if (__ptr == (int *)0x0) {
      iVar2 = -6;
    }
    else {
      __fd = *__ptr;
      *(undefined4 *)(iVar1 + 8) = 0;
      iVar2 = epoll_ctl(*(int *)(iVar2 + 0x19bb4),2,__fd,(epoll_event *)0x0);
      if ((code *)__ptr[3] != (code *)0x0) {
        (*(code *)__ptr[3])(__ptr[4]);
      }
      free(__ptr);
    }
  }
  else {
    iVar2 = -0x16;
  }
  return iVar2;
}



/* ===== FUN_00019c04 @ 00019c04 size=472 ===== */

void FUN_00019c04(void)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  epoll_event *peVar8;
  int *piVar9;
  undefined1 local_c8 [164];
  int local_24;
  
  piVar9 = *(int **)(DAT_00019ddc + 0x19c14 + DAT_00019de0);
  local_24 = *piVar9;
  piVar5 = *(int **)(DAT_00019de4 + 0x19e38);
  if (piVar5 == (int *)0x0) {
LAB_00019c38:
    iVar1 = DAT_00019de8;
    piVar5 = (int *)(DAT_00019de8 + 0x19c48);
    while (*piVar5 == 0) {
      iVar6 = epoll_wait(*(int *)(iVar1 + 0x19c4c),(epoll_event *)local_c8,10,-1);
      if (-1 < iVar6) {
        peVar8 = (epoll_event *)local_c8;
        for (iVar7 = 0; iVar7 != iVar6; iVar7 = iVar7 + 1) {
          puVar4 = (peVar8->data).ptr;
          (*(code *)puVar4[2])(*puVar4,peVar8->events,puVar4[4]);
          peVar8 = peVar8 + 1;
        }
      }
    }
    if (*(undefined4 **)(iVar1 + 0x19e50) != (undefined4 *)0x0) {
      FUN_00019b94(**(undefined4 **)(iVar1 + 0x19e50));
      close(**(int **)(iVar1 + 0x19e50));
      pcVar3 = *(code **)(*(int *)(iVar1 + 0x19e50) + 0x10);
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(*(undefined4 *)(*(int *)(iVar1 + 0x19e50) + 0x14));
      }
    }
    iVar1 = DAT_00019df0;
    iVar6 = 0x80;
    puVar4 = (undefined4 *)(DAT_00019dec + 0x19ca8);
    do {
      piVar5 = (int *)*puVar4;
      *puVar4 = 0;
      if (piVar5 != (int *)0x0) {
        epoll_ctl(*(int *)(iVar1 + 0x19ca8),2,*piVar5,(epoll_event *)0x0);
        if ((code *)piVar5[3] != (code *)0x0) {
          (*(code *)piVar5[3])(piVar5[4]);
        }
        free(piVar5);
      }
      iVar7 = DAT_00019df4;
      iVar6 = iVar6 + -1;
      puVar4 = puVar4 + 1;
    } while (iVar6 != 0);
    close(*(int *)(DAT_00019df4 + 0x19cfc));
    *(undefined4 *)(iVar7 + 0x19cfc) = 0;
    uVar2 = 0;
  }
  else {
    iVar1 = sigprocmask(0,(sigset_t *)(piVar5 + 1),(sigset_t *)0x0);
    if (-1 < iVar1) {
      iVar1 = signalfd(-1,(sigset_t *)(piVar5 + 1),DAT_00019df8);
      *piVar5 = iVar1;
      if (-1 < iVar1) {
        iVar1 = FUN_000199fc(iVar1,1,DAT_00019dfc + 0x19d70,piVar5,0);
        if (-1 < iVar1) goto LAB_00019c38;
        close(*piVar5);
      }
    }
    uVar2 = 1;
  }
  if (local_24 == *piVar9) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}



/* ===== FUN_00019e00 @ 00019e00 size=196 ===== */

int FUN_00019e00(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *__ptr;
  int iVar2;
  
  if (param_2 == 0) {
    iVar1 = -0x16;
  }
  else {
    iVar1 = param_2;
    __ptr = malloc(0x10);
    if (__ptr == (int *)0x0) {
      iVar1 = -0xc;
    }
    else {
      __ptr[2] = param_4;
      *__ptr = 0;
      __ptr[1] = param_2;
      __ptr[3] = param_3;
      iVar2 = timerfd_create(1,DAT_00019ec4);
      *__ptr = iVar2;
      if (-1 < iVar2) {
        if ((param_1 == 0) || (iVar2 = FUN_000198a4(iVar2,param_1), -1 < iVar2)) {
          iVar2 = FUN_000199fc(*__ptr,0x40000001,DAT_00019ecc + 0x19eb0,__ptr,DAT_00019ec8 + 0x19ea4
                               ,iVar1);
          iVar1 = *__ptr;
          if (-1 < iVar2) {
            return iVar1;
          }
        }
        else {
          iVar1 = *__ptr;
        }
        close(iVar1);
      }
      free(__ptr);
      iVar1 = -5;
    }
  }
  return iVar1;
}



/* ===== FUN_0001a158 @ 0001a158 size=152 ===== */

int * FUN_0001a158(int param_1,undefined4 param_2)

{
  bool bVar1;
  int *__ptr;
  int iVar2;
  int iVar3;
  
  if ((-1 < param_1) && (__ptr = calloc(1,0x34), iVar2 = DAT_0001a1f4, __ptr != (int *)0x0)) {
    iVar3 = DAT_0001a1f0 + 0x1a1a0;
    __ptr[1] = param_1;
    __ptr[2] = 0;
    *(undefined1 *)(__ptr + 3) = 0;
    iVar2 = FUN_000199fc(param_1,0,iVar2 + 0x1a1b4,__ptr,iVar3,param_2);
    if (-1 < iVar2) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(__ptr);
      } while (!bVar1);
      *__ptr = *__ptr + 1;
      DataMemoryBarrier(0xb);
      return __ptr;
    }
    free(__ptr);
  }
  return (int *)0x0;
}



/* ===== FUN_0001a1f8 @ 0001a1f8 size=84 ===== */

void FUN_0001a1f8(int *param_1)

{
  bool bVar1;
  int iVar2;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  FUN_00019b94(param_1[1]);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar2 + -1;
  DataMemoryBarrier(0xb);
  if (iVar2 + -1 == 0) {
    free(param_1);
    return;
  }
  return;
}



/* ===== FUN_0001a26c @ 0001a26c size=132 ===== */

undefined4 FUN_0001a26c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if ((param_1 != 0) && (-1 < *(int *)(param_1 + 4))) {
    if (*(code **)(param_1 + 0x14) != (code *)0x0) {
      (**(code **)(param_1 + 0x14))(*(undefined4 *)(param_1 + 0x18));
    }
    uVar2 = *(uint *)(param_1 + 8);
    *(int *)(param_1 + 0x10) = param_2;
    if (param_2 == 0) {
      uVar3 = uVar2 & 0xfffffffe;
    }
    else {
      uVar3 = uVar2 | 1;
    }
    *(undefined4 *)(param_1 + 0x14) = param_4;
    *(undefined4 *)(param_1 + 0x18) = param_3;
    if (uVar3 != uVar2) {
      iVar1 = FUN_00019aec(*(undefined4 *)(param_1 + 4),uVar3);
      if (iVar1 < 0) {
        return 0;
      }
      *(uint *)(param_1 + 8) = uVar3;
    }
    return 1;
  }
  return 0;
}



/* ===== FUN_0001a2f0 @ 0001a2f0 size=132 ===== */

undefined4 FUN_0001a2f0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if ((param_1 != 0) && (-1 < *(int *)(param_1 + 4))) {
    if (*(code **)(param_1 + 0x20) != (code *)0x0) {
      (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x24));
    }
    uVar2 = *(uint *)(param_1 + 8);
    *(int *)(param_1 + 0x1c) = param_2;
    if (param_2 == 0) {
      uVar3 = uVar2 & 0xfffffffb;
    }
    else {
      uVar3 = uVar2 | 4;
    }
    *(undefined4 *)(param_1 + 0x20) = param_4;
    *(undefined4 *)(param_1 + 0x24) = param_3;
    if (uVar3 != uVar2) {
      iVar1 = FUN_00019aec(*(undefined4 *)(param_1 + 4),uVar3);
      if (iVar1 < 0) {
        return 0;
      }
      *(uint *)(param_1 + 8) = uVar3;
    }
    return 1;
  }
  return 0;
}



/* ===== FUN_0001a374 @ 0001a374 size=132 ===== */

undefined4 FUN_0001a374(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if ((param_1 != 0) && (-1 < *(int *)(param_1 + 4))) {
    if (*(code **)(param_1 + 0x2c) != (code *)0x0) {
      (**(code **)(param_1 + 0x2c))(*(undefined4 *)(param_1 + 0x30));
    }
    uVar2 = *(uint *)(param_1 + 8);
    *(int *)(param_1 + 0x28) = param_2;
    if (param_2 == 0) {
      uVar3 = uVar2 & 0xffffdfff;
    }
    else {
      uVar3 = uVar2 | 0x2000;
    }
    *(undefined4 *)(param_1 + 0x2c) = param_4;
    *(undefined4 *)(param_1 + 0x30) = param_3;
    if (uVar3 != uVar2) {
      iVar1 = FUN_00019aec(*(undefined4 *)(param_1 + 4),uVar3);
      if (iVar1 < 0) {
        return 0;
      }
      *(uint *)(param_1 + 8) = uVar3;
    }
    return 1;
  }
  return 0;
}



/* ===== FUN_0001a468 @ 0001a468 size=72 ===== */

void FUN_0001a468(void)

{
  bool bVar1;
  int *piVar2;
  
  piVar2 = calloc(1,0x10);
  if (piVar2 != (int *)0x0) {
    piVar2[1] = 0;
    piVar2[2] = 0;
    piVar2[3] = 0;
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = *piVar2 + 1;
    DataMemoryBarrier(0xb);
    return;
  }
  return;
}



/* ===== FUN_0001a4b0 @ 0001a4b0 size=104 ===== */

undefined4 FUN_0001a4b0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  if ((param_1 != 0) && (puVar1 = calloc(1,8), puVar1 != (undefined4 *)0x0)) {
    *puVar1 = param_2;
    puVar1[1] = 0;
    if (*(int *)(param_1 + 8) != 0) {
      *(undefined4 **)(*(int *)(param_1 + 8) + 4) = puVar1;
    }
    *(undefined4 **)(param_1 + 8) = puVar1;
    if (*(int *)(param_1 + 4) == 0) {
      *(undefined4 **)(param_1 + 4) = puVar1;
    }
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    return 1;
  }
  return 0;
}



/* ===== FUN_0001a518 @ 0001a518 size=92 ===== */

undefined4 FUN_0001a518(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if ((param_1 != 0) && (puVar1 = calloc(1,8), puVar1 != (undefined4 *)0x0)) {
    uVar2 = *(undefined4 *)(param_1 + 4);
    *puVar1 = param_2;
    puVar1[1] = uVar2;
    *(undefined4 **)(param_1 + 4) = puVar1;
    if (*(int *)(param_1 + 8) == 0) {
      *(undefined4 **)(param_1 + 8) = puVar1;
    }
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    return 1;
  }
  return 0;
}



/* ===== FUN_0001a574 @ 0001a574 size=76 ===== */

undefined4 FUN_0001a574(int param_1)

{
  undefined4 *__ptr;
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  __ptr = *(undefined4 **)(param_1 + 4);
  if (__ptr == (undefined4 *)0x0) {
    return 0;
  }
  iVar1 = __ptr[1];
  uVar2 = *__ptr;
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  free(__ptr);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  return uVar2;
}



/* ===== FUN_0001a5f0 @ 0001a5f0 size=136 ===== */

void FUN_0001a5f0(int *param_1,code *param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_2 == (code *)0x0 || param_1 == (int *)0x0) {
    return;
  }
  puVar3 = (undefined4 *)param_1[1];
  if (puVar3 == (undefined4 *)0x0) {
    return;
  }
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = *param_1 + 1;
  DataMemoryBarrier(0xb);
  while (1 < *param_1) {
    puVar4 = (undefined4 *)puVar3[1];
    (*param_2)(*puVar3,param_3);
    puVar3 = (undefined4 *)param_1[1];
    while( true ) {
      if (puVar3 == (undefined4 *)0x0) goto LAB_0001a43c;
      if (puVar4 == puVar3) break;
      puVar3 = (undefined4 *)puVar3[1];
    }
  }
LAB_0001a43c:
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar2 + -1;
  DataMemoryBarrier(0xb);
  if (iVar2 + -1 == 0) {
    free(param_1);
    return;
  }
  return;
}



/* ===== FUN_0001a764 @ 0001a764 size=152 ===== */

undefined4 FUN_0001a764(int param_1,code *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *__ptr;
  
  if (param_1 == 0 || param_2 == (code *)0x0) {
LAB_0001a780:
    uVar4 = 0;
  }
  else {
    puVar1 = (undefined4 *)0x0;
    puVar3 = *(undefined4 **)(param_1 + 4);
    do {
      __ptr = puVar3;
      puVar5 = puVar1;
      if (__ptr == (undefined4 *)0x0) goto LAB_0001a780;
      iVar2 = (*param_2)(*__ptr,param_3);
      puVar3 = (undefined4 *)__ptr[1];
      puVar1 = __ptr;
    } while (iVar2 == 0);
    if (puVar5 == (undefined4 *)0x0) {
      *(undefined4 **)(param_1 + 4) = puVar3;
    }
    else {
      puVar5[1] = puVar3;
    }
    if (__ptr[1] == 0) {
      *(undefined4 **)(param_1 + 8) = puVar5;
    }
    uVar4 = *__ptr;
    free(__ptr);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return uVar4;
}



/* ===== FUN_0001a7fc @ 0001a7fc size=228 ===== */

int FUN_0001a7fc(int param_1,code *param_2,undefined4 param_3,code *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_1 == 0) {
    iVar2 = 0;
  }
  else if (param_2 == (code *)0x0) {
    iVar2 = 0;
    puVar3 = *(undefined4 **)(param_1 + 4);
    while (puVar3 != (undefined4 *)0x0) {
      puVar4 = (undefined4 *)puVar3[1];
      if (param_4 != (code *)0x0) {
        (*param_4)(*puVar3);
      }
      iVar2 = iVar2 + 1;
      free(puVar3);
      puVar3 = puVar4;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else {
    iVar2 = 0;
    puVar3 = *(undefined4 **)(param_1 + 4);
    puVar4 = (undefined4 *)0x0;
    while (puVar5 = puVar4, puVar4 = puVar3, puVar4 != (undefined4 *)0x0) {
      iVar1 = (*param_2)(*puVar4,param_3);
      puVar3 = (undefined4 *)puVar4[1];
      if (iVar1 != 0) {
        if (puVar5 == (undefined4 *)0x0) {
          *(undefined4 **)(param_1 + 4) = puVar3;
        }
        else {
          puVar5[1] = puVar3;
        }
        puVar3 = (undefined4 *)puVar4[1];
        if (puVar3 == (undefined4 *)0x0) {
          *(undefined4 **)(param_1 + 8) = puVar5;
        }
        if (param_4 != (code *)0x0) {
          (*param_4)(*puVar4);
        }
        iVar2 = iVar2 + 1;
        free(puVar4);
        puVar4 = puVar5;
      }
    }
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) - iVar2;
  }
  return iVar2;
}



/* ===== FUN_0001a8e0 @ 0001a8e0 size=84 ===== */

void FUN_0001a8e0(int *param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  FUN_0001a7fc(param_1,0,0,param_2);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar2 + -1;
  DataMemoryBarrier(0xb);
  if (iVar2 + -1 == 0) {
    free(param_1);
    return;
  }
  return;
}



/* ===== FUN_0001a914 @ 0001a914 size=24 ===== */

bool FUN_0001a914(int param_1)

{
  bool bVar1;
  
  if (param_1 == 0) {
    bVar1 = true;
  }
  else {
    bVar1 = *(int *)(param_1 + 0xc) == 0;
  }
  return bVar1;
}



/* ===== FUN_0001a92c @ 0001a92c size=132 ===== */

void FUN_0001a92c(code *param_1,undefined4 param_2,char *param_3,undefined4 param_4)

{
  int *piVar1;
  char acStack_74 [80];
  int local_24;
  undefined4 uStack_4;
  
  piVar1 = *(int **)(DAT_0001a9b0 + 0x1a944 + DAT_0001a9b4);
  local_24 = *piVar1;
  uStack_4 = param_4;
  if (param_3 != (char *)0x0 && param_1 != (code *)0x0) {
    vsnprintf(acStack_74,0x4e,param_3,&uStack_4);
    (*param_1)(acStack_74,param_2);
  }
  if (local_24 != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_0001a9b8 @ 0001a9b8 size=352 ===== */

void FUN_0001a9b8(undefined1 param_1,int param_2,uint param_3,code *param_4,undefined4 param_5)

{
  undefined1 uVar1;
  int iVar2;
  byte bVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint unaff_r4;
  int iVar8;
  int iVar9;
  undefined1 local_70 [49];
  undefined1 local_3f;
  undefined1 local_3e;
  byte abStack_3d [16];
  undefined1 local_2d;
  int local_2c;
  
  iVar8 = DAT_0001ab18 + 0x1a9d8;
  if (param_4 == (code *)0x0) {
    unaff_r4 = 1;
  }
  piVar4 = *(int **)(iVar8 + DAT_0001ab1c);
  if (param_4 != (code *)0x0) {
    unaff_r4 = (uint)(param_3 == 0);
  }
  local_2c = *piVar4;
  if (unaff_r4 == 0) {
    iVar9 = DAT_0001ab20 + 0x1aa1c;
    uVar6 = 0;
    local_70[0] = param_1;
    while (uVar5 = uVar6 & 0xf, uVar6 != param_3) {
      bVar3 = *(byte *)(param_2 + uVar6);
      iVar2 = uVar5 * 3;
      uVar6 = uVar6 + 1;
      uVar1 = *(undefined1 *)(iVar9 + (uint)(bVar3 >> 4));
      local_70[iVar2 + 1] = 0x20;
      local_70[iVar2 + 2] = uVar1;
      local_70[iVar2 + 3] = *(undefined1 *)(iVar9 + (bVar3 & 0xf));
      if ((*(ushort *)(**(int **)(iVar8 + DAT_0001ab24) + (uint)bVar3 * 2) & 0x40) == 0) {
        bVar3 = 0x2e;
      }
      abStack_3d[uVar5] = bVar3;
      if ((uVar6 & 0xf) == 0) {
        local_2d = 0;
        local_3f = 0x20;
        local_3e = 0x20;
        (*param_4)(local_70,param_5);
        local_70[0] = 0x20;
      }
    }
    if (uVar5 != 0) {
      puVar7 = local_70 + uVar5 * 3;
      do {
        puVar7[1] = 0x20;
        uVar6 = uVar5 + 1;
        puVar7[2] = 0x20;
        puVar7 = puVar7 + 3;
        *puVar7 = 0x20;
        abStack_3d[uVar5] = 0x20;
        uVar5 = uVar6;
      } while (uVar6 != 0x10);
      local_3f = 0x20;
      local_3e = 0x20;
      local_2d = 0;
      (*param_4)(local_70,param_5);
    }
  }
  if (local_2c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_0001abdc @ 0001abdc size=48 ===== */

void FUN_0001abdc(void *param_1)

{
  if (*(code **)((int)param_1 + 0x14) != (code *)0x0) {
    (**(code **)((int)param_1 + 0x14))(*(undefined4 *)((int)param_1 + 0x18));
  }
  free(*(void **)((int)param_1 + 8));
  free(param_1);
  return;
}



/* ===== FUN_0001ac34 @ 0001ac34 size=260 ===== */

undefined4 FUN_0001ac34(undefined4 param_1,int param_2)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  iVar7 = param_2;
  iVar1 = FUN_0001a574(*(undefined4 *)(param_2 + 0x18));
  if ((iVar1 != 0) ||
     ((iVar1 = FUN_0001a914(*(undefined4 *)(param_2 + 0x1c)), iVar1 != 0 &&
      (iVar1 = FUN_0001a574(*(undefined4 *)(param_2 + 0x14)), iVar1 != 0)))) {
    sVar2 = write(*(int *)(param_2 + 4),*(void **)(iVar1 + 8),(uint)*(ushort *)(iVar1 + 0xc));
    if (sVar2 < 0) {
      uVar6 = *(undefined4 *)(param_2 + 0x38);
      piVar3 = __errno_location();
      uVar5 = *(undefined4 *)(param_2 + 0x40);
      pcVar4 = strerror(*piVar3);
      FUN_0001a92c(uVar6,uVar5,DAT_0001ad38 + 0x1acb8,pcVar4);
      if (*(code **)(iVar1 + 0x10) != (code *)0x0) {
        (**(code **)(iVar1 + 0x10))(3,0,0,*(undefined4 *)(iVar1 + 0x18));
      }
      FUN_0001abdc(iVar1);
      return 1;
    }
    FUN_0001a92c(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x40),
                 DAT_0001ad3c + 0x1ad0c,*(undefined2 *)(iVar1 + 6),*(undefined2 *)(iVar1 + 4),iVar7)
    ;
    FUN_0001a9b8(0x3c,*(undefined4 *)(iVar1 + 8),sVar2,*(undefined4 *)(param_2 + 0x38),
                 *(undefined4 *)(param_2 + 0x40));
    FUN_0001a4b0(*(undefined4 *)(param_2 + 0x1c),iVar1);
  }
  return 0;
}



/* ===== FUN_0001add8 @ 0001add8 size=88 ===== */

void FUN_0001add8(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0001a914(*(undefined4 *)(param_1 + 0x1c));
  if ((iVar1 == 0) && (iVar1 = FUN_0001a914(*(undefined4 *)(param_1 + 0x18)), iVar1 != 0)) {
    return;
  }
  if (*(char *)(param_1 + 0x10) != '\0') {
    return;
  }
  FUN_0001a2f0(*(undefined4 *)(param_1 + 0xc),DAT_0001ae34 + 0x1ae18,param_1,DAT_0001ae30 + 0x1ae14)
  ;
  return;
}



/* ===== FUN_0001ae38 @ 0001ae38 size=164 ===== */

void FUN_0001ae38(int param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,
                 undefined2 param_5,undefined4 param_6)

{
  int iVar1;
  int *piVar2;
  undefined4 local_28;
  int local_24;
  undefined4 uStack_20;
  
  piVar2 = *(int **)(DAT_0001aedc + 0x1ae54 + DAT_0001aee0);
  local_24 = *piVar2;
  local_28 = CONCAT22(param_4,(short)param_3);
  uStack_20 = param_3;
  iVar1 = FUN_0001a764(*(undefined4 *)(param_1 + 0x1c),DAT_0001aee4 + 0x1ae7c,&local_28);
  if (iVar1 != 0) {
    if (*(code **)(iVar1 + 0x10) != (code *)0x0) {
      (**(code **)(iVar1 + 0x10))(param_2,param_5,param_6,*(undefined4 *)(iVar1 + 0x18));
    }
    FUN_0001abdc(iVar1);
  }
  if (*(char *)(param_1 + 0x2e) == '\0') {
    FUN_0001add8(param_1);
  }
  if (local_24 != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_0001b0e0 @ 0001b0e0 size=164 ===== */

void * FUN_0001b0e0(undefined2 param_1,undefined2 param_2,size_t param_3,void *param_4,
                   undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  void *__ptr;
  undefined2 *puVar1;
  
  __ptr = calloc(1,0x1c);
  if (__ptr != (void *)0x0) {
    *(short *)((int)__ptr + 0xc) = (short)(param_3 + 6);
    puVar1 = malloc(param_3 + 6 & 0xffff);
    *(undefined2 **)((int)__ptr + 8) = puVar1;
    if (puVar1 == (undefined2 *)0x0) {
      free(__ptr);
      __ptr = (void *)0x0;
    }
    else {
      if (param_3 != 0) {
        memcpy(puVar1 + 3,param_4,param_3);
      }
      *puVar1 = param_1;
      *(undefined4 *)((int)__ptr + 0x10) = param_5;
      puVar1[1] = param_2;
      *(undefined4 *)((int)__ptr + 0x14) = param_7;
      puVar1[2] = (short)param_3;
      *(undefined2 *)((int)__ptr + 4) = param_1;
      *(undefined2 *)((int)__ptr + 6) = param_2;
      *(undefined4 *)((int)__ptr + 0x18) = param_6;
    }
  }
  return __ptr;
}



/* ===== FUN_0001b1ac @ 0001b1ac size=372 ===== */

int * FUN_0001b1ac(int param_1)

{
  bool bVar1;
  int *__ptr;
  void *pvVar2;
  int iVar3;
  
  if ((-1 < param_1) && (__ptr = calloc(1,0x44), __ptr != (int *)0x0)) {
    __ptr[1] = param_1;
    *(undefined1 *)(__ptr + 2) = 0;
    *(undefined2 *)(__ptr + 0xd) = 0x200;
    pvVar2 = malloc(0x200);
    __ptr[0xc] = (int)pvVar2;
    if (pvVar2 != (void *)0x0) {
      iVar3 = FUN_0001a158(param_1);
      __ptr[3] = iVar3;
      if (iVar3 != 0) {
        iVar3 = FUN_0001a468();
        __ptr[5] = iVar3;
        if (iVar3 != 0) {
          iVar3 = FUN_0001a468();
          __ptr[6] = iVar3;
          if (iVar3 != 0) {
            iVar3 = FUN_0001a468();
            __ptr[7] = iVar3;
            if (iVar3 != 0) {
              iVar3 = FUN_0001a468();
              __ptr[8] = iVar3;
              if (iVar3 != 0) {
                iVar3 = FUN_0001a26c(__ptr[3],DAT_0001b2fc + 0x1b2cc,__ptr,DAT_0001b2f8 + 0x1b2c8);
                if (iVar3 != 0) {
                  *(undefined1 *)(__ptr + 4) = 0;
                  if (__ptr != (int *)0x0) {
                    DataMemoryBarrier(0xb);
                    do {
                      bVar1 = (bool)hasExclusiveAccess(__ptr);
                    } while (!bVar1);
                    *__ptr = *__ptr + 1;
                    DataMemoryBarrier(0xb);
                    return __ptr;
                  }
                  return (int *)0x0;
                }
                FUN_0001a8e0(__ptr[8],0);
              }
              FUN_0001a8e0(__ptr[7],0);
            }
            FUN_0001a8e0(__ptr[6],0);
          }
          FUN_0001a8e0(__ptr[5],0);
        }
        FUN_0001a1f8(__ptr[3]);
      }
      free((void *)__ptr[0xc]);
    }
    free(__ptr);
  }
  return (int *)0x0;
}



/* ===== FUN_0001b300 @ 0001b300 size=188 ===== */

void FUN_0001b300(void)

{
  int __fd;
  int iVar1;
  int *piVar2;
  sockaddr local_24;
  int local_14;
  
  piVar2 = *(int **)(DAT_0001b3bc + 0x1b314 + DAT_0001b3c0);
  local_14 = *piVar2;
  __fd = socket(0x1f,DAT_0001b3c4,1);
  if (-1 < __fd) {
    local_24.sa_data[4] = '\0';
    local_24.sa_data[5] = '\0';
    local_24.sa_data[6] = '\0';
    local_24.sa_data[7] = '\0';
    local_24.sa_data[8] = '\0';
    local_24.sa_data[9] = '\0';
    local_24.sa_data[10] = '\0';
    local_24.sa_data[0xb] = '\0';
    local_24.sa_data[0xc] = '\0';
    local_24.sa_data[0xd] = '\0';
    local_24.sa_family = (sa_family_t)DAT_0001b3c8;
    local_24.sa_data[0] = DAT_0001b3c8._2_1_;
    local_24.sa_data[1] = DAT_0001b3c8._3_1_;
    local_24.sa_data[2] = '\x03';
    local_24.sa_data[3] = '\0';
    iVar1 = bind(__fd,&local_24,6);
    if (-1 < iVar1) {
      iVar1 = FUN_0001b1ac();
      if (iVar1 == 0) {
        close(__fd);
      }
      else {
        *(undefined1 *)(iVar1 + 8) = 1;
      }
      goto LAB_0001b39c;
    }
    close(__fd);
  }
  iVar1 = 0;
LAB_0001b39c:
  if (local_14 == *piVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}



/* ===== FUN_0001b420 @ 0001b420 size=204 ===== */

int FUN_0001b420(int param_1,int param_2,undefined4 param_3,int param_4,int param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int *__ptr;
  undefined4 uVar1;
  int iVar2;
  
  if (((param_2 != 0 && param_1 != 0) && (param_4 == 0 || param_5 != 0)) &&
     (__ptr = (int *)FUN_0001b0e0(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_4),
     __ptr != (int *)0x0)) {
    uVar1 = *(undefined4 *)(param_1 + 0x14);
    if (*(int *)(param_1 + 0x24) == 0) {
      *(undefined4 *)(param_1 + 0x24) = 1;
    }
    iVar2 = *(int *)(param_1 + 0x24);
    *(int *)(param_1 + 0x24) = iVar2 + 1;
    *__ptr = iVar2;
    iVar2 = FUN_0001a4b0(uVar1,__ptr);
    if (iVar2 != 0) {
      FUN_0001add8(param_1);
      return *__ptr;
    }
    free((void *)__ptr[2]);
    free(__ptr);
  }
  return 0;
}



/* ===== FUN_0001b4ec @ 0001b4ec size=204 ===== */

int FUN_0001b4ec(int param_1,int param_2,undefined4 param_3,int param_4,int param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int *__ptr;
  undefined4 uVar1;
  int iVar2;
  
  if (((param_2 != 0 && param_1 != 0) && (param_4 == 0 || param_5 != 0)) &&
     (__ptr = (int *)FUN_0001b0e0(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_4),
     __ptr != (int *)0x0)) {
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    if (*(int *)(param_1 + 0x24) == 0) {
      *(undefined4 *)(param_1 + 0x24) = 1;
    }
    iVar2 = *(int *)(param_1 + 0x24);
    *(int *)(param_1 + 0x24) = iVar2 + 1;
    *__ptr = iVar2;
    iVar2 = FUN_0001a4b0(uVar1,__ptr);
    if (iVar2 != 0) {
      FUN_0001add8(param_1);
      return *__ptr;
    }
    free((void *)__ptr[2]);
    free(__ptr);
  }
  return 0;
}



/* ===== FUN_0001b5d4 @ 0001b5d4 size=120 ===== */

undefined4 FUN_0001b5d4(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_0001b644 + 0x1b5f0;
  iVar1 = FUN_0001a764(*(undefined4 *)(param_1 + 0x14),iVar2,param_2);
  if (((iVar1 == 0) &&
      (iVar1 = FUN_0001a764(*(undefined4 *)(param_1 + 0x18),iVar2,param_2), iVar1 == 0)) &&
     (iVar1 = FUN_0001a764(*(undefined4 *)(param_1 + 0x1c),iVar2,param_2), iVar1 == 0)) {
    return 0;
  }
  FUN_0001abdc();
  FUN_0001add8(param_1);
  return 1;
}



/* ===== FUN_0001b6b8 @ 0001b6b8 size=92 ===== */

undefined4 FUN_0001b6b8(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = DAT_0001b714 + 0x1b6e0;
  FUN_0001a7fc(*(undefined4 *)(param_1 + 0x1c),0,0,iVar1);
  FUN_0001a7fc(*(undefined4 *)(param_1 + 0x18),0,0,iVar1);
  FUN_0001a7fc(*(undefined4 *)(param_1 + 0x14),0,0,iVar1);
  return 1;
}



/* ===== FUN_0001b718 @ 0001b718 size=164 ===== */

int FUN_0001b718(int param_1,int param_2,undefined2 param_3,int param_4,int param_5,int param_6)

{
  int *__ptr;
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == 0 || param_1 == 0) {
    return 0;
  }
  __ptr = calloc(1,0x18);
  if (__ptr != (int *)0x0) {
    uVar1 = *(undefined4 *)(param_1 + 0x20);
    __ptr[4] = param_6;
    *(short *)(__ptr + 1) = (short)param_2;
    __ptr[5] = param_5;
    iVar2 = *(int *)(param_1 + 0x28);
    *(undefined2 *)((int)__ptr + 6) = param_3;
    __ptr[3] = param_4;
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x28) = 1;
    }
    iVar2 = *(int *)(param_1 + 0x28);
    *__ptr = iVar2;
    *(int *)(param_1 + 0x28) = iVar2 + 1;
    iVar2 = FUN_0001a4b0(uVar1,__ptr);
    if (iVar2 != 0) {
      return *__ptr;
    }
    free(__ptr);
  }
  return 0;
}



/* ===== FUN_0001b890 @ 0001b890 size=92 ===== */

char FUN_0001b890(int param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if (param_1 != 0) {
    cVar1 = *(char *)(param_1 + 0x2d);
    if (cVar1 == '\0') {
      cVar1 = '\x01';
      FUN_0001a7fc(*(undefined4 *)(param_1 + 0x20),0,0,DAT_0001b8f0 + 0x1b8e8);
    }
    else {
      FUN_0001a5f0(*(undefined4 *)(param_1 + 0x20),DAT_0001b8ec + 0x1b8c0,0xffff);
      *(undefined1 *)(param_1 + 0x2c) = 1;
    }
  }
  return cVar1;
}



/* ===== FUN_0001b8f4 @ 0001b8f4 size=252 ===== */

void FUN_0001b8f4(int *param_1)

{
  bool bVar1;
  int iVar2;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar2 + -1;
  DataMemoryBarrier(0xb);
  if (iVar2 + -1 == 0) {
    FUN_0001b890();
    FUN_0001b6b8(param_1);
    FUN_0001a8e0(param_1[6],0);
    FUN_0001a8e0(param_1[5],0);
    FUN_0001a2f0(param_1[3],0,0,0);
    FUN_0001a26c(param_1[3],0,0,0);
    FUN_0001a1f8(param_1[3]);
    param_1[3] = 0;
    if ((char)param_1[2] != '\0') {
      close(param_1[1]);
    }
    if ((code *)param_1[0xf] != (code *)0x0) {
      (*(code *)param_1[0xf])(param_1[0x10]);
    }
    free((void *)param_1[0xc]);
    param_1[0xc] = 0;
    if (*(char *)((int)param_1 + 0x2d) != '\0') {
      *(undefined1 *)((int)param_1 + 0x2e) = 1;
      return;
    }
    FUN_0001a8e0(param_1[8],0);
    FUN_0001a8e0(param_1[7],0);
    free(param_1);
    return;
  }
  return;
}



/* ===== FUN_0001ba0c @ 0001ba0c size=76 ===== */

undefined4 FUN_0001ba0c(byte *param_1,char *param_2)

{
  sprintf(param_2,(char *)(DAT_0001ba58 + 0x1ba30),(uint)param_1[5],(uint)param_1[4],
          (uint)param_1[3],(uint)param_1[2],(uint)param_1[1],(uint)*param_1);
  return 0x11;
}



/* ===== FUN_0001ba5c @ 0001ba5c size=52 ===== */

undefined4 FUN_0001ba5c(int param_1,char *param_2,undefined4 param_3)

{
  sprintf(param_2,(char *)(DAT_0001ba90 + 0x1ba7c),(uint)*(byte *)(param_1 + 5),
          (uint)*(byte *)(param_1 + 4),(uint)*(byte *)(param_1 + 3),param_2,param_3);
  return 8;
}



/* ===== FUN_0001ba94 @ 0001ba94 size=132 ===== */

undefined4 FUN_0001ba94(byte *param_1)

{
  byte *pbVar1;
  size_t sVar2;
  int iVar3;
  
  iVar3 = DAT_0001bb18 + 0x1baa8;
  if ((param_1 != (byte *)0x0) && (sVar2 = strlen((char *)param_1), sVar2 == 0x11)) {
    iVar3 = **(int **)(iVar3 + DAT_0001bb1c);
    do {
      if (*param_1 == 0) {
        return 0;
      }
      if ((*(ushort *)(iVar3 + (uint)*param_1 * 2) & 0x10) == 0) {
        return 0xffffffff;
      }
      if ((*(ushort *)(iVar3 + (uint)param_1[1] * 2) & 0x10) == 0) {
        return 0xffffffff;
      }
      pbVar1 = param_1 + 2;
      if (*pbVar1 == 0) {
        return 0;
      }
      param_1 = param_1 + 3;
    } while (*pbVar1 == 0x3a);
  }
  return 0xffffffff;
}



/* ===== FUN_0001bb20 @ 0001bb20 size=92 ===== */

undefined4 FUN_0001bb20(char *param_1,undefined4 *param_2)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  char *__nptr;
  char *pcVar4;
  
  iVar1 = FUN_0001ba94();
  if (iVar1 < 0) {
    *param_2 = 0;
    *(undefined2 *)(param_2 + 1) = 0;
    return 0xffffffff;
  }
  puVar3 = (undefined1 *)((int)param_2 + 5);
  __nptr = param_1;
  do {
    pcVar4 = __nptr + 3;
    lVar2 = strtol(__nptr,(char **)0x0,0x10);
    *puVar3 = (char)lVar2;
    puVar3 = puVar3 + -1;
    __nptr = pcVar4;
  } while (param_1 + 0x12 != pcVar4);
  return 0;
}



/* ===== <EXTERNAL>::malloc @ 0001bcf0 size=4 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0003fee4)(__size);
  return pvVar1;
}



/* ===== FUN_0001bcf4 @ 0001bcf4 size=92 ===== */

char * FUN_0001bcf4(byte *param_1)

{
  char *__s;
  
  __s = malloc(0x12);
  if (__s != (char *)0x0) {
    sprintf(__s,(char *)(DAT_0001bd50 + 0x1bd34),(uint)*param_1,(uint)param_1[1],(uint)param_1[2],
            (uint)param_1[3],(uint)param_1[4],(uint)param_1[5]);
  }
  return __s;
}



/* ===== <EXTERNAL>::free @ 0001bdcc size=4 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0003ffa8)(__ptr);
  return;
}



/* ===== FUN_0001e84c @ 0001e84c size=44 ===== */

void FUN_0001e84c(int *param_1,code *param_2,undefined4 param_3)

{
  for (; param_1 != (int *)0x0; param_1 = (int *)*param_1) {
    (*param_2)(param_1[1],param_3);
  }
  return;
}



/* ===== FUN_0001e8ac @ 0001e8ac size=40 ===== */

int FUN_0001e8ac(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == 0 || param_2 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (uint)*(ushort *)(param_1 + 2) - (uint)*(ushort *)(param_2 + 2);
  }
  return iVar1;
}



/* ===== FUN_0001e8d4 @ 0001e8d4 size=56 ===== */

void FUN_0001e8d4(undefined4 *param_1,code *param_2)

{
  void *pvVar1;
  
  while (param_1 != (void *)0x0) {
    pvVar1 = (void *)*param_1;
    if (param_2 != (code *)0x0) {
      (*param_2)(param_1[1]);
    }
    free(param_1);
    param_1 = pvVar1;
  }
  return;
}



/* ===== FUN_0001e90c @ 0001e90c size=16 ===== */

void FUN_0001e90c(int param_1,int param_2)

{
  memcmp((void *)(param_1 + 4),(void *)(param_2 + 4),0x10);
  return;
}



/* ===== FUN_0001e91c @ 0001e91c size=84 ===== */

void FUN_0001e91c(byte *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte *pbVar4;
  
  if (param_1 == (byte *)0x0) {
    return;
  }
  if (2 < *param_1 - 0x35) {
    return;
  }
  pbVar4 = *(byte **)(param_1 + 8);
  if (pbVar4 == (byte *)0x0) {
    return;
  }
  if (3 < *pbVar4 - 0x19) {
    return;
  }
  uVar1 = *(undefined4 *)(pbVar4 + 0xc);
  uVar2 = *(undefined4 *)(pbVar4 + 0x10);
  uVar3 = *(undefined4 *)(pbVar4 + 0x14);
  *param_2 = *(undefined4 *)(pbVar4 + 8);
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  param_2[4] = *(undefined4 *)(pbVar4 + 0x18);
  return;
}



/* ===== FUN_0001e970 @ 0001e970 size=96 ===== */

void FUN_0001e970(byte *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)*param_1;
  if (uVar2 < 0x38) {
    if (0x34 < uVar2) {
      iVar1 = *(int *)(param_1 + 8);
      while (iVar1 != 0) {
        iVar1 = *(int *)(iVar1 + 0x20);
        FUN_0001e970();
      }
      goto LAB_0001e99c;
    }
    uVar2 = uVar2 - 0x25;
  }
  else {
    uVar2 = uVar2 - 0x45;
  }
  if (uVar2 < 3) {
    free(*(void **)(param_1 + 8));
  }
LAB_0001e99c:
  free(param_1);
  return;
}



/* ===== FUN_0001e9d0 @ 0001e9d0 size=104 ===== */

int FUN_0001e9d0(undefined1 *param_1,int param_2,byte *param_3)

{
  size_t __n;
  
  if (param_3 != (byte *)0x0) {
    __n = (size_t)*param_3;
    if (param_2 <= (int)__n) {
      __n = param_2 - 1U & 0xff;
      syslog(3,(char *)(DAT_0001ea3c + 0x1ea10),DAT_0001ea38 + 0x1ea08);
    }
    *param_1 = (char)__n;
    memcpy(param_1 + 1,param_3 + 1,__n);
    return __n + 1;
  }
  *param_1 = 0;
  return 1;
}



/* ===== FUN_0001ea40 @ 0001ea40 size=76 ===== */

undefined4 FUN_0001ea40(int *param_1,int param_2,uint param_3)

{
  ssize_t sVar1;
  uint uVar2;
  
  uVar2 = 0;
  while( true ) {
    if (param_3 <= uVar2) {
      return 0;
    }
    sVar1 = send(*param_1,(void *)(param_2 + uVar2),param_3 - uVar2,0);
    if (sVar1 < 0) break;
    uVar2 = uVar2 + sVar1;
  }
  return 0xffffffff;
}



/* ===== FUN_0001ea8c @ 0001ea8c size=244 ===== */

void FUN_0001ea8c(uint *param_1,void *param_2)

{
  uint uVar1;
  int *piVar2;
  ssize_t sVar3;
  __fd_mask *p_Var4;
  int iVar5;
  int *piVar6;
  timeval local_9c;
  uint auStack_94 [32];
  int local_14;
  
  piVar6 = *(int **)(DAT_0001eb80 + 0x1ea9c + DAT_0001eb84);
  local_14 = *piVar6;
  iVar5 = 0;
  local_9c.tv_sec = 0x14;
  local_9c.tv_usec = 0;
  p_Var4 = (__fd_mask *)auStack_94;
  do {
    *p_Var4 = 0;
    iVar5 = iVar5 + 1;
    p_Var4 = p_Var4 + 1;
  } while (iVar5 != 0x20);
  uVar1 = *param_1;
  auStack_94[uVar1 >> 5] = auStack_94[uVar1 >> 5] | 1 << (uVar1 & 0x1f);
  iVar5 = select(uVar1 + 1,(fd_set *)auStack_94,(fd_set *)0x0,(fd_set *)0x0,&local_9c);
  if (iVar5 == 0) {
    syslog(3,(char *)(DAT_0001eb8c + 0x1eb38),DAT_0001eb88 + 0x1eb40);
    piVar2 = __errno_location();
    *piVar2 = 0x6e;
    sVar3 = -1;
  }
  else {
    sVar3 = recv(*param_1,param_2,0xffff,0);
  }
  if (local_14 != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(sVar3);
  }
  return;
}



/* ===== FUN_0001eb90 @ 0001eb90 size=248 ===== */

undefined4 FUN_0001eb90(byte *param_1,char *param_2,size_t param_3,undefined4 param_4)

{
  char *__format;
  uint uVar1;
  uint uVar2;
  
  if (param_1 == (byte *)0x0) {
    snprintf(param_2,param_3,(char *)(DAT_0001ec88 + 0x1ebb4),param_4,0,param_2,param_3,param_4);
    return 0xfffffffe;
  }
  uVar1 = (uint)*param_1;
  if (uVar1 == 0x1a) {
    uVar1 = *(uint *)(param_1 + 4);
    __format = (char *)(DAT_0001ec90 + 0x1ec08);
  }
  else {
    if (uVar1 == 0x1c) {
      uVar2 = *(uint *)(param_1 + 0xe);
      uVar1 = *(uint *)(param_1 + 4);
      snprintf(param_2,param_3,(char *)(DAT_0001ec94 + 0x1ec6c),
               uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 |
               uVar1 >> 0x18,
               (*(ushort *)(param_1 + 8) & 0xff) << 8 | (uint)(*(ushort *)(param_1 + 8) >> 8),
               (*(ushort *)(param_1 + 10) & 0xff) << 8 | (uint)(*(ushort *)(param_1 + 10) >> 8),
               (*(ushort *)(param_1 + 0xc) & 0xff) << 8 | (uint)(*(ushort *)(param_1 + 0xc) >> 8),
               uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
               uVar2 >> 0x18,
               (*(ushort *)(param_1 + 0x12) & 0xff) << 8 | (uint)(*(ushort *)(param_1 + 0x12) >> 8))
      ;
      return 0;
    }
    if (uVar1 != 0x19) {
      snprintf(param_2,param_3,(char *)(DAT_0001ec98 + 0x1ec80),uVar1,param_1,param_2,param_3,
               param_4);
      return 0xffffffff;
    }
    uVar1 = (uint)*(ushort *)(param_1 + 4);
    __format = (char *)(DAT_0001ec8c + 0x1ebec);
  }
  snprintf(param_2,param_3,__format,uVar1,param_1,param_2,param_3,param_4);
  return 0;
}



/* ===== FUN_0001ecd0 @ 0001ecd0 size=192 ===== */

void FUN_0001ecd0(undefined1 *param_1,uint param_2)

{
  switch(*param_1) {
  case 0x25:
    goto LAB_0001ed70;
  case 0x26:
    goto LAB_0001ed78;
  case 0x27:
    goto LAB_0001ed84;
  case 0x28:
    break;
  case 0x29:
    break;
  case 0x2a:
    break;
  case 0x2b:
    break;
  case 0x2c:
    break;
  case 0x2d:
    break;
  case 0x2e:
    break;
  case 0x2f:
    break;
  case 0x30:
    break;
  case 0x31:
    break;
  case 0x32:
    break;
  case 0x33:
    break;
  case 0x34:
    break;
  case 0x35:
    goto LAB_0001ed70;
  case 0x36:
    goto LAB_0001ed78;
  case 0x37:
    goto LAB_0001ed84;
  case 0x38:
    break;
  case 0x39:
    break;
  case 0x3a:
    break;
  case 0x3b:
    break;
  case 0x3c:
    break;
  case 0x3d:
    goto LAB_0001ed70;
  case 0x3e:
    goto LAB_0001ed78;
  case 0x3f:
    goto LAB_0001ed84;
  case 0x40:
    break;
  case 0x41:
    break;
  case 0x42:
    break;
  case 0x43:
    break;
  case 0x44:
    break;
  case 0x45:
LAB_0001ed70:
    param_1[1] = (char)param_2;
    return;
  case 0x46:
LAB_0001ed78:
    *(ushort *)(param_1 + 1) = (ushort)((param_2 & 0xff) << 8) | (ushort)(param_2 >> 8) & 0xff;
    return;
  case 0x47:
LAB_0001ed84:
    *(uint *)(param_1 + 1) =
         param_2 << 0x18 | (param_2 >> 8 & 0xff) << 0x10 | (param_2 >> 0x10 & 0xff) << 8 |
         param_2 >> 0x18;
  }
  return;
}



/* ===== FUN_0001ed90 @ 0001ed90 size=32 ===== */

void FUN_0001ed90(undefined4 *param_1,uint param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_1;
  *puVar1 = 9;
  *(ushort *)(puVar1 + 1) = (ushort)((param_2 & 0xff) << 8) | (ushort)(param_2 >> 8) & 0xff;
  param_1[1] = 3;
  return;
}



/* ===== FUN_0001edb0 @ 0001edb0 size=852 ===== */

void FUN_0001edb0(int *param_1,byte *param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  byte *pbVar7;
  int *piVar8;
  byte *pbVar9;
  int iVar11;
  uint *__src;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  ushort local_4e;
  uint local_4c;
  uint local_48;
  uint uStack_44;
  uint auStack_3c [3];
  byte bStack_2d;
  int local_2c;
  byte *pbVar10;
  
  iVar2 = DAT_0001f10c;
  piVar8 = *(int **)(DAT_0001f104 + 0x1edc0 + DAT_0001f108);
  iVar12 = param_1[1];
  iVar14 = *param_1;
  iVar13 = iVar14 + iVar12;
  local_2c = *piVar8;
  while( true ) {
    uVar3 = *param_2 - 0x25 & 0xff;
    if (uVar3 < 0x23) {
      iVar11 = (int)*(char *)(iVar2 + uVar3 + 0x1ee0d);
    }
    else {
      iVar11 = 1;
    }
    param_1[1] = iVar12 + iVar11;
    uVar3 = FUN_0001f15c(param_1,param_2);
    if ((uVar3 < 0x100) || (*param_2 != 0x35)) break;
    param_1[1] = iVar12;
    *param_2 = 0x36;
  }
  *(byte *)(iVar14 + iVar12) = *param_2;
  switch(*param_2) {
  case 8:
    goto LAB_0001ef68;
  case 9:
    goto LAB_0001f008;
  case 10:
    goto LAB_0001f024;
  case 0xb:
    goto LAB_0001f040;
  case 0xc:
    pbVar7 = &bStack_2d;
    pbVar10 = param_2 + 8;
    do {
      pbVar9 = pbVar10 + 1;
      *pbVar7 = *pbVar10;
      pbVar7 = pbVar7 + -1;
      pbVar10 = pbVar9;
    } while (pbVar9 != param_2 + 0x18);
    goto LAB_0001ef94;
  case 0xd:
    break;
  case 0xe:
    break;
  case 0xf:
    break;
  case 0x10:
    goto LAB_0001ef68;
  case 0x11:
LAB_0001f008:
    uVar1 = *(ushort *)(param_2 + 8);
LAB_0001f00c:
    local_4e = uVar1 << 8 | uVar1 >> 8;
    puVar4 = (uint *)0x0;
    __src = (uint *)&local_4e;
    puVar5 = (uint *)0x0;
    goto LAB_0001efa0;
  case 0x12:
LAB_0001f024:
    uVar6 = *(uint *)(param_2 + 8);
LAB_0001f028:
    local_4c = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
               uVar6 >> 0x18;
    puVar4 = (uint *)0x0;
    __src = &local_4c;
    puVar5 = puVar4;
    goto LAB_0001efa0;
  case 0x13:
LAB_0001f040:
    uVar6 = *(uint *)(param_2 + 8);
    puVar4 = (uint *)0x0;
    uVar15 = *(uint *)(param_2 + 0xc);
    __src = &local_48;
    uStack_44 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                uVar6 >> 0x18;
    local_48 = uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
               uVar15 >> 0x18;
    puVar5 = puVar4;
    goto LAB_0001efa0;
  case 0x14:
    pbVar7 = &bStack_2d;
    pbVar10 = param_2 + 8;
    do {
      pbVar9 = pbVar10 + 1;
      *pbVar7 = *pbVar10;
      pbVar7 = pbVar7 + -1;
      pbVar10 = pbVar9;
    } while (pbVar9 != param_2 + 0x18);
LAB_0001ef94:
    puVar4 = (uint *)0x0;
    __src = auStack_3c;
    puVar5 = (uint *)0x0;
    goto LAB_0001efa0;
  case 0x15:
    break;
  case 0x16:
    break;
  case 0x17:
    break;
  case 0x18:
    break;
  case 0x19:
    uVar1 = *(ushort *)(param_2 + 0xc);
    goto LAB_0001f00c;
  case 0x1a:
    uVar6 = *(uint *)(param_2 + 0xc);
    goto LAB_0001f028;
  case 0x1b:
    break;
  case 0x1c:
    __src = (uint *)(param_2 + 0xc);
    goto LAB_0001ef6c;
  case 0x1d:
    break;
  case 0x1e:
    break;
  case 0x1f:
    break;
  case 0x20:
    break;
  case 0x21:
    break;
  case 0x22:
    break;
  case 0x23:
    break;
  case 0x24:
    break;
  case 0x25:
    goto LAB_0001f08c;
  case 0x26:
    goto LAB_0001f08c;
  case 0x27:
    goto LAB_0001f08c;
  case 0x28:
LAB_0001ef68:
    __src = (uint *)(param_2 + 8);
    goto LAB_0001ef6c;
  case 0x29:
    break;
  case 0x2a:
    break;
  case 0x2b:
    break;
  case 0x2c:
    break;
  case 0x2d:
    break;
  case 0x2e:
    break;
  case 0x2f:
    break;
  case 0x30:
    break;
  case 0x31:
    break;
  case 0x32:
    break;
  case 0x33:
    break;
  case 0x34:
    break;
  case 0x35:
    goto LAB_0001f0a0;
  case 0x36:
    goto LAB_0001f0a0;
  case 0x37:
LAB_0001f0a0:
    FUN_0001ecd0(iVar13,uVar3);
    puVar5 = (uint *)0x1;
    goto LAB_0001f0b4;
  case 0x38:
    break;
  case 0x39:
    break;
  case 0x3a:
    break;
  case 0x3b:
    break;
  case 0x3c:
    break;
  case 0x3d:
    goto LAB_0001f0bc;
  case 0x3e:
    goto LAB_0001f0bc;
  case 0x3f:
LAB_0001f0bc:
    FUN_0001ecd0(iVar13,uVar3);
    puVar4 = (uint *)0x1;
    __src = (uint *)0x0;
    puVar5 = (uint *)0x0;
    goto LAB_0001efa0;
  case 0x40:
    break;
  case 0x41:
    break;
  case 0x42:
    break;
  case 0x43:
    break;
  case 0x44:
    break;
  case 0x45:
    goto LAB_0001f08c;
  case 0x46:
    goto LAB_0001f08c;
  case 0x47:
LAB_0001f08c:
    __src = *(uint **)(param_2 + 8);
    FUN_0001ecd0(iVar13,uVar3);
LAB_0001ef6c:
    puVar4 = (uint *)0x0;
    puVar5 = (uint *)0x0;
    goto LAB_0001efa0;
  }
  puVar5 = (uint *)0x0;
LAB_0001f0b4:
  puVar4 = (uint *)0x0;
  __src = puVar4;
LAB_0001efa0:
  if (__src == (uint *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = ((uint)puVar5 | (uint)puVar4) ^ 1;
  }
  if ((uVar6 != 0) && (param_1[1] + uVar3 <= (uint)param_1[2])) {
    memcpy((void *)(*param_1 + param_1[1]),__src,uVar3);
    param_1[1] = param_1[1] + uVar3;
  }
  if (local_2c != *piVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar11 + uVar3);
  }
  return;
}



/* ===== FUN_0001f15c @ 0001f15c size=420 ===== */

int FUN_0001f15c(int *param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  switch(*param_2) {
  case 8:
    return 1;
  case 9:
    return 2;
  case 10:
    return 4;
  case 0xb:
    return 8;
  case 0xc:
    return 0x10;
  case 0xd:
    break;
  case 0xe:
    break;
  case 0xf:
    break;
  case 0x10:
    return 1;
  case 0x11:
    return 2;
  case 0x12:
    return 4;
  case 0x13:
    return 8;
  case 0x14:
    return 0x10;
  case 0x15:
    break;
  case 0x16:
    break;
  case 0x17:
    break;
  case 0x18:
    break;
  case 0x19:
    return 2;
  case 0x1a:
    return 4;
  case 0x1b:
    break;
  case 0x1c:
    return 0x10;
  case 0x1d:
    break;
  case 0x1e:
    break;
  case 0x1f:
    break;
  case 0x20:
    break;
  case 0x21:
    break;
  case 0x22:
    break;
  case 0x23:
    break;
  case 0x24:
    break;
  case 0x25:
    goto LAB_0001f298;
  case 0x26:
    goto LAB_0001f298;
  case 0x27:
    goto LAB_0001f298;
  case 0x28:
    return 1;
  case 0x29:
    break;
  case 0x2a:
    break;
  case 0x2b:
    break;
  case 0x2c:
    break;
  case 0x2d:
    break;
  case 0x2e:
    break;
  case 0x2f:
    break;
  case 0x30:
    break;
  case 0x31:
    break;
  case 0x32:
    break;
  case 0x33:
    break;
  case 0x34:
    break;
  case 0x35:
    goto LAB_0001f2a4;
  case 0x36:
    goto LAB_0001f2a4;
  case 0x37:
    goto LAB_0001f2a4;
  case 0x38:
    break;
  case 0x39:
    break;
  case 0x3a:
    break;
  case 0x3b:
    break;
  case 0x3c:
    break;
  case 0x3d:
    goto LAB_0001f2a4;
  case 0x3e:
    goto LAB_0001f2a4;
  case 0x3f:
LAB_0001f2a4:
    iVar3 = 0;
    for (iVar2 = *(int *)(param_2 + 8); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x20)) {
      if (*param_1 == 0) {
        iVar1 = FUN_0001f2b4(param_1,iVar2);
      }
      else {
        iVar1 = FUN_0001edb0();
      }
      iVar3 = iVar3 + iVar1;
    }
    return iVar3;
  case 0x40:
    break;
  case 0x41:
    break;
  case 0x42:
    break;
  case 0x43:
    break;
  case 0x44:
    break;
  case 0x45:
    goto LAB_0001f298;
  case 0x46:
    goto LAB_0001f298;
  case 0x47:
LAB_0001f298:
    return *(int *)(param_2 + 0x24) + -1;
  }
  return 0;
}



/* ===== FUN_0001f2b4 @ 0001f2b4 size=152 ===== */

int FUN_0001f2b4(int param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 8);
  cVar1 = *param_2;
  if ((iVar4 == 0) && (cVar1 == '\0')) {
    *(undefined4 *)(param_1 + 8) = 2;
  }
  uVar2 = (uint)(byte)(cVar1 - 0x25);
  if (uVar2 < 0x23) {
    iVar3 = (int)*(char *)(DAT_0001f34c + uVar2 + 0x1f31d);
  }
  else {
    iVar3 = 1;
  }
  *(int *)(param_1 + 8) = iVar3 + *(int *)(param_1 + 8) + 3;
  iVar3 = FUN_0001f15c(param_1,param_2);
  uVar2 = iVar3 + *(int *)(param_1 + 8);
  *(uint *)(param_1 + 8) = uVar2;
  if ((0xff < uVar2) && (*param_2 == '5')) {
    *(uint *)(param_1 + 8) = uVar2 + 1;
  }
  return *(int *)(param_1 + 8) - iVar4;
}



/* ===== FUN_0001f360 @ 0001f360 size=128 ===== */

undefined4 FUN_0001f360(int param_1,undefined8 *param_2)

{
  void *__s;
  size_t __size;
  
  *param_2 = 0;
  *(undefined8 *)((int)param_2 + 4) = 0;
  FUN_0001e84c(*(undefined4 *)(param_1 + 8),DAT_0001f3e0 + 0x1f38c,param_2);
  __size = *(size_t *)(param_2 + 1);
  __s = malloc(__size);
  *(void **)param_2 = __s;
  if (__s != (void *)0x0) {
    *(undefined4 *)((int)param_2 + 4) = 0;
    memset(__s,0,__size);
    FUN_0001e84c(*(undefined4 *)(param_1 + 8),DAT_0001f3e4 + 0x1f3d0,param_2);
    return 0;
  }
  return 0xfffffff4;
}



/* ===== FUN_0001f3e8 @ 0001f3e8 size=228 ===== */

undefined4 FUN_0001f3e8(byte *param_1,int param_2,byte *param_3,uint *param_4)

{
  byte bVar1;
  char *__fmt;
  int iVar2;
  uint uVar3;
  
  if (0 < param_2) {
    bVar1 = *param_1;
    *param_3 = bVar1;
    uVar3 = bVar1 - 0x35 & 0xff;
    if (10 < uVar3) {
LAB_0001f4b4:
      __fmt = (char *)(DAT_0001f4d8 + 0x1f4c8);
      iVar2 = DAT_0001f4d4 + 0x1f500;
      goto LAB_0001f408;
    }
    uVar3 = 1 << uVar3;
    if ((uVar3 & 0x404) == 0) {
      if ((uVar3 & 0x202) == 0) {
        if ((uVar3 & 0x101) == 0) goto LAB_0001f4b4;
        if (param_2 != 1) {
          *param_4 = (uint)param_1[1];
          return 2;
        }
      }
      else if (1 < param_2 - 1U) {
        *param_4 = (*(ushort *)(param_1 + 1) & 0xff) << 8 | (uint)(*(ushort *)(param_1 + 1) >> 8);
        return 3;
      }
    }
    else if (3 < param_2 - 1U) {
      uVar3 = *(uint *)(param_1 + 1);
      *param_4 = uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
                 uVar3 >> 0x18;
      return 5;
    }
  }
  __fmt = (char *)(DAT_0001f4d0 + 0x1f408);
  iVar2 = DAT_0001f4cc + 0x1f440;
LAB_0001f408:
  syslog(3,__fmt,iVar2);
  return 0;
}



/* ===== FUN_0001f4dc @ 0001f4dc size=124 ===== */

void FUN_0001f4dc(int param_1,undefined2 param_2)

{
  undefined2 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined1 auStack_40 [2];
  undefined2 local_3e;
  int local_14;
  
  piVar5 = *(int **)(DAT_0001f558 + 0x1f4ec + DAT_0001f55c);
  piVar3 = *(int **)(param_1 + 8);
  local_14 = *piVar5;
  uVar1 = local_3e;
  local_3e = param_2;
  do {
    uVar4 = 0;
    if (piVar3 == (int *)0x0) {
LAB_0001f530:
      local_3e = uVar1;
      if (local_14 != *piVar5) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar4);
      }
      return;
    }
    iVar2 = FUN_0001e8ac(piVar3[1],auStack_40);
    uVar1 = local_3e;
    if (iVar2 == 0) {
      uVar4 = piVar3[1];
      goto LAB_0001f530;
    }
    piVar3 = (int *)*piVar3;
  } while( true );
}



/* ===== FUN_0001f560 @ 0001f560 size=176 ===== */

void FUN_0001f560(undefined4 param_1)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)FUN_0001f4dc(param_1,0x100);
  if ((pbVar1 != (byte *)0x0) && (*pbVar1 - 0x25 < 3)) {
    printf((char *)(DAT_0001f610 + 0x1f59c),*(undefined4 *)(pbVar1 + 0x24),
           *(undefined4 *)(pbVar1 + 8));
  }
  pbVar1 = (byte *)FUN_0001f4dc(param_1,0x101);
  if ((pbVar1 != (byte *)0x0) && (*pbVar1 - 0x25 < 3)) {
    printf((char *)(DAT_0001f614 + 0x1f5d4),*(undefined4 *)(pbVar1 + 0x24),
           *(undefined4 *)(pbVar1 + 8));
  }
  pbVar1 = (byte *)FUN_0001f4dc(param_1,0x102);
  if (pbVar1 == (byte *)0x0) {
    return;
  }
  if (2 < *pbVar1 - 0x25) {
    return;
  }
  printf((char *)((int)&DAT_0001f610 + DAT_0001f618),*(undefined4 *)(pbVar1 + 0x24),
         *(undefined4 *)(pbVar1 + 8));
  return;
}



/* ===== FUN_0001f61c @ 0001f61c size=140 ===== */

undefined4 FUN_0001f61c(undefined4 param_1,int param_2,int param_3,undefined4 param_4,int *param_5)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_0001ea40(param_1,param_2,param_4);
  if (iVar1 < 0) {
    syslog(3,(char *)(DAT_0001f6ac + 0x1f654),DAT_0001f6a8 + 0x1f6a0);
  }
  else {
    iVar1 = FUN_0001ea8c(param_1,param_3);
    if (-1 < iVar1) {
      if ((iVar1 != 0) && (*(short *)(param_2 + 1) == *(short *)(param_3 + 1))) {
        *param_5 = iVar1;
        return 0;
      }
      piVar2 = __errno_location();
      *piVar2 = 0x47;
    }
  }
  return 0xffffffff;
}



/* ===== FUN_0001f6b0 @ 0001f6b0 size=84 ===== */

undefined4 * FUN_0001f6b0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = malloc(8);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar1[1] = param_2;
  *puVar1 = 0;
  puVar2 = param_1;
  if (param_1 != (undefined4 *)0x0) {
    do {
      puVar3 = puVar2;
      puVar2 = (undefined4 *)*puVar3;
    } while (puVar2 != (undefined4 *)0x0);
    *puVar3 = puVar1;
    return param_1;
  }
  return puVar1;
}



/* ===== FUN_0001f704 @ 0001f704 size=272 ===== */

undefined4 FUN_0001f704(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  byte *pbVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  
  iVar7 = DAT_0001f814 + 0x1f724;
  iVar5 = param_1;
  pbVar1 = (byte *)FUN_0001f4dc(param_2,param_1,param_3,param_4,param_1,param_2);
  if (pbVar1 == (byte *)0x0) {
    piVar2 = __errno_location();
    iVar5 = 0x3d;
LAB_0001f734:
    *piVar2 = iVar5;
    uVar3 = 0xffffffff;
  }
  else {
    if (param_1 == 0xd) {
      if (2 < *pbVar1 - 0x35) {
LAB_0001f75c:
        piVar2 = __errno_location();
        iVar5 = 0x16;
        goto LAB_0001f734;
      }
      pbVar1 = *(byte **)(pbVar1 + 8);
    }
    uVar3 = 0;
    for (; pbVar1 != (byte *)0x0; pbVar1 = *(byte **)(pbVar1 + 0x20)) {
      if (2 < (*pbVar1 & 0xfffffff7) - 0x35) {
LAB_0001f7d8:
        uVar4 = *(undefined4 *)(iVar7 + DAT_0001f818);
        FUN_0001e84c(uVar3,uVar4,0,uVar4,iVar5,uVar4);
        FUN_0001e8d4(uVar3,0);
        goto LAB_0001f75c;
      }
      uVar4 = 0;
      for (pbVar6 = *(byte **)(pbVar1 + 8); pbVar6 != (byte *)0x0;
          pbVar6 = *(byte **)(pbVar6 + 0x20)) {
        if (2 < *pbVar6 - 0x35) {
          FUN_0001e8d4(uVar4,0);
          goto LAB_0001f7d8;
        }
        uVar4 = FUN_0001f6b0(uVar4,*(undefined4 *)(pbVar6 + 8));
      }
      uVar3 = FUN_0001f6b0(uVar3,uVar4);
    }
    *param_3 = uVar3;
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== FUN_0001f81c @ 0001f81c size=80 ===== */

undefined4 * FUN_0001f81c(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *__ptr;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)0x0;
  __ptr = param_1;
  if (param_1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  do {
    puVar2 = (undefined4 *)*__ptr;
    if (__ptr[1] == param_2) {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = puVar2;
        puVar2 = param_1;
      }
      free(__ptr);
      return puVar2;
    }
    puVar1 = __ptr;
    __ptr = puVar2;
  } while (puVar2 != (undefined4 *)0x0);
  return param_1;
}



/* ===== FUN_0001f86c @ 0001f86c size=68 ===== */

void FUN_0001f86c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0001f4dc();
  if (iVar1 != 0) {
    uVar2 = FUN_0001f81c(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = uVar2;
  }
  if (param_2 != 1) {
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  return;
}



/* ===== FUN_0001f8b0 @ 0001f8b0 size=112 ===== */

undefined4 * FUN_0001f8b0(undefined4 *param_1,undefined4 param_2,code *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar2 = malloc(8);
  puVar4 = puVar2;
  if (puVar2 != (void *)0x0) {
    puVar2[1] = param_2;
    puVar1 = param_1;
    puVar6 = (undefined4 *)0x0;
    while ((puVar5 = puVar1, puVar5 != (undefined4 *)0x0 &&
           (iVar3 = (*param_3)(puVar5[1],param_2), iVar3 < 0))) {
      puVar1 = (undefined4 *)*puVar5;
      puVar6 = puVar5;
    }
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = puVar2;
      puVar4 = param_1;
    }
    *puVar2 = puVar5;
  }
  return puVar4;
}



/* ===== FUN_0001f920 @ 0001f920 size=108 ===== */

undefined4 FUN_0001f920(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar1 = DAT_0001f98c;
  iVar5 = param_1;
  iVar3 = FUN_0001f4dc();
  iVar2 = DAT_0001f990;
  if (iVar3 == 0) {
    *(short *)(param_3 + 2) = (short)param_2;
    uVar4 = *(undefined4 *)(iVar1 + 0x1f940 + iVar2);
    uVar4 = FUN_0001f8b0(*(undefined4 *)(param_1 + 8),param_3,uVar4,uVar4,iVar5,uVar4);
    *(undefined4 *)(param_1 + 8) = uVar4;
    if (param_2 == 1) {
      FUN_0001e91c(param_3,param_1 + 0xc);
    }
    uVar4 = 0;
  }
  else {
    uVar4 = 0xffffffff;
  }
  return uVar4;
}



/* ===== FUN_0001f994 @ 0001f994 size=132 ===== */

void FUN_0001f994(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = DAT_0001fa18;
  iVar4 = param_1;
  iVar2 = FUN_0001f4dc();
  if (iVar2 != 0) {
    uVar3 = FUN_0001f81c(*(undefined4 *)(param_1 + 8),iVar2);
    *(undefined4 *)(param_1 + 8) = uVar3;
    FUN_0001e970(iVar2);
  }
  iVar2 = DAT_0001fa1c;
  *(short *)(param_3 + 2) = (short)param_2;
  uVar3 = *(undefined4 *)(iVar1 + 0x1f9b4 + iVar2);
  uVar3 = FUN_0001f8b0(*(undefined4 *)(param_1 + 8),param_3,uVar3,uVar3,iVar4,uVar3);
  *(undefined4 *)(param_1 + 8) = uVar3;
  if (param_2 == 1) {
    FUN_0001e91c(param_3,param_1 + 0xc);
    return;
  }
  return;
}



/* ===== FUN_0001fed0 @ 0001fed0 size=100 ===== */

undefined4 FUN_0001fed0(undefined4 param_1,undefined4 param_2,char *param_3,int param_4)

{
  byte *pbVar1;
  size_t sVar2;
  int *piVar3;
  char *__s;
  
  pbVar1 = (byte *)FUN_0001f4dc();
  if ((pbVar1 != (byte *)0x0) && (*pbVar1 - 0x25 < 3)) {
    __s = *(char **)(pbVar1 + 8);
    sVar2 = strlen(__s);
    if ((int)sVar2 < param_4) {
      strcpy(param_3,__s);
      return 0;
    }
  }
  piVar3 = __errno_location();
  *piVar3 = 0x16;
  return 0xffffffff;
}



/* ===== FUN_0001ff34 @ 0001ff34 size=76 ===== */

undefined4 FUN_0001ff34(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_0001f4dc(param_1,3);
  if (iVar1 != 0) {
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
    uVar4 = *(undefined4 *)(iVar1 + 0x10);
    uVar5 = *(undefined4 *)(iVar1 + 0x14);
    *param_2 = *(undefined4 *)(iVar1 + 8);
    param_2[1] = uVar3;
    param_2[2] = uVar4;
    param_2[3] = uVar5;
    param_2[4] = *(undefined4 *)(iVar1 + 0x18);
    return 0;
  }
  piVar2 = __errno_location();
  *piVar2 = 0x16;
  return 0xffffffff;
}



/* ===== FUN_0001ff80 @ 0001ff80 size=76 ===== */

undefined4 FUN_0001ff80(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_0001f4dc(param_1,0x200);
  if (iVar1 != 0) {
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
    uVar4 = *(undefined4 *)(iVar1 + 0x10);
    uVar5 = *(undefined4 *)(iVar1 + 0x14);
    *param_2 = *(undefined4 *)(iVar1 + 8);
    param_2[1] = uVar3;
    param_2[2] = uVar4;
    param_2[3] = uVar5;
    param_2[4] = *(undefined4 *)(iVar1 + 0x18);
    return 0;
  }
  piVar2 = __errno_location();
  *piVar2 = 0x16;
  return 0xffffffff;
}



/* ===== FUN_0001ffcc @ 0001ffcc size=60 ===== */

undefined4 FUN_0001ffcc(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_0001f4dc(param_1,2);
  if (iVar1 != 0) {
    *param_2 = *(undefined4 *)(iVar1 + 8);
    return 0;
  }
  piVar2 = __errno_location();
  *piVar2 = 0x16;
  return 0xffffffff;
}



/* ===== FUN_00020008 @ 00020008 size=60 ===== */

undefined4 FUN_00020008(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_0001f4dc(param_1,8);
  if (iVar1 != 0) {
    *param_2 = *(undefined1 *)(iVar1 + 8);
    return 0;
  }
  piVar2 = __errno_location();
  *piVar2 = 0x16;
  return 0xffffffff;
}



/* ===== FUN_00020044 @ 00020044 size=60 ===== */

undefined4 FUN_00020044(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_0001f4dc(param_1,7);
  if (iVar1 != 0) {
    *param_2 = *(undefined4 *)(iVar1 + 8);
    return 0;
  }
  piVar2 = __errno_location();
  *piVar2 = 0x16;
  return 0xffffffff;
}



/* ===== FUN_00020080 @ 00020080 size=60 ===== */

undefined4 FUN_00020080(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_0001f4dc(param_1,0x201);
  if (iVar1 != 0) {
    *param_2 = *(undefined4 *)(iVar1 + 8);
    return 0;
  }
  piVar2 = __errno_location();
  *piVar2 = 0x16;
  return 0xffffffff;
}



/* ===== FUN_000200bc @ 000200bc size=32 ===== */

void FUN_000200bc(undefined4 *param_1,undefined2 param_2)

{
  *param_1 = 0;
  param_1[1] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_1[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_1[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  param_1[3] = 0;
  param_1[4] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined2 *)(param_1 + 1) = param_2;
  *(undefined1 *)param_1 = 0x19;
  return;
}



/* ===== FUN_000200dc @ 000200dc size=32 ===== */

void FUN_000200dc(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = 0;
  param_1[1] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_1[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_1[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  param_1[3] = 0;
  param_1[4] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_1[1] = param_2;
  *(undefined1 *)param_1 = 0x1a;
  return;
}



/* ===== FUN_000200fc @ 000200fc size=52 ===== */

void FUN_000200fc(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *param_1 = 0;
  param_1[1] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_1[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_1[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  param_1[3] = 0;
  param_1[4] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined1 *)param_1 = 0x1c;
  puVar1 = param_2;
  do {
    param_1 = param_1 + 1;
    puVar2 = puVar1 + 1;
    *param_1 = *puVar1;
    puVar1 = puVar2;
  } while (puVar2 != param_2 + 4);
  return;
}



/* ===== FUN_00020130 @ 00020130 size=836 ===== */

undefined4 * FUN_00020130(uint param_1,undefined4 *param_2,uint param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *__ptr;
  void *__dest;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  __ptr = malloc(0x28);
  if (__ptr == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  uVar4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  __ptr[9] = 1;
  *__ptr = 0;
  __ptr[1] = uVar4;
  __ptr[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  __ptr[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  __ptr[6] = 0;
  __ptr[7] = uVar4;
  __ptr[4] = 0;
  __ptr[5] = uVar4;
  __ptr[7] = 0;
  __ptr[8] = uVar4;
  *(char *)__ptr = (char)param_1;
  switch(param_1) {
  case 0:
    return __ptr;
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
    break;
  case 6:
    break;
  case 7:
    break;
  case 8:
    goto LAB_0002029c;
  case 9:
    goto LAB_000202b4;
  case 10:
    goto LAB_000202cc;
  case 0xb:
    goto LAB_000202dc;
  case 0xc:
    puVar6 = param_2;
    puVar2 = __ptr;
    do {
      puVar5 = puVar6 + 2;
      uVar4 = puVar6[1];
      puVar2[2] = *puVar6;
      puVar2[3] = uVar4;
      puVar6 = puVar5;
      puVar2 = puVar2 + 2;
    } while (puVar5 != param_2 + 4);
    goto LAB_00020318;
  case 0xd:
    break;
  case 0xe:
    break;
  case 0xf:
    break;
  case 0x10:
    goto LAB_0002029c;
  case 0x11:
LAB_000202b4:
    *(undefined2 *)(__ptr + 2) = *(undefined2 *)param_2;
    iVar3 = 3;
    goto LAB_000202a8;
  case 0x12:
LAB_000202cc:
    __ptr[2] = *param_2;
    iVar3 = 5;
    goto LAB_000202a8;
  case 0x13:
LAB_000202dc:
    uVar4 = param_2[1];
    __ptr[2] = *param_2;
    __ptr[3] = uVar4;
    iVar3 = 9;
    goto LAB_000202a8;
  case 0x14:
    puVar6 = param_2;
    puVar2 = __ptr;
    do {
      puVar5 = puVar6 + 2;
      uVar4 = puVar6[1];
      puVar2[2] = *puVar6;
      puVar2[3] = uVar4;
      puVar6 = puVar5;
      puVar2 = puVar2 + 2;
    } while (puVar5 != param_2 + 4);
LAB_00020318:
    iVar3 = 0x11;
    goto LAB_000202a8;
  case 0x15:
    break;
  case 0x16:
    break;
  case 0x17:
    break;
  case 0x18:
    break;
  case 0x19:
    FUN_000200bc(__ptr + 2,*(undefined2 *)param_2);
    iVar3 = __ptr[9] + 2;
    goto LAB_000202a8;
  case 0x1a:
    FUN_000200dc(__ptr + 2,*param_2);
    iVar3 = __ptr[9] + 4;
    goto LAB_000202a8;
  case 0x1b:
    break;
  case 0x1c:
    FUN_000200fc(__ptr + 2,param_2);
    iVar3 = __ptr[9] + 0x10;
    goto LAB_000202a8;
  case 0x1d:
    break;
  case 0x1e:
    break;
  case 0x1f:
    break;
  case 0x20:
    break;
  case 0x21:
    break;
  case 0x22:
    break;
  case 0x23:
    break;
  case 0x24:
    break;
  case 0x25:
    goto LAB_00020394;
  case 0x26:
    goto LAB_00020394;
  case 0x27:
    goto LAB_00020404;
  case 0x28:
LAB_0002029c:
    *(undefined1 *)(__ptr + 2) = *(undefined1 *)param_2;
    iVar3 = 2;
LAB_000202a8:
    __ptr[9] = iVar3;
    return __ptr;
  case 0x29:
    break;
  case 0x2a:
    break;
  case 0x2b:
    break;
  case 0x2c:
    break;
  case 0x2d:
    break;
  case 0x2e:
    break;
  case 0x2f:
    break;
  case 0x30:
    break;
  case 0x31:
    break;
  case 0x32:
    break;
  case 0x33:
    break;
  case 0x34:
    break;
  case 0x35:
    goto LAB_00020424;
  case 0x36:
    goto LAB_00020424;
  case 0x37:
    goto LAB_00020424;
  case 0x38:
    break;
  case 0x39:
    break;
  case 0x3a:
    break;
  case 0x3b:
    break;
  case 0x3c:
    break;
  case 0x3d:
    goto LAB_00020424;
  case 0x3e:
    goto LAB_00020424;
  case 0x3f:
LAB_00020424:
    param_1 = param_1 & 0xf7;
    if (param_1 == 0x35) {
      uVar4 = 2;
    }
    else if (param_1 == 0x36) {
      uVar4 = 3;
    }
    else {
      if (param_1 != 0x37) goto LAB_00020450;
      uVar4 = 5;
    }
    __ptr[9] = uVar4;
LAB_00020450:
    __ptr[2] = param_2;
    while (param_2 != (undefined4 *)0x0) {
      piVar1 = param_2 + 9;
      param_2 = (undefined4 *)param_2[8];
      __ptr[9] = __ptr[9] + *piVar1;
    }
    return __ptr;
  case 0x40:
    break;
  case 0x41:
    break;
  case 0x42:
    break;
  case 0x43:
    break;
  case 0x44:
    break;
  case 0x45:
    goto LAB_00020394;
  case 0x46:
LAB_00020394:
    if (param_2 != (undefined4 *)0x0) {
      __ptr[9] = param_3 + 1;
      if (param_3 < 0x10000) {
        __dest = malloc(param_3);
        __ptr[2] = __dest;
        if (__dest != (void *)0x0) {
          memcpy(__dest,param_2,param_3);
          return __ptr;
        }
      }
      else {
        syslog(3,(char *)(DAT_00020478 + 0x203fc),DAT_00020474 + 0x2045c);
      }
    }
    break;
  case 0x47:
LAB_00020404:
    syslog(3,(char *)(DAT_00020480 + 0x2041c),(int)&DAT_0002047c + DAT_0002047c);
    return __ptr;
  }
  free(__ptr);
  return (undefined4 *)0x0;
}



/* ===== FUN_00020484 @ 00020484 size=80 ===== */

void FUN_00020484(uint param_1,char *param_2)

{
  size_t sVar1;
  
  if ((param_1 < 0x25) || ((0x26 < param_1 && (1 < param_1 - 0x45)))) {
    sVar1 = 0;
  }
  else {
    if (param_2 == (char *)0x0) {
      return;
    }
    sVar1 = strlen(param_2);
  }
  FUN_00020130(param_1,param_2,sVar1);
  return;
}



/* ===== FUN_000204d4 @ 000204d4 size=124 ===== */

undefined4 FUN_000204d4(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = 0;
  iVar3 = 0;
  iVar1 = 0;
  while( true ) {
    iVar6 = iVar1;
    iVar5 = iVar3;
    if (param_3 <= iVar4) {
      uVar2 = FUN_00020484(0x35,iVar6);
      return uVar2;
    }
    iVar3 = *(int *)(param_2 + iVar4 * 4);
    if (10 < **(byte **)(param_1 + iVar4 * 4) - 0x35) {
      iVar3 = FUN_00020484();
    }
    if (iVar3 == 0) break;
    iVar4 = iVar4 + 1;
    iVar1 = iVar3;
    if (iVar5 != 0) {
      *(int *)(iVar5 + 0x20) = iVar3;
      iVar1 = iVar6;
    }
  }
  return 0;
}



/* ===== FUN_00020814 @ 00020814 size=60 ===== */

undefined4 FUN_00020814(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00020484(param_3,param_4);
  if (iVar1 != 0) {
    FUN_0001f994(param_1,param_2);
    return 0;
  }
  return 0xffffffff;
}



/* ===== FUN_00020850 @ 00020850 size=96 ===== */

void FUN_00020850(undefined4 param_1,int param_2,int param_3,int param_4)

{
  if (param_2 != 0) {
    FUN_00020814(param_1,0x100,0x25);
  }
  if (param_3 != 0) {
    FUN_00020814(param_1,0x102,0x25,param_3);
  }
  if (param_4 == 0) {
    return;
  }
  FUN_00020814(param_1,0x101,0x25,param_4);
  return;
}



/* ===== FUN_000208b0 @ 000208b0 size=76 ===== */

void FUN_000208b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00020814(param_1,0xb,0x45,param_2);
  FUN_00020814(param_1,10,0x45,param_3);
  FUN_00020814(param_1,0xc,0x45,param_4);
  return;
}



/* ===== FUN_000208fc @ 000208fc size=132 ===== */

undefined4 FUN_000208fc(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = 0;
  iVar4 = 0;
  iVar1 = 0;
  while( true ) {
    iVar7 = iVar1;
    iVar6 = iVar4;
    if (param_4 <= iVar5) {
      uVar2 = FUN_00020484(0x35,iVar7);
      return uVar2;
    }
    iVar4 = *(int *)(param_2 + iVar5 * 4);
    uVar3 = (uint)**(byte **)(param_1 + iVar5 * 4);
    if (10 < uVar3 - 0x35) {
      iVar4 = FUN_00020130(uVar3,iVar4,*(undefined4 *)(param_3 + iVar5 * 4));
    }
    if (iVar4 == 0) break;
    iVar5 = iVar5 + 1;
    iVar1 = iVar4;
    if (iVar6 != 0) {
      *(int *)(iVar6 + 0x20) = iVar4;
      iVar1 = iVar7;
    }
  }
  return 0;
}



/* ===== FUN_00020980 @ 00020980 size=248 ===== */

byte * FUN_00020980(byte *param_1,int *param_2)

{
  undefined4 uVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  
  uVar3 = (uint)*param_1;
  if (uVar3 < 0x28) {
    if (0x24 < uVar3) {
LAB_00020a54:
      pbVar5 = *(byte **)(param_1 + 8);
      if (param_2 != (int *)0x0) {
        *param_2 = *(int *)(param_1 + 0x24) + -1;
        return pbVar5;
      }
      return pbVar5;
    }
    if (uVar3 < 0x15) {
      if ((0xf < uVar3) || (uVar3 - 8 < 5)) {
LAB_00020a6c:
        return param_1 + 8;
      }
    }
    else if ((0x18 < uVar3) && ((uVar3 < 0x1b || (uVar3 == 0x1c)))) {
      return param_1 + 0xc;
    }
  }
  else {
    if (uVar3 < 0x40) {
      if (uVar3 < 0x3d) {
        if (uVar3 == 0x28) goto LAB_00020a6c;
        if (2 < uVar3 - 0x35) {
          return (byte *)0x0;
        }
      }
      pbVar5 = (byte *)0x0;
      pbVar7 = (byte *)0x0;
      for (puVar6 = *(undefined1 **)(param_1 + 8); puVar6 != (undefined1 *)0x0;
          puVar6 = *(undefined1 **)(puVar6 + 0x20)) {
        uVar1 = FUN_00020980(puVar6,0);
        pbVar2 = (byte *)FUN_00020130(*puVar6,uVar1,*(undefined4 *)(puVar6 + 0x24));
        pbVar4 = pbVar2;
        if (pbVar7 != (byte *)0x0) {
          *(byte **)(pbVar7 + 0x20) = pbVar2;
          pbVar4 = pbVar5;
        }
        pbVar5 = pbVar4;
        pbVar7 = pbVar2;
      }
      return pbVar5;
    }
    if (uVar3 - 0x45 < 3) goto LAB_00020a54;
  }
  return (byte *)0x0;
}



/* ===== FUN_00020b18 @ 00020b18 size=328 ===== */

undefined4 FUN_00020b18(byte *param_1,int param_2,undefined4 param_3,int *param_4)

{
  byte bVar1;
  char *__fmt;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  bool bVar5;
  
  if (param_2 < 1) {
    __fmt = (char *)(DAT_00020c64 + 0x20b38);
    puVar3 = (undefined *)(DAT_00020c60 + 0x20bb3);
  }
  else {
    bVar1 = *param_1;
    bVar5 = 0x1b < bVar1;
    if (bVar1 != 0x1c) {
      bVar5 = bVar1 != 0x19;
    }
    if (bVar5 && (bVar1 != 0x1c && bVar1 != 0x1a)) {
      syslog(3,(char *)(DAT_00020c6c + 0x20b80),DAT_00020c68 + 0x20bfb);
      return 0xffffffff;
    }
    uVar2 = param_2 - 1;
    *param_4 = *param_4 + 1;
    if (bVar1 == 0x19) {
      if (1 < uVar2) {
        FUN_000200bc(param_3,*(ushort *)(param_1 + 1) << 8 | *(ushort *)(param_1 + 1) >> 8);
        iVar4 = *param_4 + 2;
        goto LAB_00020be4;
      }
      __fmt = (char *)(DAT_00020c74 + 0x20bc8);
      puVar3 = (undefined *)(DAT_00020c70 + 0x20c43);
    }
    else if (bVar1 == 0x1a) {
      if (3 < uVar2) {
        uVar2 = *(uint *)(param_1 + 1);
        FUN_000200dc(param_3,uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 |
                             (uVar2 >> 0x10 & 0xff) << 8 | uVar2 >> 0x18);
        iVar4 = *param_4 + 4;
LAB_00020be4:
        *param_4 = iVar4;
        return 0;
      }
      __fmt = (char *)(DAT_00020c7c + 0x20c10);
      puVar3 = &UNK_00020c8b + DAT_00020c78;
    }
    else {
      if (0xf < uVar2) {
        FUN_000200fc(param_3,param_1 + 1);
        iVar4 = *param_4 + 0x10;
        goto LAB_00020be4;
      }
      __fmt = (char *)(DAT_00020c84 + 0x20c48);
      puVar3 = (undefined *)(DAT_00020c80 + 0x20cc3);
    }
  }
  syslog(3,__fmt,puVar3);
  return 0xffffffff;
}



/* ===== FUN_00020c98 @ 00020c98 size=104 ===== */

void FUN_00020c98(undefined1 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)(param_1 + 4);
  puVar2 = (undefined4 *)(DAT_00020d00 + 0x20d4c);
  puVar3 = (undefined4 *)(DAT_00020d00 + 0x20d3c);
  do {
    puVar4 = puVar3 + 2;
    uVar1 = puVar3[1];
    *puVar5 = *puVar3;
    puVar5[1] = uVar1;
    puVar5 = puVar5 + 2;
    puVar3 = puVar4;
  } while (puVar4 != puVar2);
  *param_1 = 0x1c;
  *(ushort *)(param_1 + 6) =
       *(short *)(DAT_00020d04 + 0x20d86) +
       (*(ushort *)(param_2 + 4) << 8 | *(ushort *)(param_2 + 4) >> 8);
  return;
}



/* ===== FUN_00020d08 @ 00020d08 size=104 ===== */

void FUN_00020d08(undefined1 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  puVar6 = (undefined4 *)(param_1 + 4);
  puVar2 = (undefined4 *)(DAT_00020d70 + 0x20dbc);
  puVar3 = (undefined4 *)(DAT_00020d70 + 0x20dac);
  do {
    puVar4 = puVar3 + 2;
    uVar1 = puVar3[1];
    *puVar6 = *puVar3;
    puVar6[1] = uVar1;
    puVar6 = puVar6 + 2;
    puVar3 = puVar4;
  } while (puVar4 != puVar2);
  *param_1 = 0x1c;
  uVar5 = *(uint *)(param_2 + 4);
  *(uint *)(param_1 + 4) =
       *(int *)(FUN_00020df4 + DAT_00020d74) +
       (uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18);
  return;
}



/* ===== FUN_00020d78 @ 00020d78 size=124 ===== */

undefined4 * FUN_00020d78(char *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  puVar2 = malloc(0x14);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    puVar2[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    puVar2[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    puVar2[3] = 0;
    puVar2[4] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    cVar1 = *param_1;
    if (cVar1 == '\x1a') {
      FUN_00020d08(puVar2,param_1);
    }
    else if (cVar1 == '\x1c') {
      uVar3 = *(undefined4 *)(param_1 + 4);
      uVar4 = *(undefined4 *)(param_1 + 8);
      uVar5 = *(undefined4 *)(param_1 + 0xc);
      *puVar2 = *(undefined4 *)param_1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      puVar2[4] = *(undefined4 *)(param_1 + 0x10);
    }
    else if (cVar1 == '\x19') {
      FUN_00020c98(puVar2,param_1);
    }
  }
  return puVar2;
}



/* ===== FUN_00020df4 @ 00020df4 size=68 ===== */

undefined4 FUN_00020df4(undefined4 param_1,undefined4 param_2)

{
  void *__ptr;
  void *__ptr_00;
  undefined4 uVar1;
  
  __ptr = (void *)FUN_00020d78();
  __ptr_00 = (void *)FUN_00020d78(param_2);
  uVar1 = FUN_0001e90c(__ptr,__ptr_00);
  free(__ptr);
  free(__ptr_00);
  return uVar1;
}



/* ===== FUN_00021238 @ 00021238 size=236 ===== */

void FUN_00021238(int *param_1,void *param_2,size_t param_3)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)*param_1;
  if (*pcVar4 == '\0' && param_1[1] == 0) {
    *pcVar4 = '5';
    param_1[1] = param_1[1] + 2;
  }
  memcpy((void *)(*param_1 + param_1[1]),param_2,param_3);
  pcVar2 = (char *)*param_1;
  uVar3 = param_3 + param_1[1];
  param_1[1] = uVar3;
  if (0xff < uVar3 && *pcVar2 == '5') {
    memmove(pcVar2 + 3,pcVar2 + 2,uVar3 - 2);
    *pcVar4 = '6';
    param_1[1] = param_1[1] + 1;
  }
  cVar1 = *pcVar4;
  if (cVar1 == '6') {
    *(ushort *)(pcVar4 + 1) =
         (ushort)((param_1[1] - 3U & 0xff) << 8) | (ushort)(param_1[1] - 3U >> 8) & 0xff;
    return;
  }
  if (cVar1 == '7') {
    uVar3 = param_1[1] - 5;
    *(uint *)(pcVar4 + 1) =
         uVar3 * 0x1000000 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
         uVar3 >> 0x18;
    return;
  }
  if (cVar1 == '5') {
    pcVar4[1] = (char)param_1[1] + -2;
  }
  return;
}



/* ===== FUN_000213e0 @ 000213e0 size=52 ===== */

void FUN_000213e0(void)

{
  undefined4 *puVar1;
  
  puVar1 = malloc(0x20);
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
  puVar1[1] = 0;
  puVar1[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  puVar1[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  puVar1[4] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  puVar1[4] = 0;
  puVar1[5] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  puVar1[6] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  puVar1[7] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *puVar1 = 0xffffffff;
  return;
}



/* ===== FUN_00021414 @ 00021414 size=96 ===== */

undefined4 * FUN_00021414(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  puVar2 = (undefined4 *)FUN_000213e0();
  iVar1 = DAT_00021474;
  *puVar2 = *param_1;
  FUN_0001e84c(param_1[1],iVar1 + 0x2143c,puVar2);
  FUN_0001e84c(param_1[2],DAT_00021478 + 0x21454,puVar2);
  uVar3 = param_1[4];
  uVar4 = param_1[5];
  uVar5 = param_1[6];
  puVar2[3] = param_1[3];
  puVar2[4] = uVar3;
  puVar2[5] = uVar4;
  puVar2[6] = uVar5;
  puVar2[7] = param_1[7];
  return puVar2;
}



/* ===== FUN_0002147c @ 0002147c size=80 ===== */

void FUN_0002147c(void *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = DAT_000214cc + 0x21494;
  uVar1 = *(undefined4 *)(iVar2 + DAT_000214d0);
  FUN_0001e8d4(*(undefined4 *)((int)param_1 + 8),uVar1,param_3,uVar1,param_1,uVar1,param_3);
  FUN_0001e8d4(*(undefined4 *)((int)param_1 + 4),*(undefined4 *)(iVar2 + DAT_000214d4));
  free(param_1);
  return;
}



/* ===== FUN_000214d8 @ 000214d8 size=120 ===== */

void FUN_000214d8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  void *__ptr;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  
  iVar1 = DAT_00021550;
  iVar5 = param_1;
  __ptr = (void *)FUN_00020d78(param_2);
  piVar4 = *(int **)(param_1 + 4);
  while( true ) {
    if (piVar4 == (int *)0x0) {
      uVar3 = *(undefined4 *)(iVar1 + 0x214fc + DAT_00021554);
      uVar3 = FUN_0001f8b0(*(undefined4 *)(param_1 + 4),__ptr,uVar3,uVar3,iVar5,uVar3,param_3);
      *(undefined4 *)(param_1 + 4) = uVar3;
      return;
    }
    iVar2 = FUN_0001e90c(piVar4[1],__ptr);
    if (iVar2 == 0) break;
    piVar4 = (int *)*piVar4;
  }
  free(__ptr);
  return;
}



/* ===== FUN_00021558 @ 00021558 size=1472 ===== */

void FUN_00021558(byte *param_1,int param_2,int *param_3,int param_4)

{
  byte bVar1;
  undefined4 uVar2;
  void *__s;
  int iVar3;
  char *__fmt;
  int iVar4;
  int iVar5;
  int *piVar6;
  byte *pbVar7;
  byte *__ptr;
  byte *pbVar8;
  uint uVar9;
  size_t __size;
  uint uVar10;
  size_t __n;
  bool bVar11;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  __ptr = (byte *)0x0;
  piVar6 = *(int **)(DAT_00021b18 + 0x21578 + DAT_00021b1c);
  local_38 = 0;
  local_2c = *piVar6;
  if (param_2 < 1) {
    syslog(3,(char *)(DAT_00021b24 + 0x215ac),DAT_00021b20 + 0x21648);
    goto LAB_000215b0;
  }
  bVar1 = *param_1;
  uVar10 = (uint)bVar1;
  if (uVar10 < 0x28) {
    if (uVar10 < 0x25) {
      if (uVar10 < 0x15) {
        if (((uVar10 < 0x10) && (uVar10 != 0)) && (4 < uVar10 - 8)) goto LAB_000216a8;
LAB_00021608:
        __ptr = malloc(0x28);
        if (__ptr == (byte *)0x0) goto LAB_000217e0;
        uVar2 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uVar9 = param_2 - 1;
        iVar4 = local_38 + 1;
        __ptr[0] = 0;
        __ptr[1] = 0;
        __ptr[2] = 0;
        __ptr[3] = 0;
        *(undefined4 *)(__ptr + 4) = uVar2;
        *(undefined4 *)(__ptr + 8) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        *(undefined4 *)(__ptr + 0xc) =
             *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        __ptr[0x10] = 0;
        __ptr[0x11] = 0;
        __ptr[0x12] = 0;
        __ptr[0x13] = 0;
        *(undefined4 *)(__ptr + 0x14) = uVar2;
        __ptr[0x18] = 0;
        __ptr[0x19] = 0;
        __ptr[0x1a] = 0;
        __ptr[0x1b] = 0;
        *(undefined4 *)(__ptr + 0x1c) = uVar2;
        __ptr[0x20] = 0;
        __ptr[0x21] = 0;
        __ptr[0x22] = 0;
        __ptr[0x23] = 0;
        *(undefined4 *)(__ptr + 0x24) = uVar2;
        *__ptr = bVar1;
        if (uVar10 == 0xc) {
LAB_000218ec:
          if (0xf < uVar9) {
            pbVar8 = __ptr + 0x17;
            do {
              param_1 = param_1 + 1;
              pbVar7 = pbVar8 + -1;
              *pbVar8 = *param_1;
              pbVar8 = pbVar7;
              iVar4 = local_38 + 0x11;
            } while (__ptr + 7 != pbVar7);
            goto LAB_00021848;
          }
          __fmt = (char *)(DAT_00021b64 + 0x21908);
          iVar5 = DAT_00021b60 + 0x219b5;
          local_38 = iVar4;
          goto LAB_00021684;
        }
        if (0xc < uVar10) {
          if (uVar10 == 0x12) {
LAB_00021874:
            if (3 < uVar9) {
              uVar10 = *(uint *)(param_1 + 1);
              *(uint *)(__ptr + 8) =
                   uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
                   uVar10 >> 0x18;
              iVar4 = local_38 + 5;
              goto LAB_00021848;
            }
            __fmt = (char *)(DAT_00021b54 + 0x21890);
            iVar5 = DAT_00021b50 + 0x2193d;
            local_38 = iVar4;
            goto LAB_00021684;
          }
          if (0x12 < uVar10) {
            if (uVar10 != 0x14) {
              if (uVar10 < 0x14) goto LAB_000218ac;
              bVar11 = uVar10 == 0x28;
              goto LAB_00021664;
            }
            goto LAB_000218ec;
          }
          if (uVar10 == 0x10) goto LAB_00021668;
          if (uVar10 != 0x11) goto LAB_000217d8;
LAB_00021804:
          if (1 < uVar9) {
            *(ushort *)(__ptr + 8) = *(ushort *)(param_1 + 1) << 8 | *(ushort *)(param_1 + 1) >> 8;
            iVar4 = local_38 + 3;
            goto LAB_00021848;
          }
          __fmt = (char *)(DAT_00021b4c + 0x21820);
          iVar5 = DAT_00021b48 + 0x218cd;
          local_38 = iVar4;
          goto LAB_00021684;
        }
        if (uVar10 == 9) goto LAB_00021804;
        if (uVar10 < 10) {
          if (uVar10 == 0) goto LAB_00021848;
          bVar11 = uVar10 == 8;
LAB_00021664:
          if (bVar11) {
LAB_00021668:
            if (param_2 != 1) {
              __ptr[8] = param_1[1];
              iVar4 = local_38 + 2;
              goto LAB_00021848;
            }
            __fmt = (char *)(DAT_00021b2c + 0x21684);
            iVar5 = DAT_00021b28 + 0x21731;
            local_38 = iVar4;
            goto LAB_00021684;
          }
        }
        else {
          if (uVar10 == 10) goto LAB_00021874;
          if (uVar10 == 0xb) {
LAB_000218ac:
            if (7 < uVar9) {
              uVar9 = *(uint *)(param_1 + 1);
              uVar10 = *(uint *)(param_1 + 5);
              *(uint *)(__ptr + 8) =
                   uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
                   uVar10 >> 0x18;
              *(uint *)(__ptr + 0xc) =
                   uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
                   uVar9 >> 0x18;
              iVar4 = local_38 + 9;
              goto LAB_00021848;
            }
            __fmt = (char *)(DAT_00021b5c + 0x218c8);
            iVar5 = DAT_00021b58 + 0x21975;
            local_38 = iVar4;
            goto LAB_00021684;
          }
        }
        goto LAB_000217d8;
      }
      if ((uVar10 < 0x19) || ((0x1a < uVar10 && (uVar10 != 0x1c)))) {
LAB_000216a8:
        __ptr = (byte *)0x0;
        syslog(3,(char *)(DAT_00021b34 + 0x216c8),DAT_00021b30 + 0x21760,uVar10);
        goto LAB_000215b0;
      }
      __ptr = malloc(0x28);
      if (__ptr != (byte *)0x0) {
        uVar2 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        __ptr[0] = 0;
        __ptr[1] = 0;
        __ptr[2] = 0;
        __ptr[3] = 0;
        *(undefined4 *)(__ptr + 4) = uVar2;
        *(undefined4 *)(__ptr + 8) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        *(undefined4 *)(__ptr + 0xc) =
             *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        __ptr[0x10] = 0;
        __ptr[0x11] = 0;
        __ptr[0x12] = 0;
        __ptr[0x13] = 0;
        *(undefined4 *)(__ptr + 0x14) = uVar2;
        __ptr[0x18] = 0;
        __ptr[0x19] = 0;
        __ptr[0x1a] = 0;
        __ptr[0x1b] = 0;
        *(undefined4 *)(__ptr + 0x1c) = uVar2;
        __ptr[0x20] = 0;
        __ptr[0x21] = 0;
        __ptr[0x22] = 0;
        __ptr[0x23] = 0;
        *(undefined4 *)(__ptr + 0x24) = uVar2;
        iVar5 = FUN_00020b18(param_1,param_2,__ptr + 8,&local_38);
        iVar4 = local_38;
        if (iVar5 < 0) goto LAB_000217d8;
        *__ptr = *param_1;
        if (param_4 != 0) {
          FUN_000214d8(param_4,__ptr + 8);
          iVar4 = local_38;
        }
        goto LAB_00021848;
      }
    }
    else {
LAB_00021764:
      __ptr = malloc(0x28);
      if (__ptr == (byte *)0x0) goto LAB_000217e0;
      uVar2 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      iVar4 = local_38 + 1;
      __ptr[0] = 0;
      __ptr[1] = 0;
      __ptr[2] = 0;
      __ptr[3] = 0;
      *(undefined4 *)(__ptr + 4) = uVar2;
      *(undefined4 *)(__ptr + 8) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      *(undefined4 *)(__ptr + 0xc) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      __ptr[0x10] = 0;
      __ptr[0x11] = 0;
      __ptr[0x12] = 0;
      __ptr[0x13] = 0;
      *(undefined4 *)(__ptr + 0x14) = uVar2;
      __ptr[0x18] = 0;
      __ptr[0x19] = 0;
      __ptr[0x1a] = 0;
      __ptr[0x1b] = 0;
      *(undefined4 *)(__ptr + 0x1c) = uVar2;
      __ptr[0x20] = 0;
      __ptr[0x21] = 0;
      __ptr[0x22] = 0;
      __ptr[0x23] = 0;
      *(undefined4 *)(__ptr + 0x24) = uVar2;
      *__ptr = bVar1;
      if (uVar10 == 0x26) {
LAB_000219a4:
        if (param_2 - 1U < 2) {
          __fmt = (char *)(DAT_00021b6c + 0x219c0);
          iVar5 = DAT_00021b68 + 0x21a79;
          local_38 = iVar4;
        }
        else {
          local_38 = local_38 + 3;
          pbVar8 = param_1 + 3;
          __n = (*(ushort *)(param_1 + 1) & 0xff) << 8 | (uint)(*(ushort *)(param_1 + 1) >> 8);
          param_2 = param_2 + -3;
LAB_000219f8:
          if (param_2 < (int)__n) {
            __fmt = (char *)(DAT_00021b7c + 0x21a14);
            iVar5 = DAT_00021b78 + 0x21acd;
          }
          else {
            __size = __n + 1;
            __s = malloc(__size);
            if (__s != (void *)0x0) {
              memset(__s,0,__size);
              memcpy(__s,pbVar8,__n);
              *(void **)(__ptr + 8) = __s;
              *(size_t *)(__ptr + 0x24) = __size;
              iVar4 = local_38 + __n;
              goto LAB_00021848;
            }
            __fmt = (char *)(DAT_00021b84 + 0x21a60);
            iVar5 = DAT_00021b80 + 0x21b19;
          }
        }
      }
      else {
        if (uVar10 < 0x27) {
          if (uVar10 == 0x25) {
LAB_000219c4:
            if (param_2 != 1) {
              __n = (size_t)param_1[1];
              param_2 = param_2 + -2;
              pbVar8 = param_1 + 2;
              local_38 = local_38 + 2;
              goto LAB_000219f8;
            }
            __fmt = (char *)(DAT_00021b74 + 0x219e0);
            iVar5 = DAT_00021b70 + 0x21a99;
            local_38 = iVar4;
            goto LAB_00021684;
          }
        }
        else {
          if (uVar10 == 0x45) goto LAB_000219c4;
          if (uVar10 == 0x46) goto LAB_000219a4;
        }
        __fmt = (char *)(DAT_00021b44 + 0x217c4);
        iVar5 = DAT_00021b40 + 0x2187d;
        local_38 = iVar4;
      }
LAB_00021684:
      syslog(3,__fmt,iVar5);
      iVar4 = local_38;
LAB_000217d8:
      local_38 = iVar4;
      free(__ptr);
    }
LAB_000217e0:
    __ptr = (byte *)0x0;
    iVar4 = local_38;
  }
  else {
    if (0x3f < uVar10) {
      if (2 < uVar10 - 0x45) goto LAB_000216a8;
      goto LAB_00021764;
    }
    if (uVar10 < 0x3d) {
      if (uVar10 == 0x28) goto LAB_00021608;
      if (2 < uVar10 - 0x35) goto LAB_000216a8;
    }
    __ptr = malloc(0x28);
    iVar4 = local_38;
    if (__ptr != (byte *)0x0) {
      uVar2 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      __ptr[0] = 0;
      __ptr[1] = 0;
      __ptr[2] = 0;
      __ptr[3] = 0;
      *(undefined4 *)(__ptr + 4) = uVar2;
      *(undefined4 *)(__ptr + 8) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      *(undefined4 *)(__ptr + 0xc) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      __ptr[0x10] = 0;
      __ptr[0x11] = 0;
      __ptr[0x12] = 0;
      __ptr[0x13] = 0;
      *(undefined4 *)(__ptr + 0x14) = uVar2;
      __ptr[0x18] = 0;
      __ptr[0x19] = 0;
      __ptr[0x1a] = 0;
      __ptr[0x1b] = 0;
      *(undefined4 *)(__ptr + 0x1c) = uVar2;
      __ptr[0x20] = 0;
      __ptr[0x21] = 0;
      __ptr[0x22] = 0;
      __ptr[0x23] = 0;
      *(undefined4 *)(__ptr + 0x24) = uVar2;
      local_38 = FUN_0001f3e8(param_1,param_2,__ptr,&local_34);
      iVar4 = local_38;
      if (local_38 != 0) {
        if (param_2 < local_38) {
          __fmt = (char *)(DAT_00021b3c + 0x21754);
          iVar5 = DAT_00021b38 + 0x21819;
          goto LAB_00021684;
        }
        param_1 = param_1 + local_38;
        param_2 = param_2 - local_38;
        iVar4 = 0;
        for (iVar5 = 0; iVar5 < local_34; iVar5 = iVar5 + local_30) {
          local_30 = 0;
          iVar3 = FUN_00021558(param_1,param_2,&local_30,param_4);
          if (iVar3 == 0) break;
          if (iVar4 == 0) {
            *(int *)(__ptr + 8) = iVar3;
          }
          else {
            *(int *)(iVar4 + 0x20) = iVar3;
          }
          param_1 = param_1 + local_30;
          param_2 = param_2 - local_30;
          iVar4 = iVar3;
        }
        iVar4 = local_38 + iVar5;
      }
    }
  }
LAB_00021848:
  local_38 = iVar4;
  *param_3 = *param_3 + local_38;
LAB_000215b0:
  if (local_2c != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(__ptr);
  }
  return;
}



/* ===== FUN_00021f5c @ 00021f5c size=84 ===== */

void FUN_00021f5c(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint local_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uVar1 = param_2 & 0xff;
  local_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  if (((uVar1 == 0x1a) || (uVar1 == 0x1c)) || (uVar1 == 0x19)) {
    FUN_00020814(param_1,3,uVar1,&uStack_8);
  }
  FUN_000214d8(param_1,&local_c);
  return;
}



/* ===== FUN_00021fb0 @ 00021fb0 size=84 ===== */

void FUN_00021fb0(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint local_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uVar1 = param_2 & 0xff;
  local_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  if (((uVar1 == 0x1a) || (uVar1 == 0x1c)) || (uVar1 == 0x19)) {
    FUN_00020814(param_1,0x200,uVar1,&uStack_8);
  }
  FUN_000214d8(param_1,&local_c);
  return;
}



/* ===== FUN_00022838 @ 00022838 size=20 ===== */

short FUN_00022838(int param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(param_1 + 0x10);
  *(short *)(param_1 + 0x10) = sVar1 + 1;
  return sVar1;
}



/* ===== FUN_0002284c @ 0002284c size=528 ===== */

void FUN_0002284c(int param_1,undefined4 *param_2,void *param_3,size_t param_4,byte param_5,
                 uint *param_6)

{
  int *piVar1;
  undefined1 *__ptr;
  char *__ptr_00;
  uint uVar2;
  char *__fmt;
  undefined4 uVar3;
  int *piVar4;
  uint extraout_r3;
  uint uVar5;
  undefined1 *__dest;
  int iVar6;
  uint local_38;
  uint local_34;
  undefined2 local_30;
  int local_2c;
  
  piVar4 = *(int **)(DAT_00022a5c + 0x2286c + DAT_00022a60);
  local_2c = *piVar4;
  if (*(int *)(param_1 + 8) == 0) {
    iVar6 = -1;
    piVar1 = __errno_location();
    *piVar1 = 0x42;
    goto LAB_0002289c;
  }
  __ptr = malloc(0x800);
  __ptr_00 = malloc(0xffff);
  uVar5 = extraout_r3;
  if (__ptr == (undefined1 *)0x0) {
    uVar5 = 1;
  }
  if (__ptr != (undefined1 *)0x0) {
    uVar5 = (uint)(__ptr_00 == (char *)0x0);
  }
  if (uVar5 == 0) {
    *__ptr = 0x75;
    uVar2 = FUN_00022838(param_1);
    *(ushort *)(__ptr + 1) = (ushort)((uVar2 & 0xff) << 8) | (ushort)(uVar2 >> 8) & 0xff;
    local_30 = 0;
    local_34 = uVar5;
    iVar6 = memcmp(param_2,&local_34,6);
    __dest = __ptr + 6;
    if (iVar6 == 0) {
      __ptr[5] = param_5;
      iVar6 = 6;
    }
    else {
      uVar3 = *param_2;
      __ptr[5] = param_5 | 2;
      iVar6 = 0xc;
      *(undefined4 *)(__ptr + 6) = uVar3;
      *(undefined2 *)(__ptr + 10) = *(undefined2 *)(param_2 + 1);
      __dest = __ptr + 0xc;
    }
    memcpy(__dest,param_3,param_4);
    uVar5 = (iVar6 + param_4) - 5;
    *(ushort *)(__ptr + 3) = (ushort)((uVar5 & 0xff) << 8) | (ushort)(uVar5 >> 8) & 0xff;
    iVar6 = FUN_0001f61c(param_1,__ptr,__ptr_00,iVar6 + param_4,&local_38);
    if (-1 < iVar6) {
      if (local_38 < 5) {
        __fmt = (char *)(DAT_00022a68 + 0x229e4);
        iVar6 = DAT_00022a64 + 0x22ae7;
LAB_000229e8:
        syslog(3,__fmt,iVar6);
      }
      else {
        if (*__ptr_00 == '\x01') {
          piVar1 = __errno_location();
          iVar6 = 0x16;
          goto LAB_000228fc;
        }
        if (*__ptr_00 == 'v') {
          if (8 < local_38) {
            if (param_6 != (uint *)0x0) {
              uVar5 = *(uint *)(__ptr_00 + 5);
              *param_6 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
                         uVar5 >> 0x18;
            }
            goto LAB_00022904;
          }
          __fmt = (char *)(DAT_00022a70 + 0x22a38);
          iVar6 = DAT_00022a6c + 0x22b3b;
          goto LAB_000229e8;
        }
      }
      piVar1 = __errno_location();
      iVar6 = 0x47;
      goto LAB_000228fc;
    }
  }
  else {
    piVar1 = __errno_location();
    iVar6 = 0xc;
LAB_000228fc:
    *piVar1 = iVar6;
    iVar6 = -1;
  }
LAB_00022904:
  free(__ptr);
  free(__ptr_00);
LAB_0002289c:
  if (local_2c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar6);
  }
  return;
}



/* ===== FUN_00022a74 @ 00022a74 size=256 ===== */

void FUN_00022a74(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int local_34;
  void *local_30;
  undefined4 uStack_2c;
  int local_24;
  
  piVar4 = *(int **)(DAT_00022b74 + 0x22a94 + DAT_00022b78);
  local_24 = *piVar4;
  if (*param_3 - 1U < 0xfffffffe) {
    local_30 = (void *)*param_3;
    uVar1 = FUN_00020484(10,&local_30);
    FUN_0001f994(param_3,0,uVar1);
  }
  iVar2 = FUN_0001f360(param_3,&local_30);
  if (iVar2 < 0) {
    iVar2 = -1;
    piVar3 = __errno_location();
    *piVar3 = 0xc;
  }
  else {
    iVar2 = FUN_0002284c(param_1,param_2,local_30,uStack_2c,param_4,&local_34);
    free(local_30);
    if (iVar2 == 0) {
      uVar1 = FUN_00020484(10,&local_34);
      *param_3 = local_34;
      FUN_0001f994(param_3,0,uVar1);
    }
  }
  if (local_24 != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2);
  }
  return;
}



/* ===== FUN_00022bdc @ 00022bdc size=388 ===== */

void FUN_00022bdc(int param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  undefined1 *__ptr;
  char *__ptr_00;
  int iVar2;
  uint unaff_r4;
  uint uVar3;
  int *piVar4;
  uint local_28;
  int local_24;
  
  piVar4 = *(int **)(DAT_00022d60 + 0x22bec + DAT_00022d64);
  local_24 = *piVar4;
  local_28 = 0;
  if (param_3 == 0) {
    piVar1 = __errno_location();
    iVar2 = 0x16;
  }
  else {
    if (*(int *)(param_1 + 8) != 0) {
      __ptr = malloc(0x800);
      __ptr_00 = malloc(0xffff);
      if (__ptr == (undefined1 *)0x0) {
        unaff_r4 = 1;
      }
      if (__ptr != (undefined1 *)0x0) {
        unaff_r4 = (uint)(__ptr_00 == (char *)0x0);
      }
      if (unaff_r4 == 0) {
        *__ptr = 0x79;
        uVar3 = FUN_00022838(param_1);
        __ptr[4] = 4;
        *(ushort *)(__ptr + 1) = (ushort)((uVar3 & 0xff) << 8) | (ushort)(uVar3 >> 8) & 0xff;
        __ptr[3] = 0;
        *(uint *)(__ptr + 5) =
             param_3 << 0x18 | (param_3 >> 8 & 0xff) << 0x10 | (param_3 >> 0x10 & 0xff) << 8 |
             param_3 >> 0x18;
        uVar3 = FUN_0001f61c(param_1,__ptr,__ptr_00,9,&local_28);
        if (-1 < (int)uVar3) {
          if (local_28 < 7) {
            syslog(3,(char *)(DAT_00022d6c + 0x22d1c),&UNK_00022e41 + DAT_00022d68);
          }
          else {
            if (*__ptr_00 == '\x01') {
              piVar1 = __errno_location();
              iVar2 = 0x16;
              goto LAB_00022c8c;
            }
            if (*__ptr_00 == -0x80) {
              uVar3 = (uint)*(ushort *)(__ptr_00 + 5);
              goto LAB_00022c94;
            }
          }
          piVar1 = __errno_location();
          iVar2 = 0x47;
          goto LAB_00022c8c;
        }
      }
      else {
        piVar1 = __errno_location();
        iVar2 = 0xc;
LAB_00022c8c:
        *piVar1 = iVar2;
        uVar3 = 0xffffffff;
      }
LAB_00022c94:
      free(__ptr);
      free(__ptr_00);
      goto LAB_00022c1c;
    }
    piVar1 = __errno_location();
    iVar2 = 0x42;
  }
  *piVar1 = iVar2;
  uVar3 = 0xffffffff;
LAB_00022c1c:
  if (local_24 == *piVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}



/* ===== FUN_00022d70 @ 00022d70 size=40 ===== */

int FUN_00022d70(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_00022bdc(param_1,param_2,*param_3);
  if (iVar1 == 0) {
    FUN_0002147c(param_3);
  }
  return iVar1;
}



/* ===== FUN_00022d98 @ 00022d98 size=84 ===== */

void FUN_00022d98(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  undefined4 local_14;
  uint local_10;
  int local_c;
  
  piVar1 = *(int **)(DAT_00022dec + 0x22dac + DAT_00022df0);
  local_14 = 0;
  local_c = *piVar1;
  local_10 = param_3 & 0xffff0000;
  FUN_00022d70(param_1,&local_14,param_2,&local_14,param_1);
  if (local_c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_00024474 @ 00024474 size=536 ===== */

undefined4
FUN_00024474(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  byte *pbVar3;
  uint uVar4;
  undefined4 uVar5;
  byte *pbVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 unaff_r4;
  undefined4 *puVar10;
  undefined4 unaff_r5;
  undefined4 *puVar11;
  undefined4 unaff_r6;
  byte *pbVar12;
  undefined4 uVar13;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_lr;
  undefined4 uVar14;
  
  iVar1 = DAT_000245b8;
  pbVar3 = (byte *)FUN_0001f4dc(param_1,0x200,param_3,param_4,param_1,param_2,param_3);
  iVar8 = DAT_0001fb14;
  if ((pbVar3 != (byte *)0x0) && (*pbVar3 - 0x35 < 3)) {
    puVar11 = (undefined4 *)0x0;
    pbVar3 = *(byte **)(pbVar3 + 8);
    while( true ) {
      if (pbVar3 == (byte *)0x0) {
        *param_2 = puVar11;
        return 0;
      }
      if (2 < *pbVar3 - 0x35) break;
      uVar14 = 0;
      for (pbVar12 = *(byte **)(pbVar3 + 8); pbVar12 != (byte *)0x0;
          pbVar12 = *(byte **)(pbVar12 + 0x20)) {
        uVar4 = (uint)*pbVar12;
        if (uVar4 < 0x27) {
          if (0x24 < uVar4) goto LAB_0002455c;
          if (1 < uVar4 - 8) goto LAB_00024534;
          pbVar6 = pbVar12 + 8;
          iVar8 = 0;
        }
        else {
          if (1 < uVar4 - 0x45) goto LAB_00024534;
LAB_0002455c:
          pbVar6 = *(byte **)(pbVar12 + 8);
          iVar8 = *(int *)(pbVar12 + 0x24) + -1;
        }
        iVar8 = FUN_00020130(uVar4,pbVar6,iVar8);
        if (iVar8 != 0) {
          uVar14 = FUN_0001f6b0(uVar14);
        }
      }
      puVar11 = (undefined4 *)FUN_0001f6b0(puVar11,uVar14);
      pbVar3 = *(byte **)(pbVar3 + 0x20);
    }
LAB_00024534:
    while (puVar11 != (undefined4 *)0x0) {
      puVar10 = (undefined4 *)*puVar11;
      FUN_0001e8d4(puVar11,*(undefined4 *)(iVar1 + 0x24494 + DAT_000245bc));
      puVar11 = puVar10;
    }
    piVar2 = __errno_location();
    *piVar2 = 0x16;
    return 0xffffffff;
  }
  uVar14 = 0x200;
  pbVar3 = (byte *)FUN_0001f4dc();
  *param_2 = 0;
  if ((pbVar3 == (byte *)0x0) || (2 < *pbVar3 - 0x35)) {
LAB_0001fa78:
    FUN_0001e8d4(*param_2,*(undefined4 *)(iVar8 + 0x1fa60 + DAT_0001fb18));
    uVar14 = 0xffffffff;
    *param_2 = 0;
  }
  else {
    pbVar3 = *(byte **)(pbVar3 + 8);
    while (pbVar3 != (byte *)0x0) {
      uVar13 = *param_2;
      if (3 < *pbVar3 - 0x19) {
        piVar2 = __errno_location();
        *piVar2 = 0x16;
        goto LAB_0001fa78;
      }
      puVar11 = malloc(0x14);
      if (puVar11 == (undefined4 *)0x0) goto LAB_0001fa78;
      uVar5 = *(undefined4 *)(pbVar3 + 0xc);
      uVar7 = *(undefined4 *)(pbVar3 + 0x10);
      uVar9 = *(undefined4 *)(pbVar3 + 0x14);
      *puVar11 = *(undefined4 *)(pbVar3 + 8);
      puVar11[1] = uVar5;
      puVar11[2] = uVar7;
      puVar11[3] = uVar9;
      uVar5 = *(undefined4 *)(pbVar3 + 0x18);
      puVar11[4] = uVar5;
      uVar13 = FUN_0001f6b0(uVar13,puVar11,uVar7,uVar5,param_1,uVar14,unaff_r4,unaff_r5,unaff_r6,
                            unaff_r7,unaff_r8,unaff_lr);
      pbVar3 = *(byte **)(pbVar3 + 0x20);
      *param_2 = uVar13;
    }
    uVar14 = 0;
  }
  return uVar14;
}



/* ===== _DT_FINI @ 0002870c size=16 ===== */

void _DT_FINI(void)

{
  return;
}



/* ===== <EXTERNAL>::putchar @ 00042000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 00042004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::epoll_create1 @ 00042008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int epoll_create1(int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ioctl @ 0004200c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::writev @ 00042010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t writev(int __fd,iovec *__iovec,int __count)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 00042014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::recv @ 0004201c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recv(int __fd,void *__buf,size_t __n,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::connect @ 00042020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int connect(int __fd,sockaddr *__addr,socklen_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::epoll_wait @ 00042024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int epoll_wait(int __epfd,epoll_event *__events,int __maxevents,int __timeout)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 00042028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strndup @ 0004202c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strndup(char *__string,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memmove @ 00042030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt_long @ 00042034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void getopt_long(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 00042038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fgets @ 00042044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 00042048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 0004204c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00042050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 00042054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vsnprintf @ 0004205c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::socket @ 00042060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::select @ 00042064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 00042068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncasecmp @ 0004206c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncasecmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::send @ 00042070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t send(int __fd,void *__buf,size_t __n,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 00042074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::epoll_ctl @ 00042078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int epoll_ctl(int __epfd,int __op,int __fd,epoll_event *__event)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__stack_chk_fail @ 0004207c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __stack_chk_fail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtol @ 00042080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 00042084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::write @ 00042088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 0004208c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcat @ 00042090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::bind @ 00042094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::signalfd @ 00042098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int signalfd(int __fd,sigset_t *__mask,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vprintf @ 0004209c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vprintf(char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 000420a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setsockopt @ 000420a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_registerTMCloneTable @ 000420a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_registerTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::read @ 000420b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 000420b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 000420bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcasecmp @ 000420c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcasecmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::realloc @ 000420c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcmp @ 000420c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sscanf @ 000420cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::timerfd_create @ 000420d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int timerfd_create(clockid_t __clock_id,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_deregisterTMCloneTable @ 000420d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 000420d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strdup @ 000420dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strdup(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 000420e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::open64 @ 000420e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::poll @ 000420e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int poll(pollfd *__fds,nfds_t __nfds,int __timeout)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::syslog @ 000420ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void syslog(int __pri,char *__fmt,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 000420f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::shutdown @ 000420f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int shutdown(int __fd,int __how)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 000420f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::asprintf @ 000420fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int asprintf(char **__ptr,char *__fmt,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strsep @ 00042104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strsep(char **__stringp,char *__delim)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getsockopt @ 00042108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t *__optlen)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 0004210c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 00042110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 00042114 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 00042118 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 0004211c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::timerfd_settime @ 00042120 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int timerfd_settime(int __ufd,int __flags,itimerspec *__utmr,itimerspec *__otmr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 00042124 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 00042128 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vfprintf @ 0004212c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 00042130 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sigprocmask @ 00042134 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigprocmask(int __how,sigset_t *__set,sigset_t *__oset)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


