// rk_adc_test — Ghidra 12.1.3 decompiler output
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



/* ===== <EXTERNAL>::memcmp @ 00010d20 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_00025084)(__s1);
  return iVar1;
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



/* ===== <EXTERNAL>::pthread_join @ 00010e04 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_000250d0)(__th);
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



/* ===== FUN_00010e40 @ 00010e40 size=176 ===== */

undefined4 FUN_00010e40(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar6 = DAT_00010ef0 + 0x10e50;
  uVar1 = FUN_00012208(iVar6);
  printf((char *)(DAT_00010ef4 + 0x10e64),uVar1);
  uVar1 = FUN_00012208(iVar6);
  uVar1 = FUN_00012218(uVar1,0);
  uVar2 = FUN_00012208(iVar6);
  uVar2 = FUN_00012218(uVar2,1);
  uVar3 = FUN_00012208(iVar6);
  uVar3 = FUN_00012218(uVar3,2);
  uVar4 = FUN_00012208(iVar6);
  uVar4 = FUN_00012218(uVar4,3);
  uVar5 = FUN_00012208(iVar6);
  uVar5 = FUN_00012218(uVar5,4);
  printf((char *)(DAT_00010ef8 + 0x10ee4),uVar1,uVar2,uVar3,uVar4,uVar5);
  return 0;
}



/* ===== entry @ 00010efc size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_0002508c)
            (DAT_00010f30,param_2,&stack0x00000004,DAT_00010f34,DAT_00010f2c,param_1);
  return;
}



/* ===== FUN_00010f38 @ 00010f38 size=32 ===== */

void FUN_00010f38(void)

{
  if (DAT_00010f5c == DAT_00010f58) {
    return;
  }
  if (DAT_00010f60 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010f54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00010f60)();
  return;
}



/* ===== _FINI_0 @ 00010f9c size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00010fd8;
  if (*DAT_00010fd8 != '\0') {
    return;
  }
  FUN_00010f38();
  if (DAT_00010fdc != 0) {
    __deregister_frame_info(DAT_00010fe0);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00010fe4 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00011008 != 0) {
    __register_frame_info(DAT_00011010,DAT_0001100c);
  }
  if ((DAT_00010f94 - DAT_00010f90 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00010f98 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00010f98)();
  return;
}



/* ===== FUN_00011014 @ 00011014 size=196 ===== */

undefined4 FUN_00011014(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ssize_t sVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  void *__buf;
  undefined4 local_c;
  
  if (0 < *(int *)(DAT_000110d8 + 0x11028)) {
    __buf = *(void **)(DAT_000110dc + 0x1102c + DAT_000110e0);
    local_c = param_4;
    sVar1 = write(*(int *)(DAT_000110d8 + 0x11028),__buf,1);
    if (sVar1 < 0) {
      piVar2 = __errno_location();
      printf((char *)(DAT_000110e4 + 0x11064),*piVar2);
    }
    local_c = 1;
    iVar3 = ioctl(*(int *)(DAT_000110e8 + 0x11080),DAT_000110ec,&local_c,DAT_000110e8,param_1,__buf,
                  param_3);
    if (iVar3 == 0) {
      puts((char *)(DAT_000110f0 + 0x11094));
    }
    else {
      piVar2 = __errno_location();
      pcVar4 = strerror(*piVar2);
      printf((char *)(DAT_000110f8 + 0x110d4),pcVar4);
    }
    piVar2 = (int *)(DAT_000110f4 + 0x110a0);
    close(*piVar2);
    *piVar2 = 0;
  }
  return 0;
}



/* ===== FUN_0001130c @ 0001130c size=200 ===== */

undefined4 FUN_0001130c(undefined4 *param_1)

{
  int __fd;
  int iVar1;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  __fd = open64((char *)(DAT_000113d4 + 0x11328),0);
  if (__fd == -1) {
    perror((char *)(DAT_000113d8 + 0x11340));
  }
  else {
    iVar1 = ioctl(__fd,DAT_000113dc,&local_34);
    if (iVar1 == -1) {
      perror((char *)(DAT_000113e0 + 0x1136c));
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
      puts((char *)(DAT_000113e4 + 0x11390));
    }
    close(__fd);
  }
  return 0xffffffff;
}



