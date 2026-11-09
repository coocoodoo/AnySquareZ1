// rk_event_test — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _DT_INIT @ 00010bdc size=16 ===== */

void _DT_INIT(void)

{
  return;
}



/* ===== <EXTERNAL>::strcpy @ 00010c00 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_0002500c)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::epoll_create1 @ 00010c0c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int epoll_create1(int __flags)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_epoll_create1_00025010)(__flags);
  return iVar1;
}



/* ===== <EXTERNAL>::ioctl @ 00010c18 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_00025014)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::printf @ 00010c24 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00025018)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::pthread_create @ 00010c30 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_0002501c)(__newthread);
  return iVar1;
}



/* ===== <EXTERNAL>::epoll_wait @ 00010c3c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int epoll_wait(int __epfd,epoll_event *__events,int __maxevents,int __timeout)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_epoll_wait_00025020)(__epfd);
  return iVar1;
}



/* ===== <EXTERNAL>::strerror @ 00010c48 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_00025024)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::usleep @ 00010c54 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_usleep_00025028)(__useconds);
  return iVar1;
}



/* ===== <EXTERNAL>::fscanf @ 00010c60 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fscanf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fscanf_0002502c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::fgets @ 00010c6c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_fgets_00025030)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::memcpy @ 00010c78 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00025034)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::pthread_cancel @ 00010c84 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cancel(pthread_t __th)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_cancel_00025038)(__th);
  return iVar1;
}



/* ===== <EXTERNAL>::perror @ 00010c90 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
  (*(code *)PTR_perror_0002503c)(__s);
  return;
}



/* ===== <EXTERNAL>::puts @ 00010c9c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00025040)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::system @ 00010ca8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int system(char *__command)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_system_00025044)(__command);
  return iVar1;
}



/* ===== <EXTERNAL>::malloc @ 00010cc0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0002504c)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::settimeofday @ 00010ccc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int settimeofday(timeval *__tv,timezone *__tz)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_settimeofday_00025050)(__tv);
  return iVar1;
}



/* ===== <EXTERNAL>::select @ 00010cd8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_select_00025054)(__nfds);
  return iVar1;
}



/* ===== <EXTERNAL>::epoll_ctl @ 00010cf0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int epoll_ctl(int __epfd,int __op,int __fd,epoll_event *__event)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_epoll_ctl_0002505c)(__epfd);
  return iVar1;
}



/* ===== <EXTERNAL>::calloc @ 00010cfc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_00025060)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::write @ 00010d08 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_write_00025064)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::fprintf @ 00010d14 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00025068)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00010d20 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_0002506c)();
  return;
}



/* ===== <EXTERNAL>::mktime @ 00010d2c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t mktime(tm *__tp)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_mktime_00025070)(__tp);
  return tVar1;
}



/* ===== <EXTERNAL>::strstr @ 00010d38 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strstr_00025074)(__haystack);
  return pcVar1;
}



/* ===== <EXTERNAL>::read @ 00010d44 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_00025078)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::strncmp @ 00010d50 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_0002507c)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 00010d98 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00025094)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::fclose @ 00010da4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_00025098)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::open64 @ 00010db0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open64_0002509c)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::opendir @ 00010dbc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * opendir(char *__name)

{
  DIR *pDVar1;
  
  pDVar1 = (DIR *)(*(code *)PTR_opendir_000250a0)(__name);
  return pDVar1;
}



/* ===== <EXTERNAL>::strcmp @ 00010dc8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_000250a4)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::pthread_mutex_unlock @ 00010dd4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_000250a8)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::sprintf @ 00010de0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_000250ac)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::access @ 00010dec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_access_000250b0)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::pthread_mutex_destroy @ 00010df8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_000250b4)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::pthread_mutex_lock @ 00010e04 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_000250b8)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 00010e10 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_000250bc)();
  return piVar1;
}



/* ===== <EXTERNAL>::pthread_mutex_init @ 00010e1c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_000250c0)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::strlen @ 00010e28 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_000250c4)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::strchr @ 00010e34 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_000250c8)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::fputs @ 00010e40 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_000250cc)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::closedir @ 00010e4c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int closedir(DIR *__dirp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_closedir_000250d0)(__dirp);
  return iVar1;
}



/* ===== <EXTERNAL>::pthread_join @ 00010e58 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_000250d4)(__th);
  return iVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00010e64 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_000250d8)();
  return;
}



/* ===== <EXTERNAL>::close @ 00010e70 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_000250dc)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 00010e7c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_000250e0)(__ptr);
  return;
}



/* ===== <EXTERNAL>::fopen64 @ 00010e88 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen64_000250e4)(__filename);
  return pFVar1;
}



/* ===== entry @ 00011064 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00025090)
            (DAT_00011098,param_2,&stack0x00000004,DAT_0001109c,DAT_00011094,param_1);
  return;
}



/* ===== FUN_000110a0 @ 000110a0 size=32 ===== */

