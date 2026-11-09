// mpstat — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _DT_INIT @ 00010f64 size=16 ===== */

void _DT_INIT(void)

{
  return;
}



/* ===== <EXTERNAL>::putchar @ 00010f88 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putchar_0002b00c)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::strcpy @ 00010f94 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_0002b010)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::ioctl @ 00010fa0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_0002b014)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::pause @ 00010fac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pause(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pause_0002b018)();
  return iVar1;
}



/* ===== <EXTERNAL>::sysconf @ 00010fb8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long sysconf(int __name)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_sysconf_0002b01c)(__name);
  return lVar1;
}



/* ===== <EXTERNAL>::printf @ 00010fc4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_0002b020)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::strerror @ 00010fd0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_0002b024)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::__xpg_basename @ 00010fdc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * __xpg_basename(char *__path)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR___xpg_basename_0002b028)(__path);
  return pcVar1;
}



/* ===== <EXTERNAL>::snprintf @ 00010fe8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_0002b02c)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::atol @ 00010ff4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long atol(char *__nptr)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_atol_0002b030)(__nptr);
  return lVar1;
}



/* ===== <EXTERNAL>::getenv @ 00011000 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_getenv_0002b034)(__name);
  return pcVar1;
}



/* ===== <EXTERNAL>::fscanf @ 0001100c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fscanf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fscanf_0002b038)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::fgets @ 00011018 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_fgets_0002b03c)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::gnu_dev_major @ 00011024 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint gnu_dev_major(ulonglong __dev)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_gnu_dev_major_0002b040)((int)__dev,(int)(__dev >> 0x20));
  return uVar1;
}



/* ===== <EXTERNAL>::memcpy @ 00011030 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_0002b044)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::perror @ 0001103c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
  (*(code *)PTR_perror_0002b048)(__s);
  return;
}



/* ===== <EXTERNAL>::readlink @ 00011048 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t readlink(char *__path,char *__buf,size_t __len)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_readlink_0002b04c)(__path);
  return sVar1;
}



/* ===== <EXTERNAL>::puts @ 00011054 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_0002b050)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::malloc @ 00011060 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0002b054)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::isatty @ 0001106c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int isatty(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_isatty_0002b058)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::vsnprintf @ 00011078 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vsnprintf_0002b05c)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::strtoul @ 00011084 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
  ulong uVar1;
  
  uVar1 = (*(code *)PTR_strtoul_0002b060)(__nptr);
  return uVar1;
}



/* ===== <EXTERNAL>::readdir @ 00011090 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent * readdir(DIR *__dirp)

{
  dirent *pdVar1;
  
  pdVar1 = (dirent *)(*(code *)PTR_readdir_0002b064)(__dirp);
  return pdVar1;
}



/* ===== <EXTERNAL>::realpath @ 0001109c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * realpath(char *__name,char *__resolved)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_realpath_0002b068)(__name);
  return pcVar1;
}



/* ===== <EXTERNAL>::gnu_dev_minor @ 000110a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint gnu_dev_minor(ulonglong __dev)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_gnu_dev_minor_0002b06c)((int)__dev,(int)(__dev >> 0x20));
  return uVar1;
}



/* ===== <EXTERNAL>::gmtime_r @ 000110c0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * gmtime_r(time_t *__timer,tm *__tp)

{
  tm *ptVar1;
  
  ptVar1 = (tm *)(*(code *)PTR_gmtime_r_0002b074)(__timer);
  return ptVar1;
}



/* ===== <EXTERNAL>::alarm @ 000110cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint alarm(uint __seconds)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_alarm_0002b078)(__seconds);
  return uVar1;
}



/* ===== <EXTERNAL>::strtol @ 000110d8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_strtol_0002b07c)(__nptr);
  return lVar1;
}



/* ===== <EXTERNAL>::strnlen @ 000110e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strnlen(char *__string,size_t __maxlen)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strnlen_0002b080)(__string);
  return sVar1;
}



/* ===== <EXTERNAL>::uname @ 000110f0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int uname(utsname *__name)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_uname_0002b084)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::calloc @ 000110fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_0002b088)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::write @ 00011108 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_write_0002b08c)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::fprintf @ 00011114 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_0002b090)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00011120 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_0002b094)();
  return;
}



/* ===== <EXTERNAL>::scandir @ 0001112c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int scandir(char *__dir,dirent ***__namelist,__selector *__selector,__cmp *__cmp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_scandir_0002b098)(__dir);
  return iVar1;
}



/* ===== <EXTERNAL>::strstr @ 00011138 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strstr_0002b09c)(__haystack);
  return pcVar1;
}



/* ===== <EXTERNAL>::strncmp @ 00011144 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_0002b0a0)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::alphasort @ 00011150 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int alphasort(dirent **__e1,dirent **__e2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_alphasort_0002b0a4)(__e1);
  return iVar1;
}



/* ===== <EXTERNAL>::strncpy @ 0001115c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_0002b0a8)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::realloc @ 00011168 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_realloc_0002b0ac)(__ptr);
  return pvVar1;
}



/* ===== <EXTERNAL>::strtok @ 00011174 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strtok(char *__s,char *__delim)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strtok_0002b0b0)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::sscanf @ 00011180 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sscanf_0002b0b4)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::sigaction @ 0001118c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigaction(int __sig,sigaction *__act,sigaction *__oact)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sigaction_0002b0b8)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::fopen @ 000111a4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen_0002b0c0)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::memset @ 000111b0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0002b0c4)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::fclose @ 000111bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_0002b0c8)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::time @ 000111c8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_0002b0cc)(__timer);
  return tVar1;
}



/* ===== <EXTERNAL>::opendir @ 000111d4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * opendir(char *__name)

{
  DIR *pDVar1;
  
  pDVar1 = (DIR *)(*(code *)PTR_opendir_0002b0d0)(__name);
  return pDVar1;
}



/* ===== <EXTERNAL>::strcmp @ 000111e0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_0002b0d4)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::sprintf @ 000111ec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_0002b0d8)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::strcspn @ 000111f8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strcspn(char *__s,char *__reject)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strcspn_0002b0dc)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::setlocale @ 00011204 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * setlocale(int __category,char *__locale)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_setlocale_0002b0e0)(__category);
  return pcVar1;
}



/* ===== <EXTERNAL>::localtime_r @ 00011210 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * localtime_r(time_t *__timer,tm *__tp)

{
  tm *ptVar1;
  
  ptVar1 = (tm *)(*(code *)PTR_localtime_r_0002b0e4)(__timer);
  return ptVar1;
}



/* ===== <EXTERNAL>::strftime @ 0001121c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strftime(char *__s,size_t __maxsize,char *__format,tm *__tp)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strftime_0002b0e8)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::stat @ 00011228 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat(char *__file,stat *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_stat_0002b0ec)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::fwrite @ 00011234 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_0002b0f0)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::access @ 00011240 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_access_0002b0f4)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 0001124c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_0002b0f8)();
  return piVar1;
}



/* ===== <EXTERNAL>::exit @ 00011258 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_0002b0fc)(__status);
  return;
}



/* ===== <EXTERNAL>::setbuf @ 00011264 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void setbuf(FILE *__stream,char *__buf)

{
  (*(code *)PTR_setbuf_0002b100)(__stream);
  return;
}



/* ===== <EXTERNAL>::atoi @ 00011270 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_0002b104)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::strspn @ 0001127c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strspn(char *__s,char *__accept)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strspn_0002b108)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::strlen @ 00011288 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_0002b10c)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::strchr @ 00011294 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_0002b110)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::closedir @ 000112a0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int closedir(DIR *__dirp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_closedir_0002b114)(__dirp);
  return iVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 000112ac size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_0002b118)();
  return;
}



/* ===== <EXTERNAL>::raise @ 000112b8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_0002b11c)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 000112c4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0002b120)(__ptr);
  return;
}



/* ===== FUN_000112d0 @ 000112d0 size=1756 ===== */

/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 FUN_000112d0(int param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  size_t sVar3;
  undefined4 uVar4;
  int iVar5;
  size_t sVar6;
  char cVar7;
  char *__s1;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  undefined4 *puVar12;
  int *piVar13;
  int *piVar14;
  int *local_1bc;
  int local_1b8;
  utsname uStack_1b0;
  
  FUN_00017b74();
  FUN_00016bb4();
  DAT_0002b274 = FUN_000168a8(0xffffffff,1);
  piVar13 = (int *)0x0;
  iVar2 = FUN_00016900("/proc/interrupts",0x1000,DAT_0002b274);
  local_1bc = &DAT_0002b12c;
  local_1b8 = -1;
  DAT_0002b258 = iVar2 + 3;
  iVar2 = FUN_00016900("/proc/softirqs",0x1000,DAT_0002b274);
  DAT_0002b25c = iVar2 + 3;
  FUN_00011c04(DAT_0002b274 + 1,0);
  DAT_0002b130 = FUN_000122b4(DAT_0002b274,DAT_0002b268,DAT_0002b26c);
  piVar10 = (int *)0x0;
LAB_0001139c:
  piVar9 = (int *)((int)piVar10 + 1);
  piVar11 = piVar10;
  if ((int)piVar9 < param_1) {
    while( true ) {
      __s1 = (char *)param_2[(int)piVar9];
      puVar12 = param_2 + (int)piVar9;
      iVar2 = strncmp(__s1,"--dec=",6);
      piVar10 = piVar9;
      piVar14 = piVar13;
      if ((iVar2 == 0) && (sVar3 = strlen(__s1), sVar3 == 7)) {
        if (((*(ushort *)(__ctype_b + (uint)(byte)__s1[6] * 2) & 8) != 0) &&
           (DAT_0002b134 = atoi(__s1 + 6), DAT_0002b134 < 3)) goto LAB_0001139c;
        goto switchD_00011850_caseD_42;
      }
      iVar2 = strcmp(__s1,"-I");
      if (iVar2 == 0) {
        if ((char *)puVar12[1] != (char *)0x0) {
          __s1 = strtok((char *)puVar12[1],",");
          if (__s1 == (char *)0x0) goto LAB_000115e4;
          goto LAB_00011650;
        }
        goto switchD_00011850_caseD_42;
      }
      iVar2 = strcmp(__s1,"-o");
      if (iVar2 != 0) break;
      if (((char *)puVar12[1] == (char *)0x0) ||
         (iVar2 = strcmp((char *)puVar12[1],"JSON"), iVar2 != 0)) goto switchD_00011850_caseD_42;
      piVar9 = (int *)((int)piVar11 + 3);
      DAT_0002b278 = DAT_0002b278 | 4;
      piVar11 = (int *)((int)piVar11 + 2);
      if (param_1 <= (int)piVar9) goto LAB_00011444;
    }
    iVar2 = strcmp(__s1,"-N");
    if (iVar2 == 0) {
      if (puVar12[1] != 0) {
        piVar10 = (int *)((int)piVar11 + 2);
        if (DAT_0002b130 < 0) goto LAB_0001139c;
        DAT_0002b278 = DAT_0002b278 | 8;
        DAT_0002b298 = DAT_0002b298 | 0x10;
        iVar2 = FUN_00018738(puVar12[1],DAT_0002b264,DAT_0002b130 + 1,&DAT_0001a018);
        if (iVar2 == 0) {
          local_1b8 = 9;
          goto LAB_000115e4;
        }
      }
    }
    else {
      iVar5 = strcmp(__s1,"-P");
      iVar2 = DAT_0002b12c;
      if (iVar5 == 0) {
        if (puVar12[1] != 0) {
          DAT_0002b278 = DAT_0002b278 | 1;
          iVar2 = FUN_00018738(puVar12[1],DAT_0002b260,DAT_0002b274,&DAT_0001a018);
          if (iVar2 == 0) {
            local_1b8 = 9;
            piVar10 = (int *)((int)piVar11 + 2);
            goto LAB_0001139c;
          }
        }
      }
      else {
        if (*__s1 == '-') {
          cVar7 = __s1[1];
          if (cVar7 == '\0') goto LAB_0001139c;
          iVar2 = 1;
          goto LAB_00011848;
        }
        if (DAT_0002b12c < 0) goto LAB_000117e0;
        if (DAT_0002b29c < 1) {
          sVar3 = strspn(__s1,"0123456789");
          sVar6 = strlen(__s1);
          if ((iVar2 != 0 && sVar3 == sVar6) && (DAT_0002b29c = atol(__s1), 0 < DAT_0002b29c))
          goto LAB_0001139c;
        }
      }
    }
switchD_00011850_caseD_42:
    do {
      FUN_00011bc4(*param_2);
      piVar13 = piVar14;
LAB_000117e0:
      sVar3 = strspn(__s1,"0123456789");
      sVar6 = strlen(__s1);
      piVar14 = piVar13;
    } while ((sVar3 != sVar6) || (DAT_0002b12c = atol(__s1), DAT_0002b12c < 0));
    DAT_0002b29c = -1;
    piVar10 = piVar9;
    goto LAB_0001139c;
  }
LAB_00011444:
  if ((piVar13 == (int *)0x0) || (((DAT_0002b278 & 1) != 0 && ((DAT_0002b298 & 0xffffffef) == 0))))
  {
    DAT_0002b298 = DAT_0002b298 | 1;
  }
  iVar2 = FUN_00017440(DAT_00011a80,4);
  if (1 < iVar2) {
    local_1b8 = 9;
  }
  if ((DAT_0002b278 & 2) != 0) {
    if ((-1 < DAT_0002b130) && ((DAT_0002b278 & 8) == 0)) {
      memset(DAT_0002b264,-1,(DAT_0002b274 + 1 >> 3) + 1);
      DAT_0002b278 = DAT_0002b278 + 8;
    }
    if ((DAT_0002b278 & 1) != 0) goto LAB_00011494;
    memset(DAT_0002b260,-1,(DAT_0002b274 + 1 >> 3) + 1);
    DAT_0002b278 = DAT_0002b278 + 1;
  }
  if ((DAT_0002b278 & 1) == 0) {
    *DAT_0002b260 = 1;
  }
LAB_00011494:
  if ((DAT_0002b278 & 8) == 0) {
    *DAT_0002b264 = 1;
  }
  if (local_1b8 == -1) {
    uVar8 = FUN_00017290();
    local_1b8 = 0;
  }
  else {
    uVar8 = 0x17;
  }
  if (DAT_0002b12c < 0) {
    DAT_0002b12c = 0;
  }
  if ((DAT_0002b278 & 4) != 0) {
    setlocale(1,"C");
  }
  FUN_000169f4(&DAT_00030f50,0);
  setbuf(stdout,(char *)0x0);
  uname(&uStack_1b0);
  uVar4 = FUN_000168a8(0xffffffff,0);
  FUN_00017160(&DAT_00030f50,&uStack_1b0,uStack_1b0.release,uStack_1b0.nodename,uStack_1b0.machine,
               uVar4,(DAT_0002b278 & 7) >> 2);
  FUN_000152e0(local_1b8,uVar8);
  FUN_00012188();
  return 0;
LAB_00011650:
  do {
    iVar2 = strcmp(__s1,"SUM");
    if (iVar2 == 0) {
      DAT_0002b298 = DAT_0002b298 | 2;
    }
    else {
      iVar2 = strcmp(__s1,"CPU");
      if (iVar2 == 0) {
        DAT_0002b298 = DAT_0002b298 | 4;
      }
      else {
        iVar2 = strcmp(__s1,"SCPU");
        if (iVar2 == 0) {
          DAT_0002b298 = DAT_0002b298 | 8;
        }
        else {
          iVar2 = strcmp(__s1,"ALL");
          piVar9 = (int *)&DAT_00019ff8;
          piVar14 = (int *)&DAT_00019ffc;
          if (iVar2 != 0) goto switchD_00011850_caseD_42;
          DAT_0002b298 = DAT_0002b298 | 0xe;
        }
      }
    }
    __s1 = strtok((char *)0x0,",");
  } while (__s1 != (char *)0x0);
LAB_000115e4:
  piVar13 = (int *)0x1;
  piVar10 = (int *)((int)piVar11 + 2);
  goto LAB_0001139c;
  while( true ) {
    DAT_0002b298 = uVar1;
    iVar2 = iVar2 + 1;
    cVar7 = __s1[iVar2];
    if (cVar7 == '\0') break;
LAB_00011848:
    piVar9 = piVar13;
    piVar14 = local_1bc;
    uVar1 = DAT_0002b298;
    switch(cVar7) {
    case 'A':
      DAT_0002b278 = DAT_0002b278 | 2;
      if (DAT_0002b130 < 0) {
        piVar13 = (int *)0x1;
      }
      uVar1 = DAT_0002b298 | 0xf;
      if (DAT_0002b130 >= 0) {
        piVar13 = (int *)0x1;
        uVar1 = DAT_0002b298 | 0x1f;
      }
      break;
    default:
      goto switchD_00011850_caseD_42;
    case 'H':
      DAT_0002b278 = DAT_0002b278 | 0x20;
      break;
    case 'T':
      DAT_0002b278 = DAT_0002b278 | 0x10;
      break;
    case 'V':
      FUN_000169c8();
      __s1 = (char *)*puVar12;
      uVar1 = DAT_0002b298;
      break;
    case 'n':
      if (-1 < DAT_0002b130) {
        piVar13 = (int *)0x1;
        uVar1 = DAT_0002b298 | 0x10;
      }
      break;
    case 'u':
      uVar1 = DAT_0002b298 | 1;
    }
  }
  goto LAB_0001139c;
}



/* ===== entry @ 00011a84 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_0002b0bc)
            (DAT_00011ab8,param_2,&stack0x00000004,DAT_00011abc,DAT_00011ab4,param_1);
  return;
}



/* ===== FUN_00011ac0 @ 00011ac0 size=32 ===== */

void FUN_00011ac0(void)

{
  if (DAT_00011ae4 == DAT_00011ae0) {
    return;
  }
  if (DAT_00011ae8 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011adc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011ae8)();
  return;
}



/* ===== _FINI_0 @ 00011b24 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00011b60;
  if (*DAT_00011b60 != '\0') {
    return;
  }
  FUN_00011ac0();
  if (DAT_00011b64 != 0) {
    __deregister_frame_info(DAT_00011b68);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00011b6c size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00011b90 != 0) {
    __register_frame_info(DAT_00011b98,DAT_00011b94);
  }
  if ((DAT_00011b1c - DAT_00011b18 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00011b20 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011b14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011b20)();
  return;
}



/* ===== FUN_00011bc4 @ 00011bc4 size=64 ===== */

void FUN_00011bc4(undefined4 param_1)

