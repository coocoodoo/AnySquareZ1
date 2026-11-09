// rk_watchdog_test — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _DT_INIT @ 00010c48 size=16 ===== */

void _DT_INIT(void)

{
  return;
}



/* ===== <EXTERNAL>::strcpy @ 00010c6c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_0002500c)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::ioctl @ 00010c84 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_00025014)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::printf @ 00010c90 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00025018)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::pthread_create @ 00010c9c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_0002501c)(__newthread);
  return iVar1;
}



/* ===== <EXTERNAL>::epoll_wait @ 00010ca8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int epoll_wait(int __epfd,epoll_event *__events,int __maxevents,int __timeout)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_epoll_wait_00025020)(__epfd);
  return iVar1;
}



/* ===== <EXTERNAL>::strerror @ 00010cb4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_00025024)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::usleep @ 00010cc0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_usleep_00025028)(__useconds);
  return iVar1;
}



/* ===== <EXTERNAL>::fscanf @ 00010ccc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fscanf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fscanf_0002502c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::fgets @ 00010cd8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_fgets_00025030)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::memcpy @ 00010ce4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00025034)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::pthread_cancel @ 00010cf0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cancel(pthread_t __th)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_cancel_00025038)(__th);
  return iVar1;
}



/* ===== <EXTERNAL>::perror @ 00010cfc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
  (*(code *)PTR_perror_0002503c)(__s);
  return;
}



/* ===== <EXTERNAL>::puts @ 00010d08 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00025040)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::system @ 00010d14 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int system(char *__command)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_system_00025044)(__command);
  return iVar1;
}



/* ===== <EXTERNAL>::feof @ 00010d20 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int feof(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_feof_00025048)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::malloc @ 00010d2c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0002504c)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::sleep @ 00010d38 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_sleep_00025050)(__seconds);
  return uVar1;
}



/* ===== <EXTERNAL>::settimeofday @ 00010d44 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int settimeofday(timeval *__tv,timezone *__tz)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_settimeofday_00025054)(__tv);
  return iVar1;
}



/* ===== <EXTERNAL>::select @ 00010d50 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_select_00025058)(__nfds);
  return iVar1;
}



/* ===== <EXTERNAL>::write @ 00010d80 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_write_00025068)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::fprintf @ 00010d8c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_0002506c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00010d98 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00025070)();
  return;
}



/* ===== <EXTERNAL>::mktime @ 00010da4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t mktime(tm *__tp)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_mktime_00025074)(__tp);
  return tVar1;
}



/* ===== <EXTERNAL>::strstr @ 00010db0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strstr_00025078)(__haystack);
  return pcVar1;
}



/* ===== <EXTERNAL>::read @ 00010dbc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_0002507c)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::strncmp @ 00010dc8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_00025080)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::strncpy @ 00010dd4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_00025084)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::readdir64 @ 00010de0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent64 * readdir64(DIR *__dirp)

{
  dirent64 *pdVar1;
  
  pdVar1 = (dirent64 *)(*(code *)PTR_readdir64_00025088)(__dirp);
  return pdVar1;
}



/* ===== <EXTERNAL>::sscanf @ 00010df8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sscanf_00025090)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 00010e10 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00025098)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::fclose @ 00010e1c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_0002509c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::open64 @ 00010e28 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open64_000250a0)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::opendir @ 00010e34 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * opendir(char *__name)

{
  DIR *pDVar1;
  
  pDVar1 = (DIR *)(*(code *)PTR_opendir_000250a4)(__name);
  return pDVar1;
}



/* ===== <EXTERNAL>::strcmp @ 00010e40 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_000250a8)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::pthread_mutex_unlock @ 00010e4c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_000250ac)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::sprintf @ 00010e58 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_000250b0)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::access @ 00010e64 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_access_000250b4)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::pthread_mutex_destroy @ 00010e70 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_000250b8)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 00010e88 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_000250c0)();
  return piVar1;
}



/* ===== <EXTERNAL>::setbuf @ 00010e94 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void setbuf(FILE *__stream,char *__buf)

{
  (*(code *)PTR_setbuf_000250c4)(__stream);
  return;
}



/* ===== <EXTERNAL>::pthread_mutex_init @ 00010ea0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_000250c8)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::strlen @ 00010eac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_000250cc)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::strchr @ 00010eb8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_000250d0)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::fputs @ 00010ec4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_000250d4)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::closedir @ 00010ed0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int closedir(DIR *__dirp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_closedir_000250d8)(__dirp);
  return iVar1;
}



/* ===== <EXTERNAL>::pthread_join @ 00010edc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_000250dc)(__th);
  return iVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00010ee8 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_000250e0)();
  return;
}



/* ===== <EXTERNAL>::close @ 00010ef4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_000250e4)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 00010f00 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_000250e8)(__ptr);
  return;
}



/* ===== <EXTERNAL>::fopen64 @ 00010f0c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen64_000250ec)(__filename);
  return pFVar1;
}



/* ===== FUN_00010f18 @ 00010f18 size=332 ===== */