void FUN_000110a0(void)

{
  if (DAT_000110c4 == DAT_000110c0) {
    return;
  }
  if (DAT_000110c8 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000110bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000110c8)();
  return;
}



/* ===== _FINI_0 @ 00011104 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00011140;
  if (*DAT_00011140 != '\0') {
    return;
  }
  FUN_000110a0();
  if (DAT_00011144 != 0) {
    __deregister_frame_info(DAT_00011148);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 0001114c size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00011170 != 0) {
    __register_frame_info(DAT_00011178,DAT_00011174);
  }
  if ((DAT_000110fc - DAT_000110f8 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00011100 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000110f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011100)();
  return;
}



/* ===== FUN_0001117c @ 0001117c size=76 ===== */

void FUN_0001117c(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 == (undefined4 *)0x0) {
    puts((char *)(DAT_000111c8 + 0x11194));
    return;
  }
  printf((char *)(DAT_000111cc + 0x111c0),*param_1,param_1[1],(uint)*(ushort *)(param_1 + 2),
         (uint)*(ushort *)((int)param_1 + 10),param_1[3],param_3);
  return;
}



/* ===== FUN_000111d0 @ 000111d0 size=196 ===== */

undefined4 FUN_000111d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ssize_t sVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  void *__buf;
  undefined4 local_c;
  
  if (0 < *(int *)(DAT_00011294 + 0x111e4)) {
    __buf = *(void **)(DAT_00011298 + 0x111e8 + DAT_0001129c);
    local_c = param_4;
    sVar1 = write(*(int *)(DAT_00011294 + 0x111e4),__buf,1);
    if (sVar1 < 0) {
      piVar2 = __errno_location();
      printf((char *)(DAT_000112a0 + 0x11220),*piVar2);
    }
    local_c = 1;
    iVar3 = ioctl(*(int *)(DAT_000112a4 + 0x1123c),DAT_000112a8,&local_c,DAT_000112a4,param_1,__buf,
                  param_3);
    if (iVar3 == 0) {
      puts((char *)(DAT_000112ac + 0x11250));
    }
    else {
      piVar2 = __errno_location();
      pcVar4 = strerror(*piVar2);
      printf((char *)(DAT_000112b4 + 0x11290),pcVar4);
    }
    piVar2 = (int *)(DAT_000112b0 + 0x1125c);
    close(*piVar2);
    *piVar2 = 0;
  }
  return 0;
}



/* ===== FUN_000114c8 @ 000114c8 size=200 ===== */

undefined4 FUN_000114c8(undefined4 *param_1)

{
  int __fd;
  int iVar1;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  __fd = open64((char *)(DAT_00011590 + 0x114e4),0);
  if (__fd == -1) {
    perror((char *)(DAT_00011594 + 0x114fc));
  }
  else {
    iVar1 = ioctl(__fd,DAT_00011598,&local_34);
    if (iVar1 == -1) {
      perror((char *)(DAT_0001159c + 0x11528));
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
      puts((char *)(DAT_000115a0 + 0x1154c));
    }
    close(__fd);
  }
  return 0xffffffff;
}



/* ===== FUN_000115a4 @ 000115a4 size=432 ===== */

undefined4 FUN_000115a4(uint *param_1)

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
    pcVar1 = (char *)(DAT_00011754 + 0x115c0);
  }
  else {
    __fd = open64((char *)(DAT_00011758 + 0x115d8),2);
    if (__fd == -1) {
      perror((char *)(DAT_0001175c + 0x115f0));
      return 0xffffffff;
    }
    local_60 = *param_1;
    local_5c = param_1[1];
    local_4c = param_1[5] - 0x76c;
    local_58 = param_1[2];
    local_54 = param_1[3];
    local_50 = param_1[4] - 1;
    if (local_4c < 1) {
      pcVar1 = (char *)(DAT_00011760 + 0x11648);
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
              iVar2 = ioctl(__fd,DAT_00011778,&local_60);
              if (iVar2 == -1) {
                perror((char *)(DAT_0001177c + 0x116f4));
                close(__fd);
                return 0xffffffff;
              }
              iVar2 = settimeofday(&local_68,(timezone *)0x0);
              if (iVar2 != 0) {
                piVar3 = __errno_location();
                if (*piVar3 == 1) {
                  pcVar1 = (char *)(DAT_00011780 + 0x11730);
                }
                else {
                  if (*piVar3 != 0x16) goto LAB_00011730;
                  pcVar1 = (char *)((int)&DAT_00011754 + DAT_00011784);
                }
                puts(pcVar1);
              }
LAB_00011730:
              close(__fd);
              return 0;
            }
            pcVar1 = (char *)(DAT_00011774 + 0x116a0);
          }
          else {
            pcVar1 = (char *)(DAT_00011770 + 0x11690);
          }
        }
        else {
          pcVar1 = (char *)(DAT_0001176c + 0x11680);
        }
      }
      else {
        pcVar1 = (char *)(DAT_00011768 + 0x11670);
      }
    }
    else {
      pcVar1 = (char *)(DAT_00011764 + 0x1165c);
    }
  }
  puts(pcVar1);
  return 0xffffffff;
}



