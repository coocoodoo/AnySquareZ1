// rk_pwm_test — Ghidra 12.1.3 decompiler output
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



/* ===== <EXTERNAL>::feof @ 00010cb4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int feof(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_feof_00025048)(__stream);
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



/* ===== <EXTERNAL>::strncmp @ 00010d50 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_0002507c)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::strncpy @ 00010d5c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_00025080)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::readdir64 @ 00010d68 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent64 * readdir64(DIR *__dirp)

{
  dirent64 *pdVar1;
  
  pdVar1 = (dirent64 *)(*(code *)PTR_readdir64_00025084)(__dirp);
  return pdVar1;
}



/* ===== <EXTERNAL>::memcmp @ 00010d74 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_00025088)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::sscanf @ 00010d80 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sscanf_0002508c)(__s);
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



/* ===== FUN_00010e94 @ 00010e94 size=312 ===== */

void FUN_00010e94(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int unaff_r6;
  undefined4 *puVar11;
  char acStack_68 [68];
  
  FUN_00012508(0x8e,1);
  iVar1 = DAT_00010fcc;
  FUN_00012508(0x26,0);
  FUN_00012544(0x26,0);
  FUN_00012a2c(2,0xf424,0x7a12,0);
  puts((char *)(DAT_00010fd0 + 0x10ee8));
  do {
    puVar11 = *(undefined4 **)(iVar1 + 0x10ec8 + DAT_00010fd4);
    do {
      fgets(acStack_68,0x40,(FILE *)*puVar11);
      usleep(20000);
      iVar2 = FUN_00012600(0x8e);
    } while (iVar2 == unaff_r6);
    FUN_00012544(0x26,iVar2);
    FUN_0001298c(2,iVar2 != 0);
    uVar3 = FUN_0001248c(0x8e);
    uVar4 = FUN_00012600(0x8e);
    uVar5 = FUN_0001248c(0x26);
    uVar6 = FUN_00012600(0x26);
    uVar7 = FUN_00012840(2);
    uVar8 = FUN_000127a0(2);
    uVar9 = FUN_00012910(2);
    uVar10 = FUN_000129e0(2);
    printf((char *)(DAT_00010fd8 + 0x10fc8),uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10);
    unaff_r6 = iVar2;
  } while( true );
}



/* ===== entry @ 00010fdc size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00025090)
            (DAT_00011010,param_2,&stack0x00000004,DAT_00011014,DAT_0001100c,param_1);
  return;
}



/* ===== FUN_00011018 @ 00011018 size=32 ===== */

void FUN_00011018(void)

{
  if (DAT_0001103c == DAT_00011038) {
    return;
  }
  if (DAT_00011040 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011040)();
  return;
}



/* ===== _FINI_0 @ 0001107c size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_000110b8;
  if (*DAT_000110b8 != '\0') {
    return;
  }
  FUN_00011018();
  if (DAT_000110bc != 0) {
    __deregister_frame_info(DAT_000110c0);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 000110c4 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_000110e8 != 0) {
    __register_frame_info(DAT_000110f0,DAT_000110ec);
  }
  if ((DAT_00011074 - DAT_00011070 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00011078 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001106c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011078)();
  return;
}



/* ===== FUN_000110f4 @ 000110f4 size=196 ===== */

undefined4 FUN_000110f4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ssize_t sVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  void *__buf;
  undefined4 local_c;
  
  if (0 < *(int *)(DAT_000111b8 + 0x11108)) {
    __buf = *(void **)(DAT_000111bc + 0x1110c + DAT_000111c0);
    local_c = param_4;
    sVar1 = write(*(int *)(DAT_000111b8 + 0x11108),__buf,1);
    if (sVar1 < 0) {
      piVar2 = __errno_location();
      printf((char *)(DAT_000111c4 + 0x11144),*piVar2);
    }
    local_c = 1;
    iVar3 = ioctl(*(int *)(DAT_000111c8 + 0x11160),DAT_000111cc,&local_c,DAT_000111c8,param_1,__buf,
                  param_3);
    if (iVar3 == 0) {
      puts((char *)(DAT_000111d0 + 0x11174));
    }
    else {
      piVar2 = __errno_location();
      pcVar4 = strerror(*piVar2);
      printf((char *)(DAT_000111d8 + 0x111b4),pcVar4);
    }
    piVar2 = (int *)(DAT_000111d4 + 0x11180);
    close(*piVar2);
    *piVar2 = 0;
  }
  return 0;
}