undefined4 FUN_00010f18(void)

{
  int iVar1;
  int iVar2;
  pthread_t *ppVar3;
  int iVar4;
  char *pcVar5;
  pthread_t __th;
  int iVar6;
  undefined4 *puVar7;
  char acStack_58 [68];
  
  iVar6 = DAT_00011064 + 0x10f34;
  setbuf((FILE *)**(undefined4 **)(iVar6 + DAT_00011068),(char *)0x0);
  iVar2 = FUN_00011300(0);
  if (iVar2 != 0) {
    puts((char *)(DAT_0001106c + 0x10f58));
  }
  ppVar3 = (pthread_t *)(DAT_00011074 + 0x10f74);
  *(undefined4 *)(DAT_00011070 + 0x10f70) = 0;
  iVar4 = pthread_create(ppVar3,(pthread_attr_t *)0x0,(__start_routine *)(DAT_00011078 + 0x10f80),
                         (void *)0x0);
  iVar1 = DAT_00011088;
  iVar2 = DAT_00011084;
  if (iVar4 == 0) {
    puts((char *)(DAT_00011080 + 0x10fb0));
    puVar7 = *(undefined4 **)(iVar6 + DAT_0001108c);
    while( true ) {
      fgets(acStack_58,0x40,(FILE *)*puVar7);
      pcVar5 = strstr(acStack_58,(char *)(iVar2 + 0x10fc0));
      if (pcVar5 != (char *)0x0) break;
      puts((char *)(iVar1 + 0x10fc4));
      usleep(DAT_000110a0);
    }
    ppVar3 = (pthread_t *)(DAT_00011090 + 0x10ffc);
    puts((char *)(DAT_00011094 + 0x11000));
    __th = *ppVar3;
    if (__th != 0) {
      *(undefined4 *)(DAT_00011098 + 0x1101c) = 1;
      pthread_cancel(__th);
      iVar2 = pthread_join(*ppVar3,(void **)0x0);
      if (iVar2 != 0) {
        printf((char *)(DAT_0001109c + 0x11044));
        return 0xffffffff;
      }
      *ppVar3 = 0;
    }
  }
  else {
    printf((char *)(DAT_0001107c + 0x10f94));
  }
  FUN_00011218();
  return 0;
}



/* ===== entry @ 000110a4 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00025094)
            (DAT_000110d8,param_2,&stack0x00000004,DAT_000110dc,DAT_000110d4,param_1);
  return;
}



/* ===== FUN_000110e0 @ 000110e0 size=32 ===== */

void FUN_000110e0(void)

{
  if (DAT_00011104 == DAT_00011100) {
    return;
  }
  if (DAT_00011108 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000110fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011108)();
  return;
}



/* ===== _FINI_0 @ 00011144 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00011180;
  if (*DAT_00011180 != '\0') {
    return;
  }
  FUN_000110e0();
  if (DAT_00011184 != 0) {
    __deregister_frame_info(DAT_00011188);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 0001118c size=80 ===== */

void _INIT_0(void)