/* ===== FUN_00011788 @ 00011788 size=172 ===== */

undefined4 FUN_00011788(undefined4 *param_1)

{
  int __fd;
  int iVar1;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (param_1 == (undefined4 *)0x0) {
    puts((char *)(DAT_00011834 + 0x117a4));
  }
  else {
    __fd = open64((char *)(DAT_00011838 + 0x117c4),0);
    if (__fd == -1) {
      perror((char *)(DAT_0001183c + 0x117dc));
      return 0xffffffff;
    }
    iVar1 = ioctl(__fd,DAT_00011840,&local_34);
    if (iVar1 != -1) {
      *param_1 = local_34;
      param_1[1] = local_30;
      param_1[2] = local_2c;
      close(__fd);
      return 0;
    }
    perror((char *)(DAT_00011844 + 0x11800));
    close(__fd);
  }
  return 0xffffffff;
}



/* ===== FUN_000120b0 @ 000120b0 size=232 ===== */

undefined4 FUN_000120b0(undefined2 param_1,void *param_2,uint param_3)

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
  
  iVar2 = DAT_00012198 + 0x120cc;
  if ((int)param_3 < 0x401) {
    __fd = open64((char *)(DAT_000121a4 + 0x12118),2,0);
    if (__fd < 0) {
      __s = (char *)(DAT_000121a8 + 0x12134);
      __stream = (FILE *)**(undefined4 **)(iVar2 + DAT_0001219c);
    }
    else {
      local_422 = (undefined2)param_3;
      local_428 = DAT_000121ac;
      local_424 = param_1;
      memcpy(auStack_420,param_2,param_3 & 0xffff);
      iVar1 = ioctl(__fd,DAT_000121b0,&local_428);
      close(__fd);
      if (iVar1 == 0) {
        return 0;
      }
      __s = (char *)(DAT_000121b4 + 0x12194);
      __stream = (FILE *)**(undefined4 **)(iVar2 + DAT_0001219c);
    }
  }
  else {
    __s = (char *)(DAT_000121a0 + 0x120e0);
    __stream = (FILE *)**(undefined4 **)(iVar2 + DAT_0001219c);
  }
  fputs(__s,__stream);
  return 0xffffffff;
}



/* ===== FUN_00012620 @ 00012620 size=168 ===== */

int FUN_00012620(undefined4 param_1,undefined4 param_2)

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
  sprintf(local_50,(char *)(DAT_000126cc + 0x12650),DAT_000126c8 + 0x12648,param_1);
  iVar1 = FUN_00013c18(DAT_000126d0 + 0x12688,local_50,local_58);
  if (-1 < iVar1) {
    iVar1 = strcmp(local_58,(char *)(DAT_000126d4 + 0x126a0));
    if (iVar1 == 0) {
      iVar1 = FUN_0001397c(DAT_000126d8 + 0x126c0,local_50,param_2);
    }
    else {
      iVar1 = -0x16;
    }
  }
  return iVar1;
}



/* ===== FUN_000126dc @ 000126dc size=64 ===== */

void FUN_000126dc(undefined4 param_1)

{
  char acStack_48 [64];
  
  sprintf(acStack_48,(char *)(DAT_00012720 + 0x12704),DAT_0001271c + 0x126fc,param_1);
  FUN_00013994(DAT_00012724 + 0x12714,acStack_48);
  return;
}



/* ===== FUN_00012728 @ 00012728 size=156 ===== */

undefined4 FUN_00012728(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  char acStack_98 [64];
  char acStack_58 [68];
  
  iVar2 = DAT_000127c4 + 0x12748;
  sprintf(acStack_98,(char *)(DAT_000127c8 + 0x12750),iVar2,param_1);
  sprintf(acStack_58,(char *)(DAT_000127cc + 0x12770),iVar2,param_1);
  iVar2 = access(acStack_58,0);
  if (iVar2 == 0) {
    printf((char *)(DAT_000127d0 + 0x1279c),param_1,acStack_58);
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00013974(DAT_000127d4 + 0x127bc,acStack_98,0);
  }
  return uVar1;
}



/* ===== FUN_000127d8 @ 000127d8 size=68 ===== */

void FUN_000127d8(undefined4 param_1)

{
  char acStack_48 [64];
  
  sprintf(acStack_48,(char *)(DAT_00012820 + 0x12800),DAT_0001281c + 0x127f8,param_1);
  FUN_00013974(DAT_00012824 + 0x12814,acStack_48,0);
  return;
}