{
  fprintf(stderr,"Usage: %s [ options ] [ <interval> [ <count> ] ]\n",param_1);
  fwrite("Options are:\n[ -A ] [ -H ] [ -n ] [ -T ] [ -u ] [ -V ]\n[ -I { SUM | CPU | SCPU | ALL } ] [ -N { <node_list> | ALL } ]\n[ --dec={ 0 | 1 | 2 } ] [ -o JSON ] [ -P { <cpu_list> | ALL } ]\n"
         ,1,0xb6,stderr);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00011c04 @ 00011c04 size=1408 ===== */

/* WARNING: Type propagation algorithm not settling */

void FUN_00011c04(uint param_1,int param_2)

{
  size_t __size;
  int *piVar1;
  void *pvVar2;
  size_t sVar3;
  size_t sVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int *local_44;
  int *local_40;
  int *local_3c;
  
  piVar1 = DAT_00012184;
  sVar4 = param_1 * 0x50;
  iVar5 = 0;
  piVar12 = DAT_00012184 + 3;
  __size = param_1 << 3;
  local_40 = DAT_00012184 + 6;
  local_3c = DAT_00012184 + 9;
  piVar10 = DAT_00012184 + 0xc;
  local_44 = DAT_00012184;
  piVar6 = DAT_00012184;
  piVar7 = piVar10;
  piVar8 = local_3c;
  piVar9 = local_40;
  piVar11 = piVar12;
  do {
    if (sVar4 != 0) {
      pvVar2 = realloc((void *)*piVar7,sVar4);
      if (pvVar2 == (void *)0x0) {
        perror("realloc");
        pvVar2 = (void *)piVar1[iVar5 + 0xc];
        goto joined_r0x00012090;
      }
      if (*piVar7 == 0) {
        memset(pvVar2,0,sVar4);
      }
      *piVar7 = (int)pvVar2;
      pvVar2 = realloc((void *)*piVar8,sVar4);
      if (pvVar2 == (void *)0x0) {
        perror("realloc");
        pvVar2 = (void *)piVar1[iVar5 + 9];
        goto joined_r0x00012090;
      }
      if (*piVar8 == 0) {
        memset(pvVar2,0,sVar4);
      }
      *piVar8 = (int)pvVar2;
    }
    if (__size != 0) {
      pvVar2 = realloc((void *)*piVar9,__size);
      if (pvVar2 == (void *)0x0) {
        perror("realloc");
        pvVar2 = (void *)piVar1[iVar5 + 6];
        goto joined_r0x00012090;
      }
      if (*piVar9 == 0) {
        memset(pvVar2,0,__size);
      }
      *piVar9 = (int)pvVar2;
    }
    sVar3 = piVar1[0xf] * param_1 * 0x14;
    if (sVar3 != 0) {
      pvVar2 = realloc((void *)*piVar11,sVar3);
      if (pvVar2 == (void *)0x0) {
        perror("realloc");
        pvVar2 = (void *)piVar1[iVar5 + 3];
        goto joined_r0x00012090;
      }
      if (*piVar11 == 0) {
        memset(pvVar2,0,piVar1[0xf] * param_1 * 0x14);
      }
      *piVar11 = (int)pvVar2;
    }
    sVar3 = piVar1[0x10] * param_1 * 0x14;
    if (sVar3 != 0) {
      pvVar2 = realloc((void *)*piVar6,sVar3);
      if (pvVar2 == (void *)0x0) {
        perror("realloc");
        pvVar2 = (void *)piVar1[iVar5];
        goto joined_r0x00012090;
      }
      if (*piVar6 == 0) {
        memset(pvVar2,0,piVar1[0x10] * param_1 * 0x14);
      }
      *piVar6 = (int)pvVar2;
    }
    iVar5 = iVar5 + 1;
    piVar6 = piVar6 + 1;
    piVar11 = piVar11 + 1;
    piVar9 = piVar9 + 1;
    piVar8 = piVar8 + 1;
    piVar7 = piVar7 + 1;
  } while (iVar5 != 3);
  iVar5 = (int)param_1 >> 3;
  if (iVar5 != -1) {
    sVar4 = iVar5 + 1;
    pvVar2 = realloc((void *)piVar1[0x11],sVar4);
    if (pvVar2 == (void *)0x0) {
      perror("realloc");
      pvVar2 = (void *)piVar1[0x11];
      goto joined_r0x00012090;
    }
    if (piVar1[0x11] == 0) {
      memset(pvVar2,0,sVar4);
    }
    piVar1[0x11] = (int)pvVar2;
    pvVar2 = realloc((void *)piVar1[0x12],sVar4);
    if (pvVar2 == (void *)0x0) {
      perror("realloc");
      pvVar2 = (void *)piVar1[0x12];
      goto joined_r0x00012090;
    }
    if (piVar1[0x12] == 0) {
      memset(pvVar2,0,sVar4);
    }
    piVar1[0x12] = (int)pvVar2;
  }
  if ((param_1 & 0x3fffffff) != 0) {
    sVar4 = param_1 << 2;
    pvVar2 = realloc((void *)piVar1[0x13],sVar4);
    if (pvVar2 == (void *)0x0) {
      perror("realloc");
      pvVar2 = (void *)piVar1[0x13];
      goto joined_r0x00012090;
    }
    if (piVar1[0x13] == 0) {
      memset(pvVar2,0,sVar4);
    }
    piVar1[0x13] = (int)pvVar2;
    pvVar2 = realloc((void *)piVar1[0x14],sVar4);
    if (pvVar2 == (void *)0x0) {
      perror("realloc");
      pvVar2 = (void *)piVar1[0x14];
      goto joined_r0x00012090;
    }
    if (piVar1[0x14] == 0) {
      memset(pvVar2,0,sVar4);
    }
    piVar1[0x14] = (int)pvVar2;
  }
  if (__size != 0) {
    pvVar2 = realloc((void *)piVar1[0x15],__size);
    if (pvVar2 == (void *)0x0) {
      perror("realloc");
      pvVar2 = (void *)piVar1[0x15];
joined_r0x00012090:
      if (pvVar2 != (void *)0x0) {
        free(pvVar2);
      }
                    /* WARNING: Subroutine does not return */
      exit(4);
    }
    if (piVar1[0x15] == 0) {
      memset(pvVar2,0,__size);
    }
    piVar1[0x15] = (int)pvVar2;
  }
  if (param_2 == 0) {
    memset((void *)piVar1[0x11],0,iVar5 + 1U);
    memset((void *)piVar1[0x12],0,iVar5 + 1U);
    return;
  }
  iVar5 = param_1 - param_2;
  do {
    piVar6 = piVar10 + 1;
    memset((void *)(*piVar10 + param_2 * 0x50),0,iVar5 * 0x50);
    memset((void *)(*local_3c + param_2 * 0x50),0,iVar5 * 0x50);
    memset((void *)(*local_40 + param_2 * 8),0,iVar5 * 8);
    memset((void *)(*piVar12 + param_2 * 0x14),0,piVar1[0xf] * iVar5 * 0x14);
    memset((void *)(*local_44 + param_2 * 0x14),0,piVar1[0x10] * iVar5 * 0x14);
    piVar10 = piVar6;
    piVar12 = piVar12 + 1;
    local_44 = local_44 + 1;
    local_40 = local_40 + 1;
    local_3c = local_3c + 1;
  } while (piVar1 + 0xf != piVar6);
  return;
}



/* ===== FUN_00012188 @ 00012188 size=120 ===== */

void FUN_00012188(void)

{
  undefined4 *puVar1;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar2;
  
  puVar7 = DAT_00012200 + 3;
  puVar1 = DAT_00012200;
  puVar3 = DAT_00012200 + -0xc;
  puVar4 = DAT_00012200 + -9;
  puVar5 = DAT_00012200 + -6;
  puVar6 = DAT_00012200 + -3;
  do {
    puVar2 = puVar1 + 1;
    free((void *)*puVar1);
    free((void *)*puVar6);
    free((void *)*puVar5);
    free((void *)*puVar4);
    free((void *)*puVar3);
    puVar1 = puVar2;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  } while (puVar2 != puVar7);
  free(DAT_0002b260);
  free(DAT_0002b264);
  free(DAT_0002b268);
  free(DAT_0002b26c);
  return;
}



/* ===== FUN_00012204 @ 00012204 size=176 ===== */

void FUN_00012204(int param_1,uint param_2,uint param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar6;
  
  if (param_2 < param_3) {
    if (param_5 == 0) {
      iVar4 = 4;
    }
    else {
      iVar4 = 0;
    }
    iVar9 = (param_2 * param_4 + param_4) * 0x14;
    iVar4 = *(int *)((int)&DAT_0002b234 + iVar4);
    if (param_5 == 0) {
      iVar8 = 4;
    }
    else {
      iVar8 = 0;
    }
    puVar5 = (undefined4 *)(iVar4 + param_2 * 8);
    puVar7 = (undefined4 *)((&DAT_0002b234)[param_5] + param_2 * 8);
    do {
      puVar6 = puVar5 + 2;
      uVar2 = puVar5[3];
      puVar7[2] = *puVar6;
      puVar7[3] = uVar2;
      if (0 < param_4) {
        iVar10 = *(int *)(param_1 + param_5 * 4);
        iVar3 = iVar9 + param_4 * -0x14;
        iVar1 = *(int *)(param_1 + iVar8);
        do {
          *(undefined4 *)(iVar10 + iVar3) = *(undefined4 *)(iVar1 + iVar3);
          iVar3 = iVar3 + 0x14;
        } while (iVar3 != iVar9);
      }
      iVar9 = iVar9 + param_4 * 0x14;
      puVar5 = puVar6;
      puVar7 = puVar7 + 2;
    } while (puVar6 != (undefined4 *)(iVar4 + param_3 * 8));
    return;
  }
  return;
}



/* ===== FUN_000122b4 @ 000122b4 size=392 ===== */

int FUN_000122b4(int param_1,int *param_2,void *param_3)

{
  size_t __n;
  DIR *__dirp;
  dirent *pdVar1;
  int iVar2;
  int iVar3;
  int local_430;
  char acStack_428 [1023];
  undefined1 local_29;
  
  __n = (param_1 + 1) * 4;
  memset(param_2,0,__n);
  memset(param_3,-1,__n - 4);
  *param_2 = param_1;
  if (0 < param_1) {
    iVar3 = 0;
    local_430 = -1;
    while( true ) {
      snprintf(acStack_428,0x400,"%s/cpu%d","/sys/devices/system/cpu",iVar3);
      local_29 = 0;
      __dirp = opendir(acStack_428);
      if (__dirp == (DIR *)0x0) break;
      do {
        pdVar1 = readdir(__dirp);
        if (pdVar1 == (dirent *)0x0) goto LAB_000123e0;
        iVar2 = strncmp(pdVar1->d_name,"node",4);
      } while ((iVar2 != 0) ||
              ((*(ushort *)(__ctype_b + (uint)(byte)pdVar1->d_name[4] * 2) & 8) == 0));
      iVar2 = atoi(pdVar1->d_name + 4);
      if (param_1 <= iVar2 || iVar2 < 0) {
        closedir(__dirp);
        return -1;
      }
      param_2[iVar2 + 1] = param_2[iVar2 + 1] + 1;
      if (local_430 < iVar2) {
        local_430 = iVar2;
      }
      *(int *)((int)param_3 + iVar3 * 4) = iVar2;
LAB_000123e0:
      iVar3 = iVar3 + 1;
      closedir(__dirp);
      if (param_1 == iVar3) {
        return local_430;
      }
    }
  }
  return -1;
}



/* ===== FUN_0001243c @ 0001243c size=344 ===== */

void FUN_0001243c(int param_1,int param_2)

{
  FILE *pFVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  char acStack_428 [1023];
  undefined1 local_29;
  
  memset(DAT_0002b270,0,param_1 << 3);
  if (0 < param_1) {
    puVar4 = (undefined4 *)(param_2 + 4);
    iVar3 = 0;
    do {
      snprintf(acStack_428,0x400,"%s/cpu%d/%s","/sys/devices/system/cpu",iVar3,
               "topology/physical_package_id");
      local_29 = 0;
      pFVar1 = fopen(acStack_428,"r");
      if (pFVar1 != (FILE *)0x0) {
        iVar2 = fscanf(pFVar1,"%d",puVar4 + -1);
        fclose(pFVar1);
        if (iVar2 < 1) {
          puVar4[-1] = 0xffffffff;
        }
      }
      snprintf(acStack_428,0x400,"%s/cpu%d/%s","/sys/devices/system/cpu",iVar3,
               "topology/thread_siblings_list");
      local_29 = 0;
      pFVar1 = fopen(acStack_428,"r");
      iVar3 = iVar3 + 1;
      if (pFVar1 != (FILE *)0x0) {
        iVar2 = fscanf(pFVar1,"%d",puVar4);
        fclose(pFVar1);
        if (iVar2 < 1) {
          *puVar4 = 0xffffffff;
        }
      }
      puVar4 = puVar4 + 2;
    } while (param_1 != iVar3);
  }
  return;
}



/* ===== FUN_00012594 @ 00012594 size=240 ===== */

void FUN_00012594(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar1 = param_1[4];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  uVar2 = param_2[4];
  uVar3 = param_2[5];
  *(ulonglong *)param_1 =
       CONCAT44(param_2[1] + param_1[1] + (uint)CARRY4(*param_2,*param_1),*param_2 + *param_1);
  uVar4 = param_2[6];
  uVar5 = param_2[7];
  param_1[4] = uVar1 + uVar2;
  param_1[5] = param_1[5] + uVar3 + (uint)CARRY4(uVar1,uVar2);
  *(ulonglong *)(param_1 + 2) =
       CONCAT44(uVar7 + param_1[3] + (uint)CARRY4(uVar6,param_1[2]),uVar6 + param_1[2]);
  uVar6 = param_2[8];
  uVar7 = param_2[9];
  *(ulonglong *)(param_1 + 6) =
       CONCAT44(uVar5 + param_1[7] + (uint)CARRY4(uVar4,param_1[6]),uVar4 + param_1[6]);
  uVar1 = param_1[0xe];
  uVar4 = param_2[0xc];
  uVar5 = param_2[0xd];
  uVar2 = param_2[0xe];
  uVar3 = param_2[0xf];
  *(ulonglong *)(param_1 + 8) =
       CONCAT44(uVar7 + param_1[9] + (uint)CARRY4(uVar6,param_1[8]),uVar6 + param_1[8]);
  uVar6 = param_2[10];
  uVar8 = param_2[0xb];
  param_1[0xe] = uVar2 + uVar1;
  param_1[0xf] = uVar3 + param_1[0xf] + (uint)CARRY4(uVar2,uVar1);
  uVar7 = param_2[0x10];
  uVar9 = param_2[0x11];
  *(ulonglong *)(param_1 + 0xc) =
       CONCAT44(uVar5 + param_1[0xd] + (uint)CARRY4(uVar4,param_1[0xc]),uVar4 + param_1[0xc]);
  uVar2 = param_2[0x12];
  uVar3 = param_2[0x13];
  *(ulonglong *)(param_1 + 10) =
       CONCAT44(param_1[0xb] + uVar8 + (uint)CARRY4(param_1[10],uVar6),param_1[10] + uVar6);
  uVar1 = param_1[0x12];
  *(ulonglong *)(param_1 + 0x10) =
       CONCAT44(param_1[0x11] + uVar9 + (uint)CARRY4(param_1[0x10],uVar7),param_1[0x10] + uVar7);
  param_1[0x12] = uVar1 + uVar2;
  param_1[0x13] = param_1[0x13] + uVar3 + (uint)CARRY4(uVar1,uVar2);
  return;
}



/* ===== FUN_00012684 @ 00012684 size=384 ===== */

void FUN_00012684(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  void *__s;
  uint uVar3;
  int iVar4;
  void *__dest;
  void *__src;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  void *__src_00;
  int iVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int local_30;
  
  iVar2 = 0x50;
  __s = (void *)(&DAT_0002b240)[param_1];
  __src = (void *)(&DAT_0002b24c)[param_2];
  __src_00 = (void *)(&DAT_0002b24c)[param_1];
  __dest = (void *)(&DAT_0002b240)[param_2];
  memset(__s,0,DAT_0002b274 * 0x50 + 0x50);
  memset((void *)(&DAT_0002b240)[param_2],0,DAT_0002b274 * 0x50 + 0x50);
  memcpy(__s,__src_00,0x50);
  memcpy(__dest,__src,0x50);
  if (0 < DAT_0002b274) {
    local_30 = 0;
    do {
      puVar10 = (uint *)((&DAT_0002b24c)[param_1] + iVar2);
      iVar4 = local_30 * 4;
      local_30 = local_30 + 1;
      uVar12 = (uint)*(undefined8 *)(puVar10 + 2);
      iVar9 = *(int *)(DAT_0002b26c + iVar4) * 0x50 + 0x50;
      uVar13 = (uint)*(undefined8 *)(puVar10 + 4);
      uVar5 = uVar12 + *puVar10;
      uVar3 = uVar13 + uVar5;
      uVar14 = (uint)*(undefined8 *)(puVar10 + 6);
      uVar6 = uVar14 + uVar3;
      uVar7 = puVar10[8] + uVar6;
      uVar16 = (uint)*(undefined8 *)(puVar10 + 0xc);
      iVar11 = (&DAT_0002b240)[param_2];
      uVar1 = uVar16 + uVar7;
      uVar15 = (uint)*(undefined8 *)(puVar10 + 10);
      uVar8 = uVar15 + uVar1;
      iVar4 = (&DAT_0002b24c)[param_2] + iVar2;
      iVar2 = iVar2 + 0x50;
      if ((uVar8 + puVar10[0xe] != 0 ||
           (int)((ulonglong)*(undefined8 *)(puVar10 + 10) >> 0x20) +
           (int)((ulonglong)*(undefined8 *)(puVar10 + 0xc) >> 0x20) +
           puVar10[9] +
           (int)((ulonglong)*(undefined8 *)(puVar10 + 6) >> 0x20) +
           (int)((ulonglong)*(undefined8 *)(puVar10 + 4) >> 0x20) +
           (int)((ulonglong)*(undefined8 *)(puVar10 + 2) >> 0x20) + puVar10[1] +
           (uint)CARRY4(uVar12,*puVar10) + (uint)CARRY4(uVar13,uVar5) + (uint)CARRY4(uVar14,uVar3) +
           (uint)CARRY4(puVar10[8],uVar6) + (uint)CARRY4(uVar16,uVar7) + (uint)CARRY4(uVar15,uVar1)
           + puVar10[0xf] + (uint)CARRY4(uVar8,puVar10[0xe]) != 0) || (DAT_0002b12c == 0)) {
        FUN_00012594((&DAT_0002b240)[param_1] + iVar9,puVar10);
        FUN_00012594(iVar11 + iVar9,iVar4);
      }
    } while (local_30 < DAT_0002b274);
  }
  return;
}



/* ===== FUN_00012804 @ 00012804 size=728 ===== */

longlong FUN_00012804(int param_1,int param_2,int param_3)

{
  int iVar1;
  void *__s;
  uint *__src;
  void *__s_00;
  uint *__dest;
  uint uVar2;
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
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  longlong lVar35;
  uint local_50;
  longlong local_48;
  
  __s = (void *)(&DAT_0002b24c)[param_2];
  __s_00 = (void *)(&DAT_0002b24c)[param_1];
  if (1 < DAT_0002b274) {
    memset(__s,0,0x50);
    memset(__s_00,0,0x50);
    local_48 = 0;
    if (0 < DAT_0002b274) {
      local_50 = 1;
      do {
        __dest = (uint *)((&DAT_0002b24c)[param_2] + local_50 * 0x50);
        __src = (uint *)((&DAT_0002b24c)[param_1] + local_50 * 0x50);
        uVar30 = (uint)*(undefined8 *)(__dest + 2);
        uVar2 = *__src;
        uVar3 = __src[1];
        uVar25 = *(undefined8 *)(__src + 2);
        uVar4 = uVar30 + *__dest;
        uVar20 = (uint)uVar25;
        uVar26 = *(undefined8 *)(__src + 4);
        uVar5 = uVar20 + uVar2;
        uVar31 = (uint)*(undefined8 *)(__dest + 4);
        uVar6 = uVar31 + uVar4;
        uVar21 = (uint)uVar26;
        uVar27 = *(undefined8 *)(__src + 6);
        uVar7 = uVar21 + uVar5;
        uVar32 = (uint)*(undefined8 *)(__dest + 6);
        uVar8 = uVar32 + uVar6;
        uVar22 = (uint)uVar27;
        uVar28 = *(undefined8 *)(__src + 8);
        uVar9 = uVar22 + uVar7;
        uVar33 = (uint)*(undefined8 *)(__dest + 8);
        uVar10 = uVar33 + uVar8;
        uVar23 = (uint)uVar28;
        uVar29 = *(undefined8 *)(__src + 0xc);
        uVar11 = uVar23 + uVar9;
        uVar34 = (uint)*(undefined8 *)(__dest + 0xc);
        uVar12 = uVar34 + uVar10;
        uVar24 = (uint)uVar29;
        uVar13 = uVar24 + uVar11;
        uVar14 = __dest[10] + uVar12;
        uVar15 = __src[10];
        uVar18 = __src[0xb];
        uVar16 = uVar15 + uVar13;
        uVar17 = __src[0xe];
        uVar19 = __src[0xf];
        iVar1 = (int)local_50 >> 3;
        if (__dest[0xe] + uVar14 == 0 &&
            __dest[0xf] +
            __dest[0xb] +
            (int)((ulonglong)*(undefined8 *)(__dest + 0xc) >> 0x20) +
            (int)((ulonglong)*(undefined8 *)(__dest + 8) >> 0x20) +
            (int)((ulonglong)*(undefined8 *)(__dest + 6) >> 0x20) +
            (int)((ulonglong)*(undefined8 *)(__dest + 4) >> 0x20) +
            (int)((ulonglong)*(undefined8 *)(__dest + 2) >> 0x20) + __dest[1] +
            (uint)CARRY4(uVar30,*__dest) + (uint)CARRY4(uVar31,uVar4) + (uint)CARRY4(uVar32,uVar6) +
            (uint)CARRY4(uVar33,uVar8) + (uint)CARRY4(uVar34,uVar10) +
            (uint)CARRY4(__dest[10],uVar12) + (uint)CARRY4(__dest[0xe],uVar14) == 0) {
          memcpy(__dest,__src,0x50);
          *(byte *)(param_3 + iVar1) = *(byte *)(param_3 + iVar1) | (byte)(1 << (local_50 & 7));
        }
        if ((uVar17 + uVar16 == 0 &&
             uVar19 + uVar18 + (int)((ulonglong)uVar29 >> 0x20) +
                               (int)((ulonglong)uVar28 >> 0x20) +
                               (int)((ulonglong)uVar27 >> 0x20) +
                               (int)((ulonglong)uVar26 >> 0x20) +
                               (int)((ulonglong)uVar25 >> 0x20) + uVar3 + (uint)CARRY4(uVar20,uVar2)
                               + (uint)CARRY4(uVar21,uVar5) + (uint)CARRY4(uVar22,uVar7) +
                               (uint)CARRY4(uVar23,uVar9) + (uint)CARRY4(uVar24,uVar11) +
                      (uint)CARRY4(uVar15,uVar13) + (uint)CARRY4(uVar17,uVar16) == 0) &&
           (DAT_0002b12c != 0)) {
          *(byte *)(param_3 + iVar1) = *(byte *)(param_3 + iVar1) | (byte)(1 << (local_50 & 7));
        }
        else {
          lVar35 = FUN_00016440(__dest,__src);
          local_48 = lVar35 + local_48;
          FUN_00012594(__s,__dest);
          FUN_00012594(__s_00,__src);
        }
        local_50 = local_50 + 1;
      } while ((int)local_50 <= DAT_0002b274);
    }
    return local_48;
  }
  lVar35 = FUN_00016440(__s,__s_00);
  return lVar35;
}



/* ===== FUN_00013320 @ 00013320 size=2268 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00013320(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6,
                 undefined4 param_7,undefined4 param_8,int param_9,int *param_10,int param_11)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  undefined4 extraout_s1_02;
  undefined4 extraout_s1_03;
  undefined4 extraout_s1_04;
  undefined4 extraout_s1_05;
  undefined8 uVar20;
  undefined4 extraout_s1_06;
  undefined4 extraout_s1_07;
  undefined4 extraout_s1_08;
  undefined4 extraout_s1_09;
  undefined4 extraout_s1_10;
  undefined4 extraout_s1_11;
  undefined4 extraout_s1_12;
  undefined4 extraout_s1_13;
  undefined4 extraout_s1_14;
  undefined4 extraout_s1_15;
  undefined8 uVar21;
  undefined4 extraout_s1_16;
  undefined4 extraout_s1_17;
  undefined4 extraout_s1_18;
  undefined8 uVar22;
  longlong lVar23;
  char *local_490;
  char local_478 [15];
  undefined1 local_469;
  char local_468 [4];
  undefined4 uStack_464;
  char acStack_460 [4];
  char acStack_45c [4];
  char local_458 [4];
  char acStack_454 [4];
  char acStack_450 [4];
  char acStack_44c [4];
  char acStack_448 [4];
  undefined2 uStack_444;
  undefined1 local_442;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  longlong local_78;
  char *local_6c;
  
  if (param_3 == 0 && param_4 == 0) {
    param_3 = 1;
    param_4 = 0;
  }
  lVar23 = CONCAT44(param_4,param_3);
  if ((DAT_0002b278 & 4) == 0) {
    if (param_1 != 0) {
      printf("\n%-11s  CPU",param_7);
      if ((DAT_0002b278 & 0x10) != 0) {
        printf(" CORE SOCK NODE");
      }
      printf(
            "    %%usr   %%nice    %%sys %%iowait    %%irq   %%soft  %%steal  %%guest  %%gnice   %%idle\n"
            );
    }
    if (-1 < DAT_0002b274) {
      uVar4 = 0;
      local_6c = "%-11s";
      local_78 = lVar23;
      do {
        while( true ) {
          if ((((int)(uint)*(byte *)(DAT_0002b260 + ((int)uVar4 >> 3)) >> (uVar4 & 7) & 1U) != 0) &&
             (((int)(uint)*(byte *)(param_11 + ((int)uVar4 >> 3)) >> (uVar4 & 7) & 1U) == 0)) break;
LAB_00012cd4:
          uVar4 = uVar4 + 1;
          if (DAT_0002b274 < (int)uVar4) {
            return;
          }
        }
        puVar6 = (uint *)((&DAT_0002b24c)[param_6] + uVar4 * 0x50);
        puVar5 = (uint *)((&DAT_0002b24c)[param_5] + uVar4 * 0x50);
        printf(local_6c,param_8);
        if (uVar4 == 0) {
          FUN_000184ac(1,&DAT_00019ae8,&DAT_00019ae0,0);
          if ((DAT_0002b278 & 0x10) != 0) {
            printf("               ");
          }
LAB_00012b54:
          uVar10 = *puVar5 - puVar5[0x10];
          uVar2 = puVar5[1] - (puVar5[0x11] + (uint)(*puVar5 < puVar5[0x10]));
          uVar7 = *puVar6 - puVar6[0x10];
          uVar8 = puVar6[1] - (puVar6[0x11] + (uint)(*puVar6 < puVar6[0x10]));
          bVar11 = uVar2 <= uVar8;
          if (uVar8 == uVar2) {
            bVar11 = uVar10 <= uVar7;
          }
          uVar20 = DAT_00012f00;
          if (bVar11) {
            local_d0 = local_78;
            uVar12 = FUN_000173ac(uVar10,uVar2,uVar7,uVar8);
            uVar20 = CONCAT44(extraout_s1_06,uVar12);
          }
          uVar2 = puVar6[3] - (puVar6[0x13] + (uint)(puVar6[2] < puVar6[0x12]));
          uVar10 = puVar5[2] - puVar5[0x12];
          uVar7 = puVar5[3] - (puVar5[0x13] + (uint)(puVar5[2] < puVar5[0x12]));
          bVar11 = uVar7 <= uVar2;
          if (uVar2 == uVar7) {
            bVar11 = uVar10 <= puVar6[2] - puVar6[0x12];
          }
          uVar22 = DAT_00012f00;
          lVar23 = local_78;
          if (bVar11) {
            local_d0 = local_78;
            uVar12 = FUN_000173ac(uVar10,uVar7);
            uVar22 = CONCAT44(extraout_s1_08,uVar12);
            lVar23 = local_78;
          }
          local_78 = lVar23;
          local_d0 = lVar23;
          uVar12 = FUN_000173ac(puVar5[4],puVar5[5],puVar6[4],puVar6[5]);
          local_d0 = lVar23;
          uVar13 = FUN_000173ac(puVar5[8],puVar5[9],puVar6[8],puVar6[9]);
          local_d0 = lVar23;
          uVar14 = FUN_000173ac(puVar5[0xc],puVar5[0xd],puVar6[0xc],puVar6[0xd]);
          local_d0 = lVar23;
          uVar15 = FUN_000173ac(puVar5[0xe],puVar5[0xf],puVar6[0xe],puVar6[0xf]);
          local_d0 = lVar23;
          uVar16 = FUN_000173ac(puVar5[10],puVar5[0xb],puVar6[10],puVar6[0xb]);
          local_d0 = lVar23;
          uVar17 = FUN_000173ac(puVar5[0x10],puVar5[0x11],puVar6[0x10],puVar6[0x11]);
          local_d0 = lVar23;
          uVar18 = FUN_000173ac(puVar5[0x12],puVar5[0x13],puVar6[0x12],puVar6[0x13]);
          local_88 = CONCAT44(extraout_s1_05,uVar18);
          local_d0._0_4_ = 2;
          local_c8 = uVar20;
          local_c0 = uVar22;
          local_b8 = CONCAT44(extraout_s1,uVar12);
          local_b0 = CONCAT44(extraout_s1_00,uVar13);
          local_a8 = CONCAT44(extraout_s1_01,uVar14);
          local_a0 = CONCAT44(extraout_s1_02,uVar15);
          local_98 = CONCAT44(extraout_s1_03,uVar16);
          local_90 = CONCAT44(extraout_s1_04,uVar17);
          FUN_0001827c(0xffffffff,1,9,7);
          bVar11 = puVar5[7] <= puVar6[7];
          if (puVar6[7] == puVar5[7]) {
            bVar11 = puVar5[6] <= puVar6[6];
          }
          uVar20 = DAT_00012f00;
          if (bVar11) {
            local_d0 = local_78;
            uVar12 = FUN_000173ac();
            uVar20 = CONCAT44(extraout_s1_07,uVar12);
          }
          local_d0._0_4_ = 2;
          local_c8 = uVar20;
          FUN_0001827c(0xffffffff,2,1,7);
          putchar(10);
          goto LAB_00012cd4;
        }
        FUN_000184ac(0,&DAT_00019afc,"",uVar4 - 1);
        iVar3 = DAT_0002b270;
        if ((DAT_0002b278 & 0x10) != 0) {
          iVar1 = uVar4 * 8 + -8;
          FUN_000184ac(0,&DAT_00019afc,"",*(undefined4 *)(DAT_0002b270 + iVar1 + 4));
          FUN_000184ac(0,&DAT_00019afc,"",*(undefined4 *)(iVar3 + iVar1));
          FUN_000184ac(0,&DAT_00019afc,"",*(undefined4 *)(DAT_0002b26c + uVar4 * 4 + -4));
        }
        lVar23 = FUN_00016440(puVar6,puVar5);
        local_78 = lVar23;
        if (lVar23 != 0) goto LAB_00012b54;
        local_d0._0_4_ = 2;
        local_88 = 0;
        local_80 = 0;
        uStack_7c = 0x40590000;
        local_90 = 0;
        local_98 = 0;
        uVar4 = uVar4 + 1;
        local_a0 = 0;
        local_a8 = 0;
        local_b0 = 0;
        local_b8 = 0;
        local_c0 = 0;
        local_c8 = 0;
        FUN_0001827c(0xffffffff,0,10,7);
        putchar(10);
      } while ((int)uVar4 <= DAT_0002b274);
    }
    return;
  }
  if (*param_10 != 0) {
    puts(",");
  }
  *param_10 = 1;
  local_468[0] = '\0';
  local_468[1] = '\0';
  local_468[2] = '\0';
  local_468[3] = '\0';
  memset(&uStack_464,0,0x3fc);
  FUN_0001708c(param_9,"\"cpu-load\": [");
  if (-1 < DAT_0002b274) {
    uVar10 = 0;
    uVar4 = 0;
    do {
      while( true ) {
        uVar2 = (int)(uint)*(byte *)(DAT_0002b260 + ((int)uVar10 >> 3)) >> (uVar10 & 7) & 1;
        if ((uVar2 != 0) &&
           (((int)(uint)*(byte *)(param_11 + ((int)uVar10 >> 3)) >> (uVar10 & 7) & 1U) == 0)) break;
LAB_00013114:
        uVar10 = uVar10 + 1;
        if (DAT_0002b274 < (int)uVar10) goto LAB_00013214;
      }
      puVar5 = (uint *)((&DAT_0002b24c)[param_6] + uVar10 * 0x50);
      puVar6 = (uint *)((&DAT_0002b24c)[param_5] + uVar10 * 0x50);
      if (uVar4 != 0) {
        puts(",");
      }
      uVar4 = uVar2;
      if (uVar10 == 0) {
        builtin_strncpy(local_478,"all",4);
        if ((DAT_0002b278 & 0x10) != 0) {
          local_468[0] = s____core________socket________nod_00019b14[0];
          local_468[1] = s____core________socket________nod_00019b14[1];
          local_468[2] = s____core________socket________nod_00019b14[2];
          local_468[3] = s____core________socket________nod_00019b14[3];
          uStack_464._0_1_ = s____core________socket________nod_00019b14[4];
          uStack_464._1_1_ = s____core________socket________nod_00019b14[5];
          uStack_464._2_1_ = s____core________socket________nod_00019b14[6];
          uStack_464._3_1_ = s____core________socket________nod_00019b14[7];
          acStack_460[0] = s____core________socket________nod_00019b14[8];
          acStack_460[1] = s____core________socket________nod_00019b14[9];
          acStack_460[2] = s____core________socket________nod_00019b14[10];
          acStack_460[3] = s____core________socket________nod_00019b14[0xb];
          acStack_45c[0] = s____core________socket________nod_00019b14[0xc];
          acStack_45c[1] = s____core________socket________nod_00019b14[0xd];
          acStack_45c[2] = s____core________socket________nod_00019b14[0xe];
          acStack_45c[3] = s____core________socket________nod_00019b14[0xf];
          local_458[0] = s____core________socket________nod_00019b14[0x10];
          local_458[1] = s____core________socket________nod_00019b14[0x11];
          local_458[2] = s____core________socket________nod_00019b14[0x12];
          local_458[3] = s____core________socket________nod_00019b14[0x13];
          acStack_454[0] = s____core________socket________nod_00019b14[0x14];
          acStack_454[1] = s____core________socket________nod_00019b14[0x15];
          acStack_454[2] = s____core________socket________nod_00019b14[0x16];
          acStack_454[3] = s____core________socket________nod_00019b14[0x17];
          acStack_450[0] = s____core________socket________nod_00019b14[0x18];
          acStack_450[1] = s____core________socket________nod_00019b14[0x19];
          acStack_450[2] = s____core________socket________nod_00019b14[0x1a];
          acStack_450[3] = s____core________socket________nod_00019b14[0x1b];
          acStack_44c[0] = s____core________socket________nod_00019b14[0x1c];
          acStack_44c[1] = s____core________socket________nod_00019b14[0x1d];
          acStack_44c[2] = s____core________socket________nod_00019b14[0x1e];
          acStack_44c[3] = s____core________socket________nod_00019b14[0x1f];
          acStack_448[0] = s____core________socket________nod_00019b14[0x20];
          acStack_448[1] = s____core________socket________nod_00019b14[0x21];
          acStack_448[2] = s____core________socket________nod_00019b14[0x22];
          acStack_448[3] = s____core________socket________nod_00019b14[0x23];
          uStack_444 = (undefined2)ram0x00019b38;
          local_442 = (undefined1)((uint)ram0x00019b38 >> 0x10);
        }
LAB_00012fa8:
        local_490 = local_468;
        uVar2 = *puVar5 - puVar5[0x10];
        uVar8 = puVar5[1] - (puVar5[0x11] + (uint)(*puVar5 < puVar5[0x10]));
        uVar7 = *puVar6 - puVar6[0x10];
        uVar9 = puVar6[1] - (puVar6[0x11] + (uint)(*puVar6 < puVar6[0x10]));
        bVar11 = uVar9 <= uVar8;
        if (uVar8 == uVar9) {
          bVar11 = uVar7 <= uVar2;
        }
        uVar20 = DAT_00013318;
        if (bVar11) {
          uVar12 = FUN_000173ac(uVar7,uVar9,uVar2,uVar8,lVar23);
          uVar20 = CONCAT44(extraout_s1_18,uVar12);
        }
        uVar2 = puVar5[2] - puVar5[0x12];
        uVar8 = puVar5[3] - (puVar5[0x13] + (uint)(puVar5[2] < puVar5[0x12]));
        uVar7 = puVar6[2] - puVar6[0x12];
        uVar9 = puVar6[3] - (puVar6[0x13] + (uint)(puVar6[2] < puVar6[0x12]));
        bVar11 = uVar9 <= uVar8;
        if (uVar8 == uVar9) {
          bVar11 = uVar7 <= uVar2;
        }
        uVar22 = DAT_00013318;
        if (bVar11) {
          uVar12 = FUN_000173ac(uVar7,uVar9,uVar2,uVar8,lVar23);
          uVar22 = CONCAT44(extraout_s1_17,uVar12);
        }
        uVar12 = FUN_000173ac(puVar6[4],puVar6[5],puVar5[4],puVar5[5],lVar23);
        uVar13 = FUN_000173ac(puVar6[8],puVar6[9],puVar5[8],puVar5[9],lVar23);
        uVar14 = FUN_000173ac(puVar6[0xc],puVar6[0xd],puVar5[0xc],puVar5[0xd],lVar23);
        uVar15 = FUN_000173ac(puVar6[0xe],puVar6[0xf],puVar5[0xe],puVar5[0xf],lVar23);
        uVar16 = FUN_000173ac(puVar6[10],puVar6[0xb],puVar5[10],puVar5[0xb],lVar23);
        uVar17 = FUN_000173ac(puVar6[0x10],puVar6[0x11],puVar5[0x10],puVar5[0x11],lVar23);
        uVar18 = FUN_000173ac(puVar6[0x12],puVar6[0x13],puVar5[0x12],puVar5[0x13],lVar23);
        bVar11 = puVar6[7] <= puVar5[7];
        if (puVar5[7] == puVar6[7]) {
          bVar11 = puVar6[6] <= puVar5[6];
        }
        uVar21 = DAT_00013318;
        if (bVar11) {
          uVar19 = FUN_000173ac();
          uVar21 = CONCAT44(extraout_s1_16,uVar19);
        }
        FUN_0001701c(param_9 + 1,
                     "{\"cpu\": \"%s\"%s, \"usr\": %.2f, \"nice\": %.2f, \"sys\": %.2f, \"iowait\": %.2f, \"irq\": %.2f, \"soft\": %.2f, \"steal\": %.2f, \"guest\": %.2f, \"gnice\": %.2f, \"idle\": %.2f}"
                     ,local_478,local_490,uVar20,uVar22,CONCAT44(extraout_s1_09,uVar12),
                     CONCAT44(extraout_s1_10,uVar13),CONCAT44(extraout_s1_11,uVar14),
                     CONCAT44(extraout_s1_12,uVar15),CONCAT44(extraout_s1_13,uVar16),
                     CONCAT44(extraout_s1_14,uVar17),CONCAT44(extraout_s1_15,uVar18),uVar21);
        goto LAB_00013114;
      }
      iVar3 = uVar10 - 1;
      snprintf(local_478,0x10,"%d");
      local_469 = 0;
      if ((DAT_0002b278 & 0x10) != 0) {
        iVar1 = uVar10 * 8 + -8;
        snprintf(local_468,0x400,", \"core\": \"%d\", \"socket\": \"%d\", \"node\": \"%d\"",
                 *(undefined4 *)(DAT_0002b270 + iVar1 + 4),*(undefined4 *)(DAT_0002b270 + iVar1),
                 *(undefined4 *)(DAT_0002b26c + uVar10 * 4 + -4));
      }
      local_490 = local_468;
      lVar23 = FUN_00016440(puVar5,puVar6);
      if (lVar23 != 0) goto LAB_00012fa8;
      uVar10 = uVar10 + 1;
      FUN_0001701c(param_9 + 1,
                   "{\"cpu\": \"%d\"%s, \"usr\": 0.00, \"nice\": 0.00, \"sys\": 0.00, \"iowait\": 0.00, \"irq\": 0.00, \"soft\": 0.00, \"steal\": 0.00, \"guest\": 0.00, \"gnice\": 0.00, \"idle\": 100.00}"
                   ,iVar3,local_490);
      putchar(10);
    } while ((int)uVar10 <= DAT_0002b274);
  }
LAB_00013214:
  putchar(10);
  FUN_0001701c(param_9,&DAT_00019cac);
  return;
}



/* ===== FUN_00013d18 @ 00013d18 size=2528 ===== */

void FUN_00013d18(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6,
                 undefined4 param_7,undefined4 param_8,int param_9,int *param_10)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint extraout_r3;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined8 uVar24;
  undefined4 extraout_s1_02;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined4 extraout_s1_06;
  undefined4 extraout_s1_07;
  undefined4 extraout_s1_08;
  undefined4 extraout_s1_09;
  undefined4 extraout_s1_10;
  undefined4 extraout_s1_11;
  undefined4 extraout_s1_12;
  undefined4 extraout_s1_13;
  undefined4 extraout_s1_14;
  undefined4 extraout_s1_15;
  undefined8 uVar29;
  undefined4 extraout_s1_16;
  undefined4 extraout_s1_17;
  undefined4 extraout_s1_18;
  undefined8 uVar30;
  undefined8 uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  longlong lVar37;
  longlong lVar38;
  longlong lVar39;
  undefined8 uVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  int *piVar43;
  undefined8 local_78;
  undefined4 *local_70;
  uint local_6c;
  undefined4 extraout_s1_01;
  undefined4 extraout_s1_03;
  undefined4 extraout_s1_04;
  undefined4 extraout_s1_05;
  
  if (param_3 == 0 && param_4 == 0) {
    param_3 = 1;
    param_4 = 0;
  }
  lVar37 = CONCAT44(param_4,param_3);
  if ((DAT_0002b278 & 4) == 0) {
    if (param_1 != 0) {
      printf("\n%-11s NODE    %%usr   %%nice    %%sys %%iowait    %%irq   %%soft  %%steal  %%guest  %%gnice   %%idle\n"
             ,param_7);
    }
    if (-2 < DAT_0002b130) {
      local_70 = &DAT_0002b218 + param_6;
      uVar15 = 0;
      do {
        uVar6 = (int)(uint)*(byte *)(DAT_0002b264 + ((int)uVar15 >> 3)) >> (uVar15 & 7) & 1;
        if ((uVar6 != 0) && (*(int *)(DAT_0002b268 + uVar15 * 4) != 0)) {
          iVar5 = (&DAT_0002b240)[param_5];
          iVar3 = local_70[10];
          printf("%-11s",param_8);
          if (uVar15 == 0) {
            FUN_000184ac(1,&DAT_00019ae8,&DAT_00019ae0,0);
LAB_0001349c:
            uVar18 = (undefined4)((ulonglong)lVar37 >> 0x20);
            uVar17 = (undefined4)lVar37;
            puVar4 = (uint *)(iVar3 + uVar15 * 0x50);
            puVar8 = (uint *)(iVar5 + uVar15 * 0x50);
            uVar6 = *puVar4 - puVar4[0x10];
            uVar9 = puVar4[1] - (puVar4[0x11] + (uint)(*puVar4 < puVar4[0x10]));
            uVar7 = *puVar8 - puVar8[0x10];
            uVar10 = puVar8[1] - (puVar8[0x11] + (uint)(*puVar8 < puVar8[0x10]));
            bVar16 = uVar10 <= uVar9;
            if (uVar9 == uVar10) {
              bVar16 = uVar7 <= uVar6;
            }
            uVar28 = DAT_00013878;
            if (bVar16) {
              uVar19 = FUN_000173ac(uVar7,uVar10,uVar6,uVar9,uVar17);
              uVar28 = CONCAT44(extraout_s1_08,uVar19);
            }
            uVar6 = puVar4[2] - puVar4[0x12];
            uVar9 = puVar4[3] - (puVar4[0x13] + (uint)(puVar4[2] < puVar4[0x12]));
            uVar7 = puVar8[2] - puVar8[0x12];
            uVar10 = puVar8[3] - (puVar8[0x13] + (uint)(puVar8[2] < puVar8[0x12]));
            bVar16 = uVar10 <= uVar9;
            if (uVar9 == uVar10) {
              bVar16 = uVar7 <= uVar6;
            }
            uVar30 = DAT_00013878;
            if (bVar16) {
              uVar19 = FUN_000173ac(uVar7,uVar10,uVar6,uVar9,uVar17);
              uVar30 = CONCAT44(extraout_s1_07,uVar19);
            }
            uVar19 = FUN_000173ac(puVar8[4],puVar8[5],puVar4[4],puVar4[5],uVar17);
            uVar40 = CONCAT44(extraout_s1,uVar19);
            uVar19 = FUN_000173ac(puVar8[8],puVar8[9],puVar4[8],puVar4[9],uVar17);
            uVar31 = CONCAT44(extraout_s1_00,uVar19);
            uVar19 = FUN_000173ac(puVar8[0xc],puVar8[0xd],puVar4[0xc],puVar4[0xd],uVar17);
            uVar24 = CONCAT44(extraout_s1_01,uVar19);
            uVar19 = FUN_000173ac(puVar8[0xe],puVar8[0xf],puVar4[0xe],puVar4[0xf],uVar17);
            uVar29 = CONCAT44(extraout_s1_02,uVar19);
            uVar19 = FUN_000173ac(puVar8[10],puVar8[0xb],puVar4[10],puVar4[0xb],uVar17);
            uVar25 = CONCAT44(extraout_s1_03,uVar19);
            uVar19 = FUN_000173ac(puVar8[0x10],puVar8[0x11],puVar4[0x10],puVar4[0x11],uVar17);
            uVar26 = CONCAT44(extraout_s1_04,uVar19);
            uVar19 = uVar18;
            uVar17 = FUN_000173ac(puVar8[0x12],puVar8[0x13],puVar4[0x12],puVar4[0x13],uVar17);
            uVar27 = CONCAT44(extraout_s1_05,uVar17);
            FUN_0001827c(0xffffffff,1,9,7,2,uVar19,uVar28,uVar30,uVar40,uVar31,uVar24,uVar29,uVar25,
                         uVar26,uVar27);
            bVar16 = puVar8[7] <= puVar4[7];
            if (puVar4[7] == puVar8[7]) {
              bVar16 = puVar8[6] <= puVar4[6];
            }
            uVar28 = DAT_00013878;
            if (bVar16) {
              uVar17 = FUN_000173ac();
              uVar28 = CONCAT44(extraout_s1_06,uVar17);
              uVar19 = uVar18;
            }
            FUN_0001827c(0xffffffff,2,1,7,2,uVar19,uVar28,uVar30,uVar40,uVar31,uVar24,uVar29,uVar25,
                         uVar26,uVar27);
            putchar(10);
          }
          else {
            FUN_000184ac(0,&DAT_00019afc,"");
            if (0 < DAT_0002b274) {
              local_78 = 0;
              local_6c = uVar15;
              do {
                while( true ) {
                  iVar2 = uVar6 * 0x50;
                  puVar4 = (uint *)((&DAT_0002b24c)[param_5] + iVar2);
                  uVar14 = (uint)*(undefined8 *)(puVar4 + 2);
                  uVar7 = uVar14 + *puVar4;
                  uVar34 = (uint)*(undefined8 *)(puVar4 + 4);
                  uVar9 = uVar34 + uVar7;
                  uVar32 = (uint)*(undefined8 *)(puVar4 + 6);
                  uVar10 = uVar32 + uVar9;
                  uVar35 = (uint)*(undefined8 *)(puVar4 + 8);
                  uVar11 = uVar35 + uVar10;
                  uVar33 = (uint)*(undefined8 *)(puVar4 + 0xc);
                  uVar12 = uVar33 + uVar11;
                  uVar13 = puVar4[10] + uVar12;
                  if (((puVar4[0xe] + uVar13 == 0 &&
                        puVar4[0xf] +
                        puVar4[0xb] +
                        (int)((ulonglong)*(undefined8 *)(puVar4 + 0xc) >> 0x20) +
                        (int)((ulonglong)*(undefined8 *)(puVar4 + 8) >> 0x20) +
                        (int)((ulonglong)*(undefined8 *)(puVar4 + 6) >> 0x20) +
                        (int)((ulonglong)*(undefined8 *)(puVar4 + 4) >> 0x20) +
                        (int)((ulonglong)*(undefined8 *)(puVar4 + 2) >> 0x20) + puVar4[1] +
                        (uint)CARRY4(uVar14,*puVar4) + (uint)CARRY4(uVar34,uVar7) +
                        (uint)CARRY4(uVar32,uVar9) + (uint)CARRY4(uVar35,uVar10) +
                        (uint)CARRY4(uVar33,uVar11) + (uint)CARRY4(puVar4[10],uVar12) +
                        (uint)CARRY4(puVar4[0xe],uVar13) == 0) && (DAT_0002b12c != 0)) ||
                     (*(int *)(DAT_0002b26c + uVar6 * 4 + -4) != uVar15 - 1)) break;
                  uVar6 = uVar6 + 1;
                  lVar37 = FUN_00016440(local_70[0xd] + iVar2);
                  local_78 = lVar37 + local_78;
                  if (DAT_0002b274 < (int)uVar6) goto LAB_000137e4;
                }
                uVar6 = uVar6 + 1;
              } while ((int)uVar6 <= DAT_0002b274);
LAB_000137e4:
              uVar15 = local_6c;
              lVar37 = local_78;
              if (local_78 != 0) goto LAB_0001349c;
            }
            lVar37 = 0;
            FUN_0001827c(0xffffffff,0,10,7,2);
            putchar(10);
          }
        }
        bVar16 = (int)uVar15 <= DAT_0002b130;
        uVar15 = uVar15 + 1;
      } while (bVar16);
    }
    return;
  }
  if (*param_10 != 0) {
    puts(",");
  }
  *param_10 = 1;
  FUN_0001708c(param_9,"\"node-load\": [");
  if (-2 < DAT_0002b130) {
    iVar5 = 0;
    uVar30 = CONCAT44(param_9 + 1,&DAT_0002b218 + param_6);
    uVar28 = 0x2b12c;
    uVar15 = 0;
    do {
      uVar17 = (undefined4)uVar28;
      uVar6 = (int)(uint)*(byte *)(DAT_0002b264 + ((int)uVar15 >> 3)) >> (uVar15 & 7);
      uVar1 = (ulonglong)uVar6 & 1;
      lVar39 = uVar1 << 0x20;
      if (((uVar6 & 1) != 0) && (*(int *)(DAT_0002b268 + uVar15 * 4) != 0)) {
        uVar6 = *(uint *)((int)uVar30 + 0x28);
        uVar7 = (&DAT_0002b240)[param_5];
        uVar41 = (ulonglong)uVar6;
        uVar42 = (ulonglong)uVar7;
        if (iVar5 == 0) {
          iVar5 = (int)uVar1;
          if (uVar15 != 0) goto LAB_00013b18;
LAB_0001390c:
          local_78._0_4_ = 0x6c6c61;
          uVar28 = CONCAT44(&local_78,uVar17);
        }
        else {
          puts(",");
          uVar7 = (uint)uVar42;
          uVar6 = (uint)uVar41;
          iVar5 = (int)((ulonglong)lVar39 >> 0x20);
          if (uVar15 == 0) goto LAB_0001390c;
LAB_00013b18:
          uVar28 = CONCAT44(&local_78,uVar17);
          snprintf((char *)&local_78,0x10,"%d");
          iVar5 = (int)((ulonglong)lVar39 >> 0x20);
          local_6c = local_6c & 0xffffff;
          if (DAT_0002b274 < 1) {
LAB_00013c9c:
            FUN_0001701c((int)((ulonglong)uVar30 >> 0x20),
                         "{\"node\": \"%d\", \"usr\": 0.00, \"nice\": 0.00, \"sys\": 0.00, \"iowait\": 0.00, \"irq\": 0.00, \"soft\": 0.00, \"steal\": 0.00, \"guest\": 0.00, \"gnice\": 0.00, \"idle\": 100.00}"
                         ,uVar15 - 1);
            lVar37 = 0;
            goto LAB_00013a98;
          }
          lVar37 = 0;
          piVar43 = (int *)uVar28;
          do {
            while( true ) {
              uVar7 = (uint)uVar42;
              uVar6 = (uint)uVar41;
              uVar17 = (undefined4)((ulonglong)uVar28 >> 0x20);
              iVar3 = iVar5 * 0x50;
              puVar4 = (uint *)((&DAT_0002b24c)[param_5] + iVar3);
              uVar32 = (uint)*(undefined8 *)(puVar4 + 2);
              uVar9 = uVar32 + *puVar4;
              uVar35 = (uint)*(undefined8 *)(puVar4 + 4);
              uVar10 = uVar35 + uVar9;
              uVar33 = (uint)*(undefined8 *)(puVar4 + 6);
              uVar11 = uVar33 + uVar10;
              uVar36 = (uint)*(undefined8 *)(puVar4 + 8);
              uVar12 = uVar36 + uVar11;
              uVar34 = (uint)*(undefined8 *)(puVar4 + 0xc);
              uVar13 = uVar34 + uVar12;
              uVar14 = puVar4[10] + uVar13;
              if (((puVar4[0xe] + uVar14 == 0 &&
                    puVar4[0xf] +
                    puVar4[0xb] +
                    (int)((ulonglong)*(undefined8 *)(puVar4 + 0xc) >> 0x20) +
                    (int)((ulonglong)*(undefined8 *)(puVar4 + 8) >> 0x20) +
                    (int)((ulonglong)*(undefined8 *)(puVar4 + 6) >> 0x20) +
                    (int)((ulonglong)*(undefined8 *)(puVar4 + 4) >> 0x20) +
                    (int)((ulonglong)*(undefined8 *)(puVar4 + 2) >> 0x20) + puVar4[1] +
                    (uint)CARRY4(uVar32,*puVar4) + (uint)CARRY4(uVar35,uVar9) +
                    (uint)CARRY4(uVar33,uVar10) + (uint)CARRY4(uVar36,uVar11) +
                    (uint)CARRY4(uVar34,uVar12) + (uint)CARRY4(puVar4[10],uVar13) +
                    (uint)CARRY4(puVar4[0xe],uVar14) == 0) && (*piVar43 != 0)) ||
                 (*(int *)(DAT_0002b26c + iVar5 * 4 + -4) != uVar15 - 1)) break;
              iVar5 = iVar5 + 1;
              lVar38 = FUN_00016440(*(int *)((int)uVar30 + 0x34) + iVar3);
              uVar7 = (uint)uVar42;
              uVar6 = (uint)uVar41;
              uVar17 = (undefined4)((ulonglong)uVar28 >> 0x20);
              lVar37 = lVar38 + lVar37;
              iVar3 = (int)((ulonglong)lVar39 >> 0x20);
              if (DAT_0002b274 < iVar5) goto LAB_00013c8c;
            }
            iVar5 = iVar5 + 1;
            iVar3 = (int)((ulonglong)lVar39 >> 0x20);
          } while (iVar5 <= DAT_0002b274);
LAB_00013c8c:
          iVar5 = iVar3;
          uVar28 = CONCAT44(uVar17,piVar43);
          if (lVar37 == 0) goto LAB_00013c9c;
        }
        puVar4 = (uint *)(uVar6 + uVar15 * 0x50);
        puVar8 = (uint *)(uVar7 + uVar15 * 0x50);
        uVar6 = *puVar4 - puVar4[0x10];
        uVar7 = puVar4[1] - (puVar4[0x11] + (uint)(*puVar4 < puVar4[0x10]));
        uVar9 = *puVar8 - puVar8[0x10];
        uVar10 = puVar8[1] - (puVar8[0x11] + (uint)(*puVar8 < puVar8[0x10]));
        bVar16 = uVar10 <= uVar7;
        if (uVar7 == uVar10) {
          bVar16 = uVar9 <= uVar6;
        }
        if (bVar16) {
          uVar17 = FUN_000173ac(uVar9,uVar10,uVar6,uVar7,lVar37);
          uVar40 = CONCAT44(extraout_s1_18,uVar17);
        }
        else {
          uVar40 = 0;
        }
        uVar6 = puVar4[2] - puVar4[0x12];
        uVar7 = puVar4[3] - (puVar4[0x13] + (uint)(puVar4[2] < puVar4[0x12]));
        uVar9 = puVar8[2] - puVar8[0x12];
        uVar10 = puVar8[3] - (puVar8[0x13] + (uint)(puVar8[2] < puVar8[0x12]));
        bVar16 = uVar10 <= uVar7;
        if (uVar7 == uVar10) {
          bVar16 = uVar9 <= uVar6;
        }
        if (bVar16) {
          uVar17 = FUN_000173ac(uVar9,uVar10,uVar6,uVar7,lVar37);
          uVar31 = CONCAT44(extraout_s1_17,uVar17);
        }
        else {
          uVar31 = 0;
        }
        uVar17 = FUN_000173ac(puVar8[4],puVar8[5],puVar4[4],puVar4[5],lVar37);
        uVar18 = FUN_000173ac(puVar8[8],puVar8[9],puVar4[8],puVar4[9],lVar37);
        uVar19 = FUN_000173ac(puVar8[0xc],puVar8[0xd],puVar4[0xc],puVar4[0xd],lVar37);
        uVar20 = FUN_000173ac(puVar8[0xe],puVar8[0xf],puVar4[0xe],puVar4[0xf],lVar37);
        uVar21 = FUN_000173ac(puVar8[10],puVar8[0xb],puVar4[10],puVar4[0xb],lVar37);
        uVar22 = FUN_000173ac(puVar8[0x10],puVar8[0x11],puVar4[0x10],puVar4[0x11],lVar37);
        uVar23 = FUN_000173ac(puVar8[0x12],puVar8[0x13],puVar4[0x12],puVar4[0x13],lVar37);
        uVar24 = CONCAT44(extraout_s1_15,uVar23);
        uVar6 = puVar4[7];
        bVar16 = puVar8[7] <= uVar6;
        if (uVar6 == puVar8[7]) {
          bVar16 = puVar8[6] <= puVar4[6];
        }
        if (bVar16) {
          uVar23 = FUN_000173ac();
          uVar29 = CONCAT44(extraout_s1_16,uVar23);
          uVar6 = extraout_r3;
        }
        else {
          uVar29 = 0;
        }
        FUN_0001701c((int)((ulonglong)uVar30 >> 0x20),
                     "{\"node\": \"%s\", \"usr\": %.2f, \"nice\": %.2f, \"sys\": %.2f, \"iowait\": %.2f, \"irq\": %.2f, \"soft\": %.2f, \"steal\": %.2f, \"guest\": %.2f, \"gnice\": %.2f, \"idle\": %.2f}"
                     ,(int)((ulonglong)uVar28 >> 0x20),uVar6,uVar40,uVar31,
                     CONCAT44(extraout_s1_09,uVar17),CONCAT44(extraout_s1_10,uVar18),
                     CONCAT44(extraout_s1_11,uVar19),CONCAT44(extraout_s1_12,uVar20),
                     CONCAT44(extraout_s1_13,uVar21),CONCAT44(extraout_s1_14,uVar22),uVar24,uVar29);
      }
LAB_00013a98:
      bVar16 = (int)uVar15 <= *(int *)((int)uVar28 + 4);
      uVar15 = uVar15 + 1;
    } while (bVar16);
  }
  putchar(10);
  FUN_0001701c(param_9,&DAT_00019cac);
  return;
}



