// rtk_hciattach — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _DT_INIT @ 00010c34 size=16 ===== */

void _DT_INIT(void)

{
  return;
}



/* ===== <EXTERNAL>::ioctl @ 00010c58 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_0002e00c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::writev @ 00010c64 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t writev(int __fd,iovec *__iovec,int __count)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_writev_0002e010)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::printf @ 00010c70 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_0002e014)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::epoll_wait @ 00010c7c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int epoll_wait(int __epfd,epoll_event *__events,int __maxevents,int __timeout)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_epoll_wait_0002e018)(__epfd);
  return iVar1;
}



/* ===== <EXTERNAL>::strerror @ 00010c88 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_0002e01c)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::snprintf @ 00010c94 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_0002e020)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::usleep @ 00010ca0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_usleep_0002e024)(__useconds);
  return iVar1;
}



/* ===== <EXTERNAL>::memcpy @ 00010cac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_0002e028)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::perror @ 00010cb8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
  (*(code *)PTR_perror_0002e02c)(__s);
  return;
}



/* ===== <EXTERNAL>::tcflush @ 00010cc4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tcflush(int __fd,int __queue_selector)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_tcflush_0002e030)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::tcsendbreak @ 00010cd0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tcsendbreak(int __fd,int __duration)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_tcsendbreak_0002e034)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::malloc @ 00010cdc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0002e038)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::sleep @ 00010ce8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_sleep_0002e03c)(__seconds);
  return uVar1;
}



/* ===== <EXTERNAL>::tcdrain @ 00010cf4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tcdrain(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_tcdrain_0002e040)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::strtoul @ 00010d00 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
  ulong uVar1;
  
  uVar1 = (*(code *)PTR_strtoul_0002e044)(__nptr);
  return uVar1;
}



/* ===== <EXTERNAL>::abort @ 00010d0c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_0002e048)();
  return;
}



/* ===== <EXTERNAL>::epoll_ctl @ 00010d18 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int epoll_ctl(int __epfd,int __op,int __fd,epoll_event *__event)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_epoll_ctl_0002e04c)(__epfd);
  return iVar1;
}



/* ===== <EXTERNAL>::alarm @ 00010d24 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint alarm(uint __seconds)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_alarm_0002e050)(__seconds);
  return uVar1;
}



/* ===== <EXTERNAL>::cfsetispeed @ 00010d30 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int cfsetispeed(termios *__termios_p,speed_t __speed)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_cfsetispeed_0002e054)(__termios_p);
  return iVar1;
}



/* ===== <EXTERNAL>::write @ 00010d3c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_write_0002e058)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::fstat @ 00010d48 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstat(int __fd,stat *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fstat_0002e05c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00010d54 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_0002e060)();
  return;
}



/* ===== <EXTERNAL>::cfsetospeed @ 00010d60 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int cfsetospeed(termios *__termios_p,speed_t __speed)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_cfsetospeed_0002e064)(__termios_p);
  return iVar1;
}



/* ===== <EXTERNAL>::read @ 00010d6c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_0002e068)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::realloc @ 00010d78 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_realloc_0002e06c)(__ptr);
  return pvVar1;
}



/* ===== <EXTERNAL>::epoll_create @ 00010d84 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int epoll_create(int __size)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_epoll_create_0002e070)(__size);
  return iVar1;
}



/* ===== <EXTERNAL>::sigfillset @ 00010d90 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigfillset(sigset_t *__set)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sigfillset_0002e074)(__set);
  return iVar1;
}



/* ===== <EXTERNAL>::memcmp @ 00010d9c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_0002e078)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::fork @ 00010da8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t fork(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_fork_0002e07c)();
  return _Var1;
}



/* ===== <EXTERNAL>::sscanf @ 00010db4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sscanf_0002e080)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::timerfd_create @ 00010dc0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int timerfd_create(clockid_t __clock_id,int __flags)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_timerfd_create_0002e084)(__clock_id);
  return iVar1;
}



/* ===== <EXTERNAL>::strncat @ 00010dcc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncat(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncat_0002e088)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::sigaction @ 00010dd8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigaction(int __sig,sigaction *__act,sigaction *__oact)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sigaction_0002e08c)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::getopt @ 00010df0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getopt_0002e094)(___argc);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 00010dfc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0002e098)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::cfmakeraw @ 00010e08 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void cfmakeraw(termios *__termios_p)

{
  (*(code *)PTR_cfmakeraw_0002e09c)(__termios_p);
  return;
}



/* ===== <EXTERNAL>::tcgetattr @ 00010e14 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tcgetattr(int __fd,termios *__termios_p)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_tcgetattr_0002e0a0)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::poll @ 00010e20 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int poll(pollfd *__fds,nfds_t __nfds,int __timeout)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_poll_0002e0a4)(__fds);
  return iVar1;
}



/* ===== <EXTERNAL>::strcmp @ 00010e2c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_0002e0a8)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::sprintf @ 00010e38 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_0002e0ac)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::strsep @ 00010e44 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strsep(char **__stringp,char *__delim)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strsep_0002e0b0)(__stringp);
  return pcVar1;
}



/* ===== <EXTERNAL>::fwrite @ 00010e50 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_0002e0b4)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 00010e5c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_0002e0b8)();
  return piVar1;
}



/* ===== <EXTERNAL>::exit @ 00010e68 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_0002e0bc)(__status);
  return;
}



/* ===== <EXTERNAL>::sigdelset @ 00010e74 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigdelset(sigset_t *__set,int __signo)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sigdelset_0002e0c0)(__set);
  return iVar1;
}



/* ===== <EXTERNAL>::atoi @ 00010e80 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_0002e0c4)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::ppoll @ 00010e8c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ppoll(pollfd *__fds,nfds_t __nfds,timespec *__timeout,__sigset_t *__ss)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ppoll_0002e0c8)(__fds);
  return iVar1;
}



/* ===== <EXTERNAL>::strlen @ 00010e98 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_0002e0cc)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::open @ 00010ea4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open_0002e0d0)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::strchr @ 00010eb0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_0002e0d4)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::timerfd_settime @ 00010ebc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int timerfd_settime(int __ufd,int __flags,itimerspec *__utmr,itimerspec *__otmr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_timerfd_settime_0002e0d8)(__ufd);
  return iVar1;
}



/* ===== <EXTERNAL>::tcsetattr @ 00010ec8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tcsetattr(int __fd,int __optional_actions,termios *__termios_p)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_tcsetattr_0002e0dc)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00010ed4 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_0002e0e0)();
  return;
}



/* ===== <EXTERNAL>::close @ 00010ee0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_0002e0e4)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 00010eec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0002e0e8)(__ptr);
  return;
}



/* ===== entry @ 00010ef8 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_0002e090)
            (DAT_00010f2c,param_2,&stack0x00000004,DAT_00010f30,DAT_00010f28,param_1);
  return;
}



/* ===== FUN_00010f34 @ 00010f34 size=32 ===== */

void FUN_00010f34(void)

{
  if (DAT_00010f58 == DAT_00010f54) {
    return;
  }
  if (DAT_00010f5c == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00010f5c)();
  return;
}



/* ===== _FINI_0 @ 00010f98 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00010fd4;
  if (*DAT_00010fd4 != '\0') {
    return;
  }
  FUN_00010f34();
  if (DAT_00010fd8 != 0) {
    __deregister_frame_info(DAT_00010fdc);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00010fe0 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00011004 != 0) {
    __register_frame_info(DAT_0001100c,DAT_00011008);
  }
  if ((DAT_00010f90 - DAT_00010f8c >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00010f94 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00010f94)();
  return;
}



/* ===== FUN_00011010 @ 00011010 size=48 ===== */

void FUN_00011010(void)

{
  printf("%s :signal hup.\n","Realtek Bluetooth");
  return;
}



/* ===== FUN_00011040 @ 00011040 size=120 ===== */

void FUN_00011040(int param_1)

{
  if (param_1 == 2) {
    printf("%s :signal int.\n","Realtek Bluetooth");
  }
  else if (param_1 == 0xf) {
    printf("%s :signal term.\n","Realtek Bluetooth");
  }
  DAT_0002e570 = 1;
  return;
}



/* ===== FUN_000110b8 @ 000110b8 size=44 ===== */

void FUN_000110b8(void)

{
  printf("%s ERROR: Initialization timed out.\n","Realtek Bluetooth");
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_000110e4 @ 000110e4 size=624 ===== */

undefined4 FUN_000110e4(char *param_1)

{
  if (param_1 == (char *)0x8ca00) {
    return 0x1006;
  }
  if ((int)param_1 < 0x8ca01) {
    if (param_1 == (char *)0xe100) {
      return 0x1001;
    }
    if ((int)param_1 < 0xe101) {
      if (param_1 == (char *)0x4b00) {
        return 0xe;
      }
      if (param_1 == (char *)0x9600) {
        return 0xf;
      }
      if (param_1 == (char *)0x2580) {
        return 0xd;
      }
    }
    else {
      if (param_1 == (char *)0x38400) {
        return 0x1003;
      }
      if ((int)param_1 < 0x38401) {
        if (param_1 == "hw flow control\n") {
          return 0x1002;
        }
      }
      else {
        if (param_1 == (char *)0x70800) {
          return 0x1004;
        }
        if (param_1 == (char *)0x7a120) {
          return 0x1005;
        }
      }
    }
  }
  else {
    if (param_1 == (char *)0x1e8480) {
      return 0x100b;
    }
    if ((int)param_1 < 0x1e8481) {
      if (param_1 == (char *)0xf4240) {
        return 0x1008;
      }
      if ((int)param_1 < 0xf4241) {
        if (param_1 == (char *)0xe1000) {
          return 0x1007;
        }
      }
      else {
        if (param_1 == (char *)0x119400) {
          return 0x1009;
        }
        if (param_1 == (char *)0x16e360) {
          return 0x100a;
        }
      }
    }
    else {
      if (param_1 == (char *)0x2dc6c0) {
        return 0x100d;
      }
      if ((int)param_1 < 0x2dc6c1) {
        if (param_1 == (char *)0x2625a0) {
          return 0x100c;
        }
      }
      else {
        if (param_1 == (char *)0x3567e0) {
          return 0x100e;
        }
        if (param_1 == (char *)0x3d0900) {
          return 0x100f;
        }
      }
    }
  }
  return 0x1001;
}



/* ===== FUN_00011354 @ 00011354 size=200 ===== */

int FUN_00011354(int param_1,termios *param_2,undefined4 param_3)

{
  speed_t sVar1;
  int iVar2;
  int *piVar3;
  
  sVar1 = FUN_000110e4(param_3);
  iVar2 = cfsetospeed(param_2,sVar1);
  if (iVar2 < 0) {
    piVar3 = __errno_location();
    iVar2 = -*piVar3;
  }
  else {
    sVar1 = FUN_000110e4(param_3);
    iVar2 = cfsetispeed(param_2,sVar1);
    if (iVar2 < 0) {
      piVar3 = __errno_location();
      iVar2 = -*piVar3;
    }
    else {
      iVar2 = tcsetattr(param_1,0,param_2);
      if (iVar2 < 0) {
        piVar3 = __errno_location();
        iVar2 = -*piVar3;
      }
      else {
        iVar2 = 0;
      }
    }
  }
  return iVar2;
}



/* ===== FUN_0001141c @ 0001141c size=132 ===== */

undefined4 FUN_0001141c(undefined4 param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_2 + 0xc) == 0) {
    uVar1 = 0xb440;
  }
  else {
    uVar1 = 0xb444;
  }
  printf("%s :Realtek Bluetooth init uart with init speed:%d, type:HCI UART %s\n",
         "Realtek Bluetooth",*(undefined4 *)(param_2 + 0x10),uVar1 | 0x10000);
  uVar2 = FUN_000170fc(param_1,*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x14),
                       param_3);
  return uVar2;
}



/* ===== FUN_000114a0 @ 000114a0 size=84 ===== */

undefined4 FUN_000114a0(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  printf("%s :Realtek Bluetooth post process\n","Realtek Bluetooth");
  uVar1 = FUN_00017434(param_1,*(undefined4 *)(param_2 + 0xc),param_3);
  return uVar1;
}



/* ===== FUN_000114f4 @ 000114f4 size=216 ===== */

undefined * FUN_000114f4(int param_1,int param_2)

{
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (*(int *)(&DAT_0002e0f4 + local_c * 0x2c) == 0) {
      return (undefined *)0x0;
    }
    if ((param_1 == *(int *)(&DAT_0002e0f8 + local_c * 0x2c)) &&
       (param_2 == *(int *)(&DAT_0002e0fc + local_c * 0x2c))) break;
    local_c = local_c + 1;
  }
  return &DAT_0002e0f4 + local_c * 0x2c;
}



/* ===== FUN_000115cc @ 000115cc size=172 ===== */

undefined * FUN_000115cc(char *param_1)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (*(int *)(&DAT_0002e0f4 + local_c * 0x2c) == 0) {
      return (undefined *)0x0;
    }
    iVar1 = strcmp(*(char **)(&DAT_0002e0f4 + local_c * 0x2c),param_1);
    if (iVar1 == 0) break;
    local_c = local_c + 1;
  }
  return &DAT_0002e0f4 + local_c * 0x2c;
}



/* ===== FUN_00011678 @ 00011678 size=1052 ===== */

int FUN_00011678(char *param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  undefined4 local_58;
  termios tStack_54;
  int local_18;
  uint local_14;
  
  local_14 = (uint)(param_4 != 0);
  local_18 = open(param_1,0x102);
  if (local_18 < 0) {
    piVar1 = __errno_location();
    iVar3 = *piVar1;
    piVar1 = __errno_location();
    pcVar2 = strerror(*piVar1);
    printf("%s ERROR: Can\'t open serial port, %d, %s\n","Realtek Bluetooth",iVar3,pcVar2);
  }
  else {
    tcflush(local_18,2);
    iVar3 = tcgetattr(local_18,&tStack_54);
    if (iVar3 < 0) {
      piVar1 = __errno_location();
      iVar3 = *piVar1;
      piVar1 = __errno_location();
      pcVar2 = strerror(*piVar1);
      printf("%s ERROR: Can\'t get port settings, %d, %s\n","Realtek Bluetooth",iVar3,pcVar2);
    }
    else {
      cfmakeraw(&tStack_54);
      if ((*(uint *)(param_2 + 0x18) & 1) == 0) {
        tStack_54.c_cflag = tStack_54.c_cflag & 0x7fffffff | 0x800;
      }
      else {
        tStack_54.c_cflag = tStack_54.c_cflag | 0x80000800;
      }
      iVar3 = tcsetattr(local_18,0,&tStack_54);
      if (iVar3 < 0) {
        piVar1 = __errno_location();
        iVar3 = *piVar1;
        piVar1 = __errno_location();
        pcVar2 = strerror(*piVar1);
        printf("%s ERROR: Can\'t set port settings, %d, %s\n","Realtek Bluetooth",iVar3,pcVar2);
      }
      else {
        iVar3 = FUN_00011354(local_18,&tStack_54,*(undefined4 *)(param_2 + 0x10));
        if (iVar3 < 0) {
          piVar1 = __errno_location();
          iVar3 = *piVar1;
          piVar1 = __errno_location();
          pcVar2 = strerror(*piVar1);
          printf("%s ERROR: Can\'t set initial baud rate, %d, %s\n","Realtek Bluetooth",iVar3,pcVar2
                );
        }
        else {
          tcflush(local_18,2);
          if (param_3 != 0) {
            tcsendbreak(local_18,0);
            usleep(500000);
          }
          if ((*(int *)(param_2 + 0x24) == 0) ||
             (iVar3 = (**(code **)(param_2 + 0x24))(local_18,param_2,&tStack_54), -1 < iVar3)) {
            tcflush(local_18,2);
            local_58 = 0xf;
            iVar3 = ioctl(local_18,0x5423,&local_58);
            if (iVar3 < 0) {
              piVar1 = __errno_location();
              iVar3 = *piVar1;
              piVar1 = __errno_location();
              pcVar2 = strerror(*piVar1);
              printf("%s ERROR: Can\'t set line discipline %d, %s\n","Realtek Bluetooth",iVar3,
                     pcVar2);
            }
            else if ((local_14 == 0) || (iVar3 = ioctl(local_18,0x400455cb,local_14), -1 < iVar3)) {
              iVar3 = ioctl(local_18,0x400455c8,*(undefined4 *)(param_2 + 0xc));
              if (iVar3 < 0) {
                piVar1 = __errno_location();
                iVar3 = *piVar1;
                piVar1 = __errno_location();
                pcVar2 = strerror(*piVar1);
                printf("%s ERROR: Can\'t set device %d, %s\n","Realtek Bluetooth",iVar3,pcVar2);
              }
              else {
                if (*(int *)(param_2 + 0x28) == 0) {
                  return local_18;
                }
                iVar3 = (**(code **)(param_2 + 0x28))(local_18,param_2,&tStack_54);
                if (-1 < iVar3) {
                  return local_18;
                }
              }
            }
            else {
              piVar1 = __errno_location();
              iVar3 = *piVar1;
              piVar1 = __errno_location();
              pcVar2 = strerror(*piVar1);
              printf("%s ERROR: Can\'t set UART flags %d, %s\n","Realtek Bluetooth",iVar3,pcVar2);
            }
          }
        }
      }
    }
    close(local_18);
  }
  return -1;
}



/* ===== FUN_00011a94 @ 00011a94 size=500 ===== */

undefined4 FUN_00011a94(void)

{
  int *piVar1;
  char *pcVar2;
  size_t sVar3;
  undefined4 uVar4;
  int iVar5;
  char local_1c [4];
  int local_18;
  int local_14;
  
  local_14 = open("/sys/class/rfkill/rfkill0/state",2);
  if (local_14 < 0) {
    piVar1 = __errno_location();
    iVar5 = *piVar1;
    piVar1 = __errno_location();
    pcVar2 = strerror(*piVar1);
    printf("%s ERROR: Cannot open %s, %d %s\n","Realtek Bluetooth","/sys/class/rfkill/rfkill0/state"
           ,iVar5,pcVar2);
    uVar4 = 0xffffffff;
  }
  else {
    local_1c[0] = '0';
    local_1c[1] = 0;
    sVar3 = strlen(local_1c);
    local_18 = write(local_14,local_1c,sVar3 + 1);
    sVar3 = strlen(local_1c);
    if (sVar3 + 1 == local_18) {
      usleep(500000);
      local_1c[0] = '1';
      local_1c[1] = 0;
      sVar3 = strlen(local_1c);
      local_18 = write(local_14,local_1c,sVar3 + 1);
      sVar3 = strlen(local_1c);
      if (sVar3 + 1 == local_18) {
        usleep(500000);
        close(local_14);
        uVar4 = 0;
      }
      else {
        piVar1 = __errno_location();
        iVar5 = *piVar1;
        piVar1 = __errno_location();
        pcVar2 = strerror(*piVar1);
        printf("%s ERROR: Cannot write 1 to rfkill state %d %s\n","Realtek Bluetooth",iVar5,pcVar2);
        close(local_14);
        uVar4 = 0xffffffff;
      }
    }
    else {
      piVar1 = __errno_location();
      iVar5 = *piVar1;
      piVar1 = __errno_location();
      pcVar2 = strerror(*piVar1);
      printf("%s ERROR: Cannot write 0 to rfkill state %d %s\n","Realtek Bluetooth",iVar5,pcVar2);
      close(local_14);
      uVar4 = 0xffffffff;
    }
  }
  return uVar4;
}



/* ===== FUN_00011c88 @ 00011c88 size=96 ===== */

void FUN_00011c88(void)

{
  printf("%s :hciattach - HCI UART driver initialization utility\n","Realtek Bluetooth");
  printf("%s :Usage:\n","Realtek Bluetooth");
  printf("%s :\thciattach [-n] [-p] [-b] [-r] [-t timeout] [-s initial_speed] <tty> <type | id> [speed] [flow|noflow] [bdaddr]\n"
         ,"Realtek Bluetooth");
  printf("%s :\thciattach -l\n","Realtek Bluetooth");
  return;
}



