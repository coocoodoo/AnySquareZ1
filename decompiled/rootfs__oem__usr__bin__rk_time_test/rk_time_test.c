// rk_time_test — Ghidra 12.1.3 decompiler output
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



/* ===== <EXTERNAL>::feof @ 00010c60 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int feof(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_feof_00025044)(__stream);
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



/* ===== <EXTERNAL>::abort @ 00010c90 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00025054)();
  return;
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



/* ===== <EXTERNAL>::strncmp @ 00010cfc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_00025078)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::strncpy @ 00010d08 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_0002507c)(__dest);
  return pcVar1;
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



/* ===== FUN_00010e40 @ 00010e40 size=532 ===== */

undefined4 FUN_00010e40(void)

{
  undefined4 uVar1;
  undefined4 *__ptr;
  char *__s;
  undefined4 *__ptr_00;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  __ptr = malloc(0x2c);
  if (__ptr == (undefined4 *)0x0) {
    __s = (char *)(DAT_00011054 + 0x10e68);
  }
  else {
    __ptr_00 = malloc(0x2c);
    if (__ptr_00 == (undefined4 *)0x0) {
      __s = (char *)(DAT_00011058 + 0x10e94);
    }
    else {
      uVar6 = 0;
      uVar7 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uVar8 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uVar9 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      __ptr[8] = 0;
      __ptr[9] = uVar7;
      __ptr_00[8] = 0;
      __ptr_00[9] = uVar7;
      *__ptr = 0;
      __ptr[1] = uVar7;
      __ptr[2] = uVar8;
      __ptr[3] = uVar9;
      __ptr[4] = 0;
      __ptr[5] = uVar7;
      __ptr[6] = 0;
      __ptr[7] = uVar7;
      __ptr[9] = 0;
      __ptr[10] = uVar7;
      *__ptr_00 = 0;
      __ptr_00[1] = uVar7;
      __ptr_00[2] = uVar8;
      __ptr_00[3] = uVar9;
      __ptr_00[4] = 0;
      __ptr_00[5] = uVar7;
      __ptr_00[6] = 0;
      __ptr_00[7] = uVar7;
      __ptr_00[9] = 0;
      __ptr_00[10] = uVar7;
      iVar2 = FUN_00011490();
      if (iVar2 == 0) {
        printf((char *)(DAT_0001106c + 0x10fd0),__ptr_00[5] + 0x76c,__ptr_00[4] + 1,__ptr_00[3],
               __ptr_00[2],__ptr_00[1],*__ptr_00);
      }
      else {
        puts((char *)(DAT_0001105c + 0x10ed8));
      }
      __ptr[1] = 0;
      __ptr[4] = 2;
      __ptr[5] = 0x7e4;
      *__ptr = 0;
      __ptr[2] = 9;
      __ptr[3] = 0x12;
      iVar2 = FUN_0001156c(__ptr);
      if (iVar2 != 0) {
        puts((char *)(DAT_00011060 + 0x10f18));
      }
      uVar3 = *__ptr;
      uVar4 = __ptr[1];
      uVar5 = __ptr[2];
      printf((char *)(DAT_00011064 + 0x10f2c),__ptr[5],__ptr[4],__ptr[3],uVar5,uVar4,uVar3);
      uVar1 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      *__ptr_00 = uVar6;
      __ptr_00[1] = uVar7;
      __ptr_00[2] = uVar8;
      __ptr_00[3] = uVar9;
      __ptr[3] = uVar6;
      __ptr[4] = uVar7;
      __ptr[5] = uVar8;
      __ptr[6] = uVar9;
      __ptr[1] = 2;
      __ptr[2] = 9;
      __ptr_00[8] = 0;
      __ptr_00[9] = uVar1;
      *__ptr = 0;
      __ptr[7] = 0;
      __ptr[8] = uVar1;
      __ptr[9] = 0;
      __ptr[10] = uVar1;
      __ptr_00[4] = 0;
      __ptr_00[5] = uVar1;
      __ptr_00[6] = 0;
      __ptr_00[7] = uVar1;
      __ptr_00[9] = 0;
      __ptr_00[10] = uVar1;
      iVar2 = FUN_00011810(__ptr);
      if (iVar2 == 0) {
        iVar2 = FUN_00011750(__ptr_00);
        if (iVar2 == 0) {
          printf((char *)(DAT_00011074 + 0x1100c),__ptr_00[2],__ptr_00[1],*__ptr_00,uVar5,uVar4,
                 uVar3);
          iVar2 = FUN_00011904();
          if (iVar2 == 0) {
            iVar2 = FUN_00011a0c(500);
            if (iVar2 != 0) {
              puts((char *)(DAT_0001107c + 0x11040));
            }
            free(__ptr);
            free(__ptr_00);
            return 0;
          }
          __s = (char *)(DAT_00011078 + 0x11024);
        }
        else {
          __s = (char *)(DAT_00011070 + 0x10ff8);
        }
      }
      else {
        __s = (char *)(DAT_00011068 + 0x10fa0);
      }
    }
  }
  puts(__s);
  return 0xffffffff;
}



