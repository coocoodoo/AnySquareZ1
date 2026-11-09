// hciattach — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _DT_INIT @ 00011bcc size=16 ===== */

void _DT_INIT(void)

{
  return;
}



/* ===== <EXTERNAL>::strcpy @ 00011bf0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_00033e98)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::ioctl @ 00011bfc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_00033e9c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::writev @ 00011c08 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t writev(int __fd,iovec *__iovec,int __count)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_writev_00033ea0)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::printf @ 00011c14 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00033ea4)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::strerror @ 00011c20 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_00033ea8)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::snprintf @ 00011c2c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_00033eac)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::usleep @ 00011c38 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_usleep_00033eb0)(__useconds);
  return iVar1;
}



/* ===== <EXTERNAL>::fgets @ 00011c44 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_fgets_00033eb4)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::memcpy @ 00011c50 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00033eb8)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::perror @ 00011c5c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
  (*(code *)PTR_perror_00033ebc)(__s);
  return;
}



/* ===== <EXTERNAL>::puts @ 00011c68 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00033ec0)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00011c74 size=12 ===== */

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00033ec4)();
  return;
}



/* ===== <EXTERNAL>::tcflush @ 00011c80 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tcflush(int __fd,int __queue_selector)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_tcflush_00033ec8)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::tcsendbreak @ 00011c8c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tcsendbreak(int __fd,int __duration)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_tcsendbreak_00033ecc)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::malloc @ 00011c98 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00033ed0)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::sleep @ 00011ca4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_sleep_00033ed4)(__seconds);
  return uVar1;
}



/* ===== <EXTERNAL>::strtoul @ 00011cbc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
  ulong uVar1;
  
  uVar1 = (*(code *)PTR_strtoul_00033edc)(__nptr);
  return uVar1;
}



/* ===== <EXTERNAL>::socket @ 00011cc8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_socket_00033ee0)(__domain);
  return iVar1;
}



/* ===== <EXTERNAL>::__stack_chk_fail @ 00011ce0 size=12 ===== */

void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_00033ee8)();
  return;
}



/* ===== <EXTERNAL>::alarm @ 00011cec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint alarm(uint __seconds)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_alarm_00033eec)(__seconds);
  return uVar1;
}



/* ===== <EXTERNAL>::strtol @ 00011cf8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_strtol_00033ef0)(__nptr);
  return lVar1;
}



/* ===== <EXTERNAL>::cfsetispeed @ 00011d04 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int cfsetispeed(termios *__termios_p,speed_t __speed)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_cfsetispeed_00033ef4)(__termios_p);
  return iVar1;
}



/* ===== <EXTERNAL>::nanosleep @ 00011d10 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int nanosleep(timespec *__requested_time,timespec *__remaining)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_nanosleep_00033ef8)(__requested_time);
  return iVar1;
}



/* ===== <EXTERNAL>::write @ 00011d1c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_write_00033efc)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::fprintf @ 00011d28 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00033f00)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::strcat @ 00011d34 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcat_00033f04)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::bind @ 00011d40 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_bind_00033f08)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00011d58 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00033f10)();
  return;
}



/* ===== <EXTERNAL>::setsockopt @ 00011d64 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setsockopt_00033f14)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::cfsetospeed @ 00011d70 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int cfsetospeed(termios *__termios_p,speed_t __speed)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_cfsetospeed_00033f18)(__termios_p);
  return iVar1;
}



/* ===== <EXTERNAL>::strstr @ 00011d7c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strstr_00033f1c)(__haystack);
  return pcVar1;
}



/* ===== <EXTERNAL>::read @ 00011d88 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_00033f20)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::strncmp @ 00011d94 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_00033f24)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::strncpy @ 00011da0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_00033f28)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::readdir64 @ 00011db8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent64 * readdir64(DIR *__dirp)

{
  dirent64 *pdVar1;
  
  pdVar1 = (dirent64 *)(*(code *)PTR_readdir64_00033f30)(__dirp);
  return pdVar1;
}



/* ===== <EXTERNAL>::sigfillset @ 00011dc4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigfillset(sigset_t *__set)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sigfillset_00033f34)(__set);
  return iVar1;
}



/* ===== <EXTERNAL>::memcmp @ 00011dd0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_00033f38)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::fork @ 00011ddc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t fork(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_fork_00033f3c)();
  return _Var1;
}



/* ===== <EXTERNAL>::sscanf @ 00011de8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sscanf_00033f40)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::sigaction @ 00011df4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigaction(int __sig,sigaction *__act,sigaction *__oact)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sigaction_00033f44)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::fread @ 00011e00 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fread_00033f48)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::strdup @ 00011e18 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strdup(char *__s)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strdup_00033f50)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::getopt @ 00011e24 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getopt_00033f54)(___argc);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 00011e30 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00033f58)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::cfmakeraw @ 00011e3c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void cfmakeraw(termios *__termios_p)

{
  (*(code *)PTR_cfmakeraw_00033f5c)(__termios_p);
  return;
}



/* ===== <EXTERNAL>::fclose @ 00011e48 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_00033f60)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::open64 @ 00011e54 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open64_00033f64)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::tcgetattr @ 00011e60 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tcgetattr(int __fd,termios *__termios_p)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_tcgetattr_00033f68)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::opendir @ 00011e6c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * opendir(char *__name)

{
  DIR *pDVar1;
  
  pDVar1 = (DIR *)(*(code *)PTR_opendir_00033f6c)(__name);
  return pDVar1;
}



/* ===== <EXTERNAL>::poll @ 00011e78 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int poll(pollfd *__fds,nfds_t __nfds,int __timeout)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_poll_00033f70)(__fds);
  return iVar1;
}



/* ===== <EXTERNAL>::strcmp @ 00011e84 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_00033f74)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::sprintf @ 00011e90 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_00033f78)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::strsep @ 00011e9c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strsep(char **__stringp,char *__delim)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strsep_00033f7c)(__stringp);
  return pcVar1;
}



/* ===== <EXTERNAL>::getsockopt @ 00011ea8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t *__optlen)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getsockopt_00033f80)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 00011eb4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00033f84)();
  return piVar1;
}



/* ===== <EXTERNAL>::exit @ 00011ec0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_00033f88)(__status);
  return;
}



/* ===== <EXTERNAL>::sigdelset @ 00011ecc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigdelset(sigset_t *__set,int __signo)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sigdelset_00033f8c)(__set);
  return iVar1;
}



/* ===== <EXTERNAL>::atoi @ 00011ed8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_00033f90)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::ppoll @ 00011ee4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ppoll(pollfd *__fds,nfds_t __nfds,timespec *__timeout,__sigset_t *__ss)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ppoll_00033f94)(__fds);
  return iVar1;
}



/* ===== <EXTERNAL>::strlen @ 00011ef0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00033f98)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::strchr @ 00011efc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_00033f9c)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::fputs @ 00011f08 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_00033fa0)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::closedir @ 00011f14 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int closedir(DIR *__dirp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_closedir_00033fa4)(__dirp);
  return iVar1;
}



/* ===== <EXTERNAL>::tcsetattr @ 00011f20 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tcsetattr(int __fd,int __optional_actions,termios *__termios_p)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_tcsetattr_00033fa8)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00011f2c size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00033fac)();
  return;
}



/* ===== <EXTERNAL>::close @ 00011f38 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_00033fb0)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::vfprintf @ 00011f44 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vfprintf_00033fb4)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 00011f50 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00033fb8)(__ptr);
  return;
}



/* ===== <EXTERNAL>::fopen64 @ 00011f5c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen64_00033fbc)(__filename);
  return pFVar1;
}



/* ===== FUN_00011f68 @ 00011f68 size=1968 ===== */

