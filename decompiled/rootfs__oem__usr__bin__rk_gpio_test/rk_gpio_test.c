// rk_gpio_test — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _DT_INIT @ 00010bbc size=16 ===== */

void _DT_INIT(void)

{
  return;
}



/* ===== <EXTERNAL>::strcpy @ 00010be0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_0002500c)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::ioctl @ 00010bf8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_00025014)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::printf @ 00010c04 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00025018)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::pthread_create @ 00010c10 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_0002501c)(__newthread);
  return iVar1;
}



/* ===== <EXTERNAL>::strerror @ 00010c28 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_00025024)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::usleep @ 00010c34 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_usleep_00025028)(__useconds);
  return iVar1;
}



/* ===== <EXTERNAL>::fscanf @ 00010c40 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fscanf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fscanf_0002502c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::fgets @ 00010c4c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_fgets_00025030)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::memcpy @ 00010c58 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00025034)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::pthread_cancel @ 00010c64 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cancel(pthread_t __th)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_cancel_00025038)(__th);
  return iVar1;
}



/* ===== <EXTERNAL>::perror @ 00010c70 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
  (*(code *)PTR_perror_0002503c)(__s);
  return;
}



/* ===== <EXTERNAL>::puts @ 00010c7c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00025040)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::system @ 00010c88 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int system(char *__command)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_system_00025044)(__command);
  return iVar1;
}



/* ===== <EXTERNAL>::malloc @ 00010ca0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0002504c)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::settimeofday @ 00010cac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int settimeofday(timeval *__tv,timezone *__tz)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_settimeofday_00025050)(__tv);
  return iVar1;
}



/* ===== <EXTERNAL>::select @ 00010cb8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_select_00025054)(__nfds);
  return iVar1;
}



/* ===== <EXTERNAL>::write @ 00010ce8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_write_00025064)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::fprintf @ 00010cf4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00025068)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00010d00 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_0002506c)();
  return;
}



/* ===== <EXTERNAL>::mktime @ 00010d0c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t mktime(tm *__tp)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_mktime_00025070)(__tp);
  return tVar1;
}



/* ===== <EXTERNAL>::strstr @ 00010d18 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strstr_00025074)(__haystack);
  return pcVar1;
}



/* ===== <EXTERNAL>::memcmp @ 00010d54 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_00025088)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 00010d78 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00025094)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::fclose @ 00010d84 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_00025098)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::open64 @ 00010d90 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open64_0002509c)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::opendir @ 00010d9c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * opendir(char *__name)

{
  DIR *pDVar1;
  
  pDVar1 = (DIR *)(*(code *)PTR_opendir_000250a0)(__name);
  return pDVar1;
}



/* ===== <EXTERNAL>::strcmp @ 00010da8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_000250a4)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::pthread_mutex_unlock @ 00010db4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_000250a8)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::sprintf @ 00010dc0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_000250ac)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::access @ 00010dcc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_access_000250b0)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::pthread_mutex_destroy @ 00010dd8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_000250b4)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 00010df0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_000250bc)();
  return piVar1;
}



/* ===== <EXTERNAL>::pthread_mutex_init @ 00010dfc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_000250c0)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::strlen @ 00010e08 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_000250c4)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::strchr @ 00010e14 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_000250c8)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::fputs @ 00010e20 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_000250cc)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::closedir @ 00010e2c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int closedir(DIR *__dirp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_closedir_000250d0)(__dirp);
  return iVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00010e44 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_000250d8)();
  return;
}



/* ===== <EXTERNAL>::close @ 00010e50 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_000250dc)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 00010e5c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_000250e0)(__ptr);
  return;
}



/* ===== <EXTERNAL>::fopen64 @ 00010e68 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen64_000250e4)(__filename);
  return pFVar1;
}



/* ===== FUN_00010e74 @ 00010e74 size=64 ===== */

void FUN_00010e74(void)

{
  undefined4 uVar1;
  
  FUN_000123e0(0x8e,1);
  FUN_000123e0(0x26,0);
  uVar1 = 0;
  do {
    FUN_0001241c(0x26,uVar1);
    usleep(20000);
    uVar1 = FUN_000124d8(0x8e);
  } while( true );
}



/* ===== entry @ 00010eb4 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00025090)
            (DAT_00010ee8,param_2,&stack0x00000004,DAT_00010eec,DAT_00010ee4,param_1);
  return;
}



/* ===== FUN_00010ef0 @ 00010ef0 size=32 ===== */