/* ===== entry @ 00011080 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_0002508c)
            (DAT_000110b4,param_2,&stack0x00000004,DAT_000110b8,DAT_000110b0,param_1);
  return;
}



/* ===== FUN_000110bc @ 000110bc size=32 ===== */

void FUN_000110bc(void)

{
  if (DAT_000110e0 == DAT_000110dc) {
    return;
  }
  if (DAT_000110e4 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000110d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000110e4)();
  return;
}



/* ===== _FINI_0 @ 00011120 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_0001115c;
  if (*DAT_0001115c != '\0') {
    return;
  }
  FUN_000110bc();
  if (DAT_00011160 != 0) {
    __deregister_frame_info(DAT_00011164);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00011168 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_0001118c != 0) {
    __register_frame_info(DAT_00011194,DAT_00011190);
  }
  if ((DAT_00011118 - DAT_00011114 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_0001111c == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0001111c)();
  return;
}



/* ===== FUN_00011198 @ 00011198 size=196 ===== */

undefined4 FUN_00011198(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ssize_t sVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  void *__buf;
  undefined4 local_c;
  
  if (0 < *(int *)(DAT_0001125c + 0x111ac)) {
    __buf = *(void **)(DAT_00011260 + 0x111b0 + DAT_00011264);
    local_c = param_4;
    sVar1 = write(*(int *)(DAT_0001125c + 0x111ac),__buf,1);
    if (sVar1 < 0) {
      piVar2 = __errno_location();
      printf((char *)(DAT_00011268 + 0x111e8),*piVar2);
    }
    local_c = 1;
    iVar3 = ioctl(*(int *)(DAT_0001126c + 0x11204),DAT_00011270,&local_c,DAT_0001126c,param_1,__buf,
                  param_3);
    if (iVar3 == 0) {
      puts((char *)(DAT_00011274 + 0x11218));
    }
    else {
      piVar2 = __errno_location();
      pcVar4 = strerror(*piVar2);
      printf((char *)(DAT_0001127c + 0x11258),pcVar4);
    }
    piVar2 = (int *)(DAT_00011278 + 0x11224);
    close(*piVar2);
    *piVar2 = 0;
  }
  return 0;
}



/* ===== FUN_00011490 @ 00011490 size=200 ===== */

undefined4 FUN_00011490(undefined4 *param_1)

{
  int __fd;
  int iVar1;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  __fd = open64((char *)(DAT_00011558 + 0x114ac),0);
  if (__fd == -1) {
    perror((char *)(DAT_0001155c + 0x114c4));
  }
  else {
    iVar1 = ioctl(__fd,DAT_00011560,&local_34);
    if (iVar1 == -1) {
      perror((char *)(DAT_00011564 + 0x114f0));
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
      puts((char *)(DAT_00011568 + 0x11514));
    }
    close(__fd);
  }
  return 0xffffffff;
}



/* ===== FUN_0001156c @ 0001156c size=432 ===== */