/* ===== FUN_00012828 @ 00012828 size=72 ===== */

void FUN_00012828(undefined4 param_1,undefined4 param_2)

{
  char acStack_50 [68];
  
  sprintf(acStack_50,(char *)(DAT_00012874 + 0x12850),DAT_00012870 + 0x1284c,param_1);
  FUN_00013974(DAT_00012878 + 0x12868,acStack_50,param_2);
  return;
}



/* ===== FUN_00012bfc @ 00012bfc size=40 ===== */

int FUN_00012bfc(void)

{
  int iVar1;
  
  iVar1 = FUN_000127d8();
  if (iVar1 < 0) {
    puts((char *)(DAT_00012c24 + 0x12c1c));
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_00012d7c @ 00012d7c size=232 ===== */

undefined4 FUN_00012d7c(void)

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
  
  piVar9 = (int *)(DAT_00012e64 + 0x12d98);
  piVar10 = (int *)(DAT_00012e68 + 0x12da0);
  iVar7 = DAT_00012e6c + 0x12da4;
  piVar3 = (int *)(DAT_00012e70 + 0x12da8);
  while (*piVar3 == 0) {
    piVar8 = *(int **)(iVar7 + DAT_00012e74);
    iVar1 = epoll_wait(*piVar10,(epoll_event *)*piVar8,*(int *)(*piVar9 + 8),-1);
    for (iVar6 = 0; iVar6 < iVar1; iVar6 = iVar6 + 1) {
      iVar4 = *piVar8;
      if ((*(uint *)(iVar4 + iVar6 * 0x10) & 1) != 0) {
        while (sVar2 = read(*(int *)(iVar4 + iVar6 * 0x10 + 8),auStack_38,0x10), 0 < sVar2) {
          if (((local_2c != 0) || (local_30 != 0 || local_2e != 0)) &&
             (pcVar5 = (code *)**(undefined4 **)(iVar7 + DAT_00012e78), pcVar5 != (code *)0x0)) {
            (*pcVar5)(auStack_38);
          }
        }
      }
    }
  }
  return 0;
}



/* ===== FUN_00012e7c @ 00012e7c size=620 ===== */

undefined4 FUN_00012e7c(char *param_1)

{
  char *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  epoll_event *__event;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  iVar7 = DAT_000130ec + 0x12e98;
  if (*(int *)(DAT_000130e8 + 0x12e8c) == 0) {
    if (param_1 == (char *)0x0) {
      pcVar1 = (char *)(DAT_000130f4 + 0x12ec0);
    }
    else {
      if (*(int *)(DAT_000130f8 + 0x12ecc) < 0) {
        piVar6 = (int *)(DAT_000130fc + 0x12ee4);
        iVar5 = *piVar6;
        pthread_mutex_init((pthread_mutex_t *)(DAT_00013100 + 0x12ee8),(pthread_mutexattr_t *)0x0);
        if (iVar5 == 0) {
          puVar2 = malloc(0xc);
          *piVar6 = (int)puVar2;
          if (puVar2 == (undefined4 *)0x0) {
            pcVar1 = (char *)(DAT_00013104 + 0x12f1c);
            goto LAB_00012ea0;
          }
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2[2] = 0;
        }
        iVar5 = epoll_create1(0x80000);
        *(int *)(DAT_00013108 + 0x12f30) = iVar5;
        if (iVar5 < 0) {
          pcVar1 = (char *)(DAT_0001310c + 0x12f40);
          goto LAB_00012ea0;
        }
      }
      for (iVar5 = **(int **)(DAT_00013110 + 0x12f4c); iVar5 != 0; iVar5 = *(int *)(iVar5 + 8)) {
        iVar3 = strcmp(param_1,*(char **)(iVar5 + 4));
        if (iVar3 == 0) {
          pcVar1 = (char *)(DAT_00013114 + 0x12f74);
          goto LAB_00012ea0;
        }
      }
      piVar6 = malloc(0xc);
      if (piVar6 != (int *)0x0) {
        *piVar6 = 0;
        piVar6[2] = 0;
        pcVar1 = malloc(0x80);
        piVar6[1] = (int)pcVar1;
        if (pcVar1 == (char *)0x0) {
          puts((char *)(DAT_0001311c + 0x12fc4));
        }
        else {
          memset(pcVar1,0,0x80);
          strcpy(pcVar1,param_1);
          iVar5 = open64(param_1,0x800);
          *piVar6 = iVar5;
          if (iVar5 < 0) {
            printf((char *)(DAT_00013120 + 0x13014),param_1);
            if ((void *)piVar6[1] != (void *)0x0) {
              free((void *)piVar6[1]);
            }
          }
          else {
            __event = *(epoll_event **)(iVar7 + DAT_00013124);
            (__event->data).fd = iVar5;
            iVar7 = DAT_00013128;
            __event->events = 0x80000001;
            iVar7 = epoll_ctl(*(int *)(iVar7 + 0x1304c),1,iVar5,__event);
            if (iVar7 != -1) {
              piVar4 = *(int **)(DAT_00013130 + 0x130a0);
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
            printf((char *)(DAT_0001312c + 0x13074),pcVar1);
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
      pcVar1 = (char *)(DAT_00013118 + 0x12f94);
    }
  }
  else {
    pcVar1 = (char *)(DAT_000130f0 + 0x12ea4);
  }
LAB_00012ea0:
  puts(pcVar1);
  return 0xffffffff;
}



/* ===== FUN_00013134 @ 00013134 size=312 ===== */

undefined4 FUN_00013134(char *param_1)

{
  int iVar1;
  epoll_event *__event;
  int *__ptr;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  
  iVar2 = DAT_0001326c + 0x13148;
  if (param_1 == (char *)0x0) {
    uVar5 = 0xffffffff;
    puts((char *)(DAT_00013270 + 0x13158));
  }
  else {
    if ((int *)**(undefined4 **)(DAT_00013274 + 0x1316c) != (int *)0x0) {
      piVar3 = (int *)**(undefined4 **)(DAT_00013274 + 0x1316c);
      piVar4 = (int *)0x0;
      do {
        __ptr = piVar3;
        iVar1 = strcmp(param_1,(char *)__ptr[1]);
        if (iVar1 == 0) {
          pthread_mutex_lock((pthread_mutex_t *)(DAT_0001327c + 0x131c4));
          iVar1 = *__ptr;
          __event = *(epoll_event **)(iVar2 + DAT_00013280);
          iVar2 = *(int *)(DAT_00013284 + 0x131e0);
          __event->events = 1;
          (__event->data).fd = iVar1;
          epoll_ctl(iVar2,2,iVar1,__event);
          close(*__ptr);
          piVar3 = *(int **)(DAT_00013288 + 0x13204);
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
          iVar2 = DAT_0001328c;
          iVar1 = piVar3[2];
          piVar3[2] = iVar1 + -1;
          if (iVar1 + -1 == 0) {
            piVar3[1] = 0;
            *piVar3 = 0;
          }
          pthread_mutex_unlock((pthread_mutex_t *)(iVar2 + 0x13260));
          return 0;
        }
        piVar3 = (int *)__ptr[2];
        piVar4 = __ptr;
      } while ((int *)__ptr[2] != (int *)0x0);
    }
    uVar5 = 0;
    puts((char *)(DAT_00013278 + 0x1318c));
  }
  return uVar5;
}



/* ===== FUN_00013290 @ 00013290 size=220 ===== */

undefined4 FUN_00013290(int param_1)

{
  char *__s;
  size_t __nmemb;
  void *pvVar1;
  pthread_t *__newthread;
  int iVar2;
  int *piVar3;
  
  iVar2 = DAT_0001336c + 0x132a4;
  if (param_1 == 0) {
    __s = (char *)(DAT_00013370 + 0x132b0);
LAB_000132ac:
    puts(__s);
  }
  else {
    pthread_mutex_lock((pthread_mutex_t *)(DAT_00013374 + 0x132c8));
    **(int **)(iVar2 + DAT_00013378) = param_1;
    __nmemb = *(size_t *)(*(int *)(DAT_0001337c + 0x132e0) + 8);
    if ((0 < (int)__nmemb) && (piVar3 = *(int **)(iVar2 + DAT_00013380), *piVar3 == 0)) {
      pvVar1 = calloc(__nmemb,0x10);
      *piVar3 = (int)pvVar1;
      if (pvVar1 == (void *)0x0) {
        __s = (char *)(DAT_00013384 + 0x1331c);
        goto LAB_000132ac;
      }
    }
    __newthread = (pthread_t *)(DAT_0001338c + 0x13338);
    *(undefined4 *)(DAT_00013388 + 0x13334) = 0;
    iVar2 = pthread_create(__newthread,(pthread_attr_t *)0x0,
                           (__start_routine *)(DAT_00013390 + 0x13344),(void *)0x0);
    if (iVar2 == 0) {
      pthread_mutex_unlock((pthread_mutex_t *)(DAT_00013398 + 0x13368));
      return 0;
    }
    printf((char *)(DAT_00013394 + 0x13358));
  }
  return 0xffffffff;
}



/* ===== FUN_0001339c @ 0001339c size=332 ===== */

undefined4 FUN_0001339c(void)

{
  int *__ptr;
  void *pvVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  pthread_t *ppVar5;
  pthread_mutex_t *__mutex;
  int *piVar6;
  
  pthread_mutex_lock((pthread_mutex_t *)(DAT_000134e8 + 0x133ac));
  iVar3 = DAT_000134f0 + 0x133c8;
  *(undefined4 *)(DAT_000134ec + 0x133c0) = 0xffffffff;
  *(undefined4 *)(DAT_000134f4 + 0x133d8) = 1;
  **(undefined4 **)(iVar3 + DAT_000134f8) = 0;
  puVar4 = *(undefined4 **)(iVar3 + DAT_000134fc);
  pvVar1 = (void *)*puVar4;
  if (pvVar1 != (void *)0x0) {
    free(pvVar1);
    *puVar4 = 0;
  }
  piVar2 = (int *)(DAT_00013500 + 0x1340c);
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
  puVar4 = (undefined4 *)(DAT_00013504 + 0x13464);
  pvVar1 = (void *)*puVar4;
  if (pvVar1 != (void *)0x0) {
    free(pvVar1);
    *puVar4 = 0;
  }
  ppVar5 = (pthread_t *)(DAT_00013508 + 0x13484);
  if (*ppVar5 != 0) {
    pthread_cancel(*ppVar5);
    iVar3 = pthread_join(*ppVar5,(void **)0x0);
    if (iVar3 != 0) {
      printf((char *)(DAT_0001350c + 0x134b4));
      pthread_mutex_unlock((pthread_mutex_t *)(DAT_00013510 + 0x134c0));
      return 0xffffffff;
    }
    *ppVar5 = 0;
  }
  __mutex = (pthread_mutex_t *)(DAT_00013514 + 0x134d4);
  pthread_mutex_unlock(__mutex);
  pthread_mutex_destroy(__mutex);
  return 0;
}



/* ===== FUN_00013974 @ 00013974 size=500 ===== */

/* WARNING: Removing unreachable block (ram,0x0001363c) */
/* WARNING: Removing unreachable block (ram,0x00013654) */
/* WARNING: Removing unreachable block (ram,0x00013678) */
/* WARNING: Removing unreachable block (ram,0x000136bc) */
/* WARNING: Removing unreachable block (ram,0x000136cc) */
/* WARNING: Removing unreachable block (ram,0x000136d8) */
/* WARNING: Removing unreachable block (ram,0x0001368c) */
/* WARNING: Removing unreachable block (ram,0x0001369c) */
/* WARNING: Removing unreachable block (ram,0x000136a0) */
/* WARNING: Removing unreachable block (ram,0x000136a4) */
/* WARNING: Removing unreachable block (ram,0x000136b0) */

int FUN_00013974(char *param_1,char *param_2,undefined4 param_3)

{
  size_t sVar1;
  size_t sVar2;
  char *__s;
  FILE *__stream;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  sVar1 = strlen(param_2);
  iVar5 = DAT_00013704 + 0x13544;
  sVar2 = strlen(param_1);
  __s = malloc(sVar1 + sVar2 + 2);
  if (__s == (char *)0x0) {
    iVar4 = -0xc;
  }
  else {
    iVar4 = sprintf(__s,(char *)(DAT_00013708 + 0x13578),param_2,param_1);
    if (-1 < iVar4) {
      __stream = fopen64(__s,(char *)(DAT_0001370c + 0x13590));
      if (__stream == (FILE *)0x0) {
        piVar3 = __errno_location();
        iVar4 = -*piVar3;
        fprintf((FILE *)**(undefined4 **)(iVar5 + DAT_00013710),(char *)(DAT_00013714 + 0x135b4),__s
               );
      }
      else {
        iVar4 = fprintf(__stream,(char *)(DAT_00013718 + 0x135e8),param_3);
        if (iVar4 < 0) {
          iVar5 = fclose(__stream);
          if (iVar5 != 0) {
            perror((char *)(DAT_0001371c + 0x13614));
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



/* ===== FUN_0001397c @ 0001397c size=8 ===== */

int FUN_0001397c(char *param_1,char *param_2,int param_3)

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
  iVar8 = DAT_00013704 + 0x13544;
  sVar2 = strlen(param_1);
  __s = malloc(sVar1 + sVar2 + 2);
  if (__s == (char *)0x0) {
    return -0xc;
  }
  iVar3 = sprintf(__s,(char *)(DAT_00013708 + 0x13578),param_2,param_1);
  if (iVar3 < 0) goto LAB_000135c0;
  pFVar4 = fopen64(__s,(char *)(DAT_0001370c + 0x13590));
  if (pFVar4 == (FILE *)0x0) {
    piVar5 = __errno_location();
    puVar7 = *(undefined4 **)(iVar8 + DAT_00013710);
    pcVar6 = (char *)(DAT_00013714 + 0x135b4);
    iVar3 = *piVar5;
LAB_000135b8:
    iVar3 = -iVar3;
    fprintf((FILE *)*puVar7,pcVar6,__s);
  }
  else {
    pcVar6 = (char *)(DAT_00013718 + 0x135e8);
    iVar3 = fprintf(pFVar4,pcVar6,param_3);
    if (iVar3 < 0) {
      iVar8 = fclose(pFVar4);
      if (iVar8 == 0) goto LAB_000135c0;
      pcVar6 = (char *)(DAT_0001371c + 0x13614);
LAB_00013610:
      perror(pcVar6);
      goto LAB_000135c0;
    }
    iVar3 = fclose(pFVar4);
    if (iVar3 == 0) {
      pFVar4 = fopen64(__s,(char *)(DAT_00013720 + 0x1364c));
      if (pFVar4 == (FILE *)0x0) {
        piVar5 = __errno_location();
        puVar7 = *(undefined4 **)(iVar8 + DAT_00013710);
        pcVar6 = (char *)(DAT_00013724 + 0x13670);
        iVar3 = *piVar5;
        goto LAB_000135b8;
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
        if (iVar8 == 0) goto LAB_000135c0;
        pcVar6 = (char *)(DAT_00013728 + 0x136bc);
        goto LAB_00013610;
      }
      iVar3 = fclose(pFVar4);
      if (iVar3 == 0) {
        iVar3 = 0;
        if (aiStack_2c[0] != param_3) {
          iVar3 = -1;
          fprintf((FILE *)**(undefined4 **)(iVar8 + DAT_00013710),(char *)(DAT_0001372c + 0x136f4),
                  param_3,param_2,param_1);
        }
        goto LAB_000135c0;
      }
    }
    piVar5 = __errno_location();
    iVar3 = -*piVar5;
  }
LAB_000135c0:
  free(__s);
  return iVar3;
}



/* ===== FUN_00013984 @ 00013984 size=540 ===== */

int FUN_00013984(char *param_1,char *param_2,char *param_3)

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
  iVar7 = DAT_00013944 + 0x1375c;
  sVar2 = strlen(param_1);
  __s = malloc(sVar1 + sVar2 + 2);
  if (__s == (char *)0x0) {
    fputs((char *)(DAT_0001394c + 0x13790),(FILE *)**(undefined4 **)(iVar7 + DAT_00013948));
    return -0xc;
  }
  iVar3 = sprintf(__s,(char *)(DAT_00013950 + 0x137b4),param_2,param_1);
  if (iVar3 < 0) goto LAB_000137fc;
  pFVar4 = fopen64(__s,(char *)(DAT_00013954 + 0x137cc));
  if (pFVar4 == (FILE *)0x0) {
    piVar5 = __errno_location();
    iVar3 = -*piVar5;
    fprintf((FILE *)**(undefined4 **)(iVar7 + DAT_00013948),(char *)(DAT_00013958 + 0x137f0),__s);
    goto LAB_000137fc;
  }
  pcVar8 = (char *)(DAT_0001395c + 0x1381c);
  iVar3 = fprintf(pFVar4,pcVar8,param_3);
  if (iVar3 < 0) {
    iVar7 = fclose(pFVar4);
    if (iVar7 == 0) goto LAB_000137fc;
    pcVar8 = (char *)(DAT_00013960 + 0x13848);
LAB_00013844:
    perror(pcVar8);
  }
  else {
    iVar6 = fclose(pFVar4);
    if (iVar6 == 0) {
      pFVar4 = fopen64(__s,(char *)(DAT_00013964 + 80000));
      if (pFVar4 == (FILE *)0x0) {
        piVar5 = __errno_location();
        iVar3 = -*piVar5;
        fputs((char *)(DAT_00013968 + 0x138ac),(FILE *)**(undefined4 **)(iVar7 + DAT_00013948));
        goto LAB_000137fc;
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
        if (iVar7 == 0) goto LAB_000137fc;
        pcVar8 = (char *)(DAT_0001396c + 0x138f4);
        goto LAB_00013844;
      }
      iVar6 = fclose(pFVar4);
      if (iVar6 == 0) {
        iVar6 = strcmp(__s,param_3);
        if (iVar6 != 0) {
          iVar3 = -1;
          fprintf((FILE *)**(undefined4 **)(iVar7 + DAT_00013948),(char *)(DAT_00013970 + 0x13934),
                  __s,param_3,param_2,param_1);
        }
        goto LAB_000137fc;
      }
    }
    piVar5 = __errno_location();
    iVar3 = -*piVar5;
  }
LAB_000137fc:
  free(__s);
  return iVar3;
}



/* ===== FUN_00013994 @ 00013994 size=300 ===== */

char * FUN_00013994(char *param_1,char *param_2)

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
  iVar4 = DAT_00013ac0 + 0x139b4;
  sVar2 = strlen(param_1);
  __s = malloc(sVar1 + sVar2 + 2);
  if (__s == (char *)0x0) {
    fputs((char *)(DAT_00013ac8 + 0x139e4),(FILE *)**(undefined4 **)(iVar4 + DAT_00013ac4));
    return (char *)-0xc;
  }
  local_1c = (char *)sprintf(__s,(char *)(DAT_00013acc + 0x13a08),param_2,param_1,pcVar5);
  if ((int)local_1c < 0) goto LAB_00013a9c;
  __stream = fopen64(__s,(char *)(DAT_00013ad0 + 0x13a24));
  piVar3 = __errno_location();
  iVar4 = DAT_00013ad4;
  if (__stream != (FILE *)0x0) {
    *piVar3 = 0;
    iVar4 = fscanf(__stream,(char *)(iVar4 + 0x13a60),&local_1c);
    if (iVar4 != 1) {
      if (*piVar3 == 0) {
        local_1c = (char *)0xffffffc3;
      }
      else {
        local_1c = (char *)-*piVar3;
      }
      iVar4 = fclose(__stream);
      if (iVar4 != 0) {
        perror((char *)(DAT_00013ad8 + 0x13a9c));
      }
      goto LAB_00013a9c;
    }
    iVar4 = fclose(__stream);
    if (iVar4 == 0) goto LAB_00013a9c;
  }
  local_1c = (char *)-*piVar3;
LAB_00013a9c:
  free(__s);
  return local_1c;
}



/* ===== FUN_00013c18 @ 00013c18 size=288 ===== */

int FUN_00013c18(char *param_1,char *param_2,undefined4 param_3)

{
  size_t sVar1;
  size_t sVar2;
  char *__s;
  FILE *__stream;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  sVar1 = strlen(param_2);
  iVar5 = DAT_00013d38 + 0x13c3c;
  sVar2 = strlen(param_1);
  __s = malloc(sVar1 + sVar2 + 2);
  if (__s == (char *)0x0) {
    fputs((char *)(DAT_00013d40 + 0x13c70),(FILE *)**(undefined4 **)(iVar5 + DAT_00013d3c));
    return -0xc;
  }
  iVar5 = sprintf(__s,(char *)(DAT_00013d44 + 0x13c90),param_2,param_1);
  if (iVar5 < 0) goto LAB_00013d18;
  __stream = fopen64(__s,(char *)(DAT_00013d48 + 0x13ca8));
  piVar3 = __errno_location();
  iVar4 = DAT_00013d4c;
  if (__stream != (FILE *)0x0) {
    *piVar3 = 0;
    iVar4 = fscanf(__stream,(char *)(iVar4 + 0x13ce0),param_3);
    if (iVar4 != 1) {
      if (*piVar3 == 0) {
        iVar5 = -0x3d;
      }
      else {
        iVar5 = -*piVar3;
      }
      iVar4 = fclose(__stream);
      if (iVar4 != 0) {
        perror((char *)(DAT_00013d50 + 0x13d18));
      }
      goto LAB_00013d18;
    }
    iVar4 = fclose(__stream);
    if (iVar4 == 0) goto LAB_00013d18;
  }
  iVar5 = -*piVar3;
LAB_00013d18:
  free(__s);
  return iVar5;
}



/* ===== _DT_FINI @ 00013d54 size=16 ===== */

void _DT_FINI(void)

{
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00026000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 0002600c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_create @ 00026010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 00026014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 00026018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 0002601c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_init @ 00026020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 00026024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::readdir64 @ 00026028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent64 * readdir64(DIR *__dirp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 0002602c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::read @ 00026030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::perror @ 00026034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::closedir @ 00026038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int closedir(DIR *__dirp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::open64 @ 0002603c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strchr @ 00026040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 00026044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mktime @ 00026048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t mktime(tm *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 0002604c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::select @ 00026050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 00026054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 00026058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 0002605c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen64 @ 00026060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fscanf @ 00026064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fscanf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::settimeofday @ 00026068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int settimeofday(timeval *__tv,timezone *__tz)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 0002606c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_cancel @ 00026070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cancel(pthread_t __th)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sscanf @ 00026074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::feof @ 00026078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int feof(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::epoll_ctl @ 0002607c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int epoll_ctl(int __epfd,int __op,int __fd,epoll_event *__event)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00026080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usleep @ 00026084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 00026088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 0002608c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ioctl @ 00026090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_destroy @ 00026094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 00026098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::epoll_wait @ 0002609c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int epoll_wait(int __epfd,epoll_event *__events,int __maxevents,int __timeout)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 000260a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcmp @ 000260a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::epoll_create1 @ 000260a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int epoll_create1(int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::write @ 000260ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 000260b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::opendir @ 000260b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * opendir(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::access @ 000260b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::system @ 000260bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int system(char *__command)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 000260c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 000260c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fgets @ 000260c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_lock @ 000260cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_unlock @ 000260d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strstr @ 000260d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 000260d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 000260dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_join @ 000260e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