void FUN_00010ef0(void)

{
  if (DAT_00010f14 == DAT_00010f10) {
    return;
  }
  if (DAT_00010f18 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010f0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00010f18)();
  return;
}



/* ===== _FINI_0 @ 00010f54 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00010f90;
  if (*DAT_00010f90 != '\0') {
    return;
  }
  FUN_00010ef0();
  if (DAT_00010f94 != 0) {
    __deregister_frame_info(DAT_00010f98);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00010f9c size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00010fc0 != 0) {
    __register_frame_info(DAT_00010fc8,DAT_00010fc4);
  }
  if ((DAT_00010f4c - DAT_00010f48 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00010f50 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010f44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00010f50)();
  return;
}



/* ===== FUN_00010fcc @ 00010fcc size=196 ===== */

undefined4 FUN_00010fcc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ssize_t sVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  void *__buf;
  undefined4 local_c;
  
  if (0 < *(int *)(DAT_00011090 + 0x10fe0)) {
    __buf = *(void **)(DAT_00011094 + 0x10fe4 + DAT_00011098);
    local_c = param_4;
    sVar1 = write(*(int *)(DAT_00011090 + 0x10fe0),__buf,1);
    if (sVar1 < 0) {
      piVar2 = __errno_location();
      printf((char *)(DAT_0001109c + 0x1101c),*piVar2);
    }
    local_c = 1;
    iVar3 = ioctl(*(int *)(DAT_000110a0 + 0x11038),DAT_000110a4,&local_c,DAT_000110a0,param_1,__buf,
                  param_3);
    if (iVar3 == 0) {
      puts((char *)(DAT_000110a8 + 0x1104c));
    }
    else {
      piVar2 = __errno_location();
      pcVar4 = strerror(*piVar2);
      printf((char *)(DAT_000110b0 + 0x1108c),pcVar4);
    }
    piVar2 = (int *)(DAT_000110ac + 0x11058);
    close(*piVar2);
    *piVar2 = 0;
  }
  return 0;
}



/* ===== FUN_000112c4 @ 000112c4 size=200 ===== */

undefined4 FUN_000112c4(undefined4 *param_1)

{
  int __fd;
  int iVar1;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  __fd = open64((char *)(DAT_0001138c + 0x112e0),0);
  if (__fd == -1) {
    perror((char *)(DAT_00011390 + 0x112f8));
  }
  else {
    iVar1 = ioctl(__fd,DAT_00011394,&local_34);
    if (iVar1 == -1) {
      perror((char *)(DAT_00011398 + 0x11324));
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
      puts((char *)(DAT_0001139c + 0x11348));
    }
    close(__fd);
  }
  return 0xffffffff;
}



/* ===== FUN_000113a0 @ 000113a0 size=432 ===== */

undefined4 FUN_000113a0(uint *param_1)

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
    pcVar1 = (char *)(DAT_00011550 + 0x113bc);
  }
  else {
    __fd = open64((char *)(DAT_00011554 + 0x113d4),2);
    if (__fd == -1) {
      perror((char *)(DAT_00011558 + 0x113ec));
      return 0xffffffff;
    }
    local_60 = *param_1;
    local_5c = param_1[1];
    local_4c = param_1[5] - 0x76c;
    local_58 = param_1[2];
    local_54 = param_1[3];
    local_50 = param_1[4] - 1;
    if (local_4c < 1) {
      pcVar1 = (char *)(DAT_0001155c + 0x11444);
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
              iVar2 = ioctl(__fd,DAT_00011574,&local_60);
              if (iVar2 == -1) {
                perror((char *)(DAT_00011578 + 0x114f0));
                close(__fd);
                return 0xffffffff;
              }
              iVar2 = settimeofday(&local_68,(timezone *)0x0);
              if (iVar2 != 0) {
                piVar3 = __errno_location();
                if (*piVar3 == 1) {
                  pcVar1 = (char *)(DAT_0001157c + 0x1152c);
                }
                else {
                  if (*piVar3 != 0x16) goto LAB_0001152c;
                  pcVar1 = (char *)((int)&DAT_00011550 + DAT_00011580);
                }
                puts(pcVar1);
              }
LAB_0001152c:
              close(__fd);
              return 0;
            }
            pcVar1 = (char *)(DAT_00011570 + 0x1149c);
          }
          else {
            pcVar1 = (char *)(DAT_0001156c + 0x1148c);
          }
        }
        else {
          pcVar1 = (char *)(DAT_00011568 + 0x1147c);
        }
      }
      else {
        pcVar1 = (char *)(DAT_00011564 + 0x1146c);
      }
    }
    else {
      pcVar1 = (char *)(DAT_00011560 + 0x11458);
    }
  }
  puts(pcVar1);
  return 0xffffffff;
}



