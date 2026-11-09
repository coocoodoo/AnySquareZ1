// libdrm.so.2.4.0 — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00012f70 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::clock_gettime @ 00012fa0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_clock_gettime_0002b010)(__clock_id);
  return iVar1;
}



/* ===== <EXTERNAL>::ioctl @ 00012fac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_0002b014)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::printf @ 00012fb8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_0002b018)(__format);
  return iVar1;
}



/* ===== drmGetVersion @ 00012fc4 size=12 ===== */

void drmGetVersion(void)

{
  (*(code *)PTR_drmGetVersion_0002b01c)();
  return;
}



/* ===== <EXTERNAL>::strerror @ 00012fd0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_0002b020)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::fpathconf @ 00012fdc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long fpathconf(int __fd,int __name)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_fpathconf_0002b024)(__fd);
  return lVar1;
}



/* ===== <EXTERNAL>::strndup @ 00012fe8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strndup(char *__string,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strndup_0002b028)(__string);
  return pcVar1;
}



/* ===== <EXTERNAL>::stat64 @ 00012ff4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat64(char *__file,stat64 *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_stat64_0002b02c)(__file);
  return iVar1;
}



/* ===== drmModeAtomicDuplicate @ 00013000 size=12 ===== */

void drmModeAtomicDuplicate(void)

{
  (*(code *)PTR_drmModeAtomicDuplicate_0002b030)();
  return;
}



/* ===== <EXTERNAL>::memmove @ 0001300c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_0002b034)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::snprintf @ 00013018 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_0002b038)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::munmap @ 00013024 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int munmap(void *__addr,size_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_munmap_0002b03c)(__addr);
  return iVar1;
}



/* ===== drmFreeDevices @ 00013030 size=12 ===== */

void drmFreeDevices(void)

{
  (*(code *)PTR_drmFreeDevices_0002b040)();
  return;
}



/* ===== <EXTERNAL>::getenv @ 0001303c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_getenv_0002b044)(__name);
  return pcVar1;
}



/* ===== <EXTERNAL>::usleep @ 00013048 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_usleep_0002b048)(__useconds);
  return iVar1;
}



/* ===== <EXTERNAL>::getpagesize @ 00013054 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getpagesize(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getpagesize_0002b04c)();
  return iVar1;
}



/* ===== <EXTERNAL>::qsort @ 00013060 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void qsort(void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
  (*(code *)PTR_qsort_0002b050)(__base);
  return;
}



/* ===== <EXTERNAL>::fscanf @ 0001306c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fscanf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fscanf_0002b054)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::gnu_dev_major @ 00013078 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint gnu_dev_major(ulonglong __dev)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_gnu_dev_major_0002b058)((int)__dev,(int)(__dev >> 0x20));
  return uVar1;
}



/* ===== <EXTERNAL>::memcpy @ 00013084 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_0002b05c)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::readlink @ 00013090 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t readlink(char *__path,char *__buf,size_t __len)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_readlink_0002b060)(__path);
  return sVar1;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 0001309c size=12 ===== */

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_0002b064)();
  return;
}



/* ===== <EXTERNAL>::malloc @ 000130a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0002b068)(__size);
  return pvVar1;
}



/* ===== drmHashDelete @ 000130b4 size=12 ===== */

void drmHashDelete(void)

{
  (*(code *)PTR_drmHashDelete_0002b06c)();
  return;
}



/* ===== drmModeAtomicFree @ 000130c0 size=12 ===== */

void drmModeAtomicFree(void)

{
  (*(code *)PTR_drmModeAtomicFree_0002b070)();
  return;
}



/* ===== drmGetBusid @ 000130cc size=12 ===== */

void drmGetBusid(void)

{
  (*(code *)PTR_drmGetBusid_0002b074)();
  return;
}



/* ===== <EXTERNAL>::gnu_dev_minor @ 000130d8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint gnu_dev_minor(ulonglong __dev)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_gnu_dev_minor_0002b078)((int)__dev,(int)(__dev >> 0x20));
  return uVar1;
}



/* ===== <EXTERNAL>::strncasecmp @ 000130e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncasecmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncasecmp_0002b07c)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::fstat64 @ 000130f0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstat64(int __fd,stat64 *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fstat64_0002b080)(__fd);
  return iVar1;
}



/* ===== drmFreeBusid @ 000130fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void drmFreeBusid(void *__ptr)

{
  (*(code *)PTR_drmFreeBusid_0002b084)(__ptr);
  return;
}



/* ===== drmMsg @ 00013108 size=12 ===== */

void drmMsg(void)

{
  (*(code *)PTR_drmMsg_0002b088)();
  return;
}



/* ===== <EXTERNAL>::strtol @ 00013114 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_strtol_0002b08c)(__nptr);
  return lVar1;
}



/* ===== drmIoctl @ 00013120 size=12 ===== */

void drmIoctl(void)

{
  (*(code *)PTR_drmIoctl_0002b090)();
  return;
}



/* ===== <EXTERNAL>::strrchr @ 00013138 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strrchr_0002b098)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::calloc @ 00013144 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_0002b09c)(__nmemb);
  return pvVar1;
}



/* ===== drmHashLookup @ 00013150 size=12 ===== */

void drmHashLookup(void)

{
  (*(code *)PTR_drmHashLookup_0002b0a0)();
  return;
}



/* ===== <EXTERNAL>::fprintf @ 0001315c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_0002b0a4)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00013174 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_0002b0ac)();
  return;
}



/* ===== drmAvailable @ 00013180 size=12 ===== */

void drmAvailable(void)

{
  (*(code *)PTR_drmAvailable_0002b0b0)();
  return;
}



/* ===== drmRandomCreate @ 0001318c size=12 ===== */

void drmRandomCreate(void)

{
  (*(code *)PTR_drmRandomCreate_0002b0b4)();
  return;
}



/* ===== drmModeAddFB2WithModifiers @ 00013198 size=12 ===== */

void drmModeAddFB2WithModifiers(void)

{
  (*(code *)PTR_drmModeAddFB2WithModifiers_0002b0b8)();
  return;
}



/* ===== drmHashCreate @ 000131a4 size=12 ===== */

void drmHashCreate(void)

{
  (*(code *)PTR_drmHashCreate_0002b0bc)();
  return;
}



/* ===== drmFree @ 000131b0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void drmFree(void *__ptr)

{
  (*(code *)PTR_drmFree_0002b0c0)(__ptr);
  return;
}



/* ===== <EXTERNAL>::strstr @ 000131bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strstr_0002b0c4)(__haystack);
  return pcVar1;
}



/* ===== <EXTERNAL>::read @ 000131c8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_0002b0c8)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::dirfd @ 000131d4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int dirfd(DIR *__dirp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_dirfd_0002b0cc)(__dirp);
  return iVar1;
}



/* ===== <EXTERNAL>::strncmp @ 000131e0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_0002b0d0)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::strncpy @ 000131ec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_0002b0d4)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::strcasecmp @ 000131f8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcasecmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcasecmp_0002b0d8)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::realloc @ 00013204 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_realloc_0002b0dc)(__ptr);
  return pvVar1;
}



/* ===== drmHashInsert @ 00013210 size=12 ===== */

void drmHashInsert(void)

{
  (*(code *)PTR_drmHashInsert_0002b0e0)();
  return;
}



/* ===== <EXTERNAL>::readdir64 @ 0001321c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent64 * readdir64(DIR *__dirp)

{
  dirent64 *pdVar1;
  
  pdVar1 = (dirent64 *)(*(code *)PTR_readdir64_0002b0e4)(__dirp);
  return pdVar1;
}



/* ===== drmHashDestroy @ 00013228 size=12 ===== */

void drmHashDestroy(void)

{
  (*(code *)PTR_drmHashDestroy_0002b0e8)();
  return;
}



/* ===== <EXTERNAL>::memcmp @ 00013234 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_0002b0ec)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::sscanf @ 00013240 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sscanf_0002b0f0)(__s);
  return iVar1;
}



/* ===== drmGetEntry @ 0001324c size=12 ===== */

void drmGetEntry(void)

{
  (*(code *)PTR_drmGetEntry_0002b0f4)();
  return;
}



/* ===== <EXTERNAL>::strdup @ 00013258 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strdup(char *__s)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strdup_0002b0f8)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::memset @ 00013264 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0002b0fc)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::fclose @ 00013270 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_0002b100)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::open64 @ 0001327c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open64_0002b104)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::opendir @ 00013288 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * opendir(char *__name)

{
  DIR *pDVar1;
  
  pDVar1 = (DIR *)(*(code *)PTR_opendir_0002b108)(__name);
  return pDVar1;
}



/* ===== drmFreeVersion @ 00013294 size=12 ===== */

void drmFreeVersion(void)

{
  (*(code *)PTR_drmFreeVersion_0002b10c)();
  return;
}



/* ===== drmDevicesEqual @ 000132a0 size=12 ===== */

void drmDevicesEqual(void)

{
  (*(code *)PTR_drmDevicesEqual_0002b110)();
  return;
}



/* ===== <EXTERNAL>::strcmp @ 000132ac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_0002b114)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::sprintf @ 000132b8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_0002b118)(__s);
  return iVar1;
}



/* ===== drmRandom @ 000132c4 size=12 ===== */

void drmRandom(void)

{
  (*(code *)PTR_drmRandom_0002b11c)();
  return;
}



/* ===== drmClose @ 000132d0 size=12 ===== */

void drmClose(void)

{
  (*(code *)PTR_drmClose_0002b120)();
  return;
}



/* ===== <EXTERNAL>::mmap64 @ 000132dc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * mmap64(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off64_t __offset)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_mmap64_0002b124)(__addr);
  return pvVar1;
}



/* ===== <EXTERNAL>::readdir64_r @ 000132e8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int readdir64_r(DIR *__dirp,dirent64 *__entry,dirent64 **__result)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_readdir64_r_0002b128)(__dirp);
  return iVar1;
}



/* ===== drmRandomDestroy @ 000132f4 size=12 ===== */

void drmRandomDestroy(void)

{
  (*(code *)PTR_drmRandomDestroy_0002b12c)();
  return;
}



/* ===== drmMalloc @ 00013300 size=12 ===== */

void drmMalloc(void)

{
  (*(code *)PTR_drmMalloc_0002b130)();
  return;
}



/* ===== <EXTERNAL>::access @ 0001330c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_access_0002b134)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 00013324 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_0002b13c)();
  return piVar1;
}



/* ===== <EXTERNAL>::log2 @ 00013330 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double log2(double __x)

{
  undefined4 uVar1;
  undefined4 extraout_s1;
  
  uVar1 = (*(code *)PTR_log2_0002b140)(SUB84(__x,0));
  return (double)CONCAT44(extraout_s1,uVar1);
}



/* ===== drmOpenWithType @ 0001333c size=12 ===== */

void drmOpenWithType(void)

{
  (*(code *)PTR_drmOpenWithType_0002b144)();
  return;
}



/* ===== <EXTERNAL>::getline @ 00013354 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__ssize_t getline(char **__lineptr,size_t *__n,FILE *__stream)

{
  __ssize_t _Var1;
  
  _Var1 = (*(code *)PTR_getline_0002b14c)(__lineptr);
  return _Var1;
}



/* ===== drmFreeDevice @ 00013360 size=12 ===== */

void drmFreeDevice(void)

{
  (*(code *)PTR_drmFreeDevice_0002b150)();
  return;
}



/* ===== <EXTERNAL>::strlen @ 0001336c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_0002b154)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::closedir @ 00013378 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int closedir(DIR *__dirp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_closedir_0002b158)(__dirp);
  return iVar1;
}



/* ===== <EXTERNAL>::vasprintf @ 00013384 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vasprintf(char **__ptr,char *__f,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vasprintf_0002b15c)(__ptr);
  return iVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00013390 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_0002b160)();
  return;
}



/* ===== <EXTERNAL>::close @ 0001339c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_0002b164)(__fd);
  return iVar1;
}



/* ===== drmSetInterfaceVersion @ 000133a8 size=12 ===== */

void drmSetInterfaceVersion(void)

{
  (*(code *)PTR_drmSetInterfaceVersion_0002b168)();
  return;
}



/* ===== <EXTERNAL>::vfprintf @ 000133b4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vfprintf_0002b16c)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 000133c0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0002b170)(__ptr);
  return;
}



/* ===== <EXTERNAL>::fopen64 @ 000133cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen64_0002b174)(__filename);
  return pFVar1;
}



/* ===== entry @ 000133d8 size=72 ===== */

void processEntry entry(void)

{
  code *pcVar1;
  
  if (DAT_00013424 + 0x133f0 == DAT_00013420 + 0x133e8) {
    return;
  }
  pcVar1 = *(code **)(DAT_00013428 + 0x133f8 + DAT_0001342c);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== _FINI_0 @ 00013494 size=112 ===== */

void _FINI_0(void)

{
  int iVar1;
  
  iVar1 = DAT_00013508 + 0x134b0;
  if (*(char *)(DAT_00013504 + 0x134a4) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + DAT_0001350c) != 0) {
    __cxa_finalize(*(undefined4 *)(DAT_00013510 + 0x134d0));
  }
  entry();
  if (*(int *)(iVar1 + DAT_00013514) != 0) {
    __deregister_frame_info(DAT_00013518 + 0x134f0);
  }
  *(undefined1 *)(DAT_0001351c + 0x13500) = 1;
  return;
}



/* ===== _INIT_0 @ 00013520 size=140 ===== */

void _INIT_0(void)

{
  code *pcVar1;
  
  if (*(int *)(DAT_00013558 + 0x13530 + DAT_0001355c) != 0) {
    __register_frame_info(DAT_00013564 + 0x13550,DAT_00013560 + 0x1354c);
  }
  if (((DAT_00013488 + 0x13448) - (DAT_00013484 + 0x13440) >> 2) / 2 == 0) {
    return;
  }
  pcVar1 = *(code **)(DAT_0001348c + 0x13450 + DAT_00013490);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== FUN_000136ec @ 000136ec size=144 ===== */

int * FUN_000136ec(uint param_1,undefined4 *param_2,int param_3,int param_4,undefined4 *param_5)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  piVar1 = calloc(1,param_4 + 0x68 + param_3);
  if (piVar1 != (int *)0x0) {
    piVar1[1] = 1 << (param_1 & 0xff);
    *piVar1 = (int)(piVar1 + 5);
    piVar1[5] = (int)(piVar1 + 8);
    piVar1[6] = (int)(piVar1 + 0xe);
    piVar1[7] = (int)(piVar1 + 0x14);
    puVar4 = param_2 + 6;
    puVar5 = (undefined4 *)(piVar1 + 5)[param_1];
    do {
      uVar2 = *param_2;
      uVar3 = param_2[1];
      param_2 = param_2 + 2;
      *puVar5 = uVar2;
      puVar5[1] = uVar3;
      puVar5 = puVar5 + 2;
    } while (param_2 != puVar4);
    *param_5 = piVar1 + 0x1a;
  }
  return piVar1;
}



/* ===== FUN_0001377c @ 0001377c size=304 ===== */

char * FUN_0001377c(undefined4 param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  size_t __n;
  FILE *__stream;
  int iVar1;
  __ssize_t _Var2;
  char *pcVar3;
  char *local_1044;
  char *local_1040;
  size_t local_103c;
  undefined4 *local_1038;
  char acStack_1034 [4104];
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_1040 = (char *)0x0;
  local_103c = 0;
  local_1038 = &uStack_8;
  uStack_8 = param_3;
  uStack_4 = param_4;
  __n = vasprintf(&local_1044,param_2,local_1038);
  snprintf(acStack_1034,0x1001,(char *)(DAT_000138ac + 0x137d4),param_1);
  __stream = fopen64(acStack_1034,(char *)(DAT_000138b0 + 0x137ec));
  if (__stream == (FILE *)0x0) {
    free(local_1044);
    pcVar3 = (char *)0x0;
  }
  else {
    do {
      _Var2 = getline(&local_1040,&local_103c,__stream);
      pcVar3 = local_1040;
      if (_Var2 < 0) {
        pcVar3 = (char *)0x0;
        goto LAB_0001386c;
      }
      iVar1 = strncmp(local_1040,local_1044,__n);
    } while ((iVar1 != 0) || (pcVar3[__n] != '='));
    iVar1 = _Var2 + -1;
    if (pcVar3[_Var2 + -1] != '\n') {
      iVar1 = _Var2;
    }
    pcVar3 = strndup(pcVar3 + __n + 1,(size_t)(pcVar3 + (iVar1 - (int)(pcVar3 + __n + 1))));
LAB_0001386c:
    free(local_1040);
    fclose(__stream);
    free(local_1044);
  }
  return pcVar3;
}



/* ===== FUN_000138b4 @ 000138b4 size=104 ===== */

undefined4 FUN_000138b4(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = strncmp(param_1,(char *)(DAT_0001391c + 0x138cc),4);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = strncmp(param_1,(char *)(DAT_00013920 + 0x138e8),8);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = strncmp(param_1,(char *)(DAT_00013924 + 0x13904),7);
  if (iVar1 == 0) {
    uVar2 = 2;
  }
  else {
    uVar2 = 0xffffffea;
  }
  return uVar2;
}



/* ===== FUN_00013928 @ 00013928 size=248 ===== */

undefined4 FUN_00013928(undefined4 param_1,int *param_2)

{
  char *__s;
  void *pvVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint local_1020;
  char acStack_101c [4100];
  
  snprintf(acStack_101c,0x1001,(char *)(DAT_00013a20 + 0x13950),0xe2,param_1);
  __s = (char *)FUN_0001377c(acStack_101c,DAT_00013a24 + 0x1396c);
  if (__s != (char *)0x0) {
    sscanf(__s,(char *)(DAT_00013a28 + 0x13984),&local_1020);
    free(__s);
    pvVar1 = calloc(local_1020 + 1,4);
    *param_2 = (int)pvVar1;
    if (pvVar1 == (void *)0x0) {
      return 0xfffffff4;
    }
    uVar3 = 0;
    iVar4 = DAT_00013a2c + 0x139bc;
    while( true ) {
      if (local_1020 <= uVar3) {
        return 0;
      }
      iVar2 = FUN_0001377c(acStack_101c,iVar4,uVar3);
      if (iVar2 == 0) break;
      *(int *)(*param_2 + uVar3 * 4) = iVar2;
      uVar3 = uVar3 + 1;
    }
    while( true ) {
      uVar3 = uVar3 - 1;
      if (uVar3 == 0xffffffff) break;
      free(*(void **)(*param_2 + uVar3 * 4));
    }
    free((void *)*param_2);
  }
  return 0xfffffffe;
}



/* ===== FUN_00013a30 @ 00013a30 size=124 ===== */

undefined4 FUN_00013a30(undefined4 param_1,char *param_2)