/* ===== FUN_000113ec @ 000113ec size=200 ===== */

undefined4 FUN_000113ec(undefined4 *param_1)

{
  int __fd;
  int iVar1;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  __fd = open64((char *)(DAT_000114b4 + 0x11408),0);
  if (__fd == -1) {
    perror((char *)(DAT_000114b8 + 0x11420));
  }
  else {
    iVar1 = ioctl(__fd,DAT_000114bc,&local_34);
    if (iVar1 == -1) {
      perror((char *)(DAT_000114c0 + 0x1144c));
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
      puts((char *)(DAT_000114c4 + 0x11470));
    }
    close(__fd);
  }
  return 0xffffffff;
}



/* ===== FUN_000114c8 @ 000114c8 size=432 ===== */

undefined4 FUN_000114c8(uint *param_1)

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
    pcVar1 = (char *)(DAT_00011678 + 0x114e4);
  }
  else {
    __fd = open64((char *)(DAT_0001167c + 0x114fc),2);
    if (__fd == -1) {
      perror((char *)(DAT_00011680 + 0x11514));
      return 0xffffffff;
    }
    local_60 = *param_1;
    local_5c = param_1[1];
    local_4c = param_1[5] - 0x76c;
    local_58 = param_1[2];
    local_54 = param_1[3];
    local_50 = param_1[4] - 1;
    if (local_4c < 1) {
      pcVar1 = (char *)(DAT_00011684 + 0x1156c);
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
              iVar2 = ioctl(__fd,DAT_0001169c,&local_60);
              if (iVar2 == -1) {
                perror((char *)(DAT_000116a0 + 0x11618));
                close(__fd);
                return 0xffffffff;
              }
              iVar2 = settimeofday(&local_68,(timezone *)0x0);
              if (iVar2 != 0) {
                piVar3 = __errno_location();
                if (*piVar3 == 1) {
                  pcVar1 = (char *)(DAT_000116a4 + 0x11654);
                }
                else {
                  if (*piVar3 != 0x16) goto LAB_00011654;
                  pcVar1 = (char *)((int)&DAT_00011678 + DAT_000116a8);
                }
                puts(pcVar1);
              }
LAB_00011654:
              close(__fd);
              return 0;
            }
            pcVar1 = (char *)(DAT_00011698 + 0x115c4);
          }
          else {
            pcVar1 = (char *)(DAT_00011694 + 0x115b4);
          }
        }
        else {
          pcVar1 = (char *)(DAT_00011690 + 0x115a4);
        }
      }
      else {
        pcVar1 = (char *)(DAT_0001168c + 0x11594);
      }
    }
    else {
      pcVar1 = (char *)(DAT_00011688 + 0x11580);
    }
  }
  puts(pcVar1);
  return 0xffffffff;
}



/* ===== FUN_000116ac @ 000116ac size=172 ===== */

undefined4 FUN_000116ac(undefined4 *param_1)

{
  int __fd;
  int iVar1;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (param_1 == (undefined4 *)0x0) {
    puts((char *)(DAT_00011758 + 0x116c8));
  }
  else {
    __fd = open64((char *)(DAT_0001175c + 0x116e8),0);
    if (__fd == -1) {
      perror((char *)(DAT_00011760 + 0x11700));
      return 0xffffffff;
    }
    iVar1 = ioctl(__fd,DAT_00011764,&local_34);
    if (iVar1 != -1) {
      *param_1 = local_34;
      param_1[1] = local_30;
      param_1[2] = local_2c;
      close(__fd);
      return 0;
    }
    perror((char *)(DAT_00011768 + 0x11724));
    close(__fd);
  }
  return 0xffffffff;
}



