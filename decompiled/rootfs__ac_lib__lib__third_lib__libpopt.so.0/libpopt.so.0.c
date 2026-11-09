// libpopt.so.0 — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 000116b8 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::stpcpy @ 000116dc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * stpcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_stpcpy_0002e00c)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::secure_getenv @ 000116e8 size=12 ===== */

void secure_getenv(void)

{
  (*(code *)PTR_secure_getenv_0002e010)();
  return;
}



/* ===== <EXTERNAL>::strcpy @ 000116f4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_0002e014)(__dest);
  return pcVar1;
}



/* ===== poptGetContext @ 00011700 size=12 ===== */

void poptGetContext(void)

{
  (*(code *)PTR_poptGetContext_0002e018)();
  return;
}



/* ===== <EXTERNAL>::ioctl @ 0001170c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_0002e01c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::getgid @ 00011718 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__gid_t getgid(void)

{
  __gid_t _Var1;
  
  _Var1 = (*(code *)PTR_getgid_0002e020)();
  return _Var1;
}



/* ===== <EXTERNAL>::random @ 00011724 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long random(void)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_random_0002e024)();
  return lVar1;
}



/* ===== <EXTERNAL>::strerror @ 00011730 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_0002e028)(__errnum);
  return pcVar1;
}



/* ===== poptReadConfigFile @ 0001173c size=12 ===== */

void poptReadConfigFile(void)

{
  (*(code *)PTR_poptReadConfigFile_0002e02c)();
  return;
}



/* ===== <EXTERNAL>::getpid @ 00011748 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_getpid_0002e030)();
  return _Var1;
}



/* ===== <EXTERNAL>::fgets @ 00011754 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_fgets_0002e034)(__s);
  return pcVar1;
}



/* ===== poptDupArgv @ 00011760 size=12 ===== */

void poptDupArgv(void)

{
  (*(code *)PTR_poptDupArgv_0002e038)();
  return;
}



/* ===== poptSaveBits @ 0001176c size=12 ===== */

void poptSaveBits(void)

{
  (*(code *)PTR_poptSaveBits_0002e03c)();
  return;
}



/* ===== poptPrintUsage @ 00011778 size=12 ===== */

void poptPrintUsage(void)

{
  (*(code *)PTR_poptPrintUsage_0002e040)();
  return;
}



/* ===== <EXTERNAL>::memcpy @ 00011784 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_0002e044)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::glob @ 00011790 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int glob(char *__pattern,int __flags,__errfunc *__errfunc,glob_t *__pglob)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_glob_0002e048)(__pattern);
  return iVar1;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 0001179c size=12 ===== */

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_0002e04c)();
  return;
}



/* ===== <EXTERNAL>::getuid @ 000117a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__uid_t getuid(void)

{
  __uid_t _Var1;
  
  _Var1 = (*(code *)PTR_getuid_0002e050)();
  return _Var1;
}



/* ===== <EXTERNAL>::malloc @ 000117b4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0002e054)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::vsnprintf @ 000117c0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vsnprintf_0002e058)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::strtoll @ 000117cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

longlong strtoll(char *__nptr,char **__endptr,int __base)

{
  longlong lVar1;
  
  lVar1 = (*(code *)PTR_strtoll_0002e05c)(__nptr);
  return lVar1;
}



/* ===== poptParseArgvString @ 000117d8 size=12 ===== */

void poptParseArgvString(void)

{
  (*(code *)PTR_poptParseArgvString_0002e060)();
  return;
}



/* ===== poptBitsChk @ 000117e4 size=12 ===== */

void poptBitsChk(void)

{
  (*(code *)PTR_poptBitsChk_0002e064)();
  return;
}



/* ===== <EXTERNAL>::lseek @ 000117f0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__off_t lseek(int __fd,__off_t __offset,int __whence)

{
  __off_t _Var1;
  
  _Var1 = (*(code *)PTR_lseek_0002e068)(__fd);
  return _Var1;
}



/* ===== poptFreeContext @ 000117fc size=12 ===== */

void poptFreeContext(void)

{
  (*(code *)PTR_poptFreeContext_0002e06c)();
  return;
}



/* ===== <EXTERNAL>::strrchr @ 00011808 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strrchr_0002e070)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::calloc @ 00011814 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_0002e074)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::strtod @ 00011820 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double strtod(char *__nptr,char **__endptr)

{
  undefined4 uVar1;
  undefined4 extraout_s1;
  
  uVar1 = (*(code *)PTR_strtod_0002e078)(__nptr);
  return (double)CONCAT44(extraout_s1,uVar1);
}



/* ===== <EXTERNAL>::fprintf @ 0001182c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_0002e07c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::strcat @ 00011838 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcat_0002e080)(__dest);
  return pcVar1;
}



/* ===== poptAddItem @ 00011844 size=12 ===== */

void poptAddItem(void)

{
  (*(code *)PTR_poptAddItem_0002e084)();
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00011850 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_0002e088)();
  return;
}



/* ===== poptFini @ 0001185c size=12 ===== */

void poptFini(void)

{
  (*(code *)PTR_poptFini_0002e08c)();
  return;
}



/* ===== poptSaveLongLong @ 00011868 size=12 ===== */

void poptSaveLongLong(void)

{
  (*(code *)PTR_poptSaveLongLong_0002e090)();
  return;
}



/* ===== poptSaveLong @ 00011874 size=12 ===== */

void poptSaveLong(void)

{
  (*(code *)PTR_poptSaveLong_0002e094)();
  return;
}



/* ===== <EXTERNAL>::strstr @ 00011880 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strstr_0002e098)(__haystack);
  return pcVar1;
}



/* ===== <EXTERNAL>::setgid @ 0001188c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setgid(__gid_t __gid)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setgid_0002e09c)(__gid);
  return iVar1;
}



/* ===== <EXTERNAL>::read @ 00011898 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_0002e0a0)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::strncmp @ 000118a4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_0002e0a4)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::strncpy @ 000118b0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_0002e0a8)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::realloc @ 000118bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_realloc_0002e0ac)(__ptr);
  return pvVar1;
}



/* ===== poptSaveInt @ 000118c8 size=12 ===== */

void poptSaveInt(void)

{
  (*(code *)PTR_poptSaveInt_0002e0b0)();
  return;
}



/* ===== <EXTERNAL>::strdup @ 000118d4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strdup(char *__s)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strdup_0002e0b4)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::memset @ 000118e0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0002e0b8)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::fnmatch @ 000118ec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fnmatch(char *__pattern,char *__name,int __flags)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fnmatch_0002e0bc)(__pattern);
  return iVar1;
}



/* ===== <EXTERNAL>::mbsrtowcs @ 000118f8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t mbsrtowcs(wchar_t *__dst,char **__src,size_t __len,mbstate_t *__ps)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_mbsrtowcs_0002e0c0)(__dst);
  return sVar1;
}



/* ===== poptSaveString @ 00011904 size=12 ===== */

void poptSaveString(void)

{
  (*(code *)PTR_poptSaveString_0002e0c4)();
  return;
}



/* ===== poptBitsDel @ 00011910 size=12 ===== */

void poptBitsDel(void)

{
  (*(code *)PTR_poptBitsDel_0002e0c8)();
  return;
}



/* ===== <EXTERNAL>::strcmp @ 0001191c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_0002e0cc)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::sprintf @ 00011928 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_0002e0d0)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::srandom @ 00011934 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void srandom(uint __seed)

{
  (*(code *)PTR_srandom_0002e0d4)(__seed);
  return;
}



/* ===== <EXTERNAL>::fputc @ 00011940 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputc_0002e0d8)(__c);
  return iVar1;
}



/* ===== poptBitsAdd @ 0001194c size=12 ===== */

void poptBitsAdd(void)

{
  (*(code *)PTR_poptBitsAdd_0002e0dc)();
  return;
}



/* ===== <EXTERNAL>::globfree @ 00011958 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void globfree(glob_t *__pglob)

{
  (*(code *)PTR_globfree_0002e0e0)(__pglob);
  return;
}



/* ===== <EXTERNAL>::stat @ 00011964 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat(char *__file,stat *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_stat_0002e0e4)(__file);
  return iVar1;
}



/* ===== poptSaveShort @ 00011970 size=12 ===== */

void poptSaveShort(void)

{
  (*(code *)PTR_poptSaveShort_0002e0e8)();
  return;
}



/* ===== <EXTERNAL>::fwrite @ 0001197c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_0002e0ec)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::access @ 00011988 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_access_0002e0f0)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 00011994 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_0002e0f4)();
  return piVar1;
}



/* ===== <EXTERNAL>::exit @ 000119a0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_0002e0f8)(__status);
  return;
}



/* ===== poptSaneFile @ 000119ac size=12 ===== */

void poptSaneFile(void)

{
  (*(code *)PTR_poptSaneFile_0002e0fc)();
  return;
}



/* ===== <EXTERNAL>::fileno @ 000119b8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fileno(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fileno_0002e100)(__stream);
  return iVar1;
}



/* ===== poptReadConfigFiles @ 000119c4 size=12 ===== */

void poptReadConfigFiles(void)

{
  (*(code *)PTR_poptReadConfigFiles_0002e104)();
  return;
}



/* ===== poptReadFile @ 000119d0 size=12 ===== */

void poptReadFile(void)

{
  (*(code *)PTR_poptReadFile_0002e108)();
  return;
}



/* ===== <EXTERNAL>::strlen @ 000119dc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_0002e10c)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::open @ 000119e8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open_0002e110)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::strchr @ 000119f4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_0002e114)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::fputs @ 00011a00 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_0002e118)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::execvp @ 00011a0c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int execvp(char *__file,char **__argv)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_execvp_0002e11c)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::setuid @ 00011a18 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setuid(__uid_t __uid)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setuid_0002e120)(__uid);
  return iVar1;
}



/* ===== poptPrintHelp @ 00011a24 size=12 ===== */

void poptPrintHelp(void)

{
  (*(code *)PTR_poptPrintHelp_0002e124)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00011a30 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_0002e128)();
  return;
}



/* ===== <EXTERNAL>::close @ 00011a3c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_0002e12c)(__fd);
  return iVar1;
}



/* ===== poptResetContext @ 00011a48 size=12 ===== */

void poptResetContext(void)

{
  (*(code *)PTR_poptResetContext_0002e130)();
  return;
}



/* ===== <EXTERNAL>::raise @ 00011a54 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_0002e134)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 00011a60 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0002e138)(__ptr);
  return;
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 00011a6c size=12 ===== */

void __fputc_unlocked(void)

{
  (*(code *)PTR___fputc_unlocked_0002e13c)();
  return;
}



/* ===== entry @ 00011a78 size=72 ===== */

void processEntry entry(void)

{
  code *pcVar1;
  
  if (DAT_00011ac4 + 0x11a90 == DAT_00011ac0 + 0x11a88) {
    return;
  }
  pcVar1 = *(code **)(DAT_00011ac8 + 0x11a98 + DAT_00011acc);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== _FINI_0 @ 00011b34 size=112 ===== */

void _FINI_0(void)

{
  int iVar1;
  
  iVar1 = DAT_00011ba8 + 0x11b50;
  if (*(char *)(DAT_00011ba4 + 0x11b44) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + DAT_00011bac) != 0) {
    __cxa_finalize(*(undefined4 *)(DAT_00011bb0 + 0x11b70));
  }
  entry();
  if (*(int *)(iVar1 + DAT_00011bb4) != 0) {
    __deregister_frame_info(DAT_00011bb8 + 0x11b90);
  }
  *(undefined1 *)(DAT_00011bbc + 0x11ba0) = 1;
  return;
}



/* ===== _INIT_0 @ 00011bc0 size=140 ===== */

void _INIT_0(void)

{
  code *pcVar1;
  
  if (*(int *)(DAT_00011bf8 + 0x11bd0 + DAT_00011bfc) != 0) {
    __register_frame_info(DAT_00011c04 + 0x11bf0,DAT_00011c00 + 0x11bec);
  }
  if (((DAT_00011b28 + 0x11ae8) - (DAT_00011b24 + 0x11ae0) >> 2) / 2 == 0) {
    return;
  }
  pcVar1 = *(code **)(DAT_00011b2c + 0x11af0 + DAT_00011b30);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== FUN_00011c08 @ 00011c08 size=52 ===== */

undefined4 FUN_00011c08(void *param_1)

{
  if (param_1 != (void *)0x0) {
    free(param_1);
  }
  return 0;
}



/* ===== poptSetExecPath @ 00011c3c size=100 ===== */

void poptSetExecPath(int param_1,char *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  char *pcVar2;
  
  uVar1 = FUN_00011c08(*(undefined4 *)(param_1 + 0x18c));
  *(undefined4 *)(param_1 + 0x18c) = uVar1;
  pcVar2 = strdup(param_2);
  *(char **)(param_1 + 0x18c) = pcVar2;
  *(undefined4 *)(param_1 + 400) = param_3;
  return;
}



/* ===== FUN_00011ca0 @ 00011ca0 size=308 ===== */

void FUN_00011ca0(undefined4 param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int *local_20;
  code *local_14;
  
  iVar2 = DAT_00011dd4 + 0x11cc0;
  local_20 = param_2;
  if (param_2 != (int *)0x0) {
    for (; ((*local_20 != 0 || ((char)local_20[1] != '\0')) || (local_20[3] != 0));
        local_20 = local_20 + 7) {
      local_14 = (code *)local_20[3];
      if (local_14 != (code *)0x0) {
        uVar1 = **(uint **)(iVar2 + DAT_00011dd8) & local_20[2];
        if (uVar1 == 4) {
          if (local_14 == *(code **)(iVar2 + DAT_00011ddc)) {
            local_14 = (code *)**(undefined4 **)(iVar2 + DAT_00011de0);
          }
          FUN_00011ca0(param_1,local_14);
        }
        else if ((uVar1 == 5) && (local_20[2] < 0)) {
          (*local_14)(param_1,0,0,0,local_20[5]);
        }
      }
    }
  }
  return;
}



/* ===== FUN_00011de4 @ 00011de4 size=312 ===== */

void FUN_00011de4(undefined4 param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int *local_20;
  code *local_14;
  
  iVar2 = DAT_00011f1c + 0x11e04;
  local_20 = param_2;
  if (param_2 != (int *)0x0) {
    for (; ((*local_20 != 0 || ((char)local_20[1] != '\0')) || (local_20[3] != 0));
        local_20 = local_20 + 7) {
      local_14 = (code *)local_20[3];
      if (local_14 != (code *)0x0) {
        uVar1 = **(uint **)(iVar2 + DAT_00011f20) & local_20[2];
        if (uVar1 == 4) {
          if (local_14 == *(code **)(iVar2 + DAT_00011f24)) {
            local_14 = (code *)**(undefined4 **)(iVar2 + DAT_00011f28);
          }
          FUN_00011de4(param_1,local_14);
        }
        else if ((uVar1 == 5) && ((local_20[2] & 0x40000000U) != 0)) {
          (*local_14)(param_1,1,0,0,local_20[5]);
        }
      }
    }
  }
  return;
}



/* ===== FUN_00011f2c @ 00011f2c size=620 ===== */

void FUN_00011f2c(int param_1,int *param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *local_28;
  code *local_1c;
  int *local_14;
  
  iVar3 = DAT_00012198 + 0x11f54;
  local_14 = (int *)0x0;
  local_1c = (code *)0x0;
  local_28 = param_2;
  if (param_2 != (int *)0x0) {
    for (; ((*local_28 != 0 || ((char)local_28[1] != '\0')) || (local_28[3] != 0));
        local_28 = local_28 + 7) {
      uVar2 = **(uint **)(iVar3 + DAT_0001219c) & local_28[2];
      if (uVar2 == 4) {
        if (local_28[3] != 0) {
          FUN_00011f2c(param_1,local_28[3],param_3,param_4,param_5);
        }
      }
      else if (uVar2 == 5) {
        if ((local_28[2] & 0x10000000U) == 0) {
          local_14 = local_28;
          local_1c = (code *)local_28[3];
        }
      }
      else if (((local_14 != (int *)0x0) && (local_1c != (code *)0x0)) &&
              (((((char)param_3[1] != '\0' && (((char)local_28[1] != '\0' && (param_5 != 0)))) &&
                ((char)param_3[1] == (char)local_28[1])) ||
               (((*param_3 != 0 && (*local_28 != 0)) &&
                (iVar1 = strcmp((char *)*param_3,(char *)*local_28), iVar1 == 0)))))) {
        iVar1 = param_4;
        if (local_14[5] != 0) {
          iVar1 = local_14[5];
        }
        (*local_1c)(param_1,2,param_3,*(undefined4 *)(*(int *)(param_1 + 0x140) + 0x10),iVar1);
        if ((local_14[2] & 0x8000000U) == 0) {
          return;
        }
      }
    }
  }
  return;
}



/* ===== poptGetContext @ 000121a8 size=532 ===== */

void * poptGetContext(char *param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  void *__s;
  void *pvVar1;
  int iVar2;
  char *pcVar3;
  
  __s = malloc(0x19c);
  if (__s == (void *)0x0) {
    __s = (void *)0x0;
  }
  else {
    memset(__s,0,0x19c);
    *(void **)((int)__s + 0x140) = __s;
    **(int **)((int)__s + 0x140) = param_2;
    *(undefined4 *)(*(int *)((int)__s + 0x140) + 4) = param_3;
    *(undefined4 *)(*(int *)((int)__s + 0x140) + 8) = 0;
    if ((param_5 & 2) == 0) {
      *(undefined4 *)(*(int *)((int)__s + 0x140) + 0xc) = 1;
    }
    pvVar1 = calloc(param_2 + 1,4);
    *(void **)((int)__s + 0x144) = pvVar1;
    *(int *)((int)__s + 0x14c) = param_2 + 1;
    *(undefined4 *)((int)__s + 0x154) = param_4;
    *(undefined4 *)((int)__s + 0x160) = 0;
    *(undefined4 *)((int)__s + 0x164) = 0;
    *(uint *)((int)__s + 0x168) = param_5;
    *(undefined4 *)((int)__s + 0x16c) = 0;
    *(undefined4 *)((int)__s + 0x170) = 0;
    *(undefined4 *)((int)__s + 0x174) = 0;
    *(int *)((int)__s + 0x180) = param_2 << 1;
    pvVar1 = calloc(*(size_t *)((int)__s + 0x180),4);
    *(void **)((int)__s + 0x178) = pvVar1;
    *(undefined4 *)((int)__s + 400) = 1;
    *(undefined4 *)((int)__s + 0x198) = 0;
    iVar2 = secure_getenv(DAT_000123bc + 0x12334);
    if ((iVar2 != 0) || (iVar2 = secure_getenv(DAT_000123c0 + 0x12350), iVar2 != 0)) {
      *(uint *)((int)__s + 0x168) = *(uint *)((int)__s + 0x168) | 4;
    }
    if (param_1 != (char *)0x0) {
      pcVar3 = strdup(param_1);
      *(char **)((int)__s + 0x15c) = pcVar3;
    }
    FUN_00011ca0(__s,*(undefined4 *)((int)__s + 0x154));
  }
  return __s;
}



/* ===== FUN_000123c4 @ 000123c4 size=112 ===== */

void FUN_000123c4(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00011c08(*(undefined4 *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar1 = FUN_00011c08(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = uVar1;
  uVar1 = FUN_00011c08(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



/* ===== poptResetContext @ 00012434 size=600 ===== */

void poptResetContext(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_14;
  
  if (param_1 != 0) {
    while (param_1 < *(uint *)(param_1 + 0x140)) {
      iVar2 = *(int *)(param_1 + 0x140);
      *(int *)(param_1 + 0x140) = iVar2 + -0x20;
      FUN_000123c4(iVar2);
    }
    iVar2 = *(int *)(param_1 + 0x140);
    uVar1 = FUN_00011c08(*(undefined4 *)(*(int *)(param_1 + 0x140) + 8));
    *(undefined4 *)(iVar2 + 8) = uVar1;
    *(undefined4 *)(*(int *)(param_1 + 0x140) + 0x18) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x140) + 0x14) = 0;
    iVar2 = *(int *)(param_1 + 0x140);
    uVar1 = FUN_00011c08(*(undefined4 *)(*(int *)(param_1 + 0x140) + 0x10));
    *(undefined4 *)(iVar2 + 0x10) = uVar1;
    if ((*(uint *)(param_1 + 0x168) & 2) == 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x140) + 0xc) = 1;
    }
    else {
      *(undefined4 *)(*(int *)(param_1 + 0x140) + 0xc) = 0;
    }
    for (local_14 = 0; local_14 < *(int *)(param_1 + 0x148); local_14 = local_14 + 1) {
      iVar2 = *(int *)(param_1 + 0x144);
      uVar1 = FUN_00011c08(*(undefined4 *)(*(int *)(param_1 + 0x144) + local_14 * 4));
      *(undefined4 *)(iVar2 + local_14 * 4) = uVar1;
    }
    *(undefined4 *)(param_1 + 0x148) = 0;
    *(undefined4 *)(param_1 + 0x150) = 0;
    *(undefined4 *)(param_1 + 0x158) = 0;
    *(undefined4 *)(param_1 + 0x188) = 0;
    uVar1 = FUN_00011c08(*(undefined4 *)(param_1 + 0x174));
    *(undefined4 *)(param_1 + 0x174) = uVar1;
    if (*(int *)(param_1 + 0x178) != 0) {
      for (local_14 = 0; local_14 < *(int *)(param_1 + 0x17c); local_14 = local_14 + 1) {
        iVar2 = *(int *)(param_1 + 0x178);
        uVar1 = FUN_00011c08(*(undefined4 *)(*(int *)(param_1 + 0x178) + local_14 * 4));
        *(undefined4 *)(iVar2 + local_14 * 4) = uVar1;
      }
    }
    *(undefined4 *)(param_1 + 0x17c) = 0;
    uVar1 = FUN_00011c08(*(undefined4 *)(param_1 + 0x198));
    *(undefined4 *)(param_1 + 0x198) = uVar1;
  }
  return;
}



/* ===== FUN_0001268c @ 0001268c size=724 ===== */

undefined4 FUN_0001268c(int param_1,char *param_2,char param_3)

{
  void *pvVar1;
  size_t sVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  char *local_10;
  int local_c;
  
  if ((*(int *)(param_1 + 0x16c) == 0) || (*(int *)(param_1 + 0x170) < 1)) {
    uVar4 = 0;
  }
  else {
    local_c = *(int *)(param_1 + 0x170);
    do {
      local_c = local_c + -1;
      if (local_c < 0) break;
      piVar5 = (int *)(*(int *)(param_1 + 0x16c) + local_c * 0x24);
    } while (((param_2 != (char *)0x0) &&
             ((*piVar5 == 0 || (iVar6 = strcmp(param_2,(char *)*piVar5), iVar6 != 0)))) ||
            (param_3 != (char)piVar5[1]));
    if (local_c < 0) {
      uVar4 = 0;
    }
    else if ((*(uint *)(param_1 + 0x168) & 1) == 0) {
      if (*(int *)(param_1 + 0x188) == 0) {
        *(int *)(param_1 + 0x188) = *(int *)(param_1 + 0x16c) + local_c * 0x24;
        uVar4 = 1;
      }
      else {
        if (*(int *)(param_1 + 0x180) <= *(int *)(param_1 + 0x17c) + 1) {
          *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + 10;
          pvVar1 = realloc(*(void **)(param_1 + 0x178),*(int *)(param_1 + 0x180) << 2);
          *(void **)(param_1 + 0x178) = pvVar1;
        }
        iVar6 = *(int *)(param_1 + 0x17c);
        *(int *)(param_1 + 0x17c) = iVar6 + 1;
        if (*(int *)(param_1 + 0x178) != 0) {
          if (param_2 == (char *)0x0) {
            sVar2 = 3;
          }
          else {
            sVar2 = strlen(param_2);
            sVar2 = sVar2 + 3;
          }
          puVar3 = malloc(sVar2);
          if (puVar3 == (undefined1 *)0x0) {
            *(undefined4 *)(*(int *)(param_1 + 0x178) + iVar6 * 4) = 0;
          }
          else {
            *(undefined1 **)(*(int *)(param_1 + 0x178) + iVar6 * 4) = puVar3;
            *puVar3 = 0x2d;
            if (param_2 == (char *)0x0) {
              local_10 = puVar3 + 2;
              puVar3[1] = param_3;
            }
            else {
              *(undefined2 *)(puVar3 + 1) = *(undefined2 *)(DAT_00012960 + 0x128f0);
              local_10 = stpcpy(puVar3 + 2,param_2);
            }
            *local_10 = '\0';
          }
        }
        uVar4 = 1;
      }
    }
    else {
      uVar4 = 1;
    }
  }
  return uVar4;
}



/* ===== FUN_00012964 @ 00012964 size=368 ===== */

bool FUN_00012964(undefined4 *param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;
  size_t local_1c;
  char *local_18;
  char *local_c;
  
  pcVar3 = (char *)*param_1;
  if ((pcVar3 == (char *)0x0) || (param_2 == (char *)0x0)) {
    bVar4 = false;
  }
  else {
    local_1c = param_3;
    local_18 = param_2;
    local_c = pcVar3;
    if ((param_1[2] & 0x200000) != 0) {
      if (((*pcVar3 == 'n') && (pcVar3[1] == 'o')) && (local_c = pcVar3 + 2, *local_c == '-')) {
        local_c = pcVar3 + 3;
      }
      if ((*param_2 == 'n') && (param_2[1] == 'o')) {
        local_18 = param_2 + 2;
        local_1c = param_3 - 2;
        if (*local_18 == '-') {
          local_18 = param_2 + 3;
          local_1c = param_3 - 3;
        }
      }
    }
    sVar1 = strlen(local_c);
    if (local_1c == sVar1) {
      iVar2 = strncmp(local_c,local_18,local_1c);
      bVar4 = iVar2 == 0;
    }
    else {
      bVar4 = false;
    }
  }
  return bVar4;
}



/* ===== FUN_00012ad4 @ 00012ad4 size=1040 ===== */

int FUN_00012ad4(int param_1,int param_2,undefined4 param_3,char param_4,char *param_5)

{
  int iVar1;
  int *piVar2;
  int local_14;
  void *local_10;
  int local_c;
  
  piVar2 = *(int **)(*(int *)(param_1 + 0x140) + 0x18);
  if (piVar2 != (int *)0x0) {
    if (((param_2 != 0) && (*piVar2 != 0)) &&
       (iVar1 = FUN_00012964(piVar2,param_2,param_3), iVar1 != 0)) {
      return 0;
    }
    if ((param_4 != '\0') && (param_4 == (char)piVar2[1])) {
      return 0;
    }
  }
  if ((*(int *)(param_1 + 0x160) == 0) || (*(int *)(param_1 + 0x164) < 1)) {
    iVar1 = 0;
  }
  else {
    local_c = *(int *)(param_1 + 0x164);
    do {
      while( true ) {
        local_c = local_c + -1;
        if (local_c < 0) goto LAB_00012c4c;
        piVar2 = (int *)(*(int *)(param_1 + 0x160) + local_c * 0x24);
        if (param_2 == 0) break;
        if ((*piVar2 != 0) && (iVar1 = FUN_00012964(piVar2,param_2,param_3), iVar1 != 0))
        goto LAB_00012c4c;
      }
    } while (param_4 != (char)piVar2[1]);
LAB_00012c4c:
    if (local_c < 0) {
      iVar1 = 0;
    }
    else if (*(int *)(param_1 + 0x140) - param_1 == 0x120) {
      iVar1 = -0xd;
    }
    else {
      if (((param_2 == 0) && (param_5 != (char *)0x0)) && (*param_5 != '\0')) {
        *(char **)(*(int *)(param_1 + 0x140) + 0x14) = param_5;
      }
      *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 0x20;
      *(undefined4 *)(*(int *)(param_1 + 0x140) + 0xc) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x140) + 0x1c) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x140) + 0x10) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x140) + 0x14) = 0;
      *(int *)(*(int *)(param_1 + 0x140) + 0x18) = *(int *)(param_1 + 0x160) + local_c * 0x24;
      local_14 = *(int *)(*(int *)(*(int *)(param_1 + 0x140) + 0x18) + 0x1c);
      if (((param_2 == 0) || (param_5 == (char *)0x0)) || (*param_5 == '\0')) {
        local_10 = *(void **)(*(int *)(*(int *)(param_1 + 0x140) + 0x18) + 0x20);
      }
      else {
        local_10 = malloc((local_14 + 2) * 4);
        if (local_10 == (void *)0x0) {
          local_10 = *(void **)(*(int *)(*(int *)(param_1 + 0x140) + 0x18) + 0x20);
        }
        else {
          for (local_c = 0; local_c < local_14; local_c = local_c + 1) {
            *(undefined4 *)((int)local_10 + local_c * 4) =
                 *(undefined4 *)
                  (*(int *)(*(int *)(*(int *)(param_1 + 0x140) + 0x18) + 0x20) + local_c * 4);
          }
          *(char **)((int)local_10 + local_14 * 4) = param_5;
          *(undefined4 *)((int)local_10 + (local_14 + 1) * 4) = 0;
          local_14 = local_14 + 1;
        }
      }
      iVar1 = poptDupArgv(local_14,local_10,*(undefined4 *)(param_1 + 0x140),
                          *(int *)(param_1 + 0x140) + 4);
      if ((local_10 != (void *)0x0) &&
         (local_10 != *(void **)(*(int *)(*(int *)(param_1 + 0x140) + 0x18) + 0x20))) {
        free(local_10);
      }
      *(undefined4 *)(*(int *)(param_1 + 0x140) + 8) = 0;
      if (iVar1 == 0) {
        iVar1 = 1;
      }
    }
  }
  return iVar1;
}