{
  char *__src;
  undefined4 uVar1;
  char acStack_1014 [4100];
  
  snprintf(acStack_1014,0x1001,(char *)(DAT_00013aac + 0x13a58),0xe2,param_1);
  __src = (char *)FUN_0001377c(acStack_1014,DAT_00013ab0 + 0x13a70);
  if (__src == (char *)0x0) {
    uVar1 = 0xfffffffe;
  }
  else {
    strncpy(param_2,__src,0x200);
    param_2[0x1ff] = '\0';
    free(__src);
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_00013ab4 @ 00013ab4 size=160 ===== */

int FUN_00013ab4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                char param_5)

{
  void *__ptr;
  int iVar1;
  int local_1c [2];
  
  __ptr = (void *)FUN_000136ec(param_3,param_2,0x200,4,local_1c);
  if (__ptr == (void *)0x0) {
    return -0xc;
  }
  *(undefined4 *)((int)__ptr + 8) = 3;
  *(int *)((int)__ptr + 0xc) = local_1c[0];
  iVar1 = FUN_00013a30(param_4);
  if (iVar1 < 0) {
LAB_00013b48:
    free(__ptr);
  }
  else {
    if (param_5 != '\0') {
      local_1c[0] = local_1c[0] + 0x200;
      *(int *)((int)__ptr + 0x10) = local_1c[0];
      iVar1 = FUN_00013928(param_4);
      if (iVar1 < 0) goto LAB_00013b48;
    }
    *param_1 = __ptr;
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_00013b54 @ 00013b54 size=124 ===== */

undefined4 FUN_00013b54(undefined4 param_1,char *param_2)

{
  char *__src;
  undefined4 uVar1;
  char acStack_1014 [4100];
  
  snprintf(acStack_1014,0x1001,(char *)(DAT_00013bd0 + 0x13b7c),0xe2,param_1);
  __src = (char *)FUN_0001377c(acStack_1014,DAT_00013bd4 + 0x13b94);
  if (__src == (char *)0x0) {
    uVar1 = 0xfffffffe;
  }
  else {
    strncpy(param_2,__src,0x200);
    param_2[0x1ff] = '\0';
    free(__src);
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_00013bd8 @ 00013bd8 size=160 ===== */

int FUN_00013bd8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                char param_5)

{
  void *__ptr;
  int iVar1;
  int local_1c [2];
  
  __ptr = (void *)FUN_000136ec(param_3,param_2,0x200,4,local_1c);
  if (__ptr == (void *)0x0) {
    return -0xc;
  }
  *(undefined4 *)((int)__ptr + 8) = 2;
  *(int *)((int)__ptr + 0xc) = local_1c[0];
  iVar1 = FUN_00013b54(param_4);
  if (iVar1 < 0) {
LAB_00013c6c:
    free(__ptr);
  }
  else {
    if (param_5 != '\0') {
      local_1c[0] = local_1c[0] + 0x200;
      *(int *)((int)__ptr + 0x10) = local_1c[0];
      iVar1 = FUN_00013928(param_4);
      if (iVar1 < 0) goto LAB_00013c6c;
    }
    *param_1 = __ptr;
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_00013c78 @ 00013c78 size=168 ===== */

int FUN_00013c78(undefined4 param_1,undefined2 *param_2)

{
  char *__s;
  int iVar1;
  int *piVar2;
  undefined2 local_1024 [2];
  undefined2 local_1020 [2];
  char acStack_101c [4104];
  
  snprintf(acStack_101c,0x1001,(char *)(DAT_00013d20 + 0x13ca0),0xe2,param_1);
  __s = (char *)FUN_0001377c(acStack_101c,DAT_00013d24 + 0x13cbc);
  if (__s == (char *)0x0) {
    iVar1 = -2;
  }
  else {
    iVar1 = sscanf(__s,(char *)(DAT_00013d28 + 0x13cdc),local_1024,local_1020);
    free(__s);
    if (iVar1 < 1) {
      piVar2 = __errno_location();
      iVar1 = -*piVar2;
    }
    else {
      iVar1 = 0;
      *param_2 = local_1024[0];
      param_2[1] = local_1020[0];
    }
  }
  return iVar1;
}



/* ===== FUN_00013d2c @ 00013d2c size=228 ===== */

int FUN_00013d2c(undefined4 param_1,undefined1 *param_2)

{
  char *pcVar1;
  int iVar2;
  int *piVar3;
  char *__format;
  undefined1 local_102c [4];
  undefined1 local_1028 [4];
  char acStack_1024 [4104];
  
  snprintf(acStack_1024,0x1001,(char *)(DAT_00013e10 + 0x13d54),0xe2,param_1);
  pcVar1 = (char *)FUN_0001377c(acStack_1024,DAT_00013e14 + 0x13d70);
  if (pcVar1 == (char *)0x0) {
LAB_00013d78:
    iVar2 = -2;
  }
  else {
    __format = (char *)(DAT_00013e18 + 0x13d98);
    iVar2 = sscanf(pcVar1,__format,local_102c);
    free(pcVar1);
    if (0 < iVar2) {
      pcVar1 = (char *)FUN_0001377c(acStack_1024,DAT_00013e1c + 0x13dd0);
      if (pcVar1 == (char *)0x0) goto LAB_00013d78;
      iVar2 = sscanf(pcVar1,__format,local_1028);
      free(pcVar1);
      if (0 < iVar2) {
        *param_2 = local_102c[0];
        param_2[1] = local_1028[0];
        return 0;
      }
    }
    piVar3 = __errno_location();
    iVar2 = -*piVar3;
  }
  return iVar2;
}



/* ===== FUN_00013e20 @ 00013e20 size=160 ===== */

int FUN_00013e20(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                char param_5)

{
  void *__ptr;
  int iVar1;
  int local_1c [2];
  
  __ptr = (void *)FUN_000136ec(param_3,param_2,2,4,local_1c);
  if (__ptr == (void *)0x0) {
    return -0xc;
  }
  *(undefined4 *)((int)__ptr + 8) = 1;
  *(int *)((int)__ptr + 0xc) = local_1c[0];
  iVar1 = FUN_00013d2c(param_4);
  if (iVar1 < 0) {
LAB_00013eb4:
    free(__ptr);
  }
  else {
    if (param_5 != '\0') {
      local_1c[0] = local_1c[0] + 2;
      *(int *)((int)__ptr + 0x10) = local_1c[0];
      iVar1 = FUN_00013c78(param_4);
      if (iVar1 < 0) goto LAB_00013eb4;
    }
    *param_1 = __ptr;
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_00013ec0 @ 00013ec0 size=208 ===== */

int FUN_00013ec0(undefined4 param_1,undefined2 *param_2)

{
  int __fd;
  int *piVar1;
  ssize_t sVar2;
  undefined2 local_105c;
  undefined2 local_105a;
  undefined1 local_1054;
  undefined1 local_1030;
  undefined1 local_102f;
  undefined2 local_102e;
  char acStack_101c [4104];
  
  snprintf(acStack_101c,0x1000,(char *)(DAT_00013f90 + 0x13ee8),0xe2,param_1);
  __fd = open64(acStack_101c,0);
  if (-1 < __fd) {
    sVar2 = read(__fd,&local_105c,0x40);
    close(__fd);
    if (-1 < sVar2) {
      *param_2 = local_105c;
      param_2[1] = local_105a;
      *(undefined1 *)(param_2 + 4) = local_1054;
      param_2[2] = CONCAT11(local_102f,local_1030);
      param_2[3] = local_102e;
      return 0;
    }
  }
  piVar1 = __errno_location();
  return -*piVar1;
}



/* ===== FUN_00013f94 @ 00013f94 size=248 ===== */

int FUN_00013f94(undefined4 param_1,undefined2 *param_2,int param_3)

{
  FILE *__stream;
  int *piVar1;
  int iVar2;
  int iVar3;
  char *__format;
  undefined1 local_1040 [20];
  char acStack_102c [4104];
  
  __format = (char *)(DAT_0001408c + 0x13fb4);
  iVar3 = param_3;
  while( true ) {
    snprintf(acStack_102c,0x1000,__format,0xe2,param_1,
             *(undefined4 *)(DAT_00014090 + 0x13fd8 + iVar3 * 4));
    __stream = fopen64(acStack_102c,(char *)(DAT_00014094 + 0x13ff8));
    if (__stream == (FILE *)0x0) break;
    iVar2 = fscanf(__stream,(char *)(DAT_00014098 + 0x1402c),local_1040 + iVar3 * 4);
    fclose(__stream);
    if (iVar2 != 1) break;
    iVar3 = iVar3 + 1;
    if (iVar3 == 5) {
      if (param_3 != 0) {
        local_1040[0] = 0xff;
      }
      *(undefined1 *)(param_2 + 4) = local_1040[0];
      *param_2 = (short)local_1040._4_4_;
      param_2[1] = (short)local_1040._8_4_;
      param_2[2] = (short)local_1040._12_4_;
      param_2[3] = (short)local_1040._16_4_;
      return 0;
    }
  }
  piVar1 = __errno_location();
  return -*piVar1;
}



/* ===== FUN_0001409c @ 0001409c size=188 ===== */

void FUN_0001409c(undefined4 param_1,undefined2 *param_2)

{
  char *__s;
  int iVar1;
  undefined2 local_102c [2];
  undefined1 local_1028 [4];
  undefined1 local_1024 [4];
  undefined1 local_1020 [4];
  char acStack_101c [4104];
  
  snprintf(acStack_101c,0x1001,(char *)(DAT_00014158 + 0x140c4),0xe2,param_1);
  __s = (char *)FUN_0001377c(acStack_101c,DAT_0001415c + 0x140dc);
  if (__s != (char *)0x0) {
    iVar1 = sscanf(__s,(char *)(DAT_00014160 + 0x14110),local_102c,local_1028,local_1024,local_1020)
    ;
    free(__s);
    if (iVar1 == 4) {
      *param_2 = local_102c[0];
      *(undefined1 *)(param_2 + 1) = local_1028[0];
      *(undefined1 *)((int)param_2 + 3) = local_1024[0];
      *(undefined1 *)(param_2 + 2) = local_1020[0];
    }
  }
  return;
}



/* ===== FUN_00014164 @ 00014164 size=228 ===== */

int FUN_00014164(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,char param_5,
                uint param_6)

{
  void *__ptr;
  int iVar1;
  int iVar2;
  int iVar3;
  int local_1c;
  
  local_1c = param_4;
  __ptr = (void *)FUN_000136ec(param_3,param_2,6,10,&local_1c,param_2,param_3);
  if (__ptr == (void *)0x0) {
    return -0xc;
  }
  *(undefined4 *)((int)__ptr + 8) = 0;
  *(int *)((int)__ptr + 0xc) = local_1c;
  iVar1 = FUN_0001409c(param_4);
  iVar3 = iVar1;
  if (iVar1 == 0) {
    if (param_5 != '\0') {
      iVar3 = local_1c + 6;
      *(int *)((int)__ptr + 0x10) = iVar3;
      local_1c = iVar3;
      if ((param_6 & 1) == 0) {
        iVar3 = FUN_00013f94(param_4,iVar3,1);
      }
      else {
        iVar2 = FUN_00013f94(param_4,iVar3,0);
        if (iVar2 == 0) goto LAB_000141c0;
        iVar3 = FUN_00013ec0(param_4,iVar3);
      }
      if (iVar3 != 0) goto LAB_00014208;
    }
LAB_000141c0:
    *param_1 = __ptr;
    iVar3 = iVar1;
  }
  else {
LAB_00014208:
    free(__ptr);
  }
  return iVar3;
}



/* ===== FUN_00014248 @ 00014248 size=276 ===== */

int FUN_00014248(undefined4 param_1)

{
  ssize_t sVar1;
  int *piVar2;
  char *__s1;
  int iVar3;
  int iVar4;
  char acStack_2018 [4100];
  char local_1014 [4104];
  
  local_1014[0] = '\0';
  local_1014[1] = '\0';
  local_1014[2] = '\0';
  local_1014[3] = '\0';
  memset(local_1014 + 4,0,0xffd);
  snprintf(acStack_2018,0x1000,(char *)(DAT_0001435c + 0x14290),0xe2,param_1);
  sVar1 = readlink(acStack_2018,local_1014,0x1000);
  if (sVar1 < 0) {
    piVar2 = __errno_location();
    iVar3 = -*piVar2;
  }
  else {
    __s1 = strrchr(local_1014,0x2f);
    if (__s1 == (char *)0x0) {
      iVar3 = -0x16;
    }
    else {
      iVar4 = strncmp(__s1,(char *)(DAT_00014360 + 0x142f0),4);
      iVar3 = 0;
      if (iVar4 != 0) {
        iVar3 = strncmp(__s1,(char *)(DAT_00014364 + 0x1430c),4);
        if (iVar3 == 0) {
          iVar3 = 1;
        }
        else {
          iVar3 = strncmp(__s1,(char *)(DAT_00014368 + 0x1432c),9);
          if (iVar3 == 0) {
            iVar3 = 2;
          }
          else {
            iVar3 = strncmp(__s1,(char *)(DAT_0001436c + 0x1434c),7);
            if (iVar3 == 0) {
              iVar3 = 3;
            }
            else {
              iVar3 = -0x16;
            }
          }
        }
      }
    }
  }
  return iVar3;
}



/* ===== drmSetServerInfo @ 00014370 size=16 ===== */

void drmSetServerInfo(undefined4 param_1)

{
  *(undefined4 *)(DAT_00014380 + 0x1437c) = param_1;
  return;
}



/* ===== drmMsg @ 00014384 size=172 ===== */

void drmMsg(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  code *pcVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar3 = DAT_00014434 + 0x143a0;
  pcVar4 = param_1;
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  pcVar1 = getenv((char *)(DAT_00014430 + 0x1439c));
  if (((pcVar1 != (char *)0x0) &&
      (pcVar1 = strstr(pcVar1,(char *)(DAT_00014438 + 0x143b4)), pcVar1 != (char *)0x0)) ||
     ((*(int **)(DAT_0001443c + 0x143c8) != (int *)0x0 && (**(int **)(DAT_0001443c + 0x143c8) != 0))
     )) {
    if (*(undefined4 **)(DAT_00014440 + 0x143f0) == (undefined4 *)0x0) {
      vfprintf((FILE *)**(undefined4 **)(iVar3 + DAT_00014444),param_1,&uStack_c);
    }
    else {
      pcVar2 = (code *)**(undefined4 **)(DAT_00014440 + 0x143f0);
      (*pcVar2)(param_1,&uStack_c,&uStack_c,pcVar2,pcVar4,&uStack_c);
    }
  }
  return;
}



/* ===== FUN_00014448 @ 00014448 size=336 ===== */

int FUN_00014448(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  code *pcVar4;
  int iVar5;
  undefined1 auStack_c8 [4];
  undefined1 auStack_c4 [4];
  char acStack_c0 [64];
  stat64 sStack_80;
  
  if (param_2 == 1) {
    pcVar3 = (char *)(DAT_000145ac + 0x14518);
  }
  else if (param_2 == 2) {
    pcVar3 = (char *)(DAT_000145b0 + 0x14524);
  }
  else {
    if (param_2 != 0) {
      return -0x16;
    }
    pcVar3 = (char *)(DAT_00014598 + 0x14478);
  }
  sprintf(acStack_c0,pcVar3,DAT_0001459c + 0x1448c,param_1);
  drmMsg(DAT_000145a0 + 0x1449c,acStack_c0);
  if ((*(int *)(DAT_000145a4 + 0x144a8) != 0) &&
     (pcVar4 = *(code **)(*(int *)(DAT_000145a4 + 0x144a8) + 8), pcVar4 != (code *)0x0)) {
    (*pcVar4)(auStack_c4,auStack_c8);
  }
  iVar5 = 1;
  pcVar3 = (char *)(DAT_000145a8 + 0x144dc);
  while ((iVar1 = stat64(pcVar3,&sStack_80), iVar1 != 0 ||
         (iVar1 = stat64(acStack_c0,&sStack_80), iVar1 != 0))) {
    usleep(0x14);
    if (iVar5 == 0x32) {
      return -1;
    }
    iVar5 = iVar5 + 1;
  }
  iVar5 = open64(acStack_c0,2);
  if (iVar5 < 0) {
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
  }
  else {
    pcVar3 = (char *)((int)&DAT_00014598 + DAT_000145b8);
  }
  drmMsg(DAT_000145b4 + 0x14574,iVar5,pcVar3);
  if (-1 < iVar5) {
    return iVar5;
  }
  piVar2 = __errno_location();
  return -*piVar2;
}



/* ===== drmGetHashTable @ 000145bc size=16 ===== */

undefined4 drmGetHashTable(void)

{
  return *(undefined4 *)((int)&DAT_000145cc + DAT_000145cc);
}



/* ===== drmMalloc @ 000145d0 size=12 ===== */

void drmMalloc(size_t param_1)

{
  calloc(1,param_1);
  return;
}



/* ===== drmFree @ 000145dc size=4 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void drmFree(void *__ptr)

{
  (*(code *)PTR_free_0002b170)(__ptr);
  return;
}



/* ===== FUN_000145e0 @ 000145e0 size=48 ===== */

void FUN_000145e0(void *param_1)

{
  if (param_1 == (void *)0x0) {
    return;
  }
  drmFree(*(void **)((int)param_1 + 0x10));
  drmFree(*(void **)((int)param_1 + 0x18));
  drmFree(*(void **)((int)param_1 + 0x20));
  drmFree(param_1);
  return;
}



/* ===== drmIoctl @ 00014610 size=72 ===== */

int drmIoctl(int param_1,ulong param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  
  do {
    iVar1 = ioctl(param_1,param_2,param_3);
    if (iVar1 != -1) {
      return iVar1;
    }
    piVar2 = __errno_location();
  } while (*piVar2 == 0xb || *piVar2 == 4);
  return -1;
}



/* ===== drmGetEntry @ 00014658 size=160 ===== */

int * drmGetEntry(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  stat64 local_80;
  
  iVar1 = DAT_000146f8;
  local_80.st_rdev = 0;
  fstat64(param_1,&local_80);
  uVar2 = (undefined4)local_80.st_rdev;
  if (*(int *)(iVar1 + 0x14680) == 0) {
    uVar3 = drmHashCreate();
    *(undefined4 *)(iVar1 + 0x14680) = uVar3;
  }
  iVar1 = DAT_000146fc;
  iVar4 = drmHashLookup(*(undefined4 *)(DAT_000146fc + 0x146b0),uVar2,&local_80);
  if (iVar4 != 0) {
    piVar5 = (int *)drmMalloc(0xc);
    *piVar5 = param_1;
    piVar5[1] = 0;
    iVar4 = drmHashCreate();
    piVar5[2] = iVar4;
    drmHashInsert(*(undefined4 *)(iVar1 + 0x146b0),uVar2,piVar5);
    local_80.st_dev._0_4_ = piVar5;
  }
  return (int *)local_80.st_dev;
}



/* ===== drmOpenControl @ 00014700 size=84 ===== */

int drmOpenControl(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  char acStack_48 [64];
  
  sprintf(acStack_48,(char *)(DAT_00014758 + 0x14728),DAT_00014754 + 0x14720,param_1);
  iVar1 = open64(acStack_48,2,0);
  if (iVar1 < 0) {
    piVar2 = __errno_location();
    iVar1 = -*piVar2;
  }
  return iVar1;
}



/* ===== drmOpenRender @ 0001475c size=84 ===== */

int drmOpenRender(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  char acStack_48 [64];
  
  sprintf(acStack_48,(char *)(DAT_000147b4 + 0x14784),DAT_000147b0 + 0x1477c,param_1);
  iVar1 = open64(acStack_48,2,0);
  if (iVar1 < 0) {
    piVar2 = __errno_location();
    iVar1 = -*piVar2;
  }
  return iVar1;
}



/* ===== drmFreeVersion @ 000147b8 size=48 ===== */

void drmFreeVersion(void *param_1)

{
  if (param_1 == (void *)0x0) {
    return;
  }
  drmFree(*(void **)((int)param_1 + 0x10));
  drmFree(*(void **)((int)param_1 + 0x18));
  drmFree(*(void **)((int)param_1 + 0x20));
  drmFree(param_1);
  return;
}



/* ===== drmGetVersion @ 000147e8 size=356 ===== */

undefined4 * drmGetVersion(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 *puVar6;
  
  puVar1 = (undefined4 *)drmMalloc(0x24);
  iVar2 = drmIoctl(param_1,DAT_0001494c,puVar1);
  if (iVar2 == 0) {
    if (puVar1[3] != 0) {
      uVar3 = drmMalloc(puVar1[3] + 1);
      puVar1[4] = uVar3;
    }
    if (puVar1[5] != 0) {
      uVar3 = drmMalloc(puVar1[5] + 1);
      puVar1[6] = uVar3;
    }
    if (puVar1[7] != 0) {
      uVar3 = drmMalloc(puVar1[7] + 1);
      puVar1[8] = uVar3;
    }
    iVar2 = drmIoctl(param_1,DAT_0001494c,puVar1);
    if (iVar2 == 0) {
      if (puVar1[3] != 0) {
        *(undefined1 *)(puVar1[4] + puVar1[3]) = 0;
      }
      if (puVar1[5] != 0) {
        *(undefined1 *)(puVar1[6] + puVar1[5]) = 0;
      }
      if (puVar1[7] != 0) {
        *(undefined1 *)(puVar1[8] + puVar1[7]) = 0;
      }
      puVar6 = (undefined4 *)drmMalloc(0x24);
      *puVar6 = *puVar1;
      puVar6[1] = puVar1[1];
      puVar6[2] = puVar1[2];
      puVar6[3] = puVar1[3];
      pcVar5 = strdup((char *)puVar1[4]);
      uVar3 = puVar1[5];
      puVar6[4] = pcVar5;
      puVar6[5] = uVar3;
      pcVar5 = strdup((char *)puVar1[6]);
      uVar3 = puVar1[7];
      puVar6[6] = pcVar5;
      puVar6[7] = uVar3;
      pcVar5 = strdup((char *)puVar1[8]);
      puVar6[8] = pcVar5;
      FUN_000145e0(puVar1);
      return puVar6;
    }
    piVar4 = __errno_location();
    pcVar5 = strerror(*piVar4);
    drmMsg(DAT_00014950 + 0x148a4,pcVar5);
  }
  FUN_000145e0(puVar1);
  return (undefined4 *)0x0;
}



/* ===== drmAvailable @ 00014954 size=88 ===== */

bool drmAvailable(void)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar1 = FUN_00014448(0);
  if (iVar1 < 0) {
    iVar1 = access((char *)(DAT_000149ac + 0x1497c),4);
    bVar3 = iVar1 == 0;
  }
  else {
    iVar2 = drmGetVersion();
    bVar3 = iVar2 != 0;
    if (bVar3) {
      drmFreeVersion();
    }
    close(iVar1);
  }
  return bVar3;
}



/* ===== drmGetLibVersion @ 000149b0 size=32 ===== */

void drmGetLibVersion(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)drmMalloc(0x24);
  *puVar1 = 1;
  puVar1[1] = 3;
  puVar1[2] = 0;
  return;
}



/* ===== drmGetCap @ 000149d0 size=56 ===== */

void drmGetCap(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
              undefined4 *param_5)

{
  int iVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_18 = 0;
  local_20 = param_3;
  uStack_1c = param_4;
  iVar1 = drmIoctl(param_1,DAT_00014a08,&local_20);
  if (iVar1 == 0) {
    *param_5 = (undefined4)local_18;
    param_5[1] = local_18._4_4_;
  }
  return;
}



/* ===== drmSetClientCap @ 00014a0c size=36 ===== */

void drmSetClientCap(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = param_5;
  uStack_c = param_6;
  local_18 = param_3;
  uStack_14 = param_4;
  drmIoctl(param_1,DAT_00014a30,&local_18);
  return;
}



/* ===== drmFreeBusid @ 00014a34 size=4 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void drmFreeBusid(void *__ptr)

{
  (*(code *)PTR_drmFree_0002b0c0)(__ptr);
  return;
}



/* ===== drmGetBusid @ 00014a38 size=120 ===== */

void * drmGetBusid(undefined4 param_1)

{
  int iVar1;
  void *pvVar2;
  undefined8 local_18;
  
  local_18 = 0;
  iVar1 = drmIoctl(param_1,DAT_00014ab0,&local_18);
  if (iVar1 == 0) {
    pvVar2 = (void *)drmMalloc((int)local_18 + 1);
    local_18._4_4_ = pvVar2;
    iVar1 = drmIoctl(param_1,DAT_00014ab0,&local_18);
    if (iVar1 == 0) {
      *(undefined1 *)((int)local_18._4_4_ + (int)local_18) = 0;
      return local_18._4_4_;
    }
    drmFree(local_18._4_4_);
  }
  return (void *)0x0;
}



/* ===== drmSetBusid @ 00014ab4 size=76 ===== */

int drmSetBusid(undefined4 param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  size_t local_10;
  char *local_c;
  
  local_10 = 0;
  local_c = param_2;
  local_10 = strlen(param_2);
  iVar1 = drmIoctl(param_1,DAT_00014b00,&local_10);
  iVar3 = 0;
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    iVar3 = -*piVar2;
  }
  return iVar3;
}



/* ===== drmGetMagic @ 00014b04 size=68 ===== */

int drmGetMagic(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_c;
  
  *param_2 = 0;
  local_c = 0;
  iVar1 = drmIoctl(param_1,DAT_00014b48,&local_c,0,param_1);
  if (iVar1 == 0) {
    *param_2 = local_c;
    iVar1 = 0;
  }
  else {
    piVar2 = __errno_location();
    iVar1 = -*piVar2;
  }
  return iVar1;
}



/* ===== drmAuthMagic @ 00014b4c size=48 ===== */

int drmAuthMagic(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_c;
  undefined4 uStack_8;
  
  local_c = param_2;
  uStack_8 = param_3;
  iVar1 = drmIoctl(param_1,DAT_00014b7c,&local_c,param_4,param_1);
  iVar3 = 0;
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    iVar3 = -*piVar2;
  }
  return iVar3;
}



/* ===== drmAddMap @ 00014b80 size=88 ===== */

int drmAddMap(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 *param_6)

{
  int iVar1;
  int *piVar2;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined8 local_10;
  
  local_10 = 0;
  local_14 = param_5;
  local_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  iVar1 = drmIoctl(param_1,DAT_00014bd8,&local_20);
  if (iVar1 == 0) {
    if (param_6 != (undefined4 *)0x0) {
      *param_6 = (undefined4)local_10;
    }
    iVar1 = 0;
  }
  else {
    piVar2 = __errno_location();
    iVar1 = -*piVar2;
  }
  return iVar1;
}



/* ===== drmRmMap @ 00014bdc size=60 ===== */

int drmRmMap(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = drmIoctl(param_1,DAT_00014c18);
  iVar3 = 0;
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    iVar3 = -*piVar2;
  }
  return iVar3;
}



/* ===== drmAddBufs @ 00014c1c size=72 ===== */

int drmAddBufs(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int local_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_18 = 0;
  local_20 = param_2;
  uStack_1c = param_3;
  iVar1 = drmIoctl(param_1,DAT_00014c64,&local_20);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    local_20 = -*piVar2;
  }
  return local_20;
}



/* ===== drmMarkBufs @ 00014c68 size=264 ===== */

int drmMarkBufs(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint in_fpscr;
  double in_d0;
  double in_d1;
  double dVar5;
  undefined8 local_30;
  
  local_30 = 0;
  iVar2 = drmIoctl(param_1,DAT_00014d70,&local_30);
  if ((iVar2 == 0) && ((int)local_30 != 0)) {
    iVar2 = drmMalloc((int)local_30 * 0x18);
    local_30 = CONCAT44(iVar2,(int)local_30);
    if (iVar2 == 0) {
      iVar2 = -0xc;
    }
    else {
      iVar2 = drmIoctl(param_1,DAT_00014d70,&local_30);
      uVar1 = DAT_00014d74;
      if (iVar2 == 0) {
        iVar2 = 0;
        while( true ) {
          if ((int)local_30 <= iVar2) break;
          iVar4 = iVar2 * 0x18;
          dVar5 = (double)VectorSignedToFloat(*(undefined4 *)((int)local_30._4_4_ + iVar4),
                                              (byte)(in_fpscr >> 0x16) & 3);
          *(int *)((int)local_30._4_4_ + iVar4 + 8) = (int)(longlong)(dVar5 * in_d0);
          *(int *)((int)local_30._4_4_ + iVar4 + 0xc) = (int)(longlong)(dVar5 * in_d1);
          iVar4 = drmIoctl(param_1,uVar1);
          if (iVar4 != 0) goto LAB_00014ce0;
          iVar2 = iVar2 + 1;
        }
        iVar2 = 0;
      }
      else {
LAB_00014ce0:
        piVar3 = __errno_location();
        iVar2 = -*piVar3;
      }
      drmFree(local_30._4_4_);
    }
  }
  else {
    iVar2 = -0x16;
  }
  return iVar2;
}



/* ===== drmFreeBufs @ 00014d78 size=48 ===== */

int drmFreeBufs(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  local_10 = param_2;
  uStack_c = param_3;
  uStack_8 = param_3;
  iVar1 = drmIoctl(param_1,DAT_00014da8,&local_10);
  iVar3 = 0;
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    iVar3 = -*piVar2;
  }
  return iVar3;
}



/* ===== drmClose @ 00014dac size=112 ===== */

void drmClose(int param_1)

{
  undefined4 uVar1;
  undefined4 *__ptr;
  stat64 sStack_78;
  
  sStack_78.st_rdev = 0;
  fstat64(param_1,&sStack_78);
  uVar1 = (undefined4)sStack_78.st_rdev;
  __ptr = (undefined4 *)drmGetEntry(param_1);
  drmHashDestroy(__ptr[2]);
  *__ptr = 0;
  __ptr[1] = 0;
  __ptr[2] = 0;
  drmHashDelete(*(undefined4 *)(DAT_00014e1c + 0x14e04),uVar1);
  drmFree(__ptr);
  close(param_1);
  return;
}



/* ===== drmMap @ 00014e20 size=148 ===== */

int drmMap(int param_1,uint param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int *piVar4;
  
  iVar1 = DAT_00014eb4;
  if (param_1 < 0) {
    iVar1 = -0x16;
  }
  else {
    if (*(int *)(DAT_00014eb4 + 0x14e50) == 0) {
      iVar2 = getpagesize();
      *(int *)(iVar1 + 0x14e50) = iVar2 + -1;
    }
    pvVar3 = mmap64((void *)0x0,
                    *(uint *)(DAT_00014eb8 + 0x14e74) + param_3 & ~*(uint *)(DAT_00014eb8 + 0x14e74)
                    ,3,1,param_1,(ulonglong)param_2);
    *param_4 = pvVar3;
    if (pvVar3 == (void *)0xffffffff) {
      piVar4 = __errno_location();
      iVar1 = -*piVar4;
    }
    else {
      iVar1 = 0;
    }
  }
  return iVar1;
}



/* ===== drmUnmap @ 00014ebc size=4 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int drmUnmap(void *__addr,size_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_munmap_0002b03c)(__addr);
  return iVar1;
}



/* ===== drmGetBufInfo @ 00014ec0 size=232 ===== */

int * drmGetBufInfo(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined8 local_18;
  
  local_18 = 0;
  iVar1 = drmIoctl(param_1,DAT_00014fa8,&local_18);
  if ((iVar1 == 0) && ((int)local_18 != 0)) {
    puVar2 = (undefined4 *)drmMalloc((int)local_18 * 0x18);
    if (puVar2 != (undefined4 *)0x0) {
      local_18._4_4_ = puVar2;
      iVar1 = drmIoctl(param_1,DAT_00014fa8,&local_18);
      if (iVar1 == 0) {
        piVar3 = (int *)drmMalloc(8);
        *piVar3 = (int)local_18;
        puVar4 = (undefined4 *)drmMalloc((int)local_18 << 4);
        piVar3[1] = (int)puVar4;
        iVar1 = 0;
        puVar2 = local_18._4_4_;
        while( true ) {
          if ((int)local_18 <= iVar1) break;
          iVar1 = iVar1 + 1;
          *puVar4 = *puVar2;
          puVar4[1] = puVar2[1];
          puVar4[2] = puVar2[2];
          puVar4[3] = puVar2[3];
          puVar2 = puVar2 + 6;
          puVar4 = puVar4 + 4;
        }
      }
      else {
        piVar3 = (int *)0x0;
      }
      drmFree(local_18._4_4_);
      return piVar3;
    }
  }
  return (int *)0x0;
}



/* ===== drmMapBufs @ 00014fac size=232 ===== */

int * drmMapBufs(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  int local_1c [2];
  undefined4 *local_14;
  
  local_1c[0] = 0;
  local_1c[1] = 0;
  local_14 = (undefined4 *)0x0;
  iVar1 = drmIoctl(param_1,DAT_00015094,local_1c,param_4,param_1);
  if (((iVar1 == 0) && (local_1c[0] != 0)) &&
     (local_14 = (undefined4 *)drmMalloc(local_1c[0] << 4), local_14 != (undefined4 *)0x0)) {
    iVar1 = drmIoctl(param_1,DAT_00015094,local_1c);
    if (iVar1 == 0) {
      piVar4 = (int *)drmMalloc(8);
      *piVar4 = local_1c[0];
      puVar2 = (undefined4 *)drmMalloc(local_1c[0] << 4);
      piVar4[1] = (int)puVar2;
      iVar1 = 0;
      puVar3 = local_14;
      while( true ) {
        if (local_1c[0] <= iVar1) break;
        iVar1 = iVar1 + 1;
        *puVar2 = *puVar3;
        uVar5 = puVar3[1];
        puVar2[2] = 0;
        puVar2[1] = uVar5;
        puVar2[3] = puVar3[3];
        puVar3 = puVar3 + 4;
        puVar2 = puVar2 + 4;
      }
    }
    else {
      piVar4 = (int *)0x0;
    }
    drmFree(local_14);
  }
  else {
    piVar4 = (int *)0x0;
  }
  return piVar4;
}



/* ===== drmUnmapBufs @ 00015098 size=72 ===== */

undefined4 drmUnmapBufs(int *param_1)

{
  void *__ptr;
  int iVar1;
  
  for (iVar1 = 0; __ptr = (void *)param_1[1], iVar1 < *param_1; iVar1 = iVar1 + 1) {
    munmap(*(void **)((int)__ptr + iVar1 * 0x10 + 0xc),*(size_t *)((int)__ptr + iVar1 * 0x10 + 4));
  }
  drmFree(__ptr);
  drmFree(param_1);
  return 0;
}



/* ===== drmDMA @ 000150e0 size=180 ===== */

int drmDMA(int param_1,undefined4 *param_2)

{
  ulong __request;
  int iVar1;
  int *piVar2;
  int iVar3;
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
  
  __request = DAT_00015194;
  local_40 = *param_2;
  iVar3 = 0x11;
  local_3c = param_2[1];
  local_38 = param_2[2];
  local_34 = param_2[3];
  local_30 = param_2[4];
  local_2c = param_2[5];
  local_28 = param_2[6];
  local_24 = param_2[7];
  local_20 = param_2[8];
  local_1c = 0;
  do {
    iVar1 = ioctl(param_1,__request,&local_40);
    if (iVar1 == 0) {
      param_2[9] = local_1c;
      return 0;
    }
    piVar2 = __errno_location();
  } while ((*piVar2 == 0xb) && (iVar3 = iVar3 + -1, iVar3 != 0));
  return -*piVar2;
}



/* ===== drmGetLock @ 00015198 size=148 ===== */

void drmGetLock(undefined4 param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_18;
  uint local_14;
  
  uVar1 = DAT_0001522c;
  local_14 = (uint)((param_3 & 1) != 0);
  if ((param_3 & 2) != 0) {
    local_14 = local_14 | 2;
  }
  if ((param_3 & 4) != 0) {
    local_14 = local_14 | 4;
  }
  if ((param_3 & 8) != 0) {
    local_14 = local_14 | 8;
  }
  if ((param_3 & 0x10) != 0) {
    local_14 = local_14 | 0x10;
  }
  local_18 = param_2;
  if ((param_3 & 0x20) != 0) {
    local_14 = local_14 | 0x20;
  }
  do {
    iVar2 = drmIoctl(param_1,uVar1,&local_18);
  } while (iVar2 != 0);
  return;
}



/* ===== drmUnlock @ 00015230 size=32 ===== */

void drmUnlock(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_c = 0;
  local_10 = param_2;
  uStack_8 = param_3;
  drmIoctl(param_1,DAT_00015250,&local_10);
  return;
}



/* ===== drmGetReservedContextList @ 00015254 size=204 ===== */

void * drmGetReservedContextList(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  void *__ptr;
  void *__ptr_00;
  int iVar2;
  undefined8 local_20;
  
  local_20 = 0;
  iVar1 = drmIoctl(param_1,DAT_00015320,&local_20);
  if (((iVar1 == 0) && ((int)local_20 != 0)) &&
     (__ptr = (void *)drmMalloc((int)local_20 << 3), __ptr != (void *)0x0)) {
    __ptr_00 = (void *)drmMalloc((int)local_20 << 2);
    if (__ptr_00 == (void *)0x0) {
      drmFree(__ptr);
    }
    else {
      local_20 = CONCAT44(__ptr,(int)local_20);
      iVar2 = drmIoctl(param_1,DAT_00015320,&local_20);
      iVar1 = 0;
      if (iVar2 == 0) {
        for (; iVar1 < (int)local_20; iVar1 = iVar1 + 1) {
          *(undefined4 *)((int)__ptr_00 + iVar1 * 4) = *(undefined4 *)((int)__ptr + iVar1 * 8);
        }
        drmFree(__ptr);
        *param_2 = (int)local_20;
        return __ptr_00;
      }
    }
    drmFree(__ptr_00);
  }
  return (void *)0x0;
}



/* ===== drmFreeReservedContextList @ 00015324 size=4 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void drmFreeReservedContextList(void *__ptr)

{
  (*(code *)PTR_drmFree_0002b0c0)(__ptr);
  return;
}



/* ===== drmCreateContext @ 00015328 size=64 ===== */

int drmCreateContext(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 local_10;
  
  local_10 = 0;
  iVar1 = drmIoctl(param_1,DAT_00015368,&local_10);
  if (iVar1 == 0) {
    *param_2 = (undefined4)local_10;
    iVar1 = 0;
  }
  else {
    piVar2 = __errno_location();
    iVar1 = -*piVar2;
  }
  return iVar1;
}



/* ===== drmSwitchToContext @ 0001536c size=52 ===== */

int drmSwitchToContext(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_c = 0;
  local_10 = param_2;
  uStack_8 = param_3;
  iVar1 = drmIoctl(param_1,DAT_000153a0,&local_10);
  iVar3 = 0;
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    iVar3 = -*piVar2;
  }
  return iVar3;
}