/* ===== FUN_00011fd4 @ 00011fd4 size=232 ===== */

undefined4 FUN_00011fd4(undefined2 param_1,void *param_2,uint param_3)

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
  
  iVar2 = DAT_000120bc + 0x11ff0;
  if ((int)param_3 < 0x401) {
    __fd = open64((char *)(DAT_000120c8 + 0x1203c),2,0);
    if (__fd < 0) {
      __s = (char *)(DAT_000120cc + 0x12058);
      __stream = (FILE *)**(undefined4 **)(iVar2 + DAT_000120c0);
    }
    else {
      local_422 = (undefined2)param_3;
      local_428 = DAT_000120d0;
      local_424 = param_1;
      memcpy(auStack_420,param_2,param_3 & 0xffff);
      iVar1 = ioctl(__fd,DAT_000120d4,&local_428);
      close(__fd);
      if (iVar1 == 0) {
        return 0;
      }
      __s = (char *)(DAT_000120d8 + 0x120b8);
      __stream = (FILE *)**(undefined4 **)(iVar2 + DAT_000120c0);
    }
  }
  else {
    __s = (char *)(DAT_000120c4 + 0x12004);
    __stream = (FILE *)**(undefined4 **)(iVar2 + DAT_000120c0);
  }
  fputs(__s,__stream);
  return 0xffffffff;
}



/* ===== FUN_00012368 @ 00012368 size=128 ===== */

undefined4 FUN_00012368(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char acStack_58 [68];
  
  iVar3 = DAT_000123e8 + 0x12388;
  sprintf(acStack_58,(char *)(DAT_000123ec + 0x12390),iVar3,param_1);
  iVar1 = access(acStack_58,0);
  if (iVar1 == 0) {
    printf((char *)(DAT_000123f0 + 0x123c0),param_1,acStack_58);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00013898(DAT_000123f4 + 0x123e0,iVar3,param_1);
  }
  return uVar2;
}



/* ===== FUN_000123f8 @ 000123f8 size=24 ===== */

void FUN_000123f8(undefined4 param_1)

{
  FUN_00013898((int)&DAT_00012410 + DAT_00012414,DAT_00012410 + 0x1240c,param_1);
  return;
}



/* ===== FUN_00012418 @ 00012418 size=96 ===== */

void FUN_00012418(undefined4 param_1,int param_2)

{
  int iVar1;
  char acStack_50 [68];
  
  if (param_2 == 0) {
    iVar1 = DAT_00012478 + 0x12438;
  }
  else {
    iVar1 = (int)&DAT_00012478 + DAT_00012488;
  }
  sprintf(acStack_50,(char *)(DAT_00012480 + 0x12450),DAT_0001247c + 0x1244c,param_1);
  FUN_000138a8(DAT_00012484 + 0x12464,acStack_50,iVar1);
  return;
}



/* ===== FUN_0001248c @ 0001248c size=108 ===== */

int FUN_0001248c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_60 [16];
  char acStack_50 [68];
  
  sprintf(acStack_50,(char *)(DAT_000124fc + 0x124b4),DAT_000124f8 + 0x124ac,param_1);
  iVar1 = FUN_00013b3c(DAT_00012500 + 0x124cc,acStack_50,auStack_60);
  if ((-1 < iVar1) &&
     (iVar2 = memcmp(auStack_60,(void *)(DAT_00012504 + 0x124e8),4), iVar1 = 0, iVar2 != 0)) {
    iVar1 = 1;
  }
  return iVar1;
}



/* ===== FUN_00012508 @ 00012508 size=60 ===== */

int FUN_00012508(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00012368();
  if ((-1 < iVar1) && (iVar1 = FUN_00012418(param_1,param_2), iVar1 < 0)) {
    FUN_000123f8(param_1);
  }
  return iVar1;
}