/* ===== FUN_00014240 @ 00014240 size=1276 ===== */

void FUN_00014240(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 int param_6,undefined4 param_7,undefined4 param_8,int param_9,int *param_10,
                 int param_11)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  double dVar13;
  double dVar14;
  longlong lVar15;
  
  if ((DAT_0002b278 & 4) == 0) {
    if (param_1 != 0) {
      printf("\n%-11s  CPU    intr/s\n",param_7);
    }
    if ((*DAT_0002b260 & 1) != 0) {
      printf("%-11s",param_8);
      FUN_000184ac(1,&DAT_00019ae8,&DAT_00019ae0,0);
      uVar5 = *(uint *)(&DAT_0002b234)[param_6];
      uVar1 = *(uint *)(&DAT_0002b234)[param_5];
      FUN_000196d8(uVar5 - uVar1,
                   ((uint *)(&DAT_0002b234)[param_6])[1] -
                   (((uint *)(&DAT_0002b234)[param_5])[1] + (uint)(uVar5 < uVar1)));
      FUN_000196d8(param_3,param_4);
      FUN_00018088(0xffffffff,0,1,9,2);
      putchar(10);
    }
    if (0 < DAT_0002b274) {
      uVar1 = 1;
      do {
        while( true ) {
          if (((int)(uint)DAT_0002b260[(int)uVar1 >> 3] >> (uVar1 & 7) & 1U) == 0) break;
          if (((int)(uint)*(byte *)(param_11 + ((int)uVar1 >> 3)) >> (uVar1 & 7) & 1U) != 0) break;
          iVar4 = (&DAT_0002b24c)[param_5];
          iVar7 = (&DAT_0002b234)[param_5];
          iVar2 = (&DAT_0002b24c)[param_6];
          iVar3 = (&DAT_0002b234)[param_6];
          printf("%-11s",param_8);
          FUN_000184ac(0,&DAT_00019afc,"",uVar1 - 1);
          lVar15 = FUN_00016440(iVar2 + uVar1 * 0x50,iVar4 + uVar1 * 0x50);
          puVar9 = (uint *)(iVar3 + uVar1 * 8);
          puVar12 = (uint *)(iVar7 + uVar1 * 8);
          if (lVar15 == 0) {
            FUN_00018088(0xffffffff,0,1,9,2);
            putchar(10);
            break;
          }
          uVar5 = *puVar9;
          uVar1 = uVar1 + 1;
          uVar6 = *puVar12;
          FUN_000196d8(uVar5 - uVar6,puVar9[1] - (puVar12[1] + (uint)(uVar5 < uVar6)));
          FUN_000196d8(param_3,param_4);
          FUN_00018088(0xffffffff,0,1,9,2);
          putchar(10);
          if (DAT_0002b274 < (int)uVar1) {
            return;
          }
        }
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 <= DAT_0002b274);
    }
    return;
  }
  if (*param_10 != 0) {
    puts(",");
  }
  *param_10 = 1;
  iVar3 = param_9 + 1;
  FUN_0001708c(param_9,"\"sum-interrupts\": [");
  uVar1 = *DAT_0002b260 & 1;
  if ((*DAT_0002b260 & 1) != 0) {
    uVar5 = *(uint *)(&DAT_0002b234)[param_6];
    uVar1 = *(uint *)(&DAT_0002b234)[param_5];
    dVar13 = (double)FUN_000196d8(uVar5 - uVar1,
                                  ((uint *)(&DAT_0002b234)[param_6])[1] -
                                  (((uint *)(&DAT_0002b234)[param_5])[1] + (uint)(uVar5 < uVar1)));
    dVar14 = (double)FUN_000196d8(param_3,param_4);
    dVar13 = (dVar13 / dVar14) * DAT_00014238;
    FUN_0001701c(iVar3,"{\"cpu\": \"all\", \"intr\": %.2f}",SUB84(dVar13,0),
                 (int)((ulonglong)dVar13 >> 0x20));
    uVar1 = 1;
  }
  if (0 < DAT_0002b274) {
    uVar5 = 1;
    do {
      while( true ) {
        iVar7 = uVar5 - 1;
        uVar6 = (int)(uint)DAT_0002b260[(int)uVar5 >> 3] >> (uVar5 & 7) & 1;
        if ((uVar6 != 0) &&
           (((int)(uint)*(byte *)(param_11 + ((int)uVar5 >> 3)) >> (uVar5 & 7) & 1U) == 0)) break;
LAB_0001409c:
        uVar5 = uVar5 + 1;
        if (DAT_0002b274 < (int)uVar5) goto LAB_00014190;
      }
      iVar8 = (&DAT_0002b234)[param_6];
      iVar11 = (&DAT_0002b234)[param_5];
      iVar2 = (&DAT_0002b24c)[param_5];
      iVar4 = (&DAT_0002b24c)[param_6];
      if (uVar1 != 0) {
        puts(",");
      }
      lVar15 = FUN_00016440(iVar4 + uVar5 * 0x50,iVar2 + uVar5 * 0x50);
      puVar9 = (uint *)(iVar8 + uVar5 * 8);
      puVar12 = (uint *)(iVar11 + uVar5 * 8);
      uVar1 = uVar6;
      if (lVar15 == 0) {
        FUN_0001701c(iVar3,"{\"cpu\": \"%d\", \"intr\": 0.00}",iVar7);
        goto LAB_0001409c;
      }
      uVar6 = *puVar9;
      uVar5 = uVar5 + 1;
      uVar10 = *puVar12;
      FUN_000196d8(uVar6 - uVar10,puVar9[1] - (puVar12[1] + (uint)(uVar6 < uVar10)));
      FUN_000196d8(param_3,param_4);
      FUN_0001701c(iVar3,"{\"cpu\": \"%d\", \"intr\": %.2f}",iVar7);
    } while ((int)uVar5 <= DAT_0002b274);
  }