/* ===== drmSetContextFlags @ 000153a4 size=80 ===== */

int drmSetContextFlags(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_10;
  uint local_c;
  uint uStack_8;
  
  local_c = (uint)((param_3 & 1) != 0);
  if ((param_3 & 2) != 0) {
    local_c = local_c | 2;
  }
  local_10 = param_2;
  uStack_8 = param_3;
  iVar1 = drmIoctl(param_1,DAT_000153f4,&local_10);
  iVar3 = 0;
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    iVar3 = -*piVar2;
  }
  return iVar3;
}



/* ===== drmGetContextFlags @ 000153f8 size=84 ===== */

int drmGetContextFlags(undefined4 param_1,undefined4 param_2,uint *param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 local_10;
  uint local_c;
  
  local_c = 0;
  local_10 = param_2;
  iVar1 = drmIoctl(param_1,DAT_0001544c,&local_10);
  if (iVar1 == 0) {
    *param_3 = 0;
    uVar3 = local_c & 1;
    if ((local_c & 2) != 0) {
      uVar3 = uVar3 | 2;
    }
    *param_3 = uVar3;
    iVar1 = 0;
  }
  else {
    piVar2 = __errno_location();
    iVar1 = -*piVar2;
  }
  return iVar1;
}



/* ===== drmDestroyContext @ 00015450 size=52 ===== */

int drmDestroyContext(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_c = 0;
  local_10 = param_2;
  uStack_8 = param_3;
  iVar1 = drmIoctl(param_1,DAT_00015484,&local_10);
  iVar3 = 0;
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    iVar3 = -*piVar2;
  }
  return iVar3;
}



/* ===== drmCreateDrawable @ 00015488 size=64 ===== */

int drmCreateDrawable(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_c;
  
  local_c = 0;
  iVar1 = drmIoctl(param_1,DAT_000154c8,&local_c,0,param_1);
  if (iVar1 == 0) {
    *param_2 = local_c;
    iVar1 = 0;
  }
  else {
    piVar2 = __errno_location();
    iVar1 = -*piVar2;
  }
  return iVar1;
}



/* ===== drmDestroyDrawable @ 000154cc size=48 ===== */

int drmDestroyDrawable(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_c;
  undefined4 uStack_8;
  
  local_c = param_2;
  uStack_8 = param_3;
  iVar1 = drmIoctl(param_1,DAT_000154fc,&local_c,param_4,param_1);
  iVar3 = 0;
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    iVar3 = -*piVar2;
  }
  return iVar3;
}



/* ===== drmUpdateDrawableInfo @ 00015500 size=64 ===== */

int drmUpdateDrawableInfo
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0;
  local_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  iVar1 = drmIoctl(param_1,DAT_00015540,&local_20);
  iVar3 = 0;
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    iVar3 = -*piVar2;
  }
  return iVar3;
}



/* ===== drmCrtcGetSequence @ 00015544 size=88 ===== */

void drmCrtcGetSequence(undefined4 param_1,undefined4 param_2,undefined4 *param_3,
                       undefined4 *param_4)

{
  int iVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  local_24 = 0;
  local_18 = 0;
  local_28 = param_2;
  uStack_14 = uStack_20;
  iVar1 = drmIoctl(param_1,DAT_0001559c,&local_28);
  if (iVar1 == 0) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = uStack_20;
      param_3[1] = uStack_1c;
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = local_18;
      param_4[1] = uStack_14;
    }
  }
  return;
}



/* ===== drmCrtcQueueSequence @ 000155a0 size=80 ===== */

void drmCrtcQueueSequence
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 *param_7,undefined4 param_8,
               undefined4 param_9,undefined4 param_10)

{
  int iVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_18 = param_5;
  uStack_14 = param_6;
  local_10 = param_9;
  uStack_c = param_10;
  local_20 = param_2;
  uStack_1c = param_3;
  iVar1 = drmIoctl(param_1,DAT_000155f0,&local_20);
  if (iVar1 == 0 && param_7 != (undefined4 *)0x0) {
    *param_7 = local_18;
    param_7[1] = uStack_14;
  }
  return;
}



/* ===== drmAgpAcquire @ 000155f4 size=40 ===== */

int drmAgpAcquire(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = drmIoctl(param_1,0x6430,0);
  if (iVar1 == 0) {
    return 0;
  }
  piVar2 = __errno_location();
  return -*piVar2;
}



/* ===== drmAgpRelease @ 0001561c size=40 ===== */

int drmAgpRelease(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = drmIoctl(param_1,0x6431,0);
  if (iVar1 == 0) {
    return 0;
  }
  piVar2 = __errno_location();
  return -*piVar2;
}



/* ===== drmAgpEnable @ 00015644 size=48 ===== */

int drmAgpEnable(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_c;
  undefined4 uStack_8;
  
  local_c = param_2;
  uStack_8 = param_3;
  iVar1 = drmIoctl(param_1,DAT_00015674,&local_c,param_4,param_1);
  iVar3 = 0;
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    iVar3 = -*piVar2;
  }
  return iVar3;
}



/* ===== drmAgpAlloc @ 00015678 size=108 ===== */

int drmAgpAlloc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
               undefined4 *param_5)

{
  int iVar1;
  int *piVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  
  local_1c = 0;
  *param_5 = 0;
  local_14 = 0;
  local_20 = param_2;
  uStack_18 = param_3;
  iVar1 = drmIoctl(param_1,DAT_000156e4,&local_20);
  if (iVar1 == 0) {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = local_14;
    }
    *param_5 = local_1c;
    iVar1 = 0;
  }
  else {
    piVar2 = __errno_location();
    iVar1 = -*piVar2;
  }
  return iVar1;
}



/* ===== drmAgpFree @ 000156e8 size=56 ===== */

int drmAgpFree(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = drmIoctl(param_1,DAT_00015720);
  iVar3 = 0;
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    iVar3 = -*piVar2;
  }
  return iVar3;
}



/* ===== drmAgpBind @ 00015724 size=48 ===== */

int drmAgpBind(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  local_10 = param_2;
  uStack_c = param_3;
  uStack_8 = param_3;
  iVar1 = drmIoctl(param_1,DAT_00015754,&local_10);
  iVar3 = 0;
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    iVar3 = -*piVar2;
  }
  return iVar3;
}



/* ===== drmAgpUnbind @ 00015758 size=52 ===== */

int drmAgpUnbind(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_c = 0;
  local_10 = param_2;
  uStack_8 = param_3;
  iVar1 = drmIoctl(param_1,DAT_0001578c,&local_10);
  iVar3 = 0;
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    iVar3 = -*piVar2;
  }
  return iVar3;
}



/* ===== drmAgpVersionMajor @ 00015790 size=68 ===== */

int drmAgpVersionMajor(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = drmIoctl(param_1,DAT_000157d4);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    piVar2 = __errno_location();
    iVar1 = -*piVar2;
  }
  return iVar1;
}



/* ===== drmAgpVersionMinor @ 000157d8 size=68 ===== */

int drmAgpVersionMinor(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  iVar1 = drmIoctl(param_1,DAT_0001581c);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    iVar3 = -*piVar2;
  }
  return iVar3;
}



/* ===== drmAgpGetMode @ 00015820 size=56 ===== */

