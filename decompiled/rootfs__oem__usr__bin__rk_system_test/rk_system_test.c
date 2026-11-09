// rk_system_test — Ghidra 12.1.3 decompiler output
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



/* ===== <EXTERNAL>::read @ 00010cf0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_00025074)(__fd);
  return sVar1;
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



/* ===== FUN_00010e40 @ 00010e40 size=272 ===== */

undefined4 FUN_00010e40(void)

{
  int iVar1;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined1 local_200;
  undefined1 auStack_1ff [247];
  undefined1 auStack_108 [256];
  
  uStack_244 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_240 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_23c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_248 = 0;
  local_238 = 0;
  local_230 = 0;
  local_228 = 0;
  local_220 = 0;
  local_218 = 0;
  local_210 = 0;
  uStack_234 = uStack_244;
  uStack_22c = uStack_244;
  uStack_224 = uStack_244;
  uStack_21c = uStack_244;
  uStack_214 = uStack_244;
  uStack_20c = uStack_244;
  iVar1 = FUN_00011d2c(&local_248);
  if (iVar1 == 0) {
    printf((char *)(DAT_00010f60 + 0x10f38),&local_248);
  }
  else {
    puts((char *)(DAT_00010f50 + 0x10e88));
  }
  local_208 = *(undefined4 *)(DAT_00010f54 + 0x10e9c);
  uStack_204 = *(undefined4 *)(DAT_00010f54 + 0x10ea0);
  local_200 = *(undefined1 *)(DAT_00010f54 + 0x10ea4);
  memset(auStack_1ff,0,0xf7);
  memset(auStack_108,0,0x100);
  iVar1 = FUN_00011f60(0,&local_208,0x100);
  if (iVar1 != 0) {
    puts((char *)(DAT_00010f58 + 0x10ef0));
  }
  iVar1 = FUN_00011e34(0,auStack_108,0x100);
  if (iVar1 == 0) {
    printf((char *)(DAT_00010f64 + 0x10f4c),auStack_108);
  }
  else {
    puts((char *)(DAT_00010f5c + 0x10f14));
  }
  FUN_0001209c(0);
  return 0;
}



/* ===== entry @ 00010f68 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_0002508c)
            (DAT_00010f9c,param_2,&stack0x00000004,DAT_00010fa0,DAT_00010f98,param_1);
  return;
}



/* ===== FUN_00010fa4 @ 00010fa4 size=32 ===== */

void FUN_00010fa4(void)

{
  if (DAT_00010fc8 == DAT_00010fc4) {
    return;
  }
  if (DAT_00010fcc == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00010fcc)();
  return;
}



/* ===== _FINI_0 @ 00011008 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00011044;
  if (*DAT_00011044 != '\0') {
    return;
  }
  FUN_00010fa4();
  if (DAT_00011048 != 0) {
    __deregister_frame_info(DAT_0001104c);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00011050 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00011074 != 0) {
    __register_frame_info(DAT_0001107c,DAT_00011078);
  }
  if ((DAT_00011000 - DAT_00010ffc >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00011004 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010ff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011004)();
  return;
}



/* ===== FUN_00011080 @ 00011080 size=196 ===== */

undefined4 FUN_00011080(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ssize_t sVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  void *__buf;
  undefined4 local_c;
  
  if (0 < *(int *)(DAT_00011144 + 0x11094)) {
    __buf = *(void **)(DAT_00011148 + 0x11098 + DAT_0001114c);
    local_c = param_4;
    sVar1 = write(*(int *)(DAT_00011144 + 0x11094),__buf,1);
    if (sVar1 < 0) {
      piVar2 = __errno_location();
      printf((char *)(DAT_00011150 + 0x110d0),*piVar2);
    }
    local_c = 1;
    iVar3 = ioctl(*(int *)(DAT_00011154 + 0x110ec),DAT_00011158,&local_c,DAT_00011154,param_1,__buf,
                  param_3);
    if (iVar3 == 0) {
      puts((char *)(DAT_0001115c + 0x11100));
    }
    else {
      piVar2 = __errno_location();
      pcVar4 = strerror(*piVar2);
      printf((char *)(DAT_00011164 + 0x11140),pcVar4);
    }
    piVar2 = (int *)(DAT_00011160 + 0x1110c);
    close(*piVar2);
    *piVar2 = 0;
  }
  return 0;
}



