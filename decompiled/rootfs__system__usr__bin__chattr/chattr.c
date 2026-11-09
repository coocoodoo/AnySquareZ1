// chattr — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _DT_INIT @ 00010aac size=16 ===== */

void _DT_INIT(void)

{
  return;
}



/* ===== <EXTERNAL>::putchar @ 00010ad0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putchar_0002400c)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::secure_getenv @ 00010adc size=12 ===== */

void secure_getenv(void)

{
  (*(code *)PTR_secure_getenv_00024010)();
  return;
}



/* ===== <EXTERNAL>::ioctl @ 00010ae8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_00024014)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::getgid @ 00010af4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__gid_t getgid(void)

{
  __gid_t _Var1;
  
  _Var1 = (*(code *)PTR_getgid_00024018)();
  return _Var1;
}



/* ===== <EXTERNAL>::printf @ 00010b00 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_0002401c)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::strerror @ 00010b0c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_00024020)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::geteuid @ 00010b18 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__uid_t geteuid(void)

{
  __uid_t _Var1;
  
  _Var1 = (*(code *)PTR_geteuid_00024024)();
  return _Var1;
}



/* ===== <EXTERNAL>::pathconf @ 00010b24 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long pathconf(char *__path,int __name)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_pathconf_00024028)(__path);
  return lVar1;
}



/* ===== <EXTERNAL>::getenv @ 00010b30 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_getenv_0002402c)(__name);
  return pcVar1;
}



/* ===== <EXTERNAL>::getegid @ 00010b3c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__gid_t getegid(void)

{
  __gid_t _Var1;
  
  _Var1 = (*(code *)PTR_getegid_00024030)();
  return _Var1;
}



/* ===== <EXTERNAL>::prctl @ 00010b48 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int prctl(int __option,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_prctl_00024034)(__option);
  return iVar1;
}



/* ===== <EXTERNAL>::memcpy @ 00010b54 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00024038)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::perror @ 00010b60 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
  (*(code *)PTR_perror_0002403c)(__s);
  return;
}



/* ===== <EXTERNAL>::getuid @ 00010b6c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__uid_t getuid(void)

{
  __uid_t _Var1;
  
  _Var1 = (*(code *)PTR_getuid_00024040)();
  return _Var1;
}



/* ===== <EXTERNAL>::malloc @ 00010b78 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00024044)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::isatty @ 00010b84 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int isatty(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_isatty_00024048)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::strtoul @ 00010b90 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
  ulong uVar1;
  
  uVar1 = (*(code *)PTR_strtoul_0002404c)(__nptr);
  return uVar1;
}



/* ===== <EXTERNAL>::readdir @ 00010b9c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent * readdir(DIR *__dirp)

{
  dirent *pdVar1;
  
  pdVar1 = (dirent *)(*(code *)PTR_readdir_00024050)(__dirp);
  return pdVar1;
}



/* ===== <EXTERNAL>::fflush @ 00010ba8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_00024054)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::abort @ 00010bb4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00024058)();
  return;
}



/* ===== <EXTERNAL>::strtol @ 00010bc0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_strtol_0002405c)(__nptr);
  return lVar1;
}



/* ===== <EXTERNAL>::fprintf @ 00010bcc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00024060)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::strcat @ 00010bd8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcat_00024064)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00010be4 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00024068)();
  return;
}



/* ===== <EXTERNAL>::lstat @ 00010bf0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int lstat(char *__file,stat *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_lstat_0002406c)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::lstat64 @ 00010bfc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int lstat64(char *__file,stat64 *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_lstat64_00024070)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::fopen @ 00010c14 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen_00024078)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::memset @ 00010c20 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0002407c)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::tcgetattr @ 00010c2c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tcgetattr(int __fd,termios *__termios_p)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_tcgetattr_00024080)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::opendir @ 00010c38 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * opendir(char *__name)

{
  DIR *pDVar1;
  
  pDVar1 = (DIR *)(*(code *)PTR_opendir_00024084)(__name);
  return pDVar1;
}



/* ===== <EXTERNAL>::strcmp @ 00010c44 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_00024088)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::sprintf @ 00010c50 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_0002408c)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::fputc @ 00010c5c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputc_00024090)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::fwrite @ 00010c68 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_00024094)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 00010c74 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00024098)();
  return piVar1;
}



/* ===== <EXTERNAL>::exit @ 00010c80 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_0002409c)(__status);
  return;
}



/* ===== <EXTERNAL>::fileno @ 00010c8c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fileno(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fileno_000240a0)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::strlen @ 00010c98 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_000240a4)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::open @ 00010ca4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open_000240a8)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::fputs @ 00010cb0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_000240ac)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::closedir @ 00010cbc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int closedir(DIR *__dirp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_closedir_000240b0)(__dirp);
  return iVar1;
}



/* ===== <EXTERNAL>::fcntl @ 00010cc8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fcntl(int __fd,int __cmd,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fcntl_000240b4)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00010cd4 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_000240b8)();
  return;
}



/* ===== <EXTERNAL>::close @ 00010ce0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_000240bc)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::vfprintf @ 00010cec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vfprintf_000240c0)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 00010cf8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_000240c4)(__ptr);
  return;
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 00010d04 size=12 ===== */