undefined4 drmAgpGetMode(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iVar1 = drmIoctl(param_1,DAT_00015858);
  if (iVar1 != 0) {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== drmAgpBase @ 0001585c size=56 ===== */

undefined4 drmAgpBase(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iVar1 = drmIoctl(param_1,DAT_00015894);
  if (iVar1 != 0) {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== drmAgpSize @ 00015898 size=56 ===== */

undefined4 drmAgpSize(undefined4 param_1)

{
  drmIoctl(param_1,DAT_000158d0);
  return 0;
}



/* ===== drmAgpMemoryUsed @ 000158d4 size=56 ===== */

undefined4 drmAgpMemoryUsed(undefined4 param_1)

{
  drmIoctl(param_1,DAT_0001590c);
  return 0;
}



/* ===== drmAgpMemoryAvail @ 00015910 size=56 ===== */

undefined4 drmAgpMemoryAvail(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  iVar1 = drmIoctl(param_1,DAT_00015948);
  if (iVar1 != 0) {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== drmAgpVendorId @ 0001594c size=56 ===== */

uint drmAgpVendorId(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  iVar1 = drmIoctl(param_1,DAT_00015984);
  if (iVar1 == 0) {
    uVar2 = uVar2 & 0xffff;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== drmAgpDeviceId @ 00015988 size=56 ===== */

uint drmAgpDeviceId(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  iVar1 = drmIoctl(param_1,DAT_000159c0);
  if (iVar1 == 0) {
    uVar2 = uVar2 >> 0x10;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== drmScatterGatherAlloc @ 000159c4 size=72 ===== */

int drmScatterGatherAlloc(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 local_10;
  undefined4 local_c;
  
  *param_3 = 0;
  local_c = 0;
  local_10 = param_2;
  iVar1 = drmIoctl(param_1,DAT_00015a0c,&local_10);
  if (iVar1 == 0) {
    *param_3 = local_c;
    iVar1 = 0;
  }
  else {
    piVar2 = __errno_location();
    iVar1 = -*piVar2;
  }
  return iVar1;
}



/* ===== drmScatterGatherFree @ 00015a10 size=56 ===== */

int drmScatterGatherFree(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 uStack_8;
  
  local_10 = 0;
  local_c = param_2;
  uStack_8 = param_3;
  iVar1 = drmIoctl(param_1,DAT_00015a48,&local_10);
  iVar3 = 0;
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    iVar3 = -*piVar2;
  }
  return iVar3;
}



/* ===== drmWaitVBlank @ 00015a4c size=264 ===== */

int drmWaitVBlank(int param_1,uint *param_2)

{
  ulong __request;
  int iVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  FILE *__stream;
  timespec local_30;
  timespec local_28;
  
  iVar4 = DAT_00015b54 + 0x15a6c;
  iVar1 = clock_gettime(1,&local_30);
  __request = DAT_00015b60;
  if (iVar1 < 0) {
    __stream = (FILE *)**(undefined4 **)(iVar4 + DAT_00015b58);
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    fprintf(__stream,(char *)(DAT_00015b5c + 0x15aa4),pcVar3);
  }
  else {
    local_30.tv_sec = local_30.tv_sec + 1;
    do {
      iVar1 = ioctl(param_1,__request,param_2);
      *param_2 = *param_2 & 0xfffffffe;
      if (iVar1 == 0) {
        return 0;
      }
      piVar2 = __errno_location();
      if (*piVar2 != 4) {
        return iVar1;
      }
      clock_gettime(1,&local_28);
      if ((local_30.tv_sec + 1 < local_28.tv_sec) ||
         ((local_28.tv_sec == local_30.tv_sec && (local_30.tv_nsec <= local_28.tv_nsec)))) {
        *piVar2 = 0x10;
        return -1;
      }
    } while (*piVar2 == 4);
  }
  return iVar1;
}



/* ===== drmError @ 00015b64 size=180 ===== */

undefined4 drmError(uint param_1,undefined4 param_2)

{
  char *pcVar1;
  FILE *__stream;
  int __errnum;
  
  __stream = (FILE *)**(undefined4 **)(DAT_00015c18 + 0x15b78 + DAT_00015c1c);
  switch(param_1) {
  case 0xfffffc14:
    pcVar1 = (char *)(DAT_00015c2c + 0x15be4);
    break;
  case 0xfffffc15:
    pcVar1 = (char *)(DAT_00015c28 + 0x15bd8);
    break;
  case 0xfffffc16:
    pcVar1 = (char *)(DAT_00015c24 + 0x15bcc);
    break;
  case 0xfffffc17:
    pcVar1 = (char *)(DAT_00015c20 + 0x15bb0);
    break;
  default:
    __errnum = (param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f);
    pcVar1 = strerror(__errnum);
    fprintf(__stream,(char *)(DAT_00015c30 + 0x15c14),param_2,__errnum,pcVar1);
    return 1;
  }
  fprintf(__stream,pcVar1);
  return 1;
}



/* ===== drmCtlInstHandler @ 00015c34 size=56 ===== */

int drmCtlInstHandler(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 uStack_8;
  
  local_10 = 2;
  local_c = param_2;
  uStack_8 = param_3;
  iVar1 = drmIoctl(param_1,DAT_00015c6c,&local_10);
  iVar3 = 0;
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    iVar3 = -*piVar2;
  }
  return iVar3;
}



/* ===== drmCtlUninstHandler @ 00015c70 size=56 ===== */

int drmCtlUninstHandler(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  local_10 = 3;
  uStack_c = 0;
  uStack_8 = param_3;
  iVar1 = drmIoctl(param_1,DAT_00015ca8,&local_10);
  iVar3 = 0;
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    iVar3 = -*piVar2;
  }
  return iVar3;
}



/* ===== drmFinish @ 00015cac size=144 ===== */

int drmFinish(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_10;
  uint local_c;
  uint uStack_8;
  
  local_c = (uint)((param_3 & 1) != 0);
  if ((param_3 & 2) != 0) {
    local_c = local_c | 2;
  }
  if ((param_3 & 4) != 0) {
    local_c = local_c | 4;
  }
  if ((param_3 & 8) != 0) {
    local_c = local_c | 8;
  }
  if ((param_3 & 0x10) != 0) {
    local_c = local_c | 0x10;
  }
  if ((param_3 & 0x20) != 0) {
    local_c = local_c | 0x20;
  }
  local_10 = param_2;
  uStack_8 = param_3;
  iVar1 = drmIoctl(param_1,DAT_00015d3c,&local_10);
  iVar3 = 0;
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    iVar3 = -*piVar2;
  }
  return iVar3;
}



/* ===== drmGetInterruptFromBusID @ 00015d40 size=60 ===== */

int drmGetInterruptFromBusID
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = 0;
  uStack_14 = param_2;
  uStack_10 = param_3;
  uStack_c = param_4;
  iVar1 = drmIoctl(param_1,DAT_00015d7c,&local_18);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    local_18 = -*piVar2;
  }
  return local_18;
}



/* ===== drmAddContextTag @ 00015d80 size=80 ===== */

undefined4 drmAddContextTag(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = drmGetEntry();
  iVar2 = drmHashInsert(*(undefined4 *)(iVar1 + 8),param_2,param_3);
  if (iVar2 != 0) {
    drmHashDelete(*(undefined4 *)(iVar1 + 8),param_2);
    drmHashInsert(*(undefined4 *)(iVar1 + 8),param_2,param_3);
  }
  return 0;
}



/* ===== drmDelContextTag @ 00015dd0 size=28 ===== */

void drmDelContextTag(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = drmGetEntry();
  drmHashDelete(*(undefined4 *)(iVar1 + 8),param_2);
  return;
}



/* ===== drmGetContextTag @ 00015dec size=48 ===== */

undefined4 drmGetContextTag(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 extraout_r3;
  undefined4 local_c;
  
  local_c = param_2;
  iVar1 = drmGetEntry();
  iVar1 = drmHashLookup(*(undefined4 *)(iVar1 + 8),param_2,&local_c,extraout_r3,param_1);
  if (iVar1 != 0) {
    local_c = 0;
  }
  return local_c;
}



/* ===== drmAddContextPrivateMapping @ 00015e1c size=48 ===== */

int drmAddContextPrivateMapping(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  local_10 = param_2;
  uStack_c = param_3;
  uStack_8 = param_3;
  iVar1 = drmIoctl(param_1,DAT_00015e4c,&local_10);
  iVar3 = 0;
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    iVar3 = -*piVar2;
  }
  return iVar3;
}



/* ===== drmGetContextPrivateMapping @ 00015e50 size=72 ===== */

int drmGetContextPrivateMapping(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 local_10;
  undefined4 local_c;
  
  local_c = 0;
  local_10 = param_2;
  iVar1 = drmIoctl(param_1,DAT_00015e98,&local_10);
  if (iVar1 == 0) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = local_c;
    }
    iVar1 = 0;
  }
  else {
    piVar2 = __errno_location();
    iVar1 = -*piVar2;
  }
  return iVar1;
}



/* ===== drmGetMap @ 00015e9c size=144 ===== */

int drmGetMap(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
             undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8)

{
  int iVar1;
  int *piVar2;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  local_24 = 0;
  local_18 = 0;
  local_28 = param_2;
  uStack_14 = uStack_20;
  iVar1 = drmIoctl(param_1,DAT_00015f2c,&local_28);
  if (iVar1 == 0) {
    *param_3 = local_28;
    *param_4 = local_24;
    *param_5 = uStack_20;
    *param_6 = local_1c;
    *param_7 = local_18;
    *param_8 = uStack_14;
    iVar1 = 0;
  }
  else {
    piVar2 = __errno_location();
    iVar1 = -*piVar2;
  }
  return iVar1;
}



/* ===== drmGetClient @ 00015f30 size=132 ===== */

int drmGetClient(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
                undefined4 *param_5,undefined4 *param_6,undefined4 *param_7)

{
  int iVar1;
  int *piVar2;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  local_24 = 0;
  local_18 = 0;
  local_28 = param_2;
  uStack_14 = uStack_20;
  iVar1 = drmIoctl(param_1,DAT_00015fb4,&local_28);
  if (iVar1 == 0) {
    *param_3 = local_24;
    *param_4 = uStack_20;
    *param_5 = local_1c;
    *param_6 = local_18;
    *param_7 = uStack_14;
    iVar1 = 0;
  }
  else {
    piVar2 = __errno_location();
    iVar1 = -*piVar2;
  }
  return iVar1;
}



/* ===== drmGetStats @ 00015fb8 size=1268 ===== */

int drmGetStats(undefined4 param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  uint *puVar12;
  uint *__s;
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
  uint local_a4;
  uint local_a0 [31];
  
  __s = &local_a4;
  memset(__s,0,0x7c);
  iVar10 = drmIoctl(param_1,DAT_000164ac,__s);
  if (iVar10 == 0) {
    memset(param_2,0,0x220);
    if (local_a4 < 0x10) {
      *param_2 = local_a4;
      puVar12 = param_2 + local_a4 * 9;
      uVar22 = DAT_000164b0 + 0x1606c;
      uVar23 = DAT_000164b4 + 0x16070;
      uVar15 = DAT_000164bc + 0x16074;
      uVar16 = DAT_000164b8 + 0x16078;
      uVar17 = DAT_000164c0 + 0x1607c;
      uVar18 = DAT_000164c4 + 0x16080;
      uVar19 = DAT_000164c8 + 0x16084;
      uVar20 = DAT_000164cc + 0x16088;
      uVar13 = DAT_000164d0 + 0x1608c;
      for (; iVar10 = 0, puVar12 != param_2; param_2 = param_2 + 9) {
        param_2[1] = __s[1];
        iVar9 = DAT_000165c8;
        iVar8 = DAT_000165ac;
        iVar7 = DAT_00016598;
        iVar6 = DAT_00016584;
        iVar5 = DAT_00016570;
        iVar4 = DAT_0001655c;
        iVar3 = DAT_00016548;
        iVar2 = DAT_00016534;
        iVar1 = DAT_00016520;
        iVar10 = DAT_0001650c;
        switch(__s[2]) {
        case 0:
          uVar21 = DAT_000164d4 + 0x160f4;
          param_2[3] = uVar21;
          param_2[5] = uVar21;
          param_2[2] = DAT_000164d8 + 0x16104;
          uVar21 = DAT_000164dc + 0x16110;
          goto LAB_0001610c;
        case 1:
          param_2[3] = DAT_000164e0 + 0x1612c;
          param_2[5] = DAT_000164e4 + 0x16138;
          param_2[2] = DAT_000164e8 + 0x16144;
          param_2[4] = DAT_000164ec + 0x16150;
          param_2[6] = 0;
          uVar21 = DAT_000164f0 + 0x16164;
          goto LAB_00016160;
        case 2:
          param_2[3] = DAT_000164f4 + 0x1618c;
          param_2[5] = DAT_000164f8 + 0x16198;
          param_2[2] = DAT_000164fc + 0x161a4;
          param_2[4] = DAT_00016500 + 0x161b0;
          param_2[6] = 0;
          uVar21 = DAT_00016504 + 0x161c4;
LAB_00016160:
          param_2[7] = uVar21;
          param_2[8] = 1000;
          uVar14 = 1;
          goto LAB_00016170;
        case 3:
          param_2[3] = DAT_00016508 + 0x161d4;
          uVar21 = iVar10 + 0x161e0;
          param_2[5] = DAT_00016510 + 0x161e4;
          param_2[2] = DAT_00016514 + 0x161f0;
          param_2[4] = DAT_00016518 + 0x161fc;
          param_2[6] = 0;
          break;
        case 4:
          param_2[3] = DAT_0001651c + 0x16220;
          uVar21 = iVar1 + 0x1622c;
          param_2[5] = DAT_00016524 + 0x16230;
          param_2[2] = DAT_00016528 + 0x1623c;
          param_2[4] = DAT_0001652c + 0x16248;
          param_2[6] = 0;
          break;
        case 5:
          param_2[3] = DAT_00016530 + 0x16264;
          uVar21 = iVar2 + 0x16270;
          param_2[5] = DAT_00016538 + 0x16274;
          param_2[2] = DAT_0001653c + 0x16280;
          param_2[4] = DAT_00016540 + 0x1628c;
          param_2[6] = 0;
          break;
        case 6:
          uVar21 = DAT_000165bc + 0x16448;
          param_2[3] = uVar21;
          param_2[5] = uVar21;
          param_2[2] = DAT_000165c0 + 0x16458;
          uVar21 = DAT_000165c4 + 0x16464;
LAB_0001610c:
          param_2[4] = uVar21;
          param_2[6] = 1;
          uVar14 = 0;
          goto LAB_00016170;
        case 7:
          param_2[3] = uVar17;
          param_2[5] = uVar18;
          param_2[2] = uVar19;
          param_2[4] = uVar20;
          param_2[6] = 0;
          uVar21 = iVar9 + 0x16488;
          goto LAB_0001631c;
        case 8:
        default:
          param_2[5] = uVar22;
          param_2[3] = uVar13;
          param_2[2] = uVar23;
          param_2[4] = uVar15;
          param_2[6] = 0;
          param_2[7] = uVar16;
          goto LAB_00016208;
        case 9:
          param_2[3] = DAT_00016544 + 0x162a8;
          uVar21 = iVar3 + 0x162b4;
          param_2[5] = DAT_0001654c + 0x162b8;
          param_2[2] = DAT_00016550 + 0x162c4;
          param_2[4] = DAT_00016554 + 0x162d0;
          param_2[6] = 0;
          break;
        case 10:
          param_2[3] = DAT_00016558 + 0x162ec;
          uVar21 = iVar4 + 0x162f8;
          param_2[5] = DAT_00016560 + 0x162fc;
          param_2[2] = DAT_00016564 + 0x16308;
          param_2[4] = DAT_00016568 + 0x16314;
          param_2[6] = 0;
          goto LAB_0001631c;
        case 0xb:
          param_2[3] = DAT_0001656c + 0x1633c;
          uVar21 = iVar5 + 0x16348;
          param_2[5] = DAT_00016574 + 0x1634c;
          param_2[2] = DAT_00016578 + 0x16358;
          param_2[4] = DAT_0001657c + 0x16364;
          param_2[6] = 0;
LAB_0001631c:
          param_2[7] = uVar21;
          uVar21 = 0x400;
          goto LAB_00016324;
        case 0xc:
          param_2[3] = DAT_00016580 + 0x16380;
          uVar21 = iVar6 + 0x1638c;
          param_2[5] = DAT_00016588 + 0x16390;
          param_2[2] = DAT_0001658c + 0x1639c;
          param_2[4] = DAT_00016590 + 0x163a8;
          param_2[6] = 0;
          break;
        case 0xd:
          param_2[3] = DAT_00016594 + 0x163c4;
          uVar21 = iVar7 + 0x163d0;
          param_2[5] = DAT_0001659c + 0x163d4;
          param_2[2] = DAT_000165a0 + 0x163e0;
          param_2[4] = DAT_000165a4 + 0x163ec;
          param_2[6] = 0;
          break;
        case 0xe:
          param_2[3] = DAT_000165a8 + 0x16408;
          uVar21 = iVar8 + 0x16414;
          param_2[5] = DAT_000165b0 + 0x16418;
          param_2[2] = DAT_000165b4 + 0x16424;
          param_2[4] = DAT_000165b8 + 0x16430;
          param_2[6] = 0;
        }
        param_2[7] = uVar21;
LAB_00016208:
        uVar21 = 1000;
LAB_00016324:
        uVar14 = 0;
        param_2[8] = uVar21;
LAB_00016170:
        param_2[9] = uVar14;
        __s = __s + 2;
      }
    }
    else {
      iVar10 = -1;
    }
  }
  else {
    piVar11 = __errno_location();
    iVar10 = -*piVar11;
  }
  return iVar10;
}



/* ===== drmSetInterfaceVersion @ 000165cc size=112 ===== */

int drmSetInterfaceVersion(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_18 = *param_2;
  local_14 = param_2[1];
  local_10 = param_2[2];
  local_c = param_2[3];
  iVar1 = drmIoctl(param_1,DAT_0001663c,&local_18);
  iVar3 = 0;
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    iVar3 = -*piVar2;
  }
  *param_2 = local_18;
  param_2[1] = local_14;
  param_2[2] = local_10;
  param_2[3] = local_c;
  return iVar3;
}



/* ===== FUN_00016640 @ 00016640 size=652 ===== */

/* WARNING: Type propagation algorithm not settling */

int FUN_00016640(char *param_1,uint param_2)

{
  int __fd;
  int iVar1;
  char *__s1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *__s2;
  uint uVar6;
  bool bVar7;
  int *piVar8;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c [6];
  
  if (param_2 < 3) {
    bVar7 = true;
    uVar6 = (uint)*(byte *)(DAT_000168cc + 0x16678 + param_2);
    drmMsg(DAT_000168d0 + 0x16688,param_1);
    uVar3 = uVar6 + 0x10;
    iVar4 = DAT_000168d4 + 0x1669c;
    iVar5 = DAT_000168d8 + 0x166a8;
    __s2 = (char *)(DAT_000168dc + 0x166b4);
    for (; uVar6 != uVar3; uVar6 = uVar6 + 1) {
      __fd = FUN_00014448(uVar6,param_2);
      drmMsg(iVar4,__fd);
      if (-1 < __fd) {
        local_3c[2] = 4;
        local_3c[3] = 0xffffffff;
        local_3c[1] = 1;
        local_3c[4] = 0xffffffff;
        iVar1 = drmSetInterfaceVersion(__fd,local_3c + 1);
        if (iVar1 != 0) {
          bVar7 = false;
          local_3c[1] = 1;
          local_3c[2] = 1;
          local_3c[3] = 0xffffffff;
          local_3c[4] = 0xffffffff;
          drmMsg(DAT_000168e0 + 0x1672c);
          drmSetInterfaceVersion(__fd,local_3c + 1);
        }
        __s1 = (char *)drmGetBusid(__fd);
        drmMsg(iVar5,__s1);
        if (__s1 != (char *)0x0) {
          iVar1 = strcasecmp(__s1,param_1);
          if (iVar1 == 0) goto LAB_000168c0;
          iVar1 = strncasecmp(__s1,__s2,3);
          if (iVar1 == 0) {
            piVar8 = &local_4c;
            iVar2 = sscanf(__s1,(char *)(DAT_000168e4 + 0x167bc),&local_58,&local_54,&local_50,
                           &local_4c);
            if ((iVar2 == 4) ||
               (local_58 = iVar1,
               iVar1 = sscanf(__s1,(char *)(DAT_000168f0 + 0x16868),&local_54,&local_50,&local_4c,
                              piVar8), iVar1 == 3)) {
              piVar8 = local_3c;
              iVar1 = sscanf(param_1,(char *)(DAT_000168e8 + 0x167f0),&local_48,&local_44,&local_40,
                             local_3c);
              if (iVar1 != 4) {
                local_48 = 0;
                iVar1 = sscanf(param_1,(char *)(DAT_000168ec + 0x1681c),&local_44,&local_40,local_3c
                               ,piVar8);
                if (iVar1 != 3) goto LAB_00016870;
              }
              if (bVar7) {
                if (local_58 != local_48) goto LAB_00016870;
              }
              else {
                local_58 = 0;
                local_48 = 0;
              }
              if (((local_54 == local_44) && (local_50 == local_40)) && (local_4c == local_3c[0])) {
LAB_000168c0:
                drmFreeBusid(__s1);
                return __fd;
              }
            }
          }
LAB_00016870:
          drmFreeBusid(__s1);
        }
        close(__fd);
      }
    }
  }
  return -1;
}



/* ===== drmOpenWithType @ 00016acc size=640 ===== */

int drmOpenWithType(char *param_1,int param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  ssize_t sVar3;
  int iVar4;
  void *__ptr;
  int iVar5;
  void *pvVar6;
  byte *pbVar7;
  byte *pbVar8;
  code *pcVar10;
  uint uVar11;
  uint uVar12;
  char *__format;
  char acStack_268 [63];
  byte abStack_229 [529];
  byte *pbVar9;
  
  iVar5 = drmAvailable();
  if (iVar5 == 0) {
    if (param_1 == (char *)0x0) {
      if (param_2 == 0) {
        return -1;
      }
    }
    else {
      if (((*(int *)(DAT_00016b84 + 0x16afc) != 0) &&
          (pcVar10 = *(code **)(*(int *)(DAT_00016b84 + 0x16afc) + 4), pcVar10 != (code *)0x0)) &&
         (iVar5 = (*pcVar10)(param_1), iVar5 == 0)) {
        drmMsg(DAT_00016b88 + 0x16b30,param_1);
        return -1;
      }
      if (param_2 == 0) goto LAB_000168f4;
    }
LAB_00016b60:
    iVar5 = FUN_00016640(param_2,param_3);
    if (-1 < iVar5) {
      return iVar5;
    }
  }
  else if (param_2 != 0) goto LAB_00016b60;
  if (param_1 == (char *)0x0) {
    return -1;
  }
LAB_000168f4:
  if (param_3 < 3) {
    uVar11 = (uint)*(byte *)(DAT_00016abc + 0x16928 + param_3);
    uVar12 = uVar11 + 0x10;
    for (; uVar11 != uVar12; uVar11 = uVar11 + 1) {
      iVar5 = FUN_00014448(uVar11,param_3);
      if (-1 < iVar5) {
        iVar2 = drmGetVersion();
        if (iVar2 != 0) {
          iVar4 = strcmp(*(char **)(iVar2 + 0x10),param_1);
          if (iVar4 == 0) {
            drmFreeVersion(iVar2);
            __ptr = (void *)drmGetBusid(iVar5);
            pvVar6 = __ptr;
            if (__ptr == (void *)0x0) {
              pvVar6 = (void *)(DAT_00016ac4 + 0x16a64);
            }
            drmMsg(DAT_00016ac8 + 0x16a6c,pvVar6);
            if (__ptr == (void *)0x0) {
              return iVar5;
            }
            drmFreeBusid(__ptr);
            return iVar5;
          }
          drmFreeVersion(iVar2);
        }
        close(iVar5);
      }
    }
    iVar5 = 0;
    __format = (char *)(DAT_00016ac0 + 0x1694c);
    do {
      sprintf(acStack_268,__format,iVar5);
      iVar2 = open64(acStack_268,0);
      if (-1 < iVar2) {
        pbVar9 = abStack_229 + 1;
        sVar3 = read(iVar2,pbVar9,0x1ff);
        close(iVar2);
        if (sVar3 != 0) {
          abStack_229[sVar3] = 0;
          pbVar8 = pbVar9;
          do {
            pbVar7 = pbVar8;
            bVar1 = *pbVar7;
            pbVar8 = pbVar7 + 1;
          } while ((bVar1 & 0xdf) != 0);
          if (bVar1 != 0) {
            *pbVar7 = bVar1 & 0xdf;
            iVar2 = strcmp((char *)pbVar9,param_1);
            if (iVar2 == 0) {
              pbVar9 = pbVar7 + 1;
              do {
                pbVar8 = pbVar9 + 1;
                bVar1 = *pbVar9;
                pbVar9 = pbVar8;
              } while ((bVar1 & 0xdf) != 0);
              if (bVar1 != 0) {
                iVar5 = FUN_00016640(pbVar8,param_3);
                return iVar5;
              }
              strtol((char *)(pbVar7 + 1),(char **)0x0,0);
              iVar5 = FUN_00014448(iVar5,param_3);
              return iVar5;
            }
          }
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != 8);
  }
  return -1;
}



/* ===== drmOpen @ 00016b8c size=8 ===== */

void drmOpen(undefined4 param_1,undefined4 param_2)

{
  drmOpenWithType(param_1,param_2,0);
  return;
}



/* ===== drmCommandNone @ 00016b94 size=44 ===== */

int drmCommandNone(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = drmIoctl(param_1,param_2 + 0x40U | 0x6400,0);
  if (iVar1 == 0) {
    return 0;
  }
  piVar2 = __errno_location();
  return -*piVar2;
}



/* ===== drmCommandRead @ 00016bc0 size=48 ===== */

int drmCommandRead(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = drmIoctl(param_1,param_2 + 0x40U | param_4 << 0x10 | 0x80006400);
  if (iVar1 == 0) {
    return 0;
  }
  piVar2 = __errno_location();
  return -*piVar2;
}



/* ===== drmCommandWrite @ 00016bf0 size=48 ===== */

int drmCommandWrite(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = drmIoctl(param_1,param_2 + 0x40U | param_4 << 0x10 | 0x40006400);
  if (iVar1 == 0) {
    return 0;
  }
  piVar2 = __errno_location();
  return -*piVar2;
}



/* ===== drmCommandWriteRead @ 00016c20 size=48 ===== */

int drmCommandWriteRead(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = drmIoctl(param_1,param_2 + 0x40U | param_4 << 0x10 | 0xc0006400);
  if (iVar1 == 0) {
    return 0;
  }
  piVar2 = __errno_location();
  return -*piVar2;
}



/* ===== drmOpenOnceWithType @ 00016c50 size=220 ===== */

int drmOpenOnceWithType(char *param_1,undefined4 *param_2,int param_3)

{
  char *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = 0;
  puVar2 = (undefined4 *)(DAT_00016d2c + 0x16c80);
  iVar5 = *(int *)(DAT_00016d2c + 0x16c7c);
  while( true ) {
    if (iVar5 <= iVar4) {
      iVar5 = drmOpenWithType(0,param_1,param_3);
      iVar4 = DAT_00016d30;
      if (-1 < iVar5) {
        iVar6 = DAT_00016d30 + 0x16ca0;
        iVar3 = *(int *)(DAT_00016d30 + 0x16cac);
        if (iVar3 != 0x10) {
          pcVar1 = strdup(param_1);
          iVar6 = iVar6 + iVar3 * 0x10;
          *(char **)(iVar6 + 0x10) = pcVar1;
          *(int *)(iVar6 + 0x14) = iVar5;
          *(undefined4 *)(iVar6 + 0x18) = 1;
          *(int *)(iVar6 + 0x1c) = param_3;
          *(int *)(iVar4 + 0x16cac) = iVar3 + 1;
          *param_2 = 1;
        }
      }
      return iVar5;
    }
    iVar6 = strcmp(param_1,(char *)*puVar2);
    if ((iVar6 == 0) && (puVar2[3] == param_3)) break;
    iVar4 = iVar4 + 1;
    puVar2 = puVar2 + 4;
  }
  iVar4 = DAT_00016d34 + 0x16d04 + iVar4 * 0x10;
  *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
  *param_2 = 0;
  return *(int *)(iVar4 + 0x14);
}



/* ===== drmOpenOnce @ 00016d38 size=28 ===== */

void drmOpenOnce(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00012f9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_drmOpenOnceWithType_0002b00c)(param_2,param_3,0);
  return;
}



/* ===== drmCloseOnce @ 00016d48 size=144 ===== */

void drmCloseOnce(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  
  iVar8 = 0;
  iVar6 = DAT_00016dd8 + 0x16d6c;
  iVar2 = *(int *)(DAT_00016dd8 + 0x16d68);
  do {
    if (iVar2 <= iVar8) {
      return;
    }
    if (*(int *)(iVar6 + 4) == param_1) {
      iVar4 = *(int *)(iVar6 + 8) + -1;
      *(int *)(iVar6 + 8) = iVar4;
      iVar1 = DAT_00016ddc;
      if (iVar4 == 0) {
        drmClose();
        iVar6 = iVar1 + 0x16d98 + iVar8 * 0x10;
        free(*(void **)(iVar6 + 0x10));
        iVar2 = *(int *)(iVar1 + 0x16da4) + -1;
        *(int *)(iVar1 + 0x16da4) = iVar2;
        if (iVar2 <= iVar8) {
          return;
        }
        iVar2 = iVar1 + 0x16d98 + iVar2 * 0x10;
        uVar3 = *(undefined4 *)(iVar2 + 0x14);
        uVar5 = *(undefined4 *)(iVar2 + 0x18);
        uVar7 = *(undefined4 *)(iVar2 + 0x1c);
        *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(iVar2 + 0x10);
        *(undefined4 *)(iVar6 + 0x14) = uVar3;
        *(undefined4 *)(iVar6 + 0x18) = uVar5;
        *(undefined4 *)(iVar6 + 0x1c) = uVar7;
        return;
      }
    }
    iVar8 = iVar8 + 1;
    iVar6 = iVar6 + 0x10;
  } while( true );
}



/* ===== drmSetMaster @ 00016de0 size=12 ===== */

void drmSetMaster(undefined4 param_1)

{
  drmIoctl(param_1,0x641e,0);
  return;
}



/* ===== drmDropMaster @ 00016dec size=12 ===== */

void drmDropMaster(undefined4 param_1)

{
  drmIoctl(param_1,0x641f,0);
  return;
}



/* ===== drmGetDeviceNameFromFd @ 00016df8 size=144 ===== */

char * drmGetDeviceNameFromFd(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  stat64 sStack_108;
  char acStack_a0 [128];
  
  iVar1 = DAT_00016e8c;
  iVar7 = DAT_00016e88 + 0x16e18;
  fstat64(param_1,&sStack_108);
  iVar3 = sStack_108.st_rdev._4_4_;
  iVar2 = (int)sStack_108.st_rdev;
  iVar6 = 0;
  while( true ) {
    snprintf(acStack_a0,0x80,(char *)(iVar1 + 0x16e20),iVar7,iVar6);
    iVar4 = stat64(acStack_a0,&sStack_108);
    if ((iVar4 == 0) && (sStack_108.st_rdev._4_4_ == iVar3 && (int)sStack_108.st_rdev == iVar2))
    break;
    iVar6 = iVar6 + 1;
    if (iVar6 == 0x10) {
      return (char *)0x0;
    }
  }
  pcVar5 = strdup(acStack_a0);
  return pcVar5;
}



/* ===== drmGetNodeTypeFromFd @ 00016e90 size=140 ===== */

uint drmGetNodeTypeFromFd(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  stat64 sStack_78;
  
  iVar1 = fstat64(param_1,&sStack_78);
  if (iVar1 == 0) {
    uVar2 = gnu_dev_major(sStack_78.st_rdev);
    uVar3 = gnu_dev_minor(sStack_78.st_rdev);
    if ((uVar2 == 0xe2) && ((sStack_78.st_mode & 0xf000) == 0x2000)) {
      if ((-1 < (int)uVar3) && ((uint)((int)uVar3 >> 6) < 3)) {
        return (int)uVar3 >> 6;
      }
      piVar4 = __errno_location();
      iVar1 = 0x13;
    }
    else {
      piVar4 = __errno_location();
      iVar1 = 0x16;
    }
    *piVar4 = iVar1;
  }
  return 0xffffffff;
}



/* ===== drmPrimeHandleToFD @ 00016f1c size=48 ===== */

void drmPrimeHandleToFD(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4
                       )

{
  int iVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  uStack_14 = param_2;
  uStack_10 = param_3;
  iVar1 = drmIoctl(param_1,DAT_00016f4c,&uStack_14,0xffffffff,param_1);
  if (iVar1 == 0) {
    *param_4 = local_c;
  }
  return;
}



/* ===== drmPrimeFDToHandle @ 00016f50 size=52 ===== */

void drmPrimeFDToHandle(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4
                       )

{
  int iVar1;
  undefined8 local_14;
  undefined4 local_c;
  
  local_14 = 0;
  local_c = param_2;
  iVar1 = drmIoctl(param_1,DAT_00016f84,&local_14,param_4,param_1);
  if (iVar1 == 0) {
    *param_3 = (undefined4)local_14;
  }
  return;
}



/* ===== drmGetPrimaryDeviceNameFromFd @ 00016f88 size=8 ===== */

/* WARNING: Removing unreachable block (ram,0x000135ac) */

char * drmGetPrimaryDeviceNameFromFd(int param_1)

{
  size_t __n;
  int iVar1;
  uint uVar2;
  DIR *__dirp;
  long lVar3;
  dirent64 *__entry;
  char *__s1;
  char *pcVar4;
  dirent64 *pdStack_114;
  char acStack_110 [64];
  char acStack_d0 [64];
  stat64 sStack_90;
  
  pcVar4 = (char *)(DAT_000136dc + 0x13588);
  __n = strlen(pcVar4);
  iVar1 = fstat64(param_1,&sStack_90);
  if (((iVar1 == 0) && (uVar2 = gnu_dev_major(sStack_90.st_rdev), uVar2 == 0xe2)) &&
     ((sStack_90.st_mode & 0xf000) == 0x2000)) {
    uVar2 = gnu_dev_minor(sStack_90.st_rdev);
    snprintf(acStack_d0,0x40,(char *)(DAT_000136e4 + 0x13608),0xe2,uVar2);
    __dirp = opendir(acStack_d0);
    if (__dirp != (DIR *)0x0) {
      iVar1 = dirfd(__dirp);
      lVar3 = fpathconf(iVar1,3);
      if ((lVar3 != -1) && (__entry = malloc(lVar3 + 0x14), __entry != (dirent64 *)0x0)) {
        while ((iVar1 = readdir64_r(__dirp,__entry,&pdStack_114), iVar1 == 0 &&
               (pdStack_114 != (dirent64 *)0x0))) {
          __s1 = pdStack_114->d_name;
          iVar1 = strncmp(__s1,pcVar4,__n);
          if (iVar1 == 0) {
            snprintf(acStack_110,0x40,(char *)(DAT_000136e8 + 0x13688),__s1);
            free(__entry);
            closedir(__dirp);
            pcVar4 = strdup(acStack_110);
            return pcVar4;
          }
        }
        free(__entry);
      }
      closedir(__dirp);
    }
  }
  return (char *)0x0;
}



/* ===== drmGetRenderDeviceNameFromFd @ 00016f90 size=380 ===== */

/* WARNING: Removing unreachable block (ram,0x0001357c) */

char * drmGetRenderDeviceNameFromFd(int param_1)

{
  size_t __n;
  int iVar1;
  uint uVar2;
  DIR *__dirp;
  long lVar3;
  dirent64 *__entry;
  char *pcVar4;
  char *__s1;
  dirent64 *local_114;
  char acStack_110 [64];
  char acStack_d0 [64];
  stat64 sStack_90;
  
  pcVar4 = (char *)(DAT_000136e0 + 0x135b8);
  __n = strlen(pcVar4);
  iVar1 = fstat64(param_1,&sStack_90);
  if (((iVar1 == 0) && (uVar2 = gnu_dev_major(sStack_90.st_rdev), uVar2 == 0xe2)) &&
     ((sStack_90.st_mode & 0xf000) == 0x2000)) {
    uVar2 = gnu_dev_minor(sStack_90.st_rdev);
    snprintf(acStack_d0,0x40,(char *)(DAT_000136e4 + 0x13608),0xe2,uVar2);
    __dirp = opendir(acStack_d0);
    if (__dirp != (DIR *)0x0) {
      iVar1 = dirfd(__dirp);
      lVar3 = fpathconf(iVar1,3);
      if ((lVar3 != -1) && (__entry = malloc(lVar3 + 0x14), __entry != (dirent64 *)0x0)) {
        while ((iVar1 = readdir64_r(__dirp,__entry,&local_114), iVar1 == 0 &&
               (local_114 != (dirent64 *)0x0))) {
          __s1 = local_114->d_name;
          iVar1 = strncmp(__s1,pcVar4,__n);
          if (iVar1 == 0) {
            snprintf(acStack_110,0x40,(char *)(DAT_000136e8 + 0x13688),__s1);
            free(__entry);
            closedir(__dirp);
            pcVar4 = strdup(acStack_110);
            return pcVar4;
          }
        }
        free(__entry);
      }
      closedir(__dirp);
    }
  }
  return (char *)0x0;
}



/* ===== drmDevicesEqual @ 00016f98 size=140 ===== */

bool drmDevicesEqual(int param_1,int param_2)

{
  int iVar1;
  size_t __n;
  
  if ((param_1 == 0 || param_2 == 0) || (*(int *)(param_1 + 8) != *(int *)(param_2 + 8))) {
    return false;
  }
  switch(*(int *)(param_1 + 8)) {
  case 0:
    __n = 6;
    goto LAB_00016fec;
  case 1:
    __n = 2;
    goto LAB_00016fec;
  case 2:
    break;
  case 3:
    break;
  default:
    return false;
  }
  __n = 0x200;
LAB_00016fec:
  iVar1 = memcmp(*(void **)(param_1 + 0xc),*(void **)(param_2 + 0xc),__n);
  return iVar1 == 0;
}



/* ===== drmFreeDevice @ 00017024 size=176 ===== */

void drmFreeDevice(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  iVar1 = *param_1;
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 8) == 2) {
      if ((*(int **)(iVar1 + 0x10) == (int *)0x0) || (iVar2 = **(int **)(iVar1 + 0x10), iVar2 == 0))
      goto LAB_00017050;
      puVar3 = (undefined4 *)(iVar2 + -4);
      while( true ) {
        puVar3 = puVar3 + 1;
        if ((void *)*puVar3 == (void *)0x0) break;
        free((void *)*puVar3);
      }
    }
    else {
      if (((*(int *)(iVar1 + 8) != 3) || (*(int **)(iVar1 + 0x10) == (int *)0x0)) ||
         (iVar2 = **(int **)(iVar1 + 0x10), iVar2 == 0)) goto LAB_00017050;
      puVar3 = (undefined4 *)(iVar2 + -4);
      while( true ) {
        puVar3 = puVar3 + 1;
        if ((void *)*puVar3 == (void *)0x0) break;
        free((void *)*puVar3);
      }
    }
    free((void *)**(undefined4 **)(iVar1 + 0x10));
  }