/* ===== FUN_00011584 @ 00011584 size=172 ===== */

undefined4 FUN_00011584(undefined4 *param_1)

{
  int __fd;
  int iVar1;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (param_1 == (undefined4 *)0x0) {
    puts((char *)(DAT_00011630 + 0x115a0));
  }
  else {
    __fd = open64((char *)(DAT_00011634 + 0x115c0),0);
    if (__fd == -1) {
      perror((char *)(DAT_00011638 + 0x115d8));
      return 0xffffffff;
    }
    iVar1 = ioctl(__fd,DAT_0001163c,&local_34);
    if (iVar1 != -1) {
      *param_1 = local_34;
      param_1[1] = local_30;
      param_1[2] = local_2c;
      close(__fd);
      return 0;
    }
    perror((char *)(DAT_00011640 + 0x115fc));
    close(__fd);
  }
  return 0xffffffff;
}



/* ===== FUN_00011eac @ 00011eac size=232 ===== */

undefined4 FUN_00011eac(undefined2 param_1,void *param_2,uint param_3)

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
  
  iVar2 = DAT_00011f94 + 0x11ec8;
  if ((int)param_3 < 0x401) {
    __fd = open64((char *)(DAT_00011fa0 + 0x11f14),2,0);
    if (__fd < 0) {
      __s = (char *)(DAT_00011fa4 + 0x11f30);
      __stream = (FILE *)**(undefined4 **)(iVar2 + DAT_00011f98);
    }
    else {
      local_422 = (undefined2)param_3;
      local_428 = DAT_00011fa8;
      local_424 = param_1;
      memcpy(auStack_420,param_2,param_3 & 0xffff);
      iVar1 = ioctl(__fd,DAT_00011fac,&local_428);
      close(__fd);
      if (iVar1 == 0) {
        return 0;
      }
      __s = (char *)(DAT_00011fb0 + 0x11f90);
      __stream = (FILE *)**(undefined4 **)(iVar2 + DAT_00011f98);
    }
  }
  else {
    __s = (char *)(DAT_00011f9c + 0x11edc);
    __stream = (FILE *)**(undefined4 **)(iVar2 + DAT_00011f98);
  }
  fputs(__s,__stream);
  return 0xffffffff;
}



/* ===== FUN_00012240 @ 00012240 size=128 ===== */

undefined4 FUN_00012240(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char acStack_58 [68];
  
  iVar3 = DAT_000122c0 + 0x12260;
  sprintf(acStack_58,(char *)(DAT_000122c4 + 0x12268),iVar3,param_1);
  iVar1 = access(acStack_58,0);
  if (iVar1 == 0) {
    printf((char *)(DAT_000122c8 + 0x12298),param_1,acStack_58);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00013770(DAT_000122cc + 0x122b8,iVar3,param_1);
  }
  return uVar2;
}



/* ===== FUN_000122d0 @ 000122d0 size=24 ===== */

void FUN_000122d0(undefined4 param_1)

{
  FUN_00013770((int)&DAT_000122e8 + DAT_000122ec,DAT_000122e8 + 0x122e4,param_1);
  return;
}



/* ===== FUN_000122f0 @ 000122f0 size=96 ===== */

void FUN_000122f0(undefined4 param_1,int param_2)

{
  int iVar1;
  char acStack_50 [68];
  
  if (param_2 == 0) {
    iVar1 = DAT_00012350 + 0x12310;
  }
  else {
    iVar1 = (int)&DAT_00012350 + DAT_00012360;
  }
  sprintf(acStack_50,(char *)(DAT_00012358 + 0x12328),DAT_00012354 + 0x12324,param_1);
  FUN_00013780(DAT_0001235c + 0x1233c,acStack_50,iVar1);
  return;
}



/* ===== FUN_00012364 @ 00012364 size=108 ===== */