{
  if (DAT_000111b0 != 0) {
    __register_frame_info(DAT_000111b8,DAT_000111b4);
  }
  if ((DAT_0001113c - DAT_00011138 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00011140 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011140)();
  return;
}



/* ===== FUN_000111bc @ 000111bc size=84 ===== */

undefined4 FUN_000111bc(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *__format;
  
  piVar3 = (int *)(DAT_00011210 + 0x111d4);
  __format = (char *)(DAT_00011214 + 0x111d8);
  iVar1 = 0;
  while (*piVar3 == 0) {
    FUN_000114cc();
    iVar2 = iVar1 + 1;
    printf(__format,iVar1);
    if (iVar2 == 0x3c) {
      iVar2 = 0;
    }
    sleep(1);
    iVar1 = iVar2;
  }
  return 0;
}



/* ===== FUN_00011218 @ 00011218 size=196 ===== */

undefined4 FUN_00011218(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ssize_t sVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  void *__buf;
  undefined4 local_c;
  
  if (0 < *(int *)(DAT_000112dc + 0x1122c)) {
    __buf = *(void **)(DAT_000112e0 + 0x11230 + DAT_000112e4);
    local_c = param_4;
    sVar1 = write(*(int *)(DAT_000112dc + 0x1122c),__buf,1);
    if (sVar1 < 0) {
      piVar2 = __errno_location();
      printf((char *)(DAT_000112e8 + 0x11268),*piVar2);
    }
    local_c = 1;
    iVar3 = ioctl(*(int *)(DAT_000112ec + 0x11284),DAT_000112f0,&local_c,DAT_000112ec,param_1,__buf,
                  param_3);
    if (iVar3 == 0) {
      puts((char *)(DAT_000112f4 + 0x11298));
    }
    else {
      piVar2 = __errno_location();
      pcVar4 = strerror(*piVar2);
      printf((char *)(DAT_000112fc + 0x112d8),pcVar4);
    }
    piVar2 = (int *)(DAT_000112f8 + 0x112a4);
    close(*piVar2);
    *piVar2 = 0;
  }
  return 0;
}



/* ===== FUN_00011300 @ 00011300 size=396 ===== */

undefined4 FUN_00011300(char *param_1,undefined4 param_2,undefined4 param_3)

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
  
  piVar6 = (int *)(DAT_0001148c + 0x11314);
  iVar7 = DAT_00011490 + 0x1131c;
  local_14 = param_1;
  if (*piVar6 == 0) {
    local_18 = param_3;
    iVar1 = open64((char *)(DAT_00011494 + 0x11334),1,param_3,0,param_1,param_2);
    *piVar6 = iVar1;
    if (iVar1 == -1) {
      piVar6 = __errno_location();
      iVar7 = *piVar6;
      uVar5 = 0xffffffff;
      if (iVar7 == 2) {
        pcVar2 = (char *)(DAT_00011498 + 0x11360);
LAB_0001135c:
        puts(pcVar2);
        return 0xffffffff;
      }
      if (iVar7 == 0xd) {
        pcVar2 = (char *)(DAT_0001149c + 0x1137c);
        goto LAB_0001135c;
      }
      pcVar2 = strerror(iVar7);
      __format = (char *)(DAT_000114a0 + 0x11390);
      goto LAB_0001138c;
    }
  }
  piVar6 = (int *)(DAT_000114a4 + 0x113ac);
  local_18 = 2;
  iVar1 = ioctl(*piVar6,DAT_000114a8,&local_18);
  if (iVar1 != 0) {
    piVar3 = __errno_location();
    pcVar2 = strerror(*piVar3);
    printf((char *)(DAT_000114b8 + 0x1141c),pcVar2);
    sVar4 = write(*piVar6,*(void **)(iVar7 + DAT_000114bc),1);
    if (sVar4 < 0) {
      printf((char *)(DAT_000114c0 + 0x11450),*piVar3);
    }
    piVar6 = (int *)(DAT_000114c4 + 0x1145c);
    close(*piVar6);
    *piVar6 = 0;
    return 0xffffffff;
  }
  puts((char *)(DAT_000114ac + 0x113c8));
  uVar5 = 0;
  if ((int)local_14 < 1) {
    return 0;
  }
  iVar7 = ioctl(*piVar6,DAT_000114b0,&local_14);
  if (iVar7 == 0) {
    __format = (char *)(DAT_000114b4 + 0x113fc);
    pcVar2 = local_14;
  }
  else {
    piVar6 = __errno_location();
    pcVar2 = strerror(*piVar6);
    __format = (char *)((int)&DAT_0001148c + DAT_000114c8);
  }
LAB_0001138c:
  printf(__format,pcVar2);
  return uVar5;
}



/* ===== FUN_000114cc @ 000114cc size=56 ===== */