LAB_00014190:
  putchar(10);
  FUN_0001701c(param_9,&DAT_00019cac);
  return;
}



/* ===== FUN_00014a70 @ 00014a70 size=2104 ===== */

void FUN_00014a70(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,
                 int param_11,int *param_12,int param_13,int param_14)

{
  bool bVar1;
  double dVar2;
  size_t sVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  char *pcVar14;
  uint *puVar15;
  uint uVar16;
  char *__s2;
  int iVar17;
  int *piVar18;
  uint in_fpscr;
  double dVar19;
  double dVar20;
  int local_4068;
  uint local_4040 [4080];
  double local_80;
  int local_74;
  int local_70;
  int local_6c;
  uint local_68;
  int local_64;
  char *local_60;
  int local_5c;
  undefined4 *local_58;
  int *local_54;
  int local_50;
  int local_4c;
  int local_48;
  char *local_44;
  
  if ((DAT_0002b278 & 4) != 0) {
    if (*param_12 != 0) {
      puts(",");
    }
    *param_12 = 1;
    local_48 = param_11;
    local_4c = param_11 + 1;
    if (param_13 == 4) {
      pcVar4 = "\"individual-interrupts\": [";
    }
    else {
      pcVar4 = "\"soft-interrupts\": [";
    }
    local_50 = param_14;
    FUN_0001708c(param_11,pcVar4);
    dVar2 = DAT_00014a68;
    local_58 = &DAT_0002b218;
    if (0 < DAT_0002b274) {
      piVar12 = (int *)(param_1 + param_8 * 4);
      bVar1 = false;
      local_44 = "{\"cpu\": \"%d\", \"intr\": [";
      piVar18 = (int *)(param_1 + param_7 * 4);
      local_6c = 0;
      local_54 = &DAT_0002b12c;
      local_60 = "{\"name\": \"%s\", \"value\": %.2f}";
      local_68 = 1;
      do {
        if (((((int)(uint)*(byte *)(local_58[0x12] + ((int)local_68 >> 3)) >> (local_68 & 7) & 1U)
              != 0) || ((local_58[0x18] & 1) == 0)) &&
           (((int)(uint)*(byte *)(local_50 + ((int)local_68 >> 3)) >> (local_68 & 7) & 1U) == 0)) {
          if (bVar1) {
            puts(",");
          }
          local_64 = local_48 + 2;
          FUN_0001708c(local_4c,local_44,local_68 - 1);
          if ((0 < param_2) && (iVar6 = *piVar12, *(char *)(iVar6 + 4) != '\0')) {
            iVar9 = *piVar18;
            iVar8 = 0;
            iVar11 = local_6c * 0x14;
            local_74 = iVar6;
            local_70 = iVar9;
            do {
              pcVar4 = (char *)(iVar6 + 4);
              iVar9 = strcmp(pcVar4,(char *)(iVar9 + 4));
              iVar6 = iVar8;
              if ((iVar9 == 0) || (*local_54 == 0)) {
LAB_000148d0:
                local_5c = iVar6;
                dVar20 = (double)FUN_000196d8(param_5);
                dVar19 = (double)VectorUnsignedToFloat
                                           (*(int *)(local_74 + iVar11) -
                                            *(int *)(local_70 + (local_6c + local_5c) * 0x14),
                                            (byte)(in_fpscr >> 0x16) & 3);
                local_80 = (dVar19 / dVar20) * dVar2;
                FUN_0001701c(local_64,local_60,pcVar4);
              }
              else {
                pcVar14 = (char *)(local_70 + 4);
                iVar6 = 0;
                do {
                  iVar9 = strcmp(pcVar4,pcVar14);
                  pcVar14 = pcVar14 + 0x14;
                  iVar10 = iVar6 + 1;
                  if (iVar9 == 0) goto LAB_000148d0;
                  iVar6 = iVar10;
                } while (param_2 != iVar10);
                uVar5 = *(undefined4 *)(local_74 + iVar11);
                dVar20 = (double)FUN_000196d8(param_5,param_6);
                dVar19 = (double)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x16) & 3);
                local_80 = (dVar19 / dVar20) * dVar2;
                FUN_0001701c(local_64,local_60,pcVar4);
              }
              if (param_2 == iVar8 + 1) break;
              iVar8 = iVar8 + 1;
              iVar11 = iVar11 + 0x14;
              iVar6 = *piVar12 + iVar8 * 0x14;
              if (*(char *)(iVar6 + 4) == '\0') break;
              iVar9 = *piVar18 + iVar8 * 0x14;
              puts(",");
              local_74 = *piVar12;
              local_70 = *piVar18;
            } while( true );
          }
          putchar(10);
          FUN_0001701c(local_4c,&DAT_00019f48);
          bVar1 = true;
        }
        local_68 = local_68 + 1;
        local_6c = local_6c + param_2;
      } while ((int)local_68 <= (int)local_58[0x17]);
    }
    putchar(10);
    FUN_0001701c(local_48,&DAT_00019cac);
    return;
  }
  if (param_3 == 0) {
    if (DAT_0002b12c == 0) goto LAB_00014378;
    if (param_2 < 1) goto LAB_000143c0;
    iVar6 = param_8 << 2;
    pcVar14 = (char *)(*(int *)(param_1 + param_8 * 4) + 4);
    __s2 = (char *)(*(int *)(param_1 + param_7 * 4) + 4);
    iVar8 = 0;
    pcVar4 = pcVar14;
    do {
      iVar9 = strcmp(pcVar4,__s2);
      iVar8 = iVar8 + 1;
      pcVar4 = pcVar4 + 0x14;
      __s2 = __s2 + 0x14;
      if (iVar9 != 0) {
        printf("\n%-11s  CPU",param_9);
        goto LAB_00014320;
      }
    } while (param_2 != iVar8);
  }
  else {
    printf("\n%-11s  CPU",param_9);
    if (0 < param_2) {
      iVar6 = param_8 * 4;
LAB_00014320:
      iVar8 = *(int *)(param_1 + iVar6);
      if (*(char *)(iVar8 + 4) != '\0') {
        iVar9 = 0;
        do {
          iVar9 = iVar9 + 1;
          printf(" %8s/s",iVar8 + 4);
          if (param_2 <= iVar9) break;
          iVar8 = iVar9 * 0x14 + *(int *)(param_1 + iVar6);
        } while (*(char *)(iVar8 + 4) != '\0');
      }
    }
    putchar(10);
LAB_00014378:
    if (param_2 < 1) goto LAB_000143c0;
    pcVar14 = (char *)(*(int *)(param_1 + param_8 * 4) + 4);
  }
  iVar6 = 0;
  puVar15 = local_4040;
  do {
    iVar6 = iVar6 + 1;
    sVar3 = strlen(pcVar14);
    pcVar14 = pcVar14 + 0x14;
    if (sVar3 + 2 < 10) {
      *puVar15 = 10;
    }
    else {
      *puVar15 = sVar3 + 2;
    }
    puVar15 = puVar15 + 1;
  } while (iVar6 < param_2);