/* ===== FUN_00012ee4 @ 00012ee4 size=488 ===== */

char * FUN_00012ee4(char *param_1)

{
  char *pcVar1;
  size_t sVar2;
  size_t sVar3;
  char *pcVar4;
  int iVar5;
  char *local_1c;
  char *local_18;
  char *local_14;
  
  local_14 = (char *)0x0;
  if (param_1 == (char *)0x0) {
    local_1c = (char *)0x0;
  }
  else {
    pcVar1 = strchr(param_1,0x2f);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = (char *)secure_getenv(DAT_000130cc + 0x12f54);
      if ((pcVar1 == (char *)0x0) || (pcVar1 = strdup(pcVar1), pcVar1 == (char *)0x0)) {
        local_1c = (char *)0x0;
      }
      else {
        sVar2 = strlen(pcVar1);
        sVar3 = strlen(param_1);
        local_1c = malloc(sVar2 + sVar3 + 2);
        pcVar4 = pcVar1;
        if (local_1c != (char *)0x0) {
          while ((local_14 = pcVar4, local_14 != (char *)0x0 && (*local_14 != '\0'))) {
            pcVar4 = strchr(local_14,0x3a);
            local_18 = pcVar4;
            if (pcVar4 != (char *)0x0) {
              local_18 = pcVar4 + 1;
              *pcVar4 = '\0';
            }
            pcVar4 = stpcpy(local_1c,local_14);
            *(undefined2 *)pcVar4 = *(undefined2 *)(DAT_000130d0 + 0x13020);
            strcpy(pcVar4 + 1,param_1);
            iVar5 = access(local_1c,1);
            if (iVar5 == 0) break;
            local_14 = local_18;
            pcVar4 = local_14;
          }
        }
        if (((local_14 == (char *)0x0) || (*local_14 == '\0')) && (local_1c != (char *)0x0)) {
          local_1c = (char *)FUN_00011c08(local_1c);
        }
        FUN_00011c08(pcVar1);
      }
    }
    else {
      local_1c = strdup(param_1);
    }
  }
  return local_1c;
}



/* ===== FUN_000130d4 @ 000130d4 size=1080 ===== */

undefined4 FUN_000130d4(int param_1)

{
  char *pcVar1;
  char **__argv;
  size_t sVar2;
  size_t sVar3;
  char *pcVar4;
  __gid_t __gid;
  __uid_t __uid;
  int iVar5;
  undefined4 local_18;
  int local_14;
  
  iVar5 = *(int *)(param_1 + 0x188);
  local_18 = 0xfffffff0;
  if (iVar5 == 0) {
    local_18 = 0xfffffff6;
  }
  else if (((*(int *)(iVar5 + 0x20) == 0) || (*(int *)(iVar5 + 0x1c) < 1)) ||
          ((*(int *)(param_1 + 400) == 0 &&
           (pcVar1 = strchr((char *)**(undefined4 **)(iVar5 + 0x20),0x2f), pcVar1 != (char *)0x0))))
  {
    local_18 = 0xfffffff6;
  }
  else {
    __argv = malloc((*(int *)(iVar5 + 0x1c) + 6 + *(int *)(param_1 + 0x148) +
                    *(int *)(param_1 + 0x17c)) * 4);
    if (__argv == (char **)0x0) {
      local_18 = 0xffffffeb;
    }
    else {
      pcVar1 = strchr((char *)**(undefined4 **)(iVar5 + 0x20),0x2f);
      if ((pcVar1 == (char *)0x0) && (*(int *)(param_1 + 0x18c) != 0)) {
        sVar2 = strlen(*(char **)(param_1 + 0x18c));
        sVar3 = strlen((char *)**(undefined4 **)(iVar5 + 0x20));
        pcVar1 = malloc(sVar2 + sVar3 + 2);
        if (pcVar1 != (char *)0x0) {
          pcVar4 = stpcpy(pcVar1,*(char **)(param_1 + 0x18c));
          *(undefined2 *)pcVar4 = *(undefined2 *)(DAT_0001350c + 0x1326c);
          strcpy(pcVar4 + 1,(char *)**(undefined4 **)(iVar5 + 0x20));
        }
        *__argv = pcVar1;
      }
      else {
        pcVar1 = (char *)FUN_00012ee4(**(undefined4 **)(iVar5 + 0x20));
        *__argv = pcVar1;
      }
      local_14 = 1;
      if (*__argv == (char *)0x0) {
        local_18 = 0xfffffff6;
      }
      else {
        if (1 < *(int *)(iVar5 + 0x1c)) {
          memcpy(__argv + 1,(void *)(*(int *)(iVar5 + 0x20) + 4),(*(int *)(iVar5 + 0x1c) + -1) * 4);
          local_14 = *(int *)(iVar5 + 0x1c);
        }
        if ((*(int *)(param_1 + 0x178) != 0) && (0 < *(int *)(param_1 + 0x17c))) {
          memcpy(__argv + local_14,*(void **)(param_1 + 0x178),*(int *)(param_1 + 0x17c) << 2);
          local_14 = local_14 + *(int *)(param_1 + 0x17c);
        }
        if ((*(int *)(param_1 + 0x144) != 0) && (0 < *(int *)(param_1 + 0x148))) {
          memcpy(__argv + local_14,*(void **)(param_1 + 0x144),*(int *)(param_1 + 0x148) << 2);
          local_14 = local_14 + *(int *)(param_1 + 0x148);
        }
        __argv[local_14] = (char *)0x0;
        __gid = getgid();
        iVar5 = setgid(__gid);
        if (iVar5 == 0) {
          __uid = getuid();
          iVar5 = setuid(__uid);
          if (iVar5 == 0) {
            execvp(*__argv,__argv);
            pcVar1 = strdup(*__argv);
            *(char **)(param_1 + 0x174) = pcVar1;
          }
        }
      }
      if (__argv != (char **)0x0) {
        if (*__argv != (char *)0x0) {
          free(*__argv);
        }
        free(__argv);
      }
    }
  }
  return local_18;
}



/* ===== FUN_00013510 @ 00013510 size=760 ===== */

int * FUN_00013510(int *param_1,char *param_2,undefined4 param_3,char param_4,int *param_5,
                  int *param_6,int param_7)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char local_2d;
  int *local_24;
  int local_20;
  int local_1c;
  int *local_14;
  
  iVar4 = DAT_00013808 + 0x13538;
  local_14 = (int *)0x0;
  local_1c = 0;
  local_2d = param_4;
  local_24 = param_1;
  if ((((param_7 < 0) && (param_4 == '\0')) && (param_2 != (char *)0x0)) && (*param_2 == '\0')) {
    local_2d = '-';
  }
  for (; ((*local_24 != 0 || ((char)local_24[1] != '\0')) || (local_24[3] != 0));
      local_24 = local_24 + 7) {
    local_20 = local_24[3];
    uVar3 = **(uint **)(iVar4 + DAT_0001380c) & local_24[2];
    if (uVar3 == 4) {
      if (local_20 == *(int *)(iVar4 + DAT_00013810)) {
        local_20 = **(int **)(iVar4 + DAT_00013814);
      }
      if ((local_20 != 0) &&
         (piVar1 = (int *)FUN_00013510(local_20,param_2,param_3,local_2d,param_5,param_6,param_7),
         piVar1 != (int *)0x0)) {
        if ((param_5 != (int *)0x0) &&
           (((*param_5 != 0 && (param_6 != (int *)0x0)) && (*param_6 == 0)))) {
          *param_6 = local_24[5];
        }
        return piVar1;
      }
    }
    else if (uVar3 == 5) {
      local_14 = local_24;
      local_1c = local_24[3];
    }
    else if ((((param_2 != (char *)0x0) && (*local_24 != 0)) &&
             (((-1 < param_7 || (local_24[2] < 0)) &&
              (iVar2 = FUN_00012964(local_24,param_2,param_3), iVar2 != 0)))) ||
            ((local_2d != '\0' && (local_2d == (char)local_24[1])))) break;
  }
  if ((*local_24 == 0) && ((char)local_24[1] == '\0')) {
    return (int *)0x0;
  }
  if (param_5 != (int *)0x0) {
    if (local_14 == (int *)0x0) {
      local_1c = 0;
    }
    *param_5 = local_1c;
  }
  if (param_6 == (int *)0x0) {
    return local_24;
  }
  if ((local_14 == (int *)0x0) || ((local_14[2] & 0x20000000U) != 0)) {
    iVar4 = 0;
  }
  else {
    iVar4 = local_14[5];
  }
  *param_6 = iVar4;
  return local_24;
}



/* ===== FUN_00013818 @ 00013818 size=592 ===== */

int FUN_00013818(uint *param_1,int param_2,int param_3)

{
  void *pvVar1;
  int local_20;
  uint local_14;
  int local_10;
  uint *local_c;
  
  local_c = (uint *)param_1[0x50];
  local_20 = param_2;
  do {
    local_10 = 0;
    for (; (local_c[3] == *local_c && (param_1 < local_c)); local_c = local_c + -8) {
    }
    if ((local_c[3] == *local_c) && (local_c == param_1)) {
      return 0;
    }
    if (local_c[1] != 0) {
      for (local_14 = local_c[3]; (int)local_14 < (int)*local_c; local_14 = local_14 + 1) {
        if ((((local_c[2] == 0) ||
             ((1 << (local_14 & 0x1f) & *(uint *)(local_c[2] + (local_14 >> 5) * 4)) == 0)) &&
            (**(char **)(local_c[1] + local_14 * 4) != '-')) &&
           (local_20 = local_20 + -1, local_20 == 0)) {
          local_10 = *(int *)(local_c[1] + local_14 * 4);
          if (param_3 != 0) {
            if (local_c[2] == 0) {
              pvVar1 = calloc((*local_c >> 5) + 1,4);
              local_c[2] = (uint)pvVar1;
            }
            if (local_c[2] != 0) {
              *(uint *)(local_c[2] + (local_14 >> 5) * 4) =
                   *(uint *)(local_c[2] + (local_14 >> 5) * 4) | 1 << (local_14 & 0x1f);
            }
          }
          break;
        }
      }
    }
    if (param_1 < local_c) {
      local_c = local_c + -8;
    }
    if (local_10 != 0) {
      return local_10;
    }
  } while( true );
}



/* ===== FUN_00013a68 @ 00013a68 size=544 ===== */

char * FUN_00013a68(undefined4 param_1,char *param_2)

{
  char cVar1;
  size_t sVar2;
  char *pcVar3;
  char *local_30;
  size_t local_18;
  char *local_14;
  char *local_10;
  char *local_c;
  
  local_c = (char *)0x0;
  local_18 = strlen(param_2);
  local_18 = local_18 + 1;
  local_14 = malloc(local_18);
  if (local_14 == (char *)0x0) {
    pcVar3 = (char *)0x0;
  }
  else {
    *local_14 = '\0';
    local_30 = param_2;
    local_10 = local_14;
    while( true ) {
      cVar1 = *local_30;
      if (cVar1 == '\0') break;
      if ((((cVar1 == '!') && (local_30[1] == '#')) && (local_30[2] == ':')) &&
         ((local_30[3] == '+' &&
          ((local_c != (char *)0x0 ||
           (local_c = (char *)FUN_00013818(param_1,1,1), local_c != (char *)0x0)))))) {
        sVar2 = strlen(local_c);
        local_18 = local_18 + sVar2;
        pcVar3 = realloc(local_10,local_18);
        if (pcVar3 == (char *)0x0) {
          free(local_10);
          return (char *)0x0;
        }
        local_14 = stpcpy(pcVar3 + ((int)local_14 - (int)local_10),local_c);
        local_30 = local_30 + 4;
        local_10 = pcVar3;
      }
      else {
        *local_14 = cVar1;
        local_30 = local_30 + 1;
        local_14 = local_14 + 1;
      }
    }
    *local_14 = '\0';
    pcVar3 = local_10;
    if ((local_14 + 1 < local_10 + local_18) &&
       (pcVar3 = realloc(local_10,(int)(local_14 + 1) - (int)local_10), pcVar3 == (char *)0x0)) {
      free(local_10);
    }
  }
  return pcVar3;
}



/* ===== FUN_00013c88 @ 00013c88 size=164 ===== */

void FUN_00013c88(uint *param_1,uint param_2)

{
  void *pvVar1;
  
  if (param_1[0x66] == 0) {
    pvVar1 = calloc((*param_1 >> 5) + 1,4);
    param_1[0x66] = (uint)pvVar1;
  }
  if (param_1[0x66] != 0) {
    *(uint *)(param_1[0x66] + (param_2 >> 5) * 4) =
         *(uint *)(param_1[0x66] + (param_2 >> 5) * 4) | 1 << (param_2 & 0x1f);
  }
  return;
}



/* ===== FUN_00013d2c @ 00013d2c size=296 ===== */

undefined4 FUN_00013d2c(int *param_1)

