// librkfsmk.so — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00011cd0 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== FsOpen @ 00011cf4 size=12 ===== */

void FsOpen(void)

{
  (*(code *)PTR_FsOpen_0003800c)();
  return;
}



/* ===== <EXTERNAL>::putchar @ 00011d00 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putchar_00038010)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::strcpy @ 00011d0c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_00038014)(__dest);
  return pcVar1;
}



/* ===== Char2Uni @ 00011d18 size=12 ===== */

void Char2Uni(void)

{
  (*(code *)PTR_Char2Uni_00038018)();
  return;
}



/* ===== <EXTERNAL>::ioctl @ 00011d24 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_0003801c)(__fd);
  return iVar1;
}



/* ===== GetOwner @ 00011d30 size=12 ===== */

void GetOwner(void)

{
  (*(code *)PTR_GetOwner_00038020)();
  return;
}



/* ===== UpdateFree @ 00011d3c size=12 ===== */

void UpdateFree(void)

{
  (*(code *)PTR_UpdateFree_00038024)();
  return;
}



/* ===== <EXTERNAL>::printf @ 00011d48 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00038028)(__format);
  return iVar1;
}



/* ===== GetFat @ 00011d54 size=12 ===== */

void GetFat(void)

{
  (*(code *)PTR_GetFat_0003802c)();
  return;
}



/* ===== <EXTERNAL>::strerror @ 00011d60 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_00038030)(__errnum);
  return pcVar1;
}



/* ===== FileUnused @ 00011d6c size=12 ===== */

void FileUnused(void)

{
  (*(code *)PTR_FileUnused_00038034)();
  return;
}



/* ===== <EXTERNAL>::memmove @ 00011d78 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_00038038)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::snprintf @ 00011d84 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_0003803c)(__s);
  return iVar1;
}



/* ===== rkfsmk_set_format_id @ 00011d90 size=12 ===== */

void rkfsmk_set_format_id(void)

{
  (*(code *)PTR_rkfsmk_set_format_id_00038040)();
  return;
}



/* ===== <EXTERNAL>::munmap @ 00011d9c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int munmap(void *__addr,size_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_munmap_00038044)(__addr);
  return iVar1;
}



/* ===== LfnAddSlot @ 00011da8 size=12 ===== */

void LfnAddSlot(void)

{
  (*(code *)PTR_LfnAddSlot_00038048)();
  return;
}



/* ===== Malloc @ 00011db4 size=12 ===== */

void Malloc(void)

{
  (*(code *)PTR_Malloc_0003804c)();
  return;
}



/* ===== <EXTERNAL>::fgets @ 00011dc0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_fgets_00038050)(__s);
  return pcVar1;
}



/* ===== FsCheck @ 00011dcc size=12 ===== */

void FsCheck(void)

{
  (*(code *)PTR_FsCheck_00038054)();
  return;
}



/* ===== GetLinuxVersion @ 00011dd8 size=12 ===== */

void GetLinuxVersion(void)

{
  (*(code *)PTR_GetLinuxVersion_00038058)();
  return;
}



/* ===== <EXTERNAL>::memcpy @ 00011de4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_0003805c)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::perror @ 00011df0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
  (*(code *)PTR_perror_00038060)(__s);
  return;
}



/* ===== FsWrite @ 00011dfc size=12 ===== */

void FsWrite(void)

{
  (*(code *)PTR_FsWrite_00038064)();
  return;
}



/* ===== <EXTERNAL>::puts @ 00011e08 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00038068)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00011e14 size=12 ===== */

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_0003806c)();
  return;
}



/* ===== IsDevMounted @ 00011e20 size=12 ===== */

void IsDevMounted(void)

{
  (*(code *)PTR_IsDevMounted_00038070)();
  return;
}



/* ===== <EXTERNAL>::malloc @ 00011e2c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00038074)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::remove @ 00011e38 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int remove(char *__filename)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_remove_00038078)(__filename);
  return iVar1;
}



/* ===== Die @ 00011e44 size=12 ===== */

void Die(void)

{
  (*(code *)PTR_Die_0003807c)();
  return;
}



/* ===== NextCluster @ 00011e50 size=12 ===== */

void NextCluster(void)

{
  (*(code *)PTR_NextCluster_00038080)();
  return;
}



/* ===== <EXTERNAL>::sleep @ 00011e5c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_sleep_00038084)(__seconds);
  return uVar1;
}



/* ===== BlkDevGetGeometry @ 00011e68 size=12 ===== */

void BlkDevGetGeometry(void)

{
  (*(code *)PTR_BlkDevGetGeometry_00038088)();
  return;
}



/* ===== SetOwner @ 00011e74 size=12 ===== */

void SetOwner(void)

{
  (*(code *)PTR_SetOwner_0003808c)();
  return;
}



/* ===== <EXTERNAL>::wcstombs @ 00011e80 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t wcstombs(char *__s,wchar_t *__pwcs,size_t __n)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_wcstombs_00038090)(__s);
  return sVar1;
}



/* ===== BadCluster @ 00011e8c size=12 ===== */

void BadCluster(void)

{
  (*(code *)PTR_BadCluster_00038094)();
  return;
}



/* ===== LfnGet @ 00011e98 size=12 ===== */

void LfnGet(void)

{
  (*(code *)PTR_LfnGet_00038098)();
  return;
}



/* ===== <EXTERNAL>::fflush @ 00011ea4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_0003809c)(__stream);
  return iVar1;
}



/* ===== FsClose @ 00011eb0 size=12 ===== */

void FsClose(void)

{
  (*(code *)PTR_FsClose_000380a0)();
  return;
}



/* ===== BlkDevGetSectorSize @ 00011ebc size=12 ===== */

void BlkDevGetSectorSize(void)

{
  (*(code *)PTR_BlkDevGetSectorSize_000380a4)();
  return;
}



/* ===== <EXTERNAL>::__fgetc_unlocked @ 00011ec8 size=12 ===== */

void __fgetc_unlocked(void)

{
  (*(code *)PTR___fgetc_unlocked_000380a8)();
  return;
}



/* ===== <EXTERNAL>::libiconv_open @ 00011ed4 size=12 ===== */

void libiconv_open(void)

{
  (*(code *)PTR_libiconv_open_000380ac)();
  return;
}



/* ===== <EXTERNAL>::fstat64 @ 00011ee0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstat64(int __fd,stat64 *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fstat64_000380b0)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::uname @ 00011eec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int uname(utsname *__name)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_uname_000380b4)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::calloc @ 00011ef8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_000380b8)(__nmemb);
  return pvVar1;
}



/* ===== SetFat @ 00011f04 size=12 ===== */

void SetFat(void)

{
  (*(code *)PTR_SetFat_000380bc)();
  return;
}



/* ===== <EXTERNAL>::write @ 00011f10 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_write_000380c0)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00011f1c size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_000380c4)();
  return;
}



/* ===== Uni2Char @ 00011f28 size=12 ===== */

void Uni2Char(void)

{
  (*(code *)PTR_Uni2Char_000380c8)();
  return;
}



/* ===== <EXTERNAL>::nl_langinfo @ 00011f34 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * nl_langinfo(nl_item __item)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_nl_langinfo_000380cc)(__item);
  return pcVar1;
}



/* ===== FsRead @ 00011f40 size=12 ===== */

void FsRead(void)

{
  (*(code *)PTR_FsRead_000380d0)();
  return;
}



/* ===== FileType @ 00011f4c size=12 ===== */

void FileType(void)

{
  (*(code *)PTR_FileType_000380d4)();
  return;
}



/* ===== <EXTERNAL>::read @ 00011f58 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_000380d8)(__fd);
  return sVar1;
}



/* ===== Free @ 00011f64 size=12 ===== */

void Free(void)

{
  (*(code *)PTR_Free_000380dc)();
  return;
}



/* ===== Char2Upper @ 00011f70 size=12 ===== */

void Char2Upper(void)

{
  (*(code *)PTR_Char2Upper_000380e0)();
  return;
}



/* ===== <EXTERNAL>::strncmp @ 00011f7c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_000380e4)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::strncpy @ 00011f88 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_000380e8)(__dest);
  return pcVar1;
}



/* ===== BlkDevGetStart @ 00011f94 size=12 ===== */

void BlkDevGetStart(void)

{
  (*(code *)PTR_BlkDevGetStart_000380ec)();
  return;
}



/* ===== <EXTERNAL>::memcmp @ 00011fa0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_000380f0)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::sscanf @ 00011fac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sscanf_000380f4)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::setmntent @ 00011fb8 size=12 ===== */

void setmntent(void)

{
  (*(code *)PTR_setmntent_000380f8)();
  return;
}



/* ===== <EXTERNAL>::lstat64 @ 00011fc4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int lstat64(char *__file,stat64 *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_lstat64_000380fc)(__file);
  return iVar1;
}



/* ===== rkfsmk_destroy @ 00011fd0 size=12 ===== */

void rkfsmk_destroy(void)

{
  (*(code *)PTR_rkfsmk_destroy_00038100)();
  return;
}



/* ===== <EXTERNAL>::endmntent @ 00011fdc size=12 ===== */

void endmntent(void)

{
  (*(code *)PTR_endmntent_00038104)();
  return;
}



/* ===== LfnCheckOrphaned @ 00011fe8 size=12 ===== */

void LfnCheckOrphaned(void)

{
  (*(code *)PTR_LfnCheckOrphaned_00038108)();
  return;
}



/* ===== FileModify @ 00011ff4 size=12 ===== */

void FileModify(void)

{
  (*(code *)PTR_FileModify_0003810c)();
  return;
}



/* ===== ReadFat @ 00012000 size=12 ===== */

void ReadFat(void)

{
  (*(code *)PTR_ReadFat_00038110)();
  return;
}



/* ===== LfnFixChecksum @ 0001200c size=12 ===== */

void LfnFixChecksum(void)

{
  (*(code *)PTR_LfnFixChecksum_00038114)();
  return;
}



/* ===== <EXTERNAL>::gettimeofday @ 00012018 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_gettimeofday_00038118)(__tv);
  return iVar1;
}



/* ===== LfnReset @ 00012024 size=12 ===== */

void LfnReset(void)

{
  (*(code *)PTR_LfnReset_0003811c)();
  return;
}



/* ===== <EXTERNAL>::localtime @ 00012030 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * localtime(time_t *__timer)

{
  tm *ptVar1;
  
  ptVar1 = (tm *)(*(code *)PTR_localtime_00038120)(__timer);
  return ptVar1;
}



/* ===== <EXTERNAL>::memset @ 0001203c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00038124)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::open64 @ 00012048 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open64_00038128)(__file);
  return iVar1;
}



/* ===== rkfsmk_create @ 00012054 size=12 ===== */

void rkfsmk_create(void)

{
  (*(code *)PTR_rkfsmk_create_0003812c)();
  return;
}



/* ===== BlkDevFindSize @ 00012060 size=12 ===== */

void BlkDevFindSize(void)

{
  (*(code *)PTR_BlkDevFindSize_00038130)();
  return;
}



/* ===== <EXTERNAL>::strcmp @ 0001206c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_00038134)(__s1);
  return iVar1;
}



/* ===== min @ 00012078 size=12 ===== */

void min(void)

{
  (*(code *)PTR_min_00038138)();
  return;
}



/* ===== <EXTERNAL>::fgetc @ 00012084 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fgetc(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fgetc_0003813c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::sprintf @ 00012090 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_00038140)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::setlocale @ 0001209c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * setlocale(int __category,char *__locale)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_setlocale_00038144)(__category);
  return pcVar1;
}



/* ===== <EXTERNAL>::mmap64 @ 000120a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * mmap64(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off64_t __offset)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_mmap64_00038148)(__addr);
  return pvVar1;
}



/* ===== GetDevInfo @ 000120b4 size=12 ===== */

void GetDevInfo(void)

{
  (*(code *)PTR_GetDevInfo_0003814c)();
  return;
}



/* ===== Alloc @ 000120c0 size=12 ===== */

void Alloc(void)

{
  (*(code *)PTR_Alloc_00038150)();
  return;
}



/* ===== <EXTERNAL>::fsync @ 000120cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fsync(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fsync_00038154)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::fputc @ 000120d8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputc_00038158)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::strftime @ 000120e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strftime(char *__s,size_t __maxsize,char *__format,tm *__tp)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strftime_0003815c)(__s);
  return sVar1;
}



/* ===== FileCvt @ 000120f0 size=12 ===== */

void FileCvt(void)

{
  (*(code *)PTR_FileCvt_00038160)();
  return;
}



/* ===== ClusterStart @ 000120fc size=12 ===== */

void ClusterStart(void)

{
  (*(code *)PTR_ClusterStart_00038164)();
  return;
}



/* ===== <EXTERNAL>::getmntent @ 00012108 size=12 ===== */

void getmntent(void)

{
  (*(code *)PTR_getmntent_00038168)();
  return;
}



/* ===== <EXTERNAL>::fwrite @ 00012114 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_0003816c)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::libiconv @ 00012120 size=12 ===== */

void libiconv(void)

{
  (*(code *)PTR_libiconv_00038170)();
  return;
}



/* ===== rkfsmk_start @ 0001212c size=12 ===== */

void rkfsmk_start(void)

{
  (*(code *)PTR_rkfsmk_start_00038174)();
  return;
}



/* ===== <EXTERNAL>::__errno_location @ 00012138 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00038178)();
  return piVar1;
}



/* ===== GetKey @ 00012144 size=12 ===== */

void GetKey(void)

{
  (*(code *)PTR_GetKey_0003817c)();
  return;
}



/* ===== <EXTERNAL>::exit @ 00012150 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_00038180)(__status);
  return;
}



/* ===== FileName @ 0001215c size=12 ===== */

void FileName(void)

{
  (*(code *)PTR_FileName_00038184)();
  return;
}



/* ===== ScanRoot @ 00012168 size=12 ===== */

void ScanRoot(void)

{
  (*(code *)PTR_ScanRoot_00038188)();
  return;
}



/* ===== FixBad @ 00012174 size=12 ===== */

void FixBad(void)

{
  (*(code *)PTR_FixBad_0003818c)();
  return;
}



/* ===== <EXTERNAL>::gmtime @ 00012180 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * gmtime(time_t *__timer)

{
  tm *ptVar1;
  
  ptVar1 = (tm *)(*(code *)PTR_gmtime_00038190)(__timer);
  return ptVar1;
}



/* ===== <EXTERNAL>::strlen @ 0001218c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00038194)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::lseek64 @ 00012198 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__off64_t lseek64(int __fd,__off64_t __offset,int __whence)

{
  undefined4 in_r1;
  __off64_t _Var1;
  
  _Var1 = (*(code *)PTR_lseek64_00038198)
                    (__fd,in_r1,(int)__offset,(int)((ulonglong)__offset >> 0x20));
  return _Var1;
}



/* ===== BlkDevGetSize @ 000121a4 size=12 ===== */

void BlkDevGetSize(void)

{
  (*(code *)PTR_BlkDevGetSize_0003819c)();
  return;
}



/* ===== <EXTERNAL>::strchr @ 000121b0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_000381a0)(__s);
  return pcVar1;
}



/* ===== FileCd @ 000121bc size=12 ===== */

void FileCd(void)

{
  (*(code *)PTR_FileCd_000381a4)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 000121c8 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_000381a8)();
  return;
}



/* ===== ReclaimFile @ 000121d4 size=12 ===== */

void ReclaimFile(void)

{
  (*(code *)PTR_ReclaimFile_000381ac)();
  return;
}



/* ===== <EXTERNAL>::close @ 000121e0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_000381b0)(__fd);
  return iVar1;
}



/* ===== DosCharToPrintable @ 000121ec size=12 ===== */

void DosCharToPrintable(void)

{
  (*(code *)PTR_DosCharToPrintable_000381b4)();
  return;
}



/* ===== <EXTERNAL>::vfprintf @ 000121f8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vfprintf_000381b8)(__s);
  return iVar1;
}



/* ===== BootRead @ 00012204 size=12 ===== */

void BootRead(void)

{
  (*(code *)PTR_BootRead_000381bc)();
  return;
}



/* ===== <EXTERNAL>::raise @ 00012210 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_000381c0)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 0001221c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_000381c4)(__ptr);
  return;
}



/* ===== entry @ 00012228 size=72 ===== */

void processEntry entry(void)

{
  code *pcVar1;
  
  if (DAT_00012274 + 0x12240 == DAT_00012270 + 0x12238) {
    return;
  }
  pcVar1 = *(code **)(DAT_00012278 + 0x12248 + DAT_0001227c);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== _FINI_0 @ 000122e4 size=112 ===== */

void _FINI_0(void)

{
  int iVar1;
  
  iVar1 = DAT_00012358 + 0x12300;
  if (*(char *)(DAT_00012354 + 0x122f4) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + DAT_0001235c) != 0) {
    __cxa_finalize(*(undefined4 *)(DAT_00012360 + 0x12320));
  }
  entry();
  if (*(int *)(iVar1 + DAT_00012364) != 0) {
    __deregister_frame_info(DAT_00012368 + 0x12340);
  }
  *(undefined1 *)(DAT_0001236c + 0x12350) = 1;
  return;
}



/* ===== _INIT_0 @ 00012370 size=140 ===== */

void _INIT_0(void)

{
  code *pcVar1;
  
  if (*(int *)(DAT_000123a8 + 0x12380 + DAT_000123ac) != 0) {
    __register_frame_info(DAT_000123b4 + 0x123a0,DAT_000123b0 + 0x1239c);
  }
  if (((DAT_000122d8 + 0x12298) - (DAT_000122d4 + 0x12290) >> 2) / 2 == 0) {
    return;
  }
  pcVar1 = *(code **)(DAT_000122dc + 0x122a0 + DAT_000122e0);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== IsBlkdev @ 000123b8 size=52 ===== */

bool IsBlkdev(int param_1)

{
  int iVar1;
  stat64 sStack_70;
  
  iVar1 = fstat64(param_1,&sStack_70);
  return iVar1 == 0 && (sStack_70.st_mode & 0xf000) == 0x6000;
}



/* ===== BlkDevFindSize @ 000123ec size=392 ===== */

undefined8 BlkDevFindSize(int param_1)

{
  ssize_t sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  __off64_t _Var10;
  undefined1 auStack_29 [5];
  
  uVar2 = 0x400;
  uVar8 = 0;
  uVar6 = 0;
  uVar7 = 0;
  while( true ) {
    uVar5 = uVar8;
    uVar4 = uVar2;
    _Var10 = lseek64(param_1,CONCAT44(uVar5,uVar4),0);
    if ((_Var10 < 0) || (sVar1 = read(param_1,auStack_29,1), sVar1 < 1)) break;
    if (uVar5 == 0xffffffff && uVar4 == 0xffffffff) {
      return CONCAT44(uVar5,uVar4);
    }
    bVar9 = 0x7ffffffe < uVar5;
    if (uVar5 == 0x7fffffff) {
      bVar9 = 0xfffffffd < uVar4;
    }
    uVar2 = 0xffffffff;
    uVar8 = 0xffffffff;
    uVar6 = uVar4;
    uVar7 = uVar5;
    if (!bVar9 || uVar5 == 0x7fffffff && uVar4 == 0xfffffffe) {
      uVar2 = uVar4 * 2;
      uVar8 = uVar5 * 2 + (uint)CARRY4(uVar4,uVar4);
    }
  }
  uVar2 = uVar5 - (uVar4 == 0);
  bVar9 = uVar2 <= uVar7;
  if (uVar7 == uVar2) {
    bVar9 = uVar4 - 1 <= uVar6;
  }
  if (!bVar9) {
    uVar2 = uVar6;
    uVar8 = uVar7;
    do {
      uVar7 = uVar8 + uVar5 + (uint)CARRY4(uVar2,uVar4);
      uVar6 = uVar2 + uVar4 >> 1 | uVar7 * -0x80000000;
      uVar7 = uVar7 >> 1;
      _Var10 = lseek64(param_1,CONCAT44(uVar7,uVar6),0);
      if ((_Var10 < 0) || (sVar1 = read(param_1,auStack_29,1), sVar1 < 1)) {
        uVar4 = uVar6;
        uVar5 = uVar7;
        uVar6 = uVar2;
        uVar7 = uVar8;
      }
      uVar3 = uVar5 - (uVar4 == 0);
      bVar9 = uVar7 <= uVar3;
      if (uVar3 == uVar7) {
        bVar9 = uVar6 <= uVar4 - 1;
      }
      uVar2 = uVar6;
      uVar8 = uVar7;
    } while (bVar9 && (uVar3 != uVar7 || uVar4 - 1 != uVar6));
  }
  _Var10 = lseek64(param_1,0,0);
  if (-1 < _Var10) {
    read(param_1,auStack_29,1);
  }
  return CONCAT44(uVar7 + (0xfffffffe < uVar6),uVar6 + 1);
}



/* ===== BlkDevGetSize @ 00012574 size=288 ===== */

undefined4 BlkDevGetSize(int param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  uint local_7c;
  stat64 local_78;
  
  iVar1 = GetLinuxVersion();
  if ((iVar1 - 0x20412U < 0xee || 0x205ff < iVar1) &&
     (iVar1 = ioctl(param_1,0x80041272,param_2), -1 < iVar1)) {
    return 0;
  }
  iVar1 = ioctl(param_1,0x1260,&local_7c);
  if (iVar1 < 0) {
    iVar1 = ioctl(param_1,0x801c0204,&local_78);
    local_7c = (uint)local_78.st_dev;
    if (iVar1 < 0) {
      iVar1 = fstat64(param_1,&local_78);
      if ((iVar1 == 0) && ((local_78.st_mode & 0xf000) == 0x8000)) {
        *param_2 = (int)local_78.st_size;
        param_2[1] = local_78.st_size._4_4_;
        return 0;
      }
      if ((local_78.st_mode & 0xf000) == 0x6000) {
        uVar2 = BlkDevFindSize(param_1);
        *(undefined8 *)param_2 = uVar2;
        return 0;
      }
      return 0xffffffff;
    }
  }
  *param_2 = local_7c << 9;
  param_2[1] = local_7c >> 0x17;
  return 0;
}



/* ===== BlkDevGetSectors @ 00012694 size=56 ===== */

undefined4 BlkDevGetSectors(undefined4 param_1,uint *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint local_10;
  uint uStack_c;
  
  iVar1 = BlkDevGetSize(param_1,&local_10);
  if (iVar1 == 0) {
    *param_2 = local_10 >> 9 | uStack_c << 0x17;
    param_2[1] = uStack_c >> 9;
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== BlkDevGetSectorSize @ 000126cc size=24 ===== */

int BlkDevGetSectorSize(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = ioctl(param_1,0x1268,param_2);
  return iVar1 >> 0x1f;
}



/* ===== BlkDevGetPhysectorSize @ 000126e4 size=36 ===== */

int BlkDevGetPhysectorSize(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_c [2];
  
  local_c[0] = param_2;
  iVar1 = ioctl(param_1,0x127b,local_c);
  return iVar1 >> 0x1f;
}



/* ===== BlkDevIsMisaligned @ 00012708 size=52 ===== */

undefined4 BlkDevIsMisaligned(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_c [2];
  
  iVar1 = ioctl(param_1,0x127a,local_c);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    if (local_c[0] != 0) {
      uVar2 = 1;
    }
  }
  return uVar2;
}



/* ===== BlkDevIsCdrom @ 0001273c size=24 ===== */

uint BlkDevIsCdrom(int param_1)

{
  uint uVar1;
  
  uVar1 = ioctl(param_1,0x5331,0);
  return uVar1 & ~((int)uVar1 >> 0x1f);
}



/* ===== BlkDevGetGeometry @ 00012754 size=128 ===== */

undefined4 BlkDevGetGeometry(int param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  byte local_34;
  byte local_33;
  uint local_30;
  uint local_2c;
  
  iVar1 = ioctl(param_1,0x301,&local_34);
  if (iVar1 != 0) {
    iVar1 = ioctl(param_1,0x801c0204,&local_34);
    if (iVar1 == 0) {
      *param_2 = local_2c;
      uVar2 = 0;
    }
    else {
      local_30 = 0;
      uVar2 = 0xffffffff;
      *param_2 = 0;
    }
    *param_3 = local_30;
    return uVar2;
  }
  *param_2 = (uint)local_34;
  *param_3 = (uint)local_33;
  return 0;
}



/* ===== BlkDevGetStart @ 000127d4 size=52 ===== */

undefined4 BlkDevGetStart(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_10 [4];
  undefined4 local_c;
  
  iVar1 = ioctl(param_1,0x301,auStack_10);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    local_c = 0;
    uVar2 = 0xffffffff;
  }
  *param_2 = local_c;
  return uVar2;
}



/* ===== blkdev_scsi_type_to_name @ 00012808 size=712 ===== */

int blkdev_scsi_type_to_name(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return DAT_00012ad0 + 0x12a20;
  case 1:
    return DAT_00012ad4 + 0x12a2c;
  case 2:
    return DAT_00012ad8 + 0x12a38;
  case 3:
    return DAT_00012adc + 0x12a44;
  case 4:
    return DAT_00012ae0 + 0x12a50;
  case 5:
    return DAT_00012ae4 + 0x12a5c;
  case 6:
    return DAT_00012ae8 + 0x12a68;
  case 7:
    return DAT_00012aec + 0x12a74;
  case 8:
    return DAT_00012af0 + 0x12a80;
  case 9:
    return DAT_00012af4 + 0x12a8c;
  case 10:
    break;
  case 0xb:
    break;
  case 0xc:
    return DAT_00012af8 + 0x12a98;
  case 0xd:
    return DAT_00012afc + 0x12aa4;
  case 0xe:
    return DAT_00012b00 + 0x12ab0;
  case 0xf:
    break;
  case 0x10:
    break;
  case 0x11:
    return DAT_00012b04 + 0x12abc;
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
    break;
  case 0x1c:
    break;
  case 0x1d:
    break;
  case 0x1e:
    break;
  case 0x1f:
    break;
  case 0x20:
    break;
  case 0x21:
    break;
  case 0x22:
    break;
  case 0x23:
    break;
  case 0x24:
    break;
  case 0x25:
    break;
  case 0x26:
    break;
  case 0x27:
    break;
  case 0x28:
    break;
  case 0x29:
    break;
  case 0x2a:
    break;
  case 0x2b:
    break;
  case 0x2c:
    break;
  case 0x2d:
    break;
  case 0x2e:
    break;
  case 0x2f:
    break;
  case 0x30:
    break;
  case 0x31:
    break;
  case 0x32:
    break;
  case 0x33:
    break;
  case 0x34:
    break;
  case 0x35:
    break;
  case 0x36:
    break;
  case 0x37:
    break;
  case 0x38:
    break;
  case 0x39:
    break;
  case 0x3a:
    break;
  case 0x3b:
    break;
  case 0x3c:
    break;
  case 0x3d:
    break;
  case 0x3e:
    break;
  case 0x3f:
    break;
  case 0x40:
    break;
  case 0x41:
    break;
  case 0x42:
    break;
  case 0x43:
    break;
  case 0x44:
    break;
  case 0x45:
    break;
  case 0x46:
    break;
  case 0x47:
    break;
  case 0x48:
    break;
  case 0x49:
    break;
  case 0x4a:
    break;
  case 0x4b:
    break;
  case 0x4c:
    break;
  case 0x4d:
    break;
  case 0x4e:
    break;
  case 0x4f:
    break;
  case 0x50:
    break;
  case 0x51:
    break;
  case 0x52:
    break;
  case 0x53:
    break;
  case 0x54:
    break;
  case 0x55:
    break;
  case 0x56:
    break;
  case 0x57:
    break;
  case 0x58:
    break;
  case 0x59:
    break;
  case 0x5a:
    break;
  case 0x5b:
    break;
  case 0x5c:
    break;
  case 0x5d:
    break;
  case 0x5e:
    break;
  case 0x5f:
    break;
  case 0x60:
    break;
  case 0x61:
    break;
  case 0x62:
    break;
  case 99:
    break;
  case 100:
    break;
  case 0x65:
    break;
  case 0x66:
    break;
  case 0x67:
    break;
  case 0x68:
    break;
  case 0x69:
    break;
  case 0x6a:
    break;
  case 0x6b:
    break;
  case 0x6c:
    break;
  case 0x6d:
    break;
  case 0x6e:
    break;
  case 0x6f:
    break;
  case 0x70:
    break;
  case 0x71:
    break;
  case 0x72:
    break;
  case 0x73:
    break;
  case 0x74:
    break;
  case 0x75:
    break;
  case 0x76:
    break;
  case 0x77:
    break;
  case 0x78:
    break;
  case 0x79:
    break;
  case 0x7a:
    break;
  case 0x7b:
    break;
  case 0x7c:
    break;
  case 0x7d:
    break;
  case 0x7e:
    break;
  case 0x7f:
    return DAT_00012b08 + 0x12ac8;
  }
  return 0;
}



/* ===== FUN_00012b10 @ 00012b10 size=360 ===== */

void FUN_00012b10(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DAT_00012c78 + 0x12b34;
  if (*(int *)(param_1 + 0x18) == 0x20) {
    if ((*(byte *)(param_2 + 0x41) & 1) != 0) {
      printf((char *)(DAT_00012c8c + 0x12bc4));
      puts((char *)(DAT_00012c90 + 0x12bd0));
      if (**(int **)(iVar1 + DAT_00012c84) == 0) {
        puts((char *)(DAT_00012cac + 0x12c4c));
      }
      else {
        puts((char *)(DAT_00012c94 + 0x12bf0));
        iVar1 = GetKey(DAT_00012c9c + 0x12c04,DAT_00012c98 + 0x12c00);
        if (iVar1 != 0x31) {
          return;
        }
      }
      *(byte *)(param_2 + 0x41) = *(byte *)(param_2 + 0x41) & 0xfe;
      FsWrite(param_1);
    }
  }
  else if ((*(byte *)(param_2 + 0x25) & 1) != 0) {
    printf((char *)(DAT_00012c7c + 0x12b54));
    puts((char *)(DAT_00012c80 + 0x12b60));
    if (**(int **)(iVar1 + DAT_00012c84) == 0) {
      puts((char *)(DAT_00012c88 + 0x12b80));
    }
    else {
      puts((char *)(DAT_00012ca0 + 0x12c1c));
      iVar1 = GetKey(DAT_00012ca8 + 0x12c30,DAT_00012ca4 + 0x12c2c);
      if (iVar1 != 0x31) {
        return;
      }
    }
    *(byte *)(param_2 + 0x25) = *(byte *)(param_2 + 0x25) & 0xfe;
    FsWrite(param_1);
  }
  return;
}



/* ===== BootRead @ 00012cb0 size=3744 ===== */

undefined4 BootRead(uint *param_1,undefined4 param_2)

{
  longlong lVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  size_t sVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int extraout_r1;
  uint uVar10;
  int iVar11;
  undefined4 extraout_r1_00;
  uint extraout_r1_01;
  undefined4 extraout_r1_02;
  int iVar12;
  int *piVar13;
  uint uVar14;
  ushort uVar15;
  int *piVar16;
  byte *pbVar17;
  byte *pbVar18;
  uint uVar19;
  byte *pbVar20;
  uint uVar21;
  uint uVar22;
  bool bVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  undefined8 uVar26;
  undefined8 local_468;
  int local_460;
  undefined4 uStack_45c;
  char acStack_444 [20];
  byte abStack_430 [3];
  uint local_42d;
  uint local_429;
  ushort local_425;
  byte local_423;
  ushort local_422;
  byte local_420;
  ushort local_41f;
  ushort local_41d;
  byte local_41b;
  short local_41a;
  ushort local_418;
  ushort local_416;
  uint local_414;
  uint local_410;
  undefined4 local_40c;
  undefined4 uStack_405;
  undefined1 uStack_401;
  ushort local_400;
  undefined1 local_3fe;
  undefined1 uStack_3fd;
  undefined1 uStack_3fc;
  undefined1 local_3fb;
  char local_3ee;
  undefined4 local_3e9;
  undefined4 local_3e5;
  undefined2 local_3e1;
  undefined1 local_3df;
  byte bStack_231;
  int local_230 [2];
  undefined1 local_228;
  undefined8 local_4c;
  undefined4 local_44;
  int local_34;
  
  FsRead(param_1,param_2,0,0,0x200,abStack_430);
  uVar2 = local_425;
  iVar8 = DAT_00013968;
  uVar14 = (uint)local_425;
  param_1[0x2c] = local_42d;
  iVar8 = iVar8 + 0x12d00;
  param_1[0x2d] = local_429;
  if (uVar14 == 0) {
    printf((char *)(DAT_00013a78 + 0x13bc8));
    return 0xffffffff;
  }
  if ((local_425 & 0x1ff) != 0) {
    printf((char *)(DAT_00013a74 + 0x13bb4),uVar14);
    return 0xffffffff;
  }
  param_1[0x10] = uVar14 * local_423;
  iVar11 = DAT_0001396c;
  if (uVar14 * local_423 == 0) {
    printf((char *)(DAT_00013a7c + 0x13bdc));
    return 0xffffffff;
  }
  uVar9 = (uint)local_420;
  if (1 < uVar9 - 1) {
    printf((char *)(DAT_00013a70 + 0x13b9c));
    return 0xffffffff;
  }
  *param_1 = uVar9;
  piVar13 = *(int **)(iVar8 + iVar11);
  uVar22 = (uint)local_41d;
  if (local_41d == 0) {
    uVar22 = local_410;
  }
  if (*piVar13 != 0) {
    puts((char *)(DAT_0001398c + 0x13170));
    uVar9 = extraout_r1_01;
  }
  lVar1 = (ulonglong)uVar14 * (ulonglong)((uVar22 & 0xfffffffe) - 1);
  FsCheck(param_1,uVar9,(int)lVar1,(int)((ulonglong)lVar1 >> 0x20),uVar14);
  uVar25 = VectorShiftRight(CONCAT44(CONCAT22(uVar2,uVar2),CONCAT22(uVar2,uVar2)),0x30);
  if (local_41a == 0) {
    local_468 = VectorShiftRight(CONCAT44(local_40c,local_40c),0x20);
    if ((int)local_468 == 0 && (int)(local_468 >> 0x20) == 0) {
      printf((char *)(DAT_00013a80 + 0x13bf0));
      return 0xffffffff;
    }
  }
  else {
    local_468 = VectorShiftRight(CONCAT44(CONCAT22(local_41a,local_41a),
                                          CONCAT22(local_41a,local_41a)),0x30);
  }
  uVar21 = (uint)local_41f;
  param_1[0xc] = uVar21;
  *(ulonglong *)(param_1 + 2) = (ulonglong)(uint)local_422 * (ulonglong)uVar14;
  uVar24 = (local_468 & 0xffffffff) * (ulonglong)(uint)local_420 +
           CONCAT44((uint)local_420 * local_468._4_4_,(uint)local_422);
  lVar1 = (ulonglong)uVar14 * (uVar24 & 0xffffffff);
  uVar9 = (uint)lVar1;
  uVar19 = uVar14 * (int)(uVar24 >> 0x20) + (int)((ulonglong)lVar1 >> 0x20);
  param_1[10] = uVar9;
  param_1[0xb] = uVar19;
  if (uVar21 != 0) {
    FUN_00023b64(uVar21 * 0x20 + -1,uVar14);
    uVar10 = ((uVar14 - 1) + uVar21 * 0x20) - extraout_r1;
    bVar23 = CARRY4(uVar9,uVar10);
    uVar9 = uVar9 + uVar10;
    uVar19 = uVar19 + bVar23;
  }
  uVar10 = (uint)((ulonglong)uVar22 * (ulonglong)uVar14);
  param_1[0xe] = uVar9;
  param_1[0xf] = uVar19;
  uVar3 = uVar10 - uVar9;
  iVar11 = (int)((ulonglong)uVar22 * (ulonglong)uVar14 >> 0x20) - (uVar19 + (uVar10 < uVar9));
  if (iVar11 < (int)(uint)(uVar3 < param_1[0x10])) {
    printf((char *)(DAT_00013a84 + 0x13c04));
    return 0xffffffff;
  }
  uVar9 = FUN_00023c80(uVar3,iVar11);
  param_1[8] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0xffffffff;
  param_1[0x11] = uVar9;
  local_460 = (int)uVar25;
  if ((local_41a == 0) && (local_40c != 0)) {
    param_1[6] = 0x20;
    param_1[8] = CONCAT13(uStack_401,uStack_405._1_3_);
    if (CONCAT13(uStack_401,uStack_405._1_3_) == 0) {
      if (uVar21 == 0) {
        printf((char *)(DAT_000139e0 + 0x13468));
        return 0xffffffff;
      }
      puts((char *)(DAT_00013a2c + 0x13884));
      uVar9 = param_1[0x11];
    }
    else if (uVar21 != 0) {
      puts((char *)(DAT_00013a5c + 0x13b1c));
      uVar9 = param_1[0x11];
    }
    if (uVar9 < 0xfff5) {
      printf((char *)(DAT_00013a1c + 0x13818),uVar9,0xfff5);
    }
    FUN_00012b10(param_1,abStack_430);
    param_1[0x17] = 0;
    uVar9 = uVar14 * CONCAT11(uStack_3fd,local_3fe);
    param_1[0x16] = uVar9;
    if (uVar9 == 0) {
      puts((char *)(DAT_00013970 + 0x12ef4));
      if (local_422 < 3) {
        puts((char *)(DAT_00013a60 + 0x13b30));
      }
      else {
        piVar16 = *(int **)(iVar8 + DAT_00013a4c);
        if (*piVar16 == 0) {
          puts((char *)(DAT_00013974 + 0x12f24));
        }
        else {
          puts((char *)(DAT_00013a28 + 0x13848));
        }
        if ((*piVar16 == 0) ||
           (iVar11 = GetKey(DAT_0001397c + 0x12f44,DAT_00013978 + 0x12f40), iVar11 == 0x31)) {
          uVar9 = (uint)local_422;
          if ((uVar9 < 7) || (local_400 == 6)) {
            uVar22 = uVar9 - 1;
            if (uVar22 == local_400) {
              uVar22 = uVar9 - 2;
            }
            uVar9 = uVar22 & 0xffff;
          }
          else {
            uVar22 = 6;
            uVar9 = uVar22;
          }
          param_1[0x17] = 0;
          local_3fe = (undefined1)uVar9;
          uStack_3fd = (undefined1)(uVar9 >> 8);
          param_1[0x16] = uVar22 * uVar14;
          FsWrite(param_1,0x200,uVar22 * uVar14,0,0x200,abStack_430);
          FsWrite(param_1,extraout_r1_00,0x32,0,2,&local_3fe);
          printf((char *)(DAT_00013980 + 0x12fc8),uVar22);
        }
      }
    }
    else {
      FsRead(param_1);
      iVar11 = memcmp(abStack_430,local_230,0x200);
      if (iVar11 != 0) {
        pbVar20 = &bStack_231;
        pcVar5 = (char *)(DAT_00013a34 + 0x138ac);
        puts((char *)(DAT_00013a30 + 0x138a4));
        iVar11 = 2;
        printf((char *)(DAT_00013a38 + 0x138c0));
        bVar23 = true;
        pbVar17 = abStack_430;
        do {
          pbVar20 = pbVar20 + 1;
          pbVar18 = pbVar17 + 1;
          if ((uint)*pbVar17 != (uint)*pbVar20) {
            iVar12 = DAT_00013a40 + 0x1391c;
            if (!bVar23) {
              iVar12 = DAT_00013a44 + 0x13924;
            }
            sprintf(acStack_444,pcVar5,iVar12,(int)pbVar17 - (int)abStack_430,(uint)*pbVar17,
                    (uint)*pbVar20);
            sVar6 = strlen(acStack_444);
            if (0x4e < sVar6 + iVar11) {
              iVar11 = 2;
              printf((char *)(DAT_00013a48 + 0x1395c));
            }
            printf((char *)(DAT_00013a3c + 0x138e0),acStack_444);
            sVar6 = strlen(acStack_444);
            bVar23 = false;
            iVar11 = sVar6 + iVar11;
          }
          pbVar17 = pbVar18;
        } while ((byte *)local_230 != pbVar18);
        putchar(10);
        piVar16 = *(int **)(iVar8 + DAT_00013a4c);
        if (*piVar16 == 0) {
          puts((char *)(DAT_00013a64 + 0x13b40));
        }
        else {
          puts((char *)(DAT_00013a50 + 0x13ac0));
        }
        if (*piVar16 != 0) {
          iVar11 = GetKey(DAT_00013a58 + 0x13ae0,DAT_00013a54 + 0x13adc);
          if (iVar11 == 0x31) {
            FsWrite(param_1,0x200,param_1[0x16],param_1[0x17],0x200,abStack_430);
          }
          else if (iVar11 == 0x32) {
            FsWrite(param_1,0x200,0,0,0x200,local_230);
          }
        }
      }
    }
    uVar9 = (uint)local_400;
    if (uVar9 == 0) {
      puts((char *)(DAT_000139e8 + 0x1351c));
      piVar16 = *(int **)(iVar8 + DAT_00013a4c);
      if (*piVar16 == 0) {
        puts((char *)(DAT_00013a24 + 0x13838));
      }
      else {
        puts((char *)(DAT_000139ec + 0x13540));
      }
      if ((*piVar16 == 0) ||
         (iVar11 = GetKey(DAT_000139f4 + 0x13560,DAT_000139f0 + 0x1355c), iVar11 != 0x31))
      goto LAB_00013008;
      if (local_422 < 2) {
LAB_00013b44:
        puts((char *)(DAT_00013a68 + 0x13b50));
        goto LAB_00013008;
      }
      if (CONCAT11(uStack_3fd,local_3fe) == 1) {
        if (local_422 == 2) goto LAB_00013b44;
        uVar15 = 2;
        uVar26 = VectorShiftRight((ulonglong)CONCAT24(uVar2,uVar14),0x20);
        uVar24 = VectorAdd(uVar26,uVar26,8);
      }
      else {
        uVar15 = 1;
        uVar24 = uVar25;
      }
      memset(local_230,0,0x200);
      local_4c = DAT_00013960;
      local_230[0] = 0x41615252;
      local_44 = 2;
      local_34 = -0x55ab0000;
      FsWrite(param_1,0xaa550000,(int)uVar24,(int)(uVar24 >> 0x20),0x200,local_230);
      local_400 = uVar15;
      FsWrite(param_1,extraout_r1_02,0x30,0,2,&local_400);
      uVar9 = param_1[0x16];
      uVar22 = param_1[0x17];
      if (uVar9 != 0 || uVar22 != 0) {
        FsWrite(param_1,uVar22,uVar9 + 0x30,uVar22 + (0xffffffcf < uVar9),2,&local_400);
      }
      uVar9 = (uint)local_400;
    }
    param_1[0x13] = 0;
    param_1[0x12] = uVar14 * uVar9;
    FsRead(param_1,0x200,uVar14 * uVar9,0,0x200,local_230);
    if (((local_230[0] != 0x41615252) || ((int)local_4c != 0x61417272)) || (local_34 != -0x55ab0000)
       ) {
      puts((char *)(DAT_000139f8 + 0x13680));
      if (local_230[0] != 0x41615252) {
        printf((char *)(DAT_000139fc + 0x136ac));
      }
      if ((int)local_4c != 0x61417272) {
        printf((char *)(DAT_00013a00 + 0x136dc),(int)local_4c,0x1e4,0,(int)local_4c,0x61417272);
      }
      if (local_34 != -0x55ab0000) {
        printf((char *)(DAT_00013a04 + 0x1370c),local_34,0x1fc,0,local_34,0xaa550000);
      }
      piVar16 = *(int **)(iVar8 + DAT_00013a4c);
      if (*piVar16 == 0) {
        puts((char *)(DAT_00013a20 + 0x13828));
      }
      else {
        puts((char *)(DAT_00013a08 + 0x13730));
      }
      if ((*piVar16 != 0) &&
         (iVar8 = GetKey(DAT_00013a10 + 0x13750,DAT_00013a0c + 0x1374c), iVar8 != 0x31)) {
        param_1[0x12] = 0;
        param_1[0x13] = 0;
        goto LAB_00013008;
      }
      memset(local_230,0,0x200);
      local_230[0] = 0x41615252;
      local_4c = DAT_00013960;
      local_34 = -0x55ab0000;
      local_44 = 2;
      FsWrite(param_1,2,param_1[0x12],param_1[0x13],0x200,local_230);
    }
    if (param_1[0x12] != 0 || param_1[0x13] != 0) {
      param_1[0x14] = local_4c._4_4_;
    }
LAB_00013008:
    uVar9 = param_1[6];
    lVar1 = (local_468 & 0xffffffff) * (uVar25 & 0xffffffff);
    uVar14 = (uint)lVar1;
    uVar19 = local_460 * local_468._4_4_ + (int)((ulonglong)lVar1 >> 0x20);
    if (uVar9 != 0x20) goto LAB_000130a4;
    param_1[4] = uVar14;
    param_1[5] = uVar19;
    param_1[7] = 0x1c;
    puVar4 = calloc(0xc,1);
    param_1[0x27] = (uint)puVar4;
    if (puVar4 == (undefined4 *)0x0) goto LAB_0001304c;
    if (local_3ee == ')') {
      *puVar4 = local_3e9;
      puVar4[1] = local_3e5;
      *(undefined2 *)(puVar4 + 2) = local_3e1;
      *(undefined1 *)((int)puVar4 + 10) = local_3df;
    }
    else {
      free(puVar4);
      param_1[0x27] = 0;
    }
  }
  else {
    if (param_1[0x19] == 0) {
      if (uVar9 < 0xff5) {
        param_1[6] = 0xc;
      }
      else {
        param_1[6] = 0x10;
        if (0xfff4 < uVar9) {
          printf((char *)(DAT_000139d8 + 0x13420),uVar9);
          return 0xffffffff;
        }
      }
      FUN_00012b10(param_1,abStack_430);
      goto LAB_00013008;
    }
    lVar1 = (local_468 & 0xffffffff) * (uVar25 & 0xffffffff);
    uVar14 = (uint)lVar1;
    uVar19 = local_460 * local_468._4_4_ + (int)((ulonglong)lVar1 >> 0x20);
    if (((int)uVar19 >> 1 < (int)(uint)((uVar14 >> 1 | uVar19 * -0x80000000) < uVar9 + 2)) ||
       (uVar22 == 0xb40 || (uVar22 == 0x5a0 || uVar22 == 0x2d0))) {
      uVar9 = 0xc;
      param_1[6] = 0xc;
    }
    else {
      uVar9 = 0x10;
      param_1[6] = 0x10;
    }
LAB_000130a4:
    param_1[7] = uVar9;
    param_1[4] = uVar14;
    param_1[5] = uVar19;
    puVar4 = calloc(0xc,1);
    param_1[0x27] = (uint)puVar4;
    if (puVar4 == (undefined4 *)0x0) {
LAB_0001304c:
      puts((char *)(DAT_00013984 + 0x13058));
      return 0xffffffff;
    }
    if ((uVar9 - 0xc & 0xfffffffb) == 0) {
      if (local_40c._2_1_ == ')') {
        *puVar4 = uStack_405;
        puVar4[1] = CONCAT13(local_3fe,CONCAT21(local_400,uStack_401));
        *(ushort *)(puVar4 + 2) = CONCAT11(uStack_3fc,uStack_3fd);
        *(undefined1 *)((int)puVar4 + 10) = local_3fb;
      }
      else {
        free(puVar4);
        param_1[0x27] = 0;
      }
    }
  }
  uVar22 = param_1[0x11];
  iVar8 = FUN_00023d54(uVar14 << 3,uVar19 << 3 | uVar14 >> 0x1d,uVar9,0);
  if (iVar8 - 2U < uVar22) {
    printf((char *)(DAT_00013a88 + 0x13c20),uVar22,iVar8 - 2U);
    uVar7 = 0xffffffff;
  }
  else {
    if (param_1[0xc] == 0) {
      if (param_1[8] == 0) {
        printf((char *)(DAT_00013a8c + 0x13c6c));
        return 0xffffffff;
      }
    }
    else if ((param_1[0xc] & 0xf) != 0) {
      printf((char *)(DAT_00013988 + 0x1315c));
      return 0xffffffff;
    }
    uVar7 = 0;
    if (*piVar13 != 0) {
      puts((char *)(DAT_00013990 + 0x13180));
      if (param_1[0x19] == 0) {
        pcVar5 = strncpy((char *)local_230,(char *)&local_42d,8);
        local_228 = 0;
        printf((char *)(DAT_000139dc + 0x13450),pcVar5);
      }
      else {
        printf((char *)(DAT_00013994 + 0x131ac),
               (local_429 >> 0x18) << 0x10 | (local_429 >> 0x10 & 0xff) << 8 | local_429 >> 8 & 0xff
              );
      }
      uVar14 = (uint)local_41b;
      if (uVar14 == 0xf0) {
        iVar8 = DAT_00013a6c + 0x13b60;
      }
      else {
        if (uVar14 == 0xf8) {
          iVar8 = 1;
        }
        else if (uVar14 == 0xf9) {
          iVar8 = 2;
        }
        else if (uVar14 == 0xfa) {
          iVar8 = 3;
        }
        else if (uVar14 == 0xfb) {
          iVar8 = 4;
        }
        else if (uVar14 == 0xfc) {
          iVar8 = 5;
        }
        else if (uVar14 == 0xfd) {
          iVar8 = 6;
        }
        else if (uVar14 == 0xfe) {
          iVar8 = 7;
        }
        else {
          if (uVar14 != 0xff) {
            iVar8 = DAT_00013998 + 0x1320c;
            goto LAB_00013208;
          }
          iVar8 = 8;
        }
        iVar8 = *(int *)(DAT_00013a18 + iVar8 * 8 + 0x137f0);
      }
LAB_00013208:
      printf((char *)(DAT_0001399c + 0x13214),uVar14,iVar8);
      printf((char *)(DAT_000139a0 + 0x13224),(uint)local_425);
      printf((char *)(DAT_000139a4 + 0x13234),param_1[0x10]);
      iVar11 = DAT_000139b4;
      iVar8 = DAT_000139b0;
      if (local_422 == 1) {
        iVar12 = DAT_00013a14 + 0x137dc;
      }
      else {
        iVar12 = DAT_000139a8 + 0x1324c;
      }
      printf((char *)(DAT_000139ac + 0x13258),(uint)local_422,iVar12);
      uVar14 = param_1[2];
      uVar9 = param_1[3];
      uStack_45c = (undefined4)(uVar25 >> 0x20);
      uVar26 = FUN_00023d54(uVar14,uVar9,local_460,uStack_45c);
      uVar7 = (undefined4)((ulonglong)uVar26 >> 0x20);
      printf((char *)(iVar8 + 0x1326c),uVar7,uVar14,uVar9,(int)uVar26,uVar7);
      printf((char *)(DAT_000139b8 + 0x132a8),(uint)local_420,param_1[6]);
      uVar14 = param_1[4];
      uVar9 = param_1[5];
      uVar26 = FUN_00023c80(uVar14,uVar9,local_460,uStack_45c);
      uVar7 = (undefined4)((ulonglong)uVar26 >> 0x20);
      printf((char *)(iVar11 + 0x13270),uVar7,uVar14,uVar9,(int)uVar26,uVar7);
      iVar8 = DAT_000139bc;
      if (param_1[8] == 0) {
        uVar14 = param_1[10];
        uVar9 = param_1[0xb];
        uVar26 = FUN_00023d54(uVar14,uVar9,local_460,uStack_45c);
        uVar7 = (undefined4)((ulonglong)uVar26 >> 0x20);
        printf((char *)(iVar8 + 0x13304),uVar7,uVar14,uVar9,(int)uVar26,uVar7);
        printf((char *)(DAT_000139c0 + 0x13324),param_1[0xc]);
      }
      else {
        printf((char *)(DAT_000139e4 + 0x134cc));
      }
      iVar8 = DAT_000139c4;
      uVar14 = param_1[0xe];
      uVar9 = param_1[0xf];
      uVar26 = FUN_00023d54(uVar14,uVar9,local_460,uStack_45c);
      uVar7 = (undefined4)((ulonglong)uVar26 >> 0x20);
      printf((char *)(iVar8 + 0x13344),uVar7,uVar14,uVar9,(int)uVar26,uVar7);
      lVar1 = (ulonglong)param_1[0x10] * (ulonglong)param_1[0x11];
      printf((char *)(DAT_000139c8 + 0x13368),param_1[0x11],(int)lVar1,
             (int)((ulonglong)lVar1 >> 0x20));
      printf((char *)(DAT_000139cc + 0x13380),(uint)local_418,(uint)local_416);
      if (param_1[0x19] != 0) {
        local_414 = local_414 & 0xffff;
      }
      printf((char *)(DAT_000139d0 + 0x13394),local_414);
      uVar14 = (uint)local_41d;
      if (local_41d == 0) {
        uVar14 = local_410;
      }
      printf((char *)(DAT_000139d4 + 0x133b4),uVar14);
      return 0;
    }
  }
  return uVar7;
}



/* ===== SetDosCodepage @ 00013c80 size=408 ===== */

int SetDosCodepage(int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  char *__format;
  int *piVar5;
  char acStack_30 [16];
  
  piVar4 = (int *)(DAT_00013e18 + 0x13c94);
  iVar3 = *piVar4;
  if (iVar3 < 0) {
    *piVar4 = 1;
    if (param_1 < 0) {
      setlocale(6,(char *)(DAT_00013e34 + 0x13dac));
      snprintf(acStack_30,0x10,(char *)(DAT_00013e38 + 0x13dc0),0x1b5);
      pcVar2 = nl_langinfo(10);
      iVar3 = libiconv_open(pcVar2,acStack_30);
      if (iVar3 != -1) goto LAB_00013d08;
      perror(acStack_30);
      iVar3 = *piVar4;
      *(undefined4 *)(DAT_00013e3c + 0x13df8) = 0xffffffff;
    }
    else {
      __format = (char *)(DAT_00013e1c + 0x13cd4);
      setlocale(6,(char *)(DAT_00013e20 + 0x13cd8));
      snprintf(acStack_30,0x10,__format,param_1);
      pcVar2 = nl_langinfo(10);
      iVar3 = libiconv_open(pcVar2,acStack_30);
      iVar1 = DAT_00013e2c;
      if (iVar3 != -1) {
LAB_00013d08:
        piVar4 = (int *)(DAT_00013e28 + 0x13d1c);
        *(int *)(DAT_00013e24 + 0x13d18) = iVar3;
        return *piVar4;
      }
      perror(acStack_30);
      piVar5 = (int *)(iVar1 + 0x13d44);
      *piVar5 = -1;
      if (param_1 != 0x1b5) {
        printf((char *)(DAT_00013e30 + 0x13d5c),0x1b5);
        snprintf(acStack_30,0x10,__format,0x1b5);
        pcVar2 = nl_langinfo(10);
        iVar3 = libiconv_open(pcVar2,acStack_30);
        if (iVar3 == -1) {
          perror(acStack_30);
          *piVar5 = -1;
          *piVar4 = 0;
          return 0;
        }
        *piVar5 = iVar3;
      }
      iVar3 = *piVar4;
    }
  }
  return iVar3;
}



/* ===== DosCharToPrintable @ 00013e40 size=236 ===== */

undefined4 DosCharToPrintable(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined1 local_30 [4];
  undefined1 *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  char acStack_20 [16];
  
  iVar2 = DAT_00013f34;
  iVar1 = *(int *)(DAT_00013f2c + 0x13e54);
  local_2c = local_30;
  local_28 = 1;
  local_24 = 4;
  local_30[0] = param_2;
  if (iVar1 < 0) {
    *(int *)(DAT_00013f2c + 0x13e54) = 1;
    setlocale(6,(char *)(iVar2 + 0x13ed0));
    snprintf(acStack_20,0x10,(char *)(DAT_00013f38 + 0x13ee4),0x1b5);
    pcVar4 = nl_langinfo(10);
    iVar2 = libiconv_open(pcVar4,acStack_20);
    if (iVar2 == -1) {
      perror(acStack_20);
    }
    iVar1 = *(int *)(DAT_00013f3c + 0x13f14);
    *(int *)(DAT_00013f40 + 0x13f18) = iVar2;
  }
  uVar3 = 0;
  if (iVar1 != 0) {
    iVar2 = libiconv(*(undefined4 *)(DAT_00013f30 + 0x13e9c),&local_2c,&local_28,param_1,&local_24);
    uVar3 = 0;
    if (iVar2 != -1) {
      uVar3 = 1;
    }
  }
  return uVar3;
}



/* ===== FUN_00013f44 @ 00013f44 size=268 ===== */

void FUN_00013f44(int param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  uVar1 = 0;
  if (*(int *)(param_2 + 0x28) != 0 || *(int *)(param_2 + 0x2c) != 0) {
    *param_2 = 0xe5;
    FsWrite();
    uVar1 = extraout_r1_00;
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    uVar2 = *(uint *)(param_2 + 0x30);
    iVar4 = *(int *)(param_2 + 0x34);
    uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar6 = *(uint *)(param_2 + 0x28);
    iVar7 = *(int *)(param_2 + 0x2c);
    local_48 = 0xe5;
    local_38 = 0;
    local_30 = 0;
    uStack_34 = uStack_44;
    uStack_2c = uStack_44;
    if ((int)(iVar4 - (iVar7 + (uint)(uVar2 < uVar6))) < 0 !=
        (SBORROW4(iVar4,iVar7) != SBORROW4(iVar4 - iVar7,(uint)(uVar2 < uVar6)))) {
      do {
        uVar3 = uVar2 + 0x20;
        iVar5 = iVar4 + (uint)(0xffffffdf < uVar2);
        FsWrite(param_1,uVar1,uVar2,iVar4,0x20,&local_48);
        uVar1 = extraout_r1;
        uVar2 = uVar3;
        iVar4 = iVar5;
      } while ((int)(iVar5 - (iVar7 + (uint)(uVar3 < uVar6))) < 0 !=
               (SBORROW4(iVar5,iVar7) != SBORROW4(iVar5 - iVar7,(uint)(uVar3 < uVar6))));
    }
  }
  uVar2 = (uint)*(ushort *)(param_2 + 0x1a);
  if (*(int *)(param_1 + 0x18) == 0x20) {
    uVar2 = CONCAT22(*(undefined2 *)(param_2 + 0x14),*(ushort *)(param_2 + 0x1a));
  }
  for (; (uVar2 != 0 && (uVar2 < *(int *)(param_1 + 0x44) + 2U)); uVar2 = NextCluster(param_1,uVar2)
      ) {
    SetOwner(param_1,uVar2,0);
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
  return;
}



/* ===== FUN_00014050 @ 00014050 size=172 ===== */

int FUN_00014050(int param_1)

{
  char *pcVar1;
  size_t sVar2;
  int iVar3;
  char *pcVar4;
  
  if (param_1 == 0) {
    *(undefined1 *)(DAT_00014108 + 0x140dc) = 0;
  }
  else {
    pcVar1 = (char *)FUN_00014050(*(undefined4 *)(param_1 + 0x3c));
    sVar2 = strlen(pcVar1);
    if (0x3ff < sVar2) {
                    /* WARNING: Subroutine does not return */
      Die((int)&DAT_000140fc + DAT_0001410c);
    }
    pcVar4 = (char *)(DAT_000140fc + 0x14080);
    pcVar1 = (char *)(DAT_00014100 + 0x14084);
    iVar3 = strcmp(pcVar1,pcVar4);
    sVar2 = strlen(pcVar1);
    if (iVar3 != 0) {
      *(undefined2 *)(pcVar1 + sVar2) = *(undefined2 *)pcVar4;
    }
    pcVar4 = *(char **)(param_1 + 0x20);
    if (iVar3 != 0) {
      sVar2 = sVar2 + 1;
    }
    if (pcVar4 == (char *)0x0) {
      pcVar4 = (char *)FileName(param_1);
    }
    strcpy(pcVar1 + sVar2,pcVar4);
  }
  return DAT_00014104 + 0x140d0;
}



/* ===== FUN_00014110 @ 00014110 size=1992 ===== */

/* WARNING: Type propagation algorithm not settling */

undefined4
FUN_00014110(int param_1,int *param_2,uint param_3,undefined4 param_4,uint param_5,uint param_6,
            undefined4 param_7)

{
  ushort uVar1;
  int iVar2;
  uint *__s;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined2 *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  char *__format;
  undefined8 uVar13;
  undefined4 local_50;
  uint local_48;
  uint uStack_44;
  undefined4 uStack_40;
  uint local_3c;
  uint uStack_38;
  undefined4 local_34;
  uint local_30;
  uint uStack_2c;
  
  if (param_5 == 0 && param_6 == 0) {
    local_3c = 0;
    uStack_38 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    local_48 = *(uint *)(DAT_000148e0 + 0x143cc);
    uStack_44 = *(uint *)(DAT_000148e0 + 0x143d0);
    local_30 = *(int *)(param_1 + 0x20) << 0x10;
    local_34 = CONCAT22((short)((uint)*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8)
                               >> 0x10),(short)((uint)*(int *)(param_1 + 0x20) >> 0x10));
    uStack_40 = CONCAT13(0x10,(int3)*(undefined4 *)(DAT_000148e0 + 0x143d4));
    uStack_2c = uStack_38;
  }
  else {
    iVar2 = FsRead(param_1,0x20,param_5,param_6,0x20,&local_48);
    if (iVar2 != 0) {
      return 1;
    }
  }
  iVar2 = FileType(param_7,&local_48);
  if (iVar2 != 0) {
    if ((iVar2 == 2) && ((uStack_40 & 0x10000000) != 0)) {
      puts((char *)(DAT_000148f0 + 0x1476c));
      return 1;
    }
    FileModify(param_7,&local_48);
    FsWrite(param_1,1,param_5,param_6,1,&local_48);
  }
  if ((local_48 & 0xff) == 0 || (local_48 & 0xff) == 0xe5) {
    LfnCheckOrphaned(param_1);
    return 0;
  }
  if (uStack_40._3_1_ == '\x0f') {
    LfnAddSlot(param_1,&local_48,param_5,param_6);
    return 0;
  }
  __s = (uint *)Alloc(param_1 + 0xa8,0x48);
  memset(__s,0,0x48);
  uVar3 = LfnGet(param_1,&local_48,__s + 0xc);
  __s[0x11] = 0;
  __s[10] = param_5;
  __s[0xb] = param_6;
  __s[0x10] = 0;
  __s[0xf] = param_3;
  __s[8] = uVar3;
  *__s = local_48;
  __s[1] = uStack_44;
  __s[2] = uStack_40;
  __s[3] = local_3c;
  __s[4] = uStack_38;
  __s[5] = local_34;
  __s[6] = local_30;
  __s[7] = uStack_2c;
  if (iVar2 == 2) {
    uVar4 = *(uint *)(param_1 + 0x40);
    uVar12 = (uVar4 - 1) + __s[7];
    iVar2 = FUN_00023abc(uVar12,uVar4);
    uVar3 = (uint)*(ushort *)((int)__s + 0x1a);
    if (*(int *)(param_1 + 0x18) == 0x20) {
      uVar3 = CONCAT22((short)__s[5],*(ushort *)((int)__s + 0x1a));
    }
    uVar9 = param_5;
    uVar11 = param_6;
    iVar10 = iVar2;
    if ((uVar12 < uVar4 || uVar3 < 2) || (*(int *)(param_1 + 0x44) + 2U <= uVar3)) {
LAB_000146ec:
      if (uVar9 == 0 && uVar11 == 0) {
LAB_000148c0:
                    /* WARNING: Subroutine does not return */
        Die(DAT_00014904 + 0x148cc);
      }
      puVar8 = (undefined2 *)((int)__s + 0x1a);
      *puVar8 = 0;
      FsWrite(param_1,puVar8,uVar9 + 0x1a,uVar11 + (0xffffffe5 < uVar9),2,puVar8);
      if (*(int *)(param_1 + 0x18) == 0x20) {
        uVar3 = __s[10];
        if (uVar3 != 0 || __s[0xb] != 0) {
          puVar5 = __s + 5;
          *(undefined2 *)puVar5 = 0;
          FsWrite(param_1,puVar5,uVar3 + 0x14,__s[0xb] + (uint)(0xffffffeb < uVar3),2,puVar5);
        }
      }
    }
    else {
      uVar12 = 0;
      while (uVar4 = uVar3, GetFat(&local_50,*(undefined4 *)(param_1 + 0x94),uVar4,param_1),
            local_50 != 0) {
        iVar10 = iVar10 + -1;
        if (uVar12 != 0) {
          SetFat(param_1,uVar12,uVar4);
        }
        uVar12 = uVar4;
        if ((iVar10 == 0) || (uVar3 = uVar4 + 1, *(int *)(param_1 + 0x44) + 2U <= uVar4 + 1))
        goto LAB_00014848;
      }
      if (uVar12 == 0) {
        uVar9 = __s[10];
        uVar11 = __s[0xb];
        goto LAB_000146ec;
      }
LAB_00014848:
      SetFat(param_1,uVar12,0xffffffff);
    }
    if (iVar10 != 0) {
      if (iVar2 == 1) {
        iVar6 = DAT_000148fc + 0x14844;
      }
      else {
        iVar6 = DAT_000148e8 + 0x14750;
      }
      printf((char *)(DAT_000148ec + 0x1475c),iVar2 - iVar10,iVar2,iVar6);
    }
  }
  *(uint **)*param_2 = __s;
  *param_2 = (int)(__s + 0x10);
  if (((param_5 != 0 || param_6 != 0) &&
      (iVar2 = strncmp((char *)&local_48,(char *)(DAT_000148d8 + 0x14270),0xb), iVar2 != 0)) &&
     (iVar2 = strncmp((char *)&local_48,(char *)(DAT_000148e4 + 0x14534),0xb), iVar2 != 0)) {
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  }
  iVar2 = *(int *)(param_1 + 0x8c);
  uVar1 = *(ushort *)((int)__s + 0x1a);
  uVar3 = (uint)uVar1;
  if (*(int *)(param_1 + 0x18) == 0x20) {
    uVar3 = CONCAT22((short)__s[5],uVar1);
    if (uVar3 < 2) {
      return 0;
    }
    if (uVar3 < *(int *)(param_1 + 0x44) + 2U) goto LAB_000142a4;
    uVar3 = CONCAT22((short)__s[5],uVar1);
  }
  else {
    if (uVar3 < 2) {
      return 0;
    }
    iVar10 = *(int *)(param_1 + 0x44);
    if (iVar10 + 2U <= uVar3) goto LAB_00014428;
LAB_000142a4:
    uVar12 = 0;
    iVar10 = 0;
    __format = (char *)(DAT_000148dc + 0x142bc);
    while( true ) {
      uVar4 = NextCluster(param_1,uVar3);
      puVar5 = (uint *)GetOwner(param_1,uVar3);
      if (puVar5 != (uint *)0x0) break;
      iVar6 = BadCluster(param_1,uVar3);
      if (iVar6 != 0) goto LAB_0001440c;
      if (iVar2 == 0) {
LAB_000142c0:
        iVar10 = iVar10 + 1;
        uVar12 = uVar3;
      }
      else {
        uVar13 = ClusterStart(param_1,uVar3);
        uVar7 = (undefined4)((ulonglong)uVar13 >> 0x20);
        iVar6 = FsCheck(param_1,uVar7,(int)uVar13,uVar7,*(undefined4 *)(param_1 + 0x40));
        if (iVar6 != 0) goto LAB_000142c0;
        uVar7 = FUN_00014050(__s);
        printf(__format,uVar7,iVar10,uVar3);
        if (uVar12 == 0) {
          local_50 = NextCluster(param_1,uVar3);
          uVar9 = __s[10];
          if (uVar9 == 0 && __s[0xb] == 0) {
            if (local_50 == 0) goto LAB_000148c0;
            *(int *)(param_1 + 0x20) = local_50;
            *(short *)((int)__s + 0x1a) = (short)local_50;
            *(short *)(__s + 5) = (short)((uint)local_50 >> 0x10);
            FsWrite(param_1,4,0x2c,0,4,&local_50);
          }
          else {
            *(short *)((int)__s + 0x1a) = (short)local_50;
            FsWrite(param_1,2,uVar9 + 0x1a,__s[0xb] + (uint)(0xffffffe5 < uVar9),2,(int)__s + 0x1a);
            if (*(int *)(param_1 + 0x18) == 0x20) {
              uVar9 = __s[10];
              if (uVar9 != 0 || __s[0xb] != 0) {
                puVar5 = __s + 5;
                *(undefined2 *)puVar5 = local_50._2_2_;
                FsWrite(param_1,puVar5,uVar9 + 0x14,__s[0xb] + (uint)(0xffffffeb < uVar9),2,puVar5);
              }
            }
          }
        }
        else {
          uVar7 = NextCluster(param_1,uVar3);
          SetFat(param_1,uVar12,uVar7);
        }
        SetFat(param_1,uVar3,0xfffffffe);
      }
      SetOwner(param_1,uVar3,__s);
      if ((uVar4 < 2) || (uVar3 = uVar4, *(int *)(param_1 + 0x44) + 2U <= uVar4)) goto LAB_0001440c;
    }
    if (__s == puVar5) {
      uVar7 = FUN_00014050();
      if (iVar10 == 1) {
        iVar2 = DAT_00014900 + 0x14868;
      }
      else {
        iVar2 = DAT_000148f4 + 0x147c8;
      }
      printf((char *)(DAT_000148f8 + 0x147d4),uVar7,iVar10,iVar2);
      if (uVar12 != 0) {
        SetFat(param_1,uVar12,0xffffffff);
        uVar3 = (uint)*(ushort *)((int)__s + 0x1a);
        iVar2 = *(int *)(param_1 + 0x18);
        goto LAB_00014414;
      }
      uVar3 = __s[10];
      if (uVar3 == 0 && __s[0xb] == 0) {
                    /* WARNING: Subroutine does not return */
        Die((int)&DAT_000148d8 + DAT_00014908);
      }
      puVar8 = (undefined2 *)((int)__s + 0x1a);
      *puVar8 = 0;
      FsWrite(param_1,puVar8,uVar3 + 0x1a,__s[0xb] + (uint)(0xffffffe5 < uVar3),2,puVar8);
      if (*(int *)(param_1 + 0x18) != 0x20) {
        uVar3 = (uint)*(ushort *)((int)__s + 0x1a);
        goto LAB_0001441c;
      }
      uVar3 = __s[10];
      if (uVar3 != 0 || __s[0xb] != 0) {
        puVar5 = __s + 5;
        *(undefined2 *)puVar5 = 0;
        FsWrite(param_1,puVar5,uVar3 + 0x14,__s[0xb] + (uint)(0xffffffeb < uVar3),2,puVar5);
        uVar3 = (uint)*(ushort *)((int)__s + 0x1a);
        iVar2 = *(int *)(param_1 + 0x18);
        goto LAB_00014414;
      }
      uVar3 = CONCAT22((short)__s[5],*(undefined2 *)((int)__s + 0x1a));
      goto LAB_0001441c;
    }
LAB_0001440c:
    uVar3 = (uint)*(ushort *)((int)__s + 0x1a);
    iVar2 = *(int *)(param_1 + 0x18);
LAB_00014414:
    if (iVar2 == 0x20) {
      uVar3 = uVar3 | (uint)(ushort)__s[5] << 0x10;
    }
  }
LAB_0001441c:
  if (uVar3 < 2) {
    return 0;
  }
  iVar10 = *(int *)(param_1 + 0x44);
LAB_00014428:
  if (uVar3 < iVar10 + 2U) {
    while ((iVar2 = BadCluster(param_1,uVar3), iVar2 == 0 &&
           (puVar5 = (uint *)GetOwner(param_1,uVar3), __s == puVar5))) {
      SetOwner(param_1,uVar3,0);
      uVar3 = NextCluster(param_1,uVar3);
      if (uVar3 < 2) {
        return 0;
      }
      if (*(int *)(param_1 + 0x44) + 2U <= uVar3) {
        return 0;
      }
    }
  }
  return 0;
}



/* ===== FUN_0001490c @ 0001490c size=444 ===== */

bool FUN_0001490c(int param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  uint __c;
  byte *pbVar4;
  char *__s;
  bool bVar5;
  
  if (param_1 == 0) {
    __s = (char *)(DAT_00014ac8 + 0x14928);
  }
  else {
    __s = (char *)(DAT_00014ad4 + 0x14a44);
  }
  iVar1 = strncmp(param_2,(char *)(DAT_00014acc + 0x14938),0xb);
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = strncmp(param_2,(char *)(DAT_00014ad0 + 0x14954),0xb);
  if (iVar1 == 0) {
    return false;
  }
  if (*(int *)(param_2 + 0x20) == 0) {
    if ((param_2[0xc] & 0x20U) != 0) {
      return true;
    }
  }
  else if ((param_2[0xc] & 0x20U) != 0) {
    return false;
  }
  pbVar4 = (byte *)(param_2 + -1);
  iVar1 = 0;
  do {
    pbVar4 = pbVar4 + 1;
    __c = (uint)*pbVar4;
    bVar5 = 0x7e < __c;
    if (__c != 0x7f) {
      bVar5 = 0x1e < __c;
    }
    if (!bVar5 || (__c == 0x7f || __c == 0x1f)) {
      return true;
    }
    if ((*pbVar4 & 0x80) != 0) {
      iVar1 = iVar1 + 1;
    }
    pcVar2 = strchr(__s,__c);
    if (pcVar2 != (char *)0x0) {
      return true;
    }
  } while (pbVar4 != (byte *)(param_2 + 10));
  if (*param_2 == ' ') {
    if (param_2[1] != ' ') {
      return true;
    }
    cVar3 = param_2[2];
LAB_00014a50:
    if (cVar3 != ' ') {
      return true;
    }
LAB_00014a58:
    if (param_2[3] != ' ') {
      return true;
    }
LAB_00014a64:
    if (param_2[4] != ' ') {
      return true;
    }
LAB_00014a70:
    if (param_2[5] != ' ') {
      return true;
    }
LAB_00014a7c:
    if (param_2[6] != ' ') {
      return true;
    }
LAB_00014a88:
    if (param_2[7] != ' ') {
      return true;
    }
  }
  else {
    cVar3 = param_2[2];
    if (param_2[1] == ' ') goto LAB_00014a50;
    if (cVar3 == ' ') goto LAB_00014a58;
    if (param_2[3] == ' ') goto LAB_00014a64;
    if (param_2[4] == ' ') goto LAB_00014a70;
    if (param_2[5] == ' ') goto LAB_00014a7c;
    if (param_2[6] == ' ') goto LAB_00014a88;
  }
  if (param_2[8] == ' ') {
    if (param_2[9] != ' ') {
      return true;
    }
  }
  else if (param_2[9] != ' ') goto LAB_00014a24;
  if (param_2[10] != ' ') {
    return true;
  }
LAB_00014a24:
  return iVar1 != 0 && param_1 != 0;
}



/* ===== FUN_00014ad8 @ 00014ad8 size=324 ===== */

void FUN_00014ad8(undefined4 param_1,int param_2)

{
  char *pcVar1;
  size_t sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_r1;
  undefined4 *puVar5;
  undefined4 *puVar6;
  char *__format;
  char local_50;
  char local_4f [47];
  
  if (*(int *)(param_2 + 0x28) == 0 && *(int *)(param_2 + 0x2c) == 0) {
    puts((char *)(DAT_00014c2c + 0x14c14));
    return;
  }
  puVar6 = *(undefined4 **)(DAT_00014c1c + 0x14af8 + DAT_00014c20);
  puVar5 = *(undefined4 **)(DAT_00014c1c + 0x14af8 + DAT_00014c24);
  __format = (char *)(DAT_00014c28 + 0x14b20);
  do {
    do {
      printf(__format);
      fflush((FILE *)*puVar6);
      pcVar1 = fgets(&local_50,0x2d,(FILE *)*puVar5);
    } while (pcVar1 == (char *)0x0);
    pcVar1 = strchr(&local_50,10);
    if (pcVar1 != (char *)0x0) {
      *pcVar1 = '\0';
    }
    sVar2 = strlen(&local_50);
    local_4f[sVar2] = '\0';
    pcVar1 = &local_50;
    if (local_50 == ' ' || local_50 == '\t') {
      do {
        pcVar1 = pcVar1 + 1;
      } while (*pcVar1 == '\t' || *pcVar1 == ' ');
    }
    iVar3 = FileCvt(pcVar1,param_2);
  } while (iVar3 == 0);
  if ((*(byte *)(param_2 + 0xc) & 0x20) == 0) {
    uVar4 = 0xb;
  }
  else {
    *(byte *)(param_2 + 0xc) = *(byte *)(param_2 + 0xc) & 0xdf;
    *(byte *)(param_2 + 0xb) = *(byte *)(param_2 + 0xb) & 0xe7;
    uVar4 = 0xd;
  }
  FsWrite(param_1,uVar4,*(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x2c),uVar4,
          param_2);
  if (*(int *)(param_2 + 0x20) != 0) {
    LfnFixChecksum(param_1,extraout_r1,*(undefined4 *)(param_2 + 0x30),
                   *(undefined4 *)(param_2 + 0x34),*(undefined4 *)(param_2 + 0x28),
                   *(undefined4 *)(param_2 + 0x2c),param_2);
  }
  return;
}



/* ===== FUN_00014c30 @ 00014c30 size=360 ===== */

void FUN_00014c30(int param_1,char *param_2)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  undefined4 extraout_r1_00;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  char *__s1;
  char *__format;
  undefined4 local_30;
  undefined2 local_2c;
  char local_2a;
  
  if (*(int *)(param_2 + 0x3c) == 0) {
    pcVar5 = *(char **)(param_1 + 0xa0);
  }
  else {
    pcVar5 = *(char **)(*(int *)(param_2 + 0x3c) + 0x44);
  }
  __format = (char *)(DAT_00014d98 + 0x14c64);
  puVar3 = (undefined4 *)(DAT_00014d9c + 0x14c6c);
  iVar4 = 0;
  do {
    sprintf((char *)&local_30,__format,iVar4);
    *(undefined4 *)param_2 = *puVar3;
    *(undefined2 *)(param_2 + 8) = local_2c;
    param_2[10] = local_2a;
    *(undefined4 *)(param_2 + 4) = local_30;
    __s1 = pcVar5;
    while( true ) {
      if (__s1 == (char *)0x0) {
        if ((param_2[0xc] & 0x20U) == 0) {
          FsWrite(param_1,0xb,*(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x2c),0xb,
                  param_2);
          uVar2 = extraout_r1_00;
        }
        else {
          param_2[0xc] = param_2[0xc] & 0xdf;
          param_2[0xb] = param_2[0xb] & 0xe7;
          FsWrite(param_1,0xd,*(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x2c),0xd,
                  param_2);
          uVar2 = extraout_r1;
        }
        if (*(int *)(param_2 + 0x20) != 0) {
          LfnFixChecksum(param_1,uVar2,*(undefined4 *)(param_2 + 0x30),
                         *(undefined4 *)(param_2 + 0x34),*(undefined4 *)(param_2 + 0x28),
                         *(undefined4 *)(param_2 + 0x2c),param_2);
        }
        return;
      }
      if ((param_2 != __s1) && (iVar1 = strncmp(__s1,param_2,0xb), iVar1 == 0)) break;
      __s1 = *(char **)(__s1 + 0x40);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 10000000);
                    /* WARNING: Subroutine does not return */
  Die(DAT_00014da0 + 0x14d78);
}



/* ===== FUN_00014da4 @ 00014da4 size=2704 ===== */

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_00014da4(int param_1,int *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  tm *ptVar4;
  char *__format;
  void *__s2;
  byte *pbVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined1 *puVar8;
  char *__s;
  char *pcVar9;
  uint uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  char *pcVar13;
  int *piVar14;
  int iVar15;
  void *__s1;
  int *piVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  undefined4 uVar20;
  char *pcVar21;
  int *piVar22;
  int extraout_r12;
  int extraout_r12_00;
  bool bVar23;
  int local_bc;
  int local_b8;
  int local_90;
  char acStack_8c [104];
  
  pcVar13 = (char *)*param_2;
  iVar7 = DAT_00015834 + 0x14dc0;
  if (pcVar13 == (char *)0x0) {
    return 0;
  }
  puVar8 = *(undefined1 **)(pcVar13 + 0x3c);
  iVar15 = 0;
  uVar20 = *(undefined4 *)(param_1 + 100);
  iVar18 = 0;
  pcVar21 = pcVar13;
  do {
    iVar3 = FUN_0001490c(uVar20,pcVar21);
    pcVar21 = *(char **)(pcVar21 + 0x40);
    if (iVar3 == 0) {
      iVar18 = iVar18 + 1;
    }
    else {
      iVar15 = iVar15 + 1;
    }
  } while (pcVar21 != (char *)0x0);
  if (((puVar8 != (undefined1 *)0x0) && (4 < iVar18 + iVar15)) && (iVar18 >> 1 < iVar15)) {
    uVar20 = FUN_00014050(puVar8);
    printf((char *)(DAT_000158c8 + 0x154f4),uVar20,iVar15,iVar18 + iVar15);
    if (param_3 == 0) {
      puts((char *)(DAT_000158ec + 0x15704));
      pcVar13 = (char *)*param_2;
      if (pcVar13 != (char *)0x0) goto LAB_00014e24;
    }
    else {
      if (**(int **)(iVar7 + DAT_00015870) == 0) {
        puts((char *)(DAT_000158e8 + 0x156d4));
        pcVar13 = (char *)*param_2;
      }
      else {
        iVar15 = GetKey(DAT_000158d0 + 0x1552c,DAT_000158cc + 0x15528);
        if (iVar15 == 0x79) {
          puVar11 = *(undefined1 **)(param_1 + 0x18);
          puVar12 = puVar11;
          if (puVar11 == (undefined1 *)0x20) {
            puVar12 = puVar8;
          }
          uVar10 = (uint)*(ushort *)(puVar8 + 0x1a);
          if (puVar11 == (undefined1 *)0x20) {
            uVar10 = CONCAT22(*(undefined2 *)(puVar12 + 0x14),*(ushort *)(puVar8 + 0x1a));
          }
          uVar19 = *(uint *)(puVar8 + 0x28);
          if (uVar19 == 0 && *(int *)(puVar8 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
            Die(DAT_000158f0 + 0x15810);
          }
          puVar6 = (undefined2 *)(puVar8 + 0x1a);
          *puVar6 = 0;
          uVar17 = uVar10 - 1;
          FsWrite(param_1,puVar6,uVar19 + 0x1a,*(int *)(puVar8 + 0x2c) + (uint)(0xffffffe5 < uVar19)
                  ,2,puVar6);
          if (*(int *)(param_1 + 0x18) == 0x20) {
            uVar19 = *(uint *)(puVar8 + 0x28);
            if (uVar19 == 0 && *(int *)(puVar8 + 0x2c) == 0) {
              if (uVar17 < 0xfffffffe) goto LAB_00015784;
              return 1;
            }
            puVar6 = (undefined2 *)(puVar8 + 0x14);
            *puVar6 = 0;
            FsWrite(param_1,puVar6,uVar19 + 0x14,
                    *(int *)(puVar8 + 0x2c) + (uint)(0xffffffeb < uVar19),2,puVar6);
          }
          while (uVar17 < 0xfffffffe) {
LAB_00015784:
            uVar19 = NextCluster(param_1,uVar10);
            SetFat(param_1,uVar10,0);
            uVar10 = uVar19;
            uVar17 = uVar19 - 1;
          }
          if (*(int *)(puVar8 + 0x28) != 0 || *(int *)(puVar8 + 0x2c) != 0) {
            *puVar8 = 0xe5;
            FsWrite(param_1);
            return 1;
          }
          return 1;
        }
        pcVar13 = (char *)*param_2;
      }
      if (pcVar13 != (char *)0x0) goto LAB_00014e24;
      local_bc = 0;
LAB_00015548:
      uVar20 = FUN_00014050(puVar8);
      printf((char *)(DAT_000158d4 + 0x15560),uVar20);
      bVar23 = true;
LAB_000152f8:
      if (local_bc != 0) {
        bVar23 = false;
      }
      if (bVar23) {
        uVar20 = FUN_00014050(puVar8);
        printf((char *)(DAT_000158d8 + 0x155fc),uVar20);
      }
    }
    return 0;
  }
LAB_00014e24:
  if (**(int **)(param_1 + 0xac) == 0) {
    pcVar21 = (char *)(DAT_00015838 + 0x1564c);
    __s = (char *)(DAT_0001583c + 0x15650);
    bVar23 = false;
    local_bc = 0;
    local_b8 = 0;
    piVar22 = param_2;
    do {
      iVar15 = strncmp(pcVar13,(char *)(DAT_00015840 + 0x14e78),0xb);
      if (iVar15 == 0) {
        iVar15 = DAT_00015890 + 0x1532c;
        if ((pcVar13[0xb] & 0x10U) != 0) goto switchD_00015390_default;
LAB_0001532c:
        uVar20 = FUN_00014050(pcVar13);
        printf((char *)(DAT_00015894 + 0x15344),uVar20);
        piVar14 = *(int **)(iVar7 + DAT_00015870);
        if (*piVar14 == 0) {
          puts((char *)(DAT_000158b8 + 0x15468));
        }
        else {
          puts((char *)(DAT_00015898 + 0x15368));
        }
        if (*piVar14 == 0) {
LAB_000153a8:
          if (*(int *)(pcVar13 + 0x28) != 0 || *(int *)(pcVar13 + 0x2c) != 0) {
            FUN_00014c30(param_1,pcVar13);
          }
          uVar20 = FileName(pcVar13);
          printf((char *)(DAT_000158a4 + 87000),uVar20);
LAB_00014ebc:
          pcVar13 = (char *)*piVar22;
          iVar15 = strncmp(pcVar13,(char *)(DAT_0001584c + 0x14ed4),0xb);
          if (iVar15 == 0) {
            local_b8 = local_b8 + 1;
          }
          else {
            local_bc = local_bc + 1;
          }
          goto LAB_00014ef0;
        }
        uVar20 = GetKey(DAT_000158a0 + 0x15388,DAT_0001589c + 0x15384);
        switch(uVar20) {
        case 0x31:
          goto LAB_000153f0;
        case 0x32:
          goto LAB_000153a8;
        case 0x33:
          FUN_00014ad8(param_1,pcVar13);
          goto LAB_00014ebc;
        case 0x34:
          uVar10 = *(uint *)(pcVar13 + 0x28);
          iVar18 = *(int *)(pcVar13 + 0x2c);
          if (uVar10 != 0 || iVar18 != 0) {
            pcVar9 = pcVar13 + 0x1c;
            pcVar9[0] = '\0';
            pcVar9[1] = '\0';
            pcVar9[2] = '\0';
            pcVar9[3] = '\0';
            FsWrite(param_1,pcVar9,uVar10 + 0x1c,iVar18 + (uint)(0xffffffe3 < uVar10),4,pcVar9);
            uVar10 = *(uint *)(pcVar13 + 0x28);
            if (uVar10 != 0 || *(int *)(pcVar13 + 0x2c) != 0) {
              pbVar5 = (byte *)(pcVar13 + 0xb);
              *pbVar5 = pcVar13[0xb] | 0x10;
              FsWrite(param_1,pbVar5,uVar10 + 0xb,
                      *(int *)(pcVar13 + 0x2c) + (uint)(0xfffffff4 < uVar10),1,pbVar5);
            }
          }
        }
switchD_00015390_default:
        if (param_3 != 0) goto LAB_00014ebc;
        printf((char *)(DAT_000158a8 + 0x153ec),iVar15);
LAB_000153f0:
        FUN_00013f44(param_1,pcVar13);
        pcVar13 = *(char **)(*piVar22 + 0x40);
        *piVar22 = (int)pcVar13;
      }
      else {
        iVar15 = strncmp(pcVar13,(char *)(DAT_00015844 + 0x14e94),0xb);
        if (iVar15 == 0) {
          iVar15 = DAT_00015848 + 0x14eb0;
          if ((pcVar13[0xb] & 0x10U) == 0) goto LAB_0001532c;
          goto switchD_00015390_default;
        }
LAB_00014ef0:
        if ((pcVar13[0xb] & 8U) == 0) {
          iVar15 = FUN_0001490c(*(undefined4 *)(param_1 + 100),pcVar13);
          if (iVar15 == 0) {
LAB_00014f10:
            __s2 = *(void **)(pcVar13 + 0x40);
            if (__s2 != (void *)0x0) {
LAB_00014f20:
              piVar14 = (int *)(pcVar13 + 0x40);
              pcVar13 = (char *)(DAT_00015850 + 0x14f2c);
              pcVar9 = (char *)(DAT_00015854 + 0x14f38);
LAB_00014f50:
              if ((*(byte *)((int)__s2 + 0xb) & 8) != 0) goto switchD_0001543c_default;
              __s1 = (void *)*piVar22;
              iVar15 = memcmp(__s1,__s2,0xb);
              if (iVar15 != 0) goto switchD_0001543c_default;
              uVar20 = FUN_00014050(__s1);
              iVar18 = *piVar22;
              uVar1 = *(ushort *)(iVar18 + 0x18);
              uVar2 = *(ushort *)(iVar18 + 0x16);
              uVar10 = (uVar1 & 0x1ff) >> 5;
              iVar15 = uVar10 - 1;
              if (uVar10 == 0) {
                iVar3 = 1;
                iVar15 = 0;
              }
              else {
                iVar3 = extraout_r12;
                if (1 < iVar15) {
                  iVar3 = 0;
                }
                if (iVar15 < 2) {
                  iVar3 = 1;
                }
                iVar15 = *(int *)(DAT_00015858 + iVar15 * 4 + 0x14fbc);
              }
              if ((uVar1 >> 9 & 3) != 0) {
                iVar3 = 0;
              }
              local_90 = (((((uint)(uVar1 >> 9) * 0x16d +
                            (uVar1 & 0x1f) + iVar15 + (uint)(uVar1 >> 0xb)) - iVar3) + 0xe44) *
                          0xa8c0 + (uint)(uVar2 >> 0xb) * 0x708 +
                                   ((uVar2 & 0x7ff) >> 5) * 0x1e + (uVar2 & 0x1f)) * 2;
              ptVar4 = localtime(&local_90);
              strftime(acStack_8c,99,pcVar13,ptVar4);
              sprintf(pcVar21,pcVar9,*(undefined4 *)(iVar18 + 0x1c),acStack_8c);
              printf((char *)(DAT_0001585c + 0x1506c),uVar20,pcVar21);
              iVar18 = *piVar14;
              uVar1 = *(ushort *)(iVar18 + 0x18);
              uVar2 = *(ushort *)(iVar18 + 0x16);
              uVar10 = (uVar1 & 0x1ff) >> 5;
              iVar15 = uVar10 - 1;
              if (uVar10 == 0) {
                iVar15 = 0;
                iVar3 = 1;
              }
              else {
                iVar3 = extraout_r12_00;
                if (1 < iVar15) {
                  iVar3 = 0;
                }
                if (iVar15 < 2) {
                  iVar3 = 1;
                }
                iVar15 = *(int *)(DAT_00015860 + iVar15 * 4 + 0x150ac);
              }
              if ((uVar1 >> 9 & 3) != 0) {
                iVar3 = 0;
              }
              local_90 = (((((uint)(uVar1 >> 9) * 0x16d +
                            (uVar1 & 0x1f) + iVar15 + (uint)(uVar1 >> 0xb)) - iVar3) + 0xe44) *
                          0xa8c0 + (uint)(uVar2 >> 0xb) * 0x708 +
                                   ((uVar2 & 0x7ff) >> 5) * 0x1e + (uVar2 & 0x1f)) * 2;
              ptVar4 = localtime(&local_90);
              strftime(acStack_8c,99,(char *)(DAT_00015864 + 0x1511c),ptVar4);
              sprintf(__s,(char *)(DAT_00015868 + 0x15140),*(undefined4 *)(iVar18 + 0x1c),acStack_8c
                     );
              printf((char *)(DAT_0001586c + 0x15150),__s);
              piVar16 = *(int **)(iVar7 + DAT_00015870);
              if (*piVar16 == 0) {
                puts((char *)(DAT_000158ac + 0x15414));
                if (*piVar16 != 0) goto LAB_00015420;
LAB_00015180:
                iVar15 = *piVar14;
                if (*(int *)(iVar15 + 0x28) != 0 || *(int *)(iVar15 + 0x2c) != 0) {
                  FUN_00014c30(param_1,iVar15);
                  iVar15 = *piVar14;
                }
                uVar20 = FileName(iVar15);
                printf((char *)(DAT_00015878 + 0x151b4),uVar20);
                goto switchD_0001543c_default;
              }
              puts((char *)(DAT_00015874 + 0x15174));
              if (*piVar16 == 0) goto LAB_00015180;
LAB_00015420:
              uVar20 = GetKey(DAT_000158b4 + 0x15434,DAT_000158b0 + 0x15430);
              switch(uVar20) {
              case 0x31:
                pcVar13 = (char *)*piVar22;
                goto LAB_000153f0;
              case 0x32:
                FUN_00013f44(param_1,*piVar14);
                __s2 = *(void **)(*piVar14 + 0x40);
                *piVar14 = (int)__s2;
                goto joined_r0x00014f4c;
              case 0x33:
                FUN_00014ad8(param_1,*piVar22);
                uVar20 = FUN_00014050(*piVar22);
                __format = (char *)(DAT_000158e0 + 0x15688);
                break;
              case 0x34:
                FUN_00014ad8(param_1,*piVar14);
                uVar20 = FUN_00014050(*piVar22);
                __format = (char *)(DAT_000158e4 + 0x156c8);
                break;
              case 0x35:
                iVar15 = *piVar22;
                if (*(int *)(iVar15 + 0x28) != 0 || *(int *)(iVar15 + 0x2c) != 0) {
                  FUN_00014c30(param_1,iVar15);
                  iVar15 = *piVar22;
                }
                uVar20 = FileName(iVar15);
                printf((char *)(DAT_000158dc + 0x15660),uVar20);
              default:
switchD_0001543c_default:
                iVar15 = *piVar14;
                piVar14 = (int *)(iVar15 + 0x40);
                __s2 = *(void **)(iVar15 + 0x40);
joined_r0x00014f4c:
                if (__s2 == (void *)0x0) goto LAB_00015250;
                goto LAB_00014f50;
              case 0x36:
                goto LAB_00015180;
              }
              printf(__format,uVar20);
              iVar15 = *piVar14;
              piVar14 = (int *)(iVar15 + 0x40);
              __s2 = *(void **)(iVar15 + 0x40);
              if (__s2 == (void *)0x0) goto LAB_000152b8;
              bVar23 = true;
              goto LAB_00014f50;
            }
            goto LAB_00015250;
          }
          pcVar13 = (char *)FUN_00014050(pcVar13);
          puts(pcVar13);
          uVar20 = FileName(*piVar22);
          printf((char *)(DAT_0001587c + 0x151dc),uVar20);
          piVar14 = *(int **)(iVar7 + DAT_00015870);
          if (*piVar14 != 0) {
            puts((char *)(DAT_000158bc + 0x15478));
            if (*piVar14 != 0) goto LAB_00015484;
LAB_0001520c:
            iVar15 = *piVar22;
            if (*(int *)(iVar15 + 0x28) != 0 || *(int *)(iVar15 + 0x2c) != 0) {
              FUN_00014c30(param_1,iVar15);
              iVar15 = *piVar22;
            }
            uVar20 = FileName(iVar15);
            printf((char *)(DAT_00015884 + 0x15240),uVar20);
LAB_00015240:
            pcVar13 = (char *)*piVar22;
            if ((pcVar13[0xb] & 8U) != 0) goto LAB_00015250;
            goto LAB_00014f10;
          }
          puts((char *)(DAT_00015880 + 0x15200));
          if (*piVar14 == 0) goto LAB_0001520c;
LAB_00015484:
          iVar15 = GetKey(DAT_000158c4 + 0x15498,DAT_000158c0 + 0x15494);
          if (iVar15 != 0x32) {
            if (iVar15 == 0x33) goto LAB_0001520c;
            if (iVar15 == 0x31) {
              FUN_00013f44(param_1,*piVar22);
              iVar15 = *piVar22;
              piVar22 = (int *)(iVar15 + 0x40);
              pcVar13 = *(char **)(iVar15 + 0x40);
              goto joined_r0x000152d0;
            }
            goto LAB_00015240;
          }
          FUN_00014ad8(param_1,*piVar22);
          pcVar13 = (char *)*piVar22;
          if (((pcVar13[0xb] & 8U) == 0) && (__s2 = *(void **)(pcVar13 + 0x40), __s2 != (void *)0x0)
             ) {
            bVar23 = true;
            goto LAB_00014f20;
          }
        }
        else {
LAB_00015250:
          if (!bVar23) {
            iVar15 = *piVar22;
            piVar22 = (int *)(iVar15 + 0x40);
            pcVar13 = *(char **)(iVar15 + 0x40);
            goto joined_r0x000152d0;
          }
        }
LAB_000152b8:
        bVar23 = false;
        local_bc = 0;
        local_b8 = 0;
        pcVar13 = (char *)*param_2;
        piVar22 = param_2;
      }
joined_r0x000152d0:
      if (pcVar13 == (char *)0x0) {
        bVar23 = param_3 != 0;
        if (local_b8 == 0 && bVar23) goto LAB_00015548;
        goto LAB_000152f8;
      }
    } while (**(int **)(param_1 + 0xac) == 0);
  }
  printf((char *)(DAT_0001588c + 0x15290),DAT_00015888 + 0x1528c);
  return 1;
}



/* ===== FUN_000158f4 @ 000158f4 size=3784 ===== */

undefined4 FUN_000158f4(int param_1,char *param_2)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined2 *puVar9;
  int extraout_r1;
  int iVar10;
  char *pcVar11;
  byte bVar12;
  int iVar13;
  char *__dest;
  uint *puVar14;
  char *pcVar15;
  int *piVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  code *pcVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  int extraout_r12;
  undefined2 uVar25;
  bool bVar26;
  uint local_160;
  undefined4 *local_144;
  uint local_130;
  uint local_12c;
  undefined4 local_128;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  int local_e8;
  undefined4 local_e4;
  int local_e0;
  int local_d8;
  
  local_144 = *(undefined4 **)(DAT_000167bc + 0x16168);
  iVar10 = DAT_000167c0 + 0x15918;
  if (local_144 != (undefined4 *)0x0) {
    uVar6 = FUN_00014050(param_2);
    snprintf((char *)&local_128,0x100,(char *)(DAT_000167c4 + 0x15944),uVar6);
    pcVar11 = (char *)&local_128;
    iVar19 = 0;
    do {
      if (*pcVar11 == '\0') break;
      iVar13 = iVar19 + 1;
      if ((*pcVar11 == '.') && (pcVar11[1] == '\0')) {
        *(undefined1 *)((int)&local_128 + iVar19) = 0;
        break;
      }
      pcVar11 = pcVar11 + 1;
      iVar19 = iVar13;
    } while (iVar13 != 0xff);
    iVar19 = (*(undefined4 **)(DAT_000167c8 + 0x16204))[1];
    if (0 < iVar19) {
      local_144 = (undefined4 *)**(undefined4 **)(DAT_000167c8 + 0x16204);
      iVar13 = 0;
      do {
        iVar7 = strcmp((char *)*local_144,(char *)&local_128);
        if (iVar7 == 0) goto LAB_000159e4;
        iVar13 = iVar13 + 1;
        local_144 = local_144 + 3;
      } while (iVar13 != iVar19);
    }
    local_144 = (undefined4 *)0x0;
  }
LAB_000159e4:
  iVar19 = DAT_000167d0;
  if (param_2 != (char *)0x0) {
    __dest = (char *)(DAT_000167cc + 0x1626c);
    pcVar11 = (char *)(DAT_000167d4 + 0x15a1c);
    do {
      while (bVar12 = param_2[0xb] & 0x10, (param_2[0xb] & 0x10U) == 0) {
        uVar22 = (uint)*(ushort *)(param_2 + 0x1a);
        if (*(int *)(param_1 + 0x18) == 0x20) {
          uVar22 = CONCAT22(*(undefined2 *)(param_2 + 0x14),*(ushort *)(param_2 + 0x1a));
LAB_0001629c:
          if (uVar22 == 1) {
LAB_00016500:
            uVar6 = FUN_00014050(param_2);
            printf((char *)(DAT_00016830 + 0x16518),uVar6);
            uVar22 = *(uint *)(param_2 + 0x28);
            iVar13 = *(int *)(param_2 + 0x2c);
            if (uVar22 == 0 && iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              Die((int)&DAT_000167bc + DAT_00016840);
            }
            pcVar15 = param_2 + 0x1a;
            pcVar15[0] = '\0';
            pcVar15[1] = '\0';
            FsWrite(param_1,pcVar15,uVar22 + 0x1a,iVar13 + (uint)(0xffffffe5 < uVar22),2,pcVar15);
            if (*(int *)(param_1 + 0x18) != 0x20) {
              uVar22 = (uint)*(ushort *)(param_2 + 0x1a);
              goto LAB_00015b30;
            }
            uVar22 = *(uint *)(param_2 + 0x28);
            iVar13 = *(int *)(param_2 + 0x2c);
            if (uVar22 == 0 && iVar13 == 0) {
              uVar22 = CONCAT22(*(undefined2 *)(param_2 + 0x14),*(undefined2 *)(param_2 + 0x1a));
            }
            else {
              pcVar15 = param_2 + 0x14;
              pcVar15[0] = '\0';
              pcVar15[1] = '\0';
              FsWrite(param_1,pcVar15,uVar22 + 0x14,iVar13 + (uint)(0xffffffeb < uVar22),2,pcVar15);
              uVar22 = (uint)*(ushort *)(param_2 + 0x1a);
              if (*(int *)(param_1 + 0x18) != 0x20) goto LAB_00015b30;
              uVar22 = CONCAT22(*(undefined2 *)(param_2 + 0x14),*(ushort *)(param_2 + 0x1a));
            }
          }
          if (*(int *)(param_1 + 0x44) + 2U <= uVar22) {
LAB_0001638c:
            uVar6 = FUN_00014050(param_2);
            uVar22 = (uint)*(ushort *)(param_2 + 0x1a);
            if (*(int *)(param_1 + 0x18) == 0x20) {
              uVar22 = CONCAT22(*(undefined2 *)(param_2 + 0x14),*(ushort *)(param_2 + 0x1a));
            }
            printf((char *)(DAT_00016820 + 0x163c0),uVar6,uVar22,*(int *)(param_1 + 0x44) + 1);
            uVar22 = *(uint *)(param_2 + 0x28);
            iVar13 = *(int *)(param_2 + 0x2c);
            if (uVar22 == 0 && iVar13 == 0) {
              if (*(int *)(param_1 + 0x18) == 0x20) {
                uVar22 = (uint)*(ushort *)(param_2 + 0x14) << 0x10;
              }
              else {
                uVar22 = 0;
              }
                    /* WARNING: Subroutine does not return */
              Die(DAT_0001683c + 0x167a4,*(ushort *)(param_2 + 0x1a) | uVar22,
                  *(int *)(param_1 + 0x44) + 1);
            }
            pcVar15 = param_2 + 0x1a;
            pcVar15[0] = '\0';
            pcVar15[1] = '\0';
            FsWrite(param_1,pcVar15,uVar22 + 0x1a,iVar13 + (uint)(0xffffffe5 < uVar22),2,pcVar15);
            if (*(int *)(param_1 + 0x18) != 0x20) {
              uVar22 = (uint)*(ushort *)(param_2 + 0x1a);
              goto LAB_00015b40;
            }
            uVar22 = *(uint *)(param_2 + 0x28);
            iVar13 = *(int *)(param_2 + 0x2c);
            if (uVar22 == 0 && iVar13 == 0) {
              uVar22 = CONCAT22(*(undefined2 *)(param_2 + 0x14),*(undefined2 *)(param_2 + 0x1a));
            }
            else {
              pcVar15 = param_2 + 0x14;
              pcVar15[0] = '\0';
              pcVar15[1] = '\0';
              FsWrite(param_1,pcVar15,uVar22 + 0x14,iVar13 + (uint)(0xffffffeb < uVar22),2,pcVar15);
              uVar22 = (uint)*(ushort *)(param_2 + 0x1a);
              if (*(int *)(param_1 + 0x18) != 0x20) goto LAB_00015b40;
              uVar22 = CONCAT22(*(undefined2 *)(param_2 + 0x14),*(ushort *)(param_2 + 0x1a));
            }
          }
          if (uVar22 - 1 < 0xfffffffe) {
LAB_00015b48:
            uVar21 = 0;
            local_160 = 0;
            pcVar15 = (char *)(DAT_000167e0 + 0x15b68);
            iVar13 = DAT_000167e4 + 0x15b74;
            uVar8 = uVar22;
            do {
              uVar22 = uVar8;
              GetFat(&local_128,*(undefined4 *)(param_1 + 0x94),uVar22,param_1);
              if ((local_128 == 0) || (iVar7 = BadCluster(param_1,uVar22), iVar7 != 0)) {
                uVar6 = FUN_00014050(param_2);
                if (local_128 == 0) {
                  iVar13 = DAT_0001682c + 0x164e8;
                }
                else {
                  iVar13 = DAT_0001680c + 0x15f10;
                }
                printf((char *)(DAT_00016810 + 0x15f1c),uVar6,iVar13,uVar22);
                if (local_160 != 0) {
LAB_000164e8:
                  SetFat(param_1,local_160,0xffffffff);
                  uVar22 = local_160;
                  break;
                }
                uVar22 = *(uint *)(param_2 + 0x28);
                iVar13 = *(int *)(param_2 + 0x2c);
                if (uVar22 == 0 && iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                  Die(DAT_00016838 + 0x16780);
                }
LAB_00015f30:
                pcVar15 = param_2 + 0x1a;
                *(short *)pcVar15 = (short)local_160;
                FsWrite(param_1,pcVar15,uVar22 + 0x1a,iVar13 + (uint)(0xffffffe5 < uVar22),2,pcVar15
                       );
                if (*(int *)(param_1 + 0x18) == 0x20) {
                  uVar22 = *(uint *)(param_2 + 0x28);
                  if (uVar22 != 0 || *(int *)(param_2 + 0x2c) != 0) {
                    pcVar15 = param_2 + 0x14;
                    *(short *)pcVar15 = (short)local_160;
                    FsWrite(param_1,pcVar15,uVar22 + 0x14,
                            *(int *)(param_2 + 0x2c) + (uint)(0xffffffeb < uVar22),2,pcVar15);
                    uVar22 = local_160;
                    break;
                  }
                }
                uVar22 = 0;
                break;
              }
              iVar7 = GetOwner(param_1,uVar22);
              if (iVar7 != 0) {
                uVar6 = FUN_00014050();
                printf(pcVar11,uVar6);
                uVar6 = FUN_00014050(param_2);
                printf(pcVar15,uVar6);
                uVar8 = (uint)*(ushort *)(iVar7 + 0x1a);
                if (*(int *)(param_1 + 0x18) == 0x20) {
                  uVar8 = CONCAT22(*(undefined2 *)(iVar7 + 0x14),*(ushort *)(iVar7 + 0x1a));
                }
                if (uVar22 == uVar8 || 0xfffffffd < uVar8 - 1) {
                  uVar17 = 0;
                }
                else {
                  uVar17 = 0;
                  do {
                    uVar17 = uVar17 + 1;
                    uVar8 = NextCluster(param_1,uVar8);
                  } while (uVar8 != uVar22 && uVar8 - 1 < 0xfffffffe);
                }
                bVar1 = param_2[0xb];
                uVar8 = *(uint *)(param_1 + 0x40);
                if (*(int *)(iVar7 + 0x28) == 0 && *(int *)(iVar7 + 0x2c) == 0) {
                  printf((char *)(DAT_00016834 + 0x165dc),*(int *)(iVar7 + 0x2c),
                         (int)((ulonglong)uVar8 * (ulonglong)uVar21),
                         (int)((ulonglong)uVar8 * (ulonglong)uVar21 >> 0x20));
LAB_00015ec8:
                  if (local_160 != 0) goto LAB_000164e8;
                  uVar22 = *(uint *)(param_2 + 0x28);
                  iVar13 = *(int *)(param_2 + 0x2c);
                  if (uVar22 != 0 || iVar13 != 0) goto LAB_00015f30;
                  goto LAB_00015edc;
                }
                if (*(int *)(param_2 + 0x28) == 0 && *(int *)(param_2 + 0x2c) == 0) {
                  printf((char *)(DAT_000167fc + 0x15e80),*(int *)(param_2 + 0x2c),
                         (int)((ulonglong)uVar8 * (ulonglong)uVar17),
                         (int)((ulonglong)uVar8 * (ulonglong)uVar17 >> 0x20));
                }
                else {
                  uVar6 = (undefined4)((ulonglong)uVar8 * (ulonglong)uVar21 >> 0x20);
                  piVar16 = *(int **)(iVar10 + DAT_000167e8);
                  if (*piVar16 == 0) {
                    printf((char *)(DAT_00016804 + 0x15eb8),uVar6,
                           (int)((ulonglong)uVar8 * (ulonglong)uVar21),uVar6);
                    iVar23 = *piVar16;
                  }
                  else {
                    if ((bVar1 & 0x10) == 0) {
                      iVar23 = DAT_000167ec + 0x15cf4;
                    }
                    else {
                      iVar23 = DAT_00016800 + 0x15ea4;
                    }
                    printf((char *)(DAT_000167f0 + 0x15d04),uVar6,
                           (int)((ulonglong)uVar8 * (ulonglong)uVar17),
                           (int)((ulonglong)uVar8 * (ulonglong)uVar17 >> 0x20),iVar23);
                    iVar23 = *piVar16;
                  }
                  if ((iVar23 == 0) ||
                     (iVar23 = GetKey(DAT_000167f4 + 0x15d20,iVar13), iVar23 != 0x31))
                  goto LAB_00015ec8;
                }
                uVar8 = (uint)*(ushort *)(iVar7 + 0x1a);
                if (*(int *)(param_1 + 0x18) == 0x20) {
                  uVar8 = CONCAT22(*(undefined2 *)(iVar7 + 0x14),*(ushort *)(iVar7 + 0x1a));
                }
                if (0xfffffffd < uVar8 - 1) {
                  uVar21 = 0;
joined_r0x00016488:
                  if (uVar8 != uVar22) {
                    uVar21 = (uint)*(ushort *)(iVar7 + 0x1a);
                    if (*(int *)(param_1 + 0x18) == 0x20) {
                      uVar21 = CONCAT22(*(undefined2 *)(iVar7 + 0x14),*(ushort *)(iVar7 + 0x1a));
                    }
                    /* WARNING: Subroutine does not return */
                    Die(DAT_000167f8 + 0x15da8,uVar22,uVar21);
                  }
                  goto LAB_00015b78;
                }
                uVar21 = 0;
                if (uVar22 == uVar8) {
LAB_00015db4:
                  uVar8 = *(uint *)(iVar7 + 0x28);
                  if (uVar8 == 0 && *(int *)(iVar7 + 0x2c) == 0) goto LAB_00015edc;
                  puVar9 = (undefined2 *)(iVar7 + 0x1a);
                  *puVar9 = 0;
                  FsWrite(param_1,puVar9,uVar8 + 0x1a,
                          *(int *)(iVar7 + 0x2c) + (uint)(0xffffffe5 < uVar8),2,puVar9);
                  if (*(int *)(param_1 + 0x18) != 0x20) goto LAB_00015df4;
                  uVar8 = *(uint *)(iVar7 + 0x28);
                  if (uVar8 != 0 || *(int *)(iVar7 + 0x2c) != 0) {
                    puVar9 = (undefined2 *)(iVar7 + 0x14);
                    *puVar9 = 0;
                    FsWrite(param_1,puVar9,uVar8 + 0x14,
                            *(int *)(iVar7 + 0x2c) + (uint)(0xffffffeb < uVar8),2,puVar9);
                    goto LAB_00015df4;
                  }
                }
                else {
                  do {
                    uVar17 = uVar8;
                    uVar8 = NextCluster(param_1,uVar17);
                    uVar21 = uVar21 + 1;
                    if (0xfffffffd < uVar8 - 1) goto joined_r0x00016488;
                  } while (uVar8 != uVar22);
                  if (uVar17 == 0) goto LAB_00015db4;
                  SetFat(param_1,uVar17,0xffffffff);
LAB_00015df4:
                  uVar8 = *(uint *)(iVar7 + 0x28);
                  if (uVar8 != 0 || *(int *)(iVar7 + 0x2c) != 0) {
                    iVar23 = uVar21 * *(int *)(param_1 + 0x40);
                    *(int *)(iVar7 + 0x1c) = iVar23;
                    FsWrite(param_1,iVar23,uVar8 + 0x1c,
                            *(int *)(iVar7 + 0x2c) + (uint)(0xffffffe3 < uVar8),4,
                            (int *)(iVar7 + 0x1c));
                  }
                }
                uVar8 = uVar22;
                if ((bVar1 & 0x10) != 0) {
                  return 1;
                }
                for (; uVar8 - 1 < 0xfffffffe; uVar8 = NextCluster(param_1,uVar8)) {
                  SetOwner(param_1,uVar8,0);
                }
              }
LAB_00015b78:
              SetOwner(param_1,uVar22,param_2);
              if ((*(int *)(param_1 + 0xb8) != 0) &&
                 (*(uint *)(*(int *)(param_1 + 0xb8) + 0xc) <= uVar22)) {
                *(int *)(param_2 + 0x38) = *(int *)(param_2 + 0x38) + 1;
              }
              uVar8 = NextCluster(param_1,uVar22);
              uVar21 = uVar21 + 1;
              local_160 = uVar22;
            } while (uVar8 != 0xffffffff);
          }
          else {
            uVar21 = 0;
            uVar22 = uVar21;
          }
        }
        else {
LAB_00015b28:
          if (uVar22 == 1) goto LAB_00016500;
LAB_00015b30:
          if (*(int *)(param_1 + 0x44) + 2U <= uVar22) goto LAB_0001638c;
LAB_00015b40:
          uVar21 = 0;
          if (uVar22 != 0) goto LAB_00015b48;
        }
        iVar13 = *(int *)(param_1 + 0xb8);
        if ((iVar13 != 0) && (*(int *)(param_2 + 0x38) != 0)) {
          iVar7 = *(int *)(iVar13 + 8);
          FUN_00023b64(*(int *)(param_2 + 0x38),iVar7);
          if (extraout_r1 != 0) {
            iVar7 = iVar7 - extraout_r1;
            uVar8 = *(uint *)(iVar13 + 0xc);
            uVar17 = *(uint *)(param_1 + 0x44);
            if (uVar8 != uVar17 && iVar7 != 0) {
              uVar18 = 0;
              uVar24 = uVar22;
              do {
                if (uVar8 <= uVar24 && uVar24 <= uVar17 + 1) {
                  uVar8 = uVar24;
                }
                GetFat(&local_128,*(undefined4 *)(param_1 + 0x94),uVar8,param_1);
                if (local_128 == 0) {
                  SetFat(param_1,uVar22,uVar8);
                  SetOwner(param_1,uVar22,param_2);
                  iVar7 = iVar7 + -1;
                  uVar22 = uVar8;
                  if (iVar7 == 0) {
                    SetFat(param_1,uVar8,0xffffffff);
                    SetOwner(param_1,uVar8,param_2);
                    break;
                  }
                }
                uVar24 = uVar8 + 1;
                uVar17 = *(uint *)(param_1 + 0x44);
                uVar18 = uVar18 + 1;
                uVar8 = *(uint *)(*(int *)(param_1 + 0xb8) + 0xc);
              } while (uVar18 < uVar17 - uVar8);
            }
          }
        }
        if (local_144 == (undefined4 *)0x0) goto LAB_00015afc;
        memset(&local_128,0,0x68);
        uVar2 = *(ushort *)(param_2 + 0x10);
        uVar3 = *(ushort *)(param_2 + 0xe);
        iVar7 = ((uVar2 & 0x1ff) >> 5) - 1;
        uVar22 = *(uint *)(param_1 + 0x40) >> 9;
        iVar13 = extraout_r12;
        if (iVar7 == -1) {
          iVar13 = 0;
        }
        local_e8 = uVar21 * uVar22;
        if (iVar7 == -1) {
          uVar22 = 1;
        }
        else {
          if (1 < iVar7) {
            uVar22 = 0;
          }
          if (iVar7 < 2) {
            uVar22 = 1;
          }
          iVar13 = *(int *)(DAT_00016814 + iVar7 * 4 + 0x160dc);
        }
        if ((uVar2 >> 9 & 3) != 0) {
          uVar22 = 0;
        }
        uVar4 = *(ushort *)(param_2 + 0x18);
        uVar21 = ((uVar4 & 0x1ff) >> 5) - 1;
        bVar26 = uVar21 == 0xffffffff;
        uVar5 = *(ushort *)(param_2 + 0x16);
        if (bVar26) {
          uVar21 = 1;
        }
        local_e0 = (byte)param_2[0xd] / 100 +
                   (((((uint)(uVar2 >> 9) * 0x16d + (uVar2 & 0x1f) + iVar13 + (uint)(uVar2 >> 0xb))
                     - uVar22) + 0xe44) * 0xa8c0 +
                   (uint)(uVar3 >> 0xb) * 0x708 + ((uVar3 & 0x7ff) >> 5) * 0x1e + (uVar3 & 0x1f)) *
                   2;
        if (bVar26) {
          iVar13 = 0;
        }
        else {
          iVar13 = uVar21 * 4;
          uVar21 = (uint)((int)uVar21 < 2);
          iVar13 = *(int *)(iVar19 + iVar13 + 0x15a24);
        }
        if ((uVar4 >> 9 & 3) != 0) {
          uVar21 = 0;
        }
        local_f8 = *(undefined4 *)(param_2 + 0x1c);
        pcVar20 = (code *)local_144[2];
        local_f4 = 0;
        local_e4 = 0;
        local_d8 = (((((uint)(uVar4 >> 9) * 0x16d + (uVar4 & 0x1f) + iVar13 + (uint)(uVar4 >> 0xb))
                     - uVar21) + 0xe44) * 0xa8c0 +
                   (uint)(uVar5 >> 0xb) * 0x708 + ((uVar5 & 0x7ff) >> 5) * 0x1e + (uVar5 & 0x1f)) *
                   2;
        local_f0 = 0x200;
        if (pcVar20 == (code *)0x0) goto LAB_00015afc;
        pcVar15 = *(char **)(param_2 + 0x20);
        uVar6 = local_144[1];
        if (pcVar15 == (char *)0x0) {
          pcVar15 = (char *)FileName(param_2);
        }
        strcpy(__dest,pcVar15);
        (*pcVar20)(uVar6,__dest,bVar12,&local_128);
        param_2 = *(char **)(param_2 + 0x40);
        if (param_2 == (char *)0x0) {
          return 0;
        }
      }
      if (*(int *)(param_2 + 0x1c) != 0) {
        uVar6 = FUN_00014050(param_2);
        printf((char *)(DAT_00016828 + 0x164a8),uVar6);
        uVar22 = *(uint *)(param_2 + 0x28);
        iVar13 = *(int *)(param_2 + 0x2c);
        if (uVar22 != 0 || iVar13 != 0) {
          pcVar15 = param_2 + 0x1c;
          pcVar15[0] = '\0';
          pcVar15[1] = '\0';
          pcVar15[2] = '\0';
          pcVar15[3] = '\0';
          FsWrite(param_1,pcVar15,uVar22 + 0x1c,iVar13 + (uint)(0xffffffe3 < uVar22),4,pcVar15);
        }
      }
      iVar7 = *(int *)(param_2 + 0x3c);
      iVar13 = *(int *)(param_1 + 0x18);
      uVar2 = *(ushort *)(param_2 + 0x1a);
      uVar22 = (uint)uVar2;
      if (iVar7 == 0) {
LAB_00016420:
        if (iVar13 == 0x20) {
          uVar22 = CONCAT22(*(undefined2 *)(param_2 + 0x14),uVar2);
          if (uVar22 != 0) {
            bVar12 = 1;
            goto LAB_0001629c;
          }
        }
        else if (uVar22 != 0) {
          bVar12 = 1;
          goto LAB_00015b28;
        }
        uVar6 = FUN_00014050(param_2);
        printf((char *)(DAT_00016824 + 0x16450),uVar6);
        if (*(int *)(param_2 + 0x28) != 0 || *(int *)(param_2 + 0x2c) != 0) {
          *param_2 = -0x1b;
          FsWrite(param_1);
        }
      }
      else {
        iVar23 = strncmp(param_2,(char *)(DAT_000167d8 + 0x15a5c),0xb);
        if (iVar23 == 0) {
          uVar21 = (uint)*(ushort *)(iVar7 + 0x1a);
          if (iVar13 == 0x20) {
            uVar21 = CONCAT22(*(undefined2 *)(iVar7 + 0x14),*(ushort *)(iVar7 + 0x1a));
            uVar22 = CONCAT22(*(undefined2 *)(param_2 + 0x14),uVar2);
          }
          if (uVar21 != uVar22) {
            uVar6 = FUN_00014050(param_2);
            uVar22 = (uint)*(ushort *)(param_2 + 0x1a);
            if (*(int *)(param_1 + 0x18) == 0x20) {
              uVar22 = CONCAT22(*(undefined2 *)(param_2 + 0x14),*(ushort *)(param_2 + 0x1a));
            }
            printf((char *)(DAT_000167dc + 0x15ab4),uVar6,uVar22,uVar21);
            uVar22 = *(uint *)(param_2 + 0x28);
            local_130 = uVar21;
            if (uVar22 == 0 && *(int *)(param_2 + 0x2c) == 0) {
              if (uVar21 == 0) goto LAB_00015edc;
              *(uint *)(param_1 + 0x20) = uVar21;
              *(short *)(param_2 + 0x14) = (short)(uVar21 >> 0x10);
              puVar14 = &local_130;
              *(short *)(param_2 + 0x1a) = (short)uVar21;
LAB_00015ae4:
              FsWrite(param_1,4,0x2c,0,4,puVar14);
            }
            else {
              pcVar15 = param_2 + 0x1a;
              *(short *)pcVar15 = (short)uVar21;
              FsWrite(param_1,pcVar15,uVar22 + 0x1a,
                      *(int *)(param_2 + 0x2c) + (uint)(0xffffffe5 < uVar22),2,pcVar15);
              if (*(int *)(param_1 + 0x18) == 0x20) {
                uVar22 = *(uint *)(param_2 + 0x28);
                iVar13 = *(int *)(param_2 + 0x2c);
                if (uVar22 != 0 || iVar13 != 0) {
                  uVar25 = (undefined2)(local_130 >> 0x10);
LAB_0001674c:
                  pcVar15 = param_2 + 0x14;
                  *(undefined2 *)pcVar15 = uVar25;
                  FsWrite(param_1,pcVar15,uVar22 + 0x14,iVar13 + (uint)(0xffffffeb < uVar22),2,
                          pcVar15);
                }
              }
            }
          }
        }
        else {
          iVar23 = strncmp(param_2,(char *)(DAT_00016818 + 0x162e0),0xb);
          if (iVar23 != 0) goto LAB_00016420;
          iVar7 = *(int *)(iVar7 + 0x3c);
          if (iVar7 == 0) {
            uVar21 = 0;
            if (iVar13 == 0x20) goto LAB_0001660c;
          }
          else {
            uVar21 = (uint)*(ushort *)(iVar7 + 0x1a);
            if (iVar13 == 0x20) {
              uVar21 = CONCAT22(*(undefined2 *)(iVar7 + 0x14),*(ushort *)(iVar7 + 0x1a));
              if (*(uint *)(param_1 + 0x20) != 0 && *(uint *)(param_1 + 0x20) == uVar21) {
                uVar21 = 0;
              }
LAB_0001660c:
              uVar22 = CONCAT22(*(undefined2 *)(param_2 + 0x14),uVar2);
            }
            else if (*(uint *)(param_1 + 0x20) != 0 && uVar21 == *(uint *)(param_1 + 0x20)) {
              uVar21 = 0;
            }
          }
          if (uVar21 != uVar22) {
            uVar6 = FUN_00014050(param_2);
            uVar22 = (uint)*(ushort *)(param_2 + 0x1a);
            if (*(int *)(param_1 + 0x18) == 0x20) {
              uVar22 = CONCAT22(*(undefined2 *)(param_2 + 0x14),*(ushort *)(param_2 + 0x1a));
            }
            printf((char *)(DAT_0001681c + 0x16358),uVar6,uVar22,uVar21);
            uVar22 = *(uint *)(param_2 + 0x28);
            local_12c = uVar21;
            if (uVar22 == 0 && *(int *)(param_2 + 0x2c) == 0) {
              if (uVar21 == 0) {
LAB_00015edc:
                    /* WARNING: Subroutine does not return */
                Die(DAT_00016808 + 0x15ee8);
              }
              *(uint *)(param_1 + 0x20) = uVar21;
              *(short *)(param_2 + 0x1a) = (short)uVar21;
              *(short *)(param_2 + 0x14) = (short)(uVar21 >> 0x10);
              puVar14 = &local_12c;
              goto LAB_00015ae4;
            }
            pcVar15 = param_2 + 0x1a;
            *(short *)pcVar15 = (short)uVar21;
            FsWrite(param_1,pcVar15,uVar22 + 0x1a,
                    *(int *)(param_2 + 0x2c) + (uint)(0xffffffe5 < uVar22),2,pcVar15);
            if (*(int *)(param_1 + 0x18) == 0x20) {
              uVar22 = *(uint *)(param_2 + 0x28);
              iVar13 = *(int *)(param_2 + 0x2c);
              if (uVar22 != 0 || iVar13 != 0) {
                uVar25 = (undefined2)(local_12c >> 0x10);
                goto LAB_0001674c;
              }
            }
          }
        }
      }
LAB_00015afc:
      param_2 = *(char **)(param_2 + 0x40);
    } while (param_2 != (char *)0x0);
  }
  return 0;
}



/* ===== FUN_00016844 @ 00016844 size=452 ===== */

undefined4 FUN_00016844(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_r1;
  char *__s2;
  char *__s2_00;
  char *__s1;
  uint uVar4;
  uint uVar5;
  char *local_2c [2];
  
  if (param_2 == 0) {
    __s1 = *(char **)(param_1 + 0xa0);
  }
  else {
    __s1 = *(char **)(param_2 + 0x44);
  }
  if (__s1 != (char *)0x0) {
    __s2 = (char *)(DAT_00016a08 + 0x16874);
    __s2_00 = (char *)(DAT_00016a0c + 0x16880);
    do {
      if ((((__s1[0xb] & 0x10U) != 0) && (iVar1 = strncmp(__s1,__s2,0xb), iVar1 != 0)) &&
         (iVar1 = strncmp(__s1,__s2_00,0xb), iVar1 != 0)) {
        uVar2 = FileCd(param_3,__s1);
        uVar4 = (uint)*(ushort *)(__s1 + 0x1a);
        iVar1 = 0;
        if (*(int *)(param_1 + 0x18) == 0x20) {
          uVar4 = CONCAT22(*(undefined2 *)(__s1 + 0x14),*(ushort *)(__s1 + 0x1a));
        }
        uVar5 = uVar4 - 1;
        local_2c[0] = __s1 + 0x44;
        LfnReset(param_1);
        do {
          do {
            if (0xfffffffd < uVar5) goto LAB_00016998;
            ClusterStart(param_1,uVar4);
            FUN_00023b64(iVar1,*(undefined4 *)(param_1 + 0x40));
            iVar1 = iVar1 + 0x20;
            iVar3 = FUN_00014110(param_1,local_2c,__s1);
            if (iVar3 != 0) {
              return 1;
            }
            FUN_00023b64(iVar1,*(undefined4 *)(param_1 + 0x40));
          } while (extraout_r1 != 0);
          uVar4 = NextCluster(param_1,uVar4);
          uVar5 = uVar4 - 1;
        } while (uVar5 < 0xfffffffe);
LAB_00016998:
        LfnCheckOrphaned(param_1);
        iVar1 = FUN_00014da4(param_1,__s1 + 0x44,*(undefined4 *)(__s1 + 0x28));
        if (((iVar1 != 0) ||
            (iVar1 = FUN_000158f4(param_1,*(undefined4 *)(__s1 + 0x44)), iVar1 != 0)) ||
           (iVar1 = FUN_00016844(param_1,__s1,uVar2), iVar1 != 0)) {
          return 1;
        }
      }
      __s1 = *(char **)(__s1 + 0x40);
    } while (__s1 != (char *)0x0);
  }
  return 0;
}



/* ===== ScanRoot @ 00016a10 size=288 ===== */

undefined4 ScanRoot(int param_1,undefined4 param_2)

{
  uint uVar1;
  void *__ptr;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *local_24;
  
  __ptr = *(void **)(param_1 + 0xa0);
  *(undefined4 *)(DAT_00016b30 + 0x17290) = param_2;
  if (__ptr != (void *)0x0) {
    free(__ptr);
  }
  puVar5 = (undefined4 *)(param_1 + 0xa0);
  *puVar5 = 0;
  local_24 = puVar5;
  LfnReset(param_1);
  if (*(int *)(param_1 + 0x20) == 0) {
    if (*(int *)(param_1 + 0x30) != 0) {
      uVar4 = 0;
      do {
        uVar1 = uVar4 * 0x20;
        uVar4 = uVar4 + 1;
        iVar2 = FUN_00014110(param_1,&local_24,0,uVar1,*(uint *)(param_1 + 0x28) + uVar1,
                             *(int *)(param_1 + 0x2c) +
                             (uint)CARRY4(*(uint *)(param_1 + 0x28),uVar1),param_1 + 0xa4);
        if (iVar2 != 0) {
          return 1;
        }
      } while (uVar4 < *(uint *)(param_1 + 0x30));
    }
  }
  else {
    iVar2 = FUN_00014110(param_1,&local_24,0,param_1 + 0xa4,0,param_1 + 0xa4);
    if (iVar2 != 0) {
      return 1;
    }
  }
  LfnCheckOrphaned(param_1);
  iVar2 = FUN_00014da4(param_1,puVar5,0);
  if ((iVar2 == 0) && (iVar2 = FUN_000158f4(param_1,*(undefined4 *)(param_1 + 0xa0)), iVar2 == 0)) {
    uVar3 = FUN_00016844(param_1,0,param_1 + 0xa4);
    return uVar3;
  }
  return 1;
}



/* ===== Die @ 00016b34 size=104 ===== */

void Die(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar1 = DAT_00016ba4;
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  printf((char *)(DAT_00016ba0 + 0x16b58),DAT_00016b9c + 0x16b50,param_1);
  puVar2 = *(undefined4 **)(iVar1 + 0x16b68 + DAT_00016ba8);
  vfprintf((FILE *)*puVar2,param_1,&uStack_c);
  fputc(10,(FILE *)*puVar2);
  sleep(1);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== Malloc @ 00016bac size=28 ===== */

void Malloc(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if (pvVar1 != (void *)0x0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  Die((int)&DAT_00016bc8 + DAT_00016bc8);
}



/* ===== Alloc @ 00016bcc size=52 ===== */

void Alloc(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)Malloc(8);
  puVar1[1] = *param_1;
  *param_1 = (int)puVar1;
  uVar2 = Malloc(param_2);
  *puVar1 = uVar2;
  return;
}



/* ===== Free @ 00016c00 size=60 ===== */

void Free(undefined4 *param_1)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)*param_1;
  if (__ptr != (undefined4 *)0x0) {
    do {
      *param_1 = __ptr[1];
      free((void *)*__ptr);
      free(__ptr);
      __ptr = (undefined4 *)*param_1;
    } while (__ptr != (undefined4 *)0x0);
    return;
  }
  return;
}



/* ===== min @ 00016c3c size=12 ===== */

int min(int param_1,int param_2)

{
  if (param_2 < param_1) {
    param_1 = param_2;
  }
  return param_1;
}



/* ===== GetKey @ 00016c48 size=344 ===== */

uint GetKey(char *param_1,int param_2)

{
  FILE *pFVar1;
  uint __c;
  char *pcVar2;
  uint uVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  char *__format;
  bool bVar7;
  
  puVar5 = *(undefined4 **)(DAT_00016da0 + 0x16c60 + DAT_00016da4);
  puVar6 = *(undefined4 **)(DAT_00016da0 + 0x16c60 + DAT_00016da8);
  __format = (char *)(DAT_00016dac + 0x16c78);
  do {
    if (param_2 != 0) {
      printf(__format,param_2);
    }
    fflush((FILE *)*puVar6);
    do {
      while (pFVar1 = (FILE *)*puVar5, pFVar1->_chain != (_IO_FILE *)0x0) {
        pbVar4 = (byte *)pFVar1->_IO_write_base;
        if (pbVar4 < pFVar1->_IO_write_end) {
          pFVar1->_IO_write_base = (char *)(pbVar4 + 1);
          __c = (uint)*pbVar4;
        }
        else {
          __c = __fgetc_unlocked();
        }
        if (__c != 9 && __c != 0x20) goto LAB_00016ce0;
      }
      __c = fgetc(pFVar1);
    } while (__c == 9 || __c == 0x20);
LAB_00016ce0:
    if (__c == 0xffffffff) {
LAB_00016d98:
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    pcVar2 = strchr(param_1,__c);
    if (pcVar2 == (char *)0x0) {
      __c = 0;
    }
    do {
      pFVar1 = (FILE *)*puVar5;
      if (pFVar1->_chain == (_IO_FILE *)0x0) {
        uVar3 = fgetc(pFVar1);
        bVar7 = uVar3 != 0xffffffff;
      }
      else {
        pbVar4 = (byte *)pFVar1->_IO_write_base;
        if (pbVar4 < pFVar1->_IO_write_end) {
          pFVar1->_IO_write_base = (char *)(pbVar4 + 1);
          uVar3 = (uint)*pbVar4;
          bVar7 = true;
        }
        else {
          uVar3 = __fgetc_unlocked();
          bVar7 = uVar3 != 0xffffffff;
        }
      }
      if (uVar3 == 10) {
        bVar7 = false;
      }
    } while (bVar7);
    if (uVar3 == 0xffffffff) goto LAB_00016d98;
    if (__c != 0) {
      return __c & 0xff;
    }
    puts((char *)(DAT_00016db0 + 0x16d8c));
  } while( true );
}



/* ===== GetDevInfo @ 00016db4 size=320 ===== */

undefined4 GetDevInfo(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int local_90;
  int local_8c;
  int local_88;
  int iStack_84;
  stat64 sStack_80;
  
  iVar1 = DAT_00016ef4;
  uVar2 = *(undefined4 *)(DAT_00016ef4 + 0x16dd8);
  uVar3 = *(undefined4 *)(DAT_00016ef4 + 0x16ddc);
  uVar4 = *(undefined4 *)(DAT_00016ef4 + 0x16de0);
  puVar5 = (undefined4 *)(DAT_00016ef4 + 0x16de4);
  *param_2 = *(undefined4 *)(DAT_00016ef4 + 0x16dd4);
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  param_2[3] = uVar4;
  uVar2 = *(undefined4 *)(iVar1 + 0x16de8);
  uVar3 = *(undefined4 *)(iVar1 + 0x16dec);
  uVar4 = *(undefined4 *)(iVar1 + 0x16df0);
  param_2[4] = *puVar5;
  param_2[5] = uVar2;
  param_2[6] = uVar3;
  param_2[7] = uVar4;
  uVar2 = *(undefined4 *)(iVar1 + 0x16df8);
  param_2[8] = *(undefined4 *)(iVar1 + 0x16df4);
  param_2[9] = uVar2;
  iVar1 = fstat64(param_1,&sStack_80);
  if (iVar1 < 0) {
    perror((char *)(DAT_00016ef8 + 0x16eec));
    uVar2 = 0xffffffff;
  }
  else {
    if ((sStack_80.st_mode & 0xf000) == 0x8000) {
      param_2[1] = 0;
      *param_2 = 2;
      param_2[8] = (undefined4)sStack_80.st_size;
      param_2[9] = sStack_80.st_size._4_4_;
      return 0;
    }
    if ((sStack_80.st_mode & 0xf000) == 0x6000) {
      iVar1 = BlkDevGetSize(param_1,&local_88);
      if ((iVar1 == 0) && (local_88 != 0 || iStack_84 != 0)) {
        param_2[8] = local_88;
        param_2[9] = iStack_84;
      }
      iVar1 = BlkDevGetGeometry(param_1,&local_90,&local_8c);
      if (((iVar1 == 0) && (local_90 != 0)) && (local_8c != 0)) {
        param_2[3] = local_90;
        param_2[4] = local_8c;
      }
      iVar1 = BlkDevGetStart(param_1,&local_88);
      if (iVar1 == 0) {
        param_2[5] = local_88;
      }
      iVar1 = BlkDevGetSectorSize(param_1,&local_88);
      if (iVar1 == 0) {
        param_2[6] = local_88;
      }
      return 0;
    }
    uVar2 = 0;
    *param_2 = 1;
  }
  return uVar2;
}



/* ===== IsDevMounted @ 00016efc size=116 ===== */

undefined4 IsDevMounted(char *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  iVar1 = setmntent(DAT_00016f74 + 0x16f18,DAT_00016f70 + 0x16f14);
  if (iVar1 == 0) {
    return 0;
  }
  do {
    puVar3 = (undefined4 *)getmntent(iVar1);
    if (puVar3 == (undefined4 *)0x0) {
      uVar4 = 0;
      goto LAB_00016f4c;
    }
    iVar2 = strcmp(param_1,(char *)*puVar3);
  } while (iVar2 != 0);
  uVar4 = 1;
LAB_00016f4c:
  endmntent(iVar1);
  return uVar4;
}



/* ===== GetFat @ 00016f78 size=168 ===== */

void GetFat(uint *param_1,int param_2,uint param_3,int param_4)

{
  ushort *puVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(param_4 + 0x44) + 1U < param_3) {
                    /* WARNING: Subroutine does not return */
    Die((int)&DAT_00017020 + DAT_00017024,param_3);
  }
  iVar2 = *(int *)(param_4 + 0x18);
  if (iVar2 == 0x10) {
    *param_1 = (uint)*(ushort *)(param_2 + param_3 * 2);
    return;
  }
  if (iVar2 == 0x20) {
    uVar3 = *(uint *)(param_2 + param_3 * 4);
    *param_1 = uVar3 & 0xfffffff;
    param_1[1] = uVar3 >> 0x1c;
    return;
  }
  if (iVar2 == 0xc) {
    puVar1 = (ushort *)(param_2 + (param_3 * 3 >> 1));
    if ((param_3 & 1) == 0) {
      uVar3 = *puVar1 & 0xfff;
    }
    else {
      uVar3 = (uint)*(byte *)((int)puVar1 + 1) << 4 |
              (uint)(*(byte *)(param_2 + (param_3 * 3 >> 1)) >> 4);
    }
    *param_1 = uVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  Die(DAT_00017020 + 0x16fbc,iVar2);
}



/* ===== SetFat @ 00017028 size=576 ===== */

void SetFat(int *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 extraout_r1;
  int iVar5;
  int extraout_r1_00;
  int extraout_r1_01;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int local_30;
  int local_2c;
  
  uVar6 = param_1[0x11] + 1;
  if (uVar6 < param_2) {
                    /* WARNING: Subroutine does not return */
    Die(DAT_0001726c + 0x17258);
  }
  if (param_3 == 0xffffffff) {
    param_3 = 0xfff;
    if (param_1[0x19] == 0) {
      param_3 = 0xff8;
    }
    param_3 = ~(-1 << (param_1[7] & 0xffU)) & 0xfffffff0U | param_3;
  }
  else {
    if (param_3 == 0xfffffffe) {
      iVar4 = param_1[6];
      param_3 = ~(-1 << (param_1[7] & 0xffU)) & 0xfffff000U | 0xff7;
      goto joined_r0x0001706c;
    }
    if (uVar6 < param_3) {
                    /* WARNING: Subroutine does not return */
      Die((int)&DAT_00017268 + DAT_00017270,param_3);
    }
  }
  iVar4 = param_1[6];
joined_r0x0001706c:
  if (iVar4 == 0x10) {
    param_2 = param_2 * 2;
    iVar8 = param_1[0x25];
    uVar7 = 2;
    uVar3 = param_1[2] + param_2;
    iVar4 = param_1[3] + (uint)CARRY4(param_1[2],param_2);
    *(short *)(iVar8 + param_2) = (short)param_3;
    iVar8 = iVar8 + param_2;
    iVar5 = iVar4;
  }
  else if (iVar4 == 0x20) {
    GetFat(&local_30,param_1[0x25],param_2,param_1);
    uVar6 = param_2 * 4;
    uVar3 = param_1[2] + uVar6;
    iVar4 = param_1[3] + (uint)CARRY4(param_1[2],uVar6);
    iVar8 = param_1[0x25] + uVar6;
    *(uint *)(param_1[0x25] + param_2 * 4) = param_3 & 0xfffffff | local_2c << 0x1c;
    uVar7 = 4;
    iVar5 = iVar4;
  }
  else {
    if (iVar4 != 0xc) {
                    /* WARNING: Subroutine does not return */
      Die(DAT_00017268 + 0x17174);
    }
    uVar2 = param_2 * 3;
    iVar9 = param_1[0x25];
    uVar1 = uVar2 >> 1;
    uVar3 = param_1[2] + uVar1;
    iVar8 = iVar9 + uVar1;
    iVar5 = param_1[3] + (uint)CARRY4(param_1[2],uVar1);
    if ((param_2 & 1) == 0) {
      if (uVar6 == param_2) {
        local_30 = 0;
        iVar4 = iVar5;
      }
      else {
        GetFat(&local_30,iVar9,param_2 + 1,param_1);
        iVar4 = extraout_r1_00;
      }
      *(char *)(iVar9 + (uVar2 >> 1)) = (char)param_3;
      uVar7 = 2;
      *(byte *)(iVar8 + 1) = (byte)(param_3 >> 8) | (byte)(local_30 << 4);
    }
    else {
      GetFat(&local_30,iVar9,param_2 - 1,param_1);
      uVar7 = 2;
      *(byte *)(iVar9 + (uVar2 >> 1)) = (byte)((param_3 & 0xff) << 4) | (byte)((uint)local_30 >> 8);
      *(char *)(iVar8 + 1) = (char)((int)param_3 >> 4);
      iVar4 = extraout_r1_01;
    }
  }
  FsWrite(param_1,iVar4,uVar3,iVar5,uVar7,iVar8);
  if (1 < *param_1) {
    FsWrite(param_1,extraout_r1,uVar3 + param_1[4],
            iVar5 + param_1[5] + (uint)CARRY4(uVar3,param_1[4]),uVar7,iVar8);
  }
  return;
}



/* ===== ReadFat @ 00017274 size=1184 ===== */

undefined4 ReadFat(int *param_1)

{
  void *__ptr;
  void *pvVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint unaff_r8;
  size_t __size;
  char *__format;
  int iVar9;
  char *__format_00;
  uint uVar10;
  bool bVar11;
  undefined8 uVar12;
  uint uVar13;
  void *pvVar14;
  uint local_38 [2];
  uint local_30 [3];
  
  iVar4 = DAT_00017714 + 0x17294;
  if ((void *)param_1[0x25] != (void *)0x0) {
    free((void *)param_1[0x25]);
  }
  if ((void *)param_1[0x26] != (void *)0x0) {
    free((void *)param_1[0x26]);
  }
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  iVar9 = param_1[0x11];
  iVar5 = param_1[6];
  iVar6 = (iVar9 + 2) * iVar5;
  if (iVar5 == 0xc) {
    unaff_r8 = (uint)((ulonglong)(iVar6 + 0x17) * 0xaaaaaaab >> 0x20);
  }
  uVar8 = iVar6 + 7U >> 3;
  __size = uVar8;
  if (iVar5 == 0xc) {
    __size = (unaff_r8 >> 4) * 3;
  }
  __ptr = malloc(__size);
  uVar13 = uVar8;
  pvVar14 = __ptr;
  iVar5 = FsRead(param_1);
  if (iVar5 != 0) {
    if (__ptr != (void *)0x0) {
      free(__ptr);
    }
LAB_00017454:
    param_1[0x25] = 0;
    if ((void *)param_1[0x26] != (void *)0x0) {
      free((void *)param_1[0x26]);
    }
    param_1[0x26] = 0;
    return 1;
  }
  if (*param_1 < 2) goto LAB_00017324;
  pvVar1 = malloc(__size);
  uVar13 = uVar8;
  pvVar14 = pvVar1;
  iVar5 = FsRead(param_1);
  if (iVar5 != 0) {
    if (__ptr != (void *)0x0) {
      free(__ptr);
    }
    if (pvVar1 != (void *)0x0) {
      free(pvVar1);
    }
    goto LAB_00017454;
  }
  if (pvVar1 == (void *)0x0) goto LAB_00017324;
  iVar5 = memcmp(__ptr,pvVar1,uVar8);
  if (iVar5 != 0) {
    GetFat(local_38,__ptr,0,param_1,uVar13,pvVar14);
    GetFat(local_30,pvVar1,0,param_1);
    uVar2 = local_30[0];
    uVar10 = ~(-1 << (param_1[7] & 0xffU));
    uVar7 = uVar10 & ~local_38[0] & 0xfffffff0;
    bVar11 = (uVar10 & ~local_30[0] & 0xfffffff0) != 0;
    if (bVar11 && uVar7 == 0) {
      puts((char *)(DAT_00017738 + 0x17674));
      uVar13 = uVar8;
      pvVar14 = __ptr;
      FsWrite(param_1);
      if ((uVar10 & ~(uVar2 & local_38[0]) & 0xfffffff0) == 0) goto LAB_000175d0;
    }
    else {
      uVar2 = uVar10 & ~(local_38[0] & local_30[0]) & 0xfffffff0;
      if (uVar7 == 0 || bVar11) {
        if (uVar2 == 0) goto LAB_000175d0;
      }
      else {
        puts((char *)(DAT_00017720 + 0x175a8));
        uVar13 = uVar8;
        pvVar14 = pvVar1;
        FsWrite(param_1);
        memcpy(__ptr,pvVar1,uVar8);
        if (uVar2 != 0) goto LAB_000174e4;
LAB_000175d0:
        if (**(int **)(iVar4 + DAT_00017724) == 0) {
          puts((char *)(DAT_0001773c + 0x176cc));
          pvVar14 = __ptr;
          FsWrite(param_1,param_1[3],param_1[4] + param_1[2],
                  param_1[5] + param_1[3] + (uint)CARRY4(param_1[4],param_1[2]),uVar8,__ptr);
          uVar13 = uVar8;
        }
        else {
          puts((char *)(DAT_00017728 + 0x175f4));
          uVar12 = GetKey(DAT_00017730 + 0x17608,DAT_0001772c + 0x17604);
          uVar3 = (undefined4)((ulonglong)uVar12 >> 0x20);
          if ((int)uVar12 == 0x31) {
            pvVar14 = __ptr;
            FsWrite(param_1,uVar3,param_1[4] + param_1[2],
                    param_1[5] + param_1[3] + (uint)CARRY4(param_1[4],param_1[2]),uVar8,__ptr);
            uVar13 = uVar8;
          }
          else {
            uVar13 = uVar8;
            pvVar14 = pvVar1;
            FsWrite(param_1,uVar3,param_1[2],param_1[3],uVar8,pvVar1);
            memcpy(__ptr,pvVar1,uVar8);
          }
        }
      }
      if (uVar7 != 0 && bVar11) {
        puts((char *)(DAT_00017734 + 0x17650));
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
    }
  }
LAB_000174e4:
  free(pvVar1);
LAB_00017324:
  param_1[0x25] = (int)__ptr;
  pvVar1 = calloc((iVar9 + 2) * 4,1);
  param_1[0x26] = (int)pvVar1;
  if (2 < param_1[0x11] + 2U) {
    uVar8 = 2;
    __format = (char *)(DAT_00017718 + 0x17360);
    __format_00 = (char *)(DAT_0001771c + 0x17368);
    while( true ) {
      GetFat(local_30,__ptr,uVar8,param_1,uVar13,pvVar14);
      if (local_30[0] == 1) {
        printf(__format,uVar8 - 2);
        SetFat(param_1,uVar8,0xffffffff);
      }
      uVar2 = param_1[0x11] + 2;
      if (uVar2 <= local_30[0]) {
        uVar10 = 0xff7;
        if (param_1[0x19] != 0) {
          uVar10 = 0xff0;
        }
        if (local_30[0] < (~(-1 << (param_1[7] & 0xffU)) & 0xfffffff0U | uVar10)) {
          printf(__format_00,uVar8 - 2,local_30[0],param_1[0x11] + 1);
          SetFat(param_1,uVar8,0xffffffff);
          uVar2 = param_1[0x11] + 2;
        }
      }
      uVar8 = uVar8 + 1;
      if (uVar2 <= uVar8) break;
      __ptr = (void *)param_1[0x25];
    }
  }
  return 0;
}



/* ===== BadCluster @ 00017740 size=120 ===== */

undefined4 BadCluster(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint local_10 [2];
  
  GetFat(local_10,*(undefined4 *)(param_1 + 0x94),param_2,param_1);
  uVar2 = ~(-1 << (*(uint *)(param_1 + 0x1c) & 0xff));
  if (*(int *)(param_1 + 100) == 0) {
    uVar3 = 0xff7;
  }
  else {
    uVar3 = 0xff0;
  }
  if (local_10[0] < (uVar2 & 0xfffffff0 | uVar3)) {
    uVar1 = 0;
  }
  else if ((uVar2 & 0xfffff000 | 0xff7) < local_10[0]) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* ===== NextCluster @ 000177b8 size=140 ===== */

uint NextCluster(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint local_10 [2];
  
  GetFat(local_10,*(undefined4 *)(param_1 + 0x94),param_2,param_1);
  uVar1 = ~(-1 << (*(uint *)(param_1 + 0x1c) & 0xff));
  if (*(int *)(param_1 + 100) == 0) {
    uVar3 = 0xff7;
  }
  else {
    uVar3 = 0xff0;
  }
  uVar2 = uVar1 & 0xfffff000;
  if (((uVar1 & 0xfffffff0 | uVar3) <= local_10[0]) && (local_10[0] <= (uVar2 | 0xff7))) {
                    /* WARNING: Subroutine does not return */
    Die((int)&DAT_00017844 + DAT_00017844);
  }
  if ((uVar2 | 0xff8) <= local_10[0]) {
    local_10[0] = 0xffffffff;
  }
  return local_10[0];
}



/* ===== ClusterStart @ 00017848 size=48 ===== */

undefined8 ClusterStart(int param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = (ulonglong)*(uint *)(param_1 + 0x40) * (ulonglong)(param_2 - 2);
  uVar2 = (uint)lVar1;
  return CONCAT44(*(uint *)(param_1 + 0x40) * -(uint)(param_2 < 2) + (int)((ulonglong)lVar1 >> 0x20)
                  + *(int *)(param_1 + 0x3c) + (uint)CARRY4(uVar2,*(uint *)(param_1 + 0x38)),
                  uVar2 + *(uint *)(param_1 + 0x38));
}



/* ===== SetOwner @ 00017878 size=72 ===== */

void SetOwner(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x98);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    Die(DAT_000178c0 + 0x178b4);
  }
  if ((param_3 != 0) && (iVar1 = *(int *)(iVar2 + param_2 * 4), iVar1 != param_3 && iVar1 != 0)) {
                    /* WARNING: Subroutine does not return */
    Die((int)&DAT_000178c0 + DAT_000178c4);
  }
  *(int *)(iVar2 + param_2 * 4) = param_3;
  return;
}



/* ===== GetOwner @ 000178c8 size=16 ===== */

undefined4 GetOwner(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x98) != 0) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x98) + param_2 * 4);
  }
  return uVar1;
}



/* ===== FixBad @ 000178d8 size=312 ===== */

void FixBad(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  char *__format;
  uint uVar5;
  undefined8 uVar6;
  uint local_28 [3];
  
  if (**(int **)(DAT_00017a10 + 0x178e8 + DAT_00017a14) != 0) {
    puts((char *)(DAT_00017a1c + 0x17a0c));
  }
  if (2 < *(int *)(param_1 + 0x44) + 2U) {
    __format = (char *)(DAT_00017a18 + 0x17928);
    uVar4 = 2;
    do {
      GetFat(local_28,*(undefined4 *)(param_1 + 0x94),uVar4,param_1);
      iVar1 = GetOwner(param_1,uVar4);
      if (iVar1 == 0) {
        uVar3 = ~(-1 << (*(uint *)(param_1 + 0x1c) & 0xff));
        if (*(int *)(param_1 + 100) == 0) {
          uVar5 = 0xff7;
        }
        else {
          uVar5 = 0xff0;
        }
        if ((local_28[0] < (uVar3 & 0xfffffff0 | uVar5)) ||
           ((uVar3 & 0xfffff000 | 0xff7) < local_28[0])) {
          uVar6 = ClusterStart(param_1,uVar4);
          uVar2 = (undefined4)((ulonglong)uVar6 >> 0x20);
          iVar1 = FsCheck(param_1,uVar2,(int)uVar6,uVar2,*(undefined4 *)(param_1 + 0x40));
          if (iVar1 == 0) {
            printf(__format,uVar4);
            SetFat(param_1,uVar4,0xfffffffe);
          }
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(int *)(param_1 + 0x44) + 2U);
  }
  return;
}



/* ===== ReclaimFree @ 00017a20 size=340 ===== */

void ReclaimFree(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint local_30 [3];
  
  if (**(int **)(DAT_00017b74 + 0x17a30 + DAT_00017b78) != 0) {
    puts((char *)(DAT_00017b84 + 0x17b64));
  }
  if (2 < *(int *)(param_1 + 0x44) + 2U) {
    uVar3 = 2;
    uVar4 = 0;
    do {
      GetFat(local_30,*(undefined4 *)(param_1 + 0x94),uVar3,param_1);
      iVar1 = GetOwner(param_1,uVar3);
      if ((iVar1 == 0) && (local_30[0] != 0)) {
        uVar2 = (1 << (*(uint *)(param_1 + 0x1c) & 0xff)) - 1;
        if (*(int *)(param_1 + 100) == 0) {
          uVar5 = 0xff7;
        }
        else {
          uVar5 = 0xff0;
        }
        if ((local_30[0] < (uVar2 & 0xfffffff0 | uVar5)) ||
           ((uVar2 & 0xfffff000 | 0xff7) < local_30[0])) {
          SetFat(param_1,uVar3);
          uVar4 = uVar4 + 1;
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(int *)(param_1 + 0x44) + 2U);
    if (uVar4 != 0) {
      if (uVar4 == 1) {
        iVar1 = (int)&DAT_00017b74 + DAT_00017b88;
      }
      else {
        iVar1 = DAT_00017b7c + 0x17b30;
      }
      uVar3 = *(uint *)(param_1 + 0x40);
      printf((char *)(DAT_00017b80 + 0x17b48),uVar4,iVar1,uVar3,
             (int)((ulonglong)uVar4 * (ulonglong)uVar3),
             uVar3 * ((int)uVar4 >> 0x1f) + (int)((ulonglong)uVar4 * (ulonglong)uVar3 >> 0x20));
    }
  }
  return;
}



/* ===== ReclaimFile @ 00017b8c size=1072 ===== */

void ReclaimFile(int param_1)

{
  void *__ptr;
  int iVar1;
  uint uVar2;
  uint *puVar3;
  char *__format;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint local_78 [2];
  uint local_70 [19];
  
  if (**(int **)(DAT_00017fbc + 0x17b9c + DAT_00017fc0) != 0) {
    puts((char *)(DAT_00017fc8 + 98000));
  }
  uVar4 = *(int *)(param_1 + 0x44) + 2;
  __ptr = calloc(uVar4 * 4,1);
  uVar5 = uVar4;
  if (2 < uVar4) {
    uVar5 = 2;
    do {
      while( true ) {
        GetFat(local_78,*(undefined4 *)(param_1 + 0x94),uVar5,param_1);
        uVar6 = local_78[0];
        iVar1 = GetOwner(param_1,uVar5);
        if ((uVar6 == 0 || iVar1 != 0) || (*(int *)(param_1 + 0x44) + 2U <= uVar6)) break;
        GetFat(local_70,*(undefined4 *)(param_1 + 0x94),uVar6,param_1);
        iVar1 = GetOwner(param_1,uVar6);
        if ((iVar1 == 0) && (local_70[0] != 0)) {
          uVar7 = ~(-1 << (*(uint *)(param_1 + 0x1c) & 0xff));
          if (*(int *)(param_1 + 100) == 0) {
            uVar2 = 0xff7;
          }
          else {
            uVar2 = 0xff0;
          }
          if ((local_70[0] < (uVar7 & 0xfffffff0 | uVar2)) ||
             ((uVar7 & 0xfffff000 | 0xff7) < local_70[0])) {
            *(int *)((int)__ptr + uVar6 * 4) = *(int *)((int)__ptr + uVar6 * 4) + 1;
            break;
          }
        }
        uVar6 = uVar5 + 1;
        SetFat(param_1,uVar5,0xffffffff);
        uVar5 = uVar6;
        if (uVar4 == uVar6) goto LAB_00017c90;
      }
      uVar5 = uVar5 + 1;
    } while (uVar4 != uVar5);
LAB_00017c90:
    uVar5 = *(int *)(param_1 + 0x44) + 2;
  }
  uVar6 = 2;
  __format = (char *)(DAT_00017fc4 + 0x17cb8);
  do {
    if (uVar6 < uVar5) {
      do {
        GetFat(local_78,*(undefined4 *)(param_1 + 0x94),uVar6,param_1);
        if (local_78[0] != 0) {
          uVar5 = ~(-1 << (*(uint *)(param_1 + 0x1c) & 0xff));
          if (*(int *)(param_1 + 100) == 0) {
            uVar7 = 0xff7;
          }
          else {
            uVar7 = 0xff0;
          }
          if ((((local_78[0] < (uVar5 & 0xfffffff0 | uVar7)) ||
               ((uVar5 & 0xfffff000 | 0xff7) < local_78[0])) &&
              (iVar1 = GetOwner(param_1,uVar6), iVar1 == 0)) &&
             (*(int *)((int)__ptr + uVar6 * 4) == 0)) {
            uVar5 = uVar6;
            uVar7 = 0;
            do {
              uVar2 = uVar5;
              iVar1 = GetOwner(param_1,uVar2);
              if (iVar1 != 0) {
                SetFat(param_1,uVar7,0xffffffff);
                *(int *)((int)__ptr + uVar2 * 4) = *(int *)((int)__ptr + uVar2 * 4) + -1;
                break;
              }
              SetOwner(param_1,uVar2,local_70);
              uVar5 = NextCluster(param_1,uVar2);
              uVar7 = uVar2;
            } while (uVar5 != 0xffffffff);
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(int *)(param_1 + 0x44) + 2U);
    }
    if (uVar4 < 3) goto LAB_00017eb4;
    uVar5 = 2;
    uVar6 = 0;
    do {
      GetFat(local_78,*(undefined4 *)(param_1 + 0x94),uVar5,param_1);
      if (local_78[0] != 0) {
        uVar7 = ~(-1 << (*(uint *)(param_1 + 0x1c) & 0xff));
        if (*(int *)(param_1 + 100) == 0) {
          uVar2 = 0xff7;
        }
        else {
          uVar2 = 0xff0;
        }
        if (((local_78[0] < (uVar7 & 0xfffffff0 | uVar2)) ||
            ((uVar7 & 0xfffff000 | 0xff7) < local_78[0])) &&
           (iVar1 = GetOwner(param_1,uVar5), iVar1 == 0)) {
          iVar1 = *(int *)((int)__ptr + local_78[0] * 4);
          *(int *)((int)__ptr + local_78[0] * 4) = iVar1 + -1;
          if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            Die((int)&DAT_00017fbc + DAT_00017fcc);
          }
          SetFat(param_1,uVar5,0xffffffff);
          uVar6 = local_78[0];
          printf(__format,uVar5);
          if (*(int *)((int)__ptr + local_78[0] * 4) == 0) break;
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar4 != uVar5);
    if (uVar6 == 0) {
      uVar5 = 2;
      do {
        puVar3 = (uint *)GetOwner(param_1,uVar5);
        if ((local_70 == puVar3) && (uVar6 = uVar5, *(int *)((int)__ptr + uVar5 * 4) == 0)) {
          do {
            uVar7 = NextCluster(param_1,uVar6);
            SetFat(param_1,uVar6,0);
            SetOwner(param_1,uVar6,0);
            uVar6 = uVar7;
          } while (uVar7 - 1 < 0xfffffffe);
        }
        uVar5 = uVar5 + 1;
      } while (uVar4 != uVar5);
LAB_00017eb4:
      free(__ptr);
      return;
    }
    uVar5 = *(int *)(param_1 + 0x44) + 2;
  } while( true );
}



/* ===== UpdateFree @ 00017fd0 size=600 ===== */

uint UpdateFree(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  uint local_30 [3];
  
  iVar8 = DAT_00018228 + 0x17ff4;
  if (*(int *)(param_1 + 0x44) + 2U < 3) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    uVar3 = 2;
    do {
      while( true ) {
        GetFat(local_30,*(undefined4 *)(param_1 + 0x94),uVar3,param_1);
        uVar5 = uVar3 + 1;
        iVar1 = GetOwner(param_1,uVar3);
        uVar3 = uVar5;
        if (iVar1 == 0) break;
LAB_00018014:
        if (*(int *)(param_1 + 0x44) + 2U <= uVar5) goto LAB_000180a4;
      }
      uVar4 = (1 << (*(uint *)(param_1 + 0x1c) & 0xff)) - 1;
      if (*(int *)(param_1 + 100) == 0) {
        uVar2 = 0xff7;
      }
      else {
        uVar2 = 0xff0;
      }
      if (((uVar4 & 0xfffffff0 | uVar2) <= local_30[0]) &&
         (local_30[0] <= (uVar4 & 0xfffff000 | 0xff7))) goto LAB_00018014;
      uVar7 = uVar7 + 1;
    } while (uVar5 < *(int *)(param_1 + 0x44) + 2U);
  }
LAB_000180a4:
  if (*(int *)(param_1 + 0x48) != 0 || *(int *)(param_1 + 0x4c) != 0) {
    if (**(int **)(iVar8 + DAT_0001822c) == 0) {
      uVar3 = *(uint *)(param_1 + 0x50);
    }
    else {
      puts((char *)(DAT_0001823c + 0x18164));
      uVar3 = *(uint *)(param_1 + 0x50);
    }
    if (uVar3 == 0xffffffff) {
      printf((char *)(DAT_00018240 + 0x18180),uVar7);
      if (**(int **)(iVar8 + DAT_00018244) == 0) {
        return uVar7;
      }
      piVar6 = *(int **)(iVar8 + DAT_00018234);
      if (*piVar6 == 0) {
        puts((char *)(DAT_00018248 + 0x181b4));
      }
      else {
        puts((char *)(DAT_00018260 + 0x18224));
      }
      if (*piVar6 == 0) goto LAB_00018120;
      iVar8 = GetKey(DAT_00018250 + 0x181d4,DAT_0001824c + 0x181d0);
    }
    else {
      if (uVar3 == uVar7) {
        return uVar7;
      }
      printf((char *)(DAT_00018230 + 0x180f4),uVar3,uVar7);
      piVar6 = *(int **)(iVar8 + DAT_00018234);
      if (*piVar6 == 0) {
        puts((char *)(DAT_00018238 + 0x18114));
      }
      else {
        puts((char *)(DAT_00018254 + 0x181ec));
      }
      if (*piVar6 == 0) goto LAB_00018120;
      iVar8 = GetKey(DAT_0001825c + 0x1820c,DAT_00018258 + 0x18208);
    }
    if (iVar8 == 0x31) {
LAB_00018120:
      *(uint *)(param_1 + 0x50) = uVar7;
      local_30[0] = uVar7;
      FsWrite(param_1,4,*(uint *)(param_1 + 0x48) + 0x1e8,
              *(int *)(param_1 + 0x4c) + (uint)(0xfffffe17 < *(uint *)(param_1 + 0x48)),4,local_30);
      return uVar7;
    }
  }
  return uVar7;
}



/* ===== FUN_00018264 @ 00018264 size=176 ===== */

int * FUN_00018264(int *param_1,char *param_2)

{
  int iVar1;
  char *__s1;
  
  if (param_1 == (int *)0x0) {
    return (int *)0x0;
  }
  __s1 = (char *)*param_1;
  if (__s1 != (char *)0x0) {
    if (*param_2 == -0x1b) {
      while ((iVar1 = strncmp(__s1 + 1,param_2 + 1,10), iVar1 != 0 || (*(int *)(__s1 + 0x10) != 0)))
      {
        param_1 = (int *)(__s1 + 0x14);
        __s1 = *(char **)(__s1 + 0x14);
        if (__s1 == (char *)0x0) {
          return (int *)0x0;
        }
      }
      return param_1;
    }
    do {
      iVar1 = strncmp(__s1,param_2,0xb);
      if ((iVar1 == 0) && (*(int *)(__s1 + 0x10) == 0)) {
        return param_1;
      }
      param_1 = (int *)(__s1 + 0x14);
      __s1 = *(char **)(__s1 + 0x14);
    } while (__s1 != (char *)0x0);
  }
  return (int *)0x0;
}



/* ===== FileName @ 00018314 size=1112 ===== */

int FileName(int param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  byte *local_2c [2];
  
  pbVar8 = (byte *)(param_1 + -1);
  local_2c[0] = (byte *)(DAT_0001876c + 0x18334);
  iVar6 = 0;
  iVar3 = 0;
  do {
    while( true ) {
      pbVar8 = pbVar8 + 1;
      uVar7 = (uint)*pbVar8;
      iVar5 = iVar3;
      if (uVar7 != 0x20) break;
LAB_00018348:
      iVar6 = iVar6 + 1;
      iVar3 = iVar5;
      if (iVar6 == 8) goto LAB_000184c8;
    }
    iVar5 = iVar3 + 1;
    if (iVar3 < iVar6) {
      *local_2c[0] = 0x20;
      pbVar4 = local_2c[0] + 1;
      if (iVar5 < iVar6) {
        local_2c[0][1] = 0x20;
        pbVar4 = local_2c[0] + 2;
        if (iVar3 + 2 < iVar6) {
          local_2c[0][2] = 0x20;
          pbVar4 = local_2c[0] + 3;
          if (iVar3 + 3 < iVar6) {
            local_2c[0][3] = 0x20;
            pbVar4 = local_2c[0] + 4;
            if (iVar3 + 4 < iVar6) {
              local_2c[0][4] = 0x20;
              pbVar4 = local_2c[0] + 5;
              if (iVar3 + 5 < iVar6) {
                local_2c[0][5] = 0x20;
                pbVar4 = local_2c[0] + 6;
                if (iVar3 + 6 < iVar6) {
                  local_2c[0][6] = 0x20;
                  pbVar4 = local_2c[0] + 7;
                }
              }
            }
          }
        }
      }
      local_2c[0] = pbVar4;
      uVar7 = (uint)*pbVar8;
      iVar5 = (iVar5 + iVar6) - iVar3;
    }
    iVar3 = DosCharToPrintable(local_2c,uVar7);
    if (iVar3 != 0) goto LAB_00018348;
    if (uVar7 - 0x20 < 0x5f || 0x9f < uVar7) {
      *local_2c[0] = (byte)uVar7;
      local_2c[0] = local_2c[0] + 1;
      goto LAB_00018348;
    }
    *local_2c[0] = 0x5c;
    iVar6 = iVar6 + 1;
    local_2c[0][1] = (char)(uVar7 >> 6) + 0x30;
    pbVar4 = local_2c[0] + 3;
    local_2c[0][2] = (byte)((uVar7 << 0x1a) >> 0x1d) + 0x30;
    local_2c[0] = local_2c[0] + 4;
    *pbVar4 = ((byte)uVar7 & 7) + 0x30;
    iVar3 = iVar5;
  } while (iVar6 != 8);
LAB_000184c8:
  iVar3 = strncmp((char *)(param_1 + 8),(char *)(DAT_00018770 + 0x184dc),3);
  if (iVar3 == 0) goto LAB_000185d0;
  pbVar8 = local_2c[0] + 1;
  *local_2c[0] = 0x2e;
  bVar1 = *(byte *)(param_1 + 8);
  uVar7 = (uint)bVar1;
  if (uVar7 == 0x20) {
    if (*(char *)(param_1 + 9) != ' ') {
      local_2c[0] = local_2c[0] + 2;
      *pbVar8 = bVar1;
      uVar7 = (uint)*(byte *)(param_1 + 9);
      goto LAB_0001852c;
    }
    bVar2 = false;
    local_2c[0] = pbVar8;
LAB_00018690:
    if (*(char *)(param_1 + 10) == ' ') goto LAB_000185d0;
    *local_2c[0] = 0x20;
    pbVar8 = local_2c[0] + 1;
    if (!bVar2) {
      local_2c[0][1] = 0x20;
      pbVar8 = local_2c[0] + 2;
    }
    local_2c[0] = pbVar8;
    uVar7 = (uint)*(byte *)(param_1 + 10);
  }
  else {
    local_2c[0] = pbVar8;
    iVar3 = DosCharToPrintable(local_2c,uVar7);
    if (iVar3 == 0) {
      if (uVar7 - 0x20 < 0x5f || 0x9f < uVar7) {
        *local_2c[0] = bVar1;
        local_2c[0] = local_2c[0] + 1;
      }
      else {
        *local_2c[0] = 0x5c;
        local_2c[0][1] = (bVar1 >> 6) + 0x30;
        pbVar8 = local_2c[0] + 3;
        local_2c[0][2] = (byte)((uVar7 << 0x1a) >> 0x1d) + 0x30;
        local_2c[0] = local_2c[0] + 4;
        *pbVar8 = (bVar1 & 7) + 0x30;
      }
    }
    uVar7 = (uint)*(byte *)(param_1 + 9);
    if (uVar7 == 0x20) {
      bVar2 = true;
      goto LAB_00018690;
    }
LAB_0001852c:
    iVar3 = DosCharToPrintable(local_2c,uVar7);
    if (iVar3 == 0) {
      if (uVar7 - 0x20 < 0x5f || 0x9f < uVar7) {
        *local_2c[0] = (byte)uVar7;
        local_2c[0] = local_2c[0] + 1;
      }
      else {
        *local_2c[0] = 0x5c;
        local_2c[0][1] = (char)(uVar7 >> 6) + 0x30;
        pbVar8 = local_2c[0] + 3;
        local_2c[0][2] = (byte)((uVar7 << 0x1a) >> 0x1d) + 0x30;
        local_2c[0] = local_2c[0] + 4;
        *pbVar8 = ((byte)uVar7 & 7) + 0x30;
      }
    }
    uVar7 = (uint)*(byte *)(param_1 + 10);
    if (uVar7 == 0x20) goto LAB_000185d0;
  }
  iVar3 = DosCharToPrintable(local_2c,uVar7);
  if (iVar3 == 0) {
    if (uVar7 - 0x20 < 0x5f || 0x9f < uVar7) {
      *local_2c[0] = (byte)uVar7;
      local_2c[0] = local_2c[0] + 1;
    }
    else {
      *local_2c[0] = 0x5c;
      local_2c[0][1] = (char)(uVar7 >> 6) + 0x30;
      pbVar8 = local_2c[0] + 3;
      local_2c[0][2] = (byte)((uVar7 << 0x1a) >> 0x1d) + 0x30;
      local_2c[0] = local_2c[0] + 4;
      *pbVar8 = ((byte)uVar7 & 7) + 0x30;
    }
  }
LAB_000185d0:
  iVar3 = DAT_00018774;
  *local_2c[0] = 0;
  return iVar3 + 0x185e4;
}



/* ===== FUN_00018778 @ 00018778 size=140 ===== */

void FUN_00018778(void *param_1)

{
  undefined4 uVar1;
  void *__ptr;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *__format;
  
  if (param_1 == (void *)0x0) {
    return;
  }
  __format = (char *)(DAT_00018804 + 0x187a0);
  iVar5 = DAT_00018808 + 0x187a4;
  pvVar2 = *(void **)((int)param_1 + 0x14);
  iVar4 = DAT_0001880c + 0x187ac;
  if (*(int *)((int)param_1 + 0x10) == 0) goto LAB_000187d0;
  do {
    FUN_00018778();
    __ptr = param_1;
    while( true ) {
      param_1 = pvVar2;
      free(__ptr);
      if (param_1 == (void *)0x0) {
        return;
      }
      pvVar2 = *(void **)((int)param_1 + 0x14);
      if (*(int *)((int)param_1 + 0x10) != 0) break;
LAB_000187d0:
      __ptr = param_1;
      if (*(int *)((int)param_1 + 0xc) != 0) {
        iVar3 = iVar5;
        if (*(int *)((int)param_1 + 0xc) != 1) {
          iVar3 = iVar4;
        }
        uVar1 = FileName(param_1);
        printf(__format,iVar3,uVar1);
      }
    }
  } while( true );
}



/* ===== FileCvt @ 00018810 size=448 ===== */

undefined4 FileCvt(byte *param_1,undefined1 *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  bool bVar4;
  char *pcVar5;
  uint __c;
  undefined1 *puVar6;
  size_t __n;
  char *__s;
  int iVar7;
  
  bVar4 = false;
  __s = (char *)(DAT_000189d0 + 0x18830);
  __n = 8;
  iVar7 = DAT_000189d4 + 0x18838;
  for (; __c = (uint)*param_1, __c != 0; param_1 = param_1 + 1) {
    while( true ) {
      if ((0x5e < __c - 0x20) || (pcVar5 = strchr(__s,__c), pcVar5 != (char *)0x0)) {
        puts((char *)(DAT_000189e4 + 0x189a8));
        return 0;
      }
      if (__c == 0x2e) break;
      if (__c == 0x5c) {
        pbVar1 = param_1 + 1;
        if ((7 < (byte)(*pbVar1 - 0x30)) || (pbVar2 = param_1 + 2, 7 < (byte)(*pbVar2 - 0x30))) {
LAB_000189b0:
          puts((char *)(DAT_000189e8 + 0x189bc));
          return 0;
        }
        pbVar3 = param_1 + 3;
        if (7 < (byte)(*pbVar3 - 0x30)) goto LAB_000189b0;
        param_1 = param_1 + 3;
        __c = (uint)(byte)((*pbVar3 - 0x30) + ((*pbVar2 - 0x30) + (*pbVar1 - 0x30) * '\b') * '\b');
      }
      if ((*(ushort *)(**(int **)(iVar7 + DAT_000189d8) + __c * 2) & 2) != 0) {
        __c = (uint)*(byte *)(**(int **)(iVar7 + DAT_000189dc) + __c * 2);
      }
      param_1 = param_1 + 1;
      if (__n != 0) {
        *param_2 = (char)__c;
        __n = __n - 1;
        param_2 = param_2 + 1;
      }
      __c = (uint)*param_1;
      if (__c == 0) goto LAB_000188b4;
    }
    if (bVar4) {
      puts((char *)(DAT_000189e0 + 0x18994));
      return 0;
    }
    puVar6 = param_2;
    if (__n != 0) {
      puVar6 = param_2 + __n;
      memset(param_2,0x20,__n);
    }
    bVar4 = true;
    __n = 3;
    param_2 = puVar6;
  }
LAB_000188b4:
  if (__n == 8) {
    return 0;
  }
  iVar7 = __n - 1;
  if (bVar4) {
    if (__n == 0) {
      return 1;
    }
  }
  else {
    puVar6 = param_2;
    if (__n != 0) {
      puVar6 = param_2 + __n;
      memset(param_2,0x20,__n);
    }
    iVar7 = 2;
    param_2 = puVar6;
  }
  memset(param_2,0x20,iVar7 + 1);
  return 1;
}



/* ===== FileAdd @ 000189ec size=452 ===== */

void FileAdd(int param_1,char *param_2,int param_3)

{
  int iVar1;
  char *__s2;
  char *pcVar2;
  int *piVar3;
  int local_3c [2];
  char cStack_34;
  char acStack_33 [15];
  
  local_3c[0] = param_1;
  if (*param_2 != '/') {
                    /* WARNING: Subroutine does not return */
    Die(DAT_00018bb4 + 0x18b84);
  }
  piVar3 = local_3c;
  do {
    pcVar2 = param_2 + 1;
    param_2 = strchr(pcVar2,0x2f);
    if (param_2 != (char *)0x0) {
      *param_2 = '\0';
    }
    iVar1 = FileCvt(pcVar2,&cStack_34);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      exit(2);
    }
    __s2 = (char *)*piVar3;
    if (__s2 == (char *)0x0) {
      pcVar2 = malloc(0x18);
      __s2 = strncpy(pcVar2,&cStack_34,0xb);
      if (param_2 == (char *)0x0) goto LAB_00018ad4;
    }
    else {
      if (param_2 == (char *)0x0) {
        if (param_3 != 2) goto LAB_00018a98;
        break;
      }
      do {
        iVar1 = strncmp(&cStack_34,__s2,0xb);
        if (iVar1 == 0) goto LAB_00018a80;
        __s2 = *(char **)(__s2 + 0x14);
      } while (__s2 != (char *)0x0);
      pcVar2 = malloc(0x18);
      __s2 = strncpy(pcVar2,&cStack_34,0xb);
    }
    __s2[0x10] = '\0';
    __s2[0x11] = '\0';
    __s2[0x12] = '\0';
    __s2[0x13] = '\0';
    iVar1 = *piVar3;
    __s2[0xc] = '\0';
    __s2[0xd] = '\0';
    __s2[0xe] = '\0';
    __s2[0xf] = '\0';
    *(int *)(__s2 + 0x14) = iVar1;
    *piVar3 = (int)__s2;
LAB_00018a80:
    piVar3 = (int *)(__s2 + 0x10);
    *param_2 = '/';
  } while( true );
  while (__s2 = *(char **)(__s2 + 0x14), __s2 != (char *)0x0) {
    iVar1 = strncmp(&cStack_34,__s2,0xb);
    if ((iVar1 == 0) || (iVar1 = strncmp(acStack_33,__s2 + 1,10), iVar1 == 0)) goto LAB_00018b68;
  }
  goto LAB_00018abc;
  while (__s2 = *(char **)(__s2 + 0x14), __s2 != (char *)0x0) {
LAB_00018a98:
    iVar1 = strncmp(&cStack_34,__s2,0xb);
    if (iVar1 == 0) {
LAB_00018b68:
                    /* WARNING: Subroutine does not return */
      Die(DAT_00018bb0 + 0x18b78,pcVar2);
    }
  }
LAB_00018abc:
  pcVar2 = malloc(0x18);
  __s2 = strncpy(pcVar2,&cStack_34,0xb);
LAB_00018ad4:
  __s2[0x10] = '\0';
  __s2[0x11] = '\0';
  __s2[0x12] = '\0';
  __s2[0x13] = '\0';
  iVar1 = *piVar3;
  *(int *)(__s2 + 0xc) = param_3;
  *(int *)(__s2 + 0x14) = iVar1;
  *piVar3 = (int)__s2;
  return;
}



/* ===== FileCd @ 00018bb8 size=104 ===== */

char * FileCd(undefined4 *param_1,char *param_2)

{
  int iVar1;
  char *__s1;
  
  if (param_1 != (undefined4 *)0x0) {
    for (__s1 = (char *)*param_1; __s1 != (char *)0x0; __s1 = *(char **)(__s1 + 0x14)) {
      iVar1 = strncmp(__s1,param_2,0xb);
      if ((iVar1 == 0) && (*(int *)(__s1 + 0x10) != 0)) {
        return __s1 + 0x10;
      }
    }
  }
  return (char *)0x0;
}



/* ===== FileType @ 00018c20 size=24 ===== */

undefined4 FileType(void)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)FUN_00018264();
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = *(undefined4 *)(*piVar1 + 0xc);
  }
  return uVar2;
}



/* ===== FileModify @ 00018c38 size=156 ===== */

void FileModify(undefined4 param_1,undefined1 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)FUN_00018264();
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    Die((int)&DAT_00018cd4 + DAT_00018ce0);
  }
  iVar3 = *(int *)((undefined1 *)*puVar1 + 0xc);
  if (iVar3 == 1) {
    uVar2 = FileName(param_2);
    printf((char *)(DAT_00018cd8 + 0x18cb0),uVar2);
    *param_2 = 0xe5;
  }
  else {
    if (iVar3 != 2) {
                    /* WARNING: Subroutine does not return */
      Die(DAT_00018cdc + 0x18cc8);
    }
    *param_2 = *(undefined1 *)*puVar1;
    uVar2 = FileName(param_2);
    printf((char *)(DAT_00018cd4 + 0x18c84),uVar2);
  }
  uVar2 = *(undefined4 *)((int)*puVar1 + 0x14);
  free((void *)*puVar1);
  *puVar1 = uVar2;
  return;
}



/* ===== FileUnused @ 00018ce4 size=140 ===== */

void FileUnused(void *param_1)

{
  undefined4 uVar1;
  void *__ptr;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *__format;
  
  if (param_1 == (void *)0x0) {
    return;
  }
  __format = (char *)(DAT_00018d70 + 0x18d0c);
  iVar5 = DAT_00018d74 + 0x18d10;
  pvVar2 = *(void **)((int)param_1 + 0x14);
  iVar4 = DAT_00018d78 + 0x18d18;
  if (*(int *)((int)param_1 + 0x10) == 0) goto LAB_00018d3c;
  do {
    FUN_00018778();
    __ptr = param_1;
    while( true ) {
      param_1 = pvVar2;
      free(__ptr);
      if (param_1 == (void *)0x0) {
        return;
      }
      pvVar2 = *(void **)((int)param_1 + 0x14);
      if (*(int *)((int)param_1 + 0x10) != 0) break;
LAB_00018d3c:
      __ptr = param_1;
      if (*(int *)((int)param_1 + 0xc) != 0) {
        iVar3 = iVar5;
        if (*(int *)((int)param_1 + 0xc) != 1) {
          iVar3 = iVar4;
        }
        uVar1 = FileName(param_1);
        printf(__format,iVar3,uVar1);
      }
    }
  } while( true );
}



/* ===== FsOpen @ 00018d7c size=76 ===== */

undefined4 FsOpen(int param_1,char *param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 2;
  }
  iVar1 = open64(param_2,iVar1);
  *(int *)(param_1 + 0x70) = iVar1;
  if (iVar1 < 0) {
    return 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  return 0;
}



/* ===== FsRead @ 00018dc8 size=408 ===== */

undefined4
FsRead(int param_1,undefined4 param_2,uint param_3,int param_4,size_t param_5,void *param_6)

{
  uint uVar1;
  size_t sVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  void *__src;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  __off64_t _Var11;
  
  _Var11 = lseek64(*(int *)(param_1 + 0x70),CONCAT44(param_4,param_3),0);
  uVar3 = (undefined4)((ulonglong)_Var11 >> 0x20);
  if (_Var11 == CONCAT44(param_4,param_3)) {
    uVar1 = read(*(int *)(param_1 + 0x70),param_6,param_5);
    if (-1 < (int)uVar1) {
      if (param_5 != uVar1) {
        printf((char *)(DAT_00018f64 + 0x18f34),uVar1,param_5,param_5,_Var11);
        return 1;
      }
      puVar7 = *(undefined4 **)(param_1 + 0x68);
      if (puVar7 != (undefined4 *)0x0) {
        iVar8 = param_4 + ((int)uVar1 >> 0x1f) + (uint)CARRY4(param_3,uVar1);
        do {
          while( true ) {
            uVar5 = puVar7[2];
            iVar6 = puVar7[3];
            bVar10 = uVar5 < param_3 + uVar1;
            if ((int)(iVar6 - (iVar8 + (uint)bVar10)) < 0 !=
                (SBORROW4(iVar6,iVar8) != SBORROW4(iVar6 - iVar8,(uint)bVar10))) break;
LAB_00018e80:
            puVar7 = (undefined4 *)puVar7[5];
            if (puVar7 == (undefined4 *)0x0) {
              return 0;
            }
          }
          uVar9 = puVar7[4];
          iVar4 = iVar6 + ((int)uVar9 >> 0x1f) + (uint)CARRY4(uVar5,uVar9);
          bVar10 = param_3 < uVar5 + uVar9;
          if ((int)(param_4 - (iVar4 + (uint)bVar10)) < 0 ==
              (SBORROW4(param_4,iVar4) != SBORROW4(param_4 - iVar4,(uint)bVar10)))
          goto LAB_00018e80;
          __src = (void *)*puVar7;
          if ((int)(iVar6 - (param_4 + (uint)(uVar5 < param_3))) < 0 !=
              (SBORROW4(iVar6,param_4) != SBORROW4(iVar6 - param_4,(uint)(uVar5 < param_3)))) {
            sVar2 = min(uVar1,(uVar9 + uVar5) - param_3);
            memcpy(param_6,(void *)((int)__src + (param_3 - uVar5)),sVar2);
            goto LAB_00018e80;
          }
          sVar2 = min(uVar9,(uVar1 + param_3) - uVar5);
          memcpy((void *)((int)param_6 + (uVar5 - param_3)),__src,sVar2);
          puVar7 = (undefined4 *)puVar7[5];
        } while (puVar7 != (undefined4 *)0x0);
      }
      return 0;
    }
    printf((char *)(DAT_00018f68 + 0x18f58),param_5,(int)_Var11,uVar3);
  }
  else {
    printf((char *)(DAT_00018f60 + 0x18e0c),uVar3,param_3,param_4);
  }
  return 1;
}



/* ===== FsCheck @ 00018f6c size=128 ===== */

uint FsCheck(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,size_t param_5)

{
  void *__buf;
  size_t sVar1;
  __off64_t _Var2;
  
  _Var2 = lseek64(*(int *)(param_1 + 0x70),CONCAT44(param_4,param_3),0);
  if (_Var2 == CONCAT44(param_4,param_3)) {
    __buf = (void *)Malloc(param_5);
    sVar1 = read(*(int *)(param_1 + 0x70),__buf,param_5);
    free(__buf);
    return (uint)(sVar1 == param_5);
  }
  return 0xffffffff;
}



/* ===== FsWrite @ 00018fec size=272 ===== */

void FsWrite(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,size_t param_5,
            void *param_6)

{
  size_t sVar1;
  undefined4 *puVar2;
  void *__dest;
  undefined4 uVar3;
  int iVar4;
  __off64_t _Var5;
  
  if (**(int **)(DAT_000190fc + 0x19004 + DAT_00019100) == 0) {
    puVar2 = (undefined4 *)Malloc(0x18);
    puVar2[2] = param_3;
    puVar2[3] = param_4;
    puVar2[4] = param_5;
    __dest = (void *)Malloc(param_5);
    *puVar2 = __dest;
    memcpy(__dest,param_6,param_5);
    iVar4 = *(int *)(param_1 + 0x6c);
    puVar2[5] = 0;
    if (iVar4 == 0) {
      *(undefined4 **)(param_1 + 0x68) = puVar2;
    }
    else {
      *(undefined4 **)(iVar4 + 0x14) = puVar2;
    }
    *(undefined4 **)(param_1 + 0x6c) = puVar2;
  }
  else {
    *(undefined4 *)(param_1 + 0x74) = 1;
    _Var5 = lseek64(*(int *)(param_1 + 0x70),CONCAT44(param_4,param_3),0);
    uVar3 = (undefined4)((ulonglong)_Var5 >> 0x20);
    if (_Var5 != CONCAT44(param_4,param_3)) {
                    /* WARNING: Subroutine does not return */
      Die((int)&DAT_000190fc + DAT_0001910c,uVar3,param_3,param_4);
    }
    sVar1 = write(*(int *)(param_1 + 0x70),param_6,param_5);
    if (param_5 != sVar1) {
      if ((int)sVar1 < 0) {
                    /* WARNING: Subroutine does not return */
        Die(DAT_00019108 + 0x190e8,param_5,(int)_Var5,uVar3);
      }
                    /* WARNING: Subroutine does not return */
      Die(DAT_00019104 + 0x19084,sVar1,param_5);
    }
  }
  return;
}



/* ===== FsClose @ 00019110 size=428 ===== */

uint FsClose(int param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  ssize_t sVar5;
  undefined4 uVar6;
  undefined4 *__ptr;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char *__format;
  char *__format_00;
  char *__format_01;
  __off64_t _Var10;
  
  __ptr = *(undefined4 **)(param_1 + 0x68);
  if (param_2 == 0) {
    if (__ptr == (undefined4 *)0x0) {
LAB_00019298:
      iVar2 = close(*(int *)(param_1 + 0x70));
      if (iVar2 < 0) {
        return 0xffffffff;
      }
      return (uint)(*(int *)(param_1 + 0x74) != 0);
    }
    do {
      puVar7 = (undefined4 *)__ptr[5];
      free((void *)*__ptr);
      free(*(void **)(param_1 + 0x68));
      *(undefined4 **)(param_1 + 0x68) = puVar7;
      __ptr = puVar7;
    } while (puVar7 != (undefined4 *)0x0);
  }
  else {
    if (__ptr == (undefined4 *)0x0) goto LAB_00019298;
    __format_01 = (char *)(DAT_000192bc + 0x19188);
    __format_00 = (char *)(DAT_000192c0 + 0x1918c);
    __format = (char *)(DAT_000192c4 + 0x19190);
    do {
      _Var10 = *(__off64_t *)(__ptr + 2);
      *(undefined4 *)(param_1 + 0x68) = __ptr[5];
      _Var10 = lseek64(*(int *)(param_1 + 0x70),_Var10,0);
      lVar1 = *(longlong *)(__ptr + 2);
      uVar9 = __ptr[3];
      if (_Var10 == *(longlong *)(__ptr + 2)) {
        sVar5 = write(*(int *)(param_1 + 0x70),(void *)*__ptr,__ptr[4]);
        if (sVar5 < 0) {
          if (*(int *)(param_1 + 0x90) != 0) {
            piVar3 = __errno_location();
            uVar9 = __ptr[2];
            uVar6 = __ptr[3];
            uVar8 = __ptr[4];
            pcVar4 = strerror(*piVar3);
            printf(__format_00,uVar8,uVar9,uVar6,pcVar4);
          }
        }
        else if ((sVar5 != __ptr[4]) && (*(int *)(param_1 + 0x90) != 0)) {
          printf(__format_01);
        }
      }
      else if (*(int *)(param_1 + 0x90) != 0) {
        piVar3 = __errno_location();
        pcVar4 = strerror(*piVar3);
        printf(__format,__ptr[4],(int)lVar1,uVar9,pcVar4,__ptr[4]);
      }
      free((void *)*__ptr);
      free(__ptr);
      __ptr = *(undefined4 **)(param_1 + 0x68);
    } while (__ptr != (undefined4 *)0x0);
  }
  iVar2 = close(*(int *)(param_1 + 0x70));
  if (iVar2 < 0) {
    return 0xffffffff;
  }
  return 1;
}



/* ===== FUN_000192c8 @ 000192c8 size=484 ===== */

byte * FUN_000192c8(int param_1,byte *param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  size_t sVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *local_34;
  wchar_t local_30 [3];
  
  if (param_3 < 1) {
    iVar4 = 1;
  }
  else {
    iVar4 = 0;
    pbVar9 = param_2;
    do {
      pbVar6 = pbVar9 + 2;
      if (pbVar9[1] == 0 && *pbVar9 == 0) break;
      local_30[1] = 0;
      local_30[0] = (uint)*pbVar9 + (uint)pbVar9[1] * 0x100;
      sVar3 = wcstombs((char *)0x0,local_30,0);
      if (sVar3 == 0xffffffff) {
        if ((pbVar9[1] == 0) && (0x1f < (*pbVar9 ^ 0x80))) {
          iVar4 = iVar4 + 1;
        }
        else {
          iVar4 = iVar4 + 4;
        }
      }
      else {
        iVar4 = iVar4 + sVar3;
      }
      pbVar9 = pbVar6;
    } while (((int)pbVar6 - (int)param_2) / 2 < param_3);
    iVar4 = iVar4 + 1;
  }
  if (param_4 == 0) {
    local_34 = (byte *)Malloc(iVar4);
  }
  else {
    local_34 = (byte *)Alloc(param_1 + 0xa8);
  }
  pbVar9 = local_34;
  if (0 < param_3) {
    iVar4 = DAT_000194ac + 0x193b0;
    pbVar6 = param_2;
    do {
      pbVar7 = pbVar6 + 2;
      local_30[0] = (uint)*pbVar6 + (uint)pbVar6[1] * 0x100;
      if (*pbVar6 == 0 && pbVar6[1] == 0) break;
      local_30[1] = 0;
      sVar3 = wcstombs((char *)0x0,local_30,0);
      if ((sVar3 == 0xffffffff) ||
         (sVar3 = wcstombs((char *)pbVar9,local_30,sVar3 + 1), sVar3 == 0xffffffff)) {
        if ((pbVar6[1] == 0) && (0x1f < (*pbVar6 ^ 0x80))) {
          pbVar8 = pbVar9 + 1;
          *pbVar9 = *pbVar6;
        }
        else {
          *pbVar9 = 0x3a;
          pbVar8 = pbVar9 + 4;
          uVar5 = (uint)*pbVar6 + (uint)pbVar6[1] * 0x100;
          bVar1 = *(byte *)(iVar4 + (uVar5 & 0x3f));
          bVar2 = *(byte *)(iVar4 + ((uVar5 & 0xfff) >> 6));
          pbVar9[1] = *(byte *)(iVar4 + ((int)uVar5 >> 0xc));
          pbVar9[3] = bVar1;
          pbVar9[2] = bVar2;
        }
      }
      else {
        pbVar8 = pbVar9 + sVar3;
      }
      pbVar9 = pbVar8;
      pbVar6 = pbVar7;
    } while (((int)pbVar7 - (int)param_2) / 2 < param_3);
  }
  *pbVar9 = 0;
  return local_34;
}



/* ===== LfnFixChecksum @ 000194b0 size=376 ===== */

void LfnFixChecksum(undefined4 param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,
                   int param_6,byte *param_7)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint local_38;
  int iStack_34;
  char local_29 [5];
  
  uVar3 = ((uint)*param_7 << 7 | (uint)(*param_7 >> 1)) + (uint)param_7[1] & 0xff;
  uVar3 = (uVar3 >> 1 | uVar3 << 7) + (uint)param_7[2] & 0xff;
  uVar3 = (uVar3 >> 1 | uVar3 << 7) + (uint)param_7[3] & 0xff;
  uVar3 = (uVar3 >> 1 | uVar3 << 7) + (uint)param_7[4] & 0xff;
  uVar3 = (uVar3 >> 1 | uVar3 << 7) + (uint)param_7[5] & 0xff;
  uVar3 = (uVar3 >> 1 | uVar3 << 7) + (uint)param_7[6] & 0xff;
  uVar3 = (uVar3 >> 1 | uVar3 << 7) + (uint)param_7[7] & 0xff;
  uVar3 = (uVar3 >> 1 | uVar3 << 7) + (uint)param_7[8] & 0xff;
  uVar3 = (uVar3 >> 1 | uVar3 << 7) + (uint)param_7[9] & 0xff;
  local_29[0] = ((byte)(uVar3 >> 1) | (byte)(uVar3 << 7)) + param_7[10];
  if ((int)(param_4 - (param_6 + (uint)(param_3 < param_5))) < 0 !=
      (SBORROW4(param_4,param_6) != SBORROW4(param_4 - param_6,(uint)(param_3 < param_5)))) {
    uVar3 = (param_5 - 1) - param_3 & 0xffffffe0;
    local_38 = param_3 + 0xd;
    iStack_34 = param_4 + (uint)(0xfffffff2 < param_3);
    do {
      uVar1 = local_38 + 0x20;
      iVar2 = iStack_34 + (uint)(0xffffffdf < local_38);
      FsWrite(param_1,iVar2,local_38,iStack_34,1,local_29);
      local_38 = uVar1;
      iStack_34 = iVar2;
    } while (iVar2 + (-(uint)CARRY4(uVar3,param_3 + 0x2d) -
                     (((param_6 - (uint)(param_5 == 0)) - (uint)(param_5 - 1 < param_3)) +
                     (uint)(0xffffffd2 < param_3))) != 0 || uVar1 != uVar3 + param_3 + 0x2d);
  }
  return;
}



/* ===== LfnReset @ 00019628 size=64 ===== */

void LfnReset(int param_1)

{
  if (*(void **)(param_1 + 0x78) != (void *)0x0) {
    free(*(void **)(param_1 + 0x78));
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(void **)(param_1 + 0x84) != (void *)0x0) {
    free(*(void **)(param_1 + 0x84));
  }
  *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x84) = 0;
  return;
}



/* ===== LfnGet @ 00019668 size=1228 ===== */

undefined4 LfnGet(int param_1,byte *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar4;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 extraout_r1_03;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint *puVar9;
  int iVar10;
  byte *pbVar11;
  int *piVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined1 local_49;
  uint local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  *param_3 = 0;
  iVar10 = DAT_00019b34 + 0x19688;
  if (param_2[0xb] == 0xf) {
    uVar13 = 0;
    if (*(int *)(param_1 + 0x90) != 0) {
      uVar13 = 0;
      puts((char *)(DAT_00019b64 + 0x199cc));
    }
  }
  else {
    iVar6 = *(int *)(param_1 + 0x80);
    if (iVar6 == -1) {
      return 0;
    }
    iVar3 = *(int *)(param_1 + 0x78);
    if (iVar6 != 0) {
      pvVar2 = (void *)FUN_000192c8(param_1,iVar6 * 0x1a + iVar3,*(int *)(param_1 + 0x88) * 0xd,0);
      uVar13 = FileName(param_2);
      printf((char *)(DAT_00019b44 + 0x19884),pvVar2,uVar13);
      free(pvVar2);
      piVar12 = *(int **)(iVar10 + DAT_00019b3c);
      if (*piVar12 == 0) {
        puts((char *)(DAT_00019b48 + 0x198ac));
      }
      else {
        printf((char *)(DAT_00019b60 + 0x199ac),uVar13);
      }
      uVar13 = local_38;
      uVar1 = local_30;
      if (*piVar12 == 0) goto LAB_00019984;
      uVar14 = GetKey(DAT_00019b50 + 0x198cc,DAT_00019b4c + 0x198c8);
      uVar4 = (undefined4)((ulonglong)uVar14 >> 0x20);
      iVar6 = (int)uVar14;
      uVar13 = local_38;
      uVar1 = local_30;
      if (iVar6 == 0x32) goto LAB_00019984;
      if (iVar6 == 0x33) {
        iVar6 = *(int *)(param_1 + 0x88);
        if (0 < iVar6) {
          iVar3 = 0;
          do {
            cVar5 = (char)iVar6 - (char)iVar3;
            if (iVar3 == 0) {
              iVar3 = 1;
              local_48 = CONCAT31(local_48._1_3_,cVar5) | 0x40;
              FsWrite(param_1,uVar4,**(undefined4 **)(param_1 + 0x84),
                      (*(undefined4 **)(param_1 + 0x84))[1],1,&local_48);
              iVar6 = *(int *)(param_1 + 0x88);
              cVar5 = (char)iVar6 + -1;
              uVar4 = extraout_r1_01;
              if (iVar6 < 2) break;
            }
            local_48 = CONCAT31(local_48._1_3_,cVar5);
            puVar8 = (undefined4 *)(*(int *)(param_1 + 0x84) + iVar3 * 8);
            iVar3 = iVar3 + 1;
            FsWrite(param_1,uVar4,*puVar8,puVar8[1],1,&local_48);
            iVar6 = *(int *)(param_1 + 0x88);
            uVar4 = extraout_r1_00;
          } while (iVar3 < iVar6);
        }
        memmove(*(void **)(param_1 + 0x78),
                (void *)(*(int *)(param_1 + 0x80) * 0x1a + (int)*(void **)(param_1 + 0x78)),
                iVar6 * 0x1a);
      }
      else if (iVar6 == 0x31) {
        pbVar11 = *(byte **)(param_1 + 0x88);
        uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        if (0 < (int)pbVar11) {
          param_2 = (byte *)0x0;
          param_3 = (undefined8 *)0x20;
        }
        local_38 = 0;
        local_30 = 0;
        local_48 = 0xe5;
        uVar13 = 0;
        uStack_34 = uStack_44;
        uVar1 = 0;
        uStack_2c = uStack_44;
        if (0 < (int)pbVar11) {
          do {
            puVar8 = (undefined4 *)(*(int *)(param_1 + 0x84) + (int)param_2 * 8);
            param_2 = param_2 + 1;
            FsWrite(param_1,uVar4,*puVar8,puVar8[1],param_3,&local_48);
            uVar4 = extraout_r1_02;
            uVar13 = local_38;
            uVar1 = local_30;
          } while (pbVar11 != param_2);
        }
        goto LAB_00019984;
      }
      iVar3 = *(int *)(param_1 + 0x78);
    }
    uVar7 = ((uint)*param_2 << 7 | (uint)(*param_2 >> 1)) + (uint)param_2[1] & 0xff;
    uVar7 = (uVar7 << 7 | uVar7 >> 1) + (uint)param_2[2] & 0xff;
    uVar7 = (uVar7 << 7 | uVar7 >> 1) + (uint)param_2[3] & 0xff;
    uVar7 = (uVar7 << 7 | uVar7 >> 1) + (uint)param_2[4] & 0xff;
    uVar7 = (uVar7 >> 1 | uVar7 << 7) + (uint)param_2[5] & 0xff;
    uVar7 = (uVar7 >> 1 | uVar7 << 7) + (uint)param_2[6] & 0xff;
    uVar7 = (uVar7 >> 1 | uVar7 << 7) + (uint)param_2[7] & 0xff;
    uVar7 = (uVar7 >> 1 | uVar7 << 7) + (uint)param_2[8] & 0xff;
    uVar7 = (uVar7 >> 1 | uVar7 << 7) + (uint)param_2[9] & 0xff;
    uVar7 = (uVar7 >> 1 | uVar7 << 7) + (uint)param_2[10];
    local_49 = (undefined1)uVar7;
    if ((uint)*(byte *)(param_1 + 0x7c) != (uVar7 & 0xff)) {
      pvVar2 = (void *)FUN_000192c8(param_1,*(int *)(param_1 + 0x80) * 0x1a + iVar3,
                                    *(int *)(param_1 + 0x88) * 0xd,0);
      iVar6 = FileName(param_2);
      printf((char *)(DAT_00019b38 + 0x197d4),pvVar2,iVar6);
      free(pvVar2);
      piVar12 = *(int **)(iVar10 + DAT_00019b3c);
      if (*piVar12 == 0) {
        puts((char *)(DAT_00019b54 + 0x198f8));
        iVar10 = *piVar12;
      }
      else {
        printf((char *)(DAT_00019b40 + 0x19800),iVar6);
        iVar10 = *piVar12;
      }
      if (iVar10 != 0) {
        uVar14 = GetKey(DAT_00019b5c + 0x19918,DAT_00019b58 + 0x19914);
        uVar4 = (undefined4)((ulonglong)uVar14 >> 0x20);
        iVar10 = (int)uVar14;
        uVar13 = local_38;
        uVar1 = local_30;
        if (iVar10 == 0x32) {
LAB_00019984:
          local_30 = uVar1;
          local_38 = uVar13;
          LfnReset(param_1);
          return 0;
        }
        if (iVar10 == 0x33) {
          if (0 < *(int *)(param_1 + 0x88)) {
            iVar10 = 0;
            do {
              puVar9 = (uint *)(*(int *)(param_1 + 0x84) + iVar10 * 8);
              iVar10 = iVar10 + 1;
              uVar7 = *puVar9;
              FsWrite(param_1,uVar4,uVar7 + 0xd,puVar9[1] + (uint)(0xfffffff2 < uVar7),1,&local_49);
              uVar4 = extraout_r1_03;
            } while (iVar10 < *(int *)(param_1 + 0x88));
          }
        }
        else if (iVar10 == 0x31) {
          iVar10 = *(int *)(param_1 + 0x88);
          uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
          uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
          uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
          if (0 < iVar10) {
            iVar6 = 0;
            param_3 = (undefined8 *)0x20;
          }
          local_38 = 0;
          local_30 = 0;
          local_48 = 0xe5;
          uVar13 = local_38;
          uStack_34 = uStack_44;
          uVar1 = local_30;
          uStack_2c = uStack_44;
          if (0 < iVar10) {
            do {
              puVar8 = (undefined4 *)(*(int *)(param_1 + 0x84) + iVar6 * 8);
              iVar6 = iVar6 + 1;
              FsWrite(param_1,uVar4,*puVar8,puVar8[1],param_3,&local_48);
              uVar4 = extraout_r1;
              uVar13 = local_38;
              uVar1 = local_30;
            } while (iVar10 != iVar6);
          }
          goto LAB_00019984;
        }
      }
      iVar3 = *(int *)(param_1 + 0x78);
    }
    uVar13 = (*(undefined4 **)(param_1 + 0x84))[1];
    *(undefined4 *)param_3 = **(undefined4 **)(param_1 + 0x84);
    *(undefined4 *)((int)param_3 + 4) = uVar13;
    uVar13 = FUN_000192c8(param_1,iVar3,0x7fffffff,1);
    LfnReset(param_1);
  }
  return uVar13;
}



/* ===== LfnCheckOrphaned @ 00019b68 size=296 ===== */

void LfnCheckOrphaned(int param_1)

{
  void *__ptr;
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = DAT_00019c90 + 0x19b84;
  if (*(int *)(param_1 + 0x80) != -1) {
    __ptr = (void *)FUN_000192c8(param_1,*(int *)(param_1 + 0x80) * 0x1a + *(int *)(param_1 + 0x78),
                                 *(int *)(param_1 + 0x88) * 0xd,0);
    printf((char *)(DAT_00019c94 + 0x19bbc),__ptr);
    free(__ptr);
    piVar2 = *(int **)(iVar1 + DAT_00019c98);
    if (*piVar2 == 0) {
      puts((char *)(DAT_00019c9c + 0x19be4));
      iVar1 = *piVar2;
    }
    else {
      puts((char *)(DAT_00019ca8 + 0x19c28));
      iVar1 = *piVar2;
    }
    if (((iVar1 == 0) ||
        (iVar1 = GetKey(DAT_00019ca4 + 0x19c04,DAT_00019ca0 + 0x19c00), iVar1 == 0x31)) &&
       (iVar1 = *(int *)(param_1 + 0x88), 0 < iVar1)) {
      iVar3 = 0;
      do {
        iVar3 = iVar3 + 1;
        FsWrite(param_1);
      } while (iVar1 != iVar3);
    }
    LfnReset(param_1);
    return;
  }
  return;
}



/* ===== LfnAddSlot @ 00019cac size=2648 ===== */

void LfnAddSlot(int param_1,byte *param_2,uint param_3,uint param_4)

{
  byte bVar1;
  void *pvVar2;
  void *pvVar3;
  byte *pbVar4;
  undefined4 uVar5;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 uStack_3c;
  undefined2 local_3a;
  undefined2 uStack_38;
  undefined2 uStack_36;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined4 uStack_2c;
  
  bVar1 = *param_2;
  iVar12 = DAT_0001a704 + 0x19cdc;
  uVar11 = bVar1 & 0x1f;
  if (*(int *)(param_1 + 0x80) == 0) {
    LfnCheckOrphaned();
  }
  if (param_2[0xb] != 0xf) {
                    /* WARNING: Subroutine does not return */
    Die((int)&DAT_0001a704 + DAT_0001a7ac);
  }
  uVar6 = *(uint *)(param_1 + 0x80);
  if ((*param_2 & 0x40) == 0) {
    if (uVar6 == 0xffffffff) {
      if ((bVar1 & 0x1f) != 0) {
        local_48 = *(undefined4 *)(param_2 + 1);
        local_40 = *(undefined2 *)(param_2 + 9);
        uStack_44 = *(undefined4 *)(param_2 + 5);
        local_3a = (undefined2)*(undefined4 *)(param_2 + 0x12);
        uStack_38 = (undefined2)((uint)*(undefined4 *)(param_2 + 0x12) >> 0x10);
        local_3e = (undefined2)*(undefined4 *)(param_2 + 0xe);
        uStack_3c = (undefined2)((uint)*(undefined4 *)(param_2 + 0xe) >> 0x10);
        uStack_36 = (undefined2)*(undefined4 *)(param_2 + 0x16);
        uStack_34 = (undefined2)((uint)*(undefined4 *)(param_2 + 0x16) >> 0x10);
        uStack_32 = (undefined2)*(undefined4 *)(param_2 + 0x1c);
        uStack_30 = (undefined2)((uint)*(undefined4 *)(param_2 + 0x1c) >> 0x10);
        pvVar2 = (void *)FUN_000192c8(param_1,&local_48,0xd);
        printf((char *)(DAT_0001a76c + 0x1a218),pvVar2);
        free(pvVar2);
        piVar13 = *(int **)(iVar12 + DAT_0001a70c);
        if (*piVar13 == 0) {
          puts((char *)(DAT_0001a770 + 0x1a240));
        }
        else {
          puts((char *)(DAT_0001a78c + 0x1a40c));
        }
        if ((*piVar13 == 0) ||
           (iVar7 = GetKey(DAT_0001a778 + 0x1a260,DAT_0001a774 + 0x1a25c), iVar7 == 0x32))
        goto LAB_00019f94;
        if (iVar7 == 0x33) {
          bVar1 = *param_2;
          *param_2 = bVar1 | 0x40;
          FsWrite(param_1,bVar1 | 0x40,param_3,param_4,1,param_2);
          *(uint *)(param_1 + 0x80) = uVar11;
          *(byte *)(param_1 + 0x7c) = param_2[0xd];
          goto LAB_00019e74;
        }
        if (iVar7 == 0x31) {
          puVar9 = *(uint **)(param_1 + 0x84);
          if (puVar9 == (uint *)0x0) {
            puVar9 = (uint *)Malloc(8);
            *(uint **)(param_1 + 0x84) = puVar9;
          }
          uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
          *puVar9 = param_3;
          puVar9[1] = param_4;
          local_40 = (undefined2)*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
          local_3e = (undefined2)
                     ((uint)*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8) >> 0x10);
          uStack_3c = (undefined2)*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
          local_3a = (undefined2)
                     ((uint)*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc) >> 0x10);
          uStack_38 = 0;
          uStack_36 = 0;
          uStack_34 = (undefined2)uStack_44;
          uStack_32 = (undefined2)((uint)uStack_44 >> 0x10);
          uStack_30 = 0;
          uStack_2e = 0;
          local_48 = 0xe5;
          uStack_2c = uStack_44;
          FsWrite(param_1,0x20,*puVar9,puVar9[1],0x20,&local_48);
          LfnReset(param_1);
          return;
        }
        goto LAB_00019d0c;
      }
    }
    else {
LAB_00019d04:
      if (uVar11 == uVar6) goto LAB_00019d0c;
    }
LAB_00019ea8:
    printf((char *)(DAT_0001a71c + 0x19eb8),uVar11);
    if ((param_2[0xd] == *(byte *)(param_1 + 0x7c)) && (0 < *(int *)(param_1 + 0x80))) {
      local_48 = *(undefined4 *)(param_2 + 1);
      uStack_44 = *(undefined4 *)(param_2 + 5);
      local_40 = *(undefined2 *)(param_2 + 9);
      local_3a = (undefined2)*(undefined4 *)(param_2 + 0x12);
      uStack_38 = (undefined2)((uint)*(undefined4 *)(param_2 + 0x12) >> 0x10);
      local_3e = (undefined2)*(undefined4 *)(param_2 + 0xe);
      uStack_3c = (undefined2)((uint)*(undefined4 *)(param_2 + 0xe) >> 0x10);
      uStack_32 = (undefined2)*(undefined4 *)(param_2 + 0x1c);
      uStack_30 = (undefined2)((uint)*(undefined4 *)(param_2 + 0x1c) >> 0x10);
      uStack_36 = (undefined2)*(undefined4 *)(param_2 + 0x16);
      uStack_34 = (undefined2)((uint)*(undefined4 *)(param_2 + 0x16) >> 0x10);
      pvVar2 = (void *)FUN_000192c8(param_1,&local_48,0xd,0);
      pvVar3 = (void *)FUN_000192c8(param_1,*(int *)(param_1 + 0x80) * 0x1a +
                                            *(int *)(param_1 + 0x78),*(int *)(param_1 + 0x88) * 0xd,
                                    0);
      printf((char *)(DAT_0001a77c + 0x1a368),pvVar2,pvVar3);
      free(pvVar2);
      free(pvVar3);
      piVar13 = *(int **)(iVar12 + DAT_0001a70c);
      if (*piVar13 == 0) {
        puts((char *)(DAT_0001a780 + 0x1a398));
        iVar7 = *piVar13;
      }
      else {
        puts((char *)(DAT_0001a790 + 0x1a49c));
        puts((char *)(DAT_0001a794 + 0x1a4a8));
        iVar7 = *piVar13;
      }
      if (iVar7 == 0) goto LAB_00019f94;
      iVar7 = DAT_0001a784 + 0x1a3b0;
    }
    else {
      piVar13 = *(int **)(iVar12 + DAT_0001a70c);
      if (*piVar13 == 0) {
        puts((char *)(DAT_0001a750 + 0x1a0dc));
        iVar7 = *piVar13;
      }
      else {
        puts((char *)(DAT_0001a720 + 0x19ee8));
        iVar7 = *piVar13;
      }
      if (iVar7 == 0) goto LAB_00019f94;
      iVar7 = DAT_0001a724 + 0x19f00;
    }
    uVar15 = GetKey(iVar7,DAT_0001a728 + 0x19f08);
    uVar14 = (undefined4)((ulonglong)uVar15 >> 0x20);
    iVar7 = (int)uVar15;
    if (iVar7 == 0x32) goto LAB_00019f94;
    if (iVar7 == 0x33) {
      uVar14 = *(undefined4 *)(param_1 + 0x80);
      *param_2 = *param_2 & 0xe0 | (byte)uVar14;
      FsWrite(param_1,uVar14,param_3,param_4,1,param_2);
    }
    else if (iVar7 == 0x31) {
      iVar12 = *(int *)(param_1 + 0x84);
      if (iVar12 == 0) {
        puVar9 = (uint *)Malloc(8);
        uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        *(undefined4 *)(param_1 + 0x88) = 1;
        *(uint **)(param_1 + 0x84) = puVar9;
        *puVar9 = param_3;
        puVar9[1] = param_4;
        local_40 = (undefined2)*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        local_3e = (undefined2)
                   ((uint)*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8) >> 0x10);
        uStack_3c = (undefined2)*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        local_3a = (undefined2)
                   ((uint)*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc) >> 0x10);
        local_48 = 0xe5;
        uStack_38 = 0;
        uStack_36 = 0;
        uStack_34 = (undefined2)uStack_44;
        uStack_32 = (undefined2)((uint)uStack_44 >> 0x10);
        uStack_30 = 0;
        uStack_2e = 0;
        uStack_2c = uStack_44;
        FsWrite(param_1,0x20,*puVar9,puVar9[1],0x20,&local_48);
      }
      else {
        iVar7 = *(int *)(param_1 + 0x88);
        uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        *(int *)(param_1 + 0x88) = iVar7 + 1;
        puVar9 = (uint *)(iVar12 + iVar7 * 8);
        *puVar9 = param_3;
        puVar9[1] = param_4;
        local_40 = (undefined2)*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        local_3e = (undefined2)
                   ((uint)*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8) >> 0x10);
        uStack_3c = (undefined2)*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        local_3a = (undefined2)
                   ((uint)*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc) >> 0x10);
        uStack_38 = 0;
        uStack_36 = 0;
        uStack_34 = (undefined2)uStack_44;
        uStack_32 = (undefined2)((uint)uStack_44 >> 0x10);
        uStack_30 = 0;
        uStack_2e = 0;
        local_48 = 0xe5;
        uStack_2c = uStack_44;
        if (-1 < iVar7) {
          iVar8 = 0;
          while( true ) {
            puVar10 = (undefined4 *)(iVar12 + iVar8 * 8);
            iVar8 = iVar8 + 1;
            FsWrite(param_1,uVar14,*puVar10,puVar10[1],0x20,&local_48);
            if (iVar7 < iVar8) break;
            iVar12 = *(int *)(param_1 + 0x84);
            uVar14 = extraout_r1;
          }
        }
      }
      goto LAB_00019f94;
    }
  }
  else {
    if ((bVar1 & 0x1f) == 0) {
      if (uVar6 == 0xffffffff) goto LAB_00019ea8;
      goto LAB_00019d04;
    }
    if (uVar6 != 0xffffffff) {
      puts((char *)(DAT_0001a754 + 0x1a0f8));
      if ((*(uint *)(param_1 + 0x80) == uVar11) && (param_2[0xd] == *(byte *)(param_1 + 0x7c))) {
        local_48 = *(undefined4 *)(param_2 + 1);
        uStack_44 = *(undefined4 *)(param_2 + 5);
        local_40 = *(undefined2 *)(param_2 + 9);
        local_3a = (undefined2)*(undefined4 *)(param_2 + 0x12);
        uStack_38 = (undefined2)((uint)*(undefined4 *)(param_2 + 0x12) >> 0x10);
        uStack_36 = (undefined2)*(undefined4 *)(param_2 + 0x16);
        uStack_34 = (undefined2)((uint)*(undefined4 *)(param_2 + 0x16) >> 0x10);
        local_3e = (undefined2)*(undefined4 *)(param_2 + 0xe);
        uStack_3c = (undefined2)((uint)*(undefined4 *)(param_2 + 0xe) >> 0x10);
        uStack_32 = (undefined2)*(undefined4 *)(param_2 + 0x1c);
        uStack_30 = (undefined2)((uint)*(undefined4 *)(param_2 + 0x1c) >> 0x10);
        pvVar2 = (void *)FUN_000192c8(param_1,&local_48,0xd,0);
        pvVar3 = (void *)FUN_000192c8(param_1,*(int *)(param_1 + 0x80) * 0x1a +
                                              *(int *)(param_1 + 0x78),
                                      *(int *)(param_1 + 0x88) * 0xd,0);
        printf((char *)(DAT_0001a798 + 0x1a564),pvVar2,pvVar3);
        free(pvVar2);
        free(pvVar3);
        piVar13 = *(int **)(iVar12 + DAT_0001a70c);
        if (*piVar13 == 0) {
          puts((char *)(DAT_0001a79c + 0x1a594));
          iVar7 = *piVar13;
        }
        else {
          puts((char *)(DAT_0001a7a4 + 0x1a628));
          puts((char *)(DAT_0001a7a8 + 0x1a634));
          iVar7 = *piVar13;
        }
        if (iVar7 != 0) {
          iVar7 = DAT_0001a7a0 + 0x1a5ac;
LAB_0001a138:
          uVar15 = GetKey(iVar7,DAT_0001a760 + 0x1a144);
          if ((int)uVar15 == 0x31) {
            iVar7 = *(int *)(param_1 + 0x88);
            uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
            local_40 = (undefined2)*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
            local_3e = (undefined2)
                       ((uint)*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8) >> 0x10
                       );
            uStack_3c = (undefined2)*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
            local_3a = (undefined2)
                       ((uint)*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc) >> 0x10
                       );
            uStack_38 = 0;
            uStack_36 = 0;
            uStack_34 = (undefined2)uStack_44;
            uStack_32 = (undefined2)((uint)uStack_44 >> 0x10);
            uStack_30 = 0;
            uStack_2e = 0;
            local_48 = 0xe5;
            uStack_2c = uStack_44;
            if (0 < iVar7) {
              iVar8 = 0;
              do {
                puVar10 = (undefined4 *)(*(int *)(param_1 + 0x84) + iVar8 * 8);
                iVar8 = iVar8 + 1;
                FsWrite(param_1,0x20,*puVar10,puVar10[1],0x20,&local_48);
              } while (iVar7 != iVar8);
            }
            LfnReset(param_1);
          }
          else if ((int)uVar15 == 0x33) {
            *param_2 = *param_2 & 0xbf;
            FsWrite(param_1,(int)((ulonglong)uVar15 >> 0x20),param_3,param_4,1,param_2);
          }
        }
      }
      else {
        piVar13 = *(int **)(iVar12 + DAT_0001a70c);
        if (*piVar13 == 0) {
          puts((char *)(DAT_0001a788 + 0x1a3f0));
          iVar7 = *piVar13;
        }
        else {
          puts((char *)(DAT_0001a758 + 0x1a124));
          iVar7 = *piVar13;
        }
        if (iVar7 != 0) {
          iVar7 = DAT_0001a75c + 0x1a13c;
          goto LAB_0001a138;
        }
      }
    }
    *(uint *)(param_1 + 0x80) = uVar11;
    *(byte *)(param_1 + 0x7c) = param_2[0xd];
LAB_00019e74:
    uVar14 = Malloc(((short)uVar11 * 0xd + 1) * 2);
    *(undefined4 *)(param_1 + 0x78) = uVar14;
    uVar14 = Malloc(*(int *)(param_1 + 0x80) << 3);
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0x84) = uVar14;
  }
LAB_00019d0c:
  if (param_2[0xd] != *(byte *)(param_1 + 0x7c)) {
    printf((char *)(DAT_0001a708 + 0x19d28));
    piVar13 = *(int **)(iVar12 + DAT_0001a70c);
    if (*piVar13 == 0) {
      puts((char *)(DAT_0001a710 + 0x19d48));
    }
    else {
      puts((char *)(DAT_0001a74c + 0x1a0ac));
    }
    if (*piVar13 != 0) {
      uVar15 = GetKey(DAT_0001a718 + 0x19d68,DAT_0001a714 + 0x19d64);
      uVar14 = (undefined4)((ulonglong)uVar15 >> 0x20);
      if ((int)uVar15 == 0x31) {
        iVar12 = *(int *)(param_1 + 0x88);
        uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        iVar7 = *(int *)(param_1 + 0x84);
        puVar9 = (uint *)(iVar7 + iVar12 * 8);
        *(int *)(param_1 + 0x88) = iVar12 + 1;
        *puVar9 = param_3;
        puVar9[1] = param_4;
        local_40 = (undefined2)*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        local_3e = (undefined2)
                   ((uint)*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8) >> 0x10);
        uStack_3c = (undefined2)*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        local_3a = (undefined2)
                   ((uint)*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc) >> 0x10);
        uStack_38 = 0;
        uStack_36 = 0;
        uStack_34 = (undefined2)uStack_44;
        uStack_32 = (undefined2)((uint)uStack_44 >> 0x10);
        uStack_30 = 0;
        uStack_2e = 0;
        local_48 = 0xe5;
        uStack_2c = uStack_44;
        if (-1 < iVar12) {
          iVar8 = 0;
          while( true ) {
            puVar10 = (undefined4 *)(iVar7 + iVar8 * 8);
            iVar8 = iVar8 + 1;
            FsWrite(param_1,uVar14,*puVar10,puVar10[1],0x20,&local_48);
            if (iVar12 + 1 == iVar8) break;
            iVar7 = *(int *)(param_1 + 0x84);
            uVar14 = extraout_r1_00;
          }
        }
LAB_00019f94:
        LfnReset(param_1);
        return;
      }
      if ((int)uVar15 == 0x33) {
        pbVar4 = param_2 + 0xd;
        *pbVar4 = *(byte *)(param_1 + 0x7c);
        FsWrite(param_1,pbVar4,param_3 + 0xd,param_4 + (0xfffffff2 < param_3),1,pbVar4);
      }
    }
  }
  if (*(int *)(param_1 + 0x80) != -1) {
    iVar8 = *(int *)(param_1 + 0x80) + -1;
    *(int *)(param_1 + 0x80) = iVar8;
    iVar8 = iVar8 * 0x1a;
    uVar14 = *(undefined4 *)(param_2 + 5);
    iVar7 = *(int *)(param_1 + 0x78) + iVar8;
    *(undefined4 *)(*(int *)(param_1 + 0x78) + iVar8) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)(iVar7 + 4) = uVar14;
    *(undefined2 *)(iVar7 + 8) = *(undefined2 *)(param_2 + 9);
    uVar14 = *(undefined4 *)(param_2 + 0x12);
    uVar5 = *(undefined4 *)(param_2 + 0x16);
    *(undefined4 *)(iVar7 + 10) = *(undefined4 *)(param_2 + 0xe);
    *(undefined4 *)(iVar7 + 0xe) = uVar14;
    *(undefined4 *)(iVar7 + 0x12) = uVar5;
    *(undefined4 *)(iVar7 + 0x16) = *(undefined4 *)(param_2 + 0x1c);
    if ((*param_2 & 0x40) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x78) + iVar8 + 0x1b) = 0;
      *(undefined1 *)(*(int *)(param_1 + 0x78) + iVar8 + 0x1a) = 0;
    }
    iVar7 = *(int *)(param_1 + 0x88);
    *(int *)(param_1 + 0x88) = iVar7 + 1;
    puVar9 = (uint *)(*(int *)(param_1 + 0x84) + iVar7 * 8);
    *puVar9 = param_3;
    puVar9[1] = param_4;
  }
  if (param_2[0xc] != 0) {
    printf((char *)(DAT_0001a73c + 0x1a02c));
    piVar13 = *(int **)(iVar12 + DAT_0001a70c);
    if (*piVar13 == 0) {
      puts((char *)(DAT_0001a764 + 0x1a18c));
    }
    else {
      puts((char *)(DAT_0001a740 + 0x1a04c));
    }
    if ((*piVar13 == 0) ||
       (iVar7 = GetKey(DAT_0001a748 + 0x1a06c,DAT_0001a744 + 0x1a068), iVar7 == 0x31)) {
      pbVar4 = param_2 + 0xc;
      *pbVar4 = 0;
      FsWrite(param_1,pbVar4,param_3 + 0xc,param_4 + (0xfffffff3 < param_3),1,pbVar4);
    }
  }
  if (*(short *)(param_2 + 0x1a) != 0) {
    printf((char *)(DAT_0001a72c + 0x19fb0));
    piVar13 = *(int **)(iVar12 + DAT_0001a70c);
    if (*piVar13 == 0) {
      puts((char *)(DAT_0001a768 + 0x1a19c));
    }
    else {
      puts((char *)(DAT_0001a730 + 0x19fd0));
    }
    if ((*piVar13 == 0) ||
       (iVar12 = GetKey(DAT_0001a738 + 0x19ff0,DAT_0001a734 + 0x19fec), iVar12 == 0x31)) {
      param_2 = param_2 + 0x1a;
      param_2[0] = 0;
      param_2[1] = 0;
      FsWrite(param_1,2,param_3 + 0x1a,param_4 + (0xffffffe5 < param_3),2,param_2);
      return;
    }
  }
  return;
}



/* ===== GetLinuxVersion @ 0001a7b0 size=188 ===== */

int GetLinuxVersion(void)

{
  int iVar1;
  int *piVar2;
  int local_1a4;
  int local_1a0;
  int local_19c;
  utsname uStack_198;
  
  local_1a4 = 0;
  piVar2 = (int *)(DAT_0001a86c + 0x1a7cc);
  local_1a0 = 0;
  local_19c = 0;
  iVar1 = *piVar2;
  if (iVar1 != -1) {
    return iVar1;
  }
  iVar1 = uname(&uStack_198);
  if ((iVar1 == 0) &&
     (iVar1 = sscanf(uStack_198.release,(char *)(DAT_0001a874 + 0x1a834),&local_1a4,&local_1a0,
                     &local_19c), iVar1 - 1U < 3)) {
    iVar1 = local_1a0 * 0x100 + local_1a4 * 0x10000;
    if (local_19c < 0x100) {
      iVar1 = iVar1 + local_19c;
    }
    else {
      iVar1 = iVar1 + 0xff;
    }
    *piVar2 = iVar1;
    return iVar1;
  }
  *(undefined4 *)(DAT_0001a870 + 0x1a80c) = 0;
  return 0;
}



/* ===== FUN_0001a878 @ 0001a878 size=212 ===== */

undefined4 FUN_0001a878(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  __off64_t _Var4;
  undefined8 local_28;
  
  local_28 = 0;
  lseek64(param_1,CONCAT44(param_4,param_3),0);
  read(param_1,&local_28,8);
  uVar1 = (uint)local_28 << 0x18 | ((uint)local_28 >> 8 & 0xff) << 0x10 |
          ((uint)local_28 >> 0x10 & 0xff) << 8 | (uint)local_28 >> 0x18;
  if ((((uVar1 != 0) && (local_28._4_1_ == 'm')) && (local_28._5_1_ == 'o')) &&
     ((local_28._6_1_ == 'o' && (local_28._7_1_ == 'v')))) {
    _Var4 = lseek64(param_1,0,2);
    iVar2 = param_4 + ((int)uVar1 >> 0x1f) + (uint)CARRY4(param_3,uVar1);
    bVar3 = (uint)_Var4 < param_3 + uVar1;
    if ((int)-(iVar2 + (uint)bVar3) < 0 == (SBORROW4(0,iVar2) != SBORROW4(-iVar2,(uint)bVar3))) {
      return 0;
    }
  }
  printf((char *)(DAT_0001a950 + 0x1a940),DAT_0001a94c + 0x1a93c);
  return 0xffffffff;
}



/* ===== repair_mp4 @ 0001a954 size=2476 ===== */

undefined4 repair_mp4(char *param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  uint3 uVar7;
  int __fd;
  uint *__buf;
  uint uVar8;
  int iVar9;
  char *__buf_00;
  ssize_t sVar10;
  int iVar11;
  char *__s2;
  char *__s2_00;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  uint *puVar17;
  char *pcVar18;
  char *__s1;
  char *__s1_00;
  undefined4 uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  char *pcVar25;
  bool bVar26;
  bool bVar27;
  undefined8 uVar28;
  __off64_t _Var29;
  __off64_t _Var30;
  uint local_88;
  int local_84;
  char *local_54;
  __off64_t local_50;
  undefined8 local_30;
  
  printf((char *)(DAT_0001b304 + 0x1a97c),DAT_0001b300 + 0x1a980,param_1);
  if ((param_1 == (char *)0x0) || (__fd = open64(param_1,2), __fd == 0)) {
    return 0xffffffff;
  }
  _Var29 = lseek64(__fd,0,2);
  iVar22 = (int)((ulonglong)_Var29 >> 0x20);
  uVar16 = (uint)_Var29;
  if (iVar22 < (int)(uint)(uVar16 == 0)) {
    puts((char *)(DAT_0001b31c + 0x1b100));
    fsync(__fd);
    close(__fd);
    remove(param_1);
    return 0;
  }
  if (iVar22 < (int)(uint)(uVar16 < 0x40000)) {
    __buf = calloc(uVar16,1);
    lseek64(__fd,0,0);
    read(__fd,__buf,uVar16);
    iVar11 = uVar16 - 0x14;
    uVar21 = uVar16;
    if (0 < iVar11) goto LAB_0001aa1c;
  }
  else {
    __buf = calloc(0x40000,1);
    lseek64(__fd,0,0);
    read(__fd,__buf,0x40000);
    iVar11 = 0x3ffec;
    uVar21 = 0x40000;
LAB_0001aa1c:
    iVar24 = 0;
    puVar15 = __buf + 1;
    do {
      if (((((char)*puVar15 == 'r') && (*(char *)((int)puVar15 + 1) == 'e')) &&
          (*(char *)((int)puVar15 + 2) == 'p')) && (*(char *)((int)puVar15 + 3) == 'a')) {
        bVar1 = *(byte *)((int)__buf + iVar24 + 8);
        uVar7 = CONCAT21(CONCAT11(bVar1,*(char *)((int)__buf + iVar24 + 9)),
                         *(char *)((int)__buf + iVar24 + 10));
        bVar2 = *(byte *)((int)__buf + iVar24 + 0xb);
        pcVar25 = (char *)(DAT_0001b308 + 0x1aacc);
        cVar3 = *(char *)((int)__buf + iVar24 + 0xc);
        cVar4 = *(char *)((int)__buf + iVar24 + 0xd);
        cVar5 = *(char *)((int)__buf + iVar24 + 0xe);
        cVar6 = *(char *)((int)__buf + iVar24 + 0xf);
        puVar15 = (uint *)((int)__buf + (uVar21 - 1));
        goto LAB_0001ab4c;
      }
      iVar24 = iVar24 + 1;
      puVar15 = (uint *)((int)puVar15 + 1);
    } while (iVar24 < iVar11);
  }
  uVar19 = 0;
  puts((char *)(DAT_0001b318 + 0x1add4));
LAB_0001add4:
  free(__buf);
  fsync(__fd);
  close(__fd);
  return uVar19;
  while ((puVar15 = (uint *)((int)puVar17 + -1), (char)*puVar17 != 'm' ||
         (iVar11 = strncmp((char *)puVar17,pcVar25,4), iVar11 != 0))) {
LAB_0001ab4c:
    puVar17 = puVar15;
    if (puVar17 < __buf) {
      local_54 = (char *)0xffffffff;
      puts((char *)(DAT_0001b328 + 0x1b1b0));
      local_50 = -1;
      goto LAB_0001b1b8;
    }
  }
  local_54 = (char *)((int)puVar17 + (-4 - (int)__buf));
  local_50 = VectorShiftRight(CONCAT44(local_54,local_54),0x20);
  if ((int)local_54 < 0) {
LAB_0001b1b8:
    puts((char *)(DAT_0001b32c + 0x1b1c4));
  }
  else {
    uVar14 = *(uint *)((int)__buf + (int)local_54);
    uVar14 = uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
             uVar14 >> 0x18;
    if ((uVar14 != 0) &&
       (iVar11 = (int)((ulonglong)local_50 >> 0x20) + (uint)CARRY4((uint)local_50,uVar14),
       iVar11 = FUN_0001a878(__fd,iVar11,(uint)local_50 + uVar14,iVar11), iVar11 != -1)) {
      uVar19 = 2;
      puts((char *)(DAT_0001b330 + 0x1b1fc));
      goto LAB_0001add4;
    }
  }
  iVar11 = (int)uVar21 >> 0x1f;
  bVar27 = false;
  uVar14 = uVar16 - uVar21;
  iVar24 = iVar22 - (iVar11 + (uint)(uVar16 < uVar21));
  pcVar25 = (char *)(DAT_0001b30c + 0x1abec);
  __s2 = (char *)(DAT_0001b310 + 0x1abf8);
  __s2_00 = (char *)(DAT_0001b314 + 0x1ac04);
  iVar12 = 0;
  uVar8 = 0;
LAB_0001ac08:
  local_84 = (int)((ulonglong)_Var29 >> 0x20);
  local_88 = (uint)_Var29;
  bVar26 = 0xffffffbf < uVar8;
  uVar8 = uVar8 + 0x40;
  iVar12 = iVar12 + (uint)bVar26;
  if (iVar24 < 0) {
    uVar14 = 0;
    iVar24 = 0;
  }
  local_84 = local_84 - (iVar24 + (uint)(local_88 < uVar14));
  bVar26 = local_88 - uVar14 < uVar21;
  if ((int)(local_84 - (iVar11 + (uint)bVar26)) < 0 !=
      (SBORROW4(local_84,iVar11) != SBORROW4(local_84 - iVar11,(uint)bVar26))) {
    uVar21 = local_88 - uVar14;
  }
  if ((int)uVar21 < 0x11) goto LAB_0001b174;
  lseek64(__fd,CONCAT44(iVar24,uVar14),0);
  memset(__buf,0,uVar21);
  read(__fd,__buf,uVar21);
  puVar15 = (uint *)((int)__buf + (uVar21 - 1));
  do {
    puVar17 = puVar15;
    iVar11 = (int)uVar21 >> 0x1f;
    if (puVar17 < __buf) goto LAB_0001b130;
    puVar15 = (uint *)((int)puVar17 + -1);
  } while (((char)*puVar17 != 'm') || (iVar9 = strncmp((char *)puVar17,pcVar25,4), iVar9 != 0));
  pcVar18 = (char *)((int)puVar17 + (-4 - (int)__buf));
  uVar28 = VectorShiftRight(CONCAT44(pcVar18,pcVar18),0x20);
  if ((int)pcVar18 < 0) {
    bVar26 = uVar14 < 4;
    uVar14 = uVar14 - 4;
    iVar24 = iVar24 - (uint)bVar26;
  }
  else {
    bVar26 = CARRY4((uint)uVar28,uVar14);
    uVar14 = (uint)uVar28 + uVar14;
    iVar24 = (int)((ulonglong)uVar28 >> 0x20) + iVar24 + (uint)bVar26;
  }
  _Var29 = CONCAT44(iVar24,uVar14);
  lseek64(__fd,_Var29,0);
  memset(__buf,0,uVar21);
  read(__fd,__buf,uVar21);
  uVar20 = *__buf;
  uVar20 = uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
           uVar20 >> 0x18;
  if (0 < (int)uVar20) {
    iVar9 = (int)uVar20 >> 0x1f;
    iVar13 = iVar22 - (iVar24 + (uint)(uVar16 < uVar14));
    bVar26 = uVar16 - uVar14 < uVar20;
    if ((int)(iVar13 - (iVar9 + (uint)bVar26)) < 0 ==
        (SBORROW4(iVar13,iVar9) != SBORROW4(iVar13 - iVar9,(uint)bVar26))) {
      lseek64(__fd,CONCAT44(iVar24,uVar14),0);
      __buf_00 = calloc(uVar20,1);
      read(__fd,__buf_00,uVar20);
      pcVar18 = __buf_00 + (uVar20 - 1);
LAB_0001ae50:
      __s1 = pcVar18;
      if (__buf_00 <= __s1) goto code_r0x0001ae5c;
      free(__buf_00);
LAB_0001b130:
      if (uVar14 == 0 && iVar24 == 0) goto LAB_0001b14c;
      goto LAB_0001b0b0;
    }
  }
  goto LAB_0001ad50;
code_r0x0001ae5c:
  pcVar18 = __s1 + -1;
  if ((*__s1 != 'm') || (iVar9 = strncmp(__s1,__s2,4), iVar9 != 0)) goto LAB_0001ae50;
  iVar9 = (int)__s1 - (int)__buf_00;
  pcVar18 = __s1 + (uVar20 - iVar9) + -1;
  do {
    __s1_00 = pcVar18;
    if (__s1_00 < __s1) goto LAB_0001b038;
    pcVar18 = __s1_00 + -1;
  } while ((*__s1_00 != 'r') || (iVar13 = strncmp(__s1_00,__s2_00,4), iVar13 != 0));
  uVar23 = iVar9 - 4;
  if ((int)(uVar20 - iVar9) < 0x14) {
LAB_0001b038:
    uVar20 = iVar9 - 4;
    free(__buf_00);
    iVar9 = (int)uVar20 >> 0x1f;
    if (uVar14 == 0 && iVar24 == 0) {
LAB_0001b14c:
      uVar19 = 0xffffffff;
      puts((char *)(DAT_0001b320 + 0x1b15c));
      goto LAB_0001add4;
    }
    if (uVar20 == 0xfffffffb) {
LAB_0001b0b0:
      bVar26 = uVar14 < uVar21;
      uVar20 = uVar14 - uVar21;
      uVar14 = uVar20 + 0x40;
      iVar24 = (iVar24 - (iVar11 + (uint)bVar26)) + (uint)(0xffffffbf < uVar20);
      goto LAB_0001ad5c;
    }
    if (iVar9 < 0) {
LAB_0001b020:
      bVar26 = uVar14 < 4;
      uVar14 = uVar14 - 4;
      iVar24 = iVar24 - (uint)bVar26;
      goto LAB_0001ad5c;
    }
    if (!bVar27) {
      bVar27 = CARRY4(uVar14,uVar20);
      uVar14 = uVar14 + uVar20;
      iVar24 = iVar24 + iVar9 + (uint)bVar27;
      bVar27 = true;
      goto LAB_0001ad5c;
    }
    uVar23 = uVar14 - uVar21;
    iVar13 = iVar24 - (iVar11 + (uint)(uVar14 < uVar21));
  }
  else {
    uVar20 = *(uint *)(__s1_00 + 4);
    if (((((uint)bVar1 << 8 | (uVar7 & 0xffff) >> 8) << 8 | (CONCAT31(uVar7,bVar2) & 0xffff) >> 8)
         << 8 | (uint)bVar2) !=
        ((((uVar20 & 0xff) << 8 | uVar20 >> 8 & 0xff) << 8 | uVar20 >> 0x10 & 0xff) << 8 |
        uVar20 >> 0x18) ||
        CONCAT31(CONCAT21(CONCAT11(cVar3,cVar4),cVar5),cVar6) !=
        CONCAT31(CONCAT21(CONCAT11(__s1_00[8],__s1_00[9]),__s1_00[10]),__s1_00[0xb])) {
      free(__buf_00);
LAB_0001ad50:
      bVar26 = uVar14 < uVar21;
      uVar14 = uVar14 - uVar21;
      iVar24 = iVar24 - (iVar11 + (uint)bVar26);
      goto LAB_0001ad5c;
    }
    free(__buf_00);
    uVar20 = (uVar14 - (int)local_54) + uVar23;
    iVar9 = FUN_0001a878(__fd);
    iVar13 = (int)uVar23 >> 0x1f;
    if (iVar9 == 0) {
      local_30 = CONCAT44(local_30._4_4_,
                          uVar20 * 0x1000000 | (uVar20 >> 8 & 0xff) << 0x10 |
                          (uVar20 >> 0x10 & 0xff) << 8 | uVar20 >> 0x18);
      lseek64(__fd,local_50,0);
      sVar10 = write(__fd,&local_30,4);
      if (sVar10 == 4) {
        uVar21 = uVar14 + uVar23;
        iVar22 = iVar24 + iVar13 + (uint)CARRY4(uVar14,uVar23);
        lseek64(__fd,CONCAT44(iVar22,uVar21),0);
        read(__fd,&local_30,4);
        uVar16 = (uint)local_30 << 0x18 | ((uint)local_30 >> 8 & 0xff) << 0x10 |
                 ((uint)local_30 >> 0x10 & 0xff) << 8 | (uint)local_30 >> 0x18;
        local_30 = 0;
        _Var29 = CONCAT44(iVar22 + ((int)uVar16 >> 0x1f) + (uint)CARRY4(uVar21,uVar16),
                          uVar21 + uVar16);
        _Var30 = lseek64(__fd,_Var29,0);
        if (_Var30 == _Var29) {
          write(__fd,&local_30,8);
        }
        uVar19 = 1;
        puts((char *)(DAT_0001b334 + 0x1b2e8));
      }
      else {
LAB_0001b174:
        uVar19 = 0xffffffff;
      }
      goto LAB_0001add4;
    }
    if (uVar14 == 0 && iVar24 == 0) {
      uVar19 = 0xffffffff;
      puts((char *)(DAT_0001b338 + 0x1b2fc));
      goto LAB_0001add4;
    }
    if (uVar23 == 0xfffffffb) {
      bVar26 = uVar14 < uVar21;
      uVar20 = uVar14 - uVar21;
      uVar14 = uVar20 + 0x40;
      iVar24 = (iVar24 - (iVar11 + (uint)bVar26)) + (uint)(0xffffffbf < uVar20);
      goto LAB_0001ad5c;
    }
    if (iVar13 < 0) goto LAB_0001b020;
    if (!bVar27) {
      bVar27 = CARRY4(uVar14,uVar23);
      uVar14 = uVar14 + uVar23;
      iVar24 = iVar24 + iVar13 + (uint)bVar27;
      bVar27 = true;
      goto LAB_0001ad5c;
    }
    uVar20 = uVar14 - uVar21;
    iVar9 = iVar24 - (iVar11 + (uint)(uVar14 < uVar21));
  }
  uVar14 = uVar20 + uVar23;
  bVar27 = false;
  iVar24 = iVar9 + iVar13 + (uint)CARRY4(uVar20,uVar23);
LAB_0001ad5c:
  if ((int)(iVar22 - (iVar12 + (uint)(uVar16 < uVar8))) < 0 !=
      (SBORROW4(iVar22,iVar12) != SBORROW4(iVar22 - iVar12,(uint)(uVar16 < uVar8))))
  goto LAB_0001b160;
  goto LAB_0001ac08;
LAB_0001b160:
  uVar19 = 0xffffffff;
  puts((char *)(DAT_0001b324 + 0x1b170));
  goto LAB_0001add4;
}



/* ===== rkfsmk_fat_check @ 0001b33c size=768 ===== */

undefined4 rkfsmk_fat_check(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 local_100;
  int local_fc;
  int local_f8;
  int iStack_f4;
  int iStack_f0;
  int local_ec;
  uint local_e8 [2];
  uint local_e0;
  int iStack_dc;
  uint local_d8;
  int local_d4;
  int local_a4;
  undefined4 local_88;
  undefined4 local_68;
  int local_5c;
  void *local_54;
  void *local_50;
  void *local_4c;
  undefined4 local_44;
  undefined1 auStack_40 [4];
  undefined4 *local_3c;
  char local_38;
  char local_37;
  char local_36;
  char local_35;
  char local_34;
  char local_33;
  char local_32;
  char local_31;
  int *local_30;
  
  local_100 = 0;
  memset(local_e8,0,0xc0);
  iVar2 = DAT_0001b644;
  iVar1 = DAT_0001b63c + 0x1b378;
  if ((param_2 == 0) || (local_3c = *(undefined4 **)(param_2 + 8), local_3c == (undefined4 *)0x0)) {
    local_3c = &local_100;
  }
  local_68 = 0xffffffff;
  puVar3 = *(undefined4 **)(iVar1 + DAT_0001b640);
  *puVar3 = 1;
  **(undefined4 **)(iVar1 + iVar2) = 0;
  iVar2 = FsOpen(local_e8,param_1,1);
  if (iVar2 != 0) {
    return 0xffffffff;
  }
  iVar2 = BootRead(local_e8);
  if (iVar2 == 0) {
    if ((param_2 != 0) && (*(int *)(param_2 + 0x14) != 0)) {
      if (((*(char *)(param_2 + 0xc) != local_38) ||
          ((((*(char *)(param_2 + 0xd) != local_37 || (local_36 != *(char *)(param_2 + 0xe))) ||
            (local_35 != *(char *)(param_2 + 0xf))) ||
           ((local_34 != *(char *)(param_2 + 0x10) || (local_33 != *(char *)(param_2 + 0x11)))))))
         || (local_32 != *(char *)(param_2 + 0x12))) {
        iVar2 = 0;
        uVar4 = 0xfffffffe;
        goto LAB_0001b500;
      }
      if (local_31 != *(char *)(param_2 + 0x13)) {
        iVar2 = 0;
        uVar4 = 0xfffffffe;
        goto LAB_0001b500;
      }
    }
    if (local_30 != (int *)0x0) {
      free(local_30);
    }
    uVar5 = (uint)((ulonglong)local_e8[0] * (ulonglong)local_d8);
    local_30 = (int *)0x0;
    iVar2 = FsRead(local_e8,0,uVar5 + local_e0,
                   local_d8 * ((int)local_e8[0] >> 0x1f) + local_e8[0] * local_d4 +
                   (int)((ulonglong)local_e8[0] * (ulonglong)local_d8 >> 0x20) + iStack_dc +
                   (uint)CARRY4(uVar5,local_e0),0x14,&local_fc);
    if (((iVar2 == 0) && (local_fc == 0x5a5a5a5a)) && (local_f8 == -0x5a5a5a5b)) {
      local_30 = malloc(0x14);
      *local_30 = local_fc;
      local_30[1] = local_f8;
      local_30[2] = iStack_f4;
      local_30[3] = iStack_f0;
      local_30[4] = local_ec;
    }
    iVar2 = ReadFat(local_e8);
    if ((iVar2 == 0) && (iVar2 = ScanRoot(local_e8,param_2), iVar2 == 0)) {
      if (local_5c != 0) {
        FixBad(local_e8);
      }
      ReclaimFile(local_e8);
      iVar2 = UpdateFree(local_e8);
      FileUnused(local_44);
      Free(auStack_40);
      uVar4 = 0;
      goto LAB_0001b500;
    }
  }
  iVar2 = 0;
  uVar4 = 0xffffffff;
LAB_0001b500:
  printf((char *)(DAT_0001b648 + 0x1b520),param_1,local_88,local_a4 - iVar2,local_a4);
  Free(auStack_40);
  if (local_30 != (int *)0x0) {
    free(local_30);
  }
  if (local_50 != (void *)0x0) {
    free(local_50);
  }
  if (local_4c != (void *)0x0) {
    free(local_4c);
  }
  if (local_54 != (void *)0x0) {
    free(local_54);
  }
  FsClose(local_e8,*puVar3);
  return uVar4;
}



/* ===== FUN_0001b650 @ 0001b650 size=276 ===== */

undefined4 FUN_0001b650(int param_1,uint param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (((int)param_2 < 0) || (*(uint *)(param_1 + 0x2fc) <= param_2)) {
    return 0xffffffff;
  }
  iVar2 = *(int *)(param_1 + 800);
  if (iVar2 == 0x10) {
    *(char *)(*(int *)(param_1 + 0x2f4) + param_2 * 2) = (char)(param_3 & 0xffff);
    *(char *)(*(int *)(param_1 + 0x2f4) + param_2 * 2 + 1) = (char)((param_3 & 0xffff) >> 8);
    return 0;
  }
  if (iVar2 != 0x20) {
    if (iVar2 != 0xc) {
      return 0xffffffff;
    }
    iVar3 = *(int *)(param_1 + 0x2f4);
    iVar2 = (int)(param_2 * 3) >> 1;
    iVar4 = iVar2 + 1;
    bVar1 = (byte)((param_3 << 0x14) >> 0x18);
    if ((param_2 * 3 & 1) == 0) {
      *(char *)(iVar3 + iVar2) = (char)param_3;
      *(byte *)(*(int *)(param_1 + 0x2f4) + iVar4) =
           *(byte *)(*(int *)(param_1 + 0x2f4) + iVar4) & 0xf0 | bVar1 >> 4;
      return 0;
    }
    *(byte *)(iVar3 + iVar2) = *(byte *)(iVar3 + iVar2) & 0xf | (byte)((param_3 & 0xff) << 4);
    *(byte *)(*(int *)(param_1 + 0x2f4) + iVar4) = bVar1;
    return 0;
  }
  iVar2 = param_2 * 4;
  param_3 = param_3 & 0xfffffff;
  *(char *)(*(int *)(param_1 + 0x2f4) + param_2 * 4) = (char)param_3;
  *(char *)(*(int *)(param_1 + 0x2f4) + iVar2 + 1) = (char)(param_3 >> 8);
  *(char *)(*(int *)(param_1 + 0x2f4) + iVar2 + 2) = (char)(param_3 >> 0x10);
  *(char *)(*(int *)(param_1 + 0x2f4) + iVar2 + 3) = (char)(param_3 >> 0x18);
  return 0;
}



/* ===== FUN_0001b764 @ 0001b764 size=124 ===== */

int FUN_0001b764(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  while( true ) {
    if (param_1 == 0) {
      return 0;
    }
    piVar2 = *(int **)(param_1 + 0xa0);
    if (piVar2 != (int *)0x0) {
      iVar1 = piVar2[2];
      while( true ) {
        if (param_2 == iVar1) {
          return *piVar2;
        }
        piVar2 = (int *)piVar2[3];
        if (piVar2 == (int *)0x0) break;
        iVar1 = piVar2[2];
      }
    }
    if ((*(int *)(param_1 + 0xa8) != 0) &&
       (iVar1 = FUN_0001b764(*(int *)(param_1 + 0xa8),param_2), iVar1 != 0)) break;
    param_1 = *(int *)(param_1 + 0xac);
  }
  return iVar1;
}



/* ===== FUN_0001b7e0 @ 0001b7e0 size=136 ===== */

void FUN_0001b7e0(void *param_1)

{
  undefined4 *__ptr;
  undefined4 *puVar1;
  
  if (param_1 == (void *)0x0) {
    return;
  }
  __ptr = *(undefined4 **)((int)param_1 + 0xa0);
  while (__ptr != (undefined4 *)0x0) {
    if ((void *)*__ptr == (void *)0x0) {
      puVar1 = (undefined4 *)__ptr[3];
      free(__ptr);
      __ptr = puVar1;
    }
    else {
      free((void *)*__ptr);
      puVar1 = (undefined4 *)__ptr[3];
      free(__ptr);
      __ptr = puVar1;
    }
  }
  if (*(int *)((int)param_1 + 0xa8) != 0) {
    FUN_0001b7e0();
  }
  if (*(int *)((int)param_1 + 0xac) != 0) {
    FUN_0001b7e0();
  }
  free(param_1);
  return;
}



/* ===== FUN_0001b868 @ 0001b868 size=396 ===== */

undefined4 FUN_0001b868(int param_1,int *param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  short sVar3;
  short sVar4;
  tm *ptVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  int iVar16;
  int iVar17;
  
  puVar9 = *(undefined4 **)*param_2;
  if (*(int *)(param_1 + 0x358) == 0) {
    ptVar5 = localtime((time_t *)(param_1 + 0x2f0));
  }
  else {
    ptVar5 = gmtime((time_t *)(param_1 + 0x2f0));
  }
  iVar6 = DAT_0001b9f4;
  *(undefined1 *)(puVar9 + 3) = 0;
  *(undefined1 *)((int)puVar9 + 0xb) = 0x10;
  iVar10 = DAT_0001b9f8;
  uVar7 = *(undefined4 *)(iVar6 + 0x1b8ac);
  puVar15 = (undefined4 *)(DAT_0001b9f8 + 0x1b8b8);
  *puVar9 = *(undefined4 *)(iVar6 + 0x1b8a8);
  uVar2 = *(undefined2 *)(iVar6 + 0x1b8b0);
  uVar1 = *(undefined1 *)(iVar6 + 0x1b8b2);
  puVar9[1] = uVar7;
  *(undefined2 *)(puVar9 + 2) = uVar2;
  *(undefined1 *)((int)puVar9 + 10) = uVar1;
  iVar14 = ptVar5->tm_year;
  iVar6 = ptVar5->tm_mon;
  iVar13 = ptVar5->tm_mday;
  sVar3 = (short)(ptVar5->tm_min << 5) + (short)(ptVar5->tm_sec >> 1) +
          (short)ptVar5->tm_hour * 0x800;
  *(undefined1 *)((int)puVar9 + 0xd) = 0;
  iVar11 = *param_2;
  *(short *)((int)puVar9 + 0x16) = sVar3;
  *(short *)((int)puVar9 + 0xe) = sVar3;
  sVar3 = ((short)iVar14 + -0x50) * 0x200 + ((short)iVar6 + 1) * 0x20 + (short)iVar13;
  uVar12 = *(undefined4 *)(iVar11 + 8);
  uVar7 = *puVar15;
  uVar8 = *(undefined4 *)(iVar10 + 0x1b8bc);
  *(short *)(puVar9 + 6) = sVar3;
  *(short *)(puVar9 + 4) = sVar3;
  *(short *)((int)puVar9 + 0x12) = sVar3;
  *(short *)((int)puVar9 + 0x1a) = (short)uVar12;
  *(undefined1 *)(puVar9 + 7) = 0;
  *(short *)(puVar9 + 5) = (short)((uint)uVar12 >> 0x10);
  *(undefined1 *)((int)puVar9 + 0x1d) = 0;
  *(undefined1 *)((int)puVar9 + 0x1e) = 0;
  *(undefined1 *)((int)puVar9 + 0x1f) = 0;
  puVar9[8] = uVar7;
  uVar2 = *(undefined2 *)(iVar10 + 0x1b8c0);
  uVar1 = *(undefined1 *)(iVar10 + 0x1b8c2);
  puVar9[9] = uVar8;
  *(undefined2 *)(puVar9 + 10) = uVar2;
  *(undefined1 *)((int)puVar9 + 0x2a) = uVar1;
  *(undefined1 *)((int)puVar9 + 0x2b) = 0x10;
  *(undefined1 *)(puVar9 + 0xb) = 0;
  iVar6 = ptVar5->tm_year;
  iVar16 = ptVar5->tm_mon;
  iVar14 = ptVar5->tm_min;
  iVar11 = ptVar5->tm_mday;
  iVar10 = ptVar5->tm_sec;
  iVar13 = ptVar5->tm_hour;
  *(undefined1 *)((int)puVar9 + 0x2d) = 0;
  iVar17 = *param_2;
  sVar3 = ((short)iVar6 + -0x50) * 0x200 + ((short)iVar16 + 1) * 0x20 + (short)iVar11;
  sVar4 = (short)(iVar14 << 5) + (short)(iVar10 >> 1) + (short)iVar13 * 0x800;
  *(short *)(puVar9 + 0xe) = sVar3;
  iVar6 = *(int *)(iVar17 + 4);
  *(short *)(puVar9 + 0xc) = sVar3;
  *(short *)((int)puVar9 + 0x32) = sVar3;
  *(short *)((int)puVar9 + 0x36) = sVar4;
  *(short *)((int)puVar9 + 0x2e) = sVar4;
  *(undefined1 *)(puVar9 + 0xd) = 0;
  *(undefined1 *)((int)puVar9 + 0x35) = 0;
  *(undefined1 *)((int)puVar9 + 0x3a) = 0;
  *(undefined1 *)((int)puVar9 + 0x3b) = 0;
  *(undefined1 *)(puVar9 + 0xf) = 0;
  *(undefined1 *)((int)puVar9 + 0x3d) = 0;
  *(undefined1 *)((int)puVar9 + 0x3e) = 0;
  *(undefined1 *)((int)puVar9 + 0x3f) = 0;
  *(int *)(iVar17 + 4) = iVar6 + 2;
  return 0;
}



/* ===== FUN_0001b9fc @ 0001b9fc size=372 ===== */

char * FUN_0001b9fc(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  size_t sVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  char local_a8 [128];
  
  pcVar5 = *(char **)(param_1 + 0x360);
  iVar8 = 1;
  uVar10 = VectorShiftRight(CONCAT44(param_4,param_4),0x20);
  memset(local_a8,0,0x80);
  sVar1 = strlen(param_2);
  do {
    if (sVar1 == 0) {
      return pcVar5;
    }
    pcVar4 = param_2 + -1;
    pcVar2 = pcVar4 + sVar1;
    iVar3 = 0;
    iVar9 = -1;
    iVar6 = 0;
    do {
      pcVar4 = pcVar4 + 1;
      iVar7 = iVar6;
      if (*pcVar4 == '/') {
        iVar3 = iVar3 + 1;
      }
      else if (iVar8 == iVar3) {
        iVar7 = iVar6 + 1;
        iVar9 = 0;
        local_a8[iVar6] = *pcVar4;
      }
      iVar6 = iVar7;
    } while (pcVar2 != pcVar4);
    if (iVar9 != 0) {
      return pcVar5;
    }
    pcVar2 = *(char **)(pcVar5 + 0xa8);
    if (pcVar2 == (char *)0x0) {
      pcVar2 = calloc(0xb0,1);
      *(undefined4 *)(pcVar2 + 0x9c) = param_3;
      pcVar2[0x8c] = '\x01';
      pcVar2[0x8d] = '\0';
      pcVar2[0x8e] = '\0';
      pcVar2[0x8f] = '\0';
      pcVar2 = strcpy(pcVar2,local_a8);
      *(char **)(pcVar5 + 0xa8) = pcVar2;
      *(undefined8 *)(pcVar2 + 0x90) = uVar10;
    }
    else {
      iVar3 = strcmp(pcVar2,local_a8);
      while (iVar3 != 0) {
        pcVar5 = *(char **)(pcVar2 + 0xac);
        if (pcVar5 == (char *)0x0) {
          pcVar5 = calloc(0xb0,1);
          *(undefined4 *)(pcVar5 + 0x9c) = param_3;
          pcVar5[0x8c] = '\x01';
          pcVar5[0x8d] = '\0';
          pcVar5[0x8e] = '\0';
          pcVar5[0x8f] = '\0';
          strcpy(pcVar5,local_a8);
          *(char **)(pcVar2 + 0xac) = pcVar5;
          *(undefined8 *)(pcVar5 + 0x90) = uVar10;
          pcVar2 = pcVar5;
          break;
        }
        iVar3 = strcmp(pcVar5,local_a8);
        pcVar2 = pcVar5;
      }
    }
    iVar8 = iVar8 + 1;
    memset(local_a8,0,0x80);
    sVar1 = strlen(param_2);
    pcVar5 = pcVar2;
  } while( true );
}



/* ===== FUN_0001bb70 @ 0001bb70 size=3956 ===== */

undefined4 FUN_0001bb70(int param_1,int param_2,char *param_3)

{
  undefined1 auVar1 [16];
  short sVar2;
  short sVar3;
  bool bVar4;
  bool bVar5;
  byte *__s;
  ushort *__ptr;
  size_t sVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  tm *ptVar10;
  int *piVar11;
  void *pvVar12;
  ushort *puVar13;
  size_t sVar14;
  byte bVar15;
  size_t sVar16;
  byte bVar17;
  byte extraout_r3;
  int iVar18;
  int iVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  byte *pbVar22;
  byte *pbVar23;
  int *piVar24;
  bool bVar25;
  char cVar26;
  ushort *puVar27;
  ushort *puVar28;
  byte *pbVar29;
  bool bVar30;
  uint uVar31;
  undefined4 uVar32;
  char *pcVar33;
  int iVar34;
  size_t sVar35;
  int iVar36;
  int iVar37;
  bool bVar38;
  uint local_98;
  uint local_88;
  ushort *local_84;
  byte *local_7c;
  size_t local_78;
  size_t local_70;
  byte local_54 [4];
  byte local_50;
  byte local_4f;
  byte local_4e;
  byte local_4d;
  byte local_4c;
  byte local_4b;
  timeval local_48;
  byte local_40 [12];
  undefined4 local_34;
  byte abStack_30 [12];
  
  __s = malloc(0x2a0);
  iVar18 = DAT_0001cae4 + 0x1bb98;
  if (__s == (byte *)0x0) {
    puts((char *)(DAT_0001caf0 + 0x1c8a4));
  }
  memset(__s,0,0x2a0);
  __ptr = malloc(0x100);
  if (__ptr == (ushort *)0x0) {
    uVar21 = 0xfffffff4;
    goto LAB_0001bc34;
  }
  sVar6 = strlen(param_3);
  if (sVar6 != 0) {
    iVar34 = 0;
    puVar27 = __ptr;
    uVar8 = 0;
    pcVar33 = param_3;
    do {
      iVar7 = Char2Uni(pcVar33,puVar27);
      uVar31 = uVar8 + 1;
      iVar34 = iVar34 + iVar7;
      pcVar33 = pcVar33 + iVar7;
      if (iVar7 < 0) break;
      if ((int)sVar6 <= iVar34) {
        puVar28 = __ptr + uVar31;
        local_84 = puVar28;
        local_98 = uVar31;
        if (uVar31 % 0xd != 0) {
          local_98 = uVar8 + 2;
          iVar34 = 0;
          puVar27[1] = 0;
          if (local_98 % 0xd != 0) {
            iVar7 = -(local_98 % 0xd);
            iVar19 = iVar7 + 0xd;
            puVar13 = puVar27 + 2;
            if (iVar7 + 0xcU < 7) {
LAB_0001bcc4:
              *(undefined1 *)puVar13 = 0xff;
              *(undefined1 *)((int)puVar13 + 1) = 0xff;
              if (iVar34 + 1 < iVar19) {
                *(undefined1 *)(puVar13 + 1) = 0xff;
                *(undefined1 *)((int)puVar13 + 3) = 0xff;
                if (iVar34 + 2 < iVar19) {
                  *(undefined1 *)(puVar13 + 2) = 0xff;
                  *(undefined1 *)((int)puVar13 + 5) = 0xff;
                  if (iVar34 + 3 < iVar19) {
                    *(undefined1 *)(puVar13 + 3) = 0xff;
                    *(undefined1 *)((int)puVar13 + 7) = 0xff;
                    if (iVar34 + 4 < iVar19) {
                      *(undefined1 *)(puVar13 + 4) = 0xff;
                      *(undefined1 *)((int)puVar13 + 9) = 0xff;
                      if (iVar34 + 5 < iVar19) {
                        *(undefined1 *)(puVar13 + 5) = 0xff;
                        *(undefined1 *)((int)puVar13 + 0xb) = 0xff;
                        if (iVar34 + 6 < iVar19) {
                          *(undefined1 *)(puVar13 + 6) = 0xff;
                          *(undefined1 *)((int)puVar13 + 0xd) = 0xff;
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
              auVar1._8_8_ = SUB158(SUB1615((undefined1  [16])0x0,1),7);
              auVar1._0_8_ = 0xffffffffffffffff;
              auVar1 = auVar1 << 0x40 | auVar1;
              *(undefined4 *)puVar13 = *(undefined4 *)auVar1;
              *(undefined4 *)(puVar27 + 4) = *(undefined4 *)(auVar1 + (undefined1  [16])0x4);
              *(undefined4 *)(puVar27 + 6) = *(undefined4 *)(auVar1 + (undefined1  [16])0x8);
              *(undefined4 *)(puVar27 + 8) = *(undefined4 *)(auVar1 + (undefined1  [16])0xc);
              puVar13 = puVar27 + 10;
              if (iVar19 != 8) {
                iVar34 = 8;
                goto LAB_0001bcc4;
              }
            }
            local_98 = local_98 + iVar19;
          }
        }
        goto LAB_0001bd80;
      }
      puVar27 = puVar27 + 1;
      uVar8 = uVar31;
    } while (uVar31 != 0xff);
    uVar21 = 0xffffffff;
    free(__ptr);
    goto LAB_0001bc34;
  }
  local_98 = 0;
  puVar28 = __ptr;
  local_84 = __ptr;
  uVar31 = local_98;
LAB_0001bd80:
  do {
    puVar27 = puVar28;
    puVar28 = puVar27 + -1;
    if (puVar28 < __ptr) {
      if (puVar28 == __ptr + -1) goto LAB_0001be18;
      if (puVar28 != (ushort *)0x0) goto LAB_0001bda4;
      goto LAB_0001c4b8;
    }
  } while (puVar27[-1] != 0x2e);
  if ((puVar28 == local_84 + -1) || (puVar28 == __ptr + -1)) {
LAB_0001be18:
    puVar27 = (ushort *)0x0;
  }
  else {
    puVar13 = __ptr;
    if (__ptr < puVar28) {
      if (*__ptr == 0x20 || *__ptr == 0x2e) {
        do {
          puVar13 = puVar13 + 1;
          if (puVar28 <= puVar13) goto LAB_0001be10;
        } while (*puVar13 == 0x20 || *puVar13 == 0x2e);
      }
    }
    else {
LAB_0001be10:
      if (puVar28 == puVar13) goto LAB_0001be18;
    }
LAB_0001bda4:
    uVar31 = (int)puVar28 - (int)__ptr >> 1;
  }
  if (0 < (int)uVar31) {
    local_78 = 6;
    bVar25 = true;
    bVar4 = true;
    local_70 = 2;
    sVar6 = 0;
    puVar28 = __ptr;
    pbVar29 = local_40;
    do {
      while( true ) {
        puVar13 = puVar28 + 1;
        uVar8 = (uint)*puVar28;
        if (uVar8 != 0x20 && uVar8 != 0x2e) break;
        bVar25 = false;
        sVar14 = sVar6;
        puVar28 = puVar13;
        if (__ptr + uVar31 == puVar13) goto LAB_0001bfc4;
      }
      bVar30 = false;
      if (((((uVar8 - 0x5b & 0xfffd) == 0) || ((uVar8 - 0x3b & 0xfffd) == 0)) || (uVar8 - 0x2b < 2))
         || (iVar34 = Uni2Char(uVar8,&local_50), iVar34 < 1)) {
        bVar25 = false;
        local_50 = 0x5f;
        iVar34 = 1;
        if ((int)sVar6 < 2) goto LAB_0001c10c;
LAB_0001bed0:
        if (5 < (int)sVar6) goto LAB_0001bedc;
        iVar7 = sVar6 + iVar34;
        sVar14 = local_70;
LAB_0001c11c:
        local_70 = sVar14;
        if (iVar7 < 7) goto LAB_0001bedc;
        *pbVar29 = local_50;
        local_78 = sVar6;
        if (iVar34 != 1) goto LAB_0001befc;
LAB_0001c140:
        sVar14 = sVar6 + 1;
        pbVar22 = pbVar29 + 1;
      }
      else {
        if (iVar34 == 1) {
          uVar8 = (uint)local_50;
          if (uVar8 < 0x7f) {
            bVar30 = bVar4;
          }
          uVar9 = Char2Upper(uVar8);
          local_50 = (byte)uVar9;
          if (((*(ushort *)(**(int **)(iVar18 + DAT_0001cae8) + uVar9 * 2) & 4) != 0) &&
             (uVar9 != uVar8)) {
            bVar30 = false;
          }
        }
        else {
          bVar30 = false;
        }
        bVar4 = bVar30;
        if (1 < (int)sVar6) goto LAB_0001bed0;
LAB_0001c10c:
        iVar7 = sVar6 + iVar34;
        sVar14 = sVar6;
        if (2 < iVar7) goto LAB_0001c11c;
LAB_0001bedc:
        sVar14 = sVar6 + 1;
        *pbVar29 = local_50;
        if (7 < (int)sVar14) {
          iVar7 = 0;
LAB_0001c8c4:
          if (iVar7 < iVar34 + -1) {
            local_88 = 0;
          }
          else {
            local_88 = (uint)((int)uVar31 <= (int)puVar28 + (2 - (int)__ptr) >> 1);
          }
          goto LAB_0001bfe4;
        }
        if (iVar34 == 1) goto LAB_0001c140;
LAB_0001befc:
        sVar14 = sVar6 + 2;
        pbVar22 = pbVar29 + 2;
        pbVar29[1] = local_4f;
        if (sVar14 == 8) {
          iVar7 = 1;
          goto LAB_0001c8c4;
        }
        if (iVar34 != 2) {
          sVar14 = sVar6 + 3;
          pbVar22 = pbVar29 + 3;
          pbVar29[2] = local_4e;
          if (sVar14 == 8) {
            iVar7 = 2;
            goto LAB_0001c8c4;
          }
          if (iVar34 != 3) {
            sVar14 = sVar6 + 4;
            pbVar22 = pbVar29 + 4;
            pbVar29[3] = local_4d;
            if (sVar14 == 8) {
              iVar7 = 3;
              goto LAB_0001c8c4;
            }
            if (iVar34 != 4) {
              sVar14 = sVar6 + 5;
              pbVar22 = pbVar29 + 5;
              pbVar29[4] = local_4c;
              if (sVar14 == 8) {
                iVar7 = 4;
                goto LAB_0001c8c4;
              }
              if (iVar34 != 5) {
                sVar14 = sVar6 + 6;
                pbVar22 = pbVar29 + 6;
                pbVar29[5] = local_4b;
                if (sVar14 == 8) {
                  sVar14 = 8;
                  iVar7 = 5;
                  goto LAB_0001c8c4;
                }
              }
            }
          }
        }
      }
      sVar6 = sVar14;
      puVar28 = puVar13;
      pbVar29 = pbVar22;
    } while (__ptr + uVar31 != puVar13);
LAB_0001bfc4:
    if (sVar14 != 0) {
      local_88 = 1;
LAB_0001bfe4:
      if (puVar27 == (ushort *)0x0) {
        bVar5 = true;
        sVar6 = 0;
        bVar30 = true;
      }
      else if (puVar27 < local_84) {
        sVar6 = 0;
        bVar38 = true;
        bVar5 = true;
        pbVar29 = local_54;
        do {
          puVar28 = puVar27 + 1;
          uVar8 = (uint)*puVar27;
          if (uVar8 != 0x20 && uVar8 != 0x2e) {
            bVar30 = false;
            if ((((uVar8 - 0x5b & 0xfffd) == 0) || ((uVar8 - 0x3b & 0xfffd) == 0)) ||
               ((uVar8 - 0x2b < 2 || (iVar34 = Uni2Char(uVar8,&local_50), iVar34 < 1)))) {
              local_50 = 0x5f;
              bVar5 = bVar30;
LAB_0001c1c4:
              sVar6 = sVar6 + 1;
              iVar34 = 1;
              *pbVar29 = local_50;
              bVar30 = bVar38;
LAB_0001c1d8:
              pbVar29 = pbVar29 + iVar34;
              bVar38 = bVar30;
              if ((int)sVar6 < 3) goto LAB_0001c1ec;
              if (local_84 == puVar27 + 1) break;
            }
            else {
              if (iVar34 == 1) {
                uVar8 = (uint)local_50;
                if (0x7e < uVar8) {
                  bVar38 = bVar30;
                }
                uVar31 = Char2Upper(uVar8);
                local_50 = (byte)uVar31;
                if (((*(ushort *)(**(int **)(iVar18 + DAT_0001cae8) + uVar31 * 2) & 4) != 0) &&
                   (uVar8 != uVar31)) {
                  bVar38 = false;
                }
                goto LAB_0001c1c4;
              }
              sVar35 = sVar6 + iVar34;
              if ((int)sVar35 < 4) {
                *pbVar29 = local_50;
                pbVar29[1] = local_4f;
                sVar6 = sVar35;
                if ((((iVar34 == 2) || (pbVar29[2] = local_4e, iVar34 == 3)) ||
                    (pbVar29[3] = local_4d, iVar34 == 4)) || (pbVar29[4] = local_4c, iVar34 == 5)) {
                  bVar30 = false;
                }
                else {
                  pbVar29[5] = local_4b;
                  bVar30 = false;
                }
                goto LAB_0001c1d8;
              }
            }
            local_40[sVar14] = 0;
            bVar38 = local_40[0] != 0xe5;
            local_54[sVar6] = 0;
            if (bVar38) {
              local_34._0_1_ = 0x20;
              local_34._1_1_ = 0x20;
              local_34._2_1_ = 0x20;
              local_34._3_1_ = 0x20;
              abStack_30[0] = 0x20;
              abStack_30[1] = 0x20;
              abStack_30[2] = 0x20;
              abStack_30[3] = 0x24;
              abStack_30[4] = 0x20;
              abStack_30[5] = 0x20;
              abStack_30[6] = 0x20;
              memcpy(&local_34,local_40,sVar14);
              memcpy(abStack_30 + 4,local_54,sVar6);
              bVar17 = extraout_r3;
              goto LAB_0001c2c0;
            }
            local_88 = 0;
            goto LAB_0001c940;
          }
          bVar5 = false;
LAB_0001c1ec:
          puVar27 = puVar28;
          bVar30 = bVar38;
        } while (puVar28 < local_84);
      }
      else {
        sVar6 = 0;
        bVar5 = true;
        bVar30 = true;
      }
      local_40[sVar14] = 0;
      bVar17 = local_40[0];
      local_54[sVar6] = 0;
      if (bVar17 == 0xe5) {
LAB_0001c940:
        local_40[0] = 5;
      }
      local_7c = local_54;
      local_34._0_1_ = 0x20;
      local_34._1_1_ = 0x20;
      local_34._2_1_ = 0x20;
      local_34._3_1_ = 0x20;
      abStack_30[0] = 0x20;
      abStack_30[1] = 0x20;
      abStack_30[2] = 0x20;
      abStack_30[3] = 0x24;
      abStack_30[4] = 0x20;
      abStack_30[5] = 0x20;
      abStack_30[6] = 0x20;
      memcpy(&local_34,local_40,sVar14);
      memcpy(abStack_30 + 4,local_7c,sVar6);
      bVar17 = 0;
      if (((local_88 == 0) || (bVar17 = 0, !bVar25)) || (bVar17 = bVar5, !bVar5)) {
LAB_0001c2c0:
        iVar18 = *(int *)(param_2 + 0xa8);
        cVar26 = '1';
        sVar6 = sVar14;
        if (6 < (int)sVar14) {
          bVar17 = 0x20;
          sVar6 = local_78;
        }
        if (6 < (int)sVar14) {
          abStack_30[3] = bVar17;
        }
        *(undefined1 *)((int)&local_34 + sVar6) = 0x7e;
        do {
          *(char *)((int)&local_34 + sVar6 + 1) = cVar26;
          iVar34 = iVar18;
          while( true ) {
            if (iVar34 == 0) goto LAB_0001c4f0;
            iVar7 = memcmp((void *)(iVar34 + 0x80),&local_34,0xb);
            if (iVar7 == 0) break;
            iVar34 = *(int *)(iVar34 + 0xac);
          }
          cVar26 = cVar26 + '\x01';
        } while (cVar26 != ':');
        gettimeofday(&local_48,(__timezone_ptr_t)0x0);
        uVar8 = local_48.tv_sec * 1000 + local_48.tv_usec / 1000;
        gettimeofday(&local_48,(__timezone_ptr_t)0x0);
        pcVar33 = (char *)(DAT_0001caec + 0x1c3b4);
        sVar35 = sVar6;
        sVar14 = local_48.tv_sec;
        if (2 < (int)sVar6) {
          sVar35 = local_70;
          sVar14 = local_70;
        }
        sVar16 = sVar14;
        local_84 = (ushort *)sVar6;
        if (2 < (int)sVar6) {
          sVar16 = 0x20;
          local_84 = (ushort *)sVar14;
        }
        if (2 < (int)sVar6) {
          abStack_30[3] = (byte)sVar16;
        }
        abStack_30[(int)local_84 + 1] =
             (byte)((uint)((local_48.tv_sec * 1000 + local_48.tv_usec / 1000) * 0x2000) >> 0x1d) +
             0x31;
        abStack_30[(int)local_84] = 0x7e;
        do {
          snprintf((char *)&local_48,5,pcVar33,uVar8 & 0xffff);
          iVar18 = *(int *)(param_2 + 0xa8);
          *(__time_t *)((int)&local_34 + sVar35) = local_48.tv_sec;
          while( true ) {
            if (iVar18 == 0) goto LAB_0001c4f0;
            iVar34 = memcmp((void *)(iVar18 + 0x80),&local_34,0xb);
            if (iVar34 == 0) break;
            iVar18 = *(int *)(iVar18 + 0xac);
          }
          uVar8 = uVar8 - 0xb;
        } while( true );
      }
      if ((bVar4) && (bVar30)) {
        *(uint *)(param_3 + 0x80) =
             CONCAT13(local_34._3_1_,
                      CONCAT12(local_34._2_1_,CONCAT11(local_34._1_1_,(byte)local_34)));
        *(uint *)(param_3 + 0x84) =
             CONCAT13(abStack_30[3],CONCAT12(abStack_30[2],CONCAT11(abStack_30[1],abStack_30[0])));
        *(ushort *)(param_3 + 0x88) = CONCAT11(abStack_30[5],abStack_30[4]);
        param_3[0x8a] = abStack_30[6];
        pbVar23 = __s;
      }
      else {
LAB_0001c4f0:
        uVar8 = (uint)local_34._1_1_ + (((byte)local_34 & 1) << 7 | (uint)((byte)local_34 >> 1));
        uVar8 = (uint)local_34._2_1_ + ((uVar8 & 0xff) >> 1 | uVar8 * 0x80 & 0xff);
        uVar8 = (uint)local_34._3_1_ + ((uVar8 & 0xff) >> 1 | uVar8 * 0x80 & 0xff);
        local_98 = local_98 / 0xd;
        uVar8 = (uint)abStack_30[0] + ((uVar8 & 0xff) >> 1 | uVar8 * 0x80 & 0xff);
        uVar8 = (uint)abStack_30[1] + ((uVar8 & 0xff) >> 1 | uVar8 * 0x80 & 0xff);
        uVar8 = (uint)abStack_30[2] + ((uVar8 & 0xff) >> 1 | uVar8 * 0x80 & 0xff);
        uVar8 = (uint)abStack_30[3] + ((uVar8 & 0xff) >> 1 | uVar8 * 0x80 & 0xff);
        uVar8 = (uint)abStack_30[4] + ((uVar8 & 0xff) >> 1 | uVar8 * 0x80 & 0xff);
        uVar8 = (uint)abStack_30[5] + ((uVar8 & 0xff) >> 1 | uVar8 * 0x80 & 0xff);
        pbVar22 = (byte *)((uVar8 & 0xff) >> 1);
        *(uint *)(param_3 + 0x80) =
             CONCAT13(local_34._3_1_,
                      CONCAT12(local_34._2_1_,CONCAT11(local_34._1_1_,(byte)local_34)));
        pbVar29 = pbVar22;
        if (local_98 == 0) {
          pbVar29 = __s;
        }
        *(uint *)(param_3 + 0x84) =
             CONCAT13(abStack_30[3],CONCAT12(abStack_30[2],CONCAT11(abStack_30[1],abStack_30[0])));
        *(ushort *)(param_3 + 0x88) = CONCAT11(abStack_30[5],abStack_30[4]);
        param_3[0x8a] = abStack_30[6];
        pbVar23 = pbVar29;
        if (local_98 != 0) {
          puVar27 = __ptr + (local_98 - 1) * 0xd;
          pbVar29 = __s + 1;
          uVar31 = local_98;
          do {
            pbVar29[-1] = (byte)uVar31;
            pbVar29[10] = 0xf;
            uVar31 = uVar31 - 1;
            pbVar29[0xb] = 0;
            pbVar29[0xc] = abStack_30[6] + ((byte)pbVar22 | (char)uVar8 * -0x80);
            pbVar29[0x19] = 0;
            pbVar29[0x1a] = 0;
            uVar21 = *(undefined4 *)(puVar27 + 2);
            *(undefined4 *)pbVar29 = *(undefined4 *)puVar27;
            *(undefined4 *)(pbVar29 + 4) = uVar21;
            *(ushort *)(pbVar29 + 8) = puVar27[4];
            uVar32 = *(undefined4 *)(puVar27 + 7);
            uVar21 = *(undefined4 *)(puVar27 + 9);
            *(undefined4 *)(pbVar29 + 0xd) = *(undefined4 *)(puVar27 + 5);
            *(undefined4 *)(pbVar29 + 0x11) = uVar32;
            *(undefined4 *)(pbVar29 + 0x15) = uVar21;
            *(undefined4 *)(pbVar29 + 0x1b) = *(undefined4 *)(puVar27 + 0xb);
            puVar27 = puVar27 + -0xd;
            pbVar29 = pbVar29 + 0x20;
          } while (uVar31 != 0);
          pbVar29 = __s;
          pbVar23 = __s + local_98 * 0x20;
        }
        local_88 = local_98 + 1;
        *pbVar29 = *pbVar29 | 0x40;
      }
      *(uint *)pbVar23 =
           CONCAT13(local_34._3_1_,CONCAT12(local_34._2_1_,CONCAT11(local_34._1_1_,(byte)local_34)))
      ;
      *(uint *)(pbVar23 + 4) =
           CONCAT13(abStack_30[3],CONCAT12(abStack_30[2],CONCAT11(abStack_30[1],abStack_30[0])));
      *(ushort *)(pbVar23 + 8) = CONCAT11(abStack_30[5],abStack_30[4]);
      pbVar23[10] = abStack_30[6];
      iVar34 = *(int *)(param_3 + 0x8c);
      iVar18 = *(int *)(param_3 + 0x9c);
      pbVar23[0xc] = 0;
      if (iVar34 == 0) {
        bVar17 = 0x20;
        bVar15 = 0x22;
      }
      else {
        bVar17 = 0x10;
        bVar15 = 0x12;
      }
      if (iVar18 != 0) {
        bVar17 = bVar15;
      }
      pbVar23[0xb] = bVar17;
      if (*(int *)(param_1 + 0x358) == 0) {
        ptVar10 = localtime((time_t *)(param_1 + 0x2f0));
      }
      else {
        ptVar10 = gmtime((time_t *)(param_1 + 0x2f0));
      }
      iVar7 = ptVar10->tm_year;
      iVar36 = ptVar10->tm_mon;
      iVar19 = ptVar10->tm_sec;
      iVar34 = ptVar10->tm_min;
      iVar37 = ptVar10->tm_mday;
      iVar18 = ptVar10->tm_hour;
      pbVar23[0xd] = 0;
      sVar2 = ((short)iVar7 + -0x50) * 0x200 + ((short)iVar36 + 1) * 0x20 + (short)iVar37;
      sVar3 = (short)iVar34 * 0x20 + (short)(iVar19 >> 1) + (short)iVar18 * 0x800;
      iVar18 = *(int *)(param_3 + 0xa0);
      uVar32 = *(undefined4 *)(param_3 + 0x90);
      *(short *)(pbVar23 + 0x18) = sVar2;
      uVar21 = *(undefined4 *)(iVar18 + 8);
      *(short *)(pbVar23 + 0x10) = sVar2;
      *(short *)(pbVar23 + 0x12) = sVar2;
      *(short *)(pbVar23 + 0x16) = sVar3;
      *(short *)(pbVar23 + 0xe) = sVar3;
      *(short *)(pbVar23 + 0x1a) = (short)uVar21;
      *(short *)(pbVar23 + 0x14) = (short)((uint)uVar21 >> 0x10);
      *(undefined4 *)(pbVar23 + 0x1c) = uVar32;
      free(__ptr);
      piVar24 = *(int **)(param_2 + 0xa4);
      uVar8 = piVar24[1];
      pbVar29 = __s;
      do {
        uVar31 = *(uint *)(param_1 + 0xac);
        piVar11 = piVar24;
        if (uVar31 >> 5 <= uVar8) {
          iVar18 = *(int *)(param_2 + 0x8c);
          iVar34 = *(int *)(param_1 + 0xb0);
          *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + 1;
          *(int *)(param_1 + 0xb0) = iVar34 + 1;
          piVar11 = calloc(0x10,1);
          if (iVar18 == 0) {
            iVar18 = *(int *)(param_2 + 0xa0);
            piVar11[2] = iVar34;
          }
          else {
            pvVar12 = calloc(uVar31,1);
            iVar18 = *(int *)(param_2 + 0xa0);
            piVar11[2] = iVar34;
            *piVar11 = (int)pvVar12;
          }
          if (iVar18 == 0) {
            uVar8 = piVar11[1];
            *(int **)(param_2 + 0xa0) = piVar11;
            *(int **)(param_2 + 0xa4) = piVar11;
          }
          else {
            piVar24[3] = (int)piVar11;
            *(int **)(param_2 + 0xa4) = piVar11;
            uVar8 = piVar11[1];
          }
        }
        uVar21 = *(undefined4 *)(pbVar29 + 4);
        uVar32 = *(undefined4 *)(pbVar29 + 8);
        uVar20 = *(undefined4 *)(pbVar29 + 0xc);
        iVar18 = *piVar11 + uVar8 * 0x20;
        pbVar22 = pbVar29 + 0x20;
        *(undefined4 *)(*piVar11 + uVar8 * 0x20) = *(undefined4 *)pbVar29;
        *(undefined4 *)(iVar18 + 4) = uVar21;
        *(undefined4 *)(iVar18 + 8) = uVar32;
        *(undefined4 *)(iVar18 + 0xc) = uVar20;
        uVar21 = *(undefined4 *)(pbVar29 + 0x14);
        uVar32 = *(undefined4 *)(pbVar29 + 0x18);
        uVar20 = *(undefined4 *)(pbVar29 + 0x1c);
        *(undefined4 *)(iVar18 + 0x10) = *(undefined4 *)(pbVar29 + 0x10);
        *(undefined4 *)(iVar18 + 0x14) = uVar21;
        *(undefined4 *)(iVar18 + 0x18) = uVar32;
        *(undefined4 *)(iVar18 + 0x1c) = uVar20;
        piVar24 = *(int **)(param_2 + 0xa4);
        uVar8 = piVar24[1] + 1;
        piVar24[1] = uVar8;
        pbVar29 = pbVar22;
      } while (pbVar22 != __s + local_88 * 0x20);
      uVar21 = 0;
      goto LAB_0001bc34;
    }
  }
LAB_0001c4b8:
  uVar21 = 0xffffffff;
  *(uint *)(param_3 + 0x80) =
       CONCAT13(local_34._3_1_,CONCAT12(local_34._2_1_,CONCAT11(local_34._1_1_,(byte)local_34)));
  *(uint *)(param_3 + 0x84) =
       CONCAT13(abStack_30[3],CONCAT12(abStack_30[2],CONCAT11(abStack_30[1],abStack_30[0])));
  *(ushort *)(param_3 + 0x88) = CONCAT11(abStack_30[5],abStack_30[4]);
  param_3[0x8a] = abStack_30[6];
  free(__ptr);
LAB_0001bc34:
  free(__s);
  return uVar21;
}



/* ===== FUN_0001caf4 @ 0001caf4 size=1092 ===== */

undefined4 FUN_0001caf4(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  size_t sVar9;
  int iVar10;
  int iVar11;
  undefined8 *local_30;
  
  iVar7 = *(int *)(param_2 + 0xa8);
  iVar8 = *(int *)(param_2 + 0xac);
  if (iVar7 == 0) {
    if (iVar8 == 0) {
      return 0;
    }
    goto LAB_0001cc20;
  }
  sVar9 = *(size_t *)(param_1 + 0xac);
  iVar4 = *(int *)(iVar7 + 0x8c);
  iVar1 = FUN_00023d54(*(uint *)(iVar7 + 0x90) + (sVar9 - 1),
                       *(int *)(iVar7 + 0x94) + (((int)sVar9 >> 0x1f) - (uint)(sVar9 == 0)) +
                       (uint)CARRY4(*(uint *)(iVar7 + 0x90),sVar9 - 1),sVar9);
  if (iVar4 != 0) {
    iVar6 = *(int *)(param_1 + 0xbc);
    iVar5 = *(int *)(param_1 + 0xb0);
    if (iVar1 < 1) {
      iVar1 = iVar5 + 1;
    }
    else {
      iVar1 = iVar5 + iVar1;
    }
    iVar10 = iVar5;
    do {
      iVar11 = iVar10 + 1;
      *(int *)(param_1 + 0xbc) = ((iVar6 + 1) - iVar5) + iVar10;
      *(int *)(param_1 + 0xb0) = iVar11;
      puVar2 = calloc(0x10,1);
      if (iVar4 == 0) {
        iVar4 = *(int *)(iVar7 + 0xa0);
        puVar2[2] = iVar10;
        if (iVar4 == 0) goto LAB_0001cdf0;
LAB_0001cd8c:
        *(undefined4 **)(*(int *)(iVar7 + 0xa4) + 0xc) = puVar2;
        *(undefined4 **)(iVar7 + 0xa4) = puVar2;
      }
      else {
        pvVar3 = calloc(sVar9,1);
        iVar4 = *(int *)(iVar7 + 0xa0);
        puVar2[2] = iVar10;
        *puVar2 = pvVar3;
        if (iVar4 != 0) goto LAB_0001cd8c;
LAB_0001cdf0:
        *(undefined8 *)(iVar7 + 0xa0) = CONCAT44(puVar2,puVar2);
      }
      if (iVar11 == iVar1) goto LAB_0001ce08;
      iVar4 = *(int *)(iVar7 + 0x8c);
      iVar10 = iVar11;
    } while( true );
  }
  if (0 < iVar1) {
    iVar10 = *(int *)(param_1 + 0xbc);
    iVar6 = *(int *)(param_1 + 0xb4);
    iVar4 = 0;
    iVar5 = iVar6;
    do {
      iVar11 = iVar5 + 1;
      *(int *)(param_1 + 0xbc) = ((iVar10 + 1) - iVar6) + iVar5;
      *(int *)(param_1 + 0xb4) = iVar11;
      puVar2 = calloc(0x10,1);
      if (iVar4 == 0) {
        iVar4 = *(int *)(iVar7 + 0xa0);
        puVar2[2] = iVar5;
        if (iVar4 == 0) goto LAB_0001cbec;
LAB_0001cb88:
        *(undefined4 **)(*(int *)(iVar7 + 0xa4) + 0xc) = puVar2;
        *(undefined4 **)(iVar7 + 0xa4) = puVar2;
      }
      else {
        pvVar3 = calloc(sVar9,1);
        iVar4 = *(int *)(iVar7 + 0xa0);
        puVar2[2] = iVar5;
        *puVar2 = pvVar3;
        if (iVar4 != 0) goto LAB_0001cb88;
LAB_0001cbec:
        *(ulonglong *)(iVar7 + 0xa0) = CONCAT44(puVar2,puVar2);
      }
      if (iVar6 + iVar1 == iVar11) break;
      iVar4 = *(int *)(iVar7 + 0x8c);
      iVar5 = iVar11;
    } while( true );
  }
  goto LAB_0001cc0c;
LAB_0001cd28:
  FUN_0001b868(param_1,(undefined8 *)(iVar8 + 0xa0));
LAB_0001ce24:
  FUN_0001caf4(param_1,iVar8);
  if (iVar7 == 0) {
    return 0;
  }
  goto LAB_0001ce38;
LAB_0001ce08:
  FUN_0001b868(param_1,(undefined8 *)(iVar7 + 0xa0));
LAB_0001cc0c:
  FUN_0001caf4(param_1,iVar7);
  if (iVar8 != 0) {
LAB_0001cc20:
    sVar9 = *(size_t *)(param_1 + 0xac);
    iVar5 = *(int *)(iVar8 + 0x8c);
    iVar1 = FUN_00023d54(*(uint *)(iVar8 + 0x90) + (sVar9 - 1),
                         *(int *)(iVar8 + 0x94) + (((int)sVar9 >> 0x1f) - (uint)(sVar9 == 0)) +
                         (uint)CARRY4(*(uint *)(iVar8 + 0x90),sVar9 - 1),sVar9);
    iVar4 = *(int *)(param_1 + 0xbc);
    if (iVar1 < 1) {
      iVar1 = 1;
    }
    if (iVar5 == 0) {
      iVar5 = 0;
      iVar6 = 0;
      iVar10 = *(int *)(param_1 + 0xb4);
      do {
        local_30 = (undefined8 *)(iVar8 + 0xa0);
        *(int *)(param_1 + 0xbc) = iVar4 + 1 + iVar5;
        *(int *)(param_1 + 0xb4) = iVar10 + 1;
        puVar2 = calloc(0x10,1);
        if (iVar6 == 0) {
          iVar6 = *(int *)(iVar8 + 0xa0);
          puVar2[2] = iVar10;
          if (iVar6 == 0) goto LAB_0001cf1c;
LAB_0001ceb0:
          *(undefined4 **)(*(int *)(iVar8 + 0xa4) + 0xc) = puVar2;
          *(undefined4 **)(iVar8 + 0xa4) = puVar2;
        }
        else {
          pvVar3 = calloc(sVar9,1);
          iVar6 = *(int *)(iVar8 + 0xa0);
          puVar2[2] = iVar10;
          *puVar2 = pvVar3;
          if (iVar6 != 0) goto LAB_0001ceb0;
LAB_0001cf1c:
          *local_30 = CONCAT44(puVar2,puVar2);
        }
        iVar5 = iVar5 + 1;
        if (iVar1 <= iVar5) goto LAB_0001ce24;
        iVar6 = *(int *)(iVar8 + 0x8c);
        iVar10 = iVar10 + 1;
      } while( true );
    }
    iVar10 = 0;
    iVar6 = *(int *)(param_1 + 0xb0);
    do {
      *(int *)(param_1 + 0xb0) = iVar6 + 1;
      *(int *)(param_1 + 0xbc) = iVar4 + 1 + iVar10;
      puVar2 = calloc(0x10,1);
      if (iVar5 == 0) {
        iVar5 = *(int *)(iVar8 + 0xa0);
        puVar2[2] = iVar6;
        if (iVar5 == 0) goto LAB_0001cd0c;
LAB_0001cca0:
        *(undefined4 **)(*(int *)(iVar8 + 0xa4) + 0xc) = puVar2;
        *(undefined4 **)(iVar8 + 0xa4) = puVar2;
      }
      else {
        pvVar3 = calloc(sVar9,1);
        iVar5 = *(int *)(iVar8 + 0xa0);
        puVar2[2] = iVar6;
        *puVar2 = pvVar3;
        if (iVar5 != 0) goto LAB_0001cca0;
LAB_0001cd0c:
        *(undefined8 *)(iVar8 + 0xa0) = CONCAT44(puVar2,puVar2);
      }
      if (iVar1 <= iVar10 + 1) goto LAB_0001cd28;
      iVar10 = iVar10 + 1;
      iVar5 = *(int *)(iVar8 + 0x8c);
      iVar6 = iVar6 + 1;
    } while( true );
  }
LAB_0001ce38:
  iVar8 = *(int *)(*(int *)(param_2 + 0xa8) + 0xac);
  FUN_0001bb70(param_1,param_2,iVar7);
  for (; iVar8 != 0; iVar8 = *(int *)(iVar8 + 0xac)) {
    FUN_0001bb70(param_1,param_2,iVar8);
  }
  return 0;
}



/* ===== FUN_0001cf38 @ 0001cf38 size=576 ===== */

undefined4 FUN_0001cf38(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  do {
    if (param_2 == 0) {
      return 0;
    }
    while( true ) {
      for (iVar6 = *(int *)(param_2 + 0xa0); iVar6 != 0; iVar6 = *(int *)(iVar6 + 0xc)) {
        uVar7 = *(uint *)(iVar6 + 8);
        if (*(int *)(iVar6 + 0xc) == 0) {
          if ((int)uVar7 < 0) {
            return 0xffffffff;
          }
          if (*(uint *)(param_1 + 0x2fc) <= uVar7) {
            return 0xffffffff;
          }
          iVar2 = *(int *)(param_1 + 800);
          if (iVar2 == 0x10) {
            *(undefined1 *)(*(int *)(param_1 + 0x2f4) + uVar7 * 2) = 0xff;
            *(undefined1 *)(*(int *)(param_1 + 0x2f4) + uVar7 * 2 + 1) = 0xff;
          }
          else if (iVar2 == 0x20) {
            iVar2 = uVar7 * 4;
            *(undefined1 *)(*(int *)(param_1 + 0x2f4) + uVar7 * 4) = 0xff;
            *(undefined1 *)(*(int *)(param_1 + 0x2f4) + iVar2 + 1) = 0xff;
            *(undefined1 *)(*(int *)(param_1 + 0x2f4) + iVar2 + 2) = 0xff;
            *(undefined1 *)(*(int *)(param_1 + 0x2f4) + iVar2 + 3) = 0xf;
          }
          else {
            if (iVar2 != 0xc) {
              return 0xffffffff;
            }
            iVar8 = *(int *)(param_1 + 0x2f4);
            iVar2 = (int)(uVar7 * 3) >> 1;
            iVar4 = iVar2 + 1;
            if ((uVar7 * 3 & 1) == 0) {
              *(undefined1 *)(iVar8 + iVar2) = 0xff;
              *(byte *)(*(int *)(param_1 + 0x2f4) + iVar4) =
                   *(byte *)(*(int *)(param_1 + 0x2f4) + iVar4) & 0xf0 | 0xf;
            }
            else {
              *(byte *)(iVar8 + iVar2) = *(byte *)(iVar8 + iVar2) & 0xf | 0xf0;
              *(undefined1 *)(*(int *)(param_1 + 0x2f4) + iVar4) = 0xff;
            }
          }
        }
        else {
          uVar5 = *(uint *)(*(int *)(iVar6 + 0xc) + 8);
          if (((int)uVar7 < 0) || (*(uint *)(param_1 + 0x2fc) <= uVar7)) {
            return 0xffffffff;
          }
          iVar2 = *(int *)(param_1 + 800);
          if (iVar2 == 0x10) {
            *(char *)(*(int *)(param_1 + 0x2f4) + uVar7 * 2) = (char)(uVar5 & 0xffff);
            *(char *)(*(int *)(param_1 + 0x2f4) + uVar7 * 2 + 1) = (char)((uVar5 & 0xffff) >> 8);
          }
          else if (iVar2 == 0x20) {
            uVar5 = uVar5 & 0xfffffff;
            iVar2 = uVar7 * 4;
            *(char *)(*(int *)(param_1 + 0x2f4) + uVar7 * 4) = (char)uVar5;
            *(char *)(*(int *)(param_1 + 0x2f4) + iVar2 + 1) = (char)(uVar5 >> 8);
            *(char *)(*(int *)(param_1 + 0x2f4) + iVar2 + 2) = (char)(uVar5 >> 0x10);
            *(char *)(*(int *)(param_1 + 0x2f4) + iVar2 + 3) = (char)(uVar5 >> 0x18);
          }
          else {
            if (iVar2 != 0xc) {
              return 0xffffffff;
            }
            iVar8 = *(int *)(param_1 + 0x2f4);
            iVar2 = (int)(uVar7 * 3) >> 1;
            iVar4 = iVar2 + 1;
            bVar1 = (byte)((uVar5 << 0x14) >> 0x18);
            if ((uVar7 * 3 & 1) == 0) {
              *(char *)(iVar8 + iVar2) = (char)uVar5;
              *(byte *)(*(int *)(param_1 + 0x2f4) + iVar4) =
                   *(byte *)(*(int *)(param_1 + 0x2f4) + iVar4) & 0xf0 | bVar1 >> 4;
            }
            else {
              *(byte *)(iVar8 + iVar2) =
                   *(byte *)(iVar8 + iVar2) & 0xf | (byte)((uVar5 & 0xff) << 4);
              *(byte *)(*(int *)(param_1 + 0x2f4) + iVar4) = bVar1;
            }
          }
        }
      }
      if (*(int *)(param_2 + 0xa8) == 0) break;
      uVar3 = FUN_0001cf38(param_1);
      param_2 = *(int *)(param_2 + 0xac);
      if (param_2 == 0) {
        return uVar3;
      }
    }
    param_2 = *(int *)(param_2 + 0xac);
  } while( true );
}



/* ===== rkfsmk_add_dir @ 0001d178 size=4 ===== */

char * rkfsmk_add_dir(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  size_t sVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  char acStack_a8 [128];
  
  pcVar5 = *(char **)(param_1 + 0x360);
  iVar8 = 1;
  uVar10 = VectorShiftRight(CONCAT44(param_4,param_4),0x20);
  memset(acStack_a8,0,0x80);
  sVar1 = strlen(param_2);
  do {
    if (sVar1 == 0) {
      return pcVar5;
    }
    pcVar4 = param_2 + -1;
    pcVar2 = pcVar4 + sVar1;
    iVar3 = 0;
    iVar9 = -1;
    iVar6 = 0;
    do {
      pcVar4 = pcVar4 + 1;
      iVar7 = iVar6;
      if (*pcVar4 == '/') {
        iVar3 = iVar3 + 1;
      }
      else if (iVar8 == iVar3) {
        iVar7 = iVar6 + 1;
        iVar9 = 0;
        acStack_a8[iVar6] = *pcVar4;
      }
      iVar6 = iVar7;
    } while (pcVar2 != pcVar4);
    if (iVar9 != 0) {
      return pcVar5;
    }
    pcVar2 = *(char **)(pcVar5 + 0xa8);
    if (pcVar2 == (char *)0x0) {
      pcVar2 = calloc(0xb0,1);
      *(undefined4 *)(pcVar2 + 0x9c) = param_3;
      pcVar2[0x8c] = '\x01';
      pcVar2[0x8d] = '\0';
      pcVar2[0x8e] = '\0';
      pcVar2[0x8f] = '\0';
      pcVar2 = strcpy(pcVar2,acStack_a8);
      *(char **)(pcVar5 + 0xa8) = pcVar2;
      *(undefined8 *)(pcVar2 + 0x90) = uVar10;
    }
    else {
      iVar3 = strcmp(pcVar2,acStack_a8);
      while (iVar3 != 0) {
        pcVar5 = *(char **)(pcVar2 + 0xac);
        if (pcVar5 == (char *)0x0) {
          pcVar5 = calloc(0xb0,1);
          *(undefined4 *)(pcVar5 + 0x9c) = param_3;
          pcVar5[0x8c] = '\x01';
          pcVar5[0x8d] = '\0';
          pcVar5[0x8e] = '\0';
          pcVar5[0x8f] = '\0';
          strcpy(pcVar5,acStack_a8);
          *(char **)(pcVar2 + 0xac) = pcVar5;
          *(undefined8 *)(pcVar5 + 0x90) = uVar10;
          pcVar2 = pcVar5;
          break;
        }
        iVar3 = strcmp(pcVar5,acStack_a8);
        pcVar2 = pcVar5;
      }
    }
    iVar8 = iVar8 + 1;
    memset(acStack_a8,0,0x80);
    sVar1 = strlen(param_2);
    pcVar5 = pcVar2;
  } while( true );
}



/* ===== rkfsmk_add_file @ 0001d17c size=240 ===== */

undefined4
rkfsmk_add_file(int param_1,undefined4 param_2,char *param_3,undefined4 param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  iVar2 = FUN_0001b9fc(param_1,param_2,param_4,0,param_4);
  iVar3 = *(int *)(param_1 + 0x360);
  iVar1 = (int)param_5 >> 0x1f;
  pcVar5 = *(char **)(iVar2 + 0xa8);
  *(ulonglong *)(iVar3 + 0x90) =
       CONCAT44(*(int *)(iVar3 + 0x94) + iVar1 + (uint)CARRY4(*(uint *)(iVar3 + 0x90),param_5),
                *(uint *)(iVar3 + 0x90) + param_5);
  if (pcVar5 == (char *)0x0) {
    pcVar5 = calloc(0xb0,1);
    pcVar5[0x8c] = '\0';
    pcVar5[0x8d] = '\0';
    pcVar5[0x8e] = '\0';
    pcVar5[0x8f] = '\0';
    *(undefined4 *)(pcVar5 + 0x9c) = param_4;
    pcVar5 = strcpy(pcVar5,param_3);
    *(char **)(iVar2 + 0xa8) = pcVar5;
    *(uint *)(pcVar5 + 0x90) = param_5;
    *(int *)(pcVar5 + 0x94) = iVar1;
    return 0;
  }
  iVar2 = strcmp(pcVar5,param_3);
  while( true ) {
    if (iVar2 == 0) {
      return 0xffffffff;
    }
    pcVar4 = *(char **)(pcVar5 + 0xac);
    if (pcVar4 == (char *)0x0) break;
    iVar2 = strcmp(pcVar4,param_3);
    pcVar5 = pcVar4;
  }
  pcVar4 = calloc(0xb0,1);
  pcVar4[0x8c] = '\0';
  pcVar4[0x8d] = '\0';
  pcVar4[0x8e] = '\0';
  pcVar4[0x8f] = '\0';
  *(undefined4 *)(pcVar4 + 0x9c) = param_4;
  pcVar4 = strcpy(pcVar4,param_3);
  *(char **)(pcVar5 + 0xac) = pcVar4;
  *(uint *)(pcVar4 + 0x90) = param_5;
  *(int *)(pcVar4 + 0x94) = iVar1;
  return 0;
}



/* ===== rkfsmk_create @ 0001d26c size=1568 ===== */

undefined4 rkfsmk_create(undefined4 *param_1,char *param_2,char *param_3,undefined4 param_4)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  char *__dest;
  int iVar4;
  void *pvVar5;
  undefined4 uVar6;
  size_t __n;
  int iVar7;
  undefined2 uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined2 uVar12;
  undefined4 *puVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  char cVar18;
  timeval local_30;
  
  puts((char *)(DAT_0001d728 + 0x1d28c));
  printf((char *)(DAT_0001d72c + 0x1d2a4),param_2,param_3);
  *param_1 = 0;
  iVar3 = IsDevMounted(param_2);
  if (iVar3 != 0) {
    printf((char *)(DAT_0001d748 + 0x1d8a4),0xfffffffc);
    return 0xfffffffc;
  }
  iVar3 = open64(param_2,0x80002);
  if (iVar3 < 0) {
    printf((char *)(DAT_0001d73c + 0x1d66c),0xfffffffe);
    return 0xfffffffe;
  }
  __dest = calloc(0x370,1);
  iVar4 = GetDevInfo(iVar3,__dest + 0x80);
  if ((iVar4 < 0) || (*(int *)(__dest + 0xa4) < (int)(uint)(*(int *)(__dest + 0xa0) == 0))) {
LAB_0001d608:
    printf((char *)(DAT_0001d738 + 0x1d618),0xfffffffd);
    if (iVar3 != 0) {
      close(iVar3);
    }
    if (*(void **)(__dest + 0x360) != (void *)0x0) {
      free(*(void **)(__dest + 0x360));
    }
    free(__dest);
    *param_1 = 0;
    return 0xfffffffd;
  }
  strcpy(__dest,param_2);
  pvVar5 = calloc(0xb0,1);
  uVar1 = DAT_0001d720;
  *(undefined4 *)(__dest + 0xa8) = param_4;
  __dest[0x334] = '\0';
  __dest[0x335] = '\x02';
  __dest[0x336] = '\0';
  __dest[0x337] = '\0';
  *(void **)(__dest + 0x360) = pvVar5;
  *(undefined4 *)((int)pvVar5 + 0x8c) = 1;
  __dest[0x34c] = '\x01';
  __dest[0x34d] = '\0';
  __dest[0x34e] = '\0';
  __dest[0x34f] = '\0';
  __dest[0x350] = '\x01';
  __dest[0x351] = '\0';
  __dest[0x352] = '\0';
  __dest[0x353] = '\0';
  __dest[0x318] = '\x01';
  __dest[0x319] = '\0';
  __dest[0x31a] = '\0';
  __dest[0x31b] = '\0';
  *(int *)(__dest + 0xd8) = iVar3;
  *(undefined8 *)(__dest + 0xbc) = uVar1;
  __dest[0x330] = '\x01';
  __dest[0x331] = '\0';
  __dest[0x332] = '\0';
  __dest[0x333] = '\0';
  __dest[0x33c] = '\x01';
  __dest[0x33d] = '\0';
  __dest[0x33e] = '\0';
  __dest[0x33f] = '\0';
  gettimeofday(&local_30,(__timezone_ptr_t)0x0);
  uVar9 = *(uint *)(__dest + 0x98);
  puVar13 = (undefined4 *)(DAT_0001d730 + 0x1d384);
  uVar10 = uVar9;
  if ((int)uVar9 < 1) {
    uVar10 = *(uint *)(__dest + 0x334);
  }
  *(__time_t *)(__dest + 0x2f0) = local_30.tv_sec;
  *(__suseconds_t *)(__dest + 200) = local_30.tv_usec | local_30.tv_sec << 0x14;
  *puVar13 = 0;
  __dest[0x304] = -0x80;
  __dest[0x305] = '\0';
  __dest[0x306] = '\0';
  __dest[0x307] = '\0';
  uVar14 = uVar10;
  if (0 < (int)uVar9) {
    if (*(int *)(__dest + 0x338) == 0) {
      *(uint *)(__dest + 0x334) = uVar10;
      __dest[0x338] = '\x01';
      __dest[0x339] = '\0';
      __dest[0x33a] = '\0';
      __dest[0x33b] = '\0';
    }
    else {
      uVar14 = *(uint *)(__dest + 0x334);
      if (uVar14 < uVar10) {
        *(uint *)(__dest + 0x334) = uVar10;
        uVar14 = uVar10;
      }
    }
  }
  uVar9 = *(uint *)(__dest + 0xa0);
  iVar7 = *(int *)(__dest + 0xa4);
  uVar10 = iVar7 >> 0x1f;
  iVar4 = iVar7 + (uint)CARRY4(uVar10 & 0x3ff,uVar9);
  uVar16 = uVar10 ^ (uVar9 ^ uVar10) - uVar10 & 0x3ff;
  uVar17 = (uVar10 & 0x3ff) + uVar9 >> 10 | iVar4 * 0x400000;
  iVar4 = iVar4 >> 10;
  uVar6 = FUN_00023c80(uVar16 - uVar10,-(uint)(uVar16 < uVar10),uVar14,0);
  iVar15 = *(int *)(__dest + 0x80);
  *(uint *)(__dest + 0x328) = uVar17;
  *(int *)(__dest + 0x32c) = iVar4;
  *(undefined4 *)(__dest + 0x354) = uVar6;
  if ((*(int *)(__dest + 0x33c) == 0) &&
     (((iVar15 == 5 && (*(int *)(__dest + 0x84) == 0)) || (0 < *(int *)(__dest + 0x88)))))
  goto LAB_0001d608;
  if (iVar7 < (int)(uint)(uVar9 < 0x20000000)) {
    if (iVar15 != 5) {
      if (iVar4 == 0 && uVar17 == 0x4b0) goto LAB_0001d82c;
      if ((int)-(iVar4 + (uint)(0x4b0 < uVar17)) < 0 ==
          (SBORROW4(0,iVar4) != SBORROW4(-iVar4,(uint)(0x4b0 < uVar17)))) {
        if (iVar4 == 0 && uVar17 == 0x168) {
          cVar2 = '\x02';
          uVar12 = 2;
          uVar8 = 9;
          cVar18 = -3;
          uVar6 = 0x70;
          goto LAB_0001d540;
        }
        if (iVar4 == 0 && uVar17 == 0x2d0) goto LAB_0001d690;
      }
      else {
        if (iVar4 == 0 && uVar17 == 0x5a0) goto LAB_0001d7fc;
        if (iVar4 == 0 && uVar17 == 0xb40) goto LAB_0001d500;
      }
      uVar8 = 0x20;
      uVar12 = 0x40;
      goto LAB_0001d6f4;
    }
    uVar12 = 0x40;
    uVar8 = 0x20;
    cVar2 = '\x04';
    cVar18 = -8;
    uVar6 = 0x200;
LAB_0001d540:
    if (*(int *)(__dest + 800) == 0x20) goto LAB_0001d76c;
  }
  else {
    if (iVar15 == 5) {
      uVar12 = 0xff;
      uVar8 = 0x3f;
LAB_0001d6f4:
      cVar2 = '\x04';
      cVar18 = -8;
      uVar6 = 0x200;
    }
    else if (iVar4 == 0 && uVar17 == 0x4b0) {
LAB_0001d82c:
      uVar8 = 0xf;
      uVar12 = 2;
      if (*(int *)(__dest + 0xc4) == 0) {
        cVar2 = '\x01';
        cVar18 = -7;
        uVar6 = 0xe0;
      }
      else {
        cVar2 = '\x02';
        cVar18 = -7;
        uVar6 = 0xe0;
      }
    }
    else if ((int)-(iVar4 + (uint)(0x4b0 < uVar17)) < 0 ==
             (SBORROW4(0,iVar4) != SBORROW4(-iVar4,(uint)(0x4b0 < uVar17)))) {
      if (iVar4 == 0 && uVar17 == 0x168) {
        uVar12 = 2;
        uVar8 = 9;
        cVar2 = '\x02';
        cVar18 = -3;
        uVar6 = 0x70;
      }
      else {
        if (iVar4 != 0 || uVar17 != 0x2d0) goto LAB_0001d820;
LAB_0001d690:
        uVar12 = 2;
        uVar8 = 9;
        cVar2 = '\x02';
        cVar18 = -7;
        uVar6 = 0x70;
      }
    }
    else {
      if (iVar4 == 0 && uVar17 == 0x5a0) {
LAB_0001d7fc:
        uVar8 = 0x12;
        uVar12 = 2;
        if (*(int *)(__dest + 0xc4) == 0) {
          cVar2 = '\x01';
          cVar18 = -0x10;
          uVar6 = 0xe0;
          goto LAB_0001d514;
        }
      }
      else {
        if (iVar4 != 0 || uVar17 != 0xb40) {
LAB_0001d820:
          uVar8 = 0x3f;
          uVar12 = 0xff;
          goto LAB_0001d6f4;
        }
LAB_0001d500:
        uVar8 = 0x24;
      }
      cVar2 = '\x02';
      uVar12 = 2;
      cVar18 = -0x10;
      uVar6 = 0xe0;
    }
LAB_0001d514:
    if (*(int *)(__dest + 800) != 0 || iVar7 < (int)(uint)(uVar9 < 0x20000000)) goto LAB_0001d540;
    __dest[800] = ' ';
    __dest[0x321] = '\0';
    __dest[0x322] = '\0';
    __dest[0x323] = '\0';
LAB_0001d76c:
    uVar10 = uVar9 + (uVar10 & 0xfffff) >> 0x14 |
             (iVar7 + (uint)CARRY4(uVar9,uVar10 & 0xfffff)) * 0x1000;
    if (uVar10 < 0x8001) {
      if (uVar10 < 0x4001) {
        if (uVar10 < 0x2001) {
          if (uVar10 < 0x105) {
            cVar2 = '\x01';
          }
          else {
            cVar2 = '\b';
          }
        }
        else {
          cVar2 = '\x10';
        }
      }
      else {
        cVar2 = ' ';
      }
    }
    else {
      cVar2 = '@';
    }
  }
  iVar3 = *(int *)(__dest + 0x8c);
  if (0 < iVar3) {
    uVar12 = (undefined2)iVar3;
  }
  if (0 < iVar3) {
    uVar8 = *(undefined2 *)(__dest + 0x90);
  }
  if ((*(int *)(__dest + 0x314) == 0) && (-1 < *(int *)(__dest + 0x94))) {
    *(int *)(__dest + 0x310) = *(int *)(__dest + 0x94);
  }
  if (*(int *)(__dest + 0x308) == 0) {
    *(undefined4 *)(__dest + 0x308) = uVar6;
  }
  *(undefined2 *)(__dest + 0x100) = uVar8;
  __dest[0xfd] = cVar18;
  __dest[0xf5] = cVar2;
  __dest[0xcc] = '\0';
  __dest[0xcd] = '\0';
  __dest[0xce] = '\0';
  __dest[0xcf] = '\0';
  __dest[0xd0] = '\0';
  __dest[0xd1] = '\0';
  __dest[0xd2] = '\0';
  __dest[0xd3] = '\0';
  *(undefined2 *)(__dest + 0x102) = uVar12;
  __dest[0xcf] = '\0';
  __dest[0xd0] = '\0';
  __dest[0xd1] = '\0';
  __dest[0xd2] = '\0';
  __dest[0xd3] = '\0';
  __dest[0xd4] = '\0';
  __dest[0xd5] = '\0';
  __dest[0xd6] = '\0';
  if (param_3 == (char *)0x0) {
    puVar13 = (undefined4 *)(DAT_0001d744 + 0x1d86c);
  }
  else {
    __n = strlen(param_3);
    if (__n != 0) {
      if (10 < (int)__n) {
        __n = 0xb;
      }
      memcpy(__dest + 0xcc,param_3,__n);
      goto LAB_0001d5d8;
    }
    puVar13 = (undefined4 *)(DAT_0001d740 + 0x1d758);
  }
  uVar6 = puVar13[1];
  uVar11 = puVar13[2];
  *(undefined4 *)(__dest + 0xcc) = *puVar13;
  *(undefined4 *)(__dest + 0xd0) = uVar6;
  *(short *)(__dest + 0xd4) = (short)uVar11;
  __dest[0xd6] = (char)((uint)uVar11 >> 0x10);
LAB_0001d5d8:
  iVar3 = DAT_0001d734;
  *param_1 = __dest;
  puts((char *)(iVar3 + 0x1d5e8));
  return 0;
}



/* ===== rkfsmk_destroy @ 0001d8b8 size=15292 ===== */

void rkfsmk_destroy(void *param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  void *pvVar9;
  
  if (param_1 == (void *)0x0) {
    return;
  }
  pvVar5 = *(void **)((int)param_1 + 0x360);
  if (pvVar5 != (void *)0x0) {
    puVar2 = *(undefined4 **)((int)pvVar5 + 0xa0);
    while (puVar2 != (undefined4 *)0x0) {
      if ((void *)*puVar2 == (void *)0x0) {
        puVar3 = (undefined4 *)puVar2[3];
        free(puVar2);
        puVar2 = puVar3;
      }
      else {
        free((void *)*puVar2);
        puVar3 = (undefined4 *)puVar2[3];
        free(puVar2);
        puVar2 = puVar3;
      }
    }
    pvVar6 = *(void **)((int)pvVar5 + 0xa8);
    if (pvVar6 != (void *)0x0) {
      puVar2 = *(undefined4 **)((int)pvVar6 + 0xa0);
      while (puVar2 != (undefined4 *)0x0) {
        if ((void *)*puVar2 == (void *)0x0) {
          puVar3 = (undefined4 *)puVar2[3];
          free(puVar2);
          puVar2 = puVar3;
        }
        else {
          free((void *)*puVar2);
          puVar3 = (undefined4 *)puVar2[3];
          free(puVar2);
          puVar2 = puVar3;
        }
      }
      pvVar7 = *(void **)((int)pvVar6 + 0xa8);
      if (pvVar7 != (void *)0x0) {
        puVar2 = *(undefined4 **)((int)pvVar7 + 0xa0);
        while (puVar3 = puVar2, puVar2 != (undefined4 *)0x0) {
          while ((void *)*puVar3 == (void *)0x0) {
            puVar2 = (undefined4 *)puVar3[3];
            free(puVar3);
            puVar3 = puVar2;
            if (puVar2 == (undefined4 *)0x0) goto LAB_0001d998;
          }
          free((void *)*puVar3);
          puVar2 = (undefined4 *)puVar3[3];
          free(puVar3);
        }
LAB_0001d998:
        pvVar8 = *(void **)((int)pvVar7 + 0xa8);
        if (pvVar8 != (void *)0x0) {
          puVar2 = *(undefined4 **)((int)pvVar8 + 0xa0);
          while (puVar2 != (undefined4 *)0x0) {
            if ((void *)*puVar2 == (void *)0x0) {
              puVar3 = (undefined4 *)puVar2[3];
              free(puVar2);
              puVar2 = puVar3;
            }
            else {
              free((void *)*puVar2);
              puVar3 = (undefined4 *)puVar2[3];
              free(puVar2);
              puVar2 = puVar3;
            }
          }
          pvVar9 = *(void **)((int)pvVar8 + 0xa8);
          if (pvVar9 != (void *)0x0) {
            puVar2 = *(undefined4 **)((int)pvVar9 + 0xa0);
            while (puVar2 != (undefined4 *)0x0) {
              if ((void *)*puVar2 == (void *)0x0) {
                puVar3 = (undefined4 *)puVar2[3];
                free(puVar2);
                puVar2 = puVar3;
              }
              else {
                free((void *)*puVar2);
                puVar3 = (undefined4 *)puVar2[3];
                free(puVar2);
                puVar2 = puVar3;
              }
            }
            pvVar1 = *(void **)((int)pvVar9 + 0xa8);
            if (pvVar1 != (void *)0x0) {
              puVar2 = *(undefined4 **)((int)pvVar1 + 0xa0);
              while (puVar2 != (undefined4 *)0x0) {
                if ((void *)*puVar2 == (void *)0x0) {
                  puVar3 = (undefined4 *)puVar2[3];
                  free(puVar2);
                  puVar2 = puVar3;
                }
                else {
                  free((void *)*puVar2);
                  puVar3 = (undefined4 *)puVar2[3];
                  free(puVar2);
                  puVar2 = puVar3;
                }
              }
              pvVar4 = *(void **)((int)pvVar1 + 0xa8);
              if (pvVar4 != (void *)0x0) {
                puVar2 = *(undefined4 **)((int)pvVar4 + 0xa0);
                while (puVar2 != (undefined4 *)0x0) {
                  if ((void *)*puVar2 == (void *)0x0) {
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                  else {
                    free((void *)*puVar2);
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                }
                if (*(int *)((int)pvVar4 + 0xa8) != 0) {
                  FUN_0001b7e0();
                }
                if (*(int *)((int)pvVar4 + 0xac) != 0) {
                  FUN_0001b7e0();
                }
                free(pvVar4);
              }
              pvVar4 = *(void **)((int)pvVar1 + 0xac);
              if (pvVar4 != (void *)0x0) {
                puVar2 = *(undefined4 **)((int)pvVar4 + 0xa0);
                while (puVar2 != (undefined4 *)0x0) {
                  if ((void *)*puVar2 == (void *)0x0) {
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                  else {
                    free((void *)*puVar2);
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                }
                if (*(int *)((int)pvVar4 + 0xa8) != 0) {
                  FUN_0001b7e0();
                }
                if (*(int *)((int)pvVar4 + 0xac) != 0) {
                  FUN_0001b7e0();
                }
                free(pvVar4);
              }
              free(pvVar1);
            }
            pvVar1 = *(void **)((int)pvVar9 + 0xac);
            if (pvVar1 != (void *)0x0) {
              puVar2 = *(undefined4 **)((int)pvVar1 + 0xa0);
              while (puVar2 != (undefined4 *)0x0) {
                if ((void *)*puVar2 == (void *)0x0) {
                  puVar3 = (undefined4 *)puVar2[3];
                  free(puVar2);
                  puVar2 = puVar3;
                }
                else {
                  free((void *)*puVar2);
                  puVar3 = (undefined4 *)puVar2[3];
                  free(puVar2);
                  puVar2 = puVar3;
                }
              }
              pvVar4 = *(void **)((int)pvVar1 + 0xa8);
              if (pvVar4 != (void *)0x0) {
                puVar2 = *(undefined4 **)((int)pvVar4 + 0xa0);
                while (puVar2 != (undefined4 *)0x0) {
                  if ((void *)*puVar2 == (void *)0x0) {
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                  else {
                    free((void *)*puVar2);
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                }
                if (*(int *)((int)pvVar4 + 0xa8) != 0) {
                  FUN_0001b7e0();
                }
                if (*(int *)((int)pvVar4 + 0xac) != 0) {
                  FUN_0001b7e0();
                }
                free(pvVar4);
              }
              pvVar4 = *(void **)((int)pvVar1 + 0xac);
              if (pvVar4 != (void *)0x0) {
                puVar2 = *(undefined4 **)((int)pvVar4 + 0xa0);
                while (puVar2 != (undefined4 *)0x0) {
                  if ((void *)*puVar2 == (void *)0x0) {
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                  else {
                    free((void *)*puVar2);
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                }
                if (*(int *)((int)pvVar4 + 0xa8) != 0) {
                  FUN_0001b7e0();
                }
                if (*(int *)((int)pvVar4 + 0xac) != 0) {
                  FUN_0001b7e0();
                }
                free(pvVar4);
              }
              free(pvVar1);
            }
            free(pvVar9);
          }
          pvVar9 = *(void **)((int)pvVar8 + 0xac);
          if (pvVar9 != (void *)0x0) {
            puVar2 = *(undefined4 **)((int)pvVar9 + 0xa0);
            while (puVar2 != (undefined4 *)0x0) {
              if ((void *)*puVar2 == (void *)0x0) {
                puVar3 = (undefined4 *)puVar2[3];
                free(puVar2);
                puVar2 = puVar3;
              }
              else {
                free((void *)*puVar2);
                puVar3 = (undefined4 *)puVar2[3];
                free(puVar2);
                puVar2 = puVar3;
              }
            }
            pvVar1 = *(void **)((int)pvVar9 + 0xa8);
            if (pvVar1 != (void *)0x0) {
              puVar2 = *(undefined4 **)((int)pvVar1 + 0xa0);
              while (puVar2 != (undefined4 *)0x0) {
                if ((void *)*puVar2 == (void *)0x0) {
                  puVar3 = (undefined4 *)puVar2[3];
                  free(puVar2);
                  puVar2 = puVar3;
                }
                else {
                  free((void *)*puVar2);
                  puVar3 = (undefined4 *)puVar2[3];
                  free(puVar2);
                  puVar2 = puVar3;
                }
              }
              pvVar4 = *(void **)((int)pvVar1 + 0xa8);
              if (pvVar4 != (void *)0x0) {
                puVar2 = *(undefined4 **)((int)pvVar4 + 0xa0);
                while (puVar2 != (undefined4 *)0x0) {
                  if ((void *)*puVar2 == (void *)0x0) {
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                  else {
                    free((void *)*puVar2);
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                }
                if (*(int *)((int)pvVar4 + 0xa8) != 0) {
                  FUN_0001b7e0();
                }
                if (*(int *)((int)pvVar4 + 0xac) != 0) {
                  FUN_0001b7e0();
                }
                free(pvVar4);
              }
              pvVar4 = *(void **)((int)pvVar1 + 0xac);
              if (pvVar4 != (void *)0x0) {
                puVar2 = *(undefined4 **)((int)pvVar4 + 0xa0);
                while (puVar2 != (undefined4 *)0x0) {
                  if ((void *)*puVar2 == (void *)0x0) {
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                  else {
                    free((void *)*puVar2);
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                }
                if (*(int *)((int)pvVar4 + 0xa8) != 0) {
                  FUN_0001b7e0();
                }
                if (*(int *)((int)pvVar4 + 0xac) != 0) {
                  FUN_0001b7e0();
                }
                free(pvVar4);
              }
              free(pvVar1);
            }
            pvVar1 = *(void **)((int)pvVar9 + 0xac);
            if (pvVar1 != (void *)0x0) {
              puVar2 = *(undefined4 **)((int)pvVar1 + 0xa0);
              while (puVar2 != (undefined4 *)0x0) {
                if ((void *)*puVar2 == (void *)0x0) {
                  puVar3 = (undefined4 *)puVar2[3];
                  free(puVar2);
                  puVar2 = puVar3;
                }
                else {
                  free((void *)*puVar2);
                  puVar3 = (undefined4 *)puVar2[3];
                  free(puVar2);
                  puVar2 = puVar3;
                }
              }
              pvVar4 = *(void **)((int)pvVar1 + 0xa8);
              if (pvVar4 != (void *)0x0) {
                puVar2 = *(undefined4 **)((int)pvVar4 + 0xa0);
                while (puVar2 != (undefined4 *)0x0) {
                  if ((void *)*puVar2 == (void *)0x0) {
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                  else {
                    free((void *)*puVar2);
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                }
                if (*(int *)((int)pvVar4 + 0xa8) != 0) {
                  FUN_0001b7e0();
                }
                if (*(int *)((int)pvVar4 + 0xac) != 0) {
                  FUN_0001b7e0();
                }
                free(pvVar4);
              }
              pvVar4 = *(void **)((int)pvVar1 + 0xac);
              if (pvVar4 != (void *)0x0) {
                puVar2 = *(undefined4 **)((int)pvVar4 + 0xa0);
                while (puVar2 != (undefined4 *)0x0) {
                  if ((void *)*puVar2 == (void *)0x0) {
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                  else {
                    free((void *)*puVar2);
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                }
                if (*(int *)((int)pvVar4 + 0xa8) != 0) {
                  FUN_0001b7e0();
                }
                if (*(int *)((int)pvVar4 + 0xac) != 0) {
                  FUN_0001b7e0();
                }
                free(pvVar4);
              }
              free(pvVar1);
            }
            free(pvVar9);
          }
          free(pvVar8);
        }
        pvVar8 = *(void **)((int)pvVar7 + 0xac);
        if (pvVar8 != (void *)0x0) {
          puVar2 = *(undefined4 **)((int)pvVar8 + 0xa0);
          while (puVar2 != (undefined4 *)0x0) {
            if ((void *)*puVar2 == (void *)0x0) {
              puVar3 = (undefined4 *)puVar2[3];
              free(puVar2);
              puVar2 = puVar3;
            }
            else {
              free((void *)*puVar2);
              puVar3 = (undefined4 *)puVar2[3];
              free(puVar2);
              puVar2 = puVar3;
            }
          }
          pvVar9 = *(void **)((int)pvVar8 + 0xa8);
          if (pvVar9 != (void *)0x0) {
            puVar2 = *(undefined4 **)((int)pvVar9 + 0xa0);
            while (puVar2 != (undefined4 *)0x0) {
              if ((void *)*puVar2 == (void *)0x0) {
                puVar3 = (undefined4 *)puVar2[3];
                free(puVar2);
                puVar2 = puVar3;
              }
              else {
                free((void *)*puVar2);
                puVar3 = (undefined4 *)puVar2[3];
                free(puVar2);
                puVar2 = puVar3;
              }
            }
            pvVar1 = *(void **)((int)pvVar9 + 0xa8);
            if (pvVar1 != (void *)0x0) {
              puVar2 = *(undefined4 **)((int)pvVar1 + 0xa0);
              while (puVar2 != (undefined4 *)0x0) {
                if ((void *)*puVar2 == (void *)0x0) {
                  puVar3 = (undefined4 *)puVar2[3];
                  free(puVar2);
                  puVar2 = puVar3;
                }
                else {
                  free((void *)*puVar2);
                  puVar3 = (undefined4 *)puVar2[3];
                  free(puVar2);
                  puVar2 = puVar3;
                }
              }
              pvVar4 = *(void **)((int)pvVar1 + 0xa8);
              if (pvVar4 != (void *)0x0) {
                puVar2 = *(undefined4 **)((int)pvVar4 + 0xa0);
                while (puVar2 != (undefined4 *)0x0) {
                  if ((void *)*puVar2 == (void *)0x0) {
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                  else {
                    free((void *)*puVar2);
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                }
                if (*(int *)((int)pvVar4 + 0xa8) != 0) {
                  FUN_0001b7e0();
                }
                if (*(int *)((int)pvVar4 + 0xac) != 0) {
                  FUN_0001b7e0();
                }
                free(pvVar4);
              }
              pvVar4 = *(void **)((int)pvVar1 + 0xac);
              if (pvVar4 != (void *)0x0) {
                puVar2 = *(undefined4 **)((int)pvVar4 + 0xa0);
                while (puVar2 != (undefined4 *)0x0) {
                  if ((void *)*puVar2 == (void *)0x0) {
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                  else {
                    free((void *)*puVar2);
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                }
                if (*(int *)((int)pvVar4 + 0xa8) != 0) {
                  FUN_0001b7e0();
                }
                if (*(int *)((int)pvVar4 + 0xac) != 0) {
                  FUN_0001b7e0();
                }
                free(pvVar4);
              }
              free(pvVar1);
            }
            pvVar1 = *(void **)((int)pvVar9 + 0xac);
            if (pvVar1 != (void *)0x0) {
              puVar2 = *(undefined4 **)((int)pvVar1 + 0xa0);
              while (puVar2 != (undefined4 *)0x0) {
                if ((void *)*puVar2 == (void *)0x0) {
                  puVar3 = (undefined4 *)puVar2[3];
                  free(puVar2);
                  puVar2 = puVar3;
                }
                else {
                  free((void *)*puVar2);
                  puVar3 = (undefined4 *)puVar2[3];
                  free(puVar2);
                  puVar2 = puVar3;
                }
              }
              pvVar4 = *(void **)((int)pvVar1 + 0xa8);
              if (pvVar4 != (void *)0x0) {
                puVar2 = *(undefined4 **)((int)pvVar4 + 0xa0);
                while (puVar2 != (undefined4 *)0x0) {
                  if ((void *)*puVar2 == (void *)0x0) {
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                  else {
                    free((void *)*puVar2);
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                }
                if (*(int *)((int)pvVar4 + 0xa8) != 0) {
                  FUN_0001b7e0();
                }
                if (*(int *)((int)pvVar4 + 0xac) != 0) {
                  FUN_0001b7e0();
                }
                free(pvVar4);
              }
              pvVar4 = *(void **)((int)pvVar1 + 0xac);
              if (pvVar4 != (void *)0x0) {
                puVar2 = *(undefined4 **)((int)pvVar4 + 0xa0);
                while (puVar2 != (undefined4 *)0x0) {
                  if ((void *)*puVar2 == (void *)0x0) {
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                  else {
                    free((void *)*puVar2);
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                }
                if (*(int *)((int)pvVar4 + 0xa8) != 0) {
                  FUN_0001b7e0();
                }
                if (*(int *)((int)pvVar4 + 0xac) != 0) {
                  FUN_0001b7e0();
                }
                free(pvVar4);
              }
              free(pvVar1);
            }
            free(pvVar9);
          }
          pvVar9 = *(void **)((int)pvVar8 + 0xac);
          if (pvVar9 != (void *)0x0) {
            puVar2 = *(undefined4 **)((int)pvVar9 + 0xa0);
            while (puVar2 != (undefined4 *)0x0) {
              if ((void *)*puVar2 == (void *)0x0) {
                puVar3 = (undefined4 *)puVar2[3];
                free(puVar2);
                puVar2 = puVar3;
              }
              else {
                free((void *)*puVar2);
                puVar3 = (undefined4 *)puVar2[3];
                free(puVar2);
                puVar2 = puVar3;
              }
            }
            pvVar1 = *(void **)((int)pvVar9 + 0xa8);
            if (pvVar1 != (void *)0x0) {
              puVar2 = *(undefined4 **)((int)pvVar1 + 0xa0);
              while (puVar2 != (undefined4 *)0x0) {
                if ((void *)*puVar2 == (void *)0x0) {
                  puVar3 = (undefined4 *)puVar2[3];
                  free(puVar2);
                  puVar2 = puVar3;
                }
                else {
                  free((void *)*puVar2);
                  puVar3 = (undefined4 *)puVar2[3];
                  free(puVar2);
                  puVar2 = puVar3;
                }
              }
              pvVar4 = *(void **)((int)pvVar1 + 0xa8);
              if (pvVar4 != (void *)0x0) {
                puVar2 = *(undefined4 **)((int)pvVar4 + 0xa0);
                while (puVar2 != (undefined4 *)0x0) {
                  if ((void *)*puVar2 == (void *)0x0) {
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                  else {
                    free((void *)*puVar2);
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                }
                if (*(int *)((int)pvVar4 + 0xa8) != 0) {
                  FUN_0001b7e0();
                }
                if (*(int *)((int)pvVar4 + 0xac) != 0) {
                  FUN_0001b7e0();
                }
                free(pvVar4);
              }
              pvVar4 = *(void **)((int)pvVar1 + 0xac);
              if (pvVar4 != (void *)0x0) {
                puVar2 = *(undefined4 **)((int)pvVar4 + 0xa0);
                while (puVar2 != (undefined4 *)0x0) {
                  if ((void *)*puVar2 == (void *)0x0) {
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                  else {
                    free((void *)*puVar2);
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                }
                if (*(int *)((int)pvVar4 + 0xa8) != 0) {
                  FUN_0001b7e0();
                }
                if (*(int *)((int)pvVar4 + 0xac) != 0) {
                  FUN_0001b7e0();
                }
                free(pvVar4);
              }
              free(pvVar1);
            }
            pvVar1 = *(void **)((int)pvVar9 + 0xac);
            if (pvVar1 != (void *)0x0) {
              puVar2 = *(undefined4 **)((int)pvVar1 + 0xa0);
              while (puVar2 != (undefined4 *)0x0) {
                if ((void *)*puVar2 == (void *)0x0) {
                  puVar3 = (undefined4 *)puVar2[3];
                  free(puVar2);
                  puVar2 = puVar3;
                }
                else {
                  free((void *)*puVar2);
                  puVar3 = (undefined4 *)puVar2[3];
                  free(puVar2);
                  puVar2 = puVar3;
                }
              }
              pvVar4 = *(void **)((int)pvVar1 + 0xa8);
              if (pvVar4 != (void *)0x0) {
                puVar2 = *(undefined4 **)((int)pvVar4 + 0xa0);
                while (puVar2 != (undefined4 *)0x0) {
                  if ((void *)*puVar2 == (void *)0x0) {
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                  else {
                    free((void *)*puVar2);
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                }
                if (*(int *)((int)pvVar4 + 0xa8) != 0) {
                  FUN_0001b7e0();
                }
                if (*(int *)((int)pvVar4 + 0xac) != 0) {
                  FUN_0001b7e0();
                }
                free(pvVar4);
              }
              pvVar4 = *(void **)((int)pvVar1 + 0xac);
              if (pvVar4 != (void *)0x0) {
                puVar2 = *(undefined4 **)((int)pvVar4 + 0xa0);
                while (puVar2 != (undefined4 *)0x0) {
                  if ((void *)*puVar2 == (void *)0x0) {
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                  else {
                    free((void *)*puVar2);
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                }
                if (*(int *)((int)pvVar4 + 0xa8) != 0) {
                  FUN_0001b7e0();
                }
                if (*(int *)((int)pvVar4 + 0xac) != 0) {
                  FUN_0001b7e0();
                }
                free(pvVar4);
              }
              free(pvVar1);
            }
            free(pvVar9);
          }
          free(pvVar8);
        }
        free(pvVar7);
      }
      pvVar7 = *(void **)((int)pvVar6 + 0xac);
      if (pvVar7 != (void *)0x0) {
        puVar2 = *(undefined4 **)((int)pvVar7 + 0xa0);
        while (puVar3 = puVar2, puVar2 != (undefined4 *)0x0) {
          while ((void *)*puVar3 == (void *)0x0) {
            puVar2 = (undefined4 *)puVar3[3];
            free(puVar3);
            puVar3 = puVar2;
            if (puVar2 == (undefined4 *)0x0) goto LAB_0001e850;
          }
          free((void *)*puVar3);
          puVar2 = (undefined4 *)puVar3[3];
          free(puVar3);
        }
LAB_0001e850:
        pvVar8 = *(void **)((int)pvVar7 + 0xa8);
        if (pvVar8 != (void *)0x0) {
          puVar2 = *(undefined4 **)((int)pvVar8 + 0xa0);
          while (puVar2 != (undefined4 *)0x0) {
            if ((void *)*puVar2 == (void *)0x0) {
              puVar3 = (undefined4 *)puVar2[3];
              free(puVar2);
              puVar2 = puVar3;
            }
            else {
              free((void *)*puVar2);
              puVar3 = (undefined4 *)puVar2[3];
              free(puVar2);
              puVar2 = puVar3;
            }
          }
          pvVar9 = *(void **)((int)pvVar8 + 0xa8);
          if (pvVar9 != (void *)0x0) {
            puVar2 = *(undefined4 **)((int)pvVar9 + 0xa0);
            while (puVar2 != (undefined4 *)0x0) {
              if ((void *)*puVar2 == (void *)0x0) {
                puVar3 = (undefined4 *)puVar2[3];
                free(puVar2);
                puVar2 = puVar3;
              }
              else {
                free((void *)*puVar2);
                puVar3 = (undefined4 *)puVar2[3];
                free(puVar2);
                puVar2 = puVar3;
              }
            }
            pvVar1 = *(void **)((int)pvVar9 + 0xa8);
            if (pvVar1 != (void *)0x0) {
              puVar2 = *(undefined4 **)((int)pvVar1 + 0xa0);
              while (puVar2 != (undefined4 *)0x0) {
                if ((void *)*puVar2 == (void *)0x0) {
                  puVar3 = (undefined4 *)puVar2[3];
                  free(puVar2);
                  puVar2 = puVar3;
                }
                else {
                  free((void *)*puVar2);
                  puVar3 = (undefined4 *)puVar2[3];
                  free(puVar2);
                  puVar2 = puVar3;
                }
              }
              if (*(int *)((int)pvVar1 + 0xa8) != 0) {
                FUN_0001b7e0();
              }
              if (*(int *)((int)pvVar1 + 0xac) != 0) {
                FUN_0001b7e0();
              }
              free(pvVar1);
            }
            pvVar1 = *(void **)((int)pvVar9 + 0xac);
            if (pvVar1 != (void *)0x0) {
              puVar2 = *(undefined4 **)((int)pvVar1 + 0xa0);
              while (puVar2 != (undefined4 *)0x0) {
                if ((void *)*puVar2 == (void *)0x0) {
                  puVar3 = (undefined4 *)puVar2[3];
                  free(puVar2);
                  puVar2 = puVar3;
                }
                else {
                  free((void *)*puVar2);
                  puVar3 = (undefined4 *)puVar2[3];
                  free(puVar2);
                  puVar2 = puVar3;
                }
              }
              pvVar4 = *(void **)((int)pvVar1 + 0xa8);
              if (pvVar4 != (void *)0x0) {
                puVar2 = *(undefined4 **)((int)pvVar4 + 0xa0);
                while (puVar2 != (undefined4 *)0x0) {
                  if ((void *)*puVar2 == (void *)0x0) {
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                  else {
                    free((void *)*puVar2);
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                }
                if (*(int *)((int)pvVar4 + 0xa8) != 0) {
                  FUN_0001b7e0();
                }
                if (*(int *)((int)pvVar4 + 0xac) != 0) {
                  FUN_0001b7e0();
                }
                free(pvVar4);
              }
              pvVar4 = *(void **)((int)pvVar1 + 0xac);
              if (pvVar4 != (void *)0x0) {
                puVar2 = *(undefined4 **)((int)pvVar4 + 0xa0);
                while (puVar2 != (undefined4 *)0x0) {
                  if ((void *)*puVar2 == (void *)0x0) {
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                  else {
                    free((void *)*puVar2);
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                }
                if (*(int *)((int)pvVar4 + 0xa8) != 0) {
                  FUN_0001b7e0();
                }
                if (*(int *)((int)pvVar4 + 0xac) != 0) {
                  FUN_0001b7e0();
                }
                free(pvVar4);
              }
              free(pvVar1);
            }
            free(pvVar9);
          }
          pvVar9 = *(void **)((int)pvVar8 + 0xac);
          if (pvVar9 != (void *)0x0) {
            puVar2 = *(undefined4 **)((int)pvVar9 + 0xa0);
            while (puVar2 != (undefined4 *)0x0) {
              if ((void *)*puVar2 == (void *)0x0) {
                puVar3 = (undefined4 *)puVar2[3];
                free(puVar2);
                puVar2 = puVar3;
              }
              else {
                free((void *)*puVar2);
                puVar3 = (undefined4 *)puVar2[3];
                free(puVar2);
                puVar2 = puVar3;
              }
            }
            pvVar1 = *(void **)((int)pvVar9 + 0xa8);
            if (pvVar1 != (void *)0x0) {
              puVar2 = *(undefined4 **)((int)pvVar1 + 0xa0);
              while (puVar2 != (undefined4 *)0x0) {
                if ((void *)*puVar2 == (void *)0x0) {
                  puVar3 = (undefined4 *)puVar2[3];
                  free(puVar2);
                  puVar2 = puVar3;
                }
                else {
                  free((void *)*puVar2);
                  puVar3 = (undefined4 *)puVar2[3];
                  free(puVar2);
                  puVar2 = puVar3;
                }
              }
              pvVar4 = *(void **)((int)pvVar1 + 0xa8);
              if (pvVar4 != (void *)0x0) {
                puVar2 = *(undefined4 **)((int)pvVar4 + 0xa0);
                while (puVar2 != (undefined4 *)0x0) {
                  if ((void *)*puVar2 == (void *)0x0) {
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                  else {
                    free((void *)*puVar2);
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                }
                if (*(int *)((int)pvVar4 + 0xa8) != 0) {
                  FUN_0001b7e0();
                }
                if (*(int *)((int)pvVar4 + 0xac) != 0) {
                  FUN_0001b7e0();
                }
                free(pvVar4);
              }
              pvVar4 = *(void **)((int)pvVar1 + 0xac);
              if (pvVar4 != (void *)0x0) {
                puVar2 = *(undefined4 **)((int)pvVar4 + 0xa0);
                while (puVar2 != (undefined4 *)0x0) {
                  if ((void *)*puVar2 == (void *)0x0) {
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                  else {
                    free((void *)*puVar2);
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                }
                if (*(int *)((int)pvVar4 + 0xa8) != 0) {
                  FUN_0001b7e0();
                }
                if (*(int *)((int)pvVar4 + 0xac) != 0) {
                  FUN_0001b7e0();
                }
                free(pvVar4);
              }
              free(pvVar1);
            }
            pvVar1 = *(void **)((int)pvVar9 + 0xac);
            if (pvVar1 != (void *)0x0) {
              puVar2 = *(undefined4 **)((int)pvVar1 + 0xa0);
              while (puVar2 != (undefined4 *)0x0) {
                if ((void *)*puVar2 == (void *)0x0) {
                  puVar3 = (undefined4 *)puVar2[3];
                  free(puVar2);
                  puVar2 = puVar3;
                }
                else {
                  free((void *)*puVar2);
                  puVar3 = (undefined4 *)puVar2[3];
                  free(puVar2);
                  puVar2 = puVar3;
                }
              }
              pvVar4 = *(void **)((int)pvVar1 + 0xa8);
              if (pvVar4 != (void *)0x0) {
                puVar2 = *(undefined4 **)((int)pvVar4 + 0xa0);
                while (puVar2 != (undefined4 *)0x0) {
                  if ((void *)*puVar2 == (void *)0x0) {
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                  else {
                    free((void *)*puVar2);
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                }
                if (*(int *)((int)pvVar4 + 0xa8) != 0) {
                  FUN_0001b7e0();
                }
                if (*(int *)((int)pvVar4 + 0xac) != 0) {
                  FUN_0001b7e0();
                }
                free(pvVar4);
              }
              pvVar4 = *(void **)((int)pvVar1 + 0xac);
              if (pvVar4 != (void *)0x0) {
                puVar2 = *(undefined4 **)((int)pvVar4 + 0xa0);
                while (puVar2 != (undefined4 *)0x0) {
                  if ((void *)*puVar2 == (void *)0x0) {
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                  else {
                    free((void *)*puVar2);
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                }
                if (*(int *)((int)pvVar4 + 0xa8) != 0) {
                  FUN_0001b7e0();
                }
                if (*(int *)((int)pvVar4 + 0xac) != 0) {
                  FUN_0001b7e0();
                }
                free(pvVar4);
              }
              free(pvVar1);
            }
            free(pvVar9);
          }
          free(pvVar8);
        }
        pvVar8 = *(void **)((int)pvVar7 + 0xac);
        if (pvVar8 != (void *)0x0) {
          puVar2 = *(undefined4 **)((int)pvVar8 + 0xa0);
          while (puVar2 != (undefined4 *)0x0) {
            if ((void *)*puVar2 == (void *)0x0) {
              puVar3 = (undefined4 *)puVar2[3];
              free(puVar2);
              puVar2 = puVar3;
            }
            else {
              free((void *)*puVar2);
              puVar3 = (undefined4 *)puVar2[3];
              free(puVar2);
              puVar2 = puVar3;
            }
          }
          pvVar9 = *(void **)((int)pvVar8 + 0xa8);
          if (pvVar9 != (void *)0x0) {
            puVar2 = *(undefined4 **)((int)pvVar9 + 0xa0);
            while (puVar2 != (undefined4 *)0x0) {
              if ((void *)*puVar2 == (void *)0x0) {
                puVar3 = (undefined4 *)puVar2[3];
                free(puVar2);
                puVar2 = puVar3;
              }
              else {
                free((void *)*puVar2);
                puVar3 = (undefined4 *)puVar2[3];
                free(puVar2);
                puVar2 = puVar3;
              }
            }
            pvVar1 = *(void **)((int)pvVar9 + 0xa8);
            if (pvVar1 != (void *)0x0) {
              puVar2 = *(undefined4 **)((int)pvVar1 + 0xa0);
              while (puVar2 != (undefined4 *)0x0) {
                if ((void *)*puVar2 == (void *)0x0) {
                  puVar3 = (undefined4 *)puVar2[3];
                  free(puVar2);
                  puVar2 = puVar3;
                }
                else {
                  free((void *)*puVar2);
                  puVar3 = (undefined4 *)puVar2[3];
                  free(puVar2);
                  puVar2 = puVar3;
                }
              }
              pvVar4 = *(void **)((int)pvVar1 + 0xa8);
              if (pvVar4 != (void *)0x0) {
                puVar2 = *(undefined4 **)((int)pvVar4 + 0xa0);
                while (puVar2 != (undefined4 *)0x0) {
                  if ((void *)*puVar2 == (void *)0x0) {
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                  else {
                    free((void *)*puVar2);
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                }
                if (*(int *)((int)pvVar4 + 0xa8) != 0) {
                  FUN_0001b7e0();
                }
                if (*(int *)((int)pvVar4 + 0xac) != 0) {
                  FUN_0001b7e0();
                }
                free(pvVar4);
              }
              pvVar4 = *(void **)((int)pvVar1 + 0xac);
              if (pvVar4 != (void *)0x0) {
                puVar2 = *(undefined4 **)((int)pvVar4 + 0xa0);
                while (puVar2 != (undefined4 *)0x0) {
                  if ((void *)*puVar2 == (void *)0x0) {
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                  else {
                    free((void *)*puVar2);
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                }
                if (*(int *)((int)pvVar4 + 0xa8) != 0) {
                  FUN_0001b7e0();
                }
                if (*(int *)((int)pvVar4 + 0xac) != 0) {
                  FUN_0001b7e0();
                }
                free(pvVar4);
              }
              free(pvVar1);
            }
            pvVar1 = *(void **)((int)pvVar9 + 0xac);
            if (pvVar1 != (void *)0x0) {
              puVar2 = *(undefined4 **)((int)pvVar1 + 0xa0);
              while (puVar2 != (undefined4 *)0x0) {
                if ((void *)*puVar2 == (void *)0x0) {
                  puVar3 = (undefined4 *)puVar2[3];
                  free(puVar2);
                  puVar2 = puVar3;
                }
                else {
                  free((void *)*puVar2);
                  puVar3 = (undefined4 *)puVar2[3];
                  free(puVar2);
                  puVar2 = puVar3;
                }
              }
              pvVar4 = *(void **)((int)pvVar1 + 0xa8);
              if (pvVar4 != (void *)0x0) {
                puVar2 = *(undefined4 **)((int)pvVar4 + 0xa0);
                while (puVar2 != (undefined4 *)0x0) {
                  if ((void *)*puVar2 == (void *)0x0) {
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                  else {
                    free((void *)*puVar2);
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                }
                if (*(int *)((int)pvVar4 + 0xa8) != 0) {
                  FUN_0001b7e0();
                }
                if (*(int *)((int)pvVar4 + 0xac) != 0) {
                  FUN_0001b7e0();
                }
                free(pvVar4);
              }
              pvVar4 = *(void **)((int)pvVar1 + 0xac);
              if (pvVar4 != (void *)0x0) {
                puVar2 = *(undefined4 **)((int)pvVar4 + 0xa0);
                while (puVar2 != (undefined4 *)0x0) {
                  if ((void *)*puVar2 == (void *)0x0) {
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                  else {
                    free((void *)*puVar2);
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                }
                if (*(int *)((int)pvVar4 + 0xa8) != 0) {
                  FUN_0001b7e0();
                }
                if (*(int *)((int)pvVar4 + 0xac) != 0) {
                  FUN_0001b7e0();
                }
                free(pvVar4);
              }
              free(pvVar1);
            }
            free(pvVar9);
          }
          pvVar9 = *(void **)((int)pvVar8 + 0xac);
          if (pvVar9 != (void *)0x0) {
            puVar2 = *(undefined4 **)((int)pvVar9 + 0xa0);
            while (puVar2 != (undefined4 *)0x0) {
              if ((void *)*puVar2 == (void *)0x0) {
                puVar3 = (undefined4 *)puVar2[3];
                free(puVar2);
                puVar2 = puVar3;
              }
              else {
                free((void *)*puVar2);
                puVar3 = (undefined4 *)puVar2[3];
                free(puVar2);
                puVar2 = puVar3;
              }
            }
            pvVar1 = *(void **)((int)pvVar9 + 0xa8);
            if (pvVar1 != (void *)0x0) {
              puVar2 = *(undefined4 **)((int)pvVar1 + 0xa0);
              while (puVar2 != (undefined4 *)0x0) {
                if ((void *)*puVar2 == (void *)0x0) {
                  puVar3 = (undefined4 *)puVar2[3];
                  free(puVar2);
                  puVar2 = puVar3;
                }
                else {
                  free((void *)*puVar2);
                  puVar3 = (undefined4 *)puVar2[3];
                  free(puVar2);
                  puVar2 = puVar3;
                }
              }
              pvVar4 = *(void **)((int)pvVar1 + 0xa8);
              if (pvVar4 != (void *)0x0) {
                puVar2 = *(undefined4 **)((int)pvVar4 + 0xa0);
                while (puVar2 != (undefined4 *)0x0) {
                  if ((void *)*puVar2 == (void *)0x0) {
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                  else {
                    free((void *)*puVar2);
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                }
                if (*(int *)((int)pvVar4 + 0xa8) != 0) {
                  FUN_0001b7e0();
                }
                if (*(int *)((int)pvVar4 + 0xac) != 0) {
                  FUN_0001b7e0();
                }
                free(pvVar4);
              }
              pvVar4 = *(void **)((int)pvVar1 + 0xac);
              if (pvVar4 != (void *)0x0) {
                puVar2 = *(undefined4 **)((int)pvVar4 + 0xa0);
                while (puVar2 != (undefined4 *)0x0) {
                  if ((void *)*puVar2 == (void *)0x0) {
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                  else {
                    free((void *)*puVar2);
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                }
                if (*(int *)((int)pvVar4 + 0xa8) != 0) {
                  FUN_0001b7e0();
                }
                if (*(int *)((int)pvVar4 + 0xac) != 0) {
                  FUN_0001b7e0();
                }
                free(pvVar4);
              }
              free(pvVar1);
            }
            pvVar1 = *(void **)((int)pvVar9 + 0xac);
            if (pvVar1 != (void *)0x0) {
              puVar2 = *(undefined4 **)((int)pvVar1 + 0xa0);
              while (puVar2 != (undefined4 *)0x0) {
                if ((void *)*puVar2 == (void *)0x0) {
                  puVar3 = (undefined4 *)puVar2[3];
                  free(puVar2);
                  puVar2 = puVar3;
                }
                else {
                  free((void *)*puVar2);
                  puVar3 = (undefined4 *)puVar2[3];
                  free(puVar2);
                  puVar2 = puVar3;
                }
              }
              pvVar4 = *(void **)((int)pvVar1 + 0xa8);
              if (pvVar4 != (void *)0x0) {
                puVar2 = *(undefined4 **)((int)pvVar4 + 0xa0);
                while (puVar2 != (undefined4 *)0x0) {
                  if ((void *)*puVar2 == (void *)0x0) {
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                  else {
                    free((void *)*puVar2);
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                }
                if (*(int *)((int)pvVar4 + 0xa8) != 0) {
                  FUN_0001b7e0();
                }
                if (*(int *)((int)pvVar4 + 0xac) != 0) {
                  FUN_0001b7e0();
                }
                free(pvVar4);
              }
              pvVar4 = *(void **)((int)pvVar1 + 0xac);
              if (pvVar4 != (void *)0x0) {
                puVar2 = *(undefined4 **)((int)pvVar4 + 0xa0);
                while (puVar2 != (undefined4 *)0x0) {
                  if ((void *)*puVar2 == (void *)0x0) {
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                  else {
                    free((void *)*puVar2);
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                }
                if (*(int *)((int)pvVar4 + 0xa8) != 0) {
                  FUN_0001b7e0();
                }
                if (*(int *)((int)pvVar4 + 0xac) != 0) {
                  FUN_0001b7e0();
                }
                free(pvVar4);
              }
              free(pvVar1);
            }
            free(pvVar9);
          }
          free(pvVar8);
        }
        free(pvVar7);
      }
      free(pvVar6);
    }
    pvVar6 = *(void **)((int)pvVar5 + 0xac);
    if (pvVar6 != (void *)0x0) {
      puVar2 = *(undefined4 **)((int)pvVar6 + 0xa0);
      while (puVar2 != (undefined4 *)0x0) {
        if ((void *)*puVar2 == (void *)0x0) {
          puVar3 = (undefined4 *)puVar2[3];
          free(puVar2);
          puVar2 = puVar3;
        }
        else {
          free((void *)*puVar2);
          puVar3 = (undefined4 *)puVar2[3];
          free(puVar2);
          puVar2 = puVar3;
        }
      }
      pvVar7 = *(void **)((int)pvVar6 + 0xa8);
      if (pvVar7 != (void *)0x0) {
        puVar2 = *(undefined4 **)((int)pvVar7 + 0xa0);
        while (puVar3 = puVar2, puVar2 != (undefined4 *)0x0) {
          while ((void *)*puVar3 == (void *)0x0) {
            puVar2 = (undefined4 *)puVar3[3];
            free(puVar3);
            puVar3 = puVar2;
            if (puVar2 == (undefined4 *)0x0) goto LAB_0001f674;
          }
          free((void *)*puVar3);
          puVar2 = (undefined4 *)puVar3[3];
          free(puVar3);
        }
LAB_0001f674:
        pvVar8 = *(void **)((int)pvVar7 + 0xa8);
        if (pvVar8 != (void *)0x0) {
          puVar2 = *(undefined4 **)((int)pvVar8 + 0xa0);
          while (puVar2 != (undefined4 *)0x0) {
            if ((void *)*puVar2 == (void *)0x0) {
              puVar3 = (undefined4 *)puVar2[3];
              free(puVar2);
              puVar2 = puVar3;
            }
            else {
              free((void *)*puVar2);
              puVar3 = (undefined4 *)puVar2[3];
              free(puVar2);
              puVar2 = puVar3;
            }
          }
          pvVar9 = *(void **)((int)pvVar8 + 0xa8);
          if (pvVar9 != (void *)0x0) {
            puVar2 = *(undefined4 **)((int)pvVar9 + 0xa0);
            while (puVar2 != (undefined4 *)0x0) {
              if ((void *)*puVar2 == (void *)0x0) {
                puVar3 = (undefined4 *)puVar2[3];
                free(puVar2);
                puVar2 = puVar3;
              }
              else {
                free((void *)*puVar2);
                puVar3 = (undefined4 *)puVar2[3];
                free(puVar2);
                puVar2 = puVar3;
              }
            }
            pvVar1 = *(void **)((int)pvVar9 + 0xa8);
            if (pvVar1 != (void *)0x0) {
              puVar2 = *(undefined4 **)((int)pvVar1 + 0xa0);
              while (puVar2 != (undefined4 *)0x0) {
                if ((void *)*puVar2 == (void *)0x0) {
                  puVar3 = (undefined4 *)puVar2[3];
                  free(puVar2);
                  puVar2 = puVar3;
                }
                else {
                  free((void *)*puVar2);
                  puVar3 = (undefined4 *)puVar2[3];
                  free(puVar2);
                  puVar2 = puVar3;
                }
              }
              pvVar4 = *(void **)((int)pvVar1 + 0xa8);
              if (pvVar4 != (void *)0x0) {
                puVar2 = *(undefined4 **)((int)pvVar4 + 0xa0);
                while (puVar2 != (undefined4 *)0x0) {
                  if ((void *)*puVar2 == (void *)0x0) {
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                  else {
                    free((void *)*puVar2);
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                }
                if (*(int *)((int)pvVar4 + 0xa8) != 0) {
                  FUN_0001b7e0();
                }
                if (*(int *)((int)pvVar4 + 0xac) != 0) {
                  FUN_0001b7e0();
                }
                free(pvVar4);
              }
              pvVar4 = *(void **)((int)pvVar1 + 0xac);
              if (pvVar4 != (void *)0x0) {
                puVar2 = *(undefined4 **)((int)pvVar4 + 0xa0);
                while (puVar2 != (undefined4 *)0x0) {
                  if ((void *)*puVar2 == (void *)0x0) {
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                  else {
                    free((void *)*puVar2);
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                }
                if (*(int *)((int)pvVar4 + 0xa8) != 0) {
                  FUN_0001b7e0();
                }
                if (*(int *)((int)pvVar4 + 0xac) != 0) {
                  FUN_0001b7e0();
                }
                free(pvVar4);
              }
              free(pvVar1);
            }
            pvVar1 = *(void **)((int)pvVar9 + 0xac);
            if (pvVar1 != (void *)0x0) {
              puVar2 = *(undefined4 **)((int)pvVar1 + 0xa0);
              while (puVar2 != (undefined4 *)0x0) {
                if ((void *)*puVar2 == (void *)0x0) {
                  puVar3 = (undefined4 *)puVar2[3];
                  free(puVar2);
                  puVar2 = puVar3;
                }
                else {
                  free((void *)*puVar2);
                  puVar3 = (undefined4 *)puVar2[3];
                  free(puVar2);
                  puVar2 = puVar3;
                }
              }
              pvVar4 = *(void **)((int)pvVar1 + 0xa8);
              if (pvVar4 != (void *)0x0) {
                puVar2 = *(undefined4 **)((int)pvVar4 + 0xa0);
                while (puVar2 != (undefined4 *)0x0) {
                  if ((void *)*puVar2 == (void *)0x0) {
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                  else {
                    free((void *)*puVar2);
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                }
                if (*(int *)((int)pvVar4 + 0xa8) != 0) {
                  FUN_0001b7e0();
                }
                if (*(int *)((int)pvVar4 + 0xac) != 0) {
                  FUN_0001b7e0();
                }
                free(pvVar4);
              }
              pvVar4 = *(void **)((int)pvVar1 + 0xac);
              if (pvVar4 != (void *)0x0) {
                puVar2 = *(undefined4 **)((int)pvVar4 + 0xa0);
                while (puVar2 != (undefined4 *)0x0) {
                  if ((void *)*puVar2 == (void *)0x0) {
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                  else {
                    free((void *)*puVar2);
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                }
                if (*(int *)((int)pvVar4 + 0xa8) != 0) {
                  FUN_0001b7e0();
                }
                if (*(int *)((int)pvVar4 + 0xac) != 0) {
                  FUN_0001b7e0();
                }
                free(pvVar4);
              }
              free(pvVar1);
            }
            free(pvVar9);
          }
          pvVar9 = *(void **)((int)pvVar8 + 0xac);
          if (pvVar9 != (void *)0x0) {
            puVar2 = *(undefined4 **)((int)pvVar9 + 0xa0);
            while (puVar2 != (undefined4 *)0x0) {
              if ((void *)*puVar2 == (void *)0x0) {
                puVar3 = (undefined4 *)puVar2[3];
                free(puVar2);
                puVar2 = puVar3;
              }
              else {
                free((void *)*puVar2);
                puVar3 = (undefined4 *)puVar2[3];
                free(puVar2);
                puVar2 = puVar3;
              }
            }
            pvVar1 = *(void **)((int)pvVar9 + 0xa8);
            if (pvVar1 != (void *)0x0) {
              puVar2 = *(undefined4 **)((int)pvVar1 + 0xa0);
              while (puVar2 != (undefined4 *)0x0) {
                if ((void *)*puVar2 == (void *)0x0) {
                  puVar3 = (undefined4 *)puVar2[3];
                  free(puVar2);
                  puVar2 = puVar3;
                }
                else {
                  free((void *)*puVar2);
                  puVar3 = (undefined4 *)puVar2[3];
                  free(puVar2);
                  puVar2 = puVar3;
                }
              }
              pvVar4 = *(void **)((int)pvVar1 + 0xa8);
              if (pvVar4 != (void *)0x0) {
                puVar2 = *(undefined4 **)((int)pvVar4 + 0xa0);
                while (puVar2 != (undefined4 *)0x0) {
                  if ((void *)*puVar2 == (void *)0x0) {
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                  else {
                    free((void *)*puVar2);
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                }
                if (*(int *)((int)pvVar4 + 0xa8) != 0) {
                  FUN_0001b7e0();
                }
                if (*(int *)((int)pvVar4 + 0xac) != 0) {
                  FUN_0001b7e0();
                }
                free(pvVar4);
              }
              pvVar4 = *(void **)((int)pvVar1 + 0xac);
              if (pvVar4 != (void *)0x0) {
                puVar2 = *(undefined4 **)((int)pvVar4 + 0xa0);
                while (puVar2 != (undefined4 *)0x0) {
                  if ((void *)*puVar2 == (void *)0x0) {
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                  else {
                    free((void *)*puVar2);
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                }
                if (*(int *)((int)pvVar4 + 0xa8) != 0) {
                  FUN_0001b7e0();
                }
                if (*(int *)((int)pvVar4 + 0xac) != 0) {
                  FUN_0001b7e0();
                }
                free(pvVar4);
              }
              free(pvVar1);
            }
            pvVar1 = *(void **)((int)pvVar9 + 0xac);
            if (pvVar1 != (void *)0x0) {
              puVar2 = *(undefined4 **)((int)pvVar1 + 0xa0);
              while (puVar2 != (undefined4 *)0x0) {
                if ((void *)*puVar2 == (void *)0x0) {
                  puVar3 = (undefined4 *)puVar2[3];
                  free(puVar2);
                  puVar2 = puVar3;
                }
                else {
                  free((void *)*puVar2);
                  puVar3 = (undefined4 *)puVar2[3];
                  free(puVar2);
                  puVar2 = puVar3;
                }
              }
              pvVar4 = *(void **)((int)pvVar1 + 0xa8);
              if (pvVar4 != (void *)0x0) {
                puVar2 = *(undefined4 **)((int)pvVar4 + 0xa0);
                while (puVar2 != (undefined4 *)0x0) {
                  if ((void *)*puVar2 == (void *)0x0) {
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                  else {
                    free((void *)*puVar2);
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                }
                if (*(int *)((int)pvVar4 + 0xa8) != 0) {
                  FUN_0001b7e0();
                }
                if (*(int *)((int)pvVar4 + 0xac) != 0) {
                  FUN_0001b7e0();
                }
                free(pvVar4);
              }
              pvVar4 = *(void **)((int)pvVar1 + 0xac);
              if (pvVar4 != (void *)0x0) {
                puVar2 = *(undefined4 **)((int)pvVar4 + 0xa0);
                while (puVar2 != (undefined4 *)0x0) {
                  if ((void *)*puVar2 == (void *)0x0) {
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                  else {
                    free((void *)*puVar2);
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                }
                if (*(int *)((int)pvVar4 + 0xa8) != 0) {
                  FUN_0001b7e0();
                }
                if (*(int *)((int)pvVar4 + 0xac) != 0) {
                  FUN_0001b7e0();
                }
                free(pvVar4);
              }
              free(pvVar1);
            }
            free(pvVar9);
          }
          free(pvVar8);
        }
        pvVar8 = *(void **)((int)pvVar7 + 0xac);
        if (pvVar8 != (void *)0x0) {
          puVar2 = *(undefined4 **)((int)pvVar8 + 0xa0);
          while (puVar2 != (undefined4 *)0x0) {
            if ((void *)*puVar2 == (void *)0x0) {
              puVar3 = (undefined4 *)puVar2[3];
              free(puVar2);
              puVar2 = puVar3;
            }
            else {
              free((void *)*puVar2);
              puVar3 = (undefined4 *)puVar2[3];
              free(puVar2);
              puVar2 = puVar3;
            }
          }
          pvVar9 = *(void **)((int)pvVar8 + 0xa8);
          if (pvVar9 != (void *)0x0) {
            puVar2 = *(undefined4 **)((int)pvVar9 + 0xa0);
            while (puVar2 != (undefined4 *)0x0) {
              if ((void *)*puVar2 == (void *)0x0) {
                puVar3 = (undefined4 *)puVar2[3];
                free(puVar2);
                puVar2 = puVar3;
              }
              else {
                free((void *)*puVar2);
                puVar3 = (undefined4 *)puVar2[3];
                free(puVar2);
                puVar2 = puVar3;
              }
            }
            pvVar1 = *(void **)((int)pvVar9 + 0xa8);
            if (pvVar1 != (void *)0x0) {
              puVar2 = *(undefined4 **)((int)pvVar1 + 0xa0);
              while (puVar2 != (undefined4 *)0x0) {
                if ((void *)*puVar2 == (void *)0x0) {
                  puVar3 = (undefined4 *)puVar2[3];
                  free(puVar2);
                  puVar2 = puVar3;
                }
                else {
                  free((void *)*puVar2);
                  puVar3 = (undefined4 *)puVar2[3];
                  free(puVar2);
                  puVar2 = puVar3;
                }
              }
              if (*(int *)((int)pvVar1 + 0xa8) != 0) {
                FUN_0001b7e0();
              }
              if (*(int *)((int)pvVar1 + 0xac) != 0) {
                FUN_0001b7e0();
              }
              free(pvVar1);
            }
            pvVar1 = *(void **)((int)pvVar9 + 0xac);
            if (pvVar1 != (void *)0x0) {
              puVar2 = *(undefined4 **)((int)pvVar1 + 0xa0);
              while (puVar2 != (undefined4 *)0x0) {
                if ((void *)*puVar2 == (void *)0x0) {
                  puVar3 = (undefined4 *)puVar2[3];
                  free(puVar2);
                  puVar2 = puVar3;
                }
                else {
                  free((void *)*puVar2);
                  puVar3 = (undefined4 *)puVar2[3];
                  free(puVar2);
                  puVar2 = puVar3;
                }
              }
              pvVar4 = *(void **)((int)pvVar1 + 0xa8);
              if (pvVar4 != (void *)0x0) {
                puVar2 = *(undefined4 **)((int)pvVar4 + 0xa0);
                while (puVar2 != (undefined4 *)0x0) {
                  if ((void *)*puVar2 == (void *)0x0) {
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                  else {
                    free((void *)*puVar2);
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                }
                if (*(int *)((int)pvVar4 + 0xa8) != 0) {
                  FUN_0001b7e0();
                }
                if (*(int *)((int)pvVar4 + 0xac) != 0) {
                  FUN_0001b7e0();
                }
                free(pvVar4);
              }
              pvVar4 = *(void **)((int)pvVar1 + 0xac);
              if (pvVar4 != (void *)0x0) {
                puVar2 = *(undefined4 **)((int)pvVar4 + 0xa0);
                while (puVar2 != (undefined4 *)0x0) {
                  if ((void *)*puVar2 == (void *)0x0) {
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                  else {
                    free((void *)*puVar2);
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                }
                if (*(int *)((int)pvVar4 + 0xa8) != 0) {
                  FUN_0001b7e0();
                }
                if (*(int *)((int)pvVar4 + 0xac) != 0) {
                  FUN_0001b7e0();
                }
                free(pvVar4);
              }
              free(pvVar1);
            }
            free(pvVar9);
          }
          pvVar9 = *(void **)((int)pvVar8 + 0xac);
          if (pvVar9 != (void *)0x0) {
            puVar2 = *(undefined4 **)((int)pvVar9 + 0xa0);
            while (puVar2 != (undefined4 *)0x0) {
              if ((void *)*puVar2 == (void *)0x0) {
                puVar3 = (undefined4 *)puVar2[3];
                free(puVar2);
                puVar2 = puVar3;
              }
              else {
                free((void *)*puVar2);
                puVar3 = (undefined4 *)puVar2[3];
                free(puVar2);
                puVar2 = puVar3;
              }
            }
            pvVar1 = *(void **)((int)pvVar9 + 0xa8);
            if (pvVar1 != (void *)0x0) {
              puVar2 = *(undefined4 **)((int)pvVar1 + 0xa0);
              while (puVar2 != (undefined4 *)0x0) {
                if ((void *)*puVar2 == (void *)0x0) {
                  puVar3 = (undefined4 *)puVar2[3];
                  free(puVar2);
                  puVar2 = puVar3;
                }
                else {
                  free((void *)*puVar2);
                  puVar3 = (undefined4 *)puVar2[3];
                  free(puVar2);
                  puVar2 = puVar3;
                }
              }
              pvVar4 = *(void **)((int)pvVar1 + 0xa8);
              if (pvVar4 != (void *)0x0) {
                puVar2 = *(undefined4 **)((int)pvVar4 + 0xa0);
                while (puVar2 != (undefined4 *)0x0) {
                  if ((void *)*puVar2 == (void *)0x0) {
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                  else {
                    free((void *)*puVar2);
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                }
                if (*(int *)((int)pvVar4 + 0xa8) != 0) {
                  FUN_0001b7e0();
                }
                if (*(int *)((int)pvVar4 + 0xac) != 0) {
                  FUN_0001b7e0();
                }
                free(pvVar4);
              }
              pvVar4 = *(void **)((int)pvVar1 + 0xac);
              if (pvVar4 != (void *)0x0) {
                puVar2 = *(undefined4 **)((int)pvVar4 + 0xa0);
                while (puVar2 != (undefined4 *)0x0) {
                  if ((void *)*puVar2 == (void *)0x0) {
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                  else {
                    free((void *)*puVar2);
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                }
                if (*(int *)((int)pvVar4 + 0xa8) != 0) {
                  FUN_0001b7e0();
                }
                if (*(int *)((int)pvVar4 + 0xac) != 0) {
                  FUN_0001b7e0();
                }
                free(pvVar4);
              }
              free(pvVar1);
            }
            pvVar1 = *(void **)((int)pvVar9 + 0xac);
            if (pvVar1 != (void *)0x0) {
              puVar2 = *(undefined4 **)((int)pvVar1 + 0xa0);
              while (puVar2 != (undefined4 *)0x0) {
                if ((void *)*puVar2 == (void *)0x0) {
                  puVar3 = (undefined4 *)puVar2[3];
                  free(puVar2);
                  puVar2 = puVar3;
                }
                else {
                  free((void *)*puVar2);
                  puVar3 = (undefined4 *)puVar2[3];
                  free(puVar2);
                  puVar2 = puVar3;
                }
              }
              pvVar4 = *(void **)((int)pvVar1 + 0xa8);
              if (pvVar4 != (void *)0x0) {
                puVar2 = *(undefined4 **)((int)pvVar4 + 0xa0);
                while (puVar2 != (undefined4 *)0x0) {
                  if ((void *)*puVar2 == (void *)0x0) {
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                  else {
                    free((void *)*puVar2);
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                }
                if (*(int *)((int)pvVar4 + 0xa8) != 0) {
                  FUN_0001b7e0();
                }
                if (*(int *)((int)pvVar4 + 0xac) != 0) {
                  FUN_0001b7e0();
                }
                free(pvVar4);
              }
              pvVar4 = *(void **)((int)pvVar1 + 0xac);
              if (pvVar4 != (void *)0x0) {
                puVar2 = *(undefined4 **)((int)pvVar4 + 0xa0);
                while (puVar2 != (undefined4 *)0x0) {
                  if ((void *)*puVar2 == (void *)0x0) {
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                  else {
                    free((void *)*puVar2);
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                }
                if (*(int *)((int)pvVar4 + 0xa8) != 0) {
                  FUN_0001b7e0();
                }
                if (*(int *)((int)pvVar4 + 0xac) != 0) {
                  FUN_0001b7e0();
                }
                free(pvVar4);
              }
              free(pvVar1);
            }
            free(pvVar9);
          }
          free(pvVar8);
        }
        free(pvVar7);
      }
      pvVar7 = *(void **)((int)pvVar6 + 0xac);
      if (pvVar7 != (void *)0x0) {
        puVar2 = *(undefined4 **)((int)pvVar7 + 0xa0);
        while (puVar3 = puVar2, puVar2 != (undefined4 *)0x0) {
          while ((void *)*puVar3 == (void *)0x0) {
            puVar2 = (undefined4 *)puVar3[3];
            free(puVar3);
            puVar3 = puVar2;
            if (puVar2 == (undefined4 *)0x0) goto LAB_00020434;
          }
          free((void *)*puVar3);
          puVar2 = (undefined4 *)puVar3[3];
          free(puVar3);
        }
LAB_00020434:
        pvVar8 = *(void **)((int)pvVar7 + 0xa8);
        if (pvVar8 != (void *)0x0) {
          puVar2 = *(undefined4 **)((int)pvVar8 + 0xa0);
          while (puVar2 != (undefined4 *)0x0) {
            if ((void *)*puVar2 == (void *)0x0) {
              puVar3 = (undefined4 *)puVar2[3];
              free(puVar2);
              puVar2 = puVar3;
            }
            else {
              free((void *)*puVar2);
              puVar3 = (undefined4 *)puVar2[3];
              free(puVar2);
              puVar2 = puVar3;
            }
          }
          pvVar9 = *(void **)((int)pvVar8 + 0xa8);
          if (pvVar9 != (void *)0x0) {
            puVar2 = *(undefined4 **)((int)pvVar9 + 0xa0);
            while (puVar2 != (undefined4 *)0x0) {
              if ((void *)*puVar2 == (void *)0x0) {
                puVar3 = (undefined4 *)puVar2[3];
                free(puVar2);
                puVar2 = puVar3;
              }
              else {
                free((void *)*puVar2);
                puVar3 = (undefined4 *)puVar2[3];
                free(puVar2);
                puVar2 = puVar3;
              }
            }
            pvVar1 = *(void **)((int)pvVar9 + 0xa8);
            if (pvVar1 != (void *)0x0) {
              puVar2 = *(undefined4 **)((int)pvVar1 + 0xa0);
              while (puVar2 != (undefined4 *)0x0) {
                if ((void *)*puVar2 == (void *)0x0) {
                  puVar3 = (undefined4 *)puVar2[3];
                  free(puVar2);
                  puVar2 = puVar3;
                }
                else {
                  free((void *)*puVar2);
                  puVar3 = (undefined4 *)puVar2[3];
                  free(puVar2);
                  puVar2 = puVar3;
                }
              }
              pvVar4 = *(void **)((int)pvVar1 + 0xa8);
              if (pvVar4 != (void *)0x0) {
                puVar2 = *(undefined4 **)((int)pvVar4 + 0xa0);
                while (puVar2 != (undefined4 *)0x0) {
                  if ((void *)*puVar2 == (void *)0x0) {
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                  else {
                    free((void *)*puVar2);
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                }
                if (*(int *)((int)pvVar4 + 0xa8) != 0) {
                  FUN_0001b7e0();
                }
                if (*(int *)((int)pvVar4 + 0xac) != 0) {
                  FUN_0001b7e0();
                }
                free(pvVar4);
              }
              pvVar4 = *(void **)((int)pvVar1 + 0xac);
              if (pvVar4 != (void *)0x0) {
                puVar2 = *(undefined4 **)((int)pvVar4 + 0xa0);
                while (puVar2 != (undefined4 *)0x0) {
                  if ((void *)*puVar2 == (void *)0x0) {
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                  else {
                    free((void *)*puVar2);
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                }
                if (*(int *)((int)pvVar4 + 0xa8) != 0) {
                  FUN_0001b7e0();
                }
                if (*(int *)((int)pvVar4 + 0xac) != 0) {
                  FUN_0001b7e0();
                }
                free(pvVar4);
              }
              free(pvVar1);
            }
            pvVar1 = *(void **)((int)pvVar9 + 0xac);
            if (pvVar1 != (void *)0x0) {
              puVar2 = *(undefined4 **)((int)pvVar1 + 0xa0);
              while (puVar2 != (undefined4 *)0x0) {
                if ((void *)*puVar2 == (void *)0x0) {
                  puVar3 = (undefined4 *)puVar2[3];
                  free(puVar2);
                  puVar2 = puVar3;
                }
                else {
                  free((void *)*puVar2);
                  puVar3 = (undefined4 *)puVar2[3];
                  free(puVar2);
                  puVar2 = puVar3;
                }
              }
              pvVar4 = *(void **)((int)pvVar1 + 0xa8);
              if (pvVar4 != (void *)0x0) {
                puVar2 = *(undefined4 **)((int)pvVar4 + 0xa0);
                while (puVar2 != (undefined4 *)0x0) {
                  if ((void *)*puVar2 == (void *)0x0) {
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                  else {
                    free((void *)*puVar2);
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                }
                if (*(int *)((int)pvVar4 + 0xa8) != 0) {
                  FUN_0001b7e0();
                }
                if (*(int *)((int)pvVar4 + 0xac) != 0) {
                  FUN_0001b7e0();
                }
                free(pvVar4);
              }
              pvVar4 = *(void **)((int)pvVar1 + 0xac);
              if (pvVar4 != (void *)0x0) {
                puVar2 = *(undefined4 **)((int)pvVar4 + 0xa0);
                while (puVar2 != (undefined4 *)0x0) {
                  if ((void *)*puVar2 == (void *)0x0) {
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                  else {
                    free((void *)*puVar2);
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                }
                if (*(int *)((int)pvVar4 + 0xa8) != 0) {
                  FUN_0001b7e0();
                }
                if (*(int *)((int)pvVar4 + 0xac) != 0) {
                  FUN_0001b7e0();
                }
                free(pvVar4);
              }
              free(pvVar1);
            }
            free(pvVar9);
          }
          pvVar9 = *(void **)((int)pvVar8 + 0xac);
          if (pvVar9 != (void *)0x0) {
            puVar2 = *(undefined4 **)((int)pvVar9 + 0xa0);
            while (puVar2 != (undefined4 *)0x0) {
              if ((void *)*puVar2 == (void *)0x0) {
                puVar3 = (undefined4 *)puVar2[3];
                free(puVar2);
                puVar2 = puVar3;
              }
              else {
                free((void *)*puVar2);
                puVar3 = (undefined4 *)puVar2[3];
                free(puVar2);
                puVar2 = puVar3;
              }
            }
            pvVar1 = *(void **)((int)pvVar9 + 0xa8);
            if (pvVar1 != (void *)0x0) {
              puVar2 = *(undefined4 **)((int)pvVar1 + 0xa0);
              while (puVar2 != (undefined4 *)0x0) {
                if ((void *)*puVar2 == (void *)0x0) {
                  puVar3 = (undefined4 *)puVar2[3];
                  free(puVar2);
                  puVar2 = puVar3;
                }
                else {
                  free((void *)*puVar2);
                  puVar3 = (undefined4 *)puVar2[3];
                  free(puVar2);
                  puVar2 = puVar3;
                }
              }
              pvVar4 = *(void **)((int)pvVar1 + 0xa8);
              if (pvVar4 != (void *)0x0) {
                puVar2 = *(undefined4 **)((int)pvVar4 + 0xa0);
                while (puVar2 != (undefined4 *)0x0) {
                  if ((void *)*puVar2 == (void *)0x0) {
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                  else {
                    free((void *)*puVar2);
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                }
                if (*(int *)((int)pvVar4 + 0xa8) != 0) {
                  FUN_0001b7e0();
                }
                if (*(int *)((int)pvVar4 + 0xac) != 0) {
                  FUN_0001b7e0();
                }
                free(pvVar4);
              }
              pvVar4 = *(void **)((int)pvVar1 + 0xac);
              if (pvVar4 != (void *)0x0) {
                puVar2 = *(undefined4 **)((int)pvVar4 + 0xa0);
                while (puVar2 != (undefined4 *)0x0) {
                  if ((void *)*puVar2 == (void *)0x0) {
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                  else {
                    free((void *)*puVar2);
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                }
                if (*(int *)((int)pvVar4 + 0xa8) != 0) {
                  FUN_0001b7e0();
                }
                if (*(int *)((int)pvVar4 + 0xac) != 0) {
                  FUN_0001b7e0();
                }
                free(pvVar4);
              }
              free(pvVar1);
            }
            pvVar1 = *(void **)((int)pvVar9 + 0xac);
            if (pvVar1 != (void *)0x0) {
              puVar2 = *(undefined4 **)((int)pvVar1 + 0xa0);
              while (puVar2 != (undefined4 *)0x0) {
                if ((void *)*puVar2 == (void *)0x0) {
                  puVar3 = (undefined4 *)puVar2[3];
                  free(puVar2);
                  puVar2 = puVar3;
                }
                else {
                  free((void *)*puVar2);
                  puVar3 = (undefined4 *)puVar2[3];
                  free(puVar2);
                  puVar2 = puVar3;
                }
              }
              pvVar4 = *(void **)((int)pvVar1 + 0xa8);
              if (pvVar4 != (void *)0x0) {
                puVar2 = *(undefined4 **)((int)pvVar4 + 0xa0);
                while (puVar2 != (undefined4 *)0x0) {
                  if ((void *)*puVar2 == (void *)0x0) {
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                  else {
                    free((void *)*puVar2);
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                }
                if (*(int *)((int)pvVar4 + 0xa8) != 0) {
                  FUN_0001b7e0();
                }
                if (*(int *)((int)pvVar4 + 0xac) != 0) {
                  FUN_0001b7e0();
                }
                free(pvVar4);
              }
              pvVar4 = *(void **)((int)pvVar1 + 0xac);
              if (pvVar4 != (void *)0x0) {
                puVar2 = *(undefined4 **)((int)pvVar4 + 0xa0);
                while (puVar2 != (undefined4 *)0x0) {
                  if ((void *)*puVar2 == (void *)0x0) {
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                  else {
                    free((void *)*puVar2);
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                }
                if (*(int *)((int)pvVar4 + 0xa8) != 0) {
                  FUN_0001b7e0();
                }
                if (*(int *)((int)pvVar4 + 0xac) != 0) {
                  FUN_0001b7e0();
                }
                free(pvVar4);
              }
              free(pvVar1);
            }
            free(pvVar9);
          }
          free(pvVar8);
        }
        pvVar8 = *(void **)((int)pvVar7 + 0xac);
        if (pvVar8 != (void *)0x0) {
          puVar2 = *(undefined4 **)((int)pvVar8 + 0xa0);
          while (puVar2 != (undefined4 *)0x0) {
            if ((void *)*puVar2 == (void *)0x0) {
              puVar3 = (undefined4 *)puVar2[3];
              free(puVar2);
              puVar2 = puVar3;
            }
            else {
              free((void *)*puVar2);
              puVar3 = (undefined4 *)puVar2[3];
              free(puVar2);
              puVar2 = puVar3;
            }
          }
          pvVar9 = *(void **)((int)pvVar8 + 0xa8);
          if (pvVar9 != (void *)0x0) {
            puVar2 = *(undefined4 **)((int)pvVar9 + 0xa0);
            while (puVar2 != (undefined4 *)0x0) {
              if ((void *)*puVar2 == (void *)0x0) {
                puVar3 = (undefined4 *)puVar2[3];
                free(puVar2);
                puVar2 = puVar3;
              }
              else {
                free((void *)*puVar2);
                puVar3 = (undefined4 *)puVar2[3];
                free(puVar2);
                puVar2 = puVar3;
              }
            }
            pvVar1 = *(void **)((int)pvVar9 + 0xa8);
            if (pvVar1 != (void *)0x0) {
              puVar2 = *(undefined4 **)((int)pvVar1 + 0xa0);
              while (puVar2 != (undefined4 *)0x0) {
                if ((void *)*puVar2 == (void *)0x0) {
                  puVar3 = (undefined4 *)puVar2[3];
                  free(puVar2);
                  puVar2 = puVar3;
                }
                else {
                  free((void *)*puVar2);
                  puVar3 = (undefined4 *)puVar2[3];
                  free(puVar2);
                  puVar2 = puVar3;
                }
              }
              pvVar4 = *(void **)((int)pvVar1 + 0xa8);
              if (pvVar4 != (void *)0x0) {
                puVar2 = *(undefined4 **)((int)pvVar4 + 0xa0);
                while (puVar2 != (undefined4 *)0x0) {
                  if ((void *)*puVar2 == (void *)0x0) {
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                  else {
                    free((void *)*puVar2);
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                }
                if (*(int *)((int)pvVar4 + 0xa8) != 0) {
                  FUN_0001b7e0();
                }
                if (*(int *)((int)pvVar4 + 0xac) != 0) {
                  FUN_0001b7e0();
                }
                free(pvVar4);
              }
              pvVar4 = *(void **)((int)pvVar1 + 0xac);
              if (pvVar4 != (void *)0x0) {
                puVar2 = *(undefined4 **)((int)pvVar4 + 0xa0);
                while (puVar2 != (undefined4 *)0x0) {
                  if ((void *)*puVar2 == (void *)0x0) {
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                  else {
                    free((void *)*puVar2);
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                }
                if (*(int *)((int)pvVar4 + 0xa8) != 0) {
                  FUN_0001b7e0();
                }
                if (*(int *)((int)pvVar4 + 0xac) != 0) {
                  FUN_0001b7e0();
                }
                free(pvVar4);
              }
              free(pvVar1);
            }
            pvVar1 = *(void **)((int)pvVar9 + 0xac);
            if (pvVar1 != (void *)0x0) {
              puVar2 = *(undefined4 **)((int)pvVar1 + 0xa0);
              while (puVar2 != (undefined4 *)0x0) {
                if ((void *)*puVar2 == (void *)0x0) {
                  puVar3 = (undefined4 *)puVar2[3];
                  free(puVar2);
                  puVar2 = puVar3;
                }
                else {
                  free((void *)*puVar2);
                  puVar3 = (undefined4 *)puVar2[3];
                  free(puVar2);
                  puVar2 = puVar3;
                }
              }
              pvVar4 = *(void **)((int)pvVar1 + 0xa8);
              if (pvVar4 != (void *)0x0) {
                puVar2 = *(undefined4 **)((int)pvVar4 + 0xa0);
                while (puVar2 != (undefined4 *)0x0) {
                  if ((void *)*puVar2 == (void *)0x0) {
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                  else {
                    free((void *)*puVar2);
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                }
                if (*(int *)((int)pvVar4 + 0xa8) != 0) {
                  FUN_0001b7e0();
                }
                if (*(int *)((int)pvVar4 + 0xac) != 0) {
                  FUN_0001b7e0();
                }
                free(pvVar4);
              }
              pvVar4 = *(void **)((int)pvVar1 + 0xac);
              if (pvVar4 != (void *)0x0) {
                puVar2 = *(undefined4 **)((int)pvVar4 + 0xa0);
                while (puVar2 != (undefined4 *)0x0) {
                  if ((void *)*puVar2 == (void *)0x0) {
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                  else {
                    free((void *)*puVar2);
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                }
                if (*(int *)((int)pvVar4 + 0xa8) != 0) {
                  FUN_0001b7e0();
                }
                if (*(int *)((int)pvVar4 + 0xac) != 0) {
                  FUN_0001b7e0();
                }
                free(pvVar4);
              }
              free(pvVar1);
            }
            free(pvVar9);
          }
          pvVar9 = *(void **)((int)pvVar8 + 0xac);
          if (pvVar9 != (void *)0x0) {
            puVar2 = *(undefined4 **)((int)pvVar9 + 0xa0);
            while (puVar2 != (undefined4 *)0x0) {
              if ((void *)*puVar2 == (void *)0x0) {
                puVar3 = (undefined4 *)puVar2[3];
                free(puVar2);
                puVar2 = puVar3;
              }
              else {
                free((void *)*puVar2);
                puVar3 = (undefined4 *)puVar2[3];
                free(puVar2);
                puVar2 = puVar3;
              }
            }
            pvVar1 = *(void **)((int)pvVar9 + 0xa8);
            if (pvVar1 != (void *)0x0) {
              puVar2 = *(undefined4 **)((int)pvVar1 + 0xa0);
              while (puVar2 != (undefined4 *)0x0) {
                if ((void *)*puVar2 == (void *)0x0) {
                  puVar3 = (undefined4 *)puVar2[3];
                  free(puVar2);
                  puVar2 = puVar3;
                }
                else {
                  free((void *)*puVar2);
                  puVar3 = (undefined4 *)puVar2[3];
                  free(puVar2);
                  puVar2 = puVar3;
                }
              }
              pvVar4 = *(void **)((int)pvVar1 + 0xa8);
              if (pvVar4 != (void *)0x0) {
                puVar2 = *(undefined4 **)((int)pvVar4 + 0xa0);
                while (puVar2 != (undefined4 *)0x0) {
                  if ((void *)*puVar2 == (void *)0x0) {
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                  else {
                    free((void *)*puVar2);
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                }
                if (*(int *)((int)pvVar4 + 0xa8) != 0) {
                  FUN_0001b7e0();
                }
                if (*(int *)((int)pvVar4 + 0xac) != 0) {
                  FUN_0001b7e0();
                }
                free(pvVar4);
              }
              pvVar4 = *(void **)((int)pvVar1 + 0xac);
              if (pvVar4 != (void *)0x0) {
                puVar2 = *(undefined4 **)((int)pvVar4 + 0xa0);
                while (puVar2 != (undefined4 *)0x0) {
                  if ((void *)*puVar2 == (void *)0x0) {
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                  else {
                    free((void *)*puVar2);
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                }
                if (*(int *)((int)pvVar4 + 0xa8) != 0) {
                  FUN_0001b7e0();
                }
                if (*(int *)((int)pvVar4 + 0xac) != 0) {
                  FUN_0001b7e0();
                }
                free(pvVar4);
              }
              free(pvVar1);
            }
            pvVar1 = *(void **)((int)pvVar9 + 0xac);
            if (pvVar1 != (void *)0x0) {
              puVar2 = *(undefined4 **)((int)pvVar1 + 0xa0);
              while (puVar2 != (undefined4 *)0x0) {
                if ((void *)*puVar2 == (void *)0x0) {
                  puVar3 = (undefined4 *)puVar2[3];
                  free(puVar2);
                  puVar2 = puVar3;
                }
                else {
                  free((void *)*puVar2);
                  puVar3 = (undefined4 *)puVar2[3];
                  free(puVar2);
                  puVar2 = puVar3;
                }
              }
              pvVar4 = *(void **)((int)pvVar1 + 0xa8);
              if (pvVar4 != (void *)0x0) {
                puVar2 = *(undefined4 **)((int)pvVar4 + 0xa0);
                while (puVar2 != (undefined4 *)0x0) {
                  if ((void *)*puVar2 == (void *)0x0) {
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                  else {
                    free((void *)*puVar2);
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                }
                if (*(int *)((int)pvVar4 + 0xa8) != 0) {
                  FUN_0001b7e0();
                }
                if (*(int *)((int)pvVar4 + 0xac) != 0) {
                  FUN_0001b7e0();
                }
                free(pvVar4);
              }
              pvVar4 = *(void **)((int)pvVar1 + 0xac);
              if (pvVar4 != (void *)0x0) {
                puVar2 = *(undefined4 **)((int)pvVar4 + 0xa0);
                while (puVar2 != (undefined4 *)0x0) {
                  if ((void *)*puVar2 == (void *)0x0) {
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                  else {
                    free((void *)*puVar2);
                    puVar3 = (undefined4 *)puVar2[3];
                    free(puVar2);
                    puVar2 = puVar3;
                  }
                }
                if (*(int *)((int)pvVar4 + 0xa8) != 0) {
                  FUN_0001b7e0();
                }
                if (*(int *)((int)pvVar4 + 0xac) != 0) {
                  FUN_0001b7e0();
                }
                free(pvVar4);
              }
              free(pvVar1);
            }
            free(pvVar9);
          }
          free(pvVar8);
        }
        free(pvVar7);
      }
      free(pvVar6);
    }
    free(pvVar5);
    *(undefined4 *)((int)param_1 + 0x360) = 0;
  }
  if (*(void **)((int)param_1 + 0x30c) != (void *)0x0) {
    free(*(void **)((int)param_1 + 0x30c));
  }
  if (*(void **)((int)param_1 + 0x35c) != (void *)0x0) {
    free(*(void **)((int)param_1 + 0x35c));
  }
  if ((int)*(void **)((int)param_1 + 0x2f4) - 1U < 0xfffffffe) {
    munmap(*(void **)((int)param_1 + 0x2f4),
           *(int *)((int)param_1 + 0x334) * *(int *)((int)param_1 + 0x2f8));
    pvVar5 = *(void **)((int)param_1 + 0x36c);
  }
  else {
    pvVar5 = *(void **)((int)param_1 + 0x36c);
  }
  if (pvVar5 != (void *)0x0) {
    free(pvVar5);
  }
  free(param_1);
  return;
}



/* ===== rkfsmk_start @ 00021474 size=8904 ===== */

/* WARNING: Type propagation algorithm not settling */

undefined4 rkfsmk_start(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  short sVar3;
  short sVar4;
  longlong lVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  char *__format;
  void *pvVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  tm *ptVar15;
  ssize_t sVar16;
  int iVar17;
  uint uVar18;
  byte bVar19;
  undefined2 uVar20;
  int iVar21;
  byte *pbVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  char *pcVar27;
  char *pcVar28;
  int *piVar29;
  size_t sVar30;
  uint uVar31;
  size_t sVar32;
  uint uVar33;
  uint uVar34;
  int iVar35;
  undefined4 *puVar36;
  int iVar37;
  int iVar38;
  uint extraout_r12;
  uint uVar39;
  int iVar40;
  int iVar41;
  bool bVar42;
  longlong lVar43;
  longlong lVar44;
  longlong lVar45;
  undefined8 uVar46;
  __off64_t _Var47;
  int local_98;
  uint local_8c;
  int local_84;
  uint local_74;
  uint local_68;
  
  iVar21 = DAT_00022460 + 0x2148c;
  if (param_1 == 0) {
    return 0xffffffff;
  }
  if (*(int *)(param_1 + 800) == 0x20) {
    pbVar22 = (byte *)(param_1 + 0x128);
  }
  else {
    pbVar22 = (byte *)(param_1 + 0x10c);
  }
  if (*(int *)(param_1 + 0xc4) != 0) {
    *(undefined1 *)(param_1 + 0xea) = 0x6d;
  }
  *(undefined4 *)(param_1 + 0xeb) = *(undefined4 *)(param_1 + 0x364);
  *(undefined4 *)(param_1 + 0xef) = *(undefined4 *)(param_1 + 0x368);
  if (*(int *)(param_1 + 0x304) != 0) {
    *(char *)(param_1 + 0xf5) = (char)*(int *)(param_1 + 0x304);
  }
  uVar23 = *(uint *)(param_1 + 0x348);
  if (uVar23 == 0) {
    uVar24 = (uint)*(byte *)(param_1 + 0xfd);
  }
  else {
    uVar24 = uVar23 & 0xff;
    *(char *)(param_1 + 0xfd) = (char)uVar23;
  }
  if (uVar24 == 0xf8) {
    bVar19 = 0x80;
  }
  else {
    bVar19 = 0;
  }
  *pbVar22 = bVar19;
  if (*(int *)(param_1 + 0x344) != 0) {
    *pbVar22 = (byte)*(undefined4 *)(param_1 + 0x340);
  }
  uVar23 = *(uint *)(param_1 + 800);
  if (uVar23 == 0x20) {
    *(undefined4 *)(param_1 + 0x308) = 0;
  }
  if (*(int *)(param_1 + 0xc4) == 0) {
    pbVar22[3] = (byte)*(undefined4 *)(param_1 + 200);
    pbVar22[4] = (byte)((uint)*(undefined4 *)(param_1 + 200) >> 8);
    pbVar22[5] = (byte)*(undefined2 *)(param_1 + 0xca);
    pbVar22[6] = *(byte *)(param_1 + 0xcb);
    iVar17 = DAT_00022464;
    if (*(int *)(param_1 + 0xc4) != 0) {
      uVar23 = *(uint *)(param_1 + 800);
      goto LAB_00021a48;
    }
    uVar6 = *(undefined4 *)(param_1 + 0xd0);
    *(undefined4 *)(pbVar22 + 7) = *(undefined4 *)(param_1 + 0xcc);
    *(undefined4 *)(pbVar22 + 0xb) = uVar6;
    bVar19 = *(byte *)(param_1 + 0xd6);
    *(undefined2 *)(pbVar22 + 0xf) = *(undefined2 *)(param_1 + 0xd4);
    pbVar22[0x11] = bVar19;
    uVar23 = *(uint *)(param_1 + 800);
    uVar1 = *(undefined1 *)(*(undefined2 **)(iVar21 + iVar17) + 1);
    *(undefined2 *)(param_1 + 0xe8) = **(undefined2 **)(iVar21 + iVar17);
    *(undefined1 *)(param_1 + 0xea) = uVar1;
    iVar17 = DAT_000224e4;
    if (uVar23 == 0x20) {
      *(undefined1 *)(param_1 + 0xe9) = 0x58;
      pvVar12 = *(void **)(iVar21 + iVar17);
      if (*(char *)((int)pvVar12 + 0x1a3) != '\0') {
        puts((char *)(DAT_000237e4 + 0x23500));
        uVar23 = *(uint *)(param_1 + 800);
      }
      *(undefined1 *)((int)pvVar12 + 0x1a3) = 0;
      memcpy((void *)(param_1 + 0x142),pvVar12,0x1a4);
      *(undefined1 *)(param_1 + 0x145) = 0x77;
      *(undefined1 *)(param_1 + 0x146) = 0x7c;
    }
    else {
      *(undefined1 *)(param_1 + 0xe9) = 0x3c;
      memcpy((void *)(param_1 + 0x126),*(void **)(iVar21 + iVar17),0x1c0);
    }
    uVar24 = *(uint *)(param_1 + 0x31c);
    *(undefined2 *)(param_1 + 0x2e6) = 0xaa55;
    if (uVar24 != 0) goto LAB_00021a68;
LAB_000215f4:
    if (uVar23 == 0x20) {
      uVar24 = 0x20;
    }
    else {
      uVar24 = 1;
    }
    uVar20 = (undefined2)uVar24;
    *(uint *)(param_1 + 0x31c) = uVar24;
  }
  else {
    *(undefined2 *)(param_1 + 0xf0) = *(undefined2 *)(param_1 + 200);
    *(char *)(param_1 + 0xf2) = (char)((uint)*(undefined4 *)(param_1 + 200) >> 0x10);
LAB_00021a48:
    uVar24 = *(uint *)(param_1 + 0x31c);
    *(undefined2 *)(param_1 + 0xe8) = **(undefined2 **)(iVar21 + DAT_00022468);
    if (uVar24 == 0) goto LAB_000215f4;
LAB_00021a68:
    bVar42 = uVar24 == 1;
    if ((int)uVar24 < 2) {
      bVar42 = uVar23 == 0x20;
    }
    if (bVar42) goto LAB_00021a78;
    uVar20 = (undefined2)uVar24;
  }
  iVar17 = *(int *)(param_1 + 0xc4);
  local_98 = *(int *)(param_1 + 0x318);
  *(undefined2 *)(param_1 + 0xf6) = uVar20;
  uVar25 = *(uint *)(param_1 + 0x310);
  *(char *)(param_1 + 0xf8) = (char)local_98;
  if ((iVar17 == 0) || (uVar23 == 0x20)) {
    *(uint *)(param_1 + 0x104) = uVar25;
  }
  else {
    if ((uVar25 & 0xffff0000) != 0) goto LAB_00021a78;
    *(short *)(param_1 + 0x104) = (short)uVar25;
  }
  uVar25 = *(uint *)(param_1 + 0x334);
  uVar46 = FUN_00023d54(*(uint *)(param_1 + 0x328) << 10,
                        *(int *)(param_1 + 0x32c) << 10 | *(uint *)(param_1 + 0x328) >> 0x16,uVar25,
                        0);
  uVar33 = *(uint *)(param_1 + 0x354);
  if ((int)((int)((ulonglong)uVar46 >> 0x20) + ((int)uVar33 >> 0x1f) +
           (uint)CARRY4((uint)uVar46,uVar33)) < 1) {
    uVar33 = uVar33 + (uint)uVar46;
    uVar31 = *(uint *)(param_1 + 0x308);
    *(uint *)(param_1 + 0x300) = uVar33;
    if (iVar17 != 0) {
      if (uVar23 != 0) goto LAB_00021c94;
      if (uVar33 != 0x1680 && (uVar33 != 0xb40 && (uVar33 != 0x960 && uVar33 != 0x5a0)))
      goto LAB_00022524;
      uVar23 = 0xc;
      goto LAB_0002244c;
    }
    local_74 = FUN_00023b84(uVar25 + uVar31 * 0x20 + -1,uVar25);
    if (uVar33 < 0x2001) {
      *(undefined4 *)(param_1 + 0x350) = 0;
      local_8c = 0;
      goto LAB_000216e0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x300) = 0xffffffff;
    uVar31 = *(uint *)(param_1 + 0x308);
    *(ulonglong *)(param_1 + 0x328) = (ulonglong)uVar25 * 0xffffffff >> 10;
    if (iVar17 != 0) {
      uVar33 = 0xffffffff;
      if (uVar23 != 0) goto LAB_00021c94;
LAB_00022524:
      uVar23 = 0x10;
LAB_0002244c:
      *(uint *)(param_1 + 800) = uVar23;
LAB_00021c94:
      uVar26 = *(uint *)(param_1 + 0x304);
      local_84 = *(int *)(param_1 + 0x338);
      if (uVar26 == 0) {
        uVar26 = 2;
      }
      local_8c = uVar26 & 0xff;
      *(char *)(param_1 + 0xf5) = (char)uVar26;
      if ((local_84 == 0) && (0xfffb < uVar33)) {
        do {
          uVar33 = uVar33 >> 1;
          uVar25 = uVar25 << 1;
        } while (0xfffb < uVar33);
        *(uint *)(param_1 + 0x334) = uVar25;
        *(uint *)(param_1 + 0x300) = uVar33;
      }
      piVar29 = (int *)(DAT_00022470 + 0x21cf0);
      pcVar27 = (char *)(DAT_00022474 + 0x21cfc);
      pcVar28 = (char *)(DAT_00022478 + 0x21d08);
      do {
        iVar11 = FUN_00023b84(uVar25 + uVar31 * 0x20 + -1,uVar25);
        iVar8 = local_98 * uVar23;
        iVar17 = iVar8 + 7;
        if (-1 < iVar8) {
          iVar17 = iVar8;
        }
        if (iVar8 < 0) {
          iVar8 = iVar8 + 3;
        }
        uVar33 = uVar33 - (iVar11 + uVar24);
        lVar43 = (ulonglong)uVar25 * (ulonglong)uVar33;
        uVar26 = (uint)lVar43;
        uVar7 = uVar26 - (iVar8 >> 2);
        iVar17 = FUN_00023c80(uVar7 * 2,
                              ((int)((ulonglong)lVar43 >> 0x20) -
                              ((iVar8 >> 0x1f) + (uint)(uVar26 < (uint)(iVar8 >> 2)))) * 2 +
                              (uint)CARRY4(uVar7,uVar7),(uVar25 * local_8c + (iVar17 >> 3)) * 2);
        uVar7 = FUN_00023b84(uVar25 + (uVar23 * (iVar17 + 2) >> 3) + -1,uVar25);
        uVar26 = FUN_00023abc(uVar33 - uVar7 * local_98,local_8c);
        uVar33 = FUN_00023abc(uVar25 * uVar7 * 8,uVar23);
        if (uVar23 == 0x20) {
          uVar34 = 0xffffff0;
        }
        else {
          uVar34 = (1 << (uVar23 & 0xff)) - 0x10;
        }
        if (uVar34 < uVar33) {
          if (1 < *piVar29) {
            __format = pcVar27;
            if (uVar33 - 2 < uVar26) {
              __format = pcVar28;
            }
LAB_00021d34:
            printf(__format);
            local_84 = *(int *)(param_1 + 0x338);
          }
        }
        else {
          if (uVar26 <= uVar33 - 2) {
            if (uVar25 < 0x4001) {
              uVar1 = (undefined1)(uVar25 >> 8);
              uVar2 = (undefined1)(uVar31 >> 8);
              if (uVar23 == 0x20) {
                *(undefined1 *)(param_1 + 0xf4) = uVar1;
                *(uint *)(param_1 + 0x10c) = uVar7;
                *(char *)(param_1 + 0xf3) = (char)uVar25;
                *(char *)(param_1 + 0xf9) = (char)uVar31;
                *(undefined1 *)(param_1 + 0xfa) = uVar2;
                *(undefined2 *)(param_1 + 0xfe) = 0;
                goto LAB_00021bd8;
              }
              *(short *)(param_1 + 0xfe) = (short)uVar7;
              *(char *)(param_1 + 0xf3) = (char)uVar25;
              *(undefined1 *)(param_1 + 0xf4) = uVar1;
              *(char *)(param_1 + 0xf9) = (char)uVar31;
              *(undefined1 *)(param_1 + 0xfa) = uVar2;
              goto LAB_00021eb0;
            }
            goto LAB_00021a78;
          }
          if (1 < *(int *)(DAT_0002247c + 0x21d24)) {
            __format = (char *)(DAT_00022480 + 0x21d38);
            goto LAB_00021d34;
          }
        }
        if (local_84 != 0) goto LAB_00021a78;
        uVar25 = *(int *)(param_1 + 0x334) * 2;
        *(uint *)(param_1 + 0x334) = uVar25;
        uVar33 = *(uint *)(param_1 + 0x300) >> 1;
        *(uint *)(param_1 + 0x300) = uVar33;
        if (0x4000 < uVar25) goto LAB_00021a78;
        local_98 = *(int *)(param_1 + 0x318);
        uVar31 = *(uint *)(param_1 + 0x308);
        uVar24 = *(uint *)(param_1 + 0x31c);
        uVar23 = *(uint *)(param_1 + 800);
        local_8c = (uint)*(byte *)(param_1 + 0xf5);
      } while( true );
    }
    uVar33 = 0xffffffff;
    local_74 = FUN_00023b84(uVar25 + uVar31 * 0x20 + -1,uVar25);
  }
  local_8c = *(int *)(param_1 + 0x350);
LAB_000216e0:
  local_68 = *(uint *)(param_1 + 0x304);
  iVar17 = local_98 * 3;
  bVar42 = local_68 == 0;
  uVar26 = local_68;
  if (bVar42) {
    uVar26 = 0x80;
  }
  if (bVar42) {
    local_68 = uVar26;
  }
  if (!bVar42) {
    uVar31 = local_68 & 0xff;
  }
  lVar43 = VectorShiftRight(CONCAT44(iVar17,iVar17),0x20);
  if (bVar42) {
    uVar31 = (uint)*(byte *)(param_1 + 0xf5);
  }
  else {
    *(char *)(param_1 + 0xf5) = (char)uVar31;
  }
  lVar44 = VectorShiftRight(CONCAT44(local_98 << 3,local_98 << 3),0x20);
  lVar45 = VectorShiftRight(CONCAT44(local_98,local_98),0x20);
  do {
    uVar26 = local_74;
    uVar34 = uVar24;
    if (local_8c != 0) {
      uVar26 = (local_74 - 1) + uVar31 & -uVar31;
      uVar34 = (uVar24 - 1) + uVar31 & -uVar31;
    }
    uVar34 = uVar33 - uVar34;
    uVar26 = uVar34 - uVar26;
    lVar5 = (ulonglong)uVar26 * (ulonglong)uVar25 + lVar43;
    uVar7 = (uint)lVar5;
    iVar8 = FUN_00023c80(uVar7 * 2,(int)((ulonglong)lVar5 >> 0x20) * 2 + (uint)CARRY4(uVar7,uVar7),
                         iVar17 + uVar31 * uVar25 * 2,0);
    uVar9 = FUN_00023b84(uVar25 + (iVar8 * 3 + 7U >> 1) + -1,uVar25);
    if (local_8c != 0) {
      uVar9 = -uVar31 & (uVar31 - 1) + uVar9;
    }
    uVar10 = FUN_00023abc(uVar26 - local_98 * uVar9,uVar31);
    uVar7 = uVar9 * uVar25 * 2;
    if (uVar7 < 0x2fd3) {
      uVar18 = (uint)((ulonglong)uVar7 * 0xaaaaaaab >> 0x20);
      uVar39 = extraout_r12;
    }
    else {
      uVar39 = 0xfee;
      uVar18 = uVar7;
    }
    iVar8 = uVar31 * uVar25 + local_98 * 2;
    if (uVar7 < 0x2fd3) {
      uVar39 = (uVar18 >> 1) - 2;
    }
    if (uVar39 < uVar10) {
      uVar10 = 0;
    }
    iVar11 = FUN_00023c80((int)(lVar5 + lVar45),(int)((ulonglong)(lVar5 + lVar45) >> 0x20),iVar8);
    uVar7 = FUN_00023b84(uVar25 + iVar11 * 2 + 3,uVar25);
    if (local_8c != 0) {
      uVar7 = -uVar31 & (uVar31 - 1) + uVar7;
    }
    uVar26 = FUN_00023abc(uVar26 - local_98 * uVar7,uVar31);
    if (uVar7 * uVar25 < 0x1ffe2) {
      uVar39 = (uVar7 * uVar25 >> 1) - 2;
    }
    else {
      uVar39 = 0xffee;
    }
    if (uVar39 < uVar26) {
      uVar26 = 0;
LAB_0002190c:
      if (*(int *)(param_1 + 0x330) == 0) {
        uVar26 = 0;
      }
      else if (uVar23 != 0x10) {
        uVar26 = 0;
      }
    }
    else if (uVar26 < 0xff5) goto LAB_0002190c;
    lVar5 = (ulonglong)uVar34 * (ulonglong)uVar25 + lVar44;
    iVar8 = FUN_00023c80((int)lVar5,(int)((ulonglong)lVar5 >> 0x20),local_98 * 2 + iVar8,0);
    uVar39 = FUN_00023b84(uVar25 + iVar8 * 4 + 7,uVar25);
    if (local_8c != 0) {
      uVar39 = -uVar31 & (uVar31 - 1) + uVar39;
    }
    uVar34 = FUN_00023abc(uVar34 - local_98 * uVar39,uVar31);
    if (uVar39 * uVar25 < 0x3fffffc4) {
      uVar18 = uVar39 * uVar25 >> 2;
    }
    else {
      uVar18 = 0xffffff0;
    }
    if ((uVar34 - 1 < 0xfff8) && ((*(int *)(param_1 + 0x330) == 0 || (uVar23 != 0x20)))) {
      uVar34 = 0;
    }
    else if (uVar18 < uVar34) {
      uVar34 = 0;
    }
    if (((uVar10 != 0) && (uVar23 == 0 || uVar23 == 0xc)) ||
       ((uVar26 != 0 && ((uVar23 & 0xffffffef) == 0)))) break;
    if ((uVar34 != 0) && (uVar23 == 0x20)) goto LAB_000228c4;
    uVar18 = uVar31 << 1;
    uVar31 = uVar18 & 0xff;
    *(char *)(param_1 + 0xf5) = (char)uVar18;
    if ((uVar31 == 0) || ((int)local_68 < (int)uVar31)) break;
  } while( true );
  if (uVar23 == 0) {
    if (uVar10 < uVar26) {
      uVar23 = 0x10;
    }
    else {
      uVar23 = 0xc;
    }
    *(uint *)(param_1 + 800) = uVar23;
  }
  iVar8 = DAT_000224e0;
  iVar17 = DAT_0002246c;
  if (uVar23 == 0x10) {
    *(short *)(param_1 + 0xfe) = (short)uVar7;
    uVar6 = *(undefined4 *)(iVar8 + 0x22918);
    *(undefined4 *)(pbVar22 + 0x12) = *(undefined4 *)(iVar8 + 0x22914);
    *(undefined4 *)(pbVar22 + 0x16) = uVar6;
LAB_00021b68:
    uVar24 = *(uint *)(param_1 + 0x31c);
    uVar23 = *(uint *)(param_1 + 0x334);
    if (*(int *)(param_1 + 0x350) == 0) {
      *(short *)(param_1 + 0xf6) = (short)uVar24;
      iVar8 = *(int *)(param_1 + 0x308);
      iVar17 = *(int *)(param_1 + 800);
    }
    else {
      uVar25 = (uint)*(byte *)(param_1 + 0xf5);
      uVar24 = (uVar24 + uVar25) - 1 & -uVar25;
      iVar17 = *(int *)(param_1 + 800);
      iVar8 = (uVar23 >> 5) * ((uVar25 - 1) + local_74 & -uVar25);
      *(uint *)(param_1 + 0x31c) = uVar24;
      *(short *)(param_1 + 0xf6) = (short)uVar24;
      *(int *)(param_1 + 0x308) = iVar8;
    }
    *(char *)(param_1 + 0xf3) = (char)uVar23;
    *(char *)(param_1 + 0xf9) = (char)iVar8;
    *(char *)(param_1 + 0xf4) = (char)(uVar23 >> 8);
    *(char *)(param_1 + 0xfa) = (char)((uint)iVar8 >> 8);
    if (iVar17 == 0x20) {
LAB_00021bd8:
      iVar17 = *(int *)(param_1 + 0x324);
      *(undefined4 *)(param_1 + 0x110) = 0;
      *(undefined4 *)(param_1 + 0x114) = 3;
      *(undefined2 *)(param_1 + 0x118) = 1;
      if (iVar17 == 0) {
        if ((int)uVar24 < 7) {
          if ((int)uVar24 < 1) {
            uVar24 = 1;
          }
          uVar24 = uVar24 - 1;
          uVar23 = uVar24 & 0xffff;
        }
        else {
          uVar23 = 6;
          uVar24 = uVar23;
        }
        uVar20 = (undefined2)uVar23;
        *(uint *)(param_1 + 0x324) = uVar24;
      }
      else {
        if ((iVar17 == 1) || ((int)uVar24 <= iVar17)) goto LAB_00021a78;
        uVar20 = (undefined2)iVar17;
      }
      *(undefined2 *)(param_1 + 0x11a) = uVar20;
      *(undefined8 *)(param_1 + 0x11c) = 0;
      *(undefined8 *)(param_1 + 0x120) = 0;
      uVar23 = *(uint *)(param_1 + 0x300);
      if (*(int *)(param_1 + 0xc4) != 0) goto LAB_00021ec0;
LAB_00021c50:
      if (uVar23 < 0x10000) {
        *(char *)(param_1 + 0xfb) = (char)uVar23;
        *(undefined4 *)(param_1 + 0x108) = 0;
        *(char *)(param_1 + 0xfc) = (char)(uVar23 >> 8);
      }
      else {
        *(undefined1 *)(param_1 + 0xfb) = 0;
        *(undefined1 *)(param_1 + 0xfc) = 0;
        *(uint *)(param_1 + 0x108) = uVar23;
      }
      pbVar22[2] = 0x29;
    }
    else {
LAB_00021eb0:
      uVar23 = *(uint *)(param_1 + 0x300);
      if (*(int *)(param_1 + 0xc4) == 0) goto LAB_00021c50;
LAB_00021ec0:
      if (0xfffa < uVar23) goto LAB_00021a78;
      *(char *)(param_1 + 0xfb) = (char)uVar23;
      *(char *)(param_1 + 0xfc) = (char)(uVar23 >> 8);
    }
    if (uVar26 != 0) {
      uVar23 = *(uint *)(param_1 + 0x334);
      *(uint *)(param_1 + 0x2fc) = uVar26 + 2;
      iVar8 = *(int *)(param_1 + 0x318);
      iVar17 = FUN_00023b84(uVar23 + *(int *)(param_1 + 0x308) * 0x20 + -1,uVar23);
      iVar17 = (uVar23 >> 9) * (uVar7 * iVar8 + iVar17 + *(int *)(param_1 + 0x31c));
      *(int *)(param_1 + 0x2e8) = iVar17;
      iVar17 = (iVar17 + 1) / 2;
      *(int *)(param_1 + 0x2ec) = iVar17;
      uVar24 = iVar17 + 0x20;
      uVar23 = (int)uVar24 >> 0x1f;
      bVar42 = uVar23 <= *(uint *)(param_1 + 0x32c);
      if (*(uint *)(param_1 + 0x32c) == uVar23) {
        bVar42 = uVar24 <= *(uint *)(param_1 + 0x328);
      }
      if (bVar42) {
        if (*(int *)(DAT_00022484 + 0x21f54) != 0) {
          uVar23 = *(uint *)(param_1 + 200);
          if (*(int *)(param_1 + 0xc4) != 0) {
            uVar23 = uVar23 & 0xffffff;
          }
          printf((char *)(DAT_00022488 + 0x21f7c),uVar23);
          iVar17 = strcmp((char *)(param_1 + 0xcc),(char *)(DAT_0002248c + 0x21f8c));
          if (iVar17 != 0) {
            printf((char *)(DAT_000224e8 + 0x22a40),(char *)(param_1 + 0xcc));
          }
          printf((char *)(DAT_00022490 + 0x21fa4),*(undefined4 *)(param_1 + 0x310));
          printf((char *)(DAT_00022494 + 0x21fb4),*(undefined4 *)(param_1 + 0x334));
          printf((char *)(DAT_00022498 + 0x21fc8),(uint)*pbVar22);
          printf((char *)(DAT_0002249c + 0x21fd8),(uint)*(byte *)(param_1 + 0xfd));
          printf((char *)(DAT_000224a0 + 0x21fe8),*(undefined4 *)(param_1 + 0x300));
          printf((char *)(DAT_000224a4 + 0x21ff8),*(undefined4 *)(param_1 + 0x31c));
          printf((char *)(DAT_000224a8 + 0x22008),(uint)*(byte *)(param_1 + 0xf8));
          printf((char *)(DAT_000224ac + 0x22018),(uint)*(byte *)(param_1 + 0xf5));
          printf((char *)(DAT_000224b0 + 0x22028),uVar7);
          printf((char *)(DAT_000224b4 + 0x22038),uVar26);
          printf((char *)(DAT_000224b8 + 0x2204c),(uint)*(ushort *)(param_1 + 0x102));
          printf((char *)(DAT_000224bc + 0x22060),(uint)*(ushort *)(param_1 + 0x100));
          if (*(int *)(param_1 + 800) != 0x20) {
            uVar6 = FUN_00023b84(*(int *)(param_1 + 0x334) +
                                 ((uint)*(byte *)(param_1 + 0xf9) +
                                 (uint)*(byte *)(param_1 + 0xfa) * 0x100) * 0x20 + -1);
            printf((char *)(DAT_000224c0 + 0x2209c),*(undefined4 *)(param_1 + 0x308));
            printf((char *)(DAT_000224c4 + 0x220ac),uVar6);
          }
          iVar8 = *(int *)(param_1 + 0x318);
        }
        if (*(int *)(param_1 + 0x34c) == 0) {
          uVar7 = 1;
        }
        *(uint *)(param_1 + 0x2f8) = uVar7;
        if (iVar8 != 1) {
          printf((char *)(DAT_000237e8 + 0x23528),iVar8);
          local_8c = 0xffffffff;
          goto LAB_00021a80;
        }
        pvVar12 = mmap64((void *)0x0,uVar7 * *(int *)(param_1 + 0x334),3,1,*(int *)(param_1 + 0xd8),
                         (ulonglong)(uint)(*(int *)(param_1 + 0x31c) * *(int *)(param_1 + 0x334)));
        *(void **)(param_1 + 0x2f4) = pvVar12;
        if (pvVar12 == (void *)0xffffffff) {
          piVar29 = __errno_location();
          printf((char *)(DAT_000237ec + 0x236c8),*piVar29);
          local_8c = 0xffffffff;
          goto LAB_00021a80;
        }
        memset(pvVar12,0,*(int *)(param_1 + 0x334) * *(int *)(param_1 + 0x2f8));
        iVar17 = FUN_0001b650(param_1,0,0xffffffff);
        if (iVar17 == 0) {
          FUN_0001b650(param_1,1,0xffffffff);
          **(undefined1 **)(param_1 + 0x2f4) = *(undefined1 *)(param_1 + 0xfd);
          if (*(int *)(param_1 + 800) == 0x20) {
            if (*(uint *)(param_1 + 0x2fc) < 4) goto LAB_00021a78;
            *(undefined1 *)(*(int *)(param_1 + 0x2f4) + 0xc) = 0xff;
            *(undefined1 *)(*(int *)(param_1 + 0x2f4) + 0xd) = 0xff;
            *(undefined1 *)(*(int *)(param_1 + 0x2f4) + 0xe) = 0xff;
            *(undefined1 *)(*(int *)(param_1 + 0x2f4) + 0xf) = 0xf;
            if (*(int *)(param_1 + 800) != 0x20) goto LAB_00022160;
            iVar17 = *(int *)(param_1 + 0x334) * (uint)*(byte *)(param_1 + 0xf5);
          }
          else {
LAB_00022160:
            iVar17 = ((uint)*(byte *)(param_1 + 0xf9) + (uint)*(byte *)(param_1 + 0xfa) * 0x100) *
                     0x20;
          }
          *(int *)(param_1 + 0xac) = iVar17;
          iVar17 = FUN_0001b650(param_1,2,0xffffff7);
          if (iVar17 == 0) {
            sVar32 = *(size_t *)(param_1 + 0xac);
            puVar13 = calloc(sVar32,1);
            *(undefined8 **)(param_1 + 0x36c) = puVar13;
            if (puVar13 != (undefined8 *)0x0) {
              iVar11 = *(int *)(param_1 + 0x360);
              iVar38 = *(int *)(param_1 + 0xa8);
              iVar35 = *(int *)(param_1 + 0x2fc);
              iVar17 = FUN_00023d54(*(undefined4 *)(iVar11 + 0x90),*(undefined4 *)(iVar11 + 0x94),
                                    sVar32,(int)sVar32 >> 0x1f);
              iVar8 = iVar35 - iVar17;
              if (iVar38 != 0) {
                *puVar13 = DAT_00022458;
                iVar38 = FUN_00023abc(iVar38,sVar32);
                *(int *)(puVar13 + 2) = iVar35;
                *(int *)(puVar13 + 1) = iVar38;
                iVar8 = FUN_00023abc(iVar8,iVar38);
                iVar35 = iVar35 - iVar38 * (iVar8 + -1);
                iVar8 = iVar35 - iVar17;
                *(int *)((int)puVar13 + 0xc) = iVar35;
              }
              iVar17 = *(int *)(iVar11 + 0x8c);
              *(int *)(param_1 + 0xb4) = iVar8;
              *(undefined4 *)(param_1 + 0xb0) = 4;
              puVar14 = calloc(0x10,1);
              if (iVar17 != 0) {
                pvVar12 = calloc(sVar32,1);
                *puVar14 = pvVar12;
              }
              puVar36 = *(undefined4 **)(iVar11 + 0xa0);
              puVar14[2] = 3;
              if (puVar36 == (undefined4 *)0x0) {
                *(ulonglong *)(iVar11 + 0xa0) = CONCAT44(puVar14,puVar14);
              }
              else {
                *(undefined4 **)(*(int *)(iVar11 + 0xa4) + 0xc) = puVar14;
                *(undefined4 **)(iVar11 + 0xa4) = puVar14;
                puVar14 = puVar36;
              }
              iVar17 = memcmp((undefined4 *)(param_1 + 0xcc),(void *)(DAT_000224c8 + 0x2227c),0xb);
              if (iVar17 != 0) {
                puVar14 = (undefined4 *)*puVar14;
                if (*(int *)(param_1 + 0x358) == 0) {
                  ptVar15 = localtime((time_t *)(param_1 + 0x2f0));
                }
                else {
                  ptVar15 = gmtime((time_t *)(param_1 + 0x2f0));
                }
                uVar6 = *(undefined4 *)(param_1 + 0xd0);
                *puVar14 = *(undefined4 *)(param_1 + 0xcc);
                puVar14[1] = uVar6;
                uVar20 = *(undefined2 *)(param_1 + 0xd4);
                uVar1 = *(undefined1 *)(param_1 + 0xd6);
                *(undefined1 *)((int)puVar14 + 0xb) = 8;
                *(undefined2 *)(puVar14 + 2) = uVar20;
                *(undefined1 *)((int)puVar14 + 10) = uVar1;
                *(undefined1 *)(puVar14 + 3) = 0;
                iVar8 = ptVar15->tm_year;
                iVar35 = ptVar15->tm_mon;
                iVar41 = ptVar15->tm_mday;
                iVar40 = ptVar15->tm_min;
                iVar37 = ptVar15->tm_sec;
                iVar38 = ptVar15->tm_hour;
                *(undefined1 *)((int)puVar14 + 0xd) = 0;
                iVar17 = *(int *)(param_1 + 0x360);
                sVar3 = ((short)iVar8 + -0x50) * 0x200 + ((short)iVar35 + 1) * 0x20 + (short)iVar41;
                sVar4 = (short)iVar40 * 0x20 + (short)(iVar37 >> 1) + (short)iVar38 * 0x800;
                *(short *)(puVar14 + 6) = sVar3;
                iVar17 = *(int *)(iVar17 + 0xa0);
                *(short *)(puVar14 + 4) = sVar3;
                *(short *)((int)puVar14 + 0x12) = sVar3;
                *(short *)((int)puVar14 + 0x16) = sVar4;
                *(short *)((int)puVar14 + 0xe) = sVar4;
                *(undefined1 *)(puVar14 + 5) = 0;
                *(undefined1 *)((int)puVar14 + 0x15) = 0;
                *(undefined1 *)((int)puVar14 + 0x1a) = 0;
                *(undefined1 *)((int)puVar14 + 0x1b) = 0;
                *(undefined1 *)(puVar14 + 7) = 0;
                *(undefined1 *)((int)puVar14 + 0x1d) = 0;
                *(undefined1 *)((int)puVar14 + 0x1e) = 0;
                *(undefined1 *)((int)puVar14 + 0x1f) = 0;
                *(int *)(iVar17 + 4) = *(int *)(iVar17 + 4) + 1;
              }
              FUN_0001caf4(param_1,iVar11);
              iVar17 = FUN_0001cf38(param_1,iVar11);
              if (iVar17 == 0) {
                iVar17 = *(int *)(param_1 + 800);
                sVar32 = *(size_t *)(param_1 + 0x334);
                if (iVar17 == 0x20) {
                  puVar14 = calloc(sVar32,1);
                  *(undefined4 **)(param_1 + 0x35c) = puVar14;
                  if (puVar14 == (undefined4 *)0x0) goto LAB_00021a78;
                  iVar8 = *(int *)(param_1 + 0xbc);
                  puVar14[0x7b] = *(undefined4 *)(param_1 + 0xb0);
                  puVar14[0x7a] = uVar26 - iVar8;
                  *puVar14 = 0x41615252;
                  puVar14[0x79] = 0x61417272;
                  *(undefined2 *)((int)puVar14 + 0x1fe) = 0xaa55;
                }
                pvVar12 = calloc(sVar32,1);
                *(void **)(param_1 + 0x30c) = pvVar12;
                if (pvVar12 != (void *)0x0) {
                  if (*(int *)(param_1 + 0xc0) != 0) {
                    if (*(int *)(DAT_000224cc + 0x22610) != 0) {
                      printf((char *)(DAT_000224ec + 0x22a80));
                      fflush((FILE *)**(undefined4 **)(iVar21 + DAT_000224f0));
                    }
                    iVar21 = DAT_000224d0;
                    uVar23 = 0x10;
                    *(undefined4 *)(param_1 + 0xe0) = 0;
                    *(undefined4 *)(param_1 + 0xe4) = 0;
                    uVar24 = 0;
                    uVar25 = 0;
                    while( true ) {
                      uVar33 = *(uint *)(param_1 + 0x328);
                      uVar31 = *(uint *)(param_1 + 0x32c);
                      bVar42 = uVar25 <= uVar31;
                      if (uVar31 == uVar25) {
                        bVar42 = uVar24 <= uVar33;
                      }
                      if (!bVar42 || uVar31 == uVar25 && uVar33 == uVar24) break;
                      uVar26 = uVar25 + CARRY4(uVar24,uVar23);
                      iVar17 = uVar24 * 0x400;
                      bVar42 = uVar31 <= uVar26;
                      if (uVar26 == uVar31) {
                        bVar42 = uVar33 <= uVar24 + uVar23;
                      }
                      uVar25 = uVar25 << 10 | uVar24 >> 0x16;
                      if (!bVar42 || uVar26 == uVar31 && uVar24 + uVar23 == uVar33) {
                        _Var47 = lseek64(*(int *)(param_1 + 0xd8),CONCAT44(uVar25,iVar17),0);
                        uVar33 = uVar23;
                        if (_Var47 == CONCAT44(uVar25,iVar17)) goto LAB_000226c4;
                        uVar24 = *(int *)(param_1 + 0xe0) - 1;
                        uVar25 = *(int *)(param_1 + 0xe4) - (uint)(*(int *)(param_1 + 0xe0) == 0);
                        *(uint *)(param_1 + 0xe0) = uVar24;
                        *(uint *)(param_1 + 0xe4) = uVar25;
                        goto LAB_00022718;
                      }
                      uVar33 = uVar33 - uVar24;
                      _Var47 = lseek64(*(int *)(param_1 + 0xd8),CONCAT44(uVar25,iVar17),0);
                      if (_Var47 == CONCAT44(uVar25,iVar17)) {
LAB_000226c4:
                        uVar23 = read(*(int *)(param_1 + 0xd8),(void *)(iVar21 + 0x22634),
                                      uVar33 << 10);
                        uVar31 = (int)(uVar23 & ~((int)uVar23 >> 0x1f)) >> 10;
                        uVar46 = VectorShiftRight(CONCAT44(uVar31,uVar31),0x20);
                      }
                      else {
                        uVar46 = 0xffffffffffffffff;
                        uVar31 = 0xffffffff;
                      }
                      uVar23 = 0x10;
                      uVar24 = (uint)uVar46 + *(uint *)(param_1 + 0xe0);
                      uVar25 = (int)((ulonglong)uVar46 >> 0x20) + *(int *)(param_1 + 0xe4) +
                               (uint)CARRY4((uint)uVar46,*(uint *)(param_1 + 0xe0));
                      *(uint *)(param_1 + 0xe0) = uVar24;
                      *(uint *)(param_1 + 0xe4) = uVar25;
                      if (uVar31 != uVar33) {
LAB_00022718:
                        uVar23 = *(uint *)(param_1 + 0x2ec);
                        iVar17 = (int)uVar23 >> 0x1f;
                        if ((int)(uVar25 - (iVar17 + (uint)(uVar24 < uVar23))) < 0 !=
                            (SBORROW4(uVar25,iVar17) !=
                            SBORROW4(uVar25 - iVar17,(uint)(uVar24 < uVar23)))) goto LAB_000227f0;
                        iVar17 = 0;
                        while( true ) {
                          iVar11 = *(int *)(param_1 + 0x2e8);
                          uVar23 = iVar17 + uVar24 * 2;
                          uVar6 = FUN_00023b84(uVar23 - iVar11,*(undefined1 *)(param_1 + 0xf5));
                          iVar8 = FUN_00023abc(uVar6,*(uint *)(param_1 + 0x334) >> 9);
                          if ((iVar11 <= (int)uVar23) && (uVar23 < *(uint *)(param_1 + 0x300))) {
                            FUN_0001b650(param_1,iVar8 + 2);
                            uVar24 = *(uint *)(param_1 + 0xe0);
                            uVar25 = *(uint *)(param_1 + 0xe4);
                          }
                          if (iVar17 == 1) break;
                          iVar17 = 1;
                        }
                        bVar42 = 0xfffffffe < uVar24;
                        uVar24 = uVar24 + 1;
                        uVar25 = uVar25 + bVar42;
                        *(uint *)(param_1 + 0xe0) = uVar24;
                        *(uint *)(param_1 + 0xe4) = uVar25;
                        *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + 1;
                        uVar23 = 1;
                      }
                    }
                    if (*(int *)(DAT_000224d4 + 0x227d0) != 0) {
                      putchar(10);
                    }
                    if (*(int *)(param_1 + 0xdc) != 0) {
                      printf((char *)(DAT_000224d8 + 0x227f0));
                    }
LAB_000227f0:
                    iVar17 = *(int *)(param_1 + 800);
                  }
                  iVar21 = 0;
                  if (iVar17 == 0x20) {
                    uVar23 = *(uint *)(param_1 + 0x10c);
                  }
                  else {
                    uVar23 = (uint)*(ushort *)(param_1 + 0xfe);
                  }
                  _Var47 = lseek64(*(int *)(param_1 + 0xd8),0,0);
                  if (_Var47 == 0) {
                    if (0 < *(int *)(param_1 + 0x31c)) {
                      do {
                        sVar30 = *(size_t *)(param_1 + 0x334);
                        iVar21 = iVar21 + 1;
                        sVar32 = write(*(int *)(param_1 + 0xd8),*(void **)(param_1 + 0x30c),sVar30);
                        if (sVar30 != sVar32) goto LAB_00021a78;
                      } while (iVar21 < *(int *)(param_1 + 0x31c));
                    }
                    _Var47 = lseek64(*(int *)(param_1 + 0xd8),0,0);
                    if (_Var47 == 0) {
                      sVar16 = write(*(int *)(param_1 + 0xd8),(void *)(param_1 + 0xe8),0x200);
                      if (sVar16 == 0x200) {
                        iVar17 = *(int *)(param_1 + 0x334);
                        iVar21 = *(int *)(param_1 + 0xd8);
                        if (*(int *)(param_1 + 800) == 0x20) {
                          uVar24 = iVar17 * (uint)*(ushort *)(param_1 + 0x118);
                          _Var47 = lseek64(iVar21,(ulonglong)uVar24,0);
                          if (((int)((ulonglong)_Var47 >> 0x20) != 0 || uVar24 - (int)_Var47 != 0)
                             || (sVar16 = write(*(int *)(param_1 + 0xd8),*(void **)(param_1 + 0x35c)
                                                ,0x200), sVar16 != 0x200)) goto LAB_00021a78;
                          iVar17 = *(int *)(param_1 + 0x334);
                          iVar21 = *(int *)(param_1 + 0xd8);
                          if (*(int *)(param_1 + 0x324) != 0) {
                            uVar24 = iVar17 * *(int *)(param_1 + 0x324);
                            _Var47 = lseek64(iVar21,(ulonglong)uVar24,0);
                            if (((int)((ulonglong)_Var47 >> 0x20) != 0 || uVar24 - (int)_Var47 != 0)
                               || (sVar16 = write(*(int *)(param_1 + 0xd8),(void *)(param_1 + 0xe8),
                                                  0x200), sVar16 != 0x200)) goto LAB_00021a78;
                            iVar17 = *(int *)(param_1 + 0x334);
                            iVar21 = *(int *)(param_1 + 0xd8);
                          }
                        }
                        iVar8 = 0;
                        uVar24 = iVar17 * (*(int *)(param_1 + 0x31c) + *(int *)(param_1 + 0x2f8));
                        _Var47 = lseek64(iVar21,(ulonglong)uVar24,0);
                        if ((int)((ulonglong)_Var47 >> 0x20) == 0 && uVar24 - (int)_Var47 == 0) {
                          iVar21 = uVar23 - *(int *)(param_1 + 0x2f8);
                          if (0 < iVar21) {
                            do {
                              sVar30 = *(size_t *)(param_1 + 0x334);
                              iVar8 = iVar8 + 1;
                              sVar32 = write(*(int *)(param_1 + 0xd8),*(void **)(param_1 + 0x30c),
                                             sVar30);
                              if (sVar30 != sVar32) goto LAB_00021a78;
                            } while (iVar21 != iVar8);
                          }
                          sVar30 = *(size_t *)(param_1 + 0xac);
                          sVar32 = write(*(int *)(param_1 + 0xd8),*(void **)(param_1 + 0x36c),sVar30
                                        );
                          if ((sVar30 == sVar32) &&
                             (sVar30 = *(size_t *)(param_1 + 0xac),
                             sVar32 = write(*(int *)(param_1 + 0xd8),
                                            (void *)**(undefined4 **)
                                                      (*(int *)(param_1 + 0x360) + 0xa0),sVar30),
                             sVar30 == sVar32)) {
                            local_8c = 0;
                            if (4 < *(int *)(param_1 + 0xb0)) {
                              iVar21 = 4;
                              do {
                                iVar17 = *(int *)(param_1 + 0x360);
                                pvVar12 = (void *)0x0;
                                if (iVar17 != 0) {
                                  puVar14 = *(undefined4 **)(iVar17 + 0xa0);
                                  if (puVar14 == (undefined4 *)0x0) {
LAB_00022b28:
                                    iVar8 = *(int *)(iVar17 + 0xa8);
                                    if (iVar8 != 0) {
                                      piVar29 = *(int **)(iVar8 + 0xa0);
                                      if (piVar29 == (int *)0x0) {
LAB_00022b68:
                                        iVar11 = *(int *)(iVar8 + 0xa8);
                                        if (iVar11 != 0) {
                                          piVar29 = *(int **)(iVar11 + 0xa0);
                                          if (piVar29 == (int *)0x0) {
LAB_00022ba8:
                                            iVar35 = *(int *)(iVar11 + 0xa8);
                                            if (iVar35 != 0) {
                                              piVar29 = *(int **)(iVar35 + 0xa0);
                                              if (piVar29 == (int *)0x0) {
LAB_00022be8:
                                                iVar38 = *(int *)(iVar35 + 0xa8);
                                                if (iVar38 != 0) {
                                                  piVar29 = *(int **)(iVar38 + 0xa0);
                                                  if (piVar29 == (int *)0x0) {
LAB_00022c28:
                                                    if ((*(int *)(iVar38 + 0xa8) != 0) &&
                                                       (pvVar12 = (void *)FUN_0001b764(*(int *)(
                                                  iVar38 + 0xa8),iVar21), pvVar12 != (void *)0x0))
                                                  goto LAB_00022c48;
                                                  if (*(int *)(iVar38 + 0xac) == 0)
                                                  goto LAB_000236d8;
                                                  pvVar12 = (void *)FUN_0001b764(*(int *)(iVar38 + 
                                                  0xac),iVar21);
                                                  }
                                                  else {
                                                    iVar37 = piVar29[2];
                                                    while (iVar21 != iVar37) {
                                                      piVar29 = (int *)piVar29[3];
                                                      if (piVar29 == (int *)0x0) goto LAB_00022c28;
                                                      iVar37 = piVar29[2];
                                                    }
                                                    pvVar12 = (void *)*piVar29;
                                                  }
                                                  if (pvVar12 != (void *)0x0) goto LAB_00022c48;
                                                }
LAB_000236d8:
                                                iVar35 = *(int *)(iVar35 + 0xac);
                                                if (iVar35 == 0) goto LAB_00023540;
                                                piVar29 = *(int **)(iVar35 + 0xa0);
                                                if (piVar29 != (int *)0x0) {
                                                  iVar38 = piVar29[2];
                                                  while (iVar21 != iVar38) {
                                                    piVar29 = (int *)piVar29[3];
                                                    if (piVar29 == (int *)0x0) goto LAB_00023718;
                                                    iVar38 = piVar29[2];
                                                  }
                                                  goto LAB_00023534;
                                                }
LAB_00023718:
                                                if ((*(int *)(iVar35 + 0xa8) != 0) &&
                                                   (pvVar12 = (void *)FUN_0001b764(*(int *)(iVar35 +
                                                                                           0xa8),
                                                                                   iVar21),
                                                   pvVar12 != (void *)0x0)) goto LAB_00022c48;
                                                if (*(int *)(iVar35 + 0xac) == 0) goto LAB_00023540;
                                                pvVar12 = (void *)FUN_0001b764(*(int *)(iVar35 + 
                                                  0xac),iVar21);
                                              }
                                              else {
                                                iVar38 = piVar29[2];
                                                while (iVar21 != iVar38) {
                                                  piVar29 = (int *)piVar29[3];
                                                  if (piVar29 == (int *)0x0) goto LAB_00022be8;
                                                  iVar38 = piVar29[2];
                                                }
LAB_00023534:
                                                pvVar12 = (void *)*piVar29;
                                              }
                                              if (pvVar12 != (void *)0x0) goto LAB_00022c48;
                                            }
LAB_00023540:
                                            iVar11 = *(int *)(iVar11 + 0xac);
                                            if (iVar11 == 0) goto LAB_00022cf8;
                                            piVar29 = *(int **)(iVar11 + 0xa0);
                                            if (piVar29 != (int *)0x0) {
                                              iVar35 = piVar29[2];
                                              while (iVar21 != iVar35) {
                                                piVar29 = (int *)piVar29[3];
                                                if (piVar29 == (int *)0x0) goto LAB_00023580;
                                                iVar35 = piVar29[2];
                                              }
                                              goto LAB_00022cec;
                                            }
LAB_00023580:
                                            iVar35 = *(int *)(iVar11 + 0xa8);
                                            if (iVar35 != 0) {
                                              piVar29 = *(int **)(iVar35 + 0xa0);
                                              if (piVar29 == (int *)0x0) {
LAB_000235c0:
                                                if ((*(int *)(iVar35 + 0xa8) != 0) &&
                                                   (pvVar12 = (void *)FUN_0001b764(*(int *)(iVar35 +
                                                                                           0xa8),
                                                                                   iVar21),
                                                   pvVar12 != (void *)0x0)) goto LAB_00022c48;
                                                if (*(int *)(iVar35 + 0xac) == 0) goto LAB_000235f8;
                                                pvVar12 = (void *)FUN_0001b764(*(int *)(iVar35 + 
                                                  0xac),iVar21);
                                              }
                                              else {
                                                iVar38 = piVar29[2];
                                                while (iVar21 != iVar38) {
                                                  piVar29 = (int *)piVar29[3];
                                                  if (piVar29 == (int *)0x0) goto LAB_000235c0;
                                                  iVar38 = piVar29[2];
                                                }
                                                pvVar12 = (void *)*piVar29;
                                              }
                                              if (pvVar12 != (void *)0x0) goto LAB_00022c48;
                                            }
LAB_000235f8:
                                            iVar11 = *(int *)(iVar11 + 0xac);
                                            if (iVar11 == 0) goto LAB_00022cf8;
                                            piVar29 = *(int **)(iVar11 + 0xa0);
                                            if (piVar29 != (int *)0x0) {
                                              iVar35 = piVar29[2];
                                              while (iVar21 != iVar35) {
                                                piVar29 = (int *)piVar29[3];
                                                if (piVar29 == (int *)0x0) goto LAB_00023638;
                                                iVar35 = piVar29[2];
                                              }
                                              goto LAB_00022cec;
                                            }
LAB_00023638:
                                            if ((*(int *)(iVar11 + 0xa8) != 0) &&
                                               (pvVar12 = (void *)FUN_0001b764(*(int *)(iVar11 + 
                                                  0xa8),iVar21), pvVar12 != (void *)0x0))
                                            goto LAB_00022c48;
                                            if (*(int *)(iVar11 + 0xac) == 0) goto LAB_00022cf8;
                                            pvVar12 = (void *)FUN_0001b764(*(int *)(iVar11 + 0xac),
                                                                           iVar21);
                                          }
                                          else {
                                            iVar35 = piVar29[2];
                                            while (iVar21 != iVar35) {
                                              piVar29 = (int *)piVar29[3];
                                              if (piVar29 == (int *)0x0) goto LAB_00022ba8;
                                              iVar35 = piVar29[2];
                                            }
LAB_00022cec:
                                            pvVar12 = (void *)*piVar29;
                                          }
                                          if (pvVar12 != (void *)0x0) goto LAB_00022c48;
                                        }
LAB_00022cf8:
                                        iVar8 = *(int *)(iVar8 + 0xac);
                                        if (iVar8 == 0) goto LAB_00022cb0;
                                        piVar29 = *(int **)(iVar8 + 0xa0);
                                        if (piVar29 != (int *)0x0) {
                                          iVar11 = piVar29[2];
                                          while (iVar21 != iVar11) {
                                            piVar29 = (int *)piVar29[3];
                                            if (piVar29 == (int *)0x0) goto LAB_00022d38;
                                            iVar11 = piVar29[2];
                                          }
                                          goto LAB_00022f54;
                                        }
LAB_00022d38:
                                        iVar11 = *(int *)(iVar8 + 0xa8);
                                        if (iVar11 != 0) {
                                          piVar29 = *(int **)(iVar11 + 0xa0);
                                          if (piVar29 == (int *)0x0) {
LAB_00022d78:
                                            iVar35 = *(int *)(iVar11 + 0xa8);
                                            if (iVar35 != 0) {
                                              piVar29 = *(int **)(iVar35 + 0xa0);
                                              if (piVar29 == (int *)0x0) {
LAB_00022db8:
                                                if ((*(int *)(iVar35 + 0xa8) != 0) &&
                                                   (pvVar12 = (void *)FUN_0001b764(*(int *)(iVar35 +
                                                                                           0xa8),
                                                                                   iVar21),
                                                   pvVar12 != (void *)0x0)) goto LAB_00022c48;
                                                if (*(int *)(iVar35 + 0xac) == 0) goto LAB_00022df0;
                                                pvVar12 = (void *)FUN_0001b764(*(int *)(iVar35 + 
                                                  0xac),iVar21);
                                              }
                                              else {
                                                iVar38 = piVar29[2];
                                                while (iVar21 != iVar38) {
                                                  piVar29 = (int *)piVar29[3];
                                                  if (piVar29 == (int *)0x0) goto LAB_00022db8;
                                                  iVar38 = piVar29[2];
                                                }
                                                pvVar12 = (void *)*piVar29;
                                              }
                                              if (pvVar12 != (void *)0x0) goto LAB_00022c48;
                                            }
LAB_00022df0:
                                            iVar11 = *(int *)(iVar11 + 0xac);
                                            if (iVar11 == 0) goto LAB_00022e68;
                                            piVar29 = *(int **)(iVar11 + 0xa0);
                                            if (piVar29 != (int *)0x0) {
                                              iVar35 = piVar29[2];
                                              while (iVar21 != iVar35) {
                                                piVar29 = (int *)piVar29[3];
                                                if (piVar29 == (int *)0x0) goto LAB_00022e30;
                                                iVar35 = piVar29[2];
                                              }
                                              goto LAB_00023680;
                                            }
LAB_00022e30:
                                            if ((*(int *)(iVar11 + 0xa8) != 0) &&
                                               (pvVar12 = (void *)FUN_0001b764(*(int *)(iVar11 + 
                                                  0xa8),iVar21), pvVar12 != (void *)0x0))
                                            goto LAB_00022c48;
                                            if (*(int *)(iVar11 + 0xac) == 0) goto LAB_00022e68;
                                            pvVar12 = (void *)FUN_0001b764(*(int *)(iVar11 + 0xac),
                                                                           iVar21);
                                          }
                                          else {
                                            iVar35 = piVar29[2];
                                            while (iVar21 != iVar35) {
                                              piVar29 = (int *)piVar29[3];
                                              if (piVar29 == (int *)0x0) goto LAB_00022d78;
                                              iVar35 = piVar29[2];
                                            }
LAB_00023680:
                                            pvVar12 = (void *)*piVar29;
                                          }
                                          if (pvVar12 != (void *)0x0) goto LAB_00022c48;
                                        }
LAB_00022e68:
                                        iVar8 = *(int *)(iVar8 + 0xac);
                                        if (iVar8 == 0) goto LAB_00022cb0;
                                        piVar29 = *(int **)(iVar8 + 0xa0);
                                        if (piVar29 != (int *)0x0) {
                                          iVar11 = piVar29[2];
                                          while (iVar21 != iVar11) {
                                            piVar29 = (int *)piVar29[3];
                                            if (piVar29 == (int *)0x0) goto LAB_00022ea8;
                                            iVar11 = piVar29[2];
                                          }
                                          goto LAB_00022f54;
                                        }
LAB_00022ea8:
                                        iVar11 = *(int *)(iVar8 + 0xa8);
                                        if (iVar11 != 0) {
                                          piVar29 = *(int **)(iVar11 + 0xa0);
                                          if (piVar29 == (int *)0x0) {
LAB_00022ee8:
                                            if ((*(int *)(iVar11 + 0xa8) != 0) &&
                                               (pvVar12 = (void *)FUN_0001b764(*(int *)(iVar11 + 
                                                  0xa8),iVar21), pvVar12 != (void *)0x0))
                                            goto LAB_00022c48;
                                            if (*(int *)(iVar11 + 0xac) == 0) goto LAB_00022f20;
                                            pvVar12 = (void *)FUN_0001b764(*(int *)(iVar11 + 0xac),
                                                                           iVar21);
                                          }
                                          else {
                                            iVar35 = piVar29[2];
                                            while (iVar21 != iVar35) {
                                              piVar29 = (int *)piVar29[3];
                                              if (piVar29 == (int *)0x0) goto LAB_00022ee8;
                                              iVar35 = piVar29[2];
                                            }
                                            pvVar12 = (void *)*piVar29;
                                          }
                                          if (pvVar12 != (void *)0x0) goto LAB_00022c48;
                                        }
LAB_00022f20:
                                        iVar8 = *(int *)(iVar8 + 0xac);
                                        if (iVar8 == 0) goto LAB_00022cb0;
                                        for (piVar29 = *(int **)(iVar8 + 0xa0);
                                            piVar29 != (int *)0x0; piVar29 = (int *)piVar29[3]) {
                                          if (piVar29[2] == iVar21) goto LAB_00022f54;
                                        }
                                        if ((*(int *)(iVar8 + 0xa8) != 0) &&
                                           (pvVar12 = (void *)FUN_0001b764(*(int *)(iVar8 + 0xa8),
                                                                           iVar21),
                                           pvVar12 != (void *)0x0)) goto LAB_00022c48;
                                        if (*(int *)(iVar8 + 0xac) == 0) goto LAB_00022cb0;
                                        pvVar12 = (void *)FUN_0001b764(*(int *)(iVar8 + 0xac),iVar21
                                                                      );
                                      }
                                      else {
                                        iVar11 = piVar29[2];
                                        while (iVar21 != iVar11) {
                                          piVar29 = (int *)piVar29[3];
                                          if (piVar29 == (int *)0x0) goto LAB_00022b68;
                                          iVar11 = piVar29[2];
                                        }
LAB_00022f54:
                                        pvVar12 = (void *)*piVar29;
                                      }
                                      if (pvVar12 != (void *)0x0) goto LAB_00022c48;
                                    }
LAB_00022cb0:
                                    iVar17 = *(int *)(iVar17 + 0xac);
                                    pvVar12 = (void *)0x0;
                                    if (iVar17 != 0) {
                                      for (puVar14 = *(undefined4 **)(iVar17 + 0xa0);
                                          puVar14 != (undefined4 *)0x0;
                                          puVar14 = (undefined4 *)puVar14[3]) {
                                        if (puVar14[2] == iVar21) goto LAB_00022ce4;
                                      }
                                      iVar8 = *(int *)(iVar17 + 0xa8);
                                      if (iVar8 != 0) {
                                        piVar29 = *(int **)(iVar8 + 0xa0);
                                        if (piVar29 == (int *)0x0) {
LAB_00022fa8:
                                          iVar11 = *(int *)(iVar8 + 0xa8);
                                          if (iVar11 != 0) {
                                            piVar29 = *(int **)(iVar11 + 0xa0);
                                            if (piVar29 == (int *)0x0) {
LAB_00022fe8:
                                              iVar35 = *(int *)(iVar11 + 0xa8);
                                              if (iVar35 != 0) {
                                                piVar29 = *(int **)(iVar35 + 0xa0);
                                                if (piVar29 == (int *)0x0) {
LAB_00023028:
                                                  if ((*(int *)(iVar35 + 0xa8) != 0) &&
                                                     (pvVar12 = (void *)FUN_0001b764(*(int *)(iVar35
                                                                                             + 0xa8)
                                                                                     ,iVar21),
                                                     pvVar12 != (void *)0x0)) goto LAB_00022c48;
                                                  if (*(int *)(iVar35 + 0xac) == 0)
                                                  goto LAB_00023060;
                                                  pvVar12 = (void *)FUN_0001b764(*(int *)(iVar35 + 
                                                  0xac),iVar21);
                                                }
                                                else {
                                                  iVar38 = piVar29[2];
                                                  while (iVar21 != iVar38) {
                                                    piVar29 = (int *)piVar29[3];
                                                    if (piVar29 == (int *)0x0) goto LAB_00023028;
                                                    iVar38 = piVar29[2];
                                                  }
                                                  pvVar12 = (void *)*piVar29;
                                                }
                                                if (pvVar12 != (void *)0x0) goto LAB_00022c48;
                                              }
LAB_00023060:
                                              iVar11 = *(int *)(iVar11 + 0xac);
                                              if (iVar11 == 0) goto LAB_000230d8;
                                              piVar29 = *(int **)(iVar11 + 0xa0);
                                              if (piVar29 != (int *)0x0) {
                                                iVar35 = piVar29[2];
                                                while (iVar21 != iVar35) {
                                                  piVar29 = (int *)piVar29[3];
                                                  if (piVar29 == (int *)0x0) goto LAB_000230a0;
                                                  iVar35 = piVar29[2];
                                                }
                                                goto LAB_00023690;
                                              }
LAB_000230a0:
                                              if ((*(int *)(iVar11 + 0xa8) != 0) &&
                                                 (pvVar12 = (void *)FUN_0001b764(*(int *)(iVar11 + 
                                                  0xa8),iVar21), pvVar12 != (void *)0x0))
                                              goto LAB_00022c48;
                                              if (*(int *)(iVar11 + 0xac) == 0) goto LAB_000230d8;
                                              pvVar12 = (void *)FUN_0001b764(*(int *)(iVar11 + 0xac)
                                                                             ,iVar21);
                                            }
                                            else {
                                              iVar35 = piVar29[2];
                                              while (iVar21 != iVar35) {
                                                piVar29 = (int *)piVar29[3];
                                                if (piVar29 == (int *)0x0) goto LAB_00022fe8;
                                                iVar35 = piVar29[2];
                                              }
LAB_00023690:
                                              pvVar12 = (void *)*piVar29;
                                            }
                                            if (pvVar12 != (void *)0x0) goto LAB_00022c48;
                                          }
LAB_000230d8:
                                          iVar8 = *(int *)(iVar8 + 0xac);
                                          if (iVar8 == 0) goto LAB_00023208;
                                          piVar29 = *(int **)(iVar8 + 0xa0);
                                          if (piVar29 != (int *)0x0) {
                                            iVar11 = piVar29[2];
                                            while (iVar21 != iVar11) {
                                              piVar29 = (int *)piVar29[3];
                                              if (piVar29 == (int *)0x0) goto LAB_00023118;
                                              iVar11 = piVar29[2];
                                            }
                                            goto LAB_00023508;
                                          }
LAB_00023118:
                                          iVar11 = *(int *)(iVar8 + 0xa8);
                                          if (iVar11 != 0) {
                                            piVar29 = *(int **)(iVar11 + 0xa0);
                                            if (piVar29 == (int *)0x0) {
LAB_00023158:
                                              if ((*(int *)(iVar11 + 0xa8) != 0) &&
                                                 (pvVar12 = (void *)FUN_0001b764(*(int *)(iVar11 + 
                                                  0xa8),iVar21), pvVar12 != (void *)0x0))
                                              goto LAB_00022c48;
                                              if (*(int *)(iVar11 + 0xac) == 0) goto LAB_00023190;
                                              pvVar12 = (void *)FUN_0001b764(*(int *)(iVar11 + 0xac)
                                                                             ,iVar21);
                                            }
                                            else {
                                              iVar35 = piVar29[2];
                                              while (iVar21 != iVar35) {
                                                piVar29 = (int *)piVar29[3];
                                                if (piVar29 == (int *)0x0) goto LAB_00023158;
                                                iVar35 = piVar29[2];
                                              }
                                              pvVar12 = (void *)*piVar29;
                                            }
                                            if (pvVar12 != (void *)0x0) goto LAB_00022c48;
                                          }
LAB_00023190:
                                          iVar8 = *(int *)(iVar8 + 0xac);
                                          if (iVar8 == 0) goto LAB_00023208;
                                          piVar29 = *(int **)(iVar8 + 0xa0);
                                          if (piVar29 != (int *)0x0) {
                                            iVar11 = piVar29[2];
                                            while (iVar21 != iVar11) {
                                              piVar29 = (int *)piVar29[3];
                                              if (piVar29 == (int *)0x0) goto LAB_000231d0;
                                              iVar11 = piVar29[2];
                                            }
                                            goto LAB_00023508;
                                          }
LAB_000231d0:
                                          if ((*(int *)(iVar8 + 0xa8) != 0) &&
                                             (pvVar12 = (void *)FUN_0001b764(*(int *)(iVar8 + 0xa8),
                                                                             iVar21),
                                             pvVar12 != (void *)0x0)) goto LAB_00022c48;
                                          if (*(int *)(iVar8 + 0xac) == 0) goto LAB_00023208;
                                          pvVar12 = (void *)FUN_0001b764(*(int *)(iVar8 + 0xac),
                                                                         iVar21);
                                        }
                                        else {
                                          iVar11 = piVar29[2];
                                          while (iVar21 != iVar11) {
                                            piVar29 = (int *)piVar29[3];
                                            if (piVar29 == (int *)0x0) goto LAB_00022fa8;
                                            iVar11 = piVar29[2];
                                          }
LAB_00023508:
                                          pvVar12 = (void *)*piVar29;
                                        }
                                        if (pvVar12 != (void *)0x0) goto LAB_00022c48;
                                      }
LAB_00023208:
                                      iVar17 = *(int *)(iVar17 + 0xac);
                                      pvVar12 = (void *)0x0;
                                      if (iVar17 != 0) {
                                        puVar14 = *(undefined4 **)(iVar17 + 0xa0);
                                        if (puVar14 != (undefined4 *)0x0) {
                                          iVar8 = puVar14[2];
                                          while (iVar21 != iVar8) {
                                            puVar14 = (undefined4 *)puVar14[3];
                                            if (puVar14 == (undefined4 *)0x0) goto LAB_00023248;
                                            iVar8 = puVar14[2];
                                          }
                                          goto LAB_00022ce4;
                                        }
LAB_00023248:
                                        iVar8 = *(int *)(iVar17 + 0xa8);
                                        if (iVar8 != 0) {
                                          piVar29 = *(int **)(iVar8 + 0xa0);
                                          if (piVar29 == (int *)0x0) {
LAB_00023288:
                                            iVar11 = *(int *)(iVar8 + 0xa8);
                                            if (iVar11 != 0) {
                                              piVar29 = *(int **)(iVar11 + 0xa0);
                                              if (piVar29 == (int *)0x0) {
LAB_000232c8:
                                                if ((*(int *)(iVar11 + 0xa8) != 0) &&
                                                   (pvVar12 = (void *)FUN_0001b764(*(int *)(iVar11 +
                                                                                           0xa8),
                                                                                   iVar21),
                                                   pvVar12 != (void *)0x0)) goto LAB_00022c48;
                                                if (*(int *)(iVar11 + 0xac) == 0) goto LAB_00023300;
                                                pvVar12 = (void *)FUN_0001b764(*(int *)(iVar11 + 
                                                  0xac),iVar21);
                                              }
                                              else {
                                                iVar35 = piVar29[2];
                                                while (iVar21 != iVar35) {
                                                  piVar29 = (int *)piVar29[3];
                                                  if (piVar29 == (int *)0x0) goto LAB_000232c8;
                                                  iVar35 = piVar29[2];
                                                }
                                                pvVar12 = (void *)*piVar29;
                                              }
                                              if (pvVar12 != (void *)0x0) goto LAB_00022c48;
                                            }
LAB_00023300:
                                            iVar8 = *(int *)(iVar8 + 0xac);
                                            if (iVar8 == 0) goto LAB_00023378;
                                            piVar29 = *(int **)(iVar8 + 0xa0);
                                            if (piVar29 != (int *)0x0) {
                                              iVar11 = piVar29[2];
                                              while (iVar21 != iVar11) {
                                                piVar29 = (int *)piVar29[3];
                                                if (piVar29 == (int *)0x0) goto LAB_00023340;
                                                iVar11 = piVar29[2];
                                              }
                                              goto LAB_000236a0;
                                            }
LAB_00023340:
                                            if ((*(int *)(iVar8 + 0xa8) != 0) &&
                                               (pvVar12 = (void *)FUN_0001b764(*(int *)(iVar8 + 0xa8
                                                                                       ),iVar21),
                                               pvVar12 != (void *)0x0)) goto LAB_00022c48;
                                            if (*(int *)(iVar8 + 0xac) == 0) goto LAB_00023378;
                                            pvVar12 = (void *)FUN_0001b764(*(int *)(iVar8 + 0xac),
                                                                           iVar21);
                                          }
                                          else {
                                            iVar11 = piVar29[2];
                                            while (iVar21 != iVar11) {
                                              piVar29 = (int *)piVar29[3];
                                              if (piVar29 == (int *)0x0) goto LAB_00023288;
                                              iVar11 = piVar29[2];
                                            }
LAB_000236a0:
                                            pvVar12 = (void *)*piVar29;
                                          }
                                          if (pvVar12 != (void *)0x0) goto LAB_00022c48;
                                        }
LAB_00023378:
                                        iVar17 = *(int *)(iVar17 + 0xac);
                                        if (iVar17 == 0) {
                                          pvVar12 = (void *)0x0;
                                        }
                                        else {
                                          puVar14 = *(undefined4 **)(iVar17 + 0xa0);
                                          if (puVar14 != (undefined4 *)0x0) {
                                            iVar8 = puVar14[2];
                                            while (iVar21 != iVar8) {
                                              puVar14 = (undefined4 *)puVar14[3];
                                              if (puVar14 == (undefined4 *)0x0) goto LAB_000233bc;
                                              iVar8 = puVar14[2];
                                            }
                                            goto LAB_00022ce4;
                                          }
LAB_000233bc:
                                          iVar8 = *(int *)(iVar17 + 0xa8);
                                          if (iVar8 != 0) {
                                            piVar29 = *(int **)(iVar8 + 0xa0);
                                            if (piVar29 == (int *)0x0) {
LAB_000233fc:
                                              if ((*(int *)(iVar8 + 0xa8) != 0) &&
                                                 (pvVar12 = (void *)FUN_0001b764(*(int *)(iVar8 + 
                                                  0xa8),iVar21), pvVar12 != (void *)0x0))
                                              goto LAB_00022c48;
                                              if (*(int *)(iVar8 + 0xac) == 0) goto LAB_00023434;
                                              pvVar12 = (void *)FUN_0001b764(*(int *)(iVar8 + 0xac),
                                                                             iVar21);
                                            }
                                            else {
                                              iVar11 = piVar29[2];
                                              while (iVar21 != iVar11) {
                                                piVar29 = (int *)piVar29[3];
                                                if (piVar29 == (int *)0x0) goto LAB_000233fc;
                                                iVar11 = piVar29[2];
                                              }
                                              pvVar12 = (void *)*piVar29;
                                            }
                                            if (pvVar12 != (void *)0x0) goto LAB_00022c48;
                                          }
LAB_00023434:
                                          iVar17 = *(int *)(iVar17 + 0xac);
                                          pvVar12 = (void *)0x0;
                                          if (iVar17 != 0) {
                                            puVar14 = *(undefined4 **)(iVar17 + 0xa0);
                                            if (puVar14 != (undefined4 *)0x0) {
                                              iVar8 = puVar14[2];
                                              while (iVar21 != iVar8) {
                                                puVar14 = (undefined4 *)puVar14[3];
                                                if (puVar14 == (undefined4 *)0x0) goto LAB_00023474;
                                                iVar8 = puVar14[2];
                                              }
                                              goto LAB_00022ce4;
                                            }
LAB_00023474:
                                            if ((*(int *)(iVar17 + 0xa8) == 0) ||
                                               (pvVar12 = (void *)FUN_0001b764(*(int *)(iVar17 + 
                                                  0xa8),iVar21), pvVar12 == (void *)0x0)) {
                                              pvVar12 = (void *)0x0;
                                              if (*(int *)(iVar17 + 0xac) != 0) {
                                                pvVar12 = (void *)FUN_0001b764(*(int *)(iVar17 + 
                                                  0xac),iVar21);
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                  else {
                                    iVar8 = puVar14[2];
                                    while (iVar21 != iVar8) {
                                      puVar14 = (undefined4 *)puVar14[3];
                                      if (puVar14 == (undefined4 *)0x0) goto LAB_00022b28;
                                      iVar8 = puVar14[2];
                                    }
LAB_00022ce4:
                                    pvVar12 = (void *)*puVar14;
                                  }
                                }
LAB_00022c48:
                                sVar30 = *(size_t *)(param_1 + 0xac);
                                sVar32 = write(*(int *)(param_1 + 0xd8),pvVar12,sVar30);
                                if (sVar30 != sVar32) goto LAB_00021a78;
                                iVar21 = iVar21 + 1;
                              } while (iVar21 < *(int *)(param_1 + 0xb0));
                            }
                            goto LAB_00021a80;
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
  else {
    if (uVar23 == 0x20) {
LAB_000228c4:
      if (uVar34 < 0xfff9) {
        fwrite((void *)(DAT_000224f8 + 0x234ec),1,0x2f,
               (FILE *)**(undefined4 **)(iVar21 + DAT_000224f4));
      }
      iVar17 = DAT_000224dc;
      *(uint *)(param_1 + 0x10c) = uVar39;
      *(undefined2 *)(param_1 + 0xfe) = 0;
      uVar6 = *(undefined4 *)(iVar17 + 0x228e8);
      *(undefined4 *)(pbVar22 + 0x12) = *(undefined4 *)(iVar17 + 0x228e4);
      *(undefined4 *)(pbVar22 + 0x16) = uVar6;
      *(undefined4 *)(param_1 + 0x308) = 0;
      uVar7 = uVar39;
      uVar26 = uVar34;
      goto LAB_00021b68;
    }
    if (uVar23 == 0xc) {
      *(short *)(param_1 + 0xfe) = (short)uVar9;
      uVar6 = *(undefined4 *)(iVar17 + 0x21b60);
      *(undefined4 *)(pbVar22 + 0x12) = *(undefined4 *)(iVar17 + 0x21b5c);
      *(undefined4 *)(pbVar22 + 0x16) = uVar6;
      uVar7 = uVar9;
      uVar26 = uVar10;
      goto LAB_00021b68;
    }
  }
LAB_00021a78:
  local_8c = 0xffffffff;
LAB_00021a80:
  if (*(int *)(param_1 + 0xd8) == 0) {
    return local_8c;
  }
  close(*(int *)(param_1 + 0xd8));
  return local_8c;
}



/* ===== rkfsmk_set_format_id @ 000237f0 size=32 ===== */

undefined4 rkfsmk_set_format_id(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
    uVar2 = param_2[1];
    *(undefined4 *)(param_1 + 0x364) = *param_2;
    *(undefined4 *)(param_1 + 0x368) = uVar2;
  }
  return uVar1;
}



/* ===== rkfsmk_disk_size_get @ 00023810 size=8 ===== */

undefined8 rkfsmk_disk_size_get(int param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* ===== rkfsmk_format @ 00023818 size=120 ===== */

int rkfsmk_format(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_14 = 0;
  iVar1 = rkfsmk_create(&local_14,param_1,param_2,0);
  if (iVar1 != 0) {
    return iVar1;
  }
  local_10 = *(undefined4 *)(DAT_00023890 + 0x2385c);
  uStack_c = *(undefined4 *)(DAT_00023890 + 0x23860);
  rkfsmk_set_format_id(local_14,&local_10);
  iVar1 = rkfsmk_start(local_14);
  rkfsmk_destroy(local_14);
  return iVar1;
}



/* ===== rkfsmk_format_ex @ 00023894 size=104 ===== */

int rkfsmk_format_ex(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_14 [2];
  
  local_14[0] = 0;
  iVar1 = rkfsmk_create(local_14,param_1,param_2,0);
  if (iVar1 != 0) {
    return iVar1;
  }
  rkfsmk_set_format_id(local_14[0],param_3);
  iVar1 = rkfsmk_start(local_14[0]);
  rkfsmk_destroy(local_14[0]);
  return iVar1;
}



/* ===== kernel_get_file_size @ 000238fc size=68 ===== */

void kernel_get_file_size(char *param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  stat64 sStack_80;
  
  iVar1 = lstat64(param_1,&sStack_80);
  if (iVar1 == 0) {
    *param_2 = (undefined4)sStack_80.st_size;
    param_2[1] = sStack_80.st_size._4_4_;
    *param_3 = (uint)sStack_80.st_blocks << 9;
    param_3[1] = sStack_80.st_blocks._4_4_ << 9 | (uint)sStack_80.st_blocks >> 0x17;
  }
  return;
}



/* ===== kernel_pre_created_file @ 00023940 size=72 ===== */

undefined4 kernel_pre_created_file(char *param_1,undefined4 param_2,size_t param_3)

{
  int __fd;
  
  __fd = open64(param_1,0x10042);
  if (__fd != 0) {
    write(__fd,(void *)0x0,param_3);
    fsync(__fd);
    close(__fd);
    return 0;
  }
  return 0xffffffff;
}



/* ===== kernel_set_alignsize @ 00023988 size=36 ===== */

void kernel_set_alignsize(int param_1,undefined4 param_2)

{
  undefined4 local_c [2];
  
  local_c[0] = param_2;
  ioctl(param_1,0x80047214,local_c);
  return;
}



/* ===== kernel_chk_format @ 000239ac size=128 ===== */

undefined4 kernel_chk_format(char *param_1)

{
  size_t sVar1;
  char *__s;
  int __fd;
  undefined4 local_14 [2];
  
  local_14[0] = 0xffffffff;
  sVar1 = strlen(param_1);
  __s = malloc(sVar1 + 0x10);
  sprintf(__s,(char *)(DAT_00023a2c + 0x239dc),param_1);
  __fd = open64(__s,0x42);
  if (__fd != 0) {
    ioctl(__fd,0x80047216,local_14);
    close(__fd);
    remove(__s);
  }
  free(__s);
  return local_14[0];
}



/* ===== Uni2Char @ 00023a30 size=60 ===== */

undefined4 Uni2Char(uint param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_00023a6c + 0x23a44 + (param_1 >> 8) * 4);
  if ((iVar2 != 0) && (cVar1 = *(char *)(iVar2 + (param_1 & 0xff)), cVar1 != '\0')) {
    *param_2 = cVar1;
    return 1;
  }
  return 0xffffffff;
}



/* ===== Char2Uni @ 00023a70 size=40 ===== */

undefined4 Char2Uni(byte *param_1,short *param_2)

{
  short sVar1;
  undefined4 uVar2;
  
  sVar1 = *(short *)(DAT_00023a98 + 0x23a84 + (uint)*param_1 * 2);
  *param_2 = sVar1;
  if (sVar1 == 0) {
    uVar2 = 0xffffffea;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* ===== Char2Upper @ 00023a9c size=28 ===== */

uint Char2Upper(uint param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(DAT_00023ab8 + param_1 + 0x23ca8);
  if (uVar1 != 0) {
    param_1 = uVar1;
  }
  return param_1;
}



/* ===== FUN_00023abc @ 00023abc size=168 ===== */

ulonglong FUN_00023abc(uint param_1,uint param_2)

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



/* ===== FUN_00023b64 @ 00023b64 size=32 ===== */

void FUN_00023b64(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_00023abc();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_00023b84 @ 00023b84 size=220 ===== */

ulonglong FUN_00023b84(uint param_1,uint param_2)

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



/* ===== FUN_00023c80 @ 00023c80 size=212 ===== */

undefined8 FUN_00023c80(int param_1,int param_2,int param_3,int param_4)

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
      uVar2 = FUN_00023da0(param_1,param_2,-param_3,-param_4 - (uint)(param_3 != 0),&local_8);
      return CONCAT44(-(int)((ulonglong)uVar2 >> 0x20) - (uint)((int)uVar2 != 0),-(int)uVar2);
    }
    uVar2 = FUN_00023da0();
    return uVar2;
  }
  iVar1 = -param_2 - (uint)(param_1 != 0);
  if (param_4 < 0) {
    uVar2 = FUN_00023da0(-param_1,iVar1,-param_3,-param_4 - (uint)(param_3 != 0),&local_8);
    return uVar2;
  }
  uVar2 = FUN_00023da0(-param_1,iVar1,param_3,param_4,&local_8);
  return CONCAT44(-(int)((ulonglong)uVar2 >> 0x20) - (uint)((int)uVar2 != 0),-(int)uVar2);
}



/* ===== FUN_00023d54 @ 00023d54 size=76 ===== */

void FUN_00023d54(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  if (param_4 != 0 || param_3 != 0) {
    FUN_00023da0();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_00023da0 @ 00023da0 size=328 ===== */

undefined8 FUN_00023da0(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

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



/* ===== _fini @ 00023ee8 size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::putchar @ 0003e000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 0003e004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ioctl @ 0003e008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 0003e00c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 0003e014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memmove @ 0003e018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 0003e01c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::munmap @ 0003e020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int munmap(void *__addr,size_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fgets @ 0003e028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 0003e02c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::perror @ 0003e030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 0003e034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_finalize @ 0003e038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 0003e03c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::remove @ 0003e040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int remove(char *__filename)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sleep @ 0003e044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::wcstombs @ 0003e048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t wcstombs(char *__s,wchar_t *__pwcs,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 0003e04c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__fgetc_unlocked @ 0003e054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __fgetc_unlocked(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::libiconv_open @ 0003e058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void libiconv_open(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fstat64 @ 0003e05c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstat64(int __fd,stat64 *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::uname @ 0003e060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int uname(utsname *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 0003e064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::write @ 0003e068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0003e06c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_registerTMCloneTable @ 0003e070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_registerTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::nl_langinfo @ 0003e074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * nl_langinfo(nl_item __item)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::read @ 0003e080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 0003e084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 0003e088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcmp @ 0003e08c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sscanf @ 0003e090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setmntent @ 0003e094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void setmntent(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::lstat64 @ 0003e098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int lstat64(char *__file,stat64 *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::endmntent @ 0003e09c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void endmntent(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_deregisterTMCloneTable @ 0003e0a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gettimeofday @ 0003e0a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::localtime @ 0003e0a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * localtime(time_t *__timer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0003e0ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::open64 @ 0003e0b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 0003e0b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fgetc @ 0003e0b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fgetc(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 0003e0bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setlocale @ 0003e0c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * setlocale(int __category,char *__locale)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mmap64 @ 0003e0c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * mmap64(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off64_t __offset)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fsync @ 0003e0cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fsync(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputc @ 0003e0d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strftime @ 0003e0d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strftime(char *__s,size_t __maxsize,char *__format,tm *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getmntent @ 0003e0d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void getmntent(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 0003e0dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::libiconv @ 0003e0e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void libiconv(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 0003e0e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 0003e0e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gmtime @ 0003e0ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * gmtime(time_t *__timer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 0003e0f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::lseek64 @ 0003e0f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__off64_t lseek64(int __fd,__off64_t __offset,int __whence)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strchr @ 0003e0f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 0003e0fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 0003e100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vfprintf @ 0003e104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::raise @ 0003e108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 0003e10c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


