// rk_led_test — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _DT_INIT @ 00010b94 size=16 ===== */

void _DT_INIT(void)

{
  return;
}



/* ===== <EXTERNAL>::strcpy @ 00010bb8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_0002500c)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::ioctl @ 00010bd0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_00025014)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::printf @ 00010bdc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00025018)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::pthread_create @ 00010be8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_0002501c)(__newthread);
  return iVar1;
}



/* ===== <EXTERNAL>::epoll_wait @ 00010bf4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int epoll_wait(int __epfd,epoll_event *__events,int __maxevents,int __timeout)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_epoll_wait_00025020)(__epfd);
  return iVar1;
}



/* ===== <EXTERNAL>::strerror @ 00010c00 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_00025024)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::fscanf @ 00010c0c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fscanf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fscanf_00025028)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::fgets @ 00010c18 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_fgets_0002502c)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::memcpy @ 00010c24 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00025030)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::pthread_cancel @ 00010c30 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cancel(pthread_t __th)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_cancel_00025034)(__th);
  return iVar1;
}



/* ===== <EXTERNAL>::perror @ 00010c3c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
  (*(code *)PTR_perror_00025038)(__s);
  return;
}



/* ===== <EXTERNAL>::puts @ 00010c48 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_0002503c)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::system @ 00010c54 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int system(char *__command)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_system_00025040)(__command);
  return iVar1;
}



/* ===== <EXTERNAL>::malloc @ 00010c6c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00025048)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::settimeofday @ 00010c78 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int settimeofday(timeval *__tv,timezone *__tz)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_settimeofday_0002504c)(__tv);
  return iVar1;
}



/* ===== <EXTERNAL>::select @ 00010c84 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_select_00025050)(__nfds);
  return iVar1;
}



/* ===== <EXTERNAL>::write @ 00010cb4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_write_00025060)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::fprintf @ 00010cc0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00025064)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00010ccc size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00025068)();
  return;
}



/* ===== <EXTERNAL>::mktime @ 00010cd8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t mktime(tm *__tp)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_mktime_0002506c)(__tp);
  return tVar1;
}



/* ===== <EXTERNAL>::strstr @ 00010ce4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strstr_00025070)(__haystack);
  return pcVar1;
}



/* ===== <EXTERNAL>::read @ 00010cf0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_00025074)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::strncmp @ 00010cfc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_00025078)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::readdir64 @ 00010d14 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent64 * readdir64(DIR *__dirp)

{
  dirent64 *pdVar1;
  
  pdVar1 = (dirent64 *)(*(code *)PTR_readdir64_00025080)(__dirp);
  return pdVar1;
}



/* ===== <EXTERNAL>::sscanf @ 00010d2c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sscanf_00025088)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 00010d44 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00025090)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::fclose @ 00010d50 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_00025094)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::open64 @ 00010d5c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open64_00025098)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::opendir @ 00010d68 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * opendir(char *__name)

{
  DIR *pDVar1;
  
  pDVar1 = (DIR *)(*(code *)PTR_opendir_0002509c)(__name);
  return pDVar1;
}



/* ===== <EXTERNAL>::strcmp @ 00010d74 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_000250a0)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::pthread_mutex_unlock @ 00010d80 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_000250a4)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::sprintf @ 00010d8c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_000250a8)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::access @ 00010d98 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_access_000250ac)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::pthread_mutex_destroy @ 00010da4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_000250b0)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 00010dbc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_000250b8)();
  return piVar1;
}



/* ===== <EXTERNAL>::pthread_mutex_init @ 00010dc8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_000250bc)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::strlen @ 00010dd4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_000250c0)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::strchr @ 00010de0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_000250c4)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::fputs @ 00010dec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_000250c8)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::closedir @ 00010df8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int closedir(DIR *__dirp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_closedir_000250cc)(__dirp);
  return iVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00010e10 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_000250d4)();
  return;
}



/* ===== <EXTERNAL>::close @ 00010e1c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_000250d8)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 00010e28 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_000250dc)(__ptr);
  return;
}



/* ===== <EXTERNAL>::fopen64 @ 00010e34 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen64_000250e0)(__filename);
  return pFVar1;
}



/* ===== entry @ 00010e64 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_0002508c)
            (DAT_00010e98,param_2,&stack0x00000004,DAT_00010e9c,DAT_00010e94,param_1);
  return;
}



/* ===== FUN_00010ea0 @ 00010ea0 size=32 ===== */

