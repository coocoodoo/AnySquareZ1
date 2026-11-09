// iostat — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _DT_INIT @ 00010f3c size=16 ===== */

void _DT_INIT(void)

{
  return;
}



/* ===== <EXTERNAL>::putchar @ 00010f60 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putchar_0002b00c)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::strcpy @ 00010f6c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_0002b010)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::ioctl @ 00010f78 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_0002b014)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::pause @ 00010f84 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pause(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pause_0002b018)();
  return iVar1;
}



/* ===== <EXTERNAL>::sysconf @ 00010f90 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long sysconf(int __name)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_sysconf_0002b01c)(__name);
  return lVar1;
}



/* ===== <EXTERNAL>::printf @ 00010f9c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_0002b020)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::strerror @ 00010fa8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_0002b024)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::__xpg_basename @ 00010fb4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * __xpg_basename(char *__path)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR___xpg_basename_0002b028)(__path);
  return pcVar1;
}



/* ===== <EXTERNAL>::snprintf @ 00010fc0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_0002b02c)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::atol @ 00010fcc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long atol(char *__nptr)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_atol_0002b030)(__nptr);
  return lVar1;
}



/* ===== <EXTERNAL>::getenv @ 00010fd8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_getenv_0002b034)(__name);
  return pcVar1;
}



/* ===== <EXTERNAL>::fscanf @ 00010fe4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fscanf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fscanf_0002b038)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::fgets @ 00010ff0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_fgets_0002b03c)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::gnu_dev_major @ 00010ffc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint gnu_dev_major(ulonglong __dev)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_gnu_dev_major_0002b040)((int)__dev,(int)(__dev >> 0x20));
  return uVar1;
}



/* ===== <EXTERNAL>::memcpy @ 00011008 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_0002b044)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::perror @ 00011014 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
  (*(code *)PTR_perror_0002b048)(__s);
  return;
}



/* ===== <EXTERNAL>::readlink @ 00011020 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t readlink(char *__path,char *__buf,size_t __len)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_readlink_0002b04c)(__path);
  return sVar1;
}



/* ===== <EXTERNAL>::puts @ 0001102c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_0002b050)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::malloc @ 00011038 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0002b054)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::isatty @ 00011044 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int isatty(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_isatty_0002b058)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::vsnprintf @ 00011050 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vsnprintf_0002b05c)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::strtoul @ 0001105c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
  ulong uVar1;
  
  uVar1 = (*(code *)PTR_strtoul_0002b060)(__nptr);
  return uVar1;
}



/* ===== <EXTERNAL>::readdir @ 00011068 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent * readdir(DIR *__dirp)

{
  dirent *pdVar1;
  
  pdVar1 = (dirent *)(*(code *)PTR_readdir_0002b064)(__dirp);
  return pdVar1;
}



/* ===== <EXTERNAL>::realpath @ 00011074 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * realpath(char *__name,char *__resolved)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_realpath_0002b068)(__name);
  return pcVar1;
}



/* ===== <EXTERNAL>::gnu_dev_minor @ 00011080 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint gnu_dev_minor(ulonglong __dev)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_gnu_dev_minor_0002b06c)((int)__dev,(int)(__dev >> 0x20));
  return uVar1;
}



/* ===== <EXTERNAL>::abort @ 0001108c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_0002b070)();
  return;
}



/* ===== <EXTERNAL>::gmtime_r @ 00011098 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * gmtime_r(time_t *__timer,tm *__tp)

{
  tm *ptVar1;
  
  ptVar1 = (tm *)(*(code *)PTR_gmtime_r_0002b074)(__timer);
  return ptVar1;
}



/* ===== <EXTERNAL>::alarm @ 000110a4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint alarm(uint __seconds)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_alarm_0002b078)(__seconds);
  return uVar1;
}



/* ===== <EXTERNAL>::strtol @ 000110b0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_strtol_0002b07c)(__nptr);
  return lVar1;
}



/* ===== <EXTERNAL>::strnlen @ 000110bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strnlen(char *__string,size_t __maxlen)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strnlen_0002b080)(__string);
  return sVar1;
}



/* ===== <EXTERNAL>::uname @ 000110c8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int uname(utsname *__name)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_uname_0002b084)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::calloc @ 000110d4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_0002b088)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::write @ 000110e0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_write_0002b08c)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::fprintf @ 000110ec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_0002b090)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 000110f8 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_0002b094)();
  return;
}



/* ===== <EXTERNAL>::scandir @ 00011104 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int scandir(char *__dir,dirent ***__namelist,__selector *__selector,__cmp *__cmp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_scandir_0002b098)(__dir);
  return iVar1;
}



/* ===== <EXTERNAL>::strstr @ 00011110 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strstr_0002b09c)(__haystack);
  return pcVar1;
}



/* ===== <EXTERNAL>::strncmp @ 0001111c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_0002b0a0)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::alphasort @ 00011128 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int alphasort(dirent **__e1,dirent **__e2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_alphasort_0002b0a4)(__e1);
  return iVar1;
}



/* ===== <EXTERNAL>::strncpy @ 00011134 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_0002b0a8)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::strtok @ 00011140 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strtok(char *__s,char *__delim)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strtok_0002b0ac)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::sscanf @ 0001114c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sscanf_0002b0b0)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::sigaction @ 00011158 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigaction(int __sig,sigaction *__act,sigaction *__oact)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sigaction_0002b0b4)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::fopen @ 00011170 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen_0002b0bc)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::memset @ 0001117c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0002b0c0)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::fclose @ 00011188 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_0002b0c4)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::time @ 00011194 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_0002b0c8)(__timer);
  return tVar1;
}



/* ===== <EXTERNAL>::opendir @ 000111a0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * opendir(char *__name)

{
  DIR *pDVar1;
  
  pDVar1 = (DIR *)(*(code *)PTR_opendir_0002b0cc)(__name);
  return pDVar1;
}



/* ===== <EXTERNAL>::strcmp @ 000111ac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_0002b0d0)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::sprintf @ 000111b8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_0002b0d4)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::strcspn @ 000111c4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strcspn(char *__s,char *__reject)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strcspn_0002b0d8)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::setlocale @ 000111d0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * setlocale(int __category,char *__locale)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_setlocale_0002b0dc)(__category);
  return pcVar1;
}



/* ===== <EXTERNAL>::localtime_r @ 000111dc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * localtime_r(time_t *__timer,tm *__tp)

{
  tm *ptVar1;
  
  ptVar1 = (tm *)(*(code *)PTR_localtime_r_0002b0e0)(__timer);
  return ptVar1;
}



/* ===== <EXTERNAL>::strftime @ 000111e8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strftime(char *__s,size_t __maxsize,char *__format,tm *__tp)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strftime_0002b0e4)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::stat @ 000111f4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat(char *__file,stat *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_stat_0002b0e8)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::fwrite @ 00011200 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_0002b0ec)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::access @ 0001120c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_access_0002b0f0)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 00011218 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_0002b0f4)();
  return piVar1;
}



/* ===== <EXTERNAL>::exit @ 00011224 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_0002b0f8)(__status);
  return;
}



/* ===== <EXTERNAL>::setbuf @ 00011230 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void setbuf(FILE *__stream,char *__buf)

{
  (*(code *)PTR_setbuf_0002b0fc)(__stream);
  return;
}



/* ===== <EXTERNAL>::atoi @ 0001123c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_0002b100)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::strspn @ 00011248 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strspn(char *__s,char *__accept)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strspn_0002b104)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::strlen @ 00011254 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_0002b108)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::strchr @ 00011260 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_0002b10c)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::closedir @ 0001126c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int closedir(DIR *__dirp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_closedir_0002b110)(__dirp);
  return iVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00011278 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_0002b114)();
  return;
}



/* ===== <EXTERNAL>::raise @ 00011284 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_0002b118)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 00011290 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0002b11c)(__ptr);
  return;
}



/* ===== entry @ 00011ba4 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_0002b0b8)
            (DAT_00011bd8,param_2,&stack0x00000004,DAT_00011bdc,DAT_00011bd4,param_1);
  return;
}



/* ===== FUN_00011be0 @ 00011be0 size=32 ===== */

void FUN_00011be0(void)

{
  if (DAT_00011c04 == DAT_00011c00) {
    return;
  }
  if (DAT_00011c08 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011c08)();
  return;
}



/* ===== _FINI_0 @ 00011c44 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00011c80;
  if (*DAT_00011c80 != '\0') {
    return;
  }
  FUN_00011be0();
  if (DAT_00011c84 != 0) {
    __deregister_frame_info(DAT_00011c88);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00011c8c size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00011cb0 != 0) {
    __register_frame_info(DAT_00011cb8,DAT_00011cb4);
  }
  if ((DAT_00011c3c - DAT_00011c38 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00011c40 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011c40)();
  return;
}



/* ===== FUN_00011ce4 @ 00011ce4 size=1336 ===== */

void FUN_00011ce4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,int param_7,int param_8,undefined4 param_9,
                 int param_10,int param_11)

{
  char *pcVar1;
  undefined4 extraout_r1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint in_fpscr;
  double dVar7;
  double unaff_d11;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  char acStack_168 [260];
  
  FUN_00016ccc(param_1,"{\"disk_device\": \"%s\", ",param_9);
  uVar3 = *(uint *)(param_7 + 0xc);
  if ((DAT_0002b210 & 0x200000) == 0) {
    uVar5 = extraout_r1;
    dVar8 = DAT_00011ef0;
    if (*(uint *)(param_8 + 0xc) <= uVar3) {
      dVar8 = (double)VectorUnsignedToFloat
                                (uVar3 - *(uint *)(param_8 + 0xc),(byte)(in_fpscr >> 0x16) & 3);
      dVar7 = (double)FUN_00019388(param_3,param_4);
      uVar5 = (undefined4)((ulonglong)dVar7 >> 0x20);
      dVar8 = (dVar8 / dVar7) * DAT_00011ef8;
    }
    dVar7 = DAT_00011ef0;
    if (*(uint *)(param_8 + 0x14) <= *(uint *)(param_7 + 0x14)) {
      dVar7 = (double)VectorUnsignedToFloat
                                (*(uint *)(param_7 + 0x14) - *(uint *)(param_8 + 0x14),
                                 (byte)(in_fpscr >> 0x16) & 3);
      dVar9 = (double)FUN_00019388(param_3,param_4);
      uVar5 = (undefined4)((ulonglong)dVar9 >> 0x20);
      dVar7 = (dVar7 / dVar9) * DAT_00011ef8;
    }
    dVar9 = DAT_00011ef0;
    if (*(uint *)(param_8 + 0x1c) <= *(uint *)(param_7 + 0x1c)) {
      dVar9 = (double)VectorUnsignedToFloat
                                (*(uint *)(param_7 + 0x1c) - *(uint *)(param_8 + 0x1c),
                                 (byte)(in_fpscr >> 0x16) & 3);
      dVar10 = (double)FUN_00019388(param_3,param_4);
      uVar5 = (undefined4)((ulonglong)dVar10 >> 0x20);
      dVar9 = (dVar9 / dVar10) * DAT_00011ef8;
    }
    dVar10 = DAT_00011ef0;
    if (*(uint *)(param_8 + 0x24) <= *(uint *)(param_7 + 0x24)) {
      dVar10 = (double)VectorUnsignedToFloat
                                 (*(uint *)(param_7 + 0x24) - *(uint *)(param_8 + 0x24),
                                  (byte)(in_fpscr >> 0x16) & 3);
      dVar11 = (double)FUN_00019388(param_3,param_4);
      uVar5 = (undefined4)((ulonglong)dVar11 >> 0x20);
      dVar10 = (dVar10 / dVar11) * DAT_00011ef8;
    }
    printf("\"r/s\": %.2f, \"w/s\": %.2f, \"d/s\": %.2f, \"f/s\": %.2f, ",uVar5,SUB84(dVar8,0),
           (int)((ulonglong)dVar8 >> 0x20),dVar7,dVar9,dVar10);
    if ((DAT_0002b210 & 0x200) == 0) {
      if ((DAT_0002b210 & 0x20) == 0) {
        pcVar1 = "\"rsec/s\": %%.2f, \"wsec/s\": %%.2f, \"dsec/s\": %%.2f, ";
      }
      else {
        pcVar1 = "\"rkB/s\": %%.2f, \"wkB/s\": %%.2f, \"dkB/s\": %%.2f, ";
      }
      sprintf(acStack_168,pcVar1);
    }
    else {
      sprintf(acStack_168,"\"rMB/s\": %%.2f, \"wMB/s\": %%.2f, \"dMB/s\": %%.2f, ");
    }
    dVar8 = (double)VectorSignedToFloat(param_5,(byte)(in_fpscr >> 0x16) & 3);
    dVar9 = *(double *)(param_11 + 0x28) / dVar8;
    dVar7 = *(double *)(param_11 + 0x30) / dVar8;
    *(double *)(param_11 + 0x20) = *(double *)(param_11 + 0x20) / dVar8;
    *(double *)(param_11 + 0x28) = dVar9;
    *(double *)(param_11 + 0x30) = dVar7;
    printf(acStack_168);
    uVar3 = *(uint *)(param_8 + 0x10);
    if (uVar3 <= *(uint *)(param_7 + 0x10)) {
      iVar2 = *(uint *)(param_7 + 0x10) - uVar3;
      VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
      FUN_00019388(param_3,param_4,uVar3,iVar2,dVar9,dVar7);
    }
    uVar3 = *(uint *)(param_8 + 0x18);
    if (uVar3 <= *(uint *)(param_7 + 0x18)) {
      iVar2 = *(uint *)(param_7 + 0x18) - uVar3;
      VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
      FUN_00019388(param_3,param_4,uVar3,iVar2,dVar9,dVar7);
    }
    uVar3 = *(uint *)(param_8 + 0x20);
    if (uVar3 <= *(uint *)(param_7 + 0x20)) {
      iVar2 = *(uint *)(param_7 + 0x20) - uVar3;
      VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
      FUN_00019388(param_3,param_4,uVar3,iVar2,dVar9,dVar7);
    }
    uVar3 = *(uint *)(param_8 + 0x40);
    if (uVar3 <= *(uint *)(param_7 + 0x40)) {
      iVar2 = *(uint *)(param_7 + 0x40) - uVar3;
      VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
      FUN_00019388(param_3,param_4,uVar3,iVar2,dVar9,dVar7);
    }
    printf(
          "\"rrqm/s\": %.2f, \"wrqm/s\": %.2f, \"drqm/s\": %.2f, \"rrqm\": %.2f, \"wrqm\": %.2f, \"drqm\": %.2f, \"r_await\": %.2f, \"w_await\": %.2f, \"d_await\": %.2f, \"f_await\": %.2f, \"rareq-sz\": %.2f, \"wareq-sz\": %.2f, \"dareq-sz\": %.2f, \"aqu-sz\": %.2f, "
          );
  }
  else {
    iVar2 = *(int *)(param_8 + 0x1c);
    uVar4 = uVar3 + *(int *)(param_7 + 0x14) + *(int *)(param_7 + 0x1c);
    uVar3 = *(int *)(param_8 + 0xc) + *(int *)(param_8 + 0x14) + iVar2;
    dVar8 = DAT_00011ef0;
    if (uVar3 <= uVar4) {
      dVar8 = (double)VectorUnsignedToFloat(uVar4 - uVar3,(byte)(in_fpscr >> 0x16) & 3);
      dVar7 = (double)FUN_00019388(param_3,param_4);
      iVar2 = (int)((ulonglong)dVar7 >> 0x20);
      dVar8 = (dVar8 / dVar7) * DAT_00011ef8;
    }
    printf("\"tps\": %.2f, \"",iVar2,SUB84(dVar8,0),(int)((ulonglong)dVar8 >> 0x20));
    if ((DAT_0002b210 & 0x200) == 0) {
      if ((DAT_0002b210 & 0x20) == 0) {
        pcVar1 = "sec/s";
      }
      else {
        pcVar1 = "kB/s";
      }
      printf(pcVar1);
    }
    else {
      printf("MB/s");
    }
    dVar8 = (double)VectorSignedToFloat(param_5,(byte)(in_fpscr >> 0x16) & 3);
    uVar4 = *(int *)(param_7 + 0x10) + *(int *)(param_7 + 0x18) + *(int *)(param_7 + 0x20);
    iVar2 = *(int *)(param_8 + 0x20);
    uVar3 = *(int *)(param_8 + 0x10) + *(int *)(param_8 + 0x18) + iVar2;
    if (uVar4 < uVar3) {
      unaff_d11 = DAT_00011ef0;
    }
    dVar8 = *(double *)(param_11 + 0x38) / dVar8;
    *(double *)(param_11 + 0x38) = dVar8;
    if (uVar4 >= uVar3) {
      dVar7 = (double)VectorUnsignedToFloat(uVar4 - uVar3,(byte)(in_fpscr >> 0x16) & 3);
      dVar9 = (double)FUN_00019388(param_3,param_4);
      iVar2 = (int)((ulonglong)dVar9 >> 0x20);
      unaff_d11 = (dVar7 / dVar9) * DAT_00011ef8;
    }
    dVar9 = *(double *)(param_10 + 0x10);
    uVar5 = *(undefined4 *)(param_10 + 8);
    uVar6 = *(undefined4 *)(param_10 + 0xc);
    dVar7 = DAT_00011ef0;
    if (*(uint *)(param_8 + 0x40) <= *(uint *)(param_7 + 0x40)) {
      dVar7 = (double)VectorUnsignedToFloat
                                (*(uint *)(param_7 + 0x40) - *(uint *)(param_8 + 0x40),
                                 (byte)(in_fpscr >> 0x16) & 3);
      dVar10 = (double)FUN_00019388(param_3,param_4);
      iVar2 = (int)((ulonglong)dVar10 >> 0x20);
      dVar7 = ((dVar7 / dVar10) * DAT_00011ef8) / DAT_00011f00;
    }
    printf("\": %.2f, \"rqm/s\": %.2f, \"await\": %.2f, \"areq-sz\": %.2f, \"aqu-sz\": %.2f, ",iVar2
           ,SUB84(dVar8,0),(int)((ulonglong)dVar8 >> 0x20),unaff_d11,uVar5,uVar6,dVar9 * 0.5,dVar7);
  }
  if (3 < *(int *)(param_6 + 0x80)) {
    VectorSignedToFloat(*(int *)(param_6 + 0x80) + -3,(byte)(in_fpscr >> 0x16) & 3);
  }
  printf("\"util\": %.2f}");
  return;
}



/* ===== FUN_00012238 @ 00012238 size=64 ===== */

void FUN_00012238(undefined4 param_1)

{
  fprintf(stderr,"Usage: %s [ options ] [ <interval> [ <count> ] ]\n",param_1);
  fwrite("Options are:\n[ -c ] [ -d ] [ -h ] [ -k | -m ] [ -N ] [ -s ] [ -t ] [ -V ] [ -x ] [ -y ] [ -z ]\n[ { -f | +f } <directory> ] [ -j { ID | LABEL | PATH | UUID | ... } ]\n[ --compact ] [ --dec={ 0 | 1 | 2 } ] [ --human ] [ --pretty ] [ -o JSON ]\n[ [ -H ] -g <group_name> ] [ -p [ <device> [,...] | ALL ] ]\n[ <device> [...] | ALL ]\n"
         ,1,0x145,stderr);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00012278 @ 00012278 size=56 ===== */

void FUN_00012278(void)

{
  char *pcVar1;
  
  if ((DAT_0002b210 & 0x220) == 0) {
    pcVar1 = getenv("POSIXLY_CORRECT");
    if (pcVar1 == (char *)0x0) {
      DAT_0002b210 = DAT_0002b210 | 0x20;
    }
    return;
  }
  return;
}



/* ===== FUN_000122b0 @ 000122b0 size=156 ===== */

char * FUN_000122b0(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  ssize_t sVar3;
  char *pcVar4;
  char acStack_2008 [4096];
  char acStack_1008 [4096];
  
  uVar1 = snprintf(acStack_2008,0x1000,"%s/%s","/dev/mapper",param_1);
  if (((uVar1 < 0x1000) && (iVar2 = access(acStack_2008,0), iVar2 == 0)) &&
     (sVar3 = readlink(acStack_2008,acStack_1008,0x1000), sVar3 - 1U < 0xfff)) {
    acStack_1008[sVar3] = '\0';
    pcVar4 = __xpg_basename(acStack_1008);
    return pcVar4;
  }
  return (char *)0x0;
}



/* ===== FUN_0001234c @ 0001234c size=80 ===== */

void FUN_0001234c(void)

{
  DAT_00031130 = calloc(0xa0,1);
  if (DAT_00031130 != (void *)0x0) {
    DAT_00031134 = calloc(0xa0,1);
    if (DAT_00031134 != (void *)0x0) {
      return;
    }
  }
  perror("malloc");
                    /* WARNING: Subroutine does not return */
  exit(4);
}



/* ===== FUN_000123bc @ 000123bc size=192 ===== */

undefined4 FUN_000123bc(char *param_1,uint *param_2,uint *param_3)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  stat sStack_478;
  char acStack_420 [1023];
  undefined1 local_21;
  
  pcVar1 = "";
  if (*param_1 != '/') {
    pcVar1 = "/dev/";
  }
  snprintf(acStack_420,0x400,"%s%s",pcVar1,param_1);
  local_21 = 0;
  while (pcVar1 = strchr(acStack_420,0x21), pcVar1 != (char *)0x0) {
    *pcVar1 = '/';
  }
  iVar2 = stat(acStack_420,&sStack_478);
  if (iVar2 < 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar3 = gnu_dev_major(sStack_478.st_rdev);
    *param_2 = uVar3;
    uVar3 = gnu_dev_minor(sStack_478.st_rdev);
    *param_3 = uVar3;
    uVar4 = 0;
  }
  return uVar4;
}