undefined4 FUN_0001156c(uint *param_1)

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
    pcVar1 = (char *)(DAT_0001171c + 0x11588);
  }
  else {
    __fd = open64((char *)(DAT_00011720 + 0x115a0),2);
    if (__fd == -1) {
      perror((char *)(DAT_00011724 + 0x115b8));
      return 0xffffffff;
    }
    local_60 = *param_1;
    local_5c = param_1[1];
    local_4c = param_1[5] - 0x76c;
    local_58 = param_1[2];
    local_54 = param_1[3];
    local_50 = param_1[4] - 1;
    if (local_4c < 1) {
      pcVar1 = (char *)(DAT_00011728 + 0x11610);
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
              iVar2 = ioctl(__fd,DAT_00011740,&local_60);
              if (iVar2 == -1) {
                perror((char *)(DAT_00011744 + 0x116bc));
                close(__fd);
                return 0xffffffff;
              }
              iVar2 = settimeofday(&local_68,(timezone *)0x0);
              if (iVar2 != 0) {
                piVar3 = __errno_location();
                if (*piVar3 == 1) {
                  pcVar1 = (char *)(DAT_00011748 + 0x116f8);
                }
                else {
                  if (*piVar3 != 0x16) goto LAB_000116f8;
                  pcVar1 = (char *)((int)&DAT_0001171c + DAT_0001174c);
                }
                puts(pcVar1);
              }
LAB_000116f8:
              close(__fd);
              return 0;
            }
            pcVar1 = (char *)(DAT_0001173c + 0x11668);
          }
          else {
            pcVar1 = (char *)(DAT_00011738 + 0x11658);
          }
        }
        else {
          pcVar1 = (char *)(DAT_00011734 + 0x11648);
        }
      }
      else {
        pcVar1 = (char *)(DAT_00011730 + 0x11638);
      }
    }
    else {
      pcVar1 = (char *)(DAT_0001172c + 0x11624);
    }
  }
  puts(pcVar1);
  return 0xffffffff;
}



/* ===== FUN_00011750 @ 00011750 size=172 ===== */

undefined4 FUN_00011750(undefined4 *param_1)

{
  int __fd;
  int iVar1;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (param_1 == (undefined4 *)0x0) {
    puts((char *)(DAT_000117fc + 0x1176c));
  }
  else {
    __fd = open64((char *)(DAT_00011800 + 0x1178c),0);
    if (__fd == -1) {
      perror((char *)(DAT_00011804 + 0x117a4));
      return 0xffffffff;
    }
    iVar1 = ioctl(__fd,DAT_00011808,&local_34);
    if (iVar1 != -1) {
      *param_1 = local_34;
      param_1[1] = local_30;
      param_1[2] = local_2c;
      close(__fd);
      return 0;
    }
    perror((char *)(DAT_0001180c + 0x117c8));
    close(__fd);
  }
  return 0xffffffff;
}



/* ===== FUN_00011810 @ 00011810 size=212 ===== */

undefined4 FUN_00011810(uint *param_1)

{
  char *__s;
  int __fd;
  int iVar1;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  if (param_1 == (uint *)0x0) {
    __s = (char *)(DAT_000118e4 + 0x1182c);
  }
  else {
    uStack_2c = param_1[2];
    if (uStack_2c < 0x18) {
      uStack_30 = param_1[1];
      if (uStack_30 < 0x3c) {
        uStack_34 = *param_1;
        if (uStack_34 < 0x3c) {
          __fd = open64((char *)(DAT_000118f4 + 0x11888),1);
          if (__fd == -1) {
            perror((char *)(DAT_000118f8 + 0x118a4));
            return 0xffffffff;
          }
          iVar1 = ioctl(__fd,DAT_000118fc,&uStack_34);
          if (iVar1 == -1) {
            perror((char *)(DAT_00011900 + 0x118c8));
            close(__fd);
            return 0xffffffff;
          }
          close(__fd);
          return 0;
        }
        __s = (char *)(DAT_000118f0 + 0x11878);
      }
      else {
        __s = (char *)(DAT_000118ec + 0x11864);
      }
    }
    else {
      __s = (char *)(DAT_000118e8 + 0x11850);
    }
  }
  puts(__s);
  return 0xffffffff;
}



/* ===== FUN_00011904 @ 00011904 size=120 ===== */

undefined4 FUN_00011904(void)