/* ===== FUN_00011ce8 @ 00011ce8 size=2496 ===== */

undefined4 FUN_00011ce8(int param_1,char **param_2)

{
  size_t sVar1;
  size_t sVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  undefined4 local_1074;
  undefined4 local_1070;
  uint local_106c;
  undefined2 local_1068;
  pollfd local_64;
  _union_1051 local_5c;
  ulong local_58;
  ulong local_48;
  ulong local_44;
  char *local_40;
  ulong local_3c;
  ulong local_38;
  ulong local_34;
  uint local_30;
  ulong local_2c;
  ulong local_28;
  ulong local_24;
  ulong local_20;
  ulong local_1c;
  ulong local_18;
  ulong local_14;
  
  local_14 = 0;
  local_30 = 10;
  local_34 = 0;
  local_38 = 0;
  local_18 = 1;
  local_1c = 0;
  local_20 = 0;
  while (local_3c = getopt(param_1,param_2,"bnpt:s:lr"), local_3c != 0xffffffff) {
    switch(local_3c) {
    case 0x62:
      local_38 = 1;
      break;
    default:
      FUN_00011c88();
                    /* WARNING: Subroutine does not return */
      exit(1);
    case 0x6c:
      for (local_24 = 0; *(int *)(&DAT_0002e0f4 + local_24 * 0x2c) != 0; local_24 = local_24 + 1) {
        printf("%s :%-10s0x%04x,0x%04x\n","Realtek Bluetooth",
               *(undefined4 *)(&DAT_0002e0f4 + local_24 * 0x2c),
               *(undefined4 *)(&DAT_0002e0f8 + local_24 * 0x2c),
               *(undefined4 *)(&DAT_0002e0fc + local_24 * 0x2c));
      }
                    /* WARNING: Subroutine does not return */
      exit(0);
    case 0x6e:
      local_18 = 0;
      break;
    case 0x70:
      local_1c = 1;
      break;
    case 0x72:
      local_20 = 1;
      break;
    case 0x73:
      local_34 = atoi(optarg);
      break;
    case 0x74:
      local_30 = atoi(optarg);
    }
  }
  local_28 = param_1 - optind;
  if ((int)local_28 < 2) {
    FUN_00011c88();
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_28 = 0;
  local_3c = 0xffffffff;
  for (; optind < param_1; optind = optind + 1) {
    local_40 = param_2[optind];
    switch(local_28) {
    case 0:
      local_106c = local_106c & 0xffffff00;
      pcVar4 = strchr(local_40,0x2f);
      if (pcVar4 == (char *)0x0) {
        local_106c = DAT_0001b78c;
        local_1068 = (undefined2)DAT_0001b790;
      }
      sVar1 = strlen(local_40);
      sVar2 = strlen((char *)&local_106c);
      if (0xfff - sVar2 < sVar1) {
        fwrite("Invalid serial device\n",1,0x16,stderr);
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      sVar1 = strlen((char *)&local_106c);
      strncat((char *)&local_106c,local_40,0xfff - sVar1);
      break;
    case 1:
      pcVar4 = strchr(param_2[optind],0x2c);
      if (pcVar4 == (char *)0x0) {
        local_14 = FUN_000115cc(local_40);
      }
      else {
        sscanf(param_2[optind],"%x,%x",&local_1070,&local_1074);
        local_14 = FUN_000114f4(local_1070,local_1074);
      }
      if (local_14 == 0) {
        printf("%s ERROR: Unknown device type or id\n","Realtek Bluetooth");
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      break;
    case 2:
      iVar5 = atoi(param_2[optind]);
      *(int *)(local_14 + 0x14) = iVar5;
      break;
    case 3:
      iVar5 = strcmp("flow",param_2[optind]);
      if (iVar5 == 0) {
        *(uint *)(local_14 + 0x18) = *(uint *)(local_14 + 0x18) | 1;
      }
      else {
        *(uint *)(local_14 + 0x18) = *(uint *)(local_14 + 0x18) & 0xfffffffe;
      }
      break;
    case 4:
      iVar5 = strcmp("sleep",param_2[optind]);
      if (iVar5 == 0) {
        *(undefined4 *)(local_14 + 0x1c) = 1;
      }
      else {
        *(undefined4 *)(local_14 + 0x1c) = 0;
      }
      break;
    case 5:
      *(char **)(local_14 + 0x20) = param_2[optind];
    }
    local_28 = local_28 + 1;
  }
  if (local_14 == 0) {
    printf("%s ERROR: Unknown device type or id\n","Realtek Bluetooth");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  do {
    if (local_34 != 0) {
      *(ulong *)(local_14 + 0x10) = local_34;
    }
    memset(&local_5c,0,0x14);
    local_58 = 1;
    local_5c.sa_handler = FUN_000110b8;
    sigaction(0xe,(sigaction *)&local_5c,(sigaction *)0x0);
    alarm(local_30);
    local_28 = FUN_00011678(&local_106c,local_14,local_38,local_20);
    if ((int)local_28 < 0) {
      piVar3 = __errno_location();
      iVar5 = *piVar3;
      piVar3 = __errno_location();
      pcVar4 = strerror(*piVar3);
      printf("%s ERROR: Can\'t initialize device %d, %s\n","Realtek Bluetooth",iVar5,pcVar4);
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    printf("%s :Device setup complete\n","Realtek Bluetooth");
    alarm(0);
    memset(&local_5c,0,0x14);
    local_58 = 1;
    local_5c = (_union_1051)0x1;
    sigaction(0x11,(sigaction *)&local_5c,(sigaction *)0x0);
    sigaction(0xd,(sigaction *)&local_5c,(sigaction *)0x0);
    local_5c.sa_handler = FUN_00011040;
    sigaction(0xf,(sigaction *)&local_5c,(sigaction *)0x0);
    sigaction(2,(sigaction *)&local_5c,(sigaction *)0x0);
    local_5c.sa_handler = FUN_00011010;
    sigaction(1,(sigaction *)&local_5c,(sigaction *)0x0);
    if (local_18 != 0) {
      local_44 = fork();
      if (local_44 != 0) {
        if (local_1c != 0) {
          printf("%s :%d\n","Realtek Bluetooth",local_44);
        }
        return 0;
      }
      local_44 = 0;
      for (local_24 = 0; (int)local_24 < 0x14; local_24 = local_24 + 1) {
        if (local_24 != local_28) {
          close(local_24);
        }
      }
    }
    local_64.fd = local_28;
    local_64.events = 0x18;
    sigfillset((sigset_t *)&stack0xffffff94);
    sigdelset((sigset_t *)&stack0xffffff94,0x11);
    sigdelset((sigset_t *)&stack0xffffff94,0xd);
    sigdelset((sigset_t *)&stack0xffffff94,0xf);
    sigdelset((sigset_t *)&stack0xffffff94,2);
    sigdelset((sigset_t *)&stack0xffffff94,1);
    do {
      while( true ) {
        if (DAT_0002e570 != 0) goto LAB_00012630;
        local_64.revents = 0;
        local_2c = ppoll(&local_64,1,(timespec *)0x0,(__sigset_t *)&stack0xffffff94);
        if ((-1 < (int)local_2c) || (piVar3 = __errno_location(), *piVar3 != 4)) break;
        printf("%s :Got EINTR.\n","Realtek Bluetooth");
      }
    } while (local_2c == 0);
LAB_00012630:
    printf("%s :err %d, p->revents %04x\n","Realtek Bluetooth",local_2c,(int)local_64.revents);
    printf("%s :Restore TTY line discipline\n","Realtek Bluetooth");
    local_48 = 0;
    iVar5 = ioctl(local_28,0x5423,&local_48);
    if (iVar5 < 0) {
      piVar3 = __errno_location();
      iVar5 = *piVar3;
      piVar3 = __errno_location();
      pcVar4 = strerror(*piVar3);
      printf("%s ERROR: Can\'t restore line discipline %d, %s\n","Realtek Bluetooth",iVar5,pcVar4);
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    if ((local_64.revents & 0x18U) == 0) {
      return 0;
    }
    printf("%s :Recover...\n","Realtek Bluetooth");
    FUN_00011a94();
  } while( true );
}



/* ===== FUN_0001270c @ 0001270c size=428 ===== */

void FUN_0001270c(int param_1,uint param_2)

{
  char acStack_3d [48];
  undefined1 local_d;
  uint local_c;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
      acStack_3d[(local_c & 0xf) * 3 + 1] = "0123456789abcdef"[*(byte *)(param_1 + local_c) >> 4];
      acStack_3d[(local_c & 0xf) * 3 + 2] = "0123456789abcdef"[*(byte *)(param_1 + local_c) & 0xf];
      acStack_3d[(local_c & 0xf) * 3 + 3] = ' ';
      if ((local_c + 1 & 0xf) == 0) {
        local_d = 0;
        printf("%s :%s\n","Realtek Bluetooth",acStack_3d + 1);
      }
    }
    if ((local_c & 0xf) != 0) {
      acStack_3d[(local_c & 0xf) * 3] = '\0';
      printf("%s :%s\n","Realtek Bluetooth",acStack_3d + 1);
    }
  }
  return;
}



/* ===== FUN_000128b8 @ 000128b8 size=160 ===== */

int FUN_000128b8(int param_1,uint param_2)

{
  int iVar1;
  itimerspec local_1c;
  uint local_c;
  
  local_c = param_2 / 1000;
  memset(&local_1c,0,0x10);
  local_1c.it_interval.tv_sec = 0;
  local_1c.it_interval.tv_nsec = 0;
  local_1c.it_value.tv_sec = local_c;
  local_1c.it_value.tv_nsec = (param_2 + local_c * -1000) * 1000000;
  iVar1 = timerfd_settime(param_1,0,&local_1c,(itimerspec *)0x0);
  return iVar1;
}



/* ===== FUN_00012958 @ 00012958 size=52 ===== */

undefined1 FUN_00012958(byte param_1)

{
  return (&DAT_0001b8ec)[param_1];
}



/* ===== FUN_0001298c @ 0001298c size=104 ===== */

ushort FUN_0001298c(ushort param_1)

{
  short sVar1;
  ushort uVar2;
  
  sVar1 = FUN_00012958(param_1 & 0xff);
  uVar2 = FUN_00012958(param_1 >> 8);
  return sVar1 << 8 | uVar2;
}



/* ===== FUN_000129f4 @ 000129f4 size=176 ===== */

size_t * FUN_000129f4(size_t param_1)

{
  size_t *psVar1;
  
  psVar1 = malloc(param_1 + 0xc);
  if (psVar1 == (size_t *)0x0) {
    printf("%s ERROR: Allocate skb fails!\n","Realtek Bluetooth");
    psVar1 = (size_t *)0x0;
  }
  else {
    *psVar1 = param_1;
    psVar1[1] = 0;
    psVar1[2] = (size_t)(psVar1 + 3);
    memset((void *)psVar1[2],0,param_1);
  }
  return psVar1;
}



/* ===== FUN_00012aa4 @ 00012aa4 size=36 ===== */

void FUN_00012aa4(void *param_1)

{
  free(param_1);
  return;
}



/* ===== FUN_00012ac8 @ 00012ac8 size=144 ===== */

int FUN_00012ac8(uint *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_1[1];
  if (*param_1 < param_1[1] + param_2) {
    printf("%s ERROR: Buffer too small\n","Realtek Bluetooth");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  param_1[1] = param_1[1] + param_2;
  return param_1[2] + uVar1;
}



/* ===== FUN_00012b58 @ 00012b58 size=100 ===== */

void FUN_00012b58(int param_1,uint param_2)

{
  if (param_2 < *(uint *)(param_1 + 4)) {
    *(uint *)(param_1 + 4) = param_2;
  }
  else {
    printf("%s ERROR: Trim error, data_len %u < len %u\n","Realtek Bluetooth",
           *(undefined4 *)(param_1 + 4),param_2);
  }
  return;
}



/* ===== FUN_00012bbc @ 00012bbc size=148 ===== */

undefined4 FUN_00012bbc(int param_1,uint param_2)

{
  if (*(uint *)(param_1 + 4) < param_2) {
    printf("%s ERROR: Pull error, data_len %u < len %u\n","Realtek Bluetooth",
           *(undefined4 *)(param_1 + 4),param_2);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  *(uint *)(param_1 + 4) = *(int *)(param_1 + 4) - param_2;
  *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_2;
  return *(undefined4 *)(param_1 + 8);
}



/* ===== FUN_00012c50 @ 00012c50 size=184 ===== */

void FUN_00012c50(ushort *param_1,byte param_2)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(&DAT_0001b9ec + (((uint)param_2 ^ (uint)*param_1) & 0xf) * 2) ^ *param_1 >> 4;
  *param_1 = *(ushort *)(&DAT_0001b9ec + (((uint)uVar1 ^ (uint)(param_2 >> 4)) & 0xf) * 2) ^
             uVar1 >> 4;
  return;
}



/* ===== FUN_00012d08 @ 00012d08 size=124 ===== */

short FUN_00012d08(int param_1)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(*(int *)(*(int *)(param_1 + 0x18) + 8) +
                   *(int *)(*(int *)(param_1 + 0x18) + 4) + -2);
  return (ushort)pbVar1[1] + (ushort)*pbVar1 * 0x100;
}



/* ===== FUN_00012d84 @ 00012d84 size=60 ===== */

void FUN_00012d84(undefined4 param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)FUN_00012ac8(param_1,1);
  *puVar1 = 0xc0;
  return;
}



/* ===== FUN_00012dc0 @ 00012dc0 size=292 ===== */

void FUN_00012dc0(undefined4 param_1,byte param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 *puVar5;
  byte *pbVar6;
  
  uVar4 = DAT_0001bac0;
  uVar3 = DAT_0001babc;
  uVar2 = DAT_0001bab8;
  uVar1 = DAT_0001bab4;
  if (param_2 == 0x13) {
    puVar5 = (undefined2 *)FUN_00012ac8(param_1,2);
    *puVar5 = uVar4;
    return;
  }
  if (param_2 < 0x14) {
    if (param_2 == 0x11) {
      puVar5 = (undefined2 *)FUN_00012ac8(param_1,2);
      *puVar5 = uVar3;
      return;
    }
  }
  else {
    if (param_2 == 0xc0) {
      puVar5 = (undefined2 *)FUN_00012ac8(param_1,2);
      *puVar5 = uVar1;
      return;
    }
    if (param_2 == 0xdb) {
      puVar5 = (undefined2 *)FUN_00012ac8(param_1,2);
      *puVar5 = uVar2;
      return;
    }
  }
  pbVar6 = (byte *)FUN_00012ac8(param_1,1);
  *pbVar6 = param_2;
  return;
}



/* ===== FUN_00012ee4 @ 00012ee4 size=896 ===== */

void FUN_00012ee4(int param_1,byte param_2)

{
  byte *pbVar1;
  undefined1 *puVar2;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    if (param_2 == 0xdb) {
      *(undefined4 *)(param_1 + 0x10) = 1;
    }
    else {
      pbVar1 = (byte *)FUN_00012ac8(*(undefined4 *)(param_1 + 0x18),1);
      *pbVar1 = param_2;
      if (((**(byte **)(*(int *)(param_1 + 0x18) + 8) & 0x40) != 0) &&
         (*(int *)(param_1 + 0xc) != 4)) {
        FUN_00012c50(param_1 + 6,param_2);
      }
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    }
  }
  else if (*(int *)(param_1 + 0x10) == 1) {
    switch(param_2) {
    case 0xdc:
      puVar2 = (undefined1 *)FUN_00012ac8(*(undefined4 *)(param_1 + 0x18),1);
      *puVar2 = 0xc0;
      if (((**(byte **)(*(int *)(param_1 + 0x18) + 8) & 0x40) != 0) &&
         (*(int *)(param_1 + 0xc) != 4)) {
        FUN_00012c50(param_1 + 6,0xc0);
      }
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
      break;
    case 0xdd:
      puVar2 = (undefined1 *)FUN_00012ac8(*(undefined4 *)(param_1 + 0x18),1);
      *puVar2 = 0xdb;
      if (((**(byte **)(*(int *)(param_1 + 0x18) + 8) & 0x40) != 0) &&
         (*(int *)(param_1 + 0xc) != 4)) {
        FUN_00012c50(param_1 + 6,0xdb);
      }
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
      break;
    case 0xde:
      puVar2 = (undefined1 *)FUN_00012ac8(*(undefined4 *)(param_1 + 0x18),1);
      *puVar2 = 0x11;
      if (((**(byte **)(*(int *)(param_1 + 0x18) + 8) & 0x40) != 0) &&
         (*(int *)(param_1 + 0xc) != 4)) {
        FUN_00012c50(param_1 + 6,0x11);
      }
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
      break;
    case 0xdf:
      puVar2 = (undefined1 *)FUN_00012ac8(*(undefined4 *)(param_1 + 0x18),1);
      *puVar2 = 0x13;
      if (((**(byte **)(*(int *)(param_1 + 0x18) + 8) & 0x40) != 0) &&
         (*(int *)(param_1 + 0xc) != 4)) {
        FUN_00012c50(param_1 + 6,0x13);
      }
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
      break;
    default:
      printf("%s ERROR: Error: Invalid byte %02x after esc byte\n","Realtek Bluetooth",(uint)param_2
            );
      FUN_00012aa4(*(undefined4 *)(param_1 + 0x18));
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
    }
  }
  return;
}



/* ===== FUN_00013274 @ 00013274 size=752 ===== */

int FUN_00013274(char *param_1,int param_2,int param_3,undefined4 param_4)

{
  ushort local_1a;
  byte local_18 [4];
  int local_14;
  int local_10;
  int local_c;
  
  local_1a = 0xffff;
  switch(param_4) {
  case 0:
  case 0xe:
  case 0xf:
    local_c = 0;
    break;
  case 1:
  case 2:
  case 4:
    local_c = 1;
    break;
  default:
    printf("%s ERROR: Unknown packet type\n","Realtek Bluetooth");
    return 0;
  }
  local_14 = FUN_000129f4((param_3 + 7) * 2);
  if (local_14 == 0) {
    local_14 = 0;
  }
  else {
    FUN_00012d84(local_14);
    local_18[0] = *param_1 << 3;
    param_1[3] = '\0';
    if (local_c != 0) {
      local_18[0] = *param_1 << 3 | param_1[4] + 0x80U;
      param_1[4] = param_1[4] + '\x01';
      param_1[4] = param_1[4] & 7;
    }
    if (param_1[2] != '\0') {
      local_18[0] = local_18[0] | 0x40;
    }
    local_18[1] = (byte)(param_3 << 4) | (byte)param_4;
    local_18[2] = (byte)(param_3 >> 4);
    local_18[3] = ~(local_18[0] + local_18[1] + local_18[2]);
    for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
      FUN_00012dc0(local_14,local_18[local_10]);
      if (param_1[2] != '\0') {
        FUN_00012c50(&local_1a,local_18[local_10]);
      }
    }
    for (local_10 = 0; local_10 < param_3; local_10 = local_10 + 1) {
      FUN_00012dc0(local_14,*(undefined1 *)(param_2 + local_10));
      if (param_1[2] != '\0') {
        FUN_00012c50(&local_1a,*(undefined1 *)(param_2 + local_10));
      }
    }
    if (param_1[2] != '\0') {
      local_1a = FUN_0001298c(local_1a);
      FUN_00012dc0(local_14,local_1a >> 8);
      FUN_00012dc0(local_14,local_1a & 0xff);
    }
    FUN_00012d84(local_14);
  }
  return local_14;
}



/* ===== FUN_000135a4 @ 000135a4 size=136 ===== */

void FUN_000135a4(int param_1)

{
  int iVar1;
  ssize_t sVar2;
  
  iVar1 = FUN_00013274(&DAT_0002e584,0,0,0);
  sVar2 = write(param_1,*(void **)(iVar1 + 8),*(size_t *)(iVar1 + 4));
  if (*(int *)(iVar1 + 4) != sVar2) {
    printf("%s ERROR: Write pure ack fails\n","Realtek Bluetooth");
  }
  FUN_00012aa4(iVar1);
  return;
}



/* ===== FUN_0001362c @ 0001362c size=1424 ===== */

void FUN_0001362c(int param_1)

{
  ushort uVar1;
  
  FUN_00012bbc(param_1,2);
  uVar1 = *(ushort *)(*(int *)(param_1 + 8) + 1);
  if (DAT_0002e1a4 != '\0') {
    printf("%s :Receive cmd complete event of command: %04x\n","Realtek Bluetooth",(uint)uVar1);
  }
  FUN_00012bbc(param_1,3);
  if (**(byte **)(param_1 + 8) == 0) {
    if (uVar1 == DAT_0002e5e8) {
      DAT_0002e5ec = 1;
      if (uVar1 == 0xfc17) {
        printf("%s :Received cc of vendor change baud\n","Realtek Bluetooth");
      }
      else if (uVar1 < 0xfc18) {
        if (uVar1 == 0x1001) {
          DAT_0002e5a6 = *(byte *)(*(int *)(param_1 + 8) + 1);
          DAT_0002e5a4 = CONCAT11(*(undefined1 *)(*(int *)(param_1 + 8) + 3),
                                  *(undefined1 *)(*(int *)(param_1 + 8) + 2));
          DAT_0002e5a2 = CONCAT11(*(undefined1 *)(*(int *)(param_1 + 8) + 8),
                                  *(undefined1 *)(*(int *)(param_1 + 8) + 7));
          printf("%s :HCI Version 0x%02x\n","Realtek Bluetooth",(uint)DAT_0002e5a6);
          printf("%s :HCI Revision 0x%04x\n","Realtek Bluetooth",(uint)DAT_0002e5a4);
          printf("%s :LMP Subversion 0x%04x\n","Realtek Bluetooth",(uint)DAT_0002e5a2);
        }
        else {
          if (uVar1 != 0x1009) {
            DAT_0002e5ec = 1;
            return;
          }
          printf("%s :BD Address: %02x:%02x:%02x:%02x:%02x:%02x\n","Realtek Bluetooth",
                 (uint)*(byte *)(*(int *)(param_1 + 8) + 5),
                 (uint)*(byte *)(*(int *)(param_1 + 8) + 4),
                 (uint)*(byte *)(*(int *)(param_1 + 8) + 3),
                 (uint)*(byte *)(*(int *)(param_1 + 8) + 2),
                 (uint)*(byte *)(*(int *)(param_1 + 8) + 1),(uint)**(byte **)(param_1 + 8));
        }
      }
      else if (uVar1 == 0xfc61) {
        if (DAT_0002e5ea == 1) {
          DAT_0002e5a8 = *(byte *)(*(int *)(param_1 + 8) + 1) & 0xf;
          DAT_0002e5a9 = *(byte *)(*(int *)(param_1 + 8) + 2) & 0xf;
          printf("%s :Read chip type %02x\n","Realtek Bluetooth",(uint)DAT_0002e5a8);
          printf("%s :Read chip ver %02x\n","Realtek Bluetooth",(uint)DAT_0002e5a9);
        }
        else if (DAT_0002e5ea == 2) {
          DAT_0002e5a2 = CONCAT11(*(undefined1 *)(*(int *)(param_1 + 8) + 2),
                                  *(undefined1 *)(*(int *)(param_1 + 8) + 1));
          printf("%s :LMP Subversion 0x%04x\n","Realtek Bluetooth",(uint)DAT_0002e5a2);
        }
        else if (DAT_0002e5ea == 3) {
          DAT_0002e5a4 = CONCAT11(*(undefined1 *)(*(int *)(param_1 + 8) + 2),
                                  *(undefined1 *)(*(int *)(param_1 + 8) + 1));
          printf("%s :HCI Revision 0x%04x\n","Realtek Bluetooth",(uint)DAT_0002e5a4);
        }
        else if (DAT_0002e5ea == 4) {
          DAT_0002e5aa = *(undefined1 *)(*(int *)(param_1 + 8) + 1);
        }
      }
      else {
        if (uVar1 != 0xfc6d) {
          DAT_0002e5ec = 1;
          return;
        }
        DAT_0002e5a7 = *(byte *)(*(int *)(param_1 + 8) + 1);
        printf("%s :Read ROM version %02x\n","Realtek Bluetooth",(uint)DAT_0002e5a7);
      }
      DAT_0002e5a0 = DAT_0002e5a0 + 1;
    }
    else {
      printf("%s ERROR: %s: Received unexpected cc for cmd %04x, %04x of cc\n","Realtek Bluetooth",
             "h5_init_hci_cc",(uint)DAT_0002e5e8,(uint)uVar1);
    }
  }
  else {
    printf("%s ERROR: status is %u for cmd %04x\n","Realtek Bluetooth",
           (uint)**(byte **)(param_1 + 8),(uint)uVar1);
  }
  return;
}



/* ===== FUN_00013bbc @ 00013bbc size=376 ===== */

void FUN_00013bbc(int param_1)

{
  ushort uVar1;
  
  FUN_00012bbc(param_1,2);
  uVar1 = *(ushort *)(*(int *)(param_1 + 8) + 1);
  if (DAT_0002e1a4 != '\0') {
    printf("%s :Receive cmd complete event of command: %04x\n","Realtek Bluetooth",(uint)uVar1);
  }
  FUN_00012bbc(param_1,3);
  if (**(byte **)(param_1 + 8) == 0) {
    if (uVar1 == DAT_0002e5e8) {
      DAT_0002e5ec = 1;
      if (uVar1 == 0xc03) {
        printf("%s :Received cc of hci reset cmd\n","Realtek Bluetooth");
        DAT_0002e598 = 5;
      }
    }
    else {
      printf("%s ERROR: %s: Received unexpected cc for cmd %04x, %04x of cc\n","Realtek Bluetooth",
             "h5_post_hci_cc",(uint)DAT_0002e5e8,(uint)uVar1);
    }
  }
  else {
    printf("%s ERROR: status is %u for cmd %04x\n","Realtek Bluetooth",
           (uint)**(byte **)(param_1 + 8),(uint)uVar1);
  }
  return;
}



/* ===== FUN_00013d34 @ 00013d34 size=332 ===== */

void FUN_00013d34(int param_1)

{
  byte bVar1;
  
  if (DAT_0002e598 == 2) {
    if (**(char **)(param_1 + 8) == '\x0e') {
      FUN_0001362c(param_1);
    }
  }
  else if (DAT_0002e598 == 3) {
    if (**(char **)(param_1 + 8) == '\x0e') {
      bVar1 = *(byte *)(*(int *)(param_1 + 8) + 6);
      DAT_0002e5cc = (uint)bVar1;
      if ((bVar1 & 0x80) != 0) {
        DAT_0002e5cc = DAT_0002e5cc & 0xffffff7f;
        DAT_0002e598 = 4;
      }
    }
    else {
      printf("%s :Received event 0x%x during download patch\n","Realtek Bluetooth",
             (uint)**(byte **)(param_1 + 8));
    }
  }
  else if (DAT_0002e598 == 4) {
    if (**(char **)(param_1 + 8) == '\x0e') {
      FUN_00013bbc(param_1);
    }
  }
  else {
    printf("%s ERROR: receive packets in active state\n","Realtek Bluetooth");
  }
  return;
}



/* ===== FUN_00013e80 @ 00013e80 size=932 ===== */

void FUN_00013e80(int param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined2 local_24 [2];
  undefined2 local_20 [2];
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined2 local_14 [2];
  undefined2 local_10 [2];
  ssize_t local_c;
  
  local_10[0] = DAT_0001be84;
  local_14[0] = DAT_0001be88;
  local_1c = DAT_0001be8c;
  uStack_18 = DAT_0001be90;
  local_20[0] = DAT_0001be94;
  local_24[0] = DAT_0001be98;
  local_2c = DAT_0001be9c;
  uStack_28 = DAT_0001bea0;
  if (DAT_0002e598 == 0) {
    iVar1 = memcmp(*(void **)(param_1 + 8),local_10,2);
    if (iVar1 == 0) {
      printf("%s :[SYNC] Get SYNC Pkt\n\n","Realtek Bluetooth");
      local_c = write(DAT_0002e5b4,&local_1c,8);
      if (local_c != 8) {
        piVar2 = __errno_location();
        pcVar3 = strerror(*piVar2);
        printf("%s ERROR: Send h5 sync resp error, %s\n","Realtek Bluetooth",pcVar3);
      }
    }
    else {
      iVar1 = memcmp(*(void **)(param_1 + 8),local_14,2);
      if (iVar1 == 0) {
        printf("%s :[SYNC] Get SYNC Resp Pkt\n","Realtek Bluetooth");
        DAT_0002e598 = 1;
      }
    }
  }
  else if (DAT_0002e598 == 1) {
    iVar1 = memcmp(*(void **)(param_1 + 8),local_10,2);
    if (iVar1 == 0) {
      printf("%s :[CONFIG] Get SYNC pkt\n","Realtek Bluetooth");
      local_c = write(DAT_0002e5b4,&local_1c,8);
      if (local_c != 8) {
        piVar2 = __errno_location();
        pcVar3 = strerror(*piVar2);
        printf("%s ERROR: Send h5 sync resp error, %s\n","Realtek Bluetooth",pcVar3);
      }
    }
    else {
      iVar1 = memcmp(*(void **)(param_1 + 8),local_20,2);
      if (iVar1 == 0) {
        printf("%s :[CONFIG] Get CONFG pkt\n","Realtek Bluetooth");
        local_c = write(DAT_0002e5b4,&local_2c,8);
        if (local_c != 8) {
          piVar2 = __errno_location();
          pcVar3 = strerror(*piVar2);
          printf("%s ERROR: Send h5 sync resp to ctl error, %s\n","Realtek Bluetooth",pcVar3);
        }
      }
      else {
        iVar1 = memcmp(*(void **)(param_1 + 8),local_24,2);
        if (iVar1 == 0) {
          printf("%s :[CONFIG] Get CONFG resp pkt\n","Realtek Bluetooth");
          DAT_0002e598 = 2;
          if (2 < *(uint *)(param_1 + 4)) {
            DAT_0002e586 = *(byte *)(*(int *)(param_1 + 8) + 2) >> 4 & 1;
            printf("%s :dic is %u, cfg field 0x%02x\n","Realtek Bluetooth",(uint)DAT_0002e586,
                   (uint)*(byte *)(*(int *)(param_1 + 8) + 2));
          }
        }
        else {
          printf("%s WARN: [CONFIG] Get unknown pkt\n","Realtek Bluetooth");
          FUN_000135a4(DAT_0002e5b4);
        }
      }
    }
  }
  return;
}



/* ===== FUN_00014224 @ 00014224 size=440 ===== */

void FUN_00014224(byte *param_1)

{
  bool bVar1;
  byte *pbVar2;
  
  pbVar2 = *(byte **)(*(int *)(param_1 + 0x18) + 8);
  if ((char)*pbVar2 < '\0') {
    *param_1 = (*pbVar2 & 7) + 1;
    *param_1 = *param_1 & 7;
    param_1[3] = 1;
  }
  param_1[1] = *pbVar2 >> 3 & 7;
  switch(pbVar2[1] & 0xf) {
  case 1:
  case 2:
  case 4:
    bVar1 = true;
    break;
  case 3:
    bVar1 = true;
    break;
  default:
    bVar1 = false;
    break;
  case 0xf:
    bVar1 = false;
    FUN_00012bbc(*(undefined4 *)(param_1 + 0x18),4);
    FUN_00013e80(*(undefined4 *)(param_1 + 0x18));
  }
  if (bVar1) {
    FUN_00012bbc(*(undefined4 *)(param_1 + 0x18),4);
    FUN_00013d34(*(undefined4 *)(param_1 + 0x18));
  }
  if (param_1[3] != 0) {
    FUN_000135a4(DAT_0002e5b4);
    param_1[3] = 0;
  }
  FUN_00012aa4(*(undefined4 *)(param_1 + 0x18));
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  return;
}



/* ===== FUN_00014418 @ 00014418 size=1268 ===== */

undefined4 FUN_00014418(byte *param_1,char *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int local_24;
  char *local_14;
  
  local_24 = param_3;
  local_14 = param_2;
  do {
    while( true ) {
      if (local_24 == 0) {
        return 0;
      }
      if (*(int *)(param_1 + 8) == 0) break;
      if (*local_14 == -0x40) {
        printf("%s ERROR: Short h5 packet\n","Realtek Bluetooth");
        FUN_00012aa4(*(undefined4 *)(param_1 + 0x18));
        param_1[0xc] = 1;
        param_1[0xd] = 0;
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        param_1[8] = 0;
        param_1[9] = 0;
        param_1[10] = 0;
        param_1[0xb] = 0;
      }
      else {
        FUN_00012ee4(param_1,*local_14);
      }
      local_14 = local_14 + 1;
      local_24 = local_24 + -1;
    }
    switch(*(undefined4 *)(param_1 + 0xc)) {
    case 0:
      if (*local_14 == -0x40) {
        param_1[0xc] = 1;
        param_1[0xd] = 0;
        param_1[0xe] = 0;
        param_1[0xf] = 0;
      }
      local_14 = local_14 + 1;
      local_24 = local_24 + -1;
      break;
    case 1:
      if (*local_14 == -0x40) {
        local_14 = local_14 + 1;
        local_24 = local_24 + -1;
      }
      else {
        param_1[0xc] = 2;
        param_1[0xd] = 0;
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        param_1[8] = 4;
        param_1[9] = 0;
        param_1[10] = 0;
        param_1[0xb] = 0;
        param_1[0x10] = 0;
        param_1[0x11] = 0;
        param_1[0x12] = 0;
        param_1[0x13] = 0;
        param_1[6] = 0xff;
        param_1[7] = 0xff;
        uVar4 = FUN_000129f4(0x1005);
        *(undefined4 *)(param_1 + 0x18) = uVar4;
        if (*(int *)(param_1 + 0x18) == 0) {
          printf("%s ERROR: Can\'t alloc skb for new pkt\n","Realtek Bluetooth");
          param_1[0xc] = 0;
          param_1[0xd] = 0;
          param_1[0xe] = 0;
          param_1[0xf] = 0;
          param_1[8] = 0;
          param_1[9] = 0;
          param_1[10] = 0;
          param_1[0xb] = 0;
          return 0;
        }
      }
      break;
    case 2:
      if ((byte)~(**(char **)(*(int *)(param_1 + 0x18) + 8) +
                  *(char *)(*(int *)(*(int *)(param_1 + 0x18) + 8) + 1) +
                 *(char *)(*(int *)(*(int *)(param_1 + 0x18) + 8) + 2)) ==
          *(byte *)(*(int *)(*(int *)(param_1 + 0x18) + 8) + 3)) {
        if ((**(char **)(*(int *)(param_1 + 0x18) + 8) < '\0') &&
           ((**(byte **)(*(int *)(param_1 + 0x18) + 8) & 7) != *param_1)) {
          bVar1 = **(byte **)(*(int *)(param_1 + 0x18) + 8);
          printf("%s ERROR: Out-of-order packet arrived, got(%u)expected(%u)\n","Realtek Bluetooth",
                 **(byte **)(*(int *)(param_1 + 0x18) + 8) & 7,(uint)*param_1);
          param_1[3] = 1;
          FUN_00012aa4(*(undefined4 *)(param_1 + 0x18));
          param_1[0xc] = 0;
          param_1[0xd] = 0;
          param_1[0xe] = 0;
          param_1[0xf] = 0;
          param_1[8] = 0;
          param_1[9] = 0;
          param_1[10] = 0;
          param_1[0xb] = 0;
          if ((DAT_0002e598 == 3) && (DAT_0002e5c8 == DAT_0002e5c4)) {
            DAT_0002e584 = bVar1 & 7;
          }
        }
        else {
          param_1[0xc] = 3;
          param_1[0xd] = 0;
          param_1[0xe] = 0;
          param_1[0xf] = 0;
          *(uint *)(param_1 + 8) =
               (uint)(*(byte *)(*(int *)(*(int *)(param_1 + 0x18) + 8) + 1) >> 4) +
               (uint)*(byte *)(*(int *)(*(int *)(param_1 + 0x18) + 8) + 2) * 0x10;
        }
      }
      else {
        printf("%s ERROR: h5 hdr checksum error\n","Realtek Bluetooth");
        FUN_00012aa4(*(undefined4 *)(param_1 + 0x18));
        param_1[0xc] = 0;
        param_1[0xd] = 0;
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        param_1[8] = 0;
        param_1[9] = 0;
        param_1[10] = 0;
        param_1[0xb] = 0;
      }
      break;
    case 3:
      if ((**(byte **)(*(int *)(param_1 + 0x18) + 8) & 0x40) == 0) {
        FUN_00014224(param_1);
      }
      else {
        param_1[0xc] = 4;
        param_1[0xd] = 0;
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        param_1[8] = 2;
        param_1[9] = 0;
        param_1[10] = 0;
        param_1[0xb] = 0;
      }
      break;
    case 4:
      iVar2 = FUN_0001298c(*(undefined2 *)(param_1 + 6));
      iVar3 = FUN_00012d08(param_1);
      if (iVar2 == iVar3) {
        FUN_00012b58(*(undefined4 *)(param_1 + 0x18),*(int *)(*(int *)(param_1 + 0x18) + 4) + -2);
        FUN_00014224(param_1);
      }
      else {
        uVar4 = FUN_0001298c(*(undefined2 *)(param_1 + 6));
        uVar5 = FUN_00012d08(param_1);
        printf("%s ERROR: Checksum failed, computed %04x received %04x\n","Realtek Bluetooth",uVar4,
               uVar5);
        FUN_00012aa4(*(undefined4 *)(param_1 + 0x18));
        param_1[0xc] = 0;
        param_1[0xd] = 0;
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        param_1[8] = 0;
        param_1[9] = 0;
        param_1[10] = 0;
        param_1[0xb] = 0;
      }
    }
  } while( true );
}



/* ===== FUN_00014920 @ 00014920 size=272 ===== */

char * FUN_00014920(uint param_1)

{
  if (param_1 == 0x1001001) {
    return "OP_LMP_VER";
  }
  if (param_1 < 0x1001002) {
    if (param_1 == 2) {
      return "OP_H5_CONFIG";
    }
    if (param_1 == 0x1000c03) {
      return "OP_HCI_RESET";
    }
    if (param_1 == 1) {
      return "OP_H5_SYNC";
    }
  }
  else {
    if (param_1 == 0x100fc61) {
      return "OP_VENDOR_READ";
    }
    if (param_1 == 0x100fc6d) {
      return "OP_ROM_VER";
    }
    if (param_1 == 0x100fc17) {
      return "OP_SET_BAUD";
    }
  }
  return "OP_UNKNOWN";
}



/* ===== FUN_00014a30 @ 00014a30 size=1560 ===== */

int FUN_00014a30(int param_1,int param_2,uint param_3,int param_4,int param_5)

{
  int *piVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  epoll_event aeStack_160 [10];
  undefined1 auStack_c0 [8];
  iovec local_b8;
  undefined1 auStack_b0 [128];
  ssize_t local_30;
  int local_2c;
  size_t local_28;
  size_t local_24;
  void *local_20;
  short local_1a;
  int local_18;
  int local_14;
  
  local_14 = 0xffffffff;
  local_1a = 0;
  if ((param_1 == -1) || (param_2 == 0)) {
    printf("%s ERROR: Invalid parameter\n","Realtek Bluetooth");
    iVar4 = -1;
  }
  else {
    local_b8.iov_base = *(void **)(param_2 + 8);
    local_b8.iov_len = *(size_t *)(param_2 + 4);
    local_24 = local_b8.iov_len;
    local_20 = local_b8.iov_base;
    if (((param_3 & 0x1000000) == 0) ||
       ((local_1a = (short)param_3, local_1a == DAT_0002e5e8 && (DAT_0002e5ec == 0)))) {
      do {
        local_28 = writev(param_1,&local_b8,1);
        if (local_28 != local_24) {
          printf("%s WARN: Writev partially, ret %d\n","Realtek Bluetooth",local_28);
        }
      } while (((int)local_28 < 0) && (piVar1 = __errno_location(), *piVar1 == 4));
      if (-1 < (int)local_28) {
        if (0 < (int)DAT_0002e5f8) {
          FUN_000128b8(DAT_0002e5f8,param_4);
        }
LAB_00014bf4:
        do {
          local_2c = epoll_wait(DAT_0002e5fc,aeStack_160,10,param_4);
          if (local_2c == -1) {
            piVar1 = __errno_location();
            pcVar2 = strerror(*piVar1);
            piVar1 = __errno_location();
            printf("%s ERROR: epoll_wait, %s (%d)\n","Realtek Bluetooth",pcVar2,*piVar1);
                    /* WARNING: Subroutine does not return */
            exit(1);
          }
          for (local_18 = 0; local_18 < local_2c; local_18 = local_18 + 1) {
            if (aeStack_160[local_18].data.ptr == DAT_0002e5b4) {
              if ((aeStack_160[local_18].events & 0x2018) != 0) {
                printf("%s ERROR: %s: Error happens on serial fd\n","Realtek Bluetooth",
                       "start_transmit_wait");
                    /* WARNING: Subroutine does not return */
                exit(1);
              }
              local_30 = read(aeStack_160[local_18].data.fd,auStack_b0,0x80);
              if (local_30 < 1) {
                piVar1 = __errno_location();
                pcVar2 = strerror(*piVar1);
                printf("%s ERROR: Read serial error, %s\n","Realtek Bluetooth",pcVar2);
              }
              else {
                FUN_00014418(&DAT_0002e584,auStack_b0,local_30);
              }
            }
            else if (aeStack_160[local_18].data.ptr == DAT_0002e5f8) {
              if ((aeStack_160[local_18].events & 0x2018) != 0) {
                printf("%s ERROR: %s: Error happens on timer fd\n","Realtek Bluetooth",
                       "start_transmit_wait");
                    /* WARNING: Subroutine does not return */
                exit(1);
              }
              uVar3 = FUN_00014920(param_3);
              printf("%s WARN: %s Transmission timeout\n","Realtek Bluetooth",uVar3);
              local_30 = read(aeStack_160[local_18].data.fd,auStack_c0,8);
              if (local_30 != 8) {
                printf("%s ERROR: Skip retransmit\n","Realtek Bluetooth");
                break;
              }
              if (param_5 < 1) {
                printf("%s ERROR: Retransmission exhausts\n","Realtek Bluetooth");
                tcflush(param_1,2);
                    /* WARNING: Subroutine does not return */
                exit(1);
              }
              local_b8.iov_base = local_20;
              local_b8.iov_len = local_24;
              do {
                local_28 = writev(param_1,&local_b8,1);
                if (local_28 != local_24) {
                  printf("%s WARN: Writev partial, %d\n","Realtek Bluetooth",local_28);
                }
              } while (((int)local_28 < 0) && (piVar1 = __errno_location(), *piVar1 == 4));
              if ((int)local_28 < 0) {
                piVar1 = __errno_location();
                pcVar2 = strerror(*piVar1);
                printf("%s ERROR: ReCall writev error, %s\n","Realtek Bluetooth",pcVar2);
                piVar1 = __errno_location();
                return -*piVar1;
              }
              param_5 = param_5 + -1;
              FUN_000128b8(DAT_0002e5f8,param_4);
            }
          }
          if ((param_3 & 0x1000000) == 0) {
            if (((param_3 == 1) && (DAT_0002e598 == 1)) || ((param_3 == 2 && (DAT_0002e598 == 2))))
            goto LAB_00015020;
            goto LAB_00014bf4;
          }
          if ((local_1a == DAT_0002e5e8) && (DAT_0002e5ec == 1)) {
LAB_00015020:
            local_14 = 0;
            FUN_000128b8(DAT_0002e5f8,0);
            return local_14;
          }
        } while( true );
      }
      piVar1 = __errno_location();
      pcVar2 = strerror(*piVar1);
      printf("%s ERROR: Call writev error, %s\n","Realtek Bluetooth",pcVar2);
      piVar1 = __errno_location();
      iVar4 = -*piVar1;
    }
    else {
      printf("%s ERROR: Invalid opcode or cmd state\n","Realtek Bluetooth");
      iVar4 = -1;
    }
  }
  return iVar4;
}



/* ===== FUN_00015048 @ 00015048 size=1716 ===== */

int FUN_00015048(void *param_1,uint param_2,void *param_3,size_t param_4,termios *param_5)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  size_t sVar4;
  void *pvVar5;
  undefined1 local_220;
  undefined1 local_21f;
  char local_21e;
  undefined1 local_21d;
  undefined1 auStack_21c [252];
  undefined1 auStack_120 [8];
  epoll_event aeStack_118 [10];
  iovec local_78;
  undefined1 auStack_70 [64];
  int local_30;
  ssize_t local_2c;
  int local_28;
  size_t local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  
  local_1c = 3;
  if ((param_2 & 0x80) == 0) {
    local_18 = 800;
    DAT_0002e5c8 = param_2;
  }
  else {
    DAT_0002e5c8 = param_2 & 0x7f;
    local_18 = 1000;
  }
  local_220 = 0x20;
  local_21f = 0xfc;
  local_21e = (char)param_4 + '\x01';
  local_21d = (undefined1)param_2;
  if (param_3 != (void *)0x0) {
    memcpy(auStack_21c,param_3,param_4);
  }
  local_20 = FUN_00013274(&DAT_0002e584,&local_220,param_4 + 4,1);
  if (local_20 == 0) {
    printf("%s ERROR: Prepare command packet for download\n","Realtek Bluetooth");
    iVar3 = -1;
  }
  else {
    sVar4 = *(size_t *)(local_20 + 4);
    pvVar5 = *(void **)(local_20 + 8);
    local_78.iov_base = *(void **)(local_20 + 8);
    local_78.iov_len = *(size_t *)(local_20 + 4);
    do {
      local_24 = writev((int)param_1,&local_78,1);
      if (local_24 != sVar4) {
        printf("%s WARN: Writev partially, ret %d\n","Realtek Bluetooth",local_24);
      }
    } while (((int)local_24 < 0) && (piVar1 = __errno_location(), *piVar1 == 4));
    if ((int)local_24 < 0) {
      piVar1 = __errno_location();
      pcVar2 = strerror(*piVar1);
      printf("%s ERROR: Call writev error, %s\n","Realtek Bluetooth",pcVar2);
      FUN_00012aa4(local_20);
      piVar1 = __errno_location();
      iVar3 = -*piVar1;
    }
    else {
      if ((param_2 & 0x80) != 0) {
        tcdrain((int)param_1);
        if (DAT_0002e5b8 == 0) {
          printf("%s :Disable host hw flow control\n","Realtek Bluetooth");
          param_5->c_cflag = param_5->c_cflag & 0x7fffffff;
        }
        else {
          printf("%s :Enable host hw flow control\n","Realtek Bluetooth");
          param_5->c_cflag = param_5->c_cflag | 0x80000000;
        }
        iVar3 = tcsetattr((int)param_1,0,param_5);
        if (iVar3 < 0) {
          printf("%s ERROR: Can\'t set port settings\n","Realtek Bluetooth");
          FUN_00012aa4(local_20);
          return -1;
        }
      }
      if (0 < (int)DAT_0002e5f8) {
        FUN_000128b8(DAT_0002e5f8,local_18);
      }
      do {
        local_28 = epoll_wait(DAT_0002e5fc,aeStack_118,10,-1);
        if (local_28 == -1) {
          piVar1 = __errno_location();
          pcVar2 = strerror(*piVar1);
          piVar1 = __errno_location();
          printf("%s ERROR: epoll_wait, %s (%d)\n","Realtek Bluetooth",pcVar2,*piVar1);
                    /* WARNING: Subroutine does not return */
          exit(1);
        }
        for (local_14 = 0; local_14 < local_28; local_14 = local_14 + 1) {
          if (param_1 == aeStack_118[local_14].data.ptr) {
            if ((aeStack_118[local_14].events & 0x2018) != 0) {
              printf("%s ERROR: %s: Error happens on serial fd\n","Realtek Bluetooth",
                     "h5_download_patch");
                    /* WARNING: Subroutine does not return */
              exit(1);
            }
            local_2c = read((int)param_1,auStack_70,0x40);
            if (local_2c < 1) {
              piVar1 = __errno_location();
              pcVar2 = strerror(*piVar1);
              printf("%s ERROR: Read serial error, %s\n","Realtek Bluetooth",pcVar2);
            }
            else {
              FUN_00014418(&DAT_0002e584,auStack_70,local_2c);
            }
          }
          else if (aeStack_118[local_14].data.ptr == DAT_0002e5f8) {
            local_30 = aeStack_118[local_14].data.fd;
            if ((aeStack_118[local_14].events & 0x2018) != 0) {
              printf("%s ERROR: %s: Error happens on timer fd\n","Realtek Bluetooth",
                     "h5_download_patch");
                    /* WARNING: Subroutine does not return */
              exit(1);
            }
            printf("%s WARN: Patch pkt trans timeout, re-trans\n","Realtek Bluetooth");
            local_24 = read(local_30,auStack_120,8);
            if (local_24 != 8) {
              printf("%s ERROR: Read expired info error\n","Realtek Bluetooth");
                    /* WARNING: Subroutine does not return */
              exit(1);
            }
            if (local_1c < 1) {
              printf("%s ERROR: %s: Retransmission exhausts\n","Realtek Bluetooth",
                     "h5_download_patch");
              tcflush(local_30,2);
                    /* WARNING: Subroutine does not return */
              exit(1);
            }
            local_24 = 8;
            local_78.iov_base = pvVar5;
            local_78.iov_len = sVar4;
            do {
              local_24 = writev((int)param_1,&local_78,1);
              if (local_24 != sVar4) {
                printf("%s WARN: Writev partial, %d\n","Realtek Bluetooth",local_24);
              }
            } while (((int)local_24 < 0) && (piVar1 = __errno_location(), *piVar1 == 4));
            if ((int)local_24 < 0) {
              piVar1 = __errno_location();
              pcVar2 = strerror(*piVar1);
              printf("%s ERROR: ReCall writev error, %s\n","Realtek Bluetooth",pcVar2);
              FUN_00012aa4(local_20);
              piVar1 = __errno_location();
              return -*piVar1;
            }
            local_1c = local_1c + -1;
            FUN_000128b8(local_30,local_18);
          }
        }
      } while (DAT_0002e5cc != DAT_0002e5c8);
      if (0 < (int)DAT_0002e5f8) {
        FUN_000128b8(DAT_0002e5f8,0);
      }
      FUN_00012aa4(local_20);
      iVar3 = 0;
    }
  }
  return iVar3;
}