/* ===== FUN_0001247c @ 0001247c size=620 ===== */

char * FUN_0001247c(int *param_1,char *param_2,int param_3,int param_4,undefined4 param_5)

{
  size_t sVar1;
  int iVar2;
  void *pvVar3;
  char *__src;
  uint uVar4;
  char *__s1;
  char *__dest;
  undefined4 local_28;
  undefined4 auStack_24 [2];
  
  sVar1 = strnlen(param_2,0x80);
  if (sVar1 == 0x80) {
    return (char *)0x0;
  }
  __s1 = (char *)*param_1;
  if (__s1 != (char *)0x0) {
    uVar4 = DAT_0002b210 & 0x810;
    do {
      iVar2 = strcmp(__s1,param_2);
      if (iVar2 == 0) {
        if ((param_3 == 2) && (*(int *)(__s1 + 0x80) == 1)) {
          __s1[0x80] = '\x02';
          __s1[0x81] = '\0';
          __s1[0x82] = '\0';
          __s1[0x83] = '\0';
        }
        __s1[0x84] = '\x01';
        __s1[0x85] = '\0';
        __s1[0x86] = '\0';
        __s1[0x87] = '\0';
        return __s1;
      }
      if (0 < iVar2 && uVar4 == 0) break;
      param_1 = (int *)(__s1 + 0x98);
      __s1 = *(char **)(__s1 + 0x98);
    } while (__s1 != (char *)0x0);
  }
  pvVar3 = malloc(0x9c);
  *param_1 = (int)pvVar3;
  if (pvVar3 == (void *)0x0) {
LAB_000126d4:
    perror("malloc");
                    /* WARNING: Subroutine does not return */
    exit(4);
  }
  memset(pvVar3,0,0x9c);
  __dest = (char *)*param_1;
  pvVar3 = malloc(0x48);
  *(void **)(__dest + 0x90) = pvVar3;
  if (pvVar3 == (void *)0x0) goto LAB_000126d4;
  memset(pvVar3,0,0x48);
  pvVar3 = malloc(0x48);
  *(void **)(__dest + 0x94) = pvVar3;
  if (pvVar3 == (void *)0x0) goto LAB_000126d4;
  memset(pvVar3,0,0x48);
  if ((DAT_0002b210 & 0x10000) == 0) {
    strncpy(__dest,param_2,0x80);
  }
  else {
    __src = (char *)FUN_000122b0(param_2);
    if (__src == (char *)0x0) {
      __src = param_2;
    }
    strncpy(__dest,__src,0x7f);
  }
  *(char **)(__dest + 0x98) = __s1;
  __dest[0x7f] = '\0';
  if (param_3 == 3) {
    __dest[0x80] = '\x03';
    __dest[0x81] = '\0';
    __dest[0x82] = '\0';
    __dest[0x83] = '\0';
  }
  __dest[0x84] = '\x01';
  __dest[0x85] = '\0';
  __dest[0x86] = '\0';
  __dest[0x87] = '\0';
  if (param_3 == 3) {
    return __dest;
  }
  if ((DAT_00030ef0 == '\0') || ((DAT_0002b210 & 0x40) != 0)) {
    iVar2 = FUN_00016770(&DAT_000199a8,param_2,1);
    if (DAT_00030ef0 == '\0') goto LAB_000126a0;
    uVar4 = ((DAT_0002b210 ^ 0x40) & 0x7f) >> 6;
    if (iVar2 == 0) {
      uVar4 = 1;
    }
    if (uVar4 != 0) goto LAB_0001268c;
  }
  else {
LAB_0001268c:
    iVar2 = FUN_00016770(&DAT_00030ef0,param_2,1);
LAB_000126a0:
    if (iVar2 == 0) {
      __dest[0x80] = '\0';
      __dest[0x81] = '\0';
      __dest[0x82] = '\0';
      __dest[0x83] = '\0';
      goto joined_r0x00012644;
    }
  }
  if (param_3 != 2) {
    param_3 = 1;
  }
  *(int *)(__dest + 0x80) = param_3;
joined_r0x00012644:
  if (param_4 == 0) {
    iVar2 = FUN_000123bc(__dest,&local_28,auStack_24);
    if (iVar2 == 0) {
      *(undefined4 *)(__dest + 0x88) = local_28;
      *(undefined4 *)(__dest + 0x8c) = auStack_24[0];
    }
    return __dest;
  }
  *(int *)(__dest + 0x88) = param_4;
  *(undefined4 *)(__dest + 0x8c) = param_5;
  return __dest;
}



/* ===== FUN_000126e8 @ 000126e8 size=428 ===== */

undefined4 FUN_000126e8(char *param_1,void *param_2)