{
  int __fd;
  int iVar1;
  undefined4 uVar2;
  
  __fd = open64((char *)(DAT_0001197c + 0x11918),2);
  if (__fd == -1) {
    perror((char *)(DAT_00011980 + 0x11930));
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = ioctl(__fd,0x7001,0);
    if (iVar1 == -1) {
      perror((char *)(DAT_00011984 + 0x1195c));
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



/* ===== FUN_00011a0c @ 00011a0c size=296 ===== */

undefined4 FUN_00011a0c(int param_1)

{
  uint __fd;
  char *__s;
  int *piVar1;
  __fd_mask *p_Var2;
  int iVar3;
  timeval local_98;
  uint auStack_90 [33];
  
  __fd = open64((char *)(DAT_00011b34 + 0x11a28),2);
  if (__fd == 0xffffffff) {
    perror((char *)(DAT_00011b38 + 0x11a40));
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
    __s = (char *)(DAT_00011b3c + 0x11aa0);
  }
  else {
    local_98.tv_usec = 0;
    local_98.tv_sec = param_1;
    iVar3 = select(__fd + 1,(fd_set *)auStack_90,(fd_set *)0x0,(fd_set *)0x0,&local_98);
    if (iVar3 < 0) {
      piVar1 = __errno_location();
      if (*piVar1 != 4) goto LAB_00011aa0;
      __s = (char *)(DAT_00011b40 + 0x11af4);
    }
    else {
      if (iVar3 != 0) {
        if (iVar3 == 1) {
          puts((char *)(DAT_00011b48 + 0x11b24));
        }
        close(__fd);
        return 0;
      }
      piVar1 = __errno_location();
      *piVar1 = 0x6e;
      __s = (char *)(DAT_00011b44 + 0x11b10);
    }
  }
  puts(__s);
LAB_00011aa0:
  close(__fd);
  return 0xffffffff;
}



/* ===== FUN_00011b4c @ 00011b4c size=700 ===== */

int FUN_00011b4c(char *param_1,char *param_2)

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
  
  iVar7 = DAT_00011e0c;
  __dirp = opendir((char *)(DAT_00011e08 + 0x11b6c));
  iVar7 = iVar7 + 0x11b74;
  if (__dirp == (DIR *)0x0) {
    fputs((char *)(DAT_00011e18 + 0x11bc4),(FILE *)**(undefined4 **)(iVar7 + DAT_00011e14));
LAB_00011bc8:
    local_4c = -0x13;
  }
  else {
    __s2 = (char *)(DAT_00011e10 + 0x11b84);
    do {
      while( true ) {
        do {
          do {
            do {
              pdVar1 = readdir64(__dirp);
              if (pdVar1 == (dirent64 *)0x0) {
                iVar7 = closedir(__dirp);
                if (iVar7 != -1) goto LAB_00011bc8;
                piVar2 = __errno_location();
                local_4c = *piVar2;
                goto LAB_00011df0;
              }
              pcVar5 = pdVar1->d_name;
              iVar3 = strcmp(pcVar5,__s2);
            } while ((iVar3 == 0) ||
                    (iVar3 = strcmp(pcVar5,(char *)(DAT_00011e1c + 0x11bf8)), iVar3 == 0));
            sVar4 = strlen(pcVar5);
            __n = strlen(param_2);
          } while ((sVar4 <= __n) || (iVar3 = strncmp(pcVar5,param_2,__n), iVar3 != 0));
          piVar2 = __errno_location();
          *piVar2 = 0;
          sVar4 = strlen(param_2);
          iVar3 = sscanf(pcVar5 + sVar4,(char *)(DAT_00011e20 + 0x11c58),&local_4c);
          if (iVar3 < 0) {
            iVar3 = -*piVar2;
            fputs((char *)(DAT_00011e24 + 0x11c7c),(FILE *)**(undefined4 **)(iVar7 + DAT_00011e14));
            goto LAB_00011c84;
          }
          if (iVar3 != 1) {
            iVar3 = -5;
            fputs((char *)(DAT_00011e2c + 0x11cc4),(FILE *)**(undefined4 **)(iVar7 + DAT_00011e14));
            goto LAB_00011c84;
          }
          iVar3 = 0;
          for (iVar6 = local_4c; iVar6 != 0;
              iVar6 = (int)((longlong)iVar6 * (longlong)DAT_00011e38 >> 0x22) - (iVar6 >> 0x1f)) {
            iVar3 = iVar3 + 1;
          }
          sVar4 = strlen(param_2);
        } while (pcVar5[iVar3 + sVar4] == ':');
        pcVar5 = malloc(iVar3 + sVar4 + 0x1b);
        if (pcVar5 == (char *)0x0) {
          iVar3 = -0xc;
          goto LAB_00011c84;
        }
        iVar3 = sprintf(pcVar5,(char *)(DAT_00011e34 + 0x11d20),DAT_00011e30 + 0x11d18,param_2,
                        local_4c);
        if (iVar3 < 0) {
          free(pcVar5);
          goto LAB_00011c84;
        }
        __stream = fopen64(pcVar5,(char *)(DAT_00011e3c + 0x11d5c));
        if (__stream != (FILE *)0x0) break;
        free(pcVar5);
      }
      free(pcVar5);
      iVar3 = DAT_00011e40;
      *piVar2 = 0;
      iVar3 = fscanf(__stream,(char *)(iVar3 + 0x11d90),acStack_48);
      if (iVar3 != 1) {
        iVar3 = *piVar2;
        if (iVar3 == 0) {
          iVar3 = -0x3d;
          goto LAB_00011c84;
        }
LAB_00011da8:
        iVar3 = -iVar3;
LAB_00011c84:
        iVar7 = closedir(__dirp);
        if (iVar7 != -1) {
          return iVar3;
        }
        perror((char *)(DAT_00011e28 + 0x11ca0));
        return iVar3;
      }
      iVar3 = fclose(__stream);
      if (iVar3 != 0) {
        iVar3 = *piVar2;
        goto LAB_00011da8;
      }
      iVar3 = strcmp(param_1,acStack_48);
    } while (iVar3 != 0);
    iVar7 = closedir(__dirp);
    if (iVar7 == -1) {
      local_4c = *piVar2;
LAB_00011df0:
      local_4c = -local_4c;
    }
  }
  return local_4c;
}



/* ===== FUN_00012078 @ 00012078 size=232 ===== */

undefined4 FUN_00012078(undefined2 param_1,void *param_2,uint param_3)

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
  
  iVar2 = DAT_00012160 + 0x12094;
  if ((int)param_3 < 0x401) {
    __fd = open64((char *)(DAT_0001216c + 0x120e0),2,0);
    if (__fd < 0) {
      __s = (char *)(DAT_00012170 + 0x120fc);
      __stream = (FILE *)**(undefined4 **)(iVar2 + DAT_00012164);
    }
    else {
      local_422 = (undefined2)param_3;
      local_428 = DAT_00012174;
      local_424 = param_1;
      memcpy(auStack_420,param_2,param_3 & 0xffff);
      iVar1 = ioctl(__fd,DAT_00012178,&local_428);
      close(__fd);
      if (iVar1 == 0) {
        return 0;
      }
      __s = (char *)(DAT_0001217c + 0x1215c);
      __stream = (FILE *)**(undefined4 **)(iVar2 + DAT_00012164);
    }
  }
  else {
    __s = (char *)(DAT_00012168 + 0x120a8);
    __stream = (FILE *)**(undefined4 **)(iVar2 + DAT_00012164);
  }
  fputs(__s,__stream);
  return 0xffffffff;
}



/* ===== FUN_000125e8 @ 000125e8 size=168 ===== */

int FUN_000125e8(undefined4 param_1,undefined4 param_2)

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
  sprintf(local_50,(char *)(DAT_00012694 + 0x12618),DAT_00012690 + 0x12610,param_1);
  iVar1 = FUN_00013be0(DAT_00012698 + 0x12650,local_50,local_58);
  if (-1 < iVar1) {
    iVar1 = strcmp(local_58,(char *)(DAT_0001269c + 0x12668));
    if (iVar1 == 0) {
      iVar1 = FUN_00013944(DAT_000126a0 + 0x12688,local_50,param_2);
    }
    else {
      iVar1 = -0x16;
    }
  }
  return iVar1;
}