/* ===== FUN_000156fc @ 000156fc size=360 ===== */

int FUN_000156fc(undefined4 param_1,uint param_2)

{
  undefined1 local_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  undefined1 uStack_1d;
  byte bStack_1c;
  byte bStack_1b;
  byte bStack_1a;
  undefined1 uStack_19;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  uStack_18 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_14 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_19 = (undefined1)
              ((uint)*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4) >> 0x18);
  local_20 = 0x17;
  uStack_1f = 0xfc;
  uStack_1e = 4;
  uStack_1d = (undefined1)param_2;
  bStack_1c = (byte)(param_2 >> 8);
  bStack_1b = (byte)(param_2 >> 0x10);
  bStack_1a = (byte)(param_2 >> 0x18);
  if (DAT_0002e1a4 != '\0') {
    printf("%s :baudrate in change speed command: 0x%02x 0x%02x 0x%02x 0x%02x\n","Realtek Bluetooth"
           ,param_2 & 0xff,(uint)bStack_1c,(uint)bStack_1b,(uint)bStack_1a);
  }
  local_c = FUN_00013274(&DAT_0002e584,&local_20,7,1);
  if (local_c == 0) {
    printf("%s ERROR: Prepare command packet for change speed fail\n","Realtek Bluetooth");
    local_10 = -1;
  }
  else {
    DAT_0002e5e8 = 0xfc17;
    DAT_0002e5ec = 0;
    local_10 = FUN_00014a30(param_1,local_c,0x100fc17,1000,0);
    FUN_00012aa4(local_c);
    if (local_10 < 0) {
      printf("%s ERROR: OP_SET_BAUD Transmission error\n","Realtek Bluetooth");
    }
    else {
      local_10 = 0;
    }
  }
  return local_10;
}



