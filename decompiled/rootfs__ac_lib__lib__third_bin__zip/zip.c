// zip — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _DT_INIT @ 0001130c size=16 ===== */

void _DT_INIT(void)

{
  return;
}



/* ===== <EXTERNAL>::putchar @ 00011330 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putchar_0004900c)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::stpcpy @ 0001133c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * stpcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_stpcpy_00049010)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::strcpy @ 00011348 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_00049014)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::asctime @ 00011354 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * asctime(tm *__tp)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_asctime_00049018)(__tp);
  return pcVar1;
}



/* ===== <EXTERNAL>::printf @ 00011360 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_0004901c)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::utime @ 0001136c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int utime(char *__file,utimbuf *__file_times)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_utime_00049020)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::ungetc @ 00011378 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ungetc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ungetc_00049024)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::strerror @ 00011384 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_00049028)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::memmove @ 00011390 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_0004902c)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::getenv @ 0001139c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_getenv_00049030)(__name);
  return pcVar1;
}



/* ===== <EXTERNAL>::getpid @ 000113a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_getpid_00049034)();
  return _Var1;
}



/* ===== <EXTERNAL>::qsort @ 000113b4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void qsort(void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
  (*(code *)PTR_qsort_00049038)(__base);
  return;
}



/* ===== <EXTERNAL>::fgets @ 000113c0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_fgets_0004903c)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::memcpy @ 000113cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00049040)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::setvbuf @ 000113d8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setvbuf(FILE *__stream,char *__buf,int __modes,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setvbuf_00049044)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::perror @ 000113e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
  (*(code *)PTR_perror_00049048)(__s);
  return;
}



/* ===== <EXTERNAL>::readlink @ 000113f0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t readlink(char *__path,char *__buf,size_t __len)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_readlink_0004904c)(__path);
  return sVar1;
}



/* ===== <EXTERNAL>::puts @ 000113fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00049050)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::system @ 00011408 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int system(char *__command)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_system_00049054)(__command);
  return iVar1;
}



/* ===== <EXTERNAL>::feof @ 00011414 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int feof(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_feof_00049058)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::malloc @ 00011420 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0004905c)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::isatty @ 0001142c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int isatty(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_isatty_00049060)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::wctomb @ 00011438 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int wctomb(char *__s,wchar_t __wchar)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_wctomb_00049064)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::rmdir @ 00011444 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rmdir(char *__path)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rmdir_00049068)(__path);
  return iVar1;
}



/* ===== <EXTERNAL>::readdir @ 00011450 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent * readdir(DIR *__dirp)

{
  dirent *pdVar1;
  
  pdVar1 = (dirent *)(*(code *)PTR_readdir_0004906c)(__dirp);
  return pdVar1;
}



/* ===== <EXTERNAL>::fflush @ 0001145c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_00049070)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::mbstowcs @ 00011468 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t mbstowcs(wchar_t *__pwcs,char *__s,size_t __n)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_mbstowcs_00049074)(__pwcs);
  return sVar1;
}



/* ===== <EXTERNAL>::__fgetc_unlocked @ 00011474 size=12 ===== */

void __fgetc_unlocked(void)

{
  (*(code *)PTR___fgetc_unlocked_00049078)();
  return;
}



/* ===== <EXTERNAL>::abort @ 00011480 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_0004907c)();
  return;
}



/* ===== <EXTERNAL>::chmod @ 0001148c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int chmod(char *__file,__mode_t __mode)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_chmod_00049080)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::rename @ 00011498 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rename(char *__old,char *__new)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rename_00049084)(__old);
  return iVar1;
}



/* ===== <EXTERNAL>::strrchr @ 000114a4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strrchr_00049088)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::fstat @ 000114b0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstat(int __fd,stat *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fstat_0004908c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::fprintf @ 000114bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00049090)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::strcat @ 000114c8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcat_00049094)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 000114d4 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00049098)();
  return;
}



/* ===== <EXTERNAL>::_stdlib_mb_cur_max @ 000114e0 size=12 ===== */

void _stdlib_mb_cur_max(void)

{
  (*(code *)PTR__stdlib_mb_cur_max_0004909c)();
  return;
}



/* ===== <EXTERNAL>::fseek @ 000114ec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fseek_000490a0)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::mktime @ 000114f8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t mktime(tm *__tp)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_mktime_000490a4)(__tp);
  return tVar1;
}



/* ===== <EXTERNAL>::lstat @ 00011504 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int lstat(char *__file,stat *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_lstat_000490a8)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::ferror @ 00011510 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ferror(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ferror_000490ac)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::strstr @ 0001151c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strstr_000490b0)(__haystack);
  return pcVar1;
}



/* ===== <EXTERNAL>::rand @ 00011528 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rand(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rand_000490b4)();
  return iVar1;
}



/* ===== <EXTERNAL>::signal @ 00011534 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = (__sighandler_t)(*(code *)PTR_signal_000490b8)(__sig);
  return p_Var1;
}



/* ===== <EXTERNAL>::read @ 00011540 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_000490bc)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::strncmp @ 0001154c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_000490c0)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::strncpy @ 00011558 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_000490c4)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::unlink @ 00011564 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unlink(char *__name)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_unlink_000490c8)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::realloc @ 00011570 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_realloc_000490cc)(__ptr);
  return pvVar1;
}



/* ===== <EXTERNAL>::towupper @ 0001157c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

wint_t towupper(wint_t __wc)

{
  wint_t wVar1;
  
  wVar1 = (*(code *)PTR_towupper_000490d0)(__wc);
  return wVar1;
}



/* ===== <EXTERNAL>::fdopen @ 00011588 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fdopen(int __fd,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fdopen_000490d4)(__fd);
  return pFVar1;
}



/* ===== <EXTERNAL>::sscanf @ 00011594 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sscanf_000490d8)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::strncat @ 000115a0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncat(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncat_000490dc)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::fread @ 000115ac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fread_000490e0)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::fopen @ 000115c4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen_000490e8)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::localtime @ 000115d0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * localtime(time_t *__timer)

{
  tm *ptVar1;
  
  ptVar1 = (tm *)(*(code *)PTR_localtime_000490ec)(__timer);
  return ptVar1;
}



/* ===== <EXTERNAL>::memset @ 000115dc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_000490f0)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::ftell @ 000115e8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long ftell(FILE *__stream)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_ftell_000490f4)(__stream);
  return lVar1;
}



/* ===== <EXTERNAL>::srand @ 000115f4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void srand(uint __seed)

{
  (*(code *)PTR_srand_000490f8)(__seed);
  return;
}



/* ===== <EXTERNAL>::clearerr @ 00011600 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void clearerr(FILE *__stream)

{
  (*(code *)PTR_clearerr_000490fc)(__stream);
  return;
}



/* ===== <EXTERNAL>::fclose @ 0001160c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_00049100)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::tcgetattr @ 00011618 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tcgetattr(int __fd,termios *__termios_p)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_tcgetattr_00049104)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::time @ 00011624 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_00049108)(__timer);
  return tVar1;
}



/* ===== <EXTERNAL>::opendir @ 00011630 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * opendir(char *__name)

{
  DIR *pDVar1;
  
  pDVar1 = (DIR *)(*(code *)PTR_opendir_0004910c)(__name);
  return pDVar1;
}



/* ===== <EXTERNAL>::strcmp @ 0001163c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_00049110)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::fgetc @ 00011648 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fgetc(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fgetc_00049114)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::sprintf @ 00011654 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_00049118)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::setlocale @ 00011660 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * setlocale(int __category,char *__locale)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_setlocale_0004911c)(__category);
  return pcVar1;
}



/* ===== <EXTERNAL>::mkstemp @ 0001166c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mkstemp(char *__template)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_mkstemp_00049120)(__template);
  return iVar1;
}



/* ===== <EXTERNAL>::fputc @ 00011678 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputc_00049124)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::stat @ 00011684 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat(char *__file,stat *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_stat_00049128)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::fwrite @ 00011690 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_0004912c)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::rewind @ 0001169c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rewind(FILE *__stream)

{
  (*(code *)PTR_rewind_00049130)(__stream);
  return;
}



/* ===== <EXTERNAL>::__errno_location @ 000116a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00049134)();
  return piVar1;
}



/* ===== <EXTERNAL>::exit @ 000116b4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_00049138)(__status);
  return;
}



/* ===== <EXTERNAL>::atoi @ 000116c0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_0004913c)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::fileno @ 000116cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fileno(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fileno_00049140)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::strlen @ 000116d8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00049144)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::open @ 000116e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open_00049148)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::strchr @ 000116f0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_0004914c)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::fputs @ 000116fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_00049150)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::closedir @ 00011708 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int closedir(DIR *__dirp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_closedir_00049154)(__dirp);
  return iVar1;
}



/* ===== <EXTERNAL>::tzset @ 00011714 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void tzset(void)

{
  (*(code *)PTR_tzset_00049158)();
  return;
}



/* ===== <EXTERNAL>::tcsetattr @ 00011720 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tcsetattr(int __fd,int __optional_actions,termios *__termios_p)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_tcsetattr_0004915c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 0001172c size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00049160)();
  return;
}



/* ===== <EXTERNAL>::close @ 00011738 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_00049164)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::raise @ 00011744 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_00049168)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 00011750 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0004916c)(__ptr);
  return;
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 0001175c size=12 ===== */

void __fputc_unlocked(void)

{
  (*(code *)PTR___fputc_unlocked_00049170)();
  return;
}



/* ===== FUN_00011768 @ 00011768 size=25968 ===== */

/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 FUN_00011768(int param_1,int param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  dword dVar6;
  char cVar7;
  __mode_t _Var8;
  char *pcVar9;
  int iVar10;
  char *pcVar11;
  undefined4 uVar12;
  FILE *pFVar13;
  int iVar14;
  tm *ptVar15;
  void *pvVar16;
  void *pvVar17;
  time_t tVar18;
  int *piVar19;
  char *pcVar20;
  size_t __n;
  char *pcVar21;
  byte *pbVar22;
  size_t sVar23;
  byte *pbVar24;
  int extraout_r1;
  uint uVar25;
  int extraout_r1_00;
  int extraout_r1_01;
  undefined4 uVar26;
  char *__src;
  uint uVar27;
  bool bVar28;
  undefined2 uVar29;
  int *piVar30;
  uint *puVar31;
  undefined4 *puVar32;
  undefined4 *puVar33;
  int iVar34;
  bool bVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  undefined4 uVar39;
  FILE *local_148;
  FILE *local_144;
  int local_13c;
  uint local_134;
  uint local_130;
  uint local_124;
  char **local_120;
  int local_100;
  uint local_f8;
  int local_c8;
  int local_c4 [2];
  int local_bc;
  int local_b8;
  undefined4 local_b4;
  char *local_b0;
  int local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  Elf32_Ehdr *local_8c;
  int local_88 [25];
  
  local_bc = 0;
  local_b8 = 0;
  local_b4 = 0;
  local_b0 = (char *)0x0;
  local_ac = 0;
  local_a8 = 0;
  local_a4 = 0;
  local_a0 = 0;
  local_c8 = param_2;
  local_c4[0] = param_1;
  pcVar9 = setlocale(0,"en_US.UTF-8");
  if (pcVar9 != (char *)0x0) {
    DAT_0004bc3c = 1;
  }
  DAT_00066dc8 = stdout;
  DAT_0004bc44 = 1;
  local_148 = stdin;
  FUN_00028734();
  tzset();
  FUN_00028f58(local_c4,&local_c8);
  if ((local_c4[0] == 1) && (iVar10 = isatty(1), iVar10 != 0)) {
    FUN_0001845c();
                    /* WARNING: Subroutine does not return */
    exit(0);
  }
  if (((local_c4[0] == 2) && (iVar10 = strcmp(*(char **)(local_c8 + 4),"-v"), iVar10 == 0)) &&
     ((iVar10 = isatty(1), iVar10 != 0 || (iVar10 = isatty(0), iVar10 != 0)))) {
    FUN_00018558();
                    /* WARNING: Subroutine does not return */
    exit(0);
  }
  local_120 = &DAT_0004bb8c;
  FUN_00028ae8(local_c4,&local_c8,"ZIPOPT",&DAT_0002e7cc);
  DAT_00066db0 = (char *)0x0;
  DAT_0004bb88 = (FILE *)0x0;
  DAT_0004bb8c = (char *)0x0;
  bVar4 = false;
  signal(2,FUN_00018b70);
  bVar2 = false;
  signal(0xf,FUN_00018b70);
  signal(6,FUN_00018b70);
  signal(7,FUN_00018b70);
  signal(4,FUN_00018b70);
  signal(0xb,FUN_00018b70);
  bVar3 = false;
  local_a0 = FUN_000268b4(local_c8,0);
  bVar28 = false;
  bVar35 = false;
  local_13c = 0;
  bVar5 = false;
  local_100 = 0;
  local_144 = (FILE *)0x0;
  local_130 = 0;
  local_134 = 0;
  local_b8 = 0;
  iVar10 = DAT_00049ae4;
LAB_00011998:
  do {
    DAT_00049ae4 = iVar10;
    pcVar11 = (char *)FUN_00026cb0(&local_a0,&local_bc,&local_b8,&local_b4,&local_b0,&local_ac,
                                   &local_a8,&local_a4,0);
    pcVar9 = local_b0;
    puVar33 = DAT_00012b44;
    if (pcVar11 == (char *)0x0) {
      if (bVar2) {
        DAT_0004bbb4 = malloc(0x51);
        if (DAT_0004bbb4 == (char *)0x0) goto LAB_00017908;
        iVar10 = FUN_00029e00("Enter password: ",DAT_0004bbb4,0x51);
        if (iVar10 != 0) {
          if (*DAT_0004bbb4 == '\0') goto LAB_00017af4;
          pcVar9 = malloc(0x51);
          if (pcVar9 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_000187c0(4,"was verifying encryption password");
          }
          iVar10 = FUN_00029e00("Verify password: ",pcVar9,0x51);
          pcVar11 = DAT_0004bbb4;
          if (iVar10 != 0) {
            iVar10 = strcmp(DAT_0004bbb4,pcVar9);
            free(pcVar9);
            if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_000187c0(0x10,"password verification failed");
            }
            goto LAB_000123bc;
          }
        }
        FUN_0001929c();
LAB_00017908:
                    /* WARNING: Subroutine does not return */
        FUN_000187c0(4,"was getting encryption password");
      }
      pcVar11 = DAT_0004bbb4;
      if (DAT_0004bbb4 != (char *)0x0) {
LAB_000123bc:
        if (*pcVar11 == '\0') {
LAB_00017af4:
                    /* WARNING: Subroutine does not return */
          FUN_000187c0(0x10,"zero length password not allowed");
        }
      }
      if (local_13c != 0) {
        fwrite("sd: Command line read\n",1,0x16,DAT_00066dc8);
        fflush(DAT_00066dc8);
      }
      pcVar9 = DAT_0004bbe0;
      if (bVar28) {
        fwrite("command line:\n",1,0xe,DAT_00066dc8);
        iVar10 = 0;
        while (piVar30 = (int *)(local_a0 + iVar10), iVar10 = iVar10 + 4, *piVar30 != 0) {
          fprintf(DAT_00066dc8,"\'%s\'  ");
        }
        fputc(10,DAT_00066dc8);
                    /* WARNING: Subroutine does not return */
        FUN_000187c0(9,"show command line");
      }
      if (bVar35) {
        puts("available options:");
        puVar33 = DAT_00014b9c;
        printf(" %-2s  %-18s %-4s %-3s %-30s\n",&DAT_0002ef74,&DAT_0002ef6c,&DAT_0002ef68,
               &DAT_0002efa4,"description");
        printf(" %-2s  %-18s %-4s %-3s %-30s\n",&DAT_0002edf8,&DAT_0002efa8,"---","---",
               "-----------");
        for (; puVar33[4] != 0; puVar33 = puVar33 + 6) {
          printf(" %-2s  %-18s ",*puVar33,puVar33[1]);
          switch(puVar33[2]) {
          case 0:
            printf("%-4s ",&DAT_000369fc);
            break;
          case 1:
            printf("%-4s ",&DAT_0002efd4);
            break;
          case 2:
            printf("%-4s ",&DAT_0002efd8);
            break;
          case 3:
            printf("%-4s ","list");
            break;
          case 4:
            printf("%-4s ",&DAT_0002efdc);
            break;
          case 5:
            printf("%-4s ",&DAT_0002efe4);
            break;
          default:
            printf("%-4s ",&DAT_0002efe8);
          }
          if (puVar33[3] == 0) {
            printf("%-3s ",&DAT_000369fc);
          }
          else if (puVar33[3] == 1) {
            printf("%-3s ",&DAT_0002efa4);
          }
          else {
            printf("%-3s ",&DAT_0002efe8);
          }
          if (puVar33[5] == 0) {
            putchar(10);
          }
          else {
            printf("%-30s\n");
          }
        }
        goto LAB_00011fb0;
      }
      if (DAT_0004bbe0 == (char *)0x0) {
        DAT_0004bbec = 0;
      }
      else {
        pcVar20 = DAT_0004bbe0;
        pcVar11 = (char *)0x0;
        while( true ) {
          pcVar21 = strrchr(pcVar20,0x2f);
          if (pcVar21 == (char *)0x0) break;
          pcVar20 = pcVar21 + 1;
          pcVar11 = pcVar21;
        }
        if (pcVar11 == (char *)0x0) {
          pcVar11 = pcVar9;
        }
        pcVar11 = strrchr(pcVar11,0x2e);
        if (pcVar11 == (char *)0x0) {
          sVar23 = strlen(pcVar9);
          pcVar11 = malloc(sVar23 + 5);
          if (pcVar11 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_000187c0(4,"logpath");
          }
          memcpy(pcVar11,pcVar9,sVar23);
          cVar7 = DAT_0002f008;
          *(undefined4 *)(pcVar11 + sVar23) = DAT_0002f004;
          pcVar11[sVar23 + 4] = cVar7;
          free(pcVar9);
          DAT_0004bbe0 = pcVar11;
        }
        if (DAT_0004bbe4 == 0) {
          uVar29 = 0x77;
        }
        else {
          uVar29 = 0x61;
        }
        local_8c = (Elf32_Ehdr *)CONCAT22(local_8c._2_2_,uVar29);
        DAT_0004bbe8 = fopen(DAT_0004bbe0,(char *)&local_8c);
        if (DAT_0004bbe8 == (FILE *)0x0) {
          pcVar9 = "could not open logfile \'%s\'";
          pcVar11 = DAT_0004bbe0;
          goto LAB_0001217c;
        }
        time(&local_98);
        ptVar15 = localtime(&local_98);
        fwrite("---------\n",1,10,DAT_0004bbe8);
        pFVar13 = DAT_0004bbe8;
        pcVar9 = asctime(ptVar15);
        fprintf(pFVar13,"Zip log opened %s",pcVar9);
        fwrite("command line arguments:\n ",1,0x19,DAT_0004bbe8);
        pbVar22 = *(byte **)(local_a0 + 4);
        if (pbVar22 != (byte *)0x0) {
          iVar10 = 8;
          do {
            sVar23 = strlen((char *)pbVar22);
            if (sVar23 == 0) {
LAB_00012554:
              fprintf(DAT_0004bbe8,"%s ",pbVar22);
            }
            else {
              if ((*(ushort *)(__ctype_b + (uint)*pbVar22 * 2) & 0x20) == 0) {
                pbVar24 = pbVar22;
                do {
                  if (pbVar22 + (sVar23 - 1) == pbVar24) goto LAB_00012554;
                  pbVar24 = pbVar24 + 1;
                } while ((*(ushort *)(__ctype_b + (uint)*pbVar24 * 2) & 0x20) == 0);
              }
              fprintf(DAT_0004bbe8,"\"%s\" ",pbVar22);
            }
            pbVar22 = *(byte **)(local_a0 + iVar10);
            iVar10 = iVar10 + 4;
          } while (pbVar22 != (byte *)0x0);
        }
        fwrite(&DAT_0002f064,1,2,DAT_0004bbe8);
        fflush(DAT_0004bbe8);
      }
      pcVar9 = DAT_0004bb78;
      if ((DAT_0004bb30 != 0) && (DAT_0004bb78 != (char *)0x0)) {
        sVar23 = strlen(DAT_0004bb78);
        if ((sVar23 < 4) ||
           ((((pcVar9[sVar23 - 4] != '.' ||
              (*(short *)(__ctype_toupper + (uint)(byte)pcVar9[sVar23 - 3] * 2) != 0x5a)) ||
             (*(short *)(__ctype_toupper + (uint)(byte)pcVar9[sVar23 - 2] * 2) != 0x49)) ||
            (*(short *)(__ctype_toupper + (uint)(byte)pcVar9[sVar23 - 1] * 2) != 0x50)))) {
                    /* WARNING: Subroutine does not return */
          FUN_000187c0(0x10,"archive name must end in .zip for splits");
        }
      }
      if ((DAT_0004bc5c != 0) && (DAT_0004bc24 == 0 && DAT_0004bc20 == 0)) {
        DAT_0004bc24 = 0xa00000;
      }
      if ((DAT_0004baf8 != 0) && (DAT_0004bafc == 0)) {
        FUN_00018e90();
      }
      bVar28 = bVar4;
      if (local_130 != 3) {
        bVar28 = false;
      }
      if (bVar28) {
        DAT_0004bbc0 = 1;
        DAT_000491c4 = 4;
LAB_000126d4:
        iVar10 = FUN_00028aa8(DAT_0004bb80,DAT_0004bb78);
        if (iVar10 == 0) {
          pcVar9 = "--out path must be different than in path: %s";
          pcVar11 = DAT_0004bb78;
          goto LAB_0001217c;
        }
      }
      else if (bVar4) goto LAB_000126d4;
      if (DAT_0004bc58 == 0) {
        if (DAT_000491c4 != 4) {
          if (bVar4) {
            if ((DAT_0004bbd4 != 0) && ((DAT_000491c4 & 0xfffffffb) == 0)) goto LAB_000130dc;
          }
          else if (DAT_0004bbd4 != 0) {
LAB_00013110:
                    /* WARNING: Subroutine does not return */
            FUN_000187c0(0x10,"-DF (--diff) requires -O (--out)");
          }
          goto LAB_00012b6c;
        }
        if (bVar4) {
          if (DAT_0004bbd4 != 0) {
LAB_000130dc:
                    /* WARNING: Subroutine does not return */
            FUN_000187c0(0x10,"can\'t use --diff (-DF) with -d or -U");
          }
        }
        else {
          if (DAT_0004bbb8 == 0) goto LAB_00016314;
          if (DAT_0004bbd4 != 0) goto LAB_00013110;
        }
LAB_00012b90:
        if (local_130 < 3) {
          FUN_00018f84();
          iVar10 = FUN_00029fac("-",0);
          if (iVar10 != 0) {
            if (iVar10 != -1) {
                    /* WARNING: Subroutine does not return */
              FUN_000187c0(iVar10,"-");
            }
            if (bVar5) {
              FUN_000194cc("name not matched: ","-");
                    /* WARNING: Subroutine does not return */
              FUN_000187c0(0x12,"-");
            }
            FUN_000194cc("name not matched: ","-");
          }
          if (local_144 != (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_000187c0(0x10,"can\'t use - and -@ together");
          }
          local_148 = local_144;
          local_130 = 4;
        }
      }
      else {
        if (DAT_0004bbd4 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_000187c0(0x10,"can\'t use --diff (-DF) with fix (-F or -FF)");
        }
        if (DAT_000491c4 == 4) {
          if (!bVar4) {
            if (DAT_0004bbb8 == 0) {
LAB_00016314:
                    /* WARNING: Subroutine does not return */
              FUN_000187c0(0x10,"-U (--copy) requires -O (--out)");
            }
            goto LAB_00017770;
          }
          if (DAT_0004bbc0 == 0) goto LAB_0001275c;
          goto LAB_00012b90;
        }
        if (!bVar4) {
LAB_00017770:
          FUN_000194cc("fix options -F and -FF require --out:\n",
                       "                     zip -F indamagedarchive --out outfixedarchive");
                    /* WARNING: Subroutine does not return */
          FUN_000187c0(0x10,"fix options require --out");
        }
        if (DAT_0004bbc0 == 0) {
LAB_0001275c:
                    /* WARNING: Subroutine does not return */
          FUN_000187c0(0x10,"no other actions allowed when fixing archive (-F or -FF)");
        }
LAB_00012b6c:
        if ((((DAT_0004bc68 != 2) && (DAT_0004baf8 == 0)) || (local_100 != 0)) ||
           (DAT_00049dd8 != (undefined4 *)0x0)) goto LAB_00012b90;
        if ((local_130 < 3) || (1 < DAT_000491c4 - 2)) {
                    /* WARNING: Subroutine does not return */
          FUN_000187c0(0x10,"nothing to select from");
        }
      }
      if ((DAT_00066db0 != (char *)0x0) && (iVar10 = strcmp(DAT_00066db0,"-"), iVar10 == 0)) {
        if (local_13c != 0) {
          fwrite("sd: Zipping to stdout\n",1,0x16,DAT_00066dc8);
          fflush(DAT_00066dc8);
        }
        DAT_0004bbc8 = 1;
      }
      pcVar9 = DAT_00049adc;
      if (DAT_00049adc == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_000187c0(0x10,"missing suffix list");
      }
      if (((DAT_00049af4 == (char *)0x9) || (iVar10 = strcmp(DAT_00049adc,";"), iVar10 == 0)) ||
         (iVar10 = strcmp(pcVar9,":"), iVar10 == 0)) {
        DAT_00049adc = (char *)0x0;
      }
      if (DAT_000491c4 == 0) {
        if (((DAT_00049af8 != -1) || (DAT_0004bbb4 != (char *)0x0)) ||
           (((DAT_0004bc64 != 0 || DAT_0004bc68 != 0) || DAT_00049df0 != 0) || DAT_00049dfc != 0)) {
          FUN_000194cc("invalid option(s) used with -d; ignored.",&DAT_000369fc);
          DAT_00049af8 = -1;
          DAT_0004bc64 = 0;
          DAT_0004bc68 = 0;
          if (DAT_0004bbb4 != (char *)0x0) {
            free(DAT_0004bbb4);
            DAT_0004bbb4 = (char *)0x0;
          }
          DAT_00049df0 = 0;
          DAT_00049dfc = 0;
          goto LAB_00012c48;
        }
      }
      else {
LAB_00012c48:
        if ((DAT_000491c4 == 4) &&
           ((DAT_00049af8 != -1 ||
            (((DAT_0004bc64 != 0 || DAT_0004bc68 != 0) || DAT_00049df0 != 0) || DAT_00049dfc != 0)))
           ) {
          FUN_000194cc("can\'t set method, move, recurse, or comments with copy mode.",&DAT_000369fc
                      );
          DAT_0004bc64 = 0;
          DAT_00049af8 = -1;
          DAT_0004bc68 = 0;
          DAT_00049df0 = 0;
          DAT_00049dfc = 0;
        }
      }
      if ((DAT_0004bbd0 != 0) && (DAT_0004bc60 != 0)) {
        FUN_000194cc("can\'t use -y with -k, -y ignored",&DAT_000369fc);
        DAT_0004bbd0 = 0;
      }
      if (DAT_0004bc58 == 1) {
        if (DAT_0004bc50 != 0) {
          FUN_000194cc("can\'t use -F with -A, -F ignored",&DAT_000369fc);
          DAT_0004bc58 = 0;
        }
      }
      else if ((DAT_0004bc58 == 2) && (DAT_0004bc50 != 0)) {
        FUN_000194cc("can\'t use -FF with -A, -FF ignored",&DAT_000369fc);
        DAT_0004bc58 = 0;
      }
      if ((DAT_00049df8 != 0) && (DAT_0004bbc8 != 0)) {
        DAT_00049df8 = 0;
        FUN_000194cc("can\'t use -T on stdout, -T ignored",&DAT_000369fc);
      }
      if (DAT_0004bb30 != 0) {
        if (DAT_0004bc58 != 0 || DAT_0004bc50 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_000187c0(0x10,"can\'t create split archive while fixing or adjusting\n");
        }
        if (local_134 != 0 || DAT_0004bbc8 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_000187c0(0x10,"can\'t create split archive with -d or -g or on stdout\n");
        }
        if ((DAT_000491c4 != 1) && (DAT_0004bc54 != 0)) {
LAB_00017734:
                    /* WARNING: Subroutine does not return */
          FUN_000187c0(0x10,"can\'t use -d, -f, -u, -U, or -g with filesync -FS\n");
        }
        if (DAT_00049ae8 == 0) goto LAB_00012d40;
LAB_00013260:
        if (local_13c == 0) goto LAB_0001326c;
LAB_00013750:
        fwrite("sd: Reading archive\n",1,0x14,DAT_00066dc8);
        fflush(DAT_00066dc8);
        if (DAT_0004bc58 != 2) goto LAB_0001326c;
        fwrite("sd: Open zip file and create temp file (-FF)\n",1,0x2d,DAT_00066dc8);
        fflush(DAT_00066dc8);
        DAT_00066db4 = 0;
        fwrite("sd: Creating new zip file (-FF)\n",1,0x20,DAT_00066dc8);
        fflush(DAT_00066dc8);
LAB_00012d70:
        pcVar11 = DAT_00066db0;
        pcVar9 = DAT_0004bbb0;
        if (DAT_0004bbb0 == (char *)0x0) {
          sVar23 = strlen(DAT_00066db0);
          pcVar9 = malloc(sVar23 + 0xc);
          DAT_0004bb8c = pcVar9;
          if (pcVar9 == (char *)0x0) goto LAB_00017874;
          pcVar11 = stpcpy(pcVar9,pcVar11);
          iVar10 = (int)pcVar11 - (int)pcVar9;
          while ((iVar10 != 0 && (pcVar11 = pcVar11 + -1, *pcVar11 != '/'))) {
            iVar10 = iVar10 + -1;
          }
          pcVar9[iVar10] = '\0';
        }
        else {
          sVar23 = strlen(DAT_0004bbb0);
          pcVar11 = malloc(sVar23 + 0xc);
          DAT_0004bb8c = pcVar11;
          if (pcVar11 == (char *)0x0) goto LAB_00017874;
          pcVar9 = stpcpy(pcVar11,pcVar9);
          if ((*pcVar11 == '\0') || (pcVar9[-1] != '/')) {
            *(undefined2 *)pcVar9 = DAT_0002f544;
          }
        }
        pcVar9 = DAT_0004bb8c;
        sVar23 = strlen(DAT_0004bb8c);
        cVar7 = DAT_0002f550;
        uVar12 = DAT_0002f54c;
        *(undefined4 *)(pcVar9 + sVar23) = DAT_0002f548;
        *(undefined4 *)(pcVar9 + sVar23 + 4) = uVar12;
        pcVar9[sVar23 + 8] = cVar7;
        iVar10 = mkstemp(DAT_0004bb8c);
        if ((iVar10 == -1) ||
           (pFVar13 = fdopen(iVar10,"w"), DAT_0004bb88 = pFVar13, pFVar13 == (FILE *)0x0))
        goto LAB_000169e4;
        pcVar9 = malloc(0x4000);
        if (pcVar9 == (char *)0x0) goto LAB_00017b04;
        setvbuf(pFVar13,pcVar9,0,0x4000);
        iVar10 = FUN_0001ee50();
        if (iVar10 != 0) goto LAB_00017c2c;
        if (local_13c != 0) {
          fwrite("sd: Writing central directory (-FF)\n",1,0x24,DAT_00066dc8);
          fflush(DAT_00066dc8);
        }
        iVar38 = DAT_00066db4;
        iVar10 = 0;
        for (iVar36 = DAT_0004bb0c; iVar36 != 0; iVar36 = *(int *)(iVar36 + 0x68)) {
          iVar14 = FUN_0001b9e8(iVar36);
          if (iVar14 != 0) goto LAB_00017634;
          iVar10 = iVar10 + 1;
          DAT_00066db4 = *(ushort *)(iVar36 + 0x18) + 0x2e + (uint)*(ushort *)(iVar36 + 0x1c) +
                         (uint)*(ushort *)(iVar36 + 0x1e) + DAT_00066db4;
        }
        if (DAT_000681c0 == 0) {
          FUN_000194cc("zip file empty",&DAT_000369fc);
        }
        iVar14 = FUN_0001c4d4(iVar10,DAT_00066db4 - iVar38,iVar38,DAT_000681c4,DAT_0004bb04);
        if (iVar14 != 0) goto LAB_00017634;
        iVar10 = fclose(DAT_0004bb88);
        if (iVar10 != 0) goto LAB_000176d0;
        if (DAT_0004bb84 != (FILE *)0x0) {
          fclose(DAT_0004bb84);
          DAT_0004bb84 = (FILE *)0x0;
        }
        iVar10 = strcmp(DAT_00066db0,"-");
        if (iVar10 == 0) {
          local_134 = 0;
        }
        else {
          local_134 = local_134 ^ 1;
        }
        if (local_134 == 0) {
LAB_00012f84:
          _Var8 = DAT_0004bb74;
          DAT_0004bb8c = (char *)0x0;
          if ((DAT_0004bb74 != 0) && (iVar10 = strcmp(DAT_00066db0,"-"), iVar10 != 0)) {
            chmod(DAT_0004bb78,_Var8);
          }
          if (DAT_0004bbe8 != (FILE *)0x0) {
            fprintf(DAT_0004bbe8,"\nTotal %ld entries (",DAT_0004bc00);
            FUN_000294d8(DAT_0004bbe8,DAT_0004bbf0);
            fwrite(" bytes)",1,7,DAT_0004bbe8);
            time((time_t *)&local_8c);
            ptVar15 = localtime((time_t *)&local_8c);
            pFVar13 = DAT_0004bbe8;
            pcVar9 = asctime(ptVar15);
            fprintf(pFVar13,"\nDone %s",pcVar9);
            fflush(DAT_0004bbe8);
          }
          goto LAB_00011fb0;
        }
        iVar10 = FUN_000234b8(DAT_0004bb78,DAT_0004bb8c);
        if (iVar10 == 0) {
          free(DAT_0004bb8c);
          goto LAB_00012f84;
        }
LAB_00017794:
        FUN_000194cc("new zip file left as: ",DAT_0004bb8c);
        free(DAT_0004bb8c);
        pcVar9 = "was replacing the original zip file";
        DAT_0004bb8c = (char *)0x0;
LAB_000177c4:
                    /* WARNING: Subroutine does not return */
        FUN_000187c0(iVar10,pcVar9);
      }
      if ((DAT_000491c4 != 1) || (local_134 != 0)) {
        if (DAT_0004bc54 != 0) goto LAB_00017734;
        if (DAT_0004bbc8 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_000187c0(0x10,"can\'t use -d, -f, -u, -U, or -g on stdout\n");
        }
      }
      if (DAT_00049ae8 != 0) {
        if (DAT_0004bc58 == 1) {
          FUN_000193f0("Fix archive (-F) - assume mostly intact archive",&DAT_000369fc);
        }
        else {
          if (DAT_0004bc58 != 2) goto LAB_00013260;
          FUN_000193f0("Fix archive (-FF) - salvage what can",&DAT_000369fc);
        }
      }
LAB_00012d40:
      if (local_13c != 0) goto LAB_00013750;
      if (DAT_0004bc58 == 2) {
        DAT_00066db4 = local_13c;
        goto LAB_00012d70;
      }
LAB_0001326c:
      iVar10 = FUN_0001ee50();
      if (iVar10 != 0) {
LAB_00017c2c:
                    /* WARNING: Subroutine does not return */
        FUN_000187c0(iVar10,DAT_00066db0);
      }
      if (DAT_0004bb30 == 0xffffffff) {
        DAT_0004bb30 = 0;
      }
      else if (((Elf32_Ehdr *)(DAT_0004bb30 | DAT_0004bc58) == (Elf32_Ehdr *)0x0) &&
              (1 < DAT_0004bb70)) {
        local_8c = (Elf32_Ehdr *)(DAT_0004bb30 | DAT_0004bc58);
        DAT_0004bb7c = (char *)FUN_00023ad0(DAT_0004bb80,0);
        iVar10 = FUN_0002a694(DAT_0004bb7c,0,&local_8c,0);
        if (iVar10 == 0) {
          FUN_000194cc("Could not get info for input split: ",DAT_0004bb7c);
          return 0x12;
        }
        DAT_0004bb2c = local_8c;
        DAT_0004bb30 = 1;
        free(DAT_0004bb7c);
        DAT_0004bb7c = (char *)0x0;
      }
      if ((DAT_0004bb1c != 0) && (DAT_0004bb2c != (Elf32_Ehdr *)0x0)) {
        uVar12 = FUN_000290d8(DAT_0004bb2c,0);
        FUN_000193f0("splitsize = ",uVar12);
      }
      DAT_0004bb6c = 0;
      if ((DAT_0004bb08 == 0) && (DAT_0004bbb8 != 0)) {
        if ((local_130 == 3) || (DAT_000491c4 == 4)) {
                    /* WARNING: Subroutine does not return */
          FUN_000187c0(0x12,DAT_00066db0);
        }
        if (DAT_000681c0 == 0) {
          uVar27 = local_134;
          if (DAT_000491c4 != 1) {
            uVar27 = 1;
          }
          if (uVar27 != 0) {
LAB_000133dc:
            FUN_000194cc(DAT_00066db0," not found or empty");
            goto LAB_000133f0;
          }
        }
        if (DAT_00049dd8 != (undefined4 *)0x0) {
LAB_000134a0:
          if (local_13c != 0) {
            fwrite("sd: Scanning files\n",1,0x13,DAT_00066dc8);
            fflush(DAT_00066dc8);
            if (DAT_00049dd8 == (undefined4 *)0x0) goto LAB_0001354c;
          }
          if (bVar5) {
            do {
              if (DAT_000491c4 == 0 || DAT_000491c4 - 3 < 2) {
                uVar12 = 0;
                if (DAT_00049aec != 0) {
                  uVar12 = 1;
                }
              }
              else {
                uVar12 = 0;
              }
              iVar10 = FUN_00029fac(*DAT_00049dd8,uVar12);
              if (iVar10 != 0) {
                pcVar9 = (char *)*DAT_00049dd8;
                if (iVar10 == -1) {
                  FUN_000194cc("name not matched: ",pcVar9);
                    /* WARNING: Subroutine does not return */
                  FUN_000187c0(0x12,*DAT_00049dd8);
                }
                goto LAB_000177c4;
              }
              free((void *)*DAT_00049dd8);
              puVar33 = DAT_00049dd8;
              DAT_00049dd8 = (undefined4 *)DAT_00049dd8[1];
              free(puVar33);
            } while (DAT_00049dd8 != (undefined4 *)0x0);
          }
          else {
            do {
              if (DAT_000491c4 == 0 || DAT_000491c4 - 3 < 2) {
                uVar12 = 0;
                if (DAT_00049aec != 0) {
                  uVar12 = 1;
                }
              }
              else {
                uVar12 = 0;
              }
              iVar10 = FUN_00029fac(*DAT_00049dd8,uVar12);
              if (iVar10 != 0) {
                pcVar9 = (char *)*DAT_00049dd8;
                if (iVar10 != -1) goto LAB_000177c4;
                FUN_000194cc("name not matched: ",pcVar9);
              }
              free((void *)*DAT_00049dd8);
              puVar33 = DAT_00049dd8;
              DAT_00049dd8 = (undefined4 *)DAT_00049dd8[1];
              free(puVar33);
            } while (DAT_00049dd8 != (undefined4 *)0x0);
          }
        }
      }
      else {
        if (DAT_000681c0 == 0) {
          uVar27 = local_134;
          if (DAT_000491c4 != 1) {
            uVar27 = 1;
          }
          if (uVar27 != 0) goto LAB_000133dc;
        }
LAB_000133f0:
        bVar28 = bVar4;
        if (local_130 != 3) {
          bVar28 = false;
        }
        iVar10 = DAT_0004bb0c;
        if (bVar28) {
          for (; iVar10 != 0; iVar10 = *(int *)(iVar10 + 0x68)) {
            if (DAT_0004baf8 == 0) {
              uVar12 = 1;
            }
            else {
              uVar12 = FUN_00022d2c(*(undefined4 *)(iVar10 + 0x44),DAT_00049aec);
            }
            *(undefined4 *)(iVar10 + 0x58) = uVar12;
          }
        }
        if (DAT_00049dd8 != (undefined4 *)0x0) {
          if (DAT_000491c4 != 4) goto LAB_000134a0;
          if (local_13c != 0) {
            fwrite("sd: Scanning archive entries\n",1,0x1d,DAT_00066dc8);
            fflush(DAT_00066dc8);
          }
          while (DAT_00049dd8 != (undefined4 *)0x0) {
            iVar10 = FUN_00022ec4(*DAT_00049dd8,DAT_00049aec);
            if (iVar10 != 0) {
              pcVar9 = (char *)*DAT_00049dd8;
              if (iVar10 != -1) goto LAB_000177c4;
              FUN_000194cc("not in archive: ",pcVar9);
            }
            free((void *)*DAT_00049dd8);
            puVar33 = DAT_00049dd8;
            DAT_00049dd8 = (undefined4 *)DAT_00049dd8[1];
            free(puVar33);
          }
        }
      }
LAB_0001354c:
      if (DAT_0004bc68 == 2) {
        uVar12 = 0;
        if ((DAT_000491c4 == 3 || (DAT_000491c4 == 0 || DAT_000491c4 == 4)) &&
           (uVar12 = 0, DAT_00049aec != 0)) {
          uVar12 = 1;
        }
        iVar10 = FUN_00029fac(".",uVar12);
        if (iVar10 != 0) {
          if (iVar10 != -1) {
                    /* WARNING: Subroutine does not return */
            FUN_000187c0(iVar10,&DAT_0002f684);
          }
          if (bVar5) {
            FUN_000194cc("name not matched: ","current directory for -R");
                    /* WARNING: Subroutine does not return */
            FUN_000187c0(0x12,&DAT_0002f684);
          }
          FUN_000194cc("name not matched: ","current directory for -R");
        }
      }
      if (local_13c == 0) {
        if ((local_100 == 0 && local_130 != 4) && (iVar10 = DAT_0004bb0c, DAT_000491c4 - 2 < 2)) {
LAB_00015f7c:
          for (; iVar10 != 0; iVar10 = *(int *)(iVar10 + 0x68)) {
            if (DAT_0004baf8 == 0) {
              uVar12 = 1;
            }
            else {
              uVar12 = FUN_00022d2c(*(undefined4 *)(iVar10 + 0x44),DAT_00049aec);
            }
            *(undefined4 *)(iVar10 + 0x58) = uVar12;
          }
          if (local_13c != 0) goto LAB_00013a84;
        }
      }
      else {
        fwrite("sd: Applying filters\n",1,0x15,DAT_00066dc8);
        fflush(DAT_00066dc8);
        if ((local_100 == 0 && local_130 != 4) && (iVar10 = DAT_0004bb0c, DAT_000491c4 - 2 < 2))
        goto LAB_00015f7c;
LAB_00013a84:
        fwrite("sd: Checking dups\n",1,0x12,DAT_00066dc8);
        fflush(DAT_00066dc8);
      }
      iVar10 = FUN_00022a00();
      if (iVar10 != 0) {
        if (iVar10 == 0x10) {
                    /* WARNING: Subroutine does not return */
          FUN_000187c0(0x10,"cannot repeat names in zip file");
        }
                    /* WARNING: Subroutine does not return */
        FUN_000187c0(iVar10,"was processing list of files");
      }
      if (DAT_000681c0 != 0) {
        free(DAT_00066dc0);
      }
      pcVar9 = DAT_00066db0;
      if (DAT_0004bbb0 == (char *)0x0) {
        pbVar22 = (byte *)strrchr(DAT_00066db0,0x2f);
        if (pbVar22 == (byte *)0x0) {
          local_124 = 0;
        }
        else {
          DAT_0004bbb0 = malloc((size_t)(pbVar22 + (1 - (int)pcVar9)));
          if (DAT_0004bbb0 == (char *)0x0) {
LAB_00017958:
                    /* WARNING: Subroutine does not return */
            FUN_000187c0(4,"was processing arguments");
          }
          bVar1 = *pbVar22;
          local_124 = (uint)bVar1;
          *pbVar22 = 0;
          strcpy(DAT_0004bbb0,DAT_00066db0);
          *pbVar22 = bVar1;
        }
      }
      else {
        local_124 = 0;
      }
      if (local_13c != 0) {
        fwrite("sd: Scanning files to update\n",1,0x1d,DAT_00066dc8);
        fflush(DAT_00066dc8);
      }
      DAT_0004bb9c = 0;
      local_f8 = 0;
      DAT_0004bb98 = 0;
      bVar28 = true;
      for (iVar10 = DAT_0004bb0c; iVar10 != 0; iVar10 = *(int *)(iVar10 + 0x68)) {
        if ((DAT_00049ae8 != 0) && (DAT_0004bba0 != 0)) {
          DAT_0004bb98 = DAT_0004bb98 + 1;
          FUN_0002e028(DAT_0004bb98,100);
          if ((extraout_r1 == 0) &&
             (tVar18 = time((time_t *)0x0), DAT_00049ad0 < tVar18 - DAT_0004bba0)) {
            if (DAT_0004bb9c == 0) {
              DAT_0004bb9c = 1;
              fputc(0x20,DAT_00066dc8);
              fflush(DAT_00066dc8);
            }
            DAT_0004bba0 = tVar18;
            fputc(0x2e,DAT_00066dc8);
            fflush(DAT_00066dc8);
          }
        }
        *(undefined4 *)(iVar10 + 0x60) = 0;
        bVar3 = false;
        if (*(int *)(iVar10 + 0x58) == 0) goto LAB_00013ef4;
        local_9c = *(int *)(iVar10 + 0x14);
        iVar36 = *(int *)(iVar10 + 0x10);
        bVar3 = bVar28;
        if (DAT_000491c4 == 0) {
          uVar27 = FUN_000206d8(iVar10,&local_8c);
          if ((uVar27 & 1) == 0) {
            uVar27 = *(uint *)(iVar10 + 8);
          }
          else {
            uVar27 = FUN_00023160(local_88);
          }
          if ((uVar27 < DAT_0004bb94) || (DAT_0004bb90 != 0 && DAT_0004bb90 <= uVar27)) {
LAB_00014044:
            *(undefined4 *)(iVar10 + 0x58) = 0;
          }
          else {
LAB_00013fb0:
            piVar30 = &DAT_0004bc00;
            uVar27 = iVar36 + 2;
            DAT_0004bc00 = DAT_0004bc00 + 1;
            if (1 < uVar27) {
              piVar30 = &DAT_0004bbf0;
            }
            *(int *)(iVar10 + 0x14) = local_9c;
            if (1 < uVar27) {
              *piVar30 = *piVar30 + iVar36;
            }
            local_f8 = local_f8 + 1;
          }
        }
        else {
          if (DAT_000491c4 == 4) {
            uVar27 = FUN_000206d8(iVar10,&local_8c);
            if ((uVar27 & 1) == 0) {
              uVar27 = *(uint *)(iVar10 + 8);
            }
            else {
              uVar27 = FUN_00023160(local_88);
            }
            if ((uVar27 < DAT_0004bb94) || (DAT_0004bb90 != 0 && DAT_0004bb90 <= uVar27))
            goto LAB_00014044;
            goto LAB_00013fb0;
          }
          pcVar9 = *(char **)(iVar10 + 0x30);
          if (pcVar9 == (char *)0x0) {
            bVar2 = false;
          }
          else {
            sVar23 = strlen(pcVar9);
            bVar2 = pcVar9[sVar23 - 1] == '/';
          }
          uVar27 = FUN_0002a694(pcVar9,0,&local_9c,&local_98);
          if (uVar27 == 0) {
            uVar12 = 0;
            if (DAT_00049df0 != 0) {
              uVar12 = 2;
            }
            *(undefined4 *)(iVar10 + 0x58) = uVar12;
            bVar28 = false;
LAB_00013eac:
            *(undefined4 *)(iVar10 + 0x5c) = 0;
            if (DAT_0004bc5c == 0) {
              bVar3 = bVar28;
              if (DAT_0004bbe8 != (FILE *)0x0) {
                uVar12 = *(undefined4 *)(iVar10 + 0x48);
                pcVar9 = "missing or early";
                goto LAB_00013ee4;
              }
            }
            else {
              pcVar9 = "missing or early";
              uVar12 = *(undefined4 *)(iVar10 + 0x48);
LAB_000151f0:
              fprintf(DAT_00066dc8,"zip diagnostic: %s %s\n",uVar12,pcVar9);
              bVar3 = bVar28;
              if (DAT_0004bbe8 != (FILE *)0x0) {
                uVar12 = *(undefined4 *)(iVar10 + 0x48);
                pcVar9 = "up to date";
                if (*(int *)(iVar10 + 0x5c) == 0) {
                  pcVar9 = "missing or early";
                }
LAB_00013ee4:
                fprintf(DAT_0004bbe8,"zip diagnostic: %s %s\n",uVar12,pcVar9);
                bVar3 = bVar28;
              }
            }
            goto LAB_00013ef4;
          }
          if ((uVar27 < DAT_0004bb94) || (DAT_0004bb90 != 0 && DAT_0004bb90 <= uVar27))
          goto LAB_00015178;
          if (DAT_000491c4 - 2 < 2) {
            uVar25 = FUN_000206d8(iVar10,&local_8c);
            if ((uVar25 & 1) != 0) {
              if (local_94 <= local_88[0]) goto LAB_00015178;
              goto LAB_00014094;
            }
            uVar25 = *(uint *)(iVar10 + 8);
            if (uVar27 <= uVar25) {
LAB_00015178:
              if (DAT_00049df0 == 0) {
                *(undefined4 *)(iVar10 + 0x58) = 0;
              }
              else {
                *(undefined4 *)(iVar10 + 0x58) = 2;
              }
              if ((uVar27 < DAT_0004bb94) || (DAT_0004bb90 != 0 && DAT_0004bb90 <= uVar27))
              goto LAB_00013eac;
              *(undefined4 *)(iVar10 + 0x5c) = 1;
              if (DAT_0004bc5c == 0) {
                if (DAT_0004bbe8 == (FILE *)0x0) goto LAB_00013ef4;
                uVar12 = *(undefined4 *)(iVar10 + 0x48);
                pcVar9 = "up to date";
                goto LAB_00013ee4;
              }
              pcVar9 = "up to date";
              uVar12 = *(undefined4 *)(iVar10 + 0x48);
              goto LAB_000151f0;
            }
            bVar3 = false;
            if (DAT_0004bbd4 == 0) goto LAB_00016bec;
          }
          else {
LAB_00014094:
            uVar25 = *(uint *)(iVar10 + 8);
            if (DAT_0004bbd4 == 0) {
LAB_00016bec:
              if (uVar27 == uVar25) {
                iVar36 = *(int *)(iVar10 + 0x14);
                if (iVar36 == 0) {
LAB_00016c00:
                  if (local_9c != -1) {
                    iVar36 = 0;
                    goto LAB_00016c0c;
                  }
                }
                else {
LAB_00016c0c:
                  if (local_9c != iVar36) goto LAB_000140b4;
                }
                *(undefined4 *)(iVar10 + 0x60) = 1;
                bVar3 = bVar28;
                goto LAB_000140b8;
              }
            }
            else if (uVar27 == uVar25) {
              if (((bVar2) && (local_9c == -1)) || (*(int *)(iVar10 + 0x14) == local_9c))
              goto LAB_00014044;
              if (*(int *)(iVar10 + 0x14) == 0) goto LAB_00016c00;
            }
LAB_000140b4:
            bVar3 = false;
          }
LAB_000140b8:
          piVar30 = &DAT_0004bc00;
          DAT_0004bc00 = DAT_0004bc00 + 1;
          if (local_9c + 2U < 2) {
            iVar36 = 0;
          }
          else {
            piVar30 = &DAT_0004bbf0;
            iVar36 = local_9c;
          }
          *(int *)(iVar10 + 0x14) = iVar36;
          if (1 < local_9c + 2U) {
            *piVar30 = *piVar30 + iVar36;
          }
          local_f8 = local_f8 + 1;
        }
LAB_00013ef4:
        bVar28 = bVar3;
      }
      if (local_13c != 0) {
        fprintf(DAT_00066dc8,"sd: fcount = %u\n",DAT_00066dbc);
        fflush(DAT_00066dc8);
      }
      DAT_0004bb98 = 0;
      DAT_0004bb9c = 0;
      puVar33 = DAT_0004bb00;
      do {
        if (puVar33 == (undefined4 *)0x0) {
          if (DAT_0004bb18 != 0) {
            fputc(10,DAT_00066dc8);
            DAT_0004bb18 = 0;
          }
          if (DAT_0004bbb8 != 0) {
            if (((DAT_00049ae8 != 0) && (fflush(DAT_00066dc8), DAT_00049ae8 != 0)) &&
               (DAT_0004bbb8 == 5 || (DAT_0004bbb8 & 0xfffffffd) == 1)) {
              if (DAT_0004bb18 != 0) {
                fputc(10,DAT_00066dc8);
                DAT_0004bb18 = 0;
              }
              if (local_130 == 3) {
                fwrite("Archive contains:\n",1,0x12,DAT_00066dc8);
              }
              else if (DAT_000491c4 == 0) {
                fwrite("Would Delete:\n",1,0xe,DAT_00066dc8);
              }
              else if (DAT_000491c4 == 3) {
                fwrite("Would Freshen:\n",1,0xf,DAT_00066dc8);
              }
              else {
                if (DAT_000491c4 == 4) {
                  sVar23 = 0xc;
                  pcVar9 = "Would Copy:\n";
                }
                else {
                  sVar23 = 0x12;
                  pcVar9 = "Would Add/Update:\n";
                }
                fwrite(pcVar9,1,sVar23,DAT_00066dc8);
              }
              fflush(DAT_00066dc8);
            }
            if (DAT_0004bbe8 != (FILE *)0x0) {
              if (DAT_0004bb14 != 0) {
                fputc(10,DAT_0004bbe8);
                DAT_0004bb14 = 0;
              }
              if (local_130 == 3) {
                fwrite("Archive contains:\n",1,0x12,DAT_0004bbe8);
              }
              else if (DAT_000491c4 == 0) {
                fwrite("Would Delete:\n",1,0xe,DAT_0004bbe8);
              }
              else if (DAT_000491c4 == 3) {
                fwrite("Would Freshen:\n",1,0xf,DAT_0004bbe8);
              }
              else {
                if (DAT_000491c4 == 4) {
                  sVar23 = 0xc;
                  pcVar9 = "Would Copy:\n";
                }
                else {
                  sVar23 = 0x12;
                  pcVar9 = "Would Add/Update:\n";
                }
                fwrite(pcVar9,1,sVar23,DAT_0004bbe8);
              }
              fflush(DAT_0004bbe8);
            }
            iVar38 = 0;
            iVar10 = 0;
            iVar36 = DAT_0004bb0c;
            do {
              puVar33 = DAT_0004bb00;
              if (iVar36 == 0) {
                for (; pFVar13 = DAT_00066dc8, puVar33 != (undefined4 *)0x0;
                    puVar33 = (undefined4 *)puVar33[8]) {
                  iVar10 = iVar10 + 1;
                  if (0 < (int)puVar33[6]) {
                    iVar38 = iVar38 + puVar33[6];
                  }
                  if (DAT_0004bba8 == 0) {
                    if ((DAT_00049ae8 != 0) &&
                       (DAT_0004bbb8 == 5 || (DAT_0004bbb8 & 0xfffffffd) == 1)) {
                      fprintf(DAT_00066dc8,"  %s\n",puVar33[3]);
                    }
                    if (DAT_0004bbe8 != (FILE *)0x0) {
                      fprintf(DAT_0004bbe8,"  %s\n",puVar33[3]);
                    }
                  }
                  else {
                    pvVar16 = (void *)FUN_000260b0(puVar33[2]);
                    if ((DAT_00049ae8 != 0) &&
                       (DAT_0004bbb8 == 5 || (DAT_0004bbb8 & 0xfffffffd) == 1)) {
                      fprintf(DAT_00066dc8,"  %s\n",pvVar16);
                    }
                    if (DAT_0004bbe8 != (FILE *)0x0) {
                      fprintf(DAT_0004bbe8,"  %s\n",pvVar16);
                    }
                    free(pvVar16);
                  }
                }
                if ((DAT_00049ae8 != 0) || (DAT_0004bbe8 == (FILE *)0x0)) {
                  uVar12 = FUN_000290d8(iVar10,0);
                  uVar26 = FUN_000290d8(iVar38,0);
                  fprintf(pFVar13,"Total %s entries (%s bytes)\n",uVar12,uVar26);
                  if (DAT_0004bbe8 == (FILE *)0x0) goto LAB_00011fb0;
                }
                pFVar13 = DAT_0004bbe8;
                uVar12 = FUN_000290d8(iVar10,0);
                uVar26 = FUN_000290d8(iVar38,0);
                fprintf(pFVar13,"Total %s entries (%s bytes)\n",uVar12,uVar26);
                goto LAB_00011fb0;
              }
              if (*(int *)(iVar36 + 0x58) != 0 || local_130 == 3) {
                iVar10 = iVar10 + 1;
                if (0 < *(int *)(iVar36 + 0x14)) {
                  iVar38 = iVar38 + *(int *)(iVar36 + 0x14);
                }
                if ((DAT_00049ae8 != 0) && ((DAT_0004bbb8 & 0xfffffffd) == 1)) {
                  fprintf(DAT_00066dc8,"  %s\n",*(undefined4 *)(iVar36 + 0x48));
                }
                if (DAT_0004bbe8 == (FILE *)0x0) {
LAB_000164f8:
                  if (1 < DAT_0004bbb8 - 3) {
LAB_00016508:
                    if (1 < DAT_0004bbb8 - 5) goto LAB_00016494;
                    goto LAB_00016450;
                  }
                  if (*(int *)(iVar36 + 0x54) != 0) {
                    if (DAT_00049ae8 != 0 && DAT_0004bbb8 == 3) {
                      fprintf(DAT_00066dc8,"     Escaped Unicode:  %s\n");
                    }
                    if (DAT_0004bbe8 != (FILE *)0x0) {
                      fprintf(DAT_0004bbe8,"     Escaped Unicode:  %s\n",
                              *(undefined4 *)(iVar36 + 0x54));
                    }
                    goto LAB_00016508;
                  }
                  if (1 < DAT_0004bbb8 - 5) goto LAB_00016494;
                }
                else {
                  if (1 < DAT_0004bbb8 - 5) {
                    fprintf(DAT_0004bbe8,"  %s\n",*(undefined4 *)(iVar36 + 0x48));
                    goto LAB_000164f8;
                  }
LAB_00016450:
                  if (*(int *)(iVar36 + 0x54) != 0) {
                    if (DAT_00049ae8 != 0 && DAT_0004bbb8 == 5) {
                      fprintf(DAT_00066dc8,"  %s\n");
                    }
                    if (DAT_0004bbe8 != (FILE *)0x0) {
                      fprintf(DAT_0004bbe8,"  %s\n",*(undefined4 *)(iVar36 + 0x54));
                    }
                    goto LAB_00016494;
                  }
                }
                if (DAT_00049ae8 != 0 && DAT_0004bbb8 == 5) {
                  fprintf(DAT_00066dc8,"  %s\n",*(undefined4 *)(iVar36 + 0x48));
                }
                if (DAT_0004bbe8 != (FILE *)0x0) {
                  fprintf(DAT_0004bbe8,"  %s\n",*(undefined4 *)(iVar36 + 0x48));
                }
              }
LAB_00016494:
              iVar36 = *(int *)(iVar36 + 0x68);
            } while( true );
          }
          if (local_f8 != 0) {
            local_f8 = DAT_0004bc54;
            if (DAT_0004bc54 != 0) {
              if ((bVar28) && (DAT_00066dbc == 0)) goto LAB_00017640;
              local_f8 = DAT_0004bbb8;
            }
            goto LAB_00015f1c;
          }
          if ((DAT_0004bb00 == (undefined4 *)0x0) && (DAT_0004bbd4 == 0)) {
            if (DAT_0004bb0c == 0) {
              if (DAT_0004bbc4 == 0) {
                if ((DAT_00049df8 != 0) && (DAT_00066dc4 != 0)) goto LAB_00017168;
                if (DAT_000491c4 - 2 < 2) goto LAB_000175c8;
                if (((DAT_00049de8 == 0 && DAT_0004bc58 == 0) && DAT_0004bc50 == 0) &&
                    DAT_00049df4 == 0) goto LAB_00017978;
                goto LAB_000178e4;
              }
            }
            else if (((((DAT_00049de8 == 0 && DAT_0004bc58 == 0) && DAT_0004bc50 == 0) &&
                      DAT_00049df4 == 0) && DAT_00049df0 == 0) && DAT_00049dfc == 0) {
              if (DAT_00049df8 == 0) {
                if (1 < DAT_000491c4 - 2) {
LAB_00017978:
                  if ((DAT_0004bc68 != 0) && (DAT_0004baf8 == 0 && 0 < local_100)) {
                    iVar10 = 1;
                    DAT_00066dcc._0_1_ = s_try__zip_0002f7e4[0];
                    DAT_00066dcc._1_1_ = s_try__zip_0002f7e4[1];
                    DAT_00066dcc._2_1_ = s_try__zip_0002f7e4[2];
                    DAT_00066dcc._3_1_ = s_try__zip_0002f7e4[3];
                    DAT_00066dd0._0_1_ = s_try__zip_0002f7e4[4];
                    DAT_00066dd0._1_1_ = s_try__zip_0002f7e4[5];
                    DAT_00066dd0._2_1_ = s_try__zip_0002f7e4[6];
                    DAT_00066dd0._3_1_ = s_try__zip_0002f7e4[7];
                    DAT_00066dd4._0_1_ = s_try__zip_0002f7e4[8];
                    while( true ) {
                      sVar23 = strlen((char *)&DAT_00066dcc);
                      uVar29 = DAT_0002f7f4;
                      if (local_100 <= iVar10) break;
                      *(undefined2 *)((int)&DAT_00066dcc + sVar23) =
                           s_command_line_arguments__0002f048._24_2_;
                      iVar36 = iVar10 * 4;
                      iVar10 = iVar10 + 1;
                      strcpy((char *)((int)&DAT_00066dcc + sVar23 + 1),*(char **)(local_a0 + iVar36)
                            );
                    }
                    *(undefined4 *)((int)&DAT_00066dcc + sVar23) = DAT_0002f7f0;
                    *(undefined2 *)((int)&DAT_00066dd0 + sVar23) = uVar29;
                    for (; local_100 < local_c4[0]; local_100 = local_100 + 1) {
                      sVar23 = strlen((char *)&DAT_00066dcc);
                      *(undefined2 *)((int)&DAT_00066dcc + sVar23) =
                           s_command_line_arguments__0002f048._24_2_;
                      strcpy((char *)((int)&DAT_00066dcc + sVar23 + 1),
                             *(char **)(local_a0 + local_100 * 4));
                    }
                    /* WARNING: Subroutine does not return */
                    FUN_000187c0(0xc,&DAT_00066dcc);
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_000187c0(0xc,DAT_00066db0);
                }
LAB_000175c8:
                uVar12 = FUN_000195a8(0xc);
                return uVar12;
              }
LAB_00017168:
              FUN_00018ff8(DAT_00066db0);
              uVar12 = FUN_000195a8(0);
              return uVar12;
            }
          }
          if (((DAT_0004bc54 != 0) && (bVar28)) && (DAT_00066dbc == 0)) {
LAB_00017640:
            FUN_000193f0("Archive is current",&DAT_000369fc);
            goto LAB_00011fb0;
          }
          if (local_134 == 0) {
LAB_00015f1c:
            if (DAT_0004bbb4 != (char *)0x0) {
LAB_00014460:
              DAT_00066ba8 = FUN_0002ac5c();
            }
            iVar10 = DAT_0004bb0c;
            if (((DAT_0004bb0c != 0) && (DAT_0004bb70 != 1)) && (DAT_00066dc4 == 4)) {
              DAT_00066dc4 = 0;
            }
          }
          else {
            if (DAT_00066dc4 != 0) {
              local_f8 = 1;
              goto LAB_00015f1c;
            }
            if (DAT_0004bb0c == 0) {
              if (DAT_0004bbb4 == (char *)0x0) {
                iVar10 = 0;
                goto LAB_000144ac;
              }
              goto LAB_00014460;
            }
            local_f8 = 1;
            iVar10 = DAT_0004bb0c;
            if (DAT_0004bbb4 != (char *)0x0) goto LAB_00014460;
          }
LAB_000144ac:
          iVar36 = strcmp(DAT_00066db0,"-");
          if (iVar36 == 0) {
LAB_00016718:
            DAT_0004bb74 = 0;
          }
          else {
            if (DAT_00049dec == 0) {
              if ((!bVar4) && ((iVar10 != 0 || (DAT_00066dc4 != 0)))) goto LAB_000144e8;
LAB_00016ff8:
              pFVar13 = fopen(DAT_0004bb78,"w");
            }
            else {
              if ((iVar10 == 0) && (DAT_00066dc4 == 0)) goto LAB_00016718;
              if (bVar4) goto LAB_00016ff8;
LAB_000144e8:
              pFVar13 = fopen(DAT_0004bb78,"r+");
            }
            if (pFVar13 == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_000187c0(0xf,DAT_0004bb78);
            }
            fclose(pFVar13);
            DAT_0004bb74 = FUN_00023278(DAT_0004bb78);
            if ((DAT_0004bb0c == 0) && (DAT_00066dc4 == 0)) {
              unlink(DAT_0004bb78);
            }
          }
          if (DAT_00049df4 != 0) {
            DAT_00066dc4 = 0;
          }
          if (local_13c != 0) {
            fwrite("sd: Open zip file and create temp file\n",1,0x27,DAT_00066dc8);
            fflush(DAT_00066dc8);
          }
          pcVar9 = DAT_00066db0;
          DAT_00066db4 = 0;
          iVar10 = strcmp(DAT_00066db0,"-");
          if (iVar10 == 0) {
            DAT_0004bb88 = stdout;
            DAT_0004bb8c = malloc(4);
            if (DAT_0004bb8c == (char *)0x0) goto LAB_00017874;
            pcVar9 = DAT_0004bb8c + 1;
            DAT_0004bb8c[0] = '-';
            *pcVar9 = '\0';
          }
          else if (local_f8 == 0) {
            if (local_13c != 0) {
              fwrite("sd: Creating new zip file\n",1,0x1a,DAT_00066dc8);
              fflush(DAT_00066dc8);
            }
            if (DAT_00066dc4 != 0) {
              DAT_0004bb7c = (char *)FUN_00023ad0(DAT_0004bb80,0);
              while (DAT_0004bb84 = fopen(DAT_0004bb7c,"r"), DAT_0004bb84 == (FILE *)0x0) {
                iVar10 = FUN_00023bd4();
                if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_000187c0(9,"could not open archive to read");
                }
                free(DAT_0004bb7c);
                DAT_0004bb7c = (char *)FUN_00023ad0(DAT_0004bb80,1);
              }
            }
            pcVar11 = DAT_00066db0;
            pcVar9 = DAT_0004bbb0;
            if (DAT_0004bbb0 == (char *)0x0) {
              sVar23 = strlen(DAT_00066db0);
              pcVar9 = malloc(sVar23 + 0xc);
              DAT_0004bb8c = pcVar9;
              if (pcVar9 == (char *)0x0) goto LAB_00017874;
              pcVar11 = stpcpy(pcVar9,pcVar11);
              iVar10 = (int)pcVar11 - (int)pcVar9;
              while ((iVar10 != 0 && (pcVar11 = pcVar11 + -1, *pcVar11 != '/'))) {
                iVar10 = iVar10 + -1;
              }
              pcVar9[iVar10] = '\0';
            }
            else {
              sVar23 = strlen(DAT_0004bbb0);
              pcVar11 = malloc(sVar23 + 0xc);
              DAT_0004bb8c = pcVar11;
              if (pcVar11 == (char *)0x0) {
LAB_00017874:
                    /* WARNING: Subroutine does not return */
                FUN_000187c0(4,"allocating temp filename");
              }
              pcVar9 = stpcpy(pcVar11,pcVar9);
              if ((*pcVar11 == '\0') || (pcVar9[-1] != '/')) {
                *(undefined2 *)pcVar9 = DAT_0002f544;
              }
            }
            pcVar9 = DAT_0004bb8c;
            sVar23 = strlen(DAT_0004bb8c);
            cVar7 = DAT_0002f550;
            uVar12 = DAT_0002f54c;
            *(undefined4 *)(pcVar9 + sVar23) = DAT_0002f548;
            *(undefined4 *)(pcVar9 + sVar23 + 4) = uVar12;
            pcVar9[sVar23 + 8] = cVar7;
            iVar10 = mkstemp(DAT_0004bb8c);
            if ((iVar10 == -1) || (DAT_0004bb88 = fdopen(iVar10,"w"), DAT_0004bb88 == (FILE *)0x0))
            {
LAB_000169e4:
                    /* WARNING: Subroutine does not return */
              FUN_000187c0(10,DAT_0004bb8c);
            }
          }
          else {
            if (1 < DAT_0004bb70) {
                    /* WARNING: Subroutine does not return */
              FUN_000187c0(0x10,"cannot grow split archive");
            }
            DAT_0004bb88 = fopen(pcVar9,"r+");
            if (DAT_0004bb88 == (FILE *)0x0) {
LAB_000178e4:
                    /* WARNING: Subroutine does not return */
              FUN_000187c0(0xd,DAT_00066db0);
            }
            DAT_0004bb8c = DAT_00066db0;
            iVar10 = fseek(DAT_0004bb88,DAT_00066db8,0);
            if (iVar10 != 0) {
              iVar10 = ferror(DAT_0004bb88);
              if (iVar10 == 0) {
                uVar12 = 2;
              }
              else {
                uVar12 = 0xb;
              }
                    /* WARNING: Subroutine does not return */
              FUN_000187c0(uVar12,DAT_00066db0);
            }
            DAT_0004bb38 = DAT_00066db8;
            DAT_00066db4 = DAT_00066db8;
          }
          pcVar9 = malloc(0x4000);
          if (pcVar9 == (char *)0x0) {
LAB_00017b04:
                    /* WARNING: Subroutine does not return */
            FUN_000187c0(4,DAT_0004bb8c);
          }
          setvbuf(DAT_0004bb88,pcVar9,0,0x4000);
          DAT_00049ae0 = 1;
          iVar10 = FUN_00020c4c(DAT_0004bb88);
          if (iVar10 == 0) {
            DAT_0004bbcc = 1;
            DAT_00049ae0 = 0;
          }
          iVar10 = strcmp(DAT_00066db0,"-");
          uVar25 = (local_f8 ^ 1) & 1;
          uVar27 = uVar25;
          if (iVar10 == 0) {
            uVar27 = 0;
          }
          if (uVar27 != 0) {
            if (DAT_0004bb84 != (FILE *)0x0) {
              if (DAT_00066dc4 != 0) {
                iVar10 = FUN_00024f50();
                if (iVar10 != 0) {
                  if (iVar10 != 10) {
                    local_120 = &DAT_00066db0;
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_000187c0(iVar10,*local_120);
                }
                local_124 = 0;
                if (DAT_0004bb84 == (FILE *)0x0) goto LAB_00016e70;
              }
              fclose(DAT_0004bb84);
              DAT_0004bb84 = (FILE *)0x0;
              free(DAT_0004bb7c);
            }
LAB_00016e70:
            DAT_00066db4 = DAT_00066dc4;
            if (DAT_0004bb30 != 0) {
              if (local_13c != 0) {
                fwrite("sd: Adding spanning/splitting signature at top of archive\n",1,0x3a,
                       DAT_00066dc8);
                fflush(DAT_00066dc8);
              }
              DAT_00066dcc = 0x8074b50;
              FUN_00024580(&DAT_00066dcc,1,4,0);
              DAT_00066db4 = DAT_00066db4 + 4;
            }
          }
          iVar10 = local_13c;
          if (DAT_0004bb0c == 0) {
            iVar10 = 0;
          }
          if (iVar10 != 0) {
            fwrite("sd: Going through old zip file\n",1,0x1f,DAT_00066dc8);
            fflush(DAT_00066dc8);
          }
          piVar30 = &DAT_0004bb0c;
          bVar28 = false;
          while (pvVar16 = (void *)*piVar30, pvVar16 != (void *)0x0) {
            if (*(int *)((int)pvVar16 + 0x58) == 1) {
              iVar10 = *(int *)((int)pvVar16 + 0x14);
              if (iVar10 == -1) {
                iVar10 = 0;
              }
              if ((DAT_000491c4 & 0xfffffffb) == 0) {
                if (DAT_000491c4 == 4) {
                  FUN_0001808c();
                  if ((DAT_0004bc38 + -1 == *(int *)((int)pvVar16 + 0x20)) ||
                     (DAT_0004bc38 = 0, *(int *)((int)pvVar16 + 0x20) == -1)) {
                    if (DAT_00049ae8 != 0) {
                      fprintf(DAT_00066dc8," skipping: %s",*(undefined4 *)((int)pvVar16 + 0x48));
                      DAT_0004bb18 = 1;
                      fflush(DAT_00066dc8);
                      if (DAT_0004bbec == 0) goto LAB_000162d8;
LAB_00016ae0:
                      fprintf(DAT_0004bbe8," skipping: %s",*(undefined4 *)((int)pvVar16 + 0x48));
                      DAT_0004bb14 = 1;
                      fflush(DAT_0004bbe8);
                      goto LAB_000162d8;
                    }
                    if (DAT_0004bbec != 0) goto LAB_00016ae0;
LAB_00015d48:
                    *(undefined4 *)((int)pvVar16 + 0x58) = 0;
LAB_00014dc8:
                    if ((DAT_0004bc38 != 0) || (DAT_0004bc58 != 1 || local_124 == 0))
                    goto LAB_00014dfc;
                    DAT_0004bc08 = DAT_0004bc08 + 1;
                  }
                  else {
                    if (DAT_00049ae8 == 0) {
                      if (DAT_0004bbec != 0) {
LAB_00016298:
                        fprintf(DAT_0004bbe8," copying: %s",*(undefined4 *)((int)pvVar16 + 0x48));
                        if (DAT_0004bc0c != 0) {
                          fwrite(&DAT_0002f9fc,1,2,DAT_0004bbe8);
                          FUN_000294d8(DAT_0004bbe8,*(undefined4 *)((int)pvVar16 + 0x14));
                          fputc(0x29,DAT_0004bbe8);
                        }
                        DAT_0004bb14 = 1;
                        fflush(DAT_0004bbe8);
                        goto LAB_000162d8;
                      }
                    }
                    else {
                      fprintf(DAT_00066dc8," copying: %s",*(undefined4 *)((int)pvVar16 + 0x48));
                      if (DAT_0004bc0c != 0) {
                        fwrite(&DAT_0002f9fc,1,2,DAT_00066dc8);
                        FUN_000294d8(DAT_00066dc8,*(undefined4 *)((int)pvVar16 + 0x14));
                        fputc(0x29,DAT_00066dc8);
                      }
                      DAT_0004bb18 = 1;
                      fflush(DAT_00066dc8);
                      if (DAT_0004bbec != 0) goto LAB_00016298;
LAB_000162d8:
                      if (DAT_0004bc38 + -1 == *(int *)((int)pvVar16 + 0x20)) goto LAB_00015d48;
                    }
                    local_124 = FUN_0001c8d8(pvVar16);
                    if (local_124 != 0) {
                      if (local_124 == 9) {
                    /* WARNING: Subroutine does not return */
                        FUN_000187c0(9,"user requested abort");
                      }
                      if (DAT_0004bc58 != 1) {
                        sprintf((char *)&DAT_00066dcc,"was copying %s",
                                *(undefined4 *)((int)pvVar16 + 0x48));
                        FUN_000194cc("(try -F to attempt to fix)",&DAT_000369fc);
                    /* WARNING: Subroutine does not return */
                        FUN_000187c0(local_124,&DAT_00066dcc);
                      }
                      iVar10 = fseek(DAT_0004bb88,DAT_0004bb3c,0);
                      if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_000187c0(local_124,"could not seek in output file");
                      }
                      FUN_000194cc("bad - skipping: ",*(undefined4 *)((int)pvVar16 + 0x48));
                      DAT_00066db4 = DAT_0004bb3c;
                      DAT_0004bb38 = DAT_0004bb3c;
                      goto LAB_00014dc8;
                    }
LAB_00014dfc:
                    if ((DAT_00049ae8 != 0) && (DAT_0004bb18 != 0)) {
                      fputc(10,DAT_00066dc8);
                      DAT_0004bb18 = 0;
                      fflush(DAT_00066dc8);
                    }
                    if ((DAT_0004bbec != 0) && (DAT_0004bb14 != 0)) {
                      fputc(10,DAT_0004bbe8);
                      DAT_0004bb14 = 0;
                      fflush(DAT_0004bbe8);
                    }
                    DAT_0004bc08 = DAT_0004bc08 + 1;
                    if (local_124 == 0) {
                      DAT_0004bbfc = *(int *)((int)pvVar16 + 0x10) + DAT_0004bbfc;
                      DAT_0004bbf8 = DAT_0004bbf8 + *(int *)((int)pvVar16 + 0x10);
                      goto LAB_0001473c;
                    }
                  }
                  DAT_0004bbf4 = DAT_0004bbf4 + *(int *)((int)pvVar16 + 0x10);
                  DAT_0004bbfc = DAT_0004bbfc + *(int *)((int)pvVar16 + 0x10);
                  if (DAT_0004bc58 != 1) goto LAB_0001473c;
                  goto LAB_00014b94;
                }
                FUN_0001808c();
                if (DAT_00049ae8 != 0) {
                  fprintf(DAT_00066dc8,"deleting: %s",*(undefined4 *)((int)pvVar16 + 0x48));
                  if (DAT_0004bc0c != 0) {
                    fwrite(&DAT_0002f9fc,1,2,DAT_00066dc8);
                    FUN_000294d8(DAT_00066dc8,*(undefined4 *)((int)pvVar16 + 0x14));
                    fputc(0x29,DAT_00066dc8);
                  }
                  fflush(DAT_00066dc8);
                  fputc(10,DAT_00066dc8);
                }
                if (DAT_0004bbec != 0) {
                  fprintf(DAT_0004bbe8,"deleting: %s",*(undefined4 *)((int)pvVar16 + 0x48));
                  if (DAT_0004bc0c != 0) {
                    fwrite(&DAT_0002f9fc,1,2,DAT_0004bbe8);
                    FUN_000294d8(DAT_0004bbe8,*(undefined4 *)((int)pvVar16 + 0x14));
                    fputc(0x29,DAT_0004bbe8);
                  }
                  fputc(10,DAT_0004bbe8);
                  fflush(DAT_0004bbe8);
                }
                DAT_0004bc08 = DAT_0004bc08 + 1;
                DAT_0004bbf8 = DAT_0004bbf8 + *(int *)((int)pvVar16 + 0x10);
                pvVar17 = *(void **)((int)pvVar16 + 0x40);
                DAT_0004bbfc = DAT_0004bbfc + *(int *)((int)pvVar16 + 0x10);
                goto LAB_00014a50;
              }
              if (((DAT_0004bc5c != 0) || (DAT_0004bc54 == 0)) ||
                 (*(int *)((int)pvVar16 + 0x60) == 0)) {
                FUN_0001808c();
              }
              if (DAT_00049ae8 == 0) {
LAB_00014b0c:
                if (DAT_0004bbec != 0) {
                  if (DAT_000491c4 == 3) {
                    uVar12 = *(undefined4 *)((int)pvVar16 + 0x48);
                    pcVar11 = "freshening: %s";
                  }
                  else {
                    if (DAT_0004bc54 != 0) {
                      iVar36 = *(int *)((int)pvVar16 + 0x60);
LAB_000147ec:
                      if (iVar36 != 0) {
                        if (DAT_0004bc5c == 0) goto LAB_00014804;
                        uVar12 = *(undefined4 *)((int)pvVar16 + 0x48);
                        pcVar11 = " current: %s";
                        goto LAB_00014f64;
                      }
                    }
                    uVar12 = *(undefined4 *)((int)pvVar16 + 0x48);
                    pcVar11 = "updating: %s";
                  }
LAB_00014f64:
                  fprintf(DAT_0004bbe8,pcVar11,uVar12);
                  DAT_0004bb14 = 1;
                  fflush(DAT_0004bbe8);
                }
              }
              else {
                if (DAT_000491c4 == 3) {
                  pcVar11 = "freshening: %s";
LAB_00014aec:
                  fprintf(DAT_00066dc8,pcVar11);
                  DAT_0004bb18 = 1;
                  fflush(DAT_00066dc8);
                  goto LAB_00014b0c;
                }
                if ((DAT_0004bc54 == 0) || (iVar36 = *(int *)((int)pvVar16 + 0x60), iVar36 == 0)) {
                  pcVar11 = "updating: %s";
                  goto LAB_00014aec;
                }
                if (DAT_0004bc5c != 0) {
                  pcVar11 = "      ok: %s";
                  goto LAB_00014aec;
                }
                if (DAT_0004bbec != 0) goto LAB_000147ec;
              }
LAB_00014804:
              iVar36 = FUN_0001abcc(&local_8c,pvVar16);
              if (iVar36 == 0) {
                dVar6 = local_8c->e_entry;
                uVar29 = *(undefined2 *)((int)&local_8c->e_entry + 2);
                uVar12 = *(undefined4 *)(local_8c + 1);
                *(undefined2 *)((int)pvVar16 + 0x26) = *(undefined2 *)((int)&local_8c->e_flags + 2);
                *(undefined2 *)((int)pvVar16 + 0x1a) = uVar29;
                *(undefined4 *)((int)pvVar16 + 0x34) = uVar12;
                if (((short)dVar6 != 0) &&
                   (free(*(void **)(local_8c[1].e_ident_pad + 3)), (short)local_8c->e_entry != 0)) {
                  free(*(void **)&local_8c->e_shnum);
                }
                if ((void *)local_8c[1].e_entry != (void *)0x0) {
                  free((void *)local_8c[1].e_entry);
                }
                free(local_8c);
              }
              else {
                FUN_000194cc("could not read local entry information: ",
                             *(undefined4 *)((int)pvVar16 + 0x48));
                *(undefined2 *)((int)pvVar16 + 0x1a) = 0;
                *(undefined2 *)((int)pvVar16 + 0x26) = *(undefined2 *)((int)pvVar16 + 4);
              }
              if ((DAT_0004bc54 == 0) || (*(int *)((int)pvVar16 + 0x60) == 0)) {
                local_124 = FUN_00020d2c(pvVar16);
                if (local_124 == 0) {
                  local_124 = DAT_0004bc54;
                  if ((DAT_0004bc54 != 0) &&
                     (local_124 = *(uint *)((int)pvVar16 + 0x60), local_124 != 0))
                  goto LAB_00014874;
                }
                else {
                  if (local_124 != 0x12 && local_124 != 0xffffffff) {
                    FUN_000192c0(&DAT_000369fc,1);
                    uVar12 = *(undefined4 *)((int)pvVar16 + 0x30);
                    pcVar9 = "was zipping %s";
                    goto LAB_00014cd8;
                  }
                  if ((DAT_0004bc54 != 0) && (*(int *)((int)pvVar16 + 0x60) != 0))
                  goto LAB_00014874;
                  if (local_124 == 0xffffffff || local_124 == 0x12) {
                    FUN_000192c0(&DAT_000369fc,1);
                    if (local_124 == 0x12) {
                      perror(*(char **)((int)pvVar16 + 0x48));
                      FUN_000194cc("could not open for reading: ",
                                   *(undefined4 *)((int)pvVar16 + 0x48));
                      if (bVar5) {
                        uVar12 = *(undefined4 *)((int)pvVar16 + 0x30);
                        pcVar9 = "was zipping %s";
                        goto LAB_00014cd8;
                      }
                    }
                    else {
                      FUN_000194cc("file and directory with the same name: ",
                                   *(undefined4 *)((int)pvVar16 + 0x48));
                    }
                    FUN_000194cc("will just copy entry over: ",*(undefined4 *)((int)pvVar16 + 0x48))
                    ;
                    local_124 = FUN_0001c8d8(pvVar16);
                    if (local_124 != 0) goto LAB_00014cc8;
                    bVar28 = true;
                    *(undefined4 *)((int)pvVar16 + 0x58) = 0;
                    local_124 = 0;
                  }
                }
              }
              else {
LAB_00014874:
                local_124 = FUN_0001c8d8(pvVar16);
                if (local_124 != 0) {
LAB_00014cc8:
                  uVar12 = *(undefined4 *)((int)pvVar16 + 0x48);
                  pcVar9 = "was copying %s";
LAB_00014cd8:
                  sprintf((char *)&DAT_00066dcc,pcVar9,uVar12);
                    /* WARNING: Subroutine does not return */
                  FUN_000187c0(local_124,&DAT_00066dcc);
                }
                FUN_000192c0(&DAT_000369fc,1);
                local_124 = 0;
              }
              DAT_0004bc08 = DAT_0004bc08 + 1;
              piVar30 = (int *)((int)pvVar16 + 0x68);
              DAT_0004bbf8 = *(int *)((int)pvVar16 + 0x14) + DAT_0004bbf8;
              DAT_0004bbfc = DAT_0004bbfc + iVar10;
            }
            else if (DAT_000491c4 == 4) {
LAB_00014b94:
              pvVar17 = *(void **)((int)pvVar16 + 0x40);
LAB_00014a50:
              iVar10 = *(int *)((int)pvVar16 + 0x68);
              free(pvVar17);
              free(*(void **)((int)pvVar16 + 0x44));
              free(*(void **)((int)pvVar16 + 0x48));
              if (*(void **)((int)pvVar16 + 0x4c) != (void *)0x0) {
                free(*(void **)((int)pvVar16 + 0x4c));
              }
              if ((*(short *)((int)pvVar16 + 0x1a) != 0) &&
                 (*(void **)((int)pvVar16 + 0x34) != (void *)0x0)) {
                free(*(void **)((int)pvVar16 + 0x34));
              }
              if ((*(short *)((int)pvVar16 + 0x1c) != 0) &&
                 (*(void **)((int)pvVar16 + 0x38) != *(void **)((int)pvVar16 + 0x34))) {
                free(*(void **)((int)pvVar16 + 0x38));
              }
              if (*(short *)((int)pvVar16 + 0x1e) != 0) {
                free(*(void **)((int)pvVar16 + 0x3c));
              }
              free(pvVar16);
              *piVar30 = iVar10;
              DAT_000681c0 = DAT_000681c0 + -1;
            }
            else {
              if (DAT_0004bc54 == 0) {
                if ((local_f8 == 0 && DAT_0004bbd4 == 0) &&
                   (local_124 = FUN_0001c8d8(pvVar16), local_124 != 0)) goto LAB_00014cc8;
              }
              else {
                if (DAT_0004bc10 != 0) {
                  if (DAT_00049ae8 != 0) {
                    fprintf(DAT_00066dc8,"%lu>%lu: ",DAT_0004bb6c + 1,DAT_0004bb5c + 1);
                    DAT_0004bb18 = 1;
                  }
                  if (DAT_0004bbec != 0) {
                    fprintf(DAT_0004bbe8,"%lu>%lu: ",DAT_0004bb6c + 1,DAT_0004bb5c + 1);
                    DAT_0004bb14 = 1;
                  }
                }
                if (DAT_0004bc1c != 0) {
                  if (DAT_00049ae8 != 0) {
                    fwrite("   /    ",1,8,DAT_00066dc8);
                    DAT_0004bb18 = 1;
                  }
                  if (DAT_0004bbec != 0) {
                    fwrite("   /    ",1,8,DAT_0004bbe8);
                    DAT_0004bb14 = 1;
                  }
                }
                if (DAT_0004bc18 != 0) {
                  if (DAT_00049ae8 != 0) {
                    fwrite("     /      ",1,0xc,DAT_00066dc8);
                    DAT_0004bb18 = 1;
                  }
                  if (DAT_0004bbec != 0) {
                    fwrite("     /      ",1,0xc,DAT_0004bbe8);
                    DAT_0004bb14 = 1;
                  }
                }
                if (DAT_00049ae8 == 0) {
                  if (DAT_0004bbec == 0) goto LAB_0001473c;
LAB_00014960:
                  fflush(DAT_0004bbe8);
                  if (DAT_00049ae8 != 0) goto LAB_00014eac;
                }
                else {
                  fflush(DAT_00066dc8);
                  if (DAT_0004bbec != 0) goto LAB_00014960;
                  if (DAT_00049ae8 == 0) goto LAB_0001473c;
LAB_00014eac:
                  fprintf(DAT_00066dc8,"deleting: %s",*(undefined4 *)((int)pvVar16 + 0x48));
                  if (DAT_0004bc0c != 0) {
                    fwrite(&DAT_0002f9fc,1,2,DAT_00066dc8);
                    FUN_000294d8(DAT_00066dc8,*(undefined4 *)((int)pvVar16 + 0x14));
                    fputc(0x29,DAT_00066dc8);
                  }
                  fflush(DAT_00066dc8);
                  fputc(10,DAT_00066dc8);
                  DAT_0004bb18 = 0;
                }
                if (DAT_0004bbec != 0) {
                  fprintf(DAT_0004bbe8,"deleting: %s",*(undefined4 *)((int)pvVar16 + 0x48));
                  if (DAT_0004bc0c != 0) {
                    fwrite(&DAT_0002f9fc,1,2,DAT_0004bbe8);
                    FUN_000294d8(DAT_0004bbe8,*(undefined4 *)((int)pvVar16 + 0x14));
                    fputc(0x29,DAT_0004bbe8);
                  }
                  fputc(10,DAT_0004bbe8);
                  fflush(DAT_0004bbe8);
                  DAT_0004bb14 = 0;
                }
              }
LAB_0001473c:
              piVar30 = (int *)((int)pvVar16 + 0x68);
            }
          }
          puVar33 = DAT_0004bb00;
          if (local_13c != 0) {
            fwrite("sd: Zipping up new entries\n",1,0x1b,DAT_00066dc8);
            fflush(DAT_00066dc8);
            puVar33 = DAT_0004bb00;
          }
          for (; puVar33 != (undefined4 *)0x0; puVar33 = (undefined4 *)FUN_00022788(puVar33)) {
            pvVar16 = malloc(0x6c);
            if (pvVar16 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_000187c0(4,"was adding files to zip file");
            }
            uVar12 = *puVar33;
            *(undefined4 *)((int)pvVar16 + 0x68) = 0;
            *(undefined4 *)((int)pvVar16 + 0x30) = uVar12;
            *puVar33 = 0;
            *(undefined8 *)((int)pvVar16 + 0x4c) = 0;
            *(undefined4 *)((int)pvVar16 + 0x54) = 0;
            iVar10 = FUN_000258d0(puVar33[4]);
            if (*(int *)((int)pvVar16 + 0x4c) == 0) {
              pvVar17 = (void *)puVar33[4];
              if (iVar10 != 0) goto LAB_0001552c;
              *(void **)((int)pvVar16 + 0x4c) = pvVar17;
            }
            else {
              pvVar17 = (void *)puVar33[4];
LAB_0001552c:
              free(pvVar17);
            }
            uVar39 = puVar33[2];
            uVar12 = puVar33[3];
            puVar33[4] = 0;
            *(undefined4 *)((int)pvVar16 + 0x40) = puVar33[1];
            uVar26 = puVar33[5];
            puVar33[1] = 0;
            *(undefined4 *)((int)pvVar16 + 0x44) = uVar39;
            puVar33[2] = 0;
            *(undefined4 *)((int)pvVar16 + 0x48) = uVar12;
            puVar33[3] = 0;
            *(undefined2 *)((int)pvVar16 + 0x1a) = 0;
            *(undefined4 *)((int)pvVar16 + 0x1c) = 0;
            *(undefined8 *)((int)pvVar16 + 0x34) = 0;
            *(undefined4 *)((int)pvVar16 + 100) = uVar26;
            *(undefined4 *)((int)pvVar16 + 0x58) = 1;
            FUN_0001808c();
            if (DAT_00049ae8 != 0) {
              fprintf(DAT_00066dc8,"  adding: %s",*(undefined4 *)((int)pvVar16 + 0x48));
              DAT_0004bb18 = 1;
              fflush(DAT_00066dc8);
            }
            if (DAT_0004bbec != 0) {
              fprintf(DAT_0004bbe8,"  adding: %s",*(undefined4 *)((int)pvVar16 + 0x48));
              DAT_0004bb14 = 1;
              fflush(DAT_0004bbe8);
            }
            iVar36 = puVar33[6];
            iVar10 = FUN_00020d2c(pvVar16);
            if (iVar10 == 0) {
LAB_000155b0:
              DAT_0004bc08 = DAT_0004bc08 + 1;
              DAT_0004bbf8 = *(int *)((int)pvVar16 + 0x14) + DAT_0004bbf8;
              DAT_0004bbfc = DAT_0004bbfc + iVar36;
              *piVar30 = (int)pvVar16;
              DAT_000681c0 = DAT_000681c0 + 1;
              piVar30 = (int *)((int)pvVar16 + 0x68);
            }
            else {
              if (iVar10 != 0x12 && iVar10 != -1) {
                FUN_000192c0(&DAT_000369fc,1);
                sprintf((char *)&DAT_00066dcc,"was zipping %s",*(undefined4 *)((int)pvVar16 + 0x48))
                ;
                    /* WARNING: Subroutine does not return */
                FUN_000187c0(iVar10,&DAT_00066dcc);
              }
              if (iVar10 != -1 && iVar10 != 0x12) goto LAB_000155b0;
              FUN_000192c0(&DAT_000369fc,1);
              if (iVar10 == 0x12) {
                perror("zip warning");
                pFVar13 = DAT_0004bbe8;
                if (DAT_0004bbe8 != (FILE *)0x0) {
                  piVar19 = __errno_location();
                  pcVar11 = strerror(*piVar19);
                  fprintf(pFVar13,"zip warning: %s\n",pcVar11);
                }
                FUN_000194cc("could not open for reading: ",*(undefined4 *)((int)pvVar16 + 0x48));
                if (bVar5) {
                  sprintf((char *)&DAT_00066dcc,"was zipping %s",
                          *(undefined4 *)((int)pvVar16 + 0x30));
                    /* WARNING: Subroutine does not return */
                  FUN_000187c0(0x12,&DAT_00066dcc);
                }
              }
              else {
                FUN_000194cc("file and directory with the same name: ",
                             *(undefined4 *)((int)pvVar16 + 0x48));
              }
              DAT_0004bc08 = DAT_0004bc08 + 1;
              DAT_0004bbfc = DAT_0004bbfc + iVar36;
              DAT_0004bc04 = DAT_0004bc04 + 1;
              DAT_0004bbf4 = DAT_0004bbf4 + iVar36;
              free(*(void **)((int)pvVar16 + 0x30));
              free(*(void **)((int)pvVar16 + 0x40));
              free(*(void **)((int)pvVar16 + 0x44));
              free(*(void **)((int)pvVar16 + 0x48));
              if (*(void **)((int)pvVar16 + 0x4c) != (void *)0x0) {
                free(*(void **)((int)pvVar16 + 0x4c));
              }
              bVar28 = true;
              free(pvVar16);
            }
          }
          if (DAT_0004bbb4 != (char *)0x0) {
            free(DAT_0004bbb4);
            DAT_0004bbb4 = (char *)0x0;
          }
          if (DAT_00049ae8 == 0) {
LAB_0001610c:
            if ((DAT_0004bbe8 != (FILE *)0x0) && (DAT_0004bc04 != 0)) {
              fwrite("\nzip warning: Not all files were readable\n",1,0x2a,DAT_0004bbe8);
              fprintf(DAT_0004bbe8,"  files/entries read:  %lu",DAT_0004bc00 - DAT_0004bc04);
              FUN_0002931c(DAT_0004bbf8,&local_8c);
              fprintf(DAT_0004bbe8," (%s bytes)",&local_8c);
              fprintf(DAT_0004bbe8,"  skipped:  %lu",DAT_0004bc04);
              FUN_0002931c(DAT_0004bbf4,&local_8c);
              fprintf(DAT_0004bbe8," (%s bytes)",&local_8c);
            }
          }
          else if (DAT_0004bc04 != 0) {
            fwrite("\nzip warning: Not all files were readable\n",1,0x2a,DAT_00066dc8);
            fprintf(DAT_00066dc8,"  files/entries read:  %lu",DAT_0004bc00 - DAT_0004bc04);
            FUN_0002931c(DAT_0004bbf8,&local_8c);
            fprintf(DAT_00066dc8," (%s bytes)",&local_8c);
            fprintf(DAT_00066dc8,"  skipped:  %lu",DAT_0004bc04);
            FUN_0002931c(DAT_0004bbf4,&local_8c);
            fprintf(DAT_00066dc8," (%s bytes)\n",&local_8c);
            fflush(DAT_00066dc8);
            goto LAB_0001610c;
          }
          if (local_13c != 0) {
            fwrite("sd: Get comment if any\n",1,0x17,DAT_00066dc8);
            fflush(DAT_00066dc8);
          }
          if (DAT_00049df0 != 0) {
            if (local_148 == (FILE *)0x0) {
              iVar10 = fileno(stderr);
              local_148 = fdopen(iVar10,"r");
            }
            pcVar11 = malloc(0x101);
            iVar10 = DAT_0004bb0c;
            if (pcVar11 == (char *)0x0) goto LAB_00015838;
            do {
              if (iVar10 == 0) {
                free(pcVar11);
                break;
              }
              if (*(int *)(iVar10 + 0x58) != 0) {
                if (DAT_00049ae8 != 0) {
                  fprintf(DAT_00066dc8,"Enter comment for %s:\n",*(undefined4 *)(iVar10 + 0x48));
                }
                pcVar20 = fgets(pcVar11,0x101,local_148);
                if (pcVar20 != (char *)0x0) {
                  sVar23 = strlen(pcVar11);
                  pvVar16 = malloc(sVar23 + 1);
                  if (pvVar16 == (void *)0x0) goto LAB_00015834;
                  memcpy(pvVar16,pcVar11,sVar23 + 1);
                  if (*(char *)((int)pvVar16 + (sVar23 - 1)) == '\n') {
                    sVar23 = sVar23 - 1;
                    *(undefined1 *)((int)pvVar16 + sVar23) = 0;
                  }
                  *(void **)(iVar10 + 0x3c) = pvVar16;
                  *(short *)(iVar10 + 0x1e) = (short)sVar23;
                }
              }
              iVar10 = *(int *)(iVar10 + 0x68);
            } while( true );
          }
          if (DAT_00049dfc != 0) {
            if (local_148 == (FILE *)0x0) {
              iVar10 = fileno(stderr);
              local_148 = fdopen(iVar10,"r");
            }
            pcVar11 = malloc(0x101);
            if (pcVar11 == (char *)0x0) goto LAB_00015838;
            if ((DAT_00049ae8 != 0) && (DAT_000681c4 != 0)) {
              fwrite("current zip file comment is:\n",1,0x1d,DAT_00066dc8);
              fwrite(DAT_0004bb04,1,(uint)DAT_000681c4,DAT_00066dc8);
              if (DAT_0004bb04[DAT_000681c4 - 1] != '\n') {
                if (DAT_00066dc8->_chain == (_IO_FILE *)0x0) {
                  fputc(10,DAT_00066dc8);
                }
                else {
                  pcVar20 = DAT_00066dc8->_IO_write_base;
                  if (pcVar20 < DAT_00066dc8->_IO_buf_base) {
                    DAT_00066dc8->_IO_write_base = pcVar20 + 1;
                    *pcVar20 = '\n';
                  }
                  else {
                    __fputc_unlocked(10);
                  }
                }
              }
              free(DAT_0004bb04);
            }
            DAT_0004bb04 = malloc(1);
            iVar10 = DAT_00049ae8;
            if (DAT_0004bb04 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_000187c0(4,"was setting comments to null");
            }
            *DAT_0004bb04 = '\0';
            if (iVar10 != 0) {
              fwrite("enter new zip file comment (end with .):\n",1,0x29,DAT_00066dc8);
            }
            while ((pcVar20 = fgets(pcVar11,0x101,local_148), pcVar20 != (char *)0x0 &&
                   (iVar10 = strcmp(pcVar11,".\n"), iVar10 != 0))) {
              sVar23 = strlen(pcVar11);
              pcVar20 = DAT_0004bb04;
              if (pcVar11[sVar23 - 1] == '\n') {
                sVar23 = sVar23 - 1;
                pcVar11[sVar23] = '\0';
              }
              if (*pcVar20 == '\0') {
                pcVar21 = malloc(sVar23 + 1);
                if (pcVar21 == (char *)0x0) {
LAB_00015834:
                  free(pcVar11);
LAB_00015838:
                    /* WARNING: Subroutine does not return */
                  FUN_000187c0(4,"was reading comment lines");
                }
                __src = pcVar11;
                if (*pcVar11 == '\0') {
                  __src = "\r\n";
                }
                strcpy(pcVar21,__src);
              }
              else {
                __n = strlen(pcVar20);
                pcVar21 = malloc(sVar23 + 3 + __n);
                if (pcVar21 == (char *)0x0) goto LAB_00015834;
                pvVar16 = memcpy(pcVar21,pcVar20,__n);
                *(undefined2 *)((int)pvVar16 + __n) = DAT_0002eb14;
                strcpy((char *)((int)pvVar16 + __n + 2),pcVar11);
              }
              free(pcVar20);
              DAT_0004bb04 = pcVar21;
            }
            free(pcVar11);
            sVar23 = strlen(DAT_0004bb04);
            DAT_000681c4 = (ushort)sVar23;
          }
          if (DAT_0004bc14 != 0) {
            if (DAT_00066dc8->_chain == (_IO_FILE *)0x0) {
              fputc(10,DAT_00066dc8);
            }
            else {
              pcVar11 = DAT_00066dc8->_IO_write_base;
              if (pcVar11 < DAT_00066dc8->_IO_buf_base) {
                DAT_00066dc8->_IO_write_base = pcVar11 + 1;
                *pcVar11 = '\n';
              }
              else {
                __fputc_unlocked(10);
              }
            }
            DAT_0004bb18 = 0;
          }
          if (local_13c != 0) {
            fwrite("sd: Writing central directory\n",1,0x1e,DAT_00066dc8);
            fflush(DAT_00066dc8);
          }
          iVar38 = DAT_00066db4;
          iVar34 = 0;
          iVar10 = 0;
          iVar36 = 0;
          for (iVar37 = DAT_0004bb0c; iVar37 != 0; iVar37 = *(int *)(iVar37 + 0x68)) {
            if ((*(int *)(iVar37 + 0x58) != 0) || (DAT_0004bbd4 == 0 && DAT_0004bc54 == 0)) {
              iVar14 = FUN_0001b9e8(iVar37);
              if (iVar14 != 0) goto LAB_00017634;
              iVar36 = iVar36 + 1;
              iVar10 = iVar10 + *(int *)(iVar37 + 0x14);
              iVar34 = iVar34 + *(int *)(iVar37 + 0x10);
              DAT_00066db4 = *(ushort *)(iVar37 + 0x18) + 0x2e + (uint)*(ushort *)(iVar37 + 0x1c) +
                             (uint)*(ushort *)(iVar37 + 0x1e) + DAT_00066db4;
            }
          }
          if (iVar36 == 0) {
            FUN_000194cc("zip file empty",&DAT_000369fc);
          }
          pFVar13 = DAT_00066dc8;
          if (DAT_0004bc5c != 0) {
            uVar12 = FUN_00028fc0(iVar10,0,&DAT_0002fc3c);
            uVar26 = FUN_00028fc0(iVar34,0,&DAT_0002fc3c);
            uVar39 = FUN_00020c74(iVar10,iVar34);
            fprintf(pFVar13,"total bytes=%s, compressed=%s -> %d%% savings\n",uVar12,uVar26,uVar39);
            fflush(DAT_00066dc8);
          }
          pFVar13 = DAT_0004bbe8;
          if (DAT_0004bbec != 0) {
            uVar12 = FUN_00028fc0(iVar10,0,&DAT_0002fc3c);
            uVar26 = FUN_00028fc0(iVar34,0,&DAT_0002fc3c);
            uVar39 = FUN_00020c74(iVar10,iVar34);
            fprintf(pFVar13,"total bytes=%s, compressed=%s -> %d%% savings\n",uVar12,uVar26,uVar39);
            fflush(DAT_0004bbe8);
          }
          iVar10 = DAT_00066db4 - iVar38;
          if (local_13c != 0) {
            fwrite("sd: Writing end of central directory\n",1,0x25,DAT_00066dc8);
            fflush(DAT_00066dc8);
          }
          iVar14 = FUN_0001c4d4(iVar36,iVar10,iVar38,DAT_000681c4,DAT_0004bb04);
          if (iVar14 != 0) {
LAB_00017634:
                    /* WARNING: Subroutine does not return */
            FUN_000187c0(iVar14,DAT_0004bb8c);
          }
          iVar10 = fclose(DAT_0004bb88);
          local_134 = local_f8;
          if (iVar10 != 0) {
LAB_000176d0:
            if (local_134 == 0) {
              uVar12 = 10;
            }
            else {
              uVar12 = 0xe;
            }
                    /* WARNING: Subroutine does not return */
            FUN_000187c0(uVar12,DAT_0004bb8c);
          }
          DAT_0004bb88 = (FILE *)0x0;
          if (DAT_0004bb84 != (FILE *)0x0) {
            fclose(DAT_0004bb84);
            DAT_0004bb84 = (FILE *)0x0;
          }
          FUN_0002b2ec();
          if (DAT_00049df8 != 0) {
            FUN_00018ff8(DAT_0004bb8c);
          }
          iVar10 = strcmp(DAT_00066db0,"-");
          if (iVar10 == 0) {
            uVar25 = 0;
          }
          if (uVar25 != 0) {
            if (local_13c != 0) {
              fwrite("sd: Replacing old zip file\n",1,0x1b,DAT_00066dc8);
              fflush(DAT_00066dc8);
            }
            iVar10 = FUN_000234b8(DAT_0004bb78,DAT_0004bb8c);
            if (iVar10 != 0) goto LAB_00017794;
            free(DAT_0004bb8c);
          }
          _Var8 = DAT_0004bb74;
          DAT_0004bb8c = (char *)0x0;
          if (DAT_0004bb74 != 0) {
            iVar10 = strcmp(DAT_00066db0,"-");
            if (iVar10 == 0) goto LAB_00015bf8;
            chmod(DAT_0004bb78,_Var8);
          }
          iVar10 = strcmp(DAT_00066db0,"-");
          if (iVar10 == 0) {
            local_13c = 0;
          }
          if (local_13c != 0) {
            fwrite("sd: Setting file type\n",1,0x16,DAT_00066dc8);
            fflush(DAT_00066dc8);
          }
LAB_00015bf8:
          if (DAT_0004bbe8 != (FILE *)0x0) {
            fprintf(DAT_0004bbe8,"\nTotal %ld entries (",DAT_0004bc00);
            if (DAT_0004bbf8 != DAT_0004bbf0) {
              fwrite("planned ",1,8,DAT_0004bbe8);
              FUN_000294d8(DAT_0004bbe8,DAT_0004bbf0);
              fwrite(" bytes, actual ",1,0xf,DAT_0004bbe8);
            }
            FUN_000294d8(DAT_0004bbe8,DAT_0004bbf8);
            fwrite(" bytes)",1,7,DAT_0004bbe8);
            time((time_t *)&local_8c);
            ptVar15 = localtime((time_t *)&local_8c);
            pFVar13 = DAT_0004bbe8;
            pcVar11 = asctime(ptVar15);
            fprintf(pFVar13,"\nDone %s",pcVar11);
          }
          free(pcVar9);
          if (bVar28) {
            uVar12 = 0x12;
          }
          else {
            uVar12 = 0;
          }
          uVar12 = FUN_000195a8(uVar12);
          return uVar12;
        }
        if (DAT_00049ae8 != 0) {
          if (DAT_0004bbc8 == 0) {
            if (DAT_0004bba0 == 0) {
              FUN_0002e028(DAT_0004bb98,100);
              if (extraout_r1_00 != 0) goto LAB_000141c0;
              tVar18 = time((time_t *)0x0);
              if (DAT_00049ad4 < tVar18 - DAT_0004bba4) {
                fwrite("Scanning files ",1,0xf,DAT_00066dc8);
                fflush(DAT_00066dc8);
                DAT_0004bb18 = 1;
                DAT_0004bba0 = tVar18;
              }
              goto LAB_0001431c;
            }
          }
          else {
LAB_0001431c:
            if (DAT_0004bba0 == 0) goto LAB_000141c0;
          }
          DAT_0004bb98 = DAT_0004bb98 + 1;
          FUN_0002e028(DAT_0004bb98,100);
          if ((extraout_r1_01 == 0) &&
             (tVar18 = time((time_t *)0x0), DAT_00049ad0 < tVar18 - DAT_0004bba0)) {
            if (DAT_0004bb9c == 0) {
              DAT_0004bb9c = 1;
              fputc(0x20,DAT_00066dc8);
              fflush(DAT_00066dc8);
            }
            DAT_0004bba0 = tVar18;
            fputc(0x2e,DAT_00066dc8);
            fflush(DAT_00066dc8);
          }
        }
LAB_000141c0:
        if ((((DAT_000491c4 == 0 || DAT_000491c4 == 3) ||
             (uVar27 = FUN_0002a694(*puVar33,0,&local_9c),
             uVar27 == 0 || (DAT_000491c4 == 0 || DAT_000491c4 == 3))) || (uVar27 < DAT_0004bb94))
           || ((DAT_0004bb90 != 0 && DAT_0004bb90 <= uVar27 ||
               (iVar10 = FUN_00028aa8(puVar33[2],DAT_00066db0), iVar10 == 0 && DAT_0004bbc8 == 0))))
        {
          puVar33 = (undefined4 *)FUN_00022788(puVar33);
        }
        else {
          puVar33[6] = 0;
          DAT_0004bc00 = DAT_0004bc00 + 1;
          if (1 < local_9c + 2U) {
            puVar33[6] = local_9c;
            DAT_0004bbf0 = DAT_0004bbf0 + local_9c;
          }
          puVar33 = (undefined4 *)puVar33[8];
        }
      } while( true );
    }
    if (pcVar11 != (char *)0x76) {
      iVar10 = DAT_00049ae4;
      if (pcVar11 < (char *)0x77) {
        if (pcVar11 == (char *)0x62) {
          DAT_0004bbb0 = local_b0;
          DAT_00049dec = 1;
        }
        else if (pcVar11 < (char *)0x63) {
          if (pcVar11 == (char *)0x48) {
LAB_00012b00:
            FUN_0001845c();
            uVar12 = FUN_000195a8(0);
            return uVar12;
          }
          if (pcVar11 < (char *)0x49) {
            if (pcVar11 == (char *)0x3f) goto LAB_00012b00;
            if (pcVar11 < (char *)0x40) {
              if (pcVar11 == (char *)0x30) {
                DAT_00049af8 = 0;
                DAT_00049af4 = (char *)0x0;
              }
              else {
                if ((pcVar11 < (char *)0x30) || ((char *)0x39 < pcVar11)) goto LAB_00012168;
                DAT_00049af4 = pcVar11 + -0x30;
              }
            }
            else if (pcVar11 == (char *)0x41) {
              DAT_0004bc50 = 1;
            }
            else if (pcVar11 < (char *)0x41) {
              local_148 = (FILE *)0x0;
              local_144 = (FILE *)0x1;
            }
            else {
              if (pcVar11 != (char *)0x44) {
                if (pcVar11 == (char *)0x46) {
                  puVar31 = &DAT_0004bc58;
                  goto LAB_00011c20;
                }
                goto LAB_00012168;
              }
              DAT_00049af0 = 0;
            }
            goto LAB_00011998;
          }
          if (pcVar11 != (char *)0x52) {
            if (pcVar11 < (char *)0x53) {
              if (pcVar11 == (char *)0x4c) {
                puVar32 = DAT_00012b48 + 0x36;
                puVar33 = DAT_00012b48;
                do {
                  puVar33 = puVar33 + 1;
                  puts((char *)*puVar33);
                } while (puVar33 != puVar32);
                goto LAB_00011fb0;
              }
              if (pcVar11 < (char *)0x4d) {
                if (pcVar11 != (char *)0x4a) goto LAB_00012168;
                DAT_00049df4 = 1;
                goto LAB_00011998;
              }
              if (pcVar11 != (char *)0x4f) {
                if (pcVar11 != (char *)0x50) goto LAB_00012168;
                if (DAT_0004bbb4 != (char *)0x0) {
                  free(DAT_0004bbb4);
                }
                DAT_0004bbb4 = local_b0;
                bVar2 = false;
                iVar10 = DAT_00049ae4;
                goto LAB_00011998;
              }
              bVar4 = true;
              DAT_0004bb78 = (char *)FUN_0001a848(local_b0);
              pcVar9 = local_b0;
            }
            else {
              if (pcVar11 == (char *)0x55) {
                if (DAT_000491c4 != 1) goto LAB_00017d1c;
                DAT_000491c4 = 4;
                goto LAB_00011998;
              }
              if (pcVar11 < (char *)0x56) {
                if (pcVar11 != (char *)0x54) goto LAB_00012168;
                DAT_00049df8 = 1;
                goto LAB_00011998;
              }
              if (pcVar11 == (char *)0x58) {
                iVar10 = local_ac;
                if (local_ac != 0) {
                  piVar30 = &DAT_00049ae4;
                  goto LAB_00011b80;
                }
                goto LAB_00011998;
              }
              if (pcVar11 != (char *)0x5a) goto LAB_00012168;
              iVar10 = FUN_0002953c("deflate",local_b0,0,1);
              if (iVar10 == 0) {
                iVar10 = FUN_0002953c("store",local_b0,0,1);
                if (iVar10 == 0) {
                  iVar10 = FUN_0002953c(&DAT_0002ed40,local_b0,0,1);
                  if (iVar10 == 0) {
                    FUN_000194cc("valid compression methods are:  store, deflate)",&DAT_000369fc);
                    FUN_000194cc("unknown compression method found:  ",local_b0);
                    free(local_b0);
                    /* WARNING: Subroutine does not return */
                    FUN_000187c0(0x10,"Option -Z (--compression-method):  unknown method");
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_000187c0(0x13,"Compression method bzip2 not enabled");
                }
                DAT_00049af8 = 0;
                pcVar9 = local_b0;
              }
              else {
                DAT_00049af8 = 8;
                pcVar9 = local_b0;
              }
            }
LAB_00011a2c:
            free(pcVar9);
            iVar10 = DAT_00049ae4;
            goto LAB_00011998;
          }
          if (DAT_0004bc68 == 1) {
LAB_00017c68:
                    /* WARNING: Subroutine does not return */
            FUN_000187c0(0x10,"do not specify both -r and -R");
          }
          DAT_0004bc68 = 2;
        }
        else if (pcVar11 == (char *)0x6c) {
          DAT_0004bc4c = 1;
        }
        else if (pcVar11 < (char *)0x6d) {
          if (pcVar11 == (char *)0x67) {
            local_134 = 1;
          }
          else if (pcVar11 < (char *)0x68) {
            if (pcVar11 == (char *)0x64) {
              if (DAT_000491c4 != 1) {
LAB_00017d1c:
                    /* WARNING: Subroutine does not return */
                FUN_000187c0(0x10,"specify just one action");
              }
              DAT_000491c4 = 0;
            }
            else if (pcVar11 < (char *)0x64) {
              DAT_00049df0 = 1;
            }
            else if (pcVar11 == (char *)0x65) {
              bVar2 = true;
              pcVar9 = DAT_0004bbb4;
              if (DAT_0004bbb4 != (char *)0x0) goto LAB_00011a2c;
            }
            else {
              if (pcVar11 != (char *)0x66) goto LAB_00012168;
              if (DAT_000491c4 != 1) goto LAB_00017d1c;
              DAT_000491c4 = 3;
            }
          }
          else if (pcVar11 == (char *)0x69) {
            DAT_0004bbc4 = 1;
LAB_00011c60:
            FUN_00018bd8(pcVar11,local_b0);
            free(local_b0);
            iVar10 = DAT_00049ae4;
          }
          else {
            if (pcVar11 < (char *)0x69) goto LAB_00012b00;
            if (pcVar11 == (char *)0x6a) {
              DAT_00049afc = 0;
            }
            else {
              if (pcVar11 != (char *)0x6b) goto LAB_00012168;
              DAT_0004bc60 = 1;
            }
          }
        }
        else if (pcVar11 == (char *)0x71) {
          DAT_00049ae8 = 0;
          if (DAT_0004bc5c != 0) {
            DAT_0004bc5c = DAT_0004bc5c + -1;
          }
        }
        else if (pcVar11 < (char *)0x72) {
          if (pcVar11 == (char *)0x6e) {
            DAT_00049adc = local_b0;
          }
          else if (pcVar11 < (char *)0x6e) {
            DAT_0004bc64 = 1;
          }
          else if (pcVar11 == (char *)0x6f) {
            DAT_00049de8 = 1;
          }
          else if (pcVar11 != (char *)0x70) {
LAB_00012168:
            pcVar9 = "no such option ID: %ld";
LAB_0001217c:
            sprintf((char *)&DAT_00066dcc,pcVar9,pcVar11);
                    /* WARNING: Subroutine does not return */
            FUN_000187c0(0x10,&DAT_00066dcc);
          }
        }
        else {
          if (pcVar11 == (char *)0x73) {
            iVar10 = strcmp(local_b0,"-");
            if (iVar10 != 0) {
              DAT_0004bb2c = (Elf32_Ehdr *)FUN_000291f4(pcVar9);
              if (DAT_0004bb2c == (Elf32_Ehdr *)0xffffffff) {
                pcVar9 = "bad split size:  \'%s\'";
                pcVar11 = local_b0;
                goto LAB_0001217c;
              }
              if (DAT_0004bb2c != (Elf32_Ehdr *)0x0) {
                if (DAT_0004bb30 == 0) {
                  DAT_0004bb30 = 1;
                }
                pcVar9 = local_b0;
                if (DAT_0004bb2c < (Elf32_Ehdr *)0x400) {
                  DAT_0004bb2c = (Elf32_Ehdr *)((int)DAT_0004bb2c << 0x14);
                }
                else if (DAT_0004bb2c < &Elf32_Ehdr_00010000) {
                  pcVar9 = "minimum split size is 64 KB:  \'%s\'";
                  goto LAB_00013b8c;
                }
                goto LAB_00011a2c;
              }
            }
            DAT_0004bb30 = 0xffffffff;
            pcVar9 = local_b0;
            goto LAB_00011a2c;
          }
          if (pcVar11 < (char *)0x73) {
            if (DAT_0004bc68 == 2) goto LAB_00017c68;
            DAT_0004bc68 = 1;
          }
          else if (pcVar11 == (char *)0x74) {
            iVar10 = sscanf(local_b0,"%4d-%2d-%2d",&local_9c,&local_98,&local_8c);
            if (((iVar10 != 3) &&
                (iVar10 = sscanf(local_b0,"%2d%2d%4d",&local_98,&local_8c,&local_9c), iVar10 != 3))
               || ((0xb < local_98 - 1U ||
                   ((undefined1 *)0x1e < (undefined1 *)((int)&local_8c[-1].e_shstrndx + 1))))) {
                    /* WARNING: Subroutine does not return */
              FUN_000187c0(0x10,"invalid date entered for -t option - use mmddyyyy or yyyy-mm-dd");
            }
            DAT_0004bb94 = FUN_0002311c(local_9c);
            free(local_b0);
            iVar10 = DAT_00049ae4;
          }
          else {
            if (pcVar11 != (char *)0x75) goto LAB_00012168;
            if (DAT_000491c4 != 1) goto LAB_00017d1c;
            DAT_000491c4 = 2;
          }
        }
        goto LAB_00011998;
      }
      if (pcVar11 == (char *)0x124) {
        DAT_0004bc4c = 2;
        goto LAB_00011998;
      }
      if (pcVar11 < (char *)0x125) {
        if (pcVar11 != (char *)0x112) {
          if (pcVar11 < (char *)0x113) {
            if (pcVar11 == (char *)0x106) {
              puVar31 = (uint *)&DAT_0004bc1c;
              if (local_ac == 0) goto LAB_00011c20;
              DAT_0004bc1c = 0;
              goto LAB_00011998;
            }
            if (pcVar11 < (char *)0x107) {
              if (pcVar11 == (char *)0x79) {
                DAT_0004bbd0 = 1;
              }
              else {
                if (pcVar11 < (char *)0x7a) {
                  if (pcVar11 == (char *)0x78) goto LAB_00011c60;
                  goto LAB_00012168;
                }
                if (pcVar11 != (char *)0x7a) {
                  if (pcVar11 == (char *)0x105) {
                    piVar30 = &DAT_0004bc18;
                    goto joined_r0x00011f34;
                  }
                  goto LAB_00012168;
                }
                DAT_00049dfc = 1;
              }
              goto LAB_00011998;
            }
            if (pcVar11 == (char *)0x108) {
              DAT_0004bbcc = 1;
              goto LAB_00011998;
            }
            if ((char *)0x107 < pcVar11) {
              if (pcVar11 != (char *)0x110) {
                if (pcVar11 == (char *)0x111) {
                  if (local_ac == 0) {
                    DAT_0004bc14 = 1;
                    goto joined_r0x00012998;
                  }
                  piVar30 = &DAT_0004bc14;
                  goto LAB_00011c4c;
                }
                goto LAB_00012168;
              }
              DAT_0004bbd4 = 1;
              DAT_0004bbc4 = 1;
              goto LAB_00011998;
            }
            uVar27 = 0;
            DAT_0004bc14 = 0;
            piVar30 = &DAT_0004bc20;
            if (local_ac == 0) {
joined_r0x00012998:
              if (DAT_0004bc20 == 0) {
                DAT_0004bc24 = 0xa00000;
              }
              piVar30 = &DAT_0004bc20;
              uVar27 = 0xffffffff;
            }
          }
          else {
            if (pcVar11 == (char *)0x117) {
              DAT_0004bc54 = 1;
              goto LAB_00011998;
            }
            if (pcVar11 < (char *)0x118) {
              if (pcVar11 == (char *)0x114) {
                piVar30 = &DAT_0004bc10;
              }
              else if (pcVar11 < (char *)0x114) {
                piVar30 = &DAT_0004bc0c;
              }
              else {
                if (pcVar11 == (char *)0x115) {
                  DAT_0004bc58 = 2;
                  goto LAB_00011998;
                }
                if (pcVar11 != (char *)0x116) goto LAB_00012168;
                piVar30 = &DAT_0004bbbc;
              }
            }
            else if (pcVar11 == (char *)0x121) {
              piVar30 = &DAT_0004bbe4;
            }
            else {
              if (pcVar11 < (char *)0x122) {
                puVar32 = DAT_00012b40;
                if (pcVar11 == (char *)0x118) {
                  do {
                    puVar32 = puVar32 + 1;
                    printf((char *)*puVar32);
                    if (__stdout->_chain == (_IO_FILE *)0x0) {
                      fputc(10,__stdout);
                    }
                    else {
                      pcVar9 = __stdout->_IO_write_base;
                      if (pcVar9 < __stdout->_IO_buf_base) {
                        __stdout->_IO_write_base = pcVar9 + 1;
                        *pcVar9 = '\n';
                      }
                      else {
                        __fputc_unlocked(10);
                      }
                    }
                  } while (puVar33 != puVar32);
LAB_00011fb0:
                  uVar12 = FUN_000195a8(0);
                  return uVar12;
                }
                goto LAB_00012168;
              }
              if (pcVar11 == (char *)0x122) {
                if (DAT_0004bbe0 != (char *)0x0) {
                  free(DAT_0004bbe0);
                }
                DAT_0004bbe0 = local_b0;
                iVar10 = DAT_00049ae4;
                goto LAB_00011998;
              }
              if (pcVar11 != (char *)0x123) goto LAB_00012168;
              piVar30 = &DAT_0004bbec;
            }
joined_r0x00011f34:
            puVar31 = (uint *)piVar30;
            if (local_ac != 0) {
LAB_00011c4c:
              *piVar30 = 0;
              iVar10 = DAT_00049ae4;
              goto LAB_00011998;
            }
LAB_00011c20:
            uVar27 = 1;
            piVar30 = (int *)puVar31;
          }
LAB_00011c24:
          *piVar30 = uVar27;
          iVar10 = DAT_00049ae4;
          goto LAB_00011998;
        }
        if (local_b0 == (char *)0x0) {
          DAT_0004bc24 = 0xa00000;
        }
        else if (*local_b0 == '\0') {
          DAT_0004bc24 = 0xa00000;
          free(local_b0);
        }
        else {
          DAT_0004bc24 = FUN_000291f4();
          if (DAT_0004bc24 == -1) {
            pcVar9 = "option -ds (--dot-size) has bad size:  \'%s\'";
LAB_00013b8c:
            sprintf((char *)&DAT_00066dcc,pcVar9,local_b0);
            free(local_b0);
                    /* WARNING: Subroutine does not return */
            FUN_000187c0(0x10,&DAT_00066dcc);
          }
          if (DAT_0004bc24 < 0x400) {
            DAT_0004bc24 = DAT_0004bc24 << 0x14;
          }
          else if (DAT_0004bc24 < 0x8000) {
            pcVar9 = "dot size must be at least 32 KB:  \'%s\'";
            goto LAB_00013b8c;
          }
          free(local_b0);
        }
        DAT_0004bc20 = -1;
        iVar10 = DAT_00049ae4;
        goto LAB_00011998;
      }
      if (pcVar11 == (char *)0x134) {
        DAT_0004bbcc = 1;
        DAT_0004bb30 = 2;
        goto LAB_00011998;
      }
      if (pcVar11 < (char *)0x135) {
        if (pcVar11 == (char *)0x129) {
          DAT_0004bb28 = 1;
        }
        else if (pcVar11 < (char *)0x12a) {
          if (pcVar11 == (char *)0x126) {
            bVar5 = true;
          }
          else {
            if (pcVar11 < (char *)0x126) {
                    /* WARNING: Subroutine does not return */
              FUN_000187c0(0x10,"-mm not supported, Must_Match is -MM");
            }
            if (pcVar11 == (char *)0x127) {
              DAT_0004bc48 = 1;
            }
            else {
              if (pcVar11 != (char *)0x128) goto LAB_00012168;
              DAT_0004bc44 = 1;
            }
          }
        }
        else if (pcVar11 == (char *)0x131) {
          local_13c = 1;
        }
        else if (pcVar11 < (char *)0x132) {
          if (pcVar11 != (char *)0x130) goto LAB_00012168;
          bVar28 = true;
        }
        else {
          if (pcVar11 == (char *)0x132) {
            puVar31 = &DAT_0004bbb8;
            piVar30 = (int *)puVar31;
            if (local_ac != 0) {
LAB_00011b80:
              uVar27 = 2;
              goto LAB_00011c24;
            }
            goto LAB_00011c20;
          }
          if (pcVar11 != (char *)0x133) goto LAB_00012168;
          bVar35 = true;
        }
      }
      else if (pcVar11 == (char *)0x139) {
        if (DAT_00049de4 != (char *)0x0) {
          free(DAT_00049de4);
        }
        DAT_00049de4 = local_b0;
        iVar10 = DAT_00049ae4;
      }
      else {
        if (pcVar11 < (char *)0x13a) {
          if (pcVar11 == (char *)0x136) {
            if (local_ac == 0) {
              DAT_0004bbb8 = 5;
            }
            else {
              DAT_0004bbb8 = 6;
            }
          }
          else if (pcVar11 < (char *)0x136) {
            if (local_ac == 0) {
              DAT_0004bbb8 = 3;
            }
            else {
              DAT_0004bbb8 = 4;
            }
          }
          else if (pcVar11 == (char *)0x137) {
            DAT_0004bb1c = 1;
          }
          else {
            if (pcVar11 != (char *)0x138) goto LAB_00012168;
            iVar10 = sscanf(local_b0,"%4d-%2d-%2d",&local_9c,&local_98,&local_8c);
            if ((((iVar10 != 3) &&
                 (iVar10 = sscanf(local_b0,"%2d%2d%4d",&local_98,&local_8c,&local_9c), iVar10 != 3))
                || (0xb < local_98 - 1U)) ||
               ((undefined1 *)0x1e < (undefined1 *)((int)&local_8c[-1].e_shstrndx + 1))) {
                    /* WARNING: Subroutine does not return */
              FUN_000187c0(0x10,"invalid date entered for -tt option - use mmddyyyy or yyyy-mm-dd");
            }
            DAT_0004bb90 = FUN_0002311c(local_9c);
            free(local_b0);
            iVar10 = DAT_00049ae4;
          }
          goto LAB_00011998;
        }
        if (pcVar11 == (char *)0x141) goto LAB_00012780;
        if (pcVar11 < (char *)0x142) {
          if (pcVar11 == (char *)0x140) {
            iVar10 = FUN_0002953c(&DAT_0002ecb4,local_b0,0,1);
            if (iVar10 == 0) {
              iVar10 = FUN_0002953c(&DAT_0002ecbc,local_b0,0,1);
              if (iVar10 == 0) {
                iVar10 = FUN_0002953c("ignore",local_b0,0,1);
                if (iVar10 == 0) {
                  iVar10 = FUN_0002953c(&DAT_0002eccc,local_b0,0,1);
                  if (iVar10 == 0) {
                    iVar10 = FUN_0002953c("escape",local_b0,0,1);
                    if (iVar10 == 0) {
                      iVar10 = FUN_0002953c(&DAT_0002ecd8,local_b0,0,1);
                      if (iVar10 == 0) {
                        FUN_000194cc("-UN must be Quit, Warn, Ignore, No, Escape, or UTF8: ",
                                     local_b0);
                        free(local_b0);
                    /* WARNING: Subroutine does not return */
                        FUN_000187c0(0x10,"-UN (unicode) bad value");
                      }
                      DAT_0004bbac = 1;
                      pcVar9 = local_b0;
                    }
                    else {
                      DAT_0004bba8 = 1;
                      pcVar9 = local_b0;
                    }
                  }
                  else {
                    DAT_00049ad8 = 3;
                    pcVar9 = local_b0;
                  }
                }
                else {
                  DAT_00049ad8 = 2;
                  pcVar9 = local_b0;
                }
              }
              else {
                DAT_00049ad8 = 1;
                pcVar9 = local_b0;
              }
            }
            else {
              DAT_00049ad8 = 0;
              pcVar9 = local_b0;
            }
            goto LAB_00011a2c;
          }
          goto LAB_00012168;
        }
        if (pcVar11 != (char *)0x143) {
          if (pcVar11 != (char *)0xffff) goto LAB_00012168;
          if (DAT_0004bc68 == 2) {
            iVar10 = strcmp(local_b0,"--");
            if (iVar10 == 0 && !bVar3) {
              if (local_130 == 0) goto LAB_00017b24;
LAB_00013894:
              bVar3 = true;
              iVar10 = DAT_00049ae4;
              goto LAB_00011998;
            }
LAB_000138c0:
            if (local_130 == 6) {
              FUN_00018bd8(0x52,pcVar9);
              free(local_b0);
              iVar10 = DAT_00049ae4;
              if (local_100 == 0) {
                local_100 = local_b8;
              }
              goto LAB_00011998;
            }
            if (local_130 != 0) {
              iVar10 = DAT_00049ae4;
              if ((-1 < (int)local_130) && (local_130 - 3 < 2)) {
                if ((local_144 == (FILE *)0x1) && (iVar10 = strcmp(pcVar9,"-"), iVar10 == 0)) {
                    /* WARNING: Subroutine does not return */
                  FUN_000187c0(0x10,"can\'t read input (-) and filenames (-@) both from stdin");
                }
                FUN_00018e04(pcVar9);
                if (local_130 == 3) {
                  local_100 = local_b8;
                }
                local_130 = 4;
                iVar10 = DAT_00049ae4;
              }
              goto LAB_00011998;
            }
          }
          else {
            if (local_130 != 0) {
              iVar10 = strcmp(local_b0,"--");
              if (!bVar3 && iVar10 == 0) goto LAB_00013894;
              goto LAB_000138c0;
            }
            if (DAT_0004bafc == 0) {
              FUN_00018e90();
            }
            pcVar9 = local_b0;
            iVar10 = strcmp(local_b0,"--");
            if (!bVar3 && iVar10 == 0) {
LAB_00017b24:
                    /* WARNING: Subroutine does not return */
              FUN_000187c0(0x10,"can\'t use -- before archive name");
            }
          }
          iVar10 = strcmp(pcVar9,"-");
          if (iVar10 == 0) {
            FUN_00018f84();
          }
          else {
            DAT_00066db0 = (char *)FUN_0001a848(pcVar9);
            if (DAT_00066db0 == (char *)0x0) goto LAB_00017958;
            free(local_b0);
          }
          if (local_13c != 0) {
            fprintf(DAT_00066dc8,"sd: Zipfile name \'%s\'\n",DAT_00066db0);
            fflush(DAT_00066dc8);
          }
          pcVar9 = DAT_00066db0;
          if (DAT_0004bb80 == (char *)0x0) {
            sVar23 = strlen(DAT_00066db0);
            DAT_0004bb80 = malloc(sVar23 + 1);
            if (DAT_0004bb80 == (char *)0x0) goto LAB_00017958;
            strcpy(DAT_0004bb80,pcVar9);
          }
          pcVar9 = DAT_00066db0;
          if (DAT_0004bb78 == (char *)0x0) {
            sVar23 = strlen(DAT_00066db0);
            DAT_0004bb78 = malloc(sVar23 + 1);
            if (DAT_0004bb78 == (char *)0x0) goto LAB_00017958;
            strcpy(DAT_0004bb78,pcVar9);
          }
          local_130 = 3;
          if (local_144 != (FILE *)0x0) {
            while (pvVar16 = (void *)FUN_00022654(stdin), pvVar16 != (void *)0x0) {
              if (DAT_0004bc68 == 2) {
                FUN_00018bd8(0x52,pvVar16);
              }
              else {
                FUN_00018e04();
              }
              local_130 = 4;
              free(pvVar16);
            }
          }
          local_144 = (FILE *)0x0;
          iVar10 = DAT_00049ae4;
          if (DAT_0004bc68 == 2) {
            local_130 = 6;
          }
          goto LAB_00011998;
        }
        DAT_0004bc40 = 1;
      }
      goto LAB_00011998;
    }
LAB_00012780:
    if ((pcVar11 == (char *)0x141) ||
       ((local_bc == 2 && (sVar23 = strlen(*(char **)(local_a0 + 4)), sVar23 == 2)))) {
      FUN_00018558();
      uVar12 = FUN_000195a8(0);
      return uVar12;
    }
    DAT_00049ae8 = 1;
    DAT_0004bc5c = DAT_0004bc5c + 1;
    iVar10 = DAT_00049ae4;
  } while( true );
}



/* ===== entry @ 00017d74 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_000490e4)
            (DAT_00017da8,param_2,&stack0x00000004,DAT_00017dac,DAT_00017da4,param_1);
  return;
}



/* ===== FUN_00017db0 @ 00017db0 size=32 ===== */

void FUN_00017db0(void)

{
  if (DAT_00017dd4 == DAT_00017dd0) {
    return;
  }
  if (DAT_00017dd8 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00017dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00017dd8)();
  return;
}



/* ===== _FINI_0 @ 00017e14 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00017e50;
  if (*DAT_00017e50 != '\0') {
    return;
  }
  FUN_00017db0();
  if (DAT_00017e54 != 0) {
    __deregister_frame_info(DAT_00017e58);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00017e5c size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00017e80 != 0) {
    __register_frame_info(DAT_00017e88,DAT_00017e84);
  }
  if ((DAT_00017e0c - DAT_00017e08 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00017e10 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00017e04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00017e10)();
  return;
}



/* ===== FUN_00017e8c @ 00017e8c size=512 ===== */

void FUN_00017e8c(void)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  
  iVar1 = DAT_0004bb00;
  while (iVar1 != 0) {
    iVar1 = FUN_00022788();
  }
  if (DAT_0004bb0c == (void *)0x0) {
    DAT_0004bb0c = (void *)0x0;
  }
  else {
    do {
      pvVar2 = *(void **)((int)DAT_0004bb0c + 0x44);
      pvVar3 = *(void **)((int)DAT_0004bb0c + 0x68);
      if ((pvVar2 != (void *)0x0) && (pvVar2 != *(void **)((int)DAT_0004bb0c + 0x30))) {
        free(pvVar2);
      }
      if (*(void **)((int)DAT_0004bb0c + 0x30) != (void *)0x0) {
        free(*(void **)((int)DAT_0004bb0c + 0x30));
      }
      if (*(void **)((int)DAT_0004bb0c + 0x40) != (void *)0x0) {
        free(*(void **)((int)DAT_0004bb0c + 0x40));
      }
      if (((*(short *)((int)DAT_0004bb0c + 0x1c) != 0) &&
          (pvVar2 = *(void **)((int)DAT_0004bb0c + 0x38), pvVar2 != (void *)0x0)) &&
         (pvVar2 != *(void **)((int)DAT_0004bb0c + 0x34))) {
        free(pvVar2);
      }
      if ((*(short *)((int)DAT_0004bb0c + 0x1a) != 0) &&
         (*(void **)((int)DAT_0004bb0c + 0x34) != (void *)0x0)) {
        free(*(void **)((int)DAT_0004bb0c + 0x34));
      }
      if ((*(short *)((int)DAT_0004bb0c + 0x1e) != 0) &&
         (*(void **)((int)DAT_0004bb0c + 0x3c) != (void *)0x0)) {
        free(*(void **)((int)DAT_0004bb0c + 0x3c));
      }
      if (*(void **)((int)DAT_0004bb0c + 0x48) != (void *)0x0) {
        free(*(void **)((int)DAT_0004bb0c + 0x48));
      }
      if (*(void **)((int)DAT_0004bb0c + 0x4c) != (void *)0x0) {
        free(*(void **)((int)DAT_0004bb0c + 0x4c));
      }
      if (*(void **)((int)DAT_0004bb0c + 0x50) != (void *)0x0) {
        free(*(void **)((int)DAT_0004bb0c + 0x50));
      }
      if (*(void **)((int)DAT_0004bb0c + 0x54) != (void *)0x0) {
        free(*(void **)((int)DAT_0004bb0c + 0x54));
      }
      free(DAT_0004bb0c);
      DAT_000681c0 = DAT_000681c0 + -1;
      DAT_0004bb0c = pvVar3;
    } while (pvVar3 != (void *)0x0);
  }
  if (DAT_0004bafc == (void *)0x0) {
LAB_0001805c:
    if (DAT_0004bbe8 != (FILE *)0x0) {
      fclose(DAT_0004bbe8);
      return;
    }
    return;
  }
  do {
    iVar1 = DAT_0004baf8 + -1;
    do {
      DAT_0004baf8 = iVar1;
      if (DAT_0004baf8 == -1) {
        free(DAT_0004bafc);
        DAT_0004bafc = (void *)0x0;
        goto LAB_0001805c;
      }
      pvVar2 = *(void **)((int)DAT_0004bafc + (DAT_0004baf8 + -1) * 8 + 8);
      iVar1 = DAT_0004baf8 + -1;
    } while (pvVar2 == (void *)0x0);
    free(pvVar2);
  } while( true );
}



/* ===== FUN_0001808c @ 0001808c size=976 ===== */

undefined4 FUN_0001808c(void)

{
  undefined1 auStack_84 [104];
  
  if (DAT_0004bb18 != 0) {
    fputc(10,DAT_00066dc8);
    DAT_0004bb18 = 0;
  }
  if (DAT_0004bb14 != 0) {
    fputc(10,DAT_0004bbe8);
    DAT_0004bb14 = 0;
  }
  if (DAT_0004bc10 != 0) {
    if (DAT_00049ae8 != 0) {
      fprintf(DAT_00066dc8,"%lu>%lu: ",DAT_0004bb6c + 1,DAT_0004bb5c + 1);
      DAT_0004bb18 = 1;
    }
    if (DAT_0004bbec != 0) {
      fprintf(DAT_0004bbe8,"%lu>%lu: ",DAT_0004bb6c + 1,DAT_0004bb5c + 1);
      DAT_0004bb14 = 1;
    }
  }
  if (DAT_0004bc1c != 0) {
    if (DAT_00049ae8 != 0) {
      fprintf(DAT_00066dc8,"%3ld/%3ld ",DAT_0004bc08,DAT_0004bc00 - DAT_0004bc08);
      DAT_0004bb18 = 1;
    }
    if (DAT_0004bbec != 0) {
      fprintf(DAT_0004bbe8,"%3ld/%3ld ",DAT_0004bc08,DAT_0004bc00 - DAT_0004bc08);
      DAT_0004bb14 = 1;
    }
  }
  if (DAT_0004bc18 == 0) {
LAB_00018120:
    if (DAT_00049ae8 == 0) goto LAB_0001812c;
  }
  else {
    FUN_0002931c(DAT_0004bbfc,auStack_84);
    if (DAT_00049ae8 != 0) {
      fprintf(DAT_00066dc8,"[%4s",auStack_84);
      DAT_0004bb18 = 1;
    }
    if (DAT_0004bbec != 0) {
      fprintf(DAT_0004bbe8,"[%4s",auStack_84);
      DAT_0004bb14 = 1;
    }
    if (DAT_0004bbf0 < DAT_0004bbfc) {
      FUN_0002931c(DAT_0004bbfc - DAT_0004bbf0,auStack_84);
      if (DAT_00049ae8 == 0) {
        if (DAT_0004bbec == 0) {
          return 0;
        }
      }
      else {
        fprintf(DAT_00066dc8,"-%4s] ",auStack_84);
        if (DAT_0004bbec == 0) goto LAB_00018420;
      }
      fprintf(DAT_0004bbe8,"-%4s] ",auStack_84);
      goto LAB_00018120;
    }
    FUN_0002931c(DAT_0004bbf0 - DAT_0004bbfc,auStack_84);
    if (DAT_00049ae8 == 0) {
      if (DAT_0004bbec == 0) {
        return 0;
      }
LAB_00018224:
      fprintf(DAT_0004bbe8,"/%4s] ",auStack_84);
      goto LAB_00018120;
    }
    fprintf(DAT_00066dc8,"/%4s] ",auStack_84);
    if (DAT_0004bbec != 0) goto LAB_00018224;
LAB_00018420:
    if (DAT_00049ae8 == 0) {
      return 0;
    }
  }
  fflush(DAT_00066dc8);
LAB_0001812c:
  if (DAT_0004bbec != 0) {
    fflush(DAT_0004bbe8);
  }
  return 0;
}



/* ===== FUN_0001845c @ 0001845c size=248 ===== */

void FUN_0001845c(void)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  printf(DAT_00049180,"zip");
  if (__stdout->_chain == (_IO_FILE *)0x0) {
    fputc(10,__stdout);
  }
  else {
    pcVar1 = __stdout->_IO_write_base;
    if (pcVar1 < __stdout->_IO_buf_base) {
      __stdout->_IO_write_base = pcVar1 + 1;
      *pcVar1 = '\n';
    }
    else {
      __fputc_unlocked(10);
    }
  }
  puVar3 = DAT_00018554 + 0x15;
  puVar2 = DAT_00018554;
  do {
    while( true ) {
      puVar2 = puVar2 + 1;
      printf((char *)*puVar2,&DAT_0002e72c,"July 5th 2008");
      if (__stdout->_chain == (_IO_FILE *)0x0) break;
      pcVar1 = __stdout->_IO_write_base;
      if (pcVar1 < __stdout->_IO_buf_base) {
        __stdout->_IO_write_base = pcVar1 + 1;
        *pcVar1 = '\n';
        if (puVar2 == puVar3) {
          return;
        }
      }
      else {
        __fputc_unlocked(10);
        if (puVar2 == puVar3) {
          return;
        }
      }
    }
    fputc(10,__stdout);
  } while (puVar2 != puVar3);
  return;
}



/* ===== FUN_00018558 @ 00018558 size=604 ===== */

void FUN_00018558(void)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar5;
  undefined4 *puVar4;
  
  printf(DAT_00049180,"zip");
  if (__stdout->_chain == (_IO_FILE *)0x0) {
    fputc(10,__stdout);
  }
  else {
    pcVar1 = __stdout->_IO_write_base;
    if (pcVar1 < __stdout->_IO_buf_base) {
      __stdout->_IO_write_base = pcVar1 + 1;
      *pcVar1 = '\n';
    }
    else {
      __fputc_unlocked(10);
    }
  }
  puVar3 = DAT_000187b4 + 7;
  puVar2 = DAT_000187b4;
  do {
    puVar2 = puVar2 + 1;
    printf((char *)*puVar2,&DAT_0002e738,&DAT_0002e72c,"July 5th 2008");
    if (__stdout->_chain == (_IO_FILE *)0x0) {
      fputc(10,__stdout);
    }
    else {
      pcVar1 = __stdout->_IO_write_base;
      if (pcVar1 < __stdout->_IO_buf_base) {
        __stdout->_IO_write_base = pcVar1 + 1;
        *pcVar1 = '\n';
      }
      else {
        __fputc_unlocked(10);
      }
    }
  } while (puVar2 != puVar3);
  FUN_0002ac38();
  puVar2 = DAT_000187b8;
  puts("Zip special compilation options:");
  puVar3 = puVar2;
  do {
    puVar4 = puVar3 + 1;
    printf("\t%s\n",*puVar3);
    puVar5 = DAT_000187bc;
    puVar3 = puVar4;
  } while (puVar4 != puVar2 + 5);
  printf("\t[encryption, version %d.%d%s of %s] (modified for Zip 3)\n\n",2,0x5b,&DAT_000369fc,
         "05 Jan 2007");
  puVar2 = puVar5 + 7;
  do {
    while( true ) {
      puVar5 = puVar5 + 1;
      printf((char *)*puVar5);
      if (__stdout->_chain != (_IO_FILE *)0x0) break;
      fputc(10,__stdout);
      if (puVar5 == puVar2) goto LAB_000186d4;
    }
    pcVar1 = __stdout->_IO_write_base;
    if (pcVar1 < __stdout->_IO_buf_base) {
      __stdout->_IO_write_base = pcVar1 + 1;
      *pcVar1 = '\n';
    }
    else {
      __fputc_unlocked(10);
    }
  } while (puVar5 != puVar2);
LAB_000186d4:
  puts("\nZip environment options:");
  pcVar1 = getenv("ZIP");
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "[none]";
  }
  else if (*pcVar1 == '\0') {
    pcVar1 = "[none]";
  }
  printf("%16s:  %s\n",&DAT_0002e7cc,pcVar1);
  pcVar1 = getenv("ZIPOPT");
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "[none]";
  }
  else if (*pcVar1 == '\0') {
    pcVar1 = "[none]";
  }
  printf("%16s:  %s\n","ZIPOPT",pcVar1);
  return;
}



/* ===== FUN_000187c0 @ 000187c0 size=944 ===== */

void FUN_000187c0(int param_1,int param_2)

{
  FILE *pFVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = DAT_00049dcc + 1;
  if (DAT_00049dcc < 1) {
    DAT_00049dcc = iVar4;
    if (DAT_0004bb18 != 0) {
      fputc(10,DAT_00066dc8);
      DAT_0004bb18 = 0;
    }
    if ((DAT_0004bbe8 != (FILE *)0x0) && (DAT_0004bb14 != 0)) {
      fputc(10,DAT_0004bbe8);
      DAT_0004bb14 = 0;
    }
    if (param_2 != 0) {
      if ((*(uint *)(&DAT_00049b08 + param_1 * 0xc) & 0x10) != 0) {
        piVar2 = __errno_location();
        pFVar1 = DAT_00066dc8;
        pcVar3 = strerror(*piVar2);
        fprintf(pFVar1,"zip I/O error: %s",pcVar3);
      }
      fflush(DAT_00066dc8);
      fprintf(DAT_00066dc8,"\nzip error: %s (%s)\n",*(undefined4 *)(&DAT_00049b04 + param_1 * 0xc),
              param_2);
      pFVar1 = DAT_0004bbe8;
      if (DAT_0004bbe8 != (FILE *)0x0) {
        if ((*(uint *)(&DAT_00049b08 + param_1 * 0xc) & 0x10) != 0) {
          piVar2 = __errno_location();
          pcVar3 = strerror(*piVar2);
          fprintf(pFVar1,"zip I/O error: %s\n",pcVar3);
        }
        fprintf(DAT_0004bbe8,"\nzip error: %s (%s)\n",*(undefined4 *)(&DAT_00049b04 + param_1 * 0xc)
                ,param_2);
        DAT_0004bb14 = 0;
      }
    }
    iVar4 = DAT_00066db8;
    if (DAT_0004bb8c != (char *)0x0) {
      if (DAT_0004bb8c == DAT_00066db0) {
        fprintf(DAT_00066dc8,"attempting to restore %s to its previous state\n");
        if (DAT_0004bbe8 != (FILE *)0x0) {
          fprintf(DAT_0004bbe8,"attempting to restore %s to its previous state\n",DAT_00066db0);
        }
        fseek(DAT_0004bb88,DAT_00066db8,0);
        iVar6 = 0;
        DAT_00066db4 = DAT_00066db8;
        for (iVar5 = DAT_0004bb0c; iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x68)) {
          iVar6 = iVar6 + 1;
          FUN_0001b9e8(iVar5);
          DAT_00066db4 = *(ushort *)(iVar5 + 0x18) + 0x2e + (uint)*(ushort *)(iVar5 + 0x1c) +
                         (uint)*(ushort *)(iVar5 + 0x1e) + DAT_00066db4;
        }
        FUN_0001c4d4(iVar6,DAT_00066db4 - iVar4,iVar4,DAT_000681c4,DAT_0004bb04);
        fclose(DAT_0004bb88);
        DAT_0004bb88 = (FILE *)0x0;
      }
      else {
        if (DAT_0004bb40 != (FILE *)0x0) {
          fclose(DAT_0004bb40);
        }
        if (DAT_0004bb40 != DAT_0004bb88 && DAT_0004bb88 != (FILE *)0x0) {
          fclose(DAT_0004bb88);
        }
        unlink(DAT_0004bb8c);
        free(DAT_0004bb8c);
      }
    }
    if (DAT_0004bbb4 != (void *)0x0) {
      free(DAT_0004bbb4);
      DAT_0004bbb4 = (void *)0x0;
    }
    if (DAT_0004bbb0 != (void *)0x0) {
      free(DAT_0004bbb0);
      DAT_0004bbb0 = (void *)0x0;
    }
    if (DAT_00066db0 != (char *)0x0) {
      free(DAT_00066db0);
      DAT_00066db0 = (char *)0x0;
    }
    if (DAT_0004bb78 != (void *)0x0) {
      free(DAT_0004bb78);
      DAT_0004bb78 = (void *)0x0;
    }
    if (DAT_0004bb04 != (void *)0x0) {
      free(DAT_0004bb04);
      DAT_0004bb04 = (void *)0x0;
    }
    FUN_00017e8c();
                    /* WARNING: Subroutine does not return */
    exit(param_1);
  }
  DAT_00049dcc = iVar4;
                    /* WARNING: Subroutine does not return */
  exit(5);
}



/* ===== FUN_00018b70 @ 00018b70 size=104 ===== */

void FUN_00018b70(void)

{
  char *pcVar1;
  
  FUN_00029dac();
  if (DAT_00066dc8->_chain == (_IO_FILE *)0x0) {
    fputc(10,DAT_00066dc8);
  }
  else {
    pcVar1 = DAT_00066dc8->_IO_write_base;
    if (pcVar1 < DAT_00066dc8->_IO_buf_base) {
      DAT_00066dc8->_IO_write_base = pcVar1 + 1;
      *pcVar1 = '\n';
    }
    else {
      __fputc_unlocked(10);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_000187c0(9,"aborting");
}



/* ===== FUN_00018bd8 @ 00018bd8 size=556 ===== */

int FUN_00018bd8(int param_1,char *param_2)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  FILE *__stream;
  undefined4 uVar3;
  void *pvVar4;
  undefined1 *puVar5;
  void *__ptr;
  
  if (param_1 != 0x69 && (param_1 != 0x52 && param_1 != 0x78)) {
                    /* WARNING: Subroutine does not return */
    FUN_000187c0(5,"bad flag to add_filter");
  }
  if (param_2 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_000187c0(5,"null pattern to add_filter");
  }
  if (*param_2 == '@') {
    if (param_2[1] == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_000187c0(0x10,"missing file after @");
    }
    __stream = fopen(param_2 + 1,"r");
    if (__stream == (FILE *)0x0) {
      sprintf((char *)&DAT_00066dcc,"%c pattern file \'%s\'",param_1,param_2);
                    /* WARNING: Subroutine does not return */
      FUN_000187c0(0x12,&DAT_00066dcc);
    }
    while( true ) {
      pvVar4 = (void *)FUN_00022654(__stream);
      if (pvVar4 == (void *)0x0) {
        fclose(__stream);
        return DAT_0004baf8;
      }
      puVar5 = malloc(0xc);
      if (puVar5 == (undefined1 *)0x0) break;
      puVar2 = puVar5;
      if (DAT_00049dd0 != (undefined1 *)0x0) {
        puVar1 = (undefined4 *)(DAT_00049dd4 + 8);
        DAT_00049dd4 = puVar5;
        *puVar1 = puVar5;
        puVar5 = DAT_00049dd0;
        puVar2 = DAT_00049dd4;
      }
      DAT_00049dd4 = puVar2;
      DAT_00049dd0 = puVar5;
      __ptr = (void *)FUN_0002a4d8(pvVar4,0);
      free(pvVar4);
      puVar5 = DAT_00049dd4;
      if (__ptr == (void *)0x0) {
        *(undefined4 *)(DAT_00049dd4 + 4) = 0;
      }
      else {
        uVar3 = FUN_0002a630(__ptr);
        *(undefined4 *)(puVar5 + 4) = uVar3;
        free(__ptr);
        puVar5 = DAT_00049dd4;
      }
      *puVar5 = (char)param_1;
      *(undefined4 *)(puVar5 + 8) = 0;
      DAT_0004baf8 = DAT_0004baf8 + 1;
    }
  }
  else {
    puVar5 = malloc(0xc);
    if (puVar5 != (undefined1 *)0x0) {
      puVar2 = puVar5;
      if (DAT_00049dd0 != (undefined1 *)0x0) {
        puVar1 = (undefined4 *)(DAT_00049dd4 + 8);
        DAT_00049dd4 = puVar5;
        *puVar1 = puVar5;
        puVar5 = DAT_00049dd0;
        puVar2 = DAT_00049dd4;
      }
      DAT_00049dd4 = puVar2;
      DAT_00049dd0 = puVar5;
      pvVar4 = (void *)FUN_0002a4d8(param_2,0);
      puVar5 = DAT_00049dd4;
      if (pvVar4 == (void *)0x0) {
        *(undefined4 *)(DAT_00049dd4 + 4) = 0;
      }
      else {
        uVar3 = FUN_0002a630();
        *(undefined4 *)(puVar5 + 4) = uVar3;
        free(pvVar4);
        puVar5 = DAT_00049dd4;
      }
      *puVar5 = (char)param_1;
      *(undefined4 *)(puVar5 + 8) = 0;
      DAT_0004baf8 = DAT_0004baf8 + 1;
      return DAT_0004baf8;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_000187c0(4,"adding filter");
}



/* ===== FUN_00018e04 @ 00018e04 size=140 ===== */

void FUN_00018e04(char *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  size_t sVar3;
  void *__dest;
  bool bVar4;
  
  puVar2 = malloc(8);
  if (puVar2 != (undefined4 *)0x0) {
    sVar3 = strlen(param_1);
    __dest = malloc(sVar3 + 1);
    if (__dest != (void *)0x0) {
      memcpy(__dest,param_1,sVar3 + 1);
      puVar2[1] = 0;
      bVar4 = DAT_00049dd8 != (undefined4 *)0x0;
      *puVar2 = __dest;
      DAT_00049de0 = DAT_00049de0 + 1;
      puVar1 = puVar2;
      if (bVar4) {
        puVar1 = (undefined4 *)((int)DAT_00049ddc + 4);
        DAT_00049ddc = puVar2;
        *puVar1 = puVar2;
        puVar2 = DAT_00049dd8;
        puVar1 = DAT_00049ddc;
      }
      DAT_00049ddc = puVar1;
      DAT_00049dd8 = puVar2;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_000187c0(4,"adding file");
}



/* ===== FUN_00018e90 @ 00018e90 size=244 ===== */

void * FUN_00018e90(void)

{
  byte *__ptr;
  uint uVar1;
  byte *pbVar2;
  void *pvVar3;
  void *pvVar4;
  undefined4 uVar5;
  
  pvVar4 = DAT_0004baf8;
  if (DAT_0004baf8 == (void *)0x0) {
    DAT_0004bafc = DAT_0004baf8;
  }
  else {
    DAT_0004bafc = malloc(((int)DAT_0004baf8 + 1U) * 8);
    if (DAT_0004bafc == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_000187c0(4,"was creating pattern list");
    }
    if (DAT_00049dd0 != (byte *)0x0) {
      pvVar3 = (void *)0x0;
      do {
        pvVar4 = DAT_0004bafc;
        __ptr = DAT_00049dd0;
        uVar1 = (uint)*DAT_00049dd0;
        if (uVar1 == 0x52) {
          DAT_0004baf0 = DAT_0004baf0 + 1;
        }
        else if (uVar1 == 0x69) {
          DAT_0004baf4 = DAT_0004baf4 + 1;
        }
        uVar5 = *(undefined4 *)(DAT_00049dd0 + 4);
        pbVar2 = *(byte **)(DAT_00049dd0 + 8);
        *(uint *)((int)DAT_0004bafc + (int)pvVar3 * 8 + 4) = uVar1;
        *(undefined4 *)((int)pvVar4 + (int)pvVar3 * 8) = uVar5;
        pvVar3 = (void *)((int)pvVar3 + 1);
        free(__ptr);
        pvVar4 = DAT_0004baf8;
        DAT_00049dd0 = pbVar2;
      } while ((pvVar3 < DAT_0004baf8) && (pbVar2 != (byte *)0x0));
    }
  }
  return pvVar4;
}



/* ===== FUN_00018f84 @ 00018f84 size=116 ===== */

void FUN_00018f84(void)

{
  int iVar1;
  
  DAT_00066dc8 = stderr;
  iVar1 = isatty(1);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_000187c0(0x10,"cannot write zip file to terminal");
  }
  DAT_00066db0 = malloc(4);
  if (DAT_00066db0 != (undefined2 *)0x0) {
    *DAT_00066db0 = 0x2d;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_000187c0(4,"was processing arguments");
}



/* ===== FUN_00018ff8 @ 00018ff8 size=676 ===== */

void FUN_00018ff8(char *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  char *__s;
  size_t __n;
  char *pcVar4;
  size_t sVar5;
  char *__s_00;
  int iVar6;
  bool bVar7;
  
  __n = strlen(param_1);
  __s = DAT_00049de4;
  if (DAT_00049de4 == (char *)0x0) {
    __s_00 = malloc(__n + 0x14);
    uVar2 = DAT_0002e974;
    uVar1 = DAT_0002e970;
    if (__s_00 == (char *)0x0) goto LAB_0001928c;
    bVar7 = DAT_0004bc5c == 0;
    *(undefined4 *)__s_00 = DAT_0002e96c;
    *(undefined4 *)(__s_00 + 4) = uVar1;
    *(short *)(__s_00 + 8) = (short)uVar2;
    cVar3 = DAT_0002e97c;
    if (bVar7) {
      *(undefined4 *)(__s_00 + 9) = DAT_0002e978;
      __s_00[0xd] = cVar3;
    }
    sVar5 = strlen(__s_00);
    __s_00[sVar5] = '\'';
    memcpy(__s_00 + sVar5 + 1,param_1,__n);
    *(undefined2 *)(__s_00 + sVar5 + __n + 1) = s_bad_split_size____s__0002ebdc._20_2_;
  }
  else {
    pcVar4 = strstr(DAT_00049de4,"{}");
    sVar5 = strlen(__s);
    __s_00 = malloc(__n + 3 + sVar5);
    if (__s_00 == (char *)0x0) {
LAB_0001928c:
                    /* WARNING: Subroutine does not return */
      FUN_000187c0(4,"building command string for testing archive");
    }
    if (pcVar4 == (char *)0x0) {
      memcpy(__s_00,__s,sVar5);
      __s_00[sVar5] = ' ';
      __s_00[sVar5 + 1] = '\'';
      memcpy(__s_00 + sVar5 + 2,param_1,__n);
      *(undefined2 *)(__s_00 + sVar5 + 1 + __n + 1) = s_bad_split_size____s__0002ebdc._20_2_;
    }
    else {
      memcpy(__s_00,__s,sVar5 + 1);
      __s_00[(int)pcVar4 - (int)__s] = '\0';
      sVar5 = strlen(__s_00);
      __s_00[sVar5] = ' ';
      __s_00[sVar5 + 1] = '\'';
      memcpy(__s_00 + sVar5 + 2,param_1,__n);
      iVar6 = sVar5 + 1 + __n;
      __s_00[iVar6 + 1] = '\'';
      __s_00[iVar6 + 2] = ' ';
      strcpy(__s_00 + iVar6 + 3,pcVar4 + 2);
    }
    free(__s);
    DAT_00049de4 = (char *)0x0;
  }
  iVar6 = system(__s_00);
  free(__s_00);
  if (iVar6 != 0) {
    fprintf(DAT_00066dc8,"test of %s FAILED\n",DAT_00066db0);
                    /* WARNING: Subroutine does not return */
    FUN_000187c0(8,"original files unmodified");
  }
  if (DAT_00049ae8 != 0) {
    fprintf(DAT_00066dc8,"test of %s OK\n",DAT_00066db0);
    fflush(DAT_00066dc8);
  }
  if (DAT_0004bbe8 == (FILE *)0x0) {
    return;
  }
  fprintf(DAT_0004bbe8,"test of %s OK\n",DAT_00066db0);
  fflush(DAT_0004bbe8);
  return;
}



/* ===== FUN_0001929c @ 0001929c size=20 ===== */

void FUN_0001929c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_000187c0(0x10,"stderr is not a tty");
}



/* ===== error @ 000192b0 size=16 ===== */

void error(undefined4 param_1)

{
                    /* WARNING: Subroutine does not return */
  FUN_000187c0(5,param_1);
}



/* ===== FUN_000192c0 @ 000192c0 size=304 ===== */

void FUN_000192c0(char *param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  if (DAT_00049ae8 != 0) {
    if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
      iVar1 = DAT_0004bb18;
      if (param_2 != 0) goto joined_r0x000193d4;
    }
    else {
      fputs(param_1,DAT_00066dc8);
      DAT_0004bb18 = 1;
      iVar1 = param_2;
joined_r0x000193d4:
      if (iVar1 != 0) {
        fputc(10,DAT_00066dc8);
        DAT_0004bb18 = 0;
      }
    }
    fflush(DAT_00066dc8);
  }
  if (DAT_0004bbe8 == (FILE *)0x0) {
    return;
  }
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    bVar2 = param_2 == 0;
    param_2 = DAT_0004bb14;
    if (bVar2) goto LAB_00019368;
  }
  else {
    fputs(param_1,DAT_0004bbe8);
    DAT_0004bb14 = 1;
  }
  if (param_2 != 0) {
    fputc(10,DAT_0004bbe8);
    DAT_0004bb14 = 0;
    fflush(DAT_0004bbe8);
    return;
  }
LAB_00019368:
  fflush(DAT_0004bbe8);
  return;
}



/* ===== FUN_000193f0 @ 000193f0 size=220 ===== */

void FUN_000193f0(undefined4 param_1,undefined4 param_2)

{
  if (DAT_00049ae8 != 0) {
    if (DAT_0004bb18 != 0) {
      fputc(10,DAT_00066dc8);
    }
    fprintf(DAT_00066dc8,"%s%s\n",param_1,param_2);
    DAT_0004bb18 = 0;
    fflush(DAT_00066dc8);
  }
  if (DAT_0004bbe8 == (FILE *)0x0) {
    return;
  }
  if (DAT_0004bb14 != 0) {
    fputc(10,DAT_0004bbe8);
  }
  fprintf(DAT_0004bbe8,"%s%s\n",param_1,param_2);
  DAT_0004bb14 = 0;
  fflush(DAT_0004bbe8);
  return;
}



/* ===== FUN_000194cc @ 000194cc size=220 ===== */

void FUN_000194cc(undefined4 param_1,undefined4 param_2)

{
  if (DAT_00049ae8 != 0) {
    if (DAT_0004bb18 != 0) {
      fputc(10,DAT_00066dc8);
    }
    fprintf(DAT_00066dc8,"\tzip warning: %s%s\n",param_1,param_2);
    DAT_0004bb18 = 0;
    fflush(DAT_00066dc8);
  }
  if (DAT_0004bbe8 == (FILE *)0x0) {
    return;
  }
  if (DAT_0004bb14 != 0) {
    fputc(10,DAT_0004bbe8);
  }
  fprintf(DAT_0004bbe8,"\tzip warning: %s%s\n",param_1,param_2);
  DAT_0004bb14 = 0;
  fflush(DAT_0004bbe8);
  return;
}



/* ===== FUN_000195a8 @ 000195a8 size=548 ===== */

undefined4 FUN_000195a8(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char *__ptr;
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [12];
  
  __ptr = DAT_00066db0;
  if (DAT_00049de8 == 0) {
LAB_00019674:
    if (DAT_0004bbb0 != (void *)0x0) {
LAB_00019688:
      free(DAT_0004bbb0);
      DAT_0004bbb0 = (void *)0x0;
    }
    __ptr = DAT_00066db0;
    if (DAT_00066db0 == (char *)0x0) goto LAB_000196b0;
  }
  else {
    if (DAT_00066db0 == (char *)0x0) {
      if (DAT_0004bbb0 == (void *)0x0) goto LAB_000196b0;
      goto LAB_00019688;
    }
    iVar1 = strcmp(DAT_00066db0,"-");
    if (iVar1 != 0) {
      if (DAT_0004bb0c == 0) {
        FUN_000194cc("zip file is empty, can\'t make it as old as latest entry",&DAT_000369fc);
      }
      else {
        uVar3 = 0;
        iVar1 = DAT_0004bb0c;
        do {
          if (*(char *)(*(int *)(iVar1 + 0x40) + (uint)*(ushort *)(iVar1 + 0x18) + -1) != '/') {
            uVar2 = FUN_000206d8(iVar1,auStack_24);
            if ((uVar2 & 1) == 0) {
              uVar2 = *(uint *)(iVar1 + 8);
            }
            else {
              uVar2 = FUN_00023160(auStack_20);
            }
            if (uVar3 < uVar2) {
              uVar3 = uVar2;
            }
          }
          iVar1 = *(int *)(iVar1 + 0x68);
        } while (iVar1 != 0);
        if (uVar3 == 0) {
          FUN_000194cc("zip file has only directories, can\'t make it as old as latest entry",
                       &DAT_000369fc);
        }
        else {
          FUN_0002a664(DAT_00066db0,uVar3);
        }
      }
      goto LAB_00019674;
    }
    if (DAT_0004bbb0 != (void *)0x0) goto LAB_00019688;
  }
  free(__ptr);
  DAT_00066db0 = (char *)0x0;
LAB_000196b0:
  if (DAT_0004bb84 != (FILE *)0x0) {
    fclose(DAT_0004bb84);
    DAT_0004bb84 = (FILE *)0x0;
  }
  if (DAT_0004bb80 != (void *)0x0) {
    free(DAT_0004bb80);
    DAT_0004bb80 = (void *)0x0;
  }
  if (DAT_0004bb78 != (void *)0x0) {
    free(DAT_0004bb78);
    DAT_0004bb78 = (void *)0x0;
  }
  if (DAT_0004bb04 != (void *)0x0) {
    free(DAT_0004bb04);
    DAT_0004bb04 = (void *)0x0;
  }
  if ((DAT_0004bc64 != 0) && (iVar1 = FUN_00020750(), iVar1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_000187c0(iVar1,"was deleting moved files and directories");
  }
  FUN_00017e8c();
  return param_1;
}



/* ===== FUN_00019804 @ 00019804 size=132 ===== */

undefined4 FUN_00019804(undefined4 param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = FUN_000234b8(param_2,param_1);
  if (iVar1 != 0) {
    FUN_000194cc("new zip file left as: ",param_1);
    free(DAT_0004bb8c);
    DAT_0004bb8c = (void *)0x0;
                    /* WARNING: Subroutine does not return */
    FUN_000187c0(iVar1,"was replacing split file");
  }
  if (DAT_0004bb74 == 0) {
    return 0;
  }
  chmod(param_2,DAT_0004bb74);
  return 0;
}



/* ===== FUN_00019888 @ 00019888 size=8 ===== */

undefined4 FUN_00019888(void)

{
  return 0;
}



/* ===== FUN_00019900 @ 00019900 size=532 ===== */

void FUN_00019900(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  uVar2 = (uint)(*param_1 >> 8);
  if (0x1e < uVar2) {
    uVar4 = *param_1 & 0xff;
    sprintf((char *)&DAT_00066dcc,"made by version %d.%d on system type %d: ",uVar4 / 10,uVar4 % 10,
            uVar2);
    FUN_000194cc(&DAT_00066dcc,*(undefined4 *)(param_1 + 0x24));
  }
  uVar2 = (uint)param_1[1];
  bVar5 = 0x13 < uVar2;
  if (uVar2 != 0x14) {
    bVar5 = uVar2 != 10;
  }
  if (bVar5 && (uVar2 != 0x14 && uVar2 != 0xb)) {
    sprintf((char *)&DAT_00066dcc,"needs unzip %d.%d on system type %d: ",(uVar2 & 0xff) / 10,
            (uVar2 & 0xff) % 10,(uint)(param_1[1] >> 8));
    FUN_000194cc(&DAT_00066dcc,*(undefined4 *)(param_1 + 0x24));
  }
  uVar2 = (uint)param_1[2];
  if ((DAT_0004bc58 == 2) && (param_1[0x13] != uVar2)) {
    sprintf((char *)&DAT_00066dcc,"local flags = 0x%04x, central = 0x%04x: ");
    FUN_000194cc(&DAT_00066dcc,*(undefined4 *)(param_1 + 0x24));
  }
  else if (((param_1[2] & 0xfff0) != 0) && ((uVar2 & 0xffffff0f) != 0x800)) {
    sprintf((char *)&DAT_00066dcc,"undefined bits used in flags = 0x%04x: ",uVar2);
    FUN_000194cc(&DAT_00066dcc,*(undefined4 *)(param_1 + 0x24));
    uVar1 = param_1[3];
    goto joined_r0x000199bc;
  }
  uVar1 = param_1[3];
joined_r0x000199bc:
  if (uVar1 < 9) {
    iVar3 = *(int *)(param_1 + 0x10);
  }
  else {
    sprintf((char *)&DAT_00066dcc,"unknown compression method %u: ");
    FUN_000194cc(&DAT_00066dcc,*(undefined4 *)(param_1 + 0x24));
    iVar3 = *(int *)(param_1 + 0x10);
  }
  if (iVar3 == 0) {
    uVar1 = param_1[0x12];
  }
  else {
    sprintf((char *)&DAT_00066dcc,"starts on disk %lu: ");
    FUN_000194cc(&DAT_00066dcc,*(undefined4 *)(param_1 + 0x24));
    uVar1 = param_1[0x12];
  }
  if (2 < uVar1) {
    sprintf((char *)&DAT_00066dcc,"unknown internal attributes = 0x%04x: ");
    FUN_000194cc(&DAT_00066dcc,*(undefined4 *)(param_1 + 0x24));
    return;
  }
  return;
}



/* ===== FUN_00019b14 @ 00019b14 size=504 ===== */

undefined4 FUN_00019b14(FILE *param_1)

{
  uint uVar1;
  byte *pbVar2;
  char *pcVar3;
  _IO_FILE *p_Var4;
  
  p_Var4 = param_1->_chain;
  if (p_Var4 == (_IO_FILE *)0x0) {
    uVar1 = fgetc(param_1);
  }
  else {
    pbVar2 = (byte *)param_1->_IO_write_base;
    if (pbVar2 < param_1->_IO_write_end) {
      param_1->_IO_write_base = (char *)(pbVar2 + 1);
      uVar1 = (uint)*pbVar2;
      goto LAB_00019b50;
    }
    uVar1 = __fgetc_unlocked();
  }
  if (uVar1 == 0xffffffff) {
LAB_00019bf0:
    ferror(param_1);
    return 0;
  }
  p_Var4 = param_1->_chain;
LAB_00019b50:
  do {
    if (uVar1 == 0x50) goto LAB_00019b84;
LAB_00019b58:
    if (p_Var4 != (_IO_FILE *)0x0) {
LAB_00019b60:
      pcVar3 = param_1->_IO_write_base;
      if (param_1->_IO_write_end <= pcVar3) {
        uVar1 = __fgetc_unlocked(param_1);
        goto LAB_00019bd0;
      }
      param_1->_IO_write_base = pcVar3 + 1;
      if (*pcVar3 == 'P') {
LAB_00019b84:
        do {
          DAT_00049e00 = 0x50;
          if (p_Var4 == (_IO_FILE *)0x0) {
            uVar1 = fgetc(param_1);
LAB_00019c98:
            if (uVar1 == 0xffffffff) goto LAB_00019bf0;
          }
          else {
            pbVar2 = (byte *)param_1->_IO_write_base;
            if (param_1->_IO_write_end <= pbVar2) {
              uVar1 = __fgetc_unlocked(param_1);
              goto LAB_00019c98;
            }
            param_1->_IO_write_base = (char *)(pbVar2 + 1);
            uVar1 = (uint)*pbVar2;
          }
          if (uVar1 != 0x4b) goto code_r0x00019bb4;
          DAT_00049e01 = 0x4b;
          if (param_1->_chain == (_IO_FILE *)0x0) {
            uVar1 = fgetc(param_1);
LAB_00019cb8:
            if (uVar1 == 0xffffffff) goto LAB_00019bf0;
          }
          else {
            pbVar2 = (byte *)param_1->_IO_write_base;
            if (param_1->_IO_write_end <= pbVar2) {
              uVar1 = __fgetc_unlocked(param_1);
              goto LAB_00019cb8;
            }
            param_1->_IO_write_base = (char *)(pbVar2 + 1);
            uVar1 = (uint)*pbVar2;
          }
          if (uVar1 != 0x50) {
            if (0xf < (int)uVar1) goto LAB_00019bd8;
            DAT_00049e02 = (undefined1)uVar1;
            if (param_1->_chain == (_IO_FILE *)0x0) {
              uVar1 = fgetc(param_1);
LAB_00019cec:
              if (uVar1 == 0xffffffff) goto LAB_00019bf0;
            }
            else {
              pbVar2 = (byte *)param_1->_IO_write_base;
              if (param_1->_IO_write_end <= pbVar2) {
                uVar1 = __fgetc_unlocked(param_1);
                goto LAB_00019cec;
              }
              param_1->_IO_write_base = (char *)(pbVar2 + 1);
              uVar1 = (uint)*pbVar2;
            }
            if (uVar1 != 0x50) {
              if ((int)uVar1 < 0x10) {
                DAT_00049e03 = (char)uVar1;
                return 1;
              }
              goto LAB_00019bd8;
            }
          }
          ungetc(uVar1,param_1);
          p_Var4 = param_1->_chain;
        } while( true );
      }
      goto LAB_00019b58;
    }
LAB_00019bc8:
    uVar1 = fgetc(param_1);
LAB_00019bd0:
    if (uVar1 == 0xffffffff) goto LAB_00019bf0;
LAB_00019bd8:
    p_Var4 = param_1->_chain;
  } while( true );
code_r0x00019bb4:
  ungetc(uVar1,param_1);
  p_Var4 = param_1->_chain;
  if (p_Var4 == (_IO_FILE *)0x0) goto LAB_00019bc8;
  goto LAB_00019b60;
}



/* ===== FUN_00019d0c @ 00019d0c size=168 ===== */

void FUN_00019d0c(undefined4 param_1,undefined4 *param_2,uint *param_3,size_t *param_4)

{
  void *__ptr;
  size_t __size;
  uint uVar1;
  
  __ptr = (void *)*param_2;
  if (__ptr == (void *)0x0) {
    *param_4 = 0x400;
    __ptr = malloc(0x400);
    *param_2 = __ptr;
  }
  else {
    uVar1 = *param_3;
    if (uVar1 <= *param_4 - 5) goto LAB_00019d3c;
    __size = *param_4 + 0x400;
    *param_4 = __size;
    __ptr = realloc(__ptr,__size);
    *param_2 = __ptr;
  }
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_000187c0(4,"append_ulong_to_mem");
  }
  uVar1 = *param_3;
LAB_00019d3c:
  *(char *)((int)__ptr + uVar1) = (char)param_1;
  *(char *)((int)__ptr + uVar1 + 2) = (char)((uint)param_1 >> 0x10);
  *(char *)((int)__ptr + uVar1 + 1) = (char)((uint)param_1 >> 8);
  *(char *)((int)__ptr + uVar1 + 3) = (char)((uint)param_1 >> 0x18);
  *param_3 = *param_3 + 4;
  return;
}



/* ===== FUN_00019dbc @ 00019dbc size=248 ===== */

void FUN_00019dbc(undefined1 *param_1,uint param_2,int *param_3,int *param_4,size_t *param_5)

{
  void *pvVar1;
  size_t sVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *extraout_r12;
  undefined1 *extraout_r12_00;
  
  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  pvVar1 = (void *)*param_3;
  sVar2 = param_2;
  if (param_2 < 0x400) {
    sVar2 = 0x400;
  }
  if (pvVar1 == (void *)0x0) {
    *param_5 = sVar2;
    pvVar1 = malloc(sVar2);
    *param_3 = (int)pvVar1;
    puVar4 = extraout_r12_00;
  }
  else {
    iVar3 = *param_4;
    puVar4 = (undefined1 *)(iVar3 + param_2);
    if (puVar4 <= (undefined1 *)(*param_5 - 1)) goto LAB_00019e08;
    sVar2 = *param_5 + sVar2;
    *param_5 = sVar2;
    pvVar1 = realloc(pvVar1,sVar2);
    *param_3 = (int)pvVar1;
    puVar4 = extraout_r12;
  }
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_000187c0(4,"append_string_to_mem");
  }
  iVar3 = *param_4;
LAB_00019e08:
  if (param_2 != 0) {
    if (param_2 != 1) {
      puVar4 = param_1;
    }
    *(undefined1 *)(*param_3 + iVar3) = *param_1;
    if (param_2 != 1) {
      puVar5 = puVar4;
      do {
        puVar6 = puVar5 + 1;
        puVar5[*param_3 + *param_4 + (1 - (int)puVar4)] = *puVar6;
        puVar5 = puVar6;
      } while (puVar6 != param_1 + (param_2 - 1));
    }
    iVar3 = *param_4;
  }
  *param_4 = param_2 + iVar3;
  return;
}



/* ===== FUN_00019ebc @ 00019ebc size=668 ===== */

byte FUN_00019ebc(short *param_1,uint param_2,int param_3,undefined4 *param_4)

{
  byte bVar1;
  short sVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int local_3c;
  uint local_38;
  int local_34;
  int local_30;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar5 = (uint)(ushort)param_1[1];
  sVar2 = *param_1;
  bVar3 = 0;
  if (uVar5 <= param_2 - 4) {
    iVar7 = 0;
    do {
      if (sVar2 == 0x5855) {
        if ((7 < uVar5) && (iVar7 == 0)) {
          bVar3 = bVar3 | 3;
          *param_4 = *(undefined4 *)(param_1 + 2);
          param_4[1] = *(undefined4 *)(param_1 + 4);
        }
      }
      else if (sVar2 == 0x7855) {
        if (iVar7 == 0) {
          iVar7 = 1;
          bVar3 = 0;
        }
      }
      else if (sVar2 == 0x5455) {
        bVar3 = 0;
        if (uVar5 == 0 || param_4 == (undefined4 *)0x0) {
LAB_0001a0f4:
          iVar7 = 1;
        }
        else {
          bVar3 = *(byte *)(param_1 + 2);
          if ((bVar3 & 1) == 0) {
LAB_0001a05c:
            iVar8 = 0xc;
            local_34 = 10;
            local_30 = 0xb;
            uVar9 = 5;
            local_3c = 8;
            local_38 = 9;
            iVar6 = 7;
            iVar4 = 6;
          }
          else {
            if (uVar5 < 5) {
              bVar3 = bVar3 & 0xfe;
              goto LAB_0001a05c;
            }
            iVar8 = 0x10;
            local_30 = 0xf;
            local_34 = 0xe;
            local_38 = 0xd;
            local_3c = 0xc;
            iVar6 = 0xb;
            param_4[1] = *(undefined4 *)((int)param_1 + 5);
            iVar4 = 10;
            uVar9 = 9;
          }
          iVar7 = param_3;
          if (param_3 != 0) goto LAB_00019f20;
          if ((bVar3 & 2) == 0) {
LAB_0001a0ec:
            if ((bVar3 & 4) == 0) goto LAB_0001a0f4;
            if (uVar9 <= uVar5) {
              param_4[2] = CONCAT22(CONCAT11(*(undefined1 *)((int)param_1 + local_3c),
                                             *(undefined1 *)((int)param_1 + iVar6)),
                                    CONCAT11(*(undefined1 *)((int)param_1 + iVar4),
                                             *(undefined1 *)((int)param_1 + uVar9)));
              iVar7 = 1;
              goto LAB_00019f20;
            }
          }
          else {
            if (uVar9 <= uVar5) {
              *param_4 = CONCAT22(CONCAT11(*(undefined1 *)((int)param_1 + local_3c),
                                           *(undefined1 *)((int)param_1 + iVar6)),
                                  CONCAT11(*(undefined1 *)((int)param_1 + iVar4),
                                           *(undefined1 *)((int)param_1 + uVar9)));
              iVar4 = local_34;
              iVar6 = local_30;
              uVar9 = local_38;
              local_3c = iVar8;
              goto LAB_0001a0ec;
            }
            bVar1 = bVar3 & 4;
            bVar3 = bVar3 & 0xfd;
            if (bVar1 == 0) goto LAB_0001a0f4;
          }
          bVar3 = bVar3 & 0xfb;
          iVar7 = 1;
        }
      }
LAB_00019f20:
      iVar4 = param_2 - uVar5;
      param_2 = iVar4 - 4;
      param_1 = (short *)((int)param_1 + uVar5 + 4);
      if (param_2 < 4) {
        return bVar3;
      }
      uVar5 = (uint)(ushort)param_1[1];
      sVar2 = *param_1;
    } while (uVar5 <= iVar4 - 8U);
  }
  return bVar3;
}



/* ===== FUN_0001a158 @ 0001a158 size=92 ===== */

bool FUN_0001a158(void)

{
  if (((DAT_00049e01 == 'K') && (DAT_00049e00 == 'P')) && (DAT_00049e02 == '\x03')) {
    return DAT_00049e03 == '\x04';
  }
  return false;
}



/* ===== FUN_0001a1b4 @ 0001a1b4 size=92 ===== */

bool FUN_0001a1b4(void)

{
  if (((DAT_00049e01 == 'K') && (DAT_00049e00 == 'P')) && (DAT_00049e02 == '\x05')) {
    return DAT_00049e03 == '\x06';
  }
  return false;
}



/* ===== FUN_0001a210 @ 0001a210 size=92 ===== */

bool FUN_0001a210(void)

{
  if (((DAT_00049e01 == 'K') && (DAT_00049e00 == 'P')) && (DAT_00049e02 == '\x06')) {
    return DAT_00049e03 == '\x06';
  }
  return false;
}



/* ===== FUN_0001a26c @ 0001a26c size=92 ===== */

bool FUN_0001a26c(void)

{
  if (((DAT_00049e01 == 'K') && (DAT_00049e00 == 'P')) && (DAT_00049e02 == '\x01')) {
    return DAT_00049e03 == '\x02';
  }
  return false;
}



/* ===== FUN_0001a2c8 @ 0001a2c8 size=116 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0001a2c8(uint *param_1)

{
  uint uVar1;
  undefined1 uStack_7;
  undefined1 uStack_6;
  undefined1 uStack_5;
  undefined1 uStack_3;
  undefined1 uStack_2;
  undefined1 uStack_1;
  
  uVar1 = *param_1;
  if ((((uVar1 & 0xff) == (_DAT_00049e00 & 0xff)) &&
      (uStack_7 = (char)(_DAT_00049e00 >> 8), uStack_3 = (char)(uVar1 >> 8), uStack_7 == uStack_3))
     && (uStack_6 = (char)(_DAT_00049e00 >> 0x10), uStack_2 = (char)(uVar1 >> 0x10),
        uStack_6 == uStack_2)) {
    uStack_5 = (char)(_DAT_00049e00 >> 0x18);
    uStack_1 = (char)(uVar1 >> 0x18);
    return uStack_5 == uStack_1;
  }
  return false;
}



/* ===== FUN_0001a33c @ 0001a33c size=548 ===== */

void FUN_0001a33c(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  size_t sVar4;
  char *pcVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  uint __n;
  char *pcVar9;
  
  puVar8 = *(undefined1 **)(param_1 + 0x34);
  if ((puVar8 != (undefined1 *)0x0) &&
     (puVar7 = puVar8 + (*(ushort *)(param_1 + 0x1a) - 4), puVar8 < puVar7)) {
    uVar1 = puVar8[1];
    while( true ) {
      if (CONCAT11(uVar1,*puVar8) == 0x7075) {
        *(undefined4 *)(param_1 + 0x4c) = 0;
        if (1 < (byte)puVar8[4]) {
          FUN_000194cc("Unicode Path Extra Field version > 1 - skipping",
                       *(undefined4 *)(param_1 + 0x48));
          return;
        }
        pcVar9 = *(char **)(param_1 + 0x40);
        iVar3 = *(int *)(puVar8 + 5);
        uVar1 = puVar8[2];
        sVar4 = strlen(pcVar9);
        uVar2 = puVar8[3];
        pcVar5 = malloc(sVar4 + 1);
        if (pcVar5 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_000187c0(4,"write Unicode");
        }
        pcVar9 = stpcpy(pcVar5,pcVar9);
        iVar6 = FUN_0002ac68(0,pcVar5,(int)pcVar9 - (int)pcVar5);
        free(pcVar5);
        if (iVar3 == iVar6) {
          __n = CONCAT11(uVar2,uVar1) - 5 & 0xffff;
          if (__n == 0) {
            pcVar5 = malloc(*(ushort *)(param_1 + 0x18) + 1);
            if (pcVar5 == (char *)0x0) {
              return;
            }
            strcpy(pcVar5,*(char **)(param_1 + 0x30));
          }
          else {
            pcVar5 = malloc(__n + 1);
            if (pcVar5 == (char *)0x0) {
              return;
            }
            strncpy(pcVar5,puVar8 + 9,__n);
            pcVar5[__n] = '\0';
          }
          *(char **)(param_1 + 0x4c) = pcVar5;
          return;
        }
        if (DAT_00049ad8 != 1) {
          if (DAT_00049ad8 != 0) {
            return;
          }
          sprintf((char *)&DAT_00066dcc,"Unicode does not match path:  %s\n",
                  *(undefined4 *)(param_1 + 0x48));
          sVar4 = strlen((char *)&DAT_00066dcc);
          memcpy((void *)((int)&DAT_00066dcc + sVar4),
                 "                     Likely entry name changed but Unicode not updated\n",0x48);
          memcpy((void *)((int)&DAT_00066e10 + sVar4 + 3),
                 "                     Use -UN=i to ignore errors or n for no Unicode paths",0x4a);
          FUN_000194cc(&DAT_00066dcc,&DAT_000369fc);
                    /* WARNING: Subroutine does not return */
          FUN_000187c0(3,"Unicode path error");
        }
        FUN_000194cc("Unicode does not match path - ignoring Unicode: ",
                     *(undefined4 *)(param_1 + 0x48));
        return;
      }
      puVar8 = puVar8 + *(ushort *)(puVar8 + 2) + 4;
      if (puVar7 <= puVar8) break;
      uVar1 = puVar8[1];
    }
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  return;
}



/* ===== FUN_0001a568 @ 0001a568 size=564 ===== */

void FUN_0001a568(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  size_t sVar4;
  char *pcVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  uint __n;
  char *pcVar9;
  
  puVar8 = *(undefined1 **)(param_1 + 0x38);
  if ((puVar8 != (undefined1 *)0x0) &&
     (puVar7 = puVar8 + (*(ushort *)(param_1 + 0x1c) - 4), puVar8 < puVar7)) {
    uVar1 = puVar8[1];
    while( true ) {
      if (CONCAT11(uVar1,*puVar8) == 0x7075) {
        *(undefined4 *)(param_1 + 0x4c) = 0;
        if (1 < (byte)puVar8[4]) {
          FUN_000194cc("Unicode Path Extra Field version > 1 - skipping",
                       *(undefined4 *)(param_1 + 0x48));
          return;
        }
        pcVar9 = *(char **)(param_1 + 0x40);
        iVar3 = *(int *)(puVar8 + 5);
        uVar1 = puVar8[2];
        sVar4 = strlen(pcVar9);
        uVar2 = puVar8[3];
        pcVar5 = malloc(sVar4 + 1);
        if (pcVar5 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_000187c0(4,"write Unicode");
        }
        pcVar9 = stpcpy(pcVar5,pcVar9);
        iVar6 = FUN_0002ac68(0,pcVar5,(int)pcVar9 - (int)pcVar5);
        free(pcVar5);
        if (iVar3 == iVar6) {
          __n = CONCAT11(uVar2,uVar1) - 5 & 0xffff;
          if (__n == 0) {
            pcVar5 = malloc(*(ushort *)(param_1 + 0x18) + 1);
            if (pcVar5 == (char *)0x0) {
              return;
            }
            strcpy(pcVar5,*(char **)(param_1 + 0x30));
          }
          else {
            pcVar5 = malloc(__n + 1);
            if (pcVar5 == (char *)0x0) {
              return;
            }
            strncpy(pcVar5,puVar8 + 9,__n);
            pcVar5[__n] = '\0';
          }
          *(char **)(param_1 + 0x4c) = pcVar5;
          return;
        }
        printf("unicode_mismatch = %d\n",DAT_00049ad8);
        if (DAT_00049ad8 == 1) {
          FUN_000194cc("Unicode does not match path - ignoring Unicode: ",
                       *(undefined4 *)(param_1 + 0x48));
          return;
        }
        if (DAT_00049ad8 != 0) {
          return;
        }
        sprintf((char *)&DAT_00066dcc,"Unicode does not match path:  %s\n",
                *(undefined4 *)(param_1 + 0x48));
        sVar4 = strlen((char *)&DAT_00066dcc);
        memcpy((void *)((int)&DAT_00066dcc + sVar4),
               "                     Likely entry name changed but Unicode not updated\n",0x48);
        memcpy((void *)((int)&DAT_00066e10 + sVar4 + 3),
               "                     Use -UN=i to ignore errors or n for no Unicode paths",0x4a);
        FUN_000194cc(&DAT_00066dcc,&DAT_000369fc);
                    /* WARNING: Subroutine does not return */
        FUN_000187c0(3,"Unicode path error");
      }
      puVar8 = puVar8 + *(ushort *)(puVar8 + 2) + 4;
      if (puVar7 <= puVar8) break;
      uVar1 = puVar8[1];
    }
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  return;
}



/* ===== FUN_0001a7a4 @ 0001a7a4 size=164 ===== */

undefined4 FUN_0001a7a4(undefined4 param_1)

{
  undefined4 *puVar1;
  
  if (DAT_000681c0 != 0) {
    puVar1 = (undefined4 *)FUN_000286d0(param_1,DAT_00066dc0,DAT_000681c0,&LAB_000198a4);
    if (puVar1 != (undefined4 *)0x0) {
      return *puVar1;
    }
    if (((DAT_00049ad8 != 3) && (DAT_0004bc58 != 2)) &&
       (puVar1 = (undefined4 *)FUN_000286d0(param_1,DAT_00066dac,DAT_000681c0,&LAB_00019890),
       puVar1 != (undefined4 *)0x0)) {
      return *puVar1;
    }
  }
  return 0;
}



/* ===== FUN_0001a848 @ 0001a848 size=144 ===== */

char * FUN_0001a848(char *param_1)

{
  char cVar1;
  size_t sVar2;
  char *__s;
  char *pcVar3;
  char *pcVar4;
  
  sVar2 = strlen(param_1);
  __s = malloc(sVar2 + 5);
  if ((__s != (char *)0x0) && (memcpy(__s,param_1,sVar2 + 1), DAT_0004bc50 == 0)) {
    pcVar3 = strrchr(__s,0x2f);
    pcVar4 = __s;
    if (pcVar3 != (char *)0x0) {
      pcVar4 = pcVar3 + 1;
    }
    pcVar4 = strrchr(pcVar4,0x2e);
    cVar1 = s_zip_reallybad_zip__FF__v___out_f_00032c38[0x2c];
    if (pcVar4 == (char *)0x0) {
      *(undefined4 *)(__s + sVar2) = s_zip_reallybad_zip__FF__v___out_f_00032c38._40_4_;
      __s[sVar2 + 4] = cVar1;
    }
  }
  return __s;
}



/* ===== FUN_0001a940 @ 0001a940 size=504 ===== */

void * FUN_0001a940(short *param_1,int param_2,short *param_3,size_t param_4,uint *param_5)

{
  short sVar1;
  ushort uVar2;
  void *pvVar3;
  void *pvVar4;
  short *psVar5;
  short *psVar6;
  uint uVar7;
  uint uVar8;
  short *psVar9;
  
  if (param_1 == (short *)0x0) {
    if (param_4 == 0 || param_3 == (short *)0x0) {
      *param_5 = 0;
      return (void *)0x0;
    }
    pvVar3 = malloc(param_4);
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_000187c0(4,"extra field copy");
    }
    memcpy(pvVar3,param_3,param_4);
    *param_5 = param_4 & 0xffff;
    return pvVar3;
  }
  pvVar3 = malloc(0xffff);
  if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_000187c0(4,"extra field copy");
  }
  psVar5 = (short *)((int)param_1 + param_2);
  if (param_1 < psVar5) {
    uVar8 = 0;
    psVar9 = (short *)((int)param_3 + (param_4 - 4));
    do {
      uVar7 = (uint)(ushort)param_1[1];
      if ((param_3 == (short *)0x0) || (psVar9 <= param_3)) {
LAB_0001aa18:
        memcpy((void *)((int)pvVar3 + uVar8),param_1,uVar7 + 4);
        uVar8 = uVar7 + (uVar8 + 4 & 0xffff) & 0xffff;
      }
      else {
        uVar2 = param_3[1];
        sVar1 = *param_3;
        psVar6 = param_3;
        while (*param_1 != sVar1) {
          psVar6 = (short *)((int)psVar6 + uVar2 + 4);
          if (psVar9 <= psVar6) goto LAB_0001aa18;
          uVar2 = psVar6[1];
          sVar1 = *psVar6;
        }
      }
      param_1 = (short *)((int)param_1 + uVar7 + 4);
    } while (param_1 < psVar5);
    pvVar4 = (void *)((int)pvVar3 + uVar8);
  }
  else {
    uVar8 = 0;
    pvVar4 = pvVar3;
  }
  uVar8 = uVar8 + param_4 & 0xffff;
  memcpy(pvVar4,param_3,param_4);
  pvVar4 = malloc(uVar8);
  if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_000187c0(4,"extra field copy");
  }
  memcpy(pvVar4,pvVar3,uVar8);
  free(pvVar3);
  *param_5 = uVar8;
  return pvVar4;
}



/* ===== FUN_0001ab44 @ 0001ab44 size=136 ===== */

long FUN_0001ab44(FILE *param_1)

{
  int iVar1;
  long __off;
  undefined1 auStack_14 [4];
  
  iVar1 = fseek(param_1,0,2);
  if (((iVar1 == 0) && (__off = ftell(param_1), -1 < __off)) &&
     (iVar1 = fseek(param_1,__off,0), iVar1 == 0)) {
    fread(auStack_14,1,1,param_1);
    iVar1 = feof(param_1);
    if (iVar1 != 0) goto LAB_0001abb0;
  }
  __off = -1;
LAB_0001abb0:
  rewind(param_1);
  return __off;
}



/* ===== FUN_0001abcc @ 0001abcc size=1112 ===== */

undefined4 FUN_0001abcc(undefined4 *param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  char *pcVar3;
  size_t sVar4;
  int *piVar5;
  int iVar6;
  void *pvVar7;
  void *__ptr;
  void *pvVar8;
  int iVar9;
  undefined8 uVar10;
  char local_44;
  char local_43;
  undefined2 local_42;
  undefined1 local_40;
  undefined1 local_3f;
  undefined4 local_3e;
  undefined4 local_3a;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  undefined1 local_2b;
  
  iVar9 = *(int *)(param_2 + 0x20);
  if ((DAT_0004bb6c != iVar9) && (DAT_0004bb84 != (FILE *)0x0)) {
    fclose(DAT_0004bb84);
    DAT_0004bb84 = (FILE *)0x0;
  }
  DAT_0004bb6c = iVar9;
  pcVar3 = (char *)FUN_00023ad0(DAT_0004bb80,iVar9);
  if (DAT_0004bb84 == (FILE *)0x0) {
    while (DAT_0004bb84 = fopen(pcVar3,"r"), DAT_0004bb84 == (FILE *)0x0) {
      iVar6 = FUN_00023bd4(iVar9);
      if (iVar6 != 0) {
        return 9;
      }
      free(pcVar3);
      pcVar3 = (char *)FUN_00023ad0(DAT_0004bb80,iVar9);
    }
  }
  iVar9 = fseek(DAT_0004bb84,*(long *)(param_2 + 0x28),0);
  if (iVar9 != 0) {
    fclose(DAT_0004bb84);
    DAT_0004bb84 = (FILE *)0x0;
    piVar5 = __errno_location();
    pcVar3 = strerror(*piVar5);
    FUN_000194cc("reading archive fseek: ",pcVar3);
    return 0xb;
  }
  sVar4 = fread(&local_44,1,4,DAT_0004bb84);
  if ((((sVar4 != 4) || (local_44 != 'P')) || (local_43 != 'K')) ||
     (((char)local_42 != '\x03' || (local_42._1_1_ != '\x04')))) {
    fclose(DAT_0004bb84);
    DAT_0004bb84 = (FILE *)0x0;
    FUN_000194cc("Did not find entry for ",*(undefined4 *)(param_2 + 0x40));
    return 3;
  }
  sVar4 = fread(&local_44,0x1a,1,DAT_0004bb84);
  if (sVar4 == 1) {
    pvVar7 = malloc(0x6c);
    if (pvVar7 == (void *)0x0) {
      FUN_000194cc("reading entry",&DAT_000369fc);
      fclose(DAT_0004bb84);
      return 4;
    }
    *(undefined4 *)((int)pvVar7 + 8) = local_3e;
    *(undefined4 *)((int)pvVar7 + 0xc) = local_3a;
    uVar1 = CONCAT11(local_2d,local_2e);
    *(ushort *)((int)pvVar7 + 2) = CONCAT11(local_43,local_44);
    *(undefined4 *)((int)pvVar7 + 0x34) = 0;
    *(undefined4 *)((int)pvVar7 + 0x30) = 0;
    uVar2 = CONCAT11(local_2b,local_2c);
    *(ushort *)((int)pvVar7 + 0x18) = uVar1;
    *(undefined2 *)((int)pvVar7 + 0x26) = local_42;
    *(ushort *)((int)pvVar7 + 6) = CONCAT11(local_3f,local_40);
    *(ushort *)((int)pvVar7 + 0x1a) = uVar2;
    *(undefined4 *)((int)pvVar7 + 0x44) = 0;
    *(undefined4 *)((int)pvVar7 + 0x48) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    *(undefined4 *)((int)pvVar7 + 0x4c) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    *(undefined4 *)((int)pvVar7 + 0x50) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    *(undefined4 *)((int)pvVar7 + 0x54) = 0;
    __ptr = malloc(uVar1 + 1);
    *(void **)((int)pvVar7 + 0x40) = __ptr;
    if (__ptr != (void *)0x0) {
      if (uVar2 != 0) {
        pvVar8 = malloc((uint)uVar2);
        *(void **)((int)pvVar7 + 0x34) = pvVar8;
        if (pvVar8 == (void *)0x0) {
          return 4;
        }
      }
      sVar4 = fread(__ptr,(uint)uVar1,1,DAT_0004bb84);
      if ((sVar4 != 1) ||
         ((*(ushort *)((int)pvVar7 + 0x1a) != 0 &&
          (sVar4 = fread(*(void **)((int)pvVar7 + 0x34),(uint)*(ushort *)((int)pvVar7 + 0x1a),1,
                         DAT_0004bb84), sVar4 != 1)))) {
        iVar9 = ferror(DAT_0004bb84);
        goto joined_r0x0001acf8;
      }
      *(undefined1 *)(*(int *)((int)pvVar7 + 0x40) + (uint)*(ushort *)(param_2 + 0x18)) = 0;
      if (DAT_00049ad8 != 3) {
        FUN_0001a33c(pvVar7);
      }
      pcVar3 = malloc(*(ushort *)((int)pvVar7 + 0x18) + 1);
      *(char **)((int)pvVar7 + 0x30) = pcVar3;
      if (pcVar3 != (char *)0x0) {
        strcpy(pcVar3,*(char **)((int)pvVar7 + 0x40));
        if (*(short *)((int)pvVar7 + 2) != *(short *)(param_2 + 2)) {
          sprintf((char *)&DAT_00066dcc,"Local Version Needed (%d) does not match CD (%d): ");
          FUN_000194cc(&DAT_00066dcc,*(undefined4 *)(param_2 + 0x40));
        }
        if (*(short *)((int)pvVar7 + 0x26) != *(short *)(param_2 + 4)) {
          FUN_000194cc("Local Entry Flag does not match CD: ",*(undefined4 *)(param_2 + 0x40));
        }
        if (*(int *)((int)pvVar7 + 0xc) != *(int *)(param_2 + 0xc)) {
          FUN_000194cc("Local Entry CRC does not match CD: ",*(undefined4 *)(param_2 + 0x40));
        }
        uVar10 = *(undefined8 *)(param_2 + 0x10);
        *param_1 = pvVar7;
        *(undefined8 *)((int)pvVar7 + 0x10) = uVar10;
        return 0;
      }
    }
    return 4;
  }
  iVar9 = ferror(DAT_0004bb84);
  piVar5 = __errno_location();
  pcVar3 = strerror(*piVar5);
  FUN_000194cc("reading local entry: ",pcVar3);
  fclose(DAT_0004bb84);
joined_r0x0001acf8:
  if (iVar9 == 0) {
    return 2;
  }
  return 0xb;
}



/* ===== FUN_0001b024 @ 0001b024 size=2284 ===== */

undefined4 FUN_0001b024(int param_1,int param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  short sVar3;
  bool bVar4;
  uint uVar5;
  size_t sVar6;
  undefined4 uVar7;
  void *pvVar8;
  undefined1 *__src;
  char *pcVar9;
  uint __n;
  short *__src_00;
  char *pcVar10;
  uint uVar11;
  short *psVar12;
  char *pcVar13;
  undefined2 uVar14;
  uint uVar15;
  short *psVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  size_t *psVar19;
  void *local_34;
  uint local_30;
  size_t local_2c [2];
  
  pcVar13 = *(char **)(param_1 + 0x4c);
  uVar14 = *(undefined2 *)(param_1 + 0x18);
  uVar1 = *(ushort *)(param_1 + 4);
  local_34 = (void *)0x0;
  local_30 = 0;
  local_2c[0] = 0;
  if (pcVar13 == (char *)0x0) {
    *(ushort *)(param_1 + 4) = uVar1 & 0xf7ff;
    *(ushort *)(param_1 + 0x26) = *(ushort *)(param_1 + 0x26) & 0xf7ff;
    bVar4 = false;
  }
  else {
    if (DAT_0004bbac == 0 && DAT_0004bc3c == 0) {
      sVar6 = strlen(pcVar13);
      if ((uVar1 & 0x800) == 0) {
        uVar11 = (uint)*(ushort *)(param_1 + 0x1a);
        uVar15 = (sVar6 & 0xffff) + 9 & 0xffff;
        if ((uVar11 == 0) || (__src_00 = *(short **)(param_1 + 0x34), __src_00 == (short *)0x0)) {
          psVar12 = malloc(uVar15);
          *(short **)(param_1 + 0x34) = psVar12;
          if (psVar12 == (short *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_000187c0(4,"UTF-8 Path local extra field");
          }
LAB_0001b554:
          *(short *)(param_1 + 0x1a) = (short)uVar15;
        }
        else {
          psVar16 = (short *)((int)__src_00 + (uVar11 - 4));
          if (psVar16 <= __src_00) {
LAB_0001b380:
            pvVar8 = malloc(uVar15 + uVar11);
            if (pvVar8 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_000187c0(4,"UTF-8 Path Extra Field");
            }
            memmove(pvVar8,__src_00,uVar11);
            free(__src_00);
            *(void **)(param_1 + 0x34) = pvVar8;
            uVar15 = uVar15 + *(ushort *)(param_1 + 0x1a);
            psVar12 = (short *)((int)pvVar8 + (uint)*(ushort *)(param_1 + 0x1a));
            goto LAB_0001b554;
          }
          uVar1 = __src_00[1];
          sVar3 = *__src_00;
          psVar12 = __src_00;
          while (uVar5 = (uint)uVar1, sVar3 != 0x7075) {
            psVar12 = (short *)((int)psVar12 + uVar5 + 4);
            if (psVar16 <= psVar12) goto LAB_0001b380;
            uVar1 = psVar12[1];
            sVar3 = *psVar12;
          }
          if (uVar5 != uVar15 - 4) {
            uVar15 = (uVar15 + (uVar11 - 4)) - uVar5;
            pvVar8 = malloc(uVar15 & 0xffff);
            if (pvVar8 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_000187c0(4,"UTF-8 Path Extra Field");
            }
            __n = (int)psVar12 - (int)__src_00 & 0xffff;
            memcpy(pvVar8,__src_00,__n);
            __src = (undefined1 *)((int)psVar12 + uVar5 + 4);
            uVar11 = (uVar11 - uVar5) - __n & 0xffff;
            psVar12 = (short *)((int)((int)pvVar8 + __n) + uVar11);
            memcpy((void *)((int)pvVar8 + __n),__src,uVar11);
            *(short *)(param_1 + 0x1a) = (short)uVar15;
            free(__src_00);
            *(void **)(param_1 + 0x34) = pvVar8;
          }
        }
        pcVar13 = *(char **)(param_1 + 0x40);
        uVar11 = (sVar6 & 0xffff) + 5 & 0xffff;
        sVar6 = strlen(pcVar13);
        uVar7 = FUN_0002ac68(0,pcVar13,sVar6);
        *(char *)(psVar12 + 1) = (char)uVar11;
        *(undefined1 *)((int)psVar12 + 1) = 0x70;
        *(char *)((int)psVar12 + 3) = (char)(uVar11 >> 8);
        *(char *)((int)psVar12 + 5) = (char)uVar7;
        *(char *)((int)psVar12 + 7) = (char)((uint)uVar7 >> 0x10);
        *(char *)(psVar12 + 3) = (char)((uint)uVar7 >> 8);
        *(char *)(psVar12 + 4) = (char)((uint)uVar7 >> 0x18);
        *(undefined1 *)psVar12 = 0x75;
        *(undefined1 *)(psVar12 + 2) = 1;
        pcVar13 = *(char **)(param_1 + 0x4c);
        bVar4 = false;
        if ((pcVar13 != (char *)0x0) && (sVar6 = strlen(pcVar13), sVar6 != 0)) {
          pcVar9 = (char *)((int)psVar12 + 9);
          if (sVar6 - 1 < 0xf || pcVar13 < (char *)((int)psVar12 + 0x19) && pcVar9 < pcVar13 + 0x10)
          {
            pcVar13 = pcVar13 + -1;
            psVar12 = psVar12 + 4;
            pcVar9 = pcVar13 + sVar6;
            do {
              pcVar13 = pcVar13 + 1;
              psVar12 = (short *)((int)psVar12 + 1);
              *(char *)psVar12 = *pcVar13;
            } while (pcVar13 != pcVar9);
          }
          else {
            pcVar10 = pcVar13;
            do {
              uVar17 = *(undefined8 *)pcVar10;
              uVar18 = *(undefined8 *)(pcVar10 + 8);
              pcVar10 = pcVar10 + 0x10;
              *(undefined8 *)pcVar9 = uVar17;
              *(undefined8 *)(pcVar9 + 8) = uVar18;
              pcVar9 = pcVar9 + 0x10;
            } while (pcVar10 != pcVar13 + (sVar6 & 0xfffffff0));
            uVar11 = sVar6 & 0xfffffff0;
            if (sVar6 != uVar11) {
              *(char *)((int)psVar12 + uVar11 + 9) = pcVar13[uVar11];
              if ((int)(uVar11 + 1) < (int)sVar6) {
                *(char *)((int)psVar12 + uVar11 + 10) = pcVar13[uVar11 + 1];
                if ((int)(uVar11 + 2) < (int)sVar6) {
                  *(char *)((int)psVar12 + uVar11 + 0xb) = pcVar13[uVar11 + 2];
                  if ((int)(uVar11 + 3) < (int)sVar6) {
                    *(char *)((int)psVar12 + uVar11 + 0xc) = pcVar13[uVar11 + 3];
                    if ((int)(uVar11 + 4) < (int)sVar6) {
                      *(char *)((int)psVar12 + uVar11 + 0xd) = pcVar13[uVar11 + 4];
                      if ((int)(uVar11 + 5) < (int)sVar6) {
                        *(char *)((int)psVar12 + uVar11 + 0xe) = pcVar13[uVar11 + 5];
                        if ((int)(uVar11 + 6) < (int)sVar6) {
                          *(char *)((int)psVar12 + uVar11 + 0xf) = pcVar13[uVar11 + 6];
                          if ((int)(uVar11 + 7) < (int)sVar6) {
                            *(char *)((int)psVar12 + uVar11 + 0x10) = pcVar13[uVar11 + 7];
                            if ((int)(uVar11 + 8) < (int)sVar6) {
                              *(char *)((int)psVar12 + uVar11 + 0x11) = pcVar13[uVar11 + 8];
                              if ((int)(uVar11 + 9) < (int)sVar6) {
                                *(char *)((int)psVar12 + uVar11 + 0x12) = pcVar13[uVar11 + 9];
                                if ((int)(uVar11 + 10) < (int)sVar6) {
                                  *(char *)((int)psVar12 + uVar11 + 0x13) = pcVar13[uVar11 + 10];
                                  if ((int)(uVar11 + 0xb) < (int)sVar6) {
                                    *(char *)((int)psVar12 + uVar11 + 0x14) = pcVar13[uVar11 + 0xb];
                                    if ((int)(uVar11 + 0xc) < (int)sVar6) {
                                      *(char *)((int)psVar12 + uVar11 + 0x15) =
                                           pcVar13[uVar11 + 0xc];
                                      if ((int)(uVar11 + 0xd) < (int)sVar6) {
                                        *(char *)((int)psVar12 + uVar11 + 0x16) =
                                             pcVar13[uVar11 + 0xd];
                                        if ((int)(uVar11 + 0xe) < (int)sVar6) {
                                          *(char *)((int)psVar12 + uVar11 + 0x17) =
                                               pcVar13[uVar11 + 0xe];
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
        goto LAB_0001b09c;
      }
    }
    else {
      *(ushort *)(param_1 + 4) = uVar1 | 0x800;
      *(ushort *)(param_1 + 0x26) = *(ushort *)(param_1 + 0x26) | 0x800;
    }
    bVar4 = true;
    sVar6 = strlen(pcVar13);
    uVar14 = (undefined2)sVar6;
  }
LAB_0001b09c:
  FUN_00019d0c(0x4034b50,&local_34,&local_30,local_2c);
  uVar2 = *(undefined2 *)(param_1 + 2);
  if (local_34 == (void *)0x0) {
    local_2c[0] = 0x400;
    local_34 = malloc(0x400);
joined_r0x0001b82c:
    if (local_34 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_000187c0(4,"append_ushort_to_mem");
    }
  }
  else if (local_2c[0] - 3 < local_30) {
    local_2c[0] = local_2c[0] + 0x400;
    local_34 = realloc(local_34,local_2c[0]);
    goto joined_r0x0001b82c;
  }
  *(char *)((int)local_34 + local_30) = (char)uVar2;
  *(char *)((int)local_34 + local_30 + 1) = (char)((ushort)uVar2 >> 8);
  uVar2 = *(undefined2 *)(param_1 + 0x26);
  uVar11 = local_30 + 2;
  local_30 = uVar11;
  if (local_34 == (void *)0x0) {
    local_2c[0] = 0x400;
    local_34 = malloc(0x400);
joined_r0x0001b76c:
    if (local_34 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_000187c0(4,"append_ushort_to_mem");
    }
  }
  else if (local_2c[0] - 3 < uVar11) {
    local_2c[0] = local_2c[0] + 0x400;
    local_34 = realloc(local_34,local_2c[0]);
    uVar11 = local_30;
    goto joined_r0x0001b76c;
  }
  *(char *)((int)local_34 + uVar11) = (char)uVar2;
  *(char *)((int)local_34 + uVar11 + 1) = (char)((ushort)uVar2 >> 8);
  uVar2 = *(undefined2 *)(param_1 + 6);
  uVar11 = local_30 + 2;
  local_30 = uVar11;
  if (local_34 == (void *)0x0) {
    local_2c[0] = 0x400;
    local_34 = malloc(0x400);
joined_r0x0001b7fc:
    if (local_34 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_000187c0(4,"append_ushort_to_mem");
    }
  }
  else if (local_2c[0] - 3 < uVar11) {
    local_2c[0] = local_2c[0] + 0x400;
    local_34 = realloc(local_34,local_2c[0]);
    uVar11 = local_30;
    goto joined_r0x0001b7fc;
  }
  *(char *)((int)local_34 + uVar11) = (char)uVar2;
  *(char *)((int)local_34 + uVar11 + 1) = (char)((ushort)uVar2 >> 8);
  local_30 = local_30 + 2;
  FUN_00019d0c(*(undefined4 *)(param_1 + 8),&local_34,&local_30,local_2c);
  FUN_00019d0c(*(undefined4 *)(param_1 + 0xc),&local_34,&local_30,local_2c);
  FUN_00019d0c(*(undefined4 *)(param_1 + 0x10),&local_34,&local_30,local_2c);
  FUN_00019d0c(*(undefined4 *)(param_1 + 0x14),&local_34,&local_30,local_2c);
  if (local_34 == (void *)0x0) {
    local_2c[0] = 0x400;
    local_34 = malloc(0x400);
joined_r0x0001b79c:
    if (local_34 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_000187c0(4,"append_ushort_to_mem");
    }
  }
  else if (local_2c[0] - 3 < local_30) {
    local_2c[0] = local_2c[0] + 0x400;
    local_34 = realloc(local_34,local_2c[0]);
    goto joined_r0x0001b79c;
  }
  *(char *)((int)local_34 + local_30) = (char)uVar14;
  *(char *)((int)local_34 + local_30 + 1) = (char)((ushort)uVar14 >> 8);
  uVar14 = *(undefined2 *)(param_1 + 0x1a);
  uVar11 = local_30 + 2;
  local_30 = uVar11;
  if (local_34 == (void *)0x0) {
    local_2c[0] = 0x400;
    local_34 = malloc(0x400);
joined_r0x0001b7cc:
    if (local_34 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_000187c0(4,"append_ushort_to_mem");
    }
  }
  else if (local_2c[0] - 3 < uVar11) {
    local_2c[0] = local_2c[0] + 0x400;
    local_34 = realloc(local_34,local_2c[0]);
    uVar11 = local_30;
    goto joined_r0x0001b7cc;
  }
  *(char *)((int)local_34 + uVar11) = (char)uVar14;
  *(char *)((int)local_34 + uVar11 + 1) = (char)((ushort)uVar14 >> 8);
  if (bVar4) {
    uVar7 = *(undefined4 *)(param_1 + 0x4c);
  }
  else {
    uVar7 = *(undefined4 *)(param_1 + 0x40);
  }
  local_30 = local_30 + 2;
  psVar19 = local_2c;
  FUN_00019dbc(uVar7);
  if (*(short *)(param_1 + 0x1a) != 0) {
    psVar19 = local_2c;
    FUN_00019dbc(*(undefined4 *)(param_1 + 0x34),*(short *)(param_1 + 0x1a),&local_34,&local_30,
                 psVar19);
  }
  if (param_2 == 1) {
    if (DAT_0004bb30 == 1) {
      sVar6 = fwrite(local_34,1,local_30,DAT_0004bb40);
      if (sVar6 != local_30) goto LAB_0001b3e8;
      if (DAT_0004bb60 != DAT_0004bb5c) {
        FUN_00024510(DAT_0004bb60,DAT_0004bb40,DAT_0004bb44);
        DAT_0004bb40 = (FILE *)0x0;
        free(DAT_0004bb44);
      }
    }
    else {
      sVar6 = fwrite(local_34,1,local_30,DAT_0004bb88);
      if (sVar6 != local_30) {
LAB_0001b3e8:
        free(local_34);
        return 10;
      }
    }
  }
  else {
    sVar6 = FUN_00024580(local_34,1,local_30,1,psVar19);
    if (sVar6 != local_30) goto LAB_0001b3e8;
  }
  free(local_34);
  return 0;
}



/* ===== FUN_0001b95c @ 0001b95c size=136 ===== */

undefined4 FUN_0001b95c(int param_1)

{
  undefined4 *__ptr;
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  __ptr = malloc(0x400);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_000187c0(4,"append_ulong_to_mem");
  }
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar4 = *(undefined4 *)(param_1 + 0x14);
  *__ptr = 0x8074b50;
  __ptr[1] = uVar3;
  __ptr[2] = uVar1;
  __ptr[3] = uVar4;
  iVar2 = FUN_00024580(__ptr,1,0x10,3);
  if (iVar2 == 0x10) {
    free(__ptr);
    return 0;
  }
  free(__ptr);
  return 10;
}



/* ===== FUN_0001b9e8 @ 0001b9e8 size=2680 ===== */

undefined4 FUN_0001b9e8(undefined2 *param_1)

{
  ushort uVar1;
  undefined2 uVar2;
  short sVar3;
  bool bVar4;
  uint uVar5;
  char *pcVar6;
  size_t sVar7;
  void *pvVar8;
  undefined1 *__src;
  char *pcVar9;
  uint __n;
  short sVar10;
  uint uVar11;
  char *pcVar12;
  short *psVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  short *__src_00;
  uint uVar18;
  short *psVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  void *local_34;
  uint local_30;
  size_t local_2c [2];
  
  pcVar6 = *(char **)(param_1 + 0x26);
  uVar14 = (uint)(ushort)param_1[0xc];
  uVar1 = param_1[2];
  local_34 = (void *)0x0;
  local_30 = 0;
  local_2c[0] = 0;
  if (pcVar6 == (char *)0x0) {
    param_1[2] = uVar1 & 0xf7ff;
    param_1[0x13] = param_1[0x13] & 0xf7ff;
    bVar4 = false;
  }
  else {
    if (DAT_0004bbac == 0) {
      sVar7 = strlen(pcVar6);
      uVar15 = sVar7 & 0xffff;
      if ((uVar1 & 0x800) == 0) {
        uVar18 = (uint)(ushort)param_1[0xe];
        uVar11 = uVar15 + 9 & 0xffff;
        sVar10 = (short)(uVar15 + 9);
        if ((uVar18 == 0) || (__src_00 = *(short **)(param_1 + 0x1c), __src_00 == (short *)0x0)) {
          psVar13 = malloc(uVar11);
          *(short **)(param_1 + 0x1c) = psVar13;
          if (psVar13 == (short *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_000187c0(4,"UTF-8 Path cen extra field");
          }
LAB_0001c004:
          param_1[0xe] = sVar10;
        }
        else {
          psVar19 = (short *)((int)__src_00 + (uVar18 - 4));
          if (psVar19 <= __src_00) {
LAB_0001be1c:
            pvVar8 = malloc(uVar11 + uVar18);
            if (pvVar8 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_000187c0(4,"UTF-8 Path Extra Field");
            }
            memmove(pvVar8,__src_00,uVar18);
            free(__src_00);
            *(void **)(param_1 + 0x1c) = pvVar8;
            psVar13 = (short *)((int)pvVar8 + (uint)(ushort)param_1[0xe]);
            sVar10 = sVar10 + param_1[0xe];
            goto LAB_0001c004;
          }
          uVar1 = __src_00[1];
          sVar3 = *__src_00;
          psVar13 = __src_00;
          while (uVar5 = (uint)uVar1, sVar3 != 0x7075) {
            psVar13 = (short *)((int)psVar13 + uVar5 + 4);
            if (psVar19 <= psVar13) goto LAB_0001be1c;
            uVar1 = psVar13[1];
            sVar3 = *psVar13;
          }
          if (uVar5 != uVar11 - 4) {
            uVar11 = (uVar11 + (uVar18 - 4)) - uVar5;
            pvVar8 = malloc(uVar11 & 0xffff);
            if (pvVar8 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_000187c0(4,"UTF-8 Path Extra Field");
            }
            __n = (int)psVar13 - (int)__src_00 & 0xffff;
            memcpy(pvVar8,__src_00,__n);
            __src = (undefined1 *)((int)psVar13 + uVar5 + 4);
            uVar18 = (uVar18 - uVar5) - __n & 0xffff;
            psVar13 = (short *)((int)((int)pvVar8 + __n) + uVar18);
            memcpy((void *)((int)pvVar8 + __n),__src,uVar18);
            param_1[0xe] = (short)uVar11;
            free(__src_00);
            *(void **)(param_1 + 0x1c) = pvVar8;
          }
        }
        pcVar6 = *(char **)(param_1 + 0x20);
        uVar15 = uVar15 + 5 & 0xffff;
        sVar7 = strlen(pcVar6);
        uVar16 = FUN_0002ac68(0,pcVar6,sVar7);
        *(char *)(psVar13 + 1) = (char)uVar15;
        *(undefined1 *)((int)psVar13 + 1) = 0x70;
        *(char *)((int)psVar13 + 3) = (char)(uVar15 >> 8);
        *(char *)((int)psVar13 + 5) = (char)uVar16;
        *(char *)((int)psVar13 + 7) = (char)((uint)uVar16 >> 0x10);
        *(char *)(psVar13 + 3) = (char)((uint)uVar16 >> 8);
        *(char *)(psVar13 + 4) = (char)((uint)uVar16 >> 0x18);
        *(undefined1 *)psVar13 = 0x75;
        *(undefined1 *)(psVar13 + 2) = 1;
        pcVar6 = *(char **)(param_1 + 0x26);
        bVar4 = false;
        if ((pcVar6 != (char *)0x0) && (sVar7 = strlen(pcVar6), sVar7 != 0)) {
          pcVar12 = (char *)((int)psVar13 + 9);
          if (sVar7 - 1 < 0xf || pcVar6 < (char *)((int)psVar13 + 0x19) && pcVar12 < pcVar6 + 0x10)
          {
            pcVar6 = pcVar6 + -1;
            psVar13 = psVar13 + 4;
            pcVar12 = pcVar6 + sVar7;
            do {
              pcVar6 = pcVar6 + 1;
              psVar13 = (short *)((int)psVar13 + 1);
              *(char *)psVar13 = *pcVar6;
            } while (pcVar6 != pcVar12);
          }
          else {
            pcVar9 = pcVar6;
            do {
              uVar20 = *(undefined8 *)pcVar9;
              uVar21 = *(undefined8 *)(pcVar9 + 8);
              pcVar9 = pcVar9 + 0x10;
              *(undefined8 *)pcVar12 = uVar20;
              *(undefined8 *)(pcVar12 + 8) = uVar21;
              pcVar12 = pcVar12 + 0x10;
            } while (pcVar9 != pcVar6 + (sVar7 & 0xfffffff0));
            uVar15 = sVar7 & 0xfffffff0;
            if (sVar7 != uVar15) {
              *(char *)((int)psVar13 + uVar15 + 9) = pcVar6[uVar15];
              if ((int)(uVar15 + 1) < (int)sVar7) {
                *(char *)((int)psVar13 + uVar15 + 10) = pcVar6[uVar15 + 1];
                if ((int)(uVar15 + 2) < (int)sVar7) {
                  *(char *)((int)psVar13 + uVar15 + 0xb) = pcVar6[uVar15 + 2];
                  if ((int)(uVar15 + 3) < (int)sVar7) {
                    *(char *)((int)psVar13 + uVar15 + 0xc) = pcVar6[uVar15 + 3];
                    if ((int)(uVar15 + 4) < (int)sVar7) {
                      *(char *)((int)psVar13 + uVar15 + 0xd) = pcVar6[uVar15 + 4];
                      if ((int)(uVar15 + 5) < (int)sVar7) {
                        *(char *)((int)psVar13 + uVar15 + 0xe) = pcVar6[uVar15 + 5];
                        if ((int)(uVar15 + 6) < (int)sVar7) {
                          *(char *)((int)psVar13 + uVar15 + 0xf) = pcVar6[uVar15 + 6];
                          if ((int)(uVar15 + 7) < (int)sVar7) {
                            *(char *)((int)psVar13 + uVar15 + 0x10) = pcVar6[uVar15 + 7];
                            if ((int)(uVar15 + 8) < (int)sVar7) {
                              *(char *)((int)psVar13 + uVar15 + 0x11) = pcVar6[uVar15 + 8];
                              if ((int)(uVar15 + 9) < (int)sVar7) {
                                *(char *)((int)psVar13 + uVar15 + 0x12) = pcVar6[uVar15 + 9];
                                if ((int)(uVar15 + 10) < (int)sVar7) {
                                  *(char *)((int)psVar13 + uVar15 + 0x13) = pcVar6[uVar15 + 10];
                                  if ((int)(uVar15 + 0xb) < (int)sVar7) {
                                    *(char *)((int)psVar13 + uVar15 + 0x14) = pcVar6[uVar15 + 0xb];
                                    if ((int)(uVar15 + 0xc) < (int)sVar7) {
                                      *(char *)((int)psVar13 + uVar15 + 0x15) = pcVar6[uVar15 + 0xc]
                                      ;
                                      if ((int)(uVar15 + 0xd) < (int)sVar7) {
                                        *(char *)((int)psVar13 + uVar15 + 0x16) =
                                             pcVar6[uVar15 + 0xd];
                                        if ((int)(uVar15 + 0xe) < (int)sVar7) {
                                          *(char *)((int)psVar13 + uVar15 + 0x17) =
                                               pcVar6[uVar15 + 0xe];
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
        goto LAB_0001ba40;
      }
    }
    else {
      param_1[2] = uVar1 | 0x800;
      sVar7 = strlen(pcVar6);
      uVar15 = sVar7 & 0xffff;
    }
    bVar4 = true;
    uVar14 = uVar15;
  }
LAB_0001ba40:
  uVar16 = *(undefined4 *)(param_1 + 0x14);
  FUN_00019d0c(0x2014b50,&local_34,&local_30,local_2c);
  uVar2 = *param_1;
  if (local_34 == (void *)0x0) {
    local_2c[0] = 0x400;
    local_34 = malloc(0x400);
joined_r0x0001c39c:
    if (local_34 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_000187c0(4,"append_ushort_to_mem");
    }
  }
  else if (local_2c[0] - 3 < local_30) {
    local_2c[0] = local_2c[0] + 0x400;
    local_34 = realloc(local_34,local_2c[0]);
    goto joined_r0x0001c39c;
  }
  *(char *)((int)local_34 + local_30) = (char)uVar2;
  *(char *)((int)local_34 + local_30 + 1) = (char)((ushort)uVar2 >> 8);
  uVar2 = param_1[1];
  uVar15 = local_30 + 2;
  local_30 = uVar15;
  if (local_34 == (void *)0x0) {
    local_2c[0] = 0x400;
    local_34 = malloc(0x400);
joined_r0x0001c30c:
    if (local_34 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_000187c0(4,"append_ushort_to_mem");
    }
  }
  else if (local_2c[0] - 3 < uVar15) {
    local_2c[0] = local_2c[0] + 0x400;
    local_34 = realloc(local_34,local_2c[0]);
    uVar15 = local_30;
    goto joined_r0x0001c30c;
  }
  *(char *)((int)local_34 + uVar15) = (char)uVar2;
  *(char *)((int)local_34 + uVar15 + 1) = (char)((ushort)uVar2 >> 8);
  uVar2 = param_1[2];
  uVar15 = local_30 + 2;
  local_30 = uVar15;
  if (local_34 == (void *)0x0) {
    local_2c[0] = 0x400;
    local_34 = malloc(0x400);
joined_r0x0001c36c:
    if (local_34 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_000187c0(4,"append_ushort_to_mem");
    }
  }
  else if (local_2c[0] - 3 < uVar15) {
    local_2c[0] = local_2c[0] + 0x400;
    local_34 = realloc(local_34,local_2c[0]);
    uVar15 = local_30;
    goto joined_r0x0001c36c;
  }
  *(char *)((int)local_34 + uVar15) = (char)uVar2;
  *(char *)((int)local_34 + uVar15 + 1) = (char)((ushort)uVar2 >> 8);
  uVar2 = param_1[3];
  uVar15 = local_30 + 2;
  local_30 = uVar15;
  if (local_34 == (void *)0x0) {
    local_2c[0] = 0x400;
    local_34 = malloc(0x400);
joined_r0x0001c2dc:
    if (local_34 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_000187c0(4,"append_ushort_to_mem");
    }
  }
  else if (local_2c[0] - 3 < uVar15) {
    local_2c[0] = local_2c[0] + 0x400;
    local_34 = realloc(local_34,local_2c[0]);
    uVar15 = local_30;
    goto joined_r0x0001c2dc;
  }
  *(char *)((int)local_34 + uVar15) = (char)uVar2;
  *(char *)((int)local_34 + uVar15 + 1) = (char)((ushort)uVar2 >> 8);
  local_30 = local_30 + 2;
  FUN_00019d0c(*(undefined4 *)(param_1 + 4),&local_34,&local_30,local_2c);
  FUN_00019d0c(*(undefined4 *)(param_1 + 6),&local_34,&local_30,local_2c);
  FUN_00019d0c(*(undefined4 *)(param_1 + 8),&local_34,&local_30,local_2c);
  FUN_00019d0c(*(undefined4 *)(param_1 + 10),&local_34,&local_30,local_2c);
  if (local_34 == (void *)0x0) {
    local_2c[0] = 0x400;
    local_34 = malloc(0x400);
joined_r0x0001c33c:
    if (local_34 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_000187c0(4,"append_ushort_to_mem");
    }
  }
  else if (local_2c[0] - 3 < local_30) {
    local_2c[0] = local_2c[0] + 0x400;
    local_34 = realloc(local_34,local_2c[0]);
    goto joined_r0x0001c33c;
  }
  *(char *)((int)local_34 + local_30) = (char)uVar14;
  *(char *)((int)local_34 + local_30 + 1) = (char)(uVar14 >> 8);
  uVar2 = param_1[0xe];
  uVar15 = local_30 + 2;
  local_30 = uVar15;
  if (local_34 == (void *)0x0) {
    local_2c[0] = 0x400;
    local_34 = malloc(0x400);
joined_r0x0001c2ac:
    if (local_34 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_000187c0(4,"append_ushort_to_mem");
    }
  }
  else if (local_2c[0] - 3 < uVar15) {
    local_2c[0] = local_2c[0] + 0x400;
    local_34 = realloc(local_34,local_2c[0]);
    uVar15 = local_30;
    goto joined_r0x0001c2ac;
  }
  *(char *)((int)local_34 + uVar15) = (char)uVar2;
  *(char *)((int)local_34 + uVar15 + 1) = (char)((ushort)uVar2 >> 8);
  uVar2 = param_1[0xf];
  uVar15 = local_30 + 2;
  local_30 = uVar15;
  if (local_34 == (void *)0x0) {
    local_2c[0] = 0x400;
    local_34 = malloc(0x400);
joined_r0x0001c27c:
    if (local_34 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_000187c0(4,"append_ushort_to_mem");
    }
  }
  else if (local_2c[0] - 3 < uVar15) {
    local_2c[0] = local_2c[0] + 0x400;
    local_34 = realloc(local_34,local_2c[0]);
    uVar15 = local_30;
    goto joined_r0x0001c27c;
  }
  *(char *)((int)local_34 + uVar15) = (char)uVar2;
  *(char *)((int)local_34 + uVar15 + 1) = (char)((ushort)uVar2 >> 8);
  uVar17 = *(undefined4 *)(param_1 + 0x10);
  uVar15 = local_30 + 2;
  local_30 = uVar15;
  if (local_34 == (void *)0x0) {
    local_2c[0] = 0x400;
    local_34 = malloc(0x400);
joined_r0x0001c24c:
    if (local_34 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_000187c0(4,"append_ushort_to_mem");
    }
  }
  else if (local_2c[0] - 3 < uVar15) {
    local_2c[0] = local_2c[0] + 0x400;
    local_34 = realloc(local_34,local_2c[0]);
    uVar15 = local_30;
    goto joined_r0x0001c24c;
  }
  *(char *)((int)local_34 + uVar15) = (char)uVar17;
  *(char *)((int)local_34 + uVar15 + 1) = (char)((uint)uVar17 >> 8);
  uVar2 = param_1[0x12];
  uVar15 = local_30 + 2;
  local_30 = uVar15;
  if (local_34 == (void *)0x0) {
    local_2c[0] = 0x400;
    local_34 = malloc(0x400);
  }
  else {
    if (uVar15 <= local_2c[0] - 3) goto LAB_0001bcb8;
    local_2c[0] = local_2c[0] + 0x400;
    local_34 = realloc(local_34,local_2c[0]);
    uVar15 = local_30;
  }
  if (local_34 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_000187c0(4,"append_ushort_to_mem");
  }
LAB_0001bcb8:
  *(char *)((int)local_34 + uVar15) = (char)uVar2;
  *(char *)((int)local_34 + uVar15 + 1) = (char)((ushort)uVar2 >> 8);
  local_30 = local_30 + 2;
  FUN_00019d0c(*(undefined4 *)(param_1 + 0x16),&local_34,&local_30,local_2c);
  FUN_00019d0c(uVar16,&local_34,&local_30,local_2c);
  if (bVar4) {
    uVar16 = *(undefined4 *)(param_1 + 0x26);
  }
  else {
    uVar14 = (uint)(ushort)param_1[0xc];
    uVar16 = *(undefined4 *)(param_1 + 0x20);
  }
  FUN_00019dbc(uVar16,uVar14,&local_34,&local_30,local_2c);
  if (param_1[0xe] != 0) {
    FUN_00019dbc(*(undefined4 *)(param_1 + 0x1c),param_1[0xe],&local_34,&local_30,local_2c);
  }
  if (param_1[0xf] != 0) {
    FUN_00019dbc(*(undefined4 *)(param_1 + 0x1e),param_1[0xf],&local_34,&local_30,local_2c);
  }
  uVar14 = FUN_00024580(local_34,1,local_30,2);
  if (uVar14 == local_30) {
    free(local_34);
    return 0;
  }
  free(local_34);
  return 10;
}



/* ===== FUN_0001c4d4 @ 0001c4d4 size=972 ===== */

undefined4
FUN_0001c4d4(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            )

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 *local_2c;
  uint local_28;
  size_t local_24 [2];
  
  local_24[0] = 0x400;
  local_28 = 0;
  local_2c = malloc(0x400);
  if (local_2c == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_000187c0(4,"append_ulong_to_mem");
  }
  *local_2c = 0x50;
  local_2c[1] = 0x4b;
  local_2c[2] = 5;
  local_2c[3] = 6;
  uVar2 = DAT_0004bb5c;
  uVar3 = local_28 + 4;
  uVar1 = (uint)DAT_0004bb5c >> 8;
  local_28 = uVar3;
  if (local_2c == (undefined1 *)0x0) {
    local_24[0] = 0x400;
    local_2c = malloc(0x400);
joined_r0x0001c7dc:
    if (local_2c == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_000187c0(4,"append_ushort_to_mem");
    }
  }
  else if (local_24[0] - 3 < uVar3) {
    local_24[0] = local_24[0] + 0x400;
    local_2c = realloc(local_2c,local_24[0]);
    uVar3 = local_28;
    goto joined_r0x0001c7dc;
  }
  local_2c[uVar3] = (char)uVar2;
  local_2c[uVar3 + 1] = (char)uVar1;
  uVar2 = DAT_00049acc;
  uVar3 = local_28 + 2;
  uVar1 = (uint)DAT_00049acc >> 8;
  local_28 = uVar3;
  if (local_2c == (undefined1 *)0x0) {
    local_24[0] = 0x400;
    local_2c = malloc(0x400);
joined_r0x0001c80c:
    if (local_2c == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_000187c0(4,"append_ushort_to_mem");
    }
  }
  else if (local_24[0] - 3 < uVar3) {
    local_24[0] = local_24[0] + 0x400;
    local_2c = realloc(local_2c,local_24[0]);
    uVar3 = local_28;
    goto joined_r0x0001c80c;
  }
  local_2c[uVar3] = (char)uVar2;
  local_2c[uVar3 + 1] = (char)uVar1;
  uVar2 = DAT_0004bb54;
  uVar3 = local_28 + 2;
  uVar1 = (uint)DAT_0004bb54 >> 8;
  local_28 = uVar3;
  if (local_2c == (undefined1 *)0x0) {
    local_24[0] = 0x400;
    local_2c = malloc(0x400);
joined_r0x0001c83c:
    if (local_2c == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_000187c0(4,"append_ushort_to_mem");
    }
  }
  else if (local_24[0] - 3 < uVar3) {
    local_24[0] = local_24[0] + 0x400;
    local_2c = realloc(local_2c,local_24[0]);
    uVar3 = local_28;
    goto joined_r0x0001c83c;
  }
  local_2c[uVar3] = (char)uVar2;
  local_2c[uVar3 + 1] = (char)uVar1;
  uVar3 = local_28 + 2;
  local_28 = uVar3;
  if (local_2c == (undefined1 *)0x0) {
    local_24[0] = 0x400;
    local_2c = malloc(0x400);
joined_r0x0001c86c:
    if (local_2c == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_000187c0(4,"append_ushort_to_mem");
    }
  }
  else if (local_24[0] - 3 < uVar3) {
    local_24[0] = local_24[0] + 0x400;
    local_2c = realloc(local_2c,local_24[0]);
    uVar3 = local_28;
    goto joined_r0x0001c86c;
  }
  local_2c[uVar3] = (char)param_1;
  local_2c[uVar3 + 1] = (char)((uint)param_1 >> 8);
  local_28 = local_28 + 2;
  FUN_00019d0c(param_2,&local_2c,&local_28,local_24);
  FUN_00019d0c(DAT_0004bb58,&local_2c,&local_28,local_24);
  if (local_2c == (undefined1 *)0x0) {
    local_24[0] = 0x400;
    local_2c = malloc(0x400);
  }
  else {
    if (local_28 <= local_24[0] - 3) goto LAB_0001c6a0;
    local_24[0] = local_24[0] + 0x400;
    local_2c = realloc(local_2c,local_24[0]);
  }
  if (local_2c == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_000187c0(4,"append_ushort_to_mem");
  }
LAB_0001c6a0:
  local_2c[local_28] = (char)param_4;
  local_2c[local_28 + 1] = (char)((uint)param_4 >> 8);
  local_28 = local_28 + 2;
  if (param_4 != 0) {
    FUN_00019dbc(param_5,param_4,&local_2c,&local_28,local_24);
  }
  uVar3 = FUN_00024580(local_2c,1,local_28,3);
  if (uVar3 != local_28) {
    free(local_2c);
    return 10;
  }
  free(local_2c);
  return 0;
}



/* ===== FUN_0001c8d8 @ 0001c8d8 size=3628 ===== */

/* WARNING: Restarted to delay deadcode elimination for space: ram */

int FUN_0001c8d8(undefined2 *param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  ushort uVar4;
  char *pcVar5;
  size_t sVar6;
  undefined2 *__ptr;
  uint uVar7;
  void *pvVar8;
  void *pvVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int *piVar13;
  uint uVar14;
  long lVar15;
  ushort uVar16;
  uint uVar17;
  int iVar18;
  char *pcVar19;
  uint uVar20;
  bool bVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined2 local_44;
  char local_42;
  char local_41;
  undefined1 local_40;
  undefined1 local_3f;
  undefined4 local_3e;
  undefined4 local_3a;
  undefined4 local_36;
  undefined2 local_32;
  undefined2 local_30;
  ushort local_2e;
  ushort local_2c;
  
  if (DAT_0004bc58 != 2) {
    iVar18 = *(int *)(param_1 + 0x10);
    lVar15 = *(long *)(param_1 + 0x14);
    if ((DAT_0004bb6c != iVar18) && (DAT_0004bb84 != (FILE *)0x0)) {
      fclose(DAT_0004bb84);
      DAT_0004bb84 = (FILE *)0x0;
    }
    DAT_0004bb6c = iVar18;
    pcVar5 = (char *)FUN_00023ad0(DAT_0004bb80,iVar18);
    if (DAT_0004bb84 == (FILE *)0x0) {
      while (DAT_0004bb84 = fopen(pcVar5,"r"), DAT_0004bb84 == (FILE *)0x0) {
        if (DAT_00049ae8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_000187c0(0x12,pcVar5);
        }
        iVar10 = FUN_00023bd4(iVar18);
        if (iVar10 == 9) {
          return 9;
        }
        bVar21 = DAT_0004bc58 - 1U == 1;
        if (DAT_0004bc58 - 1U < 2) {
          bVar21 = iVar10 == 3;
        }
        if (bVar21) {
          return 3;
        }
        free(pcVar5);
        pcVar5 = (char *)FUN_00023ad0(DAT_0004bb80,iVar18);
      }
    }
    iVar18 = fseek(DAT_0004bb84,lVar15,0);
    if (iVar18 != 0) {
      fclose(DAT_0004bb84);
      DAT_0004bb84 = (FILE *)0x0;
      piVar13 = __errno_location();
      pcVar5 = strerror(*piVar13);
      FUN_000194cc("reading archive fseek: ",pcVar5);
      return 0xb;
    }
    if ((DAT_0004bc58 != 2) &&
       ((((sVar6 = fread(&local_44,1,4,DAT_0004bb84), sVar6 != 4 || ((char)local_44 != 'P')) ||
         (local_44._1_1_ != 'K')) || ((local_42 != '\x03' || (local_41 != '\x04')))))) {
      fclose(DAT_0004bb84);
      DAT_0004bb84 = (FILE *)0x0;
      FUN_000194cc("Did not find entry for ",*(undefined4 *)(param_1 + 0x20));
      return 3;
    }
  }
  sVar6 = fread(&local_44,0x1a,1,DAT_0004bb84);
  if (sVar6 != 1) {
    iVar18 = ferror(DAT_0004bb84);
    piVar13 = __errno_location();
    pcVar5 = strerror(*piVar13);
    FUN_000194cc("reading local entry: ",pcVar5);
    if (DAT_0004bc58 != 2) {
      fclose(DAT_0004bb84);
    }
joined_r0x0001cf6c:
    if (iVar18 == 0) {
      return 2;
    }
    return 0xb;
  }
  __ptr = malloc(0x6c);
  if (__ptr == (undefined2 *)0x0) {
    FUN_000194cc("reading entry",&DAT_000369fc);
    if (DAT_0004bc58 == 2) {
      return 4;
    }
    fclose(DAT_0004bb84);
    return 4;
  }
  bVar21 = DAT_0004bc58 == 2;
  *(undefined4 *)(__ptr + 6) = local_3a;
  uVar7 = (uint)CONCAT11(local_3f,local_40);
  *(undefined4 *)(__ptr + 4) = local_3e;
  __ptr[1] = local_44;
  __ptr[0x13] = CONCAT11(local_41,local_42);
  __ptr[3] = CONCAT11(local_3f,local_40);
  __ptr[0xc] = local_2e;
  __ptr[0xd] = local_2c;
  if (bVar21) {
    uVar20 = (uint)(local_44 >> 8);
    uVar17 = local_44 - uVar20 & 0xffff;
    if (0x28 < uVar20) {
      uVar7 = 0x6dcc;
    }
    *(undefined4 *)(__ptr + 8) = local_36;
    *(uint *)(__ptr + 10) = CONCAT22(local_30,local_32);
    if (0x28 < uVar20) {
      pcVar5 = "Illegal host system mapping in local header:  %d";
      uVar14 = uVar7;
      uVar17 = uVar20;
LAB_0001d138:
      sprintf((char *)(uVar14 | 0x60000),pcVar5,uVar17);
      FUN_000194cc(&DAT_00066dcc,&DAT_000369fc);
      FUN_000194cc("Skipping:  ",*(undefined4 *)(param_1 + 0x20));
      return 3;
    }
    if (100 < uVar17) {
      uVar14 = 0x6dcc;
      pcVar5 = "Illegal PK version mapping in local header:  %d";
      goto LAB_0001d138;
    }
    if (200 < uVar7) {
      uVar14 = 0x6dcc;
      pcVar5 = "Unrecognized compression method in local header:  %d";
      uVar17 = uVar7;
      goto LAB_0001d138;
    }
  }
  *(undefined8 *)(__ptr + 0x18) = 0;
  *(undefined8 *)(__ptr + 0x22) = 0;
  *(undefined4 *)(__ptr + 0x26) = 0;
  pvVar8 = malloc(local_2e + 1);
  *(void **)(__ptr + 0x20) = pvVar8;
  if (pvVar8 == (void *)0x0) {
    return 4;
  }
  if (local_2c != 0) {
    pvVar9 = malloc((uint)local_2c);
    *(void **)(__ptr + 0x1a) = pvVar9;
    if (pvVar9 == (void *)0x0) {
      return 4;
    }
  }
  sVar6 = fread(pvVar8,(uint)local_2e,1,DAT_0004bb84);
  if ((sVar6 != 1) ||
     (((ushort)__ptr[0xd] != 0 &&
      (sVar6 = fread(*(void **)(__ptr + 0x1a),(uint)(ushort)__ptr[0xd],1,DAT_0004bb84), sVar6 != 1))
     )) {
    iVar18 = ferror(DAT_0004bb84);
    goto joined_r0x0001cf6c;
  }
  *(undefined1 *)(*(int *)(__ptr + 0x20) + (uint)(ushort)__ptr[0xc]) = 0;
  uVar7 = (uint)(ushort)__ptr[0xc];
  pcVar5 = malloc(uVar7 + 1);
  *(char **)(__ptr + 0x18) = pcVar5;
  if (pcVar5 == (char *)0x0) {
    return 4;
  }
  pcVar19 = *(char **)(__ptr + 0x20);
  strcpy(pcVar5,pcVar19);
  iVar18 = DAT_0004bc58;
  *__ptr = 0;
  if (iVar18 == 2) {
LAB_0001cbc8:
    iVar18 = DAT_0004bb5c;
    lVar15 = DAT_0004bb38;
    uVar22 = *(undefined8 *)(__ptr + 8);
    param_1[2] = __ptr[0x13];
    *(undefined8 *)(param_1 + 8) = uVar22;
    iVar10 = *(int *)(__ptr + 8);
    *(int *)(param_1 + 0x10) = iVar18;
    *(long *)(param_1 + 0x14) = lVar15;
    uVar20 = (uint)(ushort)__ptr[0xd];
LAB_0001cc14:
    if ((param_1[0x13] & 8) == 0) {
      iVar18 = DAT_00066db4 + 0x1e;
    }
    else {
      iVar18 = DAT_00066db4 + 0x2e;
    }
    DAT_00066db4 = iVar18 + uVar20 + iVar10 + uVar7;
    pcVar19 = *(char **)(__ptr + 0x20);
    sVar6 = strlen(pcVar19);
    pcVar5 = malloc(sVar6 + 1);
    *(char **)(param_1 + 0x24) = pcVar5;
    if (pcVar5 == (char *)0x0) {
      return 4;
    }
    strcpy(pcVar5,pcVar19);
    sprintf((char *)&DAT_00066dcc," copying: %s ",pcVar5);
    FUN_000192c0(&DAT_00066dcc,0);
    if (DAT_0004bc58 != 2) goto LAB_0001d08c;
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(__ptr + 6);
  }
  else {
    bVar21 = DAT_00049ad8 != 3;
    *__ptr = *param_1;
    if (bVar21) {
      if ((param_1[2] & 0x800) == 0) {
        FUN_0001a33c(__ptr);
      }
      else {
        *(char **)(__ptr + 0x26) = pcVar19;
        iVar18 = FUN_00025ebc(pcVar19);
        if (iVar18 == 0) {
          pcVar19 = *(char **)(__ptr + 0x26);
          sVar6 = strlen(pcVar19);
          pcVar5 = malloc(sVar6 + 1);
          *(char **)(__ptr + 0x20) = pcVar5;
          if (pcVar5 == (char *)0x0) {
            return 4;
          }
          strcpy(pcVar5,pcVar19);
        }
        else {
          *(int *)(__ptr + 0x20) = iVar18;
        }
      }
      if (DAT_0004bc58 == 2) {
        uVar7 = (uint)(ushort)__ptr[0xc];
        goto LAB_0001cbc8;
      }
    }
    if (__ptr[1] != param_1[1]) {
      FUN_000194cc("Local Version Needed To Extract does not match CD: ",
                   *(undefined4 *)(param_1 + 0x20));
    }
    uVar16 = param_1[2];
    if (__ptr[0x13] != uVar16) {
      FUN_000194cc("Local Entry Flag does not match CD: ",*(undefined4 *)(param_1 + 0x20));
      uVar16 = param_1[2];
    }
    if (((uVar16 & 8) == 0) && (*(int *)(__ptr + 6) != *(int *)(param_1 + 6))) {
      FUN_000194cc("Local Entry CRC does not match CD: ",*(undefined4 *)(param_1 + 0x20));
    }
    iVar18 = DAT_0004bc58;
    if (DAT_0004bc58 == 3) {
      *(undefined8 *)(__ptr + 8) = *(undefined8 *)(param_1 + 8);
LAB_0001d1e4:
      sVar6 = strlen(*(char **)(param_1 + 0x20));
      pvVar8 = *(void **)(__ptr + 0x20);
      param_1[0xc] = (short)sVar6;
      __ptr[0xc] = (short)sVar6;
      free(pvVar8);
      pcVar19 = *(char **)(param_1 + 0x20);
      sVar6 = strlen(pcVar19);
      pcVar5 = malloc(sVar6 + 1);
      *(char **)(__ptr + 0x20) = pcVar5;
      if (pcVar5 == (char *)0x0) {
        FUN_000194cc("out of memory in zipcopy",&DAT_000369fc);
        return 4;
      }
      strcpy(pcVar5,pcVar19);
      iVar10 = *(int *)(param_1 + 8);
      iVar18 = DAT_0004bc58;
    }
    else {
      pcVar5 = *(char **)(param_1 + 0x20);
      iVar10 = strcmp(*(char **)(__ptr + 0x20),pcVar5);
      if (iVar10 == 0) {
        iVar10 = *(int *)(param_1 + 8);
        *(undefined8 *)(__ptr + 8) = *(undefined8 *)(param_1 + 8);
      }
      else {
        FUN_000194cc("Local Entry name does not match CD: ",pcVar5);
        iVar18 = DAT_0004bc58;
        iVar10 = *(int *)(param_1 + 8);
        bVar21 = DAT_0004bc58 == 3;
        *(undefined8 *)(__ptr + 8) = *(undefined8 *)(param_1 + 8);
        if (bVar21) goto LAB_0001d1e4;
      }
    }
    lVar15 = DAT_0004bb38;
    uVar7 = (uint)(ushort)__ptr[0xc];
    *(int *)(param_1 + 0x10) = DAT_0004bb5c;
    *(long *)(param_1 + 0x14) = lVar15;
    uVar20 = (uint)(ushort)__ptr[0xd];
    if (iVar18 == 2) goto LAB_0001cc14;
    if ((param_1[2] & 1) == 0) {
      uVar16 = __ptr[0x13];
      uVar4 = param_1[2] & 0xfff7;
      param_1[2] = uVar4;
      __ptr[2] = uVar4;
      __ptr[0x13] = uVar16 & 0xfff7;
      param_1[0x13] = uVar16 & 0xfff7;
LAB_0001d078:
      DAT_00066db4 = DAT_00066db4 + 0x1e + uVar20 + iVar10 + uVar7;
    }
    else {
      if ((param_1[0x13] & 8) == 0) goto LAB_0001d078;
      DAT_00066db4 = DAT_00066db4 + 0x2e + uVar20 + iVar10 + uVar7;
    }
LAB_0001d08c:
    *(undefined4 *)(__ptr + 6) = *(undefined4 *)(param_1 + 6);
  }
  iVar18 = FUN_0001b024(__ptr,0);
  if (iVar18 != 0) {
    return 10;
  }
  if ((DAT_0004bc58 == 2) && ((__ptr[0x13] & 8) != 0)) {
    iVar18 = FUN_00024f50(0xfffffffe);
  }
  else {
    iVar18 = FUN_00024f50(*(undefined4 *)(__ptr + 8));
  }
  uVar12 = DAT_0004bc2c;
  uVar11 = DAT_0004bc28;
  if (iVar18 == 9) {
    if (__ptr[0xd] != 0) {
      free(*(void **)(__ptr + 0x1a));
    }
    if ((__ptr[0xc] != 0) && (free(*(void **)(__ptr + 0x20)), __ptr[0xc] != 0)) {
      free(*(void **)(__ptr + 0x18));
    }
    if (*(void **)(__ptr + 0x26) != (void *)0x0) {
      free(*(void **)(__ptr + 0x26));
    }
    free(__ptr);
                    /* WARNING: Subroutine does not return */
    FUN_000187c0(9,"Could not find split");
  }
  if (iVar18 == 2) {
    FUN_000194cc("aborting: ",*(undefined4 *)(param_1 + 0x24));
LAB_0001d2c8:
    if (DAT_0004bc58 == 2) {
      DAT_0004bc38 = 0;
      iVar10 = fseek(DAT_0004bb88,DAT_0004bb3c,0);
      if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_000187c0(0xe,"seek failed on output file");
      }
      DAT_0004bb38 = DAT_0004bb3c;
      DAT_00066db4 = DAT_0004bb38;
    }
    if (__ptr[0xd] != 0) {
      free(*(void **)(__ptr + 0x1a));
    }
    if ((__ptr[0xc] != 0) && (free(*(void **)(__ptr + 0x20)), __ptr[0xc] != 0)) {
      free(*(void **)(__ptr + 0x18));
    }
    if (*(void **)(__ptr + 0x26) != (void *)0x0) {
      free(*(void **)(__ptr + 0x26));
    }
    free(__ptr);
    return iVar18;
  }
  if (DAT_0004bc38 != 0) {
    FUN_000194cc("aborting: ",*(undefined4 *)(param_1 + 0x24));
    if (iVar18 == 0) {
      iVar18 = 3;
    }
    goto LAB_0001d2c8;
  }
  if (DAT_0004bc58 == 2) {
    if ((param_1[2] & 8) == 0) {
      if (DAT_0004bb30 == 1) {
LAB_0001d510:
        if (DAT_0004bb60 != DAT_0004bb5c) {
          FUN_00024510(DAT_0004bb60,DAT_0004bb40,DAT_0004bb44);
          DAT_0004bb40 = 0;
          free(DAT_0004bb44);
        }
        goto LAB_0001d424;
      }
      uVar7 = (uint)(ushort)__ptr[0xd];
    }
    else {
      if (DAT_0004bc34 == 0) {
        FUN_000194cc("no end of stream entry found: ",*(undefined4 *)(param_1 + 0x24));
        FUN_000194cc("rewinding and scanning for later entries",&DAT_000369fc);
        fseek(DAT_0004bb88,DAT_0004bb3c,0);
        if (__ptr[0xd] != 0) {
          free(*(void **)(__ptr + 0x1a));
        }
        if ((__ptr[0xc] != 0) && (free(*(void **)(__ptr + 0x20)), __ptr[0xc] != 0)) {
          free(*(void **)(__ptr + 0x18));
        }
        if (*(void **)(__ptr + 0x26) != (void *)0x0) {
          free(*(void **)(__ptr + 0x26));
        }
        free(__ptr);
        return 3;
      }
      *(undefined4 *)(__ptr + 6) = DAT_0004bc30;
      *(undefined4 *)(__ptr + 8) = uVar12;
      *(undefined4 *)(__ptr + 10) = uVar11;
LAB_0001d408:
      FUN_0001b95c(__ptr);
      if (DAT_0004bb30 == 1) goto LAB_0001d510;
LAB_0001d424:
      uVar7 = (uint)(ushort)__ptr[0xd];
      if (DAT_0004bc58 != 2) goto LAB_0001cd3c;
    }
    uVar1 = __ptr[0x13];
    uVar2 = __ptr[1];
    uVar3 = __ptr[3];
    uVar16 = __ptr[0xc];
    pcVar5 = *(char **)(__ptr + 0x1a);
    uVar22 = *(undefined8 *)(__ptr + 4);
    uVar23 = *(undefined8 *)(__ptr + 8);
    param_1[0x13] = uVar1;
    param_1[2] = uVar1;
    param_1[1] = uVar2;
    param_1[3] = uVar3;
    *(undefined8 *)(param_1 + 4) = uVar22;
    *(undefined8 *)(param_1 + 8) = uVar23;
    param_1[0xd] = (short)uVar7;
    param_1[0xe] = (short)uVar7;
    param_1[0xc] = uVar16;
    *(char **)(param_1 + 0x1a) = pcVar5;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (uVar7 != 0) {
      pcVar19 = malloc(uVar7 + 1);
      *(char **)(param_1 + 0x1c) = pcVar19;
      if (pcVar19 == (char *)0x0) {
        return 4;
      }
      strcpy(pcVar19,pcVar5);
    }
    pcVar19 = *(char **)(__ptr + 0x20);
    uVar11 = *(undefined4 *)(__ptr + 0x26);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(__ptr + 0x18);
    *(char **)(param_1 + 0x20) = pcVar19;
    *(undefined4 *)(param_1 + 0x26) = uVar11;
    param_1[0xf] = 0;
    param_1[0x12] = 0;
    *(undefined4 *)(param_1 + 0x16) = 0;
    pcVar5 = malloc(uVar16 + 1);
    *(char **)(param_1 + 0x22) = pcVar5;
    if (pcVar5 == (char *)0x0) {
      return 4;
    }
    strcpy(pcVar5,pcVar19);
  }
  else {
    if ((param_1[2] & 8) != 0) goto LAB_0001d408;
    if (DAT_0004bb30 == 1) goto LAB_0001d510;
    uVar7 = (uint)(ushort)__ptr[0xd];
LAB_0001cd3c:
    if (uVar7 != 0) {
      free(*(void **)(__ptr + 0x1a));
    }
    if ((__ptr[0xc] != 0) && (free(*(void **)(__ptr + 0x20)), __ptr[0xc] != 0)) {
      free(*(void **)(__ptr + 0x18));
    }
    if (*(void **)(__ptr + 0x26) != (void *)0x0) {
      free(*(void **)(__ptr + 0x26));
    }
    free(__ptr);
  }
  if (DAT_0004bc58 != 2) {
    return iVar18;
  }
  uVar11 = FUN_00028fc0(*(undefined4 *)(param_1 + 8),0,&DAT_0002fc3c);
  sprintf((char *)&DAT_00066dcc," (%s bytes)",uVar11);
  FUN_000192c0(&DAT_00066dcc,1);
  if (iVar18 != 0xb) {
    return iVar18;
  }
  FUN_000194cc("entry truncated: ",*(undefined4 *)(param_1 + 0x24));
  uVar11 = FUN_00028fc0(*(undefined4 *)(__ptr + 8),0,&DAT_0002fc3c);
  uVar12 = FUN_00028fc0(DAT_0004bb20,0,&DAT_0002fc3c);
  sprintf((char *)&DAT_00066dcc,"expected compressed/stored size %s, actual %s",uVar11,uVar12);
  FUN_000194cc(&DAT_00066dcc,&DAT_000369fc);
  return 0xb;
}



/* ===== FUN_0001d720 @ 0001d720 size=5912 ===== */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 FUN_0001d720(void)

{
  ushort uVar1;
  undefined2 uVar2;
  char cVar3;
  ushort uVar4;
  size_t sVar5;
  FILE *pFVar6;
  long lVar7;
  FILE *pFVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int *piVar11;
  char *pcVar12;
  void *pvVar13;
  long lVar14;
  int iVar15;
  uint *puVar16;
  int iVar17;
  uint uVar18;
  undefined4 uVar19;
  uint uVar20;
  undefined4 uVar21;
  char *pcVar22;
  char *pcVar23;
  uint __size;
  undefined2 *puVar24;
  byte *pbVar25;
  uint uVar27;
  uint *puVar28;
  uint *puVar29;
  char *pcVar30;
  uint __size_00;
  bool bVar31;
  bool bVar32;
  int local_d0;
  char *local_cc;
  int *local_c8;
  char *local_ac;
  void *local_98;
  void *local_94;
  char acStack_7c [40];
  undefined4 local_54;
  uint local_50;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined2 local_4a;
  undefined2 local_48;
  undefined2 local_46;
  ushort local_44;
  undefined2 local_42;
  undefined1 local_40;
  undefined1 local_3f;
  undefined2 local_3e;
  undefined1 local_3c;
  undefined1 local_3b;
  ushort local_3a;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined2 local_30;
  uint local_2e;
  byte *pbVar26;
  
  pcVar12 = DAT_0004bb80;
  DAT_0004bb70 = 1000000;
  sVar5 = strlen(DAT_0004bb80);
  if (((((sVar5 < 4) ||
        (iVar15 = DAT_00066db0 + (sVar5 - 4), *(char *)(DAT_00066db0 + (sVar5 - 4)) != '.')) ||
       (*(short *)(__ctype_toupper + (uint)*(byte *)(iVar15 + 1) * 2) != 0x5a)) ||
      ((9 < *(byte *)(iVar15 + 2) - 0x30 || (9 < *(byte *)(iVar15 + 3) - 0x30)))) ||
     ((sVar5 != 4 && (9 < *(byte *)(iVar15 + 4) - 0x30)))) {
    pFVar6 = fopen(pcVar12,"r");
    DAT_0004bb84 = pFVar6;
    if (pFVar6 == (FILE *)0x0) {
      FUN_000194cc("could not open input archive: ",DAT_0004bb80);
LAB_0001e72c:
      if (DAT_00049ae8 != 0) {
LAB_0001e734:
        if (DAT_0004bb84 != (FILE *)0x0) {
          fclose(DAT_0004bb84);
          DAT_0004bb84 = (FILE *)0x0;
        }
      }
LAB_0001dc3c:
      FUN_000193f0("Scanning for entries...",&DAT_000369fc);
      DAT_0004bb6c = 0;
      if (DAT_0004bb70 != 0) {
        bVar32 = false;
        local_d0 = 0;
        do {
          local_ac = (char *)FUN_00023ad0(DAT_0004bb80,DAT_0004bb6c);
          if (DAT_0004bb84 == (FILE *)0x0) {
            while (DAT_0004bb84 = fopen(local_ac,"r"), DAT_0004bb84 == (FILE *)0x0) {
              iVar15 = FUN_00023bd4(DAT_0004bb6c);
              if (iVar15 == 9) {
                FUN_000194cc("could not find split: ",local_ac);
                return 9;
              }
              if (iVar15 == 2) {
                FUN_000192c0(&DAT_000369fc,1);
                FUN_000194cc("user ended reading - closing archive",&DAT_000369fc);
                return 2;
              }
              if (iVar15 == 3) {
                FUN_000192c0(&DAT_000369fc,1);
                sprintf((char *)&DAT_00066dcc,"skipping disk %lu ...\n",DAT_0004bb6c);
                FUN_000194cc(&DAT_00066dcc,&DAT_000369fc);
                goto LAB_0001e59c;
              }
              local_ac = (char *)FUN_00023ad0(DAT_0004bb80,DAT_0004bb6c);
            }
          }
          local_cc = "Zip64 EOCDR found (%2lu %6s)...";
LAB_0001de00:
          iVar15 = FUN_00019b14(DAT_0004bb84);
          if (iVar15 != 0) {
            uVar27 = ftell(DAT_0004bb84);
            DAT_0004bb68 = uVar27;
            iVar15 = FUN_0001a1b4();
            if (iVar15 == 0) {
              iVar15 = FUN_0001a210();
              if (iVar15 == 0) {
                if (((DAT_00049e01 != 'K') || (DAT_00049e00 != 'P')) ||
                   (DAT_00049e03 != '\a' || DAT_00049e02 != '\x06')) {
                  iVar15 = FUN_0001a158();
                  if (iVar15 == 0) {
                    iVar15 = FUN_0001a26c();
                    if (iVar15 == 0) {
                      if ((DAT_0004bb0c == 0) && (iVar15 = FUN_0001a2c8(&DAT_00036cd8), iVar15 != 0)
                         ) {
                        if (DAT_0004bb70 == 1) {
                          FUN_000193f0("  Found spanning marker, but did not expect split (multi-disk) archive..."
                                       ,&DAT_000369fc);
                        }
                        else {
                          if (DAT_0004bb70 < 2) {
                            pcVar12 = "  Found spanning marker - could be split archive...";
                          }
                          else {
                            pcVar12 = 
                            "  Found spanning marker - expected as this is split (multi-disk) archive..."
                            ;
                          }
                          FUN_000193f0(pcVar12,&DAT_000369fc);
                        }
                      }
                      else {
                        DAT_00066dcc._0_1_ = s_unexpected_signature_00036dac[0];
                        DAT_00066dcc._1_1_ = s_unexpected_signature_00036dac[1];
                        DAT_00066dcc._2_1_ = s_unexpected_signature_00036dac[2];
                        DAT_00066dcc._3_1_ = s_unexpected_signature_00036dac[3];
                        DAT_00066dd8._0_1_ = s_unexpected_signature_00036dac[0xc];
                        DAT_00066dd8._1_1_ = s_unexpected_signature_00036dac[0xd];
                        DAT_00066dd8._2_1_ = s_unexpected_signature_00036dac[0xe];
                        DAT_00066dd8._3_1_ = s_unexpected_signature_00036dac[0xf];
                        DAT_00066dd0._0_1_ = s_unexpected_signature_00036dac[4];
                        DAT_00066dd0._1_1_ = s_unexpected_signature_00036dac[5];
                        DAT_00066dd0._2_1_ = s_unexpected_signature_00036dac[6];
                        DAT_00066dd0._3_1_ = s_unexpected_signature_00036dac[7];
                        DAT_00066dd4._0_1_ = s_unexpected_signature_00036dac[8];
                        DAT_00066dd4._1_1_ = s_unexpected_signature_00036dac[9];
                        DAT_00066dd4._2_1_ = s_unexpected_signature_00036dac[10];
                        DAT_00066dd4._3_1_ = s_unexpected_signature_00036dac[0xb];
                        DAT_00066ddc._0_1_ = s_unexpected_signature_00036dac[0x10];
                        DAT_00066ddc._1_1_ = s_unexpected_signature_00036dac[0x11];
                        DAT_00066ddc._2_1_ = s_unexpected_signature_00036dac[0x12];
                        DAT_00066ddc._3_1_ = s_unexpected_signature_00036dac[0x13];
                        DAT_00066de0._0_1_ = s_unexpected_signature_00036dac[0x14];
                        DAT_00066de0._1_1_ = s_unexpected_signature_00036dac[0x15];
                        pbVar26 = (byte *)&DAT_00049e00;
                        do {
                          pbVar25 = pbVar26 + 1;
                          sprintf(acStack_7c,"%02x ",(uint)*pbVar26);
                          strcat((char *)&DAT_00066dcc,acStack_7c);
                          uVar27 = DAT_0004bb6c;
                          pbVar26 = pbVar25;
                        } while (DAT_0001ea44 != pbVar25);
                        uVar10 = FUN_00028fc0(DAT_0004bb68 - 4,0,&DAT_0002fc3c);
                        sprintf(acStack_7c,"on disk %lu at %s\n",uVar27,uVar10);
                        strcat((char *)&DAT_00066dcc,acStack_7c);
                        FUN_000194cc(&DAT_00066dcc,&DAT_000369fc);
                        FUN_000194cc("skipping this signature...",&DAT_000369fc);
                      }
                      goto LAB_0001de00;
                    }
                    if ((!bVar32) &&
                       (FUN_000193f0("Central Directory found...",&DAT_000369fc),
                       uVar27 = DAT_000681c0, DAT_000681c0 != 0)) {
                      if ((DAT_000681c0 & 0xc0000000) != 0) {
                        return 4;
                      }
                      pvVar13 = malloc(DAT_000681c0 << 2);
                      if (pvVar13 == (void *)0x0) {
                        DAT_00066dc0 = pvVar13;
                        return 4;
                      }
                      DAT_00066dc0 = pvVar13;
                      if (DAT_0004bb0c != 0) {
                        piVar11 = (int *)((int)pvVar13 + -4);
                        iVar15 = DAT_0004bb0c;
                        do {
                          piVar11 = piVar11 + 1;
                          *piVar11 = iVar15;
                          iVar15 = *(int *)(iVar15 + 0x68);
                        } while (iVar15 != 0);
                      }
                      qsort(pvVar13,uVar27,4,(__compar_fn_t)&LAB_000198d8);
                    }
                    uVar27 = DAT_0004bb6c;
                    if (DAT_0004bc5c != 0) {
                      uVar10 = FUN_00028fc0(DAT_0004bb68 - 4,0,&DAT_0002fc3c);
                      sprintf((char *)&DAT_00066dcc," Cen   (%2lu %6s): ",uVar27 + 1,uVar10);
                      FUN_000192c0(&DAT_00066dcc,0);
                    }
                    sVar5 = fread(&local_54,0x2a,1,DAT_0004bb84);
                    if (sVar5 == 1) {
                      puVar16 = malloc(0x6c);
                      uVar4 = local_3a;
                      uVar27 = local_54;
                      if (puVar16 == (uint *)0x0) goto LAB_0001e034;
                      iVar15 = CONCAT22(local_4a,CONCAT11(local_4b,local_4c));
                      iVar17 = CONCAT22(local_46,local_48);
                      *puVar16 = local_54;
                      puVar16[1] = local_50;
                      __size = (uint)CONCAT11(local_3b,local_3c);
                      bVar32 = local_54._1_1_ == '\0';
                      __size_00 = (uint)local_3a;
                      uVar18 = CONCAT22(local_30,CONCAT11(local_31,local_32));
                      puVar16[10] = local_2e;
                      uVar1 = CONCAT11(local_37,local_38);
                      uVar20 = (uint)uVar1;
                      *(ulonglong *)(puVar16 + 2) = CONCAT44(iVar17,iVar15);
                      *(ulonglong *)(puVar16 + 4) =
                           CONCAT44(CONCAT22(local_3e,CONCAT11(local_3f,local_40)),
                                    CONCAT22(local_42,local_44));
                      *(ushort *)(puVar16 + 6) = CONCAT11(local_3b,local_3c);
                      puVar16[0x19] = (uint)bVar32;
                      *(ushort *)(puVar16 + 7) = local_3a;
                      puVar16[0xb] = uVar18;
                      puVar16[0xc] = 0;
                      puVar16[0xd] = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
                      puVar16[0xe] = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
                      puVar16[0xf] = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
                      *(ushort *)((int)puVar16 + 0x1e) = uVar1;
                      puVar16[0x10] = 0;
                      puVar16[0x11] = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
                      puVar16[0x12] = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
                      puVar16[0x13] = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
                      puVar16[8] = (uint)CONCAT11(local_35,local_36);
                      puVar16[0x15] = 0;
                      uVar2 = CONCAT11(local_33,local_34);
                      puVar16[0x14] = 0;
                      *(undefined2 *)(puVar16 + 9) = uVar2;
                      if (__size == 0) {
                        sprintf((char *)&DAT_00066dcc,"%lu",DAT_000681c0 + 1);
                        puVar16 = &DAT_00066dcc;
                        pcVar12 = "zero-length name for entry #";
                      }
                      else {
                        pvVar13 = malloc(__size + 1);
                        puVar16[0x10] = (uint)pvVar13;
                        if (pvVar13 == (void *)0x0) {
                          return 4;
                        }
                        if (__size_00 == 0) {
                          local_94 = (void *)0x0;
                        }
                        else {
                          local_94 = malloc(__size_00 + 1);
                          puVar16[0xe] = (uint)local_94;
                          if (local_94 == (void *)0x0) {
                            return 4;
                          }
                        }
                        if (uVar20 == 0) {
                          local_98 = (void *)0x0;
                        }
                        else {
                          local_98 = malloc(uVar20 + 1);
                          puVar16[0xf] = (uint)local_98;
                          if (local_98 == (void *)0x0) {
                            return 4;
                          }
                        }
                        sVar5 = fread(pvVar13,__size,1,DAT_0004bb84);
                        if (((sVar5 == 1) &&
                            ((__size_00 == 0 ||
                             (sVar5 = fread(local_94,__size_00,1,DAT_0004bb84), sVar5 == 1)))) &&
                           ((uVar20 == 0 ||
                            (sVar5 = fread(local_98,uVar20,1,DAT_0004bb84), sVar5 == 1)))) {
                          uVar20 = DAT_000681c0;
                          bVar31 = DAT_000681c0 == 0;
                          *(undefined1 *)((int)pvVar13 + __size) = 0;
                          if ((bVar31) ||
                             (((puVar9 = (undefined4 *)
                                         FUN_000286d0(pvVar13,DAT_00066dc0,uVar20,&LAB_000198a4),
                               puVar9 == (undefined4 *)0x0 &&
                               (((DAT_00049ad8 == 3 || (DAT_0004bc58 == 2)) ||
                                (puVar9 = (undefined4 *)
                                          FUN_000286d0(pvVar13,DAT_00066dac,DAT_000681c0,
                                                       &LAB_00019890), puVar9 == (undefined4 *)0x0))
                               )) || ((puVar24 = (undefined2 *)*puVar9, puVar24 == (undefined2 *)0x0
                                      || (iVar15 != *(int *)(puVar24 + 4))))))) {
                            bVar32 = true;
                            sprintf((char *)&DAT_00066dcc,"no local entry: %s",pvVar13);
                            FUN_000192c0(&DAT_00066dcc,1);
                          }
                          else {
                            if (DAT_0004bc5c != 0) {
                              sprintf((char *)&DAT_00066dcc,"updating: %s",pvVar13);
                              FUN_000192c0(&DAT_00066dcc,0);
                            }
                            if (iVar17 != *(int *)(puVar24 + 6)) {
                              sprintf((char *)&DAT_00066dcc,"local (%lu) and cen (%lu) crc mismatch"
                                     );
                              FUN_000194cc(&DAT_00066dcc,&DAT_000369fc);
                            }
                            iVar15 = DAT_00049ad8;
                            *(uint *)(puVar24 + 0x32) = (uint)bVar32;
                            *puVar24 = (short)uVar27;
                            puVar24[0xf] = uVar1;
                            puVar24[0xe] = uVar4;
                            *(void **)(puVar24 + 0x1c) = local_94;
                            *(void **)(puVar24 + 0x1e) = local_98;
                            puVar24[0x12] = uVar2;
                            *(uint *)(puVar24 + 0x16) = uVar18;
                            if ((iVar15 != 3) && (*(int *)(puVar24 + 0x26) == 0)) {
                              if ((puVar24[2] & 0x800) == 0) {
                                FUN_0001a568(puVar24);
                              }
                              else {
                                pcVar23 = *(char **)(puVar24 + 0x20);
                                sVar5 = strlen(pcVar23);
                                pcVar12 = malloc(sVar5 + 1);
                                *(char **)(puVar24 + 0x26) = pcVar12;
                                if (pcVar12 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_000187c0(4,"reading archive");
                                }
                                strcpy(pcVar12,pcVar23);
                              }
                            }
                            if (DAT_0004bc5c != 0) {
                              FUN_00019900(puVar24);
                            }
                            lVar7 = ftell(DAT_0004bb88);
                            iVar15 = fseek(DAT_0004bb88,*(long *)(puVar24 + 0x14),0);
                            if (iVar15 != 0) {
                              fclose(DAT_0004bb84);
                              DAT_0004bb84 = (FILE *)0x0;
                              piVar11 = __errno_location();
                              pcVar12 = strerror(*piVar11);
                              FUN_000194cc("writing archive seek: ",pcVar12);
                              return 0xe;
                            }
                            iVar15 = FUN_0001b024(puVar24,1);
                            if (iVar15 != 0) {
                              FUN_000194cc("Error rewriting local header",&DAT_000369fc);
                            }
                            pFVar6 = (FILE *)fseek(DAT_0004bb88,lVar7,0);
                            if (pFVar6 != (FILE *)0x0) {
                              fclose(DAT_0004bb84);
                              DAT_0004bb84 = (FILE *)0x0;
                              piVar11 = __errno_location();
                              pcVar12 = strerror(*piVar11);
                              FUN_000194cc("write archive seek: ",pcVar12);
                              return 0xe;
                            }
                            lVar14 = ftell(DAT_0004bb88);
                            if (lVar7 != lVar14) {
                              fclose(DAT_0004bb84);
                              DAT_0004bb84 = pFVar6;
                              piVar11 = __errno_location();
                              pcVar12 = strerror(*piVar11);
                              FUN_000194cc("seek after local: ",pcVar12);
                              return 0xe;
                            }
                            if (DAT_0004bc5c == 0) {
                              bVar32 = true;
                            }
                            else {
                              bVar32 = true;
                              FUN_000192c0(&DAT_000369fc);
                            }
                          }
                          goto LAB_0001de00;
                        }
                        piVar11 = __errno_location();
                        puVar16 = (uint *)strerror(*piVar11);
                        pcVar12 = "error reading entry:  ";
                      }
                    }
                    else {
                      piVar11 = __errno_location();
                      pcVar12 = strerror(*piVar11);
                      FUN_000194cc("reading central directory: ",pcVar12);
                      puVar16 = (uint *)&DAT_000369fc;
                      pcVar12 = "bad archive - error reading central directory";
                    }
                    bVar32 = true;
                    FUN_000194cc(pcVar12,puVar16);
                    FUN_000194cc("skipping this entry...",&DAT_000369fc);
                    goto LAB_0001de00;
                  }
                  if (DAT_0004bc5c == 0) {
                    puVar9 = malloc(0x6c);
                  }
                  else {
                    iVar15 = DAT_0004bb6c + 1;
                    uVar10 = FUN_00028fc0(uVar27 - 4,0,&DAT_0002fc3c);
                    sprintf((char *)&DAT_00066dcc," Local (%2lu %6s):",iVar15,uVar10);
                    FUN_000192c0(&DAT_00066dcc,0);
                    puVar9 = malloc(0x6c);
                  }
                  if (puVar9 == (undefined4 *)0x0) {
LAB_0001e034:
                    FUN_000194cc("reading central directory",&DAT_000369fc);
                    return 4;
                  }
                  uVar10 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
                  uVar19 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
                  uVar21 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
                  *puVar9 = 0;
                  puVar9[1] = 0;
                  puVar9[2] = 0;
                  puVar9[3] = uVar10;
                  puVar9[4] = uVar19;
                  puVar9[5] = uVar21;
                  *(undefined2 *)(puVar9 + 6) = 0;
                  puVar9[0xc] = 0;
                  puVar9[0xd] = uVar10;
                  puVar9[0xe] = uVar19;
                  puVar9[0xf] = uVar21;
                  puVar9[7] = 0;
                  puVar9[0x10] = 0;
                  puVar9[0x11] = uVar10;
                  puVar9[0x12] = uVar19;
                  puVar9[0x13] = uVar21;
                  puVar9[8] = 0;
                  *(undefined2 *)(puVar9 + 9) = 0;
                  puVar9[0xb] = 0;
                  puVar9[10] = 0;
                  puVar9[0x19] = 0;
                  puVar9[0x15] = 0;
                  puVar9[0x14] = 0;
                  local_d0 = FUN_0001c8d8();
                  uVar27 = DAT_0004bb6c;
                  if (bVar32) {
                    uVar10 = FUN_00028fc0(DAT_0004bb68 - 4,0,&DAT_0002fc3c);
                    sprintf((char *)&DAT_00066dcc,
                            "Entry after central directory found (%2lu %6s)...",uVar27 + 1,uVar10);
                    FUN_000192c0(&DAT_00066dcc,1);
                  }
                  if (local_d0 == 2) {
                    if (DAT_0004bb84 != (FILE *)0x0) {
                      fclose(DAT_0004bb84);
                      DAT_0004bb84 = (FILE *)0x0;
                      free(local_ac);
                      return 0;
                    }
                    free(local_ac);
                    return 0;
                  }
                  if (local_d0 == 0) {
                    iVar15 = puVar9[4];
                    if (DAT_0004bb0c == 0) {
                      local_c8 = &DAT_0004bb0c;
                    }
                    *local_c8 = (int)puVar9;
                    local_c8 = puVar9 + 0x1a;
                    *local_c8 = 0;
                    DAT_0004bbf0 = iVar15 + DAT_0004bbf0;
                    DAT_000681c0 = DAT_000681c0 + 1;
                    DAT_0004bc00 = DAT_0004bc00 + 1;
                    bVar32 = false;
                  }
                  else {
                    bVar32 = false;
                  }
                  goto LAB_0001de00;
                }
                iVar15 = DAT_0004bb6c + 1;
                uVar10 = FUN_00028fc0(uVar27 - 4,0,&DAT_0002fc3c);
                pcVar12 = "Zip64 EOCDL found (%2lu %6s)...";
              }
              else {
                iVar15 = DAT_0004bb6c + 1;
                uVar10 = FUN_00028fc0(uVar27 - 4,0,&DAT_0002fc3c);
                pcVar12 = local_cc;
              }
            }
            else {
              iVar15 = DAT_0004bb6c + 1;
              uVar10 = FUN_00028fc0(uVar27 - 4,0,&DAT_0002fc3c);
              pcVar12 = "EOCDR found (%2lu %6s)...";
            }
            sprintf((char *)&DAT_00066dcc,pcVar12,iVar15,uVar10);
            FUN_000192c0(&DAT_00066dcc,1);
            goto LAB_0001de00;
          }
          if (DAT_0004bb84 != (FILE *)0x0) {
            fclose(DAT_0004bb84);
          }
          DAT_0004bb84 = (FILE *)0x0;
          free(local_ac);
          if (local_d0 == 2) break;
LAB_0001e59c:
          DAT_0004bb6c = DAT_0004bb6c + 1;
        } while (DAT_0004bb6c < DAT_0004bb70);
      }
      uVar10 = 0;
    }
    else {
      iVar15 = fseek(pFVar6,0,2);
      if (((iVar15 == 0) && (lVar7 = ftell(pFVar6), -1 < lVar7)) &&
         (pFVar8 = (FILE *)fseek(pFVar6,lVar7,0), pFVar8 == (FILE *)0x0)) {
        fread(&local_54,1,1,pFVar6);
        iVar15 = feof(pFVar6);
        if (iVar15 != 0) {
          rewind(pFVar6);
          iVar15 = fseek(DAT_0004bb84,-0x40000,2);
          pFVar6 = DAT_0004bb84;
          if ((iVar15 != 0) &&
             (iVar15 = fseek(DAT_0004bb84,0,0), pFVar6 = DAT_0004bb84, iVar15 != 0)) {
            fclose(DAT_0004bb84);
            DAT_0004bb84 = pFVar8;
            FUN_000194cc("unable to seek in input file ",DAT_0004bb80);
            return 0xb;
          }
          while ((iVar15 = feof(pFVar6), iVar15 == 0 && (iVar15 = FUN_00019b14(pFVar6), iVar15 != 0)
                 )) {
            if ((DAT_00049e00 == 'P') &&
               (((DAT_00049e01 == 'K' && (DAT_00049e02 == '\x05')) && (DAT_00049e03 == '\x06')))) {
LAB_0001d8c4:
              lVar7 = ftell(DAT_0004bb84);
              pFVar6 = DAT_0004bb84;
LAB_0001d8d4:
              iVar15 = feof(pFVar6);
              if ((iVar15 == 0) && (iVar15 = FUN_00019b14(pFVar6), iVar15 != 0))
              goto code_r0x0001d894;
              iVar15 = fseek(DAT_0004bb84,lVar7,0);
              if (iVar15 != 0) {
                fclose(DAT_0004bb84);
                DAT_0004bb84 = (FILE *)0x0;
                FUN_000194cc("unable to seek in input file ",DAT_0004bb80);
                return 0xb;
              }
              sVar5 = fread(&local_54,1,0x12,DAT_0004bb84);
              if (sVar5 < 0x12) {
                uVar10 = FUN_00028fc0(sVar5,0,&DAT_0002fc3c);
                sprintf((char *)&DAT_00066dcc,"End record (EOCDR) only %s bytes - assume truncated",
                        uVar10);
                FUN_000194cc(&DAT_00066dcc,&DAT_000369fc);
              }
              else {
                DAT_0004bb6c = local_54 & 0xffff;
                DAT_0004bb70 = DAT_0004bb6c + 1;
                bVar32 = 0xffff < DAT_0004bb70;
                if (DAT_0004bb70 != 0x10000) {
                  bVar32 = local_54 >> 0x10 <= DAT_0004bb70;
                }
                if (bVar32) {
                  uVar27 = (uint)local_44;
                  DAT_000681c4 = local_44;
                  if (uVar27 != 0) {
                    DAT_0004bb04 = malloc(uVar27 + 1);
                    if (DAT_0004bb04 == (void *)0x0) {
                      return 4;
                    }
                    sVar5 = fread(DAT_0004bb04,uVar27,1,DAT_0004bb84);
                    if (sVar5 == 1) {
                      *(undefined1 *)((int)DAT_0004bb04 + (uint)DAT_000681c4) = 0;
                    }
                    else {
                      free(DAT_0004bb04);
                      DAT_0004bb04 = (void *)0x0;
                      FUN_000194cc("zipfile comment truncated - ignoring",&DAT_000369fc);
                    }
                  }
                  if (DAT_0004bb70 != 1) goto LAB_0001d990;
                  puVar16 = (uint *)" Found end record (EOCDR) - says expect single disk archive";
                  puVar29 = &DAT_00066dcc;
                  do {
                    puVar28 = puVar29;
                    uVar27 = puVar16[1];
                    uVar18 = puVar16[2];
                    uVar20 = puVar16[3];
                    bVar32 = puVar16 != (uint *)0x369c4;
                    *puVar28 = *puVar16;
                    puVar28[1] = uVar27;
                    puVar28[2] = uVar18;
                    puVar28[3] = uVar20;
                    uVar19 = s_Found_end_record__EOCDR____says_e_000369a4._56_4_;
                    uVar10 = s_Found_end_record__EOCDR____says_e_000369a4._52_4_;
                    puVar16 = puVar16 + 4;
                    puVar29 = puVar28 + 4;
                  } while (bVar32);
                  puVar28[4] = s_Found_end_record__EOCDR____says_e_000369a4._48_4_;
                  puVar28[5] = uVar10;
                  puVar28[6] = uVar19;
                }
                else {
                  FUN_000194cc("End record (EOCDR) has bad disk numbers - ignoring EOCDR",
                               &DAT_000369fc);
                  DAT_0004bb70 = 0;
LAB_0001d990:
                  sprintf((char *)&DAT_00066dcc," Found end record (EOCDR) - says expect %lu splits"
                          ,DAT_0004bb70);
                }
                FUN_000193f0(&DAT_00066dcc,&DAT_000369fc);
                if (DAT_0004bb04 != (void *)0x0) {
                  FUN_000193f0("  Found archive comment",&DAT_000369fc);
                }
              }
              goto LAB_0001dc0c;
            }
          }
          puVar16 = &DAT_00066dcc;
          puVar29 = (uint *)"Missing end (EOCDR) signature - either this archive\n";
          do {
            puVar28 = puVar16 + 4;
            uVar27 = puVar29[1];
            uVar18 = puVar29[2];
            uVar20 = puVar29[3];
            bVar32 = puVar29 != (uint *)0x36e1c;
            *puVar16 = *puVar29;
            puVar16[1] = uVar27;
            puVar16[2] = uVar18;
            puVar16[3] = uVar20;
            pcVar12 = DAT_0001ea3c;
            puVar16 = puVar28;
            puVar29 = puVar29 + 4;
          } while (bVar32);
          *puVar28 = s_Missing_end__EOCDR__signature___e_00036dfc._48_4_;
          pcVar23 = "                     is not readable or the end is damaged";
          do {
            pcVar30 = pcVar12;
            uVar10 = *(undefined4 *)(pcVar23 + 4);
            uVar19 = *(undefined4 *)(pcVar23 + 8);
            uVar21 = *(undefined4 *)(pcVar23 + 0xc);
            bVar32 = pcVar23 != "able or the end is damaged";
            *(undefined4 *)pcVar30 = *(undefined4 *)pcVar23;
            *(undefined4 *)(pcVar30 + 4) = uVar10;
            *(undefined4 *)(pcVar30 + 8) = uVar19;
            *(undefined4 *)(pcVar30 + 0xc) = uVar21;
            cVar3 = s_is_not_readable_or_the_end_is_da_00036e34[0x3a];
            uVar2 = s_is_not_readable_or_the_end_is_da_00036e34._56_2_;
            uVar10 = s_is_not_readable_or_the_end_is_da_00036e34._52_4_;
            pcVar23 = pcVar23 + 0x10;
            pcVar12 = pcVar30 + 0x10;
          } while (bVar32);
          *(undefined4 *)(pcVar30 + 0x10) = s_is_not_readable_or_the_end_is_da_00036e34._48_4_;
          *(undefined4 *)(pcVar30 + 0x14) = uVar10;
          *(undefined2 *)(pcVar30 + 0x18) = uVar2;
          pcVar30[0x1a] = cVar3;
          FUN_000194cc(&DAT_00066dcc,&DAT_000369fc);
LAB_0001dc0c:
          pFVar6 = (FILE *)DAT_0004bb70;
          if (DAT_0004bb70 == 0) {
            iVar15 = fseek(DAT_0004bb84,0,0);
            if (iVar15 != 0) {
              fclose(DAT_0004bb84);
              DAT_0004bb84 = pFVar6;
              FUN_000194cc("unable to seek in input file ",DAT_0004bb80);
              return 0xb;
            }
            iVar15 = FUN_00019b14();
            if (iVar15 != 0) {
              DAT_0004bb68 = ftell(DAT_0004bb84);
              if (DAT_0004bb68 == 4) {
                iVar15 = FUN_0001a2c8(&DAT_000369f8);
                if ((iVar15 == 0) || (iVar15 = FUN_00019b14(DAT_0004bb84), iVar15 != 0))
                goto LAB_0001ea90;
              }
              else if ((DAT_0004bb68 < 5) && (iVar15 = FUN_0001a2c8(&DAT_000369f8), iVar15 != 0)) {
                DAT_0004bb70 = 99999;
              }
              else {
LAB_0001ea90:
                if (((DAT_0004bb70 == 0) && (DAT_0004bb68 = ftell(DAT_0004bb84), DAT_0004bb68 == 8))
                   && (iVar15 = FUN_0001a158(), iVar15 != 0)) {
                  printf("Is this a single-disk archive?  (y/n): ");
                  fflush(stdout);
                  pcVar12 = fgets((char *)&DAT_00066dcc,100,stdin);
                  if ((pcVar12 != (char *)0x0) && ((DAT_00066dcc & 0xdf) == 0x59)) {
                    DAT_0004bb70 = 1;
                    FUN_000193f0("  Assuming single-disk archive",&DAT_000369fc);
                  }
                }
              }
            }
          }
          if (DAT_00049ae8 != 0) {
            if (DAT_0004bb70 == 1000000) {
              printf("Is this a single-disk archive?  (y/n): ");
              fflush(stdout);
              pcVar12 = fgets((char *)&DAT_00066dcc,100,stdin);
              if ((pcVar12 != (char *)0x0) && ((DAT_00066dcc & 0xdf) == 0x59)) {
                DAT_0004bb70 = 1;
                FUN_000193f0("  Assuming single-disk archive",&DAT_000369fc);
              }
              if (DAT_0004bb70 == 1000000) {
                DAT_0004bb70 = 100000;
              }
              goto LAB_0001e72c;
            }
            goto LAB_0001e734;
          }
          DAT_0004bb70 = 1;
          goto LAB_0001dc3c;
        }
      }
      rewind(pFVar6);
      fclose(DAT_0004bb84);
      uVar10 = 0x14;
      DAT_0004bb84 = (FILE *)0x0;
      FUN_000194cc("input file requires Zip64 support: ",DAT_0004bb80);
    }
  }
  else {
    puVar16 = &DAT_00066dcc;
    puVar29 = (uint *)"if archive to fix is split archive, need to provide\n";
    do {
      puVar28 = puVar16 + 4;
      uVar27 = puVar29[1];
      uVar18 = puVar29[2];
      uVar20 = puVar29[3];
      bVar32 = puVar29 != (uint *)0x367ec;
      *puVar16 = *puVar29;
      puVar16[1] = uVar27;
      puVar16[2] = uVar18;
      puVar16[3] = uVar20;
      pcVar12 = DAT_0001ea3c;
      puVar16 = puVar28;
      puVar29 = puVar29 + 4;
    } while (bVar32);
    *puVar28 = s_if_archive_to_fix_is_split_archi_000367cc._48_4_;
    pcVar23 = "      path of the last split with .zip extension,\n";
    do {
      pcVar22 = pcVar12 + 0x10;
      uVar10 = *(undefined4 *)(pcVar23 + 4);
      uVar19 = *(undefined4 *)(pcVar23 + 8);
      uVar21 = *(undefined4 *)(pcVar23 + 0xc);
      bVar32 = pcVar23 != "h .zip extension,\n";
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar23;
      *(undefined4 *)(pcVar12 + 4) = uVar10;
      *(undefined4 *)(pcVar12 + 8) = uVar19;
      *(undefined4 *)(pcVar12 + 0xc) = uVar21;
      pcVar30 = DAT_0001ea40;
      pcVar12 = pcVar22;
      pcVar23 = pcVar23 + 0x10;
    } while (bVar32);
    *(undefined2 *)pcVar22 = s_path_of_the_last_split_with__zip_00036804._48_2_;
    pcVar12 = "      even if it doesn\'t exist (zip will ask for splits)";
    do {
      pcVar23 = pcVar30;
      uVar10 = *(undefined4 *)(pcVar12 + 4);
      uVar19 = *(undefined4 *)(pcVar12 + 8);
      uVar21 = *(undefined4 *)(pcVar12 + 0xc);
      bVar32 = pcVar12 != "zip will ask for splits)";
      *(undefined4 *)pcVar23 = *(undefined4 *)pcVar12;
      *(undefined4 *)(pcVar23 + 4) = uVar10;
      *(undefined4 *)(pcVar23 + 8) = uVar19;
      *(undefined4 *)(pcVar23 + 0xc) = uVar21;
      cVar3 = s_even_if_it_doesn_t_exist__zip_wi_00036838[0x38];
      uVar19 = s_even_if_it_doesn_t_exist__zip_wi_00036838._52_4_;
      pcVar12 = pcVar12 + 0x10;
      pcVar30 = pcVar23 + 0x10;
    } while (bVar32);
    uVar10 = 3;
    *(undefined4 *)(pcVar23 + 0x10) = s_even_if_it_doesn_t_exist__zip_wi_00036838._48_4_;
    *(undefined4 *)(pcVar23 + 0x14) = uVar19;
    pcVar23[0x18] = cVar3;
    FUN_000194cc(&DAT_00066dcc,&DAT_000369fc);
  }
  return uVar10;
code_r0x0001d894:
  if (((DAT_00049e00 != 'P') || ((DAT_00049e01 != 'K' || (DAT_00049e02 != '\x05')))) ||
     (DAT_00049e03 != '\x06')) goto LAB_0001d8d4;
  goto LAB_0001d8c4;
}



/* ===== FUN_0001ee50 @ 0001ee50 size=6268 ===== */

/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 FUN_0001ee50(void)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined2 uVar10;
  int iVar11;
  int iVar12;
  FILE *pFVar13;
  long lVar14;
  size_t sVar15;
  int *piVar16;
  long lVar17;
  char *pcVar18;
  int *piVar19;
  char *pcVar20;
  uint *puVar21;
  void *__ptr;
  void *pvVar22;
  uint uVar23;
  undefined4 uVar24;
  uint uVar25;
  uint uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  uint uVar29;
  byte bVar30;
  byte *pbVar31;
  char *pcVar33;
  char *pcVar34;
  bool bVar35;
  bool bVar36;
  FILE *local_c4;
  int local_c0;
  uint *local_94;
  char local_7c;
  char local_7b;
  char local_7a;
  char local_79;
  undefined4 local_54;
  uint local_50;
  uint local_4c;
  undefined1 local_48;
  undefined1 local_47;
  undefined2 local_46;
  ushort local_44;
  undefined1 local_42;
  undefined1 local_41;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  undefined1 local_38;
  undefined1 local_37;
  ushort local_36;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  byte *pbVar32;
  
  pcVar20 = DAT_00066db0;
  uVar28 = 0;
  DAT_00066dc4 = 0;
  DAT_0004bb0c = 0;
  DAT_000681c0 = 0;
  DAT_000681c4 = 0;
  DAT_0004bb08 = 0;
  if ((((DAT_00066db0 == (char *)0x0) || (*DAT_00066db0 == '\0')) ||
      (iVar11 = strcmp(DAT_00066db0,"-"), iVar11 == 0)) ||
     (pFVar13 = fopen(pcVar20,"r"), pFVar13 == (FILE *)0x0)) {
    iVar11 = DAT_0004bc58;
    if (DAT_0004bbc8 == 0) {
      if (DAT_0004bc58 == 2) goto LAB_0001f3f8;
      iVar12 = strcmp(DAT_0004bb80,DAT_0004bb78);
      if (iVar12 != 0) {
        if (iVar11 == 1) {
          FUN_000194cc("No .zip file found\n        ",
                       "(If all you have are splits (.z01, .z02, ...) and no .zip, try -FF)");
        }
                    /* WARNING: Subroutine does not return */
        FUN_000187c0(0x12,DAT_00066db0);
      }
    }
    else if (DAT_0004bc58 == 2) {
LAB_0001f3f8:
      FUN_0001d720();
      return 0;
    }
    return 0;
  }
  DAT_0004bb08 = 1;
  if (DAT_0004bc58 != 2) {
    fclose(pFVar13);
    if ((DAT_0004bc58 == 2) && (DAT_0004bc50 == 0)) {
      uVar28 = FUN_0001d720();
    }
    else {
      pFVar13 = fopen(DAT_0004bb80,"r");
      DAT_0004bb84 = pFVar13;
      if (pFVar13 == (FILE *)0x0) {
        uVar28 = 0x12;
        FUN_000194cc("could not open input archive",DAT_0004bb80);
      }
      else {
        iVar11 = fseek(pFVar13,0,2);
        if (((iVar11 == 0) && (lVar14 = ftell(pFVar13), -1 < lVar14)) &&
           (iVar11 = fseek(pFVar13,lVar14,0), iVar11 == 0)) {
          fread(&local_54,1,1,pFVar13);
          iVar11 = feof(pFVar13);
          if (iVar11 != 0) {
            rewind(pFVar13);
            iVar11 = fseek(DAT_0004bb84,-0x20000,2);
            if (((iVar11 == 0) &&
                (lVar14 = ftell(DAT_0004bb84), pFVar13 = DAT_0004bb84, lVar14 != -1)) ||
               (iVar11 = fseek(DAT_0004bb84,0,0), pFVar13 = DAT_0004bb84, iVar11 == 0)) {
              while ((iVar11 = feof(pFVar13), iVar11 == 0 &&
                     (iVar11 = FUN_00019b14(pFVar13), iVar11 != 0))) {
                if (((DAT_00049e00 == 'P') && ((DAT_00049e01 == 'K' && (DAT_00049e02 == '\x05'))))
                   && (DAT_00049e03 == '\x06')) {
                  do {
                    lVar14 = ftell(DAT_0004bb84);
                    pFVar13 = DAT_0004bb84;
                    do {
                      iVar11 = feof(pFVar13);
                      if ((iVar11 != 0) || (iVar11 = FUN_00019b14(pFVar13), iVar11 == 0)) {
                        iVar11 = fseek(DAT_0004bb84,lVar14,0);
                        if (iVar11 != 0) goto LAB_0001f4b4;
                        fread(&local_54,1,0x12,DAT_0004bb84);
                        uVar10 = local_46;
                        uVar9 = local_47;
                        uVar8 = local_48;
                        uVar23 = (uint)local_44;
                        DAT_0004bb6c = local_54 & 0xffff;
                        DAT_0004bb70 = DAT_0004bb6c + 1;
                        uVar3 = local_50 >> 0x10;
                        uVar29 = local_54 >> 0x10;
                        DAT_000681c4 = local_44;
                        uVar4 = local_54 >> 0x18;
                        uVar25 = local_4c & 0xff;
                        uVar26 = local_4c >> 8;
                        uVar5 = local_4c >> 0x10;
                        uVar6 = local_4c >> 0x18;
                        if (uVar23 != 0) {
                          DAT_0004bb04 = malloc(uVar23 + 1);
                          if (DAT_0004bb04 == (void *)0x0) goto LAB_0001fb10;
                          sVar15 = fread(DAT_0004bb04,uVar23,1,DAT_0004bb84);
                          if (sVar15 != 1) {
                            free(DAT_0004bb04);
                            DAT_0004bb04 = (void *)0x0;
                            iVar11 = ferror(DAT_0004bb84);
                            goto joined_r0x0001fa58;
                          }
                          *(undefined1 *)((int)DAT_0004bb04 + (uint)DAT_000681c4) = 0;
                        }
                        uVar23 = DAT_0004bb70;
                        if (uVar3 == 0) {
                          fclose(DAT_0004bb84);
                          uVar28 = 0;
                          DAT_0004bb84 = (FILE *)0x0;
                          goto LAB_0001f3ec;
                        }
                        iVar11 = CONCAT22(uVar10,CONCAT11(uVar9,uVar8));
                        if (DAT_0004bb70 == 1) {
                          local_c4 = DAT_0004bb84;
                          if (DAT_0004bb30 != 0) goto LAB_0001f2d8;
LAB_0001f5b8:
                          DAT_0004bb84 = local_c4;
                          if (DAT_0004bc58 != 1) goto LAB_0001f318;
                          pFVar13 = (FILE *)strcmp(DAT_0004bb80,DAT_0004bb78);
                          if (pFVar13 == (FILE *)0x0) {
                            uVar28 = 0x10;
                            fclose(local_c4);
                            DAT_0004bb84 = pFVar13;
                            FUN_000194cc("must use --out when fixing an archive",&DAT_000369fc);
                            goto LAB_0001f3ec;
                          }
LAB_0001f5e4:
                          if (uVar23 != 1) goto LAB_0001f318;
                        }
                        else {
                          sVar15 = strlen(DAT_0004bb80);
                          if (DAT_0004bc50 != 0) {
                            FUN_000194cc("Adjusting split archives not yet supported",&DAT_000369fc)
                            ;
                            uVar28 = 3;
                            goto LAB_0001f3ec;
                          }
                          if ((((sVar15 < 4) || (DAT_00066db0[sVar15 - 4] != '.')) ||
                              (*(short *)(__ctype_toupper + (uint)(byte)DAT_00066db0[sVar15 - 3] * 2
                                         ) != 0x5a)) ||
                             ((*(short *)(__ctype_toupper + (uint)(byte)DAT_00066db0[sVar15 - 2] * 2
                                         ) != 0x49 ||
                              (*(short *)(__ctype_toupper + (uint)(byte)DAT_00066db0[sVar15 - 1] * 2
                                         ) != 0x50)))) {
                            FUN_000194cc("archive name must end in .zip for splits",&DAT_000369fc);
                            fclose(DAT_0004bb84);
                            uVar28 = 0x10;
                            DAT_0004bb84 = (FILE *)0x0;
                            goto LAB_0001f3ec;
                          }
LAB_0001f2d8:
                          local_c4 = DAT_0004bb84;
                          if (DAT_0004bbb8 != 0) goto LAB_0001f5b8;
                          pFVar13 = (FILE *)strcmp(DAT_0004bb80,DAT_0004bb78);
                          if (pFVar13 == (FILE *)0x0) {
                            uVar28 = 0x10;
                            fclose(local_c4);
                            DAT_0004bb84 = pFVar13;
                            FUN_000194cc("cannot update a split archive (use --out option)",
                                         &DAT_000369fc);
                            goto LAB_0001f3ec;
                          }
                          if (DAT_0004bc58 == 1) goto LAB_0001f5e4;
LAB_0001f318:
                          if (DAT_0004bc50 == 0) {
                            local_c0 = DAT_0004bc50;
                            goto LAB_0001f338;
                          }
                        }
                        uVar26 = uVar25 | (uVar26 & 0xff) << 8 | (uVar5 & 0xff | uVar6 << 8) << 0x10
                        ;
                        if (uVar26 != 0xffffffff && iVar11 != -1) {
                          iVar12 = fseek(local_c4,(lVar14 - uVar26) + -0x50,0);
                          pFVar13 = DAT_0004bb84;
                          if (iVar12 == 0) goto LAB_0001f644;
                          fclose(DAT_0004bb84);
                          DAT_0004bb84 = (FILE *)0x0;
                          piVar19 = __errno_location();
                          iVar11 = *piVar19;
                          if (DAT_0004bc58 != 1) goto LAB_0001ff28;
                          pcVar18 = strerror(iVar11);
                          pcVar20 = "could not seek back to start of central directory: ";
                          goto LAB_00020178;
                        }
                        iVar12 = fseek(local_c4,lVar14 + -0x18,0);
                        if (iVar12 != 0) {
                          fclose(DAT_0004bb84);
                          DAT_0004bb84 = (FILE *)0x0;
                          piVar19 = __errno_location();
                          iVar11 = *piVar19;
                          if (DAT_0004bc58 != 1) goto LAB_0001ff28;
                          pcVar18 = strerror(iVar11);
                          pcVar20 = "could not seek back to Zip64 EOCDL: ";
                          goto LAB_00020178;
                        }
                        sVar15 = fread(&local_7c,1,4,DAT_0004bb84);
                        if (((sVar15 == 4) && (local_7c == 'P')) &&
                           ((local_7b == 'K' && ((local_7a == '\x06' && (local_79 == '\a')))))) {
                          fclose(DAT_0004bb84);
                          goto LAB_0001f3b4;
                        }
                        local_c0 = DAT_00049ae8;
                        if (DAT_00049ae8 != 0) goto LAB_000200f0;
                        local_c4 = DAT_0004bb84;
                        goto LAB_0001f338;
                      }
                    } while ((((DAT_00049e00 != 'P') || (DAT_00049e01 != 'K')) ||
                             (DAT_00049e02 != '\x05')) || (DAT_00049e03 != '\x06'));
                  } while( true );
                }
              }
              fclose(DAT_0004bb84);
              DAT_0004bb84 = (FILE *)0x0;
              if (DAT_0004bc58 == 1) {
                FUN_000194cc("bad archive - missing end signature",&DAT_000369fc);
                uVar28 = 3;
                FUN_000194cc("(If downloaded, was binary mode used?  If not, the",&DAT_000369fc);
                FUN_000194cc(" archive may be scrambled and not recoverable)",&DAT_000369fc);
                FUN_000194cc("Can\'t use -F to fix (try -FF)",&DAT_000369fc);
              }
              else {
                FUN_000194cc("missing end signature--probably not a zip file (did you",&DAT_000369fc
                            );
                uVar28 = 3;
                FUN_000194cc("remember to use binary mode when you transferred it?)",&DAT_000369fc);
                FUN_000194cc("(if you are trying to read a damaged archive try -F)",&DAT_000369fc);
              }
            }
            else {
LAB_0001f4b4:
              fclose(DAT_0004bb84);
              pcVar18 = DAT_0004bb80;
LAB_0001f4c8:
              uVar28 = 0xb;
              DAT_0004bb84 = (FILE *)0x0;
              FUN_000194cc("unable to seek in input file ",pcVar18);
            }
            goto LAB_0001f3ec;
          }
        }
        rewind(pFVar13);
        fclose(DAT_0004bb84);
        uVar28 = 0x14;
        DAT_0004bb84 = (FILE *)0x0;
        FUN_000194cc("input file requires Zip64 support: ",DAT_0004bb80);
      }
    }
    goto LAB_0001f3ec;
  }
  FUN_0001d720();
  if (DAT_0004bc58 == 2) {
    return 0;
  }
  goto LAB_0001f414;
LAB_0001fb10:
  uVar28 = 4;
  goto LAB_0001f3ec;
  while ((((DAT_00049e00 != 'P' || (DAT_00049e01 != 'K')) || (DAT_00049e02 != '\x01')) ||
         (DAT_00049e03 != '\x02'))) {
LAB_0001f644:
    iVar12 = feof(pFVar13);
    if ((iVar12 != 0) || (iVar12 = FUN_00019b14(pFVar13), iVar12 == 0)) {
      FUN_000194cc("central dir not where expected - could not adjust offsets",&DAT_000369fc);
      uVar28 = 3;
      FUN_000194cc("(try -FF)",&DAT_000369fc);
      goto LAB_0001f3ec;
    }
  }
  lVar17 = ftell(DAT_0004bb84);
  local_c0 = (lVar17 - iVar11) + -4;
  if (DAT_00049ae8 != 0) {
    if (local_c0 == 0) {
LAB_000200f0:
      pcVar20 = "Zip entry offsets do not need adjusting";
      pcVar18 = (char *)&DAT_00066dcc;
      do {
        pcVar33 = pcVar18;
        uVar28 = *(undefined4 *)(pcVar20 + 4);
        uVar24 = *(undefined4 *)(pcVar20 + 8);
        uVar27 = *(undefined4 *)(pcVar20 + 0xc);
        bVar35 = pcVar20 != "s do not need adjusting";
        *(undefined4 *)pcVar33 = *(undefined4 *)pcVar20;
        *(undefined4 *)(pcVar33 + 4) = uVar28;
        *(undefined4 *)(pcVar33 + 8) = uVar24;
        *(undefined4 *)(pcVar33 + 0xc) = uVar27;
        uVar28 = s_Zip_entry_offsets_do_not_need_ad_000371d8._36_4_;
        pcVar20 = pcVar20 + 0x10;
        pcVar18 = pcVar33 + 0x10;
      } while (bVar35);
      local_c0 = 0;
      *(undefined4 *)(pcVar33 + 0x10) = s_Zip_entry_offsets_do_not_need_ad_000371d8._32_4_;
      *(undefined4 *)(pcVar33 + 0x14) = uVar28;
    }
    else {
      uVar28 = FUN_00028fc0(local_c0,0,0);
      sprintf((char *)&DAT_00066dcc,"Zip entry offsets appear off by %s bytes - correcting...",
              uVar28);
    }
    FUN_000193f0(&DAT_00066dcc,&DAT_000369fc);
  }
  local_c4 = DAT_0004bb84;
LAB_0001f338:
  iVar12 = fseek(local_c4,lVar14 + -0x18,0);
  if (iVar12 == 0) {
    sVar15 = fread(&local_7c,1,4,DAT_0004bb84);
    if ((((sVar15 == 4) && (local_7c == 'P')) && (local_7b == 'K')) &&
       ((local_7a == '\x06' && (local_79 == '\a')))) {
      fclose(DAT_0004bb84);
LAB_0001f3b4:
      DAT_0004bb84 = (FILE *)0x0;
      uVar28 = 0x14;
      FUN_000194cc("found Zip64 signature - this may be a Zip64 archive",&DAT_000369fc);
      FUN_000194cc("Need PKZIP 4.5 or later compatible zip",&DAT_000369fc);
      FUN_000194cc("Set ZIP64_SUPPORT in Zip 3",&DAT_000369fc);
    }
    else {
      uVar29 = uVar29 & 0xff | uVar4 << 8;
      iVar11 = iVar11 + local_c0;
      DAT_00066dc4 = 0;
      DAT_00066db8 = iVar11;
      if (uVar29 != DAT_0004bb6c) {
        fclose(DAT_0004bb84);
        DAT_0004bb84 = (FILE *)0x0;
      }
      DAT_0004bb6c = uVar29;
      if (uVar29 < DAT_0004bb70) {
        bVar30 = 1;
        bVar35 = false;
        bVar7 = 0;
        do {
          pcVar20 = DAT_0004bb80;
          if (DAT_0004bb70 - 1 == DAT_0004bb6c) {
            sVar15 = strlen(DAT_0004bb80);
            pcVar18 = malloc(sVar15 + 1);
            if (pcVar18 == (char *)0x0) {
LAB_000205b0:
              FUN_000194cc("reading archive: ",pcVar20);
              uVar28 = 4;
              goto LAB_0001f3ec;
            }
            memcpy(pcVar18,pcVar20,sVar15 + 1);
          }
          else {
            pcVar18 = (char *)FUN_00023ad0();
          }
          if (DAT_0004bb84 == (FILE *)0x0) {
            while (DAT_0004bb84 = fopen(pcVar18,"r"), DAT_0004bb84 == (FILE *)0x0) {
              iVar12 = FUN_00023bd4(DAT_0004bb6c);
              pcVar20 = DAT_0004bb80;
              if (iVar12 == 9) {
                FUN_000194cc("could not find split: ",pcVar18);
                uVar28 = 9;
                goto LAB_0001f3ec;
              }
              if (iVar12 == 3) {
                bVar7 = 1;
                sprintf((char *)&DAT_00066dcc,"skipping disk %lu ...\n");
                FUN_000194cc(&DAT_00066dcc,&DAT_000369fc);
                goto LAB_0002025c;
              }
              if (DAT_0004bb70 - 1 == DAT_0004bb6c) {
                sVar15 = strlen(DAT_0004bb80);
                pcVar18 = malloc(sVar15 + 1);
                if (pcVar18 == (char *)0x0) goto LAB_000205b0;
                memcpy(pcVar18,pcVar20,sVar15 + 1);
              }
              else {
                pcVar18 = (char *)FUN_00023ad0(DAT_00066db0,DAT_0004bb6c);
              }
            }
          }
          if ((bool)((bVar7 ^ 1) & bVar30)) {
            iVar12 = fseek(DAT_0004bb84,iVar11,0);
            if (iVar12 != 0) {
              fclose(DAT_0004bb84);
              goto LAB_0001f4c8;
            }
            local_94 = (uint *)&DAT_0004bb0c;
          }
          while (iVar12 = FUN_00019b14(DAT_0004bb84), iVar12 != 0) {
            lVar14 = ftell(DAT_0004bb84);
            DAT_0004bb68 = lVar14;
            iVar12 = FUN_0001a1b4();
            if ((iVar12 != 0) || (iVar12 = FUN_0001a210(), iVar12 != 0)) break;
            iVar12 = FUN_0001a26c();
            pFVar13 = DAT_00066dc8;
            uVar29 = DAT_0004bb6c;
            if (iVar12 == 0) {
              if (DAT_0004bc58 != 1) {
                uVar28 = 3;
                uVar24 = FUN_00028fc0(lVar14 + -4,0,&DAT_0002fc3c);
                sprintf((char *)&DAT_00066dcc,"unexpected signature on disk %lu at %s\n",uVar29,
                        uVar24);
                FUN_000194cc(&DAT_00066dcc,&DAT_000369fc);
                FUN_000194cc("archive not in correct format: ",pcVar18);
                FUN_000194cc("(try -F to attempt recovery)",&DAT_000369fc);
                fclose(DAT_0004bb84);
                DAT_0004bb84 = (FILE *)0x0;
                goto LAB_0001f3ec;
              }
              pcVar20 = "bad archive - unexpected signature ";
              pcVar33 = (char *)&DAT_00066dcc;
              do {
                pcVar34 = pcVar33 + 0x10;
                uVar28 = *(undefined4 *)(pcVar20 + 4);
                uVar24 = *(undefined4 *)(pcVar20 + 8);
                uVar27 = *(undefined4 *)(pcVar20 + 0xc);
                bVar36 = pcVar20 != "expected signature ";
                *(undefined4 *)pcVar33 = *(undefined4 *)pcVar20;
                *(undefined4 *)(pcVar33 + 4) = uVar28;
                *(undefined4 *)(pcVar33 + 8) = uVar24;
                *(undefined4 *)(pcVar33 + 0xc) = uVar27;
                pcVar20 = pcVar20 + 0x10;
                pcVar33 = pcVar34;
              } while (bVar36);
              *(undefined4 *)pcVar34 = s_bad_archive___unexpected_signatu_00037248._32_4_;
              pbVar32 = (byte *)&DAT_00049e00;
              do {
                pbVar31 = pbVar32 + 1;
                sprintf(&local_7c,"%02x ",(uint)*pbVar32);
                strcat((char *)&DAT_00066dcc,&local_7c);
                uVar29 = DAT_0004bb6c;
                pbVar32 = pbVar31;
              } while (DAT_000206d4 != pbVar31);
              uVar28 = FUN_00028fc0(DAT_0004bb68 + -4,0,&DAT_0002fc3c);
              sprintf(&local_7c,"on disk %lu at %s\n",uVar29,uVar28);
              strcat((char *)&DAT_00066dcc,&local_7c);
              FUN_000194cc(&DAT_00066dcc,&DAT_000369fc);
              FUN_000194cc("skipping this signature...",&DAT_000369fc);
            }
            else {
              if ((DAT_0004bc5c != 0) && (DAT_0004bc58 == 1)) {
                uVar28 = FUN_00028fc0(lVar14 + -4,0,&DAT_0002fc3c);
                fprintf(pFVar13,"central directory header signature on disk %lu at %s\n",uVar29,
                        uVar28);
              }
              sVar15 = fread(&local_54,0x2a,1,DAT_0004bb84);
              if (sVar15 != 1) {
                piVar19 = __errno_location();
                pcVar20 = strerror(*piVar19);
                FUN_000194cc("reading central directory: ",pcVar20);
                if (DAT_0004bc58 == 1) {
                  FUN_000194cc("bad archive - error reading central directory",&DAT_000369fc);
                  goto LAB_0001fee8;
                }
LAB_0001f9c0:
                iVar11 = ferror(DAT_0004bb84);
joined_r0x0001fa58:
                if (iVar11 == 0) {
                  uVar28 = 2;
                }
                else {
                  uVar28 = 0xb;
                }
                goto LAB_0001f3ec;
              }
              puVar21 = malloc(0x6c);
              if (puVar21 == (uint *)0x0) {
                FUN_000194cc("reading central directory",&DAT_000369fc);
                uVar28 = 4;
                goto LAB_0001f3ec;
              }
              *puVar21 = local_54;
              puVar21[1] = local_50;
              uVar29 = (uint)CONCAT11(local_3b,local_3c);
              *(ulonglong *)(puVar21 + 2) =
                   CONCAT44(CONCAT22(local_46,CONCAT11(local_47,local_48)),local_4c);
              *(ulonglong *)(puVar21 + 4) =
                   CONCAT44(CONCAT22(CONCAT11(local_3d,local_3e),CONCAT11(local_3f,local_40)),
                            CONCAT22(CONCAT11(local_41,local_42),local_44));
              uVar1 = CONCAT11(local_39,local_3a);
              *(ushort *)(puVar21 + 6) = CONCAT11(local_3b,local_3c);
              puVar21[0x19] = (uint)(local_54._1_1_ == '\0');
              puVar21[0xb] = CONCAT22(local_30,CONCAT11(local_31,local_32));
              puVar21[10] = CONCAT22(local_2c,local_2e);
              uVar2 = CONCAT11(local_37,local_38);
              puVar21[8] = (uint)local_36;
              *(ushort *)(puVar21 + 7) = uVar1;
              puVar21[0xc] = 0;
              puVar21[0xd] = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
              puVar21[0xe] = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
              puVar21[0xf] = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
              *(ushort *)((int)puVar21 + 0x1e) = uVar2;
              puVar21[0x10] = 0;
              puVar21[0x11] = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
              puVar21[0x12] = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
              puVar21[0x13] = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
              puVar21[0x15] = 0;
              puVar21[0x14] = 0;
              *(ushort *)(puVar21 + 9) = CONCAT11(local_33,local_34);
              if (uVar29 == 0) {
                sprintf((char *)&DAT_00066dcc,"%lu",DAT_000681c0 + 1);
                FUN_000194cc("zero-length name for entry #",&DAT_00066dcc);
                if (DAT_0004bc58 != 1) {
                  uVar28 = 3;
                  goto LAB_0001f3ec;
                }
LAB_0001fee8:
                FUN_000194cc("skipping this entry...",&DAT_000369fc);
              }
              else {
                __ptr = malloc(uVar29 + 1);
                puVar21[0x10] = (uint)__ptr;
                if (__ptr == (void *)0x0) goto LAB_0001fb10;
                if (uVar1 != 0) {
                  pvVar22 = malloc((uint)uVar1);
                  puVar21[0xe] = (uint)pvVar22;
                  if (pvVar22 == (void *)0x0) goto LAB_0001fb10;
                }
                if (uVar2 != 0) {
                  pvVar22 = malloc((uint)uVar2);
                  puVar21[0xf] = (uint)pvVar22;
                  if (pvVar22 == (void *)0x0) goto LAB_0001fb10;
                }
                sVar15 = fread(__ptr,uVar29,1,DAT_0004bb84);
                if (((sVar15 != 1) ||
                    (((ushort)puVar21[7] != 0 &&
                     (sVar15 = fread((void *)puVar21[0xe],(uint)(ushort)puVar21[7],1,DAT_0004bb84),
                     sVar15 != 1)))) ||
                   ((*(ushort *)((int)puVar21 + 0x1e) != 0 &&
                    (sVar15 = fread((void *)puVar21[0xf],(uint)*(ushort *)((int)puVar21 + 0x1e),1,
                                    DAT_0004bb84), sVar15 != 1)))) {
                  if (DAT_0004bc58 != 1) goto LAB_0001f9c0;
                  piVar19 = __errno_location();
                  pcVar20 = strerror(*piVar19);
                  FUN_000194cc("error reading entry:  ",pcVar20);
                  goto LAB_0001fee8;
                }
                *(undefined1 *)(puVar21[0x10] + (uint)(ushort)puVar21[6]) = 0;
                if (DAT_00049ad8 != 3) {
                  if ((puVar21[1] & 0x800) == 0) {
                    FUN_0001a568(puVar21);
                    goto LAB_00020408;
                  }
                  pcVar33 = (char *)puVar21[0x10];
                  sVar15 = strlen(pcVar33);
                  pcVar20 = malloc(sVar15 + 1);
                  puVar21[0x13] = (uint)pcVar20;
                  if (pcVar20 != (char *)0x0) {
                    strcpy(pcVar20,pcVar33);
                    uVar29 = FUN_00025ebc(pcVar20);
                    if (uVar29 == 0) {
                      FUN_000194cc("illegal UTF-8 name: ",puVar21[0x13]);
                    }
                    else {
                      free((void *)puVar21[0x10]);
                      puVar21[0x10] = uVar29;
                    }
                    goto LAB_00020408;
                  }
LAB_000206b4:
                  FUN_000194cc("could not allocate memory: scanzipf_reg",&DAT_000369fc);
                  uVar28 = 4;
                  goto LAB_0001f3ec;
                }
LAB_00020408:
                if (((DAT_0004bc58 == 1) && (DAT_0004bb70 == 1)) || (DAT_0004bc50 != 0)) {
                  puVar21[10] = puVar21[10] + local_c0;
                }
                if ((puVar21[8] == 0) && ((!bVar35 || (puVar21[10] < DAT_00066dc4)))) {
                  bVar35 = true;
                  DAT_00066dc4 = puVar21[10];
                }
                DAT_000681c0 = DAT_000681c0 + 1;
                puVar21[0x16] = 0;
                puVar21[0x17] = 0;
                pcVar20 = (char *)FUN_0002a630(puVar21[0x10]);
                puVar21[0x11] = (uint)pcVar20;
                if (pcVar20 == (char *)0x0) goto LAB_0001fb10;
                sVar15 = strlen(pcVar20);
                pcVar33 = malloc(sVar15 + 1);
                puVar21[0xc] = (uint)pcVar33;
                if (pcVar33 == (char *)0x0) goto LAB_000206b4;
                strcpy(pcVar33,pcVar20);
                uVar29 = FUN_00025dc4(puVar21[0x10]);
                bVar36 = DAT_00049ad8 != 3;
                puVar21[0x12] = uVar29;
                if ((bVar36) && (puVar21[0x13] != 0)) {
                  pcVar20 = (char *)FUN_00025ebc();
                  if (pcVar20 == (char *)0x0) {
                    pcVar33 = (char *)puVar21[0x10];
                    sVar15 = strlen(pcVar33);
                    pcVar20 = malloc(sVar15 + 1);
                    if (pcVar20 == (char *)0x0) goto LAB_000206b4;
                    memcpy(pcVar20,pcVar33,sVar15 + 1);
                  }
                  sVar15 = strlen(pcVar20);
                  pcVar33 = malloc(sVar15 + 1);
                  puVar21[0x14] = (uint)pcVar33;
                  if (pcVar33 == (char *)0x0) goto LAB_000206b4;
                  strcpy(pcVar33,pcVar20);
                  if ((DAT_0004bba8 == 0) || (uVar29 = FUN_00025f54(puVar21[0x13]), uVar29 == 0)) {
                    sVar15 = strlen(pcVar20);
                    pcVar33 = malloc(sVar15 + 1);
                    puVar21[0x15] = (uint)pcVar33;
                    if (pcVar33 == (char *)0x0) goto LAB_000206b4;
                    strcpy(pcVar33,pcVar20);
                  }
                  else {
                    puVar21[0x15] = uVar29;
                  }
                }
                if ((DAT_0004bc5c != 0) && (DAT_0004bc58 == 0)) {
                  FUN_00019900(puVar21);
                }
                *local_94 = (uint)puVar21;
                local_94 = puVar21 + 0x1a;
                *local_94 = 0;
              }
            }
          }
          bVar30 = 0;
          fclose(DAT_0004bb84);
          DAT_0004bb84 = (FILE *)0x0;
          free(pcVar18);
          iVar12 = FUN_0001a26c();
          if (iVar12 == 0) break;
LAB_0002025c:
          DAT_0004bb6c = DAT_0004bb6c + 1;
        } while (DAT_0004bb6c < DAT_0004bb70);
      }
      if (uVar3 == DAT_000681c0) {
        uVar28 = 0;
      }
      else {
        uVar24 = FUN_00028fc0(uVar3,0,&DAT_0002fc3c);
        uVar27 = FUN_00028fc0(DAT_000681c0,0,&DAT_0002fc3c);
        uVar28 = 3;
        sprintf((char *)&DAT_00066dcc,"expected %s entries but found %s",uVar24,uVar27);
        FUN_000194cc(&DAT_00066dcc,&DAT_000369fc);
      }
    }
  }
  else {
    fclose(DAT_0004bb84);
    DAT_0004bb84 = (FILE *)0x0;
    piVar19 = __errno_location();
    iVar11 = *piVar19;
    if (DAT_0004bc58 == 1) {
      pcVar18 = strerror(iVar11);
      pcVar20 = "bad archive - could not seek back to Zip64 EOCDL: ";
LAB_00020178:
      uVar28 = 3;
      FUN_000194cc(pcVar20,pcVar18);
      FUN_000194cc("(try -FF)",&DAT_000369fc);
    }
    else {
LAB_0001ff28:
      uVar28 = 3;
      pcVar20 = strerror(iVar11);
      FUN_000194cc("reading archive fseek: ",pcVar20);
    }
  }
LAB_0001f3ec:
  if (DAT_0004bc58 != 2) {
LAB_0001f414:
    uVar3 = DAT_000681c0;
    if (DAT_000681c0 != 0) {
      uVar29 = DAT_000681c0 & 0x3fffffff;
      if (DAT_000681c0 == uVar29) {
        sVar15 = DAT_000681c0 << 2;
        piVar16 = malloc(sVar15);
        DAT_00066dc0 = piVar16;
        piVar19 = piVar16;
        iVar11 = DAT_0004bb0c;
        if (piVar16 != (int *)0x0) {
          for (; iVar11 != 0; iVar11 = *(int *)(iVar11 + 0x68)) {
            *piVar19 = iVar11;
            piVar19 = piVar19 + 1;
          }
          qsort(piVar16,uVar3,4,(__compar_fn_t)&LAB_000198d8);
          uVar3 = DAT_000681c0;
          if ((uVar29 == DAT_000681c0) &&
             (piVar16 = malloc(sVar15), DAT_00066dac = piVar16, piVar19 = piVar16,
             iVar11 = DAT_0004bb0c, piVar16 != (int *)0x0)) {
            for (; iVar11 != 0; iVar11 = *(int *)(iVar11 + 0x68)) {
              *piVar19 = iVar11;
              piVar19 = piVar19 + 1;
            }
            qsort(piVar16,uVar3,4,(__compar_fn_t)&LAB_000198ac);
            return uVar28;
          }
        }
      }
      return 4;
    }
  }
  return uVar28;
}



/* ===== FUN_000206d8 @ 000206d8 size=120 ===== */

int FUN_000206d8(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((*(short *)(param_1 + 0x1a) != 0 && *(int *)(param_1 + 0x34) != 0) &&
     (iVar1 = FUN_00019ebc(), iVar1 != 0)) {
    return iVar1;
  }
  if ((*(short *)(param_1 + 0x1c) != 0) &&
     (iVar1 = *(int *)(param_1 + 0x38), iVar1 != *(int *)(param_1 + 0x34))) {
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_00019ebc(iVar1,*(short *)(param_1 + 0x1c),1,param_2);
    return iVar1;
  }
  return 0;
}



/* ===== FUN_00020750 @ 00020750 size=764 ===== */

undefined4 FUN_00020750(void)

{
  ushort uVar1;
  char *pcVar2;
  size_t sVar3;
  int iVar4;
  void *__base;
  size_t sVar5;
  undefined4 in_r3;
  int iVar6;
  int iVar7;
  size_t sVar8;
  char *pcVar9;
  int *piVar10;
  int *piVar11;
  
  if (DAT_0004bb0c != 0) {
    iVar7 = 0;
    iVar6 = DAT_0004bb0c;
    do {
      if ((*(int *)(iVar6 + 0x58) == 1) || (*(int *)(iVar6 + 0x5c) != 0)) {
        *(undefined4 *)(iVar6 + 0x58) = 1;
        if (*(char *)(*(int *)(iVar6 + 0x40) + (uint)*(ushort *)(iVar6 + 0x18) + -1) == '/') {
LAB_00020828:
          iVar7 = iVar7 + 1;
        }
        else {
          if (DAT_0004bc5c == 0) {
            iVar4 = unlink(*(char **)(iVar6 + 0x30));
          }
          else {
            fprintf(DAT_00066dc8,"zip diagnostic: deleting file %s\n",*(char **)(iVar6 + 0x30),
                    &DAT_00066dc8,in_r3);
            iVar4 = unlink(*(char **)(iVar6 + 0x30));
          }
          if (iVar4 != 0) {
            FUN_000194cc("error deleting ",*(undefined4 *)(iVar6 + 0x30));
          }
          if (DAT_00049af0 == 0) {
            pcVar9 = *(char **)(iVar6 + 0x30);
            pcVar2 = strrchr(pcVar9,0x2f);
            if (pcVar2 == (char *)0x0) {
              *pcVar9 = '\0';
            }
            else {
              *pcVar2 = '\0';
            }
            pcVar9 = *(char **)(iVar6 + 0x40);
            pcVar2 = strrchr(pcVar9,0x2f);
            if (pcVar2 == (char *)0x0) {
              *pcVar9 = '\0';
            }
            else {
              *pcVar2 = '\0';
            }
            pcVar2 = *(char **)(iVar6 + 0x40);
            sVar3 = strlen(pcVar2);
            *(short *)(iVar6 + 0x18) = (short)sVar3;
            if ((sVar3 & 0xffff) != 0) {
              pcVar2[(sVar3 & 0xffff) - 1] = '/';
              uVar1 = *(ushort *)(iVar6 + 0x18);
              *(ushort *)(iVar6 + 0x18) = uVar1 + 1;
              *(undefined1 *)(*(int *)(iVar6 + 0x40) + (uint)uVar1) = 0;
              if (*(short *)(iVar6 + 0x18) != 0) goto LAB_00020828;
            }
          }
        }
      }
      iVar6 = *(int *)(iVar6 + 0x68);
    } while (iVar6 != 0);
    if (iVar7 != 0) {
      __base = malloc(iVar7 << 2);
      if (__base == (void *)0x0) {
        return 4;
      }
      sVar3 = 0;
      iVar6 = DAT_0004bb0c;
      if (DAT_0004bb0c == 0) {
        qsort(__base,0,4,(__compar_fn_t)&LAB_000198ec);
      }
      else {
        do {
          if ((((*(int *)(iVar6 + 0x58) != 0) && (*(ushort *)(iVar6 + 0x18) != 0)) &&
              (*(char *)(*(int *)(iVar6 + 0x40) + (uint)*(ushort *)(iVar6 + 0x18) + -1) == '/')) &&
             ((sVar3 == 0 ||
              (iVar7 = strcmp(*(char **)(iVar6 + 0x30),
                              *(char **)(*(int *)((int)__base + (sVar3 + 0x3fffffff) * 4) + 0x30)),
              iVar7 != 0)))) {
            *(int *)((int)__base + sVar3 * 4) = iVar6;
            sVar3 = sVar3 + 1;
          }
          iVar6 = *(int *)(iVar6 + 0x68);
        } while (iVar6 != 0);
        qsort(__base,sVar3,4,(__compar_fn_t)&LAB_000198ec);
        if (sVar3 != 0) {
          sVar8 = 0;
          piVar10 = (int *)((int)__base + -4);
          do {
            piVar11 = piVar10 + 1;
            pcVar2 = *(char **)(*piVar11 + 0x30);
            if (*pcVar2 != '\0') {
              sVar5 = strlen(pcVar2);
              if (pcVar2[sVar5 - 1] == '/') {
                pcVar2[sVar5 - 1] = '\0';
                pcVar2 = *(char **)(*piVar11 + 0x30);
              }
              if ((sVar8 == 0) || (iVar6 = strcmp(pcVar2,*(char **)(*piVar10 + 0x30)), iVar6 != 0))
              {
                if (DAT_0004bc5c != 0) {
                  fprintf(DAT_00066dc8,"deleting directory %s (if empty)                \n",pcVar2);
                  pcVar2 = *(char **)(*piVar11 + 0x30);
                }
                rmdir(pcVar2);
              }
            }
            sVar8 = sVar8 + 1;
            piVar10 = piVar11;
          } while (sVar3 != sVar8);
        }
      }
      free(__base);
    }
  }
  return 0;
}



/* ===== FUN_00020a4c @ 00020a4c size=504 ===== */

size_t FUN_00020a4c(char *param_1,uint param_2)

{
  char cVar1;
  size_t __n;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  
  if (DAT_0004bc4c == 0) {
    __n = read(DAT_00049e08,param_1,param_2);
    if (0xfffffffd < __n - 1) {
      return __n;
    }
  }
  else if (DAT_0004bc4c == 1) {
    pcVar6 = param_1 + (param_2 >> 1);
    __n = read(DAT_00049e08,pcVar6,param_2 >> 1);
    if (0xfffffffd < __n - 1) {
      return __n;
    }
    if (DAT_00049e0c == 0xffffffff) {
      iVar4 = FUN_00028f5c(pcVar6,__n);
      DAT_00049e0c = (uint)(iVar4 == 0);
    }
    if (DAT_00049e0c == 1) {
      memcpy(param_1,pcVar6,__n);
    }
    else {
      pcVar3 = pcVar6 + __n;
      do {
        pcVar2 = pcVar6 + 1;
        if (*pcVar6 == '\n') {
          __n = __n + 1;
          *param_1 = '\r';
          param_1[1] = '\n';
          param_1 = param_1 + 2;
        }
        else {
          *param_1 = *pcVar6;
          param_1 = param_1 + 1;
        }
        pcVar6 = pcVar2;
      } while (pcVar2 != pcVar3);
      param_1 = param_1 + -__n;
    }
  }
  else {
    __n = read(DAT_00049e08,param_1,param_2 - 1);
    if (0xfffffffd < __n - 1) {
      return __n;
    }
    if (DAT_00049e0c == 0xffffffff) {
      iVar4 = FUN_00028f5c(param_1,__n);
      DAT_00049e0c = (uint)(iVar4 == 0);
    }
    if (DAT_00049e0c != 1) {
      pcVar2 = param_1 + __n;
      param_1[__n] = '\n';
      pcVar6 = param_1;
      pcVar3 = param_1;
      do {
        while( true ) {
          pcVar5 = pcVar3 + 1;
          cVar1 = *pcVar3;
          param_1 = pcVar6 + 1;
          *pcVar6 = cVar1;
          pcVar3 = pcVar5;
          if ((cVar1 == '\r') && (*pcVar5 == '\n')) break;
          pcVar6 = param_1;
          if (pcVar2 == pcVar5) goto LAB_00020af8;
        }
        __n = __n - 1;
        param_1 = pcVar6;
      } while (pcVar2 != pcVar5);
LAB_00020af8:
      if (__n == 0) {
        __n = 1;
        read(DAT_00049e08,param_1,1);
      }
      else {
        pcVar6 = param_1 + -1;
        param_1 = param_1 + -__n;
        if (*pcVar6 == '\x1a') {
          __n = __n - 1;
        }
      }
    }
  }
  DAT_00049e10 = FUN_0002ac68(DAT_00049e10,param_1,__n);
  iVar4 = DAT_00049e14 + __n;
  if (DAT_00049e14 <= iVar4) {
    DAT_00049e14 = iVar4;
    return __n;
  }
  DAT_00049e14 = iVar4;
                    /* WARNING: Subroutine does not return */
  FUN_000187c0(6,"overflow in byte count");
}



/* ===== FUN_00020c4c @ 00020c4c size=40 ===== */

bool FUN_00020c4c(FILE *param_1)

{
  long __off;
  int iVar1;
  
  __off = ftell(param_1);
  iVar1 = fseek(param_1,__off,0);
  return iVar1 == 0;
}



/* ===== FUN_00020c74 @ 00020c74 size=184 ===== */

int FUN_00020c74(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0x7fffff;
  if (param_1 < 0x800000) {
    if (param_1 == 0) {
      return 0;
    }
    iVar1 = FUN_0002e048((param_1 - param_2) * 200,param_1);
    return (iVar1 + 1) / 2;
  }
  if (param_1 < 0xffffff00) {
    uVar2 = param_1 + 0x100 >> 9;
    if (0xfffffeff < param_2) {
      iVar1 = FUN_0002e048((uVar2 - 0x7fffff) * 200,uVar2);
      return (iVar1 + 1) / 2;
    }
  }
  else if (0xfffffeff < param_2) {
    return 0;
  }
  iVar1 = FUN_0002e048((uVar2 - (param_2 + 0x100 >> 9)) * 200,uVar2);
  return (iVar1 + 1) / 2;
}



/* ===== FUN_00020d2c @ 00020d2c size=4632 ===== */

/* WARNING: Restarted to delay deadcode elimination for space: ram */

int FUN_00020d2c(undefined2 *param_1)

{
  char cVar1;
  short sVar2;
  byte *__s;
  FILE *pFVar3;
  bool bVar4;
  size_t sVar5;
  int iVar6;
  size_t sVar7;
  byte *pbVar8;
  int iVar10;
  long lVar11;
  int *piVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  undefined2 uVar16;
  byte *pbVar17;
  byte *pbVar18;
  ushort uVar19;
  uint uVar20;
  char *pcVar21;
  char *pcVar22;
  void *__dest;
  uint uVar23;
  byte *__s_00;
  byte bVar24;
  undefined2 uVar25;
  bool bVar26;
  uint local_60;
  uint local_58;
  size_t local_54;
  void *local_4c;
  uint local_44;
  uint local_40;
  uint local_3c;
  undefined2 local_38 [2];
  undefined1 auStack_34 [16];
  byte *pbVar9;
  
  pcVar22 = *(char **)(param_1 + 0x20);
  local_3c = 0xfffffffd;
  local_44 = 0;
  sVar5 = strlen(pcVar22);
  param_1[0xc] = (short)sVar5;
  cVar1 = pcVar22[(sVar5 & 0xffff) - 1];
  DAT_00049e0c = -1;
  iVar6 = FUN_0002a694(*(undefined4 *)(param_1 + 0x18),&local_44,&local_3c,auStack_34);
  if (iVar6 == 0) {
    return 0x12;
  }
  if (local_3c == 0xfffffffd) {
    return 0x12;
  }
  if (local_3c == 0xfffffffe) {
    local_3c = 0;
    if (DAT_0004bc14 == 0) {
      DAT_0004bc20 = -1;
      local_60 = 1;
      uVar23 = 0;
    }
    else {
      local_60 = 1;
      uVar23 = 0;
    }
  }
  else {
    local_60 = (uint)(cVar1 == '/');
    if (local_60 != (local_44 & 0x1f) >> 4) {
      return -1;
    }
    if (DAT_0004bc14 == 0) {
      DAT_0004bc20 = -1;
    }
    uVar23 = local_3c;
    if (0xfffffffd < local_3c) {
      uVar23 = 0;
    }
  }
  if (DAT_00049ae8 == 0) {
LAB_0002134c:
    if ((DAT_0004bbec != 0) && (DAT_0004bc0c != 0)) {
      fwrite(&DAT_0002f9fc,1,2,DAT_0004bbe8);
      FUN_000294d8(DAT_0004bbe8,uVar23);
      fputc(0x29,DAT_0004bbe8);
      DAT_0004bb14 = 1;
      fflush(DAT_0004bbe8);
    }
  }
  else if (DAT_0004bc0c != 0) {
    fwrite(&DAT_0002f9fc,1,2,DAT_00066dc8);
    FUN_000294d8(DAT_00066dc8,uVar23);
    fputc(0x29,DAT_00066dc8);
    DAT_0004bb18 = 1;
    fflush(DAT_00066dc8);
    goto LAB_0002134c;
  }
  __dest = (void *)0x0;
  *(uint *)(param_1 + 10) = uVar23;
  iVar15 = DAT_00049ae4;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x12] = 0xffff;
  uVar23 = (uint)(ushort)param_1[0xd];
  if (iVar15 == 2) {
    local_58 = uVar23;
    if (uVar23 != 0) {
      local_4c = malloc(uVar23);
      if (local_4c == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_000187c0(4,"extra fields copy");
      }
      memcpy(local_4c,*(void **)(param_1 + 0x1a),uVar23);
      local_54 = (size_t)(ushort)param_1[0xe];
      if (local_54 != 0) goto LAB_000219e4;
      __dest = (void *)0x0;
      if (uVar23 == 0) {
        local_58 = 0;
        goto LAB_00020e78;
      }
      goto LAB_00021590;
    }
    local_54 = (size_t)(ushort)param_1[0xe];
    if (local_54 != 0) {
      local_4c = (void *)0x0;
LAB_000219e4:
      __dest = malloc(local_54);
      if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_000187c0(4,"extra fields copy");
      }
      memcpy(__dest,*(void **)(param_1 + 0x1c),local_54);
      goto LAB_00020e50;
    }
    __dest = (void *)0x0;
    local_58 = 0;
    local_4c = (void *)0x0;
  }
  else {
    local_4c = (void *)0x0;
    local_54 = 0;
    local_58 = 0;
LAB_00020e50:
    if (uVar23 != 0) {
LAB_00021590:
      free(*(void **)(param_1 + 0x1a));
    }
    if ((param_1[0xe] != 0) && (*(void **)(param_1 + 0x1a) != *(void **)(param_1 + 0x1c))) {
      free(*(void **)(param_1 + 0x1c));
    }
  }
LAB_00020e78:
  __s = DAT_00049adc;
  bVar26 = DAT_00049adc != (byte *)0x0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  DAT_000681c8 = 0;
  __s_00 = *(byte **)(param_1 + 0x18);
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  local_40 = DAT_00049af8;
  if (bVar26) {
    sVar5 = strlen((char *)__s_00);
    sVar7 = strlen((char *)__s);
    local_40 = 0;
    if (!CARRY4((uint)__s,sVar7 - 1)) {
      bVar26 = true;
      pbVar9 = __s + (sVar7 - 1);
      pbVar18 = __s_00 + (sVar5 - 1);
      do {
        pbVar8 = pbVar9 + -1;
        if (*pbVar9 - 0x3a < 2) {
          pbVar17 = __s_00 + (sVar5 - 1);
          bVar4 = true;
          if (bVar26) goto LAB_00020f34;
        }
        else {
          if (pbVar18 < __s_00) {
            bVar26 = false;
          }
          pbVar17 = pbVar18 + -1;
          bVar4 = bVar26;
          if (bVar26) {
            bVar4 = (uint)*pbVar18 == (uint)*pbVar9;
          }
        }
        bVar26 = bVar4;
        pbVar9 = pbVar8;
        pbVar18 = pbVar17;
      } while (__s <= pbVar8);
      local_40 = DAT_00049af8;
      if (bVar26) {
LAB_00020f34:
        local_40 = 0;
      }
    }
  }
  iVar10 = strcmp((char *)__s_00,"-");
  iVar15 = DAT_00049ae4;
  if (iVar10 == 0) {
    DAT_00049e08 = iVar10;
    *(int *)(param_1 + 4) = iVar6;
    iVar10 = 0;
  }
  else {
    if (DAT_00049ae4 != 0) {
      FUN_0002aa9c(param_1,auStack_34);
    }
    iVar10 = FUN_000231ec(local_44);
    if (iVar10 == 0) {
      if (local_60 == 0) {
        DAT_00049e08 = open(*(char **)(param_1 + 0x18),0);
        if (DAT_00049e08 == -1) {
          return 0x12;
        }
      }
      else {
        DAT_00049e08 = -1;
        local_40 = 0;
        local_3c = 0;
      }
    }
    else {
      DAT_00049e08 = -1;
      local_40 = 0;
    }
    iVar15 = DAT_00049ae4;
    *(int *)(param_1 + 4) = iVar6;
  }
  if (iVar15 == 2) {
    uVar13 = FUN_0001a940(local_4c,local_58,*(undefined4 *)(param_1 + 0x1a),param_1[0xd],local_38);
    free(*(void **)(param_1 + 0x1a));
    *(undefined4 *)(param_1 + 0x1a) = uVar13;
    param_1[0xd] = local_38[0];
    uVar13 = FUN_0001a940(__dest,local_54,*(undefined4 *)(param_1 + 0x1c),param_1[0xe],local_38);
    free(*(void **)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = uVar13;
    param_1[0xe] = local_38[0];
    if (local_58 != 0) {
      free(local_4c);
    }
    if (local_54 != 0) {
      free(__dest);
    }
  }
  iVar6 = DAT_0004bc60;
  uVar23 = ~local_3c >> 0x1f;
  if (local_3c == 0) {
    local_40 = local_3c;
    if (DAT_0004bc60 == 0) {
      uVar23 = 1;
      *param_1 = 0x31e;
      uVar16 = 10;
      uVar25 = 0;
    }
    else {
      uVar23 = 1;
      *param_1 = 0x14;
      uVar16 = 10;
      uVar25 = 0;
    }
  }
  else if (local_40 == 0xffffffff) {
    uVar25 = 8;
    local_40 = 8;
    if (DAT_0004bc60 == 0) {
      *param_1 = 0x31e;
      uVar16 = 0x14;
      uVar23 = 0;
    }
    else {
      uVar23 = 0;
      uVar16 = 0x14;
      *param_1 = 0x14;
    }
  }
  else {
    uVar16 = 0x31e;
    uVar25 = (undefined2)local_40;
    if (local_40 != 0) {
      uVar23 = 0;
    }
    if (DAT_0004bc60 != 0) {
      uVar16 = 0x14;
    }
    *param_1 = uVar16;
    if (local_40 == 0) {
      uVar16 = 10;
    }
    else {
      uVar16 = 0x14;
    }
  }
  param_1[1] = uVar16;
  uVar16 = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  if (local_60 == 0) {
    uVar16 = 8;
    param_1[2] = 8;
    if (DAT_0004bbb4 != 0) {
      uVar16 = 9;
      param_1[2] = 9;
      *(int *)(param_1 + 6) = *(int *)(param_1 + 4) << 0x10;
    }
  }
  else {
    param_1[2] = 0;
  }
  param_1[0x13] = uVar16;
  param_1[3] = uVar25;
  uVar20 = local_3c;
  if (uVar23 == 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    if (local_3c == 0xffffffff) {
      uVar20 = 0;
    }
  }
  else {
    *(uint *)(param_1 + 8) = local_3c;
  }
  sVar2 = param_1[0x12];
  *(uint *)(param_1 + 10) = uVar20;
  if (sVar2 == -1) {
    param_1[0x12] = 0;
  }
  if (iVar6 == 0) {
    uVar23 = *(uint *)(param_1 + 0x16) & 0xff00 | local_44;
  }
  else {
    uVar23 = local_44 & 0xff;
  }
  *(uint *)(param_1 + 0x16) = uVar23;
  iVar6 = FUN_0001b024(param_1,0);
  uVar13 = DAT_0004bb60;
  if (iVar6 != 0) {
    if (DAT_00049e08 != -1) {
      close(DAT_00049e08);
      return iVar6;
    }
    return iVar6;
  }
  *(undefined4 *)(param_1 + 0x14) = DAT_0004bb3c;
  DAT_00066db4 = (ushort)param_1[0xc] + 0x1e + (uint)(ushort)param_1[0xd] + DAT_00066db4;
  *(undefined4 *)(param_1 + 0x10) = uVar13;
  if ((local_60 == 0) && (DAT_0004bbb4 != 0)) {
    FUN_00029728(DAT_0004bbb4,*(undefined4 *)(param_1 + 6));
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0xc;
    DAT_00066db4 = DAT_00066db4 + 0xc;
  }
  iVar6 = ferror(DAT_0004bb88);
  if (iVar6 != 0) {
    if (DAT_00049e08 != -1) {
      close(DAT_00049e08);
    }
                    /* WARNING: Subroutine does not return */
    FUN_000187c0(0xe,"unexpected error on zip file");
  }
  lVar11 = ftell(DAT_0004bb88);
  iVar6 = ferror(DAT_0004bb88);
  if (iVar6 != 0) {
    clearerr(DAT_0004bb88);
  }
  pFVar3 = DAT_00066dc8;
  if (lVar11 < -1) {
    uVar13 = FUN_00028fc0(0,0);
    uVar14 = FUN_00028fc0(lVar11,0);
    fprintf(pFVar3,"last %s o %s\n",uVar13,uVar14);
                    /* WARNING: Subroutine does not return */
    FUN_000187c0(6,"seek wrap - zip file too big to write");
  }
  DAT_00049e14 = 0;
  DAT_00049e10 = 0;
  if (local_60 == 0) {
    if (local_40 == 0) {
      pcVar22 = malloc(0x4000);
      if (pcVar22 == (char *)0x0) {
        return 4;
      }
      if (iVar10 == 0) {
        while (iVar6 = FUN_00020a4c(pcVar22,0x4000), iVar6 != 0) {
          if (iVar6 == -1) {
            bVar24 = 1;
            goto LAB_000218dc;
          }
          iVar15 = FUN_00029c98(pcVar22,1,iVar6);
          if (iVar15 != iVar6) {
            if (DAT_00049e08 != -1) {
              close(DAT_00049e08);
            }
            goto LAB_00021d64;
          }
          if (DAT_0004bc14 == 0) {
            if (0 < DAT_0004bc24) {
              if ((DAT_00049ae8 != 0) && (DAT_0004bc20 == -1)) {
                if (DAT_00066dc8->_chain == (_IO_FILE *)0x0) {
                  fputc(0x20,DAT_00066dc8);
                }
                else {
                  pcVar21 = DAT_00066dc8->_IO_write_base;
                  if (pcVar21 < DAT_00066dc8->_IO_buf_base) {
                    DAT_00066dc8->_IO_write_base = pcVar21 + 1;
                    *pcVar21 = ' ';
                  }
                  else {
                    __fputc_unlocked(0x20);
                  }
                }
                fflush(DAT_00066dc8);
                DAT_0004bc20 = DAT_0004bc20 + 1;
              }
              if ((DAT_0004bc20 + 2) * 0x4000 < DAT_0004bc24) {
                DAT_0004bc20 = DAT_0004bc20 + 1;
              }
              else {
                DAT_0004bc20 = 0;
              }
            }
            if (((DAT_00049ae8 != 0 || DAT_0004bc5c != 0) && (DAT_0004bc24 != 0)) &&
               (DAT_0004bc20 == 0)) {
              if (DAT_00066dc8->_chain == (_IO_FILE *)0x0) {
                fputc(0x2e,DAT_00066dc8);
              }
              else {
                pcVar21 = DAT_00066dc8->_IO_write_base;
                if (pcVar21 < DAT_00066dc8->_IO_buf_base) {
                  DAT_00066dc8->_IO_write_base = pcVar21 + 1;
                  *pcVar21 = '.';
                }
                else {
                  __fputc_unlocked(0x2e);
                }
              }
              fflush(DAT_00066dc8);
              DAT_0004bb18 = 1;
            }
          }
        }
        free(pcVar22);
        uVar23 = DAT_00049e14;
      }
      else {
        uVar23 = readlink(*(char **)(param_1 + 0x18),pcVar22,0x4000);
        DAT_00049e10 = FUN_0002ac68(0,pcVar22,uVar23);
        uVar20 = FUN_00029c98(pcVar22,1,uVar23);
        if (uVar20 != uVar23) {
LAB_00021d64:
          free(pcVar22);
          return 10;
        }
        DAT_00049e14 = uVar23;
        if (uVar23 == 0xffffffff) {
          bVar24 = 1;
        }
        else {
          bVar24 = 0;
        }
LAB_000218dc:
        uVar23 = DAT_00049e14;
        free(pcVar22);
        if ((bool)(bVar24 & DAT_00049e08 != -1)) {
          perror("\nzip warning");
          pFVar3 = DAT_0004bbe8;
          if (DAT_0004bbe8 != (FILE *)0x0) {
            piVar12 = __errno_location();
            pcVar22 = strerror(*piVar12);
            fprintf(pFVar3,"\nzip warning: %s\n",pcVar22);
          }
          FUN_000194cc("could not read input file: ",*(undefined4 *)(param_1 + 0x24));
        }
      }
    }
    else {
      if (sVar2 == -1) {
        param_1[0x12] = 0xffff;
      }
      DAT_00049a98 = FUN_00020a4c;
      FUN_0002df5c(DAT_00021f64,0x400,1);
      FUN_0002d1c0(param_1 + 0x12,&local_40);
      FUN_0002b174(DAT_00049af4,param_1 + 2);
      uVar23 = FUN_0002b588();
      if ((param_1[0x12] == 0) && (DAT_0004bc4c != 0)) {
        if (DAT_00049e0c == 0) {
          if (DAT_0004bc4c == 1) {
            FUN_000194cc("-l used on binary file - corrupted?",&DAT_000369fc);
          }
          else {
            FUN_000194cc("-ll used on binary file - corrupted?",&DAT_000369fc);
          }
        }
        else {
          if (DAT_0004bc4c == 1) {
            pcVar22 = "has binary so -l ignored";
          }
          else {
            pcVar22 = "has binary so -ll ignored";
          }
          FUN_000194cc(pcVar22,&DAT_000369fc);
        }
      }
    }
  }
  else {
    uVar23 = 0;
  }
  if (DAT_00049e08 != -1) {
    close(DAT_00049e08);
  }
  DAT_00066db4 = DAT_00066db4 + uVar23;
  if (((DAT_0004bc4c == 0) && (local_3c != 0xffffffff)) && (local_3c != DAT_00049e14)) {
    FUN_000194cc(" file size changed while zipping ",*(undefined4 *)(param_1 + 0x18));
  }
  iVar6 = DAT_0004bbb4;
  uVar13 = DAT_00049e10;
  if (local_60 == 0) {
    *(uint *)(param_1 + 8) = uVar23;
    *(undefined4 *)(param_1 + 6) = uVar13;
    if (iVar6 != 0) {
      *(uint *)(param_1 + 8) = uVar23 + 0xc;
    }
    bVar26 = DAT_0004bbcc == 0;
    *(uint *)(param_1 + 10) = DAT_00049e14;
    if ((bVar26) &&
       (iVar6 = fseek(DAT_0004bb88,*(long *)(param_1 + 0x14),0), pFVar3 = DAT_00066dc8, iVar6 == 0))
    {
      uVar20 = uVar23;
      if (DAT_0004bbb4 != 0) {
        uVar20 = uVar23 + 0xc;
      }
      if (DAT_0004bb20 != uVar20) {
        uVar13 = FUN_00028fc0(uVar23,0);
        uVar14 = FUN_00028fc0(DAT_0004bb20,0);
        fprintf(pFVar3," s=%s, actual=%s ",uVar13,uVar14);
        error("incorrect compressed size");
      }
      param_1[3] = (short)local_40;
      if (local_40 == 0) {
        param_1[1] = 10;
      }
      else if (local_40 == 8) {
        param_1[1] = 0x14;
      }
      uVar19 = param_1[2];
      if ((uVar19 & 1) == 0) {
        uVar19 = uVar19 & 0xfff7;
        param_1[2] = uVar19;
      }
      param_1[0x13] = uVar19;
      if (((DAT_0004bb30 == 1) && (DAT_0004bb40 != DAT_0004bb88)) &&
         (iVar6 = fseek(DAT_0004bb40,*(long *)(param_1 + 0x14),0), iVar6 != 0)) {
        return 0xb;
      }
      iVar6 = FUN_0001b024(param_1,1);
      if (iVar6 != 0) {
        return iVar6;
      }
      iVar6 = fseek(DAT_0004bb88,DAT_0004bb38,0);
      if (iVar6 != 0) {
        return 0xb;
      }
      if ((param_1[2] & 1) != 0) {
        iVar6 = FUN_0001b95c(param_1);
        if (iVar6 != 0) {
          return iVar6;
        }
        DAT_00066db4 = DAT_00066db4 + 0x10;
      }
    }
    else {
      if ((uint)(ushort)param_1[3] != (local_40 & 0xffff)) {
        error("can\'t rewrite method");
      }
      if ((local_40 == 0) && ((int)local_3c < 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_000187c0(0x10,"zip -0 not supported for I/O on pipes or devices");
      }
      iVar6 = FUN_0001b95c(param_1);
      if (iVar6 != 0) {
        return iVar6;
      }
      param_1[2] = param_1[0x13];
      DAT_00066db4 = DAT_00066db4 + 0x10;
    }
  }
  else {
    *(undefined8 *)(param_1 + 8) = 0;
    param_1[2] = param_1[2] & 0xfff7;
    param_1[0x13] = param_1[0x13] & 0xfff7;
    param_1[3] = 0;
    param_1[1] = 10;
  }
  if (param_1[0xd] != 0) {
    if (*(void **)(param_1 + 0x1a) != *(void **)(param_1 + 0x1c)) {
      free(*(void **)(param_1 + 0x1a));
      *(undefined4 *)(param_1 + 0x1a) = 0;
    }
    param_1[0xd] = 0;
  }
  pFVar3 = DAT_00066dc8;
  if (DAT_00049ae8 != 0) {
    if (DAT_0004bc5c != 0) {
      uVar13 = FUN_00028fc0(DAT_00049e14,0,&DAT_0002fc3c);
      uVar14 = FUN_00028fc0(uVar23,0,&DAT_0002fc3c);
      fprintf(pFVar3,"\t(in=%s) (out=%s)",uVar13,uVar14);
    }
    pFVar3 = DAT_00066dc8;
    if (local_40 == 8) {
      uVar20 = 0x7fffff;
      if (DAT_00049e14 < 0x800000) {
        iVar6 = 0;
        if (DAT_00049e14 != 0) {
          iVar6 = DAT_00049e14 - uVar23;
          uVar20 = DAT_00049e14;
LAB_00021d38:
          iVar6 = FUN_0002e048(iVar6 * 200,uVar20);
          iVar6 = (iVar6 + 1) / 2;
        }
      }
      else {
        if (DAT_00049e14 < 0xffffff00) {
          uVar20 = DAT_00049e14 + 0x100 >> 9;
          if (0xfffffeff < uVar23) {
            iVar6 = uVar20 - 0x7fffff;
            goto LAB_00021d38;
          }
        }
        else if (0xfffffeff < uVar23) {
          iVar6 = 0;
          goto LAB_00021c70;
        }
        iVar6 = FUN_0002e048((uVar20 - (uVar23 + 0x100 >> 9)) * 200,uVar20);
        iVar6 = (iVar6 + 1) / 2;
      }
LAB_00021c70:
      fprintf(pFVar3," (deflated %d%%)\n",iVar6);
    }
    else {
      fprintf(DAT_00066dc8," (stored 0%%)\n");
    }
    DAT_0004bb18 = 0;
    fflush(DAT_00066dc8);
  }
  pFVar3 = DAT_0004bbe8;
  if (DAT_0004bbec == 0) {
    return 0;
  }
  if (local_40 != 8) {
    fprintf(DAT_0004bbe8," (stored 0%%)\n");
    goto LAB_000219b8;
  }
  uVar20 = 0x7fffff;
  if (DAT_00049e14 < 0x800000) {
    iVar6 = 0;
    if (DAT_00049e14 != 0) {
      iVar6 = FUN_0002e048((DAT_00049e14 - uVar23) * 200,DAT_00049e14);
      iVar6 = (iVar6 + 1) / 2;
    }
  }
  else if (DAT_00049e14 < 0xffffff00) {
    uVar20 = DAT_00049e14 + 0x100 >> 9;
    if (uVar23 < 0xffffff00) goto LAB_00021660;
    iVar6 = FUN_0002e048((uVar20 - 0x7fffff) * 200,uVar20);
    iVar6 = (iVar6 + 1) / 2;
  }
  else if (uVar23 < 0xffffff00) {
LAB_00021660:
    iVar6 = FUN_0002e048((uVar20 - (uVar23 + 0x100 >> 9)) * 200,uVar20);
    iVar6 = (iVar6 + 1) / 2;
  }
  else {
    iVar6 = 0;
  }
  fprintf(pFVar3," (deflated %d%%)\n",iVar6);
LAB_000219b8:
  DAT_0004bb14 = 0;
  fflush(DAT_0004bbe8);
  return 0;
}



/* ===== FUN_00021f68 @ 00021f68 size=116 ===== */

void FUN_00021f68(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  if (DAT_0004bb88 == (FILE *)0x0) {
    error("output buffer too small for in-memory compression");
  }
  if (*param_2 != 0) {
    FUN_00029c98(param_1,1);
    iVar1 = ferror(DAT_0004bb88);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_000187c0(0xe,"write error on zip file");
    }
  }
  *param_2 = 0;
  return;
}



/* ===== FUN_00021fe0 @ 00021fe0 size=140 ===== */

bool FUN_00021fe0(void)

{
  FILE *__stream;
  int iVar1;
  long lVar2;
  long lVar3;
  
  __stream = DAT_0004bb88;
  if (DAT_0004bb88 == (FILE *)0x0) {
    return true;
  }
  iVar1 = fseek(DAT_0004bb88,-1,1);
  if (((iVar1 == 0) && (lVar2 = ftell(__stream), lVar2 != -1)) &&
     (iVar1 = fseek(__stream,1,1), iVar1 == 0)) {
    lVar3 = ftell(__stream);
    return lVar2 + 1 == lVar3;
  }
  return false;
}



/* ===== FUN_00021ff0 @ 00021ff0 size=492 ===== */

int FUN_00021ff0(byte *param_1,int param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  if (param_1 != (byte *)0x0) {
    iVar2 = 0;
    do {
      uVar5 = (uint)*param_1;
      if (uVar5 < 0x80) {
        param_1 = param_1 + 1;
      }
      else {
        if (uVar5 < 0xc0) {
          return -1;
        }
        if (uVar5 < 0xe0) {
          if (0x3f < (param_1[1] ^ 0x80)) {
            return -1;
          }
          iVar4 = 2;
          uVar5 = param_1[1] & 0x3f | (uVar5 & 0x1f) << 6;
        }
        else {
          if (uVar5 < 0xf0) {
            uVar6 = (uint)param_1[1];
            if (0x3f < (uVar6 ^ 0x80)) {
              return -1;
            }
            uVar3 = (uint)param_1[2];
            if (0x3f < (uVar3 ^ 0x80)) {
              return -1;
            }
            iVar4 = 3;
          }
          else {
            if (uVar5 < 0xf8) {
              uVar6 = (uint)param_1[1];
              if (0x3f < (uVar6 ^ 0x80)) {
                return -1;
              }
              iVar4 = 4;
            }
            else if (uVar5 < 0xfc) {
              uVar6 = (uint)param_1[1];
              if (0x3f < (uVar6 ^ 0x80)) {
                return -1;
              }
              iVar4 = 5;
            }
            else {
              if (0xfd < uVar5) {
                return -1;
              }
              uVar6 = (uint)param_1[1];
              if (0x3f < (uVar6 ^ 0x80)) {
                return -1;
              }
              iVar4 = 6;
            }
            uVar3 = (uint)param_1[2];
            if (0x3f < (uVar3 ^ 0x80)) {
              return -1;
            }
            if (0x3f < (param_1[3] ^ 0x80)) {
              return -1;
            }
            if (iVar4 != 4) {
              if (0x3f < (param_1[4] ^ 0x80)) {
                return -1;
              }
              if (iVar4 == 6) {
                if (0x3f < (param_1[5] ^ 0x80)) {
                  return -1;
                }
              }
              else {
                iVar4 = 5;
              }
            }
          }
          uVar5 = uVar3 & 0x3f | (uVar6 & 0x3f | (uVar5 & 0x7f >> iVar4) << 6) << 6;
          if ((iVar4 != 3) && (uVar5 = param_1[3] & 0x3f | uVar5 << 6, iVar4 != 4)) {
            uVar5 = param_1[4] & 0x3f | uVar5 << 6;
            if (iVar4 == 6) {
              pbVar1 = param_1 + 5;
              param_1 = param_1 + 6;
              uVar5 = *pbVar1 & 0x3f | uVar5 << 6;
              if (uVar5 == 0xffffffff) {
                return -1;
              }
              goto LAB_000220f0;
            }
            iVar4 = 5;
          }
        }
        param_1 = param_1 + iVar4;
      }
LAB_000220f0:
      bVar7 = param_2 != 0;
      iVar4 = 0;
      if (bVar7) {
        iVar4 = param_3 - iVar2;
      }
      if ((bVar7 && param_3 != iVar2) && iVar4 < 0 == (bVar7 && SBORROW4(param_3,iVar2))) {
        *(uint *)(param_2 + iVar2 * 4) = uVar5;
      }
      if (uVar5 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (param_1 != (byte *)0x0);
  }
  return -1;
}



/* ===== FUN_00022204 @ 00022204 size=904 ===== */

int FUN_00022204(uint *param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
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
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  size_t __n;
  uint uVar15;
  int iVar16;
  size_t sVar17;
  bool bVar18;
  uint uVar19;
  uint uVar20;
  byte *pbVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 uVar24;
  undefined8 uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  byte local_60;
  byte local_5f [11];
  
  uVar10 = DAT_00022598;
  uVar9 = DAT_00022590;
  uVar15 = *param_1;
  if (-1 < (int)uVar15) {
    iVar16 = 0;
    do {
      param_1 = param_1 + 1;
      bVar18 = iVar16 < param_3 && param_2 != 0;
      __n = param_3 - iVar16;
      if (uVar15 < 0x7f) {
        uVar13 = uVar15 & 0xff;
        local_60 = (byte)uVar15;
        if (bVar18) {
          if (0 < (int)__n) {
            __n = 1;
          }
          strncpy((char *)(param_2 + iVar16),(char *)&local_60,__n);
          uVar13 = (uint)local_60;
        }
        if (uVar13 == 0) {
          return iVar16;
        }
        sVar17 = 1;
      }
      else {
        uVar20 = 0x3f;
        uVar11 = 0x80;
        uVar19 = 0;
        uVar13 = uVar15;
        do {
          uVar14 = uVar19;
          uVar20 = (int)uVar20 >> 1;
          uVar13 = uVar13 >> 6;
          uVar19 = uVar14 + 1;
          uVar11 = (int)uVar11 >> 1 | 0x80;
        } while ((uVar13 & ~uVar20) != 0);
        sVar17 = uVar14 + 2;
        local_60 = (byte)uVar11 | (byte)(uVar15 >> (uVar19 * 6 & 0xff));
        if ((int)uVar14 < 0xf) {
          pbVar12 = local_5f;
LAB_0002235c:
          uVar13 = uVar14 * 6;
          *pbVar12 = (byte)(uVar15 >> (uVar13 & 0xff)) & 0x3f | 0x80;
          if (((((uVar14 != 0) &&
                (pbVar12[1] = (byte)(uVar15 >> (uVar13 - 6 & 0xff)) & 0x3f | 0x80, uVar14 != 1)) &&
               (pbVar12[2] = (byte)(uVar15 >> (uVar13 - 0xc & 0xff)) & 0x3f | 0x80, uVar14 != 2)) &&
              ((((pbVar12[3] = (byte)(uVar15 >> (uVar13 - 0x12 & 0xff)) & 0x3f | 0x80, uVar14 != 3
                 && (pbVar12[4] = (byte)(uVar15 >> (uVar13 - 0x18 & 0xff)) & 0x3f | 0x80,
                    uVar14 != 4)) &&
                ((pbVar12[5] = (byte)(uVar15 >> (uVar13 - 0x1e & 0xff)) & 0x3f | 0x80, uVar14 != 5
                 && ((pbVar12[6] = (byte)(uVar15 >> (uVar13 - 0x24 & 0xff)) & 0x3f | 0x80,
                     uVar14 != 6 &&
                     (pbVar12[7] = (byte)(uVar15 >> (uVar13 - 0x2a & 0xff)) & 0x3f | 0x80,
                     uVar14 != 7)))))) &&
               (pbVar12[8] = (byte)(uVar15 >> (uVar13 - 0x30 & 0xff)) & 0x3f | 0x80, uVar14 != 8))))
             && ((((pbVar12[9] = (byte)(uVar15 >> (uVar13 - 0x36 & 0xff)) & 0x3f | 0x80, uVar14 != 9
                   && (pbVar12[10] = (byte)(uVar15 >> (uVar13 - 0x3c & 0xff)) & 0x3f | 0x80,
                      uVar14 != 10)) &&
                  (pbVar12[0xb] = (byte)(uVar15 >> (uVar13 - 0x42 & 0xff)) & 0x3f | 0x80,
                  uVar14 != 0xb)) &&
                 ((pbVar12[0xc] = (byte)(uVar15 >> (uVar13 - 0x48 & 0xff)) & 0x3f | 0x80,
                  uVar14 != 0xc &&
                  (pbVar12[0xd] = (byte)(uVar15 >> (uVar13 - 0x4e & 0xff)) & 0x3f | 0x80,
                  uVar14 != 0xd)))))) {
            pbVar12[0xe] = (byte)(uVar15 >> (uVar13 - 0x54 & 0xff)) & 0x3f | 0x80;
          }
        }
        else {
          auVar28._8_8_ = CONCAT44(uVar14,uVar14);
          auVar28._0_8_ = CONCAT44(uVar14,uVar14);
          pbVar21 = local_5f;
          auVar22._8_8_ = uVar10;
          auVar22._0_8_ = uVar9;
          auVar28 = VectorAdd(auVar28,auVar22,4);
          auVar1._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
          auVar1._0_8_ = 0xf0000000f;
          pbVar12 = pbVar21 + (uVar19 & 0xfffffff0);
          auVar5._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
          auVar5._0_8_ = 0x600000006;
          auVar5 = *(undefined1 (*) [16])(auVar5 << 0x40 | auVar5);
          auVar8._8_8_ = CONCAT44(uVar15,uVar15);
          auVar8._0_8_ = CONCAT44(uVar15,uVar15);
          auVar2._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
          auVar2._0_8_ = 0x300000003;
          auVar3._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
          auVar3._0_8_ = 0x700000007;
          auVar4._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
          auVar4._0_8_ = 0xb0000000b;
          auVar6._8_8_ = SUB158(SUB1615((undefined1  [16])0x0,1),7);
          auVar6._0_8_ = 0x3f3f3f3f3f3f3f3f;
          auVar7._8_8_ = SUB158(SUB1615((undefined1  [16])0x0,1),7);
          auVar7._0_8_ = 0x8080808080808080;
          do {
            auVar22 = VectorAdd(auVar28,~*(undefined1 (*) [16])(auVar2 << 0x40 | auVar2),4);
            auVar26 = VectorAdd(auVar28,~*(undefined1 (*) [16])(auVar3 << 0x40 | auVar3),4);
            auVar27 = VectorAdd(auVar28,~*(undefined1 (*) [16])(auVar4 << 0x40 | auVar4),4);
            auVar23 = VectorMultiply(auVar28,auVar5,4);
            auVar22 = VectorMultiply(auVar22,auVar5,4);
            auVar26 = VectorMultiply(auVar26,auVar5,4);
            auVar27 = VectorMultiply(auVar27,auVar5,4);
            auVar22 = FloatVectorNeg(auVar22,1,4);
            auVar23 = FloatVectorNeg(auVar23,1,4);
            auVar26 = FloatVectorNeg(auVar26,1,4);
            auVar22 = VectorShiftLeft(auVar8,auVar22,4,1);
            auVar27 = FloatVectorNeg(auVar27,1,4);
            auVar26 = VectorShiftLeft(auVar8,auVar26,4,1);
            auVar23 = VectorShiftLeft(auVar8,auVar23,4,1);
            auVar27 = VectorShiftLeft(auVar8,auVar27,4,1);
            uVar24 = VectorCopyNarrow(auVar23,4);
            uVar25 = VectorCopyNarrow(auVar22,4);
            auVar28 = VectorAdd(auVar28,~*(undefined1 (*) [16])(auVar1 << 0x40 | auVar1),4);
            auVar26._0_8_ = VectorCopyNarrow(auVar26,4);
            auVar26._8_8_ = VectorCopyNarrow(auVar27,4);
            auVar23._8_8_ = uVar25;
            auVar23._0_8_ = uVar24;
            auVar27._0_8_ = VectorCopyNarrow(auVar23,2);
            auVar27._8_8_ = VectorCopyNarrow(auVar26,2);
            auVar22 = auVar27 & *(undefined1 (*) [16])(auVar6 << 0x40 | auVar6) |
                      *(undefined1 (*) [16])(auVar7 << 0x40 | auVar7);
            *(longlong *)pbVar21 = auVar22._0_8_;
            *(longlong *)(pbVar21 + 8) = auVar22._8_8_;
            pbVar21 = pbVar21 + 0x10;
          } while (pbVar21 != pbVar12);
          uVar13 = uVar19 & 0xfffffff0;
          uVar14 = uVar14 - uVar13;
          pbVar12 = local_5f + uVar13;
          if (uVar13 != uVar19) goto LAB_0002235c;
        }
        if (bVar18) {
          if ((int)sVar17 < (int)__n) {
            __n = sVar17;
          }
          strncpy((char *)(param_2 + iVar16),(char *)&local_60,__n);
        }
      }
      uVar15 = *param_1;
      iVar16 = iVar16 + sVar17;
    } while (-1 < (int)uVar15);
  }
  return -1;
}



/* ===== FUN_000225a0 @ 000225a0 size=180 ===== */

undefined4 FUN_000225a0(char *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  char acStack_44 [56];
  
  if (((char *)(&DAT_000492b4)[param_2 * 6] == (char *)0x0) ||
     (*(char *)(&DAT_000492b4)[param_2 * 6] == '\0')) {
    if (param_3 == 0) {
      uVar1 = (&DAT_000492a0)[param_2 * 6];
    }
    else {
      uVar1 = (&DAT_000492a4)[param_2 * 6];
    }
    sprintf(acStack_44,"\'%s\'",uVar1);
  }
  else {
    if (param_3 == 0) {
      uVar1 = (&DAT_000492a0)[param_2 * 6];
    }
    else {
      uVar1 = (&DAT_000492a4)[param_2 * 6];
    }
    sprintf(acStack_44,"\'%s\' (%s)",uVar1);
  }
  sprintf(&DAT_0004a278,param_1,acStack_44);
  return 0;
}



/* ===== FUN_00022654 @ 00022654 size=308 ===== */

void * FUN_00022654(FILE *param_1)

{
  uint uVar1;
  size_t sVar2;
  void *__dest;
  byte *pbVar3;
  _IO_FILE *p_Var4;
  char *pcVar5;
  char *pcVar6;
  char acStack_2344 [9008];
  
  do {
    while (param_1->_chain != (_IO_FILE *)0x0) {
      pbVar3 = (byte *)param_1->_IO_write_base;
      if (pbVar3 < param_1->_IO_write_end) {
        param_1->_IO_write_base = (char *)(pbVar3 + 1);
        uVar1 = (uint)*pbVar3;
      }
      else {
        uVar1 = __fgetc_unlocked(param_1);
      }
      if (uVar1 != 0xd && uVar1 != 10) goto LAB_000226b0;
    }
    uVar1 = fgetc(param_1);
  } while (uVar1 == 0xd || uVar1 == 10);
LAB_000226b0:
  if (uVar1 != 0xffffffff) {
    pcVar5 = acStack_2344;
    do {
      p_Var4 = param_1->_chain;
      pcVar6 = pcVar5 + 1;
      *pcVar5 = (char)uVar1;
      if (p_Var4 == (_IO_FILE *)0x0) {
        uVar1 = fgetc(param_1);
LAB_00022714:
        if (uVar1 == 0xffffffff) goto LAB_0002271c;
      }
      else {
        pbVar3 = (byte *)param_1->_IO_write_base;
        if (param_1->_IO_write_end <= pbVar3) {
          uVar1 = __fgetc_unlocked(param_1);
          goto LAB_00022714;
        }
        param_1->_IO_write_base = (char *)(pbVar3 + 1);
        uVar1 = (uint)*pbVar3;
      }
      if (uVar1 == 10 || uVar1 == 0xd) {
LAB_0002271c:
        *pcVar6 = '\0';
        sVar2 = strlen(acStack_2344);
        __dest = malloc(sVar2 + 1);
        if (__dest != (void *)0x0) {
          memcpy(__dest,acStack_2344,sVar2 + 1);
        }
        return __dest;
      }
      pcVar5 = pcVar6;
    } while ((int)pcVar6 - (int)acStack_2344 < 9000);
  }
  return (void *)0x0;
}



/* ===== FUN_00022788 @ 00022788 size=128 ===== */

int FUN_00022788(undefined4 *param_1)

{
  void *__ptr;
  int *piVar1;
  int iVar2;
  
  iVar2 = param_1[8];
  piVar1 = (int *)param_1[7];
  __ptr = (void *)*param_1;
  *piVar1 = iVar2;
  if (iVar2 != 0) {
    *(int **)(iVar2 + 0x1c) = piVar1;
  }
  if (__ptr != (void *)0x0) {
    free(__ptr);
  }
  if ((void *)param_1[2] != (void *)0x0) {
    free((void *)param_1[2]);
  }
  if ((void *)param_1[1] != (void *)0x0) {
    free((void *)param_1[1]);
  }
  if ((void *)param_1[4] != (void *)0x0) {
    free((void *)param_1[4]);
  }
  free(param_1);
  DAT_00066dbc = DAT_00066dbc + -1;
  return iVar2;
}



/* ===== FUN_00022808 @ 00022808 size=28 ===== */

char * FUN_00022808(char *param_1,int param_2)

{
  char *pcVar1;
  
  pcVar1 = strrchr(param_1,param_2);
  if (pcVar1 != (char *)0x0) {
    param_1 = pcVar1 + 1;
  }
  return param_1;
}



/* ===== FUN_00022824 @ 00022824 size=240 ===== */

void FUN_00022824(byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = (uint)*param_1;
  if (uVar3 == 0) {
    *param_1 = 0;
    return;
  }
  iVar4 = 0;
  pbVar1 = param_1;
  do {
    pbVar1 = pbVar1 + 1;
    if (((((uVar3 & 0xfd) != 0x20) && ((uVar3 & 0xef) != 0x2a)) && (1 < uVar3 - 0x2b)) &&
       (((4 < uVar3 - 0x3b && ((uVar3 - 0x5b & 0xfd) != 0)) && (uVar3 != 0x7c)))) {
      if (uVar3 == 0x2f) {
        *param_1 = 0x2f;
        iVar4 = 0;
        param_1 = param_1 + 1;
      }
      else if (uVar3 == 0x2e) {
        if (iVar4 != 0) {
          if (iVar4 < 9) {
            *param_1 = 0x2e;
            iVar4 = 9;
            param_1 = param_1 + 1;
          }
          else {
            iVar4 = 0xc;
          }
        }
      }
      else if (iVar4 != 8 && iVar4 < 0xc) {
        iVar4 = iVar4 + 1;
        bVar2 = (byte)uVar3;
        if (uVar3 - 0x61 < 0x1a) {
          bVar2 = bVar2 - 0x20;
        }
        *param_1 = bVar2;
        param_1 = param_1 + 1;
      }
    }
    uVar3 = (uint)*pbVar1;
  } while (uVar3 != 0);
  *param_1 = 0;
  return;
}



/* ===== FUN_00022914 @ 00022914 size=236 ===== */

uint * FUN_00022914(uint *param_1)

{
  wint_t wVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  
  wVar1 = *param_1 & 0xff;
  puVar3 = param_1;
  if (wVar1 != 0) {
    iVar5 = 0;
    puVar2 = param_1;
    puVar4 = param_1 + 1;
    do {
      while (wVar1 - 0x20 < 0x20) {
        if ((~(0xfc001c05U >> (wVar1 - 0x20 & 0xff)) & 1) != 0) goto LAB_00022978;
LAB_0002294c:
        wVar1 = *puVar4 & 0xff;
        puVar3 = puVar2;
        puVar4 = puVar4 + 1;
        if (wVar1 == 0) goto LAB_000229cc;
      }
      if (((wVar1 - 0x5b & 0xfffffffd) == 0) || (wVar1 == 0x7c)) goto LAB_0002294c;
LAB_00022978:
      if (wVar1 == 0x2f) {
        *puVar2 = 0x2f;
        iVar5 = 0;
        puVar2 = puVar2 + 1;
        goto LAB_0002294c;
      }
      if (wVar1 == 0x2e) {
        if (iVar5 != 0) {
          if (iVar5 < 9) {
            *puVar2 = 0x2e;
            iVar5 = 9;
            puVar2 = puVar2 + 1;
          }
          else {
            iVar5 = 0xc;
          }
        }
        goto LAB_0002294c;
      }
      if (iVar5 == 8 || 0xb < iVar5) goto LAB_0002294c;
      wVar1 = towupper(wVar1);
      iVar5 = iVar5 + 1;
      *puVar2 = wVar1;
      wVar1 = *puVar4 & 0xff;
      puVar3 = puVar2 + 1;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    } while (wVar1 != 0);
  }
LAB_000229cc:
  *puVar3 = 0;
  return param_1;
}



/* ===== FUN_00022a00 @ 00022a00 size=812 ===== */

undefined4 FUN_00022a00(void)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  char cVar4;
  uint uVar5;
  int *__base;
  int iVar6;
  size_t sVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  int *piVar13;
  char *pcVar14;
  undefined4 *puVar15;
  uint uVar16;
  int *piVar17;
  int iVar18;
  char *pcVar19;
  char *pcVar20;
  bool bVar21;
  char acStack_141c [5112];
  
  uVar5 = DAT_00066dbc;
  if (DAT_00066dbc != 0) {
    if (((DAT_00066dbc & 0xc0000000) != 0) ||
       (__base = malloc(DAT_00066dbc << 2), __base == (int *)0x0)) {
      return 4;
    }
    if (DAT_0004bb00 != 0) {
      piVar17 = __base + -1;
      iVar11 = DAT_0004bb00;
      do {
        piVar17 = piVar17 + 1;
        *piVar17 = iVar11;
        iVar11 = *(int *)(iVar11 + 0x20);
      } while (iVar11 != 0);
    }
    qsort(__base,uVar5,4,(__compar_fn_t)&LAB_000221f0);
    iVar11 = DAT_00066dbc - 1;
    if (iVar11 == 0) {
      sVar7 = 1;
      piVar17 = __base;
    }
    else {
      iVar18 = iVar11 * 4;
      piVar17 = __base + DAT_00066dbc + 0x3fffffff;
      do {
        while( true ) {
          piVar13 = piVar17 + -1;
          puVar15 = (undefined4 *)*piVar17;
          pcVar19 = (char *)*puVar15;
          iVar6 = strcmp(*(char **)*piVar13,pcVar19);
          piVar17 = piVar13;
          if (iVar6 != 0) break;
          piVar9 = (int *)puVar15[7];
          iVar6 = puVar15[8];
          *piVar9 = iVar6;
          if (iVar6 != 0) {
            *(int **)(iVar6 + 0x1c) = piVar9;
          }
          free(pcVar19);
          if ((void *)puVar15[2] != (void *)0x0) {
            free((void *)puVar15[2]);
          }
          if ((void *)puVar15[1] != (void *)0x0) {
            free((void *)puVar15[1]);
          }
          if ((void *)puVar15[4] != (void *)0x0) {
            free((void *)puVar15[4]);
          }
          free(puVar15);
          DAT_00066dbc = DAT_00066dbc - 1;
          if (__base == piVar13) goto LAB_00022b64;
        }
        iVar11 = iVar11 + -1;
        *(undefined4 **)((int)__base + iVar18) = puVar15;
        iVar18 = iVar11 * 4;
      } while (__base != piVar13);
LAB_00022b64:
      piVar17 = (int *)((int)__base + iVar18);
      sVar7 = DAT_00066dbc;
    }
    *piVar17 = *__base;
    qsort(piVar17,sVar7,4,(__compar_fn_t)&LAB_000221dc);
    uVar5 = DAT_00066dbc;
    if (1 < DAT_00066dbc) {
      uVar16 = 1;
      do {
        puVar15 = (undefined4 *)*piVar17;
        uVar16 = uVar16 + 1;
        piVar17 = piVar17 + 1;
        iVar11 = strcmp((char *)puVar15[1],*(char **)(*piVar17 + 4));
        if (iVar11 == 0) {
          sprintf((char *)&DAT_00066dcc,"  first full name: %s\n",*puVar15);
          sprintf(acStack_141c," second full name: %s\n",*(undefined4 *)*piVar17);
          sVar7 = strlen((char *)&DAT_00066dcc);
          uVar12 = DAT_000377d0;
          uVar10 = DAT_000377cc;
          uVar8 = DAT_000377c8;
          *(undefined4 *)((int)&DAT_00066dcc + sVar7) = DAT_000377c4;
          uVar2 = DAT_000377d8;
          uVar1 = DAT_000377d4;
          *(undefined4 *)((int)&DAT_00066dd0 + sVar7) = uVar8;
          *(undefined4 *)((int)&DAT_00066dd4 + sVar7) = uVar10;
          *(undefined4 *)((int)&DAT_00066ddc + sVar7) = uVar1;
          *(undefined4 *)((int)&DAT_00066dd8 + sVar7) = uVar12;
          *(undefined1 *)((int)&DAT_00066de0 + sVar7) = uVar2;
          strcpy((char *)((int)&DAT_00066de0 + sVar7 + 1),acStack_141c);
          sprintf(acStack_141c,"name in zip file repeated: %s",*(undefined4 *)(*piVar17 + 4));
          sVar7 = strlen((char *)&DAT_00066dcc);
          uVar12 = DAT_000377d0;
          uVar10 = DAT_000377cc;
          uVar8 = DAT_000377c8;
          *(undefined4 *)((int)&DAT_00066dcc + sVar7) = DAT_000377c4;
          uVar1 = DAT_000377d4;
          *(undefined4 *)((int)&DAT_00066dd0 + sVar7) = uVar8;
          *(undefined4 *)((int)&DAT_00066dd8 + sVar7) = uVar12;
          *(undefined4 *)((int)&DAT_00066ddc + sVar7) = uVar1;
          *(undefined4 *)((int)&DAT_00066dd4 + sVar7) = uVar10;
          *(undefined1 *)((int)&DAT_00066de0 + sVar7) = uVar2;
          pcVar19 = stpcpy((char *)((int)&DAT_00066de0 + sVar7 + 1),acStack_141c);
          if (DAT_00049afc == 0) {
            pcVar14 = "\n                     this may be a result of using -j";
            do {
              pcVar20 = pcVar19;
              uVar8 = *(undefined4 *)(pcVar14 + 4);
              uVar10 = *(undefined4 *)(pcVar14 + 8);
              uVar12 = *(undefined4 *)(pcVar14 + 0xc);
              bVar21 = pcVar14 != "e a result of using -j";
              *(undefined4 *)pcVar20 = *(undefined4 *)pcVar14;
              *(undefined4 *)(pcVar20 + 4) = uVar8;
              *(undefined4 *)(pcVar20 + 8) = uVar10;
              *(undefined4 *)(pcVar20 + 0xc) = uVar12;
              cVar4 = s_this_may_be_a_result_of_using__j_000377fc[0x36];
              uVar3 = s_this_may_be_a_result_of_using__j_000377fc._52_2_;
              pcVar14 = pcVar14 + 0x10;
              pcVar19 = pcVar20 + 0x10;
            } while (bVar21);
            *(undefined4 *)(pcVar20 + 0x10) = s_this_may_be_a_result_of_using__j_000377fc._48_4_;
            *(undefined2 *)(pcVar20 + 0x14) = uVar3;
            pcVar20[0x16] = cVar4;
          }
          FUN_000194cc(&DAT_00066dcc,&DAT_000369fc);
          return 0x10;
        }
      } while (uVar5 != uVar16);
    }
    free(__base);
  }
  return 0;
}



/* ===== FUN_00022d2c @ 00022d2c size=408 ===== */

byte FUN_00022d2c(char *param_1,undefined4 param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *__s;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  bool bVar6;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  
  if (DAT_0004baf8 == 0) {
    return 1;
  }
  uVar7 = 0;
  bVar6 = DAT_0004baf4 == 0;
  bVar8 = DAT_0004baf0 == 0;
  uVar9 = DAT_0004baf8;
LAB_00022d84:
  pcVar5 = *(char **)(DAT_0004bafc + uVar7 * 8);
  if (*pcVar5 != '\0') {
    iVar4 = *(int *)(DAT_0004bafc + uVar7 * 8 + 4);
    pcVar3 = param_1;
    if (iVar4 == 0x52) {
      if (bVar8 == false) {
        iVar4 = 0;
        pcVar2 = pcVar5;
        while( true ) {
          pcVar1 = strchr(pcVar2,0x2f);
          pcVar2 = pcVar1 + 1;
          __s = param_1;
          if (pcVar1 == (char *)0x0) break;
          iVar4 = iVar4 + 1;
        }
        while( true ) {
          pcVar2 = strchr(__s,0x2f);
          if (pcVar2 == (char *)0x0) break;
          iVar4 = iVar4 + -1;
          __s = pcVar2 + 1;
        }
        if (iVar4 < 0) {
          do {
            pcVar2 = strchr(pcVar3,0x2f);
            pcVar3 = param_1;
            if (pcVar2 == (char *)0x0) break;
            iVar4 = iVar4 + 1;
            pcVar3 = pcVar2 + 1;
          } while (iVar4 != 0);
        }
        goto LAB_00022dc0;
      }
      uVar7 = uVar7 + 1;
      if (uVar9 <= uVar7) {
LAB_00022e08:
        return bVar6 & bVar8;
      }
      goto LAB_00022d84;
    }
    if ((iVar4 == 0x69) && (bVar6 != false)) goto LAB_00022dfc;
LAB_00022dc0:
    iVar4 = FUN_000286b8(pcVar5,pcVar3,param_2);
    uVar9 = DAT_0004baf8;
    if (iVar4 != 0) {
      iVar4 = *(int *)(DAT_0004bafc + uVar7 * 8 + 4);
      if (iVar4 == 0x52) {
        uVar7 = uVar7 + 1;
        bVar8 = true;
        if (DAT_0004baf8 <= uVar7) goto LAB_00022e08;
        goto LAB_00022d84;
      }
      if (iVar4 == 0x78) {
        return 0;
      }
      bVar6 = true;
    }
  }
LAB_00022dfc:
  uVar7 = uVar7 + 1;
  if (uVar9 <= uVar7) goto LAB_00022e08;
  goto LAB_00022d84;
}



/* ===== FUN_00022ec4 @ 00022ec4 size=600 ===== */

int FUN_00022ec4(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  void *__ptr;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  bool bVar6;
  
  iVar2 = strcmp(param_1,"-");
  if (iVar2 == 0) {
    FUN_000194cc("Cannot select stdin when selecting archive entries",&DAT_000369fc);
    iVar2 = -1;
  }
  else {
    __ptr = (void *)FUN_0002a4d8(param_1,0);
    if (DAT_0004bb0c == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = 1;
      iVar5 = DAT_0004bb0c;
      do {
        iVar3 = FUN_000286b8(__ptr,*(undefined4 *)(iVar5 + 0x40),param_2);
        iVar1 = DAT_0004bc5c;
        if (iVar3 != 0) {
          iVar2 = 0;
          if (DAT_0004baf8 == 0) {
            *(undefined4 *)(iVar5 + 0x58) = 1;
            puVar4 = &DAT_00037834;
            if (iVar1 != 0) goto LAB_00022f50;
          }
          else {
            iVar3 = FUN_00022d2c(*(undefined4 *)(iVar5 + 0x44),param_2,1,DAT_0004baf8,param_4);
            iVar1 = DAT_0004bc5c;
            *(int *)(iVar5 + 0x58) = iVar3;
            if (iVar1 != 0) {
              puVar4 = &DAT_00037838;
              if (iVar3 != 0) {
                puVar4 = &DAT_00037834;
              }
LAB_00022f50:
              iVar2 = 0;
              fprintf(DAT_00066dc8,"zip diagnostic: %scluding %s\n",puVar4,
                      *(undefined4 *)(iVar5 + 0x48));
            }
          }
        }
        iVar5 = *(int *)(iVar5 + 0x68);
        iVar1 = DAT_0004bb0c;
      } while (iVar5 != 0);
      for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x68)) {
        iVar5 = *(int *)(iVar1 + 0x50);
        if ((iVar5 != 0) && (iVar3 = FUN_000286b8(__ptr,iVar5,param_2), iVar3 != 0)) {
          iVar2 = 0;
          if (DAT_0004baf8 == 0) {
            bVar6 = DAT_0004bc5c != 0;
            *(undefined4 *)(iVar1 + 0x58) = 1;
            puVar4 = &DAT_00037834;
            if (bVar6) {
LAB_00023068:
              fprintf(DAT_00066dc8,"zip diagnostic: %scluding %s\n",puVar4,
                      *(undefined4 *)(iVar1 + 0x48));
              iVar2 = 0;
              fprintf(DAT_00066dc8,"     Escaped Unicode:  %s\n",*(undefined4 *)(iVar1 + 0x54));
            }
          }
          else {
            iVar3 = FUN_00022d2c(iVar5,param_2);
            iVar5 = DAT_0004bc5c;
            *(int *)(iVar1 + 0x58) = iVar3;
            if (iVar5 != 0) {
              puVar4 = &DAT_00037838;
              if (iVar3 != 0) {
                puVar4 = &DAT_00037834;
              }
              goto LAB_00023068;
            }
          }
        }
      }
      iVar2 = -iVar2;
    }
    free(__ptr);
  }
  return iVar2;
}



/* ===== FUN_0002311c @ 0002311c size=68 ===== */

uint FUN_0002311c(int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6)

{
  if (0x7bb < param_1) {
    return param_6 >> 1 | param_5 << 5 | param_4 << 0xb | param_3 << 0x10 | param_2 << 0x15 |
           (param_1 + -0x7bc) * 0x2000000;
  }
  return 0x210000;
}



/* ===== FUN_00023160 @ 00023160 size=140 ===== */

uint FUN_00023160(int *param_1)

{
  tm *ptVar1;
  uint uVar2;
  time_t tVar3;
  int iVar4;
  int iVar5;
  uint local_c [2];
  
  local_c[0] = *param_1 + 1U & 0xfffffffe;
  ptVar1 = localtime((time_t *)local_c);
  if (ptVar1 == (tm *)0x0) {
    tVar3 = time((time_t *)0x0);
    local_c[0] = tVar3 + 1U & 0xfffffffe;
    ptVar1 = localtime((time_t *)local_c);
  }
  iVar4 = ptVar1->tm_year;
  iVar5 = iVar4;
  if (0x4f < iVar4) {
    iVar5 = iVar4 + -0x50;
  }
  if (iVar4 < 0x50) {
    uVar2 = 0x210000;
  }
  else {
    uVar2 = ptVar1->tm_hour << 0xb | ptVar1->tm_mday << 0x10 | ptVar1->tm_min << 5 |
            (uint)ptVar1->tm_sec >> 1 | iVar5 << 0x19 | (ptVar1->tm_mon + 1) * 0x200000;
  }
  return uVar2;
}



/* ===== FUN_000231ec @ 000231ec size=24 ===== */

bool FUN_000231ec(uint param_1)

{
  return (param_1 >> 0x10 & 0xf000) == 0xa000;
}



/* ===== FUN_00023204 @ 00023204 size=112 ===== */

void FUN_00023204(uint param_1)

{
  tm *__tp;
  time_t local_c;
  
  local_c = time((time_t *)0x0);
  __tp = localtime(&local_c);
  __tp->tm_sec = (param_1 & 0x1f) << 1;
  __tp->tm_mon = ((param_1 & 0x1ffffff) >> 0x15) - 1;
  __tp->tm_isdst = -1;
  __tp->tm_min = (param_1 & 0x7ff) >> 5;
  __tp->tm_year = (param_1 >> 0x19) + 0x50;
  __tp->tm_hour = (param_1 & 0xffff) >> 0xb;
  __tp->tm_mday = (param_1 & 0x1fffff) >> 0x10;
  mktime(__tp);
  return;
}



/* ===== <EXTERNAL>::unlink @ 00023274 size=4 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unlink(char *__name)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_unlink_000490c8)(__name);
  return iVar1;
}



/* ===== FUN_00023278 @ 00023278 size=36 ===== */

__mode_t FUN_00023278(char *param_1)

{
  int iVar1;
  stat sStack_60;
  
  iVar1 = stat(param_1,&sStack_60);
  if (iVar1 != 0) {
    sStack_60.st_mode = 0;
  }
  return sStack_60.st_mode;
}



/* ===== <EXTERNAL>::chmod @ 0002329c size=4 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int chmod(char *__file,__mode_t __mode)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_chmod_00049080)(__file);
  return iVar1;
}



/* ===== FUN_00023368 @ 00023368 size=336 ===== */

undefined4 FUN_00023368(FILE *param_1,FILE *param_2,uint param_3)

{
  void *__ptr;
  size_t sVar1;
  size_t sVar2;
  int iVar3;
  uint uVar4;
  
  __ptr = malloc(0x4000);
  if (__ptr == (void *)0x0) {
    return 4;
  }
  if (param_3 != 0) {
    if (param_3 == 0xffffffff) {
      while (sVar2 = fread(__ptr,1,0x4000,param_1), sVar2 != 0) {
        sVar1 = fwrite(__ptr,1,sVar2,param_2);
        if (sVar2 != sVar1) {
LAB_00023470:
          free(__ptr);
          fwrite(" fcopy: write error\n",1,0x14,DAT_00066dc8);
          return 10;
        }
      }
      iVar3 = ferror(param_1);
joined_r0x00023410:
      if (iVar3 != 0) {
        free(__ptr);
        return 0xb;
      }
    }
    else {
      uVar4 = 0;
      do {
        sVar2 = param_3 - uVar4;
        if (0x3fff < sVar2) {
          sVar2 = 0x4000;
        }
        sVar2 = fread(__ptr,1,sVar2,param_1);
        if (sVar2 == 0) {
          iVar3 = ferror(param_1);
          goto joined_r0x00023410;
        }
        sVar1 = fwrite(__ptr,1,sVar2,param_2);
        uVar4 = uVar4 + sVar1;
        if (sVar1 != sVar2) goto LAB_00023470;
      } while (uVar4 < param_3 || param_3 == 0xffffffff);
    }
  }
  free(__ptr);
  return 0;
}



/* ===== FUN_000234b8 @ 000234b8 size=360 ===== */

int FUN_000234b8(char *param_1,char *param_2)

{
  int iVar1;
  FILE *__stream;
  FILE *__stream_00;
  int iVar2;
  int *piVar3;
  stat sStack_70;
  
  iVar1 = lstat(param_1,&sStack_70);
  if (iVar1 == 0) {
    if ((1 < sStack_70.st_nlink) || ((sStack_70.st_mode & 0xf000) == 0xa000)) goto LAB_000234e4;
    iVar1 = unlink(param_1);
    if (iVar1 != 0) {
      return 0xf;
    }
  }
  iVar1 = rename(param_2,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  piVar3 = __errno_location();
  if (*piVar3 != 0x12) {
    return 0xf;
  }
LAB_000234e4:
  __stream = fopen(param_2,"r");
  if (__stream == (FILE *)0x0) {
    fprintf(DAT_00066dc8," replace: can\'t open %s\n",param_2);
    iVar1 = 10;
  }
  else {
    __stream_00 = fopen(param_1,"w");
    if (__stream_00 == (FILE *)0x0) {
      fclose(__stream);
      return 0xf;
    }
    iVar1 = FUN_00023368(__stream,__stream_00,0xffffffff);
    fclose(__stream);
    iVar2 = fclose(__stream_00);
    if (iVar2 == 0) {
      if (iVar1 == 0) {
        unlink(param_2);
        return 0;
      }
      unlink(param_1);
    }
    else {
      unlink(param_1);
      if (iVar1 == 0) {
        return 0xe;
      }
    }
    if (iVar1 == 10) {
      return 0xe;
    }
  }
  return iVar1;
}



/* ===== FUN_00023620 @ 00023620 size=1152 ===== */

undefined4 FUN_00023620(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  size_t sVar6;
  char *__dest;
  char *pcVar7;
  size_t sVar8;
  char *pcVar9;
  char *pcVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  undefined4 local_450;
  char acStack_44c [4];
  char acStack_448 [4];
  char acStack_444 [4];
  char local_440 [1052];
  
  pcVar9 = DAT_0004bb78;
  sVar6 = strlen(DAT_0004bb78);
  __dest = malloc(sVar6 + 0x28);
  if (__dest == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_000187c0(4,"split path");
  }
  pcVar7 = stpcpy(__dest,pcVar9);
  iVar11 = (int)pcVar7 - (int)__dest;
  pcVar7 = pcVar7 + 1;
  do {
    pcVar7 = pcVar7 + -1;
    cVar1 = *pcVar7;
    if (cVar1 == ':' || (cVar1 == '\\' || cVar1 == '/')) {
      __dest[iVar11 + 1] = '\0';
      break;
    }
    bVar13 = iVar11 != 0;
    iVar11 = iVar11 + -1;
  } while (bVar13);
  sVar6 = strlen(pcVar9);
  pcVar7 = malloc(sVar6 + 1);
  if (pcVar7 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_000187c0(4,"split path");
  }
  sVar6 = strlen(pcVar9);
  sVar8 = strlen(__dest);
  if (sVar6 == sVar8) {
    *pcVar7 = '\0';
  }
  else {
    strcpy(pcVar7,pcVar9 + sVar8);
  }
  uVar5 = s__current_directory__000378d0._16_4_;
  uVar4 = s__current_directory__000378d0._12_4_;
  uVar3 = s__current_directory__000378d0._8_4_;
  uVar2 = s__current_directory__000378d0._4_4_;
  if (iVar11 == -1) {
    *(undefined4 *)__dest = s__current_directory__000378d0._0_4_;
    *(undefined4 *)(__dest + 4) = uVar2;
    *(undefined4 *)(__dest + 8) = uVar3;
    *(undefined4 *)(__dest + 0xc) = uVar4;
    *(undefined4 *)(__dest + 0x10) = uVar5;
  }
  if (DAT_0004bb18 != 0) {
    fputc(10,DAT_00066dc8);
  }
  fprintf(DAT_00066dc8,"\nOpening disk %d\n",param_1 + 1);
  fwrite("Hit ENTER to write to default path of\n",1,0x26,DAT_00066dc8);
  fprintf(DAT_00066dc8,"  %s\n",__dest);
  fwrite("or enter a new directory path (. for cur dir) and hit ENTER\n",1,0x3c,DAT_00066dc8);
LAB_00023794:
  fwrite("\nPath (or hit ENTER to continue): ",1,0x22,DAT_00066dc8);
  fflush(DAT_00066dc8);
  fgets((char *)&local_450,0x400,stdin);
  uVar12 = local_450 & 0xff;
  if (uVar12 != 0) {
    if (uVar12 == 10) {
      pcVar10 = (char *)0x0;
    }
    else {
      pcVar9 = (char *)&local_450;
      do {
        pcVar10 = pcVar9 + (1 - (int)&local_450);
        pcVar9 = pcVar9 + 1;
        if (*pcVar9 == '\0') goto LAB_000237f8;
      } while (*pcVar9 != '\n');
    }
    *(char *)((int)&local_450 + (int)pcVar10) = '\0';
    uVar12 = local_450 & 0xff;
    if (uVar12 != 0) {
LAB_000237f8:
      if ((uVar12 == 0x2e) && (local_450._1_1_ == '\0')) {
        local_450 = local_450 & 0xffffff00;
      }
      sVar6 = strlen((char *)&local_450);
      pcVar9 = (char *)((int)&local_450 + sVar6 + 1);
      do {
        pcVar9 = pcVar9 + -1;
        cVar1 = *pcVar9;
        if (cVar1 == ':' || (cVar1 == '\\' || cVar1 == '/')) {
          *(undefined1 *)((int)&local_450 + sVar6 + 1) = 0;
          free(DAT_0004bb78);
          sVar6 = strlen((char *)&local_450);
          pcVar9 = (char *)((int)&local_450 + sVar6 + 1);
          goto LAB_00023874;
        }
        bVar13 = sVar6 != 0;
        sVar6 = sVar6 - 1;
      } while (bVar13);
      free(DAT_0004bb78);
      local_450._0_1_ = s__current_directory__000378d0[0];
      local_450._1_1_ = s__current_directory__000378d0[1];
      local_450._2_1_ = s__current_directory__000378d0[2];
      local_450._3_1_ = s__current_directory__000378d0[3];
      acStack_44c[0] = s__current_directory__000378d0[4];
      acStack_44c[1] = s__current_directory__000378d0[5];
      acStack_44c[2] = s__current_directory__000378d0[6];
      acStack_44c[3] = s__current_directory__000378d0[7];
      acStack_448[0] = s__current_directory__000378d0[8];
      acStack_448[1] = s__current_directory__000378d0[9];
      acStack_448[2] = s__current_directory__000378d0[10];
      acStack_448[3] = s__current_directory__000378d0[0xb];
      acStack_444[0] = s__current_directory__000378d0[0xc];
      acStack_444[1] = s__current_directory__000378d0[0xd];
      acStack_444[2] = s__current_directory__000378d0[0xe];
      acStack_444[3] = s__current_directory__000378d0[0xf];
      local_440[0] = s__current_directory__000378d0[0x10];
      local_440[1] = s__current_directory__000378d0[0x11];
      local_440[2] = s__current_directory__000378d0[0x12];
      local_440[3] = s__current_directory__000378d0[0x13];
      sVar6 = strlen(pcVar7);
      DAT_0004bb78 = malloc(sVar6 + 0x28);
      if (DAT_0004bb78 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_000187c0(4,"split path");
      }
      memcpy(DAT_0004bb78,pcVar7,sVar6 + 1);
      goto LAB_000238d0;
    }
  }
  free(__dest);
  free(pcVar7);
  return 1;
  while (bVar13 = sVar6 != 0, sVar6 = sVar6 - 1, bVar13) {
LAB_00023874:
    pcVar9 = pcVar9 + -1;
    if (*pcVar9 == '/') {
      *(undefined1 *)((int)&local_450 + sVar6 + 1) = 0;
      goto LAB_00023890;
    }
  }
  local_450 = local_450 & 0xffffff00;
LAB_00023890:
  sVar6 = strlen((char *)&local_450);
  sVar8 = strlen(pcVar7);
  DAT_0004bb78 = malloc(sVar6 + sVar8 + 0x28);
  if (DAT_0004bb78 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_000187c0(4,"split path");
  }
  strcpy(DAT_0004bb78,(char *)&local_450);
  strcat(DAT_0004bb78,pcVar7);
LAB_000238d0:
  fprintf(DAT_00066dc8,"Writing to:\n  %s\n",&local_450);
  free(pcVar7);
  free(__dest);
  pcVar9 = DAT_0004bb78;
  sVar6 = strlen(DAT_0004bb78);
  __dest = malloc(sVar6 + 0x28);
  if (__dest == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_000187c0(4,"split path");
  }
  pcVar7 = stpcpy(__dest,pcVar9);
  iVar11 = (int)pcVar7 - (int)__dest;
  pcVar7 = pcVar7 + 1;
  do {
    pcVar7 = pcVar7 + -1;
    if (*pcVar7 == '/') {
      __dest[iVar11 + 1] = '\0';
      break;
    }
    bVar13 = iVar11 != 0;
    iVar11 = iVar11 + -1;
  } while (bVar13);
  sVar6 = strlen(pcVar9);
  pcVar7 = malloc(sVar6 + 1);
  if (pcVar7 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_000187c0(4,"split path");
  }
  sVar6 = strlen(__dest);
  strcpy(pcVar7,pcVar9 + sVar6);
  goto LAB_00023794;
}



/* ===== FUN_00023ad0 @ 00023ad0 size=248 ===== */

char * FUN_00023ad0(char *param_1,int param_2)

{
  size_t sVar1;
  size_t sVar2;
  char *pcVar3;
  uint uVar4;
  char acStack_18 [8];
  
  uVar4 = param_2 + 1;
  if (DAT_0004bb70 == uVar4) {
    sVar1 = strlen(param_1);
    pcVar3 = malloc(sVar1 + 1);
    if (pcVar3 != (char *)0x0) {
      strcpy(pcVar3,param_1);
      return pcVar3;
    }
                    /* WARNING: Subroutine does not return */
    FUN_000187c0(4,"base path");
  }
  if (uVar4 < 100000) {
    sprintf(acStack_18,"z%02lu",uVar4);
    sVar1 = strlen(param_1);
    sVar2 = strlen(acStack_18);
    pcVar3 = malloc((sVar1 - 3) + sVar2 + 1);
    if (pcVar3 != (char *)0x0) {
      strcpy(pcVar3,param_1);
      pcVar3[sVar1 - 3] = '\0';
      strcat(pcVar3,acStack_18);
      return pcVar3;
    }
                    /* WARNING: Subroutine does not return */
    FUN_000187c0(4,"split path");
  }
                    /* WARNING: Subroutine does not return */
  FUN_000187c0(6,"More than 99999 splits needed");
}



/* ===== FUN_00023bd4 @ 00023bd4 size=2140 ===== */

undefined4 FUN_00023bd4(int param_1)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  char *__s;
  size_t sVar8;
  char *__dest;
  char *pcVar9;
  size_t sVar10;
  char *__dest_00;
  FILE *pFVar11;
  char *pcVar12;
  int iVar13;
  uint uVar14;
  char *pcVar15;
  int iVar16;
  bool bVar17;
  char *local_1448;
  undefined4 local_1438;
  char acStack_1434 [4];
  char acStack_1430 [4];
  char acStack_142c [4];
  char local_1428 [5124];
  
  __s = (char *)FUN_00023ad0(DAT_0004bb80,param_1);
  pcVar15 = DAT_0004bb80;
  sVar8 = strlen(DAT_0004bb80);
  __dest = malloc(sVar8 + 0x28);
  if (__dest == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_000187c0(4,"split path");
  }
  pcVar9 = stpcpy(__dest,pcVar15);
  iVar16 = (int)pcVar9 - (int)__dest;
  iVar13 = iVar16 + -1;
  if (iVar16 == 0) {
LAB_000240fc:
    iVar13 = -1;
    *__dest = '\0';
  }
  else {
    cVar1 = __dest[iVar13];
    pcVar9 = __dest + iVar13;
    if (cVar1 != ':' && (cVar1 != '\\' && cVar1 != '/')) {
      do {
        iVar16 = iVar13;
        iVar13 = iVar16 + -1;
        if (iVar16 == 0) goto LAB_000240fc;
        pcVar9 = pcVar9 + -1;
        cVar1 = *pcVar9;
      } while (cVar1 != ':' && (cVar1 != '\\' && cVar1 != '/'));
    }
    __dest[iVar16] = '\0';
  }
  sVar8 = strlen(pcVar15);
  pcVar9 = malloc(sVar8 + 1);
  if (pcVar9 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_000187c0(4,"split path");
  }
  sVar8 = strlen(pcVar15);
  sVar10 = strlen(__dest);
  if (sVar8 == sVar10) {
    *pcVar9 = '\0';
  }
  else {
    strcpy(pcVar9,pcVar15 + sVar10);
  }
  sVar8 = strlen(__s);
  __dest_00 = malloc(sVar8 + 1);
  if (__dest_00 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_000187c0(4,"split path");
  }
  sVar8 = strlen(pcVar15);
  if (sVar10 == sVar8) {
    *__dest_00 = '\0';
    uVar3 = s__current_directory__000378d0._4_4_;
    uVar4 = s__current_directory__000378d0._8_4_;
    uVar5 = s__current_directory__000378d0._12_4_;
    uVar6 = s__current_directory__000378d0._16_4_;
  }
  else {
    strcpy(__dest_00,__s + sVar10);
    uVar3 = s__current_directory__000378d0._4_4_;
    uVar4 = s__current_directory__000378d0._8_4_;
    uVar5 = s__current_directory__000378d0._12_4_;
    uVar6 = s__current_directory__000378d0._16_4_;
  }
  s__current_directory__000378d0._4_4_ = uVar3;
  s__current_directory__000378d0._8_4_ = uVar4;
  s__current_directory__000378d0._12_4_ = uVar5;
  s__current_directory__000378d0._16_4_ = uVar6;
  if (iVar13 == -1) {
    *(undefined4 *)__dest = s__current_directory__000378d0._0_4_;
    *(undefined4 *)(__dest + 4) = uVar3;
    *(undefined4 *)(__dest + 8) = uVar4;
    *(undefined4 *)(__dest + 0xc) = uVar5;
    *(undefined4 *)(__dest + 0x10) = uVar6;
  }
  fwrite("\n\nCould not find:\n",1,0x12,DAT_00066dc8);
  fprintf(DAT_00066dc8,"  %s\n",__s);
  local_1448 = "\n    q      (abort archive - quit)";
  bVar7 = false;
  do {
    if (bVar7) goto LAB_00023f40;
    if (DAT_0004bc58 == 1) {
      fwrite("\nHit c      (change path to where this split file is)",1,0x35,DAT_00066dc8);
      fwrite("\n    s      (skip this split)",1,0x1d,DAT_00066dc8);
      fwrite("\n    q      (abort archive - quit)",1,0x22,DAT_00066dc8);
      fwrite("\n or ENTER  (try reading this split again): ",1,0x2c,DAT_00066dc8);
    }
    else {
      if (DAT_0004bc58 == 2) {
        fwrite("\nHit c      (change path to where this split file is)",1,0x35,DAT_00066dc8);
        fwrite("\n    s      (skip this split)",1,0x1d,DAT_00066dc8);
        fwrite("\n    q      (abort archive - quit)",1,0x22,DAT_00066dc8);
        fwrite("\n    e      (end this archive - no more splits)",1,0x2f,DAT_00066dc8);
        pcVar15 = "\n    z      (look for .zip split - the last split)";
        sVar8 = 0x32;
      }
      else {
        fwrite("\nHit c      (change path to where this split file is)",1,0x35,DAT_00066dc8);
        sVar8 = 0x22;
        pcVar15 = local_1448;
      }
      fwrite(pcVar15,1,sVar8,DAT_00066dc8);
      fwrite("\n or ENTER  (try reading this split again): ",1,0x2c,DAT_00066dc8);
    }
LAB_00023dfc:
    fflush(DAT_00066dc8);
    fgets((char *)&local_1438,0x13aa,stdin);
    uVar14 = local_1438 & 0xff;
    if (uVar14 != 0) {
      if (uVar14 == 10) {
        pcVar12 = (char *)0x0;
      }
      else {
        pcVar15 = (char *)&local_1438;
        do {
          pcVar12 = pcVar15 + (1 - (int)&local_1438);
          pcVar15 = pcVar15 + 1;
          if (*pcVar15 == '\0') goto LAB_00023e50;
        } while (*pcVar15 != '\n');
      }
      *(char *)((int)&local_1438 + (int)pcVar12) = '\0';
      uVar14 = local_1438 & 0xff;
    }
LAB_00023e50:
    sVar2 = *(short *)(__ctype_toupper + uVar14 * 2);
    if (sVar2 == 0x51) {
      return 9;
    }
    bVar17 = DAT_0004bc58 - 1U == 1;
    if (DAT_0004bc58 - 1U < 2) {
      bVar17 = sVar2 == 0x53;
    }
    if (bVar17) {
      DAT_0004bc38 = DAT_0004bb6c + 1;
      return 3;
    }
    pcVar15 = (char *)0x0;
    if (sVar2 == 0x43) {
      fwrite("\nEnter path where this split is (ENTER = same dir, . = current dir)",1,0x43,
             DAT_00066dc8);
      fwrite(&DAT_00037b60,1,3,DAT_00066dc8);
      fflush(DAT_00066dc8);
      fgets((char *)&local_1438,0x13aa,stdin);
      uVar14 = local_1438 & 0xff;
      if (uVar14 == 0) {
LAB_000243e0:
        strcpy((char *)&local_1438,__s);
        bVar7 = false;
        uVar14 = local_1438 & 0xff;
        goto LAB_00023e90;
      }
      if (uVar14 != 10) {
        pcVar12 = (char *)&local_1438;
        do {
          pcVar15 = pcVar12 + (1 - (int)&local_1438);
          pcVar12 = pcVar12 + 1;
          if (*pcVar12 == '\0') goto LAB_00023fbc;
        } while (*pcVar12 != '\n');
      }
      *(char *)((int)&local_1438 + (int)pcVar15) = '\0';
      uVar14 = local_1438 & 0xff;
      if (uVar14 == 0) goto LAB_000243e0;
LAB_00023fbc:
      bVar7 = false;
LAB_00023fc4:
      if ((uVar14 == 0x2e) && (local_1438._1_1_ == '\0')) {
        local_1438 = local_1438 & 0xffffff00;
      }
      sVar8 = strlen((char *)&local_1438);
      pcVar15 = (char *)((int)&local_1438 + sVar8 + 1);
      do {
        pcVar15 = pcVar15 + -1;
        cVar1 = *pcVar15;
        if (cVar1 == ':' || (cVar1 == '\\' || cVar1 == '/')) {
          *(undefined1 *)((int)&local_1438 + sVar8 + 1) = 0;
          free(DAT_0004bb80);
          sVar8 = strlen((char *)&local_1438);
          pcVar15 = (char *)((int)&local_1438 + sVar8 + 1);
          goto LAB_00024040;
        }
        bVar17 = sVar8 != 0;
        sVar8 = sVar8 - 1;
      } while (bVar17);
      free(DAT_0004bb80);
      local_1438._0_1_ = s__current_directory__000378d0[0];
      local_1438._1_1_ = s__current_directory__000378d0[1];
      local_1438._2_1_ = s__current_directory__000378d0[2];
      local_1438._3_1_ = s__current_directory__000378d0[3];
      acStack_1434[0] = s__current_directory__000378d0[4];
      acStack_1434[1] = s__current_directory__000378d0[5];
      acStack_1434[2] = s__current_directory__000378d0[6];
      acStack_1434[3] = s__current_directory__000378d0[7];
      acStack_1430[0] = s__current_directory__000378d0[8];
      acStack_1430[1] = s__current_directory__000378d0[9];
      acStack_1430[2] = s__current_directory__000378d0[10];
      acStack_1430[3] = s__current_directory__000378d0[0xb];
      acStack_142c[0] = s__current_directory__000378d0[0xc];
      acStack_142c[1] = s__current_directory__000378d0[0xd];
      acStack_142c[2] = s__current_directory__000378d0[0xe];
      acStack_142c[3] = s__current_directory__000378d0[0xf];
      local_1428[0] = s__current_directory__000378d0[0x10];
      local_1428[1] = s__current_directory__000378d0[0x11];
      local_1428[2] = s__current_directory__000378d0[0x12];
      local_1428[3] = s__current_directory__000378d0[0x13];
      sVar8 = strlen(pcVar9);
      DAT_0004bb80 = malloc(sVar8 + 0x28);
      if (DAT_0004bb80 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_000187c0(4,"split path");
      }
      memcpy(DAT_0004bb80,pcVar9,sVar8 + 1);
      goto LAB_0002415c;
    }
    if (DAT_0004bc58 == 2) {
      if (sVar2 == 0x45) {
        return 2;
      }
      if (sVar2 == 0x5a) {
        DAT_0004bb70 = param_1 + 1;
        free(__s);
        __s = (char *)FUN_00023ad0(DAT_0004bb80,param_1);
        local_1438 = local_1438 & 0xffffff00;
        strncat((char *)&local_1438,__s,0x13aa);
        uVar14 = local_1438 & 0xff;
      }
    }
LAB_00023e90:
    if (uVar14 != 0) goto LAB_00023fc4;
    pFVar11 = fopen(__s,"r");
    if (pFVar11 != (FILE *)0x0) {
      fclose(pFVar11);
      fprintf(DAT_00066dc8,"\nFound:  %s\n",__s);
      free(pcVar9);
      free(__dest);
      free(__dest_00);
      return 0;
    }
LAB_00024224:
    fwrite("\nCould not find or open\n",1,0x18,DAT_00066dc8);
    fprintf(DAT_00066dc8,"  %s\n",__s);
  } while( true );
  while (bVar17 = sVar8 != 0, sVar8 = sVar8 - 1, bVar17) {
LAB_00024040:
    pcVar15 = pcVar15 + -1;
    if (*pcVar15 == '/') {
      *(undefined1 *)((int)&local_1438 + sVar8 + 1) = 0;
      goto LAB_000242b8;
    }
  }
  local_1438 = local_1438 & 0xffffff00;
LAB_000242b8:
  sVar8 = strlen((char *)&local_1438);
  sVar10 = strlen(pcVar9);
  DAT_0004bb80 = malloc(sVar8 + sVar10 + 0x28);
  if (DAT_0004bb80 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_000187c0(4,"split path");
  }
  strcpy(DAT_0004bb80,(char *)&local_1438);
  strcat(DAT_0004bb80,pcVar9);
LAB_0002415c:
  free(__s);
  __s = (char *)FUN_00023ad0(DAT_0004bb80,param_1);
  free(__dest);
  pcVar15 = DAT_0004bb80;
  sVar8 = strlen(DAT_0004bb80);
  __dest = malloc(sVar8 + 0x28);
  if (__dest == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_000187c0(4,"split path");
  }
  pcVar15 = stpcpy(__dest,pcVar15);
  iVar13 = (int)pcVar15 - (int)__dest;
  pcVar15 = pcVar15 + 1;
  do {
    pcVar15 = pcVar15 + -1;
    if (*pcVar15 == '/') {
      __dest[iVar13 + 1] = '\0';
      break;
    }
    bVar17 = iVar13 != 0;
    iVar13 = iVar13 + -1;
  } while (bVar17);
  pFVar11 = fopen(__s,"r");
  if (pFVar11 == (FILE *)0x0) goto LAB_00024224;
  fclose(pFVar11);
  fprintf(DAT_00066dc8,"Found:  %s\n",__s);
LAB_00023f40:
  fwrite("\nHit c      (change path to where this split file is)",1,0x35,DAT_00066dc8);
  bVar7 = true;
  fwrite("\n    q      (abort archive - quit)",1,0x22,DAT_00066dc8);
  fwrite("\n or ENTER  (continue with this split): ",1,0x28,DAT_00066dc8);
  goto LAB_00023dfc;
}



/* ===== FUN_00024460 @ 00024460 size=168 ===== */

char * FUN_00024460(char *param_1,int param_2)

{
  size_t sVar1;
  size_t sVar2;
  char *__dest;
  char acStack_18 [8];
  
  if (99999 < param_2 + 1U) {
                    /* WARNING: Subroutine does not return */
    FUN_000187c0(6,"More than 99999 splits needed");
  }
  sprintf(acStack_18,"z%02lu",param_2 + 1U);
  sVar1 = strlen(param_1);
  sVar2 = strlen(acStack_18);
  __dest = malloc((sVar1 - 3) + sVar2 + 1);
  if (__dest != (char *)0x0) {
    strcpy(__dest,param_1);
    __dest[sVar1 - 3] = '\0';
    strcat(__dest,acStack_18);
    return __dest;
  }
                    /* WARNING: Subroutine does not return */
  FUN_000187c0(4,"split path");
}



/* ===== FUN_00024510 @ 00024510 size=112 ===== */

undefined4 FUN_00024510(undefined4 param_1,FILE *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00024460(DAT_0004bb78,param_1);
  if (DAT_0004bb1c != 0) {
    FUN_000193f0("\tClosing split ",uVar1);
  }
  fclose(param_2);
  FUN_00019804(param_3,uVar1);
  FUN_00019888(uVar1);
  return 0;
}



/* ===== FUN_00024580 @ 00024580 size=2456 ===== */

/* WARNING: Restarted to delay deadcode elimination for space: ram */

size_t FUN_00024580(void *param_1,size_t param_2,int param_3,int param_4)

{
  char cVar1;
  FILE *pFVar2;
  undefined4 uVar3;
  size_t sVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  Elf32_Ehdr *pEVar8;
  char *pcVar9;
  size_t sVar10;
  uint uVar11;
  char *pcVar12;
  char *pcVar13;
  size_t local_50;
  
  uVar11 = param_3 * param_2;
  local_50 = uVar11;
  if (param_4 == 1) {
    DAT_0004bb40 = DAT_0004bb88;
    DAT_0004bb60 = DAT_0004bb5c;
    DAT_0004bb3c = DAT_0004bb38;
    DAT_0004bb20 = 0;
    if (DAT_0004bb2c != 0) goto LAB_000245bc;
    sVar10 = uVar11;
    if (uVar11 != 0) goto LAB_00024a20;
    sVar10 = 0;
LAB_00024924:
    if (local_50 != 0) goto LAB_000245e0;
  }
  else {
    if (DAT_0004bb2c == 0) {
LAB_000248a8:
      sVar10 = uVar11;
      if (param_4 == 2) {
LAB_000248b4:
        if (DAT_00049acc == -1) {
          DAT_00049acc = DAT_0004bb5c;
          DAT_0004bb58 = DAT_0004bb38;
        }
        DAT_0004bb54 = DAT_0004bb54 + 1;
        DAT_0004bb50 = DAT_0004bb50 + 1;
      }
      if (sVar10 == 0) {
        sVar10 = 0;
      }
      else {
LAB_00024a20:
        sVar10 = fwrite(param_1,param_2,sVar10,DAT_0004bb88);
        DAT_0004bb38 = (Elf32_Ehdr *)(DAT_0004bb38->e_ident_magic_str + (sVar10 - 1));
        pEVar8 = DAT_0004bb38;
        if (param_4 == 0) {
          pEVar8 = (Elf32_Ehdr *)&DAT_0004bb20;
        }
        local_50 = uVar11 - sVar10;
        if (param_4 == 0) {
          *(size_t *)pEVar8 = *(int *)pEVar8 + sVar10;
        }
      }
      goto LAB_00024924;
    }
LAB_000245bc:
    sVar10 = DAT_0004bb2c - (int)DAT_0004bb38;
    if (uVar11 < sVar10 || uVar11 - sVar10 == 0) goto LAB_000248a8;
    if (param_4 - 1U < 3) {
      if (param_4 != 2) {
        sVar10 = 0;
        goto LAB_000245e0;
      }
      sVar10 = 0;
      goto LAB_000248b4;
    }
    if (sVar10 != 0) goto LAB_00024a20;
    sVar10 = 0;
LAB_000245e0:
    if (DAT_0004bb30 != 0) {
      DAT_0004bb24 = DAT_0004bb24 + (int)DAT_0004bb38;
      if (DAT_0004bb30 == 1) {
        iVar5 = ferror(DAT_0004bb88);
        if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_000187c0(0xe,"Could not write split");
        }
        if (DAT_0004bb30 == 2) goto LAB_00024b18;
LAB_00024b2c:
        if ((DAT_0004bb30 == 1) && (DAT_0004bb60 == DAT_0004bb5c)) {
          DAT_0004bb5c = DAT_0004bb60 + 1;
          DAT_0004bb44 = DAT_0004bb8c;
          DAT_0004bb54 = 0;
          DAT_0004bb38 = (Elf32_Ehdr *)0x0;
          goto LAB_000246dc;
        }
      }
      else if (DAT_0004bb30 == 2) {
LAB_00024b18:
        iVar5 = ferror(DAT_0004bb88);
        if ((iVar5 != 0) && (DAT_0004bb38 < &Elf32_Ehdr_00010000)) {
                    /* WARNING: Subroutine does not return */
          FUN_000187c0(0xe,"Not enough space to write split");
        }
        goto LAB_00024b2c;
      }
      pcVar7 = DAT_0004bb8c;
      pFVar2 = DAT_0004bb88;
      uVar3 = FUN_00024460(DAT_0004bb78,DAT_0004bb5c);
      if (DAT_0004bb1c != 0) {
        FUN_000193f0("\tClosing split ",uVar3);
      }
      fclose(pFVar2);
      FUN_00019804(pcVar7,uVar3);
      FUN_00019888(uVar3);
      DAT_0004bb88 = (FILE *)0x0;
      free(DAT_0004bb8c);
      DAT_0004bb8c = (char *)0x0;
      DAT_0004bb38 = (Elf32_Ehdr *)0x0;
      DAT_0004bb5c = DAT_0004bb5c + 1;
      DAT_0004bb54 = 0;
      if ((DAT_0004bb30 == 2) && (DAT_0004bb28 != 0)) {
        if (DAT_00066dc8->_chain == (_IO_FILE *)0x0) {
          fputc(7,DAT_00066dc8);
        }
        else {
          pcVar7 = DAT_00066dc8->_IO_write_base;
          if (pcVar7 < DAT_00066dc8->_IO_buf_base) {
            DAT_00066dc8->_IO_write_base = pcVar7 + 1;
            *pcVar7 = '\a';
          }
          else {
            __fputc_unlocked(7);
          }
        }
        fflush(DAT_00066dc8);
      }
LAB_000246dc:
      uVar6 = param_4 - 1;
      do {
        if ((DAT_0004bb30 == 2) && (iVar5 = FUN_00023620(DAT_0004bb5c), iVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_000187c0(9,"could not write split");
        }
        pcVar12 = DAT_00066db0;
        pcVar7 = DAT_0004bbb0;
        if (DAT_0004bbb0 == (char *)0x0) {
          sVar4 = strlen(DAT_00066db0);
          DAT_0004bb8c = malloc(sVar4 + 0xc);
          if (DAT_0004bb8c == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_000187c0(4,"allocating temp filename");
          }
          strcpy(DAT_0004bb8c,pcVar12);
          pcVar7 = DAT_0004bb8c;
          sVar4 = strlen(DAT_0004bb8c);
          pcVar12 = pcVar7;
          if ((sVar4 != 0) && (pcVar12 = pcVar7 + sVar4, (pcVar7 + sVar4)[-1] != '/')) {
            pcVar9 = pcVar7 + (sVar4 - 2);
            do {
              pcVar13 = pcVar9 + 1;
              pcVar12 = pcVar7;
              if (pcVar9 == pcVar7 + -1) break;
              cVar1 = *pcVar9;
              pcVar9 = pcVar9 + -1;
              pcVar12 = pcVar13;
            } while (cVar1 != '/');
          }
          *pcVar12 = '\0';
          pcVar7 = DAT_0004bb8c;
          sVar4 = strlen(DAT_0004bb8c);
          pcVar7 = pcVar7 + sVar4;
        }
        else {
          sVar4 = strlen(DAT_0004bbb0);
          DAT_0004bb8c = malloc(sVar4 + 0xc);
          if (DAT_0004bb8c == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_000187c0(4,"allocating temp filename");
          }
          strcpy(DAT_0004bb8c,pcVar7);
          pcVar7 = DAT_0004bb8c;
          if (*DAT_0004bb8c == '\0') {
            sVar4 = strlen(DAT_0004bb8c);
            pcVar7 = pcVar7 + sVar4;
          }
          else {
            sVar4 = strlen(DAT_0004bb8c);
            pcVar7 = pcVar7 + sVar4;
            if (pcVar7[-1] == '/') goto LAB_00024790;
          }
          *(undefined2 *)pcVar7 = DAT_0002f544;
          pcVar7 = DAT_0004bb8c;
          sVar4 = strlen(DAT_0004bb8c);
          pcVar7 = pcVar7 + sVar4;
        }
LAB_00024790:
        cVar1 = DAT_0002f550;
        uVar3 = DAT_0002f54c;
        *(undefined4 *)pcVar7 = DAT_0002f548;
        *(undefined4 *)(pcVar7 + 4) = uVar3;
        pcVar7[8] = cVar1;
        iVar5 = mkstemp(DAT_0004bb8c);
        if (iVar5 == -1) {
                    /* WARNING: Subroutine does not return */
          FUN_000187c0(10,DAT_0004bb8c);
        }
        DAT_0004bb88 = fdopen(iVar5,"w");
        if (DAT_0004bb88 == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_000187c0(10,DAT_0004bb8c);
        }
        sVar4 = fwrite((void *)((int)param_1 + sVar10),1,local_50,DAT_0004bb88);
        DAT_0004bb38 = (Elf32_Ehdr *)(DAT_0004bb38->e_ident_magic_str + (sVar4 - 1));
        pEVar8 = DAT_0004bb38;
        if (2 < uVar6) {
          pEVar8 = (Elf32_Ehdr *)&DAT_0004bb20;
        }
        sVar10 = sVar10 + sVar4;
        if (2 < uVar6) {
          *(size_t *)pEVar8 = *(int *)pEVar8 + sVar4;
        }
        pcVar7 = DAT_0004bb44;
        pFVar2 = DAT_0004bb40;
        if (local_50 <= sVar4) {
          if (uVar6 < 3) {
            if (((DAT_0004bb30 == 1) && (DAT_0004bb40 != (FILE *)0x0)) &&
               (DAT_0004bb60 != DAT_0004bb5c)) {
              uVar3 = FUN_00024460(DAT_0004bb78);
              if (DAT_0004bb1c != 0) {
                FUN_000193f0("\tClosing split ",uVar3);
              }
              fclose(pFVar2);
              FUN_00019804(pcVar7,uVar3);
              FUN_00019888(uVar3);
              free(DAT_0004bb44);
            }
            DAT_0004bb44 = DAT_0004bb8c;
            DAT_0004bb40 = DAT_0004bb88;
            DAT_0004bb3c = (Elf32_Ehdr *)0x0;
            DAT_0004bb60 = DAT_0004bb5c;
          }
          goto LAB_00024930;
        }
        if (DAT_0004bb30 != 2) {
                    /* WARNING: Subroutine does not return */
          FUN_000187c0(0xe,"Not enough room on disk");
        }
        FUN_000194cc("Not enough room on disk",&DAT_000369fc);
      } while( true );
    }
    iVar5 = ferror(DAT_0004bb88);
    if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_000187c0(0xe,"write error on zip file");
    }
  }
LAB_00024930:
  if (DAT_0004bc14 == 0) {
    return sVar10;
  }
  if (DAT_0004bc24 < 1) {
LAB_00024994:
    if (DAT_0004bc24 == 0) {
      return sVar10;
    }
  }
  else {
    if (DAT_0004bc20 == -1) {
      if (DAT_00066dc8->_chain == (_IO_FILE *)0x0) {
        fputc(0x20,DAT_00066dc8);
      }
      else {
        pcVar7 = DAT_00066dc8->_IO_write_base;
        if (pcVar7 < DAT_00066dc8->_IO_buf_base) {
          DAT_00066dc8->_IO_write_base = pcVar7 + 1;
          *pcVar7 = ' ';
        }
        else {
          __fputc_unlocked(0x20);
        }
      }
      fflush(DAT_00066dc8);
      DAT_0004bc20 = 1;
      if (1000 < uVar11) {
        if (DAT_0004bc24 <= (int)(uVar11 * 2)) {
          if (DAT_0004bc24 == 0) {
            DAT_0004bc20 = 0;
            return sVar10;
          }
          goto LAB_00024a8c;
        }
        DAT_0004bc20 = 2;
      }
      goto LAB_00024994;
    }
    if (1000 < uVar11) {
      DAT_0004bc20 = DAT_0004bc20 + 1;
      if (DAT_0004bc24 <= (int)(param_3 * DAT_0004bc20 * param_2)) goto LAB_00024a8c;
      goto LAB_00024994;
    }
  }
  if (DAT_0004bc20 != 0) {
    return sVar10;
  }
LAB_00024a8c:
  DAT_0004bc20 = 1;
  if (DAT_00066dc8->_chain == (_IO_FILE *)0x0) {
    fputc(0x2e,DAT_00066dc8);
  }
  else {
    pcVar7 = DAT_00066dc8->_IO_write_base;
    if (pcVar7 < DAT_00066dc8->_IO_buf_base) {
      DAT_00066dc8->_IO_write_base = pcVar7 + 1;
      *pcVar7 = '.';
    }
    else {
      __fputc_unlocked(0x2e);
    }
  }
  fflush(DAT_00066dc8);
  DAT_0004bb18 = 1;
  return sVar10;
}



/* ===== FUN_00024f50 @ 00024f50 size=2420 ===== */

/* WARNING: Restarted to delay deadcode elimination for space: ram */

int FUN_00024f50(uint param_1)

{
  char cVar1;
  char cVar2;
  char *__ptr;
  int iVar3;
  char *__filename;
  long lVar4;
  size_t sVar5;
  char *pcVar6;
  size_t sVar7;
  char *pcVar8;
  char cVar9;
  char cVar10;
  size_t sVar11;
  char cVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  uint local_68;
  long local_38;
  
  __ptr = malloc(0x4000);
  if (__ptr == (char *)0x0) {
    return 4;
  }
  if ((DAT_0004bbc0 != 0) && (DAT_0004bc14 == 0)) {
    DAT_0004bc20 = -1;
  }
  bVar13 = DAT_0004bc58 != 2;
  bVar14 = param_1 != 0xfffffffe;
  if (bVar13 || bVar14) {
    local_38 = 0;
  }
  else {
    local_38 = ftell(DAT_0004bb84);
  }
  local_68 = 0;
  cVar9 = '\0';
  cVar10 = '\0';
  cVar12 = '\0';
  DAT_0004bc34 = 0;
LAB_00025000:
  while (!bVar13 && !bVar14 || param_1 == 0xffffffff) {
    lVar4 = ftell(DAT_0004bb84);
    sVar11 = fread(__ptr,1,0x4000,DAT_0004bb84);
    if (sVar11 == 0) {
LAB_0002562c:
      if ((DAT_0004bc58 == 2) || (iVar3 = ferror(DAT_0004bb84), iVar3 != 0)) {
        free(__ptr);
        return 0xb;
      }
      goto LAB_0002564c;
    }
    if (bVar13 || bVar14) goto LAB_00025054;
    cVar1 = *__ptr;
    DAT_0004bc30 = 0;
    DAT_0004bc2c = 0;
    DAT_0004bc28 = 0;
    if (cVar1 != 'P') {
      if (cVar9 != '\a' || (cVar1 != '\b' || (cVar12 != 'P' || cVar10 != 'K'))) goto LAB_000253ac;
      sVar11 = 0xfffffffd;
LAB_00025418:
      iVar3 = fseek(DAT_0004bb84,sVar11 + DAT_0004bb38,0);
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_000187c0(0xb,"seek failed reading descriptor");
      }
      cVar9 = '\b';
      ftell(DAT_0004bb84);
      cVar10 = '\a';
      cVar12 = 'K';
      goto LAB_00025054;
    }
    if (((__ptr[1] != 'K') || (__ptr[2] != '\a')) || (__ptr[3] != '\b')) {
LAB_000253ac:
      pcVar8 = __ptr;
      sVar5 = 0;
      cVar2 = cVar9;
      cVar12 = cVar10;
      cVar9 = cVar1;
      do {
        cVar10 = cVar2;
        sVar7 = sVar5;
        sVar5 = sVar7 + 1;
        if (sVar11 == sVar5) goto LAB_00025054;
        bVar15 = cVar12 != 'P';
        pcVar8 = pcVar8 + 1;
        bVar16 = cVar9 != '\a';
        cVar2 = cVar9;
        cVar12 = cVar10;
        cVar9 = *pcVar8;
      } while (bVar16 || (*pcVar8 != '\b' || (cVar10 != 'K' || bVar15)));
      sVar11 = sVar7 - 2;
      goto LAB_00025418;
    }
    DAT_0004bc34 = 0;
    if (sVar11 < 0x10) goto LAB_00025340;
    DAT_0004bc2c = *(int *)(__ptr + 8);
    DAT_0004bc30 = *(undefined4 *)(__ptr + 4);
    DAT_0004bc28 = *(undefined4 *)(__ptr + 0xc);
    if (DAT_0004bc2c == lVar4 - local_38) {
      DAT_0004bc34 = 1;
      ftell(DAT_0004bb84);
      iVar3 = fseek(DAT_0004bb84,lVar4 + 0x10,0);
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_000187c0(0xb,"seek failed reading descriptor");
      }
      sVar11 = 0x10;
      local_38 = ftell(DAT_0004bb84);
      goto LAB_00025054;
    }
    iVar3 = fseek(DAT_0004bb84,lVar4 + 4,0);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_000187c0(0xb,"seek failed reading descriptor");
    }
    iVar3 = FUN_00024580(__ptr,1,4,0);
    if (iVar3 != 4) goto LAB_00025794;
    local_68 = local_68 + 4;
  }
  if (param_1 <= local_68) goto LAB_0002564c;
  sVar11 = param_1 - local_68;
  if (0x3fff < sVar11) {
    sVar11 = 0x4000;
  }
  ftell(DAT_0004bb84);
  sVar11 = fread(__ptr,1,sVar11,DAT_0004bb84);
  if (sVar11 == 0) goto LAB_0002562c;
LAB_00025054:
  if (DAT_0004bc34 == 0) {
LAB_00025340:
    sVar5 = FUN_00024580(__ptr,1,sVar11,0);
    if (sVar5 != sVar11) {
LAB_00025794:
      free(__ptr);
      fwrite(" fcopy: write error\n",1,0x14,DAT_00066dc8);
      return 10;
    }
    local_68 = local_68 + sVar11;
    if (DAT_0004bbc0 != 0) goto LAB_00025070;
  }
  else {
    if (DAT_0004bbc0 == 0) goto LAB_0002564c;
LAB_00025070:
    if (DAT_0004bc14 == 0) {
      if (0 < DAT_0004bc24) {
        if ((DAT_00049ae8 != 0) && (DAT_0004bc20 == -1)) {
          if (DAT_00066dc8->_chain == (_IO_FILE *)0x0) {
            fputc(0x20,DAT_00066dc8);
          }
          else {
            pcVar8 = DAT_00066dc8->_IO_write_base;
            if (pcVar8 < DAT_00066dc8->_IO_buf_base) {
              DAT_00066dc8->_IO_write_base = pcVar8 + 1;
              *pcVar8 = ' ';
            }
            else {
              __fputc_unlocked(0x20);
            }
          }
          fflush(DAT_00066dc8);
          DAT_0004bc20 = DAT_0004bc20 + 1;
        }
        DAT_0004bc20 = DAT_0004bc20 + sVar11;
        if (DAT_0004bc24 <= DAT_0004bc20) {
          DAT_0004bc20 = 0;
        }
      }
      if (((DAT_00049ae8 != 0 || DAT_0004bc5c != 0) && (DAT_0004bc24 != 0)) && (DAT_0004bc20 == 0))
      {
        if (DAT_00066dc8->_chain == (_IO_FILE *)0x0) {
          fputc(0x2e,DAT_00066dc8);
        }
        else {
          pcVar8 = DAT_00066dc8->_IO_write_base;
          if (pcVar8 < DAT_00066dc8->_IO_buf_base) {
            DAT_00066dc8->_IO_write_base = pcVar8 + 1;
            *pcVar8 = '.';
          }
          else {
            __fputc_unlocked(0x2e);
          }
        }
        fflush(DAT_00066dc8);
        DAT_0004bb18 = 1;
      }
    }
  }
  if (DAT_0004bc34 == 0) {
    if ((param_1 <= local_68 || (param_1 == 0xffffffff || !bVar13 && !bVar14)) ||
       (iVar3 = feof(DAT_0004bb84), pcVar8 = DAT_0004bb80, iVar3 == 0)) goto LAB_00025000;
    DAT_0004bb6c = DAT_0004bb6c + 1;
    if (DAT_0004bb6c < DAT_0004bb70) {
      if (DAT_0004bb6c == DAT_0004bb70 - 1) {
        sVar11 = strlen(DAT_0004bb80);
        __filename = malloc(sVar11 + 1);
        if (__filename == (char *)0x0) {
          FUN_000194cc("reading archive: ",pcVar8);
          return 4;
        }
        memcpy(__filename,pcVar8,sVar11 + 1);
      }
      else {
        __filename = (char *)FUN_00023ad0();
      }
      fclose(DAT_0004bb84);
      while (DAT_0004bb84 = fopen(__filename,"r"), DAT_0004bb84 == (FILE *)0x0) {
        if ((DAT_0004bc58 == 1) && (DAT_0004bc38 != 0)) {
          free(__filename);
          free(__ptr);
          return 3;
        }
        iVar3 = FUN_00023bd4(DAT_0004bb6c);
        if (iVar3 == 9) {
          pcVar6 = "could not find split: ";
          pcVar8 = __filename;
LAB_0002573c:
          FUN_000194cc(pcVar6,pcVar8);
          free(__filename);
          free(__ptr);
          return iVar3;
        }
        if (iVar3 == 2) {
          FUN_000192c0(&DAT_000369fc,1);
          pcVar6 = "user ended reading - closing archive";
          pcVar8 = "";
          goto LAB_0002573c;
        }
        if ((DAT_0004bc58 == 2) && (DAT_0004bc38 != 0)) {
          FUN_000194cc("skipping split file: ",__filename);
          DAT_0004bb6c = DAT_0004bb6c + 1;
        }
        pcVar8 = DAT_0004bb80;
        if (DAT_0004bb70 - 1 == DAT_0004bb6c) {
          sVar11 = strlen(DAT_0004bb80);
          __filename = malloc(sVar11 + 1);
          if (__filename == (char *)0x0) {
            FUN_000194cc("reading archive: ");
            return 4;
          }
          memcpy(__filename,pcVar8,sVar11 + 1);
        }
        else {
          __filename = (char *)FUN_00023ad0(DAT_00066db0);
        }
      }
      if ((DAT_0004bc58 == 2) && (DAT_0004bc38 != 0)) {
        free(__filename);
        free(__ptr);
        return 3;
      }
      free(__filename);
      goto LAB_00025000;
    }
  }
LAB_0002564c:
  free(__ptr);
  return 0;
}



/* ===== FUN_000258d0 @ 000258d0 size=60 ===== */

undefined4 FUN_000258d0(byte *param_1)

{
  byte bVar1;
  
  if (param_1 == (byte *)0x0) {
    return 0;
  }
  bVar1 = *param_1;
  while( true ) {
    if (bVar1 == 0) {
      return 1;
    }
    if ((bVar1 & 0x80) != 0) break;
    param_1 = param_1 + 1;
    bVar1 = *param_1;
  }
  return 0;
}



/* ===== FUN_0002590c @ 0002590c size=328 ===== */

char * FUN_0002590c(uint param_1)

{
  char *__s;
  size_t sVar1;
  int iVar2;
  uint *puVar3;
  bool bVar4;
  char acStack_2c [8];
  uint local_24 [3];
  
  local_24[0] = 0;
  if (param_1 == 0) {
    __s = malloc(0x10);
  }
  else {
    local_24[0] = param_1 & 0xff;
    if ((param_1 >> 8 != 0) && (local_24[0] = param_1 & 0xffff, param_1 >> 0x10 != 0)) {
      local_24[0] = param_1 & 0xffffff;
      if (param_1 >> 0x18 == 0) {
        __s = malloc(0x10);
      }
      else {
        local_24[0] = param_1;
        __s = malloc(0x10);
      }
      if (__s == (char *)0x0) goto LAB_000259d0;
      __s[0] = '#';
      __s[1] = '\0';
      iVar2 = 2;
      sVar1 = strlen(__s);
      *(undefined2 *)(__s + sVar1) = DAT_00034b38;
      goto LAB_00025984;
    }
    __s = malloc(0x10);
  }
  if (__s == (char *)0x0) {
LAB_000259d0:
                    /* WARNING: Subroutine does not return */
    FUN_000187c0(4,"wide_char_to_escape_string");
  }
  __s[0] = '#';
  __s[1] = '\0';
  iVar2 = 1;
  sVar1 = strlen(__s);
  *(undefined2 *)(__s + sVar1) = DAT_0003501c;
LAB_00025984:
  puVar3 = (uint *)((int)local_24 + iVar2);
  do {
    sprintf(acStack_2c,"%02x",(uint)(byte)*puVar3);
    strcat(__s,acStack_2c);
    bVar4 = puVar3 != local_24;
    puVar3 = (uint *)((int)puVar3 + -1);
  } while (bVar4);
  return __s;
}



/* ===== FUN_00025a70 @ 00025a70 size=444 ===== */

char * FUN_00025a70(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  char *__dest;
  size_t sVar4;
  char *pcVar5;
  int *piVar6;
  wchar_t *pwVar7;
  int iVar8;
  char local_34 [16];
  
  iVar3 = _stdlib_mb_cur_max();
  if (*param_1 == 0) {
    __dest = malloc(1);
    if (__dest == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_000187c0(4,"wide_to_local_string");
    }
    *__dest = '\0';
    wctomb((char *)0x0,L'a');
  }
  else {
    piVar6 = param_1;
    iVar2 = 0;
    do {
      iVar8 = iVar2;
      piVar6 = piVar6 + 1;
      iVar2 = iVar8 + 1;
    } while (*piVar6 != 0);
    if (iVar3 < 8) {
      iVar3 = 8;
    }
    __dest = malloc((iVar8 + 1) * iVar3 + 1);
    if (__dest == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_000187c0(4,"wide_to_local_string");
    }
    *__dest = '\0';
    wctomb((char *)0x0,L'a');
    pwVar7 = param_1 + -1;
    iVar3 = 0;
    do {
      while( true ) {
        pwVar7 = pwVar7 + 1;
        sVar4 = wctomb(local_34,*pwVar7);
        if (DAT_0004bba8 == 0) break;
        if ((sVar4 == 1) && (-1 < local_34[0])) goto LAB_00025bbc;
LAB_00025b10:
        pcVar5 = (char *)FUN_0002590c(*pwVar7);
        strcat(__dest,pcVar5);
        free(pcVar5);
LAB_00025b30:
        bVar1 = iVar8 <= iVar3;
        iVar3 = iVar3 + 1;
        if (bVar1) goto LAB_00025b84;
      }
      if (0 < (int)sVar4) {
LAB_00025bbc:
        strncat(__dest,local_34,sVar4);
        goto LAB_00025b30;
      }
      if (DAT_0004bb10 == 0) goto LAB_00025b10;
      sVar4 = strlen(__dest);
      *(undefined2 *)(__dest + sVar4) = DAT_00037c74;
      bVar1 = iVar3 < iVar8;
      iVar3 = iVar3 + 1;
    } while (bVar1);
  }
LAB_00025b84:
  sVar4 = strlen(__dest);
  pcVar5 = malloc(sVar4 + 1);
  if (pcVar5 == (char *)0x0) {
    free(__dest);
                    /* WARNING: Subroutine does not return */
    FUN_000187c0(4,"wide_to_local_string");
  }
  strcpy(pcVar5,__dest);
  free(__dest);
  return pcVar5;
}



/* ===== FUN_00025c58 @ 00025c58 size=344 ===== */

void * FUN_00025c58(int *param_1)

{
  bool bVar1;
  char *__dest;
  char *__src;
  size_t sVar2;
  void *__dest_00;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  char local_2c [12];
  
  if (*param_1 == 0) {
    __dest = malloc(1);
    if (__dest == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_000187c0(4,"wide_to_escape_string");
    }
    *__dest = '\0';
  }
  else {
    piVar3 = param_1;
    iVar5 = 0;
    do {
      iVar7 = iVar5;
      piVar3 = piVar3 + 1;
      iVar5 = iVar7 + 1;
    } while (*piVar3 != 0);
    __dest = malloc((iVar7 + 1) * 8 + 1);
    if (__dest == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_000187c0(4,"wide_to_escape_string");
    }
    *__dest = '\0';
    puVar6 = (uint *)(param_1 + -1);
    iVar5 = 0;
    do {
      while( true ) {
        puVar6 = puVar6 + 1;
        uVar4 = *puVar6;
        if ((0x7f < uVar4) || ((*(ushort *)(__ctype_b + uVar4 * 2) & 0x40) == 0)) break;
        local_2c[0] = (char)uVar4;
        local_2c[1] = 0;
        strcat(__dest,local_2c);
        bVar1 = iVar7 <= iVar5;
        iVar5 = iVar5 + 1;
        if (bVar1) goto LAB_00025d2c;
      }
      __src = (char *)FUN_0002590c(uVar4);
      strcat(__dest,__src);
      free(__src);
      bVar1 = iVar5 < iVar7;
      iVar5 = iVar5 + 1;
    } while (bVar1);
  }
LAB_00025d2c:
  sVar2 = strlen(__dest);
  __dest_00 = malloc(sVar2 + 1);
  if (__dest_00 != (void *)0x0) {
    memcpy(__dest_00,__dest,sVar2 + 1);
    free(__dest);
    return __dest_00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_000187c0(4,"wide_to_escape_string");
}



/* ===== FUN_00025dc4 @ 00025dc4 size=232 ===== */

void * FUN_00025dc4(byte *param_1)

{
  byte bVar1;
  size_t sVar2;
  byte *__s;
  void *__dest;
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  
  sVar2 = strlen((char *)param_1);
  __s = malloc(sVar2 * 2 + 1);
  if (__s == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_000187c0(4,"local_to_display_string");
  }
  bVar5 = *param_1;
  pbVar4 = __s;
  while (pbVar3 = pbVar4, bVar5 != 0) {
    while (bVar1 = bVar5 + 0x40, 0x1f < bVar5) {
      pbVar4 = pbVar3 + 1;
      *pbVar3 = bVar5;
      param_1 = param_1 + 1;
      bVar5 = *param_1;
      pbVar3 = pbVar4;
      if (bVar5 == 0) goto LAB_00025e28;
    }
    param_1 = param_1 + 1;
    bVar5 = *param_1;
    pbVar4 = pbVar3 + 2;
    pbVar3[1] = bVar1;
    *pbVar3 = 0x5e;
  }
LAB_00025e28:
  *pbVar4 = 0;
  sVar2 = strlen((char *)__s);
  __dest = malloc(sVar2 + 1);
  if (__dest != (void *)0x0) {
    memcpy(__dest,__s,sVar2 + 1);
    free(__s);
    return __dest;
  }
                    /* WARNING: Subroutine does not return */
  FUN_000187c0(4,"local_to_display_string");
}



/* ===== FUN_00025ebc @ 00025ebc size=124 ===== */

undefined4 FUN_00025ebc(undefined4 param_1)

{
  int iVar1;
  void *__ptr;
  undefined4 uVar2;
  
  iVar1 = FUN_00021ff0(param_1,0);
  if (iVar1 == -1) {
    uVar2 = FUN_00025a70(0);
    return uVar2;
  }
  __ptr = malloc((iVar1 + 2) * 4);
  if (__ptr != (void *)0x0) {
    FUN_00021ff0(param_1,__ptr,iVar1 + 1);
    uVar2 = FUN_00025a70(__ptr);
    free(__ptr);
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_000187c0(4,"utf8_to_wide_string");
}



/* ===== FUN_00025f54 @ 00025f54 size=116 ===== */

undefined4 FUN_00025f54(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *__ptr;
  
  iVar1 = FUN_00021ff0(param_1,0);
  if (iVar1 == -1) {
    __ptr = (void *)0x0;
  }
  else {
    __ptr = malloc((iVar1 + 2) * 4);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_000187c0(4,"utf8_to_wide_string");
    }
    FUN_00021ff0(param_1,__ptr,iVar1 + 1);
  }
  uVar2 = FUN_00025c58(__ptr);
  free(__ptr);
  return uVar2;
}



/* ===== FUN_00025fcc @ 00025fcc size=220 ===== */

wchar_t * FUN_00025fcc(char *param_1)

{
  size_t sVar1;
  wchar_t *__pwcs;
  wchar_t *pwVar2;
  wchar_t wVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  
  sVar1 = _stdlib_mb_cur_max();
  sVar1 = mbstowcs((wchar_t *)0x0,param_1,sVar1);
  if (sVar1 == 0xffffffff) {
    pwVar5 = (wchar_t *)0x0;
  }
  else {
    __pwcs = malloc((sVar1 + 1) * 4);
    if (__pwcs == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_000187c0(4,"local_to_wide_string");
    }
    sVar1 = strlen(param_1);
    sVar1 = mbstowcs(__pwcs,param_1,sVar1 + 1);
    __pwcs[sVar1] = L'\0';
    pwVar5 = malloc((sVar1 + 1) * 4);
    if (pwVar5 == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_000187c0(4,"local_to_wide_string");
    }
    wVar3 = *__pwcs;
    *pwVar5 = wVar3;
    pwVar2 = __pwcs;
    pwVar4 = pwVar5;
    while (wVar3 != L'\0') {
      pwVar4 = pwVar4 + 1;
      pwVar2 = pwVar2 + 1;
      wVar3 = *pwVar2;
      *pwVar4 = wVar3;
    }
    *pwVar4 = L'\0';
    free(__pwcs);
  }
  return pwVar5;
}



/* ===== FUN_000260b0 @ 000260b0 size=36 ===== */

undefined4 FUN_000260b0(void)

{
  void *__ptr;
  undefined4 uVar1;
  
  __ptr = (void *)FUN_00025fcc();
  uVar1 = FUN_00025c58();
  free(__ptr);
  return uVar1;
}



/* ===== FUN_000260d4 @ 000260d4 size=120 ===== */

void * FUN_000260d4(void)

{
  void *__ptr;
  int iVar1;
  void *pvVar2;
  
  __ptr = (void *)FUN_00025fcc();
  if ((__ptr != (void *)0x0) && (iVar1 = FUN_00022204(__ptr,0), iVar1 != -1)) {
    pvVar2 = malloc(iVar1 + 1U);
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_000187c0(4,"wide_to_utf8_string");
    }
    iVar1 = FUN_00022204(__ptr,pvVar2,iVar1 + 1U);
    if (iVar1 != -1) goto LAB_00026124;
  }
  pvVar2 = (void *)0x0;
LAB_00026124:
  free(__ptr);
  return pvVar2;
}



/* ===== FUN_00026150 @ 00026150 size=1660 ===== */

undefined4 FUN_00026150(char *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  char *__ptr;
  void *pvVar2;
  char *__ptr_00;
  char *__ptr_01;
  int iVar3;
  size_t sVar4;
  char *pcVar5;
  int iVar6;
  time_t tVar7;
  int *__ptr_02;
  void *pvVar8;
  void *pvVar9;
  bool bVar10;
  int local_84;
  stat local_80;
  
  if (DAT_00049ae8 != 0) {
    if (DAT_0004bb98 == 0) {
      DAT_0004bba4 = time((time_t *)0x0);
    }
    DAT_0004bb98 = DAT_0004bb98 + 1;
    if ((DAT_0004bb98 % 100 == 0) &&
       (tVar7 = time((time_t *)0x0), DAT_00049ad4 < tVar7 - DAT_0004bba4)) {
      if (DAT_0004bba0 == 0) {
        FUN_000192c0("Scanning files ",0);
        iVar3 = 0;
        DAT_0004bba0 = tVar7;
      }
      else {
        iVar3 = tVar7 - DAT_0004bba0;
      }
      if (DAT_00049ad0 < iVar3) {
        DAT_0004bba0 = tVar7;
        fputc(0x2e,DAT_00066dc8);
        fflush(DAT_00066dc8);
      }
    }
  }
  __ptr = (char *)FUN_0002a4d8(param_1,param_2,&local_84);
  uVar1 = DAT_0004bc60;
  iVar3 = DAT_00049afc;
  if (__ptr == (char *)0x0) {
    return 4;
  }
  if (*__ptr == '\0') {
    if ((DAT_00049afc != 0) && (DAT_0004bc68 == 0)) {
      error("empty name without -j or -r");
    }
    free(__ptr);
    return 0;
  }
  if ((local_84 == 0) && (DAT_00049afc != 0)) {
    __ptr_00 = (char *)FUN_0002a630();
joined_r0x0002632c:
    if (__ptr_00 == (char *)0x0) {
      return 4;
    }
    pvVar2 = (void *)FUN_00025dc4(__ptr);
    __ptr_01 = __ptr_00;
  }
  else {
    DAT_0004bc60 = 0;
    DAT_00049afc = 1;
    pvVar2 = (void *)FUN_0002a4d8(param_1,param_2,0);
    if (pvVar2 == (void *)0x0) {
      DAT_00049afc = iVar3;
      DAT_0004bc60 = uVar1;
      __ptr_00 = (char *)FUN_0002a630(__ptr);
      goto joined_r0x0002632c;
    }
    __ptr_00 = (char *)FUN_0002a630();
    free(pvVar2);
    DAT_00049afc = iVar3;
    DAT_0004bc60 = uVar1;
    __ptr_01 = (char *)FUN_0002a630(__ptr);
    if (__ptr_01 == (char *)0x0) {
      return 4;
    }
    if (__ptr_00 == (char *)0x0) {
      __ptr_00 = __ptr_01;
    }
    pvVar2 = (void *)FUN_00025dc4(__ptr);
  }
  iVar3 = FUN_0001a7a4(__ptr_01);
  if (iVar3 != 0) {
    if ((DAT_0004baf8 == 0) || (iVar6 = FUN_00022d2c(__ptr_00,param_3), iVar6 != 0)) {
      *(undefined4 *)(iVar3 + 0x58) = 1;
      sVar4 = strlen(param_1);
      pcVar5 = malloc(sVar4 + 1);
      *(char **)(iVar3 + 0x30) = pcVar5;
      if (pcVar5 == (char *)0x0) {
        if (__ptr_00 != __ptr_01) {
          free(__ptr_00);
        }
        free(__ptr);
        free(__ptr_01);
        return 4;
      }
      strcpy(pcVar5,param_1);
      *(void **)(iVar3 + 0x48) = pvVar2;
      *(int *)(iVar3 + 100) = local_84;
      free(__ptr);
      free(__ptr_01);
    }
    else {
      if (DAT_0004bc5c != 0) {
        fprintf(DAT_00066dc8,"excluding %s\n",pvVar2);
      }
      free(__ptr);
      free(__ptr_01);
    }
    if (DAT_0004a218 == param_1) {
      DAT_0004a218 = *(char **)(iVar3 + 0x30);
    }
    goto LAB_000262f4;
  }
  if ((DAT_0004baf8 != 0) && (iVar3 = FUN_00022d2c(__ptr_00,param_3), iVar3 == 0))
  goto LAB_000262f4;
  pcVar5 = DAT_00066db0;
  if (DAT_00049a9c == 0xffffffff) {
    iVar3 = strcmp(DAT_00066db0,"-");
    if (iVar3 != 0) {
      iVar3 = stat(pcVar5,DAT_000267d4);
      DAT_00049a9c = (uint)(iVar3 == 0);
      goto LAB_00026490;
    }
    DAT_00049a9c = 0;
  }
  else {
LAB_00026490:
    if (DAT_00049a9c == 1) {
      memcpy(&local_80,&DAT_0004a220,0x58);
      iVar3 = stat(param_1,&local_80);
      if ((((((iVar3 == 0) && (DAT_0004a230 == local_80.st_mode)) &&
            (DAT_0004a22c == local_80.st_ino)) &&
           ((DAT_0004a224 == local_80.st_dev._4_4_ && DAT_0004a220 == (int)local_80.st_dev &&
            (DAT_0004a238 == local_80.st_uid)))) &&
          ((DAT_0004a23c == local_80.st_gid &&
           ((DAT_0004a24c == local_80.st_size && (DAT_0004a260 == local_80.st_mtim.tv_sec)))))) &&
         (DAT_0004a268 == local_80.st_ctim.tv_sec)) {
        if (DAT_0004bc5c != 0) {
          fwrite("file matches zip file -- skipping\n",1,0x22,DAT_00066dc8);
        }
        if (__ptr_00 != __ptr_01) {
          free(__ptr_01);
        }
        if (__ptr_00 != __ptr) {
          free(__ptr_00);
        }
        free(__ptr);
        free(pvVar2);
        return 0;
      }
    }
  }
  __ptr_02 = malloc(0x24);
  if (__ptr_02 == (int *)0x0) goto LAB_000265ac;
  if (DAT_00066dbc != -1) {
    sVar4 = strlen(param_1);
    pvVar8 = malloc(sVar4 + 1);
    *__ptr_02 = (int)pvVar8;
    if (pvVar8 != (void *)0x0) {
      memcpy(pvVar8,param_1,sVar4 + 1);
      __ptr_02[1] = (int)__ptr;
      __ptr_02[2] = (int)__ptr_01;
      pvVar8 = (void *)FUN_00025fcc(__ptr);
      if ((pvVar8 == (void *)0x0) || (iVar3 = FUN_00022204(pvVar8,0), iVar3 == -1)) {
LAB_00026790:
        pvVar9 = (void *)0x0;
      }
      else {
        pvVar9 = malloc(iVar3 + 1U);
        if (pvVar9 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_000187c0(4,"wide_to_utf8_string",iVar3 + 1U);
        }
        iVar3 = FUN_00022204(pvVar8,pvVar9);
        if (iVar3 == -1) goto LAB_00026790;
      }
      free(pvVar8);
      bVar10 = DAT_0004a218 == param_1;
      __ptr_02[5] = local_84;
      __ptr_02[4] = (int)pvVar9;
      __ptr_02[3] = (int)pvVar2;
      *DAT_00049ac8 = (int)__ptr_02;
      DAT_00066dbc = DAT_00066dbc + 1;
      __ptr_02[7] = (int)DAT_00049ac8;
      DAT_00049ac8 = __ptr_02 + 8;
      *DAT_00049ac8 = 0;
      if (bVar10) {
        DAT_0004a218 = (char *)*__ptr_02;
      }
LAB_000262f4:
      if (__ptr_00 != __ptr_01) {
        free(__ptr_00);
      }
      return 0;
    }
  }
  free(__ptr_02);
LAB_000265ac:
  if (__ptr_00 != __ptr_01) {
    free(__ptr_00);
  }
  free(__ptr);
  free(__ptr_01);
  free(pvVar2);
  return 4;
}



/* ===== FUN_000268b4 @ 000268b4 size=332 ===== */

undefined4 * FUN_000268b4(int *param_1,int param_2)

{
  int *piVar1;
  size_t sVar2;
  undefined4 *__ptr;
  void *__ptr_00;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  char *pcVar7;
  
  if (param_1 == (int *)0x0) {
    __ptr = (undefined4 *)0x0;
  }
  else {
    pcVar7 = (char *)*param_1;
    if ((pcVar7 == (char *)0x0) || (param_2 < 0)) {
      puVar3 = malloc(4);
      __ptr = puVar3;
      if (puVar3 == (undefined4 *)0x0) goto LAB_000269f8;
    }
    else {
      iVar4 = 0;
      piVar5 = param_1;
      do {
        piVar1 = piVar5 + 1;
        iVar4 = iVar4 + 1;
        sVar2 = (int)piVar5 + (8 - (int)param_1);
        piVar5 = piVar5 + 1;
        if (*piVar1 == 0) break;
      } while (iVar4 < param_2 || param_2 == 0);
      __ptr = malloc(sVar2);
      if (__ptr == (undefined4 *)0x0) {
LAB_000269f8:
                    /* WARNING: Subroutine does not return */
        FUN_000187c0(4,&DAT_00037d50);
      }
      iVar4 = 0;
      puVar6 = __ptr;
      do {
        sVar2 = strlen(pcVar7);
        pcVar7 = malloc(sVar2 + 1);
        puVar3 = puVar6 + 1;
        *puVar6 = pcVar7;
        if (pcVar7 == (char *)0x0) {
          if (__ptr != (undefined4 *)0x0) {
            __ptr_00 = (void *)*__ptr;
            puVar3 = __ptr;
            while (__ptr_00 != (void *)0x0) {
              free(__ptr_00);
              puVar3 = puVar3 + 1;
              __ptr_00 = (void *)*puVar3;
            }
            free(__ptr);
          }
                    /* WARNING: Subroutine does not return */
          FUN_000187c0(4,&DAT_00037d50);
        }
        iVar4 = iVar4 + 1;
        strcpy(pcVar7,(char *)*param_1);
        param_1 = param_1 + 1;
        pcVar7 = (char *)*param_1;
      } while ((pcVar7 != (char *)0x0) && (puVar6 = puVar3, iVar4 < param_2 || param_2 == 0));
    }
    *puVar3 = 0;
  }
  return __ptr;
}



/* ===== FUN_00026a34 @ 00026a34 size=80 ===== */

int FUN_00026a34(int *param_1)

{
  void *__ptr;
  int iVar1;
  int *piVar2;
  
  if (param_1 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    __ptr = (void *)*param_1;
    if (__ptr == (void *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = 0;
      piVar2 = param_1;
      do {
        free(__ptr);
        piVar2 = piVar2 + 1;
        __ptr = (void *)*piVar2;
        iVar1 = iVar1 + 1;
      } while (__ptr != (void *)0x0);
    }
    free(param_1);
  }
  return iVar1;
}



/* ===== FUN_00026a84 @ 00026a84 size=504 ===== */

int FUN_00026a84(undefined4 *param_1,char *param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  size_t sVar2;
  void *pvVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *__ptr;
  bool bVar10;
  undefined4 *local_2c;
  
  if (param_1 == (undefined4 *)0x0) {
    iVar7 = 0;
  }
  else {
    __ptr = (int *)*param_1;
    if (__ptr == (int *)0x0) {
      iVar7 = 0;
    }
    else {
      iVar7 = 0;
      if (*__ptr != 0) {
        iVar7 = 0;
        piVar5 = __ptr;
        do {
          piVar5 = piVar5 + 1;
          iVar7 = iVar7 + 1;
        } while (*piVar5 != 0);
      }
    }
    if (param_2 != (char *)0x0) {
      puVar1 = malloc((iVar7 + 2) * 4);
      if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_000187c0(4,&DAT_00037d54);
      }
      if (__ptr == (int *)0x0) {
        sVar2 = strlen(param_2);
        pvVar3 = malloc(sVar2 + 1);
        if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_000187c0(4,&DAT_00037d54);
        }
        memcpy(pvVar3,param_2,sVar2 + 1);
        iVar4 = 4;
        *puVar1 = pvVar3;
        iVar7 = 1;
      }
      else {
        iVar4 = *__ptr;
        piVar5 = __ptr;
        if (iVar4 == 0 || param_3 < 1) {
          iVar4 = 4;
          iVar7 = 1;
          iVar8 = 0;
          local_2c = puVar1;
        }
        else {
          piVar9 = puVar1 + -1;
          iVar8 = 0;
          do {
            iVar7 = iVar8;
            piVar5 = piVar5 + 1;
            piVar9 = piVar9 + 1;
            *piVar9 = iVar4;
            iVar8 = iVar7 + 1;
            iVar4 = *piVar5;
            bVar10 = iVar4 != 0;
            iVar6 = 0;
            if (bVar10) {
              iVar6 = param_3 - iVar8;
            }
          } while ((bVar10 && param_3 != iVar8) && iVar6 < 0 == (bVar10 && SBORROW4(param_3,iVar8)))
          ;
          iVar7 = iVar7 + 2;
          iVar4 = iVar7 * 4;
          local_2c = puVar1 + iVar8;
        }
        sVar2 = strlen(param_2);
        pvVar3 = malloc(sVar2 + 1);
        if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_000187c0(4,&DAT_00037d54);
        }
        memcpy(pvVar3,param_2,sVar2 + 1);
        *local_2c = pvVar3;
        iVar6 = *piVar5;
        if (iVar6 != 0) {
          piVar9 = __ptr + iVar8;
          piVar5 = puVar1 + iVar7;
          do {
            *piVar5 = iVar6;
            iVar7 = iVar7 + 1;
            piVar9 = piVar9 + 1;
            iVar6 = *piVar9;
            piVar5 = piVar5 + 1;
          } while (iVar6 != 0);
          iVar4 = iVar7 * 4;
        }
      }
      *(undefined4 *)((int)puVar1 + iVar4) = 0;
      if (param_4 != 0) {
        free(__ptr);
      }
      *param_1 = puVar1;
    }
  }
  return iVar7;
}



/* ===== FUN_00026cb0 @ 00026cb0 size=5096 ===== */

int FUN_00026cb0(int *param_1,int *param_2,undefined4 *param_3,uint *param_4,int *param_5,
                uint *param_6,undefined4 *param_7,int *param_8,int param_9)

{
  char *pcVar1;
  size_t sVar2;
  char *pcVar3;
  int iVar4;
  void *pvVar5;
  byte *pbVar6;
  char cVar7;
  int *piVar8;
  undefined4 *puVar9;
  char *pcVar10;
  byte *pbVar11;
  char *__s2;
  int iVar12;
  int *piVar13;
  uint uVar14;
  int *piVar15;
  byte *__src;
  int iVar16;
  char *pcVar17;
  char *__s;
  char *pcVar18;
  uint uVar19;
  bool bVar20;
  int local_94;
  int local_90;
  int local_8c;
  int *local_60;
  char acStack_5c [56];
  
  *param_5 = 0;
  if ((param_1 == (int *)0x0) || (piVar15 = (int *)*param_1, piVar15 == (int *)0x0)) {
    *param_2 = 0;
    return 0;
  }
  iVar16 = 0;
  if (*piVar15 != 0) {
    iVar16 = 0;
    piVar13 = piVar15;
    do {
      piVar13 = piVar13 + 1;
      iVar16 = iVar16 + 1;
    } while (*piVar13 != 0);
    bVar20 = iVar16 == 1;
    if (iVar16 < 2) {
      bVar20 = param_9 == 0;
    }
    if (!bVar20) {
      *param_6 = 0;
      pcVar17 = (char *)*param_3;
      uVar19 = *param_4;
      if ((pcVar17 == (char *)0xffffffff) || (param_9 == 0 && pcVar17 == (char *)0x0)) {
        pcVar18 = (char *)0xffffffff;
        *param_8 = -1;
        local_94 = 0;
        uVar14 = 0xfffffffe;
      }
      else {
        pcVar18 = (char *)*param_7;
        uVar14 = uVar19;
        if (*param_8 == -1) {
          local_94 = 0;
        }
        else {
          local_94 = (&DAT_000492b0)[*param_8 * 6];
        }
      }
      local_60 = piVar15;
      if (uVar19 != 0xfffffff9) {
LAB_00026d9c:
        if (DAT_00049aa0 == 0) goto LAB_00026e94;
LAB_00026da4:
        bVar20 = 0xfffffff9 < uVar14;
        if (uVar14 != 0xfffffffa) {
          bVar20 = 2 < uVar14 + 4;
        }
        pcVar3 = pcVar17;
        if (bVar20 && (uVar14 != 0xfffffffa && uVar14 + 4 != 3)) {
LAB_00026efc:
          if (uVar14 != 0xffffffff) {
            if (uVar14 != 0xfffffffe) goto LAB_00026e34;
            goto LAB_00026e9c;
          }
          pcVar3 = pcVar3 + 2;
          uVar14 = 0;
          goto LAB_00026e34;
        }
        if (-1 < (int)pcVar18) {
          iVar12 = piVar15[(int)pcVar18];
          piVar13 = piVar15 + (int)pcVar18;
          if (iVar12 != 0) {
            uVar19 = (uint)((uVar14 & 0xfffffffd) == 0xfffffffd);
            if ((int)pcVar18 < (int)pcVar17) {
              pcVar1 = pcVar17 + uVar19;
              pcVar10 = pcVar18;
              piVar8 = piVar15 + (int)pcVar1;
              if ((int)pcVar1 <= (int)pcVar18) {
                piVar8 = piVar13;
              }
              while( true ) {
                if ((int)pcVar18 < (int)pcVar1) {
                  memmove(piVar13,piVar15 + (int)(pcVar18 + 1),((int)pcVar1 - (int)pcVar18) * 4);
                  *piVar8 = iVar12;
                }
                else {
                  *piVar8 = iVar12;
                }
                if (pcVar17 == pcVar10 + 1) break;
                iVar12 = *piVar13;
                pcVar10 = pcVar10 + 1;
              }
            }
            pcVar18 = pcVar18 + uVar19 + 1;
          }
        }
LAB_00026dd0:
        if (uVar14 == 0xfffffffa) goto LAB_00026e9c;
        if (1 < uVar14 + 4) goto LAB_00026efc;
        pcVar17 = pcVar3 + 1;
        if (uVar14 == 0xfffffffd) {
          pcVar17 = pcVar3 + 2;
          pcVar3 = pcVar3 + 1;
        }
        pcVar1 = (char *)piVar15[(int)pcVar17];
        piVar13 = piVar15 + (int)pcVar17;
        pcVar10 = pcVar18;
        if (-1 < (int)pcVar18) {
          pcVar10 = pcVar1;
        }
        if (pcVar10 == (char *)0x0) {
          pcVar17 = pcVar3 + 2;
          iVar16 = FUN_00026a84(&local_60,&DAT_00035200,pcVar18,1);
          pcVar18 = pcVar18 + 1;
          piVar13 = local_60 + (int)pcVar17;
          pcVar1 = (char *)local_60[(int)pcVar17];
          piVar15 = local_60;
        }
        if (pcVar1 == (char *)0x0) {
LAB_00026e30:
          do {
            uVar14 = 0;
            pcVar3 = pcVar17;
LAB_00026e34:
            uVar19 = uVar14;
            pcVar17 = pcVar3;
            if (iVar16 < (int)pcVar3) goto LAB_0002707c;
            pcVar10 = (char *)piVar15[(int)pcVar3];
            piVar13 = piVar15 + (int)pcVar3;
            if (pcVar10 == (char *)0x0) {
              if ((int)pcVar18 < 0) goto LAB_00027078;
              pcVar10 = (char *)piVar15[(int)pcVar18];
              iVar12 = (int)pcVar18 * 4;
              if (pcVar10 == (char *)0x0) goto LAB_00027078;
              if (uVar14 == 0xfffffffb) {
                pcVar17 = pcVar18 + 1;
                if (iVar16 < (int)pcVar17) goto LAB_0002780c;
                iVar12 = iVar12 + 4;
                pcVar10 = (char *)piVar15[(int)(pcVar18 + 1)];
                if (pcVar10 != (char *)0x0) goto LAB_00027048;
                local_94 = 0;
                pcVar18 = pcVar3;
                goto LAB_0002707c;
              }
              pcVar17 = pcVar18;
              if (iVar16 < (int)pcVar18) {
                local_94 = 0;
                pcVar18 = pcVar3;
                goto LAB_0002707c;
              }
LAB_00027048:
              piVar13 = (int *)((int)piVar15 + iVar12);
              pcVar18 = pcVar3;
              if (-1 < (int)pcVar3) goto LAB_000276fc;
            }
            else if ((-1 < (int)pcVar18) && (piVar15[(int)pcVar18] == 0)) {
LAB_000276fc:
              pcVar3 = pcVar18;
              if (uVar14 == 0xfffffffb) {
                pcVar17 = pcVar17 + 1;
              }
              if (iVar16 < (int)pcVar17) {
LAB_0002780c:
                local_94 = 0;
                pcVar18 = pcVar3;
              }
              else {
                pcVar18 = pcVar3;
                if ((char *)piVar15[(int)pcVar17] == (char *)0x0) {
                  local_94 = 0;
                }
                else {
                  sVar2 = strlen((char *)piVar15[(int)pcVar17]);
                  pcVar3 = malloc(sVar2 + 1);
                  *param_5 = (int)pcVar3;
                  if (pcVar3 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_000187c0(4,&DAT_00037d58);
                  }
                  strcpy(pcVar3,(char *)piVar15[(int)pcVar17]);
                  local_94 = 0xffff;
                  uVar19 = 0xfffffffb;
                  piVar15 = local_60;
                }
              }
              goto LAB_0002707c;
            }
            if (*pcVar10 == '-') {
              if (pcVar10[1] != '\0') {
                if (pcVar10[1] != '-') {
                  uVar19 = uVar14 + 1;
                  iVar12 = 0;
                  pcVar3 = pcVar10 + uVar19;
                  *param_5 = 0;
                  if (pcVar10[uVar19] == '\0') {
                    uVar14 = 0xfffffffe;
                    *param_8 = -1;
                    local_94 = 0;
                    goto LAB_00026d9c;
                  }
                  if (DAT_000492b0 == 0) goto LAB_00027618;
                  local_90 = -1;
                  puVar9 = &DAT_000492a0;
                  goto LAB_0002721c;
                }
                if (pcVar10[2] != '\0') {
                  *param_5 = 0;
                  if (piVar15 == (int *)0x0) {
                    *param_8 = -1;
                    local_94 = 0;
                  }
                  else {
                    pcVar3 = (char *)*piVar13;
                    if (pcVar3 == (char *)0x0) {
                      *param_8 = -1;
                      local_94 = 0;
                    }
                    else {
                      sVar2 = strlen(pcVar3);
                      pcVar10 = malloc(sVar2 + 1);
                      if (pcVar10 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_000187c0(4,&DAT_00037d5c);
                      }
                      __s2 = pcVar10 + 2;
                      strcpy(pcVar10,pcVar3);
                      cVar7 = *__s2;
                      *param_5 = 0;
                      pcVar3 = __s2;
                      pcVar1 = __s2;
                      if (cVar7 != '\0' && cVar7 != '=') {
                        do {
                          pcVar1 = pcVar3;
                          cVar7 = pcVar1[1];
                          pcVar3 = pcVar1 + 1;
                        } while (cVar7 != '\0' && cVar7 != '=');
                      }
                      __s = (char *)0x0;
                      if (cVar7 != '\0') {
                        __s = pcVar3 + 1;
                        *pcVar3 = '\0';
                      }
                      cVar7 = *pcVar1;
                      if (cVar7 == '-') {
                        *pcVar1 = '\0';
                      }
                      *param_6 = (uint)(cVar7 == '-');
                      if (DAT_000492b0 == 0) {
                        sprintf(&DAT_0004a278,DAT_00028168,__s2);
                        free(pcVar10);
                        if (param_9 < 1) goto LAB_0002803c;
                        goto LAB_000276d0;
                      }
                      if (param_9 < 1) {
                        iVar12 = 0;
                        local_8c = -1;
                        puVar9 = &DAT_000492a0;
                        do {
                          pcVar3 = (char *)puVar9[1];
                          if (pcVar3 != (char *)0x0) {
                            iVar4 = strcmp(pcVar3,__s2);
                            if (iVar4 == 0) goto LAB_00027c34;
                            sVar2 = strlen(__s2);
                            iVar4 = strncmp(pcVar3,__s2,sVar2);
                            if ((iVar4 == 0) && (bVar20 = local_8c != -1, local_8c = iVar12, bVar20)
                               ) {
                              sprintf(&DAT_0004a278,"long option \'%s\' ambiguous",__s2);
                              free(pcVar10);
                    /* WARNING: Subroutine does not return */
                              FUN_000187c0(0x10,&DAT_0004a278);
                            }
                          }
                          piVar13 = puVar9 + 10;
                          iVar12 = iVar12 + 1;
                          puVar9 = puVar9 + 6;
                        } while (*piVar13 != 0);
                        iVar12 = local_8c;
                        if (local_8c == -1) {
                          sprintf(&DAT_0004a278,DAT_00028168,__s2);
                          free(pcVar10);
LAB_0002803c:
                    /* WARNING: Subroutine does not return */
                          FUN_000187c0(0x10,&DAT_0004a278);
                        }
                      }
                      else {
                        iVar12 = 0;
                        local_8c = -1;
                        puVar9 = &DAT_000492a0;
                        do {
                          pcVar3 = (char *)puVar9[1];
                          if (pcVar3 != (char *)0x0) {
                            iVar4 = strcmp(pcVar3,__s2);
                            if (iVar4 == 0) goto LAB_00027c34;
                            sVar2 = strlen(__s2);
                            iVar4 = strncmp(pcVar3,__s2,sVar2);
                            if ((iVar4 == 0) && (bVar20 = local_8c != -1, local_8c = iVar12, bVar20)
                               ) {
                              sprintf(&DAT_0004a278,"long option \'%s\' ambiguous",__s2);
                              free(pcVar10);
                              goto LAB_000276d0;
                            }
                          }
                          piVar13 = puVar9 + 10;
                          iVar12 = iVar12 + 1;
                          puVar9 = puVar9 + 6;
                        } while (*piVar13 != 0);
                        iVar12 = local_8c;
                        if (local_8c == -1) {
                          sprintf(&DAT_0004a278,DAT_00028168,__s2);
                          free(pcVar10);
                          goto LAB_000276d0;
                        }
                      }
LAB_00027c34:
                      if ((*param_6 != 0) && ((&DAT_000492ac)[iVar12 * 6] == 0)) {
                        FUN_000225a0(DAT_00028160,iVar12,1);
                        free(pcVar10);
                        if (param_9 < 1) {
                    /* WARNING: Subroutine does not return */
                          FUN_000187c0(0x10,&DAT_0004a278);
                        }
                        goto LAB_000276d0;
                      }
                      iVar4 = (&DAT_000492a8)[iVar12 * 6];
                      if (iVar4 == 2) {
                        if (__s == (char *)0x0) goto LAB_00027f88;
LAB_00027c8c:
                        sVar2 = strlen(__s);
                        pvVar5 = malloc(sVar2 + 1);
                        *param_5 = (int)pvVar5;
                        if (pvVar5 == (void *)0x0) {
                          free(pcVar10);
                    /* WARNING: Subroutine does not return */
                          FUN_000187c0(4,&DAT_00037d5c);
                        }
                        uVar19 = 0xfffffffe;
                        strcpy((char *)*param_5,__s);
                      }
                      else {
                        bVar20 = iVar4 != 0;
                        if (iVar4 != 1) {
                          bVar20 = 1 < iVar4 - 3U;
                        }
                        if (bVar20 && (iVar4 != 1 && iVar4 - 3U != 2)) {
                          pcVar3 = DAT_00028174;
                          if (__s != (char *)0x0 && iVar4 == 0) {
LAB_00027fa8:
                            FUN_000225a0(pcVar3,iVar12,1);
                            free(pcVar10);
                            if (param_9 < 1) {
                    /* WARNING: Subroutine does not return */
                              FUN_000187c0(0x10,&DAT_0004a278);
                            }
                            goto LAB_000276d0;
                          }
LAB_00027f88:
                          uVar19 = 0xfffffffe;
                        }
                        else {
                          if (__s != (char *)0x0) goto LAB_00027c8c;
                          pcVar3 = DAT_00028170;
                          if ((char *)piVar15[(int)(pcVar17 + 1)] == (char *)0x0) goto LAB_00027fa8;
                          sVar2 = strlen((char *)piVar15[(int)(pcVar17 + 1)]);
                          pvVar5 = malloc(sVar2 + 1);
                          *param_5 = (int)pvVar5;
                          if (pvVar5 == (void *)0x0) {
                            free(pcVar10);
                    /* WARNING: Subroutine does not return */
                            FUN_000187c0(4,&DAT_00037d5c);
                          }
                          strcpy((char *)*param_5,(char *)piVar15[(int)(pcVar17 + 1)]);
                          if ((&DAT_000492a8)[iVar12 * 6] == 3) {
                            uVar19 = 0xfffffffd;
                          }
                          else {
                            uVar19 = 0xffffffff;
                          }
                        }
                      }
                      free(pcVar10);
                      *param_8 = iVar12;
                      local_94 = (&DAT_000492b0)[iVar12 * 6];
                      piVar15 = local_60;
                      if (local_94 == 0xfffe) {
                        return 0xfffe;
                      }
                    }
                  }
                  goto LAB_0002707c;
                }
                if (DAT_00049aa4 != 0) {
                  uVar14 = 0xfffffff9;
                  pcVar3 = pcVar17;
                  if (0 < (int)pcVar18) {
                    pcVar3 = pcVar18;
                  }
                  goto LAB_00026f58;
                }
              }
              *param_8 = -1;
              if (DAT_00049aa0 == 0) {
                sVar2 = strlen(pcVar10);
                pcVar3 = malloc(sVar2 + 1);
                *param_5 = (int)pcVar3;
                if (pcVar3 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_000187c0(4,&DAT_00037d58);
                }
                strcpy(pcVar3,pcVar10);
                local_94 = 0xffff;
                uVar19 = 0xfffffffb;
                piVar15 = local_60;
                goto LAB_0002707c;
              }
            }
            else if (DAT_00049aa0 == 0) {
              sVar2 = strlen(pcVar10);
              pcVar3 = malloc(sVar2 + 1);
              *param_5 = (int)pcVar3;
              if (pcVar3 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_000187c0(4,&DAT_00037d58);
              }
              strcpy(pcVar3,pcVar10);
              *param_8 = -1;
              local_94 = 0xffff;
              uVar19 = 0xfffffffb;
              piVar15 = local_60;
              goto LAB_0002707c;
            }
            if ((int)pcVar18 < 0) {
              pcVar18 = pcVar17;
            }
            pcVar17 = pcVar17 + 1;
            if (DAT_00049aa0 != 0) goto LAB_00026da4;
LAB_00026e94:
            pcVar3 = pcVar17;
            if (uVar14 != 0xfffffffb) goto LAB_00026dd0;
LAB_00026e9c:
            pcVar17 = pcVar3 + 1;
          } while( true );
        }
        if (*pcVar1 == '@') {
          if (pcVar1[1] == '\0') {
            uVar14 = 0xfffffffa;
            goto LAB_00026d9c;
          }
        }
        else if (*pcVar1 == '-') goto LAB_00026e30;
        sVar2 = strlen(pcVar1);
        pcVar3 = malloc(sVar2 + 1);
        *param_5 = (int)pcVar3;
        if (pcVar3 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_000187c0(4,&DAT_00037d58);
        }
        strcpy(pcVar3,(char *)*piVar13);
        uVar19 = 0xfffffffc;
        piVar15 = local_60;
        goto LAB_0002707c;
      }
      pcVar3 = pcVar17 + 1;
LAB_00026f58:
      uVar19 = uVar14;
      pcVar17 = pcVar3;
      if (iVar16 < (int)pcVar3) {
        local_94 = 0;
      }
      else {
        pcVar10 = (char *)piVar15[(int)pcVar3];
        if (pcVar10 == (char *)0x0) {
LAB_00027078:
          local_94 = 0;
          uVar19 = uVar14;
          pcVar17 = pcVar3;
        }
        else {
          sVar2 = strlen(pcVar10);
          pcVar3 = malloc(sVar2 + 1);
          *param_5 = (int)pcVar3;
          if (pcVar3 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_000187c0(4,&DAT_00037d58);
          }
          strcpy(pcVar3,pcVar10);
          local_94 = 0xffff;
          *param_8 = -1;
          piVar15 = local_60;
        }
      }
LAB_0002707c:
      *param_1 = (int)piVar15;
      *param_2 = iVar16;
      *param_7 = pcVar18;
      *param_3 = pcVar17;
      *param_4 = uVar19;
      return local_94;
    }
    iVar16 = 1;
  }
  *param_2 = iVar16;
  return 0;
LAB_0002721c:
  do {
    pcVar1 = (char *)*puVar9;
    if ((pcVar1 == (char *)0x0) || (*pcVar1 != pcVar10[uVar19])) {
LAB_0002720c:
      iVar4 = puVar9[10];
    }
    else {
      if (pcVar1[1] != '\0') {
        if (pcVar3[1] != pcVar1[1]) goto LAB_0002720c;
        uVar19 = uVar14 + 2;
        pcVar3 = pcVar10 + uVar19;
        local_90 = iVar12;
        goto LAB_00027298;
      }
      iVar4 = puVar9[10];
      local_90 = iVar12;
    }
    iVar12 = iVar12 + 1;
    puVar9 = puVar9 + 6;
  } while (iVar4 != 0);
  if (local_90 == -1) {
LAB_00027618:
    sprintf(&DAT_0004a278,DAT_00028164);
    if (param_9 < 1) {
                    /* WARNING: Subroutine does not return */
      FUN_000187c0(0x10,&DAT_0004a278);
    }
    goto LAB_000276d0;
  }
LAB_00027298:
  if (pcVar3[1] == '-') {
    if ((&DAT_000492ac)[local_90 * 6] == 0) {
      uVar14 = (&DAT_000492a8)[local_90 * 6];
      if (uVar14 == 0) {
        if (((char *)(&DAT_000492b4)[local_90 * 6] == (char *)0x0) ||
           (*(char *)(&DAT_000492b4)[local_90 * 6] == '\0')) {
          sprintf(acStack_5c,"\'%s\'",(&DAT_000492a0)[local_90 * 6]);
        }
        else {
          sprintf(acStack_5c,"\'%s\' (%s)",(&DAT_000492a0)[local_90 * 6]);
        }
        sprintf(&DAT_0004a278,DAT_00028160,acStack_5c);
        if (param_9 < 1) {
                    /* WARNING: Subroutine does not return */
          FUN_000187c0(0x10,&DAT_0004a278);
        }
        goto LAB_000276d0;
      }
    }
    else {
      uVar19 = uVar19 + 1;
      *param_6 = 1;
      uVar14 = (&DAT_000492a8)[local_90 * 6];
    }
  }
  else {
    uVar14 = (&DAT_000492a8)[local_90 * 6];
  }
  if (uVar14 == 4) {
    uVar19 = uVar19 + 1;
    if (pcVar10[uVar19] == '\0') {
      if (((char *)(&DAT_000492b4)[local_90 * 6] == (char *)0x0) ||
         (*(char *)(&DAT_000492b4)[local_90 * 6] == '\0')) {
        sprintf(acStack_5c,"\'%s\'",(&DAT_000492a0)[local_90 * 6]);
        pcVar17 = DAT_0002815c;
      }
      else {
        sprintf(acStack_5c,"\'%s\' (%s)",(&DAT_000492a0)[local_90 * 6]);
        pcVar17 = DAT_0002815c;
      }
LAB_0002751c:
      sprintf(&DAT_0004a278,pcVar17,acStack_5c);
      if (param_9 < 1) {
                    /* WARNING: Subroutine does not return */
        FUN_000187c0(0x10,&DAT_0004a278);
      }
LAB_000276d0:
      FUN_000194cc(&DAT_0004a278,&DAT_000369fc);
      return 0xfffe;
    }
    pcVar3 = malloc(2);
    *param_5 = (int)pcVar3;
    if (pcVar3 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_000187c0(4,&DAT_00037d60);
    }
    *pcVar3 = pcVar10[uVar19];
    *(undefined1 *)(*param_5 + 1) = 0;
    goto LAB_00027540;
  }
  if (uVar14 == 5) {
    __src = (byte *)(pcVar10 + uVar19 + 1);
    uVar14 = (uint)(byte)pcVar10[uVar19 + 1];
    pbVar6 = __src;
    if ((uVar14 - 0x2b & 0xfd) == 0) {
      uVar14 = (uint)__src[1];
      pbVar6 = __src + 1;
    }
    pbVar11 = pbVar6;
    if ((*(ushort *)(__ctype_b + uVar14 * 2) & 8) != 0) {
      do {
        pbVar11 = pbVar11 + 1;
      } while ((*(ushort *)(__ctype_b + (uint)*pbVar11 * 2) & 8) != 0);
      if (pbVar11 != pbVar6) {
        sVar2 = (int)pbVar11 - (int)__src;
        pcVar3 = malloc(sVar2 + 1);
        *param_5 = (int)pcVar3;
        if (pcVar3 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_000187c0(4,&DAT_00037d60);
        }
        strncpy(pcVar3,(char *)__src,sVar2);
        uVar19 = uVar19 + sVar2;
        *(undefined1 *)(*param_5 + sVar2) = 0;
        goto LAB_00027540;
      }
    }
    if (((char *)(&DAT_000492b4)[local_90 * 6] == (char *)0x0) ||
       (*(char *)(&DAT_000492b4)[local_90 * 6] == '\0')) {
      sprintf(acStack_5c,"\'%s\'",(&DAT_000492a0)[local_90 * 6]);
    }
    else {
      sprintf(acStack_5c,"\'%s\' (%s)",(&DAT_000492a0)[local_90 * 6]);
    }
    sprintf(&DAT_0004a278,DAT_0002816c,acStack_5c);
    if (param_9 < 1) {
                    /* WARNING: Subroutine does not return */
      FUN_000187c0(0x10,&DAT_0004a278);
    }
    goto LAB_000276d0;
  }
  if (uVar14 == 2) {
    iVar12 = uVar19 + 1;
    if (pcVar10[iVar12] == '\0') {
      pcVar3 = (char *)piVar15[(int)(pcVar17 + 1)];
      if ((pcVar3 != (char *)0x0) && (*pcVar3 != '-')) {
        sVar2 = strlen(pcVar3);
        pcVar3 = malloc(sVar2 + 1);
        *param_5 = (int)pcVar3;
        if (pcVar3 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_000187c0(4,&DAT_00037d60);
        }
        strcpy(pcVar3,(char *)piVar15[(int)(pcVar17 + 1)]);
        *param_8 = local_90;
        local_94 = (&DAT_000492b0)[local_90 * 6];
        goto joined_r0x00027a4c;
      }
      goto LAB_00027540;
    }
    if (pcVar10[iVar12] == '=') {
      iVar12 = uVar19 + 2;
      if (pcVar10[iVar12] == '\0') {
        *param_8 = local_90;
        local_94 = (&DAT_000492b0)[local_90 * 6];
        goto joined_r0x00027d5c;
      }
      iVar4 = 2;
    }
    else {
      iVar4 = 1;
    }
    sVar2 = strlen(pcVar10 + iVar12);
    pcVar3 = malloc(sVar2 + 1);
    *param_5 = (int)pcVar3;
    if (pcVar3 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_000187c0(4,&DAT_00037d60);
    }
    pcVar10 = pcVar10 + uVar19 + iVar4;
  }
  else {
    if ((uVar14 & 0xfffffffd) != 1) {
LAB_00027540:
      *param_8 = local_90;
      local_94 = (&DAT_000492b0)[local_90 * 6];
      if (local_94 == 0xfffe) {
        return 0xfffe;
      }
      piVar15 = local_60;
      if (uVar19 != 0) goto LAB_0002707c;
      uVar14 = 0xfffffffe;
      goto LAB_00026d9c;
    }
    if (pcVar10[uVar19 + 1] == '\0') {
      if ((char *)piVar15[(int)(pcVar17 + 1)] == (char *)0x0) {
        if (((char *)(&DAT_000492b4)[local_90 * 6] == (char *)0x0) ||
           (*(char *)(&DAT_000492b4)[local_90 * 6] == '\0')) {
          sprintf(acStack_5c,"\'%s\'",(&DAT_000492a0)[local_90 * 6]);
          pcVar17 = DAT_00028170;
        }
        else {
          sprintf(acStack_5c,"\'%s\' (%s)",(&DAT_000492a0)[local_90 * 6]);
          pcVar17 = DAT_00028170;
        }
        goto LAB_0002751c;
      }
      sVar2 = strlen((char *)piVar15[(int)(pcVar17 + 1)]);
      pcVar3 = malloc(sVar2 + 1);
      *param_5 = (int)pcVar3;
      if (pcVar3 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_000187c0(4,&DAT_00037d60);
      }
      strcpy(pcVar3,(char *)piVar15[(int)(pcVar17 + 1)]);
      iVar12 = (&DAT_000492a8)[local_90 * 6];
      local_94 = (&DAT_000492b0)[local_90 * 6];
      *param_8 = local_90;
      if (iVar12 == 3) {
        if (local_94 == 0xfffe) {
          return 0xfffe;
        }
        uVar19 = 0xfffffffd;
        piVar15 = local_60;
        goto LAB_0002707c;
      }
joined_r0x00027a4c:
      if (local_94 == 0xfffe) {
        return 0xfffe;
      }
      uVar19 = 0xffffffff;
      piVar15 = local_60;
      goto LAB_0002707c;
    }
    if (pcVar10[uVar19 + 1] == '=') {
      iVar12 = 2;
    }
    else {
      iVar12 = 1;
    }
    pcVar10 = pcVar10 + uVar19 + iVar12;
    sVar2 = strlen(pcVar10);
    pcVar3 = malloc(sVar2 + 1);
    *param_5 = (int)pcVar3;
    if (pcVar3 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_000187c0(4,&DAT_00037d60);
    }
  }
  strcpy(pcVar3,pcVar10);
  *param_8 = local_90;
  local_94 = (&DAT_000492b0)[local_90 * 6];
joined_r0x00027d5c:
  if (local_94 == 0xfffe) {
    return 0xfffe;
  }
  uVar19 = 0xfffffffe;
  piVar15 = local_60;
  goto LAB_0002707c;
}



/* ===== FUN_00028178 @ 00028178 size=1140 ===== */

uint FUN_00028178(byte *param_1,byte *param_2,int param_3,undefined4 param_4)

{
  size_t sVar1;
  size_t sVar2;
  int iVar3;
  byte *pbVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  byte *pbVar12;
  
  iVar10 = DAT_0004bc48;
  iVar3 = DAT_0004bc40;
  bVar8 = *param_1;
  uVar11 = DAT_0004bc44;
  if (DAT_0004bc44 != 0) {
    uVar11 = 1;
  }
joined_r0x000281c0:
  do {
    while( true ) {
      while( true ) {
        pbVar4 = param_1;
        if (bVar8 == 0) {
          return (uint)(*param_2 == 0);
        }
        param_1 = pbVar4 + 1;
        if (bVar8 != 0x3f) break;
        bVar8 = *param_2;
        if (iVar3 == 0) {
          if (bVar8 == 0) {
            return 0;
          }
        }
        else if (bVar8 == 0 || bVar8 == 0x2f) {
          return 0;
        }
        bVar8 = pbVar4[1];
        param_2 = param_2 + 1;
      }
      if (iVar10 == 0) break;
LAB_000281f8:
      if (*param_2 != bVar8) {
        return 0;
      }
      bVar8 = *param_1;
      param_2 = param_2 + 1;
    }
    uVar7 = 0;
    if (bVar8 != 0x2a) {
      if (bVar8 == 0x5b) {
        uVar7 = uVar11 & 1;
      }
      else {
        uVar7 = 0;
      }
      if (uVar7 != 0) {
        if (*param_2 == 0) {
          return 0;
        }
        uVar7 = (uint)(pbVar4[1] == 0x5e || pbVar4[1] == 0x21);
        bVar8 = param_1[uVar7];
        param_1 = param_1 + uVar7;
        pbVar4 = param_1;
        bVar5 = bVar8;
        if (bVar8 == 0) {
          return 0;
        }
        do {
          pbVar12 = pbVar4;
          if (bVar5 != 0x5c) {
            if (bVar5 == 0x5d) goto LAB_000283d4;
            bVar5 = pbVar4[1];
            pbVar12 = pbVar4 + 1;
            if (bVar5 == 0) {
              return 0;
            }
            if (bVar5 != 0x5c) {
              if (bVar5 == 0x5d) goto LAB_000283d4;
              bVar5 = pbVar4[2];
              pbVar12 = pbVar4 + 2;
              while( true ) {
                if (bVar5 == 0) {
                  return 0;
                }
                if (bVar5 == 0x5c) break;
                if (bVar5 == 0x5d) goto LAB_000283d4;
                pbVar12 = pbVar12 + 1;
                bVar5 = *pbVar12;
              }
            }
          }
          if (pbVar12[1] == 0) {
            return 0;
          }
          pbVar4 = pbVar12 + 2;
          bVar5 = pbVar12[2];
          if (pbVar12[2] == 0) {
            return 0;
          }
        } while( true );
      }
      if (bVar8 == 0x5c) {
        bVar8 = pbVar4[1];
        param_1 = pbVar4 + 2;
        if (bVar8 == 0) {
          return 0;
        }
      }
      goto LAB_000281f8;
    }
    if (iVar3 == 0) {
LAB_000284d8:
      uVar9 = (uint)*param_1;
      pbVar4 = param_1;
      uVar11 = uVar9;
      if (uVar9 == 0) {
        return 1;
      }
      goto LAB_00028514;
    }
    bVar8 = pbVar4[1];
    if (bVar8 == 0x2a) {
      param_1 = pbVar4 + 2;
      goto LAB_000284d8;
    }
    bVar5 = *param_2;
    if (bVar5 != 0x2f && bVar5 != 0) {
      do {
        uVar7 = FUN_00028178(param_1,param_2,param_3,bVar5,param_4);
        if (uVar7 != 0) {
          return uVar7;
        }
        param_2 = param_2 + 1;
        bVar5 = *param_2;
      } while (bVar5 != 0 && bVar5 != 0x2f);
    }
    if (bVar8 == 0) {
      return (uint)(bVar5 == 0);
    }
    if (bVar8 != 0x2f) {
      if (bVar8 != 0x5c) {
        return 2;
      }
      if (pbVar4[2] != 0x2f) {
        return 2;
      }
    }
  } while( true );
LAB_000283d4:
  if (param_1 < pbVar12) {
    if (bVar8 != 0x2d) goto LAB_000283fc;
    bVar8 = 0x2d;
    bVar5 = bVar8;
    if (param_1[1] != 0x2d) goto LAB_00028458;
    while (param_1 = param_1 + 1, param_1 < pbVar12) {
LAB_000283fc:
      bVar6 = 0;
      while( true ) {
        pbVar4 = param_1 + 1;
        if (*param_1 == 0x5c) break;
        if (*param_1 != 0x2d) goto LAB_00028420;
        bVar6 = param_1[-1];
        param_1 = pbVar4;
        if (pbVar12 <= pbVar4) goto LAB_00028484;
      }
      param_1 = pbVar4;
      if (pbVar12 <= pbVar4) break;
LAB_00028420:
      if ((param_1[1] != 0x2d) &&
         ((bVar8 = *param_1, bVar5 = bVar8, bVar6 == 0 || (bVar5 = bVar6, bVar6 <= bVar8)))) {
LAB_00028458:
        do {
          if (*param_2 == bVar5) {
            if (uVar7 != 0) {
              return 0;
            }
            goto LAB_00028468;
          }
          bVar5 = bVar5 + 1;
        } while (bVar5 <= bVar8);
      }
    }
  }
LAB_00028484:
  if (uVar7 == 0) {
    return 0;
  }
LAB_00028468:
  param_2 = param_2 + 1;
  bVar8 = pbVar12[1];
  param_1 = pbVar12 + 1;
  goto joined_r0x000281c0;
LAB_00028514:
  do {
    if (uVar11 == 0x5c) {
      if (pbVar4[1] == 0) break;
      pbVar4 = pbVar4 + 2;
      bVar8 = *pbVar4;
    }
    else {
      if ((uVar11 == 0x2a || uVar11 == 0x3f) || (uVar11 == 0x5b)) {
        bVar8 = *param_2;
        while( true ) {
          if (bVar8 == 0) {
            return 2;
          }
          uVar11 = FUN_00028178(param_1,param_2,param_3,bVar8,param_4);
          if (uVar11 != 0) break;
          param_2 = param_2 + 1;
          bVar8 = *param_2;
        }
        return uVar11;
      }
      pbVar4 = pbVar4 + 1;
      bVar8 = *pbVar4;
    }
    uVar11 = (uint)bVar8;
  } while (bVar8 != 0);
  sVar1 = strlen((char *)param_2);
  sVar2 = strlen((char *)param_1);
  iVar3 = sVar1 - sVar2;
  if (-1 < iVar3) {
    pbVar4 = param_2 + iVar3;
    if (param_3 == 0) {
      iVar10 = uVar9 - param_2[iVar3];
      if ((iVar10 == 0) && (param_2[iVar3] != 0)) {
        do {
          param_1 = param_1 + 1;
          pbVar4 = pbVar4 + 1;
          iVar10 = (uint)*param_1 - (uint)*pbVar4;
          if (iVar10 != 0) break;
        } while (*pbVar4 != 0 && *param_1 != 0);
      }
      uVar7 = (uint)(iVar10 == 0);
    }
    else {
      iVar3 = strcmp((char *)param_1,(char *)pbVar4);
      uVar7 = (uint)(iVar3 == 0);
    }
  }
  return uVar7;
}



/* ===== FUN_000286b8 @ 000286b8 size=24 ===== */

bool FUN_000286b8(void)

{
  int iVar1;
  
  iVar1 = FUN_00028178();
  return iVar1 == 1;
}



/* ===== FUN_000286d0 @ 000286d0 size=100 ===== */

int FUN_000286d0(undefined4 param_1,uint param_2,int param_3,code *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = param_2 + (param_3 + 0x3fffffff) * 4;
  if (param_2 <= uVar4) {
    do {
      uVar1 = (uint)((int)(uVar4 - param_2) >> 2) >> 1;
      iVar3 = param_2 + uVar1 * 4;
      iVar2 = (*param_4)(param_1,*(undefined4 *)(param_2 + uVar1 * 4));
      if (iVar2 < 0) {
        uVar4 = iVar3 - 4;
      }
      else {
        param_2 = iVar3 + 4;
        if (iVar2 == 0) {
          return iVar3;
        }
      }
    } while (param_2 <= uVar4);
  }
  return 0;
}



/* ===== FUN_00028734 @ 00028734 size=592 ===== */

void FUN_00028734(void)

{
  DAT_00066bac = DAT_00028988;
  DAT_00066bb4 = DAT_00028990;
  DAT_00066bbc = DAT_00028998;
  DAT_00066bc4 = DAT_000289a0;
  DAT_00066bcc = DAT_000289a8;
  DAT_00066bd4 = DAT_000289b0;
  DAT_00066cac = DAT_00028988;
  DAT_00066cb4 = DAT_00028990;
  DAT_00066ccc = DAT_000289a8;
  DAT_00066cd4 = DAT_000289b0;
  DAT_00066bdc = DAT_000289b8;
  DAT_00066be4 = DAT_000289c0;
  DAT_00066cbc = DAT_00028998;
  DAT_00066cc4 = DAT_000289a0;
  DAT_00066cdc = DAT_000289b8;
  DAT_00066ce4 = DAT_000289c0;
  DAT_00066bec._0_1_ = (undefined1)DAT_000289c8;
  DAT_00066cfc = DAT_000289d8;
  DAT_00066d04 = DAT_000289e0;
  DAT_00066c0c = DAT_000289e8;
  DAT_00066c14 = DAT_000289f0;
  DAT_00066d0c._0_1_ = (undefined1)DAT_000289e8;
  DAT_00066c1c = DAT_000289f8;
  DAT_00066c24 = DAT_00028a00;
  DAT_00066c2c = DAT_00028a08;
  DAT_00066c34 = DAT_00028a10;
  DAT_00066d2c = DAT_00028a08;
  DAT_00066d34 = DAT_00028a10;
  DAT_00066c3c = DAT_00028a18;
  DAT_00066c44 = DAT_00028a20;
  DAT_00066d3c = DAT_00028a18;
  DAT_00066d44 = DAT_00028a20;
  DAT_00066c4c = DAT_00028a28;
  DAT_00066c54 = DAT_00028a30;
  DAT_00066d4c = DAT_00028a28;
  DAT_00066d54 = DAT_00028a30;
  DAT_00066c5c = DAT_00028a38;
  DAT_00066c64 = DAT_00028a40;
  DAT_00066d5c = DAT_00028a38;
  DAT_00066d64 = DAT_00028a40;
  DAT_00066c6c = DAT_00028a48;
  DAT_00066c74 = DAT_00028a50;
  DAT_00066cec = DAT_000289c8;
  DAT_00066cf4 = DAT_000289d0;
  DAT_00066d6c = DAT_00028a48;
  DAT_00066d74 = DAT_00028a50;
  DAT_00066c7c = DAT_00028a58;
  DAT_00066c84 = DAT_00028a60;
  DAT_00066d7c = DAT_00028a58;
  DAT_00066d84 = DAT_00028a60;
  DAT_00066c9c = DAT_00028a78;
  DAT_00066ca4 = DAT_00028a80;
  DAT_00066c8c = DAT_00028a68;
  DAT_00066c94 = DAT_00028a70;
  DAT_00066d8c = DAT_00028a68;
  DAT_00066d94 = DAT_00028a70;
  DAT_00066d9c = DAT_00028a78;
  DAT_00066da4 = DAT_00028a80;
  DAT_00066bfc._1_1_ = 0x71;
  DAT_00066d1c._1_1_ = 0x51;
  DAT_00066d1c._3_1_ = 0x53;
  DAT_00066d1c._4_1_ = 0x54;
  DAT_00066d1c._6_1_ = 0x56;
  DAT_00066d1c._7_1_ = 0x57;
  DAT_00066d0c._1_7_ = (undefined7)DAT_00028a88;
  DAT_00066d14._0_1_ = (undefined1)((ulonglong)DAT_00028a88 >> 0x38);
  DAT_00066d14._1_7_ = (undefined7)DAT_00028a90;
  DAT_00066d1c._0_1_ = (undefined1)((ulonglong)DAT_00028a90 >> 0x38);
  DAT_00066d24 = CONCAT53((int5)((ulonglong)DAT_00028a00 >> 0x18),0x5a5900);
  DAT_00066d1c._2_1_ = 0x52;
  DAT_00066bfc._3_1_ = 0x73;
  DAT_00066d1c._5_1_ = 0x55;
  DAT_00066bfc._6_1_ = 0x76;
  DAT_00066d24 = CONCAT71(DAT_00066d24._1_7_,0x58);
  DAT_00066bfc._2_1_ = 0x72;
  DAT_00066bfc._4_1_ = 0x74;
  DAT_00066bfc._5_1_ = 0x75;
  DAT_00066bfc._7_1_ = 0x77;
  DAT_00066c04 = CONCAT53((int5)((ulonglong)DAT_000289e0 >> 0x18),0x7a7978);
  DAT_00066bec._1_7_ = (undefined7)DAT_00028a98;
  DAT_00066bf4._0_1_ = (undefined1)((ulonglong)DAT_00028a98 >> 0x38);
  DAT_00066bf4._1_7_ = (undefined7)DAT_00028aa0;
  DAT_00066bfc._0_1_ = (undefined1)((ulonglong)DAT_00028aa0 >> 0x38);
  return;
}



/* ===== FUN_00028aa8 @ 00028aa8 size=64 ===== */

int FUN_00028aa8(byte *param_1,byte *param_2)

{
  int iVar1;
  
  iVar1 = (uint)*param_1 - (uint)*param_2;
  if ((iVar1 == 0) && (*param_1 != 0 && *param_2 != 0)) {
    do {
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      iVar1 = (uint)*param_1 - (uint)*param_2;
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar1 = 0;
    } while (*param_1 != 0 && *param_2 != 0);
  }
  return iVar1;
}



/* ===== FUN_00028ae8 @ 00028ae8 size=1128 ===== */

void FUN_00028ae8(uint *param_1,int *param_2,char *param_3,char *param_4)

{
  ushort uVar1;
  byte *pbVar2;
  size_t sVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int iVar15;
  byte *pbVar16;
  undefined8 *puVar17;
  bool bVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  pbVar2 = (byte *)getenv(param_3);
  if (pbVar2 != (byte *)0x0) {
    bVar8 = *pbVar2;
    iVar6 = (int)(short)(ushort)bVar8;
    uVar1 = *(ushort *)(__ctype_b + iVar6 * 2);
    while ((uVar1 & 0x20) != 0) {
      pbVar2 = pbVar2 + 1;
      bVar8 = *pbVar2;
      iVar6 = (int)(short)(ushort)bVar8;
      uVar1 = *(ushort *)(__ctype_b + iVar6 * 2);
    }
    if (bVar8 != 0) goto LAB_00028b50;
  }
  pbVar2 = (byte *)getenv(param_4);
  if (pbVar2 == (byte *)0x0) {
    return;
  }
  bVar8 = *pbVar2;
  iVar6 = (int)(short)(ushort)bVar8;
  uVar1 = *(ushort *)(__ctype_b + iVar6 * 2);
  while ((uVar1 & 0x20) != 0) {
    pbVar2 = pbVar2 + 1;
    bVar8 = *pbVar2;
    iVar6 = (int)(short)(ushort)bVar8;
    uVar1 = *(ushort *)(__ctype_b + iVar6 * 2);
  }
  if (bVar8 == 0) {
    return;
  }
LAB_00028b50:
  iVar15 = 0;
  pbVar12 = pbVar2;
  while (iVar15 = iVar15 + 1, bVar8 != 0x22) {
    uVar1 = *(ushort *)(__ctype_b + iVar6 * 2);
    while ((uVar1 & 0x20) == 0) {
      pbVar12 = pbVar12 + 1;
      if (*pbVar12 == 0) goto LAB_00028b94;
      uVar1 = *(ushort *)(__ctype_b + (uint)*pbVar12 * 2);
    }
    do {
      pbVar12 = pbVar12 + 1;
      bVar8 = *pbVar12;
      iVar6 = (int)(short)(ushort)bVar8;
      if (bVar8 == 0) goto LAB_00028b94;
      uVar1 = *(ushort *)(__ctype_b + iVar6 * 2);
joined_r0x00028f0c:
    } while ((uVar1 & 0x20) != 0);
  }
  bVar8 = pbVar12[1];
  pbVar12 = pbVar12 + 1;
  pbVar16 = pbVar12;
  if (bVar8 != 0 && bVar8 != 0x22) {
    do {
      bVar18 = bVar8 == 0x5c;
      pbVar12 = pbVar16 + 1;
      bVar8 = *pbVar12;
      if (bVar18) {
        if (bVar8 == 0) goto LAB_00028b94;
        pbVar12 = pbVar16 + 2;
        bVar8 = *pbVar12;
      }
      pbVar16 = pbVar12;
    } while (bVar8 != 0 && bVar8 != 0x22);
  }
  if (bVar8 != 0) {
    bVar8 = pbVar12[1];
    pbVar12 = pbVar12 + 1;
    if (bVar8 != 0) {
      iVar6 = (int)(short)(ushort)bVar8;
      uVar1 = *(ushort *)(__ctype_b + iVar6 * 2);
      goto joined_r0x00028f0c;
    }
  }
LAB_00028b94:
  sVar3 = strlen((char *)pbVar2);
  pbVar12 = malloc(sVar3 + 1);
  if (pbVar12 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_000187c0(4,"Can\'t get memory for arguments");
  }
  strcpy((char *)pbVar12,(char *)pbVar2);
  puVar4 = malloc((iVar15 + *param_1 + 1) * 4);
  if (puVar4 == (undefined4 *)0x0) {
    free(pbVar12);
                    /* WARNING: Subroutine does not return */
    FUN_000187c0(4,"Can\'t get memory for arguments");
  }
  bVar8 = *pbVar12;
  puVar9 = (undefined4 *)*param_2;
  *param_2 = (int)(puVar9 + 1);
  *puVar4 = *puVar9;
  puVar14 = (undefined8 *)(puVar4 + 2);
  puVar5 = (undefined8 *)(puVar4 + 1);
  if (bVar8 == 0x22) goto LAB_00028e14;
  do {
    *(byte **)((int)puVar14 + -4) = pbVar12;
    bVar8 = *pbVar12;
    while( true ) {
      puVar13 = puVar14;
      if (bVar8 == 0) goto LAB_00028c84;
      if ((*(ushort *)(__ctype_b + (uint)bVar8 * 2) & 0x20) != 0) break;
      pbVar12 = pbVar12 + 1;
      bVar8 = *pbVar12;
    }
    pbVar2 = pbVar12 + 1;
    *pbVar12 = 0;
    while( true ) {
      uVar10 = (uint)*pbVar2;
      if (uVar10 == 0) goto LAB_00028c84;
      uVar1 = *(ushort *)(__ctype_b + uVar10 * 2);
      pbVar12 = pbVar2;
      while ((uVar1 & 0x20) != 0) {
        pbVar12 = pbVar12 + 1;
        uVar10 = (uint)*pbVar12;
        if (uVar10 == 0) goto LAB_00028c84;
        uVar1 = *(ushort *)(__ctype_b + uVar10 * 2);
      }
      puVar14 = (undefined8 *)((int)puVar13 + 4);
      puVar5 = puVar13;
      if (uVar10 != 0x22) break;
LAB_00028e14:
      pbVar16 = pbVar12 + 1;
      *(byte **)((int)puVar14 + -4) = pbVar16;
      bVar8 = pbVar12[1];
      pbVar12 = pbVar16;
      if (bVar8 != 0x22 && bVar8 != 0) {
        do {
          bVar18 = bVar8 == 0x5c;
          pbVar2 = pbVar12 + 1;
          bVar8 = *pbVar2;
          if (bVar18) {
            if (bVar8 == 0) goto LAB_00028ec8;
            pbVar2 = pbVar12 + 2;
            bVar8 = *pbVar2;
          }
          pbVar12 = pbVar2;
        } while (bVar8 != 0 && bVar8 != 0x22);
      }
      pbVar2 = pbVar12;
      if (bVar8 != 0) {
        pbVar2 = pbVar12 + 1;
        *pbVar12 = 0;
      }
LAB_00028ec8:
      while( true ) {
        pbVar16 = (byte *)strchr((char *)pbVar16,0x5c);
        puVar13 = puVar14;
        if (pbVar16 == (byte *)0x0) break;
        strcpy((char *)pbVar16,(char *)(pbVar16 + 1));
        if (*pbVar16 != 0) {
          pbVar16 = pbVar16 + 1;
        }
      }
    }
  } while( true );
LAB_00028c84:
  uVar10 = *param_1;
  uVar11 = uVar10 - 1;
  *param_1 = uVar11;
  if (uVar11 != 0) {
    puVar14 = (undefined8 *)*param_2;
    if (uVar10 - 2 < 8 || puVar13 < puVar14 + 2 && puVar14 < (undefined8 *)((int)puVar5 + 0x14)) {
      do {
        puVar9 = (undefined4 *)((int)puVar14 + 4);
        *(undefined4 *)((int)puVar5 + 4) = *(undefined4 *)puVar14;
        if (uVar11 == 1) break;
        puVar14 = puVar14 + 1;
        uVar11 = uVar11 - 2;
        puVar5 = puVar5 + 1;
        *(undefined4 *)puVar5 = *puVar9;
      } while (uVar11 != 0);
    }
    else {
      uVar7 = 0;
      puVar5 = puVar14;
      puVar17 = puVar13;
      do {
        uVar7 = uVar7 + 1;
        uVar19 = *puVar5;
        uVar20 = puVar5[1];
        puVar5 = puVar5 + 2;
        *puVar17 = uVar19;
        puVar17[1] = uVar20;
        puVar17 = puVar17 + 2;
      } while (uVar7 != uVar11 >> 2);
      uVar7 = uVar11 & 0xfffffffc;
      iVar6 = uVar7 * 4;
      if (((uVar7 != uVar11) &&
          (*(undefined4 *)((int)puVar13 + uVar7 * 4) = *(undefined4 *)((int)puVar14 + uVar7 * 4),
          uVar11 - uVar7 != 1)) &&
         (*(undefined4 *)((int)puVar13 + iVar6 + 4) = *(undefined4 *)((int)puVar14 + iVar6 + 4),
         uVar11 - uVar7 != 2)) {
        *(undefined4 *)((int)puVar13 + iVar6 + 8) = *(undefined4 *)((int)puVar14 + iVar6 + 8);
      }
    }
    puVar13 = (undefined8 *)((int)puVar13 + (uVar10 + 0x3fffffff) * 4);
  }
  *(undefined4 *)puVar13 = 0;
  *param_2 = (int)puVar4;
  *param_1 = uVar10 + iVar15;
  return;
}



/* ===== FUN_00028f58 @ 00028f58 size=4 ===== */

void FUN_00028f58(void)

{
  return;
}



/* ===== FUN_00028f5c @ 00028f5c size=100 ===== */

undefined4 FUN_00028f5c(int param_1,int param_2)

{
  undefined4 uVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  pbVar3 = (byte *)(param_1 + -1);
  pbVar2 = (byte *)(param_1 + param_2 + -1);
  uVar1 = 0;
  do {
    while( true ) {
      pbVar3 = pbVar3 + 1;
      if (*pbVar3 < 0x20) break;
      uVar1 = 1;
      if (pbVar3 == pbVar2) {
        return 1;
      }
    }
    if ((~(0xf3ffc07fU >> (uint)*pbVar3) & 1) == 0) {
      return 0;
    }
  } while (pbVar3 != pbVar2);
  return uVar1;
}



/* ===== FUN_00028fc0 @ 00028fc0 size=280 ===== */

int FUN_00028fc0(undefined4 param_1,char *param_2,char *param_3)

{
  uint uVar1;
  undefined2 uVar2;
  size_t sVar3;
  
  DAT_00049aa9 = 0;
  if (param_2 == (char *)0xffffffff) {
    sVar3 = strlen(&DAT_00049aa8);
    *(undefined2 *)(&DAT_00049aa8 + sVar3) = s_escaped_paths_and_comments_can_b_00033860._68_2_;
  }
  else if (param_2 == (char *)0xfffffffe) {
    sVar3 = strlen(&DAT_00049aa8);
    uVar2 = s_escaped_paths_and_comments_can_b_00033860._68_2_;
    (&DAT_00049aa8)[sVar3] = 0x2e;
    *(undefined2 *)(&DAT_00049aa9 + sVar3) = uVar2;
  }
  else if (param_2 != (char *)0x0) {
    strcat(&DAT_00049aa8,param_2);
  }
  sVar3 = strlen(&DAT_00049aa8);
  *(undefined2 *)(&DAT_00049aa8 + sVar3) = s_cannot_write_zip_file_to_termina_0002e8fc._32_2_;
  if (param_3 == (char *)0x0) {
    *(undefined2 *)(&DAT_00049aa9 + sVar3) = DAT_0002ec2c;
  }
  else {
    strcpy(&DAT_00049aa9 + sVar3,param_3);
  }
  uVar1 = -(DAT_0004ba20 + 1);
  DAT_0004ba20 = DAT_0004ba20 + 1 & 3;
  if (-1 < (int)uVar1) {
    DAT_0004ba20 = -(uVar1 & 3);
  }
  sprintf((char *)(DAT_0004ba20 * 0x18 + 0x4ba28),&DAT_00049aa8,param_1);
  return DAT_0004ba20 * 0x18 + 0x4ba28;
}



/* ===== FUN_000290d8 @ 000290d8 size=280 ===== */

int FUN_000290d8(undefined4 param_1,char *param_2,char *param_3)

{
  uint uVar1;
  undefined2 uVar2;
  size_t sVar3;
  
  DAT_00049ab9 = 0;
  if (param_2 == (char *)0xffffffff) {
    sVar3 = strlen(&DAT_00049ab8);
    *(undefined2 *)(&DAT_00049ab8 + sVar3) = s_escaped_paths_and_comments_can_b_00033860._68_2_;
  }
  else if (param_2 == (char *)0xfffffffe) {
    sVar3 = strlen(&DAT_00049ab8);
    uVar2 = s_escaped_paths_and_comments_can_b_00033860._68_2_;
    (&DAT_00049ab8)[sVar3] = 0x2e;
    *(undefined2 *)(&DAT_00049ab9 + sVar3) = uVar2;
  }
  else if (param_2 != (char *)0x0) {
    strcat(&DAT_00049ab8,param_2);
  }
  sVar3 = strlen(DAT_000291f0);
  *(undefined2 *)(&DAT_00049ab8 + sVar3) = s_cannot_write_zip_file_to_termina_0002e8fc._32_2_;
  if (param_3 == (char *)0x0) {
    *(undefined2 *)(&DAT_00049ab9 + sVar3) = DAT_0002fc3c;
  }
  else {
    strcpy(&DAT_00049ab9 + sVar3,param_3);
  }
  uVar1 = -(DAT_0004ba88 + 1);
  DAT_0004ba88 = DAT_0004ba88 + 1 & 3;
  if (-1 < (int)uVar1) {
    DAT_0004ba88 = -(uVar1 & 3);
  }
  sprintf((char *)(DAT_0004ba88 * 0x18 + 0x4ba90),DAT_000291f0,param_1);
  return DAT_0004ba88 * 0x18 + 0x4ba90;
}



/* ===== FUN_000291f4 @ 000291f4 size=296 ===== */

int FUN_000291f4(byte *param_1)

{
  byte bVar1;
  char cVar2;
  size_t sVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  
  if (param_1 == (byte *)0x0) {
    FUN_000194cc("Unable to read empty number in ReadNumString",&DAT_000369fc);
    return -1;
  }
  bVar1 = *param_1;
  if (9 < bVar1 - 0x30) {
    FUN_000194cc("Unable to read number (must start with digit): ",param_1);
    return -1;
  }
  sVar3 = strlen((char *)param_1);
  if (8 < sVar3) {
    FUN_000194cc("Number too long to read (8 characters max): ",param_1);
    return -1;
  }
  iVar4 = atoi((char *)param_1);
  iVar7 = (uint)bVar1 * 2;
  if ((*(ushort *)(__ctype_b + iVar7) & 8) == 0) {
    pbVar8 = (byte *)0x1;
  }
  else {
    pbVar5 = param_1;
    do {
      pbVar8 = pbVar5;
      pbVar5 = pbVar8 + 1;
      uVar6 = (uint)*pbVar5;
      iVar7 = uVar6 * 2;
      if (uVar6 == 0) {
        return iVar4;
      }
    } while ((*(ushort *)(__ctype_b + iVar7) & 8) != 0);
    pbVar8 = pbVar8 + (2 - (int)param_1);
  }
  if (param_1[(int)pbVar8] == 0) {
    cVar2 = *(char *)(__ctype_toupper + iVar7);
    if (cVar2 == 'K') {
      return iVar4 * 0x400;
    }
    if (cVar2 == 'M') {
      iVar7 = 0x100000;
    }
    else {
      if (cVar2 != 'G') {
        return -1;
      }
      iVar7 = 0x40000000;
    }
    return iVar7 * iVar4;
  }
  return -1;
}



/* ===== FUN_0002931c @ 0002931c size=444 ===== */

int FUN_0002931c(uint param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  char local_c;
  char local_b;
  
  iVar5 = 0;
  *param_2 = '\0';
  if (param_1 < 0x2800) {
    if (999 < param_1) goto LAB_0002934c;
    if (param_1 == 0) {
      iVar1 = 1;
      pcVar2 = param_2 + 1;
      *param_2 = '0';
      goto LAB_00029404;
    }
    uVar3 = param_1 / 10;
    local_c = (char)(param_1 % 10) + '0';
    if (9 < param_1) goto LAB_00029434;
    iVar1 = 1;
    *param_2 = local_c;
  }
  else {
    do {
      param_1 = param_1 >> 10;
      iVar5 = iVar5 + 1;
    } while (0x27ff < param_1);
    if (param_1 < 1000) {
      uVar3 = param_1 / 10;
      local_c = (char)param_1 + (char)uVar3 * -10 + '0';
LAB_00029434:
      cVar4 = (char)(uVar3 / 10);
      local_b = (char)uVar3 + cVar4 * -10 + '0';
      if (uVar3 < 10) {
        iVar1 = 2;
        *param_2 = local_b;
        param_2[1] = local_c;
        goto LAB_000293a0;
      }
      *param_2 = cVar4 + '0';
    }
    else {
LAB_0002934c:
      local_b = '.';
      iVar5 = iVar5 + 1;
      uVar3 = param_1 * 10 >> 10;
      cVar4 = (char)(uVar3 / 10);
      *param_2 = cVar4 + '0';
      local_c = (char)uVar3 + cVar4 * -10 + '0';
    }
    iVar1 = 3;
    param_2[1] = local_b;
    param_2[2] = local_c;
  }
LAB_000293a0:
  param_2 = param_2 + iVar1;
  pcVar2 = param_2;
  if (iVar5 != 0) {
    pcVar2 = param_2 + 1;
    iVar1 = iVar1 + 1;
    if (iVar5 == 1) {
      *param_2 = 'K';
    }
    else if (iVar5 == 2) {
      *param_2 = 'M';
    }
    else if (iVar5 == 3) {
      *param_2 = 'G';
    }
    else {
      if (iVar5 == 4) {
        cVar4 = 'T';
      }
      else {
        cVar4 = '?';
      }
      *param_2 = cVar4;
    }
  }
LAB_00029404:
  *pcVar2 = '\0';
  return iVar1;
}



/* ===== FUN_000294d8 @ 000294d8 size=100 ===== */

undefined4 FUN_000294d8(FILE *param_1,undefined4 param_2)

{
  char *__s;
  char local_6c;
  char local_6b;
  char local_6a;
  char acStack_69 [97];
  
  FUN_0002931c(param_2,&local_6c);
  if (local_6c == ' ') {
    if (local_6b == ' ') {
      if (local_6a == ' ') {
        __s = acStack_69;
      }
      else {
        __s = &local_6a;
      }
    }
    else {
      __s = &local_6b;
    }
  }
  else {
    __s = &local_6c;
  }
  fputs(__s,param_1);
  return 0;
}



/* ===== FUN_0002953c @ 0002953c size=204 ===== */

bool FUN_0002953c(byte *param_1,byte *param_2,int param_3,int param_4)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = (uint)*param_1;
  if (uVar4 == 0) {
    pbVar3 = (byte *)0x0;
  }
  else {
    uVar5 = (uint)*param_2;
    if (uVar5 == 0) {
      pbVar3 = (byte *)0x0;
    }
    else {
      iVar2 = 1 - (int)param_1;
      pbVar1 = param_2 + 1;
      if (param_3 == 0) {
        do {
          param_2 = pbVar1;
          pbVar3 = param_1 + iVar2;
          if (*(short *)(__ctype_toupper + uVar4 * 2) != *(short *)(__ctype_toupper + uVar5 * 2)) {
            return false;
          }
          param_1 = param_1 + 1;
          uVar4 = (uint)*param_1;
          if (uVar4 == 0) break;
          uVar5 = (uint)*param_2;
          pbVar1 = param_2 + 1;
        } while (uVar5 != 0);
      }
      else {
        do {
          param_2 = pbVar1;
          pbVar3 = param_1 + iVar2;
          if (uVar4 != uVar5) {
            return false;
          }
          param_1 = param_1 + 1;
          uVar4 = (uint)*param_1;
          if (uVar4 == 0) break;
          uVar5 = (uint)*param_2;
          pbVar1 = param_2 + 1;
        } while (uVar5 != 0);
      }
    }
  }
  if ((int)pbVar3 < param_4) {
    return false;
  }
  return *param_2 == 0;
}



/* ===== FUN_00029690 @ 00029690 size=144 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00029690(byte *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = (uint)*param_1;
  uVar4 = 0x34567890;
  _DAT_0004bc6c = DAT_00029720;
  DAT_0004bc74 = 0x34567890;
  if (uVar5 == 0) {
    return;
  }
  uVar3 = 0x23456789;
  uVar1 = 0x12345678;
  do {
    uVar2 = uVar5 ^ uVar1;
    param_1 = param_1 + 1;
    uVar5 = (uint)*param_1;
    uVar1 = *(uint *)(DAT_00066ba8 + (uVar2 & 0xff) * 4) ^ uVar1 >> 8;
    uVar3 = (uVar3 + (uVar1 & 0xff)) * 0x8088405 + 1;
    uVar4 = *(uint *)(DAT_00066ba8 + ((uVar4 ^ uVar3 >> 0x18) & 0xff) * 4) ^ uVar4 >> 8;
  } while (uVar5 != 0);
  _DAT_0004bc6c = CONCAT44(uVar3,uVar1);
  DAT_0004bc74 = uVar4;
  return;
}



/* ===== FUN_00029728 @ 00029728 size=1384 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00029728(byte *param_1,uint param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  byte local_34 [10];
  byte local_2a;
  byte local_29;
  
  DAT_0004bc78 = DAT_0004bc78 + 1;
  if (DAT_0004bc78 == 1) {
    uVar4 = time((time_t *)0x0);
    uVar6 = getpid();
    srand(uVar6 ^ uVar4);
  }
  uVar4 = (uint)*param_1;
  uVar6 = 0x34567890;
  DAT_0004bc74 = 0x34567890;
  _DAT_0004bc6c = DAT_000298c0;
  if (uVar4 == 0) {
    uVar7 = 0x23456789;
    uVar9 = 0x12345678;
  }
  else {
    uVar7 = 0x23456789;
    uVar9 = 0x12345678;
    pbVar2 = param_1;
    do {
      uVar5 = uVar4 ^ uVar9;
      pbVar2 = pbVar2 + 1;
      uVar4 = (uint)*pbVar2;
      uVar9 = *(uint *)(DAT_00066ba8 + (uVar5 & 0xff) * 4) ^ uVar9 >> 8;
      uVar7 = (uVar7 + (uVar9 & 0xff)) * 0x8088405 + 1;
      uVar6 = *(uint *)(DAT_00066ba8 + ((uVar6 ^ uVar7 >> 0x18) & 0xff) * 4) ^ uVar6 >> 8;
    } while (uVar4 != 0);
  }
  pbVar2 = local_34;
  do {
    iVar3 = rand();
    uVar5 = uVar6 & 0xffff | 2;
    uVar9 = *(uint *)(DAT_00066ba8 + ((uVar9 ^ iVar3 >> 7) & 0xff) * 4) ^ uVar9 >> 8;
    uVar7 = (uVar7 + (uVar9 & 0xff)) * 0x8088405 + 1;
    _DAT_0004bc6c = CONCAT44(uVar7,uVar9);
    uVar4 = *(uint *)(DAT_00066ba8 + ((uVar6 ^ uVar7 >> 0x18) & 0xff) * 4);
    pbVar8 = pbVar2 + 1;
    *pbVar2 = (byte)(iVar3 >> 7) ^ (byte)(uVar5 * (uVar5 ^ 1) >> 8);
    uVar6 = uVar4 ^ uVar6 >> 8;
    pbVar2 = pbVar8;
    DAT_0004bc74 = uVar6;
  } while (pbVar8 != &local_2a);
  uVar4 = 0x34567890;
  uVar6 = 0x23456789;
  uVar7 = 0x12345678;
  bVar1 = *param_1;
  while (bVar1 != 0) {
    param_1 = param_1 + 1;
    uVar7 = *(uint *)(DAT_00066ba8 + ((bVar1 ^ uVar7) & 0xff) * 4) ^ uVar7 >> 8;
    uVar6 = (uVar6 + (uVar7 & 0xff)) * 0x8088405 + 1;
    uVar4 = *(uint *)(DAT_00066ba8 + ((uVar4 ^ uVar6 >> 0x18) & 0xff) * 4) ^ uVar4 >> 8;
    bVar1 = *param_1;
  }
  uVar9 = uVar4 & 0xffff | 2;
  uVar7 = *(uint *)(DAT_00066ba8 + ((uVar7 ^ local_34[0]) & 0xff) * 4) ^ uVar7 >> 8;
  local_34[0] = local_34[0] ^ (byte)(uVar9 * (uVar9 ^ 1) >> 8);
  uVar6 = (uVar6 + (uVar7 & 0xff)) * 0x8088405 + 1;
  uVar9 = *(uint *)(DAT_00066ba8 + ((uVar4 ^ uVar6 >> 0x18) & 0xff) * 4) ^ uVar4 >> 8;
  uVar4 = *(uint *)(DAT_00066ba8 + ((uVar7 ^ local_34[1]) & 0xff) * 4) ^ uVar7 >> 8;
  uVar7 = uVar9 & 0xffff | 2;
  uVar6 = (uVar6 + (uVar4 & 0xff)) * 0x8088405 + 1;
  local_34[1] = local_34[1] ^ (byte)(uVar7 * (uVar7 ^ 1) >> 8);
  uVar9 = *(uint *)(DAT_00066ba8 + ((uVar9 ^ uVar6 >> 0x18) & 0xff) * 4) ^ uVar9 >> 8;
  uVar4 = *(uint *)(DAT_00066ba8 + ((uVar4 ^ local_34[2]) & 0xff) * 4) ^ uVar4 >> 8;
  uVar7 = uVar9 & 0xffff | 2;
  uVar6 = (uVar6 + (uVar4 & 0xff)) * 0x8088405 + 1;
  local_34[2] = local_34[2] ^ (byte)(uVar7 * (uVar7 ^ 1) >> 8);
  uVar9 = *(uint *)(DAT_00066ba8 + ((uVar9 ^ uVar6 >> 0x18) & 0xff) * 4) ^ uVar9 >> 8;
  uVar4 = *(uint *)(DAT_00066ba8 + ((uVar4 ^ local_34[3]) & 0xff) * 4) ^ uVar4 >> 8;
  uVar7 = uVar9 & 0xffff | 2;
  uVar6 = (uVar6 + (uVar4 & 0xff)) * 0x8088405 + 1;
  local_34[3] = local_34[3] ^ (byte)(uVar7 * (uVar7 ^ 1) >> 8);
  uVar9 = *(uint *)(DAT_00066ba8 + ((uVar9 ^ uVar6 >> 0x18) & 0xff) * 4) ^ uVar9 >> 8;
  uVar4 = *(uint *)(DAT_00066ba8 + ((uVar4 ^ local_34[4]) & 0xff) * 4) ^ uVar4 >> 8;
  uVar7 = uVar9 & 0xffff | 2;
  uVar6 = (uVar6 + (uVar4 & 0xff)) * 0x8088405 + 1;
  local_34[4] = local_34[4] ^ (byte)(uVar7 * (uVar7 ^ 1) >> 8);
  uVar9 = *(uint *)(DAT_00066ba8 + ((uVar9 ^ uVar6 >> 0x18) & 0xff) * 4) ^ uVar9 >> 8;
  uVar4 = *(uint *)(DAT_00066ba8 + ((uVar4 ^ local_34[5]) & 0xff) * 4) ^ uVar4 >> 8;
  uVar7 = uVar9 & 0xffff | 2;
  uVar6 = (uVar6 + (uVar4 & 0xff)) * 0x8088405 + 1;
  local_34[5] = local_34[5] ^ (byte)(uVar7 * (uVar7 ^ 1) >> 8);
  uVar9 = *(uint *)(DAT_00066ba8 + ((uVar9 ^ uVar6 >> 0x18) & 0xff) * 4) ^ uVar9 >> 8;
  uVar4 = *(uint *)(DAT_00066ba8 + ((uVar4 ^ local_34[6]) & 0xff) * 4) ^ uVar4 >> 8;
  uVar7 = uVar9 & 0xffff | 2;
  uVar6 = (uVar6 + (uVar4 & 0xff)) * 0x8088405 + 1;
  local_34[6] = local_34[6] ^ (byte)(uVar7 * (uVar7 ^ 1) >> 8);
  uVar5 = *(uint *)(DAT_00066ba8 + ((uVar9 ^ uVar6 >> 0x18) & 0xff) * 4) ^ uVar9 >> 8;
  uVar9 = *(uint *)(DAT_00066ba8 + ((uVar4 ^ local_34[7]) & 0xff) * 4) ^ uVar4 >> 8;
  uVar7 = uVar5 & 0xffff | 2;
  uVar4 = (uVar6 + (uVar9 & 0xff)) * 0x8088405 + 1;
  local_34[7] = local_34[7] ^ (byte)(uVar7 * (uVar7 ^ 1) >> 8);
  uVar6 = *(uint *)(DAT_00066ba8 + ((uVar5 ^ uVar4 >> 0x18) & 0xff) * 4) ^ uVar5 >> 8;
  uVar5 = uVar6 & 0xffff | 2;
  uVar7 = *(uint *)(DAT_00066ba8 + ((uVar9 ^ local_34[8]) & 0xff) * 4) ^ uVar9 >> 8;
  local_34[8] = local_34[8] ^ (byte)(uVar5 * (uVar5 ^ 1) >> 8);
  uVar4 = (uVar4 + (uVar7 & 0xff)) * 0x8088405 + 1;
  uVar6 = *(uint *)(DAT_00066ba8 + ((uVar6 ^ uVar4 >> 0x18) & 0xff) * 4) ^ uVar6 >> 8;
  uVar7 = *(uint *)(DAT_00066ba8 + ((local_34[9] ^ uVar7) & 0xff) * 4) ^ uVar7 >> 8;
  uVar9 = uVar6 & 0xffff | 2;
  uVar5 = (uVar4 + (uVar7 & 0xff)) * 0x8088405 + 1;
  local_34[9] = local_34[9] ^ (byte)(uVar9 * (uVar9 ^ 1) >> 8);
  uVar6 = *(uint *)(DAT_00066ba8 + ((uVar6 ^ uVar5 >> 0x18) & 0xff) * 4) ^ uVar6 >> 8;
  uVar7 = *(uint *)(DAT_00066ba8 + ((uVar7 ^ param_2 >> 0x10) & 0xff) * 4) ^ uVar7 >> 8;
  uVar4 = uVar6 & 0xffff | 2;
  uVar5 = (uVar5 + (uVar7 & 0xff)) * 0x8088405 + 1;
  local_2a = (byte)(param_2 >> 0x10) ^ (byte)(uVar4 * (uVar4 ^ 1) >> 8);
  uVar6 = *(uint *)(DAT_00066ba8 + ((uVar6 ^ uVar5 >> 0x18) & 0xff) * 4) ^ uVar6 >> 8;
  uVar9 = *(uint *)(DAT_00066ba8 + ((param_2 >> 0x18 ^ uVar7) & 0xff) * 4) ^ uVar7 >> 8;
  uVar7 = uVar6 & 0xffff | 2;
  uVar4 = (uVar5 + (uVar9 & 0xff)) * 0x8088405 + 1;
  _DAT_0004bc6c = CONCAT44(uVar4,uVar9);
  local_29 = (byte)(param_2 >> 0x18) ^ (byte)(uVar7 * (uVar7 ^ 1) >> 8);
  DAT_0004bc74 = *(uint *)(DAT_00066ba8 + ((uVar6 ^ uVar4 >> 0x18) & 0xff) * 4) ^ uVar6 >> 8;
  FUN_00024580(local_34,1,0xc,0);
  return;
}



/* ===== FUN_00029c98 @ 00029c98 size=208 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00029c98(byte *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  if ((DAT_0004bbb4 != 0) && (param_3 * param_2 != 0)) {
    pbVar3 = param_1;
    do {
      uVar2 = DAT_0004bc74 & 0xffff | 2;
      _DAT_0004bc6c =
           *(uint *)(DAT_00066ba8 + ((*pbVar3 ^ _DAT_0004bc6c) & 0xff) * 4) ^ _DAT_0004bc6c >> 8;
      DAT_0004bc70 = (DAT_0004bc70 + (_DAT_0004bc6c & 0xff)) * 0x8088405 + 1;
      uVar1 = *(uint *)(DAT_00066ba8 + ((DAT_0004bc74 ^ DAT_0004bc70 >> 0x18) & 0xff) * 4);
      pbVar4 = pbVar3 + 1;
      *pbVar3 = *pbVar3 ^ (byte)(uVar2 * (uVar2 ^ 1) >> 8);
      DAT_0004bc74 = uVar1 ^ DAT_0004bc74 >> 8;
      pbVar3 = pbVar4;
    } while (pbVar4 != param_1 + param_3 * param_2);
  }
  FUN_00024580(param_1,param_2,param_3,0);
  return;
}



/* ===== FUN_00029d68 @ 00029d68 size=68 ===== */

void FUN_00029d68(int param_1)

{
  termios tStack_44;
  
  DAT_00049bfc = param_1;
  tcgetattr(param_1,&tStack_44);
  tStack_44.c_lflag = tStack_44.c_lflag & 0xfffffff7;
  tcsetattr(param_1,2,&tStack_44);
  return;
}



/* ===== FUN_00029dac @ 00029dac size=84 ===== */

void FUN_00029dac(void)

{
  int __fd;
  termios tStack_4c;
  
  __fd = DAT_00049bfc;
  if (DAT_00049bfc != -1) {
    tcgetattr(DAT_00049bfc,&tStack_4c);
    tStack_4c.c_lflag = tStack_4c.c_lflag | 8;
    tcsetattr(__fd,2,&tStack_4c);
    DAT_00049bfc = -1;
  }
  return;
}



/* ===== FUN_00029e00 @ 00029e00 size=428 ===== */

int FUN_00029e00(char *param_1,int param_2,int param_3)

{
  int __fd;
  char *pcVar1;
  int iVar2;
  int iVar3;
  char local_65;
  termios tStack_64;
  
  __fd = open("/dev/tty",0);
  if (__fd == -1) {
    param_2 = 0;
  }
  else {
    pcVar1 = "";
    do {
      fputs(pcVar1,stderr);
      fputs(param_1,stderr);
      fflush(stderr);
      DAT_00049bfc = __fd;
      tcgetattr(__fd,&tStack_64);
      tStack_64.c_lflag = tStack_64.c_lflag & 0xfffffff7;
      tcsetattr(__fd,2,&tStack_64);
      iVar2 = 0;
      do {
        while (read(__fd,&local_65,1), iVar2 < param_3) {
          iVar3 = iVar2 + 1;
          *(char *)(param_2 + iVar2) = local_65;
          iVar2 = iVar3;
          if (local_65 == '\n') goto LAB_00029ec4;
        }
        iVar3 = iVar2;
      } while (local_65 != '\n');
LAB_00029ec4:
      iVar2 = DAT_00049bfc;
      if (DAT_00049bfc != -1) {
        tcgetattr(DAT_00049bfc,&tStack_64);
        tStack_64.c_lflag = tStack_64.c_lflag | 8;
        tcsetattr(iVar2,2,&tStack_64);
        DAT_00049bfc = -1;
      }
      if (stderr->_chain == (_IO_FILE *)0x0) {
        fputc(10,stderr);
      }
      else {
        pcVar1 = stderr->_IO_write_base;
        if (pcVar1 < stderr->_IO_buf_base) {
          stderr->_IO_write_base = pcVar1 + 1;
          *pcVar1 = '\n';
        }
        else {
          __fputc_unlocked(10);
        }
      }
      fflush(stderr);
      pcVar1 = "(line too long--try again)\n";
    } while (*(char *)(param_2 + iVar3 + -1) != '\n');
    *(undefined1 *)(param_2 + iVar3 + -1) = 0;
    close(__fd);
  }
  return param_2;
}



/* ===== FUN_00029fac @ 00029fac size=1324 ===== */

int FUN_00029fac(char *param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  size_t sVar5;
  char *pcVar6;
  DIR *__dirp;
  dirent *pdVar7;
  size_t sVar8;
  void *__dest;
  void *pvVar9;
  undefined *puVar10;
  char cVar11;
  int iVar12;
  char *__s1;
  bool bVar13;
  stat sStack_80;
  
  iVar3 = strcmp(param_1,"-");
  if (iVar3 == 0) {
    iVar3 = FUN_00026150(param_1,0,param_2);
    return iVar3;
  }
  if (DAT_0004bbd0 == 0) {
    iVar3 = stat(param_1,&sStack_80);
  }
  else {
    iVar3 = lstat(param_1,&sStack_80);
  }
  if (iVar3 == 0) {
    if (((sStack_80.st_mode & 0x8000) == 0) && ((sStack_80.st_mode & 0xa000) != 0xa000)) {
      if ((sStack_80.st_mode & 0x4000) != 0) {
        sVar5 = strlen(param_1);
        pcVar6 = malloc(sVar5 + 2);
        if (pcVar6 == (char *)0x0) {
          return 4;
        }
        iVar3 = strcmp(param_1,".");
        if (iVar3 == 0) {
          *pcVar6 = '\0';
LAB_0002a278:
          if ((DAT_0004bc68 != 0) && (__dirp = opendir(param_1), __dirp != (DIR *)0x0)) {
            while (pdVar7 = readdir(__dirp), pdVar7 != (dirent *)0x0) {
              __s1 = pdVar7->d_name;
              iVar3 = strcmp(__s1,".");
              if ((iVar3 != 0) && (iVar3 = strcmp(__s1,".."), iVar3 != 0)) {
                sVar5 = strlen(pcVar6);
                sVar8 = strlen(__s1);
                __dest = malloc(sVar5 + sVar8 + 1);
                if (__dest == (void *)0x0) {
                  iVar3 = 4;
                  closedir(__dirp);
                  goto LAB_0002a3ac;
                }
                pvVar9 = memcpy(__dest,pcVar6,sVar5);
                strcpy((char *)((int)pvVar9 + sVar5),__s1);
                iVar3 = FUN_00029fac(__dest,param_2);
                if (iVar3 != 0) {
                  if (iVar3 != -1) {
                    /* WARNING: Subroutine does not return */
                    FUN_000187c0();
                  }
                  FUN_000194cc("name not matched: ",__dest);
                }
                free(__dest);
              }
            }
            closedir(__dirp);
          }
          free(pcVar6);
          return 0;
        }
        memcpy(pcVar6,param_1,sVar5 + 1);
        if (pcVar6[sVar5 - 1] != '/') {
          *(undefined2 *)(pcVar6 + sVar5) = DAT_0002f544;
        }
        if ((DAT_00049af0 == 0) || (iVar3 = FUN_00026150(pcVar6,1,param_2), iVar3 == 0))
        goto LAB_0002a278;
        goto LAB_0002a3ac;
      }
      if ((sStack_80.st_mode & 0x1000) == 0) {
        FUN_000194cc("ignoring special file: ",param_1);
        return 0;
      }
      if (DAT_0004bbbc == 0) {
        FUN_000194cc("ignoring FIFO (Named Pipe) - use -FI to read: ",param_1);
        return 0;
      }
      if (DAT_00049ae8 != 0) {
        FUN_000194cc("Reading FIFO (Named Pipe): ",param_1);
      }
    }
    iVar3 = FUN_00026150(param_1,0,param_2);
    return iVar3;
  }
  iVar3 = strncmp(param_1,"//",2);
  if ((iVar3 == 0) && (param_1[2] != '\0' && param_1[2] != '/')) {
    pcVar6 = param_1 + 2;
    do {
      param_1 = pcVar6;
      cVar11 = param_1[1];
      pcVar6 = param_1 + 1;
    } while (cVar11 != '\0' && cVar11 != '/');
    if (cVar11 == '\0') {
LAB_0002a39c:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0,0x2a3a4);
      (*pcVar1)();
    }
    cVar11 = param_1[2];
    param_1 = param_1 + 2;
    if (cVar11 != '/' && cVar11 != '\0') {
      do {
        param_1 = param_1 + 1;
        cVar11 = *param_1;
      } while (cVar11 != '\0' && cVar11 != '/');
    }
    if (cVar11 == '\0') goto LAB_0002a39c;
    param_1 = param_1 + 1;
  }
  cVar11 = *param_1;
  while (cVar11 == '/') {
    param_1 = param_1 + 1;
    cVar11 = *param_1;
  }
  while ((cVar11 == '.' && (param_1[1] == '/'))) {
    param_1 = param_1 + 2;
    cVar11 = *param_1;
  }
  if (DAT_00049afc == 0) {
    param_1 = (char *)FUN_00022808(param_1,0x2f);
  }
  sVar5 = strlen(param_1);
  pcVar6 = malloc(sVar5 + 1);
  if ((pcVar6 != (char *)0x0) && (memcpy(pcVar6,param_1,sVar5 + 1), DAT_0004bc60 != 0)) {
    FUN_00022824(pcVar6);
  }
  if (DAT_0004bb0c == 0) {
    iVar3 = -1;
  }
  else {
    iVar3 = 1;
    iVar12 = DAT_0004bb0c;
    do {
      iVar4 = FUN_000286b8(pcVar6,*(undefined4 *)(iVar12 + 0x40),param_2);
      iVar2 = DAT_0004bc5c;
      if (iVar4 != 0) {
        if (DAT_0004baf8 == 0) {
          *(undefined4 *)(iVar12 + 0x58) = 1;
          if (iVar2 != 0) {
            puVar10 = &DAT_00037834;
            goto LAB_0002a19c;
          }
        }
        else {
          iVar3 = FUN_00022d2c(*(undefined4 *)(iVar12 + 0x44),param_2);
          bVar13 = DAT_0004bc5c != 0;
          *(int *)(iVar12 + 0x58) = iVar3;
          if (bVar13) {
            puVar10 = &DAT_00037838;
            if (iVar3 != 0) {
              puVar10 = &DAT_00037834;
            }
LAB_0002a19c:
            fprintf(DAT_00066dc8,"zip diagnostic: %scluding %s\n",puVar10,
                    *(undefined4 *)(iVar12 + 0x30));
          }
        }
        iVar3 = 0;
      }
      iVar12 = *(int *)(iVar12 + 0x68);
    } while (iVar12 != 0);
    iVar3 = -iVar3;
  }
LAB_0002a3ac:
  free(pcVar6);
  return iVar3;
}



/* ===== FUN_0002a4d8 @ 0002a4d8 size=344 ===== */

void * FUN_0002a4d8(char *param_1,undefined4 param_2,int *param_3)

{
  code *pcVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  size_t sVar5;
  void *__dest;
  char cVar6;
  
  iVar4 = strncmp(param_1,"//",2);
  iVar2 = DAT_0004bc60;
  if ((iVar4 != 0) || (param_1[2] == '\0' || param_1[2] == '/')) {
LAB_0002a51c:
    cVar6 = *param_1;
    while (cVar6 == '/') {
      param_1 = param_1 + 1;
      cVar6 = *param_1;
    }
    while ((cVar6 == '.' && (param_1[1] == '/'))) {
      param_1 = param_1 + 2;
      cVar6 = *param_1;
    }
    if (DAT_00049afc == 0) {
      param_1 = (char *)FUN_00022808(param_1,0x2f);
    }
    sVar5 = strlen(param_1);
    __dest = malloc(sVar5 + 1);
    if (__dest != (void *)0x0) {
      memcpy(__dest,param_1,sVar5 + 1);
      if (DAT_0004bc60 != 0) {
        FUN_00022824(__dest);
      }
      if (param_3 != (int *)0x0) {
        *param_3 = iVar2;
      }
    }
    return __dest;
  }
  pcVar3 = param_1 + 2;
  do {
    param_1 = pcVar3;
    cVar6 = param_1[1];
    pcVar3 = param_1 + 1;
  } while (cVar6 != '\0' && cVar6 != '/');
  if (cVar6 != '\0') {
    cVar6 = param_1[2];
    param_1 = param_1 + 2;
    if (cVar6 != '/' && cVar6 != '\0') {
      do {
        param_1 = param_1 + 1;
        cVar6 = *param_1;
      } while (cVar6 != '\0' && cVar6 != '/');
    }
    if (cVar6 != '\0') {
      param_1 = param_1 + 1;
      goto LAB_0002a51c;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0,0x2a62c);
  (*pcVar1)();
}



/* ===== FUN_0002a630 @ 0002a630 size=52 ===== */

void * FUN_0002a630(char *param_1)

{
  size_t sVar1;
  void *__dest;
  
  sVar1 = strlen(param_1);
  __dest = malloc(sVar1 + 1);
  if (__dest != (void *)0x0) {
    memcpy(__dest,param_1,sVar1 + 1);
  }
  return __dest;
}



/* ===== FUN_0002a664 @ 0002a664 size=48 ===== */

void FUN_0002a664(char *param_1,undefined4 param_2)

{
  __time_t _Var1;
  utimbuf local_10;
  
  _Var1 = FUN_00023204(param_2);
  local_10.modtime = _Var1;
  local_10.actime = _Var1;
  utime(param_1,&local_10);
  return;
}



/* ===== FUN_0002a694 @ 0002a694 size=484 ===== */

undefined4 FUN_0002a694(char *param_1,uint *param_2,__off_t *param_3,__time_t *param_4)

{
  size_t sVar1;
  char *__dest;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  bool bVar5;
  stat sStack_78;
  
  if (DAT_0004a218 == param_1) {
    if (param_2 != (uint *)0x0) {
      *param_2 = 0;
    }
    if (param_3 != (__off_t *)0x0) {
      *param_3 = -2;
    }
    if (param_4 == (__time_t *)0x0) {
      return 0;
    }
    param_4[2] = 0;
    param_4[0] = 0;
    param_4[1] = 0;
    return 0;
  }
  sVar1 = strlen(param_1);
  __dest = malloc(sVar1 + 1);
  if (__dest == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_000187c0(4,"filetime");
  }
  strcpy(__dest,param_1);
  if (__dest[sVar1 - 1] == '/') {
    __dest[sVar1 - 1] = '\0';
  }
  iVar2 = strcmp(param_1,"-");
  if (iVar2 == 0) {
    iVar2 = fileno(stdin);
    iVar2 = fstat(iVar2,&sStack_78);
    if (iVar2 != 0) {
      free(__dest);
      error("fstat(stdin)");
    }
  }
  else {
    if (DAT_0004bbd0 == 0) {
      iVar2 = stat(__dest,&sStack_78);
      bVar5 = iVar2 != 0;
    }
    else {
      iVar2 = lstat(__dest,&sStack_78);
      bVar5 = false;
      if (iVar2 != 0) {
        bVar5 = true;
      }
    }
    if (bVar5) {
      free(__dest);
      return 0;
    }
  }
  free(__dest);
  if (param_2 == (uint *)0x0) {
LAB_0002a770:
    if (param_3 == (__off_t *)0x0) goto LAB_0002a790;
    if ((sStack_78.st_mode & 0xf000) != 0x8000) goto LAB_0002a788;
  }
  else {
    uVar4 = ((sStack_78.st_mode ^ 0x80) & 0xff) >> 7 | sStack_78.st_mode << 0x10;
    if ((sStack_78.st_mode & 0xf000) != 0x4000) {
      *param_2 = uVar4;
      goto LAB_0002a770;
    }
    *param_2 = uVar4 | 0x10;
    if (param_3 == (__off_t *)0x0) goto LAB_0002a790;
LAB_0002a788:
    sStack_78.st_size = -1;
  }
  *param_3 = sStack_78.st_size;
LAB_0002a790:
  if (param_4 != (__time_t *)0x0) {
    param_4[2] = sStack_78.st_mtim.tv_sec;
    *param_4 = sStack_78.st_atim.tv_sec;
    param_4[1] = sStack_78.st_mtim.tv_sec;
  }
  uVar3 = FUN_00023160(&sStack_78.st_mtim);
  return uVar3;
}



/* ===== FUN_0002a87c @ 0002a87c size=544 ===== */

undefined4 FUN_0002a87c(int param_1,int param_2)

{
  undefined1 uVar1;
  ushort uVar2;
  void *__dest;
  void *__dest_00;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint __n;
  void *__src;
  undefined4 uVar6;
  
  __n = (uint)*(ushort *)(param_1 + 0x1a);
  __dest = malloc(__n + 0xf);
  if ((__dest != (void *)0x0) && (__dest_00 = malloc(__n + 0xf), __dest_00 != (void *)0x0)) {
    __src = *(void **)(param_1 + 0x34);
    if (__n == 0) {
      uVar2 = *(ushort *)(param_1 + 0x1c);
    }
    else {
      memcpy(__dest,__src,__n);
      uVar2 = *(ushort *)(param_1 + 0x1c);
    }
    if (uVar2 != 0) {
      memcpy(__dest_00,*(void **)(param_1 + 0x38),(uint)uVar2);
    }
    free(__src);
    *(void **)(param_1 + 0x34) = __dest;
    free(*(void **)(param_1 + 0x38));
    *(void **)(param_1 + 0x38) = __dest_00;
    *(undefined1 *)(*(int *)(param_1 + 0x34) + (uint)*(ushort *)(param_1 + 0x1a)) = 0x75;
    *(undefined1 *)(*(int *)(param_1 + 0x34) + (uint)*(ushort *)(param_1 + 0x1a) + 1) = 0x78;
    *(undefined1 *)(*(int *)(param_1 + 0x34) + (uint)*(ushort *)(param_1 + 0x1a) + 2) = 0xb;
    *(undefined1 *)(*(int *)(param_1 + 0x34) + (uint)*(ushort *)(param_1 + 0x1a) + 3) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x34) + (uint)*(ushort *)(param_1 + 0x1a) + 4) = 1;
    *(undefined1 *)(*(int *)(param_1 + 0x34) + (uint)*(ushort *)(param_1 + 0x1a) + 5) = 4;
    uVar4 = *(undefined4 *)(param_2 + 0x18);
    *(char *)(*(int *)(param_1 + 0x34) + (uint)*(ushort *)(param_1 + 0x1a) + 6) = (char)uVar4;
    *(char *)(*(int *)(param_1 + 0x34) + (uint)*(ushort *)(param_1 + 0x1a) + 7) =
         (char)((uint)uVar4 >> 8);
    *(char *)(*(int *)(param_1 + 0x34) + (uint)*(ushort *)(param_1 + 0x1a) + 8) =
         (char)((uint)uVar4 >> 0x10);
    *(char *)(*(int *)(param_1 + 0x34) + (uint)*(ushort *)(param_1 + 0x1a) + 9) =
         (char)((uint)uVar4 >> 0x18);
    *(undefined1 *)(*(int *)(param_1 + 0x34) + (uint)*(ushort *)(param_1 + 0x1a) + 10) = 4;
    uVar4 = *(undefined4 *)(param_2 + 0x1c);
    *(char *)(*(int *)(param_1 + 0x34) + (uint)*(ushort *)(param_1 + 0x1a) + 0xb) = (char)uVar4;
    *(char *)(*(int *)(param_1 + 0x34) + (uint)*(ushort *)(param_1 + 0x1a) + 0xc) =
         (char)((uint)uVar4 >> 8);
    *(char *)(*(int *)(param_1 + 0x34) + (uint)*(ushort *)(param_1 + 0x1a) + 0xd) =
         (char)((uint)uVar4 >> 0x10);
    *(char *)(*(int *)(param_1 + 0x34) + (uint)*(ushort *)(param_1 + 0x1a) + 0xe) =
         (char)((uint)uVar4 >> 0x18);
    puVar5 = (undefined4 *)(*(int *)(param_1 + 0x34) + (uint)*(ushort *)(param_1 + 0x1a));
    iVar3 = *(int *)(param_1 + 0x38) + (uint)*(ushort *)(param_1 + 0x1c);
    uVar4 = puVar5[1];
    uVar6 = puVar5[2];
    *(undefined4 *)(*(int *)(param_1 + 0x38) + (uint)*(ushort *)(param_1 + 0x1c)) = *puVar5;
    *(undefined4 *)(iVar3 + 4) = uVar4;
    *(undefined4 *)(iVar3 + 8) = uVar6;
    uVar1 = *(undefined1 *)((int)puVar5 + 0xe);
    *(undefined2 *)(iVar3 + 0xc) = *(undefined2 *)(puVar5 + 3);
    *(undefined1 *)(iVar3 + 0xe) = uVar1;
    *(short *)(param_1 + 0x1a) = *(short *)(param_1 + 0x1a) + 0xf;
    *(short *)(param_1 + 0x1c) = *(short *)(param_1 + 0x1c) + 0xf;
    return 0;
  }
  return 4;
}



/* ===== FUN_0002aa9c @ 0002aa9c size=400 ===== */

undefined4 FUN_0002aa9c(int param_1)

{
  size_t sVar1;
  char *__dest;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *__s;
  stat sStack_70;
  
  __s = *(char **)(param_1 + 0x30);
  sVar1 = strlen(__s);
  __dest = malloc(sVar1 + 1);
  if (__dest == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_000187c0(4,"set_extra_field");
  }
  strcpy(__dest,__s);
  if (__dest[sVar1 - 1] == '/') {
    __dest[sVar1 - 1] = '\0';
  }
  if (DAT_0004bbd0 == 0) {
    iVar2 = stat(__dest,&sStack_70);
  }
  else {
    iVar2 = lstat(__dest,&sStack_70);
  }
  if (iVar2 != 0) {
    free(__dest);
    return 0x12;
  }
  free(__dest);
  puVar3 = malloc(0xd);
  *(undefined4 **)(param_1 + 0x34) = puVar3;
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = malloc(9);
    *(undefined4 **)(param_1 + 0x38) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      *(undefined1 *)(puVar3 + 1) = 3;
      *(char *)((int)puVar3 + 5) = (char)sStack_70.st_mtim.tv_sec;
      *puVar3 = &DAT_00095455;
      *(char *)((int)puVar3 + 9) = (char)sStack_70.st_atim.tv_sec;
      *(char *)((int)puVar3 + 6) = (char)((uint)sStack_70.st_mtim.tv_sec >> 8);
      *(char *)((int)puVar3 + 7) = (char)((uint)sStack_70.st_mtim.tv_sec >> 0x10);
      *(char *)(puVar3 + 2) = (char)((uint)sStack_70.st_mtim.tv_sec >> 0x18);
      *(char *)((int)puVar3 + 10) = (char)((uint)sStack_70.st_atim.tv_sec >> 8);
      *(char *)((int)puVar3 + 0xb) = (char)((uint)sStack_70.st_atim.tv_sec >> 0x10);
      uVar5 = *puVar3;
      uVar6 = puVar3[1];
      uVar7 = puVar3[2];
      *(char *)(puVar3 + 3) = (char)((uint)sStack_70.st_atim.tv_sec >> 0x18);
      *(undefined2 *)(param_1 + 0x1a) = 0xd;
      *(undefined2 *)(param_1 + 0x1c) = 9;
      *puVar4 = uVar5;
      puVar4[1] = uVar6;
      *(char *)(puVar4 + 2) = (char)uVar7;
      *(undefined1 *)((int)puVar4 + 2) = 5;
      FUN_0002a87c(param_1,&sStack_70);
      return 0;
    }
  }
  return 4;
}



/* ===== <EXTERNAL>::rmdir @ 0002ac34 size=4 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rmdir(char *__path)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rmdir_00049068)(__path);
  return iVar1;
}



/* ===== FUN_0002ac38 @ 0002ac38 size=36 ===== */

void FUN_0002ac38(void)

{
  printf("Compiled with %s for Unix (%s)%s.\n\n",&DAT_000381ac,"Linux ELF"," on Sep 23 2023");
  return;
}



/* ===== FUN_0002ac5c @ 0002ac5c size=12 ===== */

undefined * FUN_0002ac5c(void)

{
  return &DAT_000381e0;
}



/* ===== FUN_0002ac68 @ 0002ac68 size=452 ===== */

uint FUN_0002ac68(uint param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  if (param_2 == (byte *)0x0) {
    return 0;
  }
  param_1 = ~param_1;
  if (7 < param_3) {
    uVar1 = param_3 - 8 >> 3;
    pbVar3 = param_2 + 8;
    do {
      pbVar4 = pbVar3 + 8;
      uVar2 = *(uint *)(&DAT_000381e0 + ((pbVar3[-8] ^ param_1) & 0xff) * 4) ^ param_1 >> 8;
      uVar2 = *(uint *)(&DAT_000381e0 + ((pbVar3[-7] ^ uVar2) & 0xff) * 4) ^ uVar2 >> 8;
      uVar2 = *(uint *)(&DAT_000381e0 + ((pbVar3[-6] ^ uVar2) & 0xff) * 4) ^ uVar2 >> 8;
      uVar2 = *(uint *)(&DAT_000381e0 + ((pbVar3[-5] ^ uVar2) & 0xff) * 4) ^ uVar2 >> 8;
      uVar2 = *(uint *)(&DAT_000381e0 + ((pbVar3[-4] ^ uVar2) & 0xff) * 4) ^ uVar2 >> 8;
      uVar2 = *(uint *)(&DAT_000381e0 + ((pbVar3[-3] ^ uVar2) & 0xff) * 4) ^ uVar2 >> 8;
      uVar2 = *(uint *)(&DAT_000381e0 + ((pbVar3[-2] ^ uVar2) & 0xff) * 4) ^ uVar2 >> 8;
      param_1 = *(uint *)(&DAT_000381e0 + ((pbVar3[-1] ^ uVar2) & 0xff) * 4) ^ uVar2 >> 8;
      pbVar3 = pbVar4;
    } while (param_2 + uVar1 * 8 + 0x10 != pbVar4);
    param_3 = param_3 & 7;
    param_2 = param_2 + (uVar1 + 1) * 8;
  }
  if ((((param_3 != 0) &&
       (param_1 = *(uint *)(&DAT_000381e0 + ((*param_2 ^ param_1) & 0xff) * 4) ^ param_1 >> 8,
       param_3 != 1)) &&
      (param_1 = *(uint *)(&DAT_000381e0 + ((param_2[1] ^ param_1) & 0xff) * 4) ^ param_1 >> 8,
      param_3 != 2)) &&
     (((param_1 = *(uint *)(&DAT_000381e0 + ((param_2[2] ^ param_1) & 0xff) * 4) ^ param_1 >> 8,
       param_3 != 3 &&
       (param_1 = *(uint *)(&DAT_000381e0 + ((param_2[3] ^ param_1) & 0xff) * 4) ^ param_1 >> 8,
       param_3 != 4)) &&
      ((param_1 = *(uint *)(&DAT_000381e0 + ((param_2[4] ^ param_1) & 0xff) * 4) ^ param_1 >> 8,
       param_3 != 5 &&
       (param_1 = *(uint *)(&DAT_000381e0 + ((param_2[5] ^ param_1) & 0xff) * 4) ^ param_1 >> 8,
       param_3 != 6)))))) {
    param_1 = *(uint *)(&DAT_000381e0 + ((param_2[6] ^ param_1) & 0xff) * 4) ^ param_1 >> 8;
  }
  return ~param_1;
}



/* ===== FUN_0002ae2c @ 0002ae2c size=836 ===== */

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_0002ae2c(void)

{
  undefined1 auVar1 [16];
  int iVar2;
  void *__src;
  uint uVar3;
  char *pcVar4;
  undefined1 (*pauVar5) [16];
  int iVar6;
  undefined1 auVar7 [16];
  
  __src = DAT_0002b170;
  do {
    uVar3 = DAT_000981e0;
    iVar6 = (DAT_000681c8 - DAT_000981e0) - DAT_0004bc7c;
    if (iVar6 == -1) {
      iVar6 = -2;
    }
    else if ((0xfef9 < DAT_000981e0) && (DAT_0004bc80 != 0)) {
      memcpy(&DAT_000881dc,__src,0x8000);
      auVar1._8_8_ = SUB148(SUB1614((undefined1  [16])0x0,2),6);
      auVar1._0_8_ = 0x8000800080008000;
      auVar1 = *(undefined1 (*) [16])(auVar1 << 0x40 | auVar1);
      pauVar5 = (undefined1 (*) [16])&DAT_000681d0;
      DAT_000981e0 = uVar3 - 0x8000;
      DAT_000981e4 = DAT_000981e4 + -0x8000;
      DAT_000881d4 = DAT_000881d4 + -0x8000;
      do {
        auVar7 = VectorMax(*pauVar5,auVar1,2,1);
        auVar7 = VectorAdd(auVar7,auVar1,2);
        *(longlong *)*pauVar5 = auVar7._0_8_;
        *(longlong *)((int)*pauVar5 + 8) = auVar7._8_8_;
        pauVar5 = pauVar5 + 1;
      } while (pauVar5 != (undefined1 (*) [16])&DAT_000781d0);
      auVar7._8_8_ = SUB148(SUB1614((undefined1  [16])0x0,2),6);
      auVar7._0_8_ = 0x8000800080008000;
      auVar1 = *(undefined1 (*) [16])(auVar7 << 0x40 | auVar7);
      pauVar5 = (undefined1 (*) [16])&DAT_000781d0;
      do {
        auVar7 = VectorMax(*pauVar5,auVar1,2,1);
        auVar7 = VectorAdd(auVar7,auVar1,2);
        *(longlong *)*pauVar5 = auVar7._0_8_;
        *(longlong *)((int)*pauVar5 + 8) = auVar7._8_8_;
        pauVar5 = pauVar5 + 1;
      } while (pauVar5 != (undefined1 (*) [16])&DAT_000881d0);
      iVar6 = iVar6 + 0x8000;
      if (DAT_0004bc24 < 1) {
LAB_0002b000:
        iVar2 = DAT_0004bc24;
        if ((DAT_0004bc5c != 0) || (DAT_00049ae8 != 0)) {
joined_r0x0002b018:
          if (iVar2 != 0) goto LAB_0002b01c;
        }
      }
      else {
        if (DAT_0004bc14 == 0) {
          if ((DAT_00049ae8 != 0) && (DAT_0004bc20 == -1)) {
            if (DAT_00066dc8->_chain == (_IO_FILE *)0x0) {
              fputc(0x20,DAT_00066dc8);
            }
            else {
              pcVar4 = DAT_00066dc8->_IO_write_base;
              if (pcVar4 < DAT_00066dc8->_IO_buf_base) {
                DAT_00066dc8->_IO_write_base = pcVar4 + 1;
                *pcVar4 = ' ';
              }
              else {
                __fputc_unlocked(0x20);
              }
            }
            fflush(DAT_00066dc8);
            DAT_0004bc20 = DAT_0004bc20 + 1;
          }
          if ((DAT_0004bc20 + 2) * 0x8000 < DAT_0004bc24) {
            DAT_0004bc20 = DAT_0004bc20 + 1;
          }
          else {
            DAT_0004bc20 = 0;
          }
          goto LAB_0002b000;
        }
        iVar2 = DAT_00049ae8;
        if (DAT_0004bc5c == 0) goto joined_r0x0002b018;
LAB_0002b01c:
        if (DAT_0004bc20 == 0) {
          if (DAT_00066dc8->_chain == (_IO_FILE *)0x0) {
            fputc(0x2e,DAT_00066dc8);
          }
          else {
            pcVar4 = DAT_00066dc8->_IO_write_base;
            if (pcVar4 < DAT_00066dc8->_IO_buf_base) {
              DAT_00066dc8->_IO_write_base = pcVar4 + 1;
              *pcVar4 = '.';
            }
            else {
              __fputc_unlocked(0x2e);
            }
          }
          fflush(DAT_00066dc8);
          DAT_0004bb18 = 1;
        }
      }
    }
    if (DAT_0004bc84 != 0) {
      return;
    }
    iVar6 = (*DAT_00049a98)(&DAT_000881dc + DAT_000981e0 + DAT_0004bc7c,iVar6);
    if (0xfffffffd < iVar6 - 1U) {
      DAT_0004bc84 = 1;
      return;
    }
    DAT_0004bc7c = iVar6 + DAT_0004bc7c;
    if (0x105 < DAT_0004bc7c) {
      return;
    }
    if (DAT_0004bc84 != 0) {
      return;
    }
  } while( true );
}



/* ===== FUN_0002b174 @ 0002b174 size=372 ===== */

void FUN_0002b174(int param_1,ushort *param_2)

{
  int iVar1;
  void *__s;
  bool bVar2;
  
  if (8 < param_1 - 1U) {
    error("bad pack level");
  }
  bVar2 = DAT_000681c8 == 0;
  if (bVar2) {
    DAT_000681c8 = 0x10000;
  }
  DAT_0004bc80 = (uint)bVar2;
  __s = (void *)(DAT_0002b2e8 + -0xf000);
  *(undefined2 *)(DAT_0002b2e8 + 0xffe) = 0;
  memset(__s,0,0xfffe);
  iVar1 = param_1 * 8;
  DAT_000881d8 = (uint)*(ushort *)(&DAT_000385e0 + iVar1);
  DAT_0004bc88 = (uint)*(ushort *)(&DAT_000385e2 + iVar1);
  DAT_000681cc = (uint)*(ushort *)(&DAT_000385e4 + iVar1);
  DAT_000981dc = (uint)*(ushort *)(&DAT_000385e6 + iVar1);
  if (param_1 < 3) {
    *param_2 = *param_2 | 4;
  }
  else if (7 < param_1) {
    *param_2 = *param_2 | 2;
  }
  DAT_000981e0 = 0;
  DAT_000881d4 = 0;
  DAT_0004bc7c = (*DAT_00049a98)(&DAT_000881dc,0x10000);
  if (DAT_0004bc7c - 1 < 0xfffffffe) {
    DAT_0004bc84 = 0;
    if (DAT_0004bc7c < 0x106) {
      FUN_0002ae2c();
    }
    DAT_0004bc8c = (uint)DAT_000881dd ^ (uint)DAT_000881dc << 5;
    return;
  }
  DAT_0004bc7c = 0;
  DAT_0004bc84 = 1;
  return;
}



/* ===== FUN_0002b2ec @ 0002b2ec size=4 ===== */

void FUN_0002b2ec(void)

{
  return;
}



/* ===== FUN_0002b2f0 @ 0002b2f0 size=664 ===== */

uint FUN_0002b2f0(uint param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char cVar7;
  char *pcVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  uint local_38;
  
  pcVar8 = &DAT_000881dc + DAT_000981e0;
  uVar11 = 0x7efa;
  if (0x7ef9 < DAT_000981e0) {
    uVar11 = DAT_000981e0;
  }
  cVar9 = pcVar8[DAT_000881d0 - 1];
  cVar7 = pcVar8[DAT_000881d0];
  uVar4 = DAT_000981dc;
  if (DAT_000881d8 <= DAT_000881d0) {
    uVar4 = DAT_000981dc >> 2;
  }
  local_38 = DAT_000981e4;
  bVar2 = false;
  uVar10 = DAT_000881d0;
  do {
    pcVar5 = &DAT_000881dc + param_1;
    if ((((pcVar5[uVar10] == cVar7) && (pcVar5[uVar10 - 1] == cVar9)) && (*pcVar5 == *pcVar8)) &&
       ((&DAT_000881dd)[param_1] == (&DAT_000881dd)[DAT_000981e0])) {
      pcVar6 = &DAT_000881de + param_1;
      pcVar5 = &DAT_000881de + DAT_000981e0;
      do {
        if (pcVar5[1] != pcVar6[1]) {
          pcVar5 = pcVar5 + 1;
          break;
        }
        if (pcVar5[2] != pcVar6[2]) {
          pcVar5 = pcVar5 + 2;
          break;
        }
        if (pcVar5[3] != pcVar6[3]) {
          pcVar5 = pcVar5 + 3;
          break;
        }
        if (pcVar5[4] != pcVar6[4]) {
          pcVar5 = pcVar5 + 4;
          break;
        }
        if (pcVar5[5] != pcVar6[5]) {
          pcVar5 = pcVar5 + 5;
          break;
        }
        if (pcVar5[6] != pcVar6[6]) {
          pcVar5 = pcVar5 + 6;
          break;
        }
        if (pcVar5[7] != pcVar6[7]) {
          pcVar5 = pcVar5 + 7;
          break;
        }
        pcVar5 = pcVar5 + 8;
        pcVar6 = pcVar6 + 8;
      } while (pcVar5 < (char *)(DAT_000981e0 + 0x882de) && *pcVar5 == *pcVar6);
      iVar1 = -((int)(DAT_000981e0 + 0x882de) - (int)pcVar5);
      uVar3 = iVar1 + 0x102;
      if ((int)uVar10 < (int)uVar3) {
        if (DAT_000681cc <= (int)uVar3) {
          DAT_000981e4 = param_1;
          return uVar3;
        }
        cVar7 = pcVar8[uVar3];
        cVar9 = pcVar8[iVar1 + 0x101];
        bVar2 = true;
        uVar10 = uVar3;
        local_38 = param_1;
      }
    }
    param_1 = (uint)*(ushort *)((int)&DAT_000781d0 + (param_1 & 0x7fff) * 2);
    if ((param_1 <= uVar11 - 0x7efa) || (uVar4 = uVar4 - 1, uVar4 == 0)) {
      if (bVar2) {
        DAT_000981e4 = local_38;
      }
      return uVar10;
    }
  } while( true );
}



/* ===== FUN_0002b588 @ 0002b588 size=1516 ===== */

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_0002b588(void)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  
  if (DAT_00049af4 < 4) {
    DAT_000881d0 = 2;
    if (DAT_0004bc7c != 0) {
      uVar6 = 0;
      uVar9 = DAT_0004bc7c;
      do {
        uVar10 = DAT_000981e0;
        if (2 < uVar9) {
          uVar8 = DAT_000981e0 & 0x7fff;
          DAT_0004bc8c = ((uint)(byte)(&DAT_000881de)[DAT_000981e0] ^ DAT_0004bc8c << 5) & 0x7fff;
          uVar1 = *(ushort *)((int)&DAT_000681d0 + DAT_0004bc8c * 2);
          uVar6 = (uint)uVar1;
          *(short *)((int)&DAT_000681d0 + DAT_0004bc8c * 2) = (short)DAT_000981e0;
          *(ushort *)((int)&DAT_000781d0 + uVar8 * 2) = uVar1;
        }
        if ((uVar6 == 0) || (0x7efa < uVar10 - uVar6)) {
LAB_0002bae0:
          puVar4 = (undefined1 *)FUN_0002dcc8(0,(&DAT_000881dc)[uVar10]);
          uVar9 = DAT_0004bc7c - 1;
          DAT_000981e0 = DAT_000981e0 + 1;
          DAT_0004bc7c = uVar9;
        }
        else {
          if (uVar9 < DAT_000681cc) {
            DAT_000681cc = uVar9;
          }
          uVar8 = FUN_0002b2f0(uVar6);
          if (uVar9 <= uVar8) {
            uVar8 = uVar9;
          }
          uVar10 = DAT_000981e0;
          if (uVar8 < 3) goto LAB_0002bae0;
          puVar4 = (undefined1 *)FUN_0002dcc8(DAT_000981e0 - DAT_000981e4,uVar8 - 3);
          uVar9 = DAT_0004bc7c - uVar8;
          DAT_0004bc7c = uVar9;
          if (uVar9 < 3 || DAT_0004bc88 < uVar8) {
            DAT_000981e0 = uVar8 + DAT_000981e0;
            DAT_0004bc8c = (uint)(byte)(&DAT_000881dd)[DAT_000981e0] ^
                           (uint)(byte)(&DAT_000881dc)[DAT_000981e0] << 5;
          }
          else {
            uVar10 = DAT_000981e0;
            pbVar11 = &DAT_000881df + DAT_000981e0;
            do {
              uVar10 = uVar10 + 1;
              DAT_0004bc8c = ((uint)*pbVar11 ^ DAT_0004bc8c << 5) & 0x7fff;
              uVar1 = *(ushort *)((int)&DAT_000681d0 + DAT_0004bc8c * 2);
              uVar6 = (uint)uVar1;
              *(short *)((int)&DAT_000681d0 + DAT_0004bc8c * 2) = (short)uVar10;
              *(ushort *)((int)&DAT_000781d0 + (uVar10 & 0x7fff) * 2) = uVar1;
              pbVar11 = pbVar11 + 1;
            } while (uVar10 != (DAT_000981e0 - 1) + uVar8);
            DAT_000981e0 = uVar8 + DAT_000981e0;
          }
        }
        if (puVar4 != (undefined1 *)0x0) {
          if (-1 < (int)DAT_000881d4) {
            puVar4 = &DAT_000881dc + DAT_000881d4;
          }
          if (-1 >= (int)DAT_000881d4) {
            puVar4 = (undefined1 *)0x0;
          }
          FUN_0002d70c(puVar4,DAT_000981e0 - DAT_000881d4,0);
          DAT_000881d4 = DAT_000981e0;
          uVar9 = DAT_0004bc7c;
        }
      } while ((0x105 < uVar9) || (FUN_0002ae2c(), uVar9 = DAT_0004bc7c, DAT_0004bc7c != 0));
    }
  }
  else if (DAT_0004bc7c != 0) {
    uVar10 = 0;
    uVar6 = 2;
    bVar2 = false;
    uVar9 = DAT_0004bc7c;
    do {
      uVar8 = DAT_000981e0;
      if (2 < uVar9) {
        uVar3 = DAT_000981e0 & 0x7fff;
        DAT_0004bc8c = ((uint)(byte)(&DAT_000881de)[DAT_000981e0] ^ DAT_0004bc8c << 5) & 0x7fff;
        uVar1 = *(ushort *)((int)&DAT_000681d0 + DAT_0004bc8c * 2);
        uVar10 = (uint)uVar1;
        *(short *)((int)&DAT_000681d0 + DAT_0004bc8c * 2) = (short)DAT_000981e0;
        *(ushort *)((int)&DAT_000781d0 + uVar3 * 2) = uVar1;
      }
      uVar3 = DAT_000981e4;
      DAT_000881d0 = uVar6;
      if (((uVar10 == 0) || (DAT_0004bc88 <= uVar6)) || (0x7efa < uVar8 - uVar10)) {
        uVar6 = 2;
      }
      else {
        if (uVar9 < DAT_000681cc) {
          DAT_000681cc = uVar9;
        }
        uVar6 = FUN_0002b2f0(uVar10);
        if (uVar9 <= uVar6) {
          uVar6 = uVar9;
        }
        uVar8 = DAT_000981e0;
        if ((uVar6 == 3) && (0x1000 < DAT_000981e0 - DAT_000981e4)) {
          uVar6 = 2;
        }
      }
      if (DAT_000881d0 < 3 || DAT_000881d0 < uVar6) {
        if (bVar2) {
          iVar5 = FUN_0002dcc8(0,*(undefined1 *)((int)&DAT_000881d8 + uVar8 + 3));
          if (iVar5 != 0) {
            if ((int)DAT_000881d4 < 0) {
              puVar4 = (undefined1 *)0x0;
            }
            else {
              puVar4 = &DAT_000881dc + DAT_000881d4;
            }
            FUN_0002d70c(puVar4,DAT_000981e0 - DAT_000881d4,0);
            DAT_000881d4 = DAT_000981e0;
          }
          DAT_000981e0 = DAT_000981e0 + 1;
          DAT_0004bc7c = DAT_0004bc7c - 1;
          uVar3 = DAT_0004bc7c;
        }
        else {
          bVar2 = true;
          DAT_000981e0 = uVar8 + 1;
          DAT_0004bc7c = uVar9 - 1;
          uVar3 = DAT_0004bc7c;
        }
      }
      else {
        iVar5 = FUN_0002dcc8(~uVar3 + uVar8,DAT_000881d0 - 3);
        bVar2 = false;
        uVar3 = (DAT_0004bc7c + 1) - DAT_000881d0;
        iVar7 = DAT_000881d0 + DAT_000981e0;
        uVar6 = DAT_0004bc8c;
        DAT_0004bc7c = uVar3;
        do {
          DAT_000981e0 = DAT_000981e0 + 1;
          if (DAT_000981e0 <= (uVar9 - 3) + uVar8) {
            uVar6 = ((uint)*(byte *)(DAT_000981e0 + DAT_0002bb74) ^ uVar6 << 5) & 0x7fff;
            uVar1 = *(ushort *)((int)&DAT_000681d0 + uVar6 * 2);
            uVar10 = (uint)uVar1;
            *(short *)((int)&DAT_000681d0 + uVar6 * 2) = (short)DAT_000981e0;
            *(ushort *)((int)&DAT_000781d0 + (DAT_000981e0 & 0x7fff) * 2) = uVar1;
            bVar2 = true;
          }
        } while (DAT_000981e0 != iVar7 - 2U);
        if (bVar2) {
          DAT_0004bc8c = uVar6;
        }
        DAT_000881d0 = 0;
        DAT_000981e0 = iVar7 - 1;
        if (iVar5 == 0) {
          uVar6 = 2;
          bVar2 = false;
        }
        else {
          uVar6 = 2;
          bVar2 = false;
          if ((int)DAT_000881d4 < 0) {
            puVar4 = (undefined1 *)0x0;
          }
          else {
            puVar4 = &DAT_000881dc + DAT_000881d4;
          }
          FUN_0002d70c(puVar4,DAT_000981e0 - DAT_000881d4,0);
          DAT_000881d4 = DAT_000981e0;
          uVar3 = DAT_0004bc7c;
        }
      }
      uVar9 = uVar3;
    } while ((0x105 < uVar3) || (FUN_0002ae2c(), uVar9 = DAT_0004bc7c, DAT_0004bc7c != 0));
    if (bVar2) {
      FUN_0002dcc8(0,*(undefined1 *)((int)&DAT_000881d8 + DAT_000981e0 + 3));
    }
  }
  if ((int)DAT_000881d4 < 0) {
    puVar4 = (undefined1 *)0x0;
  }
  else {
    puVar4 = &DAT_000881dc + DAT_000881d4;
  }
  FUN_0002d70c(puVar4,DAT_000981e0 - DAT_000881d4,1);
  return;
}



/* ===== FUN_0002bb78 @ 0002bb78 size=300 ===== */

void FUN_0002bb78(int param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  uVar1 = *(ushort *)(param_1 + 2);
  iVar8 = (param_2 + 1) * 4;
  if (uVar1 == 0) {
    iVar6 = 3;
    iVar7 = 0x8a;
  }
  else {
    iVar6 = 4;
    iVar7 = 7;
  }
  *(undefined2 *)(param_1 + iVar8 + 2) = 0xffff;
  if (param_2 < 0) {
    return;
  }
  uVar2 = 0xffffffff;
  iVar8 = param_1 + iVar8 + -4;
  uVar3 = 0;
  uVar5 = (uint)uVar1;
  do {
    uVar3 = uVar3 + 1;
    uVar4 = (uint)*(ushort *)(param_1 + 6);
    if ((int)uVar3 < iVar7) {
      if (uVar4 != uVar5) {
        if (iVar6 <= (int)uVar3) goto LAB_0002bbcc;
        (&DAT_0004bc90)[uVar5 * 2] = (&DAT_0004bc90)[uVar5 * 2] + (short)uVar3;
        if (uVar4 != 0) goto LAB_0002bc5c;
        goto LAB_0002bc70;
      }
    }
    else {
LAB_0002bbcc:
      if (uVar5 == 0) {
        if ((int)uVar3 < 0xb) {
          DAT_0004bcd4 = DAT_0004bcd4 + 1;
        }
        else {
          DAT_0004bcd8 = DAT_0004bcd8 + 1;
        }
      }
      else {
        if (uVar5 != uVar2) {
          (&DAT_0004bc90)[uVar5 * 2] = (&DAT_0004bc90)[uVar5 * 2] + 1;
        }
        DAT_0004bcd0 = DAT_0004bcd0 + 1;
      }
      if (uVar4 == 0) {
LAB_0002bc70:
        iVar6 = 3;
        iVar7 = 0x8a;
        uVar2 = uVar5;
        uVar3 = uVar4;
      }
      else if (uVar4 == uVar5) {
        iVar6 = 3;
        iVar7 = 6;
        uVar3 = 0;
        uVar2 = uVar4;
      }
      else {
LAB_0002bc5c:
        iVar6 = 4;
        iVar7 = 7;
        uVar2 = uVar5;
        uVar3 = 0;
      }
    }
    bVar9 = iVar8 == param_1;
    param_1 = param_1 + 4;
    uVar5 = uVar4;
    if (bVar9) {
      return;
    }
  } while( true );
}



/* ===== FUN_0002bca4 @ 0002bca4 size=224 ===== */

void FUN_0002bca4(void)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (DAT_0004bd2c < 9) {
    if (0 < DAT_0004bd2c) {
      if (DAT_0004bd38 <= DAT_0004bd30) {
        FUN_00021f68(DAT_0004bd34,&DAT_0004bd30);
      }
      puVar1 = (undefined1 *)(DAT_0004bd34 + DAT_0004bd30);
      DAT_0004bd30 = DAT_0004bd30 + 1;
      *puVar1 = (char)DAT_0004bd3c;
    }
  }
  else {
    if (DAT_0004bd38 - 1 <= DAT_0004bd30) {
      FUN_00021f68(DAT_0004bd34,&DAT_0004bd30);
    }
    uVar3 = DAT_0004bd3c;
    iVar2 = DAT_0004bd34;
    puVar1 = (undefined1 *)(DAT_0004bd34 + DAT_0004bd30);
    DAT_0004bd30 = DAT_0004bd30 + 1;
    *puVar1 = (char)DAT_0004bd3c;
    puVar1 = (undefined1 *)(iVar2 + DAT_0004bd30);
    DAT_0004bd30 = DAT_0004bd30 + 1;
    *puVar1 = (char)((uint)uVar3 >> 8);
  }
  if (DAT_0004bd40 != 0) {
    FUN_00021f68(DAT_0004bd34,DAT_0002bd84);
  }
  DAT_0004bd3c = 0;
  DAT_0004bd2c = 0;
  return;
}



/* ===== FUN_0002bd88 @ 0002bd88 size=416 ===== */

void FUN_0002bd88(void *param_1,size_t param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 uVar3;
  void *pvVar4;
  uint uVar5;
  
  FUN_0002bca4();
  if (param_3 != 0) {
    uVar5 = DAT_0004bd38 - 1;
    if (uVar5 <= DAT_0004bd30) {
      FUN_00021f68(DAT_0004bd34,&DAT_0004bd30);
      uVar5 = DAT_0004bd38 - 1;
    }
    pvVar4 = DAT_0004bd34;
    bVar2 = (byte)(param_2 >> 8);
    pbVar1 = (byte *)((int)DAT_0004bd34 + DAT_0004bd30);
    DAT_0004bd30 = DAT_0004bd30 + 1;
    *pbVar1 = (byte)param_2;
    pbVar1 = (byte *)((int)pvVar4 + DAT_0004bd30);
    DAT_0004bd30 = DAT_0004bd30 + 1;
    *pbVar1 = bVar2;
    if (uVar5 <= DAT_0004bd30) {
      FUN_00021f68(pvVar4,DAT_0002bf28);
      pvVar4 = DAT_0004bd34;
    }
    pbVar1 = (byte *)((int)pvVar4 + DAT_0004bd30);
    DAT_0004bd30 = DAT_0004bd30 + 1;
    *pbVar1 = ~(byte)param_2;
    pbVar1 = (byte *)((int)pvVar4 + DAT_0004bd30);
    DAT_0004bd30 = DAT_0004bd30 + 1;
    *pbVar1 = ~bVar2;
  }
  uVar3 = DAT_0002bf28;
  if (DAT_0004bd40 == 0) {
    if (DAT_0004bd38 < DAT_0004bd30 + param_2) {
      error("output buffer too small for in-memory compression");
      return;
    }
    memcpy((void *)((int)DAT_0004bd34 + DAT_0004bd30),param_1,param_2);
    DAT_0004bd30 = DAT_0004bd30 + param_2;
    return;
  }
  FUN_00021f68(DAT_0004bd34,DAT_0002bf28);
  if (DAT_0004bbb4 == 0) {
    DAT_0004bd30 = param_2;
    FUN_00021f68(param_1,uVar3);
    return;
  }
  if (param_2 == 0) {
    return;
  }
  do {
    pvVar4 = DAT_0004bd34;
    DAT_0004bd30 = DAT_0004bd38;
    if (param_2 < DAT_0004bd38) {
      DAT_0004bd30 = param_2;
    }
    memcpy(DAT_0004bd34,param_1,DAT_0004bd30);
    param_2 = param_2 - DAT_0004bd30;
    param_1 = (void *)((int)param_1 + DAT_0004bd30);
    FUN_00021f68(pvVar4,uVar3);
  } while (param_2 != 0);
  return;
}



/* ===== FUN_0002bf2c @ 0002bf2c size=228 ===== */

void FUN_0002bf2c(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ushort uVar13;
  
  iVar5 = DAT_0004c63c;
  iVar4 = DAT_0004bd4c;
  if (DAT_0004c63c < 2) {
    iVar11 = 1;
  }
  else {
    iVar10 = 2;
    uVar1 = *(ushort *)(param_1 + DAT_0004bd4c * 4);
    iVar11 = 1;
    do {
      iVar8 = (&DAT_0004bd48)[iVar10];
      uVar2 = *(ushort *)(param_1 + iVar8 * 4);
      iVar7 = iVar10;
      iVar9 = iVar8;
      uVar13 = uVar2;
      if (iVar10 < iVar5) {
        iVar6 = iVar10 + 1;
        iVar12 = (&DAT_0004bd48)[iVar6];
        uVar3 = *(ushort *)(param_1 + iVar12 * 4);
        iVar7 = iVar6;
        iVar9 = iVar12;
        uVar13 = uVar3;
        if (((uVar2 <= uVar3) && (iVar7 = iVar10, iVar9 = iVar8, uVar13 = uVar2, uVar3 == uVar2)) &&
           (iVar7 = iVar6, iVar9 = iVar12,
           (byte)(&DAT_0004c640)[iVar8] < (byte)(&DAT_0004c640)[iVar12])) {
          iVar7 = iVar10;
          iVar9 = iVar8;
        }
      }
      if ((uVar1 < uVar13) ||
         ((uVar1 == uVar13 && ((byte)(&DAT_0004c640)[iVar4] <= (byte)(&DAT_0004c640)[iVar9]))))
      break;
      iVar10 = iVar7 * 2;
      (&DAT_0004bd48)[iVar11] = iVar9;
      iVar11 = iVar7;
    } while (iVar10 <= iVar5);
  }
  (&DAT_0004bd48)[iVar11] = iVar4;
  return;
}



/* ===== FUN_0002c010 @ 0002c010 size=2876 ===== */

void FUN_0002c010(int *param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  bool bVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  short sVar12;
  uint uVar13;
  undefined2 *puVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int *piVar19;
  int iVar20;
  int iVar21;
  undefined2 *puVar22;
  ushort *puVar23;
  int iVar24;
  int iVar25;
  ushort uVar26;
  int *piVar27;
  int iVar28;
  uint uVar29;
  bool bVar30;
  int *local_7c;
  char *local_78;
  int local_70;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  ushort auStack_48 [5];
  short local_3e;
  short local_3c;
  short local_3a;
  short local_38;
  short local_36;
  short local_34;
  short local_32;
  short local_30;
  short local_2e;
  short local_2c;
  short local_2a;
  
  iVar24 = param_1[4];
  iVar7 = 0;
  DAT_0004c63c = 0;
  DAT_0004c880 = 0x23d;
  puVar22 = (undefined2 *)*param_1;
  iVar20 = param_1[1];
  if (iVar24 < 1) {
    local_60 = DAT_0004c888;
    if (iVar20 == 0) {
      local_64 = -1;
      iVar21 = 0;
LAB_0002ca60:
      local_60 = DAT_0004c888;
      local_70 = DAT_0002cb4c;
      iVar20 = DAT_0002cb4c + iVar21 * 4;
      iVar7 = iVar21;
      while( true ) {
        iVar7 = iVar7 + 1;
        local_58 = (DAT_0004c884 - iVar7) + iVar21;
        if (local_64 < 2) {
          iVar18 = local_64 + 1;
          *(int *)(iVar20 + 4) = iVar18;
          puVar22[iVar18 * 2] = 1;
          (&DAT_0004c641)[local_64] = 0;
          local_64 = iVar18;
        }
        else {
          *(undefined4 *)(iVar20 + 4) = 0;
          *puVar22 = 1;
          DAT_0004c640 = 0;
        }
        if (iVar7 == 2) break;
        iVar20 = iVar20 + 4;
      }
    }
    else {
      local_64 = -1;
LAB_0002c0c8:
      local_70 = DAT_0002cb4c;
      piVar27 = (int *)(DAT_0002cb4c + iVar7 * 4);
      iVar18 = local_64;
      iVar21 = iVar7;
      do {
        iVar21 = iVar21 + 1;
        iVar15 = 0;
        local_64 = iVar18;
        if (iVar18 < 2) {
          local_64 = iVar18 + 1;
        }
        puVar14 = puVar22;
        iVar25 = 0;
        if (iVar18 < 2) {
          iVar15 = local_64 * 4;
          puVar14 = puVar22 + local_64 * 2;
          iVar25 = local_64;
        }
        piVar27 = piVar27 + 1;
        *piVar27 = iVar25;
        *puVar14 = 1;
        (&DAT_0004c640)[iVar25] = 0;
        local_58 = (DAT_0004c884 - iVar21) + iVar7;
        local_60 = local_60 - (uint)*(ushort *)(iVar20 + iVar15 + 2);
        iVar18 = local_64;
        DAT_0004c888 = local_60;
      } while (iVar21 != 2);
    }
    iVar21 = 2;
  }
  else {
    iVar21 = 0;
    iVar18 = 0;
    local_64 = -1;
    puVar14 = puVar22 + 1;
    do {
      if (puVar14[-1] == 0) {
        *puVar14 = 0;
      }
      else {
        (&DAT_0004c640)[iVar18] = 0;
        iVar21 = iVar21 + 1;
        iVar7 = 1;
        (&DAT_0004bd48)[iVar21] = iVar18;
        local_64 = iVar18;
      }
      iVar18 = iVar18 + 1;
      puVar14 = puVar14 + 2;
    } while (iVar24 != iVar18);
    if (iVar7 == 0) {
      iVar21 = DAT_0004c63c;
    }
    local_60 = DAT_0004c888;
    local_58 = DAT_0004c884;
    if (iVar20 == 0) {
      if (iVar21 < 2) goto LAB_0002ca60;
    }
    else {
      iVar7 = iVar21;
      if (iVar21 < 2) goto LAB_0002c0c8;
    }
    local_70 = DAT_0002cb4c;
  }
  iVar20 = iVar21 >> 1;
  iVar7 = iVar20 << 1;
  DAT_0004c884 = local_58;
  param_1[6] = local_64;
  local_7c = (int *)(local_70 + iVar20 * 4);
  do {
    iVar15 = *local_7c;
    iVar18 = iVar20;
    if (iVar7 <= iVar21) {
      uVar2 = puVar22[iVar15 * 2];
      iVar25 = iVar7;
      do {
        iVar28 = iVar25 + 1;
        iVar16 = (&DAT_0004bd48)[iVar25];
        uVar3 = puVar22[iVar16 * 2];
        iVar9 = iVar16;
        iVar10 = iVar25;
        uVar26 = uVar3;
        if (iVar25 < iVar21) {
          iVar8 = (&DAT_0004bd48)[iVar28];
          uVar26 = puVar22[iVar8 * 2];
          bVar30 = uVar26 == uVar3;
          iVar9 = iVar8;
          iVar10 = iVar28;
          if (((uVar3 <= uVar26) && (iVar9 = iVar16, iVar10 = iVar25, uVar26 = uVar3, bVar30)) &&
             ((byte)(&DAT_0004c640)[iVar8] <= (byte)(&DAT_0004c640)[iVar16])) {
            iVar9 = iVar8;
            iVar10 = iVar28;
          }
        }
        iVar25 = iVar10 * 2;
      } while (((uVar26 <= uVar2) &&
               ((uVar2 != uVar26 || ((byte)(&DAT_0004c640)[iVar9] < (byte)(&DAT_0004c640)[iVar15])))
               ) && ((&DAT_0004bd48)[iVar18] = iVar9, iVar18 = iVar10, iVar25 <= iVar21));
    }
    iVar20 = iVar20 + -1;
    iVar7 = iVar7 + -2;
    (&DAT_0004bd48)[iVar18] = iVar15;
    local_7c = local_7c + -1;
  } while (iVar20 != 0);
  local_78 = (char *)((int)&DAT_0004c63c + iVar24 + 3);
  iVar7 = DAT_0004c880;
  piVar27 = (int *)(local_70 + DAT_0004c880 * 4);
  local_7c = (int *)(local_70 + iVar21 * 4);
  do {
    iVar18 = iVar7;
    iVar20 = DAT_0004bd4c;
    iVar21 = iVar21 + -1;
    iVar7 = iVar18 + -2;
    DAT_0004bd4c = *local_7c;
    DAT_0004c63c = iVar21;
    FUN_0002bf2c(puVar22);
    piVar27[-1] = iVar20;
    sVar12 = puVar22[iVar20 * 2];
    piVar27[-2] = DAT_0004bd4c;
    DAT_0004c880 = iVar7;
    puVar22[iVar24 * 2] = sVar12 + puVar22[DAT_0004bd4c * 2];
    bVar1 = (&DAT_0004c640)[iVar20];
    if ((byte)(&DAT_0004c640)[iVar20] < (byte)(&DAT_0004c640)[DAT_0004bd4c]) {
      bVar1 = (&DAT_0004c640)[DAT_0004bd4c];
    }
    local_78 = local_78 + 1;
    *local_78 = bVar1 + 1;
    puVar22[DAT_0004bd4c * 2 + 1] = (short)iVar24;
    puVar22[iVar20 * 2 + 1] = (short)iVar24;
    DAT_0004bd4c = iVar24;
    FUN_0002bf2c(puVar22);
    iVar20 = DAT_0004bd4c;
    psVar6 = DAT_0002cb50;
    iVar24 = iVar24 + 1;
    piVar27 = piVar27 + -2;
    local_7c = local_7c + -1;
  } while (iVar21 != 1);
  DAT_0004c880 = iVar18 + -3;
  uVar4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  iVar25 = *param_1;
  (&DAT_0004bd48)[DAT_0004c880] = DAT_0004bd4c;
  iVar24 = param_1[2];
  iVar15 = param_1[3];
  uVar17 = param_1[5];
  iVar21 = param_1[6];
  iVar18 = param_1[1];
  psVar6[0] = 0;
  psVar6[1] = 0;
  *(undefined4 *)(psVar6 + 2) = uVar4;
  *(undefined4 *)(psVar6 + 4) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)(psVar6 + 6) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  psVar6[8] = 0;
  psVar6[9] = 0;
  *(undefined4 *)(psVar6 + 10) = uVar4;
  psVar6[0xc] = 0;
  psVar6[0xd] = 0;
  *(undefined4 *)(psVar6 + 0xe) = uVar4;
  *(undefined2 *)(iVar25 + iVar20 * 4 + 2) = 0;
  if (iVar7 < 0x23d) {
    local_5c = local_58;
    if (iVar18 == 0) {
      local_78 = (char *)0x0;
      bVar30 = false;
      piVar27 = (int *)(local_70 + iVar7 * 4);
      do {
        piVar19 = piVar27 + 1;
        iVar7 = *piVar27;
        iVar20 = iVar25 + iVar7 * 4;
        uVar13 = *(ushort *)(iVar25 + (uint)*(ushort *)(iVar20 + 2) * 4 + 2) + 1;
        if ((int)uVar17 < (int)uVar13) {
          local_78 = (char *)((int)local_78 + 1);
          uVar13 = uVar17;
        }
        *(short *)(iVar20 + 2) = (short)uVar13;
        if (iVar7 <= iVar21) {
          psVar6[uVar13] = psVar6[uVar13] + 1;
          if (iVar15 <= iVar7) {
            uVar13 = uVar13 + *(int *)(iVar24 + (iVar7 - iVar15) * 4);
          }
          bVar30 = true;
          local_5c = uVar13 * *(ushort *)(iVar25 + iVar7 * 4) + local_5c;
        }
        piVar27 = piVar19;
      } while ((int *)(local_70 + 0x8f4) != piVar19);
      iVar7 = local_5c;
      if (!bVar30) {
        local_5c = local_58;
        iVar7 = DAT_0004c884;
      }
    }
    else {
      bVar30 = false;
      bVar5 = false;
      local_78 = (char *)0x0;
      piVar27 = (int *)(local_70 + iVar7 * 4);
      do {
        piVar19 = piVar27 + 1;
        iVar20 = *piVar27;
        iVar7 = iVar20 * 4;
        uVar13 = *(ushort *)(iVar25 + (uint)*(ushort *)(iVar25 + iVar7 + 2) * 4 + 2) + 1;
        if ((int)uVar17 < (int)uVar13) {
          local_78 = (char *)((int)local_78 + 1);
          uVar13 = uVar17;
        }
        *(short *)(iVar25 + iVar7 + 2) = (short)uVar13;
        if (iVar20 <= iVar21) {
          iVar9 = 0;
          if (iVar15 <= iVar20) {
            iVar9 = iVar24;
          }
          psVar6[uVar13] = psVar6[uVar13] + 1;
          bVar30 = true;
          bVar5 = true;
          if (iVar15 <= iVar20) {
            iVar9 = *(int *)(iVar9 + (iVar20 - iVar15) * 4);
            uVar13 = uVar13 + iVar9;
          }
          local_58 = *(ushort *)(iVar25 + iVar7) * uVar13 + local_58;
          local_60 = (uint)*(ushort *)(iVar25 + iVar7) *
                     ((uint)*(ushort *)(iVar18 + iVar7 + 2) + iVar9) + local_60;
        }
        piVar27 = piVar19;
      } while ((int *)(local_70 + 0x8f4) != piVar19);
      if (bVar5) {
        DAT_0004c884 = local_58;
        local_5c = local_58;
      }
      iVar7 = DAT_0004c884;
      if (bVar30) {
        DAT_0004c888 = local_60;
      }
    }
    DAT_0004c884 = iVar7;
    if (local_78 != (char *)0x0) {
      iVar20 = uVar17 - 2;
      iVar15 = uVar17 - 4;
      uVar13 = uVar17 - 1;
      iVar7 = (uVar17 - 3) * 2;
      iVar18 = (int)local_78 + -2;
      iVar24 = iVar18 - ((int)local_78 - 1U & 0xfffffffe);
      do {
        sVar12 = psVar6[uVar13];
        if (sVar12 == 0) {
          sVar12 = psVar6[iVar20];
          if (sVar12 == 0) {
            sVar12 = psVar6[uVar17 - 3];
            if (sVar12 == 0) {
              sVar12 = psVar6[iVar15];
              iVar10 = iVar7;
              iVar9 = iVar15 * 2;
              if (sVar12 == 0) {
                iVar9 = (uVar17 - 5) * 2;
                sVar12 = psVar6[uVar17 - 5];
                if (sVar12 == 0) {
                  iVar16 = uVar17 - 6;
                  sVar12 = psVar6[iVar16];
                  iVar10 = iVar9;
                  iVar9 = iVar16 * 2;
                  if (sVar12 == 0) {
                    iVar9 = (uVar17 - 7) * 2;
                    sVar12 = psVar6[uVar17 - 7];
                    if (sVar12 == 0) {
                      iVar16 = uVar17 - 8;
                      sVar12 = psVar6[iVar16];
                      iVar10 = iVar9;
                      iVar9 = iVar16 * 2;
                      if (sVar12 == 0) {
                        iVar9 = (uVar17 - 9) * 2;
                        sVar12 = psVar6[uVar17 - 9];
                        if (sVar12 != 0) goto LAB_0002c8bc;
                        iVar16 = uVar17 - 10;
                        sVar12 = psVar6[iVar16];
                        iVar10 = iVar9;
                        iVar9 = iVar16 * 2;
                        if (sVar12 == 0) {
                          iVar9 = (uVar17 - 0xb) * 2;
                          sVar12 = psVar6[uVar17 - 0xb];
                          if (sVar12 != 0) goto LAB_0002c8bc;
                          iVar16 = uVar17 - 0xc;
                          sVar12 = psVar6[iVar16];
                          iVar10 = iVar9;
                          iVar9 = iVar16 * 2;
                          if (sVar12 == 0) {
                            iVar9 = (uVar17 - 0xd) * 2;
                            sVar12 = psVar6[uVar17 - 0xd];
                            if (sVar12 != 0) goto LAB_0002c8bc;
                            iVar16 = uVar17 - 0xe;
                            sVar12 = psVar6[iVar16];
                            iVar10 = iVar9;
                            iVar9 = iVar16 * 2;
                            if (sVar12 == 0) {
                              iVar28 = (uVar17 - 0xf) * 2;
                              sVar12 = psVar6[uVar17 - 0xf];
                              if (sVar12 == 0) {
                                iVar9 = (uVar17 - 0x10) * 2;
                                sVar12 = psVar6[uVar17 - 0x10];
                                iVar10 = iVar28;
                                if (sVar12 == 0) {
                                  sVar12 = psVar6[uVar17 - 0x11];
                                  iVar10 = iVar9;
                                  iVar9 = (uVar17 - 0x11) * 2;
                                }
                              }
                              else {
                                iVar10 = iVar16 * 2;
                                iVar9 = iVar28;
                              }
                            }
                          }
                        }
                      }
                    }
                    else {
LAB_0002c8bc:
                      iVar10 = iVar16 << 1;
                    }
                  }
                }
                else {
                  iVar10 = iVar15 * 2;
                }
              }
            }
            else {
              iVar10 = iVar20 * 2;
              iVar9 = iVar7;
            }
          }
          else {
            iVar10 = uVar13 * 2;
            iVar9 = iVar20 * 2;
          }
        }
        else {
          iVar10 = uVar17 << 1;
          iVar9 = uVar13 * 2;
        }
        *(short *)((int)psVar6 + iVar9) = sVar12 + -1;
        *(short *)((int)psVar6 + iVar10) = *(short *)((int)psVar6 + iVar10) + 2;
        psVar6[uVar17] = psVar6[uVar17] + -1;
        if (iVar18 == iVar24) goto LAB_0002c8c8;
        iVar18 = iVar18 + -2;
      } while( true );
    }
  }
LAB_0002c6e8:
  auStack_48[1] = *psVar6 * 2;
  auStack_48[2] = (*psVar6 * 2 + psVar6[1]) * 2;
  auStack_48[3] = (auStack_48[2] + psVar6[2]) * 2;
  auStack_48[4] = (auStack_48[3] + psVar6[3]) * 2;
  local_3e = (auStack_48[4] + psVar6[4]) * 2;
  local_3c = (local_3e + psVar6[5]) * 2;
  local_3a = (local_3c + psVar6[6]) * 2;
  local_38 = (local_3a + psVar6[7]) * 2;
  local_36 = (local_38 + psVar6[8]) * 2;
  local_34 = (local_36 + psVar6[9]) * 2;
  local_32 = (local_34 + psVar6[10]) * 2;
  local_30 = (local_32 + psVar6[0xb]) * 2;
  local_2e = (local_30 + psVar6[0xc]) * 2;
  local_2c = (local_2e + psVar6[0xd]) * 2;
  local_2a = (local_2c + psVar6[0xe]) * 2;
  if (local_64 != -1) {
    puVar14 = puVar22 + local_64 * 2 + 2;
    do {
      while (uVar17 = (uint)(ushort)puVar22[1], uVar17 == 0) {
        puVar22 = puVar22 + 2;
        if (puVar22 == puVar14) {
          return;
        }
      }
      uVar13 = 0;
      uVar11 = (uint)auStack_48[uVar17];
      auStack_48[uVar17] = auStack_48[uVar17] + 1;
      do {
        uVar17 = uVar17 - 1;
        uVar29 = uVar11 & 1 | uVar13;
        uVar11 = uVar11 >> 1;
        uVar13 = uVar29 << 1;
      } while (uVar17 != 0);
      *puVar22 = (short)uVar29;
      puVar22 = puVar22 + 2;
    } while (puVar22 != puVar14);
  }
  return;
LAB_0002c8c8:
  if (uVar17 != 0) {
    iVar7 = 0x23d;
    bVar30 = false;
    puVar23 = (ushort *)(psVar6 + uVar17);
    while( true ) {
      uVar11 = (uint)*puVar23;
      if (uVar11 != 0) {
        piVar27 = (int *)(local_70 + iVar7 * 4);
        do {
          do {
            piVar27 = piVar27 + -1;
            iVar7 = iVar7 + -1;
            iVar20 = *piVar27 * 4;
            iVar24 = iVar25 + iVar20;
          } while (iVar21 < *piVar27);
          uVar29 = (uint)*(ushort *)(iVar24 + 2);
          if (uVar29 != (uVar17 & 0xffff)) {
            uVar2 = *(ushort *)(iVar25 + iVar20);
            *(short *)(iVar24 + 2) = (short)uVar17;
            bVar30 = true;
            local_5c = (uint)uVar2 * (uVar17 - uVar29) + local_5c;
          }
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      if (uVar13 == 0) break;
      uVar17 = uVar13;
      uVar13 = uVar13 - 1;
      puVar23 = puVar23 + -1;
    }
    if (bVar30) {
      DAT_0004c884 = local_5c;
    }
  }
  goto LAB_0002c6e8;
}



/* ===== FUN_0002cb54 @ 0002cb54 size=160 ===== */

void FUN_0002cb54(uint param_1,int param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = DAT_0004bd2c;
  DAT_0004bd2c = DAT_0004bd2c + param_2;
  DAT_0004bd3c = DAT_0004bd3c | param_1 << (uVar2 & 0xff);
  if ((int)DAT_0004bd2c < 0x11) {
    return;
  }
  if (DAT_0004bd38 - 1U <= DAT_0004bd30) {
    FUN_00021f68(DAT_0004bd34,&DAT_0004bd30);
  }
  iVar3 = DAT_0004bd34;
  puVar1 = (undefined1 *)(DAT_0004bd34 + DAT_0004bd30);
  DAT_0004bd30 = DAT_0004bd30 + 1;
  *puVar1 = (char)DAT_0004bd3c;
  DAT_0004bd2c = DAT_0004bd2c + -0x10;
  puVar1 = (undefined1 *)(iVar3 + DAT_0004bd30);
  uVar2 = DAT_0004bd3c >> 8;
  DAT_0004bd30 = DAT_0004bd30 + 1;
  DAT_0004bd3c = param_1 >> (param_2 - DAT_0004bd2c & 0xff);
  *puVar1 = (char)uVar2;
  return;
}



/* ===== FUN_0002cbf4 @ 0002cbf4 size=924 ===== */

void FUN_0002cbf4(int param_1,int param_2)

{
  undefined1 *puVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  
  if (*(ushort *)(param_1 + 2) == 0) {
    iVar7 = 3;
    iVar8 = 0x8a;
  }
  else {
    iVar7 = 4;
    iVar8 = 7;
  }
  if (-1 < param_2) {
    iVar5 = param_1 + param_2 * 4;
    uVar6 = 0xffffffff;
    uVar11 = (uint)*(ushort *)(param_1 + 2);
    iVar12 = 0;
    do {
      iVar13 = iVar12 + 1;
      uVar10 = (uint)*(ushort *)(param_1 + 6);
      if (iVar13 < iVar8) {
        if (uVar10 != uVar11) {
          if (iVar7 <= iVar13) goto LAB_0002ce00;
          uVar2 = (&DAT_0004bc90)[uVar11 * 2];
          uVar3 = (&DAT_0004bc92)[uVar11 * 2];
          uVar9 = uVar3 + DAT_0004bd2c;
          DAT_0004bd3c = DAT_0004bd3c | (uint)uVar2 << (DAT_0004bd2c & 0xff);
          uVar6 = DAT_0004bd3c;
          DAT_0004bd2c = uVar9;
          if (0x10 < (int)uVar9) {
            if (DAT_0004bd38 - 1U <= DAT_0004bd30) {
              FUN_00021f68(DAT_0004bd34,DAT_0002cf90);
            }
            iVar7 = DAT_0004bd34;
            puVar1 = (undefined1 *)(DAT_0004bd34 + DAT_0004bd30);
            DAT_0004bd30 = DAT_0004bd30 + 1;
            *puVar1 = (char)DAT_0004bd3c;
            uVar9 = DAT_0004bd2c - 0x10;
            uVar6 = (uint)(uVar2 >> (uVar3 - uVar9 & 0xff));
            puVar1 = (undefined1 *)(iVar7 + DAT_0004bd30);
            uVar4 = DAT_0004bd3c >> 8;
            DAT_0004bd2c = uVar9;
            DAT_0004bd30 = DAT_0004bd30 + 1;
            DAT_0004bd3c = uVar6;
            *puVar1 = (char)uVar4;
          }
          if (iVar12 != 0) {
            uVar2 = (&DAT_0004bc90)[uVar11 * 2];
            uVar3 = (&DAT_0004bc92)[uVar11 * 2];
            DAT_0004bd3c = uVar6 | (uint)uVar2 << (uVar9 & 0xff);
            DAT_0004bd2c = uVar3 + uVar9;
            uVar6 = DAT_0004bd3c;
            uVar9 = DAT_0004bd2c;
            if (0x10 < (int)DAT_0004bd2c) {
              if (DAT_0004bd38 - 1U <= DAT_0004bd30) {
                FUN_00021f68(DAT_0004bd34,DAT_0002cf90);
              }
              iVar7 = DAT_0004bd34;
              puVar1 = (undefined1 *)(DAT_0004bd34 + DAT_0004bd30);
              DAT_0004bd30 = DAT_0004bd30 + 1;
              *puVar1 = (char)DAT_0004bd3c;
              uVar9 = DAT_0004bd2c - 0x10;
              uVar6 = (uint)(uVar2 >> (uVar3 - uVar9 & 0xff));
              puVar1 = (undefined1 *)(iVar7 + DAT_0004bd30);
              uVar4 = DAT_0004bd3c >> 8;
              DAT_0004bd2c = uVar9;
              DAT_0004bd30 = DAT_0004bd30 + 1;
              DAT_0004bd3c = uVar6;
              *puVar1 = (char)uVar4;
            }
            if (iVar12 != 1) {
              uVar2 = (&DAT_0004bc90)[uVar11 * 2];
              uVar3 = (&DAT_0004bc92)[uVar11 * 2];
              DAT_0004bd3c = uVar6 | (uint)uVar2 << (uVar9 & 0xff);
              DAT_0004bd2c = uVar3 + uVar9;
              if (0x10 < (int)DAT_0004bd2c) {
                if (DAT_0004bd38 - 1U <= DAT_0004bd30) {
                  FUN_00021f68(DAT_0004bd34,DAT_0002cf90);
                }
                iVar7 = DAT_0004bd34;
                puVar1 = (undefined1 *)(DAT_0004bd34 + DAT_0004bd30);
                DAT_0004bd30 = DAT_0004bd30 + 1;
                *puVar1 = (char)DAT_0004bd3c;
                DAT_0004bd2c = DAT_0004bd2c - 0x10;
                puVar1 = (undefined1 *)(iVar7 + DAT_0004bd30);
                uVar6 = DAT_0004bd3c >> 8;
                DAT_0004bd30 = DAT_0004bd30 + 1;
                DAT_0004bd3c = (uint)(uVar2 >> (uVar3 - DAT_0004bd2c & 0xff));
                *puVar1 = (char)uVar6;
              }
            }
          }
          goto joined_r0x0002cdc0;
        }
      }
      else {
LAB_0002ce00:
        if (uVar11 == 0) {
          if (iVar13 < 0xb) {
            FUN_0002cb54(DAT_0004bcd4,DAT_0004bcd6);
            uVar6 = DAT_0004bd2c + 3;
            DAT_0004bd3c = DAT_0004bd3c | iVar12 - 2U << (DAT_0004bd2c & 0xff);
            DAT_0004bd2c = uVar6;
            if (0x10 < (int)uVar6) {
              if (DAT_0004bd38 - 1U <= DAT_0004bd30) {
                FUN_00021f68(DAT_0004bd34,DAT_0002cf90);
              }
              iVar7 = DAT_0004bd34;
              puVar1 = (undefined1 *)(DAT_0004bd34 + DAT_0004bd30);
              DAT_0004bd30 = DAT_0004bd30 + 1;
              *puVar1 = (char)DAT_0004bd3c;
              DAT_0004bd2c = DAT_0004bd2c - 0x10;
              puVar1 = (undefined1 *)(iVar7 + DAT_0004bd30);
              uVar6 = DAT_0004bd3c >> 8;
              DAT_0004bd30 = DAT_0004bd30 + 1;
              DAT_0004bd3c = iVar12 - 2U >> (3 - DAT_0004bd2c & 0xff);
              *puVar1 = (char)uVar6;
            }
          }
          else {
            FUN_0002cb54(DAT_0004bcd8,DAT_0004bcda);
            FUN_0002cb54(iVar12 + -10,7);
          }
        }
        else {
          if (uVar11 != uVar6) {
            FUN_0002cb54((&DAT_0004bc90)[uVar11 * 2],(&DAT_0004bc92)[uVar11 * 2]);
            iVar13 = iVar12;
          }
          FUN_0002cb54(DAT_0004bcd0,DAT_0004bcd2);
          FUN_0002cb54(iVar13 + -3,2);
        }
joined_r0x0002cdc0:
        uVar6 = uVar11;
        if (uVar10 == 0) {
          iVar7 = 3;
          iVar8 = 0x8a;
          iVar13 = 0;
        }
        else if (uVar10 == uVar11) {
          iVar7 = 3;
          iVar8 = 6;
          iVar13 = 0;
          uVar6 = uVar10;
        }
        else {
          iVar7 = 4;
          iVar8 = 7;
          iVar13 = 0;
        }
      }
      bVar14 = iVar5 != param_1;
      param_1 = param_1 + 4;
      uVar11 = uVar10;
      iVar12 = iVar13;
    } while (bVar14);
  }
  return;
}



/* ===== FUN_0002cf94 @ 0002cf94 size=400 ===== */

void FUN_0002cf94(int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  
  if (DAT_0004c8b0 != 0) {
    uVar5 = 0;
    iVar9 = 0;
    uVar4 = 0;
    pbVar8 = &DAT_0005eba8;
    iVar10 = 0;
    do {
      while( true ) {
        uVar3 = uVar4 & 7;
        uVar6 = (uint)*pbVar8;
        uVar4 = uVar4 + 1;
        if (uVar3 == 0) {
          uVar5 = (uint)(byte)(&DAT_0004dba8)[iVar9];
          iVar9 = iVar9 + 1;
        }
        if ((uVar5 & 1) != 0) break;
        FUN_0002cb54(*(undefined2 *)(param_1 + uVar6 * 4),*(undefined2 *)(param_1 + uVar6 * 4 + 2));
LAB_0002d00c:
        uVar5 = uVar5 >> 1;
        pbVar8 = pbVar8 + 1;
        if (DAT_0004c8b0 <= uVar4) goto LAB_0002d0f8;
      }
      uVar3 = (uint)(byte)(&DAT_0004c8b8)[uVar6];
      iVar7 = (uVar3 + 0x101) * 4;
      FUN_0002cb54(*(undefined2 *)(param_1 + iVar7),*(undefined2 *)(param_1 + iVar7 + 2));
      if ((&DAT_00049c00)[uVar3] != 0) {
        FUN_0002cb54(uVar6 - (&DAT_0004c9b8)[uVar3]);
      }
      iVar7 = iVar10 + 1;
      uVar3 = (uint)(ushort)(&DAT_0004eba8)[iVar10];
      if (uVar3 < 0x100) {
        bVar2 = (&DAT_0004ca30)[uVar3];
      }
      else {
        bVar2 = (&DAT_0004cb30)[(ushort)(&DAT_0004eba8)[iVar10] >> 7];
      }
      iVar1 = (uint)bVar2 * 4;
      FUN_0002cb54(*(undefined2 *)(param_2 + iVar1),*(undefined2 *)(param_2 + iVar1 + 2));
      iVar10 = iVar7;
      if (*(int *)((int)&DAT_00049c78 + iVar1) == 0) goto LAB_0002d00c;
      uVar5 = uVar5 >> 1;
      FUN_0002cb54(uVar3 - *(int *)(&DAT_0004cc30 + iVar1));
      pbVar8 = pbVar8 + 1;
    } while (uVar4 < DAT_0004c8b0);
  }
LAB_0002d0f8:
  FUN_0002cb54(*(undefined2 *)(param_1 + 0x400),*(undefined2 *)(param_1 + 0x402));
  return;
}



/* ===== FUN_0002d124 @ 0002d124 size=156 ===== */

void FUN_0002d124(uint param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = DAT_0004bd2c;
  DAT_0004bd2c = DAT_0004bd2c + 3;
  DAT_0004bd3c = DAT_0004bd3c | param_1 << (uVar2 & 0xff);
  if ((int)DAT_0004bd2c < 0x11) {
    return;
  }
  if (DAT_0004bd38 - 1U <= DAT_0004bd30) {
    FUN_00021f68(DAT_0004bd34,&DAT_0004bd30);
  }
  iVar3 = DAT_0004bd34;
  puVar1 = (undefined1 *)(DAT_0004bd34 + DAT_0004bd30);
  DAT_0004bd30 = DAT_0004bd30 + 1;
  *puVar1 = (char)DAT_0004bd3c;
  DAT_0004bd2c = DAT_0004bd2c + -0x10;
  puVar1 = (undefined1 *)(iVar3 + DAT_0004bd30);
  uVar2 = DAT_0004bd3c >> 8;
  DAT_0004bd30 = DAT_0004bd30 + 1;
  DAT_0004bd3c = param_1 >> (3 - DAT_0004bd2c & 0xff);
  *puVar1 = (char)uVar2;
  return;
}



/* ===== FUN_0002d1c0 @ 0002d1c0 size=1272 ===== */

void FUN_0002d1c0(undefined4 param_1,undefined4 param_2)

{
  size_t sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  undefined4 uVar7;
  short *psVar8;
  int iVar9;
  undefined2 *puVar10;
  uint uVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  uint uVar14;
  uint uVar15;
  undefined2 *puVar16;
  undefined2 *puVar17;
  int iVar18;
  int iVar19;
  int *piVar20;
  int *piVar21;
  int *piVar22;
  uint *puVar23;
  uint *puVar24;
  int *piVar25;
  int *piVar26;
  uint uVar27;
  undefined2 *puVar28;
  longlong lVar29;
  ushort auStack_48 [5];
  short local_3e;
  short local_3c;
  short local_3a;
  short local_38;
  short local_36;
  short local_34;
  short local_32;
  short local_30;
  short local_2e;
  short local_2c;
  short local_2a;
  
  piVar22 = DAT_0002d6e8;
  DAT_0004ccb0 = 0;
  DAT_0004ccb4 = 0;
  DAT_0004cca8 = param_1;
  DAT_0004ccac = param_2;
  if (DAT_0004ccba == 0) {
    piVar25 = DAT_0002d6e8 + 0x1c;
    iVar19 = 0;
    iVar18 = 0;
    piVar21 = DAT_0002d6e8;
    puVar23 = DAT_0002d6ec;
    do {
      puVar23 = puVar23 + 1;
      sVar1 = 1 << (*puVar23 & 0xff);
      piVar21 = piVar21 + 1;
      *piVar21 = iVar19;
      if (0 < (int)sVar1) {
        memset((void *)((int)piVar22 + iVar19 + -0xfc),iVar18,sVar1);
        iVar19 = iVar19 + sVar1;
      }
      puVar24 = DAT_0002d6f0;
      iVar18 = iVar18 + 1;
    } while (piVar25 != piVar21);
    iVar18 = 0;
    piVar22 = (int *)0x4cc2c;
    (&DAT_0004c8b7)[iVar19] = 0x1c;
    iVar19 = 0;
    do {
      puVar24 = puVar24 + 1;
      sVar1 = 1 << (*puVar24 & 0xff);
      piVar22 = piVar22 + 1;
      *piVar22 = iVar18;
      if (0 < (int)sVar1) {
        memset(&DAT_0004ca30 + iVar18,iVar19,sVar1);
        iVar18 = iVar18 + sVar1;
      }
      piVar21 = DAT_0002d6f4;
      iVar19 = iVar19 + 1;
    } while (piVar22 != (int *)0x4cc6c);
    iVar18 = iVar18 >> 7;
    piVar26 = DAT_0002d6f4 + 0xe;
    piVar22 = DAT_0002d6f4;
    iVar19 = 0x10;
    piVar25 = DAT_0002d6f8;
    do {
      sVar1 = 1 << (*piVar25 - 7U & 0xff);
      piVar20 = piVar22 + 1;
      *piVar22 = iVar18 << 7;
      if (0 < (int)sVar1) {
        memset((void *)((int)piVar21 + iVar18 + -0x140),iVar19,sVar1);
        iVar18 = iVar18 + sVar1;
      }
      psVar8 = DAT_0002d700;
      iVar9 = DAT_0002d6fc;
      piVar22 = piVar20;
      iVar19 = iVar19 + 1;
      piVar25 = piVar25 + 1;
    } while (piVar26 != piVar20);
    uVar7 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    puVar10 = (undefined2 *)(DAT_0002d6fc + -8);
    puVar13 = (undefined2 *)(DAT_0002d6fc + 0x238);
    psVar8[0] = 0;
    psVar8[1] = 0;
    *(undefined4 *)(psVar8 + 2) = uVar7;
    *(undefined4 *)(psVar8 + 4) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    *(undefined4 *)(psVar8 + 6) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    psVar8[8] = 0;
    psVar8[9] = 0;
    *(undefined4 *)(psVar8 + 10) = uVar7;
    psVar8[0xc] = 0;
    psVar8[0xd] = 0;
    *(undefined4 *)(psVar8 + 0xe) = uVar7;
    puVar17 = puVar10;
    do {
      puVar17[1] = 8;
      puVar17 = puVar17 + 2;
    } while (puVar13 != puVar17);
    sVar2 = psVar8[9];
    puVar17 = (undefined2 *)(iVar9 + 0x23a);
    do {
      puVar13 = puVar17 + 2;
      *puVar17 = 9;
      puVar17 = puVar13;
    } while ((undefined2 *)(iVar9 + 0x3fa) != puVar13);
    sVar3 = psVar8[7];
    psVar8[9] = sVar2 + 0x70;
    puVar17 = (undefined2 *)(iVar9 + 0x3fa);
    do {
      puVar13 = puVar17 + 2;
      *puVar17 = 7;
      puVar17 = puVar13;
    } while (puVar13 != (undefined2 *)(iVar9 + 0x45a));
    sVar4 = *psVar8;
    sVar5 = psVar8[1];
    psVar8[8] = 0x98;
    *(undefined2 *)(iVar9 + 0x45a) = 8;
    sVar6 = psVar8[2];
    auStack_48[1] = sVar4 * 2;
    psVar8[7] = sVar3 + 0x18;
    auStack_48[2] = (sVar4 * 2 + sVar5) * 2;
    *(undefined2 *)(iVar9 + 0x45e) = 8;
    sVar4 = psVar8[3];
    *(undefined2 *)(iVar9 + 0x462) = 8;
    *(undefined2 *)(iVar9 + 0x466) = 8;
    auStack_48[3] = (auStack_48[2] + sVar6) * 2;
    *(undefined2 *)(iVar9 + 0x46a) = 8;
    *(undefined2 *)(iVar9 + 0x46e) = 8;
    *(undefined2 *)(iVar9 + 0x472) = 8;
    *(undefined2 *)(iVar9 + 0x476) = 8;
    auStack_48[4] = (auStack_48[3] + sVar4) * 2;
    local_3e = (auStack_48[4] + psVar8[4]) * 2;
    local_3c = (local_3e + psVar8[5]) * 2;
    local_3a = (local_3c + psVar8[6]) * 2;
    local_38 = (sVar3 + 0x18 + local_3a) * 2;
    local_36 = (local_38 + 0x98) * 2;
    local_34 = (sVar2 + 0x70 + local_36) * 2;
    local_32 = (local_34 + psVar8[10]) * 2;
    local_30 = (local_32 + psVar8[0xb]) * 2;
    local_2e = (local_30 + psVar8[0xc]) * 2;
    local_2c = (local_2e + psVar8[0xd]) * 2;
    local_2a = (local_2c + psVar8[0xe]) * 2;
    do {
      while (uVar14 = (uint)(ushort)puVar10[1], uVar14 != 0) {
        uVar27 = 0;
        uVar11 = (uint)auStack_48[uVar14];
        auStack_48[uVar14] = auStack_48[uVar14] + 1;
        do {
          uVar14 = uVar14 - 1;
          uVar15 = uVar11 & 1 | uVar27;
          uVar11 = uVar11 >> 1;
          uVar27 = uVar15 << 1;
        } while (uVar14 != 0);
        *puVar10 = (short)uVar15;
        puVar10 = puVar10 + 2;
        if (puVar10 == (undefined2 *)(iVar9 + 0x478)) goto LAB_0002d5ac;
      }
      puVar10 = puVar10 + 2;
    } while (puVar10 != (undefined2 *)(iVar9 + 0x478));
LAB_0002d5ac:
    puVar13 = DAT_0002d704;
    puVar28 = DAT_0002d704 + -0x10;
    puVar12 = DAT_0002d704 + 0x4a8;
    DAT_0004cd18 = &DAT_00050003;
    puVar16 = DAT_0002d704 + 0x26c;
    puVar17 = (undefined2 *)0x380;
    puVar10 = (undefined2 *)0x390;
    lVar29 = 4;
    while( true ) {
      *puVar28 = *puVar17;
      puVar28[1] = *puVar10;
      puVar28 = puVar28 + 2;
      lVar29 = lVar29 + -1;
      if (lVar29 == 0) break;
      puVar17 = puVar17 + 1;
      puVar10 = puVar10 + 1;
    }
    puVar17 = (undefined2 *)0x388;
    puVar10 = (undefined2 *)0x398;
    lVar29 = 4;
    while( true ) {
      *puVar28 = *puVar17;
      puVar28[1] = *puVar10;
      puVar28 = puVar28 + 2;
      lVar29 = lVar29 + -1;
      if (lVar29 == 0) break;
      puVar17 = puVar17 + 1;
      puVar10 = puVar10 + 1;
    }
    DAT_0004cd1c = &DAT_00050013;
    DAT_0004cd20 = &DAT_0005000b;
    DAT_0004cd24 = &DAT_0005001b;
    puVar17 = (undefined2 *)0x380;
    puVar10 = (undefined2 *)0x390;
    lVar29 = 4;
    puVar28 = puVar13;
    while( true ) {
      *puVar28 = *puVar17;
      puVar28[1] = *puVar10;
      puVar28 = puVar28 + 2;
      lVar29 = lVar29 + -1;
      if (lVar29 == 0) break;
      puVar17 = puVar17 + 1;
      puVar10 = puVar10 + 1;
    }
    puVar17 = (undefined2 *)0x388;
    puVar10 = (undefined2 *)0x398;
    lVar29 = 4;
    while( true ) {
      *puVar28 = *puVar17;
      puVar28[1] = *puVar10;
      puVar28 = puVar28 + 2;
      lVar29 = lVar29 + -1;
      if (lVar29 == 0) break;
      puVar17 = puVar17 + 1;
      puVar10 = puVar10 + 1;
    }
    puVar28 = puVar13 + 0x10;
    DAT_0004cd28 = &DAT_00050007;
    puVar17 = (undefined2 *)0x380;
    puVar10 = (undefined2 *)0x390;
    lVar29 = 4;
    while( true ) {
      *puVar28 = *puVar17;
      puVar28[1] = *puVar10;
      puVar28 = puVar28 + 2;
      lVar29 = lVar29 + -1;
      if (lVar29 == 0) break;
      puVar17 = puVar17 + 1;
      puVar10 = puVar10 + 1;
    }
    puVar17 = (undefined2 *)0x388;
    puVar10 = (undefined2 *)0x398;
    lVar29 = 4;
    while( true ) {
      *puVar28 = *puVar17;
      puVar28[1] = *puVar10;
      puVar28 = puVar28 + 2;
      lVar29 = lVar29 + -1;
      if (lVar29 == 0) break;
      puVar17 = puVar17 + 1;
      puVar10 = puVar10 + 1;
    }
    DAT_0004cd2c = &DAT_00050017;
    do {
      puVar17 = puVar16 + 2;
      *puVar16 = 0;
      puVar16 = puVar17;
    } while (puVar17 != puVar12);
    puVar10 = DAT_0002d708 + 0x3c;
    puVar17 = DAT_0002d708;
    do {
      puVar16 = puVar17 + 2;
      *puVar17 = 0;
      puVar17 = puVar16;
    } while (puVar10 != puVar16);
    puVar17 = &DAT_0004bc90;
    do {
      puVar10 = puVar17 + 2;
      *puVar17 = 0;
      puVar17 = puVar10;
    } while (puVar10 != (undefined2 *)&DAT_0004bcdc);
    puVar13[0x46c] = 1;
    DAT_0004db98 = 0;
    DAT_0004c888 = 0;
    DAT_0004c884 = 0;
    DAT_0004db9c = 0;
    DAT_0004c8b0 = 0;
    DAT_0004dba0 = 0;
    DAT_0004dba1 = 1;
  }
  return;
}



/* ===== FUN_0002d70c @ 0002d70c size=1452 ===== */

int FUN_0002d70c(int param_1,uint param_2,int param_3)

{
  undefined1 *puVar1;
  short *psVar2;
  short sVar3;
  ushort uVar4;
  undefined4 uVar5;
  int iVar6;
  short *psVar7;
  short *psVar8;
  int iVar9;
  undefined2 *puVar10;
  short *psVar11;
  uint uVar12;
  uint uVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  byte *pbVar16;
  int iVar18;
  uint uVar19;
  byte *pbVar17;
  
  psVar7 = DAT_0004cca8;
  sVar3 = *DAT_0004cca8;
  (&DAT_0004dba8)[DAT_0004db98] = DAT_0004dba0;
  psVar8 = DAT_0002dcc4;
  if (sVar3 == -1) {
    uVar13 = 0xf3ffc07f;
    psVar11 = DAT_0002dcc4;
    do {
      uVar12 = uVar13 & 1;
      uVar13 = uVar13 >> 1;
      if ((uVar12 != 0) && (*psVar11 != 0)) {
        *psVar7 = 0;
        goto LAB_0002d754;
      }
      psVar11 = psVar11 + 2;
    } while (psVar11 != DAT_0002dcc4 + 0x40);
    *psVar7 = 1;
    if ((DAT_0004d1d4 == 0 && DAT_0004d1d8 == 0) && DAT_0004d1e4 == 0) {
      psVar11 = psVar8 + 0x1c0;
      do {
        psVar2 = psVar8 + 0x40;
        psVar8 = psVar8 + 2;
        if (*psVar2 != 0) goto LAB_0002d754;
      } while (psVar8 != psVar11);
      *psVar7 = 0;
    }
  }
LAB_0002d754:
  FUN_0002c010(&PTR_DAT_00049cf0);
  FUN_0002c010(&PTR_DAT_00049d0c);
  FUN_0002bb78(&DAT_0004d1b0,DAT_00049d08);
  FUN_0002bb78(DAT_0002dcb8,DAT_00049d24);
  FUN_0002c010(&DAT_00049d28);
  if (DAT_0004bcce == 0) {
    if (DAT_0004bc96 == 0) {
      if (DAT_0004bcca == 0) {
        if (DAT_0004bc9a == 0) {
          if (DAT_0004bcc6 == 0) {
            if (DAT_0004bc9e == 0) {
              if (DAT_0004bcc2 == 0) {
                if (DAT_0004bca2 == 0) {
                  if (DAT_0004bcbe == 0) {
                    if (DAT_0004bca6 == 0) {
                      if (DAT_0004bcba == 0) {
                        if (DAT_0004bcaa == 0) {
                          if (DAT_0004bcb6 == 0) {
                            if (DAT_0004bcae == 0) {
                              if (DAT_0004bcb2 == 0) {
                                if (DAT_0004bc92 == 0) {
                                  iVar9 = 9;
                                  iVar18 = 2;
                                  goto LAB_0002d860;
                                }
                                iVar18 = 3;
                              }
                              else {
                                iVar18 = 4;
                              }
                            }
                            else {
                              iVar18 = 5;
                            }
                          }
                          else {
                            iVar18 = 6;
                          }
                        }
                        else {
                          iVar18 = 7;
                        }
                      }
                      else {
                        iVar18 = 8;
                      }
                    }
                    else {
                      iVar18 = 9;
                    }
                  }
                  else {
                    iVar18 = 10;
                  }
                }
                else {
                  iVar18 = 0xb;
                }
              }
              else {
                iVar18 = 0xc;
              }
            }
            else {
              iVar18 = 0xd;
            }
          }
          else {
            iVar18 = 0xe;
          }
        }
        else {
          iVar18 = 0xf;
        }
      }
      else {
        iVar18 = 0x10;
      }
    }
    else {
      iVar18 = 0x11;
    }
  }
  else {
    iVar18 = 0x12;
  }
  iVar9 = (iVar18 + 1) * 3;
LAB_0002d860:
  DAT_0004c884 = DAT_0004c884 + 0xe + iVar9;
  uVar13 = DAT_0004c888 + 10U >> 3;
  uVar12 = DAT_0004c884 + 10U >> 3;
  uVar19 = uVar12;
  if (uVar13 <= uVar12) {
    uVar19 = uVar13;
  }
  if ((((param_3 == 0 || uVar19 < param_2) || (DAT_0004ccac == (undefined4 *)0x0)) ||
      (DAT_0004ccb4 != 0 || DAT_0004ccb0 != 0)) ||
     ((iVar9 = FUN_00021fe0(), iVar9 == 0 || (DAT_0004bbcc != 0)))) {
    if (param_1 == 0 || uVar19 < param_2 + 4) {
      if (uVar12 < uVar13) {
        FUN_0002d124(param_3 + 4);
        uVar5 = DAT_00049d24;
        iVar9 = DAT_00049d08;
        FUN_0002cb54(DAT_00049d08 + -0x100,5);
        FUN_0002cb54(uVar5,5);
        FUN_0002cb54(iVar18 + -3,4);
        uVar13 = DAT_0004bd3c;
        uVar12 = DAT_0004bd2c;
        pbVar17 = &DAT_00038640;
        do {
          pbVar16 = pbVar17 + 1;
          uVar4 = (&DAT_0004bc92)[(uint)*pbVar17 * 2];
          DAT_0004bd3c = uVar13 | (uint)uVar4 << (uVar12 & 0xff);
          DAT_0004bd2c = uVar12 + 3;
          uVar13 = DAT_0004bd3c;
          uVar12 = DAT_0004bd2c;
          if (0x10 < (int)DAT_0004bd2c) {
            if (DAT_0004bd38 - 1U <= DAT_0004bd30) {
              FUN_00021f68(DAT_0004bd34,DAT_0002dcbc);
            }
            iVar6 = DAT_0004bd34;
            puVar1 = (undefined1 *)(DAT_0004bd34 + DAT_0004bd30);
            DAT_0004bd30 = DAT_0004bd30 + 1;
            *puVar1 = (char)DAT_0004bd3c;
            uVar12 = DAT_0004bd2c - 0x10;
            uVar13 = (uint)(uVar4 >> (3 - uVar12 & 0xff));
            puVar1 = (undefined1 *)(iVar6 + DAT_0004bd30);
            uVar19 = DAT_0004bd3c >> 8;
            DAT_0004bd2c = uVar12;
            DAT_0004bd30 = DAT_0004bd30 + 1;
            DAT_0004bd3c = uVar13;
            *puVar1 = (char)uVar19;
          }
          pbVar17 = pbVar16;
        } while (pbVar16 != &DAT_00038641 + iVar18);
        FUN_0002cbf4(&DAT_0004d1b0,iVar9);
        FUN_0002cbf4(DAT_0002dcb8,uVar5);
        FUN_0002cf94(&DAT_0004d1b0,DAT_0002dcb8);
      }
      else {
        FUN_0002d124(param_3 + 2);
        FUN_0002cf94(DAT_0002dcc0 + 0x78);
        DAT_0004c884 = DAT_0004c888;
      }
      uVar13 = DAT_0004c884 + DAT_0004ccb0 + 3;
      DAT_0004ccb0 = uVar13 & 7;
      DAT_0004ccb4 = DAT_0004ccb4 + (uVar13 >> 3);
    }
    else {
      FUN_0002d124(param_3);
      DAT_0004ccb4 = DAT_0004ccb4 + 4 + (DAT_0004ccb0 + 10 >> 3) + param_2;
      DAT_0004ccb0 = 0;
      FUN_0002bd88(param_1,param_2,1);
    }
  }
  else {
    if (param_1 == 0) {
      error("block vanished");
    }
    FUN_0002bd88(param_1,param_2,0);
    DAT_0004ccb4 = param_2;
    *DAT_0004ccac = 0;
  }
  puVar10 = &DAT_0004d1b0;
  do {
    puVar14 = puVar10 + 2;
    *puVar10 = 0;
    puVar10 = puVar14;
  } while (puVar14 != (undefined2 *)0x4d628);
  puVar14 = DAT_0002dcb8 + 0x3c;
  puVar10 = DAT_0002dcb8;
  do {
    puVar15 = puVar10 + 2;
    *puVar10 = 0;
    puVar10 = puVar15;
  } while (puVar14 != puVar15);
  puVar10 = &DAT_0004bc90;
  do {
    puVar14 = puVar10 + 2;
    *puVar10 = 0;
    puVar10 = puVar14;
  } while (puVar14 != (undefined2 *)&DAT_0004bcdc);
  DAT_0004c888 = 0;
  DAT_0004c884 = 0;
  DAT_0004db98 = 0;
  DAT_0004db9c = 0;
  DAT_0004c8b0 = 0;
  DAT_0004dba0 = 0;
  DAT_0004d5b0 = 1;
  DAT_0004dba1 = 1;
  if (param_3 != 0) {
    FUN_0002bca4();
    DAT_0004ccb0 = DAT_0004ccb0 + 7;
    return DAT_0004ccb4 + (DAT_0004ccb0 >> 3);
  }
  return DAT_0004ccb4 + (DAT_0004ccb0 >> 3);
}



/* ===== FUN_0002dcc8 @ 0002dcc8 size=652 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0002dcc8(int param_1,int param_2)

{
  byte *pbVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  byte bVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined4 *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined2 *puVar10;
  uint uVar11;
  undefined2 *puVar12;
  int iVar13;
  undefined2 *puVar14;
  longlong lVar15;
  undefined1 auVar16 [16];
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 in_q10 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  
  puVar8 = &DAT_0004dc88;
  uVar11 = DAT_0004c8b0 + 1;
  (&DAT_0005eba8)[DAT_0004c8b0] = (char)param_2;
  puVar2 = DAT_0002df58;
  DAT_0004c8b0 = uVar11;
  if (param_1 == 0) {
    *(short *)(DAT_0002df54 + param_2 * 4) = *(short *)(DAT_0002df54 + param_2 * 4) + 1;
  }
  else {
    iVar13 = param_1 + -1;
    if (iVar13 < 0x100) {
      bVar4 = (&DAT_0004ca2f)[param_1];
    }
    else {
      bVar4 = (&DAT_0004cb30)[iVar13 >> 7];
    }
    iVar5 = ((byte)(&DAT_0004c8b8)[param_2] + 0x101) * 4;
    *(short *)(DAT_0002df54 + iVar5) = *(short *)(DAT_0002df54 + iVar5) + 1;
    puVar2[(uint)bVar4 * 2] = puVar2[(uint)bVar4 * 2] + 1;
    DAT_0004dba0 = DAT_0004dba1 | DAT_0004dba0;
    puVar2 = &DAT_0004eba8 + DAT_0004db9c;
    DAT_0004db9c = DAT_0004db9c + 1;
    *puVar2 = (short)iVar13;
  }
  bVar4 = DAT_0004dba0;
  DAT_0004dba1 = DAT_0004dba1 << 1;
  if ((uVar11 & 7) == 0) {
    DAT_0004dba0 = 0;
    pbVar1 = &DAT_0004dba8 + DAT_0004db98;
    DAT_0004db98 = DAT_0004db98 + 1;
    *pbVar1 = bVar4;
    DAT_0004dba1 = '\x01';
  }
  if ((2 < DAT_00049af4) && ((uVar11 & 0xfff) == 0)) {
    auVar21._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
    auVar21._0_8_ = 0x500000005;
    auVar21 = *(undefined1 (*) [16])(auVar21 << 0x40 | auVar21);
    puVar7 = &DAT_00049c00;
    iVar13 = uVar11 * 8;
    puVar10 = DAT_0002df58 + 0x20;
    auVar18 = VectorAdd(_DAT_00049c88,auVar21,4);
    puVar2 = (undefined2 *)0x3a0;
    puVar3 = (undefined2 *)0x3b0;
    lVar15 = 4;
    iVar5 = DAT_00049cd8;
    puVar6 = DAT_0002df58;
    puVar12 = DAT_0002df58;
    puVar14 = DAT_0002df58;
    while( true ) {
      *puVar2 = *puVar14;
      puVar14 = puVar14 + 1;
      *puVar3 = *puVar14;
      puVar14 = puVar14 + 1;
      lVar15 = lVar15 + -1;
      if (lVar15 == 0) break;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    puVar2 = (undefined2 *)0x3a8;
    puVar3 = (undefined2 *)0x3b8;
    lVar15 = 4;
    while( true ) {
      *puVar2 = *puVar14;
      puVar14 = puVar14 + 1;
      *puVar3 = *puVar14;
      puVar14 = puVar14 + 1;
      lVar15 = lVar15 + -1;
      if (lVar15 == 0) break;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    puVar12 = puVar12 + 0x10;
    iVar5 = iVar5 + 5;
    auVar22 = VectorCopyLong(in_q10._8_8_,2,1);
    auVar16 = VectorCopyLong(in_q10._0_8_,2,1);
    auVar19 = VectorAdd(*(undefined1 (*) [16])(puVar7 + 0x1e),auVar21,4);
    puVar2 = (undefined2 *)0x3a0;
    puVar3 = (undefined2 *)0x3b0;
    lVar15 = 4;
    iVar9 = DAT_000981e0;
    while( true ) {
      *puVar2 = *puVar12;
      puVar12 = puVar12 + 1;
      *puVar3 = *puVar12;
      puVar12 = puVar12 + 1;
      lVar15 = lVar15 + -1;
      if (lVar15 == 0) break;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    puVar2 = (undefined2 *)0x3a8;
    puVar3 = (undefined2 *)0x3b8;
    lVar15 = 4;
    while( true ) {
      *puVar2 = *puVar12;
      puVar12 = puVar12 + 1;
      *puVar3 = *puVar12;
      puVar12 = puVar12 + 1;
      lVar15 = lVar15 + -1;
      if (lVar15 == 0) break;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    VectorMultiply(auVar18,auVar22,4);
    iVar13 = (uint)(ushort)puVar6[0x30] * iVar5 + iVar13;
    auVar18 = VectorAdd(*(undefined1 (*) [16])(puVar7 + 0x26),auVar21,4);
    auVar22 = VectorCopyLong(in_q10._0_8_,2,1);
    auVar24 = VectorAdd(*(undefined1 (*) [16])(puVar7 + 0x2a),auVar21,4);
    iVar5 = puVar7[0x37];
    auVar23 = VectorCopyLong(in_q10._8_8_,2,1);
    puVar2 = (undefined2 *)0x3a0;
    puVar3 = (undefined2 *)0x3b0;
    lVar15 = 4;
    while( true ) {
      *puVar2 = *puVar10;
      puVar10 = puVar10 + 1;
      *puVar3 = *puVar10;
      puVar10 = puVar10 + 1;
      lVar15 = lVar15 + -1;
      if (lVar15 == 0) break;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    puVar2 = (undefined2 *)0x3a8;
    puVar3 = (undefined2 *)0x3b8;
    lVar15 = 4;
    while( true ) {
      *puVar2 = *puVar10;
      puVar10 = puVar10 + 1;
      *puVar3 = *puVar10;
      puVar10 = puVar10 + 1;
      lVar15 = lVar15 + -1;
      if (lVar15 == 0) break;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    VectorMultiplyAccumulate(auVar19,auVar16,4,0);
    auVar16 = VectorCopyLong(in_q10._0_8_,2,1);
    auVar19 = VectorAdd(*(undefined1 (*) [16])(puVar7 + 0x2e),auVar21,4);
    auVar20 = VectorCopyLong(in_q10._8_8_,2,1);
    VectorMultiplyAccumulate(auVar18,auVar22,4,0);
    auVar21 = VectorAdd(*(undefined1 (*) [16])(puVar7 + 0x32),auVar21,4);
    VectorMultiplyAccumulate(auVar24,auVar23,4,0);
    VectorMultiplyAccumulate(auVar19,auVar16,4,0);
    auVar21 = VectorMultiplyAccumulate(auVar21,auVar20,4,0);
    uVar17 = VectorAdd(auVar21._0_8_,auVar21._8_8_,4);
    uVar17 = VectorPairwiseAdd(uVar17,uVar17,4);
    if ((*(uint *)(puVar8 + -0xec) < uVar11 >> 1) &&
       ((int)uVar17 +
        (uint)(ushort)puVar6[0x3a] * (puVar7[0x3b] + 5) +
        (uint)(ushort)puVar6[0x38] * (puVar7[0x3a] + 5) +
        (uint)(ushort)puVar6[0x36] * (puVar7[0x39] + 5) +
        (uint)(ushort)puVar6[0x34] * (puVar7[0x38] + 5) +
        (uint)(ushort)puVar6[0x32] * (iVar5 + 5) + iVar13 >> 3 < (uint)(iVar9 - DAT_000881d4) >> 1))
    {
      return true;
    }
  }
  if (uVar11 == 0x7fff) {
    return true;
  }
  return *(int *)(puVar8 + -0xec) == 0x8000;
}



/* ===== FUN_0002df5c @ 0002df5c size=36 ===== */

void FUN_0002df5c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  DAT_0004bd34 = param_1;
  DAT_0004bd38 = param_2;
  DAT_0004bd40 = param_3;
  DAT_0004bd30 = 0;
  DAT_0004bd3c = 0;
  DAT_0004bd2c = 0;
  return;
}



/* ===== FUN_0002df80 @ 0002df80 size=168 ===== */

ulonglong FUN_0002df80(uint param_1,uint param_2)

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



/* ===== FUN_0002e028 @ 0002e028 size=32 ===== */

void FUN_0002e028(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_0002df80();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_0002e048 @ 0002e048 size=236 ===== */

ulonglong FUN_0002e048(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  if (param_2 == 0) {
    uVar2 = raise(8);
    return (ulonglong)uVar2;
  }
  uVar5 = param_1 ^ param_2;
  uVar2 = param_2;
  if ((int)param_2 < 0) {
    uVar2 = -param_2;
  }
  if (uVar2 - 1 == 0) {
    if ((int)param_2 < 0) {
      param_1 = -param_1;
    }
    return CONCAT44(uVar2,param_1);
  }
  uVar4 = param_1;
  if ((int)param_1 < 0) {
    uVar4 = -param_1;
  }
  if (uVar4 <= uVar2) {
    if (uVar4 < uVar2) {
      param_1 = 0;
    }
    if (uVar4 == uVar2) {
      param_1 = (int)uVar5 >> 0x1f | 1;
    }
    return CONCAT44(uVar2,param_1);
  }
  if ((uVar2 & uVar2 - 1) == 0) {
    uVar4 = uVar4 >> (0x1fU - LZCOUNT(uVar2) & 0xff);
    if ((int)uVar5 < 0) {
      uVar4 = -uVar4;
    }
    return CONCAT44(uVar2,uVar4);
  }
  uVar3 = uVar2 << (LZCOUNT(uVar2) - LZCOUNT(uVar4) & 0xffU);
  uVar2 = 1 << (LZCOUNT(uVar2) - LZCOUNT(uVar4) & 0xffU);
  uVar1 = 0;
  while( true ) {
    if (uVar3 <= uVar4) {
      uVar4 = uVar4 - uVar3;
      uVar1 = uVar1 | uVar2;
    }
    if (uVar3 >> 1 <= uVar4) {
      uVar4 = uVar4 - (uVar3 >> 1);
      uVar1 = uVar1 | uVar2 >> 1;
    }
    if (uVar3 >> 2 <= uVar4) {
      uVar4 = uVar4 - (uVar3 >> 2);
      uVar1 = uVar1 | uVar2 >> 2;
    }
    if (uVar3 >> 3 <= uVar4) {
      uVar4 = uVar4 - (uVar3 >> 3);
      uVar1 = uVar1 | uVar2 >> 3;
    }
    bVar6 = uVar4 == 0;
    if (!bVar6) {
      uVar2 = uVar2 >> 4;
      bVar6 = uVar2 == 0;
    }
    if (bVar6) break;
    uVar3 = uVar3 >> 4;
  }
  if ((int)uVar5 < 0) {
    uVar1 = -uVar1;
  }
  return CONCAT44(uVar3,uVar1);
}



/* ===== _DT_FINI @ 0002e154 size=16 ===== */

void _DT_FINI(void)

{
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00099000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 00099004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 00099008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 0009900c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mkstemp @ 00099010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mkstemp(char *__template)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 00099014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setvbuf @ 00099018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setvbuf(FILE *__stream,char *__buf,int __modes,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rename @ 0009901c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rename(char *__old,char *__new)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 00099020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clearerr @ 00099024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void clearerr(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::tcgetattr @ 00099028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tcgetattr(int __fd,termios *__termios_p)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::isatty @ 0009902c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int isatty(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 00099030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputc @ 00099034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 00099038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::opendir @ 0009903c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * opendir(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strrchr @ 00099040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 00099044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::stpcpy @ 00099048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * stpcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::time @ 0009904c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 00099050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __fputc_unlocked(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::asctime @ 00099054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * asctime(tm *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__fgetc_unlocked @ 00099058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __fgetc_unlocked(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sscanf @ 0009905c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rmdir @ 00099060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rmdir(char *__path)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncat @ 00099064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncat(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen @ 00099068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::localtime @ 0009906c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * localtime(time_t *__timer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 00099070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::open @ 00099074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 00099078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 0009907c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 00099080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memmove @ 00099084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 00099088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 0009908c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::perror @ 00099090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 00099094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::qsort @ 00099098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void qsort(void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcat @ 0009909c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ferror @ 000990a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ferror(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fread @ 000990a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::read @ 000990a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mktime @ 000990ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t mktime(tm *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fdopen @ 000990b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fdopen(int __fd,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::tcsetattr @ 000990b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tcsetattr(int __fd,int __optional_actions,termios *__termios_p)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::system @ 000990b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int system(char *__command)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::signal @ 000990bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::tzset @ 000990c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void tzset(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 000990c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::realloc @ 000990c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 000990cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fileno @ 000990d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fileno(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::closedir @ 000990d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int closedir(DIR *__dirp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 000990d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::towupper @ 000990dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

wint_t towupper(wint_t __wc)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 000990e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::readlink @ 000990e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t readlink(char *__path,char *__buf,size_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fgetc @ 000990e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fgetc(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 000990ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::chmod @ 000990f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int chmod(char *__file,__mode_t __mode)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 000990f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mbstowcs @ 000990f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t mbstowcs(wchar_t *__pwcs,char *__s,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ftell @ 000990fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long ftell(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::lstat @ 00099100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int lstat(char *__file,stat *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ungetc @ 00099104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ungetc(int __c,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::raise @ 00099108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getenv @ 0009910c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::unlink @ 00099110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unlink(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setlocale @ 00099114 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * setlocale(int __category,char *__locale)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::utime @ 00099118 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int utime(char *__file,utimbuf *__file_times)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strstr @ 0009911c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::putchar @ 00099120 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_stdlib_mb_cur_max @ 00099124 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _stdlib_mb_cur_max(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00099128 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getpid @ 0009912c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::readdir @ 00099130 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent * readdir(DIR *__dirp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fstat @ 00099134 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstat(int __fd,stat *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strchr @ 00099138 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rand @ 0009913c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rand(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fseek @ 00099140 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 00099144 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::srand @ 00099148 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void srand(uint __seed)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::stat @ 0009914c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat(char *__file,stat *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fgets @ 00099150 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::wctomb @ 00099154 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int wctomb(char *__s,wchar_t __wchar)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 00099158 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::feof @ 0009915c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int feof(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 00099160 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rewind @ 00099164 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rewind(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