/* ===== FUN_000126a4 @ 000126a4 size=64 ===== */

void FUN_000126a4(undefined4 param_1)

{
  char acStack_48 [64];
  
  sprintf(acStack_48,(char *)(DAT_000126e8 + 0x126cc),DAT_000126e4 + 0x126c4,param_1);
  FUN_0001395c(DAT_000126ec + 0x126dc,acStack_48);
  return;
}



/* ===== FUN_000126f0 @ 000126f0 size=156 ===== */

undefined4 FUN_000126f0(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  char acStack_98 [64];
  char acStack_58 [68];
  
  iVar2 = DAT_0001278c + 0x12710;
  sprintf(acStack_98,(char *)(DAT_00012790 + 0x12718),iVar2,param_1);
  sprintf(acStack_58,(char *)(DAT_00012794 + 0x12738),iVar2,param_1);
  iVar2 = access(acStack_58,0);
  if (iVar2 == 0) {
    printf((char *)(DAT_00012798 + 0x12764),param_1,acStack_58);
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0001393c(DAT_0001279c + 0x12784,acStack_98,0);
  }
  return uVar1;
}



/* ===== FUN_000127a0 @ 000127a0 size=68 ===== */

void FUN_000127a0(undefined4 param_1)

{
  char acStack_48 [64];
  
  sprintf(acStack_48,(char *)(DAT_000127e8 + 0x127c8),DAT_000127e4 + 0x127c0,param_1);
  FUN_0001393c(DAT_000127ec + 0x127dc,acStack_48,0);
  return;
}