/* ===== FUN_00012544 @ 00012544 size=168 ===== */

int FUN_00012544(undefined4 param_1,undefined4 param_2)

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
  sprintf(local_50,(char *)(DAT_000125f0 + 0x12574),DAT_000125ec + 0x1256c,param_1);
  iVar1 = FUN_00013b3c(DAT_000125f4 + 0x125ac,local_50,local_58);
  if (-1 < iVar1) {
    iVar1 = strcmp(local_58,(char *)(DAT_000125f8 + 0x125c4));
    if (iVar1 == 0) {
      iVar1 = FUN_000138a0(DAT_000125fc + 0x125e4,local_50,param_2);
    }
    else {
      iVar1 = -0x16;
    }
  }
  return iVar1;
}



/* ===== FUN_00012600 @ 00012600 size=64 ===== */

void FUN_00012600(undefined4 param_1)

{
  char acStack_48 [64];
  
  sprintf(acStack_48,(char *)(DAT_00012644 + 0x12628),DAT_00012640 + 0x12620,param_1);
  FUN_000138b8(DAT_00012648 + 0x12638,acStack_48);
  return;
}



/* ===== FUN_0001264c @ 0001264c size=156 ===== */

undefined4 FUN_0001264c(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  char acStack_98 [64];
  char acStack_58 [68];
  
  iVar2 = DAT_000126e8 + 0x1266c;
  sprintf(acStack_98,(char *)(DAT_000126ec + 0x12674),iVar2,param_1);
  sprintf(acStack_58,(char *)(DAT_000126f0 + 0x12694),iVar2,param_1);
  iVar2 = access(acStack_58,0);
  if (iVar2 == 0) {
    printf((char *)(DAT_000126f4 + 0x126c0),param_1,acStack_58);
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00013898(DAT_000126f8 + 0x126e0,acStack_98,0);
  }
  return uVar1;
}



/* ===== FUN_000126fc @ 000126fc size=68 ===== */

void FUN_000126fc(undefined4 param_1)

{
  char acStack_48 [64];
  
  sprintf(acStack_48,(char *)(DAT_00012744 + 0x12724),DAT_00012740 + 0x1271c,param_1);
  FUN_00013898(DAT_00012748 + 0x12738,acStack_48,0);
  return;
}



/* ===== FUN_0001274c @ 0001274c size=72 ===== */

void FUN_0001274c(undefined4 param_1,undefined4 param_2)

{
  char acStack_50 [68];
  
  sprintf(acStack_50,(char *)(DAT_00012798 + 0x12774),DAT_00012794 + 0x12770,param_1);
  FUN_00013898(DAT_0001279c + 0x1278c,acStack_50,param_2);
  return;
}



/* ===== FUN_000127a0 @ 000127a0 size=64 ===== */

void FUN_000127a0(undefined4 param_1)

{
  char acStack_48 [64];
  
  sprintf(acStack_48,(char *)(DAT_000127e4 + 0x127c8),DAT_000127e0 + 0x127c0,param_1);
  FUN_000138b8(DAT_000127e8 + 0x127d8,acStack_48);
  return;
}



/* ===== FUN_000127ec @ 000127ec size=72 ===== */

void FUN_000127ec(undefined4 param_1,undefined4 param_2)

{
  char acStack_50 [68];
  
  sprintf(acStack_50,(char *)(DAT_00012838 + 0x12814),DAT_00012834 + 0x12810,param_1);
  FUN_00013898(DAT_0001283c + 0x1282c,acStack_50,param_2);
  return;
}



/* ===== FUN_00012840 @ 00012840 size=64 ===== */

void FUN_00012840(undefined4 param_1)

{
  char acStack_48 [64];
  
  sprintf(acStack_48,(char *)(DAT_00012884 + 0x12868),DAT_00012880 + 0x12860,param_1);
  FUN_000138b8(DAT_00012888 + 0x12878,acStack_48);
  return;
}



/* ===== FUN_00012910 @ 00012910 size=108 ===== */