LAB_00017050:
  free((void *)*param_1);
  *param_1 = 0;
  return;
}



/* ===== FUN_000170d4 @ 000170d4 size=184 ===== */

void FUN_000170d4(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar8;
  int *piVar9;
  int iVar10;
  uint in_fpscr;
  double dVar11;
  undefined4 *puVar7;
  
  iVar10 = 0;
  piVar1 = param_1;
  while (piVar9 = piVar1, iVar10 < param_2) {
    iVar10 = iVar10 + 1;
    for (piVar8 = piVar9 + 1; piVar1 = piVar9 + 1, piVar8 != param_1 + param_2; piVar8 = piVar8 + 1)
    {
      iVar2 = drmDevicesEqual(*piVar9,*piVar8);
      if (iVar2 != 0) {
        iVar2 = *piVar8;
        *(uint *)(*piVar9 + 4) = *(uint *)(*piVar9 + 4) | *(uint *)(iVar2 + 4);
        dVar11 = (double)VectorSignedToFloat(*(undefined4 *)(iVar2 + 4),(byte)(in_fpscr >> 0x16) & 3
                                            );
        dVar11 = log2(dVar11);
        puVar5 = *(undefined4 **)(*(int *)*piVar8 + (int)(longlong)dVar11 * 4);
        puVar3 = *(undefined4 **)(*(int *)*piVar9 + (int)(longlong)dVar11 * 4);
        puVar6 = puVar5;
        do {
          puVar7 = puVar6 + 1;
          puVar4 = puVar3 + 1;
          *puVar3 = *puVar6;
          puVar3 = puVar4;
          puVar6 = puVar7;
        } while (puVar7 != puVar5 + 5);
        *(undefined1 *)puVar4 = *(undefined1 *)puVar7;
        drmFreeDevice(piVar8);
      }
    }
  }
  return;
}



/* ===== drmFreeDevices @ 0001718c size=60 ===== */

void drmFreeDevices(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  for (iVar1 = 0; iVar1 < param_2; iVar1 = iVar1 + 1) {
    if (*param_1 != 0) {
      drmFreeDevice();
    }
    param_1 = param_1 + 1;
  }
  return;
}



/* ===== drmGetDevice2 @ 000171c8 size=800 ===== */

int drmGetDevice2(int param_1,uint param_2,int *param_3)

{
  ulonglong __dev;
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  DIR *__dirp;
  int *piVar6;
  int iVar7;
  int iVar8;
  dirent64 *pdVar9;
  int iVar10;
  char *__format;
  int iVar11;
  int iVar12;
  int local_10c8;
  int local_10a4;
  stat64 sStack_10a0;
  char acStack_1034 [4104];
  
  if (((param_2 & 0xfffffffe) == 0) && (param_1 != -1 && param_3 != (int *)0x0)) {
    iVar3 = fstat64(param_1,&sStack_10a0);
    iVar2 = sStack_10a0.st_rdev._4_4_;
    iVar1 = (int)sStack_10a0.st_rdev;
    if (iVar3 != 0) {
      piVar4 = __errno_location();
      return -*piVar4;
    }
    uVar5 = gnu_dev_major(CONCAT44(sStack_10a0.st_rdev._4_4_,(int)sStack_10a0.st_rdev));
    gnu_dev_minor(CONCAT44(iVar2,iVar1));
    if ((uVar5 == 0xe2) && ((sStack_10a0.st_mode & 0xf000) == 0x2000)) {
      iVar3 = FUN_00014248();
      piVar4 = calloc(0x10,4);
      if (piVar4 == (int *)0x0) {
        return -0xc;
      }
      __dirp = opendir((char *)(DAT_000174e8 + 0x1729c));
      if (__dirp == (DIR *)0x0) {
        piVar6 = __errno_location();
        local_10c8 = -*piVar6;
LAB_000172b4:
        free(piVar4);
        return local_10c8;
      }
      iVar12 = 0x10;
      iVar10 = DAT_000174ec + 0x174d8;
      __format = (char *)(DAT_000174f0 + 0x174e4);
      iVar11 = 0;
switchD_00017360_default:
      do {
        do {
          do {
            do {
              pdVar9 = readdir64(__dirp);
              if (pdVar9 == (dirent64 *)0x0) {
                FUN_000170d4(piVar4,iVar11);
                *param_3 = *piVar4;
                drmFreeDevices(piVar4 + 1,iVar11 + -1);
                closedir(__dirp);
                free(piVar4);
                if (*param_3 != 0) {
                  return 0;
                }
                return -0x13;
              }
              iVar7 = FUN_000138b4(pdVar9->d_name);
            } while (iVar7 < 0);
            snprintf(acStack_1034,0x1000,__format,iVar10,pdVar9->d_name);
            iVar8 = stat64(acStack_1034,&sStack_10a0);
          } while (iVar8 != 0);
          __dev = CONCAT44(sStack_10a0.st_rdev._4_4_,(int)sStack_10a0.st_rdev);
          uVar5 = gnu_dev_major(__dev);
        } while ((uVar5 != 0xe2) || ((sStack_10a0.st_mode & 0xf000) != 0x2000));
        uVar5 = gnu_dev_minor(__dev);
        iVar8 = FUN_00014248();
      } while (iVar8 != iVar3);
      switch(iVar3) {
      case 0:
        iVar7 = FUN_00014164(&local_10a4,acStack_1034,iVar7,uVar5,1,param_2);
        break;
      case 1:
        iVar7 = FUN_00013e20(&local_10a4,acStack_1034,iVar7,uVar5,1);
        break;
      case 2:
        iVar7 = FUN_00013bd8(&local_10a4,acStack_1034,iVar7,uVar5,1);
        break;
      case 3:
        iVar7 = FUN_00013ab4(&local_10a4,acStack_1034,iVar7,uVar5,1);
        break;
      default:
        goto switchD_00017360_default;
      }
      if (iVar7 == 0) {
        piVar6 = piVar4;
        if (iVar12 <= iVar11) {
          iVar12 = iVar12 + 0x10;
          piVar6 = realloc(piVar4,iVar12 * 4);
          if (piVar6 == (int *)0x0) {
            drmFreeDevices(piVar4,iVar11);
            closedir(__dirp);
            local_10c8 = 0;
            goto LAB_000172b4;
          }
        }
        piVar4 = piVar6;
        if (iVar11 == 0 || (sStack_10a0.st_rdev._4_4_ != iVar2 || (int)sStack_10a0.st_rdev != iVar1)
           ) {
          piVar6[iVar11] = local_10a4;
          iVar11 = iVar11 + 1;
        }
        else {
          piVar6[iVar11] = *piVar6;
          *piVar6 = local_10a4;
          iVar11 = iVar11 + 1;
        }
      }
      goto switchD_00017360_default;
    }
  }
  return -0x16;
}



/* ===== drmGetDevice @ 000174f4 size=24 ===== */

void drmGetDevice(undefined4 param_1,undefined4 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00013170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_drmGetDevice2_0002b0a8)(param_1,1,param_2);
  return;
}



/* ===== drmGetDevices2 @ 00017500 size=688 ===== */

int drmGetDevices2(uint param_1,int param_2,int param_3)

{
  __dev_t __dev;
  int *__ptr;
  DIR *__dirp;
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  dirent64 *pdVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int local_10b8;
  int local_10a4;
  stat64 sStack_10a0;
  char acStack_1034 [4104];
  
  if ((param_1 & 0xfffffffe) == 0) {
    __ptr = calloc(0x10,4);
    if (__ptr == (int *)0x0) {
      local_10b8 = -0xc;
    }
    else {
      __dirp = opendir((char *)(DAT_000177b0 + 0x1754c));
      if (__dirp == (DIR *)0x0) {
        piVar1 = __errno_location();
        local_10b8 = -*piVar1;
LAB_00017568:
        free(__ptr);
      }
      else {
        iVar9 = 0x10;
        iVar7 = 0;
switchD_00017618_default:
        pdVar6 = readdir64(__dirp);
        if (pdVar6 != (dirent64 *)0x0) {
          iVar2 = FUN_000138b4(pdVar6->d_name);
          if (-1 < iVar2) {
            snprintf(acStack_1034,0x1000,(char *)(DAT_000177b4 + 0x175b8),DAT_000177b8 + 0x175bc,
                     pdVar6->d_name);
            iVar3 = stat64(acStack_1034,&sStack_10a0);
            __dev = sStack_10a0.st_rdev;
            if (((iVar3 == 0) && (uVar4 = gnu_dev_major(sStack_10a0.st_rdev), uVar4 == 0xe2)) &&
               ((sStack_10a0.st_mode & 0xf000) == 0x2000)) {
              uVar4 = gnu_dev_minor(__dev);
              uVar5 = FUN_00014248();
              switch(uVar5) {
              case 0:
                iVar2 = FUN_00014164(&local_10a4,acStack_1034,iVar2,uVar4,param_2 != 0,param_1);
                break;
              case 1:
                iVar2 = FUN_00013e20(&local_10a4,acStack_1034,iVar2,uVar4,param_2 != 0);
                break;
              case 2:
                iVar2 = FUN_00013bd8(&local_10a4,acStack_1034,iVar2,uVar4,param_2 != 0);
                break;
              case 3:
                iVar2 = FUN_00013ab4(&local_10a4,acStack_1034,iVar2,uVar4,param_2 != 0);
                break;
              default:
                goto switchD_00017618_default;
              }
              if (iVar2 == 0) {
                piVar1 = __ptr;
                if (iVar9 <= iVar7) {
                  iVar9 = iVar9 + 0x10;
                  piVar1 = realloc(__ptr,iVar9 * 4);
                  if (piVar1 == (int *)0x0) {
                    drmFreeDevices(__ptr,iVar7);
                    closedir(__dirp);
                    local_10b8 = 0;
                    goto LAB_00017568;
                  }
                }
                piVar1[iVar7] = local_10a4;
                iVar7 = iVar7 + 1;
                __ptr = piVar1;
              }
            }
          }
          goto switchD_00017618_default;
        }
        FUN_000170d4(__ptr,iVar7);
        local_10b8 = 0;
        piVar1 = __ptr;
        while (piVar8 = piVar1, piVar8 != __ptr + iVar7) {
          piVar1 = piVar8 + 1;
          if (*piVar8 != 0) {
            iVar9 = 0;
            if (param_2 != 0) {
              iVar9 = local_10b8 - param_3;
            }
            if (iVar9 < 0 == (param_2 != 0 && SBORROW4(local_10b8,param_3))) {
              drmFreeDevice(piVar8);
            }
            else {
              *(int *)(param_2 + local_10b8 * 4) = *piVar8;
            }
            local_10b8 = local_10b8 + 1;
          }
        }
        closedir(__dirp);
        free(__ptr);
      }
    }
  }
  else {
    local_10b8 = -0x16;
  }
  return local_10b8;
}



/* ===== drmGetDevices @ 000177bc size=28 ===== */

void drmGetDevices(undefined4 param_1,undefined4 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00013134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_drmGetDevices2_0002b094)(1,param_1,param_2);
  return;
}



/* ===== drmGetDeviceNameFromFd2 @ 000177cc size=204 ===== */

char * drmGetDeviceNameFromFd2(int param_1)

{
  int iVar1;
  uint uVar2;
  void *__ptr;
  char *pcVar3;
  stat64 sStack_1088;
  char acStack_101c [4104];
  
  iVar1 = fstat64(param_1,&sStack_1088);
  if (((iVar1 == 0) && (uVar2 = gnu_dev_major(sStack_1088.st_rdev), uVar2 == 0xe2)) &&
     ((sStack_1088.st_mode & 0xf000) == 0x2000)) {
    uVar2 = gnu_dev_minor(sStack_1088.st_rdev);
    snprintf(acStack_101c,0x1001,(char *)(DAT_00017898 + 0x17850),0xe2,uVar2);
    __ptr = (void *)FUN_0001377c(acStack_101c,DAT_0001789c + 0x17864);
    if (__ptr != (void *)0x0) {
      snprintf(acStack_101c,0x1001,(char *)(DAT_000178a0 + 0x17884),__ptr,uVar2);
      free(__ptr);
      pcVar3 = strdup(acStack_101c);
      return pcVar3;
    }
  }
  return (char *)0x0;
}



/* ===== drmSyncobjCreate @ 000178a4 size=52 ===== */

void drmSyncobjCreate(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = 0;
  local_c = param_2;
  iVar1 = drmIoctl(param_1,DAT_000178d8,&local_10);
  if (iVar1 == 0) {
    *param_3 = local_10;
  }
  return;
}



/* ===== drmSyncobjDestroy @ 000178dc size=32 ===== */

void drmSyncobjDestroy(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_c = 0;
  local_10 = param_2;
  uStack_8 = param_3;
  drmIoctl(param_1,DAT_000178fc,&local_10);
  return;
}



/* ===== drmSyncobjHandleToFD @ 00017900 size=64 ===== */

void drmSyncobjHandleToFD(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_14 = 0;
  uStack_c = 0;
  uStack_10 = 0xffffffff;
  local_18 = param_2;
  iVar1 = drmIoctl(param_1,DAT_00017940,&local_18);
  if (iVar1 == 0) {
    *param_3 = uStack_10;
  }
  return;
}



/* ===== drmSyncobjFDToHandle @ 00017944 size=52 ===== */

void drmSyncobjFDToHandle(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = drmIoctl(param_1,DAT_00017978);
  if (iVar1 == 0) {
    *param_3 = 0;
  }
  return;
}



/* ===== drmSyncobjImportSyncFile @ 0001797c size=44 ===== */

void drmSyncobjImportSyncFile(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 uStack_c;
  
  uStack_c = 0;
  local_14 = 1;
  local_18 = param_2;
  local_10 = param_3;
  drmIoctl(param_1,DAT_000179a8,&local_18);
  return;
}



/* ===== drmSyncobjExportSyncFile @ 000179ac size=64 ===== */

void drmSyncobjExportSyncFile(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = 0xffffffff;
  uStack_c = 0;
  local_14 = 1;
  local_18 = param_2;
  iVar1 = drmIoctl(param_1,DAT_000179ec,&local_18);
  if (iVar1 == 0) {
    *param_3 = local_10;
  }
  return;
}



/* ===== drmSyncobjWait @ 000179f0 size=100 ===== */

void drmSyncobjWait(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  uint uVar1;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  
  local_18 = 0;
  local_30 = VectorShiftRight(CONCAT44(param_2,param_2),0x20);
  local_1c = param_7;
  local_28 = param_5;
  uStack_24 = param_6;
  local_20 = param_3;
  uVar1 = drmIoctl(param_1,DAT_00017a54,&local_30);
  uVar1 = ~uVar1 >> 0x1f;
  if (param_8 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    *param_8 = (undefined4)local_18;
  }
  return;
}



/* ===== drmSyncobjReset @ 00017a58 size=40 ===== */

void drmSyncobjReset(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 local_c;
  
  uStack_14 = 0;
  local_c = 0;
  local_18 = param_2;
  local_10 = param_3;
  drmIoctl(param_1,DAT_00017a80,&local_18);
  return;
}



/* ===== drmSyncobjSignal @ 00017a84 size=40 ===== */

void drmSyncobjSignal(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 local_c;
  
  uStack_14 = 0;
  local_c = 0;
  local_18 = param_2;
  local_10 = param_3;
  drmIoctl(param_1,DAT_00017aac,&local_18);
  return;
}



/* ===== FUN_00017ab0 @ 00017ab0 size=284 ===== */