undefined4 FUN_000114cc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_c = param_2;
  uStack_8 = param_3;
  iVar1 = ioctl(*(int *)(DAT_00011504 + 0x114e4),DAT_00011508,&uStack_c,DAT_00011504,param_1);
  uVar2 = 0;
  if (iVar1 != 0) {
    puts((char *)(DAT_0001150c + 0x114f8));
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== FUN_00011510 @ 00011510 size=200 ===== */

undefined4 FUN_00011510(undefined4 *param_1)

{
  int __fd;
  int iVar1;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  __fd = open64((char *)(DAT_000115d8 + 0x1152c),0);
  if (__fd == -1) {
    perror((char *)(DAT_000115dc + 0x11544));
  }
  else {
    iVar1 = ioctl(__fd,DAT_000115e0,&local_34);
    if (iVar1 == -1) {
      perror((char *)(DAT_000115e4 + 0x11570));
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
      puts((char *)(DAT_000115e8 + 0x11594));
    }
    close(__fd);
  }
  return 0xffffffff;
}



/* ===== FUN_000115ec @ 000115ec size=432 ===== */

undefined4 FUN_000115ec(uint *param_1)

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
    pcVar1 = (char *)(DAT_0001179c + 0x11608);
  }
  else {
    __fd = open64((char *)(DAT_000117a0 + 0x11620),2);
    if (__fd == -1) {
      perror((char *)(DAT_000117a4 + 0x11638));
      return 0xffffffff;
    }
    local_60 = *param_1;
    local_5c = param_1[1];
    local_4c = param_1[5] - 0x76c;
    local_58 = param_1[2];
    local_54 = param_1[3];
    local_50 = param_1[4] - 1;
    if (local_4c < 1) {
      pcVar1 = (char *)(DAT_000117a8 + 0x11690);
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
              iVar2 = ioctl(__fd,DAT_000117c0,&local_60);
              if (iVar2 == -1) {
                perror((char *)(DAT_000117c4 + 0x1173c));
                close(__fd);
                return 0xffffffff;
              }
              iVar2 = settimeofday(&local_68,(timezone *)0x0);
              if (iVar2 != 0) {
                piVar3 = __errno_location();
                if (*piVar3 == 1) {
                  pcVar1 = (char *)(DAT_000117c8 + 0x11778);
                }
                else {
                  if (*piVar3 != 0x16) goto LAB_00011778;
                  pcVar1 = (char *)((int)&DAT_0001179c + DAT_000117cc);
                }
                puts(pcVar1);
              }
LAB_00011778:
              close(__fd);
              return 0;
            }
            pcVar1 = (char *)(DAT_000117bc + 0x116e8);
          }
          else {
            pcVar1 = (char *)(DAT_000117b8 + 0x116d8);
          }
        }
        else {
          pcVar1 = (char *)(DAT_000117b4 + 0x116c8);
        }
      }
      else {
        pcVar1 = (char *)(DAT_000117b0 + 0x116b8);
      }
    }
    else {
      pcVar1 = (char *)(DAT_000117ac + 0x116a4);
    }
  }
  puts(pcVar1);
  return 0xffffffff;
}



/* ===== FUN_000117d0 @ 000117d0 size=172 ===== */

undefined4 FUN_000117d0(undefined4 *param_1)

{
  int __fd;
  int iVar1;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (param_1 == (undefined4 *)0x0) {
    puts((char *)(DAT_0001187c + 0x117ec));
  }
  else {
    __fd = open64((char *)(DAT_00011880 + 0x1180c),0);
    if (__fd == -1) {
      perror((char *)(DAT_00011884 + 0x11824));
      return 0xffffffff;
    }
    iVar1 = ioctl(__fd,DAT_00011888,&local_34);
    if (iVar1 != -1) {
      *param_1 = local_34;
      param_1[1] = local_30;
      param_1[2] = local_2c;
      close(__fd);
      return 0;
    }
    perror((char *)(DAT_0001188c + 0x11848));
    close(__fd);
  }
  return 0xffffffff;
}



/* ===== FUN_000120f8 @ 000120f8 size=232 ===== */