int FUN_00012364(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_60 [16];
  char acStack_50 [68];
  
  sprintf(acStack_50,(char *)(DAT_000123d4 + 0x1238c),DAT_000123d0 + 0x12384,param_1);
  iVar1 = FUN_00013a14(DAT_000123d8 + 0x123a4,acStack_50,auStack_60);
  if ((-1 < iVar1) &&
     (iVar2 = memcmp(auStack_60,(void *)(DAT_000123dc + 0x123c0),4), iVar1 = 0, iVar2 != 0)) {
    iVar1 = 1;
  }
  return iVar1;
}



/* ===== FUN_000123e0 @ 000123e0 size=60 ===== */

int FUN_000123e0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00012240();
  if ((-1 < iVar1) && (iVar1 = FUN_000122f0(param_1,param_2), iVar1 < 0)) {
    FUN_000122d0(param_1);
  }
  return iVar1;
}



/* ===== FUN_0001241c @ 0001241c size=168 ===== */

int FUN_0001241c(undefined4 param_1,undefined4 param_2)

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
  sprintf(local_50,(char *)(DAT_000124c8 + 0x1244c),DAT_000124c4 + 0x12444,param_1);
  iVar1 = FUN_00013a14(DAT_000124cc + 0x12484,local_50,local_58);
  if (-1 < iVar1) {
    iVar1 = strcmp(local_58,(char *)(DAT_000124d0 + 0x1249c));
    if (iVar1 == 0) {
      iVar1 = FUN_00013778(DAT_000124d4 + 0x124bc,local_50,param_2);
    }
    else {
      iVar1 = -0x16;
    }
  }
  return iVar1;
}



/* ===== FUN_000124d8 @ 000124d8 size=64 ===== */

void FUN_000124d8(undefined4 param_1)

{
  char acStack_48 [64];
  
  sprintf(acStack_48,(char *)(DAT_0001251c + 0x12500),DAT_00012518 + 75000,param_1);
  FUN_00013790(DAT_00012520 + 0x12510,acStack_48);
  return;
}



/* ===== FUN_00012524 @ 00012524 size=156 ===== */

undefined4 FUN_00012524(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  char acStack_98 [64];
  char acStack_58 [68];
  
  iVar2 = DAT_000125c0 + 0x12544;
  sprintf(acStack_98,(char *)(DAT_000125c4 + 0x1254c),iVar2,param_1);
  sprintf(acStack_58,(char *)(DAT_000125c8 + 0x1256c),iVar2,param_1);
  iVar2 = access(acStack_58,0);
  if (iVar2 == 0) {
    printf((char *)(DAT_000125cc + 0x12598),param_1,acStack_58);
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00013770(DAT_000125d0 + 0x125b8,acStack_98,0);
  }
  return uVar1;
}



/* ===== FUN_000125d4 @ 000125d4 size=68 ===== */

void FUN_000125d4(undefined4 param_1)

{
  char acStack_48 [64];
  
  sprintf(acStack_48,(char *)(DAT_0001261c + 0x125fc),DAT_00012618 + 0x125f4,param_1);
  FUN_00013770(DAT_00012620 + 0x12610,acStack_48,0);
  return;
}



/* ===== FUN_00012624 @ 00012624 size=72 ===== */

void FUN_00012624(undefined4 param_1,undefined4 param_2)

{
  char acStack_50 [68];
  
  sprintf(acStack_50,(char *)(DAT_00012670 + 0x1264c),DAT_0001266c + 0x12648,param_1);
  FUN_00013770(DAT_00012674 + 0x12664,acStack_50,param_2);
  return;
}



/* ===== FUN_000129f8 @ 000129f8 size=40 ===== */

int FUN_000129f8(void)