{
  FILE *__stream;
  int iVar1;
  undefined4 uVar2;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  __stream = fopen(param_1,"r");
  if (__stream == (FILE *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = fscanf(__stream,"%lu %lu %lu %lu %lu %lu %lu %u %u %u %u %lu %lu %lu %u %lu %u",
                   &local_84,&local_80,&local_74,&local_6c,&local_7c,&local_78,&local_70,&local_90,
                   &local_9c,&local_98,&local_94,&local_68,&local_64,&local_60,&local_8c,&local_5c,
                   &local_88);
    memset(&local_58,0,0x48);
    if (iVar1 < 0xb) {
      if (iVar1 == 4) {
        local_4c = local_84;
        local_58 = local_80;
        local_44 = local_74;
        local_54 = local_6c;
      }
    }
    else {
      local_4c = local_84;
      local_48 = local_80;
      local_58 = local_74;
      local_30 = local_6c;
      local_44 = local_7c;
      local_40 = local_78;
      local_54 = local_70;
      local_2c = local_90;
      local_20 = local_9c;
      local_1c = local_98;
      uStack_18 = local_94;
      if (0xe < iVar1) {
        local_3c = local_68;
        local_38 = local_64;
        local_50 = local_60;
        local_28 = local_8c;
      }
      if (0x10 < iVar1) {
        local_34 = local_5c;
        local_24 = local_88;
      }
    }
    memcpy(param_2,&local_58,0x48);
    fclose(__stream);
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== FUN_00012894 @ 00012894 size=276 ===== */

void FUN_00012894(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char acStack_420 [1023];
  undefined1 local_21;
  
  if ((DAT_00030ef0 == '\0') || ((DAT_0002b210 & 0x40) != 0)) {
    snprintf(acStack_420,0x400,"%s/%s/%s/%s",&DAT_000199a8,"block",param_1,&DAT_000199fc);
    local_21 = 0;
    iVar1 = FUN_000126e8(acStack_420,param_2);
    if (DAT_00030ef0 == '\0') {
      return;
    }
    if (-1 < (int)((DAT_0002b210 ^ 0x40) << 0x19) && -1 < iVar1) {
      return;
    }
  }
  snprintf(acStack_420,0x400,"%s/%s/%s/%s",&DAT_00030ef0,"block",param_1,&DAT_000199fc);
  local_21 = 0;
  FUN_000126e8(acStack_420,param_2);
  return;
}



/* ===== FUN_000129a8 @ 000129a8 size=300 ===== */

undefined4 FUN_000129a8(int param_1,undefined4 param_2,undefined4 param_3)

{
  DIR *__dirp;
  dirent *pdVar1;
  int iVar2;
  undefined4 uVar3;
  char *__s1;
  undefined1 auStack_a68 [72];
  char acStack_a20 [1023];
  undefined1 local_621;
  char acStack_620 [1535];
  undefined1 local_21;
  
  snprintf(acStack_a20,0x400,"%s/%s/%s",param_3,"block",param_2);
  local_621 = 0;
  __dirp = opendir(acStack_a20);
  if (__dirp == (DIR *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    while( true ) {
      pdVar1 = readdir(__dirp);
      __s1 = pdVar1->d_name;
      if (pdVar1 == (dirent *)0x0) break;
      iVar2 = strcmp(__s1,".");
      if (iVar2 != 0) {
        iVar2 = strcmp(__s1,"..");
        if (iVar2 != 0) {
          snprintf(acStack_620,0x600,"%s/%s/%s",acStack_a20,__s1,&DAT_000199fc);
          local_21 = 0;
          iVar2 = FUN_000126e8(acStack_620,auStack_a68);
          if (-1 < iVar2) {
            iVar2 = FUN_0001247c(DAT_00012ad4,__s1,0,0,0);
            if (iVar2 != 0) {
              memcpy(*(void **)(iVar2 + (param_1 + 0x24) * 4),auStack_a68,0x48);
            }
          }
        }
      }
    }
    closedir(__dirp);
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== FUN_00012ad8 @ 00012ad8 size=136 ===== */

void FUN_00012ad8(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  
  if ((DAT_00030ef0 == '\0') || ((DAT_0002b210 & 0x40) != 0)) {
    uVar1 = FUN_000129a8(param_1,param_2,&DAT_000199a8);
    if (DAT_00030ef0 == '\0') {
      return;
    }
    if (-1 < (int)((DAT_0002b210 ^ 0x40) << 0x19 | uVar1)) {
      return;
    }
  }
  FUN_000129a8(param_1,param_2,&DAT_00030ef0);
  return;
}



/* ===== FUN_00012b60 @ 00012b60 size=264 ===== */

undefined4 FUN_00012b60(int param_1,char *param_2)

{
  DIR *__dirp;
  dirent *pdVar1;
  int iVar2;
  undefined4 uVar3;
  char *__s1;
  undefined1 auStack_470 [72];
  char acStack_428 [1023];
  undefined1 local_29;
  
  __dirp = opendir(param_2);
  if (__dirp == (DIR *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    while( true ) {
      pdVar1 = readdir(__dirp);
      __s1 = pdVar1->d_name;
      if (pdVar1 == (dirent *)0x0) break;
      iVar2 = strcmp(__s1,".");
      if (iVar2 != 0) {
        iVar2 = strcmp(__s1,"..");
        if (iVar2 != 0) {
          snprintf(acStack_428,0x400,"%s/%s/%s",param_2,__s1,&DAT_000199fc);
          local_29 = 0;
          iVar2 = FUN_000126e8(acStack_428,auStack_470);
          if (-1 < iVar2) {
            iVar2 = FUN_0001247c(DAT_00012c68,__s1,0,0,0);
            if (iVar2 != 0) {
              memcpy(*(void **)(iVar2 + (param_1 + 0x24) * 4),auStack_470,0x48);
            }
          }
        }
      }
    }
    closedir(__dirp);
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== FUN_00012d1c @ 00012d1c size=120 ===== */

void FUN_00012d1c(int param_1,int param_2,undefined4 param_3)

{
  char acStack_410 [1023];
  undefined1 local_11;
  
  snprintf(acStack_410,0x400,"%s/%s/%d:%d/%s",param_3,"dev/block",*(undefined4 *)(param_2 + 0x88),
           *(undefined4 *)(param_2 + 0x8c),&DAT_000199fc);
  local_11 = 0;
  FUN_000126e8(acStack_410,*(undefined4 *)(param_2 + (param_1 + 0x24) * 4));
  return;
}



/* ===== FUN_00012d94 @ 00012d94 size=136 ===== */

void FUN_00012d94(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  
  if ((DAT_00030ef0 == '\0') || ((DAT_0002b210 & 0x40) != 0)) {
    uVar1 = FUN_00012d1c(param_1,param_2,&DAT_000199a8);
    if (DAT_00030ef0 == '\0') {
      return;
    }
    if (-1 < (int)((DAT_0002b210 ^ 0x40) << 0x19 | uVar1)) {
      return;
    }
  }
  FUN_00012d1c(param_1,param_2,&DAT_00030ef0);
  return;
}



/* ===== FUN_00012e1c @ 00012e1c size=368 ===== */

void FUN_00012e1c(int param_1)

{
  int iVar1;
  int iVar2;
  char acStack_408 [1008];
  
  if (DAT_0002b214 != 0) {
    iVar2 = DAT_0002b214;
LAB_00012e58:
    do {
      if (*(int *)(iVar2 + 0x84) == 0) {
        if (*(int *)(iVar2 + 0x80) == 0) {
          iVar1 = FUN_00012d94(param_1,iVar2);
          if (iVar1 == 0) {
            *(undefined4 *)(iVar2 + 0x84) = 1;
          }
          iVar2 = *(int *)(iVar2 + 0x98);
          if (iVar2 == 0) break;
          goto LAB_00012e58;
        }
        if (*(int *)(iVar2 + 0x80) - 1U < 2) {
          iVar1 = FUN_00012894(iVar2,*(undefined4 *)(iVar2 + (param_1 + 0x24) * 4));
          if (iVar1 == 0) {
            *(undefined4 *)(iVar2 + 0x84) = 1;
          }
          if (*(int *)(iVar2 + 0x80) == 2) {
            FUN_00012ad8(param_1,iVar2);
          }
        }
      }
      iVar2 = *(int *)(iVar2 + 0x98);
    } while (iVar2 != 0);
  }
  if ((DAT_0002b210 & 0x400) == 0) {
    return;
  }
  if (((DAT_00030ef0 == '\0') || ((DAT_0002b210 & 0x40) != 0)) &&
     (FUN_00012b60(param_1,"/sys/block"), DAT_00030ef0 == '\0')) {
    return;
  }
  snprintf(acStack_408,0x400,"%s/%s",&DAT_00030ef0,"block");
  FUN_00012b60(param_1,acStack_408);
  return;
}



/* ===== FUN_00012edc @ 00012edc size=544 ===== */

void FUN_00012edc(int param_1,char *param_2)

{
  int iVar1;
  FILE *__stream;
  char *pcVar2;
  int iVar3;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined1 local_21c [4];
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 uStack_1a8;
  undefined1 auStack_1a0 [128];
  char acStack_120 [260];
  
  __stream = fopen(param_2,"r");
  iVar1 = DAT_000130fc;
  if (__stream != (FILE *)0x0) {
LAB_00012f14:
    pcVar2 = fgets(acStack_120,0x100,__stream);
    if (pcVar2 != (char *)0x0) {
      memset(&local_1e8,0,0x48);
      iVar3 = sscanf(acStack_120,
                     "%u %u %s %lu %lu %lu %lu %lu %lu %lu %u %u %u %u %lu %lu %lu %u %lu %u",
                     &local_1f0,&local_1ec,auStack_1a0,local_21c,&local_218,&local_208,&local_214,
                     &local_210,&local_20c,&local_204,&local_228,&local_234,&local_230,&local_22c,
                     &local_200,&local_1fc,&local_1f8,&local_224,&local_1f4,&local_220);
      if (iVar3 < 0xe) goto LAB_000130b4;
      local_1d8 = local_218;
      local_1e8 = local_208;
      local_1c0 = local_214;
      local_1d4 = local_210;
      local_1d0 = local_20c;
      local_1e4 = local_204;
      local_1bc = local_228;
      local_1b0 = local_234;
      local_1ac = local_230;
      uStack_1a8 = local_22c;
      if (0x11 < iVar3) {
        local_1cc = local_200;
        local_1c8 = local_1fc;
        local_1e0 = local_1f8;
        local_1b8 = local_224;
      }
      if (0x13 < iVar3) {
        local_1c4 = local_1f4;
        local_1b4 = local_220;
      }
      goto LAB_00013078;
    }
    fclose(__stream);
  }
  return;
LAB_000130b4:
  if ((iVar3 == 7) && ((*(uint *)(iVar1 + -4) & 8) == 0)) {
    local_1e8 = local_218;
    local_1d4 = local_208;
    local_1e4 = local_214;
LAB_00013078:
    iVar3 = FUN_0001247c(iVar1,auStack_1a0,0,local_1f0,local_1ec);
    if (iVar3 != 0) {
      memcpy(*(void **)(iVar3 + (param_1 + 0x24) * 4),&local_1e8,0x48);
    }
  }
  goto LAB_00012f14;
}



/* ===== FUN_00013158 @ 00013158 size=176 ===== */

void FUN_00013158(undefined4 param_1)

{
  char acStack_408 [1016];
  
  if (((DAT_00030ef0 == '\0') || ((DAT_0002b210 & 0x40) != 0)) &&
     (FUN_00012edc(param_1,"/proc/diskstats"), DAT_00030ef0 == '\0')) {
    return;
  }
  snprintf(acStack_408,0x400,"%s/%s",&DAT_00030ef0,"diskstats");
  FUN_00012edc(param_1,acStack_408);
  return;
}



/* ===== FUN_000131b0 @ 000131b0 size=328 ===== */

void FUN_000131b0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  piVar2 = *(int **)(param_2 + (param_1 + 0x24) * 4);
  iVar8 = piVar2[5];
  iVar5 = piVar2[7];
  iVar4 = piVar2[9];
  if ((((DAT_0002b210 & 0x100) == 0 && (piVar2[3] == 0 && iVar8 == 0)) && iVar5 == 0) && iVar4 == 0)
  {
    return;
  }
  piVar3 = *(int **)(param_3 + (param_1 + 0x24) * 4);
  iVar1 = piVar2[4];
  iVar7 = *piVar2;
  iVar6 = piVar2[10];
  piVar3[3] = piVar3[3] + piVar2[3];
  piVar3[4] = piVar3[4] + iVar1;
  *piVar3 = *piVar3 + iVar7;
  iVar7 = piVar2[6];
  piVar3[10] = piVar3[10] + iVar6;
  piVar3[5] = piVar3[5] + iVar8;
  iVar1 = piVar2[1];
  piVar3[6] = piVar3[6] + iVar7;
  iVar8 = piVar2[0xb];
  piVar3[1] = piVar3[1] + iVar1;
  iVar1 = piVar2[8];
  piVar3[0xb] = piVar3[0xb] + iVar8;
  iVar8 = piVar2[2];
  piVar3[7] = piVar3[7] + iVar5;
  piVar3[8] = piVar3[8] + iVar1;
  piVar3[2] = piVar3[2] + iVar8;
  iVar8 = piVar2[0xe];
  iVar5 = piVar2[0xd];
  iVar6 = piVar2[0xf];
  iVar1 = piVar2[0x10];
  piVar3[0xc] = piVar3[0xc] + piVar2[0xc];
  piVar3[9] = piVar3[9] + iVar4;
  piVar3[0xd] = piVar3[0xd] + iVar5;
  piVar3[0xe] = piVar3[0xe] + iVar8;
  piVar3[0xf] = piVar3[0xf] + iVar6;
  piVar3[0x10] = piVar3[0x10] + iVar1;
  return;
}



/* ===== FUN_000132f8 @ 000132f8 size=120 ===== */

void FUN_000132f8(undefined4 param_1,tm *param_2)

{
  char *__format;
  
  if ((DAT_0002b210 & 0x20000) == 0) {
    __format = "%x %X";
  }
  else {
    __format = "%FT%T%z";
  }
  strftime(&DAT_000310f0,0x40,__format,param_2);
  if ((DAT_0002b210 & 0x8000) == 0) {
    puts(&DAT_000310f0);
    return;
  }
  FUN_00016d3c(param_1,"\"timestamp\": \"%s\",",&DAT_000310f0);
  return;
}



/* ===== FUN_00013698 @ 00013698 size=888 ===== */

void FUN_00013698(int param_1,undefined4 param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 extraout_s1;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined4 extraout_s1_04;
  undefined4 extraout_s1_05;
  undefined4 extraout_s1_06;
  undefined4 extraout_s1_07;
  undefined4 extraout_s1_08;
  undefined4 extraout_s1_09;
  undefined4 extraout_s1_10;
  undefined8 uVar19;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  undefined4 extraout_s1_02;
  undefined4 extraout_s1_03;
  
  iVar5 = (uint)(param_1 == 0) * 8;
  uVar19 = FUN_000170c0(*(undefined4 *)(&DAT_0002b218 + iVar5),
                        *(undefined4 *)(&DAT_0002b21c + iVar5),
                        *(undefined4 *)(&DAT_0002b218 + param_1 * 8),
                        *(undefined4 *)(&DAT_0002b21c + param_1 * 8));
  if ((DAT_0002b210 & 0x8000) != 0) {
    bVar1 = param_1 == 0;
    uVar8 = FUN_0001705c(*(undefined4 *)(&DAT_00031130)[bVar1],
                         ((undefined4 *)(&DAT_00031130)[bVar1])[1],
                         *(undefined4 *)(&DAT_00031130)[param_1],
                         ((undefined4 *)(&DAT_00031130)[param_1])[1],uVar19);
    uVar9 = FUN_0001705c(*(undefined4 *)((&DAT_00031130)[bVar1] + 8),
                         *(undefined4 *)((&DAT_00031130)[bVar1] + 0xc),
                         *(undefined4 *)((&DAT_00031130)[param_1] + 8),
                         *(undefined4 *)((&DAT_00031130)[param_1] + 0xc),uVar19);
    iVar5 = (&DAT_00031130)[param_1];
    iVar6 = (&DAT_00031130)[bVar1];
    uVar2 = *(uint *)(iVar6 + 0x38) + *(uint *)(iVar6 + 0x10);
    uVar3 = *(uint *)(iVar5 + 0x10) + *(uint *)(iVar5 + 0x38);
    uVar10 = FUN_0001705c(uVar2 + *(uint *)(iVar6 + 0x30),
                          *(int *)(iVar6 + 0x3c) + *(int *)(iVar6 + 0x14) +
                          (uint)CARRY4(*(uint *)(iVar6 + 0x38),*(uint *)(iVar6 + 0x10)) +
                          *(int *)(iVar6 + 0x34) + (uint)CARRY4(uVar2,*(uint *)(iVar6 + 0x30)),
                          *(uint *)(iVar5 + 0x30) + uVar3,
                          *(int *)(iVar5 + 0x34) +
                          *(int *)(iVar5 + 0x14) + *(int *)(iVar5 + 0x3c) +
                          (uint)CARRY4(*(uint *)(iVar5 + 0x10),*(uint *)(iVar5 + 0x38)) +
                          (uint)CARRY4(*(uint *)(iVar5 + 0x30),uVar3),uVar19);
    uVar11 = FUN_0001705c(*(undefined4 *)((&DAT_00031130)[bVar1] + 0x20),
                          *(undefined4 *)((&DAT_00031130)[bVar1] + 0x24),
                          *(undefined4 *)((&DAT_00031130)[param_1] + 0x20),
                          *(undefined4 *)((&DAT_00031130)[param_1] + 0x24),uVar19);
    uVar12 = FUN_0001705c(*(undefined4 *)((&DAT_00031130)[bVar1] + 0x28),
                          *(undefined4 *)((&DAT_00031130)[bVar1] + 0x2c),
                          *(undefined4 *)((&DAT_00031130)[param_1] + 0x28),
                          *(undefined4 *)((&DAT_00031130)[param_1] + 0x2c),uVar19);
    uVar3 = *(uint *)((&DAT_00031130)[param_1] + 0x1c);
    uVar2 = *(uint *)((&DAT_00031130)[bVar1] + 0x1c);
    bVar7 = uVar2 <= uVar3;
    if (uVar3 == uVar2) {
      bVar7 = *(uint *)((&DAT_00031130)[bVar1] + 0x18) <= *(uint *)((&DAT_00031130)[param_1] + 0x18)
      ;
    }
    uVar19 = DAT_00013690;
    if (bVar7) {
      uVar13 = FUN_0001705c();
      uVar19 = CONCAT44(extraout_s1_10,uVar13);
    }
    FUN_00016ccc(param_2,
                 "\"avg-cpu\":  {\"user\": %.2f, \"nice\": %.2f, \"system\": %.2f, \"iowait\": %.2f, \"steal\": %.2f, \"idle\": %.2f}"
                 ,uVar8,extraout_s1_05,CONCAT44(extraout_s1_06,uVar9),
                 CONCAT44(extraout_s1_07,uVar10),CONCAT44(extraout_s1_08,uVar11),
                 CONCAT44(extraout_s1_09,uVar12),uVar19);
    return;
  }
  bVar1 = param_1 == 0;
  printf("avg-cpu:  %%user   %%nice %%system %%iowait  %%steal   %%idle\n");
  printf("       ");
  uVar2 = DAT_0002b210 & 0x1fffff;
  uVar8 = FUN_0001705c(*(undefined4 *)(&DAT_00031130)[bVar1],
                       ((undefined4 *)(&DAT_00031130)[bVar1])[1],
                       *(undefined4 *)(&DAT_00031130)[param_1],
                       ((undefined4 *)(&DAT_00031130)[param_1])[1],uVar19);
  uVar9 = FUN_0001705c(*(undefined4 *)((&DAT_00031130)[bVar1] + 8),
                       *(undefined4 *)((&DAT_00031130)[bVar1] + 0xc),
                       *(undefined4 *)((&DAT_00031130)[param_1] + 8),
                       *(undefined4 *)((&DAT_00031130)[param_1] + 0xc),uVar19);
  uVar14 = CONCAT44(extraout_s1_00,uVar9);
  iVar5 = (&DAT_00031130)[param_1];
  iVar6 = (&DAT_00031130)[bVar1];
  uVar3 = *(uint *)(iVar6 + 0x38) + *(uint *)(iVar6 + 0x10);
  uVar4 = *(uint *)(iVar5 + 0x10) + *(uint *)(iVar5 + 0x38);
  uVar9 = FUN_0001705c(uVar3 + *(uint *)(iVar6 + 0x30),
                       *(int *)(iVar6 + 0x3c) + *(int *)(iVar6 + 0x14) +
                       (uint)CARRY4(*(uint *)(iVar6 + 0x38),*(uint *)(iVar6 + 0x10)) +
                       *(int *)(iVar6 + 0x34) + (uint)CARRY4(uVar3,*(uint *)(iVar6 + 0x30)),
                       *(uint *)(iVar5 + 0x30) + uVar4,
                       *(int *)(iVar5 + 0x34) +
                       *(int *)(iVar5 + 0x14) + *(int *)(iVar5 + 0x3c) +
                       (uint)CARRY4(*(uint *)(iVar5 + 0x10),*(uint *)(iVar5 + 0x38)) +
                       (uint)CARRY4(*(uint *)(iVar5 + 0x30),uVar4),uVar19);
  uVar15 = CONCAT44(extraout_s1_01,uVar9);
  uVar9 = FUN_0001705c(*(undefined4 *)((&DAT_00031130)[bVar1] + 0x20),
                       *(undefined4 *)((&DAT_00031130)[bVar1] + 0x24),
                       *(undefined4 *)((&DAT_00031130)[param_1] + 0x20),
                       *(undefined4 *)((&DAT_00031130)[param_1] + 0x24),uVar19);
  uVar16 = CONCAT44(extraout_s1_02,uVar9);
  uVar18 = uVar19;
  uVar9 = FUN_0001705c(*(undefined4 *)((&DAT_00031130)[bVar1] + 0x28),
                       *(undefined4 *)((&DAT_00031130)[bVar1] + 0x2c),
                       *(undefined4 *)((&DAT_00031130)[param_1] + 0x28),
                       *(undefined4 *)((&DAT_00031130)[param_1] + 0x2c),uVar19);
  uVar17 = CONCAT44(extraout_s1_03,uVar9);
  uVar9 = (undefined4)((ulonglong)uVar18 >> 0x20);
  FUN_00017f2c(uVar2 >> 0x14,1,5,7,2,uVar9,CONCAT44(extraout_s1,uVar8),uVar14,uVar15,uVar16,uVar17);
  uVar3 = *(uint *)((&DAT_00031130)[bVar1] + 0x1c);
  uVar4 = *(uint *)((&DAT_00031130)[param_1] + 0x1c);
  uVar2 = DAT_0002b210 & 0x1fffff;
  bVar7 = uVar3 <= uVar4;
  if (uVar4 == uVar3) {
    bVar7 = *(uint *)((&DAT_00031130)[bVar1] + 0x18) <= *(uint *)((&DAT_00031130)[param_1] + 0x18);
  }
  uVar18 = DAT_00013528;
  if (bVar7) {
    uVar8 = FUN_0001705c();
    uVar9 = (undefined4)((ulonglong)uVar19 >> 0x20);
    uVar18 = CONCAT44(extraout_s1_04,uVar8);
  }
  FUN_00017f2c(uVar2 >> 0x14,2,1,7,2,uVar9,uVar18,uVar14,uVar15,uVar16,uVar17);
  puts("\n");
  return;
}



/* ===== FUN_000136fc @ 000136fc size=580 ===== */

void FUN_000136fc(undefined4 *param_1,int *param_2,uint param_3)

{
  undefined *puVar1;
  int iVar2;
  char *pcVar3;
  
  if ((DAT_0002b210 & 0x20) == 0) {
    if ((DAT_0002b210 & 0x200) == 0) {
      pcVar3 = "";
      puVar1 = &UNK_00019b80;
      if ((DAT_0002b210 & 8) != 0) {
        puVar1 = &UNK_00019b84;
      }
    }
    else {
      *param_1 = 0x800;
      pcVar3 = " ";
      puVar1 = &UNK_00019b7c;
    }
  }
  else {
    *param_1 = 2;
    pcVar3 = " ";
    puVar1 = &DAT_00019b78;
  }
  if ((DAT_0002b210 & 0x8000) != 0) {
    iVar2 = *param_2;
    *param_2 = iVar2 + 1;
    FUN_00016d3c(iVar2,"\"disk\": [");
    return;
  }
  if ((DAT_0002b210 & 0x1000) == 0) {
    printf("Device       ");
  }
  if ((DAT_0002b210 & 8) == 0) {
    if ((DAT_0002b210 & 0x200000) == 0) {
      printf("      tps   %s%s_read/s   %s%s_wrtn/s   %s%s_dscd/s   %s%s_read   %s%s_wrtn   %s%s_dscd"
             ,pcVar3,puVar1,pcVar3,puVar1,pcVar3,puVar1,pcVar3,puVar1,pcVar3,puVar1,pcVar3,puVar1);
    }
    else {
      printf("      tps   %s%s_read/s    %s%s_w+d/s   %s%s_read    %s%s_w+d",pcVar3,puVar1,pcVar3,
             puVar1,pcVar3,puVar1,pcVar3,puVar1);
    }
    goto joined_r0x000138d4;
  }
  if ((DAT_0002b210 & 0x200000) != 0) {
    printf("      tps     %s%s/s    rqm/s   await  areq-sz  aqu-sz  %%util",pcVar3,puVar1);
    goto joined_r0x000138d4;
  }
  if (param_3 < 2) {
    printf("     r/s    %sr%s/s   rrqm/s  %%rrqm r_await rareq-sz",pcVar3,puVar1);
    if ((param_3 & 0xfffffffd) == 0) goto LAB_00013910;
  }
  else {
    if ((param_3 & 0xfffffffd) == 0) {
LAB_00013910:
      printf("     w/s    %sw%s/s   wrqm/s  %%wrqm w_await wareq-sz",pcVar3,puVar1);
    }
    if (param_3 == 3 || param_3 == 0) {
      printf("     d/s    %sd%s/s   drqm/s  %%drqm d_await dareq-sz",pcVar3,puVar1);
    }
  }
  if ((param_3 & 0xfffffffb) == 0) {
    printf("     f/s f_await  aqu-sz  %%util");
  }
joined_r0x000138d4:
  if ((DAT_0002b210 & 0x1000) == 0) {
    putchar(10);
    return;
  }
  printf(" Device");
  putchar(10);
  return;
}



/* ===== FUN_00013940 @ 00013940 size=2240 ===== */

void FUN_00013940(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,int param_5,
                 int param_6,int param_7,undefined4 param_8,undefined4 param_9,int param_10)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint in_fpscr;
  double dVar6;
  undefined4 local_44;
  
  iVar5 = *(int *)(param_5 + 0x80);
  if (iVar5 == 3) {
    return;
  }
  if ((DAT_0002b210 & 0x1000) == 0) {
    FUN_0001815c(1,"%-13s",param_8);
    iVar5 = *(int *)(param_5 + 0x80);
  }
  if (iVar5 < 4) {
    iVar5 = 1;
  }
  else {
    iVar5 = iVar5 + -3;
  }
  if ((DAT_0002b210 & 0x200000) != 0) {
    uVar4 = *(int *)(param_6 + 0xc) + *(int *)(param_6 + 0x14) + *(int *)(param_6 + 0x1c);
    uVar2 = *(int *)(param_7 + 0xc) + *(int *)(param_7 + 0x14) + *(int *)(param_7 + 0x1c);
    if (uVar2 <= uVar4) {
      VectorUnsignedToFloat(uVar4 - uVar2,(byte)(in_fpscr >> 0x16) & 3);
      FUN_00019388(param_1,param_2);
    }
    FUN_00017d38(0xffffffff,0,1,8,2);
    if ((DAT_0002b210 & 0x100000) == 0) {
      uVar1 = 0xffffffff;
      dVar6 = (double)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
      *(double *)(param_10 + 0x38) = *(double *)(param_10 + 0x38) / dVar6;
    }
    else {
      uVar1 = 0;
    }
    FUN_00017d38(uVar1,0,1,9,2);
    uVar4 = *(int *)(param_6 + 0x10) + *(int *)(param_6 + 0x18) + *(int *)(param_6 + 0x20);
    uVar2 = *(int *)(param_7 + 0x10) + *(int *)(param_7 + 0x18) + *(int *)(param_7 + 0x20);
    if (uVar2 <= uVar4) {
      VectorUnsignedToFloat(uVar4 - uVar2,(byte)(in_fpscr >> 0x16) & 3);
      FUN_00019388(param_1,param_2);
    }
    FUN_00017d38(0xffffffff,0,1,8,2);
    FUN_00017d38(0xffffffff,0,1,7,2);
    if ((DAT_0002b210 & 0x100000) == 0) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = 2;
    }
    FUN_00017d38(uVar1,0,1,8,2);
    if (*(uint *)(param_7 + 0x40) <= *(uint *)(param_6 + 0x40)) {
      VectorUnsignedToFloat
                (*(uint *)(param_6 + 0x40) - *(uint *)(param_7 + 0x40),(byte)(in_fpscr >> 0x16) & 3)
      ;
      FUN_00019388(param_1,param_2);
    }
    FUN_00017d38(0xffffffff,0,1,7,2);
    VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x16) & 3);
    FUN_00017f2c((DAT_0002b210 & 0x1fffff) >> 0x14,1,1,6,2);
    goto joined_r0x0001402c;
  }
  if (param_4 < 2) {
    if (*(uint *)(param_7 + 0xc) <= *(uint *)(param_6 + 0xc)) {
      VectorUnsignedToFloat
                (*(uint *)(param_6 + 0xc) - *(uint *)(param_7 + 0xc),(byte)(in_fpscr >> 0x16) & 3);
      FUN_00019388(param_1,param_2);
    }
    FUN_00017d38(0xffffffff,0,1,7,2);
    if ((DAT_0002b210 & 0x100000) == 0) {
      uVar1 = 0xffffffff;
      dVar6 = (double)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
      *(double *)(param_10 + 0x20) = *(double *)(param_10 + 0x20) / dVar6;
    }
    else {
      uVar1 = 0;
    }
    FUN_00017d38(uVar1,0,1,9,2);
    if (*(uint *)(param_7 + 0x10) <= *(uint *)(param_6 + 0x10)) {
      VectorUnsignedToFloat
                (*(uint *)(param_6 + 0x10) - *(uint *)(param_7 + 0x10),(byte)(in_fpscr >> 0x16) & 3)
      ;
      FUN_00019388(param_1,param_2);
    }
    FUN_00017d38(0xffffffff,0,1,8,2);
    FUN_00017f2c((DAT_0002b210 & 0x1fffff) >> 0x14,3,1,6,2);
    FUN_00017d38(0xffffffff,0,1,7,2);
    if ((DAT_0002b210 & 0x100000) == 0) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = 2;
    }
    FUN_00017d38(uVar1,0,1,8,2);
    if ((param_4 & 0xfffffffd) == 0) goto LAB_000139d8;
  }
  else {
    if ((param_4 & 0xfffffffd) == 0) {
LAB_000139d8:
      if (*(uint *)(param_7 + 0x14) <= *(uint *)(param_6 + 0x14)) {
        VectorUnsignedToFloat
                  (*(uint *)(param_6 + 0x14) - *(uint *)(param_7 + 0x14),
                   (byte)(in_fpscr >> 0x16) & 3);
        FUN_00019388(param_1,param_2);
      }
      FUN_00017d38(0xffffffff,0,1,7,2);
      if ((DAT_0002b210 & 0x100000) == 0) {
        uVar1 = 0xffffffff;
        dVar6 = (double)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
        *(double *)(param_10 + 0x28) = *(double *)(param_10 + 0x28) / dVar6;
      }
      else {
        uVar1 = 0;
      }
      FUN_00017d38(uVar1,0,1,9,2);
      if (*(uint *)(param_7 + 0x18) <= *(uint *)(param_6 + 0x18)) {
        VectorUnsignedToFloat
                  (*(uint *)(param_6 + 0x18) - *(uint *)(param_7 + 0x18),
                   (byte)(in_fpscr >> 0x16) & 3);
        FUN_00019388(param_1,param_2);
      }
      FUN_00017d38(0xffffffff,0,1,8,2);
      FUN_00017f2c((DAT_0002b210 & 0x1fffff) >> 0x14,3,1,6,2);
      FUN_00017d38(0xffffffff,0,1,7,2);
      if ((DAT_0002b210 & 0x100000) == 0) {
        uVar1 = 0xffffffff;
      }
      else {
        uVar1 = 2;
      }
      FUN_00017d38(uVar1,0,1,8,2);
    }
    if (param_4 == 3 || param_4 == 0) {
      if (*(uint *)(param_7 + 0x1c) <= *(uint *)(param_6 + 0x1c)) {
        VectorUnsignedToFloat
                  (*(uint *)(param_6 + 0x1c) - *(uint *)(param_7 + 0x1c),
                   (byte)(in_fpscr >> 0x16) & 3);
        FUN_00019388(param_1,param_2);
      }
      FUN_00017d38(0xffffffff,0,1,7,2);
      if ((DAT_0002b210 & 0x100000) == 0) {
        local_44 = 0xffffffff;
        dVar6 = (double)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
        *(double *)(param_10 + 0x30) = *(double *)(param_10 + 0x30) / dVar6;
      }
      else {
        local_44 = 0;
      }
      FUN_00017d38(local_44,0,1,9,2);
      if (*(uint *)(param_7 + 0x20) <= *(uint *)(param_6 + 0x20)) {
        VectorUnsignedToFloat
                  (*(uint *)(param_6 + 0x20) - *(uint *)(param_7 + 0x20),
                   (byte)(in_fpscr >> 0x16) & 3);
        FUN_00019388(param_1,param_2);
      }
      FUN_00017d38(0xffffffff,0,1,8,2);
      FUN_00017f2c((DAT_0002b210 & 0x1fffff) >> 0x14,3,1,6,2);
      FUN_00017d38(0xffffffff,0,1,7,2);
      if ((DAT_0002b210 & 0x100000) == 0) {
        uVar1 = 0xffffffff;
      }
      else {
        uVar1 = 2;
      }
      FUN_00017d38(uVar1,0,1,8,2);
    }
  }
  if ((param_4 & 0xfffffffb) == 0) {
    if (*(uint *)(param_7 + 0x24) <= *(uint *)(param_6 + 0x24)) {
      VectorUnsignedToFloat
                (*(uint *)(param_6 + 0x24) - *(uint *)(param_7 + 0x24),(byte)(in_fpscr >> 0x16) & 3)
      ;
      FUN_00019388(param_1,param_2);
    }
    FUN_00017d38(0xffffffff,0,1,7,2);
    FUN_00017d38(0xffffffff,0,1,7,2);
    if (*(uint *)(param_7 + 0x40) <= *(uint *)(param_6 + 0x40)) {
      VectorUnsignedToFloat
                (*(uint *)(param_6 + 0x40) - *(uint *)(param_7 + 0x40),(byte)(in_fpscr >> 0x16) & 3)
      ;
      FUN_00019388(param_1,param_2);
    }
    FUN_00017d38(0xffffffff,0,1,7,2);
    iVar3 = *(int *)(param_5 + 0x80);
    iVar5 = iVar3;
    if (3 < iVar3) {
      iVar5 = iVar3 + -3;
    }
    if (3 < iVar3) {
      VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x16) & 3);
    }
    FUN_00017f2c((DAT_0002b210 & 0x1fffff) >> 0x14,1,1,6,2);
  }
joined_r0x0001402c:
  if ((DAT_0002b210 & 0x1000) != 0) {
    FUN_0001815c(1,&DAT_00019d58,param_8,0);
  }
  putchar(10);
  return;
}



/* ===== FUN_0001422c @ 0001422c size=1244 ===== */

void FUN_0001422c(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,int param_5,
                 uint *param_6,uint *param_7,undefined4 param_8,undefined4 param_9)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint in_fpscr;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  int local_158 [6];
  uint local_140;
  uint local_138;
  uint local_130;
  uint local_128;
  uint local_124;
  uint local_120;
  uint local_110;
  int local_108 [6];
  uint local_f0;
  uint local_e8;
  uint local_e0;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  
  local_170 = 0;
  uStack_168 = 0;
  local_160 = local_170;
  memset(&local_b8,0,0x70);
  if (((param_4 & 0xfffffffb) == 0) || (uVar9 = 0, (DAT_0002b210 & 0x200000) != 0)) {
    local_158[0] = param_6[3] + param_6[5] + param_6[7];
    local_120 = param_6[0xf];
    local_d0 = param_7[0xf];
    local_108[0] = param_7[3] + param_7[5] + param_7[7];
    local_d8 = param_7[10];
    local_110 = param_6[0xc];
    local_128 = param_6[10];
    local_124 = param_6[0xb];
    local_d4 = param_7[0xb];
    local_c0 = param_7[0xc];
    local_140 = *param_6;
    local_f0 = *param_7;
    local_138 = param_6[1];
    local_158[1] = 0;
    local_108[1] = 0;
    local_e8 = param_7[1];
    local_130 = param_6[2];
    local_e0 = param_7[2];
    FUN_00015fcc(local_158,local_108,param_1,param_2,&local_170);
    uVar9 = DAT_0002b210 & 0x200000;
  }
  uVar1 = DAT_0002b210;
  uVar7 = *param_6;
  uVar8 = *param_7;
  dVar11 = DAT_00014670;
  if (uVar8 <= uVar7) {
    dVar11 = (double)VectorUnsignedToFloat(uVar7 - uVar8,(byte)(in_fpscr >> 0x16) & 3);
    dVar13 = (double)FUN_00019388(param_1,param_2);
    dVar11 = (dVar11 / dVar13) * DAT_00014678;
  }
  uVar3 = param_7[1];
  uVar5 = param_6[1];
  dVar13 = DAT_00014670;
  local_98 = dVar11;
  if (uVar3 <= uVar5) {
    dVar13 = (double)VectorUnsignedToFloat(uVar5 - uVar3,(byte)(in_fpscr >> 0x16) & 3);
    dVar14 = (double)FUN_00019388(param_1,param_2);
    dVar13 = (dVar13 / dVar14) * DAT_00014678;
  }
  uVar2 = param_6[2];
  uVar4 = param_7[2];
  local_90 = dVar13;
  local_88 = DAT_00014670;
  if (uVar4 <= uVar2) {
    dVar14 = (double)VectorUnsignedToFloat(uVar2 - uVar4,(byte)(in_fpscr >> 0x16) & 3);
    dVar12 = (double)FUN_00019388(param_1,param_2);
    local_88 = (dVar14 / dVar12) * DAT_00014678;
  }
  if (uVar9 != 0) {
    local_80 = dVar11 + dVar13 + local_88;
    goto joined_r0x00014548;
  }
  if (param_4 < 2) {
    iVar10 = param_6[3] - param_7[3];
    iVar6 = (param_6[4] - param_7[4]) + iVar10;
    local_78 = DAT_00014670;
    if (iVar6 != 0) {
      dVar11 = (double)VectorUnsignedToFloat(param_6[4] - param_7[4],(byte)(in_fpscr >> 0x16) & 3);
      dVar13 = (double)VectorUnsignedToFloat(iVar6,(byte)(in_fpscr >> 0x16) & 3);
      local_78 = (dVar11 / dVar13) * DAT_00014678;
    }
    if (param_7[3] < param_6[3]) {
      dVar11 = (double)VectorUnsignedToFloat(iVar10,(byte)(in_fpscr >> 0x16) & 3);
      local_60 = (double)VectorUnsignedToFloat(uVar7 - uVar8,(byte)(in_fpscr >> 0x16) & 3);
      local_b8 = (double)VectorUnsignedToFloat
                                   (param_6[10] - param_7[10],(byte)(in_fpscr >> 0x16) & 3);
      local_60 = local_60 / dVar11;
      local_b8 = local_b8 / dVar11;
    }
    else {
      local_60 = 0.0;
      local_b8 = 0.0;
    }
    if ((param_4 & 0xfffffffd) == 0) goto LAB_000145f0;
  }
  else {
    if ((param_4 & 0xfffffffd) == 0) {
LAB_000145f0:
      iVar6 = param_6[5] - param_7[5];
      iVar10 = (param_6[6] - param_7[6]) + iVar6;
      local_70 = DAT_00014670;
      if (iVar10 != 0) {
        dVar11 = (double)VectorUnsignedToFloat(param_6[6] - param_7[6],(byte)(in_fpscr >> 0x16) & 3)
        ;
        dVar13 = (double)VectorUnsignedToFloat(iVar10,(byte)(in_fpscr >> 0x16) & 3);
        local_70 = (dVar11 / dVar13) * DAT_00014678;
      }
      if (param_7[5] < param_6[5]) {
        dVar11 = (double)VectorUnsignedToFloat(iVar6,(byte)(in_fpscr >> 0x16) & 3);
        local_b0 = (double)VectorUnsignedToFloat
                                     (param_6[0xb] - param_7[0xb],(byte)(in_fpscr >> 0x16) & 3);
        local_b0 = local_b0 / dVar11;
        local_58 = (double)VectorUnsignedToFloat(uVar5 - uVar3,(byte)(in_fpscr >> 0x16) & 3);
        local_58 = local_58 / dVar11;
      }
      else {
        local_58 = 0.0;
        local_b0 = 0.0;
      }
    }
    if (param_4 == 3 || param_4 == 0) {
      iVar6 = param_6[7] - param_7[7];
      iVar10 = (param_6[8] - param_7[8]) + iVar6;
      local_68 = DAT_00014670;
      if (iVar10 != 0) {
        dVar11 = (double)VectorUnsignedToFloat(param_6[8] - param_7[8],(byte)(in_fpscr >> 0x16) & 3)
        ;
        dVar13 = (double)VectorUnsignedToFloat(iVar10,(byte)(in_fpscr >> 0x16) & 3);
        local_68 = (dVar11 / dVar13) * DAT_00014678;
      }
      if (param_7[7] < param_6[7]) {
        dVar11 = (double)VectorUnsignedToFloat(iVar6,(byte)(in_fpscr >> 0x16) & 3);
        local_50 = (double)VectorUnsignedToFloat(uVar2 - uVar4,(byte)(in_fpscr >> 0x16) & 3);
        local_a8 = (double)VectorUnsignedToFloat
                                     (param_6[0xc] - param_7[0xc],(byte)(in_fpscr >> 0x16) & 3);
        local_50 = local_50 / dVar11;
        local_a8 = local_a8 / dVar11;
      }
      else {
        local_50 = 0.0;
        local_a8 = 0.0;
      }
    }
  }
  if ((param_4 & 0xfffffffb) == 0) {
    local_a0 = DAT_00014670;
    if (param_7[9] < param_6[9]) {
      dVar11 = (double)VectorUnsignedToFloat(param_6[9] - param_7[9],(byte)(in_fpscr >> 0x16) & 3);
      local_a0 = (double)VectorUnsignedToFloat
                                   (param_6[0xd] - param_7[0xd],(byte)(in_fpscr >> 0x16) & 3);
      local_a0 = local_a0 / dVar11;
    }
  }
joined_r0x00014548:
  if ((uVar1 & 0x8000) != 0) {
    if (*(int *)(param_5 + 0x80) != 3) {
      FUN_00011ce4(param_8,param_3,param_1,param_2,param_3,param_5,param_6,param_7,param_9,
                   &local_170,&local_b8);
    }
    return;
  }
  FUN_00013940(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_9,&local_170,&local_b8)
  ;
  return;
}