undefined4 FUN_000120f8(undefined2 param_1,void *param_2,uint param_3)

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
  
  iVar2 = DAT_000121e0 + 0x12114;
  if ((int)param_3 < 0x401) {
    __fd = open64((char *)(DAT_000121ec + 0x12160),2,0);
    if (__fd < 0) {
      __s = (char *)(DAT_000121f0 + 0x1217c);
      __stream = (FILE *)**(undefined4 **)(iVar2 + DAT_000121e4);
    }
    else {
      local_422 = (undefined2)param_3;
      local_428 = DAT_000121f4;
      local_424 = param_1;
      memcpy(auStack_420,param_2,param_3 & 0xffff);
      iVar1 = ioctl(__fd,DAT_000121f8,&local_428);
      close(__fd);
      if (iVar1 == 0) {
        return 0;
      }
      __s = (char *)(DAT_000121fc + 0x121dc);
      __stream = (FILE *)**(undefined4 **)(iVar2 + DAT_000121e4);
    }
  }
  else {
    __s = (char *)(DAT_000121e8 + 0x12128);
    __stream = (FILE *)**(undefined4 **)(iVar2 + DAT_000121e4);
  }
  fputs(__s,__stream);
  return 0xffffffff;
}



/* ===== FUN_00012668 @ 00012668 size=168 ===== */

int FUN_00012668(undefined4 param_1,undefined4 param_2)

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
  sprintf(local_50,(char *)(DAT_00012714 + 0x12698),DAT_00012710 + 0x12690,param_1);
  iVar1 = FUN_00013c60(DAT_00012718 + 0x126d0,local_50,local_58);
  if (-1 < iVar1) {
    iVar1 = strcmp(local_58,(char *)(DAT_0001271c + 0x126e8));
    if (iVar1 == 0) {
      iVar1 = FUN_000139c4(DAT_00012720 + 0x12708,local_50,param_2);
    }
    else {
      iVar1 = -0x16;
    }
  }
  return iVar1;
}



/* ===== FUN_00012724 @ 00012724 size=64 ===== */

void FUN_00012724(undefined4 param_1)

{
  char acStack_48 [64];
  
  sprintf(acStack_48,(char *)(DAT_00012768 + 0x1274c),DAT_00012764 + 0x12744,param_1);
  FUN_000139dc(DAT_0001276c + 0x1275c,acStack_48);
  return;
}



/* ===== FUN_00012770 @ 00012770 size=156 ===== */

undefined4 FUN_00012770(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  char acStack_98 [64];
  char acStack_58 [68];
  
  iVar2 = DAT_0001280c + 0x12790;
  sprintf(acStack_98,(char *)(DAT_00012810 + 0x12798),iVar2,param_1);
  sprintf(acStack_58,(char *)(DAT_00012814 + 0x127b8),iVar2,param_1);
  iVar2 = access(acStack_58,0);
  if (iVar2 == 0) {
    printf((char *)(DAT_00012818 + 0x127e4),param_1,acStack_58);
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_000139bc(DAT_0001281c + 0x12804,acStack_98,0);
  }
  return uVar1;
}



/* ===== FUN_00012820 @ 00012820 size=68 ===== */

void FUN_00012820(undefined4 param_1)

{
  char acStack_48 [64];
  
  sprintf(acStack_48,(char *)(DAT_00012868 + 0x12848),DAT_00012864 + 0x12840,param_1);
  FUN_000139bc(DAT_0001286c + 0x1285c,acStack_48,0);
  return;
}



/* ===== FUN_00012870 @ 00012870 size=72 ===== */

void FUN_00012870(undefined4 param_1,undefined4 param_2)

{
  char acStack_50 [68];
  
  sprintf(acStack_50,(char *)(DAT_000128bc + 0x12898),DAT_000128b8 + 0x12894,param_1);
  FUN_000139bc(DAT_000128c0 + 0x128b0,acStack_50,param_2);
  return;
}



/* ===== FUN_00012c44 @ 00012c44 size=40 ===== */

int FUN_00012c44(void)