void FUN_00010ea0(void)

{
  if (DAT_00010ec4 == DAT_00010ec0) {
    return;
  }
  if (DAT_00010ec8 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010ebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00010ec8)();
  return;
}



/* ===== _FINI_0 @ 00010f04 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00010f40;
  if (*DAT_00010f40 != '\0') {
    return;
  }
  FUN_00010ea0();
  if (DAT_00010f44 != 0) {
    __deregister_frame_info(DAT_00010f48);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00010f4c size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00010f70 != 0) {
    __register_frame_info(DAT_00010f78,DAT_00010f74);
  }
  if ((DAT_00010efc - DAT_00010ef8 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00010f00 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010ef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00010f00)();
  return;
}



/* ===== FUN_00010f7c @ 00010f7c size=196 ===== */

undefined4 FUN_00010f7c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ssize_t sVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  void *__buf;
  undefined4 local_c;
  
  if (0 < *(int *)(DAT_00011040 + 0x10f90)) {
    __buf = *(void **)(DAT_00011044 + 0x10f94 + DAT_00011048);
    local_c = param_4;
    sVar1 = write(*(int *)(DAT_00011040 + 0x10f90),__buf,1);
    if (sVar1 < 0) {
      piVar2 = __errno_location();
      printf((char *)(DAT_0001104c + 0x10fcc),*piVar2);
    }
    local_c = 1;
    iVar3 = ioctl(*(int *)(DAT_00011050 + 0x10fe8),DAT_00011054,&local_c,DAT_00011050,param_1,__buf,
                  param_3);
    if (iVar3 == 0) {
      puts((char *)(DAT_00011058 + 0x10ffc));
    }
    else {
      piVar2 = __errno_location();
      pcVar4 = strerror(*piVar2);
      printf((char *)(DAT_00011060 + 0x1103c),pcVar4);
    }
    piVar2 = (int *)(DAT_0001105c + 0x11008);
    close(*piVar2);
    *piVar2 = 0;
  }
  return 0;
}



/* ===== FUN_00011274 @ 00011274 size=200 ===== */

undefined4 FUN_00011274(undefined4 *param_1)

{
  int __fd;
  int iVar1;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  __fd = open64((char *)(DAT_0001133c + 0x11290),0);
  if (__fd == -1) {
    perror((char *)(DAT_00011340 + 0x112a8));
  }
  else {
    iVar1 = ioctl(__fd,DAT_00011344,&local_34);
    if (iVar1 == -1) {
      perror((char *)(DAT_00011348 + 0x112d4));
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
      puts((char *)(DAT_0001134c + 0x112f8));
    }
    close(__fd);
  }
  return 0xffffffff;
}



/* ===== FUN_00011350 @ 00011350 size=432 ===== */