/* ===== FUN_0001471c @ 0001471c size=696 ===== */

void FUN_0001471c(undefined4 param_1,undefined4 param_2,int param_3,int *param_4,int *param_5,
                 undefined4 param_6,undefined8 param_7,undefined8 param_8,uint param_9,int param_10)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint extraout_r3;
  uint uVar4;
  uint extraout_r3_00;
  uint uVar5;
  int iVar6;
  bool bVar7;
  uint in_fpscr;
  undefined4 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 in_stack_ffffff90;
  
  uVar14 = CONCAT44(param_10,param_9);
  uVar2 = (undefined4)((ulonglong)in_stack_ffffff90 >> 0x20);
  if ((DAT_0002b210 & 0x1000) == 0) {
    FUN_0001815c(1,"%-13s",param_6);
  }
  uVar4 = DAT_0002b210;
  dVar13 = (double)FUN_00019388(param_1,param_2);
  bVar7 = (uVar4 & 0x100000) == 0;
  dVar12 = (double)VectorUnsignedToFloat(*param_4 - *param_5,(byte)(in_fpscr >> 0x16) & 3);
  dVar11 = (double)VectorUnsignedToFloat(param_4[1] - param_5[1],(byte)(in_fpscr >> 0x16) & 3);
  dVar10 = (double)VectorUnsignedToFloat(param_4[2] - param_5[2],(byte)(in_fpscr >> 0x16) & 3);
  iVar6 = param_4[2] - param_5[2];
  if (bVar7) {
    iVar6 = param_3;
  }
  dVar9 = dVar10 / dVar13;
  if (bVar7) {
    dVar10 = (double)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x16) & 3);
  }
  dVar9 = dVar9 * DAT_000149d8;
  dVar12 = (dVar12 / dVar13) * DAT_000149d8;
  dVar11 = (dVar11 / dVar13) * DAT_000149d8;
  if (bVar7) {
    dVar12 = dVar12 / dVar10;
    dVar11 = dVar11 / dVar10;
    dVar9 = dVar9 / dVar10;
  }
  VectorUnsignedToFloat
            ((((param_4[3] + param_4[5] + param_4[7]) - param_5[3]) - param_5[5]) - param_5[7],
             (byte)(in_fpscr >> 0x16) & 3);
  FUN_00017d38(0xffffffff,0,1,8,2);
  if ((DAT_0002b210 & 0x100000) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
  }
  uVar4 = (uint)param_8;
  iVar6 = (int)((ulonglong)param_8 >> 0x20);
  uVar3 = (undefined4)((ulonglong)param_7 >> 0x20);
  if ((DAT_0002b210 & 0x200000) == 0) {
    FUN_00017d38(uVar1,0,3,0xc,2,uVar2,dVar12,dVar11,dVar9);
    uVar2 = 0;
    uVar5 = DAT_0002b210;
    if ((DAT_0002b210 & 0x100000) == 0) {
      uVar2 = 0xffffffff;
      uVar14 = VectorShiftRight(CONCAT44(param_3,param_3),0x20);
      uVar1 = (undefined4)((ulonglong)uVar14 >> 0x20);
      uVar8 = (undefined4)uVar14;
      param_7 = FUN_000193fc((int)param_7,uVar3,uVar8,uVar1);
      param_8 = FUN_000193fc(uVar4,iVar6,uVar8,uVar1);
      uVar14 = FUN_000193fc(param_9,param_10,uVar8,uVar1);
      uVar5 = extraout_r3_00;
    }
    FUN_00017bd0(uVar2,3,10,uVar5,param_7,param_8,uVar14);
  }
  else {
    iVar6 = iVar6 + param_10 + (uint)CARRY4(uVar4,param_9);
    uVar14 = CONCAT44(iVar6,uVar4 + param_9);
    FUN_00017d38(uVar1,0,2,0xc,2,uVar2,dVar12,dVar11 + dVar9);
    if ((DAT_0002b210 & 0x100000) == 0) {
      param_7 = FUN_000193fc((int)param_7,uVar3,param_3,param_3 >> 0x1f);
      uVar14 = FUN_000193fc(uVar4 + param_9,iVar6,param_3,param_3 >> 0x1f);
      uVar2 = 0xffffffff;
      uVar4 = extraout_r3;
    }
    else {
      uVar2 = 0;
      uVar4 = DAT_0002b210;
    }
    FUN_00017bd0(uVar2,2,10,uVar4,param_7,uVar14);
  }
  if ((DAT_0002b210 & 0x1000) != 0) {
    FUN_0001815c(1,&DAT_00019d58,param_6,0);
  }
  putchar(10);
  return;
}



/* ===== FUN_000149e0 @ 000149e0 size=408 ===== */

void FUN_000149e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int *param_6,int *param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
                 undefined4 param_14)

{
  char *__format;
  int iVar1;
  undefined4 uVar2;
  uint in_fpscr;
  undefined4 uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char acStack_138 [256];
  
  dVar5 = (double)FUN_00019388(param_3,param_4);
  iVar1 = (((param_6[3] + param_6[5] + param_6[7]) - param_7[3]) - param_7[5]) - param_7[7];
  dVar7 = (double)VectorUnsignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
  FUN_00016ccc(param_1,"{\"disk_device\": \"%s\", \"tps\": %.2f, ",param_8,iVar1,
               (dVar7 / dVar5) * DAT_00014b78);
  if ((DAT_0002b210 & 0x20) == 0) {
    if ((DAT_0002b210 & 0x200) == 0) {
      __format = 
      "\"Blk_read/s\": %%.2f, \"Blk_wrtn/s\": %%.2f, \"Blk_dscd/s\": %%.2f, \"Blk_read\": %%llu, \"Blk_wrtn\": %%llu, \"Blk_dscd\": %%llu}"
      ;
    }
    else {
      __format = 
      "\"MB_read/s\": %%.2f, \"MB_wrtn/s\": %%.2f, \"MB_dscd/s\": %%.2f, \"MB_read\": %%llu, \"MB_wrtn\": %%llu, \"MB_dscd\": %%llu}"
      ;
    }
    sprintf(acStack_138,__format);
  }
  else {
    sprintf(acStack_138,
            "\"kB_read/s\": %%.2f, \"kB_wrtn/s\": %%.2f, \"kB_dscd/s\": %%.2f, \"kB_read\": %%llu, \"kB_wrtn\": %%llu, \"kB_dscd\": %%llu}"
           );
  }
  dVar7 = DAT_00014b78;
  dVar6 = (double)VectorSignedToFloat(param_5,(byte)(in_fpscr >> 0x16) & 3);
  dVar8 = (double)VectorUnsignedToFloat(*param_6 - *param_7,(byte)(in_fpscr >> 0x16) & 3);
  uVar4 = VectorShiftRight(CONCAT44(param_5,param_5),0x20);
  uVar2 = (undefined4)((ulonglong)uVar4 >> 0x20);
  uVar3 = (undefined4)uVar4;
  dVar8 = ((dVar8 / dVar5) * DAT_00014b78) / dVar6;
  uVar4 = FUN_000193fc(param_13,param_14,uVar3,uVar2);
  uVar11 = FUN_000193fc(param_11,param_12,uVar3,uVar2);
  uVar12 = FUN_000193fc(param_9,param_10,uVar3,uVar2);
  uVar2 = (undefined4)((ulonglong)uVar12 >> 0x20);
  dVar10 = (double)VectorUnsignedToFloat(param_6[2] - param_7[2],(byte)(in_fpscr >> 0x16) & 3);
  dVar9 = (double)VectorUnsignedToFloat(param_6[1] - param_7[1],(byte)(in_fpscr >> 0x16) & 3);
  printf(acStack_138,uVar2,SUB84(dVar8,0),(int)((ulonglong)dVar8 >> 0x20),
         ((dVar9 / dVar5) * dVar7) / dVar6,((dVar10 / dVar5) * dVar7) / dVar6,(int)uVar12,uVar2,
         (int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar4,(int)((ulonglong)uVar4 >> 0x20));
  return;
}



/* ===== FUN_00014b80 @ 00014b80 size=192 ===== */

void FUN_00014b80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int *param_5,int *param_6,undefined4 param_7,undefined4 param_8)

{
  if ((DAT_0002b210 & 0x8000) != 0) {
    FUN_000149e0(param_7,param_2,param_1,param_2,param_3,param_5,param_6,param_8,*param_5 - *param_6
                 ,0,param_5[1] - param_6[1],0,param_5[2] - param_6[2],0);
    return;
  }
  FUN_0001471c();
  return;
}



/* ===== FUN_00014c40 @ 00014c40 size=1900 ===== */

void FUN_00014c40(int param_1,undefined4 param_2,int param_3)

{
  ssize_t sVar1;
  void *__s;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  uint local_a8;
  uint local_9c;
  uint local_98;
  uint local_90;
  uint local_88;
  undefined4 local_80;
  int local_7c;
  uint auStack_78 [19];
  
  local_80 = 1;
  local_7c = 4;
  sVar1 = write(1,"",0);
  iVar11 = local_7c;
  if (sVar1 == -1) {
    perror("stdout");
                    /* WARNING: Subroutine does not return */
    exit(6);
  }
  if ((DAT_0002b210 & 0x8000) == 0) {
    if ((DAT_0002b210 & 4) == 0) {
      if ((DAT_0002b210 & 1) == 0) goto LAB_00015078;
      if (param_3 != 0) goto LAB_00014cbc;
    }
    else {
      if (param_3 != 0) goto LAB_00014cb4;
LAB_00014fcc:
      FUN_000132f8(local_7c,param_2);
      if ((DAT_0002b210 & 1) == 0) {
LAB_00015078:
        local_88 = (uint)(param_1 == 0);
        puVar5 = (undefined4 *)(DAT_000153ac + param_1 * 8);
        puVar4 = (undefined4 *)(DAT_000153ac + local_88 * 8);
        uVar18 = FUN_000170c0(*puVar4,puVar4[1],*puVar5,puVar5[1]);
        if ((DAT_0002b210 & 2) != 0) goto LAB_00014cfc;
LAB_000150b8:
        if (param_3 != 0) {
          return;
        }
        goto joined_r0x000150d0;
      }
    }
LAB_00014fe8:
    FUN_00013698(param_1,local_7c);
    if ((DAT_0002b210 & 0x8000) != 0) {
      if ((DAT_0002b210 & 2) != 0) {
        putchar(0x2c);
      }
      putchar(10);
    }
    local_88 = (uint)(param_1 == 0);
    puVar5 = (undefined4 *)(DAT_000153ac + param_1 * 8);
    puVar4 = (undefined4 *)(DAT_000153ac + local_88 * 8);
    uVar18 = FUN_000170c0(*puVar4,puVar4[1],*puVar5,puVar5[1]);
  }
  else {
    if (param_3 != 0) {
      if ((DAT_0002b210 & 4) == 0) {
        if ((DAT_0002b210 & 1) != 0) goto LAB_00014cbc;
        local_88 = (uint)(param_1 == 0);
        uVar18 = FUN_000170c0(*(undefined4 *)(&DAT_0002b228 + local_88 * 8),
                              *(undefined4 *)(&DAT_0002b22c + local_88 * 8),
                              *(undefined4 *)(&DAT_0002b228 + param_1 * 8),
                              *(undefined4 *)(&DAT_0002b22c + param_1 * 8));
      }
      else {
LAB_00014cb4:
        if ((DAT_0002b210 & 1) == 0) goto LAB_00015078;
LAB_00014cbc:
        local_88 = (uint)(param_1 == 0);
        puVar5 = (undefined4 *)(DAT_000153ac + param_1 * 8);
        puVar4 = (undefined4 *)(DAT_000153ac + local_88 * 8);
        uVar18 = FUN_000170c0(*puVar4,puVar4[1],*puVar5,puVar5[1]);
      }
      if ((DAT_0002b210 & 2) == 0) {
        return;
      }
      goto LAB_00014cfc;
    }
    local_7c = local_7c + 1;
    FUN_00016d3c(iVar11,"{");
    if ((DAT_0002b210 & 4) != 0) goto LAB_00014fcc;
    if ((DAT_0002b210 & 1) != 0) goto LAB_00014fe8;
    local_88 = (uint)(param_1 == 0);
    uVar18 = FUN_000170c0(*(undefined4 *)(&DAT_0002b228 + local_88 * 8),
                          *(undefined4 *)(&DAT_0002b22c + local_88 * 8),
                          *(undefined4 *)(&DAT_0002b228 + param_1 * 8),
                          *(undefined4 *)(&DAT_0002b22c + param_1 * 8));
  }
  if ((DAT_0002b210 & 2) == 0) {
joined_r0x000150d0:
    if ((DAT_0002b210 & 0x8000) != 0) {
      local_7c = local_7c + -1;
      FUN_00016ccc(local_7c,"}");
      return;
    }
    putchar(10);
    return;
  }
LAB_00014cfc:
  uVar2 = DAT_0002b210;
  uVar17 = (undefined4)((ulonglong)uVar18 >> 0x20);
  memset(auStack_78,0,0x48);
  bVar16 = (uVar2 & 0x609008) != 0x1008;
  if (bVar16) {
    local_90 = 0;
  }
  else {
    local_90 = 4;
  }
  local_98 = (uint)!bVar16;
  local_9c = 0;
  local_a8 = local_98;
LAB_00014d74:
  if (param_3 == 0) {
    FUN_000136fc(&local_80,&local_7c,local_a8);
  }
  iVar9 = DAT_0002b214;
  iVar11 = 0;
LAB_00014d98:
  iVar6 = iVar9;
  iVar12 = iVar11;
  iVar8 = iVar11;
  if (iVar9 == 0) goto LAB_00014f80;
  do {
    iVar9 = *(int *)(iVar6 + 0x98);
    if (*(int *)(iVar6 + 0x80) < 3) {
      iVar11 = iVar12;
      if (*(int *)(iVar6 + 0x84) == 0) goto LAB_00014d98;
      uVar2 = (uint)(iVar12 != 0);
      uVar7 = uVar2;
      if (local_98 != local_a8) {
        uVar7 = 0;
      }
      iVar8 = iVar6;
      iVar6 = iVar12;
      if (uVar7 == 0) goto LAB_0001518c;
LAB_00015128:
      *(int *)(iVar6 + 0x80) = *(int *)(iVar6 + 0x80) + 1;
      FUN_000131b0(param_1,iVar8,iVar6);
LAB_00014e00:
      iVar11 = iVar6;
      if ((DAT_0002b210 & 0x40000) != 0) {
        iVar6 = *(int *)(iVar8 + 0x80);
        goto joined_r0x00014e18;
      }
    }
    else {
      __s = *(void **)(iVar6 + (param_1 + 0x24) * 4);
      iVar11 = iVar6;
      if (iVar12 == 0) {
        memset(__s,0,0x48);
        goto LAB_00014d98;
      }
      memset(__s,0,0x48);
      if ((*(int *)(iVar12 + 0x84) == 0) && (*(int *)(iVar12 + 0x80) < 3)) goto LAB_00014d98;
      iVar8 = iVar12;
      if (local_98 == local_a8) {
        if (*(int *)(iVar12 + 0x80) < 3) goto LAB_00015128;
        goto LAB_00014e00;
      }
      uVar2 = 1;
      iVar12 = iVar6;
LAB_0001518c:
      iVar11 = iVar12;
      if ((uVar2 & DAT_0002b210 >> 0x12) != 0) {
        iVar6 = *(int *)(iVar8 + 0x80);
joined_r0x00014e18:
        if (iVar6 < 3) goto LAB_00014d98;
      }
    }
    while( true ) {
      puVar13 = *(uint **)(iVar8 + (param_1 + 0x24) * 4);
      uVar15 = puVar13[5];
      puVar10 = *(uint **)(iVar8 + (local_88 + 0x24) * 4);
      uVar7 = puVar13[3];
      uVar14 = puVar13[7];
      uVar2 = puVar13[9];
      if ((((uVar7 == 0 && uVar15 == 0) && uVar14 == 0) && uVar2 == 0) &&
          (DAT_0002b210 & 0x100) == 0) goto LAB_00014d98;
      if (((((DAT_0002b210 & 0x80000) != 0) && (puVar10[3] == uVar7)) && (uVar15 == puVar10[5])) &&
         ((uVar14 == puVar10[7] && (uVar2 == puVar10[9])))) goto LAB_00014d98;
      if (((uVar7 + uVar15 + uVar14 + uVar2 < puVar10[3] + puVar10[5] + puVar10[7] + puVar10[9]) &&
          ((*puVar10 == 0 || (*puVar13 < *puVar10)))) &&
         ((puVar10[1] == 0 || (puVar13[1] < puVar10[1])))) {
        if (puVar10[2] == 0) {
          puVar10 = auStack_78;
        }
        else if (puVar13[2] < puVar10[2]) {
          puVar10 = auStack_78;
        }
      }
      uVar3 = FUN_00017664(*(undefined4 *)(iVar8 + 0x88),*(undefined4 *)(iVar8 + 0x8c),0,0,
                           (DAT_0002b210 & 0x1ffff) >> 0x10,(DAT_0002b210 & 0x3fff) >> 0xd,0,iVar8);
      if (param_3 != 0) goto LAB_00014d98;
      if ((local_9c & DAT_0002b210 >> 0xf) != 0) {
        puts(",");
      }
      if ((DAT_0002b210 & 8) == 0) {
        local_9c = 1;
        FUN_00014b80((int)uVar18,uVar17,local_80,iVar8,puVar13,puVar10,local_7c,uVar3);
        goto LAB_00014d98;
      }
      local_9c = 1;
      FUN_0001422c((int)uVar18,uVar17,local_80,local_a8,iVar8,puVar13,puVar10,local_7c,uVar3);
      iVar6 = iVar9;
      iVar12 = iVar11;
      iVar8 = iVar11;
      if (iVar9 != 0) break;
LAB_00014f80:
      if ((iVar8 == 0) ||
         ((iVar11 = iVar9, *(int *)(iVar8 + 0x84) == 0 && (*(int *)(iVar8 + 0x80) < 3)))) {
        bVar16 = local_90 == local_a8;
        uVar2 = local_90 - local_a8;
        if ((int)local_90 > (int)local_a8) {
          bVar16 = local_a8 == 0;
          uVar2 = local_a8;
        }
        if (param_3 == 0 &&
            (!bVar16 &&
            (int)uVar2 < 0 == ((int)local_90 <= (int)local_a8 && SBORROW4(local_90,local_a8)))) {
          putchar(10);
        }
        local_a8 = local_a8 + 1;
        if ((int)local_a8 <= (int)local_90) goto LAB_00014d74;
        if (((uint)(param_3 == 0) & DAT_0002b210 >> 0xf) != 0) {
          putchar(10);
          local_7c = local_7c + -1;
          FUN_00016d3c(local_7c,&DAT_00019ee8);
        }
        goto LAB_000150b8;
      }
    }
  } while( true );
}



