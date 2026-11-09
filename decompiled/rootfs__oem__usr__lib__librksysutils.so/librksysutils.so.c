// librksysutils.so — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00011580 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::strcpy @ 000115a4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_0002600c)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::epoll_create1 @ 000115b0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int epoll_create1(int __flags)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_epoll_create1_00026010)(__flags);
  return iVar1;
}



/* ===== <EXTERNAL>::ioctl @ 000115bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_00026014)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::printf @ 000115c8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00026018)(__format);
  return iVar1;
}



/* ===== read_sysfs_posint @ 000115d4 size=12 ===== */

void read_sysfs_posint(void)

{
  (*(code *)PTR_read_sysfs_posint_0002601c)();
  return;
}



/* ===== <EXTERNAL>::pthread_create @ 000115e0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_00026020)(__newthread);
  return iVar1;
}



/* ===== <EXTERNAL>::epoll_wait @ 000115ec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int epoll_wait(int __epfd,epoll_event *__events,int __maxevents,int __timeout)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_epoll_wait_00026024)(__epfd);
  return iVar1;
}



/* ===== <EXTERNAL>::strerror @ 000115f8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_00026028)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::fscanf @ 00011604 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fscanf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fscanf_0002602c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::fgets @ 00011610 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_fgets_00026030)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::memcpy @ 0001161c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00026034)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::pthread_cancel @ 00011628 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cancel(pthread_t __th)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_cancel_00026038)(__th);
  return iVar1;
}



/* ===== <EXTERNAL>::perror @ 00011634 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
  (*(code *)PTR_perror_0002603c)(__s);
  return;
}



/* ===== <EXTERNAL>::puts @ 00011640 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00026040)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 0001164c size=12 ===== */

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00026044)();
  return;
}



/* ===== <EXTERNAL>::system @ 00011658 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int system(char *__command)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_system_00026048)(__command);
  return iVar1;
}



/* ===== <EXTERNAL>::feof @ 00011664 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int feof(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_feof_0002604c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::malloc @ 00011670 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00026050)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::settimeofday @ 0001167c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int settimeofday(timeval *__tv,timezone *__tz)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_settimeofday_00026054)(__tv);
  return iVar1;
}



/* ===== rk_pwm_unexport @ 00011688 size=12 ===== */

void rk_pwm_unexport(void)

{
  (*(code *)PTR_rk_pwm_unexport_00026058)();
  return;
}



/* ===== <EXTERNAL>::select @ 00011694 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_select_0002605c)(__nfds);
  return iVar1;
}



/* ===== <EXTERNAL>::epoll_ctl @ 000116a0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int epoll_ctl(int __epfd,int __op,int __fd,epoll_event *__event)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_epoll_ctl_00026060)(__epfd);
  return iVar1;
}



/* ===== <EXTERNAL>::calloc @ 000116ac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_00026064)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::write @ 000116b8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_write_00026068)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::fprintf @ 000116c4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_0002606c)(__stream);
  return iVar1;
}



/* ===== write_sysfs_int_and_verify @ 000116d0 size=12 ===== */

void write_sysfs_int_and_verify(void)

{
  (*(code *)PTR_write_sysfs_int_and_verify_00026070)();
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 000116dc size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00026074)();
  return;
}



/* ===== read_sysfs_string @ 000116e8 size=12 ===== */

void read_sysfs_string(void)

{
  (*(code *)PTR_read_sysfs_string_00026078)();
  return;
}



/* ===== <EXTERNAL>::mktime @ 000116f4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t mktime(tm *__tp)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_mktime_0002607c)(__tp);
  return tVar1;
}



/* ===== <EXTERNAL>::strstr @ 00011700 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strstr_00026080)(__haystack);
  return pcVar1;
}



/* ===== <EXTERNAL>::read @ 0001170c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_00026084)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::strncmp @ 00011724 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_0002608c)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::strncpy @ 00011730 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_00026090)(__dest);
  return pcVar1;
}



/* ===== rk_gpio_export @ 0001173c size=12 ===== */

void rk_gpio_export(void)

{
  (*(code *)PTR_rk_gpio_export_00026094)();
  return;
}



/* ===== <EXTERNAL>::readdir64 @ 00011748 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent64 * readdir64(DIR *__dirp)

{
  dirent64 *pdVar1;
  
  pdVar1 = (dirent64 *)(*(code *)PTR_readdir64_00026098)(__dirp);
  return pdVar1;
}



/* ===== <EXTERNAL>::memcmp @ 00011754 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_0002609c)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::sscanf @ 00011760 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sscanf_000260a0)(__s);
  return iVar1;
}



/* ===== write_sysfs_int @ 0001176c size=12 ===== */

void write_sysfs_int(void)

{
  (*(code *)PTR_write_sysfs_int_000260a4)();
  return;
}



/* ===== rk_gpio_set_direction @ 00011778 size=12 ===== */

void rk_gpio_set_direction(void)

{
  (*(code *)PTR_rk_gpio_set_direction_000260a8)();
  return;
}



/* ===== <EXTERNAL>::memset @ 00011784 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_000260ac)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::fclose @ 00011790 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_000260b0)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::open64 @ 0001179c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open64_000260b4)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::opendir @ 000117a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * opendir(char *__name)

{
  DIR *pDVar1;
  
  pDVar1 = (DIR *)(*(code *)PTR_opendir_000260b8)(__name);
  return pDVar1;
}



/* ===== rk_pwm_export @ 000117b4 size=12 ===== */

void rk_pwm_export(void)

{
  (*(code *)PTR_rk_pwm_export_000260bc)();
  return;
}



/* ===== <EXTERNAL>::strcmp @ 000117c0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_000260c0)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::pthread_mutex_unlock @ 000117cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_000260c4)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::sprintf @ 000117d8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_000260c8)(__s);
  return iVar1;
}



/* ===== write_sysfs_string_and_verify @ 000117e4 size=12 ===== */

void write_sysfs_string_and_verify(void)

{
  (*(code *)PTR_write_sysfs_string_and_verify_000260cc)();
  return;
}



/* ===== write_sysfs_string @ 000117f0 size=12 ===== */

void write_sysfs_string(void)

{
  (*(code *)PTR_write_sysfs_string_000260d0)();
  return;
}



/* ===== <EXTERNAL>::access @ 000117fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_access_000260d4)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::pthread_mutex_destroy @ 00011808 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_000260d8)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::pthread_mutex_lock @ 00011814 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_000260dc)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 00011820 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_000260e0)();
  return piVar1;
}



/* ===== rk_gpio_unexport @ 0001182c size=12 ===== */

void rk_gpio_unexport(void)

{
  (*(code *)PTR_rk_gpio_unexport_000260e4)();
  return;
}



/* ===== <EXTERNAL>::pthread_mutex_init @ 00011838 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_000260e8)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::strlen @ 00011844 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_000260ec)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::strchr @ 00011850 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_000260f0)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::fputs @ 0001185c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_000260f4)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::closedir @ 00011868 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int closedir(DIR *__dirp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_closedir_000260f8)(__dirp);
  return iVar1;
}



/* ===== <EXTERNAL>::pthread_join @ 00011874 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_000260fc)(__th);
  return iVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00011880 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00026100)();
  return;
}



/* ===== <EXTERNAL>::close @ 0001188c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_00026104)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 00011898 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00026108)(__ptr);
  return;
}



/* ===== <EXTERNAL>::fopen64 @ 000118a4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen64_0002610c)(__filename);
  return pFVar1;
}



/* ===== entry @ 000118b0 size=72 ===== */

void processEntry entry(void)

{
  code *pcVar1;
  
  if (DAT_000118fc + 0x118c8 == DAT_000118f8 + 0x118c0) {
    return;
  }
  pcVar1 = *(code **)(DAT_00011900 + 0x118d0 + DAT_00011904);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== _FINI_0 @ 0001196c size=112 ===== */

void _FINI_0(void)

{
  int iVar1;
  
  iVar1 = DAT_000119e0 + 0x11988;
  if (*(char *)(DAT_000119dc + 0x1197c) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + DAT_000119e4) != 0) {
    __cxa_finalize(*(undefined4 *)(DAT_000119e8 + 0x119a8));
  }
  entry();
  if (*(int *)(iVar1 + DAT_000119ec) != 0) {
    __deregister_frame_info(DAT_000119f0 + 0x119c8);
  }
  *(undefined1 *)(DAT_000119f4 + 0x119d8) = 1;
  return;
}



/* ===== _INIT_0 @ 000119f8 size=140 ===== */

void _INIT_0(void)