undefined4 FUN_00011350(uint *param_1)

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
    pcVar1 = (char *)(DAT_00011500 + 0x1136c);
  }
  else {
    __fd = open64((char *)(DAT_00011504 + 0x11384),2);
    if (__fd == -1) {
      perror((char *)(DAT_00011508 + 0x1139c));
      return 0xffffffff;
    }
    local_60 = *param_1;
    local_5c = param_1[1];
    local_4c = param_1[5] - 0x76c;
    local_58 = param_1[2];
    local_54 = param_1[3];
    local_50 = param_1[4] - 1;
    if (local_4c < 1) {
      pcVar1 = (char *)(DAT_0001150c + 0x113f4);
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
              iVar2 = ioctl(__fd,DAT_00011524,&local_60);
              if (iVar2 == -1) {
                perror((char *)(DAT_00011528 + 0x114a0));
                close(__fd);
                return 0xffffffff;
              }
              iVar2 = settimeofday(&local_68,(timezone *)0x0);
              if (iVar2 != 0) {
                piVar3 = __errno_location();
                if (*piVar3 == 1) {
                  pcVar1 = (char *)(DAT_0001152c + 0x114dc);
                }
                else {
                  if (*piVar3 != 0x16) goto LAB_000114dc;
                  pcVar1 = (char *)((int)&DAT_00011500 + DAT_00011530);
                }
                puts(pcVar1);
              }
LAB_000114dc:
              close(__fd);
              return 0;
            }
            pcVar1 = (char *)(DAT_00011520 + 0x1144c);
          }
          else {
            pcVar1 = (char *)(DAT_0001151c + 0x1143c);
          }
        }
        else {
          pcVar1 = (char *)(DAT_00011518 + 0x1142c);
        }
      }
      else {
        pcVar1 = (char *)(DAT_00011514 + 0x1141c);
      }
    }
    else {
      pcVar1 = (char *)(DAT_00011510 + 0x11408);
    }
  }
  puts(pcVar1);
  return 0xffffffff;
}



/* ===== FUN_00011534 @ 00011534 size=172 ===== */

undefined4 FUN_00011534(undefined4 *param_1)

{
  int __fd;
  int iVar1;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (param_1 == (undefined4 *)0x0) {
    puts((char *)(DAT_000115e0 + 0x11550));
  }
  else {
    __fd = open64((char *)(DAT_000115e4 + 0x11570),0);
    if (__fd == -1) {
      perror((char *)(DAT_000115e8 + 0x11588));
      return 0xffffffff;
    }
    iVar1 = ioctl(__fd,DAT_000115ec,&local_34);
    if (iVar1 != -1) {
      *param_1 = local_34;
      param_1[1] = local_30;
      param_1[2] = local_2c;
      close(__fd);
      return 0;
    }
    perror((char *)(DAT_000115f0 + 0x115ac));
    close(__fd);
  }
  return 0xffffffff;
}



/* ===== FUN_00011e5c @ 00011e5c size=232 ===== */

undefined4 FUN_00011e5c(undefined2 param_1,void *param_2,uint param_3)

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
  
  iVar2 = DAT_00011f44 + 0x11e78;
  if ((int)param_3 < 0x401) {
    __fd = open64((char *)(DAT_00011f50 + 0x11ec4),2,0);
    if (__fd < 0) {
      __s = (char *)(DAT_00011f54 + 0x11ee0);
      __stream = (FILE *)**(undefined4 **)(iVar2 + DAT_00011f48);
    }
    else {
      local_422 = (undefined2)param_3;
      local_428 = DAT_00011f58;
      local_424 = param_1;
      memcpy(auStack_420,param_2,param_3 & 0xffff);
      iVar1 = ioctl(__fd,DAT_00011f5c,&local_428);
      close(__fd);
      if (iVar1 == 0) {
        return 0;
      }
      __s = (char *)(DAT_00011f60 + 0x11f40);
      __stream = (FILE *)**(undefined4 **)(iVar2 + DAT_00011f48);
    }
  }
  else {
    __s = (char *)(DAT_00011f4c + 0x11e8c);
    __stream = (FILE *)**(undefined4 **)(iVar2 + DAT_00011f48);
  }
  fputs(__s,__stream);
  return 0xffffffff;
}



/* ===== FUN_000123cc @ 000123cc size=168 ===== */

int FUN_000123cc(undefined4 param_1,undefined4 param_2)

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
  sprintf(local_50,(char *)(DAT_00012478 + 0x123fc),DAT_00012474 + 0x123f4,param_1);
  iVar1 = FUN_000139c4(DAT_0001247c + 0x12434,local_50,local_58);
  if (-1 < iVar1) {
    iVar1 = strcmp(local_58,(char *)(DAT_00012480 + 0x1244c));
    if (iVar1 == 0) {
      iVar1 = FUN_00013728(DAT_00012484 + 0x1246c,local_50,param_2);
    }
    else {
      iVar1 = -0x16;
    }
  }
  return iVar1;
}



/* ===== FUN_00012488 @ 00012488 size=64 ===== */

void FUN_00012488(undefined4 param_1)