/* ===== FUN_000113e8 @ 000113e8 size=432 ===== */

undefined4 FUN_000113e8(uint *param_1)

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
    pcVar1 = (char *)(DAT_00011598 + 0x11404);
  }
  else {
    __fd = open64((char *)(DAT_0001159c + 0x1141c),2);
    if (__fd == -1) {
      perror((char *)(DAT_000115a0 + 0x11434));
      return 0xffffffff;
    }
    local_60 = *param_1;
    local_5c = param_1[1];
    local_4c = param_1[5] - 0x76c;
    local_58 = param_1[2];
    local_54 = param_1[3];
    local_50 = param_1[4] - 1;
    if (local_4c < 1) {
      pcVar1 = (char *)(DAT_000115a4 + 0x1148c);
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
              iVar2 = ioctl(__fd,DAT_000115bc,&local_60);
              if (iVar2 == -1) {
                perror((char *)(DAT_000115c0 + 0x11538));
                close(__fd);
                return 0xffffffff;
              }
              iVar2 = settimeofday(&local_68,(timezone *)0x0);
              if (iVar2 != 0) {
                piVar3 = __errno_location();
                if (*piVar3 == 1) {
                  pcVar1 = (char *)(DAT_000115c4 + 0x11574);
                }
                else {
                  if (*piVar3 != 0x16) goto LAB_00011574;
                  pcVar1 = (char *)((int)&DAT_00011598 + DAT_000115c8);
                }
                puts(pcVar1);
              }
LAB_00011574:
              close(__fd);
              return 0;
            }
            pcVar1 = (char *)(DAT_000115b8 + 0x114e4);
          }
          else {
            pcVar1 = (char *)(DAT_000115b4 + 0x114d4);
          }
        }
        else {
          pcVar1 = (char *)(DAT_000115b0 + 0x114c4);
        }
      }
      else {
        pcVar1 = (char *)(DAT_000115ac + 0x114b4);
      }
    }
    else {
      pcVar1 = (char *)(DAT_000115a8 + 0x114a0);
    }
  }
  puts(pcVar1);
  return 0xffffffff;
}



/* ===== FUN_000115cc @ 000115cc size=172 ===== */

undefined4 FUN_000115cc(undefined4 *param_1)

{
  int __fd;
  int iVar1;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (param_1 == (undefined4 *)0x0) {
    puts((char *)(DAT_00011678 + 0x115e8));
  }
  else {
    __fd = open64((char *)(DAT_0001167c + 0x11608),0);
    if (__fd == -1) {
      perror((char *)(DAT_00011680 + 0x11620));
      return 0xffffffff;
    }
    iVar1 = ioctl(__fd,DAT_00011684,&local_34);
    if (iVar1 != -1) {
      *param_1 = local_34;
      param_1[1] = local_30;
      param_1[2] = local_2c;
      close(__fd);
      return 0;
    }
    perror((char *)(DAT_00011688 + 0x11644));
    close(__fd);
  }
  return 0xffffffff;
}



/* ===== FUN_00011cc0 @ 00011cc0 size=244 ===== */

undefined4 FUN_00011cc0(char *param_1)