void FUN_00017ab0(int param_1,uint param_2,uint *param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  
  piVar9 = (int *)(DAT_00017bcc + 0x17acc);
  if (*piVar9 == 0) {
    uVar2 = drmRandomCreate(0x25);
    iVar10 = 0;
    do {
      piVar9 = piVar9 + 1;
      iVar10 = iVar10 + 1;
      iVar3 = drmRandom(uVar2);
      *piVar9 = iVar3;
    } while (iVar10 != 0x100);
    drmRandomDestroy(uVar2);
    *(int *)(DAT_00017bd0 + 0x17b10) = *(int *)(DAT_00017bd0 + 0x17b10) + 1;
  }
  uVar8 = 0;
  for (uVar6 = param_2; uVar6 != 0; uVar6 = uVar6 >> 8) {
    uVar8 = *(int *)(DAT_00017bd4 + (uVar6 & 0xff) * 4 + 0x17b30) + uVar8 * 2;
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = uVar8 & 0x1ff;
  }
  iVar10 = param_1 + (uVar8 & 0x1ff) * 4;
  puVar5 = *(uint **)(iVar10 + 0x14);
  puVar1 = puVar5;
  puVar7 = (uint *)0x0;
  while( true ) {
    puVar4 = puVar1;
    if (puVar4 == (uint *)0x0) {
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      return;
    }
    if (*puVar4 == param_2) break;
    puVar1 = (uint *)puVar4[2];
    puVar7 = puVar4;
  }
  if (puVar7 != (uint *)0x0) {
    puVar7[2] = puVar4[2];
    puVar4[2] = (uint)puVar5;
    *(uint **)(iVar10 + 0x14) = puVar4;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    return;
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return;
}



/* ===== drmHashCreate @ 00017bd8 size=72 ===== */

void drmHashCreate(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar2 = (undefined4 *)drmMalloc(0x81c);
  uVar1 = DAT_00017c20;
  if (puVar2 == (undefined4 *)0x0) {
    return;
  }
  puVar2[2] = 0;
  *puVar2 = uVar1;
  puVar2[1] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar3 = puVar2 + 5;
  do {
    puVar4 = puVar3 + 1;
    *puVar3 = 0;
    puVar3 = puVar4;
  } while (puVar4 != puVar2 + 0x205);
  return;
}



/* ===== drmHashDestroy @ 00017c24 size=100 ===== */

undefined4 drmHashDestroy(int *param_1)

{
  void *__ptr;
  int *piVar1;
  void *pvVar3;
  int *piVar2;
  
  if (*param_1 == DAT_00017c88) {
    piVar1 = param_1 + 5;
    do {
      piVar2 = piVar1 + 1;
      __ptr = (void *)*piVar1;
      while (__ptr != (void *)0x0) {
        pvVar3 = *(void **)((int)__ptr + 8);
        drmFree(__ptr);
        __ptr = pvVar3;
      }
      piVar1 = piVar2;
    } while (piVar2 != param_1 + 0x205);
    drmFree(param_1);
    return 0;
  }
  return 0xffffffff;
}



/* ===== drmHashLookup @ 00017c8c size=80 ===== */

undefined4 drmHashLookup(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  
  if ((param_1 != (int *)0x0) && (*param_1 == DAT_00017cdc)) {
    iVar1 = FUN_00017ab0(param_1,param_2,0);
    if (iVar1 != 0) {
      *param_3 = *(undefined4 *)(iVar1 + 4);
      return 0;
    }
    return 1;
  }
  return 0xffffffff;
}



/* ===== drmHashInsert @ 00017ce0 size=116 ===== */

undefined4 drmHashInsert(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int local_1c;
  int iStack_18;
  
  if (*param_1 == DAT_00017d54) {
    local_1c = param_2;
    iStack_18 = param_3;
    iVar1 = FUN_00017ab0(param_1,param_2,&local_1c,param_4,param_1);
    if (iVar1 != 0) {
      return 1;
    }
    piVar2 = (int *)drmMalloc(0xc);
    if (piVar2 != (int *)0x0) {
      *piVar2 = param_2;
      piVar2[1] = param_3;
      piVar2[2] = param_1[local_1c + 5];
      param_1[local_1c + 5] = (int)piVar2;
      return 0;
    }
  }
  return 0xffffffff;
}



/* ===== drmHashDelete @ 00017d58 size=80 ===== */

undefined4 drmHashDelete(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  void *__ptr;
  int local_c;
  
  if (*param_1 == DAT_00017da8) {
    local_c = param_2;
    __ptr = (void *)FUN_00017ab0(param_1,param_2,&local_c,param_4,param_1);
    if (__ptr == (void *)0x0) {
      uVar1 = 1;
    }
    else {
      param_1[local_c + 5] = *(int *)((int)__ptr + 8);
      drmFree(__ptr);
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* ===== drmHashNext @ 00017dac size=92 ===== */

undefined4 drmHashNext(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  while( true ) {
    iVar1 = *(int *)(param_1 + 0x814);
    if (0x1ff < iVar1) {
      return 0;
    }
    puVar2 = *(undefined4 **)(param_1 + 0x818);
    if (puVar2 != (undefined4 *)0x0) break;
    uVar3 = *(undefined4 *)(param_1 + iVar1 * 4 + 0x14);
    *(int *)(param_1 + 0x814) = iVar1 + 1;
    *(undefined4 *)(param_1 + 0x818) = uVar3;
  }
  *param_2 = *puVar2;
  *param_3 = puVar2[1];
  *(undefined4 *)(param_1 + 0x818) = *(undefined4 *)(*(int *)(param_1 + 0x818) + 8);
  return 1;
}



/* ===== drmHashFirst @ 00017e08 size=64 ===== */

undefined4 drmHashFirst(int *param_1)

{
  undefined4 uVar1;
  
  if (*param_1 == DAT_00017e3c) {
    param_1[0x205] = 0;
    param_1[0x206] = param_1[5];
                    /* WARNING: Could not recover jumptable at 0x00013320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)PTR_drmHashNext_0002b138)();
    return uVar1;
  }
  return 0xffffffff;
}



/* ===== drmRandomCreate @ 00017e40 size=104 ===== */

void drmRandomCreate(uint param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)drmMalloc(0x1c);
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
  *puVar1 = DAT_00017ea8;
  puVar1[1] = 0xbc8f;
  puVar1[2] = 0x7fffffff;
  puVar1[5] = DAT_00017eac;
  puVar1[3] = 0xadc8;
  puVar1[4] = 0xd47;
  if (param_1 == 0) {
    uVar2 = 1;
  }
  else {
    if (param_1 < 0x7fffffff) {
      puVar1[6] = param_1;
      return;
    }
    uVar2 = 0x7ffffffe;
  }
  puVar1[6] = uVar2;
  return;
}



/* ===== drmRandomDestroy @ 00017eb0 size=16 ===== */

undefined4 drmRandomDestroy(void *param_1)

{
  drmFree(param_1);
  return 0;
}



/* ===== drmRandom @ 00017ec0 size=64 ===== */

undefined4 drmRandom(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  
  uVar3 = *(uint *)(param_1 + 0x18) / *(uint *)(param_1 + 0xc);
  uVar2 = *(int *)(param_1 + 0x10) * uVar3;
  uVar3 = *(int *)(param_1 + 4) * (*(uint *)(param_1 + 0x18) - *(uint *)(param_1 + 0xc) * uVar3);
  bVar5 = uVar3 < uVar2;
  bVar4 = uVar3 - uVar2 == 0;
  iVar1 = uVar3 - uVar2;
  if (bVar5 || bVar4) {
    uVar2 = *(uint *)(param_1 + 8);
  }
  *(int *)(param_1 + 0x18) = iVar1;
  if (bVar5 || bVar4) {
    *(uint *)(param_1 + 0x18) = uVar2 + iVar1;
  }
  return *(undefined4 *)(param_1 + 0x18);
}



/* ===== drmRandomDouble @ 00017f00 size=36 ===== */

undefined4 drmRandomDouble(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;
  double dVar2;
  double dVar3;
  
  uVar1 = drmRandom();
  dVar2 = (double)VectorUnsignedToFloat(*(undefined4 *)(param_1 + 8),(byte)(in_fpscr >> 0x16) & 3);
  dVar3 = (double)VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
  return SUB84(dVar3 / dVar2,0);
}



/* ===== FUN_00017f24 @ 00017f24 size=116 ===== */

undefined4 FUN_00017f24(int *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*param_1 != DAT_00017f98) {
    return 0;
  }
  iVar2 = param_1[1];
  iVar1 = param_1[3];
  if (iVar2 < 0) {
    return *(undefined4 *)(iVar1 + 0x10);
  }
  do {
    iVar3 = iVar1;
    do {
      iVar1 = iVar3;
      iVar3 = *(int *)(iVar1 + (iVar2 + 4) * 4);
      if (iVar3 == 0) break;
    } while (*(uint *)(iVar3 + 4) < param_2);
    *(int *)(param_3 + iVar2 * 4) = iVar1;
    iVar2 = iVar2 + -1;
    if (iVar2 < 0) {
      return *(undefined4 *)(iVar1 + 0x10);
    }
  } while( true );
}



/* ===== drmSLCreate @ 00017f9c size=108 ===== */

undefined4 * drmSLCreate(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar2 = (undefined4 *)drmMalloc(0x14);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = DAT_00018008;
    puVar2[1] = 0;
    puVar3 = (undefined4 *)drmMalloc(0x58);
    uVar1 = DAT_0001800c;
    if (puVar3 != (undefined4 *)0x0) {
      puVar3[2] = 0;
      *puVar3 = uVar1;
      puVar3[1] = 0;
      puVar3[3] = 0x11;
    }
    puVar2[3] = puVar3;
    puVar2[2] = 0;
    puVar4 = puVar3 + 4;
    do {
      puVar5 = puVar4 + 1;
      *puVar4 = 0;
      puVar4 = puVar5;
    } while (puVar3 + 0x15 != puVar5);
  }
  return puVar2;
}



/* ===== drmSLDestroy @ 00018010 size=120 ===== */

undefined4 drmSLDestroy(int *param_1)

{
  int iVar1;
  int iVar2;
  int *__ptr;
  int *piVar3;
  
  iVar2 = DAT_00018090;
  iVar1 = DAT_0001808c;
  if (*param_1 != DAT_00018088) {
    return 0xffffffff;
  }
  __ptr = (int *)param_1[3];
  while( true ) {
    if (__ptr == (int *)0x0) {
      *param_1 = DAT_00018090;
      drmFree(param_1);
      return 0;
    }
    if (*__ptr != iVar1) break;
    piVar3 = (int *)__ptr[4];
    *__ptr = iVar2;
    drmFree(__ptr);
    __ptr = piVar3;
  }
  return 0xffffffff;
}



/* ===== drmSLInsert @ 00018094 size=316 ===== */

undefined4 drmSLInsert(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  int local_64 [18];
  
  if (*param_1 != DAT_000181d0) {
    return 0xffffffff;
  }
  uVar8 = FUN_00017f24(param_1,param_2,local_64);
  if (((int)uVar8 == 0) || (*(int *)((int)uVar8 + 4) != (int)((ulonglong)uVar8 >> 0x20))) {
    piVar5 = (int *)(DAT_000181d4 + 0x180e8);
    if (*piVar5 == 0) {
      iVar2 = drmRandomCreate(DAT_000181d8);
      *piVar5 = iVar2;
    }
    puVar7 = (undefined4 *)(DAT_000181dc + 0x1810c);
    for (uVar6 = 1; (uVar3 = drmRandom(*puVar7), (uVar3 & 1) != 0 && (uVar6 != 0x10));
        uVar6 = uVar6 + 1) {
    }
    uVar3 = uVar6;
    if (param_1[1] < (int)uVar6) {
      uVar3 = param_1[1] + 1;
      param_1[1] = uVar3;
      uVar6 = uVar3;
      if (0x10 < uVar3) {
        uVar6 = 0x10;
      }
      local_64[uVar3] = param_1[3];
    }
    puVar7 = (undefined4 *)drmMalloc((uVar6 + 6) * 4);
    uVar1 = DAT_000181e0;
    if (puVar7 != (undefined4 *)0x0) {
      puVar7[3] = uVar6 + 1;
      *puVar7 = uVar1;
      puVar7[1] = param_2;
      puVar7[2] = param_3;
    }
    puVar4 = puVar7 + 4;
    piVar5 = local_64;
    for (iVar2 = 0; iVar2 <= (int)uVar3; iVar2 = iVar2 + 1) {
      *puVar4 = *(undefined4 *)(*piVar5 + (iVar2 + 4) * 4);
      *(undefined4 **)(*piVar5 + (iVar2 + 4) * 4) = puVar7;
      puVar4 = puVar4 + 1;
      piVar5 = piVar5 + 1;
    }
    uVar1 = 0;
    param_1[2] = param_1[2] + 1;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* ===== drmSLDelete @ 000181e4 size=204 ===== */

undefined4 drmSLDelete(int *param_1,undefined4 param_2)

{
  undefined4 *__ptr;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int local_54 [17];
  
  if (*param_1 == DAT_000182b0) {
    uVar6 = FUN_00017f24(param_1,param_2,local_54);
    __ptr = (undefined4 *)uVar6;
    if ((__ptr == (undefined4 *)0x0) || (__ptr[1] != (int)((ulonglong)uVar6 >> 0x20))) {
      uVar1 = 1;
    }
    else {
      iVar2 = param_1[1];
      iVar5 = 0;
      while (iVar4 = iVar5, iVar4 <= iVar2) {
        iVar3 = local_54[iVar4] + iVar4 * 4;
        iVar5 = iVar4 + 1;
        if (*(undefined4 **)(iVar3 + 0x10) == __ptr) {
          *(undefined4 *)(iVar3 + 0x10) = __ptr[iVar4 + 4];
          iVar5 = iVar4 + 1;
        }
      }
      *__ptr = DAT_000182b4;
      drmFree(__ptr);
      while ((iVar5 = param_1[1], iVar5 != 0 && (*(int *)(param_1[3] + (iVar5 + 4) * 4) == 0))) {
        param_1[1] = iVar5 + -1;
      }
      uVar1 = 0;
      param_1[2] = param_1[2] + -1;
    }
    return uVar1;
  }
  return 0xffffffff;
}



/* ===== drmSLLookup @ 000182b8 size=64 ===== */

undefined4 drmSLLookup(undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_54 [72];
  
  uVar3 = FUN_00017f24(param_1,param_2,auStack_54);
  iVar2 = (int)uVar3;
  if (iVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else if (*(int *)(iVar2 + 4) == (int)((ulonglong)uVar3 >> 0x20)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
    iVar2 = 0;
  }
  *param_3 = iVar2;
  return uVar1;
}



/* ===== drmSLLookupNeighbors @ 000182f8 size=156 ===== */

undefined4
drmSLLookupNeighbors
          (undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
          undefined4 *param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int local_64 [17];
  
  memset(local_64,0,0x44);
  FUN_00017f24(param_1,param_2,local_64);
  *param_5 = param_2;
  *param_3 = param_2;
  *param_6 = 0;
  *param_4 = 0;
  uVar1 = 0;
  if (local_64[0] != 0) {
    *param_3 = *(undefined4 *)(local_64[0] + 4);
    *param_4 = *(undefined4 *)(local_64[0] + 8);
    iVar2 = *(int *)(local_64[0] + 0x10);
    if (iVar2 == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = 2;
      uVar3 = *(undefined4 *)(iVar2 + 8);
      *param_5 = *(undefined4 *)(iVar2 + 4);
      *param_6 = uVar3;
    }
  }
  return uVar1;
}



/* ===== drmSLNext @ 00018394 size=76 ===== */

undefined4 drmSLNext(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*param_1 != DAT_000183e0) {
    return 0xffffffff;
  }
  iVar1 = param_1[4];
  if (iVar1 != 0) {
    param_1[4] = *(int *)(iVar1 + 0x10);
    uVar2 = *(undefined4 *)(iVar1 + 8);
    *param_2 = *(undefined4 *)(iVar1 + 4);
    *param_3 = uVar2;
    return 1;
  }
  return 0;
}



/* ===== drmSLFirst @ 000183e4 size=60 ===== */

undefined4 drmSLFirst(int *param_1)

{
  undefined4 uVar1;
  
  if (*param_1 == DAT_00018414) {
    param_1[4] = *(int *)(param_1[3] + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00013350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)PTR_drmSLNext_0002b148)();
    return uVar1;
  }
  return 0xffffffff;
}



/* ===== drmSLDump @ 00018418 size=244 ===== */

void drmSLDump(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  char *__format;
  char *__format_00;
  
  iVar1 = DAT_0001851c;
  if (*param_1 == DAT_0001850c) {
    __format = (char *)(DAT_00018514 + 0x18460);
    piVar3 = param_1;
    printf((char *)(DAT_00018518 + 0x1845c),param_1[1],param_1[2],param_4,param_1,param_2);
    for (piVar4 = (int *)param_1[3]; piVar4 != (int *)0x0; piVar4 = (int *)piVar4[4]) {
      if (*piVar4 != iVar1) {
        printf((char *)(DAT_00018520 + 0x18494),*param_1,iVar1,*piVar4,piVar3,param_2);
      }
      piVar3 = (int *)piVar4[3];
      __format_00 = (char *)(DAT_00018528 + 0x184c0);
      printf((char *)(DAT_00018524 + 0x184b8),piVar4,piVar4[1],piVar4[2],piVar3,param_2);
      piVar6 = piVar4 + 4;
      for (iVar5 = 0; iVar5 < piVar4[3]; iVar5 = iVar5 + 1) {
        iVar2 = *piVar6;
        if (iVar2 == 0) {
          printf(__format,iVar5,0,piVar4[3],piVar3);
        }
        else {
          piVar3 = *(int **)(iVar2 + 8);
          printf(__format_00,iVar5,iVar2,*(undefined4 *)(iVar2 + 4),piVar3);
        }
        piVar6 = piVar6 + 1;
      }
    }
    return;
  }
  printf((char *)(DAT_00018510 + 0x18438));
  return;
}



/* ===== FUN_00018560 @ 00018560 size=120 ===== */

int FUN_00018560(int param_1,int param_2,size_t param_3)

{
  void *__dest;
  void *__src;
  uint unaff_r4;
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    unaff_r4 = 1;
  }
  if (param_1 != 0) {
    unaff_r4 = (uint)(param_3 == 0);
  }
  if (param_2 == 0) {
    unaff_r4 = 1;
  }
  if ((unaff_r4 == 0) && (iVar2 = drmMalloc(param_3 * param_2), iVar2 != 0)) {
    iVar1 = 0;
    for (iVar3 = 0; iVar3 < param_2; iVar3 = iVar3 + 1) {
      __src = (void *)(param_1 + iVar1);
      __dest = (void *)(iVar2 + iVar1);
      iVar1 = iVar1 + param_3;
      memcpy(__dest,__src,param_3);
    }
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}



/* ===== FUN_000188d0 @ 000188d0 size=32 ===== */

int FUN_000188d0(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = drmIoctl();
  if (-1 < iVar1) {
    return iVar1;
  }
  piVar2 = __errno_location();
  return -*piVar2;
}



/* ===== drmModeFreeModeInfo @ 000188f0 size=12 ===== */

void drmModeFreeModeInfo(void *param_1)

{
  if (param_1 == (void *)0x0) {
    return;
  }
  drmFree(param_1);
  return;
}



/* ===== drmModeFreeResources @ 000188fc size=56 ===== */

void drmModeFreeResources(void *param_1)

{
  if (param_1 == (void *)0x0) {
    return;
  }
  drmFree(*(void **)((int)param_1 + 4));
  drmFree(*(void **)((int)param_1 + 0xc));
  drmFree(*(void **)((int)param_1 + 0x14));
  drmFree(*(void **)((int)param_1 + 0x1c));
  drmFree(param_1);
  return;
}



/* ===== drmModeFreeFB @ 00018934 size=12 ===== */

void drmModeFreeFB(void *param_1)

{
  if (param_1 == (void *)0x0) {
    return;
  }
  drmFree(param_1);
  return;
}



/* ===== drmModeFreeCrtc @ 00018940 size=12 ===== */

void drmModeFreeCrtc(void *param_1)

{
  if (param_1 == (void *)0x0) {
    return;
  }
  drmFree(param_1);
  return;
}



/* ===== drmModeFreeConnector @ 0001894c size=56 ===== */

void drmModeFreeConnector(void *param_1)

{
  if (param_1 == (void *)0x0) {
    return;
  }
  drmFree(*(void **)((int)param_1 + 0x38));
  drmFree(*(void **)((int)param_1 + 0x30));
  drmFree(*(void **)((int)param_1 + 0x2c));
  drmFree(*(void **)((int)param_1 + 0x24));
  drmFree(param_1);
  return;
}



/* ===== drmModeFreeEncoder @ 00018984 size=4 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void drmModeFreeEncoder(void *__ptr)

{
  (*(code *)PTR_drmFree_0002b0c0)(__ptr);
  return;
}



/* ===== drmModeGetResources @ 00018988 size=712 ===== */

undefined4 * drmModeGetResources(undefined4 param_1)

{
  void *pvVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  undefined4 *__ptr;
  undefined4 uVar6;
  void *pvVar7;
  uint uVar8;
  void *pvVar9;
  void *local_70;
  uint uStack_6c;
  void *local_68;
  undefined4 local_64;
  void *local_60;
  uint uStack_5c;
  void *local_58;
  uint uStack_54;
  void *local_50;
  uint uStack_4c;
  void *local_48;
  uint uStack_44;
  void *local_40;
  uint uStack_3c;
  void *local_38;
  uint uStack_34;
  
  pvVar7 = (void *)0x0;
  uVar8 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  pvVar9 = *(void **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uVar6 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  while( true ) {
    local_70 = pvVar7;
    uStack_6c = uVar8;
    local_68 = pvVar9;
    local_64 = uVar6;
    local_60 = pvVar7;
    uStack_5c = uVar8;
    local_58 = pvVar7;
    uStack_54 = uVar8;
    local_50 = pvVar7;
    uStack_4c = uVar8;
    local_48 = pvVar7;
    uStack_44 = uVar8;
    local_40 = pvVar7;
    uStack_3c = uVar8;
    local_38 = pvVar7;
    uStack_34 = uVar8;
    iVar5 = drmIoctl(param_1,DAT_00018c50,&local_70);
    uVar4 = uStack_44;
    pvVar3 = local_48;
    uVar2 = uStack_4c;
    pvVar1 = local_50;
    if (iVar5 != 0) {
      return (undefined4 *)0x0;
    }
    if (local_50 != (void *)0x0) break;
LAB_000189ec:
    if (uStack_4c != 0) {
      local_68 = (void *)drmMalloc(uStack_4c << 2);
      local_64 = 0;
      if (local_68 == (void *)0x0) goto LAB_00018ac8;
    }
    if (local_48 != (void *)0x0) {
      local_60 = (void *)drmMalloc((int)local_48 << 2);
      uStack_5c = 0;
      if (local_60 == (void *)0x0) goto LAB_00018ac8;
    }
    if (uStack_44 != 0) {
      local_58 = (void *)drmMalloc(uStack_44 << 2);
      uStack_54 = 0;
      if (local_58 == (void *)0x0) goto LAB_00018ac8;
    }
    iVar5 = drmIoctl(param_1,DAT_00018c50,&local_70);
    if (iVar5 != 0) goto LAB_00018ac8;
    if ((((local_50 <= pvVar1) && (uStack_4c <= uVar2)) && (local_48 <= pvVar3)) &&
       (uStack_44 <= uVar4)) {
      __ptr = (undefined4 *)drmMalloc(0x30);
      if (__ptr != (undefined4 *)0x0) {
        __ptr[8] = local_40;
        __ptr[9] = uStack_3c;
        __ptr[10] = local_38;
        *__ptr = local_50;
        __ptr[0xb] = uStack_34;
        __ptr[2] = uStack_4c;
        __ptr[4] = local_48;
        __ptr[6] = uStack_44;
        uVar6 = FUN_00018560(local_70,local_50,4);
        __ptr[1] = uVar6;
        uVar6 = FUN_00018560(local_68,uStack_4c,4);
        __ptr[3] = uVar6;
        uVar6 = FUN_00018560(local_60,local_48,4);
        __ptr[5] = uVar6;
        iVar5 = FUN_00018560(local_58,uStack_44,4);
        __ptr[7] = iVar5;
        if (((((local_50 == (void *)0x0) || (__ptr[1] != 0)) &&
             ((uStack_4c == 0 || (__ptr[3] != 0)))) &&
            ((local_48 == (void *)0x0 || (__ptr[5] != 0)))) && (uStack_44 == 0 || iVar5 != 0))
        goto LAB_00018acc;
        drmFree((void *)__ptr[1]);
        drmFree((void *)__ptr[3]);
        drmFree((void *)__ptr[5]);
        drmFree((void *)__ptr[7]);
        drmFree(__ptr);
      }
      goto LAB_00018ac8;
    }
    drmFree(local_70);
    drmFree(local_68);
    drmFree(local_60);
    drmFree(local_58);
  }
  local_70 = (void *)drmMalloc((int)local_50 << 2);
  uStack_6c = 0;
  if (local_70 != (void *)0x0) goto LAB_000189ec;
LAB_00018ac8:
  __ptr = (undefined4 *)0x0;
LAB_00018acc:
  drmFree(local_70);
  drmFree(local_68);
  drmFree(local_60);
  drmFree(local_58);
  return __ptr;
}



/* ===== drmModeAddFB @ 00018c54 size=84 ===== */

void drmModeAddFB(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 byte param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  int iVar1;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  undefined4 uStack_10;
  undefined4 local_c;
  
  local_18 = param_6;
  local_14 = (uint)param_5;
  local_24 = 0;
  local_c = param_7;
  local_20 = param_2;
  local_1c = param_3;
  uStack_10 = param_4;
  iVar1 = FUN_000188d0(param_1,DAT_00018ca8,&local_24);
  if (iVar1 == 0) {
    *param_8 = local_24;
  }
  return;
}



/* ===== drmModeAddFB2WithModifiers @ 00018cac size=292 ===== */

void drmModeAddFB2WithModifiers
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,
               undefined4 *param_9,undefined4 param_10)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74 [13];
  undefined4 local_40 [9];
  
  memset(&local_88,0,0x68);
  puVar5 = local_74;
  local_78 = param_10;
  puVar4 = param_5;
  do {
    puVar3 = puVar4 + 2;
    uVar2 = puVar4[1];
    *puVar5 = *puVar4;
    puVar5[1] = uVar2;
    puVar5 = puVar5 + 2;
    puVar4 = puVar3;
  } while (puVar3 != param_5 + 4);
  puVar5 = local_74 + 4;
  puVar4 = param_6;
  do {
    puVar3 = puVar4 + 2;
    uVar2 = puVar4[1];
    *puVar5 = *puVar4;
    puVar5[1] = uVar2;
    puVar5 = puVar5 + 2;
    puVar4 = puVar3;
  } while (puVar3 != param_6 + 4);
  puVar5 = local_74 + 8;
  puVar4 = param_7;
  do {
    puVar3 = puVar4 + 2;
    uVar2 = puVar4[1];
    *puVar5 = *puVar4;
    puVar5[1] = uVar2;
    puVar5 = puVar5 + 2;
    puVar4 = puVar3;
  } while (puVar3 != param_7 + 4);
  if (param_8 != (undefined4 *)0x0) {
    puVar5 = local_40;
    puVar4 = param_8;
    do {
      puVar3 = puVar4 + 2;
      uVar2 = puVar4[1];
      *puVar5 = *puVar4;
      puVar5[1] = uVar2;
      puVar5 = puVar5 + 2;
      puVar4 = puVar3;
    } while (puVar3 != param_8 + 8);
  }
  local_84 = param_2;
  local_80 = param_3;
  local_7c = param_4;
  iVar1 = FUN_000188d0(param_1,DAT_00018dd0,&local_88);
  if (iVar1 == 0) {
    *param_9 = local_88;
  }
  return;
}



/* ===== drmModeAddFB2 @ 00018dd4 size=64 ===== */

void drmModeAddFB2(void)

{
  drmModeAddFB2WithModifiers();
  return;
}



/* ===== drmModeRmFB @ 00018e14 size=28 ===== */

void drmModeRmFB(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_c;
  undefined4 uStack_8;
  
  local_c = param_2;
  uStack_8 = param_3;
  FUN_000188d0(param_1,DAT_00018e30,&local_c,param_4,param_1);
  return;
}



/* ===== drmModeGetFB @ 00018e34 size=132 ===== */

undefined4 * drmModeGetFB(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 uStack_c;
  
  uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_18 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  local_14 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_20 = 0;
  local_10 = 0;
  local_24 = param_2;
  uStack_c = uStack_1c;
  iVar1 = drmIoctl(param_1,DAT_00018eb8,&local_24);
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)drmMalloc(0x1c);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = local_24;
      puVar2[1] = local_20;
      puVar2[2] = uStack_1c;
      puVar2[3] = local_18;
      puVar2[4] = local_14;
      puVar2[6] = uStack_c;
      puVar2[5] = local_10;
    }
  }
  else {
    puVar2 = (undefined4 *)0x0;
  }
  return puVar2;
}