uint FUN_00012910(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_60 [16];
  char acStack_50 [68];
  
  sprintf(acStack_50,(char *)(DAT_00012980 + 0x12938),DAT_0001297c + 0x12930,param_1);
  uVar1 = FUN_00013b3c(DAT_00012984 + 0x12950,acStack_50,auStack_60);
  if (-1 < (int)uVar1) {
    iVar2 = memcmp(auStack_60,(void *)(DAT_00012988 + 0x1296c),9);
    uVar1 = (uint)(iVar2 == 0);
  }
  return uVar1;
}



/* ===== FUN_0001298c @ 0001298c size=72 ===== */

void FUN_0001298c(undefined4 param_1,undefined4 param_2)

{
  char acStack_50 [68];
  
  sprintf(acStack_50,(char *)(DAT_000129d8 + 0x129b4),DAT_000129d4 + 0x129b0,param_1);
  FUN_000138a0(DAT_000129dc + 0x129cc,acStack_50,param_2);
  return;
}



/* ===== FUN_000129e0 @ 000129e0 size=64 ===== */

void FUN_000129e0(undefined4 param_1)

{
  char acStack_48 [64];
  
  sprintf(acStack_48,(char *)(DAT_00012a24 + 0x12a08),DAT_00012a20 + 0x12a00,param_1);
  FUN_000138b8(DAT_00012a28 + 0x12a18,acStack_48);
  return;
}



/* ===== FUN_00012a2c @ 00012a2c size=216 ===== */

int FUN_00012a2c(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  char acStack_60 [68];
  
  if (param_4 < 2) {
    sprintf(acStack_60,(char *)(DAT_00012b08 + 0x12a68),DAT_00012b04 + 0x12a60,param_1);
    iVar1 = FUN_0001264c(param_1);
    if (-1 < iVar1) {
      iVar1 = FUN_00013898(DAT_00012b0c + 0x12a94,acStack_60,param_2);
      if ((-1 < iVar1) &&
         (iVar1 = FUN_00013898(DAT_00012b10 + 0x12ab0,acStack_60,param_3), -1 < iVar1)) {
        if (param_4 == 0) {
          iVar1 = (int)&DAT_00012b04 + DAT_00012b1c;
        }
        else {
          iVar1 = DAT_00012b14 + 0x12acc;
        }
        iVar1 = FUN_000138a8(DAT_00012b18 + 0x12ad8,acStack_60,iVar1);
        if (-1 < iVar1) {
          return 0;
        }
      }
      FUN_000126fc(param_1);
    }
  }
  else {
    iVar1 = -0x16;
  }
  return iVar1;
}



/* ===== FUN_00012b20 @ 00012b20 size=40 ===== */

int FUN_00012b20(void)