LAB_000143c0:
  if (0 < DAT_0002b274) {
    piVar12 = (int *)(param_1 + param_8 * 4);
    uVar16 = 1;
    local_4068 = 0;
    do {
      if (((((int)(uint)*(byte *)(DAT_0002b260 + ((int)uVar16 >> 3)) >> (uVar16 & 7) & 1U) != 0) ||
          ((DAT_0002b278 & 1) == 0)) &&
         (((int)(uint)*(byte *)(param_14 + ((int)uVar16 >> 3)) >> (uVar16 & 7) & 1U) == 0)) {
        printf("%-11s",param_10);
        FUN_000184ac(0,"  %3d","",uVar16 - 1);
        if ((param_2 < 1) || (iVar6 = *piVar12, *(char *)(iVar6 + 4) == '\0')) {
LAB_00014700:
          putchar(10);
        }
        else {
          iVar8 = 0;
          iVar9 = 0;
          do {
            iVar13 = *(int *)(param_1 + param_7 * 4);
            iVar10 = strcmp((char *)(iVar6 + 4),(char *)(iVar13 + iVar9 + 4));
            iVar11 = iVar8;
            if ((iVar10 == 0) || (DAT_0002b12c == 0)) {
LAB_00014518:
              FUN_000196d8(param_5);
              VectorUnsignedToFloat
                        (*(int *)(iVar6 + local_4068 * 0x14) -
                         *(int *)(iVar13 + (local_4068 + iVar11) * 0x14),
                         (byte)(in_fpscr >> 0x16) & 3);
              FUN_00018088(0xffffffff,0,1,local_4040[iVar8],2);
            }
            else {
              pcVar4 = (char *)(iVar13 + 4);
              iVar11 = 0;
              do {
                iVar10 = strcmp((char *)(iVar6 + 4),pcVar4);
                pcVar4 = pcVar4 + 0x14;
                iVar17 = iVar11 + 1;
                if (iVar10 == 0) goto LAB_00014518;
                iVar11 = iVar17;
              } while (param_2 != iVar17);
              uVar5 = *(undefined4 *)(iVar6 + local_4068 * 0x14);
              uVar7 = local_4040[iVar8];
              FUN_000196d8(param_5,param_6);
              VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x16) & 3);
              FUN_00018088(0xffffffff,0,1,uVar7,2);
            }
            if (param_2 == iVar8 + 1) goto LAB_00014700;
            iVar8 = iVar8 + 1;
            iVar9 = iVar9 + 0x14;
            iVar6 = *piVar12 + iVar9;
          } while (*(char *)(iVar6 + 4) != '\0');
          putchar(10);
        }
      }
      uVar16 = uVar16 + 1;
      local_4068 = local_4068 + param_2;
    } while ((int)uVar16 <= DAT_0002b274);
  }
  return;
}



/* ===== FUN_00014b0c @ 00014b0c size=616 ===== */