/* ===== FUN_000153b0 @ 000153b0 size=596 ===== */

void FUN_000153b0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  int *piVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  
  puVar2 = DAT_00015604;
  uVar12 = 0;
  if ((DAT_0002b210 & 0x4000) != 0) {
    if ((int)DAT_0002b20c < 1) {
      uVar12 = 0;
    }
    else {
      uVar12 = 1;
    }
  }
  uVar16 = 0;
  uVar17 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uVar18 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uVar19 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *DAT_00015604 = 0;
  puVar2[1] = uVar17;
  puVar2[2] = uVar18;
  puVar2[3] = uVar19;
  (((sigaction *)(puVar2 + -1))->__sigaction_handler).sa_handler = (__sighandler_t)&LAB_00011cd4;
  sigaction(0xe,(sigaction *)(puVar2 + -1),(sigaction *)0x0);
  alarm(DAT_0002b20c);
  puVar2 = DAT_00015608;
  *DAT_00015608 = uVar16;
  puVar2[1] = uVar17;
  puVar2[2] = uVar18;
  puVar2[3] = uVar19;
  (((sigaction *)(puVar2 + -1))->__sigaction_handler).sa_handler = (__sighandler_t)&LAB_00011cc0;
  sigaction(2,(sigaction *)(puVar2 + -1),(sigaction *)0x0);
  uVar13 = 1;
  iVar1 = DAT_0002b214;
  while( true ) {
    for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x98)) {
      *(undefined4 *)(iVar1 + 0x84) = 0;
    }
    FUN_00015f14(DAT_0001560c + uVar13 * 8);
    FUN_00015618((&DAT_00031130)[uVar13],1);
    puVar14 = (uint *)(&DAT_00031130)[uVar13];
    uVar24 = *(undefined8 *)(puVar14 + 2);
    piVar15 = (int *)(DAT_00015610 + uVar13 * 8);
    uVar9 = *puVar14;
    uVar10 = puVar14[1];
    uVar31 = *(undefined8 *)(puVar14 + 4);
    uVar20 = (uint)uVar24;
    uVar25 = *(undefined8 *)(puVar14 + 6);
    uVar3 = uVar20 + uVar9;
    uVar28 = (uint)uVar31;
    uVar32 = *(undefined8 *)(puVar14 + 8);
    uVar4 = uVar28 + uVar3;
    uVar21 = (uint)uVar25;
    uVar26 = *(undefined8 *)(puVar14 + 0xc);
    uVar5 = uVar21 + uVar4;
    uVar29 = (uint)uVar32;
    uVar33 = *(undefined8 *)(puVar14 + 10);
    uVar6 = uVar29 + uVar5;
    uVar22 = (uint)uVar26;
    uVar27 = *(undefined8 *)(puVar14 + 0xe);
    uVar7 = uVar22 + uVar6;
    uVar30 = (uint)uVar33;
    uVar8 = uVar30 + uVar7;
    uVar23 = (uint)uVar27;
    uVar11 = DAT_0002b210 & 0x10;
    *piVar15 = uVar23 + uVar8;
    piVar15[1] = (int)((ulonglong)uVar27 >> 0x20) +
                 (int)((ulonglong)uVar33 >> 0x20) +
                 (int)((ulonglong)uVar26 >> 0x20) +
                 (int)((ulonglong)uVar32 >> 0x20) +
                 (int)((ulonglong)uVar25 >> 0x20) +
                 (int)((ulonglong)uVar31 >> 0x20) +
                 (int)((ulonglong)uVar24 >> 0x20) + uVar10 + (uint)CARRY4(uVar20,uVar9) +
                 (uint)CARRY4(uVar28,uVar3) + (uint)CARRY4(uVar21,uVar4) +
                 (uint)CARRY4(uVar29,uVar5) + (uint)CARRY4(uVar22,uVar6) +
                 (uint)CARRY4(uVar30,uVar7) + (uint)CARRY4(uVar23,uVar8);
    if (uVar11 == 0) {
      FUN_00012e1c(uVar13);
    }
    else {
      FUN_00013158();
    }
    FUN_000166a4(param_2,0);
    FUN_00014c40(uVar13,param_2,uVar12);
    uVar11 = uVar12 ^ 1;
    if (param_1 < 1) {
      uVar11 = 0;
    }
    if (uVar11 != 0) {
      param_1 = param_1 + -1;
    }
    if ((param_1 == 0) || (pause(), DAT_0002b208 != 0)) break;
    if (((uVar12 ^ 1) & DAT_0002b210 >> 0xf) != 0) {
      putchar(0x2c);
    }
    uVar13 = uVar13 ^ 1;
    putchar(10);
    uVar12 = 0;
    iVar1 = DAT_0002b214;
  }
  putchar(10);
  if ((DAT_0002b210 & 0x8000) != 0) {
    puts("\t\t\t]\n\t\t}\n\t]\n}}");
    return;
  }
  return;
}



/* ===== FUN_00015618 @ 00015618 size=520 ===== */

int FUN_00015618(void *param_1,int param_2)

{
  FILE *__stream;
  FILE *__stream_00;
  char *pcVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_207c;
  undefined1 auStack_2078 [8];
  undefined1 auStack_2070 [8];
  undefined1 auStack_2068 [8];
  undefined1 auStack_2060 [8];
  undefined1 auStack_2058 [8];
  undefined1 auStack_2050 [8];
  undefined1 auStack_2048 [8];
  undefined1 auStack_2040 [8];
  undefined1 auStack_2038 [8];
  undefined1 auStack_2030 [8];
  char acStack_2028 [3];
  char acStack_2025 [2];
  char acStack_2023 [8191];
  
  __stream_00 = fopen("/proc/stat","r");
  __stream = stderr;
  if (__stream_00 == (FILE *)0x0) {
    piVar3 = __errno_location();
    pcVar1 = strerror(*piVar3);
    fprintf(__stream,"Cannot open %s: %s\n","/proc/stat",pcVar1);
                    /* WARNING: Subroutine does not return */
    exit(2);
  }
  iVar5 = 0;
  do {
    while( true ) {
      pcVar1 = fgets(acStack_2028,0x2000,__stream_00);
      if (pcVar1 == (char *)0x0) goto LAB_000157c4;
      iVar2 = strncmp(acStack_2028,"cpu ",4);
      if (iVar2 == 0) break;
      iVar2 = strncmp(acStack_2028,"cpu",3);
      if (iVar2 == 0) {
        memset(auStack_2078,0,0x50);
        sscanf(acStack_2025,"%d %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu",&local_207c,
               auStack_2078,auStack_2070,auStack_2068,auStack_2060,auStack_2058,auStack_2048,
               auStack_2040,auStack_2050,auStack_2038,auStack_2030);
        iVar2 = local_207c;
        iVar4 = local_207c + 1;
        if (param_2 <= iVar4) {
          iVar5 = -1;
          goto LAB_000157c4;
        }
        memcpy((void *)(iVar4 * 0x50 + (int)param_1),auStack_2078,0x50);
        if (iVar5 <= iVar4) {
          iVar5 = iVar2 + 2;
        }
      }
    }
    memset(param_1,0,0x50);
    sscanf(acStack_2023,"%llu %llu %llu %llu %llu %llu %llu %llu %llu %llu",param_1,(int)param_1 + 8
           ,(int)param_1 + 0x10,(int)param_1 + 0x18,(int)param_1 + 0x20,(int)param_1 + 0x30,
           (int)param_1 + 0x38,(int)param_1 + 0x28,(int)param_1 + 0x40,(int)param_1 + 0x48);
    if (iVar5 == 0) {
      iVar5 = 1;
    }
  } while (param_2 != 1);
LAB_000157c4:
  fclose(__stream_00);
  return iVar5;
}



/* ===== FUN_00015820 @ 00015820 size=796 ===== */

int FUN_00015820(int *param_1,int param_2,int param_3)

{
  int iVar1;
  char cVar2;
  FILE *__stream;
  size_t sVar3;
  char *pcVar4;
  long lVar5;
  size_t __n;
  ulong uVar6;
  int iVar7;
  long *plVar8;
  char *__s;
  int iVar9;
  int *piVar10;
  int *__dest;
  int local_54;
  int *local_4c;
  char *local_48;
  char *local_2c [2];
  int *piVar11;
  
  iVar9 = param_2 + -1;
  if (iVar9 == 0) {
    iVar9 = 1;
    sVar3 = 4;
LAB_00015924:
    local_4c = calloc(sVar3,1);
    if (local_4c == (int *)0x0) goto LAB_00015938;
  }
  else {
    sVar3 = iVar9 * 4;
    if (sVar3 != 0) goto LAB_00015924;
    local_4c = (int *)0x0;
  }
  __stream = fopen("/proc/interrupts","r");
  if (__stream != (FILE *)0x0) {
    sVar3 = iVar9 * 0xb + 0x80;
    if (iVar9 * 0xb == -0x80) {
      local_48 = (char *)0x0;
    }
    else {
      local_48 = calloc(sVar3,1);
      if (local_48 == (char *)0x0) {
LAB_00015938:
        perror("realloc");
                    /* WARNING: Subroutine does not return */
        exit(4);
      }
    }
    do {
      pcVar4 = fgets(local_48,sVar3,__stream);
      if (pcVar4 == (char *)0x0) {
        iVar7 = 0;
        break;
      }
      local_2c[0] = local_48;
      iVar7 = 0;
      plVar8 = local_4c + -1;
      while( true ) {
        pcVar4 = strstr(local_2c[0],"CPU");
        iVar1 = 0;
        if (pcVar4 != (char *)0x0) {
          iVar1 = iVar7 - iVar9;
        }
        if (iVar1 < 0 == (pcVar4 != (char *)0x0 && SBORROW4(iVar7,iVar9))) break;
        lVar5 = strtol(pcVar4 + 3,local_2c,10);
        if (param_2 <= lVar5 + 1) {
          iVar9 = -1;
          free(local_48);
          fclose(__stream);
          goto LAB_00015968;
        }
        iVar7 = iVar7 + 1;
        plVar8 = plVar8 + 1;
        *plVar8 = lVar5;
      }
    } while (iVar7 == 0);
    __dest = param_1 + 4;
    param_1[1] = DAT_0001a03c;
    local_54 = 0;
    while ((pcVar4 = fgets(local_48,sVar3,__stream), pcVar4 != (char *)0x0 &&
           (local_54 < param_3 + -1))) {
      pcVar4 = strchr(local_48,0x3a);
      if (pcVar4 != (char *)0x0) {
        pcVar4 = pcVar4 + 1;
        local_54 = local_54 + 1;
        cVar2 = *local_48;
        __s = local_48;
        while (cVar2 == ' ') {
          __s = __s + 1;
          cVar2 = *__s;
        }
        __n = strcspn(__s,":");
        if (6 < (int)__n) {
          __n = 7;
        }
        strncpy((char *)__dest,__s,__n);
        *(undefined1 *)((int)__dest + __n) = 0;
        piVar10 = local_4c;
        if (iVar7 != 0) {
          do {
            piVar11 = piVar10 + 1;
            iVar9 = *piVar10 * param_3 + param_3;
            uVar6 = strtoul(pcVar4,local_2c,10);
            param_1[(iVar9 + local_54) * 3] = uVar6;
            __dest[-1] = __dest[-1] + uVar6;
            param_1[iVar9 * 3] = param_1[iVar9 * 3] + param_1[(iVar9 + local_54) * 3];
            pcVar4 = local_2c[0];
            piVar10 = piVar11;
          } while (local_4c + iVar7 != piVar11);
        }
        piVar10 = __dest + -1;
        __dest = __dest + 3;
        *param_1 = *param_1 + *piVar10;
      }
    }
    free(local_48);
    fclose(__stream);
    if (iVar7 != 0) {
      iVar9 = (local_4c + iVar7)[-1] + 2;
      goto LAB_00015968;
    }
  }
  iVar9 = 0;
LAB_00015968:
  free(local_4c);
  return iVar9;
}



/* ===== FUN_00015b3c @ 00015b3c size=984 ===== */

undefined4 FUN_00015b3c(int param_1)

