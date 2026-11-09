// lsattr — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _DT_INIT @ 00010ad0 size=16 ===== */

void _DT_INIT(void)

{
  return;
}



/* ===== <EXTERNAL>::putchar @ 00010af4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putchar_0002300c)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::secure_getenv @ 00010b00 size=12 ===== */

void secure_getenv(void)

{
  (*(code *)PTR_secure_getenv_00023010)();
  return;
}



/* ===== <EXTERNAL>::ioctl @ 00010b0c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_00023014)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::getgid @ 00010b18 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__gid_t getgid(void)

{
  __gid_t _Var1;
  
  _Var1 = (*(code *)PTR_getgid_00023018)();
  return _Var1;
}



/* ===== <EXTERNAL>::printf @ 00010b24 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_0002301c)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::strerror @ 00010b30 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_00023020)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::geteuid @ 00010b3c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__uid_t geteuid(void)

{
  __uid_t _Var1;
  
  _Var1 = (*(code *)PTR_geteuid_00023024)();
  return _Var1;
}



/* ===== <EXTERNAL>::pathconf @ 00010b48 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long pathconf(char *__path,int __name)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_pathconf_00023028)(__path);
  return lVar1;
}



/* ===== <EXTERNAL>::getenv @ 00010b54 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_getenv_0002302c)(__name);
  return pcVar1;
}



/* ===== <EXTERNAL>::getegid @ 00010b60 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__gid_t getegid(void)

{
  __gid_t _Var1;
  
  _Var1 = (*(code *)PTR_getegid_00023030)();
  return _Var1;
}



/* ===== <EXTERNAL>::prctl @ 00010b6c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int prctl(int __option,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_prctl_00023034)(__option);
  return iVar1;
}



/* ===== <EXTERNAL>::memcpy @ 00010b78 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00023038)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::perror @ 00010b84 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
  (*(code *)PTR_perror_0002303c)(__s);
  return;
}



/* ===== <EXTERNAL>::getuid @ 00010b90 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__uid_t getuid(void)

{
  __uid_t _Var1;
  
  _Var1 = (*(code *)PTR_getuid_00023040)();
  return _Var1;
}



/* ===== <EXTERNAL>::malloc @ 00010b9c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00023044)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::isatty @ 00010ba8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int isatty(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_isatty_00023048)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::strtoul @ 00010bb4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
  ulong uVar1;
  
  uVar1 = (*(code *)PTR_strtoul_0002304c)(__nptr);
  return uVar1;
}



/* ===== <EXTERNAL>::readdir @ 00010bc0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent * readdir(DIR *__dirp)

{
  dirent *pdVar1;
  
  pdVar1 = (dirent *)(*(code *)PTR_readdir_00023050)(__dirp);
  return pdVar1;
}



/* ===== <EXTERNAL>::fflush @ 00010bcc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_00023054)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::abort @ 00010bd8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00023058)();
  return;
}



/* ===== <EXTERNAL>::fprintf @ 00010be4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_0002305c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::strcat @ 00010bf0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcat_00023060)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00010bfc size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00023064)();
  return;
}



/* ===== <EXTERNAL>::lstat @ 00010c08 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int lstat(char *__file,stat *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_lstat_00023068)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::lstat64 @ 00010c14 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int lstat64(char *__file,stat64 *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_lstat64_0002306c)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::fopen @ 00010c2c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen_00023074)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::getopt @ 00010c38 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getopt_00023078)(___argc);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 00010c44 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0002307c)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::tcgetattr @ 00010c50 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tcgetattr(int __fd,termios *__termios_p)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_tcgetattr_00023080)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::opendir @ 00010c5c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * opendir(char *__name)

{
  DIR *pDVar1;
  
  pDVar1 = (DIR *)(*(code *)PTR_opendir_00023084)(__name);
  return pDVar1;
}



/* ===== <EXTERNAL>::strcmp @ 00010c68 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_00023088)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::sprintf @ 00010c74 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_0002308c)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::fputc @ 00010c80 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputc_00023090)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::fwrite @ 00010c8c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_00023094)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 00010c98 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00023098)();
  return piVar1;
}



/* ===== <EXTERNAL>::exit @ 00010ca4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_0002309c)(__status);
  return;
}



/* ===== <EXTERNAL>::fileno @ 00010cb0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fileno(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fileno_000230a0)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::strlen @ 00010cbc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_000230a4)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::open @ 00010cc8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open_000230a8)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::fputs @ 00010cd4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_000230ac)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::closedir @ 00010ce0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int closedir(DIR *__dirp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_closedir_000230b0)(__dirp);
  return iVar1;
}



/* ===== <EXTERNAL>::fcntl @ 00010cec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fcntl(int __fd,int __cmd,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fcntl_000230b4)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00010cf8 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_000230b8)();
  return;
}



/* ===== <EXTERNAL>::close @ 00010d04 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_000230bc)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::vfprintf @ 00010d10 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vfprintf_000230c0)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 00010d1c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_000230c4)(__ptr);
  return;
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 00010d28 size=12 ===== */