{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = DAT_00013e54 + 0x13d48;
  if (param_1 == (int *)0x0) {
    uVar3 = 0xffffffec;
  }
  else {
    if (*param_1 == 0) {
      if (**(int **)(iVar2 + DAT_00013e58) == 0) {
        **(undefined4 **)(iVar2 + DAT_00013e58) = 0x400;
        **(undefined4 **)(iVar2 + DAT_00013e5c) = 0x600;
      }
      if (**(int **)(iVar2 + DAT_00013e5c) == 0) {
        **(uint **)(iVar2 + DAT_00013e5c) = (uint)(**(int **)(iVar2 + DAT_00013e58) * 3) >> 1;
      }
      if ((**(int **)(iVar2 + DAT_00013e60) == 0) || (0x20 < **(uint **)(iVar2 + DAT_00013e60))) {
        **(undefined4 **)(iVar2 + DAT_00013e60) = 0x10;
      }
      pvVar1 = calloc((**(int **)(iVar2 + DAT_00013e5c) - 1U >> 5) + 1,4);
      *param_1 = (int)pvVar1;
    }
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== poptBitsAdd @ 00013e64 size=300 ===== */

undefined4 poptBitsAdd(int param_1,char *param_2)

{
  uint extraout_r1;
  undefined4 uVar1;
  int iVar2;
  int local_24;
  int local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  
  iVar2 = DAT_00013f90 + 0x13e84;
  if (param_2 == (char *)0x0) {
    local_14 = 0;
  }
  else {
    local_14 = strlen(param_2);
  }
  local_20 = 0;
  local_24 = 0;
  if ((param_1 == 0) || (local_14 == 0)) {
    uVar1 = 0xffffffec;
  }
  else {
    FUN_0001b0cc(param_2,local_14,&local_20,&local_24);
    for (local_14 = 0; local_14 < **(uint **)(iVar2 + DAT_00013f98); local_14 = local_14 + 1) {
      local_18 = local_14 * local_24 + local_20;
      FUN_0001cdc0(local_18,**(undefined4 **)(iVar2 + DAT_00013f94));
      *(uint *)(param_1 + (extraout_r1 >> 5) * 4) =
           *(uint *)(param_1 + (extraout_r1 >> 5) * 4) | 1 << (extraout_r1 & 0x1f);
      local_1c = extraout_r1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== poptBitsChk @ 00013f9c size=320 ===== */

undefined4 poptBitsChk(int param_1,char *param_2)

{
  uint extraout_r1;
  int iVar1;
  int local_28;
  int local_24;
  uint local_20;
  int local_1c;
  undefined4 local_18;
  uint local_14;
  
  iVar1 = DAT_000140dc + 0x13fbc;
  if (param_2 == (char *)0x0) {
    local_14 = 0;
  }
  else {
    local_14 = strlen(param_2);
  }
  local_24 = 0;
  local_28 = 0;
  local_18 = 1;
  if ((param_1 == 0) || (local_14 == 0)) {
    local_18 = 0xffffffec;
  }
  else {
    FUN_0001b0cc(param_2,local_14,&local_24,&local_28);
    for (local_14 = 0; local_14 < **(uint **)(iVar1 + DAT_000140e4); local_14 = local_14 + 1) {
      local_1c = local_14 * local_28 + local_24;
      FUN_0001cdc0(local_1c,**(undefined4 **)(iVar1 + DAT_000140e0));
      if ((*(uint *)(param_1 + (extraout_r1 >> 5) * 4) >> (extraout_r1 & 0x1f) & 1) == 0) {
        return 0;
      }
      local_20 = extraout_r1;
    }
  }
  return local_18;
}



/* ===== poptBitsClr @ 000140e8 size=124 ===== */

undefined4 poptBitsClr(void *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (void *)0x0) {
    uVar1 = 0xffffffec;
  }
  else {
    memset(param_1,0,
           ((**(int **)(DAT_00014164 + 0x14104 + DAT_00014168) - 1U >> 5) + 1) *
           *(int *)(DAT_0001416c + 0x1413c));
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== poptBitsDel @ 00014170 size=304 ===== */

undefined4 poptBitsDel(int param_1,char *param_2)

{
  uint extraout_r1;
  undefined4 uVar1;
  int iVar2;
  int local_24;
  int local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  
  iVar2 = DAT_000142a0 + 0x14190;
  if (param_2 == (char *)0x0) {
    local_14 = 0;
  }
  else {
    local_14 = strlen(param_2);
  }
  local_20 = 0;
  local_24 = 0;
  if ((param_1 == 0) || (local_14 == 0)) {
    uVar1 = 0xffffffec;
  }
  else {
    FUN_0001b0cc(param_2,local_14,&local_20,&local_24);
    for (local_14 = 0; local_14 < **(uint **)(iVar2 + DAT_000142a8); local_14 = local_14 + 1) {
      local_18 = local_14 * local_24 + local_20;
      FUN_0001cdc0(local_18,**(undefined4 **)(iVar2 + DAT_000142a4));
      *(uint *)(param_1 + (extraout_r1 >> 5) * 4) =
           *(uint *)(param_1 + (extraout_r1 >> 5) * 4) & ~(1 << (extraout_r1 & 0x1f));
      local_1c = extraout_r1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== poptBitsIntersect @ 000142ac size=304 ===== */

uint poptBitsIntersect(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint local_10;
  uint local_c;
  
  local_c = 0;
  iVar2 = **(int **)(DAT_000143dc + 0x142cc + DAT_000143e0);
  if (((param_1 == (int *)0x0) || (param_2 == 0)) || (iVar1 = FUN_00013d2c(param_1), iVar1 != 0)) {
    uVar3 = 0xffffffec;
  }
  else {
    iVar1 = *param_1;
    for (local_10 = 0; local_10 < (iVar2 - 1U >> 5) + 1; local_10 = local_10 + 1) {
      *(uint *)(iVar1 + local_10 * 4) =
           *(uint *)(param_2 + local_10 * 4) & *(uint *)(iVar1 + local_10 * 4);
      local_c = local_c | *(uint *)(iVar1 + local_10 * 4);
    }
    uVar3 = (uint)(local_c != 0);
  }
  return uVar3;
}



/* ===== poptBitsUnion @ 000143e4 size=304 ===== */

uint poptBitsUnion(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint local_10;
  uint local_c;
  
  local_c = 0;
  iVar2 = **(int **)(DAT_00014514 + 0x14404 + DAT_00014518);
  if (((param_1 == (int *)0x0) || (param_2 == 0)) || (iVar1 = FUN_00013d2c(param_1), iVar1 != 0)) {
    uVar3 = 0xffffffec;
  }
  else {
    iVar1 = *param_1;
    for (local_10 = 0; local_10 < (iVar2 - 1U >> 5) + 1; local_10 = local_10 + 1) {
      *(uint *)(iVar1 + local_10 * 4) =
           *(uint *)(iVar1 + local_10 * 4) | *(uint *)(param_2 + local_10 * 4);
      local_c = local_c | *(uint *)(iVar1 + local_10 * 4);
    }
    uVar3 = (uint)(local_c != 0);
  }
  return uVar3;
}



/* ===== poptBitsArgs @ 0001451c size=280 ===== */

int poptBitsArgs(int param_1,undefined4 *param_2)

{
  int iVar1;
  int local_10;
  int *local_c;
  
  local_10 = 0;
  if ((((param_1 == 0) || (param_2 == (undefined4 *)0x0)) ||
      (iVar1 = FUN_00013d2c(param_2), iVar1 != 0)) ||
     ((*(int *)(param_1 + 0x144) == 0 || (*(int *)(param_1 + 0x148) == *(int *)(param_1 + 0x150)))))
  {
    local_10 = -0x14;
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 0x144) + *(int *)(param_1 + 0x148) * 4) = 0;
    local_c = (int *)(*(int *)(param_1 + 0x144) + *(int *)(param_1 + 0x150) * 4);
    while ((*local_c != 0 && (local_10 = poptBitsAdd(*param_2,*local_c), local_10 == 0))) {
      local_c = local_c + 1;
    }
  }
  return local_10;
}



/* ===== poptSaveBits @ 00014634 size=436 ===== */

int poptSaveBits(undefined4 *param_1,undefined4 param_2,char *param_3)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  int local_10;
  char *local_c;
  
  local_10 = 0;
  if ((((param_1 == (undefined4 *)0x0) || (param_3 == (char *)0x0)) || (*param_3 == '\0')) ||
     (iVar2 = FUN_00013d2c(param_1), iVar2 != 0)) {
    local_10 = -0x14;
  }
  else {
    pcVar3 = strdup(param_3);
    local_c = pcVar3;
    do {
      do {
        pcVar1 = local_c;
        if ((local_c == (char *)0x0) || (*local_c == '\0')) goto LAB_000147cc;
        for (; (*local_c != '\0' && (*local_c != ',')); local_c = local_c + 1) {
        }
        if (*local_c != '\0') {
          *local_c = '\0';
          local_c = local_c + 1;
        }
      } while (*pcVar1 == '\0');
      if (*pcVar1 == '!') {
        local_10 = poptBitsChk(*param_1,pcVar1 + 1);
        if (0 < local_10) {
          local_10 = poptBitsDel(*param_1,pcVar1 + 1);
        }
      }
      else {
        local_10 = poptBitsAdd(*param_1,pcVar1);
      }
    } while (local_10 == 0);
LAB_000147cc:
    FUN_00011c08(pcVar3);
  }
  return local_10;
}



/* ===== poptSaveString @ 000147e8 size=276 ===== */

undefined4 poptSaveString(int *param_1,undefined4 param_2,char *param_3)

{
  void *pvVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_14;
  
  local_14 = 0;
  if ((param_1 == (int *)0x0) || (param_3 == (char *)0x0)) {
    uVar4 = 0xffffffec;
  }
  else {
    if (*param_1 != 0) {
      for (; *(int *)(*param_1 + local_14 * 4) != 0; local_14 = local_14 + 1) {
      }
    }
    pvVar1 = realloc((void *)*param_1,(local_14 + 2) * 4);
    *param_1 = (int)pvVar1;
    if (*param_1 != 0) {
      iVar3 = *param_1;
      pcVar2 = strdup(param_3);
      *(char **)(iVar3 + local_14 * 4) = pcVar2;
      *(undefined4 *)(*param_1 + (local_14 + 1) * 4) = 0;
    }
    uVar4 = 0;
  }
  return uVar4;
}



/* ===== FUN_000148fc @ 000148fc size=140 ===== */

undefined8 FUN_000148fc(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  long lVar2;
  uint extraout_r2;
  int extraout_r3;
  
  if (*(int *)(DAT_00014988 + 0x14918) != 0) {
    uVar1 = getpid();
    srandom(uVar1);
    uVar1 = random();
    srandom(uVar1);
    *(undefined4 *)(DAT_0001498c + 0x1494c) = 0;
  }
  lVar2 = random();
  FUN_0001cde0(lVar2,lVar2 >> 0x1f,param_1,param_2);
  return CONCAT44(extraout_r3 + (uint)(0xfffffffe < extraout_r2),extraout_r2 + 1);
}



/* ===== poptSaveLongLong @ 00014990 size=348 ===== */

undefined4 poptSaveLongLong(uint *param_1,uint param_2,int param_3,int param_4)

{
  longlong lVar1;
  uint local_20;
  uint uStack_1c;
  
  if ((param_1 != (uint *)0x0) && (((uint)param_1 & 7) == 0)) {
    lVar1 = CONCAT44(param_4,param_3);
    if ((param_3 != 0 || param_4 != 0) &&
       (lVar1 = CONCAT44(param_4,param_3), (param_2 & 0x400000) != 0)) {
      lVar1 = FUN_000148fc(param_3,param_4);
      if (lVar1 < 0) {
        return (int)lVar1;
      }
    }
    uStack_1c = (uint)((ulonglong)lVar1 >> 0x20);
    local_20 = (uint)lVar1;
    if ((param_2 & 0x1000000) != 0) {
      lVar1 = CONCAT44(~uStack_1c,~local_20);
    }
    uStack_1c = (uint)((ulonglong)lVar1 >> 0x20);
    local_20 = (uint)lVar1;
    param_2 = param_2 & 0xe000000;
    if (param_2 == 0x2000000) {
      *param_1 = local_20 ^ *param_1;
      param_1[1] = uStack_1c ^ param_1[1];
    }
    else if (param_2 < 0x2000001) {
      if (param_2 != 0) {
        return 0xffffffed;
      }
      *(longlong *)param_1 = lVar1;
    }
    else if (param_2 == 0x4000000) {
      *param_1 = local_20 & *param_1;
      param_1[1] = uStack_1c & param_1[1];
    }
    else {
      if (param_2 != 0x8000000) {
        return 0xffffffed;
      }
      *param_1 = local_20 | *param_1;
      param_1[1] = uStack_1c | param_1[1];
    }
    return 0;
  }
  return 0xffffffec;
}



/* ===== poptSaveLong @ 00014aec size=356 ===== */

uint poptSaveLong(uint *param_1,uint param_2,uint param_3)

{
  uint local_14;
  
  if ((param_1 == (uint *)0x0) || (((uint)param_1 & 3) != 0)) {
    return 0xffffffec;
  }
  local_14 = param_3;
  if (((param_3 != 0) && ((param_2 & 0x400000) != 0)) &&
     (local_14 = FUN_000148fc(param_3,(int)param_3 >> 0x1f), (int)local_14 < 0)) {
    return local_14;
  }
  if ((param_2 & 0x1000000) != 0) {
    local_14 = ~local_14;
  }
  param_2 = param_2 & 0xe000000;
  if (param_2 == 0x2000000) {
    *param_1 = *param_1 ^ local_14;
  }
  else if (param_2 < 0x2000001) {
    if (param_2 != 0) {
      return 0xffffffed;
    }
    *param_1 = local_14;
  }
  else if (param_2 == 0x4000000) {
    *param_1 = *param_1 & local_14;
  }
  else {
    if (param_2 != 0x8000000) {
      return 0xffffffed;
    }
    *param_1 = *param_1 | local_14;
  }
  return 0;
}



/* ===== poptSaveInt @ 00014c50 size=356 ===== */

uint poptSaveInt(uint *param_1,uint param_2,uint param_3)

{
  uint local_14;
  
  if ((param_1 == (uint *)0x0) || (((uint)param_1 & 3) != 0)) {
    return 0xffffffec;
  }
  local_14 = param_3;
  if (((param_3 != 0) && ((param_2 & 0x400000) != 0)) &&
     (local_14 = FUN_000148fc(param_3,(int)param_3 >> 0x1f), (int)local_14 < 0)) {
    return local_14;
  }
  if ((param_2 & 0x1000000) != 0) {
    local_14 = ~local_14;
  }
  param_2 = param_2 & 0xe000000;
  if (param_2 == 0x2000000) {
    *param_1 = *param_1 ^ local_14;
  }
  else if (param_2 < 0x2000001) {
    if (param_2 != 0) {
      return 0xffffffed;
    }
    *param_1 = local_14;
  }
  else if (param_2 == 0x4000000) {
    *param_1 = *param_1 & local_14;
  }
  else {
    if (param_2 != 0x8000000) {
      return 0xffffffed;
    }
    *param_1 = *param_1 | local_14;
  }
  return 0;
}



/* ===== poptSaveShort @ 00014db4 size=384 ===== */

int poptSaveShort(ushort *param_1,uint param_2,int param_3)

{
  short sVar1;
  int local_14;
  
  if ((param_1 != (ushort *)0x0) && (((uint)param_1 & 1) == 0)) {
    local_14 = param_3;
    if ((param_3 != 0) && ((param_2 & 0x400000) != 0)) {
      sVar1 = FUN_000148fc(param_3,param_3 >> 0x1f);
      local_14 = (int)sVar1;
      if (local_14 < 0) {
        return local_14;
      }
    }
    if ((param_2 & 0x1000000) != 0) {
      local_14._0_2_ = ~(ushort)local_14;
    }
    param_2 = param_2 & 0xe000000;
    if (param_2 == 0x2000000) {
      *param_1 = (ushort)local_14 ^ *param_1;
    }
    else if (param_2 < 0x2000001) {
      if (param_2 != 0) {
        return -0x13;
      }
      *param_1 = (ushort)local_14;
    }
    else if (param_2 == 0x4000000) {
      *param_1 = (ushort)local_14 & *param_1;
    }
    else {
      if (param_2 != 0x8000000) {
        return -0x13;
      }
      *param_1 = *param_1 | (ushort)local_14;
    }
    return 0;
  }
  return -0x14;
}



/* ===== FUN_00014f34 @ 00014f34 size=320 ===== */

uint FUN_00014f34(int param_1,int *param_2)

{
  char *local_10;
  uint local_c;
  
  local_c = param_2[2];
  if ((((*(int *)(*(int *)(param_1 + 0x140) + 4) != 0) &&
       (0 < *(int *)(*(int *)(param_1 + 0x140) + 0xc))) && (*param_2 != 0)) &&
     ((local_c & 0x200000) != 0)) {
    for (local_10 = *(char **)(*(int *)(*(int *)(param_1 + 0x140) + 4) +
                              (*(int *)(*(int *)(param_1 + 0x140) + 0xc) + 0x3fffffff) * 4);
        *local_10 == '-'; local_10 = local_10 + 1) {
    }
    if (((*local_10 != *(char *)*param_2) || (local_10[1] != *(char *)(*param_2 + 1))) &&
       ((local_c & 0x2000000) == 0)) {
      if ((local_c & 0xe000000) != 0) {
        local_c = local_c ^ 0xc000000;
      }
      local_c = local_c ^ 0x1000000;
    }
  }
  return local_c;
}



/* ===== FUN_00015074 @ 00015074 size=144 ===== */

undefined4 FUN_00015074(longlong *param_1,undefined4 param_2,char *param_3)

{
  longlong lVar1;
  char *local_c;
  
  if (param_3 == (char *)0x0) {
    *param_1 = 0;
  }
  else {
    local_c = (char *)0x0;
    lVar1 = strtoll(param_3,&local_c,0);
    *param_1 = lVar1;
    if ((local_c == (char *)0x0) || (*local_c != '\0')) {
      return 0xffffffef;
    }
  }
  return 0;
}



/* ===== FUN_00015104 @ 00015104 size=1436 ===== */

int FUN_00015104(int param_1,int param_2)

{
  char *pcVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  double dVar5;
  char *local_3c;
  undefined8 local_38;
  float *local_2c;
  int local_28;
  undefined4 local_24;
  undefined8 local_20;
  int local_14;
  
  iVar4 = DAT_000156b8 + 0x15124;
  local_2c = *(float **)(param_2 + 0xc);
  local_14 = 0;
  switch(**(uint **)(iVar4 + DAT_000156bc) & *(uint *)(param_2 + 8)) {
  case 1:
    if (*(int *)(*(int *)(param_1 + 0x140) + 0x10) == 0) {
      pcVar1 = (char *)0x0;
    }
    else {
      pcVar1 = strdup(*(char **)(*(int *)(param_1 + 0x140) + 0x10));
    }
    *local_2c = (float)pcVar1;
    return local_14;
  case 2:
    goto LAB_00015268;
  case 3:
    goto LAB_00015268;
  case 4:
    break;
  case 5:
    break;
  case 6:
    break;
  case 7:
    break;
  case 8:
    goto LAB_0001546c;
  case 9:
LAB_0001546c:
    local_3c = (char *)0x0;
    local_20 = 0.0;
    if (*(int *)(*(int *)(param_1 + 0x140) + 0x10) != 0) {
      piVar2 = __errno_location();
      local_28 = *piVar2;
      piVar2 = __errno_location();
      *piVar2 = 0;
      local_20 = strtod(*(char **)(*(int *)(param_1 + 0x140) + 0x10),&local_3c);
      piVar2 = __errno_location();
      if (*piVar2 == 0x22) {
        return -0x12;
      }
      piVar2 = __errno_location();
      *piVar2 = local_28;
      if (*local_3c != '\0') {
        return -0x11;
      }
    }
    uVar3 = **(uint **)(iVar4 + DAT_000156bc) & *(uint *)(param_2 + 8);
    if (uVar3 != 8) {
      if (uVar3 != 9) {
        return local_14;
      }
      *local_2c = (float)local_20;
      local_2c[1] = local_20._4_4_;
      return local_14;
    }
    if (DAT_000156a0 <= local_20) {
      dVar5 = DAT_000156a8 - local_20;
    }
    else {
      dVar5 = local_20 + DAT_000156a8;
    }
    if (dVar5 <= DAT_000156a0) {
      dVar5 = local_20;
      if (local_20 < DAT_000156a0) {
        dVar5 = -local_20;
      }
      if (dVar5 - DAT_000156b0 <= DAT_000156a0) {
        *local_2c = (float)local_20;
        return local_14;
      }
    }
    return -0x12;
  case 10:
    goto LAB_00015268;
  case 0xb:
    break;
  case 0xc:
    iVar4 = poptSaveString(local_2c,*(undefined4 *)(param_2 + 8),
                           *(undefined4 *)(*(int *)(param_1 + 0x140) + 0x10));
    return iVar4;
  case 0xd:
LAB_00015268:
    local_24 = FUN_00014f34(param_1,param_2);
    local_38 = 0;
    local_14 = FUN_00015074(&local_38,local_24,*(undefined4 *)(*(int *)(param_1 + 0x140) + 0x10));
    if (local_14 != 0) {
      return local_14;
    }
    switch(**(uint **)(iVar4 + DAT_000156bc) & *(uint *)(param_2 + 8)) {
    case 2:
      goto LAB_000153ac;
    case 3:
      if (((int)(local_38._4_4_ - (((uint)local_38 < 0x80000000) - 1)) < 0 ==
           (SBORROW4(local_38._4_4_,-1) !=
           SBORROW4(local_38._4_4_ + 1,(uint)((uint)local_38 < 0x80000000)))) &&
         ((int)-(local_38._4_4_ + (uint)(0x7fffffff < (uint)local_38)) < 0 ==
          (SBORROW4(0,local_38._4_4_) !=
          SBORROW4(-local_38._4_4_,(uint)(0x7fffffff < (uint)local_38))))) {
        iVar4 = poptSaveLong(local_2c,local_24,(uint)local_38);
        return iVar4;
      }
      return -0x12;
    case 4:
      return 0;
    case 5:
      return 0;
    case 6:
      return 0;
    case 7:
      return 0;
    case 8:
      return 0;
    case 9:
      return 0;
    case 10:
      if ((local_38._4_4_ != -0x80000000 || (uint)local_38 != 0) &&
         (local_38._4_4_ != 0x7fffffff || (uint)local_38 != 0xffffffff)) {
        iVar4 = poptSaveLongLong(local_2c,local_24,(uint)local_38,local_38._4_4_);
        return iVar4;
      }
      return -0x12;
    case 0xb:
      return 0;
    case 0xc:
      return 0;
    case 0xd:
      if (((int)(local_38._4_4_ - (((uint)local_38 < 0xffff8000) - 1)) < 0 ==
           (SBORROW4(local_38._4_4_,-1) !=
           SBORROW4(local_38._4_4_ + 1,(uint)((uint)local_38 < 0xffff8000)))) &&
         ((int)-(local_38._4_4_ + (uint)(0x7fff < (uint)local_38)) < 0 ==
          (SBORROW4(0,local_38._4_4_) != SBORROW4(-local_38._4_4_,(uint)(0x7fff < (uint)local_38))))
         ) {
        iVar4 = poptSaveShort(local_2c,local_24,(uint)local_38);
        return iVar4;
      }
      return -0x12;
    default:
      return 0;
    }
  case 0xe:
    break;
  case 0xf:
    break;
  case 0x10:
    break;
  case 0x11:
    break;
  case 0x12:
    break;
  case 0x13:
    break;
  case 0x14:
    break;
  case 0x15:
    break;
  case 0x16:
    break;
  case 0x17:
    break;
  case 0x18:
    break;
  case 0x19:
    break;
  case 0x1a:
    break;
  case 0x1b:
    *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_2 + 0xc);
    return 0;
  case 0x1c:
    break;
  case 0x1d:
    break;
  case 0x1e:
    iVar4 = poptSaveBits(local_2c,*(undefined4 *)(param_2 + 8),
                         *(undefined4 *)(*(int *)(param_1 + 0x140) + 0x10));
    return iVar4;
  }
  fprintf((FILE *)**(undefined4 **)(iVar4 + DAT_000156c0),(char *)(DAT_000156c4 + 0x15670),
          **(uint **)(iVar4 + DAT_000156bc) & *(uint *)(param_2 + 8));
                    /* WARNING: Subroutine does not return */
  exit(1);
LAB_000153ac:
  if (((int)(local_38._4_4_ - (((uint)local_38 < 0x80000000) - 1)) < 0 ==
       (SBORROW4(local_38._4_4_,-1) !=
       SBORROW4(local_38._4_4_ + 1,(uint)((uint)local_38 < 0x80000000)))) &&
     ((int)-(local_38._4_4_ + (uint)(0x7fffffff < (uint)local_38)) < 0 ==
      (SBORROW4(0,local_38._4_4_) != SBORROW4(-local_38._4_4_,(uint)(0x7fffffff < (uint)local_38))))
     ) {
    iVar4 = poptSaveInt(local_2c,local_24,(uint)local_38);
    return iVar4;
  }
  return -0x12;
}



/* ===== poptGetNextOpt @ 000156c8 size=3572 ===== */

int poptGetNextOpt(uint param_1)

{
  char *pcVar1;
  void *pvVar2;
  undefined4 uVar3;
  size_t sVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 local_58;
  int local_54;
  undefined4 local_50;
  int local_4c;
  int local_48;
  char *local_44;
  int local_40;
  undefined4 local_3c;
  char *local_38;
  int local_34;
  char *local_30;
  char *local_2c;
  undefined4 local_28;
  int local_24;
  char *local_20;
  char *local_1c;
  int local_18;
  int *local_14;
  
  iVar8 = DAT_000164bc + 0x156e4;
  local_14 = (int *)0x0;
  local_18 = 0;
  if (param_1 == 0) {
    iVar8 = -1;
  }
  else {
LAB_00016488:
    if (local_18 == 0) {
      local_1c = (char *)0x0;
      local_54 = 0;
      local_58 = 0;
      local_20 = (char *)0x0;
      local_24 = 0;
      local_28 = 0;
      while (((*(int *)(*(int *)(param_1 + 0x140) + 0x14) == 0 &&
              (*(int *)(*(int *)(param_1 + 0x140) + 0xc) == **(int **)(param_1 + 0x140))) &&
             (param_1 < *(uint *)(param_1 + 0x140)))) {
        iVar6 = *(int *)(param_1 + 0x140);
        *(int *)(param_1 + 0x140) = iVar6 + -0x20;
        FUN_000123c4(iVar6);
      }
      if ((*(int *)(*(int *)(param_1 + 0x140) + 0x14) == 0) &&
         (*(int *)(*(int *)(param_1 + 0x140) + 0xc) == **(int **)(param_1 + 0x140))) {
        FUN_00011de4(param_1,*(undefined4 *)(param_1 + 0x154));
        if (*(int *)(param_1 + 0x184) != 0) {
          (**(code **)(param_1 + 0x184))
                    (*(undefined4 *)(param_1 + 0x17c),*(undefined4 *)(param_1 + 0x178));
          return -1;
        }
        if (*(int *)(param_1 + 0x188) != 0) {
          iVar8 = FUN_000130d4(param_1);
          return iVar8;
        }
        return -1;
      }
      if (*(int *)(*(int *)(param_1 + 0x140) + 0x14) == 0) {
        if ((*(int *)(*(int *)(param_1 + 0x140) + 8) == 0) ||
           ((1 << (*(uint *)(*(int *)(param_1 + 0x140) + 0xc) & 0x1f) &
            *(uint *)(*(int *)(*(int *)(param_1 + 0x140) + 8) +
                     (*(uint *)(*(int *)(param_1 + 0x140) + 0xc) >> 5) * 4)) == 0)) {
          local_3c = *(undefined4 *)(*(int *)(param_1 + 0x140) + 0xc);
          if (*(int *)(*(int *)(param_1 + 0x140) + 4) != 0) {
            iVar6 = *(int *)(*(int *)(param_1 + 0x140) + 4);
            iVar7 = *(int *)(*(int *)(param_1 + 0x140) + 0xc);
            *(int *)(*(int *)(param_1 + 0x140) + 0xc) = iVar7 + 1;
            local_1c = *(char **)(iVar6 + iVar7 * 4);
          }
          if (local_1c == (char *)0x0) {
            return -0xb;
          }
          if (((*(int *)(param_1 + 0x158) == 0) && (*local_1c == '-')) &&
             ((*local_1c != '-' || (local_1c[1] != '\0')))) {
            local_2c = local_1c;
            if (*local_1c == '\0') {
              return -0xb;
            }
            if ((local_1c[1] == '-') && (local_1c[2] == '\0')) {
              *(undefined4 *)(param_1 + 0x158) = 1;
            }
            else {
              local_34 = 0;
              local_2c = local_1c + 1;
              if (*local_2c == '-') {
                local_2c = local_1c + 2;
              }
              else {
                local_34 = -0x80000000;
              }
              for (local_30 = local_2c; (*local_30 != '\0' && (*local_30 != '='));
                  local_30 = local_30 + 1) {
              }
              local_40 = (int)local_30 - (int)local_2c;
              if (*local_30 == '=') {
                local_20 = local_30 + 1;
              }
              iVar6 = FUN_00012ad4(param_1,local_2c,local_40,0,local_20);
              if ((iVar6 == 0) && (iVar6 = FUN_0001268c(param_1,local_2c,0), iVar6 == 0)) {
                local_14 = (int *)FUN_00013510(*(undefined4 *)(param_1 + 0x154),local_2c,local_40,0,
                                               &local_54,&local_58,local_34);
                if ((local_14 == (int *)0x0) && (-1 < local_34)) {
                  return -0xb;
                }
                if (local_14 == (int *)0x0) {
                  *(char **)(*(int *)(param_1 + 0x140) + 0x14) = local_1c + 1;
                  local_20 = (char *)0x0;
                }
                else {
                  if ((*(uint *)(param_1 + 0x140) == param_1) && ((local_14[2] & 0x20000000U) != 0))
                  {
                    local_24 = 1;
                    FUN_00013c88(param_1,local_3c);
                  }
                  local_28 = 0;
                }
                goto LAB_00015c80;
              }
            }
          }
          else {
            if ((*(uint *)(param_1 + 0x168) & 4) != 0) {
              *(undefined4 *)(param_1 + 0x158) = 1;
            }
            if ((*(uint *)(param_1 + 0x168) & 0x10) != 0) {
              iVar8 = *(int *)(param_1 + 0x140);
              pcVar1 = strdup(local_1c);
              *(char **)(iVar8 + 0x10) = pcVar1;
              return 0;
            }
            if (*(int *)(param_1 + 0x144) != 0) {
              if (*(int *)(param_1 + 0x14c) <= *(int *)(param_1 + 0x148) + 1) {
                *(int *)(param_1 + 0x14c) = *(int *)(param_1 + 0x14c) + 10;
                pvVar2 = realloc(*(void **)(param_1 + 0x144),*(int *)(param_1 + 0x14c) << 2);
                *(void **)(param_1 + 0x144) = pvVar2;
              }
              iVar6 = *(int *)(param_1 + 0x144);
              iVar7 = *(int *)(param_1 + 0x148);
              *(int *)(param_1 + 0x148) = iVar7 + 1;
              pcVar1 = strdup(local_1c);
              *(char **)(iVar6 + iVar7 * 4) = pcVar1;
            }
          }
        }
        else {
          *(int *)(*(int *)(param_1 + 0x140) + 0xc) = *(int *)(*(int *)(param_1 + 0x140) + 0xc) + 1;
        }
        goto LAB_00016488;
      }
LAB_00015c80:
      if (*(int *)(*(int *)(param_1 + 0x140) + 0x14) != 0) {
        local_44 = *(char **)(*(int *)(param_1 + 0x140) + 0x14);
        *(undefined4 *)(*(int *)(param_1 + 0x140) + 0x14) = 0;
        iVar6 = FUN_00012ad4(param_1,0,0,*local_44,local_44 + 1);
        if (iVar6 != 0) goto LAB_00016488;
        iVar6 = FUN_0001268c(param_1,0,*local_44);
        if (iVar6 != 0) {
          local_44 = local_44 + 1;
          if (*local_44 != '\0') {
            *(char **)(*(int *)(param_1 + 0x140) + 0x14) = local_44;
          }
          goto LAB_00016488;
        }
        local_14 = (int *)FUN_00013510(*(undefined4 *)(param_1 + 0x154),0,0,*local_44,&local_54,
                                       &local_58,0);
        if (local_14 == (int *)0x0) {
          return -0xb;
        }
        local_28 = 1;
        local_44 = local_44 + 1;
        if (*local_44 != '\0') {
          *(char **)(*(int *)(param_1 + 0x140) + 0x14) = local_44;
        }
      }
      if (local_14 == (int *)0x0) {
        return -0xb;
      }
      if (((**(uint **)(iVar8 + DAT_000164c0) & local_14[2]) == 0) ||
         ((**(uint **)(iVar8 + DAT_000164c0) & local_14[2]) == 7)) {
        if ((local_20 != (char *)0x0) ||
           ((*(int *)(*(int *)(param_1 + 0x140) + 0x14) != 0 &&
            (**(char **)(*(int *)(param_1 + 0x140) + 0x14) == '=')))) {
          return -0xc;
        }
        if (local_14[3] != 0) {
          if ((**(uint **)(iVar8 + DAT_000164c0) & local_14[2]) == 7) {
            local_4c = local_14[4];
          }
          else {
            local_4c = 1;
          }
          local_50 = FUN_00014f34(param_1,local_14);
          iVar6 = poptSaveInt(local_14[3],local_50,local_4c);
          if (iVar6 != 0) {
            return -0x13;
          }
        }
      }
      else {
        iVar6 = *(int *)(param_1 + 0x140);
        uVar3 = FUN_00011c08(*(undefined4 *)(*(int *)(param_1 + 0x140) + 0x10));
        *(undefined4 *)(iVar6 + 0x10) = uVar3;
        if (local_20 == (char *)0x0) {
          if (*(int *)(*(int *)(param_1 + 0x140) + 0x14) == 0) {
            while ((*(int *)(*(int *)(param_1 + 0x140) + 0xc) == **(int **)(param_1 + 0x140) &&
                   (param_1 < *(uint *)(param_1 + 0x140)))) {
              iVar6 = *(int *)(param_1 + 0x140);
              *(int *)(param_1 + 0x140) = iVar6 + -0x20;
              FUN_000123c4(iVar6);
            }
            if (*(int *)(*(int *)(param_1 + 0x140) + 0xc) == **(int **)(param_1 + 0x140)) {
              if ((local_14[2] & 0x10000000U) == 0) {
                return -10;
              }
              *(undefined4 *)(*(int *)(param_1 + 0x140) + 0x10) = 0;
            }
            else {
              if (((*(uint *)(param_1 + 0x140) == param_1) && ((local_14[2] & 0x20000000U) != 0)) &&
                 (local_24 != 0)) {
                FUN_00013c88(param_1,*(undefined4 *)(*(int *)(param_1 + 0x140) + 0xc));
              }
              if (*(int *)(*(int *)(param_1 + 0x140) + 4) != 0) {
                if (((local_14[2] & 0x10000000U) == 0) ||
                   (**(char **)(*(int *)(*(int *)(param_1 + 0x140) + 4) +
                               *(int *)(*(int *)(param_1 + 0x140) + 0xc) * 4) != '-')) {
                  iVar6 = *(int *)(*(int *)(param_1 + 0x140) + 4);
                  iVar7 = *(int *)(*(int *)(param_1 + 0x140) + 0xc);
                  *(int *)(*(int *)(param_1 + 0x140) + 0xc) = iVar7 + 1;
                  local_20 = *(char **)(iVar6 + iVar7 * 4);
                  uVar3 = FUN_00013a68(param_1,local_20);
                  *(undefined4 *)(*(int *)(param_1 + 0x140) + 0x10) = uVar3;
                }
                else {
                  *(undefined4 *)(*(int *)(param_1 + 0x140) + 0x10) = 0;
                }
              }
            }
          }
          else {
            uVar3 = FUN_00013a68(param_1,*(int *)(*(int *)(param_1 + 0x140) + 0x14) +
                                         (uint)(**(char **)(*(int *)(param_1 + 0x140) + 0x14) == '='
                                               ));
            *(undefined4 *)(*(int *)(param_1 + 0x140) + 0x10) = uVar3;
            *(undefined4 *)(*(int *)(param_1 + 0x140) + 0x14) = 0;
          }
        }
        else {
          uVar3 = FUN_00013a68(param_1,local_20);
          *(undefined4 *)(*(int *)(param_1 + 0x140) + 0x10) = uVar3;
        }
        local_20 = (char *)0x0;
        if ((local_14[3] != 0) && (local_48 = FUN_00015104(param_1,local_14), local_48 != 0)) {
          return local_48;
        }
      }
      if (local_54 == 0) {
        if ((local_14[4] != 0) && ((**(uint **)(iVar8 + DAT_000164c0) & local_14[2]) != 7)) {
          local_18 = 1;
        }
      }
      else {
        FUN_00011f2c(param_1,*(undefined4 *)(param_1 + 0x154),local_14,local_58,local_28);
      }
      if (*(int *)(param_1 + 0x180) <= *(int *)(param_1 + 0x17c) + 2) {
        *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + 10;
        pvVar2 = realloc(*(void **)(param_1 + 0x178),*(int *)(param_1 + 0x180) << 2);
        *(void **)(param_1 + 0x178) = pvVar2;
      }
      if (*(int *)(param_1 + 0x178) != 0) {
        if (*local_14 == 0) {
          sVar4 = 3;
        }
        else {
          sVar4 = strlen((char *)*local_14);
          sVar4 = sVar4 + 3;
        }
        puVar5 = malloc(sVar4);
        if (puVar5 == (undefined1 *)0x0) {
          iVar6 = *(int *)(param_1 + 0x17c);
          *(int *)(param_1 + 0x17c) = iVar6 + 1;
          *(undefined4 *)(*(int *)(param_1 + 0x178) + iVar6 * 4) = 0;
          local_38 = (char *)0x0;
        }
        else {
          iVar6 = *(int *)(param_1 + 0x17c);
          *(int *)(param_1 + 0x17c) = iVar6 + 1;
          *(undefined1 **)(*(int *)(param_1 + 0x178) + iVar6 * 4) = puVar5;
          pcVar1 = puVar5 + 1;
          *puVar5 = 0x2d;
          if (*local_14 == 0) {
            local_38 = puVar5 + 2;
            *pcVar1 = (char)local_14[1];
            *local_38 = '\0';
          }
          else {
            local_38 = pcVar1;
            if (-1 < local_14[2]) {
              local_38 = puVar5 + 2;
              *pcVar1 = '-';
            }
            local_38 = stpcpy(local_38,(char *)*local_14);
          }
        }
      }
      if (((((local_14[3] == 0) || ((**(uint **)(iVar8 + DAT_000164c0) & local_14[2]) != 0)) &&
           ((**(uint **)(iVar8 + DAT_000164c0) & local_14[2]) != 7)) &&
          (((**(uint **)(iVar8 + DAT_000164c0) & local_14[2]) != 0 &&
           (*(int *)(param_1 + 0x178) != 0)))) && (*(int *)(*(int *)(param_1 + 0x140) + 0x10) != 0))
      {
        pcVar1 = *(char **)(*(int *)(param_1 + 0x140) + 0x10);
        iVar6 = *(int *)(param_1 + 0x178);
        iVar7 = *(int *)(param_1 + 0x17c);
        *(int *)(param_1 + 0x17c) = iVar7 + 1;
        pcVar1 = strdup(pcVar1);
        *(char **)(iVar6 + iVar7 * 4) = pcVar1;
      }
      goto LAB_00016488;
    }
    if (local_14 == (int *)0x0) {
      iVar8 = -1;
    }
    else {
      iVar8 = local_14[4];
    }
  }
  return iVar8;
}



/* ===== poptGetOptArg @ 000164c4 size=88 ===== */

undefined4 poptGetOptArg(int param_1)

{
  undefined4 local_c;
  
  local_c = 0;
  if (param_1 != 0) {
    local_c = *(undefined4 *)(*(int *)(param_1 + 0x140) + 0x10);
    *(undefined4 *)(*(int *)(param_1 + 0x140) + 0x10) = 0;
  }
  return local_c;
}



/* ===== poptGetArg @ 0001651c size=140 ===== */

undefined4 poptGetArg(int param_1)

{
  int iVar1;
  undefined4 local_c;
  
  local_c = 0;
  if (((param_1 != 0) && (*(int *)(param_1 + 0x144) != 0)) &&
     (*(int *)(param_1 + 0x150) < *(int *)(param_1 + 0x148))) {
    iVar1 = *(int *)(param_1 + 0x150);
    *(int *)(param_1 + 0x150) = iVar1 + 1;
    local_c = *(undefined4 *)(*(int *)(param_1 + 0x144) + iVar1 * 4);
  }
  return local_c;
}



/* ===== poptPeekArg @ 000165a8 size=128 ===== */

undefined4 poptPeekArg(int param_1)

{
  undefined4 local_c;
  
  local_c = 0;
  if (((param_1 != 0) && (*(int *)(param_1 + 0x144) != 0)) &&
     (*(int *)(param_1 + 0x150) < *(int *)(param_1 + 0x148))) {
    local_c = *(undefined4 *)(*(int *)(param_1 + 0x144) + *(int *)(param_1 + 0x150) * 4);
  }
  return local_c;
}



/* ===== poptGetArgs @ 00016628 size=148 ===== */

int poptGetArgs(int param_1)

{
  int iVar1;
  
  if (((param_1 == 0) || (*(int *)(param_1 + 0x144) == 0)) ||
     (*(int *)(param_1 + 0x148) == *(int *)(param_1 + 0x150))) {
    iVar1 = 0;
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 0x144) + *(int *)(param_1 + 0x148) * 4) = 0;
    iVar1 = *(int *)(param_1 + 0x144) + *(int *)(param_1 + 0x150) * 4;
  }
  return iVar1;
}



/* ===== FUN_000166bc @ 000166bc size=216 ===== */

undefined4 FUN_000166bc(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int local_18;
  undefined4 *local_c;
  
  local_18 = param_2;
  local_c = param_1;
  if (param_1 != (undefined4 *)0x0) {
    while (local_18 = local_18 + -1, -1 < local_18) {
      uVar1 = FUN_00011c08(*local_c);
      *local_c = uVar1;
      uVar1 = FUN_00011c08(local_c[5]);
      local_c[5] = uVar1;
      uVar1 = FUN_00011c08(local_c[6]);
      local_c[6] = uVar1;
      uVar1 = FUN_00011c08(local_c[8]);
      local_c[8] = uVar1;
      local_c = local_c + 9;
    }
    FUN_00011c08(param_1);
  }
  return 0;
}



/* ===== poptFreeContext @ 00016794 size=448 ===== */

undefined4 poptFreeContext(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_14;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    poptResetContext(param_1);
    uVar1 = FUN_000166bc(*(undefined4 *)(param_1 + 0x160),*(undefined4 *)(param_1 + 0x164));
    *(undefined4 *)(param_1 + 0x160) = uVar1;
    *(undefined4 *)(param_1 + 0x164) = 0;
    uVar1 = FUN_000166bc(*(undefined4 *)(param_1 + 0x16c),*(undefined4 *)(param_1 + 0x170));
    *(undefined4 *)(param_1 + 0x16c) = uVar1;
    *(undefined4 *)(param_1 + 0x170) = 0;
    for (local_14 = 0; local_14 < *(int *)(param_1 + 0x148); local_14 = local_14 + 1) {
      iVar2 = *(int *)(param_1 + 0x144);
      uVar1 = FUN_00011c08(*(undefined4 *)(*(int *)(param_1 + 0x144) + local_14 * 4));
      *(undefined4 *)(iVar2 + local_14 * 4) = uVar1;
    }
    uVar1 = FUN_00011c08(*(undefined4 *)(param_1 + 0x144));
    *(undefined4 *)(param_1 + 0x144) = uVar1;
    uVar1 = FUN_00011c08(*(undefined4 *)(param_1 + 0x178));
    *(undefined4 *)(param_1 + 0x178) = uVar1;
    uVar1 = FUN_00011c08(*(undefined4 *)(param_1 + 0x15c));
    *(undefined4 *)(param_1 + 0x15c) = uVar1;
    uVar1 = FUN_00011c08(*(undefined4 *)(param_1 + 0x194));
    *(undefined4 *)(param_1 + 0x194) = uVar1;
    uVar1 = FUN_00011c08(*(undefined4 *)(param_1 + 0x18c));
    *(undefined4 *)(param_1 + 0x18c) = uVar1;
    uVar1 = FUN_00011c08(*(undefined4 *)(param_1 + 0x198));
    *(undefined4 *)(param_1 + 0x198) = uVar1;
    uVar1 = FUN_00011c08(param_1);
  }
  return uVar1;
}



/* ===== poptAddAlias @ 00016954 size=200 ===== */

undefined4
poptAddAlias(undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 local_40 [9];
  undefined4 *local_1c;
  
  local_1c = local_40;
  memset(local_1c,0,0x24);
  *local_1c = param_2;
  *(undefined1 *)(local_1c + 1) = param_3;
  local_1c[2] = 0x40000000;
  local_1c[3] = 0;
  local_1c[4] = 0;
  local_1c[5] = 0;
  local_1c[6] = 0;
  local_1c[7] = param_4;
  local_1c[8] = param_5;
  uVar1 = poptAddItem(param_1,local_1c,0);
  return uVar1;
}



/* ===== poptAddItem @ 00016a1c size=528 ===== */

undefined4 poptAddItem(int param_1,int *param_2,int param_3)

{
  void *pvVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *local_10;
  int *local_c;
  
  if (param_3 == 0) {
    local_c = (int *)(param_1 + 0x160);
    local_10 = (int *)(param_1 + 0x164);
  }
  else {
    if (param_3 != 1) {
      return 1;
    }
    local_c = (int *)(param_1 + 0x16c);
    local_10 = (int *)(param_1 + 0x170);
  }
  pvVar1 = realloc((void *)*local_c,(*local_10 + 1) * 0x24);
  if (pvVar1 == (void *)0x0) {
    uVar3 = 1;
  }
  else {
    *local_c = (int)pvVar1;
    puVar4 = (undefined4 *)(*local_c + *local_10 * 0x24);
    if (*param_2 == 0) {
      pcVar2 = (char *)0x0;
    }
    else {
      pcVar2 = strdup((char *)*param_2);
    }
    *puVar4 = pcVar2;
    *(char *)(puVar4 + 1) = (char)param_2[1];
    puVar4[2] = param_2[2];
    puVar4[3] = param_2[3];
    puVar4[4] = param_2[4];
    if (param_2[5] == 0) {
      pcVar2 = (char *)0x0;
    }
    else {
      pcVar2 = strdup((char *)param_2[5]);
    }
    puVar4[5] = pcVar2;
    if (param_2[6] == 0) {
      pcVar2 = (char *)0x0;
    }
    else {
      pcVar2 = strdup((char *)param_2[6]);
    }
    puVar4[6] = pcVar2;
    puVar4[7] = param_2[7];
    puVar4[8] = param_2[8];
    *local_10 = *local_10 + 1;
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== poptBadOption @ 00016c2c size=172 ===== */

undefined4 poptBadOption(int param_1,uint param_2)

{
  undefined4 local_c;
  
  local_c = 0;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x174) == 0) {
      if ((param_2 & 1) == 0) {
        param_1 = *(int *)(param_1 + 0x140);
      }
      local_c = *(undefined4 *)(*(int *)(param_1 + 4) + (*(int *)(param_1 + 0xc) + 0x3fffffff) * 4);
    }
    else {
      local_c = *(undefined4 *)(param_1 + 0x174);
    }
  }
  return local_c;
}



/* ===== poptStrerror @ 00016cd8 size=268 ===== */

char * poptStrerror(undefined4 param_1)

{
  int *piVar1;
  char *pcVar2;
  
  switch(param_1) {
  case 0xffffffea:
    pcVar2 = (char *)(DAT_00016e0c + 0x16db4);
    break;
  case 0xffffffeb:
    pcVar2 = (char *)(DAT_00016e08 + 0x16da8);
    break;
  case 0xffffffec:
    pcVar2 = (char *)(DAT_00016df4 + 0x16d6c);
    break;
  case 0xffffffed:
    pcVar2 = (char *)(DAT_00016df0 + 0x16d60);
    break;
  case 0xffffffee:
    pcVar2 = (char *)(DAT_00016e04 + 0x16d9c);
    break;
  case 0xffffffef:
    pcVar2 = (char *)(DAT_00016e00 + 0x16d90);
    break;
  case 0xfffffff0:
    piVar1 = __errno_location();
    pcVar2 = strerror(*piVar1);
    break;
  case 0xfffffff1:
    pcVar2 = (char *)(DAT_00016dfc + 0x16d84);
    break;
  case 0xfffffff2:
  default:
    pcVar2 = (char *)(DAT_00016e10 + 0x16ddc);
    break;
  case 0xfffffff3:
    pcVar2 = (char *)(DAT_00016df8 + 0x16d78);
    break;
  case 0xfffffff4:
    pcVar2 = (char *)(DAT_00016de8 + 0x16d48);
    break;
  case 0xfffffff5:
    pcVar2 = (char *)(DAT_00016dec + 0x16d54);
    break;
  case 0xfffffff6:
    pcVar2 = (char *)(DAT_00016de4 + 0x16d3c);
  }
  return pcVar2;
}



/* ===== poptStuffArgs @ 00016e14 size=276 ===== */

undefined4 poptStuffArgs(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 local_c;
  
  if (*(int *)(param_1 + 0x140) - param_1 == 0x140) {
    uVar1 = 0xfffffff3;
  }
  else {
    for (local_c = 0; *(int *)(param_2 + local_c * 4) != 0; local_c = local_c + 1) {
    }
    *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 0x20;
    *(undefined4 *)(*(int *)(param_1 + 0x140) + 0xc) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x140) + 0x10) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x140) + 0x14) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x140) + 0x18) = 0;
    uVar1 = poptDupArgv(local_c,param_2,*(undefined4 *)(param_1 + 0x140),
                        *(int *)(param_1 + 0x140) + 4);
    *(undefined4 *)(*(int *)(param_1 + 0x140) + 8) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x140) + 0x1c) = 1;
  }
  return uVar1;
}