{
  char acStack_48 [64];
  
  sprintf(acStack_48,(char *)(DAT_000124cc + 0x124b0),DAT_000124c8 + 0x124a8,param_1);
  FUN_00013740(DAT_000124d0 + 0x124c0,acStack_48);
  return;
}



/* ===== FUN_000124d4 @ 000124d4 size=156 ===== */

undefined4 FUN_000124d4(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  char acStack_98 [64];
  char acStack_58 [68];
  
  iVar2 = DAT_00012570 + 0x124f4;
  sprintf(acStack_98,(char *)(DAT_00012574 + 0x124fc),iVar2,param_1);
  sprintf(acStack_58,(char *)(DAT_00012578 + 0x1251c),iVar2,param_1);
  iVar2 = access(acStack_58,0);
  if (iVar2 == 0) {
    printf((char *)(DAT_0001257c + 0x12548),param_1,acStack_58);
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00013720(DAT_00012580 + 0x12568,acStack_98,0);
  }
  return uVar1;
}



/* ===== FUN_00012584 @ 00012584 size=68 ===== */

void FUN_00012584(undefined4 param_1)

{
  char acStack_48 [64];
  
  sprintf(acStack_48,(char *)(DAT_000125cc + 0x125ac),DAT_000125c8 + 0x125a4,param_1);
  FUN_00013720(DAT_000125d0 + 0x125c0,acStack_48,0);
  return;
}



/* ===== FUN_000125d4 @ 000125d4 size=72 ===== */

void FUN_000125d4(undefined4 param_1,undefined4 param_2)

{
  char acStack_50 [68];
  
  sprintf(acStack_50,(char *)(DAT_00012620 + 0x125fc),DAT_0001261c + 0x125f8,param_1);
  FUN_00013720(DAT_00012624 + 0x12614,acStack_50,param_2);
  return;
}



/* ===== FUN_000129a8 @ 000129a8 size=40 ===== */

int FUN_000129a8(void)