/* ===== drmModeDirtyFB @ 00018ebc size=52 ===== */

void drmModeDirtyFB(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_20;
  undefined8 local_1c;
  undefined4 local_14;
  
  local_1c = 0;
  local_20 = param_2;
  local_14 = param_4;
  FUN_000188d0(param_1,DAT_00018ef0,&local_20);
  return;
}



/* ===== drmModeGetCrtc @ 00018ef4 size=188 ===== */

undefined4 * drmModeGetCrtc(undefined4 param_1,undefined4 param_2)

{
  void *pvVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 auStack_78 [12];
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  undefined1 auStack_54 [4];
  ushort local_50;
  ushort local_46;
  
  pvVar1 = memset(auStack_78,0,0x68);
  local_6c = param_2;
  iVar2 = drmIoctl(param_1,DAT_00018fb0,pvVar1);
  if ((iVar2 == 0) && (puVar3 = (undefined4 *)drmMalloc(100), puVar3 != (undefined4 *)0x0)) {
    *puVar3 = local_6c;
    puVar3[2] = local_64;
    puVar3[3] = local_60;
    puVar3[6] = local_58;
    if (local_58 != 0) {
      memcpy(puVar3 + 7,auStack_54,0x44);
      puVar3[4] = (uint)local_50;
      puVar3[5] = (uint)local_46;
    }
    puVar3[1] = local_68;
    puVar3[0x18] = local_5c;
  }
  else {
    puVar3 = (undefined4 *)0x0;
  }
  return puVar3;
}



/* ===== drmModeSetCrtc @ 00018fb4 size=144 ===== */

void drmModeSetCrtc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5,undefined4 param_6,undefined4 param_7,void *param_8)

{
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 auStack_64 [4];
  undefined4 local_60;
  undefined1 auStack_5c [68];
  
  memset(auStack_64,0,0x4c);
  local_68 = param_5;
  local_80 = param_6;
  local_7c = 0;
  local_78 = param_7;
  local_74 = param_2;
  local_70 = param_3;
  local_6c = param_4;
  if (param_8 != (void *)0x0) {
    memcpy(auStack_5c,param_8,0x44);
    local_60 = 1;
  }
  FUN_000188d0(param_1,DAT_00019044,&local_80);
  return;
}



/* ===== drmModeSetCursor @ 00019048 size=64 ===== */

void drmModeSetCursor(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5)

{
  undefined4 local_24;
  undefined4 local_20;
  undefined8 local_1c;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_1c = 0;
  local_24 = 1;
  local_10 = param_5;
  local_20 = param_2;
  local_14 = param_4;
  local_c = param_3;
  FUN_000188d0(param_1,DAT_00019088,&local_24);
  return;
}



/* ===== drmModeSetCursor2 @ 0001908c size=80 ===== */

void drmModeSetCursor2(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                      undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 local_2c;
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_18 = param_5;
  local_10 = param_6;
  local_24 = 0;
  local_2c = 1;
  local_c = param_7;
  local_28 = param_2;
  local_1c = param_4;
  local_14 = param_3;
  FUN_000188d0(param_1,DAT_000190dc,&local_2c);
  return;
}



/* ===== drmModeMoveCursor @ 000190e0 size=56 ===== */

void drmModeMoveCursor(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_14 = 0;
  local_24 = 2;
  uStack_10 = 0;
  uStack_c = 0;
  local_20 = param_2;
  local_1c = param_3;
  uStack_18 = param_4;
  FUN_000188d0(param_1,DAT_00019118,&local_24);
  return;
}



/* ===== drmModeGetEncoder @ 0001911c size=108 ===== */

undefined4 * drmModeGetEncoder(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  uStack_14 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uVar1 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uVar2 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_18 = 0;
  local_1c = param_2;
  iVar3 = drmIoctl(param_1,DAT_00019188,&local_1c,&local_18,param_1);
  if (iVar3 == 0) {
    puVar4 = (undefined4 *)drmMalloc(0x14);
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = local_1c;
      puVar4[2] = uStack_14;
      puVar4[1] = local_18;
      puVar4[3] = uVar1;
      puVar4[4] = uVar2;
    }
  }
  else {
    puVar4 = (undefined4 *)0x0;
  }
  return puVar4;
}



/* ===== drmModeGetConnector @ 0001918c size=8 ===== */

/* WARNING: Removing unreachable block (ram,0x0001860c) */

undefined4 * drmModeGetConnector(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *__ptr;
  undefined4 uVar8;
  undefined1 auStack_bc [68];
  void *pvStack_78;
  uint uStack_74;
  undefined1 *puStack_70;
  uint uStack_6c;
  void *pvStack_68;
  int iStack_64;
  void *pvStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  
  memset(&pvStack_78,0,0x50);
  uStack_48 = param_2;
  iVar6 = drmIoctl(param_1,DAT_000188cc,&pvStack_78);
  uVar8 = DAT_000188cc;
  if (iVar6 != 0) {
    return (undefined4 *)0x0;
  }
  while( true ) {
    uVar5 = uStack_50;
    uVar4 = uStack_54;
    uVar2 = uStack_58;
    uVar1 = 0;
    if ((uStack_54 != 0) &&
       ((pvStack_68 = (void *)drmMalloc(uStack_54 << 2), iStack_64 = iVar6,
        pvStack_68 == (void *)0x0 ||
        (pvStack_60 = (void *)drmMalloc(uStack_54 << 3), uStack_5c = uVar1,
        pvStack_60 == (void *)0x0)))) goto LAB_0001870c;
    uVar3 = uStack_58;
    if (uStack_58 == 0) {
      uStack_58 = 1;
      uStack_6c = uVar3;
      puStack_70 = auStack_bc;
    }
    else {
      puStack_70 = (undefined1 *)drmMalloc(uStack_58 * 0x44);
      uStack_6c = uVar1;
      if (puStack_70 == (undefined1 *)0x0) goto LAB_0001870c;
    }
    if (((uStack_50 != 0) &&
        (pvStack_78 = (void *)drmMalloc(uStack_50 << 2), uStack_74 = uVar1,
        pvStack_78 == (void *)0x0)) || (iVar7 = drmIoctl(param_1,uVar8,&pvStack_78), iVar7 != 0))
    goto LAB_0001870c;
    if (((uStack_54 <= uVar4) && (uStack_58 <= uVar2)) && (uStack_50 <= uVar5)) break;
    drmFree(pvStack_68);
    drmFree(pvStack_60);
    if (puStack_70 != auStack_bc) {
      drmFree(puStack_70);
    }
    drmFree(pvStack_78);
  }
  __ptr = (undefined4 *)drmMalloc(0x3c);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = uStack_48;
    __ptr[1] = uStack_4c;
    __ptr[4] = uStack_3c;
    __ptr[5] = uStack_38;
    __ptr[6] = uStack_34;
    __ptr[10] = uStack_54;
    __ptr[7] = iStack_30 + 1;
    __ptr[8] = uStack_58;
    uVar8 = FUN_00018560(pvStack_68,uStack_54,4);
    __ptr[0xb] = uVar8;
    uVar8 = FUN_00018560(pvStack_60,uStack_54,8);
    __ptr[0xc] = uVar8;
    uVar8 = FUN_00018560(puStack_70,uStack_58,0x44);
    __ptr[9] = uVar8;
    __ptr[0xd] = uStack_50;
    iVar6 = FUN_00018560(pvStack_78,uStack_50,4);
    __ptr[0xe] = iVar6;
    __ptr[2] = uStack_44;
    __ptr[3] = uStack_40;
    if ((((__ptr[10] == 0) || ((__ptr[0xb] != 0 && (__ptr[0xc] != 0)))) &&
        ((__ptr[8] == 0 || (__ptr[9] != 0)))) && (__ptr[0xd] == 0 || iVar6 != 0)) goto LAB_00018710;
    drmFree((void *)__ptr[0xb]);
    drmFree((void *)__ptr[0xc]);
    drmFree((void *)__ptr[9]);
    drmFree((void *)__ptr[0xe]);
    drmFree(__ptr);
  }
LAB_0001870c:
  __ptr = (undefined4 *)0x0;
LAB_00018710:
  drmFree(pvStack_60);
  drmFree(pvStack_68);
  if (puStack_70 != auStack_bc) {
    drmFree(puStack_70);
  }
  drmFree(pvStack_78);
  return __ptr;
}



/* ===== drmModeGetConnectorCurrent @ 00019194 size=764 ===== */

undefined4 * drmModeGetConnectorCurrent(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *__ptr;
  undefined4 uVar8;
  undefined1 auStack_bc [68];
  void *local_78;
  uint local_74;
  undefined1 *local_70;
  uint local_6c;
  void *local_68;
  int local_64;
  void *local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  
  memset(&local_78,0,0x50);
  local_6c = 0;
  local_58 = 1;
  local_70 = auStack_bc;
  local_48 = param_2;
  iVar6 = drmIoctl(param_1,DAT_000188cc,&local_78);
  uVar8 = DAT_000188cc;
  if (iVar6 != 0) {
    return (undefined4 *)0x0;
  }
  while( true ) {
    uVar5 = local_50;
    uVar4 = local_54;
    uVar2 = local_58;
    uVar1 = 0;
    if ((local_54 != 0) &&
       ((local_68 = (void *)drmMalloc(local_54 << 2), local_64 = iVar6, local_68 == (void *)0x0 ||
        (local_60 = (void *)drmMalloc(local_54 << 3), local_5c = uVar1, local_60 == (void *)0x0))))
    goto LAB_0001870c;
    uVar3 = local_58;
    if (local_58 == 0) {
      local_58 = 1;
      local_6c = uVar3;
      local_70 = auStack_bc;
    }
    else {
      local_70 = (undefined1 *)drmMalloc(local_58 * 0x44);
      local_6c = uVar1;
      if (local_70 == (undefined1 *)0x0) goto LAB_0001870c;
    }
    if (((local_50 != 0) &&
        (local_78 = (void *)drmMalloc(local_50 << 2), local_74 = uVar1, local_78 == (void *)0x0)) ||
       (iVar7 = drmIoctl(param_1,uVar8,&local_78), iVar7 != 0)) goto LAB_0001870c;
    if (((local_54 <= uVar4) && (local_58 <= uVar2)) && (local_50 <= uVar5)) break;
    drmFree(local_68);
    drmFree(local_60);
    if (local_70 != auStack_bc) {
      drmFree(local_70);
    }
    drmFree(local_78);
  }
  __ptr = (undefined4 *)drmMalloc(0x3c);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = local_48;
    __ptr[1] = local_4c;
    __ptr[4] = local_3c;
    __ptr[5] = local_38;
    __ptr[6] = local_34;
    __ptr[10] = local_54;
    __ptr[7] = local_30 + 1;
    __ptr[8] = local_58;
    uVar8 = FUN_00018560(local_68,local_54,4);
    __ptr[0xb] = uVar8;
    uVar8 = FUN_00018560(local_60,local_54,8);
    __ptr[0xc] = uVar8;
    uVar8 = FUN_00018560(local_70,local_58,0x44);
    __ptr[9] = uVar8;
    __ptr[0xd] = local_50;
    iVar6 = FUN_00018560(local_78,local_50,4);
    __ptr[0xe] = iVar6;
    __ptr[2] = local_44;
    __ptr[3] = local_40;
    if ((((__ptr[10] == 0) || ((__ptr[0xb] != 0 && (__ptr[0xc] != 0)))) &&
        ((__ptr[8] == 0 || (__ptr[9] != 0)))) && (__ptr[0xd] == 0 || iVar6 != 0)) goto LAB_00018710;
    drmFree((void *)__ptr[0xb]);
    drmFree((void *)__ptr[0xc]);
    drmFree((void *)__ptr[9]);
    drmFree((void *)__ptr[0xe]);
    drmFree(__ptr);
  }
LAB_0001870c:
  __ptr = (undefined4 *)0x0;
LAB_00018710:
  drmFree(local_60);
  drmFree(local_68);
  if (local_70 != auStack_bc) {
    drmFree(local_70);
  }
  drmFree(local_78);
  return __ptr;
}



/* ===== drmModeAttachMode @ 0001919c size=60 ===== */

void drmModeAttachMode(undefined4 param_1,undefined4 param_2,void *param_3)

{
  undefined4 local_58;
  undefined1 auStack_54 [72];
  
  memcpy(auStack_54,param_3,0x44);
  local_58 = param_2;
  FUN_000188d0(param_1,DAT_000191d8,&local_58);
  return;
}



/* ===== drmModeDetachMode @ 000191dc size=60 ===== */

void drmModeDetachMode(undefined4 param_1,undefined4 param_2,void *param_3)

{
  undefined4 local_58;
  undefined1 auStack_54 [72];
  
  memcpy(auStack_54,param_3,0x44);
  local_58 = param_2;
  FUN_000188d0(param_1,DAT_00019218,&local_58);
  return;
}



/* ===== drmModeGetProperty @ 0001921c size=452 ===== */

undefined4 * drmModeGetProperty(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  void *local_50;
  uint uStack_4c;
  void *local_48;
  undefined4 local_44;
  undefined4 local_40;
  uint uStack_3c;
  char local_38 [4];
  uint uStack_34;
  undefined4 local_30;
  uint uStack_2c;
  undefined4 local_28;
  uint uStack_24;
  undefined4 local_20;
  uint uStack_1c;
  int local_18;
  uint uStack_14;
  
  uStack_4c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_48 = *(void **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  local_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_50 = (void *)0x0;
  local_38[0] = '\0';
  local_38[1] = '\0';
  local_38[2] = '\0';
  local_38[3] = '\0';
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_40 = param_2;
  uStack_3c = uStack_4c;
  uStack_34 = uStack_4c;
  uStack_2c = uStack_4c;
  uStack_24 = uStack_4c;
  uStack_1c = uStack_4c;
  uStack_14 = uStack_4c;
  iVar1 = drmIoctl(param_1,DAT_000193e0,&local_50);
  if (iVar1 == 0) {
    if (local_18 != 0) {
      local_50 = (void *)drmMalloc(local_18 << 3);
      uStack_4c = 0;
    }
    if ((uStack_14 != 0) && ((uStack_3c & 0x28) != 0)) {
      local_48 = (void *)drmMalloc(uStack_14 * 0x28);
      local_44 = 0;
    }
    if ((uStack_14 != 0) && ((uStack_3c & 0x10) != 0)) {
      local_50 = (void *)drmMalloc(uStack_14 << 2);
      uStack_4c = 0;
      local_48 = (void *)drmMalloc(uStack_14 << 2);
      local_44 = 0;
    }
    iVar1 = drmIoctl(param_1,DAT_000193e0,&local_50);
    if (iVar1 == 0) {
      puVar3 = (undefined4 *)drmMalloc(0x40);
      if (puVar3 == (undefined4 *)0x0) goto LAB_00019264;
      *puVar3 = local_40;
      puVar3[10] = local_18;
      puVar3[1] = uStack_3c;
      if (local_18 != 0) {
        uVar2 = FUN_00018560(local_50,local_18,8);
        puVar3[0xb] = uVar2;
      }
      if ((uStack_3c & 0x28) == 0) {
        if ((uStack_3c & 0x10) != 0) {
          uVar2 = FUN_00018560(local_50,uStack_14,4);
          puVar3[0xb] = uVar2;
          uVar2 = FUN_00018560(local_48,uStack_14,4);
          puVar3[0xf] = uVar2;
          puVar3[0xe] = uStack_14;
        }
      }
      else {
        puVar3[0xc] = uStack_14;
        uVar2 = FUN_00018560(local_48,uStack_14,0x28);
        puVar3[0xd] = uVar2;
      }
      strncpy((char *)(puVar3 + 2),local_38,0x20);
      *(undefined1 *)((int)puVar3 + 0x27) = 0;
    }
    else {
      puVar3 = (undefined4 *)0x0;
    }
    drmFree(local_50);
    drmFree(local_48);
  }
  else {
LAB_00019264:
    puVar3 = (undefined4 *)0x0;
  }
  return puVar3;
}



/* ===== drmModeFreeProperty @ 000193e4 size=40 ===== */

void drmModeFreeProperty(void *param_1)

{
  if (param_1 == (void *)0x0) {
    return;
  }
  drmFree(*(void **)((int)param_1 + 0x2c));
  drmFree(*(void **)((int)param_1 + 0x34));
  drmFree(param_1);
  return;
}



/* ===== drmModeGetPropertyBlob @ 0001940c size=172 ===== */

undefined4 * drmModeGetPropertyBlob(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 local_20;
  int local_1c;
  void *pvStack_18;
  undefined4 local_14;
  
  local_1c = 0;
  pvStack_18 = (void *)0x0;
  local_14 = 0;
  local_20 = param_2;
  iVar1 = drmIoctl(param_1,DAT_000194b8,&local_20);
  if (iVar1 == 0) {
    if (local_1c != 0) {
      pvStack_18 = (void *)drmMalloc();
      local_14 = 0;
    }
    iVar1 = drmIoctl(param_1,DAT_000194b8,&local_20);
    if (iVar1 == 0) {
      puVar3 = (undefined4 *)drmMalloc(0xc);
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = local_20;
        puVar3[1] = local_1c;
        uVar2 = FUN_00018560(pvStack_18,1);
        puVar3[2] = uVar2;
      }
    }
    else {
      puVar3 = (undefined4 *)0x0;
    }
    drmFree(pvStack_18);
  }
  else {
    puVar3 = (undefined4 *)0x0;
  }
  return puVar3;
}



/* ===== drmModeFreePropertyBlob @ 000194bc size=32 ===== */

void drmModeFreePropertyBlob(void *param_1)

{
  if (param_1 == (void *)0x0) {
    return;
  }
  drmFree(*(void **)((int)param_1 + 8));
  drmFree(param_1);
  return;
}



/* ===== drmModeConnectorSetProperty @ 000194dc size=40 ===== */

void drmModeConnectorSetProperty
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_18 = param_5;
  uStack_14 = param_6;
  local_10 = param_3;
  local_c = param_2;
  FUN_000188d0(param_1,DAT_00019504,&local_18);
  return;
}



/* ===== drmCheckModesettingSupported @ 00019508 size=364 ===== */

undefined4 drmCheckModesettingSupported(char *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  DIR *pDVar4;
  dirent64 *pdVar5;
  int iVar6;
  undefined4 local_420;
  undefined4 uStack_41c;
  undefined4 local_418;
  undefined4 local_414;
  char acStack_410 [1024];
  
  iVar2 = sscanf(param_1,(char *)(DAT_00019674 + 0x19528),&local_420,&uStack_41c,&local_418,
                 &local_414);
  if (iVar2 == 4) {
    sprintf(acStack_410,(char *)(DAT_00019678 + 0x19570),local_420,uStack_41c,local_418,local_414);
    pDVar4 = opendir(acStack_410);
    iVar2 = DAT_00019684;
    if (pDVar4 == (DIR *)0x0) {
LAB_00019588:
      sprintf(acStack_410,(char *)(DAT_0001967c + 0x195a4),local_420,uStack_41c,local_418,local_414)
      ;
      pDVar4 = opendir(acStack_410);
      iVar2 = DAT_00019680;
      if (pDVar4 == (DIR *)0x0) goto LAB_00019544;
      pdVar5 = readdir64(pDVar4);
      while (pdVar5 != (dirent64 *)0x0) {
        iVar6 = strncmp(pdVar5->d_name,(char *)(iVar2 + 0x195cc),0xc);
        if (iVar6 == 0) {
          bVar1 = true;
          goto LAB_000195d4;
        }
        pdVar5 = readdir64(pDVar4);
      }
      bVar1 = false;
LAB_000195d4:
      closedir(pDVar4);
      if (!bVar1) {
        return 0xffffffda;
      }
    }
    else {
      pdVar5 = readdir64(pDVar4);
      while (pdVar5 != (dirent64 *)0x0) {
        iVar6 = strncmp(pdVar5->d_name,(char *)(iVar2 + 0x195fc),8);
        if (iVar6 == 0) {
          bVar1 = true;
          goto LAB_00019604;
        }
        pdVar5 = readdir64(pDVar4);
      }
      bVar1 = false;
LAB_00019604:
      closedir(pDVar4);
      if (!bVar1) goto LAB_00019588;
    }
    uVar3 = 0;
  }
  else {
LAB_00019544:
    uVar3 = 0xffffffea;
  }
  return uVar3;
}



/* ===== drmModeCrtcGetGamma @ 00019688 size=68 ===== */

void drmModeCrtcGetGamma(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                        ,undefined4 param_5,undefined4 param_6)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_18 = param_5;
  local_1c = 0;
  local_14 = 0;
  local_c = 0;
  local_10 = param_6;
  local_28 = param_2;
  uStack_24 = param_3;
  local_20 = param_4;
  FUN_000188d0(param_1,DAT_000196cc,&local_28);
  return;
}



/* ===== drmModeCrtcSetGamma @ 000196d0 size=68 ===== */

void drmModeCrtcSetGamma(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                        ,undefined4 param_5,undefined4 param_6)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_18 = param_5;
  local_1c = 0;
  local_14 = 0;
  local_c = 0;
  local_10 = param_6;
  local_28 = param_2;
  uStack_24 = param_3;
  local_20 = param_4;
  FUN_000188d0(param_1,DAT_00019714,&local_28);
  return;
}



/* ===== drmHandleEvent @ 00019718 size=300 ===== */

undefined4 drmHandleEvent(int param_1,int *param_2)

{
  ssize_t sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  int local_420 [256];
  
  sVar1 = read(param_1,local_420,0x400);
  if (sVar1 != 0) {
    if (sVar1 < 8) {
      return 0xffffffff;
    }
    iVar4 = 0;
    do {
      iVar2 = *(int *)((int)local_420 + iVar4);
      if (iVar2 == 2) {
        uVar3 = *(undefined4 *)((int)local_420 + iVar4 + 8);
        if (*param_2 < 3) {
          if (*param_2 == 2) goto LAB_000197e8;
        }
        else if ((code *)param_2[3] == (code *)0x0) {
LAB_000197e8:
          pcVar5 = (code *)param_2[2];
          if (pcVar5 != (code *)0x0) goto LAB_000197f4;
        }
        else {
          (*(code *)param_2[3])
                    (param_1,*(undefined4 *)((int)local_420 + iVar4 + 0x18),
                     *(undefined4 *)((int)local_420 + iVar4 + 0x10),
                     *(undefined4 *)((int)local_420 + iVar4 + 0x14),
                     *(undefined4 *)((int)local_420 + iVar4 + 0x1c),uVar3);
        }
      }
      else if (iVar2 == 3) {
        if ((3 < *param_2) && (pcVar5 = (code *)param_2[4], pcVar5 != (code *)0x0)) {
          (*pcVar5)(param_1,pcVar5,*(undefined4 *)((int)local_420 + iVar4 + 0x18),
                    *(undefined4 *)((int)local_420 + iVar4 + 0x1c),
                    *(undefined4 *)((int)local_420 + iVar4 + 0x10),
                    *(undefined4 *)((int)local_420 + iVar4 + 0x14),
                    *(undefined4 *)((int)local_420 + iVar4 + 8),
                    *(undefined4 *)((int)local_420 + iVar4 + 0xc));
        }
      }
      else if (((iVar2 == 1) && (0 < *param_2)) &&
              (pcVar5 = (code *)param_2[1], pcVar5 != (code *)0x0)) {
        uVar3 = *(undefined4 *)((int)local_420 + iVar4 + 8);
LAB_000197f4:
        (*pcVar5)(param_1,*(undefined4 *)((int)local_420 + iVar4 + 0x18),
                  *(undefined4 *)((int)local_420 + iVar4 + 0x10),
                  *(undefined4 *)((int)local_420 + iVar4 + 0x14),uVar3);
      }
      iVar4 = iVar4 + *(int *)((int)local_420 + iVar4 + 4);
    } while (iVar4 < sVar1);
  }
  return 0;
}