/* ===== poptGetInvocationName @ 00016f28 size=80 ===== */

int poptGetInvocationName(int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)(param_1 + 0x140) + 4) == 0) {
    iVar1 = DAT_00016f78 + 0x16f6c;
  }
  else {
    iVar1 = **(int **)(*(int *)(param_1 + 0x140) + 4);
  }
  return iVar1;
}



/* ===== poptStrippedArgv @ 00016f7c size=364 ===== */

int poptStrippedArgv(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = 1;
  local_c = param_2;
  if (*(int *)(param_1 + 0x198) != 0) {
    for (local_14 = 1; (int)local_14 < param_2; local_14 = local_14 + 1) {
      if ((1 << (local_14 & 0x1f) & *(uint *)(*(int *)(param_1 + 0x198) + (local_14 >> 5) * 4)) != 0
         ) {
        local_c = local_c + -1;
      }
    }
  }
  for (local_14 = 1; (int)local_14 < param_2; local_14 = local_14 + 1) {
    if ((*(int *)(param_1 + 0x198) == 0) ||
       ((1 << (local_14 & 0x1f) & *(uint *)(*(int *)(param_1 + 0x198) + (local_14 >> 5) * 4)) == 0))
    {
      if (local_10 < local_c) {
        uVar1 = *(undefined4 *)(param_3 + local_14 * 4);
      }
      else {
        uVar1 = 0;
      }
      *(undefined4 *)(param_3 + local_10 * 4) = uVar1;
      local_10 = local_10 + 1;
    }
  }
  return local_c;
}