/* ===== FUN_00011378 @ 00011378 size=200 ===== */

undefined4 FUN_00011378(undefined4 *param_1)

{
  int __fd;
  int iVar1;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  __fd = open64((char *)(DAT_00011440 + 0x11394),0);
  if (__fd == -1) {
    perror((char *)(DAT_00011444 + 0x113ac));
  }
  else {
    iVar1 = ioctl(__fd,DAT_00011448,&local_34);
    if (iVar1 == -1) {
      perror((char *)(DAT_0001144c + 0x113d8));
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
      puts((char *)(DAT_00011450 + 0x113fc));
    }
    close(__fd);
  }
  return 0xffffffff;
}



/* ===== FUN_00011454 @ 00011454 size=432 ===== */

undefined4 FUN_00011454(uint *param_1)

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
    pcVar1 = (char *)(DAT_00011604 + 0x11470);
  }
  else {
    __fd = open64((char *)(DAT_00011608 + 0x11488),2);
    if (__fd == -1) {
      perror((char *)(DAT_0001160c + 0x114a0));
      return 0xffffffff;
    }
    local_60 = *param_1;
    local_5c = param_1[1];
    local_4c = param_1[5] - 0x76c;
    local_58 = param_1[2];
    local_54 = param_1[3];
    local_50 = param_1[4] - 1;
    if (local_4c < 1) {
      pcVar1 = (char *)(DAT_00011610 + 0x114f8);
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
              iVar2 = ioctl(__fd,DAT_00011628,&local_60);
              if (iVar2 == -1) {
                perror((char *)(DAT_0001162c + 0x115a4));
                close(__fd);
                return 0xffffffff;
              }
              iVar2 = settimeofday(&local_68,(timezone *)0x0);
              if (iVar2 != 0) {
                piVar3 = __errno_location();
                if (*piVar3 == 1) {
                  pcVar1 = (char *)(DAT_00011630 + 0x115e0);
                }
                else {
                  if (*piVar3 != 0x16) goto LAB_000115e0;
                  pcVar1 = (char *)((int)&DAT_00011604 + DAT_00011634);
                }
                puts(pcVar1);
              }
LAB_000115e0:
              close(__fd);
              return 0;
            }
            pcVar1 = (char *)(DAT_00011624 + 0x11550);
          }
          else {
            pcVar1 = (char *)(DAT_00011620 + 0x11540);
          }
        }
        else {
          pcVar1 = (char *)(DAT_0001161c + 0x11530);
        }
      }
      else {
        pcVar1 = (char *)(DAT_00011618 + 0x11520);
      }
    }
    else {
      pcVar1 = (char *)(DAT_00011614 + 0x1150c);
    }
  }
  puts(pcVar1);
  return 0xffffffff;
}



/* ===== FUN_00011638 @ 00011638 size=172 ===== */

undefined4 FUN_00011638(undefined4 *param_1)

{
  int __fd;
  int iVar1;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (param_1 == (undefined4 *)0x0) {
    puts((char *)(DAT_000116e4 + 0x11654));
  }
  else {
    __fd = open64((char *)(DAT_000116e8 + 0x11674),0);
    if (__fd == -1) {
      perror((char *)(DAT_000116ec + 0x1168c));
      return 0xffffffff;
    }
    iVar1 = ioctl(__fd,DAT_000116f0,&local_34);
    if (iVar1 != -1) {
      *param_1 = local_34;
      param_1[1] = local_30;
      param_1[2] = local_2c;
      close(__fd);
      return 0;
    }
    perror((char *)(DAT_000116f4 + 0x116b0));
    close(__fd);
  }
  return 0xffffffff;
}



/* ===== FUN_00011d2c @ 00011d2c size=244 ===== */

undefined4 FUN_00011d2c(char *param_1)

