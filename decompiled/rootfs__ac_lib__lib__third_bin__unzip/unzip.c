// unzip — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _DT_INIT @ 00011008 size=16 ===== */

void _DT_INIT(void)

{
  return;
}



/* ===== <EXTERNAL>::stpcpy @ 0001102c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * stpcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_stpcpy_0004400c)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::strcpy @ 00011038 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_00044010)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::ioctl @ 00011044 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_00044014)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::utime @ 00011050 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int utime(char *__file,utimbuf *__file_times)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_utime_00044018)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::strerror @ 0001105c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_0004401c)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::getenv @ 00011068 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_getenv_00044020)(__name);
  return pcVar1;
}



/* ===== <EXTERNAL>::fchmod @ 00011074 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fchmod(int __fd,__mode_t __mode)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fchmod_00044024)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::qsort @ 00011080 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void qsort(void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
  (*(code *)PTR_qsort_00044028)(__base);
  return;
}



/* ===== <EXTERNAL>::fchown @ 0001108c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fchown(int __fd,__uid_t __owner,__gid_t __group)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fchown_0004402c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::fgets @ 00011098 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_fgets_00044030)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::memcpy @ 000110a4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00044034)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::perror @ 000110b0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
  (*(code *)PTR_perror_00044038)(__s);
  return;
}



/* ===== <EXTERNAL>::tolower @ 000110bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tolower(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_tolower_0004403c)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::malloc @ 000110c8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00044040)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::isatty @ 000110d4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int isatty(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_isatty_00044044)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::wctomb @ 000110e0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int wctomb(char *__s,wchar_t __wchar)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_wctomb_00044048)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::readdir @ 000110ec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent * readdir(DIR *__dirp)

{
  dirent *pdVar1;
  
  pdVar1 = (dirent *)(*(code *)PTR_readdir_0004404c)(__dirp);
  return pdVar1;
}



/* ===== <EXTERNAL>::lchown @ 000110f8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int lchown(char *__file,__uid_t __owner,__gid_t __group)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_lchown_00044050)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::fflush @ 00011104 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_00044054)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::lseek @ 00011110 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__off_t lseek(int __fd,__off_t __offset,int __whence)

{
  __off_t _Var1;
  
  _Var1 = (*(code *)PTR_lseek_00044058)(__fd);
  return _Var1;
}



/* ===== <EXTERNAL>::chown @ 0001111c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int chown(char *__file,__uid_t __owner,__gid_t __group)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_chown_0004405c)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::abort @ 00011128 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00044060)();
  return;
}



/* ===== <EXTERNAL>::chmod @ 00011134 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int chmod(char *__file,__mode_t __mode)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_chmod_00044064)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::mblen @ 00011140 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mblen(char *__s,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_mblen_00044068)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::rename @ 0001114c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rename(char *__old,char *__new)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rename_0004406c)(__old);
  return iVar1;
}



/* ===== <EXTERNAL>::strrchr @ 00011158 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strrchr_00044070)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::calloc @ 00011164 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_00044074)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::write @ 00011170 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_write_00044078)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::fprintf @ 0001117c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_0004407c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::strcat @ 00011188 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcat_00044080)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00011194 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00044084)();
  return;
}



/* ===== <EXTERNAL>::_stdlib_mb_cur_max @ 000111a0 size=12 ===== */

void _stdlib_mb_cur_max(void)

{
  (*(code *)PTR__stdlib_mb_cur_max_00044088)();
  return;
}



/* ===== <EXTERNAL>::nl_langinfo @ 000111ac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * nl_langinfo(nl_item __item)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_nl_langinfo_0004408c)(__item);
  return pcVar1;
}



/* ===== <EXTERNAL>::umask @ 000111b8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__mode_t umask(__mode_t __mask)

{
  __mode_t _Var1;
  
  _Var1 = (*(code *)PTR_umask_00044090)(__mask);
  return _Var1;
}



/* ===== <EXTERNAL>::lstat @ 000111c4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int lstat(char *__file,stat *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_lstat_00044094)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::signal @ 000111d0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = (__sighandler_t)(*(code *)PTR_signal_00044098)(__sig);
  return p_Var1;
}



/* ===== <EXTERNAL>::read @ 000111dc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_0004409c)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::strncmp @ 000111e8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_000440a0)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::strncpy @ 000111f4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_000440a4)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::unlink @ 00011200 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unlink(char *__name)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_unlink_000440a8)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::realloc @ 0001120c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_realloc_000440ac)(__ptr);
  return pvVar1;
}



/* ===== <EXTERNAL>::memcmp @ 00011218 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_000440b0)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::strncat @ 00011224 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncat(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncat_000440b4)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::fread @ 00011230 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fread_000440b8)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::symlink @ 00011248 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int symlink(char *__from,char *__to)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_symlink_000440c0)(__from);
  return iVar1;
}



/* ===== <EXTERNAL>::fopen @ 00011254 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen_000440c4)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::localtime @ 00011260 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * localtime(time_t *__timer)

{
  tm *ptVar1;
  
  ptVar1 = (tm *)(*(code *)PTR_localtime_000440c8)(__timer);
  return ptVar1;
}



/* ===== <EXTERNAL>::memset @ 0001126c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_000440cc)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::fclose @ 00011278 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_000440d0)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::tcgetattr @ 00011284 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tcgetattr(int __fd,termios *__termios_p)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_tcgetattr_000440d4)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::opendir @ 00011290 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * opendir(char *__name)

{
  DIR *pDVar1;
  
  pDVar1 = (DIR *)(*(code *)PTR_opendir_000440d8)(__name);
  return pDVar1;
}



/* ===== <EXTERNAL>::strcmp @ 0001129c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_000440dc)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::sprintf @ 000112a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_000440e0)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::setlocale @ 000112b4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * setlocale(int __category,char *__locale)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_setlocale_000440e4)(__category);
  return pcVar1;
}



/* ===== <EXTERNAL>::fputc @ 000112c0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputc_000440e8)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::stat @ 000112cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat(char *__file,stat *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_stat_000440ec)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::fwrite @ 000112d8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_000440f0)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::rewind @ 000112e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rewind(FILE *__stream)

{
  (*(code *)PTR_rewind_000440f4)(__stream);
  return;
}



/* ===== <EXTERNAL>::__errno_location @ 000112f0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_000440f8)();
  return piVar1;
}



/* ===== <EXTERNAL>::exit @ 000112fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_000440fc)(__status);
  return;
}



/* ===== <EXTERNAL>::fileno @ 00011308 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fileno(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fileno_00044100)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::gmtime @ 00011314 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * gmtime(time_t *__timer)

{
  tm *ptVar1;
  
  ptVar1 = (tm *)(*(code *)PTR_gmtime_00044104)(__timer);
  return ptVar1;
}



/* ===== <EXTERNAL>::strlen @ 00011320 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00044108)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::open @ 0001132c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open_0004410c)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::fputs @ 00011338 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_00044110)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::closedir @ 00011344 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int closedir(DIR *__dirp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_closedir_00044114)(__dirp);
  return iVar1;
}



/* ===== <EXTERNAL>::tzset @ 00011350 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void tzset(void)

{
  (*(code *)PTR_tzset_00044118)();
  return;
}



/* ===== <EXTERNAL>::tcsetattr @ 0001135c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tcsetattr(int __fd,int __optional_actions,termios *__termios_p)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_tcsetattr_0004411c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::mkdir @ 00011368 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mkdir(char *__path,__mode_t __mode)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_mkdir_00044120)(__path);
  return iVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00011374 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00044124)();
  return;
}



/* ===== <EXTERNAL>::close @ 00011380 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_00044128)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::raise @ 0001138c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_0004412c)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 00011398 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00044130)(__ptr);
  return;
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 000113a4 size=12 ===== */

void __fputc_unlocked(void)

{
  (*(code *)PTR___fputc_unlocked_00044134)();
  return;
}



/* ===== entry @ 000113d0 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_000440bc)
            (DAT_00011404,param_2,&stack0x00000004,DAT_00011408,DAT_00011400,param_1);
  return;
}



/* ===== FUN_0001140c @ 0001140c size=32 ===== */

void FUN_0001140c(void)

{
  if (DAT_00011430 == DAT_0001142c) {
    return;
  }
  if (DAT_00011434 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011434)();
  return;
}



/* ===== _FINI_0 @ 00011470 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_000114ac;
  if (*DAT_000114ac != '\0') {
    return;
  }
  FUN_0001140c();
  if (DAT_000114b0 != 0) {
    __deregister_frame_info(DAT_000114b4);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 000114b8 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_000114dc != 0) {
    __register_frame_info(DAT_000114e4,DAT_000114e0);
  }
  if ((DAT_00011468 - DAT_00011464 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_0001146c == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0001146c)();
  return;
}



/* ===== FUN_000116dc @ 000116dc size=4508 ===== */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000116dc(int *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  void *__dest;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  int iVar12;
  code *pcVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  undefined4 *puVar18;
  int iVar19;
  bool bVar20;
  char *pcVar21;
  int *piVar22;
  
  iVar19 = 0;
  iVar9 = *param_1;
  iVar12 = 0;
  iVar14 = iVar9 + -1;
  __dest = (void *)(DAT_000126c0 + -0x10f30);
  piVar17 = (int *)0x0;
  iVar15 = *param_2 + 4;
  iVar6 = *param_2;
  iVar16 = iVar15;
  piVar22 = param_1;
  if (0 < iVar14) {
LAB_0001171c:
    pcVar8 = *(char **)(iVar6 + 4);
    iVar16 = iVar15;
    if ((pcVar8 != (char *)0x0) && (*pcVar8 == '-')) {
      pcVar10 = pcVar8 + 1;
      cVar7 = pcVar8[1];
LAB_0001173c:
      pcVar13 = DAT_000d54ac;
      uVar2 = s_error__must_give_decryption_pass_0002c818._12_4_;
      uVar1 = s_error__must_give_decryption_pass_0002c818._8_4_;
      uVar4 = s_error__must_give_decryption_pass_0002c818._4_4_;
      iVar6 = DAT_000126c0;
      pcVar8 = pcVar10;
      iVar9 = iVar14;
      if (cVar7 != '\0') {
        do {
          pcVar10 = pcVar8 + 1;
          switch(cVar7) {
          case '-':
            goto switchD_00011750_caseD_2d;
          default:
            cVar7 = pcVar8[1];
            piVar17 = (int *)0x1;
            goto LAB_0001173c;
          case ':':
            if (iVar12 == 0) {
              DAT_00044208 = DAT_00044208 + 1;
            }
            else {
              uVar5 = DAT_00044208 - iVar12;
              iVar12 = 0;
              DAT_00044208 = uVar5 & ~((int)uVar5 >> 0x1f);
            }
            cVar7 = pcVar8[1];
            goto LAB_0001173c;
          case 'B':
            bVar20 = iVar12 != 0;
            if (bVar20) {
              iVar12 = 0;
            }
            DAT_000441b0 = (uint)!bVar20;
            cVar7 = pcVar8[1];
            goto LAB_0001173c;
          case 'C':
            bVar20 = iVar12 != 0;
            if (bVar20) {
              iVar12 = 0;
            }
            DAT_000441b8 = (uint)!bVar20;
            cVar7 = pcVar8[1];
            goto LAB_0001173c;
          case 'D':
            if (iVar12 == 0) {
              DAT_000441bc = DAT_000441bc + 1;
            }
            else {
              uVar5 = DAT_000441bc - iVar12;
              iVar12 = 0;
              DAT_000441bc = uVar5 & ~((int)uVar5 >> 0x1f);
            }
            cVar7 = pcVar8[1];
            goto LAB_0001173c;
          case 'K':
            bVar20 = iVar12 != 0;
            if (bVar20) {
              iVar12 = 0;
            }
            DAT_000441cc = (uint)!bVar20;
            cVar7 = pcVar8[1];
            goto LAB_0001173c;
          case 'L':
            if (iVar12 == 0) {
              DAT_000441d4 = DAT_000441d4 + 1;
            }
            else {
              uVar5 = DAT_000441d4 - iVar12;
              iVar12 = 0;
              DAT_000441d4 = uVar5 & ~((int)uVar5 >> 0x1f);
            }
            cVar7 = pcVar8[1];
            goto LAB_0001173c;
          case 'M':
            bVar20 = iVar12 != 0;
            if (bVar20) {
              iVar12 = 0;
            }
            DAT_00044210 = (uint)!bVar20;
            cVar7 = pcVar8[1];
            goto LAB_0001173c;
          case 'P':
            if (iVar12 != 0) {
              pcVar13 = *(code **)(DAT_000126c0 + 0x30c);
              *(undefined4 *)(DAT_000126c0 + -0x10f30) =
                   s_error__must_give_decryption_pass_0002c818._0_4_;
              *(undefined4 *)(iVar6 + -0x10f2c) = uVar4;
              *(undefined4 *)(iVar6 + -0x10f28) = uVar1;
              *(undefined4 *)(iVar6 + -0x10f24) = uVar2;
              uVar2 = s_error__must_give_decryption_pass_0002c818._28_4_;
              uVar1 = s_error__must_give_decryption_pass_0002c818._24_4_;
              uVar4 = s_error__must_give_decryption_pass_0002c818._20_4_;
              *(undefined4 *)(iVar6 + -0x10f20) = s_error__must_give_decryption_pass_0002c818._16_4_
              ;
              *(undefined4 *)(iVar6 + -0x10f1c) = uVar4;
              *(undefined4 *)(iVar6 + -0x10f18) = uVar1;
              *(undefined4 *)(iVar6 + -0x10f14) = uVar2;
              uVar2 = s_error__must_give_decryption_pass_0002c818._44_4_;
              uVar1 = s_error__must_give_decryption_pass_0002c818._40_4_;
              uVar4 = s_error__must_give_decryption_pass_0002c818._36_4_;
              *(undefined4 *)(iVar6 + -0x10f10) = s_error__must_give_decryption_pass_0002c818._32_4_
              ;
              *(undefined4 *)(iVar6 + -0x10f0c) = uVar4;
              *(undefined4 *)(iVar6 + -0x10f08) = uVar1;
              *(undefined4 *)(iVar6 + -0x10f04) = uVar2;
              uVar4 = ram0x0002c84c;
              *(undefined4 *)(iVar6 + -0x10f00) = s_error__must_give_decryption_pass_0002c818._48_4_
              ;
              *(short *)(iVar6 + -0x10efc) = (short)uVar4;
              (*pcVar13)(iVar6 + -0x91000,DAT_000126fc,0x35,0x401);
              return 10;
            }
            if (DAT_000441a4 == (char *)0x0) {
              DAT_000441a4 = pcVar10;
              if (pcVar8[1] != '\0') goto LAB_00011c58;
              if (iVar14 != 1) {
                DAT_000441a4 = *(char **)(iVar15 + 4);
                iVar9 = iVar14 + -1;
                iVar15 = iVar15 + 4;
                if (*DAT_000441a4 != '-') {
                  cVar7 = pcVar8[1];
                  goto joined_r0x00011c50;
                }
              }
              DAT_000c4270 = s_error__must_give_decryption_pass_0002c818[0];
              DAT_000c4271 = s_error__must_give_decryption_pass_0002c818[1];
              DAT_000c4272 = s_error__must_give_decryption_pass_0002c818[2];
              DAT_000c4273 = s_error__must_give_decryption_pass_0002c818[3];
              DAT_000c4274._0_1_ = s_error__must_give_decryption_pass_0002c818[4];
              DAT_000c4274._1_1_ = s_error__must_give_decryption_pass_0002c818[5];
              DAT_000c4274._2_1_ = s_error__must_give_decryption_pass_0002c818[6];
              DAT_000c4274._3_1_ = s_error__must_give_decryption_pass_0002c818[7];
              DAT_000c4278 = s_error__must_give_decryption_pass_0002c818[8];
              DAT_000c4279 = s_error__must_give_decryption_pass_0002c818[9];
              DAT_000c427a = s_error__must_give_decryption_pass_0002c818[10];
              DAT_000c427b = s_error__must_give_decryption_pass_0002c818[0xb];
              DAT_000c427c._0_1_ = s_error__must_give_decryption_pass_0002c818[0xc];
              DAT_000c427c._1_1_ = s_error__must_give_decryption_pass_0002c818[0xd];
              DAT_000c427c._2_1_ = s_error__must_give_decryption_pass_0002c818[0xe];
              DAT_000c427c._3_1_ = s_error__must_give_decryption_pass_0002c818[0xf];
              DAT_000c4280._0_1_ = s_error__must_give_decryption_pass_0002c818[0x10];
              DAT_000c4280._1_1_ = s_error__must_give_decryption_pass_0002c818[0x11];
              DAT_000c4280._2_1_ = s_error__must_give_decryption_pass_0002c818[0x12];
              DAT_000c4280._3_1_ = s_error__must_give_decryption_pass_0002c818[0x13];
              DAT_000c4284._0_1_ = s_error__must_give_decryption_pass_0002c818[0x14];
              DAT_000c4284._1_1_ = s_error__must_give_decryption_pass_0002c818[0x15];
              DAT_000c4284._2_1_ = s_error__must_give_decryption_pass_0002c818[0x16];
              DAT_000c4284._3_1_ = s_error__must_give_decryption_pass_0002c818[0x17];
              DAT_000c4288._0_1_ = s_error__must_give_decryption_pass_0002c818[0x18];
              DAT_000c4288._1_1_ = s_error__must_give_decryption_pass_0002c818[0x19];
              DAT_000c4288._2_1_ = s_error__must_give_decryption_pass_0002c818[0x1a];
              DAT_000c4288._3_1_ = s_error__must_give_decryption_pass_0002c818[0x1b];
              DAT_000c428c._0_1_ = s_error__must_give_decryption_pass_0002c818[0x1c];
              DAT_000c428c._1_1_ = s_error__must_give_decryption_pass_0002c818[0x1d];
              DAT_000c428c._2_1_ = s_error__must_give_decryption_pass_0002c818[0x1e];
              DAT_000c428c._3_1_ = s_error__must_give_decryption_pass_0002c818[0x1f];
              DAT_000c4290._0_1_ = s_error__must_give_decryption_pass_0002c818[0x20];
              DAT_000c4290._1_1_ = s_error__must_give_decryption_pass_0002c818[0x21];
              DAT_000c4290._2_1_ = s_error__must_give_decryption_pass_0002c818[0x22];
              DAT_000c4290._3_1_ = s_error__must_give_decryption_pass_0002c818[0x23];
              DAT_000c4294._0_1_ = s_error__must_give_decryption_pass_0002c818[0x24];
              DAT_000c4294._1_1_ = s_error__must_give_decryption_pass_0002c818[0x25];
              DAT_000c4294._2_1_ = s_error__must_give_decryption_pass_0002c818[0x26];
              DAT_000c4294._3_1_ = s_error__must_give_decryption_pass_0002c818[0x27];
              DAT_000c4298._0_1_ = s_error__must_give_decryption_pass_0002c818[0x28];
              DAT_000c4298._1_1_ = s_error__must_give_decryption_pass_0002c818[0x29];
              DAT_000c4298._2_1_ = s_error__must_give_decryption_pass_0002c818[0x2a];
              DAT_000c4298._3_1_ = s_error__must_give_decryption_pass_0002c818[0x2b];
              DAT_000c429c = s_error__must_give_decryption_pass_0002c818[0x2c];
              DAT_000c429c_1._0_1_ = s_error__must_give_decryption_pass_0002c818[0x2d];
              DAT_000c429e = s_error__must_give_decryption_pass_0002c818[0x2e];
              DAT_000c429c_1._2_1_ = s_error__must_give_decryption_pass_0002c818[0x2f];
              DAT_000c42a0._0_1_ = s_error__must_give_decryption_pass_0002c818[0x30];
              DAT_000c42a0._1_1_ = s_error__must_give_decryption_pass_0002c818[0x31];
              DAT_000c42a0._2_1_ = s_error__must_give_decryption_pass_0002c818[0x32];
              DAT_000c42a0._3_1_ = s_error__must_give_decryption_pass_0002c818[0x33];
              DAT_000c42a4 = CONCAT22(DAT_000c42a4._2_2_,(short)ram0x0002c84c);
              (*DAT_000d54ac)(&DAT_000441a0,DAT_000126fc,0x35,0x401);
              return 10;
            }
            break;
          case 'T':
            bVar20 = iVar12 != 0;
            if (bVar20) {
              iVar12 = 0;
            }
            DAT_000441e8 = (uint)!bVar20;
            cVar7 = pcVar8[1];
            goto LAB_0001173c;
          case 'U':
            if (iVar12 == 0) {
              DAT_000441f0 = DAT_000441f0 + 1;
            }
            else {
              uVar5 = DAT_000441f0 - iVar12;
              iVar12 = 0;
              DAT_000441f0 = uVar5 & ~((int)uVar5 >> 0x1f);
            }
            cVar7 = pcVar8[1];
            goto LAB_0001173c;
          case 'V':
            bVar20 = iVar12 != 0;
            if (bVar20) {
              iVar12 = 0;
            }
            DAT_000441f8 = (uint)!bVar20;
            cVar7 = pcVar8[1];
            goto LAB_0001173c;
          case 'X':
            if (iVar12 == 0) {
              DAT_00044200 = DAT_00044200 + 1;
            }
            else {
              uVar5 = DAT_00044200 - iVar12;
              iVar12 = 0;
              DAT_00044200 = uVar5 & ~((int)uVar5 >> 0x1f);
            }
            cVar7 = pcVar8[1];
            goto LAB_0001173c;
          case 'Z':
            piVar17 = (int *)0x1;
            pcVar13 = *(code **)(DAT_000126c0 + 0x30c);
            memcpy(__dest,
                   "error:  -Z must be first option for ZipInfo mode (check UNZIP variable?)\n",0x4a
                  );
            param_1 = (int *)(*pcVar13)(&DAT_000441a0,DAT_000126fc,0x49,0x401);
            cVar7 = pcVar8[1];
            goto LAB_0001173c;
          case '^':
            if (iVar12 != 0) {
              uVar5 = DAT_0004420c - iVar12;
              iVar12 = 0;
              DAT_0004420c = uVar5 & ~((int)uVar5 >> 0x1f);
              cVar7 = pcVar8[1];
              goto LAB_0001173c;
            }
            DAT_0004420c = DAT_0004420c + 1;
            break;
          case 'a':
            if (iVar12 == 0) {
              DAT_000441ac = DAT_000441ac + 1;
            }
            else {
              uVar5 = DAT_000441ac - iVar12;
              iVar12 = 0;
              DAT_000441ac = uVar5 & ~((int)uVar5 >> 0x1f);
            }
            cVar7 = pcVar8[1];
            goto LAB_0001173c;
          case 'b':
            if (iVar12 == 0) {
              DAT_000441ac = 0;
              cVar7 = pcVar8[1];
            }
            else {
              cVar7 = pcVar8[1];
              iVar12 = 0;
            }
            goto LAB_0001173c;
          case 'c':
            bVar20 = iVar12 != 0;
            if (bVar20) {
              iVar12 = 0;
            }
            DAT_000441b4 = (uint)!bVar20;
            cVar7 = pcVar8[1];
            goto LAB_0001173c;
          case 'd':
            if (iVar12 != 0) {
              pcVar13 = *(code **)(DAT_000126c0 + 0x30c);
              memcpy((void *)(DAT_000126c0 + -0x10f30),
                     "error:  must specify directory to which to extract with -d option\n",0x43);
              (*pcVar13)(iVar6 + -0x91000,DAT_000126fc,0x42,0x401);
              return 10;
            }
            if (DAT_000441a0 != (char *)0x0) {
              DAT_000c4270 = s_error___d_option_used_more_than_o_0002c7d8[0];
              DAT_000c4271 = s_error___d_option_used_more_than_o_0002c7d8[1];
              DAT_000c4272 = s_error___d_option_used_more_than_o_0002c7d8[2];
              DAT_000c4273 = s_error___d_option_used_more_than_o_0002c7d8[3];
              DAT_000c4274._0_1_ = s_error___d_option_used_more_than_o_0002c7d8[4];
              DAT_000c4274._1_1_ = s_error___d_option_used_more_than_o_0002c7d8[5];
              DAT_000c4274._2_1_ = s_error___d_option_used_more_than_o_0002c7d8[6];
              DAT_000c4274._3_1_ = s_error___d_option_used_more_than_o_0002c7d8[7];
              DAT_000c4278 = s_error___d_option_used_more_than_o_0002c7d8[8];
              DAT_000c4279 = s_error___d_option_used_more_than_o_0002c7d8[9];
              DAT_000c427a = s_error___d_option_used_more_than_o_0002c7d8[10];
              DAT_000c427b = s_error___d_option_used_more_than_o_0002c7d8[0xb];
              DAT_000c427c._0_1_ = s_error___d_option_used_more_than_o_0002c7d8[0xc];
              DAT_000c427c._1_1_ = s_error___d_option_used_more_than_o_0002c7d8[0xd];
              DAT_000c427c._2_1_ = s_error___d_option_used_more_than_o_0002c7d8[0xe];
              DAT_000c427c._3_1_ = s_error___d_option_used_more_than_o_0002c7d8[0xf];
              DAT_000c4280._0_1_ = s_error___d_option_used_more_than_o_0002c7d8[0x10];
              DAT_000c4280._1_1_ = s_error___d_option_used_more_than_o_0002c7d8[0x11];
              DAT_000c4280._2_1_ = s_error___d_option_used_more_than_o_0002c7d8[0x12];
              DAT_000c4280._3_1_ = s_error___d_option_used_more_than_o_0002c7d8[0x13];
              DAT_000c4284._0_1_ = s_error___d_option_used_more_than_o_0002c7d8[0x14];
              DAT_000c4284._1_1_ = s_error___d_option_used_more_than_o_0002c7d8[0x15];
              DAT_000c4284._2_1_ = s_error___d_option_used_more_than_o_0002c7d8[0x16];
              DAT_000c4284._3_1_ = s_error___d_option_used_more_than_o_0002c7d8[0x17];
              DAT_000c4288._0_1_ = s_error___d_option_used_more_than_o_0002c7d8[0x18];
              DAT_000c4288._1_1_ = s_error___d_option_used_more_than_o_0002c7d8[0x19];
              DAT_000c4288._2_1_ = s_error___d_option_used_more_than_o_0002c7d8[0x1a];
              DAT_000c4288._3_1_ = s_error___d_option_used_more_than_o_0002c7d8[0x1b];
              DAT_000c428c._0_1_ = s_error___d_option_used_more_than_o_0002c7d8[0x1c];
              DAT_000c428c._1_1_ = s_error___d_option_used_more_than_o_0002c7d8[0x1d];
              DAT_000c428c._2_1_ = s_error___d_option_used_more_than_o_0002c7d8[0x1e];
              DAT_000c428c._3_1_ = s_error___d_option_used_more_than_o_0002c7d8[0x1f];
              DAT_000c4290._0_1_ = s_error___d_option_used_more_than_o_0002c7d8[0x20];
              DAT_000c4290._1_1_ = s_error___d_option_used_more_than_o_0002c7d8[0x21];
              DAT_000c4290._2_1_ = s_error___d_option_used_more_than_o_0002c7d8[0x22];
              DAT_000c4290._3_1_ = s_error___d_option_used_more_than_o_0002c7d8[0x23];
              DAT_000c4294._0_1_ = s_error___d_option_used_more_than_o_0002c7d8[0x24];
              DAT_000c4294._1_1_ = s_error___d_option_used_more_than_o_0002c7d8[0x25];
              DAT_000c4294._2_1_ = s_error___d_option_used_more_than_o_0002c7d8[0x26];
              DAT_000c4294._3_1_ = s_error___d_option_used_more_than_o_0002c7d8[0x27];
              DAT_000c4298._0_1_ = s_error___d_option_used_more_than_o_0002c7d8[0x28];
              DAT_000c4298._1_1_ = s_error___d_option_used_more_than_o_0002c7d8[0x29];
              DAT_000c4298._2_1_ = s_error___d_option_used_more_than_o_0002c7d8[0x2a];
              DAT_000c4298._3_1_ = s_error___d_option_used_more_than_o_0002c7d8[0x2b];
              DAT_000c429c = s_error___d_option_used_more_than_o_0002c7d8[0x2c];
              DAT_000c429c_1._0_1_ = s_error___d_option_used_more_than_o_0002c7d8[0x2d];
              DAT_000c429e = s_error___d_option_used_more_than_o_0002c7d8[0x2e];
              DAT_000c429c_1._2_1_ = s_error___d_option_used_more_than_o_0002c7d8[0x2f];
              DAT_000c42a0._0_1_ = s_error___d_option_used_more_than_o_0002c7d8[0x30];
              DAT_000c42a0._1_1_ = s_error___d_option_used_more_than_o_0002c7d8[0x31];
              DAT_000c42a0._2_1_ = s_error___d_option_used_more_than_o_0002c7d8[0x32];
              DAT_000c42a0._3_1_ = s_error___d_option_used_more_than_o_0002c7d8[0x33];
              DAT_000c42a4._0_1_ = s_error___d_option_used_more_than_o_0002c7d8[0x34];
              DAT_000c42a4._1_1_ = s_error___d_option_used_more_than_o_0002c7d8[0x35];
              DAT_000c42a4._2_1_ = s_error___d_option_used_more_than_o_0002c7d8[0x36];
              DAT_000c42a4._3_1_ = s_error___d_option_used_more_than_o_0002c7d8[0x37];
              DAT_000c42a8 = s_error___d_option_used_more_than_o_0002c7d8[0x38];
              DAT_000c42a8_1._0_1_ = s_error___d_option_used_more_than_o_0002c7d8[0x39];
              DAT_000c42a8_1._1_1_ = s_error___d_option_used_more_than_o_0002c7d8[0x3a];
              DAT_000c42a8_1._2_1_ = s_error___d_option_used_more_than_o_0002c7d8[0x3b];
              DAT_000c42ac._0_1_ = s_error___d_option_used_more_than_o_0002c7d8[0x3c];
              DAT_000c42ac._1_1_ = s_error___d_option_used_more_than_o_0002c7d8[0x3d];
              DAT_000c42ac._2_1_ = s_error___d_option_used_more_than_o_0002c7d8[0x3e];
              DAT_000c42ac._3_1_ = s_error___d_option_used_more_than_o_0002c7d8[0x3f];
              (*DAT_000d54ac)(&DAT_000441a0,&DAT_000c4270,0x3f,0x401);
              return 10;
            }
            DAT_000441a0 = pcVar10;
            if (pcVar8[1] != '\0') goto LAB_00011954;
            if (iVar14 != 1) {
              DAT_000441a0 = *(char **)(iVar15 + 4);
              iVar9 = iVar14 + -1;
              iVar15 = iVar15 + 4;
              if (*DAT_000441a0 != '-') {
                cVar7 = pcVar8[1];
                goto joined_r0x0001190c;
              }
            }
            memcpy(&DAT_000c4270,
                   "error:  must specify directory to which to extract with -d option\n",0x43);
            (*pcVar13)(&DAT_000441a0,DAT_000126fc,0x42,0x401);
            return 10;
          case 'e':
          case 'x':
            break;
          case 'f':
            bVar20 = iVar12 != 0;
            if (bVar20) {
              iVar12 = 0;
            }
            DAT_000441ec = (uint)!bVar20;
            DAT_000441c0 = (uint)!bVar20;
            cVar7 = pcVar8[1];
            goto LAB_0001173c;
          case 'h':
            if (iVar19 != 0) break;
            cVar7 = pcVar8[1];
            if (cVar7 == 'h') {
              pcVar10 = pcVar8 + 2;
              cVar7 = pcVar8[2];
              iVar19 = 2;
              goto LAB_000118a0;
            }
            iVar19 = 1;
            goto LAB_0001173c;
          case 'j':
            bVar20 = iVar12 != 0;
            if (bVar20) {
              iVar12 = 0;
            }
            DAT_000441c8 = (uint)!bVar20;
            cVar7 = pcVar8[1];
            goto LAB_0001173c;
          case 'l':
            if (iVar12 == 0) goto LAB_00011b3c;
LAB_00011f04:
            uVar5 = DAT_000441f4 - iVar12;
            iVar12 = 0;
            DAT_000441f4 = uVar5 & ~((int)uVar5 >> 0x1f);
            cVar7 = pcVar8[1];
            goto LAB_0001173c;
          case 'n':
            bVar20 = iVar12 != 0;
            if (bVar20) {
              iVar12 = 0;
            }
            DAT_000441d8 = (uint)!bVar20;
            cVar7 = pcVar8[1];
            goto LAB_0001173c;
          case 'o':
            if (iVar12 == 0) {
              DAT_000441dc = DAT_000441dc + 1;
            }
            else {
              uVar5 = DAT_000441dc - iVar12;
              iVar12 = 0;
              DAT_000441dc = uVar5 & ~((int)uVar5 >> 0x1f);
            }
            cVar7 = pcVar8[1];
            goto LAB_0001173c;
          case 'p':
            if (iVar12 == 0) {
              DAT_000441e0 = DAT_000441e0 + 999;
              DAT_000441b4 = 1;
              cVar7 = pcVar8[1];
            }
            else {
              iVar12 = 0;
              DAT_000441b4 = 0;
              if ((int)DAT_000441e0 < 999) {
                DAT_000441e0 = 999;
              }
              DAT_000441e0 = DAT_000441e0 - 999;
              cVar7 = pcVar8[1];
            }
            goto LAB_0001173c;
          case 'q':
            if (iVar12 == 0) {
              DAT_000441e0 = DAT_000441e0 + 1;
            }
            else {
              uVar5 = DAT_000441e0 - iVar12;
              iVar12 = 0;
              DAT_000441e0 = uVar5 & ~((int)uVar5 >> 0x1f);
            }
            cVar7 = pcVar8[1];
            goto LAB_0001173c;
          case 't':
            bVar20 = iVar12 != 0;
            if (bVar20) {
              iVar12 = 0;
            }
            DAT_000441e4 = (uint)!bVar20;
            cVar7 = pcVar8[1];
            goto LAB_0001173c;
          case 'u':
            bVar20 = iVar12 != 0;
            if (bVar20) {
              iVar12 = 0;
            }
            DAT_000441ec = (uint)!bVar20;
            cVar7 = pcVar8[1];
            goto LAB_0001173c;
          case 'v':
            if (iVar12 != 0) goto LAB_00011f04;
            if (DAT_000441f4 == 0) {
              DAT_000441f4 = 2;
              cVar7 = pcVar8[1];
            }
            else {
LAB_00011b3c:
              DAT_000441f4 = DAT_000441f4 + 1;
              cVar7 = pcVar8[1];
            }
            goto LAB_0001173c;
          case 'z':
            if (iVar12 == 0) {
              DAT_00044204 = DAT_00044204 + 1;
            }
            else {
              uVar5 = DAT_00044204 - iVar12;
              iVar12 = 0;
              DAT_00044204 = uVar5 & ~((int)uVar5 >> 0x1f);
            }
            cVar7 = pcVar8[1];
            goto LAB_0001173c;
          }
          cVar7 = pcVar8[1];
LAB_000118a0:
          pcVar8 = pcVar10;
          if (cVar7 == '\0') break;
        } while( true );
      }
      goto LAB_00011910;
    }
  }
LAB_00011924:
  iVar12 = DAT_000126c0;
  if (iVar19 != 0) {
    if (iVar19 != 2) {
      param_1 = (int *)0x0;
    }
    *piVar22 = -1;
    pcVar8 = DAT_000126fc;
    iVar12 = DAT_000126c0;
    if (iVar19 == 2) {
      puVar18 = DAT_000126c4 + 0xdd;
      iVar9 = DAT_000126c0 + -0x91000;
      puVar11 = DAT_000126c4;
      do {
        puVar11 = puVar11 + 1;
        pcVar13 = *(code **)(iVar12 + 0x30c);
        iVar15 = sprintf(pcVar8,"%s\n",*puVar11);
        (*pcVar13)(iVar9,pcVar8,iVar15,0);
      } while (puVar18 != puVar11);
      return 0;
    }
    goto LAB_000114e8;
  }
  if (DAT_000441b4 == 0) {
    if ((DAT_000441e4 == 0) || (DAT_000441ec == 0)) goto LAB_0001207c;
LAB_00011fc0:
    pcVar13 = *(code **)(DAT_000126c0 + 0x30c);
    memcpy((void *)(DAT_000126c0 + -0x10f30),
           "error:  -fn or any combination of -c, -l, -p, -t, -u and -v options invalid\n",0x4d);
    (*pcVar13)(iVar12 + -0x91000,DAT_000126fc,0x4c,0x401);
    param_1 = (int *)0x1;
  }
  else {
    if (DAT_000441e4 != 0 || DAT_000441ec != 0) goto LAB_00011fc0;
LAB_0001207c:
    param_1 = piVar17;
    if ((DAT_000441c0 != 0) && (DAT_000441d8 != 0)) goto LAB_00011fc0;
  }
  uVar2 = s_caution__both__n_and__o_specifie_0002c934._12_4_;
  uVar1 = s_caution__both__n_and__o_specifie_0002c934._8_4_;
  uVar4 = s_caution__both__n_and__o_specifie_0002c934._4_4_;
  iVar12 = DAT_000126f8;
  if (2 < (int)DAT_000441ac) {
    DAT_000441ac = 2;
  }
  if ((DAT_000441dc != 0) && (DAT_000441d8 != 0)) {
    pcVar13 = *(code **)(DAT_000126f8 + 0x30c);
    *(undefined4 *)(DAT_000126f8 + -0x10f30) = s_caution__both__n_and__o_specifie_0002c934._0_4_;
    *(undefined4 *)(iVar12 + -0x10f2c) = uVar4;
    *(undefined4 *)(iVar12 + -0x10f28) = uVar1;
    *(undefined4 *)(iVar12 + -0x10f24) = uVar2;
    uVar2 = s_caution__both__n_and__o_specifie_0002c934._28_4_;
    uVar1 = s_caution__both__n_and__o_specifie_0002c934._24_4_;
    uVar4 = s_caution__both__n_and__o_specifie_0002c934._20_4_;
    *(undefined4 *)(iVar12 + -0x10f20) = s_caution__both__n_and__o_specifie_0002c934._16_4_;
    *(undefined4 *)(iVar12 + -0x10f1c) = uVar4;
    *(undefined4 *)(iVar12 + -0x10f18) = uVar1;
    *(undefined4 *)(iVar12 + -0x10f14) = uVar2;
    uVar3 = ram0x0002c964;
    uVar2 = s_caution__both__n_and__o_specifie_0002c934._44_4_;
    uVar1 = s_caution__both__n_and__o_specifie_0002c934._40_4_;
    uVar4 = s_caution__both__n_and__o_specifie_0002c934._36_4_;
    *(undefined4 *)(iVar12 + -0x10f10) = s_caution__both__n_and__o_specifie_0002c934._32_4_;
    *(undefined4 *)(iVar12 + -0x10f0c) = uVar4;
    *(undefined4 *)(iVar12 + -0x10f08) = uVar1;
    *(undefined4 *)(iVar12 + -0x10f04) = uVar2;
    *(char *)(iVar12 + -0x10f00) = (char)uVar3;
    (*pcVar13)(iVar12 + -0x91000,iVar12 + -0x10f30,0x30,0x401);
    DAT_000441dc = 0;
  }
  if ((DAT_00044210 != 0) && (iVar12 = isatty(1), iVar12 == 0)) {
    DAT_00044210 = 0;
  }
  if (iVar14 == 0) {
    *piVar22 = -1;
    uVar5 = DAT_000441f4;
    *param_2 = iVar16;
    if (1 < (int)uVar5) {
LAB_000121fc:
      iVar9 = DAT_000126c8;
      iVar12 = DAT_000126c0;
      pcVar13 = *(code **)(DAT_000126c0 + 0x30c);
      if ((int)DAT_000441e0 < 4) {
        sprintf(DAT_000126fc,(char *)(DAT_000126c8 + 0x140),6,0,0,"",DAT_000126c8);
        iVar15 = DAT_000126cc;
        (*pcVar13)(iVar12 + -0x91000,iVar12 + -0x10f30,0x9c,0);
        pcVar13 = *(code **)(iVar12 + 0x30c);
        memcpy((void *)(iVar12 + -0x10f30),
               "Latest sources and executables are at ftp://ftp.info-zip.org/pub/infozip/ ;\nsee ftp://ftp.info-zip.org/pub/infozip/UnZip.html for other sites.\n\n"
               ,0x91);
        (*pcVar13)(iVar12 + -0x91000,iVar12 + -0x10f30,0x90,0);
        FUN_0002b244();
        uVar2 = s_UnZip_special_compilation_option_0002c8e4._12_4_;
        uVar1 = s_UnZip_special_compilation_option_0002c8e4._8_4_;
        uVar4 = s_UnZip_special_compilation_option_0002c8e4._4_4_;
        *(undefined4 *)(iVar12 + -0x10f30) = s_UnZip_special_compilation_option_0002c8e4._0_4_;
        *(undefined4 *)(iVar12 + -0x10f2c) = uVar4;
        *(undefined4 *)(iVar12 + -0x10f28) = uVar1;
        *(undefined4 *)(iVar12 + -0x10f24) = uVar2;
        uVar3 = s_UnZip_special_compilation_option_0002c8e4._32_4_;
        uVar2 = s_UnZip_special_compilation_option_0002c8e4._28_4_;
        uVar1 = s_UnZip_special_compilation_option_0002c8e4._24_4_;
        uVar4 = s_UnZip_special_compilation_option_0002c8e4._20_4_;
        *(undefined4 *)(iVar12 + -0x10f20) = s_UnZip_special_compilation_option_0002c8e4._16_4_;
        *(undefined4 *)(iVar12 + -0x10f1c) = uVar4;
        *(undefined4 *)(iVar12 + -0x10f18) = uVar1;
        *(undefined4 *)(iVar12 + -0x10f14) = uVar2;
        *(undefined4 *)(iVar12 + -0x10f10) = uVar3;
        (**(code **)(iVar12 + 0x30c))(iVar12 + -0x91000,iVar12 + -0x10f30,0x23,0);
        pcVar13 = *(code **)(iVar12 + 0x30c);
        sprintf((char *)(iVar12 + -0x10f30),(char *)(iVar15 + 0x3d4));
        (*pcVar13)(iVar12 + -0x91000,iVar12 + -0x10f30,0x45,0);
        pcVar13 = *(code **)(iVar12 + 0x30c);
        sprintf((char *)(iVar12 + -0x10f30),(char *)(iVar15 + 0x3d4));
        (*pcVar13)(iVar12 + -0x91000,iVar12 + -0x10f30,0x17,0);
        pcVar13 = *(code **)(iVar12 + 0x30c);
        sprintf((char *)(iVar12 + -0x10f30),(char *)(iVar15 + 0x3d4));
        (*pcVar13)(iVar12 + -0x91000,iVar12 + -0x10f30,0x4b,0);
        pcVar13 = *(code **)(iVar12 + 0x30c);
        sprintf((char *)(iVar12 + -0x10f30),(char *)(DAT_000126d0 + -100));
        (*pcVar13)(iVar12 + -0x91000,iVar12 + -0x10f30,0x12,0);
        pcVar13 = *(code **)(iVar12 + 0x30c);
        sprintf((char *)(iVar12 + -0x10f30),(char *)(DAT_000126d4 + -0x70));
        (*pcVar13)(iVar12 + -0x91000,iVar12 + -0x10f30,0x13,0);
        pcVar13 = *(code **)(iVar12 + 0x30c);
        sprintf((char *)(iVar12 + -0x10f30),(char *)(iVar15 + 0x3d4));
        (*pcVar13)(iVar12 + -0x91000,iVar12 + -0x10f30,0x17,0);
        pcVar13 = *(code **)(iVar12 + 0x30c);
        sprintf((char *)(iVar12 + -0x10f30),(char *)(DAT_000126d8 + -0x90));
        (*pcVar13)(iVar12 + -0x91000,iVar12 + -0x10f30,0x42,0);
        pcVar13 = *(code **)(iVar12 + 0x30c);
        sprintf((char *)(iVar12 + -0x10f30),(char *)(DAT_000126dc + -0xd0));
        (*pcVar13)(iVar12 + -0x91000,iVar12 + -0x10f30,0x3a,0);
        iVar6 = iVar15;
        if (*(int *)(iVar12 + 0x234) == 0) {
          iVar6 = iVar15 + 8;
        }
        sprintf((char *)(iVar12 + -0x10e30),(char *)(iVar9 + 0xc80),iVar6);
        pcVar13 = *(code **)(iVar12 + 0x30c);
        iVar9 = sprintf((char *)(iVar12 + -0x10f30),(char *)(iVar15 + 0x3d4),iVar12 + -0x10e30);
        (*pcVar13)(iVar12 + -0x91000,iVar12 + -0x10f30,iVar9,0);
        uVar4 = _stdlib_mb_cur_max();
        sprintf((char *)(iVar12 + -0x10e30),DAT_000126e0,uVar4);
        pcVar13 = *(code **)(iVar12 + 0x30c);
        iVar9 = sprintf((char *)(iVar12 + -0x10f30),(char *)(iVar15 + 0x3d4),iVar12 + -0x10e30);
        (*pcVar13)(iVar12 + -0x91000,iVar12 + -0x10f30,iVar9,0);
        pcVar13 = *(code **)(iVar12 + 0x30c);
        sprintf((char *)(iVar12 + -0x10f30),(char *)(iVar15 + 0x3d4),iVar15 + 0x560);
        (*pcVar13)(iVar12 + -0x91000,iVar12 + -0x10f30,0x16,0);
        pcVar21 = "";
        pcVar13 = *(code **)(iVar12 + 0x30c);
        iVar9 = DAT_000126e4;
        sprintf((char *)(iVar12 + -0x10f30),(char *)(DAT_000126e4 + -0x30),2,0xb,"",DAT_000126e4);
        (*pcVar13)(iVar12 + -0x91000,iVar12 + -0x10f30,0x32,0);
        uVar2 = s_UnZip_and_ZipInfo_environment_op_0002c908._12_4_;
        uVar1 = s_UnZip_and_ZipInfo_environment_op_0002c908._8_4_;
        uVar4 = s_UnZip_and_ZipInfo_environment_op_0002c908._4_4_;
        *(undefined4 *)(iVar12 + -0x10f30) = s_UnZip_and_ZipInfo_environment_op_0002c908._0_4_;
        *(undefined4 *)(iVar12 + -0x10f2c) = uVar4;
        *(undefined4 *)(iVar12 + -0x10f28) = uVar1;
        *(undefined4 *)(iVar12 + -0x10f24) = uVar2;
        uVar2 = s_UnZip_and_ZipInfo_environment_op_0002c908._28_4_;
        uVar1 = s_UnZip_and_ZipInfo_environment_op_0002c908._24_4_;
        uVar4 = s_UnZip_and_ZipInfo_environment_op_0002c908._20_4_;
        *(undefined4 *)(iVar12 + -0x10f20) = s_UnZip_and_ZipInfo_environment_op_0002c908._16_4_;
        *(undefined4 *)(iVar12 + -0x10f1c) = uVar4;
        *(undefined4 *)(iVar12 + -0x10f18) = uVar1;
        *(undefined4 *)(iVar12 + -0x10f14) = uVar2;
        uVar1 = ram0x0002c930;
        uVar4 = s_UnZip_and_ZipInfo_environment_op_0002c908._36_4_;
        *(undefined4 *)(iVar12 + -0x10f10) = s_UnZip_and_ZipInfo_environment_op_0002c908._32_4_;
        *(undefined4 *)(iVar12 + -0x10f0c) = uVar4;
        *(char *)(iVar12 + -0x10f08) = (char)uVar1;
        (**(code **)(iVar12 + 0x30c))(iVar12 + -0x91000,iVar12 + -0x10f30,0x28,0);
        pcVar10 = getenv(DAT_000126e8);
        pcVar13 = *(code **)(iVar12 + 0x30c);
        pcVar8 = DAT_00012700;
        if ((pcVar10 != (char *)0x0) && (pcVar8 = pcVar10, *pcVar10 == '\0')) {
          pcVar8 = DAT_00012700;
        }
        iVar9 = sprintf(DAT_000126fc,DAT_000126e8 + 0xc,DAT_000126e8,pcVar8,pcVar21,iVar9);
        (*pcVar13)(&DAT_000441a0,DAT_000126fc,iVar9,0);
        pcVar10 = getenv(DAT_000126ec);
        pcVar13 = *(code **)(iVar12 + 0x30c);
        pcVar8 = DAT_00012700;
        if ((pcVar10 != (char *)0x0) && (pcVar8 = pcVar10, *pcVar10 == '\0')) {
          pcVar8 = DAT_00012700;
        }
        iVar9 = sprintf(DAT_000126fc,DAT_000126ec + -0x10,DAT_000126ec,pcVar8);
        (*pcVar13)(&DAT_000441a0,DAT_000126fc,iVar9,0);
        pcVar10 = getenv(DAT_000126f0);
        pcVar13 = *(code **)(iVar12 + 0x30c);
        pcVar8 = DAT_00012700;
        if ((pcVar10 != (char *)0x0) && (pcVar8 = pcVar10, *pcVar10 == '\0')) {
          pcVar8 = DAT_00012700;
        }
        iVar9 = sprintf(DAT_000126fc,DAT_000126f0 + -0x1c,DAT_000126f0,pcVar8);
        (*pcVar13)(&DAT_000441a0,DAT_000126fc,iVar9,0);
        pcVar10 = getenv(DAT_000126f4);
        pcVar13 = *(code **)(iVar12 + 0x30c);
        pcVar8 = DAT_00012700;
        if ((pcVar10 != (char *)0x0) && (pcVar8 = pcVar10, *pcVar10 == '\0')) {
          pcVar8 = DAT_00012700;
        }
        iVar12 = sprintf(DAT_000126fc,DAT_000126f4 + -0x24,DAT_000126f4,pcVar8);
        (*pcVar13)(&DAT_000441a0,DAT_000126fc,iVar12,0);
      }
      else {
        sprintf(DAT_000126fc,"%d\n",600);
        (*pcVar13)(iVar12 + -0x91000,DAT_000126fc,4,0);
      }
      return 0;
    }
    if (param_1 != (int *)0x0 || DAT_00044224 != 0) goto LAB_000114e8;
  }
  else {
    iVar9 = iVar9 + -2;
    if (param_1 == (int *)0x0) {
      DAT_0004423c = (uint)((((DAT_000441b4 == 0 && DAT_000441e4 == 0) && DAT_000441f4 == 0) &&
                            DAT_00044204 == 0) && DAT_000441e8 == 0);
      *piVar22 = iVar9;
      *param_2 = iVar16;
      return 0;
    }
    *piVar22 = iVar9;
    uVar5 = DAT_000441f4;
    *param_2 = iVar16;
    if (1 < (int)uVar5) {
      if (iVar9 == -1) goto LAB_000121fc;
      goto LAB_000114e8;
    }
  }
  param_1 = (int *)0x1;
LAB_000114e8:
  pcVar13 = DAT_000d54ac;
  iVar9 = DAT_000116d0;
  iVar12 = DAT_000116c8;
  bVar20 = param_1 != (int *)0x0;
  if (DAT_000441a8 == 0) {
    sprintf(DAT_000116cc,(char *)(DAT_000116d0 + 0x140),6,0,0,"",DAT_000116d0);
    (*pcVar13)(&DAT_000441a0,DAT_000116cc,0x9c,bVar20);
    pcVar13 = DAT_000d54ac;
    sprintf(DAT_000116cc,(char *)(iVar9 + 0x208),"[-Z] ",iVar9 + 0x1d8);
    (*pcVar13)(&DAT_000441a0,DAT_000116cc,0xe8,bVar20);
    pcVar13 = DAT_000d54ac;
    sprintf(DAT_000116cc,(char *)(iVar9 + 0x2f0),iVar9 + 0x2c8);
    (*pcVar13)(&DAT_000441a0,DAT_000116cc,0x17f,bVar20);
    pcVar13 = DAT_000d54ac;
    sprintf(DAT_000116cc,(char *)(DAT_000116d4 + 0x70));
    (*pcVar13)(&DAT_000441a0,DAT_000116cc,0x21d,bVar20);
    pcVar13 = DAT_000d54ac;
    sprintf(DAT_000116cc,(char *)(iVar9 + 0x6d0),iVar9 + 0x680,DAT_000116d8,DAT_000116d8);
    (*pcVar13)(&DAT_000441a0,DAT_000116cc,0x123,bVar20);
  }
  else {
    sprintf(DAT_000116cc,(char *)(DAT_000116c8 + -0x1a8),3,0,0,"",DAT_000116c8 + 0x20,DAT_000116c8,
            "","");
    (*pcVar13)(&DAT_000441a0,DAT_000116cc,0x1c0,bVar20);
    pcVar13 = DAT_000d54ac;
    memcpy(DAT_000116cc,
           "\nmain listing-format options:             -s  short Unix \"ls -l\" format (def.)\n  -1  filenames ONLY, one per line       -m  medium Unix \"ls -l\" format\n  -2  just filenames but allow -h/-t/-z  -l  long Unix \"ls -l\" format\n                                         -v  verbose, multi-page format\n"
           ,0x126);
    (*pcVar13)(&DAT_000441a0,DAT_000116cc,0x125,bVar20);
    pcVar13 = DAT_000d54ac;
    sprintf(DAT_000116cc,(char *)(iVar12 + 0x60),iVar12 + 0x30);
    (*pcVar13)(&DAT_000441a0,DAT_000116cc,0x127,bVar20);
  }
  if (param_1 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 10;
  }
  return uVar4;
joined_r0x0001190c:
  if (cVar7 == '\0') goto LAB_00011910;
LAB_00011954:
  if (pcVar10[1] == '\0') goto LAB_00011910;
  pcVar10 = pcVar10 + 2;
  cVar7 = *pcVar10;
  goto joined_r0x0001190c;
joined_r0x00011c50:
  if (cVar7 == '\0') goto LAB_00011910;
LAB_00011c58:
  if (pcVar10[1] == '\0') goto LAB_00011910;
  pcVar10 = pcVar10 + 2;
  cVar7 = *pcVar10;
  goto joined_r0x00011c50;
switchD_00011750_caseD_2d:
  cVar7 = pcVar8[1];
  iVar12 = iVar12 + 1;
  goto LAB_0001173c;
LAB_00011910:
  iVar14 = iVar9 + -1;
  iVar16 = iVar15 + 4;
  iVar6 = iVar15;
  iVar15 = iVar16;
  if (iVar14 < 1) goto LAB_00011924;
  goto LAB_0001171c;
}



/* ===== FUN_00012814 @ 00012814 size=1380 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00012814(uint param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  code *pcVar5;
  char *pcVar6;
  int iVar7;
  size_t sVar8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  char *pcVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  bool bVar18;
  bool bVar19;
  undefined4 *local_30;
  uint local_2c [2];
  
  local_30 = param_2;
  local_2c[0] = param_1;
  setlocale(0,"");
  pcVar6 = nl_langinfo(10);
  uVar9 = 0;
  if (pcVar6 != (char *)0x0) {
    iVar7 = strcmp(pcVar6,"UTF-8");
    uVar9 = (uint)(iVar7 == 0);
  }
  DAT_000d53cc = 0;
  DAT_000d53d8 = 0;
  DAT_000d53dc = 0;
  DAT_000d53e0 = 0;
  DAT_000d53d4 = uVar9;
  signal(2,FUN_0001acc4);
  signal(0xf,FUN_0001acc4);
  signal(6,FUN_0001acc4);
  signal(7,FUN_0001acc4);
  signal(4,FUN_0001acc4);
  signal(0xb,FUN_0001acc4);
  pcVar14 = (char *)*local_30;
  DAT_00044224 = (uint)(local_2c[0] == 1);
  sVar8 = strlen(pcVar14);
  pcVar6 = pcVar14 + sVar8;
  if (CARRY4((uint)pcVar14,sVar8)) {
    pcVar10 = pcVar14 + sVar8 + 1;
  }
  else {
    do {
      pcVar10 = pcVar6;
      if (pcVar14 == pcVar10) break;
      pcVar6 = pcVar10 + -1;
    } while (pcVar10[-1] != '/');
  }
  iVar7 = FUN_0001ba84(pcVar10,DAT_00012d78,7);
  if (((iVar7 == 0) || (iVar7 = FUN_0001ba84(pcVar10,&DAT_0002c970,2), iVar7 == 0)) ||
     ((1 < (int)local_2c[0] && (iVar7 = strncmp((char *)local_30[1],"-Z",2), iVar7 == 0)))) {
    DAT_000441a8 = 1;
    iVar7 = FUN_000137f0(local_2c,&local_30,DAT_00012d7c + -8);
    puVar15 = local_30;
    uVar9 = local_2c[0];
  }
  else {
    DAT_000441a8 = 0;
    iVar7 = FUN_000137f0(local_2c,&local_30,DAT_00012d88 + -0x1c);
    puVar15 = local_30;
    uVar9 = local_2c[0];
  }
  local_30 = puVar15;
  local_2c[0] = uVar9;
  if (iVar7 != 0) {
    perror(DAT_00012d8c);
    return iVar7;
  }
  if (1 < (int)uVar9) {
    uVar11 = 1;
    do {
      puVar15 = puVar15 + 1;
      sVar8 = strlen((char *)*puVar15);
      pcVar5 = DAT_000d54ac;
      if (0x3f60 < sVar8) {
        iVar7 = sprintf(DAT_00012d84,DAT_00012d80,uVar11);
        (*pcVar5)(&DAT_000441a0,DAT_00012d84,iVar7,0x401);
        return 10;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar9);
  }
  if (DAT_000441a8 == 0) {
    iVar7 = FUN_000116dc(local_2c,&local_30);
  }
  else {
    iVar7 = FUN_000256bc();
  }
  uVar9 = local_2c[0];
  if (iVar7 == 0) {
    uVar11 = local_2c[0] >> 0x1f;
  }
  else {
    uVar11 = 1;
  }
  if (uVar11 != 0) {
    return iVar7;
  }
  puVar15 = local_30 + 1;
  DAT_00044228 = local_2c[0];
  DAT_0004422c = uVar11;
  *(undefined4 *)(DAT_00012d90 + 0xf4) = *local_30;
  pcVar6 = DAT_000441a0;
  if (local_2c[0] == 0) {
    DAT_00044230 = 1;
    local_30 = puVar15;
  }
  else {
    pcVar14 = (char *)local_30[1];
    DAT_00044230 = 0;
    bVar18 = false;
    puVar12 = puVar15;
    puVar17 = local_30;
    DAT_00044254 = puVar15;
    local_30 = puVar15;
    bVar19 = bVar18;
LAB_00012b10:
    puVar16 = puVar17;
    if (pcVar14 != (char *)0x0) {
      while( true ) {
        puVar13 = puVar12;
        puVar17 = puVar13;
        if ((pcVar6 == (char *)0x0) &&
           (iVar7 = strncmp(pcVar14,"-d",2), puVar4 = DAT_00044258, puVar12 = DAT_00044254,
           iVar7 == 0)) {
          pcVar6 = pcVar14 + 2;
          DAT_000441a0 = pcVar6;
          if (bVar19) {
            puVar16[1] = 0;
            DAT_00044228 = (int)puVar13 - (int)puVar12 >> 2;
          }
          else if (bVar18) {
            puVar16[1] = 0;
            DAT_0004422c = (int)puVar13 - (int)puVar4 >> 2;
          }
          pcVar5 = DAT_000d54ac;
          pcVar10 = DAT_000441a0;
          if (pcVar14[2] == '\0') {
            pcVar6 = (char *)puVar16[2];
            puVar17 = puVar16 + 2;
            pcVar10 = pcVar6;
            if (pcVar6 == (char *)0x0) {
              memcpy(DAT_00012d84,
                     "error:  must specify directory to which to extract with -d option\n",0x43);
              (*pcVar5)(&DAT_000441a0,DAT_00012d84,0x42,0x401);
              return 10;
            }
          }
          DAT_000441a0 = pcVar10;
          pcVar14 = (char *)puVar17[1];
          if (puVar15 != puVar13) {
            puVar12 = puVar17 + 1;
            bVar19 = false;
            goto LAB_00012b10;
          }
          if (pcVar14 != (char *)0x0) {
            puVar12 = puVar17 + 1;
            bVar19 = false;
            DAT_00044228 = uVar9 - ((int)puVar12 - (int)puVar15 >> 2);
            DAT_00044254 = puVar12;
            goto LAB_00012b10;
          }
          DAT_00044230 = 1;
          DAT_00044254 = (undefined4 *)&DAT_00044148;
          DAT_00044228 = 0;
          pcVar6 = DAT_000441a0;
          goto LAB_00012b3c;
        }
        if (!bVar18) break;
        pcVar14 = (char *)puVar16[2];
        puVar12 = puVar13 + 1;
        puVar16 = puVar13;
        if (pcVar14 == (char *)0x0) goto LAB_00012b3c;
      }
      iVar7 = strcmp(pcVar14,"-x");
      puVar12 = DAT_00044254;
      if (iVar7 == 0) {
        if (DAT_00044254 == puVar13) {
          DAT_00044254 = (undefined4 *)&DAT_00044148;
          DAT_00044228 = 0;
        }
        else if (bVar19) {
          puVar16[1] = 0;
          DAT_00044228 = (int)puVar13 - (int)puVar12 >> 2;
          bVar19 = false;
        }
        DAT_00044258 = puVar16 + 2;
        pcVar14 = (char *)puVar16[2];
        bVar18 = true;
        puVar12 = puVar13 + 1;
        DAT_0004422c = uVar9 - ((int)DAT_00044258 - (int)puVar15 >> 2);
      }
      else {
        pcVar14 = (char *)puVar16[2];
        bVar19 = true;
        puVar12 = puVar13 + 1;
      }
      goto LAB_00012b10;
    }
  }
LAB_00012b3c:
  pcVar5 = DAT_000d54ac;
  uVar3 = s_caution__not_extracting___d_igno_0002c980._12_4_;
  uVar2 = s_caution__not_extracting___d_igno_0002c980._8_4_;
  uVar1 = s_caution__not_extracting___d_igno_0002c980._4_4_;
  pcVar14 = DAT_00012d84;
  if ((pcVar6 != (char *)0x0) && (DAT_0004423c == 0)) {
    *(undefined4 *)DAT_00012d84 = s_caution__not_extracting___d_igno_0002c980._0_4_;
    *(undefined4 *)(pcVar14 + 4) = uVar1;
    *(undefined4 *)(pcVar14 + 8) = uVar2;
    *(undefined4 *)(pcVar14 + 0xc) = uVar3;
    uVar3 = s_caution__not_extracting___d_igno_0002c980._28_4_;
    uVar2 = s_caution__not_extracting___d_igno_0002c980._24_4_;
    uVar1 = s_caution__not_extracting___d_igno_0002c980._20_4_;
    *(undefined4 *)(pcVar14 + 0x10) = s_caution__not_extracting___d_igno_0002c980._16_4_;
    *(undefined4 *)(pcVar14 + 0x14) = uVar1;
    *(undefined4 *)(pcVar14 + 0x18) = uVar2;
    *(undefined4 *)(pcVar14 + 0x1c) = uVar3;
    uVar1 = ram0x0002c9a4;
    *(undefined4 *)(pcVar14 + 0x20) = s_caution__not_extracting___d_igno_0002c980._32_4_;
    *(short *)(pcVar14 + 0x24) = (short)uVar1;
    (*pcVar5)(&DAT_000441a0,pcVar14,0x25,0x401);
  }
  if (DAT_000441f0 == 1) {
    DAT_000d53cc = CONCAT44(DAT_000d53cc._4_4_,1);
  }
  iVar7 = FUN_000232d4();
  return iVar7;
}



/* ===== FUN_00012d98 @ 00012d98 size=260 ===== */

void FUN_00012d98(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  if (DAT_00044198 != (undefined8 *)0x0) {
    return;
  }
  puVar10 = malloc(0x400);
  uVar9 = DAT_00012eb8;
  uVar8 = DAT_00012eb0;
  if (puVar10 == (undefined8 *)0x0) {
    return;
  }
  auVar1._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
  auVar1._0_8_ = 0x400000004;
  auVar2._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
  auVar2._0_8_ = 0x100000001;
  auVar2 = *(undefined1 (*) [16])(auVar2 << 0x40 | auVar2);
  auVar15._8_8_ = DAT_00012ea8;
  auVar15._0_8_ = DAT_00012ea0;
  puVar11 = puVar10;
  do {
    auVar12 = auVar15 & auVar2;
    auVar14 = VectorUnsignedFixedToFloat(auVar15,1);
    auVar15 = VectorAdd(auVar15,*(undefined1 (*) [16])(auVar1 << 0x40 | auVar1),4);
    auVar13 = VectorCompareEqual(auVar12,(undefined1  [16])0x0,4);
    auVar12._8_8_ = uVar9;
    auVar12._0_8_ = uVar8;
    auVar12 = VectorBitwiseSelect(auVar13,auVar14,auVar14 ^ auVar12);
    auVar14 = VectorUnsignedFixedToFloat(auVar12,1);
    auVar12 = VectorCompareEqual(auVar12 & auVar2,(undefined1  [16])0x0,4);
    auVar13._8_8_ = uVar9;
    auVar13._0_8_ = uVar8;
    auVar12 = VectorBitwiseSelect(auVar12,auVar14,auVar14 ^ auVar13);
    auVar13 = VectorUnsignedFixedToFloat(auVar12,1);
    auVar12 = VectorCompareEqual(auVar12 & auVar2,(undefined1  [16])0x0,4);
    auVar14._8_8_ = uVar9;
    auVar14._0_8_ = uVar8;
    auVar12 = VectorBitwiseSelect(auVar12,auVar13,auVar13 ^ auVar14);
    auVar13 = VectorUnsignedFixedToFloat(auVar12,1);
    auVar12 = VectorCompareEqual(auVar12 & auVar2,(undefined1  [16])0x0,4);
    auVar3._8_8_ = uVar9;
    auVar3._0_8_ = uVar8;
    auVar12 = VectorBitwiseSelect(auVar12,auVar13,auVar13 ^ auVar3);
    auVar13 = VectorUnsignedFixedToFloat(auVar12,1);
    auVar12 = VectorCompareEqual(auVar12 & auVar2,(undefined1  [16])0x0,4);
    auVar4._8_8_ = uVar9;
    auVar4._0_8_ = uVar8;
    auVar12 = VectorBitwiseSelect(auVar12,auVar13,auVar13 ^ auVar4);
    auVar13 = VectorUnsignedFixedToFloat(auVar12,1);
    auVar12 = VectorCompareEqual(auVar12 & auVar2,(undefined1  [16])0x0,4);
    auVar5._8_8_ = uVar9;
    auVar5._0_8_ = uVar8;
    auVar12 = VectorBitwiseSelect(auVar12,auVar13,auVar13 ^ auVar5);
    auVar13 = VectorUnsignedFixedToFloat(auVar12,1);
    auVar12 = VectorCompareEqual(auVar12 & auVar2,(undefined1  [16])0x0,4);
    auVar6._8_8_ = uVar9;
    auVar6._0_8_ = uVar8;
    auVar12 = VectorBitwiseSelect(auVar12,auVar13,auVar13 ^ auVar6);
    auVar13 = VectorUnsignedFixedToFloat(auVar12,1);
    auVar12 = VectorCompareEqual(auVar12 & auVar2,(undefined1  [16])0x0,4);
    auVar7._8_8_ = uVar9;
    auVar7._0_8_ = uVar8;
    auVar12 = VectorBitwiseInsertIfFalse(auVar13,auVar13 ^ auVar7,auVar12);
    *puVar11 = auVar12._0_8_;
    puVar11[1] = auVar12._8_8_;
    puVar11 = puVar11 + 2;
  } while (puVar10 + 0x80 != puVar11);
  DAT_00044198 = puVar10;
  return;
}



/* ===== FUN_00012ec0 @ 00012ec0 size=40 ===== */

void FUN_00012ec0(void)

{
  if (DAT_00044198 == (void *)0x0) {
    return;
  }
  free(DAT_00044198);
  DAT_00044198 = (void *)0x0;
  return;
}



/* ===== FUN_00012ee8 @ 00012ee8 size=708 ===== */

uint FUN_00012ee8(uint param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined8 *puVar12;
  byte *pbVar13;
  byte *pbVar14;
  undefined8 *puVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  if (param_2 == (byte *)0x0) {
    param_1 = 0;
  }
  else {
    puVar12 = DAT_00044198;
    if ((DAT_00044198 == (undefined8 *)0x0) &&
       (puVar12 = malloc(0x400), uVar10 = DAT_000131c8, uVar9 = DAT_000131c0,
       puVar12 != (undefined8 *)0x0)) {
      auVar2._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
      auVar2._0_8_ = 0x400000004;
      auVar3._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
      auVar3._0_8_ = 0x100000001;
      auVar3 = *(undefined1 (*) [16])(auVar3 << 0x40 | auVar3);
      auVar19._8_8_ = DAT_000131b8;
      auVar19._0_8_ = DAT_000131b0;
      puVar15 = puVar12;
      do {
        auVar16 = auVar19 & auVar3;
        auVar18 = VectorUnsignedFixedToFloat(auVar19,1);
        auVar19 = VectorAdd(auVar19,*(undefined1 (*) [16])(auVar2 << 0x40 | auVar2),4);
        auVar17 = VectorCompareEqual(auVar16,(undefined1  [16])0x0,4);
        auVar16._8_8_ = uVar10;
        auVar16._0_8_ = uVar9;
        auVar16 = VectorBitwiseSelect(auVar17,auVar18,auVar18 ^ auVar16);
        auVar18 = VectorUnsignedFixedToFloat(auVar16,1);
        auVar16 = VectorCompareEqual(auVar16 & auVar3,(undefined1  [16])0x0,4);
        auVar17._8_8_ = uVar10;
        auVar17._0_8_ = uVar9;
        auVar16 = VectorBitwiseSelect(auVar16,auVar18,auVar18 ^ auVar17);
        auVar17 = VectorUnsignedFixedToFloat(auVar16,1);
        auVar16 = VectorCompareEqual(auVar16 & auVar3,(undefined1  [16])0x0,4);
        auVar18._8_8_ = uVar10;
        auVar18._0_8_ = uVar9;
        auVar16 = VectorBitwiseSelect(auVar16,auVar17,auVar17 ^ auVar18);
        auVar17 = VectorUnsignedFixedToFloat(auVar16,1);
        auVar16 = VectorCompareEqual(auVar16 & auVar3,(undefined1  [16])0x0,4);
        auVar4._8_8_ = uVar10;
        auVar4._0_8_ = uVar9;
        auVar16 = VectorBitwiseSelect(auVar16,auVar17,auVar17 ^ auVar4);
        auVar17 = VectorUnsignedFixedToFloat(auVar16,1);
        auVar16 = VectorCompareEqual(auVar16 & auVar3,(undefined1  [16])0x0,4);
        auVar5._8_8_ = uVar10;
        auVar5._0_8_ = uVar9;
        auVar16 = VectorBitwiseSelect(auVar16,auVar17,auVar17 ^ auVar5);
        auVar17 = VectorUnsignedFixedToFloat(auVar16,1);
        auVar16 = VectorCompareEqual(auVar16 & auVar3,(undefined1  [16])0x0,4);
        auVar6._8_8_ = uVar10;
        auVar6._0_8_ = uVar9;
        auVar16 = VectorBitwiseSelect(auVar16,auVar17,auVar17 ^ auVar6);
        auVar17 = VectorUnsignedFixedToFloat(auVar16,1);
        auVar16 = VectorCompareEqual(auVar16 & auVar3,(undefined1  [16])0x0,4);
        auVar7._8_8_ = uVar10;
        auVar7._0_8_ = uVar9;
        auVar16 = VectorBitwiseSelect(auVar16,auVar17,auVar17 ^ auVar7);
        auVar17 = VectorUnsignedFixedToFloat(auVar16,1);
        auVar16 = VectorCompareEqual(auVar16 & auVar3,(undefined1  [16])0x0,4);
        auVar8._8_8_ = uVar10;
        auVar8._0_8_ = uVar9;
        auVar16 = VectorBitwiseInsertIfFalse(auVar17,auVar17 ^ auVar8,auVar16);
        *puVar15 = auVar16._0_8_;
        puVar15[1] = auVar16._8_8_;
        puVar15 = puVar15 + 2;
        DAT_00044198 = puVar12;
      } while (puVar12 + 0x80 != puVar15);
    }
    param_1 = ~param_1;
    if (7 < param_3) {
      uVar1 = param_3 - 8 >> 3;
      pbVar13 = param_2 + 8;
      do {
        pbVar14 = pbVar13 + 8;
        uVar11 = *(uint *)((int)puVar12 + ((pbVar13[-8] ^ param_1) & 0xff) * 4) ^ param_1 >> 8;
        uVar11 = *(uint *)((int)puVar12 + ((pbVar13[-7] ^ uVar11) & 0xff) * 4) ^ uVar11 >> 8;
        uVar11 = *(uint *)((int)puVar12 + ((pbVar13[-6] ^ uVar11) & 0xff) * 4) ^ uVar11 >> 8;
        uVar11 = *(uint *)((int)puVar12 + ((pbVar13[-5] ^ uVar11) & 0xff) * 4) ^ uVar11 >> 8;
        uVar11 = *(uint *)((int)puVar12 + ((pbVar13[-4] ^ uVar11) & 0xff) * 4) ^ uVar11 >> 8;
        uVar11 = *(uint *)((int)puVar12 + ((pbVar13[-3] ^ uVar11) & 0xff) * 4) ^ uVar11 >> 8;
        uVar11 = *(uint *)((int)puVar12 + ((pbVar13[-2] ^ uVar11) & 0xff) * 4) ^ uVar11 >> 8;
        param_1 = *(uint *)((int)puVar12 + ((pbVar13[-1] ^ uVar11) & 0xff) * 4) ^ uVar11 >> 8;
        pbVar13 = pbVar14;
      } while (param_2 + uVar1 * 8 + 0x10 != pbVar14);
      param_3 = param_3 & 7;
      param_2 = param_2 + (uVar1 + 1) * 8;
    }
    if ((((param_3 != 0) &&
         (param_1 = *(uint *)((int)puVar12 + ((*param_2 ^ param_1) & 0xff) * 4) ^ param_1 >> 8,
         param_3 != 1)) &&
        (param_1 = *(uint *)((int)puVar12 + ((param_2[1] ^ param_1) & 0xff) * 4) ^ param_1 >> 8,
        param_3 != 2)) &&
       (((param_1 = *(uint *)((int)puVar12 + ((param_2[2] ^ param_1) & 0xff) * 4) ^ param_1 >> 8,
         param_3 != 3 &&
         (param_1 = *(uint *)((int)puVar12 + ((param_2[3] ^ param_1) & 0xff) * 4) ^ param_1 >> 8,
         param_3 != 4)) &&
        ((param_1 = *(uint *)((int)puVar12 + ((param_2[4] ^ param_1) & 0xff) * 4) ^ param_1 >> 8,
         param_3 != 5 &&
         (param_1 = *(uint *)((int)puVar12 + ((param_2[5] ^ param_1) & 0xff) * 4) ^ param_1 >> 8,
         param_3 != 6)))))) {
      param_1 = *(uint *)((int)puVar12 + ((param_2[6] ^ param_1) & 0xff) * 4) ^ param_1 >> 8;
    }
    param_1 = ~param_1;
  }
  return param_1;
}



/* ===== FUN_000131d0 @ 000131d0 size=508 ===== */

undefined4 FUN_000131d0(undefined4 *param_1,byte *param_2)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar3 = DAT_000133d8;
  uVar2 = DAT_000133d0;
  uVar9 = 0x34567890;
  puVar7 = (undefined8 *)(DAT_000133d8 + 0x24c);
  *(undefined4 *)(DAT_000133d8 + 0x254) = 0x34567890;
  *puVar7 = uVar2;
  uVar8 = (uint)*param_2;
  iVar11 = *(int *)(iVar3 + -0xf30);
  if (uVar8 == 0) {
    uVar13 = 0x12345678;
    uVar12 = 0x23456789;
  }
  else {
    uVar12 = 0x23456789;
    uVar13 = 0x12345678;
    do {
      uVar13 = *(uint *)(iVar11 + ((uVar8 ^ uVar13) & 0xff) * 4) ^ uVar13 >> 8;
      *(uint *)(iVar3 + 0x24c) = uVar13;
      uVar12 = (uVar12 + (uVar13 & 0xff)) * 0x8088405 + 1;
      *(uint *)(iVar3 + 0x250) = uVar12;
      uVar9 = *(uint *)(iVar11 + ((uVar9 ^ uVar12 >> 0x18) & 0xff) * 4) ^ uVar9 >> 8;
      *(uint *)(iVar3 + 0x254) = uVar9;
      param_2 = param_2 + 1;
      uVar8 = (uint)*param_2;
    } while (uVar8 != 0);
  }
  local_2c = *param_1;
  uStack_28 = param_1[1];
  uStack_24 = param_1[2];
  pbVar4 = (byte *)&local_2c;
  do {
    uVar8 = uVar9 & 0xffff | 2;
    uVar8 = (uint)*pbVar4 ^ uVar8 * (uVar8 ^ 1) >> 8;
    pbVar10 = pbVar4 + 1;
    *pbVar4 = (byte)uVar8;
    uVar13 = *(uint *)(iVar11 + ((uVar8 & 0xff ^ uVar13) & 0xff) * 4) ^ uVar13 >> 8;
    uVar12 = (uVar12 + (uVar13 & 0xff)) * 0x8088405 + 1;
    uVar9 = *(uint *)(iVar11 + ((uVar9 ^ uVar12 >> 0x18) & 0xff) * 4) ^ uVar9 >> 8;
    pbVar4 = pbVar10;
  } while (&stack0xffffffe0 != pbVar10);
  *(uint *)(iVar3 + 0x254) = uVar9;
  iVar11 = DAT_000c426c;
  *(uint *)(iVar3 + 0x24c) = uVar13;
  *(uint *)(iVar3 + 0x250) = uVar12;
  if ((*(byte *)(iVar11 + 0x18) & 2) == 0) {
    cVar1 = *(char *)(iVar3 + -0xedd);
  }
  else {
    cVar1 = *(char *)(iVar3 + -0xee3);
  }
  if (uStack_24._3_1_ == cVar1) {
    pbVar4 = *(byte **)(iVar3 + -0xf24);
    iVar11 = *(int *)(iVar3 + -0xf20);
    if (DAT_0004424c <= *(int *)(iVar3 + -0xf20)) {
      iVar11 = DAT_0004424c;
    }
    if (iVar11 != 0) {
      pbVar10 = pbVar4;
      do {
        uVar8 = uVar9 & 0xffff | 2;
        uVar8 = (uint)*pbVar10 ^ uVar8 * (uVar8 ^ 1) >> 8;
        pbVar5 = pbVar10 + 1;
        *pbVar10 = (byte)uVar8;
        uVar8 = *(uint *)(*(int *)(iVar3 + -0xf30) +
                         ((uVar8 & 0xff ^ *(uint *)(iVar3 + 0x24c)) & 0xff) * 4) ^
                *(uint *)(iVar3 + 0x24c) >> 8;
        *(uint *)(iVar3 + 0x24c) = uVar8;
        uVar8 = (*(int *)(iVar3 + 0x250) + (uVar8 & 0xff)) * 0x8088405 + 1;
        *(uint *)(iVar3 + 0x250) = uVar8;
        uVar9 = *(uint *)(*(int *)(iVar3 + -0xf30) +
                         ((*(uint *)(iVar3 + 0x254) ^ uVar8 >> 0x18) & 0xff) * 4) ^
                *(uint *)(iVar3 + 0x254) >> 8;
        *(uint *)(iVar3 + 0x254) = uVar9;
        pbVar10 = pbVar5;
      } while (pbVar5 != pbVar4 + iVar11);
    }
    uVar6 = 0;
  }
  else {
    uVar6 = 0xffffffff;
  }
  return uVar6;
}



/* ===== FUN_000133dc @ 000133dc size=32 ===== */

uint FUN_000133dc(void)

{
  uint uVar1;
  
  uVar1 = *(uint *)(DAT_000133fc + 0x254) & 0xffff | 2;
  return (uVar1 * (uVar1 ^ 1) & 0xffff) >> 8;
}



/* ===== FUN_00013400 @ 00013400 size=104 ===== */

void FUN_00013400(uint param_1)

{
  DAT_000d53ec = *(uint *)(DAT_000d4270 + ((DAT_000d53ec ^ param_1) & 0xff) * 4) ^ DAT_000d53ec >> 8
  ;
  DAT_000d53f0 = (DAT_000d53f0 + (DAT_000d53ec & 0xff)) * 0x8088405 + 1;
  DAT_000d53f4 = *(uint *)(DAT_000d4270 + ((DAT_000d53f4 ^ DAT_000d53f0 >> 0x18) & 0xff) * 4) ^
                 DAT_000d53f4 >> 8;
  return;
}



/* ===== FUN_00013468 @ 00013468 size=144 ===== */

void FUN_00013468(byte *param_1)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  
  iVar2 = DAT_00013500;
  uVar1 = DAT_000134f8;
  uVar7 = 0x34567890;
  puVar5 = (undefined8 *)(DAT_00013500 + 0x24c);
  *(undefined4 *)(DAT_00013500 + 0x254) = 0x34567890;
  *puVar5 = uVar1;
  uVar4 = (uint)*param_1;
  if (uVar4 == 0) {
    return;
  }
  uVar6 = 0x23456789;
  uVar3 = 0x12345678;
  do {
    uVar3 = *(uint *)(*(int *)(iVar2 + -0xf30) + ((uVar4 ^ uVar3) & 0xff) * 4) ^ uVar3 >> 8;
    *(uint *)(iVar2 + 0x24c) = uVar3;
    uVar6 = (uVar6 + (uVar3 & 0xff)) * 0x8088405 + 1;
    *(uint *)(iVar2 + 0x250) = uVar6;
    uVar7 = *(uint *)(*(int *)(iVar2 + -0xf30) + ((uVar7 ^ uVar6 >> 0x18) & 0xff) * 4) ^ uVar7 >> 8;
    *(uint *)(iVar2 + 0x254) = uVar7;
    param_1 = param_1 + 1;
    uVar4 = (uint)*param_1;
  } while (uVar4 != 0);
  return;
}



/* ===== FUN_00013504 @ 00013504 size=740 ===== */

undefined4 FUN_00013504(char *param_1)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  size_t sVar5;
  void *pvVar6;
  undefined4 uVar7;
  char *pcVar8;
  undefined1 *puVar9;
  int iVar10;
  int local_38;
  undefined1 auStack_34 [16];
  
  iVar1 = DAT_000137e8;
  *(byte *)(*(int *)(DAT_000137e8 + 0xcc) + 0x18) =
       *(byte *)(*(int *)(DAT_000137e8 + 0xcc) + 0x18) & 0xfe;
  FUN_000197fc();
  local_38 = 0;
  do {
    while (iVar10 = *(int *)((int)&Elf32_Phdr_ARRAY_00010034[5].p_paddr + iVar1),
          *(int *)((int)&Elf32_Phdr_ARRAY_00010034[5].p_paddr + iVar1) = iVar10 + -1, 0 < iVar10) {
      puVar9 = *(undefined1 **)((int)&Elf32_Phdr_ARRAY_00010034[5].p_vaddr + iVar1);
      *(undefined1 **)((int)&Elf32_Phdr_ARRAY_00010034[5].p_vaddr + iVar1) = puVar9 + 1;
      iVar10 = local_38 + 1;
      auStack_34[local_38] = *puVar9;
      local_38 = iVar10;
      if (0xb < iVar10) goto LAB_00013578;
    }
    uVar2 = FUN_00019950();
    iVar10 = local_38 + 1;
    auStack_34[local_38] = uVar2;
    local_38 = iVar10;
  } while (iVar10 < 0xc);
LAB_00013578:
  FUN_00019788();
  *(byte *)(*(int *)(iVar1 + 0xcc) + 0x18) = *(byte *)(*(int *)(iVar1 + 0xcc) + 0x18) | 1;
  pcVar8 = DAT_000d53e4;
  if (DAT_00044240 == 0) {
    if (DAT_000d53e4 != (char *)0x0) goto LAB_000135c0;
  }
  else {
    DAT_00044240 = 0;
    if (param_1 != (char *)0x0) {
      if (DAT_000d53e4 == (char *)0x0) {
        sVar5 = strlen(param_1);
        pcVar8 = malloc(sVar5 + 1);
        if (pcVar8 == (char *)0x0) {
          DAT_000d53e4 = pcVar8;
          return 5;
        }
        DAT_000d53e4 = pcVar8;
        strcpy(pcVar8,param_1);
        DAT_000d53e8 = 1;
      }
LAB_000135c0:
      iVar10 = FUN_000131d0(auStack_34,pcVar8);
      pcVar8 = DAT_000d53e4;
      if (iVar10 == 0) {
        return 0;
      }
      sVar5 = strlen(DAT_000d53e4);
      pvVar6 = malloc(sVar5 + 1);
      if (pvVar6 != (void *)0x0) {
        uVar7 = FUN_0001ba30(pvVar6,pcVar8);
        iVar10 = FUN_000131d0(auStack_34,uVar7);
        free(pvVar6);
        if (iVar10 == 0) {
          return 0;
        }
      }
      if (DAT_000d53e8 != 0) {
        return 1;
      }
      goto LAB_00013634;
    }
    if (DAT_000d53e4 != (char *)0x0) {
      free(DAT_000d53e4);
    }
  }
  DAT_000d53e4 = malloc(0x51);
  if (DAT_000d53e4 == (char *)0x0) {
    return 5;
  }
LAB_00013634:
  uVar7 = DAT_000137ec;
  local_38 = 0;
  do {
    iVar10 = (*DAT_000d54b8)(&DAT_000441a0,&local_38,DAT_000d53e4,0x51,
                             *(undefined4 *)((int)&Elf32_Phdr_ARRAY_00010034[6].p_offset + iVar1),
                             uVar7);
    if (iVar10 == 5) {
      free(DAT_000d53e4);
      DAT_000d53e4 = (char *)0x0;
      return 5;
    }
    if (iVar10 != 0) {
      *DAT_000d53e4 = '\0';
      local_38 = 0;
    }
    iVar3 = FUN_000131d0(auStack_34,DAT_000d53e4);
    pcVar8 = DAT_000d53e4;
    if (iVar3 == 0) {
      return 0;
    }
    sVar5 = strlen(DAT_000d53e4);
    pvVar6 = malloc(sVar5 + 1);
    if (pvVar6 != (void *)0x0) {
      uVar4 = FUN_0001ba30(pvVar6,pcVar8);
      iVar3 = FUN_000131d0(auStack_34,uVar4);
      free(pvVar6);
      if (iVar3 == 0) {
        return 0;
      }
    }
    if (iVar10 == -2) {
      DAT_000d53e8 = 1;
    }
  } while (0 < local_38);
  return 1;
}



/* ===== FUN_000137f0 @ 000137f0 size=1144 ===== */

undefined4 FUN_000137f0(uint *param_1,int *param_2,char *param_3,char *param_4)

{
  ushort uVar1;
  byte *pbVar2;
  size_t sVar3;
  byte *__dest;
  undefined4 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  int iVar14;
  byte *__dest_00;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  pbVar2 = (byte *)getenv(param_3);
  if (pbVar2 != (byte *)0x0) {
    uVar10 = (uint)*pbVar2;
    uVar1 = *(ushort *)(__ctype_b + uVar10 * 2);
    while ((uVar1 & 0x20) != 0) {
      pbVar2 = pbVar2 + 1;
      uVar10 = (uint)*pbVar2;
      uVar1 = *(ushort *)(__ctype_b + uVar10 * 2);
    }
    if (uVar10 != 0) goto LAB_00013850;
  }
  pbVar2 = (byte *)getenv(param_4);
  if (pbVar2 == (byte *)0x0) {
    return 0;
  }
  uVar10 = (uint)*pbVar2;
  uVar1 = *(ushort *)(__ctype_b + uVar10 * 2);
  while ((uVar1 & 0x20) != 0) {
    pbVar2 = pbVar2 + 1;
    uVar10 = (uint)*pbVar2;
    uVar1 = *(ushort *)(__ctype_b + uVar10 * 2);
  }
  if (uVar10 == 0) {
    return 0;
  }
LAB_00013850:
  sVar3 = strlen((char *)pbVar2);
  __dest = malloc(sVar3 + 1);
  if (__dest != (byte *)0x0) {
    memcpy(__dest,pbVar2,sVar3 + 1);
    uVar10 = (uint)*__dest;
    iVar14 = 0;
    pbVar2 = __dest;
    while (iVar14 = iVar14 + 1, uVar10 != 0x22) {
      if (uVar10 == 0) goto LAB_000138dc;
      uVar1 = *(ushort *)(__ctype_b + uVar10 * 2);
      while ((uVar1 & 0x20) == 0) {
        iVar6 = FUN_0001bb94(pbVar2);
        pbVar2 = pbVar2 + iVar6;
        if (*pbVar2 == 0) goto LAB_000138dc;
        uVar1 = *(ushort *)(__ctype_b + (uint)*pbVar2 * 2);
      }
      do {
        iVar6 = FUN_0001bb94(pbVar2);
        pbVar2 = pbVar2 + iVar6;
        uVar10 = (uint)*pbVar2;
        if (uVar10 == 0) goto LAB_000138dc;
        uVar1 = *(ushort *)(__ctype_b + uVar10 * 2);
joined_r0x00013c50:
      } while ((uVar1 & 0x20) != 0);
    }
    iVar6 = FUN_0001bb94(pbVar2);
    bVar9 = pbVar2[iVar6];
    pbVar2 = pbVar2 + iVar6;
    if (bVar9 != 0x22 && bVar9 != 0) {
      do {
        if ((bVar9 == 0x5c) && (pbVar2[1] != 0)) {
          pbVar2 = pbVar2 + 1;
        }
        iVar6 = FUN_0001bb94(pbVar2);
        pbVar2 = pbVar2 + iVar6;
        bVar9 = *pbVar2;
      } while (bVar9 != 0 && bVar9 != 0x22);
    }
    if (bVar9 != 0) {
      uVar10 = (uint)pbVar2[1];
      pbVar2 = pbVar2 + 1;
      if (uVar10 != 0) {
        uVar1 = *(ushort *)(__ctype_b + uVar10 * 2);
        goto joined_r0x00013c50;
      }
    }
LAB_000138dc:
    puVar4 = malloc((iVar14 + *param_1 + 1) * 4);
    if (puVar4 != (undefined4 *)0x0) {
      uVar10 = (uint)*__dest;
      puVar8 = (undefined4 *)*param_2;
      *param_2 = (int)(puVar8 + 1);
      *puVar4 = *puVar8;
      puVar13 = (undefined8 *)(puVar4 + 1);
      do {
        puVar5 = puVar13;
        puVar13 = (undefined8 *)((int)puVar5 + 4);
        if (uVar10 == 0x22) {
          __dest_00 = __dest + 1;
          *(byte **)puVar5 = __dest_00;
          bVar9 = __dest[1];
          pbVar2 = __dest_00;
          if (bVar9 != 0x22 && bVar9 != 0) {
            do {
              if ((bVar9 == 0x5c) && (pbVar2[1] != 0)) {
                pbVar2 = pbVar2 + 1;
              }
              iVar6 = FUN_0001bb94(pbVar2);
              pbVar2 = pbVar2 + iVar6;
              bVar9 = *pbVar2;
            } while (bVar9 != 0 && bVar9 != 0x22);
          }
          pbVar12 = pbVar2;
          if (bVar9 != 0) {
            pbVar12 = pbVar2 + 1;
            *pbVar2 = 0;
          }
          while( true ) {
            __dest_00 = (byte *)FUN_0001bbb8(__dest_00,0x5c);
            if (__dest_00 == (byte *)0x0) break;
            strcpy((char *)__dest_00,(char *)(__dest_00 + 1));
            if (*__dest_00 != 0) {
              __dest_00 = __dest_00 + 1;
            }
          }
        }
        else {
          *(byte **)puVar5 = __dest;
          if (*__dest == 0) goto LAB_00013978;
          uVar1 = *(ushort *)(__ctype_b + (uint)*__dest * 2);
          while ((uVar1 & 0x20) == 0) {
            iVar6 = FUN_0001bb94(__dest);
            __dest = __dest + iVar6;
            if (*__dest == 0) goto LAB_00013978;
            uVar1 = *(ushort *)(__ctype_b + (uint)*__dest * 2);
          }
          pbVar12 = __dest + 1;
          *__dest = 0;
        }
        uVar10 = (uint)*pbVar12;
        if (uVar10 == 0) goto LAB_00013978;
        uVar1 = *(ushort *)(__ctype_b + uVar10 * 2);
        __dest = pbVar12;
        while ((uVar1 & 0x20) != 0) {
          iVar6 = FUN_0001bb94(__dest);
          __dest = __dest + iVar6;
          uVar10 = (uint)*__dest;
          if (uVar10 == 0) goto LAB_00013978;
          uVar1 = *(ushort *)(__ctype_b + uVar10 * 2);
        }
      } while( true );
    }
    free(__dest);
  }
  return 4;
LAB_00013978:
  uVar10 = *param_1;
  uVar11 = uVar10 - 1;
  *param_1 = uVar11;
  if (uVar11 != 0) {
    puVar16 = (undefined8 *)*param_2;
    if (uVar10 - 2 < 8 || puVar13 < puVar16 + 2 && puVar16 < (undefined8 *)((int)puVar5 + 0x14)) {
      do {
        puVar8 = (undefined4 *)((int)puVar16 + 4);
        *(undefined4 *)((int)puVar5 + 4) = *(undefined4 *)puVar16;
        if (uVar11 == 1) break;
        puVar16 = puVar16 + 1;
        uVar11 = uVar11 - 2;
        puVar5 = puVar5 + 1;
        *(undefined4 *)puVar5 = *puVar8;
      } while (uVar11 != 0);
    }
    else {
      uVar7 = 0;
      puVar5 = puVar16;
      puVar15 = puVar13;
      do {
        uVar7 = uVar7 + 1;
        uVar17 = *puVar5;
        uVar18 = puVar5[1];
        puVar5 = puVar5 + 2;
        *puVar15 = uVar17;
        puVar15[1] = uVar18;
        puVar15 = puVar15 + 2;
      } while (uVar7 != uVar11 >> 2);
      uVar7 = uVar11 & 0xfffffffc;
      iVar6 = uVar7 * 4;
      if (((uVar7 != uVar11) &&
          (*(undefined4 *)((int)puVar13 + uVar7 * 4) = *(undefined4 *)((int)puVar16 + uVar7 * 4),
          uVar11 - uVar7 != 1)) &&
         (*(undefined4 *)((int)puVar13 + iVar6 + 4) = *(undefined4 *)((int)puVar16 + iVar6 + 4),
         uVar11 - uVar7 != 2)) {
        *(undefined4 *)((int)puVar13 + iVar6 + 8) = *(undefined4 *)((int)puVar16 + iVar6 + 8);
      }
    }
    puVar13 = (undefined8 *)((int)puVar13 + (uVar10 + 0x3fffffff) * 4);
  }
  *(undefined4 *)puVar13 = 0;
  *param_2 = (int)puVar4;
  *param_1 = uVar10 + iVar14;
  return 0;
}



/* ===== FUN_00013c68 @ 00013c68 size=432 ===== */

undefined4 FUN_00013c68(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  iVar1 = DAT_00013e18;
  iVar5 = *(int *)(DAT_00013e18 + 0xe0);
  iVar6 = iVar5 + -1;
  *(int *)(DAT_00013e18 + 0xe0) = iVar6;
  if (iVar5 < 1) {
    uVar7 = FUN_00019950();
    iVar6 = *(int *)(iVar1 + 0xe0);
  }
  else {
    pbVar3 = *(byte **)(iVar1 + 0xdc);
    *(byte **)(iVar1 + 0xdc) = pbVar3 + 1;
    uVar7 = (uint)*pbVar3;
  }
  iVar5 = uVar7 + 1;
  uVar7 = 0;
  while( true ) {
    *(int *)(iVar1 + 0xe0) = iVar6 + -1;
    if (iVar6 < 1) {
      uVar2 = FUN_00019950();
    }
    else {
      pbVar3 = *(byte **)(iVar1 + 0xdc);
      *(byte **)(iVar1 + 0xdc) = pbVar3 + 1;
      uVar2 = (uint)*pbVar3;
    }
    uVar4 = (uVar2 & 0xff) >> 4;
    iVar6 = (uVar2 & 0xf) + 1;
    uVar2 = uVar4 + 1 + uVar7;
    if (param_2 < uVar2) {
      return 4;
    }
    *(int *)(param_1 + uVar7 * 4) = iVar6;
    if (uVar4 != 0) {
      *(int *)(param_1 + (uVar7 + 1) * 4) = iVar6;
      if (uVar4 != 1) {
        *(int *)(param_1 + (uVar7 + 2) * 4) = iVar6;
        if (uVar4 != 2) {
          *(int *)(param_1 + (uVar7 + 3) * 4) = iVar6;
          if (uVar4 != 3) {
            *(int *)(param_1 + (uVar7 + 4) * 4) = iVar6;
            if (uVar4 != 4) {
              *(int *)(param_1 + (uVar7 + 5) * 4) = iVar6;
              if (uVar4 != 5) {
                *(int *)(param_1 + (uVar7 + 6) * 4) = iVar6;
                if (uVar4 != 6) {
                  *(int *)(param_1 + (uVar7 + 7) * 4) = iVar6;
                  if (uVar4 != 7) {
                    *(int *)(param_1 + (uVar7 + 8) * 4) = iVar6;
                    if (uVar4 != 8) {
                      *(int *)(param_1 + (uVar7 + 9) * 4) = iVar6;
                      if (uVar4 != 9) {
                        *(int *)(param_1 + (uVar7 + 10) * 4) = iVar6;
                        if (uVar4 != 10) {
                          *(int *)(param_1 + (uVar7 + 0xb) * 4) = iVar6;
                          if (uVar4 != 0xb) {
                            *(int *)(param_1 + (uVar7 + 0xc) * 4) = iVar6;
                            if (uVar4 != 0xc) {
                              *(int *)(param_1 + (uVar7 + 0xd) * 4) = iVar6;
                              if (uVar4 != 0xd) {
                                *(int *)(param_1 + (uVar7 + 0xe) * 4) = iVar6;
                                if (uVar4 != 0xe) {
                                  *(int *)(param_1 + (uVar7 + 0xe) * 4 + 4) = iVar6;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    iVar5 = iVar5 + -1;
    if (iVar5 == 0) break;
    iVar6 = *(int *)(iVar1 + 0xe0);
    uVar7 = uVar2;
  }
  if (uVar2 != param_2) {
    return 4;
  }
  return 0;
}



/* ===== FUN_00013e1c @ 00013e1c size=5288 ===== */

/* WARNING: Restarted to delay deadcode elimination for space: ram */

uint FUN_00013e1c(void)

{
  int *piVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  byte *pbVar15;
  undefined8 *puVar16;
  int iVar17;
  undefined *puVar18;
  uint uVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  uint __n;
  uint uVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  bool bVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  uint local_484;
  uint local_478;
  uint local_470;
  uint local_440;
  uint local_43c;
  int local_438;
  uint local_434;
  uint local_430;
  uint local_42c;
  undefined1 auStack_428 [1028];
  undefined *puVar19;
  
  local_430 = 7;
  if (DAT_0004424c + DAT_000d4280 < 0x30d41) {
    local_42c = 7;
  }
  else {
    local_42c = 8;
  }
  if ((DAT_000d42c6 & 4) == 0) {
    local_440 = DAT_000d42c6 & 4;
    uVar6 = FUN_00013c68(auStack_428,0x40);
    iVar26 = DAT_00014e24;
    if (uVar6 != 0) {
      return uVar6;
    }
    uVar6 = FUN_0001dfec(auStack_428,0x40,0,DAT_00014e24 + 0x40,DAT_00014e24,&local_43c,&local_430);
    if (uVar6 != 0) {
      if (uVar6 != 1) {
        return uVar6;
      }
      local_470 = 1;
      goto LAB_00014214;
    }
LAB_00013ef0:
    uVar8 = FUN_00013c68(auStack_428,0x40);
    if (uVar8 == 0) {
      bVar30 = (DAT_000d42c6 & 2) == 0;
      if (bVar30) {
        uVar8 = FUN_0001dfec(auStack_428,0x40,0,DAT_00014e2c,iVar26,&local_438,&local_42c);
        local_484 = 6;
      }
      else {
        uVar8 = FUN_0001dfec(auStack_428,0x40,0,DAT_00014e28,iVar26,&local_438,&local_42c);
        local_484 = 7;
      }
      uVar5 = local_42c;
      uVar4 = local_430;
      uVar29 = local_434;
      iVar26 = local_438;
      uVar3 = local_43c;
      uVar6 = local_440;
      local_470 = (uint)bVar30;
      if (uVar8 == 0) {
        uVar8 = *(uint *)(&DAT_0002c580 + local_484 * 4);
        uVar13 = *(uint *)(&DAT_0002c580 + local_430 * 4);
        uVar14 = *(uint *)(&DAT_0002c580 + local_42c * 4);
        local_478 = DAT_000d42b8;
        if (local_440 == 0) {
          uVar6 = 0;
          uVar29 = 0;
          if (DAT_000d42b8 != 0) {
            local_470 = 1;
            uVar6 = 0;
            uVar20 = 0;
            uVar29 = 0;
            do {
              if (uVar6 == 0) {
                if (DAT_000d4280 < 1) {
                  DAT_000d4280 = DAT_000d4280 + -1;
                  uVar6 = FUN_00019950();
                }
                else {
                  uVar6 = (uint)*DAT_000d427c;
                  DAT_000d427c = DAT_000d427c + 1;
                  DAT_000d4280 = DAT_000d4280 + -1;
                }
                uVar25 = (uVar6 | uVar20) >> 1;
                if (((uVar6 | uVar20) & 1) == 0) {
                  uVar24 = 7;
                  goto LAB_00014464;
                }
                uVar6 = 0xf;
                uVar24 = 7;
LAB_000145b0:
                if (DAT_000d4280 < 1) {
                  DAT_000d4280 = DAT_000d4280 + -1;
                  uVar20 = FUN_00019950();
                }
                else {
                  uVar20 = (uint)*DAT_000d427c;
                  DAT_000d427c = DAT_000d427c + 1;
                  DAT_000d4280 = DAT_000d4280 + -1;
                }
                uVar25 = uVar25 | uVar20 << (uVar24 & 0xff);
                uVar24 = uVar6;
LAB_000145d8:
                local_478 = local_478 - 1;
                uVar6 = uVar29 + 1;
                (&DAT_000c4270)[uVar29] = (char)uVar25;
                uVar29 = uVar6;
                if (uVar6 == 0x10000) {
                  local_470 = FUN_00019bdc(DAT_00014e30,0x10000,0);
                  if (local_470 != 0) goto LAB_00014130;
                  uVar29 = 0;
                  local_470 = 0;
                }
                uVar20 = uVar25 >> 8;
                uVar6 = uVar24 - 8;
              }
              else {
                uVar25 = uVar20 >> 1;
                uVar24 = uVar6 - 1;
                if ((uVar20 & 1) != 0) {
                  if (uVar24 < 8) {
                    uVar6 = uVar6 + 7;
                    goto LAB_000145b0;
                  }
                  goto LAB_000145d8;
                }
                if (uVar24 < local_484) {
                  if (DAT_000d4280 < 1) {
                    DAT_000d4280 = DAT_000d4280 + -1;
                    uVar20 = FUN_00019950();
                  }
                  else {
                    uVar20 = (uint)*DAT_000d427c;
                    DAT_000d427c = DAT_000d427c + 1;
                    DAT_000d4280 = DAT_000d4280 + -1;
                  }
                  uVar25 = uVar25 | uVar20 << (uVar24 & 0xff);
                  uVar24 = uVar6 + 7;
                }
LAB_00014464:
                uVar20 = uVar25 >> local_484;
                for (uVar6 = uVar24 - local_484; uVar6 < uVar5; uVar6 = uVar6 + 8) {
                  while (iVar21 = DAT_000d4280 + -1, 0 < DAT_000d4280) {
                    pbVar15 = DAT_000d427c + 1;
                    uVar20 = uVar20 | (uint)*DAT_000d427c << (uVar6 & 0xff);
                    uVar6 = uVar6 + 8;
                    DAT_000d427c = pbVar15;
                    DAT_000d4280 = iVar21;
                    if (uVar5 <= uVar6) goto LAB_000144b4;
                  }
                  DAT_000d4280 = iVar21;
                  iVar21 = FUN_00019950();
                  uVar20 = uVar20 | iVar21 << (uVar6 & 0xff);
                }
LAB_000144b4:
                uVar24 = uVar14 & ~uVar20;
                uVar28 = (uint)*(byte *)(iVar26 + uVar24 * 8);
                iVar21 = iVar26 + uVar24 * 8;
                uVar20 = uVar20 >> (uint)*(byte *)(iVar21 + 1);
                uVar6 = uVar6 - *(byte *)(iVar21 + 1);
                if (0x20 < uVar28) {
                  if (uVar28 != 99) {
                    do {
                      uVar24 = uVar28 & 0x1f;
                      for (; uVar6 < uVar24; uVar6 = uVar6 + 8) {
                        while (iVar23 = DAT_000d4280 + -1, 0 < DAT_000d4280) {
                          pbVar15 = DAT_000d427c + 1;
                          uVar20 = uVar20 | (uint)*DAT_000d427c << (uVar6 & 0xff);
                          uVar6 = uVar6 + 8;
                          DAT_000d427c = pbVar15;
                          DAT_000d4280 = iVar23;
                          if (uVar24 <= uVar6) goto LAB_00014528;
                        }
                        DAT_000d4280 = iVar23;
                        iVar23 = FUN_00019950();
                        uVar20 = uVar20 | iVar23 << (uVar6 & 0xff);
                      }
LAB_00014528:
                      uVar28 = (uint)*(byte *)(*(int *)(iVar21 + 4) +
                                              (*(uint *)(&DAT_0002c580 + uVar24 * 4) & ~uVar20) * 8)
                      ;
                      iVar21 = *(int *)(iVar21 + 4) +
                               (*(uint *)(&DAT_0002c580 + uVar24 * 4) & ~uVar20) * 8;
                      uVar20 = uVar20 >> (uint)*(byte *)(iVar21 + 1);
                      uVar6 = uVar6 - *(byte *)(iVar21 + 1);
                      if (uVar28 < 0x21) goto LAB_00014808;
                      if (uVar28 == 99) break;
                    } while( true );
                  }
LAB_00014558:
                  local_470 = 1;
                  goto LAB_00014130;
                }
LAB_00014808:
                uVar2 = *(ushort *)(iVar21 + 4);
                for (; uVar6 < uVar4; uVar6 = uVar6 + 8) {
                  while (iVar21 = DAT_000d4280 + -1, 0 < DAT_000d4280) {
                    pbVar15 = DAT_000d427c + 1;
                    uVar20 = uVar20 | (uint)*DAT_000d427c << (uVar6 & 0xff);
                    uVar6 = uVar6 + 8;
                    DAT_000d427c = pbVar15;
                    DAT_000d4280 = iVar21;
                    if (uVar4 <= uVar6) goto LAB_00014850;
                  }
                  DAT_000d4280 = iVar21;
                  iVar21 = FUN_00019950();
                  uVar20 = uVar20 | iVar21 << (uVar6 & 0xff);
                }
LAB_00014850:
                uVar28 = uVar13 & ~uVar20;
                uVar24 = (uint)*(byte *)(uVar3 + uVar28 * 8);
                iVar21 = uVar3 + uVar28 * 8;
                uVar20 = uVar20 >> (uint)*(byte *)(iVar21 + 1);
                uVar6 = uVar6 - *(byte *)(iVar21 + 1);
                if (0x20 < uVar24) {
                  if (uVar24 != 99) {
                    do {
                      uVar24 = uVar24 & 0x1f;
                      for (; uVar6 < uVar24; uVar6 = uVar6 + 8) {
                        while (iVar23 = DAT_000d4280 + -1, 0 < DAT_000d4280) {
                          pbVar15 = DAT_000d427c + 1;
                          uVar20 = uVar20 | (uint)*DAT_000d427c << (uVar6 & 0xff);
                          uVar6 = uVar6 + 8;
                          DAT_000d427c = pbVar15;
                          DAT_000d4280 = iVar23;
                          if (uVar24 <= uVar6) goto LAB_000148d0;
                        }
                        DAT_000d4280 = iVar23;
                        iVar23 = FUN_00019950();
                        uVar20 = uVar20 | iVar23 << (uVar6 & 0xff);
                      }
LAB_000148d0:
                      piVar1 = (int *)(iVar21 + 4);
                      iVar21 = *piVar1 + (*(uint *)(&DAT_0002c580 + uVar24 * 4) & ~uVar20) * 8;
                      uVar24 = (uint)*(byte *)(*piVar1 +
                                              (*(uint *)(&DAT_0002c580 + uVar24 * 4) & ~uVar20) * 8)
                      ;
                      uVar20 = uVar20 >> (uint)*(byte *)(iVar21 + 1);
                      uVar6 = uVar6 - *(byte *)(iVar21 + 1);
                      if (uVar24 < 0x21) goto LAB_00014d54;
                      if (uVar24 == 99) break;
                    } while( true );
                  }
                  goto LAB_00014558;
                }
LAB_00014d54:
                uVar28 = (uint)*(ushort *)(iVar21 + 4);
                if (uVar24 != 0) {
                  if (uVar6 < 8) {
                    if (DAT_000d4280 < 1) {
                      DAT_000d4280 = DAT_000d4280 + -1;
                      uVar24 = FUN_00019950();
                    }
                    else {
                      uVar24 = (uint)*DAT_000d427c;
                      DAT_000d427c = DAT_000d427c + 1;
                      DAT_000d4280 = DAT_000d4280 + -1;
                    }
                    uVar20 = uVar20 | uVar24 << (uVar6 & 0xff);
                  }
                  else {
                    uVar6 = uVar6 - 8;
                  }
                  uVar28 = uVar28 + (uVar20 & 0xff);
                  uVar20 = uVar20 >> 8;
                }
                if (uVar28 < local_478) {
                  local_478 = local_478 - uVar28;
                }
                else {
                  local_478 = 0;
                }
                uVar25 = (uVar29 - (uVar25 & uVar8)) - (uint)uVar2;
                do {
                  uVar25 = uVar25 & 0xffff;
                  uVar24 = uVar25;
                  if (uVar25 <= uVar29) {
                    uVar24 = uVar29;
                  }
                  uVar7 = 0x10000 - uVar24;
                  if (uVar28 < 0x10000 - uVar24) {
                    uVar7 = uVar28;
                  }
                  if (uVar25 < uVar29) {
                    uVar24 = 0;
                  }
                  else {
                    uVar24 = local_470 & 1;
                  }
                  uVar28 = uVar28 - uVar7;
                  if (uVar24 == 0) {
                    if (uVar29 - uVar25 < uVar7) {
                      if (uVar7 - 1 < 0xf || uVar29 < uVar25 + 0x10 && uVar25 < uVar29 + 0x10) {
                        iVar21 = DAT_00014e30 + uVar25;
                        puVar11 = &DAT_000c4270 + uVar29;
                        puVar19 = &DAT_000c4270 + uVar25;
                        do {
                          puVar18 = puVar19 + 1;
                          *puVar11 = *puVar19;
                          puVar11 = puVar11 + 1;
                          puVar19 = puVar18;
                        } while ((undefined *)(iVar21 + uVar7) != puVar18);
                      }
                      else {
                        puVar16 = (undefined8 *)(&DAT_000c4270 + uVar29);
                        puVar9 = (undefined8 *)((uVar7 & 0xfffffff0) + (int)puVar16);
                        puVar10 = (undefined8 *)(&DAT_000c4270 + uVar25);
                        do {
                          uVar31 = *puVar10;
                          uVar32 = puVar10[1];
                          puVar10 = puVar10 + 2;
                          *puVar16 = uVar31;
                          puVar16[1] = uVar32;
                          puVar16 = puVar16 + 2;
                        } while (puVar9 != puVar16);
                        uVar24 = uVar7 & 0xfffffff0;
                        iVar21 = uVar7 - uVar24;
                        iVar23 = uVar25 + uVar24;
                        iVar17 = uVar29 + uVar24;
                        if ((((((uVar7 != uVar24) &&
                               ((&DAT_000c4270)[iVar17] = (&DAT_000c4270)[iVar23], iVar21 != 1)) &&
                              ((&DAT_000c4271)[iVar17] = (&DAT_000c4271)[iVar23], iVar21 != 2)) &&
                             ((((&DAT_000c4272)[iVar17] = (&DAT_000c4272)[iVar23], iVar21 != 3 &&
                               ((&DAT_000c4273)[iVar17] = (&DAT_000c4273)[iVar23], iVar21 != 4)) &&
                              ((*(undefined1 *)((int)&DAT_000c4274 + iVar17) =
                                     *(undefined1 *)((int)&DAT_000c4274 + iVar23), iVar21 != 5 &&
                               ((*(undefined1 *)((int)&DAT_000c4274 + iVar17 + 1) =
                                      *(undefined1 *)((int)&DAT_000c4274 + iVar23 + 1), iVar21 != 6
                                && (*(undefined1 *)((int)&DAT_000c4274 + iVar17 + 2) =
                                         *(undefined1 *)((int)&DAT_000c4274 + iVar23 + 2),
                                   iVar21 != 7)))))))) &&
                            ((*(undefined1 *)((int)&DAT_000c4274 + iVar17 + 3) =
                                   *(undefined1 *)((int)&DAT_000c4274 + iVar23 + 3), iVar21 != 8 &&
                             ((((&DAT_000c4278)[iVar17] = (&DAT_000c4278)[iVar23], iVar21 != 9 &&
                               ((&DAT_000c4279)[iVar17] = (&DAT_000c4279)[iVar23], iVar21 != 10)) &&
                              ((&DAT_000c427a)[iVar17] = (&DAT_000c427a)[iVar23], iVar21 != 0xb)))))
                            ) && ((((&DAT_000c427b)[iVar17] = (&DAT_000c427b)[iVar23], iVar21 != 0xc
                                   && (*(undefined1 *)((int)&DAT_000c427c + iVar17) =
                                            *(undefined1 *)((int)&DAT_000c427c + iVar23),
                                      iVar21 != 0xd)) &&
                                  (*(undefined1 *)((int)&DAT_000c427c + iVar17 + 1) =
                                        *(undefined1 *)((int)&DAT_000c427c + iVar23 + 1),
                                  iVar21 != 0xe)))) {
                          *(undefined1 *)((int)&DAT_000c427c + iVar17 + 2) =
                               *(undefined1 *)((int)&DAT_000c427c + iVar23 + 2);
                        }
                      }
                    }
                    else {
                      memcpy((void *)(DAT_00014e30 + uVar29),(void *)(DAT_00014e30 + uVar25),uVar7);
                    }
                  }
                  else {
                    memset((void *)(DAT_00014e30 + uVar29),0,uVar7);
                  }
                  uVar29 = uVar29 + uVar7;
                  uVar25 = uVar7 + uVar25;
                  if (uVar29 == 0x10000) {
                    local_470 = FUN_00019bdc(DAT_00014e30,0x10000,0);
                    uVar29 = 0;
                    if (local_470 != 0) goto LAB_00014130;
                  }
                } while (uVar28 != 0);
              }
            } while (local_478 != 0);
          }
          local_470 = FUN_00019bdc(DAT_00014e30,uVar29,0);
          if (local_470 == 0) {
            if (DAT_0004424c + DAT_000d4280 + (uVar6 >> 3) != 0) {
              local_470 = 5;
              DAT_00044250 = (DAT_000d42b4 - (DAT_0004424c + DAT_000d4280)) - (uVar6 >> 3);
            }
          }
        }
        else {
          uVar20 = *(uint *)(&DAT_0002c580 + local_434 * 4);
          if (DAT_000d42b8 == 0) {
            uVar24 = 0;
            uVar28 = 0;
          }
          else {
            bVar30 = true;
            uVar24 = 0;
            uVar25 = 0;
            uVar28 = 0;
            do {
              if (uVar24 == 0) {
                if (DAT_000d4280 < 1) {
                  DAT_000d4280 = DAT_000d4280 + -1;
                  uVar7 = FUN_00019950();
                }
                else {
                  uVar7 = (uint)*DAT_000d427c;
                  DAT_000d427c = DAT_000d427c + 1;
                  DAT_000d4280 = DAT_000d4280 + -1;
                }
                uVar27 = (uVar7 | uVar25) >> 1;
                uVar24 = local_470;
                if (((uVar7 | uVar25) & 1) != 0) {
                  uVar7 = 7;
                  goto LAB_0001402c;
                }
LAB_000142dc:
                uVar25 = uVar27 >> local_484;
                for (; uVar24 < uVar5; uVar24 = uVar24 + 8) {
                  while (iVar21 = DAT_000d4280 + -1, 0 < DAT_000d4280) {
                    pbVar15 = DAT_000d427c + 1;
                    uVar25 = uVar25 | (uint)*DAT_000d427c << (uVar24 & 0xff);
                    uVar24 = uVar24 + 8;
                    DAT_000d427c = pbVar15;
                    DAT_000d4280 = iVar21;
                    if (uVar5 <= uVar24) goto LAB_00014328;
                  }
                  DAT_000d4280 = iVar21;
                  iVar21 = FUN_00019950();
                  uVar25 = uVar25 | iVar21 << (uVar24 & 0xff);
                }
LAB_00014328:
                uVar7 = uVar14 & ~uVar25;
                uVar22 = (uint)*(byte *)(iVar26 + uVar7 * 8);
                iVar21 = iVar26 + uVar7 * 8;
                uVar25 = uVar25 >> (uint)*(byte *)(iVar21 + 1);
                uVar24 = uVar24 - *(byte *)(iVar21 + 1);
                if (0x20 < uVar22) {
                  if (uVar22 != 99) {
                    do {
                      uVar7 = uVar22 & 0x1f;
                      for (; uVar24 < uVar7; uVar24 = uVar24 + 8) {
                        while (iVar23 = DAT_000d4280 + -1, 0 < DAT_000d4280) {
                          pbVar15 = DAT_000d427c + 1;
                          uVar25 = uVar25 | (uint)*DAT_000d427c << (uVar24 & 0xff);
                          uVar24 = uVar24 + 8;
                          DAT_000d427c = pbVar15;
                          DAT_000d4280 = iVar23;
                          if (uVar7 <= uVar24) goto LAB_0001439c;
                        }
                        DAT_000d4280 = iVar23;
                        iVar23 = FUN_00019950();
                        uVar25 = uVar25 | iVar23 << (uVar24 & 0xff);
                      }
LAB_0001439c:
                      uVar22 = (uint)*(byte *)(*(int *)(iVar21 + 4) +
                                              (*(uint *)(&DAT_0002c580 + uVar7 * 4) & ~uVar25) * 8);
                      iVar21 = *(int *)(iVar21 + 4) +
                               (*(uint *)(&DAT_0002c580 + uVar7 * 4) & ~uVar25) * 8;
                      uVar25 = uVar25 >> (uint)*(byte *)(iVar21 + 1);
                      uVar24 = uVar24 - *(byte *)(iVar21 + 1);
                      if (uVar22 < 0x21) goto LAB_0001465c;
                      if (uVar22 == 99) break;
                    } while( true );
                  }
                  goto LAB_00014124;
                }
LAB_0001465c:
                uVar2 = *(ushort *)(iVar21 + 4);
                for (; uVar24 < uVar4; uVar24 = uVar24 + 8) {
                  while (iVar21 = DAT_000d4280 + -1, 0 < DAT_000d4280) {
                    pbVar15 = DAT_000d427c + 1;
                    uVar25 = uVar25 | (uint)*DAT_000d427c << (uVar24 & 0xff);
                    uVar24 = uVar24 + 8;
                    DAT_000d427c = pbVar15;
                    DAT_000d4280 = iVar21;
                    if (uVar4 <= uVar24) goto LAB_000146a4;
                  }
                  DAT_000d4280 = iVar21;
                  iVar21 = FUN_00019950();
                  uVar25 = uVar25 | iVar21 << (uVar24 & 0xff);
                }
LAB_000146a4:
                uVar22 = uVar13 & ~uVar25;
                uVar7 = (uint)*(byte *)(uVar3 + uVar22 * 8);
                iVar21 = uVar3 + uVar22 * 8;
                uVar25 = uVar25 >> (uint)*(byte *)(iVar21 + 1);
                uVar24 = uVar24 - *(byte *)(iVar21 + 1);
                if (0x20 < uVar7) {
                  if (uVar7 != 99) {
                    do {
                      uVar7 = uVar7 & 0x1f;
                      for (; uVar24 < uVar7; uVar24 = uVar24 + 8) {
                        while (iVar23 = DAT_000d4280 + -1, 0 < DAT_000d4280) {
                          pbVar15 = DAT_000d427c + 1;
                          uVar25 = uVar25 | (uint)*DAT_000d427c << (uVar24 & 0xff);
                          uVar24 = uVar24 + 8;
                          DAT_000d427c = pbVar15;
                          DAT_000d4280 = iVar23;
                          if (uVar7 <= uVar24) goto LAB_00014724;
                        }
                        DAT_000d4280 = iVar23;
                        iVar23 = FUN_00019950();
                        uVar25 = uVar25 | iVar23 << (uVar24 & 0xff);
                      }
LAB_00014724:
                      piVar1 = (int *)(iVar21 + 4);
                      iVar21 = *piVar1 + (*(uint *)(&DAT_0002c580 + uVar7 * 4) & ~uVar25) * 8;
                      uVar7 = (uint)*(byte *)(*piVar1 +
                                             (*(uint *)(&DAT_0002c580 + uVar7 * 4) & ~uVar25) * 8);
                      uVar25 = uVar25 >> (uint)*(byte *)(iVar21 + 1);
                      uVar24 = uVar24 - *(byte *)(iVar21 + 1);
                      if (uVar7 < 0x21) goto LAB_00014944;
                      if (uVar7 == 99) break;
                    } while( true );
                  }
                  goto LAB_00014124;
                }
LAB_00014944:
                uVar22 = (uint)*(ushort *)(iVar21 + 4);
                if (uVar7 != 0) {
                  if (uVar24 < 8) {
                    if (DAT_000d4280 < 1) {
                      DAT_000d4280 = DAT_000d4280 + -1;
                      uVar7 = FUN_00019950();
                    }
                    else {
                      uVar7 = (uint)*DAT_000d427c;
                      DAT_000d427c = DAT_000d427c + 1;
                      DAT_000d4280 = DAT_000d4280 + -1;
                    }
                    uVar25 = uVar25 | uVar7 << (uVar24 & 0xff);
                  }
                  else {
                    uVar24 = uVar24 - 8;
                  }
                  uVar22 = uVar22 + (uVar25 & 0xff);
                  uVar25 = uVar25 >> 8;
                }
                if (uVar22 < local_478) {
                  local_478 = local_478 - uVar22;
                }
                else {
                  local_478 = 0;
                }
                uVar7 = (uVar28 - (uVar27 & uVar8)) - (uint)uVar2;
                do {
                  uVar7 = uVar7 & 0xffff;
                  uVar27 = uVar7;
                  if (uVar7 <= uVar28) {
                    uVar27 = uVar28;
                  }
                  __n = 0x10000 - uVar27;
                  if (uVar22 < 0x10000 - uVar27) {
                    __n = uVar22;
                  }
                  bVar12 = bVar30;
                  if (uVar7 < uVar28) {
                    bVar12 = false;
                  }
                  uVar22 = uVar22 - __n;
                  if (bVar12) {
                    memset((void *)(DAT_00014e30 + uVar28),0,__n);
                  }
                  else if (uVar28 - uVar7 < __n) {
                    if (__n - 1 < 0xf || uVar7 < uVar28 + 0x10 && uVar28 < uVar7 + 0x10) {
                      iVar21 = DAT_00014e30 + uVar7;
                      puVar11 = &DAT_000c4270 + uVar28;
                      puVar19 = &DAT_000c4270 + uVar7;
                      do {
                        puVar18 = puVar19 + 1;
                        *puVar11 = *puVar19;
                        puVar11 = puVar11 + 1;
                        puVar19 = puVar18;
                      } while ((undefined *)(iVar21 + __n) != puVar18);
                    }
                    else {
                      puVar16 = (undefined8 *)(&DAT_000c4270 + uVar28);
                      puVar9 = (undefined8 *)((__n & 0xfffffff0) + (int)puVar16);
                      puVar10 = (undefined8 *)(&DAT_000c4270 + uVar7);
                      do {
                        uVar31 = *puVar10;
                        uVar32 = puVar10[1];
                        puVar10 = puVar10 + 2;
                        *puVar16 = uVar31;
                        puVar16[1] = uVar32;
                        puVar16 = puVar16 + 2;
                      } while (puVar9 != puVar16);
                      uVar27 = __n & 0xfffffff0;
                      iVar21 = __n - uVar27;
                      iVar23 = uVar7 + uVar27;
                      iVar17 = uVar28 + uVar27;
                      if (((((__n != uVar27) &&
                            ((&DAT_000c4270)[iVar17] = (&DAT_000c4270)[iVar23], iVar21 != 1)) &&
                           (((&DAT_000c4271)[iVar17] = (&DAT_000c4271)[iVar23], iVar21 != 2 &&
                            (((((&DAT_000c4272)[iVar17] = (&DAT_000c4272)[iVar23], iVar21 != 3 &&
                               ((&DAT_000c4273)[iVar17] = (&DAT_000c4273)[iVar23], iVar21 != 4)) &&
                              (*(undefined1 *)((int)&DAT_000c4274 + iVar17) =
                                    *(undefined1 *)((int)&DAT_000c4274 + iVar23), iVar21 != 5)) &&
                             ((*(undefined1 *)((int)&DAT_000c4274 + iVar17 + 1) =
                                    *(undefined1 *)((int)&DAT_000c4274 + iVar23 + 1), iVar21 != 6 &&
                              (*(undefined1 *)((int)&DAT_000c4274 + iVar17 + 2) =
                                    *(undefined1 *)((int)&DAT_000c4274 + iVar23 + 2), iVar21 != 7)))
                             ))))) &&
                          (*(undefined1 *)((int)&DAT_000c4274 + iVar17 + 3) =
                                *(undefined1 *)((int)&DAT_000c4274 + iVar23 + 3), iVar21 != 8)) &&
                         ((((&DAT_000c4278)[iVar17] = (&DAT_000c4278)[iVar23], iVar21 != 9 &&
                           ((&DAT_000c4279)[iVar17] = (&DAT_000c4279)[iVar23], iVar21 != 10)) &&
                          (((&DAT_000c427a)[iVar17] = (&DAT_000c427a)[iVar23], iVar21 != 0xb &&
                           ((((&DAT_000c427b)[iVar17] = (&DAT_000c427b)[iVar23], iVar21 != 0xc &&
                             (*(undefined1 *)((int)&DAT_000c427c + iVar17) =
                                   *(undefined1 *)((int)&DAT_000c427c + iVar23), iVar21 != 0xd)) &&
                            (*(undefined1 *)((int)&DAT_000c427c + iVar17 + 1) =
                                  *(undefined1 *)((int)&DAT_000c427c + iVar23 + 1), iVar21 != 0xe)))
                           ))))) {
                        *(undefined1 *)((int)&DAT_000c427c + iVar17 + 2) =
                             *(undefined1 *)((int)&DAT_000c427c + iVar23 + 2);
                      }
                    }
                  }
                  else {
                    memcpy((void *)(DAT_00014e30 + uVar28),(void *)(DAT_00014e30 + uVar7),__n);
                  }
                  uVar7 = uVar7 + __n;
                  uVar28 = uVar28 + __n;
                  if (uVar28 == 0x10000) {
                    uVar28 = FUN_00019bdc(DAT_00014e30,0x10000,0);
                    if (uVar28 != 0) goto LAB_00014128;
                    uVar28 = 0;
                    bVar30 = false;
                  }
                } while (uVar22 != 0);
              }
              else {
                uVar27 = uVar25 >> 1;
                uVar7 = uVar24 - 1;
                if ((uVar25 & 1) == 0) {
                  if (uVar7 < local_484) {
                    if (DAT_000d4280 < 1) {
                      DAT_000d4280 = DAT_000d4280 + -1;
                      uVar25 = FUN_00019950();
                    }
                    else {
                      uVar25 = (uint)*DAT_000d427c;
                      DAT_000d427c = DAT_000d427c + 1;
                      DAT_000d4280 = DAT_000d4280 + -1;
                    }
                    uVar27 = uVar27 | uVar25 << (uVar7 & 0xff);
                    uVar24 = (7 - local_484) + uVar24;
                  }
                  else {
                    uVar24 = uVar7 - local_484;
                  }
                  goto LAB_000142dc;
                }
LAB_0001402c:
                local_478 = local_478 - 1;
                for (; uVar7 < uVar29; uVar7 = uVar7 + 8) {
                  while (iVar21 = DAT_000d4280 + -1, 0 < DAT_000d4280) {
                    pbVar15 = DAT_000d427c + 1;
                    uVar27 = uVar27 | (uint)*DAT_000d427c << (uVar7 & 0xff);
                    uVar7 = uVar7 + 8;
                    DAT_000d427c = pbVar15;
                    DAT_000d4280 = iVar21;
                    if (uVar29 <= uVar7) goto LAB_0001407c;
                  }
                  DAT_000d4280 = iVar21;
                  iVar21 = FUN_00019950();
                  uVar27 = uVar27 | iVar21 << (uVar7 & 0xff);
                }
LAB_0001407c:
                iVar21 = uVar6 + (uVar20 & ~uVar27) * 8;
                uVar22 = (uint)*(byte *)(uVar6 + (uVar20 & ~uVar27) * 8);
                uVar25 = uVar27 >> (uint)*(byte *)(iVar21 + 1);
                uVar24 = uVar7 - *(byte *)(iVar21 + 1);
                if (0x20 < uVar22) {
                  if (uVar22 != 99) {
                    do {
                      uVar7 = uVar22 & 0x1f;
                      for (; uVar24 < uVar7; uVar24 = uVar24 + 8) {
                        while (iVar23 = DAT_000d4280 + -1, 0 < DAT_000d4280) {
                          pbVar15 = DAT_000d427c + 1;
                          uVar25 = uVar25 | (uint)*DAT_000d427c << (uVar24 & 0xff);
                          uVar24 = uVar24 + 8;
                          DAT_000d427c = pbVar15;
                          DAT_000d4280 = iVar23;
                          if (uVar7 <= uVar24) goto LAB_000140f4;
                        }
                        DAT_000d4280 = iVar23;
                        iVar23 = FUN_00019950();
                        uVar25 = uVar25 | iVar23 << (uVar24 & 0xff);
                      }
LAB_000140f4:
                      uVar22 = (uint)*(byte *)(*(int *)(iVar21 + 4) +
                                              (*(uint *)(&DAT_0002c580 + uVar7 * 4) & ~uVar25) * 8);
                      iVar21 = *(int *)(iVar21 + 4) +
                               (*(uint *)(&DAT_0002c580 + uVar7 * 4) & ~uVar25) * 8;
                      uVar25 = uVar25 >> (uint)*(byte *)(iVar21 + 1);
                      uVar24 = uVar24 - *(byte *)(iVar21 + 1);
                      if (uVar22 < 0x21) goto LAB_0001478c;
                      if (uVar22 == 99) break;
                    } while( true );
                  }
LAB_00014124:
                  uVar28 = 1;
                  goto LAB_00014128;
                }
LAB_0001478c:
                uVar7 = uVar28 + 1;
                (&DAT_000c4270)[uVar28] = (char)*(undefined2 *)(iVar21 + 4);
                uVar28 = uVar7;
                if (uVar7 != 0x10000) goto LAB_000147ac;
                uVar28 = FUN_00019bdc(DAT_00014e30,0x10000,0);
                if (uVar28 != 0) goto LAB_00014128;
                uVar28 = 0;
                bVar30 = false;
              }
LAB_000147ac:
            } while (local_478 != 0);
          }
          uVar28 = FUN_00019bdc(DAT_00014e30,uVar28,0);
          if (uVar28 == 0) {
            if (DAT_0004424c + DAT_000d4280 + (uVar24 >> 3) != 0) {
              uVar28 = 5;
              DAT_00044250 = (DAT_000d42b4 - (DAT_0004424c + DAT_000d4280)) - (uVar24 >> 3);
            }
          }
LAB_00014128:
          FUN_00020658(local_440);
          local_470 = uVar28;
        }
LAB_00014130:
        FUN_00020658(local_438);
        goto LAB_00014214;
      }
      if (uVar8 == 1) {
        FUN_00020658(local_438);
      }
    }
    FUN_00020658(local_43c);
    local_43c = local_440;
    local_470 = uVar8;
    if (local_440 != 0) {
LAB_00014214:
      FUN_00020658(local_43c);
      return local_470;
    }
  }
  else {
    local_434 = 9;
    uVar6 = FUN_00013c68(auStack_428,0x100);
    if (uVar6 != 0) {
      return uVar6;
    }
    uVar6 = FUN_0001dfec(auStack_428,0x100,0x100,0,0,&local_440,&local_434);
    if (uVar6 == 0) {
      uVar8 = FUN_00013c68(auStack_428,0x40);
      iVar26 = DAT_00014e24;
      if (uVar8 == 0) {
        uVar8 = FUN_0001dfec(auStack_428,0x40,0,DAT_00014e24 + -0x80,DAT_00014e24,&local_43c,
                             &local_430);
        if (uVar8 == 0) goto LAB_00013ef0;
        if (uVar8 == 1) {
          FUN_00020658(local_43c);
        }
      }
    }
    else {
      uVar8 = 1;
      if (uVar6 != 1) {
        return uVar6;
      }
    }
    FUN_00020658(local_440);
  }
  return uVar8;
}



/* ===== FUN_000152ec @ 000152ec size=728 ===== */

byte * FUN_000152ec(byte *param_1,byte *param_2)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  iVar3 = _stdlib_mb_cur_max();
  pbVar10 = (byte *)0x0;
  pbVar9 = param_2;
LAB_0001531c:
  do {
    bVar1 = *param_1;
    pbVar8 = param_1;
    pbVar6 = pbVar10;
joined_r0x00015324:
    uVar5 = (uint)bVar1;
    if (uVar5 == 0) {
      *pbVar9 = bVar1;
      return param_2;
    }
    uVar2 = *(ushort *)(__ctype_b + uVar5 * 2);
    pbVar10 = pbVar6;
    if ((param_2 + (0x3ffd - iVar3) <= pbVar9) && (pbVar10 = pbVar9, pbVar6 != (byte *)0x0)) {
      if ((uVar2 & 0x40) != 0) {
        uVar5 = FUN_0001bb94(pbVar8);
        pbVar10 = pbVar6;
LAB_00015418:
        if (pbVar9 <= param_2 + (0x3ffe - uVar5)) goto LAB_0001542c;
        goto LAB_000153c8;
      }
      pbVar10 = pbVar6;
      if (0x1f < uVar5) goto LAB_000153e8;
joined_r0x00015364:
      if (param_2 + 0x3ffc < pbVar9) goto LAB_000153c8;
      goto LAB_00015368;
    }
    if ((uVar2 & 0x40) != 0) {
      uVar5 = FUN_0001bb94(pbVar8);
      if (pbVar10 != (byte *)0x0) goto LAB_00015418;
LAB_0001542c:
      param_1 = pbVar8;
      if (uVar5 != 0) {
        if (uVar5 - 1 < 0xf || pbVar9 < pbVar8 + 0x10 && pbVar8 < pbVar9 + 0x10) {
          pbVar6 = pbVar9 + -1;
          param_1 = pbVar8 + uVar5;
          do {
            pbVar7 = pbVar8 + 1;
            pbVar6 = pbVar6 + 1;
            *pbVar6 = *pbVar8;
            pbVar8 = pbVar7;
          } while (pbVar7 != param_1);
        }
        else {
          pbVar6 = pbVar9;
          pbVar7 = pbVar8;
          do {
            uVar12 = *(undefined8 *)pbVar7;
            uVar13 = *(undefined8 *)(pbVar7 + 8);
            pbVar7 = pbVar7 + 0x10;
            *(undefined8 *)pbVar6 = uVar12;
            *(undefined8 *)(pbVar6 + 8) = uVar13;
            pbVar6 = pbVar6 + 0x10;
          } while (pbVar7 != pbVar8 + (uVar5 & 0xfffffff0));
          uVar11 = uVar5 & 0xfffffff0;
          param_1 = pbVar8 + uVar11;
          iVar4 = uVar5 - uVar11;
          if (uVar11 != uVar5) {
            pbVar9[uVar11] = pbVar8[uVar11];
            if (((((iVar4 == 1) || (pbVar9[uVar11 + 1] = param_1[1], iVar4 == 2)) ||
                 (pbVar9[uVar11 + 2] = param_1[2], iVar4 == 3)) ||
                ((((pbVar9[uVar11 + 3] = param_1[3], iVar4 == 4 ||
                   (pbVar9[uVar11 + 4] = param_1[4], iVar4 == 5)) ||
                  ((pbVar9[uVar11 + 5] = param_1[5], iVar4 == 6 ||
                   ((pbVar9[uVar11 + 6] = param_1[6], iVar4 == 7 ||
                    (pbVar9[uVar11 + 7] = param_1[7], iVar4 == 8)))))) ||
                 (pbVar9[uVar11 + 8] = param_1[8], iVar4 == 9)))) ||
               ((((pbVar9[uVar11 + 9] = param_1[9], iVar4 == 10 ||
                  (pbVar9[uVar11 + 10] = param_1[10], iVar4 == 0xb)) ||
                 (pbVar9[uVar11 + 0xb] = param_1[0xb], iVar4 == 0xc)) ||
                ((pbVar9[uVar11 + 0xc] = param_1[0xc], iVar4 == 0xd ||
                 (pbVar9[uVar11 + 0xd] = param_1[0xd], iVar4 == 0xe)))))) {
              param_1 = pbVar8 + uVar5;
            }
            else {
              pbVar6 = param_1 + 0xe;
              param_1 = pbVar8 + uVar5;
              pbVar9[uVar11 + 0xe] = *pbVar6;
            }
          }
        }
        pbVar9 = pbVar9 + uVar5;
      }
      goto LAB_0001531c;
    }
    if (uVar5 < 0x20) {
      if (pbVar10 != (byte *)0x0) goto joined_r0x00015364;
LAB_00015368:
      *pbVar9 = 0x5e;
      pbVar9[1] = *pbVar8 + 0x40;
      bVar1 = pbVar8[1];
      pbVar8 = pbVar8 + 1;
      pbVar9 = pbVar9 + 2;
      pbVar6 = pbVar10;
      goto joined_r0x00015324;
    }
    if (pbVar10 == (byte *)0x0) goto LAB_000153f0;
LAB_000153e8:
    if (param_2 + 0x3ffd < pbVar9) {
LAB_000153c8:
      *(undefined4 *)pbVar10 = DAT_000300b0;
      return param_2;
    }
LAB_000153f0:
    *pbVar9 = 0x3f;
    iVar4 = FUN_0001bb94(pbVar8);
    param_1 = pbVar8 + iVar4;
    pbVar9 = pbVar9 + 1;
  } while( true );
}



/* ===== FUN_000155c4 @ 000155c4 size=1144 ===== */

undefined4 FUN_000155c4(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  size_t sVar5;
  char *__dest;
  uint uVar6;
  int iVar7;
  code *pcVar8;
  
  puVar1 = DAT_000c426c;
  iVar7 = DAT_000441ac;
  *(byte *)(DAT_000c426c + 6) =
       *(byte *)(DAT_000c426c + 6) & 0xfc | (byte)DAT_000d42f0 & 1 |
       (byte)(((DAT_000d42f0 & 0xf) >> 3) << 1);
  uVar6 = (uint)DAT_000d42ea;
  *(byte *)(puVar1 + 6) = *(byte *)(puVar1 + 6) & 0xfb | (byte)((uVar6 & 1) << 2);
  uVar2 = DAT_000d42d4;
  uVar3 = DAT_000d42d0;
  puVar1[3] = DAT_000d42e0;
  puVar1[1] = uVar3;
  puVar1[2] = uVar2;
  if (iVar7 == 0) {
    *(byte *)(puVar1 + 6) = *(byte *)(puVar1 + 6) & 0xf7;
  }
  else if (iVar7 == 1) {
    *(byte *)(puVar1 + 6) = *(byte *)(puVar1 + 6) & 0xf7 | (byte)((uVar6 & 1) << 3);
  }
  else {
    *(byte *)(puVar1 + 6) = *(byte *)(puVar1 + 6) | 8;
  }
  iVar7 = DAT_00015a3c;
  if (DAT_000d42ef == '\x02') {
    if (0x2a < DAT_000d42ee) {
      if (DAT_000441e0 != 0) {
        return 0;
      }
      pcVar8 = *(code **)(DAT_00015a3c + 0x30c);
      uVar3 = FUN_000152ec(DAT_00015a44,DAT_00015a40);
      iVar4 = sprintf(DAT_00015a4c,"   skipping: %-22s  need %s compat. v%u.%u (can do v%u.%u)\n",
                      uVar3,&DAT_000300b4,DAT_000d42ee / 10,(uint)DAT_000d42ee % 10,4,2);
      (*pcVar8)(iVar7 + -0x91000,DAT_00015a4c,iVar4,0x401);
      return 0;
    }
    if ((DAT_000441e4 == 0) && (DAT_00044234 != 1)) {
      pcVar8 = *(code **)(DAT_00015a3c + 0x30c);
      uVar3 = FUN_000152ec(DAT_00015a44,DAT_00015a40);
      iVar4 = sprintf(DAT_00015a4c,DAT_00015a50,uVar3);
      (*pcVar8)(iVar7 + -0x91000,DAT_00015a4c,iVar4,0x481);
      fgets(DAT_00015a54,10,stdin);
      if (((byte)DAT_00044260 & 0xdf) != 0x59) {
        return 0;
      }
    }
  }
  else if (0x15 < DAT_000d42ee) {
    if (DAT_000441e0 != 0) {
      return 0;
    }
    pcVar8 = *(code **)(DAT_00015a3c + 0x30c);
    uVar3 = FUN_000152ec(DAT_00015a44,DAT_00015a40);
    iVar4 = sprintf(DAT_00015a4c,"   skipping: %-22s  need %s compat. v%u.%u (can do v%u.%u)\n",
                    uVar3,&DAT_000300b8,DAT_000d42ee / 10,(uint)DAT_000d42ee % 10,2,1);
    goto LAB_00015758;
  }
  iVar7 = DAT_00015a3c;
  uVar6 = (uint)DAT_000d42f2;
  if (3 < uVar6 - 2 && (uVar6 != 7 && uVar6 < 10)) {
    sVar5 = strlen(DAT_00015a44);
    puVar1 = DAT_000c426c;
    __dest = malloc(sVar5 + 1);
    puVar1[7] = __dest;
    iVar7 = DAT_00015a3c;
    if (__dest == (char *)0x0) {
      pcVar8 = *(code **)(DAT_00015a3c + 0x30c);
      uVar3 = FUN_000152ec(DAT_00015a44,DAT_00015a40);
      iVar4 = sprintf(DAT_00015a4c,DAT_00015a58,uVar3);
      (*pcVar8)(iVar7 + -0x91000,DAT_00015a4c,iVar4,0x401);
    }
    else {
      strcpy(__dest,DAT_00015a44);
    }
    FUN_00029c68();
    uVar3 = DAT_000d42d8;
    puVar1 = DAT_000c426c;
    *(undefined2 *)(DAT_000c426c + 4) = DAT_000d42e8;
    *puVar1 = uVar3;
    return 1;
  }
  if (DAT_000441e0 != 0) {
    return 0;
  }
  if ((((((uVar6 != 0) && (uVar6 != 1)) && (uVar6 != 2)) && ((uVar6 != 3 && (uVar6 != 4)))) &&
      ((uVar6 != 5 && ((uVar6 != 6 && (uVar6 != 7)))))) &&
     ((uVar6 != 8 && ((uVar6 != 9 && (uVar6 != 10)))))) {
    if (uVar6 == 0xc) {
      uVar6 = 0xb;
    }
    else if (uVar6 == 0xe) {
      uVar6 = 0xc;
    }
    else if (uVar6 == 0x12) {
      uVar6 = 0xd;
    }
    else if (uVar6 == 0x13) {
      uVar6 = 0xe;
    }
    else if (uVar6 == 0x61) {
      uVar6 = 0xf;
    }
    else {
      if (uVar6 != 0x62) {
        pcVar8 = *(code **)(DAT_00015a3c + 0x30c);
        uVar3 = FUN_000152ec(DAT_00015a44,DAT_00015a40);
        iVar4 = sprintf(DAT_00015a4c,DAT_00015a48,uVar3,(uint)DAT_000d42f2);
LAB_00015758:
        (*pcVar8)(iVar7 + -0x91000,DAT_00015a4c,iVar4,0x401);
        return 0;
      }
      uVar6 = 0x10;
    }
  }
  pcVar8 = *(code **)(DAT_00015a3c + 0x30c);
  uVar3 = FUN_000152ec(DAT_00015a44,DAT_00015a40);
  iVar4 = sprintf(DAT_00015a4c,"   skipping: %-22s  `%s\' method not supported\n",uVar3,
                  (&PTR_s_store_0002f6e8)[uVar6]);
  (*pcVar8)(iVar7 + -0x91000,DAT_00015a4c,iVar4,0x401);
  return 0;
}



/* ===== FUN_00015a5c @ 00015a5c size=192 ===== */

undefined4 FUN_00015a5c(int param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  if (param_1 == 1) {
    return 1;
  }
  if (param_1 == 2) {
    return 2;
  }
  if (param_1 == 3) {
    return 3;
  }
  if (param_1 == 4) {
    return 4;
  }
  if (param_1 == 5) {
    return 5;
  }
  if (param_1 == 6) {
    return 6;
  }
  if (param_1 == 7) {
    return 7;
  }
  if (param_1 == 8) {
    return 8;
  }
  if (param_1 == 9) {
    return 9;
  }
  if (param_1 == 10) {
    return 10;
  }
  if (param_1 == 0xc) {
    return 0xb;
  }
  if (param_1 == 0xe) {
    return 0xc;
  }
  if (param_1 == 0x12) {
    return 0xd;
  }
  if (param_1 == 0x13) {
    return 0xe;
  }
  if (param_1 != 0x61) {
    if (param_1 != 0x62) {
      return 0x11;
    }
    return 0x10;
  }
  return 0xf;
}



/* ===== FUN_00015b1c @ 00015b1c size=576 ===== */

uint FUN_00015b1c(void *param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  code *pcVar8;
  
  uVar3 = DAT_000d4280;
  uVar2 = DAT_000d427c;
  uVar1 = DAT_0004424c;
  iVar4 = FUN_0001b8b4(param_3);
  iVar5 = FUN_0001b8c4(param_3 + 2);
  pcVar8 = DAT_000d54ac;
  iVar6 = DAT_000441e4;
  DAT_000d437c = param_1;
  DAT_0004424c = param_4 - 6;
  DAT_000d4380 = param_2;
  DAT_000d427c = (void *)(param_3 + 6);
  DAT_000d4378 = 1;
  DAT_000d4280 = DAT_0004424c;
  if (iVar4 == 0) {
    memcpy(param_1,DAT_000d427c,DAT_0004424c);
    DAT_000d43c0 = DAT_0004424c;
  }
  else {
    if (1 < (iVar4 - 8U & 0xffff)) {
      if (DAT_000441e4 == 0) {
        iVar4 = sprintf(DAT_00015d60,DAT_00015d6c,iVar4);
        (*pcVar8)(&DAT_000441a0,DAT_00015d60,iVar4,0x401);
        DAT_000d427c = (void *)uVar2;
        DAT_000d4280 = uVar3;
        DAT_0004424c = uVar1;
        DAT_000d4378 = iVar6;
        return 2;
      }
      DAT_000d427c = (void *)uVar2;
      DAT_000d4280 = uVar3;
      DAT_0004424c = uVar1;
      DAT_000d4378 = 0;
      return iVar4 << 8 | 2;
    }
    DAT_000d43c0 = 0;
    iVar6 = FUN_00020268(iVar4 == 9);
    pcVar8 = DAT_000d54ac;
    if (iVar6 != 0) {
      if (DAT_000441e4 == 0) {
        iVar4 = DAT_00015d5c + 0x18;
        if (iVar6 == 3) {
          iVar4 = DAT_00015d5c;
        }
        iVar4 = sprintf(DAT_00015d60,(char *)(DAT_00015d5c + 0x40),iVar4,DAT_00015d5c + 0x34);
        (*pcVar8)(&DAT_000441a0,DAT_00015d60,iVar4,0x401);
      }
      if (iVar6 != 3) {
        DAT_0004424c = uVar1;
        DAT_000d427c = (void *)uVar2;
        DAT_000d4280 = uVar3;
        DAT_000d4378 = 0;
        return 2;
      }
      DAT_0004424c = uVar1;
      DAT_000d427c = (void *)uVar2;
      DAT_000d4280 = uVar3;
      DAT_000d4378 = 0;
      return 6;
    }
  }
  DAT_000d4378 = 0;
  DAT_0004424c = uVar1;
  DAT_000d427c = (void *)uVar2;
  DAT_000d4280 = uVar3;
  iVar4 = FUN_00012ee8(0,param_1,DAT_000d43c0);
  iVar6 = DAT_00015d64;
  if (iVar5 == iVar4) {
    uVar7 = 0;
  }
  else if (DAT_000441e4 == 0) {
    pcVar8 = *(code **)(DAT_00015d64 + 0x30c);
    iVar4 = sprintf(DAT_00015d60,DAT_00015d68,DAT_000d4298,iVar4,iVar5);
    (*pcVar8)(iVar6 + -0x91000,DAT_00015d60,iVar4,0x401);
    uVar7 = 2;
  }
  else {
    uVar7 = 0x802;
  }
  return uVar7;
}



/* ===== FUN_00015d70 @ 00015d70 size=124 ===== */

undefined4 FUN_00015d70(int param_1,uint param_2,int param_3)

{
  size_t __size;
  void *__ptr;
  undefined4 uVar1;
  
  if ((3 < param_2) &&
     ((__size = FUN_0001b8c4(param_1 + 4), __size == 0 || (param_3 + 6U < param_2)))) {
    __ptr = malloc(__size);
    if (__ptr == (void *)0x0) {
      uVar1 = 7;
    }
    else {
      uVar1 = FUN_00015b1c(__ptr,__size,param_1 + param_3 + 4,param_2 - param_3);
      free(__ptr);
    }
    return uVar1;
  }
  return 0x4f;
}



/* ===== FUN_00015dec @ 00015dec size=8580 ===== */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00015dec(int param_1,int *param_2,int *param_3,int *param_4,int *param_5,
                 undefined4 *param_6,uint param_7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  char *pcVar12;
  size_t sVar13;
  char *pcVar14;
  char *pcVar15;
  byte bVar16;
  uint *puVar17;
  undefined *puVar18;
  int iVar19;
  uint uVar20;
  char *pcVar21;
  uint uVar22;
  code *pcVar23;
  __off_t __offset;
  void *pvVar24;
  uint uVar25;
  char *pcVar26;
  undefined4 *puVar27;
  int iVar28;
  undefined *puVar29;
  char *pcVar30;
  char *pcVar31;
  uint local_64;
  uint local_58;
  char *local_50;
  uint local_4c;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 *local_34 [2];
  
  uVar1 = DAT_00016198;
  if (param_1 == 0) {
    local_64 = param_7;
  }
  else {
    puVar27 = &DAT_000441a0;
    local_50 = "";
    iVar28 = 0;
    local_64 = param_7;
    do {
      iVar6 = DAT_000161e4;
      *param_2 = *param_2 + 1;
      iVar11 = DAT_000d42a8;
      iVar19 = puVar27[0x33];
      *(undefined4 **)(iVar6 + 0xcc) = puVar27 + 0x33;
      uVar20 = iVar19 + iVar11;
      if ((int)uVar20 < 0) {
        pcVar23 = *(code **)(DAT_000161f8 + 0x30c);
        iVar6 = sprintf(DAT_000161fc,"error [%s]:  attempt to seek before beginning of zipfile\n%s",
                        DAT_000d4298,
                        "  (please check that you have transferred or created the zipfile in the\n  appropriate BINARY mode and that you have compiled UnZip properly)\n"
                       );
        (*pcVar23)(&DAT_000441a0,DAT_000161fc,iVar6,0x401);
        uVar9 = s__attempting_to_re_compensate__00030140._12_4_;
        uVar8 = s__attempting_to_re_compensate__00030140._8_4_;
        uVar7 = s__attempting_to_re_compensate__00030140._4_4_;
        iVar6 = DAT_000161e4;
        if ((*param_2 != 1) || (DAT_000d42a8 == 0)) {
LAB_00016188:
          local_64 = 3;
          goto LAB_00016004;
        }
        pcVar23 = *(code **)(fileno + DAT_000161e4 + 4);
        *(undefined4 *)(DAT_000161e4 + 0xd0) = s__attempting_to_re_compensate__00030140._0_4_;
        *(undefined4 *)(iVar6 + 0xd4) = uVar7;
        *(undefined4 *)(iVar6 + 0xd8) = uVar8;
        *(undefined4 *)(iVar6 + 0xdc) = uVar9;
        uVar2 = ram0x00030160;
        uVar9 = s__attempting_to_re_compensate__00030140._28_4_;
        uVar8 = s__attempting_to_re_compensate__00030140._24_4_;
        uVar7 = s__attempting_to_re_compensate__00030140._20_4_;
        *(undefined4 *)(iVar6 + 0xe0) = s__attempting_to_re_compensate__00030140._16_4_;
        *(undefined4 *)(iVar6 + 0xe4) = uVar7;
        *(undefined4 *)(iVar6 + 0xe8) = uVar8;
        *(undefined4 *)(iVar6 + 0xec) = uVar9;
        *(char *)(iVar6 + 0xf0) = (char)uVar2;
        (*pcVar23)(&DAT_000441a0,iVar6 + 0xd0,0x20,0x401);
        puVar17 = *(uint **)(iVar6 + 0xcc);
        *param_4 = DAT_000d42a8;
        uVar20 = *puVar17;
        DAT_000d42a8 = 0;
        uVar22 = uVar20 & 0x1fff;
        if (-1 < (int)-uVar20) {
          uVar22 = -(-uVar20 & 0x1fff);
        }
        __offset = uVar20 - uVar22;
        if (-1 < (int)uVar20) {
          local_64 = 2;
          goto LAB_00016048;
        }
        pcVar23 = *(code **)(DAT_000161f8 + 0x30c);
        iVar6 = sprintf(DAT_000161fc,"error [%s]:  attempt to seek before beginning of zipfile\n%s",
                        DAT_000d4298,
                        "  (please check that you have transferred or created the zipfile in the\n  appropriate BINARY mode and that you have compiled UnZip properly)\n"
                       );
LAB_00015fec:
        local_64 = 3;
        (*pcVar23)(&DAT_000441a0,DAT_000161fc,iVar6,0x401);
      }
      else {
        uVar22 = uVar20 & 0x1fff;
        __offset = uVar20 - uVar22;
LAB_00016048:
        if (DAT_000d42a4 != __offset) {
          DAT_000d42a4 = lseek(DAT_000d429c,__offset,0);
          DAT_000d4280 = (char *)read(DAT_000d429c,DAT_000d4278,0x2000);
          if (0 < (int)DAT_000d4280) {
            DAT_000d4280 = DAT_000d4280 + -uVar22;
            goto LAB_00015e90;
          }
          local_64 = 3;
          pcVar23 = *(code **)(DAT_000161f8 + 0x30c);
          iVar6 = sprintf(DAT_000161fc,DAT_000161ac,*param_2,"lseek",__offset);
LAB_0001659c:
          (*pcVar23)(&DAT_000441a0,DAT_000161fc,iVar6,0x401);
          goto LAB_00016004;
        }
        DAT_000d4280 = DAT_000d427c + (int)(DAT_000d4280 + (-uVar22 - (int)DAT_000d4278));
LAB_00015e90:
        DAT_000d427c = (char *)((int)DAT_000d4278 + uVar22);
        iVar6 = FUN_00019870(DAT_000161a0,4);
        if (iVar6 == 0) {
          iVar6 = *param_2;
          pcVar21 = DAT_000161ac;
          puVar18 = &DAT_000300f0;
          puVar29 = &DAT_000d51a0;
LAB_00015fe4:
          pcVar23 = *(code **)(puVar29 + 0x30c);
          iVar6 = sprintf(DAT_000161fc,pcVar21,iVar6,puVar18,uVar20);
          goto LAB_00015fec;
        }
        if ((((*DAT_000161a0 != DAT_0004415c) || (*DAT_000161dc != DAT_0004415d)) ||
            (DAT_000161dc[1] != DAT_0004415e)) || (DAT_000161dc[2] != DAT_0004415f)) {
          pcVar23 = *(code **)(DAT_000161f8 + 0x30c);
          iVar6 = sprintf(DAT_000161fc,DAT_000161a4 + -0x30,*param_2,DAT_000161a4,uVar20);
          (*pcVar23)(&DAT_000441a0,DAT_000161fc,iVar6,0x401);
          uVar9 = s__attempting_to_re_compensate__00030140._12_4_;
          uVar8 = s__attempting_to_re_compensate__00030140._8_4_;
          uVar7 = s__attempting_to_re_compensate__00030140._4_4_;
          iVar6 = DAT_000161e4;
          if (*param_2 != 1) {
            if (DAT_000d42a8 == 0) goto LAB_00015f0c;
LAB_00016520:
            local_64 = 2;
            goto LAB_00016004;
          }
          if (DAT_000d42a8 == 0) {
LAB_00015f0c:
            if (*param_4 == 0) goto LAB_00016520;
          }
          pcVar23 = *(code **)(fileno + DAT_000161e4 + 4);
          *(undefined4 *)(DAT_000161e4 + 0xd0) = s__attempting_to_re_compensate__00030140._0_4_;
          *(undefined4 *)(iVar6 + 0xd4) = uVar7;
          *(undefined4 *)(iVar6 + 0xd8) = uVar8;
          *(undefined4 *)(iVar6 + 0xdc) = uVar9;
          uVar2 = ram0x00030160;
          uVar9 = s__attempting_to_re_compensate__00030140._28_4_;
          uVar8 = s__attempting_to_re_compensate__00030140._24_4_;
          uVar7 = s__attempting_to_re_compensate__00030140._20_4_;
          *(undefined4 *)(iVar6 + 0xe0) = s__attempting_to_re_compensate__00030140._16_4_;
          *(undefined4 *)(iVar6 + 0xe4) = uVar7;
          *(undefined4 *)(iVar6 + 0xe8) = uVar8;
          *(undefined4 *)(iVar6 + 0xec) = uVar9;
          *(char *)(iVar6 + 0xf0) = (char)uVar2;
          (*pcVar23)(&DAT_000441a0,iVar6 + 0xd0,0x20,0x401);
          if (DAT_000d42a8 == 0) {
            DAT_000d42a8 = *param_4;
          }
          else {
            *param_4 = DAT_000d42a8;
            DAT_000d42a8 = 0;
          }
          iVar6 = FUN_00019ae8(**(undefined4 **)(DAT_000161e4 + 0xcc));
          if (iVar6 == 0) {
            iVar6 = FUN_00019870(DAT_000161a0,4);
            if (iVar6 != 0) {
              if (((*DAT_000161a0 != DAT_0004415c) || (*DAT_000161dc != *DAT_000161e0)) ||
                 ((DAT_000161dc[1] != DAT_000161e0[1] || (DAT_000161dc[2] != DAT_000161e0[2])))) {
                iVar6 = *param_2;
                pcVar21 = DAT_000161a4 + -0x30;
                puVar18 = DAT_000161a4;
                puVar29 = DAT_000161f8;
                goto LAB_00015fe4;
              }
              local_64 = 2;
              goto LAB_00016234;
            }
          }
          else if (iVar6 == 3) goto LAB_00016188;
          iVar6 = *param_2;
          puVar18 = &DAT_000300f0;
          pcVar21 = DAT_000161ac;
          puVar29 = DAT_000161f8;
          goto LAB_00015fe4;
        }
LAB_00016234:
        uVar20 = FUN_00023b4c();
        if (uVar20 != 0) {
          pcVar23 = *(code **)(DAT_000161f8 + 0x30c);
          iVar6 = sprintf(DAT_000161fc,DAT_000161bc,*param_2);
          (*pcVar23)(&DAT_000441a0,DAT_000161fc,iVar6,0x421);
          local_64 = uVar20;
          goto LAB_00016004;
        }
        if ((DAT_000d42c6 & 0xfff) >> 0xb != (*(byte *)(*(int *)(DAT_000161e4 + 0xcc) + 0x19) & 1))
        {
          if (DAT_000441e0 == 0) {
            pcVar23 = *(code **)(DAT_000161f8 + 0x30c);
            iVar6 = *param_2;
            uVar7 = FUN_000152ec(*(undefined4 *)(*(int *)(DAT_000161e4 + 0xcc) + 0x1c),DAT_000161e8)
            ;
            iVar6 = sprintf(DAT_000161fc,DAT_000161c0,iVar6,uVar7,
                            *(byte *)(*(int *)(DAT_000161e4 + 0xcc) + 0x19) & 1);
            (*pcVar23)(&DAT_000441a0,DAT_000161fc,iVar6,0x421);
          }
          if ((int)local_64 < 1) {
            local_64 = 1;
          }
        }
        uVar22 = FUN_0001b094(DAT_000d42ca,6);
        if (uVar22 != 0) {
          if ((int)local_64 < (int)uVar22) {
            local_64 = uVar22;
          }
          if (1 < (int)uVar22) {
            pcVar23 = *(code **)(DAT_000161f8 + 0x30c);
            uVar7 = FUN_000152ec(DAT_000161f0,DAT_000161e8);
            iVar6 = sprintf(DAT_000161fc,DAT_000161cc,uVar7,"local");
            goto LAB_0001659c;
          }
        }
        if (DAT_000d42ac != (void *)0x0) {
          free(DAT_000d42ac);
          DAT_000d42ac = (void *)0x0;
        }
        uVar22 = FUN_0001b094(DAT_000d42cc,3);
        if (uVar22 != 0) {
          if ((int)local_64 < (int)uVar22) {
            local_64 = uVar22;
          }
          if (1 < (int)uVar22) {
            pcVar23 = *(code **)(DAT_000161f8 + 0x30c);
            uVar7 = FUN_000152ec(DAT_000161f0,DAT_000161e8);
            iVar6 = sprintf(DAT_000161fc,DAT_000161d0,uVar7,"local");
            goto LAB_0001659c;
          }
        }
        iVar6 = *(int *)(DAT_000161e4 + 0xcc);
        pcVar21 = *(char **)(iVar6 + 0x1c);
        if (pcVar21 != (char *)0x0) {
          iVar6 = strcmp(pcVar21,DAT_000161f0);
          if (iVar6 != 0) {
            pcVar23 = *(code **)(DAT_000161f8 + 0x30c);
            uVar7 = FUN_000152ec(pcVar21,DAT_000161c4);
            uVar8 = FUN_000152ec(DAT_000161f0,DAT_000161e8);
            iVar6 = sprintf(DAT_000161fc,DAT_000161c8,uVar7,uVar8);
            (*pcVar23)(&DAT_000441a0,DAT_000161fc,iVar6,0x401);
            iVar6 = *(int *)(DAT_000161e4 + 0xcc);
            strcpy(DAT_000161f0,*(char **)(iVar6 + 0x1c));
            pcVar21 = *(char **)(iVar6 + 0x1c);
            if ((int)local_64 < 1) {
              local_64 = 1;
            }
          }
          free(pcVar21);
          iVar6 = *(int *)(DAT_000161e4 + 0xcc);
          *(undefined4 *)(iVar6 + 0x1c) = 0;
        }
        bVar16 = *(byte *)(iVar6 + 0x18) & 1;
        if (DAT_000d42c8 == 0) {
          uVar22 = DAT_000d42b4;
          if ((*(byte *)(iVar6 + 0x18) & 1) != 0) {
            uVar22 = DAT_000d42b4 - 0xc;
          }
          if (DAT_000d42b8 != uVar22) {
            pcVar23 = *(code **)(DAT_000161f8 + 0x30c);
            uVar7 = FUN_000152ec(DAT_000161f0,DAT_000161e8);
            uVar8 = FUN_0001b92c(DAT_000d42b8,0,&DAT_00033278);
            uVar9 = FUN_0001b92c(uVar22,0,&DAT_00033278);
            iVar6 = sprintf(DAT_000161fc,DAT_000161a8,uVar7,uVar8,uVar9);
            (*pcVar23)(&DAT_000441a0,DAT_000161fc,iVar6,0x401);
            iVar6 = *(int *)(DAT_000161e4 + 0xcc);
            if ((int)local_64 < 1) {
              local_64 = 1;
            }
            bVar16 = *(byte *)(iVar6 + 0x18) & 1;
            DAT_000d42b8 = uVar22;
          }
        }
        if (bVar16 != 0) {
          uVar22 = FUN_00013504(DAT_000441a4);
          if (uVar22 != 0) {
            if (uVar22 != 1) {
              if ((int)uVar22 <= (int)local_64) {
                uVar22 = local_64;
              }
              pcVar23 = *(code **)(DAT_000161f8 + 0x30c);
              uVar7 = FUN_000152ec(DAT_000161f0,DAT_000161e8);
              iVar6 = sprintf(DAT_000161fc,DAT_000161d8,uVar7);
              local_64 = uVar22;
              goto LAB_0001659c;
            }
            if (DAT_000441e0 == 0) {
              pcVar23 = *(code **)(DAT_0001800c + 0x30c);
              uVar7 = FUN_000152ec(DAT_00018018,DAT_00018014);
              iVar6 = sprintf(DAT_00018004,DAT_00018038,uVar7);
              (*pcVar23)(&DAT_000441a0,DAT_00018004,iVar6,0x401);
            }
            *param_3 = *param_3 + 1;
            goto LAB_00016004;
          }
          iVar6 = *(int *)(DAT_000161e4 + 0xcc);
        }
        if (DAT_000441e4 == 0 && DAT_000441b4 == 0) {
          uVar22 = 0;
LAB_000164a0:
          if ((*(char *)(iVar6 + 0x13) == '\0') &&
             (iVar6 = FUN_0001bbb8(DAT_000161f0,0x2f), iVar6 == 0)) {
            pcVar21 = DAT_000161f0;
            uVar25 = local_64;
            cVar5 = DAT_000d43c4;
            if (DAT_000d43c4 != '\0') {
              do {
                if (cVar5 == '\\') {
                  if (DAT_000d4384 == 0) {
                    pcVar23 = *(code **)(DAT_0001800c + 0x30c);
                    iVar6 = sprintf(DAT_00018004,DAT_00018044,DAT_000d4298);
                    (*pcVar23)(&DAT_000441a0,DAT_00018004,iVar6,0x21);
                    DAT_000d4384 = 1;
                    if (local_64 == 0) {
                      local_64 = 1;
                    }
                  }
                  *pcVar21 = '/';
                }
                iVar6 = FUN_0001bb94(pcVar21);
                cVar5 = pcVar21[iVar6];
                pcVar21 = pcVar21 + iVar6;
              } while (cVar5 != '\0');
              goto LAB_000164ac;
            }
          }
          else {
LAB_000164ac:
            uVar25 = local_64;
            if ((uVar22 == 0) && (DAT_000d43c4 == '/')) {
              pcVar23 = *(code **)(DAT_0001800c + 0x30c);
              uVar7 = FUN_000152ec(DAT_00018018,DAT_00018014);
              iVar6 = sprintf(DAT_00018004,DAT_00018040,uVar7);
              (*pcVar23)(&DAT_000441a0,DAT_00018004,iVar6,0x401);
              pcVar21 = DAT_00018018;
              if (local_64 == 0) {
                uVar25 = 1;
              }
              do {
                do {
                  pcVar26 = pcVar21 + 1;
                  *pcVar21 = *pcVar26;
                  pcVar21 = pcVar21 + 1;
                } while (*pcVar26 != '\0');
                pcVar21 = DAT_00018018;
              } while (DAT_000d43c4 == '/');
            }
          }
          uVar10 = FUN_0002a494(uVar22);
          local_64 = uVar10 & 0xffff80ff;
          uVar10 = uVar10 & 0x7f00;
          if ((int)local_64 <= (int)uVar25 || local_64 == 0) {
            local_64 = uVar25;
          }
          if (0x100 < uVar10) {
            if (uVar10 == 0x1000) {
              iVar6 = FUN_0002af18(local_34);
              if (local_34[0] == (undefined4 *)0x0) {
                if (iVar6 != 0) {
                  pcVar23 = *(code **)(fileno + DAT_000161e4 + 4);
                  memcpy((void *)(DAT_000161e4 + 0xd0),
                         "warning:  cannot alloc memory for dir times/permissions/UID/GID\n",0x41);
                  (*pcVar23)(&DAT_000441a0,DAT_000161fc,0x40,0x401);
                  if (local_64 == 0) {
                    local_64 = 1;
                  }
                }
              }
              else {
                iVar6 = *param_5;
                *local_34[0] = *param_6;
                *param_6 = local_34[0];
                *param_5 = iVar6 + 1;
              }
            }
            else {
              if (uVar10 != 0x1100) {
                if (1 < (int)local_64 || uVar10 < 0x201) goto LAB_00016004;
                goto LAB_00016520;
              }
              pcVar23 = *(code **)(DAT_0001800c + 0x30c);
              uVar7 = FUN_000152ec(DAT_00018018,DAT_00018014);
              iVar6 = sprintf(DAT_00018004,DAT_00018030,uVar7,"");
              (*pcVar23)(&DAT_000441a0,DAT_00018004,iVar6,1);
            }
            goto LAB_00016004;
          }
          iVar6 = FUN_0001aee8(DAT_000161f0);
          pcVar21 = DAT_00018004;
          if (iVar6 == 0) {
            if (DAT_000441b0 == 0) {
              if (DAT_00044234 == 2) goto LAB_00016004;
joined_r0x000173c8:
              if (DAT_00044234 != 1) {
                do {
                  pcVar23 = *(code **)(DAT_0001800c + 0x30c);
                  uVar7 = FUN_000152ec(DAT_00018018,DAT_00018014);
                  iVar6 = sprintf(pcVar21,DAT_0001801c,uVar7);
                  (*pcVar23)(&DAT_000441a0,pcVar21,iVar6,0x81);
                  pcVar12 = fgets(DAT_00018020,10,stdin);
                  uVar2 = s_NULL__EOF_or_read_error__treatin_00030228._12_4_;
                  uVar9 = s_NULL__EOF_or_read_error__treatin_00030228._8_4_;
                  uVar8 = s_NULL__EOF_or_read_error__treatin_00030228._4_4_;
                  uVar7 = s__ENTER__000300fc._4_4_;
                  pcVar15 = DAT_00018020;
                  pcVar26 = DAT_00018018;
                  iVar6 = DAT_00018010;
                  if (pcVar12 == (char *)0x0) {
                    pcVar23 = *(code **)(fileno + DAT_00018010 + 4);
                    *(undefined4 *)(DAT_00018010 + 0xd0) =
                         s_NULL__EOF_or_read_error__treatin_00030228._0_4_;
                    *(undefined4 *)(iVar6 + 0xd4) = uVar8;
                    *(undefined4 *)(iVar6 + 0xd8) = uVar9;
                    *(undefined4 *)(iVar6 + 0xdc) = uVar2;
                    uVar9 = s_NULL__EOF_or_read_error__treatin_00030228._28_4_;
                    uVar8 = s_NULL__EOF_or_read_error__treatin_00030228._24_4_;
                    uVar7 = s_NULL__EOF_or_read_error__treatin_00030228._20_4_;
                    *(undefined4 *)(iVar6 + 0xe0) =
                         s_NULL__EOF_or_read_error__treatin_00030228._16_4_;
                    *(undefined4 *)(iVar6 + 0xe4) = uVar7;
                    *(undefined4 *)(iVar6 + 0xe8) = uVar8;
                    *(undefined4 *)(iVar6 + 0xec) = uVar9;
                    uVar9 = s_NULL__EOF_or_read_error__treatin_00030228._44_4_;
                    uVar8 = s_NULL__EOF_or_read_error__treatin_00030228._40_4_;
                    uVar7 = s_NULL__EOF_or_read_error__treatin_00030228._36_4_;
                    *(undefined4 *)(iVar6 + 0xf0) =
                         s_NULL__EOF_or_read_error__treatin_00030228._32_4_;
                    *(undefined4 *)(iVar6 + 0xf4) = uVar7;
                    *(undefined4 *)(iVar6 + 0xf8) = uVar8;
                    *(undefined4 *)(iVar6 + 0xfc) = uVar9;
                    uVar7 = ram0x0003025c;
                    *(undefined4 *)(iVar6 + 0x100) =
                         s_NULL__EOF_or_read_error__treatin_00030228._48_4_;
                    *(char *)(iVar6 + 0x104) = (char)uVar7;
                    (*pcVar23)(&DAT_000441a0,DAT_00018004,0x34,1);
                    DAT_00044260._0_1_ = 0x4e;
                    if (local_64 == 0) {
                      local_64 = 1;
                    }
LAB_00017bfc:
                    DAT_00044234 = 2;
                    goto LAB_00016004;
                  }
                  if ((byte)DAT_00044260 == 0x52) goto LAB_00017780;
                  if ((byte)DAT_00044260 < 0x53) {
                    if ((byte)DAT_00044260 == 0xd) {
LAB_00017510:
                      *(undefined4 *)DAT_00018020 = s__ENTER__000300fc._0_4_;
                      *(undefined4 *)(pcVar15 + 4) = uVar7;
                    }
                    else if ((byte)DAT_00044260 < 0xe) {
                      if ((byte)DAT_00044260 == 10) goto LAB_00017510;
                    }
                    else {
                      if ((byte)DAT_00044260 == 0x41) {
                        DAT_00044234 = 1;
                        iVar6 = *(int *)(DAT_00018010 + 0xcc);
                        goto LAB_00016418;
                      }
                      if ((byte)DAT_00044260 == 0x4e) goto LAB_00017bfc;
                    }
                  }
                  else {
                    if ((byte)DAT_00044260 == 0x6e) goto LAB_00016004;
                    if ((byte)DAT_00044260 < 0x6f) {
                      if ((byte)DAT_00044260 == 0x59) break;
                    }
                    else {
                      if ((byte)DAT_00044260 == 0x72) goto LAB_00017780;
                      if ((byte)DAT_00044260 == 0x79) break;
                    }
                  }
                  sVar13 = strlen(DAT_00018020);
                  pcVar12 = (char *)FUN_0001bb2c(DAT_00018020,sVar13);
                  pcVar15 = DAT_00018024;
                  pcVar26 = DAT_00018020;
                  if (*pcVar12 == '\n') {
                    (&DAT_0004425f)[sVar13] = 0;
                  }
                  pcVar23 = *(code **)(DAT_0001800c + 0x30c);
                  iVar6 = sprintf(pcVar21,pcVar15,pcVar26);
                  (*pcVar23)(&DAT_000441a0,pcVar21,iVar6,1);
                } while( true );
              }
            }
          }
          else {
            if (iVar6 == 1) {
              if (DAT_000441b0 == 0) {
                if (DAT_00044234 != 2) {
                  uVar22 = uVar22 ^ 1;
                  if (DAT_000441ec == 0) {
                    uVar22 = 0;
                  }
                  if (uVar22 == 0) goto joined_r0x000173c8;
                }
                goto LAB_00016004;
              }
              uVar22 = uVar22 ^ 1;
              if (DAT_000441ec == 0) {
                uVar22 = 0;
              }
            }
            else {
              if (iVar6 != -1) goto LAB_00016ee8;
              uVar22 = uVar22 ^ 1;
              if (DAT_000441c0 == 0) {
                uVar22 = 0;
              }
            }
            if (uVar22 != 0) goto LAB_00016004;
          }
LAB_00016ee8:
          iVar6 = *(int *)(DAT_000161e4 + 0xcc);
        }
LAB_00016418:
        _DAT_000d4388 = uVar1;
        DAT_000d4284 = 0;
        DAT_000d4274 = 0;
        DAT_000d4288 = 0;
        if (((*(byte *)(iVar6 + 0x18) & 0x40) == 0) || (DAT_000441e4 != 0 || DAT_000441b4 != 0)) {
          DAT_000d43a0 = 0;
          if (DAT_000441e4 == 0) goto LAB_00016c20;
          if (DAT_000441e0 == 0) {
            pcVar23 = *(code **)(DAT_000161f8 + 0x30c);
            uVar7 = FUN_000152ec(DAT_000161f0,DAT_000161e8);
            iVar6 = sprintf(DAT_000161fc,DAT_000161d4,&DAT_00030104,uVar7,"","");
            (*pcVar23)(&DAT_000441a0,DAT_000161fc,iVar6,0);
          }
LAB_000165d0:
          FUN_000197fc();
          local_58 = uVar20;
          switch(DAT_000d42c8) {
          case 0:
            if (DAT_000441e4 == 0 && DAT_000441e0 == 0) {
              pcVar23 = *(code **)(DAT_000161f8 + 0x30c);
              if (DAT_000d43a0 == 0) {
                uVar7 = FUN_000152ec(DAT_000161f0,DAT_000161e8);
                pcVar21 = local_50;
                if (DAT_000441ac == 1) {
                  if (DAT_000d42b8 == 0) {
                    pcVar21 = "[empty] ";
                  }
                  else {
                    pcVar21 = "[text]  ";
                    if ((*(byte *)(*(int *)(DAT_00018010 + 0xcc) + 0x18) & 4) == 0) {
                      pcVar21 = "[binary]";
                    }
                  }
                }
                pcVar26 = local_50;
                if (DAT_000441b4 != 0) {
                  pcVar26 = "\n";
                }
                iVar6 = sprintf(DAT_00018004,DAT_00018008,"extract",uVar7,pcVar21,pcVar26);
                (*pcVar23)(&DAT_000441a0,DAT_00018004,iVar6,0);
              }
              else {
                uVar7 = FUN_000152ec(DAT_000161f0,DAT_000161e8);
                iVar6 = sprintf(DAT_000161fc,DAT_000161d4,&DAT_0003010c,uVar7,"","");
                (*pcVar23)(&DAT_000441a0,DAT_000161fc,iVar6,0);
              }
            }
            pcVar21 = DAT_000161fc;
            DAT_000d43c0 = 0;
            DAT_000d43bc = DAT_000161fc;
            do {
              if ((int)DAT_000d4280 < 1) {
                DAT_000d4280 = DAT_000d4280 + -1;
                iVar6 = FUN_00019950();
                cVar5 = (char)iVar6;
                if (iVar6 == -1) {
                  local_58 = uVar20;
                  if (DAT_000d43c0 != 0) {
                    uVar20 = FUN_00019bdc(DAT_000161fc,DAT_000d43c0,0);
                    local_58 = uVar20 & ~((int)uVar20 >> 0x1f);
                  }
                  break;
                }
              }
              else {
                cVar5 = *DAT_000d427c;
                DAT_000d427c = DAT_000d427c + 1;
                DAT_000d4280 = DAT_000d4280 + -1;
              }
              pcVar26 = DAT_000d43bc + 1;
              *DAT_000d43bc = cVar5;
              DAT_000d43bc = pcVar26;
              DAT_000d43c0 = DAT_000d43c0 + 1;
              if (DAT_000d43c0 == 0x10000) {
                local_58 = FUN_00019bdc(pcVar21,0x10000,0);
                DAT_000d43c0 = 0;
                DAT_000d43bc = pcVar21;
                if ((local_58 != 0) || (_DAT_000d4388 != 0)) break;
              }
            } while( true );
          case 1:
            if (DAT_000441e4 == 0 && DAT_000441e0 == 0) {
              pcVar23 = *(code **)(DAT_0001800c + 0x30c);
              uVar7 = FUN_000152ec(DAT_00018018,DAT_00018014);
              pcVar21 = local_50;
              if (DAT_000441ac == 1) {
                pcVar21 = "[text]  ";
                if ((*(byte *)(*(int *)(DAT_00018010 + 0xcc) + 0x18) & 4) == 0) {
                  pcVar21 = "[binary]";
                }
              }
              pcVar26 = local_50;
              if (DAT_000441b4 != 0) {
                pcVar26 = "\n";
              }
              iVar6 = sprintf(DAT_00018004,(char *)(DAT_00018028 + -0x14),DAT_00018028,uVar7,pcVar21
                              ,pcVar26);
              (*pcVar23)(&DAT_000441a0,DAT_00018004,iVar6,0);
            }
            uVar20 = FUN_000248e0();
            iVar6 = DAT_000161b4;
            if ((uVar20 == 0) || (local_58 = uVar20, 0x31 < (int)uVar20)) break;
            pcVar23 = *(code **)(DAT_000161f8 + 0x30c);
            if (DAT_000441e0 == 0) {
              iVar6 = DAT_0001802c;
              if (uVar20 != 6) {
                iVar6 = DAT_0001802c + 0x18;
              }
              iVar6 = sprintf(DAT_00018004,(char *)(DAT_0001802c + 0x40),iVar6,DAT_00018028);
            }
            else {
              iVar11 = DAT_000161b4 + 0x18;
              if (uVar20 == 6) {
                iVar11 = DAT_000161b4;
              }
              uVar7 = FUN_000152ec(DAT_000161f0,DAT_000161e8);
              iVar6 = sprintf(DAT_000161fc,(char *)(iVar6 + 0x440),iVar11,iVar6 + 0x434,uVar7);
            }
            (*pcVar23)(&DAT_000441a0,DAT_000161fc,iVar6,0x401);
            if (DAT_000441e4 == 0 && DAT_000441b4 == 0) goto LAB_00016878;
            goto LAB_000166d0;
          default:
            local_58 = 1;
            pcVar23 = *(code **)(DAT_000161f8 + 0x30c);
            uVar7 = FUN_000152ec(DAT_000161f0,DAT_000161e8);
            iVar6 = sprintf(DAT_000161fc,DAT_000161b8,uVar7);
            uVar7 = 0x401;
            goto LAB_00016bc0;
          case 6:
            if (DAT_000441e4 == 0 && DAT_000441e0 == 0) {
              pcVar23 = *(code **)(DAT_0001800c + 0x30c);
              uVar7 = FUN_000152ec(DAT_00018018,DAT_00018014);
              pcVar21 = local_50;
              if (DAT_000441ac == 1) {
                pcVar21 = "[text]  ";
                if ((*(byte *)(*(int *)(DAT_00018010 + 0xcc) + 0x18) & 4) == 0) {
                  pcVar21 = "[binary]";
                }
              }
              pcVar26 = local_50;
              if (DAT_000441b4 != 0) {
                pcVar26 = "\n";
              }
              iVar6 = sprintf(DAT_00018004,DAT_00018008,"explod",uVar7,pcVar21,pcVar26);
              (*pcVar23)(&DAT_000441a0,DAT_00018004,iVar6,0);
            }
            uVar20 = FUN_00013e1c();
            uVar25 = DAT_000d42b4;
            uVar22 = DAT_00044250;
            iVar6 = DAT_0001802c;
            if (uVar20 != 0) {
              if (uVar20 == 5) {
                pcVar23 = *(code **)(DAT_000161f8 + 0x30c);
                pcVar21 = local_50;
                if (DAT_000441e0 == 0) {
                  if (DAT_000d42b4 < DAT_00044250) {
                    local_44 = FUN_0001b92c(DAT_00044250,0,0);
                    pcVar26 = "error";
                    local_40 = FUN_0001b92c(DAT_000d42b8,0,&DAT_00033278);
                  }
                  else {
                    local_44 = FUN_0001b92c(DAT_00044250,0,0);
                    pcVar26 = "warning";
                    local_40 = FUN_0001b92c(DAT_000d42b8,0,&DAT_00033278);
                    pcVar21 = "  ";
                  }
                  uVar7 = FUN_0001b92c(DAT_000d42b4,0,&DAT_00033278);
                  pcVar31 = ".";
                  pcVar15 = DAT_000161f4;
                  pcVar12 = "\n";
                  pcVar30 = local_50;
                  pcVar14 = local_50;
                }
                else {
                  if (DAT_000d42b4 < DAT_00044250) {
                    local_44 = FUN_0001b92c(DAT_00044250,0);
                    pcVar26 = "error";
                    local_40 = FUN_0001b92c(DAT_000d42b8,0,&DAT_00033278);
                  }
                  else {
                    local_44 = FUN_0001b92c(DAT_00044250,0);
                    pcVar26 = "warning";
                    local_40 = FUN_0001b92c(DAT_000d42b8,0,&DAT_00033278);
                    pcVar21 = "  ";
                  }
                  uVar7 = FUN_0001b92c(DAT_000d42b4,0,&DAT_00033278);
                  pcVar14 = (char *)FUN_000152ec(DAT_00018018,DAT_00018014);
                  pcVar31 = "]";
                  pcVar30 = " [";
                  pcVar15 = DAT_00018034;
                  pcVar12 = local_50;
                }
                iVar6 = sprintf(DAT_000161fc,pcVar15,pcVar12,pcVar26,local_44,local_40,pcVar21,uVar7
                                ,pcVar30,pcVar14,pcVar31);
                (*pcVar23)(&DAT_000441a0,DAT_000161fc,iVar6,0x401);
                if (uVar25 < uVar22) goto LAB_000166b8;
                local_58 = 1;
              }
              else {
                local_58 = uVar20;
                if ((int)uVar20 < 0x32) {
                  pcVar23 = *(code **)(DAT_000161f8 + 0x30c);
                  if (DAT_000441e0 == 0) {
                    iVar6 = DAT_000161b4 + 0x18;
                    if (uVar20 == 3) {
                      iVar6 = DAT_000161b4;
                    }
                    iVar6 = sprintf(DAT_000161fc,(char *)(DAT_000161b4 + 0x40),iVar6,
                                    DAT_000161b4 + 0x4c0);
                  }
                  else {
                    iVar11 = DAT_0001802c + 0x18;
                    if (uVar20 == 3) {
                      iVar11 = DAT_0001802c;
                    }
                    uVar7 = FUN_000152ec(DAT_00018018,DAT_00018014);
                    iVar6 = sprintf(DAT_00018004,(char *)(iVar6 + 0x440),iVar11,iVar6 + 0x4c0,uVar7)
                    ;
                  }
                  (*pcVar23)(&DAT_000441a0,DAT_000161fc,iVar6,0x401);
                  goto LAB_000166a8;
                }
              }
            }
            break;
          case 8:
          case 9:
            if (DAT_000441e4 == 0 && DAT_000441e0 == 0) {
              pcVar23 = *(code **)(DAT_0001800c + 0x30c);
              uVar7 = FUN_000152ec(DAT_00018018,DAT_00018014);
              pcVar21 = local_50;
              if (DAT_000441ac == 1) {
                pcVar21 = "[text]  ";
                if ((*(byte *)(*(int *)(DAT_00018010 + 0xcc) + 0x18) & 4) == 0) {
                  pcVar21 = "[binary]";
                }
              }
              pcVar26 = local_50;
              if (DAT_000441b4 != 0) {
                pcVar26 = "\n";
              }
              iVar6 = sprintf(DAT_00018004,DAT_00018008,"inflat",uVar7,pcVar21,pcVar26);
              (*pcVar23)(&DAT_000441a0,DAT_00018004,iVar6,0);
            }
            uVar20 = FUN_00020268(DAT_000d42c8 == 9);
            iVar6 = DAT_000161b4;
            if ((uVar20 != 0) && (local_58 = uVar20, (int)uVar20 < 0x32)) {
              pcVar23 = *(code **)(DAT_000161f8 + 0x30c);
              if (DAT_000441e0 == 0) {
                iVar6 = DAT_0001802c + 0x18;
                if (uVar20 == 3) {
                  iVar6 = DAT_0001802c;
                }
                iVar6 = sprintf(DAT_00018004,(char *)(DAT_0001802c + 0x40),iVar6,DAT_0001802c + 0x34
                               );
              }
              else {
                iVar11 = DAT_000161b4;
                if (uVar20 != 3) {
                  iVar11 = DAT_000161b4 + 0x18;
                }
                uVar7 = FUN_000152ec(DAT_000161f0,DAT_000161e8);
                iVar6 = sprintf(DAT_000161fc,(char *)(iVar6 + 0x440),iVar11,iVar6 + 0x34,uVar7);
              }
              (*pcVar23)(&DAT_000441a0,DAT_000161fc,iVar6,0x401);
LAB_000166a8:
              if (uVar20 == 3) {
                local_58 = 6;
              }
              else {
LAB_000166b8:
                local_58 = 2;
              }
            }
          }
          if (DAT_000441e4 == 0 && DAT_000441b4 == 0) {
LAB_00016878:
            FUN_0002a9cc();
            if (_DAT_000d4388 == 0) goto LAB_00016888;
LAB_000166dc:
            if (_DAT_000d4388 < 2) {
              local_58 = 1;
              if (DAT_000d4274 == DAT_000d42c0) {
LAB_000168a4:
                uVar7 = DAT_0003013c;
                pcVar21 = DAT_000161fc;
                puVar18 = DAT_000161f8;
                if (DAT_000441e4 == 0) {
                  if (local_58 == 0 && DAT_000441e0 == 0) {
                    pcVar23 = *(code **)(DAT_000161f8 + 0x30c);
                    pcVar21[0] = '\n';
                    pcVar21[1] = '\0';
                    (*pcVar23)(&DAT_000441a0,pcVar21,1);
LAB_000171f4:
                    FUN_00019788();
                    goto LAB_00016004;
                  }
                }
                else if (DAT_000d42ac == (void *)0x0) {
                  if (DAT_000441e0 == 0) {
                    *(undefined4 *)DAT_000161fc = DAT_00030138;
                    pcVar21[4] = (char)uVar7;
                    (**(code **)(puVar18 + 0x30c))(&DAT_000441a0,pcVar21,4);
                  }
                }
                else {
                  uVar20 = (uint)DAT_000d42cc;
                  if (3 < uVar20) {
                    uVar22 = 0;
                    pvVar24 = DAT_000d42ac;
LAB_00016964:
                    pcVar26 = (char *)(uVar20 - 4);
                    uVar25 = FUN_0001b8b4(pvVar24);
                    pcVar21 = (char *)FUN_0001b8b4((int)pvVar24 + 2);
                    if (pcVar26 < pcVar21) {
                      pcVar23 = *(code **)(DAT_0001800c + 0x30c);
                      if (DAT_000441e0 != 0) {
                        uVar7 = FUN_000152ec(DAT_00018018,DAT_00018014);
                        iVar6 = sprintf(DAT_00018004,"%-22s ",uVar7);
                        (*pcVar23)(&DAT_000441a0,DAT_00018004,iVar6,1);
                        pcVar23 = *(code **)(DAT_0001800c + 0x30c);
                      }
                      local_4c = 2;
                      pcVar15 = DAT_0001803c;
LAB_00017ae4:
                      iVar6 = sprintf(DAT_00018004,pcVar15,pcVar21,pcVar26);
                      (*pcVar23)(&DAT_000441a0,DAT_00018004,iVar6,1);
                      local_58 = local_4c;
                      goto LAB_00016bd0;
                    }
                    if (uVar25 != 0x4453) {
                      if (uVar25 < 0x4454) {
                        if (uVar25 == 0xc) {
                          iVar11 = FUN_0001b8c4((int)pvVar24 + 4);
                          iVar19 = FUN_00012ee8(0,(int)pvVar24 + 8,pcVar21 + -4);
                          uVar9 = s_bad_CRC_for_extended_attributes_00030164._12_4_;
                          uVar8 = s_bad_CRC_for_extended_attributes_00030164._8_4_;
                          uVar7 = s_bad_CRC_for_extended_attributes_00030164._4_4_;
                          iVar6 = DAT_000161e4;
                          if (iVar11 != iVar19) {
                            pcVar23 = *(code **)(fileno + DAT_000161e4 + 4);
                            *(undefined4 *)(DAT_000161e4 + 0xd0) =
                                 s_bad_CRC_for_extended_attributes_00030164._0_4_;
                            *(undefined4 *)(iVar6 + 0xd4) = uVar7;
                            *(undefined4 *)(iVar6 + 0xd8) = uVar8;
                            *(undefined4 *)(iVar6 + 0xdc) = uVar9;
                            uVar2 = ram0x00030184;
                            uVar9 = s_bad_CRC_for_extended_attributes_00030164._28_4_;
                            uVar8 = s_bad_CRC_for_extended_attributes_00030164._24_4_;
                            uVar7 = s_bad_CRC_for_extended_attributes_00030164._20_4_;
                            *(undefined4 *)(iVar6 + 0xe0) =
                                 s_bad_CRC_for_extended_attributes_00030164._16_4_;
                            *(undefined4 *)(iVar6 + 0xe4) = uVar7;
                            *(undefined4 *)(iVar6 + 0xe8) = uVar8;
                            *(undefined4 *)(iVar6 + 0xec) = uVar9;
                            *(short *)(iVar6 + 0xf0) = (short)uVar2;
                            (*pcVar23)(&DAT_000441a0,iVar6 + 0xd0,0x21,1);
                          }
                        }
                        else if ((uVar25 == 0x334d) || (uVar25 == 9)) goto LAB_000169b4;
                      }
                      else if (((uVar25 == 0x6542) || (uVar25 == 0x7441)) || (uVar25 == 0x4c41)) {
LAB_000169b4:
                        if (uVar25 == 0x4c41) {
LAB_00017368:
                          uVar22 = 4;
                        }
                        else {
                          if (0x4c41 < uVar25) {
                            if ((uVar25 == 0x6542) || (uVar25 == 0x7441)) {
                              if ((pcVar21 < (char *)0x5) ||
                                 (((*(byte *)((int)pvVar24 + 8) & 1) == 0 ||
                                  (pcVar26 = (char *)FUN_0001b8c4((int)pvVar24 + 4),
                                  pcVar26 != pcVar21 + -5)))) {
                                uVar22 = 5;
                                goto LAB_000169e4;
                              }
LAB_00017a44:
                              uVar22 = 0;
                            }
                            else {
LAB_0001735c:
                              if (3 < uVar22) goto LAB_000169e4;
                            }
                            goto LAB_0001694c;
                          }
                          if (uVar25 == 9) goto LAB_00017368;
                          if (uVar25 != 0x334d) goto LAB_0001735c;
                          if ((((char *)0xd < pcVar21) &&
                              (uVar22 = FUN_0001b8b4((int)pvVar24 + 8), (uVar22 & 4) != 0)) &&
                             (pcVar26 = (char *)FUN_0001b8c4((int)pvVar24 + 4),
                             pcVar26 == pcVar21 + -0xe)) goto LAB_00017a44;
                          uVar22 = 0xe;
                        }
LAB_000169e4:
                        local_4c = FUN_00015d70(pvVar24,pcVar21,uVar22);
                        if (local_4c != 0) {
                          pcVar23 = *(code **)(DAT_000161f8 + 0x30c);
                          if (DAT_000441e0 != 0) {
                            uVar7 = FUN_000152ec(DAT_00018018,DAT_00018014);
                            iVar6 = sprintf(DAT_00018004,"%-22s ",uVar7);
                            (*pcVar23)(&DAT_000441a0,DAT_00018004,iVar6,1);
                            pcVar23 = *(code **)(DAT_0001800c + 0x30c);
                          }
                          uVar9 = s_invalid_compressed_data_for_EAs_00030188._12_4_;
                          uVar8 = s_invalid_compressed_data_for_EAs_00030188._8_4_;
                          uVar7 = s_invalid_compressed_data_for_EAs_00030188._4_4_;
                          iVar6 = DAT_000161e4;
                          if ((int)local_4c < 8) {
                            if (5 < (int)local_4c) goto LAB_00017eb4;
                            if (local_4c != 2) goto LAB_00017ce4;
                            *(undefined4 *)(DAT_000161e4 + 0xd0) =
                                 s_invalid_compressed_data_for_EAs_00030188._0_4_;
                            *(undefined4 *)(iVar6 + 0xd4) = uVar7;
                            *(undefined4 *)(iVar6 + 0xd8) = uVar8;
                            *(undefined4 *)(iVar6 + 0xdc) = uVar9;
                            uVar2 = ram0x000301a8;
                            uVar9 = s_invalid_compressed_data_for_EAs_00030188._28_4_;
                            uVar8 = s_invalid_compressed_data_for_EAs_00030188._24_4_;
                            uVar7 = s_invalid_compressed_data_for_EAs_00030188._20_4_;
                            *(undefined4 *)(iVar6 + 0xe0) =
                                 s_invalid_compressed_data_for_EAs_00030188._16_4_;
                            *(undefined4 *)(iVar6 + 0xe4) = uVar7;
                            *(undefined4 *)(iVar6 + 0xe8) = uVar8;
                            *(undefined4 *)(iVar6 + 0xec) = uVar9;
                            *(short *)(iVar6 + 0xf0) = (short)uVar2;
                            (*pcVar23)(&DAT_000441a0,iVar6 + 0xd0,0x21,1);
                            FUN_00019788();
                            local_58 = local_4c;
                            goto LAB_00016bd4;
                          }
                          if (local_4c == 0x4f) {
                            pcVar21 = pcVar21 + (-6 - uVar22);
                            pcVar26 = "\n";
                            pcVar15 = DAT_00018050;
                            goto LAB_00017ae4;
                          }
                          goto LAB_00017ce4;
                        }
                      }
LAB_0001694c:
                      uVar20 = (uVar20 - (int)pcVar21) - 4;
                      pvVar24 = (void *)((int)pvVar24 + (int)(pcVar21 + 4));
                      if (uVar20 < 4) goto LAB_00017b18;
                      goto LAB_00016964;
                    }
                    if (pcVar21 < (char *)0x5) {
                      if (DAT_000441e0 != 0) {
                        local_4c = 0x4f;
LAB_00017e74:
                        pcVar23 = *(code **)(DAT_0001800c + 0x30c);
                        uVar7 = FUN_000152ec(DAT_00018018,DAT_00018014);
                        iVar6 = sprintf(DAT_00018004,"%-22s ",uVar7);
                        (*pcVar23)(&DAT_000441a0,DAT_00018004,iVar6,1);
                        goto LAB_000172d4;
                      }
LAB_00017e40:
                      local_58 = 0x4f;
                      pcVar23 = *(code **)(DAT_0001800c + 0x30c);
                      iVar6 = sprintf(DAT_00018004,DAT_0001804c,pcVar21 + -0xb,"\n");
                    }
                    else {
                      uVar25 = (uint)*(byte *)((int)pvVar24 + 8);
                      if (uVar25 == 0) {
                        local_4c = FUN_00015d70(pvVar24,pcVar21,5);
                        if (local_4c == 0) goto LAB_0001694c;
                        if (DAT_000441e0 != 0) goto LAB_00017e74;
LAB_000172d4:
                        uVar9 = s_invalid_compressed_data_for_EAs_00030188._12_4_;
                        uVar8 = s_invalid_compressed_data_for_EAs_00030188._8_4_;
                        uVar7 = s_invalid_compressed_data_for_EAs_00030188._4_4_;
                        iVar6 = DAT_00018010;
                        pcVar23 = *(code **)(DAT_0001800c + 0x30c);
                        if ((int)local_4c < 8) {
                          if (5 < (int)local_4c) {
LAB_00017eb4:
                            uVar9 = s_out_of_memory_while_inflating_EA_00030288._12_4_;
                            uVar8 = s_out_of_memory_while_inflating_EA_00030288._8_4_;
                            uVar7 = s_out_of_memory_while_inflating_EA_00030288._4_4_;
                            iVar6 = DAT_00018010;
                            *(undefined4 *)(DAT_00018010 + 0xd0) =
                                 s_out_of_memory_while_inflating_EA_00030288._0_4_;
                            *(undefined4 *)(iVar6 + 0xd4) = uVar7;
                            *(undefined4 *)(iVar6 + 0xd8) = uVar8;
                            *(undefined4 *)(iVar6 + 0xdc) = uVar9;
                            uVar2 = s_out_of_memory_while_inflating_EA_00030288._32_4_;
                            uVar9 = s_out_of_memory_while_inflating_EA_00030288._28_4_;
                            uVar8 = s_out_of_memory_while_inflating_EA_00030288._24_4_;
                            uVar7 = s_out_of_memory_while_inflating_EA_00030288._20_4_;
                            *(undefined4 *)(iVar6 + 0xe0) =
                                 s_out_of_memory_while_inflating_EA_00030288._16_4_;
                            *(undefined4 *)(iVar6 + 0xe4) = uVar7;
                            *(undefined4 *)(iVar6 + 0xe8) = uVar8;
                            *(undefined4 *)(iVar6 + 0xec) = uVar9;
                            *(undefined4 *)(iVar6 + 0xf0) = uVar2;
                            (*pcVar23)(&DAT_000441a0,iVar6 + 0xd0,0x23,1);
                            FUN_00019788();
                            local_58 = local_4c;
                            goto LAB_00016bd4;
                          }
                          if (local_4c == 2) {
                            local_58 = local_4c;
                            *(undefined4 *)(DAT_00018010 + 0xd0) =
                                 s_invalid_compressed_data_for_EAs_00030188._0_4_;
                            *(undefined4 *)(iVar6 + 0xd4) = uVar7;
                            *(undefined4 *)(iVar6 + 0xd8) = uVar8;
                            *(undefined4 *)(iVar6 + 0xdc) = uVar9;
                            uVar2 = ram0x000301a8;
                            uVar9 = s_invalid_compressed_data_for_EAs_00030188._28_4_;
                            uVar8 = s_invalid_compressed_data_for_EAs_00030188._24_4_;
                            uVar7 = s_invalid_compressed_data_for_EAs_00030188._20_4_;
                            *(undefined4 *)(iVar6 + 0xe0) =
                                 s_invalid_compressed_data_for_EAs_00030188._16_4_;
                            *(undefined4 *)(iVar6 + 0xe4) = uVar7;
                            *(undefined4 *)(iVar6 + 0xe8) = uVar8;
                            *(undefined4 *)(iVar6 + 0xec) = uVar9;
                            *(short *)(iVar6 + 0xf0) = (short)uVar2;
                            (*pcVar23)(&DAT_000441a0,iVar6 + 0xd0,0x21,1);
                            goto LAB_00016bd0;
                          }
                        }
                        else {
                          if (local_4c == 0x4f) goto LAB_00017e40;
                          if (local_4c == 0x4001) {
                            uVar25 = (uint)*(byte *)((int)pvVar24 + 8);
                            goto LAB_00017df0;
                          }
                        }
LAB_00017ce4:
                        uVar4 = s_unknown_error_on_extended_attrib_00030260._12_4_;
                        uVar3 = s_unknown_error_on_extended_attrib_00030260._8_4_;
                        uVar2 = s_unknown_error_on_extended_attrib_00030260._4_4_;
                        uVar9 = s_bad_CRC_for_extended_attributes_00030164._12_4_;
                        uVar8 = s_bad_CRC_for_extended_attributes_00030164._8_4_;
                        uVar7 = s_bad_CRC_for_extended_attributes_00030164._4_4_;
                        iVar6 = DAT_00018010;
                        if ((char)local_4c == '\x02') {
                          if (((int)local_4c >> 8 & 0xffffU) == 8) {
                            *(undefined4 *)(DAT_00018010 + 0xd0) =
                                 s_bad_CRC_for_extended_attributes_00030164._0_4_;
                            *(undefined4 *)(iVar6 + 0xd4) = uVar7;
                            *(undefined4 *)(iVar6 + 0xd8) = uVar8;
                            *(undefined4 *)(iVar6 + 0xdc) = uVar9;
                            uVar2 = ram0x00030184;
                            uVar9 = s_bad_CRC_for_extended_attributes_00030164._28_4_;
                            uVar8 = s_bad_CRC_for_extended_attributes_00030164._24_4_;
                            uVar7 = s_bad_CRC_for_extended_attributes_00030164._20_4_;
                            *(undefined4 *)(iVar6 + 0xe0) =
                                 s_bad_CRC_for_extended_attributes_00030164._16_4_;
                            *(undefined4 *)(iVar6 + 0xe4) = uVar7;
                            *(undefined4 *)(iVar6 + 0xe8) = uVar8;
                            *(undefined4 *)(iVar6 + 0xec) = uVar9;
                            *(short *)(iVar6 + 0xf0) = (short)uVar2;
                            (*pcVar23)(&DAT_000441a0,iVar6 + 0xd0,0x21,1);
                          }
                          else {
                            iVar6 = sprintf(DAT_00018004,DAT_00018054,(int)local_4c >> 8 & 0xffff);
                            (*pcVar23)(&DAT_000441a0,DAT_00018004,iVar6,1);
                          }
                        }
                        else {
                          *(undefined4 *)(DAT_00018010 + 0xd0) =
                               s_unknown_error_on_extended_attrib_00030260._0_4_;
                          *(undefined4 *)(iVar6 + 0xd4) = uVar2;
                          *(undefined4 *)(iVar6 + 0xd8) = uVar3;
                          *(undefined4 *)(iVar6 + 0xdc) = uVar4;
                          uVar9 = s_unknown_error_on_extended_attrib_00030260._28_4_;
                          uVar8 = s_unknown_error_on_extended_attrib_00030260._24_4_;
                          uVar7 = s_unknown_error_on_extended_attrib_00030260._20_4_;
                          *(undefined4 *)(iVar6 + 0xe0) =
                               s_unknown_error_on_extended_attrib_00030260._16_4_;
                          *(undefined4 *)(iVar6 + 0xe4) = uVar7;
                          *(undefined4 *)(iVar6 + 0xe8) = uVar8;
                          *(undefined4 *)(iVar6 + 0xec) = uVar9;
                          uVar7 = ram0x00030284;
                          *(undefined4 *)(iVar6 + 0xf0) =
                               s_unknown_error_on_extended_attrib_00030260._32_4_;
                          *(short *)(iVar6 + 0xf4) = (short)uVar7;
                          *(char *)(iVar6 + 0xf6) = (char)((uint)uVar7 >> 0x10);
                          (*pcVar23)(&DAT_000441a0,DAT_00018004,0x26,1);
                        }
                        if ((int)local_58 < (int)local_4c) {
                          local_58 = local_4c;
                        }
                        goto LAB_00017088;
                      }
                      if (DAT_000441e0 != 0) {
                        local_4c = 0x4001;
                        goto LAB_00017e74;
                      }
LAB_00017df0:
                      local_58 = 1;
                      pcVar23 = *(code **)(DAT_0001800c + 0x30c);
                      iVar6 = sprintf(DAT_00018004,DAT_00018048,uVar25);
                    }
                    (*pcVar23)(&DAT_000441a0,DAT_00018004,iVar6,1);
                    goto LAB_00016bd0;
                  }
LAB_00017b18:
                  uVar7 = DAT_0003013c;
                  iVar6 = DAT_0001800c;
                  pcVar21 = DAT_00018004;
                  if (DAT_000441e0 == 0) {
                    *(undefined4 *)DAT_00018004 = DAT_00030138;
                    pcVar21[4] = (char)uVar7;
                    (**(code **)(iVar6 + 0x30c))(&DAT_000441a0,pcVar21,4);
                  }
                  if ((int)local_58 < 0) goto LAB_000171f4;
                }
LAB_00017088:
                FUN_00019788();
                if (local_58 == 0) goto LAB_00016004;
              }
              else {
LAB_000166fc:
                pcVar23 = *(code **)(DAT_000161f8 + 0x30c);
                if (DAT_000441e0 != 0) {
                  uVar7 = FUN_000152ec(DAT_000161f0,DAT_000161e8);
                  iVar6 = sprintf(DAT_000161fc,"%-22s ",uVar7);
                  (*pcVar23)(&DAT_000441a0,DAT_000161fc,iVar6,0x401);
                  pcVar23 = *(code **)(DAT_000161f8 + 0x30c);
                }
                sprintf(DAT_000161fc,DAT_000161b0,DAT_000d4274,DAT_000d42c0);
                (*pcVar23)(&DAT_000441a0,DAT_000161fc,0x28,0x401);
                uVar9 = s__may_instead_be_incorrect_passwo_000301f0._12_4_;
                uVar8 = s__may_instead_be_incorrect_passwo_000301f0._8_4_;
                uVar7 = s__may_instead_be_incorrect_passwo_000301f0._4_4_;
                iVar6 = DAT_000161e4;
                if ((*(byte *)(*(int *)(DAT_000161e4 + 0xcc) + 0x18) & 1) == 0) {
                  FUN_00019788();
                  local_58 = 2;
                }
                else {
                  local_58 = 2;
                  pcVar23 = *(code **)(fileno + DAT_000161e4 + 4);
                  *(undefined4 *)(DAT_000161e4 + 0xd0) =
                       s__may_instead_be_incorrect_passwo_000301f0._0_4_;
                  *(undefined4 *)(iVar6 + 0xd4) = uVar7;
                  *(undefined4 *)(iVar6 + 0xd8) = uVar8;
                  *(undefined4 *)(iVar6 + 0xdc) = uVar9;
                  uVar9 = s__may_instead_be_incorrect_passwo_000301f0._28_4_;
                  uVar8 = s__may_instead_be_incorrect_passwo_000301f0._24_4_;
                  uVar7 = s__may_instead_be_incorrect_passwo_000301f0._20_4_;
                  *(undefined4 *)(iVar6 + 0xe0) = s__may_instead_be_incorrect_passwo_000301f0._16_4_
                  ;
                  *(undefined4 *)(iVar6 + 0xe4) = uVar7;
                  *(undefined4 *)(iVar6 + 0xe8) = uVar8;
                  *(undefined4 *)(iVar6 + 0xec) = uVar9;
                  uVar8 = ram0x00030218;
                  uVar7 = s__may_instead_be_incorrect_passwo_000301f0._36_4_;
                  *(undefined4 *)(iVar6 + 0xf0) = s__may_instead_be_incorrect_passwo_000301f0._32_4_
                  ;
                  *(undefined4 *)(iVar6 + 0xf4) = uVar7;
                  *(char *)(iVar6 + 0xf8) = (char)uVar8;
                  (*pcVar23)(&DAT_000441a0,iVar6 + 0xd0,0x28,0x401);
                  FUN_00019788();
                }
              }
              goto LAB_00016bd4;
            }
            local_58 = 0x32;
            pcVar23 = *(code **)(DAT_000161f8 + 0x30c);
            uVar7 = FUN_000152ec(DAT_000161f0,DAT_000161e8);
            iVar6 = sprintf(DAT_000161fc,DAT_000161ec,uVar7);
            uVar7 = 0x421;
LAB_00016bc0:
            (*pcVar23)(&DAT_000441a0,DAT_000161fc,iVar6,uVar7);
          }
          else {
LAB_000166d0:
            if (_DAT_000d4388 != 0) goto LAB_000166dc;
LAB_00016888:
            if ((int)local_58 < 2) {
              if (DAT_000d4274 != DAT_000d42c0) goto LAB_000166fc;
              goto LAB_000168a4;
            }
          }
LAB_00016bd0:
          FUN_00019788();
        }
        else {
          if (DAT_000d42b8 == 0) {
            DAT_000d43a0 = DAT_000d42b8;
LAB_00016c20:
            if (DAT_000441b4 != 0) {
              DAT_000d43ac = stdout;
              goto LAB_000165d0;
            }
          }
          else {
            DAT_000d43a0 = 1;
          }
          iVar6 = FUN_00019470();
          if (iVar6 == 0) goto LAB_000165d0;
          local_58 = 0x32;
        }
LAB_00016bd4:
        if ((int)local_64 < (int)local_58) {
          local_64 = local_58;
        }
        if (1 < _DAT_000d4388) {
          return local_64;
        }
      }
LAB_00016004:
      iVar28 = iVar28 + 1;
      puVar27 = puVar27 + 8;
    } while (param_1 != iVar28);
  }
  return local_64;
  while (*(undefined1 *)((int)&DAT_000d43c0 + sVar13 + 3) = 0, sVar13 == 1) {
LAB_00017780:
    uVar8 = ram0x00030224;
    uVar7 = s_new_name__0003021c._4_4_;
    iVar6 = DAT_00018010;
    *(undefined4 *)(DAT_00018010 + 0xd0) = s_new_name__0003021c._0_4_;
    *(undefined4 *)(iVar6 + 0xd4) = uVar7;
    *(short *)(iVar6 + 0xd8) = (short)uVar8;
    *(char *)(iVar6 + 0xda) = (char)((uint)uVar8 >> 0x10);
    (**(code **)(fileno + iVar6 + 4))(&DAT_000441a0,DAT_00018004,10,0x81);
    fgets(pcVar26,0x1000,stdin);
    sVar13 = strlen(pcVar26);
    pcVar21 = (char *)FUN_0001bb2c(pcVar26,sVar13);
    if (*pcVar21 != '\n') {
      if (sVar13 != 0) break;
      goto LAB_00017780;
    }
  }
  uVar22 = 1;
  iVar6 = *(int *)(DAT_00018010 + 0xcc);
  goto LAB_000164a0;
}



/* ===== FUN_00018058 @ 00018058 size=3700 ===== */

/* WARNING: Type propagation algorithm not settling */

int FUN_00018058(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  FILE *__stream;
  size_t sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  size_t *psVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar13;
  undefined4 uVar14;
  code *pcVar15;
  uint uVar16;
  undefined4 uVar17;
  size_t sVar18;
  int *piVar19;
  void *__ptr;
  int iVar20;
  __off_t _Var21;
  char *__filename;
  uint uVar22;
  bool bVar23;
  int local_5c;
  int local_58;
  int local_54;
  void *local_50;
  int local_4c;
  void *local_48;
  int local_44;
  int local_3c;
  int local_38;
  undefined4 local_34;
  size_t local_30;
  undefined4 *local_2c [2];
  undefined4 *puVar12;
  
  iVar7 = DAT_00018ecc;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c[0] = (undefined4 *)0x0;
  if (*(int *)(DAT_00018ecc + 0xd0) == 0) {
    iVar13 = FUN_00012d98();
    *(int *)(iVar7 + 0xd0) = iVar13;
    if (iVar13 == 0) {
      return 4;
    }
  }
  if ((DAT_000441a0 != 0) && (DAT_0004423c != 0)) {
    DAT_00044238 = (uint)(DAT_000441c0 == 0);
    iVar13 = FUN_00029f38(DAT_000441a0,0);
    if (0x200 < iVar13) {
      if (iVar13 == 0xa00) {
        return 4;
      }
      return 2;
    }
  }
  uVar22 = DAT_00044228;
  uVar14 = DAT_00018ed0;
  bVar23 = DAT_00044228 == 0;
  *(undefined4 *)(iVar7 + 0x1e4) = 0;
  DAT_00044240 = 1;
  *(undefined4 *)(DAT_00018ed4 + 0xcc) = uVar14;
  if ((bVar23) || (local_48 = calloc(uVar22 << 2,1), local_48 == (void *)0x0)) {
    local_48 = (void *)0x0;
  }
  if ((DAT_0004422c == 0) || (local_50 = calloc(DAT_0004422c << 2,1), local_50 == (void *)0x0)) {
    local_50 = (void *)0x0;
  }
  local_58 = 0;
  uVar22 = 0;
  iVar13 = 0;
  local_44 = 0;
  local_4c = 0;
  do {
    iVar20 = 0;
    do {
      pcVar9 = DAT_00018ed8;
      *(undefined4 **)(DAT_00018ed4 + 0xcc) = &DAT_0004426c + iVar20 * 8;
      iVar3 = FUN_00019870(pcVar9,4);
      iVar6 = DAT_00018edc;
      if (iVar3 == 0) {
        iVar13 = 0x33;
        local_54 = 1;
        break;
      }
      if ((((*DAT_00018ed8 != DAT_00044160) || (*DAT_00018eec != *DAT_00018ef0)) ||
          (*DAT_00018ef4 != DAT_00018ef0[1])) || (DAT_00018ef4[1] != DAT_00018ef0[2])) {
        if (*(int *)(iVar7 + 0x170) == 0) {
          if (*(uint *)(iVar7 + 0x168) == (uVar22 & 0xffff)) {
            pcVar9 = &DAT_00044158;
            goto LAB_00018170;
          }
        }
        else if (*(uint *)(iVar7 + 0x168) == uVar22) {
          pcVar9 = &DAT_00044154;
LAB_00018170:
          if ((((*DAT_00018ed8 == *pcVar9) && (*DAT_00018eec == pcVar9[1])) &&
              ((*DAT_00018ef4 == pcVar9[2] && (DAT_00018ef4[1] == pcVar9[3])))) ||
             (*(int *)(iVar7 + 0x174) != 0)) {
            local_44 = 0;
          }
          else if (((*DAT_00018ed8 == DAT_00044158) && (*DAT_00018eec == DAT_00044159)) &&
                  ((*DAT_00018ef4 == DAT_0004415a && (DAT_00018ef4[1] == DAT_0004415b)))) {
            local_44 = 0;
          }
          else {
            local_44 = 1;
          }
          local_54 = 1;
          break;
        }
        pcVar15 = *(code **)(DAT_00018edc + 0x30c);
        iVar13 = sprintf(DAT_00018ee0,
                         "error:  expected central file header signature not found (file #%lu).\n",
                         iVar20 + local_4c * 0x4000 + 1);
        local_54 = 1;
        (*pcVar15)(iVar6 + -0x91000,DAT_00018ee0,iVar13,0x401);
        pcVar15 = *(code **)(iVar6 + 0x30c);
        iVar13 = sprintf(DAT_00018ee0,
                         "  (please check that you have transferred or created the zipfile in the\n  appropriate BINARY mode and that you have compiled UnZip properly)\n"
                        );
        (*pcVar15)(iVar6 + -0x91000,DAT_00018ee0,iVar13,0x401);
        iVar13 = 3;
        break;
      }
      iVar6 = FUN_00023978();
      if (iVar6 != 0) {
        local_54 = 1;
        iVar13 = iVar6;
        break;
      }
      iVar3 = FUN_0001b094(*(undefined2 *)(iVar7 + 0x154),2);
      if (iVar3 != 0) {
        if (iVar13 < iVar3) {
          iVar13 = iVar3;
        }
        if (iVar3 < 2) goto LAB_00018490;
        pcVar15 = *(code **)(DAT_00018edc + 0x30c);
        uVar14 = FUN_000152ec(DAT_00018ef8,DAT_00018ee4);
        pcVar9 = DAT_00018efc;
LAB_00018608:
        iVar6 = sprintf(DAT_00018ee0,pcVar9,uVar14,"central");
        uVar14 = 0x401;
LAB_0001861c:
        local_54 = 1;
        (*pcVar15)(&DAT_000441a0,DAT_00018ee0,iVar6,uVar14);
        break;
      }
LAB_00018490:
      iVar3 = FUN_0001b094(*(undefined2 *)(iVar7 + 0x156),3);
      if (iVar3 != 0) {
        if (iVar13 < iVar3) {
          iVar13 = iVar3;
        }
        if (1 < iVar3) {
          pcVar15 = *(code **)(DAT_00018edc + 0x30c);
          uVar14 = FUN_000152ec(DAT_00018ef8,DAT_00018ee4);
          pcVar9 = DAT_00018f00;
          goto LAB_00018608;
        }
      }
      iVar3 = FUN_0001b094(*(undefined2 *)(iVar7 + 0x158),0);
      uVar14 = DAT_00018ef8;
      if (iVar3 != 0) {
        if (iVar13 < iVar3) {
          iVar13 = iVar3;
        }
        if (1 < iVar3) {
          pcVar15 = *(code **)(DAT_00018edc + 0x30c);
          uVar14 = FUN_000152ec(DAT_00018ef8,DAT_00018ee4);
          iVar6 = sprintf(DAT_00018ee0,DAT_00018f08,uVar14);
          uVar14 = 0x421;
          goto LAB_0001861c;
        }
      }
      if (DAT_00044230 == 0) {
        if (DAT_00044228 == 0) {
LAB_00018540:
          uVar14 = DAT_00018ef8;
          if (DAT_0004422c != 0) {
            uVar16 = 0;
            do {
              iVar3 = uVar16 * 4;
              iVar5 = uVar16 * 4;
              uVar16 = uVar16 + 1;
              iVar5 = FUN_00021b04(uVar14,*(undefined4 *)(DAT_00044258 + iVar5),DAT_000441b8);
              if (iVar5 != 0) {
                if (local_50 != (void *)0x0) {
                  *(undefined4 *)((int)local_50 + iVar3) = 1;
                }
                goto LAB_00018598;
              }
            } while (uVar16 < DAT_0004422c);
          }
          goto LAB_000185a8;
        }
        uVar16 = 0;
        do {
          iVar3 = uVar16 * 4;
          iVar5 = uVar16 * 4;
          uVar16 = uVar16 + 1;
          iVar5 = FUN_00021b04(uVar14,*(undefined4 *)(DAT_00044254 + iVar5),DAT_000441b8);
          if (iVar5 != 0) {
            if (local_48 != (void *)0x0) {
              *(undefined4 *)((int)local_48 + iVar3) = 1;
            }
            goto LAB_00018540;
          }
        } while (uVar16 < DAT_00044228);
      }
      else {
LAB_000185a8:
        iVar3 = FUN_000155c4();
        if (iVar3 == 0) {
          local_58 = local_58 + 1;
        }
        else {
          iVar20 = iVar20 + 1;
        }
      }
LAB_00018598:
      uVar22 = uVar22 + 1;
      local_54 = iVar6;
    } while (iVar20 != 0x4000);
    psVar8 = &local_30;
    _Var21 = *(__off_t *)(iVar7 + 0x104);
    uVar17 = *(undefined4 *)(iVar7 + 0xdc);
    uVar14 = *(undefined4 *)(iVar7 + 0xe0);
    iVar20 = FUN_00015dec(iVar20,&local_3c,&local_38,&local_34,psVar8,local_2c,iVar13);
    if (iVar20 != 0) {
      if (iVar13 < iVar20) {
        iVar13 = iVar20;
      }
      if ((1 < *(int *)(iVar7 + 0x1e8)) || (iVar13 == 0x50)) {
        local_54 = 0;
        break;
      }
    }
    local_4c = local_4c + 1;
    _Var21 = lseek(*(int *)(iVar7 + 0xfc),_Var21,0);
    *(__off_t *)(iVar7 + 0x104) = _Var21;
    read(*(int *)(iVar7 + 0xfc),*(void **)(iVar7 + 0xd8),0x2000);
    *(undefined4 *)(iVar7 + 0xdc) = uVar17;
    *(undefined4 *)(iVar7 + 0xe0) = uVar14;
  } while (local_54 == 0);
  uVar1 = s_finishing_deferred_symbolic_link_000302d4._12_4_;
  uVar17 = s_finishing_deferred_symbolic_link_000302d4._8_4_;
  uVar14 = s_finishing_deferred_symbolic_link_000302d4._4_4_;
  iVar20 = DAT_00018ed4;
  if (*(int *)(iVar7 + 0x208) != 0) {
    if (DAT_000441e0 == 0) {
      pcVar15 = *(code **)(fileno + DAT_00018ed4 + 4);
      *(undefined4 *)(DAT_00018ed4 + 0xd0) = s_finishing_deferred_symbolic_link_000302d4._0_4_;
      *(undefined4 *)(iVar20 + 0xd4) = uVar14;
      *(undefined4 *)(iVar20 + 0xd8) = uVar17;
      *(undefined4 *)(iVar20 + 0xdc) = uVar1;
      uVar2 = s_finishing_deferred_symbolic_link_000302d4._32_4_;
      uVar1 = s_finishing_deferred_symbolic_link_000302d4._28_4_;
      uVar17 = s_finishing_deferred_symbolic_link_000302d4._24_4_;
      uVar14 = s_finishing_deferred_symbolic_link_000302d4._20_4_;
      *(undefined4 *)(iVar20 + 0xe0) = s_finishing_deferred_symbolic_link_000302d4._16_4_;
      *(undefined4 *)(iVar20 + 0xe4) = uVar14;
      *(undefined4 *)(iVar20 + 0xe8) = uVar17;
      *(undefined4 *)(iVar20 + 0xec) = uVar1;
      *(undefined4 *)(iVar20 + 0xf0) = uVar2;
      (*pcVar15)(iVar20 + -0x80000,iVar20 + 0xd0,0x23,0);
    }
    iVar20 = *(int *)(iVar7 + 0x204);
    while (iVar20 != 0) {
      sVar18 = *(size_t *)(iVar20 + 4);
      __filename = *(char **)(iVar20 + 0x10);
      pcVar9 = malloc(sVar18 + 1);
      if (pcVar9 == (char *)0x0) {
        pcVar15 = *(code **)(DAT_00018edc + 0x30c);
        uVar14 = FUN_000152ec(__filename,DAT_00018ee4);
        iVar20 = sprintf(DAT_00018ee0,DAT_00018f04,uVar14);
        (*pcVar15)(&DAT_000441a0,DAT_00018ee0,iVar20,0x201);
      }
      else {
        pcVar9[sVar18] = '\0';
        __stream = fopen(__filename,"rb");
        *(FILE **)(iVar7 + 0x20c) = __stream;
        if (((__stream == (FILE *)0x0) ||
            (sVar4 = fread(pcVar9,1,sVar18 + 1,__stream), sVar18 != sVar4)) ||
           (iVar6 = strcmp(*(char **)(iVar20 + 0xc),pcVar9), iVar6 != 0)) {
          pcVar15 = *(code **)(DAT_00018edc + 0x30c);
          uVar14 = FUN_000152ec(__filename,DAT_00018ee4);
          iVar20 = sprintf(DAT_00018ee0,DAT_00018ee8,uVar14);
          (*pcVar15)(&DAT_000441a0,DAT_00018ee0,iVar20,0x201);
          free(pcVar9);
          if (*(FILE **)(iVar7 + 0x20c) != (FILE *)0x0) {
            fclose(*(FILE **)(iVar7 + 0x20c));
          }
        }
        else {
          fclose(*(FILE **)(iVar7 + 0x20c));
          unlink(__filename);
          if (DAT_000441e0 == 0) {
            pcVar15 = *(code **)(DAT_00018edc + 0x30c);
            uVar14 = FUN_000152ec(__filename,DAT_00018ee4);
            uVar17 = FUN_000152ec(pcVar9,DAT_00018f10);
            iVar6 = sprintf(DAT_00018ee0,DAT_00018f14,uVar14,uVar17);
            (*pcVar15)(&DAT_000441a0,DAT_00018ee0,iVar6,0);
          }
          iVar6 = symlink(pcVar9,__filename);
          if (iVar6 != 0) {
            perror("symlink error");
          }
          free(pcVar9);
          FUN_0002ae60(iVar20);
        }
      }
      puVar10 = *(undefined4 **)(iVar7 + 0x204);
      uVar14 = *puVar10;
      *(undefined4 **)(iVar7 + 0x208) = puVar10;
      *(undefined4 *)(iVar7 + 0x204) = uVar14;
      free(puVar10);
      iVar20 = *(int *)(iVar7 + 0x204);
    }
    *(undefined4 *)(iVar7 + 0x208) = 0;
  }
  sVar18 = local_30;
  if (local_30 != 0) {
    puVar10 = malloc(local_30 * 4);
    uVar1 = s_warning__cannot_alloc_memory_to_s_000302f8._12_4_;
    uVar17 = s_warning__cannot_alloc_memory_to_s_000302f8._8_4_;
    uVar14 = s_warning__cannot_alloc_memory_to_s_000302f8._4_4_;
    iVar20 = DAT_00018ed4;
    if (puVar10 == (undefined4 *)0x0) {
      pcVar15 = *(code **)(fileno + DAT_00018ed4 + 4);
      *(undefined4 *)(DAT_00018ed4 + 0xd0) = s_warning__cannot_alloc_memory_to_s_000302f8._0_4_;
      *(undefined4 *)(iVar20 + 0xd4) = uVar14;
      *(undefined4 *)(iVar20 + 0xd8) = uVar17;
      *(undefined4 *)(iVar20 + 0xdc) = uVar1;
      uVar1 = s_warning__cannot_alloc_memory_to_s_000302f8._28_4_;
      uVar17 = s_warning__cannot_alloc_memory_to_s_000302f8._24_4_;
      uVar14 = s_warning__cannot_alloc_memory_to_s_000302f8._20_4_;
      *(undefined4 *)(iVar20 + 0xe0) = s_warning__cannot_alloc_memory_to_s_000302f8._16_4_;
      *(undefined4 *)(iVar20 + 0xe4) = uVar14;
      *(undefined4 *)(iVar20 + 0xe8) = uVar17;
      *(undefined4 *)(iVar20 + 0xec) = uVar1;
      uVar1 = s_warning__cannot_alloc_memory_to_s_000302f8._44_4_;
      uVar17 = s_warning__cannot_alloc_memory_to_s_000302f8._40_4_;
      uVar14 = s_warning__cannot_alloc_memory_to_s_000302f8._36_4_;
      *(undefined4 *)(iVar20 + 0xf0) = s_warning__cannot_alloc_memory_to_s_000302f8._32_4_;
      *(undefined4 *)(iVar20 + 0xf4) = uVar14;
      *(undefined4 *)(iVar20 + 0xf8) = uVar17;
      *(undefined4 *)(iVar20 + 0xfc) = uVar1;
      uVar17 = s_warning__cannot_alloc_memory_to_s_000302f8._56_4_;
      uVar14 = s_warning__cannot_alloc_memory_to_s_000302f8._52_4_;
      *(undefined4 *)(iVar20 + 0x100) = s_warning__cannot_alloc_memory_to_s_000302f8._48_4_;
      *(undefined4 *)(iVar20 + 0x104) = uVar14;
      *(undefined4 *)(iVar20 + 0x108) = uVar17;
      (*pcVar15)(iVar20 + -0x80000,iVar20 + 0xd0,0x3b,0x401);
      puVar10 = local_2c[0];
      while (local_2c[0] = puVar10, puVar10 != (void *)0x0) {
        local_2c[0] = (undefined4 *)*puVar10;
        free(puVar10);
        puVar10 = local_2c[0];
      }
    }
    else {
      if (sVar18 == 1) {
        *puVar10 = local_2c[0];
      }
      else {
        puVar11 = puVar10;
        do {
          puVar12 = puVar11 + 1;
          *puVar11 = local_2c[0];
          local_2c[0] = (undefined4 *)*local_2c[0];
          puVar11 = puVar12;
        } while (puVar10 + sVar18 != puVar12);
        qsort(puVar10,sVar18,4,(__compar_fn_t)&LAB_000152d8);
        if (local_30 == 0) {
          free(puVar10);
          goto LAB_000186b4;
        }
      }
      puVar11 = puVar10 + -1;
      local_5c = 0;
      uVar22 = 0;
      do {
        puVar11 = puVar11 + 1;
        __ptr = (void *)*puVar11;
        uVar22 = uVar22 + 1;
        iVar20 = FUN_0002b010(__ptr);
        if (iVar20 != 0) {
          local_5c = local_5c + 1;
          pcVar15 = *(code **)(DAT_00018edc + 0x30c);
          iVar6 = sprintf(DAT_00018ee0,DAT_00018f0c,*(undefined4 *)((int)__ptr + 4));
          if (iVar13 == 0) {
            iVar13 = iVar20;
          }
          (*pcVar15)(&DAT_000441a0,DAT_00018ee0,iVar6,0x201);
        }
        free(__ptr);
      } while (uVar22 < local_30);
      free(puVar10);
      iVar20 = DAT_00018edc;
      if (local_5c != 0 && (DAT_000441e4 == 0 && DAT_000441e0 == 0)) {
        pcVar15 = *(code **)(DAT_00018edc + 0x30c);
        iVar6 = sprintf(DAT_00018ee0,DAT_00018f18);
        (*pcVar15)(iVar20 + -0x91000,DAT_00018ee0,iVar6,0);
      }
    }
  }
LAB_000186b4:
  iVar20 = DAT_00018edc;
  if (local_48 != (void *)0x0) {
    if ((local_54 != 0) && (DAT_00044228 != 0)) {
      piVar19 = (int *)((int)local_48 + -4);
      uVar16 = 0;
      uVar22 = DAT_00044228;
      do {
        while (piVar19 = piVar19 + 1, *piVar19 == 0) {
          pcVar15 = *(code **)(iVar20 + 0x30c);
          iVar6 = uVar16 * 4;
          uVar16 = uVar16 + 1;
          iVar6 = sprintf(DAT_00018ee0,"caution: filename not matched:  %s\n",
                          *(undefined4 *)(DAT_00044254 + iVar6));
          (*pcVar15)(&DAT_000441a0,DAT_00018ee0,iVar6,1);
          if (iVar13 < 2) {
            iVar13 = 0xb;
          }
          uVar22 = DAT_00044228;
          if (DAT_00044228 <= uVar16) goto LAB_00018750;
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 < uVar22);
    }
LAB_00018750:
    free(local_48);
  }
  iVar20 = DAT_00018edc;
  if (local_50 != (void *)0x0) {
    if ((local_54 != 0) && (DAT_0004422c != 0)) {
      piVar19 = (int *)((int)local_50 + -4);
      uVar16 = 0;
      uVar22 = DAT_0004422c;
      do {
        while (piVar19 = piVar19 + 1, *piVar19 != 0) {
          uVar16 = uVar16 + 1;
          if (uVar22 <= uVar16) goto LAB_000187ac;
        }
        pcVar15 = *(code **)(iVar20 + 0x30c);
        iVar6 = uVar16 * 4;
        uVar16 = uVar16 + 1;
        iVar6 = sprintf(DAT_00018ee0,"caution: excluded filename not matched:  %s\n",
                        *(undefined4 *)(DAT_00044258 + iVar6));
        (*pcVar15)(&DAT_000441a0,DAT_00018ee0,iVar6,0x401);
        uVar22 = DAT_0004422c;
      } while (uVar16 < DAT_0004422c);
    }
LAB_000187ac:
    free(local_50);
  }
  iVar20 = DAT_00018edc;
  if (local_54 == 0) {
    return iVar13;
  }
  if (local_44 != 0) {
    if (iVar13 == 0) {
      iVar13 = local_44;
    }
    pcVar15 = *(code **)(DAT_00018edc + 0x30c);
    iVar6 = sprintf(DAT_00018ee0,
                    "\nnote:  didn\'t find end-of-central-dir signature at end of central dir.\n");
    (*pcVar15)(iVar20 + -0x91000,DAT_00018ee0,iVar6,0x401);
    pcVar15 = *(code **)(iVar20 + 0x30c);
    iVar6 = sprintf(DAT_00018ee0,
                    "  (please check that you have transferred or created the zipfile in the\n  appropriate BINARY mode and that you have compiled UnZip properly)\n"
                   );
    (*pcVar15)(iVar20 + -0x91000,DAT_00018ee0,iVar6,0x401);
    iVar20 = DAT_00018edc;
  }
  DAT_00018edc = iVar20;
  if ((DAT_000441e4 != 0) && (DAT_000441e0 < 2)) {
    pcVar15 = *(code **)(iVar20 + 0x30c);
    if (iVar13 == 0) {
      iVar6 = local_3c - local_38;
      pcVar9 = DAT_00018f28;
      if ((iVar6 == 0) || ((DAT_00044230 != 0 && (pcVar9 = DAT_00018f30, local_38 + local_58 == 0)))
         ) {
        iVar7 = sprintf(DAT_00018ee0,pcVar9);
        (*pcVar15)(iVar20 + -0x91000,DAT_00018ee0,iVar7,0);
      }
      else {
        psVar8 = (size_t *)0x2c8e0;
        if (iVar6 != 1) {
          psVar8 = (size_t *)0x2ca80;
        }
        iVar7 = sprintf(DAT_00018ee0,DAT_00018f2c,*(undefined4 *)(iVar7 + 0xf8),iVar6,psVar8);
        (*pcVar15)(&DAT_000441a0,DAT_00018ee0,iVar7,0);
      }
    }
    else {
      pcVar9 = "warning-";
      if (iVar13 != 1) {
        pcVar9 = "";
      }
      iVar7 = sprintf(DAT_00018ee0,DAT_00018f1c,pcVar9,*(undefined4 *)(iVar7 + 0xf8));
      (*pcVar15)(iVar20 + -0x91000,DAT_00018ee0,iVar7,0);
    }
    if (local_58 != 0) {
      pcVar9 = "s";
      if (local_58 == 1) {
        pcVar9 = "";
      }
      pcVar15 = *(code **)(iVar20 + 0x30c);
      iVar7 = sprintf(DAT_00018ee0,DAT_00018f20,local_58,pcVar9,psVar8);
      (*pcVar15)(&DAT_000441a0,DAT_00018ee0,iVar7,0);
    }
    if (local_38 == 0) {
      if (local_3c != 0) {
        if (local_58 != 0 && iVar13 < 2) {
          return 0x51;
        }
        return iVar13;
      }
      goto LAB_0001889c;
    }
    pcVar9 = "s";
    if (local_38 == 1) {
      pcVar9 = "";
    }
    pcVar15 = *(code **)(iVar20 + 0x30c);
    iVar7 = sprintf(DAT_00018ee0,DAT_00018f24,local_38,pcVar9,psVar8);
    (*pcVar15)(&DAT_000441a0,DAT_00018ee0,iVar7,0);
  }
  if (local_3c != 0) {
    if (local_38 == local_3c) {
      if (iVar13 < 2) {
        iVar13 = 0x52;
      }
      return iVar13;
    }
    if (local_58 != 0 && iVar13 < 2) {
      return 0x51;
    }
    if (iVar13 == 0 && local_38 != 0) {
      iVar13 = local_54;
    }
    return iVar13;
  }
LAB_0001889c:
  if (1 < iVar13) {
    return iVar13;
  }
  if (local_58 != 0) {
    return 0x51;
  }
  return 0xb;
}



/* ===== FUN_00018f34 @ 00018f34 size=92 ===== */

undefined4 FUN_00018f34(void *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = DAT_00018f90;
  if (param_2 <= *(uint *)(DAT_00018f90 + 0x1e0)) {
    memcpy(*(void **)(DAT_00018f90 + 0x1dc),param_1,param_2);
    *(uint *)(iVar1 + 0x1dc) = *(int *)(iVar1 + 0x1dc) + param_2;
    *(uint *)(iVar1 + 0x1e0) = *(int *)(iVar1 + 0x1e0) - param_2;
    *(uint *)(iVar1 + 0x220) = *(int *)(iVar1 + 0x220) + param_2;
    return 0;
  }
  return 0x32;
}



/* ===== FUN_00018f94 @ 00018f94 size=352 ===== */

void * FUN_00018f94(int param_1,int param_2,uint *param_3,void *param_4,uint param_5)

{
  uint uVar1;
  void *__dest;
  byte *pbVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  uint uVar7;
  bool bVar8;
  
  uVar1 = FUN_0001b8b4(param_1 + 4);
  uVar1 = uVar1 & 7;
  uVar3 = param_2 - 0xcU;
  if (uVar1 != 0) {
    uVar3 = FUN_0001b8b4(param_1 + 6);
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = uVar3;
  }
  uVar7 = uVar3;
  if (uVar3 < param_5) {
    uVar7 = param_5;
  }
  __dest = malloc(uVar7);
  if (__dest != (void *)0x0) {
    if (param_4 != (void *)0x0 && uVar3 < param_5) {
      memcpy(__dest,param_4,param_5);
    }
    if (uVar1 == 1) {
      if (uVar3 != 0) {
        uVar1 = 0;
        puVar5 = (undefined1 *)((int)__dest + (uVar3 - 1));
        puVar4 = (undefined1 *)((int)__dest + -1);
        uVar3 = 0;
        pbVar2 = (byte *)(param_1 + 0xc);
        do {
          while( true ) {
            bVar8 = uVar3 == 0;
            uVar3 = uVar3 - 1;
            pbVar6 = pbVar2;
            if (bVar8) {
              pbVar6 = pbVar2 + 1;
              uVar3 = 7;
              uVar1 = uVar1 | *pbVar2;
            }
            uVar7 = uVar1 & 1;
            uVar1 = uVar1 >> 1;
            if (uVar7 == 0) break;
            pbVar2 = pbVar6 + 1;
            uVar1 = uVar1 | (uint)*pbVar6 << (uVar3 & 0xff);
            puVar4 = puVar4 + 1;
            *puVar4 = (char)uVar1;
            uVar1 = uVar1 >> 8;
            if (puVar4 == puVar5) {
              return __dest;
            }
          }
          puVar4 = puVar4 + 1;
          *puVar4 = 0;
          pbVar2 = pbVar6;
        } while (puVar4 != puVar5);
        return __dest;
      }
    }
    else {
      if (uVar1 == 0) {
        memcpy(__dest,(void *)(param_1 + 0xc),uVar3);
        return __dest;
      }
      if (uVar1 == 2) {
        FUN_00015b1c(__dest,uVar3,param_1 + 0xc,param_2 - 0xcU);
        return __dest;
      }
      free(__dest);
      __dest = (void *)0x0;
    }
  }
  return __dest;
}



/* ===== FUN_000190f4 @ 000190f4 size=768 ===== */

byte * FUN_000190f4(byte *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  if (param_3 == 0) {
    pbVar10 = (byte *)0x0;
  }
  else {
    iVar3 = _stdlib_mb_cur_max();
    pbVar10 = param_2 + ((param_3 + -3) - iVar3);
  }
  pbVar11 = (byte *)0x0;
  pbVar9 = param_2;
LAB_00019124:
  do {
    bVar1 = *param_1;
    pbVar8 = param_1;
    pbVar5 = pbVar11;
joined_r0x0001912c:
    uVar4 = (uint)bVar1;
    if (uVar4 == 0) {
      *pbVar9 = bVar1;
      return param_2;
    }
    uVar2 = *(ushort *)(__ctype_b + uVar4 * 2);
    pbVar11 = pbVar5;
    if ((param_3 != 0 && pbVar10 <= pbVar9) && (pbVar11 = pbVar9, pbVar5 != (byte *)0x0)) {
      if ((uVar2 & 0x40) != 0) {
        uVar4 = FUN_0001bb94(pbVar8);
        pbVar11 = pbVar5;
LAB_00019234:
        if (pbVar9 <= param_2 + ((param_3 + -2) - uVar4)) goto LAB_00019248;
        goto LAB_000191e4;
      }
      pbVar11 = pbVar5;
      if (0x1f < uVar4) goto LAB_00019204;
joined_r0x00019180:
      if (param_2 + param_3 + -4 < pbVar9) goto LAB_000191e4;
      goto LAB_00019184;
    }
    if ((uVar2 & 0x40) != 0) {
      uVar4 = FUN_0001bb94(pbVar8);
      if (pbVar11 != (byte *)0x0) goto LAB_00019234;
LAB_00019248:
      param_1 = pbVar8;
      if (uVar4 != 0) {
        if (uVar4 - 1 < 0xf || pbVar8 < pbVar9 + 0x10 && pbVar9 < pbVar8 + 0x10) {
          pbVar5 = pbVar9 + -1;
          param_1 = pbVar8 + uVar4;
          do {
            pbVar7 = pbVar8 + 1;
            pbVar5 = pbVar5 + 1;
            *pbVar5 = *pbVar8;
            pbVar8 = pbVar7;
          } while (pbVar7 != param_1);
        }
        else {
          pbVar5 = pbVar9;
          pbVar7 = pbVar8;
          do {
            uVar12 = *(undefined8 *)pbVar7;
            uVar13 = *(undefined8 *)(pbVar7 + 8);
            pbVar7 = pbVar7 + 0x10;
            *(undefined8 *)pbVar5 = uVar12;
            *(undefined8 *)(pbVar5 + 8) = uVar13;
            pbVar5 = pbVar5 + 0x10;
          } while (pbVar7 != pbVar8 + (uVar4 & 0xfffffff0));
          uVar6 = uVar4 & 0xfffffff0;
          param_1 = pbVar8 + uVar6;
          iVar3 = uVar4 - uVar6;
          if (uVar4 != uVar6) {
            pbVar9[uVar6] = pbVar8[uVar6];
            if (((((iVar3 == 1) || (pbVar9[uVar6 + 1] = param_1[1], iVar3 == 2)) ||
                 (pbVar9[uVar6 + 2] = param_1[2], iVar3 == 3)) ||
                ((((pbVar9[uVar6 + 3] = param_1[3], iVar3 == 4 ||
                   (pbVar9[uVar6 + 4] = param_1[4], iVar3 == 5)) ||
                  ((pbVar9[uVar6 + 5] = param_1[5], iVar3 == 6 ||
                   ((pbVar9[uVar6 + 6] = param_1[6], iVar3 == 7 ||
                    (pbVar9[uVar6 + 7] = param_1[7], iVar3 == 8)))))) ||
                 (pbVar9[uVar6 + 8] = param_1[8], iVar3 == 9)))) ||
               ((((pbVar9[uVar6 + 9] = param_1[9], iVar3 == 10 ||
                  (pbVar9[uVar6 + 10] = param_1[10], iVar3 == 0xb)) ||
                 (pbVar9[uVar6 + 0xb] = param_1[0xb], iVar3 == 0xc)) ||
                ((pbVar9[uVar6 + 0xc] = param_1[0xc], iVar3 == 0xd ||
                 (pbVar9[uVar6 + 0xd] = param_1[0xd], iVar3 == 0xe)))))) {
              param_1 = pbVar8 + uVar4;
            }
            else {
              pbVar5 = param_1 + 0xe;
              param_1 = pbVar8 + uVar4;
              pbVar9[uVar6 + 0xe] = *pbVar5;
            }
          }
        }
        pbVar9 = pbVar9 + uVar4;
      }
      goto LAB_00019124;
    }
    if (uVar4 < 0x20) {
      if (pbVar11 != (byte *)0x0) goto joined_r0x00019180;
LAB_00019184:
      *pbVar9 = 0x5e;
      pbVar9[1] = *pbVar8 + 0x40;
      bVar1 = pbVar8[1];
      pbVar8 = pbVar8 + 1;
      pbVar9 = pbVar9 + 2;
      pbVar5 = pbVar11;
      goto joined_r0x0001912c;
    }
    if (pbVar11 == (byte *)0x0) goto LAB_0001920c;
LAB_00019204:
    if (param_2 + param_3 + -3 < pbVar9) {
LAB_000191e4:
      *(undefined4 *)pbVar11 = DAT_000300b0;
      return param_2;
    }
LAB_0001920c:
    *pbVar9 = 0x3f;
    iVar3 = FUN_0001bb94(pbVar8);
    param_1 = pbVar8 + iVar3;
    pbVar9 = pbVar9 + 1;
  } while( true );
}



/* ===== FUN_000193f4 @ 000193f4 size=116 ===== */

undefined4 FUN_000193f4(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  code *pcVar5;
  undefined4 uVar6;
  
  iVar1 = DAT_00019468;
  iVar2 = open(*(char **)(DAT_00019468 + 0xf8),0);
  *(int *)(iVar1 + 0xfc) = iVar2;
  if (iVar2 != -1) {
    return 0;
  }
  uVar6 = *(undefined4 *)(iVar1 + 0xf8);
  pcVar5 = *(code **)(iVar1 + 0x130c);
  piVar3 = __errno_location();
  pcVar4 = strerror(*piVar3);
  iVar2 = sprintf(DAT_0001946c,"error:  cannot open zipfile [ %s ]\n        %s\n",uVar6,pcVar4);
  (*pcVar5)(iVar1 + -0x90000,DAT_0001946c,iVar2,0x401);
  return 1;
}



/* ===== FUN_00019470 @ 00019470 size=760 ===== */

undefined4 FUN_00019470(void)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  int iVar4;
  FILE *pFVar5;
  undefined4 uVar6;
  int *piVar7;
  char *pcVar8;
  uint uVar9;
  code *pcVar10;
  uint uVar11;
  bool bVar12;
  stat sStack_70;
  
  iVar1 = stat((char *)&DAT_00019768[1].st_ctim.tv_nsec,DAT_00019768);
  if ((iVar1 != 0) &&
     (iVar1 = lstat((char *)&DAT_00019768[1].st_ctim.tv_nsec,DAT_00019768), iVar1 != 0))
  goto LAB_00019520;
  if (DAT_000441b0 == 0) {
    iVar1 = unlink(DAT_0001976c);
    pcVar10 = DAT_000d54ac;
    if (iVar1 != 0) {
      uVar6 = FUN_000190f4(DAT_0001976c,DAT_00019770,0x4000);
      piVar7 = __errno_location();
      pcVar3 = strerror(*piVar7);
      iVar1 = sprintf(DAT_00019778,DAT_0001977c,uVar6,pcVar3);
      (*pcVar10)(&DAT_000441a0,DAT_00019778,iVar1,0x401);
      return 1;
    }
    goto LAB_00019520;
  }
  sVar2 = strlen(DAT_0001976c);
  if ((int)(sVar2 + 7) < 0x1000) {
    pcVar3 = malloc(sVar2 + 7);
    if (pcVar3 == (char *)0x0) {
      return 1;
    }
    pcVar8 = (char *)(sVar2 + 1);
    memcpy(pcVar3,DAT_0001976c,(size_t)pcVar8);
    bVar12 = DAT_00044234 == 1;
    if (!bVar12) {
      pcVar8 = pcVar3 + (int)pcVar8;
    }
    *(undefined2 *)(pcVar3 + sVar2) = DAT_000306e8;
    if (bVar12) goto LAB_00019748;
LAB_000195dc:
    uVar11 = 0xffffffff;
LAB_000195e0:
    uVar9 = 0;
    do {
      iVar1 = stat(pcVar3,&sStack_70);
      uVar9 = uVar9 + 1;
      if (iVar1 != 0) break;
      sprintf(pcVar8,"%u",uVar9);
    } while (uVar9 < uVar11);
  }
  else {
    pcVar3 = malloc(0x1000);
    if (pcVar3 == (char *)0x0) {
      return 1;
    }
    memcpy(pcVar3,DAT_0001976c,sVar2 + 1);
    iVar1 = DAT_00044234;
    pcVar3[0xffe] = '\0';
    if (sVar2 == 0xfff) {
      pcVar3[0xffe] = '~';
      pcVar3[0xfff] = '\0';
      if (iVar1 != 1) goto LAB_00019504;
    }
    else {
      *(undefined2 *)(pcVar3 + sVar2) = DAT_000306e8;
      if (iVar1 != 1) {
        pcVar8 = pcVar3 + sVar2 + 1;
        if (4 < (int)(0xffe - sVar2)) goto LAB_000195dc;
        uVar11 = *(uint *)(&DAT_00030368 + (0xffe - sVar2) * 4);
        if (uVar11 == 0) goto LAB_00019504;
        goto LAB_000195e0;
      }
    }
LAB_00019748:
    iVar1 = stat(pcVar3,&sStack_70);
    if (iVar1 == 0) {
      unlink(pcVar3);
    }
  }
LAB_00019504:
  iVar4 = rename(DAT_0001976c,pcVar3);
  iVar1 = DAT_00019780;
  if (iVar4 != 0) {
    pcVar10 = *(code **)(DAT_00019780 + 0x30c);
    uVar6 = FUN_000190f4(DAT_0001976c,DAT_00019770,0x4000);
    piVar7 = __errno_location();
    pcVar8 = strerror(*piVar7);
    iVar4 = sprintf(DAT_00019778,DAT_00019784,uVar6,pcVar8);
    (*pcVar10)(iVar1 + -0x91000,DAT_00019778,iVar4,0x401);
    free(pcVar3);
    return 1;
  }
  free(pcVar3);
LAB_00019520:
  pcVar3 = DAT_0001976c;
  pFVar5 = fopen(DAT_0001976c,"w+b");
  *(FILE **)(pcVar3 + -0x18) = pFVar5;
  if (pFVar5 == (FILE *)0x0) {
    pcVar10 = *(code **)(pcVar3 + 0x10e8);
    uVar6 = FUN_000190f4(pcVar3,DAT_00019770,0x4000);
    piVar7 = __errno_location();
    pcVar8 = strerror(*piVar7);
    iVar1 = sprintf(DAT_00019778,DAT_00019774,uVar6,pcVar8);
    (*pcVar10)(pcVar3 + -0x90224,DAT_00019778,iVar1,0x401);
    return 1;
  }
  return 0;
}



/* ===== FUN_00019788 @ 00019788 size=116 ===== */

void FUN_00019788(void)

{
  if (DAT_000d4280 < 1) {
    if (DAT_000d54c0 < 1) {
      if (DAT_000d4280 != 0) {
        DAT_000d4280 = 0;
      }
      return;
    }
  }
  else {
    DAT_0004424c = DAT_000d4280 + DAT_0004424c;
    if (DAT_000d54c0 < 1) {
      return;
    }
  }
  DAT_000d4280 = DAT_000d54c0 + DAT_0004424c;
  DAT_000d54c0 = 0;
  DAT_000d427c = DAT_000d54c4 - DAT_0004424c;
  return;
}



/* ===== FUN_000197fc @ 000197fc size=112 ===== */

void FUN_000197fc(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_000d427c;
  iVar1 = DAT_0001986c;
  if (DAT_0004424c < DAT_000d4280) {
    if (DAT_0004424c < 0) {
      DAT_0004424c = 0;
    }
    else {
      DAT_000d4280 = DAT_000d4280 - DAT_0004424c;
    }
    iVar2 = DAT_0004424c;
    *(int *)(DAT_0001986c + 800) = DAT_000d4280;
    DAT_000d4280 = iVar2;
    iVar3 = iVar3 + DAT_0004424c;
    DAT_0004424c = 0;
    *(int *)(iVar1 + 0x324) = iVar3;
    return;
  }
  DAT_0004424c = DAT_0004424c - DAT_000d4280;
  DAT_000d54c0 = 0;
  return;
}



/* ===== FUN_00019870 @ 00019870 size=212 ===== */

uint FUN_00019870(void *param_1,uint param_2)

{
  int iVar1;
  uint __n;
  void *__src;
  int iVar2;
  uint uVar3;
  
  iVar1 = DAT_00019944;
  if (param_2 != 0) {
    __n = *(uint *)(DAT_00019944 + 0xe0);
    uVar3 = param_2;
    do {
      if ((int)__n < 1) {
        __n = read(*(int *)(iVar1 + 0xfc),*(void **)(iVar1 + 0xd8),0x2000);
        *(uint *)(iVar1 + 0xe0) = __n;
        if (__n == 0) {
          return param_2 - uVar3;
        }
        if ((int)__n < 0) {
          (**(code **)(DAT_00019948 + 0x30c))(DAT_00019948 + -0x91000,DAT_0001994c,0x1b,0x401);
          return 0;
        }
        __src = *(void **)(iVar1 + 0xd8);
        *(void **)(iVar1 + 0xdc) = __src;
        *(int *)(iVar1 + 0x104) = *(int *)(iVar1 + 0x104) + 0x2000;
      }
      else {
        __src = *(void **)(iVar1 + 0xdc);
      }
      if (uVar3 <= __n) {
        __n = uVar3;
      }
      memcpy(param_1,__src,__n);
      uVar3 = uVar3 - __n;
      iVar2 = *(int *)(iVar1 + 0xdc) + __n;
      param_1 = (void *)((int)param_1 + __n);
      __n = *(int *)(iVar1 + 0xe0) - __n;
      *(int *)(iVar1 + 0xdc) = iVar2;
      *(uint *)(iVar1 + 0xe0) = __n;
    } while (uVar3 != 0);
  }
  return param_2;
}



/* ===== FUN_00019950 @ 00019950 size=400 ===== */

uint FUN_00019950(void)

{
  int iVar1;
  ssize_t sVar2;
  int iVar3;
  byte bVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  
  if (DAT_000d4378 != 0) {
    return 0xffffffff;
  }
  if (DAT_0004424c < 1) {
    DAT_0004424c = DAT_0004424c + -1;
    DAT_000d4280 = DAT_000d4378;
    return 0xffffffff;
  }
  if (DAT_000d4280 < 1) {
    DAT_000d4280 = read(DAT_000d429c,DAT_000d4278,0x2000);
    pbVar5 = DAT_000d4278;
    iVar3 = DAT_00019ae0;
    if (DAT_000d4280 == 0) {
      return 0xffffffff;
    }
    if (DAT_000d4280 < 0) {
      (*DAT_000d54ac)(&DAT_000441a0,DAT_00019ae4,0x1b,0x401);
      FUN_000245d8();
                    /* WARNING: Subroutine does not return */
      exit(3);
    }
    DAT_000d42a4 = DAT_000d42a4 + 0x2000;
    DAT_000d427c = DAT_000d4278;
    if (DAT_000d4280 <= DAT_0004424c) {
      DAT_0004424c = DAT_0004424c - DAT_000d4280;
      bVar4 = *(byte *)(DAT_000c426c + 0x18);
      DAT_000d54c0 = 0;
      goto joined_r0x00019a9c;
    }
    if (DAT_0004424c < 0) {
      iVar8 = -1;
      iVar1 = 0;
      pbVar6 = DAT_000d4278;
      sVar2 = DAT_000d4280;
    }
    else {
      iVar8 = DAT_0004424c + -1;
      pbVar6 = DAT_000d4278 + DAT_0004424c;
      iVar1 = DAT_0004424c;
      sVar2 = DAT_000d4280 - DAT_0004424c;
    }
    DAT_0004424c = 0;
    DAT_000d4280 = iVar1;
    *(byte **)(DAT_00019ae0 + 0x324) = pbVar6;
    *(ssize_t *)(iVar3 + 800) = sVar2;
    if (((*(byte *)(*(int *)(iVar3 + -0x10f34) + 0x18) & 1) == 0) || (iVar1 == 0))
    goto LAB_000199d0;
  }
  else {
    bVar4 = *(byte *)(DAT_000c426c + 0x18);
    pbVar5 = DAT_000d427c;
joined_r0x00019a9c:
    iVar8 = DAT_000d4280 + -1;
    DAT_000d427c = pbVar5;
    if ((bVar4 & 1) == 0) goto LAB_000199d0;
  }
  pbVar6 = pbVar5;
  do {
    bVar4 = FUN_000133dc();
    pbVar7 = pbVar6 + 1;
    *pbVar6 = bVar4 ^ *pbVar6;
    FUN_00013400();
    pbVar6 = pbVar7;
  } while (pbVar7 != pbVar5 + iVar8 + 1);
  iVar8 = DAT_000d4280 + -1;
  pbVar5 = DAT_000d427c;
LAB_000199d0:
  DAT_000d4280 = iVar8;
  DAT_000d427c = pbVar5 + 1;
  return (uint)*pbVar5;
}



/* ===== FUN_00019ae8 @ 00019ae8 size=236 ===== */

undefined4 FUN_00019ae8(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  __off_t _Var4;
  ssize_t sVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  code *pcVar10;
  
  iVar3 = DAT_00019bd4;
  uVar7 = param_1 + *(int *)(DAT_00019bd4 + 0x108);
  uVar9 = uVar7 & 0x1fff;
  if (-1 < (int)-uVar7) {
    uVar9 = -(-uVar7 & 0x1fff);
  }
  if ((int)uVar7 < 0) {
    pcVar10 = *(code **)(DAT_00019bd4 + 0x130c);
    iVar8 = sprintf(DAT_00019bd8,"error [%s]:  attempt to seek before beginning of zipfile\n%s",
                    *(undefined4 *)(DAT_00019bd4 + 0xf8),
                    "  (please check that you have transferred or created the zipfile in the\n  appropriate BINARY mode and that you have compiled UnZip properly)\n"
                   );
    (*pcVar10)(iVar3 + -0x90000,DAT_00019bd8,iVar8,1);
    return 3;
  }
  if (*(int *)(DAT_00019bd4 + 0x104) != uVar7 - uVar9) {
    _Var4 = lseek(*(int *)(DAT_00019bd4 + 0xfc),uVar7 - uVar9,0);
    *(__off_t *)(iVar3 + 0x104) = _Var4;
    sVar5 = read(*(int *)(iVar3 + 0xfc),*(void **)(iVar3 + 0xd8),0x2000);
    if (sVar5 < 1) {
      *(ssize_t *)(iVar3 + 0xe0) = sVar5;
      uVar6 = 0x33;
    }
    else {
      *(uint *)(iVar3 + 0xe0) = sVar5 - uVar9;
      uVar6 = 0;
      *(uint *)(iVar3 + 0xdc) = *(int *)(iVar3 + 0xd8) + uVar9;
    }
    return uVar6;
  }
  piVar1 = (int *)(DAT_00019bd4 + 0xd8);
  iVar8 = *(int *)(DAT_00019bd4 + 0xdc);
  piVar2 = (int *)(DAT_00019bd4 + 0xe0);
  *(uint *)(DAT_00019bd4 + 0xdc) = *piVar1 + uVar9;
  *(uint *)(iVar3 + 0xe0) = ((iVar8 - *piVar1) - uVar9) + *piVar2;
  return 0;
}



/* ===== FUN_00019bdc @ 00019bdc size=2712 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00019bdc(ushort *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  ushort uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte *pbVar8;
  char *pcVar9;
  size_t sVar10;
  undefined4 uVar11;
  int iVar12;
  void *__ptr;
  byte bVar13;
  byte bVar14;
  byte *pbVar15;
  ushort *puVar16;
  ushort *__buf;
  int iVar17;
  byte *pbVar18;
  ushort *puVar19;
  ushort *puVar20;
  uint uVar21;
  ushort *puVar22;
  size_t sVar23;
  uint uVar24;
  code *pcVar25;
  byte *pbVar26;
  uint uVar27;
  short *psVar28;
  short *psVar29;
  byte *pbVar30;
  bool bVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  uint local_2c [2];
  
  DAT_000d4274 = FUN_00012ee8(DAT_000d4274,param_1,param_2);
  iVar12 = DAT_0001a688;
  if (DAT_000441e4 != 0 || param_2 == (byte *)0x0) {
    return 0;
  }
  if (_DAT_000d4388 != 0) {
    return 0x32;
  }
  if ((*(byte *)(DAT_000c426c + 0x18) & 8) == 0) {
    if (DAT_000441b4 != 0) {
LAB_0001a110:
      (**(code **)(DAT_0001a688 + 0x30c))(DAT_0001a688 + -0x91000,param_1,param_2,0);
      return 0;
    }
    iVar12 = fileno(DAT_000d43ac);
    pbVar26 = (byte *)write(iVar12,param_1,(size_t)param_2);
    pcVar25 = DAT_000d54ac;
    if (pbVar26 == param_2) {
      if (DAT_000441b4 == 0) {
        return 0;
      }
      goto LAB_0001a110;
    }
    uVar11 = FUN_000190f4(DAT_0001a690,DAT_0001a68c,0x4000);
    iVar12 = sprintf(DAT_0001a698,DAT_0001a694,uVar11);
    (*pcVar25)(&DAT_000441a0,DAT_0001a698,iVar12,0x4a1);
    pcVar9 = (char *)&DAT_00044260;
    goto LAB_0001a360;
  }
  __buf = DAT_000d43b8;
  if (param_3 == 0) {
    __buf = DAT_000d43b0;
  }
  if (DAT_000d438c == 0) {
    iVar17 = *(int *)(DAT_0001a688 + 0x32c);
LAB_00019c88:
    if (iVar17 < 0) goto LAB_0001a224;
    pbVar26 = (byte *)0x0;
    puVar20 = __buf;
    puVar22 = param_1;
    while (pbVar26 < param_2) {
switchD_00019cc0_default:
      switch(iVar17) {
      case 0:
        *(undefined4 *)(iVar12 + 0x328) = 0;
        if (param_2 + -1 == pbVar26) {
          iVar17 = 1;
          uVar24 = (uint)(byte)*puVar22;
          puVar22 = (ushort *)((int)puVar22 + 1);
        }
        else {
          iVar17 = 2;
          uVar24 = (uint)*puVar22;
          puVar22 = puVar22 + 1;
        }
        *(int *)(iVar12 + 0x32c) = iVar17;
        pbVar26 = (byte *)((int)puVar22 - (int)param_1);
        *(uint *)(iVar12 + 0x328) = uVar24;
        *(uint *)(iVar12 + 0x330) = uVar24 & 1;
        break;
      case 1:
        uVar5 = *puVar22;
        iVar17 = 2;
        *(undefined4 *)(iVar12 + 0x32c) = 2;
        pbVar26 = (byte *)(((int)puVar22 + 1) - (int)param_1);
        *(uint *)(iVar12 + 0x328) = *(int *)(iVar12 + 0x328) + (uint)(byte)uVar5 * 0x100;
        puVar22 = (ushort *)((int)puVar22 + 1);
        break;
      case 2:
        pbVar18 = *(byte **)(iVar12 + 0x328);
        pbVar26 = (byte *)((int)param_1 + ((int)param_2 - (int)puVar22));
        if (pbVar18 < pbVar26) {
          *(undefined4 *)(iVar12 + 0x32c) = 3;
          pbVar26 = pbVar18;
        }
        pbVar15 = (byte *)((int)(__buf + 0x8000) - (int)puVar20);
        if (pbVar15 <= pbVar26) {
          pbVar26 = pbVar26 + -(int)pbVar15;
          if (pbVar15 != (byte *)0x0) {
            if (pbVar15 + -1 < (byte *)0xf || puVar20 < puVar22 + 8 && puVar22 < puVar20 + 8) {
              pbVar18 = (byte *)((int)puVar22 + -1);
              pbVar8 = (byte *)((int)puVar20 + -1);
              pbVar30 = pbVar18 + (int)pbVar15;
              do {
                pbVar18 = pbVar18 + 1;
                pbVar8 = pbVar8 + 1;
                *pbVar8 = *pbVar18;
              } while (pbVar18 != pbVar30);
            }
            else {
              uVar24 = 0;
              uVar27 = ((uint)(pbVar15 + -0x10) >> 4) + 1;
              puVar16 = puVar22;
              puVar19 = puVar20;
              do {
                uVar24 = uVar24 + 1;
                uVar32 = *(undefined8 *)puVar16;
                uVar33 = *(undefined8 *)(puVar16 + 4);
                puVar16 = puVar16 + 8;
                *(undefined8 *)puVar19 = uVar32;
                *(undefined8 *)(puVar19 + 4) = uVar33;
                puVar19 = puVar19 + 8;
              } while (uVar24 < uVar27);
              pbVar18 = (byte *)(uVar27 * 0x10);
              pbVar8 = pbVar15 + uVar27 * -0x10;
              if (((((pbVar15 != pbVar18) &&
                    (*(byte *)(puVar20 + uVar27 * 8) = (byte)puVar22[uVar27 * 8],
                    pbVar8 != (byte *)0x1)) &&
                   (*(byte *)((int)puVar20 + (int)(pbVar18 + 1)) =
                         *(byte *)((int)puVar22 + (int)(pbVar18 + 1)), pbVar8 != (byte *)0x2)) &&
                  ((*(byte *)(puVar20 + uVar27 * 8 + 1) = (byte)puVar22[uVar27 * 8 + 1],
                   pbVar8 != (byte *)0x3 &&
                   (*(byte *)((int)puVar20 + (int)(pbVar18 + 3)) =
                         *(byte *)((int)puVar22 + (int)(pbVar18 + 3)), pbVar8 != (byte *)0x4)))) &&
                 (((*(byte *)(puVar20 + uVar27 * 8 + 2) = (byte)puVar22[uVar27 * 8 + 2],
                   pbVar8 != (byte *)0x5 &&
                   ((*(byte *)((int)puVar20 + (int)(pbVar18 + 5)) =
                          *(byte *)((int)puVar22 + (int)(pbVar18 + 5)), pbVar8 != (byte *)0x6 &&
                    (*(byte *)(puVar20 + uVar27 * 8 + 3) = (byte)puVar22[uVar27 * 8 + 3],
                    pbVar8 != (byte *)0x7)))) &&
                  ((*(byte *)((int)puVar20 + (int)(pbVar18 + 7)) =
                         *(byte *)((int)puVar22 + (int)(pbVar18 + 7)), pbVar8 != (byte *)0x8 &&
                   (((((*(byte *)(puVar20 + uVar27 * 8 + 4) = (byte)puVar22[uVar27 * 8 + 4],
                       pbVar8 != (byte *)0x9 &&
                       (*(byte *)((int)puVar20 + (int)(pbVar18 + 9)) =
                             *(byte *)((int)puVar22 + (int)(pbVar18 + 9)), pbVar8 != (byte *)0xa))
                      && (*(byte *)(puVar20 + uVar27 * 8 + 5) = (byte)puVar22[uVar27 * 8 + 5],
                         pbVar8 != (byte *)0xb)) &&
                     ((*(byte *)((int)puVar20 + (int)(pbVar18 + 0xb)) =
                            *(byte *)((int)puVar22 + (int)(pbVar18 + 0xb)), pbVar8 != (byte *)0xc &&
                      (*(byte *)(puVar20 + uVar27 * 8 + 6) = (byte)puVar22[uVar27 * 8 + 6],
                      pbVar8 != (byte *)0xd)))) &&
                    (*(byte *)((int)puVar20 + (int)(pbVar18 + 0xd)) =
                          *(byte *)((int)puVar22 + (int)(pbVar18 + 0xd)), pbVar8 != (byte *)0xe)))))
                  ))) {
                *(byte *)(puVar20 + uVar27 * 8 + 7) = (byte)puVar22[uVar27 * 8 + 7];
              }
            }
            puVar22 = (ushort *)((int)puVar22 + (int)pbVar15);
            puVar20 = __buf + 0x8000;
          }
          sVar23 = (int)puVar20 - (int)__buf;
          if (DAT_000441b4 == 0) {
            iVar17 = fileno(DAT_000d43ac);
            sVar10 = write(iVar17,__buf,sVar23);
            if (sVar10 != sVar23) goto LAB_0001a548;
            if (DAT_000441b4 != 0) goto LAB_00019f04;
          }
          else {
LAB_00019f04:
            iVar17 = (**(code **)(iVar12 + 0x30c))(&DAT_000441a0,__buf,sVar23,0);
            if (iVar17 != 0) {
              return 0;
            }
          }
          pbVar18 = *(byte **)(iVar12 + 0x328);
          puVar20 = __buf;
        }
        bVar31 = pbVar26 == (byte *)0x0;
        iVar17 = (int)pbVar18 - (int)pbVar26;
        if (bVar31) {
          pbVar26 = (byte *)((int)puVar22 - (int)param_1);
        }
        *(int *)(iVar12 + 0x328) = iVar17;
        if (bVar31) {
          iVar17 = *(int *)(iVar12 + 0x32c);
        }
        else {
          if (pbVar26 + -1 < (byte *)0xf || puVar20 < puVar22 + 8 && puVar22 < puVar20 + 8) {
            pbVar15 = (byte *)((int)puVar22 + -1);
            pbVar18 = (byte *)((int)puVar20 + -1);
            do {
              pbVar15 = pbVar15 + 1;
              pbVar18 = pbVar18 + 1;
              *pbVar18 = *pbVar15;
            } while (pbVar15 != (byte *)((int)puVar22 + (int)(pbVar26 + -1)));
          }
          else {
            puVar16 = puVar22;
            puVar19 = puVar20;
            do {
              uVar32 = *(undefined8 *)puVar16;
              uVar33 = *(undefined8 *)(puVar16 + 4);
              puVar16 = puVar16 + 8;
              *(undefined8 *)puVar19 = uVar32;
              *(undefined8 *)(puVar19 + 4) = uVar33;
              puVar19 = puVar19 + 8;
            } while (puVar19 != (ushort *)(((uint)pbVar26 & 0xfffffff0) + (int)puVar20));
            pbVar18 = (byte *)((uint)pbVar26 & 0xfffffff0);
            iVar17 = (int)pbVar26 - (int)pbVar18;
            if ((((((pbVar26 != pbVar18) &&
                   (*(byte *)((int)puVar20 + (int)pbVar18) = *(byte *)((int)puVar22 + (int)pbVar18),
                   iVar17 != 1)) &&
                  ((*(byte *)((int)puVar20 + (int)(pbVar18 + 1)) =
                         *(byte *)((int)puVar22 + (int)(pbVar18 + 1)), iVar17 != 2 &&
                   (((*(byte *)((int)puVar20 + (int)(pbVar18 + 2)) =
                           *(byte *)((int)puVar22 + (int)(pbVar18 + 2)), iVar17 != 3 &&
                     (*(byte *)((int)puVar20 + (int)(pbVar18 + 3)) =
                           *(byte *)((int)puVar22 + (int)(pbVar18 + 3)), iVar17 != 4)) &&
                    (*(byte *)((int)puVar20 + (int)(pbVar18 + 4)) =
                          *(byte *)((int)puVar22 + (int)(pbVar18 + 4)), iVar17 != 5)))))) &&
                 ((*(byte *)((int)puVar20 + (int)(pbVar18 + 5)) =
                        *(byte *)((int)puVar22 + (int)(pbVar18 + 5)), iVar17 != 6 &&
                  (*(byte *)((int)puVar20 + (int)(pbVar18 + 6)) =
                        *(byte *)((int)puVar22 + (int)(pbVar18 + 6)), iVar17 != 7)))) &&
                (*(byte *)((int)puVar20 + (int)(pbVar18 + 7)) =
                      *(byte *)((int)puVar22 + (int)(pbVar18 + 7)), iVar17 != 8)) &&
               (((*(byte *)((int)puVar20 + (int)(pbVar18 + 8)) =
                       *(byte *)((int)puVar22 + (int)(pbVar18 + 8)), iVar17 != 9 &&
                 (*(byte *)((int)puVar20 + (int)(pbVar18 + 9)) =
                       *(byte *)((int)puVar22 + (int)(pbVar18 + 9)), iVar17 != 10)) &&
                ((*(byte *)((int)puVar20 + (int)(pbVar18 + 10)) =
                       *(byte *)((int)puVar22 + (int)(pbVar18 + 10)), iVar17 != 0xb &&
                 (((*(byte *)((int)puVar20 + (int)(pbVar18 + 0xb)) =
                         *(byte *)((int)puVar22 + (int)(pbVar18 + 0xb)), iVar17 != 0xc &&
                   (*(byte *)((int)puVar20 + (int)(pbVar18 + 0xc)) =
                         *(byte *)((int)puVar22 + (int)(pbVar18 + 0xc)), iVar17 != 0xd)) &&
                  (*(byte *)((int)puVar20 + (int)(pbVar18 + 0xd)) =
                        *(byte *)((int)puVar22 + (int)(pbVar18 + 0xd)), iVar17 != 0xe)))))))) {
              *(byte *)((int)puVar20 + (int)(pbVar18 + 0xe)) =
                   *(byte *)((int)puVar22 + (int)(pbVar18 + 0xe));
            }
          }
          puVar22 = (ushort *)((int)puVar22 + (int)pbVar26);
          puVar20 = (ushort *)((int)puVar20 + (int)pbVar26);
          iVar17 = *(int *)(iVar12 + 0x32c);
          pbVar26 = (byte *)((int)puVar22 - (int)param_1);
        }
        break;
      case 3:
        puVar16 = puVar20;
        if ((ushort *)((int)__buf + 0xffff) < puVar20) {
          sVar23 = (int)puVar20 - (int)__buf;
          puVar16 = __buf;
          if (DAT_000441b4 == 0) {
            iVar17 = fileno(DAT_000d43ac);
            sVar10 = write(iVar17,__buf,sVar23);
            if (sVar10 != sVar23) goto LAB_0001a548;
            if (DAT_000441b4 == 0) goto LAB_00019d34;
          }
          iVar17 = (**(code **)(iVar12 + 0x30c))(&DAT_000441a0,__buf,sVar23,0);
          if (iVar17 != 0) {
            return 0;
          }
        }
LAB_00019d34:
        puVar20 = (ushort *)((int)puVar16 + 1);
        *(byte *)puVar16 = 10;
        iVar17 = 0;
        if (*(int *)(iVar12 + 0x330) != 0) {
          iVar17 = 4;
        }
        *(int *)(iVar12 + 0x32c) = iVar17;
        break;
      case 4:
        iVar17 = 0;
        pbVar26 = (byte *)(((int)puVar22 + 1) - (int)param_1);
        *(undefined4 *)(iVar12 + 0x32c) = 0;
        puVar22 = (ushort *)((int)puVar22 + 1);
        break;
      default:
        goto switchD_00019cc0_default;
      }
    }
  }
  else {
    if (((*(char *)(DAT_000c426c + 0x13) == '\x02') && (DAT_000d42ac != (short *)0x0)) &&
       (uVar24 = (uint)DAT_000d42cc, uVar24 != 0)) {
      if (uVar24 < 4) {
        bVar14 = 0;
      }
      else {
        uVar27 = (uint)(ushort)DAT_000d42ac[1];
        sVar4 = *DAT_000d42ac;
        if (uVar24 - 4 < uVar27) {
          bVar14 = 0;
        }
        else {
          bVar14 = 0;
          psVar29 = DAT_000d42ac;
          do {
            if (sVar4 == 0xc) {
              bVar13 = *(byte *)(psVar29 + 3);
              psVar28 = psVar29 + 4;
              bVar1 = *(byte *)((int)psVar29 + 7);
              local_2c[0] = uVar27 - 4;
              bVar2 = *(byte *)(psVar29 + 2);
              bVar3 = *(byte *)((int)psVar29 + 5);
              iVar17 = FUN_00012ee8(0,psVar28);
              uVar7 = s__Warning__CRC_error__discarding_P_000306ec._12_4_;
              uVar6 = s__Warning__CRC_error__discarding_P_000306ec._8_4_;
              uVar11 = s__Warning__CRC_error__discarding_P_000306ec._4_4_;
              pcVar9 = DAT_0001a698;
              if ((uint)bVar13 * 0x10000 + (uint)bVar1 * 0x1000000 + (uint)bVar2 +
                  (uint)bVar3 * 0x100 == iVar17) {
                while (4 < local_2c[0]) {
                  uVar21 = (uint)(ushort)psVar28[1];
                  bVar31 = *psVar28 == 4 && uVar21 != 0;
                  local_2c[0] = local_2c[0] + (-4 - uVar21);
                  bVar13 = 0;
                  if (bVar31) {
                    bVar13 = *(byte *)(psVar28 + 2);
                  }
                  psVar28 = (short *)((int)psVar28 + uVar21 + 4);
                  if (bVar31) {
                    bVar14 = bVar13 & 0xf;
                  }
                }
              }
              else {
                pcVar25 = *(code **)(iVar12 + 0x30c);
                *(undefined4 *)DAT_0001a698 = s__Warning__CRC_error__discarding_P_000306ec._0_4_;
                *(undefined4 *)(pcVar9 + 4) = uVar11;
                *(undefined4 *)(pcVar9 + 8) = uVar6;
                *(undefined4 *)(pcVar9 + 0xc) = uVar7;
                uVar7 = s__Warning__CRC_error__discarding_P_000306ec._28_4_;
                uVar6 = s__Warning__CRC_error__discarding_P_000306ec._24_4_;
                uVar11 = s__Warning__CRC_error__discarding_P_000306ec._20_4_;
                *(undefined4 *)(pcVar9 + 0x10) = s__Warning__CRC_error__discarding_P_000306ec._16_4_
                ;
                *(undefined4 *)(pcVar9 + 0x14) = uVar11;
                *(undefined4 *)(pcVar9 + 0x18) = uVar6;
                *(undefined4 *)(pcVar9 + 0x1c) = uVar7;
                uVar7 = s__Warning__CRC_error__discarding_P_000306ec._44_4_;
                uVar6 = s__Warning__CRC_error__discarding_P_000306ec._40_4_;
                uVar11 = s__Warning__CRC_error__discarding_P_000306ec._36_4_;
                *(undefined4 *)(pcVar9 + 0x20) = s__Warning__CRC_error__discarding_P_000306ec._32_4_
                ;
                *(undefined4 *)(pcVar9 + 0x24) = uVar11;
                *(undefined4 *)(pcVar9 + 0x28) = uVar6;
                *(undefined4 *)(pcVar9 + 0x2c) = uVar7;
                uVar11 = ram0x00030720;
                *(undefined4 *)(pcVar9 + 0x30) = s__Warning__CRC_error__discarding_P_000306ec._48_4_
                ;
                pcVar9[0x34] = (char)uVar11;
                (*pcVar25)(&DAT_000441a0,pcVar9,0x34,1);
              }
            }
            else if (((sVar4 == 0x4d49) &&
                     ((uint)*(byte *)(psVar29 + 3) * 0x10000 +
                      (uint)*(byte *)((int)psVar29 + 7) * 0x1000000 + (uint)*(byte *)(psVar29 + 2) +
                      (uint)*(byte *)((int)psVar29 + 5) * 0x100 == 0x42414656)) &&
                    (__ptr = (void *)FUN_00018f94(psVar29 + 2,uVar27,local_2c,0,0),
                    __ptr != (void *)0x0)) {
              if (0x1f < local_2c[0]) {
                bVar14 = *(byte *)((int)__ptr + 0x1f) & 0xf;
              }
              free(__ptr);
            }
            uVar24 = uVar24 + (-4 - uVar27);
            psVar29 = (short *)((int)psVar29 + uVar27 + 4);
            if (uVar24 < 4) break;
            uVar27 = (uint)(ushort)psVar29[1];
            sVar4 = *psVar29;
          } while (uVar27 <= uVar24 - 4);
        }
      }
      _DAT_000d438c = 0;
      iVar17 = 0;
      if (bVar14 != 2) {
        iVar17 = -1;
      }
      *(int *)(iVar12 + 0x32c) = iVar17;
      goto LAB_00019c88;
    }
    _DAT_000d438c = 0;
    *(undefined4 *)(DAT_0001a688 + 0x32c) = 0xffffffff;
LAB_0001a224:
    puVar22 = param_1;
    if ((byte)*param_1 == 10) {
      if (DAT_000d4390 != 0) {
        puVar22 = (ushort *)((int)param_1 + 1);
      }
      pbVar26 = (byte *)(uint)(DAT_000d4390 != 0);
    }
    else {
      pbVar26 = (byte *)0x0;
    }
    _DAT_000d438c = _DAT_000d438c & 0xffffffff;
    if (param_2 <= pbVar26) {
      return 0;
    }
    puVar16 = __buf;
    do {
      puVar19 = (ushort *)((int)puVar22 + 1);
      bVar14 = (byte)*puVar22;
      if (bVar14 == 0xd) {
        puVar20 = (ushort *)((int)puVar16 + 1);
        *(byte *)puVar16 = 10;
        if (param_2 + -1 == pbVar26) {
          _DAT_000d438c = CONCAT44(1,DAT_000d438c);
        }
        else if (*(byte *)((int)puVar22 + 1) == 10) {
          puVar19 = puVar22 + 1;
        }
      }
      else if ((bVar14 == 10) || (puVar20 = puVar16, bVar14 != 0x1a)) {
        puVar20 = (ushort *)((int)puVar16 + 1);
        *(byte *)puVar16 = bVar14;
      }
      pbVar26 = (byte *)((int)puVar19 - (int)param_1);
      puVar16 = puVar20;
      puVar22 = puVar19;
    } while (pbVar26 < param_2);
  }
  if (puVar20 <= __buf) {
    return 0;
  }
  sVar23 = (int)puVar20 - (int)__buf;
  if (DAT_000441b4 == 0) {
    iVar17 = fileno(DAT_000d43ac);
    sVar10 = write(iVar17,__buf,sVar23);
    if (sVar10 != sVar23) {
LAB_0001a548:
      pcVar25 = *(code **)(iVar12 + 0x30c);
      uVar11 = FUN_000190f4(DAT_0001a690,DAT_0001a68c,0x4000);
      iVar12 = sprintf(DAT_0001a698,DAT_0001a694,uVar11);
      (*pcVar25)(&DAT_000441a0,DAT_0001a698,iVar12,0x4a1);
      pcVar9 = DAT_0001a69c;
LAB_0001a360:
      fgets(pcVar9,10,stdin);
      if ((char)DAT_00044260 == 'y') {
        _DAT_000d4388 = 1;
        return 0x32;
      }
      _DAT_000d4388 = 2;
      return 0x32;
    }
    if (DAT_000441b4 == 0) {
      return 0;
    }
  }
  (**(code **)(iVar12 + 0x30c))(&DAT_000441a0,__buf,sVar23,0);
  return 0;
}



/* ===== FUN_0001a6a0 @ 0001a6a0 size=964 ===== */

uint FUN_0001a6a0(int param_1,char *param_2,size_t param_3,uint param_4)

{
  undefined4 uVar1;
  size_t sVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  char *__buf;
  char *pcVar8;
  FILE *__stream;
  uint uVar9;
  
  uVar9 = param_4 & 1;
  pcVar7 = param_2 + param_3;
  __stream = stdout;
  if ((uVar9 != 0) && (*(int *)(param_1 + 0x44) == 0)) {
    __stream = stderr;
  }
  if ((param_4 & 0x40) != 0) {
    if (param_3 == 0) {
      if (*(int *)(&DAT_000901f8 + param_1) != 0) goto LAB_0001a6fc;
    }
    else if (pcVar7[-1] == '\n') goto LAB_0001a6fc;
    param_3 = param_3 + 1;
    *pcVar7 = '\n';
    pcVar7 = pcVar7 + 1;
  }
LAB_0001a6fc:
  FUN_00024628(param_1 + 0x74,param_1 + 0x7c);
  *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -2;
  if (((param_4 & 0x20) != 0) && (*(int *)(&DAT_000901f8 + param_1) == 0)) {
    if (__stream->_chain == (_IO_FILE *)0x0) {
      fputc(10,__stream);
    }
    else {
      pcVar8 = __stream->_IO_write_base;
      if (pcVar8 < __stream->_IO_buf_base) {
        __stream->_IO_write_base = pcVar8 + 1;
        *pcVar8 = '\n';
      }
      else {
        __fputc_unlocked(10,__stream);
      }
    }
    fflush(__stream);
    if (*(int *)(param_1 + 0x70) != 0) {
      iVar5 = *(int *)(param_1 + 0x74);
      iVar6 = *(int *)(param_1 + 0x78) + 1;
      iVar4 = *(int *)(&DAT_000901f4 + param_1);
      *(undefined4 *)(param_1 + 0x80) = 0;
      *(int *)(&DAT_000901f4 + param_1) = iVar4 + 1;
      *(int *)(param_1 + 0x78) = iVar6;
      if (iVar5 <= iVar6) {
        (**(code **)(&DAT_00091314 + param_1))(param_1,DAT_0001aa64,1);
      }
    }
    if ((((uVar9 != 0) && (*(int *)(param_1 + 0x44) != 0)) && (iVar5 = isatty(1), iVar5 == 0)) &&
       (iVar5 = isatty(2), iVar5 != 0)) {
      if (stderr->_chain == (_IO_FILE *)0x0) {
        fputc(10,stderr);
      }
      else {
        pcVar8 = stderr->_IO_write_base;
        if (pcVar8 < stderr->_IO_buf_base) {
          stderr->_IO_write_base = pcVar8 + 1;
          *pcVar8 = '\n';
        }
        else {
          __fputc_unlocked(10);
        }
      }
      fflush(stderr);
    }
    *(undefined4 *)(&DAT_000901f8 + param_1) = 1;
  }
  pcVar8 = param_2;
  if (*(int *)(param_1 + 0x70) != 0) {
    __buf = param_2;
    if (pcVar7 <= param_2) {
      return 0;
    }
    do {
      pcVar8 = __buf;
      if (*param_2 == '\n') {
LAB_0001a7a4:
        iVar5 = *(int *)(param_1 + 0x74);
        iVar6 = *(int *)(param_1 + 0x78) + 1;
        iVar4 = *(int *)(&DAT_000901f4 + param_1);
        *(undefined4 *)(param_1 + 0x80) = 0;
        *(int *)(&DAT_000901f4 + param_1) = iVar4 + 1;
        *(int *)(param_1 + 0x78) = iVar6;
        if (iVar5 <= iVar6) {
          iVar5 = fileno(__stream);
          pcVar8 = param_2 + 1;
          pcVar3 = (char *)write(iVar5,__buf,(size_t)(param_2 + (1 - (int)__buf)));
          if (param_2 + (1 - (int)__buf) != pcVar3) {
            return 1;
          }
          fflush(__stream);
          uVar1 = DAT_0001aa64;
          *(undefined4 *)(&DAT_000901f8 + param_1) = 1;
          (**(code **)(&DAT_00091314 + param_1))(param_1,uVar1,1);
        }
      }
      else if (*param_2 == '\r') {
        *(undefined4 *)(param_1 + 0x80) = 0;
      }
      else {
        iVar5 = *(int *)(param_1 + 0x80) + 1;
        *(int *)(param_1 + 0x80) = iVar5;
        if (*(int *)(param_1 + 0x7c) <= iVar5) goto LAB_0001a7a4;
      }
      sVar2 = _stdlib_mb_cur_max();
      iVar5 = mblen(param_2,sVar2);
      if (iVar5 < 1) {
        param_2 = param_2 + 1;
      }
      else {
        param_2 = param_2 + iVar5;
      }
      __buf = pcVar8;
    } while (param_2 < pcVar7);
    param_3 = (int)param_2 - (int)pcVar8;
  }
  if (param_3 == 0) {
    return 0;
  }
  iVar5 = fileno(__stream);
  sVar2 = write(iVar5,pcVar8,param_3);
  if (sVar2 == param_3) {
    fflush(__stream);
    if (((uVar9 != 0) && (*(int *)(param_1 + 0x44) != 0)) &&
       ((iVar5 = isatty(1), iVar5 == 0 && (iVar5 = isatty(2), iVar5 != 0)))) {
      iVar5 = fileno(stderr);
      sVar2 = write(iVar5,pcVar8,param_3);
      if (param_3 != sVar2) {
        return uVar9;
      }
      fflush(stderr);
    }
    *(uint *)(&DAT_000901f8 + param_1) = (uint)(pcVar7[-1] == '\n');
    return 0;
  }
  return 1;
}



/* ===== FUN_0001aa78 @ 0001aa78 size=336 ===== */

void FUN_0001aa78(int param_1,char *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (*(int *)(&DAT_000901f8 + param_1) == 0) {
    fputc(10,stderr);
  }
  fprintf(stderr,param_2,*(undefined4 *)(&DAT_000901f4 + param_1));
  fflush(stderr);
  param_3 = param_3 & 1;
  if (param_3 == 0) {
    uVar1 = FUN_000246b0(0);
    uVar1 = uVar1 & 0xff;
  }
  else {
    do {
      while( true ) {
        uVar1 = FUN_000246b0(0);
        uVar1 = uVar1 & 0xff;
        uVar2 = uVar1 - 10 & 0xff;
        if (uVar2 < 0x17) break;
        if (uVar1 == 0x71) {
          iVar3 = 0xe2;
          goto LAB_0001ab0c;
        }
        if (uVar1 == 0x51) {
          iVar3 = 0xa2;
          goto LAB_0001ab0c;
        }
      }
    } while ((~(0x400009U >> uVar2) & 1) != 0);
  }
  iVar3 = uVar1 << 1;
LAB_0001ab0c:
  fwrite(DAT_0001abc8,1,0x3b,stderr);
  fflush(stderr);
  uVar2 = uVar1;
  if ((*(ushort *)(__ctype_b + iVar3) & 1) != 0) {
    uVar2 = tolower(uVar1);
    uVar2 = uVar2 & 0xff;
  }
  if (uVar2 == 0x71) {
                    /* WARNING: Subroutine does not return */
    exit(0);
  }
  if (uVar1 != 0x20) {
    param_3 = 0;
  }
  *(undefined4 *)(&DAT_000901f8 + param_1) = 1;
  if (param_3 != 0) {
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  return;
}



/* ===== FUN_0001abcc @ 0001abcc size=228 ===== */

undefined4
FUN_0001abcc(undefined4 param_1,int *param_2,char *param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  char *__s;
  undefined4 uVar3;
  
  uVar2 = DAT_0001acb0;
  if (*param_2 == 0) {
    *param_2 = 2;
    __s = malloc(0x200f);
    if (__s == (char *)0x0) {
      iVar1 = FUN_0002473c(DAT_0001acc0,param_3,param_4);
    }
    else {
      uVar2 = FUN_000190f4(param_5,DAT_0001acb4,0x4000);
      uVar3 = FUN_000190f4(param_6,DAT_0001acb8,0x4000);
      sprintf(__s,DAT_0001acbc,uVar2,uVar3);
      iVar1 = FUN_0002473c(__s,param_3,param_4);
      free(__s);
    }
  }
  else {
    *param_2 = *param_2 + -1;
    iVar1 = FUN_0002473c(uVar2,param_3,param_4);
  }
  if (iVar1 == 0) {
    return 5;
  }
  if (*param_3 == '\0') {
    uVar2 = 0xfffffffe;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== FUN_0001acc4 @ 0001acc4 size=212 ===== */

void FUN_0001acc4(int param_1)

{
  int iVar1;
  code *pcVar2;
  
  FUN_000245d8();
  iVar1 = DAT_0001ad98;
  if (param_1 == 7) {
    pcVar2 = *(code **)(DAT_0001ad98 + 0x30c);
    sprintf(DAT_0001ada0,DAT_0001ad9c,"bus error");
    (*pcVar2)(iVar1 + -0x91000,DAT_0001ada0,0x2d,0x421);
                    /* WARNING: Subroutine does not return */
    exit(3);
  }
  if (param_1 != 4) {
    if (param_1 != 0xb) {
                    /* WARNING: Subroutine does not return */
      exit(0x50);
    }
    pcVar2 = *(code **)(DAT_0001ad98 + 0x30c);
    sprintf(DAT_0001ada0,DAT_0001ad9c,"segmentation violation");
    (*pcVar2)(iVar1 + -0x91000,DAT_0001ada0,0x3a,0x421);
                    /* WARNING: Subroutine does not return */
    exit(3);
  }
  pcVar2 = *(code **)(DAT_0001ad98 + 0x30c);
  sprintf(DAT_0001ada0,DAT_0001ad9c,"illegal instruction");
  (*pcVar2)(iVar1 + -0x91000,DAT_0001ada0,0x37,0x421);
                    /* WARNING: Subroutine does not return */
  exit(3);
}



/* ===== FUN_0001ada4 @ 0001ada4 size=320 ===== */

int FUN_0001ada4(uint param_1)

{
  uint uVar1;
  tm *ptVar2;
  int iVar3;
  int iVar4;
  time_t local_1c;
  
  uVar1 = param_1 >> 0x19;
  iVar3 = ((param_1 & 0x1ffffff) >> 0x15) - 1;
  iVar4 = (uVar1 + 10) * 0x16d + ((int)(uVar1 + 0x7bb) >> 2) + -0x1ec +
          (uint)*(ushort *)(DAT_0001aee4 + iVar3 * 2);
  if ((1 < iVar3) && ((uVar1 & 3) == 0 && uVar1 != 0x78)) {
    iVar4 = iVar4 + 1;
  }
  local_1c = ((((param_1 & 0x1fffff) >> 0x10) - 1) + iVar4) * 0x15180 +
             ((param_1 & 0xffff) >> 0xb) * 0xe10 +
             ((param_1 & 0x7ff) >> 5) * 0x3c + (param_1 & 0x1f) * 2 + timezone;
  if ((local_1c < 0x70000000 && 0x7431ffff < param_1) || (local_1c < 0)) {
    local_1c = 0x7fffffff;
  }
  ptVar2 = localtime(&local_1c);
  if ((ptVar2 != (tm *)0x0) && (ptVar2->tm_isdst != 0)) {
    local_1c = local_1c + -0xe10;
  }
  if (0x7431ffff < param_1) {
    if (local_1c < 0x70000000) {
      local_1c = 0x7fffffff;
    }
    return local_1c;
  }
  if (local_1c < 0) {
    local_1c = 0x7fffffff;
  }
  return local_1c;
}



/* ===== FUN_0001aee8 @ 0001aee8 size=408 ===== */

uint FUN_0001aee8(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  char *pcVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined1 auStack_1c [4];
  int local_18;
  
  iVar1 = stat(param_1,DAT_0001b080);
  if (iVar1 != 0) {
    iVar1 = lstat(param_1,DAT_0001b080);
    pcVar6 = DAT_000d54ac;
    if (iVar1 != 0) {
      return 0xffffffff;
    }
    if (DAT_000441e0 != 0) {
      return 0;
    }
    if (DAT_00044234 == 1) {
      return 0;
    }
    uVar2 = FUN_000190f4(param_1,DAT_0001b084,0x4000);
    pcVar4 = " with no real file";
LAB_0001af60:
    iVar1 = sprintf(DAT_0001b08c,DAT_0001b088,uVar2,pcVar4);
    (*pcVar6)(&DAT_000441a0,DAT_0001b08c,iVar1,0);
    return 0;
  }
  iVar1 = lstat(param_1,DAT_0001b080);
  pcVar6 = DAT_000d54ac;
  puVar5 = DAT_0001b090;
  if ((iVar1 == 0) && (puVar5 = &DAT_000d41a0, (DAT_000d4330 & 0xf000) == 0xa000)) {
    if ((DAT_000441e0 != 0) || (DAT_00044234 == 1)) {
      return 0;
    }
    uVar2 = FUN_000190f4(param_1,DAT_0001b084,0x4000);
    pcVar4 = "";
    goto LAB_0001af60;
  }
  uVar2 = *(undefined4 *)(puVar5 + 0x11c);
  if (*(int *)(puVar5 + 0x10c) != 0) {
    uVar3 = FUN_0002429c(*(int *)(puVar5 + 0x10c),*(undefined2 *)(puVar5 + 300),0,uVar2,auStack_1c,0
                        );
    if ((uVar3 & 1) != 0) {
      uVar3 = *(uint *)(puVar5 + 0x1c0);
      goto LAB_0001b028;
    }
    uVar2 = *(undefined4 *)(puVar5 + 0x11c);
  }
  uVar3 = *(uint *)(puVar5 + 0x1c0);
  if ((uVar3 & 1) != 0) {
    uVar3 = uVar3 + 1;
  }
  local_18 = FUN_0001ada4(uVar2);
LAB_0001b028:
  return (uint)(local_18 <= (int)uVar3);
}



/* ===== FUN_0001b094 @ 0001b094 size=2024 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

uint FUN_0001b094(size_t param_1,uint param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  void *pvVar11;
  int iVar12;
  char *pcVar13;
  byte *pbVar14;
  char *pcVar15;
  char cVar16;
  uint uVar17;
  size_t sVar18;
  char *pcVar19;
  char *pcVar20;
  uint uVar21;
  int iVar22;
  byte *pbVar23;
  int iVar24;
  uint uVar25;
  code *pcVar26;
  bool bVar27;
  
  iVar22 = DAT_0001b8a0;
  pcVar13 = DAT_0001b89c;
  iVar12 = DAT_0001b898;
  if (param_1 != 0) {
    switch(param_2) {
    case 0:
      FUN_00019ae8((*(int *)(DAT_0001b898 + 0x104) - *(int *)(DAT_0001b898 + 0x108)) +
                   (*(int *)(DAT_0001b898 + 0xdc) - *(int *)(DAT_0001b898 + 0xd8)) + param_1);
      return param_2;
    case 1:
    case 5:
      iVar22 = DAT_0001b898 + -0x90000;
      iVar24 = DAT_0001b898 + 0x1000;
      do {
        pcVar19 = *(char **)(iVar12 + 0x210);
        uVar21 = param_1;
        if (0xffff < param_1) {
          uVar21 = 0x10000;
        }
        iVar10 = FUN_00019870(pcVar19,uVar21);
        if (iVar10 == 0) {
          return 0x33;
        }
        param_1 = param_1 - iVar10;
        *(undefined1 *)(*(int *)(iVar12 + 0x210) + iVar10) = 0;
        cVar16 = *pcVar19;
        pcVar20 = pcVar19;
        while (cVar16 != '\0') {
          while (cVar16 == '\r') {
            pcVar20 = pcVar20 + 1;
            cVar16 = *pcVar20;
          }
          *pcVar19 = cVar16;
          cVar16 = pcVar20[1];
          pcVar19 = pcVar19 + 1;
          pcVar20 = pcVar20 + 1;
        }
        *pcVar19 = '\0';
        pcVar19 = pcVar13;
        if (param_2 == 5) {
          pbVar14 = *(byte **)(iVar12 + 0x210);
          iVar10 = *(int *)(DAT_0001b8ac + 0xcc);
          uVar21 = (uint)*pbVar14;
          if (*(char *)(iVar10 + 0x13) != '\0') {
            if (*(char *)(iVar10 + 0x13) == '\x06') goto LAB_0001b4b4;
LAB_0001b524:
            if (*(short *)(iVar10 + 0x12) == 0xb32) goto LAB_0001b4b4;
            goto LAB_0001b314;
          }
          if (*(char *)(iVar10 + 0x18) < '\0') {
            bVar1 = *(byte *)(iVar10 + 0x12);
            bVar27 = 0x27 < bVar1;
            if (bVar1 != 0x28) {
              bVar27 = bVar1 != 0x19;
            }
            if (!bVar27 || (bVar1 == 0x28 || bVar1 == 0x1a)) goto LAB_0001b524;
          }
LAB_0001b4b4:
          if (DAT_00044140 == 0) goto LAB_0001b314;
          iVar10 = DAT_0001b8a0;
          if (uVar21 != 0) {
            do {
              if ((uVar21 & 0x80) == 0) {
                do {
                  *pbVar14 = (byte)uVar21;
                  pbVar14 = pbVar14 + 1;
                  uVar21 = (uint)*pbVar14;
                  if (uVar21 == 0) goto LAB_0001b30c;
                } while ((*pbVar14 & 0x80) == 0);
              }
              *pbVar14 = *(byte *)(DAT_00044140 + (uVar21 & 0x7f));
              pbVar14 = pbVar14 + 1;
              uVar21 = (uint)*pbVar14;
            } while (uVar21 != 0);
            goto LAB_0001b30c;
          }
        }
        else {
LAB_0001b30c:
          pbVar14 = *(byte **)(iVar12 + 0x210);
          uVar21 = (uint)*pbVar14;
LAB_0001b314:
          pbVar23 = pbVar14 + -1;
          iVar10 = DAT_0001b8a0;
          while (uVar21 != 0) {
            while (pcVar20 = pcVar13, iVar10 = iVar24, uVar21 == 0x1b) {
              pcVar20 = pcVar19 + 2;
              *pcVar19 = '^';
              uVar21 = (int)pcVar20 - (int)pcVar13;
              pcVar19[1] = '[';
              if (0xfffd < uVar21) goto LAB_0001b34c;
              uVar21 = (uint)pbVar14[1];
              pcVar19 = pcVar20;
              pbVar23 = pbVar14;
              pbVar14 = pbVar14 + 1;
              if (uVar21 == 0) goto LAB_0001b3bc;
            }
            if (uVar21 == 0x13) {
              if (pbVar23[2] == 10) {
                pbVar14 = pbVar23 + 2;
                *pcVar19 = '\n';
                pcVar15 = pcVar19 + (1 - (int)pcVar13);
              }
              else if ((pbVar23[2] == 0xd) && (pbVar23[3] == 10)) {
                *pcVar19 = '\r';
                pcVar15 = pcVar19 + (2 - (int)pcVar13);
                pbVar14 = pbVar23 + 3;
                pcVar19[1] = pbVar23[3];
              }
              else {
                pcVar15 = pcVar19 + -(int)pcVar13;
              }
              (**(code **)(iVar12 + 0x130c))(iVar22,pcVar13,pcVar15,0);
              if (*(int *)(iVar12 + -0x8ff64) != 0) {
                (**(code **)(iVar12 + 0x1314))(iVar22,DAT_0001b8a8,0);
              }
            }
            else {
              pcVar20 = pcVar19 + 1;
              *pcVar19 = (char)uVar21;
              uVar21 = (int)pcVar20 - (int)pcVar13;
              if (0xfffd < uVar21) {
LAB_0001b34c:
                (**(code **)(iVar12 + 0x130c))(iVar22,pcVar13,uVar21,0);
                pcVar20 = pcVar13;
              }
            }
            uVar21 = (uint)pbVar14[1];
            pbVar23 = pbVar14;
            pbVar14 = pbVar14 + 1;
            pcVar19 = pcVar20;
          }
        }
LAB_0001b3bc:
        (**(code **)(iVar10 + 0x30c))(iVar22,pcVar13,(int)pcVar19 - (int)pcVar13,0);
        if (param_1 == 0) {
          (**(code **)(iVar10 + 0x30c))(&DAT_000441a0,DAT_0001b89c,0,0x40);
          return 0;
        }
      } while( true );
    case 2:
    case 6:
      goto switchD_0001b0a8_caseD_2;
    case 3:
      if (*(void **)(DAT_0001b898 + 0x10c) != (void *)0x0) {
        free(*(void **)(DAT_0001b898 + 0x10c));
      }
      pvVar11 = malloc(param_1);
      *(void **)(iVar12 + 0x10c) = pvVar11;
      pcVar26 = DAT_000d54ac;
      if (pvVar11 == (void *)0x0) {
        iVar22 = sprintf(DAT_0001b89c,DAT_0001b8b0,param_1);
        (*pcVar26)(&DAT_000441a0,DAT_0001b89c,iVar22,0x401);
        FUN_00019ae8((*(int *)(iVar12 + 0x104) - *(int *)(iVar12 + 0x108)) +
                     (*(int *)(iVar12 + 0xdc) - *(int *)(iVar12 + 0xd8)) + param_1);
        return 0;
      }
      iVar22 = FUN_00019870(pvVar11,param_1);
      if (iVar22 == 0) {
        return 0x33;
      }
      FUN_00023c3c(*(undefined4 *)(iVar12 + 0x10c),param_1);
      DAT_000d53e0 = (char *)0x0;
      if (1 < DAT_000441f0) {
        DAT_000d53e0 = (char *)0x0;
        return 0;
      }
      if ((*(byte *)(DAT_000c426c + 0x19) & 1) == 0) {
        FUN_00023d88(*(undefined4 *)(iVar12 + 0x10c),param_1);
        if (DAT_000d53e0 == (char *)0x0) {
          return 0;
        }
        if (*DAT_000d53e0 != '\0') goto LAB_0001b61c;
        free(DAT_000d53e0);
      }
      DAT_000d53e0 = DAT_000d53c4;
      if (DAT_000d53c4 != (char *)0x0) {
LAB_0001b61c:
        pcVar13 = DAT_000d53e0;
        if ((DAT_000d53d4 == 0) || ((int)DAT_000d53cc != 0)) {
          pcVar13 = (char *)FUN_000241e8(DAT_000d53e0,(int)DAT_000d53cc);
          sVar18 = strlen(pcVar13);
          uVar8 = s_warning__Converted_unicode_filen_0003079c._12_4_;
          uVar4 = s_warning__Converted_unicode_filen_0003079c._8_4_;
          uVar3 = s_warning__Converted_unicode_filen_0003079c._4_4_;
          uVar2 = s_warning__Converted_unicode_filen_0003079c._0_4_;
          if (0xfff < sVar18) {
            pcVar13[0xfff] = '\0';
            uVar9 = s_warning__Converted_unicode_filen_0003079c._12_4_;
            uVar7 = s_warning__Converted_unicode_filen_0003079c._8_4_;
            uVar6 = s_warning__Converted_unicode_filen_0003079c._4_4_;
            uVar5 = s_warning__Converted_unicode_filen_0003079c._0_4_;
            s_warning__Converted_unicode_filen_0003079c[0] = (char)uVar2;
            s_warning__Converted_unicode_filen_0003079c[1] = SUB41(uVar2,1);
            s_warning__Converted_unicode_filen_0003079c[2] = SUB41(uVar2,2);
            s_warning__Converted_unicode_filen_0003079c[3] = SUB41(uVar2,3);
            DAT_000c4270 = s_warning__Converted_unicode_filen_0003079c[0];
            DAT_000c4271 = s_warning__Converted_unicode_filen_0003079c[1];
            DAT_000c4272 = s_warning__Converted_unicode_filen_0003079c[2];
            DAT_000c4273 = s_warning__Converted_unicode_filen_0003079c[3];
            s_warning__Converted_unicode_filen_0003079c[4] = (char)uVar3;
            s_warning__Converted_unicode_filen_0003079c[5] = SUB41(uVar3,1);
            s_warning__Converted_unicode_filen_0003079c[6] = SUB41(uVar3,2);
            s_warning__Converted_unicode_filen_0003079c[7] = SUB41(uVar3,3);
            DAT_000c4274._0_1_ = s_warning__Converted_unicode_filen_0003079c[4];
            DAT_000c4274._1_1_ = s_warning__Converted_unicode_filen_0003079c[5];
            DAT_000c4274._2_1_ = s_warning__Converted_unicode_filen_0003079c[6];
            DAT_000c4274._3_1_ = s_warning__Converted_unicode_filen_0003079c[7];
            s_warning__Converted_unicode_filen_0003079c[8] = (char)uVar4;
            s_warning__Converted_unicode_filen_0003079c[9] = SUB41(uVar4,1);
            s_warning__Converted_unicode_filen_0003079c[10] = SUB41(uVar4,2);
            s_warning__Converted_unicode_filen_0003079c[0xb] = SUB41(uVar4,3);
            DAT_000c4278 = s_warning__Converted_unicode_filen_0003079c[8];
            DAT_000c4279 = s_warning__Converted_unicode_filen_0003079c[9];
            DAT_000c427a = s_warning__Converted_unicode_filen_0003079c[10];
            DAT_000c427b = s_warning__Converted_unicode_filen_0003079c[0xb];
            s_warning__Converted_unicode_filen_0003079c[0xc] = (char)uVar8;
            s_warning__Converted_unicode_filen_0003079c[0xd] = SUB41(uVar8,1);
            s_warning__Converted_unicode_filen_0003079c[0xe] = SUB41(uVar8,2);
            s_warning__Converted_unicode_filen_0003079c[0xf] = SUB41(uVar8,3);
            DAT_000c427c._0_1_ = s_warning__Converted_unicode_filen_0003079c[0xc];
            DAT_000c427c._1_1_ = s_warning__Converted_unicode_filen_0003079c[0xd];
            DAT_000c427c._2_1_ = s_warning__Converted_unicode_filen_0003079c[0xe];
            DAT_000c427c._3_1_ = s_warning__Converted_unicode_filen_0003079c[0xf];
            DAT_000c4280._0_1_ = s_warning__Converted_unicode_filen_0003079c[0x10];
            DAT_000c4280._1_1_ = s_warning__Converted_unicode_filen_0003079c[0x11];
            DAT_000c4280._2_1_ = s_warning__Converted_unicode_filen_0003079c[0x12];
            DAT_000c4280._3_1_ = s_warning__Converted_unicode_filen_0003079c[0x13];
            DAT_000c4284._0_1_ = s_warning__Converted_unicode_filen_0003079c[0x14];
            DAT_000c4284._1_1_ = s_warning__Converted_unicode_filen_0003079c[0x15];
            DAT_000c4284._2_1_ = s_warning__Converted_unicode_filen_0003079c[0x16];
            DAT_000c4284._3_1_ = s_warning__Converted_unicode_filen_0003079c[0x17];
            DAT_000c4288._0_1_ = s_warning__Converted_unicode_filen_0003079c[0x18];
            DAT_000c4288._1_1_ = s_warning__Converted_unicode_filen_0003079c[0x19];
            DAT_000c4288._2_1_ = s_warning__Converted_unicode_filen_0003079c[0x1a];
            DAT_000c4288._3_1_ = s_warning__Converted_unicode_filen_0003079c[0x1b];
            DAT_000c428c._0_1_ = s_warning__Converted_unicode_filen_0003079c[0x1c];
            DAT_000c428c._1_1_ = s_warning__Converted_unicode_filen_0003079c[0x1d];
            DAT_000c428c._2_1_ = s_warning__Converted_unicode_filen_0003079c[0x1e];
            DAT_000c428c._3_1_ = s_warning__Converted_unicode_filen_0003079c[0x1f];
            DAT_000c4290._0_1_ = s_warning__Converted_unicode_filen_0003079c[0x20];
            DAT_000c4290._1_1_ = s_warning__Converted_unicode_filen_0003079c[0x21];
            DAT_000c4290._2_1_ = s_warning__Converted_unicode_filen_0003079c[0x22];
            DAT_000c4290._3_1_ = s_warning__Converted_unicode_filen_0003079c[0x23];
            DAT_000c4294._0_1_ = s_warning__Converted_unicode_filen_0003079c[0x24];
            DAT_000c4294._1_1_ = s_warning__Converted_unicode_filen_0003079c[0x25];
            DAT_000c4294._2_1_ = s_warning__Converted_unicode_filen_0003079c[0x26];
            DAT_000c4294._3_1_ = s_warning__Converted_unicode_filen_0003079c[0x27];
            DAT_000c4298._0_1_ = s_warning__Converted_unicode_filen_0003079c[0x28];
            DAT_000c4298._1_1_ = s_warning__Converted_unicode_filen_0003079c[0x29];
            DAT_000c4298._2_1_ = s_warning__Converted_unicode_filen_0003079c[0x2a];
            DAT_000c4298._3_1_ = s_warning__Converted_unicode_filen_0003079c[0x2b];
            DAT_000c429c = s_warning__Converted_unicode_filen_0003079c[0x2c];
            DAT_000c429c_1._0_1_ = s_warning__Converted_unicode_filen_0003079c[0x2d];
            DAT_000c429e = s_warning__Converted_unicode_filen_0003079c[0x2e];
            DAT_000c429c_1._2_1_ = s_warning__Converted_unicode_filen_0003079c[0x2f];
            DAT_000c42a0._0_1_ = s_warning__Converted_unicode_filen_0003079c[0x30];
            DAT_000c42a0._1_1_ = s_warning__Converted_unicode_filen_0003079c[0x31];
            DAT_000c42a0._2_1_ = s_warning__Converted_unicode_filen_0003079c[0x32];
            DAT_000c42a0._3_1_ = s_warning__Converted_unicode_filen_0003079c[0x33];
            DAT_000c42a4._0_1_ = s_warning__Converted_unicode_filen_0003079c[0x34];
            DAT_000c42a4._1_1_ = s_warning__Converted_unicode_filen_0003079c[0x35];
            DAT_000c42a4._2_1_ = s_warning__Converted_unicode_filen_0003079c[0x36];
            DAT_000c42a4._3_1_ = s_warning__Converted_unicode_filen_0003079c[0x37];
            DAT_000c42a8 = s_warning__Converted_unicode_filen_0003079c[0x38];
            DAT_000c42a8_1._0_1_ = s_warning__Converted_unicode_filen_0003079c[0x39];
            DAT_000c42a8_1._1_1_ = s_warning__Converted_unicode_filen_0003079c[0x3a];
            DAT_000c42a8_1._2_1_ = s_warning__Converted_unicode_filen_0003079c[0x3b];
            s_warning__Converted_unicode_filen_0003079c._0_4_ = uVar5;
            s_warning__Converted_unicode_filen_0003079c._4_4_ = uVar6;
            s_warning__Converted_unicode_filen_0003079c._8_4_ = uVar7;
            s_warning__Converted_unicode_filen_0003079c._12_4_ = uVar9;
            (*DAT_000d54ac)(&DAT_000441a0,DAT_0001b89c,0x3b,0x401);
          }
          uVar21 = (uint)(0xfff < sVar18);
          strcpy(DAT_0001b8a4,pcVar13);
          free(pcVar13);
        }
        else {
          strncpy(DAT_0001b8a4,DAT_000d53e0,0xfff);
          sVar18 = strlen(pcVar13);
          uVar21 = 0;
          if (0xfff < sVar18) {
            DAT_000d53c3 = 0;
            uVar21 = 1;
            DAT_000c4270 = s_warning__Converted_unicode_filen_0003079c[0];
            DAT_000c4271 = s_warning__Converted_unicode_filen_0003079c[1];
            DAT_000c4272 = s_warning__Converted_unicode_filen_0003079c[2];
            DAT_000c4273 = s_warning__Converted_unicode_filen_0003079c[3];
            DAT_000c4274._0_1_ = s_warning__Converted_unicode_filen_0003079c[4];
            DAT_000c4274._1_1_ = s_warning__Converted_unicode_filen_0003079c[5];
            DAT_000c4274._2_1_ = s_warning__Converted_unicode_filen_0003079c[6];
            DAT_000c4274._3_1_ = s_warning__Converted_unicode_filen_0003079c[7];
            DAT_000c4278 = s_warning__Converted_unicode_filen_0003079c[8];
            DAT_000c4279 = s_warning__Converted_unicode_filen_0003079c[9];
            DAT_000c427a = s_warning__Converted_unicode_filen_0003079c[10];
            DAT_000c427b = s_warning__Converted_unicode_filen_0003079c[0xb];
            DAT_000c427c._0_1_ = s_warning__Converted_unicode_filen_0003079c[0xc];
            DAT_000c427c._1_1_ = s_warning__Converted_unicode_filen_0003079c[0xd];
            DAT_000c427c._2_1_ = s_warning__Converted_unicode_filen_0003079c[0xe];
            DAT_000c427c._3_1_ = s_warning__Converted_unicode_filen_0003079c[0xf];
            DAT_000c4280._0_1_ = s_warning__Converted_unicode_filen_0003079c[0x10];
            DAT_000c4280._1_1_ = s_warning__Converted_unicode_filen_0003079c[0x11];
            DAT_000c4280._2_1_ = s_warning__Converted_unicode_filen_0003079c[0x12];
            DAT_000c4280._3_1_ = s_warning__Converted_unicode_filen_0003079c[0x13];
            DAT_000c4284._0_1_ = s_warning__Converted_unicode_filen_0003079c[0x14];
            DAT_000c4284._1_1_ = s_warning__Converted_unicode_filen_0003079c[0x15];
            DAT_000c4284._2_1_ = s_warning__Converted_unicode_filen_0003079c[0x16];
            DAT_000c4284._3_1_ = s_warning__Converted_unicode_filen_0003079c[0x17];
            DAT_000c4288._0_1_ = s_warning__Converted_unicode_filen_0003079c[0x18];
            DAT_000c4288._1_1_ = s_warning__Converted_unicode_filen_0003079c[0x19];
            DAT_000c4288._2_1_ = s_warning__Converted_unicode_filen_0003079c[0x1a];
            DAT_000c4288._3_1_ = s_warning__Converted_unicode_filen_0003079c[0x1b];
            DAT_000c428c._0_1_ = s_warning__Converted_unicode_filen_0003079c[0x1c];
            DAT_000c428c._1_1_ = s_warning__Converted_unicode_filen_0003079c[0x1d];
            DAT_000c428c._2_1_ = s_warning__Converted_unicode_filen_0003079c[0x1e];
            DAT_000c428c._3_1_ = s_warning__Converted_unicode_filen_0003079c[0x1f];
            DAT_000c4290._0_1_ = s_warning__Converted_unicode_filen_0003079c[0x20];
            DAT_000c4290._1_1_ = s_warning__Converted_unicode_filen_0003079c[0x21];
            DAT_000c4290._2_1_ = s_warning__Converted_unicode_filen_0003079c[0x22];
            DAT_000c4290._3_1_ = s_warning__Converted_unicode_filen_0003079c[0x23];
            DAT_000c4294._0_1_ = s_warning__Converted_unicode_filen_0003079c[0x24];
            DAT_000c4294._1_1_ = s_warning__Converted_unicode_filen_0003079c[0x25];
            DAT_000c4294._2_1_ = s_warning__Converted_unicode_filen_0003079c[0x26];
            DAT_000c4294._3_1_ = s_warning__Converted_unicode_filen_0003079c[0x27];
            DAT_000c4298._0_1_ = s_warning__Converted_unicode_filen_0003079c[0x28];
            DAT_000c4298._1_1_ = s_warning__Converted_unicode_filen_0003079c[0x29];
            DAT_000c4298._2_1_ = s_warning__Converted_unicode_filen_0003079c[0x2a];
            DAT_000c4298._3_1_ = s_warning__Converted_unicode_filen_0003079c[0x2b];
            DAT_000c429c = s_warning__Converted_unicode_filen_0003079c[0x2c];
            DAT_000c429c_1._0_1_ = s_warning__Converted_unicode_filen_0003079c[0x2d];
            DAT_000c429e = s_warning__Converted_unicode_filen_0003079c[0x2e];
            DAT_000c429c_1._2_1_ = s_warning__Converted_unicode_filen_0003079c[0x2f];
            DAT_000c42a0._0_1_ = s_warning__Converted_unicode_filen_0003079c[0x30];
            DAT_000c42a0._1_1_ = s_warning__Converted_unicode_filen_0003079c[0x31];
            DAT_000c42a0._2_1_ = s_warning__Converted_unicode_filen_0003079c[0x32];
            DAT_000c42a0._3_1_ = s_warning__Converted_unicode_filen_0003079c[0x33];
            DAT_000c42a4._0_1_ = s_warning__Converted_unicode_filen_0003079c[0x34];
            DAT_000c42a4._1_1_ = s_warning__Converted_unicode_filen_0003079c[0x35];
            DAT_000c42a4._2_1_ = s_warning__Converted_unicode_filen_0003079c[0x36];
            DAT_000c42a4._3_1_ = s_warning__Converted_unicode_filen_0003079c[0x37];
            DAT_000c42a8 = s_warning__Converted_unicode_filen_0003079c[0x38];
            DAT_000c42a8_1._0_1_ = s_warning__Converted_unicode_filen_0003079c[0x39];
            DAT_000c42a8_1._1_1_ = s_warning__Converted_unicode_filen_0003079c[0x3a];
            DAT_000c42a8_1._2_1_ = s_warning__Converted_unicode_filen_0003079c[0x3b];
            (*DAT_000d54ac)(&DAT_000441a0,DAT_0001b89c,0x3b,0x401);
          }
        }
        if (DAT_000d53e0 != DAT_000d53c4) {
          free(DAT_000d53e0);
        }
        DAT_000d53e0 = (char *)0x0;
        return uVar21;
      }
    default:
      break;
    }
  }
  return 0;
switchD_0001b0a8_caseD_2:
  pvVar11 = *(void **)(DAT_0001b8a0 + 0x224);
  if (*(uint *)(DAT_0001b8a0 + 0x228) <= param_1) {
    if (param_1 < 0x1000) {
      sVar18 = 0x1000;
    }
    else {
      sVar18 = param_1 + 1;
    }
    if (pvVar11 != (void *)0x0) {
      free(pvVar11);
    }
    pvVar11 = malloc(sVar18);
    *(void **)(iVar22 + 0x224) = pvVar11;
    if (pvVar11 == (void *)0x0) {
      return 4;
    }
    *(size_t *)(iVar22 + 0x228) = sVar18;
  }
  iVar12 = FUN_00019870(pvVar11,param_1);
  if (iVar12 == 0) {
    return 0x33;
  }
  uVar21 = 0;
  *(undefined1 *)(*(int *)(iVar22 + 0x224) + param_1) = 0;
  uVar4 = s_warning__filename_too_long__trun_00030770._12_4_;
  uVar3 = s_warning__filename_too_long__trun_00030770._8_4_;
  uVar2 = s_warning__filename_too_long__trun_00030770._4_4_;
  pcVar13 = DAT_0001b89c;
  if (param_1 < 0x1000) {
    if (param_1 < 9) {
      uVar25 = 0;
    }
    else {
      uVar25 = 1;
    }
  }
  else {
    uVar21 = 1;
    pcVar26 = *(code **)(iVar22 + 0x30c);
    *(undefined4 *)DAT_0001b89c = s_warning__filename_too_long__trun_00030770._0_4_;
    *(undefined4 *)(pcVar13 + 4) = uVar2;
    *(undefined4 *)(pcVar13 + 8) = uVar3;
    *(undefined4 *)(pcVar13 + 0xc) = uVar4;
    uVar4 = s_warning__filename_too_long__trun_00030770._28_4_;
    uVar3 = s_warning__filename_too_long__trun_00030770._24_4_;
    uVar2 = s_warning__filename_too_long__trun_00030770._20_4_;
    *(undefined4 *)(pcVar13 + 0x10) = s_warning__filename_too_long__trun_00030770._16_4_;
    *(undefined4 *)(pcVar13 + 0x14) = uVar2;
    *(undefined4 *)(pcVar13 + 0x18) = uVar3;
    *(undefined4 *)(pcVar13 + 0x1c) = uVar4;
    uVar3 = ram0x00030798;
    uVar2 = s_warning__filename_too_long__trun_00030770._36_4_;
    *(undefined4 *)(pcVar13 + 0x20) = s_warning__filename_too_long__trun_00030770._32_4_;
    *(undefined4 *)(pcVar13 + 0x24) = uVar2;
    *(short *)(pcVar13 + 0x28) = (short)uVar3;
    (*pcVar26)(&DAT_000441a0,pcVar13,0x29,0x401);
    param_1 = 0xfff;
    uVar25 = uVar21;
  }
  strncpy(DAT_0001b8a4,*(char **)(iVar22 + 0x224),param_1);
  iVar22 = DAT_000c426c;
  (&DAT_000d43c4)[param_1] = 0;
  iVar12 = DAT_00044140;
  if (*(char *)(iVar22 + 0x13) == '\0') {
    if ((param_2 == 6) || (*(char *)(iVar22 + 0x18) < '\0')) {
      bVar1 = *(byte *)(iVar22 + 0x12);
      bVar27 = 0x27 < bVar1;
      if (bVar1 != 0x28) {
        bVar27 = bVar1 != 0x19;
      }
      if (!bVar27 || (bVar1 == 0x28 || bVar1 == 0x1a)) goto LAB_0001b56c;
    }
  }
  else if (*(char *)(iVar22 + 0x13) != '\x06') {
LAB_0001b56c:
    if (*(short *)(iVar22 + 0x12) != 0xb32) goto LAB_0001b57c;
  }
  if ((DAT_00044140 != 0) && (uVar17 = (uint)*(byte *)(DAT_0001b898 + 0x224), uVar17 != 0)) {
    pbVar14 = (byte *)(DAT_0001b898 + 0x224);
    do {
      while ((uVar17 & 0x80) != 0) {
        *pbVar14 = *(byte *)(iVar12 + (uVar17 & 0x7f));
        pbVar14 = pbVar14 + 1;
        uVar17 = (uint)*pbVar14;
        iVar22 = DAT_000c426c;
        if (uVar17 == 0) goto LAB_0001b57c;
      }
      *pbVar14 = (byte)uVar17;
      pbVar14 = pbVar14 + 1;
      uVar17 = (uint)*pbVar14;
      iVar22 = DAT_000c426c;
    } while (uVar17 != 0);
  }
LAB_0001b57c:
  bVar1 = *(byte *)(iVar22 + 0x18);
  if ((bVar1 & 0x10) != 0) {
    uVar17 = (uint)*(byte *)(DAT_0001b898 + 0x224);
    if (uVar17 != 0) {
      pbVar14 = (byte *)(DAT_0001b898 + 0x224);
      do {
        sVar18 = _stdlib_mb_cur_max();
        iVar12 = mblen((char *)pbVar14,sVar18);
        if (iVar12 < 2) {
          if ((*(ushort *)(__ctype_b + uVar17 * 2) & 1) != 0) {
            uVar17 = tolower(uVar17);
            uVar17 = uVar17 & 0xff;
          }
          pbVar23 = pbVar14 + 1;
          *pbVar14 = (byte)uVar17;
        }
        else {
          pbVar23 = pbVar14 + iVar12;
        }
        uVar17 = (uint)*pbVar23;
        pbVar14 = pbVar23;
      } while (uVar17 != 0);
    }
    bVar1 = *(byte *)(DAT_000c426c + 0x18);
  }
  if ((uVar25 & bVar1 >> 5) != 0) {
    if (*(char *)(DAT_0001b898 + 0x22c) == '.') {
      pcVar13 = (char *)(DAT_0001b898 + 0x22c);
      do {
        pcVar19 = pcVar13 + 1;
        *pcVar13 = *pcVar19;
        pcVar13 = pcVar13 + 1;
      } while (*pcVar19 != '\0');
      return uVar21;
    }
    return uVar21;
  }
  return uVar21;
}



/* ===== FUN_0001b8b4 @ 0001b8b4 size=16 ===== */

undefined2 FUN_0001b8b4(undefined2 *param_1)

{
  return *param_1;
}



/* ===== FUN_0001b8c4 @ 0001b8c4 size=36 ===== */

int FUN_0001b8c4(byte *param_1)

{
  return (uint)param_1[2] * 0x10000 + (uint)param_1[3] * 0x1000000 + (uint)*param_1 +
         (uint)param_1[1] * 0x100;
}



/* ===== FUN_0001b8e8 @ 0001b8e8 size=68 ===== */

int FUN_0001b8e8(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint in_r12;
  bool bVar5;
  
  bVar1 = param_1[5];
  bVar2 = param_1[4];
  uVar4 = (uint)(byte)(param_1[7] | param_1[6] | bVar1 | bVar2);
  bVar5 = uVar4 == 0;
  if (bVar5) {
    uVar4 = (uint)param_1[2];
    in_r12 = (uint)param_1[3];
    bVar1 = *param_1;
  }
  if (bVar5) {
    bVar2 = param_1[1];
  }
  if (bVar5) {
    iVar3 = uVar4 * 0x10000 + in_r12 * 0x1000000 + (uint)bVar1 + (uint)bVar2 * 0x100;
  }
  else {
    iVar3 = -1;
  }
  return iVar3;
}



/* ===== FUN_0001b92c @ 0001b92c size=260 ===== */

int FUN_0001b92c(undefined4 param_1,char *param_2,char *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  size_t sVar3;
  undefined4 local_20;
  
  uVar2 = local_20;
  local_20 = CONCAT22(local_20._2_2_,0x25);
  if (param_2 == (char *)0xffffffff) {
    local_20._3_1_ = SUB41(uVar2,3);
    local_20._0_3_ = CONCAT21(DAT_0002c96c,0x25);
  }
  else if (param_2 == (char *)0xfffffffe) {
    local_20 = 0x382e25;
  }
  else if (param_2 != (char *)0x0) {
    strcpy((char *)((int)&local_20 + 1),param_2);
  }
  sVar3 = strlen((char *)&local_20);
  *(undefined2 *)((int)&local_20 + sVar3) = s_local_000300f4._4_2_;
  if (param_3 == (char *)0x0) {
    *(undefined2 *)((int)&local_20 + sVar3 + 1) = s_Below__Mac_OS_refers_to_Mac_OS_b_0002cde8._72_2_
    ;
  }
  else {
    strcpy((char *)((int)&local_20 + sVar3 + 1),param_3);
  }
  uVar1 = -(DAT_000d54a8 + 1);
  DAT_000d54a8 = DAT_000d54a8 + 1 & 3;
  if (-1 < (int)uVar1) {
    DAT_000d54a8 = -(uVar1 & 3);
  }
  sprintf((char *)(DAT_000d54a8 * 0x18 + 0xd5448),(char *)&local_20,param_1);
  return DAT_000d54a8 * 0x18 + 0xd5448;
}



/* ===== FUN_0001ba30 @ 0001ba30 size=84 ===== */

void FUN_0001ba30(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  
  do {
    bVar2 = *param_2;
    pbVar1 = param_1;
    while( true ) {
      param_1 = pbVar1 + 1;
      param_2 = param_2 + 1;
      if ((bVar2 & 0x80) != 0) break;
      *pbVar1 = bVar2;
      if (bVar2 == 0) {
        return;
      }
      bVar2 = *param_2;
      pbVar1 = param_1;
    }
    if (DAT_00044144 != 0) {
      bVar2 = *(byte *)(DAT_00044144 + (bVar2 & 0x7f));
    }
    *pbVar1 = bVar2;
  } while( true );
}



/* ===== FUN_0001ba84 @ 0001ba84 size=168 ===== */

undefined4 FUN_0001ba84(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint __c;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  iVar1 = __ctype_b;
  if (param_3 == 0) {
    return 0;
  }
  pbVar4 = (byte *)(param_1 + -1);
  pbVar5 = (byte *)(param_2 + -1);
  pbVar6 = pbVar4 + param_3;
  while( true ) {
    pbVar4 = pbVar4 + 1;
    __c = (uint)*pbVar4;
    uVar2 = __c;
    if ((*(ushort *)(iVar1 + __c * 2) & 1) != 0) {
      uVar2 = tolower(__c);
      uVar2 = uVar2 & 0xff;
    }
    pbVar5 = pbVar5 + 1;
    uVar3 = (uint)*pbVar5;
    if ((*(ushort *)(iVar1 + uVar3 * 2) & 1) != 0) {
      uVar3 = tolower(uVar3);
      uVar3 = uVar3 & 0xff;
    }
    if (uVar2 != uVar3) break;
    if ((__c == 0) || (pbVar6 == pbVar4)) {
      return 0;
    }
  }
  if (uVar2 < uVar3) {
    return 0xffffffff;
  }
  return 1;
}



/* ===== FUN_0001bb2c @ 0001bb2c size=104 ===== */

char * FUN_0001bb2c(char *param_1,int param_2)

{
  char *pcVar1;
  size_t __n;
  int iVar2;
  
  pcVar1 = param_1;
  if (*param_1 != '\0' && param_2 != 0) {
    do {
      param_1 = pcVar1;
      __n = _stdlib_mb_cur_max();
      iVar2 = mblen(param_1,__n);
      if (iVar2 < 1) {
        iVar2 = 1;
      }
      param_2 = param_2 - iVar2;
      pcVar1 = param_1 + iVar2;
    } while (param_1[iVar2] != '\0' && param_2 != 0);
  }
  return param_1;
}



/* ===== FUN_0001bb94 @ 0001bb94 size=36 ===== */

int FUN_0001bb94(char *param_1)

{
  size_t __n;
  int iVar1;
  
  __n = _stdlib_mb_cur_max();
  iVar1 = mblen(param_1,__n);
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  return iVar1;
}



/* ===== FUN_0001bbb8 @ 0001bbb8 size=104 ===== */

byte * FUN_0001bbb8(byte *param_1,uint param_2)

{
  size_t __n;
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)*param_1;
  if (uVar2 == 0) {
    return (byte *)0x0;
  }
  do {
    if (param_2 == uVar2) {
      return param_1;
    }
    __n = _stdlib_mb_cur_max();
    iVar1 = mblen((char *)param_1,__n);
    if (iVar1 < 1) {
      iVar1 = 1;
    }
    param_1 = param_1 + iVar1;
    uVar2 = (uint)*param_1;
  } while (uVar2 != 0);
  return (byte *)0x0;
}



/* ===== FUN_0001bc20 @ 0001bc20 size=92 ===== */

byte * FUN_0001bc20(byte *param_1,uint param_2)

{
  size_t __n;
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  
  uVar2 = (uint)*param_1;
  if (uVar2 != 0) {
    pbVar3 = (byte *)0x0;
    do {
      if (uVar2 == param_2) {
        pbVar3 = param_1;
      }
      __n = _stdlib_mb_cur_max();
      iVar1 = mblen((char *)param_1,__n);
      if (iVar1 < 1) {
        iVar1 = 1;
      }
      param_1 = param_1 + iVar1;
      uVar2 = (uint)*param_1;
    } while (uVar2 != 0);
    return pbVar3;
  }
  return (byte *)0x0;
}



/* ===== FUN_0001bd30 @ 0001bd30 size=2008 ===== */

int FUN_0001bd30(int param_1,int param_2,int param_3,int param_4)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  uint uVar10;
  int iVar11;
  undefined *puVar12;
  uint uVar14;
  int iVar15;
  byte *pbVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint __n;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  uint local_44;
  undefined *puVar13;
  
  iVar2 = DAT_0001c508;
  uVar14 = *(uint *)(&DAT_0002c580 + param_4 * 4);
  uVar8 = *(uint *)(&DAT_0002c580 + param_3 * 4);
  uVar22 = *(uint *)(DAT_0001c508 + 0x2a0);
  local_44 = *(uint *)(DAT_0001c508 + 0x29c);
  uVar18 = *(uint *)(DAT_0001c508 + 0x2a4);
  iVar5 = DAT_0001c508 + -0x10f30;
joined_r0x0001bd8c:
  do {
    while (uVar19 = local_44, param_3 <= (int)uVar18) {
LAB_0001bdc8:
      uVar3 = uVar22 & uVar8;
      iVar15 = param_1;
      while( true ) {
        iVar17 = DAT_0001c508;
        uVar20 = (uint)*(byte *)(iVar15 + uVar3 * 8);
        iVar15 = iVar15 + uVar3 * 8;
        uVar22 = uVar22 >> (uint)*(byte *)(iVar15 + 1);
        uVar18 = uVar18 - *(byte *)(iVar15 + 1);
        if (uVar20 == 0x20) break;
        if (uVar20 < 0x1f) goto joined_r0x0001bf04;
        if (uVar20 == 0x1f) {
          *(uint *)(DAT_0001c508 + 0x2a0) = uVar22;
          *(uint *)(iVar17 + 0x29c) = local_44;
          *(uint *)(iVar17 + 0x2a4) = uVar18;
          return 0;
        }
        if (uVar20 == 99) {
          return 1;
        }
        for (; (int)uVar18 < (int)(uVar20 & 0x1f); uVar18 = uVar18 + 8) {
          iVar17 = *(int *)(iVar2 + -0xf20);
          *(int *)(iVar2 + -0xf20) = iVar17 + -1;
          if (iVar17 < 1) {
            uVar3 = FUN_00019950();
            if (uVar3 == 0xffffffff) {
              if ((int)uVar18 < 0) {
                return 1;
              }
              break;
            }
          }
          else {
            pbVar16 = *(byte **)(iVar2 + -0xf24);
            *(byte **)(iVar2 + -0xf24) = pbVar16 + 1;
            uVar3 = (uint)*pbVar16;
          }
          uVar22 = uVar22 | uVar3 << (uVar18 & 0xff);
        }
        iVar15 = *(int *)(iVar15 + 4);
        uVar3 = *(uint *)(&DAT_0002c580 + (uVar20 & 0x1f) * 4) & uVar22;
      }
      uVar3 = local_44 + 1;
      if (uVar3 != 0x10000) {
        local_44 = uVar3;
      }
      (&DAT_000c4270)[uVar19] = (char)*(undefined2 *)(iVar15 + 4);
      if (uVar3 == 0x10000) {
        if (*(int *)(iVar2 + -0xe28) == 0) {
          iVar15 = FUN_00019bdc(DAT_0001c50c);
        }
        else {
          iVar15 = FUN_00018f34();
        }
        if (iVar15 != 0) {
          return iVar15;
        }
        local_44 = 0;
      }
    }
    iVar15 = *(int *)(iVar2 + -0xf20);
    *(int *)(iVar2 + -0xf20) = iVar15 + -1;
    if (iVar15 < 1) {
      uVar3 = FUN_00019950();
      if (uVar3 == 0xffffffff) {
        if ((int)uVar18 < 0) {
          return 1;
        }
        goto LAB_0001bdc8;
      }
    }
    else {
      pbVar16 = *(byte **)(iVar2 + -0xf24);
      *(byte **)(iVar2 + -0xf24) = pbVar16 + 1;
      uVar3 = (uint)*pbVar16;
    }
    uVar22 = uVar22 | uVar3 << (uVar18 & 0xff);
    uVar18 = uVar18 + 8;
  } while( true );
joined_r0x0001bf04:
  if ((int)uVar20 <= (int)uVar18) goto LAB_0001bf54;
  iVar17 = *(int *)(iVar2 + -0xf20);
  *(int *)(iVar2 + -0xf20) = iVar17 + -1;
  if (iVar17 < 1) {
    uVar19 = FUN_00019950();
    if (uVar19 == 0xffffffff) {
      if ((int)uVar18 < 0) {
        return 1;
      }
      goto LAB_0001bf54;
    }
  }
  else {
    pbVar16 = *(byte **)(iVar2 + -0xf24);
    *(byte **)(iVar2 + -0xf24) = pbVar16 + 1;
    uVar19 = (uint)*pbVar16;
  }
  uVar22 = uVar22 | uVar19 << (uVar18 & 0xff);
  uVar18 = uVar18 + 8;
  goto joined_r0x0001bf04;
LAB_0001bf54:
  uVar1 = *(ushort *)(iVar15 + 4);
  uVar3 = *(uint *)(&DAT_0002c580 + uVar20 * 4);
  uVar19 = uVar22 >> uVar20;
  for (uVar18 = uVar18 - uVar20; (int)uVar18 < param_4; uVar18 = uVar18 + 8) {
    iVar15 = *(int *)(iVar2 + -0xf20);
    *(int *)(iVar2 + -0xf20) = iVar15 + -1;
    if (iVar15 < 1) {
      uVar20 = FUN_00019950();
      if (uVar20 == 0xffffffff) {
        if ((int)uVar18 < 0) {
          return 1;
        }
        break;
      }
    }
    else {
      pbVar16 = *(byte **)(iVar2 + -0xf24);
      *(byte **)(iVar2 + -0xf24) = pbVar16 + 1;
      uVar20 = (uint)*pbVar16;
    }
    uVar19 = uVar19 | uVar20 << (uVar18 & 0xff);
  }
  uVar20 = uVar19 & uVar14;
  iVar15 = param_2;
  while( true ) {
    uVar21 = (uint)*(byte *)(iVar15 + uVar20 * 8);
    iVar15 = iVar15 + uVar20 * 8;
    uVar19 = uVar19 >> (uint)*(byte *)(iVar15 + 1);
    uVar18 = uVar18 - *(byte *)(iVar15 + 1);
    if (uVar21 < 0x20) break;
    if (uVar21 == 99) {
      return 1;
    }
    for (; (int)uVar18 < (int)(uVar21 & 0x1f); uVar18 = uVar18 + 8) {
      iVar17 = *(int *)(iVar2 + -0xf20);
      *(int *)(iVar2 + -0xf20) = iVar17 + -1;
      if (iVar17 < 1) {
        uVar20 = FUN_00019950();
        if (uVar20 == 0xffffffff) {
          if ((int)uVar18 < 0) {
            return 1;
          }
          break;
        }
      }
      else {
        pbVar16 = *(byte **)(iVar2 + -0xf24);
        *(byte **)(iVar2 + -0xf24) = pbVar16 + 1;
        uVar20 = (uint)*pbVar16;
      }
      uVar19 = uVar19 | uVar20 << (uVar18 & 0xff);
    }
    iVar15 = *(int *)(iVar15 + 4);
    uVar20 = *(uint *)(&DAT_0002c580 + (uVar21 & 0x1f) * 4) & uVar19;
  }
  for (; (int)uVar18 < (int)uVar21; uVar18 = uVar18 + 8) {
    iVar17 = *(int *)(iVar2 + -0xf20);
    *(int *)(iVar2 + -0xf20) = iVar17 + -1;
    if (iVar17 < 1) {
      uVar20 = FUN_00019950();
      if (uVar20 == 0xffffffff) {
        if ((int)uVar18 < 0) {
          return 1;
        }
        break;
      }
    }
    else {
      pbVar16 = *(byte **)(iVar2 + -0xf24);
      *(byte **)(iVar2 + -0xf24) = pbVar16 + 1;
      uVar20 = (uint)*pbVar16;
    }
    uVar19 = uVar19 | uVar20 << (uVar18 & 0xff);
  }
  uVar20 = (uVar3 & uVar22) + (uint)uVar1;
  uVar3 = (local_44 - *(ushort *)(iVar15 + 4)) - (*(uint *)(&DAT_0002c580 + uVar21 * 4) & uVar19);
  uVar22 = local_44;
  do {
    uVar3 = uVar3 & 0xffff;
    uVar10 = uVar3;
    if (uVar3 <= uVar22) {
      uVar10 = uVar22;
    }
    __n = 0x10000 - uVar10;
    if (uVar20 < 0x10000 - uVar10) {
      __n = uVar20;
    }
    uVar20 = uVar20 - __n;
    if (uVar22 - uVar3 < __n) {
      if (__n - 1 < 0xf || uVar3 < uVar22 + 0x10 && uVar22 < uVar3 + 0x10) {
        puVar7 = &DAT_000c4270 + uVar22;
        puVar13 = &DAT_000c4270 + uVar3;
        do {
          puVar12 = puVar13 + 1;
          *puVar7 = *puVar13;
          puVar7 = puVar7 + 1;
          puVar13 = puVar12;
        } while ((undefined *)(iVar5 + uVar3 + __n) != puVar12);
      }
      else {
        puVar9 = (undefined8 *)(&DAT_000c4270 + uVar22);
        puVar4 = (undefined8 *)((__n & 0xfffffff0) + (int)puVar9);
        puVar6 = (undefined8 *)(&DAT_000c4270 + uVar3);
        do {
          uVar23 = *puVar6;
          uVar24 = puVar6[1];
          puVar6 = puVar6 + 2;
          *puVar9 = uVar23;
          puVar9[1] = uVar24;
          puVar9 = puVar9 + 2;
        } while (puVar4 != puVar9);
        uVar10 = __n & 0xfffffff0;
        iVar15 = __n - uVar10;
        iVar17 = uVar3 + uVar10;
        iVar11 = uVar22 + uVar10;
        if (((((__n != uVar10) && ((&DAT_000c4270)[iVar11] = (&DAT_000c4270)[iVar17], iVar15 != 1))
             && ((&DAT_000c4271)[iVar11] = (&DAT_000c4271)[iVar17], iVar15 != 2)) &&
            ((((&DAT_000c4272)[iVar11] = (&DAT_000c4272)[iVar17], iVar15 != 3 &&
              ((&DAT_000c4273)[iVar11] = (&DAT_000c4273)[iVar17], iVar15 != 4)) &&
             ((*(undefined1 *)((int)&DAT_000c4274 + iVar11) =
                    *(undefined1 *)((int)&DAT_000c4274 + iVar17), iVar15 != 5 &&
              ((*(undefined1 *)((int)&DAT_000c4274 + iVar11 + 1) =
                     *(undefined1 *)((int)&DAT_000c4274 + iVar17 + 1), iVar15 != 6 &&
               (*(undefined1 *)((int)&DAT_000c4274 + iVar11 + 2) =
                     *(undefined1 *)((int)&DAT_000c4274 + iVar17 + 2), iVar15 != 7)))))))) &&
           ((*(undefined1 *)((int)&DAT_000c4274 + iVar11 + 3) =
                  *(undefined1 *)((int)&DAT_000c4274 + iVar17 + 3), iVar15 != 8 &&
            ((((((&DAT_000c4278)[iVar11] = (&DAT_000c4278)[iVar17], iVar15 != 9 &&
                ((&DAT_000c4279)[iVar11] = (&DAT_000c4279)[iVar17], iVar15 != 10)) &&
               ((&DAT_000c427a)[iVar11] = (&DAT_000c427a)[iVar17], iVar15 != 0xb)) &&
              (((&DAT_000c427b)[iVar11] = (&DAT_000c427b)[iVar17], iVar15 != 0xc &&
               (*(undefined1 *)((int)&DAT_000c427c + iVar11) =
                     *(undefined1 *)((int)&DAT_000c427c + iVar17), iVar15 != 0xd)))) &&
             (*(undefined1 *)((int)&DAT_000c427c + iVar11 + 1) =
                   *(undefined1 *)((int)&DAT_000c427c + iVar17 + 1), iVar15 != 0xe)))))) {
          *(undefined1 *)((int)&DAT_000c427c + iVar11 + 2) =
               *(undefined1 *)((int)&DAT_000c427c + iVar17 + 2);
        }
      }
    }
    else {
      memcpy((void *)(DAT_0001c50c + uVar22),(void *)(DAT_0001c50c + uVar3),__n);
    }
    local_44 = uVar22 + __n;
    if (local_44 == 0x10000) {
      if (*(int *)(iVar2 + -0xe28) == 0) {
        iVar15 = FUN_00019bdc(DAT_0001c50c,uVar22 + __n);
      }
      else {
        iVar15 = FUN_00018f34();
      }
      if (iVar15 != 0) {
        return iVar15;
      }
      local_44 = 0;
    }
    uVar3 = __n + uVar3;
    uVar22 = local_44;
  } while (uVar20 != 0);
  uVar22 = uVar19 >> uVar21;
  uVar18 = uVar18 - uVar21;
  goto joined_r0x0001bd8c;
}



/* ===== FUN_0001c510 @ 0001c510 size=6760 ===== */

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_0001c510(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  char cVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  void *pvVar12;
  uint uVar13;
  uint *puVar14;
  undefined4 uVar15;
  uint *puVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  uint *puVar20;
  uint uVar21;
  uint *puVar22;
  int iVar23;
  uint *puVar24;
  uint uVar25;
  uint uVar26;
  undefined1 uVar27;
  int iVar28;
  uint *puVar29;
  uint uVar30;
  uint *puVar31;
  uint *puVar32;
  uint local_a88;
  uint *local_a84;
  uint *local_a80;
  uint local_a78;
  uint *local_a74;
  uint *local_a70;
  uint *local_a60;
  int local_a54;
  uint *local_a50;
  undefined4 local_a3c;
  uint local_a38 [17];
  uint local_9f4 [51];
  uint local_928 [288];
  uint auStack_4a8 [289];
  
  iVar7 = DAT_0001cc70;
  iVar28 = *(int *)(DAT_0001cc70 + 0x260);
  if (iVar28 != 0) {
    uVar15 = *(undefined4 *)(DAT_0001cc70 + 0x264);
    local_9f4[0x12] = *(undefined4 *)(DAT_0001cc70 + 0x26c);
    goto LAB_0001c534;
  }
  auVar1._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
  auVar1._0_8_ = 0x800000008;
  auVar1 = auVar1 << 0x40 | auVar1;
  puVar29 = local_928;
  do {
    *puVar29 = *(uint *)auVar1;
    puVar29[1] = *(uint *)(auVar1 + (undefined1  [16])0x4);
    puVar29[2] = *(uint *)(auVar1 + (undefined1  [16])0x8);
    puVar29[3] = *(uint *)(auVar1 + (undefined1  [16])0xc);
    puVar29 = puVar29 + 4;
  } while (puVar29 != local_928 + 0x90);
  auVar2._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
  auVar2._0_8_ = 0x900000009;
  auVar2 = auVar2 << 0x40 | auVar2;
  do {
    puVar9 = puVar29;
    *puVar9 = *(uint *)auVar2;
    puVar9[1] = *(uint *)(auVar2 + (undefined1  [16])0x4);
    puVar9[2] = *(uint *)(auVar2 + (undefined1  [16])0x8);
    puVar9[3] = *(uint *)(auVar2 + (undefined1  [16])0xc);
    puVar29 = puVar9 + 4;
  } while (puVar29 != local_928 + 0x100);
  auVar3._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
  auVar3._0_8_ = 0x700000007;
  auVar3 = auVar3 << 0x40 | auVar3;
  uVar8 = *(uint *)auVar3;
  uVar19 = *(uint *)(auVar3 + (undefined1  [16])0x4);
  uVar10 = *(uint *)(auVar3 + (undefined1  [16])0x8);
  uVar25 = *(uint *)(auVar3 + (undefined1  [16])0xc);
  auVar4._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
  auVar4._0_8_ = 0x800000008;
  auVar4 = auVar4 << 0x40 | auVar4;
  *puVar29 = uVar8;
  puVar9[5] = uVar19;
  puVar9[6] = uVar10;
  puVar9[7] = uVar25;
  iVar28 = *(int *)(DAT_0001cc70 + 0x290);
  iVar17 = *(int *)(DAT_0001cc70 + 0x294);
  *(undefined4 *)(DAT_0001cc70 + 0x268) = 7;
  local_928[0x104] = uVar8;
  local_928[0x105] = uVar19;
  local_928[0x106] = uVar10;
  local_928[0x107] = uVar25;
  local_928[0x108] = uVar8;
  local_928[0x109] = uVar19;
  local_928[0x10a] = uVar10;
  local_928[0x10b] = uVar25;
  local_928[0x10c] = uVar8;
  local_928[0x10d] = uVar19;
  local_928[0x10e] = uVar10;
  local_928[0x10f] = uVar25;
  local_928[0x110] = uVar8;
  local_928[0x111] = uVar19;
  local_928[0x112] = uVar10;
  local_928[0x113] = uVar25;
  local_928[0x114] = uVar8;
  local_928[0x115] = uVar19;
  local_928[0x116] = uVar10;
  local_928[0x117] = uVar25;
  local_928[0x118] = *(undefined4 *)auVar4;
  local_928[0x119] = *(undefined4 *)(auVar4 + (undefined1  [16])0x4);
  local_928[0x11a] = *(undefined4 *)(auVar4 + (undefined1  [16])0x8);
  local_928[0x11b] = *(undefined4 *)(auVar4 + (undefined1  [16])0xc);
  local_928[0x11c] = *(undefined4 *)auVar4;
  local_928[0x11d] = *(undefined4 *)(auVar4 + (undefined1  [16])0x4);
  local_928[0x11e] = *(undefined4 *)(auVar4 + (undefined1  [16])0x8);
  local_928[0x11f] = *(undefined4 *)(auVar4 + (undefined1  [16])0xc);
  memset(local_9f4,0,0x44);
  puVar29 = local_928;
  do {
    puVar9 = puVar29 + 1;
    local_9f4[*puVar29] = local_9f4[*puVar29] + 1;
    puVar29 = puVar9;
  } while (puVar9 != auStack_4a8);
  if (local_9f4[0] == 0x120) {
    *(undefined4 *)(iVar7 + 0x260) = 0;
    *(undefined4 *)(iVar7 + 0x268) = 0;
  }
  else {
    if (local_9f4[1] == 0) {
      if (local_9f4[2] != 0) {
        local_a88 = 2;
LAB_0001dcc8:
        uVar8 = 1 << local_a88;
        goto LAB_0001dca4;
      }
      if (local_9f4[3] != 0) {
        local_a88 = 3;
        goto LAB_0001dcc8;
      }
      if (local_9f4[4] != 0) {
        local_a88 = 4;
        goto LAB_0001dcc8;
      }
      if (local_9f4[5] != 0) {
        local_a88 = 5;
        goto LAB_0001dcc8;
      }
      if (local_9f4[6] != 0) {
        local_a88 = 6;
        goto LAB_0001dcc8;
      }
      if (local_9f4[7] != 0) {
        local_a88 = 7;
        goto LAB_0001dcc8;
      }
      if (local_9f4[8] == 0) {
        if (local_9f4[9] != 0) {
          local_a88 = 9;
          goto LAB_0001dbfc;
        }
        if (local_9f4[10] != 0) {
          local_a88 = 10;
          goto LAB_0001dbfc;
        }
        if (local_9f4[0xb] != 0) {
          local_a88 = 0xb;
          goto LAB_0001dbfc;
        }
        if (local_9f4[0xc] != 0) {
          local_a88 = 0xc;
          goto LAB_0001dbfc;
        }
        if (local_9f4[0xd] != 0) {
          local_a88 = 0xd;
          goto LAB_0001dbfc;
        }
        if (local_9f4[0xe] != 0) {
          local_a88 = 0xe;
          goto LAB_0001dbfc;
        }
        if (local_9f4[0xf] != 0) {
          local_a88 = 0xf;
          goto LAB_0001dbfc;
        }
        if (local_9f4[0x10] != 0) {
          local_a88 = 0x10;
          goto LAB_0001dbfc;
        }
        uVar8 = 0x20000;
        local_a88 = 0x11;
      }
      else {
        local_a88 = 8;
LAB_0001dbfc:
        uVar8 = 1 << local_a88;
      }
      *(uint *)(iVar7 + 0x268) = local_a88;
      uVar19 = local_a88;
      if (local_9f4[0x10] == 0) {
        if (local_9f4[0xf] != 0) {
          local_a74 = (uint *)0xf;
          goto LAB_0001dc80;
        }
        goto LAB_0001c714;
      }
      local_a74 = (uint *)0x10;
      goto LAB_0001dc80;
    }
    uVar8 = 2;
    local_a88 = 1;
LAB_0001dca4:
    if (local_9f4[0x10] != 0) {
      local_a74 = (uint *)0x10;
LAB_0001c7c8:
      if (-1 < (int)(uVar8 - local_9f4[local_a88])) {
        uVar8 = (uVar8 - local_9f4[local_a88]) * 2;
        if (local_a88 + 1 < local_a74) {
          if ((int)(uVar8 - local_9f4[local_a88 + 1]) < 0) goto LAB_0001d75c;
          uVar8 = (uVar8 - local_9f4[local_a88 + 1]) * 2;
          if (local_a88 + 2 < local_a74) {
            if ((int)(uVar8 - local_9f4[local_a88 + 2]) < 0) goto LAB_0001d75c;
            uVar8 = (uVar8 - local_9f4[local_a88 + 2]) * 2;
            if (local_a88 + 3 < local_a74) {
              if ((int)(uVar8 - local_9f4[local_a88 + 3]) < 0) goto LAB_0001d75c;
              uVar8 = (uVar8 - local_9f4[local_a88 + 3]) * 2;
              if (local_a88 + 4 < local_a74) {
                if ((int)(uVar8 - local_9f4[local_a88 + 4]) < 0) goto LAB_0001d75c;
                uVar8 = (uVar8 - local_9f4[local_a88 + 4]) * 2;
                if (local_a88 + 5 < local_a74) {
                  if ((int)(uVar8 - local_9f4[local_a88 + 5]) < 0) goto LAB_0001d75c;
                  uVar8 = (uVar8 - local_9f4[local_a88 + 5]) * 2;
                  if (local_a88 + 6 < local_a74) {
                    if ((int)(uVar8 - local_9f4[local_a88 + 6]) < 0) goto LAB_0001d75c;
                    uVar8 = (uVar8 - local_9f4[local_a88 + 6]) * 2;
                    if (local_a88 + 7 < local_a74) {
                      if ((int)(uVar8 - local_9f4[local_a88 + 7]) < 0) goto LAB_0001d75c;
                      uVar8 = (uVar8 - local_9f4[local_a88 + 7]) * 2;
                      if (local_a88 + 8 < local_a74) {
                        if ((int)(uVar8 - local_9f4[local_a88 + 8]) < 0) goto LAB_0001d75c;
                        uVar8 = (uVar8 - local_9f4[local_a88 + 8]) * 2;
                        if (local_a88 + 9 < local_a74) {
                          if ((int)(uVar8 - local_9f4[local_a88 + 9]) < 0) goto LAB_0001d75c;
                          uVar8 = (uVar8 - local_9f4[local_a88 + 9]) * 2;
                          if (local_a88 + 10 < local_a74) {
                            if ((int)(uVar8 - local_9f4[local_a88 + 10]) < 0) goto LAB_0001d75c;
                            uVar8 = (uVar8 - local_9f4[local_a88 + 10]) * 2;
                            if (local_a88 + 0xb < local_a74) {
                              if ((int)(uVar8 - local_9f4[local_a88 + 0xb]) < 0) goto LAB_0001d75c;
                              uVar8 = (uVar8 - local_9f4[local_a88 + 0xb]) * 2;
                              if (local_a88 + 0xc < local_a74) {
                                if ((int)(uVar8 - local_9f4[local_a88 + 0xc]) < 0)
                                goto LAB_0001d75c;
                                uVar8 = (uVar8 - local_9f4[local_a88 + 0xc]) * 2;
                                if (local_a88 + 0xd < local_a74) {
                                  if ((int)(uVar8 - local_9f4[local_a88 + 0xd]) < 0)
                                  goto LAB_0001d75c;
                                  uVar8 = (uVar8 - local_9f4[local_a88 + 0xd]) * 2;
                                  if (local_a88 + 0xe < local_a74) {
                                    if ((int)(uVar8 - local_9f4[0xf]) < 0) goto LAB_0001d75c;
                                    uVar8 = (uVar8 - local_9f4[0xf]) * 2;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        local_a54 = uVar8 - local_9f4[(int)local_a74];
        if (-1 < local_a54) {
          iVar18 = (int)local_a74 - 1;
          local_9f4[(int)local_a74] = uVar8;
          local_9f4[0x23] = 0;
LAB_0001c9c8:
          puVar29 = local_9f4;
          uVar8 = 0;
          puVar9 = local_9f4 + 0x24;
          do {
            puVar29 = puVar29 + 1;
            iVar18 = iVar18 + -1;
            uVar8 = uVar8 + *puVar29;
            *puVar9 = uVar8;
            puVar9 = puVar9 + 1;
          } while (iVar18 != 0);
          goto LAB_0001c9e8;
        }
      }
LAB_0001d75c:
      uVar15 = 2;
LAB_0001d760:
      *(undefined4 *)(iVar7 + 0x260) = 0;
      return uVar15;
    }
    if (local_9f4[0xf] == 0) {
      uVar19 = 7;
LAB_0001c714:
      if (local_9f4[0xe] == 0) {
        if (local_9f4[0xd] != 0) {
          local_a74 = (uint *)0xd;
          goto LAB_0001dc80;
        }
        if (local_9f4[0xc] != 0) {
          local_a74 = (uint *)0xc;
          goto LAB_0001dc80;
        }
        if (local_9f4[0xb] != 0) {
          local_a74 = (uint *)0xb;
          goto LAB_0001dc80;
        }
        if (local_9f4[10] != 0) {
          local_a74 = (uint *)0xa;
          goto LAB_0001dc80;
        }
        if (local_9f4[9] != 0) {
          local_a74 = (uint *)0x9;
          goto LAB_0001dc80;
        }
        if (local_9f4[8] != 0) {
          local_a74 = (uint *)0x8;
          goto LAB_0001dc80;
        }
        if (local_9f4[7] != 0) {
          local_a74 = (uint *)0x7;
          goto LAB_0001dc80;
        }
        if (local_9f4[6] == 0) {
          if (local_9f4[5] == 0) {
            if (local_9f4[4] == 0) {
              if (local_9f4[3] == 0) {
                if (local_9f4[2] == 0) {
                  local_a74 = (uint *)0x0;
                  if (local_9f4[1] != 0) {
                    local_a74 = (uint *)0x1;
                  }
                }
                else {
                  local_a74 = (uint *)0x2;
                }
              }
              else {
                local_a74 = (uint *)0x3;
              }
            }
            else {
              local_a74 = (uint *)0x4;
            }
          }
          else {
            local_a74 = (uint *)0x5;
          }
        }
        else {
          local_a74 = (uint *)0x6;
        }
      }
      else {
        local_a74 = (uint *)0xe;
LAB_0001dc80:
        if (uVar19 <= local_a74) goto LAB_0001c7c0;
      }
      *(uint **)(iVar7 + 0x268) = local_a74;
    }
    else {
      local_a74 = (uint *)0xf;
    }
LAB_0001c7c0:
    if (local_a88 < local_a74) goto LAB_0001c7c8;
    local_a54 = uVar8 - local_9f4[(int)local_a74];
    if (local_a54 < 0) goto LAB_0001d75c;
    iVar18 = (int)local_a74 - 1;
    local_9f4[(int)local_a74] = uVar8;
    local_9f4[0x23] = 0;
    if (iVar18 != 0) goto LAB_0001c9c8;
LAB_0001c9e8:
    local_9f4[0x23] = 0;
    memset(auStack_4a8,0,0x480);
    uVar8 = 0;
    puVar29 = local_928;
    do {
      puVar9 = puVar29 + 1;
      uVar19 = *puVar29;
      if (uVar19 != 0) {
        uVar10 = local_9f4[uVar19 + 0x22];
        local_9f4[uVar19 + 0x22] = uVar10 + 1;
        auStack_4a8[uVar10] = uVar8;
      }
      uVar8 = uVar8 + 1;
      puVar29 = puVar9;
    } while (puVar9 != auStack_4a8);
    uVar8 = 0;
    local_9f4[0x11] = 0;
    uVar19 = local_9f4[(int)local_a74 + 0x22];
    local_a38[1] = 0;
    local_9f4[0x22] = 0;
    if (local_a88 <= local_a74) {
      uVar10 = 0;
      uVar30 = 0;
      uVar25 = 0;
      iVar18 = -1;
      local_a80 = DAT_0001cc74;
      local_a70 = local_9f4 + local_a88;
      local_a50 = auStack_4a8;
      do {
        puVar9 = local_a70 + 1;
        uVar13 = 1 << (local_a88 - 1 & 0xff);
        puVar29 = local_a50;
        for (uVar11 = *local_a70; local_a50 = puVar29, uVar11 != 0; uVar11 = uVar11 - 1) {
          puVar20 = local_a38 + iVar18 + 1;
          puVar16 = local_9f4 + iVar18 + 0x12;
          while( true ) {
            iVar23 = iVar18;
            puVar22 = puVar16;
            puVar31 = puVar20;
            puVar16 = puVar22 + 1;
            uVar26 = *puVar22 + uVar30;
            if ((int)local_a88 <= (int)uVar26) break;
            uVar21 = local_a88 - uVar26;
            uVar8 = 1 << (uVar21 & 0xff);
            iVar18 = iVar23 + 1;
            if (uVar11 < uVar8) {
              uVar21 = uVar21 + 1;
              uVar10 = (int)local_a74 - uVar26;
              if (*(uint *)(iVar7 + 0x268) <= (int)local_a74 - uVar26) {
                uVar10 = *(uint *)(iVar7 + 0x268);
              }
              if (uVar21 < uVar10) {
                uVar8 = (uVar8 - uVar11) * 2;
                uVar30 = *puVar9;
                puVar20 = puVar9;
                if (uVar30 < uVar8) {
                  do {
                    uVar21 = uVar21 + 1;
                    uVar8 = (uVar8 - uVar30) * 2;
                    if (uVar10 <= uVar21) break;
                    puVar20 = puVar20 + 1;
                    uVar30 = *puVar20;
                  } while (uVar30 < uVar8);
                }
              }
            }
            if (uVar26 < local_928[0x100] && local_928[0x100] < uVar26 + uVar21) {
              uVar21 = local_928[0x100] - uVar26;
            }
            *puVar16 = uVar21;
            uVar10 = 1 << (uVar21 & 0xff);
            pvVar12 = malloc((uVar10 + 1) * 8);
            if (pvVar12 == (void *)0x0) {
              uVar8 = local_a38[1];
              if (iVar18 != 0) {
                while (uVar8 != 0) {
                  iVar28 = *(int *)(uVar8 + -4);
                  free((void *)(uVar8 + -8));
                  uVar8 = iVar28;
                }
              }
              uVar15 = 3;
              goto LAB_0001d760;
            }
            uVar8 = (int)pvVar12 + 8;
            puVar20 = puVar31 + 1;
            *puVar20 = uVar8;
            *local_a80 = uVar8;
            local_a80 = (uint *)((int)pvVar12 + 4);
            *(undefined4 *)((int)pvVar12 + 4) = 0;
            uVar30 = uVar26;
            if (iVar18 != 0) {
              puVar31 = (uint *)(*puVar31 +
                                (((1 << (uVar26 & 0xff)) - 1U & uVar25) >>
                                (uVar26 - *puVar22 & 0xff)) * 8);
              local_a3c._0_2_ = CONCAT11((char)*puVar22,(char)uVar21 + ' ');
              local_9f4[iVar23 + 0x23] = uVar25;
              *puVar31 = local_a3c;
              puVar31[1] = uVar8;
              local_a38[0] = uVar8;
            }
          }
          if (puVar29 < auStack_4a8 + uVar19) {
            local_a50 = puVar29 + 1;
            uVar26 = *puVar29;
            if (uVar26 < 0x101) {
              if (uVar26 == 0x100) {
                uVar27 = 0x1f;
              }
              else {
                uVar27 = 0x20;
              }
              local_a38[0] = CONCAT22(local_a38[0]._2_2_,(short)uVar26);
            }
            else {
              uVar27 = *(undefined1 *)(iVar17 + (uVar26 - 0x101));
              local_a38[0] = CONCAT22(local_a38[0]._2_2_,
                                      *(undefined2 *)(iVar28 + (uVar26 - 0x101) * 2));
            }
          }
          else {
            uVar27 = 99;
          }
          for (uVar26 = uVar25 >> (uVar30 & 0xff); uVar26 < uVar10;
              uVar26 = uVar26 + (1 << (local_a88 - uVar30 & 0xff))) {
            puVar29 = (uint *)(uVar8 + uVar26 * 8);
            local_a3c._2_2_ = (undefined2)(local_a3c >> 0x10);
            local_a3c._0_2_ = CONCAT11((char)(local_a88 - uVar30),uVar27);
            *puVar29 = local_a3c;
            puVar29[1] = local_a38[0];
          }
          uVar21 = uVar13 & uVar25;
          uVar26 = uVar13;
          while (uVar21 != 0) {
            uVar25 = uVar25 ^ uVar26;
            uVar26 = uVar26 >> 1;
            uVar21 = uVar25 & uVar26;
          }
          uVar25 = uVar25 ^ uVar26;
          iVar18 = iVar23;
          if (local_9f4[iVar23 + 0x22] != ((1 << (uVar30 & 0xff)) - 1U & uVar25)) {
            iVar18 = iVar23 + -1;
            uVar30 = uVar30 - local_9f4[iVar23 + 0x11];
            if (((1 << (uVar30 & 0xff)) - 1U & uVar25) != local_9f4[iVar23 + 0x21]) {
              iVar18 = iVar23 + -2;
              uVar30 = uVar30 - local_9f4[iVar23 + 0x10];
              if (((1 << (uVar30 & 0xff)) - 1U & uVar25) != local_9f4[iVar23 + 0x20]) {
                iVar18 = iVar23 + -3;
                uVar30 = uVar30 - local_9f4[iVar23 + 0xf];
                if (((1 << (uVar30 & 0xff)) - 1U & uVar25) != local_9f4[iVar23 + 0x1f]) {
                  iVar18 = iVar23 + -4;
                  uVar30 = uVar30 - local_9f4[iVar23 + 0xe];
                  if (((1 << (uVar30 & 0xff)) - 1U & uVar25) != local_9f4[iVar23 + 0x1e]) {
                    iVar18 = iVar23 + -5;
                    uVar30 = uVar30 - local_9f4[iVar23 + 0xd];
                    if (((1 << (uVar30 & 0xff)) - 1U & uVar25) != local_9f4[iVar23 + 0x1d]) {
                      iVar18 = iVar23 + -6;
                      uVar30 = uVar30 - local_9f4[iVar23 + 0xc];
                      if (((1 << (uVar30 & 0xff)) - 1U & uVar25) != local_9f4[iVar23 + 0x1c]) {
                        iVar18 = iVar23 + -7;
                        uVar30 = uVar30 - local_9f4[iVar23 + 0xb];
                        if (((1 << (uVar30 & 0xff)) - 1U & uVar25) != local_9f4[iVar23 + 0x1b]) {
                          iVar18 = iVar23 + -8;
                          uVar30 = uVar30 - local_9f4[iVar23 + 10];
                          if (((1 << (uVar30 & 0xff)) - 1U & uVar25) != local_9f4[iVar23 + 0x1a]) {
                            iVar18 = iVar23 + -9;
                            uVar30 = uVar30 - local_9f4[iVar23 + 9];
                            if (((1 << (uVar30 & 0xff)) - 1U & uVar25) != local_9f4[iVar23 + 0x19])
                            {
                              iVar18 = iVar23 + -10;
                              uVar30 = uVar30 - local_9f4[iVar23 + 8];
                              if (((1 << (uVar30 & 0xff)) - 1U & uVar25) != local_9f4[iVar23 + 0x18]
                                 ) {
                                iVar18 = iVar23 + -0xb;
                                uVar30 = uVar30 - local_9f4[iVar23 + 7];
                                if (((1 << (uVar30 & 0xff)) - 1U & uVar25) !=
                                    local_9f4[iVar23 + 0x17]) {
                                  iVar18 = iVar23 + -0xc;
                                  uVar30 = uVar30 - local_9f4[iVar23 + 6];
                                  if (((1 << (uVar30 & 0xff)) - 1U & uVar25) !=
                                      local_9f4[iVar23 + 0x16]) {
                                    iVar18 = iVar23 + -0xd;
                                    uVar30 = uVar30 - local_9f4[iVar23 + 5];
                                    if (((1 << (uVar30 & 0xff)) - 1U & uVar25) !=
                                        local_9f4[iVar23 + 0x15]) {
                                      iVar18 = iVar23 + -0xe;
                                      uVar30 = uVar30 - local_9f4[iVar23 + 4];
                                      if (((1 << (uVar30 & 0xff)) - 1U & uVar25) !=
                                          local_9f4[iVar23 + 0x14]) {
                                        iVar18 = iVar23 + -0xf;
                                        uVar30 = uVar30 - local_9f4[iVar23 + 3];
                                        if (((1 << (uVar30 & 0xff)) - 1U & uVar25) !=
                                            local_9f4[iVar23 + 0x13]) {
                                          iVar18 = iVar23 + -0x10;
                                          uVar30 = uVar30 - local_9f4[iVar23 + 2];
                                          if (((1 << (uVar30 & 0xff)) - 1U & uVar25) !=
                                              local_9f4[iVar23 + 0x12]) {
                                            iVar18 = iVar23 + -0x11;
                                            uVar30 = uVar30 - local_9f4[iVar23 + 1];
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          puVar29 = local_a50;
        }
        local_a88 = local_a88 + 1;
        local_a70 = puVar9;
      } while (local_a88 != (int)local_a74 + 1U);
    }
    *(uint *)(iVar7 + 0x268) = local_9f4[0x12];
    if (local_a54 != 0 && local_a74 != (uint *)0x1) {
      uVar15 = 1;
      goto LAB_0001d760;
    }
  }
  auVar5._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
  auVar5._0_8_ = 0x500000005;
  auVar5 = auVar5 << 0x40 | auVar5;
  local_928[0] = *(uint *)auVar5;
  local_928[1] = *(uint *)(auVar5 + (undefined1  [16])0x4);
  local_928[2] = *(uint *)(auVar5 + (undefined1  [16])0x8);
  local_928[3] = *(uint *)(auVar5 + (undefined1  [16])0xc);
  *(undefined4 *)(iVar7 + 0x26c) = 5;
  puVar20 = *(uint **)(iVar7 + 0x298);
  puVar29 = local_928 + 0x20;
  local_928[4] = local_928[0];
  local_928[5] = local_928[1];
  local_928[6] = local_928[2];
  local_928[7] = local_928[3];
  local_928[8] = local_928[0];
  local_928[9] = local_928[1];
  local_928[10] = local_928[2];
  local_928[0xb] = local_928[3];
  local_928[0xc] = local_928[0];
  local_928[0xd] = local_928[1];
  local_928[0xe] = local_928[2];
  local_928[0xf] = local_928[3];
  local_928[0x10] = local_928[0];
  local_928[0x11] = local_928[1];
  local_928[0x12] = local_928[2];
  local_928[0x13] = local_928[3];
  local_928[0x14] = local_928[0];
  local_928[0x15] = local_928[1];
  local_928[0x16] = local_928[2];
  local_928[0x17] = local_928[3];
  local_928[0x18] = local_928[0];
  local_928[0x19] = local_928[1];
  local_928[0x1a] = local_928[2];
  local_928[0x1b] = local_928[3];
  local_928[0x1c] = local_928[0];
  local_928[0x1d] = local_928[1];
  local_928[0x1e] = local_928[2];
  local_928[0x1f] = local_928[3];
  memset(local_9f4,0,0x44);
  puVar9 = local_928;
  do {
    puVar16 = puVar9 + 1;
    local_9f4[*puVar9] = local_9f4[*puVar9] + 1;
    puVar9 = puVar16;
  } while (puVar16 != puVar29);
  if (local_9f4[0] == 0x20) {
    local_9f4[0x12] = 0;
    *(undefined4 *)(iVar7 + 0x264) = 0;
    uVar15 = 0;
    *(undefined4 *)(iVar7 + 0x26c) = 0;
  }
  else {
    if (local_9f4[1] == 0) {
      if (local_9f4[2] != 0) {
        local_a88 = 2;
LAB_0001dc10:
        uVar8 = 1 << local_a88;
        goto LAB_0001dc1c;
      }
      if (local_9f4[3] != 0) {
        local_a88 = 3;
        goto LAB_0001dc10;
      }
      if (local_9f4[4] != 0) {
        local_a88 = 4;
        goto LAB_0001dc10;
      }
      if (local_9f4[5] != 0) {
        local_a88 = 5;
        goto LAB_0001dc10;
      }
      if (local_9f4[6] == 0) {
        if (local_9f4[7] != 0) {
          local_a88 = 7;
          goto LAB_0001ddc0;
        }
        if (local_9f4[8] != 0) {
          local_a88 = 8;
          goto LAB_0001ddc0;
        }
        if (local_9f4[9] != 0) {
          local_a88 = 9;
          goto LAB_0001ddc0;
        }
        if (local_9f4[10] != 0) {
          local_a88 = 10;
          goto LAB_0001ddc0;
        }
        if (local_9f4[0xb] != 0) {
          local_a88 = 0xb;
          goto LAB_0001ddc0;
        }
        if (local_9f4[0xc] != 0) {
          local_a88 = 0xc;
          goto LAB_0001ddc0;
        }
        if (local_9f4[0xd] != 0) {
          local_a88 = 0xd;
          goto LAB_0001ddc0;
        }
        if (local_9f4[0xe] != 0) {
          local_a88 = 0xe;
          goto LAB_0001ddc0;
        }
        if (local_9f4[0xf] != 0) {
          local_a88 = 0xf;
          goto LAB_0001ddc0;
        }
        if (local_9f4[0x10] != 0) {
          local_a88 = 0x10;
          goto LAB_0001ddc0;
        }
        uVar8 = 0x20000;
        local_a88 = 0x11;
      }
      else {
        local_a88 = 6;
LAB_0001ddc0:
        uVar8 = 1 << local_a88;
      }
      *(uint *)(iVar7 + 0x26c) = local_a88;
      uVar19 = local_a88;
      if (local_9f4[0x10] == 0) {
        if (local_9f4[0xf] != 0) {
          local_a78 = 0xf;
          goto LAB_0001dda8;
        }
        goto LAB_0001d1d8;
      }
      local_a78 = 0x10;
      goto LAB_0001dda8;
    }
    uVar8 = 2;
    local_a88 = 1;
LAB_0001dc1c:
    if (local_9f4[0x10] == 0) {
      if (local_9f4[0xf] == 0) {
        uVar19 = 5;
LAB_0001d1d8:
        if (local_9f4[0xe] == 0) {
          if (local_9f4[0xd] != 0) {
            local_a78 = 0xd;
            goto LAB_0001dda8;
          }
          if (local_9f4[0xc] != 0) {
            local_a78 = 0xc;
            goto LAB_0001dda8;
          }
          if (local_9f4[0xb] != 0) {
            local_a78 = 0xb;
            goto LAB_0001dda8;
          }
          if (local_9f4[10] != 0) {
            local_a78 = 10;
            goto LAB_0001dda8;
          }
          if (local_9f4[9] != 0) {
            local_a78 = 9;
            goto LAB_0001dda8;
          }
          if (local_9f4[8] != 0) {
            local_a78 = 8;
            goto LAB_0001dda8;
          }
          if (local_9f4[7] != 0) {
            local_a78 = 7;
            goto LAB_0001dda8;
          }
          if (local_9f4[6] != 0) {
            local_a78 = 6;
            goto LAB_0001dda8;
          }
          if (local_9f4[5] != 0) {
            local_a78 = 5;
            goto LAB_0001dda8;
          }
          if (local_9f4[4] == 0) {
            if (local_9f4[3] == 0) {
              if (local_9f4[2] == 0) {
                local_a78 = 0;
                if (local_9f4[1] != 0) {
                  local_a78 = 1;
                }
              }
              else {
                local_a78 = 2;
              }
            }
            else {
              local_a78 = 3;
            }
          }
          else {
            local_a78 = 4;
          }
        }
        else {
          local_a78 = 0xe;
LAB_0001dda8:
          if (uVar19 <= local_a78) goto LAB_0001d284;
        }
        *(uint *)(iVar7 + 0x26c) = local_a78;
      }
      else {
        local_a78 = 0xf;
      }
LAB_0001d284:
      if (local_a88 < local_a78) goto LAB_0001d28c;
      if ((int)(uVar8 - local_9f4[local_a78]) < 0) goto LAB_0001d720;
      iVar28 = local_a78 - 1;
      local_9f4[local_a78] = uVar8;
      local_9f4[0x23] = 0;
      if (iVar28 != 0) goto LAB_0001d48c;
    }
    else {
      local_a78 = 0x10;
LAB_0001d28c:
      if ((int)(uVar8 - local_9f4[local_a88]) < 0) {
LAB_0001d720:
        uVar15 = 2;
LAB_0001d724:
        iVar28 = *(int *)(iVar7 + 0x260);
        while (iVar28 != 0) {
          pvVar12 = (void *)(iVar28 + -8);
          iVar28 = *(int *)(iVar28 + -4);
          free(pvVar12);
        }
        *(undefined8 *)(iVar7 + 0x260) = 0;
        return uVar15;
      }
      uVar8 = (uVar8 - local_9f4[local_a88]) * 2;
      if (local_a88 + 1 < local_a78) {
        if ((int)(uVar8 - local_9f4[local_a88 + 1]) < 0) goto LAB_0001d720;
        uVar8 = (uVar8 - local_9f4[local_a88 + 1]) * 2;
        if (local_a88 + 2 < local_a78) {
          if ((int)(uVar8 - local_9f4[local_a88 + 2]) < 0) goto LAB_0001d720;
          uVar8 = (uVar8 - local_9f4[local_a88 + 2]) * 2;
          if (local_a88 + 3 < local_a78) {
            if ((int)(uVar8 - local_9f4[local_a88 + 3]) < 0) goto LAB_0001d720;
            uVar8 = (uVar8 - local_9f4[local_a88 + 3]) * 2;
            if (local_a88 + 4 < local_a78) {
              if ((int)(uVar8 - local_9f4[local_a88 + 4]) < 0) goto LAB_0001d720;
              uVar8 = (uVar8 - local_9f4[local_a88 + 4]) * 2;
              if (local_a88 + 5 < local_a78) {
                if ((int)(uVar8 - local_9f4[local_a88 + 5]) < 0) goto LAB_0001d720;
                uVar8 = (uVar8 - local_9f4[local_a88 + 5]) * 2;
                if (local_a88 + 6 < local_a78) {
                  if ((int)(uVar8 - local_9f4[local_a88 + 6]) < 0) goto LAB_0001d720;
                  uVar8 = (uVar8 - local_9f4[local_a88 + 6]) * 2;
                  if (local_a88 + 7 < local_a78) {
                    if ((int)(uVar8 - local_9f4[local_a88 + 7]) < 0) goto LAB_0001d720;
                    uVar8 = (uVar8 - local_9f4[local_a88 + 7]) * 2;
                    if (local_a88 + 8 < local_a78) {
                      if ((int)(uVar8 - local_9f4[local_a88 + 8]) < 0) goto LAB_0001d720;
                      uVar8 = (uVar8 - local_9f4[local_a88 + 8]) * 2;
                      if (local_a88 + 9 < local_a78) {
                        if ((int)(uVar8 - local_9f4[local_a88 + 9]) < 0) goto LAB_0001d720;
                        uVar8 = (uVar8 - local_9f4[local_a88 + 9]) * 2;
                        if (local_a88 + 10 < local_a78) {
                          if ((int)(uVar8 - local_9f4[local_a88 + 10]) < 0) goto LAB_0001d720;
                          uVar8 = (uVar8 - local_9f4[local_a88 + 10]) * 2;
                          if (local_a88 + 0xb < local_a78) {
                            if ((int)(uVar8 - local_9f4[local_a88 + 0xb]) < 0) goto LAB_0001d720;
                            uVar8 = (uVar8 - local_9f4[local_a88 + 0xb]) * 2;
                            if (local_a88 + 0xc < local_a78) {
                              if ((int)(uVar8 - local_9f4[local_a88 + 0xc]) < 0) goto LAB_0001d720;
                              uVar8 = (uVar8 - local_9f4[local_a88 + 0xc]) * 2;
                              if (local_a88 + 0xd < local_a78) {
                                if ((int)(uVar8 - local_9f4[local_a88 + 0xd]) < 0)
                                goto LAB_0001d720;
                                uVar8 = (uVar8 - local_9f4[local_a88 + 0xd]) * 2;
                                if (local_a88 + 0xe < local_a78) {
                                  if ((int)(uVar8 - local_9f4[0xf]) < 0) goto LAB_0001d720;
                                  uVar8 = (uVar8 - local_9f4[0xf]) * 2;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      if ((int)(uVar8 - local_9f4[local_a78]) < 0) goto LAB_0001d720;
      iVar28 = local_a78 - 1;
      local_9f4[local_a78] = uVar8;
      local_9f4[0x23] = 0;
LAB_0001d48c:
      puVar9 = local_9f4;
      uVar8 = 0;
      puVar16 = local_9f4 + 0x24;
      do {
        puVar9 = puVar9 + 1;
        iVar28 = iVar28 + -1;
        uVar8 = uVar8 + *puVar9;
        *puVar16 = uVar8;
        puVar16 = puVar16 + 1;
      } while (iVar28 != 0);
    }
    local_9f4[0x23] = 0;
    memset(auStack_4a8,0,0x480);
    uVar8 = 0;
    puVar9 = local_928;
    do {
      puVar16 = puVar9 + 1;
      uVar19 = *puVar9;
      if (uVar19 != 0) {
        uVar10 = local_9f4[uVar19 + 0x22];
        local_9f4[uVar19 + 0x22] = uVar10 + 1;
        auStack_4a8[uVar10] = uVar8;
      }
      uVar8 = uVar8 + 1;
      puVar9 = puVar16;
    } while (puVar16 != puVar29);
    local_9f4[0x11] = 0;
    local_a38[1] = 0;
    local_9f4[0x22] = 0;
    if (local_a88 <= local_a78) {
      puVar9 = auStack_4a8 + local_9f4[local_a78 + 0x22];
      uVar25 = 0;
      uVar19 = 0;
      iVar28 = -1;
      local_a84 = DAT_0001cc78;
      local_a60 = auStack_4a8;
      uVar8 = 0;
      uVar10 = 0;
      local_a74 = local_9f4 + local_a88;
      do {
        puVar16 = local_a74 + 1;
        uVar30 = 1 << (local_a88 - 1 & 0xff);
        for (uVar13 = *local_a74; uVar13 != 0; uVar13 = uVar13 - 1) {
          uVar27 = 1;
          puVar31 = local_9f4 + iVar28 + 0x12;
          puVar22 = local_a38 + iVar28 + 1;
          while( true ) {
            puVar32 = puVar22;
            puVar24 = puVar31;
            iVar17 = iVar28;
            puVar31 = puVar24 + 1;
            uVar11 = *puVar24 + uVar25;
            if ((int)local_a88 <= (int)uVar11) break;
            puVar29 = (uint *)(local_a88 - uVar11);
            uVar8 = 1 << ((uint)puVar29 & 0xff);
            iVar28 = iVar17 + 1;
            if (uVar13 < uVar8) {
              puVar29 = (uint *)((int)puVar29 + 1);
              puVar22 = (uint *)(local_a78 - uVar11);
              if (*(uint **)(iVar7 + 0x26c) <= (uint *)(local_a78 - uVar11)) {
                puVar22 = *(uint **)(iVar7 + 0x26c);
              }
              if (puVar29 < puVar22) {
                uVar8 = (uVar8 - uVar13) * 2;
                uVar10 = *puVar16;
                puVar14 = puVar16;
                if (uVar10 < uVar8) {
                  do {
                    puVar29 = (uint *)((int)puVar29 + 1);
                    uVar8 = (uVar8 - uVar10) * 2;
                    if (puVar22 <= puVar29) break;
                    puVar14 = puVar14 + 1;
                    uVar10 = *puVar14;
                  } while (uVar10 < uVar8);
                }
              }
            }
            if (uVar11 < 0x10 && 0x10 < uVar11 + (int)puVar29) {
              puVar29 = (uint *)(0x10 - uVar11);
            }
            *puVar31 = (uint)puVar29;
            uVar8 = 1 << ((uint)puVar29 & 0xff);
            pvVar12 = malloc((uVar8 + 1) * 8);
            if (pvVar12 == (void *)0x0) {
              uVar8 = local_a38[1];
              if (iVar28 != 0) {
                while (uVar8 != 0) {
                  iVar28 = *(int *)(uVar8 + -4);
                  free((void *)(uVar8 + -8));
                  uVar8 = iVar28;
                }
              }
              uVar15 = 3;
              goto LAB_0001d724;
            }
            uVar10 = (int)pvVar12 + 8;
            puVar22 = puVar32 + 1;
            *puVar22 = uVar10;
            *local_a84 = uVar10;
            local_a84 = (uint *)((int)pvVar12 + 4);
            *(undefined4 *)((int)pvVar12 + 4) = 0;
            uVar25 = uVar11;
            if (iVar28 != 0) {
              cVar6 = (char)puVar29;
              puVar29 = &local_a3c;
              puVar32 = (uint *)(*puVar32 +
                                (((1 << (uVar11 & 0xff)) - 1U & uVar19) >>
                                (uVar11 - *puVar24 & 0xff)) * 8);
              local_a3c._0_2_ = CONCAT11((char)*puVar24,cVar6 + ' ');
              local_9f4[iVar17 + 0x23] = uVar19;
              *puVar32 = local_a3c;
              puVar32[1] = uVar10;
              local_a38[0] = uVar10;
            }
          }
          puVar31 = local_a60;
          uVar11 = uVar10;
          if (local_a60 < puVar9) {
            puVar31 = local_a60 + 1;
            uVar11 = *local_a60;
          }
          puVar22 = puVar20;
          if (puVar9 <= local_a60) {
            uVar27 = 99;
            puVar22 = puVar29;
          }
          if (local_a60 < puVar9) {
            uVar27 = *(undefined1 *)((int)puVar22 + uVar11);
            local_a38[0] = CONCAT22(local_a38[0]._2_2_,*(undefined2 *)(&DAT_000307e0 + uVar11 * 2));
            local_a60 = puVar31;
          }
          uVar11 = uVar19 >> (uVar25 & 0xff);
          if (uVar11 < uVar8) {
            puVar22 = &local_a3c;
            do {
              puVar29 = (uint *)(uVar10 + uVar11 * 8);
              local_a3c._0_2_ = CONCAT11((char)(local_a88 - uVar25),uVar27);
              uVar11 = uVar11 + (1 << (local_a88 - uVar25 & 0xff));
              *puVar29 = local_a3c;
              puVar29[1] = local_a38[0];
            } while (uVar11 < uVar8);
          }
          uVar26 = uVar30 & uVar19;
          uVar11 = uVar30;
          while (uVar26 != 0) {
            uVar19 = uVar19 ^ uVar11;
            uVar11 = uVar11 >> 1;
            uVar26 = uVar19 & uVar11;
          }
          uVar19 = uVar19 ^ uVar11;
          iVar28 = iVar17;
          if (((1 << (uVar25 & 0xff)) - 1U & uVar19) != local_9f4[iVar17 + 0x22]) {
            iVar28 = iVar17 + -1;
            puVar22 = (uint *)local_9f4[iVar17 + 0x21];
            uVar25 = uVar25 - local_9f4[iVar17 + 0x11];
            if (puVar22 != (uint *)((1 << (uVar25 & 0xff)) - 1U & uVar19)) {
              iVar28 = iVar17 + -2;
              uVar25 = uVar25 - local_9f4[iVar17 + 0x10];
              puVar22 = (uint *)local_9f4[iVar17 + 0x20];
              if ((uint *)((1 << (uVar25 & 0xff)) - 1U & uVar19) != puVar22) {
                iVar28 = iVar17 + -3;
                uVar25 = uVar25 - local_9f4[iVar17 + 0xf];
                puVar22 = (uint *)local_9f4[iVar17 + 0x1f];
                if (puVar22 != (uint *)((1 << (uVar25 & 0xff)) - 1U & uVar19)) {
                  iVar28 = iVar17 + -4;
                  uVar25 = uVar25 - local_9f4[iVar17 + 0xe];
                  puVar22 = (uint *)local_9f4[iVar17 + 0x1e];
                  if (puVar22 != (uint *)((1 << (uVar25 & 0xff)) - 1U & uVar19)) {
                    iVar28 = iVar17 + -5;
                    uVar25 = uVar25 - local_9f4[iVar17 + 0xd];
                    puVar22 = (uint *)local_9f4[iVar17 + 0x1d];
                    if (puVar22 != (uint *)((1 << (uVar25 & 0xff)) - 1U & uVar19)) {
                      iVar28 = iVar17 + -6;
                      uVar25 = uVar25 - local_9f4[iVar17 + 0xc];
                      puVar22 = (uint *)local_9f4[iVar17 + 0x1c];
                      if (puVar22 != (uint *)((1 << (uVar25 & 0xff)) - 1U & uVar19)) {
                        iVar28 = iVar17 + -7;
                        uVar25 = uVar25 - local_9f4[iVar17 + 0xb];
                        puVar22 = (uint *)local_9f4[iVar17 + 0x1b];
                        if (puVar22 != (uint *)((1 << (uVar25 & 0xff)) - 1U & uVar19)) {
                          iVar28 = iVar17 + -8;
                          uVar25 = uVar25 - local_9f4[iVar17 + 10];
                          puVar22 = (uint *)local_9f4[iVar17 + 0x1a];
                          if (puVar22 != (uint *)((1 << (uVar25 & 0xff)) - 1U & uVar19)) {
                            iVar28 = iVar17 + -9;
                            uVar25 = uVar25 - local_9f4[iVar17 + 9];
                            if (local_9f4[iVar17 + 0x19] != ((1 << (uVar25 & 0xff)) - 1U & uVar19))
                            {
                              iVar28 = iVar17 + -10;
                              puVar22 = (uint *)0x1;
                              uVar25 = uVar25 - local_9f4[iVar17 + 8];
                              if (local_9f4[iVar17 + 0x18] != ((1 << (uVar25 & 0xff)) - 1U & uVar19)
                                 ) {
                                iVar28 = iVar17 + -0xb;
                                uVar25 = uVar25 - local_9f4[iVar17 + 7];
                                if (local_9f4[iVar17 + 0x17] !=
                                    ((1 << (uVar25 & 0xff)) - 1U & uVar19)) {
                                  iVar28 = iVar17 + -0xc;
                                  uVar25 = uVar25 - local_9f4[iVar17 + 6];
                                  if (local_9f4[iVar17 + 0x16] !=
                                      ((1 << (uVar25 & 0xff)) - 1U & uVar19)) {
                                    iVar28 = iVar17 + -0xd;
                                    uVar25 = uVar25 - local_9f4[iVar17 + 5];
                                    if (local_9f4[iVar17 + 0x15] !=
                                        ((1 << (uVar25 & 0xff)) - 1U & uVar19)) {
                                      iVar28 = iVar17 + -0xe;
                                      uVar25 = uVar25 - local_9f4[iVar17 + 4];
                                      if (local_9f4[iVar17 + 0x14] !=
                                          ((1 << (uVar25 & 0xff)) - 1U & uVar19)) {
                                        iVar28 = iVar17 + -0xf;
                                        uVar25 = uVar25 - local_9f4[iVar17 + 3];
                                        if (local_9f4[iVar17 + 0x13] !=
                                            ((1 << (uVar25 & 0xff)) - 1U & uVar19)) {
                                          iVar28 = iVar17 + -0x10;
                                          uVar25 = uVar25 - local_9f4[iVar17 + 2];
                                          if (local_9f4[iVar17 + 0x12] !=
                                              ((1 << (uVar25 & 0xff)) - 1U & uVar19)) {
                                            iVar28 = iVar17 + -0x11;
                                            uVar25 = uVar25 - local_9f4[iVar17 + 1];
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          puVar29 = puVar22;
        }
        local_a88 = local_a88 + 1;
        local_a74 = puVar16;
      } while (local_a88 != local_a78 + 1);
    }
    uVar15 = *(undefined4 *)(iVar7 + 0x264);
    *(uint *)(iVar7 + 0x26c) = local_9f4[0x12];
  }
  iVar28 = *(int *)(iVar7 + 0x260);
LAB_0001c534:
  uVar15 = FUN_0001bd30(iVar28,uVar15,*(undefined4 *)(iVar7 + 0x268),local_9f4[0x12]);
  return uVar15;
}



/* ===== FUN_0001df84 @ 0001df84 size=100 ===== */

undefined4 FUN_0001df84(void)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = DAT_0001dfe8;
  iVar3 = *(int *)(DAT_0001dfe8 + 0x260);
  if (iVar3 != 0) {
    iVar4 = *(int *)(DAT_0001dfe8 + 0x264);
    if (iVar4 == 0) goto LAB_0001dfc4;
    do {
      pvVar2 = (void *)(iVar4 + -8);
      iVar4 = *(int *)(iVar4 + -4);
      free(pvVar2);
    } while (iVar4 != 0);
    iVar3 = *(int *)(iVar1 + 0x260);
    while (iVar3 != 0) {
LAB_0001dfc4:
      pvVar2 = (void *)(iVar3 + -8);
      iVar3 = *(int *)(iVar3 + -4);
      free(pvVar2);
    }
    *(undefined8 *)(iVar1 + 0x260) = 0;
  }
  return 0;
}



/* ===== FUN_0001dfec @ 0001dfec size=3272 ===== */

/* WARNING: Type propagation algorithm not settling */

undefined1
FUN_0001dfec(int *param_1,uint param_2,uint param_3,int param_4,int param_5,int *param_6,
            uint *param_7)

{
  uint uVar1;
  uint *puVar2;
  void *pvVar3;
  uint *puVar4;
  int *piVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  int iVar17;
  int iVar18;
  int *piVar19;
  undefined1 uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  undefined4 *puVar24;
  uint local_5e8;
  uint *local_5e4;
  uint *local_5d0;
  int local_5c8;
  undefined4 local_5bc;
  int local_5b8 [17];
  uint local_574 [51];
  uint local_4a8 [289];
  uint *puVar16;
  
  if (param_2 < 0x101) {
    uVar9 = 0x10;
  }
  else {
    uVar9 = param_1[0x100];
  }
  memset(local_574,0,0x44);
  piVar5 = param_1;
  uVar12 = param_2;
  do {
    uVar12 = uVar12 - 1;
    local_574[*piVar5] = local_574[*piVar5] + 1;
    piVar5 = piVar5 + 1;
  } while (uVar12 != 0);
  if (local_574[0] == param_2) {
    *param_6 = 0;
    *param_7 = 0;
    return false;
  }
  if (local_574[1] == 0) {
    if (local_574[2] != 0) {
      uVar12 = 2;
      goto LAB_0001e140;
    }
    if (local_574[3] != 0) {
      uVar12 = 3;
      goto LAB_0001e140;
    }
    if (local_574[4] != 0) {
      uVar12 = 4;
      goto LAB_0001e140;
    }
    if (local_574[5] != 0) {
      uVar12 = 5;
      goto LAB_0001e140;
    }
    if (local_574[6] != 0) {
      uVar12 = 6;
      goto LAB_0001e140;
    }
    if (local_574[7] != 0) {
      uVar12 = 7;
      goto LAB_0001e140;
    }
    if (local_574[8] != 0) {
      uVar12 = 8;
      goto LAB_0001e140;
    }
    if (local_574[9] != 0) {
      uVar12 = 9;
      goto LAB_0001e140;
    }
    if (local_574[10] != 0) {
      uVar12 = 10;
      goto LAB_0001e140;
    }
    if (local_574[0xb] != 0) {
      uVar12 = 0xb;
      goto LAB_0001e140;
    }
    if (local_574[0xc] != 0) {
      uVar12 = 0xc;
      goto LAB_0001e140;
    }
    if (local_574[0xd] != 0) {
      uVar12 = 0xd;
      goto LAB_0001e140;
    }
    if (local_574[0xe] != 0) {
      uVar12 = 0xe;
      goto LAB_0001e140;
    }
    if (local_574[0xf] != 0) {
      uVar12 = 0xf;
      goto LAB_0001e140;
    }
    if (local_574[0x10] != 0) {
      uVar12 = 0x10;
      goto LAB_0001e140;
    }
    uVar23 = *param_7;
    if (uVar23 < 0x11) {
      uVar12 = 0x11;
      uVar21 = 0x20000;
      goto LAB_0001e15c;
    }
    uVar21 = 0x20000;
    uVar12 = 0x11;
LAB_0001e184:
    if (local_574[0xd] != 0) {
      local_5e8 = 0xd;
      goto LAB_0001eb5c;
    }
    if (local_574[0xc] != 0) {
      local_5e8 = 0xc;
      goto LAB_0001eb5c;
    }
    if (local_574[0xb] != 0) {
      local_5e8 = 0xb;
      goto LAB_0001eb5c;
    }
    if (local_574[10] != 0) {
      local_5e8 = 10;
      goto LAB_0001eb5c;
    }
    if (local_574[9] != 0) {
      local_5e8 = 9;
      goto LAB_0001eb5c;
    }
    if (local_574[8] != 0) {
      local_5e8 = 8;
      goto LAB_0001eb5c;
    }
    if (local_574[7] != 0) {
      local_5e8 = 7;
      goto LAB_0001eb5c;
    }
    if (local_574[6] != 0) {
      local_5e8 = 6;
      goto LAB_0001eb5c;
    }
    if (local_574[5] != 0) {
      local_5e8 = 5;
      goto LAB_0001eb5c;
    }
    if (local_574[4] != 0) {
      local_5e8 = 4;
      goto LAB_0001eb5c;
    }
    if (local_574[3] != 0) {
      local_5e8 = 3;
      goto LAB_0001eb5c;
    }
    if (local_574[2] != 0) {
      local_5e8 = 2;
      goto LAB_0001eb5c;
    }
    local_5e8 = 0;
    if (local_574[1] == 0) goto LAB_0001e220;
    if (uVar23 != 1) {
      local_5e8 = 1;
      goto LAB_0001e220;
    }
    local_5e8 = 1;
LAB_0001ec84:
    local_5c8 = uVar21 - local_574[local_5e8];
    if (local_5c8 < 0) {
      return 2;
    }
    iVar10 = local_5e8 - 1;
    local_574[local_5e8] = uVar21;
    local_574[0x23] = 0;
    if (iVar10 == 0) goto LAB_0001e454;
  }
  else {
    uVar12 = 1;
LAB_0001e140:
    uVar21 = 1 << uVar12;
    uVar23 = *param_7;
    if (uVar23 < uVar12) {
LAB_0001e15c:
      *param_7 = uVar12;
      uVar23 = uVar12;
    }
    if (local_574[0x10] == 0) {
      if (local_574[0xf] == 0) {
        if (local_574[0xe] == 0) goto LAB_0001e184;
        local_5e8 = 0xe;
      }
      else {
        local_5e8 = 0xf;
      }
    }
    else {
      local_5e8 = 0x10;
    }
LAB_0001eb5c:
    if (local_5e8 < uVar23) {
LAB_0001e220:
      *param_7 = local_5e8;
    }
    if (local_5e8 <= uVar12) goto LAB_0001ec84;
    if ((int)(uVar21 - local_574[uVar12]) < 0) {
      return 2;
    }
    uVar21 = (uVar21 - local_574[uVar12]) * 2;
    if (uVar12 + 1 < local_5e8) {
      if ((int)(uVar21 - local_574[uVar12 + 1]) < 0) {
        return 2;
      }
      uVar21 = (uVar21 - local_574[uVar12 + 1]) * 2;
      if (uVar12 + 2 < local_5e8) {
        if ((int)(uVar21 - local_574[uVar12 + 2]) < 0) {
          return 2;
        }
        uVar21 = (uVar21 - local_574[uVar12 + 2]) * 2;
        if (uVar12 + 3 < local_5e8) {
          if ((int)(uVar21 - local_574[uVar12 + 3]) < 0) {
            return 2;
          }
          uVar21 = (uVar21 - local_574[uVar12 + 3]) * 2;
          if (uVar12 + 4 < local_5e8) {
            if ((int)(uVar21 - local_574[uVar12 + 4]) < 0) {
              return 2;
            }
            uVar21 = (uVar21 - local_574[uVar12 + 4]) * 2;
            if (uVar12 + 5 < local_5e8) {
              if ((int)(uVar21 - local_574[uVar12 + 5]) < 0) {
                return 2;
              }
              uVar21 = (uVar21 - local_574[uVar12 + 5]) * 2;
              if (uVar12 + 6 < local_5e8) {
                if ((int)(uVar21 - local_574[uVar12 + 6]) < 0) {
                  return 2;
                }
                uVar21 = (uVar21 - local_574[uVar12 + 6]) * 2;
                if (uVar12 + 7 < local_5e8) {
                  if ((int)(uVar21 - local_574[uVar12 + 7]) < 0) {
                    return 2;
                  }
                  uVar21 = (uVar21 - local_574[uVar12 + 7]) * 2;
                  if (uVar12 + 8 < local_5e8) {
                    if ((int)(uVar21 - local_574[uVar12 + 8]) < 0) {
                      return 2;
                    }
                    uVar21 = (uVar21 - local_574[uVar12 + 8]) * 2;
                    if (uVar12 + 9 < local_5e8) {
                      if ((int)(uVar21 - local_574[uVar12 + 9]) < 0) {
                        return 2;
                      }
                      uVar21 = (uVar21 - local_574[uVar12 + 9]) * 2;
                      if (uVar12 + 10 < local_5e8) {
                        if ((int)(uVar21 - local_574[uVar12 + 10]) < 0) {
                          return 2;
                        }
                        uVar21 = (uVar21 - local_574[uVar12 + 10]) * 2;
                        if (uVar12 + 0xb < local_5e8) {
                          if ((int)(uVar21 - local_574[uVar12 + 0xb]) < 0) {
                            return 2;
                          }
                          uVar21 = (uVar21 - local_574[uVar12 + 0xb]) * 2;
                          if (uVar12 + 0xc < local_5e8) {
                            if ((int)(uVar21 - local_574[uVar12 + 0xc]) < 0) {
                              return 2;
                            }
                            uVar21 = (uVar21 - local_574[uVar12 + 0xc]) * 2;
                            if (uVar12 + 0xd < local_5e8) {
                              if ((int)(uVar21 - local_574[uVar12 + 0xd]) < 0) {
                                return 2;
                              }
                              uVar21 = (uVar21 - local_574[uVar12 + 0xd]) * 2;
                              if (uVar12 + 0xe < local_5e8) {
                                if ((int)(uVar21 - local_574[0xf]) < 0) {
                                  return 2;
                                }
                                uVar21 = (uVar21 - local_574[0xf]) * 2;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    local_5c8 = uVar21 - local_574[local_5e8];
    if (local_5c8 < 0) {
      return 2;
    }
    local_574[local_5e8] = uVar21;
    iVar10 = local_5e8 - 1;
    local_574[0x23] = 0;
  }
  puVar2 = local_574;
  uVar21 = 0;
  puVar6 = local_574 + 0x24;
  do {
    puVar2 = puVar2 + 1;
    iVar10 = iVar10 + -1;
    uVar21 = uVar21 + *puVar2;
    *puVar6 = uVar21;
    puVar6 = puVar6 + 1;
  } while (iVar10 != 0);
LAB_0001e454:
  local_574[0x23] = 0;
  memset(local_4a8,0,0x480);
  uVar21 = 0;
  do {
    iVar10 = *param_1;
    if (iVar10 != 0) {
      uVar23 = local_574[iVar10 + 0x22];
      local_574[iVar10 + 0x22] = uVar23 + 1;
      local_4a8[uVar23] = uVar21;
    }
    uVar21 = uVar21 + 1;
    param_1 = param_1 + 1;
  } while (uVar21 < param_2);
  local_574[0x11] = 0;
  local_5b8[1] = 0;
  uVar21 = local_574[local_5e8 + 0x22];
  local_574[0x22] = 0;
  if (uVar12 <= local_5e8) {
    uVar23 = 0;
    uVar7 = 0;
    iVar17 = -1;
    iVar10 = 0;
    uVar14 = 0;
    local_5e4 = local_574 + uVar12;
    local_5d0 = local_4a8;
    do {
      puVar6 = local_5e4 + 1;
      uVar1 = 1 << (uVar12 - 1 & 0xff);
      puVar2 = local_5d0;
      for (uVar22 = *local_5e4; local_5d0 = puVar2, uVar22 != 0; uVar22 = uVar22 - 1) {
        puVar15 = local_574 + iVar17 + 0x12;
        piVar5 = local_5b8 + iVar17 + 1;
        while( true ) {
          piVar19 = piVar5;
          iVar18 = iVar17;
          puVar16 = puVar15;
          puVar15 = puVar16 + 1;
          uVar13 = *puVar16 + uVar7;
          if ((int)uVar12 <= (int)uVar13) break;
          uVar11 = uVar12 - uVar13;
          uVar23 = 1 << (uVar11 & 0xff);
          iVar17 = iVar18 + 1;
          if (uVar22 < uVar23) {
            uVar11 = uVar11 + 1;
            uVar7 = local_5e8 - uVar13;
            if (*param_7 <= local_5e8 - uVar13) {
              uVar7 = *param_7;
            }
            if (uVar11 < uVar7) {
              uVar23 = (uVar23 - uVar22) * 2;
              uVar8 = *puVar6;
              puVar4 = puVar6;
              if (uVar8 < uVar23) {
                do {
                  uVar11 = uVar11 + 1;
                  uVar23 = (uVar23 - uVar8) * 2;
                  if (uVar7 <= uVar11) break;
                  puVar4 = puVar4 + 1;
                  uVar8 = *puVar4;
                } while (uVar8 < uVar23);
              }
            }
          }
          if (uVar13 < uVar9 && uVar9 < uVar13 + uVar11) {
            uVar11 = uVar9 - uVar13;
          }
          *puVar15 = uVar11;
          uVar23 = 1 << (uVar11 & 0xff);
          pvVar3 = malloc((uVar23 + 1) * 8);
          if (pvVar3 == (void *)0x0) {
            iVar10 = local_5b8[1];
            if (iVar17 != 0) {
              while (iVar10 != 0) {
                iVar17 = *(int *)(iVar10 + -4);
                free((void *)(iVar10 + -8));
                iVar10 = iVar17;
              }
            }
            return 3;
          }
          iVar10 = (int)pvVar3 + 8;
          piVar5 = piVar19 + 1;
          *piVar5 = iVar10;
          *param_6 = iVar10;
          param_6 = (int *)((int)pvVar3 + 4);
          *(undefined4 *)((int)pvVar3 + 4) = 0;
          uVar7 = uVar13;
          if (iVar17 != 0) {
            local_5b8[0] = iVar10;
            puVar24 = (undefined4 *)
                      (*piVar19 +
                      (((1 << (uVar13 & 0xff)) - 1U & uVar14) >> (uVar13 - *puVar16 & 0xff)) * 8);
            local_5bc._0_2_ = CONCAT11((char)*puVar16,(char)uVar11 + ' ');
            local_574[iVar18 + 0x23] = uVar14;
            *puVar24 = local_5bc;
            puVar24[1] = iVar10;
          }
        }
        if (puVar2 < local_4a8 + uVar21) {
          local_5d0 = puVar2 + 1;
          uVar13 = *puVar2;
          if (uVar13 < param_3) {
            local_5b8[0] = CONCAT22(local_5b8[0]._2_2_,(short)uVar13);
            if (uVar13 < 0x100) {
              uVar20 = 0x20;
            }
            else {
              uVar20 = 0x1f;
            }
          }
          else {
            uVar20 = *(undefined1 *)(param_5 + (uVar13 - param_3));
            local_5b8[0] = CONCAT22(local_5b8[0]._2_2_,
                                    *(undefined2 *)(param_4 + (uVar13 - param_3) * 2));
          }
        }
        else {
          uVar20 = 99;
        }
        for (uVar13 = uVar14 >> (uVar7 & 0xff); uVar13 < uVar23;
            uVar13 = uVar13 + (1 << (uVar12 - uVar7 & 0xff))) {
          puVar24 = (undefined4 *)(iVar10 + uVar13 * 8);
          local_5bc._2_2_ = (undefined2)((uint)local_5bc >> 0x10);
          local_5bc._0_2_ = CONCAT11((char)(uVar12 - uVar7),uVar20);
          *puVar24 = local_5bc;
          puVar24[1] = local_5b8[0];
        }
        uVar11 = uVar1 & uVar14;
        uVar13 = uVar1;
        while (uVar11 != 0) {
          uVar14 = uVar14 ^ uVar13;
          uVar13 = uVar13 >> 1;
          uVar11 = uVar14 & uVar13;
        }
        uVar14 = uVar14 ^ uVar13;
        iVar17 = iVar18;
        if (((1 << (uVar7 & 0xff)) - 1U & uVar14) != local_574[iVar18 + 0x22]) {
          iVar17 = iVar18 + -1;
          uVar7 = uVar7 - local_574[iVar18 + 0x11];
          if (((1 << (uVar7 & 0xff)) - 1U & uVar14) != local_574[iVar18 + 0x21]) {
            iVar17 = iVar18 + -2;
            uVar7 = uVar7 - local_574[iVar18 + 0x10];
            if (local_574[iVar18 + 0x20] != ((1 << (uVar7 & 0xff)) - 1U & uVar14)) {
              iVar17 = iVar18 + -3;
              uVar7 = uVar7 - local_574[iVar18 + 0xf];
              if (local_574[iVar18 + 0x1f] != ((1 << (uVar7 & 0xff)) - 1U & uVar14)) {
                iVar17 = iVar18 + -4;
                uVar7 = uVar7 - local_574[iVar18 + 0xe];
                if (local_574[iVar18 + 0x1e] != ((1 << (uVar7 & 0xff)) - 1U & uVar14)) {
                  iVar17 = iVar18 + -5;
                  uVar7 = uVar7 - local_574[iVar18 + 0xd];
                  if (local_574[iVar18 + 0x1d] != ((1 << (uVar7 & 0xff)) - 1U & uVar14)) {
                    iVar17 = iVar18 + -6;
                    uVar7 = uVar7 - local_574[iVar18 + 0xc];
                    if (local_574[iVar18 + 0x1c] != ((1 << (uVar7 & 0xff)) - 1U & uVar14)) {
                      iVar17 = iVar18 + -7;
                      uVar7 = uVar7 - local_574[iVar18 + 0xb];
                      if (local_574[iVar18 + 0x1b] != ((1 << (uVar7 & 0xff)) - 1U & uVar14)) {
                        iVar17 = iVar18 + -8;
                        uVar7 = uVar7 - local_574[iVar18 + 10];
                        if (local_574[iVar18 + 0x1a] != ((1 << (uVar7 & 0xff)) - 1U & uVar14)) {
                          iVar17 = iVar18 + -9;
                          uVar7 = uVar7 - local_574[iVar18 + 9];
                          if (local_574[iVar18 + 0x19] != ((1 << (uVar7 & 0xff)) - 1U & uVar14)) {
                            iVar17 = iVar18 + -10;
                            uVar7 = uVar7 - local_574[iVar18 + 8];
                            if (local_574[iVar18 + 0x18] != ((1 << (uVar7 & 0xff)) - 1U & uVar14)) {
                              iVar17 = iVar18 + -0xb;
                              uVar7 = uVar7 - local_574[iVar18 + 7];
                              if (local_574[iVar18 + 0x17] != ((1 << (uVar7 & 0xff)) - 1U & uVar14))
                              {
                                iVar17 = iVar18 + -0xc;
                                uVar7 = uVar7 - local_574[iVar18 + 6];
                                if (local_574[iVar18 + 0x16] !=
                                    ((1 << (uVar7 & 0xff)) - 1U & uVar14)) {
                                  iVar17 = iVar18 + -0xd;
                                  uVar7 = uVar7 - local_574[iVar18 + 5];
                                  if (local_574[iVar18 + 0x15] !=
                                      ((1 << (uVar7 & 0xff)) - 1U & uVar14)) {
                                    iVar17 = iVar18 + -0xe;
                                    uVar7 = uVar7 - local_574[iVar18 + 4];
                                    if (local_574[iVar18 + 0x14] !=
                                        ((1 << (uVar7 & 0xff)) - 1U & uVar14)) {
                                      iVar17 = iVar18 + -0xf;
                                      uVar7 = uVar7 - local_574[iVar18 + 3];
                                      if (local_574[iVar18 + 0x13] !=
                                          ((1 << (uVar7 & 0xff)) - 1U & uVar14)) {
                                        iVar17 = iVar18 + -0x10;
                                        uVar7 = uVar7 - local_574[iVar18 + 2];
                                        if (local_574[iVar18 + 0x12] !=
                                            ((1 << (uVar7 & 0xff)) - 1U & uVar14)) {
                                          iVar17 = iVar18 + -0x11;
                                          uVar7 = uVar7 - local_574[iVar18 + 1];
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        puVar2 = local_5d0;
      }
      uVar12 = uVar12 + 1;
      local_5e4 = puVar6;
    } while (uVar12 != local_5e8 + 1);
  }
  *param_7 = local_574[0x12];
  return local_5c8 != 0 && local_5e8 != 1;
}



/* ===== FUN_0001ecb4 @ 0001ecb4 size=5544 ===== */

/* WARNING: Type propagation algorithm not settling */

int FUN_0001ecb4(void)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  void *pvVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  byte *pbVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  undefined1 uVar26;
  uint *puVar27;
  uint uVar29;
  int *piVar30;
  int *piVar31;
  int iVar32;
  uint *extraout_r12;
  uint uVar33;
  undefined4 *puVar34;
  int *local_b04;
  uint local_afc;
  uint local_af4;
  uint *local_af0;
  uint *local_ae8;
  int local_ac8;
  int local_ac4;
  uint local_ac0;
  undefined4 local_abc;
  int local_ab8 [17];
  uint local_a74 [51];
  uint local_9a8 [288];
  uint local_528 [19];
  uint auStack_4dc [301];
  uint uStack_28;
  uint *puVar13;
  uint *puVar28;
  
  iVar16 = DAT_0001fcb4;
  local_ac8 = 0;
  local_ac4 = 0;
  uVar29 = *(uint *)(DAT_0001fcb4 + 0x2a0);
  for (uVar23 = *(uint *)(DAT_0001fcb4 + 0x2a4); (int)uVar23 < 5; uVar23 = uVar23 + 8) {
    iVar17 = *(int *)(iVar16 + -0xf20);
    *(int *)(iVar16 + -0xf20) = iVar17 + -1;
    if (iVar17 < 1) {
      uVar5 = FUN_00019950();
      if (uVar5 == 0xffffffff) {
        if ((int)uVar23 < 0) goto LAB_0001ee88;
        break;
      }
    }
    else {
      pbVar22 = *(byte **)(iVar16 + -0xf24);
      *(byte **)(iVar16 + -0xf24) = pbVar22 + 1;
      uVar5 = (uint)*pbVar22;
    }
    uVar29 = uVar29 | uVar5 << (uVar23 & 0xff);
  }
  iVar16 = DAT_0001fcac;
  uVar5 = uVar29 >> 5;
  for (uVar23 = uVar23 - 5; (int)uVar23 < 5; uVar23 = uVar23 + 8) {
    iVar17 = *(int *)(iVar16 + 0xe0);
    *(int *)(iVar16 + 0xe0) = iVar17 + -1;
    if (iVar17 < 1) {
      uVar6 = FUN_00019950();
      if (uVar6 == 0xffffffff) {
        if ((int)uVar23 < 0) goto LAB_0001ee88;
        break;
      }
    }
    else {
      pbVar22 = *(byte **)(iVar16 + 0xdc);
      *(byte **)(iVar16 + 0xdc) = pbVar22 + 1;
      uVar6 = (uint)*pbVar22;
    }
    uVar5 = uVar5 | uVar6 << (uVar23 & 0xff);
  }
  iVar16 = DAT_0001fcac;
  uVar6 = uVar5 >> 5;
  for (uVar23 = uVar23 - 5; (int)uVar23 < 4; uVar23 = uVar23 + 8) {
    iVar17 = *(int *)(iVar16 + 0xe0);
    *(int *)(iVar16 + 0xe0) = iVar17 + -1;
    if (iVar17 < 1) {
      uVar7 = FUN_00019950();
      if (uVar7 == 0xffffffff) {
        if ((int)uVar23 < 0) goto LAB_0001ee88;
        break;
      }
    }
    else {
      pbVar22 = *(byte **)(iVar16 + 0xdc);
      *(byte **)(iVar16 + 0xdc) = pbVar22 + 1;
      uVar7 = (uint)*pbVar22;
    }
    uVar6 = uVar6 | uVar7 << (uVar23 & 0xff);
  }
  iVar16 = DAT_0001fcac;
  uVar23 = uVar23 - 4;
  iVar32 = (uVar6 & 0xf) + 4;
  uVar6 = uVar6 >> 4;
  iVar17 = 0;
  piVar30 = DAT_0001fcb0;
LAB_0001ee28:
  iVar21 = iVar17;
  if (2 < (int)uVar23) {
LAB_0001ee58:
    uVar7 = uVar6 & 7;
    uVar23 = uVar23 - 3;
    uVar6 = uVar6 >> 3;
    local_528[*piVar30] = uVar7;
    iVar17 = iVar21 + 1;
    piVar30 = piVar30 + 1;
    if (iVar32 == iVar21 + 1) goto LAB_0001eedc;
    goto LAB_0001ee28;
  }
  iVar17 = *(int *)(iVar16 + 0xe0);
  *(int *)(iVar16 + 0xe0) = iVar17 + -1;
  if (0 < iVar17) {
    pbVar22 = *(byte **)(iVar16 + 0xdc);
    *(byte **)(iVar16 + 0xdc) = pbVar22 + 1;
    uVar7 = (uint)*pbVar22;
LAB_0001ee20:
    uVar6 = uVar6 | uVar7 << (uVar23 & 0xff);
    uVar23 = uVar23 + 8;
    iVar17 = iVar21;
    goto LAB_0001ee28;
  }
  uVar7 = FUN_00019950();
  if (uVar7 != 0xffffffff) goto LAB_0001ee20;
  if (-1 < (int)uVar23) goto LAB_0001ee58;
LAB_0001ee88:
  iVar17 = 1;
  iVar16 = local_ac8;
  goto joined_r0x0001ee94;
LAB_0001fccc:
  do {
    pvVar10 = (void *)(iVar16 + -8);
    iVar16 = *(int *)(iVar16 + -4);
    free(pvVar10);
  } while (iVar16 != 0);
  iVar16 = 3;
  local_afc = local_ac0;
LAB_0001fcec:
  iVar17 = local_ac8;
  if (local_afc != 0) {
    return iVar16;
  }
  goto LAB_0001fd0c;
LAB_0001eedc:
  if (iVar32 != 0x13) {
    local_528[(&DAT_00030820)[iVar32]] = 0;
    if (iVar21 + 2 != 0x13) {
      local_528[(&DAT_00030820)[iVar21 + 2]] = 0;
      if (iVar21 + 3 != 0x13) {
        local_528[(&DAT_00030820)[iVar21 + 3]] = 0;
        if (iVar21 + 4 != 0x13) {
          local_528[(&DAT_00030820)[iVar21 + 4]] = 0;
          if (iVar21 + 5 != 0x13) {
            local_528[(&DAT_00030820)[iVar21 + 5]] = 0;
            if (iVar21 + 6 != 0x13) {
              local_528[(&DAT_00030820)[iVar21 + 6]] = 0;
              if (iVar21 + 7 != 0x13) {
                local_528[(&DAT_00030820)[iVar21 + 7]] = 0;
                if (iVar21 + 8 != 0x13) {
                  local_528[(&DAT_00030820)[iVar21 + 8]] = 0;
                  if (iVar21 + 9 != 0x13) {
                    local_528[(&DAT_00030820)[iVar21 + 9]] = 0;
                    if (iVar21 + 10 != 0x13) {
                      local_528[(&DAT_00030820)[iVar21 + 10]] = 0;
                      if (iVar21 + 0xb != 0x13) {
                        local_528[(&DAT_00030820)[iVar21 + 0xb]] = 0;
                        if (iVar21 + 0xc != 0x13) {
                          local_528[(&DAT_00030820)[iVar21 + 0xc]] = 0;
                          if (iVar21 + 0xd != 0x13) {
                            local_528[(&DAT_00030820)[iVar21 + 0xd]] = 0;
                            if ((iVar21 + 0xe != 0x13) &&
                               (local_528[(&DAT_00030820)[iVar21 + 0xe]] = 0, iVar21 != 4)) {
                              local_528[0xf] = 0;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  local_ac0 = 7;
  memset(local_a74,0,0x44);
  puVar12 = local_528;
  do {
    puVar13 = puVar12 + 1;
    local_a74[*puVar12] = local_a74[*puVar12] + 1;
    puVar12 = puVar13;
  } while (puVar13 != auStack_4dc);
  if (local_a74[0] == 0x13) {
    return 1;
  }
  puVar12 = extraout_r12;
  if (local_a74[1] == 0) {
    if (local_a74[2] != 0) {
      uVar7 = 2;
LAB_00020024:
      uVar18 = 1 << uVar7;
      goto LAB_00020030;
    }
    if (local_a74[3] != 0) {
      uVar7 = 3;
      goto LAB_00020024;
    }
    if (local_a74[4] != 0) {
      uVar7 = 4;
      goto LAB_00020024;
    }
    if (local_a74[5] != 0) {
      uVar7 = 5;
      goto LAB_00020024;
    }
    if (local_a74[6] != 0) {
      uVar7 = 6;
      goto LAB_00020024;
    }
    if (local_a74[7] != 0) {
      uVar7 = 7;
      goto LAB_00020024;
    }
    if (local_a74[8] == 0) {
      if (local_a74[9] != 0) {
        uVar7 = 9;
        goto LAB_0001fd44;
      }
      if (local_a74[10] != 0) {
        uVar7 = 10;
        goto LAB_0001fd44;
      }
      if (local_a74[0xb] != 0) {
        uVar7 = 0xb;
        goto LAB_0001fd44;
      }
      if (local_a74[0xc] != 0) {
        uVar7 = 0xc;
        goto LAB_0001fd44;
      }
      if (local_a74[0xd] != 0) {
        uVar7 = 0xd;
        goto LAB_0001fd44;
      }
      if (local_a74[0xe] != 0) {
        uVar7 = 0xe;
        goto LAB_0001fd44;
      }
      if (local_a74[0xf] != 0) {
        uVar7 = 0xf;
        goto LAB_0001fd44;
      }
      if (local_a74[0x10] != 0) {
        uVar7 = 0x10;
        goto LAB_0001fd44;
      }
      uVar18 = 0x20000;
      uVar7 = 0x11;
    }
    else {
      uVar7 = 8;
LAB_0001fd44:
      uVar18 = 1 << uVar7;
    }
    local_ac0 = uVar7;
    local_afc = uVar7;
    if (local_a74[0x10] == 0) {
      if (local_a74[0xf] != 0) {
        local_af4 = 0xf;
        goto LAB_00020098;
      }
      goto LAB_0001f1ac;
    }
    local_af4 = 0x10;
    goto LAB_00020098;
  }
  uVar7 = 1;
  uVar18 = 2;
LAB_00020030:
  if (local_a74[0x10] == 0) {
    if (local_a74[0xf] == 0) {
      local_afc = 7;
LAB_0001f1ac:
      if (local_a74[0xe] == 0) {
        if (local_a74[0xd] != 0) {
          local_af4 = 0xd;
          goto LAB_00020098;
        }
        if (local_a74[0xc] != 0) {
          local_af4 = 0xc;
          goto LAB_00020098;
        }
        if (local_a74[0xb] != 0) {
          local_af4 = 0xb;
          goto LAB_00020098;
        }
        if (local_a74[10] != 0) {
          local_af4 = 10;
          goto LAB_00020098;
        }
        if (local_a74[9] != 0) {
          local_af4 = 9;
          goto LAB_00020098;
        }
        if (local_a74[8] != 0) {
          local_af4 = 8;
          goto LAB_00020098;
        }
        if (local_a74[7] != 0) {
          local_af4 = 7;
          goto LAB_00020098;
        }
        if (local_a74[6] == 0) {
          if (local_a74[5] == 0) {
            if (local_a74[4] == 0) {
              if (local_a74[3] == 0) {
                if (local_a74[2] == 0) {
                  local_af4 = 0;
                  if (local_a74[1] != 0) {
                    local_af4 = 1;
                  }
                }
                else {
                  local_af4 = 2;
                }
              }
              else {
                local_af4 = 3;
              }
            }
            else {
              local_af4 = 4;
            }
          }
          else {
            local_af4 = 5;
          }
        }
        else {
          local_af4 = 6;
        }
      }
      else {
        local_af4 = 0xe;
LAB_00020098:
        if (local_afc <= local_af4) goto LAB_0001f25c;
      }
      local_ac0 = local_af4;
      local_afc = local_af4;
    }
    else {
      local_af4 = 0xf;
      local_afc = 7;
    }
LAB_0001f25c:
    if (uVar7 < local_af4) goto LAB_0001f264;
LAB_0001f43c:
    uVar8 = local_a74[local_af4];
    if (-1 < (int)(uVar18 - uVar8)) {
      iVar16 = local_af4 - 1;
      if (iVar16 != 0) {
        puVar12 = local_a74 + 0x24;
      }
      local_a74[0x23] = 0;
      local_a74[local_af4] = uVar18;
      if (iVar16 != 0) {
        puVar13 = local_a74;
        uVar19 = 0;
        do {
          puVar13 = puVar13 + 1;
          iVar16 = iVar16 + -1;
          uVar19 = uVar19 + *puVar13;
          *puVar12 = uVar19;
          puVar12 = puVar12 + 1;
        } while (iVar16 != 0);
      }
      memset(local_9a8,0,0x480);
      uVar19 = 0;
      puVar12 = local_528;
      do {
        puVar13 = puVar12 + 1;
        uVar20 = *puVar12;
        if (uVar20 != 0) {
          uVar9 = local_a74[uVar20 + 0x22];
          local_a74[uVar20 + 0x22] = uVar9 + 1;
          local_9a8[uVar9] = uVar19;
        }
        uVar19 = uVar19 + 1;
        puVar12 = puVar13;
      } while (puVar13 != auStack_4dc);
      local_a74[0x11] = 0;
      local_ab8[1] = 0;
      uVar19 = local_a74[local_af4 + 0x22];
      local_a74[0x22] = 0;
      if (uVar7 <= local_af4) {
        iVar16 = -1;
        uVar20 = 0;
        uVar33 = 0;
        iVar17 = 0;
        local_b04 = &local_ac8;
        uVar9 = 0;
        local_af0 = local_a74 + uVar7;
        local_ae8 = local_9a8;
        do {
          puVar13 = local_af0 + 1;
          uVar1 = 1 << (uVar7 - 1 & 0xff);
          puVar12 = local_ae8;
          for (uVar14 = *local_af0; local_ae8 = puVar12, uVar14 != 0; uVar14 = uVar14 - 1) {
            puVar27 = local_a74 + iVar16 + 0x12;
            piVar30 = local_ab8 + iVar16 + 1;
            while( true ) {
              iVar32 = iVar16;
              piVar31 = piVar30;
              puVar28 = puVar27;
              puVar27 = puVar28 + 1;
              uVar25 = *puVar28 + uVar33;
              if ((int)uVar7 <= (int)uVar25) break;
              uVar24 = uVar7 - uVar25;
              uVar20 = 1 << (uVar24 & 0xff);
              iVar16 = iVar32 + 1;
              if (uVar14 < uVar20) {
                uVar24 = uVar24 + 1;
                uVar33 = local_af4 - uVar25;
                if (local_afc <= local_af4 - uVar25) {
                  uVar33 = local_afc;
                }
                if (uVar24 < uVar33) {
                  uVar20 = (uVar20 - uVar14) * 2;
                  uVar15 = *puVar13;
                  puVar11 = puVar13;
                  if (uVar15 < uVar20) {
                    do {
                      uVar24 = uVar24 + 1;
                      uVar20 = (uVar20 - uVar15) * 2;
                      if (uVar33 <= uVar24) break;
                      puVar11 = puVar11 + 1;
                      uVar15 = *puVar11;
                    } while (uVar15 < uVar20);
                  }
                }
              }
              if (uVar25 < 0x10 && 0x10 < uVar25 + uVar24) {
                uVar24 = 0x10 - uVar25;
              }
              *puVar27 = uVar24;
              uVar20 = 1 << (uVar24 & 0xff);
              pvVar10 = malloc((uVar20 + 1) * 8);
              if (pvVar10 == (void *)0x0) {
                if ((iVar16 != 0) && (iVar16 = local_ab8[1], local_ab8[1] != 0)) goto LAB_0001fccc;
                iVar17 = local_ac8;
                if (local_afc != 0) {
                  return 3;
                }
                goto LAB_0001fd0c;
              }
              iVar17 = (int)pvVar10 + 8;
              piVar30 = piVar31 + 1;
              *piVar30 = iVar17;
              *local_b04 = iVar17;
              uVar4 = local_abc;
              local_b04 = (int *)((int)pvVar10 + 4);
              *(undefined4 *)((int)pvVar10 + 4) = 0;
              uVar33 = uVar25;
              if (iVar16 != 0) {
                cVar2 = (char)uVar24 + ' ';
                local_abc = CONCAT31(local_abc._1_3_,cVar2);
                local_ab8[0] = iVar17;
                puVar34 = (undefined4 *)
                          (*piVar31 +
                          (((1 << (uVar25 & 0xff)) - 1U & uVar9) >> (uVar25 - *puVar28 & 0xff)) * 8)
                ;
                local_abc._2_2_ = SUB42(uVar4,2);
                local_abc._0_2_ = CONCAT11((char)*puVar28,cVar2);
                local_a74[iVar32 + 0x23] = uVar9;
                *puVar34 = local_abc;
                puVar34[1] = iVar17;
              }
            }
            if (puVar12 < local_9a8 + uVar19) {
              local_ae8 = puVar12 + 1;
              uVar25 = *puVar12;
              if (uVar25 < 0x13) {
                uVar26 = 0x20;
              }
              else {
                uVar26 = *(undefined1 *)(uVar25 - 0x13);
                uVar25 = (uint)*(ushort *)(uVar25 * 2 + -0x26);
              }
              local_ab8[0] = CONCAT22(local_ab8[0]._2_2_,(short)uVar25);
            }
            else {
              uVar26 = 99;
            }
            for (uVar25 = uVar9 >> (uVar33 & 0xff); uVar25 < uVar20;
                uVar25 = uVar25 + (1 << (uVar7 - uVar33 & 0xff))) {
              puVar34 = (undefined4 *)(iVar17 + uVar25 * 8);
              local_abc._2_2_ = (undefined2)((uint)local_abc >> 0x10);
              local_abc._0_2_ = CONCAT11((char)(uVar7 - uVar33),uVar26);
              *puVar34 = local_abc;
              puVar34[1] = local_ab8[0];
            }
            uVar24 = uVar9 & uVar1;
            uVar25 = uVar1;
            while (uVar24 != 0) {
              uVar9 = uVar9 ^ uVar25;
              uVar25 = uVar25 >> 1;
              uVar24 = uVar9 & uVar25;
            }
            uVar9 = uVar9 ^ uVar25;
            iVar16 = iVar32;
            if (((1 << (uVar33 & 0xff)) - 1U & uVar9) != local_a74[iVar32 + 0x22]) {
              iVar16 = iVar32 + -1;
              uVar33 = uVar33 - local_a74[iVar32 + 0x11];
              if (local_a74[iVar32 + 0x21] != ((1 << (uVar33 & 0xff)) - 1U & uVar9)) {
                iVar16 = iVar32 + -2;
                uVar33 = uVar33 - local_a74[iVar32 + 0x10];
                if (local_a74[iVar32 + 0x20] != ((1 << (uVar33 & 0xff)) - 1U & uVar9)) {
                  iVar16 = iVar32 + -3;
                  uVar33 = uVar33 - local_a74[iVar32 + 0xf];
                  if (local_a74[iVar32 + 0x1f] != ((1 << (uVar33 & 0xff)) - 1U & uVar9)) {
                    iVar16 = iVar32 + -4;
                    uVar33 = uVar33 - local_a74[iVar32 + 0xe];
                    if (local_a74[iVar32 + 0x1e] != ((1 << (uVar33 & 0xff)) - 1U & uVar9)) {
                      iVar16 = iVar32 + -5;
                      uVar33 = uVar33 - local_a74[iVar32 + 0xd];
                      if (local_a74[iVar32 + 0x1d] != ((1 << (uVar33 & 0xff)) - 1U & uVar9)) {
                        iVar16 = iVar32 + -6;
                        uVar33 = uVar33 - local_a74[iVar32 + 0xc];
                        if (local_a74[iVar32 + 0x1c] != ((1 << (uVar33 & 0xff)) - 1U & uVar9)) {
                          iVar16 = iVar32 + -7;
                          uVar33 = uVar33 - local_a74[iVar32 + 0xb];
                          if (local_a74[iVar32 + 0x1b] != ((1 << (uVar33 & 0xff)) - 1U & uVar9)) {
                            iVar16 = iVar32 + -8;
                            uVar33 = uVar33 - local_a74[iVar32 + 10];
                            if (local_a74[iVar32 + 0x1a] != ((1 << (uVar33 & 0xff)) - 1U & uVar9)) {
                              iVar16 = iVar32 + -9;
                              uVar33 = uVar33 - local_a74[iVar32 + 9];
                              if (local_a74[iVar32 + 0x19] != ((1 << (uVar33 & 0xff)) - 1U & uVar9))
                              {
                                iVar16 = iVar32 + -10;
                                uVar33 = uVar33 - local_a74[iVar32 + 8];
                                if (local_a74[iVar32 + 0x18] !=
                                    ((1 << (uVar33 & 0xff)) - 1U & uVar9)) {
                                  iVar16 = iVar32 + -0xb;
                                  uVar33 = uVar33 - local_a74[iVar32 + 7];
                                  if (local_a74[iVar32 + 0x17] !=
                                      ((1 << (uVar33 & 0xff)) - 1U & uVar9)) {
                                    iVar16 = iVar32 + -0xc;
                                    uVar33 = uVar33 - local_a74[iVar32 + 6];
                                    if (local_a74[iVar32 + 0x16] !=
                                        ((1 << (uVar33 & 0xff)) - 1U & uVar9)) {
                                      iVar16 = iVar32 + -0xd;
                                      uVar33 = uVar33 - local_a74[iVar32 + 5];
                                      if (local_a74[iVar32 + 0x15] !=
                                          ((1 << (uVar33 & 0xff)) - 1U & uVar9)) {
                                        iVar16 = iVar32 + -0xe;
                                        uVar33 = uVar33 - local_a74[iVar32 + 4];
                                        if (local_a74[iVar32 + 0x14] !=
                                            ((1 << (uVar33 & 0xff)) - 1U & uVar9)) {
                                          iVar16 = iVar32 + -0xf;
                                          uVar33 = uVar33 - local_a74[iVar32 + 3];
                                          if (local_a74[iVar32 + 0x13] !=
                                              ((1 << (uVar33 & 0xff)) - 1U & uVar9)) {
                                            iVar16 = iVar32 + -0x10;
                                            uVar33 = uVar33 - local_a74[iVar32 + 2];
                                            if (local_a74[iVar32 + 0x12] !=
                                                ((1 << (uVar33 & 0xff)) - 1U & uVar9)) {
                                              iVar16 = iVar32 + -0x11;
                                              uVar33 = uVar33 - local_a74[iVar32 + 1];
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            puVar12 = local_ae8;
          }
          uVar7 = uVar7 + 1;
          local_af0 = puVar13;
        } while (local_af4 + 1 != uVar7);
      }
      iVar16 = DAT_0001fcac;
      local_ac0 = local_a74[0x12];
      iVar17 = local_ac8;
      if ((local_a74[0x12] == 0) || (uVar18 != uVar8 && local_af4 != 1)) goto LAB_0001fd0c;
      uVar29 = uVar29 & 0x1f;
      iVar17 = (uVar5 & 0x1f) + 1;
      iVar32 = uVar29 + 0x101;
      uVar8 = *(uint *)(&DAT_0002c580 + local_a74[0x12] * 4);
      uVar18 = iVar32 + iVar17;
      uVar5 = 0;
      uVar7 = 0;
      do {
        if ((int)uVar23 < (int)local_ac0) {
          do {
            iVar21 = *(int *)(iVar16 + 0xe0);
            *(int *)(iVar16 + 0xe0) = iVar21 + -1;
            if (iVar21 < 1) {
              uVar19 = FUN_00019950();
              if (uVar19 == 0xffffffff) {
                if ((int)uVar23 < 0) goto LAB_0001ee88;
                break;
              }
            }
            else {
              pbVar22 = *(byte **)(iVar16 + 0xdc);
              *(byte **)(iVar16 + 0xdc) = pbVar22 + 1;
              uVar19 = (uint)*pbVar22;
            }
            uVar6 = uVar6 | uVar19 << (uVar23 & 0xff);
            uVar23 = uVar23 + 8;
          } while ((int)uVar23 < (int)local_ac0);
        }
        iVar21 = local_ac8 + (uVar8 & uVar6) * 8;
        uVar19 = (uint)*(ushort *)(iVar21 + 4);
        uVar20 = (uint)*(byte *)(iVar21 + 1);
        uVar6 = uVar6 >> uVar20;
        uVar23 = uVar23 - uVar20;
        if (uVar19 < 0x10) {
          uVar20 = uVar7 + 1;
          local_528[uVar7] = uVar19;
          uVar5 = uVar19;
        }
        else if (uVar19 == 0x10) {
          for (; (int)uVar23 < 2; uVar23 = uVar23 + 8) {
            iVar21 = *(int *)(iVar16 + 0xe0);
            *(int *)(iVar16 + 0xe0) = iVar21 + -1;
            if (iVar21 < 1) {
              uVar19 = FUN_00019950();
              if (uVar19 == 0xffffffff) {
                if ((int)uVar23 < 0) goto LAB_0001ee88;
                break;
              }
            }
            else {
              pbVar22 = *(byte **)(iVar16 + 0xdc);
              *(byte **)(iVar16 + 0xdc) = pbVar22 + 1;
              uVar19 = (uint)*pbVar22;
            }
            uVar6 = uVar6 | uVar19 << (uVar23 & 0xff);
          }
          uVar19 = uVar6 & 3;
          uVar20 = uVar7 + 3 + uVar19;
          uVar23 = uVar23 - 2;
          uVar6 = uVar6 >> 2;
          iVar21 = local_ac8;
          if (uVar18 < uVar20) {
            while (iVar21 != 0) {
              iVar16 = *(int *)(iVar21 + -4);
              free((void *)(iVar21 + -8));
              iVar21 = iVar16;
            }
            return 1;
          }
          local_528[uVar7] = uVar5;
          local_528[uVar7 + 1] = uVar5;
          local_528[uVar7 + 2] = uVar5;
          if (uVar19 != 0) {
            local_528[uVar7 + 3] = uVar5;
            if (uVar19 != 1) {
              local_528[uVar7 + 4] = uVar5;
              if (uVar19 != 2) {
                local_528[uVar7 + 5] = uVar5;
              }
            }
          }
        }
        else if (uVar19 == 0x11) {
          for (; (int)uVar23 < 3; uVar23 = uVar23 + 8) {
            iVar21 = *(int *)(iVar16 + 0xe0);
            *(int *)(iVar16 + 0xe0) = iVar21 + -1;
            if (iVar21 < 1) {
              uVar5 = FUN_00019950();
              if (uVar5 == 0xffffffff) {
                if ((int)uVar23 < 0) goto LAB_0001ee88;
                break;
              }
            }
            else {
              pbVar22 = *(byte **)(iVar16 + 0xdc);
              *(byte **)(iVar16 + 0xdc) = pbVar22 + 1;
              uVar5 = (uint)*pbVar22;
            }
            uVar6 = uVar6 | uVar5 << (uVar23 & 0xff);
          }
          uVar19 = uVar6 & 7;
          uVar20 = uVar7 + 3 + uVar19;
          uVar23 = uVar23 - 3;
          uVar6 = uVar6 >> 3;
          iVar21 = local_ac8;
          if (uVar18 < uVar20) {
            while (iVar21 != 0) {
              iVar16 = *(int *)(iVar21 + -4);
              free((void *)(iVar21 + -8));
              iVar21 = iVar16;
            }
            return 1;
          }
          uVar5 = 0;
          memset(local_528 + uVar7,0,(uVar19 + 3) * 4);
        }
        else {
          for (; (int)uVar23 < 7; uVar23 = uVar23 + 8) {
            iVar21 = *(int *)(iVar16 + 0xe0);
            *(int *)(iVar16 + 0xe0) = iVar21 + -1;
            if (iVar21 < 1) {
              uVar5 = FUN_00019950();
              if (uVar5 == 0xffffffff) {
                if ((int)uVar23 < 0) goto LAB_0001ee88;
                break;
              }
            }
            else {
              pbVar22 = *(byte **)(iVar16 + 0xdc);
              *(byte **)(iVar16 + 0xdc) = pbVar22 + 1;
              uVar5 = (uint)*pbVar22;
            }
            uVar6 = uVar6 | uVar5 << (uVar23 & 0xff);
          }
          uVar19 = uVar6 & 0x7f;
          uVar20 = uVar7 + 0xb + uVar19;
          uVar23 = uVar23 - 7;
          uVar6 = uVar6 >> 7;
          iVar21 = local_ac8;
          if (uVar18 < uVar20) {
            while (iVar21 != 0) {
              iVar16 = *(int *)(iVar21 + -4);
              free((void *)(iVar21 + -8));
              iVar21 = iVar16;
            }
            return 1;
          }
          uVar5 = 0;
          memset(local_528 + uVar7,0,(uVar19 + 0xb) * 4);
        }
        uVar7 = uVar20;
        iVar21 = DAT_0001fcb4;
        iVar3 = local_ac8;
      } while (uVar20 < uVar18);
      while (DAT_0001fcb4 = iVar21, iVar3 != 0) {
        iVar16 = *(int *)(iVar3 + -4);
        free((void *)(iVar3 + -8));
        iVar21 = DAT_0001fcb4;
        iVar3 = iVar16;
      }
      *(uint *)(iVar21 + 0x2a0) = uVar6;
      *(uint *)(iVar21 + 0x2a4) = uVar23;
      local_ac0 = 9;
      iVar16 = FUN_0001dfec(local_528,iVar32,0x101,*(undefined4 *)(iVar21 + 0x290),
                            *(undefined4 *)(iVar21 + 0x294),&local_ac8,&local_ac0);
      if (local_ac0 == 0) {
LAB_0001fc48:
        iVar16 = local_ac8;
        if (DAT_000441e0 == 0) {
          (*DAT_000d54ac)(&DAT_000441a0,"(incomplete l-tree)  ",0x15,1);
          iVar16 = local_ac8;
        }
        while (iVar16 != 0) {
          iVar17 = *(int *)(iVar16 + -4);
          free((void *)(iVar16 + -8));
          iVar16 = iVar17;
        }
        return 1;
      }
      if (iVar16 != 0) {
        if (iVar16 != 1) {
          return iVar16;
        }
        goto LAB_0001fc48;
      }
      local_9a8[0] = 6;
      iVar16 = FUN_0001dfec(local_528 + iVar32,iVar17,0,&DAT_000307e0,
                            *(undefined4 *)(DAT_0001fcb4 + 0x298),&local_ac4,local_9a8);
      if (iVar16 == 1) {
        if (local_9a8[0] == 0 && uVar29 != 0) goto LAB_000201e0;
      }
      else {
        if (local_9a8[0] == 0 && uVar29 != 0) {
LAB_000201e0:
          iVar16 = local_ac4;
          if (DAT_000441e0 == 0) {
            (*DAT_000d54ac)(&DAT_000441a0,"(incomplete d-tree)  ",0x15,1);
            iVar16 = local_ac4;
          }
          while (iVar16 != 0) {
            iVar17 = *(int *)(iVar16 + -4);
            free((void *)(iVar16 + -8));
            iVar16 = iVar17;
          }
          iVar16 = 1;
          iVar17 = local_ac8;
joined_r0x0001ffe0:
          while (iVar17 != 0) {
            iVar32 = *(int *)(iVar17 + -4);
            free((void *)(iVar17 + -8));
            iVar17 = iVar32;
          }
          return iVar16;
        }
        iVar17 = local_ac8;
        if (iVar16 != 0) goto joined_r0x0001ffe0;
      }
      iVar17 = FUN_0001bd30(local_ac8,local_ac4,local_ac0);
      iVar16 = local_ac8;
joined_r0x0001ee94:
      while (iVar32 = local_ac4, iVar16 != 0) {
        iVar32 = *(int *)(iVar16 + -4);
        free((void *)(iVar16 + -8));
        iVar16 = iVar32;
      }
      while (iVar32 != 0) {
        iVar16 = *(int *)(iVar32 + -4);
        free((void *)(iVar32 + -8));
        iVar32 = iVar16;
      }
      return iVar17;
    }
  }
  else {
    local_af4 = 0x10;
    local_afc = 7;
LAB_0001f264:
    if (-1 < (int)(uVar18 - local_a74[uVar7])) {
      uVar18 = (uVar18 - local_a74[uVar7]) * 2;
      if (uVar7 + 1 < local_af4) {
        puVar12 = &uStack_28;
        if ((int)(uVar18 - local_a74[uVar7 + 1]) < 0) {
LAB_0001fd18:
          iVar16 = 2;
          goto LAB_0001fcec;
        }
        uVar18 = (uVar18 - local_a74[uVar7 + 1]) * 2;
        if (uVar7 + 2 < local_af4) {
          if ((int)(uVar18 - local_a74[uVar7 + 2]) < 0) goto LAB_0001fd18;
          uVar18 = (uVar18 - local_a74[uVar7 + 2]) * 2;
          if (uVar7 + 3 < local_af4) {
            if ((int)(uVar18 - local_a74[uVar7 + 3]) < 0) goto LAB_0001fd18;
            uVar18 = (uVar18 - local_a74[uVar7 + 3]) * 2;
            if (uVar7 + 4 < local_af4) {
              if ((int)(uVar18 - local_a74[uVar7 + 4]) < 0) goto LAB_0001fd18;
              uVar18 = (uVar18 - local_a74[uVar7 + 4]) * 2;
              if (uVar7 + 5 < local_af4) {
                if ((int)(uVar18 - local_a74[uVar7 + 5]) < 0) goto LAB_0001fd18;
                uVar18 = (uVar18 - local_a74[uVar7 + 5]) * 2;
                if (uVar7 + 6 < local_af4) {
                  if ((int)(uVar18 - local_a74[uVar7 + 6]) < 0) goto LAB_0001fd18;
                  uVar18 = (uVar18 - local_a74[uVar7 + 6]) * 2;
                  if (uVar7 + 7 < local_af4) {
                    if ((int)(uVar18 - local_a74[uVar7 + 7]) < 0) goto LAB_0001fd18;
                    uVar18 = (uVar18 - local_a74[uVar7 + 7]) * 2;
                    if (uVar7 + 8 < local_af4) {
                      if ((int)(uVar18 - local_a74[uVar7 + 8]) < 0) goto LAB_0001fd18;
                      uVar18 = (uVar18 - local_a74[uVar7 + 8]) * 2;
                      if (uVar7 + 9 < local_af4) {
                        if ((int)(uVar18 - local_a74[uVar7 + 9]) < 0) goto LAB_0001fd18;
                        uVar18 = (uVar18 - local_a74[uVar7 + 9]) * 2;
                        if (uVar7 + 10 < local_af4) {
                          if ((int)(uVar18 - local_a74[uVar7 + 10]) < 0) goto LAB_0001fd18;
                          uVar18 = (uVar18 - local_a74[uVar7 + 10]) * 2;
                          if (uVar7 + 0xb < local_af4) {
                            if ((int)(uVar18 - local_a74[uVar7 + 0xb]) < 0) goto LAB_0001fd18;
                            uVar18 = (uVar18 - local_a74[uVar7 + 0xb]) * 2;
                            if (uVar7 + 0xc < local_af4) {
                              if ((int)(uVar18 - local_a74[uVar7 + 0xc]) < 0) goto LAB_0001fd18;
                              uVar18 = (uVar18 - local_a74[uVar7 + 0xc]) * 2;
                              if (uVar7 + 0xd < local_af4) {
                                if ((int)(uVar18 - local_a74[uVar7 + 0xd]) < 0) goto LAB_0001fd18;
                                uVar18 = (uVar18 - local_a74[uVar7 + 0xd]) * 2;
                                if (uVar7 + 0xe < local_af4) {
                                  if ((int)(uVar18 - local_a74[0xf]) < 0) goto LAB_0001fd18;
                                  uVar18 = (uVar18 - local_a74[0xf]) * 2;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_0001f43c;
    }
  }
  iVar17 = local_ac8;
  if (local_afc != 0) {
    return 2;
  }
LAB_0001fd0c:
  while (iVar17 != 0) {
    iVar16 = *(int *)(iVar17 + -4);
    free((void *)(iVar17 + -8));
    iVar17 = iVar16;
  }
  return 1;
}



/* ===== FUN_00020268 @ 00020268 size=988 ===== */

int FUN_00020268(int param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  
  iVar4 = DAT_00020644;
  puVar9 = (undefined8 *)(DAT_00020644 + 0x29c);
  *(undefined4 *)(DAT_00020644 + 0x2a4) = 0;
  *puVar9 = 0;
  if (param_1 == 0) {
    uVar1 = CONCAT44(DAT_00020650 + 0x40,DAT_00020650);
    *(int *)(iVar4 + 0x298) = DAT_00020650 + 0x60;
    *(undefined8 *)(iVar4 + 0x260) = *(undefined8 *)(iVar4 + 0x280);
    *(undefined8 *)(iVar4 + 0x290) = uVar1;
    *(undefined8 *)(iVar4 + 0x268) = *(undefined8 *)(iVar4 + 0x288);
  }
  else {
    uVar1 = CONCAT44(DAT_00020648 + 0x40,DAT_00020648);
    *(int *)(iVar4 + 0x298) = DAT_00020648 + 0x60;
    *(undefined8 *)(iVar4 + 0x260) = *(undefined8 *)(iVar4 + 0x270);
    *(undefined8 *)(iVar4 + 0x290) = uVar1;
    *(undefined8 *)(iVar4 + 0x268) = *(undefined8 *)(iVar4 + 0x278);
  }
  iVar8 = DAT_0002064c;
  uVar11 = 0;
  uVar13 = 0;
LAB_000202f0:
  for (; (int)uVar11 < 1; uVar11 = uVar11 + 8) {
    iVar5 = *(int *)(iVar8 + 0xe0);
    *(int *)(iVar8 + 0xe0) = iVar5 + -1;
    if (iVar5 < 1) {
      uVar2 = FUN_00019950();
      if (uVar2 == 0xffffffff) {
        if (uVar11 != 0) {
          return 1;
        }
        break;
      }
    }
    else {
      pbVar6 = *(byte **)(iVar8 + 0xdc);
      *(byte **)(iVar8 + 0xdc) = pbVar6 + 1;
      uVar2 = (uint)*pbVar6;
    }
    uVar13 = uVar13 | uVar2 << (uVar11 & 0xff);
  }
  uVar2 = uVar13 >> 1;
  for (uVar11 = uVar11 - 1; (int)uVar11 < 2; uVar11 = uVar11 + 8) {
    iVar5 = *(int *)(iVar8 + 0xe0);
    *(int *)(iVar8 + 0xe0) = iVar5 + -1;
    if (iVar5 < 1) {
      uVar10 = FUN_00019950();
      if (uVar10 == 0xffffffff) {
        if ((int)uVar11 < 0) {
          return 1;
        }
        break;
      }
    }
    else {
      pbVar6 = *(byte **)(iVar8 + 0xdc);
      *(byte **)(iVar8 + 0xdc) = pbVar6 + 1;
      uVar10 = (uint)*pbVar6;
    }
    uVar2 = uVar2 | uVar10 << (uVar11 & 0xff);
  }
  uVar10 = uVar2 & 3;
  uVar11 = uVar11 - 2;
  *(uint *)(iVar4 + 0x2a4) = uVar11;
  *(uint *)(iVar4 + 0x2a0) = uVar2 >> 2;
  if (uVar10 != 2) {
    if (uVar10 != 0) {
      if (uVar10 != 1) {
        return 2;
      }
      iVar5 = FUN_0001c510();
      goto LAB_000204a4;
    }
    iVar5 = *(int *)(iVar4 + 0x29c);
    uVar10 = uVar11 - (uVar11 & 7);
    uVar11 = (uVar2 >> 2) >> (uVar11 & 7);
    uVar2 = uVar10;
    if ((int)uVar10 < 0x10) {
      do {
        uVar10 = uVar2;
        iVar12 = *(int *)(iVar8 + 0xe0);
        *(int *)(iVar8 + 0xe0) = iVar12 + -1;
        if (iVar12 < 1) {
          uVar2 = FUN_00019950();
          if (uVar2 == 0xffffffff) goto code_r0x00020480;
        }
        else {
          pbVar6 = *(byte **)(iVar8 + 0xdc);
          *(byte **)(iVar8 + 0xdc) = pbVar6 + 1;
          uVar2 = (uint)*pbVar6;
        }
        uVar11 = uVar11 | uVar2 << (uVar10 & 0xff);
        uVar2 = uVar10 + 8;
        if (0xf < (int)(uVar10 + 8)) {
          uVar2 = uVar11 & 0xffff;
          uVar10 = uVar10 - 8;
          uVar11 = uVar11 >> 0x10;
          goto LAB_000203d8;
        }
      } while( true );
    }
    goto LAB_00020488;
  }
  iVar5 = FUN_0001ecb4();
LAB_000204a4:
  if (iVar5 != 0) {
    return iVar5;
  }
  goto joined_r0x000204b0;
code_r0x00020480:
  if (-1 < (int)uVar10) {
LAB_00020488:
    uVar2 = uVar11 & 0xffff;
    uVar11 = uVar11 >> 0x10;
    for (uVar10 = uVar10 - 0x10; (int)uVar10 < 0x10; uVar10 = uVar10 + 8) {
LAB_000203d8:
      iVar12 = *(int *)(iVar8 + 0xe0);
      *(int *)(iVar8 + 0xe0) = iVar12 + -1;
      if (iVar12 < 1) {
        uVar3 = FUN_00019950();
        if (uVar3 == 0xffffffff) {
          if ((int)uVar10 < 0) {
            return 1;
          }
          break;
        }
      }
      else {
        pbVar6 = *(byte **)(iVar8 + 0xdc);
        *(byte **)(iVar8 + 0xdc) = pbVar6 + 1;
        uVar3 = (uint)*pbVar6;
      }
      uVar11 = uVar11 | uVar3 << (uVar10 & 0xff);
    }
    if ((~uVar11 & 0xffff) == uVar2) {
      uVar11 = uVar11 >> 0x10;
      uVar10 = uVar10 - 0x10;
      iVar12 = uVar2 - 1;
      if (uVar2 != 0) {
        do {
          for (; (int)uVar10 < 8; uVar10 = uVar10 + 8) {
            iVar7 = *(int *)(iVar8 + 0xe0);
            *(int *)(iVar8 + 0xe0) = iVar7 + -1;
            if (iVar7 < 1) {
              uVar2 = FUN_00019950();
              if (uVar2 == 0xffffffff) {
                if ((int)uVar10 < 0) {
                  return 1;
                }
                break;
              }
            }
            else {
              pbVar6 = *(byte **)(iVar8 + 0xdc);
              *(byte **)(iVar8 + 0xdc) = pbVar6 + 1;
              uVar2 = (uint)*pbVar6;
            }
            uVar11 = uVar11 | uVar2 << (uVar10 & 0xff);
          }
          iVar7 = iVar8 + iVar5;
          iVar5 = iVar5 + 1;
          *(char *)(iVar7 + -0xff30) = (char)uVar11;
          if (iVar5 == 0x10000) {
            if (*(int *)(iVar8 + 0x1d8) == 0) {
              iVar5 = FUN_00019bdc(DAT_00020654,0x10000);
            }
            else {
              iVar5 = FUN_00018f34();
            }
            if (iVar5 != 0) {
              return iVar5;
            }
            iVar5 = 0;
          }
          iVar12 = iVar12 + -1;
          uVar11 = uVar11 >> 8;
          uVar10 = uVar10 - 8;
        } while (iVar12 != -1);
      }
      *(int *)(iVar4 + 0x29c) = iVar5;
      *(uint *)(iVar4 + 0x2a0) = uVar11;
      *(uint *)(iVar4 + 0x2a4) = uVar10;
joined_r0x000204b0:
      if ((uVar13 & 1) != 0) {
        if (param_1 != 0) {
          *(undefined4 *)(iVar4 + 0x27c) = *(undefined4 *)(iVar4 + 0x26c);
          iVar8 = DAT_0002064c;
          *(undefined4 *)(iVar4 + 0x274) = *(undefined4 *)(iVar4 + 0x264);
        }
        else {
          *(undefined4 *)(iVar4 + 0x28c) = *(undefined4 *)(iVar4 + 0x26c);
          iVar8 = DAT_0002064c;
          *(undefined4 *)(iVar4 + 0x284) = *(undefined4 *)(iVar4 + 0x264);
        }
        iVar8 = *(int *)(iVar8 + 0x1d8);
        if (param_1 != 0) {
          *(undefined4 *)(iVar4 + 0x270) = *(undefined4 *)(iVar4 + 0x260);
          *(undefined4 *)(iVar4 + 0x278) = *(undefined4 *)(iVar4 + 0x268);
        }
        else {
          *(undefined4 *)(iVar4 + 0x280) = *(undefined4 *)(iVar4 + 0x260);
          *(undefined4 *)(iVar4 + 0x288) = *(undefined4 *)(iVar4 + 0x268);
        }
        if (iVar8 == 0) {
          iVar4 = FUN_00019bdc(DAT_00020654,*(undefined4 *)(iVar4 + 0x29c));
          return iVar4;
        }
        iVar4 = FUN_00018f34();
        return iVar4;
      }
      uVar13 = *(uint *)(iVar4 + 0x2a0);
      uVar11 = *(uint *)(iVar4 + 0x2a4);
      goto LAB_000202f0;
    }
  }
  return 1;
}



/* ===== FUN_00020658 @ 00020658 size=40 ===== */

undefined4 FUN_00020658(int param_1)

{
  void *__ptr;
  
  while (param_1 != 0) {
    __ptr = (void *)(param_1 + -8);
    param_1 = *(int *)(param_1 + -4);
    free(__ptr);
  }
  return 0;
}



/* ===== FUN_00020680 @ 00020680 size=2732 ===== */

int FUN_00020680(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  tm *ptVar7;
  undefined2 *puVar8;
  uint uVar9;
  char *pcVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  code *pcVar14;
  uint uVar15;
  int iVar16;
  undefined4 uVar17;
  int local_a4;
  uint local_9c;
  uint local_98;
  int local_94;
  int local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  undefined4 local_7c;
  char acStack_68 [4];
  char cStack_64;
  undefined1 local_63;
  char acStack_60 [12];
  undefined1 auStack_54 [4];
  time_t atStack_50 [2];
  undefined1 auStack_48 [36];
  
  pcVar14 = DAT_000d54ac;
  iVar4 = DAT_000441f4;
  DAT_000c426c = auStack_48;
  if (DAT_000441e0 < 2) {
    if (DAT_000441d4 == 0) {
      iVar12 = sprintf(DAT_00021138,"%s\n%s\n",(&DAT_000309a0)[(uint)(1 < DAT_000441f4) * 2],
                       (&DAT_000309a4)[(uint)(1 < DAT_000441f4) * 2]);
      (*pcVar14)(&DAT_000441a0,DAT_00021138,iVar12,0);
    }
    else {
      iVar12 = sprintf(DAT_00021138,"%s (\"^\" ==> case\n%s   conversion)\n",
                       (&DAT_000309a0)[(uint)(1 < DAT_000441f4) * 2],
                       (&DAT_000309a4)[(uint)(1 < DAT_000441f4) * 2]);
      (*pcVar14)(&DAT_000441a0,DAT_00021138,iVar12,0);
    }
  }
  iVar12 = DAT_0002112c;
  iVar16 = 1;
  local_9c = 0;
  local_98 = 0;
  puVar8 = (undefined2 *)(DAT_0002112c + 0x156);
  local_94 = 0;
  local_a4 = 0;
  do {
    iVar1 = FUN_00019870(DAT_00021130,4);
    iVar5 = DAT_00021134;
    iVar2 = DAT_0002112c;
    if (iVar1 == 0) {
      return 0x33;
    }
    if ((((*DAT_00021130 != DAT_00044160) || (*DAT_0002113c != DAT_00044161)) ||
        (DAT_0002113c[1] != DAT_00044162)) || (DAT_0002113c[2] != DAT_00044163)) {
      uVar9 = iVar16 - 1;
      iVar12 = *(int *)(DAT_0002112c + 0x170);
      if (iVar12 == 0) {
        uVar9 = uVar9 & 0xffff;
      }
      if (*(uint *)(DAT_0002112c + 0x168) != uVar9) {
        pcVar14 = *(code **)(DAT_00021134 + 0x30c);
        iVar4 = sprintf(DAT_00021138,
                        "error:  expected central file header signature not found (file #%lu).\n",
                        iVar16);
        (*pcVar14)(iVar5 + -0x91000,DAT_00021138,iVar4,0x401);
        pcVar14 = *(code **)(iVar5 + 0x30c);
        iVar4 = sprintf(DAT_00021138,
                        "  (please check that you have transferred or created the zipfile in the\n  appropriate BINARY mode and that you have compiled UnZip properly)\n"
                       );
        (*pcVar14)(iVar5 + -0x91000,DAT_00021138,iVar4,0x401);
        return 3;
      }
      if (1 < DAT_000441e0) goto LAB_0002074c;
      if (local_9c == 0) {
        uVar11 = 0x20;
        uVar9 = 0;
LAB_00021018:
        sprintf(acStack_60,DAT_00021150,uVar11,uVar9);
      }
      else {
        if (local_9c < 0x1e8481) {
          if (local_9c < local_98) {
            iVar12 = FUN_0002b2dc((local_98 - local_9c) * 1000 + (local_9c >> 1));
            iVar12 = -iVar12;
          }
          else {
            iVar12 = FUN_0002b2dc((local_9c - local_98) * 1000 + (local_9c >> 1));
          }
LAB_00020a14:
          if (-1 < iVar12) {
            uVar9 = (uint)((ulonglong)(iVar12 + 5) * 0xcccccccd >> 0x20);
            goto LAB_00020fa4;
          }
          uVar11 = 0x2d;
          uVar9 = (5U - iVar12) / 10;
        }
        else {
          if (local_9c < local_98) {
            iVar12 = FUN_0002b2dc((local_98 - local_9c) + local_9c / 2000,local_9c / 1000);
            iVar12 = -iVar12;
            goto LAB_00020a14;
          }
          iVar12 = FUN_0002b2dc((local_9c - local_98) + local_9c / 2000,local_9c / 1000);
          uVar9 = (uint)((ulonglong)(iVar12 + 5) * 0xcccccccd >> 0x20);
LAB_00020fa4:
          uVar9 = uVar9 >> 3;
          uVar11 = 0x20;
        }
        if (uVar9 != 100) goto LAB_00021018;
        sprintf(acStack_60,DAT_00021148,uVar11);
      }
      iVar12 = DAT_00021134;
      pcVar14 = *(code **)(DAT_00021134 + 0x30c);
      if (iVar4 < 2) {
        uVar11 = FUN_0001b92c(local_9c,&DAT_00030c8c,&DAT_00033278);
        pcVar10 = "";
        if (local_94 != 1) {
          pcVar10 = "s";
        }
        iVar4 = sprintf(DAT_00021138,DAT_00021160,uVar11,local_94,pcVar10);
      }
      else {
        uVar11 = FUN_0001b92c(local_9c,&DAT_0002c96c,&DAT_00033278);
        uVar3 = FUN_0001b92c(local_98,&DAT_0002c96c,&DAT_00033278);
        pcVar10 = "";
        if (local_94 != 1) {
          pcVar10 = "s";
        }
        iVar4 = sprintf(DAT_00021138,DAT_0002114c,uVar11,uVar3,acStack_60,local_94,pcVar10);
      }
      (*pcVar14)(iVar12 + -0x91000,DAT_00021138,iVar4,0);
      iVar12 = *(int *)(iVar2 + 0x170);
LAB_0002074c:
      iVar4 = DAT_00021134;
      pcVar10 = &DAT_00044154;
      if (iVar12 == 0) {
        pcVar10 = &DAT_00044158;
      }
      if (((((*DAT_00021130 != *pcVar10) || (DAT_00021130[1] != pcVar10[1])) ||
           ((*DAT_00021164 != pcVar10[2] || (DAT_00021164[1] != pcVar10[3])))) &&
          (*(int *)(iVar2 + 0x174) == 0)) &&
         (((DAT_0004425c != DAT_00044158 || (DAT_0004425d != DAT_00044159)) ||
          ((DAT_0004425e != DAT_0004415a || (DAT_0004425f != DAT_0004415b)))))) {
        local_a4 = 1;
        pcVar14 = *(code **)(DAT_00021134 + 0x30c);
        iVar12 = sprintf(DAT_00021138,
                         "\nnote:  didn\'t find end-of-central-dir signature at end of central dir.\n"
                        );
        (*pcVar14)(iVar4 + -0x91000,DAT_00021138,iVar12,0x401);
      }
      if (local_94 != 0) {
        return local_a4;
      }
      return 0xb;
    }
    iVar2 = FUN_00023978();
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = FUN_0001b094(*DAT_00021140,2);
    if ((iVar2 != 0) && (local_a4 = iVar2, 1 < iVar2)) {
      return iVar2;
    }
    if (*(void **)(iVar12 + 0x10c) != (void *)0x0) {
      free(*(void **)(iVar12 + 0x10c));
      *(undefined4 *)(iVar12 + 0x10c) = 0;
    }
    iVar2 = FUN_0001b094(*puVar8,3);
    uVar11 = DAT_00021144;
    if ((iVar2 != 0) && (local_a4 = iVar2, 1 < iVar2)) {
      return iVar2;
    }
    if (DAT_00044230 == 0) {
      if (DAT_00044228 == 0) {
LAB_000208d8:
        uVar11 = DAT_00021144;
        if (DAT_0004422c != 0) {
          uVar9 = 0;
          do {
            iVar2 = uVar9 * 4;
            uVar9 = uVar9 + 1;
            iVar2 = FUN_00021b04(uVar11,*(undefined4 *)(DAT_00044258 + iVar2),DAT_000441b8);
            if (iVar2 != 0) goto LAB_0002091c;
          } while (uVar9 < DAT_0004422c);
        }
        goto LAB_00020aec;
      }
      uVar9 = 0;
      do {
        iVar2 = uVar9 * 4;
        uVar9 = uVar9 + 1;
        iVar2 = FUN_00021b04(uVar11,*(undefined4 *)(DAT_00044254 + iVar2),DAT_000441b8);
        if (iVar2 != 0) goto LAB_000208d8;
      } while (uVar9 < DAT_00044228);
LAB_0002091c:
      if (DAT_00044230 != 0) goto LAB_00020aec;
      if (((*(short *)(iVar12 + 0x158) != 0) && (iVar2 = FUN_0001b094(), iVar2 != 0)) &&
         (local_a4 = iVar2, 1 < iVar2)) {
        return iVar2;
      }
    }
    else {
LAB_00020aec:
      uVar9 = *(uint *)(iVar12 + 0x13c);
      if (*(int *)(iVar12 + 0x10c) == 0) {
LAB_00020b28:
        local_8c = (uVar9 & 0x1ffffff) >> 0x15;
        local_90 = (uVar9 >> 0x19) + 0x7bc;
        local_88 = (uVar9 & 0x1fffff) >> 0x10;
        local_84 = (uVar9 & 0xffff) >> 0xb;
        local_80 = (uVar9 & 0x7ff) >> 5;
      }
      else {
        uVar9 = FUN_0002429c(*(int *)(iVar12 + 0x10c),*puVar8,1,uVar9,auStack_54,0);
        if (((uVar9 & 1) == 0) || (ptVar7 = localtime(atStack_50), ptVar7 == (tm *)0x0)) {
          uVar9 = *(uint *)(iVar12 + 0x13c);
          goto LAB_00020b28;
        }
        local_88 = ptVar7->tm_mday;
        local_90 = ptVar7->tm_year + 0x76c;
        local_8c = ptVar7->tm_mon + 1;
        local_84 = ptVar7->tm_hour;
        local_80 = ptVar7->tm_min;
      }
      uVar15 = *(uint *)(iVar12 + 0x130);
      uVar9 = *(uint *)(iVar12 + 0x134);
      if ((*(ushort *)(iVar12 + 0x150) & 1) != 0) {
        uVar15 = uVar15 - 0xc;
      }
      uVar13 = 0;
      if (uVar9 == 0) {
LAB_00020bb8:
        local_7c = 0x20;
      }
      else {
        if (uVar9 < 0x1e8481) {
          if (uVar9 < uVar15) {
            iVar2 = FUN_0002b2dc((uVar15 - uVar9) * 1000 + (uVar9 >> 1),uVar9);
            iVar2 = -iVar2;
          }
          else {
            iVar2 = FUN_0002b2dc((uVar9 - uVar15) * 1000 + (uVar9 >> 1),uVar9);
          }
        }
        else {
          uVar11 = (undefined4)((ulonglong)uVar9 * 0x10624dd3);
          if (uVar15 <= uVar9) {
            iVar2 = FUN_0002b2dc((uint)((ulonglong)uVar9 * 0x8010624dd3 >> 0x27) - uVar15,
                                 uVar9 / 1000,uVar11);
            uVar13 = (iVar2 + 5U) / 10;
            goto LAB_00020bb8;
          }
          iVar2 = FUN_0002b2dc((uVar9 / 2000 - uVar9) + uVar15,uVar9 / 1000,uVar11);
          iVar2 = -iVar2;
        }
        if (-1 < iVar2) {
          uVar13 = (iVar2 + 5U) / 10;
          goto LAB_00020bb8;
        }
        local_7c = 0x2d;
        uVar13 = (5U - iVar2) / 10;
      }
      uVar9 = FUN_00015a5c(*(undefined2 *)(iVar12 + 0x152));
      strcpy(acStack_68,"Stored" + uVar9 * 8);
      if (*(ushort *)(iVar12 + 0x152) - 8 < 2) {
        local_63 = (&DAT_00030a68)[(*(ushort *)(iVar12 + 0x150) & 7) >> 1];
        if (uVar13 != 100) goto LAB_00020c10;
LAB_00020e40:
        sprintf(acStack_60,DAT_00021148);
      }
      else {
        if (0x10 < uVar9) {
          sprintf(&cStack_64,"%03u",(uint)*(ushort *)(iVar12 + 0x152));
        }
        if (uVar13 == 100) goto LAB_00020e40;
LAB_00020c10:
        sprintf(acStack_60,DAT_00021150,local_7c,uVar13);
      }
      iVar2 = DAT_00021134;
      pcVar14 = *(code **)(DAT_00021134 + 0x30c);
      if (iVar4 < 2) {
        uVar11 = FUN_0001b92c(*(undefined4 *)(iVar12 + 0x134),&DAT_00030c8c,&DAT_00033278);
        if ((*(byte *)(*(int *)(DAT_00021158 + 0xcc) + 0x18) & 0x10) == 0) {
          uVar3 = 0x20;
        }
        else {
          uVar3 = 0x5e;
        }
        iVar5 = sprintf(DAT_00021138,DAT_0002115c,uVar11,local_8c,0x2d,local_88,0x2d,local_90,
                        local_84,local_80,uVar3);
      }
      else {
        uVar11 = FUN_0001b92c(*(undefined4 *)(iVar12 + 0x134),&DAT_0002c96c,&DAT_00033278);
        uVar3 = FUN_0001b92c(uVar15,&DAT_0002c96c,&DAT_00033278);
        if ((*(byte *)(*(int *)(iVar2 + -0x10f34) + 0x18) & 0x10) == 0) {
          uVar17 = 0x20;
        }
        else {
          uVar17 = 0x5e;
        }
        iVar5 = sprintf(DAT_00021138,DAT_00021154,uVar11,acStack_68,uVar3,acStack_60,local_8c,0x2d,
                        local_88,0x2d,local_90,local_84,local_80,*(undefined4 *)(iVar12 + 0x140),
                        uVar17);
      }
      (*pcVar14)(iVar2 + -0x91000,DAT_00021138,iVar5,0);
      pcVar10 = (char *)FUN_000190f4(DAT_00021144,DAT_00021138,0x8000);
      sVar6 = strlen(pcVar10);
      (**(code **)(iVar2 + 0x30c))(&DAT_000441a0,pcVar10,sVar6,0);
      (**(code **)(iVar2 + 0x30c))(&DAT_000441a0,"\n",1,0);
      if (DAT_000441e0 == 0) {
        uVar11 = 5;
      }
      else {
        uVar11 = 0;
      }
      iVar2 = FUN_0001b094(*(undefined2 *)(iVar12 + 0x158),uVar11);
      if ((iVar2 != 0) && (local_a4 = iVar2, 1 < iVar2)) {
        return iVar2;
      }
      local_98 = local_98 + uVar15;
      local_94 = local_94 + 1;
      local_9c = local_9c + *(int *)(iVar12 + 0x134);
    }
    iVar16 = iVar16 + 1;
  } while( true );
}



/* ===== FUN_00021168 @ 00021168 size=1028 ===== */

int FUN_00021168(int *param_1,int *param_2)

{
  char cVar1;
  short sVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  void *__ptr;
  size_t sVar7;
  uint uVar8;
  char *pcVar9;
  undefined4 uVar10;
  code *pcVar11;
  int iVar12;
  undefined2 *puVar13;
  int iVar14;
  undefined1 auStack_54 [4];
  int local_50;
  undefined1 auStack_48 [36];
  
  pcVar3 = DAT_00021570;
  iVar5 = DAT_0002156c;
  puVar13 = (undefined2 *)((int)DWORD_ARRAY_00010130 + DAT_0002156c + 0x26);
  iVar12 = 1;
  *param_1 = 0;
  iVar14 = 0;
  *param_2 = 0;
  *(undefined1 **)(iVar5 + 0xcc) = auStack_48;
  do {
    iVar4 = FUN_00019870(DAT_00021570,4);
    pcVar11 = DAT_000d54ac;
    iVar6 = DAT_00021574;
    if (iVar4 == 0) {
      return 0x33;
    }
    if ((((*pcVar3 != DAT_00044160) || (*DAT_0002157c != DAT_00044161)) ||
        (DAT_0002157c[1] != DAT_00044162)) || (DAT_0002157c[2] != DAT_00044163)) {
      if ((iVar12 - 1U & 0xffff) != DAT_000d4308) {
        iVar5 = sprintf(DAT_00021578,
                        "error:  expected central file header signature not found (file #%lu).\n",
                        iVar12);
        (*pcVar11)(&DAT_000441a0,DAT_00021578,iVar5,0x401);
        pcVar11 = DAT_000d54ac;
        iVar5 = sprintf(DAT_00021578,
                        "  (please check that you have transferred or created the zipfile in the\n  appropriate BINARY mode and that you have compiled UnZip properly)\n"
                       );
        (*pcVar11)(&DAT_000441a0,DAT_00021578,iVar5,0x401);
        return 3;
      }
      if (((DAT_0004425c == DAT_00044158) && (DAT_0004425d == DAT_00044159)) &&
         ((DAT_0004425e == DAT_0004415a && (DAT_0004425f == DAT_0004415b)))) {
        if (*param_2 != 0) {
          return iVar14;
        }
      }
      else {
        pcVar11 = *(code **)(DAT_00021574 + 0x30c);
        iVar5 = sprintf(DAT_00021578,
                        "\nnote:  didn\'t find end-of-central-dir signature at end of central dir.\n"
                       );
        (*pcVar11)(iVar6 + -0x91000,DAT_00021578,iVar5,0x401);
        if (*param_2 != 0) {
          return 1;
        }
      }
      return 0xb;
    }
    iVar6 = FUN_00023978();
    if (iVar6 != 0) {
      return iVar6;
    }
    iVar6 = FUN_0001b094(*DAT_00021580,2);
    if ((iVar6 != 0) && (iVar14 = iVar6, 1 < iVar6)) {
      return iVar6;
    }
    __ptr = *(void **)((int)&Elf32_Phdr_ARRAY_00010034[6].p_flags + iVar5);
    if (__ptr != (void *)0x0) {
      free(__ptr);
      *(undefined4 *)((int)&Elf32_Phdr_ARRAY_00010034[6].p_flags + iVar5) = 0;
    }
    iVar6 = FUN_0001b094(*puVar13,3);
    pcVar9 = DAT_00021584;
    if ((iVar6 != 0) && (iVar14 = iVar6, 1 < iVar6)) {
      return iVar6;
    }
    if (DAT_00044230 == 0) {
      if (DAT_00044228 == 0) {
LAB_00021420:
        pcVar9 = DAT_00021584;
        if (DAT_0004422c != 0) {
          uVar8 = 0;
          do {
            iVar6 = uVar8 * 4;
            uVar8 = uVar8 + 1;
            iVar6 = FUN_00021b04(pcVar9,*(undefined4 *)(DAT_00044258 + iVar6),DAT_000441b8);
            if (iVar6 != 0) goto LAB_00021464;
          } while (uVar8 < DAT_0004422c);
        }
        goto LAB_00021304;
      }
      uVar8 = 0;
      do {
        iVar6 = uVar8 * 4;
        uVar8 = uVar8 + 1;
        iVar6 = FUN_00021b04(pcVar9,*(undefined4 *)(DAT_00044254 + iVar6),DAT_000441b8);
        if (iVar6 != 0) goto LAB_00021420;
      } while (uVar8 < DAT_00044228);
LAB_00021464:
      if (DAT_00044230 != 0) goto LAB_00021304;
      sVar2 = *(short *)((int)DWORD_ARRAY_00010130 + iVar5 + 0x28);
    }
    else {
LAB_00021304:
      sVar7 = strlen(DAT_00021584);
      if (sVar7 == 0) {
LAB_00021314:
        iVar6 = *(int *)((int)&Elf32_Phdr_ARRAY_00010034[6].p_flags + iVar5);
        uVar10 = *(undefined4 *)((int)DWORD_ARRAY_00010130 + iVar5 + 0xc);
        if (iVar6 == 0) {
LAB_000214f0:
          iVar6 = FUN_0001ada4(uVar10);
          if (*param_1 < iVar6) {
            *param_1 = iVar6;
          }
        }
        else {
LAB_00021324:
          uVar8 = FUN_0002429c(iVar6,*puVar13,1,uVar10,auStack_54,0);
          if ((uVar8 & 1) == 0) {
            uVar10 = *(undefined4 *)((int)DWORD_ARRAY_00010130 + iVar5 + 0xc);
            goto LAB_000214f0;
          }
          if (*param_1 < local_50) {
            *param_1 = local_50;
          }
        }
        *param_2 = *param_2 + 1;
      }
      else {
        pcVar9 = (char *)FUN_0001bb2c(DAT_00021584);
        cVar1 = *pcVar9;
        if (cVar1 != '/') {
          if (*(char *)(*(int *)(DAT_0002156c + 0xcc) + 0x13) != '\0') goto LAB_00021314;
          iVar6 = FUN_0001bbb8(DAT_00021584,0x2f);
          if (iVar6 == 0 && cVar1 == '\\') goto LAB_00021370;
          iVar6 = *(int *)((int)&Elf32_Phdr_ARRAY_00010034[6].p_flags + iVar5);
          uVar10 = *(undefined4 *)((int)DWORD_ARRAY_00010130 + iVar5 + 0xc);
          if (iVar6 != 0) goto LAB_00021324;
          goto LAB_000214f0;
        }
      }
LAB_00021370:
      sVar2 = *(short *)((int)DWORD_ARRAY_00010130 + iVar5 + 0x28);
    }
    if (((sVar2 != 0) && (iVar6 = FUN_0001b094(sVar2,0), iVar6 != 0)) && (iVar14 = iVar6, 1 < iVar6)
       ) {
      return iVar6;
    }
    iVar12 = iVar12 + 1;
  } while( true );
}



/* ===== FUN_00021588 @ 00021588 size=160 ===== */

int FUN_00021588(uint param_1,uint param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (2000000 < param_1) {
    if (param_2 <= param_1) {
      iVar1 = FUN_0002b2dc((param_1 - param_2) + param_1 / 2000,param_1 / 1000);
      return iVar1;
    }
    iVar1 = FUN_0002b2dc((param_2 - param_1) + param_1 / 2000,param_1 / 1000);
    return -iVar1;
  }
  if (param_2 <= param_1) {
    iVar1 = FUN_0002b2dc((param_1 - param_2) * 1000 + (param_1 >> 1),param_1);
    return iVar1;
  }
  iVar1 = FUN_0002b2dc((param_2 - param_1) * 1000 + (param_1 >> 1),param_1);
  return -iVar1;
}



/* ===== FUN_00021628 @ 00021628 size=100 ===== */

void FUN_00021628(void)

{
  char *__s;
  size_t sVar1;
  
  __s = (char *)FUN_000190f4(DAT_00021690,DAT_0002168c,0x8000);
  sVar1 = strlen(__s);
  (*DAT_000d54ac)(&DAT_000441a0,__s,sVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00021688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000d54ac)(&DAT_000441a0,"\n",1,0);
  return;
}



/* ===== FUN_00021694 @ 00021694 size=1136 ===== */

uint FUN_00021694(byte *param_1,byte *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  size_t sVar4;
  uint uVar5;
  byte bVar6;
  ushort *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  bool bVar13;
  
LAB_0002172c:
  uVar8 = (uint)*param_1;
  iVar2 = FUN_0001bb94(param_1);
  iVar1 = __ctype_b;
  param_1 = param_1 + iVar2;
  if (uVar8 == 0) {
    return (uint)(*param_2 == 0);
  }
  if (uVar8 == 0x3f) {
    if (*param_2 == 0) {
      return 0;
    }
  }
  else {
    if (uVar8 == 0x2a) {
      bVar6 = *param_1;
      pbVar11 = param_1;
      if (bVar6 == 0) {
        return 1;
      }
      do {
        if (bVar6 == 0x5c) {
          if (pbVar11[1] != 0) {
            pbVar11 = pbVar11 + 1;
          }
        }
        else if ((bVar6 == 0x2a || bVar6 == 0x3f) || (bVar6 == 0x5b)) {
          bVar6 = *param_2;
          while( true ) {
            if (bVar6 == 0) {
              return 2;
            }
            uVar8 = FUN_00021694(param_1,param_2,param_3);
            if (uVar8 != 0) break;
            iVar1 = FUN_0001bb94(param_2);
            param_2 = param_2 + iVar1;
            bVar6 = *param_2;
          }
          return uVar8;
        }
        iVar1 = FUN_0001bb94(pbVar11);
        bVar6 = pbVar11[iVar1];
        pbVar11 = pbVar11 + iVar1;
        if (bVar6 == 0) {
          sVar3 = strlen((char *)param_2);
          sVar4 = strlen((char *)param_1);
          if (-1 < (int)(sVar3 - sVar4)) {
            pbVar11 = param_2 + (sVar3 - sVar4);
            iVar1 = __ctype_b;
            while (__ctype_b = iVar1, param_2 < pbVar11) {
              iVar1 = FUN_0001bb94(param_2);
              param_2 = param_2 + iVar1;
              iVar1 = __ctype_b;
            }
            if (pbVar11 == param_2) {
              if (param_3 == 0) {
                iVar1 = strcmp((char *)param_1,(char *)pbVar11);
                return (uint)(iVar1 == 0);
              }
              param_1 = param_1 + -1;
              pbVar11 = pbVar11 + -1;
              while( true ) {
                param_1 = param_1 + 1;
                uVar12 = (uint)*param_1;
                uVar8 = uVar12;
                if ((*(ushort *)(iVar1 + uVar12 * 2) & 1) != 0) {
                  uVar8 = tolower(uVar12);
                  uVar8 = uVar8 & 0xff;
                }
                pbVar11 = pbVar11 + 1;
                uVar10 = (uint)*pbVar11;
                uVar9 = uVar10;
                if ((*(ushort *)(iVar1 + uVar10 * 2) & 1) != 0) {
                  uVar9 = tolower(uVar10);
                  uVar9 = uVar9 & 0xff;
                }
                if (uVar8 != uVar9) break;
                if (uVar10 == 0 || uVar12 == 0) {
                  return 1;
                }
              }
            }
          }
          return 0;
        }
      } while( true );
    }
    if (uVar8 == 0x5b) {
      if (*param_2 == 0) {
        return 0;
      }
      uVar8 = (uint)(*param_1 == 0x5e || *param_1 == 0x21);
      bVar6 = param_1[uVar8];
      param_1 = param_1 + uVar8;
      if (bVar6 == 0) {
        return 0;
      }
      bVar13 = false;
      pbVar11 = param_1;
      do {
        if (bVar13) {
          bVar13 = false;
        }
        else if (bVar6 == 0x5c) {
          bVar13 = true;
        }
        else if (bVar6 == 0x5d) goto LAB_000217f0;
        iVar1 = FUN_0001bb94(pbVar11);
        pbVar11 = pbVar11 + iVar1;
        bVar6 = *pbVar11;
        if (bVar6 == 0) {
          return 0;
        }
      } while( true );
    }
    if (uVar8 == 0x5c) {
      uVar8 = (uint)*param_1;
      param_1 = param_1 + 1;
      if (uVar8 == 0) {
        return 0;
      }
    }
    uVar12 = (uint)*param_2;
    if (param_3 != 0) {
      if ((*(ushort *)(__ctype_b + uVar8 * 2) & 1) != 0) {
        uVar8 = tolower(uVar8);
        uVar8 = uVar8 & 0xff;
      }
      if ((*(ushort *)(iVar1 + uVar12 * 2) & 1) != 0) {
        uVar12 = tolower(uVar12);
        uVar12 = uVar12 & 0xff;
      }
    }
    if (uVar12 != uVar8) {
      return 0;
    }
  }
  goto LAB_00021720;
LAB_000217f0:
  uVar12 = (uint)(*param_1 == 0x2d);
  uVar9 = 0;
  for (; param_1 < pbVar11; param_1 = param_1 + iVar1) {
    if (uVar12 == 0) {
      if (*param_1 == 0x5c) {
        uVar12 = 1;
      }
      else {
        if (*param_1 != 0x2d) goto LAB_00021848;
        uVar9 = (uint)param_1[-1];
        uVar12 = 0;
      }
    }
    else {
LAB_00021848:
      uVar12 = (uint)*param_2;
      if ((param_3 != 0) && ((*(ushort *)(__ctype_b + uVar12 * 2) & 1) != 0)) {
        uVar12 = tolower(uVar12);
        uVar12 = uVar12 & 0xff;
      }
      if ((param_1[1] != 0x2d) &&
         ((uVar5 = (uint)*param_1, uVar10 = uVar5, uVar9 == 0 || (uVar10 = uVar9, uVar9 <= uVar5))))
      {
        if (param_3 == 0) {
          if (uVar12 != uVar10) {
            uVar10 = uVar10 + 1;
            if (uVar5 < uVar10) {
              uVar9 = 0;
              uVar12 = 0;
            }
            else {
              do {
                bVar13 = uVar12 == uVar10;
                uVar10 = uVar10 + 1;
                if (bVar13) goto LAB_000218d4;
              } while (uVar10 <= uVar5);
              uVar9 = 0;
              uVar12 = uVar9;
            }
            goto LAB_00021814;
          }
LAB_000218d4:
          if (uVar8 != 0) {
            return 0;
          }
          param_1 = pbVar11 + 1;
          param_2 = param_2 + 1;
          goto LAB_0002172c;
        }
        puVar7 = (ushort *)(__ctype_b + uVar10 * 2);
        do {
          uVar9 = uVar10;
          if ((*puVar7 & 1) != 0) {
            uVar9 = tolower(uVar10);
            uVar9 = uVar9 & 0xff;
          }
          uVar10 = uVar10 + 1;
          if (uVar12 == uVar9) goto LAB_000218d4;
          puVar7 = puVar7 + 1;
        } while (uVar10 <= uVar5);
      }
      uVar9 = 0;
      uVar12 = 0;
    }
LAB_00021814:
    iVar1 = FUN_0001bb94(param_1);
  }
  if (uVar8 == 0) {
    return 0;
  }
  iVar1 = FUN_0001bb94(pbVar11);
  param_1 = pbVar11 + iVar1;
LAB_00021720:
  iVar1 = FUN_0001bb94(param_2);
  param_2 = param_2 + iVar1;
  goto LAB_0002172c;
}



/* ===== FUN_00021b04 @ 00021b04 size=36 ===== */

bool FUN_00021b04(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00021694(param_2,param_1);
  return iVar1 == 1;
}



/* ===== FUN_00021b28 @ 00021b28 size=112 ===== */

undefined4 FUN_00021b28(char *param_1)

{
  int iVar1;
  char cVar2;
  
  cVar2 = *param_1;
  if (cVar2 == '\0') {
    return 0;
  }
  do {
    if (cVar2 == '\\') {
      if (param_1[1] != '\0') {
        param_1 = param_1 + 1;
      }
    }
    else if ((cVar2 == '*' || cVar2 == '?') || (cVar2 == '[')) {
      return 1;
    }
    iVar1 = FUN_0001bb94(param_1);
    param_1 = param_1 + iVar1;
    cVar2 = *param_1;
    if (cVar2 == '\0') {
      return 0;
    }
  } while( true );
}



/* ===== FUN_00021b98 @ 00021b98 size=484 ===== */

int FUN_00021b98(byte *param_1,int param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  
  if (param_1 == (byte *)0x0) {
    return -1;
  }
  iVar2 = 0;
  do {
    uVar3 = (uint)*param_1;
    if (uVar3 < 0x80) {
      param_1 = param_1 + 1;
    }
    else {
      if (uVar3 < 0xc0) {
        return -1;
      }
      if (uVar3 < 0xe0) {
        if (0x3f < (param_1[1] ^ 0x80)) {
          return -1;
        }
        iVar6 = 2;
        uVar3 = param_1[1] & 0x3f | (uVar3 & 0x1f) << 6;
      }
      else {
        if (uVar3 < 0xf0) {
          uVar4 = (uint)param_1[1];
          if (0x3f < (uVar4 ^ 0x80)) {
            return -1;
          }
          uVar5 = (uint)param_1[2];
          if (0x3f < (uVar5 ^ 0x80)) {
            return -1;
          }
          iVar6 = 3;
        }
        else {
          if (uVar3 < 0xf8) {
            uVar4 = (uint)param_1[1];
            if (0x3f < (uVar4 ^ 0x80)) {
              return -1;
            }
            iVar6 = 4;
          }
          else if (uVar3 < 0xfc) {
            uVar4 = (uint)param_1[1];
            if (0x3f < (uVar4 ^ 0x80)) {
              return -1;
            }
            iVar6 = 5;
          }
          else {
            if (0xfd < uVar3) {
              return -1;
            }
            uVar4 = (uint)param_1[1];
            if (0x3f < (uVar4 ^ 0x80)) {
              return -1;
            }
            iVar6 = 6;
          }
          uVar5 = (uint)param_1[2];
          if (0x3f < (uVar5 ^ 0x80)) {
            return -1;
          }
          if (0x3f < (param_1[3] ^ 0x80)) {
            return -1;
          }
          if (iVar6 != 4) {
            if (0x3f < (param_1[4] ^ 0x80)) {
              return -1;
            }
            if (iVar6 == 6) {
              if (0x3f < (param_1[5] ^ 0x80)) {
                return -1;
              }
            }
            else {
              iVar6 = 5;
            }
          }
        }
        uVar3 = uVar5 & 0x3f | (uVar4 & 0x3f | (uVar3 & 0x7f >> iVar6) << 6) << 6;
        if ((iVar6 != 3) && (uVar3 = param_1[3] & 0x3f | uVar3 << 6, iVar6 != 4)) {
          uVar3 = param_1[4] & 0x3f | uVar3 << 6;
          if (iVar6 == 6) {
            pbVar1 = param_1 + 5;
            param_1 = param_1 + 6;
            uVar3 = *pbVar1 & 0x3f | uVar3 << 6;
            if (uVar3 == 0xffffffff) {
              return -1;
            }
            goto LAB_00021bec;
          }
          iVar6 = 5;
        }
      }
      param_1 = param_1 + iVar6;
    }
LAB_00021bec:
    bVar7 = param_2 != 0;
    iVar6 = 0;
    if (bVar7) {
      iVar6 = param_3 - iVar2;
    }
    if ((bVar7 && param_3 != iVar2) && iVar6 < 0 == (bVar7 && SBORROW4(param_3,iVar2))) {
      *(uint *)(param_2 + iVar2 * 4) = uVar3;
    }
    if (uVar3 == 0) {
      return iVar2;
    }
    iVar2 = iVar2 + 1;
    if (param_1 == (byte *)0x0) {
      return -1;
    }
  } while( true );
}



/* ===== FUN_00021d7c @ 00021d7c size=5140 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

int FUN_00021d7c(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  __off_t __offset;
  uint uVar8;
  ssize_t sVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  char *__offset_00;
  uint uVar13;
  char *pcVar14;
  int iVar15;
  code *pcVar16;
  uint __nbytes;
  char *pcVar17;
  bool bVar18;
  int local_94;
  int local_90;
  char local_8c;
  char local_8b;
  char local_8a;
  char local_89;
  undefined1 auStack_88 [4];
  undefined1 auStack_84 [8];
  undefined1 auStack_7c [4];
  undefined1 auStack_78 [4];
  undefined1 auStack_74 [2];
  undefined1 auStack_72 [2];
  undefined1 auStack_70 [2];
  undefined1 auStack_6e [2];
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [4];
  undefined1 auStack_64 [4];
  undefined4 local_60;
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [12];
  
  local_90 = 0;
  iVar7 = stat(DAT_000d4298,(stat *)&DAT_000d4320);
  uVar13 = DAT_000d4330;
  iVar10 = DAT_00022d58;
  if (iVar7 != 0) {
    if (param_1 == 0) {
      return 9;
    }
    if (2 < DAT_000441e0) {
      return 9;
    }
    param_1 = 0;
LAB_00021f9c:
    pcVar16 = *(code **)(DAT_00022d58 + 0x30c);
    if (DAT_000d439c == 0) {
      pcVar14 = "zipinfo";
      if (DAT_000441a8 == 0) {
        pcVar14 = "unzip";
      }
      iVar7 = sprintf(DAT_00022d60,"%s:  cannot find or open %s, %s.zip or %s.\n",pcVar14,
                      DAT_000d4294,DAT_000d4294,DAT_000d4298);
    }
    else {
      pcVar17 = "zipinfo";
      pcVar14 = "  ";
      if (DAT_000441a8 == 0) {
        pcVar17 = "unzip";
        pcVar14 = "";
      }
      iVar7 = sprintf(DAT_00022d60,
                      "%s:  cannot find zipfile directory in one of %s or\n        %s%s.zip, and cannot find %s, period.\n"
                      ,pcVar17,DAT_000d4294,pcVar14,DAT_000d4294,DAT_000d4298);
    }
    (*pcVar16)(iVar10 + -0x91000,DAT_00022d60,iVar7,1);
    if (param_1 == 0) {
      return 9;
    }
    return 0x4c;
  }
  if ((DAT_000d4330 & 0xf000) == 0x4000) {
    if (param_1 == 0) {
      return 0x4c;
    }
    if (2 < DAT_000441e0) {
      return 0x4c;
    }
    goto LAB_00021f9c;
  }
  DAT_000d42a0 = DAT_000d434c;
  iVar7 = FUN_000193f4();
  iVar10 = DAT_000d429c;
  if (iVar7 != 0) {
    return 9;
  }
  __offset = lseek(DAT_000d429c,0,2);
  if (((__offset < 0) || (uVar8 = lseek(iVar10,__offset,0), uVar8 == 0xffffffff)) ||
     (sVar9 = read(iVar10,&local_60,1), iVar10 = DAT_00022d58, sVar9 != 0)) {
    uVar3 = s_Trying_to_read_large_file__>_2_G_0003149c._12_4_;
    uVar2 = s_Trying_to_read_large_file__>_2_G_0003149c._8_4_;
    uVar11 = s_Trying_to_read_large_file__>_2_G_0003149c._4_4_;
    iVar10 = DAT_00022d58;
    DAT_000d42a0 = 0xffffffff;
    pcVar16 = *(code **)(DAT_00022d58 + 0x30c);
    *(undefined4 *)(DAT_00022d58 + -0x10f30) = s_Trying_to_read_large_file__>_2_G_0003149c._0_4_;
    *(undefined4 *)(iVar10 + -0x10f2c) = uVar11;
    *(undefined4 *)(iVar10 + -0x10f28) = uVar2;
    *(undefined4 *)(iVar10 + -0x10f24) = uVar3;
    uVar3 = s_Trying_to_read_large_file__>_2_G_0003149c._28_4_;
    uVar2 = s_Trying_to_read_large_file__>_2_G_0003149c._24_4_;
    uVar11 = s_Trying_to_read_large_file__>_2_G_0003149c._20_4_;
    *(undefined4 *)(iVar10 + -0x10f20) = s_Trying_to_read_large_file__>_2_G_0003149c._16_4_;
    *(undefined4 *)(iVar10 + -0x10f1c) = uVar11;
    *(undefined4 *)(iVar10 + -0x10f18) = uVar2;
    *(undefined4 *)(iVar10 + -0x10f14) = uVar3;
    uVar3 = s_Trying_to_read_large_file__>_2_G_0003149c._44_4_;
    uVar2 = s_Trying_to_read_large_file__>_2_G_0003149c._40_4_;
    uVar11 = s_Trying_to_read_large_file__>_2_G_0003149c._36_4_;
    *(undefined4 *)(iVar10 + -0x10f10) = s_Trying_to_read_large_file__>_2_G_0003149c._32_4_;
    *(undefined4 *)(iVar10 + -0x10f0c) = uVar11;
    *(undefined4 *)(iVar10 + -0x10f08) = uVar2;
    *(undefined4 *)(iVar10 + -0x10f04) = uVar3;
    uVar3 = s_Trying_to_read_large_file__>_2_G_0003149c._60_4_;
    uVar2 = s_Trying_to_read_large_file__>_2_G_0003149c._56_4_;
    uVar11 = s_Trying_to_read_large_file__>_2_G_0003149c._52_4_;
    *(undefined4 *)(iVar10 + -0x10f00) = s_Trying_to_read_large_file__>_2_G_0003149c._48_4_;
    *(undefined4 *)(iVar10 + -0x10efc) = uVar11;
    *(undefined4 *)(iVar10 + -0x10ef8) = uVar2;
    *(undefined4 *)(iVar10 + -0x10ef4) = uVar3;
    (*pcVar16)(iVar10 + -0x91000,iVar10 + -0x10f30,0x3f,0x401);
    close(DAT_000d429c);
    return 0x53;
  }
  DAT_000d427c = DAT_000d4278;
  DAT_000d42a0 = uVar8;
  DAT_000d42a4 = sVar9;
  if (DAT_000441a8 == 0) {
    if (DAT_000441e0 == 0 && DAT_000441e8 == 0) {
LAB_00021e58:
      pcVar16 = *(code **)(DAT_00022d58 + 0x30c);
      iVar7 = sprintf(DAT_00022d60,DAT_00022d1c,DAT_000d4298);
      (*pcVar16)(iVar10 + -0x91000,DAT_00022d60,iVar7,0);
      uVar8 = DAT_000d42a0;
      if (DAT_000441a8 != 0) goto LAB_00021e9c;
    }
    uVar8 = DAT_000d42a0;
    if (65999 < (int)DAT_000d42a0) {
      uVar8 = 66000;
    }
  }
  else if (DAT_000441c4 != 0) goto LAB_00021e58;
LAB_00021e9c:
  if ((int)DAT_000d42a0 < 0x2001) {
    lseek(DAT_000d429c,0,0);
    DAT_000d4280 = read(DAT_000d429c,DAT_000d4278,DAT_000d42a0);
    if (DAT_000d4280 == DAT_000d42a0) {
      pcVar14 = DAT_000d4278 + (DAT_000d42a0 - 0x16);
      do {
        DAT_000d427c = pcVar14;
        if (DAT_000d427c < DAT_000d4278) goto LAB_000222d4;
        pcVar14 = DAT_000d427c + -1;
      } while (((*DAT_000d427c != 'P') || (DAT_00044158 != 'P')) ||
              ((DAT_000d427c[1] != DAT_00044159 ||
               ((DAT_000d427c[2] != DAT_0004415a || (DAT_000d427c[3] != DAT_0004415b))))));
      DAT_000d4280 = DAT_000d42a0 - ((int)DAT_000d427c - (int)DAT_000d4278);
LAB_0002215c:
      DAT_00044244 = DAT_000d427c + (DAT_000d42a4 - (int)DAT_000d4278);
      iVar10 = FUN_00019870(auStack_78,0x16);
      if (iVar10 == 0) {
        iVar10 = 0x33;
        goto LAB_00022348;
      }
      DAT_000d430c = FUN_0001b8b4(auStack_74);
      DAT_000d430e = FUN_0001b8b4(auStack_72);
      DAT_000d4304 = FUN_0001b8b4(auStack_70);
      DAT_000d4308 = FUN_0001b8b4(auStack_6e);
      DAT_000d42fc = FUN_0001b8c4(auStack_6c);
      DAT_000d4300 = FUN_0001b8c4(auStack_68);
      iVar7 = FUN_0001b8b4(auStack_64);
      uVar3 = s_There_is_no_zipfile_comment__0003147c._12_4_;
      uVar2 = s_There_is_no_zipfile_comment__0003147c._8_4_;
      uVar11 = s_There_is_no_zipfile_comment__0003147c._4_4_;
      pcVar14 = DAT_00022d60;
      iVar10 = DAT_00022d58;
      DAT_000d4318 = (undefined2)iVar7;
      local_94 = 0;
      if (DAT_000441a8 == 0) {
        if ((iVar7 != 0) &&
           ((0 < DAT_00044204 || ((DAT_000441e8 == 0 && DAT_000441e0 == 0) && DAT_00044204 == 0))))
        {
          local_94 = FUN_0001b094(iVar7,1);
          iVar10 = DAT_00022d58;
          uVar11 = s_caution__zipfile_comment_truncat_00031454._4_4_;
          uVar2 = s_caution__zipfile_comment_truncat_00031454._8_4_;
          uVar3 = s_caution__zipfile_comment_truncat_00031454._12_4_;
          iVar7 = local_94;
joined_r0x000223e4:
          DAT_00022d58 = iVar10;
          s_caution__zipfile_comment_truncat_00031454._4_4_ = uVar11;
          s_caution__zipfile_comment_truncat_00031454._8_4_ = uVar2;
          s_caution__zipfile_comment_truncat_00031454._12_4_ = uVar3;
          if (iVar7 != 0) {
            local_94 = 1;
            *(undefined4 *)(iVar10 + -0x10f30) = s_caution__zipfile_comment_truncat_00031454._0_4_;
            *(undefined4 *)(iVar10 + -0x10f2c) = uVar11;
            *(undefined4 *)(iVar10 + -0x10f28) = uVar2;
            *(undefined4 *)(iVar10 + -0x10f24) = uVar3;
            uVar3 = s_caution__zipfile_comment_truncat_00031454._28_4_;
            uVar2 = s_caution__zipfile_comment_truncat_00031454._24_4_;
            uVar11 = s_caution__zipfile_comment_truncat_00031454._20_4_;
            *(undefined4 *)(iVar10 + -0x10f20) = s_caution__zipfile_comment_truncat_00031454._16_4_;
            *(undefined4 *)(iVar10 + -0x10f1c) = uVar11;
            *(undefined4 *)(iVar10 + -0x10f18) = uVar2;
            *(undefined4 *)(iVar10 + -0x10f14) = uVar3;
            uVar11 = ram0x00031478;
            *(undefined4 *)(iVar10 + -0x10f10) = s_caution__zipfile_comment_truncat_00031454._32_4_;
            *(short *)(iVar10 + -0x10f0c) = (short)uVar11;
            (**(code **)(iVar10 + 0x30c))(iVar10 + -0x91000,DAT_00022d60,0x25,0x401);
          }
        }
      }
      else if (DAT_000441d0 < 10) {
        if ((iVar7 != 0) && (0 < DAT_00044204)) {
          iVar7 = FUN_0001b094(iVar7,1);
          iVar10 = DAT_00022d58;
          uVar11 = s_caution__zipfile_comment_truncat_00031454._4_4_;
          uVar2 = s_caution__zipfile_comment_truncat_00031454._8_4_;
          uVar3 = s_caution__zipfile_comment_truncat_00031454._12_4_;
          goto joined_r0x000223e4;
        }
      }
      else {
        pcVar16 = *(code **)(DAT_00022d58 + 0x30c);
        if (iVar7 == 0) {
          *(undefined4 *)DAT_00022d60 = s_There_is_no_zipfile_comment__0003147c._0_4_;
          *(undefined4 *)(pcVar14 + 4) = uVar11;
          *(undefined4 *)(pcVar14 + 8) = uVar2;
          *(undefined4 *)(pcVar14 + 0xc) = uVar3;
          uVar3 = ram0x00031498;
          uVar2 = s_There_is_no_zipfile_comment__0003147c._24_4_;
          uVar11 = s_There_is_no_zipfile_comment__0003147c._20_4_;
          *(undefined4 *)(pcVar14 + 0x10) = s_There_is_no_zipfile_comment__0003147c._16_4_;
          *(undefined4 *)(pcVar14 + 0x14) = uVar11;
          *(undefined4 *)(pcVar14 + 0x18) = uVar2;
          *(short *)(pcVar14 + 0x1c) = (short)uVar3;
          (*pcVar16)(iVar10 + -0x91000,pcVar14,0x1d,0);
        }
        else {
          iVar7 = sprintf(DAT_00022d60,DAT_00022d44,iVar7);
          pcVar14 = DAT_00022d60;
          (*pcVar16)(iVar10 + -0x91000,DAT_00022d60,iVar7,0);
          pcVar16 = *(code **)(iVar10 + 0x30c);
          memcpy(pcVar14,
                 "======================== zipfile comment begins ==========================\n",0x4c
                );
          (*pcVar16)(iVar10 + -0x91000,pcVar14,0x4b,0);
          iVar7 = FUN_0001b094(DAT_000d4318,1);
          if (iVar7 == 0) {
            pcVar16 = *(code **)(iVar10 + 0x30c);
            memcpy(pcVar14,
                   "========================= zipfile comment ends ===========================\n",
                   0x4c);
            (*pcVar16)(iVar10 + -0x91000,pcVar14,0x4b,0);
            local_94 = 0;
          }
          else {
            pcVar16 = *(code **)(iVar10 + 0x30c);
            memcpy(pcVar14,
                   "========================= zipfile comment ends ===========================\n",
                   0x4c);
            (*pcVar16)(iVar10 + -0x91000,pcVar14,0x4b,0);
            uVar3 = s_The_zipfile_comment_is_truncated_00031574._12_4_;
            uVar2 = s_The_zipfile_comment_is_truncated_00031574._8_4_;
            uVar11 = s_The_zipfile_comment_is_truncated_00031574._4_4_;
            pcVar16 = *(code **)(iVar10 + 0x30c);
            local_94 = 1;
            *(undefined4 *)pcVar14 = s_The_zipfile_comment_is_truncated_00031574._0_4_;
            *(undefined4 *)(pcVar14 + 4) = uVar11;
            *(undefined4 *)(pcVar14 + 8) = uVar2;
            *(undefined4 *)(pcVar14 + 0xc) = uVar3;
            uVar3 = s_The_zipfile_comment_is_truncated_00031574._28_4_;
            uVar2 = s_The_zipfile_comment_is_truncated_00031574._24_4_;
            uVar11 = s_The_zipfile_comment_is_truncated_00031574._20_4_;
            *(undefined4 *)(pcVar14 + 0x10) = s_The_zipfile_comment_is_truncated_00031574._16_4_;
            *(undefined4 *)(pcVar14 + 0x14) = uVar11;
            *(undefined4 *)(pcVar14 + 0x18) = uVar2;
            *(undefined4 *)(pcVar14 + 0x1c) = uVar3;
            uVar11 = ram0x00031598;
            *(undefined4 *)(pcVar14 + 0x20) = s_The_zipfile_comment_is_truncated_00031574._32_4_;
            *(short *)(pcVar14 + 0x24) = (short)uVar11;
            (*pcVar16)(iVar10 + -0x91000,pcVar14,0x25,0);
          }
        }
      }
      pcVar14 = DAT_00044244;
      pcVar17 = DAT_00044244 + -0x14;
      if (-1 < (int)pcVar17) {
        DAT_000d42a4 = lseek(DAT_000d429c,(__off_t)pcVar17,0);
        DAT_000d4280 = read(DAT_000d429c,&local_8c,0x14);
        if (DAT_000d4280 != 0x14) {
LAB_00022bd4:
          iVar10 = DAT_00022d58;
          pcVar16 = *(code **)(DAT_00022d58 + 0x30c);
          if (DAT_000441e0 != 0 || DAT_000441a8 != 0) {
            iVar7 = sprintf(DAT_00022d60,"[%s]\n",DAT_000d4298);
            (*pcVar16)(iVar10 + -0x91000,DAT_00022d60,iVar7,0x401);
            pcVar16 = *(code **)(iVar10 + 0x30c);
          }
          memcpy(DAT_00022d60,
                 "fatal error: read failure while seeking for End-of-centdir-64 signature.\n  This zipfile is corrupt.\n"
                 ,0x65);
          (*pcVar16)(&DAT_000441a0,DAT_00022d60,100,0x401);
          iVar10 = 2;
          goto LAB_00022348;
        }
        if ((((local_8c == DAT_00044150) && (local_8b == DAT_00044151)) &&
            (local_8a == DAT_00044152)) && (local_89 == DAT_00044153)) {
          uVar5 = FUN_0001b8c4(auStack_88);
          __offset_00 = (char *)FUN_0001b8e8(auStack_84);
          uVar8 = FUN_0001b8c4(auStack_7c);
          if ((DAT_000d430c == 0xffff) || ((uint)DAT_000d430c == (uVar8 & 0xffff) - 1)) {
            if (pcVar17 < __offset_00) goto LAB_00022bd4;
            DAT_000d42a4 = lseek(DAT_000d429c,(__off_t)__offset_00,0);
            DAT_000d4280 = read(DAT_000d429c,&local_60,0x38);
            if (DAT_000d4280 == 0x38) {
              if ((((local_60 & 0xff) == (uint)DAT_00044154) && (local_60._1_1_ == DAT_00044155)) &&
                 ((local_60._2_1_ == DAT_00044156 && (local_60._3_1_ == DAT_00044157)))) {
                DAT_000d4280 = 0x38;
LAB_00022eec:
                uVar6 = FUN_0001b8c4(auStack_50);
                if ((((uVar5 == uVar6) &&
                     (uVar6 = FUN_0001b8c4(auStack_4c),
                     uVar6 == DAT_000d430e || DAT_000d430e == 0xffff)) &&
                    (iVar10 = FUN_0001b8e8(auStack_48),
                    DAT_000d4304 == 0xffff || iVar10 == DAT_000d4304)) &&
                   (((iVar7 = FUN_0001b8e8(auStack_40),
                     DAT_000d4308 == 0xffff || iVar7 == DAT_000d4308 &&
                     (iVar15 = FUN_0001b8e8(auStack_38),
                     iVar15 == DAT_000d42fc || DAT_000d42fc == -1)) &&
                    (iVar12 = FUN_0001b8e8(auStack_30), iVar12 == DAT_000d4300 || DAT_000d4300 == -1
                    )))) {
                  DAT_000d4310 = 1;
                  if ((DAT_000d430c == 0xffff) && (DAT_000d430c = uVar5, uVar5 != 0xffff)) {
                    DAT_000d4314 = 1;
                  }
                  if ((DAT_000d430e == 0xffff) && (DAT_000d430e = uVar6, uVar6 != 0xffff)) {
                    DAT_000d4314 = 1;
                  }
                  if ((DAT_000d4304 == 0xffff) && (DAT_000d4304 = iVar10, iVar10 != 0xffff)) {
                    DAT_000d4314 = 1;
                  }
                  if ((DAT_000d4308 == 0xffff) && (DAT_000d4308 = iVar7, iVar7 != 0xffff)) {
                    DAT_000d4314 = 1;
                  }
                  if ((DAT_000d42fc == -1) && (DAT_000d42fc = iVar15, iVar15 != -1)) {
                    DAT_000d4314 = 1;
                  }
                  DAT_00044244 = __offset_00;
                  if ((DAT_000d4300 == -1) && (DAT_000d4300 = iVar12, iVar12 != -1)) {
                    DAT_000d4314 = 1;
                  }
                }
                goto LAB_0002227c;
              }
              __offset_00 = pcVar14 + -0x4c;
              DAT_000d42a4 = lseek(DAT_000d429c,(__off_t)__offset_00,0);
              DAT_000d4280 = read(DAT_000d429c,&local_60,0x38);
              if (DAT_000d4280 != 0x38) goto LAB_00023074;
              iVar7 = memcmp(&local_60,&DAT_00044154,4);
              iVar10 = DAT_00022d58;
              if (iVar7 == 0) {
                if (DAT_000441e0 != 0 || DAT_000441a8 != 0) {
                  pcVar16 = *(code **)(DAT_00022d58 + 0x30c);
                  iVar7 = sprintf(DAT_00022d60,"[%s]\n",DAT_000d4298);
                  (*pcVar16)(iVar10 + -0x91000,DAT_00022d60,iVar7,0x401);
                }
                pcVar16 = *(code **)(iVar10 + 0x30c);
                memcpy(DAT_00022d60,
                       "error: End-of-centdir-64 signature not where expected (prepended bytes?)\n  (attempting to process anyway)\n"
                       ,0x6b);
                (*pcVar16)(&DAT_000441a0,DAT_00022d60,0x6a,0x401);
                goto LAB_00022eec;
              }
              if (DAT_000441e0 != 0 || DAT_000441a8 != 0) goto LAB_00023088;
            }
            else {
LAB_00023074:
              iVar10 = DAT_00022d58;
              if (DAT_000441e0 != 0 || DAT_000441a8 != 0) {
LAB_00023088:
                iVar10 = DAT_00022d58;
                pcVar16 = *(code **)(DAT_00022d58 + 0x30c);
                iVar7 = sprintf(DAT_00022d60,"[%s]\n",DAT_000d4298);
                (*pcVar16)(iVar10 + -0x91000,DAT_00022d60,iVar7,0x401);
              }
            }
            pcVar16 = *(code **)(iVar10 + 0x30c);
            memcpy(DAT_00022d60,
                   "fatal error: read failure while seeking for End-of-centdir-64 signature.\n  This zipfile is corrupt.\n"
                   ,0x65);
            iVar10 = 2;
            (*pcVar16)(&DAT_000441a0,DAT_00022d60,100,0x401);
            goto LAB_00022348;
          }
        }
      }
LAB_0002227c:
      DAT_00044248 = DAT_000d4300 + DAT_000d42fc;
      if (DAT_000441a8 == 0) {
        if (0 < DAT_00044204) {
LAB_000222a4:
          close(DAT_000d429c);
          return local_94;
        }
LAB_00022670:
        iVar10 = DAT_00022d58;
        if (DAT_000d430c != 0) {
          local_94 = 1;
          pcVar16 = *(code **)(DAT_00022d58 + 0x30c);
          iVar7 = sprintf(DAT_00022d60,DAT_00022d28,DAT_000d4298);
          (*pcVar16)(iVar10 + -0x91000,DAT_00022d60,iVar7,0x401);
        }
      }
      else {
        FUN_00025c80();
        iVar10 = DAT_00022d58;
        if (DAT_00044204 < 1) {
          if (DAT_000441a8 == 0) goto LAB_00022670;
        }
        else if (DAT_000441a8 == 0) goto LAB_000222a4;
        uVar8 = (uint)DAT_000d430c;
        uVar13 = (uint)DAT_000d430e;
        if (uVar13 != uVar8) {
          pcVar16 = *(code **)(DAT_00022d58 + 0x30c);
          if (uVar13 < uVar8) {
            iVar7 = sprintf(DAT_00022d60,DAT_00022d24,DAT_000d4298,uVar8,uVar13);
            (*pcVar16)(iVar10 + -0x91000,DAT_00022d60,iVar7,0x401);
            iVar10 = 0xb;
            goto LAB_00022608;
          }
          local_94 = 1;
          iVar7 = sprintf(DAT_00022d60,DAT_00022d40,DAT_000d4298,uVar8,uVar13);
          (*pcVar16)(iVar10 + -0x91000,DAT_00022d60,iVar7,0x401);
        }
      }
      iVar7 = DAT_000d4300;
      pcVar14 = DAT_000d4298;
      iVar10 = DAT_00022d58;
      DAT_000d42a8 = (int)DAT_00044244 - DAT_00044248;
      if (DAT_000d42a8 < 0) {
        local_94 = 2;
        pcVar16 = *(code **)(DAT_00022d58 + 0x30c);
        uVar11 = FUN_0001b92c(DAT_00044248 - (int)DAT_00044244,0);
        iVar15 = 2;
        iVar7 = sprintf(DAT_00022d60,DAT_00022d3c,pcVar14,uVar11);
        (*pcVar16)(iVar10 + -0x91000,DAT_00022d60,iVar7,0x401);
      }
      else if (DAT_000d42a8 == 0) {
        iVar15 = 1;
      }
      else {
        pcVar16 = *(code **)(DAT_00022d58 + 0x30c);
        if ((DAT_000d4300 == 0) && (DAT_000d42fc != 0)) {
          iVar15 = 2;
          local_94 = 2;
          iVar12 = sprintf(DAT_00022d60,DAT_00022d48,DAT_000d4298);
          (*pcVar16)(iVar10 + -0x91000,DAT_00022d60,iVar12,0x401);
          DAT_000d4300 = DAT_000d42a8;
          DAT_000d42a8 = iVar7;
        }
        else {
          iVar15 = 1;
          uVar11 = FUN_0001b92c(DAT_000d42a8,0);
          pcVar17 = "";
          if (DAT_000d42a8 != 1) {
            pcVar17 = "s";
          }
          local_94 = 1;
          iVar10 = sprintf(DAT_00022d60,DAT_00022d2c,pcVar14,uVar11,pcVar17);
          (*pcVar16)(&DAT_000441a0,DAT_00022d60,iVar10,0x401);
        }
      }
      iVar10 = DAT_00022d58;
      if (DAT_00044248 == 0 && DAT_000d42fc == 0) {
        pcVar16 = *(code **)(DAT_00022d58 + 0x30c);
        if (DAT_000441a8 == 0) {
          iVar7 = sprintf(DAT_00022d60,DAT_00022d4c,DAT_000d4298);
          (*pcVar16)(iVar10 + -0x91000,DAT_00022d60,iVar7,0x401);
        }
        else {
          pcVar14 = "\n  ";
          if (DAT_000441d0 < 10) {
            pcVar14 = "";
          }
          iVar7 = sprintf(DAT_00022d60,"%sEmpty zipfile.\n",pcVar14);
          (*pcVar16)(iVar10 + -0x91000,DAT_00022d60,iVar7,0);
        }
        goto LAB_000227cc;
      }
      iVar15 = FUN_00019ae8(DAT_000d4300);
      if (iVar15 == 3) goto LAB_000227cc;
      if (((((iVar15 == 0) && (iVar10 = FUN_00019870(DAT_00022d30,4), iVar10 != 0)) &&
           (DAT_0004425c == DAT_00044160)) &&
          ((DAT_0004425d == DAT_00044161 && (DAT_0004425e == DAT_00044162)))) &&
         (DAT_0004425f == DAT_00044163)) {
LAB_00022890:
        iVar15 = FUN_00019ae8(DAT_000d4300);
        if (iVar15 == 0) {
          if (DAT_000441a8 == 0) {
            if (DAT_000441e8 == 0) {
              if ((DAT_000441f4 == 0) || (DAT_000441e4 != 0 || DAT_000441b4 != 0)) {
                iVar10 = FUN_00018058();
              }
              else {
                iVar10 = FUN_00020680();
              }
            }
            else {
              iVar10 = FUN_00021168(&local_60,&local_90);
            }
          }
          else {
            iVar10 = FUN_00026124();
          }
          if (iVar10 < local_94) {
            iVar10 = local_94;
          }
LAB_00022608:
          close(DAT_000d429c);
          if (DAT_000441e8 == 0) {
            return iVar10;
          }
          if (DAT_000441a8 != 0) {
            return iVar10;
          }
          if (local_90 == 0) {
            return iVar10;
          }
          iVar15 = FUN_0002b224(DAT_000d4298,local_60);
          iVar7 = DAT_00022d58;
          if (iVar15 == 0) {
            if (DAT_000441e0 == 0) {
              pcVar16 = *(code **)(DAT_00022d58 + 0x30c);
              iVar15 = sprintf(DAT_00022d60,DAT_00022d50,DAT_000d4298);
              (*pcVar16)(iVar7 + -0x91000,DAT_00022d60,iVar15,0);
              return iVar10;
            }
            return iVar10;
          }
          if (DAT_000441e0 < 3) {
            pcVar16 = *(code **)(DAT_00022d58 + 0x30c);
            iVar15 = sprintf(DAT_00022d60,DAT_00022d54,DAT_000d4298);
            (*pcVar16)(iVar7 + -0x91000,DAT_00022d60,iVar15,0x201);
          }
          if (iVar10 == 0) {
            return 1;
          }
          return iVar10;
        }
      }
      else {
        iVar7 = DAT_000d42a8;
        DAT_000d42a8 = 0;
        iVar15 = FUN_00019ae8(DAT_000d4300);
        iVar10 = DAT_00022d58;
        if (iVar15 != 0) {
          if (iVar15 != 3) {
            pcVar16 = *(code **)(DAT_00022d58 + 0x30c);
            iVar7 = sprintf(DAT_00022d60,DAT_00022d5c,DAT_000d4298,
                            "  (please check that you have transferred or created the zipfile in the\n  appropriate BINARY mode and that you have compiled UnZip properly)\n"
                           );
            (*pcVar16)(iVar10 + -0x91000,DAT_00022d60,iVar7,0x401);
          }
          goto LAB_000227cc;
        }
        iVar15 = FUN_00019870(DAT_00022d30,4);
        pcVar14 = DAT_000d4298;
        iVar10 = DAT_00022d58;
        if (iVar15 == 0) {
          pcVar16 = *(code **)(DAT_00022d58 + 0x30c);
        }
        else {
          if (((DAT_0004425c == DAT_00044160) && (DAT_0004425d == DAT_00044161)) &&
             ((DAT_0004425e == DAT_00044162 && (DAT_0004425f == DAT_00044163)))) {
            bVar18 = false;
          }
          else {
            bVar18 = true;
          }
          pcVar16 = *(code **)(DAT_00022d58 + 0x30c);
          if (!bVar18) {
            local_94 = 2;
            uVar11 = FUN_0001b92c(-iVar7,0);
            iVar7 = sprintf(DAT_00022d60,DAT_00022d38,pcVar14,uVar11);
            (*pcVar16)(iVar10 + -0x91000,DAT_00022d60,iVar7,0x401);
            goto LAB_00022890;
          }
        }
        iVar15 = 3;
        iVar10 = sprintf(DAT_00022d60,DAT_00022d5c,DAT_000d4298,
                         "  (please check that you have transferred or created the zipfile in the\n  appropriate BINARY mode and that you have compiled UnZip properly)\n"
                        );
        (*pcVar16)(&DAT_000441a0,DAT_00022d60,iVar10,0x401);
      }
LAB_000227cc:
      close(DAT_000d429c);
      return iVar15;
    }
  }
  else {
    __nbytes = DAT_000d42a0 & 0x1fff;
    iVar10 = DAT_000d42a0 - __nbytes;
    if (__nbytes < 0x13) {
      iVar7 = uVar8 - __nbytes;
      iVar15 = iVar7 + 0x1fff;
      DAT_000d42a4 = iVar10;
      if (iVar7 + 0x1fff < 0) {
        iVar15 = iVar7 + 0x3ffe;
      }
joined_r0x00022aa4:
      if (0 < iVar7) {
        iVar10 = 1;
        do {
          DAT_000d42a4 = DAT_000d42a4 + -0x2000;
          lseek(DAT_000d429c,DAT_000d42a4,0);
          DAT_000d4280 = read(DAT_000d429c,DAT_000d4278,0x2000);
          puVar4 = DAT_000d42b0;
          if (DAT_000d4280 != 0x2000) break;
          DAT_000d427c = DAT_000d4278 + 0x1fff;
          do {
            pcVar14 = DAT_000d427c + -1;
            if (((*DAT_000d427c == 'P') && (DAT_00044158 == 'P')) &&
               ((DAT_000d427c[1] == DAT_00044159 &&
                ((DAT_000d427c[2] == DAT_0004415a && (DAT_000d427c[3] == *DAT_00022d20)))))) {
              DAT_000d4280 = 0x2000 - ((int)DAT_000d427c - (int)DAT_000d4278);
              cVar1 = DAT_000d4278[2];
              *DAT_000d42b0 = *(undefined2 *)DAT_000d4278;
              *(char *)(puVar4 + 1) = cVar1;
              goto LAB_0002215c;
            }
            bVar18 = DAT_000d4278 != DAT_000d427c;
            DAT_000d427c = pcVar14;
          } while (bVar18);
          iVar10 = iVar10 + 1;
          cVar1 = DAT_000d4278[2];
          *DAT_000d42b0 = *(undefined2 *)DAT_000d4278;
          *(char *)(puVar4 + 1) = cVar1;
        } while (iVar10 <= iVar15 >> 0xd);
      }
    }
    else {
      DAT_000d42a4 = lseek(DAT_000d429c,iVar10,0);
      DAT_000d4280 = read(DAT_000d429c,DAT_000d4278,__nbytes);
      puVar4 = DAT_000d42b0;
      if (__nbytes == DAT_000d4280) {
        iVar7 = uVar8 - DAT_000d4280;
        pcVar14 = DAT_000d4278 + (DAT_000d4280 - 0x16);
        do {
          DAT_000d427c = pcVar14;
          if (DAT_000d427c < DAT_000d4278) {
            iVar15 = iVar7 + 0x1fff;
            if (iVar7 + 0x1fff < 0) {
              iVar15 = iVar7 + 0x3ffe;
            }
            cVar1 = DAT_000d4278[2];
            *DAT_000d42b0 = *(undefined2 *)DAT_000d4278;
            *(char *)(puVar4 + 1) = cVar1;
            goto joined_r0x00022aa4;
          }
          pcVar14 = DAT_000d427c + -1;
        } while ((((*DAT_000d427c != 'P') || (DAT_00044158 != 'P')) ||
                 (DAT_000d427c[1] != DAT_00044159)) ||
                ((DAT_000d427c[2] != DAT_0004415a || (DAT_000d427c[3] != *DAT_00022d20))));
        DAT_000d4280 = DAT_000d4280 - ((int)DAT_000d427c - (int)DAT_000d4278);
        cVar1 = DAT_000d4278[2];
        *DAT_000d42b0 = *(undefined2 *)DAT_000d4278;
        *(char *)(puVar4 + 1) = cVar1;
        goto LAB_0002215c;
      }
    }
  }
LAB_000222d4:
  iVar10 = DAT_00022d58;
  pcVar16 = *(code **)(DAT_00022d58 + 0x30c);
  if (DAT_000441e0 != 0 || DAT_000441a8 != 0) {
    iVar7 = sprintf(DAT_00022d60,"[%s]\n",DAT_000d4298);
    (*pcVar16)(iVar10 + -0x91000,DAT_00022d60,iVar7,0x401);
    pcVar16 = *(code **)(iVar10 + 0x30c);
  }
  memcpy(DAT_00022d60,
         "  End-of-central-directory signature not found.  Either this file is not\n  a zipfile, or it constitutes one disk of a multi-part archive.  In the\n  latter case the central directory and zipfile comment will be found on\n  the last disk(s) of this archive.\n"
         ,0x100);
  (*pcVar16)(&DAT_000441a0,DAT_00022d60,0xff,0x401);
  iVar10 = 2;
LAB_00022348:
  close(DAT_000d429c);
  iVar7 = DAT_00022d58;
  if ((uVar13 & 0x40) != 0) {
    pcVar16 = *(code **)(DAT_00022d58 + 0x30c);
    iVar15 = sprintf(DAT_00022d60,DAT_00022d34,DAT_000d4298);
    (*pcVar16)(iVar7 + -0x91000,DAT_00022d60,iVar15,0x401);
  }
  if (param_1 == 0) {
    iVar10 = 9;
    DAT_000d439c = 1;
  }
  return iVar10;
}



/* ===== FUN_000231d8 @ 000231d8 size=244 ===== */

void FUN_000231d8(void)

{
  int iVar1;
  int iVar2;
  void *__ptr;
  undefined4 *puVar3;
  
  FUN_0001df84();
  iVar1 = DAT_000232cc;
  FUN_00029f38(0,5);
  if (*(int *)(iVar1 + 0xd0) != 0) {
    FUN_00012ec0();
    *(undefined4 *)(iVar1 + 0xd0) = 0;
  }
  iVar2 = DAT_000232d0;
  if (*(void **)(DAT_000232d0 + 0x244) != (void *)0x0) {
    free(*(void **)(DAT_000232d0 + 0x244));
    *(undefined4 *)(iVar2 + 0x244) = 0;
  }
  if (*(void **)(iVar1 + 0x10c) != (void *)0x0) {
    free(*(void **)(iVar1 + 0x10c));
    *(undefined4 *)(iVar1 + 0x10c) = 0;
  }
  if (*(void **)(iVar1 + 0x218) != (void *)0x0) {
    free(*(void **)(iVar1 + 0x218));
    *(undefined4 *)(iVar1 + 0x218) = 0;
  }
  if (*(void **)(iVar1 + 0x210) != (void *)0x0) {
    free(*(void **)(iVar1 + 0x210));
  }
  if (*(void **)(iVar1 + 0xd8) != (void *)0x0) {
    free(*(void **)(iVar1 + 0xd8));
  }
  __ptr = *(void **)(iVar2 + 0x224);
  *(undefined4 *)(iVar1 + 0x210) = 0;
  *(undefined4 *)(iVar1 + 0xd8) = 0;
  if (__ptr != (void *)0x0) {
    free(__ptr);
    *(undefined4 *)(iVar2 + 0x224) = 0;
    *(undefined4 *)(iVar2 + 0x228) = 0;
  }
  puVar3 = &DAT_000441a0;
  do {
    if ((void *)puVar3[0x3a] != (void *)0x0) {
      free((void *)puVar3[0x3a]);
      puVar3[0x3a] = 0;
    }
    puVar3 = puVar3 + 8;
  } while (puVar3 != (undefined4 *)&DAT_000c41a0);
  return;
}



/* ===== FUN_000232d4 @ 000232d4 size=1672 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_000232d4(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  void *pvVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  size_t sVar10;
  uint uVar11;
  char *pcVar12;
  code *pcVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  int local_38;
  int local_34;
  int local_30;
  
  pvVar6 = malloc(0x2004);
  DAT_000d4278 = pvVar6;
  DAT_000d43b0 = malloc(0x10001);
  if (pvVar6 == (void *)0x0 || DAT_000d43b0 == (void *)0x0) {
    DAT_000c4270 = s_error__cannot_allocate_unzip_buf_000316a4[0];
    DAT_000c4271 = s_error__cannot_allocate_unzip_buf_000316a4[1];
    DAT_000c4272 = s_error__cannot_allocate_unzip_buf_000316a4[2];
    DAT_000c4273 = s_error__cannot_allocate_unzip_buf_000316a4[3];
    DAT_000c4274._0_1_ = s_error__cannot_allocate_unzip_buf_000316a4[4];
    DAT_000c4274._1_1_ = s_error__cannot_allocate_unzip_buf_000316a4[5];
    DAT_000c4274._2_1_ = s_error__cannot_allocate_unzip_buf_000316a4[6];
    DAT_000c4274._3_1_ = s_error__cannot_allocate_unzip_buf_000316a4[7];
    DAT_000c4278 = s_error__cannot_allocate_unzip_buf_000316a4[8];
    DAT_000c4279 = s_error__cannot_allocate_unzip_buf_000316a4[9];
    DAT_000c427a = s_error__cannot_allocate_unzip_buf_000316a4[10];
    DAT_000c427b = s_error__cannot_allocate_unzip_buf_000316a4[0xb];
    DAT_000c427c._0_1_ = s_error__cannot_allocate_unzip_buf_000316a4[0xc];
    DAT_000c427c._1_1_ = s_error__cannot_allocate_unzip_buf_000316a4[0xd];
    DAT_000c427c._2_1_ = s_error__cannot_allocate_unzip_buf_000316a4[0xe];
    DAT_000c427c._3_1_ = s_error__cannot_allocate_unzip_buf_000316a4[0xf];
    DAT_000c4280._0_1_ = s_error__cannot_allocate_unzip_buf_000316a4[0x10];
    DAT_000c4280._1_1_ = s_error__cannot_allocate_unzip_buf_000316a4[0x11];
    DAT_000c4280._2_1_ = s_error__cannot_allocate_unzip_buf_000316a4[0x12];
    DAT_000c4280._3_1_ = s_error__cannot_allocate_unzip_buf_000316a4[0x13];
    DAT_000c4284._0_1_ = s_error__cannot_allocate_unzip_buf_000316a4[0x14];
    DAT_000c4284._1_1_ = s_error__cannot_allocate_unzip_buf_000316a4[0x15];
    DAT_000c4284._2_1_ = s_error__cannot_allocate_unzip_buf_000316a4[0x16];
    DAT_000c4284._3_1_ = s_error__cannot_allocate_unzip_buf_000316a4[0x17];
    DAT_000c4288._0_1_ = s_error__cannot_allocate_unzip_buf_000316a4[0x18];
    DAT_000c4288._1_1_ = s_error__cannot_allocate_unzip_buf_000316a4[0x19];
    DAT_000c4288._2_1_ = s_error__cannot_allocate_unzip_buf_000316a4[0x1a];
    DAT_000c4288._3_1_ = s_error__cannot_allocate_unzip_buf_000316a4[0x1b];
    DAT_000c428c._0_1_ = s_error__cannot_allocate_unzip_buf_000316a4[0x1c];
    DAT_000c428c._1_1_ = s_error__cannot_allocate_unzip_buf_000316a4[0x1d];
    DAT_000c428c._2_1_ = s_error__cannot_allocate_unzip_buf_000316a4[0x1e];
    DAT_000c428c._3_1_ = s_error__cannot_allocate_unzip_buf_000316a4[0x1f];
    DAT_000c4290._0_1_ = s_error__cannot_allocate_unzip_buf_000316a4[0x20];
    DAT_000c4290._1_1_ = s_error__cannot_allocate_unzip_buf_000316a4[0x21];
    DAT_000c4290._2_1_ = s_error__cannot_allocate_unzip_buf_000316a4[0x22];
    DAT_000c4290._3_1_ = s_error__cannot_allocate_unzip_buf_000316a4[0x23];
    DAT_000c4294._0_2_ = (undefined2)ram0x000316c8;
    DAT_000c4294._2_1_ = (undefined1)((uint)ram0x000316c8 >> 0x10);
    (*DAT_000d54ac)(&DAT_000441a0,DAT_00023964,0x26,0x401);
    return 4;
  }
  DAT_00044155 = 0x4b;
  DAT_00044154 = 0x50;
  DAT_00044151 = 0x4b;
  DAT_000d42b0 = (int)pvVar6 + 0x2000;
  DAT_00044159 = 0x4b;
  DAT_00044161 = 0x4b;
  DAT_0004415d = 0x4b;
  DAT_00044150 = 0x50;
  DAT_00044158 = 0x50;
  DAT_00044160 = 0x50;
  DAT_0004415c = 0x50;
  tzset();
  if (DAT_000441d8 == 0) {
    DAT_00044234 = (uint)(DAT_000441dc != 0);
  }
  else {
    DAT_00044234 = 2;
  }
  uVar16 = 0;
  iVar14 = 0;
  iVar15 = 0;
  local_34 = 0;
  local_30 = 0;
  local_38 = 0;
  uVar11 = 0;
  pcVar12 = (char *)0x0;
LAB_000233b8:
  pcVar7 = (char *)FUN_00029938(DAT_000d4294);
  DAT_000d4298 = pcVar7;
  if (pcVar7 != (char *)0x0) {
    if ((((DAT_000441e0 == 0) && (uVar16 != 9 && uVar16 != 0x4c)) &&
        ((DAT_000441e8 == 0 || (DAT_000441a8 != 0)))) &&
       (local_38 + iVar15 + iVar14 + local_34 != 0)) {
      (**(code **)(DAT_0002395c + 0x30c))(&DAT_000441a0,"\n",1,0);
    }
    uVar16 = FUN_00021d7c(0);
    pcVar12 = pcVar7;
    if (uVar16 == 1) {
      iVar14 = iVar14 + 1;
    }
    else {
      if (uVar16 == 0x4c) {
        local_30 = local_30 + 1;
        goto LAB_000233b8;
      }
      if (uVar16 == 9) {
        local_34 = local_34 + 1;
      }
      else if (uVar16 == 0) {
        local_38 = local_38 + 1;
      }
      else {
        iVar15 = iVar15 + 1;
      }
    }
    bVar17 = SBORROW4(uVar16,0x4c);
    iVar8 = uVar16 - 0x4c;
    if (uVar16 != 0x4c) {
      bVar17 = SBORROW4(uVar11,uVar16);
      iVar8 = uVar11 - uVar16;
    }
    if (iVar8 < 0 != bVar17) {
      uVar11 = uVar16;
    }
    goto LAB_000233b8;
  }
  if ((local_38 + iVar14 + iVar15 == 0) && (pcVar12 != (char *)0x0 && local_30 + local_34 == 1)) {
    sVar10 = strlen(pcVar12);
    cVar1 = DAT_00031684;
    pcVar7 = pcVar12 + sVar10;
    *(undefined4 *)(pcVar12 + sVar10) = DAT_00031680;
    pcVar7[4] = cVar1;
    DAT_000d4298 = pcVar12;
    uVar11 = FUN_00021d7c(0);
    cVar1 = DAT_0003168c;
    local_30 = 0;
    if (uVar11 == 9) {
LAB_000238b0:
      *(undefined4 *)pcVar7 = DAT_00031688;
      pcVar7[4] = cVar1;
      uVar11 = FUN_00021d7c(1);
    }
    else if (uVar11 == 0x4c) {
      local_30 = 1;
      goto LAB_000238b0;
    }
    if (uVar11 == 9) {
      local_34 = 0;
    }
    else if (uVar11 == 0x4c) {
      uVar11 = 9;
      local_30 = local_30 + 1;
      local_34 = 0;
    }
    else if (uVar11 == 1) {
      iVar14 = iVar14 + 1;
      local_34 = 0;
    }
    else {
      if (uVar11 == 0) {
        local_38 = local_38 + 1;
      }
      else {
        iVar15 = iVar15 + 1;
        uVar11 = uVar11 & ~((int)uVar11 >> 0x1f);
      }
      local_34 = 0;
    }
  }
  iVar8 = FUN_00021b28(DAT_000d4294);
  if ((iVar8 == 0) || (2 < DAT_000441e0)) goto LAB_000234f0;
  if (DAT_000441e8 == 0) {
    if ((iVar15 + local_34 + iVar14 == 0) && (local_38 == 1)) goto LAB_00023884;
LAB_00023558:
    if (DAT_000441e4 == 0 || DAT_000441e0 != 2) {
      (**(code **)(DAT_0002395c + 0x30c))(DAT_0002395c + -0x91000,"\n",1,0x401);
    }
LAB_0002358c:
    if (1 < local_38) {
      pcVar12 = "s were";
      pcVar13 = *(code **)(DAT_0002395c + 0x30c);
      goto LAB_000235a8;
    }
    if (local_38 == 1) goto LAB_00023884;
  }
  else {
    if (DAT_000441e0 == 2 && DAT_000441a8 == 0) goto LAB_000234f0;
    if ((iVar15 + local_34 + iVar14 != 0) || (local_38 != 1)) {
      if (DAT_000441e0 == 0 || DAT_000441a8 != 0) goto LAB_00023558;
      goto LAB_0002358c;
    }
LAB_00023884:
    if (local_30 + local_34 + iVar15 + iVar14 != 0) {
      pcVar12 = " was";
      pcVar13 = *(code **)(DAT_0002395c + 0x30c);
LAB_000235a8:
      iVar8 = sprintf(DAT_00023964,DAT_00023960,local_38,pcVar12);
      (*pcVar13)(&DAT_000441a0,DAT_00023964,iVar8,0x401);
    }
  }
  iVar8 = DAT_0002395c;
  if (iVar14 != 0) {
    pcVar12 = "s";
    if (iVar14 == 1) {
      pcVar12 = "";
    }
    pcVar13 = *(code **)(DAT_0002395c + 0x30c);
    iVar9 = sprintf(DAT_00023964,DAT_00023968,iVar14,pcVar12);
    (*pcVar13)(iVar8 + -0x91000,DAT_00023964,iVar9,0x401);
  }
  iVar8 = DAT_0002395c;
  if (iVar15 != 0) {
    pcVar12 = "s";
    if (iVar15 == 1) {
      pcVar12 = "";
    }
    pcVar13 = *(code **)(DAT_0002395c + 0x30c);
    iVar9 = sprintf(DAT_00023964,DAT_0002396c,iVar15,pcVar12);
    (*pcVar13)(iVar8 + -0x91000,DAT_00023964,iVar9,0x401);
  }
  iVar8 = DAT_0002395c;
  if (local_34 != 0) {
    pcVar12 = "s";
    if (local_34 == 1) {
      pcVar12 = "";
    }
    pcVar13 = *(code **)(DAT_0002395c + 0x30c);
    iVar9 = sprintf(DAT_00023964,DAT_00023970,local_34,pcVar12);
    (*pcVar13)(iVar8 + -0x91000,DAT_00023964,iVar9,0x401);
  }
  uVar4 = s_1__zipfile__was_a_directory__000316cc._12_4_;
  uVar3 = s_1__zipfile__was_a_directory__000316cc._8_4_;
  uVar2 = s_1__zipfile__was_a_directory__000316cc._4_4_;
  iVar8 = DAT_0002395c;
  if (local_30 == 1) {
    pcVar13 = *(code **)(DAT_0002395c + 0x30c);
    *(undefined4 *)(DAT_0002395c + -0x10f30) = s_1__zipfile__was_a_directory__000316cc._0_4_;
    *(undefined4 *)(iVar8 + -0x10f2c) = uVar2;
    *(undefined4 *)(iVar8 + -0x10f28) = uVar3;
    *(undefined4 *)(iVar8 + -0x10f24) = uVar4;
    uVar4 = ram0x000316e8;
    uVar3 = s_1__zipfile__was_a_directory__000316cc._24_4_;
    uVar2 = s_1__zipfile__was_a_directory__000316cc._20_4_;
    *(undefined4 *)(iVar8 + -0x10f20) = s_1__zipfile__was_a_directory__000316cc._16_4_;
    *(undefined4 *)(iVar8 + -0x10f1c) = uVar2;
    *(undefined4 *)(iVar8 + -0x10f18) = uVar3;
    *(short *)(iVar8 + -0x10f14) = (short)uVar4;
    (*pcVar13)(iVar8 + -0x91000,iVar8 + -0x10f30,0x1d,0x401);
  }
  else if (local_30 != 0) {
    pcVar13 = *(code **)(DAT_0002395c + 0x30c);
    iVar9 = sprintf(DAT_00023964,DAT_00023974,local_30);
    (*pcVar13)(iVar8 + -0x91000,DAT_00023964,iVar9,0x401);
  }
  uVar5 = s_No_zipfiles_found__00031690._16_4_;
  uVar4 = s_No_zipfiles_found__00031690._12_4_;
  uVar3 = s_No_zipfiles_found__00031690._8_4_;
  uVar2 = s_No_zipfiles_found__00031690._4_4_;
  iVar8 = DAT_0002395c;
  if (local_38 + iVar15 + iVar14 == 0) {
    pcVar13 = *(code **)(DAT_0002395c + 0x30c);
    *(undefined4 *)(DAT_0002395c + -0x10f30) = s_No_zipfiles_found__00031690._0_4_;
    *(undefined4 *)(iVar8 + -0x10f2c) = uVar2;
    *(undefined4 *)(iVar8 + -0x10f28) = uVar3;
    *(undefined4 *)(iVar8 + -0x10f24) = uVar4;
    *(undefined4 *)(iVar8 + -0x10f20) = uVar5;
    (*pcVar13)(iVar8 + -0x91000,iVar8 + -0x10f30,0x13,0x401);
  }
LAB_000234f0:
  FUN_000231d8();
  return uVar11;
}



/* ===== FUN_00023978 @ 00023978 size=468 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00023978(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint local_3c;
  undefined1 auStack_38 [2];
  undefined1 auStack_36 [2];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [2];
  undefined1 auStack_22 [2];
  undefined1 auStack_20 [2];
  undefined1 auStack_1e [2];
  undefined1 auStack_1c [2];
  undefined1 auStack_1a [4];
  undefined1 auStack_16 [10];
  
  iVar2 = FUN_00019870(&local_3c,0x2a);
  if (iVar2 == 0) {
    return 0x33;
  }
  _DAT_000d42ec = local_3c;
  DAT_000d42f0 = FUN_0001b8b4(auStack_38);
  DAT_000d42f2 = FUN_0001b8b4(auStack_36);
  DAT_000d42dc = FUN_0001b8c4(auStack_34);
  DAT_000d42e0 = FUN_0001b8c4(auStack_30);
  DAT_000d42d0 = FUN_0001b8c4(auStack_2c);
  DAT_000d42d4 = FUN_0001b8c4(auStack_28);
  DAT_000d42f4 = FUN_0001b8b4(auStack_24);
  DAT_000d42f6 = FUN_0001b8b4(auStack_22);
  DAT_000d42f8 = FUN_0001b8b4(auStack_20);
  DAT_000d42e8 = FUN_0001b8b4(auStack_1e);
  DAT_000d42ea = FUN_0001b8b4(auStack_1c);
  DAT_000d42e4 = FUN_0001b8c4(auStack_1a);
  DAT_000d42d8 = FUN_0001b8c4(auStack_16);
  iVar2 = DAT_000c426c;
  *(undefined1 *)(DAT_000c426c + 0x12) = DAT_000d42ec;
  uVar3 = _DAT_000d42ec >> 8 & 0xff;
  *(byte *)(iVar2 + 0x18) = *(byte *)(iVar2 + 0x18) & 0xef;
  uVar4 = uVar3;
  if (0x1e < uVar3) {
    uVar4 = 0x1f;
  }
  *(char *)(iVar2 + 0x13) = (char)uVar4;
  if (DAT_000441d4 == 1) {
    if ((0x11 < uVar3) || ((1 << uVar4 & 0x28615U) == 0)) goto LAB_00023ab0;
  }
  else if (DAT_000441d4 < 2) goto LAB_00023ab0;
  *(byte *)(iVar2 + 0x18) = *(byte *)(iVar2 + 0x18) | 0x10;
LAB_00023ab0:
  uVar4 = DAT_000d42e4;
  cVar1 = '\0';
  if ((DAT_000d42e4 & 8) != 0) {
    if ((uVar3 < 0xc) && ((~(0x861U >> uVar3) & 1) == 0)) {
      cVar1 = '\x01';
      *(byte *)(iVar2 + 0x18) = *(byte *)(iVar2 + 0x18) & 0xef;
    }
    else {
      cVar1 = '\0';
    }
  }
  *(byte *)(iVar2 + 0x18) =
       *(byte *)(iVar2 + 0x18) & 0x5f | cVar1 << 5 | ((uVar4 & 0xffff0000) != 0) << 7;
  *(byte *)(iVar2 + 0x19) =
       *(byte *)(iVar2 + 0x19) & 0xfe | (byte)(((uint)DAT_000d42f0 << 0x14) >> 0x1f);
  return 0;
}



/* ===== FUN_00023b4c @ 00023b4c size=240 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00023b4c(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 local_2c;
  undefined1 auStack_2a [2];
  undefined1 auStack_28 [2];
  undefined1 auStack_26 [4];
  undefined1 auStack_22 [4];
  undefined1 auStack_1e [4];
  undefined1 auStack_1a [4];
  undefined1 auStack_16 [2];
  undefined1 auStack_14 [4];
  
  iVar1 = FUN_00019870(&local_2c,0x1a);
  if (iVar1 == 0) {
    uVar2 = 0x33;
  }
  else {
    DAT_000d42c4 = local_2c;
    DAT_000d42c6 = FUN_0001b8b4(auStack_2a);
    DAT_000d42c8 = FUN_0001b8b4(auStack_28);
    DAT_000d42bc = FUN_0001b8c4(auStack_26);
    DAT_000d42c0 = FUN_0001b8c4(auStack_22);
    uVar2 = FUN_0001b8c4(auStack_1e);
    _DAT_000d42b4 = CONCAT44(DAT_000d42b8,uVar2);
    uVar2 = FUN_0001b8c4(auStack_1a);
    _DAT_000d42b4 = CONCAT44(uVar2,DAT_000d42b4);
    DAT_000d42ca = FUN_0001b8b4(auStack_16);
    DAT_000d42cc = FUN_0001b8b4(auStack_14);
    if ((DAT_000d42c6 & 8) == 0) {
      DAT_0004424c = DAT_000d42b4;
    }
    else {
      DAT_000d42c0 = *(undefined4 *)(DAT_000c426c + 0xc);
      DAT_0004424c = *(undefined4 *)(DAT_000c426c + 4);
      _DAT_000d42b4 = *(undefined8 *)(DAT_000c426c + 4);
    }
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== FUN_00023c3c @ 00023c3c size=328 ===== */

undefined4 FUN_00023c3c(int param_1,uint param_2)

{
  int iVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  short *psVar8;
  int iVar9;
  
  iVar1 = DAT_00023d84;
  if (param_1 == 0 || param_2 < 4) {
    return 0;
  }
  psVar8 = (short *)(DAT_00023d84 + 0x148);
  do {
    iVar3 = FUN_0001b8b4(param_1);
    uVar4 = FUN_0001b8b4(param_1 + 2);
    if (param_2 - 4 < uVar4) {
      return 0;
    }
    if (iVar3 == 1) {
      if ((*(int *)(iVar1 + 0x134) == -1) || (*(int *)(iVar1 + 0x118) == -1)) {
        iVar3 = 0x10;
        uVar5 = FUN_0001b8e8(param_1 + 4);
        iVar9 = 0xc;
        iVar7 = 8;
        *(undefined4 *)(iVar1 + 0x134) = uVar5;
        *(undefined4 *)(iVar1 + 0x118) = uVar5;
        if (*(int *)(iVar1 + 0x130) != -1) goto LAB_00023cd8;
LAB_00023d38:
        uVar5 = FUN_0001b8e8(param_1 + iVar7);
        iVar6 = *(int *)(iVar1 + 0x138);
        *(undefined4 *)(iVar1 + 0x130) = uVar5;
        *(undefined4 *)(iVar1 + 0x114) = uVar5;
        *(undefined4 *)(iVar1 + -0x8ff54) = uVar5;
        iVar7 = iVar9;
      }
      else {
        iVar3 = 0xc;
        iVar9 = 8;
        iVar7 = 4;
        if (*(int *)(iVar1 + 0x130) == -1) goto LAB_00023d38;
LAB_00023cd8:
        if (*(int *)(iVar1 + 0x114) == -1) goto LAB_00023d38;
        iVar6 = *(int *)(iVar1 + 0x138);
        iVar3 = iVar9;
      }
      if (iVar6 == -1) {
        uVar5 = FUN_0001b8e8(param_1 + iVar7);
        *(undefined4 *)(iVar1 + 0x138) = uVar5;
        iVar7 = iVar3;
      }
      if (*psVar8 == -1) {
        sVar2 = FUN_0001b8c4(param_1 + iVar7);
        *psVar8 = sVar2;
      }
    }
    param_2 = (param_2 - uVar4) - 4;
    param_1 = param_1 + uVar4 + 4;
    if (param_2 < 4) {
      return 0;
    }
  } while( true );
}



/* ===== FUN_00023d88 @ 00023d88 size=448 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00023d88(int param_1,uint param_2)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  size_t sVar9;
  code *pcVar10;
  char *pcVar11;
  uint __n;
  bool bVar12;
  
  iVar3 = DAT_00023f48;
  bVar1 = param_2 < 4;
  bVar12 = param_1 == 0;
  *(undefined4 *)(DAT_00023f48 + 0x240) = 0;
  if (!bVar12 && !bVar1) {
    do {
      iVar6 = FUN_0001b8b4(param_1);
      uVar7 = FUN_0001b8b4(param_1 + 2);
      if (param_2 - 4 < uVar7) {
        return 0;
      }
      if (iVar6 == 0x7075) {
        bVar2 = *(byte *)(param_1 + 4);
        __n = uVar7 - 5 & 0xffff;
        *(uint *)(iVar3 + 0x238) = (uint)bVar2;
        uVar5 = s_warning__Unicode_Path_version_>_1_000316ec._12_4_;
        uVar4 = s_warning__Unicode_Path_version_>_1_000316ec._8_4_;
        uVar8 = s_warning__Unicode_Path_version_>_1_000316ec._4_4_;
        pcVar11 = DAT_00023f4c;
        if (1 < bVar2) {
          pcVar10 = *(code **)(iVar3 + 0x30c);
          *(undefined4 *)DAT_00023f4c = s_warning__Unicode_Path_version_>_1_000316ec._0_4_;
          *(undefined4 *)(pcVar11 + 4) = uVar8;
          *(undefined4 *)(pcVar11 + 8) = uVar4;
          *(undefined4 *)(pcVar11 + 0xc) = uVar5;
          uVar5 = s_warning__Unicode_Path_version_>_1_000316ec._28_4_;
          uVar4 = s_warning__Unicode_Path_version_>_1_000316ec._24_4_;
          uVar8 = s_warning__Unicode_Path_version_>_1_000316ec._20_4_;
          *(undefined4 *)(pcVar11 + 0x10) = s_warning__Unicode_Path_version_>_1_000316ec._16_4_;
          *(undefined4 *)(pcVar11 + 0x14) = uVar8;
          *(undefined4 *)(pcVar11 + 0x18) = uVar4;
          *(undefined4 *)(pcVar11 + 0x1c) = uVar5;
          uVar8 = ram0x00031710;
          *(undefined4 *)(pcVar11 + 0x20) = s_warning__Unicode_Path_version_>_1_000316ec._32_4_;
          pcVar11[0x24] = (char)uVar8;
          (*pcVar10)(&DAT_000441a0,pcVar11,0x24,0x401);
          return 2;
        }
        uVar8 = FUN_0001b8c4(param_1 + 5);
        pcVar11 = *(char **)(iVar3 + 0x224);
        *(undefined4 *)(iVar3 + 0x23c) = uVar8;
        sVar9 = strlen(pcVar11);
        iVar6 = FUN_00012ee8(0,pcVar11,sVar9);
        uVar5 = s_warning__Unicode_Path_checksum_i_00031714._12_4_;
        uVar4 = s_warning__Unicode_Path_checksum_i_00031714._8_4_;
        uVar8 = s_warning__Unicode_Path_checksum_i_00031714._4_4_;
        pcVar11 = DAT_00023f4c;
        if (*(int *)(iVar3 + 0x23c) != iVar6) {
          pcVar10 = *(code **)(iVar3 + 0x30c);
          *(undefined4 *)DAT_00023f4c = s_warning__Unicode_Path_checksum_i_00031714._0_4_;
          *(undefined4 *)(pcVar11 + 4) = uVar8;
          *(undefined4 *)(pcVar11 + 8) = uVar4;
          *(undefined4 *)(pcVar11 + 0xc) = uVar5;
          uVar5 = s_warning__Unicode_Path_checksum_i_00031714._28_4_;
          uVar4 = s_warning__Unicode_Path_checksum_i_00031714._24_4_;
          uVar8 = s_warning__Unicode_Path_checksum_i_00031714._20_4_;
          *(undefined4 *)(pcVar11 + 0x10) = s_warning__Unicode_Path_checksum_i_00031714._16_4_;
          *(undefined4 *)(pcVar11 + 0x14) = uVar8;
          *(undefined4 *)(pcVar11 + 0x18) = uVar4;
          *(undefined4 *)(pcVar11 + 0x1c) = uVar5;
          uVar4 = ram0x0003173c;
          uVar8 = s_warning__Unicode_Path_checksum_i_00031714._36_4_;
          *(undefined4 *)(pcVar11 + 0x20) = s_warning__Unicode_Path_checksum_i_00031714._32_4_;
          *(undefined4 *)(pcVar11 + 0x24) = uVar8;
          *(short *)(pcVar11 + 0x28) = (short)uVar4;
          (*pcVar10)(&DAT_000441a0,pcVar11,0x29,0x401);
          return 2;
        }
        pcVar11 = malloc(__n + 1);
        *(char **)(iVar3 + 0x240) = pcVar11;
        if (pcVar11 == (char *)0x0) {
          return 2;
        }
        if (__n == 0) {
          *pcVar11 = '\0';
        }
        else {
          strncpy(pcVar11,(char *)(param_1 + 9),__n);
          pcVar11[__n] = bVar12 || bVar1;
        }
      }
      param_2 = param_2 + (-4 - uVar7);
      param_1 = param_1 + uVar7 + 4;
    } while (3 < param_2);
  }
  return 0;
}



/* ===== FUN_00023f50 @ 00023f50 size=256 ===== */

void * FUN_00023f50(uint param_1)

{
  size_t sVar1;
  char *pcVar2;
  void *__dest;
  int iVar3;
  uint *puVar4;
  bool bVar5;
  char acStack_2c [4];
  uint local_28;
  undefined1 local_24 [12];
  
  local_28 = 0;
  if (((param_1 == 0) || (local_28 = param_1 & 0xff, param_1 >> 8 == 0)) ||
     (local_28 = param_1 & 0xffff, param_1 >> 0x10 == 0)) {
    local_24._0_2_ = 0x23;
    iVar3 = 1;
    sVar1 = strlen(local_24);
    *(undefined2 *)(local_24 + sVar1) = DAT_00031740;
  }
  else {
    local_28 = param_1 & 0xffffff;
    if (param_1 >> 0x18 == 0) {
      iVar3 = 2;
    }
    else {
      iVar3 = 3;
      local_28 = param_1;
    }
    local_24._1_2_ = DAT_0003174c;
    local_24[0] = 0x23;
  }
  puVar4 = (uint *)((int)&local_28 + iVar3);
  do {
    sprintf(acStack_2c,"%02x",(uint)(byte)*puVar4);
    sVar1 = strlen(local_24);
    pcVar2 = stpcpy(local_24 + sVar1,acStack_2c);
    bVar5 = puVar4 != &local_28;
    puVar4 = (uint *)((int)puVar4 + -1);
  } while (bVar5);
  __dest = malloc((size_t)(pcVar2 + (1 - (int)local_24)));
  if (__dest != (void *)0x0) {
    memcpy(__dest,local_24,(size_t)(pcVar2 + (1 - (int)local_24)));
  }
  return __dest;
}



/* ===== FUN_00024050 @ 00024050 size=408 ===== */

void * FUN_00024050(int *param_1,int param_2)

{
  int iVar1;
  char *__dest;
  char *pcVar2;
  size_t sVar3;
  void *__dest_00;
  int *piVar4;
  int iVar5;
  int iVar6;
  wchar_t *pwVar7;
  char local_24 [12];
  
  iVar1 = _stdlib_mb_cur_max();
  if (*param_1 == 0) {
    __dest = malloc(1);
    if (__dest == (char *)0x0) {
      return (void *)0x0;
    }
    *__dest = '\0';
    wctomb((char *)0x0,L'a');
  }
  else {
    piVar4 = param_1;
    iVar5 = 0;
    do {
      iVar6 = iVar5;
      piVar4 = piVar4 + 1;
      iVar5 = iVar6 + 1;
    } while (*piVar4 != 0);
    if (iVar1 < 8) {
      iVar1 = 8;
    }
    __dest = malloc(iVar5 * iVar1 + 1);
    if (__dest == (char *)0x0) {
      return (void *)0x0;
    }
    *__dest = '\0';
    wctomb((char *)0x0,L'a');
    pwVar7 = param_1 + -1;
    if (param_2 == 0) {
      do {
        pwVar7 = pwVar7 + 1;
        sVar3 = wctomb(local_24,*pwVar7);
        if ((int)sVar3 < 1) {
          pcVar2 = (char *)FUN_00023f50(*pwVar7);
          strcat(__dest,pcVar2);
          free(pcVar2);
        }
        else {
          strncat(__dest,local_24,sVar3);
        }
      } while (param_1 + iVar6 != pwVar7);
    }
    else {
      do {
        pwVar7 = pwVar7 + 1;
        iVar1 = wctomb(local_24,*pwVar7);
        if ((iVar1 == 1) && (-1 < local_24[0])) {
          strncat(__dest,local_24,1);
        }
        else {
          pcVar2 = (char *)FUN_00023f50(*pwVar7);
          strcat(__dest,pcVar2);
          free(pcVar2);
        }
      } while (pwVar7 != param_1 + iVar6);
    }
  }
  sVar3 = strlen(__dest);
  __dest_00 = malloc(sVar3 + 1);
  if (__dest_00 != (void *)0x0) {
    memcpy(__dest_00,__dest,sVar3 + 1);
  }
  free(__dest);
  return __dest_00;
}



/* ===== FUN_000241e8 @ 000241e8 size=104 ===== */

undefined4 FUN_000241e8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *__ptr;
  
  iVar1 = FUN_00021b98(param_1,0);
  if (iVar1 == -1) {
    __ptr = (void *)0x0;
  }
  else {
    __ptr = malloc((iVar1 + 1) * 4);
    if (__ptr != (void *)0x0) {
      FUN_00021b98(param_1,__ptr,iVar1 + 1);
    }
  }
  uVar2 = FUN_00024050(__ptr,param_2);
  free(__ptr);
  return uVar2;
}



/* ===== FUN_0002429c @ 0002429c size=760 ===== */

byte FUN_0002429c(int param_1,uint param_2,int param_3,int param_4,uint *param_5,int param_6)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  uint local_30;
  
  if (param_1 == 0 || param_2 < 4) {
    bVar5 = 0;
  }
  else {
    bVar5 = 0;
    if (param_5 != (uint *)0x0 || param_6 != 0) {
      bVar5 = 0;
      iVar7 = 0;
      local_30 = 0;
      do {
        uVar2 = FUN_0001b8b4(param_1);
        uVar3 = FUN_0001b8b4(param_1 + 2);
        if (param_2 - 4 < uVar3) {
          return bVar5;
        }
        if (uVar2 == 0x5855) {
LAB_000243dc:
          if (iVar7 == 0 && 7 < uVar3) {
            if (param_5 == (uint *)0x0) {
              iVar7 = 0;
            }
            else {
              uVar2 = FUN_0001b8c4(param_1 + 8);
              iVar7 = param_1 + 4;
              if ((int)uVar2 < 0) {
                local_30 = (uint)(param_4 == 0x210000);
                if (param_4 == 0x210000) {
                  param_5[1] = uVar2;
                  uVar2 = FUN_0001b8c4(iVar7);
                  goto LAB_00024444;
                }
                param_5[1] = uVar2;
                uVar2 = FUN_0001b8c4(iVar7);
                bVar5 = 0;
              }
              else {
                param_5[1] = uVar2;
                uVar2 = FUN_0001b8c4(iVar7);
                local_30 = 0;
                if ((int)uVar2 < 0) {
                  bVar5 = bVar5 & 0xfd | 1;
                  iVar7 = 0;
                  goto LAB_00024310;
                }
LAB_00024444:
                bVar5 = bVar5 | 3;
              }
              iVar7 = 0;
              *param_5 = uVar2;
            }
          }
        }
        else if (uVar2 < 0x5856) {
          if (uVar2 == 0xd) goto LAB_000243dc;
          if (uVar2 != 0x5455) goto LAB_00024310;
          bVar5 = 0;
          if (uVar3 != 0 && param_5 != (uint *)0x0) {
            bVar5 = *(byte *)(param_1 + 4);
            if ((bVar5 & 1) == 0) {
              uVar6 = 9;
              uVar2 = 5;
            }
            else if (uVar3 < 5) {
              bVar5 = bVar5 & 0xfe;
              uVar6 = 9;
              uVar2 = 5;
            }
            else {
              uVar2 = FUN_0001b8c4(param_1 + 5);
              if ((int)uVar2 < 0) {
                local_30 = (uint)(param_4 == 0x210000);
                if (param_4 != 0x210000) goto LAB_00024460;
              }
              else {
                local_30 = 0;
              }
              uVar6 = 0xd;
              param_5[1] = uVar2;
              uVar2 = 9;
            }
            if (param_3 == 0) {
              if ((bVar5 & 2) == 0) {
LAB_000244d8:
                if ((bVar5 & 4) == 0) goto LAB_0002446c;
                if (uVar2 <= uVar3) {
                  iVar7 = 1;
                  uVar2 = FUN_0001b8c4(param_1 + uVar2);
                  if (((local_30 ^ 1) & uVar2 >> 0x1f) == 0) {
                    param_5[2] = uVar2;
                  }
                  else {
                    bVar5 = bVar5 & 0xfb;
                    local_30 = 0;
                  }
                  goto LAB_00024310;
                }
              }
              else {
                if (uVar2 <= uVar3) {
                  uVar4 = FUN_0001b8c4(param_1 + uVar2);
                  uVar2 = uVar6;
                  if (((local_30 ^ 1) & uVar4 >> 0x1f) == 0) {
                    *param_5 = uVar4;
                  }
                  else {
                    bVar5 = bVar5 & 0xfd;
                  }
                  goto LAB_000244d8;
                }
                bVar1 = bVar5 & 4;
                bVar5 = bVar5 & 0xfd;
                if (bVar1 == 0) goto LAB_0002446c;
              }
              bVar5 = bVar5 & 0xfb;
              iVar7 = 1;
              goto LAB_00024310;
            }
          }
LAB_0002446c:
          iVar7 = 1;
        }
        else if (uVar2 == 0x7855) {
          if (iVar7 == 0) {
LAB_00024460:
            iVar7 = 1;
            bVar5 = 0;
          }
        }
        else if (uVar2 == 0x7875) {
          iVar7 = 2;
        }
LAB_00024310:
        param_2 = (param_2 - uVar3) - 4;
        param_1 = param_1 + uVar3 + 4;
      } while (3 < param_2);
    }
  }
  return bVar5;
}



/* ===== FUN_000245d8 @ 000245d8 size=76 ===== */

void FUN_000245d8(void)

{
  int iVar1;
  termios tStack_44;
  
  iVar1 = DAT_00024624;
  if (*(int *)(DAT_00024624 + 600) != -1) {
    tcgetattr(*(int *)(DAT_00024624 + 600),&tStack_44);
    tStack_44.c_lflag = tStack_44.c_lflag | 8;
    tcsetattr(*(int *)(iVar1 + 600),2,&tStack_44);
    *(undefined4 *)(iVar1 + 600) = 0xffffffff;
  }
  return;
}



/* ===== FUN_00024628 @ 00024628 size=136 ===== */

undefined4 FUN_00024628(uint *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  ushort local_18;
  ushort local_16;
  
  iVar1 = ioctl(1,0x5413,&local_18);
  if (iVar1 == 0) {
    if (param_1 != (uint *)0x0) {
      uVar2 = (uint)local_18;
      if (uVar2 == 0) {
        uVar2 = 0x18;
      }
      *param_1 = uVar2;
    }
    if (param_2 != (uint *)0x0) {
      uVar2 = (uint)local_16;
      if (uVar2 == 0) {
        uVar2 = 0x50;
      }
      *param_2 = uVar2;
    }
    return 0;
  }
  if (param_1 != (uint *)0x0) {
    *param_1 = 0x18;
  }
  if (param_2 != (uint *)0x0) {
    *param_2 = 0x50;
  }
  return 1;
}



/* ===== FUN_000246b0 @ 000246b0 size=136 ===== */

undefined1 FUN_000246b0(int param_1)

{
  int iVar1;
  undefined1 local_4d;
  termios tStack_4c;
  
  iVar1 = DAT_00024738;
  tcgetattr(param_1,&tStack_4c);
  tStack_4c.c_lflag = tStack_4c.c_lflag & 0xfffffff5;
  tStack_4c.c_cc[5] = '\0';
  tStack_4c.c_cc[6] = '\x01';
  tcsetattr(param_1,2,&tStack_4c);
  *(int *)(iVar1 + 600) = param_1;
  read(param_1,&local_4d,1);
  tStack_4c.c_lflag = tStack_4c.c_lflag | 10;
  tcsetattr(param_1,2,&tStack_4c);
  *(undefined4 *)(iVar1 + 600) = 0xffffffff;
  return local_4d;
}



/* ===== FUN_0002473c @ 0002473c size=412 ===== */

int FUN_0002473c(char *param_1,int param_2,int param_3)

{
  int iVar1;
  int __fd;
  char *pcVar2;
  int iVar3;
  int iVar4;
  char local_65;
  termios tStack_64;
  
  __fd = open("/dev/tty",0);
  iVar1 = DAT_000248d8;
  if (__fd == -1) {
    param_2 = 0;
  }
  else {
    pcVar2 = "";
    do {
      fputs(pcVar2,stderr);
      fputs(param_1,stderr);
      fflush(stderr);
      *(int *)(iVar1 + 600) = __fd;
      tcgetattr(__fd,&tStack_64);
      tStack_64.c_lflag = tStack_64.c_lflag & 0xfffffff7;
      tcsetattr(__fd,2,&tStack_64);
      iVar3 = 0;
      do {
        while (read(__fd,&local_65,1), iVar3 < param_3) {
          iVar4 = iVar3 + 1;
          *(char *)(param_2 + iVar3) = local_65;
          iVar3 = iVar4;
          if (local_65 == '\n') goto LAB_000247fc;
        }
        iVar4 = iVar3;
      } while (local_65 != '\n');
LAB_000247fc:
      if (*(int *)(iVar1 + 600) != -1) {
        tcgetattr(*(int *)(iVar1 + 600),&tStack_64);
        tStack_64.c_lflag = tStack_64.c_lflag | 8;
        tcsetattr(*(int *)(iVar1 + 600),2,&tStack_64);
        *(undefined4 *)(iVar1 + 600) = 0xffffffff;
      }
      if (stderr->_chain == (_IO_FILE *)0x0) {
        fputc(10,stderr);
      }
      else {
        pcVar2 = stderr->_IO_write_base;
        if (pcVar2 < stderr->_IO_buf_base) {
          stderr->_IO_write_base = pcVar2 + 1;
          *pcVar2 = '\n';
        }
        else {
          __fputc_unlocked(10);
        }
      }
      fflush(stderr);
      pcVar2 = "(line too long--try again)\n";
    } while (*(char *)(param_2 + iVar4 + -1) != '\n');
    *(undefined1 *)(param_2 + iVar4 + -1) = 0;
    close(__fd);
  }
  return param_2;
}



/* ===== FUN_000248e0 @ 000248e0 size=2460 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_000248e0(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  byte *pbVar25;
  uint uVar26;
  uint uVar27;
  byte *pbVar28;
  int iVar29;
  byte *pbVar30;
  int *piVar31;
  undefined1 (*pauVar32) [16];
  byte *pbVar33;
  uint uVar34;
  byte *pbVar35;
  byte *pbVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  int iVar40;
  uint *puVar41;
  undefined1 auVar42 [16];
  uint local_38;
  
  if ((((*(byte *)(DAT_000c426c + 0x18) & 8) != 0) && (DAT_000d43b8 == (void *)0x0)) &&
     (DAT_000d43b8 = malloc(0x10000), DAT_000d43b8 == (void *)0x0)) {
    return 6;
  }
  iVar40 = DAT_00024d70;
  uVar15 = DAT_00024cc8;
  uVar14 = DAT_00024cc0;
  uVar13 = DAT_00024cb8;
  uVar12 = DAT_00024cb0;
  uVar11 = DAT_00024ca8;
  uVar10 = DAT_00024ca0;
  uVar9 = DAT_00024c98;
  uVar8 = DAT_00024c90;
  uVar7 = DAT_00024c88;
  uVar6 = DAT_00024c80;
  uVar5 = DAT_00024c78;
  auVar42._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
  auVar42._0_8_ = 0x10000000100;
  auVar42 = auVar42 << 0x40 | auVar42;
  DAT_000c4630._0_4_ = *(undefined4 *)auVar42;
  DAT_000c4630._4_4_ = *(undefined4 *)(auVar42 + (undefined1  [16])0x4);
  DAT_000c4638._0_4_ = *(undefined4 *)(auVar42 + (undefined1  [16])0x8);
  DAT_000c4638._4_4_ = *(undefined4 *)(auVar42 + (undefined1  [16])0xc);
  auVar1._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
  auVar1._0_8_ = 0x200000002000;
  auVar42 = *(undefined1 (*) [16])(auVar1 << 0x40 | auVar1);
  *(undefined8 *)(DAT_00024d70 + 0xd0) = DAT_00024c70;
  *(undefined8 *)(iVar40 + 0xd8) = uVar5;
  *(undefined8 *)(iVar40 + 0xe0) = uVar6;
  *(undefined8 *)(iVar40 + 0xe8) = uVar7;
  *(undefined8 *)(iVar40 + 0xf0) = uVar8;
  *(undefined8 *)(iVar40 + 0xf8) = uVar9;
  *(undefined8 *)(iVar40 + 0x100) = uVar10;
  *(undefined8 *)(iVar40 + 0x108) = uVar11;
  uVar24 = DAT_00024d48;
  uVar23 = DAT_00024d40;
  uVar22 = DAT_00024d38;
  uVar21 = DAT_00024d30;
  uVar20 = DAT_00024d28;
  uVar19 = DAT_00024d20;
  uVar18 = DAT_00024d18;
  uVar17 = DAT_00024d10;
  uVar16 = DAT_00024d08;
  uVar11 = DAT_00024d00;
  uVar10 = DAT_00024cf8;
  uVar9 = DAT_00024cf0;
  uVar8 = DAT_00024ce8;
  uVar7 = DAT_00024ce0;
  uVar6 = DAT_00024cd8;
  uVar5 = DAT_00024cd0;
  _DAT_000c4270 = (undefined4)DAT_000c4630;
  DAT_000c4274 = DAT_000c4630._4_4_;
  _DAT_000c4278 = (undefined4)DAT_000c4638;
  DAT_000c427c = DAT_000c4638._4_4_;
  DAT_000c4280 = (undefined4)DAT_000c4630;
  DAT_000c4284 = DAT_000c4630._4_4_;
  DAT_000c4288 = (undefined4)DAT_000c4638;
  DAT_000c428c = DAT_000c4638._4_4_;
  DAT_000c4290 = (undefined4)DAT_000c4630;
  DAT_000c4294 = DAT_000c4630._4_4_;
  DAT_000c4298 = (undefined4)DAT_000c4638;
  _DAT_000c429c = DAT_000c4638._4_4_;
  DAT_000c42a0 = (undefined4)DAT_000c4630;
  DAT_000c42a4 = DAT_000c4630._4_4_;
  _DAT_000c42a8 = (undefined4)DAT_000c4638;
  DAT_000c42ac = DAT_000c4638._4_4_;
  DAT_000c42b0._0_4_ = (undefined4)DAT_000c4630;
  DAT_000c42b0._4_4_ = DAT_000c4630._4_4_;
  DAT_000c42b8._0_4_ = (undefined4)DAT_000c4638;
  DAT_000c42b8._4_4_ = DAT_000c4638._4_4_;
  DAT_000c42c0._0_4_ = (undefined4)DAT_000c4630;
  DAT_000c42c0._4_4_ = DAT_000c4630._4_4_;
  DAT_000c42c8._0_4_ = (undefined4)DAT_000c4638;
  DAT_000c42c8._4_4_ = DAT_000c4638._4_4_;
  DAT_000c42d0._0_4_ = (undefined4)DAT_000c4630;
  DAT_000c42d0._4_4_ = DAT_000c4630._4_4_;
  DAT_000c42d8._0_4_ = (undefined4)DAT_000c4638;
  DAT_000c42d8._4_4_ = DAT_000c4638._4_4_;
  DAT_000c42e0._0_4_ = (undefined4)DAT_000c4630;
  DAT_000c42e0._4_4_ = DAT_000c4630._4_4_;
  DAT_000c42e8._0_4_ = (undefined4)DAT_000c4638;
  DAT_000c42e8._4_4_ = DAT_000c4638._4_4_;
  DAT_000c42f0._0_4_ = (undefined4)DAT_000c4630;
  DAT_000c42f0._4_4_ = DAT_000c4630._4_4_;
  DAT_000c42f8._0_4_ = (undefined4)DAT_000c4638;
  DAT_000c42f8._4_4_ = DAT_000c4638._4_4_;
  DAT_000c4300._0_4_ = (undefined4)DAT_000c4630;
  DAT_000c4300._4_4_ = DAT_000c4630._4_4_;
  DAT_000c4308._0_4_ = (undefined4)DAT_000c4638;
  DAT_000c4308._4_4_ = DAT_000c4638._4_4_;
  DAT_000c4310._0_4_ = (undefined4)DAT_000c4630;
  DAT_000c4310._4_4_ = DAT_000c4630._4_4_;
  DAT_000c4318._0_4_ = (undefined4)DAT_000c4638;
  DAT_000c4318._4_4_ = DAT_000c4638._4_4_;
  DAT_000c4320._0_4_ = (undefined4)DAT_000c4630;
  DAT_000c4320._4_4_ = DAT_000c4630._4_4_;
  DAT_000c4328._0_4_ = (undefined4)DAT_000c4638;
  DAT_000c4328._4_4_ = DAT_000c4638._4_4_;
  DAT_000c4330._0_4_ = (undefined4)DAT_000c4630;
  DAT_000c4330._4_4_ = DAT_000c4630._4_4_;
  DAT_000c4338._0_4_ = (undefined4)DAT_000c4638;
  DAT_000c4338._4_4_ = DAT_000c4638._4_4_;
  DAT_000c4340._0_4_ = (undefined4)DAT_000c4630;
  DAT_000c4340._4_4_ = DAT_000c4630._4_4_;
  DAT_000c4348._0_4_ = (undefined4)DAT_000c4638;
  DAT_000c4348._4_4_ = DAT_000c4638._4_4_;
  DAT_000c4350._0_4_ = (undefined4)DAT_000c4630;
  DAT_000c4350._4_4_ = DAT_000c4630._4_4_;
  DAT_000c4358._0_4_ = (undefined4)DAT_000c4638;
  DAT_000c4358._4_4_ = DAT_000c4638._4_4_;
  DAT_000c4360._0_4_ = (undefined4)DAT_000c4630;
  DAT_000c4360._4_4_ = DAT_000c4630._4_4_;
  DAT_000c4368._0_4_ = (undefined4)DAT_000c4638;
  DAT_000c4368._4_4_ = DAT_000c4638._4_4_;
  DAT_000c4370._0_4_ = (undefined4)DAT_000c4630;
  DAT_000c4370._4_4_ = DAT_000c4630._4_4_;
  DAT_000c4378._0_4_ = (undefined4)DAT_000c4638;
  DAT_000c4378._4_4_ = DAT_000c4638._4_4_;
  DAT_000c4380._0_4_ = (undefined4)DAT_000c4630;
  DAT_000c4380._4_4_ = DAT_000c4630._4_4_;
  DAT_000c4388._0_4_ = (undefined4)DAT_000c4638;
  DAT_000c4388._4_4_ = DAT_000c4638._4_4_;
  DAT_000c4390._0_4_ = (undefined4)DAT_000c4630;
  DAT_000c4390._4_4_ = DAT_000c4630._4_4_;
  DAT_000c4398._0_4_ = (undefined4)DAT_000c4638;
  DAT_000c4398._4_4_ = DAT_000c4638._4_4_;
  DAT_000c43a0._0_4_ = (undefined4)DAT_000c4630;
  DAT_000c43a0._4_4_ = DAT_000c4630._4_4_;
  DAT_000c43a8._0_4_ = (undefined4)DAT_000c4638;
  DAT_000c43a8._4_4_ = DAT_000c4638._4_4_;
  DAT_000c43b0._0_4_ = (undefined4)DAT_000c4630;
  DAT_000c43b0._4_4_ = DAT_000c4630._4_4_;
  DAT_000c43b8._0_4_ = (undefined4)DAT_000c4638;
  DAT_000c43b8._4_4_ = DAT_000c4638._4_4_;
  DAT_000c43c0._0_4_ = (undefined4)DAT_000c4630;
  DAT_000c43c0._4_4_ = DAT_000c4630._4_4_;
  DAT_000c43c8._0_4_ = (undefined4)DAT_000c4638;
  DAT_000c43c8._4_4_ = DAT_000c4638._4_4_;
  DAT_000c43d0._0_4_ = (undefined4)DAT_000c4630;
  DAT_000c43d0._4_4_ = DAT_000c4630._4_4_;
  DAT_000c43d8._0_4_ = (undefined4)DAT_000c4638;
  DAT_000c43d8._4_4_ = DAT_000c4638._4_4_;
  DAT_000c43e0._0_4_ = (undefined4)DAT_000c4630;
  DAT_000c43e0._4_4_ = DAT_000c4630._4_4_;
  DAT_000c43e8._0_4_ = (undefined4)DAT_000c4638;
  DAT_000c43e8._4_4_ = DAT_000c4638._4_4_;
  DAT_000c43f0._0_4_ = (undefined4)DAT_000c4630;
  DAT_000c43f0._4_4_ = DAT_000c4630._4_4_;
  DAT_000c43f8._0_4_ = (undefined4)DAT_000c4638;
  DAT_000c43f8._4_4_ = DAT_000c4638._4_4_;
  *(undefined8 *)(iVar40 + 0x110) = uVar12;
  *(undefined8 *)(iVar40 + 0x118) = uVar13;
  *(undefined8 *)(iVar40 + 0x120) = uVar14;
  *(undefined8 *)(iVar40 + 0x128) = uVar15;
  *(undefined8 *)(iVar40 + 0x130) = uVar5;
  *(undefined8 *)(iVar40 + 0x138) = uVar6;
  DAT_000c4400._0_4_ = (undefined4)DAT_000c4630;
  DAT_000c4400._4_4_ = DAT_000c4630._4_4_;
  DAT_000c4408._0_4_ = (undefined4)DAT_000c4638;
  DAT_000c4408._4_4_ = DAT_000c4638._4_4_;
  DAT_000c4410._0_4_ = (undefined4)DAT_000c4630;
  DAT_000c4410._4_4_ = DAT_000c4630._4_4_;
  DAT_000c4418._0_4_ = (undefined4)DAT_000c4638;
  DAT_000c4418._4_4_ = DAT_000c4638._4_4_;
  DAT_000c4420._0_4_ = (undefined4)DAT_000c4630;
  DAT_000c4420._4_4_ = DAT_000c4630._4_4_;
  DAT_000c4428._0_4_ = (undefined4)DAT_000c4638;
  DAT_000c4428._4_4_ = DAT_000c4638._4_4_;
  DAT_000c4430._0_4_ = (undefined4)DAT_000c4630;
  DAT_000c4430._4_4_ = DAT_000c4630._4_4_;
  DAT_000c4438._0_4_ = (undefined4)DAT_000c4638;
  DAT_000c4438._4_4_ = DAT_000c4638._4_4_;
  DAT_000c4440._0_4_ = (undefined4)DAT_000c4630;
  DAT_000c4440._4_4_ = DAT_000c4630._4_4_;
  DAT_000c4448._0_4_ = (undefined4)DAT_000c4638;
  DAT_000c4448._4_4_ = DAT_000c4638._4_4_;
  DAT_000c4450._0_4_ = (undefined4)DAT_000c4630;
  DAT_000c4450._4_4_ = DAT_000c4630._4_4_;
  DAT_000c4458._0_4_ = (undefined4)DAT_000c4638;
  DAT_000c4458._4_4_ = DAT_000c4638._4_4_;
  DAT_000c4460._0_4_ = (undefined4)DAT_000c4630;
  DAT_000c4460._4_4_ = DAT_000c4630._4_4_;
  DAT_000c4468._0_4_ = (undefined4)DAT_000c4638;
  DAT_000c4468._4_4_ = DAT_000c4638._4_4_;
  DAT_000c4470._0_4_ = (undefined4)DAT_000c4630;
  DAT_000c4470._4_4_ = DAT_000c4630._4_4_;
  DAT_000c4478._0_4_ = (undefined4)DAT_000c4638;
  DAT_000c4478._4_4_ = DAT_000c4638._4_4_;
  DAT_000c4480._0_4_ = (undefined4)DAT_000c4630;
  DAT_000c4480._4_4_ = DAT_000c4630._4_4_;
  DAT_000c4488._0_4_ = (undefined4)DAT_000c4638;
  DAT_000c4488._4_4_ = DAT_000c4638._4_4_;
  DAT_000c4490._0_4_ = (undefined4)DAT_000c4630;
  DAT_000c4490._4_4_ = DAT_000c4630._4_4_;
  DAT_000c4498._0_4_ = (undefined4)DAT_000c4638;
  DAT_000c4498._4_4_ = DAT_000c4638._4_4_;
  DAT_000c44a0._0_4_ = (undefined4)DAT_000c4630;
  DAT_000c44a0._4_4_ = DAT_000c4630._4_4_;
  DAT_000c44a8._0_4_ = (undefined4)DAT_000c4638;
  DAT_000c44a8._4_4_ = DAT_000c4638._4_4_;
  DAT_000c44b0._0_4_ = (undefined4)DAT_000c4630;
  DAT_000c44b0._4_4_ = DAT_000c4630._4_4_;
  DAT_000c44b8._0_4_ = (undefined4)DAT_000c4638;
  DAT_000c44b8._4_4_ = DAT_000c4638._4_4_;
  DAT_000c44c0._0_4_ = (undefined4)DAT_000c4630;
  DAT_000c44c0._4_4_ = DAT_000c4630._4_4_;
  DAT_000c44c8._0_4_ = (undefined4)DAT_000c4638;
  DAT_000c44c8._4_4_ = DAT_000c4638._4_4_;
  DAT_000c44d0._0_4_ = (undefined4)DAT_000c4630;
  DAT_000c44d0._4_4_ = DAT_000c4630._4_4_;
  DAT_000c44d8._0_4_ = (undefined4)DAT_000c4638;
  DAT_000c44d8._4_4_ = DAT_000c4638._4_4_;
  DAT_000c44e0._0_4_ = (undefined4)DAT_000c4630;
  DAT_000c44e0._4_4_ = DAT_000c4630._4_4_;
  DAT_000c44e8._0_4_ = (undefined4)DAT_000c4638;
  DAT_000c44e8._4_4_ = DAT_000c4638._4_4_;
  DAT_000c44f0._0_4_ = (undefined4)DAT_000c4630;
  DAT_000c44f0._4_4_ = DAT_000c4630._4_4_;
  DAT_000c44f8._0_4_ = (undefined4)DAT_000c4638;
  DAT_000c44f8._4_4_ = DAT_000c4638._4_4_;
  DAT_000c4500._0_4_ = (undefined4)DAT_000c4630;
  DAT_000c4500._4_4_ = DAT_000c4630._4_4_;
  DAT_000c4508._0_4_ = (undefined4)DAT_000c4638;
  DAT_000c4508._4_4_ = DAT_000c4638._4_4_;
  DAT_000c4510._0_4_ = (undefined4)DAT_000c4630;
  DAT_000c4510._4_4_ = DAT_000c4630._4_4_;
  DAT_000c4518._0_4_ = (undefined4)DAT_000c4638;
  DAT_000c4518._4_4_ = DAT_000c4638._4_4_;
  DAT_000c4520._0_4_ = (undefined4)DAT_000c4630;
  DAT_000c4520._4_4_ = DAT_000c4630._4_4_;
  DAT_000c4528._0_4_ = (undefined4)DAT_000c4638;
  DAT_000c4528._4_4_ = DAT_000c4638._4_4_;
  DAT_000c4530._0_4_ = (undefined4)DAT_000c4630;
  DAT_000c4530._4_4_ = DAT_000c4630._4_4_;
  DAT_000c4538._0_4_ = (undefined4)DAT_000c4638;
  DAT_000c4538._4_4_ = DAT_000c4638._4_4_;
  DAT_000c4540._0_4_ = (undefined4)DAT_000c4630;
  DAT_000c4540._4_4_ = DAT_000c4630._4_4_;
  DAT_000c4548._0_4_ = (undefined4)DAT_000c4638;
  DAT_000c4548._4_4_ = DAT_000c4638._4_4_;
  DAT_000c4550._0_4_ = (undefined4)DAT_000c4630;
  DAT_000c4550._4_4_ = DAT_000c4630._4_4_;
  DAT_000c4558._0_4_ = (undefined4)DAT_000c4638;
  DAT_000c4558._4_4_ = DAT_000c4638._4_4_;
  DAT_000c4560._0_4_ = (undefined4)DAT_000c4630;
  DAT_000c4560._4_4_ = DAT_000c4630._4_4_;
  DAT_000c4568._0_4_ = (undefined4)DAT_000c4638;
  DAT_000c4568._4_4_ = DAT_000c4638._4_4_;
  DAT_000c4570._0_4_ = (undefined4)DAT_000c4630;
  DAT_000c4570._4_4_ = DAT_000c4630._4_4_;
  DAT_000c4578._0_4_ = (undefined4)DAT_000c4638;
  DAT_000c4578._4_4_ = DAT_000c4638._4_4_;
  DAT_000c4580._0_4_ = (undefined4)DAT_000c4630;
  DAT_000c4580._4_4_ = DAT_000c4630._4_4_;
  DAT_000c4588._0_4_ = (undefined4)DAT_000c4638;
  DAT_000c4588._4_4_ = DAT_000c4638._4_4_;
  DAT_000c4590._0_4_ = (undefined4)DAT_000c4630;
  DAT_000c4590._4_4_ = DAT_000c4630._4_4_;
  DAT_000c4598._0_4_ = (undefined4)DAT_000c4638;
  DAT_000c4598._4_4_ = DAT_000c4638._4_4_;
  DAT_000c45a0._0_4_ = (undefined4)DAT_000c4630;
  DAT_000c45a0._4_4_ = DAT_000c4630._4_4_;
  DAT_000c45a8._0_4_ = (undefined4)DAT_000c4638;
  DAT_000c45a8._4_4_ = DAT_000c4638._4_4_;
  *(undefined8 *)(iVar40 + 0x140) = uVar7;
  *(undefined8 *)(iVar40 + 0x148) = uVar8;
  *(undefined8 *)(iVar40 + 0x150) = uVar9;
  *(undefined8 *)(iVar40 + 0x158) = uVar10;
  *(undefined8 *)(iVar40 + 0x160) = uVar11;
  *(undefined8 *)(iVar40 + 0x168) = uVar16;
  *(undefined8 *)(iVar40 + 0x170) = uVar17;
  *(undefined8 *)(iVar40 + 0x178) = uVar18;
  *(undefined8 *)(iVar40 + 0x180) = uVar19;
  *(undefined8 *)(iVar40 + 0x188) = uVar20;
  *(undefined8 *)(iVar40 + 400) = uVar21;
  *(undefined8 *)(iVar40 + 0x198) = uVar22;
  *(undefined8 *)(iVar40 + 0x1a0) = uVar23;
  *(undefined8 *)(iVar40 + 0x1a8) = uVar24;
  pauVar32 = DAT_00024d7c;
  uVar7 = DAT_00024d68;
  uVar6 = DAT_00024d60;
  uVar5 = DAT_00024d58;
  DAT_000c45b0._0_4_ = (undefined4)DAT_000c4630;
  DAT_000c45b0._4_4_ = DAT_000c4630._4_4_;
  DAT_000c45b8._0_4_ = (undefined4)DAT_000c4638;
  DAT_000c45b8._4_4_ = DAT_000c4638._4_4_;
  DAT_000c45c0._0_4_ = (undefined4)DAT_000c4630;
  DAT_000c45c0._4_4_ = DAT_000c4630._4_4_;
  DAT_000c45c8._0_4_ = (undefined4)DAT_000c4638;
  DAT_000c45c8._4_4_ = DAT_000c4638._4_4_;
  DAT_000c45d0._0_4_ = (undefined4)DAT_000c4630;
  DAT_000c45d0._4_4_ = DAT_000c4630._4_4_;
  DAT_000c45d8._0_4_ = (undefined4)DAT_000c4638;
  DAT_000c45d8._4_4_ = DAT_000c4638._4_4_;
  DAT_000c45e0._0_4_ = (undefined4)DAT_000c4630;
  DAT_000c45e0._4_4_ = DAT_000c4630._4_4_;
  DAT_000c45e8._0_4_ = (undefined4)DAT_000c4638;
  DAT_000c45e8._4_4_ = DAT_000c4638._4_4_;
  DAT_000c45f0._0_4_ = (undefined4)DAT_000c4630;
  DAT_000c45f0._4_4_ = DAT_000c4630._4_4_;
  DAT_000c45f8._0_4_ = (undefined4)DAT_000c4638;
  DAT_000c45f8._4_4_ = DAT_000c4638._4_4_;
  DAT_000c4600._0_4_ = (undefined4)DAT_000c4630;
  DAT_000c4600._4_4_ = DAT_000c4630._4_4_;
  DAT_000c4608._0_4_ = (undefined4)DAT_000c4638;
  DAT_000c4608._4_4_ = DAT_000c4638._4_4_;
  DAT_000c4610._0_4_ = (undefined4)DAT_000c4630;
  DAT_000c4610._4_4_ = DAT_000c4630._4_4_;
  DAT_000c4618._0_4_ = (undefined4)DAT_000c4638;
  DAT_000c4618._4_4_ = DAT_000c4638._4_4_;
  DAT_000c4640._0_4_ = (undefined4)DAT_000c4630;
  DAT_000c4640._4_4_ = DAT_000c4630._4_4_;
  DAT_000c4648._0_4_ = (undefined4)DAT_000c4638;
  DAT_000c4648._4_4_ = DAT_000c4638._4_4_;
  DAT_000c4650._0_4_ = (undefined4)DAT_000c4630;
  DAT_000c4650._4_4_ = DAT_000c4630._4_4_;
  DAT_000c4658._0_4_ = (undefined4)DAT_000c4638;
  DAT_000c4658._4_4_ = DAT_000c4638._4_4_;
  *(undefined8 *)(iVar40 + 0x1b0) = DAT_00024d50;
  *(undefined8 *)(iVar40 + 0x1b8) = uVar5;
  DAT_000c4620._0_4_ = (undefined4)DAT_000c4630;
  DAT_000c4620._4_4_ = DAT_000c4630._4_4_;
  DAT_000c4628._0_4_ = (undefined4)DAT_000c4638;
  DAT_000c4628._4_4_ = DAT_000c4638._4_4_;
  *(undefined8 *)(iVar40 + 0x1c0) = uVar6;
  *(undefined8 *)(iVar40 + 0x1c8) = uVar7;
  DAT_000c4660._0_4_ = (undefined4)DAT_000c4630;
  DAT_000c4660._4_4_ = DAT_000c4630._4_4_;
  DAT_000c4668._0_4_ = (undefined4)DAT_000c4638;
  DAT_000c4668._4_4_ = DAT_000c4638._4_4_;
  do {
    *(longlong *)*pauVar32 = auVar42._0_8_;
    *(longlong *)((int)*pauVar32 + 8) = auVar42._8_8_;
    DAT_000d43bc = DAT_000d43b0;
    uVar34 = (uint)DAT_000d4288;
    pauVar32 = pauVar32 + 1;
  } while ((undefined1 (*) [16])(iVar40 + 0xc4) != pauVar32);
  *(undefined8 *)(iVar40 + 0xc4) = 0x200000002000;
  *(undefined4 *)(iVar40 + 0xcc) = 0x2000;
  DAT_000d43c0 = 0;
  local_38 = DAT_000d4284;
  if ((int)uVar34 < 9) {
    DAT_000d4288._4_4_ = 1;
    uVar34 = (uint)DAT_000d4288;
    do {
      DAT_000d4288._0_4_ = uVar34;
      if (DAT_000d4280 < 1) {
        DAT_000d4280 = DAT_000d4280 + -1;
        uVar26 = FUN_00019950();
        local_38 = DAT_000d4284;
        uVar34 = (uint)DAT_000d4288;
        if (uVar26 == 0xffffffff) goto LAB_00024df0;
      }
      else {
        uVar26 = (uint)*DAT_000d427c;
        DAT_000d427c = DAT_000d427c + 1;
        DAT_000d4280 = DAT_000d4280 + -1;
      }
      DAT_000d4288._4_4_ = 0;
      local_38 = DAT_000d4284 | uVar26 << ((uint)DAT_000d4288 & 0xff);
      DAT_000d4284 = local_38;
      uVar34 = (uint)DAT_000d4288 + 8;
    } while ((int)((uint)DAT_000d4288 + 8) < 0x19);
    DAT_000d4288._0_4_ = (uint)DAT_000d4288 - 1;
    DAT_000d4284 = local_38 >> 9;
  }
  else {
LAB_00024df0:
    DAT_000d4288._0_4_ = uVar34 - 9;
    DAT_000d4284 = local_38 >> 9;
    if (DAT_000d4288._4_4_ != 0) {
      return 0;
    }
  }
  uVar34 = DAT_0002c5a4;
  pbVar33 = DAT_00024d80;
  local_38 = local_38 & DAT_0002c5a4;
  uVar38 = local_38 & 0xff;
  pbVar30 = DAT_00024d80 + 0x1fff;
  pbVar35 = DAT_000d43bc + 1;
  *DAT_000d43bc = (byte)local_38;
  DAT_000d43bc = pbVar35;
  iVar40 = 0x100;
  uVar39 = 9;
  DAT_000d43c0 = DAT_000d43c0 + 1;
  uVar26 = (uint)DAT_000d4288;
LAB_00024ea0:
  do {
    if ((int)uVar26 < (int)uVar39) goto LAB_00024f14;
LAB_00024eb0:
    uVar27 = DAT_000d4284 >> (uVar39 & 0xff);
    DAT_000d4288._0_4_ = uVar26 - uVar39;
    uVar37 = DAT_000d4284 & uVar34;
    DAT_000d4284 = uVar27;
    if (DAT_000d4288._4_4_ != 0) {
LAB_000252c4:
      if (DAT_000d43c0 == 0) {
        return 0;
      }
      iVar40 = FUN_00019bdc(DAT_000d43b0,DAT_000d43c0,1);
      return iVar40;
    }
    while (iVar29 = DAT_00024d84, DAT_000d4284 = uVar27, uVar37 == 0x100) {
      if ((int)(uint)DAT_000d4288 < (int)uVar39) {
        DAT_000d4288._4_4_ = 1;
        if (0x18 < (int)(uint)DAT_000d4288) {
          DAT_000d4284 = uVar27 >> (uVar39 & 0xff);
          DAT_000d4288._0_4_ = (uint)DAT_000d4288 - uVar39;
          goto LAB_000252c4;
        }
        do {
          if (DAT_000d4280 < 1) {
            DAT_000d4280 = DAT_000d4280 + -1;
            uVar26 = FUN_00019950();
            pbVar33 = DAT_00024d80;
            if (uVar26 == 0xffffffff) {
              uVar37 = uVar34 & DAT_000d4284;
              DAT_000d4288._0_4_ = (uint)DAT_000d4288 - uVar39;
              DAT_000d4284 = DAT_000d4284 >> (uVar39 & 0xff);
              if (DAT_000d4288._4_4_ != 0) goto LAB_000252c4;
              goto LAB_00024ef0;
            }
          }
          else {
            uVar26 = (uint)*DAT_000d427c;
            DAT_000d427c = DAT_000d427c + 1;
            DAT_000d4280 = DAT_000d4280 + -1;
          }
          uVar27 = (uint)DAT_000d4288 + 8;
          DAT_000d4288._4_4_ = 0;
          uVar37 = DAT_000d4284 | uVar26 << ((uint)DAT_000d4288 & 0xff);
          DAT_000d4284 = uVar37;
          DAT_000d4288._0_4_ = uVar27;
        } while ((int)uVar27 < 0x19);
        DAT_000d4284 = uVar37 >> (uVar39 & 0xff);
        DAT_000d4288._0_4_ = uVar27 - uVar39;
        uVar37 = uVar37 & uVar34;
      }
      else {
        uVar37 = uVar34 & uVar27;
        DAT_000d4288._0_4_ = (uint)DAT_000d4288 - uVar39;
        DAT_000d4284 = uVar27 >> (uVar39 & 0xff);
      }
LAB_00024ef0:
      uVar26 = (uint)DAT_000d4288;
      if (uVar37 != 1) {
        if ((uVar37 == 2) && (iVar40 != 0x100)) {
          puVar41 = DAT_00024d78;
          do {
            puVar41 = puVar41 + 1;
            iVar29 = (*puVar41 & 0x1fff) + 0x20034;
            if (0x100 < (*puVar41 & 0x1fff)) {
              (&DAT_000441a0)[iVar29] = (&DAT_000441a0)[iVar29] | 0x4000;
            }
          } while (puVar41 != (uint *)(&DAT_000c4270 + iVar40 * 4));
          uVar27 = iVar40 - 0x100;
          if (iVar40 - 0x101U < 3) {
            iVar29 = 0x101;
LAB_0002517c:
            if (((&DAT_000441a0)[iVar29 + 0x20034] & 0x4000) == 0) {
              uVar27 = 0x2000;
            }
            else {
              uVar27 = (&DAT_000441a0)[iVar29 + 0x20034] & 0xffffbfff;
            }
            (&DAT_000441a0)[iVar29 + 0x20034] = uVar27;
            if (iVar29 + 1 <= iVar40) {
              if (((&DAT_000441a0)[iVar29 + 0x20035] & 0x4000) == 0) {
                uVar27 = 0x2000;
              }
              else {
                uVar27 = (&DAT_000441a0)[iVar29 + 0x20035] & 0xffffbfff;
              }
              (&DAT_000441a0)[iVar29 + 0x20035] = uVar27;
              if (iVar29 + 2 <= iVar40) {
                if (((&DAT_000441a0)[iVar29 + 0x20036] & 0x4000) == 0) {
                  uVar27 = 0x2000;
                }
                else {
                  uVar27 = (&DAT_000441a0)[iVar29 + 0x20036] & 0xffffbfff;
                }
                (&DAT_000441a0)[iVar29 + 0x20036] = uVar27;
              }
            }
          }
          else {
            auVar2._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar2._0_8_ = 0x400000004000;
            auVar3._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar3._0_8_ = 0x200000002000;
            pauVar32 = DAT_00024d7c;
            do {
              auVar4._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
              auVar4._0_8_ = 0x400000004000;
              auVar42 = VectorCompareEqual((undefined1  [16])0x0,
                                           *pauVar32 &
                                           *(undefined1 (*) [16])(auVar2 << 0x40 | auVar2),4);
              auVar42 = VectorBitwiseSelect(auVar42,*(undefined1 (*) [16])(auVar3 << 0x40 | auVar3),
                                            *pauVar32 &
                                            ~*(undefined1 (*) [16])(auVar4 << 0x40 | auVar4));
              *(longlong *)*pauVar32 = auVar42._0_8_;
              *(longlong *)((int)*pauVar32 + 8) = auVar42._8_8_;
              pauVar32 = pauVar32 + 1;
            } while ((undefined1 (*) [16])(&DAT_000c4674 + (uVar27 >> 2) * 2) != pauVar32);
            iVar29 = (uVar27 & 0xfffffffc) + 0x101;
            if ((uVar27 & 0xfffffffc) != uVar27) goto LAB_0002517c;
          }
          iVar40 = 0x100;
        }
        goto LAB_00024ea0;
      }
      uVar39 = uVar39 + 1;
      if (0xd < (int)uVar39) {
        return 2;
      }
      uVar34 = *(uint *)(&DAT_0002c580 + uVar39 * 4);
      if ((int)uVar39 <= (int)(uint)DAT_000d4288) goto LAB_00024eb0;
LAB_00024f14:
      DAT_000d4288._4_4_ = 1;
      if (0x18 < (int)uVar26) {
        DAT_000d4288._0_4_ = uVar26 - uVar39;
        DAT_000d4284 = DAT_000d4284 >> (uVar39 & 0xff);
        goto LAB_000252c4;
      }
      do {
        if (DAT_000d4280 < 1) {
          DAT_000d4280 = DAT_000d4280 + -1;
          uVar27 = FUN_00019950();
          uVar26 = (uint)DAT_000d4288;
          pbVar33 = DAT_00024d80;
          if (uVar27 == 0xffffffff) goto LAB_00024eb0;
        }
        else {
          uVar27 = (uint)*DAT_000d427c;
          DAT_000d427c = DAT_000d427c + 1;
          DAT_000d4280 = DAT_000d4280 + -1;
        }
        uVar26 = (uint)DAT_000d4288 + 8;
        DAT_000d4288._4_4_ = 0;
        DAT_000d4284 = DAT_000d4284 | uVar27 << ((uint)DAT_000d4288 & 0xff);
        DAT_000d4288._0_4_ = uVar26;
      } while ((int)uVar26 < 0x19);
      DAT_000d4288._0_4_ = uVar26 - uVar39;
      uVar27 = DAT_000d4284 >> (uVar39 & 0xff);
      uVar37 = DAT_000d4284 & uVar34;
    }
    uVar34 = uVar37;
    pbVar35 = DAT_00024d74;
    if ((&DAT_000441a0)[uVar37 + 0x20034] != 0x2000) goto LAB_00024fc4;
    *(byte *)(DAT_00024d84 + 0xcf) = (byte)uVar38;
    if (local_38 == 0x100) {
      pbVar28 = (byte *)(iVar29 + 0xd0);
      pbVar35 = pbVar30;
      goto LAB_00025024;
    }
    uVar34 = local_38;
    pbVar35 = (byte *)(iVar29 + 0xce);
LAB_00024fc4:
    while( true ) {
      pbVar28 = pbVar35 + -1;
      if ((&DAT_000441a0)[uVar34 + 0x20034] == 0x2000) {
        *pbVar35 = (byte)uVar38;
        uVar34 = local_38;
        uVar26 = uVar38;
      }
      else {
        uVar26 = (uint)*(byte *)((int)&DAT_000cc270 + uVar34);
        *pbVar35 = *(byte *)((int)&DAT_000cc270 + uVar34);
        uVar34 = (&DAT_000441a0)[uVar34 + 0x20034] & 0x1fff;
      }
      if (uVar34 == 0x100) break;
      pbVar35 = pbVar28;
      if (pbVar28 < pbVar33) {
        return 2;
      }
    }
    pbVar28 = pbVar35 + ((int)DAT_00024d74 - (int)pbVar28);
    uVar38 = uVar26;
    if (pbVar35 < pbVar28) {
LAB_00025024:
      do {
        pbVar36 = pbVar35 + 1;
        pbVar25 = DAT_000d43bc + 1;
        *DAT_000d43bc = *pbVar35;
        DAT_000d43bc = pbVar25;
        DAT_000d43c0 = DAT_000d43c0 + 1;
        pbVar35 = pbVar36;
        if (DAT_000d43c0 == 0x10000) {
          iVar29 = FUN_00019bdc(DAT_000d43b0,0x10000,1);
          if (iVar29 != 0) {
            return iVar29;
          }
          DAT_000d43bc = DAT_000d43b0;
          DAT_000d43c0 = 0;
          pbVar33 = DAT_00024d80;
          if (pbVar28 <= pbVar36) break;
          goto LAB_00025024;
        }
      } while (pbVar36 < pbVar28);
    }
    iVar29 = iVar40 + 1;
    if (0x1fff < iVar29) {
      return 2;
    }
    if ((&DAT_000441a0)[iVar40 + 0x20035] != 0x2000) {
      piVar31 = &DAT_000c4274 + iVar40;
      do {
        iVar29 = iVar29 + 1;
        if (iVar29 == 0x2000) {
          return 2;
        }
        piVar31 = piVar31 + 1;
      } while (*piVar31 != 0x2000);
    }
    iVar40 = iVar29;
    *(char *)((int)&DAT_000cc270 + iVar40) = (char)uVar38;
    (&DAT_000441a0)[iVar40 + 0x20034] = local_38;
    uVar34 = *(uint *)(&DAT_0002c580 + uVar39 * 4);
    uVar26 = (uint)DAT_000d4288;
    local_38 = uVar37;
  } while( true );
}



/* ===== FUN_00025398 @ 00025398 size=336 ===== */

void FUN_00025398(byte *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  iVar1 = DAT_000254e8;
  uVar8 = (uint)*param_1;
  uVar3 = (uint)param_1[1];
  uVar10 = (uint)param_1[2];
  uVar5 = (uint)param_1[3];
  uVar7 = (uint)param_1[4];
  uVar9 = (uint)param_1[5];
  uVar6 = (uint)param_1[6];
  uVar4 = (uint)param_1[7];
  UNRECOVERED_JUMPTABLE = *(code **)(DAT_000254e8 + 0x30c);
  if ((((((*(ushort *)(__ctype_b + uVar8 * 2) & 0x40) == 0) ||
        ((*(ushort *)(__ctype_b + uVar3 * 2) & 0x40) == 0)) ||
       ((*(ushort *)(__ctype_b + uVar10 * 2) & 0x40) == 0)) ||
      (((*(ushort *)(__ctype_b + uVar5 * 2) & 0x40) == 0 ||
       ((*(ushort *)(__ctype_b + uVar7 * 2) & 0x40) == 0)))) ||
     (((*(ushort *)(__ctype_b + uVar9 * 2) & 0x40) == 0 ||
      (((*(ushort *)(__ctype_b + uVar6 * 2) & 0x40) == 0 ||
       ((*(ushort *)(__ctype_b + uVar4 * 2) & 0x40) == 0)))))) {
    iVar1 = sprintf(DAT_000254f0,DAT_000254ec,
                    uVar3 * 0x10000 + uVar8 * 0x1000000 + uVar5 + uVar10 * 0x100,
                    uVar9 * 0x10000 + uVar7 * 0x1000000 + uVar4 + uVar6 * 0x100);
    puVar2 = &DAT_000441a0;
  }
  else {
    sprintf(DAT_000254f0,
            ".\n    The associated file has type code `%c%c%c%c\' and creator code `%c%c%c%c\'",
            uVar8,uVar3,uVar10,uVar5,uVar7,uVar9,uVar6,uVar4);
    puVar2 = (undefined4 *)(iVar1 + -0x91000);
    iVar1 = 0x46;
  }
                    /* WARNING: Could not recover jumptable at 0x00025440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(puVar2,DAT_000254f0,iVar1,0);
  return;
}



/* ===== FUN_000254f4 @ 000254f4 size=432 ===== */

char * FUN_000254f4(time_t *param_1,char *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  tm *ptVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  char acStack_2c [8];
  
  if (param_1 == (time_t *)0x0) {
LAB_000255c4:
    uVar6 = *(uint *)(DAT_000256ac + 0x13c);
    uVar11 = (uVar6 & 0x1ffffff) >> 0x15;
    uVar8 = (uVar6 & 0x1fffff) >> 0x10;
    uVar10 = uVar11 - 1;
    uVar9 = (uVar6 & 0xffff) >> 0xb;
    uVar7 = (uVar6 >> 0x19) + 0x50;
    iVar12 = (uVar6 & 0x1f) << 1;
    uVar6 = (uVar6 & 0x7ff) >> 5;
  }
  else {
    if (*param_2 == '\x01') {
      ptVar4 = gmtime(param_1);
    }
    else {
      ptVar4 = localtime(param_1);
    }
    uVar3 = DAT_0003314c;
    uVar2 = DAT_00033148;
    uVar1 = DAT_00033144;
    if (DAT_000441d0 < 10) {
      if (ptVar4 == (tm *)0x0) goto LAB_000255c4;
    }
    else if (ptVar4 == (tm *)0x0) {
      *(undefined4 *)param_2 = DAT_00033140;
      *(undefined4 *)(param_2 + 4) = uVar1;
      *(undefined4 *)(param_2 + 8) = uVar2;
      *(undefined4 *)(param_2 + 0xc) = uVar3;
      uVar1 = DAT_00033154;
      *(undefined4 *)(param_2 + 0x10) = DAT_00033150;
      param_2[0x14] = (char)uVar1;
      return param_2;
    }
    uVar10 = ptVar4->tm_mon;
    uVar8 = ptVar4->tm_mday;
    uVar11 = uVar10 + 1;
    uVar7 = ptVar4->tm_year;
    uVar6 = ptVar4->tm_min;
    uVar9 = ptVar4->tm_hour;
    iVar12 = ptVar4->tm_sec;
  }
  if (uVar10 < 0xc) {
    pcVar5 = (char *)(DAT_000256a4 + uVar10 * 4);
  }
  else {
    sprintf(acStack_2c,DAT_000256b0,uVar11);
    pcVar5 = acStack_2c;
  }
  if (DAT_000441d0 < 10) {
    if (DAT_000441e8 == 0) {
      sprintf(param_2,DAT_000256b8,uVar7 % 100,pcVar5,uVar8,uVar9,uVar6);
      return param_2;
    }
    sprintf(param_2,DAT_000256a8,uVar7 + 0x76c,uVar11,uVar8,uVar9,uVar6,iVar12);
    return param_2;
  }
  sprintf(param_2,DAT_000256b4,uVar7 + 0x76c,pcVar5,uVar8,uVar9,uVar6,iVar12);
  return param_2;
}



/* ===== FUN_000256bc @ 000256bc size=1080 ===== */

undefined4 FUN_000256bc(int *param_1,undefined4 *param_2)

{
  bool bVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char cVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  bool bVar13;
  undefined4 local_3c;
  int iVar14;
  int iVar15;
  
  iVar10 = 0;
  DAT_0004423c = 0;
  iVar15 = 0;
  iVar11 = 0;
  uVar12 = 0;
  puVar9 = (undefined4 *)*param_2;
  iVar14 = 1;
  iVar5 = 0;
  bVar1 = false;
  local_3c = 1;
  iVar4 = *param_1;
joined_r0x0002571c:
  iVar2 = iVar4 + -1;
  if (0 < iVar2) {
    puVar9 = puVar9 + 1;
    pcVar6 = (char *)*puVar9;
    if (*pcVar6 == '-') {
      cVar7 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
joined_r0x0002573c:
      iVar4 = iVar2;
      if (cVar7 != '\0') {
LAB_0002574c:
        switch(cVar7) {
        case '-':
          goto switchD_00025754_caseD_2d;
        default:
          goto switchD_00025754_caseD_2e;
        case '1':
          if (iVar5 == 0) {
            DAT_000441d0 = 1;
            cVar7 = *pcVar6;
            goto joined_r0x00025abc;
          }
          break;
        case '2':
          if (iVar5 == 0) {
            DAT_000441d0 = 2;
            goto switchD_00025754_caseD_5a;
          }
          break;
        case 'C':
          bVar13 = iVar5 == 0;
          if (!bVar13) {
            iVar5 = 0;
          }
          DAT_000441b8 = (uint)bVar13;
          cVar7 = *pcVar6;
          goto joined_r0x00025abc;
        case 'M':
          bVar13 = iVar5 == 0;
          if (!bVar13) {
            iVar5 = 0;
          }
          DAT_00044210 = (uint)bVar13;
          cVar7 = *pcVar6;
          goto joined_r0x00025abc;
        case 'T':
          bVar13 = iVar5 == 0;
          if (!bVar13) {
            iVar5 = 0;
          }
          DAT_000441e8 = (uint)bVar13;
          cVar7 = *pcVar6;
          goto joined_r0x00025abc;
        case 'U':
          if (iVar5 == 0) {
            DAT_000441f0 = DAT_000441f0 + 1;
          }
          else {
            uVar8 = DAT_000441f0 - iVar5;
            iVar5 = 0;
            DAT_000441f0 = uVar8 & ~((int)uVar8 >> 0x1f);
          }
          cVar7 = *pcVar6;
          goto joined_r0x00025abc;
        case 'Z':
          goto switchD_00025754_caseD_5a;
        case 'h':
          if (iVar5 == 0) {
            bVar13 = DAT_000441d0 == -1;
            if (bVar13) {
              DAT_000441d0 = iVar5;
            }
            iVar15 = 1;
            if (bVar13) {
              uVar12 = 1;
              local_3c = 1;
            }
            else {
              uVar12 = 1;
              local_3c = 1;
            }
            goto switchD_00025754_caseD_5a;
          }
          cVar7 = *pcVar6;
          uVar12 = 0;
          iVar5 = 0;
          local_3c = 0;
          goto joined_r0x00025abc;
        case 'l':
          if (iVar5 == 0) {
            DAT_000441d0 = 5;
            cVar7 = *pcVar6;
            goto joined_r0x00025abc;
          }
          break;
        case 'm':
          if (iVar5 == 0) {
            DAT_000441d0 = 4;
            cVar7 = *pcVar6;
            goto joined_r0x00025abc;
          }
          break;
        case 's':
          if (iVar5 == 0) {
            DAT_000441d0 = 3;
            cVar7 = *pcVar6;
            goto joined_r0x00025abc;
          }
          break;
        case 't':
          if (iVar5 == 0) {
            iVar10 = 1;
            if (DAT_000441d0 == -1) {
              iVar14 = 1;
              iVar11 = 1;
              DAT_000441d0 = iVar5;
switchD_00025754_caseD_5a:
              cVar7 = *pcVar6;
            }
            else {
              cVar7 = *pcVar6;
              iVar14 = 1;
              iVar11 = iVar10;
            }
          }
          else {
            cVar7 = *pcVar6;
            iVar5 = 0;
            iVar14 = 0;
            iVar11 = iVar5;
          }
          goto joined_r0x00025abc;
        case 'v':
          if (iVar5 == 0) {
            DAT_000441d0 = 10;
            cVar7 = *pcVar6;
            goto joined_r0x00025abc;
          }
          break;
        case 'z':
          bVar13 = iVar5 == 0;
          if (!bVar13) {
            iVar5 = 0;
          }
          DAT_00044204 = (uint)bVar13;
          cVar7 = *pcVar6;
          goto joined_r0x00025abc;
        }
        DAT_000441d0 = -2;
        iVar5 = 0;
        cVar7 = *pcVar6;
        goto joined_r0x00025abc;
      }
      goto joined_r0x0002571c;
    }
    goto LAB_000258e4;
  }
  if (iVar2 == 0) {
LAB_00025bac:
    *param_1 = iVar4 + -2;
    *param_2 = puVar9;
    pcVar3 = DAT_000d54ac;
    iVar10 = DAT_000116d0;
    iVar5 = DAT_000116c8;
    if (DAT_000441a8 == 0) {
      sprintf(DAT_000116cc,(char *)(DAT_000116d0 + 0x140),6,0,0,"",DAT_000116d0);
      (*pcVar3)(&DAT_000441a0,DAT_000116cc,0x9c,bVar1);
      pcVar3 = DAT_000d54ac;
      sprintf(DAT_000116cc,(char *)(iVar10 + 0x208),"[-Z] ",iVar10 + 0x1d8);
      (*pcVar3)(&DAT_000441a0,DAT_000116cc,0xe8,bVar1);
      pcVar3 = DAT_000d54ac;
      sprintf(DAT_000116cc,(char *)(iVar10 + 0x2f0),iVar10 + 0x2c8);
      (*pcVar3)(&DAT_000441a0,DAT_000116cc,0x17f,bVar1);
      pcVar3 = DAT_000d54ac;
      sprintf(DAT_000116cc,(char *)(DAT_000116d4 + 0x70));
      (*pcVar3)(&DAT_000441a0,DAT_000116cc,0x21d,bVar1);
      pcVar3 = DAT_000d54ac;
      sprintf(DAT_000116cc,(char *)(iVar10 + 0x6d0),iVar10 + 0x680,DAT_000116d8,DAT_000116d8);
      (*pcVar3)(&DAT_000441a0,DAT_000116cc,0x123,bVar1);
    }
    else {
      sprintf(DAT_000116cc,(char *)(DAT_000116c8 + -0x1a8),3,0,0,"",DAT_000116c8 + 0x20,DAT_000116c8
              ,"","");
      (*pcVar3)(&DAT_000441a0,DAT_000116cc,0x1c0,bVar1);
      pcVar3 = DAT_000d54ac;
      memcpy(DAT_000116cc,
             "\nmain listing-format options:             -s  short Unix \"ls -l\" format (def.)\n  -1  filenames ONLY, one per line       -m  medium Unix \"ls -l\" format\n  -2  just filenames but allow -h/-t/-z  -l  long Unix \"ls -l\" format\n                                         -v  verbose, multi-page format\n"
             ,0x126);
      (*pcVar3)(&DAT_000441a0,DAT_000116cc,0x125,bVar1);
      pcVar3 = DAT_000d54ac;
      sprintf(DAT_000116cc,(char *)(iVar5 + 0x60),iVar5 + 0x30);
      (*pcVar3)(&DAT_000441a0,DAT_000116cc,0x127,bVar1);
    }
    if (bVar1) {
      uVar12 = 10;
    }
    else {
      uVar12 = 0;
    }
    return uVar12;
  }
LAB_000258e4:
  iVar5 = iVar4 + -2;
  if (bVar1) goto LAB_00025bac;
  if ((DAT_00044210 != 0) && (iVar4 = isatty(1), iVar4 == 0)) {
    DAT_00044210 = 0;
  }
  if (-1 < DAT_000441d0) {
    if (iVar5 < 1) {
      switch(DAT_000441d0) {
      case 0:
      case 2:
switchD_00025924_caseD_2:
        DAT_000441c4 = uVar12;
        DAT_000441e4 = iVar11;
        break;
      case 1:
switchD_00025924_caseD_1:
        DAT_000441c4 = 0;
        DAT_000441e4 = 0;
        DAT_00044204 = 0;
        break;
      case 3:
      case 4:
      case 5:
        DAT_000441c4 = local_3c;
        DAT_000441e4 = iVar14;
        break;
      case 10:
switchD_00025924_caseD_a:
        DAT_000441c4 = local_3c;
        DAT_000441e4 = iVar11;
      }
      goto switchD_00025924_caseD_6;
    }
    if (DAT_000441d0 != 0) {
      switch(DAT_000441d0) {
      case 1:
        goto switchD_00025924_caseD_1;
      case 2:
        goto switchD_00025924_caseD_2;
      case 3:
      case 4:
      case 5:
        goto switchD_00025924_caseD_3;
      default:
        goto switchD_00025924_caseD_6;
      case 10:
        goto switchD_00025924_caseD_a;
      }
    }
  }
  DAT_000441d0 = 3;
switchD_00025924_caseD_3:
  bVar1 = 0 < iVar5;
  if (bVar1 && iVar15 == 0) {
    local_3c = 0;
  }
  DAT_000441c4 = local_3c;
  DAT_000441e4 = iVar14;
  if ((bVar1 && iVar15 == 0 || bVar1) && iVar10 == 0) {
    DAT_000441e4 = 0;
  }
switchD_00025924_caseD_6:
  *param_1 = iVar5;
  *param_2 = puVar9;
  return 0;
switchD_00025754_caseD_2e:
  bVar1 = true;
  cVar7 = *pcVar6;
joined_r0x00025abc:
  pcVar6 = pcVar6 + 1;
  goto joined_r0x0002573c;
switchD_00025754_caseD_2d:
  cVar7 = *pcVar6;
  iVar5 = iVar5 + 1;
  pcVar6 = pcVar6 + 1;
  if (cVar7 == '\0') goto joined_r0x0002571c;
  goto LAB_0002574c;
}



/* ===== FUN_00025c80 @ 00025c80 size=1152 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00025c80(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  char *pcVar7;
  
  UNRECOVERED_JUMPTABLE = DAT_000d54ac;
  if (9 < DAT_000441d0) {
    _DAT_000c4270 = s_End_of_central_directory_record__00033174._0_4_;
    DAT_000c4274 = s_End_of_central_directory_record__00033174._4_4_;
    _DAT_000c4278 = s_End_of_central_directory_record__00033174._8_4_;
    DAT_000c427c = s_End_of_central_directory_record__00033174._12_4_;
    DAT_000c4280 = s_End_of_central_directory_record__00033174._16_4_;
    DAT_000c4284 = s_End_of_central_directory_record__00033174._20_4_;
    DAT_000c4288 = s_End_of_central_directory_record__00033174._24_4_;
    DAT_000c428c = s_End_of_central_directory_record__00033174._28_4_;
    DAT_000c4290._0_2_ = (undefined2)ram0x00033194;
    DAT_000c4290._2_1_ = (undefined1)((uint)ram0x00033194 >> 0x10);
    (*DAT_000d54ac)(&DAT_000441a0,&DAT_000c4270,0x22,0);
    DAT_000c4270 = s_________________________________00033198[0];
    DAT_000c4271 = s_________________________________00033198[1];
    DAT_000c4272 = s_________________________________00033198[2];
    DAT_000c4273 = s_________________________________00033198[3];
    DAT_000c4274._0_1_ = s_________________________________00033198[4];
    DAT_000c4274._1_1_ = s_________________________________00033198[5];
    DAT_000c4274._2_1_ = s_________________________________00033198[6];
    DAT_000c4274._3_1_ = s_________________________________00033198[7];
    DAT_000c4278 = s_________________________________00033198[8];
    DAT_000c4279 = s_________________________________00033198[9];
    DAT_000c427a = s_________________________________00033198[10];
    DAT_000c427b = s_________________________________00033198[0xb];
    DAT_000c427c._0_1_ = s_________________________________00033198[0xc];
    DAT_000c427c._1_1_ = s_________________________________00033198[0xd];
    DAT_000c427c._2_1_ = s_________________________________00033198[0xe];
    DAT_000c427c._3_1_ = s_________________________________00033198[0xf];
    DAT_000c4280._0_1_ = s_________________________________00033198[0x10];
    DAT_000c4280._1_1_ = s_________________________________00033198[0x11];
    DAT_000c4280._2_1_ = s_________________________________00033198[0x12];
    DAT_000c4280._3_1_ = s_________________________________00033198[0x13];
    DAT_000c4284._0_1_ = s_________________________________00033198[0x14];
    DAT_000c4284._1_1_ = s_________________________________00033198[0x15];
    DAT_000c4284._2_1_ = s_________________________________00033198[0x16];
    DAT_000c4284._3_1_ = s_________________________________00033198[0x17];
    DAT_000c4288._0_1_ = s_________________________________00033198[0x18];
    DAT_000c4288._1_1_ = s_________________________________00033198[0x19];
    DAT_000c4288._2_1_ = s_________________________________00033198[0x1a];
    DAT_000c4288._3_1_ = s_________________________________00033198[0x1b];
    DAT_000c428c._0_1_ = s_________________________________00033198[0x1c];
    DAT_000c428c._1_1_ = s_________________________________00033198[0x1d];
    DAT_000c428c._2_1_ = s_________________________________00033198[0x1e];
    DAT_000c428c._3_1_ = s_________________________________00033198[0x1f];
    DAT_000c4290._0_2_ = (undefined2)ram0x000331b8;
    (*DAT_000d54ac)(&DAT_000441a0,&DAT_000c4270,0x21,0);
    UNRECOVERED_JUMPTABLE = DAT_000d54ac;
    uVar1 = FUN_0001b92c(DAT_000d42a0,&DAT_0003316c,0);
    uVar2 = FUN_0001b92c(DAT_000d42a0,0xfffffffe,&DAT_00033170);
    iVar3 = sprintf(DAT_00026104,DAT_00026108,uVar1,uVar2);
    (*UNRECOVERED_JUMPTABLE)(&DAT_000441a0,DAT_00026104,iVar3,0);
    UNRECOVERED_JUMPTABLE = DAT_000d54ac;
    uVar1 = FUN_0001b92c(DAT_00044244,&DAT_0003316c,&DAT_00033278);
    uVar2 = FUN_0001b92c(DAT_00044244,0xfffffffe,&DAT_00033170);
    uVar4 = FUN_0001b92c(DAT_00044248,&DAT_0003316c,&DAT_00033278);
    uVar5 = FUN_0001b92c(DAT_00044248,0xfffffffe,&DAT_00033170);
    iVar3 = sprintf(DAT_00026104,DAT_0002610c,uVar1,uVar2,uVar4,uVar5);
    (*UNRECOVERED_JUMPTABLE)(&DAT_000441a0,DAT_00026104,iVar3,0);
    UNRECOVERED_JUMPTABLE = DAT_000d54ac;
    if (DAT_000d430c == 0) {
      uVar1 = FUN_0001b92c(DAT_000d4308,0,&DAT_00033278);
      pcVar6 = "entries";
      if (DAT_000d4308 == 1) {
        pcVar6 = "entry";
      }
      uVar2 = FUN_0001b92c(DAT_000d42fc,0,&DAT_00033278);
      uVar4 = FUN_0001b92c(DAT_000d42fc,0xfffffffe,&DAT_00033170);
      iVar3 = sprintf(DAT_00026104,DAT_00026110,uVar1,pcVar6,uVar2,uVar4);
      (*UNRECOVERED_JUMPTABLE)(&DAT_000441a0,DAT_00026104,iVar3,0);
      UNRECOVERED_JUMPTABLE = DAT_000d54ac;
      uVar1 = FUN_0001b92c(DAT_000d4300,0,&DAT_00033278);
      uVar2 = FUN_0001b92c(DAT_000d4300,0xfffffffe,&DAT_00033170);
      iVar3 = sprintf(DAT_00026104,DAT_00026114,uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00025f98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(&DAT_000441a0,DAT_00026104,iVar3,0);
      return;
    }
    iVar3 = sprintf(DAT_00026104,DAT_00026118,DAT_000d430c + 1,DAT_000d430e + 1,uVar4,uVar5);
    (*UNRECOVERED_JUMPTABLE)(&DAT_000441a0,DAT_00026104,iVar3,0);
    UNRECOVERED_JUMPTABLE = DAT_000d54ac;
    uVar1 = FUN_0001b92c(DAT_000d4300,0,&DAT_00033278);
    uVar2 = FUN_0001b92c(DAT_000d4300,0xfffffffe,&DAT_00033170);
    uVar4 = FUN_0001b92c(DAT_000d42fc,0,&DAT_00033278);
    uVar5 = FUN_0001b92c(DAT_000d42fc,0xfffffffe,&DAT_00033170);
    iVar3 = sprintf(DAT_00026104,DAT_0002611c,uVar1,uVar2,uVar4,uVar5);
    (*UNRECOVERED_JUMPTABLE)(&DAT_000441a0,DAT_00026104,iVar3,0);
    UNRECOVERED_JUMPTABLE = DAT_000d54ac;
    uVar1 = FUN_0001b92c(DAT_000d4304,0,&DAT_00033278);
    pcVar6 = "are";
    if (DAT_000d4304 == 1) {
      pcVar6 = "is";
    }
    uVar2 = FUN_0001b92c(DAT_000d4308,0,&DAT_00033278);
    pcVar7 = "entries";
    if (DAT_000d4308 == 1) {
      pcVar7 = "entry";
    }
    iVar3 = sprintf(DAT_00026104,DAT_00026120,uVar1,pcVar6,uVar2,pcVar7);
                    /* WARNING: Could not recover jumptable at 0x000260fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(&DAT_000441a0,DAT_00026104,iVar3,0);
    return;
  }
  if (DAT_000441c4 == 0) {
    return;
  }
  uVar1 = FUN_0001b92c(DAT_000d42a0,0);
  uVar2 = FUN_0001b92c(DAT_000d4308,0,&DAT_00033278);
  iVar3 = sprintf(DAT_00026104,DAT_00026100,uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00025d14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(&DAT_000441a0,DAT_00026104,iVar3,0);
  return;
}



/* ===== FUN_00026124 @ 00026124 size=13744 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

int FUN_00026124(void)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  undefined3 uVar6;
  undefined1 uVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  void *__ptr;
  undefined1 *puVar12;
  int iVar13;
  undefined4 *puVar14;
  char *pcVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  size_t sVar18;
  undefined1 uVar19;
  undefined *puVar20;
  int iVar21;
  undefined1 uVar22;
  uint uVar23;
  undefined *puVar24;
  uint uVar25;
  uint uVar26;
  char *pcVar27;
  char *pcVar28;
  int iVar29;
  uint *puVar30;
  byte bVar31;
  code *pcVar32;
  uint uVar33;
  undefined *puVar34;
  byte *pbVar35;
  short *psVar36;
  char *pcVar37;
  uint uVar38;
  ushort *puVar39;
  undefined *puVar40;
  undefined *puVar41;
  char *pcVar42;
  int *piVar43;
  char *pcVar44;
  uint uVar45;
  byte *pbVar46;
  int iVar47;
  undefined *puVar48;
  undefined *puVar49;
  undefined *puVar50;
  bool bVar51;
  int local_104;
  uint local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  uint local_f0;
  void *local_e8;
  void *local_e4;
  char *local_c4;
  undefined8 local_b8;
  undefined1 local_b0 [2];
  undefined1 uStack_ae;
  undefined1 uStack_ad;
  undefined1 auStack_ac [4];
  undefined1 auStack_a8 [8];
  char cStack_a0;
  char local_9f [2];
  undefined1 local_9d;
  undefined4 local_90;
  undefined4 local_8c;
  uint local_88;
  undefined1 local_84;
  undefined1 local_83;
  undefined1 local_82;
  undefined1 local_81;
  undefined1 local_80;
  undefined1 local_7f;
  undefined1 local_7e;
  undefined1 local_7d;
  undefined1 local_7c;
  undefined8 local_78;
  char local_70 [8];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined2 local_5c;
  undefined1 local_5a;
  char local_58 [52];
  
  if ((DAT_00044228 == 0) || (local_e4 = calloc(DAT_00044228 << 2,1), local_e4 == (void *)0x0)) {
    local_e4 = (void *)0x0;
  }
  if ((DAT_0004422c == 0) || (local_e8 = calloc(DAT_0004422c << 2,1), local_e8 == (void *)0x0)) {
    local_e8 = (void *)0x0;
  }
  iVar10 = DAT_00027128;
  iVar47 = 1;
  local_100 = *(uint *)((int)DWORD_ARRAY_00010130 + DAT_00027128 + 8);
  if (local_100 != 4) {
    local_100 = 0;
  }
  DAT_00044284 = DAT_00044284 & 0xf7;
  local_f4 = 0;
  local_fc = 0;
  local_f8 = 0;
  *(undefined4 *)(DAT_00027128 + 0xcc) = DAT_0002712c;
  local_104 = 0;
  DAT_000441d4 = 0;
LAB_000261dc:
  iVar9 = FUN_00019870(DAT_00027130,4);
  iVar29 = DAT_000271a0;
  if (iVar9 != 0) {
    if ((((*DAT_00027130 != DAT_00044160) || (*DAT_00027134 != DAT_00044161)) ||
        (DAT_00027134[1] != DAT_00044162)) || (DAT_00027134[2] != DAT_00044163)) {
      uVar23 = iVar47 - 1;
      if (*(int *)((int)DWORD_ARRAY_00010130 + iVar10 + 0x40) == 0) {
        uVar23 = uVar23 & 0xffff;
      }
      iVar9 = local_104;
      if (*(uint *)((int)DWORD_ARRAY_00010130 + iVar10 + 0x38) != uVar23) {
        pcVar32 = *(code **)(DAT_000271a0 + 0x30c);
        iVar10 = sprintf(DAT_00027200,
                         "error:  expected central file header signature not found (file #%lu).\n",
                         iVar47);
        (*pcVar32)(iVar29 + -0x91000,DAT_00027200,iVar10,0x401);
        pcVar32 = *(code **)(iVar29 + 0x30c);
        iVar10 = sprintf(DAT_00027200,
                         "  (please check that you have transferred or created the zipfile in the\n  appropriate BINARY mode and that you have compiled UnZip properly)\n"
                        );
        (*pcVar32)(iVar29 + -0x91000,DAT_00027200,iVar10,0x401);
        if (local_e4 != (void *)0x0) {
          free(local_e4);
        }
        if (local_e8 == (void *)0x0) {
          s__00027120[0] = s__00027120[0];
          s__00027120[1] = s__00027120[1];
          s__00027120[2] = s__00027120[2];
          s__00027120[3] = s__00027120[3];
          s__00027120[4] = s__00027120[4];
          s__00027120[5] = s__00027120[5];
          s__00027120[6] = s__00027120[6];
          s__00027120[7] = s__00027120[7];
          s_The_central_directory_extra_fiel_000332bc[0] =
               (char)s_The_central_directory_extra_fiel_000332bc._0_4_;
          s_The_central_directory_extra_fiel_000332bc[1] =
               SUB41(s_The_central_directory_extra_fiel_000332bc._0_4_,1);
          s_The_central_directory_extra_fiel_000332bc[2] =
               SUB41(s_The_central_directory_extra_fiel_000332bc._0_4_,2);
          s_The_central_directory_extra_fiel_000332bc[3] =
               SUB41(s_The_central_directory_extra_fiel_000332bc._0_4_,3);
          s_The_central_directory_extra_fiel_000332bc[4] =
               (char)s_The_central_directory_extra_fiel_000332bc._4_4_;
          s_The_central_directory_extra_fiel_000332bc[5] =
               SUB41(s_The_central_directory_extra_fiel_000332bc._4_4_,1);
          s_The_central_directory_extra_fiel_000332bc[6] =
               SUB41(s_The_central_directory_extra_fiel_000332bc._4_4_,2);
          s_The_central_directory_extra_fiel_000332bc[7] =
               SUB41(s_The_central_directory_extra_fiel_000332bc._4_4_,3);
          s_The_central_directory_extra_fiel_000332bc[8] =
               (char)s_The_central_directory_extra_fiel_000332bc._8_4_;
          s_The_central_directory_extra_fiel_000332bc[9] =
               SUB41(s_The_central_directory_extra_fiel_000332bc._8_4_,1);
          s_The_central_directory_extra_fiel_000332bc[10] =
               SUB41(s_The_central_directory_extra_fiel_000332bc._8_4_,2);
          s_The_central_directory_extra_fiel_000332bc[0xb] =
               SUB41(s_The_central_directory_extra_fiel_000332bc._8_4_,3);
          s_The_central_directory_extra_fiel_000332bc[0xc] =
               (char)s_The_central_directory_extra_fiel_000332bc._12_4_;
          s_The_central_directory_extra_fiel_000332bc[0xd] =
               SUB41(s_The_central_directory_extra_fiel_000332bc._12_4_,1);
          s_The_central_directory_extra_fiel_000332bc[0xe] =
               SUB41(s_The_central_directory_extra_fiel_000332bc._12_4_,2);
          s_The_central_directory_extra_fiel_000332bc[0xf] =
               SUB41(s_The_central_directory_extra_fiel_000332bc._12_4_,3);
          s_The_central_directory_extra_fiel_000332bc[0x10] =
               (char)s_The_central_directory_extra_fiel_000332bc._16_4_;
          s_The_central_directory_extra_fiel_000332bc[0x11] =
               SUB41(s_The_central_directory_extra_fiel_000332bc._16_4_,1);
          s_The_central_directory_extra_fiel_000332bc[0x12] =
               SUB41(s_The_central_directory_extra_fiel_000332bc._16_4_,2);
          s_The_central_directory_extra_fiel_000332bc[0x13] =
               SUB41(s_The_central_directory_extra_fiel_000332bc._16_4_,3);
          s_The_central_directory_extra_fiel_000332bc[0x14] =
               (char)s_The_central_directory_extra_fiel_000332bc._20_4_;
          s_The_central_directory_extra_fiel_000332bc[0x15] =
               SUB41(s_The_central_directory_extra_fiel_000332bc._20_4_,1);
          s_The_central_directory_extra_fiel_000332bc[0x16] =
               SUB41(s_The_central_directory_extra_fiel_000332bc._20_4_,2);
          s_The_central_directory_extra_fiel_000332bc[0x17] =
               SUB41(s_The_central_directory_extra_fiel_000332bc._20_4_,3);
          s_The_central_directory_extra_fiel_000332bc[0x18] =
               (char)s_The_central_directory_extra_fiel_000332bc._24_4_;
          s_The_central_directory_extra_fiel_000332bc[0x19] =
               SUB41(s_The_central_directory_extra_fiel_000332bc._24_4_,1);
          s_The_central_directory_extra_fiel_000332bc[0x1a] =
               SUB41(s_The_central_directory_extra_fiel_000332bc._24_4_,2);
          s_The_central_directory_extra_fiel_000332bc[0x1b] =
               SUB41(s_The_central_directory_extra_fiel_000332bc._24_4_,3);
          s_The_central_directory_extra_fiel_000332bc[0x1c] =
               (char)s_The_central_directory_extra_fiel_000332bc._28_4_;
          s_The_central_directory_extra_fiel_000332bc[0x1d] =
               SUB41(s_The_central_directory_extra_fiel_000332bc._28_4_,1);
          s_The_central_directory_extra_fiel_000332bc[0x1e] =
               SUB41(s_The_central_directory_extra_fiel_000332bc._28_4_,2);
          s_The_central_directory_extra_fiel_000332bc[0x1f] =
               SUB41(s_The_central_directory_extra_fiel_000332bc._28_4_,3);
          s_The_central_directory_extra_fiel_000332bc[0x20] =
               (char)s_The_central_directory_extra_fiel_000332bc._32_4_;
          s_The_central_directory_extra_fiel_000332bc[0x21] =
               SUB41(s_The_central_directory_extra_fiel_000332bc._32_4_,1);
          s_The_central_directory_extra_fiel_000332bc[0x22] =
               SUB41(s_The_central_directory_extra_fiel_000332bc._32_4_,2);
          s_The_central_directory_extra_fiel_000332bc[0x23] =
               SUB41(s_The_central_directory_extra_fiel_000332bc._32_4_,3);
          s_The_central_directory_extra_fiel_000332bc[0x24] =
               (char)s_The_central_directory_extra_fiel_000332bc._36_4_;
          s_The_central_directory_extra_fiel_000332bc[0x25] =
               SUB41(s_The_central_directory_extra_fiel_000332bc._36_4_,1);
          s_The_central_directory_extra_fiel_000332bc[0x26] =
               SUB41(s_The_central_directory_extra_fiel_000332bc._36_4_,2);
          s_The_central_directory_extra_fiel_000332bc[0x27] =
               SUB41(s_The_central_directory_extra_fiel_000332bc._36_4_,3);
          s_The_central_directory_extra_fiel_000332bc[0x28] =
               (char)s_The_central_directory_extra_fiel_000332bc._40_4_;
          s_The_central_directory_extra_fiel_000332bc[0x29] =
               SUB41(s_The_central_directory_extra_fiel_000332bc._40_4_,1);
          s_The_central_directory_extra_fiel_000332bc[0x2a] =
               SUB41(s_The_central_directory_extra_fiel_000332bc._40_4_,2);
          s_The_central_directory_extra_fiel_000332bc[0x2b] =
               SUB41(s_The_central_directory_extra_fiel_000332bc._40_4_,3);
          s_access_000332ec[0] = (char)s_access_000332ec._0_4_;
          s_access_000332ec[1] = SUB41(s_access_000332ec._0_4_,1);
          s_access_000332ec[2] = SUB41(s_access_000332ec._0_4_,2);
          s_access_000332ec[3] = SUB41(s_access_000332ec._0_4_,3);
          s_access_000332ec[4] = (char)s_access_000332ec._4_2_;
          s_access_000332ec[5] = SUB21(s_access_000332ec._4_2_,1);
          s___The_first_20_are__000332f4[0] = (char)s___The_first_20_are__000332f4._0_4_;
          s___The_first_20_are__000332f4[1] = SUB41(s___The_first_20_are__000332f4._0_4_,1);
          s___The_first_20_are__000332f4[2] = SUB41(s___The_first_20_are__000332f4._0_4_,2);
          s___The_first_20_are__000332f4[3] = SUB41(s___The_first_20_are__000332f4._0_4_,3);
          s___The_first_20_are__000332f4[4] = (char)s___The_first_20_are__000332f4._4_4_;
          s___The_first_20_are__000332f4[5] = SUB41(s___The_first_20_are__000332f4._4_4_,1);
          s___The_first_20_are__000332f4[6] = SUB41(s___The_first_20_are__000332f4._4_4_,2);
          s___The_first_20_are__000332f4[7] = SUB41(s___The_first_20_are__000332f4._4_4_,3);
          s___The_first_20_are__000332f4[8] = (char)s___The_first_20_are__000332f4._8_4_;
          s___The_first_20_are__000332f4[9] = SUB41(s___The_first_20_are__000332f4._8_4_,1);
          s___The_first_20_are__000332f4[10] = SUB41(s___The_first_20_are__000332f4._8_4_,2);
          s___The_first_20_are__000332f4[0xb] = SUB41(s___The_first_20_are__000332f4._8_4_,3);
          s___The_first_20_are__000332f4[0xc] = (char)s___The_first_20_are__000332f4._12_4_;
          s___The_first_20_are__000332f4[0xd] = SUB41(s___The_first_20_are__000332f4._12_4_,1);
          s___The_first_20_are__000332f4[0xe] = SUB41(s___The_first_20_are__000332f4._12_4_,2);
          s___The_first_20_are__000332f4[0xf] = SUB41(s___The_first_20_are__000332f4._12_4_,3);
          s___The_first_20_are__000332f4[0x10] = (char)s___The_first_20_are__000332f4._16_4_;
          s___The_first_20_are__000332f4[0x11] = SUB41(s___The_first_20_are__000332f4._16_4_,1);
          s___The_first_20_are__000332f4[0x12] = SUB41(s___The_first_20_are__000332f4._16_4_,2);
          s___The_first_20_are__000332f4[0x13] = SUB41(s___The_first_20_are__000332f4._16_4_,3);
          s___The_first_20_are__000332f4[0x14] = (char)s___The_first_20_are__000332f4._20_4_;
          s___The_first_20_are__000332f4[0x15] = SUB41(s___The_first_20_are__000332f4._20_4_,1);
          s___The_first_20_are__000332f4[0x16] = SUB41(s___The_first_20_are__000332f4._20_4_,2);
          s___The_first_20_are__000332f4[0x17] = SUB41(s___The_first_20_are__000332f4._20_4_,3);
          s_There_is_no_file_comment__00033318[0] = (char)s_There_is_no_file_comment__00033318._0_4_
          ;
          s_There_is_no_file_comment__00033318[1] =
               SUB41(s_There_is_no_file_comment__00033318._0_4_,1);
          s_There_is_no_file_comment__00033318[2] =
               SUB41(s_There_is_no_file_comment__00033318._0_4_,2);
          s_There_is_no_file_comment__00033318[3] =
               SUB41(s_There_is_no_file_comment__00033318._0_4_,3);
          s_There_is_no_file_comment__00033318[4] = (char)s_There_is_no_file_comment__00033318._4_4_
          ;
          s_There_is_no_file_comment__00033318[5] =
               SUB41(s_There_is_no_file_comment__00033318._4_4_,1);
          s_There_is_no_file_comment__00033318[6] =
               SUB41(s_There_is_no_file_comment__00033318._4_4_,2);
          s_There_is_no_file_comment__00033318[7] =
               SUB41(s_There_is_no_file_comment__00033318._4_4_,3);
          s_There_is_no_file_comment__00033318[8] = (char)s_There_is_no_file_comment__00033318._8_4_
          ;
          s_There_is_no_file_comment__00033318[9] =
               SUB41(s_There_is_no_file_comment__00033318._8_4_,1);
          s_There_is_no_file_comment__00033318[10] =
               SUB41(s_There_is_no_file_comment__00033318._8_4_,2);
          s_There_is_no_file_comment__00033318[0xb] =
               SUB41(s_There_is_no_file_comment__00033318._8_4_,3);
          s_There_is_no_file_comment__00033318[0xc] =
               (char)s_There_is_no_file_comment__00033318._12_4_;
          s_There_is_no_file_comment__00033318[0xd] =
               SUB41(s_There_is_no_file_comment__00033318._12_4_,1);
          s_There_is_no_file_comment__00033318[0xe] =
               SUB41(s_There_is_no_file_comment__00033318._12_4_,2);
          s_There_is_no_file_comment__00033318[0xf] =
               SUB41(s_There_is_no_file_comment__00033318._12_4_,3);
          s_There_is_no_file_comment__00033318[0x10] =
               (char)s_There_is_no_file_comment__00033318._16_4_;
          s_There_is_no_file_comment__00033318[0x11] =
               SUB41(s_There_is_no_file_comment__00033318._16_4_,1);
          s_There_is_no_file_comment__00033318[0x12] =
               SUB41(s_There_is_no_file_comment__00033318._16_4_,2);
          s_There_is_no_file_comment__00033318[0x13] =
               SUB41(s_There_is_no_file_comment__00033318._16_4_,3);
          s_There_is_no_file_comment__00033318[0x14] =
               (char)s_There_is_no_file_comment__00033318._20_4_;
          s_There_is_no_file_comment__00033318[0x15] =
               SUB41(s_There_is_no_file_comment__00033318._20_4_,1);
          s_There_is_no_file_comment__00033318[0x16] =
               SUB41(s_There_is_no_file_comment__00033318._20_4_,2);
          s_There_is_no_file_comment__00033318[0x17] =
               SUB41(s_There_is_no_file_comment__00033318._20_4_,3);
          s_There_is_no_file_comment__00033318[0x18] =
               (char)s_There_is_no_file_comment__00033318._24_4_;
          s_There_is_no_file_comment__00033318[0x19] =
               SUB41(s_There_is_no_file_comment__00033318._24_4_,1);
          s_There_is_no_file_comment__00033318[0x1a] =
               SUB41(s_There_is_no_file_comment__00033318._24_4_,2);
          s_There_is_no_file_comment__00033318[0x1b] =
               SUB41(s_There_is_no_file_comment__00033318._24_4_,3);
          s_modification_000333d4[0] = (char)s_modification_000333d4._0_4_;
          s_modification_000333d4[1] = SUB41(s_modification_000333d4._0_4_,1);
          s_modification_000333d4[2] = SUB41(s_modification_000333d4._0_4_,2);
          s_modification_000333d4[3] = SUB41(s_modification_000333d4._0_4_,3);
          s_modification_000333d4[4] = (char)s_modification_000333d4._4_4_;
          s_modification_000333d4[5] = SUB41(s_modification_000333d4._4_4_,1);
          s_modification_000333d4[6] = SUB41(s_modification_000333d4._4_4_,2);
          s_modification_000333d4[7] = SUB41(s_modification_000333d4._4_4_,3);
          s_modification_000333d4[8] = (char)s_modification_000333d4._8_4_;
          s_modification_000333d4[9] = SUB41(s_modification_000333d4._8_4_,1);
          s_modification_000333d4[10] = SUB41(s_modification_000333d4._8_4_,2);
          s_modification_000333d4[0xb] = SUB41(s_modification_000333d4._8_4_,3);
          s_creation_000333e4[0] = (char)s_creation_000333e4._0_4_;
          s_creation_000333e4[1] = SUB41(s_creation_000333e4._0_4_,1);
          s_creation_000333e4[2] = SUB41(s_creation_000333e4._0_4_,2);
          s_creation_000333e4[3] = SUB41(s_creation_000333e4._0_4_,3);
          s_creation_000333e4[4] = (char)s_creation_000333e4._4_4_;
          s_creation_000333e4[5] = SUB41(s_creation_000333e4._4_4_,1);
          s_creation_000333e4[6] = SUB41(s_creation_000333e4._4_4_,2);
          s_creation_000333e4[7] = SUB41(s_creation_000333e4._4_4_,3);
          return 3;
        }
        free(local_e8);
        return 3;
      }
      goto LAB_0002880c;
    }
    iVar9 = FUN_00023978();
    if (iVar9 != 0) goto LAB_0002880c;
    iVar29 = FUN_0001b094(*(undefined2 *)((int)DWORD_ARRAY_00010130 + iVar10 + 0x24),2);
    uVar16 = DAT_00027138;
    if (iVar29 != 0) {
      if (local_104 < iVar29) {
        local_104 = iVar29;
      }
      iVar9 = local_104;
      if (1 < iVar29) goto LAB_0002880c;
    }
    if (DAT_00044230 != 0) {
LAB_000265f4:
      sVar8 = *(short *)((int)DWORD_ARRAY_00010130 + iVar10 + 0x26);
LAB_000265fc:
      iVar29 = FUN_0001b094(sVar8,3);
      if ((iVar29 != 0) &&
         (__ptr = *(void **)((int)&Elf32_Phdr_ARRAY_00010034[6].p_flags + iVar10),
         local_104 = iVar29, __ptr != (void *)0x0)) {
        free(__ptr);
        *(undefined4 *)((int)&Elf32_Phdr_ARRAY_00010034[6].p_flags + iVar10) = 0;
      }
      iVar11 = DAT_000271a0;
      switch(DAT_000441d0) {
      case 1:
      case 2:
        FUN_00021628();
        sVar8 = *(short *)((int)DWORD_ARRAY_00010130 + iVar10 + 0x28);
        break;
      case 3:
      case 4:
      case 5:
        uVar26 = (uint)*(ushort *)((int)DWORD_ARRAY_00010130 + iVar10 + 0x22);
        uVar23 = FUN_00015a5c(uVar26);
        uVar25 = (uint)*(byte *)(*(int *)(DAT_00027128 + 0xcc) + 0x13);
        uVar33 = (uint)*(byte *)(*(int *)(DAT_00027128 + 0xcc) + 0x12);
        strcpy(&cStack_a0,(char *)(DAT_0002719c + uVar23 * 5));
        if (uVar26 == 6) {
          uVar3 = *(ushort *)((int)DWORD_ARRAY_00010130 + iVar10 + 0x20);
          if ((uVar3 & 2) == 0) {
            local_9f[0] = '4';
          }
          else {
            local_9f[0] = '8';
          }
          if ((uVar3 & 4) == 0) {
            local_9d = 0x32;
          }
          else {
            local_9d = 0x33;
          }
        }
        else if (uVar26 - 8 < 2) {
          local_9d = (&DAT_0003202c)
                     [(*(ushort *)((int)DWORD_ARRAY_00010130 + iVar10 + 0x20) & 7) >> 1];
        }
        else if (0x10 < uVar23) {
          sprintf(local_9f,"%03u",(uint)*(ushort *)((int)DWORD_ARRAY_00010130 + iVar10 + 0x22));
        }
        uVar23 = *(uint *)((int)DWORD_ARRAY_00010130 + iVar10 + 0x14) >> 0x10;
        local_78 = DAT_00027118;
        local_70[0] = s__00027120[0];
        local_70[1] = s__00027120[1];
        local_70[2] = s__00027120[2];
        local_70[3] = s__00027120[3];
        local_70[4] = s__00027120[4];
        local_70[5] = s__00027120[5];
        local_70[6] = s__00027120[6];
        local_70[7] = s__00027120[7];
                    /* WARNING: Could not recover jumptable at 0x00027034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        if (uVar25 < 0x13) {
          iVar10 = (*(code *)(&switchD_00027034::switchdataD_0002703c)[uVar25])();
          return iVar10;
        }
        uVar26 = uVar23 & 0xf000;
        if (uVar26 == 0x6000) {
          uVar22 = 0x62;
        }
        else if (uVar26 < 0x6001) {
          if (uVar26 == 0x2000) {
            uVar22 = 99;
          }
          else if (uVar26 == 0x4000) {
            uVar22 = 100;
          }
          else if (uVar26 == 0x1000) {
            uVar22 = 0x70;
          }
          else {
LAB_000277cc:
            uVar22 = 0x3f;
          }
        }
        else if (uVar26 == 0xa000) {
          uVar22 = 0x6c;
        }
        else if (uVar26 == 0xc000) {
          uVar22 = 0x73;
        }
        else {
          if (uVar26 != 0x8000) goto LAB_000277cc;
          uVar22 = 0x2d;
        }
        if ((uVar23 & 0x100) == 0) {
          uVar7 = 0x2d;
        }
        else {
          uVar7 = 0x72;
        }
        local_78._0_2_ = CONCAT11(uVar7,uVar22);
        uVar5 = (undefined2)local_78;
        if ((uVar23 & 0x20) == 0) {
          bVar31 = 0x2d;
        }
        else {
          bVar31 = 0x72;
        }
        if ((uVar23 & 4) == 0) {
          uVar22 = 0x2d;
        }
        else {
          uVar22 = 0x72;
        }
        local_78 = CONCAT17(uVar22,(uint7)bVar31 << 0x20);
        if ((uVar23 & 0x80) == 0) {
          uVar7 = 0x2d;
        }
        else {
          uVar7 = 0x77;
        }
        local_78._0_3_ = CONCAT12(uVar7,uVar5);
        uVar6 = (undefined3)local_78;
        if ((uVar23 & 0x10) == 0) {
          uVar7 = 0x2d;
        }
        else {
          uVar7 = 0x77;
        }
        local_78._0_6_ = CONCAT15(uVar7,(undefined5)local_78);
        if ((uVar23 & 2) == 0) {
          local_70[0] = 0x2d;
        }
        else {
          local_70[0] = 0x77;
        }
        if ((uVar23 & 0x40) == 0) {
          if ((uVar23 & 0x800) == 0) {
            uVar7 = 0x2d;
          }
          else {
            uVar7 = 0x53;
          }
        }
        else if ((uVar23 & 0x800) == 0) {
          uVar7 = 0x78;
        }
        else {
          uVar7 = 0x73;
        }
        if ((uVar23 & 8) == 0) {
          if ((uVar23 & 0x400) == 0) {
            uVar19 = 0x2d;
          }
          else {
            uVar19 = 0x53;
          }
        }
        else if ((uVar23 & 0x400) == 0) {
          uVar19 = 0x78;
        }
        else {
          uVar19 = 0x73;
        }
        local_78 = CONCAT17(uVar22,CONCAT16(uVar19,CONCAT24((short)((uint6)(undefined6)local_78 >>
                                                                   0x20),CONCAT13(uVar7,uVar6))));
        local_70._2_6_ = s__00027120._2_6_;
        if ((uVar23 & 1) == 0) {
          if ((uVar23 & 0x200) == 0) {
            local_70[1] = 0x2d;
          }
          else {
            local_70[1] = 0x54;
          }
        }
        else if ((uVar23 & 0x200) == 0) {
          local_70[1] = 0x78;
        }
        else {
          local_70[1] = 0x74;
        }
        sprintf(local_70 + 4,"%u.%u",uVar33 / 10,uVar33 % 10);
        iVar29 = DAT_000271a0;
        pcVar32 = *(code **)(DAT_000271a0 + 0x30c);
        uVar16 = FUN_0001b92c(*(undefined4 *)((int)DWORD_ARRAY_00010130 + iVar10 + 4),&DAT_0002c96c,
                              &DAT_00033278);
        iVar9 = sprintf(DAT_00027200,"%s %s %s ",&local_78,DAT_000271a4 + uVar25 * 4,uVar16);
        (*pcVar32)(iVar29 + -0x91000,DAT_00027200,iVar9,0);
        pcVar32 = *(code **)(iVar29 + 0x30c);
        sprintf(DAT_00027200,"%c");
        (*pcVar32)(&DAT_000441a0,DAT_00027200,1,0);
        if (*(short *)((int)DWORD_ARRAY_00010130 + iVar10 + 0x26) == 0) {
          pcVar32 = *(code **)(iVar29 + 0x30c);
        }
        else {
          pcVar32 = *(code **)(iVar29 + 0x30c);
        }
        sprintf(DAT_00027200,"%c");
        (*pcVar32)(&DAT_000441a0,DAT_00027200,1,0);
        if (DAT_000441d0 == 4) {
          iVar9 = *(int *)((int)DWORD_ARRAY_00010130 + iVar10);
          pcVar32 = *(code **)(iVar29 + 0x30c);
          if ((*(ushort *)((int)DWORD_ARRAY_00010130 + iVar10 + 0x20) & 1) != 0) {
            iVar9 = iVar9 + -0xc;
          }
          iVar9 = FUN_00021588(*(undefined4 *)((int)DWORD_ARRAY_00010130 + iVar10 + 4),iVar9);
          pcVar44 = "%3d%%";
          iVar9 = (iVar9 + 5) / 10;
LAB_000283dc:
          iVar9 = sprintf(DAT_00029204,pcVar44,iVar9);
          (*pcVar32)(&DAT_000441a0,DAT_00029204,iVar9,0);
        }
        else if (DAT_000441d0 == 5) {
          pcVar32 = *(code **)(iVar29 + 0x30c);
          iVar9 = FUN_0001b92c(*(undefined4 *)((int)DWORD_ARRAY_00010130 + iVar10),&DAT_0002c96c,
                               &DAT_00033278);
          pcVar44 = " %s";
          goto LAB_000283dc;
        }
        iVar9 = *(int *)((int)&Elf32_Phdr_ARRAY_00010034[6].p_flags + iVar10);
        if ((iVar9 == 0) ||
           (uVar23 = FUN_0002429c(iVar9,*(undefined2 *)((int)DWORD_ARRAY_00010130 + iVar10 + 0x26),1
                                  ,*(undefined4 *)((int)DWORD_ARRAY_00010130 + iVar10 + 0xc),
                                  &local_90,0), (uVar23 & 1) == 0)) {
          puVar14 = (undefined4 *)0x0;
        }
        else {
          puVar14 = &local_8c;
        }
        pcVar32 = *(code **)(iVar29 + 0x30c);
        local_78 = local_78 & 0xffffffffffffff00;
        uVar16 = FUN_000254f4(puVar14,&local_78);
        iVar29 = sprintf(DAT_00027200," %s %s ",&cStack_a0,uVar16);
        (*pcVar32)(&DAT_000441a0,DAT_00027200,iVar29,0);
        FUN_00021628();
        sVar8 = *(short *)((int)DWORD_ARRAY_00010130 + iVar10 + 0x28);
        if (sVar8 != 0) {
          iVar29 = FUN_0001b094(sVar8,0);
          goto joined_r0x00027ed8;
        }
        goto LAB_000270a4;
      default:
        sVar8 = *(short *)((int)DWORD_ARRAY_00010130 + iVar10 + 0x28);
        break;
      case 10:
        pcVar32 = *(code **)(DAT_000271a0 + 0x30c);
        iVar29 = sprintf(DAT_00027200,DAT_0002713c,iVar47);
        (*pcVar32)(iVar11 + -0x91000,DAT_00027200,iVar29,0);
        uVar23 = *(uint *)((int)DWORD_ARRAY_00010130 + iVar10 + 8);
        if (uVar23 != local_100 && local_100 != 0) {
          pcVar32 = *(code **)(iVar11 + 0x30c);
          uVar16 = FUN_0001b92c(uVar23 - local_100,0);
          iVar29 = sprintf(DAT_00029204,DAT_00029248,uVar16);
          (*pcVar32)(iVar11 + -0x91000,DAT_00029204,iVar29,0);
          uVar23 = *(uint *)((int)DWORD_ARRAY_00010130 + iVar10 + 8);
        }
        uVar45 = (uint)*(ushort *)((int)DWORD_ARRAY_00010130 + iVar10 + 0x22);
        local_100 = *(int *)((int)DWORD_ARRAY_00010130 + iVar10) + 0x1e +
                    (uint)*(ushort *)((int)DWORD_ARRAY_00010130 + iVar10 + 0x24) +
                    (uint)*(ushort *)((int)DWORD_ARRAY_00010130 + iVar10 + 0x26) + uVar23;
        uVar25 = (uint)*(byte *)((int)DWORD_ARRAY_00010130 + iVar10 + 0x1f);
        uVar33 = (uint)*(byte *)((int)DWORD_ARRAY_00010130 + iVar10 + 0x1e);
        uVar38 = (uint)*(byte *)(*(int *)(DAT_00027128 + 0xcc) + 0x12);
        uVar26 = (uint)*(byte *)(*(int *)(DAT_00027128 + 0xcc) + 0x13);
        uVar23 = FUN_00015a5c(uVar45);
        (**(code **)(iVar11 + 0x30c))(&DAT_000441a0,"  ",2,0);
        FUN_00021628();
        pcVar32 = *(code **)(iVar11 + 0x30c);
        uVar16 = FUN_0001b92c(*(undefined4 *)((int)DWORD_ARRAY_00010130 + iVar10 + 8),0,
                              &DAT_00033278);
        uVar17 = FUN_0001b92c(*(undefined4 *)((int)DWORD_ARRAY_00010130 + iVar10 + 8),0xfffffffe,
                              &DAT_00033170);
        iVar29 = sprintf(DAT_00027200,DAT_00027140,uVar16,uVar17);
        (*pcVar32)(&DAT_000441a0,DAT_00027200,iVar29,0);
        if (uVar26 < 0x1f) {
          pcVar44 = (&PTR_s_MS_DOS__OS_2_or_NT_FAT_00032188)[uVar26];
        }
        else {
          sprintf(&cStack_a0,DAT_00029220,(uint)*(byte *)((int)DWORD_ARRAY_00010130 + iVar10 + 0x1d)
                 );
          pcVar44 = &cStack_a0;
        }
        pcVar32 = *(code **)(iVar11 + 0x30c);
        iVar29 = sprintf(DAT_00027200,DAT_00027144,pcVar44);
        (*pcVar32)(&DAT_000441a0,DAT_00027200,iVar29,0);
        pcVar32 = *(code **)(iVar11 + 0x30c);
        iVar29 = sprintf(DAT_00027200,DAT_00027148,uVar38 / 10,uVar38 % 10);
        (*pcVar32)(&DAT_000441a0,DAT_00027200,iVar29,0);
        if ((0x1e < uVar25) ||
           (pcVar44 = (&PTR_s_MS_DOS__OS_2_or_NT_FAT_00032188)[uVar25], pcVar44 == (char *)0x0)) {
          sprintf(&cStack_a0,DAT_00029220,(uint)*(byte *)((int)DWORD_ARRAY_00010130 + iVar10 + 0x1f)
                 );
          pcVar44 = &cStack_a0;
        }
        pcVar32 = *(code **)(iVar11 + 0x30c);
        iVar29 = sprintf(DAT_00027200,DAT_0002714c,pcVar44);
        (*pcVar32)(&DAT_000441a0,DAT_00027200,iVar29,0);
        pcVar32 = *(code **)(iVar11 + 0x30c);
        iVar29 = sprintf(DAT_00027200,DAT_00027150,uVar33 / 10,uVar33 % 10);
        (*pcVar32)(&DAT_000441a0,DAT_00027200,iVar29,0);
        if (uVar23 < 0x11) {
          pcVar44 = (&PTR_s_none__stored__000322f8)[uVar23];
        }
        else {
          sprintf(&cStack_a0,DAT_00029220,
                  (uint)*(ushort *)((int)DWORD_ARRAY_00010130 + iVar10 + 0x22));
          pcVar44 = &cStack_a0;
        }
        pcVar32 = *(code **)(iVar11 + 0x30c);
        iVar29 = sprintf(DAT_00027200,DAT_00027154,pcVar44);
        (*pcVar32)(&DAT_000441a0,DAT_00027200,iVar29,0);
        if (uVar45 == 6) {
          puVar39 = (ushort *)((int)DWORD_ARRAY_00010130 + iVar10 + 0x20);
          pcVar32 = *(code **)(iVar11 + 0x30c);
          if ((*puVar39 & 2) == 0) {
            uVar16 = 0x34;
          }
          else {
            uVar16 = 0x38;
          }
          sprintf(DAT_00029204,DAT_00029228,uVar16);
          (*pcVar32)(&DAT_000441a0,DAT_00029204,0x35,0);
          pcVar32 = *(code **)(iVar11 + 0x30c);
          if ((*puVar39 & 4) == 0) {
            uVar16 = 0x32;
          }
          else {
            uVar16 = 0x33;
          }
          sprintf(DAT_00029204,DAT_0002922c,uVar16);
          (*pcVar32)(&DAT_000441a0,DAT_00029204,0x34,0);
          uVar23 = (uint)*puVar39;
          pcVar32 = *(code **)(iVar11 + 0x30c);
        }
        else {
          puVar39 = (ushort *)((int)DWORD_ARRAY_00010130 + iVar10 + 0x20);
          pcVar32 = *(code **)(iVar11 + 0x30c);
          uVar23 = (uint)*puVar39;
          if (uVar45 - 8 < 2) {
            iVar29 = sprintf(DAT_00029204,DAT_00029258,(&PTR_s_normal_000323e8)[(uVar23 & 7) >> 1]);
            (*pcVar32)(&DAT_000441a0,DAT_00029204,iVar29,0);
            uVar23 = (uint)*puVar39;
            pcVar32 = *(code **)(iVar11 + 0x30c);
          }
        }
        puVar41 = DAT_00027158;
        puVar24 = &DAT_000331bc;
        if ((uVar23 & 1) != 0) {
          puVar24 = DAT_00027158;
        }
        iVar29 = sprintf(DAT_00027200,DAT_0002715c,puVar24);
        (*pcVar32)(&DAT_000441a0,DAT_00027200,iVar29,0);
        pcVar32 = *(code **)(iVar11 + 0x30c);
        puVar24 = &DAT_000331c4;
        if ((*(ushort *)((int)DWORD_ARRAY_00010130 + iVar10 + 0x20) & 8) == 0) {
          puVar24 = &DAT_000331c8;
        }
        iVar29 = sprintf(DAT_00027200,DAT_00027160,puVar24);
        (*pcVar32)(&DAT_000441a0,DAT_00027200,iVar29,0);
        FUN_000254f4(0,&local_90);
        pcVar32 = *(code **)(iVar11 + 0x30c);
        iVar29 = sprintf(DAT_00027200,puVar41 + 0x8b0,&local_90);
        (*pcVar32)(&DAT_000441a0,DAT_00027200,iVar29,0);
        iVar29 = *(int *)((int)&Elf32_Phdr_ARRAY_00010034[6].p_flags + iVar10);
        if ((iVar29 != 0) &&
           (uVar23 = FUN_0002429c(iVar29,*(undefined2 *)((int)DWORD_ARRAY_00010130 + iVar10 + 0x26),
                                  1,*(undefined4 *)((int)DWORD_ARRAY_00010130 + iVar10 + 0xc),
                                  auStack_ac,0), (uVar23 & 1) != 0)) {
          local_90 = local_90 & 0xffffff00;
          FUN_000254f4(auStack_a8,&local_90);
          pcVar32 = *(code **)(iVar11 + 0x30c);
          iVar29 = sprintf(DAT_00029204,puVar41 + 0x8f0,&local_90,DAT_00029254);
          (*pcVar32)(&DAT_000441a0,DAT_00029204,iVar29,0);
          local_90 = CONCAT31(local_90._1_3_,1);
          FUN_000254f4(auStack_a8,&local_90);
          pcVar32 = *(code **)(iVar11 + 0x30c);
          iVar29 = sprintf(DAT_00029204,puVar41 + 0x8f0,&local_90,puVar41 + 0x92c);
          (*pcVar32)(&DAT_000441a0,DAT_00029204,iVar29,0);
        }
        pcVar32 = *(code **)(iVar11 + 0x30c);
        sprintf(DAT_00027200,DAT_00027164,*(undefined4 *)((int)DWORD_ARRAY_00010130 + iVar10 + 0x10)
               );
        (*pcVar32)(&DAT_000441a0,DAT_00027200,0x3b,0);
        pcVar32 = *(code **)(iVar11 + 0x30c);
        uVar16 = FUN_0001b92c(*(undefined4 *)((int)DWORD_ARRAY_00010130 + iVar10),0,&DAT_00033278);
        iVar29 = sprintf(DAT_00027200,DAT_00027168,uVar16);
        (*pcVar32)(&DAT_000441a0,DAT_00027200,iVar29,0);
        pcVar32 = *(code **)(iVar11 + 0x30c);
        uVar16 = FUN_0001b92c(*(undefined4 *)((int)DWORD_ARRAY_00010130 + iVar10 + 4),0,
                              &DAT_00033278);
        iVar29 = sprintf(DAT_00027200,DAT_0002716c,uVar16);
        (*pcVar32)(&DAT_000441a0,DAT_00027200,iVar29,0);
        pcVar32 = *(code **)(iVar11 + 0x30c);
        iVar29 = sprintf(DAT_00027200,DAT_00027170,
                         (uint)*(ushort *)((int)DWORD_ARRAY_00010130 + iVar10 + 0x24));
        (*pcVar32)(&DAT_000441a0,DAT_00027200,iVar29,0);
        pcVar32 = *(code **)(iVar11 + 0x30c);
        iVar29 = sprintf(DAT_00027200,DAT_00027174,
                         (uint)*(ushort *)((int)DWORD_ARRAY_00010130 + iVar10 + 0x26));
        (*pcVar32)(&DAT_000441a0,DAT_00027200,iVar29,0);
        pcVar32 = *(code **)(iVar11 + 0x30c);
        iVar29 = sprintf(DAT_00027200,DAT_00027178,
                         (uint)*(ushort *)((int)DWORD_ARRAY_00010130 + iVar10 + 0x28));
        (*pcVar32)(&DAT_000441a0,DAT_00027200,iVar29,0);
        pcVar32 = *(code **)(iVar11 + 0x30c);
        iVar29 = sprintf(DAT_00027200,DAT_0002717c,
                         *(ushort *)((int)DWORD_ARRAY_00010130 + iVar10 + 0x18) + 1);
        (*pcVar32)(&DAT_000441a0,DAT_00027200,iVar29,0);
        pcVar32 = *(code **)(iVar11 + 0x30c);
        iVar29 = sprintf(DAT_00027200,DAT_00027180);
        (*pcVar32)(&DAT_000441a0,DAT_00027200,iVar29,0);
        uVar25 = *(uint *)((int)DWORD_ARRAY_00010130 + iVar10 + 0x14);
        uVar23 = uVar25 >> 0x10;
        if (uVar26 == 2) {
          bVar51 = (uVar23 & 0x100) != 0;
          bVar31 = 0;
          _local_b0 = 0;
          if (bVar51) {
            bVar31 = 0x52;
          }
          pcVar44 = (char *)((int)&local_90 + 1);
          local_b8 = 0;
          pcVar42 = (char *)&local_b8;
          if (bVar51) {
            local_b8 = (ulonglong)bVar31;
          }
          iVar29 = 0;
          if ((uVar23 & 0x80) != 0) {
            local_b8._0_2_ = CONCAT11(0x57,(char)local_b8);
            local_b8._0_3_ = (uint3)(ushort)local_b8;
            local_b8._0_4_ = CONCAT13(0x44,(uint3)local_b8);
            local_b8 = (ulonglong)(uint)local_b8;
          }
          if ((uVar23 & 0x40) != 0) {
            local_b8._0_3_ = CONCAT12(0x45,(ushort)local_b8);
          }
          if ((uVar23 & 0x20) != 0) {
            local_b8._0_5_ = CONCAT14(0x52,(uint)local_b8);
            local_b8 = (ulonglong)(uint5)local_b8;
          }
          if ((uVar23 & 0x10) != 0) {
            local_b8._0_6_ = CONCAT15(0x57,(uint5)local_b8);
            local_b8._0_7_ = (uint7)(uint6)local_b8;
            local_b8 = CONCAT17(0x44,(uint7)local_b8);
          }
          if ((uVar23 & 8) != 0) {
            local_b8._0_7_ = CONCAT16(0x45,(uint6)local_b8);
          }
          if ((uVar23 & 4) != 0) {
            _local_b0 = 0x52;
          }
          if ((uVar23 & 2) != 0) {
            local_b0 = (undefined1  [2])CONCAT11(0x57,local_b0[0]);
            _local_b0 = CONCAT12(0,local_b0);
            _local_b0 = CONCAT13(0x44,_local_b0);
          }
          if ((uVar23 & 1) != 0) {
            _local_b0 = CONCAT12(0x45,local_b0);
          }
          local_90 = CONCAT31(local_90._1_3_,0x28);
          pcVar15 = pcVar44;
          do {
            pcVar37 = pcVar44 + 1;
            if (*pcVar42 != '\0') {
              pcVar37 = pcVar44 + 2;
              *pcVar44 = *pcVar42;
              pcVar44 = pcVar44 + 1;
            }
            cVar1 = pcVar42[1];
            if (cVar1 != '\0') {
              *pcVar44 = cVar1;
            }
            cVar2 = pcVar42[2];
            pcVar27 = pcVar37;
            if (cVar1 != '\0') {
              pcVar27 = pcVar37 + 1;
              pcVar44 = pcVar37;
            }
            if (cVar2 != '\0') {
              *pcVar44 = cVar2;
            }
            pcVar37 = pcVar27;
            if (cVar2 != '\0') {
              pcVar37 = pcVar27 + 1;
              pcVar44 = pcVar27;
            }
            pcVar28 = pcVar37;
            pcVar27 = pcVar44;
            if (pcVar42[3] != '\0') {
              *pcVar44 = pcVar42[3];
              pcVar28 = pcVar37 + 1;
              pcVar27 = pcVar37;
            }
            *pcVar27 = ',';
            if (iVar29 == 0) {
              do {
                pcVar37 = pcVar15 + 1;
                cVar1 = *pcVar15;
                pcVar44 = pcVar28 + 1;
                *pcVar28 = cVar1;
                if (cVar1 == ',') break;
                pcVar15 = pcVar15 + 2;
                cVar1 = *pcVar37;
                pcVar28 = pcVar28 + 2;
                *pcVar44 = cVar1;
                pcVar37 = pcVar15;
                pcVar44 = pcVar28;
              } while (cVar1 != ',');
            }
            else {
              pcVar37 = pcVar15;
              pcVar44 = pcVar28;
              if (iVar29 == 2) goto LAB_000285f8;
            }
            iVar29 = iVar29 + 1;
            pcVar42 = pcVar42 + 4;
            pcVar15 = pcVar37;
          } while( true );
        }
        if (uVar26 == 1) {
          if ((uVar23 & 0xc00) == 0x400) {
            uVar22 = 0x2d;
          }
          else if ((uVar23 & 0xc00) == 0x800) {
            uVar22 = 100;
          }
          else {
            uVar22 = 0x3f;
          }
          if ((uVar23 & 0x80) == 0) {
            uVar7 = 0x2d;
          }
          else {
            uVar7 = 0x68;
          }
          local_90._0_2_ = CONCAT11(uVar7,uVar22);
          if ((uVar23 & 0x40) == 0) {
            uVar22 = 0x2d;
          }
          else {
            uVar22 = 0x73;
          }
          local_90._0_3_ = CONCAT12(uVar22,(undefined2)local_90);
          if ((uVar23 & 0x20) == 0) {
            uVar22 = 0x2d;
          }
          else {
            uVar22 = 0x70;
          }
          local_90 = CONCAT13(uVar22,(undefined3)local_90);
          if ((uVar23 & 0x10) == 0) {
            uVar22 = 0x2d;
          }
          else {
            uVar22 = 0x61;
          }
          if ((uVar23 & 8) == 0) {
            uVar7 = 0x2d;
          }
          else {
            uVar7 = 0x72;
          }
          local_8c._0_2_ = CONCAT11(uVar7,uVar22);
          if ((uVar23 & 4) == 0) {
            uVar22 = 0x2d;
          }
          else {
            uVar22 = 0x77;
          }
          if ((uVar23 & 2) == 0) {
            uVar7 = 0x2d;
          }
          else {
            uVar7 = 0x65;
          }
          local_8c = CONCAT13(uVar7,CONCAT12(uVar22,(undefined2)local_8c));
          if ((uVar23 & 1) == 0) {
            uVar22 = 0x2d;
          }
          else {
            uVar22 = 100;
          }
          local_88 = CONCAT31((int3)(local_88 >> 8),uVar22) & 0xffff00ff;
          pcVar44 = DAT_00029244;
          goto LAB_00028618;
        }
        if (uVar26 == 0x12) {
          uVar25 = uVar23 & 0xf000;
          puVar30 = DAT_000292f0;
          if (uVar25 != 0xa000) {
            if (uVar25 < 0xa001) {
              puVar30 = DAT_000292dc;
              if (uVar25 != 0x5000) {
                if (uVar25 < 0x5001) {
                  puVar30 = DAT_00029268;
                  if (uVar25 != 0x4000) {
                    puVar30 = DAT_00029268 + -0x24;
                  }
                }
                else {
                  puVar30 = DAT_0002925c;
                  if ((uVar25 != 0x8000) && (puVar30 = DAT_00029260, uVar25 != 0x9000)) {
                    puVar30 = DAT_00029260 + -0xc;
                  }
                }
              }
            }
            else {
              puVar30 = DAT_000292e0;
              if (uVar25 != 0xd000) {
                if (uVar25 < 0xd001) {
                  puVar30 = DAT_00029274;
                  if (uVar25 != 0xb000) {
                    puVar30 = DAT_00029274 + -0x14;
                  }
                }
                else {
                  puVar30 = DAT_0002926c;
                  if ((uVar25 != 0xe000) && (puVar30 = DAT_00029270, uVar25 != 0xf000)) {
                    puVar30 = DAT_00029270 + -0x20;
                  }
                }
              }
            }
          }
          local_90 = *puVar30;
          local_8c = puVar30[1];
          local_88 = puVar30[2];
          if ((uVar23 & 0x400) == 0) {
            local_84 = 0x48;
          }
          else {
            local_84 = 0x2e;
          }
          if ((uVar23 & 0x800) == 0) {
            local_83 = 0x4d;
          }
          else {
            local_83 = 0x2e;
          }
          if ((uVar23 & 2) == 0) {
            local_82 = 0x57;
          }
          else {
            local_82 = 0x2e;
          }
          if ((uVar23 & 4) == 0) {
            local_81 = 0x52;
          }
          else {
            local_81 = 0x2e;
          }
          if ((uVar23 & 0x200) == 0) {
            local_80 = 0x45;
          }
          else {
            local_80 = 0x2e;
          }
          if ((uVar23 & 0x40) == 0) {
            local_7f = 0x58;
          }
          else {
            local_7f = 0x2e;
          }
          if ((uVar23 & 0x80) == 0) {
            local_7e = 0x57;
          }
          else {
            local_7e = 0x2e;
          }
          if ((uVar23 & 0x100) == 0) {
            local_7d = 0x52;
          }
          else {
            local_7d = 0x2e;
          }
          local_7c = 0;
          pcVar44 = DAT_00029264;
          goto LAB_00028618;
        }
        if (0xf < uVar26) {
          pcVar32 = *(code **)(iVar11 + 0x30c);
LAB_00028924:
          uVar25 = uVar23 & 0xf000;
          if (uVar25 == 0x6000) {
            uVar22 = 0x62;
          }
          else if (uVar25 < 0x6001) {
            if (uVar25 == 0x2000) {
              uVar22 = 99;
            }
            else if (uVar25 == 0x4000) {
              uVar22 = 100;
            }
            else if (uVar25 == 0x1000) {
              uVar22 = 0x70;
            }
            else {
LAB_00028954:
              uVar22 = 0x3f;
            }
          }
          else if (uVar25 == 0xa000) {
            uVar22 = 0x6c;
          }
          else if (uVar25 == 0xc000) {
            uVar22 = 0x73;
          }
          else {
            if (uVar25 != 0x8000) goto LAB_00028954;
            uVar22 = 0x2d;
          }
          if ((uVar23 & 0x100) == 0) {
            uVar7 = 0x2d;
          }
          else {
            uVar7 = 0x72;
          }
          local_90._0_2_ = CONCAT11(uVar7,uVar22);
          if ((uVar23 & 0x20) == 0) {
            uVar22 = 0x2d;
          }
          else {
            uVar22 = 0x72;
          }
          if ((uVar23 & 4) == 0) {
            uVar7 = 0x2d;
          }
          else {
            uVar7 = 0x72;
          }
          if ((uVar23 & 0x80) == 0) {
            uVar19 = 0x2d;
          }
          else {
            uVar19 = 0x77;
          }
          local_90._0_3_ = CONCAT12(uVar19,(undefined2)local_90);
          if ((uVar23 & 0x10) == 0) {
            uVar19 = 0x2d;
          }
          else {
            uVar19 = 0x77;
          }
          local_8c._0_2_ = CONCAT11(uVar19,uVar22);
          if ((uVar23 & 2) == 0) {
            uVar22 = 0x2d;
          }
          else {
            uVar22 = 0x77;
          }
          if ((uVar23 & 0x40) == 0) {
            if ((uVar23 & 0x800) == 0) {
              uVar19 = 0x2d;
            }
            else {
              uVar19 = 0x53;
            }
          }
          else if ((uVar23 & 0x800) == 0) {
            uVar19 = 0x78;
          }
          else {
            uVar19 = 0x73;
          }
          local_90 = CONCAT13(uVar19,(undefined3)local_90);
          if ((uVar23 & 8) == 0) {
            if ((uVar23 & 0x400) == 0) {
              uVar19 = 0x2d;
            }
            else {
              uVar19 = 0x6c;
            }
          }
          else if ((uVar23 & 0x400) == 0) {
            uVar19 = 0x78;
          }
          else {
            uVar19 = 0x73;
          }
          local_8c = CONCAT13(uVar7,CONCAT12(uVar19,(undefined2)local_8c));
          if ((uVar23 & 1) == 0) {
            if ((uVar23 & 0x200) == 0) {
              uVar7 = 0x2d;
            }
            else {
              uVar7 = 0x54;
            }
          }
          else if ((uVar23 & 0x200) == 0) {
            uVar7 = 0x78;
          }
          else {
            uVar7 = 0x74;
          }
          local_88._0_3_ = (uint3)CONCAT11(uVar7,uVar22);
          pcVar44 = DAT_00029250;
          goto LAB_0002861c;
        }
        pcVar32 = *(code **)(iVar11 + 0x30c);
        if ((~(0xe851U >> uVar26) & 1) != 0) goto LAB_00028924;
        sprintf(DAT_00027200,DAT_00027184,uVar25 >> 8);
        (*pcVar32)(&DAT_000441a0,DAT_00027200,0x3d,0);
        uVar23 = *(uint *)((int)DWORD_ARRAY_00010130 + iVar10 + 0x14);
        pcVar32 = *(code **)(iVar11 + 0x30c);
        uVar25 = uVar23 & 0xff;
        if (uVar25 == 0) goto LAB_00028648;
        goto LAB_00026c28;
      }
      iVar9 = local_104;
      if (sVar8 == 0) goto LAB_0002709c;
      iVar29 = FUN_0001b094(sVar8,0);
      if ((iVar29 != 0) && (local_104 = iVar29, 1 < iVar29)) {
        return iVar29;
      }
      goto LAB_000270a4;
    }
    if (DAT_00044228 == 0) {
LAB_0002638c:
      uVar16 = DAT_00027138;
      if (DAT_0004422c != 0) {
        uVar23 = 0;
        do {
          iVar29 = uVar23 * 4;
          iVar9 = uVar23 * 4;
          uVar23 = uVar23 + 1;
          iVar11 = FUN_00021b04(uVar16,*(undefined4 *)(DAT_00044258 + iVar9),DAT_000441b8);
          iVar9 = DAT_00044230;
          if (iVar11 != 0) {
            if (local_e8 != (void *)0x0) {
              *(undefined4 *)((int)local_e8 + iVar29) = 1;
            }
            goto LAB_000263e8;
          }
        } while (uVar23 < DAT_0004422c);
      }
      goto LAB_000265f4;
    }
    uVar23 = 0;
    do {
      iVar29 = uVar23 * 4;
      iVar9 = uVar23 * 4;
      uVar23 = uVar23 + 1;
      iVar9 = FUN_00021b04(uVar16,*(undefined4 *)(DAT_00044254 + iVar9),DAT_000441b8);
      if (iVar9 != 0) {
        if (local_e4 != (void *)0x0) {
          *(undefined4 *)((int)local_e4 + iVar29) = 1;
        }
        goto LAB_0002638c;
      }
      iVar9 = DAT_00044230;
    } while (uVar23 < DAT_00044228);
LAB_000263e8:
    sVar8 = *(short *)((int)DWORD_ARRAY_00010130 + iVar10 + 0x26);
    if (iVar9 != 0) goto LAB_000265fc;
    if ((sVar8 == 0) || (iVar29 = FUN_0001b094(), iVar29 == 0)) {
      sVar8 = *(short *)((int)DWORD_ARRAY_00010130 + iVar10 + 0x28);
      iVar29 = local_104;
    }
    else {
      if (1 < iVar29) {
        return iVar29;
      }
      sVar8 = *(short *)((int)DWORD_ARRAY_00010130 + iVar10 + 0x28);
    }
    if ((sVar8 == 0) || (local_104 = FUN_0001b094(sVar8,0), local_104 == 0)) {
      local_100 = 0;
      local_104 = iVar29;
    }
    else {
      if (1 < local_104) {
        return local_104;
      }
      local_100 = 0;
    }
    goto LAB_00026414;
  }
  iVar9 = 0x33;
LAB_0002645c:
  if (local_e4 == (void *)0x0) {
    if (local_e8 == (void *)0x0) {
      return iVar9;
    }
  }
  else {
LAB_00026468:
    free(local_e4);
    if (local_e8 == (void *)0x0) goto LAB_0002648c;
  }
  if (iVar9 < 2) {
LAB_00026568:
    iVar47 = DAT_000271a0;
    if (DAT_0004422c != 0) {
      piVar43 = (int *)((int)local_e8 + -4);
      uVar23 = 0;
      do {
        piVar43 = piVar43 + 1;
        iVar29 = *piVar43;
        while (iVar29 != 0) {
          uVar23 = uVar23 + 1;
          if (DAT_0004422c <= uVar23) goto LAB_00026484;
          piVar43 = piVar43 + 1;
          iVar29 = *piVar43;
        }
        pcVar32 = *(code **)(iVar47 + 0x30c);
        iVar29 = uVar23 * 4;
        uVar23 = uVar23 + 1;
        iVar29 = sprintf(DAT_00027200,"caution: excluded filename not matched:  %s\n",
                         *(undefined4 *)(DAT_00044258 + iVar29));
        (*pcVar32)(&DAT_000441a0,DAT_00027200,iVar29,0x401);
      } while (uVar23 < DAT_0004422c);
    }
  }
LAB_00026484:
  free(local_e8);
LAB_0002648c:
  if (iVar9 < 2) {
LAB_00026494:
    iVar47 = DAT_000271a0;
    pcVar44 = &DAT_00044154;
    if (*(int *)((int)DWORD_ARRAY_00010130 + iVar10 + 0x40) == 0) {
      pcVar44 = &DAT_00044158;
    }
    if ((((((*DAT_00027130 != *pcVar44) || (*(char *)(DAT_00029280 + 1) != pcVar44[1])) ||
          (*DAT_00029284 != pcVar44[2])) || (DAT_00029284[1] != pcVar44[3])) &&
        (*(int *)((int)DWORD_ARRAY_00010130 + iVar10 + 0x44) == 0)) &&
       (((DAT_0004425c != DAT_00044158 || (DAT_0004425d != DAT_00044159)) ||
        ((DAT_0004425e != DAT_0004415a || (DAT_0004425f != DAT_0004415b)))))) {
      iVar9 = 1;
      pcVar32 = *(code **)(DAT_000271a0 + 0x30c);
      iVar10 = sprintf(DAT_00027200,
                       "\nnote:  didn\'t find end-of-central-dir signature at end of central dir.\n"
                      );
      (*pcVar32)(iVar47 + -0x91000,DAT_00027200,iVar10,0x401);
    }
    if (local_f8 == 0) {
      iVar9 = 0xb;
    }
    if (9 < DAT_000441d0) {
      (**(code **)(DAT_000271a0 + 0x30c))(DAT_000271a0 + -0x91000,"\n",1,0);
      return iVar9;
    }
  }
  return iVar9;
LAB_000285f8:
  *pcVar27 = ')';
  pcVar27[1] = '\0';
  pcVar44 = DAT_00029230;
LAB_00028618:
  pcVar32 = *(code **)(iVar11 + 0x30c);
LAB_0002861c:
  iVar29 = sprintf(DAT_00029204,pcVar44,uVar23,&local_90);
  (*pcVar32)(&DAT_000441a0,DAT_00029204,iVar29,0);
  uVar23 = *(uint *)((int)DWORD_ARRAY_00010130 + iVar10 + 0x14);
  pcVar32 = *(code **)(iVar11 + 0x30c);
  uVar25 = uVar23 & 0xff;
  if (uVar25 == 0) {
LAB_00028648:
    sprintf(DAT_00029204,DAT_00029234,0);
    (*pcVar32)(&DAT_000441a0,DAT_00029204,0x37,0);
  }
  else {
LAB_00026c28:
    if (uVar25 == 1) {
      sprintf(DAT_00029204,DAT_00029288,1);
      (*pcVar32)(&DAT_000441a0,DAT_00029204,0x3c,0);
    }
    else {
      puVar41 = &UNK_000331e4;
      if ((uVar23 & 1) == 0) {
        puVar41 = DAT_00027158;
      }
      puVar24 = &UNK_000331ec;
      if ((uVar23 & 2) == 0) {
        puVar24 = DAT_00027158;
      }
      puVar40 = &UNK_000331f4;
      if ((uVar23 & 4) == 0) {
        puVar40 = DAT_00027158;
      }
      puVar49 = &DAT_000331fc;
      if ((uVar23 & 8) == 0) {
        puVar49 = DAT_00027158;
      }
      puVar48 = &DAT_00033204;
      if ((uVar23 & 0x10) == 0) {
        puVar48 = DAT_00027158;
      }
      puVar34 = &DAT_0003320c;
      if ((uVar23 & 0x20) == 0) {
        puVar34 = DAT_00027158;
      }
      puVar50 = &DAT_00033214;
      if ((uVar23 & 0x40) == 0) {
        puVar50 = DAT_00027158;
      }
      puVar20 = &DAT_0003321c;
      if ((uVar23 & 0x80) == 0) {
        puVar20 = DAT_00027158;
      }
      iVar29 = sprintf(DAT_00027200,DAT_00027188,uVar25,puVar41,puVar24,puVar40,puVar49,puVar48,
                       puVar34,puVar50,puVar20);
      (*pcVar32)(&DAT_000441a0,DAT_00027200,iVar29,0);
    }
  }
  uVar4 = s_The_central_directory_extra_fiel_000332bc._12_4_;
  uVar17 = s_The_central_directory_extra_fiel_000332bc._8_4_;
  uVar16 = s_The_central_directory_extra_fiel_000332bc._4_4_;
  iVar29 = DAT_00027128;
  local_f0 = (uint)*(ushort *)((int)DWORD_ARRAY_00010130 + iVar10 + 0x26);
  if (local_f0 != 0) {
    iVar9 = local_104;
    if (1 < local_104) goto LAB_0002880c;
    iVar9 = *(int *)((int)&Elf32_Phdr_ARRAY_00010034[6].p_flags + iVar10);
    if (iVar9 == 0) {
      if (local_e4 != (void *)0x0) {
        free(local_e4);
      }
      if (local_e8 != (void *)0x0) {
        free(local_e8);
        return 2;
      }
      s__00027120[0] = s__00027120[0];
      s__00027120[1] = s__00027120[1];
      s__00027120[2] = s__00027120[2];
      s__00027120[3] = s__00027120[3];
      s__00027120[4] = s__00027120[4];
      s__00027120[5] = s__00027120[5];
      s__00027120[6] = s__00027120[6];
      s__00027120[7] = s__00027120[7];
      s_The_central_directory_extra_fiel_000332bc[0] =
           (char)s_The_central_directory_extra_fiel_000332bc._0_4_;
      s_The_central_directory_extra_fiel_000332bc[1] =
           SUB41(s_The_central_directory_extra_fiel_000332bc._0_4_,1);
      s_The_central_directory_extra_fiel_000332bc[2] =
           SUB41(s_The_central_directory_extra_fiel_000332bc._0_4_,2);
      s_The_central_directory_extra_fiel_000332bc[3] =
           SUB41(s_The_central_directory_extra_fiel_000332bc._0_4_,3);
      s_The_central_directory_extra_fiel_000332bc[4] =
           (char)s_The_central_directory_extra_fiel_000332bc._4_4_;
      s_The_central_directory_extra_fiel_000332bc[5] =
           SUB41(s_The_central_directory_extra_fiel_000332bc._4_4_,1);
      s_The_central_directory_extra_fiel_000332bc[6] =
           SUB41(s_The_central_directory_extra_fiel_000332bc._4_4_,2);
      s_The_central_directory_extra_fiel_000332bc[7] =
           SUB41(s_The_central_directory_extra_fiel_000332bc._4_4_,3);
      s_The_central_directory_extra_fiel_000332bc[8] =
           (char)s_The_central_directory_extra_fiel_000332bc._8_4_;
      s_The_central_directory_extra_fiel_000332bc[9] =
           SUB41(s_The_central_directory_extra_fiel_000332bc._8_4_,1);
      s_The_central_directory_extra_fiel_000332bc[10] =
           SUB41(s_The_central_directory_extra_fiel_000332bc._8_4_,2);
      s_The_central_directory_extra_fiel_000332bc[0xb] =
           SUB41(s_The_central_directory_extra_fiel_000332bc._8_4_,3);
      s_The_central_directory_extra_fiel_000332bc[0xc] =
           (char)s_The_central_directory_extra_fiel_000332bc._12_4_;
      s_The_central_directory_extra_fiel_000332bc[0xd] =
           SUB41(s_The_central_directory_extra_fiel_000332bc._12_4_,1);
      s_The_central_directory_extra_fiel_000332bc[0xe] =
           SUB41(s_The_central_directory_extra_fiel_000332bc._12_4_,2);
      s_The_central_directory_extra_fiel_000332bc[0xf] =
           SUB41(s_The_central_directory_extra_fiel_000332bc._12_4_,3);
      s_The_central_directory_extra_fiel_000332bc[0x10] =
           (char)s_The_central_directory_extra_fiel_000332bc._16_4_;
      s_The_central_directory_extra_fiel_000332bc[0x11] =
           SUB41(s_The_central_directory_extra_fiel_000332bc._16_4_,1);
      s_The_central_directory_extra_fiel_000332bc[0x12] =
           SUB41(s_The_central_directory_extra_fiel_000332bc._16_4_,2);
      s_The_central_directory_extra_fiel_000332bc[0x13] =
           SUB41(s_The_central_directory_extra_fiel_000332bc._16_4_,3);
      s_The_central_directory_extra_fiel_000332bc[0x14] =
           (char)s_The_central_directory_extra_fiel_000332bc._20_4_;
      s_The_central_directory_extra_fiel_000332bc[0x15] =
           SUB41(s_The_central_directory_extra_fiel_000332bc._20_4_,1);
      s_The_central_directory_extra_fiel_000332bc[0x16] =
           SUB41(s_The_central_directory_extra_fiel_000332bc._20_4_,2);
      s_The_central_directory_extra_fiel_000332bc[0x17] =
           SUB41(s_The_central_directory_extra_fiel_000332bc._20_4_,3);
      s_The_central_directory_extra_fiel_000332bc[0x18] =
           (char)s_The_central_directory_extra_fiel_000332bc._24_4_;
      s_The_central_directory_extra_fiel_000332bc[0x19] =
           SUB41(s_The_central_directory_extra_fiel_000332bc._24_4_,1);
      s_The_central_directory_extra_fiel_000332bc[0x1a] =
           SUB41(s_The_central_directory_extra_fiel_000332bc._24_4_,2);
      s_The_central_directory_extra_fiel_000332bc[0x1b] =
           SUB41(s_The_central_directory_extra_fiel_000332bc._24_4_,3);
      s_The_central_directory_extra_fiel_000332bc[0x1c] =
           (char)s_The_central_directory_extra_fiel_000332bc._28_4_;
      s_The_central_directory_extra_fiel_000332bc[0x1d] =
           SUB41(s_The_central_directory_extra_fiel_000332bc._28_4_,1);
      s_The_central_directory_extra_fiel_000332bc[0x1e] =
           SUB41(s_The_central_directory_extra_fiel_000332bc._28_4_,2);
      s_The_central_directory_extra_fiel_000332bc[0x1f] =
           SUB41(s_The_central_directory_extra_fiel_000332bc._28_4_,3);
      s_The_central_directory_extra_fiel_000332bc[0x20] =
           (char)s_The_central_directory_extra_fiel_000332bc._32_4_;
      s_The_central_directory_extra_fiel_000332bc[0x21] =
           SUB41(s_The_central_directory_extra_fiel_000332bc._32_4_,1);
      s_The_central_directory_extra_fiel_000332bc[0x22] =
           SUB41(s_The_central_directory_extra_fiel_000332bc._32_4_,2);
      s_The_central_directory_extra_fiel_000332bc[0x23] =
           SUB41(s_The_central_directory_extra_fiel_000332bc._32_4_,3);
      s_The_central_directory_extra_fiel_000332bc[0x24] =
           (char)s_The_central_directory_extra_fiel_000332bc._36_4_;
      s_The_central_directory_extra_fiel_000332bc[0x25] =
           SUB41(s_The_central_directory_extra_fiel_000332bc._36_4_,1);
      s_The_central_directory_extra_fiel_000332bc[0x26] =
           SUB41(s_The_central_directory_extra_fiel_000332bc._36_4_,2);
      s_The_central_directory_extra_fiel_000332bc[0x27] =
           SUB41(s_The_central_directory_extra_fiel_000332bc._36_4_,3);
      s_The_central_directory_extra_fiel_000332bc[0x28] =
           (char)s_The_central_directory_extra_fiel_000332bc._40_4_;
      s_The_central_directory_extra_fiel_000332bc[0x29] =
           SUB41(s_The_central_directory_extra_fiel_000332bc._40_4_,1);
      s_The_central_directory_extra_fiel_000332bc[0x2a] =
           SUB41(s_The_central_directory_extra_fiel_000332bc._40_4_,2);
      s_The_central_directory_extra_fiel_000332bc[0x2b] =
           SUB41(s_The_central_directory_extra_fiel_000332bc._40_4_,3);
      s_access_000332ec[0] = (char)s_access_000332ec._0_4_;
      s_access_000332ec[1] = SUB41(s_access_000332ec._0_4_,1);
      s_access_000332ec[2] = SUB41(s_access_000332ec._0_4_,2);
      s_access_000332ec[3] = SUB41(s_access_000332ec._0_4_,3);
      s_access_000332ec[4] = (char)s_access_000332ec._4_2_;
      s_access_000332ec[5] = SUB21(s_access_000332ec._4_2_,1);
      s___The_first_20_are__000332f4[0] = (char)s___The_first_20_are__000332f4._0_4_;
      s___The_first_20_are__000332f4[1] = SUB41(s___The_first_20_are__000332f4._0_4_,1);
      s___The_first_20_are__000332f4[2] = SUB41(s___The_first_20_are__000332f4._0_4_,2);
      s___The_first_20_are__000332f4[3] = SUB41(s___The_first_20_are__000332f4._0_4_,3);
      s___The_first_20_are__000332f4[4] = (char)s___The_first_20_are__000332f4._4_4_;
      s___The_first_20_are__000332f4[5] = SUB41(s___The_first_20_are__000332f4._4_4_,1);
      s___The_first_20_are__000332f4[6] = SUB41(s___The_first_20_are__000332f4._4_4_,2);
      s___The_first_20_are__000332f4[7] = SUB41(s___The_first_20_are__000332f4._4_4_,3);
      s___The_first_20_are__000332f4[8] = (char)s___The_first_20_are__000332f4._8_4_;
      s___The_first_20_are__000332f4[9] = SUB41(s___The_first_20_are__000332f4._8_4_,1);
      s___The_first_20_are__000332f4[10] = SUB41(s___The_first_20_are__000332f4._8_4_,2);
      s___The_first_20_are__000332f4[0xb] = SUB41(s___The_first_20_are__000332f4._8_4_,3);
      s___The_first_20_are__000332f4[0xc] = (char)s___The_first_20_are__000332f4._12_4_;
      s___The_first_20_are__000332f4[0xd] = SUB41(s___The_first_20_are__000332f4._12_4_,1);
      s___The_first_20_are__000332f4[0xe] = SUB41(s___The_first_20_are__000332f4._12_4_,2);
      s___The_first_20_are__000332f4[0xf] = SUB41(s___The_first_20_are__000332f4._12_4_,3);
      s___The_first_20_are__000332f4[0x10] = (char)s___The_first_20_are__000332f4._16_4_;
      s___The_first_20_are__000332f4[0x11] = SUB41(s___The_first_20_are__000332f4._16_4_,1);
      s___The_first_20_are__000332f4[0x12] = SUB41(s___The_first_20_are__000332f4._16_4_,2);
      s___The_first_20_are__000332f4[0x13] = SUB41(s___The_first_20_are__000332f4._16_4_,3);
      s___The_first_20_are__000332f4[0x14] = (char)s___The_first_20_are__000332f4._20_4_;
      s___The_first_20_are__000332f4[0x15] = SUB41(s___The_first_20_are__000332f4._20_4_,1);
      s___The_first_20_are__000332f4[0x16] = SUB41(s___The_first_20_are__000332f4._20_4_,2);
      s___The_first_20_are__000332f4[0x17] = SUB41(s___The_first_20_are__000332f4._20_4_,3);
      s_There_is_no_file_comment__00033318[0] = (char)s_There_is_no_file_comment__00033318._0_4_;
      s_There_is_no_file_comment__00033318[1] = SUB41(s_There_is_no_file_comment__00033318._0_4_,1);
      s_There_is_no_file_comment__00033318[2] = SUB41(s_There_is_no_file_comment__00033318._0_4_,2);
      s_There_is_no_file_comment__00033318[3] = SUB41(s_There_is_no_file_comment__00033318._0_4_,3);
      s_There_is_no_file_comment__00033318[4] = (char)s_There_is_no_file_comment__00033318._4_4_;
      s_There_is_no_file_comment__00033318[5] = SUB41(s_There_is_no_file_comment__00033318._4_4_,1);
      s_There_is_no_file_comment__00033318[6] = SUB41(s_There_is_no_file_comment__00033318._4_4_,2);
      s_There_is_no_file_comment__00033318[7] = SUB41(s_There_is_no_file_comment__00033318._4_4_,3);
      s_There_is_no_file_comment__00033318[8] = (char)s_There_is_no_file_comment__00033318._8_4_;
      s_There_is_no_file_comment__00033318[9] = SUB41(s_There_is_no_file_comment__00033318._8_4_,1);
      s_There_is_no_file_comment__00033318[10] = SUB41(s_There_is_no_file_comment__00033318._8_4_,2)
      ;
      s_There_is_no_file_comment__00033318[0xb] =
           SUB41(s_There_is_no_file_comment__00033318._8_4_,3);
      s_There_is_no_file_comment__00033318[0xc] = (char)s_There_is_no_file_comment__00033318._12_4_;
      s_There_is_no_file_comment__00033318[0xd] =
           SUB41(s_There_is_no_file_comment__00033318._12_4_,1);
      s_There_is_no_file_comment__00033318[0xe] =
           SUB41(s_There_is_no_file_comment__00033318._12_4_,2);
      s_There_is_no_file_comment__00033318[0xf] =
           SUB41(s_There_is_no_file_comment__00033318._12_4_,3);
      s_There_is_no_file_comment__00033318[0x10] = (char)s_There_is_no_file_comment__00033318._16_4_
      ;
      s_There_is_no_file_comment__00033318[0x11] =
           SUB41(s_There_is_no_file_comment__00033318._16_4_,1);
      s_There_is_no_file_comment__00033318[0x12] =
           SUB41(s_There_is_no_file_comment__00033318._16_4_,2);
      s_There_is_no_file_comment__00033318[0x13] =
           SUB41(s_There_is_no_file_comment__00033318._16_4_,3);
      s_There_is_no_file_comment__00033318[0x14] = (char)s_There_is_no_file_comment__00033318._20_4_
      ;
      s_There_is_no_file_comment__00033318[0x15] =
           SUB41(s_There_is_no_file_comment__00033318._20_4_,1);
      s_There_is_no_file_comment__00033318[0x16] =
           SUB41(s_There_is_no_file_comment__00033318._20_4_,2);
      s_There_is_no_file_comment__00033318[0x17] =
           SUB41(s_There_is_no_file_comment__00033318._20_4_,3);
      s_There_is_no_file_comment__00033318[0x18] = (char)s_There_is_no_file_comment__00033318._24_4_
      ;
      s_There_is_no_file_comment__00033318[0x19] =
           SUB41(s_There_is_no_file_comment__00033318._24_4_,1);
      s_There_is_no_file_comment__00033318[0x1a] =
           SUB41(s_There_is_no_file_comment__00033318._24_4_,2);
      s_There_is_no_file_comment__00033318[0x1b] =
           SUB41(s_There_is_no_file_comment__00033318._24_4_,3);
      s_modification_000333d4[0] = (char)s_modification_000333d4._0_4_;
      s_modification_000333d4[1] = SUB41(s_modification_000333d4._0_4_,1);
      s_modification_000333d4[2] = SUB41(s_modification_000333d4._0_4_,2);
      s_modification_000333d4[3] = SUB41(s_modification_000333d4._0_4_,3);
      s_modification_000333d4[4] = (char)s_modification_000333d4._4_4_;
      s_modification_000333d4[5] = SUB41(s_modification_000333d4._4_4_,1);
      s_modification_000333d4[6] = SUB41(s_modification_000333d4._4_4_,2);
      s_modification_000333d4[7] = SUB41(s_modification_000333d4._4_4_,3);
      s_modification_000333d4[8] = (char)s_modification_000333d4._8_4_;
      s_modification_000333d4[9] = SUB41(s_modification_000333d4._8_4_,1);
      s_modification_000333d4[10] = SUB41(s_modification_000333d4._8_4_,2);
      s_modification_000333d4[0xb] = SUB41(s_modification_000333d4._8_4_,3);
      s_creation_000333e4[0] = (char)s_creation_000333e4._0_4_;
      s_creation_000333e4[1] = SUB41(s_creation_000333e4._0_4_,1);
      s_creation_000333e4[2] = SUB41(s_creation_000333e4._0_4_,2);
      s_creation_000333e4[3] = SUB41(s_creation_000333e4._0_4_,3);
      s_creation_000333e4[4] = (char)s_creation_000333e4._4_4_;
      s_creation_000333e4[5] = SUB41(s_creation_000333e4._4_4_,1);
      s_creation_000333e4[6] = SUB41(s_creation_000333e4._4_4_,2);
      s_creation_000333e4[7] = SUB41(s_creation_000333e4._4_4_,3);
      return 2;
    }
    pcVar32 = *(code **)(iVar11 + 0x30c);
    *(undefined4 *)(DAT_00027128 + 0xd0) = s_The_central_directory_extra_fiel_000332bc._0_4_;
    *(undefined4 *)(iVar29 + 0xd4) = uVar16;
    *(undefined4 *)(iVar29 + 0xd8) = uVar17;
    *(undefined4 *)(iVar29 + 0xdc) = uVar4;
    uVar4 = s_The_central_directory_extra_fiel_000332bc._28_4_;
    uVar17 = s_The_central_directory_extra_fiel_000332bc._24_4_;
    uVar16 = s_The_central_directory_extra_fiel_000332bc._20_4_;
    *(undefined4 *)(iVar29 + 0xe0) = s_The_central_directory_extra_fiel_000332bc._16_4_;
    *(undefined4 *)(iVar29 + 0xe4) = uVar16;
    *(undefined4 *)(iVar29 + 0xe8) = uVar17;
    *(undefined4 *)(iVar29 + 0xec) = uVar4;
    uVar4 = ram0x000332e8;
    uVar17 = s_The_central_directory_extra_fiel_000332bc._40_4_;
    uVar16 = s_The_central_directory_extra_fiel_000332bc._36_4_;
    *(undefined4 *)(iVar29 + 0xf0) = s_The_central_directory_extra_fiel_000332bc._32_4_;
    *(undefined4 *)(iVar29 + 0xf4) = uVar16;
    *(undefined4 *)(iVar29 + 0xf8) = uVar17;
    *(short *)(iVar29 + 0xfc) = (short)uVar4;
    *(char *)(iVar29 + 0xfe) = (char)((uint)uVar4 >> 0x10);
    (*pcVar32)(&DAT_000441a0,DAT_00027200,0x2e,0);
    while (3 < local_f0) {
      iVar29 = iVar9 + 4;
      puVar12 = (undefined1 *)FUN_0001b8b4(iVar9);
      uVar25 = FUN_0001b8b4(iVar9 + 2);
      uVar23 = local_f0 - 4 & 0xffff;
      if (uVar23 < uVar25) {
        pcVar32 = *(code **)(iVar11 + 0x30c);
        iVar13 = sprintf(DAT_00029204,DAT_00029208,puVar12,uVar25,uVar23);
        local_f0 = 0;
        (*pcVar32)(&DAT_000441a0,DAT_00029204,iVar13,0x421);
      }
      else {
        local_f0 = uVar23 - uVar25 & 0xffff;
        uVar23 = uVar25;
      }
      pcVar32 = *(code **)(iVar11 + 0x30c);
      if (puVar12 == (undefined1 *)0x4b46) {
        iVar13 = sprintf(DAT_000292f8,(char *)(DAT_000292b8 + -8),0x4b46,DAT_000292bc,uVar23);
        (*pcVar32)(&DAT_000441a0,DAT_000292f8,iVar13,0);
LAB_00028160:
        if (0x12 < uVar23) {
          pbVar35 = (byte *)(iVar9 + 0x14);
          pcVar44 = (char *)&local_78;
          do {
            pbVar35 = pbVar35 + -1;
            pcVar42 = pcVar44 + 2;
            sprintf(pcVar44,"%02x",(uint)*pbVar35);
            pcVar44 = pcVar42;
          } while (local_58 != pcVar42);
          pcVar32 = *(code **)(iVar11 + 0x30c);
          local_58[0] = '\0';
          iVar9 = sprintf(DAT_00027200,DAT_000271fc,&local_78);
          (*pcVar32)(&DAT_000441a0,DAT_00027200,iVar9,0);
          pcVar32 = *(code **)(iVar11 + 0x30c);
          goto LAB_00026e88;
        }
LAB_00027d6c:
        pcVar32 = *(code **)(iVar11 + 0x30c);
        if (uVar23 == 0) goto LAB_00026e88;
LAB_00027d78:
        uVar16 = DAT_00033314;
        iVar13 = DAT_000271f0;
        *(undefined4 *)(DAT_000271f0 + 0xd0) = DAT_00033310;
        *(short *)(iVar13 + 0xd4) = (short)uVar16;
        (*pcVar32)(&DAT_000441a0,iVar13 + 0xd0,5,0);
        uVar25 = uVar23;
LAB_00027ab0:
        pcVar44 = DAT_00027200;
        pbVar35 = (byte *)(iVar9 + 3);
        pbVar46 = pbVar35 + uVar25;
        do {
          pbVar35 = pbVar35 + 1;
          pcVar32 = *(code **)(iVar11 + 0x30c);
          sprintf(pcVar44,DAT_000271b8,(uint)*pbVar35);
          (*pcVar32)(&DAT_000441a0,pcVar44,3,0);
        } while (pbVar46 != pbVar35);
        pcVar32 = *(code **)(iVar11 + 0x30c);
      }
      else {
        uVar25 = uVar23;
        if (puVar12 < (undefined1 *)0x4b47) {
          if (puVar12 != (undefined1 *)0x2605) {
            if ((undefined1 *)0x2605 < puVar12) {
              uVar16 = DAT_00029238;
              if (puVar12 != (undefined1 *)0x4341) {
                if (puVar12 < (undefined1 *)0x4342) {
                  if (puVar12 == (undefined1 *)0x334d) {
                    iVar13 = sprintf(DAT_000292f8,(char *)(DAT_000292b8 + -8),0x334d,DAT_000292b4,
                                     uVar23);
                    (*pcVar32)(&DAT_000441a0,DAT_000292f8,iVar13,0);
LAB_000281f0:
                    if (uVar23 < 0xe) goto LAB_00027d6c;
                    uVar16 = FUN_0001b8c4(iVar9 + 4);
                    uVar25 = FUN_0001b8b4(iVar9 + 8);
                    pcVar32 = *(code **)(iVar11 + 0x30c);
                    if ((uVar25 & 4) == 0) {
                      iVar13 = sprintf(DAT_000292f8,DAT_000292c0,uVar16,DAT_000292fc);
                      (*pcVar32)(&DAT_000441a0,DAT_000292f8,iVar13,0);
                      local_100 = 0;
                    }
                    else {
                      iVar13 = sprintf(DAT_00029204,DAT_00029200,uVar16,&DAT_000332b8);
                      (*pcVar32)(&DAT_000441a0,DAT_00029204,iVar13,0);
                      if (local_100 != 0) {
                        iVar13 = FUN_0001b8c4(iVar9 + 4);
                        local_100 = local_100 + iVar13;
                      }
                    }
                    iVar13 = DAT_000292d0 + 0xc;
                    if ((uVar25 & 1) != 0) {
                      iVar13 = DAT_000292d0;
                    }
                    pcVar32 = *(code **)(iVar11 + 0x30c);
                    if ((uVar25 & 8) == 0) {
                      uVar16 = 0x20;
                    }
                    else {
                      uVar16 = 0x40;
                    }
                    iVar13 = sprintf(DAT_000292f8,DAT_000292c4,iVar13,uVar16);
                    (*pcVar32)(&DAT_000441a0,DAT_000292f8,iVar13,0);
                    FUN_00025398(iVar9 + 10);
                    pcVar32 = *(code **)(iVar11 + 0x30c);
                  }
                  else {
                    if (puVar12 == &DAT_00004154) {
                      iVar13 = sprintf(DAT_00029204,(char *)(DAT_000292b8 + -8),&DAT_00004154,
                                       DAT_00029294,uVar23);
                      (*pcVar32)(&DAT_000441a0,DAT_00029204,iVar13,0);
LAB_00028ef8:
                      if (uVar23 != 0x14) goto LAB_00027f84;
                      uVar38 = (*(byte *)(iVar9 + 0x16) & 0x7f) >> 5;
                      uVar33 = FUN_0001b8b4(iVar29);
                      uVar33 = (uVar33 & 0xff) << 8 | uVar33 >> 8;
                      if (uVar38 == 0) {
                        puVar41 = DAT_00029300;
                        if ((uVar33 != 0x65) && (puVar41 = DAT_000292ec, uVar33 == 100)) {
                          puVar41 = DAT_000292ec + 0x10;
                        }
                      }
                      else {
                        puVar41 = (&PTR_s_Unstructured_00032c58)[uVar38];
                      }
                      pcVar32 = *(code **)(iVar11 + 0x30c);
                      iVar9 = sprintf(DAT_00029204,DAT_00029298,puVar41,uVar33,uVar25);
                      goto LAB_00028074;
                    }
                    if (puVar12 != (undefined1 *)0x2705) goto LAB_00026ddc;
                    iVar13 = sprintf(DAT_00027200,(char *)(DAT_000271d8 + -8),0x2705,DAT_000271c0,
                                     uVar23);
                    (*pcVar32)(&DAT_000441a0,DAT_00027200,iVar13,0);
LAB_00027b98:
                    if (uVar23 < 5) goto LAB_00027d6c;
                    iVar13 = FUN_0001b8c4(iVar9 + 4);
                    if (iVar13 != 0x5449505a) goto LAB_00027bf4;
                    if (uVar23 < 0xc) goto LAB_000279ec;
                    FUN_00025398(iVar9 + 8);
                    pcVar32 = *(code **)(iVar11 + 0x30c);
                  }
                  goto LAB_00026e88;
                }
                uVar16 = DAT_0002921c;
                if ((puVar12 != (undefined1 *)0x4704) &&
                   (uVar16 = DAT_000271e4, puVar12 != (undefined1 *)0x470f)) {
                  if (puVar12 != (undefined1 *)0x4453) goto LAB_00026ddc;
                  iVar13 = sprintf(DAT_00027200,(char *)(DAT_000271c4 + -0x4b8),0x4453,DAT_000271c4,
                                   uVar23);
                  (*pcVar32)(&DAT_000441a0,DAT_00027200,iVar13,0);
LAB_00026e44:
                  pcVar32 = *(code **)(iVar11 + 0x30c);
                  if (uVar23 < 4) goto LAB_00027a5c;
                  uVar16 = FUN_0001b8c4(iVar29);
                  pcVar44 = DAT_00027190;
LAB_00026e68:
                  local_100 = 0;
                  iVar9 = sprintf(DAT_00027200,pcVar44,uVar16);
                  goto LAB_00026e70;
                }
              }
LAB_00027a2c:
              iVar13 = sprintf(DAT_00027200,(char *)(DAT_000271d8 + -8),puVar12,uVar16,uVar23);
              (*pcVar32)(&DAT_000441a0,DAT_00027200,iVar13,0);
              pcVar32 = *(code **)(iVar11 + 0x30c);
              goto LAB_00027a5c;
            }
            uVar16 = DAT_0002923c;
            if (puVar12 == (undefined1 *)0xa) goto LAB_00027a2c;
            if (puVar12 < (undefined1 *)0xb) {
              uVar16 = DAT_00029214;
              if (puVar12 != (undefined1 *)0x7) {
                uVar16 = DAT_000271e0;
                if (puVar12 == (undefined1 *)0x9) {
LAB_00026f54:
                  iVar13 = sprintf(DAT_00027200,(char *)(DAT_000271d8 + -8),puVar12,uVar16,uVar23);
                  (*pcVar32)(&DAT_000441a0,DAT_00027200,iVar13,0);
                  goto LAB_00026f80;
                }
                uVar16 = DAT_000271dc;
                if (puVar12 != (undefined1 *)0x1) goto LAB_00026ddc;
              }
              goto LAB_00027a2c;
            }
            uVar16 = DAT_00029210;
            if (puVar12 == (undefined1 *)0xd) goto LAB_00027a2c;
            if (puVar12 != (undefined1 *)0x7c8) {
              uVar16 = DAT_000271c8;
              if (puVar12 != (undefined1 *)0xc) goto LAB_00026ddc;
              goto LAB_00027a2c;
            }
            iVar13 = sprintf(DAT_00029204,(char *)(DAT_000292b8 + -8),0x7c8,DAT_000292a4,uVar23);
            (*pcVar32)(&DAT_000441a0,DAT_00029204,iVar13,0);
LAB_00027ef4:
            if (uVar23 < 0x28) goto LAB_00027f84;
            iVar13 = FUN_0001b8c4(iVar9 + 4);
            if (iVar13 == 0x45454c4a) {
              FUN_00025398(iVar9 + 8);
              iVar13 = DAT_000292d0 + 0xc;
              if ((*(byte *)(iVar9 + 0x23) & 1) != 0) {
                iVar13 = DAT_000292d0;
              }
              pcVar32 = *(code **)(iVar11 + 0x30c);
              iVar9 = sprintf(DAT_000292f8,DAT_000292d4,iVar13);
              goto LAB_00028074;
            }
LAB_00027f10:
            pcVar32 = *(code **)(iVar11 + 0x30c);
            goto LAB_00027a6c;
          }
          iVar13 = sprintf(DAT_00029204,(char *)(DAT_000292b8 + -8),0x2605,DAT_000292b0,uVar23);
          (*pcVar32)(&DAT_000441a0,DAT_00029204,iVar13,0);
LAB_00027bd8:
          if (uVar23 < 5) goto LAB_00027d6c;
          iVar13 = FUN_0001b8c4(iVar9 + 4);
          pcVar44 = DAT_000292c8;
          if (iVar13 != 0x5449505a) {
LAB_00027bf4:
            pcVar32 = *(code **)(iVar11 + 0x30c);
            goto LAB_00027a64;
          }
          if (*(byte *)(iVar9 + 8) + 0xd <= uVar23) {
            iVar13 = *(byte *)(iVar9 + 8) + 5;
            uVar22 = *(undefined1 *)(iVar29 + iVar13);
            *(undefined1 *)(iVar29 + iVar13) = 0;
            pcVar32 = *(code **)(iVar11 + 0x30c);
            iVar9 = sprintf(DAT_000292f8,pcVar44,iVar9 + 9,0,uVar25);
            (*pcVar32)(&DAT_000441a0,DAT_000292f8,iVar9,0);
            *(undefined1 *)(iVar29 + iVar13) = uVar22;
            FUN_00025398(iVar29 + iVar13);
            pcVar32 = *(code **)(iVar11 + 0x30c);
            goto LAB_00026e88;
          }
LAB_000279ec:
          pcVar32 = *(code **)(iVar11 + 0x30c);
        }
        else {
          uVar16 = DAT_0002928c;
          if (puVar12 == (undefined1 *)0x6542) {
LAB_00027c84:
            iVar13 = sprintf(DAT_00027200,(char *)(DAT_000271d8 + -8),puVar12,uVar16,uVar23);
            (*pcVar32)(&DAT_000441a0,DAT_00027200,iVar13,0);
            goto LAB_00027cb0;
          }
          if ((undefined1 *)0x6542 < puVar12) {
            uVar16 = DAT_00029240;
            if (puVar12 != (undefined1 *)0x756e) {
              if (puVar12 < (undefined1 *)0x756f) {
                uVar16 = DAT_00029218;
                if (puVar12 == (undefined1 *)0x7075) {
LAB_00027d38:
                  iVar13 = sprintf(DAT_00027200,(char *)(DAT_000271d8 + -8),puVar12,uVar16,uVar23);
                  (*pcVar32)(&DAT_000441a0,DAT_00027200,iVar13,0);
                  goto LAB_00027d64;
                }
                uVar16 = DAT_000271cc;
                if (puVar12 == (undefined1 *)0x7441) goto LAB_00027c84;
                uVar16 = DAT_000271b4;
                if (puVar12 != (undefined1 *)0x6854) goto LAB_00026ddc;
              }
              else {
                uVar16 = DAT_0002920c;
                if (puVar12 != (undefined1 *)0x7875) {
                  if (puVar12 == (undefined1 *)0xfb4a) {
                    iVar13 = sprintf(DAT_00029204,(char *)(DAT_000292a0 + -0x4f8),0xfb4a,
                                     DAT_000292a0,uVar23);
                    (*pcVar32)(&DAT_000441a0,DAT_00029204,iVar13,0);
LAB_00028108:
                    pcVar32 = *(code **)(iVar11 + 0x30c);
                    if (uVar23 < 4) goto LAB_00027a5c;
                    sprintf(DAT_00027200,DAT_000271f8,(uint)*(byte *)(iVar9 + 4),
                            (uint)*(byte *)(iVar9 + 5),(uint)*(byte *)(iVar9 + 6),
                            (uint)*(byte *)(iVar9 + 7));
                    (*pcVar32)(&DAT_000441a0,DAT_00027200,0x2c,0);
                    pcVar32 = *(code **)(iVar11 + 0x30c);
                    goto LAB_00026e88;
                  }
                  if (puVar12 != (undefined1 *)0x7855) goto LAB_00026ddc;
                  uVar16 = DAT_000271bc;
                  if (local_100 != 0) {
                    local_100 = local_100 + 4;
                    uVar16 = DAT_000271bc;
                  }
                }
              }
            }
            goto LAB_00027a2c;
          }
          if (puVar12 == (undefined1 *)0x5356) {
            iVar13 = sprintf(DAT_00029204,(char *)(DAT_000292b8 + -8),0x5356,DAT_000292a8,uVar23);
            (*pcVar32)(&DAT_000441a0,DAT_00029204,iVar13,0);
LAB_00027f44:
            pcVar32 = *(code **)(iVar11 + 0x30c);
            if (4 < uVar23) {
              iVar9 = sprintf(DAT_00027200,DAT_000271f4,*(byte *)(iVar9 + 8) / 10,
                              (uint)*(byte *)(iVar9 + 8) % 10,uVar25);
LAB_00026e70:
              (*pcVar32)(&DAT_000441a0,DAT_00027200,iVar9,0);
              pcVar32 = *(code **)(iVar11 + 0x30c);
              goto LAB_00026e88;
            }
          }
          else {
            if ((undefined1 *)0x5356 < puVar12) {
              if (puVar12 == (undefined1 *)0x5855) {
                uVar16 = DAT_000292cc;
                if ((uVar26 == 3) && (local_100 != 0)) {
                  local_100 = local_100 + 4;
                }
                goto LAB_00027a2c;
              }
              uVar16 = DAT_000271d4;
              if (puVar12 == (undefined1 *)0x6375) goto LAB_00027d38;
              if (puVar12 != (undefined1 *)0x5455) goto LAB_00026ddc;
              iVar13 = sprintf(DAT_00027200,(char *)(DAT_000271d8 + -8),0x5455,DAT_000271a8,uVar23);
              (*pcVar32)(&DAT_000441a0,DAT_00027200,iVar13,0);
LAB_00027944:
              pcVar32 = *(code **)(iVar11 + 0x30c);
              if (uVar23 == 0) goto LAB_00026e88;
              local_78 = local_78 & 0xffffffffffffff00;
              bVar31 = *(byte *)(iVar9 + 4);
              uVar33 = bVar31 & 1;
              iVar13 = DAT_000292fc;
              if ((bVar31 & 1) == 0) {
                if ((bVar31 & 2) != 0) {
                  iVar21 = 1;
LAB_00027978:
                  *(undefined2 *)((int)&local_78 + uVar33 + 4) = s_access_000332ec._4_2_;
                  *(undefined4 *)((int)&local_78 + uVar33) = s_access_000332ec._0_4_;
                  *(char *)((int)&local_78 + uVar33 + 6) = s_access_000332ec[6];
                  if (local_100 != 0) {
                    local_100 = local_100 + 4;
                  }
                  if ((*(byte *)(iVar9 + 4) & 4) != 0) goto LAB_0002977c;
                  iVar13 = DAT_000292fc;
                  if (iVar21 == 1) goto LAB_000279c8;
                  goto LAB_000279c4;
                }
                if ((bVar31 & 4) == 0) goto LAB_000279ec;
                local_78 = CONCAT44(s_creation_000333e4._4_4_,s_creation_000333e4._0_4_);
                local_70[0] = (char)ram0x000333ec;
                if (local_100 != 0) {
                  local_100 = local_100 + 4;
                }
              }
              else {
                local_78 = CONCAT44(s_modification_000333d4._4_4_,s_modification_000333d4._0_4_);
                local_70[4] = (char)ram0x000333e0;
                local_70[0] = s_modification_000333d4[8];
                local_70[1] = s_modification_000333d4[9];
                local_70[2] = s_modification_000333d4[10];
                local_70[3] = s_modification_000333d4[0xb];
                if ((*(byte *)(iVar9 + 4) & 2) != 0) {
                  sVar18 = strlen((char *)&local_78);
                  iVar21 = 2;
                  uVar33 = sVar18 + 1;
                  *(undefined1 *)((int)&local_78 + sVar18) = 0x2f;
                  goto LAB_00027978;
                }
                if ((*(byte *)(iVar9 + 4) & 4) == 0) goto LAB_000279c8;
LAB_0002977c:
                local_c4 = (char *)&local_78;
                sVar18 = strlen(local_c4);
                *(undefined1 *)((int)&local_78 + sVar18) = 0x2f;
                *(undefined4 *)((int)&local_78 + sVar18 + 1) = s_creation_000333e4._0_4_;
                *(undefined4 *)((int)&local_78 + sVar18 + 5) = s_creation_000333e4._4_4_;
                local_70[sVar18 + 1] = s_creation_000333e4[8];
                if (local_100 != 0) {
                  local_100 = local_100 + 4;
                }
LAB_000279c4:
                iVar13 = DAT_000271ac;
              }
LAB_000279c8:
              local_c4 = (char *)&local_78;
              iVar9 = sprintf(DAT_00027200,DAT_000271b0,local_c4,iVar13,uVar25);
              (*pcVar32)(&DAT_000441a0,DAT_00027200,iVar9,0);
              goto LAB_000279ec;
            }
            if (puVar12 == (undefined1 *)0x4d49) {
              iVar13 = sprintf(DAT_00029204,(char *)(DAT_000292b8 + -8),0x4d49,DAT_000292ac,uVar23);
              (*pcVar32)(&DAT_000441a0,DAT_00029204,iVar13,0);
LAB_00027fa8:
              if (uVar23 < 8) goto LAB_00027d6c;
              uVar25 = FUN_0001b8b4(iVar9 + 8);
              local_78 = local_78 & 0xffffffffffffff00;
              uVar25 = uVar25 & 7;
              if (2 < uVar25) {
                uVar25 = 3;
              }
              uVar33 = FUN_0001b8c4(iVar9 + 4);
              if (uVar33 == 0x4f525056) {
                pcVar44 = "XABPRO";
              }
              else if (uVar33 < 0x4f525057) {
                if (uVar33 == 0x43484656) {
                  pcVar44 = "XABFHC";
                }
                else {
                  if (uVar33 != 0x4c4c4156) {
                    uVar38 = 0x42414656;
                    pcVar44 = "FAB";
                    goto LAB_0002801c;
                  }
                  pcVar44 = "XABALL";
                }
              }
              else if (uVar33 == 0x54445256) {
                pcVar44 = "XABRDT";
              }
              else {
                if (uVar33 < 0x54445257) {
                  uVar38 = 0x54414456;
                  pcVar44 = "XABDAT";
                }
                else {
                  if (uVar33 == 0x56534d56) {
                    if (uVar23 < 0x10) {
                      pcVar44 = "version";
                    }
                    else {
                      local_78 = CONCAT62(local_78._2_6_,0x2820);
                      pcVar44 = "version";
                      strncpy((char *)((int)&local_78 + 2),(char *)(iVar9 + 0x10),4);
                      local_78 = CONCAT26(0x29,(undefined6)local_78);
                    }
                    goto LAB_00028030;
                  }
                  uVar38 = 0x59454b56;
                  pcVar44 = "XABKEY";
                }
LAB_0002801c:
                if (uVar33 != uVar38) {
                  pcVar44 = "unknown";
                }
              }
LAB_00028030:
              pcVar32 = *(code **)(iVar11 + 0x30c);
              puVar41 = (&PTR_s_stored_00032a30)[uVar25];
              uVar16 = FUN_0001b8b4(iVar9 + 10);
              iVar9 = sprintf(DAT_00027200,
                              ".  The extra\n    field is %s and has %u bytes of VMS %s information%s"
                              ,puVar41,uVar16,pcVar44,&local_78);
LAB_00028074:
              (*pcVar32)(&DAT_000441a0,DAT_00027200,iVar9,0);
              pcVar32 = *(code **)(iVar11 + 0x30c);
              goto LAB_00026e88;
            }
            if (puVar12 == (undefined1 *)0x4d63) {
              iVar13 = sprintf(DAT_00029204,(char *)(DAT_00029290 + -0x468),0x4d63,DAT_00029290,
                               uVar23);
              (*pcVar32)(&DAT_000441a0,DAT_00029204,iVar13,0);
LAB_00028e1c:
              if (uVar23 == 0x40) {
                iVar13 = FUN_0001b8c4(iVar9 + 4);
                if (iVar13 != 0x70695a64) goto LAB_00027f10;
                FUN_00025398(iVar9 + 8);
                pcVar32 = *(code **)(iVar11 + 0x30c);
                local_78 = *(ulonglong *)(iVar9 + 0x25);
                local_70 = *(char (*) [8])(iVar9 + 0x2d);
                local_68 = *(undefined4 *)(iVar9 + 0x35);
                uStack_64 = *(undefined4 *)(iVar9 + 0x39);
                uStack_60 = *(undefined4 *)(iVar9 + 0x3d);
                local_5c = *(undefined2 *)(iVar9 + 0x41);
                local_5a = *(undefined1 *)(iVar9 + 0x43);
                *(undefined1 *)((int)&local_78 + (uint)*(byte *)(iVar9 + 0x24)) = 0;
                iVar9 = sprintf(DAT_00029204,DAT_000292c8,&local_78);
                (*pcVar32)(&DAT_000441a0,DAT_00029204,iVar9,0);
                pcVar32 = *(code **)(iVar11 + 0x30c);
                goto LAB_00026e88;
              }
            }
            else {
              uVar16 = DAT_00027194;
              if (puVar12 == (undefined1 *)0x4c41) goto LAB_00026f54;
LAB_00026ddc:
              iVar13 = sprintf(DAT_00027200,(char *)(DAT_0002718c + 0xc),puVar12,DAT_0002718c,uVar23
                              );
              (*pcVar32)(&DAT_000441a0,DAT_00027200,iVar13,0);
              if (puVar12 == (undefined1 *)0x4c41) {
LAB_00026f80:
                pcVar32 = *(code **)(iVar11 + 0x30c);
                if (3 < uVar23) {
                  pcVar44 = DAT_00027198;
                  if (puVar12 != (undefined1 *)0x9) {
                    pcVar44 = DAT_00027198 + 0x88;
                  }
                  uVar16 = FUN_0001b8c4(iVar29);
                  goto LAB_00026e68;
                }
                goto LAB_00027a5c;
              }
              if (puVar12 < (undefined1 *)0x4c42) {
                if (puVar12 == (undefined1 *)0x2705) goto LAB_00027b98;
                if (puVar12 < (undefined1 *)0x2706) {
                  if (puVar12 == (undefined1 *)0x7c8) goto LAB_00027ef4;
                  if (puVar12 == (undefined1 *)0x2605) goto LAB_00027bd8;
                  if (puVar12 == (undefined1 *)0x9) goto LAB_00026f80;
                }
                else {
                  if (puVar12 == &DAT_00004154) goto LAB_00028ef8;
                  if (puVar12 < (undefined1 *)0x4155) {
                    if (puVar12 == (undefined1 *)0x334d) goto LAB_000281f0;
                  }
                  else {
                    if (puVar12 == (undefined1 *)0x4453) goto LAB_00026e44;
                    if (puVar12 == (undefined1 *)0x4b46) goto LAB_00028160;
                  }
                }
              }
              else {
                if (puVar12 == (undefined1 *)0x6375) {
LAB_00027d64:
                  if (4 < uVar23) {
                    uVar16 = FUN_0001b8c4(iVar9 + 5);
                    if (uVar23 < 0x1e) {
                      pcVar32 = *(code **)(iVar11 + 0x30c);
                      iVar13 = sprintf(DAT_000292f8,DAT_000292e4,(uint)*(byte *)(iVar9 + 4),uVar16,
                                       uVar25);
                      (*pcVar32)(&DAT_000441a0,DAT_000292f8,iVar13,0);
                      local_c4 = (char *)uVar23;
                      if (uVar23 < 6) goto LAB_000279ec;
                    }
                    else {
                      local_c4 = (char *)0x1d;
                      pcVar32 = *(code **)(iVar11 + 0x30c);
                      iVar13 = sprintf(DAT_000292f8,DAT_000292f4,(uint)*(byte *)(iVar9 + 4),uVar16,
                                       uVar25);
                      (*pcVar32)(&DAT_000441a0,DAT_000292f8,iVar13,0);
                    }
                    pcVar44 = DAT_000292f8;
                    iVar13 = iVar9 + 8;
                    do {
                      pcVar32 = *(code **)(iVar11 + 0x30c);
                      sprintf(pcVar44,DAT_000292e8,(uint)*(byte *)(iVar13 + 1));
                      (*pcVar32)(&DAT_000441a0,pcVar44,3,0);
                      iVar21 = iVar13 + -2;
                      iVar13 = iVar13 + 1;
                    } while ((uint)(iVar21 - iVar9) < local_c4);
                    pcVar32 = *(code **)(iVar11 + 0x30c);
                    goto LAB_00026e88;
                  }
                  goto LAB_00027d6c;
                }
                if (puVar12 < (undefined1 *)0x6376) {
                  if (puVar12 == (undefined1 *)0x4d63) goto LAB_00028e1c;
                  if (puVar12 < (undefined1 *)0x4d64) {
                    if (puVar12 == (undefined1 *)0x4d49) goto LAB_00027fa8;
                  }
                  else {
                    if (puVar12 == (undefined1 *)0x5356) goto LAB_00027f44;
                    if (puVar12 == (undefined1 *)0x5455) goto LAB_00027944;
                  }
                }
                else {
                  if (puVar12 == (undefined1 *)0x7075) goto LAB_00027d64;
                  if (puVar12 < (undefined1 *)0x7076) {
                    if (puVar12 == (undefined1 *)0x6542) goto LAB_00027cb0;
                  }
                  else {
                    if (puVar12 == (undefined1 *)0x7441) {
LAB_00027cb0:
                      if (4 < uVar23) {
                        uVar16 = FUN_0001b8c4(iVar9 + 4);
                        pcVar32 = *(code **)(iVar11 + 0x30c);
                        pcVar44 = DAT_000271d0 + 0x58;
                        if (puVar12 == (undefined1 *)0x7441) {
                          pcVar44 = DAT_000271d0;
                        }
                        uVar33 = *(byte *)(iVar9 + 8) & 1;
                        if ((*(byte *)(iVar9 + 8) & 1) == 0) {
                          iVar9 = sprintf(DAT_000292f8,pcVar44,uVar16,DAT_000271d0 + -0x1a0,uVar25);
                          (*pcVar32)(&DAT_000441a0,DAT_000292f8,iVar9,uVar33);
                          pcVar32 = *(code **)(iVar11 + 0x30c);
                          local_100 = uVar33;
                        }
                        else {
                          iVar9 = sprintf(DAT_00027200,pcVar44,uVar16,&DAT_000332b8,uVar25);
                          (*pcVar32)(&DAT_000441a0,DAT_00027200,iVar9,0);
                          if (local_100 == 0) goto LAB_000279ec;
                          iVar9 = FUN_0001b8c4(iVar29);
                          pcVar32 = *(code **)(iVar11 + 0x30c);
                          local_100 = local_100 + iVar9;
                        }
                        goto LAB_00026e88;
                      }
                      goto LAB_00027d6c;
                    }
                    if (puVar12 == (undefined1 *)0xfb4a) goto LAB_00028108;
                  }
                }
              }
            }
LAB_00027f84:
            pcVar32 = *(code **)(iVar11 + 0x30c);
          }
LAB_00027a5c:
          if (uVar23 != 0) {
LAB_00027a64:
            if (uVar23 < 0x19) goto LAB_00027d78;
LAB_00027a6c:
            uVar4 = s___The_first_20_are__000332f4._12_4_;
            uVar17 = s___The_first_20_are__000332f4._8_4_;
            uVar16 = s___The_first_20_are__000332f4._4_4_;
            iVar13 = DAT_000271f0;
            *(undefined4 *)(DAT_000271f0 + 0xd0) = s___The_first_20_are__000332f4._0_4_;
            *(undefined4 *)(iVar13 + 0xd4) = uVar16;
            *(undefined4 *)(iVar13 + 0xd8) = uVar17;
            *(undefined4 *)(iVar13 + 0xdc) = uVar4;
            uVar17 = ram0x0003330c;
            uVar16 = s___The_first_20_are__000332f4._20_4_;
            *(undefined4 *)(iVar13 + 0xe0) = s___The_first_20_are__000332f4._16_4_;
            *(undefined4 *)(iVar13 + 0xe4) = uVar16;
            *(short *)(iVar13 + 0xe8) = (short)uVar17;
            *(char *)(iVar13 + 0xea) = (char)((uint)uVar17 >> 0x10);
            (*pcVar32)(&DAT_000441a0,DAT_00027200,0x1a,0);
            uVar25 = 0x14;
            goto LAB_00027ab0;
          }
        }
      }
LAB_00026e88:
      iVar9 = iVar29 + uVar23;
      (*pcVar32)(&DAT_000441a0,".",1,0);
    }
    (**(code **)(iVar11 + 0x30c))(&DAT_000441a0,"\n",1,0);
  }
  pcVar32 = *(code **)(iVar11 + 0x30c);
  uVar23 = *(uint *)((int)DWORD_ARRAY_00010130 + iVar10 + 0x14) >> 0xc;
  if ((uVar23 & 8) != 0) {
    if (uVar26 == 6 || (uVar26 & 0xf7) == 3) {
      iVar29 = DAT_000271e8 + 0x28;
      if ((uVar23 & 4) == 0) {
        iVar29 = DAT_000271e8;
      }
      iVar29 = sprintf(DAT_00027200,DAT_000271ec,"is",0x5855,DAT_000271e8 + 0xd8,uVar23 & 0xc,iVar29
                      );
      (*pcVar32)(&DAT_000441a0,DAT_00027200,iVar29,0);
      if (local_100 == 0) {
LAB_00028cc8:
        pcVar32 = *(code **)(iVar11 + 0x30c);
      }
      else {
        pcVar32 = *(code **)(iVar11 + 0x30c);
        local_100 = local_100 + (uVar23 & 0xc);
      }
    }
    else if ((uVar26 == 0) && ((uVar23 & 4) == 0)) {
      sprintf(DAT_00029204,DAT_0002927c,"may be",0x5855,DAT_00029278 + 0xd8,8,DAT_00029278);
      (*pcVar32)(&DAT_000441a0,DAT_00029204,0x87,0);
      goto LAB_00028cc8;
    }
  }
  uVar4 = s_There_is_no_file_comment__00033318._12_4_;
  uVar17 = s_There_is_no_file_comment__00033318._8_4_;
  uVar16 = s_There_is_no_file_comment__00033318._4_4_;
  iVar9 = DAT_000271f0;
  psVar36 = (short *)((int)DWORD_ARRAY_00010130 + iVar10 + 0x28);
  iVar29 = local_104;
  if (*psVar36 == 0) {
    *(undefined4 *)(DAT_000271f0 + 0xd0) = s_There_is_no_file_comment__00033318._0_4_;
    *(undefined4 *)(iVar9 + 0xd4) = uVar16;
    *(undefined4 *)(iVar9 + 0xd8) = uVar17;
    *(undefined4 *)(iVar9 + 0xdc) = uVar4;
    uVar4 = ram0x00033334;
    uVar17 = s_There_is_no_file_comment__00033318._24_4_;
    uVar16 = s_There_is_no_file_comment__00033318._20_4_;
    *(undefined4 *)(iVar9 + 0xe0) = s_There_is_no_file_comment__00033318._16_4_;
    *(undefined4 *)(iVar9 + 0xe4) = uVar16;
    *(undefined4 *)(iVar9 + 0xe8) = uVar17;
    *(short *)(iVar9 + 0xec) = (short)uVar4;
    (*pcVar32)(&DAT_000441a0,iVar9 + 0xd0,0x1d,0);
  }
  else {
    memcpy((void *)(DAT_00029224 + 0xd0),
           "\n------------------------- file comment begins ----------------------------\n",0x4d);
    (*pcVar32)(&DAT_000441a0,DAT_00029204,0x4c,0);
    iVar9 = FUN_0001b094(*psVar36,5);
    if ((iVar9 != 0) && (iVar29 = iVar9, 1 < iVar9)) goto LAB_0002880c;
    pcVar32 = *(code **)(iVar11 + 0x30c);
    memcpy((void *)(DAT_00029224 + 0xd0),
           "-------------------------- file comment ends -----------------------------\n",0x4c);
    (*pcVar32)(&DAT_000441a0,DAT_00029204,0x4b,0);
  }
joined_r0x00027ed8:
  iVar9 = iVar29;
  if (iVar29 != 0) {
LAB_0002709c:
    local_104 = iVar9;
    iVar9 = local_104;
    if (1 < iVar29) {
LAB_0002880c:
      if (1 < iVar9) goto LAB_0002645c;
      if (DAT_000441e4 != 0) {
        uVar23 = FUN_00021588(local_f4,local_fc);
        iVar47 = DAT_0002924c;
        pcVar32 = *(code **)(DAT_0002924c + 0x30c);
        if ((int)uVar23 < 0) {
          uVar23 = -uVar23;
          pcVar44 = "-";
        }
        else {
          pcVar44 = "";
        }
        iVar29 = DAT_000292fc;
        if (local_f8 != 1) {
          iVar29 = DAT_000292fc + 0x180;
        }
        uVar16 = FUN_0001b92c(local_f4,0,&DAT_00033278);
        uVar17 = FUN_0001b92c(local_fc,0,&DAT_00033278);
        iVar29 = sprintf(DAT_00029204,DAT_0002929c,local_f8,iVar29,uVar16,uVar17,pcVar44,uVar23 / 10
                         ,uVar23 % 10);
        (*pcVar32)(iVar47 + -0x91000,DAT_00029204,iVar29,0);
      }
      iVar47 = DAT_0002924c;
      if (local_e4 != (void *)0x0) {
        if (DAT_00044228 != 0) {
          piVar43 = (int *)((int)local_e4 + -4);
          uVar23 = 0;
          do {
            piVar43 = piVar43 + 1;
            iVar29 = *piVar43;
            while (iVar29 != 0) {
              uVar23 = uVar23 + 1;
              if (DAT_00044228 <= uVar23) goto LAB_00026468;
              piVar43 = piVar43 + 1;
              iVar29 = *piVar43;
            }
            pcVar32 = *(code **)(iVar47 + 0x30c);
            iVar29 = uVar23 * 4;
            uVar23 = uVar23 + 1;
            iVar29 = sprintf(DAT_00029204,"caution: filename not matched:  %s\n",
                             *(undefined4 *)(DAT_00044254 + iVar29));
            (*pcVar32)(&DAT_000441a0,DAT_00029204,iVar29,0x401);
          } while (uVar23 < DAT_00044228);
        }
        goto LAB_00026468;
      }
      if (local_e8 != (void *)0x0) goto LAB_00026568;
      goto LAB_00026494;
    }
  }
LAB_000270a4:
  local_fc = local_fc + *(int *)((int)DWORD_ARRAY_00010130 + iVar10);
  local_f4 = local_f4 + *(int *)((int)DWORD_ARRAY_00010130 + iVar10 + 4);
  if ((*(ushort *)((int)DWORD_ARRAY_00010130 + iVar10 + 0x20) & 1) != 0) {
    local_fc = local_fc + -0xc;
  }
  local_f8 = local_f8 + 1;
LAB_00026414:
  iVar47 = iVar47 + 1;
  goto LAB_000261dc;
}



/* ===== FUN_00029938 @ 00029938 size=788 ===== */

char * FUN_00029938(char *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  dirent *pdVar9;
  DIR *pDVar10;
  char *pcVar11;
  size_t __n;
  code *pcVar12;
  
  iVar3 = DAT_00029c58;
  if (*(int *)(DAT_00029c58 + 0x35c) == 0) {
    *(undefined4 *)(DAT_00029c58 + 0x35c) = 1;
    iVar8 = FUN_00021b28();
    if (iVar8 != 0) {
      pcVar11 = strrchr(param_1,0x2f);
      *(char **)(iVar3 + -0xcb8) = pcVar11;
      uVar2 = DAT_00029c50;
      if (pcVar11 == (char *)0x0) {
        *(char **)(iVar3 + -0xcb8) = param_1;
        pcVar11 = ".";
        *(undefined8 *)(iVar3 + 0x354) = uVar2;
        *(char **)(iVar3 + -0xcb4) = ".";
      }
      else {
        *(char **)(iVar3 + -0xcb8) = pcVar11 + 1;
        __n = (int)(pcVar11 + 1) - (int)param_1;
        *(size_t *)(iVar3 + 0x358) = __n;
        pcVar11 = malloc(__n + 1);
        *(char **)(iVar3 + -0xcb4) = pcVar11;
        uVar7 = s_warning__cannot_allocate_wildcar_00033528._12_4_;
        uVar6 = s_warning__cannot_allocate_wildcar_00033528._8_4_;
        uVar5 = s_warning__cannot_allocate_wildcar_00033528._4_4_;
        pcVar4 = DAT_00029c64;
        if (pcVar11 == (char *)0x0) {
          pcVar12 = *(code **)(iVar3 + -0xcf4);
          *(undefined4 *)DAT_00029c64 = s_warning__cannot_allocate_wildcar_00033528._0_4_;
          *(undefined4 *)(pcVar4 + 4) = uVar5;
          *(undefined4 *)(pcVar4 + 8) = uVar6;
          *(undefined4 *)(pcVar4 + 0xc) = uVar7;
          uVar7 = s_warning__cannot_allocate_wildcar_00033528._28_4_;
          uVar6 = s_warning__cannot_allocate_wildcar_00033528._24_4_;
          uVar5 = s_warning__cannot_allocate_wildcar_00033528._20_4_;
          *(undefined4 *)(pcVar4 + 0x10) = s_warning__cannot_allocate_wildcar_00033528._16_4_;
          *(undefined4 *)(pcVar4 + 0x14) = uVar5;
          *(undefined4 *)(pcVar4 + 0x18) = uVar6;
          *(undefined4 *)(pcVar4 + 0x1c) = uVar7;
          uVar6 = s_warning__cannot_allocate_wildcar_00033528._40_4_;
          uVar5 = s_warning__cannot_allocate_wildcar_00033528._36_4_;
          *(undefined4 *)(pcVar4 + 0x20) = s_warning__cannot_allocate_wildcar_00033528._32_4_;
          *(undefined4 *)(pcVar4 + 0x24) = uVar5;
          *(undefined4 *)(pcVar4 + 0x28) = uVar6;
          (*pcVar12)(iVar3 + -0x92000,pcVar4,0x2b,0x201);
          strncpy((char *)(iVar3 + -0xcb0),param_1,0x1000);
          *(undefined1 *)(iVar3 + 0x34f) = 0;
          return (char *)(iVar3 + -0xcb0);
        }
        strncpy(pcVar11,param_1,__n);
        pcVar11[__n] = '\0';
        *(undefined4 *)(iVar3 + 0x354) = 1;
      }
      pDVar10 = opendir(pcVar11);
      *(DIR **)(iVar3 + 0x360) = pDVar10;
      if (pDVar10 != (DIR *)0x0) {
        while( true ) {
          pdVar9 = readdir(pDVar10);
          pcVar11 = pdVar9->d_name;
          if (pdVar9 == (dirent *)0x0) break;
          if ((((pdVar9->d_name[0] != '.') || (**(char **)(iVar3 + -0xcb8) == '.')) &&
              (iVar8 = FUN_00021b04(pcVar11,*(char **)(iVar3 + -0xcb8),0), iVar8 != 0)) &&
             ((iVar8 = strcmp(pcVar11,"."), iVar8 != 0 &&
              (iVar8 = strcmp(pcVar11,".."), pcVar4 = DAT_00029c5c, iVar8 != 0)))) {
            if (*(int *)(iVar3 + 0x354) != 0) {
              strcpy(DAT_00029c5c,*(char **)(iVar3 + -0xcb4));
              strcpy(pcVar4 + *(int *)(iVar3 + 0x358),pcVar11);
              return pcVar4;
            }
            goto LAB_00029b34;
          }
          pDVar10 = *(DIR **)(iVar3 + 0x360);
        }
        closedir(*(DIR **)(iVar3 + 0x360));
        *(undefined4 *)(iVar3 + 0x360) = 0;
      }
      pcVar11 = DAT_00029c5c;
      strncpy(DAT_00029c5c,param_1,0x1000);
      *(undefined1 *)(iVar3 + 0x34f) = 0;
      return pcVar11;
    }
    pcVar11 = (char *)(iVar3 + -0xcb0);
    strncpy(pcVar11,param_1,0x1000);
    *(undefined1 *)(iVar3 + 0x34f) = 0;
    *(undefined4 *)(iVar3 + 0x354) = 0;
    *(undefined4 *)(iVar3 + 0x360) = 0;
  }
  else {
    pDVar10 = *(DIR **)(DAT_00029c58 + 0x360);
    if (pDVar10 == (DIR *)0x0) {
      piVar1 = (int *)(DAT_00029c58 + 0x354);
      *(undefined4 *)(DAT_00029c58 + 0x35c) = 0;
      if (*piVar1 != 0) {
        free(*(void **)(iVar3 + -0xcb4));
        return (char *)0x0;
      }
    }
    else {
      while( true ) {
        pdVar9 = readdir(pDVar10);
        pcVar11 = pdVar9->d_name;
        if (pdVar9 == (dirent *)0x0) break;
        if (((pdVar9->d_name[0] != '.') || (**(char **)(iVar3 + -0xcb8) == '.')) &&
           (iVar8 = FUN_00021b04(pcVar11,*(char **)(iVar3 + -0xcb8),0), pcVar4 = DAT_00029c5c,
           iVar8 != 0)) {
          if (*(int *)(iVar3 + 0x354) != 0) {
            strcpy(DAT_00029c5c + *(int *)(iVar3 + 0x358),pcVar11);
            return pcVar4;
          }
LAB_00029b34:
          pcVar4 = DAT_00029c5c;
          strcpy(DAT_00029c5c,pcVar11);
          return pcVar4;
        }
        pDVar10 = *(DIR **)(iVar3 + 0x360);
      }
      closedir(*(DIR **)(iVar3 + 0x360));
      *(undefined4 *)(iVar3 + 0x360) = 0;
      *(undefined4 *)(iVar3 + 0x35c) = 0;
      if (*(int *)(iVar3 + 0x354) != 0) {
        free(*(void **)(DAT_00029c60 + 0x34c));
        return (char *)0x0;
      }
    }
    pcVar11 = (char *)0x0;
  }
  return pcVar11;
}



/* ===== FUN_00029c68 @ 00029c68 size=588 ===== */

/* WARNING: Removing unreachable block (ram,0x00029f1c) */
/* WARNING: Removing unreachable block (ram,0x00029f14) */
/* WARNING: Removing unreachable block (ram,0x00029f20) */

undefined4 FUN_00029c68(void)

{
  int iVar1;
  undefined4 uVar2;
  __mode_t __mask;
  size_t sVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  iVar1 = DAT_00029f30;
  uVar5 = *(uint *)(DAT_00029f30 + 0x144);
  iVar6 = *(int *)(DAT_00029f30 + -0xff34);
  *(undefined4 *)(iVar6 + 0x14) = 0;
                    /* WARNING: Could not recover jumptable at 0x00029c8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (*(byte *)(iVar6 + 0x13) < 0x1f) {
    uVar2 = (*(code *)(&switchD_00029c8c::switchdataD_00029c94)[*(byte *)(iVar6 + 0x13)])();
    return uVar2;
  }
  if ((((uVar5 & 0x10) == 0) && (sVar3 = strlen(DAT_00029f34), sVar3 != 0)) &&
     (*(char *)((int)&DAT_000d43c0 + sVar3 + 3) == '/')) {
    uVar5 = uVar5 | 0x10;
  }
  if ((uVar5 & 1) == 0) {
    uVar4 = 2;
  }
  else {
    uVar4 = 0;
  }
  uVar4 = (uVar5 & 0x1f) >> 4 | uVar4;
  if ((uVar4 << 6 | 0x100) != 0) {
    *(uint *)(iVar6 + 0x14) = uVar4 << 6 | uVar4 << 3 | uVar4 | 0x124;
    __mask = umask(0);
    umask(__mask);
    *(uint *)(*(int *)(iVar1 + -0xff34) + 0x14) =
         *(uint *)(*(int *)(iVar1 + -0xff34) + 0x14) & ~__mask;
    return 0;
  }
  *(byte *)(iVar6 + 0x18) = *(byte *)(iVar6 + 0x18) & 0xbf;
  return 0;
}



/* ===== FUN_00029f38 @ 00029f38 size=1344 ===== */

undefined4 FUN_00029f38(char *param_1,uint param_2)

{
  char cVar1;
  size_t sVar2;
  char *pcVar3;
  int iVar4;
  void *pvVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  char *pcVar10;
  int iVar11;
  undefined1 *puVar12;
  code *pcVar13;
  undefined4 uVar14;
  
  iVar11 = DAT_0002a480;
  iVar7 = DAT_0002a478;
  param_2 = param_2 & 7;
  if (param_2 == 2) {
    cVar1 = *param_1;
    **(char **)(DAT_0002a480 + 0x344) = cVar1;
    while (cVar1 != '\0') {
      param_1 = param_1 + 1;
      iVar7 = *(int *)(iVar11 + 0x344);
      *(int *)(iVar11 + 0x344) = iVar7 + 1;
      cVar1 = *param_1;
      *(char *)(iVar7 + 1) = cVar1;
    }
    iVar4 = *(int *)(iVar11 + 0x344) - (int)*(char **)(iVar11 + 0x340);
    iVar7 = stat(*(char **)(iVar11 + 0x340),DAT_0002a47c);
    if (iVar7 == 0) {
      if ((DAT_000d4330 & 0xf000) != 0x4000) {
        uVar14 = 0x300;
        pcVar13 = *(code **)(iVar11 + 0x30c);
        uVar8 = FUN_000190f4(*(undefined4 *)(iVar11 + 0x340),DAT_0002a488,0x4000);
        uVar6 = FUN_000190f4(DAT_0002a48c,DAT_0002a484,0x4000);
        iVar7 = sprintf(DAT_0002a490,
                        "checkdir error:  %s exists but is not directory\n                 unable to process %s.\n"
                        ,uVar8,uVar6);
        goto LAB_0002a2d4;
      }
      if (iVar4 < 0xffe) {
LAB_0002a0fc:
        puVar12 = *(undefined1 **)(iVar11 + 0x344);
        *(undefined1 **)(iVar11 + 0x344) = puVar12 + 1;
        *puVar12 = 0x2f;
        **(undefined1 **)(iVar11 + 0x344) = 0;
        return 0;
      }
      pcVar3 = *(char **)(iVar11 + 0x340);
    }
    else {
      pcVar3 = *(char **)(iVar11 + 0x340);
      if (DAT_00044238 == 0) {
        free(pcVar3);
        return 0x200;
      }
      if (iVar4 < 0xffe) {
        iVar7 = mkdir(pcVar3,0x1ff);
        if (iVar7 != -1) {
          *(undefined4 *)(iVar11 + 0x334) = 1;
          goto LAB_0002a0fc;
        }
        uVar14 = 0x300;
        pcVar13 = *(code **)(iVar11 + 0x30c);
        uVar8 = FUN_000190f4(*(undefined4 *)(iVar11 + 0x340),DAT_0002a488,0x4000);
        piVar9 = __errno_location();
        pcVar3 = strerror(*piVar9);
        uVar6 = FUN_000190f4(DAT_0002a48c,DAT_0002a484,0x4000);
        iVar7 = sprintf(DAT_0002a490,
                        "checkdir error:  cannot create %s\n                 %s\n                 unable to process %s.\n"
                        ,uVar8,pcVar3,uVar6);
        goto LAB_0002a2d4;
      }
    }
    pcVar13 = *(code **)(iVar11 + 0x30c);
    uVar8 = FUN_000190f4(pcVar3);
    uVar14 = 0x400;
    iVar7 = sprintf(DAT_0002a490,"checkdir error:  path too long: %s\n",uVar8);
LAB_0002a2d4:
    (*pcVar13)(&DAT_000441a0,DAT_0002a490,iVar7,1);
    free(*(void **)(iVar11 + 0x340));
    return uVar14;
  }
  if (param_2 == 4) {
    strcpy(param_1,*(char **)(DAT_0002a480 + 0x340));
    free(*(void **)(iVar11 + 0x340));
    *(undefined8 *)(iVar11 + 0x340) = 0;
    return 0;
  }
  if (param_2 == 3) {
    pcVar3 = *(char **)(DAT_0002a480 + 0x344);
    do {
      cVar1 = *param_1;
      *pcVar3 = cVar1;
      if (cVar1 == '\0') {
        return 0;
      }
      puVar12 = *(undefined1 **)(iVar11 + 0x344);
      pcVar3 = puVar12 + 1;
      *(char **)(iVar11 + 0x344) = pcVar3;
      param_1 = param_1 + 1;
    } while ((int)pcVar3 - *(int *)(iVar11 + 0x340) < 0x1000);
    *(undefined1 **)(iVar11 + 0x344) = puVar12;
    *puVar12 = 0;
    pcVar13 = *(code **)(iVar11 + 0x30c);
    uVar8 = FUN_000190f4(DAT_0002a48c,DAT_0002a484,0x4000);
    uVar6 = FUN_000190f4(*(undefined4 *)(iVar11 + 0x340),DAT_0002a488,0x4000);
    iVar7 = sprintf(DAT_0002a490,
                    "checkdir warning:  path too long; truncating\n                   %s\n                -> %s\n"
                    ,uVar8,uVar6);
    (*pcVar13)(&DAT_000441a0,DAT_0002a490,iVar7,0x201);
    return 0x100;
  }
  if (param_2 == 1) {
    sVar2 = strlen(DAT_0002a48c);
    iVar7 = DAT_0002a478;
    iVar11 = *(int *)(DAT_0002a478 + 0x350);
    pcVar3 = malloc(iVar11 + 1 + sVar2);
    *(char **)(iVar7 + -0xcc0) = pcVar3;
    if (pcVar3 == (char *)0x0) {
      return 0xa00;
    }
    if ((0 < iVar11) && (*(int *)(iVar7 + -0xcc8) == 0)) {
      strcpy(pcVar3,*(char **)(iVar7 + -0xcc4));
      *(char **)(iVar7 + -0xcbc) = pcVar3 + iVar11;
      return 0;
    }
    *(char **)(iVar7 + -0xcbc) = pcVar3;
    *pcVar3 = '\0';
    return 0;
  }
  if (param_2 != 0) {
    if (param_2 != 5) {
      return 0x6300;
    }
    if (0 < *(int *)(DAT_0002a478 + 0x350)) {
      free(*(void **)(DAT_0002a478 + -0xcc4));
      *(undefined4 *)(iVar7 + 0x350) = 0;
      return 0;
    }
    return 0;
  }
  if (param_1 == (char *)0x0) {
    *(undefined4 *)(DAT_0002a478 + 0x350) = 0;
    return 0;
  }
  if (0 < *(int *)(DAT_0002a478 + 0x350)) {
    return 0;
  }
  sVar2 = strlen(param_1);
  *(size_t *)(iVar7 + 0x350) = sVar2;
  if (sVar2 == 0) {
    return 0;
  }
  pcVar3 = malloc(sVar2 + 2);
  if (pcVar3 == (char *)0x0) {
    *(undefined4 *)(iVar7 + 0x350) = 0;
    return 0xa00;
  }
  strcpy(pcVar3,param_1);
  iVar11 = sVar2 - 1;
  if (pcVar3[iVar11] == '/') {
    *(int *)(iVar7 + 0x350) = iVar11;
    pcVar3[iVar11] = '\0';
    iVar4 = 0;
    if (iVar11 == 0) goto LAB_0002a034;
  }
  iVar11 = stat(pcVar3,DAT_0002a47c);
  if ((iVar11 != 0) || ((DAT_000d4330 & 0xf000) != 0x4000)) {
    if (DAT_00044238 == 0) {
      free(pcVar3);
      *(undefined4 *)(iVar7 + 0x350) = 0;
      return 0x200;
    }
    iVar4 = mkdir(pcVar3,0x1ff);
    iVar11 = DAT_0002a480;
    if (iVar4 == -1) {
      pcVar13 = *(code **)(DAT_0002a480 + 0x30c);
      uVar8 = FUN_000190f4(pcVar3,DAT_0002a484,0x4000);
      piVar9 = __errno_location();
      pcVar10 = strerror(*piVar9);
      iVar4 = sprintf(DAT_0002a490,
                      "checkdir:  cannot create extraction directory: %s\n           %s\n",uVar8,
                      pcVar10);
      (*pcVar13)(iVar11 + -0x91000,DAT_0002a490,iVar4,1);
      free(pcVar3);
      *(undefined4 *)(iVar7 + 0x350) = 0;
      return 0x300;
    }
  }
  iVar4 = *(int *)(iVar7 + 0x350);
  sVar2 = iVar4 + 1;
LAB_0002a034:
  pcVar3[iVar4] = '/';
  pcVar3[sVar2] = '\0';
  *(size_t *)(iVar7 + 0x350) = sVar2;
  pvVar5 = realloc(pcVar3,iVar4 + 2);
  *(void **)(DAT_0002a480 + 0x33c) = pvVar5;
  if (pvVar5 == (void *)0x0) {
    free(pcVar3);
    *(undefined4 *)(iVar7 + 0x350) = 0;
    return 0xa00;
  }
  return 0;
}



/* ===== FUN_0002a494 @ 0002a494 size=1316 ===== */

/* WARNING: Restarted to delay deadcode elimination for space: ram */

uint FUN_0002a494(uint param_1)

{
  ushort uVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  char *pcVar5;
  size_t sVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  uint uVar12;
  byte *pbVar13;
  undefined2 local_1028;
  undefined1 local_1026;
  
  if ((*(byte *)(DAT_000c426c + 0x18) & 0x20) != 0) {
    return 0x1100;
  }
  if (DAT_000441c0 == 0) {
    DAT_000d54d4 = DAT_000441c0;
    DAT_00044238 = 1;
    if (param_1 != 0) {
LAB_0002a6e4:
      DAT_00044238 = 1;
      param_1 = (uint)(*(char *)(DAT_0002a9c4 + 0x224) == '/');
    }
  }
  else {
    DAT_000d54d4 = *(byte *)(DAT_000c426c + 0x18) & 0x20;
    if (param_1 != 0) goto LAB_0002a6e4;
    DAT_00044238 = 0;
    DAT_000d54d4 = 0;
  }
  DAT_000d54d8 = param_1;
  iVar4 = FUN_00029f38(0,1);
  if (iVar4 == 0xa00) {
    return 0xa00;
  }
  local_1028 = (ushort)local_1028._1_1_ << 8;
  pbVar13 = DAT_0002a9b8;
  if ((DAT_000441c8 != 0) &&
     (pcVar5 = strrchr((char *)DAT_0002a9b8,0x2f), pbVar13 = DAT_0002a9b8, pcVar5 != (char *)0x0)) {
    pbVar13 = (byte *)(pcVar5 + 1);
  }
  uVar12 = 0;
  bVar2 = false;
  puVar10 = &local_1028;
  puVar11 = (undefined2 *)0x0;
LAB_0002a568:
  pcVar3 = DAT_000d54ac;
  uVar8 = (uint)*pbVar13;
  puVar9 = puVar10;
  if (uVar8 != 0) {
    while (pbVar13 = pbVar13 + 1, uVar8 != 0x2f) {
      if (uVar8 == 0x3b) {
        *(undefined1 *)puVar9 = 0x3b;
        puVar10 = (undefined2 *)((int)puVar9 + 1);
        puVar11 = puVar9;
        goto LAB_0002a568;
      }
      if (((DAT_0004420c == 0) && ((*(ushort *)(__ctype_b + uVar8 * 2) & 0x40) == 0)) &&
         (puVar10 = puVar9, 0x7e < uVar8 - 0x80)) goto LAB_0002a568;
      puVar10 = (undefined2 *)((int)puVar9 + 1);
      *(char *)puVar9 = (char)uVar8;
      uVar8 = (uint)*pbVar13;
      puVar9 = puVar10;
      if (uVar8 == 0) goto LAB_0002a5c8;
    }
    *(undefined1 *)puVar9 = 0;
    iVar4 = strcmp((char *)&local_1028,".");
    if (iVar4 == 0) {
      local_1028 = local_1028 & 0xff00;
    }
    else if ((DAT_00044208 == 0) && (iVar4 = strcmp((char *)&local_1028,".."), iVar4 == 0)) {
      local_1028 = local_1028 & 0xff00;
      bVar2 = true;
    }
    else {
      if ((char)local_1028 == '\0') {
        puVar10 = &local_1028;
        puVar11 = (undefined2 *)0x0;
        goto LAB_0002a568;
      }
      uVar12 = FUN_00029f38(&local_1028,2);
      if (0x100 < (uVar12 & 0x7f00)) {
        return uVar12;
      }
    }
    puVar11 = (undefined2 *)0x0;
    puVar10 = &local_1028;
    goto LAB_0002a568;
  }
LAB_0002a5c8:
  if ((bVar2) && (DAT_000441e0 == 0)) {
    uVar7 = FUN_000190f4(DAT_0002a9b8,DAT_0002a9bc,0x4000);
    iVar4 = sprintf(DAT_0002a9c0,"warning:  skipped \"../\" path component(s) in %s\n",uVar7);
    (*pcVar3)(&DAT_000441a0,DAT_0002a9c0,iVar4,0);
    if ((uVar12 & 0xffff80ff) == 0) {
      uVar12 = uVar12 & 0x7f00 | 1;
    }
  }
  sVar6 = strlen((char *)DAT_0002a9b8);
  if (*(char *)((int)&DAT_000d43c0 + sVar6 + 3) != '/') {
    *(undefined1 *)puVar10 = 0;
    if (DAT_000441f8 == 0 && puVar11 != (undefined2 *)0x0) {
      uVar8 = (uint)*(byte *)((int)puVar11 + 1);
      pbVar13 = (byte *)((int)puVar11 + 1);
      uVar1 = *(ushort *)(__ctype_b + uVar8 * 2);
      while ((uVar1 & 8) != 0) {
        pbVar13 = pbVar13 + 1;
        uVar8 = (uint)*pbVar13;
        uVar1 = *(ushort *)(__ctype_b + uVar8 * 2);
      }
      if (uVar8 == 0) {
        *(undefined1 *)puVar11 = 0;
      }
    }
    iVar4 = strcmp((char *)&local_1028,".");
    if (iVar4 == 0) {
      local_1028 = CONCAT11(local_1028._1_1_,0x5f);
    }
    else {
      iVar4 = strcmp((char *)&local_1028,"..");
      pcVar3 = DAT_000d54ac;
      if (iVar4 == 0) {
        local_1028 = (ushort)DAT_00033764;
        local_1026 = (undefined1)((uint)DAT_00033764 >> 0x10);
      }
      if ((char)local_1028 == '\0') {
        uVar7 = FUN_000190f4(DAT_0002a9b8,DAT_0002a9bc,0x4000);
        iVar4 = sprintf(DAT_0002a9c0,"mapname:  conversion of %s failed\n",uVar7);
        (*pcVar3)(&DAT_000441a0,DAT_0002a9c0,iVar4,1);
        return uVar12 & 0xffff80ff | 0x300;
      }
    }
    FUN_00029f38(&local_1028,3);
    FUN_00029f38(DAT_0002a9b8,4);
    return uVar12;
  }
  FUN_00029f38(DAT_0002a9b8,4);
  pcVar3 = DAT_000d54ac;
  if (DAT_000d54d4 == 0) {
    return uVar12 & 0xffff80ff | 0x200;
  }
  if (DAT_000441e0 == 0) {
    uVar7 = FUN_000190f4(DAT_0002a9b8,DAT_0002a9bc,0x4000);
    iVar4 = sprintf(DAT_0002a9c0,"   creating: %s\n",uVar7);
    (*pcVar3)(&DAT_000441a0,DAT_0002a9c0,iVar4,0);
  }
  pcVar5 = (char *)(DAT_000c426c + 0x13);
  if (DAT_000441cc == 0) {
    uVar8 = *(uint *)(DAT_000c426c + 0x14) & 0xf1ff;
    *(uint *)(DAT_000c426c + 0x14) = uVar8;
    if ((*pcVar5 == '\x03') && (DAT_00044200 != 0)) goto LAB_0002a8b4;
  }
  else {
    uVar8 = *(uint *)(DAT_000c426c + 0x14) & 0xffff;
    *(uint *)(DAT_000c426c + 0x14) = uVar8;
    if (*pcVar5 == '\x03') goto LAB_0002a8b4;
  }
  iVar4 = stat((char *)&DAT_0002a9c8[1].st_ctim.tv_nsec,DAT_0002a9c8);
  if (iVar4 == 0) {
    uVar8 = *(uint *)(DAT_0002a9c4 + 400) & 0x400 | *(uint *)(DAT_000c426c + 0x14);
    *(uint *)(DAT_000c426c + 0x14) = uVar8;
  }
  else {
    perror("Could not read directory attributes");
    uVar8 = *(uint *)(DAT_000c426c + 0x14);
  }
LAB_0002a8b4:
  iVar4 = chmod((char *)DAT_0002a9b8,uVar8 | 0x1c0);
  if (iVar4 != 0) {
    perror("chmod (directory attributes) error");
  }
  return uVar12 & 0xffff80ff | 0x1000;
}



/* ===== FUN_0002a9cc @ 0002a9cc size=1136 ===== */

void FUN_0002a9cc(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  size_t sVar8;
  uint __size;
  undefined4 *__ptr;
  undefined4 *puVar9;
  void *__dest;
  int iVar10;
  undefined4 uVar11;
  __uid_t extraout_r1;
  __uid_t _Var12;
  __uid_t *p_Var13;
  code *pcVar14;
  __uid_t local_34;
  __gid_t local_30;
  utimbuf local_2c;
  
  iVar10 = DAT_0002ae3c;
  if (*(int *)(DAT_0002ae3c + 0x10c) == 0) {
    local_2c.modtime = FUN_0001ada4(*(undefined4 *)(DAT_0002ae3c + 0x11c));
    uVar3 = 0;
LAB_0002ac2c:
    local_2c.actime = local_2c.modtime;
  }
  else {
    uVar3 = FUN_0002429c(*(int *)(DAT_0002ae3c + 0x10c),*(undefined2 *)(DAT_0002ae3c + 300),0,
                         *(undefined4 *)(DAT_0002ae3c + 0x11c),&local_2c,&local_34);
    if ((uVar3 & 1) == 0) {
      local_2c.modtime = FUN_0001ada4(*(undefined4 *)(iVar10 + 0x11c));
    }
    if ((uVar3 & 2) == 0) goto LAB_0002ac2c;
  }
  if ((DAT_00044200 == 0) || ((uVar3 & 0x100) == 0)) {
    if (*(int *)(iVar10 + 0x200) != 0) {
      uVar3 = *(uint *)(iVar10 + 0x118);
      bVar1 = false;
      iVar4 = 4;
      goto LAB_0002ab20;
    }
  }
  else {
    if (*(int *)(iVar10 + 0x200) != 0) {
      uVar3 = *(uint *)(iVar10 + 0x118);
      bVar1 = true;
      iVar4 = 0xc;
LAB_0002ab20:
      sVar8 = strlen(DAT_0002ae4c);
      iVar5 = DAT_0002ae50;
      __size = iVar4 + uVar3 + 0x19 + sVar8;
      if (__size < uVar3) {
        pcVar14 = *(code **)(DAT_0002ae50 + 0x30c);
        uVar11 = FUN_000190f4(DAT_0002ae4c,DAT_0002ae54,0x4000);
        pcVar7 = "warning:  symbolic link (%s) failed: mem alloc overflow\n";
      }
      else {
        __ptr = malloc(__size);
        iVar5 = DAT_0002ae50;
        iVar2 = DAT_0002ae48;
        if (__ptr != (undefined4 *)0x0) {
          p_Var13 = (__uid_t *)0x0;
          __ptr[2] = iVar4;
          *__ptr = 0;
          if (bVar1) {
            p_Var13 = &local_34;
          }
          iVar5 = *(int *)(iVar2 + 0xcc);
          __ptr[1] = uVar3;
          puVar9 = __ptr;
          _Var12 = extraout_r1;
          if (bVar1) {
            puVar9 = (undefined4 *)*p_Var13;
            _Var12 = p_Var13[1];
          }
          __ptr[5] = *(undefined4 *)(iVar5 + 0x14);
          if (bVar1) {
            __ptr[6] = puVar9;
            __ptr[7] = _Var12;
          }
          pcVar7 = DAT_0002ae4c;
          iVar4 = (int)__ptr + iVar4 + 0x14;
          __dest = (void *)(iVar4 + uVar3 + 1);
          __ptr[3] = iVar4;
          __ptr[4] = __dest;
          memcpy(__dest,pcVar7,sVar8 + 1);
          rewind(*(FILE **)(iVar10 + 0x20c));
          sVar8 = fread((void *)__ptr[3],1,uVar3,*(FILE **)(iVar10 + 0x20c));
          iVar4 = DAT_0002ae50;
          if (sVar8 != uVar3) {
            pcVar14 = *(code **)(DAT_0002ae50 + 0x30c);
            uVar11 = FUN_000190f4(DAT_0002ae4c,DAT_0002ae54,0x4000);
            iVar5 = sprintf(DAT_0002ae44,"warning:  symbolic link (%s) failed\n",uVar11);
            (*pcVar14)(iVar4 + -0x91000,DAT_0002ae44,iVar5,0x201);
            free(__ptr);
            fclose(*(FILE **)(iVar10 + 0x20c));
            return;
          }
          fclose(*(FILE **)(iVar10 + 0x20c));
          *(undefined1 *)(__ptr[3] + uVar3) = 0;
          iVar4 = DAT_0002ae50;
          if (DAT_000441e0 == 0) {
            pcVar14 = *(code **)(DAT_0002ae50 + 0x30c);
            uVar11 = FUN_000190f4(__ptr[3],DAT_0002ae54,0x4000);
            iVar5 = sprintf(DAT_0002ae44,"-> %s ",uVar11);
            (*pcVar14)(iVar4 + -0x91000,DAT_0002ae44,iVar5,0);
          }
          if (*(undefined4 **)(iVar10 + 0x208) == (undefined4 *)0x0) {
            *(undefined4 **)(iVar10 + 0x204) = __ptr;
          }
          else {
            **(undefined4 **)(iVar10 + 0x208) = __ptr;
          }
          *(undefined4 **)(iVar10 + 0x208) = __ptr;
          return;
        }
        pcVar14 = *(code **)(DAT_0002ae50 + 0x30c);
        uVar11 = FUN_000190f4(DAT_0002ae4c,DAT_0002ae54,0x4000);
        pcVar7 = "warning:  symbolic link (%s) failed: no mem\n";
      }
      iVar4 = sprintf(DAT_0002ae44,pcVar7,uVar11);
      (*pcVar14)(iVar5 + -0x91000,DAT_0002ae44,iVar4,0x201);
      fclose(*(FILE **)(iVar10 + 0x20c));
      return;
    }
    iVar4 = fileno(*(FILE **)(iVar10 + 0x20c));
    iVar5 = fchown(iVar4,local_34,local_30);
    pcVar14 = DAT_000d54ac;
    iVar4 = DAT_000441e0;
    if (iVar5 != 0) {
      piVar6 = __errno_location();
      if (iVar4 == 0) {
        pcVar7 = strerror(*piVar6);
        iVar4 = sprintf(DAT_0002ae44,DAT_0002ae40,local_34,local_30,pcVar7);
      }
      else {
        uVar11 = FUN_000190f4(DAT_0002ae4c,DAT_0002ae54,0x4000);
        pcVar7 = strerror(*piVar6);
        iVar4 = sprintf(DAT_0002ae44,
                        "warning:  cannot set UID %lu and/or GID %lu for %s\n          %s\n",
                        local_34,local_30,uVar11,pcVar7);
      }
      (*pcVar14)(&DAT_000441a0,DAT_0002ae44,iVar4,0x201);
    }
  }
  iVar4 = fileno(*(FILE **)(iVar10 + 0x20c));
  uVar3 = *(uint *)(*(int *)(DAT_0002ae48 + 0xcc) + 0x14);
  if (DAT_000441cc == 0) {
    uVar3 = uVar3 & 0xfffff1ff;
  }
  iVar4 = fchmod(iVar4,uVar3 & 0xffff);
  if (iVar4 != 0) {
    perror("fchmod (file attributes) error");
  }
  fclose(*(FILE **)(iVar10 + 0x20c));
  if ((DAT_000441bc < 2) && (iVar10 = utime(DAT_0002ae4c,&local_2c), iVar10 != 0)) {
    piVar6 = __errno_location();
    iVar10 = DAT_0002ae50;
    pcVar14 = *(code **)(DAT_0002ae50 + 0x30c);
    if (DAT_000441e0 == 0) {
      pcVar7 = strerror(*piVar6);
      iVar4 = sprintf(DAT_0002ae44,DAT_0002ae58,pcVar7);
    }
    else {
      uVar11 = FUN_000190f4(DAT_0002ae4c,DAT_0002ae54,0x4000);
      pcVar7 = strerror(*piVar6);
      iVar4 = sprintf(DAT_0002ae44,DAT_0002ae5c,uVar11,pcVar7);
    }
    (*pcVar14)(iVar10 + -0x91000,DAT_0002ae44,iVar4,0x201);
  }
  return;
}



/* ===== FUN_0002ae60 @ 0002ae60 size=172 ===== */

undefined4 FUN_0002ae60(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 uVar6;
  code *pcVar7;
  undefined4 uVar8;
  
  if (*(uint *)(param_1 + 8) < 5) {
    return 0;
  }
  iVar2 = lchown(*(char **)(param_1 + 0x10),*(__uid_t *)(param_1 + 0x18),
                 *(__gid_t *)(param_1 + 0x1c));
  iVar1 = DAT_0002af0c;
  if (iVar2 != 0) {
    uVar8 = *(undefined4 *)(param_1 + 0x18);
    pcVar7 = *(code **)(DAT_0002af0c + 0x30c);
    uVar6 = *(undefined4 *)(param_1 + 0x1c);
    uVar3 = FUN_000190f4(*(undefined4 *)(param_1 + 0x10),DAT_0002af10,0x4000);
    piVar4 = __errno_location();
    pcVar5 = strerror(*piVar4);
    iVar2 = sprintf(DAT_0002af14,
                    "warning:  cannot set UID %lu and/or GID %lu for %s\n          %s\n",uVar8,uVar6
                    ,uVar3,pcVar5);
    (*pcVar7)(iVar1 + -0x91000,DAT_0002af14,iVar2,0x201);
  }
  return 0;
}



/* ===== FUN_0002af18 @ 0002af18 size=240 ===== */

undefined4 FUN_0002af18(undefined4 *param_1)

{
  char *__src;
  int iVar1;
  size_t sVar2;
  void *pvVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  
  sVar2 = strlen(DAT_0002b008);
  pvVar3 = malloc(sVar2 + 0x28);
  *param_1 = pvVar3;
  __src = DAT_0002b008;
  if (pvVar3 == (void *)0x0) {
    return 4;
  }
  *(char **)((int)pvVar3 + 4) = (char *)((int)pvVar3 + 0x24);
  strcpy((char *)((int)pvVar3 + 0x24),__src);
  iVar1 = DAT_0002b00c;
  iVar7 = *(int *)((int)&Elf32_Phdr_ARRAY_00010034[6].p_flags + DAT_0002b00c);
  uVar5 = *(undefined4 *)("/lib/ld-uClibc.so.0" + DAT_0002b00c + 8);
  *(undefined4 *)((int)pvVar3 + 0x14) = *(undefined4 *)(*(int *)(DAT_0002b00c + 0xcc) + 0x14);
  if (iVar7 == 0) {
    uVar5 = FUN_0001ada4(uVar5);
    *(undefined4 *)((int)pvVar3 + 0xc) = uVar5;
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0002429c(iVar7,*(undefined2 *)((int)&DWORD_0001012c + iVar1),0,uVar5,(int)pvVar3 + 8
                         ,(int)pvVar3 + 0x1c);
    if ((uVar4 & 1) == 0) {
      uVar5 = FUN_0001ada4(*(undefined4 *)("/lib/ld-uClibc.so.0" + iVar1 + 8));
      *(undefined4 *)((int)pvVar3 + 0xc) = uVar5;
    }
    if ((uVar4 & 2) != 0) goto LAB_0002afb8;
  }
  *(undefined4 *)((int)pvVar3 + 8) = *(undefined4 *)((int)pvVar3 + 0xc);
LAB_0002afb8:
  uVar6 = 0;
  if (DAT_00044200 != 0) {
    uVar6 = (uVar4 & 0x1ff) >> 8;
  }
  *(uint *)((int)pvVar3 + 0x18) = uVar6;
  return 0;
}



/* ===== FUN_0002b010 @ 0002b010 size=512 ===== */

bool FUN_0002b010(int param_1)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  
  pcVar1 = *(char **)(param_1 + 4);
  bVar9 = false;
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar2 = chown(pcVar1,*(__uid_t *)(param_1 + 0x1c),*(__gid_t *)(param_1 + 0x20));
    iVar5 = DAT_0002b210;
    bVar9 = iVar2 != 0;
    if (bVar9) {
      uVar7 = *(undefined4 *)(param_1 + 0x1c);
      uVar8 = *(undefined4 *)(param_1 + 0x20);
      pcVar6 = *(code **)(DAT_0002b210 + 0x30c);
      uVar3 = FUN_000190f4(*(undefined4 *)(param_1 + 4),DAT_0002b214,0x4000);
      piVar4 = __errno_location();
      pcVar1 = strerror(*piVar4);
      iVar2 = sprintf(DAT_0002b21c,
                      "warning:  cannot set UID %lu and/or GID %lu for %s\n          %s\n",uVar7,
                      uVar8,uVar3,pcVar1);
      (*pcVar6)(iVar5 + -0x91000,DAT_0002b21c,iVar2,0x201);
    }
    pcVar1 = *(char **)(param_1 + 4);
  }
  if (DAT_000441bc < 1) {
    iVar5 = utime(pcVar1,(utimbuf *)(param_1 + 8));
    pcVar6 = DAT_000d54ac;
    if (iVar5 != 0) {
      uVar3 = FUN_000190f4(*(undefined4 *)(param_1 + 4),DAT_0002b214,0x4000);
      piVar4 = __errno_location();
      pcVar1 = strerror(*piVar4);
      iVar5 = sprintf(DAT_0002b21c,DAT_0002b220,uVar3,pcVar1);
      (*pcVar6)(&DAT_000441a0,DAT_0002b21c,iVar5,0x201);
      iVar5 = chmod(*(char **)(param_1 + 4),*(__mode_t *)(param_1 + 0x14));
      pcVar6 = DAT_000d54ac;
      if (iVar5 != 0) {
        uVar3 = FUN_000190f4(*(undefined4 *)(param_1 + 4),DAT_0002b214,0x4000);
        pcVar1 = strerror(*piVar4);
        iVar5 = sprintf(DAT_0002b21c,DAT_0002b218,uVar3,pcVar1);
        (*pcVar6)(&DAT_000441a0,DAT_0002b21c,iVar5,0x201);
        return true;
      }
      return true;
    }
    pcVar1 = *(char **)(param_1 + 4);
  }
  iVar2 = chmod(pcVar1,*(__mode_t *)(param_1 + 0x14));
  iVar5 = DAT_0002b210;
  if (iVar2 == 0) {
    return bVar9;
  }
  pcVar6 = *(code **)(DAT_0002b210 + 0x30c);
  uVar3 = FUN_000190f4(*(undefined4 *)(param_1 + 4),DAT_0002b214,0x4000);
  piVar4 = __errno_location();
  pcVar1 = strerror(*piVar4);
  iVar2 = sprintf(DAT_0002b21c,DAT_0002b218,uVar3,pcVar1);
  (*pcVar6)(iVar5 + -0x91000,DAT_0002b21c,iVar2,0x201);
  return true;
}



/* ===== FUN_0002b224 @ 0002b224 size=32 ===== */

void FUN_0002b224(char *param_1,__time_t param_2)

{
  utimbuf local_10;
  
  local_10.modtime = param_2;
  local_10.actime = param_2;
  utime(param_1,&local_10);
  return;
}



/* ===== FUN_0002b244 @ 0002b244 size=148 ===== */

void FUN_0002b244(void)

{
  char *__s;
  size_t sVar1;
  
  __s = DAT_0002b2d8;
  sprintf(DAT_0002b2d8,"Compiled with %s%s for %s%s%s%s.\n\n",&DAT_00033850,"8.3.0",&DAT_0003387c,
          " (Linux ELF)",&DAT_00033864,"Sep 23 2023");
  sVar1 = strlen(__s);
                    /* WARNING: Could not recover jumptable at 0x0002b2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000d54ac)(&DAT_000441a0,__s,sVar1,0);
  return;
}



/* ===== FUN_0002b2dc @ 0002b2dc size=184 ===== */

ulonglong FUN_0002b2dc(uint param_1,uint param_2)

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



/* ===== _DT_FINI @ 0002b3b4 size=16 ===== */

void _DT_FINI(void)

{
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 000d7000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 000d7004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 000d7008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 000d700c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 000d7010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rename @ 000d7014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rename(char *__old,char *__new)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 000d7018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::tcgetattr @ 000d701c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tcgetattr(int __fd,termios *__termios_p)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gmtime @ 000d7020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * gmtime(time_t *__timer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::isatty @ 000d7024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int isatty(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 000d7028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputc @ 000d702c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 000d7030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::opendir @ 000d7034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * opendir(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strrchr @ 000d7038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 000d703c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::stpcpy @ 000d7040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * stpcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::write @ 000d7044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 000d7048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 000d704c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __fputc_unlocked(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fchown @ 000d7050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fchown(int __fd,__uid_t __owner,__gid_t __group)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ioctl @ 000d7054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::umask @ 000d7058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__mode_t umask(__mode_t __mask)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncat @ 000d705c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncat(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen @ 000d7060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::localtime @ 000d7064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * localtime(time_t *__timer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 000d7068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::open @ 000d706c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::chown @ 000d7070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int chown(char *__file,__uid_t __owner,__gid_t __group)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 000d7074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 000d7078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 000d707c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 000d7080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::tolower @ 000d7084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tolower(int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::perror @ 000d7088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::qsort @ 000d708c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void qsort(void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::symlink @ 000d7090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int symlink(char *__from,char *__to)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcat @ 000d7094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fread @ 000d7098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::read @ 000d709c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::tcsetattr @ 000d70a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tcsetattr(int __fd,int __optional_actions,termios *__termios_p)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mblen @ 000d70a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mblen(char *__s,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::signal @ 000d70a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::tzset @ 000d70ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void tzset(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 000d70b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fchmod @ 000d70b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fchmod(int __fd,__mode_t __mode)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::realloc @ 000d70b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 000d70bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fileno @ 000d70c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fileno(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::closedir @ 000d70c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int closedir(DIR *__dirp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 000d70c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 000d70cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcmp @ 000d70d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 000d70d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::chmod @ 000d70d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int chmod(char *__file,__mode_t __mode)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 000d70dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::lstat @ 000d70e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int lstat(char *__file,stat *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::raise @ 000d70e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::lchown @ 000d70e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int lchown(char *__file,__uid_t __owner,__gid_t __group)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::lseek @ 000d70ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__off_t lseek(int __fd,__off_t __offset,int __whence)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getenv @ 000d70f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::unlink @ 000d70f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unlink(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setlocale @ 000d70f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * setlocale(int __category,char *__locale)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::utime @ 000d70fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int utime(char *__file,utimbuf *__file_times)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_stdlib_mb_cur_max @ 000d7100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _stdlib_mb_cur_max(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 000d7104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::readdir @ 000d7108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent * readdir(DIR *__dirp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::nl_langinfo @ 000d710c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * nl_langinfo(nl_item __item)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 000d7110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::stat @ 000d7114 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat(char *__file,stat *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fgets @ 000d7118 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::wctomb @ 000d711c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int wctomb(char *__s,wchar_t __wchar)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mkdir @ 000d7120 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mkdir(char *__path,__mode_t __mode)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 000d7124 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rewind @ 000d7128 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rewind(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