{
  FILE *__stream;
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  char *__needle;
  char acStack_118 [256];
  
  memset(acStack_118,0,0x100);
  __stream = fopen64((char *)(DAT_00011db8 + 0x11cf4),(char *)(DAT_00011db4 + 0x11cf0));
  if (__stream == (FILE *)0x0) {
    puts((char *)(DAT_00011dc4 + 0x11d38));
LAB_00011d38:
    uVar3 = 0xffffffff;
  }
  else {
    __needle = (char *)(DAT_00011dbc + 0x11d08);
    do {
      iVar1 = feof(__stream);
      if (iVar1 != 0) {
        puts((char *)(DAT_00011dc0 + 0x11d20));
        fclose(__stream);
        goto LAB_00011d38;
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



/* ===== FUN_00011dc8 @ 00011dc8 size=268 ===== */

undefined4 FUN_00011dc8(undefined2 param_1,void *param_2,int param_3)

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
  
  iVar3 = DAT_00011ed4;
  memset(&local_428,0,0x408);
  iVar3 = iVar3 + 0x11e0c;
  __fd = open64((char *)(DAT_00011ed8 + 0x11e10),0);
  if (__fd < 0) {
    fputs((char *)(DAT_00011ee0 + 0x11e2c),(FILE *)**(undefined4 **)(iVar3 + DAT_00011edc));
  }
  else {
    local_428 = DAT_00011ee4;
    local_422 = 0x400;
    local_424 = param_1;
    sVar1 = ioctl(__fd,DAT_00011ee8,&local_428);
    close(__fd);
    if (sVar1 == 0) {
      if ((int)(uint)local_422 <= param_3) {
        memcpy(param_2,acStack_420,(uint)local_422);
        return 0;
      }
      sVar1 = strlen(acStack_420);
      puVar2 = *(undefined4 **)(iVar3 + DAT_00011edc);
      __format = (char *)(DAT_00011ef0 + 0x11ec0);
    }
    else {
      puVar2 = *(undefined4 **)(iVar3 + DAT_00011edc);
      __format = (char *)(DAT_00011eec + 0x11e90);
    }
    fprintf((FILE *)*puVar2,__format,sVar1);
  }
  return 0xffffffff;
}



/* ===== FUN_00011ef4 @ 00011ef4 size=232 ===== */

undefined4 FUN_00011ef4(undefined2 param_1,void *param_2,uint param_3)

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
  
  iVar2 = DAT_00011fdc + 0x11f10;
  if ((int)param_3 < 0x401) {
    __fd = open64((char *)(DAT_00011fe8 + 0x11f5c),2,0);
    if (__fd < 0) {
      __s = (char *)(DAT_00011fec + 0x11f78);
      __stream = (FILE *)**(undefined4 **)(iVar2 + DAT_00011fe0);
    }
    else {
      local_422 = (undefined2)param_3;
      local_428 = DAT_00011ff0;
      local_424 = param_1;
      memcpy(auStack_420,param_2,param_3 & 0xffff);
      iVar1 = ioctl(__fd,DAT_00011ff4,&local_428);
      close(__fd);
      if (iVar1 == 0) {
        return 0;
      }
      __s = (char *)(DAT_00011ff8 + 0x11fd8);
      __stream = (FILE *)**(undefined4 **)(iVar2 + DAT_00011fe0);
    }
  }
  else {
    __s = (char *)(DAT_00011fe4 + 0x11f24);
    __stream = (FILE *)**(undefined4 **)(iVar2 + DAT_00011fe0);
  }
  fputs(__s,__stream);
  return 0xffffffff;
}



/* ===== FUN_00012208 @ 00012208 size=712 ===== */

int FUN_00012208(char *param_1)

{
  DIR *__dirp;
  dirent64 *pdVar1;
  int *piVar2;
  int iVar3;
  size_t sVar4;
  size_t __n;
  char *pcVar5;
  FILE *__stream;
  char *__s;
  char *__s2;
  int iVar6;
  int iVar7;
  int local_4c;
  char acStack_48 [36];
  
  iVar7 = DAT_00011c88;
  __s = (char *)((int)&DAT_00012214 + DAT_00012214);
  __dirp = opendir((char *)(DAT_00011c84 + 0x119e8));
  iVar7 = iVar7 + 0x119f0;
  if (__dirp == (DIR *)0x0) {
    fputs((char *)(DAT_00011c94 + 0x11a40),(FILE *)**(undefined4 **)(iVar7 + DAT_00011c90));
LAB_00011a44:
    local_4c = -0x13;
  }
  else {
    __s2 = (char *)(DAT_00011c8c + 0x11a00);
    do {
      while( true ) {
        do {
          do {
            do {
              pdVar1 = readdir64(__dirp);
              if (pdVar1 == (dirent64 *)0x0) {
                iVar7 = closedir(__dirp);
                if (iVar7 != -1) goto LAB_00011a44;
                piVar2 = __errno_location();
                local_4c = *piVar2;
                goto LAB_00011c6c;
              }
              pcVar5 = pdVar1->d_name;
              iVar3 = strcmp(pcVar5,__s2);
            } while ((iVar3 == 0) ||
                    (iVar3 = strcmp(pcVar5,(char *)(DAT_00011c98 + 0x11a74)), iVar3 == 0));
            sVar4 = strlen(pcVar5);
            __n = strlen(__s);
          } while ((sVar4 <= __n) || (iVar3 = strncmp(pcVar5,__s,__n), iVar3 != 0));
          piVar2 = __errno_location();
          *piVar2 = 0;
          sVar4 = strlen(__s);
          iVar3 = sscanf(pcVar5 + sVar4,(char *)(DAT_00011c9c + 0x11ad4),&local_4c);
          if (iVar3 < 0) {
            iVar3 = -*piVar2;
            fputs((char *)(DAT_00011ca0 + 0x11af8),(FILE *)**(undefined4 **)(iVar7 + DAT_00011c90));
            goto LAB_00011b00;
          }
          if (iVar3 != 1) {
            iVar3 = -5;
            fputs((char *)(DAT_00011ca8 + 0x11b40),(FILE *)**(undefined4 **)(iVar7 + DAT_00011c90));
            goto LAB_00011b00;
          }
          iVar3 = 0;
          for (iVar6 = local_4c; iVar6 != 0;
              iVar6 = (int)((longlong)iVar6 * (longlong)DAT_00011cb4 >> 0x22) - (iVar6 >> 0x1f)) {
            iVar3 = iVar3 + 1;
          }
          sVar4 = strlen(__s);
        } while (pcVar5[iVar3 + sVar4] == ':');
        pcVar5 = malloc(iVar3 + sVar4 + 0x1b);
        if (pcVar5 == (char *)0x0) {
          iVar3 = -0xc;
          goto LAB_00011b00;
        }
        iVar3 = sprintf(pcVar5,(char *)(DAT_00011cb0 + 0x11b9c),DAT_00011cac + 0x11b94,__s,local_4c)
        ;
        if (iVar3 < 0) {
          free(pcVar5);
          goto LAB_00011b00;
        }
        __stream = fopen64(pcVar5,(char *)(DAT_00011cb8 + 0x11bd8));
        if (__stream != (FILE *)0x0) break;
        free(pcVar5);
      }
      free(pcVar5);
      iVar3 = DAT_00011cbc;
      *piVar2 = 0;
      iVar3 = fscanf(__stream,(char *)(iVar3 + 0x11c0c),acStack_48);
      if (iVar3 != 1) {
        iVar3 = *piVar2;
        if (iVar3 == 0) {
          iVar3 = -0x3d;
          goto LAB_00011b00;
        }
LAB_00011c24:
        iVar3 = -iVar3;
LAB_00011b00:
        iVar7 = closedir(__dirp);
        if (iVar7 != -1) {
          return iVar3;
        }
        perror((char *)(DAT_00011ca4 + 0x11b1c));
        return iVar3;
      }
      iVar3 = fclose(__stream);
      if (iVar3 != 0) {
        iVar3 = *piVar2;
        goto LAB_00011c24;
      }
      iVar3 = strcmp(param_1,acStack_48);
    } while (iVar3 != 0);
    iVar7 = closedir(__dirp);
    if (iVar7 == -1) {
      local_4c = *piVar2;
LAB_00011c6c:
      local_4c = -local_4c;
    }
  }
  return local_4c;
}



/* ===== FUN_00012218 @ 00012218 size=96 ===== */

void FUN_00012218(undefined4 param_1,undefined4 param_2)

{
  char acStack_70 [32];
  char acStack_50 [68];
  
  sprintf(acStack_50,(char *)(DAT_00012280 + 0x12248),DAT_0001227c + 0x12244,DAT_00012278 + 0x1223c,
          param_1);
  sprintf(acStack_70,(char *)(DAT_00012284 + 0x12260),param_2);
  FUN_000137d8(acStack_70,acStack_50);
  return;
}



/* ===== FUN_00012288 @ 00012288 size=128 ===== */

undefined4 FUN_00012288(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char acStack_58 [68];
  
  iVar3 = DAT_00012308 + 0x122a8;
  sprintf(acStack_58,(char *)(DAT_0001230c + 0x122b0),iVar3,param_1);
  iVar1 = access(acStack_58,0);
  if (iVar1 == 0) {
    printf((char *)(DAT_00012310 + 0x122e0),param_1,acStack_58);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_000137b8(DAT_00012314 + 0x12300,iVar3,param_1);
  }
  return uVar2;
}



/* ===== FUN_00012464 @ 00012464 size=168 ===== */

int FUN_00012464(undefined4 param_1,undefined4 param_2)

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
  sprintf(local_50,(char *)(DAT_00012510 + 0x12494),DAT_0001250c + 0x1248c,param_1);
  iVar1 = FUN_00013a5c(DAT_00012514 + 0x124cc,local_50,local_58);
  if (-1 < iVar1) {
    iVar1 = strcmp(local_58,(char *)(DAT_00012518 + 0x124e4));
    if (iVar1 == 0) {
      iVar1 = FUN_000137c0(DAT_0001251c + 0x12504,local_50,param_2);
    }
    else {
      iVar1 = -0x16;
    }
  }
  return iVar1;
}



/* ===== FUN_00012520 @ 00012520 size=64 ===== */

void FUN_00012520(undefined4 param_1)

{
  char acStack_48 [64];
  
  sprintf(acStack_48,(char *)(DAT_00012564 + 0x12548),DAT_00012560 + 0x12540,param_1);
  FUN_000137d8(DAT_00012568 + 0x12558,acStack_48);
  return;
}



/* ===== FUN_0001256c @ 0001256c size=156 ===== */

undefined4 FUN_0001256c(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  char acStack_98 [64];
  char acStack_58 [68];
  
  iVar2 = DAT_00012608 + 0x1258c;
  sprintf(acStack_98,(char *)(DAT_0001260c + 0x12594),iVar2,param_1);
  sprintf(acStack_58,(char *)(DAT_00012610 + 0x125b4),iVar2,param_1);
  iVar2 = access(acStack_58,0);
  if (iVar2 == 0) {
    printf((char *)(DAT_00012614 + 0x125e0),param_1,acStack_58);
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_000137b8(DAT_00012618 + 0x12600,acStack_98,0);
  }
  return uVar1;
}



/* ===== FUN_0001261c @ 0001261c size=68 ===== */

void FUN_0001261c(undefined4 param_1)

{
  char acStack_48 [64];
  
  sprintf(acStack_48,(char *)(DAT_00012664 + 0x12644),DAT_00012660 + 0x1263c,param_1);
  FUN_000137b8(DAT_00012668 + 0x12658,acStack_48,0);
  return;
}



/* ===== FUN_0001266c @ 0001266c size=72 ===== */

void FUN_0001266c(undefined4 param_1,undefined4 param_2)

{
  char acStack_50 [68];
  
  sprintf(acStack_50,(char *)(DAT_000126b8 + 0x12694),DAT_000126b4 + 0x12690,param_1);
  FUN_000137b8(DAT_000126bc + 0x126ac,acStack_50,param_2);
  return;
}



/* ===== FUN_00012a40 @ 00012a40 size=40 ===== */

int FUN_00012a40(void)

{
  int iVar1;
  
  iVar1 = FUN_0001261c();
  if (iVar1 < 0) {
    puts((char *)(DAT_00012a68 + 0x12a60));
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_000137b8 @ 000137b8 size=500 ===== */

/* WARNING: Removing unreachable block (ram,0x00013480) */
/* WARNING: Removing unreachable block (ram,0x00013498) */
/* WARNING: Removing unreachable block (ram,0x000134bc) */
/* WARNING: Removing unreachable block (ram,0x00013500) */
/* WARNING: Removing unreachable block (ram,0x00013510) */
/* WARNING: Removing unreachable block (ram,0x0001351c) */
/* WARNING: Removing unreachable block (ram,0x000134d0) */
/* WARNING: Removing unreachable block (ram,0x000134e0) */
/* WARNING: Removing unreachable block (ram,0x000134e4) */
/* WARNING: Removing unreachable block (ram,0x000134e8) */
/* WARNING: Removing unreachable block (ram,0x000134f4) */

int FUN_000137b8(char *param_1,char *param_2,undefined4 param_3)

{
  size_t sVar1;
  size_t sVar2;
  char *__s;
  FILE *__stream;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  sVar1 = strlen(param_2);
  iVar5 = DAT_00013548 + 0x13388;
  sVar2 = strlen(param_1);
  __s = malloc(sVar1 + sVar2 + 2);
  if (__s == (char *)0x0) {
    iVar4 = -0xc;
  }
  else {
    iVar4 = sprintf(__s,(char *)(DAT_0001354c + 0x133bc),param_2,param_1);
    if (-1 < iVar4) {
      __stream = fopen64(__s,(char *)(DAT_00013550 + 0x133d4));
      if (__stream == (FILE *)0x0) {
        piVar3 = __errno_location();
        iVar4 = -*piVar3;
        fprintf((FILE *)**(undefined4 **)(iVar5 + DAT_00013554),(char *)(DAT_00013558 + 0x133f8),__s
               );
      }
      else {
        iVar4 = fprintf(__stream,(char *)(DAT_0001355c + 0x1342c),param_3);
        if (iVar4 < 0) {
          iVar5 = fclose(__stream);
          if (iVar5 != 0) {
            perror((char *)(DAT_00013560 + 0x13458));
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



/* ===== FUN_000137c0 @ 000137c0 size=8 ===== */

int FUN_000137c0(char *param_1,char *param_2,int param_3)

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
  iVar8 = DAT_00013548 + 0x13388;
  sVar2 = strlen(param_1);
  __s = malloc(sVar1 + sVar2 + 2);
  if (__s == (char *)0x0) {
    return -0xc;
  }
  iVar3 = sprintf(__s,(char *)(DAT_0001354c + 0x133bc),param_2,param_1);
  if (iVar3 < 0) goto LAB_00013404;
  pFVar4 = fopen64(__s,(char *)(DAT_00013550 + 0x133d4));
  if (pFVar4 == (FILE *)0x0) {
    piVar5 = __errno_location();
    puVar7 = *(undefined4 **)(iVar8 + DAT_00013554);
    pcVar6 = (char *)(DAT_00013558 + 0x133f8);
    iVar3 = *piVar5;
LAB_000133fc:
    iVar3 = -iVar3;
    fprintf((FILE *)*puVar7,pcVar6,__s);
  }
  else {
    pcVar6 = (char *)(DAT_0001355c + 0x1342c);
    iVar3 = fprintf(pFVar4,pcVar6,param_3);
    if (iVar3 < 0) {
      iVar8 = fclose(pFVar4);
      if (iVar8 == 0) goto LAB_00013404;
      pcVar6 = (char *)(DAT_00013560 + 0x13458);
LAB_00013454:
      perror(pcVar6);
      goto LAB_00013404;
    }
    iVar3 = fclose(pFVar4);
    if (iVar3 == 0) {
      pFVar4 = fopen64(__s,(char *)(DAT_00013564 + 0x13490));
      if (pFVar4 == (FILE *)0x0) {
        piVar5 = __errno_location();
        puVar7 = *(undefined4 **)(iVar8 + DAT_00013554);
        pcVar6 = (char *)(DAT_00013568 + 0x134b4);
        iVar3 = *piVar5;
        goto LAB_000133fc;
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
        if (iVar8 == 0) goto LAB_00013404;
        pcVar6 = (char *)(DAT_0001356c + 0x13500);
        goto LAB_00013454;
      }
      iVar3 = fclose(pFVar4);
      if (iVar3 == 0) {
        iVar3 = 0;
        if (aiStack_2c[0] != param_3) {
          iVar3 = -1;
          fprintf((FILE *)**(undefined4 **)(iVar8 + DAT_00013554),(char *)(DAT_00013570 + 0x13538),
                  param_3,param_2,param_1);
        }
        goto LAB_00013404;
      }
    }
    piVar5 = __errno_location();
    iVar3 = -*piVar5;
  }
LAB_00013404:
  free(__s);
  return iVar3;
}



/* ===== FUN_000137c8 @ 000137c8 size=540 ===== */

int FUN_000137c8(char *param_1,char *param_2,char *param_3)

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
  iVar7 = DAT_00013788 + 0x135a0;
  sVar2 = strlen(param_1);
  __s = malloc(sVar1 + sVar2 + 2);
  if (__s == (char *)0x0) {
    fputs((char *)(DAT_00013790 + 0x135d4),(FILE *)**(undefined4 **)(iVar7 + DAT_0001378c));
    return -0xc;
  }
  iVar3 = sprintf(__s,(char *)(DAT_00013794 + 0x135f8),param_2,param_1);
  if (iVar3 < 0) goto LAB_00013640;
  pFVar4 = fopen64(__s,(char *)(DAT_00013798 + 0x13610));
  if (pFVar4 == (FILE *)0x0) {
    piVar5 = __errno_location();
    iVar3 = -*piVar5;
    fprintf((FILE *)**(undefined4 **)(iVar7 + DAT_0001378c),(char *)(DAT_0001379c + 0x13634),__s);
    goto LAB_00013640;
  }
  pcVar8 = (char *)(DAT_000137a0 + 0x13660);
  iVar3 = fprintf(pFVar4,pcVar8,param_3);
  if (iVar3 < 0) {
    iVar7 = fclose(pFVar4);
    if (iVar7 == 0) goto LAB_00013640;
    pcVar8 = (char *)(DAT_000137a4 + 0x1368c);
LAB_00013688:
    perror(pcVar8);
  }
  else {
    iVar6 = fclose(pFVar4);
    if (iVar6 == 0) {
      pFVar4 = fopen64(__s,(char *)(DAT_000137a8 + 0x136c4));
      if (pFVar4 == (FILE *)0x0) {
        piVar5 = __errno_location();
        iVar3 = -*piVar5;
        fputs((char *)(DAT_000137ac + 0x136f0),(FILE *)**(undefined4 **)(iVar7 + DAT_0001378c));
        goto LAB_00013640;
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
        if (iVar7 == 0) goto LAB_00013640;
        pcVar8 = (char *)(DAT_000137b0 + 0x13738);
        goto LAB_00013688;
      }
      iVar6 = fclose(pFVar4);
      if (iVar6 == 0) {
        iVar6 = strcmp(__s,param_3);
        if (iVar6 != 0) {
          iVar3 = -1;
          fprintf((FILE *)**(undefined4 **)(iVar7 + DAT_0001378c),(char *)(DAT_000137b4 + 0x13778),
                  __s,param_3,param_2,param_1);
        }
        goto LAB_00013640;
      }
    }
    piVar5 = __errno_location();
    iVar3 = -*piVar5;
  }
LAB_00013640:
  free(__s);
  return iVar3;
}



/* ===== FUN_000137d8 @ 000137d8 size=300 ===== */

char * FUN_000137d8(char *param_1,char *param_2)

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
  iVar4 = DAT_00013904 + 0x137f8;
  sVar2 = strlen(param_1);
  __s = malloc(sVar1 + sVar2 + 2);
  if (__s == (char *)0x0) {
    fputs((char *)(DAT_0001390c + 0x13828),(FILE *)**(undefined4 **)(iVar4 + DAT_00013908));
    return (char *)-0xc;
  }
  local_1c = (char *)sprintf(__s,(char *)(DAT_00013910 + 0x1384c),param_2,param_1,pcVar5);
  if ((int)local_1c < 0) goto LAB_000138e0;
  __stream = fopen64(__s,(char *)(DAT_00013914 + 0x13868));
  piVar3 = __errno_location();
  iVar4 = DAT_00013918;
  if (__stream != (FILE *)0x0) {
    *piVar3 = 0;
    iVar4 = fscanf(__stream,(char *)(iVar4 + 0x138a4),&local_1c);
    if (iVar4 != 1) {
      if (*piVar3 == 0) {
        local_1c = (char *)0xffffffc3;
      }
      else {
        local_1c = (char *)-*piVar3;
      }
      iVar4 = fclose(__stream);
      if (iVar4 != 0) {
        perror((char *)(DAT_0001391c + 0x138e0));
      }
      goto LAB_000138e0;
    }
    iVar4 = fclose(__stream);
    if (iVar4 == 0) goto LAB_000138e0;
  }
  local_1c = (char *)-*piVar3;
LAB_000138e0:
  free(__s);
  return local_1c;
}



/* ===== FUN_00013920 @ 00013920 size=288 ===== */

int FUN_00013920(char *param_1,char *param_2,undefined4 param_3)

{
  size_t sVar1;
  size_t sVar2;
  char *__s;
  FILE *__stream;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  sVar1 = strlen(param_2);
  iVar5 = DAT_00013a40 + 0x13944;
  sVar2 = strlen(param_1);
  __s = malloc(sVar1 + sVar2 + 2);
  if (__s == (char *)0x0) {
    fputs((char *)(DAT_00013a48 + 0x13978),(FILE *)**(undefined4 **)(iVar5 + DAT_00013a44));
    return -0xc;
  }
  iVar5 = sprintf(__s,(char *)(DAT_00013a4c + 0x13998),param_2,param_1);
  if (iVar5 < 0) goto LAB_00013a20;
  __stream = fopen64(__s,(char *)(DAT_00013a50 + 0x139b0));
  piVar3 = __errno_location();
  iVar4 = DAT_00013a54;
  if (__stream != (FILE *)0x0) {
    *piVar3 = 0;
    iVar4 = fscanf(__stream,(char *)(iVar4 + 0x139e8),param_3);
    if (iVar4 != 1) {
      if (*piVar3 == 0) {
        iVar5 = -0x3d;
      }
      else {
        iVar5 = -*piVar3;
      }
      iVar4 = fclose(__stream);
      if (iVar4 != 0) {
        perror((char *)(DAT_00013a58 + 0x13a20));
      }
      goto LAB_00013a20;
    }
    iVar4 = fclose(__stream);
    if (iVar4 == 0) goto LAB_00013a20;
  }
  iVar5 = -*piVar3;
LAB_00013a20:
  free(__s);
  return iVar5;
}



/* ===== FUN_00013a5c @ 00013a5c size=288 ===== */

int FUN_00013a5c(char *param_1,char *param_2,undefined4 param_3)

{
  size_t sVar1;
  size_t sVar2;
  char *__s;
  FILE *__stream;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  sVar1 = strlen(param_2);
  iVar5 = DAT_00013b7c + 0x13a80;
  sVar2 = strlen(param_1);
  __s = malloc(sVar1 + sVar2 + 2);
  if (__s == (char *)0x0) {
    fputs((char *)(DAT_00013b84 + 0x13ab4),(FILE *)**(undefined4 **)(iVar5 + DAT_00013b80));
    return -0xc;
  }
  iVar5 = sprintf(__s,(char *)(DAT_00013b88 + 0x13ad4),param_2,param_1);
  if (iVar5 < 0) goto LAB_00013b5c;
  __stream = fopen64(__s,(char *)(DAT_00013b8c + 0x13aec));
  piVar3 = __errno_location();
  iVar4 = DAT_00013b90;
  if (__stream != (FILE *)0x0) {
    *piVar3 = 0;
    iVar4 = fscanf(__stream,(char *)(iVar4 + 0x13b24),param_3);
    if (iVar4 != 1) {
      if (*piVar3 == 0) {
        iVar5 = -0x3d;
      }
      else {
        iVar5 = -*piVar3;
      }
      iVar4 = fclose(__stream);
      if (iVar4 != 0) {
        perror((char *)(DAT_00013b94 + 0x13b5c));
      }
      goto LAB_00013b5c;
    }
    iVar4 = fclose(__stream);
    if (iVar4 == 0) goto LAB_00013b5c;
  }
  iVar5 = -*piVar3;
LAB_00013b5c:
  free(__s);
  return iVar5;
}



/* ===== _DT_FINI @ 00013b98 size=16 ===== */

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