{
  int iVar1;
  
  iVar1 = FUN_00012820();
  if (iVar1 < 0) {
    puts((char *)(DAT_00012c6c + 0x12c64));
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_000139bc @ 000139bc size=500 ===== */

/* WARNING: Removing unreachable block (ram,0x00013684) */
/* WARNING: Removing unreachable block (ram,0x0001369c) */
/* WARNING: Removing unreachable block (ram,0x000136c0) */
/* WARNING: Removing unreachable block (ram,0x00013704) */
/* WARNING: Removing unreachable block (ram,0x00013714) */
/* WARNING: Removing unreachable block (ram,0x00013720) */
/* WARNING: Removing unreachable block (ram,0x000136d4) */
/* WARNING: Removing unreachable block (ram,0x000136e4) */
/* WARNING: Removing unreachable block (ram,0x000136e8) */
/* WARNING: Removing unreachable block (ram,0x000136ec) */
/* WARNING: Removing unreachable block (ram,0x000136f8) */

int FUN_000139bc(char *param_1,char *param_2,undefined4 param_3)

{
  size_t sVar1;
  size_t sVar2;
  char *__s;
  FILE *__stream;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  sVar1 = strlen(param_2);
  iVar5 = DAT_0001374c + 0x1358c;
  sVar2 = strlen(param_1);
  __s = malloc(sVar1 + sVar2 + 2);
  if (__s == (char *)0x0) {
    iVar4 = -0xc;
  }
  else {
    iVar4 = sprintf(__s,(char *)(DAT_00013750 + 0x135c0),param_2,param_1);
    if (-1 < iVar4) {
      __stream = fopen64(__s,(char *)(DAT_00013754 + 0x135d8));
      if (__stream == (FILE *)0x0) {
        piVar3 = __errno_location();
        iVar4 = -*piVar3;
        fprintf((FILE *)**(undefined4 **)(iVar5 + DAT_00013758),(char *)(DAT_0001375c + 0x135fc),__s
               );
      }
      else {
        iVar4 = fprintf(__stream,(char *)(DAT_00013760 + 0x13630),param_3);
        if (iVar4 < 0) {
          iVar5 = fclose(__stream);
          if (iVar5 != 0) {
            perror((char *)(DAT_00013764 + 0x1365c));
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



/* ===== FUN_000139c4 @ 000139c4 size=8 ===== */

int FUN_000139c4(char *param_1,char *param_2,int param_3)

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
  int aiStack_2c [2];
  
  sVar1 = strlen(param_2);
  iVar8 = DAT_0001374c + 0x1358c;
  sVar2 = strlen(param_1);
  __s = malloc(sVar1 + sVar2 + 2);
  if (__s == (char *)0x0) {
    return -0xc;
  }
  iVar3 = sprintf(__s,(char *)(DAT_00013750 + 0x135c0),param_2,param_1);
  if (iVar3 < 0) goto LAB_00013608;
  pFVar4 = fopen64(__s,(char *)(DAT_00013754 + 0x135d8));
  if (pFVar4 == (FILE *)0x0) {
    piVar5 = __errno_location();
    puVar7 = *(undefined4 **)(iVar8 + DAT_00013758);
    pcVar6 = (char *)(DAT_0001375c + 0x135fc);
    iVar3 = *piVar5;
LAB_00013600:
    iVar3 = -iVar3;
    fprintf((FILE *)*puVar7,pcVar6,__s);
  }
  else {
    pcVar6 = (char *)(DAT_00013760 + 0x13630);
    iVar3 = fprintf(pFVar4,pcVar6,param_3);
    if (iVar3 < 0) {
      iVar8 = fclose(pFVar4);
      if (iVar8 == 0) goto LAB_00013608;
      pcVar6 = (char *)(DAT_00013764 + 0x1365c);
LAB_00013658:
      perror(pcVar6);
      goto LAB_00013608;
    }
    iVar3 = fclose(pFVar4);
    if (iVar3 == 0) {
      pFVar4 = fopen64(__s,(char *)(DAT_00013768 + 0x13694));
      if (pFVar4 == (FILE *)0x0) {
        piVar5 = __errno_location();
        puVar7 = *(undefined4 **)(iVar8 + DAT_00013758);
        pcVar6 = (char *)(DAT_0001376c + 0x136b8);
        iVar3 = *piVar5;
        goto LAB_00013600;
      }
      iVar3 = fscanf(pFVar4,pcVar6,aiStack_2c);
      if (iVar3 != 1) {
        piVar5 = __errno_location();
        if (*piVar5 == 0) {
          iVar3 = -0x3d;
        }
        else {
          iVar3 = -*piVar5;
        }
        iVar8 = fclose(pFVar4);
        if (iVar8 == 0) goto LAB_00013608;
        pcVar6 = (char *)(DAT_00013770 + 0x13704);
        goto LAB_00013658;
      }
      iVar3 = fclose(pFVar4);
      if (iVar3 == 0) {
        iVar3 = 0;
        if (aiStack_2c[0] != param_3) {
          iVar3 = -1;
          fprintf((FILE *)**(undefined4 **)(iVar8 + DAT_00013758),(char *)(DAT_00013774 + 0x1373c),
                  param_3,param_2,param_1);
        }
        goto LAB_00013608;
      }
    }
    piVar5 = __errno_location();
    iVar3 = -*piVar5;
  }
LAB_00013608:
  free(__s);
  return iVar3;
}



/* ===== FUN_000139cc @ 000139cc size=540 ===== */

int FUN_000139cc(char *param_1,char *param_2,char *param_3)

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
  iVar7 = DAT_0001398c + 0x137a4;
  sVar2 = strlen(param_1);
  __s = malloc(sVar1 + sVar2 + 2);
  if (__s == (char *)0x0) {
    fputs((char *)(DAT_00013994 + 0x137d8),(FILE *)**(undefined4 **)(iVar7 + DAT_00013990));
    return -0xc;
  }
  iVar3 = sprintf(__s,(char *)(DAT_00013998 + 0x137fc),param_2,param_1);
  if (iVar3 < 0) goto LAB_00013844;
  pFVar4 = fopen64(__s,(char *)(DAT_0001399c + 0x13814));
  if (pFVar4 == (FILE *)0x0) {
    piVar5 = __errno_location();
    iVar3 = -*piVar5;
    fprintf((FILE *)**(undefined4 **)(iVar7 + DAT_00013990),(char *)(DAT_000139a0 + 0x13838),__s);
    goto LAB_00013844;
  }
  pcVar8 = (char *)(DAT_000139a4 + 0x13864);
  iVar3 = fprintf(pFVar4,pcVar8,param_3);
  if (iVar3 < 0) {
    iVar7 = fclose(pFVar4);
    if (iVar7 == 0) goto LAB_00013844;
    pcVar8 = (char *)(DAT_000139a8 + 0x13890);
LAB_0001388c:
    perror(pcVar8);
  }
  else {
    iVar6 = fclose(pFVar4);
    if (iVar6 == 0) {
      pFVar4 = fopen64(__s,(char *)(DAT_000139ac + 0x138c8));
      if (pFVar4 == (FILE *)0x0) {
        piVar5 = __errno_location();
        iVar3 = -*piVar5;
        fputs((char *)(DAT_000139b0 + 0x138f4),(FILE *)**(undefined4 **)(iVar7 + DAT_00013990));
        goto LAB_00013844;
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
        if (iVar7 == 0) goto LAB_00013844;
        pcVar8 = (char *)(DAT_000139b4 + 0x1393c);
        goto LAB_0001388c;
      }
      iVar6 = fclose(pFVar4);
      if (iVar6 == 0) {
        iVar6 = strcmp(__s,param_3);
        if (iVar6 != 0) {
          iVar3 = -1;
          fprintf((FILE *)**(undefined4 **)(iVar7 + DAT_00013990),(char *)(DAT_000139b8 + 0x1397c),
                  __s,param_3,param_2,param_1);
        }
        goto LAB_00013844;
      }
    }
    piVar5 = __errno_location();
    iVar3 = -*piVar5;
  }
LAB_00013844:
  free(__s);
  return iVar3;
}



/* ===== FUN_000139dc @ 000139dc size=300 ===== */

char * FUN_000139dc(char *param_1,char *param_2)

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
  iVar4 = DAT_00013b08 + 0x139fc;
  sVar2 = strlen(param_1);
  __s = malloc(sVar1 + sVar2 + 2);
  if (__s == (char *)0x0) {
    fputs((char *)(DAT_00013b10 + 0x13a2c),(FILE *)**(undefined4 **)(iVar4 + DAT_00013b0c));
    return (char *)-0xc;
  }
  local_1c = (char *)sprintf(__s,(char *)(DAT_00013b14 + 0x13a50),param_2,param_1,pcVar5);
  if ((int)local_1c < 0) goto LAB_00013ae4;
  __stream = fopen64(__s,(char *)(DAT_00013b18 + 0x13a6c));
  piVar3 = __errno_location();
  iVar4 = DAT_00013b1c;
  if (__stream != (FILE *)0x0) {
    *piVar3 = 0;
    iVar4 = fscanf(__stream,(char *)(iVar4 + 0x13aa8),&local_1c);
    if (iVar4 != 1) {
      if (*piVar3 == 0) {
        local_1c = (char *)0xffffffc3;
      }
      else {
        local_1c = (char *)-*piVar3;
      }
      iVar4 = fclose(__stream);
      if (iVar4 != 0) {
        perror((char *)(DAT_00013b20 + 0x13ae4));
      }
      goto LAB_00013ae4;
    }
    iVar4 = fclose(__stream);
    if (iVar4 == 0) goto LAB_00013ae4;
  }
  local_1c = (char *)-*piVar3;
LAB_00013ae4:
  free(__s);
  return local_1c;
}



/* ===== FUN_00013c60 @ 00013c60 size=288 ===== */

int FUN_00013c60(char *param_1,char *param_2,undefined4 param_3)

{
  size_t sVar1;
  size_t sVar2;
  char *__s;
  FILE *__stream;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  sVar1 = strlen(param_2);
  iVar5 = DAT_00013d80 + 0x13c84;
  sVar2 = strlen(param_1);
  __s = malloc(sVar1 + sVar2 + 2);
  if (__s == (char *)0x0) {
    fputs((char *)(DAT_00013d88 + 0x13cb8),(FILE *)**(undefined4 **)(iVar5 + DAT_00013d84));
    return -0xc;
  }
  iVar5 = sprintf(__s,(char *)(DAT_00013d8c + 0x13cd8),param_2,param_1);
  if (iVar5 < 0) goto LAB_00013d60;
  __stream = fopen64(__s,(char *)(DAT_00013d90 + 0x13cf0));
  piVar3 = __errno_location();
  iVar4 = DAT_00013d94;
  if (__stream != (FILE *)0x0) {
    *piVar3 = 0;
    iVar4 = fscanf(__stream,(char *)(iVar4 + 0x13d28),param_3);
    if (iVar4 != 1) {
      if (*piVar3 == 0) {
        iVar5 = -0x3d;
      }
      else {
        iVar5 = -*piVar3;
      }
      iVar4 = fclose(__stream);
      if (iVar4 != 0) {
        perror((char *)(DAT_00013d98 + 0x13d60));
      }
      goto LAB_00013d60;
    }
    iVar4 = fclose(__stream);
    if (iVar4 == 0) goto LAB_00013d60;
  }
  iVar5 = -*piVar3;
LAB_00013d60:
  free(__s);
  return iVar5;
}



/* ===== _DT_FINI @ 00013d9c size=16 ===== */

void _DT_FINI(void)

{
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00026004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 00026010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_create @ 00026014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 00026018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 0002601c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 00026020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_init @ 00026024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 00026028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::readdir64 @ 0002602c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent64 * readdir64(DIR *__dirp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 00026030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::read @ 00026034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::perror @ 00026038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::closedir @ 0002603c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int closedir(DIR *__dirp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::open64 @ 00026040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strchr @ 00026044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 00026048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mktime @ 0002604c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t mktime(tm *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 00026050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::select @ 00026054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 00026058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 0002605c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 00026060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen64 @ 00026064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fscanf @ 00026068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fscanf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::settimeofday @ 0002606c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int settimeofday(timeval *__tv,timezone *__tz)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 00026070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_cancel @ 00026074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cancel(pthread_t __th)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sscanf @ 00026078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::feof @ 0002607c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int feof(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::epoll_ctl @ 00026080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int epoll_ctl(int __epfd,int __op,int __fd,epoll_event *__event)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00026084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usleep @ 00026088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 0002608c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 00026090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sleep @ 00026094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ioctl @ 00026098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_destroy @ 0002609c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 000260a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::epoll_wait @ 000260a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int epoll_wait(int __epfd,epoll_event *__events,int __maxevents,int __timeout)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 000260a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcmp @ 000260ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::epoll_create1 @ 000260b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int epoll_create1(int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::write @ 000260b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 000260b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::opendir @ 000260bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * opendir(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::access @ 000260c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::system @ 000260c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int system(char *__command)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 000260c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 000260cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fgets @ 000260d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_lock @ 000260d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_unlock @ 000260d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setbuf @ 000260dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void setbuf(FILE *__stream,char *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strstr @ 000260e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 000260e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 000260e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_join @ 000260ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