/* ===== FUN_00015864 @ 00015864 size=496 ===== */

undefined4 FUN_00015864(int param_1,termios *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 local_18;
  undefined1 local_16;
  undefined2 local_14 [2];
  int local_10;
  undefined4 local_c;
  
  local_14[0] = DAT_0001be84;
  local_18 = (undefined2)DAT_0001c3ec;
  local_16 = (undefined1)((uint)DAT_0001c3ec >> 0x10);
  param_2->c_cflag = param_2->c_cflag & 0x7fffffff;
  param_2->c_cflag = param_2->c_cflag | 0x100;
  param_2->c_cflag = param_2->c_cflag & 0xfffffdff;
  iVar1 = tcsetattr(param_1,0,param_2);
  if (iVar1 < 0) {
    printf("%s ERROR: Can\'t set port settings\n","Realtek Bluetooth");
    uVar2 = 0xffffffff;
  }
  else {
    DAT_0002e598 = 0;
    local_c = FUN_00013274(&DAT_0002e584,local_14,2,0xf);
    local_10 = FUN_00014a30(param_1,local_c,1,500,10);
    FUN_00012aa4(local_c);
    if (local_10 < 0) {
      printf("%s ERROR: OP_H5_SYNC Transmission error\n","Realtek Bluetooth");
      uVar2 = 0xffffffff;
    }
    else {
      local_c = FUN_00013274(&DAT_0002e584,&local_18,3,0xf);
      local_10 = FUN_00014a30(param_1,local_c,2,500,10);
      FUN_00012aa4(local_c);
      if (local_10 < 0) {
        printf("%s ERROR: OP_H5_CONFIG Transmission error\n","Realtek Bluetooth");
        uVar2 = 0xffffffff;
      }
      else {
        FUN_000135a4(param_1);
        if (DAT_0002e1a4 != '\0') {
          printf("%s :H5 init finished\n\n","Realtek Bluetooth");
        }
        DAT_0002e5ec = 0;
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}



/* ===== FUN_00015a54 @ 00015a54 size=276 ===== */

int FUN_00015a54(undefined4 param_1)

{
  undefined2 local_14;
  undefined1 local_12;
  int local_10;
  int local_c;
  
  local_14 = (undefined2)DAT_0001c464;
  local_12 = (undefined1)((uint)DAT_0001c464 >> 0x10);
  printf("%s :%s: Issue hci reset cmd\n","Realtek Bluetooth","h5_hci_reset");
  local_c = FUN_00013274(&DAT_0002e584,&local_14,3,1);
  if (local_c == 0) {
    printf("%s ERROR: %s: Failed to alloc mem for hci reset skb\n","Realtek Bluetooth",
           "h5_hci_reset");
    local_10 = -1;
  }
  else {
    DAT_0002e5e8 = 0xc03;
    DAT_0002e5ec = 0;
    local_10 = FUN_00014a30(param_1,local_c,0x1000c03,0x5dc,1);
    FUN_00012aa4(local_c);
    if (local_10 < 0) {
      printf("%s ERROR: hci reset failed\n","Realtek Bluetooth");
    }
  }
  return local_10;
}



/* ===== FUN_00015b68 @ 00015b68 size=1300 ===== */

int FUN_00015b68(int param_1,int param_2,int param_3,int param_4,termios *param_5)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  char cVar5;
  ushort uVar6;
  termios *ptVar7;
  bool bVar8;
  int local_18;
  ushort local_14;
  ushort local_12;
  int local_10;
  byte local_c;
  byte local_b;
  byte local_a;
  byte local_9;
  
  local_14 = 0;
  uVar1 = (param_3 + -1) / 0xfc;
  uVar2 = (ushort)uVar1;
  local_b = (char)param_3 + (char)(param_3 / 0xfc) * '\x04';
  uVar6 = uVar2 + DAT_0002e5a0 + 1;
  if ((uVar6 & 7) == 0) {
    cVar5 = '\0';
  }
  else {
    cVar5 = '\b' - ((byte)uVar6 & 7);
  }
  if (param_4 == 2) {
    if (cVar5 == '\0') {
      local_c = 7;
    }
    else {
      local_c = cVar5 - 1;
    }
  }
  else {
    local_c = 0;
  }
  uVar6 = local_c + uVar2;
  DAT_0002e5c4 = (uint)uVar6;
  ptVar7 = (termios *)(uint)local_c;
  printf("%s :end_idx: %u, lp_len: %u, additional pkts: %u\n\n","Realtek Bluetooth",uVar1 & 0xffff,
         (uint)local_b,ptVar7);
  printf("%s :Start downloading...\n","Realtek Bluetooth");
  if (local_b == 0) {
    local_b = 0xfc;
  }
  if (param_4 == 0) {
    tcdrain(param_1);
    if (DAT_0002e5b8 == 0) {
      printf("%s :Disable host hw flow control\n","Realtek Bluetooth");
      param_5->c_cflag = param_5->c_cflag & 0x7fffffff;
    }
    else {
      printf("%s :Enable host hw flow control\n","Realtek Bluetooth");
      param_5->c_cflag = param_5->c_cflag | 0x80000000;
    }
    iVar4 = tcsetattr(param_1,0,param_5);
    if (iVar4 < 0) {
      printf("%s ERROR: Can\'t set port settings\n","Realtek Bluetooth");
      return -1;
    }
  }
  local_12 = 0;
  local_10 = param_2;
  do {
    uVar3 = local_14;
    if (uVar6 < local_12) {
      if (param_4 == 0) {
        local_18 = FUN_00017ce8(param_1);
      }
      else {
        local_18 = FUN_00015a54(param_1);
      }
      if (param_4 == 2) {
        tcdrain(param_1);
      }
      if (local_18 == 0) {
        local_18 = 0;
      }
      return local_18;
    }
    bVar8 = local_14 == 0x7f;
    local_14 = local_14 + 1;
    if (bVar8) {
      local_14 = 1;
    }
    local_9 = (byte)uVar3;
    if (local_12 < uVar2) {
      local_a = 0xfc;
    }
    else if (local_12 == uVar2) {
      if (local_12 == uVar6) {
        local_9 = ~((byte)~(byte)(((uint)uVar3 << 0x19) >> 0x18) >> 1);
      }
      local_a = local_b;
    }
    else if (local_12 < uVar6) {
      local_10 = 0;
      local_a = 0;
      printf("%s :Send additional packet %u\n","Realtek Bluetooth",(uint)local_9,(uint)local_9,
             ptVar7);
    }
    else {
      local_9 = ~((byte)~(byte)(((uint)uVar3 << 0x19) >> 0x18) >> 1);
      local_10 = 0;
      local_a = 0;
      printf("%s :Last packet %u\n","Realtek Bluetooth",(uint)local_9,(uint)local_9,ptVar7);
    }
    if ((char)local_9 < '\0') {
      printf("%s :Send last pkt\n","Realtek Bluetooth");
    }
    if (param_4 == 0) {
      local_9 = FUN_00017a50(param_1,local_9,local_10,local_a);
      if ((uVar3 != local_9) && (local_12 != uVar6)) {
        printf("%s ERROR: Index mismatch %u, curr_idx %u\n","Realtek Bluetooth",(uint)uVar3,
               (uint)local_9);
        return -1;
      }
    }
    else if ((param_4 == 2) &&
            (ptVar7 = param_5, iVar4 = FUN_00015048(param_1,local_9,local_10,local_a), iVar4 < 0)) {
      return -1;
    }
    if (local_9 < uVar2) {
      local_10 = local_10 + 0xfc;
    }
    local_12 = local_12 + 1;
  } while( true );
}



/* ===== FUN_0001607c @ 0001607c size=156 ===== */

void FUN_0001607c(int param_1,undefined4 *param_2)

{
  uint local_c;
  
  *param_2 = "hw flow control\n";
  local_c = 0;
  while( true ) {
    if (10 < local_c) {
      return;
    }
    if (param_1 == *(int *)(&DAT_0002e1a8 + local_c * 8)) break;
    local_c = local_c + 1;
  }
  *param_2 = *(undefined4 *)(&DAT_0002e1ac + local_c * 8);
  return;
}



/* ===== FUN_00016118 @ 00016118 size=148 ===== */

void FUN_00016118(int param_1,undefined4 *param_2)

{
  uint local_c;
  
  *param_2 = 0x701d;
  local_c = 0;
  while( true ) {
    if (10 < local_c) {
      return;
    }
    if (param_1 == *(int *)(&DAT_0002e1ac + local_c * 8)) break;
    local_c = local_c + 1;
  }
  *param_2 = *(undefined4 *)(&DAT_0002e1a8 + local_c * 8);
  return;
}



/* ===== FUN_000161ac @ 000161ac size=440 ===== */

undefined4 FUN_000161ac(undefined4 param_1,undefined2 param_2)

{
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_18 = 0xb000000000000000;
  switch(param_2) {
  case 1:
    local_18 = CONCAT44(DAT_0001c590,DAT_0001c58c);
    break;
  case 2:
    local_18 = CONCAT44(DAT_0001c598,DAT_0001c594);
    break;
  case 3:
    local_18 = CONCAT44(DAT_0001c5a0,DAT_0001c59c);
    break;
  case 4:
    local_18 = CONCAT44(DAT_0001c5a8,DAT_0001c5a4);
  }
  local_c = FUN_00013274(&DAT_0002e584,&local_18,8,1);
  if (local_c != 0) {
    DAT_0002e5e8 = 0xfc61;
    DAT_0002e5ec = 0;
    DAT_0002e5ea = param_2;
    local_10 = FUN_00014a30(param_1,local_c,0x100fc61,0xfa,3);
    FUN_00012aa4(local_c);
    if (local_10 < 0) {
      printf("%s ERROR: OP_VENDOR_READ Transmission error\n","Realtek Bluetooth");
    }
    return 0;
  }
  printf("%s ERROR: Alloc chip type cmd skb buff error\n","Realtek Bluetooth");
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00016374 @ 00016374 size=244 ===== */

void FUN_00016374(undefined4 param_1)

{
  undefined2 local_14;
  undefined1 local_12;
  int local_10;
  int local_c;
  
  local_14 = (undefined2)DAT_0001c604;
  local_12 = (undefined1)((uint)DAT_0001c604 >> 0x10);
  local_c = FUN_00013274(&DAT_0002e584,&local_14,3,1);
  if (local_c == 0) {
    printf("%s ERROR: Alloc eversion cmd skb buff error\n","Realtek Bluetooth");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  DAT_0002e5e8 = 0xfc6d;
  DAT_0002e5ec = 0;
  local_10 = FUN_00014a30(param_1,local_c,0x100fc6d,500,3);
  FUN_00012aa4(local_c);
  if (local_10 < 0) {
    printf("%s ERROR: OP_ROM_VER Transmit error\n","Realtek Bluetooth");
  }
  return;
}



/* ===== FUN_00016468 @ 00016468 size=240 ===== */

void FUN_00016468(undefined4 param_1)

{
  undefined2 local_14;
  undefined1 local_12;
  int local_10;
  int local_c;
  
  local_14 = (undefined2)DAT_0001c660;
  local_12 = (undefined1)((uint)DAT_0001c660 >> 0x10);
  local_c = FUN_00013274(&DAT_0002e584,&local_14,3,1);
  if (local_c == 0) {
    printf("%s ERROR: Alloc local ver cmd skb buff error\n","Realtek Bluetooth");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  DAT_0002e5ec = 0;
  DAT_0002e5e8 = 0x1001;
  local_10 = FUN_00014a30(param_1,local_c,0x1001001,500,3);
  FUN_00012aa4(local_c);
  if (local_10 < 0) {
    printf("%s ERROR: OP_LMP_VER Transmit error\n","Realtek Bluetooth");
  }
  return;
}



/* ===== FUN_00016558 @ 00016558 size=116 ===== */

undefined4 FUN_00016558(undefined4 param_1)

{
  FUN_000161ac(param_1,2);
  if ((DAT_0002e5a2 != -0x77de) || (FUN_000161ac(param_1,3), DAT_0002e5a4 != 0xe)) {
    FUN_00016468(param_1);
  }
  return 0;
}



/* ===== FUN_000165cc @ 000165cc size=2844 ===== */

int FUN_000165cc(int param_1,int param_2,char *param_3,termios *param_4)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  int local_c;
  
  DAT_0002e5f4 = param_2;
  if (param_2 == 2) {
    printf("%s :Realtek H5 IC\n","Realtek Bluetooth");
    FUN_00016558(param_1);
    FUN_00016374(param_1);
LAB_00016818:
    printf("%s :LMP Subversion 0x%04x\n","Realtek Bluetooth",(uint)DAT_0002e5a2);
    printf("%s :EVersion %u\n","Realtek Bluetooth",(uint)DAT_0002e5a7);
    if (DAT_0002e5a2 != 0x8723) {
      if (DAT_0002e5a2 < 0x8724) {
        if ((DAT_0002e5a2 != 0x1200) && (DAT_0002e5a2 == 0x8703)) {
          FUN_000161ac(param_1,1);
        }
      }
      else if (DAT_0002e5a2 != 0x8821) {
        if (DAT_0002e5a2 == 0x8852) {
          FUN_000161ac(param_1,1);
        }
        else if ((DAT_0002e5a2 == 0x8761) && (param_2 == 2)) {
          FUN_000161ac(param_1,1);
        }
      }
    }
    if ((DAT_0002e5a8 == '\x06') || (DAT_0002e5a8 == '\n')) {
      DAT_0002e5a8 = 'x';
      printf("%s :chip_type: %d\n","Realtek Bluetooth",0x78);
    }
    if (DAT_0002e5a8 == 'x') {
      DAT_0002e5a7 = DAT_0002e5a9;
      printf("%s :eversion: %d\n","Realtek Bluetooth",(uint)DAT_0002e5a9);
    }
    DAT_0002e5f0 = FUN_000189c8(&DAT_0002e584);
    if (DAT_0002e5f0 == 0) {
      printf("%s ERROR: Can not find firmware/config entry\n","Realtek Bluetooth");
      return -1;
    }
    printf("%s :IC: %s\n","Realtek Bluetooth",*(undefined4 *)(DAT_0002e5f0 + 0x18));
    printf("%s :Firmware/config: %s, %s\n","Realtek Bluetooth",*(undefined4 *)(DAT_0002e5f0 + 0x10),
           *(undefined4 *)(DAT_0002e5f0 + 0x14));
    DAT_0002e5e0 = (void *)FUN_00019284(*(undefined4 *)(DAT_0002e5f0 + 0x14),DAT_000170ec,
                                        *(undefined1 *)(DAT_0002e5f0 + 4));
    if (DAT_0002e5e0 == (void *)0x0) {
      printf("%s ERROR: Read Config file error, use eFuse settings\n","Realtek Bluetooth");
      DAT_0002e5d4 = 0;
    }
    DAT_0002e5dc = (void *)FUN_00019cd8(&DAT_0002e584,DAT_000170f0);
    if (DAT_0002e5dc == (void *)0x0) {
      printf("%s ERROR: Read Bluetooth firmware error\n","Realtek Bluetooth");
      DAT_0002e5d0 = 0;
      if (DAT_0002e5e0 != (void *)0x0) {
        free(DAT_0002e5e0);
        DAT_0002e5e0 = (void *)0x0;
        DAT_0002e5d4 = 0;
      }
      return -1;
    }
    DAT_0002e5e4 = (void *)FUN_0001ab9c(param_1,param_2,DAT_000170f4);
    if (DAT_0002e5e0 != (void *)0x0) {
      free(DAT_0002e5e0);
      DAT_0002e5e0 = (void *)0x0;
    }
    free(DAT_0002e5dc);
    DAT_0002e5dc = (void *)0x0;
    DAT_0002e5d0 = 0;
    if (DAT_0002e5e4 == (void *)0x0) {
      printf("%s ERROR: Failed to get the final patch\n","Realtek Bluetooth");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    bVar1 = *(byte *)(DAT_0002e5f0 + 4);
    if (bVar1 < 0x75) {
      if ((bVar1 < 0x71) && (bVar1 != 5)) {
        if (bVar1 == 0x70) {
          local_c = 0x6400;
        }
        else {
          if (bVar1 != 0) goto LAB_00016d20;
LAB_00016cf0:
          local_c = 0x106e1;
        }
      }
      else {
        local_c = 0xa000;
      }
    }
    else if (bVar1 == 0x77) {
      local_c = 0x132e1;
    }
    else if (bVar1 < 0x78) {
      if (bVar1 == 0x75) {
        local_c = 0x116e1;
      }
      else if (bVar1 == 0x76) {
        local_c = 0xc6e0;
      }
      else {
LAB_00016d20:
        local_c = 0x6000;
      }
    }
    else {
      if (bVar1 == 0x78) goto LAB_00016cf0;
      if (bVar1 != 0x79) goto LAB_00016d20;
      local_c = 0x24831;
    }
    if (DAT_0002e5d8 <= local_c) {
      printf("%s :Total len %d for fwc\n","Realtek Bluetooth",DAT_0002e5d8);
      if (((DAT_0002e5a8 == 'q') && (DAT_0002e5f4 == 0)) && (DAT_0002e5bc != 0)) {
        param_4->c_cflag = param_4->c_cflag | 0x100;
        if (DAT_0002e5be == 0) {
          param_4->c_cflag = param_4->c_cflag | 0x200;
        }
        else {
          param_4->c_cflag = param_4->c_cflag & 0xfffffdff;
        }
        iVar3 = tcsetattr(param_1,0,param_4);
        if (iVar3 < 0) {
          printf("%s ERROR: 8723DSH4 Can\'t set parity\n","Realtek Bluetooth");
          goto LAB_000170c4;
        }
      }
      goto LAB_00016e48;
    }
    printf("%s ERROR: Total length of fwc is larger than allowed\n","Realtek Bluetooth");
LAB_000170c4:
    free(DAT_0002e5e4);
    iVar3 = -1;
  }
  else {
    printf("%s :Realtek H4 IC\n","Realtek Bluetooth");
    FUN_00017d94(param_1);
    FUN_00017f08(param_1);
    if (DAT_0002e5a2 != 0x8763) {
      if (DAT_0002e5a2 == 0x8761) {
        if (DAT_0002e5a4 == 0xb) {
          DAT_0002e5a8 = 'O';
        }
        else if (DAT_0002e5a4 == 10) {
          if (DAT_0002e5a7 == 3) {
            DAT_0002e5a8 = '/';
          }
          else if (DAT_0002e5a7 == 2) {
            DAT_0002e5a8 = '\x1f';
          }
          else {
            DAT_0002e5a8 = '\0';
          }
        }
      }
      else if (DAT_0002e5a2 == 0x8723) {
        if ((DAT_0002e5a6 == '\b') && (DAT_0002e5a4 == 0xd)) {
          DAT_0002e5a8 = 'q';
        }
        else {
          if ((DAT_0002e5a6 != '\x06') || (DAT_0002e5a4 != 0xb)) {
            printf("%s ERROR: H4: unknown chip\n","Realtek Bluetooth");
            return -1;
          }
          DAT_0002e5a8 = '_';
        }
      }
      goto LAB_00016818;
    }
    DAT_0002e5a8 = '?';
    DAT_0002e5b8 = 1;
    FUN_00016118(1500000,DAT_000170e8);
LAB_00016e48:
    if (DAT_0002e5ac == 0) {
      FUN_00016118(param_3,DAT_000170e8);
      printf("%s :No baud from Config file, set baudrate: %d, 0x%08x\n","Realtek Bluetooth",param_3,
             DAT_0002e5ac);
    }
    else {
      FUN_0001607c(DAT_0002e5ac,DAT_000170f8);
      if (DAT_0002e5c0 == "hw flow control\n") {
        printf("%s :Final speed is %d, no baud change needs\n","Realtek Bluetooth",
               "hw flow control\n");
      }
      else {
        if (param_2 == 2) {
          FUN_000156fc(param_1,DAT_0002e5ac);
        }
        else {
          FUN_00017be0(param_1,DAT_0002e5ac);
        }
        tcdrain(param_1);
        usleep(50000);
        pcVar2 = param_3;
        if (DAT_0002e5c0 != (char *)0x0) {
          pcVar2 = DAT_0002e5c0;
        }
        printf("%s :Final speed %d\n","Realtek Bluetooth",pcVar2);
        iVar3 = FUN_00011354(param_1,param_4,pcVar2);
        if (iVar3 < 0) {
          printf("%s ERROR: Can\'t set baud rate: %d, %d, %d\n","Realtek Bluetooth",pcVar2,
                 DAT_0002e5c0,param_3);
          goto LAB_000170c4;
        }
      }
    }
    if (((DAT_0002e5a8 != '?') && (0 < DAT_0002e5d8)) && (DAT_0002e5b0 != '\0')) {
      DAT_0002e598 = 3;
      DAT_0002e5cc = 0xffffffff;
      iVar3 = FUN_00015b68(param_1,DAT_0002e5e4,DAT_0002e5d8,param_2,param_4);
      free(DAT_0002e5e4);
      if (iVar3 < 0) {
        return iVar3;
      }
    }
    if (DAT_0002e1a4 != '\0') {
      printf("%s :Init Process finished\n","Realtek Bluetooth");
    }
    iVar3 = 0;
  }
  return iVar3;
}



/* ===== FUN_000170fc @ 000170fc size=824 ===== */

undefined4 FUN_000170fc(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  epoll_event local_28;
  undefined4 local_14;
  
  printf("%s :Realtek hciattach version %s \n\n","Realtek Bluetooth","3.1.9495cb2.20230413-173907");
  memset(&DAT_0002e584,0,0x7c);
  DAT_0002e5b0 = 1;
  DAT_0002e5b4 = param_1;
  DAT_0002e5fc = epoll_create(0x40);
  if (DAT_0002e5fc == -1) {
    piVar1 = __errno_location();
    pcVar2 = strerror(*piVar1);
    piVar1 = __errno_location();
    printf("%s ERROR: epoll_create1, %s (%d)\n","Realtek Bluetooth",pcVar2,*piVar1);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_28.events = 0x2019;
  local_28.data.fd = param_1;
  iVar3 = epoll_ctl(DAT_0002e5fc,1,param_1,&local_28);
  if (iVar3 == -1) {
    piVar1 = __errno_location();
    pcVar2 = strerror(*piVar1);
    piVar1 = __errno_location();
    printf("%s ERROR: epoll_ctl: epoll ctl add, %s (%d)\n","Realtek Bluetooth",pcVar2,*piVar1);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  DAT_0002e5f8 = (void *)timerfd_create(1,0);
  if (DAT_0002e5f8 == (void *)0xffffffff) {
    piVar1 = __errno_location();
    pcVar2 = strerror(*piVar1);
    piVar1 = __errno_location();
    printf("%s ERROR: timerfd_create error, %s (%d)\n","Realtek Bluetooth",pcVar2,*piVar1);
    local_14 = 0xffffffff;
  }
  else {
    if (0 < (int)DAT_0002e5f8) {
      local_28.events = 0x2019;
      local_28.data.fd = (int)DAT_0002e5f8;
      iVar3 = epoll_ctl(DAT_0002e5fc,1,(int)DAT_0002e5f8,&local_28);
      if (iVar3 == -1) {
        piVar1 = __errno_location();
        pcVar2 = strerror(*piVar1);
        piVar1 = __errno_location();
        printf("%s ERROR: epoll_ctl: epoll ctl add, %s (%d)\n","Realtek Bluetooth",pcVar2,*piVar1);
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
    }
    printf("%s :Use epoll\n","Realtek Bluetooth");
    if ((param_2 == 2) && (iVar3 = FUN_00015864(param_1,param_4), iVar3 < 0)) {
      local_14 = 0xffffffff;
    }
    else {
      local_14 = FUN_000165cc(param_1,param_2,param_3,param_4);
      epoll_ctl(DAT_0002e5fc,2,param_1,(epoll_event *)0x0);
      epoll_ctl(DAT_0002e5fc,2,(int)DAT_0002e5f8,(epoll_event *)0x0);
      close((int)DAT_0002e5f8);
      DAT_0002e5f8 = (void *)0xffffffff;
    }
  }
  return local_14;
}



/* ===== FUN_00017434 @ 00017434 size=44 ===== */

undefined4 FUN_00017434(void)

{
  return 0;
}



/* ===== FUN_00017460 @ 00017460 size=1520 ===== */

uint FUN_00017460(int param_1,void *param_2,ushort param_3,int param_4,int param_5,void *param_6,
                 ushort *param_7)

{
  int *piVar1;
  char *pcVar2;
  uint uVar3;
  pollfd local_74 [2];
  char local_64 [4];
  ushort local_60;
  char local_5e;
  ushort local_24;
  ushort local_22;
  uint local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_18 = 1;
  local_1c = 0;
  if (((param_1 == -1) || (param_2 == (void *)0x0)) || (param_3 < 4)) {
    printf("%s ERROR: %s: invalid parameter\n","Realtek Bluetooth","start_xfer_wait");
  }
  else {
    local_22 = (ushort)*(byte *)((int)param_2 + 2) * 0x100 + (ushort)*(byte *)((int)param_2 + 1);
LAB_00017508:
    local_14 = write(param_1,param_2,(uint)param_3);
    if (local_14 == param_3) {
      do {
        memset(local_64,0,0x40);
        memset(local_74,0,0x10);
        local_18 = 1;
        local_1c = 0;
        local_74[0].events = 0x19;
        local_74[0].fd = param_1;
        do {
          while( true ) {
            while( true ) {
              local_74[0].revents = 0;
              local_14 = poll(local_74,1,param_4);
              if ((int)local_14 < 0) {
                piVar1 = __errno_location();
                pcVar2 = strerror(*piVar1);
                printf("%s ERROR: Poll call error, %s\n","Realtek Bluetooth",pcVar2);
                local_14 = 0xffffffff;
                goto LAB_00017910;
              }
              if (local_14 == 0) {
                printf("%s WARN: %s: Timeout\n","Realtek Bluetooth","start_xfer_wait");
                if (param_5 < 1) {
                  printf("%s ERROR: %s: Transfer exhausted\n","Realtek Bluetooth","start_xfer_wait")
                  ;
                  tcflush(param_1,2);
                    /* WARNING: Subroutine does not return */
                  exit(1);
                }
                param_5 = param_5 + -1;
                goto LAB_00017508;
              }
              if ((local_74[0].revents & 0x18U) != 0) {
                piVar1 = __errno_location();
                pcVar2 = strerror(*piVar1);
                printf("%s ERROR: POLLERR or POLLUP happens, %s\n","Realtek Bluetooth",pcVar2);
                local_14 = 0xffffffff;
                goto LAB_00017910;
              }
              if (local_18 != 1) break;
              local_14 = read(local_74[0].fd,local_64,1);
              if ((local_14 == -1) || (local_14 != 1)) {
                piVar1 = __errno_location();
                pcVar2 = strerror(*piVar1);
                printf("%s ERROR: %s: Read pkt type error, %s\n","Realtek Bluetooth",
                       "start_xfer_wait",pcVar2);
                local_14 = 0xffffffff;
                goto LAB_00017910;
              }
              local_14 = 1;
              if (local_64[0] == '\x04') {
                local_1c = 1;
                local_18 = 2;
              }
            }
            if (local_18 == 2) break;
            if (local_18 == 3) {
              local_14 = read(local_74[0].fd,local_64 + local_1c,local_20);
              if (local_14 == 0xffffffff) {
                piVar1 = __errno_location();
                pcVar2 = strerror(*piVar1);
                printf("%s ERROR: %s: Read pkt payload error, %s\n","Realtek Bluetooth",
                       "start_xfer_wait",pcVar2);
                goto LAB_00017910;
              }
              local_1c = local_1c + local_14;
              local_20 = local_20 - local_14;
              if (local_20 == 0) goto LAB_00017910;
            }
          }
          local_14 = read(local_74[0].fd,local_64 + local_1c,2);
          if ((local_14 == 0xffffffff) || (local_14 != 2)) {
            piVar1 = __errno_location();
            pcVar2 = strerror(*piVar1);
            printf("%s ERROR: %s: Read pkt header error, %s\n","Realtek Bluetooth","start_xfer_wait"
                   ,pcVar2);
            goto LAB_00017910;
          }
          local_1c = local_1c + 2;
          local_18 = 3;
          local_20 = (uint)(byte)local_64[2];
        } while (local_20 + 3 < 0x41);
        local_14 = 0xffffffff;
        printf("%s ERROR: %s: hci event too long\n","Realtek Bluetooth","start_xfer_wait");
LAB_00017910:
        if ((int)local_14 < 0) {
          return local_14;
        }
        if (local_64[1] == '\x0e') {
          local_24 = local_60;
          if (local_60 != local_22) {
            printf("%s WARN: Unexpected cmd complete event, %04x\n","Realtek Bluetooth",
                   (uint)local_60);
            return 0xffffffff;
          }
          printf("%s :Cmd complete event for cmd %04x\n","Realtek Bluetooth",(uint)local_22);
          if (local_5e != '\0') {
            return 0xffffffff;
          }
          if (param_6 == (void *)0x0) {
            return 0;
          }
          if (local_1c < (int)(uint)*param_7) {
            *param_7 = (ushort)local_1c;
          }
          memcpy(param_6,local_64,(uint)*param_7);
          return 0;
        }
        printf("%s :%s: Unexpected hci event packet\n","Realtek Bluetooth","start_xfer_wait");
        FUN_0001270c(local_64,local_1c);
      } while( true );
    }
    uVar3 = (uint)local_22;
    piVar1 = __errno_location();
    pcVar2 = strerror(*piVar1);
    printf("%s ERROR: %s: Write cmd %04x error, %s\n","Realtek Bluetooth","start_xfer_wait",uVar3,
           pcVar2);
  }
  return 0xffffffff;
}



/* ===== FUN_00017a50 @ 00017a50 size=400 ===== */

uint FUN_00017a50(undefined4 param_1,undefined4 param_2,void *param_3,size_t param_4)

{
  uint uVar1;
  ushort local_11e;
  undefined1 auStack_11c [7];
  byte local_115;
  undefined1 local_114;
  undefined1 local_113;
  undefined1 local_112;
  char local_111;
  undefined1 local_110;
  undefined1 auStack_10f [255];
  int local_10;
  short local_a;
  
  local_11e = 8;
  if (DAT_0002e1a4 != '\0') {
    printf("%s :fd: %d, index: %d, len: %d\n","Realtek Bluetooth",param_1,param_2,param_4);
  }
  if (param_3 != (void *)0x0) {
    memcpy(auStack_10f,param_3,param_4);
  }
  local_114 = 1;
  local_113 = 0x20;
  local_112 = 0xfc;
  local_111 = (char)param_4 + '\x01';
  local_110 = (undefined1)param_2;
  local_a = (short)param_4 + 5;
  local_10 = FUN_00017460(param_1,&local_114,local_a,1000,0,auStack_11c,&local_11e);
  if (local_10 < 0) {
    printf("%s ERROR: Transfer patch failed, index %d\n","Realtek Bluetooth",param_2);
    uVar1 = 0xffffffff;
  }
  else if (local_11e == 8) {
    uVar1 = (uint)local_115;
  }
  else {
    printf("%s ERROR: %s: Unexpected length %u\n","Realtek Bluetooth","h4_download_patch",
           (uint)local_11e);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* ===== FUN_00017be0 @ 00017be0 size=264 ===== */

int FUN_00017be0(undefined4 param_1,undefined4 param_2)

{
  undefined4 local_14;
  undefined4 uStack_10;
  int local_c;
  
  _local_14 = CONCAT44(param_2,0x4fc1701);
  sleep(1);
  if (DAT_0002e1a4 != '\0') {
    printf("%s :baudrate in change speed command: 0x%02x 0x%02x 0x%02x 0x%02x\n","Realtek Bluetooth"
           ,(uint)(byte)uStack_10,(uint)uStack_10._1_1_,(uint)uStack_10._2_1_,(uint)uStack_10._3_1_)
    ;
  }
  local_c = FUN_00017460(param_1,&local_14,8,1000,0,0,0);
  if (local_c < 0) {
    printf("%s ERROR: Change Controller baud failed\n","Realtek Bluetooth");
  }
  return local_c;
}



/* ===== FUN_00017ce8 @ 00017ce8 size=172 ===== */

undefined4 FUN_00017ce8(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 local_10;
  int local_c;
  
  local_10 = DAT_0001cd6c;
  printf("%s :%s: Issue hci reset cmd\n","Realtek Bluetooth","h4_hci_reset");
  local_c = FUN_00017460(param_1,&local_10,4,1000,0,0,0);
  if (local_c < 0) {
    printf("%s ERROR: %s: Failed to send reset cmd\n","Realtek Bluetooth","h4_hci_reset");
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_00017d94 @ 00017d94 size=372 ===== */

undefined4 FUN_00017d94(undefined4 param_1)

{
  undefined4 uVar1;
  ushort local_22;
  undefined1 auStack_20 [7];
  byte local_19;
  ushort local_18;
  ushort local_13;
  undefined4 local_10;
  int local_c;
  
  local_10 = DAT_0001cdd4;
  local_22 = 0x10;
  local_c = FUN_00017460(param_1,&local_10,4,1000,0,auStack_20,&local_22);
  if (local_c < 0) {
    printf("%s ERROR: HCI Read local version info error\n","Realtek Bluetooth");
    uVar1 = 0xffffffff;
  }
  else if (local_22 == 0xf) {
    DAT_0002e5a6 = local_19;
    DAT_0002e5a4 = local_18;
    DAT_0002e5a2 = local_13;
    printf("%s :hci ver %02x, hci_rev %04x, lmp_subver %04x\n","Realtek Bluetooth",(uint)local_19,
           (uint)local_18,(uint)local_13);
    uVar1 = 0;
  }
  else {
    printf("%s ERROR: %s: Unexpected length %u\n","Realtek Bluetooth","h4_read_local_ver",
           (uint)local_22);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* ===== FUN_00017f08 @ 00017f08 size=248 ===== */

undefined4 FUN_00017f08(undefined4 param_1)

{
  undefined4 uVar1;
  ushort local_22;
  undefined1 auStack_20 [7];
  byte local_19;
  undefined4 local_10;
  int local_c;
  
  local_10 = DAT_0001cdec;
  local_22 = 0x10;
  local_c = FUN_00017460(param_1,&local_10,4,1000,0,auStack_20,&local_22);
  if (local_c < 0) {
    printf("%s ERROR: HCI Read local version info error\n","Realtek Bluetooth");
    uVar1 = 0xffffffff;
  }
  else if (local_22 == 8) {
    DAT_0002e5a7 = local_19;
    printf("%s :eversion %02x\n","Realtek Bluetooth",(uint)local_19);
    uVar1 = 0;
  }
  else {
    printf("%s ERROR: %s: Unexpected length %u\n","Realtek Bluetooth","h4_vendor_read_rom_ver",
           (uint)local_22);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* ===== FUN_00018000 @ 00018000 size=76 ===== */

int FUN_00018000(byte *param_1)

{
  return (uint)*param_1 + (uint)param_1[1] * 0x100;
}



/* ===== FUN_0001804c @ 0001804c size=104 ===== */

int FUN_0001804c(byte *param_1)

{
  return (uint)*param_1 + (uint)param_1[1] * 0x100 + (uint)param_1[2] * 0x10000 +
         (uint)param_1[3] * 0x1000000;
}



/* ===== FUN_000180b4 @ 000180b4 size=56 ===== */

void FUN_000180b4(int param_1)

{
  *(int *)param_1 = param_1;
  *(int *)(param_1 + 4) = param_1;
  return;
}



/* ===== FUN_000180ec @ 000180ec size=60 ===== */

bool FUN_000180ec(int *param_1)

{
  return param_1 == (int *)*param_1;
}



/* ===== FUN_00018128 @ 00018128 size=88 ===== */

void FUN_00018128(int *param_1,int *param_2,int param_3)

{
  *(int **)(param_3 + 4) = param_1;
  *param_1 = param_3;
  param_1[1] = (int)param_2;
  *param_2 = (int)param_1;
  return;
}



/* ===== FUN_00018180 @ 00018180 size=56 ===== */

void FUN_00018180(undefined4 param_1,int param_2)

{
  FUN_00018128(param_1,*(undefined4 *)(param_2 + 4),param_2);
  return;
}



/* ===== FUN_000181b8 @ 000181b8 size=60 ===== */

void FUN_000181b8(int *param_1,int param_2)

{
  *(int **)(param_2 + 4) = param_1;
  *param_1 = param_2;
  return;
}



/* ===== FUN_000181f4 @ 000181f4 size=36 ===== */

undefined4 FUN_000181f4(void)

{
  return 1;
}



/* ===== FUN_00018218 @ 00018218 size=88 ===== */

void FUN_00018218(undefined4 *param_1)

{
  char cVar1;
  
  cVar1 = FUN_000181f4(param_1);
  if (cVar1 == '\x01') {
    FUN_000181b8(param_1[1],*param_1);
  }
  return;
}



/* ===== FUN_00018270 @ 00018270 size=44 ===== */

void FUN_00018270(undefined4 param_1)

{
  FUN_00018218(param_1);
  FUN_000180b4(param_1);
  return;
}



/* ===== FUN_0001829c @ 0001829c size=88 ===== */

void FUN_0001829c(undefined4 *param_1)

{
  FUN_000181b8(param_1[1],*param_1);
  *param_1 = 0x100100;
  param_1[1] = 0x200200;
  return;
}



/* ===== FUN_000182f4 @ 000182f4 size=112 ===== */

void FUN_000182f4(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  piVar2 = (int *)param_1[1];
  *(int **)(iVar1 + 4) = param_2;
  *param_2 = iVar1;
  *piVar2 = param_3;
  *(int **)(param_3 + 4) = piVar2;
  return;
}



/* ===== FUN_00018364 @ 00018364 size=76 ===== */

void FUN_00018364(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_000180ec(param_1);
  if (iVar1 == 0) {
    FUN_000182f4(param_1,*(undefined4 *)(param_2 + 4),param_2);
  }
  return;
}



/* ===== FUN_000183b0 @ 000183b0 size=100 ===== */

void FUN_000183b0(int *param_1,int *param_2)

{
  *param_2 = *param_1;
  *(int **)(*param_2 + 4) = param_2;
  param_2[1] = param_1[1];
  *(int **)param_2[1] = param_2;
  return;
}



/* ===== FUN_00018414 @ 00018414 size=52 ===== */

void FUN_00018414(undefined4 param_1,undefined4 param_2)

{
  FUN_000183b0(param_1,param_2);
  FUN_000180b4(param_1);
  return;
}



/* ===== FUN_00018448 @ 00018448 size=44 ===== */

undefined4 FUN_00018448(void)

{
  FUN_000180b4(&DAT_0002e574);
  FUN_000180b4(&DAT_0002e57c);
  return 0;
}



/* ===== FUN_00018474 @ 00018474 size=216 ===== */

void FUN_00018474(void)

{
  int iVar1;
  undefined4 *local_10;
  undefined4 *local_c;
  
  iVar1 = FUN_000180ec(&DAT_0002e57c);
  if (iVar1 == 0) {
    FUN_00018364(&DAT_0002e57c,&DAT_0002e574);
  }
  local_c = DAT_0002e574;
  local_10 = (undefined4 *)*DAT_0002e574;
  while( true ) {
    if ((undefined4 **)local_c == &DAT_0002e574) break;
    if (local_c != (undefined4 *)0x0) {
      FUN_0001829c(local_c);
      free(local_c);
    }
    local_c = local_10;
    local_10 = (undefined4 *)*local_10;
  }
  FUN_000180b4(&DAT_0002e574);
  FUN_000180b4(&DAT_0002e57c);
  return;
}



/* ===== FUN_0001854c @ 0001854c size=668 ===== */

void FUN_0001854c(char *param_1)

{
  char **ppcVar1;
  ulong uVar2;
  char *local_a4;
  char *local_a0 [32];
  void *local_20;
  byte local_19;
  uint local_18;
  char *local_14;
  byte local_d;
  uint local_c;
  
  local_c = 0;
  local_d = 0;
  local_a4 = param_1;
  local_14 = param_1;
  printf("%s :%s\n","Realtek Bluetooth",param_1);
  do {
    do {
      local_14 = strsep(&local_a4,", \t");
      if (local_14 == (char *)0x0) goto LAB_00018620;
    } while (*local_14 == '\0');
    ppcVar1 = local_a0 + local_c;
    local_c = local_c + 1;
    *ppcVar1 = local_14;
  } while ((int)local_c < 0x20);
  printf("%s WARN: %s: Config item is too long\n","Realtek Bluetooth","line_process");
LAB_00018620:
  if ((int)local_c < 4) {
    printf("%s WARN: %s: Invalid Config item, ignore\n","Realtek Bluetooth","line_process");
  }
  else {
    local_18 = strtoul(local_a0[0],(char **)0x0,0x10);
    uVar2 = strtoul(local_a0[1],(char **)0x0,0x10);
    local_18 = local_18 | uVar2 << 8;
    uVar2 = strtoul(local_a0[2],(char **)0x0,0x10);
    local_19 = (byte)uVar2;
    if ((uVar2 & 0xff) == ((local_c & 0xff) - 3 & 0xff)) {
      local_20 = malloc((uVar2 & 0xff) + 0xc);
      if (local_20 == (void *)0x0) {
        printf("%s WARN: %s: Cannot alloc mem for item, %04lx, %u\n","Realtek Bluetooth",
               "line_process",local_18,(uint)local_19);
      }
      else {
        memset(local_20,0,0xc);
        *(short *)((int)local_20 + 8) = (short)local_18;
        *(byte *)((int)local_20 + 10) = local_19;
        for (local_d = 0; local_d < local_19; local_d = local_d + 1) {
          uVar2 = strtoul(local_a0[local_d + 3],(char **)0x0,0x10);
          *(char *)((int)local_20 + local_d + 0xb) = (char)uVar2;
        }
        FUN_00018180(local_20,&DAT_0002e57c);
      }
    }
    else {
      printf("%s ERROR: Invalid Config item len %u\n","Realtek Bluetooth",uVar2 & 0xff);
    }
  }
  return;
}



/* ===== FUN_000187e8 @ 000187e8 size=136 ===== */

void FUN_000187e8(char *param_1,undefined4 param_2)

{
  size_t sVar1;
  undefined4 extraout_r2;
  char *local_10;
  char *local_c;
  
  local_10 = param_1;
  local_c = param_1;
  while (local_c = strsep(&local_10,"\n\r"), local_c != (char *)0x0) {
    if (*local_c != '\0') {
      sVar1 = strlen(local_c);
      FUN_0001854c(local_c,sVar1 + 1,extraout_r2,sVar1 + 1,param_2);
    }
  }
  return;
}



/* ===== FUN_00018870 @ 00018870 size=344 ===== */

void FUN_00018870(char *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  char *pcVar3;
  undefined1 auStack_110 [256];
  ssize_t local_10;
  int local_c;
  
  local_c = open(param_1,0);
  if (local_c == -1) {
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    printf("%s :Couldnt open extra config %s, %s\n","Realtek Bluetooth",param_1,pcVar3);
  }
  else {
    local_10 = read(local_c,auStack_110,0x100);
    if (local_10 == -1) {
      piVar2 = __errno_location();
      pcVar3 = strerror(*piVar2);
      printf("%s ERROR: Couldnt read %s, %s\n","Realtek Bluetooth",param_1,pcVar3);
    }
    else if (local_10 == 0) {
      printf("%s ERROR: File is empty\n","Realtek Bluetooth");
    }
    else if (local_10 < 0xff) {
      puVar1 = auStack_110 + local_10;
      local_10 = local_10 + 1;
      *puVar1 = 10;
      puVar1 = auStack_110 + local_10;
      local_10 = local_10 + 1;
      *puVar1 = 0;
      FUN_000187e8(auStack_110,local_10);
    }
    else {
      printf("%s ERROR: Extra Config file is too big\n","Realtek Bluetooth");
    }
    close(local_c);
  }
  return;
}



/* ===== FUN_000189c8 @ 000189c8 size=308 ===== */

uint * FUN_000189c8(int param_1)

{
  uint *local_c;
  
  if (*(int *)(param_1 + 0x70) == 2) {
    local_c = &DAT_0002e2f0;
  }
  else {
    local_c = (uint *)&DAT_0002e248;
  }
  for (; (*(short *)((int)local_c + 6) != 0 &&
         (((((*local_c & 1) != 0 && ((char)local_c[1] != *(char *)(param_1 + 0x24))) ||
           (((*local_c & 2) != 0 && (*(char *)((int)local_c + 10) != *(char *)(param_1 + 0x22)))))
          || ((((*local_c & 4) != 0 && ((short)local_c[3] != *(short *)(param_1 + 0x20))) ||
              (*(short *)((int)local_c + 6) != *(short *)(param_1 + 0x1e)))))));
      local_c = local_c + 7) {
  }
  return local_c;
}



/* ===== FUN_00018afc @ 00018afc size=256 ===== */

undefined4 FUN_00018afc(byte param_1,short param_2)

{
  if (param_1 == 0x3f) {
LAB_00018bb8:
    if (param_2 == 0x3c) {
      return 1;
    }
  }
  else {
    if (param_1 < 0x40) {
      if (5 < param_1) {
        if ((param_1 != 0x1f) && (param_1 != 0x2f)) {
          return 0;
        }
        goto LAB_00018bb8;
      }
      if (2 < param_1) {
LAB_00018b90:
        if (param_2 != 0x44) {
          return 0;
        }
        return 1;
      }
      if (param_1 != 0) {
        return 0;
      }
    }
    else {
      if (param_1 < 0x73) {
        if (0x6f < param_1) goto LAB_00018b90;
        if (param_1 != 0x5f) {
          return 0;
        }
        goto LAB_00018bb8;
      }
      if (0x77 < param_1) {
        return 0;
      }
    }
    if (param_2 == 0x30) {
      return 1;
    }
  }
  return 0;
}



/* ===== FUN_00018bfc @ 00018bfc size=160 ===== */

undefined4 FUN_00018bfc(byte param_1)

{
  if (param_1 != 0x5f) {
    if (param_1 < 0x60) {
      if (((param_1 != 0x1f) && (param_1 < 0x20)) && (param_1 == 0)) {
        return 0x30;
      }
    }
    else if (0x6f < param_1) {
      if (param_1 < 0x73) {
        return 0x44;
      }
      if (param_1 < 0x78) {
        return 0x30;
      }
    }
  }
  return 0x3c;
}



/* ===== FUN_00018c9c @ 00018c9c size=628 ===== */

void FUN_00018c9c(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  
  if (((param_1 != (undefined4 *)0x0) && (param_2 != (undefined4 *)0x0)) &&
     (iVar1 = FUN_000180ec(param_2), iVar1 == 0)) {
    iVar1 = FUN_000180ec(param_1);
    if (iVar1 == 0) {
      local_c = (undefined4 *)*param_2;
      local_10 = (undefined4 *)*local_c;
      while (local_c != param_2) {
        local_14 = (undefined4 *)*param_1;
        local_18 = (undefined4 *)*local_14;
        while (local_14 != param_1) {
          if (*(short *)(local_c + 2) == *(short *)(local_14 + 2)) {
            if (*(byte *)((int)local_c + 10) < *(byte *)((int)local_14 + 10)) {
              printf("%s :Update cfg: ofs %04x len %u\n","Realtek Bluetooth",
                     (uint)*(ushort *)(local_14 + 2),(uint)*(byte *)((int)local_14 + 10));
              memcpy((void *)((int)local_14 + 0xb),(void *)((int)local_c + 0xb),
                     (uint)*(byte *)((int)local_c + 10));
              FUN_0001829c(local_c);
              free(local_c);
              break;
            }
            FUN_0001829c(local_c);
            FUN_00018414(local_14,local_c);
            free(local_14);
          }
          local_14 = local_18;
          local_18 = (undefined4 *)*local_18;
        }
        local_c = local_10;
        local_10 = (undefined4 *)*local_10;
      }
      iVar1 = FUN_000180ec(param_2);
      if (iVar1 == 0) {
        local_c = (undefined4 *)*param_2;
        local_10 = (undefined4 *)*local_c;
        while (local_c != param_2) {
          printf("%s :Add new cfg: ofs %04x, len %u\n","Realtek Bluetooth",
                 (uint)*(ushort *)(local_c + 2),(uint)*(byte *)((int)local_c + 10));
          FUN_0001829c(local_c);
          FUN_00018180(local_c,param_1);
          local_c = local_10;
          local_10 = (undefined4 *)*local_10;
        }
      }
    }
    else {
      FUN_00018364(param_2,param_1);
      FUN_000180b4(param_2);
    }
  }
  return;
}



/* ===== FUN_00018f10 @ 00018f10 size=612 ===== */

undefined4 FUN_00018f10(byte *param_1,uint param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  void *__s;
  undefined4 uVar4;
  ushort local_e;
  ushort *local_c;
  
  if ((param_1 == (byte *)0x0) || (param_2 < 6)) {
    printf("%s ERROR: %s: Invalid parameter\n","Realtek Bluetooth","rtb_parse_config");
    uVar4 = 0xffffffff;
  }
  else {
    iVar3 = memcmp(param_1,&DAT_0001ce50,4);
    if (iVar3 == 0) {
      uVar2 = *(ushort *)(param_1 + 4);
      if ((uint)uVar2 == param_2 - 6) {
        local_c = (ushort *)(param_1 + 6);
        for (local_e = 0; local_e < uVar2; local_e = local_e + uVar1) {
          __s = malloc((byte)local_c[1] + 0xc);
          if (__s == (void *)0x0) {
            printf("%s ERROR: Cannot alloc mem for entry %04x, %u\n","Realtek Bluetooth",
                   (uint)*local_c,(uint)(byte)local_c[1]);
          }
          else {
            memset(__s,0,0xc);
            *(ushort *)((int)__s + 8) = *local_c;
            *(byte *)((int)__s + 10) = (byte)local_c[1];
            memcpy((void *)((int)__s + 0xb),(byte *)((int)local_c + 3),
                   (uint)*(byte *)((int)__s + 10));
            FUN_00018180(__s,&DAT_0002e574);
          }
          uVar1 = (byte)local_c[1] + 3;
          local_c = (ushort *)((int)local_c + (uint)uVar1);
        }
        uVar4 = 0;
      }
      else {
        printf("%s ERROR: Config len %u is incorrect(%zd)\n","Realtek Bluetooth",(uint)uVar2,
               param_2 - 6);
        uVar4 = 0xffffffff;
      }
    }
    else {
      printf("%s ERROR: Signature %02x %02x %02x %02x is incorrect\n","Realtek Bluetooth",
             (uint)*param_1,(uint)param_1[1],(uint)param_1[2],(uint)param_1[3]);
      uVar4 = 0xffffffff;
    }
  }
  return uVar4;
}



/* ===== FUN_00019174 @ 00019174 size=272 ===== */

undefined4 FUN_00019174(byte *param_1)

{
  size_t sVar1;
  byte *pbVar2;
  byte *local_c;
  
  if ((param_1 != (byte *)0x0) &&
     (sVar1 = strlen((char *)param_1), local_c = param_1, sVar1 == 0x11)) {
    do {
      if (*local_c == 0) {
        return 0;
      }
      if ((*(ushort *)(__ctype_b + (uint)*local_c * 2) & 0x10) == 0) {
        return 0xffffffff;
      }
      pbVar2 = local_c + 2;
      if ((*(ushort *)(__ctype_b + (uint)local_c[1] * 2) & 0x10) == 0) {
        return 0xffffffff;
      }
      if (*pbVar2 == 0) {
        return 0;
      }
      local_c = local_c + 3;
    } while (*pbVar2 == 0x3a);
  }
  return 0xffffffff;
}



/* ===== FUN_00019284 @ 00019284 size=2644 ===== */

undefined4 * FUN_00019284(int param_1,uint *param_2,undefined1 param_3)

{
  ushort uVar1;
  undefined4 *puVar2;
  int *piVar3;
  char *pcVar4;
  ulong uVar5;
  int iVar6;
  char acStack_e8 [20];
  char acStack_d4 [20];
  undefined4 local_c0;
  undefined2 local_bc;
  stat sStack_b8;
  undefined4 *local_5c;
  byte local_55;
  undefined4 local_54;
  undefined4 *local_50;
  size_t local_4c;
  char *local_48;
  undefined2 local_42;
  int local_40;
  int local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  int local_30;
  char *local_2c;
  undefined4 *local_28;
  short local_24;
  ushort local_22;
  undefined4 *local_20;
  undefined4 *local_1c;
  uint local_18;
  undefined4 *local_14;
  
  if ((param_1 == 0) || (param_2 == (uint *)0x0)) {
    printf("%s ERROR: %s: Invalid parameter\n","Realtek Bluetooth","rtb_read_config");
  }
  else {
    FUN_00018448();
    FUN_00018870("/opt/rtk_btconfig.txt");
    local_1c = DAT_0002e57c;
    local_20 = (undefined4 *)*DAT_0002e57c;
    while ((undefined4 **)local_1c != &DAT_0002e57c) {
      local_34 = local_1c;
      local_38 = local_1c;
      printf("%s :extra cfg: ofs %04x, len %u\n","Realtek Bluetooth",(uint)*(ushort *)(local_1c + 2)
             ,(uint)*(byte *)((int)local_1c + 10));
      local_1c = local_20;
      local_20 = (undefined4 *)*local_20;
    }
    local_3c = open("/opt/bdaddr",0);
    if (local_3c == -1) {
      piVar3 = __errno_location();
      pcVar4 = strerror(*piVar3);
      printf("%s :Couldnt open BT MAC file %s, %s\n","Realtek Bluetooth","/opt/bdaddr",pcVar4);
    }
    else {
      local_30 = 0;
      iVar6 = fstat(local_3c,&sStack_b8);
      if (iVar6 < 0) {
        printf("%s :Couldnt access customer BT MAC file %s\n","Realtek Bluetooth","/opt/bdaddr");
        close(local_3c);
      }
      else {
        local_18 = sStack_b8.st_size;
        if (0x11 < (uint)sStack_b8.st_size) {
          local_18 = 0x11;
        }
        memset(acStack_d4,0,0x12);
        local_40 = read(local_3c,acStack_d4,local_18);
        close(local_3c);
        if (local_40 == -1) {
          piVar3 = __errno_location();
          pcVar4 = strerror(*piVar3);
          printf("%s ERROR: Couldnt read BT MAC file %s, err %s\n","Realtek Bluetooth","/opt/bdaddr"
                 ,pcVar4);
        }
        else {
          iVar6 = FUN_00019174(acStack_d4);
          if (-1 < iVar6) {
            local_2c = acStack_d4;
            for (local_30 = 5; -1 < local_30; local_30 = local_30 + -1) {
              uVar5 = strtoul(local_2c,(char **)0x0,0x10);
              *(char *)((int)&local_c0 + local_30) = (char)uVar5;
              local_2c = local_2c + 3;
            }
            if (((local_c0._3_1_ == -0x62) && ((byte)local_bc == 0x8b)) && (local_bc._1_1_ < 0x40))
            {
              local_c0 = local_c0 & 0xffffff;
            }
            if (DAT_0002e1a4 != '\0') {
              printf("%s :BT MAC %02x:%02x:%02x:%02x:%02x:%02x\n","Realtek Bluetooth",
                     (uint)local_bc._1_1_,(uint)(byte)local_bc,local_c0 >> 0x18,
                     local_c0 >> 0x10 & 0xff,local_c0 >> 8 & 0xff,local_c0 & 0xff);
            }
            local_42 = FUN_00018bfc(param_3);
            local_38 = malloc(0x12);
            if (local_38 == (undefined4 *)0x0) {
              printf("%s ERROR: Couldn\'t alloc cfg item for bdaddr\n","Realtek Bluetooth");
            }
            else {
              *(undefined2 *)(local_38 + 2) = local_42;
              *(undefined1 *)((int)local_38 + 10) = 6;
              *(uint *)((int)local_38 + 0xb) = local_c0;
              *(undefined2 *)((int)local_38 + 0xf) = local_bc;
              FUN_00018180(local_38,&DAT_0002e57c);
            }
          }
        }
      }
    }
    *param_2 = 0;
    local_48 = malloc(0x400);
    if (local_48 == (char *)0x0) {
      printf("%s ERROR: Can\'t allocate memory for Config file name\n","Realtek Bluetooth");
    }
    else {
      memset(local_48,0,0x400);
      snprintf(local_48,0x400,"%s%s","/ac_lib/lib/firmware/rtlbt/",param_1);
      local_3c = open(local_48,0);
      if (local_3c < 0) {
        perror("Can\'t open Config file");
      }
      else {
        iVar6 = fstat(local_3c,&sStack_b8);
        if (iVar6 < 0) {
          piVar3 = __errno_location();
          pcVar4 = strerror(*piVar3);
          printf("%s ERROR: Can\'t access Config file: %s, %s\n","Realtek Bluetooth",local_48,pcVar4
                );
          close(local_3c);
        }
        else {
          local_4c = sStack_b8.st_size;
          local_14 = malloc(sStack_b8.st_size);
          if (local_14 == (void *)0x0) {
            printf("%s ERROR: Couldnt malloc buffer for Config %zd\n","Realtek Bluetooth",local_4c);
          }
          else {
            local_40 = read(local_3c,local_14,local_4c);
            if ((int)local_4c <= local_40) {
              close(local_3c);
              free(local_48);
              local_40 = FUN_00018f10(local_14,local_4c);
              if (local_40 < 0) {
                printf("%s ERROR: Invalid Config content\n","Realtek Bluetooth");
                free(local_14);
                FUN_00018474();
                    /* WARNING: Subroutine does not return */
                exit(1);
              }
              printf("%s :Origin cfg len %u\n","Realtek Bluetooth",local_4c & 0xffff);
              FUN_0001270c(local_14,local_4c);
              FUN_00018c9c(&DAT_0002e574,&DAT_0002e57c);
              local_22 = 6;
              local_24 = 0;
              local_1c = DAT_0002e574;
              local_20 = (undefined4 *)*DAT_0002e574;
              do {
                if ((undefined4 **)local_1c == &DAT_0002e574) {
                  local_28 = realloc(local_14,(uint)local_22);
                  if (local_28 == (undefined4 *)0x0) {
                    printf("%s ERROR: Couldn\'t realloc buf for configs\n","Realtek Bluetooth");
                    free(local_14);
                    local_14 = (undefined4 *)0x0;
                    *param_2 = 0;
                  }
                  else {
                    *local_28 = DAT_0001ce50;
                    *(char *)(local_28 + 1) = (char)local_24;
                    *(char *)((int)local_28 + 5) = (char)((ushort)local_24 >> 8);
                    local_1c = DAT_0002e574;
                    local_20 = (undefined4 *)*DAT_0002e574;
                    puVar2 = (undefined4 *)((int)local_28 + 6);
                    local_14 = local_28;
                    while (local_28 = puVar2, (undefined4 **)local_1c != &DAT_0002e574) {
                      local_5c = local_1c;
                      local_38 = local_1c;
                      *(char *)local_28 = (char)*(undefined2 *)(local_1c + 2);
                      *(char *)((int)local_28 + 1) =
                           (char)((ushort)*(undefined2 *)(local_1c + 2) >> 8);
                      *(undefined1 *)((int)local_28 + 2) = *(undefined1 *)((int)local_1c + 10);
                      memcpy((undefined1 *)((int)local_28 + 3),(void *)((int)local_1c + 0xb),
                             (uint)*(byte *)((int)local_1c + 10));
                      local_1c = local_20;
                      local_20 = (undefined4 *)*local_20;
                      puVar2 = (undefined4 *)((int)local_28 + *(byte *)((int)local_38 + 10) + 3);
                    }
                    printf("%s :Vendor baud from Config file: %08x\n","Realtek Bluetooth",
                           DAT_0002e5ac);
                    printf("%s :New cfg len %u\n","Realtek Bluetooth",(uint)local_22);
                    FUN_0001270c(local_14,local_22);
                    *param_2 = (uint)local_22;
                  }
                  FUN_00018474();
                  return local_14;
                }
                local_50 = local_1c;
                local_38 = local_1c;
                uVar1 = *(ushort *)(local_1c + 2);
                if (uVar1 == 0x30) {
LAB_000198e8:
                  iVar6 = FUN_00018afc(param_3,*(undefined2 *)(local_1c + 2));
                  if ((iVar6 != 0) && (*(char *)((int)local_38 + 10) == '\x06')) {
                    sprintf(acStack_e8,"%2.2X:%2.2X:%2.2X:%2.2X:%2.2X:%2.2X",
                            (uint)*(byte *)(local_38 + 4),(uint)*(byte *)((int)local_38 + 0xf),
                            (uint)*(byte *)((int)local_38 + 0xe),
                            (uint)*(byte *)((int)local_38 + 0xd),(uint)*(byte *)(local_38 + 3),
                            (uint)*(byte *)((int)local_38 + 0xb));
                    printf("%s :bdaddr ofs %04x, %s\n","Realtek Bluetooth",
                           (uint)*(ushort *)(local_38 + 2),acStack_e8);
                  }
                }
                else if (uVar1 < 0x31) {
                  if (uVar1 == 0xc) {
                    DAT_0002e5ac = FUN_0001804c((int)local_1c + 0xb);
                    local_54 = DAT_0002e5ac;
                    printf("%s :Config baudrate: %08x\n","Realtek Bluetooth",DAT_0002e5ac);
                    if (0xc < *(byte *)((int)local_38 + 10)) {
                      local_55 = *(byte *)((int)local_38 + 0x17);
                      DAT_0002e5b8 = (int)(uint)local_55 >> 2 & 1;
                      printf("%s :uart flow ctrl: %u\n","Realtek Bluetooth",DAT_0002e5b8);
                    }
                  }
                }
                else if ((uVar1 == 0x3c) || (uVar1 == 0x44)) goto LAB_000198e8;
                local_22 = *(byte *)((int)local_38 + 10) + local_22 + 3;
                local_24 = (ushort)*(byte *)((int)local_38 + 10) + local_24 + 3;
                local_1c = local_20;
                local_20 = (undefined4 *)*local_20;
              } while( true );
            }
            perror("Can\'t read Config file");
            free(local_14);
          }
          FUN_00018474();
          close(local_3c);
        }
      }
      free(local_48);
    }
  }
  return (undefined4 *)0x0;
}



/* ===== FUN_00019cd8 @ 00019cd8 size=652 ===== */

void * FUN_00019cd8(int param_1,size_t *param_2)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  stat sStack_78;
  size_t local_1c;
  void *local_18;
  size_t local_14;
  char *local_10;
  int local_c;
  
  local_c = 0xffffffff;
  if ((param_1 == 0) || (param_2 == (size_t *)0x0)) {
    printf("%s ERROR: %s: Invalid parameter\n","Realtek Bluetooth","rtb_read_firmware");
  }
  else {
    local_10 = malloc(0x400);
    if (local_10 == (char *)0x0) {
      printf("%s ERROR: Can\'t allocate memory for fw name\n","Realtek Bluetooth");
    }
    else {
      snprintf(local_10,0x400,"%s%s","/ac_lib/lib/firmware/rtlbt/",
               *(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x10));
      local_c = open(local_10,0);
      if (local_c < 0) {
        piVar1 = __errno_location();
        pcVar2 = strerror(*piVar1);
        printf("%s ERROR: Can\'t open firmware, %s\n","Realtek Bluetooth",pcVar2);
      }
      else {
        iVar3 = fstat(local_c,&sStack_78);
        if (iVar3 < 0) {
          piVar1 = __errno_location();
          pcVar2 = strerror(*piVar1);
          printf("%s ERROR: Can\'t access firmware %s, %s\n","Realtek Bluetooth",local_10,pcVar2);
          close(local_c);
        }
        else {
          local_14 = sStack_78.st_size;
          local_18 = malloc(sStack_78.st_size);
          if (local_18 == (void *)0x0) {
            piVar1 = __errno_location();
            pcVar2 = strerror(*piVar1);
            printf("%s ERROR: Can\'t allocate memory for fw, %s\n","Realtek Bluetooth",pcVar2);
          }
          else {
            local_1c = read(local_c,local_18,local_14);
            if (local_1c == local_14) {
              *param_2 = local_1c;
              printf("%s :Load FW %s OK, size %zd\n","Realtek Bluetooth",local_10,local_1c);
              close(local_c);
              free(local_10);
              return local_18;
            }
            piVar1 = __errno_location();
            pcVar2 = strerror(*piVar1);
            printf("%s ERROR: Read FW %s error, %s\n","Realtek Bluetooth",local_10,pcVar2);
            free(local_18);
            *param_2 = 0;
          }
          close(local_c);
        }
      }
      free(local_10);
    }
  }
  return (void *)0x0;
}



/* ===== FUN_00019f64 @ 00019f64 size=232 ===== */

byte FUN_00019f64(char *param_1)

{
  byte bVar1;
  char *local_14;
  
  local_14 = param_1;
  do {
    bVar1 = local_14[-1];
    if (*local_14 == '\0') {
      if (bVar1 == 1) {
        bVar1 = local_14[-2];
        printf("%s :%s: opcode %u, len %u, data %u\n","Realtek Bluetooth","rtb_get_fw_project_id",0,
               1,(uint)bVar1);
        return bVar1;
      }
      printf("%s ERROR: %s: Invalid len %u\n","Realtek Bluetooth","rtb_get_fw_project_id",
             (uint)bVar1);
    }
    local_14 = local_14 + (-2 - (uint)bVar1);
  } while (*local_14 != -1);
  return 0;
}



/* ===== FUN_0001a04c @ 0001a04c size=204 ===== */

void FUN_0001a04c(undefined4 *param_1,int param_2)

{
  undefined4 *local_10;
  undefined4 *local_c;
  
  if ((param_1 != (undefined4 *)0x0) && (param_2 != 0)) {
    local_c = (undefined4 *)*param_1;
    local_10 = (undefined4 *)*local_c;
    while ((local_c != param_1 && (*(byte *)((int)local_c + -0xb) < *(byte *)(param_2 + 1)))) {
      local_c = local_10;
      local_10 = (undefined4 *)*local_10;
    }
    FUN_00018128(param_2 + 0xc,local_c[1],local_c);
  }
  return;
}



/* ===== FUN_0001a118 @ 0001a118 size=680 ===== */

undefined4 FUN_0001a118(int param_1,int param_2,int param_3,int *param_4,undefined1 *param_5)

{
  byte bVar1;
  uint uVar2;
  void *__ptr;
  int iVar3;
  byte *local_14;
  uint local_c;
  
  uVar2 = FUN_00018000(param_2 + 8);
  printf("%s :number 0x%04x\n","Realtek Bluetooth",uVar2);
  local_14 = (byte *)(param_2 + 0xc);
  local_c = 0;
  do {
    if (uVar2 <= local_c) {
      return 0;
    }
    bVar1 = *local_14;
    printf("%s :eco 0x%02x, Eversion:%02x\n","Realtek Bluetooth",(uint)bVar1,(uint)DAT_0002e5a7);
    if ((uint)bVar1 == DAT_0002e5a7 + 1) {
      __ptr = malloc(0x14);
      if (__ptr == (void *)0x0) {
        printf("%s ERROR: Failed to allocate mem for tmp node\n","Realtek Bluetooth");
        return 0xffffffff;
      }
      *(byte *)((int)__ptr + 1) = local_14[1];
      if (param_3 == 3) {
        *(byte *)((int)__ptr + 2) = local_14[1];
      }
      iVar3 = FUN_0001804c(local_14 + 4);
      *(int *)((int)__ptr + 4) = iVar3;
      *param_4 = *param_4 + iVar3;
      printf("%s :Pri:%d, Patch length 0x%04x\n","Realtek Bluetooth",(uint)*(byte *)((int)__ptr + 1)
             ,*(undefined4 *)((int)__ptr + 4));
      *(byte **)((int)__ptr + 8) = local_14 + 8;
      if (param_3 == 3) {
        if ((DAT_0002e5aa == *(char *)((int)__ptr + 2)) && (DAT_0002e5aa != '\0')) {
          FUN_0001a04c(param_1 + 0xc,__ptr);
          *param_5 = 1;
        }
        else {
          free(__ptr);
        }
      }
      else {
        FUN_0001a04c(param_1 + 0xc,__ptr);
      }
    }
    else {
      iVar3 = FUN_0001804c(local_14 + 4);
      printf("%s :Patch length 0x%04x\n","Realtek Bluetooth",iVar3);
    }
    local_14 = local_14 + iVar3 + 8;
    local_c = local_c + 1;
  } while( true );
}



/* ===== FUN_0001a3c0 @ 0001a3c0 size=1064 ===== */

undefined4 FUN_0001a3c0(undefined4 *param_1,undefined4 param_2,int param_3,char param_4)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int local_34;
  undefined4 local_2c;
  char local_25;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  ushort local_14;
  ushort local_12;
  
  local_25 = '\0';
  local_2c = 0;
  *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)(param_3 + 0x10);
  pcVar4 = (char *)(uint)*(byte *)(param_3 + 10);
  uVar5 = (uint)*(byte *)(param_3 + 0xb);
  uVar6 = (uint)*(byte *)(param_3 + 0xc);
  uVar7 = (uint)*(byte *)(param_3 + 0xd);
  uVar8 = (uint)*(byte *)(param_3 + 0xe);
  uVar9 = (uint)*(byte *)(param_3 + 0xf);
  local_1c = param_3;
  printf("%s :FW version 0x%02x,%02x,%02x,%02x,%02x,%02x,%02x,%02x\n","Realtek Bluetooth",
         (uint)*(byte *)(param_3 + 8),(uint)*(byte *)(param_3 + 9),pcVar4,uVar5,uVar6,uVar7,uVar8,
         uVar9);
  local_18 = param_3 + 0x14;
  local_12 = 0;
  do {
    if (*(uint *)(local_1c + 0x10) <= (uint)local_12) {
      *param_1 = local_2c;
      return 0;
    }
    uVar2 = FUN_0001804c(local_18);
    local_34 = FUN_0001804c(local_18 + 4);
    printf("%s :opcode 0x%04x\n","Realtek Bluetooth",uVar2,uVar2,pcVar4,uVar5,uVar6,uVar7,uVar8,
           uVar9);
    switch(uVar2) {
    case 1:
      pcVar4 = (char *)0x0;
      iVar3 = FUN_0001a118(param_2,local_18,1,&local_2c);
joined_r0x0001a688:
      if (iVar3 != 0) {
LAB_0001a7dc:
        *param_1 = 0;
        return 0;
      }
      break;
    case 2:
      if (param_4 == '\0') {
        pcVar4 = (char *)0x0;
        iVar3 = FUN_0001a118(param_2,local_18,2,&local_2c);
        goto joined_r0x0001a688;
      }
      break;
    case 3:
      if (param_4 != '\0') {
        local_25 = '\0';
        pcVar4 = &local_25;
        iVar3 = FUN_0001a118(param_2,local_18,3,&local_2c);
        if (iVar3 != 0) goto LAB_0001a7dc;
        if (local_25 == '\0') {
          for (local_12 = 0; (uint)local_12 < *(uint *)(local_1c + 0x10); local_12 = local_12 + 1) {
            iVar3 = FUN_0001804c(local_18);
            local_34 = FUN_0001804c(local_18 + 4);
            if (iVar3 == 2) {
              pcVar4 = (char *)0x0;
              iVar3 = FUN_0001a118(param_2,local_18,2,&local_2c);
              if (iVar3 != 0) goto LAB_0001a7dc;
            }
            local_18 = local_18 + local_34 + 8;
          }
        }
      }
      break;
    case 4:
      local_20 = local_18 + 4;
      local_24 = FUN_0001804c(local_20);
      bVar1 = *(byte *)(local_20 + 1);
      if ((uint)bVar1 == DAT_0002e5a7 + 1) {
        for (local_14 = 0; local_14 < local_24; local_14 = local_14 + 1) {
          if ((uint)bVar1 == DAT_0002e5a7 + 1) {
            FUN_0001804c(local_20 + 4);
          }
        }
      }
      break;
    default:
      printf("%s :Unknown Opcode. Ignore\n","Realtek Bluetooth");
    }
    local_18 = local_18 + local_34 + 8;
    local_12 = local_12 + 1;
  } while( true );
}



/* ===== FUN_0001a7f8 @ 0001a7f8 size=932 ===== */

short * FUN_0001a7f8(void)

{
  ushort uVar1;
  int iVar2;
  ushort uVar3;
  short sVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  short *local_10;
  ushort local_a;
  
  iVar2 = DAT_0002e5dc;
  local_10 = malloc(0x10);
  if (local_10 == (short *)0x0) {
    printf("%s ERROR: Failed to allocate mem for patch entry\n","Realtek Bluetooth");
    local_10 = (short *)0x0;
  }
  else {
    *(undefined2 *)(iVar2 + 0xc) = *(undefined2 *)(iVar2 + 0xc);
    if (DAT_0002e1a4 != '\0') {
      printf("%s :FW version 0x%08x, Patch num %u\n","Realtek Bluetooth",*(undefined4 *)(iVar2 + 8),
             (uint)*(ushort *)(iVar2 + 0xc));
    }
    iVar6 = DAT_0002e5dc + 0xe;
    iVar7 = iVar6 + (uint)*(ushort *)(iVar2 + 0xc) * 2;
    uVar1 = *(ushort *)(iVar2 + 0xc);
    for (local_a = 0; local_a < *(ushort *)(iVar2 + 0xc); local_a = local_a + 1) {
      uVar3 = FUN_00018000(iVar6 + (uint)local_a * 2);
      printf("%s :Chip id 0x%04x\n","Realtek Bluetooth",(uint)uVar3);
      if (uVar3 == (ushort)(DAT_0002e5a7 + 1)) {
        *local_10 = DAT_0002e5a7 + 1;
        sVar4 = FUN_00018000(iVar7 + (uint)local_a * 2);
        local_10[1] = sVar4;
        uVar5 = FUN_0001804c(iVar7 + (uint)uVar1 * 2 + (uint)local_a * 4);
        *(undefined4 *)(local_10 + 2) = uVar5;
        if (DAT_0002e1a4 != '\0') {
          printf("%s :Patch length 0x%04x\n","Realtek Bluetooth",(uint)(ushort)local_10[1]);
        }
        if (DAT_0002e1a4 != '\0') {
          printf("%s :Start offset 0x%08x\n","Realtek Bluetooth",*(undefined4 *)(local_10 + 2));
        }
        uVar5 = FUN_0001804c(DAT_0002e5dc + *(int *)(local_10 + 2) + (uint)(ushort)local_10[1] + -8)
        ;
        *(undefined4 *)(local_10 + 4) = uVar5;
        uVar5 = FUN_0001804c(DAT_0002e5dc +
                             *(int *)(local_10 + 2) + (uint)(ushort)local_10[1] + -0xc);
        *(undefined4 *)(local_10 + 6) = uVar5;
        printf("%s :Svn version: %8u\n","Realtek Bluetooth",*(undefined4 *)(local_10 + 4));
        printf("%s :Coexistence: BTCOEX_20%06u-%04x\n\n","Realtek Bluetooth",
               (*(uint *)(local_10 + 6) >> 0x10 & 0x7ff) + (*(uint *)(local_10 + 6) >> 0x1b) * 10000
               ,*(uint *)(local_10 + 6) & 0xffff);
        break;
      }
    }
    if (local_a == *(ushort *)(iVar2 + 0xc)) {
      printf("%s ERROR: Failed to get entry\n","Realtek Bluetooth");
      free(local_10);
      local_10 = (short *)0x0;
    }
  }
  return local_10;
}



/* ===== FUN_0001ab9c @ 0001ab9c size=2076 ===== */

void * FUN_0001ab9c(undefined4 param_1,int param_2,size_t *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  undefined1 auStack_58 [12];
  undefined4 ***local_4c [2];
  size_t local_44;
  undefined4 ***local_40;
  undefined4 ***local_3c;
  int local_38;
  uint local_34;
  undefined4 local_30;
  int local_2c;
  void *local_28;
  void *local_24;
  byte local_1d;
  undefined1 *local_1c;
  int local_18;
  undefined4 ***local_14;
  undefined4 ***local_10;
  void *local_c;
  
  local_1c = &DAT_0002e584;
  local_1d = 0;
  local_c = (void *)0x0;
  local_24 = DAT_0002e5dc;
  if (param_3 == (size_t *)0x0) {
    printf("%s ERROR: %s: Invalid parameter\n","Realtek Bluetooth","rtb_get_final_patch");
    return (void *)0x0;
  }
  if ((param_2 == 2) && (DAT_0002e5a2 == 0x1200)) {
    iVar3 = memcmp(DAT_0002e5dc,&DAT_0001ce54,8);
    if (iVar3 == 0) {
      printf("%s ERROR: Unexpected signature\n","Realtek Bluetooth");
    }
    else {
      local_44 = *(int *)(local_1c + 0x50) + *(int *)(local_1c + 0x4c);
      local_28 = malloc(local_44);
      if (local_28 != (void *)0x0) {
        printf("%s :FWC copy directly\n","Realtek Bluetooth");
        local_2c = *(int *)(local_1c + 0x58) + *(int *)(local_1c + 0x4c);
        local_30 = FUN_0001804c(local_2c + -8);
        local_34 = FUN_0001804c(local_2c + -0xc);
        printf("%s :Svn version: %u\n\n","Realtek Bluetooth",local_30);
        local_38 = (local_34 >> 0x10 & 0x7ff) + (local_34 >> 0x1b) * 10000;
        printf("%s :Coexistence: BTCOEX_20%06u-%04x\n\n","Realtek Bluetooth",local_38,
               local_34 & 0xffff);
        memcpy(local_28,*(void **)(local_1c + 0x58),*(size_t *)(local_1c + 0x4c));
        if (*(int *)(local_1c + 0x50) != 0) {
          memcpy((void *)((int)local_28 + *(int *)(local_1c + 0x4c)),*(void **)(local_1c + 0x5c),
                 *(size_t *)(local_1c + 0x50));
        }
        local_1c[0x2c] = 1;
        *param_3 = local_44;
        return local_28;
      }
      piVar4 = __errno_location();
      pcVar5 = strerror(*piVar4);
      printf("%s ERROR: Can\'t alloc mem for fwc, %s\n","Realtek Bluetooth",pcVar5);
    }
  }
  else {
    iVar3 = memcmp(DAT_0002e5dc,&DAT_0001ce54,8);
    if (((iVar3 == 0) || (iVar3 = memcmp(*(void **)(local_1c + 0x58),&DAT_0001ce5c,8), iVar3 == 0))
       && (iVar3 = memcmp((void *)(*(int *)(local_1c + 0x58) + *(int *)(local_1c + 0x4c) + -4),
                          &DAT_0001ce64,4), iVar3 == 0)) {
      local_1d = FUN_00019f64(*(int *)(local_1c + 0x58) + *(int *)(local_1c + 0x4c) + -5);
      if (*(short *)(local_1c + 0x1e) == -0x78fd) {
        if (*(short *)(DAT_0002e5f0 + 8) != *(short *)(&DAT_0002e200 + (uint)local_1d * 2)) {
          printf("%s ERROR: proj_id %04x, version %04x from firmware project_id[%u], mismatch\n",
                 "Realtek Bluetooth",(uint)*(ushort *)(DAT_0002e5f0 + 8),
                 (uint)*(ushort *)(&DAT_0002e200 + (uint)local_1d * 2),(uint)local_1d);
          goto LAB_0001b390;
        }
      }
      else if (*(short *)(local_1c + 0x1e) != *(short *)(&DAT_0002e200 + (uint)local_1d * 2)) {
        printf("%s ERROR: lmp_subver %04x, project id %04x, mismatch\n\n","Realtek Bluetooth",
               (uint)*(ushort *)(local_1c + 0x1e),
               (uint)*(ushort *)(&DAT_0002e200 + (uint)local_1d * 2));
        goto LAB_0001b390;
      }
      FUN_000180b4(local_4c);
      iVar3 = memcmp(*(void **)(local_1c + 0x58),&DAT_0001ce5c,8);
      if (iVar3 == 0) {
        FUN_000161ac(param_1,3);
        printf("%s :%s: key id %d\n","Realtek Bluetooth","rtb_get_final_patch",
               (uint)(byte)local_1c[0x26]);
        FUN_0001a3c0(&local_44,auStack_58,*(undefined4 *)(local_1c + 0x58),local_1c[0x26]);
        if (local_44 == 0) goto LAB_0001b390;
        printf("%s :len = 0x%x\n","Realtek Bluetooth",local_44);
        local_44 = *(int *)(local_1c + 0x50) + local_44;
      }
      else {
        local_c = (void *)FUN_0001a7f8();
        if (local_c == (void *)0x0) {
          printf("%s ERROR: Can\'t find the patch entry\n","Realtek Bluetooth");
          goto LAB_0001b390;
        }
        local_44 = (uint)*(ushort *)((int)local_c + 2) + *(int *)(local_1c + 0x50);
      }
      local_28 = malloc(local_44);
      if (local_28 != (void *)0x0) {
        iVar3 = memcmp(*(void **)(local_1c + 0x58),&DAT_0001ce5c,8);
        if (iVar3 == 0) {
          local_18 = 0;
          local_10 = local_4c[0];
          local_14 = (undefined4 ***)*local_4c[0];
          while ((undefined4 ****)local_10 != local_4c) {
            local_3c = local_10;
            local_40 = local_10 + -3;
            printf("%s :len = 0x%x\n","Realtek Bluetooth",local_10[-2]);
            memcpy((void *)((int)local_28 + local_18),local_40[2],(size_t)local_40[1]);
            local_18 = (int)local_40[1] + local_18;
            FUN_00018270(local_10);
            free(local_40);
            local_10 = local_14;
            local_14 = (undefined4 ***)*local_14;
          }
          if (*(int *)(local_1c + 0x50) != 0) {
            memcpy((void *)((int)local_28 + (local_44 - *(int *)(local_1c + 0x50))),
                   *(void **)(local_1c + 0x5c),*(size_t *)(local_1c + 0x50));
          }
        }
        else {
          memcpy(local_28,(void *)(*(int *)(local_1c + 0x58) + *(int *)((int)local_c + 4)),
                 (uint)*(ushort *)((int)local_c + 2));
          *(undefined4 *)((int)local_28 + (*(ushort *)((int)local_c + 2) - 4)) =
               *(undefined4 *)((int)local_24 + 8);
          if (*(int *)(local_1c + 0x50) != 0) {
            memcpy((void *)((int)local_28 + (local_44 - *(int *)(local_1c + 0x50))),
                   *(void **)(local_1c + 0x5c),*(size_t *)(local_1c + 0x50));
          }
        }
        local_1c[0x2c] = 1;
        *param_3 = local_44;
        if (*(int *)(local_1c + 0x4c) < 1) {
          uVar1 = 0xdd18;
        }
        else {
          uVar1 = 0xdd14;
        }
        if (*(int *)(local_1c + 0x50) < 1) {
          uVar2 = 0xdd18;
        }
        else {
          uVar2 = 0xdd14;
        }
        printf("%s :FW %s exists, Config file %s exists\n","Realtek Bluetooth",uVar1 | 0x10000,
               uVar2 | 0x10000);
        free(local_c);
        return local_28;
      }
      piVar4 = __errno_location();
      pcVar5 = strerror(*piVar4);
      printf("%s ERROR: %s: Can\'t alloc memory for fwc, %s\n","Realtek Bluetooth",
             "rtb_get_final_patch",pcVar5);
      free(local_c);
    }
    else {
      printf("%s ERROR: Extension section signature error\n","Realtek Bluetooth");
    }
  }
LAB_0001b390:
  local_1c[0x2c] = 0;
  *param_3 = 0;
  return (void *)0x0;
}



/* ===== _DT_FINI @ 0001b3b8 size=16 ===== */

void _DT_FINI(void)

{
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0002f000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 0002f004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 0002f008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::open @ 0002f00c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncat @ 0002f010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncat(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::poll @ 0002f014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int poll(pollfd *__fds,nfds_t __nfds,int __timeout)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 0002f018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::writev @ 0002f01c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t writev(int __fd,iovec *__iovec,int __count)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::tcflush @ 0002f020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tcflush(int __fd,int __queue_selector)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 0002f024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sigaction @ 0002f028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigaction(int __sig,sigaction *__act,sigaction *__oact)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 0002f02c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::read @ 0002f030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::realloc @ 0002f034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::timerfd_settime @ 0002f038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int timerfd_settime(int __ufd,int __flags,itimerspec *__utmr,itimerspec *__otmr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::perror @ 0002f03c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strchr @ 0002f040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::epoll_create @ 0002f044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int epoll_create(int __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 0002f048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 0002f04c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ppoll @ 0002f050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ppoll(pollfd *__fds,nfds_t __nfds,timespec *__timeout,__sigset_t *__ss)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 0002f054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sigdelset @ 0002f058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigdelset(sigset_t *__set,int __signo)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 0002f05c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sigfillset @ 0002f060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigfillset(sigset_t *__set)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtoul @ 0002f064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 0002f068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sscanf @ 0002f06c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strsep @ 0002f070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strsep(char **__stringp,char *__delim)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 0002f074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::epoll_ctl @ 0002f078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int epoll_ctl(int __epfd,int __op,int __fd,epoll_event *__event)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::cfsetospeed @ 0002f07c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int cfsetospeed(termios *__termios_p,speed_t __speed)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0002f080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usleep @ 0002f084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 0002f088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::tcdrain @ 0002f08c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tcdrain(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fstat @ 0002f090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstat(int __fd,stat *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::cfmakeraw @ 0002f094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void cfmakeraw(termios *__termios_p)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sleep @ 0002f098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::cfsetispeed @ 0002f09c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int cfsetispeed(termios *__termios_p,speed_t __speed)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::tcsetattr @ 0002f0a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tcsetattr(int __fd,int __optional_actions,termios *__termios_p)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ioctl @ 0002f0a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::timerfd_create @ 0002f0a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int timerfd_create(clockid_t __clock_id,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::epoll_wait @ 0002f0ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int epoll_wait(int __epfd,epoll_event *__events,int __maxevents,int __timeout)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcmp @ 0002f0b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fork @ 0002f0b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t fork(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::write @ 0002f0b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::tcgetattr @ 0002f0bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tcgetattr(int __fd,termios *__termios_p)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 0002f0c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 0002f0c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt @ 0002f0c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 0002f0cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::alarm @ 0002f0d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint alarm(uint __seconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::tcsendbreak @ 0002f0d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tcsendbreak(int __fd,int __duration)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 0002f0d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 0002f0dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