void FUN_00011f68(int param_1,char **param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  char *__dest;
  char *pcVar4;
  int iVar5;
  __pid_t _Var6;
  FILE *__stream;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  char *__s1;
  int iVar10;
  char *pcVar11;
  char *__s2;
  int iVar12;
  int iVar13;
  int *piVar14;
  uint __seconds;
  bool bVar15;
  int local_10b8;
  uint local_10b4;
  int local_1090;
  pollfd local_108c;
  _union_1051 local_1084;
  undefined4 local_1080;
  undefined4 uStack_107c;
  undefined4 uStack_1078;
  undefined4 uStack_1074;
  termios tStack_1070;
  char local_1034 [4096];
  int local_34;
  
  __seconds = 10;
  iVar12 = DAT_00012718 + 0x11f84;
  piVar7 = *(int **)(iVar12 + DAT_0001271c);
  bVar15 = false;
  pcVar11 = (char *)(DAT_00012720 + 0x11fac);
  local_34 = *piVar7;
  local_10b8 = 0;
  local_10b4 = 0;
  bVar2 = false;
  bVar1 = true;
  while (iVar3 = getopt(param_1,param_2,pcVar11), iVar3 != -1) {
    switch(iVar3) {
    case 0x62:
      bVar15 = true;
      break;
    case 99:
      goto switchD_0001200c_default;
    case 100:
      goto switchD_0001200c_default;
    case 0x65:
      goto switchD_0001200c_default;
    case 0x66:
      goto switchD_0001200c_default;
    case 0x67:
      goto switchD_0001200c_default;
    case 0x68:
      goto switchD_0001200c_default;
    case 0x69:
      goto switchD_0001200c_default;
    case 0x6a:
      goto switchD_0001200c_default;
    case 0x6b:
      goto switchD_0001200c_default;
    case 0x6c:
      pcVar11 = (char *)(DAT_0001272c + 0x12080);
      piVar7 = (int *)(DAT_00012728 + 0x1207c);
      while( true ) {
        if (*piVar7 == 0) break;
        printf(pcVar11,*piVar7,piVar7[1],piVar7[2]);
        piVar7 = piVar7 + 0xb;
      }
      iVar12 = 0;
      goto LAB_0001208c;
    case 0x6d:
      goto switchD_0001200c_default;
    case 0x6e:
      bVar1 = false;
      break;
    case 0x6f:
      goto switchD_0001200c_default;
    case 0x70:
      bVar2 = true;
      break;
    case 0x71:
      goto switchD_0001200c_default;
    case 0x72:
      local_10b4 = 1;
      break;
    case 0x73:
      local_10b8 = atoi((char *)**(undefined4 **)(iVar12 + DAT_00012730));
      break;
    case 0x74:
      __seconds = atoi((char *)**(undefined4 **)(iVar12 + DAT_00012730));
      break;
    default:
      goto switchD_0001200c_default;
    }
  }
  piVar14 = *(int **)(iVar12 + DAT_00012724);
  if (param_1 - *piVar14 < 2) {
switchD_0001200c_default:
    FUN_00013000();
    goto LAB_00011ffc;
  }
  iVar13 = 0;
  pcVar11 = (char *)(DAT_00012750 + 0x122f0);
  __s1 = (char *)(DAT_00012754 + 0x122fc);
  iVar10 = DAT_00012758 + 0x12308;
  iVar3 = iVar13;
  while (*piVar14 < param_1) {
    __s2 = param_2[*piVar14];
    switch(iVar3) {
    case 0:
      local_1034[0] = '\0';
      pcVar4 = strchr(__s2,0x2f);
      __dest = local_1034;
      if (pcVar4 == (char *)0x0) {
        __dest = strcpy(__dest,(char *)(DAT_00012734 + 0x1214c));
      }
      strcat(__dest,__s2);
      break;
    case 1:
      pcVar4 = strchr(__s2,0x2c);
      if (pcVar4 == (char *)0x0) {
        iVar13 = 0;
        while( true ) {
          pcVar4 = *(char **)(iVar13 * 0x2c + iVar10);
          if (pcVar4 == (char *)0x0) goto LAB_000121e4;
          iVar5 = strcmp(pcVar4,__s2);
          if (iVar5 == 0) break;
          iVar13 = iVar13 + 1;
        }
        iVar13 = iVar10 + iVar13 * 0x2c;
      }
      else {
        sscanf(__s2,(char *)(DAT_00012740 + 0x121c4),&local_1090,&local_108c);
        iVar13 = 0;
        piVar8 = (int *)(DAT_00012744 + 0x121dc);
        while( true ) {
          if (*piVar8 == 0) goto LAB_000121e4;
          if ((local_1090 == piVar8[1]) && (local_108c.fd == piVar8[2])) break;
          iVar13 = iVar13 + 1;
          piVar8 = piVar8 + 0xb;
        }
        iVar13 = iVar13 * 0x2c + DAT_0001274c + 0x12228;
      }
      break;
    case 2:
      iVar5 = atoi(__s2);
      *(int *)(iVar13 + 0x14) = iVar5;
      break;
    case 3:
      iVar5 = strcmp(__s1,__s2);
      if (iVar5 == 0) {
        uVar9 = *(uint *)(iVar13 + 0x18) | 1;
      }
      else {
        uVar9 = *(uint *)(iVar13 + 0x18) & 0xfffffffe;
      }
      *(uint *)(iVar13 + 0x18) = uVar9;
      break;
    case 4:
      iVar5 = strcmp(pcVar11,__s2);
      *(uint *)(iVar13 + 0x1c) = (uint)(iVar5 == 0);
      break;
    case 5:
      *(char **)(iVar13 + 0x20) = __s2;
    }
    iVar3 = iVar3 + 1;
    *piVar14 = *piVar14 + 1;
  }
  if (iVar13 == 0) {
    pcVar11 = (char *)(DAT_0001273c + 0x12194);
    __stream = (FILE *)**(undefined4 **)(iVar12 + DAT_00012738);
    goto LAB_000121f8;
  }
  if (local_10b8 != 0) {
    *(int *)(iVar13 + 0x10) = local_10b8;
  }
  local_1080 = 1;
  local_1084.sa_handler = (__sighandler_t)(DAT_0001275c + 0x12348);
  uStack_107c = 0;
  uStack_1078 = 0;
  uStack_1074 = 0;
  sigaction(0xe,(sigaction *)&local_1084,(sigaction *)0x0);
  alarm(__seconds);
  *(uint *)(DAT_00012760 + 0x12370) = __seconds;
  if ((*(uint *)(iVar13 + 0x18) & 2) != 0) {
    local_10b4 = local_10b4 | 4;
  }
  iVar12 = open64(local_1034,0x102);
  if (iVar12 < 0) {
    pcVar11 = (char *)(DAT_00012764 + 0x12398);
LAB_00012394:
    perror(pcVar11);
LAB_00012398:
    pcVar11 = (char *)(DAT_00012768 + 0x123a4);
  }
  else {
    tcflush(iVar12,2);
    iVar3 = tcgetattr(iVar12,&tStack_1070);
    if (iVar3 < 0) {
      pcVar11 = (char *)(DAT_0001276c + 0x123cc);
      goto LAB_00012394;
    }
    cfmakeraw(&tStack_1070);
    if ((*(uint *)(iVar13 + 0x18) & 1) == 0) {
      tStack_1070.c_cflag = tStack_1070.c_cflag & 0x7fffffff;
    }
    else {
      tStack_1070.c_cflag = tStack_1070.c_cflag | 0x80000000;
    }
    tStack_1070.c_cflag = tStack_1070.c_cflag | 0x800;
    iVar3 = tcsetattr(iVar12,0,&tStack_1070);
    if (iVar3 < 0) {
      pcVar11 = (char *)(DAT_00012770 + 0x12410);
      goto LAB_00012394;
    }
    iVar3 = FUN_0001337c(iVar12,&tStack_1070,*(undefined4 *)(iVar13 + 0x10));
    if (iVar3 < 0) {
      pcVar11 = (char *)(DAT_00012774 + 0x12430);
      goto LAB_00012394;
    }
    tcflush(iVar12,2);
    if (bVar15) {
      tcsendbreak(iVar12,0);
      usleep(DAT_00012778);
    }
    if ((*(code **)(iVar13 + 0x24) != (code *)0x0) &&
       (iVar3 = (**(code **)(iVar13 + 0x24))(iVar12,iVar13,&tStack_1070), iVar3 < 0))
    goto LAB_00012398;
    tcflush(iVar12,2);
    iVar3 = FUN_0001337c(iVar12,&tStack_1070,*(undefined4 *)(iVar13 + 0x14));
    if (iVar3 < 0) {
      pcVar11 = (char *)(DAT_0001277c + 0x12494);
      goto LAB_00012394;
    }
    local_108c.fd = 0xf;
    iVar3 = ioctl(iVar12,0x5423,&local_108c);
    if (iVar3 < 0) {
      pcVar11 = (char *)(DAT_00012780 + 0x124dc);
      goto LAB_00012394;
    }
    if ((local_10b4 != 0) && (iVar3 = ioctl(iVar12,DAT_00012784,local_10b4), iVar3 < 0)) {
      pcVar11 = (char *)(DAT_00012788 + 0x12504);
      goto LAB_00012394;
    }
    iVar3 = ioctl(iVar12,DAT_0001278c,*(undefined4 *)(iVar13 + 0xc));
    if (iVar3 < 0) {
      pcVar11 = (char *)(DAT_00012790 + 0x12524);
      goto LAB_00012394;
    }
    if ((*(code **)(iVar13 + 0x28) != (code *)0x0) &&
       (iVar3 = (**(code **)(iVar13 + 0x28))(iVar12,iVar13,&tStack_1070), iVar3 < 0))
    goto LAB_00012398;
    puts((char *)(DAT_00012794 + 0x12558));
    alarm(0);
    uStack_107c = 0;
    local_1080 = 1;
    local_1084 = (_union_1051)0x1;
    uStack_1078 = 0;
    uStack_1074 = 0;
    sigaction(0x11,(sigaction *)&local_1084,(sigaction *)0x0);
    sigaction(0xd,(sigaction *)&local_1084,(sigaction *)0x0);
    local_1084.sa_handler = (__sighandler_t)(DAT_00012798 + 0x125a8);
    sigaction(0xf,(sigaction *)&local_1084,(sigaction *)0x0);
    sigaction(2,(sigaction *)&local_1084,(sigaction *)0x0);
    local_1084.sa_handler = (__sighandler_t)(DAT_0001279c + 0x125d4);
    sigaction(1,(sigaction *)&local_1084,(sigaction *)0x0);
    if (bVar1) {
      _Var6 = fork();
      iVar3 = 0;
      if (_Var6 != 0) {
        if (bVar2) {
          printf((char *)(DAT_000127a0 + 0x1260c),_Var6);
        }
        goto LAB_0001260c;
      }
      do {
        if (iVar12 != iVar3) {
          close(iVar3);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 != 0x14);
    }
    iVar3 = DAT_000127a4;
    local_108c.events = 0x18;
    local_108c.fd = iVar12;
    sigfillset((sigset_t *)&tStack_1070);
    sigdelset((sigset_t *)&tStack_1070,0x11);
    sigdelset((sigset_t *)&tStack_1070,0xd);
    sigdelset((sigset_t *)&tStack_1070,0xf);
    sigdelset((sigset_t *)&tStack_1070,2);
    sigdelset((sigset_t *)&tStack_1070,1);
    do {
      if (*(int *)(iVar3 + 0x12674) != 0) break;
      local_108c.revents = 0;
      iVar10 = ppoll(&local_108c,1,(timespec *)0x0,(__sigset_t *)&tStack_1070);
      bVar15 = iVar10 == 0;
      if (iVar10 < 0) {
        piVar14 = __errno_location();
        bVar15 = *piVar14 == 4;
      }
    } while (bVar15);
    local_1090 = 0;
    iVar12 = ioctl(iVar12,0x5423,&local_1090);
    if (-1 < iVar12) {
LAB_0001260c:
      if (local_34 == *piVar7) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(0);
    }
    pcVar11 = (char *)(DAT_000127a8 + 0x12708);
  }
  perror(pcVar11);
LAB_00011ffc:
  iVar12 = 1;
LAB_0001208c:
                    /* WARNING: Subroutine does not return */
  exit(iVar12);
LAB_000121e4:
  pcVar11 = (char *)(DAT_00012748 + 0x121f8);
  __stream = (FILE *)**(undefined4 **)(iVar12 + DAT_00012738);
LAB_000121f8:
  fputs(pcVar11,__stream);
  goto LAB_00011ffc;
}



/* ===== entry @ 000127ac size=80 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00033f4c)
            (*(undefined4 *)((int)&DAT_000127f4 + DAT_00012800 + DAT_000127f4),param_2,
             &stack0x00000004,*(undefined4 *)((int)&DAT_000127f4 + DAT_000127fc + DAT_000127f4),
             *(undefined4 *)((int)&DAT_000127f4 + DAT_000127f8 + DAT_000127f4),param_1);
  return;
}



/* ===== FUN_00012804 @ 00012804 size=72 ===== */

void FUN_00012804(void)

{
  code *pcVar1;
  
  if (DAT_00012850 + 0x1281c == DAT_0001284c + 0x12814) {
    return;
  }
  pcVar1 = *(code **)(DAT_00012854 + 0x12824 + DAT_00012858);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== _FINI_0 @ 000128c0 size=112 ===== */

void _FINI_0(void)

{
  int iVar1;
  
  iVar1 = DAT_00012934 + 0x128dc;
  if (*(char *)(DAT_00012930 + 0x128d0) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + DAT_00012938) != 0) {
    __cxa_finalize(*(undefined4 *)(DAT_0001293c + 0x128fc));
  }
  FUN_00012804();
  if (*(int *)(iVar1 + DAT_00012940) != 0) {
    __deregister_frame_info(DAT_00012944 + 0x1291c);
  }
  *(undefined1 *)(DAT_00012948 + 0x1292c) = 1;
  return;
}



/* ===== _INIT_0 @ 0001294c size=140 ===== */

void _INIT_0(void)

{
  code *pcVar1;
  
  if (*(int *)(DAT_00012984 + 0x1295c + DAT_00012988) != 0) {
    __register_frame_info(DAT_00012990 + 0x1297c,DAT_0001298c + 0x12978);
  }
  if (((DAT_000128b4 + 0x12874) - (DAT_000128b0 + 0x1286c) >> 2) / 2 == 0) {
    return;
  }
  pcVar1 = *(code **)(DAT_000128b8 + 0x1287c + DAT_000128bc);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== FUN_000129b0 @ 000129b0 size=80 ===== */

undefined4 FUN_000129b0(int param_1,void *param_2,size_t param_3)

{
  ssize_t sVar1;
  uint *puVar2;
  
  do {
    sVar1 = read(param_1,param_2,param_3);
    if (sVar1 != -1) {
      param_3 = param_3 - sVar1;
      param_2 = (void *)((int)param_2 + sVar1);
      if (param_3 == 0) {
        return 0;
      }
    }
    puVar2 = (uint *)__errno_location();
  } while ((*puVar2 & 0xfffffffb) == 0);
  return 0xffffffff;
}



/* ===== FUN_00012a50 @ 00012a50 size=92 ===== */

void FUN_00012a50(undefined4 param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iStack_1c;
  undefined4 uStack_18;
  int local_14;
  
  piVar1 = *(int **)(DAT_00012aac + 0x12a70 + DAT_00012ab0);
  local_14 = *piVar1;
  iStack_1c = param_2;
  uStack_18 = param_3;
  FUN_000181fc(*(undefined4 *)(param_2 + 0x20),&iStack_1c,param_2,local_14,param_1);
  FUN_0001456c(param_1,&iStack_1c);
  if (local_14 != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_00012e30 @ 00012e30 size=340 ===== */

void FUN_00012e30(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  ssize_t sVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  timespec local_24;
  undefined4 local_1c;
  undefined1 local_18;
  int local_14;
  
  iVar1 = DAT_00012f9c;
  iVar2 = DAT_00012f84 + 0x12e50;
  piVar6 = *(int **)(iVar2 + DAT_00012f88);
  local_14 = *piVar6;
  local_24.tv_sec = 0;
  local_24.tv_nsec = 50000;
  local_1c = DAT_00012f90;
  iVar5 = *(int *)(param_2 + 0x14);
  if (iVar5 == DAT_00012f8c) {
    local_18 = 0;
    goto LAB_00012f0c;
  }
  if (DAT_00012f8c < iVar5) {
    if (iVar5 == DAT_00012f98) {
      local_18 = 0x25;
      goto LAB_00012f0c;
    }
    if (iVar5 < DAT_00012f98) {
      if (iVar5 == 0xe1000) {
        local_18 = 0x20;
        goto LAB_00012f0c;
      }
    }
    else {
      if (iVar5 == DAT_00012fa4) {
        local_18 = 0x27;
        goto LAB_00012f0c;
      }
      if (iVar5 == DAT_00012fa8) {
        local_18 = 0x2b;
        goto LAB_00012f0c;
      }
    }
  }
  else {
    if (iVar5 == DAT_00012f94) {
      local_18 = 2;
      goto LAB_00012f0c;
    }
    if (iVar5 == 0x38400) {
      local_18 = 1;
      goto LAB_00012f0c;
    }
    if (iVar5 == 0xe100) {
      local_18 = 3;
      goto LAB_00012f0c;
    }
  }
  local_18 = 3;
  *(undefined4 *)(param_2 + 0x14) = 0xe100;
  fprintf((FILE *)**(undefined4 **)(iVar2 + iVar1),(char *)(DAT_00012fa0 + 0x12ee4));
LAB_00012f0c:
  sVar3 = write(param_1,&local_1c,5);
  if (sVar3 == 5) {
    nanosleep(&local_24,(timespec *)0x0);
    uVar4 = 0;
  }
  else {
    perror((char *)(DAT_00012fac + 0x12f30));
    uVar4 = 0xffffffff;
  }
  if (local_14 != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}



/* ===== FUN_00013000 @ 00013000 size=56 ===== */

void FUN_00013000(void)

{
  puts((char *)(DAT_00013038 + 0x13010));
  puts((char *)(DAT_0001303c + 0x1301c));
  puts((char *)(DAT_00013040 + 0x13028));
  puts((char *)((int)&DAT_00013038 + DAT_00013044));
  return;
}



/* ===== FUN_00013208 @ 00013208 size=324 ===== */

undefined4 FUN_00013208(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  bool bVar2;
  
  if (param_1 == DAT_0001334c) {
    return 0x1006;
  }
  if (param_1 < DAT_0001334c) {
    if (param_1 == 0xe100) {
      return 0x1001;
    }
    if (param_1 < 0xe101) {
      if (param_1 == 0x4b00) {
        return 0xe;
      }
      if (param_1 != 0x9600) {
        uVar1 = 0x1001;
        if (param_1 == 0x2580) {
          uVar1 = 0xd;
        }
        return uVar1;
      }
      return 0xf;
    }
    if (param_1 == 0x38400) {
      return 0x1003;
    }
    if (param_1 < 0x38401) {
      param_3 = 0x1002;
      param_2 = DAT_00013350;
    }
    else {
      if (param_1 == DAT_00013354) {
        return 0x1004;
      }
      param_3 = 0x1005;
      param_2 = DAT_00013358;
    }
  }
  else {
    if (param_1 == DAT_0001335c) {
      return 0x100b;
    }
    if (param_1 < DAT_0001335c) {
      if (param_1 == DAT_00013360) {
        return 0x1008;
      }
      if (param_1 < DAT_00013360) {
        param_3 = 0x1007;
        bVar2 = param_1 == 0xe1000;
        goto LAB_00013274;
      }
      if (param_1 == DAT_00013364) {
        return 0x1009;
      }
      param_3 = 0x100a;
      param_2 = DAT_00013368;
    }
    else {
      if (param_1 == DAT_0001336c) {
        return 0x100d;
      }
      if (param_1 < DAT_0001336c) {
        param_3 = 0x100c;
        param_2 = DAT_00013370;
      }
      if (DAT_0001336c < param_1) {
        if (param_1 == DAT_00013374) {
          return 0x100e;
        }
        param_3 = 0x100f;
        param_2 = DAT_00013378;
      }
    }
  }
  bVar2 = param_1 == param_2;
LAB_00013274:
  if (!bVar2) {
    param_3 = 0x1001;
  }
  return param_3;
}



/* ===== FUN_0001337c @ 0001337c size=112 ===== */

int FUN_0001337c(int param_1,termios *param_2,undefined4 param_3)

{
  speed_t __speed;
  int iVar1;
  int *piVar2;
  
  __speed = FUN_00013208(param_3);
  iVar1 = cfsetospeed(param_2,__speed);
  if (((-1 < iVar1) && (iVar1 = cfsetispeed(param_2,__speed), -1 < iVar1)) &&
     (iVar1 = tcsetattr(param_1,0,param_2), -1 < iVar1)) {
    return 0;
  }
  piVar2 = __errno_location();
  return -*piVar2;
}



/* ===== FUN_00013808 @ 00013808 size=172 ===== */

int FUN_00013808(int param_1,char *param_2,int param_3)

{
  ssize_t sVar1;
  int iVar2;
  uint uVar3;
  
  if (param_3 < 1) {
LAB_0001381c:
    iVar2 = -1;
  }
  else {
    do {
      sVar1 = read(param_1,param_2,1);
      if (sVar1 < 1) goto LAB_0001381c;
    } while (*param_2 != '\x04');
    iVar2 = 1;
    do {
      sVar1 = read(param_1,param_2 + iVar2,3 - iVar2);
      if (sVar1 < 1) goto LAB_0001381c;
      iVar2 = iVar2 + sVar1;
    } while (iVar2 == 2);
    uVar3 = (uint)(byte)param_2[2];
    if ((int)(param_3 - 3U) <= (int)(uint)(byte)param_2[2]) {
      uVar3 = param_3 - 3U;
    }
    for (; iVar2 + -2 <= (int)uVar3; iVar2 = iVar2 + sVar1) {
      sVar1 = read(param_1,param_2 + iVar2,uVar3 - (iVar2 + -3));
      if (sVar1 < 1) goto LAB_0001381c;
    }
  }
  return iVar2;
}



/* ===== FUN_000138b4 @ 000138b4 size=820 ===== */

void FUN_000138b4(int param_1,int param_2)

{
  ssize_t sVar1;
  char *__s;
  undefined4 uVar2;
  FILE *__stream;
  undefined2 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined2 local_8c;
  undefined1 uStack_8a;
  undefined1 uStack_89;
  byte bStack_88;
  byte bStack_87;
  undefined2 uStack_86;
  undefined2 uStack_84;
  undefined2 uStack_82;
  undefined2 uStack_80;
  undefined2 local_7e;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  undefined2 uStack_78;
  undefined4 uStack_76;
  undefined4 uStack_72;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined2 uStack_60;
  undefined2 local_5e;
  undefined2 uStack_5c;
  undefined4 uStack_5a;
  undefined4 uStack_56;
  undefined4 uStack_52;
  int local_4c;
  
  iVar5 = DAT_00013be8 + 0x138d4;
  piVar4 = *(int **)(iVar5 + DAT_00013bec);
  uVar2 = 0;
  uVar7 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uVar8 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uVar9 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_4c = *piVar4;
  local_8c = 0x301;
  uStack_89 = 0;
  bStack_88 = 0;
  bStack_87 = 0;
  uStack_86 = (undefined2)uVar7;
  uStack_84 = (undefined2)((uint)uVar7 >> 0x10);
  uStack_82 = (undefined2)uVar8;
  uStack_80 = (undefined2)((uint)uVar8 >> 0x10);
  local_6c = 0;
  uStack_60 = (undefined2)uVar9;
  local_7e = 0;
  uStack_7c = 0;
  local_5e = 0;
  uStack_5c = 0;
  uStack_8a = 0xc;
  uStack_7a = uStack_86;
  uStack_78 = uStack_84;
  uStack_76 = uVar8;
  uStack_72 = uVar9;
  uStack_68 = uVar7;
  uStack_64 = uVar8;
  uStack_5a = uVar7;
  uStack_56 = uVar8;
  uStack_52 = uVar9;
  sVar1 = write(param_1,&local_8c,4);
  puVar6 = *(undefined4 **)(iVar5 + DAT_00013bf0);
  if (sVar1 == 4) {
    iVar5 = FUN_00013808(param_1,&local_6c,4);
    if (iVar5 < 0) {
      __stream = (FILE *)*puVar6;
      __s = (char *)(DAT_00013bf8 + 0x1398c);
    }
    else if (*(int *)(param_2 + 0x20) == 0) {
LAB_00013a0c:
      local_8c = 0x101;
      uStack_89 = (undefined1)((uint)uVar2 >> 8);
      bStack_88 = (byte)((uint)uVar2 >> 0x10);
      bStack_87 = (byte)((uint)uVar2 >> 0x18);
      uStack_86 = (undefined2)uVar7;
      uStack_84 = (undefined2)((uint)uVar7 >> 0x10);
      uStack_82 = (undefined2)uVar8;
      uStack_80 = (undefined2)((uint)uVar8 >> 0x10);
      uStack_60 = (undefined2)uVar9;
      local_7e = (undefined2)uVar2;
      uStack_7c = (undefined2)((uint)uVar2 >> 0x10);
      uStack_8a = 0x10;
      uStack_7a = uStack_86;
      uStack_78 = uStack_84;
      uStack_76 = uVar8;
      uStack_72 = uVar9;
      local_6c = uVar2;
      uStack_68 = uVar7;
      uStack_64 = uVar8;
      local_5e = local_7e;
      uStack_5c = uStack_7c;
      uStack_5a = uVar7;
      uStack_56 = uVar8;
      uStack_52 = uVar9;
      sVar1 = write(param_1,&local_8c,4);
      if (sVar1 == 4) {
        iVar5 = FUN_00013808(param_1,&local_6c,4);
        if (iVar5 < 0) {
          __stream = (FILE *)*puVar6;
          __s = (char *)(DAT_00013c0c + 0x13a90);
        }
        else {
          local_8c = 0x201;
          uStack_89 = (undefined1)((uint)uVar2 >> 8);
          bStack_88 = (byte)((uint)uVar2 >> 0x10);
          bStack_87 = (byte)((uint)uVar2 >> 0x18);
          uStack_86 = (undefined2)uVar7;
          uStack_84 = (undefined2)((uint)uVar7 >> 0x10);
          uStack_82 = (undefined2)uVar8;
          uStack_80 = (undefined2)((uint)uVar8 >> 0x10);
          local_7e = (undefined2)uVar2;
          uStack_7c = (undefined2)((uint)uVar2 >> 0x10);
          uStack_8a = 0x10;
          uStack_60 = (undefined2)uVar9;
          uStack_7a = uStack_86;
          uStack_78 = uStack_84;
          uStack_76 = uVar8;
          uStack_72 = uVar9;
          local_6c = uVar2;
          uStack_68 = uVar7;
          uStack_64 = uVar8;
          local_5e = local_7e;
          uStack_5c = uStack_7c;
          uStack_5a = uVar7;
          uStack_56 = uVar8;
          uStack_52 = uVar9;
          sVar1 = write(param_1,&local_8c,4);
          if (sVar1 == 4) {
            iVar5 = FUN_00013808(param_1,&local_6c,4);
            if (iVar5 < 0) {
              __stream = (FILE *)*puVar6;
              __s = (char *)(DAT_00013c14 + 0x13b00);
            }
            else {
              uStack_60 = (undefined2)uVar9;
              bStack_88 = (byte)uVar2;
              uStack_86 = (undefined2)((uint)uVar2 >> 0x10);
              uStack_84 = (undefined2)uVar7;
              uStack_82 = (undefined2)((uint)uVar7 >> 0x10);
              uStack_80 = (undefined2)uVar8;
              local_7e = (undefined2)uVar2;
              local_8c = (undefined2)DAT_00013c18;
              uStack_8a = (undefined1)((uint)DAT_00013c18 >> 0x10);
              uStack_89 = (undefined1)((uint)DAT_00013c18 >> 0x18);
              iVar5 = *(int *)(param_2 + 0x14);
              if (iVar5 == 0x38400) {
                uVar3 = (undefined2)DAT_00013c28;
LAB_00013b5c:
                bStack_88 = (byte)uVar3;
                bStack_87 = (byte)((ushort)uVar3 >> 8);
              }
              else {
                if (0x38400 < iVar5) {
                  if (iVar5 == DAT_00013c1c) {
                    uVar3 = (undefined2)DAT_00013c2c;
                  }
                  else {
                    if (iVar5 != 0xe1000) goto LAB_00013b38;
                    uVar3 = 0xff55;
                  }
                  goto LAB_00013b5c;
                }
                if (iVar5 == 0xe100) {
                  bStack_87 = 0xe6;
                }
                else {
LAB_00013b38:
                  bStack_87 = 0xf3;
                }
              }
              uStack_7c = uStack_86;
              uStack_7a = uStack_84;
              uStack_78 = uStack_82;
              uStack_76 = uVar8;
              uStack_72 = uVar9;
              local_6c = uVar2;
              uStack_68 = uVar7;
              uStack_64 = uVar8;
              local_5e = local_7e;
              uStack_5c = uStack_86;
              uStack_5a = uVar7;
              uStack_56 = uVar8;
              uStack_52 = uVar9;
              fprintf((FILE *)*puVar6,(char *)(DAT_00013c20 + 0x13b74),(uint)bStack_88,
                      (uint)bStack_87);
              sVar1 = write(param_1,&local_8c,6);
              if (sVar1 == 6) {
                iVar5 = FUN_00013808(param_1,&local_6c,6);
                if (-1 < iVar5) {
                  uVar2 = 0;
                  goto LAB_0001394c;
                }
                __stream = (FILE *)*puVar6;
                __s = (char *)(DAT_00013c30 + 0x13bdc);
              }
              else {
                __stream = (FILE *)*puVar6;
                __s = (char *)(DAT_00013c24 + 0x13ba4);
              }
            }
          }
          else {
            __stream = (FILE *)*puVar6;
            __s = (char *)(DAT_00013c10 + 0x13adc);
          }
        }
      }
      else {
        __stream = (FILE *)*puVar6;
        __s = (char *)(DAT_00013c08 + 0x13a60);
      }
    }
    else {
      uStack_60 = (undefined2)uVar9;
      bStack_88 = (byte)uVar2;
      bStack_87 = (byte)((uint)uVar2 >> 8);
      uStack_86 = (undefined2)((uint)uVar2 >> 0x10);
      uStack_84 = (undefined2)uVar7;
      uStack_82 = (undefined2)((uint)uVar7 >> 0x10);
      uStack_80 = (undefined2)uVar8;
      local_8c = (undefined2)DAT_00013bfc;
      uStack_8a = (undefined1)((uint)DAT_00013bfc >> 0x10);
      uStack_89 = (undefined1)((uint)DAT_00013bfc >> 0x18);
      local_7e = (undefined2)uVar2;
      uStack_7c = uStack_86;
      uStack_7a = uStack_84;
      uStack_78 = uStack_82;
      uStack_76 = uVar8;
      uStack_72 = uVar9;
      local_6c = uVar2;
      uStack_68 = uVar7;
      uStack_64 = uVar8;
      local_5e = local_7e;
      uStack_5c = uStack_86;
      uStack_5a = uVar7;
      uStack_56 = uVar8;
      uStack_52 = uVar9;
      FUN_000181fc();
      sVar1 = write(param_1,&local_8c,10);
      if (sVar1 == 10) {
        iVar5 = FUN_00013808(param_1,&local_6c,10);
        if (-1 < iVar5) goto LAB_00013a0c;
        __stream = (FILE *)*puVar6;
        __s = (char *)(DAT_00013c04 + 0x13a0c);
      }
      else {
        __stream = (FILE *)*puVar6;
        __s = (char *)(DAT_00013c00 + 0x139e8);
      }
    }
  }
  else {
    __stream = (FILE *)*puVar6;
    __s = (char *)(DAT_00013bf4 + 0x13948);
  }
  fputs(__s,__stream);
  uVar2 = 0xffffffff;
LAB_0001394c:
  if (local_4c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}



/* ===== FUN_00013c34 @ 00013c34 size=208 ===== */

void FUN_00013c34(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [12];
  int local_1c;
  
  iVar2 = DAT_00013d04 + 0x13c54;
  piVar3 = *(int **)(iVar2 + DAT_00013d08);
  local_1c = *piVar3;
  iVar1 = FUN_00012e30();
  if (iVar1 == 0) {
    iVar1 = FUN_0001337c(param_1,param_3,*(undefined4 *)(param_2 + 0x14));
    if (iVar1 < 0) {
      perror((char *)(DAT_00013d0c + 0x13c90));
    }
    else {
      iVar1 = FUN_00013808(param_1,auStack_28,10);
      if (-1 < iVar1) {
        FUN_000181fc(*(undefined4 *)(param_2 + 0x20),auStack_30);
        iVar1 = FUN_000143b8(param_1,auStack_30);
        goto LAB_00013c94;
      }
      fputs((char *)(DAT_00013d14 + 0x13cd4),(FILE *)**(undefined4 **)(iVar2 + DAT_00013d10));
    }
    iVar1 = -1;
  }
LAB_00013c94:
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1);
  }
  return;
}



/* ===== FUN_00013fa8 @ 00013fa8 size=356 ===== */

void FUN_00013fa8(int param_1,char param_2,undefined1 param_3,void *param_4,size_t param_5,
                 void *param_6,int param_7)

{
  ssize_t sVar1;
  int *piVar2;
  size_t __n;
  int iVar3;
  int *piVar4;
  undefined1 local_22c;
  undefined1 local_22b;
  char local_22a;
  undefined1 local_229;
  undefined1 auStack_228 [256];
  char local_128 [6];
  char local_122;
  int local_24;
  
  piVar4 = *(int **)(DAT_0001410c + 0x13fc4 + DAT_00014110);
  local_24 = *piVar4;
  local_22a = param_2 << 2;
  local_22c = 1;
  local_229 = (undefined1)param_5;
  local_22b = param_3;
  if (param_5 != 0) {
    memcpy(auStack_228,param_4,param_5);
  }
  sVar1 = write(param_1,&local_22c,param_5 + 4);
  if (-1 < sVar1) {
    do {
      sVar1 = read(param_1,local_128,1);
      if (sVar1 < 1) goto LAB_0001409c;
    } while (local_128[0] != '\x04');
    sVar1 = read(param_1,local_128 + 1,2);
    if (1 < sVar1) {
      iVar3 = 3;
      do {
        sVar1 = read(param_1,local_128 + iVar3,0x104 - iVar3);
        __n = (size_t)(byte)local_128[2];
        iVar3 = iVar3 + sVar1;
      } while (iVar3 <= (int)(__n + 2));
      if (local_128[0] == '\x04') {
        if (local_128[1] == '\x0e') {
          if (local_122 == '\0') {
            __n = __n - 4;
            iVar3 = 7;
LAB_000140f0:
            memcpy(param_6,local_128 + iVar3,__n);
            goto LAB_000140a0;
          }
        }
        else if ((int)__n <= param_7) {
          iVar3 = 3;
          goto LAB_000140f0;
        }
        __n = 0xfffffffa;
        goto LAB_000140a0;
      }
      piVar2 = __errno_location();
      *piVar2 = 5;
    }
  }
LAB_0001409c:
  __n = 0xffffffff;
LAB_000140a0:
  if (local_24 == *piVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(__n);
}



/* ===== FUN_00014114 @ 00014114 size=636 ===== */

void FUN_00014114(undefined4 param_1,uint param_2,char *param_3)

{
  bool bVar1;
  DIR *__dirp;
  int *piVar2;
  dirent64 *pdVar3;
  size_t sVar4;
  size_t __n;
  int iVar5;
  ssize_t sVar6;
  int iVar7;
  int *piVar8;
  char *__format;
  char cVar9;
  char *__s;
  int iVar10;
  char acStack_1340 [20];
  char acStack_132c [256];
  char local_122c;
  undefined1 auStack_122b [255];
  char local_112c [256];
  char acStack_102c [4096];
  int local_2c;
  
  iVar10 = DAT_00014390 + 0x14134;
  piVar8 = *(int **)(iVar10 + DAT_00014394);
  local_2c = *piVar8;
  memset(acStack_132c,0,0xff);
  snprintf(acStack_1340,0x14,(char *)(DAT_00014398 + 0x14194),param_2 >> 8,param_2 & 0xff);
  strcpy(acStack_102c,(char *)(DAT_0001439c + 0x141a4));
  __dirp = opendir(acStack_102c);
  if (__dirp == (DIR *)0x0) {
    strcpy(acStack_102c,(char *)(DAT_000143a0 + 0x141c4));
    __dirp = opendir(acStack_102c);
    if (__dirp != (DIR *)0x0) goto LAB_00014200;
  }
  else {
LAB_00014200:
    bVar1 = false;
    __format = (char *)(DAT_000143a4 + 0x14214);
    while (pdVar3 = readdir64(__dirp), pdVar3 != (dirent64 *)0x0) {
      __s = pdVar3->d_name;
      sVar4 = strlen(__s);
      __n = strlen(param_3);
      iVar5 = strncmp(__s + (sVar4 - __n),param_3,__n);
      if (iVar5 == 0) {
        sVar4 = strlen(acStack_1340);
        iVar5 = strncmp(__s,acStack_1340,sVar4);
        if (iVar5 == 0) {
          snprintf(acStack_132c,0xff,__format,acStack_102c,__s);
          bVar1 = true;
        }
      }
    }
    closedir(__dirp);
    if (!bVar1) {
      iVar10 = -2;
      goto LAB_000141e0;
    }
    printf((char *)(DAT_000143a8 + 0x142c8),acStack_132c);
    iVar5 = open64(acStack_132c,0);
    if (-1 < iVar5) {
      cVar9 = '\0';
      while( true ) {
        sVar6 = read(iVar5,auStack_122b,0xfe);
        if (sVar6 < 1) break;
        local_122c = cVar9;
        iVar7 = FUN_00013fa8(param_1,0xff,0x2e,&local_122c,sVar6 + 1,local_112c,0x100);
        if (iVar7 < 1) break;
        if (local_112c[0] != cVar9) {
          fputs((char *)(DAT_000143b4 + 0x14370),(FILE *)**(undefined4 **)(iVar10 + DAT_000143b0));
          break;
        }
        cVar9 = cVar9 + '\x01';
      }
      close(iVar5);
      iVar10 = 0;
      goto LAB_000141e0;
    }
    perror((char *)(DAT_000143ac + 0x142f4));
  }
  piVar2 = __errno_location();
  iVar10 = -*piVar2;
LAB_000141e0:
  if (local_2c == *piVar8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar10);
}



/* ===== FUN_000143b8 @ 000143b8 size=408 ===== */

void FUN_000143b8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined2 uStack_134;
  undefined4 local_132;
  undefined2 local_12e;
  char cStack_124;
  undefined2 local_123;
  int local_24;
  
  iVar2 = DAT_00014550 + 0x143d8;
  piVar3 = *(int **)(iVar2 + DAT_00014554);
  local_24 = *piVar3;
  iVar1 = FUN_00013fa8(param_1,0xff,0xf,0,0,&cStack_124,0xfe);
  if (-1 < iVar1) {
    puts(&cStack_124);
    iVar1 = FUN_00013fa8(param_1,4,1,0,0,&cStack_124,0xfe);
    if (-1 < iVar1) {
      iVar1 = FUN_00014114(param_1,local_123,DAT_00014558 + 0x14470);
      if (iVar1 < 0) {
        if (iVar1 != -2) goto LAB_00014410;
        fputs((char *)(DAT_00014560 + 0x14494),(FILE *)**(undefined4 **)(iVar2 + DAT_0001455c));
      }
      iVar1 = FUN_00014114(param_1,local_123,DAT_00014564 + 0x144b4);
      if (iVar1 < 0) {
        if (iVar1 != -2) goto LAB_00014410;
        fputs((char *)(DAT_00014568 + 0x144d8),(FILE *)**(undefined4 **)(iVar2 + DAT_0001455c));
      }
      uStack_134 = 0x6fe;
      local_132 = *param_2;
      local_12e = *(undefined2 *)(param_2 + 1);
      iVar1 = FUN_00013fa8(param_1,0xff,0x22,&uStack_134,8,&cStack_124,0xfe);
      if (-1 < iVar1) {
        iVar1 = FUN_00013fa8(param_1,3,3,0,0,&cStack_124,0xfe);
        iVar1 = iVar1 >> 0x1f;
        goto LAB_00014414;
      }
    }
  }
LAB_00014410:
  iVar1 = -1;
LAB_00014414:
  if (local_24 != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1);
  }
  return;
}



/* ===== FUN_0001456c @ 0001456c size=228 ===== */

void FUN_0001456c(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined2 uStack_134;
  undefined4 local_132;
  undefined2 local_12e;
  char acStack_124 [256];
  int local_24;
  
  piVar2 = *(int **)(DAT_00014650 + 0x1457c + DAT_00014654);
  local_24 = *piVar2;
  iVar1 = FUN_00013fa8(param_1,0xff,0xf,0,0,acStack_124,0xfe);
  if (-1 < iVar1) {
    puts(acStack_124);
    uStack_134 = 0x6fe;
    local_132 = *param_2;
    local_12e = *(undefined2 *)(param_2 + 1);
    iVar1 = FUN_00013fa8(param_1,0xff,0x22,&uStack_134,8,acStack_124,0xfe);
    if (-1 < iVar1) {
      iVar1 = FUN_00013fa8(param_1,3,3,0,0,acStack_124,0xfe);
      iVar1 = iVar1 >> 0x1f;
      goto LAB_000145c8;
    }
  }
  iVar1 = -1;
LAB_000145c8:
  if (local_24 != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1);
  }
  return;
}



/* ===== FUN_00014658 @ 00014658 size=220 ===== */

void FUN_00014658(undefined4 param_1,ushort *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  ushort local_434;
  ushort local_432;
  undefined4 local_430;
  int local_42c;
  uint local_428;
  void *pvStack_424;
  undefined4 local_420;
  char local_41c [1024];
  int local_1c;
  
  piVar4 = *(int **)(DAT_00014734 + 0x14668 + DAT_00014738);
  local_1c = *piVar4;
  pvStack_424 = memset(local_41c,0,0x400);
  local_420 = 0x400;
  local_42c = (int)param_2 + 3;
  local_434 = *param_2 >> 10;
  local_432 = (ushort)(((uint)*param_2 << 0x16) >> 0x16);
  local_430 = 0xe;
  local_428 = (uint)(byte)param_2[1];
  iVar1 = FUN_0001bff4(param_1,&local_434,0xf);
  if (iVar1 < 0) {
    perror((char *)(DAT_0001473c + 0x146f4));
  }
  else {
    uVar2 = 0;
    if (local_41c[0] == '\0') goto LAB_000146f8;
    piVar3 = __errno_location();
    *piVar3 = 5;
  }
  uVar2 = 0xffffffff;
LAB_000146f8:
  if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}



/* ===== FUN_00014740 @ 00014740 size=232 ===== */

void FUN_00014740(int param_1,size_t param_2)

{
  size_t sVar1;
  char *__s;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined1 auStack_41c [6];
  char local_416;
  int local_1c;
  
  iVar5 = DAT_00014828 + 0x14760;
  piVar6 = *(int **)(iVar5 + DAT_0001482c);
  local_1c = *piVar6;
  memset(auStack_41c,0,0x400);
  sVar1 = write(param_1,(void *)(DAT_00014830 + 0x14794),param_2);
  if (param_2 == sVar1) {
    iVar3 = FUN_00013808(param_1,auStack_41c,0x400);
    if (iVar3 < 0) {
      __s = (char *)(DAT_00014838 + 0x147e0);
      goto LAB_000147a4;
    }
    if ((6 < iVar3) && (uVar2 = 0, local_416 == '\0')) goto LAB_000147ac;
    fputs((char *)(DAT_00014840 + 0x14808),(FILE *)**(undefined4 **)(iVar5 + DAT_0001483c));
    piVar4 = __errno_location();
    *piVar4 = 5;
  }
  else {
    __s = (char *)(DAT_00014834 + 0x147a8);
LAB_000147a4:
    perror(__s);
  }
  uVar2 = 0xffffffff;
LAB_000147ac:
  if (local_1c == *piVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}



/* ===== FUN_00014844 @ 00014844 size=208 ===== */

void FUN_00014844(FILE *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  size_t sVar2;
  char *__s;
  FILE *__stream;
  int iVar3;
  int *piVar4;
  FILE *local_20;
  int local_1c;
  undefined4 uStack_18;
  
  iVar3 = DAT_00014914 + 0x1485c;
  piVar4 = *(int **)(iVar3 + DAT_00014918);
  local_1c = *piVar4;
  local_20 = param_1;
  uStack_18 = param_3;
  if ((param_1 != (FILE *)0x0) &&
     (sVar2 = fread(&local_20,4,1,param_1), iVar1 = DAT_00014924, sVar2 == 1)) {
    if ((uint)local_20 >> 0x10 < 0x201) {
      sVar2 = fread((void *)(DAT_00014924 + 0x148d8),1,(uint)local_20 >> 0x10,param_1);
      if (sVar2 == (uint)local_20 >> 0x10) {
        *(undefined2 *)(iVar1 + 0x14ad8) = local_20._0_2_;
        goto LAB_0001486c;
      }
      __s = (char *)(DAT_00014928 + 0x14908);
      __stream = (FILE *)**(undefined4 **)(iVar3 + DAT_0001491c);
    }
    else {
      __s = (char *)(DAT_00014920 + 0x148c0);
      __stream = (FILE *)**(undefined4 **)(iVar3 + DAT_0001491c);
    }
    fputs(__s,__stream);
  }
  sVar2 = 0;
LAB_0001486c:
  if (local_1c == *piVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(sVar2);
}



/* ===== FUN_0001492c @ 0001492c size=888 ===== */

void FUN_0001492c(int param_1,undefined4 *param_2,termios *param_3,char *param_4)

{
  int iVar1;
  FILE *__stream;
  FILE *__stream_00;
  size_t sVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  ushort *puVar6;
  uint uVar7;
  tcflag_t tVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  char *pcVar13;
  undefined4 local_58;
  int local_4c;
  undefined4 local_48;
  int local_2c;
  
  iVar10 = DAT_00014ca4 + 0x1494c;
  piVar5 = *(int **)(iVar10 + DAT_00014ca8);
  local_2c = *piVar5;
  if (param_4 != (char *)0x0) {
    __stream = fopen64(param_4,(char *)(DAT_00014cb4 + 0x149cc));
    puVar12 = *(undefined4 **)(iVar10 + DAT_00014cb8);
    if (__stream == (FILE *)0x0) {
      perror((char *)(DAT_00014cbc + 0x149e8));
    }
    else {
      sVar2 = fread(&local_4c,0x20,1,__stream);
      if (sVar2 == 1) {
        if (local_4c == DAT_00014ccc) {
          local_58 = local_48;
          goto LAB_000149e8;
        }
        fprintf((FILE *)*puVar12,(char *)(DAT_00014cd0 + 0x14a90),param_4);
      }
      else {
        perror((char *)(DAT_00014cc8 + 0x14a54));
      }
      fclose(__stream);
      __stream = (FILE *)0x0;
    }
LAB_000149e8:
    iVar11 = DAT_00014cc0;
    __stream_00 = (FILE *)*puVar12;
    *(FILE **)(DAT_00014cc0 + 0x14c00) = __stream;
    if (__stream == (FILE *)0x0) {
      fprintf(__stream_00,(char *)(DAT_00014cc4 + 0x14a10),param_4);
      iVar11 = 0;
      goto LAB_00014a10;
    }
    fprintf(__stream_00,(char *)(DAT_00014cd4 + 0x14aa4),local_58);
    iVar3 = FUN_00014844(*(undefined4 *)(iVar11 + 0x14c00));
    *(int *)(iVar11 + 0x14c04) = iVar3;
    if (iVar3 == 0) {
      fputs((char *)(DAT_00014cd8 + 0x14acc),(FILE *)*puVar12);
      iVar11 = 0;
      goto LAB_00014a10;
    }
  }
  iVar3 = DAT_00014cac;
  iVar11 = 0;
  pcVar13 = (char *)(DAT_00014cb0 + 0x1497c);
  puVar6 = (ushort *)(DAT_00014cac + 0x14b78);
  do {
    iVar1 = DAT_00014ce8;
    if (*(int *)(iVar3 + 0x14b80) == 0) {
LAB_00014af8:
      if (*(FILE **)(DAT_00014ce0 + 0x14d08) != (FILE *)0x0) {
        fclose(*(FILE **)(DAT_00014ce0 + 0x14d08));
      }
      *(undefined4 *)(DAT_00014ce4 + 0x14d24) = 0;
      goto LAB_00014a10;
    }
    uVar7 = *puVar6 - 1;
    if (5 < uVar7) {
switchD_0001499c_default:
      fprintf((FILE *)**(undefined4 **)(iVar10 + DAT_00014cb8),pcVar13);
      goto LAB_00014c0c;
    }
    switch(uVar7 * 4 + 0x149a4) {
    case 0x149a4:
      if (param_4 == (char *)0x0) {
        iVar11 = FUN_00014658(param_1,DAT_00014cdc + 0x14ae9);
      }
      else {
        iVar11 = FUN_00014740(param_1);
      }
      if (iVar11 == -1) goto LAB_00014af8;
      goto LAB_00014c10;
    case 0x149a8:
      break;
    case 0x149ac:
      fprintf((FILE *)**(undefined4 **)(iVar10 + DAT_00014cb8),(char *)(DAT_00014cec + 0x14b54),
              *(undefined4 *)(DAT_00014ce8 + 0x14b44),*(undefined4 *)(DAT_00014ce8 + 0x14b48));
      tcflush(param_1,2);
      if (*(int *)(iVar1 + 0x14b48) == 0) {
        tVar8 = param_3->c_cflag & 0x7fffffff;
      }
      else {
        tVar8 = param_3->c_cflag | 0x80000000;
      }
      param_3->c_cflag = tVar8;
      iVar11 = tcsetattr(param_1,0,param_3);
      if (iVar11 < 0) {
        pcVar13 = (char *)(DAT_00014cf0 + 0x14ba0);
      }
      else {
        puVar12 = (undefined4 *)(DAT_00014cf4 + 0x14bbc);
        tcflush(param_1,2);
        iVar11 = FUN_0001337c(param_1,param_3,*puVar12);
        if (-1 < iVar11) {
          if (param_2 == (undefined4 *)0x0) {
            iVar11 = 0;
            goto LAB_00014c10;
          }
          *param_2 = *puVar12;
          break;
        }
        pcVar13 = (char *)(DAT_00014cf8 + 0x14bdc);
      }
      iVar11 = -1;
      perror(pcVar13);
      goto LAB_00014af8;
    case 0x149b0:
      usleep(*(int *)(DAT_00014cfc + 0x14c04) * 1000);
      break;
    case 0x149b4:
      goto switchD_0001499c_default;
    case 0x149b8:
    }
LAB_00014c0c:
    iVar11 = 0;
LAB_00014c10:
    iVar1 = DAT_00014d00;
    pcVar9 = (char *)(DAT_00014d00 + 0x14c1c);
    iVar4 = FUN_00014844(*(undefined4 *)(DAT_00014d00 + 0x14e20));
    *(int *)(iVar1 + 0x14e24) = iVar4;
  } while ((((param_4 == (char *)0x0) || (*(short *)(iVar1 + 0x14e1c) != 1 || iVar4 < 3)) ||
           (*pcVar9 != '\x01')) || (*(short *)(iVar1 + 0x14c1d) != -0x2f4));
  iVar11 = 0;
LAB_00014a10:
  if (local_2c == *piVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar11);
}



/* ===== FUN_00015440 @ 00015440 size=56 ===== */

undefined4 FUN_00015440(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if ((*(char *)(param_1 + 1) == '\x0e') && ((uint)*(ushort *)(param_1 + 4) == (param_2 | 0xfc00)))
  {
    if (*(char *)(param_1 + 6) == '\0') {
      uVar1 = 0;
    }
    else {
      uVar1 = 0xffffffac;
    }
    return uVar1;
  }
  return 0xffffffac;
}



/* ===== FUN_00015478 @ 00015478 size=176 ===== */

void FUN_00015478(int param_1,int param_2)

{
  ssize_t sVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  timespec local_130;
  undefined4 uStack_128;
  undefined2 local_124;
  undefined1 auStack_118 [260];
  int local_14;
  
  piVar4 = *(int **)(DAT_00015528 + 0x15488 + DAT_0001552c);
  local_14 = *piVar4;
  local_130.tv_sec = 0;
  local_130.tv_nsec = DAT_00015530;
  uStack_128 = DAT_00015534;
  local_124 = (undefined2)(param_2 / 100);
  sVar1 = write(param_1,&uStack_128,6);
  if (sVar1 == 6) {
    nanosleep(&local_130,(timespec *)0x0);
    iVar3 = FUN_00013808(param_1,auStack_118,0x104);
    if (iVar3 < 0) {
      uVar2 = 0xffffff92;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    perror((char *)(DAT_00015538 + 0x154dc));
    uVar2 = 0xffffff92;
  }
  if (local_14 != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}



/* ===== FUN_0001553c @ 0001553c size=232 ===== */

undefined4 FUN_0001553c(char *param_1,undefined2 *param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  
  *param_2 = 0x100;
  iVar3 = DAT_00015624;
  pcVar4 = strchr(param_1,0x5b);
  if (param_1 == pcVar4) {
    pcVar4 = strchr(pcVar4,0x5d);
    if ((pcVar4 == (char *)0x0) || (4 < (int)pcVar4 - (int)param_1)) {
      return 0xffffffac;
    }
    bVar2 = false;
    cVar7 = '\0';
    cVar5 = '\0';
    for (iVar8 = 1; iVar8 < (int)pcVar4 - (int)param_1; iVar8 = iVar8 + 1) {
      cVar6 = cVar5;
      if ((byte)param_1[iVar8] == 0x3a) {
        bVar2 = true;
      }
      else {
        iVar1 = (uint)(byte)param_1[iVar8] * 2;
        if (((*(ushort *)(**(int **)(iVar3 + 0x15568 + DAT_00015628) + iVar1) & 4) != 0) &&
           (cVar6 = *(char *)(**(int **)(iVar3 + 0x15568 + DAT_0001562c) + iVar1), !bVar2)) {
          cVar7 = cVar6;
          cVar6 = cVar5;
        }
      }
      cVar5 = cVar6;
    }
    if (cVar7 == 'S' || cVar5 == 'S') {
      *(undefined1 *)((int)param_2 + 1) = 0;
    }
    if ((cVar7 + 0xbeU & 0xfd) == 0) {
      *(undefined1 *)param_2 = 1;
      return 0;
    }
  }
  return 0;
}



/* ===== FUN_00015630 @ 00015630 size=104 ===== */

long FUN_00015630(char *param_1,uint param_2)

{
  char *__s;
  long lVar1;
  char cStack_b;
  
  __s = strchr(param_1,0x5b);
  if (param_1 == __s) {
    param_1 = strchr(__s,0x5d);
    if (param_1 == (char *)0x0) {
      return 0xffff;
    }
    param_1 = param_1 + 1;
  }
  if (((param_2 & 0xff) == 0) && (cStack_b = (char)(param_2 >> 8), cStack_b != '\x01')) {
    lVar1 = strtol(param_1,(char **)0x0,0x10);
    return lVar1;
  }
  return 0xffff;
}



/* ===== FUN_00015698 @ 00015698 size=196 ===== */

void FUN_00015698(int param_1,void *param_2,size_t param_3,undefined4 *param_4)

{
  ssize_t sVar1;
  size_t sVar2;
  void *__ptr;
  int iVar3;
  int *piVar4;
  undefined1 local_1d;
  int local_1c;
  
  piVar4 = *(int **)(DAT_0001575c + 0x156b8 + DAT_00015760);
  local_1c = *piVar4;
  if (param_3 == 0) goto LAB_000156e8;
  sVar1 = write(param_1,&local_1d,1);
  if ((sVar1 == 1) && (sVar2 = write(param_1,param_2,param_3), sVar2 == param_3)) {
    __ptr = malloc(100);
    if (__ptr == (void *)0x0) {
      param_3 = 0xfffffff4;
      goto LAB_000156e8;
    }
    iVar3 = FUN_00013808(param_1,__ptr,100);
    if (0 < iVar3) {
      *param_4 = __ptr;
      goto LAB_000156e8;
    }
    free(__ptr);
  }
  param_3 = 0xffffffac;
LAB_000156e8:
  if (local_1c == *piVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_3);
}



/* ===== FUN_00015764 @ 00015764 size=104 ===== */

void FUN_00015764(undefined4 param_1)

{
  int iVar1;
  void *__ptr;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(DAT_000157cc + 0x15774 + DAT_000157d0);
  iVar2 = *piVar3;
  iVar1 = FUN_00015698();
  if (-1 < iVar1) {
    iVar1 = FUN_00015440(param_1,0xb);
    free(__ptr);
  }
  if (iVar2 != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1);
  }
  return;
}



/* ===== FUN_000157d4 @ 000157d4 size=2616 ===== */

void FUN_000157d4(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  FILE *pFVar9;
  char *pcVar10;
  void *pvVar11;
  int iVar12;
  ulong uVar13;
  char *pcVar14;
  long lVar15;
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  void *__ptr_02;
  int iVar16;
  int *piVar17;
  size_t sVar18;
  size_t sVar19;
  byte *pbVar20;
  uint uVar21;
  undefined4 *puVar22;
  char *__s;
  undefined1 *puVar23;
  bool bVar24;
  bool bVar25;
  void *pvVar26;
  int local_4180;
  uint local_417c;
  undefined4 local_4160;
  void *local_415c;
  int iStack_4158;
  char *local_4154;
  int local_4150;
  undefined2 local_414c;
  undefined1 auStack_414a [246];
  char acStack_4054 [2];
  undefined1 local_4052;
  byte local_4050;
  byte local_404f;
  undefined1 local_404e;
  undefined4 local_404c;
  undefined1 local_4048;
  undefined8 local_4047;
  char local_403c [4096];
  char acStack_303c [4096];
  byte local_203c [2];
  undefined1 local_203a;
  char acStack_2039 [4093];
  undefined4 local_103c;
  undefined4 local_1038;
  undefined1 auStack_1032 [4086];
  int local_3c;
  
  iVar16 = DAT_0001620c + 0x157f0;
  piVar17 = *(int **)(iVar16 + DAT_00016210);
  local_3c = *piVar17;
  local_103c = DAT_00016214;
  local_1038 = 0x4000000;
  iVar5 = FUN_00015698(param_1,&local_103c,8);
  if (-1 < iVar5) {
    iVar5 = FUN_00015440(local_415c,5);
    if (iVar5 < 0) {
      uVar21 = 0;
    }
    else {
      uVar21 = *(uint *)((int)__ptr + 7);
    }
    free(__ptr);
    if (-1 < iVar5) {
      iVar5 = 0;
      local_103c = CONCAT22((short)(local_103c >> 0x10),(short)DAT_00016218) & 0xff00ffff;
      iVar7 = FUN_00015698(param_1,&local_103c,3,&local_415c);
      if (-1 < iVar7) {
        iVar7 = FUN_00015440(local_415c,0x1e);
        if (iVar7 < 0) {
          local_4180 = 0;
        }
        else {
          local_4180 = *(int *)((int)__ptr_00 + 7);
          iVar5 = *(int *)((int)__ptr_00 + 0xb);
        }
        free(__ptr_00);
        if (-1 < iVar7) {
          local_103c = DAT_0001621c;
          local_1038 = CONCAT13(local_1038._3_1_,3);
          iVar7 = FUN_00015698(param_1,&local_103c,7,&local_415c);
          if (-1 < iVar7) {
            iVar8 = FUN_00015440(local_415c,0xb);
            if (-1 < iVar8) {
              iVar7 = -0x54;
            }
            free(__ptr_01);
            uVar1 = DAT_00016220;
            if (-1 < iVar7) {
              if (uVar21 == DAT_00016220) {
                iVar7 = DAT_00016248 + 0x15a84;
              }
              else {
                iVar7 = DAT_00016224 + 0x159a0;
              }
              snprintf(acStack_303c,0x1000,(char *)(DAT_00016228 + 0x159c8),DAT_0001622c + 0x159cc,
                       local_4180,iVar7);
              bVar24 = uVar21 != uVar1;
              if (bVar24 && local_4180 == DAT_00016230) {
                bVar25 = uVar21 == 0;
                if (bVar25) {
                  uVar21 = 0;
                }
                if (!bVar25) {
                  uVar21 = (uint)(iVar5 == 1);
                }
                cVar3 = uVar21 == 0 && (bVar24 && local_4180 == DAT_00016230);
                if (uVar21 == 0) goto LAB_00015a1c;
              }
              else {
LAB_00015a1c:
                snprintf(local_403c,0x1000,(char *)(DAT_00016238 + 0x15a40),DAT_0001623c + 0x15a4c,
                         local_4180,DAT_00016234 + 0x15a34);
                cVar3 = local_403c[0];
              }
              local_403c[0] = cVar3;
              pFVar9 = fopen64(acStack_303c,(char *)(DAT_00016240 + 0x15a5c));
              if (pFVar9 == (FILE *)0x0) {
                perror((char *)(DAT_00016244 + 0x15a74));
              }
              else {
                pvVar26 = (void *)0x0;
                iVar5 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
                pcVar14 = *(char **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
                iVar7 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
                sVar19 = 0;
                local_417c = 0;
                local_415c = (void *)0x0;
                iStack_4158 = iVar5;
                local_4154 = pcVar14;
                local_4150 = iVar7;
                do {
                  while( true ) {
                    while( true ) {
                      while( true ) {
                        do {
                          pcVar10 = fgets((char *)&local_103c,1000,pFVar9);
                          if (pcVar10 == (char *)0x0) goto LAB_00015b14;
                          do {
                            __s = pcVar10;
                            pcVar10 = __s + 1;
                          } while (*__s == ' ');
                        } while ((*__s == '/') && (__s[1] == '/'));
                        pcVar10 = strchr(__s,0x23);
                        iVar8 = iStack_4158;
                        if (__s != pcVar10) break;
                        if (local_415c != (void *)0x0) goto LAB_00015b0c;
                        local_415c = (void *)0x1;
                      }
                      if (local_415c != (void *)0x2) break;
                      iVar8 = FUN_0001553c(__s,&local_4160);
                      if (iVar8 < 0) goto LAB_00015b0c;
                      sVar4 = FUN_00015630(__s,local_4160);
                      sVar19 = (size_t)sVar4;
                      if (500 < (int)sVar19) goto LAB_00015b0c;
                      iVar8 = local_417c * 0xc + *(int *)(iVar16 + DAT_00016254);
                      *(size_t *)(iVar8 + 4) = sVar19;
                      pvVar11 = malloc(sVar19);
                      *(void **)(iVar8 + 8) = pvVar11;
                      local_415c = (void *)0x3;
                      iStack_4158 = 0;
                    }
                    if (local_415c == (void *)0x3) break;
                    if (local_415c == (void *)0x1) {
                      iVar8 = FUN_0001553c(__s,&local_4160);
                      if (iVar8 < 0) goto LAB_00015b0c;
                      uVar6 = FUN_00015630(__s,local_4160);
                      *(undefined4 *)(*(int *)(iVar16 + DAT_00016254) + local_417c * 0xc) = uVar6;
                      local_415c = (void *)0x2;
                    }
                  }
                  if (iStack_4158 == 0) {
                    iVar12 = FUN_0001553c(__s,&local_4160);
                    pcVar10 = __s;
                    if (iVar12 < 0) break;
                    do {
                      __s = pcVar10;
                      pcVar10 = __s + 1;
                    } while (*__s == ' ');
                  }
                  pcVar10 = strchr(__s,0x5b);
                  if (__s == pcVar10) {
                    pcVar10 = strchr(pcVar10,0x5d);
                    local_4154 = (char *)0x0;
                    if (pcVar10 != (char *)0x0) {
                      local_4154 = pcVar10 + (1 - (int)__s);
                    }
                  }
                  else {
                    local_4154 = (char *)0x0;
                  }
                  uVar21 = local_4160;
                  if (((local_4160 & 0xff) == 0) && (local_4160._1_1_ == '\x01')) {
                    iVar12 = *(int *)(iVar16 + DAT_00016254) + local_417c * 0xc;
                    sVar18 = sVar19;
                    if (0xf < (int)sVar19) {
                      sVar18 = 0x10;
                    }
                    for (; pcVar10 = local_4154, 0 < (int)sVar18; sVar18 = sVar18 - 2) {
                      local_203a = (undefined1)uVar21;
                      strncpy((char *)local_203c,__s + (int)local_4154,2);
                      lVar15 = strtol((char *)local_203c,(char **)0x0,0x10);
                      iVar2 = local_4150;
                      *(char *)(*(int *)(iVar12 + 8) + local_4150) = (char)lVar15;
                      strncpy((char *)local_203c,__s + (int)(pcVar10 + 3),2);
                      lVar15 = strtol((char *)local_203c,(char **)0x0,0x10);
                      local_4150 = iVar2 + 2;
                      *(char *)(*(int *)(iVar12 + 8) + iVar2 + 1) = (char)lVar15;
                      local_4154 = pcVar10 + 6;
                    }
                    if ((int)sVar19 < 0x11) goto LAB_00015d1c;
                    sVar19 = (size_t)(short)((short)sVar19 + -0x10);
LAB_00015dc8:
                    iStack_4158 = iVar8 + 1;
                  }
                  else {
                    if (sVar19 != 0) goto LAB_00015dc8;
LAB_00015d1c:
                    local_417c = local_417c + 1 & 0xff;
                    sVar19 = 0;
                    local_415c = pvVar26;
                    iStack_4158 = iVar5;
                    local_4154 = pcVar14;
                    local_4150 = iVar7;
                  }
                } while (local_417c != 0x32);
LAB_00015b0c:
                local_417c = 0xffffffac;
LAB_00015b14:
                fclose(pFVar9);
                if (-1 < (int)local_417c) {
                  pFVar9 = fopen64(local_403c,(char *)(DAT_0001624c + 0x15b38));
                  if (pFVar9 != (FILE *)0x0) {
                    local_4052 = 0;
                    do {
                      do {
                        pcVar14 = fgets((char *)local_203c,0xf4,pFVar9);
                        if (pcVar14 == (char *)0x0) {
LAB_00015f14:
                          iVar5 = 0;
                          sVar19 = strtol((char *)local_203c,(char **)0x0,0x10);
                          goto LAB_00015f38;
                        }
                        sVar19 = strlen((char *)local_203c);
                      } while (sVar19 < 2);
                      pbVar20 = (byte *)strstr((char *)local_203c,(char *)(DAT_00016258 + 0x15e34));
                      if (local_203c != pbVar20) {
                        if ((*(ushort *)
                              (**(int **)(iVar16 + DAT_00016260) + (uint)local_203c[0] * 2) & 0x10)
                            != 0) goto LAB_00015f14;
                        break;
                      }
                      pbVar20 = (byte *)&local_404c;
                      strncpy((char *)pbVar20,acStack_2039,8);
                      iVar5 = 0;
                      local_103c = DAT_0001625c;
                      local_404e = 0;
                      local_1038 = CONCAT13((char)(local_1038 >> 0x18),0x40000);
                      puVar23 = auStack_1032;
                      do {
                        local_4050 = *pbVar20;
                        iVar5 = iVar5 + 1;
                        local_404f = pbVar20[1];
                        pbVar20 = pbVar20 + 2;
                        lVar15 = strtol((char *)&local_4050,(char **)0x0,0x10);
                        *puVar23 = (char)lVar15;
                        puVar23 = puVar23 + -1;
                      } while (iVar5 != 4);
                      iVar5 = FUN_00015698(param_1,&local_103c,0xb,&local_415c);
                      if (iVar5 < 0) break;
                      iVar5 = FUN_00015440(local_415c,0xb);
                      free(__ptr_02);
                    } while (-1 < iVar5);
LAB_00015ee8:
                    iVar5 = -1;
                    goto LAB_00015f74;
                  }
                  goto LAB_00015b44;
                }
              }
              goto LAB_00015890;
            }
          }
LAB_000160c0:
          snprintf((char *)&local_103c,0x1000,(char *)(DAT_0001626c + 0x160e0),
                   DAT_00016270 + 0x160f0,local_4180,DAT_00016268 + 0x160d4);
          pFVar9 = fopen64((char *)&local_103c,(char *)(DAT_00016274 + 0x16100));
          if (pFVar9 != (FILE *)0x0) {
            pbVar20 = local_203c;
            pcVar14 = fgets((char *)pbVar20,0xfff,pFVar9);
            if (pcVar14 != (char *)0x0) {
              iVar5 = 5;
              local_404c = DAT_00016278;
              local_4048 = 1;
              local_4047 = 0x600;
              pcVar14 = strchr((char *)pbVar20,0x3a);
              local_404e = 0;
              puVar23 = (undefined1 *)((int)&local_4047 + 7);
              do {
                local_4050 = *pbVar20;
                local_404f = pbVar20[1];
                lVar15 = strtol((char *)&local_4050,(char **)0x0,0x10);
                *puVar23 = (char)lVar15;
                if (pcVar14 == (char *)0x0) {
                  pbVar20 = pbVar20 + 2;
                }
                else {
                  pbVar20 = pbVar20 + 3;
                }
                bVar24 = iVar5 != 0;
                iVar5 = iVar5 + -1;
                puVar23 = puVar23 + -1;
              } while (bVar24);
              iVar5 = FUN_00015698(param_1,&local_404c,0xd,&local_415c);
              if (-1 < iVar5) {
                free(local_415c);
              }
            }
            fclose(pFVar9);
          }
          uVar6 = 0;
          goto LAB_0001610c;
        }
      }
    }
  }
  goto LAB_00015890;
LAB_00015f38:
  if ((int)sVar19 < 1) goto code_r0x00015f40;
  sVar18 = sVar19;
  if (0xf3 < (int)sVar19) {
    sVar18 = 0xf4;
  }
  local_414c = (undefined2)sVar18;
  iVar7 = 1;
  while (iVar7 + -1 < (int)sVar18) {
    pcVar14 = fgets(acStack_4054,3,pFVar9);
    if (pcVar14 == (char *)0x0) goto LAB_00015ee8;
    uVar13 = strtoul(acStack_4054,(char **)0x0,0x10);
    auStack_414a[iVar7 + -1] = (char)uVar13;
    iVar7 = iVar7 + 1;
  }
  local_1038._0_3_ = CONCAT12((char)sVar18,(short)iVar5);
  local_103c._0_3_ = CONCAT12((char)sVar18 + '\x04',0xfc0b);
  local_103c = CONCAT13(8,(undefined3)local_103c);
  memcpy((void *)((int)&local_1038 + 3),auStack_414a,sVar18);
  iVar7 = FUN_00015764(param_1,&local_103c,sVar18 + 7);
  if (iVar7 < 0) goto LAB_00015ee8;
  iVar5 = iVar5 + 1;
  sVar19 = sVar19 - 0xf4;
  goto LAB_00015f38;
code_r0x00015f40:
  local_103c = DAT_00016264;
  local_1038 = local_1038 & 0xff000000;
  iVar7 = FUN_00015764(param_1,&local_103c,7);
  if (iVar7 < 0) {
    iVar5 = -1;
  }
LAB_00015f74:
  fclose(pFVar9);
  if (iVar5 != -1) {
LAB_00015b44:
    uVar21 = 0;
    local_103c = DAT_00016250;
    local_1038 = 0x60000;
    auStack_1032[1] = 0;
    auStack_1032[2] = 8;
    iVar5 = FUN_00015764(param_1,&local_103c,0xd);
    if (iVar5 < 0) {
LAB_00015b88:
      uVar6 = 0xffffffff;
      goto LAB_0001610c;
    }
    if (local_417c != 0) {
      puVar22 = *(undefined4 **)(iVar16 + DAT_00016254);
      do {
        sVar19 = puVar22[1];
        local_1038._0_3_ = CONCAT12((char)sVar19,(short)*puVar22);
        local_103c._0_3_ = CONCAT12((char)sVar19 + '\x04',0xfc0b);
        local_103c = CONCAT13(1,(undefined3)local_103c);
        memcpy((void *)((int)&local_1038 + 3),(void *)puVar22[2],sVar19);
        iVar5 = FUN_00015764(param_1,&local_103c,sVar19 + 7);
        if (iVar5 < 0) goto LAB_00015b88;
        uVar21 = uVar21 + 1;
        puVar22 = puVar22 + 3;
      } while (local_417c != uVar21);
    }
    goto LAB_000160c0;
  }
LAB_00015890:
  uVar6 = 0xffffffac;
LAB_0001610c:
  if (local_3c == *piVar17) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}



/* ===== FUN_000163cc @ 000163cc size=436 ===== */

void FUN_000163cc(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  char *__s;
  ssize_t sVar2;
  int *piVar3;
  timespec local_140;
  undefined1 local_138;
  undefined1 local_137;
  undefined2 local_136;
  undefined4 local_134;
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [260];
  int local_24;
  
  piVar3 = *(int **)(DAT_00016580 + 0x163ec + DAT_00016584);
  local_24 = *piVar3;
  local_140.tv_sec = 0;
  local_140.tv_nsec = DAT_00016588;
  local_138 = 1;
  iVar1 = FUN_00015478();
  if (iVar1 < 0) goto LAB_00016444;
  iVar1 = FUN_0001337c(param_1,param_5,param_2);
  if (iVar1 < 0) {
    perror((char *)(DAT_0001658c + 0x16444));
    goto LAB_00016444;
  }
  iVar1 = FUN_000157d4(param_1);
  if (iVar1 < 0) {
    __s = (char *)(DAT_00016590 + 0x16478);
LAB_00016474:
    perror(__s);
  }
  else {
    if (param_4 != 0) {
      local_137 = 0xb;
      local_136 = 0xafc;
      local_134 = 0x6000101;
      FUN_000181fc(param_4,auStack_130);
      sVar2 = write(param_1,&local_138,0xe);
      if (sVar2 == 0xe) {
        iVar1 = FUN_00013808(param_1,auStack_128,0x104);
        if (-1 < iVar1) goto LAB_00016518;
        __s = (char *)(DAT_00016598 + 0x16518);
      }
      else {
        __s = (char *)(DAT_00016594 + 0x164f8);
      }
      goto LAB_00016474;
    }
LAB_00016518:
    local_137 = 3;
    local_136 = 0xc;
    sVar2 = write(param_1,&local_138,4);
    if (sVar2 == 4) {
      nanosleep(&local_140,(timespec *)0x0);
      iVar1 = FUN_00013808(param_1,auStack_128,0x104);
      if (-1 < iVar1) {
        iVar1 = FUN_00015478(param_1,param_2);
        goto LAB_00016444;
      }
    }
  }
  iVar1 = -0x6e;
  FUN_00015478(param_1,param_3);
  FUN_0001337c(param_1,param_5,param_3);
LAB_00016444:
  if (local_24 == *piVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}



/* ===== FUN_00016b44 @ 00016b44 size=16 ===== */

uint FUN_00016b44(void)

{
  uint uVar1;
  
  uVar1 = FUN_00013808();
  return uVar1 | (int)uVar1 >> 0x1f;
}



/* ===== FUN_00016b54 @ 00016b54 size=48 ===== */

size_t FUN_00016b54(int param_1,void *param_2,size_t param_3)

{
  size_t sVar1;
  int *piVar2;
  
  sVar1 = write(param_1,param_2,param_3);
  if ((int)sVar1 < 0) {
    piVar2 = __errno_location();
    return -*piVar2;
  }
  if (param_3 != sVar1) {
    sVar1 = 0xffffffff;
  }
  return sVar1;
}



/* ===== FUN_00016b84 @ 00016b84 size=348 ===== */

void FUN_00016b84(undefined4 *param_1)

{
  int iVar1;
  char *__format;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_120;
  undefined1 local_11c;
  undefined1 local_11b;
  char local_11a;
  int local_1c;
  
  iVar3 = DAT_00016ce0 + 0x16ba4;
  piVar4 = *(int **)(iVar3 + DAT_00016ce4);
  local_1c = *piVar4;
  local_120 = DAT_00016ce8;
  local_11c = 0;
  if (param_1[3] == 0) {
    local_11b = 1;
  }
  else {
    local_11b = 2;
  }
  iVar1 = FUN_00016b54(*param_1,&local_120);
  if (iVar1 < 0) {
    puVar2 = *(undefined4 **)(iVar3 + DAT_00016cec);
    __format = (char *)(DAT_00016cf0 + 0x16c04);
  }
  else {
    iVar1 = FUN_00016b44(*param_1,&local_120,0x104);
    if (-1 < iVar1) {
      if (local_11a == '\0') {
        do {
          iVar1 = FUN_00016b44(*param_1,&local_120,0x104);
          if (iVar1 < 0) {
            puVar2 = *(undefined4 **)(iVar3 + DAT_00016cec);
            __format = (char *)(DAT_00016cfc + 0x16cd8);
            goto LAB_00016c00;
          }
        } while (((local_120._1_1_ != -1) || (local_120._2_1_ != '\x01')) ||
                (local_120._3_1_ != '\0'));
      }
      else {
        iVar1 = -1;
        fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_00016cec),(char *)(DAT_00016cf8 + 0x16c78));
      }
      goto LAB_00016c08;
    }
    puVar2 = *(undefined4 **)(iVar3 + DAT_00016cec);
    __format = (char *)(DAT_00016cf4 + 0x16c50);
  }
LAB_00016c00:
  fprintf((FILE *)*puVar2,__format,iVar1);
LAB_00016c08:
  if (local_1c == *piVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}



/* ===== FUN_00016d00 @ 00016d00 size=532 ===== */

void FUN_00016d00(undefined4 *param_1)

{
  ssize_t sVar1;
  char *__format;
  undefined4 *puVar2;
  int iVar3;
  size_t __n;
  int iVar4;
  int *piVar5;
  uint uVar6;
  byte local_245;
  uint local_244;
  size_t local_240;
  byte local_23c;
  undefined1 uStack_23b;
  byte local_23a;
  byte local_239;
  undefined1 auStack_238 [260];
  size_t local_134;
  undefined1 auStack_130 [260];
  int local_2c;
  
  iVar4 = DAT_00016f14 + 0x16d20;
  piVar5 = *(int **)(iVar4 + DAT_00016f18);
  local_2c = *piVar5;
LAB_00016d30:
  do {
    iVar3 = param_1[1];
    sVar1 = read(iVar3,&local_245,1);
    if (sVar1 < 1) {
      __n = 0;
LAB_00016d50:
      param_1[2] = 1;
      goto LAB_00016d58;
    }
    local_244 = (uint)local_245;
    if (local_244 != 1) {
      if (local_244 == 2) {
        local_23c = 4;
        sVar1 = read(iVar3,&uStack_23b,2);
        if (-1 < sVar1) {
          uVar6 = (uint)local_23a;
          sVar1 = read(iVar3,&local_239,uVar6);
          if (-1 < sVar1) {
            local_240 = uVar6 + 3;
            goto LAB_00016de8;
          }
        }
      }
      else {
        fprintf((FILE *)**(undefined4 **)(iVar4 + DAT_00016f1c),(char *)(DAT_00016f20 + 0x16d9c));
      }
LAB_00016dc0:
      __n = 0xffffffff;
      goto LAB_00016d50;
    }
    local_23c = local_245;
    sVar1 = read(iVar3,&uStack_23b,3);
    if (sVar1 < 0) goto LAB_00016dc0;
    uVar6 = (uint)local_239;
    sVar1 = read(iVar3,auStack_238,uVar6);
    if (sVar1 < 0) goto LAB_00016dc0;
    local_240 = uVar6 + 4;
LAB_00016de8:
    __n = 0;
    if (local_240 == 0) goto LAB_00016d50;
    if (local_244 != 1) {
      if (local_244 == 2) {
        __n = FUN_00016b44(*param_1,auStack_130,0x104);
        if ((int)__n < 1) {
          puVar2 = *(undefined4 **)(iVar4 + DAT_00016f1c);
          __format = (char *)(DAT_00016f2c + 0x16ed4);
          goto LAB_00016e94;
        }
        local_134 = __n;
        if ((__n == local_240) && (iVar3 = memcmp(auStack_130,&local_23c,__n), iVar3 == 0))
        goto LAB_00016d30;
        param_1[2] = 1;
      }
      else {
        fprintf((FILE *)**(undefined4 **)(iVar4 + DAT_00016f1c),(char *)(DAT_00016f24 + 0x16e20));
      }
      __n = 0xffffffff;
      goto LAB_00016d58;
    }
    __n = FUN_00016b54(*param_1,&local_23c,local_240);
    if ((int)__n < 1) {
      puVar2 = *(undefined4 **)(iVar4 + DAT_00016f1c);
      __format = (char *)(DAT_00016f28 + 0x16e98);
LAB_00016e94:
      fprintf((FILE *)*puVar2,__format,__n);
LAB_00016d58:
      if (local_2c != *piVar5) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(__n);
      }
      return;
    }
  } while( true );
}



/* ===== FUN_000180e8 @ 000180e8 size=76 ===== */

undefined4 FUN_000180e8(byte *param_1,char *param_2)

{
  sprintf(param_2,(char *)(DAT_00018134 + 0x1810c),(uint)param_1[5],(uint)param_1[4],
          (uint)param_1[3],(uint)param_1[2],(uint)param_1[1],(uint)*param_1);
  return 0x11;
}



/* ===== FUN_00018138 @ 00018138 size=52 ===== */

undefined4 FUN_00018138(int param_1,char *param_2,undefined4 param_3)

{
  sprintf(param_2,(char *)(DAT_0001816c + 0x18158),(uint)*(byte *)(param_1 + 5),
          (uint)*(byte *)(param_1 + 4),(uint)*(byte *)(param_1 + 3),param_2,param_3);
  return 8;
}



/* ===== FUN_00018170 @ 00018170 size=132 ===== */

undefined4 FUN_00018170(byte *param_1)

{
  byte *pbVar1;
  size_t sVar2;
  int iVar3;
  
  iVar3 = DAT_000181f4 + 0x18184;
  if ((param_1 != (byte *)0x0) && (sVar2 = strlen((char *)param_1), sVar2 == 0x11)) {
    iVar3 = **(int **)(iVar3 + DAT_000181f8);
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



/* ===== FUN_000181fc @ 000181fc size=92 ===== */

undefined4 FUN_000181fc(char *param_1,undefined4 *param_2)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  char *__nptr;
  char *pcVar4;
  
  iVar1 = FUN_00018170();
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



/* ===== <EXTERNAL>::malloc @ 000183cc size=4 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00033ed0)(__size);
  return pvVar1;
}



/* ===== FUN_000183d0 @ 000183d0 size=92 ===== */

char * FUN_000183d0(byte *param_1)

{
  char *__s;
  
  __s = malloc(0x12);
  if (__s != (char *)0x0) {
    sprintf(__s,(char *)(DAT_0001842c + 0x18410),(uint)*param_1,(uint)param_1[1],(uint)param_1[2],
            (uint)param_1[3],(uint)param_1[4],(uint)param_1[5]);
  }
  return __s;
}



/* ===== FUN_0001af28 @ 0001af28 size=108 ===== */

char * FUN_0001af28(int *param_1,uint param_2)

{
  uint *puVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  char *__s;
  char *__format;
  
  pcVar2 = malloc(0x78);
  if (pcVar2 != (char *)0x0) {
    __format = (char *)(DAT_0001af94 + 0x1af5c);
    *pcVar2 = '\0';
    __s = pcVar2;
    while (piVar4 = param_1 + 2, *param_1 != 0) {
      puVar1 = (uint *)(param_1 + 1);
      param_1 = piVar4;
      if ((param_2 & *puVar1) != 0) {
        iVar3 = sprintf(__s,__format);
        __s = __s + iVar3;
      }
    }
  }
  return pcVar2;
}



/* ===== FUN_0001af98 @ 0001af98 size=92 ===== */

char * FUN_0001af98(undefined4 *param_1,int param_2)

{
  int *piVar1;
  char *__dest;
  char *pcVar2;
  
  __dest = malloc(0x32);
  pcVar2 = (char *)0x0;
  if (__dest != (char *)0x0) {
    *__dest = '\0';
    do {
      pcVar2 = (char *)*param_1;
      if (pcVar2 == (char *)0x0) {
        return __dest;
      }
      piVar1 = param_1 + 1;
      param_1 = param_1 + 2;
    } while (*piVar1 != param_2);
    pcVar2 = strcpy(__dest,pcVar2);
  }
  return pcVar2;
}



/* ===== FUN_0001be7c @ 0001be7c size=160 ===== */

void FUN_0001be7c(undefined2 param_1)

{
  int __fd;
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  sockaddr local_24;
  
  piVar4 = *(int **)(DAT_0001bf1c + 0x1be8c + DAT_0001bf20);
  local_24.sa_data._6_4_ = *piVar4;
  __fd = socket(0x1f,DAT_0001bf24,1);
  iVar3 = __fd;
  if (-1 < __fd) {
    local_24.sa_data[2] = '\0';
    local_24.sa_data[3] = '\0';
    local_24.sa_family = 0x1f;
    local_24.sa_data._0_2_ = param_1;
    iVar1 = bind(__fd,&local_24,6);
    if (iVar1 < 0) {
      piVar2 = __errno_location();
      iVar1 = *piVar2;
      iVar3 = -1;
      close(__fd);
      *piVar2 = iVar1;
    }
  }
  if (local_24.sa_data._6_4_ != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar3);
  }
  return;
}



/* ===== <EXTERNAL>::close @ 0001bf28 size=4 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_00033fb0)(__fd);
  return iVar1;
}



/* ===== FUN_0001bf2c @ 0001bf2c size=192 ===== */

void FUN_0001bf2c(int param_1,short param_2,int param_3,int param_4,undefined4 param_5)

{
  ssize_t sVar1;
  undefined4 uVar2;
  int *piVar3;
  int __count;
  int *piVar4;
  undefined1 local_39;
  ushort local_38;
  undefined1 local_36;
  iovec local_34;
  ushort *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  
  __count = 3;
  piVar4 = *(int **)(DAT_0001bfec + 0x1bf4c + DAT_0001bff0);
  local_38 = (ushort)((uint)(param_3 << 0x16) >> 0x16) | param_2 << 10;
  local_1c = *piVar4;
  local_34.iov_base = &local_39;
  local_2c = &local_38;
  local_39 = 1;
  local_36 = (undefined1)param_4;
  local_34.iov_len = 1;
  local_28 = 3;
  if (param_4 == 0) {
    __count = 2;
  }
  else {
    local_24 = param_5;
    local_20 = param_4;
  }
  do {
    sVar1 = writev(param_1,&local_34,__count);
    if (-1 < sVar1) {
      uVar2 = 0;
      goto LAB_0001bfd0;
    }
    piVar3 = __errno_location();
  } while (*piVar3 == 4 || *piVar3 == 0xb);
  uVar2 = 0xffffffff;
LAB_0001bfd0:
  if (local_1c == *piVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}



/* ===== FUN_0001bff4 @ 0001bff4 size=788 ===== */

void FUN_0001bff4(int param_1,short *param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  ssize_t sVar4;
  byte *__src;
  uint uVar5;
  size_t __n;
  int *piVar6;
  ushort uVar7;
  bool bVar8;
  int local_16c;
  socklen_t local_15c;
  pollfd local_158;
  undefined4 local_150;
  uint local_14c [3];
  undefined1 auStack_140 [16];
  undefined1 uStack_130;
  byte local_12f;
  byte local_12d;
  undefined1 auStack_12c [2];
  byte abStack_12a [254];
  int local_2c;
  
  piVar6 = *(int **)(DAT_0001c308 + 0x1c008 + DAT_0001c30c);
  local_2c = *piVar6;
  local_15c = 0x10;
  uVar7 = param_2[1] & 0x3ffU | *param_2 << 10;
  iVar1 = getsockopt(param_1,0,2,auStack_140,&local_15c);
  if (-1 < iVar1) {
    local_150 = 0x10;
    local_14c[0] = 0xc000;
    local_14c[1] = 0x40000000;
    iVar1 = (int)(*(uint *)(param_2 + 2) << 0x1a) >> 0x1f;
    local_14c[-iVar1] = local_14c[-iVar1] | 1 << (*(uint *)(param_2 + 2) & 0x1f);
    local_14c[2] = (uint)uVar7;
    iVar1 = setsockopt(param_1,0,2,&local_150,0x10);
    if (-1 < iVar1) {
      iVar1 = FUN_0001bf2c(param_1,*param_2,param_2[1],(char)param_2[6],*(undefined4 *)(param_2 + 4)
                          );
      if (-1 < iVar1) {
        local_16c = 0xb;
LAB_0001c2d4:
        do {
          local_16c = local_16c + -1;
          if (local_16c == 0) {
LAB_0001c148:
            piVar3 = __errno_location();
            iVar1 = 0x6e;
LAB_0001c21c:
            *piVar3 = iVar1;
            goto LAB_0001c0e8;
          }
          if (param_3 != 0) {
            local_158.events = 1;
            local_158.fd = param_1;
            while( true ) {
              iVar1 = poll(&local_158,1,param_3);
              if (-1 < iVar1) break;
              piVar3 = __errno_location();
              if (*piVar3 != 4 && *piVar3 != 0xb) goto LAB_0001c0e8;
            }
            if (iVar1 == 0) goto LAB_0001c148;
            param_3 = param_3 - 10 & ~((int)(param_3 - 10) >> 0x1f);
          }
          while (sVar4 = read(param_1,&uStack_130,0x104), sVar4 < 0) {
            piVar3 = __errno_location();
            if (*piVar3 != 4 && *piVar3 != 0xb) goto LAB_0001c0e8;
          }
          uVar5 = (uint)local_12f;
          if (uVar5 == 0xe) {
            if (auStack_12c == (undefined1  [2])uVar7) {
              __src = abStack_12a;
              __n = *(size_t *)(param_2 + 10);
              if ((int)(sVar4 - 6U) < (int)*(size_t *)(param_2 + 10)) {
                __n = sVar4 - 6U;
              }
              *(size_t *)(param_2 + 10) = __n;
              goto LAB_0001c248;
            }
            goto LAB_0001c2d4;
          }
          if (uVar5 < 0xf) {
            if (uVar5 != 7) goto LAB_0001c1a8;
            if (*(int *)(param_2 + 2) != 7) goto LAB_0001c2d4;
            iVar1 = memcmp(auStack_12c,*(void **)(param_2 + 4),6);
            bVar8 = iVar1 == 0;
          }
          else {
            if (uVar5 == 0xf) {
              if (stack0xfffffed5 == uVar7) {
                if (*(int *)(param_2 + 2) == 0xf) break;
                if (local_12d != 0) {
                  piVar3 = __errno_location();
                  iVar1 = 5;
                  goto LAB_0001c21c;
                }
              }
              goto LAB_0001c2d4;
            }
            if (uVar5 == 0x3e) {
              if ((uint)local_12d == *(uint *)(param_2 + 2)) {
                __src = auStack_12c;
                __n = *(size_t *)(param_2 + 10);
                if ((int)(sVar4 - 4U) < (int)*(size_t *)(param_2 + 10)) {
                  __n = sVar4 - 4U;
                }
                *(size_t *)(param_2 + 10) = __n;
                goto LAB_0001c248;
              }
              goto LAB_0001c2d4;
            }
LAB_0001c1a8:
            bVar8 = uVar5 == *(uint *)(param_2 + 2);
          }
        } while (!bVar8);
        __src = &local_12d;
        __n = *(size_t *)(param_2 + 10);
        if ((int)(sVar4 - 3U) < (int)*(size_t *)(param_2 + 10)) {
          __n = sVar4 - 3U;
        }
        *(size_t *)(param_2 + 10) = __n;
LAB_0001c248:
        memcpy(*(void **)(param_2 + 8),__src,__n);
        setsockopt(param_1,0,2,auStack_140,0x10);
        uVar2 = 0;
        goto LAB_0001c270;
      }
LAB_0001c0e8:
      piVar3 = __errno_location();
      iVar1 = *piVar3;
      setsockopt(param_1,0,2,auStack_140,0x10);
      *piVar3 = iVar1;
    }
  }
  uVar2 = 0xffffffff;
LAB_0001c270:
  if (local_2c == *piVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}



/* ===== _DT_FINI @ 0001eff4 size=16 ===== */

void _DT_FINI(void)

{
  return;
}



/* ===== <EXTERNAL>::strcpy @ 00037000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ioctl @ 00037004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::writev @ 00037008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t writev(int __fd,iovec *__iovec,int __count)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 0003700c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 00037014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 00037018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usleep @ 00037024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fgets @ 00037028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 0003702c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::perror @ 00037030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 00037034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00037038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::tcflush @ 0003703c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tcflush(int __fd,int __queue_selector)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::tcsendbreak @ 00037040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tcsendbreak(int __fd,int __duration)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 00037044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sleep @ 00037048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vsnprintf @ 00037050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtoul @ 00037054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::socket @ 00037058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 00037060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__stack_chk_fail @ 00037064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __stack_chk_fail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::alarm @ 00037068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint alarm(uint __seconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtol @ 0003706c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::cfsetispeed @ 00037070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int cfsetispeed(termios *__termios_p,speed_t __speed)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::nanosleep @ 00037074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int nanosleep(timespec *__requested_time,timespec *__remaining)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::write @ 00037078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 0003707c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcat @ 00037080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::bind @ 00037084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vprintf @ 00037088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vprintf(char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0003708c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setsockopt @ 00037090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_registerTMCloneTable @ 00037094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_registerTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::cfsetospeed @ 00037098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int cfsetospeed(termios *__termios_p,speed_t __speed)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strstr @ 000370a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::read @ 000370a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 000370a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 000370ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcasecmp @ 000370b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcasecmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::readdir64 @ 000370b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent64 * readdir64(DIR *__dirp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sigfillset @ 000370b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigfillset(sigset_t *__set)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcmp @ 000370bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fork @ 000370c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t fork(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sscanf @ 000370c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sigaction @ 000370c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigaction(int __sig,sigaction *__act,sigaction *__oact)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fread @ 000370cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_deregisterTMCloneTable @ 000370d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 000370d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strdup @ 000370d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strdup(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt @ 000370dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 000370e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::cfmakeraw @ 000370e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void cfmakeraw(termios *__termios_p)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 000370e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::open64 @ 000370ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::tcgetattr @ 000370f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tcgetattr(int __fd,termios *__termios_p)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::opendir @ 000370f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * opendir(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::poll @ 000370f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int poll(pollfd *__fds,nfds_t __nfds,int __timeout)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 000370fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 00037100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strsep @ 00037108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strsep(char **__stringp,char *__delim)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getsockopt @ 0003710c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t *__optlen)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 00037110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 00037114 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sigdelset @ 00037118 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigdelset(sigset_t *__set,int __signo)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 0003711c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ppoll @ 00037120 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ppoll(pollfd *__fds,nfds_t __nfds,timespec *__timeout,__sigset_t *__ss)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 00037124 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strchr @ 00037128 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 0003712c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::closedir @ 00037130 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int closedir(DIR *__dirp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::tcsetattr @ 00037134 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tcsetattr(int __fd,int __optional_actions,termios *__termios_p)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 00037138 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 0003713c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vfprintf @ 00037140 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 00037144 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen64 @ 00037148 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