{
  FILE *__stream;
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  char *__needle;
  char acStack_118 [256];
  
  memset(acStack_118,0,0x100);
  __stream = fopen64((char *)(DAT_00011e24 + 0x11d60),(char *)(DAT_00011e20 + 0x11d5c));
  if (__stream == (FILE *)0x0) {
    puts((char *)(DAT_00011e30 + 0x11da4));
LAB_00011da4:
    uVar3 = 0xffffffff;
  }
  else {
    __needle = (char *)(DAT_00011e28 + 0x11d74);
    do {
      iVar1 = feof(__stream);
      if (iVar1 != 0) {
        puts((char *)(DAT_00011e2c + 0x11d8c));
        fclose(__stream);
        goto LAB_00011da4;
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



/* ===== FUN_00011e34 @ 00011e34 size=268 ===== */

undefined4 FUN_00011e34(undefined2 param_1,void *param_2,int param_3)

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
  
  iVar3 = DAT_00011f40;
  memset(&local_428,0,0x408);
  iVar3 = iVar3 + 0x11e78;
  __fd = open64((char *)(DAT_00011f44 + 0x11e7c),0);
  if (__fd < 0) {
    fputs((char *)(DAT_00011f4c + 0x11e98),(FILE *)**(undefined4 **)(iVar3 + DAT_00011f48));
  }
  else {
    local_428 = DAT_00011f50;
    local_422 = 0x400;
    local_424 = param_1;
    sVar1 = ioctl(__fd,DAT_00011f54,&local_428);
    close(__fd);
    if (sVar1 == 0) {
      if ((int)(uint)local_422 <= param_3) {
        memcpy(param_2,acStack_420,(uint)local_422);
        return 0;
      }
      sVar1 = strlen(acStack_420);
      puVar2 = *(undefined4 **)(iVar3 + DAT_00011f48);
      __format = (char *)(DAT_00011f5c + 0x11f2c);
    }
    else {
      puVar2 = *(undefined4 **)(iVar3 + DAT_00011f48);
      __format = (char *)(DAT_00011f58 + 0x11efc);
    }
    fprintf((FILE *)*puVar2,__format,sVar1);
  }
  return 0xffffffff;
}



/* ===== FUN_00011f60 @ 00011f60 size=232 ===== */

undefined4 FUN_00011f60(undefined2 param_1,void *param_2,uint param_3)

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
  
  iVar2 = DAT_00012048 + 0x11f7c;
  if ((int)param_3 < 0x401) {
    __fd = open64((char *)(DAT_00012054 + 0x11fc8),2,0);
    if (__fd < 0) {
      __s = (char *)(DAT_00012058 + 0x11fe4);
      __stream = (FILE *)**(undefined4 **)(iVar2 + DAT_0001204c);
    }
    else {
      local_422 = (undefined2)param_3;
      local_428 = DAT_0001205c;
      local_424 = param_1;
      memcpy(auStack_420,param_2,param_3 & 0xffff);
      iVar1 = ioctl(__fd,DAT_00012060,&local_428);
      close(__fd);
      if (iVar1 == 0) {
        return 0;
      }
      __s = (char *)(DAT_00012064 + 0x12044);
      __stream = (FILE *)**(undefined4 **)(iVar2 + DAT_0001204c);
    }
  }
  else {
    __s = (char *)(DAT_00012050 + 0x11f90);
    __stream = (FILE *)**(undefined4 **)(iVar2 + DAT_0001204c);
  }
  fputs(__s,__stream);
  return 0xffffffff;
}



/* ===== FUN_0001209c @ 0001209c size=356 ===== */

int FUN_0001209c(int param_1)

{
  FILE *__stream;
  FILE *__stream_00;
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar1 = (char *)(DAT_00012200 + 0x120b4);
  pcVar3 = (char *)(DAT_00012204 + 0x120bc);
  iVar2 = DAT_00012208 + 0x120c4;
  __stream = fopen64(pcVar3,pcVar1);
  if (__stream == (FILE *)0x0) {
    fprintf((FILE *)**(undefined4 **)(iVar2 + DAT_0001220c),(char *)(DAT_00012210 + 0x120e8),pcVar3)
    ;
  }
  else {
    if (param_1 == 0) {
      iVar2 = fprintf(__stream,(char *)(DAT_0001221c + 0x12128),DAT_00012218 + 0x12124);
      if (-1 < iVar2) goto LAB_000121e8;
      puts((char *)(DAT_00012220 + 0x1213c));
    }
    else {
      if (param_1 != 1) {
        puts((char *)(DAT_00012214 + 74000));
LAB_000121e8:
        iVar2 = fclose(__stream);
        return -(uint)(iVar2 != 0);
      }
      pcVar3 = (char *)(DAT_00012224 + 0x12158);
      __stream_00 = fopen64(pcVar3,pcVar1);
      if (__stream_00 == (FILE *)0x0) {
        fprintf((FILE *)**(undefined4 **)(iVar2 + DAT_0001220c),(char *)(DAT_00012228 + 0x1217c),
                pcVar3);
      }
      else {
        pcVar1 = (char *)(DAT_0001222c + 0x12194);
        iVar2 = fprintf(__stream_00,pcVar1,DAT_00012230 + 0x12198);
        if (iVar2 < 0) {
          pcVar1 = (char *)(DAT_00012234 + 0x121b0);
        }
        else {
          iVar2 = fprintf(__stream,pcVar1,DAT_00012238 + 0x121d0);
          if (-1 < iVar2) {
            fclose(__stream_00);
            goto LAB_000121e8;
          }
          pcVar1 = (char *)(DAT_0001223c + 0x121e0);
        }
        puts(pcVar1);
        fclose(__stream_00);
      }
    }
    fclose(__stream);
  }
  return -1;
}



/* ===== FUN_00012384 @ 00012384 size=24 ===== */

void FUN_00012384(undefined4 param_1)

{
  FUN_00013824((int)&DAT_0001239c + DAT_000123a0,DAT_0001239c + 0x12398,param_1);
  return;
}



/* ===== FUN_000123a4 @ 000123a4 size=96 ===== */

void FUN_000123a4(undefined4 param_1,int param_2)

{
  int iVar1;
  char acStack_50 [68];
  
  if (param_2 == 0) {
    iVar1 = DAT_00012404 + 0x123c4;
  }
  else {
    iVar1 = (int)&DAT_00012404 + DAT_00012414;
  }
  sprintf(acStack_50,(char *)(DAT_0001240c + 0x123dc),DAT_00012408 + 0x123d8,param_1);
  FUN_00013834(DAT_00012410 + 0x123f0,acStack_50,iVar1);
  return;
}



/* ===== FUN_000124d0 @ 000124d0 size=168 ===== */

int FUN_000124d0(undefined4 param_1,undefined4 param_2)

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
  sprintf(local_50,(char *)(DAT_0001257c + 0x12500),DAT_00012578 + 75000,param_1);
  iVar1 = FUN_00013ac8(DAT_00012580 + 0x12538,local_50,local_58);
  if (-1 < iVar1) {
    iVar1 = strcmp(local_58,(char *)(DAT_00012584 + 0x12550));
    if (iVar1 == 0) {
      iVar1 = FUN_0001382c(DAT_00012588 + 0x12570,local_50,param_2);
    }
    else {
      iVar1 = -0x16;
    }
  }
  return iVar1;
}



/* ===== FUN_0001258c @ 0001258c size=64 ===== */

void FUN_0001258c(undefined4 param_1)

{
  char acStack_48 [64];
  
  sprintf(acStack_48,(char *)(DAT_000125d0 + 0x125b4),DAT_000125cc + 0x125ac,param_1);
  FUN_00013844(DAT_000125d4 + 0x125c4,acStack_48);
  return;
}



/* ===== FUN_000125d8 @ 000125d8 size=156 ===== */

undefined4 FUN_000125d8(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  char acStack_98 [64];
  char acStack_58 [68];
  
  iVar2 = DAT_00012674 + 0x125f8;
  sprintf(acStack_98,(char *)(DAT_00012678 + 0x12600),iVar2,param_1);
  sprintf(acStack_58,(char *)(DAT_0001267c + 0x12620),iVar2,param_1);
  iVar2 = access(acStack_58,0);
  if (iVar2 == 0) {
    printf((char *)(DAT_00012680 + 0x1264c),param_1,acStack_58);
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00013824(DAT_00012684 + 0x1266c,acStack_98,0);
  }
  return uVar1;
}



/* ===== FUN_00012688 @ 00012688 size=68 ===== */

void FUN_00012688(undefined4 param_1)

{
  char acStack_48 [64];
  
  sprintf(acStack_48,(char *)(DAT_000126d0 + 0x126b0),DAT_000126cc + 0x126a8,param_1);
  FUN_00013824(DAT_000126d4 + 0x126c4,acStack_48,0);
  return;
}



/* ===== FUN_000126d8 @ 000126d8 size=72 ===== */

void FUN_000126d8(undefined4 param_1,undefined4 param_2)

{
  char acStack_50 [68];
  
  sprintf(acStack_50,(char *)(DAT_00012724 + 0x12700),DAT_00012720 + 0x126fc,param_1);
  FUN_00013824(DAT_00012728 + 0x12718,acStack_50,param_2);
  return;
}



/* ===== FUN_00012aac @ 00012aac size=40 ===== */

int FUN_00012aac(void)

{
  int iVar1;
  
  iVar1 = FUN_00012688();
  if (iVar1 < 0) {
    puts((char *)(DAT_00012ad4 + 0x12acc));
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_00013824 @ 00013824 size=500 ===== */

/* WARNING: Removing unreachable block (ram,0x000134ec) */
/* WARNING: Removing unreachable block (ram,0x00013504) */
/* WARNING: Removing unreachable block (ram,0x00013528) */
/* WARNING: Removing unreachable block (ram,0x0001356c) */
/* WARNING: Removing unreachable block (ram,0x0001357c) */
/* WARNING: Removing unreachable block (ram,0x00013588) */
/* WARNING: Removing unreachable block (ram,0x0001353c) */
/* WARNING: Removing unreachable block (ram,0x0001354c) */
/* WARNING: Removing unreachable block (ram,0x00013550) */
/* WARNING: Removing unreachable block (ram,0x00013554) */
/* WARNING: Removing unreachable block (ram,0x00013560) */

int FUN_00013824(char *param_1,char *param_2,undefined4 param_3)

{
  size_t sVar1;
  size_t sVar2;
  char *__s;
  FILE *__stream;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  sVar1 = strlen(param_2);
  iVar5 = DAT_000135b4 + 0x133f4;
  sVar2 = strlen(param_1);
  __s = malloc(sVar1 + sVar2 + 2);
  if (__s == (char *)0x0) {
    iVar4 = -0xc;
  }
  else {
    iVar4 = sprintf(__s,(char *)(DAT_000135b8 + 0x13428),param_2,param_1);
    if (-1 < iVar4) {
      __stream = fopen64(__s,(char *)(DAT_000135bc + 0x13440));
      if (__stream == (FILE *)0x0) {
        piVar3 = __errno_location();
        iVar4 = -*piVar3;
        fprintf((FILE *)**(undefined4 **)(iVar5 + DAT_000135c0),(char *)(DAT_000135c4 + 0x13464),__s
               );
      }
      else {
        iVar4 = fprintf(__stream,(char *)(DAT_000135c8 + 79000),param_3);
        if (iVar4 < 0) {
          iVar5 = fclose(__stream);
          if (iVar5 != 0) {
            perror((char *)(DAT_000135cc + 0x134c4));
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



/* ===== FUN_0001382c @ 0001382c size=8 ===== */

int FUN_0001382c(char *param_1,char *param_2,int param_3)

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
  iVar8 = DAT_000135b4 + 0x133f4;
  sVar2 = strlen(param_1);
  __s = malloc(sVar1 + sVar2 + 2);
  if (__s == (char *)0x0) {
    return -0xc;
  }
  iVar3 = sprintf(__s,(char *)(DAT_000135b8 + 0x13428),param_2,param_1);
  if (iVar3 < 0) goto LAB_00013470;
  pFVar4 = fopen64(__s,(char *)(DAT_000135bc + 0x13440));
  if (pFVar4 == (FILE *)0x0) {
    piVar5 = __errno_location();
    puVar7 = *(undefined4 **)(iVar8 + DAT_000135c0);
    pcVar6 = (char *)(DAT_000135c4 + 0x13464);
    iVar3 = *piVar5;
LAB_00013468:
    iVar3 = -iVar3;
    fprintf((FILE *)*puVar7,pcVar6,__s);
  }
  else {
    pcVar6 = (char *)(DAT_000135c8 + 79000);
    iVar3 = fprintf(pFVar4,pcVar6,param_3);
    if (iVar3 < 0) {
      iVar8 = fclose(pFVar4);
      if (iVar8 == 0) goto LAB_00013470;
      pcVar6 = (char *)(DAT_000135cc + 0x134c4);
LAB_000134c0:
      perror(pcVar6);
      goto LAB_00013470;
    }
    iVar3 = fclose(pFVar4);
    if (iVar3 == 0) {
      pFVar4 = fopen64(__s,(char *)(DAT_000135d0 + 0x134fc));
      if (pFVar4 == (FILE *)0x0) {
        piVar5 = __errno_location();
        puVar7 = *(undefined4 **)(iVar8 + DAT_000135c0);
        pcVar6 = (char *)(DAT_000135d4 + 0x13520);
        iVar3 = *piVar5;
        goto LAB_00013468;
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
        if (iVar8 == 0) goto LAB_00013470;
        pcVar6 = (char *)(DAT_000135d8 + 0x1356c);
        goto LAB_000134c0;
      }
      iVar3 = fclose(pFVar4);
      if (iVar3 == 0) {
        iVar3 = 0;
        if (aiStack_2c[0] != param_3) {
          iVar3 = -1;
          fprintf((FILE *)**(undefined4 **)(iVar8 + DAT_000135c0),(char *)(DAT_000135dc + 0x135a4),
                  param_3,param_2,param_1);
        }
        goto LAB_00013470;
      }
    }
    piVar5 = __errno_location();
    iVar3 = -*piVar5;
  }
LAB_00013470:
  free(__s);
  return iVar3;
}



/* ===== FUN_00013834 @ 00013834 size=540 ===== */

int FUN_00013834(char *param_1,char *param_2,char *param_3)

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
  iVar7 = DAT_000137f4 + 0x1360c;
  sVar2 = strlen(param_1);
  __s = malloc(sVar1 + sVar2 + 2);
  if (__s == (char *)0x0) {
    fputs((char *)(DAT_000137fc + 0x13640),(FILE *)**(undefined4 **)(iVar7 + DAT_000137f8));
    return -0xc;
  }
  iVar3 = sprintf(__s,(char *)(DAT_00013800 + 0x13664),param_2,param_1);
  if (iVar3 < 0) goto LAB_000136ac;
  pFVar4 = fopen64(__s,(char *)(DAT_00013804 + 0x1367c));
  if (pFVar4 == (FILE *)0x0) {
    piVar5 = __errno_location();
    iVar3 = -*piVar5;
    fprintf((FILE *)**(undefined4 **)(iVar7 + DAT_000137f8),(char *)(DAT_00013808 + 0x136a0),__s);
    goto LAB_000136ac;
  }
  pcVar8 = (char *)(DAT_0001380c + 0x136cc);
  iVar3 = fprintf(pFVar4,pcVar8,param_3);
  if (iVar3 < 0) {
    iVar7 = fclose(pFVar4);
    if (iVar7 == 0) goto LAB_000136ac;
    pcVar8 = (char *)(DAT_00013810 + 0x136f8);
LAB_000136f4:
    perror(pcVar8);
  }
  else {
    iVar6 = fclose(pFVar4);
    if (iVar6 == 0) {
      pFVar4 = fopen64(__s,(char *)(DAT_00013814 + 0x13730));
      if (pFVar4 == (FILE *)0x0) {
        piVar5 = __errno_location();
        iVar3 = -*piVar5;
        fputs((char *)(DAT_00013818 + 0x1375c),(FILE *)**(undefined4 **)(iVar7 + DAT_000137f8));
        goto LAB_000136ac;
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
        if (iVar7 == 0) goto LAB_000136ac;
        pcVar8 = (char *)(DAT_0001381c + 0x137a4);
        goto LAB_000136f4;
      }
      iVar6 = fclose(pFVar4);
      if (iVar6 == 0) {
        iVar6 = strcmp(__s,param_3);
        if (iVar6 != 0) {
          iVar3 = -1;
          fprintf((FILE *)**(undefined4 **)(iVar7 + DAT_000137f8),(char *)(DAT_00013820 + 0x137e4),
                  __s,param_3,param_2,param_1);
        }
        goto LAB_000136ac;
      }
    }
    piVar5 = __errno_location();
    iVar3 = -*piVar5;
  }
LAB_000136ac:
  free(__s);
  return iVar3;
}



/* ===== FUN_00013844 @ 00013844 size=300 ===== */

char * FUN_00013844(char *param_1,char *param_2)

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
  iVar4 = DAT_00013970 + 0x13864;
  sVar2 = strlen(param_1);
  __s = malloc(sVar1 + sVar2 + 2);
  if (__s == (char *)0x0) {
    fputs((char *)(DAT_00013978 + 0x13894),(FILE *)**(undefined4 **)(iVar4 + DAT_00013974));
    return (char *)-0xc;
  }
  local_1c = (char *)sprintf(__s,(char *)(DAT_0001397c + 0x138b8),param_2,param_1,pcVar5);
  if ((int)local_1c < 0) goto LAB_0001394c;
  __stream = fopen64(__s,(char *)(DAT_00013980 + 0x138d4));
  piVar3 = __errno_location();
  iVar4 = DAT_00013984;
  if (__stream != (FILE *)0x0) {
    *piVar3 = 0;
    iVar4 = fscanf(__stream,(char *)(iVar4 + 0x13910),&local_1c);
    if (iVar4 != 1) {
      if (*piVar3 == 0) {
        local_1c = (char *)0xffffffc3;
      }
      else {
        local_1c = (char *)-*piVar3;
      }
      iVar4 = fclose(__stream);
      if (iVar4 != 0) {
        perror((char *)(DAT_00013988 + 0x1394c));
      }
      goto LAB_0001394c;
    }
    iVar4 = fclose(__stream);
    if (iVar4 == 0) goto LAB_0001394c;
  }
  local_1c = (char *)-*piVar3;
LAB_0001394c:
  free(__s);
  return local_1c;
}



/* ===== FUN_00013ac8 @ 00013ac8 size=288 ===== */

int FUN_00013ac8(char *param_1,char *param_2,undefined4 param_3)

{
  size_t sVar1;
  size_t sVar2;
  char *__s;
  FILE *__stream;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  sVar1 = strlen(param_2);
  iVar5 = DAT_00013be8 + 0x13aec;
  sVar2 = strlen(param_1);
  __s = malloc(sVar1 + sVar2 + 2);
  if (__s == (char *)0x0) {
    fputs((char *)(DAT_00013bf0 + 0x13b20),(FILE *)**(undefined4 **)(iVar5 + DAT_00013bec));
    return -0xc;
  }
  iVar5 = sprintf(__s,(char *)(DAT_00013bf4 + 0x13b40),param_2,param_1);
  if (iVar5 < 0) goto LAB_00013bc8;
  __stream = fopen64(__s,(char *)(DAT_00013bf8 + 0x13b58));
  piVar3 = __errno_location();
  iVar4 = DAT_00013bfc;
  if (__stream != (FILE *)0x0) {
    *piVar3 = 0;
    iVar4 = fscanf(__stream,(char *)(iVar4 + 0x13b90),param_3);
    if (iVar4 != 1) {
      if (*piVar3 == 0) {
        iVar5 = -0x3d;
      }
      else {
        iVar5 = -*piVar3;
      }
      iVar4 = fclose(__stream);
      if (iVar4 != 0) {
        perror((char *)(DAT_00013c00 + 0x13bc8));
      }
      goto LAB_00013bc8;
    }
    iVar4 = fclose(__stream);
    if (iVar4 == 0) goto LAB_00013bc8;
  }
  iVar5 = -*piVar3;
LAB_00013bc8:
  free(__s);
  return iVar5;
}



/* ===== _DT_FINI @ 00013c04 size=16 ===== */

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