/* ===== FUN_000170e8 @ 000170e8 size=252 ===== */

undefined4 FUN_000170e8(byte *param_1,int param_2)

{
  byte bVar1;
  bool bVar2;
  byte *local_c;
  
  bVar2 = false;
  local_c = param_1;
  do {
    if (*local_c == 0) {
      return 0;
    }
    bVar1 = *local_c;
    if (bVar1 == 0x5b) {
      bVar2 = true;
    }
    else if (bVar1 < 0x5c) {
      if ((bVar1 == 0x2a) || (bVar1 == 0x3f)) {
        return 1;
      }
    }
    else if (bVar1 == 0x5c) {
      if ((param_2 != 0) && (local_c[1] != 0)) {
        local_c = local_c + 1;
      }
    }
    else if ((bVar1 == 0x5d) && (bVar2)) {
      return 1;
    }
    local_c = local_c + 1;
  } while( true );
}



/* ===== FUN_0001720c @ 0001720c size=400 ===== */

int FUN_0001720c(undefined4 param_1,char *param_2,size_t *param_3,int *param_4)

{
  int iVar1;
  void *pvVar2;
  char *pcVar3;
  undefined4 *puVar4;
  glob_t local_40;
  glob_t *local_1c;
  char *local_18;
  int local_14;
  
  local_14 = 0;
  local_18 = param_2;
  iVar1 = FUN_000170e8(param_2,0);
  if (iVar1 == 0) {
    if (param_3 != (size_t *)0x0) {
      *param_3 = 1;
    }
    if (param_4 != (int *)0x0) {
      pvVar2 = calloc(2,4);
      *param_4 = (int)pvVar2;
      if (*param_4 != 0) {
        puVar4 = (undefined4 *)*param_4;
        pcVar3 = strdup(local_18);
        *puVar4 = pcVar3;
      }
    }
  }
  else {
    local_1c = &local_40;
    local_14 = glob(local_18,*(int *)(DAT_0001739c + 0x17264),(__errfunc *)(DAT_000173a0 + 0x17274),
                    local_1c);
    if (local_14 == 0) {
      if (param_3 != (size_t *)0x0) {
        *param_3 = local_1c->gl_pathc;
        local_1c->gl_pathc = 0;
      }
      if (param_4 != (int *)0x0) {
        *param_4 = (int)local_1c->gl_pathv;
        local_1c->gl_pathv = (char **)0x0;
      }
      globfree(local_1c);
    }
    else if (local_14 == 3) {
      *param_4 = 0;
      *param_3 = 0;
      local_14 = 0;
    }
    else {
      local_14 = -0x10;
    }
  }
  return local_14;
}



/* ===== poptSaneFile @ 000173a4 size=200 ===== */

undefined4 poptSaneFile(char *param_1)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  stat sStack_60;
  
  if (((param_1 == (char *)0x0) ||
      (pcVar1 = strstr(param_1,(char *)(DAT_0001746c + 0x173cc)), pcVar1 != (char *)0x0)) ||
     (pcVar1 = strstr(param_1,(char *)(DAT_00017470 + 0x173ec)), pcVar1 != (char *)0x0)) {
    uVar3 = 0;
  }
  else {
    iVar2 = stat(param_1,&sStack_60);
    if (iVar2 == -1) {
      uVar3 = 0;
    }
    else if ((sStack_60.st_mode & 0xf000) == 0x8000) {
      if ((sStack_60.st_mode & 0x49) == 0) {
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}



/* ===== poptReadFile @ 00017474 size=740 ===== */

int poptReadFile(char *param_1,undefined4 *param_2,undefined4 *param_3,uint param_4)

{
  int iVar1;
  __off_t _Var2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  int local_1c;
  char *local_18;
  char *local_14;
  char *local_10;
  char *local_c;
  
  local_c = (char *)0x0;
  local_10 = (char *)0x0;
  local_1c = -0x10;
  iVar1 = open(param_1,0);
  if (-1 < iVar1) {
    local_10 = (char *)lseek(iVar1,0,2);
    if ((((local_10 == (char *)0xffffffff) || ((int)local_10 < 0)) ||
        (_Var2 = lseek(iVar1,0,0), _Var2 == -1)) ||
       ((local_c = calloc(1,(size_t)(local_10 + 1)), local_c == (char *)0x0 ||
        (pcVar3 = (char *)read(iVar1,local_c,(size_t)local_10), local_10 != pcVar3)))) {
      piVar4 = __errno_location();
      iVar5 = *piVar4;
      close(iVar1);
      if ((local_10 == (char *)0xffffffff) || (-1 < (int)local_10)) {
        piVar4 = __errno_location();
        *piVar4 = iVar5;
      }
      else {
        piVar4 = __errno_location();
        *piVar4 = -0x4b;
      }
    }
    else {
      iVar1 = close(iVar1);
      if (iVar1 != -1) {
        if (local_c == (char *)0x0) {
          local_1c = -0x15;
        }
        else {
          local_1c = 0;
          if ((param_4 & 1) != 0) {
            local_18 = local_c;
            for (local_14 = local_c; (*local_14 != '\0' && (local_14 < local_c + (int)local_10));
                local_14 = local_14 + 1) {
              if ((*local_14 == '\\') && (local_14[1] == '\n')) {
                local_14 = local_14 + 1;
              }
              else {
                *local_18 = *local_14;
                local_18 = local_18 + 1;
              }
            }
            *local_18 = '\0';
            local_10 = local_18 + (1 - (int)local_c);
          }
        }
      }
    }
  }
  if (local_1c != 0) {
    if (local_c != (char *)0x0) {
      free(local_c);
    }
    local_c = (char *)0x0;
    local_10 = (char *)0x0;
  }
  if (param_2 == (undefined4 *)0x0) {
    if (local_c != (char *)0x0) {
      free(local_c);
    }
  }
  else {
    *param_2 = local_c;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = local_10;
  }
  return local_1c;
}



/* ===== FUN_00017758 @ 00017758 size=156 ===== */

int FUN_00017758(int param_1,char *param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x15c) == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = FUN_000170e8(param_2,1);
    if (iVar1 == 0) {
      iVar1 = strcmp(param_2,*(char **)(param_1 + 0x15c));
    }
    else {
      iVar1 = fnmatch(param_2,*(char **)(param_1 + 0x15c),*(int *)(DAT_000177f4 + 0x177b8));
    }
  }
  return iVar1;
}



/* ===== FUN_000177f8 @ 000177f8 size=2120 ===== */

undefined4 FUN_000177f8(int param_1,byte *param_2)