void __fputc_unlocked(void)

{
  (*(code *)PTR___fputc_unlocked_000230c8)();
  return;
}



/* ===== entry @ 00010d34 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00023070)
            (DAT_00010d68,param_2,&stack0x00000004,DAT_00010d6c,DAT_00010d64,param_1);
  return;
}



/* ===== FUN_00010d70 @ 00010d70 size=32 ===== */

void FUN_00010d70(void)

{
  if (DAT_00010d94 == DAT_00010d90) {
    return;
  }
  if (DAT_00010d98 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010d8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00010d98)();
  return;
}



/* ===== _FINI_0 @ 00010dd4 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00010e10;
  if (*DAT_00010e10 != '\0') {
    return;
  }
  FUN_00010d70();
  if (DAT_00010e14 != 0) {
    __deregister_frame_info(DAT_00010e18);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00010e1c size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00010e40 != 0) {
    __register_frame_info(DAT_00010e48,DAT_00010e44);
  }
  if ((DAT_00010dcc - DAT_00010dc8 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00010dd0 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00010dd0)();
  return;
}



/* ===== FUN_00010e4c @ 00010e4c size=56 ===== */

void FUN_00010e4c(void)

{
  fprintf(stderr,"Usage: %s [-RVadlpv] [files...]\n",DAT_000230d4);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00010e84 @ 00010e84 size=600 ===== */

undefined4 FUN_00010e84(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  FILE *local_14;
  
  iVar1 = FUN_000115f4(param_1,&local_18);
  uVar3 = DAT_000230d4;
  if (iVar1 == -1) {
    piVar2 = __errno_location();
    FUN_00011dd4(uVar3,*piVar2,"While reading flags on %s",param_1);
    uVar3 = 0xffffffff;
  }
  else {
    if (DAT_00023200 != 0) {
      iVar1 = FUN_00011a6c(param_1,&local_20);
      uVar3 = DAT_000230d4;
      if (iVar1 == -1) {
        piVar2 = __errno_location();
        FUN_00011dd4(uVar3,*piVar2,"While reading project on %s",param_1);
        return 0xffffffff;
      }
      printf("%5lu ",local_20);
    }
    if (DAT_000231fc != 0) {
      iVar1 = FUN_00011708(param_1,&local_1c);
      uVar3 = DAT_000230d4;
      if (iVar1 == -1) {
        piVar2 = __errno_location();
        FUN_00011dd4(uVar3,*piVar2,"While reading version on %s",param_1);
        return 0xffffffff;
      }
      printf("%-10lu ",local_1c);
    }
    if ((DAT_000231f0 & 1) == 0) {
      FUN_0001193c(stdout,local_18,DAT_000231f0);
      printf(" %s\n",param_1);
    }
    else {
      printf("%-28s ",param_1);
      FUN_0001193c(stdout,local_18,DAT_000231f0);
      local_14 = stdout;
      if (stdout->_chain == (_IO_FILE *)0x0) {
        fputc(10,stdout);
      }
      else if (stdout->_IO_write_base < stdout->_IO_buf_base) {
        pcVar4 = stdout->_IO_write_base;
        stdout->_IO_write_base = pcVar4 + 1;
        *pcVar4 = '\n';
      }
      else {
        __fputc_unlocked(10,stdout);
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== FUN_000110dc @ 000110dc size=200 ===== */

undefined4 FUN_000110dc(char *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  stat64 sStack_80;
  undefined4 local_14;
  
  local_14 = 0;
  iVar2 = lstat64(param_1,&sStack_80);
  uVar1 = DAT_000230d4;
  if (iVar2 == -1) {
    piVar3 = __errno_location();
    FUN_00011dd4(uVar1,*piVar3,"while trying to stat %s",param_1);
    local_14 = 0xffffffff;
  }
  else if (((sStack_80.st_mode & 0xf000) == 0x4000) && (DAT_000231ec == 0)) {
    local_14 = FUN_000117dc(param_1,FUN_000111a4,0);
  }
  else {
    local_14 = FUN_00010e84(param_1);
  }
  return local_14;
}



/* ===== FUN_000111a4 @ 000111a4 size=448 ===== */

undefined4 FUN_000111a4(char *param_1,int param_2)

{
  size_t sVar1;
  int iVar2;
  stat64 sStack_78;
  char *local_10;
  size_t local_c;
  
  local_c = strlen(param_1);
  sVar1 = strlen((char *)(param_2 + 0xb));
  local_10 = malloc(sVar1 + local_c + 2);
  if ((local_c == 0) || (param_1[local_c - 1] != '/')) {
    sprintf(local_10,"%s/%s",param_1,param_2 + 0xb);
  }
  else {
    sprintf(local_10,"%s%s",param_1,param_2 + 0xb);
  }
  iVar2 = lstat64(local_10,&sStack_78);
  if (iVar2 == -1) {
    perror(local_10);
  }
  else if ((((*(char *)(param_2 + 0xb) != '.') || (DAT_000231e8 != 0)) &&
           (FUN_00010e84(local_10), (sStack_78.st_mode & 0xf000) == 0x4000)) &&
          (((DAT_000231f4 != 0 && (iVar2 = strcmp((char *)(param_2 + 0xb),"."), iVar2 != 0)) &&
           (iVar2 = strcmp((char *)(param_2 + 0xb),".."), iVar2 != 0)))) {
    printf("\n%s:\n",local_10);
    FUN_000117dc(local_10,FUN_000111a4,0);
    putchar(10);
  }
  free(local_10);
  return 0;
}



/* ===== FUN_00011364 @ 00011364 size=508 ===== */

void FUN_00011364(int param_1,char **param_2)

{
  int iVar1;
  int local_10;
  int local_c;
  
  local_10 = 0;
  if ((param_1 != 0) && (*param_2 != (char *)0x0)) {
    DAT_000230d4 = *param_2;
  }
  while (iVar1 = getopt(param_1,param_2,"RVadlvp"), iVar1 != -1) {
    switch(iVar1) {
    case 0x52:
      DAT_000231f4 = 1;
      break;
    default:
      FUN_00010e4c();
      break;
    case 0x56:
      DAT_000231f8 = 1;
      break;
    case 0x61:
      DAT_000231e8 = 1;
      break;
    case 100:
      DAT_000231ec = 1;
      break;
    case 0x6c:
      DAT_000231f0 = 1;
      break;
    case 0x70:
      DAT_00023200 = 1;
      break;
    case 0x76:
      DAT_000231fc = 1;
    }
  }
  if (DAT_000231f8 != 0) {
    fprintf(stderr,"lsattr %s (%s)\n","1.43.9","8-Feb-2018");
  }
  if (optind < param_1) {
    for (local_c = optind; local_c < param_1; local_c = local_c + 1) {
      iVar1 = FUN_000110dc(param_2[local_c]);
      if (iVar1 != 0) {
        local_10 = 1;
      }
    }
  }
  else {
    iVar1 = FUN_000110dc(&DAT_00012a00);
    if (iVar1 == -1) {
      local_10 = 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  exit(local_10);
}



/* ===== FUN_000115f4 @ 000115f4 size=276 ===== */

int FUN_000115f4(char *param_1,undefined4 *param_2)

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



/* ===== FUN_00011708 @ 00011708 size=212 ===== */

int FUN_00011708(char *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_18 = 0xffffffff;
  local_10 = 0xffffffff;
  local_c = 0;
  local_14 = open(param_1,0x20800);
  if (local_14 == -1) {
    local_10 = -1;
  }
  else {
    local_10 = ioctl(local_14,0x80047601,&local_18);
    if (local_10 == -1) {
      piVar1 = __errno_location();
      local_c = *piVar1;
    }
    close(local_14);
    if (local_10 == -1) {
      piVar1 = __errno_location();
      *piVar1 = local_c;
    }
    if (local_10 == 0) {
      *param_2 = local_18;
    }
  }
  return local_10;
}



/* ===== FUN_000117dc @ 000117dc size=352 ===== */

int FUN_000117dc(char *param_1,code *param_2,undefined4 param_3)

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



/* ===== FUN_0001193c @ 0001193c size=304 ===== */

void FUN_0001193c(FILE *param_1,uint param_2,uint param_3)

{
  bool bVar1;
  uint *local_c;
  
  param_3 = param_3 & 1;
  bVar1 = true;
  for (local_c = &DAT_000230d8; *local_c != 0; local_c = local_c + 3) {
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
        fwrite(&DAT_00012ba8,1,2,param_1);
      }
      fputs((char *)local_c[2],param_1);
    }
  }
  if ((param_3 != 0) && (bVar1)) {
    fwrite(&DAT_00012bac,1,3,param_1);
  }
  return;
}



/* ===== FUN_00011a6c @ 00011a6c size=184 ===== */

int FUN_00011a6c(char *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined1 auStack_30 [12];
  undefined4 local_24;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = open(param_1,0x20800);
  if (local_10 == -1) {
    local_14 = -1;
  }
  else {
    local_14 = ioctl(local_10,0x801c581f,auStack_30);
    if (local_14 == 0) {
      *param_2 = local_24;
    }
    piVar1 = __errno_location();
    local_c = *piVar1;
    close(local_10);
    if (local_c != 0) {
      piVar1 = __errno_location();
      *piVar1 = local_c;
    }
  }
  return local_14;
}



/* ===== FUN_00011b24 @ 00011b24 size=616 ===== */

void FUN_00011b24(char *param_1,int param_2,char *param_3,__gnuc_va_list param_4)

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
    fwrite(&DAT_00012bb0,1,2,stderr);
  }
  if (param_2 != 0) {
    pcVar1 = (char *)FUN_00011f6c(param_2);
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



/* ===== FUN_00011d8c @ 00011d8c size=72 ===== */

void FUN_00011d8c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  (*DAT_000231bc)(param_1,param_2,param_3,param_4);
  return;
}



/* ===== FUN_00011dd4 @ 00011dd4 size=112 ===== */

void FUN_00011dd4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_4;
  
  if (DAT_000231bc == (code *)0x0) {
    DAT_000231bc = FUN_00011b24;
  }
  uStack_4 = param_4;
  FUN_00011d8c(param_1,param_2,param_3,&uStack_4);
  return;
}



/* ===== FUN_00011ef0 @ 00011ef0 size=28 ===== */

undefined4 FUN_00011ef0(void)

{
  return 0;
}



/* ===== FUN_00011f0c @ 00011f0c size=28 ===== */

undefined4 FUN_00011f0c(void)

{
  return 0;
}



/* ===== FUN_00011f6c @ 00011f6c size=1012 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_00011f6c(uint param_1)

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
    FUN_00011ef0();
    for (local_10 = DAT_00023204; local_10 != (undefined4 *)0x0; local_10 = (undefined4 *)*local_10)
    {
      if (((param_1 ^ *(uint *)(local_10[1] + 4)) & 0xffffff) == 0) {
        if ((int)local_c < *(int *)(local_10[1] + 8)) {
          pcVar4 = *(char **)(*(int *)local_10[1] + local_c * 4);
          FUN_00011f0c();
          if (DAT_0002320c == (code *)0x0) {
            return pcVar4;
          }
          pcVar4 = (char *)(*DAT_0002320c)(pcVar4);
          return pcVar4;
        }
        break;
      }
    }
    for (local_10 = DAT_00023208; local_10 != (undefined4 *)0x0; local_10 = (undefined4 *)*local_10)
    {
      if (((param_1 ^ *(uint *)(local_10[1] + 4)) & 0xffffff) == 0) {
        if ((int)local_c < *(int *)(local_10[1] + 8)) {
          pcVar4 = *(char **)(*(int *)local_10[1] + local_c * 4);
          FUN_00011f0c();
          if (DAT_0002320c == (code *)0x0) {
            return pcVar4;
          }
          pcVar4 = (char *)(*DAT_0002320c)(pcVar4);
          return pcVar4;
        }
        break;
      }
    }
    FUN_00011f0c();
  }
  uVar3 = ram0x00012bc0;
  uVar2 = s_Unknown_code_00012bb4._8_4_;
  uVar1 = s_Unknown_code_00012bb4._4_4_;
  iVar6 = coproc_movefrom_User_R_Thread_and_Process_ID();
  pcVar4 = (char *)(iVar6 + DAT_00012360);
  *(undefined4 *)pcVar4 = s_Unknown_code_00012bb4._0_4_;
  *(undefined4 *)(pcVar4 + 4) = uVar1;
  *(undefined4 *)(pcVar4 + 8) = uVar2;
  *(short *)(pcVar4 + 0xc) = (short)uVar3;
  if (param_1 != 0) {
    pcVar4 = (char *)FUN_00012860(param_1);
    iVar6 = coproc_movefrom_User_R_Thread_and_Process_ID();
    strcat((char *)(iVar6 + DAT_00012360),pcVar4);
    iVar6 = coproc_movefrom_User_R_Thread_and_Process_ID();
    sVar5 = strlen((char *)(iVar6 + DAT_00012360));
    iVar6 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(undefined2 *)(sVar5 + iVar6 + DAT_00012360) = DAT_00012bc4;
  }
  iVar6 = coproc_movefrom_User_R_Thread_and_Process_ID();
  for (local_18 = (char *)(iVar6 + DAT_00012360); *local_18 != '\0'; local_18 = local_18 + 1) {
  }
  if (local_c < 100) {
    pcVar4 = local_18;
    if (local_c < 10) goto LAB_0001231c;
  }
  else {
    *local_18 = (char)(local_c / 100) + '0';
    local_c = local_c % 100;
    pcVar4 = local_18 + 1;
  }
  local_18 = pcVar4 + 1;
  *pcVar4 = (char)(local_c / 10) + '0';
  local_c = local_c % 10;
LAB_0001231c:
  *local_18 = (char)local_c + '0';
  local_18[1] = '\0';
  iVar6 = coproc_movefrom_User_R_Thread_and_Process_ID();
  return (char *)(iVar6 + DAT_00012360);
}



/* ===== FUN_00012364 @ 00012364 size=144 ===== */

undefined4 FUN_00012364(undefined4 param_1)

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



/* ===== FUN_000123f4 @ 000123f4 size=472 ===== */

void FUN_000123f4(void)

{
  int *piVar1;
  char *local_1c;
  uint local_18;
  int local_14;
  char *local_10;
  char *local_c;
  
  if ((DAT_00023210 & 0x8000) == 0) {
    local_c = getenv("COMERR_DEBUG");
    if ((local_c != (char *)0x0) &&
       ((DAT_00023210 = strtoul(local_c,&local_1c,0), *local_1c != '\0' ||
        (piVar1 = __errno_location(), *piVar1 != 0)))) {
      DAT_00023210 = 0;
    }
    DAT_00023210 = DAT_00023210 | 0x8000;
    if (DAT_00023210 != 0x8000) {
      local_10 = (char *)FUN_00012364("COMERR_DEBUG_FILE");
      if (local_10 != (char *)0x0) {
        DAT_00023214 = fopen(local_10,"a");
      }
      if (DAT_00023214 == (FILE *)0x0) {
        DAT_00023214 = fopen("/dev/tty","a");
      }
      if (DAT_00023214 == (FILE *)0x0) {
        DAT_00023210 = 0x8000;
      }
      else {
        local_14 = fileno(DAT_00023214);
        if ((-1 < local_14) && (local_18 = fcntl(local_14,1), -1 < (int)local_18)) {
          fcntl(local_14,2,local_18 | 1);
        }
      }
    }
  }
  return;
}



/* ===== FUN_000125cc @ 000125cc size=240 ===== */

int FUN_000125cc(int param_1)

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
    iVar3 = FUN_00011ef0();
    if (iVar3 == 0) {
      __ptr[1] = param_1;
      *__ptr = DAT_00023208;
      DAT_00023208 = __ptr;
      FUN_000123f4();
      __stream = DAT_00023214;
      if ((DAT_00023210 & 1) != 0) {
        uVar2 = FUN_00012860(*(undefined4 *)(param_1 + 4));
        fprintf(__stream,"add_error_table: %s (0x%p)\n",uVar2,param_1);
      }
      FUN_00011f0c();
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



/* ===== FUN_000126bc @ 000126bc size=376 ===== */

undefined4 FUN_000126bc(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *local_18;
  undefined4 *local_14;
  
  local_18 = (undefined4 *)0x0;
  iVar2 = FUN_00011ef0();
  if (iVar2 == 0) {
    local_14 = DAT_00023208;
    FUN_000123f4();
    pFVar1 = DAT_00023214;
    for (; local_14 != (undefined4 *)0x0; local_14 = (undefined4 *)*local_14) {
      if (*(int *)(local_14[1] + 4) == *(int *)(param_1 + 4)) {
        if (local_18 == (undefined4 *)0x0) {
          DAT_00023208 = (undefined4 *)*local_14;
        }
        else {
          *local_18 = *local_14;
        }
        free(local_14);
        pFVar1 = DAT_00023214;
        if ((DAT_00023210 & 1) != 0) {
          uVar3 = FUN_00012860(*(undefined4 *)(param_1 + 4));
          fprintf(pFVar1,"remove_error_table: %s (0x%p)\n",uVar3,param_1);
        }
        FUN_00011f0c();
        return 0;
      }
      local_18 = local_14;
    }
    if ((DAT_00023210 & 1) != 0) {
      uVar3 = FUN_00012860(*(undefined4 *)(param_1 + 4));
      fprintf(pFVar1,"remove_error_table FAILED: %s (0x%p)\n",uVar3,param_1);
    }
    FUN_00011f0c();
  }
  return 2;
}



/* ===== FUN_00012834 @ 00012834 size=44 ===== */

void FUN_00012834(int param_1)

{
  FUN_000125cc(*(undefined4 *)(param_1 + 4));
  return;
}



/* ===== FUN_00012860 @ 00012860 size=200 ===== */

undefined1 * FUN_00012860(int param_1)

{
  uint uVar1;
  undefined1 *local_10;
  int local_c;
  
  local_10 = &DAT_00023218;
  for (local_c = 4; -1 < local_c; local_c = local_c + -1) {
    uVar1 = (int)(param_1 >> 8 & 0xffffffU) >> (local_c * 6 & 0xffU) & 0x3f;
    if (uVar1 != 0) {
      *local_10 = (&DAT_00012c5f)[uVar1];
      local_10 = local_10 + 1;
    }
  }
  *local_10 = 0;
  return &DAT_00023218;
}



/* ===== _DT_FINI @ 00012928 size=16 ===== */

void _DT_FINI(void)

{
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00024000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 00024004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 00024008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::open @ 0002400c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pathconf @ 00024010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long pathconf(char *__path,int __name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::lstat @ 00024014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int lstat(char *__file,stat *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 00024018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 0002401c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 00024020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcat @ 00024024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen @ 00024028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 0002402c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 00024030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::perror @ 00024034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::closedir @ 00024038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int closedir(DIR *__dirp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getegid @ 0002403c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__gid_t getegid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 00024040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 00024044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 00024048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fcntl @ 0002404c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fcntl(int __fd,int __cmd,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::geteuid @ 00024050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__uid_t geteuid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 00024054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::putchar @ 00024058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 0002405c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtoul @ 00024060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 00024064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 00024068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 0002406c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __fputc_unlocked(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00024070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 00024074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vfprintf @ 00024078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ioctl @ 0002407c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getgid @ 00024080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__gid_t getgid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::secure_getenv @ 00024084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void secure_getenv(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getuid @ 00024088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__uid_t getuid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::readdir @ 0002408c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent * readdir(DIR *__dirp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputc @ 00024090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getenv @ 00024094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::opendir @ 00024098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * opendir(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fileno @ 0002409c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fileno(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::tcgetattr @ 000240a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tcgetattr(int __fd,termios *__termios_p)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 000240a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 000240a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt @ 000240ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::lstat64 @ 000240b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int lstat64(char *__file,stat64 *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::isatty @ 000240b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int isatty(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::prctl @ 000240b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int prctl(int __option,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 000240bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