/* ===== FUN_000127f0 @ 000127f0 size=72 ===== */

void FUN_000127f0(undefined4 param_1,undefined4 param_2)

{
  char acStack_50 [68];
  
  sprintf(acStack_50,(char *)(DAT_0001283c + 0x12818),DAT_00012838 + 0x12814,param_1);
  FUN_0001393c(DAT_00012840 + 0x12830,acStack_50,param_2);
  return;
}



/* ===== FUN_00012bc4 @ 00012bc4 size=40 ===== */

int FUN_00012bc4(void)

{
  int iVar1;
  
  iVar1 = FUN_000127a0();
  if (iVar1 < 0) {
    puts((char *)(DAT_00012bec + 0x12be4));
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_0001393c @ 0001393c size=500 ===== */

/* WARNING: Removing unreachable block (ram,0x00013604) */
/* WARNING: Removing unreachable block (ram,0x0001361c) */
/* WARNING: Removing unreachable block (ram,0x00013640) */
/* WARNING: Removing unreachable block (ram,0x00013684) */
/* WARNING: Removing unreachable block (ram,0x00013694) */
/* WARNING: Removing unreachable block (ram,0x000136a0) */
/* WARNING: Removing unreachable block (ram,0x00013654) */
/* WARNING: Removing unreachable block (ram,0x00013664) */
/* WARNING: Removing unreachable block (ram,0x00013668) */
/* WARNING: Removing unreachable block (ram,0x0001366c) */
/* WARNING: Removing unreachable block (ram,0x00013678) */

int FUN_0001393c(char *param_1,char *param_2,undefined4 param_3)

{
  size_t sVar1;
  size_t sVar2;
  char *__s;
  FILE *__stream;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  sVar1 = strlen(param_2);
  iVar5 = DAT_000136cc + 0x1350c;
  sVar2 = strlen(param_1);
  __s = malloc(sVar1 + sVar2 + 2);
  if (__s == (char *)0x0) {
    iVar4 = -0xc;
  }
  else {
    iVar4 = sprintf(__s,(char *)(DAT_000136d0 + 0x13540),param_2,param_1);
    if (-1 < iVar4) {
      __stream = fopen64(__s,(char *)(DAT_000136d4 + 0x13558));
      if (__stream == (FILE *)0x0) {
        piVar3 = __errno_location();
        iVar4 = -*piVar3;
        fprintf((FILE *)**(undefined4 **)(iVar5 + DAT_000136d8),(char *)(DAT_000136dc + 0x1357c),__s
               );
      }
      else {
        iVar4 = fprintf(__stream,(char *)(DAT_000136e0 + 0x135b0),param_3);
        if (iVar4 < 0) {
          iVar5 = fclose(__stream);
          if (iVar5 != 0) {
            perror((char *)(DAT_000136e4 + 0x135dc));
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



/* ===== FUN_00013944 @ 00013944 size=8 ===== */

int FUN_00013944(char *param_1,char *param_2,int param_3)

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
  iVar8 = DAT_000136cc + 0x1350c;
  sVar2 = strlen(param_1);
  __s = malloc(sVar1 + sVar2 + 2);
  if (__s == (char *)0x0) {
    return -0xc;
  }
  iVar3 = sprintf(__s,(char *)(DAT_000136d0 + 0x13540),param_2,param_1);
  if (iVar3 < 0) goto LAB_00013588;
  pFVar4 = fopen64(__s,(char *)(DAT_000136d4 + 0x13558));
  if (pFVar4 == (FILE *)0x0) {
    piVar5 = __errno_location();
    puVar7 = *(undefined4 **)(iVar8 + DAT_000136d8);
    pcVar6 = (char *)(DAT_000136dc + 0x1357c);
    iVar3 = *piVar5;
LAB_00013580:
    iVar3 = -iVar3;
    fprintf((FILE *)*puVar7,pcVar6,__s);
  }
  else {
    pcVar6 = (char *)(DAT_000136e0 + 0x135b0);
    iVar3 = fprintf(pFVar4,pcVar6,param_3);
    if (iVar3 < 0) {
      iVar8 = fclose(pFVar4);
      if (iVar8 == 0) goto LAB_00013588;
      pcVar6 = (char *)(DAT_000136e4 + 0x135dc);
LAB_000135d8:
      perror(pcVar6);
      goto LAB_00013588;
    }
    iVar3 = fclose(pFVar4);
    if (iVar3 == 0) {
      pFVar4 = fopen64(__s,(char *)(DAT_000136e8 + 0x13614));
      if (pFVar4 == (FILE *)0x0) {
        piVar5 = __errno_location();
        puVar7 = *(undefined4 **)(iVar8 + DAT_000136d8);
        pcVar6 = (char *)(DAT_000136ec + 0x13638);
        iVar3 = *piVar5;
        goto LAB_00013580;
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
        if (iVar8 == 0) goto LAB_00013588;
        pcVar6 = (char *)(DAT_000136f0 + 0x13684);
        goto LAB_000135d8;
      }
      iVar3 = fclose(pFVar4);
      if (iVar3 == 0) {
        iVar3 = 0;
        if (aiStack_2c[0] != param_3) {
          iVar3 = -1;
          fprintf((FILE *)**(undefined4 **)(iVar8 + DAT_000136d8),(char *)(DAT_000136f4 + 0x136bc),
                  param_3,param_2,param_1);
        }
        goto LAB_00013588;
      }
    }
    piVar5 = __errno_location();
    iVar3 = -*piVar5;
  }
LAB_00013588:
  free(__s);
  return iVar3;
}



/* ===== FUN_0001394c @ 0001394c size=540 ===== */

int FUN_0001394c(char *param_1,char *param_2,char *param_3)

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
  iVar7 = DAT_0001390c + 0x13724;
  sVar2 = strlen(param_1);
  __s = malloc(sVar1 + sVar2 + 2);
  if (__s == (char *)0x0) {
    fputs((char *)(DAT_00013914 + 0x13758),(FILE *)**(undefined4 **)(iVar7 + DAT_00013910));
    return -0xc;
  }
  iVar3 = sprintf(__s,(char *)(DAT_00013918 + 0x1377c),param_2,param_1);
  if (iVar3 < 0) goto LAB_000137c4;
  pFVar4 = fopen64(__s,(char *)(DAT_0001391c + 0x13794));
  if (pFVar4 == (FILE *)0x0) {
    piVar5 = __errno_location();
    iVar3 = -*piVar5;
    fprintf((FILE *)**(undefined4 **)(iVar7 + DAT_00013910),(char *)(DAT_00013920 + 0x137b8),__s);
    goto LAB_000137c4;
  }
  pcVar8 = (char *)(DAT_00013924 + 0x137e4);
  iVar3 = fprintf(pFVar4,pcVar8,param_3);
  if (iVar3 < 0) {
    iVar7 = fclose(pFVar4);
    if (iVar7 == 0) goto LAB_000137c4;
    pcVar8 = (char *)(DAT_00013928 + 0x13810);
LAB_0001380c:
    perror(pcVar8);
  }
  else {
    iVar6 = fclose(pFVar4);
    if (iVar6 == 0) {
      pFVar4 = fopen64(__s,(char *)(DAT_0001392c + 0x13848));
      if (pFVar4 == (FILE *)0x0) {
        piVar5 = __errno_location();
        iVar3 = -*piVar5;
        fputs((char *)(DAT_00013930 + 0x13874),(FILE *)**(undefined4 **)(iVar7 + DAT_00013910));
        goto LAB_000137c4;
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
        if (iVar7 == 0) goto LAB_000137c4;
        pcVar8 = (char *)(DAT_00013934 + 0x138bc);
        goto LAB_0001380c;
      }
      iVar6 = fclose(pFVar4);
      if (iVar6 == 0) {
        iVar6 = strcmp(__s,param_3);
        if (iVar6 != 0) {
          iVar3 = -1;
          fprintf((FILE *)**(undefined4 **)(iVar7 + DAT_00013910),(char *)(DAT_00013938 + 0x138fc),
                  __s,param_3,param_2,param_1);
        }
        goto LAB_000137c4;
      }
    }
    piVar5 = __errno_location();
    iVar3 = -*piVar5;
  }
LAB_000137c4:
  free(__s);
  return iVar3;
}



/* ===== FUN_0001395c @ 0001395c size=300 ===== */

char * FUN_0001395c(char *param_1,char *param_2)

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
  iVar4 = DAT_00013a88 + 0x1397c;
  sVar2 = strlen(param_1);
  __s = malloc(sVar1 + sVar2 + 2);
  if (__s == (char *)0x0) {
    fputs((char *)(DAT_00013a90 + 0x139ac),(FILE *)**(undefined4 **)(iVar4 + DAT_00013a8c));
    return (char *)-0xc;
  }
  local_1c = (char *)sprintf(__s,(char *)(DAT_00013a94 + 0x139d0),param_2,param_1,pcVar5);
  if ((int)local_1c < 0) goto LAB_00013a64;
  __stream = fopen64(__s,(char *)(DAT_00013a98 + 0x139ec));
  piVar3 = __errno_location();
  iVar4 = DAT_00013a9c;
  if (__stream != (FILE *)0x0) {
    *piVar3 = 0;
    iVar4 = fscanf(__stream,(char *)(iVar4 + 0x13a28),&local_1c);
    if (iVar4 != 1) {
      if (*piVar3 == 0) {
        local_1c = (char *)0xffffffc3;
      }
      else {
        local_1c = (char *)-*piVar3;
      }
      iVar4 = fclose(__stream);
      if (iVar4 != 0) {
        perror((char *)(DAT_00013aa0 + 0x13a64));
      }
      goto LAB_00013a64;
    }
    iVar4 = fclose(__stream);
    if (iVar4 == 0) goto LAB_00013a64;
  }
  local_1c = (char *)-*piVar3;
LAB_00013a64:
  free(__s);
  return local_1c;
}



/* ===== FUN_00013be0 @ 00013be0 size=288 ===== */

int FUN_00013be0(char *param_1,char *param_2,undefined4 param_3)

{
  size_t sVar1;
  size_t sVar2;
  char *__s;
  FILE *__stream;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  sVar1 = strlen(param_2);
  iVar5 = DAT_00013d00 + 0x13c04;
  sVar2 = strlen(param_1);
  __s = malloc(sVar1 + sVar2 + 2);
  if (__s == (char *)0x0) {
    fputs((char *)(DAT_00013d08 + 0x13c38),(FILE *)**(undefined4 **)(iVar5 + DAT_00013d04));
    return -0xc;
  }
  iVar5 = sprintf(__s,(char *)(DAT_00013d0c + 0x13c58),param_2,param_1);
  if (iVar5 < 0) goto LAB_00013ce0;
  __stream = fopen64(__s,(char *)(DAT_00013d10 + 0x13c70));
  piVar3 = __errno_location();
  iVar4 = DAT_00013d14;
  if (__stream != (FILE *)0x0) {
    *piVar3 = 0;
    iVar4 = fscanf(__stream,(char *)(iVar4 + 0x13ca8),param_3);
    if (iVar4 != 1) {
      if (*piVar3 == 0) {
        iVar5 = -0x3d;
      }
      else {
        iVar5 = -*piVar3;
      }
      iVar4 = fclose(__stream);
      if (iVar4 != 0) {
        perror((char *)(DAT_00013d18 + 0x13ce0));
      }
      goto LAB_00013ce0;
    }
    iVar4 = fclose(__stream);
    if (iVar4 == 0) goto LAB_00013ce0;
  }
  iVar5 = -*piVar3;
LAB_00013ce0:
  free(__s);
  return iVar5;
}



/* ===== _DT_FINI @ 00013d1c size=16 ===== */

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