{
  byte *pbVar1;
  int iVar2;
  size_t sVar3;
  char *pcVar4;
  int iVar5;
  undefined4 local_6c [9];
  int local_48;
  byte *local_44;
  int local_40;
  byte *local_3c;
  byte *local_38;
  byte *local_34;
  byte *local_30;
  int local_2c;
  undefined4 *local_28;
  char *local_24;
  byte *local_20;
  int local_1c;
  int local_18;
  byte *local_14;
  
  iVar5 = DAT_00018040 + 0x17818;
  local_44 = (byte *)0x0;
  local_48 = 0;
  local_28 = local_6c;
  local_2c = -0x16;
  local_14 = param_2;
  if (*(int *)(param_1 + 0x15c) != 0) {
    memset(local_28,0,0x24);
    pbVar1 = local_14;
    local_30 = local_14;
    while ((*local_14 != 0 &&
           ((*(ushort *)(**(int **)(iVar5 + DAT_00018044) + (uint)*local_14 * 2) & 0x20) == 0))) {
      local_14 = local_14 + 1;
    }
    if (*local_14 != 0) {
      *local_14 = 0;
      local_14 = local_14 + 1;
      iVar2 = FUN_00017758(param_1,pbVar1);
      if (iVar2 == 0) {
        while ((*local_14 != 0 &&
               ((*(ushort *)(**(int **)(iVar5 + DAT_00018044) + (uint)*local_14 * 2) & 0x20) != 0)))
        {
          local_14 = local_14 + 1;
        }
        local_34 = local_14;
        while ((*local_14 != 0 &&
               ((*(ushort *)(**(int **)(iVar5 + DAT_00018044) + (uint)*local_14 * 2) & 0x20) == 0)))
        {
          local_14 = local_14 + 1;
        }
        if (*local_14 != 0) {
          *local_14 = 0;
          local_14 = local_14 + 1;
        }
        while ((pbVar1 = local_14, *local_14 != 0 &&
               ((*(ushort *)(**(int **)(iVar5 + DAT_00018044) + (uint)*local_14 * 2) & 0x20) != 0)))
        {
          local_14 = local_14 + 1;
        }
        if (*local_14 != 0) {
          local_38 = local_14;
          while ((*local_14 != 0 &&
                 ((*(ushort *)(**(int **)(iVar5 + DAT_00018044) + (uint)*local_14 * 2) & 0x20) == 0)
                 )) {
            local_14 = local_14 + 1;
          }
          if ((*pbVar1 != 0x2d) || (*local_14 != 0)) {
            if (*local_14 != 0) {
              *local_14 = 0;
              local_14 = local_14 + 1;
            }
            while ((*local_14 != 0 &&
                   ((*(ushort *)(**(int **)(iVar5 + DAT_00018044) + (uint)*local_14 * 2) & 0x20) !=
                    0))) {
              local_14 = local_14 + 1;
            }
            if ((*pbVar1 != 0x2d) || (*local_14 != 0)) {
              if ((*pbVar1 == 0x2d) && (pbVar1[1] == 0x2d)) {
                *local_28 = pbVar1 + 2;
              }
              else if ((*pbVar1 == 0x2d) && (pbVar1[2] == 0)) {
                *(byte *)(local_28 + 1) = pbVar1[1];
              }
              else {
                local_3c = pbVar1;
                local_2c = poptReadFile(pbVar1,&local_44,&local_48,1);
                if ((local_2c != 0) || ((local_44 == (byte *)0x0 || (local_48 == 0))))
                goto LAB_00018010;
                if (*local_14 != 0) {
                  sVar3 = strlen((char *)local_14);
                  local_40 = sVar3 + 1;
                  local_44 = realloc(local_44,local_48 + local_40);
                  if (local_44 == (byte *)0x0) goto LAB_00018010;
                  *(undefined2 *)(local_44 + local_48 + -1) =
                       *(undefined2 *)(DAT_00018048 + 0x17c30);
                  strcpy((char *)(local_44 + local_48 + -1 + 1),(char *)local_14);
                  local_48 = local_48 + local_40;
                }
                local_14 = local_44;
                pcVar4 = strrchr((char *)local_3c,0x2f);
                if (pcVar4 == (char *)0x0) {
                  local_20 = local_3c;
                }
                else {
                  local_20 = (byte *)(pcVar4 + 1);
                }
                if (local_20 == (byte *)0x0) goto LAB_00018010;
                if (local_20[1] == 0) {
                  *(byte *)(local_28 + 1) = *local_20;
                }
                else {
                  *local_28 = local_20;
                }
              }
              iVar5 = poptParseArgvString(local_14,local_28 + 7,local_28 + 8);
              if (iVar5 == 0) {
                local_28[2] = 0x40000000;
                local_1c = 0;
                for (local_18 = 0; local_18 < (int)local_28[7]; local_18 = local_18 + 1) {
                  iVar5 = strncmp(*(char **)(local_28[8] + local_18 * 4),
                                  (char *)(DAT_0001804c + 0x17d44),0xb);
                  if (iVar5 == 0) {
                    iVar5 = *(int *)(local_28[8] + local_18 * 4);
                    local_24 = (char *)(iVar5 + 0xc);
                    if ((*local_24 == '$') && (*(char *)(iVar5 + 0xd) == '\"')) {
                      local_24 = (char *)(iVar5 + 0xd);
                    }
                    local_28[5] = local_24;
                    local_28[2] = local_28[2] & 0xbfffffff;
                    local_1c = local_1c + -1;
                  }
                  else {
                    iVar5 = strncmp(*(char **)(local_28[8] + local_18 * 4),
                                    (char *)(DAT_00018050 + 0x17dfc),0xb);
                    if (iVar5 == 0) {
                      iVar5 = *(int *)(local_28[8] + local_18 * 4);
                      local_24 = (char *)(iVar5 + 0xc);
                      if ((*local_24 == '$') && (*(char *)(iVar5 + 0xd) == '\"')) {
                        local_24 = (char *)(iVar5 + 0xd);
                      }
                      local_28[6] = local_24;
                      local_28[2] = local_28[2] & 0xbfffffff;
                      local_28[2] = local_28[2] | 1;
                      local_1c = local_1c + -1;
                    }
                    else if (local_1c != local_18) {
                      *(undefined4 *)(local_28[8] + local_1c * 4) =
                           *(undefined4 *)(local_28[8] + local_18 * 4);
                    }
                  }
                  local_1c = local_1c + 1;
                }
                if (local_1c != local_18) {
                  *(undefined4 *)(local_28[8] + local_1c * 4) = 0;
                  local_28[7] = local_1c;
                }
                iVar5 = strcmp((char *)local_34,(char *)(DAT_00018054 + 0x17f50));
                if (iVar5 == 0) {
                  poptAddItem(param_1,local_28,0);
                }
                else {
                  iVar5 = strcmp((char *)local_34,(char *)(DAT_00018058 + 0x17f88));
                  if (iVar5 == 0) {
                    poptAddItem(param_1,local_28,1);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00018010:
  local_2c = 0;
  if (local_44 != (byte *)0x0) {
    free(local_44);
  }
  return local_2c;
}



/* ===== poptReadConfigFile @ 0001805c size=648 ===== */

int poptReadConfigFile(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  int local_2c;
  byte *local_28;
  byte *local_24;
  int local_20;
  byte *local_1c;
  byte *local_18;
  byte *local_14;
  
  iVar4 = DAT_000182e4 + 0x1807c;
  local_28 = (byte *)0x0;
  local_2c = 0;
  local_18 = (byte *)0x0;
  local_20 = poptReadFile(param_2,&local_28,&local_2c,1);
  if (local_20 == 0) {
    if ((local_28 == (byte *)0x0) || (local_2c == 0)) {
      local_20 = -0x16;
    }
    else {
      local_18 = malloc(local_2c + 1);
      if (local_18 != (byte *)0x0) {
        local_24 = local_28 + local_2c;
        local_1c = local_18;
        for (local_14 = local_28; local_14 < local_24; local_14 = local_14 + 1) {
          if (*local_14 == 10) {
            *local_1c = 0;
            local_1c = local_18;
            while ((*local_1c != 0 &&
                   ((*(ushort *)(**(int **)(iVar4 + DAT_000182e8) + (uint)*local_1c * 2) & 0x20) !=
                    0))) {
              local_1c = local_1c + 1;
            }
            if (((*local_1c != 0) && (*local_1c != 0x23)) &&
               (local_20 = FUN_000177f8(param_1,local_1c), local_20 != 0)) goto LAB_000182b4;
          }
          else if (*local_14 == 0x5c) {
            pbVar2 = local_14 + 1;
            *local_1c = *local_14;
            local_14 = pbVar2;
            if ((pbVar2 < local_24) && (*pbVar2 != 10)) {
              pbVar3 = local_1c + 1;
              local_1c = local_1c + 2;
              *pbVar3 = *pbVar2;
            }
          }
          else {
            *local_1c = *local_14;
            local_1c = local_1c + 1;
          }
        }
        local_20 = 0;
      }
    }
LAB_000182b4:
    free(local_18);
    if (local_28 != (byte *)0x0) {
      free(local_28);
    }
  }
  else {
    piVar1 = __errno_location();
    if (*piVar1 == 2) {
      local_20 = 0;
    }
  }
  return local_20;
}



/* ===== poptReadConfigFiles @ 000182ec size=492 ===== */

int poptReadConfigFiles(undefined4 param_1,char *param_2)

{
  size_t sVar1;
  int iVar2;
  int local_2c;
  void *local_28;
  undefined4 local_24;
  int local_20;
  char *local_1c;
  int local_18;
  int local_14;
  char *local_10;
  char *local_c;
  
  if (param_2 == (char *)0x0) {
    local_1c = (char *)0x0;
  }
  else {
    local_1c = strdup(param_2);
  }
  local_14 = 0;
  local_c = local_1c;
  while ((local_c != (char *)0x0 && (*local_c != '\0'))) {
    local_28 = (void *)0x0;
    local_2c = 0;
    local_10 = strchr(local_c,0x3a);
    if ((local_10 == (char *)0x0) || (*local_10 != ':')) {
      sVar1 = strlen(local_c);
      local_10 = local_c + sVar1;
    }
    else {
      *local_10 = '\0';
      local_10 = local_10 + 1;
    }
    local_20 = FUN_0001720c(param_1,local_c,&local_2c,&local_28);
    for (local_18 = 0; local_18 < local_2c; local_18 = local_18 + 1) {
      local_24 = *(undefined4 *)((int)local_28 + local_18 * 4);
      iVar2 = poptSaneFile(local_24);
      if (iVar2 != 0) {
        local_20 = poptReadConfigFile(param_1,local_24);
        if ((local_20 != 0) && (local_14 == 0)) {
          local_14 = local_20;
        }
        free(*(void **)((int)local_28 + local_18 * 4));
        *(undefined4 *)((int)local_28 + local_18 * 4) = 0;
      }
    }
    free(local_28);
    local_28 = (void *)0x0;
    local_c = local_10;
  }
  if (local_1c != (char *)0x0) {
    free(local_1c);
  }
  return local_14;
}



/* ===== poptReadDefaultConfig @ 000184d8 size=608 ===== */

int poptReadDefaultConfig(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  char *pcVar4;
  int local_80;
  void *local_7c;
  stat sStack_78;
  char *local_1c;
  char *local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  if ((*(int *)(param_1 + 0x15c) != 0) &&
     (local_c = poptReadConfigFile(param_1,DAT_00018738 + 0x18510,param_3,DAT_00018738 + 0x18510,
                                   param_2), local_c == 0)) {
    iVar2 = stat((char *)(DAT_0001873c + 0x1853c),&sStack_78);
    if ((iVar2 == 0) && ((sStack_78.st_mode & 0xf000) == 0x4000)) {
      local_7c = (void *)0x0;
      local_80 = 0;
      local_c = FUN_0001720c(param_1,DAT_00018740 + 0x18580,&local_80,&local_7c);
      if (local_c == 0) {
        for (local_10 = 0; (local_c == 0 && (local_10 < local_80)); local_10 = local_10 + 1) {
          local_14 = *(undefined4 *)((int)local_7c + local_10 * 4);
          iVar2 = poptSaneFile(local_14);
          if (iVar2 != 0) {
            local_c = poptReadConfigFile(param_1,local_14);
            free(*(void **)((int)local_7c + local_10 * 4));
            *(undefined4 *)((int)local_7c + local_10 * 4) = 0;
          }
        }
        free(local_7c);
        local_7c = (void *)0x0;
      }
    }
    if ((local_c == 0) &&
       (local_18 = (char *)secure_getenv(DAT_00018744 + 0x1866c), local_18 != (char *)0x0)) {
      sVar3 = strlen(local_18);
      local_1c = malloc(sVar3 + 0x14);
      if (local_1c == (char *)0x0) {
        local_c = -0x10;
      }
      else {
        pcVar4 = stpcpy(local_1c,local_18);
        iVar2 = DAT_00018748;
        *(undefined4 *)pcVar4 = *(undefined4 *)(DAT_00018748 + 0x186c8);
        cVar1 = *(char *)(iVar2 + 0x186ce);
        *(undefined2 *)(pcVar4 + 4) = *(undefined2 *)(iVar2 + 0x186cc);
        pcVar4[6] = cVar1;
        local_c = poptReadConfigFile(param_1,local_1c);
        free(local_1c);
      }
    }
  }
  return local_c;
}



/* ===== poptFini @ 0001874c size=40 ===== */

undefined4 poptFini(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = poptFreeContext(param_1);
  return uVar1;
}



/* ===== poptInit @ 00018774 size=244 ===== */

int poptInit(undefined4 param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  char *local_10;
  
  if (((param_2 == (int *)0x0) || (*param_2 == 0)) || (param_3 == 0)) {
    iVar2 = 0;
  }
  else {
    local_10 = strrchr((char *)*param_2,0x2f);
    if (local_10 == (char *)0x0) {
      local_10 = (char *)*param_2;
    }
    else {
      local_10 = local_10 + 1;
    }
    iVar2 = poptGetContext(local_10,param_1,param_2,param_3,0);
    if ((iVar2 != 0) && (iVar1 = poptReadConfigFiles(iVar2,param_4), iVar1 != 0)) {
      iVar2 = poptFini(iVar2);
    }
  }
  return iVar2;
}



/* ===== FUN_00018868 @ 00018868 size=52 ===== */

undefined4 FUN_00018868(void *param_1)

{
  if (param_1 != (void *)0x0) {
    free(param_1);
  }
  return 0;
}



/* ===== FUN_0001889c @ 0001889c size=128 ===== */

void FUN_0001889c(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(char *)(param_3 + 4) == '?') {
    poptPrintHelp(param_1,**(undefined4 **)(DAT_0001891c + 0x188c4 + DAT_00018920),0);
  }
  else {
    uVar1 = **(undefined4 **)(DAT_0001891c + 0x188c4 + DAT_00018920);
    poptPrintUsage(param_1,uVar1,0,uVar1,param_4,param_3,param_2);
  }
  poptFreeContext(param_1);
                    /* WARNING: Subroutine does not return */
  exit(0);
}



/* ===== FUN_00018924 @ 00018924 size=204 ===== */

uint FUN_00018924(FILE *param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_1c [2];
  ushort local_1a;
  int local_10;
  uint local_c;
  
  local_c = 0x4f;
  if (param_1 == (FILE *)0x0) {
    param_1 = (FILE *)**(undefined4 **)(DAT_000189f0 + 0x18940 + DAT_000189f4);
  }
  local_10 = fileno(param_1);
  memset(auStack_1c,0,8);
  if ((((-1 < local_10) && (iVar1 = ioctl(local_10,0x5413,auStack_1c), iVar1 == 0)) &&
      (uVar2 = (uint)local_1a, local_c < uVar2)) && (uVar2 < 0x100)) {
    local_c = uVar2 - 1;
  }
  return local_c;
}



/* ===== FUN_000189f8 @ 000189f8 size=92 ===== */

size_t FUN_000189f8(char *param_1)

{
  size_t sVar1;
  char *local_1c [2];
  mbstate_t mStack_14;
  size_t local_c;
  
  local_1c[0] = param_1;
  local_c = strlen(param_1);
  memset(&mStack_14,0,8);
  sVar1 = mbsrtowcs((wchar_t *)0x0,local_1c,local_c,&mStack_14);
  return sVar1;
}



/* ===== FUN_00018a54 @ 00018a54 size=140 ===== */

int FUN_00018a54(int *param_1)

{
  int iVar1;
  int *local_c;
  
  local_c = param_1;
  if (param_1 == (int *)0x0) {
LAB_00018acc:
    iVar1 = 0;
  }
  else {
    while( true ) {
      if (((*local_c == 0) && ((char)local_c[1] == '\0')) && (local_c[3] == 0)) goto LAB_00018acc;
      if (local_c[2] == 6) break;
      local_c = local_c + 7;
    }
    iVar1 = local_c[3];
  }
  return iVar1;
}



/* ===== FUN_00018ae0 @ 00018ae0 size=612 ===== */

int FUN_00018ae0(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_00018d44 + 0x18b00;
  if ((**(uint **)(iVar1 + DAT_00018d48) & *(uint *)(param_1 + 8)) == 0) {
    return 0;
  }
  if ((**(uint **)(iVar1 + DAT_00018d48) & *(uint *)(param_1 + 8)) == 0x1b) {
    return *(int *)(param_1 + 0x18);
  }
  if ((**(uint **)(iVar1 + DAT_00018d48) & *(uint *)(param_1 + 8)) == 0xc) {
    return *(int *)(param_1 + 0x18);
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    switch(**(uint **)(iVar1 + DAT_00018d48) & *(uint *)(param_1 + 8)) {
    case 0:
      return DAT_00018d58 + 0x18cc4;
    case 1:
      return DAT_00018d6c + 0x18d08;
    case 2:
      return DAT_00018d5c + 0x18cd8;
    case 3:
      return DAT_00018d64 + 0x18cf0;
    case 4:
      break;
    case 5:
      break;
    case 6:
      break;
    case 7:
      return 0;
    case 8:
      return DAT_00018d70 + 0x18d14;
    case 9:
      return DAT_00018d74 + 0x18d20;
    case 10:
      return DAT_00018d68 + 0x18cfc;
    case 0xb:
      break;
    case 0xc:
      return 0;
    case 0xd:
      return DAT_00018d60 + 0x18ce4;
    case 0xe:
      break;
    case 0xf:
      break;
    case 0x10:
      break;
    case 0x11:
      break;
    case 0x12:
      break;
    case 0x13:
      break;
    case 0x14:
      break;
    case 0x15:
      break;
    case 0x16:
      break;
    case 0x17:
      break;
    case 0x18:
      break;
    case 0x19:
      break;
    case 0x1a:
      break;
    case 0x1b:
      return 0;
    }
    return DAT_00018d78 + 0x18d3c;
  }
  if ((((param_1 != *(int *)(iVar1 + DAT_00018d4c) + 0x1c) &&
       (param_1 != *(int *)(iVar1 + DAT_00018d4c) + 0x38)) &&
      (iVar1 = strcmp(*(char **)(param_1 + 0x18),(char *)(DAT_00018d50 + 0x18bd0)), iVar1 != 0)) &&
     (iVar1 = strcmp(*(char **)(param_1 + 0x18),(char *)(DAT_00018d54 + 0x18bf8)), iVar1 != 0)) {
    return *(int *)(param_1 + 0x18);
  }
  return *(int *)(param_1 + 0x18);
}



/* ===== FUN_00018d7c @ 00018d7c size=1164 ===== */

undefined1 * FUN_00018d7c(int param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  size_t sVar3;
  char *pcVar4;
  float *pfVar5;
  char *__src;
  size_t __n;
  int iVar6;
  undefined4 local_28;
  undefined4 uStack_24;
  char *local_14;
  
  iVar6 = DAT_00019208 + 0x18da0;
  pcVar4 = (char *)(DAT_0001920c + 0x18da8);
  puVar2 = malloc(param_1 * 4 + 1);
  if (puVar2 == (undefined1 *)0x0) {
    return (undefined1 *)0x0;
  }
  *puVar2 = 0;
  *puVar2 = 0x28;
  pcVar4 = stpcpy(puVar2 + 1,pcVar4);
  *pcVar4 = ':';
  local_14 = pcVar4 + 2;
  pcVar4[1] = ' ';
  iVar1 = DAT_00019234;
  if (*(int *)(param_2 + 0xc) == 0) goto LAB_000191d8;
  pfVar5 = *(float **)(param_2 + 0xc);
  switch(**(uint **)(iVar6 + DAT_00019210) & *(uint *)(param_2 + 8)) {
  case 1:
    __src = (char *)*pfVar5;
    if (__src == (char *)0x0) {
      *(undefined4 *)local_14 = *(undefined4 *)(DAT_00019234 + 0x190c4);
      pcVar4[6] = *(char *)(iVar1 + 0x190c8);
      local_14 = pcVar4 + 6;
    }
    else {
      __n = (param_1 * 4 - ((int)local_14 - (int)puVar2)) - 4;
      pcVar4 = pcVar4 + 3;
      *local_14 = '\"';
      strncpy(pcVar4,__src,__n);
      pcVar4[__n] = '\0';
      sVar3 = strlen(pcVar4);
      pcVar4 = pcVar4 + sVar3;
      if ((sVar3 == __n) && (__src[__n] != '\0')) {
        pcVar4[-3] = '.';
        pcVar4[-2] = pcVar4[-3];
        pcVar4[-1] = pcVar4[-2];
      }
      local_14 = pcVar4 + 1;
      *pcVar4 = '\"';
    }
    goto LAB_000191d8;
  case 2:
    goto LAB_00018ee8;
  case 3:
    iVar6 = sprintf(local_14,(char *)(DAT_0001921c + 0x18f70),*pfVar5);
    local_14 = local_14 + iVar6;
    goto LAB_000191d8;
  case 4:
    break;
  case 5:
    break;
  case 6:
    break;
  case 7:
LAB_00018ee8:
    iVar6 = sprintf(local_14,(char *)(DAT_00019214 + 0x18f00),*pfVar5);
    local_14 = local_14 + iVar6;
    goto LAB_000191d8;
  case 8:
    local_28 = SUB84((double)*pfVar5,0);
    uStack_24 = (undefined4)((ulonglong)(double)*pfVar5 >> 0x20);
    iVar6 = sprintf(local_14,(char *)(DAT_00019224 + 0x18fe0),local_28,uStack_24);
    local_14 = local_14 + iVar6;
    goto LAB_000191d8;
  case 9:
    iVar6 = sprintf(local_14,(char *)(DAT_00019228 + 0x19010),*pfVar5,pfVar5[1]);
    local_14 = local_14 + iVar6;
    goto LAB_000191d8;
  case 10:
    iVar6 = sprintf(local_14,(char *)(DAT_00019220 + 0x18fa4),*pfVar5,pfVar5[1]);
    local_14 = local_14 + iVar6;
    goto LAB_000191d8;
  case 0xb:
    break;
  case 0xc:
    iVar6 = sprintf(local_14,(char *)(DAT_00019230 + 0x1907c),*(undefined4 *)(param_2 + 0xc));
    local_14 = local_14 + iVar6;
    goto LAB_000191d8;
  case 0xd:
    iVar6 = sprintf(local_14,(char *)(DAT_00019218 + 0x18f38),(int)*(short *)pfVar5);
    local_14 = local_14 + iVar6;
    goto LAB_000191d8;
  case 0xe:
    break;
  case 0xf:
    break;
  case 0x10:
    break;
  case 0x11:
    break;
  case 0x12:
    break;
  case 0x13:
    break;
  case 0x14:
    break;
  case 0x15:
    break;
  case 0x16:
    break;
  case 0x17:
    break;
  case 0x18:
    break;
  case 0x19:
    break;
  case 0x1a:
    break;
  case 0x1b:
    iVar6 = sprintf(local_14,(char *)(DAT_0001922c + 0x19044),*(undefined4 *)(param_2 + 0xc));
    local_14 = local_14 + iVar6;
LAB_000191d8:
    *local_14 = ')';
    local_14[1] = '\0';
    return puVar2;
  }
  FUN_00018868(puVar2);
  return (undefined1 *)0x0;
}



/* ===== FUN_00019238 @ 00019238 size=2380 ===== */

void FUN_00019238(FILE *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  bool bVar1;
  byte *pbVar2;
  size_t sVar3;
  size_t sVar4;
  byte *__dest;
  int iVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  int iVar11;
  byte *local_3c;
  byte *local_38;
  char *local_34;
  char *local_30;
  char *local_2c;
  char *local_28;
  size_t local_24;
  char *local_20;
  byte *local_1c;
  uint local_18;
  byte *local_14;
  
  iVar11 = DAT_00019b84 + 0x19260;
  iVar7 = *param_2;
  uVar8 = param_2[1] - (iVar7 + 5);
  local_14 = (byte *)param_3[5];
  pbVar2 = (byte *)FUN_00018ae0(param_3,param_4);
  if (((*(ushort *)(**(int **)(iVar11 + DAT_00019b88) + (uint)*(byte *)(param_3 + 1) * 2) & 0x40) ==
       0) || ((char)param_3[1] == ' ')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  local_1c = (byte *)0x0;
  local_24 = iVar7 + 1;
  local_28 = (char *)0x0;
  if (*param_3 != 0) {
    sVar3 = strlen((char *)*param_3);
    local_24 = local_24 + sVar3;
  }
  if ((param_3[2] & 0x200000U) != 0) {
    local_24 = local_24 + 4;
  }
  if (pbVar2 != (byte *)0x0) {
    sVar3 = strlen((char *)pbVar2);
    local_24 = local_24 + sVar3;
  }
  local_20 = malloc(local_24);
  if (local_20 == (char *)0x0) {
    return;
  }
  *local_20 = '\0';
  local_20[iVar7] = '\0';
  iVar5 = DAT_00019bb0;
  if ((!bVar1) && (*param_3 == 0)) goto LAB_00019b5c;
  if ((bVar1) && (*param_3 != 0)) {
    if (param_3[2] < 0) {
      pcVar9 = (char *)(DAT_00019b8c + 0x19410);
    }
    else {
      pcVar9 = (char *)(DAT_00019b90 + 0x1941c);
    }
    *local_20 = '-';
    local_20[1] = (char)param_3[1];
    cVar6 = *(char *)(DAT_00019b94 + 0x19452);
    *(undefined2 *)(local_20 + 2) = *(undefined2 *)(DAT_00019b94 + 0x19450);
    local_20[4] = cVar6;
    pcVar9 = stpcpy(local_20 + 4,pcVar9);
    strcpy(pcVar9,(char *)*param_3);
  }
  else if (bVar1) {
    *local_20 = '-';
    local_20[1] = (char)param_3[1];
    local_20[2] = '\0';
  }
  else if (*param_3 != 0) {
    if ((**(uint **)(iVar11 + DAT_00019b98) & param_3[2]) == 0x1b) {
      pcVar9 = (char *)(DAT_00019ba4 + 0x19530);
    }
    else if (param_3[2] < 0) {
      pcVar9 = (char *)(DAT_00019b9c + 0x19518);
    }
    else {
      pcVar9 = (char *)(DAT_00019ba0 + 0x19524);
    }
    pcVar10 = (char *)*param_3;
    local_2c = pcVar10;
    if ((param_3[2] & 0x200000U) == 0) {
      local_30 = (char *)(DAT_00019bac + 0x195b8);
    }
    else {
      local_30 = (char *)(DAT_00019ba8 + 0x1955c);
      if (((*pcVar10 == 'n') && (pcVar10[1] == 'o')) && (local_2c = pcVar10 + 2, pcVar10[2] == '-'))
      {
        local_2c = pcVar10 + 3;
      }
    }
    *(undefined4 *)local_20 = *(undefined4 *)(DAT_00019bb0 + 0x195c8);
    local_20[4] = *(char *)(iVar5 + 0x195cc);
    pcVar9 = stpcpy(local_20 + 4,pcVar9);
    pcVar9 = stpcpy(pcVar9,local_30);
    strcpy(pcVar9,local_2c);
  }
  if (pbVar2 == (byte *)0x0) goto LAB_000198fc;
  sVar3 = strlen(local_20);
  pcVar9 = local_20 + sVar3;
  local_34 = pcVar9;
  if ((param_3[2] & 0x10000000U) != 0) {
    local_34 = pcVar9 + 1;
    *pcVar9 = '[';
  }
  if (((param_3[2] & 0x800000U) != 0) &&
     (local_1c = (byte *)FUN_00018d7c(uVar8,param_3,param_4), local_1c != (byte *)0x0)) {
    if (local_14 == (byte *)0x0) {
      sVar3 = 0;
    }
    else {
      sVar3 = strlen((char *)local_14);
    }
    sVar4 = strlen((char *)local_1c);
    __dest = malloc(sVar3 + sVar4 + 2);
    if (__dest != (byte *)0x0) {
      local_38 = __dest;
      if (local_14 != (byte *)0x0) {
        local_38 = (byte *)stpcpy((char *)__dest,(char *)local_14);
      }
      *local_38 = 0x20;
      strcpy((char *)(local_38 + 1),(char *)local_1c);
      FUN_00018868(local_1c);
      local_1c = __dest;
    }
  }
  if (param_3[6] != 0) {
    pcVar9 = strchr((char *)(DAT_00019bb4 + 0x197f8),(uint)*pbVar2);
    if (pcVar9 == (char *)0x0) {
      if ((**(uint **)(iVar11 + DAT_00019b98) & param_3[2]) == 0x1b) {
        cVar6 = ' ';
      }
      else if ((**(uint **)(iVar11 + DAT_00019b98) & param_3[2]) == 0xc) {
        cVar6 = ' ';
      }
      else if (*param_3 == 0) {
        cVar6 = ' ';
      }
      else {
        cVar6 = '=';
      }
      *local_34 = cVar6;
      local_34 = local_34 + 1;
    }
    pcVar9 = stpcpy(local_34,(char *)pbVar2);
    iVar5 = FUN_000189f8(pbVar2);
    local_28 = pcVar9 + (-iVar5 - (int)local_34);
    local_34 = pcVar9;
    goto switchD_0001975c_default;
  }
  switch(**(uint **)(iVar11 + DAT_00019b98) & param_3[2]) {
  case 0:
    break;
  case 1:
    goto LAB_0001979c;
  case 2:
    goto LAB_0001979c;
  case 3:
    goto LAB_0001979c;
  case 4:
    break;
  case 5:
    break;
  case 6:
    break;
  case 7:
    break;
  case 8:
    goto LAB_0001979c;
  case 9:
    goto LAB_0001979c;
  case 10:
    goto LAB_0001979c;
  case 0xb:
    break;
  case 0xc:
    break;
  case 0xd:
LAB_0001979c:
    if (*param_3 == 0) {
      cVar6 = ' ';
    }
    else {
      cVar6 = '=';
    }
    *local_34 = cVar6;
    local_34 = stpcpy(local_34 + 1,(char *)pbVar2);
  }
switchD_0001975c_default:
  if ((param_3[2] & 0x10000000U) != 0) {
    *local_34 = ']';
    local_34 = local_34 + 1;
  }
  *local_34 = '\0';
LAB_000198fc:
  if (local_14 == (byte *)0x0) {
    FUN_0001c10c(param_1,DAT_00019bbc + 0x19958,local_20);
  }
  else {
    FUN_0001c10c(param_1,DAT_00019bb8 + 0x19928,local_28 + iVar7,local_20);
    local_20 = (char *)FUN_00018868(local_20);
    if (local_1c != (byte *)0x0) {
      local_14 = local_1c;
    }
    local_18 = strlen((char *)local_14);
    while (uVar8 < local_18) {
      local_3c = local_14 + (uVar8 - 1);
      while ((local_14 < local_3c &&
             ((*(ushort *)(**(int **)(iVar11 + DAT_00019b88) + (uint)*local_3c * 2) & 0x20) == 0)))
      {
        local_3c = (byte *)FUN_0001c058(local_3c);
      }
      if (local_3c == local_14) break;
      while ((local_14 + 1 < local_3c &&
             ((*(ushort *)(**(int **)(iVar11 + DAT_00019b88) + (uint)*local_3c * 2) & 0x20) != 0)))
      {
        local_3c = (byte *)FUN_0001c058(local_3c);
      }
      pbVar2 = (byte *)FUN_0001c0a4(local_3c);
      pcVar9 = strdup((char *)local_14);
      if (pcVar9 != (char *)0x0) {
        pcVar9[(int)pbVar2 - (int)local_14] = '\0';
        FUN_0001c10c(param_1,DAT_00019bc4 + 0x19aa4,pcVar9,iVar7 + 5,DAT_00019bc0 + 0x19a94);
        free(pcVar9);
      }
      while ((local_14 = pbVar2,
             (*(ushort *)(**(int **)(iVar11 + DAT_00019b88) + (uint)*local_14 * 2) & 0x20) != 0 &&
             (*local_14 != 0))) {
        pbVar2 = (byte *)FUN_0001c0a4(local_14);
      }
      local_18 = strlen((char *)local_14);
    }
    if (local_18 != 0) {
      fprintf(param_1,(char *)(DAT_00019bc8 + 0x19b44),local_14);
    }
  }
LAB_00019b5c:
  FUN_00018868(local_1c);
  FUN_00018868(local_20);
  return;
}



/* ===== FUN_00019bcc @ 00019bcc size=560 ===== */

uint FUN_00019bcc(int *param_1,undefined4 param_2)

{
  size_t sVar1;
  byte *pbVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int *local_24;
  int local_1c;
  uint local_18;
  uint local_14;
  
  iVar5 = DAT_00019dfc + 0x19bec;
  local_14 = 0;
  local_18 = 0;
  local_24 = param_1;
  if (param_1 != (int *)0x0) {
    for (; ((*local_24 != 0 || ((char)local_24[1] != '\0')) || (local_24[3] != 0));
        local_24 = local_24 + 7) {
      if ((**(uint **)(iVar5 + DAT_00019e00) & local_24[2]) == 4) {
        local_1c = local_24[3];
        if (local_1c == *(int *)(iVar5 + DAT_00019e04)) {
          local_1c = **(int **)(iVar5 + DAT_00019e08);
        }
        if (local_1c != 0) {
          local_18 = FUN_00019bcc(local_1c,param_2);
        }
        if (local_14 < local_18) {
          local_14 = local_18;
        }
      }
      else if ((local_24[2] & 0x40000000U) == 0) {
        local_18 = 6;
        if (*local_24 != 0) {
          if (local_24[2] < 0) {
            iVar4 = 1;
          }
          else {
            iVar4 = 2;
          }
          sVar1 = strlen((char *)*local_24);
          local_18 = iVar4 + 6 + sVar1;
        }
        pbVar2 = (byte *)FUN_00018ae0(local_24,param_2);
        if (pbVar2 != (byte *)0x0) {
          pcVar3 = strchr((char *)(DAT_00019e0c + 0x19d44),(uint)*pbVar2);
          if (pcVar3 == (char *)0x0) {
            local_18 = local_18 + 1;
          }
          iVar4 = FUN_000189f8(pbVar2);
          local_18 = local_18 + iVar4;
        }
        if ((local_24[2] & 0x10000000U) != 0) {
          local_18 = local_18 + 2;
        }
        if (local_14 < local_18) {
          local_14 = local_18;
        }
      }
    }
  }
  return local_14;
}



/* ===== FUN_00019e10 @ 00019e10 size=192 ===== */

void FUN_00019e10(undefined4 param_1,int *param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int local_10;
  int *local_c;
  
  if (param_2 != (int *)0x0) {
    local_c = param_2;
    for (local_10 = 0; local_10 < param_3; local_10 = local_10 + 1) {
      if (((*local_c != 0) || ((char)local_c[1] != '\0')) && ((local_c[2] & 0x40000000U) == 0)) {
        FUN_00019238(param_1,param_4,local_c,param_5);
      }
      local_c = local_c + 9;
    }
  }
  return;
}



/* ===== FUN_00019ed0 @ 00019ed0 size=636 ===== */

void FUN_00019ed0(int param_1,undefined4 param_2,int *param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int local_1c;
  int local_18;
  int *local_14;
  
  iVar1 = DAT_0001a14c + 0x19ef8;
  if (param_3 == *(int **)(iVar1 + DAT_0001a150)) {
    FUN_00019e10(param_2,*(undefined4 *)(param_1 + 0x160),*(undefined4 *)(param_1 + 0x164),param_4,0
                );
    FUN_00019e10(param_2,*(undefined4 *)(param_1 + 0x16c),*(undefined4 *)(param_1 + 0x170),param_4,0
                );
  }
  else {
    local_14 = param_3;
    if (param_3 != (int *)0x0) {
      for (; ((*local_14 != 0 || ((char)local_14[1] != '\0')) || (local_14[3] != 0));
          local_14 = local_14 + 7) {
        if (((*local_14 != 0) || ((char)local_14[1] != '\0')) && ((local_14[2] & 0x40000000U) == 0))
        {
          FUN_00019238(param_2,param_4,local_14,param_5);
        }
      }
    }
    local_14 = param_3;
    if (param_3 != (int *)0x0) {
      for (; ((*local_14 != 0 || ((char)local_14[1] != '\0')) || (local_14[3] != 0));
          local_14 = local_14 + 7) {
        local_1c = local_14[3];
        if ((**(uint **)(iVar1 + DAT_0001a154) & local_14[2]) == 4) {
          if (local_1c == *(int *)(iVar1 + DAT_0001a158)) {
            local_1c = **(int **)(iVar1 + DAT_0001a15c);
          }
          local_18 = FUN_00018a54(local_1c);
          if (local_18 == 0) {
            local_18 = param_5;
          }
          if (((local_1c != *(int *)(iVar1 + DAT_0001a150)) || (*(int *)(param_1 + 0x164) != 0)) ||
             (*(int *)(param_1 + 0x170) != 0)) {
            if (local_14[5] != 0) {
              FUN_0001c10c(param_2,DAT_0001a160 + 0x1a0d4,local_14[5]);
            }
            FUN_00019ed0(param_1,param_2,local_1c,param_4,local_18);
          }
        }
      }
    }
  }
  return;
}



/* ===== FUN_0001a164 @ 0001a164 size=272 ===== */

size_t FUN_0001a164(int param_1,FILE *param_2)

{
  size_t sVar1;
  size_t sVar2;
  char *pcVar3;
  char *local_10;
  
  pcVar3 = (char *)(DAT_0001a274 + 0x1a184);
  sVar1 = strlen(pcVar3);
  FUN_0001c10c(param_2,DAT_0001a278 + 0x1a1a0,pcVar3);
  if ((*(uint *)(param_1 + 0x168) & 2) == 0) {
    if (*(int *)(param_1 + 4) == 0) {
      local_10 = (char *)0x0;
    }
    else {
      local_10 = (char *)**(undefined4 **)(param_1 + 4);
    }
    if (local_10 != (char *)0x0) {
      pcVar3 = strchr(local_10,0x2f);
      if (pcVar3 != (char *)0x0) {
        local_10 = strrchr(local_10,0x2f);
        local_10 = local_10 + 1;
      }
      fprintf(param_2,(char *)(DAT_0001a27c + 0x1a240),local_10);
      sVar2 = strlen(local_10);
      sVar1 = sVar2 + sVar1 + 1;
    }
  }
  return sVar1;
}



/* ===== poptPrintHelp @ 0001a280 size=256 ===== */

void poptPrintHelp(int param_1,undefined4 param_2)

{
  undefined4 *__ptr;
  undefined4 uVar1;
  
  __ptr = calloc(1,8);
  FUN_0001a164(param_1,param_2);
  if (*(int *)(param_1 + 0x194) == 0) {
    FUN_0001c10c(param_2,DAT_0001a388 + 0x1a304,DAT_0001a384 + 0x1a2f8);
  }
  else {
    FUN_0001c10c(param_2,DAT_0001a380 + 0x1a2e0,*(undefined4 *)(param_1 + 0x194));
  }
  if (__ptr != (undefined4 *)0x0) {
    uVar1 = FUN_00019bcc(*(undefined4 *)(param_1 + 0x154),0);
    *__ptr = uVar1;
    uVar1 = FUN_00018924(param_2);
    __ptr[1] = uVar1;
    FUN_00019ed0(param_1,param_2,*(undefined4 *)(param_1 + 0x154),__ptr,0);
    free(__ptr);
  }
  return;
}



/* ===== FUN_0001a38c @ 0001a38c size=976 ===== */

int FUN_0001a38c(FILE *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  bool bVar1;
  char cVar2;
  byte *__s;
  size_t sVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int local_14;
  
  iVar7 = DAT_0001a75c + 0x1a3b4;
  __s = (byte *)FUN_00018ae0(param_3,param_4);
  if (((*(ushort *)(**(int **)(iVar7 + DAT_0001a760) + (uint)*(byte *)(param_3 + 1) * 2) & 0x40) ==
       0) || ((char)param_3[1] == ' ')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((bVar1) || (*param_3 != 0)) {
    local_14 = 3;
    if (bVar1) {
      local_14 = 5;
    }
    if (*param_3 != 0) {
      if (bVar1) {
        local_14 = local_14 + 1;
      }
      if (param_3[2] < 0) {
        iVar7 = 1;
      }
      else {
        iVar7 = 2;
      }
      sVar3 = strlen((char *)*param_3);
      local_14 = local_14 + iVar7 + sVar3;
    }
    if (__s != (byte *)0x0) {
      pcVar4 = strchr((char *)(DAT_0001a764 + 0x1a4f0),(uint)*__s);
      if (pcVar4 == (char *)0x0) {
        local_14 = local_14 + 1;
      }
      iVar7 = FUN_000189f8(__s);
      local_14 = local_14 + iVar7;
    }
    if ((uint)param_2[1] < (uint)(*param_2 + local_14)) {
      fwrite((void *)(DAT_0001a768 + 0x1a55c),1,8,param_1);
      *param_2 = 7;
    }
    fwrite((void *)(DAT_0001a76c + 0x1a580),1,2,param_1);
    if (bVar1) {
      fprintf(param_1,(char *)(DAT_0001a770 + 0x1a5a4),(uint)*(byte *)(param_3 + 1));
    }
    if (*param_3 != 0) {
      if (bVar1) {
        iVar7 = DAT_0001a774 + 0x1a5d4;
      }
      else {
        iVar7 = DAT_0001a778 + 0x1a5e4;
      }
      if (param_3[2] < 0) {
        iVar5 = DAT_0001a77c + 0x1a600;
      }
      else {
        iVar5 = DAT_0001a780 + 0x1a610;
      }
      fprintf(param_1,(char *)(DAT_0001a784 + 0x1a62c),iVar7,iVar5,*param_3);
    }
    if (__s != (byte *)0x0) {
      pcVar4 = strchr((char *)(DAT_0001a788 + 0x1a654),(uint)*__s);
      if (pcVar4 == (char *)0x0) {
        if (param_1->_chain == (_IO_FILE *)0x0) {
          if (*param_3 == 0) {
            iVar7 = 0x20;
          }
          else {
            iVar7 = 0x3d;
          }
          fputc(iVar7,param_1);
        }
        else if (param_1->_IO_write_base < param_1->_IO_buf_base) {
          if (*param_3 == 0) {
            cVar2 = ' ';
          }
          else {
            cVar2 = '=';
          }
          pcVar4 = param_1->_IO_write_base;
          param_1->_IO_write_base = pcVar4 + 1;
          *pcVar4 = cVar2;
        }
        else {
          if (*param_3 == 0) {
            uVar6 = 0x20;
          }
          else {
            uVar6 = 0x3d;
          }
          __fputc_unlocked(uVar6,param_1);
        }
      }
      fputs((char *)__s,param_1);
    }
    fputc(0x5d,param_1);
    iVar7 = *param_2 + local_14 + 1;
  }
  else {
    iVar7 = *param_2;
  }
  return iVar7;
}



/* ===== FUN_0001a78c @ 0001a78c size=260 ===== */

undefined4 FUN_0001a78c(undefined4 param_1,undefined4 *param_2,int *param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  int *local_24;
  int local_14;
  
  iVar2 = DAT_0001a890 + 0x1a7b4;
  if (param_3 != (int *)0x0) {
    local_24 = param_3;
    for (local_14 = 0; local_14 < param_4; local_14 = local_14 + 1) {
      if ((**(uint **)(iVar2 + DAT_0001a894) & local_24[2]) == 6) {
        param_5 = local_24[3];
      }
      else if (((*local_24 != 0) || ((char)local_24[1] != '\0')) &&
              ((local_24[2] & 0x40000000U) == 0)) {
        uVar1 = FUN_0001a38c(param_1,param_2,local_24,param_5);
        *param_2 = uVar1;
      }
      local_24 = local_24 + 9;
    }
  }
  return *param_2;
}



/* ===== FUN_0001a898 @ 0001a898 size=672 ===== */

undefined4
FUN_0001a898(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int *param_4,int param_5,
            int *param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *local_30;
  int local_18;
  int local_14;
  
  iVar3 = DAT_0001ab38 + 0x1a8c0;
  local_30 = param_4;
  if (param_4 != (int *)0x0) {
    for (; ((*local_30 != 0 || ((char)local_30[1] != '\0')) || (local_30[3] != 0));
        local_30 = local_30 + 7) {
      if ((**(uint **)(iVar3 + DAT_0001ab3c) & local_30[2]) == 6) {
        param_5 = local_30[3];
      }
      else if ((**(uint **)(iVar3 + DAT_0001ab3c) & local_30[2]) == 4) {
        local_14 = local_30[3];
        if (local_14 == *(int *)(iVar3 + DAT_0001ab40)) {
          local_14 = **(int **)(iVar3 + DAT_0001ab44);
        }
        if (param_6 != (int *)0x0) {
          local_18 = 0;
          if (param_6[2] != 0) {
            for (local_18 = 0;
                (local_18 < *param_6 &&
                ((iVar2 = *(int *)(param_6[2] + local_18 * 4), iVar2 == 0 || (iVar2 != local_14))));
                local_18 = local_18 + 1) {
            }
          }
          if ((local_14 == 0) || (local_18 < *param_6)) goto LAB_0001aae8;
          if ((param_6[2] != 0) && (*param_6 < param_6[1])) {
            iVar2 = *param_6;
            *param_6 = iVar2 + 1;
            *(int *)(param_6[2] + iVar2 * 4) = local_14;
          }
        }
        uVar1 = FUN_0001a898(param_1,param_2,param_3,local_30[3],param_5,param_6);
        *param_3 = uVar1;
      }
      else if (((*local_30 != 0) || ((char)local_30[1] != '\0')) &&
              ((local_30[2] & 0x40000000U) == 0)) {
        uVar1 = FUN_0001a38c(param_2,param_3,local_30,param_5);
        *param_3 = uVar1;
      }
LAB_0001aae8:
    }
  }
  return *param_3;
}



/* ===== FUN_0001ab48 @ 0001ab48 size=616 ===== */

int FUN_0001ab48(int *param_1,FILE *param_2,char *param_3)

{
  char *__s;
  char *pcVar1;
  size_t sVar2;
  int iVar3;
  int *local_24;
  int local_18;
  int local_14;
  
  iVar3 = DAT_0001adb0 + 0x1ab6c;
  __s = param_3;
  if (param_3 == (char *)0x0) {
    __s = calloc(1,300);
  }
  local_14 = 0;
  if (__s == (char *)0x0) {
    local_14 = 0;
  }
  else {
    local_24 = param_1;
    if (param_1 != (int *)0x0) {
      for (; ((*local_24 != 0 || ((char)local_24[1] != '\0')) || (local_24[3] != 0));
          local_24 = local_24 + 7) {
        if ((((local_24[2] & 0x40000000U) == 0) && ((char)local_24[1] != '\0')) &&
           ((**(uint **)(iVar3 + DAT_0001adb4) & local_24[2]) == 0)) {
          pcVar1 = strchr(__s,(uint)*(byte *)(local_24 + 1));
          if (((pcVar1 == (char *)0x0) &&
              ((*(ushort *)(**(int **)(iVar3 + DAT_0001adb8) + (uint)*(byte *)(local_24 + 1) * 2) &
               0x40) != 0)) && ((char)local_24[1] != ' ')) {
            sVar2 = strlen(__s);
            __s[sVar2] = (char)local_24[1];
          }
        }
        else if ((**(uint **)(iVar3 + DAT_0001adb4) & local_24[2]) == 4) {
          local_18 = local_24[3];
          if (local_18 == *(int *)(iVar3 + DAT_0001adbc)) {
            local_18 = **(int **)(iVar3 + DAT_0001adc0);
          }
          if (local_18 != 0) {
            local_14 = FUN_0001ab48(local_18,param_2,__s);
          }
        }
      }
    }
    if ((__s != param_3) && (*__s != '\0')) {
      fprintf(param_2,(char *)(DAT_0001adc4 + 0x1ad6c),__s);
      sVar2 = strlen(__s);
      local_14 = sVar2 + 4;
    }
    if (__s != param_3) {
      free(__s);
    }
  }
  return local_14;
}



/* ===== poptPrintUsage @ 0001adc8 size=680 ===== */

void poptPrintUsage(int param_1,FILE *param_2)

{
  int *piVar1;
  uint uVar2;
  void *pvVar3;
  size_t sVar4;
  int iVar5;
  int local_24 [3];
  int *local_18;
  uint *local_14;
  
  local_14 = calloc(1,8);
  local_18 = local_24;
  memset(local_18,0,0xc);
  *local_18 = 0;
  local_18[1] = 0x40;
  if (local_14 != (uint *)0x0) {
    *local_14 = local_18[1] << 2;
    uVar2 = FUN_00018924(param_2);
    local_14[1] = uVar2;
    pvVar3 = calloc(1,*local_14);
    local_18[2] = (int)pvVar3;
    if (local_18[2] != 0) {
      piVar1 = local_18 + 2;
      iVar5 = *local_18;
      *local_18 = iVar5 + 1;
      *(undefined4 *)(*piVar1 + iVar5 * 4) = *(undefined4 *)(param_1 + 0x154);
    }
    uVar2 = FUN_0001a164(param_1,param_2);
    *local_14 = uVar2;
    iVar5 = FUN_0001ab48(*(undefined4 *)(param_1 + 0x154),param_2,0);
    *local_14 = iVar5 + *local_14;
    uVar2 = FUN_0001a898(param_1,param_2,local_14,*(undefined4 *)(param_1 + 0x154),0,local_18);
    *local_14 = uVar2;
    uVar2 = FUN_0001a78c(param_2,local_14,*(undefined4 *)(param_1 + 0x160),
                         *(undefined4 *)(param_1 + 0x164),0);
    *local_14 = uVar2;
    uVar2 = FUN_0001a78c(param_2,local_14,*(undefined4 *)(param_1 + 0x16c),
                         *(undefined4 *)(param_1 + 0x170),0);
    *local_14 = uVar2;
    if (*(int *)(param_1 + 0x194) != 0) {
      uVar2 = *local_14;
      sVar4 = strlen(*(char **)(param_1 + 0x194));
      *local_14 = uVar2 + sVar4 + 1;
      if (local_14[1] < *local_14) {
        fwrite((void *)(DAT_0001b070 + 0x1b010),1,8,param_2);
      }
      fprintf(param_2,(char *)(DAT_0001b074 + 0x1b028),*(undefined4 *)(param_1 + 0x194));
    }
    fputc(10,param_2);
    if (local_18[2] != 0) {
      free((void *)local_18[2]);
    }
    free(local_14);
  }
  return;
}



/* ===== poptSetOtherOptionHelp @ 0001b078 size=84 ===== */

void poptSetOtherOptionHelp(int param_1,char *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  
  uVar1 = FUN_00018868(*(undefined4 *)(param_1 + 0x194));
  *(undefined4 *)(param_1 + 0x194) = uVar1;
  pcVar2 = strdup(param_2);
  *(char **)(param_1 + 0x194) = pcVar2;
  return;
}



/* ===== FUN_0001b0cc @ 0001b0cc size=3980 ===== */

void FUN_0001b0cc(uint *param_1,uint param_2,uint *param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint local_30;
  uint *local_20;
  uint *local_1c;
  uint *local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  local_10 = *param_3 + param_2 + 0xdeadbeef;
  local_14 = local_10;
  if (param_1 == (uint *)0x0) goto LAB_0001c030;
  local_14 = local_10 + *param_4;
  local_30 = param_2;
  local_18 = param_1;
  local_c = local_10;
  if (((uint)param_1 & 3) == 0) {
    for (; 0xc < local_30; local_30 = local_30 - 0xc) {
      local_14 = local_14 + local_18[2];
      uVar3 = (local_14 >> 0x1c | local_14 * 0x10) ^ (local_c + *local_18) - local_14;
      iVar1 = local_14 + local_10 + local_18[1];
      uVar4 = (uVar3 >> 0x1a | uVar3 << 6) ^ (local_10 + local_18[1]) - uVar3;
      iVar2 = uVar3 + iVar1;
      uVar3 = (uVar4 >> 0x18 | uVar4 << 8) ^ iVar1 - uVar4;
      iVar1 = uVar4 + iVar2;
      local_c = (uVar3 >> 0x10 | uVar3 << 0x10) ^ iVar2 - uVar3;
      iVar2 = uVar3 + iVar1;
      local_10 = (local_c >> 0xd | local_c << 0x13) ^ iVar1 - local_c;
      local_c = local_c + iVar2;
      local_14 = (local_10 >> 0x1c | local_10 << 4) ^ iVar2 - local_10;
      local_10 = local_10 + local_c;
      local_18 = local_18 + 3;
    }
    switch(local_30) {
    case 0:
      goto LAB_0001c030;
    case 1:
      local_c = local_c + (*local_18 & 0xff);
      break;
    case 2:
      local_c = local_c + (*local_18 & 0xffff);
      break;
    case 3:
      local_c = local_c + (*local_18 & 0xffffff);
      break;
    case 4:
      local_c = local_c + *local_18;
      break;
    case 5:
      local_10 = local_10 + (local_18[1] & 0xff);
      local_c = local_c + *local_18;
      break;
    case 6:
      local_10 = local_10 + (local_18[1] & 0xffff);
      local_c = local_c + *local_18;
      break;
    case 7:
      local_10 = local_10 + (local_18[1] & 0xffffff);
      local_c = local_c + *local_18;
      break;
    case 8:
      local_10 = local_10 + local_18[1];
      local_c = local_c + *local_18;
      break;
    case 9:
      local_14 = local_14 + (local_18[2] & 0xff);
      local_10 = local_10 + local_18[1];
      local_c = local_c + *local_18;
      break;
    case 10:
      local_14 = local_14 + (local_18[2] & 0xffff);
      local_10 = local_10 + local_18[1];
      local_c = local_c + *local_18;
      break;
    case 0xb:
      local_14 = local_14 + (local_18[2] & 0xffffff);
      local_10 = local_10 + local_18[1];
      local_c = local_c + *local_18;
      break;
    case 0xc:
      local_14 = local_14 + local_18[2];
      local_10 = local_10 + local_18[1];
      local_c = local_c + *local_18;
    }
    goto switchD_0001b310_default;
  }
  local_20 = param_1;
  local_1c = param_1;
  if (((uint)param_1 & 1) != 0) {
    for (; 0xc < local_30; local_30 = local_30 - 0xc) {
      iVar1 = local_10 + (byte)local_20[1] + (uint)*(byte *)((int)local_20 + 5) * 0x100 +
              (uint)*(byte *)((int)local_20 + 6) * 0x10000 +
              (uint)*(byte *)((int)local_20 + 7) * 0x1000000;
      uVar3 = local_14 + (byte)local_20[2] + (uint)*(byte *)((int)local_20 + 9) * 0x100 +
              (uint)*(byte *)((int)local_20 + 10) * 0x10000 +
              (uint)*(byte *)((int)local_20 + 0xb) * 0x1000000;
      uVar4 = (uVar3 >> 0x1c | uVar3 * 0x10) ^
              (local_c + (byte)*local_20 + (uint)*(byte *)((int)local_20 + 1) * 0x100 +
               (uint)*(byte *)((int)local_20 + 2) * 0x10000 +
              (uint)*(byte *)((int)local_20 + 3) * 0x1000000) - uVar3;
      iVar2 = uVar3 + iVar1;
      uVar3 = (uVar4 >> 0x1a | uVar4 << 6) ^ iVar1 - uVar4;
      iVar1 = uVar4 + iVar2;
      uVar4 = (uVar3 >> 0x18 | uVar3 << 8) ^ iVar2 - uVar3;
      iVar2 = uVar3 + iVar1;
      local_c = (uVar4 >> 0x10 | uVar4 << 0x10) ^ iVar1 - uVar4;
      iVar1 = uVar4 + iVar2;
      local_10 = (local_c >> 0xd | local_c << 0x13) ^ iVar2 - local_c;
      local_c = local_c + iVar1;
      local_14 = (local_10 >> 0x1c | local_10 << 4) ^ iVar1 - local_10;
      local_10 = local_10 + local_c;
      local_20 = local_20 + 3;
    }
    switch(local_30) {
    case 0:
      goto LAB_0001c030;
    case 1:
      goto LAB_0001beec;
    case 2:
      goto LAB_0001bed0;
    case 3:
      goto LAB_0001beb4;
    case 4:
      goto LAB_0001be98;
    case 5:
      goto LAB_0001be7c;
    case 6:
      goto LAB_0001be60;
    case 7:
      goto LAB_0001be44;
    case 8:
      goto LAB_0001be28;
    case 9:
      goto LAB_0001be0c;
    case 10:
      goto LAB_0001bdf0;
    case 0xb:
      break;
    case 0xc:
      local_14 = local_14 + (uint)*(byte *)((int)local_20 + 0xb) * 0x1000000;
      break;
    default:
      goto switchD_0001b310_default;
    }
    local_14 = local_14 + (uint)*(byte *)((int)local_20 + 10) * 0x10000;
LAB_0001bdf0:
    local_14 = local_14 + (uint)*(byte *)((int)local_20 + 9) * 0x100;
LAB_0001be0c:
    local_14 = local_14 + (byte)local_20[2];
LAB_0001be28:
    local_10 = local_10 + (uint)*(byte *)((int)local_20 + 7) * 0x1000000;
LAB_0001be44:
    local_10 = local_10 + (uint)*(byte *)((int)local_20 + 6) * 0x10000;
LAB_0001be60:
    local_10 = local_10 + (uint)*(byte *)((int)local_20 + 5) * 0x100;
LAB_0001be7c:
    local_10 = local_10 + (byte)local_20[1];
LAB_0001be98:
    local_c = local_c + (uint)*(byte *)((int)local_20 + 3) * 0x1000000;
LAB_0001beb4:
    local_c = local_c + (uint)*(byte *)((int)local_20 + 2) * 0x10000;
LAB_0001bed0:
    local_c = local_c + (uint)*(byte *)((int)local_20 + 1) * 0x100;
LAB_0001beec:
    local_c = local_c + (byte)*local_20;
    goto switchD_0001b310_default;
  }
  for (; 0xc < local_30; local_30 = local_30 - 0xc) {
    iVar1 = local_10 + (uint)(ushort)local_1c[1] + (uint)*(ushort *)((int)local_1c + 6) * 0x10000;
    local_14 = local_14 +
               (uint)(ushort)local_1c[2] + (uint)*(ushort *)((int)local_1c + 10) * 0x10000;
    uVar3 = (local_14 >> 0x1c | local_14 * 0x10) ^
            (local_c + (uint)(ushort)*local_1c + (uint)*(ushort *)((int)local_1c + 2) * 0x10000) -
            local_14;
    iVar2 = local_14 + iVar1;
    uVar4 = (uVar3 >> 0x1a | uVar3 << 6) ^ iVar1 - uVar3;
    iVar1 = uVar3 + iVar2;
    uVar3 = (uVar4 >> 0x18 | uVar4 << 8) ^ iVar2 - uVar4;
    iVar2 = uVar4 + iVar1;
    local_c = (uVar3 >> 0x10 | uVar3 << 0x10) ^ iVar1 - uVar3;
    iVar1 = uVar3 + iVar2;
    local_10 = (local_c >> 0xd | local_c << 0x13) ^ iVar2 - local_c;
    local_c = local_c + iVar1;
    local_14 = (local_10 >> 0x1c | local_10 << 4) ^ iVar1 - local_10;
    local_10 = local_10 + local_c;
    local_1c = local_1c + 3;
  }
  switch(local_30) {
  case 0:
    goto LAB_0001c030;
  case 1:
    local_c = local_c + (byte)*local_1c;
    break;
  case 2:
    goto LAB_0001ba84;
  case 3:
    local_c = local_c + (uint)*(byte *)((int)local_1c + 2) * 0x10000;
LAB_0001ba84:
    local_c = local_c + (ushort)*local_1c;
    break;
  case 4:
    goto LAB_0001ba38;
  case 5:
    local_10 = local_10 + (byte)local_1c[1];
LAB_0001ba38:
    local_c = local_c + (uint)(ushort)*local_1c + (uint)*(ushort *)((int)local_1c + 2) * 0x10000;
    break;
  case 6:
    goto LAB_0001b9d0;
  case 7:
    local_10 = local_10 + (uint)*(byte *)((int)local_1c + 6) * 0x10000;
LAB_0001b9d0:
    local_10 = local_10 + (ushort)local_1c[1];
    local_c = local_c + (uint)(ushort)*local_1c + (uint)*(ushort *)((int)local_1c + 2) * 0x10000;
    break;
  case 8:
    goto LAB_0001b954;
  case 9:
    local_14 = local_14 + (byte)local_1c[2];
LAB_0001b954:
    local_10 = local_10 + (uint)(ushort)local_1c[1] + (uint)*(ushort *)((int)local_1c + 6) * 0x10000
    ;
    local_c = local_c + (uint)(ushort)*local_1c + (uint)*(ushort *)((int)local_1c + 2) * 0x10000;
    break;
  case 10:
    goto LAB_0001b8bc;
  case 0xb:
    local_14 = local_14 + (uint)*(byte *)((int)local_1c + 10) * 0x10000;
LAB_0001b8bc:
    local_14 = local_14 + (ushort)local_1c[2];
    local_10 = local_10 + (uint)(ushort)local_1c[1] + (uint)*(ushort *)((int)local_1c + 6) * 0x10000
    ;
    local_c = local_c + (uint)(ushort)*local_1c + (uint)*(ushort *)((int)local_1c + 2) * 0x10000;
    break;
  case 0xc:
    local_14 = local_14 +
               (uint)(ushort)local_1c[2] + (uint)*(ushort *)((int)local_1c + 10) * 0x10000;
    local_10 = local_10 + (uint)(ushort)local_1c[1] + (uint)*(ushort *)((int)local_1c + 6) * 0x10000
    ;
    local_c = local_c + (uint)(ushort)*local_1c + (uint)*(ushort *)((int)local_1c + 2) * 0x10000;
  }
switchD_0001b310_default:
  uVar3 = (local_10 ^ local_14) - (local_10 >> 0x12 | local_10 << 0xe);
  uVar4 = (uVar3 ^ local_c) - (uVar3 >> 0x15 | uVar3 * 0x800);
  uVar5 = (uVar4 ^ local_10) - (uVar4 >> 7 | uVar4 * 0x2000000);
  uVar3 = (uVar5 ^ uVar3) - (uVar5 >> 0x10 | uVar5 * 0x10000);
  uVar4 = (uVar3 ^ uVar4) - (uVar3 >> 0x1c | uVar3 * 0x10);
  local_10 = (uVar4 ^ uVar5) - (uVar4 >> 0x12 | uVar4 * 0x4000);
  local_14 = (local_10 ^ uVar3) - (local_10 >> 8 | local_10 * 0x1000000);
LAB_0001c030:
  *param_3 = local_14;
  *param_4 = local_10;
  return;
}



/* ===== FUN_0001c058 @ 0001c058 size=76 ===== */

byte * FUN_0001c058(byte *param_1)

{
  byte *local_c;
  
  local_c = param_1;
  do {
    local_c = local_c + -1;
  } while ((*local_c & 0xc0) == 0x80);
  return local_c;
}



/* ===== FUN_0001c0a4 @ 0001c0a4 size=104 ===== */

byte * FUN_0001c0a4(byte *param_1)

{
  byte *local_c;
  
  local_c = param_1;
  do {
    if (*local_c == 0) {
      return local_c;
    }
    local_c = local_c + 1;
  } while ((*local_c & 0xc0) == 0x80);
  return local_c;
}



/* ===== FUN_0001c10c @ 0001c10c size=284 ===== */

int FUN_0001c10c(FILE *param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint local_24;
  int local_20;
  char *local_1c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_1c = (char *)0x0;
  local_24 = 1;
  uStack_8 = param_3;
  uStack_4 = param_4;
  while (local_1c = realloc(local_1c,local_24 + 1), local_1c != (char *)0x0) {
    uVar1 = vsnprintf(local_1c,local_24,param_2,&uStack_8);
    if ((int)uVar1 < 0) {
      uVar1 = local_24;
      if (local_24 < 100) {
        uVar1 = 100;
      }
      local_24 = local_24 + uVar1;
    }
    else {
      if (uVar1 < local_24) break;
      local_24 = uVar1 + 1;
    }
  }
  local_20 = 0;
  if (local_1c != (char *)0x0) {
    local_20 = fprintf(param_1,(char *)(DAT_0001c228 + 0x1c1fc),local_1c);
    free(local_1c);
  }
  return local_20;
}



/* ===== poptDupArgv @ 0001c22c size=500 ===== */

undefined4 poptDupArgv(int param_1,int param_2,int *param_3,undefined4 *param_4)

{
  size_t sVar1;
  void *__ptr;
  undefined4 uVar2;
  int local_14;
  char *local_10;
  size_t local_c;
  
  local_c = (param_1 + 1) * 4;
  if ((param_1 < 1) || (param_2 == 0)) {
    uVar2 = 0xfffffff6;
  }
  else {
    for (local_14 = 0; local_14 < param_1; local_14 = local_14 + 1) {
      if (*(int *)(param_2 + local_14 * 4) == 0) {
        return 0xfffffff6;
      }
      sVar1 = strlen(*(char **)(param_2 + local_14 * 4));
      local_c = sVar1 + local_c + 1;
    }
    __ptr = malloc(local_c);
    if (__ptr == (void *)0x0) {
      uVar2 = 0xffffffeb;
    }
    else {
      local_10 = (char *)((int)__ptr + (param_1 + 1) * 4);
      *local_10 = '\0';
      for (local_14 = 0; local_14 < param_1; local_14 = local_14 + 1) {
        *(char **)((int)__ptr + local_14 * 4) = local_10;
        local_10 = stpcpy(local_10,*(char **)(param_2 + local_14 * 4));
        local_10 = local_10 + 1;
      }
      *(undefined4 *)((int)__ptr + param_1 * 4) = 0;
      if (param_4 == (undefined4 *)0x0) {
        free(__ptr);
      }
      else {
        *param_4 = __ptr;
      }
      if (param_3 != (int *)0x0) {
        *param_3 = param_1;
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* ===== poptParseArgvString @ 0001c420 size=884 ===== */

undefined4 poptParseArgvString(byte *param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  size_t sVar2;
  byte *__ptr;
  undefined4 *puVar3;
  int iVar4;
  undefined4 local_2c;
  byte *local_28;
  int local_24;
  undefined4 *local_20;
  int local_1c;
  byte local_15;
  byte *local_14;
  
  iVar4 = DAT_0001c794 + 0x1c444;
  local_15 = 0;
  local_1c = 5;
  local_20 = malloc(0x14);
  local_24 = 0;
  sVar2 = strlen((char *)param_1);
  local_2c = 0xffffffeb;
  if (local_20 == (undefined4 *)0x0) {
    local_2c = 0xffffffeb;
  }
  else {
    __ptr = calloc(1,sVar2 + 1);
    if (__ptr == (byte *)0x0) {
      free(local_20);
      local_2c = 0xffffffeb;
    }
    else {
      *local_20 = __ptr;
      local_28 = __ptr;
      for (local_14 = param_1; *local_14 != 0; local_14 = local_14 + 1) {
        if (local_15 == *local_14) {
          local_15 = 0;
        }
        else if (local_15 == 0) {
          if ((*(ushort *)(**(int **)(iVar4 + DAT_0001c798) + (uint)*local_14 * 2) & 0x20) == 0) {
            bVar1 = *local_14;
            if (bVar1 == 0x27) {
LAB_0001c694:
              local_15 = *local_14;
            }
            else {
              if (bVar1 == 0x5c) {
                local_14 = local_14 + 1;
                if (*local_14 == 0) {
                  local_2c = 0xfffffff1;
                  goto LAB_0001c75c;
                }
              }
              else if (bVar1 == 0x22) goto LAB_0001c694;
              *local_28 = *local_14;
              local_28 = local_28 + 1;
            }
          }
          else if (*(char *)local_20[local_24] != '\0') {
            local_24 = local_24 + 1;
            puVar3 = local_20;
            if (local_24 == local_1c) {
              local_1c = local_1c + 5;
              puVar3 = realloc(local_20,local_1c * 4);
              if (puVar3 == (undefined4 *)0x0) goto LAB_0001c75c;
            }
            local_20 = puVar3;
            local_20[local_24] = local_28 + 1;
            local_28 = local_28 + 1;
          }
        }
        else {
          if (*local_14 == 0x5c) {
            local_14 = local_14 + 1;
            if (*local_14 == 0) {
              local_2c = 0xfffffff1;
              goto LAB_0001c75c;
            }
            if (local_15 != *local_14) {
              *local_28 = 0x5c;
              local_28 = local_28 + 1;
            }
          }
          *local_28 = *local_14;
          local_28 = local_28 + 1;
        }
      }
      if (*(char *)local_20[local_24] != '\0') {
        local_24 = local_24 + 1;
      }
      local_2c = poptDupArgv(local_24,local_20,param_2,param_3);
LAB_0001c75c:
      if (__ptr != (byte *)0x0) {
        free(__ptr);
      }
      if (local_20 != (undefined4 *)0x0) {
        free(local_20);
      }
    }
  }
  return local_2c;
}



/* ===== poptConfigFileToString @ 0001c79c size=1380 ===== */

undefined4 poptConfigFileToString(FILE *param_1,undefined4 *param_2)

{
  char cVar1;
  byte *pbVar2;
  size_t sVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  byte local_420 [1000];
  char *local_38;
  uint local_34;
  size_t local_30;
  int local_2c;
  size_t local_28;
  uint local_24;
  byte *local_20;
  byte *local_1c;
  byte *local_18;
  char *local_14;
  
  iVar6 = DAT_0001cd00 + 0x1c7c4;
  local_24 = 0;
  local_2c = 999;
  local_28 = 0x1e0;
  *param_2 = 0;
  if (param_1 == (FILE *)0x0) {
    uVar5 = 0xffffffec;
  }
  else {
    local_14 = calloc(0x1e0,1);
    if (local_14 == (char *)0x0) {
      uVar5 = 0xffffffeb;
    }
    else {
      while (pcVar4 = fgets((char *)local_420,local_2c,param_1), pcVar4 != (char *)0x0) {
        local_18 = local_420;
        while ((*local_18 != 0 &&
               ((*(ushort *)(**(int **)(iVar6 + DAT_0001cd04) + (uint)*local_18 * 2) & 0x20) != 0)))
        {
          local_18 = local_18 + 1;
        }
        local_30 = strlen((char *)local_18);
        if (local_2c - 1U <= local_30) {
          free(local_14);
          return 0xffffffee;
        }
        if (((*local_18 != 0) && (*local_18 != 10)) && (*local_18 != 0x23)) {
          for (local_1c = local_18;
              ((*local_1c != 0 &&
               ((*(ushort *)(**(int **)(iVar6 + DAT_0001cd04) + (uint)*local_1c * 2) & 0x20) == 0))
              && (*local_1c != 0x3d)); local_1c = local_1c + 1) {
          }
          if ((*(ushort *)(**(int **)(iVar6 + DAT_0001cd04) + (uint)*local_1c * 2) & 0x20) != 0) {
            pbVar2 = local_1c + 1;
            *local_1c = 0;
            local_1c = pbVar2;
            while ((*local_1c != 0 &&
                   ((*(ushort *)(**(int **)(iVar6 + DAT_0001cd04) + (uint)*local_1c * 2) & 0x20) !=
                    0))) {
              local_1c = local_1c + 1;
            }
          }
          if (*local_1c == 0) {
            local_1c[-1] = 0;
            local_34 = (int)local_1c - (int)local_18;
            local_24 = local_24 + local_34 + 3;
            pcVar4 = local_14;
            if (local_28 <= local_24) {
              if (local_28 < local_34) {
                local_28 = local_34;
              }
              local_28 = local_28 << 1;
              local_38 = realloc(local_14,local_28);
              pcVar4 = local_38;
              if (local_38 == (char *)0x0) {
                free(local_14);
                return 0xffffffeb;
              }
            }
            local_14 = pcVar4;
            sVar3 = strlen(local_14);
            *(undefined4 *)(local_14 + sVar3) = *(undefined4 *)(DAT_0001cd08 + 0x1caa4);
            strcat(local_14,(char *)local_18);
          }
          else if (*local_1c == 0x3d) {
            pbVar2 = local_1c + 1;
            *local_1c = 0;
            local_1c = pbVar2;
            while ((*local_1c != 0 &&
                   ((*(ushort *)(**(int **)(iVar6 + DAT_0001cd04) + (uint)*local_1c * 2) & 0x20) !=
                    0))) {
              local_1c = local_1c + 1;
            }
            if (*local_1c != 0) {
              local_20 = local_18 + local_30;
              while (local_20 = local_20 + -1,
                    (*(ushort *)(**(int **)(iVar6 + DAT_0001cd04) + (uint)*local_20 * 2) & 0x20) !=
                    0) {
                *local_20 = 0;
              }
              local_34 = (int)local_20 - (int)local_18;
              local_24 = local_34 + local_24 + 6;
              pcVar4 = local_14;
              if (local_28 <= local_24) {
                if (local_28 < local_34) {
                  local_28 = local_34;
                }
                local_28 = local_28 << 1;
                local_38 = realloc(local_14,local_28);
                pcVar4 = local_38;
                if (local_38 == (char *)0x0) {
                  free(local_14);
                  return 0xffffffeb;
                }
              }
              local_14 = pcVar4;
              sVar3 = strlen(local_14);
              *(undefined4 *)(local_14 + sVar3) = *(undefined4 *)(DAT_0001cd0c + 0x1cc4c);
              strcat(local_14,(char *)local_18);
              sVar3 = strlen(local_14);
              cVar1 = *(char *)(DAT_0001cd10 + 0x1cc82);
              *(undefined2 *)(local_14 + sVar3) = *(undefined2 *)(DAT_0001cd10 + 0x1cc80);
              (local_14 + sVar3)[2] = cVar1;
              strcat(local_14,(char *)local_1c);
              sVar3 = strlen(local_14);
              *(undefined2 *)(local_14 + sVar3) = *(undefined2 *)(DAT_0001cd14 + 0x1ccbc);
            }
          }
        }
      }
      *param_2 = local_14;
      uVar5 = 0;
    }
  }
  return uVar5;
}



/* ===== FUN_0001cd18 @ 0001cd18 size=168 ===== */

ulonglong FUN_0001cd18(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  if (param_2 - 1 == 0) {
    return CONCAT44(param_2,param_1);
  }
  if (param_2 == 0) {
    uVar1 = raise(8);
    return (ulonglong)uVar1;
  }
  if (param_1 <= param_2) {
    return CONCAT44(param_2,(uint)(param_1 == param_2));
  }
  if ((param_2 & param_2 - 1) == 0) {
    return CONCAT44(param_2,param_1 >> (0x1fU - LZCOUNT(param_2) & 0xff));
  }
  uVar2 = param_2 << (LZCOUNT(param_2) - LZCOUNT(param_1) & 0xffU);
  uVar1 = 1 << (LZCOUNT(param_2) - LZCOUNT(param_1) & 0xffU);
  uVar3 = 0;
  while( true ) {
    if (uVar2 <= param_1) {
      param_1 = param_1 - uVar2;
      uVar3 = uVar3 | uVar1;
    }
    if (uVar2 >> 1 <= param_1) {
      param_1 = param_1 - (uVar2 >> 1);
      uVar3 = uVar3 | uVar1 >> 1;
    }
    if (uVar2 >> 2 <= param_1) {
      param_1 = param_1 - (uVar2 >> 2);
      uVar3 = uVar3 | uVar1 >> 2;
    }
    if (uVar2 >> 3 <= param_1) {
      param_1 = param_1 - (uVar2 >> 3);
      uVar3 = uVar3 | uVar1 >> 3;
    }
    bVar4 = param_1 == 0;
    if (!bVar4) {
      uVar1 = uVar1 >> 4;
      bVar4 = uVar1 == 0;
    }
    if (bVar4) break;
    uVar2 = uVar2 >> 4;
  }
  return CONCAT44(uVar2,uVar3);
}



/* ===== FUN_0001cdc0 @ 0001cdc0 size=32 ===== */

void FUN_0001cdc0(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_0001cd18();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_0001cde0 @ 0001cde0 size=228 ===== */

undefined8 FUN_0001cde0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  int local_8;
  
  if (param_4 == 0 && param_3 == 0) {
    if (param_2 < 0) {
      param_2 = -0x80000000;
    }
    else if (param_2 != 0 || param_1 != 0) {
      param_2 = 0x7fffffff;
    }
    local_8 = param_2;
    iVar1 = raise(8);
    return CONCAT44(local_8,iVar1);
  }
  if (-1 < param_2) {
    if (param_4 < 0) {
      uVar2 = FUN_0001cec4(param_1,param_2,-param_3,-param_4 - (uint)(param_3 != 0),&local_8);
      return CONCAT44(-(int)((ulonglong)uVar2 >> 0x20) - (uint)((int)uVar2 != 0),-(int)uVar2);
    }
    uVar2 = FUN_0001cec4();
    return uVar2;
  }
  iVar1 = -param_2 - (uint)(param_1 != 0);
  if (param_4 < 0) {
    uVar2 = FUN_0001cec4(-param_1,iVar1,-param_3,-param_4 - (uint)(param_3 != 0),&local_8);
    return uVar2;
  }
  uVar2 = FUN_0001cec4(-param_1,iVar1,param_3,param_4,&local_8);
  return CONCAT44(-(int)((ulonglong)uVar2 >> 0x20) - (uint)((int)uVar2 != 0),-(int)uVar2);
}



/* ===== FUN_0001cec4 @ 0001cec4 size=328 ===== */

undefined8 FUN_0001cec4(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  bVar8 = param_4 <= param_2;
  if (param_2 == param_4) {
    bVar8 = param_3 <= param_1;
  }
  if (bVar8) {
    if (param_4 == 0) {
      iVar3 = LZCOUNT(param_3) + 0x20;
    }
    else {
      iVar3 = LZCOUNT(param_4);
    }
    if (param_2 == 0) {
      iVar6 = LZCOUNT(param_1) + 0x20;
    }
    else {
      iVar6 = LZCOUNT(param_2);
    }
    uVar7 = iVar3 - iVar6;
    uVar2 = param_4 << (uVar7 & 0xff) | param_3 << (uVar7 - 0x20 & 0xff) |
            param_3 >> (0x20 - uVar7 & 0xff);
    param_3 = param_3 << (uVar7 & 0xff);
    bVar8 = uVar2 <= param_2;
    if (param_2 == uVar2) {
      bVar8 = param_3 <= param_1;
    }
    if (bVar8) {
      bVar8 = param_1 < param_3;
      param_1 = param_1 - param_3;
      param_2 = param_2 - (uVar2 + bVar8);
      uVar9 = CONCAT44(0 << (uVar7 & 0xff) | 1 << (uVar7 - 0x20 & 0xff) |
                       1U >> (0x20 - uVar7 & 0xff),1 << (uVar7 & 0xff));
    }
    else {
      uVar9 = 0;
    }
    if (uVar7 != 0) {
      uVar1 = param_3 >> 1 | uVar2 << 0x1f;
      uVar2 = uVar2 >> 1;
      uVar4 = uVar7;
      do {
        bVar8 = uVar2 <= param_2;
        if (param_2 == uVar2) {
          bVar8 = uVar1 <= param_1;
        }
        if (bVar8) {
          bVar8 = param_1 < uVar1;
          uVar5 = param_1 - uVar1;
          param_1 = uVar5 * 2 + 1;
          param_2 = (param_2 - (uVar2 + bVar8)) * 2 + (uint)CARRY4(uVar5,uVar5) +
                    (uint)(0xfffffffe < uVar5 * 2);
        }
        else {
          bVar8 = CARRY4(param_1,param_1);
          param_1 = param_1 * 2;
          param_2 = param_2 * 2 + (uint)bVar8;
        }
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      uVar10 = CONCAT44(param_2,param_1);
      param_1 = param_1 >> (uVar7 & 0xff) | param_2 << (0x20 - uVar7 & 0xff) |
                param_2 >> (uVar7 - 0x20 & 0xff);
      param_2 = param_2 >> (uVar7 & 0xff);
      uVar9 = VectorAdd(uVar9,uVar10,8);
      uVar9 = VectorSub(uVar9,CONCAT44(param_2 << (uVar7 & 0xff) | param_1 << (uVar7 - 0x20 & 0xff)
                                       | param_1 >> (0x20 - uVar7 & 0xff),param_1 << (uVar7 & 0xff))
                        ,8);
    }
  }
  else {
    uVar9 = 0;
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = param_1;
    param_5[1] = param_2;
  }
  return uVar9;
}



/* ===== _fini @ 0001d00c size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::stpcpy @ 0002f000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * stpcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::secure_getenv @ 0002f004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void secure_getenv(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 0002f008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ioctl @ 0002f00c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getgid @ 0002f010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__gid_t getgid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::random @ 0002f018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long random(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 0002f01c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getpid @ 0002f024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fgets @ 0002f028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 0002f02c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::glob @ 0002f030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int glob(char *__pattern,int __flags,__errfunc *__errfunc,glob_t *__pglob)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_finalize @ 0002f034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getuid @ 0002f038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__uid_t getuid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 0002f03c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vsnprintf @ 0002f040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtoll @ 0002f044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

longlong strtoll(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::lseek @ 0002f048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__off_t lseek(int __fd,__off_t __offset,int __whence)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strrchr @ 0002f04c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 0002f050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtod @ 0002f054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double strtod(char *__nptr,char **__endptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 0002f058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcat @ 0002f05c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0002f060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_registerTMCloneTable @ 0002f064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_registerTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strstr @ 0002f068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setgid @ 0002f06c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setgid(__gid_t __gid)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::read @ 0002f070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 0002f074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 0002f078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::realloc @ 0002f07c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_deregisterTMCloneTable @ 0002f080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strdup @ 0002f084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strdup(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0002f088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fnmatch @ 0002f08c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fnmatch(char *__pattern,char *__name,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mbsrtowcs @ 0002f090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t mbsrtowcs(wchar_t *__dst,char **__src,size_t __len,mbstate_t *__ps)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 0002f094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 0002f098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::srandom @ 0002f09c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void srandom(uint __seed)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputc @ 0002f0a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::globfree @ 0002f0a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void globfree(glob_t *__pglob)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::stat @ 0002f0a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat(char *__file,stat *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 0002f0ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::access @ 0002f0b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 0002f0b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 0002f0b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fileno @ 0002f0bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fileno(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 0002f0c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::open @ 0002f0c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strchr @ 0002f0c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 0002f0cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::execvp @ 0002f0d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int execvp(char *__file,char **__argv)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setuid @ 0002f0d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setuid(__uid_t __uid)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 0002f0d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 0002f0dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::raise @ 0002f0e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 0002f0e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 0002f0e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __fputc_unlocked(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