{
  FILE *__stream;
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  char acStack_98 [5];
  char cStack_93;
  char cStack_92;
  char cStack_91;
  char cStack_90;
  char cStack_8f;
  char cStack_8e;
  char cStack_8d;
  char cStack_8c;
  char acStack_8b [115];
  
  __stream = fopen("/proc/meminfo","r");
  if (__stream == (FILE *)0x0) {
    uVar3 = 0;
  }
  else {
    while (pcVar1 = fgets(acStack_98,0x80,__stream), pcVar1 != (char *)0x0) {
      iVar2 = strncmp(acStack_98,"MemTotal:",9);
      if (iVar2 == 0) {
        sscanf(&cStack_8f,"%llu",param_1 + 0x18);
      }
      else {
        iVar2 = strncmp(acStack_98,"MemFree:",8);
        if (iVar2 == 0) {
          sscanf(&cStack_90,"%llu",param_1);
        }
        else {
          iVar2 = strncmp(acStack_98,"MemAvailable:",0xd);
          if (iVar2 == 0) {
            sscanf(acStack_8b,"%llu",param_1 + 0x80);
          }
          else {
            iVar2 = strncmp(acStack_98,"Buffers:",8);
            if (iVar2 == 0) {
              sscanf(&cStack_90,"%llu",param_1 + 8);
            }
            else {
              iVar2 = strncmp(acStack_98,"Cached:",7);
              if (iVar2 == 0) {
                sscanf(&cStack_91,"%llu",param_1 + 0x10);
              }
              else {
                iVar2 = strncmp(acStack_98,"SwapCached:",0xb);
                if (iVar2 == 0) {
                  sscanf(&cStack_8d,"%llu",param_1 + 0x30);
                }
                else {
                  iVar2 = strncmp(acStack_98,"Active:",7);
                  if (iVar2 == 0) {
                    sscanf(&cStack_91,"%llu",param_1 + 0x40);
                  }
                  else {
                    iVar2 = strncmp(acStack_98,"Inactive:",9);
                    if (iVar2 == 0) {
                      sscanf(&cStack_8f,"%llu",param_1 + 0x48);
                    }
                    else {
                      iVar2 = strncmp(acStack_98,"SwapTotal:",10);
                      if (iVar2 == 0) {
                        sscanf(&cStack_8e,"%llu",param_1 + 0x28);
                      }
                      else {
                        iVar2 = strncmp(acStack_98,"SwapFree:",9);
                        if (iVar2 == 0) {
                          sscanf(&cStack_8f,"%llu",param_1 + 0x20);
                        }
                        else {
                          iVar2 = strncmp(acStack_98,"Dirty:",6);
                          if (iVar2 == 0) {
                            sscanf(&cStack_92,"%llu",param_1 + 0x50);
                          }
                          else {
                            iVar2 = strncmp(acStack_98,"Committed_AS:",0xd);
                            if (iVar2 == 0) {
                              sscanf(acStack_8b,"%llu",param_1 + 0x38);
                            }
                            else {
                              iVar2 = strncmp(acStack_98,"AnonPages:",10);
                              if (iVar2 == 0) {
                                sscanf(&cStack_8e,"%llu",param_1 + 0x58);
                              }
                              else {
                                iVar2 = strncmp(acStack_98,"Slab:",5);
                                if (iVar2 == 0) {
                                  sscanf(&cStack_93,"%llu",param_1 + 0x60);
                                }
                                else {
                                  iVar2 = strncmp(acStack_98,"KernelStack:",0xc);
                                  if (iVar2 == 0) {
                                    sscanf(&cStack_8c,"%llu",param_1 + 0x68);
                                  }
                                  else {
                                    iVar2 = strncmp(acStack_98,"PageTables:",0xb);
                                    if (iVar2 == 0) {
                                      sscanf(&cStack_8d,"%llu",param_1 + 0x70);
                                    }
                                    else {
                                      iVar2 = strncmp(acStack_98,"VmallocUsed:",0xc);
                                      if (iVar2 == 0) {
                                        sscanf(&cStack_8c,"%llu",param_1 + 0x78);
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
    }
    fclose(__stream);
    uVar3 = 1;
  }
  return uVar3;
}



/* ===== FUN_00015f14 @ 00015f14 size=184 ===== */

void FUN_00015f14(longlong *param_1)

{
  FILE *__stream;
  char *pcVar1;
  int iVar2;
  uint local_98;
  uint local_94;
  char acStack_90 [132];
  
  __stream = fopen("/proc/uptime","r");
  if (__stream != (FILE *)0x0) {
    pcVar1 = fgets(acStack_90,0x80,__stream);
    if ((pcVar1 != (char *)0x0) &&
       (iVar2 = sscanf(acStack_90,"%lu.%lu",&local_98,&local_94), iVar2 == 2)) {
      *param_1 = (ulonglong)local_98 * 100 + (ulonglong)local_94;
      fclose(__stream);
      return;
    }
    fclose(__stream);
  }
  fprintf(stderr,"Cannot read %s\n","/proc/uptime");
                    /* WARNING: Subroutine does not return */
  exit(2);
}



/* ===== FUN_00015fcc @ 00015fcc size=276 ===== */

void FUN_00015fcc(uint *param_1,uint *param_2,undefined4 param_3,undefined4 param_4,double *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  uint in_fpscr;
  double dVar6;
  double dVar7;
  double dVar8;
  
  uVar2 = param_1[0xe];
  uVar1 = param_2[0xe];
  dVar6 = DAT_000160e0;
  if (uVar1 <= uVar2) {
    dVar7 = (double)FUN_00019388(param_3,param_4);
    dVar6 = (double)VectorUnsignedToFloat(uVar2 - uVar1,(byte)(in_fpscr >> 0x16) & 3);
    dVar6 = (dVar6 / dVar7) * DAT_000160e8;
  }
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar1 = *param_2;
  uVar2 = param_2[1];
  *param_5 = dVar6;
  bVar5 = uVar2 <= uVar4;
  if (uVar4 == uVar2) {
    bVar5 = uVar1 <= uVar3;
  }
  if (bVar5 && (uVar4 != uVar2 || uVar3 != uVar1)) {
    dVar8 = (double)FUN_00019388(uVar3 - uVar1,uVar4 - (uVar2 + (uVar3 < uVar1)));
    dVar7 = (double)VectorUnsignedToFloat
                              (((((param_1[0xc] - param_2[0xc]) + param_1[0xd]) - param_2[0xd]) +
                               param_1[0x12]) - param_2[0x12],(byte)(in_fpscr >> 0x16) & 3);
    dVar6 = (double)VectorUnsignedToFloat
                              (((((param_1[6] - param_2[6]) + param_1[8]) - param_2[8]) +
                               param_1[10]) - param_2[10],(byte)(in_fpscr >> 0x16) & 3);
    param_5[1] = dVar7 / dVar8;
    param_5[2] = dVar6 / dVar8;
    return;
  }
  param_5[1] = 0.0;
  param_5[2] = 0.0;
  return;
}



/* ===== FUN_00016348 @ 00016348 size=280 ===== */

int FUN_00016348(int param_1)

{
  DIR *__dirp;
  dirent *pdVar1;
  int iVar2;
  int iVar3;
  int local_484;
  stat sStack_480;
  char acStack_428 [1023];
  undefined1 local_29;
  
  __dirp = opendir("/sys/devices/system/cpu");
  if (__dirp == (DIR *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = -1;
    while( true ) {
      pdVar1 = readdir(__dirp);
      if (pdVar1 == (dirent *)0x0) break;
      iVar2 = strncmp(pdVar1->d_name,"cpu",3);
      if ((iVar2 == 0) && ((*(ushort *)(__ctype_b + (uint)(byte)pdVar1->d_name[3] * 2) & 8) != 0)) {
        snprintf(acStack_428,0x400,"%s/%s","/sys/devices/system/cpu",pdVar1->d_name);
        local_29 = 0;
        iVar2 = stat(acStack_428,&sStack_480);
        if ((-1 < iVar2) && ((sStack_480.st_mode & 0xf000) == 0x4000)) {
          if (param_1 == 0) {
            iVar3 = iVar3 + 1;
          }
          else {
            sscanf(pdVar1->d_name + 3,"%d",&local_484);
            if (iVar3 < local_484) {
              iVar3 = local_484;
            }
          }
        }
      }
    }
    closedir(__dirp);
    iVar3 = iVar3 + 1;
  }
  return iVar3;
}



/* ===== FUN_00016460 @ 00016460 size=248 ===== */

int FUN_00016460(void)

{
  FILE *__stream;
  FILE *__stream_00;
  char *pcVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int local_2c;
  char acStack_28 [3];
  char acStack_25 [13];
  
  __stream_00 = fopen("/proc/stat","r");
  __stream = stderr;
  if (__stream_00 == (FILE *)0x0) {
    piVar3 = __errno_location();
    pcVar1 = strerror(*piVar3);
    fprintf(__stream,"Cannot open %s: %s\n","/proc/stat",pcVar1);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  iVar4 = -1;
  while (pcVar1 = fgets(acStack_28,0x10,__stream_00), pcVar1 != (char *)0x0) {
    iVar2 = strncmp(acStack_28,"cpu ",4);
    if (((iVar2 != 0) && (iVar2 = strncmp(acStack_28,"cpu",3), iVar2 == 0)) &&
       (sscanf(acStack_25,"%d",&local_2c), iVar4 < local_2c)) {
      iVar4 = local_2c;
    }
  }
  fclose(__stream_00);
  return iVar4 + 1;
}



/* ===== FUN_00016558 @ 00016558 size=88 ===== */

void FUN_00016558(uint param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = FUN_00016348(param_2);
  if (uVar1 == 0) {
    uVar1 = FUN_00016460();
    if (uVar1 <= param_1) {
      return;
    }
  }
  else if (uVar1 <= param_1) {
    return;
  }
  fwrite("Cannot handle so many processors!\n",1,0x22,stderr);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_000165b0 @ 000165b0 size=200 ===== */

int FUN_000165b0(char *param_1,int param_2,int param_3)

{
  int iVar1;
  FILE *__stream;
  size_t sVar2;
  char *pcVar3;
  int iVar4;
  char *__s;
  size_t __nmemb;
  
  __stream = fopen(param_1,"r");
  if (__stream == (FILE *)0x0) {
    return 0;
  }
  __nmemb = param_3 * 0xb + 0x80;
  if (param_3 * 0xb == -0x80) {
    __s = (char *)0x0;
  }
  else {
    __s = calloc(__nmemb,1);
    if (__s == (char *)0x0) {
      perror("realloc");
                    /* WARNING: Subroutine does not return */
      exit(4);
    }
  }
  iVar4 = 0;
  while( true ) {
    pcVar3 = fgets(__s,__nmemb,__stream);
    iVar1 = 0;
    if (pcVar3 != (char *)0x0) {
      iVar1 = iVar4 - param_2;
    }
    if (iVar1 < 0 == (pcVar3 != (char *)0x0 && SBORROW4(iVar4,param_2))) break;
    sVar2 = strcspn(__s,":");
    if (sVar2 - 1 < 0xf) {
      iVar4 = iVar4 + 1;
    }
  }
  fclose(__stream);
  free(__s);
  return iVar4;
}



/* ===== FUN_00016678 @ 00016678 size=44 ===== */

void FUN_00016678(void)

{
  printf("sysstat version %s\n","12.7.5");
  puts("(C) Sebastien Godard (sysstat <at> orange.fr)");
                    /* WARNING: Subroutine does not return */
  exit(0);
}



/* ===== FUN_000166a4 @ 000166a4 size=92 ===== */

int FUN_000166a4(tm *param_1,int param_2,int param_3)

{
  time_t tVar1;
  int local_14;
  
  tVar1 = time((time_t *)0x0);
  local_14 = param_2 * -0x15180 + tVar1;
  if (param_3 != 0) {
    gmtime_r(&local_14,param_1);
    return local_14;
  }
  localtime_r(&local_14,param_1);
  return local_14;
}



/* ===== FUN_00016700 @ 00016700 size=112 ===== */

void FUN_00016700(undefined4 param_1,undefined4 param_2)

{
  char *__s1;
  int iVar1;
  uint uVar2;
  
  if (DAT_0002b240 == 0) {
    __s1 = getenv("S_TIME_DEF_TIME");
    uVar2 = 0;
    if (__s1 != (char *)0x0) {
      iVar1 = strcmp(__s1,"UTC");
      uVar2 = (uint)(iVar1 == 0);
    }
    DAT_0002b240 = uVar2 + 1;
  }
  FUN_000166a4(param_1,param_2,DAT_0002b240 == 2);
  return;
}



/* ===== FUN_00016770 @ 00016770 size=156 ===== */

bool FUN_00016770(undefined4 param_1,char *param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  char acStack_1018 [4096];
  
  while (pcVar1 = strchr(param_2,0x2f), pcVar1 != (char *)0x0) {
    *pcVar1 = '!';
  }
  pcVar1 = "";
  if (param_3 == 0) {
    pcVar1 = "/device";
  }
  snprintf(acStack_1018,0x1000,"%s/%s/%s%s",param_1,"block",param_2,pcVar1);
  iVar2 = access(acStack_1018,0);
  return iVar2 == 0;
}



/* ===== FUN_0001680c @ 0001680c size=88 ===== */

void FUN_0001680c(void)

{
  long lVar1;
  int iVar2;
  
  lVar1 = sysconf(0x1e);
  if (lVar1 == -1) {
    perror("sysconf");
    DAT_00031364 = 0;
  }
  else {
    iVar2 = lVar1 >> 10;
    DAT_00031364 = 0;
    if (1 < iVar2) {
      do {
        iVar2 = iVar2 >> 1;
        DAT_00031364 = DAT_00031364 + 1;
      } while (iVar2 != 1);
    }
  }
  return;
}



/* ===== FUN_00016864 @ 00016864 size=56 ===== */

void FUN_00016864(void)

{
  long lVar1;
  
  lVar1 = sysconf(2);
  if (lVar1 == -1) {
    perror("sysconf");
  }
  DAT_00031160 = lVar1;
  return;
}



/* ===== FUN_000168c8 @ 000168c8 size=292 ===== */

int FUN_000168c8(char *param_1,undefined8 *param_2,undefined4 *param_3)

{
  size_t sVar1;
  int iVar2;
  char *pcVar3;
  char acStack_34 [16];
  undefined1 local_24;
  
  param_2[1] = 0;
  *param_2 = 0;
  *param_3 = 0;
  sVar1 = strlen(param_1);
  if ((0x15 < sVar1) && (iVar2 = strncmp(param_1,"wwn-0x",6), iVar2 == 0)) {
    pcVar3 = strstr(param_1,"-part");
    if (pcVar3 != (char *)0x0) {
      iVar2 = sscanf(pcVar3 + 5,"%u",param_3);
      if (iVar2 == 0) {
        return -1;
      }
      sVar1 = (int)pcVar3 - (int)param_1;
    }
    if ((sVar1 - 0x16 & 0xffffffef) == 0) {
      strncpy(acStack_34,param_1 + 6,0x10);
      local_24 = 0;
      iVar2 = sscanf(acStack_34,"%llx",param_2);
      if (iVar2 != 0) {
        sVar1 = strlen(param_1);
        if (0x25 < sVar1) {
          iVar2 = sscanf(param_1 + 0x16,"%llx",param_2 + 1);
          return -(uint)(iVar2 == 0);
        }
        return 0;
      }
    }
  }
  return -1;
}



/* ===== FUN_000169ec @ 000169ec size=328 ===== */

undefined4 FUN_000169ec(char *param_1,undefined4 param_2,undefined4 param_3)

{
  DIR *__dirp;
  dirent *pdVar1;
  int iVar2;
  ssize_t sVar3;
  char *__s1;
  char *pcVar4;
  undefined4 uVar5;
  char acStack_3028 [4096];
  char acStack_2028 [4096];
  char acStack_1028 [4100];
  
  __dirp = opendir("/dev/disk/by-id");
  if (__dirp == (DIR *)0x0) {
    uVar5 = 0xffffffff;
  }
  else {
    do {
      do {
        do {
          do {
            pdVar1 = readdir(__dirp);
            pcVar4 = pdVar1->d_name;
            if (pdVar1 == (dirent *)0x0) {
              uVar5 = 0xffffffff;
              goto LAB_00016b14;
            }
            iVar2 = strncmp(pcVar4,"wwn-0x",6);
          } while (iVar2 != 0);
          snprintf(acStack_2028,0x1000,"%s/%s","/dev/disk/by-id",pcVar4);
          sVar3 = readlink(acStack_2028,acStack_1028,0x1000);
        } while (0xffe < sVar3 - 1U);
        acStack_1028[sVar3] = '\0';
        __s1 = __xpg_basename(acStack_1028);
      } while (((__s1 == (char *)0x0) || (*__s1 == '\0')) ||
              (iVar2 = strncmp(__s1,param_1,0xfff), iVar2 != 0));
      pcVar4 = strncpy(acStack_3028,pcVar4,0x100);
      pcVar4[0xffe] = '\0';
      iVar2 = FUN_000168c8(pcVar4,param_2,param_3);
    } while (iVar2 != 0);
    uVar5 = 0;
LAB_00016b14:
    closedir(__dirp);
  }
  return uVar5;
}



/* ===== FUN_00016b34 @ 00016b34 size=52 ===== */

bool FUN_00016b34(char *param_1)

{
  int iVar1;
  stat sStack_60;
  
  iVar1 = stat(param_1,&sStack_60);
  return iVar1 == 0 && (sStack_60.st_mode & 0xf000) == 0x4000;
}



/* ===== FUN_00016bc4 @ 00016bc4 size=148 ===== */

undefined4 FUN_00016bc4(void)

{
  FILE *__stream;
  char *pcVar1;
  undefined4 local_94;
  char acStack_90 [128];
  
  local_94 = 0xffffffff;
  __stream = fopen("/proc/devices","r");
  if (__stream != (FILE *)0x0) {
    while( true ) {
      pcVar1 = fgets(acStack_90,0x80,__stream);
      if (pcVar1 == (char *)0x0) break;
      pcVar1 = strstr(acStack_90,"device-mapper");
      if (pcVar1 != (char *)0x0) {
        sscanf(acStack_90,"%u",&local_94);
      }
    }
    fclose(__stream);
  }
  return local_94;
}



/* ===== FUN_00016c58 @ 00016c58 size=76 ===== */

void FUN_00016c58(void)

{
  char *__s1;
  int iVar1;
  
  if ((int)DAT_0002b12c < 0) {
    __s1 = getenv("S_TIME_FORMAT");
    if (__s1 == (char *)0x0) {
      DAT_0002b12c = 0;
    }
    else {
      iVar1 = strcmp(__s1,"ISO");
      DAT_0002b12c = (uint)(iVar1 == 0);
    }
    return;
  }
  return;
}



/* ===== FUN_00016ca4 @ 00016ca4 size=40 ===== */

void FUN_00016ca4(int param_1)

{
  int iVar1;
  
  if (param_1 < 1) {
    return;
  }
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    putchar(9);
  } while (param_1 != iVar1);
  return;
}



/* ===== FUN_00016ccc @ 00016ccc size=108 ===== */

void FUN_00016ccc(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_8 = param_3;
  uStack_4 = param_4;
  vsnprintf(DAT_00016d38,0x400,param_2,&uStack_8);
  if (0 < param_1) {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
      putchar(9);
    } while (param_1 != iVar1);
  }
  printf("%s",DAT_00016d38);
  return;
}



/* ===== FUN_00016d3c @ 00016d3c size=100 ===== */

void FUN_00016d3c(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_8 = param_3;
  uStack_4 = param_4;
  vsnprintf(DAT_00016da0,0x400,param_2,&uStack_8);
  if (0 < param_1) {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
      putchar(9);
    } while (param_1 != iVar1);
  }
  puts(DAT_00016da0);
  return;
}



/* ===== FUN_00016da4 @ 00016da4 size=108 ===== */

bool FUN_00016da4(tm *param_1,char *param_2,size_t param_3)

{
  int iVar1;
  char *__format;
  
  if (param_1 == (tm *)0x0) {
    strncpy(param_2,"?/?/?",param_3);
    param_2[param_3 - 1] = '\0';
    return false;
  }
  iVar1 = FUN_00016c58();
  if (iVar1 != 0) {
    __format = "%Y-%m-%d";
  }
  else {
    __format = "%x";
  }
  strftime(param_2,param_3,__format,param_1);
  return iVar1 != 0;
}



/* ===== FUN_00016e10 @ 00016e10 size=304 ===== */

undefined4
FUN_00016e10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int param_7)

{
  undefined4 uVar1;
  undefined1 auStack_58 [64];
  
  uVar1 = FUN_00016da4(param_1,auStack_58,0x40);
  if (param_7 == 0) {
    printf("%s %s (%s) \t%s \t_%s_\t(%d CPU)\n",param_2,param_3,param_4,auStack_58,param_5,param_6);
    return uVar1;
  }
  FUN_00016d3c(0,"{\"sysstat\": {");
  FUN_00016d3c(1,"\"hosts\": [");
  FUN_00016d3c(2,"{");
  FUN_00016d3c(3,"\"nodename\": \"%s\",",param_4);
  FUN_00016d3c(3,"\"sysname\": \"%s\",",param_2);
  FUN_00016d3c(3,"\"release\": \"%s\",",param_3);
  FUN_00016d3c(3,"\"machine\": \"%s\",",param_5);
  FUN_00016d3c(3,"\"number-of-cpus\": %d,",param_6);
  FUN_00016d3c(3,"\"date\": \"%s\",",auStack_58);
  FUN_00016d3c(3,"\"statistics\": [");
  return uVar1;
}



/* ===== FUN_00016f40 @ 00016f40 size=140 ===== */

int FUN_00016f40(void)

{
  int iVar1;
  char *__s;
  size_t sVar2;
  size_t sVar3;
  long lVar4;
  ushort local_18 [6];
  
  iVar1 = ioctl(1,0x5413,local_18);
  if (iVar1 == -1) {
    __s = getenv("S_REPEAT_HEADER");
    if (__s != (char *)0x0) {
      sVar2 = strspn(__s,"0123456789");
      sVar3 = strlen(__s);
      if ((sVar2 == sVar3) && (lVar4 = atol(__s), 0 < lVar4)) {
        return lVar4;
      }
    }
  }
  else if (2 < local_18[0]) {
    return local_18[0] - 2;
  }
  return 0x15180;
}



/* ===== FUN_00016fcc @ 00016fcc size=140 ===== */

char * FUN_00016fcc(char *param_1)

{
  char *__s;
  char *__s1;
  int iVar1;
  char *pcVar2;
  
  __s1 = realpath(param_1,(char *)0x0);
  if (__s1 != (char *)0x0) {
    iVar1 = strncmp(__s1,"/dev/",5);
    __s = DAT_00017058;
    pcVar2 = __s1;
    if (iVar1 == 0) {
      pcVar2 = __s1 + 5;
    }
    strncpy(DAT_00017058,pcVar2,0x200);
    DAT_0002bc43 = 0;
    while (pcVar2 = strchr(__s,0x2f), pcVar2 != (char *)0x0) {
      *pcVar2 = '!';
    }
    free(__s1);
    return DAT_00017058;
  }
  return param_1;
}



/* ===== FUN_0001705c @ 0001705c size=92 ===== */

undefined4
FUN_0001705c(uint param_1,uint param_2,uint param_3,uint param_4,undefined4 param_5,
            undefined4 param_6)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  
  bVar1 = param_2 <= param_4;
  if (param_4 == param_2) {
    bVar1 = param_1 <= param_3;
  }
  if (bVar1) {
    dVar2 = (double)FUN_00019388(param_3 - param_1,param_4 - (param_2 + (param_3 < param_1)));
    dVar3 = (double)FUN_00019388(param_5,param_6);
    return SUB84((dVar2 / dVar3) * DAT_000170b8,0);
  }
  return 0;
}



/* ===== FUN_000170c0 @ 000170c0 size=48 ===== */

undefined8 FUN_000170c0(uint param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  
  iVar1 = param_3 - param_1;
  param_4 = param_4 - (param_2 + (uint)(param_3 < param_1));
  if (iVar1 == 0 && param_4 == 0) {
    iVar1 = 1;
    param_4 = 0;
  }
  return CONCAT44(param_4,iVar1);
}



/* ===== FUN_00017140 @ 00017140 size=56 ===== */

void FUN_00017140(byte *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*param_1;
  if (uVar1 != 0) {
    do {
      *param_1 = (byte)*(undefined2 *)(__ctype_tolower + uVar1 * 2);
      param_1 = param_1 + 1;
      uVar1 = (uint)*param_1;
    } while (uVar1 != 0);
    return;
  }
  return;
}



/* ===== FUN_00017178 @ 00017178 size=104 ===== */

undefined * FUN_00017178(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = snprintf(&DAT_0002ee28,0x1000,"%s-%s","/dev/disk/by",param_1);
  if ((uVar1 < 0x1000) && (iVar2 = access(&DAT_0002ee28,4), iVar2 == 0)) {
    return &DAT_0002ee28;
  }
  return (undefined *)0x0;
}



/* ===== FUN_000171e0 @ 000171e0 size=116 ===== */

undefined * FUN_000171e0(undefined4 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = FUN_00017178(&DAT_00031164);
  uVar2 = snprintf(&DAT_0002de28,0x1000,"%s/%s",uVar1,param_1);
  if ((uVar2 < 0x1000) && (iVar3 = access(&DAT_0002de28,0), iVar3 == 0)) {
    return &DAT_0002de28;
  }
  return (undefined *)0x0;
}



/* ===== FUN_00017254 @ 00017254 size=356 ===== */

void * FUN_00017254(void)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  char *__dest;
  int iVar5;
  undefined4 *puVar6;
  dirent **ppdVar7;
  void *pvVar9;
  dirent **ppdVar10;
  dirent **local_2c [2];
  dirent **ppdVar8;
  
  pcVar1 = (char *)FUN_00017178(&DAT_00031164);
  if ((pcVar1 == (char *)0x0) ||
     (iVar2 = scandir(pcVar1,local_2c,(__selector *)0x0,alphasort), ppdVar10 = local_2c[0],
     iVar2 < 0)) {
    return (void *)0x0;
  }
  if (iVar2 < 3) {
    if (iVar2 == 0) {
      pvVar9 = (void *)0x0;
      goto LAB_000172c4;
    }
    pvVar9 = (void *)0x0;
  }
  else {
    pvVar9 = calloc(iVar2 - 1,4);
    if (pvVar9 != (void *)0x0) {
      iVar5 = 0;
      ppdVar7 = ppdVar10;
      do {
        ppdVar8 = ppdVar7 + 1;
        pcVar1 = (*ppdVar7)->d_name;
        puVar6 = (undefined4 *)((int)pvVar9 + iVar5 * 4);
        iVar3 = strcmp(".",pcVar1);
        if ((iVar3 != 0) && (iVar3 = strcmp("..",pcVar1), iVar3 != 0)) {
          sVar4 = strlen(pcVar1);
          __dest = calloc(sVar4 + 1,1);
          *puVar6 = __dest;
          if (__dest != (char *)0x0) {
            strcpy(__dest,pcVar1);
            puVar6 = (undefined4 *)((int)pvVar9 + iVar5 * 4 + 4);
            iVar5 = iVar5 + 1;
          }
        }
        ppdVar7 = ppdVar8;
      } while (ppdVar10 + iVar2 != ppdVar8);
      *puVar6 = 0;
    }
  }
  iVar5 = 0;
  do {
    ppdVar10 = ppdVar10 + iVar5;
    iVar5 = iVar5 + 1;
    free(*ppdVar10);
    ppdVar10 = local_2c[0];
  } while (iVar5 < iVar2);
LAB_000172c4:
  free(local_2c[0]);
  return pvVar9;
}



/* ===== FUN_000173b8 @ 000173b8 size=276 ===== */

undefined1 * FUN_000173b8(char *param_1)

{
  int *__ptr;
  char *pcVar1;
  ssize_t sVar2;
  int iVar3;
  void *__ptr_00;
  int *piVar4;
  int *piVar5;
  char acStack_1028 [4100];
  
  DAT_0002ce28 = '\0';
  __ptr = (int *)FUN_00017254();
  piVar5 = __ptr;
  if (__ptr != (int *)0x0) {
    do {
      do {
        piVar4 = piVar5;
        piVar5 = piVar4 + 1;
        if (*piVar4 == 0) goto LAB_00017478;
        pcVar1 = (char *)FUN_000171e0();
      } while ((pcVar1 == (char *)0x0) ||
              (sVar2 = readlink(pcVar1,acStack_1028,0x1000), 0xffe < sVar2 - 1U));
      acStack_1028[sVar2] = '\0';
      pcVar1 = __xpg_basename(acStack_1028);
    } while ((pcVar1 == (char *)0x0) ||
            ((*pcVar1 == '\0' || (iVar3 = strncmp(pcVar1,param_1,0xfff), iVar3 != 0))));
    strncpy(&DAT_0002ce28,(char *)*piVar4,0xfff);
    DAT_0002de26 = 0;
LAB_00017478:
    __ptr_00 = (void *)*__ptr;
    piVar5 = __ptr;
    while (__ptr_00 != (void *)0x0) {
      free(__ptr_00);
      piVar5 = piVar5 + 1;
      __ptr_00 = (void *)*piVar5;
    }
    free(__ptr);
    if (DAT_0002ce28 != '\0') {
      return &DAT_0002ce28;
    }
  }
  return (undefined1 *)0x0;
}



/* ===== FUN_000174cc @ 000174cc size=120 ===== */

char * FUN_000174cc(void)

{
  char *pcVar1;
  ssize_t sVar2;
  char acStack_1008 [4100];
  
  pcVar1 = (char *)FUN_000171e0();
  if ((pcVar1 != (char *)0x0) && (sVar2 = readlink(pcVar1,acStack_1008,0x1000), sVar2 - 1U < 0xfff))
  {
    acStack_1008[sVar2] = '\0';
    pcVar1 = __xpg_basename(acStack_1008);
    if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
      return pcVar1;
    }
  }
  return (char *)0x0;
}



/* ===== FUN_00017544 @ 00017544 size=156 ===== */

char * FUN_00017544(undefined4 param_1,undefined4 param_2)

{
  ssize_t sVar1;
  char *__string;
  size_t sVar2;
  
  snprintf(DAT_000175e0,0x100,"%s/%u:%u","/sys/dev/block",param_1,param_2);
  sVar1 = readlink(DAT_000175e0,&DAT_0002be28,0x1000);
  if (sVar1 - 1U < 0xfff) {
    (&DAT_0002be28)[sVar1] = 0;
    __string = __xpg_basename(&DAT_0002be28);
    if ((__string != (char *)0x0) && (sVar2 = strnlen(__string,0xfff), sVar2 != 0)) {
      return __string;
    }
  }
  return (char *)0x0;
}



/* ===== FUN_000175e4 @ 000175e4 size=124 ===== */

char * FUN_000175e4(undefined4 param_1,undefined4 param_2)

{
  char *__s1;
  int iVar1;
  
  __s1 = (char *)FUN_00017544();
  if ((__s1 == (char *)0x0) &&
     ((__s1 = (char *)FUN_00018ca4(param_1,param_2), __s1 == (char *)0x0 ||
      (iVar1 = strcmp(__s1,"nodev"), iVar1 == 0)))) {
    snprintf(DAT_00017660,0x20,"dev%u-%u",param_1,param_2);
    return DAT_00017660;
  }
  return __s1;
}



/* ===== FUN_00017664 @ 00017664 size=440 ===== */

char * FUN_00017664(int param_1,undefined4 param_2,int *param_3,int param_4,int param_5,int param_6,
                   int param_7,char *param_8)

{
  char *pcVar1;
  char *pcVar2;
  char local_50 [24];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (param_6 != 0) {
    FUN_000175e4();
    pcVar2 = (char *)FUN_000173b8();
    if (pcVar2 != (char *)0x0) goto LAB_00017718;
  }
  if ((param_7 == 0) || (*param_3 == 0 && param_3[1] == 0)) {
    if (param_5 != 0) {
      if (DAT_0002bda4 == 0) {
        DAT_0002bda4 = FUN_00016bc4();
      }
      if ((DAT_0002bda4 == param_1) &&
         (pcVar2 = (char *)FUN_00018e5c(DAT_0002bda4,param_2), pcVar2 != (char *)0x0))
      goto LAB_00017718;
    }
    pcVar2 = param_8;
    if (param_8 == (char *)0x0) {
      pcVar2 = (char *)FUN_000175e4(param_1,param_2);
    }
  }
  else {
    uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    local_50[0x14] = '\0';
    local_50[0x15] = '\0';
    local_50[0x16] = '\0';
    local_50[0x17] = '\0';
    local_50[0x10] = '\0';
    local_50[0x11] = '\0';
    local_50[0x12] = '\0';
    local_50[0x13] = '\0';
    local_50[4] = '\0';
    local_50[5] = '\0';
    local_50[6] = '\0';
    local_50[7] = '\0';
    local_50[0] = '\0';
    local_50[1] = '\0';
    local_50[2] = '\0';
    local_50[3] = '\0';
    local_50[8] = '\0';
    local_50[9] = '\0';
    local_50[10] = '\0';
    local_50[0xb] = '\0';
    local_50[0xc] = '\0';
    local_50[0xd] = '\0';
    local_50[0xe] = '\0';
    local_50[0xf] = '\0';
    local_30 = 0;
    uStack_2c = uStack_38;
    uStack_28 = uStack_34;
    if (param_3[2] != 0 || param_3[3] != 0) {
      sprintf(local_50 + 0x10,"%016llx",param_3[2],param_3[3]);
    }
    if (param_4 != 0) {
      sprintf(local_50,"-%u",param_4);
    }
    param_8 = DAT_0001781c;
    snprintf(DAT_0001781c,0x40,"%#016llx%s%s");
    pcVar2 = param_8;
  }
LAB_00017718:
  param_8 = pcVar2;
  strncpy(DAT_00017820,param_8,0x80);
  pcVar2 = DAT_00017820;
  DAT_0002be27 = 0;
  while (pcVar1 = strchr(pcVar2,0x21), pcVar1 != (char *)0x0) {
    *pcVar1 = '/';
  }
  return DAT_00017820;
}



/* ===== FUN_00017824 @ 00017824 size=532 ===== */

void FUN_00017824(void)

{
  char *pcVar1;
  int iVar2;
  char *__s;
  size_t sVar3;
  size_t sVar4;
  char *__s_00;
  
  pcVar1 = getenv("S_COLORS");
  if (pcVar1 != (char *)0x0) {
    iVar2 = strcmp(pcVar1,"never");
    if (iVar2 == 0) {
      DAT_0002b130 = 0;
      DAT_0002b140 = 0;
      DAT_0002b150 = 0;
      DAT_0002b160 = 0;
      DAT_0002b170 = 0;
      DAT_0002b180 = 0;
      DAT_0002b190 = 0;
      DAT_0002b1a0 = 0;
      DAT_0002b1b0 = 0;
      DAT_0002b1c0 = 0;
      return;
    }
    iVar2 = strcmp(pcVar1,"always");
    if (iVar2 == 0) goto LAB_00017868;
  }
  iVar2 = isatty(1);
  if (iVar2 == 0) {
    DAT_0002b130 = 0;
    DAT_0002b140 = 0;
    DAT_0002b150 = 0;
    DAT_0002b160 = 0;
    DAT_0002b170 = 0;
    DAT_0002b180 = 0;
    DAT_0002b190 = 0;
    DAT_0002b1a0 = 0;
    DAT_0002b1b0 = 0;
    DAT_0002b1c0 = 0;
    return;
  }
LAB_00017868:
  pcVar1 = getenv("S_COLORS_SGR");
  if (pcVar1 == (char *)0x0) {
    return;
  }
  __s = strtok(pcVar1,":");
  pcVar1 = DAT_00017af8;
  if (__s != (char *)0x0) {
    do {
      sVar3 = strlen(__s);
      if ((sVar3 - 3 < 5) && (__s[1] == '=')) {
        __s_00 = __s + 2;
        sVar4 = strspn(__s_00,";0123456789");
        if (sVar4 == sVar3 - 2) {
          switch(*__s) {
          case '+':
            snprintf(DAT_00017b04,0x10,"\x1b[%sm",__s_00);
            break;
          case '-':
            snprintf(pcVar1,0x10,"\x1b[%sm",__s_00);
            break;
          case 'C':
            snprintf(DAT_00017b08,0x10,"\x1b[%sm",__s_00);
            break;
          case 'H':
          case 'X':
            snprintf(DAT_00017b0c,0x10,"\x1b[%sm",__s_00);
            break;
          case 'I':
            snprintf(DAT_00017b10,0x10,"\x1b[%sm",__s_00);
            break;
          case 'M':
          case 'W':
            snprintf(DAT_00017afc,0x10,"\x1b[%sm",__s_00);
            break;
          case 'N':
            snprintf(DAT_00017b14,0x10,"\x1b[%sm",__s_00);
            break;
          case 'R':
            snprintf(DAT_00017b18,0x10,"\x1b[%sm",__s_00);
            break;
          case 'Z':
            snprintf(DAT_00017b00,0x10,"\x1b[%sm",__s_00);
          }
        }
      }
      __s = strtok((char *)0x0,":");
    } while (__s != (char *)0x0);
    return;
  }
  return;
}



/* ===== FUN_00017b1c @ 00017b1c size=164 ===== */

void FUN_00017b1c(int param_1,int param_2)

{
  double in_d0;
  
  if (param_2 < 4) {
    param_2 = 4;
  }
  if (param_1 == 0) {
    param_1 = 2;
    in_d0 = in_d0 * 0.5;
  }
  for (; DAT_00017bc0 <= in_d0; in_d0 = in_d0 * DAT_00017bc8) {
    param_1 = param_1 + 1;
  }
  if (param_1 < 8) {
    param_1 = (int)&DAT_0002b12c + param_1;
  }
  else {
    param_1 = 0x2b133;
  }
  printf(" %*.*f",param_2 + -1,(uint)(DAT_0002b128 != 0),&DAT_0002b128,in_d0);
  printf("%s",&DAT_0002b1c0);
  putchar((uint)*(byte *)(param_1 + 0xa4));
  return;
}



/* ===== FUN_00017bd0 @ 00017bd0 size=212 ===== */

void FUN_00017bd0(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *local_34;
  int iStack_4;
  
  iVar1 = DAT_00017ca4;
  local_34 = &iStack_4;
  if (0 < param_2) {
    iVar5 = 0;
    iVar6 = DAT_00017ca4 + -0x10;
    iStack_4 = param_4;
    do {
      while( true ) {
        piVar4 = (int *)((int)local_34 + 7U & 0xfffffff8);
        local_34 = piVar4 + 2;
        iVar7 = *piVar4;
        iVar8 = piVar4[1];
        iVar3 = iVar1;
        if (iVar7 == 0 && iVar8 == 0) {
          iVar3 = iVar6;
        }
        printf("%s",iVar3);
        if (-1 < param_1) break;
        iVar5 = iVar5 + 1;
        printf(" %*llu",param_3);
        printf("%s",DAT_00017ca8);
        if (param_2 == iVar5) {
          return;
        }
      }
      uVar2 = FUN_00019388(iVar7,iVar8,iVar7,iVar8);
      iVar5 = iVar5 + 1;
      FUN_00017b1c(uVar2,param_1,param_3);
    } while (param_2 != iVar5);
  }
  return;
}



/* ===== FUN_00017d38 @ 00017d38 size=464 ===== */

void FUN_00017d38(int param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double *local_5c;
  
  uVar1 = DAT_00017f18;
  dVar4 = DAT_00017f08;
  if (0 < param_5) {
    if (-1 < DAT_0002b128) {
      param_5 = DAT_0002b128;
    }
    if (param_5 == 1) {
      dVar4 = DAT_00017f10;
    }
  }
  local_5c = (double *)&stack0x00000004;
  if (0 < param_3) {
    iVar2 = 0;
    do {
      while( true ) {
        pdVar3 = (double *)((uint)((int)local_5c + 7U) & 0xfffffff8);
        local_5c = pdVar3 + 1;
        dVar5 = *pdVar3;
        if (0 < param_5) break;
        if ((param_5 == 0) && ((dVar5 <= 0.5 && (-0.5 <= dVar5)))) goto LAB_00017dd0;
LAB_00017e60:
        if (param_2 != 0) {
          if (dVar5 <= -10.0) {
            printf("%s",DAT_00017f28);
          }
          else {
            if (-5.0 < dVar5) goto LAB_00017e80;
            printf("%s",DAT_00017f24);
          }
          if (-1 < param_1) goto LAB_00017e98;
          goto LAB_00017ed8;
        }
LAB_00017e80:
        printf("%s",DAT_00017f20);
        if (param_1 < 0) goto LAB_00017de8;
LAB_00017e98:
        iVar2 = iVar2 + 1;
        FUN_00017b1c(SUB84(dVar5,0),param_1,param_4);
        if (param_3 == iVar2) {
          return;
        }
      }
      if ((dVar4 <= dVar5) || (dVar5 <= -dVar4)) goto LAB_00017e60;
LAB_00017dd0:
      printf("%s",DAT_00017f1c);
      if (-1 < param_1) goto LAB_00017e98;
LAB_00017de8:
      if (param_2 == 0) {
        printf(" %*.*f",param_4,param_5);
      }
      else {
LAB_00017ed8:
        printf(" %+*.*f",param_4,param_5);
      }
      iVar2 = iVar2 + 1;
      printf("%s",uVar1);
    } while (param_3 != iVar2);
  }
  return;
}



/* ===== FUN_00017f2c @ 00017f2c size=504 ===== */

void FUN_00017f2c(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  double *pdVar1;
  double *pdVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  
  if ((0 < param_5) && (-1 < DAT_0002b128)) {
    param_5 = DAT_0002b128;
  }
  if (0 < param_1) {
    if (param_4 < 4) {
      param_4 = 4;
    }
    param_4 = param_4 + -1;
    if (1 < param_5) {
      param_5 = param_5 + -1;
    }
  }
  pdVar2 = (double *)&stack0x00000004;
  dVar5 = DAT_00018128;
  if (param_5 == 1) {
    dVar5 = DAT_00018130;
  }
  if (0 < param_3) {
    iVar3 = 0;
    do {
      pdVar1 = (double *)((uint)((int)pdVar2 + 7U) & 0xfffffff8);
      pdVar2 = pdVar1 + 1;
      dVar4 = *pdVar1;
      if (param_2 == 1) {
        if (DAT_00018138 <= dVar4) {
LAB_000180c8:
          printf("%s",DAT_00018158);
        }
        else {
          if (dVar4 < DAT_00018140) goto LAB_00017fd0;
          printf("%s",DAT_00018150);
        }
      }
      else {
        if (param_2 == 2) {
          if (dVar4 <= 10.0) goto LAB_000180c8;
          if (dVar4 <= 25.0) {
            printf("%s",DAT_00018150);
            goto LAB_00017ff0;
          }
        }
        else if (param_2 == 3) {
          if ((dVar4 <= 10.0) && (dVar5 <= dVar4)) goto LAB_000180c8;
          if ((dVar4 <= 25.0) && (dVar5 <= dVar4)) {
            printf("%s",DAT_00018150);
            goto LAB_00017ff0;
          }
        }
LAB_00017fd0:
        if (param_5 < 1) {
          if ((param_5 == 0) && (dVar4 <= 0.5)) goto LAB_00018090;
        }
        else if (dVar4 < dVar5) {
LAB_00018090:
          printf("%s",DAT_00018154);
          goto LAB_00017ff0;
        }
        printf("%s",DAT_00018148);
      }
LAB_00017ff0:
      printf(" %*.*f",param_4,param_5);
      printf("%s",DAT_0001814c);
      if (0 < param_1) {
        printf("%%");
      }
      iVar3 = iVar3 + 1;
    } while (param_3 != iVar3);
  }
  return;
}



/* ===== FUN_0001815c @ 0001815c size=76 ===== */

void FUN_0001815c(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  printf("%s",DAT_000181a8);
  if (param_1 == 0) {
    param_3 = param_4;
  }
  printf(param_2,param_3);
  printf("%s",DAT_000181ac);
  return;
}



/* ===== FUN_00018290 @ 00018290 size=116 ===== */

uint FUN_00018290(char *param_1,int param_2,uint *param_3)

{
  size_t sVar1;
  size_t sVar2;
  uint uVar3;
  
  if (*param_1 == '\0') {
    *param_3 = 0xffffffff;
    return 0;
  }
  sVar1 = strspn(param_1,"0123456789");
  sVar2 = strlen(param_1);
  if (sVar1 == sVar2) {
    uVar3 = atoi(param_1);
    *param_3 = uVar3;
    return (uint)(param_2 <= (int)uVar3) | uVar3 >> 0x1f;
  }
  return 1;
}



/* ===== FUN_00018304 @ 00018304 size=228 ===== */

bool FUN_00018304(char *param_1,int param_2,int *param_3,int *param_4)

{
  char *pcVar1;
  int iVar2;
  char acStack_30 [15];
  undefined1 local_21;
  
  strncpy(acStack_30,param_1,0x10);
  local_21 = 0;
  pcVar1 = strchr(acStack_30,0x2d);
  if (pcVar1 == (char *)0x0) {
    iVar2 = FUN_00018290(param_1,param_2,param_4);
    if ((iVar2 == 0) && (-1 < *param_4)) {
      *param_3 = *param_4;
      return false;
    }
  }
  else {
    *pcVar1 = '\0';
    iVar2 = FUN_00018290(acStack_30,param_2,param_3);
    if (((iVar2 == 0) && (-1 < *param_3)) &&
       (iVar2 = FUN_00018290(pcVar1 + 1,param_2,param_4), iVar2 == 0)) {
      iVar2 = *param_4;
      if (iVar2 < 0) {
        iVar2 = param_2 + -1;
        *param_4 = iVar2;
      }
      return iVar2 < *param_3;
    }
  }
  return true;
}



/* ===== FUN_000183e8 @ 000183e8 size=272 ===== */

undefined4 FUN_000183e8(char *param_1,byte *param_2,int param_3,char *param_4)

{
  int iVar1;
  char *__s1;
  uint uVar2;
  uint local_20;
  int local_1c;
  
  iVar1 = strcmp(param_1,"ALL");
  if (iVar1 == 0) {
    memset(param_2,-1,(param_3 + 1 >> 3) + 1);
    return 0;
  }
  __s1 = strtok(param_1,",");
  do {
    if (__s1 == (char *)0x0) {
      return 0;
    }
    iVar1 = strcmp(__s1,param_4);
    if (iVar1 == 0) {
      *param_2 = *param_2 | 1;
    }
    else {
      iVar1 = FUN_00018304(__s1,param_3,&local_20,&local_1c);
      uVar2 = local_20;
      if (iVar1 != 0) {
        return 1;
      }
      while ((int)uVar2 <= local_1c) {
        uVar2 = uVar2 + 1;
        param_2[(int)uVar2 >> 3] = param_2[(int)uVar2 >> 3] | (byte)(1 << (uVar2 & 7));
      }
    }
    __s1 = strtok((char *)0x0,",");
  } while( true );
}



/* ===== FUN_000185c4 @ 000185c4 size=140 ===== */

void FUN_000185c4(void)

{
  int *piVar1;
  int *__ptr;
  int *piVar2;
  int *piVar3;
  
  piVar1 = DAT_00018654;
  piVar2 = DAT_00018650;
  piVar3 = DAT_00018650;
  do {
    piVar3 = piVar3 + 1;
    __ptr = (int *)*piVar3;
    if ((__ptr != (int *)0x0) && (*__ptr == 0)) {
      if ((void *)__ptr[3] != (void *)(__ptr[4] + 0x84)) {
        free((void *)__ptr[3]);
        __ptr = (int *)*piVar3;
      }
      free(__ptr);
      *piVar3 = 0;
    }
  } while (piVar3 != piVar1);
  do {
    piVar2 = piVar2 + 1;
    if (*piVar2 != 0) {
      free(*(void **)(*piVar2 + 0x10));
      free((void *)*piVar2);
      *piVar2 = 0;
    }
  } while (piVar2 != piVar1);
  return;
}



/* ===== FUN_00018658 @ 00018658 size=1608 ===== */

int FUN_00018658(void)

{
  undefined2 uVar1;
  char cVar2;
  FILE *__stream;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  char *__src;
  size_t sVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char *__ptr;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int local_1e4;
  uint local_1e0;
  uint local_1dc;
  char local_1d8 [16];
  char local_1c8;
  char acStack_1c7 [15];
  char local_1b8 [16];
  undefined4 local_1a8 [7];
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  char acStack_168 [63];
  undefined1 local_129;
  char local_128 [260];
  
  __stream = fopen("/etc/sysconfig/sysstat.ioconf","r");
  if (__stream == (FILE *)0x0) {
    __stream = fopen("./sysstat.ioconf","r");
    if (__stream == (FILE *)0x0) {
      return 0;
    }
    strncpy(acStack_168,"./sysstat.ioconf",0x40);
  }
  else {
    strncpy(acStack_168,"/etc/sysconfig/sysstat.ioconf",0x40);
  }
  local_129 = 0;
  memset(DAT_00018ca0,0,0x800);
  local_1e4 = 0;
  __ptr = (char *)0x0;
  __src = (char *)0x0;
LAB_000186bc:
  do {
    while( true ) {
      do {
        pcVar3 = fgets(local_128,0xff,__stream);
        if (pcVar3 == (char *)0x0) {
          fclose(__stream);
          free(__src);
          free(__ptr);
          DAT_00030e3c = 1;
          return local_1e4;
        }
      } while (local_128[0] == '\n' || local_128[0] == '#');
      if ((__src == (char *)0x0) && (__src = malloc(0xf0), __src == (char *)0x0)) {
        perror("malloc");
        FUN_000185c4();
        fclose(__stream);
        if (__ptr == (char *)0x0) {
          return 0;
        }
        goto LAB_00018b0c;
      }
      if ((__ptr == (char *)0x0) && (__ptr = malloc(0x14), __ptr == (char *)0x0)) {
        perror("malloc");
        FUN_000185c4();
        fclose(__stream);
        free(__src);
        return 0;
      }
      pcVar3 = __ptr + 4;
      memset(__src,0,0xf0);
      puVar12 = local_1a8;
      __ptr[0] = '\0';
      __ptr[1] = '\0';
      __ptr[2] = '\0';
      __ptr[3] = '\0';
      *(undefined4 *)(__ptr + 4) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      *(undefined4 *)(__ptr + 8) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      *(undefined4 *)(__ptr + 0xc) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      __ptr[0xc] = '\0';
      __ptr[0xd] = '\0';
      __ptr[0xe] = '\0';
      __ptr[0xf] = '\0';
      *(undefined4 *)(__ptr + 0x10) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4)
      ;
      iVar4 = sscanf(local_128,"%u:%u:%u:%63s",&local_1e0,&local_1dc,pcVar3,puVar12);
      if ((iVar4 != 4) &&
         (iVar4 = sscanf(local_128,"%u:%u:%u",&local_1e0,&local_1dc,pcVar3,puVar12), 1 < iVar4 - 3U)
         ) break;
      if (local_1dc != 0) {
        if (local_1dc < 0x200) {
          if (local_1e0 < 0x200) {
            iVar8 = local_1dc * 4;
            if ((&DAT_0002fe3c)[local_1dc] == 0) {
              fprintf(stderr,
                      "%s: Indirect record \'%u:%u:%u:...\' references not yet seen major %u\n",
                      acStack_168,local_1e0,local_1dc,*(undefined4 *)(__ptr + 4),local_1e0);
            }
            else {
              if (iVar4 == 3) {
                *(int *)(__ptr + 0xc) = *(int *)((&DAT_0002fe3c)[local_1dc] + 0x10) + 0x84;
              }
              else {
                puVar12 = *(undefined4 **)(__ptr + 0xc);
                if (puVar12 == (undefined4 *)0x0) {
                  puVar12 = malloc(0x40);
                  *(undefined4 **)(__ptr + 0xc) = puVar12;
                  if (puVar12 == (undefined4 *)0x0) {
                    perror("malloc");
                    FUN_000185c4();
                    fclose(__stream);
                    free(__src);
LAB_00018b0c:
                    free(__ptr);
                    return 0;
                  }
                }
                puVar11 = local_1a8;
                do {
                  uVar5 = *puVar11;
                  uVar7 = puVar11[1];
                  uVar9 = puVar11[2];
                  uVar10 = puVar11[3];
                  pcVar3 = (char *)(puVar11 + 4);
                  puVar11 = puVar11 + 4;
                  *puVar12 = uVar5;
                  puVar12[1] = uVar7;
                  puVar12[2] = uVar9;
                  puVar12[3] = uVar10;
                  puVar12 = puVar12 + 4;
                } while (pcVar3 != acStack_168);
                iVar8 = local_1dc << 2;
              }
              *(uint *)(__ptr + 8) = local_1dc;
              (&DAT_0002fe3c)[local_1e0] = __ptr;
              iVar4 = *(int *)(&DAT_0003063c + iVar8);
              uVar5 = *(undefined4 *)(*(int *)((int)&DAT_0002fe3c + iVar8) + 0x10);
              __ptr[0] = '\0';
              __ptr[1] = '\0';
              __ptr[2] = '\0';
              __ptr[3] = '\0';
              *(int *)(&DAT_0003063c + iVar8) = iVar4 + 1;
              *(undefined4 *)(__ptr + 0x10) = uVar5;
              __ptr = (char *)0x0;
            }
          }
          else {
            fprintf(stderr,"%s: Major #%u out of range\n",acStack_168);
          }
        }
        else {
          fprintf(stderr,"%s: Indirect major #%u out of range\n",acStack_168,local_1dc);
        }
      }
    }
    iVar4 = sscanf(local_128,"%u:%[^:]:%[^:]:%u:%[^:]:%u:%[^:]:%u:%63s",&local_1e0,__src,local_1d8,
                   pcVar3,&local_1c8,__src + 0x7c,local_1b8,__src + 0x80,local_1a8);
    if (iVar4 == 9) {
      if (local_1e0 - 1 < 0x1fe) {
        if (local_1d8[0] == 'x') {
          if ((&DAT_0002fe3c)[local_1e0] == 0) {
            fprintf(stderr,
                    "%s: type \'x\' record for major #%u must follow the base record - ignored\n",
                    acStack_168);
          }
          else {
            iVar4 = *(int *)((&DAT_0002fe3c)[local_1e0] + 0x10);
            if (*(int *)(iVar4 + 0xe8) == 0) {
              *(undefined4 *)(iVar4 + 0xec) = *(undefined4 *)(__ptr + 4);
              strncpy((char *)(iVar4 + 200),__src,0x20);
              *(undefined1 *)(iVar4 + 0xe7) = 0;
              *(undefined4 *)(iVar4 + 0xe8) = 1;
            }
            else {
              fprintf(stderr,"%s: duplicate \'x\' record for major #%u - ignored\ninput line: %s\n",
                      acStack_168,local_1e0,local_128);
            }
          }
        }
        else {
          if (local_1d8[0] == '*') {
            strncpy(__src + 0x20,__src,0x20);
            __src[0x52] = '\0';
          }
          else {
            sprintf(__src + 0x20,"%s%s%%d",__src,local_1d8);
            *(int *)(__src + 0x78) = *(int *)(__src + 0x78) + 1;
          }
          __src[0x53] = '\0';
          cVar2 = s__s__s__d__d__s_00019a24[0xe];
          uVar1 = s__s__s__d__d__s_00019a24._12_2_;
          if (local_1c8 == 'a') {
            *(undefined1 **)(__src + 0xc4) = &LAB_000184f8;
            *(undefined2 *)(__src + 0x53) = uVar1;
            __src[0x55] = cVar2;
          }
          else {
            if (local_1c8 != 'd') {
              if (local_1c8 != '%') goto LAB_0001882c;
              strncpy(__src + 0x53,acStack_1c7,0xf);
            }
            pcVar3 = __src + 0x53;
            *(undefined1 **)(__src + 0xc4) = &LAB_00018560;
            sVar6 = strlen(pcVar3);
            cVar2 = s__s__s__d__d__s_00019a24[0xe];
            *(undefined2 *)(pcVar3 + sVar6) = s__s__s__d__d__s_00019a24._12_2_;
            pcVar3[sVar6 + 2] = cVar2;
          }
LAB_0001882c:
          pcVar3 = "";
          if (local_1b8[0] != '*') {
            pcVar3 = local_1b8;
          }
          local_1e4 = local_1e4 + 1;
          sprintf(__src + 99,"%s%%d",pcVar3);
          __ptr[0xc] = '\0';
          __ptr[0xd] = '\0';
          __ptr[0xe] = '\0';
          __ptr[0xf] = '\0';
          *(char **)(__ptr + 0x10) = __src;
          __ptr[0] = '\x01';
          __ptr[1] = '\0';
          __ptr[2] = '\0';
          __ptr[3] = '\0';
          *(undefined4 *)(__src + 0x84) = local_1a8[0];
          *(undefined4 *)(__src + 0x88) = local_1a8[1];
          *(undefined4 *)(__src + 0x8c) = local_1a8[2];
          *(undefined4 *)(__src + 0x90) = local_1a8[3];
          (&DAT_0002fe3c)[local_1e0] = __ptr;
          *(uint *)(__ptr + 8) = local_1e0;
          *(undefined4 *)(__src + 0x94) = local_1a8[4];
          *(undefined4 *)(__src + 0x98) = local_1a8[5];
          *(undefined4 *)(__src + 0x9c) = local_1a8[6];
          *(undefined4 *)(__src + 0xa0) = uStack_18c;
          *(undefined4 *)(__src + 0xa4) = local_188;
          *(undefined4 *)(__src + 0xa8) = uStack_184;
          *(undefined4 *)(__src + 0xac) = uStack_180;
          *(undefined4 *)(__src + 0xb0) = uStack_17c;
          *(undefined4 *)(__src + 0xb4) = local_178;
          *(undefined4 *)(__src + 0xb8) = uStack_174;
          *(undefined4 *)(__src + 0xbc) = uStack_170;
          *(undefined4 *)(__src + 0xc0) = uStack_16c;
          __ptr = (char *)0x0;
          __src = (char *)0x0;
        }
      }
      else {
        fprintf(stderr,"%s: major #%u out of range\n","ioc_init");
      }
      goto LAB_000186bc;
    }
    fprintf(stderr,"%s: Malformed %u field record: %s\n",acStack_168,iVar4,local_128);
  } while( true );
}



/* ===== FUN_00018ca4 @ 00018ca4 size=436 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_00018ca4(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  size_t sVar1;
  undefined4 uVar2;
  int extraout_r1;
  undefined4 extraout_r1_00;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if ((0xfffff < param_2 || 0x1ff < param_1) ||
     ((DAT_00030e3c == 0 && (iVar8 = FUN_00018658(), iVar8 == 0)))) {
    return (char *)0x0;
  }
  pcVar5 = DAT_00018e58;
  iVar8 = (&DAT_0002fe3c)[param_1];
  if (iVar8 != 0) {
    iVar6 = *(int *)(iVar8 + 0x10);
    iVar3 = *(int *)(iVar6 + 0x7c);
    if ((param_2 & 0xff) < (uint)(*(int *)(iVar6 + 0x80) * iVar3)) {
      if ((*(int *)(iVar6 + 0xe8) == 0) || (*(uint *)(iVar6 + 0xec) != param_2)) {
        iVar7 = *(int *)(iVar8 + 4);
        iVar4 = iVar7 * iVar3;
        if (0xff < param_2) {
          iVar3 = iVar3 * (param_2 >> 8);
          iVar4 = iVar4 + *(int *)(&DAT_0003063c + *(int *)(iVar8 + 8) * 4) * iVar3 + iVar3;
        }
        iVar3 = FUN_00018f74();
        pcVar5 = DAT_00018e58;
        if (*(int *)(iVar6 + 0x78) == 0) {
          iVar3 = iVar4 + iVar3;
        }
        sprintf(DAT_00018e58,(char *)(iVar6 + 0x20),iVar7,*(int *)(iVar6 + 0x78),param_4);
        sVar1 = strlen(pcVar5);
        iVar6 = *(int *)(iVar8 + 0x10);
        uVar2 = (**(code **)(iVar6 + 0xc4))(iVar3);
        sprintf(pcVar5 + sVar1,(char *)(iVar6 + 0x53),uVar2);
        FUN_0001901c(param_2,*(undefined4 *)(*(int *)((&DAT_0002fe3c)[param_1] + 0x10) + 0x80));
        if (extraout_r1 != 0) {
          sVar1 = strlen(pcVar5);
          iVar8 = *(int *)(iVar8 + 0x10);
          FUN_0001901c(param_2,*(undefined4 *)(iVar8 + 0x80));
          sprintf(pcVar5 + sVar1,(char *)(iVar8 + 99),extraout_r1_00);
          return pcVar5;
        }
      }
      else {
        strncpy(DAT_00018e58,(char *)(iVar6 + 200),0x30);
        DAT_00030e6f = 0;
        pcVar5 = DAT_00018e58;
      }
      return pcVar5;
    }
  }
  DAT_00030e40._0_1_ = s_nodev_0001a398[0];
  DAT_00030e40._1_1_ = s_nodev_0001a398[1];
  DAT_00030e40._2_1_ = s_nodev_0001a398[2];
  DAT_00030e40._3_1_ = s_nodev_0001a398[3];
  *(short *)(DAT_00018e58 + 4) = (short)ram0x0001a39c;
  return pcVar5;
}



/* ===== FUN_00018e5c @ 00018e5c size=280 ===== */

undefined * FUN_00018e5c(uint param_1,uint param_2)

{
  FILE *__stream;
  __dev_t __dev;
  DIR *__dirp;
  dirent *pdVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  int *piVar6;
  char *pcVar7;
  stat sStack_288;
  char acStack_230 [511];
  undefined1 local_31;
  
  __dirp = opendir("/dev/mapper");
  __stream = stderr;
  if (__dirp == (DIR *)0x0) {
    piVar6 = __errno_location();
    pcVar7 = strerror(*piVar6);
    fprintf(__stream,"Cannot open %s: %s\n","/dev/mapper",pcVar7);
                    /* WARNING: Subroutine does not return */
    exit(4);
  }
  do {
    do {
      pdVar1 = readdir(__dirp);
      puVar5 = (undefined *)0x0;
      if (pdVar1 == (dirent *)0x0) goto LAB_00018f20;
      snprintf(acStack_230,0x200,"%s/%s","/dev/mapper",pdVar1->d_name);
      local_31 = 0;
      iVar2 = stat(acStack_230,&sStack_288);
      __dev = sStack_288.st_rdev;
    } while (iVar2 != 0);
    uVar3 = gnu_dev_major(sStack_288.st_rdev);
    uVar4 = gnu_dev_minor(__dev);
  } while (uVar4 != param_2 || uVar3 != param_1);
  puVar5 = &DAT_00030e70;
  strncpy(&DAT_00030e70,pdVar1->d_name,0x80);
  DAT_00030eef = 0;
LAB_00018f20:
  closedir(__dirp);
  return puVar5;
}



/* ===== FUN_00018f74 @ 00018f74 size=168 ===== */

ulonglong FUN_00018f74(uint param_1,uint param_2)

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



/* ===== FUN_0001901c @ 0001901c size=32 ===== */

void FUN_0001901c(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_00018f74();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_00019388 @ 00019388 size=372 ===== */

ulonglong FUN_00019388(uint param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;
  
  if (param_1 == 0 && param_2 == 0) {
    return CONCAT44(param_2,param_1);
  }
  iVar11 = 0x432;
  uVar10 = 0;
  if (param_2 >> 0x16 != 0) {
    iVar11 = 3;
    if (param_2 >> 0x19 != 0) {
      iVar11 = 6;
    }
    if (param_2 >> 0x1c != 0) {
      iVar11 = iVar11 + 3;
    }
    iVar11 = iVar11 - ((int)param_2 >> 0x1f);
    uVar10 = param_1 << (0x20U - iVar11 & 0xff);
    param_1 = param_1 >> iVar11 | param_2 << (0x20U - iVar11 & 0xff);
    param_2 = param_2 >> iVar11;
    iVar11 = iVar11 + 0x432;
  }
  if (0xfffff < param_2) {
    if (0x1fffff < param_2) {
      bVar1 = (byte)param_2;
      param_2 = param_2 >> 1;
      bVar2 = (byte)param_1;
      param_1 = (uint)(bVar1 & 1) << 0x1f | param_1 >> 1;
      uVar10 = (uint)(bVar2 & 1) << 0x1f | uVar10 >> 1;
      iVar11 = iVar11 + 1;
      if (0xffbfffff < (uint)(iVar11 * 0x200000)) {
        return 0x7ff0000000000000;
      }
    }
LAB_00019160:
    bVar12 = 0x7fffffff < uVar10;
    if (uVar10 == 0x80000000) {
      bVar12 = (bool)((byte)param_1 & 1);
    }
    return CONCAT44(param_2 + iVar11 * 0x100000 + (uint)CARRY4(param_1,(uint)bVar12),
                    param_1 + bVar12);
  }
  bVar1 = (byte)(uVar10 >> 0x1f);
  uVar10 = uVar10 << 1;
  uVar3 = param_1 * 2;
  bVar12 = CARRY4(param_1,param_1);
  param_1 = param_1 * 2 + (uint)bVar1;
  param_2 = param_2 * 2 + (uint)(bVar12 || CARRY4(uVar3,(uint)bVar1));
  iVar11 = iVar11 + -1;
  if ((param_2 & 0x100000) != 0) goto LAB_00019160;
  uVar3 = param_1;
  uVar4 = param_2;
  if (param_2 == 0) {
    uVar3 = 0;
    uVar4 = param_1;
  }
  iVar8 = LZCOUNT(uVar4);
  if (param_2 == 0) {
    iVar8 = iVar8 + 0x20;
  }
  uVar9 = iVar8 - 0xb;
  bVar13 = SBORROW4(uVar9,0x20);
  uVar5 = iVar8 - 0x2b;
  bVar12 = uVar5 == 0;
  uVar7 = uVar5;
  uVar6 = uVar5;
  if ((int)uVar9 < 0x20) {
    bVar13 = SCARRY4(uVar5,0xc);
    uVar6 = iVar8 - 0x1f;
    bVar12 = uVar6 == 0;
    uVar7 = uVar9;
    if (!bVar12 && -0xd < (int)uVar5) {
      uVar3 = uVar4 << (uVar9 & 0xff);
      uVar4 = uVar4 >> (0xc - uVar6 & 0xff);
      goto LAB_000191e0;
    }
  }
  if (bVar12 || (int)uVar6 < 0 != bVar13) {
    uVar10 = 0x20 - uVar7;
  }
  uVar4 = uVar4 << (uVar7 & 0xff);
  if (bVar12 || (int)uVar6 < 0 != bVar13) {
    uVar4 = uVar4 | uVar3 >> (uVar10 & 0xff);
    uVar3 = uVar3 << (uVar7 & 0xff);
  }
LAB_000191e0:
  if ((int)uVar9 <= iVar11) {
    return CONCAT44(uVar4 + (iVar11 - uVar9) * 0x100000,uVar3);
  }
  uVar10 = ~(iVar11 - uVar9);
  if (0x1e < (int)uVar10) {
    return (ulonglong)(uVar4 >> (uVar10 - 0x1f & 0xff));
  }
  if (uVar10 - 0x13 == 0 || (int)(uVar10 - 0x1f) < -0xc) {
    uVar10 = uVar10 + 1;
    return CONCAT44(uVar4 >> (uVar10 & 0xff),
                    uVar3 >> (uVar10 & 0xff) | uVar4 << (0x20 - uVar10 & 0xff));
  }
  uVar10 = 0xc - (uVar10 - 0x13);
  return (ulonglong)(uVar3 >> (0x20 - uVar10 & 0xff) | uVar4 << (uVar10 & 0xff));
}



/* ===== FUN_000193fc @ 000193fc size=76 ===== */

void FUN_000193fc(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  if (param_4 != 0 || param_3 != 0) {
    FUN_00019448();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_00019448 @ 00019448 size=328 ===== */

undefined8 FUN_00019448(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

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



/* ===== _DT_FINI @ 00019590 size=16 ===== */

void _DT_FINI(void)

{
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00032000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 00032004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atol @ 00032008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long atol(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::localtime_r @ 0003200c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * localtime_r(time_t *__timer,tm *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 00032010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 00032014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 00032018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 0003201c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::isatty @ 00032020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int isatty(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 00032024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::alarm @ 00032028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint alarm(uint __seconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::opendir @ 0003202c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * opendir(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 00032030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::write @ 00032034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pause @ 00032038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pause(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 0003203c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::time @ 00032040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::access @ 00032044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sscanf @ 00032048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ioctl @ 0003204c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::scandir @ 00032050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int scandir(char *__dir,dirent ***__namelist,__selector *__selector,__cmp *__cmp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen @ 00032054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fscanf @ 00032058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fscanf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtoul @ 0003205c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 00032060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 00032064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 00032068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 0003206c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::alphasort @ 00032070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int alphasort(dirent **__e1,dirent **__e2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 00032074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::perror @ 00032078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 0003207c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sysconf @ 00032080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long sysconf(int __name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strnlen @ 00032084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strnlen(char *__string,size_t __maxlen)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gmtime_r @ 00032088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * gmtime_r(time_t *__timer,tm *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcspn @ 0003208c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strcspn(char *__s,char *__reject)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtok @ 00032090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strtok(char *__s,char *__delim)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtol @ 00032094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::realpath @ 00032098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * realpath(char *__name,char *__resolved)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::uname @ 0003209c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int uname(utsname *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sigaction @ 000320a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigaction(int __sig,sigaction *__act,sigaction *__oact)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 000320a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 000320a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::closedir @ 000320ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int closedir(DIR *__dirp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 000320b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 000320b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 000320b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::readlink @ 000320bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t readlink(char *__path,char *__buf,size_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 000320c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::raise @ 000320c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getenv @ 000320c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setlocale @ 000320cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * setlocale(int __category,char *__locale)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strspn @ 000320d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strspn(char *__s,char *__accept)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gnu_dev_major @ 000320d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint gnu_dev_major(ulonglong __dev)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gnu_dev_minor @ 000320d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint gnu_dev_minor(ulonglong __dev)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strstr @ 000320dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::putchar @ 000320e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 000320e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::readdir @ 000320e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent * readdir(DIR *__dirp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strchr @ 000320ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setbuf @ 000320f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void setbuf(FILE *__stream,char *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__xpg_basename @ 000320f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * __xpg_basename(char *__path)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 000320f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::stat @ 000320fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat(char *__file,stat *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fgets @ 00032100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strftime @ 00032104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strftime(char *__s,size_t __maxsize,char *__format,tm *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 00032108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vsnprintf @ 0003210c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 00032110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