void FUN_00014b0c(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  ssize_t sVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 local_440;
  undefined1 auStack_43c [1032];
  
  local_440 = 0;
  memset(auStack_43c,0,0x401);
  sVar1 = write(1,"",0);
  if (sVar1 == -1) {
    perror("stdout");
                    /* WARNING: Subroutine does not return */
    exit(6);
  }
  uVar6 = FUN_00012804(param_1,param_2,auStack_43c);
  uVar2 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if ((DAT_0002b278 & 4) == 0) {
    iVar5 = 4;
  }
  else {
    iVar5 = 5;
    FUN_0001708c(4,"{");
    FUN_0001708c(5,"\"timestamp\": \"%s\",",param_5);
  }
  puVar3 = (undefined4 *)(DAT_00014d74 + param_1 * 8);
  puVar4 = (undefined4 *)(DAT_00014d74 + param_2 * 8);
  uVar7 = FUN_00017410(*puVar3,puVar3[1],*puVar4,puVar4[1]);
  if ((DAT_0002b298 & 1) != 0) {
    FUN_00013320(param_3,&local_440,(int)uVar6,uVar2,param_1,param_2,param_4,param_5,iVar5,
                 &local_440,auStack_43c);
  }
  if ((DAT_0002b298 & 0x10) != 0) {
    FUN_00012684(param_1,param_2);
    FUN_00013d18(param_3,&local_440,(int)uVar6,uVar2,param_1,param_2,param_4,param_5,iVar5,
                 &local_440);
  }
  if ((DAT_0002b298 & 2) != 0) {
    FUN_00014240(param_3,&local_440,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20),param_1,param_2,
                 param_4,param_5,iVar5,&local_440,auStack_43c);
  }
  if ((DAT_0002b298 & 4) != 0) {
    FUN_00014a70(DAT_00014d7c,DAT_0002b258,param_3,&local_440,uVar7,param_1,param_2,param_4,param_5,
                 iVar5,&local_440,4,auStack_43c);
  }
  if ((DAT_0002b298 & 8) != 0) {
    FUN_00014a70(DAT_00014d78,DAT_0002b25c,param_3,8,uVar7,param_1,param_2,param_4,param_5,iVar5,
                 &local_440,8,auStack_43c);
  }
  if ((DAT_0002b278 & 4) != 0) {
    putchar(10);
    FUN_0001701c(iVar5 + -1,"}");
    return;
  }
  return;
}



/* ===== FUN_00014dd0 @ 00014dd0 size=176 ===== */

void FUN_00014dd0(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  char acStack_a0 [132];
  
  iVar2 = FUN_00016fa8();
  uVar1 = (uint)(param_1 == 0);
  if (iVar2 == 0) {
    pcVar3 = "%X";
  }
  else {
    pcVar3 = "%H:%M:%S";
  }
  strftime(acStack_a0 + uVar1 * 0x40,0x40,pcVar3,(tm *)(&DAT_00030f50 + uVar1 * 0xb));
  iVar2 = FUN_00016fa8();
  if (iVar2 == 0) {
    pcVar3 = "%X";
  }
  else {
    pcVar3 = "%H:%M:%S";
  }
  strftime(acStack_a0 + param_1 * 0x40,0x40,pcVar3,(tm *)(&DAT_00030f50 + param_1 * 0xb));
  FUN_00014b0c(uVar1,param_1,param_2,acStack_a0 + uVar1 * 0x40,acStack_a0 + param_1 * 0x40);
  return;
}



/* ===== FUN_00014e80 @ 00014e80 size=168 ===== */

void FUN_00014e80(undefined4 *param_1)

{
  FILE *__stream;
  int iVar1;
  char *pcVar2;
  undefined4 local_418 [2];
  char acStack_410 [5];
  char acStack_40b [1019];
  
  __stream = fopen("/proc/stat","r");
  if (__stream != (FILE *)0x0) {
    do {
      pcVar2 = fgets(acStack_410,0x400,__stream);
      if (pcVar2 == (char *)0x0) goto LAB_00014ee8;
      iVar1 = strncmp(acStack_410,"intr ",5);
    } while (iVar1 != 0);
    sscanf(acStack_40b,"%llu",local_418);
    *param_1 = local_418[0];
    param_1[1] = 0;
LAB_00014ee8:
    fclose(__stream);
  }
  return;
}



/* ===== FUN_00014f28 @ 00014f28 size=952 ===== */

void FUN_00014f28(char *param_1,int param_2,uint param_3,int param_4)

{
  char cVar1;
  char *__s;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  size_t __n;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int aiStack_78 [2];
  char *local_70;
  int local_6c;
  int local_68;
  undefined4 *local_64;
  uint local_60;
  FILE *local_5c;
  char *local_58;
  int local_54;
  int *local_50;
  uint local_4c;
  int local_48;
  int local_44;
  int local_40;
  int *local_3c;
  char *local_34 [2];
  
  iVar11 = -(DAT_0002b274 * 4 + 7 & 0xfffffff8);
  local_48 = param_2;
  local_44 = param_4;
  local_5c = fopen(param_1,"r");
  uVar5 = DAT_0002b274;
  local_68 = (int)&local_70 + iVar11;
  if (local_5c == (FILE *)0x0) {
    local_4c = 0;
  }
  else {
    if (DAT_0002b274 * 0xb == -0x80) {
      local_58 = (char *)0x0;
    }
    else {
      local_58 = calloc(DAT_0002b274 * 0xb + 0x80,1);
      if (local_58 == (char *)0x0) {
        perror("realloc");
                    /* WARNING: Subroutine does not return */
        exit(4);
      }
    }
    iVar13 = local_44;
    iVar12 = 0;
    local_6c = local_44 * 4;
    do {
      pcVar4 = fgets(local_58,uVar5 * 0xb + 0x80,local_5c);
      if (pcVar4 == (char *)0x0) {
        iVar14 = 0;
        break;
      }
      iVar14 = 0;
      local_34[0] = local_58;
      puVar10 = (uint *)(local_68 + -4);
      while (((pcVar4 = strstr(local_34[0],"CPU"), pcVar4 != (char *)0x0 &&
              (iVar14 < (int)DAT_0002b274)) &&
             (uVar5 = strtol(pcVar4 + 3,local_34,10), iVar3 = local_48, uVar5 < DAT_0002b274))) {
        puVar10 = puVar10 + 1;
        *puVar10 = uVar5;
        iVar14 = iVar14 + 1;
        *(undefined8 *)((&DAT_0002b234)[iVar13] + (uVar5 + 1) * 8) = 0;
        *(int *)((int)aiStack_78 + iVar11) = local_44;
        FUN_00012204(iVar3,iVar12,uVar5,param_3);
        iVar12 = uVar5 + 1;
      }
      uVar5 = DAT_0002b274;
    } while (iVar14 == 0);
    iVar13 = local_48;
    *(int *)((int)aiStack_78 + iVar11) = local_44;
    FUN_00012204(iVar13,iVar12,DAT_0002b274,param_3);
    local_50 = (int *)(iVar13 + local_6c);
    local_70 = ":";
    local_4c = 0;
    local_64 = &DAT_0002b218;
    local_60 = param_3;
    local_54 = iVar14;
    while ((pcVar6 = fgets(local_58,local_64[0x17] * 0xb + 0x80,local_5c), pcVar4 = local_58,
           param_3 = local_60, pcVar6 != (char *)0x0 && (local_4c != local_60))) {
      pcVar6 = strchr(local_58,0x3a);
      if (pcVar6 != (char *)0x0) {
        iVar11 = local_4c * 0x14 + *local_50;
        cVar1 = *pcVar4;
        __s = local_58;
        while (cVar1 == ' ') {
          pcVar4 = pcVar4 + 1;
          __s = pcVar4;
          cVar1 = *pcVar4;
        }
        __n = strcspn(__s,local_70);
        iVar13 = 0;
        if (0xe < (int)__n) {
          __n = 0xf;
        }
        strncpy((char *)(iVar11 + 4),__s,__n);
        uVar5 = local_60;
        puVar2 = local_64;
        iVar12 = local_6c;
        *(undefined1 *)(iVar11 + __n + 4) = 0;
        if (local_54 != 0) {
          local_3c = (int *)(local_68 + -4);
          pcVar4 = pcVar6 + 1;
          do {
            iVar13 = iVar13 + 1;
            local_3c = local_3c + 1;
            iVar11 = uVar5 * *local_3c + local_4c;
            puVar10 = (uint *)(*(int *)((int)puVar2 + iVar12 + 0x1c) + (*local_3c + 1) * 8);
            local_40 = *local_50;
            uVar7 = strtoul(pcVar4,local_34,10);
            uVar8 = *puVar10;
            uVar9 = puVar10[1];
            *(ulong *)(local_40 + iVar11 * 0x14) = uVar7;
            *puVar10 = uVar8 + uVar7;
            puVar10[1] = uVar9 + CARRY4(uVar8,uVar7);
            pcVar4 = local_34[0];
          } while (iVar13 != local_54);
        }
        local_4c = local_4c + 1;
      }
    }
    fclose(local_5c);
    free(local_58);
  }
  if (local_4c < param_3) {
    iVar11 = *(int *)(local_48 + local_44 * 4);
    iVar13 = local_4c * 0x14 + iVar11;
    do {
      *(undefined1 *)(iVar13 + 4) = 0;
      iVar13 = iVar13 + 0x14;
    } while (param_3 * 0x14 + iVar11 != iVar13);
  }
  return;
}



/* ===== FUN_000152e0 @ 000152e0 size=1724 ===== */

void FUN_000152e0(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  undefined4 *puVar17;
  undefined4 *puVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  uint uVar26;
  undefined8 uVar27;
  undefined8 *puVar10;
  undefined4 *puVar18;
  
  FUN_00016264(&DAT_0002b280);
  FUN_00015968(DAT_0002b24c,DAT_0002b274 + 1);
  if ((1 < DAT_0002b274) && (memset(DAT_0002b24c,0,0x50), puVar2 = DAT_0002b24c, 0 < DAT_0002b274))
  {
    puVar7 = DAT_0002b24c + DAT_0002b274 * 10;
    uVar25 = *DAT_0002b24c;
    uVar11 = *(uint *)(DAT_0002b24c + 7);
    iVar13 = *(int *)((int)DAT_0002b24c + 0x3c);
    uVar15 = *(uint *)(DAT_0002b24c + 8);
    iVar14 = *(int *)((int)DAT_0002b24c + 0x44);
    uVar24 = DAT_0002b24c[1];
    uVar12 = *(uint *)(DAT_0002b24c + 9);
    iVar4 = *(int *)((int)DAT_0002b24c + 0x4c);
    uVar23 = DAT_0002b24c[2];
    uVar22 = DAT_0002b24c[3];
    uVar27 = DAT_0002b24c[4];
    auVar21 = *(undefined1 (*) [16])(DAT_0002b24c + 5);
    puVar9 = DAT_0002b24c;
    do {
      puVar10 = puVar9 + 10;
      uVar25 = VectorAdd(uVar25,*puVar10,8);
      *puVar2 = uVar25;
      uVar24 = VectorAdd(uVar24,puVar9[0xb],8);
      puVar2[1] = uVar24;
      uVar23 = VectorAdd(uVar23,puVar9[0xc],8);
      puVar2[2] = uVar23;
      uVar22 = VectorAdd(uVar22,puVar9[0xd],8);
      puVar2[3] = uVar22;
      uVar27 = VectorAdd(uVar27,puVar9[0xe],8);
      puVar2[4] = uVar27;
      uVar20 = auVar21._0_8_;
      auVar21._8_8_ = VectorAdd(auVar21._8_8_,puVar9[0x10],8);
      puVar2[6] = auVar21._8_8_;
      auVar21._0_8_ = VectorAdd(uVar20,puVar9[0xf],8);
      puVar2[5] = auVar21._0_8_;
      uVar26 = (uint)puVar9[0x11];
      bVar16 = CARRY4(uVar26,uVar11);
      uVar11 = uVar26 + uVar11;
      iVar13 = (int)((ulonglong)puVar9[0x11] >> 0x20) + iVar13 + (uint)bVar16;
      *(uint *)(puVar2 + 7) = uVar11;
      *(int *)((int)puVar2 + 0x3c) = iVar13;
      uVar26 = (uint)puVar9[0x12];
      bVar16 = CARRY4(uVar26,uVar15);
      uVar15 = uVar26 + uVar15;
      iVar14 = (int)((ulonglong)puVar9[0x12] >> 0x20) + iVar14 + (uint)bVar16;
      *(uint *)(puVar2 + 8) = uVar15;
      *(int *)((int)puVar2 + 0x44) = iVar14;
      uVar26 = (uint)puVar9[0x13];
      bVar16 = CARRY4(uVar26,uVar12);
      uVar12 = uVar26 + uVar12;
      iVar4 = (int)((ulonglong)puVar9[0x13] >> 0x20) + iVar4 + (uint)bVar16;
      *(uint *)(puVar2 + 9) = uVar12;
      *(int *)((int)puVar2 + 0x4c) = iVar4;
      puVar9 = puVar10;
    } while (puVar10 != puVar7);
  }
  if (((DAT_0002b298 & 1) != 0) && ((DAT_0002b278 & 0x10) != 0)) {
    FUN_0001243c(DAT_0002b274,DAT_0002b270);
  }
  if ((DAT_0002b298 & 2) != 0) {
    FUN_00014e80(DAT_0002b234);
  }
  if ((DAT_0002b298 & 6) != 0) {
    FUN_00014f28("/proc/interrupts",DAT_00015964,DAT_0002b258,0);
  }
  if ((DAT_0002b298 & 8) != 0) {
    FUN_00014f28("/proc/softirqs",DAT_00015960,DAT_0002b25c,0);
  }
  iVar13 = DAT_0002b274;
  puVar17 = DAT_00015950;
  puVar1 = DAT_0001594c;
  if (DAT_0002b12c == 0) {
    puVar17 = DAT_0001594c + -10;
    uVar6 = DAT_0001594c[-9];
    uVar8 = DAT_0001594c[-8];
    puVar18 = DAT_0001594c + -7;
    *DAT_0001594c = DAT_0001594c[-0xb];
    puVar1[1] = *puVar17;
    puVar1[2] = uVar6;
    puVar1[3] = uVar8;
    puVar1[4] = *puVar18;
    puVar1[5] = puVar1[-6];
    puVar1[6] = puVar1[-5];
    puVar1[7] = puVar1[-4];
    puVar1[8] = puVar1[-3];
    puVar1[9] = puVar1[-2];
    puVar1[10] = puVar1[-1];
    memset(DAT_0002b250,0,iVar13 * 0x50 + 0x50);
    memset(DAT_0002b244,0,DAT_0002b274 * 0x50 + 0x50);
    memset(DAT_0002b238,0,(DAT_0002b274 + 1) * 8);
    memset(DAT_0002b22c,0,(DAT_0002b274 * DAT_0002b258 + DAT_0002b258) * 0x14);
    if ((DAT_0002b298 & 8) != 0) {
      memset(DAT_0002b220,0,(DAT_0002b274 * DAT_0002b25c + DAT_0002b25c) * 0x14);
    }
    FUN_00014dd0(0,1);
    if ((DAT_0002b278 & 4) != 0) {
      puts("\n\t\t\t]\n\t\t}\n\t]\n}}");
    }
                    /* WARNING: Subroutine does not return */
    exit(0);
  }
  *DAT_00015950 = 0;
  puVar17[1] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  puVar17[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  puVar17[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  (((sigaction *)(puVar17 + -1))->__sigaction_handler).sa_handler = (__sighandler_t)&LAB_00011bb4;
  sigaction(0xe,(sigaction *)(puVar17 + -1),(sigaction *)0x0);
  alarm(DAT_0002b12c);
  uVar27 = DAT_0002b280;
  iVar14 = DAT_0002b274;
  puVar1 = DAT_00015954;
  puVar17 = DAT_00015954 + -0x16;
  puVar18 = DAT_00015954 + -0x15;
  uVar6 = DAT_00015954[-0x14];
  uVar8 = DAT_00015954[-0x13];
  puVar19 = DAT_00015954 + -0x12;
  *DAT_00015954 = *puVar17;
  puVar1[1] = *puVar18;
  puVar1[2] = uVar6;
  puVar1[3] = uVar8;
  puVar1[4] = *puVar19;
  puVar1[5] = puVar1[-0x11];
  puVar1[6] = puVar1[-0x10];
  puVar1[7] = puVar1[-0xf];
  iVar13 = DAT_00015958;
  puVar1[8] = puVar1[-0xe];
  puVar1[9] = puVar1[-0xd];
  puVar1[10] = puVar1[-0xc];
  *(undefined8 *)(iVar13 + 0x10) = uVar27;
  memcpy(DAT_0002b254,DAT_0002b24c,iVar14 * 0x50 + 0x50);
  memcpy(DAT_0002b248,DAT_0002b240,DAT_0002b274 * 0x50 + 0x50);
  memcpy(DAT_0002b23c,DAT_0002b234,(DAT_0002b274 + 1) * 8);
  memcpy(DAT_0002b230,DAT_0002b228,(DAT_0002b274 * DAT_0002b258 + DAT_0002b258) * 0x14);
  if ((DAT_0002b298 & 8) != 0) {
    memcpy(DAT_0002b224,DAT_0002b21c,(DAT_0002b274 * DAT_0002b25c + DAT_0002b25c) * 0x14);
  }
  puVar1 = DAT_0001595c;
  *DAT_0001595c = 0;
  puVar1[1] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  puVar1[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  puVar1[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  (((sigaction *)(puVar1 + -1))->__sigaction_handler).sa_handler = (__sighandler_t)&LAB_00011ba0;
  sigaction(2,(sigaction *)(puVar1 + -1),(sigaction *)0x0);
  pause();
  if (DAT_0002b218 != 0) {
    return;
  }
  iVar14 = 1;
  uVar11 = 1;
  iVar13 = param_2;
  while( true ) {
    memset((&DAT_0002b24c)[uVar11],0,DAT_0002b274 * 0x50 + 0x50);
    FUN_000169f4(puVar17 + uVar11 * 0xb,0);
    FUN_00016264(DAT_00015958 + uVar11 * 8);
    FUN_00015968((&DAT_0002b24c)[uVar11],DAT_0002b274 + 1);
    if (((DAT_0002b298 & 1) != 0) && ((DAT_0002b278 & 0x10) != 0)) {
      FUN_0001243c(DAT_0002b274,DAT_0002b270);
    }
    if ((DAT_0002b298 & 2) != 0) {
      FUN_00014e80((&DAT_0002b234)[uVar11]);
    }
    if ((DAT_0002b298 & 6) != 0) {
      FUN_00014f28("/proc/interrupts",DAT_00015964,DAT_0002b258,uVar11);
    }
    if ((DAT_0002b298 & 8) != 0) {
      FUN_00014f28("/proc/softirqs",DAT_00015960,DAT_0002b25c,uVar11);
    }
    if (param_1 == 0) {
      uVar27 = FUN_0001936c(iVar13,param_2);
      iVar14 = (int)uVar27;
      if (iVar14 != 0) {
        iVar13 = (int)((ulonglong)uVar27 >> 0x20);
      }
      iVar13 = iVar13 + 1;
    }
    FUN_00014dd0(uVar11,iVar14);
    if (0 < DAT_0002b29c) {
      DAT_0002b29c = DAT_0002b29c + -1;
    }
    if (DAT_0002b29c == 0) goto joined_r0x00015688;
    pause();
    if (DAT_0002b218 != 0) break;
    if ((DAT_0002b278 & 4) != 0) {
      puts(",");
    }
    uVar11 = uVar11 ^ 1;
    if (DAT_0002b29c == 0) goto joined_r0x00015688;
    if ((DAT_0002b278 & 0x20) != 0) {
      iVar4 = FUN_000168a8(0xffffffff,1);
      if (DAT_0002b274 < iVar4) {
        iVar5 = FUN_00016900("/proc/interrupts",0x1000,iVar4);
        DAT_0002b258 = iVar5 + 3;
        iVar5 = FUN_00016900("/proc/softirqs",0x1000,iVar4);
        DAT_0002b25c = iVar5 + 3;
        FUN_00011c04(iVar4 + 1,DAT_0002b274 + 1);
        DAT_0002b130 = FUN_000122b4(iVar4,DAT_0002b268,DAT_0002b26c);
        DAT_0002b274 = iVar4;
      }
      if (DAT_0002b29c == 0) {
joined_r0x00015688:
        if ((DAT_0002b278 & 4) == 0) {
          pcVar3 = strncpy(&stack0xffffffe0,"Average:",0x10);
          FUN_00014b0c(2,uVar11,param_1,pcVar3,pcVar3);
          return;
        }
        puts("\n\t\t\t]\n\t\t}\n\t]\n}}");
        return;
      }
    }
  }
  DAT_0002b29c = 0;
  goto joined_r0x00015688;
}



/* ===== FUN_00015968 @ 00015968 size=520 ===== */

int FUN_00015968(void *param_1,int param_2)

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
      if (pcVar1 == (char *)0x0) goto LAB_00015b14;
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
          goto LAB_00015b14;
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
LAB_00015b14:
  fclose(__stream_00);
  return iVar5;
}



/* ===== FUN_00015b70 @ 00015b70 size=796 ===== */

int FUN_00015b70(int *param_1,int param_2,int param_3)

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
LAB_00015c74:
    local_4c = calloc(sVar3,1);
    if (local_4c == (int *)0x0) goto LAB_00015c88;
  }
  else {
    sVar3 = iVar9 * 4;
    if (sVar3 != 0) goto LAB_00015c74;
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
LAB_00015c88:
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
          goto LAB_00015cb8;
        }
        iVar7 = iVar7 + 1;
        plVar8 = plVar8 + 1;
        *plVar8 = lVar5;
      }
    } while (iVar7 == 0);
    __dest = param_1 + 4;
    param_1[1] = DAT_0001a0b8;
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
      goto LAB_00015cb8;
    }
  }
  iVar9 = 0;