/* ===== drmModePageFlip @ 00019844 size=52 ===== */

void drmModePageFlip(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_14 = 0;
  local_20 = param_2;
  uStack_1c = param_3;
  local_18 = param_4;
  FUN_000188d0(param_1,DAT_00019878,&local_20);
  return;
}



/* ===== drmModePageFlipTarget @ 0001987c size=56 ===== */

void drmModePageFlipTarget
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_14 = param_6;
  local_20 = param_2;
  uStack_1c = param_3;
  local_18 = param_4;
  FUN_000188d0(param_1,DAT_000198b4,&local_20);
  return;
}



/* ===== drmModeSetPlane @ 000198b8 size=104 ===== */

void drmModeSetPlane(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                    undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                    undefined4 param_13)

{
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_2c = param_5;
  local_28 = param_6;
  local_24 = param_7;
  local_20 = param_8;
  local_1c = param_9;
  local_18 = param_10;
  local_14 = param_11;
  local_c = param_12;
  local_10 = param_13;
  local_38 = param_2;
  uStack_34 = param_3;
  uStack_30 = param_4;
  FUN_000188d0(param_1,DAT_00019920,&local_38);
  return;
}



/* ===== drmModeGetPlane @ 00019924 size=332 ===== */

uint * drmModeGetPlane(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint *__ptr;
  uint uVar5;
  void *pvVar6;
  undefined4 uVar7;
  uint local_50;
  uint local_4c;
  uint uStack_48;
  void *local_44;
  uint local_40;
  uint uStack_3c;
  void *local_38;
  undefined4 local_34;
  
  uVar1 = DAT_00019a70;
  uVar4 = 0;
  uVar5 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  pvVar6 = *(void **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uVar7 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  while( true ) {
    local_50 = param_2;
    local_4c = uVar4;
    uStack_48 = uVar5;
    local_44 = pvVar6;
    local_40 = uVar4;
    uStack_3c = uVar5;
    local_38 = pvVar6;
    local_34 = uVar7;
    iVar3 = drmIoctl(param_1,uVar1,&local_50);
    uVar2 = uStack_3c;
    if (iVar3 != 0) {
      return (uint *)0x0;
    }
    if (uStack_3c != 0) break;
LAB_0001997c:
    iVar3 = drmIoctl(param_1,uVar1,&local_50);
    if (iVar3 != 0) goto LAB_00019994;
    if (uStack_3c <= uVar2) {
      __ptr = (uint *)drmMalloc(0x2c);
      if (__ptr != (uint *)0x0) {
        __ptr[2] = local_50;
        *__ptr = uStack_3c;
        __ptr[3] = local_4c;
        __ptr[4] = uStack_48;
        __ptr[9] = (uint)local_44;
        __ptr[10] = local_40;
        uVar4 = FUN_00018560(local_38,uStack_3c,4);
        __ptr[1] = uVar4;
        if (uStack_3c != 0 && uVar4 == 0) {
          drmFree((void *)0x0);
          drmFree(__ptr);
          __ptr = (uint *)0x0;
        }
        goto LAB_00019998;
      }
      goto LAB_00019994;
    }
    drmFree(local_38);
  }
  local_38 = (void *)drmMalloc(uStack_3c << 2);
  local_34 = 0;
  if (local_38 != (void *)0x0) goto LAB_0001997c;
LAB_00019994:
  __ptr = (uint *)0x0;
LAB_00019998:
  drmFree(local_38);
  return __ptr;
}



/* ===== drmModeFreePlane @ 00019a74 size=32 ===== */

void drmModeFreePlane(void *param_1)

{
  if (param_1 == (void *)0x0) {
    return;
  }
  drmFree(*(void **)((int)param_1 + 4));
  drmFree(param_1);
  return;
}



/* ===== drmModeGetPlaneResources @ 00019a94 size=268 ===== */

uint * drmModeGetPlaneResources(undefined4 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint *__ptr;
  void *pvVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  void *local_38;
  undefined4 uStack_34;
  uint local_30;
  undefined4 uStack_2c;
  
  uVar1 = DAT_00019ba0;
  pvVar5 = (void *)0x0;
  uVar6 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uVar4 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uVar7 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  while( true ) {
    local_38 = pvVar5;
    uStack_34 = uVar6;
    local_30 = uVar4;
    uStack_2c = uVar7;
    iVar3 = drmIoctl(param_1,uVar1,&local_38);
    uVar2 = local_30;
    if (iVar3 != 0) {
      return (uint *)0x0;
    }
    if (local_30 != 0) break;
LAB_00019ad8:
    iVar3 = drmIoctl(param_1,uVar1,&local_38);
    if (iVar3 != 0) goto LAB_00019af0;
    if (local_30 <= uVar2) {
      __ptr = (uint *)drmMalloc(8);
      if (__ptr != (uint *)0x0) {
        *__ptr = local_30;
        uVar4 = FUN_00018560(local_38,local_30,4);
        __ptr[1] = uVar4;
        if (local_30 != 0 && uVar4 == 0) {
          drmFree((void *)0x0);
          drmFree(__ptr);
          __ptr = (uint *)0x0;
        }
        goto LAB_00019af4;
      }
      goto LAB_00019af0;
    }
    drmFree(local_38);
  }
  local_38 = (void *)drmMalloc(local_30 << 2);
  uStack_34 = 0;
  if (local_38 != (void *)0x0) goto LAB_00019ad8;
LAB_00019af0:
  __ptr = (uint *)0x0;
LAB_00019af4:
  drmFree(local_38);
  return __ptr;
}



/* ===== drmModeFreePlaneResources @ 00019ba4 size=32 ===== */

void drmModeFreePlaneResources(void *param_1)

{
  if (param_1 == (void *)0x0) {
    return;
  }
  drmFree(*(void **)((int)param_1 + 4));
  drmFree(param_1);
  return;
}



/* ===== drmModeObjectGetProperties @ 00019bc4 size=356 ===== */

int * drmModeObjectGetProperties(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int *__ptr;
  void *pvVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *local_50;
  int iStack_4c;
  void *local_48;
  undefined4 local_44;
  void *local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  int iStack_34;
  
  pvVar5 = (void *)0x0;
  iVar4 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  pvVar6 = *(void **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uVar7 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  while( true ) {
    local_50 = pvVar5;
    iStack_4c = iVar4;
    local_48 = pvVar6;
    local_44 = uVar7;
    local_40 = pvVar5;
    uStack_3c = param_2;
    local_38 = param_3;
    iStack_34 = iVar4;
    iVar3 = drmIoctl(param_1,DAT_00019d28,&local_50);
    pvVar1 = local_40;
    if (iVar3 != 0) {
      return (int *)0x0;
    }
    if (local_40 != (void *)0x0) break;
LAB_00019c1c:
    iVar3 = drmIoctl(param_1,DAT_00019d28,&local_50);
    pvVar2 = local_40;
    if (iVar3 != 0) goto LAB_00019c34;
    if (local_40 <= pvVar1) {
      __ptr = (int *)drmMalloc(0xc);
      if (__ptr != (int *)0x0) {
        *__ptr = (int)pvVar2;
        iVar4 = FUN_00018560(local_50,pvVar2,4);
        __ptr[1] = iVar4;
        iVar4 = FUN_00018560(local_48,pvVar2,8);
        __ptr[2] = iVar4;
        if ((*__ptr != 0) && ((void *)__ptr[1] == (void *)0x0 || iVar4 == 0)) {
          drmFree((void *)__ptr[1]);
          drmFree((void *)__ptr[2]);
          drmFree(__ptr);
          __ptr = (int *)0x0;
        }
        goto LAB_00019c38;
      }
      goto LAB_00019c34;
    }
    drmFree(local_50);
    drmFree(local_48);
  }
  local_50 = (void *)drmMalloc((int)local_40 << 2);
  iStack_4c = iVar3;
  if (local_50 != (void *)0x0) {
    local_48 = (void *)drmMalloc((int)pvVar1 << 3);
    local_44 = 0;
    if (local_48 != (void *)0x0) goto LAB_00019c1c;
  }
LAB_00019c34:
  __ptr = (int *)0x0;
LAB_00019c38:
  drmFree(local_50);
  drmFree(local_48);
  return __ptr;
}



/* ===== drmModeFreeObjectProperties @ 00019d2c size=40 ===== */

void drmModeFreeObjectProperties(void *param_1)

{
  if (param_1 == (void *)0x0) {
    return;
  }
  drmFree(*(void **)((int)param_1 + 4));
  drmFree(*(void **)((int)param_1 + 8));
  drmFree(param_1);
  return;
}



/* ===== drmModeObjectSetProperty @ 00019d54 size=56 ===== */

void drmModeObjectSetProperty
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_14 = 0;
  local_28 = param_5;
  uStack_24 = param_6;
  local_20 = param_4;
  local_1c = param_2;
  local_18 = param_3;
  FUN_000188d0(param_1,DAT_00019d8c,&local_28);
  return;
}



/* ===== drmModeAtomicAlloc @ 00019d90 size=36 ===== */

void drmModeAtomicAlloc(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)drmMalloc(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[2] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  return;
}



/* ===== drmModeAtomicDuplicate @ 00019db4 size=128 ===== */

undefined4 * drmModeAtomicDuplicate(undefined4 *param_1)

{
  undefined4 *__ptr;
  void *__dest;
  
  if ((param_1 != (undefined4 *)0x0) &&
     (__ptr = (undefined4 *)drmMalloc(0xc), __ptr != (undefined4 *)0x0)) {
    *__ptr = *param_1;
    __ptr[1] = param_1[1];
    if (param_1[1] == 0) {
      __ptr[2] = 0;
      return __ptr;
    }
    __dest = (void *)drmMalloc(param_1[1] << 4);
    __ptr[2] = __dest;
    if (__dest != (void *)0x0) {
      memcpy(__dest,(void *)param_1[2],param_1[1] << 4);
      return __ptr;
    }
    free(__ptr);
  }
  return (undefined4 *)0x0;
}



/* ===== drmModeAtomicMerge @ 00019e34 size=156 ===== */

undefined4 drmModeAtomicMerge(int *param_1,int *param_2)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 == (int *)0x0) {
    return 0xffffffea;
  }
  if (param_2 != (int *)0x0) {
    if (*param_2 == 0) {
      return 0;
    }
    uVar3 = param_1[1];
    uVar2 = *param_2 + *param_1;
    if (uVar3 <= uVar2) {
      param_1[1] = uVar2;
      pvVar1 = realloc((void *)param_1[2],uVar2 * 0x10);
      if (pvVar1 == (void *)0x0) {
        param_1[1] = uVar3;
        return 0xfffffff4;
      }
      param_1[2] = (int)pvVar1;
    }
    memcpy((void *)(param_1[2] + *param_1 * 0x10),(void *)param_2[2],*param_2 << 4);
    *param_1 = *param_1 + *param_2;
  }
  return 0;
}



/* ===== drmModeAtomicGetCursor @ 00019ed0 size=16 ===== */

undefined4 drmModeAtomicGetCursor(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0xffffffea;
  }
  else {
    uVar1 = *param_1;
  }
  return uVar1;
}



/* ===== drmModeAtomicSetCursor @ 00019ee0 size=12 ===== */

void drmModeAtomicSetCursor(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = param_2;
  }
  return;
}



/* ===== drmModeAtomicAddProperty @ 00019eec size=132 ===== */

uint drmModeAtomicAddProperty
               (uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (param_1 == (uint *)0x0) {
    return 0xffffffea;
  }
  if (param_1[1] <= *param_1) {
    uVar3 = param_1[1] + 0x10;
    param_1[1] = uVar3;
    pvVar1 = realloc((void *)param_1[2],uVar3 * 0x10);
    if (pvVar1 == (void *)0x0) {
      param_1[1] = param_1[1] - 0x10;
      return 0xfffffff4;
    }
    param_1[2] = (uint)pvVar1;
  }
  uVar3 = *param_1;
  uVar2 = param_1[2];
  *(undefined4 *)(uVar2 + uVar3 * 0x10) = param_2;
  iVar4 = uVar2 + uVar3 * 0x10;
  *(undefined4 *)(iVar4 + 4) = param_3;
  *(undefined4 *)(iVar4 + 8) = param_5;
  *(undefined4 *)(iVar4 + 0xc) = param_6;
  *param_1 = uVar3 + 1;
  return uVar3 + 1;
}



/* ===== drmModeAtomicFree @ 00019f70 size=40 ===== */

void drmModeAtomicFree(void *param_1)

{
  if (param_1 == (void *)0x0) {
    return;
  }
  if (*(void **)((int)param_1 + 8) != (void *)0x0) {
    drmFree(*(void **)((int)param_1 + 8));
  }
  drmFree(param_1);
  return;
}



/* ===== drmModeAtomicCommit @ 00019f98 size=656 ===== */

undefined4
drmModeAtomicCommit(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  size_t *psVar1;
  void *pvVar2;
  int *piVar3;
  void *pvVar4;
  void *__ptr;
  void *__ptr_00;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  size_t sVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 local_60;
  int iStack_5c;
  void *local_58;
  undefined4 local_54;
  void *local_50;
  int iStack_4c;
  void *local_48;
  int iStack_44;
  void *local_40;
  int iStack_3c;
  undefined4 local_38;
  int iStack_34;
  undefined4 local_30;
  int iStack_2c;
  
  if (param_2 == (int *)0x0) {
    return 0xffffffea;
  }
  if (*param_2 == 0) {
    return 0;
  }
  psVar1 = (size_t *)drmModeAtomicDuplicate(param_2);
  if (psVar1 == (size_t *)0x0) {
    return 0xfffffff4;
  }
  iStack_5c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_58 = *(void **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  local_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_60 = 0;
  local_50 = (void *)0x0;
  local_48 = (void *)0x0;
  local_40 = (void *)0x0;
  local_38 = 0;
  local_30 = 0;
  iStack_4c = iStack_5c;
  iStack_44 = iStack_5c;
  iStack_3c = iStack_5c;
  iStack_34 = iStack_5c;
  iStack_2c = iStack_5c;
  qsort((void *)psVar1[2],*psVar1,0x10,(__compar_fn_t)(DAT_0001a228 + 0x1a008));
  iVar7 = 0;
  uVar8 = 0;
  while (uVar11 = uVar8, uVar6 = *psVar1, uVar11 < uVar6) {
    sVar13 = psVar1[2];
    uVar8 = uVar11 + 1;
    iVar10 = *(int *)(sVar13 + uVar11 * 0x10);
    pvVar2 = (void *)(sVar13 + uVar11 * 0x10);
    if (iVar10 != iVar7) {
      iStack_5c = iStack_5c + 1;
    }
    iVar7 = iVar10;
    if (((uVar6 - 1 != uVar11) &&
        (iVar5 = uVar11 * 0x10 + 0x10, pvVar4 = (void *)(sVar13 + iVar5),
        iVar10 == *(int *)(sVar13 + iVar5))) &&
       (*(int *)((int)pvVar2 + 4) == *(int *)((int)pvVar4 + 4))) {
      memmove(pvVar2,pvVar4,((uVar6 + 0xfffffff) - uVar11) * 0x10);
      *psVar1 = *psVar1 - 1;
    }
  }
  pvVar2 = (void *)drmMalloc(iStack_5c << 2);
  if (pvVar2 == (void *)0x0) {
    piVar3 = __errno_location();
    *piVar3 = 0xc;
    pvVar4 = (void *)0x0;
    __ptr = (void *)0x0;
    __ptr_00 = (void *)0x0;
  }
  else {
    pvVar4 = (void *)drmMalloc(iStack_5c << 2);
    if (pvVar4 == (void *)0x0) {
      piVar3 = __errno_location();
      *piVar3 = 0xc;
      __ptr = (void *)0x0;
      __ptr_00 = (void *)0x0;
    }
    else {
      __ptr = (void *)drmMalloc(*psVar1 << 2);
      if (__ptr == (void *)0x0) {
        piVar3 = __errno_location();
        *piVar3 = 0xc;
        __ptr_00 = (void *)0x0;
      }
      else {
        __ptr_00 = (void *)drmMalloc(*psVar1 << 3);
        if (__ptr_00 != (void *)0x0) {
          iVar7 = -1;
          iVar10 = 0;
          puVar12 = (undefined4 *)((int)__ptr_00 + -8);
          for (uVar8 = 0; uVar8 < *psVar1; uVar8 = uVar8 + 1) {
            iVar14 = psVar1[2] + uVar8 * 0x10;
            iVar5 = *(int *)(psVar1[2] + uVar8 * 0x10);
            uVar9 = *(undefined4 *)(iVar14 + 8);
            uVar15 = *(undefined4 *)(iVar14 + 0xc);
            if (iVar5 != iVar10) {
              iVar7 = iVar7 + 1;
              *(int *)((int)pvVar2 + iVar7 * 4) = iVar5;
            }
            *(int *)((int)pvVar4 + iVar7 * 4) = *(int *)((int)pvVar4 + iVar7 * 4) + 1;
            *(undefined4 *)((int)__ptr + uVar8 * 4) = *(undefined4 *)(iVar14 + 4);
            puVar12[2] = uVar9;
            puVar12[3] = uVar15;
            iVar10 = iVar5;
            puVar12 = puVar12 + 2;
          }
          local_54 = 0;
          iStack_4c = 0;
          iStack_44 = 0;
          iStack_3c = 0;
          iStack_2c = 0;
          local_60 = param_3;
          local_58 = pvVar2;
          local_50 = pvVar4;
          local_48 = __ptr;
          local_40 = __ptr_00;
          local_30 = param_4;
          uVar9 = FUN_000188d0(param_1,DAT_0001a22c,&local_60);
          goto LAB_0001a054;
        }
        piVar3 = __errno_location();
        *piVar3 = 0xc;
      }
    }
  }
  uVar9 = 0xffffffff;
LAB_0001a054:
  drmFree(pvVar2);
  drmFree(pvVar4);
  drmFree(__ptr);
  drmFree(__ptr_00);
  drmModeAtomicFree(psVar1);
  return uVar9;
}



/* ===== drmModeCreatePropertyBlob @ 0001a230 size=68 ===== */

void drmModeCreatePropertyBlob
               (undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  int local_10;
  undefined4 local_c;
  
  if (param_3 != -1) {
    local_c = 0;
    uStack_14 = 0;
    *param_4 = 0;
    local_18 = param_2;
    local_10 = param_3;
    iVar1 = FUN_000188d0(param_1,DAT_0001a274,&local_18);
    if (iVar1 == 0) {
      *param_4 = local_c;
    }
  }
  return;
}



/* ===== drmModeDestroyPropertyBlob @ 0001a278 size=28 ===== */

void drmModeDestroyPropertyBlob
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_c;
  undefined4 uStack_8;
  
  local_c = param_2;
  uStack_8 = param_3;
  FUN_000188d0(param_1,DAT_0001a294,&local_c,param_4,param_1);
  return;
}



/* ===== drmModeCreateLease @ 0001a298 size=84 ===== */

int drmModeCreateLease(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                      undefined4 *param_5)

{
  int iVar1;
  int *piVar2;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_1c = 0;
  local_20 = param_2;
  uStack_18 = param_3;
  uStack_14 = param_4;
  iVar1 = FUN_000188d0(param_1,DAT_0001a2ec,&local_20);
  if (iVar1 == 0) {
    iVar1 = 0;
    *param_5 = 0;
  }
  else {
    piVar2 = __errno_location();
    iVar1 = -*piVar2;
  }
  return iVar1;
}



/* ===== drmModeListLessees @ 0001a2f0 size=132 ===== */

int * drmModeListLessees(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *__ptr;
  int local_28;
  undefined4 uStack_24;
  int *local_20;
  int local_1c;
  
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_20 = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  local_1c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_28 = 0;
  iVar2 = FUN_000188d0(param_1,DAT_0001a374,&local_28);
  iVar1 = local_28;
  if ((iVar2 == 0) && (__ptr = (int *)drmMalloc((local_28 + 1) * 4), __ptr != (int *)0x0)) {
    local_20 = __ptr + 1;
    local_1c = iVar2;
    iVar2 = FUN_000188d0(param_1,DAT_0001a374,&local_28);
    if (iVar2 == 0) {
      *__ptr = iVar1;
      return __ptr;
    }
    drmFree(__ptr);
  }
  return (int *)0x0;
}



/* ===== drmModeGetLease @ 0001a378 size=132 ===== */

int * drmModeGetLease(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *__ptr;
  int local_28;
  undefined4 uStack_24;
  int *local_20;
  int local_1c;
  
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_20 = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  local_1c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_28 = 0;
  iVar2 = FUN_000188d0(param_1,DAT_0001a3fc,&local_28);
  iVar1 = local_28;
  if ((iVar2 == 0) && (__ptr = (int *)drmMalloc((local_28 + 1) * 4), __ptr != (int *)0x0)) {
    local_20 = __ptr + 1;
    local_1c = iVar2;
    iVar2 = FUN_000188d0(param_1,DAT_0001a3fc,&local_28);
    if (iVar2 == 0) {
      *__ptr = iVar1;
      return __ptr;
    }
    drmFree(__ptr);
  }
  return (int *)0x0;
}



/* ===== drmModeRevokeLease @ 0001a400 size=48 ===== */

int drmModeRevokeLease(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_c;
  undefined4 uStack_8;
  
  local_c = param_2;
  uStack_8 = param_3;
  iVar1 = FUN_000188d0(param_1,DAT_0001a430,&local_c,param_4,param_1);
  iVar3 = 0;
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    iVar3 = -*piVar2;
  }
  return iVar3;
}



/* ===== _fini @ 0001a434 size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::clock_gettime @ 0002c000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ioctl @ 0002c004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 0002c008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 0002c00c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fpathconf @ 0002c010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long fpathconf(int __fd,int __name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strndup @ 0002c014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strndup(char *__string,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::stat64 @ 0002c018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat64(char *__file,stat64 *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memmove @ 0002c01c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 0002c020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::munmap @ 0002c024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int munmap(void *__addr,size_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getenv @ 0002c028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usleep @ 0002c02c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getpagesize @ 0002c030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getpagesize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::qsort @ 0002c034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void qsort(void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fscanf @ 0002c038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fscanf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gnu_dev_major @ 0002c03c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint gnu_dev_major(ulonglong __dev)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 0002c040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::readlink @ 0002c044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t readlink(char *__path,char *__buf,size_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_finalize @ 0002c048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 0002c04c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gnu_dev_minor @ 0002c050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint gnu_dev_minor(ulonglong __dev)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncasecmp @ 0002c054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncasecmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fstat64 @ 0002c058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstat64(int __fd,stat64 *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtol @ 0002c05c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strrchr @ 0002c060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 0002c064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 0002c068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0002c06c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_registerTMCloneTable @ 0002c070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_registerTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strstr @ 0002c074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::read @ 0002c078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dirfd @ 0002c07c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int dirfd(DIR *__dirp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 0002c080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 0002c084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcasecmp @ 0002c088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcasecmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::realloc @ 0002c08c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::readdir64 @ 0002c090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent64 * readdir64(DIR *__dirp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcmp @ 0002c094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sscanf @ 0002c098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_deregisterTMCloneTable @ 0002c09c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strdup @ 0002c0a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strdup(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0002c0a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 0002c0a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::open64 @ 0002c0ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::opendir @ 0002c0b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * opendir(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 0002c0b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 0002c0b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mmap64 @ 0002c0c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * mmap64(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off64_t __offset)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::readdir64_r @ 0002c0c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int readdir64_r(DIR *__dirp,dirent64 *__entry,dirent64 **__result)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::access @ 0002c0c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 0002c0cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::log2 @ 0002c0d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double log2(double __x)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getline @ 0002c0d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__ssize_t getline(char **__lineptr,size_t *__n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 0002c0d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::closedir @ 0002c0dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int closedir(DIR *__dirp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vasprintf @ 0002c0e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vasprintf(char **__ptr,char *__f,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 0002c0e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 0002c0e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vfprintf @ 0002c0ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 0002c0f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen64 @ 0002c0f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