void __fputc_unlocked(void)

{
  (*(code *)PTR___fputc_unlocked_000240c8)();
  return;
}



/* ===== entry @ 00010d10 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00024074)
            (DAT_00010d44,param_2,&stack0x00000004,DAT_00010d48,DAT_00010d40,param_1);
  return;
}



/* ===== FUN_00010d4c @ 00010d4c size=32 ===== */

void FUN_00010d4c(void)

{
  if (DAT_00010d70 == DAT_00010d6c) {
    return;
  }
  if (DAT_00010d74 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010d68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00010d74)();
  return;
}



/* ===== _FINI_0 @ 00010db0 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00010dec;
  if (*DAT_00010dec != '\0') {
    return;
  }
  FUN_00010d4c();
  if (DAT_00010df0 != 0) {
    __deregister_frame_info(DAT_00010df4);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00010df8 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00010e1c != 0) {
    __register_frame_info(DAT_00010e24,DAT_00010e20);
  }
  if ((DAT_00010da8 - DAT_00010da4 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00010dac == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010da0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00010dac)();
  return;
}



/* ===== FUN_00010e28 @ 00010e28 size=56 ===== */

void FUN_00010e28(void)

{
  fprintf(stderr,"Usage: %s [-pRVf] [-+=aAcCdDeijPsStTu] [-v version] files...\n",DAT_000240d4);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00010e60 @ 00010e60 size=116 ===== */

int FUN_00010e60(char param_1)

{
  int *local_c;
  
  local_c = &DAT_00013018;
  while( true ) {
    if (*local_c == 0) {
      return 0;
    }
    if (param_1 == (char)local_c[1]) break;
    local_c = local_c + 2;
  }
  return *local_c;
}



/* ===== FUN_00010ed4 @ 00010ed4 size=1092 ===== */

undefined4 FUN_00010ed4(int *param_1,int param_2,int param_3)

{
  char cVar1;
  char *local_14;
  uint local_10;
  char *local_c;
  
  cVar1 = **(char **)(param_3 + *param_1 * 4);
  if (cVar1 == '-') {
    local_c = *(char **)(param_3 + *param_1 * 4);
    while (local_c = local_c + 1, *local_c != '\0') {
      if (*local_c == 'R') {
        DAT_00024200 = 1;
      }
      else if (*local_c == 'V') {
        DAT_00024204 = 1;
      }
      else if (*local_c == 'f') {
        DAT_00024208 = 1;
      }
      else if (*local_c == 'p') {
        *param_1 = *param_1 + 1;
        if (param_2 <= *param_1) {
          FUN_00010e28();
        }
        DAT_000241fc = strtol(*(char **)(param_3 + *param_1 * 4),&local_14,0);
        if (*local_14 != '\0') {
          FUN_0001246c(DAT_000240d4,0,"bad project - %s\n",*(undefined4 *)(param_3 + *param_1 * 4));
          FUN_00010e28();
        }
        DAT_000241f8 = 1;
      }
      else if (*local_c == 'v') {
        *param_1 = *param_1 + 1;
        if (param_2 <= *param_1) {
          FUN_00010e28();
        }
        DAT_000241f4 = strtol(*(char **)(param_3 + *param_1 * 4),&local_14,0);
        if (*local_14 != '\0') {
          FUN_0001246c(DAT_000240d4,0,"bad version - %s\n",*(undefined4 *)(param_3 + *param_1 * 4));
          FUN_00010e28();
        }
        DAT_000241f0 = 1;
      }
      else {
        local_10 = FUN_00010e60(*local_c);
        if (local_10 == 0) {
          FUN_00010e28();
        }
        DAT_00024210 = DAT_00024210 | local_10;
        DAT_000241e8 = 1;
      }
    }
  }
  else if (cVar1 == '=') {
    DAT_000241ec = 1;
    local_c = *(char **)(param_3 + *param_1 * 4);
    while (local_c = local_c + 1, *local_c != '\0') {
      local_10 = FUN_00010e60(*local_c);
      if (local_10 == 0) {
        FUN_00010e28();
      }
      DAT_00024214 = DAT_00024214 | local_10;
    }
  }
  else {
    if (cVar1 != '+') {
      return 0xffffffff;
    }
    DAT_000241e4 = 1;
    local_c = *(char **)(param_3 + *param_1 * 4);
    while (local_c = local_c + 1, *local_c != '\0') {
      local_10 = FUN_00010e60(*local_c);
      if (local_10 == 0) {
        FUN_00010e28();
      }
      DAT_0002420c = DAT_0002420c | local_10;
    }
  }
  return 1;
}



/* ===== FUN_00011318 @ 00011318 size=1096 ===== */

undefined4 FUN_00011318(char *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  stat64 sStack_80;
  uint local_14 [2];
  
  iVar1 = lstat64(param_1,&sStack_80);
  uVar3 = DAT_000240d4;
  if (iVar1 == -1) {
    if (DAT_00024208 == 0) {
      piVar2 = __errno_location();
      FUN_0001246c(uVar3,*piVar2,"while trying to stat %s",param_1);
    }
    uVar3 = 0xffffffff;
  }
  else {
    iVar1 = FUN_00011b60(param_1,local_14);
    uVar3 = DAT_000240d4;
    if (iVar1 == -1) {
      if (DAT_00024208 == 0) {
        piVar2 = __errno_location();
        FUN_0001246c(uVar3,*piVar2,"while reading flags on %s",param_1);
      }
      uVar3 = 0xffffffff;
    }
    else {
      if (DAT_000241ec == 0) {
        if (DAT_000241e8 != 0) {
          local_14[0] = local_14[0] & ~DAT_00024210;
        }
        if (DAT_000241e4 != 0) {
          local_14[0] = local_14[0] | DAT_0002420c;
        }
        if (DAT_00024204 != 0) {
          printf("Flags of %s set as ",param_1);
          FUN_00011f94(stdout,local_14[0],0);
          putchar(10);
        }
        if ((sStack_80.st_mode & 0xf000) != 0x4000) {
          local_14[0] = local_14[0] & 0xfffeffff;
        }
        iVar1 = FUN_00011c74(param_1,local_14[0]);
        uVar3 = DAT_000240d4;
        if (iVar1 == -1) {
          if (DAT_00024208 == 0) {
            piVar2 = __errno_location();
            FUN_0001246c(uVar3,*piVar2,"while setting flags on %s",param_1);
          }
          return 0xffffffff;
        }
      }
      else {
        if (DAT_00024204 != 0) {
          printf("Flags of %s set as ",param_1);
          FUN_00011f94(stdout,DAT_00024214,0);
          putchar(10);
        }
        iVar1 = FUN_00011c74(param_1,DAT_00024214);
        if (iVar1 == -1) {
          perror(param_1);
        }
      }
      if (DAT_000241f0 != 0) {
        if (DAT_00024204 != 0) {
          printf("Version of %s set as %lu\n",param_1,DAT_000241f4);
        }
        iVar1 = FUN_00011d80(param_1,DAT_000241f4);
        uVar3 = DAT_000240d4;
        if (iVar1 == -1) {
          if (DAT_00024208 == 0) {
            piVar2 = __errno_location();
            FUN_0001246c(uVar3,*piVar2,"while setting version on %s",param_1);
          }
          return 0xffffffff;
        }
      }
      if (DAT_000241f8 != 0) {
        if (DAT_00024204 != 0) {
          printf("Project of %s set as %lu\n",param_1,DAT_000241fc);
        }
        iVar1 = FUN_000120c4(param_1,DAT_000241fc);
        uVar3 = DAT_000240d4;
        if (iVar1 == -1) {
          if (DAT_00024208 == 0) {
            piVar2 = __errno_location();
            FUN_0001246c(uVar3,*piVar2,"while setting project on %s",param_1);
          }
          return 0xffffffff;
        }
      }
      if (((sStack_80.st_mode & 0xf000) == 0x4000) && (DAT_00024200 != 0)) {
        uVar3 = FUN_00011e34(param_1,FUN_00011760,0);
      }
      else {
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}



/* ===== FUN_00011760 @ 00011760 size=276 ===== */

undefined4 FUN_00011760(char *param_1,int param_2)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  char *__s;
  undefined4 local_14;
  
  local_14 = 0;
  iVar1 = strcmp((char *)(param_2 + 0xb),".");
  if ((iVar1 != 0) && (iVar1 = strcmp((char *)(param_2 + 0xb),".."), iVar1 != 0)) {
    sVar2 = strlen(param_1);
    sVar3 = strlen((char *)(param_2 + 0xb));
    __s = malloc(sVar2 + sVar3 + 2);
    if (__s == (char *)0x0) {
      fwrite("Couldn\'t allocate path variable in chattr_dir_proc",1,0x32,stderr);
      local_14 = 0xffffffff;
    }
    else {
      sprintf(__s,"%s/%s",param_1,param_2 + 0xb);
      local_14 = FUN_00011318(__s);
      free(__s);
    }
  }
  return local_14;
}



/* ===== FUN_00011874 @ 00011874 size=748 ===== */

void FUN_00011874(int param_1,int *param_2)

{
  int iVar1;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_10 = 0;
  local_14 = 0;
  if ((param_1 != 0) && (*param_2 != 0)) {
    DAT_000240d4 = *param_2;
  }
  local_1c = 1;
  while ((local_1c < param_1 && (local_10 == 0))) {
    iVar1 = strcmp((char *)param_2[local_1c],"--");
    if (iVar1 == 0) {
      local_1c = local_1c + 1;
      local_10 = 1;
    }
    else {
      iVar1 = FUN_00010ed4(&local_1c,param_1,param_2);
      if (iVar1 == -1) {
        local_10 = 1;
      }
      else {
        local_1c = local_1c + 1;
      }
    }
  }
  if (param_1 <= local_1c) {
    FUN_00010e28();
  }
  if ((DAT_000241ec != 0) && ((DAT_000241e4 != 0 || (DAT_000241e8 != 0)))) {
    fwrite("= is incompatible with - and +\n",1,0x1f,stderr);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  if ((DAT_0002420c & DAT_00024210) != 0) {
    fwrite("Can\'t both set and unset same flag.\n",1,0x24,stderr);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  if ((((DAT_000241e4 == 0) && (DAT_000241e8 == 0)) && (DAT_000241ec == 0)) &&
     ((DAT_000241f0 == 0 && (DAT_000241f8 == 0)))) {
    fwrite("Must use \'-v\', =, - or +\n",1,0x19,stderr);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  if (DAT_00024204 != 0) {
    fprintf(stderr,"chattr %s (%s)\n","1.43.9","8-Feb-2018");
  }
  for (local_c = local_1c; local_c < param_1; local_c = local_c + 1) {
    local_18 = FUN_00011318(param_2[local_c]);
    if (local_18 != 0) {
      local_14 = 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  exit(local_14);
}



/* ===== FUN_00011b60 @ 00011b60 size=276 ===== */

int FUN_00011b60(char *param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_74;
  stat sStack_70;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  iVar1 = lstat(param_1,&sStack_70);
  if (((iVar1 == 0) && ((sStack_70.st_mode & 0xf000) != 0x8000)) &&
     ((sStack_70.st_mode & 0xf000) != 0x4000)) {
    piVar2 = __errno_location();
    *piVar2 = 0x5f;
    local_14 = -1;
  }
  else {
    local_10 = open(param_1,0x20800);
    if (local_10 == -1) {
      local_14 = -1;
    }
    else {
      local_14 = ioctl(local_10,0x80046601,&local_74);
      if (local_14 == -1) {
        piVar2 = __errno_location();
        local_c = *piVar2;
      }
      *param_2 = local_74;
      close(local_10);
      if (local_c != 0) {
        piVar2 = __errno_location();
        *piVar2 = local_c;
      }
    }
  }
  return local_14;
}



/* ===== FUN_00011c74 @ 00011c74 size=268 ===== */

int FUN_00011c74(char *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  stat sStack_70;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  iVar1 = lstat(param_1,&sStack_70);
  if (((iVar1 == 0) && ((sStack_70.st_mode & 0xf000) != 0x8000)) &&
     ((sStack_70.st_mode & 0xf000) != 0x4000)) {
    piVar2 = __errno_location();
    *piVar2 = 0x5f;
    local_14 = -1;
  }
  else {
    local_10 = open(param_1,0x20800);
    if (local_10 == -1) {
      local_14 = -1;
    }
    else {
      local_18 = param_2;
      local_14 = ioctl(local_10,0x40046602,&local_18);
      if (local_14 == -1) {
        piVar2 = __errno_location();
        local_c = *piVar2;
      }
      close(local_10);
      if (local_c != 0) {
        piVar2 = __errno_location();
        *piVar2 = local_c;
      }
    }
  }
  return local_14;
}



/* ===== FUN_00011d80 @ 00011d80 size=180 ===== */

int FUN_00011d80(char *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = open(param_1,0x20800,param_3,0,param_2);
  if (local_10 == -1) {
    local_14 = -1;
  }
  else {
    local_18 = param_2;
    local_14 = ioctl(local_10,0x40047602,&local_18);
    if (local_14 == -1) {
      piVar1 = __errno_location();
      local_c = *piVar1;
    }
    close(local_10);
    if (local_c != 0) {
      piVar1 = __errno_location();
      *piVar1 = local_c;
    }
  }
  return local_14;
}



/* ===== FUN_00011e34 @ 00011e34 size=352 ===== */

int FUN_00011e34(char *param_1,code *param_2,undefined4 param_3)

{
  void *__s;
  DIR *__dirp;
  int iVar1;
  dirent *__src;
  int local_14;
  size_t local_10;
  int local_c;
  
  local_14 = 0;
  local_c = pathconf(param_1,3);
  if (local_c == -1) {
    local_c = 0xe;
  }
  __s = malloc(local_c + 0x10d);
  if (__s == (void *)0x0) {
    local_14 = -1;
  }
  else {
    memset(__s,0,local_c + 0x10d);
    __dirp = opendir(param_1);
    if (__dirp == (DIR *)0x0) {
      free(__s);
      local_14 = -1;
    }
    else {
      while( true ) {
        __src = readdir(__dirp);
        if (__src == (dirent *)0x0) break;
        local_10 = (uint)__src->d_reclen;
        if ((int)(local_c + 0x10cU) < (int)(uint)__src->d_reclen) {
          local_10 = local_c + 0x10cU;
        }
        memcpy(__s,__src,local_10);
        iVar1 = (*param_2)(param_1,__s,param_3);
        if (iVar1 != 0) {
          local_14 = local_14 + 1;
        }
      }
      free(__s);
      closedir(__dirp);
    }
  }
  return local_14;
}



/* ===== FUN_00011f94 @ 00011f94 size=304 ===== */

void FUN_00011f94(FILE *param_1,uint param_2,uint param_3)

{
  bool bVar1;
  uint *local_c;
  
  param_3 = param_3 & 1;
  bVar1 = true;
  for (local_c = &DAT_000240d8; *local_c != 0; local_c = local_c + 3) {
    if ((param_2 & *local_c) == 0) {
      if (param_3 == 0) {
        fputc(0x2d,param_1);
      }
    }
    else if (param_3 == 0) {
      fputs((char *)local_c[1],param_1);
    }
    else {
      if (bVar1) {
        bVar1 = false;
      }
      else {
        fwrite(&DAT_000133d0,1,2,param_1);
      }
      fputs((char *)local_c[2],param_1);
    }
  }
  if ((param_3 != 0) && (bVar1)) {
    fwrite(&DAT_000133d4,1,3,param_1);
  }
  return;
}



/* ===== FUN_000120c4 @ 000120c4 size=248 ===== */

int FUN_000120c4(char *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined1 auStack_30 [12];
  undefined4 local_24;
  int local_14;
  int local_10;
  int local_c;
  
  local_10 = 0;
  local_14 = open(param_1,0x20800,param_3,0,param_2);
  if (local_14 == -1) {
    local_c = -1;
  }
  else {
    local_c = ioctl(local_14,0x801c581f,auStack_30);
    if (local_c == -1) {
      piVar1 = __errno_location();
      local_10 = *piVar1;
    }
    else {
      local_24 = param_2;
      local_c = ioctl(local_14,0x401c5820,auStack_30);
      if (local_c == -1) {
        piVar1 = __errno_location();
        local_10 = *piVar1;
      }
    }
    close(local_14);
    if (local_10 != 0) {
      piVar1 = __errno_location();
      *piVar1 = local_10;
    }
  }
  return local_c;
}



/* ===== FUN_000121bc @ 000121bc size=616 ===== */

void FUN_000121bc(char *param_1,int param_2,char *param_3,__gnuc_va_list param_4)

{
  char *pcVar1;
  int iVar2;
  termios tStack_54;
  FILE *local_18;
  FILE *local_14;
  int local_10;
  int local_c;
  
  local_c = 1;
  local_10 = fileno(stderr);
  if (param_1 != (char *)0x0) {
    fputs(param_1,stderr);
    fwrite(&DAT_000133d8,1,2,stderr);
  }
  if (param_2 != 0) {
    pcVar1 = (char *)FUN_00012604(param_2);
    fputs(pcVar1,stderr);
    fputc(0x20,stderr);
  }
  if (param_3 != (char *)0x0) {
    vfprintf(stderr,param_3,param_4);
  }
  iVar2 = isatty(local_10);
  if (iVar2 == 0) {
    local_c = 0;
  }
  else {
    iVar2 = tcgetattr(local_10,&tStack_54);
    if (((iVar2 == 0) && ((tStack_54.c_oflag & 1) != 0)) && ((tStack_54.c_oflag & 4) != 0)) {
      local_c = 0;
    }
  }
  if (local_c != 0) {
    local_14 = stderr;
    if (stderr->_chain == (_IO_FILE *)0x0) {
      fputc(0xd,stderr);
    }
    else if (stderr->_IO_write_base < stderr->_IO_buf_base) {
      pcVar1 = stderr->_IO_write_base;
      stderr->_IO_write_base = pcVar1 + 1;
      *pcVar1 = '\r';
    }
    else {
      __fputc_unlocked(0xd,stderr);
    }
  }
  local_18 = stderr;
  if (stderr->_chain == (_IO_FILE *)0x0) {
    fputc(10,stderr);
  }
  else if (stderr->_IO_write_base < stderr->_IO_buf_base) {
    pcVar1 = stderr->_IO_write_base;
    stderr->_IO_write_base = pcVar1 + 1;
    *pcVar1 = '\n';
  }
  else {
    __fputc_unlocked(10,stderr);
  }
  fflush(stderr);
  return;
}



/* ===== FUN_00012424 @ 00012424 size=72 ===== */

void FUN_00012424(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  (*DAT_000241bc)(param_1,param_2,param_3,param_4);
  return;
}



/* ===== FUN_0001246c @ 0001246c size=112 ===== */

void FUN_0001246c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_4;
  
  if (DAT_000241bc == (code *)0x0) {
    DAT_000241bc = FUN_000121bc;
  }
  uStack_4 = param_4;
  FUN_00012424(param_1,param_2,param_3,&uStack_4);
  return;
}



/* ===== FUN_00012588 @ 00012588 size=28 ===== */

undefined4 FUN_00012588(void)

{
  return 0;
}



/* ===== FUN_000125a4 @ 000125a4 size=28 ===== */

undefined4 FUN_000125a4(void)

{
  return 0;
}



/* ===== FUN_00012604 @ 00012604 size=1012 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_00012604(uint param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  size_t sVar5;
  int iVar6;
  char *local_18;
  undefined4 *local_10;
  uint local_c;
  
  local_c = param_1 & 0xff;
  param_1 = param_1 - local_c;
  if (param_1 == 0) {
    pcVar4 = strerror(local_c);
    if (pcVar4 != (char *)0x0) {
      return pcVar4;
    }
  }
  else {
    FUN_00012588();
    for (local_10 = DAT_00024218; local_10 != (undefined4 *)0x0; local_10 = (undefined4 *)*local_10)
    {
      if (((param_1 ^ *(uint *)(local_10[1] + 4)) & 0xffffff) == 0) {
        if ((int)local_c < *(int *)(local_10[1] + 8)) {
          pcVar4 = *(char **)(*(int *)local_10[1] + local_c * 4);
          FUN_000125a4();
          if (DAT_00024220 == (code *)0x0) {
            return pcVar4;
          }
          pcVar4 = (char *)(*DAT_00024220)(pcVar4);
          return pcVar4;
        }
        break;
      }
    }
    for (local_10 = DAT_0002421c; local_10 != (undefined4 *)0x0; local_10 = (undefined4 *)*local_10)
    {
      if (((param_1 ^ *(uint *)(local_10[1] + 4)) & 0xffffff) == 0) {
        if ((int)local_c < *(int *)(local_10[1] + 8)) {
          pcVar4 = *(char **)(*(int *)local_10[1] + local_c * 4);
          FUN_000125a4();
          if (DAT_00024220 == (code *)0x0) {
            return pcVar4;
          }
          pcVar4 = (char *)(*DAT_00024220)(pcVar4);
          return pcVar4;
        }
        break;
      }
    }
    FUN_000125a4();
  }
  uVar3 = ram0x000133e8;
  uVar2 = s_Unknown_code_000133dc._8_4_;
  uVar1 = s_Unknown_code_000133dc._4_4_;
  iVar6 = coproc_movefrom_User_R_Thread_and_Process_ID();
  pcVar4 = (char *)(iVar6 + DAT_000129f8);
  *(undefined4 *)pcVar4 = s_Unknown_code_000133dc._0_4_;
  *(undefined4 *)(pcVar4 + 4) = uVar1;
  *(undefined4 *)(pcVar4 + 8) = uVar2;
  *(short *)(pcVar4 + 0xc) = (short)uVar3;
  if (param_1 != 0) {
    pcVar4 = (char *)FUN_00012ef8(param_1);
    iVar6 = coproc_movefrom_User_R_Thread_and_Process_ID();
    strcat((char *)(iVar6 + DAT_000129f8),pcVar4);
    iVar6 = coproc_movefrom_User_R_Thread_and_Process_ID();
    sVar5 = strlen((char *)(iVar6 + DAT_000129f8));
    iVar6 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(undefined2 *)(sVar5 + iVar6 + DAT_000129f8) = DAT_000133ec;
  }
  iVar6 = coproc_movefrom_User_R_Thread_and_Process_ID();
  for (local_18 = (char *)(iVar6 + DAT_000129f8); *local_18 != '\0'; local_18 = local_18 + 1) {
  }
  if (local_c < 100) {
    pcVar4 = local_18;
    if (local_c < 10) goto LAB_000129b4;
  }
  else {
    *local_18 = (char)(local_c / 100) + '0';
    local_c = local_c % 100;
    pcVar4 = local_18 + 1;
  }
  local_18 = pcVar4 + 1;
  *pcVar4 = (char)(local_c / 10) + '0';
  local_c = local_c % 10;
LAB_000129b4:
  *local_18 = (char)local_c + '0';
  local_18[1] = '\0';
  iVar6 = coproc_movefrom_User_R_Thread_and_Process_ID();
  return (char *)(iVar6 + DAT_000129f8);
}



/* ===== FUN_000129fc @ 000129fc size=144 ===== */

undefined4 FUN_000129fc(undefined4 param_1)

{
  __uid_t _Var1;
  __uid_t _Var2;
  __gid_t _Var3;
  __gid_t _Var4;
  int iVar5;
  undefined4 uVar6;
  
  _Var1 = getuid();
  _Var2 = geteuid();
  if (_Var1 == _Var2) {
    _Var3 = getgid();
    _Var4 = getegid();
    if (_Var3 == _Var4) {
      iVar5 = prctl(3,0,0,0,0);
      if (iVar5 == 0) {
        return 0;
      }
      uVar6 = secure_getenv(param_1);
      return uVar6;
    }
  }
  return 0;
}



/* ===== FUN_00012a8c @ 00012a8c size=472 ===== */

void FUN_00012a8c(void)

{
  int *piVar1;
  char *local_1c;
  uint local_18;
  int local_14;
  char *local_10;
  char *local_c;
  
  if ((DAT_00024224 & 0x8000) == 0) {
    local_c = getenv("COMERR_DEBUG");
    if ((local_c != (char *)0x0) &&
       ((DAT_00024224 = strtoul(local_c,&local_1c,0), *local_1c != '\0' ||
        (piVar1 = __errno_location(), *piVar1 != 0)))) {
      DAT_00024224 = 0;
    }
    DAT_00024224 = DAT_00024224 | 0x8000;
    if (DAT_00024224 != 0x8000) {
      local_10 = (char *)FUN_000129fc("COMERR_DEBUG_FILE");
      if (local_10 != (char *)0x0) {
        DAT_00024228 = fopen(local_10,"a");
      }
      if (DAT_00024228 == (FILE *)0x0) {
        DAT_00024228 = fopen("/dev/tty","a");
      }
      if (DAT_00024228 == (FILE *)0x0) {
        DAT_00024224 = 0x8000;
      }
      else {
        local_14 = fileno(DAT_00024228);
        if ((-1 < local_14) && (local_18 = fcntl(local_14,1), -1 < (int)local_18)) {
          fcntl(local_14,2,local_18 | 1);
        }
      }
    }
  }
  return;
}



/* ===== FUN_00012c64 @ 00012c64 size=240 ===== */

int FUN_00012c64(int param_1)

{
  FILE *__stream;
  undefined4 *__ptr;
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  __ptr = malloc(8);
  if (__ptr == (undefined4 *)0x0) {
    iVar3 = 0xc;
  }
  else {
    iVar3 = FUN_00012588();
    if (iVar3 == 0) {
      __ptr[1] = param_1;
      *__ptr = DAT_0002421c;
      DAT_0002421c = __ptr;
      FUN_00012a8c();
      __stream = DAT_00024228;
      if ((DAT_00024224 & 1) != 0) {
        uVar2 = FUN_00012ef8(*(undefined4 *)(param_1 + 4));
        fprintf(__stream,"add_error_table: %s (0x%p)\n",uVar2,param_1);
      }
      FUN_000125a4();
      iVar3 = 0;
    }
    else {
      free(__ptr);
      piVar1 = __errno_location();
      iVar3 = *piVar1;
    }
  }
  return iVar3;
}



/* ===== FUN_00012d54 @ 00012d54 size=376 ===== */

undefined4 FUN_00012d54(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *local_18;
  undefined4 *local_14;
  
  local_18 = (undefined4 *)0x0;
  iVar2 = FUN_00012588();
  if (iVar2 == 0) {
    local_14 = DAT_0002421c;
    FUN_00012a8c();
    pFVar1 = DAT_00024228;
    for (; local_14 != (undefined4 *)0x0; local_14 = (undefined4 *)*local_14) {
      if (*(int *)(local_14[1] + 4) == *(int *)(param_1 + 4)) {
        if (local_18 == (undefined4 *)0x0) {
          DAT_0002421c = (undefined4 *)*local_14;
        }
        else {
          *local_18 = *local_14;
        }
        free(local_14);
        pFVar1 = DAT_00024228;
        if ((DAT_00024224 & 1) != 0) {
          uVar3 = FUN_00012ef8(*(undefined4 *)(param_1 + 4));
          fprintf(pFVar1,"remove_error_table: %s (0x%p)\n",uVar3,param_1);
        }
        FUN_000125a4();
        return 0;
      }
      local_18 = local_14;
    }
    if ((DAT_00024224 & 1) != 0) {
      uVar3 = FUN_00012ef8(*(undefined4 *)(param_1 + 4));
      fprintf(pFVar1,"remove_error_table FAILED: %s (0x%p)\n",uVar3,param_1);
    }
    FUN_000125a4();
  }
  return 2;
}



/* ===== FUN_00012ecc @ 00012ecc size=44 ===== */

void FUN_00012ecc(int param_1)

{
  FUN_00012c64(*(undefined4 *)(param_1 + 4));
  return;
}



/* ===== FUN_00012ef8 @ 00012ef8 size=200 ===== */

undefined1 * FUN_00012ef8(int param_1)

{
  uint uVar1;
  undefined1 *local_10;
  int local_c;
  
  local_10 = &DAT_0002422c;
  for (local_c = 4; -1 < local_c; local_c = local_c + -1) {
    uVar1 = (int)(param_1 >> 8 & 0xffffffU) >> (local_c * 6 & 0xffU) & 0x3f;
    if (uVar1 != 0) {
      *local_10 = (&DAT_00013487)[uVar1];
      local_10 = local_10 + 1;
    }
  }
  *local_10 = 0;
  return &DAT_0002422c;
}



/* ===== _DT_FINI @ 00012fc0 size=16 ===== */

void _DT_FINI(void)

{
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00025000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 00025004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 00025008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::open @ 0002500c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pathconf @ 00025010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long pathconf(char *__path,int __name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::lstat @ 00025014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int lstat(char *__file,stat *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 00025018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 0002501c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 00025020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcat @ 00025024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen @ 00025028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 0002502c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 00025030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::perror @ 00025034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::closedir @ 00025038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int closedir(DIR *__dirp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getegid @ 0002503c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__gid_t getegid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 00025040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 00025044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 00025048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fcntl @ 0002504c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fcntl(int __fd,int __cmd,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::geteuid @ 00025050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__uid_t geteuid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 00025054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::putchar @ 00025058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 0002505c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtoul @ 00025060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 00025064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 00025068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 0002506c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __fputc_unlocked(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00025070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 00025074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vfprintf @ 00025078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ioctl @ 0002507c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getgid @ 00025080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__gid_t getgid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::secure_getenv @ 00025084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void secure_getenv(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getuid @ 00025088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__uid_t getuid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::readdir @ 0002508c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent * readdir(DIR *__dirp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputc @ 00025090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getenv @ 00025094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::opendir @ 00025098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * opendir(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fileno @ 0002509c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fileno(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::tcgetattr @ 000250a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tcgetattr(int __fd,termios *__termios_p)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 000250a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 000250a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtol @ 000250ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::lstat64 @ 000250b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int lstat64(char *__file,stat64 *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::isatty @ 000250b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int isatty(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::prctl @ 000250b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int prctl(int __option,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 000250bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