{
  int iVar1;
  
  iVar1 = FUN_00012584();
  if (iVar1 < 0) {
    puts((char *)(DAT_000129d0 + 0x129c8));
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_000129d4 @ 000129d4 size=292 ===== */

int FUN_000129d4(int param_1,int param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  char acStack_60 [68];
  
  pcVar2 = (char *)(DAT_00012af8 + 0x129f4);
  iVar1 = access(pcVar2,0);
  if (iVar1 == 0) {
    if (param_1 == 0) {
      pcVar2 = (char *)(DAT_00012b00 + 0x12a30);
    }
    else {
      iVar1 = sprintf(acStack_60,(char *)(DAT_00012b04 + 0x12a48),pcVar2,param_1);
      if (iVar1 < 0) {
        return iVar1;
      }
      iVar1 = FUN_00013720(DAT_00012b08 + 0x12a6c,acStack_60,param_3);
      if (iVar1 < 0) {
        pcVar2 = (char *)(DAT_00012b0c + 0x12a7c);
      }
      else {
        if (param_3 == 0) {
          return 0;
        }
        if (param_2 == 0) {
          iVar1 = DAT_00012b10 + 0x12a98;
        }
        else {
          iVar1 = DAT_00012b1c + 0x12ac4;
        }
        iVar1 = FUN_00013738(DAT_00012b14 + 0x12aa4,acStack_60,iVar1);
        if (-1 < iVar1) {
          if (param_2 != 0) {
            return 0;
          }
          iVar1 = FUN_00013720(DAT_00012b20 + 0x12ae0,acStack_60,param_3);
          if (-1 < iVar1) {
            return 0;
          }
          puts((char *)(DAT_00012b24 + 0x12af4));
          return 0;
        }
        pcVar2 = (char *)(DAT_00012b18 + 0x12ab8);
      }
    }
  }
  else {
    pcVar2 = (char *)(DAT_00012afc + 0x12a10);
  }
  puts(pcVar2);
  return -1;
}



/* ===== FUN_00012b28 @ 00012b28 size=232 ===== */

undefined4 FUN_00012b28(void)

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
  
  piVar9 = (int *)(DAT_00012c10 + 0x12b44);
  piVar10 = (int *)(DAT_00012c14 + 0x12b4c);
  iVar7 = DAT_00012c18 + 0x12b50;
  piVar3 = (int *)(DAT_00012c1c + 0x12b54);
  while (*piVar3 == 0) {
    piVar8 = *(int **)(iVar7 + DAT_00012c20);
    iVar1 = epoll_wait(*piVar10,(epoll_event *)*piVar8,*(int *)(*piVar9 + 8),-1);
    for (iVar6 = 0; iVar6 < iVar1; iVar6 = iVar6 + 1) {
      iVar4 = *piVar8;
      if ((*(uint *)(iVar4 + iVar6 * 0x10) & 1) != 0) {
        while (sVar2 = read(*(int *)(iVar4 + iVar6 * 0x10 + 8),auStack_38,0x10), 0 < sVar2) {
          if (((local_2c != 0) || (local_30 != 0 || local_2e != 0)) &&
             (pcVar5 = (code *)**(undefined4 **)(iVar7 + DAT_00012c24), pcVar5 != (code *)0x0)) {
            (*pcVar5)(auStack_38);
          }
        }
      }
    }
  }
  return 0;
}



/* ===== FUN_00013720 @ 00013720 size=500 ===== */

/* WARNING: Removing unreachable block (ram,0x000133e8) */
/* WARNING: Removing unreachable block (ram,0x00013400) */
/* WARNING: Removing unreachable block (ram,0x00013424) */
/* WARNING: Removing unreachable block (ram,0x00013468) */
/* WARNING: Removing unreachable block (ram,0x00013478) */
/* WARNING: Removing unreachable block (ram,0x00013484) */
/* WARNING: Removing unreachable block (ram,0x00013438) */
/* WARNING: Removing unreachable block (ram,0x00013448) */
/* WARNING: Removing unreachable block (ram,0x0001344c) */
/* WARNING: Removing unreachable block (ram,0x00013450) */
/* WARNING: Removing unreachable block (ram,0x0001345c) */

int FUN_00013720(char *param_1,char *param_2,undefined4 param_3)

{
  size_t sVar1;
  size_t sVar2;
  char *__s;
  FILE *__stream;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  sVar1 = strlen(param_2);
  iVar5 = DAT_000134b0 + 0x132f0;
  sVar2 = strlen(param_1);
  __s = malloc(sVar1 + sVar2 + 2);
  if (__s == (char *)0x0) {
    iVar4 = -0xc;
  }
  else {
    iVar4 = sprintf(__s,(char *)(DAT_000134b4 + 0x13324),param_2,param_1);
    if (-1 < iVar4) {
      __stream = fopen64(__s,(char *)(DAT_000134b8 + 0x1333c));
      if (__stream == (FILE *)0x0) {
        piVar3 = __errno_location();
        iVar4 = -*piVar3;
        fprintf((FILE *)**(undefined4 **)(iVar5 + DAT_000134bc),(char *)(DAT_000134c0 + 0x13360),__s
               );
      }
      else {
        iVar4 = fprintf(__stream,(char *)(DAT_000134c4 + 0x13394),param_3);
        if (iVar4 < 0) {
          iVar5 = fclose(__stream);
          if (iVar5 != 0) {
            perror((char *)(DAT_000134c8 + 0x133c0));
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



/* ===== FUN_00013728 @ 00013728 size=8 ===== */

int FUN_00013728(char *param_1,char *param_2,int param_3)

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
  iVar8 = DAT_000134b0 + 0x132f0;
  sVar2 = strlen(param_1);
  __s = malloc(sVar1 + sVar2 + 2);
  if (__s == (char *)0x0) {
    return -0xc;
  }
  iVar3 = sprintf(__s,(char *)(DAT_000134b4 + 0x13324),param_2,param_1);
  if (iVar3 < 0) goto LAB_0001336c;
  pFVar4 = fopen64(__s,(char *)(DAT_000134b8 + 0x1333c));
  if (pFVar4 == (FILE *)0x0) {
    piVar5 = __errno_location();
    puVar7 = *(undefined4 **)(iVar8 + DAT_000134bc);
    pcVar6 = (char *)(DAT_000134c0 + 0x13360);
    iVar3 = *piVar5;
LAB_00013364:
    iVar3 = -iVar3;
    fprintf((FILE *)*puVar7,pcVar6,__s);
  }
  else {
    pcVar6 = (char *)(DAT_000134c4 + 0x13394);
    iVar3 = fprintf(pFVar4,pcVar6,param_3);
    if (iVar3 < 0) {
      iVar8 = fclose(pFVar4);
      if (iVar8 == 0) goto LAB_0001336c;
      pcVar6 = (char *)(DAT_000134c8 + 0x133c0);
LAB_000133bc:
      perror(pcVar6);
      goto LAB_0001336c;
    }
    iVar3 = fclose(pFVar4);
    if (iVar3 == 0) {
      pFVar4 = fopen64(__s,(char *)(DAT_000134cc + 0x133f8));
      if (pFVar4 == (FILE *)0x0) {
        piVar5 = __errno_location();
        puVar7 = *(undefined4 **)(iVar8 + DAT_000134bc);
        pcVar6 = (char *)(DAT_000134d0 + 0x1341c);
        iVar3 = *piVar5;
        goto LAB_00013364;
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
        if (iVar8 == 0) goto LAB_0001336c;
        pcVar6 = (char *)(DAT_000134d4 + 0x13468);
        goto LAB_000133bc;
      }
      iVar3 = fclose(pFVar4);
      if (iVar3 == 0) {
        iVar3 = 0;
        if (aiStack_2c[0] != param_3) {
          iVar3 = -1;
          fprintf((FILE *)**(undefined4 **)(iVar8 + DAT_000134bc),(char *)(DAT_000134d8 + 0x134a0),
                  param_3,param_2,param_1);
        }
        goto LAB_0001336c;
      }
    }
    piVar5 = __errno_location();
    iVar3 = -*piVar5;
  }
LAB_0001336c:
  free(__s);
  return iVar3;
}



/* ===== FUN_00013730 @ 00013730 size=540 ===== */

int FUN_00013730(char *param_1,char *param_2,char *param_3)

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
  iVar7 = DAT_000136f0 + 0x13508;
  sVar2 = strlen(param_1);
  __s = malloc(sVar1 + sVar2 + 2);
  if (__s == (char *)0x0) {
    fputs((char *)(DAT_000136f8 + 0x1353c),(FILE *)**(undefined4 **)(iVar7 + DAT_000136f4));
    return -0xc;
  }
  iVar3 = sprintf(__s,(char *)(DAT_000136fc + 0x13560),param_2,param_1);
  if (iVar3 < 0) goto LAB_000135a8;
  pFVar4 = fopen64(__s,(char *)(DAT_00013700 + 0x13578));
  if (pFVar4 == (FILE *)0x0) {
    piVar5 = __errno_location();
    iVar3 = -*piVar5;
    fprintf((FILE *)**(undefined4 **)(iVar7 + DAT_000136f4),(char *)(DAT_00013704 + 0x1359c),__s);
    goto LAB_000135a8;
  }
  pcVar8 = (char *)(DAT_00013708 + 0x135c8);
  iVar3 = fprintf(pFVar4,pcVar8,param_3);
  if (iVar3 < 0) {
    iVar7 = fclose(pFVar4);
    if (iVar7 == 0) goto LAB_000135a8;
    pcVar8 = (char *)(DAT_0001370c + 0x135f4);
LAB_000135f0:
    perror(pcVar8);
  }
  else {
    iVar6 = fclose(pFVar4);
    if (iVar6 == 0) {
      pFVar4 = fopen64(__s,(char *)(DAT_00013710 + 0x1362c));
      if (pFVar4 == (FILE *)0x0) {
        piVar5 = __errno_location();
        iVar3 = -*piVar5;
        fputs((char *)(DAT_00013714 + 0x13658),(FILE *)**(undefined4 **)(iVar7 + DAT_000136f4));
        goto LAB_000135a8;
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
        if (iVar7 == 0) goto LAB_000135a8;
        pcVar8 = (char *)(DAT_00013718 + 0x136a0);
        goto LAB_000135f0;
      }
      iVar6 = fclose(pFVar4);
      if (iVar6 == 0) {
        iVar6 = strcmp(__s,param_3);
        if (iVar6 != 0) {
          iVar3 = -1;
          fprintf((FILE *)**(undefined4 **)(iVar7 + DAT_000136f4),(char *)(DAT_0001371c + 0x136e0),
                  __s,param_3,param_2,param_1);
        }
        goto LAB_000135a8;
      }
    }
    piVar5 = __errno_location();
    iVar3 = -*piVar5;
  }
LAB_000135a8:
  free(__s);
  return iVar3;
}



/* ===== FUN_00013738 @ 00013738 size=8 ===== */

/* WARNING: Removing unreachable block (ram,0x0001361c) */
/* WARNING: Removing unreachable block (ram,0x0001365c) */
/* WARNING: Removing unreachable block (ram,0x000136a0) */
/* WARNING: Removing unreachable block (ram,0x000136b0) */
/* WARNING: Removing unreachable block (ram,0x000136c4) */
/* WARNING: Removing unreachable block (ram,0x00013670) */
/* WARNING: Removing unreachable block (ram,0x00013680) */
/* WARNING: Removing unreachable block (ram,0x00013684) */
/* WARNING: Removing unreachable block (ram,0x00013688) */
/* WARNING: Removing unreachable block (ram,0x00013694) */
/* WARNING: Removing unreachable block (ram,0x00013634) */

int FUN_00013738(char *param_1,char *param_2,undefined4 param_3)

{
  size_t sVar1;
  size_t sVar2;
  char *__s;
  FILE *__stream;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  sVar1 = strlen(param_2);
  iVar5 = DAT_000136f0 + 0x13508;
  sVar2 = strlen(param_1);
  __s = malloc(sVar1 + sVar2 + 2);
  if (__s == (char *)0x0) {
    iVar4 = -0xc;
    fputs((char *)(DAT_000136f8 + 0x1353c),(FILE *)**(undefined4 **)(iVar5 + DAT_000136f4));
  }
  else {
    iVar4 = sprintf(__s,(char *)(DAT_000136fc + 0x13560),param_2,param_1);
    if (-1 < iVar4) {
      __stream = fopen64(__s,(char *)(DAT_00013700 + 0x13578));
      if (__stream == (FILE *)0x0) {
        piVar3 = __errno_location();
        iVar4 = -*piVar3;
        fprintf((FILE *)**(undefined4 **)(iVar5 + DAT_000136f4),(char *)(DAT_00013704 + 0x1359c),__s
               );
      }
      else {
        iVar4 = fprintf(__stream,(char *)(DAT_00013708 + 0x135c8),param_3);
        if (iVar4 < 0) {
          iVar5 = fclose(__stream);
          if (iVar5 != 0) {
            perror((char *)(DAT_0001370c + 0x135f4));
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



/* ===== FUN_00013740 @ 00013740 size=300 ===== */

char * FUN_00013740(char *param_1,char *param_2)

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
  iVar4 = DAT_0001386c + 0x13760;
  sVar2 = strlen(param_1);
  __s = malloc(sVar1 + sVar2 + 2);
  if (__s == (char *)0x0) {
    fputs((char *)(DAT_00013874 + 0x13790),(FILE *)**(undefined4 **)(iVar4 + DAT_00013870));
    return (char *)-0xc;
  }
  local_1c = (char *)sprintf(__s,(char *)(DAT_00013878 + 0x137b4),param_2,param_1,pcVar5);
  if ((int)local_1c < 0) goto LAB_00013848;
  __stream = fopen64(__s,(char *)(DAT_0001387c + 0x137d0));
  piVar3 = __errno_location();
  iVar4 = DAT_00013880;
  if (__stream != (FILE *)0x0) {
    *piVar3 = 0;
    iVar4 = fscanf(__stream,(char *)(iVar4 + 0x1380c),&local_1c);
    if (iVar4 != 1) {
      if (*piVar3 == 0) {
        local_1c = (char *)0xffffffc3;
      }
      else {
        local_1c = (char *)-*piVar3;
      }
      iVar4 = fclose(__stream);
      if (iVar4 != 0) {
        perror((char *)(DAT_00013884 + 0x13848));
      }
      goto LAB_00013848;
    }
    iVar4 = fclose(__stream);
    if (iVar4 == 0) goto LAB_00013848;
  }
  local_1c = (char *)-*piVar3;
LAB_00013848:
  free(__s);
  return local_1c;
}



/* ===== FUN_000139c4 @ 000139c4 size=288 ===== */

int FUN_000139c4(char *param_1,char *param_2,undefined4 param_3)

{
  size_t sVar1;
  size_t sVar2;
  char *__s;
  FILE *__stream;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  sVar1 = strlen(param_2);
  iVar5 = DAT_00013ae4 + 0x139e8;
  sVar2 = strlen(param_1);
  __s = malloc(sVar1 + sVar2 + 2);
  if (__s == (char *)0x0) {
    fputs((char *)(DAT_00013aec + 0x13a1c),(FILE *)**(undefined4 **)(iVar5 + DAT_00013ae8));
    return -0xc;
  }
  iVar5 = sprintf(__s,(char *)(DAT_00013af0 + 0x13a3c),param_2,param_1);
  if (iVar5 < 0) goto LAB_00013ac4;
  __stream = fopen64(__s,(char *)(DAT_00013af4 + 0x13a54));
  piVar3 = __errno_location();
  iVar4 = DAT_00013af8;
  if (__stream != (FILE *)0x0) {
    *piVar3 = 0;
    iVar4 = fscanf(__stream,(char *)(iVar4 + 0x13a8c),param_3);
    if (iVar4 != 1) {
      if (*piVar3 == 0) {
        iVar5 = -0x3d;
      }
      else {
        iVar5 = -*piVar3;
      }
      iVar4 = fclose(__stream);
      if (iVar4 != 0) {
        perror((char *)(DAT_00013afc + 0x13ac4));
      }
      goto LAB_00013ac4;
    }
    iVar4 = fclose(__stream);
    if (iVar4 == 0) goto LAB_00013ac4;
  }
  iVar5 = -*piVar3;
LAB_00013ac4:
  free(__s);
  return iVar5;
}



/* ===== _DT_FINI @ 00013b00 size=16 ===== */

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



/* ===== <EXTERNAL>::__register_frame_info @ 00026008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_create @ 0002600c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 00026010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 00026014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 00026018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_init @ 0002601c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 00026020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::readdir64 @ 00026024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent64 * readdir64(DIR *__dirp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 00026028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::read @ 0002602c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::perror @ 00026030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::closedir @ 00026034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int closedir(DIR *__dirp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::open64 @ 00026038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strchr @ 0002603c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 00026040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mktime @ 00026044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t mktime(tm *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 00026048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::select @ 0002604c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 00026050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 00026054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 00026058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen64 @ 0002605c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fscanf @ 00026060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fscanf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::settimeofday @ 00026064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int settimeofday(timeval *__tv,timezone *__tz)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 00026068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_cancel @ 0002606c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cancel(pthread_t __th)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sscanf @ 00026070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::feof @ 00026074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int feof(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::epoll_ctl @ 00026078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int epoll_ctl(int __epfd,int __op,int __fd,epoll_event *__event)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0002607c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 00026080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 00026084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ioctl @ 00026088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_destroy @ 0002608c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 00026090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::epoll_wait @ 00026094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int epoll_wait(int __epfd,epoll_event *__events,int __maxevents,int __timeout)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 00026098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcmp @ 0002609c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::epoll_create1 @ 000260a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int epoll_create1(int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::write @ 000260a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 000260a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::opendir @ 000260ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * opendir(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::access @ 000260b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::system @ 000260b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int system(char *__command)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 000260b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 000260bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fgets @ 000260c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_lock @ 000260c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_unlock @ 000260c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strstr @ 000260cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 000260d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 000260d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_join @ 000260d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