{
  code *pcVar1;
  
  if (*(int *)(DAT_00011a30 + 0x11a08 + DAT_00011a34) != 0) {
    __register_frame_info(DAT_00011a3c + 0x11a28,DAT_00011a38 + 0x11a24);
  }
  if (((DAT_00011960 + 0x11920) - (DAT_0001195c + 0x11918) >> 2) / 2 == 0) {
    return;
  }
  pcVar1 = *(code **)(DAT_00011964 + 0x11928 + DAT_00011968);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== rk_watchdog_stop @ 00011a40 size=196 ===== */

undefined4
rk_watchdog_stop(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ssize_t sVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  void *__buf;
  undefined4 local_c;
  
  if (0 < *(int *)(DAT_00011b04 + 0x11a54)) {
    __buf = *(void **)(DAT_00011b08 + 0x11a58 + DAT_00011b0c);
    local_c = param_4;
    sVar1 = write(*(int *)(DAT_00011b04 + 0x11a54),__buf,1);
    if (sVar1 < 0) {
      piVar2 = __errno_location();
      printf((char *)(DAT_00011b10 + 0x11a90),*piVar2);
    }
    local_c = 1;
    iVar3 = ioctl(*(int *)(DAT_00011b14 + 0x11aac),DAT_00011b18,&local_c,DAT_00011b14,param_1,__buf,
                  param_3);
    if (iVar3 == 0) {
      puts((char *)(DAT_00011b1c + 0x11ac0));
    }
    else {
      piVar2 = __errno_location();
      pcVar4 = strerror(*piVar2);
      printf((char *)(DAT_00011b24 + 0x11b00),pcVar4);
    }
    piVar2 = (int *)(DAT_00011b20 + 0x11acc);
    close(*piVar2);
    *piVar2 = 0;
  }
  return 0;
}



/* ===== rk_watchdog_start @ 00011b28 size=396 ===== */

undefined4 rk_watchdog_start(char *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  char *__format;
  int *piVar3;
  ssize_t sVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined4 local_18;
  char *local_14;
  
  piVar6 = (int *)(DAT_00011cb4 + 0x11b3c);
  iVar7 = DAT_00011cb8 + 0x11b44;
  local_14 = param_1;
  if (*piVar6 == 0) {
    local_18 = param_3;
    iVar1 = open64((char *)(DAT_00011cbc + 0x11b5c),1,param_3,0,param_1,param_2);
    *piVar6 = iVar1;
    if (iVar1 == -1) {
      piVar6 = __errno_location();
      iVar7 = *piVar6;
      uVar5 = 0xffffffff;
      if (iVar7 == 2) {
        pcVar2 = (char *)(DAT_00011cc0 + 0x11b88);
LAB_00011b84:
        puts(pcVar2);
        return 0xffffffff;
      }
      if (iVar7 == 0xd) {
        pcVar2 = (char *)(DAT_00011cc4 + 0x11ba4);
        goto LAB_00011b84;
      }
      pcVar2 = strerror(iVar7);
      __format = (char *)(DAT_00011cc8 + 0x11bb8);
      goto LAB_00011bb4;
    }
  }
  piVar6 = (int *)(DAT_00011ccc + 0x11bd4);
  local_18 = 2;
  iVar1 = ioctl(*piVar6,DAT_00011cd0,&local_18);
  if (iVar1 != 0) {
    piVar3 = __errno_location();
    pcVar2 = strerror(*piVar3);
    printf((char *)(DAT_00011ce0 + 0x11c44),pcVar2);
    sVar4 = write(*piVar6,*(void **)(iVar7 + DAT_00011ce4),1);
    if (sVar4 < 0) {
      printf((char *)(DAT_00011ce8 + 0x11c78),*piVar3);
    }
    piVar6 = (int *)(DAT_00011cec + 0x11c84);
    close(*piVar6);
    *piVar6 = 0;
    return 0xffffffff;
  }
  puts((char *)(DAT_00011cd4 + 0x11bf0));
  uVar5 = 0;
  if ((int)local_14 < 1) {
    return 0;
  }
  iVar7 = ioctl(*piVar6,DAT_00011cd8,&local_14);
  if (iVar7 == 0) {
    __format = (char *)(DAT_00011cdc + 0x11c24);
    pcVar2 = local_14;
  }
  else {
    piVar6 = __errno_location();
    pcVar2 = strerror(*piVar6);
    __format = (char *)((int)&DAT_00011cb4 + DAT_00011cf0);
  }
LAB_00011bb4:
  printf(__format,pcVar2);
  return uVar5;
}



/* ===== rk_watchdog_refresh @ 00011cf4 size=56 ===== */

undefined4 rk_watchdog_refresh(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_c = param_2;
  uStack_8 = param_3;
  iVar1 = ioctl(*(int *)(DAT_00011d2c + 0x11d0c),DAT_00011d30,&uStack_c,DAT_00011d2c,param_1);
  uVar2 = 0;
  if (iVar1 != 0) {
    puts((char *)(DAT_00011d34 + 0x11d20));
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== rk_system_get_time @ 00011d38 size=200 ===== */

undefined4 rk_system_get_time(undefined4 *param_1)

{
  int __fd;
  int iVar1;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  __fd = open64((char *)(DAT_00011e00 + 0x11d54),0);
  if (__fd == -1) {
    perror((char *)(DAT_00011e04 + 0x11d6c));
  }
  else {
    iVar1 = ioctl(__fd,DAT_00011e08,&local_34);
    if (iVar1 == -1) {
      perror((char *)(DAT_00011e0c + 0x11d98));
    }
    else {
      if (param_1 != (undefined4 *)0x0) {
        *param_1 = local_34;
        param_1[1] = local_30;
        param_1[2] = local_2c;
        param_1[3] = local_28;
        param_1[4] = local_24;
        param_1[5] = local_20;
        close(__fd);
        return 0;
      }
      puts((char *)(DAT_00011e10 + 0x11dbc));
    }
    close(__fd);
  }
  return 0xffffffff;
}



/* ===== rk_system_set_time @ 00011e14 size=432 ===== */

undefined4 rk_system_set_time(uint *param_1)

{
  char *pcVar1;
  int __fd;
  int iVar2;
  int *piVar3;
  timeval local_68;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  int local_50;
  int local_4c;
  tm local_3c;
  
  if (param_1 == (uint *)0x0) {
    pcVar1 = (char *)(DAT_00011fc4 + 0x11e30);
  }
  else {
    __fd = open64((char *)(DAT_00011fc8 + 0x11e48),2);
    if (__fd == -1) {
      perror((char *)(DAT_00011fcc + 0x11e60));
      return 0xffffffff;
    }
    local_60 = *param_1;
    local_5c = param_1[1];
    local_4c = param_1[5] - 0x76c;
    local_58 = param_1[2];
    local_54 = param_1[3];
    local_50 = param_1[4] - 1;
    if (local_4c < 1) {
      pcVar1 = (char *)(DAT_00011fd0 + 0x11eb8);
    }
    else if (param_1[4] - 2 < 0xc) {
      if (local_54 - 1 < 0x1f) {
        if (local_58 < 0x18) {
          if (local_5c < 0x3c) {
            if (local_60 < 0x3c) {
              local_3c.tm_isdst = -1;
              local_3c.tm_sec = local_60;
              local_3c.tm_min = local_5c;
              local_3c.tm_hour = local_58;
              local_3c.tm_mday = local_54;
              local_3c.tm_mon = local_50;
              local_3c.tm_year = local_4c;
              local_68.tv_sec = mktime(&local_3c);
              local_68.tv_usec = 0;
              iVar2 = ioctl(__fd,DAT_00011fe8,&local_60);
              if (iVar2 == -1) {
                perror((char *)(DAT_00011fec + 0x11f64));
                close(__fd);
                return 0xffffffff;
              }
              iVar2 = settimeofday(&local_68,(timezone *)0x0);
              if (iVar2 != 0) {
                piVar3 = __errno_location();
                if (*piVar3 == 1) {
                  pcVar1 = (char *)(DAT_00011ff0 + 0x11fa0);
                }
                else {
                  if (*piVar3 != 0x16) goto LAB_00011fa0;
                  pcVar1 = (char *)((int)&DAT_00011fc4 + DAT_00011ff4);
                }
                puts(pcVar1);
              }
LAB_00011fa0:
              close(__fd);
              return 0;
            }
            pcVar1 = (char *)(DAT_00011fe4 + 0x11f10);
          }
          else {
            pcVar1 = (char *)(DAT_00011fe0 + 0x11f00);
          }
        }
        else {
          pcVar1 = (char *)(DAT_00011fdc + 0x11ef0);
        }
      }
      else {
        pcVar1 = (char *)(DAT_00011fd8 + 0x11ee0);
      }
    }
    else {
      pcVar1 = (char *)(DAT_00011fd4 + 0x11ecc);
    }
  }
  puts(pcVar1);
  return 0xffffffff;
}



/* ===== rk_system_get_alarm @ 00011ff8 size=172 ===== */

undefined4 rk_system_get_alarm(undefined4 *param_1)

{
  int __fd;
  int iVar1;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (param_1 == (undefined4 *)0x0) {
    puts((char *)(DAT_000120a4 + 0x12014));
  }
  else {
    __fd = open64((char *)(DAT_000120a8 + 0x12034),0);
    if (__fd == -1) {
      perror((char *)(DAT_000120ac + 0x1204c));
      return 0xffffffff;
    }
    iVar1 = ioctl(__fd,DAT_000120b0,&local_34);
    if (iVar1 != -1) {
      *param_1 = local_34;
      param_1[1] = local_30;
      param_1[2] = local_2c;
      close(__fd);
      return 0;
    }
    perror((char *)(DAT_000120b4 + 0x12070));
    close(__fd);
  }
  return 0xffffffff;
}



/* ===== rk_system_set_alarm @ 000120b8 size=212 ===== */

undefined4 rk_system_set_alarm(uint *param_1)

{
  char *__s;
  int __fd;
  int iVar1;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  if (param_1 == (uint *)0x0) {
    __s = (char *)(DAT_0001218c + 0x120d4);
  }
  else {
    uStack_2c = param_1[2];
    if (uStack_2c < 0x18) {
      uStack_30 = param_1[1];
      if (uStack_30 < 0x3c) {
        uStack_34 = *param_1;
        if (uStack_34 < 0x3c) {
          __fd = open64((char *)(DAT_0001219c + 0x12130),1);
          if (__fd == -1) {
            perror((char *)(DAT_000121a0 + 0x1214c));
            return 0xffffffff;
          }
          iVar1 = ioctl(__fd,DAT_000121a4,&uStack_34);
          if (iVar1 == -1) {
            perror((char *)(DAT_000121a8 + 0x12170));
            close(__fd);
            return 0xffffffff;
          }
          close(__fd);
          return 0;
        }
        __s = (char *)(DAT_00012198 + 0x12120);
      }
      else {
        __s = (char *)(DAT_00012194 + 0x1210c);
      }
    }
    else {
      __s = (char *)(DAT_00012190 + 0x120f8);
    }
  }
  puts(__s);
  return 0xffffffff;
}



/* ===== rk_system_enable_alarm @ 000121ac size=120 ===== */

undefined4 rk_system_enable_alarm(void)

{
  int __fd;
  int iVar1;
  undefined4 uVar2;
  
  __fd = open64((char *)(DAT_00012224 + 0x121c0),2);
  if (__fd == -1) {
    perror((char *)(DAT_00012228 + 0x121d8));
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = ioctl(__fd,0x7001,0);
    if (iVar1 == -1) {
      perror((char *)(DAT_0001222c + 0x12204));
      close(__fd);
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = 0;
      close(__fd);
    }
  }
  return uVar2;
}



/* ===== rk_system_disable_alarm @ 00012230 size=120 ===== */

undefined4 rk_system_disable_alarm(void)

{
  int __fd;
  int iVar1;
  undefined4 uVar2;
  
  __fd = open64((char *)(DAT_000122a8 + 0x12244),2);
  if (__fd == -1) {
    perror((char *)(DAT_000122ac + 0x1225c));
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = ioctl(__fd,0x7002,0);
    if (iVar1 == -1) {
      perror((char *)(DAT_000122b0 + 0x12288));
      close(__fd);
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = 0;
      close(__fd);
    }
  }
  return uVar2;
}



/* ===== rk_system_wait_alarm @ 000122b4 size=296 ===== */

undefined4 rk_system_wait_alarm(int param_1)

{
  uint __fd;
  char *__s;
  int *piVar1;
  __fd_mask *p_Var2;
  int iVar3;
  timeval local_98;
  uint auStack_90 [33];
  
  __fd = open64((char *)(DAT_000123dc + 0x122d0),2);
  if (__fd == 0xffffffff) {
    perror((char *)(DAT_000123e0 + 0x122e8));
    return 0xffffffff;
  }
  iVar3 = 0;
  p_Var2 = (__fd_mask *)auStack_90;
  do {
    iVar3 = iVar3 + 1;
    *p_Var2 = 0;
    p_Var2 = p_Var2 + 1;
  } while (iVar3 != 0x20);
  auStack_90[__fd >> 5] = auStack_90[__fd >> 5] | 1 << (__fd & 0x1f);
  if (param_1 == 0) {
    __s = (char *)(DAT_000123e4 + 0x12348);
  }
  else {
    local_98.tv_usec = 0;
    local_98.tv_sec = param_1;
    iVar3 = select(__fd + 1,(fd_set *)auStack_90,(fd_set *)0x0,(fd_set *)0x0,&local_98);
    if (iVar3 < 0) {
      piVar1 = __errno_location();
      if (*piVar1 != 4) goto LAB_00012348;
      __s = (char *)(DAT_000123e8 + 0x1239c);
    }
    else {
      if (iVar3 != 0) {
        if (iVar3 == 1) {
          puts((char *)(DAT_000123f0 + 0x123cc));
        }
        close(__fd);
        return 0;
      }
      piVar1 = __errno_location();
      *piVar1 = 0x6e;
      __s = (char *)(DAT_000123ec + 0x123b8);
    }
  }
  puts(__s);
LAB_00012348:
  close(__fd);
  return 0xffffffff;
}



/* ===== iio_find_type_by_name @ 000123f4 size=700 ===== */

int iio_find_type_by_name(char *param_1,char *param_2)

{
  DIR *__dirp;
  dirent64 *pdVar1;
  int *piVar2;
  int iVar3;
  size_t sVar4;
  size_t __n;
  char *pcVar5;
  FILE *__stream;
  char *__s2;
  int iVar6;
  int iVar7;
  int local_4c;
  char acStack_48 [36];
  
  iVar7 = DAT_000126b4;
  __dirp = opendir((char *)(DAT_000126b0 + 0x12414));
  iVar7 = iVar7 + 0x1241c;
  if (__dirp == (DIR *)0x0) {
    fputs((char *)(DAT_000126c0 + 0x1246c),(FILE *)**(undefined4 **)(iVar7 + DAT_000126bc));
LAB_00012470:
    local_4c = -0x13;
  }
  else {
    __s2 = (char *)(DAT_000126b8 + 0x1242c);
    do {
      while( true ) {
        do {
          do {
            do {
              pdVar1 = readdir64(__dirp);
              if (pdVar1 == (dirent64 *)0x0) {
                iVar7 = closedir(__dirp);
                if (iVar7 != -1) goto LAB_00012470;
                piVar2 = __errno_location();
                local_4c = *piVar2;
                goto LAB_00012698;
              }
              pcVar5 = pdVar1->d_name;
              iVar3 = strcmp(pcVar5,__s2);
            } while ((iVar3 == 0) ||
                    (iVar3 = strcmp(pcVar5,(char *)(DAT_000126c4 + 0x124a0)), iVar3 == 0));
            sVar4 = strlen(pcVar5);
            __n = strlen(param_2);
          } while ((sVar4 <= __n) || (iVar3 = strncmp(pcVar5,param_2,__n), iVar3 != 0));
          piVar2 = __errno_location();
          *piVar2 = 0;
          sVar4 = strlen(param_2);
          iVar3 = sscanf(pcVar5 + sVar4,(char *)(DAT_000126c8 + 0x12500),&local_4c);
          if (iVar3 < 0) {
            iVar3 = -*piVar2;
            fputs((char *)(DAT_000126cc + 0x12524),(FILE *)**(undefined4 **)(iVar7 + DAT_000126bc));
            goto LAB_0001252c;
          }
          if (iVar3 != 1) {
            iVar3 = -5;
            fputs((char *)(DAT_000126d4 + 0x1256c),(FILE *)**(undefined4 **)(iVar7 + DAT_000126bc));
            goto LAB_0001252c;
          }
          iVar3 = 0;
          for (iVar6 = local_4c; iVar6 != 0;
              iVar6 = (int)((longlong)iVar6 * (longlong)DAT_000126e0 >> 0x22) - (iVar6 >> 0x1f)) {
            iVar3 = iVar3 + 1;
          }
          sVar4 = strlen(param_2);
        } while (pcVar5[iVar3 + sVar4] == ':');
        pcVar5 = malloc(iVar3 + sVar4 + 0x1b);
        if (pcVar5 == (char *)0x0) {
          iVar3 = -0xc;
          goto LAB_0001252c;
        }
        iVar3 = sprintf(pcVar5,(char *)(DAT_000126dc + 0x125c8),DAT_000126d8 + 0x125c0,param_2,
                        local_4c);
        if (iVar3 < 0) {
          free(pcVar5);
          goto LAB_0001252c;
        }
        __stream = fopen64(pcVar5,(char *)(DAT_000126e4 + 0x12604));
        if (__stream != (FILE *)0x0) break;
        free(pcVar5);
      }
      free(pcVar5);
      iVar3 = DAT_000126e8;
      *piVar2 = 0;
      iVar3 = fscanf(__stream,(char *)(iVar3 + 0x12638),acStack_48);
      if (iVar3 != 1) {
        iVar3 = *piVar2;
        if (iVar3 == 0) {
          iVar3 = -0x3d;
          goto LAB_0001252c;
        }
LAB_00012650:
        iVar3 = -iVar3;
LAB_0001252c:
        iVar7 = closedir(__dirp);
        if (iVar7 != -1) {
          return iVar3;
        }
        perror((char *)(DAT_000126d0 + 0x12548));
        return iVar3;
      }
      iVar3 = fclose(__stream);
      if (iVar3 != 0) {
        iVar3 = *piVar2;
        goto LAB_00012650;
      }
      iVar3 = strcmp(param_1,acStack_48);
    } while (iVar3 != 0);
    iVar7 = closedir(__dirp);
    if (iVar7 == -1) {
      local_4c = *piVar2;
LAB_00012698:
      local_4c = -local_4c;
    }
  }
  return local_4c;
}



/* ===== rk_chip_id_get @ 000126ec size=244 ===== */

undefined4 rk_chip_id_get(char *param_1)

{
  FILE *__stream;
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  char *__needle;
  char acStack_118 [256];
  
  memset(acStack_118,0,0x100);
  __stream = fopen64((char *)(DAT_000127e4 + 0x12720),(char *)(DAT_000127e0 + 0x1271c));
  if (__stream == (FILE *)0x0) {
    puts((char *)(DAT_000127f0 + 0x12764));
LAB_00012764:
    uVar3 = 0xffffffff;
  }
  else {
    __needle = (char *)(DAT_000127e8 + 0x12734);
    do {
      iVar1 = feof(__stream);
      if (iVar1 != 0) {
        puts((char *)(DAT_000127ec + 0x1274c));
        fclose(__stream);
        goto LAB_00012764;
      }
      memset(acStack_118,0,0x100);
      fgets(acStack_118,0xff,__stream);
      pcVar2 = strstr(acStack_118,__needle);
    } while ((pcVar2 == (char *)0x0) || (pcVar2 = strchr(acStack_118,0x3a), pcVar2 == (char *)0x0));
    if (param_1 != (char *)0x0) {
      strncpy(param_1,pcVar2 + 2,0x40);
    }
    fclose(__stream);
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== rk_vendor_read @ 000127f4 size=268 ===== */

undefined4 rk_vendor_read(undefined2 param_1,void *param_2,int param_3)

{
  int __fd;
  size_t sVar1;
  char *__format;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_428;
  undefined2 local_424;
  ushort local_422;
  char acStack_420 [1024];
  
  iVar3 = DAT_00012900;
  memset(&local_428,0,0x408);
  iVar3 = iVar3 + 0x12838;
  __fd = open64((char *)(DAT_00012904 + 0x1283c),0);
  if (__fd < 0) {
    fputs((char *)(DAT_0001290c + 0x12858),(FILE *)**(undefined4 **)(iVar3 + DAT_00012908));
  }
  else {
    local_428 = DAT_00012910;
    local_422 = 0x400;
    local_424 = param_1;
    sVar1 = ioctl(__fd,DAT_00012914,&local_428);
    close(__fd);
    if (sVar1 == 0) {
      if ((int)(uint)local_422 <= param_3) {
        memcpy(param_2,acStack_420,(uint)local_422);
        return 0;
      }
      sVar1 = strlen(acStack_420);
      puVar2 = *(undefined4 **)(iVar3 + DAT_00012908);
      __format = (char *)(DAT_0001291c + 0x128ec);
    }
    else {
      puVar2 = *(undefined4 **)(iVar3 + DAT_00012908);
      __format = (char *)(DAT_00012918 + 0x128bc);
    }
    fprintf((FILE *)*puVar2,__format,sVar1);
  }
  return 0xffffffff;
}



/* ===== rk_vendor_write @ 00012920 size=232 ===== */

undefined4 rk_vendor_write(undefined2 param_1,void *param_2,uint param_3)

{
  char *__s;
  int __fd;
  int iVar1;
  FILE *__stream;
  int iVar2;
  undefined4 local_428;
  undefined2 local_424;
  undefined2 local_422;
  undefined1 auStack_420 [1028];
  
  iVar2 = DAT_00012a08 + 0x1293c;
  if ((int)param_3 < 0x401) {
    __fd = open64((char *)(DAT_00012a14 + 0x12988),2,0);
    if (__fd < 0) {
      __s = (char *)(DAT_00012a18 + 0x129a4);
      __stream = (FILE *)**(undefined4 **)(iVar2 + DAT_00012a0c);
    }
    else {
      local_422 = (undefined2)param_3;
      local_428 = DAT_00012a1c;
      local_424 = param_1;
      memcpy(auStack_420,param_2,param_3 & 0xffff);
      iVar1 = ioctl(__fd,DAT_00012a20,&local_428);
      close(__fd);
      if (iVar1 == 0) {
        return 0;
      }
      __s = (char *)(DAT_00012a24 + 0x12a04);
      __stream = (FILE *)**(undefined4 **)(iVar2 + DAT_00012a0c);
    }
  }
  else {
    __s = (char *)(DAT_00012a10 + 0x12950);
    __stream = (FILE *)**(undefined4 **)(iVar2 + DAT_00012a0c);
  }
  fputs(__s,__stream);
  return 0xffffffff;
}



/* ===== rk_system_reboot @ 00012a28 size=44 ===== */

undefined4 rk_system_reboot(void)

{
  int iVar1;
  
  iVar1 = system((char *)(DAT_00012a54 + 0x12a38));
  if (iVar1 == 0) {
    return 0;
  }
  puts((char *)(DAT_00012a58 + 0x12a4c));
  return 0xffffffff;
}



/* ===== rk_system_suspend @ 00012a5c size=356 ===== */

int rk_system_suspend(int param_1)

{
  FILE *__stream;
  FILE *__stream_00;
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar1 = (char *)(DAT_00012bc0 + 0x12a74);
  pcVar3 = (char *)(DAT_00012bc4 + 0x12a7c);
  iVar2 = DAT_00012bc8 + 0x12a84;
  __stream = fopen64(pcVar3,pcVar1);
  if (__stream == (FILE *)0x0) {
    fprintf((FILE *)**(undefined4 **)(iVar2 + DAT_00012bcc),(char *)(DAT_00012bd0 + 0x12aa8),pcVar3)
    ;
  }
  else {
    if (param_1 == 0) {
      iVar2 = fprintf(__stream,(char *)(DAT_00012bdc + 0x12ae8),DAT_00012bd8 + 0x12ae4);
      if (-1 < iVar2) goto LAB_00012ba8;
      puts((char *)(DAT_00012be0 + 0x12afc));
    }
    else {
      if (param_1 != 1) {
        puts((char *)(DAT_00012bd4 + 0x12ad0));
LAB_00012ba8:
        iVar2 = fclose(__stream);
        return -(uint)(iVar2 != 0);
      }
      pcVar3 = (char *)(DAT_00012be4 + 0x12b18);
      __stream_00 = fopen64(pcVar3,pcVar1);
      if (__stream_00 == (FILE *)0x0) {
        fprintf((FILE *)**(undefined4 **)(iVar2 + DAT_00012bcc),(char *)(DAT_00012be8 + 0x12b3c),
                pcVar3);
      }
      else {
        pcVar1 = (char *)(DAT_00012bec + 0x12b54);
        iVar2 = fprintf(__stream_00,pcVar1,DAT_00012bf0 + 0x12b58);
        if (iVar2 < 0) {
          pcVar1 = (char *)(DAT_00012bf4 + 0x12b70);
        }
        else {
          iVar2 = fprintf(__stream,pcVar1,DAT_00012bf8 + 0x12b90);
          if (-1 < iVar2) {
            fclose(__stream_00);
            goto LAB_00012ba8;
          }
          pcVar1 = (char *)(DAT_00012bfc + 0x12ba0);
        }
        puts(pcVar1);
        fclose(__stream_00);
      }
    }
    fclose(__stream);
  }
  return -1;
}



/* ===== rk_system_shutdown @ 00012c00 size=44 ===== */

undefined4 rk_system_shutdown(void)

{
  int iVar1;
  
  iVar1 = system((char *)(DAT_00012c2c + 0x12c10));
  if (iVar1 == 0) {
    return 0;
  }
  puts((char *)(DAT_00012c30 + 0x12c24));
  return 0xffffffff;
}



/* ===== rk_adc_get_devnum @ 00012c34 size=24 ===== */

void rk_adc_get_devnum(undefined4 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00011720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_iio_find_type_by_name_00026088)(param_1,(int)&DAT_00012c40 + DAT_00012c40);
  return;
}



/* ===== rk_adc_get_value @ 00012c44 size=96 ===== */

void rk_adc_get_value(undefined4 param_1,undefined4 param_2)

{
  char acStack_70 [32];
  char acStack_50 [68];
  
  sprintf(acStack_50,(char *)(DAT_00012cac + 0x12c74),DAT_00012ca8 + 0x12c70,DAT_00012ca4 + 0x12c68,
          param_1);
  sprintf(acStack_70,(char *)(DAT_00012cb0 + 0x12c8c),param_2);
  read_sysfs_posint(acStack_70,acStack_50);
  return;
}



/* ===== rk_gpio_export @ 00012cb4 size=128 ===== */

undefined4 rk_gpio_export(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char acStack_58 [68];
  
  iVar3 = DAT_00012d34 + 0x12cd4;
  sprintf(acStack_58,(char *)(DAT_00012d38 + 0x12cdc),iVar3,param_1);
  iVar1 = access(acStack_58,0);
  if (iVar1 == 0) {
    printf((char *)(DAT_00012d3c + 0x12d0c),param_1,acStack_58);
    uVar2 = 0;
  }
  else {
    uVar2 = write_sysfs_int(DAT_00012d40 + 0x12d2c,iVar3,param_1);
  }
  return uVar2;
}



/* ===== rk_gpio_unexport @ 00012d44 size=24 ===== */

void rk_gpio_unexport(undefined4 param_1)

{
  write_sysfs_int((int)&DAT_00012d5c + DAT_00012d60,DAT_00012d5c + 0x12d58,param_1);
  return;
}



/* ===== rk_gpio_set_direction @ 00012d64 size=96 ===== */

void rk_gpio_set_direction(undefined4 param_1,int param_2)

{
  int iVar1;
  char acStack_50 [68];
  
  if (param_2 == 0) {
    iVar1 = DAT_00012dc4 + 0x12d84;
  }
  else {
    iVar1 = (int)&DAT_00012dc4 + DAT_00012dd4;
  }
  sprintf(acStack_50,(char *)(DAT_00012dcc + 0x12d9c),DAT_00012dc8 + 0x12d98,param_1);
  write_sysfs_string_and_verify(DAT_00012dd0 + 0x12db0,acStack_50,iVar1);
  return;
}



/* ===== rk_gpio_get_direction @ 00012dd8 size=108 ===== */

int rk_gpio_get_direction(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_60 [16];
  char acStack_50 [68];
  
  sprintf(acStack_50,(char *)(DAT_00012e48 + 0x12e00),DAT_00012e44 + 0x12df8,param_1);
  iVar1 = read_sysfs_string(DAT_00012e4c + 0x12e18,acStack_50,auStack_60);
  if ((-1 < iVar1) &&
     (iVar2 = memcmp(auStack_60,(void *)(DAT_00012e50 + 0x12e34),4), iVar1 = 0, iVar2 != 0)) {
    iVar1 = 1;
  }
  return iVar1;
}



/* ===== rk_gpio_export_direction @ 00012e54 size=60 ===== */

int rk_gpio_export_direction(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = rk_gpio_export();
  if ((-1 < iVar1) && (iVar1 = rk_gpio_set_direction(param_1,param_2), iVar1 < 0)) {
    rk_gpio_unexport(param_1);
  }
  return iVar1;
}



/* ===== rk_gpio_set_value @ 00012e90 size=168 ===== */

int rk_gpio_set_value(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char local_58 [4];
  undefined4 uStack_54;
  char local_50 [4];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
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
  
  uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_50[0] = '\0';
  local_50[1] = '\0';
  local_50[2] = '\0';
  local_50[3] = '\0';
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_58[0] = '\0';
  local_58[1] = '\0';
  local_58[2] = '\0';
  local_58[3] = '\0';
  uStack_4c = uStack_54;
  uStack_3c = uStack_54;
  uStack_34 = uStack_54;
  uStack_2c = uStack_54;
  uStack_24 = uStack_54;
  uStack_1c = uStack_54;
  uStack_14 = uStack_54;
  sprintf(local_50,(char *)(DAT_00012f3c + 0x12ec0),DAT_00012f38 + 0x12eb8,param_1);
  iVar1 = read_sysfs_string(DAT_00012f40 + 0x12ef8,local_50,local_58);
  if (-1 < iVar1) {
    iVar1 = strcmp(local_58,(char *)(DAT_00012f44 + 0x12f10));
    if (iVar1 == 0) {
      iVar1 = write_sysfs_int_and_verify(DAT_00012f48 + 0x12f30,local_50,param_2);
    }
    else {
      iVar1 = -0x16;
    }
  }
  return iVar1;
}



/* ===== rk_gpio_get_value @ 00012f4c size=64 ===== */

void rk_gpio_get_value(undefined4 param_1)

{
  char acStack_48 [64];
  
  sprintf(acStack_48,(char *)(DAT_00012f90 + 0x12f74),DAT_00012f8c + 0x12f6c,param_1);
  read_sysfs_posint(DAT_00012f94 + 0x12f84,acStack_48);
  return;
}



/* ===== rk_pwm_export @ 00012f98 size=156 ===== */

undefined4 rk_pwm_export(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  char acStack_98 [64];
  char acStack_58 [68];
  
  iVar2 = DAT_00013034 + 0x12fb8;
  sprintf(acStack_98,(char *)(DAT_00013038 + 0x12fc0),iVar2,param_1);
  sprintf(acStack_58,(char *)(DAT_0001303c + 0x12fe0),iVar2,param_1);
  iVar2 = access(acStack_58,0);
  if (iVar2 == 0) {
    printf((char *)(DAT_00013040 + 0x1300c),param_1,acStack_58);
    uVar1 = 0;
  }
  else {
    uVar1 = write_sysfs_int(DAT_00013044 + 0x1302c,acStack_98,0);
  }
  return uVar1;
}



/* ===== rk_pwm_unexport @ 00013048 size=68 ===== */

void rk_pwm_unexport(undefined4 param_1)

{
  char acStack_48 [64];
  
  sprintf(acStack_48,(char *)(DAT_00013090 + 0x13070),DAT_0001308c + 0x13068,param_1);
  write_sysfs_int(DAT_00013094 + 0x13084,acStack_48,0);
  return;
}



/* ===== rk_pwm_set_duty @ 00013098 size=72 ===== */

void rk_pwm_set_duty(undefined4 param_1,undefined4 param_2)

{
  char acStack_50 [68];
  
  sprintf(acStack_50,(char *)(DAT_000130e4 + 0x130c0),DAT_000130e0 + 0x130bc,param_1);
  write_sysfs_int(DAT_000130e8 + 0x130d8,acStack_50,param_2);
  return;
}



/* ===== rk_pwm_get_duty @ 000130ec size=64 ===== */

void rk_pwm_get_duty(undefined4 param_1)

{
  char acStack_48 [64];
  
  sprintf(acStack_48,(char *)(DAT_00013130 + 0x13114),DAT_0001312c + 0x1310c,param_1);
  read_sysfs_posint(DAT_00013134 + 0x13124,acStack_48);
  return;
}



/* ===== rk_pwm_set_period @ 00013138 size=72 ===== */

void rk_pwm_set_period(undefined4 param_1,undefined4 param_2)

{
  char acStack_50 [68];
  
  sprintf(acStack_50,(char *)(DAT_00013184 + 0x13160),DAT_00013180 + 0x1315c,param_1);
  write_sysfs_int(DAT_00013188 + 0x13178,acStack_50,param_2);
  return;
}



/* ===== rk_pwm_get_period @ 0001318c size=64 ===== */

void rk_pwm_get_period(undefined4 param_1)

{
  char acStack_48 [64];
  
  sprintf(acStack_48,(char *)(DAT_000131d0 + 0x131b4),DAT_000131cc + 0x131ac,param_1);
  read_sysfs_posint(DAT_000131d4 + 0x131c4,acStack_48);
  return;
}



/* ===== rk_pwm_set_polarity @ 000131d8 size=112 ===== */

undefined4 rk_pwm_set_polarity(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  char acStack_50 [68];
  
  if (param_2 < 2) {
    sprintf(acStack_50,(char *)(DAT_0001324c + 0x13208),DAT_00013248 + 0x13204,param_1);
    if (param_2 == 0) {
      iVar2 = DAT_00013258 + 0x13240;
    }
    else {
      iVar2 = DAT_00013250 + 0x13220;
    }
    uVar1 = write_sysfs_string_and_verify(DAT_00013254 + 0x1322c,acStack_50,iVar2);
    return uVar1;
  }
  return 0xffffffea;
}



/* ===== rk_pwm_get_polarity @ 0001325c size=108 ===== */

uint rk_pwm_get_polarity(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_60 [16];
  char acStack_50 [68];
  
  sprintf(acStack_50,(char *)(DAT_000132cc + 0x13284),DAT_000132c8 + 0x1327c,param_1);
  uVar1 = read_sysfs_string(DAT_000132d0 + 0x1329c,acStack_50,auStack_60);
  if (-1 < (int)uVar1) {
    iVar2 = memcmp(auStack_60,(void *)(DAT_000132d4 + 0x132b8),9);
    uVar1 = (uint)(iVar2 == 0);
  }
  return uVar1;
}



/* ===== rk_pwm_set_enable @ 000132d8 size=72 ===== */

void rk_pwm_set_enable(undefined4 param_1,undefined4 param_2)

{
  char acStack_50 [68];
  
  sprintf(acStack_50,(char *)(DAT_00013324 + 0x13300),DAT_00013320 + 0x132fc,param_1);
  write_sysfs_int_and_verify(DAT_00013328 + 0x13318,acStack_50,param_2);
  return;
}



/* ===== rk_pwm_get_enable @ 0001332c size=64 ===== */

void rk_pwm_get_enable(undefined4 param_1)

{
  char acStack_48 [64];
  
  sprintf(acStack_48,(char *)(DAT_00013370 + 0x13354),DAT_0001336c + 0x1334c,param_1);
  read_sysfs_posint(DAT_00013374 + 0x13364,acStack_48);
  return;
}



/* ===== rk_pwm_init @ 00013378 size=216 ===== */

int rk_pwm_init(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  char acStack_60 [68];
  
  if (param_4 < 2) {
    sprintf(acStack_60,(char *)(DAT_00013454 + 0x133b4),DAT_00013450 + 0x133ac,param_1);
    iVar1 = rk_pwm_export(param_1);
    if (-1 < iVar1) {
      iVar1 = write_sysfs_int(DAT_00013458 + 0x133e0,acStack_60,param_2);
      if ((-1 < iVar1) &&
         (iVar1 = write_sysfs_int(DAT_0001345c + 0x133fc,acStack_60,param_3), -1 < iVar1)) {
        if (param_4 == 0) {
          iVar1 = (int)&DAT_00013450 + DAT_00013468;
        }
        else {
          iVar1 = DAT_00013460 + 0x13418;
        }
        iVar1 = write_sysfs_string_and_verify(DAT_00013464 + 0x13424,acStack_60,iVar1);
        if (-1 < iVar1) {
          return 0;
        }
      }
      rk_pwm_unexport(param_1);
    }
  }
  else {
    iVar1 = -0x16;
  }
  return iVar1;
}



/* ===== rk_pwm_deinit @ 0001346c size=40 ===== */

int rk_pwm_deinit(void)

{
  int iVar1;
  
  iVar1 = rk_pwm_unexport();
  if (iVar1 < 0) {
    puts((char *)(DAT_00013494 + 0x1348c));
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== rk_led_set_mode @ 00013498 size=292 ===== */

int rk_led_set_mode(int param_1,int param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  char acStack_60 [68];
  
  pcVar2 = (char *)(DAT_000135bc + 0x134b8);
  iVar1 = access(pcVar2,0);
  if (iVar1 == 0) {
    if (param_1 == 0) {
      pcVar2 = (char *)(DAT_000135c4 + 0x134f4);
    }
    else {
      iVar1 = sprintf(acStack_60,(char *)(DAT_000135c8 + 0x1350c),pcVar2,param_1);
      if (iVar1 < 0) {
        return iVar1;
      }
      iVar1 = write_sysfs_int(DAT_000135cc + 0x13530,acStack_60,param_3);
      if (iVar1 < 0) {
        pcVar2 = (char *)(DAT_000135d0 + 0x13540);
      }
      else {
        if (param_3 == 0) {
          return 0;
        }
        if (param_2 == 0) {
          iVar1 = DAT_000135d4 + 0x1355c;
        }
        else {
          iVar1 = DAT_000135e0 + 0x13588;
        }
        iVar1 = write_sysfs_string(DAT_000135d8 + 0x13568,acStack_60,iVar1);
        if (-1 < iVar1) {
          if (param_2 != 0) {
            return 0;
          }
          iVar1 = write_sysfs_int(DAT_000135e4 + 0x135a4,acStack_60,param_3);
          if (-1 < iVar1) {
            return 0;
          }
          puts((char *)(DAT_000135e8 + 0x135b8));
          return 0;
        }
        pcVar2 = (char *)(DAT_000135dc + 0x1357c);
      }
    }
  }
  else {
    pcVar2 = (char *)(DAT_000135c0 + 0x134d4);
  }
  puts(pcVar2);
  return -1;
}



/* ===== FUN_000135ec @ 000135ec size=232 ===== */

undefined4 FUN_000135ec(void)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  undefined1 auStack_38 [8];
  short local_30;
  short local_2e;
  int local_2c;
  
  piVar9 = (int *)(DAT_000136d4 + 0x13608);
  piVar10 = (int *)(DAT_000136d8 + 0x13610);
  iVar7 = DAT_000136dc + 0x13614;
  piVar3 = (int *)(DAT_000136e0 + 0x13618);
  while (*piVar3 == 0) {
    piVar8 = *(int **)(iVar7 + DAT_000136e4);
    iVar1 = epoll_wait(*piVar10,(epoll_event *)*piVar8,*(int *)(*piVar9 + 8),-1);
    for (iVar6 = 0; iVar6 < iVar1; iVar6 = iVar6 + 1) {
      iVar4 = *piVar8;
      if ((*(uint *)(iVar4 + iVar6 * 0x10) & 1) != 0) {
        while (sVar2 = read(*(int *)(iVar4 + iVar6 * 0x10 + 8),auStack_38,0x10), 0 < sVar2) {
          if (((local_2c != 0) || (local_30 != 0 || local_2e != 0)) &&
             (pcVar5 = (code *)**(undefined4 **)(iVar7 + DAT_000136e8), pcVar5 != (code *)0x0)) {
            (*pcVar5)(auStack_38);
          }
        }
      }
    }
  }
  return 0;
}



/* ===== rk_event_register @ 000136ec size=620 ===== */

undefined4 rk_event_register(char *param_1)

{
  char *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  epoll_event *__event;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  iVar7 = DAT_0001395c + 0x13708;
  if (*(int *)(DAT_00013958 + 0x136fc) == 0) {
    if (param_1 == (char *)0x0) {
      pcVar1 = (char *)(DAT_00013964 + 0x13730);
    }
    else {
      if (*(int *)(DAT_00013968 + 0x1373c) < 0) {
        piVar6 = (int *)(DAT_0001396c + 0x13754);
        iVar5 = *piVar6;
        pthread_mutex_init((pthread_mutex_t *)(DAT_00013970 + 0x13758),(pthread_mutexattr_t *)0x0);
        if (iVar5 == 0) {
          puVar2 = malloc(0xc);
          *piVar6 = (int)puVar2;
          if (puVar2 == (undefined4 *)0x0) {
            pcVar1 = (char *)(DAT_00013974 + 0x1378c);
            goto LAB_00013710;
          }
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2[2] = 0;
        }
        iVar5 = epoll_create1(0x80000);
        *(int *)(DAT_00013978 + 0x137a0) = iVar5;
        if (iVar5 < 0) {
          pcVar1 = (char *)(DAT_0001397c + 0x137b0);
          goto LAB_00013710;
        }
      }
      for (iVar5 = **(int **)(DAT_00013980 + 0x137bc); iVar5 != 0; iVar5 = *(int *)(iVar5 + 8)) {
        iVar3 = strcmp(param_1,*(char **)(iVar5 + 4));
        if (iVar3 == 0) {
          pcVar1 = (char *)(DAT_00013984 + 0x137e4);
          goto LAB_00013710;
        }
      }
      piVar6 = malloc(0xc);
      if (piVar6 != (int *)0x0) {
        *piVar6 = 0;
        piVar6[2] = 0;
        pcVar1 = malloc(0x80);
        piVar6[1] = (int)pcVar1;
        if (pcVar1 == (char *)0x0) {
          puts((char *)(DAT_0001398c + 0x13834));
        }
        else {
          memset(pcVar1,0,0x80);
          strcpy(pcVar1,param_1);
          iVar5 = open64(param_1,0x800);
          *piVar6 = iVar5;
          if (iVar5 < 0) {
            printf((char *)(DAT_00013990 + 0x13884),param_1);
            if ((void *)piVar6[1] != (void *)0x0) {
              free((void *)piVar6[1]);
            }
          }
          else {
            __event = *(epoll_event **)(iVar7 + DAT_00013994);
            (__event->data).fd = iVar5;
            iVar7 = DAT_00013998;
            __event->events = 0x80000001;
            iVar7 = epoll_ctl(*(int *)(iVar7 + 0x138bc),1,iVar5,__event);
            if (iVar7 != -1) {
              piVar4 = *(int **)(DAT_000139a0 + 0x13910);
              iVar7 = piVar4[2];
              if (iVar7 == 0) {
                if (*piVar4 == 0) {
                  piVar4[1] = (int)piVar6;
                  *piVar4 = (int)piVar6;
                  piVar4[2] = 1;
                }
                return 0;
              }
              if (0 < iVar7) {
                *(int **)(piVar4[1] + 8) = piVar6;
                piVar4[2] = iVar7 + 1;
                piVar4[1] = (int)piVar6;
              }
              return 0;
            }
            piVar4 = __errno_location();
            pcVar1 = strerror(*piVar4);
            printf((char *)(DAT_0001399c + 0x138e4),pcVar1);
            if ((void *)piVar6[1] != (void *)0x0) {
              free((void *)piVar6[1]);
              piVar6[1] = 0;
            }
            close(*piVar6);
          }
        }
        free(piVar6);
        return 0xffffffff;
      }
      pcVar1 = (char *)(DAT_00013988 + 0x13804);
    }
  }
  else {
    pcVar1 = (char *)(DAT_00013960 + 0x13714);
  }
LAB_00013710:
  puts(pcVar1);
  return 0xffffffff;
}



/* ===== rk_event_unregister @ 000139a4 size=312 ===== */

undefined4 rk_event_unregister(char *param_1)

{
  int iVar1;
  epoll_event *__event;
  int *__ptr;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  
  iVar2 = DAT_00013adc + 0x139b8;
  if (param_1 == (char *)0x0) {
    uVar5 = 0xffffffff;
    puts((char *)(DAT_00013ae0 + 0x139c8));
  }
  else {
    if ((int *)**(undefined4 **)(DAT_00013ae4 + 0x139dc) != (int *)0x0) {
      piVar3 = (int *)**(undefined4 **)(DAT_00013ae4 + 0x139dc);
      piVar4 = (int *)0x0;
      do {
        __ptr = piVar3;
        iVar1 = strcmp(param_1,(char *)__ptr[1]);
        if (iVar1 == 0) {
          pthread_mutex_lock((pthread_mutex_t *)(DAT_00013aec + 0x13a34));
          iVar1 = *__ptr;
          __event = *(epoll_event **)(iVar2 + DAT_00013af0);
          iVar2 = *(int *)(DAT_00013af4 + 0x13a50);
          __event->events = 1;
          (__event->data).fd = iVar1;
          epoll_ctl(iVar2,2,iVar1,__event);
          close(*__ptr);
          piVar3 = *(int **)(DAT_00013af8 + 0x13a74);
          if (1 < piVar3[2]) {
            iVar2 = __ptr[2];
            if (piVar4 == (int *)0x0) {
              *piVar3 = iVar2;
            }
            else if (iVar2 == 0) {
              piVar3[1] = (int)piVar4;
              piVar4[2] = 0;
            }
            else {
              piVar4[2] = iVar2;
            }
          }
          if ((void *)__ptr[1] != (void *)0x0) {
            free((void *)__ptr[1]);
          }
          free(__ptr);
          iVar2 = DAT_00013afc;
          iVar1 = piVar3[2];
          piVar3[2] = iVar1 + -1;
          if (iVar1 + -1 == 0) {
            piVar3[1] = 0;
            *piVar3 = 0;
          }
          pthread_mutex_unlock((pthread_mutex_t *)(iVar2 + 0x13ad0));
          return 0;
        }
        piVar3 = (int *)__ptr[2];
        piVar4 = __ptr;
      } while ((int *)__ptr[2] != (int *)0x0);
    }
    uVar5 = 0;
    puts((char *)(DAT_00013ae8 + 0x139fc));
  }
  return uVar5;
}



/* ===== rk_event_listen_start @ 00013b00 size=220 ===== */

undefined4 rk_event_listen_start(int param_1)

{
  char *__s;
  size_t __nmemb;
  void *pvVar1;
  pthread_t *__newthread;
  int iVar2;
  int *piVar3;
  
  iVar2 = DAT_00013bdc + 0x13b14;
  if (param_1 == 0) {
    __s = (char *)(DAT_00013be0 + 0x13b20);
LAB_00013b1c:
    puts(__s);
  }
  else {
    pthread_mutex_lock((pthread_mutex_t *)(DAT_00013be4 + 0x13b38));
    **(int **)(iVar2 + DAT_00013be8) = param_1;
    __nmemb = *(size_t *)(*(int *)(DAT_00013bec + 0x13b50) + 8);
    if ((0 < (int)__nmemb) && (piVar3 = *(int **)(iVar2 + DAT_00013bf0), *piVar3 == 0)) {
      pvVar1 = calloc(__nmemb,0x10);
      *piVar3 = (int)pvVar1;
      if (pvVar1 == (void *)0x0) {
        __s = (char *)(DAT_00013bf4 + 0x13b8c);
        goto LAB_00013b1c;
      }
    }
    __newthread = (pthread_t *)(DAT_00013bfc + 0x13ba8);
    *(undefined4 *)(DAT_00013bf8 + 0x13ba4) = 0;
    iVar2 = pthread_create(__newthread,(pthread_attr_t *)0x0,
                           (__start_routine *)(DAT_00013c00 + 0x13bb4),(void *)0x0);
    if (iVar2 == 0) {
      pthread_mutex_unlock((pthread_mutex_t *)(DAT_00013c08 + 0x13bd8));
      return 0;
    }
    printf((char *)(DAT_00013c04 + 0x13bc8));
  }
  return 0xffffffff;
}



/* ===== rk_event_listen_stop @ 00013c0c size=332 ===== */

undefined4 rk_event_listen_stop(void)

{
  int *__ptr;
  void *pvVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  pthread_t *ppVar5;
  pthread_mutex_t *__mutex;
  int *piVar6;
  
  pthread_mutex_lock((pthread_mutex_t *)(DAT_00013d58 + 0x13c1c));
  iVar3 = DAT_00013d60 + 0x13c38;
  *(undefined4 *)(DAT_00013d5c + 0x13c30) = 0xffffffff;
  *(undefined4 *)(DAT_00013d64 + 0x13c48) = 1;
  **(undefined4 **)(iVar3 + DAT_00013d68) = 0;
  puVar4 = *(undefined4 **)(iVar3 + DAT_00013d6c);
  pvVar1 = (void *)*puVar4;
  if (pvVar1 != (void *)0x0) {
    free(pvVar1);
    *puVar4 = 0;
  }
  piVar2 = (int *)(DAT_00013d70 + 0x13c7c);
  __ptr = *(int **)*piVar2;
  while (__ptr != (int *)0x0) {
    piVar6 = (int *)__ptr[2];
    close(*__ptr);
    if ((void *)__ptr[1] != (void *)0x0) {
      free((void *)__ptr[1]);
    }
    free(__ptr);
    iVar3 = *piVar2;
    *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + -1;
    __ptr = piVar6;
  }
  puVar4 = (undefined4 *)(DAT_00013d74 + 0x13cd4);
  pvVar1 = (void *)*puVar4;
  if (pvVar1 != (void *)0x0) {
    free(pvVar1);
    *puVar4 = 0;
  }
  ppVar5 = (pthread_t *)(DAT_00013d78 + 0x13cf4);
  if (*ppVar5 != 0) {
    pthread_cancel(*ppVar5);
    iVar3 = pthread_join(*ppVar5,(void **)0x0);
    if (iVar3 != 0) {
      printf((char *)(DAT_00013d7c + 0x13d24));
      pthread_mutex_unlock((pthread_mutex_t *)(DAT_00013d80 + 0x13d30));
      return 0xffffffff;
    }
    *ppVar5 = 0;
  }
  __mutex = (pthread_mutex_t *)(DAT_00013d84 + 0x13d44);
  pthread_mutex_unlock(__mutex);
  pthread_mutex_destroy(__mutex);
  return 0;
}



/* ===== write_sysfs_int @ 000141e4 size=8 ===== */

/* WARNING: Removing unreachable block (ram,0x00013eac) */
/* WARNING: Removing unreachable block (ram,0x00013ec4) */
/* WARNING: Removing unreachable block (ram,0x00013ee8) */
/* WARNING: Removing unreachable block (ram,0x00013f2c) */
/* WARNING: Removing unreachable block (ram,0x00013f3c) */
/* WARNING: Removing unreachable block (ram,0x00013f48) */
/* WARNING: Removing unreachable block (ram,0x00013efc) */
/* WARNING: Removing unreachable block (ram,0x00013f0c) */
/* WARNING: Removing unreachable block (ram,0x00013f10) */
/* WARNING: Removing unreachable block (ram,0x00013f14) */
/* WARNING: Removing unreachable block (ram,0x00013f20) */

int write_sysfs_int(char *param_1,char *param_2,undefined4 param_3)

{
  size_t sVar1;
  size_t sVar2;
  char *__s;
  FILE *__stream;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  sVar1 = strlen(param_2);
  iVar5 = DAT_00013f74 + 0x13db4;
  sVar2 = strlen(param_1);
  __s = malloc(sVar1 + sVar2 + 2);
  if (__s == (char *)0x0) {
    iVar4 = -0xc;
  }
  else {
    iVar4 = sprintf(__s,(char *)(DAT_00013f78 + 0x13de8),param_2,param_1);
    if (-1 < iVar4) {
      __stream = fopen64(__s,(char *)(DAT_00013f7c + 0x13e00));
      if (__stream == (FILE *)0x0) {
        piVar3 = __errno_location();
        iVar4 = -*piVar3;
        fprintf((FILE *)**(undefined4 **)(iVar5 + DAT_00013f80),(char *)(DAT_00013f84 + 0x13e24),__s
               );
      }
      else {
        iVar4 = fprintf(__stream,(char *)(DAT_00013f88 + 0x13e58),param_3);
        if (iVar4 < 0) {
          iVar5 = fclose(__stream);
          if (iVar5 != 0) {
            perror((char *)(DAT_00013f8c + 0x13e84));
          }
        }
        else {
          iVar5 = fclose(__stream);
          if (iVar5 == 0) {
            iVar4 = 0;
          }
          else {
            piVar3 = __errno_location();
            iVar4 = -*piVar3;
          }
        }
      }
    }
    free(__s);
  }
  return iVar4;
}



/* ===== write_sysfs_int_and_verify @ 000141ec size=500 ===== */

int write_sysfs_int_and_verify(char *param_1,char *param_2,int param_3)

{
  size_t sVar1;
  size_t sVar2;
  char *__s;
  int iVar3;
  FILE *pFVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 *puVar7;
  int iVar8;
  int local_2c [2];
  
  sVar1 = strlen(param_2);
  iVar8 = DAT_00013f74 + 0x13db4;
  sVar2 = strlen(param_1);
  __s = malloc(sVar1 + sVar2 + 2);
  if (__s == (char *)0x0) {
    return -0xc;
  }
  iVar3 = sprintf(__s,(char *)(DAT_00013f78 + 0x13de8),param_2,param_1);
  if (iVar3 < 0) goto LAB_00013e30;
  pFVar4 = fopen64(__s,(char *)(DAT_00013f7c + 0x13e00));
  if (pFVar4 == (FILE *)0x0) {
    piVar5 = __errno_location();
    puVar7 = *(undefined4 **)(iVar8 + DAT_00013f80);
    pcVar6 = (char *)(DAT_00013f84 + 0x13e24);
    iVar3 = *piVar5;
LAB_00013e28:
    iVar3 = -iVar3;
    fprintf((FILE *)*puVar7,pcVar6,__s);
  }
  else {
    pcVar6 = (char *)(DAT_00013f88 + 0x13e58);
    iVar3 = fprintf(pFVar4,pcVar6,param_3);
    if (iVar3 < 0) {
      iVar8 = fclose(pFVar4);
      if (iVar8 == 0) goto LAB_00013e30;
      pcVar6 = (char *)(DAT_00013f8c + 0x13e84);
LAB_00013e80:
      perror(pcVar6);
      goto LAB_00013e30;
    }
    iVar3 = fclose(pFVar4);
    if (iVar3 == 0) {
      pFVar4 = fopen64(__s,(char *)(DAT_00013f90 + 0x13ebc));
      if (pFVar4 == (FILE *)0x0) {
        piVar5 = __errno_location();
        puVar7 = *(undefined4 **)(iVar8 + DAT_00013f80);
        pcVar6 = (char *)(DAT_00013f94 + 0x13ee0);
        iVar3 = *piVar5;
        goto LAB_00013e28;
      }
      iVar3 = fscanf(pFVar4,pcVar6,local_2c);
      if (iVar3 != 1) {
        piVar5 = __errno_location();
        if (*piVar5 == 0) {
          iVar3 = -0x3d;
        }
        else {
          iVar3 = -*piVar5;
        }
        iVar8 = fclose(pFVar4);
        if (iVar8 == 0) goto LAB_00013e30;
        pcVar6 = (char *)(DAT_00013f98 + 0x13f2c);
        goto LAB_00013e80;
      }
      iVar3 = fclose(pFVar4);
      if (iVar3 == 0) {
        iVar3 = 0;
        if (local_2c[0] != param_3) {
          iVar3 = -1;
          fprintf((FILE *)**(undefined4 **)(iVar8 + DAT_00013f80),(char *)(DAT_00013f9c + 0x13f64),
                  param_3,param_2,param_1);
        }
        goto LAB_00013e30;
      }
    }
    piVar5 = __errno_location();
    iVar3 = -*piVar5;
  }
LAB_00013e30:
  free(__s);
  return iVar3;
}



/* ===== write_sysfs_string_and_verify @ 000141f4 size=8 ===== */

int write_sysfs_string_and_verify(char *param_1,char *param_2,char *param_3)

{
  size_t sVar1;
  size_t sVar2;
  char *__s;
  int iVar3;
  FILE *pFVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  
  sVar1 = strlen(param_2);
  iVar7 = DAT_000141b4 + 0x13fcc;
  sVar2 = strlen(param_1);
  __s = malloc(sVar1 + sVar2 + 2);
  if (__s == (char *)0x0) {
    fputs((char *)(DAT_000141bc + 0x14000),(FILE *)**(undefined4 **)(iVar7 + DAT_000141b8));
    return -0xc;
  }
  iVar3 = sprintf(__s,(char *)(DAT_000141c0 + 0x14024),param_2,param_1);
  if (iVar3 < 0) goto LAB_0001406c;
  pFVar4 = fopen64(__s,(char *)(DAT_000141c4 + 0x1403c));
  if (pFVar4 == (FILE *)0x0) {
    piVar5 = __errno_location();
    iVar3 = -*piVar5;
    fprintf((FILE *)**(undefined4 **)(iVar7 + DAT_000141b8),(char *)(DAT_000141c8 + 0x14060),__s);
    goto LAB_0001406c;
  }
  pcVar8 = (char *)(DAT_000141cc + 0x1408c);
  iVar3 = fprintf(pFVar4,pcVar8,param_3);
  if (iVar3 < 0) {
    iVar7 = fclose(pFVar4);
    if (iVar7 == 0) goto LAB_0001406c;
    pcVar8 = (char *)(DAT_000141d0 + 0x140b8);
LAB_000140b4:
    perror(pcVar8);
  }
  else {
    iVar6 = fclose(pFVar4);
    if (iVar6 == 0) {
      pFVar4 = fopen64(__s,(char *)(DAT_000141d4 + 0x140f0));
      if (pFVar4 == (FILE *)0x0) {
        piVar5 = __errno_location();
        iVar3 = -*piVar5;
        fputs((char *)(DAT_000141d8 + 0x1411c),(FILE *)**(undefined4 **)(iVar7 + DAT_000141b8));
        goto LAB_0001406c;
      }
      iVar6 = fscanf(pFVar4,pcVar8,__s);
      if (iVar6 != 1) {
        piVar5 = __errno_location();
        if (*piVar5 == 0) {
          iVar3 = -0x3d;
        }
        else {
          iVar3 = -*piVar5;
        }
        iVar7 = fclose(pFVar4);
        if (iVar7 == 0) goto LAB_0001406c;
        pcVar8 = (char *)(DAT_000141dc + 0x14164);
        goto LAB_000140b4;
      }
      iVar6 = fclose(pFVar4);
      if (iVar6 == 0) {
        iVar6 = strcmp(__s,param_3);
        if (iVar6 != 0) {
          iVar3 = -1;
          fprintf((FILE *)**(undefined4 **)(iVar7 + DAT_000141b8),(char *)(DAT_000141e0 + 0x141a4),
                  __s,param_3,param_2,param_1);
        }
        goto LAB_0001406c;
      }
    }
    piVar5 = __errno_location();
    iVar3 = -*piVar5;
  }
LAB_0001406c:
  free(__s);
  return iVar3;
}



/* ===== write_sysfs_string @ 000141fc size=540 ===== */

/* WARNING: Removing unreachable block (ram,0x000140e0) */
/* WARNING: Removing unreachable block (ram,0x00014120) */
/* WARNING: Removing unreachable block (ram,0x00014164) */
/* WARNING: Removing unreachable block (ram,0x00014174) */
/* WARNING: Removing unreachable block (ram,0x00014188) */
/* WARNING: Removing unreachable block (ram,0x00014134) */
/* WARNING: Removing unreachable block (ram,0x00014144) */
/* WARNING: Removing unreachable block (ram,0x00014148) */
/* WARNING: Removing unreachable block (ram,0x0001414c) */
/* WARNING: Removing unreachable block (ram,0x00014158) */
/* WARNING: Removing unreachable block (ram,0x000140f8) */

int write_sysfs_string(char *param_1,char *param_2,undefined4 param_3)

{
  size_t sVar1;
  size_t sVar2;
  char *__s;
  FILE *__stream;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  sVar1 = strlen(param_2);
  iVar5 = DAT_000141b4 + 0x13fcc;
  sVar2 = strlen(param_1);
  __s = malloc(sVar1 + sVar2 + 2);
  if (__s == (char *)0x0) {
    iVar4 = -0xc;
    fputs((char *)(DAT_000141bc + 0x14000),(FILE *)**(undefined4 **)(iVar5 + DAT_000141b8));
  }
  else {
    iVar4 = sprintf(__s,(char *)(DAT_000141c0 + 0x14024),param_2,param_1);
    if (-1 < iVar4) {
      __stream = fopen64(__s,(char *)(DAT_000141c4 + 0x1403c));
      if (__stream == (FILE *)0x0) {
        piVar3 = __errno_location();
        iVar4 = -*piVar3;
        fprintf((FILE *)**(undefined4 **)(iVar5 + DAT_000141b8),(char *)(DAT_000141c8 + 0x14060),__s
               );
      }
      else {
        iVar4 = fprintf(__stream,(char *)(DAT_000141cc + 0x1408c),param_3);
        if (iVar4 < 0) {
          iVar5 = fclose(__stream);
          if (iVar5 != 0) {
            perror((char *)(DAT_000141d0 + 0x140b8));
          }
        }
        else {
          iVar5 = fclose(__stream);
          if (iVar5 != 0) {
            piVar3 = __errno_location();
            iVar4 = -*piVar3;
          }
        }
      }
    }
    free(__s);
  }
  return iVar4;
}



/* ===== read_sysfs_posint @ 00014204 size=300 ===== */

char * read_sysfs_posint(char *param_1,char *param_2)

{
  size_t sVar1;
  size_t sVar2;
  char *__s;
  FILE *__stream;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  char *local_1c;
  
  pcVar5 = param_1;
  local_1c = param_2;
  sVar1 = strlen(param_2);
  iVar4 = DAT_00014330 + 0x14224;
  sVar2 = strlen(param_1);
  __s = malloc(sVar1 + sVar2 + 2);
  if (__s == (char *)0x0) {
    fputs((char *)(DAT_00014338 + 0x14254),(FILE *)**(undefined4 **)(iVar4 + DAT_00014334));
    return (char *)-0xc;
  }
  local_1c = (char *)sprintf(__s,(char *)(DAT_0001433c + 0x14278),param_2,param_1,pcVar5);
  if ((int)local_1c < 0) goto LAB_0001430c;
  __stream = fopen64(__s,(char *)(DAT_00014340 + 0x14294));
  piVar3 = __errno_location();
  iVar4 = DAT_00014344;
  if (__stream != (FILE *)0x0) {
    *piVar3 = 0;
    iVar4 = fscanf(__stream,(char *)(iVar4 + 0x142d0),&local_1c);
    if (iVar4 != 1) {
      if (*piVar3 == 0) {
        local_1c = (char *)0xffffffc3;
      }
      else {
        local_1c = (char *)-*piVar3;
      }
      iVar4 = fclose(__stream);
      if (iVar4 != 0) {
        perror((char *)(DAT_00014348 + 0x1430c));
      }
      goto LAB_0001430c;
    }
    iVar4 = fclose(__stream);
    if (iVar4 == 0) goto LAB_0001430c;
  }
  local_1c = (char *)-*piVar3;
LAB_0001430c:
  free(__s);
  return local_1c;
}



/* ===== read_sysfs_float @ 0001434c size=288 ===== */

int read_sysfs_float(char *param_1,char *param_2,undefined4 param_3)

{
  size_t sVar1;
  size_t sVar2;
  char *__s;
  FILE *__stream;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  sVar1 = strlen(param_2);
  iVar5 = DAT_0001446c + 0x14370;
  sVar2 = strlen(param_1);
  __s = malloc(sVar1 + sVar2 + 2);
  if (__s == (char *)0x0) {
    fputs((char *)(DAT_00014474 + 0x143a4),(FILE *)**(undefined4 **)(iVar5 + DAT_00014470));
    return -0xc;
  }
  iVar5 = sprintf(__s,(char *)(DAT_00014478 + 0x143c4),param_2,param_1);
  if (iVar5 < 0) goto LAB_0001444c;
  __stream = fopen64(__s,(char *)(DAT_0001447c + 0x143dc));
  piVar3 = __errno_location();
  iVar4 = DAT_00014480;
  if (__stream != (FILE *)0x0) {
    *piVar3 = 0;
    iVar4 = fscanf(__stream,(char *)(iVar4 + 0x14414),param_3);
    if (iVar4 != 1) {
      if (*piVar3 == 0) {
        iVar5 = -0x3d;
      }
      else {
        iVar5 = -*piVar3;
      }
      iVar4 = fclose(__stream);
      if (iVar4 != 0) {
        perror((char *)(DAT_00014484 + 0x1444c));
      }
      goto LAB_0001444c;
    }
    iVar4 = fclose(__stream);
    if (iVar4 == 0) goto LAB_0001444c;
  }
  iVar5 = -*piVar3;
LAB_0001444c:
  free(__s);
  return iVar5;
}



/* ===== read_sysfs_string @ 00014488 size=288 ===== */

int read_sysfs_string(char *param_1,char *param_2,undefined4 param_3)

{
  size_t sVar1;
  size_t sVar2;
  char *__s;
  FILE *__stream;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  sVar1 = strlen(param_2);
  iVar5 = DAT_000145a8 + 0x144ac;
  sVar2 = strlen(param_1);
  __s = malloc(sVar1 + sVar2 + 2);
  if (__s == (char *)0x0) {
    fputs((char *)(DAT_000145b0 + 0x144e0),(FILE *)**(undefined4 **)(iVar5 + DAT_000145ac));
    return -0xc;
  }
  iVar5 = sprintf(__s,(char *)(DAT_000145b4 + 0x14500),param_2,param_1);
  if (iVar5 < 0) goto LAB_00014588;
  __stream = fopen64(__s,(char *)(DAT_000145b8 + 0x14518));
  piVar3 = __errno_location();
  iVar4 = DAT_000145bc;
  if (__stream != (FILE *)0x0) {
    *piVar3 = 0;
    iVar4 = fscanf(__stream,(char *)(iVar4 + 0x14550),param_3);
    if (iVar4 != 1) {
      if (*piVar3 == 0) {
        iVar5 = -0x3d;
      }
      else {
        iVar5 = -*piVar3;
      }
      iVar4 = fclose(__stream);
      if (iVar4 != 0) {
        perror((char *)(DAT_000145c0 + 0x14588));
      }
      goto LAB_00014588;
    }
    iVar4 = fclose(__stream);
    if (iVar4 == 0) goto LAB_00014588;
  }
  iVar5 = -*piVar3;
LAB_00014588:
  free(__s);
  return iVar5;
}



/* ===== _fini @ 000145c4 size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::strcpy @ 00027000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::epoll_create1 @ 00027004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int epoll_create1(int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ioctl @ 00027008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 0002700c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_create @ 00027010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::epoll_wait @ 00027014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int epoll_wait(int __epfd,epoll_event *__events,int __maxevents,int __timeout)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 00027018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fscanf @ 0002701c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fscanf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fgets @ 00027020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 00027024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_cancel @ 00027028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cancel(pthread_t __th)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::perror @ 0002702c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 00027030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00027034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::system @ 00027038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int system(char *__command)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::feof @ 0002703c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int feof(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 00027040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::settimeofday @ 00027044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int settimeofday(timeval *__tv,timezone *__tz)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::select @ 00027048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::epoll_ctl @ 0002704c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int epoll_ctl(int __epfd,int __op,int __fd,epoll_event *__event)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 00027050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::write @ 00027054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 00027058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0002705c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_registerTMCloneTable @ 00027060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_registerTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mktime @ 00027064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t mktime(tm *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strstr @ 00027068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::read @ 0002706c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 00027070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 00027074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::readdir64 @ 00027078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent64 * readdir64(DIR *__dirp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcmp @ 0002707c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sscanf @ 00027080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_deregisterTMCloneTable @ 00027084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00027088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 0002708c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::open64 @ 00027090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::opendir @ 00027094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * opendir(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 00027098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_unlock @ 0002709c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 000270a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::access @ 000270a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_destroy @ 000270ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_lock @ 000270b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 000270b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_init @ 000270b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 000270bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strchr @ 000270c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 000270c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::closedir @ 000270c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int closedir(DIR *__dirp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_join @ 000270cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 000270d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 000270d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 000270d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen64 @ 000270dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