{
  int iVar1;
  
  iVar1 = FUN_000126fc();
  if (iVar1 < 0) {
    puts((char *)(DAT_00012b48 + 0x12b40));
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_00013898 @ 00013898 size=500 ===== */

/* WARNING: Removing unreachable block (ram,0x00013560) */
/* WARNING: Removing unreachable block (ram,0x00013578) */
/* WARNING: Removing unreachable block (ram,0x0001359c) */
/* WARNING: Removing unreachable block (ram,0x000135e0) */
/* WARNING: Removing unreachable block (ram,0x000135f0) */
/* WARNING: Removing unreachable block (ram,0x000135fc) */
/* WARNING: Removing unreachable block (ram,0x000135b0) */
/* WARNING: Removing unreachable block (ram,0x000135c0) */
/* WARNING: Removing unreachable block (ram,0x000135c4) */
/* WARNING: Removing unreachable block (ram,0x000135c8) */
/* WARNING: Removing unreachable block (ram,0x000135d4) */

int FUN_00013898(char *param_1,char *param_2,undefined4 param_3)

{
  size_t sVar1;
  size_t sVar2;
  char *__s;
  FILE *__stream;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  sVar1 = strlen(param_2);
  iVar5 = DAT_00013628 + 0x13468;
  sVar2 = strlen(param_1);
  __s = malloc(sVar1 + sVar2 + 2);
  if (__s == (char *)0x0) {
    iVar4 = -0xc;
  }
  else {
    iVar4 = sprintf(__s,(char *)(DAT_0001362c + 0x1349c),param_2,param_1);
    if (-1 < iVar4) {
      __stream = fopen64(__s,(char *)(DAT_00013630 + 0x134b4));
      if (__stream == (FILE *)0x0) {
        piVar3 = __errno_location();
        iVar4 = -*piVar3;
        fprintf((FILE *)**(undefined4 **)(iVar5 + DAT_00013634),(char *)(DAT_00013638 + 0x134d8),__s
               );
      }
      else {
        iVar4 = fprintf(__stream,(char *)(DAT_0001363c + 0x1350c),param_3);
        if (iVar4 < 0) {
          iVar5 = fclose(__stream);
          if (iVar5 != 0) {
            perror((char *)(DAT_00013640 + 0x13538));
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



/* ===== FUN_000138a0 @ 000138a0 size=8 ===== */

int FUN_000138a0(char *param_1,char *param_2,int param_3)

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
  iVar8 = DAT_00013628 + 0x13468;
  sVar2 = strlen(param_1);
  __s = malloc(sVar1 + sVar2 + 2);
  if (__s == (char *)0x0) {
    return -0xc;
  }
  iVar3 = sprintf(__s,(char *)(DAT_0001362c + 0x1349c),param_2,param_1);
  if (iVar3 < 0) goto LAB_000134e4;
  pFVar4 = fopen64(__s,(char *)(DAT_00013630 + 0x134b4));
  if (pFVar4 == (FILE *)0x0) {
    piVar5 = __errno_location();
    puVar7 = *(undefined4 **)(iVar8 + DAT_00013634);
    pcVar6 = (char *)(DAT_00013638 + 0x134d8);
    iVar3 = *piVar5;
LAB_000134dc:
    iVar3 = -iVar3;
    fprintf((FILE *)*puVar7,pcVar6,__s);
  }
  else {
    pcVar6 = (char *)(DAT_0001363c + 0x1350c);
    iVar3 = fprintf(pFVar4,pcVar6,param_3);
    if (iVar3 < 0) {
      iVar8 = fclose(pFVar4);
      if (iVar8 == 0) goto LAB_000134e4;
      pcVar6 = (char *)(DAT_00013640 + 0x13538);
LAB_00013534:
      perror(pcVar6);
      goto LAB_000134e4;
    }
    iVar3 = fclose(pFVar4);
    if (iVar3 == 0) {
      pFVar4 = fopen64(__s,(char *)(DAT_00013644 + 0x13570));
      if (pFVar4 == (FILE *)0x0) {
        piVar5 = __errno_location();
        puVar7 = *(undefined4 **)(iVar8 + DAT_00013634);
        pcVar6 = (char *)(DAT_00013648 + 0x13594);
        iVar3 = *piVar5;
        goto LAB_000134dc;
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
        if (iVar8 == 0) goto LAB_000134e4;
        pcVar6 = (char *)(DAT_0001364c + 0x135e0);
        goto LAB_00013534;
      }
      iVar3 = fclose(pFVar4);
      if (iVar3 == 0) {
        iVar3 = 0;
        if (aiStack_2c[0] != param_3) {
          iVar3 = -1;
          fprintf((FILE *)**(undefined4 **)(iVar8 + DAT_00013634),(char *)(DAT_00013650 + 0x13618),
                  param_3,param_2,param_1);
        }
        goto LAB_000134e4;
      }
    }
    piVar5 = __errno_location();
    iVar3 = -*piVar5;
  }
LAB_000134e4:
  free(__s);
  return iVar3;
}



/* ===== FUN_000138a8 @ 000138a8 size=540 ===== */

int FUN_000138a8(char *param_1,char *param_2,char *param_3)

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
  iVar7 = DAT_00013868 + 0x13680;
  sVar2 = strlen(param_1);
  __s = malloc(sVar1 + sVar2 + 2);
  if (__s == (char *)0x0) {
    fputs((char *)(DAT_00013870 + 0x136b4),(FILE *)**(undefined4 **)(iVar7 + DAT_0001386c));
    return -0xc;
  }
  iVar3 = sprintf(__s,(char *)(DAT_00013874 + 0x136d8),param_2,param_1);
  if (iVar3 < 0) goto LAB_00013720;
  pFVar4 = fopen64(__s,(char *)(DAT_00013878 + 0x136f0));
  if (pFVar4 == (FILE *)0x0) {
    piVar5 = __errno_location();
    iVar3 = -*piVar5;
    fprintf((FILE *)**(undefined4 **)(iVar7 + DAT_0001386c),(char *)(DAT_0001387c + 0x13714),__s);
    goto LAB_00013720;
  }
  pcVar8 = (char *)(DAT_00013880 + 0x13740);
  iVar3 = fprintf(pFVar4,pcVar8,param_3);
  if (iVar3 < 0) {
    iVar7 = fclose(pFVar4);
    if (iVar7 == 0) goto LAB_00013720;
    pcVar8 = (char *)(DAT_00013884 + 0x1376c);
LAB_00013768:
    perror(pcVar8);
  }
  else {
    iVar6 = fclose(pFVar4);
    if (iVar6 == 0) {
      pFVar4 = fopen64(__s,(char *)(DAT_00013888 + 0x137a4));
      if (pFVar4 == (FILE *)0x0) {
        piVar5 = __errno_location();
        iVar3 = -*piVar5;
        fputs((char *)(DAT_0001388c + 0x137d0),(FILE *)**(undefined4 **)(iVar7 + DAT_0001386c));
        goto LAB_00013720;
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
        if (iVar7 == 0) goto LAB_00013720;
        pcVar8 = (char *)(DAT_00013890 + 0x13818);
        goto LAB_00013768;
      }
      iVar6 = fclose(pFVar4);
      if (iVar6 == 0) {
        iVar6 = strcmp(__s,param_3);
        if (iVar6 != 0) {
          iVar3 = -1;
          fprintf((FILE *)**(undefined4 **)(iVar7 + DAT_0001386c),(char *)(DAT_00013894 + 0x13858),
                  __s,param_3,param_2,param_1);
        }
        goto LAB_00013720;
      }
    }
    piVar5 = __errno_location();
    iVar3 = -*piVar5;
  }
LAB_00013720:
  free(__s);
  return iVar3;
}



/* ===== FUN_000138b8 @ 000138b8 size=300 ===== */

char * FUN_000138b8(char *param_1,char *param_2)

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
  iVar4 = DAT_000139e4 + 0x138d8;
  sVar2 = strlen(param_1);
  __s = malloc(sVar1 + sVar2 + 2);
  if (__s == (char *)0x0) {
    fputs((char *)(DAT_000139ec + 0x13908),(FILE *)**(undefined4 **)(iVar4 + DAT_000139e8));
    return (char *)-0xc;
  }
  local_1c = (char *)sprintf(__s,(char *)(DAT_000139f0 + 0x1392c),param_2,param_1,pcVar5);
  if ((int)local_1c < 0) goto LAB_000139c0;
  __stream = fopen64(__s,(char *)(DAT_000139f4 + 0x13948));
  piVar3 = __errno_location();
  iVar4 = DAT_000139f8;
  if (__stream != (FILE *)0x0) {
    *piVar3 = 0;
    iVar4 = fscanf(__stream,(char *)(iVar4 + 0x13984),&local_1c);
    if (iVar4 != 1) {
      if (*piVar3 == 0) {
        local_1c = (char *)0xffffffc3;
      }
      else {
        local_1c = (char *)-*piVar3;
      }
      iVar4 = fclose(__stream);
      if (iVar4 != 0) {
        perror((char *)(DAT_000139fc + 0x139c0));
      }
      goto LAB_000139c0;
    }
    iVar4 = fclose(__stream);
    if (iVar4 == 0) goto LAB_000139c0;
  }
  local_1c = (char *)-*piVar3;
LAB_000139c0:
  free(__s);
  return local_1c;
}



/* ===== FUN_00013a00 @ 00013a00 size=288 ===== */

int FUN_00013a00(char *param_1,char *param_2,undefined4 param_3)

{
  size_t sVar1;
  size_t sVar2;
  char *__s;
  FILE *__stream;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  sVar1 = strlen(param_2);
  iVar5 = DAT_00013b20 + 0x13a24;
  sVar2 = strlen(param_1);
  __s = malloc(sVar1 + sVar2 + 2);
  if (__s == (char *)0x0) {
    fputs((char *)(DAT_00013b28 + 0x13a58),(FILE *)**(undefined4 **)(iVar5 + DAT_00013b24));
    return -0xc;
  }
  iVar5 = sprintf(__s,(char *)(DAT_00013b2c + 0x13a78),param_2,param_1);
  if (iVar5 < 0) goto LAB_00013b00;
  __stream = fopen64(__s,(char *)(DAT_00013b30 + 0x13a90));
  piVar3 = __errno_location();
  iVar4 = DAT_00013b34;
  if (__stream != (FILE *)0x0) {
    *piVar3 = 0;
    iVar4 = fscanf(__stream,(char *)(iVar4 + 0x13ac8),param_3);
    if (iVar4 != 1) {
      if (*piVar3 == 0) {
        iVar5 = -0x3d;
      }
      else {
        iVar5 = -*piVar3;
      }
      iVar4 = fclose(__stream);
      if (iVar4 != 0) {
        perror((char *)(DAT_00013b38 + 0x13b00));
      }
      goto LAB_00013b00;
    }
    iVar4 = fclose(__stream);
    if (iVar4 == 0) goto LAB_00013b00;
  }
  iVar5 = -*piVar3;
LAB_00013b00:
  free(__s);
  return iVar5;
}



/* ===== FUN_00013b3c @ 00013b3c size=288 ===== */

int FUN_00013b3c(char *param_1,char *param_2,undefined4 param_3)

{
  size_t sVar1;
  size_t sVar2;
  char *__s;
  FILE *__stream;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  sVar1 = strlen(param_2);
  iVar5 = DAT_00013c5c + 0x13b60;
  sVar2 = strlen(param_1);
  __s = malloc(sVar1 + sVar2 + 2);
  if (__s == (char *)0x0) {
    fputs((char *)(DAT_00013c64 + 0x13b94),(FILE *)**(undefined4 **)(iVar5 + DAT_00013c60));
    return -0xc;
  }
  iVar5 = sprintf(__s,(char *)(DAT_00013c68 + 0x13bb4),param_2,param_1);
  if (iVar5 < 0) goto LAB_00013c3c;
  __stream = fopen64(__s,(char *)(DAT_00013c6c + 0x13bcc));
  piVar3 = __errno_location();
  iVar4 = DAT_00013c70;
  if (__stream != (FILE *)0x0) {
    *piVar3 = 0;
    iVar4 = fscanf(__stream,(char *)(iVar4 + 0x13c04),param_3);
    if (iVar4 != 1) {
      if (*piVar3 == 0) {
        iVar5 = -0x3d;
      }
      else {
        iVar5 = -*piVar3;
      }
      iVar4 = fclose(__stream);
      if (iVar4 != 0) {
        perror((char *)(DAT_00013c74 + 0x13c3c));
      }
      goto LAB_00013c3c;
    }
    iVar4 = fclose(__stream);
    if (iVar4 == 0) goto LAB_00013c3c;
  }
  iVar5 = -*piVar3;
LAB_00013c3c:
  free(__s);
  return iVar5;
}



/* ===== _DT_FINI @ 00013c78 size=16 ===== */

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