{
  int iVar1;
  
  iVar1 = FUN_000125d4();
  if (iVar1 < 0) {
    puts((char *)(DAT_00012a20 + 0x12a18));
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_00013770 @ 00013770 size=500 ===== */

/* WARNING: Removing unreachable block (ram,0x00013438) */
/* WARNING: Removing unreachable block (ram,0x00013450) */
/* WARNING: Removing unreachable block (ram,0x00013474) */
/* WARNING: Removing unreachable block (ram,0x000134b8) */
/* WARNING: Removing unreachable block (ram,0x000134c8) */
/* WARNING: Removing unreachable block (ram,0x000134d4) */
/* WARNING: Removing unreachable block (ram,0x00013488) */
/* WARNING: Removing unreachable block (ram,0x00013498) */
/* WARNING: Removing unreachable block (ram,0x0001349c) */
/* WARNING: Removing unreachable block (ram,0x000134a0) */
/* WARNING: Removing unreachable block (ram,0x000134ac) */

int FUN_00013770(char *param_1,char *param_2,undefined4 param_3)

{
  size_t sVar1;
  size_t sVar2;
  char *__s;
  FILE *__stream;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  sVar1 = strlen(param_2);
  iVar5 = DAT_00013500 + 0x13340;
  sVar2 = strlen(param_1);
  __s = malloc(sVar1 + sVar2 + 2);
  if (__s == (char *)0x0) {
    iVar4 = -0xc;
  }
  else {
    iVar4 = sprintf(__s,(char *)(DAT_00013504 + 0x13374),param_2,param_1);
    if (-1 < iVar4) {
      __stream = fopen64(__s,(char *)(DAT_00013508 + 0x1338c));
      if (__stream == (FILE *)0x0) {
        piVar3 = __errno_location();
        iVar4 = -*piVar3;
        fprintf((FILE *)**(undefined4 **)(iVar5 + DAT_0001350c),(char *)(DAT_00013510 + 0x133b0),__s
               );
      }
      else {
        iVar4 = fprintf(__stream,(char *)(DAT_00013514 + 0x133e4),param_3);
        if (iVar4 < 0) {
          iVar5 = fclose(__stream);
          if (iVar5 != 0) {
            perror((char *)(DAT_00013518 + 0x13410));
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



/* ===== FUN_00013778 @ 00013778 size=8 ===== */

int FUN_00013778(char *param_1,char *param_2,int param_3)

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
  iVar8 = DAT_00013500 + 0x13340;
  sVar2 = strlen(param_1);
  __s = malloc(sVar1 + sVar2 + 2);
  if (__s == (char *)0x0) {
    return -0xc;
  }
  iVar3 = sprintf(__s,(char *)(DAT_00013504 + 0x13374),param_2,param_1);
  if (iVar3 < 0) goto LAB_000133bc;
  pFVar4 = fopen64(__s,(char *)(DAT_00013508 + 0x1338c));
  if (pFVar4 == (FILE *)0x0) {
    piVar5 = __errno_location();
    puVar7 = *(undefined4 **)(iVar8 + DAT_0001350c);
    pcVar6 = (char *)(DAT_00013510 + 0x133b0);
    iVar3 = *piVar5;
LAB_000133b4:
    iVar3 = -iVar3;
    fprintf((FILE *)*puVar7,pcVar6,__s);
  }
  else {
    pcVar6 = (char *)(DAT_00013514 + 0x133e4);
    iVar3 = fprintf(pFVar4,pcVar6,param_3);
    if (iVar3 < 0) {
      iVar8 = fclose(pFVar4);
      if (iVar8 == 0) goto LAB_000133bc;
      pcVar6 = (char *)(DAT_00013518 + 0x13410);
LAB_0001340c:
      perror(pcVar6);
      goto LAB_000133bc;
    }
    iVar3 = fclose(pFVar4);
    if (iVar3 == 0) {
      pFVar4 = fopen64(__s,(char *)(DAT_0001351c + 0x13448));
      if (pFVar4 == (FILE *)0x0) {
        piVar5 = __errno_location();
        puVar7 = *(undefined4 **)(iVar8 + DAT_0001350c);
        pcVar6 = (char *)(DAT_00013520 + 0x1346c);
        iVar3 = *piVar5;
        goto LAB_000133b4;
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
        if (iVar8 == 0) goto LAB_000133bc;
        pcVar6 = (char *)(DAT_00013524 + 0x134b8);
        goto LAB_0001340c;
      }
      iVar3 = fclose(pFVar4);
      if (iVar3 == 0) {
        iVar3 = 0;
        if (aiStack_2c[0] != param_3) {
          iVar3 = -1;
          fprintf((FILE *)**(undefined4 **)(iVar8 + DAT_0001350c),(char *)(DAT_00013528 + 0x134f0),
                  param_3,param_2,param_1);
        }
        goto LAB_000133bc;
      }
    }
    piVar5 = __errno_location();
    iVar3 = -*piVar5;
  }
LAB_000133bc:
  free(__s);
  return iVar3;
}



/* ===== FUN_00013780 @ 00013780 size=540 ===== */

int FUN_00013780(char *param_1,char *param_2,char *param_3)

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
  iVar7 = DAT_00013740 + 0x13558;
  sVar2 = strlen(param_1);
  __s = malloc(sVar1 + sVar2 + 2);
  if (__s == (char *)0x0) {
    fputs((char *)(DAT_00013748 + 0x1358c),(FILE *)**(undefined4 **)(iVar7 + DAT_00013744));
    return -0xc;
  }
  iVar3 = sprintf(__s,(char *)(DAT_0001374c + 0x135b0),param_2,param_1);
  if (iVar3 < 0) goto LAB_000135f8;
  pFVar4 = fopen64(__s,(char *)(DAT_00013750 + 0x135c8));
  if (pFVar4 == (FILE *)0x0) {
    piVar5 = __errno_location();
    iVar3 = -*piVar5;
    fprintf((FILE *)**(undefined4 **)(iVar7 + DAT_00013744),(char *)(DAT_00013754 + 0x135ec),__s);
    goto LAB_000135f8;
  }
  pcVar8 = (char *)(DAT_00013758 + 0x13618);
  iVar3 = fprintf(pFVar4,pcVar8,param_3);
  if (iVar3 < 0) {
    iVar7 = fclose(pFVar4);
    if (iVar7 == 0) goto LAB_000135f8;
    pcVar8 = (char *)(DAT_0001375c + 0x13644);
LAB_00013640:
    perror(pcVar8);
  }
  else {
    iVar6 = fclose(pFVar4);
    if (iVar6 == 0) {
      pFVar4 = fopen64(__s,(char *)(DAT_00013760 + 0x1367c));
      if (pFVar4 == (FILE *)0x0) {
        piVar5 = __errno_location();
        iVar3 = -*piVar5;
        fputs((char *)(DAT_00013764 + 0x136a8),(FILE *)**(undefined4 **)(iVar7 + DAT_00013744));
        goto LAB_000135f8;
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
        if (iVar7 == 0) goto LAB_000135f8;
        pcVar8 = (char *)(DAT_00013768 + 0x136f0);
        goto LAB_00013640;
      }
      iVar6 = fclose(pFVar4);
      if (iVar6 == 0) {
        iVar6 = strcmp(__s,param_3);
        if (iVar6 != 0) {
          iVar3 = -1;
          fprintf((FILE *)**(undefined4 **)(iVar7 + DAT_00013744),(char *)(DAT_0001376c + 0x13730),
                  __s,param_3,param_2,param_1);
        }
        goto LAB_000135f8;
      }
    }
    piVar5 = __errno_location();
    iVar3 = -*piVar5;
  }
LAB_000135f8:
  free(__s);
  return iVar3;
}



/* ===== FUN_00013790 @ 00013790 size=300 ===== */

char * FUN_00013790(char *param_1,char *param_2)

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
  iVar4 = DAT_000138bc + 0x137b0;
  sVar2 = strlen(param_1);
  __s = malloc(sVar1 + sVar2 + 2);
  if (__s == (char *)0x0) {
    fputs((char *)(DAT_000138c4 + 0x137e0),(FILE *)**(undefined4 **)(iVar4 + DAT_000138c0));
    return (char *)-0xc;
  }
  local_1c = (char *)sprintf(__s,(char *)(DAT_000138c8 + 0x13804),param_2,param_1,pcVar5);
  if ((int)local_1c < 0) goto LAB_00013898;
  __stream = fopen64(__s,(char *)(DAT_000138cc + 0x13820));
  piVar3 = __errno_location();
  iVar4 = DAT_000138d0;
  if (__stream != (FILE *)0x0) {
    *piVar3 = 0;
    iVar4 = fscanf(__stream,(char *)(iVar4 + 0x1385c),&local_1c);
    if (iVar4 != 1) {
      if (*piVar3 == 0) {
        local_1c = (char *)0xffffffc3;
      }
      else {
        local_1c = (char *)-*piVar3;
      }
      iVar4 = fclose(__stream);
      if (iVar4 != 0) {
        perror((char *)(DAT_000138d4 + 0x13898));
      }
      goto LAB_00013898;
    }
    iVar4 = fclose(__stream);
    if (iVar4 == 0) goto LAB_00013898;
  }
  local_1c = (char *)-*piVar3;
LAB_00013898:
  free(__s);
  return local_1c;
}



/* ===== FUN_000138d8 @ 000138d8 size=288 ===== */

int FUN_000138d8(char *param_1,char *param_2,undefined4 param_3)

{
  size_t sVar1;
  size_t sVar2;
  char *__s;
  FILE *__stream;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  sVar1 = strlen(param_2);
  iVar5 = DAT_000139f8 + 0x138fc;
  sVar2 = strlen(param_1);
  __s = malloc(sVar1 + sVar2 + 2);
  if (__s == (char *)0x0) {
    fputs((char *)(DAT_00013a00 + 0x13930),(FILE *)**(undefined4 **)(iVar5 + DAT_000139fc));
    return -0xc;
  }
  iVar5 = sprintf(__s,(char *)(DAT_00013a04 + 0x13950),param_2,param_1);
  if (iVar5 < 0) goto LAB_000139d8;
  __stream = fopen64(__s,(char *)(DAT_00013a08 + 0x13968));
  piVar3 = __errno_location();
  iVar4 = DAT_00013a0c;
  if (__stream != (FILE *)0x0) {
    *piVar3 = 0;
    iVar4 = fscanf(__stream,(char *)(iVar4 + 0x139a0),param_3);
    if (iVar4 != 1) {
      if (*piVar3 == 0) {
        iVar5 = -0x3d;
      }
      else {
        iVar5 = -*piVar3;
      }
      iVar4 = fclose(__stream);
      if (iVar4 != 0) {
        perror((char *)(DAT_00013a10 + 0x139d8));
      }
      goto LAB_000139d8;
    }
    iVar4 = fclose(__stream);
    if (iVar4 == 0) goto LAB_000139d8;
  }
  iVar5 = -*piVar3;
LAB_000139d8:
  free(__s);
  return iVar5;
}



/* ===== FUN_00013a14 @ 00013a14 size=288 ===== */

int FUN_00013a14(char *param_1,char *param_2,undefined4 param_3)

{
  size_t sVar1;
  size_t sVar2;
  char *__s;
  FILE *__stream;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  sVar1 = strlen(param_2);
  iVar5 = DAT_00013b34 + 0x13a38;
  sVar2 = strlen(param_1);
  __s = malloc(sVar1 + sVar2 + 2);
  if (__s == (char *)0x0) {
    fputs((char *)(DAT_00013b3c + 0x13a6c),(FILE *)**(undefined4 **)(iVar5 + DAT_00013b38));
    return -0xc;
  }
  iVar5 = sprintf(__s,(char *)(DAT_00013b40 + 0x13a8c),param_2,param_1);
  if (iVar5 < 0) goto LAB_00013b14;
  __stream = fopen64(__s,(char *)(DAT_00013b44 + 0x13aa4));
  piVar3 = __errno_location();
  iVar4 = DAT_00013b48;
  if (__stream != (FILE *)0x0) {
    *piVar3 = 0;
    iVar4 = fscanf(__stream,(char *)(iVar4 + 0x13adc),param_3);
    if (iVar4 != 1) {
      if (*piVar3 == 0) {
        iVar5 = -0x3d;
      }
      else {
        iVar5 = -*piVar3;
      }
      iVar4 = fclose(__stream);
      if (iVar4 != 0) {
        perror((char *)(DAT_00013b4c + 0x13b14));
      }
      goto LAB_00013b14;
    }
    iVar4 = fclose(__stream);
    if (iVar4 == 0) goto LAB_00013b14;
  }
  iVar5 = -*piVar3;
LAB_00013b14:
  free(__s);
  return iVar5;
}



/* ===== _DT_FINI @ 00013b50 size=16 ===== */

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



/* ===== <EXTERNAL>::usleep @ 00026080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 00026084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 00026088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ioctl @ 0002608c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_destroy @ 00026090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 00026094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::epoll_wait @ 00026098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int epoll_wait(int __epfd,epoll_event *__events,int __maxevents,int __timeout)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 0002609c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcmp @ 000260a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::epoll_create1 @ 000260a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int epoll_create1(int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::write @ 000260a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 000260ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::opendir @ 000260b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * opendir(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::access @ 000260b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::system @ 000260b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int system(char *__command)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 000260bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 000260c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fgets @ 000260c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_lock @ 000260c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_unlock @ 000260cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strstr @ 000260d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 000260d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 000260d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_join @ 000260dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