LAB_00015cb8:
  free(local_4c);
  return iVar9;
}



/* ===== FUN_00015e8c @ 00015e8c size=984 ===== */

undefined4 FUN_00015e8c(int param_1)

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



/* ===== FUN_00016264 @ 00016264 size=184 ===== */

void FUN_00016264(longlong *param_1)

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



/* ===== FUN_0001631c @ 0001631c size=276 ===== */

void FUN_0001631c(uint *param_1,uint *param_2,undefined4 param_3,undefined4 param_4,double *param_5)

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
  dVar6 = DAT_00016430;
  if (uVar1 <= uVar2) {
    dVar7 = (double)FUN_000196d8(param_3,param_4);
    dVar6 = (double)VectorUnsignedToFloat(uVar2 - uVar1,(byte)(in_fpscr >> 0x16) & 3);
    dVar6 = (dVar6 / dVar7) * DAT_00016438;
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
    dVar8 = (double)FUN_000196d8(uVar3 - uVar1,uVar4 - (uVar2 + (uVar3 < uVar1)));
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



/* ===== FUN_00016440 @ 00016440 size=600 ===== */

undefined8 FUN_00016440(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  uint local_38;
  uint uStack_34;
  
  uVar15 = *param_1;
  uVar4 = *param_2;
  uVar14 = VectorSub(uVar15,param_1[8],8);
  uVar5 = uVar4 - param_2[0x10];
  uVar6 = param_2[1] - (param_2[0x11] + (uint)(uVar4 < param_2[0x10]));
  uVar2 = (uint)((ulonglong)uVar14 >> 0x20);
  bVar12 = uVar6 <= uVar2;
  if (uVar2 == uVar6) {
    bVar12 = uVar5 <= (uint)uVar14;
  }
  if (bVar12) {
    uVar14 = 0;
  }
  else {
    uVar14 = VectorAdd(param_1[8],CONCAT44(uVar6,uVar5),8);
    uVar14 = VectorSub(uVar14,uVar15,8);
  }
  uVar16 = param_1[1];
  uVar5 = param_2[2];
  uVar6 = uVar5 - param_2[0x12];
  uVar7 = param_2[3] - (param_2[0x13] + (uint)(uVar5 < param_2[0x12]));
  uVar17 = VectorSub(uVar16,param_1[9],8);
  uVar2 = (uint)((ulonglong)uVar17 >> 0x20);
  bVar12 = uVar7 <= uVar2;
  if (uVar2 == uVar7) {
    bVar12 = uVar6 <= (uint)uVar17;
  }
  if (!bVar12) {
    uVar17 = VectorAdd(param_1[9],CONCAT44(uVar7,uVar6),8);
    uVar17 = VectorSub(uVar17,uVar16,8);
    uVar14 = VectorAdd(uVar14,uVar17,8);
  }
  uVar2 = param_2[8];
  uVar6 = param_2[9];
  uVar7 = 0xffffffff;
  uVar8 = *(uint *)(param_1 + 4);
  uVar10 = *(uint *)((int)param_1 + 0x24);
  local_38 = *(uint *)(param_1 + 3);
  uStack_34 = *(uint *)((int)param_1 + 0x1c);
  bVar12 = uVar6 <= uVar10;
  if (uVar10 == uVar6) {
    bVar12 = uVar2 <= uVar8;
  }
  bVar13 = 0xfffffffe < uVar6;
  uVar1 = param_2[6];
  uVar3 = param_2[7];
  if (uVar6 == 0xffffffff) {
    bVar13 = 0xfff7fffe < uVar2;
  }
  uVar9 = uVar8;
  uVar11 = uVar10;
  if ((!bVar13 || uVar6 == 0xffffffff && uVar2 == 0xfff7ffff) && !bVar12) {
    bVar12 = 0xfffffffe < uVar3;
    bVar13 = uVar3 == 0xffffffff;
    if (bVar13) {
      bVar12 = 0xfff7fffe < uVar1;
    }
    if (bVar12 && (!bVar13 || uVar1 != 0xfff7ffff)) {
      uVar7 = 1;
    }
    if (!bVar12 || bVar13 && uVar1 == 0xfff7ffff) {
      uVar7 = 0;
    }
    bVar12 = uVar3 <= uStack_34;
    if (uStack_34 == uVar3) {
      bVar12 = uVar1 <= local_38;
    }
    if (bVar12 && (uStack_34 != uVar3 || local_38 != uVar1)) {
      uVar7 = uVar7 | 1;
    }
    if (uVar7 == 0) {
      param_2[8] = 0;
      param_2[9] = 0;
      uVar2 = 0;
      uVar6 = 0;
      uVar9 = *(uint *)(param_1 + 4);
      uVar11 = *(uint *)((int)param_1 + 0x24);
    }
    else {
      param_2[8] = uVar8;
      param_2[9] = uVar10;
      uVar9 = *(uint *)(param_1 + 4);
      uVar11 = *(uint *)((int)param_1 + 0x24);
      uVar2 = uVar8;
      uVar6 = uVar10;
    }
  }
  bVar12 = uVar3 <= uStack_34;
  if (uStack_34 == uVar3) {
    bVar12 = uVar1 <= local_38;
  }
  bVar13 = 0xfffffffe < uVar3;
  if (uVar3 == 0xffffffff) {
    bVar13 = 0xfff7fffe < uVar1;
  }
  if ((!bVar13 || uVar3 == 0xffffffff && uVar1 == 0xfff7ffff) && !bVar12) {
    uVar1 = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    local_38 = *(uint *)(param_1 + 3);
    uStack_34 = *(uint *)((int)param_1 + 0x1c);
    uVar3 = uVar1;
  }
  uVar15 = VectorAdd(uVar15,uVar16,8);
  uVar15 = VectorAdd(uVar15,param_1[2],8);
  uVar15 = VectorAdd(uVar15,param_1[5],8);
  uVar15 = VectorAdd(uVar15,param_1[6],8);
  uVar7 = (uint)uVar15 + *(uint *)(param_1 + 7);
  uVar8 = uVar7 - uVar4;
  uVar15 = VectorSub(CONCAT44((((int)((ulonglong)uVar15 >> 0x20) + *(int *)((int)param_1 + 0x3c) +
                               (uint)CARRY4((uint)uVar15,*(uint *)(param_1 + 7))) -
                              (param_2[1] + (uint)(uVar7 < uVar4))) -
                              (param_2[3] + (uint)(uVar8 < uVar5)),uVar8 - uVar5),
                     *(undefined8 *)(param_2 + 4),8);
  uVar15 = VectorSub(uVar15,*(undefined8 *)(param_2 + 10),8);
  uVar15 = VectorSub(uVar15,*(undefined8 *)(param_2 + 0xc),8);
  uVar15 = VectorSub(uVar15,*(undefined8 *)(param_2 + 0xe),8);
  uVar14 = VectorAdd(uVar15,uVar14,8);
  uVar4 = (uint)uVar14 + uVar9;
  uVar5 = uVar4 - uVar2;
  uVar7 = local_38 + uVar5;
  return CONCAT44((uStack_34 +
                   (((int)((ulonglong)uVar14 >> 0x20) + uVar11 + (uint)CARRY4((uint)uVar14,uVar9)) -
                   (uVar6 + (uVar4 < uVar2))) + (uint)CARRY4(local_38,uVar5)) -
                  (uVar3 + (uVar7 < uVar1)),uVar7 - uVar1);
}



/* ===== FUN_00016698 @ 00016698 size=280 ===== */

int FUN_00016698(int param_1)

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



/* ===== FUN_000167b0 @ 000167b0 size=248 ===== */

int FUN_000167b0(void)

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



/* ===== FUN_000168a8 @ 000168a8 size=88 ===== */

void FUN_000168a8(uint param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = FUN_00016698(param_2);
  if (uVar1 == 0) {
    uVar1 = FUN_000167b0();
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



/* ===== FUN_00016900 @ 00016900 size=200 ===== */

int FUN_00016900(char *param_1,int param_2,int param_3)

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



/* ===== FUN_000169c8 @ 000169c8 size=44 ===== */

void FUN_000169c8(void)

{
  printf("sysstat version %s\n","12.7.5");
  puts("(C) Sebastien Godard (sysstat <at> orange.fr)");
                    /* WARNING: Subroutine does not return */
  exit(0);
}



/* ===== FUN_000169f4 @ 000169f4 size=92 ===== */

int FUN_000169f4(tm *param_1,int param_2,int param_3)

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



/* ===== FUN_00016a50 @ 00016a50 size=112 ===== */

void FUN_00016a50(undefined4 param_1,undefined4 param_2)

{
  char *__s1;
  int iVar1;
  uint uVar2;
  
  if (DAT_0002b2a0 == 0) {
    __s1 = getenv("S_TIME_DEF_TIME");
    uVar2 = 0;
    if (__s1 != (char *)0x0) {
      iVar1 = strcmp(__s1,"UTC");
      uVar2 = (uint)(iVar1 == 0);
    }
    DAT_0002b2a0 = uVar2 + 1;
  }
  FUN_000169f4(param_1,param_2,DAT_0002b2a0 == 2);
  return;
}



/* ===== FUN_00016ac0 @ 00016ac0 size=156 ===== */

bool FUN_00016ac0(undefined4 param_1,char *param_2,int param_3)

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



/* ===== FUN_00016b5c @ 00016b5c size=88 ===== */

void FUN_00016b5c(void)

{
  long lVar1;
  int iVar2;
  
  lVar1 = sysconf(0x1e);
  if (lVar1 == -1) {
    perror("sysconf");
    DAT_00031200 = 0;
  }
  else {
    iVar2 = lVar1 >> 10;
    DAT_00031200 = 0;
    if (1 < iVar2) {
      do {
        iVar2 = iVar2 >> 1;
        DAT_00031200 = DAT_00031200 + 1;
      } while (iVar2 != 1);
    }
  }
  return;
}



/* ===== FUN_00016bb4 @ 00016bb4 size=56 ===== */

void FUN_00016bb4(void)

{
  long lVar1;
  
  lVar1 = sysconf(2);
  if (lVar1 == -1) {
    perror("sysconf");
  }
  DAT_00030ffc = lVar1;
  return;
}



/* ===== FUN_00016c18 @ 00016c18 size=292 ===== */

int FUN_00016c18(char *param_1,undefined8 *param_2,undefined4 *param_3)

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



/* ===== FUN_00016d3c @ 00016d3c size=328 ===== */

undefined4 FUN_00016d3c(char *param_1,undefined4 param_2,undefined4 param_3)

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
              goto LAB_00016e64;
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
      iVar2 = FUN_00016c18(pcVar4,param_2,param_3);
    } while (iVar2 != 0);
    uVar5 = 0;
LAB_00016e64:
    closedir(__dirp);
  }
  return uVar5;
}



/* ===== FUN_00016e84 @ 00016e84 size=52 ===== */

bool FUN_00016e84(char *param_1)

{
  int iVar1;
  stat sStack_60;
  
  iVar1 = stat(param_1,&sStack_60);
  return iVar1 == 0 && (sStack_60.st_mode & 0xf000) == 0x4000;
}



/* ===== FUN_00016fa8 @ 00016fa8 size=76 ===== */

void FUN_00016fa8(void)

{
  char *__s1;
  int iVar1;
  
  if ((int)DAT_0002b138 < 0) {
    __s1 = getenv("S_TIME_FORMAT");
    if (__s1 == (char *)0x0) {
      DAT_0002b138 = 0;
    }
    else {
      iVar1 = strcmp(__s1,"ISO");
      DAT_0002b138 = (uint)(iVar1 == 0);
    }
    return;
  }
  return;
}



/* ===== FUN_00016ff4 @ 00016ff4 size=40 ===== */

void FUN_00016ff4(int param_1)

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



/* ===== FUN_0001701c @ 0001701c size=108 ===== */

void FUN_0001701c(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_8 = param_3;
  uStack_4 = param_4;
  vsnprintf(DAT_00017088,0x400,param_2,&uStack_8);
  if (0 < param_1) {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
      putchar(9);
    } while (param_1 != iVar1);
  }
  printf("%s",DAT_00017088);
  return;
}



/* ===== FUN_0001708c @ 0001708c size=100 ===== */

void FUN_0001708c(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_8 = param_3;
  uStack_4 = param_4;
  vsnprintf(DAT_000170f0,0x400,param_2,&uStack_8);
  if (0 < param_1) {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
      putchar(9);
    } while (param_1 != iVar1);
  }
  puts(DAT_000170f0);
  return;
}



/* ===== FUN_000170f4 @ 000170f4 size=108 ===== */

bool FUN_000170f4(tm *param_1,char *param_2,size_t param_3)

{
  int iVar1;
  char *__format;
  
  if (param_1 == (tm *)0x0) {
    strncpy(param_2,"?/?/?",param_3);
    param_2[param_3 - 1] = '\0';
    return false;
  }
  iVar1 = FUN_00016fa8();
  if (iVar1 != 0) {
    __format = "%Y-%m-%d";
  }
  else {
    __format = "%x";
  }
  strftime(param_2,param_3,__format,param_1);
  return iVar1 != 0;
}



/* ===== FUN_00017160 @ 00017160 size=304 ===== */

undefined4
FUN_00017160(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int param_7)

{
  undefined4 uVar1;
  undefined1 auStack_58 [64];
  
  uVar1 = FUN_000170f4(param_1,auStack_58,0x40);
  if (param_7 == 0) {
    printf("%s %s (%s) \t%s \t_%s_\t(%d CPU)\n",param_2,param_3,param_4,auStack_58,param_5,param_6);
    return uVar1;
  }
  FUN_0001708c(0,"{\"sysstat\": {");
  FUN_0001708c(1,"\"hosts\": [");
  FUN_0001708c(2,"{");
  FUN_0001708c(3,"\"nodename\": \"%s\",",param_4);
  FUN_0001708c(3,"\"sysname\": \"%s\",",param_2);
  FUN_0001708c(3,"\"release\": \"%s\",",param_3);
  FUN_0001708c(3,"\"machine\": \"%s\",",param_5);
  FUN_0001708c(3,"\"number-of-cpus\": %d,",param_6);
  FUN_0001708c(3,"\"date\": \"%s\",",auStack_58);
  FUN_0001708c(3,"\"statistics\": [");
  return uVar1;
}



/* ===== FUN_00017290 @ 00017290 size=140 ===== */

int FUN_00017290(void)

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



/* ===== FUN_0001731c @ 0001731c size=140 ===== */

char * FUN_0001731c(char *param_1)

{
  char *__s;
  char *__s1;
  int iVar1;
  char *pcVar2;
  
  __s1 = realpath(param_1,(char *)0x0);
  if (__s1 != (char *)0x0) {
    iVar1 = strncmp(__s1,"/dev/",5);
    __s = DAT_000173a8;
    pcVar2 = __s1;
    if (iVar1 == 0) {
      pcVar2 = __s1 + 5;
    }
    strncpy(DAT_000173a8,pcVar2,0x200);
    DAT_0002bca3 = 0;
    while (pcVar2 = strchr(__s,0x2f), pcVar2 != (char *)0x0) {
      *pcVar2 = '!';
    }
    free(__s1);
    return DAT_000173a8;
  }
  return param_1;
}



/* ===== FUN_000173ac @ 000173ac size=92 ===== */

undefined4
FUN_000173ac(uint param_1,uint param_2,uint param_3,uint param_4,undefined4 param_5,
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
    dVar2 = (double)FUN_000196d8(param_3 - param_1,param_4 - (param_2 + (param_3 < param_1)));
    dVar3 = (double)FUN_000196d8(param_5,param_6);
    return SUB84((dVar2 / dVar3) * DAT_00017408,0);
  }
  return 0;
}



/* ===== FUN_00017410 @ 00017410 size=48 ===== */

undefined8 FUN_00017410(uint param_1,int param_2,uint param_3,int param_4)

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



/* ===== FUN_00017440 @ 00017440 size=80 ===== */

int FUN_00017440(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  
  if (0 < param_2) {
    pbVar5 = (byte *)(param_1 + -1);
    iVar2 = 0;
    do {
      pbVar5 = pbVar5 + 1;
      iVar3 = 8;
      uVar4 = 0x80;
      do {
        uVar1 = *pbVar5 & uVar4;
        uVar4 = (int)uVar4 >> 1;
        if (uVar1 != 0) {
          iVar2 = iVar2 + 1;
        }
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    } while (pbVar5 != (byte *)(param_1 + param_2 + -1));
    return iVar2;
  }
  return 0;
}



/* ===== FUN_000174c8 @ 000174c8 size=104 ===== */

undefined * FUN_000174c8(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = snprintf(&DAT_0002ee88,0x1000,"%s-%s","/dev/disk/by",param_1);
  if ((uVar1 < 0x1000) && (iVar2 = access(&DAT_0002ee88,4), iVar2 == 0)) {
    return &DAT_0002ee88;
  }
  return (undefined *)0x0;
}



/* ===== FUN_00017530 @ 00017530 size=116 ===== */

undefined * FUN_00017530(undefined4 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = FUN_000174c8(&DAT_00031000);
  uVar2 = snprintf(&DAT_0002de88,0x1000,"%s/%s",uVar1,param_1);
  if ((uVar2 < 0x1000) && (iVar3 = access(&DAT_0002de88,0), iVar3 == 0)) {
    return &DAT_0002de88;
  }
  return (undefined *)0x0;
}



/* ===== FUN_000175a4 @ 000175a4 size=356 ===== */

void * FUN_000175a4(void)

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
  
  pcVar1 = (char *)FUN_000174c8(&DAT_00031000);
  if ((pcVar1 == (char *)0x0) ||
     (iVar2 = scandir(pcVar1,local_2c,(__selector *)0x0,alphasort), ppdVar10 = local_2c[0],
     iVar2 < 0)) {
    return (void *)0x0;
  }
  if (iVar2 < 3) {
    if (iVar2 == 0) {
      pvVar9 = (void *)0x0;
      goto LAB_00017614;
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
LAB_00017614:
  free(local_2c[0]);
  return pvVar9;
}



/* ===== FUN_00017708 @ 00017708 size=276 ===== */

undefined1 * FUN_00017708(char *param_1)

{
  int *__ptr;
  char *pcVar1;
  ssize_t sVar2;
  int iVar3;
  void *__ptr_00;
  int *piVar4;
  int *piVar5;
  char acStack_1028 [4100];
  
  DAT_0002ce88 = '\0';
  __ptr = (int *)FUN_000175a4();
  piVar5 = __ptr;
  if (__ptr != (int *)0x0) {
    do {
      do {
        piVar4 = piVar5;
        piVar5 = piVar4 + 1;
        if (*piVar4 == 0) goto LAB_000177c8;
        pcVar1 = (char *)FUN_00017530();
      } while ((pcVar1 == (char *)0x0) ||
              (sVar2 = readlink(pcVar1,acStack_1028,0x1000), 0xffe < sVar2 - 1U));
      acStack_1028[sVar2] = '\0';
      pcVar1 = __xpg_basename(acStack_1028);
    } while ((pcVar1 == (char *)0x0) ||
            ((*pcVar1 == '\0' || (iVar3 = strncmp(pcVar1,param_1,0xfff), iVar3 != 0))));
    strncpy(&DAT_0002ce88,(char *)*piVar4,0xfff);
    DAT_0002de86 = 0;
LAB_000177c8:
    __ptr_00 = (void *)*__ptr;
    piVar5 = __ptr;
    while (__ptr_00 != (void *)0x0) {
      free(__ptr_00);
      piVar5 = piVar5 + 1;
      __ptr_00 = (void *)*piVar5;
    }
    free(__ptr);
    if (DAT_0002ce88 != '\0') {
      return &DAT_0002ce88;
    }
  }
  return (undefined1 *)0x0;
}



/* ===== FUN_0001781c @ 0001781c size=120 ===== */

char * FUN_0001781c(void)

{
  char *pcVar1;
  ssize_t sVar2;
  char acStack_1008 [4100];
  
  pcVar1 = (char *)FUN_00017530();
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



/* ===== FUN_00017894 @ 00017894 size=156 ===== */

char * FUN_00017894(undefined4 param_1,undefined4 param_2)

{
  ssize_t sVar1;
  char *__string;
  size_t sVar2;
  
  snprintf(DAT_00017930,0x100,"%s/%u:%u","/sys/dev/block",param_1,param_2);
  sVar1 = readlink(DAT_00017930,&DAT_0002be88,0x1000);
  if (sVar1 - 1U < 0xfff) {
    (&DAT_0002be88)[sVar1] = 0;
    __string = __xpg_basename(&DAT_0002be88);
    if ((__string != (char *)0x0) && (sVar2 = strnlen(__string,0xfff), sVar2 != 0)) {
      return __string;
    }
  }
  return (char *)0x0;
}



/* ===== FUN_00017b74 @ 00017b74 size=532 ===== */

void FUN_00017b74(void)

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
      DAT_0002b13c = 0;
      DAT_0002b14c = 0;
      DAT_0002b15c = 0;
      DAT_0002b16c = 0;
      DAT_0002b17c = 0;
      DAT_0002b18c = 0;
      DAT_0002b19c = 0;
      DAT_0002b1ac = 0;
      DAT_0002b1bc = 0;
      DAT_0002b1cc = 0;
      return;
    }
    iVar2 = strcmp(pcVar1,"always");
    if (iVar2 == 0) goto LAB_00017bb8;
  }
  iVar2 = isatty(1);
  if (iVar2 == 0) {
    DAT_0002b13c = 0;
    DAT_0002b14c = 0;
    DAT_0002b15c = 0;
    DAT_0002b16c = 0;
    DAT_0002b17c = 0;
    DAT_0002b18c = 0;
    DAT_0002b19c = 0;
    DAT_0002b1ac = 0;
    DAT_0002b1bc = 0;
    DAT_0002b1cc = 0;
    return;
  }
LAB_00017bb8:
  pcVar1 = getenv("S_COLORS_SGR");
  if (pcVar1 == (char *)0x0) {
    return;
  }
  __s = strtok(pcVar1,":");
  pcVar1 = DAT_00017e48;
  if (__s != (char *)0x0) {
    do {
      sVar3 = strlen(__s);
      if ((sVar3 - 3 < 5) && (__s[1] == '=')) {
        __s_00 = __s + 2;
        sVar4 = strspn(__s_00,";0123456789");
        if (sVar4 == sVar3 - 2) {
          switch(*__s) {
          case '+':
            snprintf(DAT_00017e54,0x10,"\x1b[%sm",__s_00);
            break;
          case '-':
            snprintf(pcVar1,0x10,"\x1b[%sm",__s_00);
            break;
          case 'C':
            snprintf(DAT_00017e58,0x10,"\x1b[%sm",__s_00);
            break;
          case 'H':
          case 'X':
            snprintf(DAT_00017e5c,0x10,"\x1b[%sm",__s_00);
            break;
          case 'I':
            snprintf(DAT_00017e60,0x10,"\x1b[%sm",__s_00);
            break;
          case 'M':
          case 'W':
            snprintf(DAT_00017e4c,0x10,"\x1b[%sm",__s_00);
            break;
          case 'N':
            snprintf(DAT_00017e64,0x10,"\x1b[%sm",__s_00);
            break;
          case 'R':
            snprintf(DAT_00017e68,0x10,"\x1b[%sm",__s_00);
            break;
          case 'Z':
            snprintf(DAT_00017e50,0x10,"\x1b[%sm",__s_00);
          }
        }
      }
      __s = strtok((char *)0x0,":");
    } while (__s != (char *)0x0);
    return;
  }
  return;
}



/* ===== FUN_00017e6c @ 00017e6c size=164 ===== */

void FUN_00017e6c(int param_1,int param_2)

{
  double in_d0;
  
  if (param_2 < 4) {
    param_2 = 4;
  }
  if (param_1 == 0) {
    param_1 = 2;
    in_d0 = in_d0 * 0.5;
  }
  for (; DAT_00017f10 <= in_d0; in_d0 = in_d0 * DAT_00017f18) {
    param_1 = param_1 + 1;
  }
  if (param_1 < 8) {
    param_1 = (int)&DAT_0002b138 + param_1;
  }
  else {
    param_1 = 0x2b13f;
  }
  printf(" %*.*f",param_2 + -1,(uint)(DAT_0002b134 != 0),&DAT_0002b134,in_d0);
  printf("%s",&DAT_0002b1cc);
  putchar((uint)*(byte *)(param_1 + 0xa4));
  return;
}



/* ===== FUN_00018088 @ 00018088 size=464 ===== */

void FUN_00018088(int param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double *local_5c;
  
  uVar1 = DAT_00018268;
  dVar4 = DAT_00018258;
  if (0 < param_5) {
    if (-1 < DAT_0002b134) {
      param_5 = DAT_0002b134;
    }
    if (param_5 == 1) {
      dVar4 = DAT_00018260;
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
        if ((param_5 == 0) && ((dVar5 <= 0.5 && (-0.5 <= dVar5)))) goto LAB_00018120;
LAB_000181b0:
        if (param_2 != 0) {
          if (dVar5 <= -10.0) {
            printf("%s",DAT_00018278);
          }
          else {
            if (-5.0 < dVar5) goto LAB_000181d0;
            printf("%s",DAT_00018274);
          }
          if (-1 < param_1) goto LAB_000181e8;
          goto LAB_00018228;
        }
LAB_000181d0:
        printf("%s",DAT_00018270);
        if (param_1 < 0) goto LAB_00018138;
LAB_000181e8:
        iVar2 = iVar2 + 1;
        FUN_00017e6c(SUB84(dVar5,0),param_1,param_4);
        if (param_3 == iVar2) {
          return;
        }
      }
      if ((dVar4 <= dVar5) || (dVar5 <= -dVar4)) goto LAB_000181b0;
LAB_00018120:
      printf("%s",DAT_0001826c);
      if (-1 < param_1) goto LAB_000181e8;
LAB_00018138:
      if (param_2 == 0) {
        printf(" %*.*f",param_4,param_5);
      }
      else {
LAB_00018228:
        printf(" %+*.*f",param_4,param_5);
      }
      iVar2 = iVar2 + 1;
      printf("%s",uVar1);
    } while (param_3 != iVar2);
  }
  return;
}



/* ===== FUN_0001827c @ 0001827c size=504 ===== */

void FUN_0001827c(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  double *pdVar1;
  double *pdVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  
  if ((0 < param_5) && (-1 < DAT_0002b134)) {
    param_5 = DAT_0002b134;
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
  dVar5 = DAT_00018478;
  if (param_5 == 1) {
    dVar5 = DAT_00018480;
  }
  if (0 < param_3) {
    iVar3 = 0;
    do {
      pdVar1 = (double *)((uint)((int)pdVar2 + 7U) & 0xfffffff8);
      pdVar2 = pdVar1 + 1;
      dVar4 = *pdVar1;
      if (param_2 == 1) {
        if (DAT_00018488 <= dVar4) {
LAB_00018418:
          printf("%s",DAT_000184a8);
        }
        else {
          if (dVar4 < DAT_00018490) goto LAB_00018320;
          printf("%s",DAT_000184a0);
        }
      }
      else {
        if (param_2 == 2) {
          if (dVar4 <= 10.0) goto LAB_00018418;
          if (dVar4 <= 25.0) {
            printf("%s",DAT_000184a0);
            goto LAB_00018340;
          }
        }
        else if (param_2 == 3) {
          if ((dVar4 <= 10.0) && (dVar5 <= dVar4)) goto LAB_00018418;
          if ((dVar4 <= 25.0) && (dVar5 <= dVar4)) {
            printf("%s",DAT_000184a0);
            goto LAB_00018340;
          }
        }
LAB_00018320:
        if (param_5 < 1) {
          if ((param_5 == 0) && (dVar4 <= 0.5)) goto LAB_000183e0;
        }
        else if (dVar4 < dVar5) {
LAB_000183e0:
          printf("%s",DAT_000184a4);
          goto LAB_00018340;
        }
        printf("%s",DAT_00018498);
      }
LAB_00018340:
      printf(" %*.*f",param_4,param_5);
      printf("%s",DAT_0001849c);
      if (0 < param_1) {
        printf("%%");
      }
      iVar3 = iVar3 + 1;
    } while (param_3 != iVar3);
  }
  return;
}



/* ===== FUN_000184ac @ 000184ac size=76 ===== */

void FUN_000184ac(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  printf("%s",DAT_000184f8);
  if (param_1 == 0) {
    param_3 = param_4;
  }
  printf(param_2,param_3);
  printf("%s",DAT_000184fc);
  return;
}



/* ===== FUN_000185e0 @ 000185e0 size=116 ===== */

uint FUN_000185e0(char *param_1,int param_2,uint *param_3)

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



/* ===== FUN_00018654 @ 00018654 size=228 ===== */

bool FUN_00018654(char *param_1,int param_2,int *param_3,int *param_4)

{
  char *pcVar1;
  int iVar2;
  char acStack_30 [15];
  undefined1 local_21;
  
  strncpy(acStack_30,param_1,0x10);
  local_21 = 0;
  pcVar1 = strchr(acStack_30,0x2d);
  if (pcVar1 == (char *)0x0) {
    iVar2 = FUN_000185e0(param_1,param_2,param_4);
    if ((iVar2 == 0) && (-1 < *param_4)) {
      *param_3 = *param_4;
      return false;
    }
  }
  else {
    *pcVar1 = '\0';
    iVar2 = FUN_000185e0(acStack_30,param_2,param_3);
    if (((iVar2 == 0) && (-1 < *param_3)) &&
       (iVar2 = FUN_000185e0(pcVar1 + 1,param_2,param_4), iVar2 == 0)) {
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



/* ===== FUN_00018738 @ 00018738 size=272 ===== */

undefined4 FUN_00018738(char *param_1,byte *param_2,int param_3,char *param_4)

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
      iVar1 = FUN_00018654(__s1,param_3,&local_20,&local_1c);
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



/* ===== FUN_00018914 @ 00018914 size=140 ===== */

void FUN_00018914(void)

{
  int *piVar1;
  int *__ptr;
  int *piVar2;
  int *piVar3;
  
  piVar1 = DAT_000189a4;
  piVar2 = DAT_000189a0;
  piVar3 = DAT_000189a0;
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



/* ===== FUN_000189a8 @ 000189a8 size=1608 ===== */

int FUN_000189a8(void)

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
  memset(DAT_00018ff0,0,0x800);
  local_1e4 = 0;
  __ptr = (char *)0x0;
  __src = (char *)0x0;
LAB_00018a0c:
  do {
    while( true ) {
      do {
        pcVar3 = fgets(local_128,0xff,__stream);
        if (pcVar3 == (char *)0x0) {
          fclose(__stream);
          free(__src);
          free(__ptr);
          DAT_00030e9c = 1;
          return local_1e4;
        }
      } while (local_128[0] == '\n' || local_128[0] == '#');
      if ((__src == (char *)0x0) && (__src = malloc(0xf0), __src == (char *)0x0)) {
        perror("malloc");
        FUN_00018914();
        fclose(__stream);
        if (__ptr == (char *)0x0) {
          return 0;
        }
        goto LAB_00018e5c;
      }
      if ((__ptr == (char *)0x0) && (__ptr = malloc(0x14), __ptr == (char *)0x0)) {
        perror("malloc");
        FUN_00018914();
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
            if ((&DAT_0002fe9c)[local_1dc] == 0) {
              fprintf(stderr,
                      "%s: Indirect record \'%u:%u:%u:...\' references not yet seen major %u\n",
                      acStack_168,local_1e0,local_1dc,*(undefined4 *)(__ptr + 4),local_1e0);
            }
            else {
              if (iVar4 == 3) {
                *(int *)(__ptr + 0xc) = *(int *)((&DAT_0002fe9c)[local_1dc] + 0x10) + 0x84;
              }
              else {
                puVar12 = *(undefined4 **)(__ptr + 0xc);
                if (puVar12 == (undefined4 *)0x0) {
                  puVar12 = malloc(0x40);
                  *(undefined4 **)(__ptr + 0xc) = puVar12;
                  if (puVar12 == (undefined4 *)0x0) {
                    perror("malloc");
                    FUN_00018914();
                    fclose(__stream);
                    free(__src);
LAB_00018e5c:
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
              (&DAT_0002fe9c)[local_1e0] = __ptr;
              iVar4 = *(int *)(&DAT_0003069c + iVar8);
              uVar5 = *(undefined4 *)(*(int *)((int)&DAT_0002fe9c + iVar8) + 0x10);
              __ptr[0] = '\0';
              __ptr[1] = '\0';
              __ptr[2] = '\0';
              __ptr[3] = '\0';
              *(int *)(&DAT_0003069c + iVar8) = iVar4 + 1;
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
          if ((&DAT_0002fe9c)[local_1e0] == 0) {
            fprintf(stderr,
                    "%s: type \'x\' record for major #%u must follow the base record - ignored\n",
                    acStack_168);
          }
          else {
            iVar4 = *(int *)((&DAT_0002fe9c)[local_1e0] + 0x10);
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
          cVar2 = s__s__s__s_s_0001a24c[10];
          uVar1 = s__s__s__s_s_0001a24c._8_2_;
          if (local_1c8 == 'a') {
            *(undefined1 **)(__src + 0xc4) = &LAB_00018848;
            *(undefined2 *)(__src + 0x53) = uVar1;
            __src[0x55] = cVar2;
          }
          else {
            if (local_1c8 != 'd') {
              if (local_1c8 != '%') goto LAB_00018b7c;
              strncpy(__src + 0x53,acStack_1c7,0xf);
            }
            pcVar3 = __src + 0x53;
            *(undefined1 **)(__src + 0xc4) = &LAB_000188b0;
            sVar6 = strlen(pcVar3);
            cVar2 = s__s__s__s_s_0001a24c[10];
            *(undefined2 *)(pcVar3 + sVar6) = s__s__s__s_s_0001a24c._8_2_;
            pcVar3[sVar6 + 2] = cVar2;
          }
LAB_00018b7c:
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
          (&DAT_0002fe9c)[local_1e0] = __ptr;
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
      goto LAB_00018a0c;
    }
    fprintf(stderr,"%s: Malformed %u field record: %s\n",acStack_168,iVar4,local_128);
  } while( true );
}



/* ===== FUN_000192c4 @ 000192c4 size=168 ===== */

ulonglong FUN_000192c4(uint param_1,uint param_2)

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



/* ===== FUN_0001936c @ 0001936c size=48 ===== */

void FUN_0001936c(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_000192c4();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_000196d8 @ 000196d8 size=372 ===== */

ulonglong FUN_000196d8(uint param_1,uint param_2)

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
LAB_000194b0:
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
  if ((param_2 & 0x100000) != 0) goto LAB_000194b0;
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
      goto LAB_00019530;
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
LAB_00019530:
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



/* ===== _DT_FINI @ 000198e0 size=16 ===== */

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



/* ===== <EXTERNAL>::realloc @ 000320a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 000320ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::closedir @ 000320b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int closedir(DIR *__dirp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 000320b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 000320b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 000320bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::readlink @ 000320c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t readlink(char *__path,char *__buf,size_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 000320c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::raise @ 000320c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getenv @ 000320cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setlocale @ 000320d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * setlocale(int __category,char *__locale)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strspn @ 000320d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strspn(char *__s,char *__accept)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gnu_dev_major @ 000320d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint gnu_dev_major(ulonglong __dev)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gnu_dev_minor @ 000320dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint gnu_dev_minor(ulonglong __dev)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strstr @ 000320e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::putchar @ 000320e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 000320e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::readdir @ 000320ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent * readdir(DIR *__dirp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strchr @ 000320f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setbuf @ 000320f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void setbuf(FILE *__stream,char *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__xpg_basename @ 000320f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * __xpg_basename(char *__path)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 000320fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::stat @ 00032100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat(char *__file,stat *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fgets @ 00032104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strftime @ 00032108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strftime(char *__s,size_t __maxsize,char *__format,tm *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 0003210c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vsnprintf @ 00032110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 00032114 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


