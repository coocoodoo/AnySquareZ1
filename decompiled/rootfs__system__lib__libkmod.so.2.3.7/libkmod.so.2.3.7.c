// libkmod.so.2.3.7 — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _DT_INIT @ 000120d8 size=16 ===== */

void _DT_INIT(void)

{
  return;
}



/* ===== <EXTERNAL>::secure_getenv @ 000120fc size=12 ===== */

void secure_getenv(void)

{
  (*(code *)PTR_secure_getenv_0002b00c)();
  return;
}



/* ===== <EXTERNAL>::strcpy @ 00012108 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_0002b010)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::unsetenv @ 00012114 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unsetenv(char *__name)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_unsetenv_0002b014)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::strtok_r @ 00012120 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strtok_r(char *__s,char *__delim,char **__save_ptr)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strtok_r_0002b018)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::strerror @ 0001212c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_0002b01c)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::stat64 @ 00012138 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat64(char *__file,stat64 *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_stat64_0002b020)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::memmove @ 00012144 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_0002b024)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::snprintf @ 00012150 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_0002b028)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::syscall @ 0001215c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long syscall(long __sysno,...)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_syscall_0002b02c)(__sysno);
  return lVar1;
}



/* ===== <EXTERNAL>::munmap @ 0001216c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int munmap(void *__addr,size_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_munmap_0002b030)(__addr);
  return iVar1;
}



/* ===== kmod_module_get_dependencies @ 00012178 size=12 ===== */

void kmod_module_get_dependencies(void)

{
  (*(code *)PTR_kmod_module_get_dependencies_0002b034)();
  return;
}



/* ===== kmod_module_get_name @ 00012184 size=12 ===== */

void kmod_module_get_name(void)

{
  (*(code *)PTR_kmod_module_get_name_0002b038)();
  return;
}



/* ===== kmod_module_insert_module @ 00012190 size=12 ===== */

void kmod_module_insert_module(void)

{
  (*(code *)PTR_kmod_module_insert_module_0002b03c)();
  return;
}



/* ===== <EXTERNAL>::bsearch @ 0001219c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * bsearch(void *__key,void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_bsearch_0002b040)(__key);
  return pvVar1;
}



/* ===== <EXTERNAL>::fgets @ 000121a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_fgets_0002b044)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::memcpy @ 000121b8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_0002b048)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 000121c4 size=12 ===== */

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_0002b04c)();
  return;
}



/* ===== <EXTERNAL>::system @ 000121d0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int system(char *__command)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_system_0002b050)(__command);
  return iVar1;
}



/* ===== <EXTERNAL>::malloc @ 000121dc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0002b054)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::openat64 @ 000121e8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int openat64(int __fd,char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_openat64_0002b058)(__fd);
  return iVar1;
}



/* ===== kmod_set_log_priority @ 000121f4 size=12 ===== */

void kmod_set_log_priority(void)

{
  (*(code *)PTR_kmod_set_log_priority_0002b05c)();
  return;
}



/* ===== kmod_list_next @ 00012200 size=12 ===== */

void kmod_list_next(void)

{
  (*(code *)PTR_kmod_list_next_0002b060)();
  return;
}



/* ===== <EXTERNAL>::strtoul @ 0001220c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
  ulong uVar1;
  
  uVar1 = (*(code *)PTR_strtoul_0002b064)(__nptr);
  return uVar1;
}



/* ===== <EXTERNAL>::init_module @ 00012218 size=12 ===== */

void init_module(void)

{
  (*(code *)PTR_init_module_0002b068)();
  return;
}



/* ===== <EXTERNAL>::delete_module @ 00012224 size=12 ===== */

void delete_module(void)

{
  (*(code *)PTR_delete_module_0002b06c)();
  return;
}



/* ===== kmod_list_last @ 00012230 size=12 ===== */

void kmod_list_last(void)

{
  (*(code *)PTR_kmod_list_last_0002b070)();
  return;
}



/* ===== <EXTERNAL>::__fgetc_unlocked @ 00012240 size=12 ===== */

void __fgetc_unlocked(void)

{
  (*(code *)PTR___fgetc_unlocked_0002b074)();
  return;
}



/* ===== <EXTERNAL>::fstat64 @ 0001224c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstat64(int __fd,stat64 *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fstat64_0002b078)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::strtol @ 00012258 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_strtol_0002b07c)(__nptr);
  return lVar1;
}



/* ===== <EXTERNAL>::uname @ 00012264 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int uname(utsname *__name)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_uname_0002b080)(__name);
  return iVar1;
}



/* ===== kmod_get_log_priority @ 00012270 size=12 ===== */

void kmod_get_log_priority(void)

{
  (*(code *)PTR_kmod_get_log_priority_0002b084)();
  return;
}



/* ===== <EXTERNAL>::basename @ 0001227c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * basename(char *__filename)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_basename_0002b088)(__filename);
  return pcVar1;
}



/* ===== <EXTERNAL>::calloc @ 00012288 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_0002b08c)(__nmemb);
  return pvVar1;
}



/* ===== kmod_module_get_initstate @ 00012294 size=12 ===== */

void kmod_module_get_initstate(void)

{
  (*(code *)PTR_kmod_module_get_initstate_0002b090)();
  return;
}



/* ===== <EXTERNAL>::write @ 000122a0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_write_0002b094)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::fprintf @ 000122ac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_0002b098)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 000122b8 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_0002b09c)();
  return;
}



/* ===== <EXTERNAL>::fseek @ 000122c4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fseek_0002b0a0)(__stream);
  return iVar1;
}



/* ===== kmod_get_dirname @ 000122d0 size=12 ===== */

void kmod_get_dirname(void)

{
  (*(code *)PTR_kmod_get_dirname_0002b0a4)();
  return;
}



/* ===== <EXTERNAL>::memchr @ 000122dc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memchr(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memchr_0002b0a8)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::strstr @ 000122e8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strstr_0002b0ac)(__haystack);
  return pcVar1;
}



/* ===== kmod_unload_resources @ 000122f4 size=12 ===== */

void kmod_unload_resources(void)

{
  (*(code *)PTR_kmod_unload_resources_0002b0b0)();
  return;
}



/* ===== <EXTERNAL>::read @ 00012300 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_0002b0b4)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::dirfd @ 0001230c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int dirfd(DIR *__dirp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_dirfd_0002b0b8)(__dirp);
  return iVar1;
}



/* ===== <EXTERNAL>::get_current_dir_name @ 00012318 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * get_current_dir_name(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_get_current_dir_name_0002b0bc)();
  return pcVar1;
}



/* ===== <EXTERNAL>::pread64 @ 00012324 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t pread64(int __fd,void *__buf,size_t __nbytes,__off64_t __offset)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_pread64_0002b0c0)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::strncmp @ 00012330 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_0002b0c4)(__s1);
  return iVar1;
}



/* ===== kmod_module_get_options @ 0001233c size=12 ===== */

void kmod_module_get_options(void)

{
  (*(code *)PTR_kmod_module_get_options_0002b0c8)();
  return;
}



/* ===== kmod_module_symbols_free_list @ 00012348 size=12 ===== */

void kmod_module_symbols_free_list(void)

{
  (*(code *)PTR_kmod_module_symbols_free_list_0002b0cc)();
  return;
}



/* ===== <EXTERNAL>::strncpy @ 00012354 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_0002b0d0)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::setenv @ 00012360 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setenv(char *__name,char *__value,int __replace)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setenv_0002b0d4)(__name);
  return iVar1;
}



/* ===== kmod_ref @ 0001236c size=12 ===== */

void kmod_ref(void)

{
  (*(code *)PTR_kmod_ref_0002b0d8)();
  return;
}



/* ===== kmod_module_unref @ 00012378 size=12 ===== */

void kmod_module_unref(void)

{
  (*(code *)PTR_kmod_module_unref_0002b0dc)();
  return;
}



/* ===== kmod_module_apply_filter @ 00012388 size=12 ===== */

void kmod_module_apply_filter(void)

{
  (*(code *)PTR_kmod_module_apply_filter_0002b0e0)();
  return;
}



/* ===== <EXTERNAL>::realloc @ 00012394 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_realloc_0002b0e4)(__ptr);
  return pvVar1;
}



/* ===== kmod_module_dependency_symbols_free_list @ 000123a0 size=12 ===== */

void kmod_module_dependency_symbols_free_list(void)

{
  (*(code *)PTR_kmod_module_dependency_symbols_free_list_0002b0e8)();
  return;
}



/* ===== kmod_module_new_from_name @ 000123ac size=12 ===== */

void kmod_module_new_from_name(void)

{
  (*(code *)PTR_kmod_module_new_from_name_0002b0ec)();
  return;
}



/* ===== <EXTERNAL>::readdir64 @ 000123b8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent64 * readdir64(DIR *__dirp)

{
  dirent64 *pdVar1;
  
  pdVar1 = (dirent64 *)(*(code *)PTR_readdir64_0002b0f0)(__dirp);
  return pdVar1;
}



/* ===== <EXTERNAL>::memcmp @ 000123c4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_0002b0f4)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::fdopen @ 000123d0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fdopen(int __fd,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fdopen_0002b0f8)(__fd);
  return pFVar1;
}



/* ===== kmod_module_new_from_path @ 000123dc size=12 ===== */

void kmod_module_new_from_path(void)

{
  (*(code *)PTR_kmod_module_new_from_path_0002b0fc)();
  return;
}



/* ===== <EXTERNAL>::fread @ 000123e8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fread_0002b100)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::strdup @ 000123f4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strdup(char *__s)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strdup_0002b104)(__s);
  return pcVar1;
}



/* ===== kmod_module_versions_free_list @ 00012400 size=12 ===== */

void kmod_module_versions_free_list(void)

{
  (*(code *)PTR_kmod_module_versions_free_list_0002b108)();
  return;
}



/* ===== <EXTERNAL>::memset @ 0001240c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0002b10c)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::fnmatch @ 00012418 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fnmatch(char *__pattern,char *__name,int __flags)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fnmatch_0002b110)(__pattern);
  return iVar1;
}



/* ===== kmod_module_get_softdeps @ 00012424 size=12 ===== */

void kmod_module_get_softdeps(void)

{
  (*(code *)PTR_kmod_module_get_softdeps_0002b114)();
  return;
}



/* ===== <EXTERNAL>::fclose @ 00012430 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_0002b118)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::open64 @ 0001243c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open64_0002b11c)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::opendir @ 00012448 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * opendir(char *__name)

{
  DIR *pDVar1;
  
  pDVar1 = (DIR *)(*(code *)PTR_opendir_0002b120)(__name);
  return pDVar1;
}



/* ===== kmod_module_ref @ 00012458 size=12 ===== */

void kmod_module_ref(void)

{
  (*(code *)PTR_kmod_module_ref_0002b124)();
  return;
}



/* ===== kmod_module_unref_list @ 00012464 size=12 ===== */

void kmod_module_unref_list(void)

{
  (*(code *)PTR_kmod_module_unref_list_0002b128)();
  return;
}



/* ===== <EXTERNAL>::strcmp @ 00012474 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_0002b12c)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::fstatat64 @ 00012480 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstatat64(int __fd,char *__file,stat64 *__buf,int __flag)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fstatat64_0002b130)(__fd);
  return iVar1;
}



/* ===== kmod_module_get_path @ 0001248c size=12 ===== */

void kmod_module_get_path(void)

{
  (*(code *)PTR_kmod_module_get_path_0002b134)();
  return;
}



/* ===== <EXTERNAL>::sprintf @ 00012498 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_0002b138)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::asprintf @ 000124a4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int asprintf(char **__ptr,char *__fmt,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_asprintf_0002b13c)(__ptr);
  return iVar1;
}



/* ===== <EXTERNAL>::strcspn @ 000124b0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strcspn(char *__s,char *__reject)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strcspn_0002b140)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::mmap64 @ 000124bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * mmap64(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off64_t __offset)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_mmap64_0002b144)(__addr);
  return pvVar1;
}



/* ===== kmod_unref @ 000124c8 size=12 ===== */

void kmod_unref(void)

{
  (*(code *)PTR_kmod_unref_0002b148)();
  return;
}



/* ===== <EXTERNAL>::strsep @ 000124d4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strsep(char **__stringp,char *__delim)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strsep_0002b14c)(__stringp);
  return pcVar1;
}



/* ===== kmod_module_info_free_list @ 000124e0 size=12 ===== */

void kmod_module_info_free_list(void)

{
  (*(code *)PTR_kmod_module_info_free_list_0002b150)();
  return;
}



/* ===== kmod_module_get_install_commands @ 000124ec size=12 ===== */

void kmod_module_get_install_commands(void)

{
  (*(code *)PTR_kmod_module_get_install_commands_0002b154)();
  return;
}



/* ===== <EXTERNAL>::__errno_location @ 000124f8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_0002b158)();
  return piVar1;
}



/* ===== <EXTERNAL>::strlen @ 00012504 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_0002b15c)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::__assert @ 00012510 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void __assert(char *__assertion,char *__file,int __line)

{
  (*(code *)PTR___assert_0002b160)(__assertion);
  return;
}



/* ===== <EXTERNAL>::strchr @ 0001251c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_0002b164)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::closedir @ 00012528 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int closedir(DIR *__dirp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_closedir_0002b168)(__dirp);
  return iVar1;
}



/* ===== kmod_module_new_from_lookup @ 00012534 size=12 ===== */

void kmod_module_new_from_lookup(void)

{
  (*(code *)PTR_kmod_module_new_from_lookup_0002b16c)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00012540 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_0002b170)();
  return;
}



/* ===== <EXTERNAL>::close @ 0001254c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_0002b174)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::raise @ 00012568 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_0002b17c)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 00012578 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0002b180)(__ptr);
  return;
}



/* ===== <EXTERNAL>::fopen64 @ 00012584 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen64_0002b184)(__filename);
  return pFVar1;
}



/* ===== entry @ 00012590 size=72 ===== */

void processEntry entry(void)

{
  code *pcVar1;
  
  if (DAT_000125dc + 0x125a8 == DAT_000125d8 + 0x125a0) {
    return;
  }
  pcVar1 = *(code **)(DAT_000125e0 + 0x125b0 + DAT_000125e4);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== _FINI_0 @ 0001264c size=112 ===== */

void _FINI_0(void)

{
  int iVar1;
  
  iVar1 = DAT_000126c0 + 0x12668;
  if (*(char *)(DAT_000126bc + 0x1265c) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + DAT_000126c4) != 0) {
    __cxa_finalize(*(undefined4 *)(DAT_000126c8 + 0x12688));
  }
  entry();
  if (*(int *)(iVar1 + DAT_000126cc) != 0) {
    __deregister_frame_info(DAT_000126d0 + 0x126a8);
  }
  *(undefined1 *)(DAT_000126d4 + 0x126b8) = 1;
  return;
}



/* ===== _INIT_0 @ 000126d8 size=140 ===== */

void _INIT_0(void)

{
  code *pcVar1;
  
  if (*(int *)(DAT_00012710 + 0x126e8 + DAT_00012714) != 0) {
    __register_frame_info(DAT_0001271c + 0x12708,DAT_00012718 + 0x12704);
  }
  if (((DAT_00012640 + 0x12600) - (DAT_0001263c + 0x125f8) >> 2) / 2 == 0) {
    return;
  }
  pcVar1 = *(code **)(DAT_00012644 + 0x12608 + DAT_00012648);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== FUN_00012720 @ 00012720 size=46 ===== */

void FUN_00012720(FILE *param_1)

{
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  
  fprintf(param_1,(char *)(DAT_00012740 + 0x12730),in_stack_00000000);
  (*(code *)PTR_vfprintf_0002b178)(param_1,in_stack_00000004,in_stack_00000008);
  return;
}



/* ===== FUN_00012744 @ 00012744 size=58 ===== */

char * FUN_00012744(int param_1)

{
  char *pcVar1;
  int iVar2;
  char *local_19c;
  utsname uStack_198;
  
  if (param_1 == 0) {
    iVar2 = uname(&uStack_198);
    pcVar1 = (char *)0x0;
    if ((-1 < iVar2) &&
       (iVar2 = asprintf(&local_19c,(char *)(DAT_00012784 + 0x12774),DAT_00012780 + 0x12770,
                         uStack_198.release), -1 < iVar2)) {
      pcVar1 = local_19c;
    }
  }
  else {
    pcVar1 = (char *)FUN_00019228();
  }
  return pcVar1;
}



/* ===== FUN_00012788 @ 00012788 size=70 ===== */

undefined4 FUN_00012788(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  char acStack_1010 [4100];
  
  snprintf(acStack_1010,0x1000,(char *)(DAT_000127d4 + 0x127a0),*(undefined4 *)(param_1 + 0x14),
           DAT_000127d0 + 0x1279a);
  iVar1 = FUN_00014d98(acStack_1010);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_00014e44(iVar1,param_2);
    FUN_00014df8(iVar1);
  }
  return uVar2;
}



/* ===== FUN_00012828 @ 00012828 size=30 ===== */

void FUN_00012828(int param_1)

{
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    (**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0xc));
  }
  return;
}



/* ===== kmod_get_dirname @ 00012846 size=4 ===== */

undefined4 kmod_get_dirname(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* ===== kmod_get_userdata @ 0001284a size=6 ===== */

undefined4 kmod_get_userdata(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x10);
  }
  return uVar1;
}



/* ===== kmod_set_userdata @ 00012850 size=6 ===== */

void kmod_set_userdata(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x10) = param_2;
  }
  return;
}



/* ===== kmod_ref @ 00012856 size=10 ===== */

void kmod_ref(int *param_1)

{
  if (param_1 != (int *)0x0) {
    *param_1 = *param_1 + 1;
  }
  return;
}



/* ===== kmod_get_log_priority @ 00012860 size=12 ===== */

undefined4 kmod_get_log_priority(int param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 4);
  }
  return 0xffffffff;
}



/* ===== kmod_set_log_fn @ 0001286c size=56 ===== */

void kmod_set_log_fn(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 8) = param_2;
    *(undefined4 *)(param_1 + 0xc) = param_3;
    iVar1 = kmod_get_log_priority();
    if (5 < iVar1) {
      FUN_00012828(param_1,6,DAT_000128a8 + 0x12894,0x16f,DAT_000128ac + 0x12898,
                   DAT_000128a4 + 0x1288e,param_2);
    }
  }
  return;
}



/* ===== FUN_000128b0 @ 000128b0 size=246 ===== */

int FUN_000128b0(int param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 local_1028 [1025];
  
  iVar1 = *(int *)(param_1 + (param_2 + 8) * 4);
  if (iVar1 == 0) {
    snprintf((char *)local_1028,0x1000,(char *)(DAT_000129ac + 0x128f2),
             *(undefined4 *)(param_1 + 0x14),*(undefined4 *)(DAT_000129a8 + 0x128ee + param_2 * 8));
    iVar1 = FUN_00014d98(local_1028);
    if (iVar1 == 0) {
      return -0x26;
    }
    iVar2 = FUN_00014eac(iVar1,param_3);
    FUN_00014df8(iVar1);
  }
  else {
    iVar2 = FUN_0001523a(iVar1,param_3);
  }
  iVar1 = 0;
  piVar7 = (int *)iVar2;
  while( true ) {
    if (piVar7 == (int *)0x0) {
      FUN_00014c14(iVar2);
      return iVar1;
    }
    iVar3 = FUN_0001577c(param_1,param_3,piVar7 + 3,local_1028);
    if (iVar3 < 0) break;
    iVar1 = iVar1 + 1;
    uVar6 = FUN_000137be(*param_4,local_1028[0]);
    piVar7 = (int *)*piVar7;
    *param_4 = uVar6;
  }
  iVar4 = kmod_get_log_priority(param_1);
  if (2 < iVar4) {
    pcVar5 = strerror(-iVar3);
    FUN_00012828(param_1,3,DAT_000129b0 + 0x12962,0x1ce,DAT_000129b8 + 0x1296c,
                 DAT_000129b4 + 0x12966,param_3,piVar7 + 3,pcVar5);
  }
  uVar6 = FUN_00013890(*param_4,iVar1);
  *param_4 = uVar6;
  FUN_00014c14(iVar2);
  return iVar3;
}



/* ===== kmod_set_log_priority @ 000129bc size=6 ===== */

void kmod_set_log_priority(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 4) = param_2;
  }
  return;
}



/* ===== kmod_new @ 000129c4 size=350 ===== */

undefined4 * kmod_new(undefined4 param_1,int param_2)

{
  undefined4 *__ptr;
  undefined4 uVar1;
  char *__nptr;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *local_1c;
  
  __ptr = calloc(1,0x60);
  iVar5 = DAT_00012b24 + 0x129de;
  if (__ptr == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  *__ptr = 1;
  __ptr[2] = DAT_00012b28 + 0x129f0;
  puVar2 = *(undefined4 **)(iVar5 + DAT_00012b2c);
  __ptr[1] = 3;
  __ptr[3] = *puVar2;
  uVar1 = FUN_00012744(param_1);
  __ptr[5] = uVar1;
  __nptr = (char *)secure_getenv(DAT_00012b30 + 0x12a0a);
  if (__nptr != (char *)0x0) {
    strtol(__nptr,(char **)&local_1c,10);
    if ((((*local_1c != 0) &&
         (-1 < (int)((uint)*(ushort *)(**(int **)(iVar5 + DAT_00012b34) + (uint)*local_1c * 2) <<
                    0x1a))) &&
        (iVar5 = strncmp(__nptr,(char *)(DAT_00012b38 + 0x12a3a),3), iVar5 != 0)) &&
       (iVar5 = strncmp(__nptr,(char *)(DAT_00012b3c + 0x12a4a),4), iVar5 != 0)) {
      strncmp(__nptr,(char *)(DAT_00012b40 + 0x12a5a),5);
    }
    kmod_set_log_priority(__ptr);
  }
  if (param_2 == 0) {
    param_2 = DAT_00012b44 + 0x12a72;
  }
  iVar5 = FUN_00013cd0(__ptr,__ptr + 6,param_2);
  if (iVar5 < 0) {
    iVar5 = kmod_get_log_priority(__ptr);
    if (iVar5 < 3) goto LAB_00012aa6;
    iVar3 = DAT_00012b48 + 0x12a92;
    iVar5 = DAT_00012b4c + 0x12a98;
    iVar4 = DAT_00012b50 + 0x12a9a;
    uVar1 = 0x117;
  }
  else {
    iVar5 = FUN_00018af8(0x100,0);
    __ptr[7] = iVar5;
    if (iVar5 != 0) {
      iVar5 = kmod_get_log_priority(__ptr);
      if (iVar5 < 6) {
        return __ptr;
      }
      FUN_00012828(__ptr,6,DAT_00012b64 + 0x12b0e,0x121,DAT_00012b68 + 0x12b12,
                   DAT_00012b60 + 0x12b08,__ptr);
      return __ptr;
    }
    iVar5 = kmod_get_log_priority(__ptr);
    if (iVar5 < 3) goto LAB_00012aa6;
    iVar3 = DAT_00012b54 + 0x12ae4;
    iVar5 = DAT_00012b58 + 0x12aea;
    iVar4 = DAT_00012b5c + 0x12aec;
    uVar1 = 0x11d;
  }
  FUN_00012828(__ptr,3,iVar5,uVar1,iVar4,iVar3);
LAB_00012aa6:
  free((void *)__ptr[7]);
  free((void *)__ptr[5]);
  free(__ptr);
  return (undefined4 *)0x0;
}



/* ===== FUN_00012b6c @ 00012b6c size=78 ===== */

undefined4 FUN_00012b6c(int param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  uint uVar3;
  void *pvVar4;
  undefined4 uVar5;
  int iVar6;
  char *local_18;
  undefined4 local_14;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  sVar2 = strlen(param_2);
  uVar3 = FUN_00018a74(param_2,sVar2);
  iVar6 = iVar1 + 0x10;
  iVar1 = (uVar3 & *(int *)(iVar1 + 8) - 1U) * 0xc;
  local_14 = 0;
  local_18 = param_2;
  pvVar4 = bsearch(&local_18,*(void **)(iVar6 + iVar1),*(size_t *)(iVar6 + iVar1 + 4),8,
                   (__compar_fn_t)(DAT_00018c7c + 0x18c66));
  uVar5 = 0;
  if (pvVar4 != (void *)0x0) {
    uVar5 = *(undefined4 *)((int)pvVar4 + 4);
  }
  return uVar5;
}



/* ===== FUN_00012b72 @ 00012b72 size=180 ===== */

int FUN_00012b72(int param_1,undefined4 param_2,char *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  size_t sVar3;
  uint uVar4;
  void *pvVar5;
  undefined4 *__src;
  int iVar6;
  undefined4 *puVar7;
  
  piVar2 = *(int **)(param_1 + 0x1c);
  sVar3 = strlen(param_3);
  uVar4 = FUN_00018a74(param_3,sVar3);
  uVar4 = piVar2[2] - 1U & uVar4;
  if ((uint)piVar2[uVar4 * 3 + 6] <= piVar2[uVar4 * 3 + 5] + 1U) {
    iVar6 = piVar2[uVar4 * 3 + 6] + piVar2[1];
    pvVar5 = realloc((void *)piVar2[uVar4 * 3 + 4],iVar6 * 8);
    if (pvVar5 == (void *)0x0) {
      piVar2 = __errno_location();
      return -*piVar2;
    }
    piVar2[uVar4 * 3 + 4] = (int)pvVar5;
    piVar2[uVar4 * 3 + 6] = iVar6;
  }
  puVar7 = (undefined4 *)piVar2[uVar4 * 3 + 4] + piVar2[uVar4 * 3 + 5] * 2;
  puVar1 = (undefined4 *)piVar2[uVar4 * 3 + 4];
  do {
    __src = puVar1;
    if (puVar7 <= __src) goto LAB_00018c1c;
    iVar6 = strcmp(param_3,(char *)*__src);
    if (iVar6 == 0) {
      if ((code *)piVar2[3] != (code *)0x0) {
        (*(code *)piVar2[3])(__src[1]);
      }
      *__src = param_3;
      __src[1] = param_2;
      return 0;
    }
    puVar1 = __src + 2;
  } while (-1 < iVar6);
  memmove(__src + 2,__src,(int)puVar7 - (int)__src);
LAB_00018c1c:
  iVar6 = piVar2[uVar4 * 3 + 5];
  *__src = param_3;
  __src[1] = param_2;
  piVar2[uVar4 * 3 + 5] = iVar6 + 1;
  *piVar2 = *piVar2 + 1;
  return 0;
}



/* ===== FUN_00012b7e @ 00012b7e size=194 ===== */

undefined4 FUN_00012b7e(int param_1,undefined4 param_2,char *param_3)

{
  int *piVar1;
  size_t sVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  char *local_28;
  undefined4 local_24;
  
  piVar1 = *(int **)(param_1 + 0x1c);
  sVar2 = strlen(param_3);
  uVar3 = FUN_00018a74(param_3,sVar2);
  local_24 = 0;
  uVar3 = piVar1[2] - 1U & uVar3;
  local_28 = param_3;
  pvVar4 = bsearch(&local_28,(void *)piVar1[uVar3 * 3 + 4],piVar1[uVar3 * 3 + 5],8,
                   (__compar_fn_t)(DAT_00018d3c + 0x18cac));
  if (pvVar4 == (void *)0x0) {
    uVar7 = 0xfffffffe;
  }
  else {
    if ((code *)piVar1[3] != (code *)0x0) {
      (*(code *)piVar1[3])(*(undefined4 *)((int)pvVar4 + 4));
    }
    memmove(pvVar4,(void *)((int)pvVar4 + 8),
            (piVar1[uVar3 * 3 + 4] + piVar1[uVar3 * 3 + 5] * 8) - (int)pvVar4);
    iVar10 = piVar1[1];
    iVar5 = piVar1[uVar3 * 3 + 5];
    iVar8 = *piVar1;
    piVar1[uVar3 * 3 + 5] = iVar5 + -1;
    *piVar1 = iVar8 + -1;
    iVar5 = FUN_000192ac(iVar5 + -1,iVar10);
    uVar9 = iVar5 + 1;
    uVar6 = FUN_000192ac(piVar1[uVar3 * 3 + 6],iVar10);
    if ((uVar9 < uVar6) &&
       (pvVar4 = realloc((void *)piVar1[uVar3 * 3 + 4],uVar9 * iVar10 * 8), pvVar4 != (void *)0x0))
    {
      iVar5 = piVar1[1];
      piVar1[uVar3 * 3 + 4] = (int)pvVar4;
      piVar1[uVar3 * 3 + 6] = iVar5 * uVar9;
    }
    uVar7 = 0;
  }
  return uVar7;
}



/* ===== FUN_00012b88 @ 00012b88 size=42 ===== */

undefined4 FUN_00012b88(undefined4 param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = strncmp(param_2,(char *)(DAT_00012bb4 + 0x12b9a),7);
  if (iVar1 == 0) {
    uVar2 = FUN_000128b0(param_1,2,param_2,param_3);
    return uVar2;
  }
  return 0;
}



/* ===== FUN_00012bb8 @ 00012bb8 size=10 ===== */

void FUN_00012bb8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_000128b0(param_1,1,param_2,param_3);
  return;
}



/* ===== FUN_00012bc4 @ 00012bc4 size=64 ===== */

undefined4 FUN_00012bc4(undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  int *piVar2;
  
  if (*param_3 != 0) {
    __assert((char *)(DAT_00012c0c + 0x12bde),(char *)(DAT_00012c08 + 0x12bdc),0x217);
  }
  uVar1 = FUN_000128b0();
  piVar2 = (int *)*param_3;
  do {
    if (piVar2 == (int *)0x0) {
      return uVar1;
    }
    FUN_0001563a(piVar2[2],1);
    piVar2 = (int *)*piVar2;
  } while (piVar2 != (int *)*param_3);
  return uVar1;
}



/* ===== FUN_00012c10 @ 00012c10 size=166 ===== */

int FUN_00012c10(int param_1,undefined4 param_2,int *param_3)

{
  int extraout_r0;
  void *__ptr;
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 local_1c;
  
  iVar1 = param_1;
  if (*param_3 != 0) {
    __assert((char *)(DAT_00012cc0 + 0x12c32),(char *)(DAT_00012cbc + 0x12c30),0x22b);
    iVar1 = extraout_r0;
  }
  if (*(int *)(iVar1 + 0x30) == 0) {
    __ptr = (void *)FUN_00012788();
  }
  else {
    __ptr = (void *)FUN_000151d4(*(int *)(iVar1 + 0x30));
  }
  if (__ptr == (void *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = kmod_module_new_from_name(param_1,param_2,&local_1c);
    if (iVar1 < 0) {
      iVar2 = kmod_get_log_priority(param_1);
      if (2 < iVar2) {
        pcVar3 = strerror(-iVar1);
        FUN_00012828(param_1,3,DAT_00012cc8 + 0x12c72,0x234,DAT_00012ccc + 0x12c74,
                     DAT_00012cc4 + 0x12c6c,param_2,pcVar3);
      }
    }
    else {
      FUN_0001563a(local_1c,1);
      iVar2 = FUN_000137be(*param_3,local_1c);
      *param_3 = iVar2;
      if (iVar2 == 0) {
        iVar1 = -0xc;
      }
    }
  }
  free(__ptr);
  return iVar1;
}



/* ===== FUN_00012cd0 @ 00012cd0 size=32 ===== */

bool FUN_00012cd0(int param_1)

{
  void *__ptr;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    __ptr = (void *)FUN_00012788();
  }
  else {
    __ptr = (void *)FUN_000151d4(*(int *)(param_1 + 0x30));
  }
  free(__ptr);
  return __ptr != (void *)0x0;
}



/* ===== FUN_00012cf0 @ 00012cf0 size=84 ===== */

undefined4 FUN_00012cf0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  char acStack_1010 [4100];
  
  if (*(int *)(param_1 + 0x20) != 0) {
    uVar2 = FUN_000151d4(*(int *)(param_1 + 0x20));
    return uVar2;
  }
  snprintf(acStack_1010,0x1000,(char *)(DAT_00012824 + 0x127f0),*(undefined4 *)(param_1 + 0x14),
           DAT_00012820 + 0x127ea);
  iVar1 = FUN_00014d98(acStack_1010);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_00014e44(iVar1,param_2);
    FUN_00014df8(iVar1);
  }
  return uVar2;
}



/* ===== FUN_00012d00 @ 00012d00 size=144 ===== */

int FUN_00012d00(undefined4 param_1,char *param_2,undefined4 *param_3)

{
  char *pcVar1;
  void *__ptr;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_1c;
  
  pcVar1 = strchr(param_2,0x3a);
  if (pcVar1 == (char *)0x0) {
    __ptr = (void *)FUN_00012cf0(param_1,param_2);
    if (__ptr == (void *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = kmod_module_new_from_name(param_1,param_2,&local_1c);
      if (iVar2 < 0) {
        iVar3 = kmod_get_log_priority(param_1);
        if (2 < iVar3) {
          pcVar1 = strerror(-iVar2);
          FUN_00012828(param_1,3,DAT_00012d94 + 0x12d52,0x280,DAT_00012d98 + 0x12d54,
                       DAT_00012d90 + 0x12d4c,param_2,pcVar1);
        }
      }
      else {
        uVar4 = FUN_000137be(*param_3,local_1c);
        *param_3 = uVar4;
        FUN_00015920(local_1c,__ptr);
      }
    }
    free(__ptr);
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}



/* ===== FUN_00012d9c @ 00012d9c size=172 ===== */

int FUN_00012d9c(int param_1,char *param_2,undefined4 *param_3)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 local_2c [2];
  
  iVar6 = *(int *)(param_1 + 0x18);
  iVar5 = 0;
  piVar4 = *(int **)(iVar6 + 4);
  do {
    if (piVar4 == (int *)0x0) {
      return iVar5;
    }
    pcVar1 = (char *)FUN_000138ac(piVar4);
    uVar2 = FUN_000138b2(piVar4);
    iVar3 = fnmatch(pcVar1,param_2,0);
    if (iVar3 == 0) {
      iVar3 = FUN_0001577c(param_1,pcVar1,uVar2,local_2c);
      if (iVar3 < 0) {
        iVar6 = kmod_get_log_priority(param_1);
        if (2 < iVar6) {
          pcVar1 = strerror(-iVar3);
          FUN_00012828(param_1,3,DAT_00012e4c + 0x12e08,0x2a0,DAT_00012e50 + 0x12e0e,
                       DAT_00012e48 + 0x12e02,param_2,uVar2,pcVar1);
        }
        uVar2 = FUN_00013890(*param_3,iVar5);
        *param_3 = uVar2;
        return iVar3;
      }
      iVar5 = iVar5 + 1;
      uVar2 = FUN_000137be(*param_3,local_2c[0]);
      *param_3 = uVar2;
    }
    piVar4 = (int *)*piVar4;
  } while (piVar4 != (int *)*(int *)(iVar6 + 4));
  return iVar5;
}



/* ===== FUN_00012e54 @ 00012e54 size=346 ===== */

int FUN_00012e54(int param_1,char *param_2,int *param_3)

{
  char *__s1;
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 local_24 [2];
  
  iVar7 = *(int *)(param_1 + 0x18);
  piVar6 = *(int **)(iVar7 + 0x14);
  do {
    if (piVar6 == (int *)0x0) break;
    __s1 = (char *)FUN_000138ca(piVar6);
    iVar1 = strcmp(__s1,param_2);
    if (iVar1 == 0) {
      uVar2 = FUN_000138c4(piVar6);
      iVar7 = kmod_module_new_from_name(param_1,__s1,local_24);
      if (iVar7 < 0) {
        iVar1 = kmod_get_log_priority(param_1);
        if (iVar1 < 3) {
          return iVar7;
        }
        pcVar3 = strerror(-iVar7);
        iVar4 = DAT_00012fb0 + 0x12ea8;
        iVar1 = DAT_00012fb4 + 0x12eae;
        iVar5 = DAT_00012fb8 + 0x12eb0;
        uVar2 = 0x2c1;
        goto LAB_00012eb8;
      }
      iVar7 = FUN_000137be(*param_3,local_24[0]);
      if (iVar7 != 0) {
        *param_3 = iVar7;
        FUN_000161ae(local_24[0],uVar2);
        return 1;
      }
      iVar7 = kmod_get_log_priority(param_1);
      if (iVar7 < 3) {
        return -0xc;
      }
      iVar1 = DAT_00012fbc + 0x12ee4;
      iVar7 = DAT_00012fc0 + 0x12eea;
      iVar4 = DAT_00012fc4 + 0x12eec;
      uVar2 = 0x2c7;
      goto LAB_00012ef0;
    }
    piVar6 = (int *)*piVar6;
  } while (piVar6 != (int *)*(int *)(iVar7 + 0x14));
  piVar6 = *(int **)(iVar7 + 0x10);
  while( true ) {
    if (piVar6 == (int *)0x0) {
      return 0;
    }
    __s1 = (char *)FUN_000138ca(piVar6);
    iVar1 = strcmp(__s1,param_2);
    if (iVar1 == 0) break;
    piVar6 = (int *)*piVar6;
    if (piVar6 == (int *)*(int *)(iVar7 + 0x10)) {
      return 0;
    }
  }
  uVar2 = FUN_000138c4(piVar6);
  iVar7 = kmod_module_new_from_name(param_1,__s1,local_24);
  if (iVar7 < 0) {
    iVar1 = kmod_get_log_priority(param_1);
    if (iVar1 < 3) {
      return iVar7;
    }
    pcVar3 = strerror(-iVar7);
    iVar4 = DAT_00012fc8 + 0x12f5a;
    iVar1 = DAT_00012fcc + 0x12f60;
    iVar5 = DAT_00012fd0 + 0x12f62;
    uVar2 = 0x2e5;
LAB_00012eb8:
    FUN_00012828(param_1,3,iVar1,uVar2,iVar5,iVar4,__s1,pcVar3);
    return iVar7;
  }
  iVar7 = FUN_000137be(*param_3,local_24[0]);
  if (iVar7 != 0) {
    *param_3 = iVar7;
    FUN_00016474(local_24[0],uVar2);
    return 1;
  }
  iVar7 = kmod_get_log_priority(param_1);
  if (2 < iVar7) {
    iVar1 = DAT_00012fd4 + 0x12f88;
    iVar7 = DAT_00012fd8 + 0x12f8e;
    iVar4 = DAT_00012fdc + 0x12f90;
    uVar2 = 0x2eb;
LAB_00012ef0:
    FUN_00012828(param_1,3,iVar7,uVar2,iVar4,iVar1);
  }
  return -0xc;
}



/* ===== FUN_00012fe0 @ 00012fe0 size=42 ===== */

void FUN_00012fe0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_20 = param_1;
  uStack_1c = param_2;
  uStack_18 = param_3;
  uStack_14 = param_4;
  FUN_00018d40(*(undefined4 *)(param_1 + 0x1c),&uStack_1c);
  while (iVar1 = FUN_00018d4e(&uStack_1c,0,&local_20), iVar1 != 0) {
    FUN_0001562c(local_20,param_2);
  }
  return;
}



/* ===== FUN_0001300a @ 0001300a size=42 ===== */

void FUN_0001300a(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_20 = param_1;
  uStack_1c = param_2;
  uStack_18 = param_3;
  uStack_14 = param_4;
  FUN_00018d40(*(undefined4 *)(param_1 + 0x1c),&uStack_1c);
  while (iVar1 = FUN_00018d4e(&uStack_1c,0,&local_20), iVar1 != 0) {
    FUN_00015646(local_20,param_2);
  }
  return;
}



/* ===== kmod_validate_resources @ 00013034 size=186 ===== */

undefined4 kmod_validate_resources(int param_1)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  char *__format;
  int *piVar4;
  int *piVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  longlong lVar8;
  stat64 sStack_1090;
  stat64 asStack_1028 [39];
  
  if ((param_1 == 0) || (*(int *)(param_1 + 0x18) == 0)) {
LAB_0001305e:
    uVar3 = 2;
  }
  else {
    piVar4 = *(int **)(*(int *)(param_1 + 0x18) + 0x1c);
    do {
      if (piVar4 == (int *)0x0) break;
      lVar1 = *(longlong *)piVar4[2];
      iVar2 = stat64((char *)((longlong *)piVar4[2] + 1),asStack_1028);
      if ((iVar2 < 0) || (lVar8 = FUN_0001928c(asStack_1028), lVar8 != lVar1)) goto LAB_0001305e;
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)*(int *)(*(int *)(param_1 + 0x18) + 0x1c));
    puVar7 = (undefined4 *)(DAT_000130f0 + 0x1308c);
    plVar6 = (longlong *)(param_1 + 0x38);
    __format = (char *)(DAT_000130f4 + 0x13098);
    piVar4 = (int *)(param_1 + 0x20);
    do {
      piVar5 = piVar4 + 1;
      if (*piVar4 != 0) {
        snprintf((char *)asStack_1028,0x1000,__format,*(undefined4 *)(param_1 + 0x14),*puVar7);
        lVar1 = *plVar6;
        iVar2 = stat64((char *)asStack_1028,&sStack_1090);
        if ((iVar2 < 0) || (lVar8 = FUN_0001928c(&sStack_1090), lVar8 != lVar1)) {
          return 1;
        }
      }
      puVar7 = puVar7 + 2;
      plVar6 = plVar6 + 1;
      piVar4 = piVar5;
    } while ((int *)(param_1 + 0x34) != piVar5);
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== kmod_unload_resources @ 000130f8 size=58 ===== */

void kmod_unload_resources(int param_1)

{
  int *piVar1;
  undefined8 *puVar3;
  int *piVar2;
  
  if (param_1 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x38);
    piVar1 = (int *)(param_1 + 0x20);
    do {
      piVar2 = piVar1 + 1;
      if (*piVar1 != 0) {
        FUN_00015188();
        *piVar1 = 0;
        *puVar3 = 0;
      }
      puVar3 = puVar3 + 1;
      piVar1 = piVar2;
    } while (piVar2 != (int *)(param_1 + 0x34));
  }
  return;
}



/* ===== kmod_unref @ 00013134 size=94 ===== */

int * kmod_unref(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = param_1;
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    *param_1 = iVar1 + -1;
    if (iVar1 + -1 < 1) {
      iVar1 = kmod_get_log_priority();
      if (5 < iVar1) {
        FUN_00012828(param_1,6,DAT_00013198 + 0x1315e,0x14e,DAT_0001319c + 0x13162,
                     DAT_00013194 + 0x13158,param_1,param_4);
      }
      kmod_unload_resources(param_1);
      FUN_00018b38(param_1[7]);
      free((void *)param_1[5]);
      if (param_1[6] != 0) {
        FUN_00013c32();
      }
      piVar2 = (int *)0x0;
      free(param_1);
    }
  }
  return piVar2;
}



/* ===== kmod_load_resources @ 000131a0 size=176 ===== */

int kmod_load_resources(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  char *__format;
  char acStack_1028 [4100];
  
  if (param_1 == 0) {
    iVar2 = -2;
  }
  else {
    iVar3 = 0;
    puVar4 = (undefined4 *)(DAT_00013250 + 0x131c4);
    __format = (char *)(DAT_00013254 + 0x131c8);
    iVar6 = DAT_00013258 + 0x131ca;
    iVar2 = DAT_0001325c + 0x131cc;
    piVar5 = (int *)(param_1 + 0x20);
    do {
      if (*piVar5 == 0) {
        snprintf(acStack_1028,0x1000,__format,*(undefined4 *)(param_1 + 0x14),*puVar4);
        iVar1 = FUN_00014fc4(param_1,acStack_1028,param_1 + 0x38 + iVar3 * 8,piVar5);
        if ((iVar1 != 0) && (iVar3 != 3)) {
          kmod_unload_resources(param_1);
          return iVar1;
        }
      }
      else {
        iVar1 = kmod_get_log_priority(param_1);
        if (5 < iVar1) {
          FUN_00012828(param_1,6,iVar6,0x367,DAT_00013260 + 0x131f2,iVar2,*puVar4);
        }
      }
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 2;
      piVar5 = piVar5 + 1;
    } while (iVar3 != 5);
    iVar2 = 0;
  }
  return iVar2;
}



/* ===== kmod_dump_index @ 00013264 size=130 ===== */

undefined4 kmod_dump_index(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char acStack_1018 [4096];
  
  if (param_1 == 0) {
LAB_000132c6:
    uVar1 = 0xffffffda;
  }
  else {
    if (4 < param_2) {
      return 0xfffffffe;
    }
    iVar2 = *(int *)(param_1 + (param_2 + 8) * 4);
    if (iVar2 == 0) {
      iVar3 = DAT_000132ec + 0x132aa;
      snprintf(acStack_1018,0x1000,(char *)(DAT_000132f0 + 0x132ac),*(undefined4 *)(param_1 + 0x14),
               *(undefined4 *)(iVar3 + param_2 * 8));
      iVar2 = FUN_00014d98(acStack_1018);
      if (iVar2 == 0) goto LAB_000132c6;
      FUN_00014e0c(iVar2,param_3,*(undefined4 *)(iVar3 + param_2 * 8 + 4));
      FUN_00014df8(iVar2);
    }
    else {
      FUN_0001519e(iVar2,param_3,*(undefined4 *)(DAT_000132e8 + param_2 * 8 + 0x1328e));
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_000132f4 @ 000132f4 size=4 ===== */

undefined4 FUN_000132f4(int param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



/* ===== FUN_000132f8 @ 000132f8 size=192 ===== */

undefined8
FUN_000132f8(int param_1,undefined4 param_2,uint param_3,int param_4,undefined4 *param_5,
            uint *param_6)

{
  size_t __n;
  int *piVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  uint __size;
  uint uVar5;
  bool bVar6;
  char acStack_1028 [4100];
  
  uVar5 = 0;
  do {
    __n = pread64(*(int *)(param_1 + 4),acStack_1028,0x1000,CONCAT44(param_4,param_3));
    if ((int)__n < 0) {
LAB_00013322:
      piVar1 = __errno_location();
      param_3 = 0xffffffff;
      param_4 = -1;
      iVar4 = *piVar1;
      piVar1 = __errno_location();
      *piVar1 = iVar4;
      goto LAB_00013336;
    }
    if (__n == 0) {
      param_3 = 0;
      param_4 = 0;
      __size = uVar5;
      goto LAB_00013350;
    }
    pvVar2 = memchr(acStack_1028,0,__n);
    if (pvVar2 != (void *)0x0) {
      __n = (int)pvVar2 + (1 - (int)acStack_1028);
    }
    bVar6 = CARRY4(param_3,__n);
    param_3 = param_3 + __n;
    __size = __n + uVar5;
    param_4 = param_4 + (uint)bVar6;
    if (*(uint *)(param_1 + 0x24) < __size) {
      *(uint *)(param_1 + 0x24) = __size;
      pvVar3 = realloc(*(void **)(param_1 + 0x28),__size);
      *(void **)(param_1 + 0x28) = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_00013322;
    }
    strncpy((char *)(*(int *)(param_1 + 0x28) + uVar5),acStack_1028,__n);
    uVar5 = __size;
    if (pvVar2 != (void *)0x0) {
LAB_00013350:
      if (__size != 0) {
        *param_5 = *(undefined4 *)(param_1 + 0x28);
        *param_6 = __size;
      }
LAB_00013336:
      return CONCAT44(param_4,param_3);
    }
  } while( true );
}



/* ===== FUN_000133b8 @ 000133b8 size=160 ===== */

undefined4 * FUN_000133b8(undefined4 param_1)

{
  char *__s;
  size_t sVar1;
  int __fd;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  stat64 sStack_1078;
  char acStack_1010 [4096];
  
  __s = (char *)kmod_get_dirname();
  sVar1 = strlen(__s);
  if (sVar1 + 0x19 < 0x1000) {
    snprintf(acStack_1010,0x1000,(char *)(DAT_0001345c + 0x133e8),__s,DAT_00013458 + 0x133e0);
    __fd = open64(acStack_1010,0x80000);
    if (__fd < 0) {
      piVar2 = __errno_location();
      iVar4 = *piVar2;
    }
    else {
      iVar4 = fstat64(__fd,&sStack_1078);
      if (iVar4 < 0) {
        piVar2 = __errno_location();
        iVar4 = *piVar2;
      }
      else {
        puVar3 = malloc(0x30);
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = param_1;
          puVar3[1] = __fd;
          *(undefined8 *)(puVar3 + 4) = 0;
          puVar3[2] = (undefined4)sStack_1078.st_size;
          puVar3[8] = 0;
          *(undefined8 *)(puVar3 + 6) = 0;
          puVar3[9] = 0;
          puVar3[10] = 0;
          return puVar3;
        }
        iVar4 = 0xc;
      }
      close(__fd);
    }
  }
  else {
    iVar4 = 0x24;
  }
  piVar2 = __errno_location();
  *piVar2 = iVar4;
  return (undefined4 *)0x0;
}



/* ===== FUN_00013460 @ 00013460 size=26 ===== */

void FUN_00013460(int param_1)

{
  close(*(int *)(param_1 + 4));
  free(*(void **)(param_1 + 0x28));
  (*(code *)PTR_free_0002b180)(param_1);
  return;
}



/* ===== FUN_0001347c @ 0001347c size=284 ===== */

void FUN_0001347c(undefined4 *param_1)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  size_t __n;
  uint uVar5;
  char *__s1;
  undefined4 uVar6;
  int iVar7;
  bool bVar8;
  longlong lVar9;
  size_t local_40;
  int iStack_3c;
  char *local_30;
  
  __s1 = (char *)0x0;
  param_1[8] = 0;
  lVar1 = *(longlong *)(param_1 + 6);
  do {
    iVar7 = (int)((ulonglong)lVar1 >> 0x20);
    uVar5 = param_1[2];
    bVar8 = (uint)lVar1 < uVar5;
    iVar2 = (int)uVar5 >> 0x1f;
    if ((int)((iVar7 - iVar2) - (uint)bVar8) < 0 ==
        (SBORROW4(iVar7,iVar2) != SBORROW4(iVar7 - iVar2,(uint)bVar8))) {
LAB_000134fc:
      uVar6 = param_1[6];
      *(longlong *)(param_1 + 6) = lVar1;
      param_1[4] = uVar6;
      param_1[5] = param_1[7];
      free(__s1);
      return;
    }
    lVar9 = FUN_000132f8(param_1);
    if ((int)((ulonglong)lVar9 >> 0x20) < (int)(uint)((int)lVar9 == 0)) {
      if ((lVar9 != 0) && (iVar2 = kmod_get_log_priority(*param_1), 2 < iVar2)) {
        piVar3 = __errno_location();
        uVar6 = *param_1;
        pcVar4 = strerror(*piVar3);
        FUN_00012828(uVar6,3,DAT_0001359c + 0x134ec,0xba,DAT_000135a0 + 0x134ee,
                     DAT_00013598 + 0x134e6,pcVar4);
      }
LAB_000134f8:
      lVar1 = (longlong)(int)param_1[2];
      goto LAB_000134fc;
    }
    pcVar4 = strchr(local_30,0x2e);
    if (pcVar4 == (char *)0x0) {
      iVar2 = kmod_get_log_priority(*param_1);
      if (2 < iVar2) {
        FUN_00012828(*param_1,3,DAT_000135a8 + 0x13550,0xc1,DAT_000135ac + 0x13554,
                     DAT_000135a4 + 0x1354a);
      }
      goto LAB_000134f8;
    }
    __n = (int)pcVar4 - (int)local_30;
    if (__s1 == (char *)0x0) {
      __s1 = strdup(local_30);
      local_40 = __n;
      iStack_3c = (int)__n >> 0x1f;
    }
    else if ((iStack_3c != (int)__n >> 0x1f || local_40 != __n) ||
            (iVar2 = strncmp(__s1,local_30,__n), iVar2 != 0)) goto LAB_000134fc;
    param_1[8] = param_1[8] + 1;
    lVar1 = lVar9;
  } while( true );
}



/* ===== FUN_000135b0 @ 000135b0 size=220 ===== */

undefined4 FUN_000135b0(undefined4 *param_1,char *param_2)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_1[5] != (int)param_1[2] >> 0x1f || param_1[4] != param_1[2]) {
    lVar6 = FUN_000132f8();
    if ((int)((ulonglong)lVar6 >> 0x20) < (int)(uint)((int)lVar6 == 0)) {
      piVar1 = __errno_location();
      iVar4 = *piVar1;
      if ((lVar6 != 0) && (iVar2 = kmod_get_log_priority(*param_1), 2 < iVar2)) {
        uVar5 = *param_1;
        pcVar3 = strerror(*piVar1);
        FUN_00012828(uVar5,3,DAT_00013690 + 0x13618,0xec,DAT_00013694 + 0x1361a,
                     DAT_0001368c + 0x13612,pcVar3);
      }
    }
    else {
      pcVar3 = strchr((char *)0x0,0x2e);
      if (pcVar3 == (char *)0x0) {
        piVar1 = __errno_location();
        iVar4 = *piVar1;
        iVar2 = kmod_get_log_priority(*param_1);
        if (2 < iVar2) {
          FUN_00012828(*param_1,3,DAT_0001369c + 0x1365a,0xf3,DAT_000136a0 + 0x1365c,
                       DAT_00013698 + 0x13654);
        }
      }
      else {
        if (pcVar3 < (char *)0x1000) {
          strncpy(param_2,(char *)0x0,(size_t)pcVar3);
          param_2[(int)pcVar3] = '\0';
          return 1;
        }
        iVar4 = 0x24;
      }
    }
    piVar1 = __errno_location();
    *piVar1 = iVar4;
  }
  return 0;
}



/* ===== FUN_000136a4 @ 000136a4 size=282 ===== */

int FUN_000136a4(undefined4 param_1,char *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  size_t sVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  longlong lVar13;
  uint local_1040;
  int iStack_103c;
  int local_1030;
  int local_102c;
  char acStack_1028 [4100];
  
  local_1030 = 0;
  iVar1 = FUN_000133b8();
  if (iVar1 == 0) {
    piVar2 = __errno_location();
    iVar3 = -*piVar2;
  }
  else {
    do {
      iVar3 = FUN_0001347c(iVar1);
      if (iVar3 == 0) {
        iVar3 = -0x26;
        goto LAB_00013706;
      }
      iVar3 = FUN_000135b0(iVar1,acStack_1028);
      if (iVar3 == 0) goto LAB_000136e0;
      iVar3 = strcmp(param_2,acStack_1028);
    } while (iVar3 != 0);
    sVar5 = strlen(param_2);
    lVar13 = *(longlong *)(iVar1 + 0x10);
    iVar3 = *(int *)(iVar1 + 0x20);
    iVar8 = (iVar3 + 1) * 4;
    iVar11 = sVar5 + 1;
    pvVar6 = malloc(((*(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x10)) + iVar8) - iVar11 * iVar3);
    *param_3 = (int)pvVar6;
    if (pvVar6 == (void *)0x0) {
LAB_000136e0:
      piVar2 = __errno_location();
      iVar3 = -*piVar2;
    }
    else {
      iVar9 = 0;
      iVar10 = 0;
      while( true ) {
        iStack_103c = (int)((ulonglong)lVar13 >> 0x20);
        local_1040 = (uint)lVar13;
        iVar7 = *(int *)(iVar1 + 0x1c);
        bVar12 = local_1040 < *(uint *)(iVar1 + 0x18);
        if ((int)((iStack_103c - iVar7) - (uint)bVar12) < 0 ==
            (SBORROW4(iStack_103c,iVar7) != SBORROW4(iStack_103c - iVar7,(uint)bVar12))) break;
        lVar13 = FUN_000132f8(iVar1,iStack_103c,local_1040,iStack_103c,&local_1030,&local_102c);
        if ((int)((ulonglong)lVar13 >> 0x20) < (int)(uint)((int)lVar13 == 0)) {
          if (lVar13 == 0) {
            iVar3 = -0x16;
          }
          else {
            piVar2 = __errno_location();
            iVar3 = -*piVar2;
          }
          free((void *)*param_3);
          break;
        }
        pcVar4 = strcpy((char *)(iVar8 + iVar10 + (int)pvVar6),(char *)(local_1030 + iVar11));
        iVar10 = iVar10 + (local_102c - iVar11);
        *(char **)(*param_3 + iVar9) = pcVar4;
        iVar9 = iVar9 + 4;
      }
    }
LAB_00013706:
    FUN_00013460(iVar1);
  }
  return iVar3;
}



/* ===== FUN_000137be @ 000137be size=38 ===== */

int * FUN_000137be(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = malloc(0xc);
  if (piVar1 != (int *)0x0) {
    piVar1[2] = param_2;
    if (param_1 == (int *)0x0) {
      *piVar1 = (int)piVar1;
      piVar1[1] = (int)piVar1;
    }
    else {
      puVar2 = (undefined4 *)param_1[1];
      piVar1[1] = (int)puVar2;
      *puVar2 = piVar1;
      param_1[1] = (int)piVar1;
      *piVar1 = (int)param_1;
      piVar1 = param_1;
    }
  }
  return piVar1;
}



/* ===== FUN_000137e4 @ 000137e4 size=38 ===== */

void FUN_000137e4(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if (param_1 == 0) {
    FUN_000137be();
    return;
  }
  piVar1 = malloc(0xc);
  if (piVar1 != (int *)0x0) {
    puVar2 = *(undefined4 **)(param_1 + 4);
    piVar1[2] = param_2;
    *piVar1 = param_1;
    piVar1[1] = (int)puVar2;
    *puVar2 = piVar1;
    *(int **)(param_1 + 4) = piVar1;
  }
  return;
}



/* ===== FUN_0001380a @ 0001380a size=22 ===== */

int FUN_0001380a(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = param_2;
  if ((param_1 != 0) && (iVar1 = param_1, param_2 != 0)) {
    piVar3 = *(int **)(param_1 + 4);
    piVar2 = *(int **)(param_2 + 4);
    *piVar3 = param_2;
    *piVar2 = param_1;
    *(int **)(param_1 + 4) = piVar2;
    *(int **)(param_2 + 4) = piVar3;
    return param_1;
  }
  return iVar1;
}



/* ===== FUN_00013820 @ 00013820 size=36 ===== */

void FUN_00013820(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = malloc(0xc);
  if (piVar1 != (int *)0x0) {
    piVar1[2] = param_2;
    if (param_1 == 0) {
      *piVar1 = (int)piVar1;
      piVar1[1] = (int)piVar1;
    }
    else {
      puVar2 = *(undefined4 **)(param_1 + 4);
      piVar1[1] = (int)puVar2;
      *puVar2 = piVar1;
      *(int **)(param_1 + 4) = piVar1;
      *piVar1 = param_1;
    }
  }
  return;
}



/* ===== FUN_00013844 @ 00013844 size=32 ===== */

void * FUN_00013844(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  
  pvVar2 = (void *)0x0;
  if (param_1 != (void *)0x0) {
    puVar1 = (undefined4 *)param_1[1];
    if ((param_1 == puVar1) || (pvVar2 = (void *)*param_1, param_1 == pvVar2)) {
      pvVar2 = (void *)0x0;
    }
    else {
      *puVar1 = pvVar2;
      *(undefined4 **)((int)pvVar2 + 4) = puVar1;
    }
    free(param_1);
  }
  return pvVar2;
}



/* ===== kmod_list_prev @ 00013864 size=18 ===== */

undefined4 kmod_list_prev(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_2 == 0) {
      return 0;
    }
    if (param_1 != param_2) {
      return *(undefined4 *)(param_2 + 4);
    }
  }
  return 0;
}



/* ===== kmod_list_next @ 00013876 size=20 ===== */

int kmod_list_next(int param_1,int *param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    if ((param_2 != (int *)0x0) && (iVar1 = *param_2, iVar1 == param_1)) {
      iVar1 = 0;
    }
  }
  return iVar1;
}



/* ===== kmod_list_last @ 0001388a size=6 ===== */

undefined4 kmod_list_last(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 4);
  }
  return uVar1;
}



/* ===== FUN_00013890 @ 00013890 size=24 ===== */

void FUN_00013890(undefined4 param_1,int param_2)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 != param_2; iVar1 = iVar1 + 1) {
    kmod_list_last();
    FUN_00013844();
  }
  return;
}



/* ===== FUN_000138a8 @ 000138a8 size=4 ===== */

undefined4 FUN_000138a8(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* ===== FUN_000138ac @ 000138ac size=6 ===== */

undefined4 FUN_000138ac(int param_1)

{
  return **(undefined4 **)(param_1 + 8);
}



/* ===== FUN_000138b2 @ 000138b2 size=6 ===== */

int FUN_000138b2(int param_1)

{
  return *(int *)(param_1 + 8) + 4;
}



/* ===== FUN_000138b8 @ 000138b8 size=6 ===== */

undefined4 FUN_000138b8(int param_1)

{
  return **(undefined4 **)(param_1 + 8);
}



/* ===== FUN_000138be @ 000138be size=6 ===== */

int FUN_000138be(int param_1)

{
  return *(int *)(param_1 + 8) + 4;
}



/* ===== FUN_000138c4 @ 000138c4 size=6 ===== */

undefined4 FUN_000138c4(int param_1)

{
  return **(undefined4 **)(param_1 + 8);
}



/* ===== FUN_000138ca @ 000138ca size=6 ===== */

int FUN_000138ca(int param_1)

{
  return *(int *)(param_1 + 8) + 4;
}



/* ===== FUN_000138d0 @ 000138d0 size=6 ===== */

undefined4 FUN_000138d0(int param_1)

{
  return **(undefined4 **)(param_1 + 8);
}



/* ===== FUN_000138d8 @ 000138d8 size=198 ===== */

char * FUN_000138d8(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  size_t sVar3;
  char *__dest;
  int *piVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  
  iVar8 = *(int *)(param_1 + 8);
  if (*(int *)(iVar8 + 0xc) == 0) {
    pcVar5 = (char *)0x1;
    pcVar7 = (char *)0x0;
  }
  else {
    piVar4 = *(int **)(iVar8 + 4);
    pcVar7 = (char *)piVar4[*(int *)(iVar8 + 0xc) + 0x3fffffff];
    sVar3 = strlen(pcVar7);
    pcVar7 = pcVar7 + (sVar3 - *piVar4);
    pcVar5 = pcVar7 + 6;
  }
  pcVar6 = (char *)0x0;
  if (*(int *)(iVar8 + 0x10) != 0) {
    piVar4 = *(int **)(iVar8 + 8);
    pcVar6 = (char *)piVar4[*(int *)(iVar8 + 0x10) + 0x3fffffff];
    sVar3 = strlen(pcVar6);
    pcVar6 = pcVar6 + (sVar3 - *piVar4);
    pcVar5 = pcVar5 + 6 + (int)pcVar6;
  }
  pcVar5 = malloc((size_t)pcVar5);
  if (pcVar5 != (char *)0x0) {
    __dest = pcVar5;
    if (pcVar7 != (char *)0x0) {
      cVar1 = *(char *)(DAT_000139a0 + 0x1393a);
      *(undefined4 *)pcVar5 = *(undefined4 *)(DAT_000139a0 + 0x13936);
      __dest = pcVar5 + 5;
      pcVar5[4] = cVar1;
      memcpy(__dest,(void *)**(undefined4 **)(iVar8 + 4),(size_t)(pcVar7 + 1));
      pcVar7 = __dest + (int)pcVar7;
      for (; __dest < pcVar7; __dest = __dest + 1) {
        if (*__dest == '\0') {
          *__dest = ' ';
        }
      }
    }
    if (pcVar6 != (char *)0x0) {
      uVar2 = *(undefined2 *)(DAT_000139a4 + 0x13964);
      *(undefined4 *)__dest = *(undefined4 *)(DAT_000139a4 + 0x13960);
      *(undefined2 *)(__dest + 4) = uVar2;
      __dest = memcpy(__dest + 6,(void *)**(undefined4 **)(iVar8 + 8),(size_t)(pcVar6 + 1));
      pcVar6 = __dest + (int)pcVar6;
      for (; __dest < pcVar6; __dest = __dest + 1) {
        if (*__dest == '\0') {
          *__dest = ' ';
        }
      }
    }
    *__dest = '\0';
  }
  return pcVar5;
}



/* ===== FUN_00013a64 @ 00013a64 size=176 ===== */

undefined4 FUN_00013a64(int *param_1,char *param_2,char *param_3)

{
  bool bVar1;
  int iVar2;
  size_t sVar3;
  undefined4 *__ptr;
  int *piVar4;
  int *piVar5;
  
  bVar1 = param_3 == (char *)0x0;
  if (bVar1) {
    param_3 = basename(param_2);
  }
  piVar5 = (int *)*param_1;
  iVar2 = -1;
  piVar4 = piVar5;
  do {
    if ((piVar4 == (int *)0x0) || (iVar2 = strcmp(param_3,(char *)(piVar4[2] + 5)), iVar2 < 1)) {
      if (iVar2 == 0) {
        return 0xffffffef;
      }
      goto LAB_00013a8c;
    }
    piVar4 = (int *)*piVar4;
  } while (piVar4 != piVar5);
  piVar4 = (int *)0x0;
LAB_00013a8c:
  sVar3 = strlen(param_3);
  __ptr = malloc(sVar3 + 9);
  if (__ptr == (undefined4 *)0x0) {
    return 0xfffffff4;
  }
  memcpy((void *)((int)__ptr + 5),param_3,sVar3 + 1);
  *__ptr = param_2;
  *(bool *)(__ptr + 1) = bVar1;
  if (piVar4 == (int *)0x0) {
    iVar2 = FUN_000137be(piVar5);
    if (iVar2 != 0) {
LAB_00013afe:
      *param_1 = iVar2;
      return 0;
    }
  }
  else {
    if (piVar5 == piVar4) {
      iVar2 = FUN_00013820();
    }
    else {
      iVar2 = FUN_000137e4(piVar4,__ptr);
    }
    if (iVar2 != 0) {
      if ((int *)*param_1 != piVar4) {
        return 0;
      }
      goto LAB_00013afe;
    }
  }
  free(__ptr);
  return 0xfffffff4;
}



/* ===== FUN_00013b14 @ 00013b14 size=116 ===== */

undefined4 FUN_00013b14(int *param_1,char *param_2,char *param_3)

{
  size_t sVar1;
  size_t sVar2;
  undefined4 *__ptr;
  int iVar3;
  void *__dest;
  undefined4 uVar4;
  
  sVar1 = strlen(param_2);
  sVar2 = strlen(param_3);
  __ptr = malloc(sVar1 + 1 + sVar2 + 1 + 4);
  if (__ptr != (undefined4 *)0x0) {
    __dest = (void *)(sVar1 + 5 + (int)__ptr);
    *__ptr = __dest;
    memcpy(__ptr + 1,param_2,sVar1 + 1);
    memcpy(__dest,param_3,sVar2 + 1);
    FUN_00018f46(*__ptr,9,0x20);
    iVar3 = FUN_000137be(*param_1,__ptr);
    if (iVar3 != 0) {
      __ptr = (undefined4 *)0x0;
      *param_1 = iVar3;
      uVar4 = 0;
      goto LAB_00013b76;
    }
  }
  uVar4 = 0xfffffff4;
LAB_00013b76:
  free(__ptr);
  return uVar4;
}



/* ===== FUN_00013b88 @ 00013b88 size=46 ===== */

undefined4 FUN_00013b88(int *param_1,char *param_2)

{
  char *__ptr;
  int iVar1;
  undefined4 uVar2;
  
  __ptr = strdup(param_2);
  if ((__ptr == (char *)0x0) || (iVar1 = FUN_000137be(*param_1,__ptr), iVar1 == 0)) {
    uVar2 = 0xfffffff4;
  }
  else {
    __ptr = (char *)0x0;
    *param_1 = iVar1;
    uVar2 = 0;
  }
  free(__ptr);
  return uVar2;
}



/* ===== FUN_00013bb6 @ 00013bb6 size=104 ===== */

undefined4 FUN_00013bb6(char *param_1,char *param_2,int *param_3)

{
  size_t sVar1;
  size_t sVar2;
  undefined4 *__ptr;
  int iVar3;
  void *__dest;
  undefined4 uVar4;
  
  sVar1 = strlen(param_1);
  sVar2 = strlen(param_2);
  __ptr = malloc(sVar1 + 1 + sVar2 + 1 + 4);
  if (__ptr != (undefined4 *)0x0) {
    __dest = (void *)(sVar1 + 5 + (int)__ptr);
    *__ptr = __dest;
    memcpy(__ptr + 1,param_1,sVar1 + 1);
    memcpy(__dest,param_2,sVar2 + 1);
    iVar3 = FUN_000137be(*param_3,__ptr);
    if (iVar3 != 0) {
      __ptr = (undefined4 *)0x0;
      *param_3 = iVar3;
      uVar4 = 0;
      goto LAB_00013c0c;
    }
  }
  uVar4 = 0xfffffff4;
LAB_00013c0c:
  free(__ptr);
  return uVar4;
}



/* ===== FUN_00013c1e @ 00013c1e size=10 ===== */

undefined4 FUN_00013c1e(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 8) + 4);
  *param_2 = *(undefined4 *)(*(int *)(param_1 + 8) + 0xc);
  return uVar1;
}



/* ===== FUN_00013c28 @ 00013c28 size=10 ===== */

undefined4 FUN_00013c28(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 8) + 8);
  *param_2 = *(undefined4 *)(*(int *)(param_1 + 8) + 0x10);
  return uVar1;
}



/* ===== FUN_00013c32 @ 00013c32 size=156 ===== */

void FUN_00013c32(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 extraout_r2_02;
  undefined4 extraout_r2_03;
  undefined4 extraout_r2_04;
  undefined4 extraout_r2_05;
  int iVar1;
  undefined8 uVar2;
  
  while (iVar1 = *(int *)(param_1 + 4), iVar1 != 0) {
    free(*(void **)(iVar1 + 8));
    uVar2 = FUN_00013844(iVar1);
    param_2 = (undefined4)((ulonglong)uVar2 >> 0x20);
    *(int *)(param_1 + 4) = (int)uVar2;
    param_3 = extraout_r2;
  }
  while (iVar1 = *(int *)(param_1 + 8), iVar1 != 0) {
    free(*(void **)(iVar1 + 8));
    uVar2 = FUN_00013844(iVar1);
    param_2 = (undefined4)((ulonglong)uVar2 >> 0x20);
    *(int *)(param_1 + 8) = (int)uVar2;
    param_3 = extraout_r2_00;
  }
  while (iVar1 = *(int *)(param_1 + 0xc), iVar1 != 0) {
    free(*(void **)(iVar1 + 8));
    uVar2 = FUN_00013844(iVar1);
    param_2 = (undefined4)((ulonglong)uVar2 >> 0x20);
    *(int *)(param_1 + 0xc) = (int)uVar2;
    param_3 = extraout_r2_01;
  }
  while (iVar1 = *(int *)(param_1 + 0x14), iVar1 != 0) {
    free(*(void **)(iVar1 + 8));
    uVar2 = FUN_00013844(iVar1);
    param_2 = (undefined4)((ulonglong)uVar2 >> 0x20);
    *(int *)(param_1 + 0x14) = (int)uVar2;
    param_3 = extraout_r2_02;
  }
  while (iVar1 = *(int *)(param_1 + 0x10), iVar1 != 0) {
    free(*(void **)(iVar1 + 8));
    uVar2 = FUN_00013844(iVar1);
    param_2 = (undefined4)((ulonglong)uVar2 >> 0x20);
    *(int *)(param_1 + 0x10) = (int)uVar2;
    param_3 = extraout_r2_03;
  }
  while (iVar1 = *(int *)(param_1 + 0x18), iVar1 != 0) {
    free(*(void **)(iVar1 + 8));
    uVar2 = FUN_00013844(iVar1);
    param_2 = (undefined4)((ulonglong)uVar2 >> 0x20);
    *(int *)(param_1 + 0x18) = (int)uVar2;
    param_3 = extraout_r2_04;
  }
  while (*(int *)(param_1 + 0x1c) != 0) {
    free(*(void **)(*(int *)(param_1 + 0x1c) + 8));
    uVar2 = FUN_00013844(*(undefined4 *)(param_1 + 0x1c));
    param_2 = (undefined4)((ulonglong)uVar2 >> 0x20);
    *(int *)(param_1 + 0x1c) = (int)uVar2;
    param_3 = extraout_r2_05;
  }
  (*(code *)PTR_free_0002b180)(param_1,param_2,param_3,param_4);
  return;
}



/* ===== FUN_00013cd0 @ 00013cd0 size=2436 ===== */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_00013cd0(undefined4 param_1,undefined4 *param_2,int param_3)

{
  ushort uVar1;
  byte *pbVar2;
  stat64 *psVar3;
  stat64 *psVar4;
  ushort uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 *__ptr;
  DIR *__dirp;
  dirent64 *pdVar8;
  FILE *__stream;
  char *pcVar9;
  size_t sVar10;
  size_t sVar11;
  int *__ptr_00;
  byte *pbVar12;
  byte *pbVar13;
  int iVar14;
  int *piVar15;
  char *pcVar16;
  stat64 *__dest;
  undefined4 *puVar17;
  stat64 *psVar18;
  int iVar19;
  int iVar20;
  void *__s2;
  undefined4 *__ptr_01;
  undefined4 uVar21;
  int *piVar22;
  void *pvVar23;
  void *pvVar24;
  stat64 *psVar25;
  char *pcVar26;
  byte *pbVar27;
  int iVar28;
  uint uVar29;
  stat64 *psVar30;
  undefined4 *puVar31;
  int iVar32;
  stat64 *__s1;
  byte *pbVar33;
  stat64 *psVar34;
  ushort uVar35;
  int iVar36;
  stat64 *__s1_00;
  char *pcVar37;
  bool bVar38;
  undefined8 uVar39;
  stat64 *local_10e4;
  int local_10d8;
  int local_10d4;
  int local_10a0;
  undefined4 local_109c;
  stat64 *local_1098 [4];
  uint local_1088;
  stat64 asStack_1030 [39];
  
  puVar31 = (undefined4 *)(param_3 + -4);
  iVar19 = DAT_00014654 + 0x13cea;
  pcVar37 = (char *)(DAT_00014658 + 0x13cf0);
  local_10a0 = 0;
  uVar6 = kmod_get_dirname();
  FUN_00013a64(&local_10a0,uVar6,DAT_0001465c + 0x13d10);
  iVar20 = DAT_00014660 + 0x13d1e;
  iVar7 = 0;
LAB_00013d1e:
  do {
    iVar32 = iVar7;
    puVar31 = puVar31 + 1;
    pcVar26 = (char *)*puVar31;
    if (pcVar26 == (char *)0x0) {
      puVar31 = calloc(1,0x20);
      *param_2 = puVar31;
      if (puVar31 == (undefined4 *)0x0) goto LAB_00013e1e;
      puVar31[7] = iVar32;
      *puVar31 = param_1;
      __s2 = (void *)(DAT_00014664 + 0x13d46);
      break;
    }
    iVar36 = stat64(pcVar26,(stat64 *)local_1098);
    iVar7 = iVar32;
    if (iVar36 == 0) {
      uVar39 = FUN_0001928c((stat64 *)local_1098);
      if ((local_1088 & 0xf000) == 0x4000) {
        __dirp = opendir(pcVar26);
        if (__dirp == (DIR *)0x0) {
          iVar32 = kmod_get_log_priority(param_1);
          if (2 < iVar32) {
            FUN_00012828(param_1,3,DAT_0001467c + 0x13e84,0x364,DAT_00014680 + 0x13e88,
                         DAT_00014678 + 0x13e7c,pcVar26);
          }
          goto LAB_00013d1e;
        }
        pdVar8 = readdir64(__dirp);
        iVar7 = DAT_00014684 + 0x13ea0;
        while (pdVar8 != (dirent64 *)0x0) {
          pcVar16 = pdVar8->d_name;
          if (((pdVar8->d_name[0] != '.') && (sVar10 = strlen(pcVar16), 5 < sVar10)) &&
             ((iVar36 = strcmp(pcVar16 + (sVar10 - 5),pcVar37), iVar36 == 0 ||
              (iVar36 = strcmp(pcVar16 + (sVar10 - 6),(char *)(DAT_00014688 + 0x13eda)), iVar36 == 0
              )))) {
            iVar36 = dirfd(__dirp);
            fstatat64(iVar36,pcVar16,asStack_1030,0);
            if ((asStack_1030[0].st_mode & 0xf000) == 0x4000) {
              iVar36 = kmod_get_log_priority(param_1);
              if (2 < iVar36) {
                FUN_00012828(param_1,3,iVar20,0x305,DAT_0001468c + 0x13f20,iVar7,pcVar26,pcVar16);
              }
            }
            else {
              FUN_00013a64(&local_10a0,pcVar26,pcVar16);
            }
          }
          pdVar8 = readdir64(__dirp);
        }
        closedir(__dirp);
      }
      else {
        FUN_00013a64(&local_10a0,pcVar26,0);
      }
    }
    else {
      piVar22 = __errno_location();
      if (0 < *piVar22) goto LAB_00013d1e;
      uVar39 = 0;
    }
    sVar10 = strlen(pcVar26);
    __ptr = malloc(sVar10 + 9);
    if (__ptr == (undefined8 *)0x0) goto LAB_00013e1e;
    *__ptr = uVar39;
    memcpy(__ptr + 1,pcVar26,sVar10 + 1);
    iVar7 = FUN_000137be(iVar32,__ptr);
    if (iVar7 == 0) {
      free(__ptr);
LAB_00013e1e:
      for (; local_10a0 != 0; local_10a0 = FUN_00013844(local_10a0)) {
        free(*(void **)(local_10a0 + 8));
      }
      for (; iVar32 != 0; iVar32 = FUN_00013844(iVar32)) {
        free(*(void **)(iVar32 + 8));
      }
      return 0xfffffff4;
    }
  } while( true );
LAB_00013d46:
  if (local_10a0 == 0) goto code_r0x00013d54;
  __ptr_01 = *(undefined4 **)(local_10a0 + 8);
  local_10e4 = (stat64 *)*__ptr_01;
  if (*(char *)(__ptr_01 + 1) == '\0') {
    local_10e4 = asStack_1030;
    iVar7 = snprintf((char *)local_10e4,0x1000,(char *)(DAT_00014690 + 0x13f66),(stat64 *)*__ptr_01,
                     (int)__ptr_01 + 5);
    if (iVar7 < 0x1000) goto LAB_00013fba;
    iVar7 = kmod_get_log_priority(param_1);
    if (2 < iVar7) {
      FUN_00012828(param_1,3,DAT_00014694 + 0x13f8a,0x3a9,DAT_0001469c + 0x13f9c,
                   DAT_00014698 + 0x13f94,*__ptr_01,(int)__ptr_01 + 5);
    }
  }
  else {
LAB_00013fba:
    iVar7 = open64((char *)local_10e4,0x80000);
    if (-1 < iVar7) {
      uVar6 = *puVar31;
      local_109c = 0;
      __stream = fdopen(iVar7,(char *)(DAT_000146a0 + 0x13fd4));
      if (__stream == (FILE *)0x0) {
        iVar20 = kmod_get_log_priority(*puVar31);
        if (2 < iVar20) {
          FUN_00012828(*puVar31,3,DAT_000146a8 + 0x14022,0x282,DAT_000146ac + 0x14026,
                       DAT_000146a4 + 0x1401a,iVar7);
        }
        close(iVar7);
      }
      else {
        while (pcVar37 = (char *)FUN_00019174(__stream,&local_109c), pcVar37 != (char *)0x0) {
          if ((*pcVar37 != '\0') && (*pcVar37 != '#')) {
            pcVar16 = (char *)(DAT_000146b0 + 82000);
            pcVar26 = strtok_r(pcVar37,pcVar16,(char **)local_1098);
            if (pcVar26 != (char *)0x0) {
              iVar7 = strcmp(pcVar26,(char *)(DAT_000146b4 + 0x14062));
              if (iVar7 == 0) {
                pcVar9 = strtok_r((char *)0x0,pcVar16,(char **)local_1098);
                pcVar16 = strtok_r((char *)0x0,pcVar16,(char **)local_1098);
                iVar7 = FUN_00018fa8(pcVar9);
                if ((-1 < iVar7) && (iVar7 = FUN_00018fa8(pcVar16), -1 < iVar7)) {
                  sVar10 = strlen(pcVar9);
                  sVar11 = strlen(pcVar16);
                  __ptr_00 = malloc(sVar10 + 1 + sVar11 + 1 + 4);
                  if (__ptr_00 != (int *)0x0) {
                    pvVar24 = (void *)(sVar11 + 5 + (int)__ptr_00);
                    *__ptr_00 = (int)pvVar24;
                    memcpy(__ptr_00 + 1,pcVar16,sVar11 + 1);
                    memcpy(pvVar24,pcVar9,sVar10 + 1);
                    iVar7 = FUN_000137be(puVar31[1],__ptr_00);
                    if (iVar7 != 0) {
                      puVar31[1] = iVar7;
                      __ptr_00 = (int *)0x0;
                    }
                  }
LAB_000140e8:
                  free(__ptr_00);
                  goto LAB_0001411a;
                }
              }
              else {
                iVar7 = strcmp(pcVar26,(char *)(DAT_000146b8 + 0x140f8));
                if (iVar7 == 0) {
                  pcVar16 = strtok_r((char *)0x0,pcVar16,(char **)local_1098);
                  iVar7 = FUN_00018fa8();
                  if (-1 < iVar7) {
                    FUN_00013b88(puVar31 + 2,pcVar16);
                    goto LAB_0001411a;
                  }
                }
                else {
                  iVar7 = strcmp(pcVar26,(char *)(DAT_000146bc + 0x1412c));
                  if (iVar7 == 0) {
                    pcVar16 = strtok_r((char *)0x0,pcVar16,(char **)local_1098);
                    pcVar9 = strtok_r((char *)0x0,(char *)(DAT_000146c0 + 0x14144),
                                      (char **)local_1098);
                    iVar7 = FUN_00018fa8(pcVar16);
                    if ((-1 < iVar7) && (pcVar9 != (char *)0x0)) {
                      FUN_00013b14(puVar31 + 3,pcVar16,pcVar9);
                      goto LAB_0001411a;
                    }
                  }
                  else {
                    iVar7 = strcmp(pcVar26,(char *)(DAT_000146c4 + 0x14176));
                    if (iVar7 == 0) {
                      pcVar16 = strtok_r((char *)0x0,pcVar16,(char **)local_1098);
                      pcVar9 = strtok_r((char *)0x0,(char *)(DAT_000146c8 + 0x1418e),
                                        (char **)local_1098);
                      iVar7 = FUN_00018fa8(pcVar16);
                      if ((-1 < iVar7) && (pcVar9 != (char *)0x0)) {
                        puVar17 = puVar31 + 5;
LAB_000141ac:
                        FUN_00013bb6(pcVar16,pcVar9,puVar17);
                        goto LAB_0001411a;
                      }
                    }
                    else {
                      iVar7 = strcmp(pcVar26,(char *)(DAT_000146cc + 0x141c0));
                      if (iVar7 != 0) {
                        iVar7 = strcmp(pcVar26,(char *)(DAT_000146d4 + 0x14202));
                        if (iVar7 == 0) {
                          pcVar16 = strtok_r((char *)0x0,(char *)(DAT_000146d8 + 0x14214),
                                             (char **)local_1098);
                          pbVar12 = (byte *)strtok_r((char *)0x0,(char *)(DAT_000146dc + 0x14220),
                                                     (char **)local_1098);
                          iVar7 = FUN_00018fa8(pcVar16);
                          if ((iVar7 < 0) || (pbVar12 == (byte *)0x0)) goto LAB_000144a0;
                          iVar32 = 0;
                          sVar10 = strlen(pcVar16);
                          iVar20 = 0;
                          iVar36 = 0;
                          uVar21 = *puVar31;
                          piVar22 = *(int **)(iVar19 + DAT_000146e0);
                          local_10d4 = 0;
                          iVar7 = *piVar22;
                          pvVar24 = (void *)(DAT_000146e4 + 0x14272);
                          pvVar23 = (void *)(DAT_000146e8 + 0x1427a);
                          pbVar2 = pbVar12;
                          pbVar33 = pbVar12;
                          uVar5 = 0;
LAB_0001427a:
                          do {
                            uVar35 = uVar5;
                            pbVar27 = pbVar33;
                            pbVar13 = pbVar2;
                            pbVar33 = pbVar27 + 1;
                            uVar29 = (uint)*pbVar27;
                            if (uVar29 != 0) {
                              uVar1 = *(ushort *)(iVar7 + uVar29 * 2);
                              pbVar2 = pbVar13;
                              uVar5 = uVar1 & 0x20;
                              if ((((uVar1 & 0x20) == 0) ||
                                  (pbVar2 = pbVar33, uVar5 = uVar35, uVar35 != 0)) ||
                                 (uVar35 = 1, pbVar2 = pbVar13, uVar5 = uVar35, pbVar27 <= pbVar13))
                              goto LAB_0001427a;
                            }
                            iVar28 = (int)pbVar27 - (int)pbVar13;
                            if (iVar28 == 4) {
                              iVar14 = memcmp(pbVar13,pvVar23,4);
                              if (iVar14 == 0) {
                                iVar32 = 1;
                              }
                              else {
LAB_000142b0:
                                if ((uVar29 == 0) && (uVar35 != 0)) break;
                                if (iVar32 == 1) {
                                  iVar36 = iVar36 + 1;
                                  iVar20 = iVar20 + 1 + iVar28;
                                }
                                else if (iVar32 == 2) {
                                  iVar20 = iVar20 + 1 + iVar28;
                                  local_10d4 = local_10d4 + 1;
                                }
                              }
                            }
                            else {
                              if ((iVar28 != 5) || (iVar14 = memcmp(pbVar13,pvVar24,5), iVar14 != 0)
                                 ) goto LAB_000142b0;
                              iVar32 = 2;
                            }
                            pbVar2 = pbVar33;
                            uVar5 = uVar35;
                          } while (uVar29 != 0);
                          __ptr_00 = malloc(sVar10 + 0x15 + iVar20 + iVar36 * 4 + local_10d4 * 4);
                          if (__ptr_00 == (int *)0x0) {
                            iVar7 = kmod_get_log_priority(uVar21);
                            if (2 < iVar7) {
                              FUN_00012828(*puVar31,3,DAT_000146ec + 0x1432e,0x142,
                                           DAT_000146f4 + 0x14338,DAT_000146f0 + 0x14332,pcVar16);
                            }
                          }
                          else {
                            piVar15 = __ptr_00 + 5;
                            __ptr_00[3] = iVar36;
                            __ptr_00[4] = local_10d4;
                            __ptr_00[1] = (int)piVar15;
                            piVar15 = piVar15 + iVar36;
                            iVar7 = 0;
                            __ptr_00[2] = (int)piVar15;
                            *__ptr_00 = (int)(piVar15 + local_10d4);
                            memcpy(piVar15 + local_10d4,pcVar16,sVar10 + 1);
                            local_10d8 = 0;
                            local_10d4 = 0;
                            pvVar23 = (void *)(*__ptr_00 + sVar10 + 1);
                            pvVar24 = (void *)(DAT_000146f8 + 0x1437c);
                            pbVar2 = pbVar12;
                            uVar5 = 0;
LAB_0001437c:
                            do {
                              uVar35 = uVar5;
                              pbVar13 = pbVar2;
                              pbVar33 = pbVar12;
                              pbVar12 = pbVar33 + 1;
                              uVar29 = (uint)*pbVar33;
                              if (uVar29 != 0) {
                                uVar1 = *(ushort *)(*piVar22 + uVar29 * 2);
                                pbVar2 = pbVar13;
                                uVar5 = uVar1 & 0x20;
                                if ((((uVar1 & 0x20) == 0) ||
                                    (pbVar2 = pbVar12, uVar5 = uVar35, uVar35 != 0)) ||
                                   (uVar35 = 1, pbVar2 = pbVar13, uVar5 = uVar35, pbVar33 <= pbVar13
                                   )) goto LAB_0001437c;
                              }
                              sVar10 = (int)pbVar33 - (int)pbVar13;
                              if (sVar10 == 4) {
                                iVar20 = memcmp(pbVar13,pvVar24,4);
                                if (iVar20 == 0) {
                                  iVar7 = 1;
                                }
                                else {
LAB_000143b8:
                                  if ((uVar29 != 0) || (uVar35 == 0)) {
                                    if (iVar7 == 1) {
                                      *(void **)(__ptr_00[1] + local_10d8 * 4) = pvVar23;
                                      memcpy(pvVar23,pbVar13,sVar10);
                                      *(undefined1 *)((int)pvVar23 + sVar10) = 0;
                                      pvVar23 = (void *)((int)pvVar23 + sVar10 + 1);
                                      local_10d8 = local_10d8 + 1;
                                    }
                                    else if (iVar7 == 2) {
                                      *(void **)(__ptr_00[2] + local_10d4 * 4) = pvVar23;
                                      memcpy(pvVar23,pbVar13,sVar10);
                                      *(undefined1 *)((int)pvVar23 + sVar10) = 0;
                                      pvVar23 = (void *)((int)pvVar23 + sVar10 + 1);
                                      local_10d4 = local_10d4 + 1;
                                    }
                                  }
                                }
                              }
                              else {
                                if ((sVar10 != 5) || (iVar20 = memcmp(pbVar13,__s2,5), iVar20 != 0))
                                goto LAB_000143b8;
                                iVar7 = 2;
                              }
                              pbVar2 = pbVar12;
                              uVar5 = uVar35;
                            } while (*pbVar33 != 0);
                            iVar7 = FUN_000137be(puVar31[6],__ptr_00);
                            if (iVar7 == 0) goto LAB_000140e8;
                            puVar31[6] = iVar7;
                          }
                        }
                        else {
                          iVar7 = strcmp(pcVar26,(char *)(DAT_000146fc + 0x14460));
                          if ((iVar7 != 0) &&
                             (iVar7 = strcmp(pcVar26,(char *)(DAT_00014700 + 0x1446c)), iVar7 != 0))
                          goto LAB_000144a0;
                          iVar7 = kmod_get_log_priority(uVar6);
                          if (2 < iVar7) {
                            FUN_00012828(uVar6,3,DAT_00014704 + 0x1448a,0x2c5,DAT_0001470c + 0x14496
                                         ,DAT_00014708 + 0x14490,local_10e4,pcVar26);
                          }
                        }
                        goto LAB_0001411a;
                      }
                      pcVar16 = strtok_r((char *)0x0,pcVar16,(char **)local_1098);
                      pcVar9 = strtok_r((char *)0x0,(char *)(DAT_000146d0 + 0x141d8),
                                        (char **)local_1098);
                      iVar7 = FUN_00018fa8(pcVar16);
                      if ((-1 < iVar7) && (pcVar9 != (char *)0x0)) {
                        puVar17 = puVar31 + 4;
                        goto LAB_000141ac;
                      }
                    }
                  }
                }
              }
LAB_000144a0:
              iVar7 = kmod_get_log_priority(uVar6);
              if (2 < iVar7) {
                FUN_00012828(uVar6,3,DAT_00014710 + 0x144ba,0x2c9,DAT_00014718 + 0x144cc,
                             DAT_00014714 + 0x144c6,local_10e4,local_109c,pcVar26);
              }
            }
          }
LAB_0001411a:
          free(pcVar37);
        }
        fclose(__stream);
      }
    }
  }
  free(__ptr_01);
  local_10a0 = FUN_00013844(local_10a0);
  goto LAB_00013d46;
code_r0x00013d54:
  iVar7 = open64((char *)(DAT_00014668 + 0x13d60),0x80000);
  if (-1 < iVar7) {
    iVar19 = FUN_00019040(iVar7,asStack_1030,0x1000);
    close(iVar7);
    if (iVar19 < 0) {
      iVar7 = kmod_get_log_priority(*puVar31);
      if (2 < iVar7) {
        uVar6 = *puVar31;
        pcVar37 = strerror(-iVar19);
        FUN_00012828(uVar6,3,DAT_00014670 + 0x13dae,0x20a,DAT_00014674 + 0x13db0,
                     DAT_0001466c + 0x13da6,pcVar37);
      }
    }
    else {
      iVar7 = 1;
      pcVar37 = (char *)(DAT_0001471c + 0x144e2);
      psVar34 = (stat64 *)0x0;
      psVar3 = psVar34;
      psVar30 = asStack_1030;
      psVar25 = (stat64 *)0x0;
      __s1 = (stat64 *)0x0;
      psVar4 = asStack_1030;
LAB_0001450c:
      do {
        __s1_00 = psVar4;
        psVar18 = psVar30;
        __dest = psVar3;
        psVar30 = (stat64 *)((int)&psVar18->st_dev + 1);
        uVar29 = (uint)(byte)psVar18->st_dev;
        if (uVar29 == 0x20) {
LAB_00014520:
          bVar38 = true;
        }
        else {
          psVar3 = __dest;
          psVar4 = __s1_00;
          if (0x20 < uVar29) {
            if (uVar29 == 0x2e) {
              if (iVar7 == 1) {
                *(char *)&psVar18->st_dev = '\0';
                iVar7 = 2;
                __s1 = psVar30;
                goto LAB_0001450c;
              }
              bVar38 = iVar7 == 2;
            }
            else {
              if (uVar29 != 0x3d) {
                if (uVar29 == 0x22) {
                  psVar34 = (stat64 *)((uint)psVar34 ^ 1);
                  if ((psVar34 == (stat64 *)0x0) || (iVar7 != 1)) {
                    if (iVar7 != 3) {
                      iVar7 = 0;
                    }
                  }
                  else {
                    psVar3 = psVar18;
                    psVar4 = psVar30;
                    if (__s1_00 != psVar18) {
                      iVar7 = 0;
                      psVar3 = __dest;
                      psVar4 = __s1_00;
                    }
                  }
                }
                goto LAB_0001450c;
              }
              if (iVar7 == 2) {
                iVar7 = 3;
                psVar25 = psVar30;
                goto LAB_0001450c;
              }
              bVar38 = iVar7 == 1;
            }
            if (bVar38) {
              iVar7 = 0;
            }
            goto LAB_0001450c;
          }
          bVar38 = false;
          if (uVar29 != 0) {
            if (uVar29 - 9 < 5) goto LAB_00014520;
            goto LAB_0001450c;
          }
        }
        if (psVar34 == (stat64 *)0x0) {
          if (iVar7 - 2U < 2) {
            *(char *)&psVar18->st_dev = '\0';
            if ((__dest != (stat64 *)0x0) && (__dest < __s1_00)) {
              memmove(__dest,__s1_00,(int)psVar25 - (int)__s1_00);
              __s1_00 = (stat64 *)((int)&__s1_00[-1].st_ino + 7);
              __s1 = (stat64 *)((int)&__s1[-1].st_ino + 7);
              *(undefined1 *)((int)&psVar25[-1].st_ino + 7) = 0x22;
              psVar25 = (stat64 *)((int)&psVar25[-1].st_ino + 7);
            }
            local_1098[0] = psVar25;
            if ((__s1_00 != (stat64 *)0x0) && (__s1 != (stat64 *)0x0)) {
              iVar7 = strcmp((char *)__s1_00,pcVar37);
              if ((iVar7 == 0) &&
                 (iVar7 = strncmp((char *)__s1,(char *)(DAT_00014720 + 0x1456a),10), iVar7 == 0)) {
                pcVar26 = (char *)(DAT_00014724 + 0x14578);
                while (pcVar16 = strsep((char **)local_1098,pcVar26), pcVar16 != (char *)0x0) {
                  FUN_00013b88(puVar31 + 2,pcVar16);
                }
              }
              else {
                iVar7 = FUN_00018fa8(__s1_00);
                if (iVar7 < 0) {
                  iVar7 = kmod_get_log_priority(*puVar31);
                  if (2 < iVar7) {
                    FUN_00012828(*puVar31,3,DAT_0001472c + 0x145f2,0x1ea,DAT_00014730 + 0x145f8,
                                 DAT_00014728 + 0x145ec,__s1_00);
                  }
                }
                else {
                  FUN_00013b14(puVar31 + 3,__s1_00,__s1);
                }
              }
            }
          }
          __dest = (stat64 *)0x0;
          iVar7 = 1;
          __s1_00 = psVar30;
        }
        else if (iVar7 != 3) {
          iVar7 = 0;
        }
        psVar3 = __dest;
        psVar4 = __s1_00;
      } while (bVar38);
    }
  }
  return 0;
}



/* ===== kmod_config_get_blacklists @ 00014734 size=10 ===== */

/* WARNING: Removing unreachable block (ram,0x000139c8) */

undefined4 * kmod_config_get_blacklists(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_1 != 0) {
    puVar1 = calloc(1,0x1c);
    iVar2 = FUN_000132f4(param_1);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[2] = *(undefined4 *)(iVar2 + 8);
      puVar1[5] = DAT_00013a38 + 0x139dc;
    }
    return puVar1;
  }
  return (undefined4 *)0x0;
}



/* ===== kmod_config_get_install_commands @ 0001473e size=60 ===== */

/* WARNING: Removing unreachable block (ram,0x000139d2) */

undefined4 kmod_config_get_install_commands(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  puVar1 = calloc(1,0x1c);
  FUN_000132f4(param_1);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  *puVar1 = 1;
                    /* WARNING: Could not recover jumptable at 0x000139c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)(&DAT_000139cc + (uint)DAT_000139cc * 2))();
  return uVar2;
}



/* ===== kmod_config_get_remove_commands @ 00014748 size=10 ===== */

/* WARNING: Removing unreachable block (ram,0x000139d2) */

undefined4 kmod_config_get_remove_commands(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  puVar1 = calloc(1,0x1c);
  FUN_000132f4(param_1);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  *puVar1 = 2;
                    /* WARNING: Could not recover jumptable at 0x000139c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)(&DAT_000139cc + (uint)UNK_000139cd * 2))();
  return uVar2;
}



/* ===== kmod_config_get_aliases @ 00014752 size=10 ===== */

/* WARNING: Removing unreachable block (ram,0x000139d2) */

undefined4 kmod_config_get_aliases(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  puVar1 = calloc(1,0x1c);
  FUN_000132f4(param_1);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  *puVar1 = 3;
                    /* WARNING: Could not recover jumptable at 0x000139c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)(&DAT_000139cc + (uint)UNK_000139ce * 2))();
  return uVar2;
}



/* ===== kmod_config_get_options @ 0001475c size=10 ===== */

/* WARNING: Removing unreachable block (ram,0x000139d2) */

undefined4 kmod_config_get_options(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  puVar1 = calloc(1,0x1c);
  FUN_000132f4(param_1);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  *puVar1 = 4;
                    /* WARNING: Could not recover jumptable at 0x000139c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)(&DAT_000139cc + (uint)UNK_000139cf * 2))();
  return uVar2;
}



/* ===== kmod_config_get_softdeps @ 00014766 size=10 ===== */

/* WARNING: Removing unreachable block (ram,0x000139d2) */

undefined4 kmod_config_get_softdeps(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  puVar1 = calloc(1,0x1c);
  FUN_000132f4(param_1);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  *puVar1 = 5;
                    /* WARNING: Could not recover jumptable at 0x000139c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)(&DAT_000139cc + (uint)UNK_000139d0 * 2))();
  return uVar2;
}



/* ===== kmod_config_iter_get_key @ 00014770 size=16 ===== */

undefined4 kmod_config_iter_get_key(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0xc) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001477a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x14))();
    return uVar1;
  }
  return 0;
}



/* ===== kmod_config_iter_get_value @ 00014780 size=44 ===== */

undefined4 kmod_config_iter_get_value(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_1 != 0) && (uVar1 = 0, *(int *)(param_1 + 0xc) != 0)) {
    if (*(code **)(param_1 + 0x18) == (code *)0x0) {
      uVar1 = 0;
    }
    else {
      if (*(char *)(param_1 + 4) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000147a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(param_1 + 0x18))();
        return uVar1;
      }
      free(*(void **)(param_1 + 0x10));
      uVar1 = (**(code **)(param_1 + 0x18))(*(undefined4 *)(param_1 + 0xc));
      *(undefined4 *)(param_1 + 0x10) = uVar1;
    }
  }
  return uVar1;
}



/* ===== kmod_config_iter_next @ 000147ac size=28 ===== */

undefined4 kmod_config_iter_next(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 8);
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar1 = kmod_list_next();
    }
    *(int *)(param_1 + 0xc) = iVar1;
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = 1;
    }
  }
  return uVar2;
}



/* ===== kmod_config_iter_free_iter @ 000147c8 size=22 ===== */

void kmod_config_iter_free_iter(int param_1)

{
  free(*(void **)(param_1 + 0x10));
  (*(code *)PTR_free_0002b180)(param_1);
  return;
}



/* ===== FUN_000147dc @ 000147dc size=34 ===== */

uint FUN_000147dc(FILE *param_1,uint param_2)

{
  int *piVar1;
  uint local_c;
  
  local_c = param_2;
  piVar1 = __errno_location();
  *piVar1 = 0;
  fread(&local_c,4,1,param_1);
  return local_c << 0x18 | (local_c >> 8 & 0xff) << 0x10 | (local_c >> 0x10 & 0xff) << 8 |
         local_c >> 0x18;
}



/* ===== FUN_000147fe @ 000147fe size=40 ===== */

uint FUN_000147fe(int param_1)

{
  uint uVar1;
  int *piVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  piVar2 = __errno_location();
  pbVar3 = *(byte **)(param_1 + 0x18);
  *piVar2 = 0;
  pbVar4 = *(byte **)(param_1 + 0x10);
  if (pbVar4 < pbVar3) {
    *(byte **)(param_1 + 0x10) = pbVar4 + 1;
    return (uint)*pbVar4;
  }
  uVar1 = (*(code *)PTR___fgetc_unlocked_0002b074)(param_1);
  return uVar1;
}



/* ===== FUN_00014824 @ 00014824 size=36 ===== */

int FUN_00014824(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  while ((uVar1 = FUN_000147fe(param_2), uVar1 != 0 &&
         (iVar2 = FUN_00018e26(param_1,uVar1 & 0xff), iVar2 != 0))) {
    iVar3 = iVar3 + 1;
  }
  return iVar3;
}



/* ===== FUN_00014848 @ 00014848 size=72 ===== */

undefined4 FUN_00014848(undefined4 *param_1,void *param_2,size_t param_3,uint param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  do {
    puVar3 = param_1;
    param_1 = (undefined4 *)*puVar3;
    if (param_1 == (undefined4 *)0x0) break;
  } while ((uint)param_1[1] < param_4);
  puVar1 = malloc(param_3 + 0xd);
  if (puVar1 == (void *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    puVar1[2] = param_3;
    *puVar1 = param_1;
    puVar1[1] = param_4;
    memcpy(puVar1 + 3,param_2,param_3);
    uVar2 = 0;
    *(undefined1 *)((int)puVar1 + param_3 + 0xc) = 0;
    *puVar3 = puVar1;
  }
  return uVar2;
}



/* ===== FUN_00014890 @ 00014890 size=248 ===== */

undefined4 * FUN_00014890(FILE *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  bool bVar9;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  
  if (((param_2 & 0xfffffff) == 0) ||
     (uStack_2c = param_2, uStack_28 = param_3, local_24 = param_4,
     iVar3 = fseek(param_1,param_2 & 0xfffffff,0), iVar3 < 0)) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    if ((int)param_2 < 0) {
      FUN_00018dce(&uStack_2c);
      FUN_00014824(&uStack_2c,param_1);
      pcVar4 = (char *)FUN_00018dde(&uStack_2c);
    }
    else {
      pcVar4 = strdup((char *)(DAT_00014988 + 0x1493c));
    }
    if ((int)(param_2 << 2) < 0) {
      bVar1 = FUN_000147fe(param_1);
      bVar2 = FUN_000147fe(param_1);
      puVar7 = malloc((((uint)bVar2 - (uint)bVar1) + 5) * 4);
      *(byte *)(puVar7 + 3) = bVar1;
      *(byte *)((int)puVar7 + 0xd) = bVar2;
      puVar8 = puVar7 + 4;
      for (iVar3 = 0; iVar3 <= (int)((uint)bVar2 - (uint)bVar1); iVar3 = iVar3 + 1) {
        uVar5 = FUN_000147dc(param_1);
        *puVar8 = uVar5;
        puVar8 = puVar8 + 1;
      }
    }
    else {
      puVar7 = malloc(0x10);
      *(undefined2 *)(puVar7 + 3) = 0x80;
    }
    puVar7[2] = 0;
    if ((int)(param_2 << 1) < 0) {
      iVar3 = FUN_000147dc(param_1);
      FUN_00018dce(&uStack_2c);
      while (bVar9 = iVar3 != 0, iVar3 = iVar3 + -1, bVar9) {
        uVar5 = FUN_000147dc(param_1);
        FUN_00014824(&uStack_2c,param_1);
        uVar6 = FUN_00018e02(&uStack_2c);
        FUN_00014848(puVar7 + 2,uVar6,local_24,uVar5);
        FUN_00018f24(&uStack_2c);
      }
      FUN_00018dd8(&uStack_2c);
    }
    *puVar7 = param_1;
    puVar7[1] = pcVar4;
  }
  return puVar7;
}



/* ===== FUN_0001498c @ 0001498c size=30 ===== */

undefined4 FUN_0001498c(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (((int)(uint)*(byte *)(param_1 + 3) <= param_2) &&
     (param_2 <= (int)(uint)*(byte *)((int)param_1 + 0xd))) {
    uVar1 = FUN_00014890(*param_1,param_1[(param_2 - (uint)*(byte *)(param_1 + 3)) + 4]);
    return uVar1;
  }
  return 0;
}



/* ===== FUN_000149aa @ 000149aa size=46 ===== */

void FUN_000149aa(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  puVar2 = puVar1 + *(int *)(param_1 + 0xc) * 3;
  for (; puVar1 < puVar2; puVar1 = puVar1 + 3) {
    FUN_00014848(param_2,puVar1[2],puVar1[1],*puVar1);
  }
  (*(code *)PTR_free_0002b180)(param_1);
  return;
}



/* ===== FUN_000149d8 @ 000149d8 size=226 ===== */

int * FUN_000149d8(int param_1,uint param_2)

{
  size_t sVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  byte bVar9;
  byte bVar10;
  uint *puVar11;
  uint local_228 [129];
  
  if ((param_2 & 0xfffffff) != 0) {
    puVar5 = (uint *)(*(int *)(param_1 + 4) + (param_2 & 0xfffffff));
    if ((int)param_2 < 0) {
      sVar1 = strlen((char *)puVar5);
      puVar6 = (uint *)((int)puVar5 + sVar1 + 1);
      puVar11 = puVar5;
    }
    else {
      puVar11 = (uint *)(DAT_00014abc + 0x14aa0);
      puVar6 = puVar5;
    }
    if ((param_2 & 0x20000000) == 0) {
      bVar10 = 0x80;
      iVar8 = 0;
      bVar9 = 0;
    }
    else {
      bVar10 = (byte)*puVar6;
      bVar9 = *(byte *)((int)puVar6 + 1);
      iVar8 = ((uint)bVar9 - (uint)bVar10) + 1;
      puVar6 = (uint *)((int)puVar6 + 2);
      for (iVar3 = 0; iVar3 < iVar8; iVar3 = iVar3 + 1) {
        uVar7 = *puVar6;
        local_228[iVar3] =
             uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
             uVar7 >> 0x18;
        puVar6 = puVar6 + 1;
      }
    }
    uVar7 = 0;
    puVar5 = puVar6;
    if ((param_2 & 0x40000000) != 0) {
      puVar5 = puVar6 + 1;
      uVar7 = *puVar6;
      uVar7 = uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
              uVar7 >> 0x18;
    }
    piVar2 = malloc((uVar7 * 3 + iVar8 + 5) * 4);
    if (piVar2 != (int *)0x0) {
      *piVar2 = param_1;
      piVar2[1] = (int)puVar11;
      if (uVar7 == 0) {
        puVar6 = (uint *)0x0;
      }
      else {
        puVar6 = (uint *)(piVar2 + iVar8 + 5);
      }
      *(byte *)((int)piVar2 + 0x11) = bVar9;
      piVar2[2] = (int)puVar6;
      piVar2[3] = uVar7;
      *(byte *)(piVar2 + 4) = bVar10;
      memcpy(piVar2 + 5,local_228,iVar8 * 4);
      for (iVar8 = 0; iVar8 < (int)uVar7; iVar8 = iVar8 + 1) {
        puVar11 = puVar5 + 1;
        uVar4 = *puVar5;
        *puVar6 = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
                  uVar4 >> 0x18;
        sVar1 = strlen((char *)puVar11);
        puVar6[1] = sVar1;
        puVar6[2] = (uint)puVar11;
        puVar5 = (uint *)((int)puVar11 + sVar1 + 1);
        puVar6 = puVar6 + 3;
      }
      return piVar2;
    }
  }
  return (int *)0x0;
}



/* ===== FUN_00014ac0 @ 00014ac0 size=30 ===== */

undefined4 FUN_00014ac0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (((int)(uint)*(byte *)(param_1 + 4) <= param_2) &&
     (param_2 <= (int)(uint)*(byte *)((int)param_1 + 0x11))) {
    uVar1 = FUN_000149d8(*param_1,param_1[(param_2 - (uint)*(byte *)(param_1 + 4)) + 5]);
    return uVar1;
  }
  return 0;
}



/* ===== FUN_00014ae0 @ 00014ae0 size=158 ===== */

void FUN_00014ae0(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = FUN_00018e50(param_2,*(undefined4 *)(param_1 + 4));
  uVar2 = *(uint *)(param_1 + 8);
  uVar3 = *(int *)(param_1 + 0xc) * 0xc + uVar2;
  iVar4 = DAT_00014b80 + 0x14b0a;
  iVar5 = DAT_00014b84 + 0x14b0c;
  for (; uVar2 < uVar3; uVar2 = uVar2 + 0xc) {
    FUN_0001907c(param_3,*param_2,param_2[2]);
    FUN_0001907c(param_3,iVar4,1);
    FUN_0001907c(param_3,*(undefined4 *)(uVar2 + 8),*(undefined4 *)(uVar2 + 4));
    FUN_0001907c(param_3,iVar5,1);
  }
  for (uVar2 = (uint)*(byte *)(param_1 + 0x10); (int)uVar2 <= (int)(uint)*(byte *)(param_1 + 0x11);
      uVar2 = uVar2 + 1) {
    iVar4 = FUN_00014ac0(param_1,uVar2);
    if (iVar4 != 0) {
      FUN_00018e26(param_2,uVar2 & 0xff);
      FUN_00014ae0(iVar4,param_2,param_3);
      FUN_00018ecc(param_2);
    }
  }
  FUN_00018ef8(param_2,uVar1);
  (*(code *)PTR_free_0002b180)(param_1);
  return;
}



/* ===== FUN_00014b88 @ 00014b88 size=140 ===== */

void FUN_00014b88(void *param_1,int param_2,undefined4 param_3,char *param_4,undefined4 param_5)

{
  char *__pattern;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  while( true ) {
    if (*(char *)(*(int *)((int)param_1 + 4) + iVar3 + param_2) == '\0') break;
    iVar3 = iVar3 + 1;
    FUN_00018e26(param_3);
  }
  for (uVar2 = (uint)*(byte *)((int)param_1 + 0x10);
      (int)uVar2 <= (int)(uint)*(byte *)((int)param_1 + 0x11); uVar2 = uVar2 + 1) {
    iVar1 = FUN_00014ac0(param_1,uVar2);
    if (iVar1 != 0) {
      FUN_00018e26(param_3,uVar2 & 0xff);
      FUN_00014b88(iVar1,0,param_3,param_4,param_5);
      FUN_00018ecc(param_3);
    }
  }
  if (*(int *)((int)param_1 + 0xc) != 0) {
    __pattern = (char *)FUN_00018e02(param_3);
    iVar1 = fnmatch(__pattern,param_4,0);
    if (iVar1 == 0) {
      FUN_000149aa(param_1,param_5);
      goto LAB_00014bc6;
    }
  }
  free(param_1);
LAB_00014bc6:
  FUN_00018ef8(param_3,iVar3);
  return;
}



/* ===== FUN_00014c14 @ 00014c14 size=16 ===== */

void FUN_00014c14(undefined4 *param_1)

{
  void *pvVar1;
  
  while (param_1 != (void *)0x0) {
    pvVar1 = (void *)*param_1;
    free(param_1);
    param_1 = pvVar1;
  }
  return;
}



/* ===== FUN_00014c24 @ 00014c24 size=26 ===== */

void FUN_00014c24(int param_1)

{
  free(*(void **)(param_1 + 4));
  FUN_00014c14(*(undefined4 *)(param_1 + 8));
  (*(code *)PTR_free_0002b180)(param_1);
  return;
}



/* ===== FUN_00014c40 @ 00014c40 size=156 ===== */

void FUN_00014c40(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  size_t sVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = FUN_00018e50(param_2,*(undefined4 *)(param_1 + 4));
  iVar5 = DAT_00014cdc + 0x14c60;
  iVar6 = DAT_00014ce0 + 0x14c62;
  for (piVar3 = *(int **)(param_1 + 8); piVar3 != (int *)0x0; piVar3 = (int *)*piVar3) {
    FUN_0001907c(param_3,*param_2,param_2[2]);
    FUN_0001907c(param_3,iVar5,1);
    sVar2 = strlen((char *)(piVar3 + 3));
    FUN_0001907c(param_3,piVar3 + 3,sVar2);
    FUN_0001907c(param_3,iVar6,1);
  }
  for (uVar4 = (uint)*(byte *)(param_1 + 0xc); (int)uVar4 <= (int)(uint)*(byte *)(param_1 + 0xd);
      uVar4 = uVar4 + 1) {
    iVar5 = FUN_0001498c(param_1,uVar4);
    if (iVar5 != 0) {
      FUN_00018e26(param_2,uVar4 & 0xff);
      FUN_00014c40(iVar5,param_2,param_3);
      FUN_00018ecc(param_2);
    }
  }
  FUN_00018ef8(param_2,uVar1);
  FUN_00014c24(param_1);
  return;
}



/* ===== FUN_00014ce4 @ 00014ce4 size=38 ===== */

void FUN_00014ce4(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  for (piVar1 = *(int **)(param_1 + 8); piVar1 != (int *)0x0; piVar1 = (int *)*piVar1) {
    FUN_00014848(param_2,piVar1 + 3,piVar1[2],piVar1[1]);
  }
  FUN_00014c24(param_1);
  return;
}



/* ===== FUN_00014d0a @ 00014d0a size=140 ===== */

void FUN_00014d0a(int param_1,int param_2,undefined4 param_3,char *param_4,undefined4 param_5)

{
  char *__pattern;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  while( true ) {
    if (*(char *)(*(int *)(param_1 + 4) + iVar3 + param_2) == '\0') break;
    iVar3 = iVar3 + 1;
    FUN_00018e26(param_3);
  }
  for (uVar2 = (uint)*(byte *)(param_1 + 0xc); (int)uVar2 <= (int)(uint)*(byte *)(param_1 + 0xd);
      uVar2 = uVar2 + 1) {
    iVar1 = FUN_0001498c(param_1,uVar2);
    if (iVar1 != 0) {
      FUN_00018e26(param_3,uVar2 & 0xff);
      FUN_00014d0a(iVar1,0,param_3,param_4,param_5);
      FUN_00018ecc(param_3);
    }
  }
  if (*(int *)(param_1 + 8) != 0) {
    __pattern = (char *)FUN_00018e02(param_3);
    iVar1 = fnmatch(__pattern,param_4,0);
    if (iVar1 == 0) {
      FUN_00014ce4(param_1,param_5);
      goto LAB_00014d48;
    }
  }
  FUN_00014c24(param_1);
LAB_00014d48:
  FUN_00018ef8(param_3,iVar3);
  return;
}



/* ===== FUN_00014d98 @ 00014d98 size=88 ===== */

undefined4 * FUN_00014d98(char *param_1)

{
  FILE *__stream;
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  __stream = fopen64(param_1,(char *)(DAT_00014df4 + 0x14da0));
  puVar5 = (undefined4 *)0x0;
  if (__stream != (FILE *)0x0) {
    piVar1 = __errno_location();
    *piVar1 = 0x16;
    iVar2 = FUN_000147dc(__stream);
    if ((iVar2 == DAT_00014df0) && (uVar3 = FUN_000147dc(), uVar3 >> 0x10 == 2)) {
      puVar5 = malloc(8);
      *puVar5 = __stream;
      uVar4 = FUN_000147dc(__stream);
      *piVar1 = 0;
      puVar5[1] = uVar4;
    }
    else {
      fclose(__stream);
      puVar5 = (undefined4 *)0x0;
    }
  }
  return puVar5;
}



/* ===== FUN_00014df8 @ 00014df8 size=20 ===== */

void FUN_00014df8(undefined4 *param_1)

{
  fclose((FILE *)*param_1);
  (*(code *)PTR_free_0002b180)(param_1);
  return;
}



/* ===== FUN_00014e0c @ 00014e0c size=56 ===== */

void FUN_00014e0c(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_24 [16];
  
  iVar1 = FUN_00014890(*param_1,param_1[1]);
  if (iVar1 != 0) {
    FUN_00018dce(auStack_24);
    FUN_00018e50(auStack_24,param_3);
    FUN_00014c40(iVar1,auStack_24,param_2);
    FUN_00018dd8(auStack_24);
  }
  return;
}



/* ===== FUN_00014e44 @ 00014e44 size=104 ===== */

char * FUN_00014e44(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  
  iVar2 = FUN_00014890(*param_1,param_1[1],param_3,param_4,param_4);
  pcVar6 = (char *)0x0;
  do {
    if (iVar2 == 0) {
      return (char *)0x0;
    }
    iVar7 = *(int *)(iVar2 + 4);
    pcVar5 = (char *)(iVar7 + -1);
    pcVar3 = pcVar6 + param_2;
    while( true ) {
      pcVar5 = pcVar5 + 1;
      cVar1 = *pcVar3;
      if (*pcVar5 == '\0') break;
      pcVar3 = pcVar3 + 1;
      if (*pcVar5 != cVar1) {
        FUN_00014c24(iVar2);
        return (char *)0x0;
      }
    }
    if (cVar1 == '\0') {
      pcVar6 = (char *)0x0;
      if (*(int *)(iVar2 + 8) != 0) {
        pcVar6 = strdup((char *)(*(int *)(iVar2 + 8) + 0xc));
      }
      FUN_00014c24(iVar2);
      return pcVar6;
    }
    iVar4 = FUN_0001498c(iVar2);
    FUN_00014c24(iVar2);
    pcVar6 = pcVar5 + (int)(pcVar6 + (1 - iVar7));
    iVar2 = iVar4;
  } while( true );
}



/* ===== FUN_00014eac @ 00014eac size=280 ===== */

undefined4 FUN_00014eac(undefined4 *param_1,int param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined4 local_38;
  undefined1 auStack_34 [16];
  
  iVar3 = FUN_00014890(*param_1,param_1[1]);
  local_38 = 0;
  FUN_00018dce(auStack_34);
  iVar6 = 0;
  do {
    if (iVar3 == 0) {
LAB_00014ef6:
      FUN_00018dd8(auStack_34);
      return local_38;
    }
    pcVar7 = (char *)(param_2 + iVar6);
    iVar5 = 0;
    while( true ) {
      cVar2 = *(char *)(*(int *)(iVar3 + 4) + iVar5);
      if (cVar2 == '\0') break;
      if (((cVar2 == '*') || (cVar2 == '?')) || (cVar2 == '[')) {
        FUN_00014d0a(iVar3,iVar5,auStack_34,pcVar7,&local_38);
        goto LAB_00014ef6;
      }
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      if (cVar1 != cVar2) {
        FUN_00014c24(iVar3);
        goto LAB_00014ef6;
      }
      iVar5 = iVar5 + 1;
    }
    iVar4 = FUN_0001498c(iVar3,0x2a);
    if (iVar4 != 0) {
      FUN_00018e26(auStack_34,0x2a);
      FUN_00014d0a(iVar4,0,auStack_34,pcVar7,&local_38);
      FUN_00018ecc(auStack_34);
    }
    iVar4 = FUN_0001498c(iVar3,0x3f);
    if (iVar4 != 0) {
      FUN_00018e26(auStack_34,0x3f);
      FUN_00014d0a(iVar4,0,auStack_34,pcVar7,&local_38);
      FUN_00018ecc(auStack_34);
    }
    iVar4 = FUN_0001498c(iVar3,0x5b);
    if (iVar4 != 0) {
      FUN_00018e26(auStack_34,0x5b);
      FUN_00014d0a(iVar4,0,auStack_34,pcVar7,&local_38);
      FUN_00018ecc(auStack_34);
    }
    if (*pcVar7 == '\0') {
      FUN_00014ce4(iVar3,&local_38);
      goto LAB_00014ef6;
    }
    iVar4 = FUN_0001498c(iVar3);
    FUN_00014c24(iVar3);
    iVar6 = iVar5 + iVar6 + 1;
    iVar3 = iVar4;
  } while( true );
}



/* ===== FUN_00014fc4 @ 00014fc4 size=388 ===== */

int FUN_00014fc4(undefined4 param_1,char *param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined4 *__ptr;
  int iVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  stat64 sStack_90;
  
  if (param_4 == (undefined4 *)0x0) {
    __assert((char *)(DAT_00015150 + 0x14fe6),(char *)(DAT_0001514c + 0x14fe4),0x2f3);
  }
  __ptr = malloc(0x10);
  if (__ptr == (undefined4 *)0x0) {
    iVar1 = kmod_get_log_priority(param_1);
    if (2 < iVar1) {
      FUN_00012828(param_1,3,DAT_00015158 + 0x1500e,0x2f9,DAT_0001515c + 0x15010,
                   DAT_00015154 + 0x15008);
    }
    return -0xc;
  }
  iVar1 = open64(param_2,0x80000);
  if (iVar1 < 0) {
    piVar2 = __errno_location();
    iVar3 = -*piVar2;
    goto LAB_00015034;
  }
  iVar3 = fstat64(iVar1,&sStack_90);
  if ((iVar3 < 0) || ((uint)sStack_90.st_size < 0xc)) {
LAB_000150e8:
    iVar3 = -0x16;
  }
  else {
    puVar4 = mmap64((void *)0x0,(uint)sStack_90.st_size,1,2,iVar1,0);
    __ptr[1] = puVar4;
    uVar9 = DAT_0001516c;
    if (puVar4 != (uint *)0xffffffff) {
      uVar8 = *puVar4;
      uVar8 = uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
              uVar8 >> 0x18;
      if (uVar8 == DAT_0001516c) {
        uVar9 = (puVar4[1] << 0x18 | (puVar4[1] >> 8 & 0xff) << 0x10) >> 0x10;
        if (uVar9 == 2) {
          uVar9 = puVar4[2];
          *__ptr = param_1;
          __ptr[2] = uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
                     uVar9 >> 0x18;
          __ptr[3] = (uint)sStack_90.st_size;
          close(iVar1);
          uVar10 = FUN_0001928c(&sStack_90);
          *param_3 = uVar10;
          *param_4 = __ptr;
          return 0;
        }
        iVar3 = kmod_get_log_priority(param_1);
        if (2 < iVar3) {
          uVar10 = CONCAT44(2,uVar9);
          iVar5 = DAT_0001517c + 0x15110;
          iVar3 = DAT_00015180 + 0x15116;
          iVar6 = DAT_00015184 + 0x15118;
          uVar7 = 0x31e;
          goto LAB_000150d8;
        }
      }
      else {
        iVar3 = kmod_get_log_priority(param_1);
        if (2 < iVar3) {
          iVar5 = DAT_00015170 + 0x150c8;
          iVar3 = DAT_00015174 + 0x150ce;
          uVar10 = CONCAT44(uVar9,uVar8);
          iVar6 = DAT_00015178 + 0x150d4;
          uVar7 = 0x317;
LAB_000150d8:
          FUN_00012828(param_1,3,iVar3,uVar7,iVar6,iVar5,uVar10);
        }
      }
      munmap((void *)__ptr[1],(uint)sStack_90.st_size);
      goto LAB_000150e8;
    }
    iVar3 = kmod_get_log_priority(param_1);
    if (2 < iVar3) {
      FUN_00012828(param_1,3,DAT_00015164 + 0x15090,0x30b,DAT_00015168 + 0x15092,
                   DAT_00015160 + 0x1508a,(uint)sStack_90.st_size,sStack_90.st_size._4_4_,iVar1);
    }
    piVar2 = __errno_location();
    iVar3 = -*piVar2;
  }
  close(iVar1);
LAB_00015034:
  free(__ptr);
  return iVar3;
}



/* ===== FUN_00015188 @ 00015188 size=22 ===== */

void FUN_00015188(int param_1)

{
  munmap(*(void **)(param_1 + 4),*(size_t *)(param_1 + 0xc));
  (*(code *)PTR_free_0002b180)(param_1);
  return;
}



/* ===== FUN_0001519e @ 0001519e size=54 ===== */

void FUN_0001519e(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_24 [16];
  
  iVar1 = FUN_000149d8(param_1,*(undefined4 *)(param_1 + 8));
  if (iVar1 != 0) {
    FUN_00018dce(auStack_24);
    FUN_00018e50(auStack_24,param_3);
    FUN_00014ae0(iVar1,auStack_24,param_2);
    FUN_00018dd8(auStack_24);
  }
  return;
}



/* ===== FUN_000151d4 @ 000151d4 size=102 ===== */

char * FUN_000151d4(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  void *__ptr;
  char *pcVar2;
  void *pvVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  
  __ptr = (void *)FUN_000149d8(param_1,*(undefined4 *)(param_1 + 8),param_3,param_4,param_4);
  pcVar5 = (char *)0x0;
  do {
    if (__ptr == (void *)0x0) {
      return (char *)0x0;
    }
    iVar6 = *(int *)((int)__ptr + 4);
    pcVar4 = (char *)(iVar6 + -1);
    pcVar2 = pcVar5 + param_2;
    while( true ) {
      pcVar4 = pcVar4 + 1;
      cVar1 = *pcVar2;
      if (*pcVar4 == '\0') break;
      pcVar2 = pcVar2 + 1;
      if (*pcVar4 != cVar1) {
        free(__ptr);
        return (char *)0x0;
      }
    }
    if (cVar1 == '\0') {
      pcVar5 = (char *)0x0;
      if (*(int *)((int)__ptr + 0xc) != 0) {
        pcVar5 = strdup(*(char **)(*(int *)((int)__ptr + 8) + 8));
      }
      free(__ptr);
      return pcVar5;
    }
    pvVar3 = (void *)FUN_00014ac0(__ptr);
    free(__ptr);
    pcVar5 = pcVar4 + (int)(pcVar5 + (1 - iVar6));
    __ptr = pvVar3;
  } while( true );
}



/* ===== FUN_0001523a @ 0001523a size=278 ===== */

undefined4 FUN_0001523a(int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  void *__ptr;
  int iVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined4 local_38;
  undefined1 auStack_34 [16];
  
  __ptr = (void *)FUN_000149d8(param_1,*(undefined4 *)(param_1 + 8));
  local_38 = 0;
  FUN_00018dce(auStack_34);
  iVar6 = 0;
  do {
    if (__ptr == (void *)0x0) {
LAB_00015282:
      FUN_00018dd8(auStack_34);
      return local_38;
    }
    pcVar7 = (char *)(param_2 + iVar6);
    iVar5 = 0;
    while( true ) {
      cVar2 = *(char *)(*(int *)((int)__ptr + 4) + iVar5);
      if (cVar2 == '\0') break;
      if (((cVar2 == '*') || (cVar2 == '?')) || (cVar2 == '[')) {
        FUN_00014b88(__ptr,iVar5,auStack_34,pcVar7,&local_38);
        goto LAB_00015282;
      }
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      if (cVar1 != cVar2) {
        free(__ptr);
        goto LAB_00015282;
      }
      iVar5 = iVar5 + 1;
    }
    iVar3 = FUN_00014ac0(__ptr,0x2a);
    if (iVar3 != 0) {
      FUN_00018e26(auStack_34,0x2a);
      FUN_00014b88(iVar3,0,auStack_34,pcVar7,&local_38);
      FUN_00018ecc(auStack_34);
    }
    iVar3 = FUN_00014ac0(__ptr,0x3f);
    if (iVar3 != 0) {
      FUN_00018e26(auStack_34,0x3f);
      FUN_00014b88(iVar3,0,auStack_34,pcVar7,&local_38);
      FUN_00018ecc(auStack_34);
    }
    iVar3 = FUN_00014ac0(__ptr,0x5b);
    if (iVar3 != 0) {
      FUN_00018e26(auStack_34,0x5b);
      FUN_00014b88(iVar3,0,auStack_34,pcVar7,&local_38);
      FUN_00018ecc(auStack_34);
    }
    if (*pcVar7 == '\0') {
      FUN_000149aa(__ptr,&local_38);
      goto LAB_00015282;
    }
    pvVar4 = (void *)FUN_00014ac0(__ptr);
    free(__ptr);
    iVar6 = iVar5 + iVar6 + 1;
    __ptr = pvVar4;
  } while( true );
}



/* ===== FUN_00015350 @ 00015350 size=48 ===== */

char * FUN_00015350(char *param_1,int param_2,char *param_3)

{
  size_t sVar1;
  
  if (*param_1 != '/') {
    sVar1 = strlen(param_1);
    if (param_2 + 1 + sVar1 < 0x1000) {
      memcpy(param_3 + param_2,param_1,sVar1 + 1);
      param_1 = param_3;
    }
    else {
      param_1 = (char *)0x0;
    }
  }
  return param_1;
}



/* ===== FUN_00015380 @ 00015380 size=100 ===== */

int FUN_00015380(int *param_1,void *param_2,size_t param_3,void *param_4,size_t param_5)

{
  int *__ptr;
  void *__dest;
  int iVar1;
  
  __ptr = malloc(param_5 + 6 + param_3);
  if (__ptr == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    __dest = (void *)(param_5 + 5 + (int)__ptr);
    *__ptr = (int)__dest;
    memcpy(__dest,param_2,param_3);
    *(undefined1 *)(*__ptr + param_3) = 0;
    memcpy(__ptr + 1,param_4,param_5);
    *(undefined1 *)((int)__ptr + param_5 + 4) = 0;
    iVar1 = FUN_000137be(*param_1,__ptr);
    if (iVar1 == 0) {
      free(__ptr);
    }
    else {
      *param_1 = iVar1;
    }
  }
  return iVar1;
}



/* ===== FUN_000153e4 @ 000153e4 size=44 ===== */

undefined4 FUN_000153e4(undefined4 *param_1)

{
  int iVar1;
  char *__s1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = FUN_000132f4(*param_1);
  piVar3 = *(int **)(iVar1 + 8);
  piVar2 = piVar3;
  while( true ) {
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    __s1 = (char *)FUN_000138a8(piVar2);
    iVar1 = strcmp(__s1,(char *)param_1[2]);
    if (iVar1 == 0) break;
    piVar2 = (int *)*piVar2;
    if (piVar2 == piVar3) {
      return 0;
    }
  }
  return 1;
}



/* ===== FUN_00015410 @ 00015410 size=200 ===== */

undefined4
FUN_00015410(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  char *__s;
  size_t sVar4;
  undefined4 uVar5;
  char *__format;
  uint uVar6;
  uint uVar7;
  int iVar8;
  char *__src;
  
  uVar2 = DAT_000154d8;
  if (param_5 == 0) {
    uVar5 = FUN_00015380();
    return uVar5;
  }
  __s = malloc((uint)((ulonglong)(param_5 * 3 + 0x13) * (ulonglong)DAT_000154d8 >> 0x24) * 3 +
               param_5 * 3 + -3);
  uVar5 = 0;
  if (__s != (char *)0x0) {
    __src = (char *)(DAT_000154dc + 0x15456);
    __format = (char *)(DAT_000154e0 + 0x1545a);
    uVar7 = 0;
    iVar3 = 0;
    while (iVar8 = iVar3, (int)uVar7 < param_5) {
      sprintf(__s + iVar8,__format,(uint)*(byte *)(param_4 + uVar7));
      uVar6 = uVar7 + 1;
      bVar1 = (int)uVar7 < param_5 + -1;
      uVar7 = uVar6;
      iVar3 = iVar8 + 2;
      if (bVar1) {
        __s[iVar8 + 2] = ':';
        iVar3 = iVar8 + 3;
        if (uVar6 == (uint)((ulonglong)uVar6 * (ulonglong)uVar2 >> 0x24) * 0x14) {
          strcpy(__s + iVar8 + 3,__src);
          iVar3 = iVar8 + 6;
        }
      }
    }
    sVar4 = strlen(__s);
    uVar5 = FUN_00015380(param_1,param_2,param_3,__s,sVar4);
    free(__s);
  }
  return uVar5;
}



/* ===== FUN_0001562c @ 0001562c size=14 ===== */

void FUN_0001562c(int param_1,byte param_2)

{
  *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) & 0xfe | param_2 & 1;
  return;
}



/* ===== FUN_0001563a @ 0001563a size=12 ===== */

void FUN_0001563a(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = 2;
  }
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  return;
}



/* ===== FUN_00015646 @ 00015646 size=14 ===== */

void FUN_00015646(int param_1,byte param_2)

{
  *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) & 0xfb | (param_2 & 1) << 2;
  return;
}



/* ===== FUN_00015654 @ 00015654 size=36 ===== */

bool FUN_00015654(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1[0xd] == 0) {
    iVar1 = FUN_00012cd0(*param_1,param_1[2]);
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 2;
    }
    param_1[0xd] = uVar2;
  }
  return param_1[0xd] == 2;
}



/* ===== kmod_module_ref @ 00015678 size=10 ===== */

void kmod_module_ref(int param_1)

{
  if (param_1 != 0) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  }
  return;
}



/* ===== FUN_00015682 @ 00015682 size=186 ===== */

undefined4
FUN_00015682(undefined4 param_1,void *param_2,int param_3,int param_4,int param_5,
            undefined4 *param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  void *pvVar5;
  size_t __n;
  
  iVar1 = FUN_00012b6c();
  if (iVar1 == 0) {
    if (param_4 == 0) {
      iVar3 = 1;
      iVar1 = param_3;
    }
    else {
      iVar3 = 2;
      iVar1 = param_5 + 1 + param_3;
    }
    __n = iVar1 + 1;
    puVar4 = malloc(__n * iVar3 + 0x3c);
    if (puVar4 == (undefined4 *)0x0) {
      return 0xfffffff4;
    }
    uVar2 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    puVar4[0xc] = 0;
    puVar4[0xd] = uVar2;
    *puVar4 = 0;
    puVar4[1] = uVar2;
    puVar4[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    puVar4[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    puVar4[4] = 0;
    puVar4[5] = uVar2;
    puVar4[6] = 0;
    puVar4[7] = uVar2;
    puVar4[8] = 0;
    puVar4[9] = uVar2;
    puVar4[10] = 0;
    puVar4[0xb] = uVar2;
    puVar4[0xd] = 0;
    puVar4[0xe] = uVar2;
    uVar2 = kmod_ref(param_1);
    *puVar4 = uVar2;
    puVar4[2] = puVar4 + 0xf;
    pvVar5 = memcpy(puVar4 + 0xf,param_2,__n);
    if (param_4 == 0) {
      puVar4[1] = pvVar5;
      puVar4[8] = 0;
    }
    else {
      *(undefined1 *)((int)pvVar5 + param_3) = 0;
      pvVar5 = (void *)(puVar4[2] + __n);
      puVar4[8] = param_3 + 1 + puVar4[2];
      puVar4[1] = pvVar5;
      memcpy(pvVar5,param_2,__n);
    }
    puVar4[0xb] = 1;
    FUN_00012b72(param_1,puVar4,puVar4[1]);
    *param_6 = puVar4;
  }
  else {
    uVar2 = kmod_module_ref();
    *param_6 = uVar2;
  }
  return 0;
}



/* ===== kmod_module_new_from_name @ 0001573c size=64 ===== */

undefined4 kmod_module_new_from_name(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uStack_1014;
  undefined1 auStack_1010 [4096];
  
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    uVar1 = 0xfffffffe;
  }
  else {
    FUN_00018ff0(param_2,auStack_1010,&uStack_1014);
    uVar1 = FUN_00015682(param_1,auStack_1010,uStack_1014,0,0,param_3);
  }
  return uVar1;
}



/* ===== FUN_0001577c @ 0001577c size=108 ===== */

uint FUN_0001577c(undefined4 param_1,char *param_2,char *param_3,undefined4 param_4)

{
  size_t __n;
  size_t sVar1;
  uint uVar2;
  undefined1 auStack_1020 [4100];
  
  __n = strlen(param_3);
  sVar1 = strlen(param_2);
  if (__n + sVar1 + 2 < 0x1001) {
    memcpy(auStack_1020,param_3,__n);
    memcpy(auStack_1020 + __n + 1,param_2,sVar1 + 1);
    auStack_1020[__n] = 0x5c;
    uVar2 = FUN_00015682(param_1,auStack_1020,__n,param_2,sVar1,param_4);
    uVar2 = uVar2 & (int)uVar2 >> 0x1f;
  }
  else {
    uVar2 = 0xffffffdc;
  }
  return uVar2;
}



/* ===== kmod_module_new_from_path @ 000157e8 size=274 ===== */

int kmod_module_new_from_path(int param_1,int param_2,int *param_3)

{
  char *__file;
  int iVar1;
  int *piVar2;
  int local_1098;
  undefined4 local_1094;
  stat64 sStack_1090;
  undefined1 auStack_1028 [4100];
  
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != (int *)0x0)) {
    __file = (char *)FUN_00019228(param_2);
    if (__file == (char *)0x0) {
      return -0xc;
    }
    iVar1 = stat64(__file,&sStack_1090);
    if (iVar1 < 0) {
      piVar2 = __errno_location();
      iVar1 = -*piVar2;
      strerror(*piVar2);
LAB_00015824:
      free(__file);
      return iVar1;
    }
    iVar1 = FUN_00019020(param_2,auStack_1028,&local_1094);
    if (iVar1 != 0) {
      local_1098 = FUN_00012b6c(param_1,auStack_1028);
      if (local_1098 == 0) {
        iVar1 = FUN_00015682(param_1,auStack_1028,local_1094,0,0,&local_1098);
        if (iVar1 < 0) goto LAB_00015824;
        *(char **)(local_1098 + 0xc) = __file;
        *param_3 = local_1098;
      }
      else {
        if (*(char **)(local_1098 + 0xc) == (char *)0x0) {
          *(char **)(local_1098 + 0xc) = __file;
        }
        else {
          iVar1 = strcmp(*(char **)(local_1098 + 0xc),__file);
          if (iVar1 != 0) {
            iVar1 = kmod_get_log_priority(param_1);
            if (2 < iVar1) {
              FUN_00012828(param_1,3,DAT_000158fc + 0x158a2,0x1ad,DAT_00015904 + 0x158b4,
                           DAT_00015900 + 0x158ae,auStack_1028,__file,
                           *(undefined4 *)(local_1098 + 0xc));
            }
            free(__file);
            return -0x11;
          }
          free(__file);
        }
        iVar1 = kmod_module_ref(local_1098);
        *param_3 = iVar1;
      }
      return 0;
    }
    free(__file);
  }
  return -2;
}



/* ===== kmod_module_unref_list @ 00015908 size=22 ===== */

void kmod_module_unref_list(int param_1)

{
  for (; param_1 != 0; param_1 = FUN_00013844(param_1)) {
    kmod_module_unref(*(undefined4 *)(param_1 + 8));
  }
  return;
}



/* ===== FUN_00015920 @ 00015920 size=398 ===== */

int FUN_00015920(undefined4 *param_1,char *param_2)

{
  undefined4 *extraout_r0;
  undefined4 *puVar1;
  char *pcVar2;
  char *__s;
  size_t __n;
  int iVar3;
  char *pcVar4;
  byte extraout_r3;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  char *pcStack_1030;
  undefined4 local_102c;
  char acStack_1028 [4100];
  
  bVar5 = *(byte *)(param_1 + 0xc);
  if ((int)((uint)bVar5 << 0x1f) < 0) {
    return param_1[10];
  }
  iVar8 = param_1[4];
  puVar1 = param_1;
  if (iVar8 != 0) {
    __assert((char *)(DAT_00015ab8 + 0x15958),(char *)(DAT_00015ab4 + 0x15956),0x95);
    puVar1 = extraout_r0;
    bVar5 = extraout_r3;
  }
  uVar9 = *puVar1;
  *(byte *)(puVar1 + 0xc) = bVar5 | 1;
  pcVar2 = strchr(param_2,0x3a);
  if (pcVar2 != (char *)0x0) {
    *pcVar2 = (char)iVar8;
    __s = (char *)kmod_get_dirname(*param_1);
    __n = strlen(__s);
    if (__n + 2 < 0x1000) {
      memcpy(acStack_1028,__s,__n);
      acStack_1028[__n] = '/';
      iVar10 = __n + 1;
      iVar6 = param_1[3];
      acStack_1028[iVar10] = (char)iVar8;
      if (iVar6 != 0) {
LAB_000159ac:
        pcVar2 = strtok_r(pcVar2 + 1,(char *)(DAT_00015abc + 0x159bc),&pcStack_1030);
        iVar7 = 0;
        iVar6 = 0;
        pcVar4 = (char *)(DAT_00015ac0 + 0x159cc);
        while( true ) {
          if (pcVar2 == (char *)0x0) {
            param_1[4] = iVar8;
            param_1[10] = iVar7;
            return iVar7;
          }
          local_102c = 0;
          iVar3 = FUN_00015350(pcVar2,iVar10,acStack_1028);
          if (iVar3 == 0) break;
          iVar6 = kmod_module_new_from_path(uVar9,iVar3,&local_102c);
          if (iVar6 < 0) {
            iVar10 = kmod_get_log_priority(uVar9);
            if (2 < iVar10) {
              pcVar2 = strerror(-iVar6);
              FUN_00012828(uVar9,3,DAT_00015ad0 + 0x15a7c,0xc0,DAT_00015ad8 + 0x15a86,
                           DAT_00015ad4 + 0x15a80,uVar9,iVar3,pcVar2);
            }
            goto LAB_00015a36;
          }
          iVar8 = FUN_00013820(iVar8,local_102c);
          iVar7 = iVar7 + 1;
          pcVar2 = strtok_r((char *)0x0,pcVar4,&pcStack_1030);
        }
        iVar10 = kmod_get_log_priority(uVar9);
        if (2 < iVar10) {
          FUN_00012828(uVar9,3,DAT_00015ac4 + 0x15a26,0xb9,DAT_00015acc + 0x15a30,
                       DAT_00015ac8 + 0x15a2a,__s,pcVar2);
        }
LAB_00015a36:
        kmod_module_unref_list(iVar8);
        *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0xfe;
        return iVar6;
      }
      pcVar4 = (char *)FUN_00015350(param_2,iVar10,acStack_1028);
      if (pcVar4 != (char *)0x0) {
        pcVar4 = strdup(pcVar4);
        param_1[3] = pcVar4;
        if (pcVar4 != (char *)0x0) goto LAB_000159ac;
      }
    }
  }
  return 0;
}



/* ===== kmod_module_unref @ 00015adc size=70 ===== */

undefined4 * kmod_module_unref(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    iVar1 = param_1[0xb];
    param_1[0xb] = iVar1 + -1;
    if (iVar1 + -1 < 1) {
      FUN_00012b7e(*param_1,param_1,param_1[1]);
      kmod_module_unref_list(param_1[4]);
      if (param_1[9] != 0) {
        FUN_00017682();
      }
      kmod_unref(*param_1);
      free((void *)param_1[5]);
      free((void *)param_1[3]);
      free(param_1);
      param_1 = (undefined4 *)0x0;
    }
  }
  return param_1;
}



/* ===== kmod_module_new_from_lookup @ 00015b24 size=244 ===== */

int kmod_module_new_from_lookup(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined1 auStack_1018 [4100];
  
  if ((param_1 == 0) || (param_2 == 0)) {
    iVar1 = -2;
  }
  else if ((param_3 == (int *)0x0) || (*param_3 != 0)) {
    iVar1 = kmod_get_log_priority(param_1);
    if (2 < iVar1) {
      FUN_00012828(param_1,3,DAT_00015c1c + 0x15b5c,0x223,DAT_00015c20 + 0x15b5e,
                   DAT_00015c18 + 0x15b56);
    }
    iVar1 = -0x26;
  }
  else {
    iVar1 = FUN_00018f5a(param_2,auStack_1018);
    if (iVar1 < 0) {
      iVar1 = -0x16;
    }
    else {
      iVar1 = FUN_00012d9c(param_1,auStack_1018,param_3);
      if (-1 < iVar1) {
        if (*param_3 != 0) {
          return iVar1;
        }
        iVar1 = FUN_00012d00(param_1,auStack_1018,param_3);
        if (-1 < iVar1) {
          if (*param_3 != 0) {
            return iVar1;
          }
          iVar1 = FUN_00012b88(param_1,auStack_1018,param_3);
          if (-1 < iVar1) {
            if (*param_3 != 0) {
              return iVar1;
            }
            iVar1 = FUN_00012e54(param_1,auStack_1018,param_3);
            if (-1 < iVar1) {
              if (*param_3 != 0) {
                return iVar1;
              }
              iVar1 = FUN_00012bb8(param_1,auStack_1018,param_3);
              if (-1 < iVar1) {
                if (*param_3 != 0) {
                  return iVar1;
                }
                iVar1 = FUN_00012bc4(param_1,auStack_1018,param_3);
                if (iVar1 == -0x26) {
                  iVar1 = FUN_00012c10(param_1,auStack_1018,param_3);
                }
                if (-1 < iVar1) {
                  return iVar1;
                }
              }
            }
          }
        }
      }
      kmod_module_unref_list(*param_3);
      *param_3 = 0;
    }
  }
  return iVar1;
}



/* ===== FUN_00015c24 @ 00015c24 size=118 ===== */

undefined4 FUN_00015c24(undefined4 param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int local_2c [2];
  
  iVar5 = DAT_00015c9c + 0x15c40;
  iVar6 = DAT_00015ca0 + 0x15c42;
  iVar7 = DAT_00015ca4 + 0x15c46;
  uVar4 = 0;
  puVar2 = param_2;
  while (puVar2 != param_2 + param_3) {
    puVar3 = puVar2 + 1;
    uVar8 = *puVar2;
    local_2c[0] = 0;
    iVar1 = kmod_module_new_from_lookup(param_1,uVar8,local_2c);
    puVar2 = puVar3;
    if (iVar1 < 0) {
      iVar1 = kmod_get_log_priority(param_1);
      if (2 < iVar1) {
        FUN_00012828(param_1,3,iVar5,0x5e6,iVar7,iVar6,uVar8);
      }
    }
    else if (local_2c[0] != 0) {
      uVar4 = FUN_0001380a(uVar4);
    }
  }
  return uVar4;
}



/* ===== kmod_module_get_dependencies @ 00015ca8 size=142 ===== */

int kmod_module_get_dependencies(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  void *__ptr;
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if (param_1 == (undefined4 *)0x0) {
    iVar2 = 0;
  }
  else {
    if ((-1 < (int)((uint)*(byte *)(param_1 + 0xc) << 0x1f)) &&
       (__ptr = (void *)FUN_00012cf0(*param_1,param_1[2],param_3,
                                     (uint)*(byte *)(param_1 + 0xc) << 0x1f,param_1,param_2,param_3)
       , __ptr != (void *)0x0)) {
      FUN_00015920(param_1,__ptr);
      free(__ptr);
    }
    piVar3 = (int *)param_1[4];
    iVar4 = 0;
    do {
      if (piVar3 == (int *)0x0) {
        return iVar4;
      }
      uVar1 = kmod_module_ref(piVar3[2]);
      iVar2 = FUN_000137be(iVar4,uVar1);
      if (iVar2 == 0) {
        kmod_module_unref(piVar3[2]);
        iVar2 = kmod_get_log_priority(*param_1);
        if (2 < iVar2) {
          FUN_00012828(*param_1,3,DAT_00015d3c + 0x15d0e,0x2b1,DAT_00015d40 + 0x15d10,
                       DAT_00015d38 + 0x15d08);
        }
        kmod_module_unref_list(iVar4);
        return 0;
      }
      piVar3 = (int *)*piVar3;
      iVar4 = iVar2;
    } while (piVar3 != (int *)param_1[4]);
  }
  return iVar2;
}



/* ===== kmod_module_get_module @ 00015d44 size=12 ===== */

void kmod_module_get_module(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  (*(code *)PTR_kmod_module_ref_0002b124)(*(undefined4 *)(param_1 + 8));
  return;
}



/* ===== kmod_module_get_name @ 00015d4e size=6 ===== */

undefined4 kmod_module_get_name(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 8);
  }
  return uVar1;
}



/* ===== kmod_module_get_path @ 00015d54 size=56 ===== */

int kmod_module_get_path
              (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  void *__ptr;
  
  if (param_1 != (undefined4 *)0x0) {
    if (param_1[3] != 0) {
      return param_1[3];
    }
    if ((-1 < (int)((uint)*(byte *)(param_1 + 0xc) << 0x1f)) &&
       (__ptr = (void *)FUN_00012cf0(*param_1,param_1[2],param_3,
                                     (uint)*(byte *)(param_1 + 0xc) << 0x1f,param_4),
       __ptr != (void *)0x0)) {
      FUN_00015920(param_1,__ptr);
      free(__ptr);
      return param_1[3];
    }
  }
  return 0;
}



/* ===== FUN_00015d8c @ 00015d8c size=52 ===== */

undefined4 FUN_00015d8c(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  if (param_1[9] == 0) {
    iVar2 = kmod_module_get_path();
    if (iVar2 == 0) {
      piVar3 = __errno_location();
      *piVar3 = 2;
    }
    else {
      iVar2 = FUN_00017604(*param_1,iVar2);
      param_1[9] = iVar2;
      if (iVar2 != 0) goto LAB_00015d94;
    }
    return 0;
  }
LAB_00015d94:
  uVar1 = FUN_000175ee(param_1[9]);
  return uVar1;
}



/* ===== kmod_module_remove_module @ 00015dc0 size=88 ===== */

int kmod_module_remove_module(undefined4 *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (param_1 == (undefined4 *)0x0) {
    iVar3 = -2;
  }
  else {
    iVar1 = delete_module(param_1[2],param_2 & 0x200 | 0x800);
    iVar3 = 0;
    if (iVar1 != 0) {
      piVar2 = __errno_location();
      iVar3 = *piVar2;
      iVar1 = kmod_get_log_priority(*param_1);
      iVar3 = -iVar3;
      if (2 < iVar1) {
        FUN_00012828(*param_1,3,DAT_00015e18 + 0x15df8,799,DAT_00015e20 + 0x15e02,
                     DAT_00015e1c + 0x15dfc,param_1[2]);
      }
    }
  }
  return iVar3;
}



/* ===== kmod_module_insert_module @ 00015e24 size=412 ===== */

int kmod_module_insert_module(undefined4 *param_1,uint param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  uint uVar12;
  
  iVar10 = param_3;
  if (param_3 == 0) {
    iVar10 = DAT_00015fc0 + 0x15e36;
  }
  if (param_1 == (undefined4 *)0x0) {
    return -2;
  }
  puVar11 = param_1;
  uVar12 = param_2;
  iVar1 = kmod_module_get_path(param_1);
  if (iVar1 == 0) {
    iVar10 = kmod_get_log_priority(*param_1);
    if (iVar10 < 3) {
      return -2;
    }
    FUN_00012828(*param_1,3,DAT_00015fc4 + 0x15e64,0x346,DAT_00015fcc + 0x15e6e,
                 DAT_00015fc8 + 0x15e68,param_1[2]);
    return -2;
  }
  if (param_1[9] == 0) {
    iVar2 = FUN_00017604(*param_1,iVar1);
    param_1[9] = iVar2;
    if (iVar2 == 0) goto LAB_00015e88;
  }
  iVar2 = FUN_0001767a(param_1[9]);
  if (iVar2 != 0) {
    uVar9 = 0;
    if ((param_2 & 1) != 0) {
      uVar9 = 2;
    }
    if ((int)(param_2 << 0x1e) < 0) {
      uVar9 = uVar9 | 1;
    }
    uVar4 = FUN_0001767e(param_1[9]);
    iVar2 = syscall(0x17b,uVar4,iVar10,uVar9,puVar11,uVar12,param_3,param_4);
    if (iVar2 == 0) {
      return 0;
    }
    piVar3 = __errno_location();
    if (*piVar3 != 0x26) goto LAB_00015eda;
  }
  if ((param_2 & 3) == 0) {
    uVar4 = FUN_00017670();
  }
  else {
    iVar2 = FUN_000175ee(param_1[9]);
    if (iVar2 == 0) {
LAB_00015e88:
      piVar3 = __errno_location();
      return -*piVar3;
    }
    if ((((int)(param_2 << 0x1e) < 0) &&
        (iVar5 = FUN_00017d58(iVar2,DAT_00015fdc + 0x15f26), iVar5 < 0)) &&
       (iVar6 = kmod_get_log_priority(*param_1), 5 < iVar6)) {
      uVar4 = *param_1;
      pcVar7 = strerror(-iVar5);
      FUN_00012828(uVar4,6,DAT_00015fe4 + 0x15f54,0x369,DAT_00015fe8 + 0x15f56,
                   DAT_00015fe0 + 0x15f4e,pcVar7);
    }
    if ((((int)(param_2 << 0x1f) < 0) && (iVar5 = FUN_00017ec0(iVar2), iVar5 < 0)) &&
       (iVar6 = kmod_get_log_priority(*param_1), 5 < iVar6)) {
      uVar4 = *param_1;
      pcVar7 = strerror(-iVar5);
      FUN_00012828(uVar4,6,DAT_00015ff0 + 0x15f96,0x36f,DAT_00015ff4 + 0x15f98,DAT_00015fec + 90000,
                   pcVar7);
    }
    uVar4 = FUN_00017a88(iVar2);
  }
  uVar8 = FUN_00017674(param_1[9]);
  iVar2 = init_module(uVar4,uVar8,iVar10);
LAB_00015eda:
  if (-1 < iVar2) {
    return iVar2;
  }
  piVar3 = __errno_location();
  iVar2 = *piVar3;
  iVar10 = kmod_get_log_priority(*param_1);
  if (5 < iVar10) {
    FUN_00012828(*param_1,6,DAT_00015fd4 + 0x15f00,0x37c,DAT_00015fd8 + 0x15f06,
                 DAT_00015fd0 + 0x15efa,iVar1);
    return -iVar2;
  }
  return -iVar2;
}



/* ===== kmod_module_apply_filter @ 00015ff8 size=126 ===== */

undefined4 kmod_module_apply_filter(int param_1,uint param_2,int *param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if ((param_1 == 0) || (param_4 == (int *)0x0)) {
    uVar1 = 0xfffffffe;
  }
  else {
    *param_4 = 0;
    if (param_3 != (int *)0x0) {
      piVar3 = param_3;
      do {
        iVar4 = piVar3[2];
        if ((((param_2 & 1) == 0) || (iVar2 = FUN_000153e4(iVar4), iVar2 == 0)) &&
           (((param_2 & 2) == 0 || (iVar2 = FUN_00015654(iVar4), iVar2 == 0)))) {
          iVar2 = FUN_000137be(*param_4,iVar4);
          if (iVar2 == 0) {
            kmod_module_unref_list(*param_4);
            *param_4 = 0;
            return 0xfffffff4;
          }
          *param_4 = iVar2;
          kmod_module_ref(iVar4);
        }
        piVar3 = (int *)*piVar3;
      } while ((piVar3 != param_3) && (piVar3 != (int *)0x0));
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== kmod_module_get_filtered_blacklist @ 00016076 size=12 ===== */

void kmod_module_get_filtered_blacklist(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  (*(code *)PTR_kmod_module_apply_filter_0002b0e0)(param_1,1,param_2,param_3);
  return;
}



/* ===== kmod_module_get_options @ 00016080 size=210 ===== */

undefined4 kmod_module_get_options(undefined4 *param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  size_t __n;
  void *pvVar4;
  int iVar5;
  void *pvVar6;
  undefined4 uVar7;
  int *piVar8;
  
  if (param_1 == (undefined4 *)0x0) {
LAB_00016088:
    uVar7 = 0;
  }
  else {
    if (-1 < (int)((uint)*(byte *)(param_1 + 0xc) << 0x1e)) {
      iVar1 = FUN_000132f4(*param_1);
      piVar8 = *(int **)(iVar1 + 0xc);
      iVar5 = 0;
      pvVar6 = (void *)0x0;
      while (piVar8 != (int *)0x0) {
        pcVar2 = (char *)FUN_000138be(piVar8);
        iVar3 = strcmp(pcVar2,(char *)param_1[2]);
        pvVar4 = pvVar6;
        if ((iVar3 == 0) ||
           (((char *)param_1[8] != (char *)0x0 &&
            (iVar3 = strcmp(pcVar2,(char *)param_1[8]), iVar3 == 0)))) {
          pcVar2 = (char *)FUN_000138b8(piVar8);
          __n = strlen(pcVar2);
          if (__n != 0) {
            pvVar4 = realloc(pvVar6,iVar5 + 2 + __n);
            if (pvVar4 == (void *)0x0) {
              free(pvVar6);
              iVar5 = kmod_get_log_priority(*param_1);
              if (2 < iVar5) {
                FUN_00012828(*param_1,3,DAT_00016158 + 0x16118,0x5a0,DAT_0001615c + 0x1611a,
                             DAT_00016154 + 0x16112);
                return 0;
              }
              goto LAB_00016088;
            }
            if (iVar5 != 0) {
              *(undefined1 *)((int)pvVar4 + iVar5) = 0x20;
              iVar5 = iVar5 + 1;
            }
            pvVar6 = (void *)((int)pvVar4 + iVar5);
            iVar5 = iVar5 + __n;
            memcpy(pvVar6,pcVar2,__n);
            *(undefined1 *)((int)pvVar4 + iVar5) = 0;
          }
        }
        piVar8 = (int *)*piVar8;
        pvVar6 = pvVar4;
        if (piVar8 == (int *)*(int *)(iVar1 + 0xc)) {
          piVar8 = (int *)0x0;
        }
      }
      param_1[5] = pvVar6;
      *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 2;
    }
    uVar7 = param_1[5];
  }
  return uVar7;
}



/* ===== kmod_module_get_install_commands @ 00016160 size=78 ===== */

undefined4 kmod_module_get_install_commands(undefined4 *param_1)

{
  int iVar1;
  char *__pattern;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  uVar3 = 0;
  if (param_1 != (undefined4 *)0x0) {
    if (-1 < (int)((uint)*(byte *)(param_1 + 0xc) << 0x1d)) {
      iVar1 = FUN_000132f4(*param_1);
      piVar4 = *(int **)(iVar1 + 0x14);
      do {
        if (piVar4 == (int *)0x0) break;
        __pattern = (char *)FUN_000138ca(piVar4);
        iVar2 = fnmatch(__pattern,(char *)param_1[2],0);
        if (iVar2 == 0) {
          uVar3 = FUN_000138c4(piVar4);
          param_1[6] = uVar3;
          break;
        }
        piVar4 = (int *)*piVar4;
      } while (piVar4 != (int *)*(int *)(iVar1 + 0x14));
      *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 4;
    }
    uVar3 = param_1[6];
  }
  return uVar3;
}



/* ===== FUN_000161ae @ 000161ae size=16 ===== */

void FUN_000161ae(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) | 4;
  return;
}



/* ===== kmod_module_get_softdeps @ 000161c0 size=172 ===== */

undefined4 kmod_module_get_softdeps(undefined4 *param_1,int *param_2,int *param_3)

{
  char *pcVar1;
  undefined4 *extraout_r0;
  undefined4 *puVar2;
  int iVar3;
  char *__file;
  int iVar4;
  int *extraout_r2;
  int *piVar5;
  undefined4 uVar6;
  int *local_24;
  int *piStack_20;
  
  if (((param_1 == (undefined4 *)0x0) || (param_2 == (int *)0x0)) || (param_3 == (int *)0x0)) {
    uVar6 = 0xfffffffe;
  }
  else {
    puVar2 = param_1;
    piVar5 = param_3;
    local_24 = param_2;
    piStack_20 = param_3;
    if (*param_2 == 0) goto LAB_000161ee;
    iVar4 = 0x609;
    __file = (char *)(DAT_00016270 + 0x161ea);
    pcVar1 = (char *)(DAT_00016274 + 0x161ec);
    while( true ) {
      __assert(pcVar1,__file,iVar4);
      puVar2 = extraout_r0;
      piVar5 = extraout_r2;
LAB_000161ee:
      if (*piVar5 == 0) break;
      iVar4 = 0x60a;
      __file = (char *)(DAT_0001627c + 0x16202);
      pcVar1 = (char *)(DAT_00016280 + 0x16204);
    }
    iVar4 = FUN_000132f4(*puVar2);
    piVar5 = *(int **)(iVar4 + 0x18);
    do {
      if (piVar5 == (int *)0x0) break;
      pcVar1 = (char *)FUN_000138d0(piVar5);
      iVar3 = fnmatch(pcVar1,(char *)param_1[2],0);
      if (iVar3 == 0) {
        uVar6 = FUN_00013c1e(piVar5,&local_24);
        iVar4 = FUN_00015c24(*param_1,uVar6,local_24);
        *param_2 = iVar4;
        uVar6 = FUN_00013c28(piVar5,&local_24);
        iVar4 = FUN_00015c24(*param_1,uVar6,local_24);
        *param_3 = iVar4;
        return 0;
      }
      piVar5 = (int *)*piVar5;
    } while (piVar5 != (int *)*(int *)(iVar4 + 0x18));
    uVar6 = 0;
  }
  return uVar6;
}



/* ===== FUN_00016284 @ 00016284 size=234 ===== */

int FUN_00016284(undefined4 *param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  byte bVar5;
  char cVar6;
  undefined4 uVar7;
  int *piVar8;
  int *local_20;
  int *local_1c [2];
  
  local_20 = (int *)0x0;
  local_1c[0] = (int *)0x0;
  iVar2 = kmod_module_get_softdeps(param_1,&local_20,local_1c);
  piVar8 = local_20;
  if (iVar2 < 0) {
    iVar3 = kmod_get_log_priority(*param_1);
    if (2 < iVar3) {
      uVar7 = *param_1;
      pcVar4 = strerror(-iVar2);
      FUN_00012828(uVar7,3,DAT_00016374 + 0x162c0,0x446,DAT_00016378 + 0x162c2,
                   DAT_00016370 + 0x162ba,pcVar4);
    }
  }
  else {
    do {
      if (piVar8 == (int *)0x0) break;
      bVar1 = *(byte *)(piVar8[2] + 0x38);
      bVar5 = bVar1 & 1;
      if ((bVar1 & 1) == 0) {
        iVar2 = FUN_0001637c(piVar8[2],bVar5,bVar5,param_2);
        if (iVar2 < 0) goto LAB_000162ce;
      }
      else {
        iVar2 = 0;
      }
      piVar8 = (int *)*piVar8;
    } while (piVar8 != local_20);
    iVar3 = *param_2;
    uVar7 = kmod_module_ref(param_1);
    iVar3 = FUN_000137be(iVar3,uVar7);
    if (iVar3 == 0) {
      iVar2 = -0xc;
      kmod_module_unref(param_1);
    }
    else {
      *param_2 = iVar3;
      if (local_20 == (int *)0x0) {
        cVar6 = '\0';
        if (local_1c[0] != (int *)0x0) {
          cVar6 = '\x01';
        }
      }
      else {
        cVar6 = '\x01';
      }
      *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 0xe) & 0xfd | cVar6 << 1;
      piVar8 = local_1c[0];
      do {
        if (piVar8 == (int *)0x0) break;
        bVar1 = *(byte *)(piVar8[2] + 0x38);
        bVar5 = bVar1 & 1;
        if ((bVar1 & 1) == 0) {
          iVar2 = FUN_0001637c(piVar8[2],bVar5,bVar5,param_2);
          if (iVar2 < 0) break;
        }
        else {
          iVar2 = 0;
        }
        piVar8 = (int *)*piVar8;
      } while (piVar8 != local_1c[0]);
    }
  }
LAB_000162ce:
  kmod_module_unref_list(local_20);
  kmod_module_unref_list(local_1c[0]);
  return iVar2;
}



/* ===== FUN_0001637c @ 0001637c size=170 ===== */

int FUN_0001637c(int param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) | 1;
  piVar2 = (int *)kmod_module_get_dependencies();
  if (param_2 != 0) {
    *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) | 4;
    piVar4 = piVar2;
    do {
      if (piVar4 == (int *)0x0) break;
      piVar1 = piVar4 + 2;
      piVar4 = (int *)*piVar4;
      *(byte *)(*piVar1 + 0x38) = *(byte *)(*piVar1 + 0x38) | 4;
    } while (piVar4 != piVar2);
  }
  iVar6 = 0;
  piVar4 = piVar2;
  do {
    if (piVar4 == (int *)0x0) break;
    iVar6 = FUN_00016284(piVar4[2],param_4);
    if (iVar6 < 0) goto LAB_000163fc;
    piVar4 = (int *)*piVar4;
  } while (piVar4 != piVar2);
  if (param_3 == 0) {
    iVar6 = FUN_00016284(param_1,param_4);
  }
  else {
    iVar5 = *param_4;
    uVar3 = kmod_module_ref(param_1);
    iVar5 = FUN_000137be(iVar5,uVar3);
    if (iVar5 == 0) {
      iVar6 = -0xc;
      kmod_module_unref(param_1);
    }
    else {
      *param_4 = iVar5;
      *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) | 2;
    }
  }
LAB_000163fc:
  kmod_module_unref_list(piVar2);
  return iVar6;
}



/* ===== kmod_module_get_remove_commands @ 00016426 size=78 ===== */

undefined4 kmod_module_get_remove_commands(undefined4 *param_1)

{
  int iVar1;
  char *__pattern;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  uVar3 = 0;
  if (param_1 != (undefined4 *)0x0) {
    if (-1 < (int)((uint)*(byte *)(param_1 + 0xc) << 0x1c)) {
      iVar1 = FUN_000132f4(*param_1);
      piVar4 = *(int **)(iVar1 + 0x10);
      do {
        if (piVar4 == (int *)0x0) break;
        __pattern = (char *)FUN_000138ca(piVar4);
        iVar2 = fnmatch(__pattern,(char *)param_1[2],0);
        if (iVar2 == 0) {
          uVar3 = FUN_000138c4(piVar4);
          param_1[7] = uVar3;
          break;
        }
        piVar4 = (int *)*piVar4;
      } while (piVar4 != (int *)*(int *)(iVar1 + 0x10));
      *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 8;
    }
    uVar3 = param_1[7];
  }
  return uVar3;
}



/* ===== FUN_00016474 @ 00016474 size=16 ===== */

void FUN_00016474(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) | 8;
  return;
}



/* ===== kmod_module_new_from_loaded @ 00016484 size=356 ===== */

int kmod_module_new_from_loaded(int param_1,int *param_2)

{
  FILE *__stream;
  int *piVar1;
  int iVar2;
  char *pcVar3;
  size_t sVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  undefined4 local_1030;
  undefined4 uStack_102c;
  char acStack_1028 [4100];
  
  if ((param_1 == 0) || (param_2 == (int *)0x0)) {
    iVar8 = -2;
  }
  else {
    __stream = fopen64((char *)(DAT_000165ec + 0x164a8),(char *)(DAT_000165e8 + 0x164a6));
    if (__stream == (FILE *)0x0) {
      piVar1 = __errno_location();
      iVar8 = *piVar1;
      iVar2 = kmod_get_log_priority(param_1);
      iVar8 = -iVar8;
      if (2 < iVar2) {
        pcVar3 = strerror(*piVar1);
        FUN_00012828(param_1,3,DAT_000165f4 + 0x164dc,0x684,DAT_000165f8 + 0x164de,
                     DAT_000165f0 + 0x164d6,pcVar3);
      }
    }
    else {
      pcVar3 = (char *)(DAT_00016614 + 0x165e0);
      iVar8 = 0;
      while (pcVar7 = fgets(acStack_1028,0x1000,__stream), pcVar7 != (char *)0x0) {
        sVar4 = strlen(acStack_1028);
        pcVar7 = strtok_r(acStack_1028,pcVar3,(char **)&uStack_102c);
        iVar5 = kmod_module_new_from_name(param_1,pcVar7,&local_1030);
        iVar2 = iVar8;
        if (iVar5 < 0) {
          iVar8 = kmod_get_log_priority(param_1);
          if (2 < iVar8) {
            pcVar6 = strerror(-iVar5);
            FUN_00012828(param_1,3,DAT_00016600 + 0x16540,0x692,DAT_00016604 + 0x16542,
                         DAT_000165fc + 0x1653a,pcVar7,pcVar6);
          }
        }
        else {
          iVar2 = FUN_000137be(iVar8,local_1030);
          if (iVar2 == 0) {
            iVar2 = kmod_get_log_priority(param_1);
            if (2 < iVar2) {
              FUN_00012828(param_1,3,DAT_0001660c + 0x165ae,0x69a,DAT_00016610 + 0x165b0,
                           DAT_00016608 + 0x165a8);
            }
            kmod_module_unref(local_1030);
            iVar2 = iVar8;
          }
        }
        while ((iVar8 = iVar2, acStack_1028[sVar4 - 1] != '\n' &&
               (pcVar7 = fgets(acStack_1028,0x1000,__stream), pcVar7 != (char *)0x0))) {
          sVar4 = strlen(acStack_1028);
        }
      }
      fclose(__stream);
      *param_2 = iVar8;
      iVar8 = 0;
    }
  }
  return iVar8;
}



/* ===== kmod_module_initstate_str @ 00016618 size=36 ===== */

int kmod_module_initstate_str(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return (int)&DAT_00016640 + DAT_0001664c;
  case 1:
    return DAT_00016640 + 0x1662a;
  case 2:
    return DAT_00016644 + 0x16630;
  case 3:
    return DAT_00016648 + 0x16636;
  default:
    return 0;
  }
}



/* ===== kmod_module_get_initstate @ 00016650 size=320 ===== */

int kmod_module_get_initstate(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  int __errnum;
  undefined4 uVar5;
  stat64 sStack_1080;
  char acStack_1018 [4100];
  
  if (param_1 == (undefined4 *)0x0) {
    return -2;
  }
  iVar4 = FUN_00015654();
  if (iVar4 != 0) {
    return 0;
  }
  iVar4 = snprintf(acStack_1018,0x1000,(char *)(DAT_00015604 + 0x154f8),param_1[2]);
  iVar1 = open64(acStack_1018,0x80000);
  if (iVar1 < 0) {
    piVar2 = __errno_location();
    __errnum = *piVar2;
    iVar1 = -__errnum;
    strerror(__errnum);
    if (10 < iVar4) {
      acStack_1018[iVar4 + -10] = '\0';
      iVar4 = stat64(acStack_1018,&sStack_1080);
      if ((iVar4 == 0) && ((sStack_1080.st_mode & 0xf000) == 0x4000)) goto LAB_00015546;
    }
    strerror(__errnum);
  }
  else {
    iVar4 = FUN_00019040(iVar1,&sStack_1080,0x20);
    close(iVar1);
    if (iVar4 < 0) {
      iVar1 = kmod_get_log_priority(*param_1);
      if (iVar1 < 3) {
        return iVar4;
      }
      uVar5 = *param_1;
      pcVar3 = strerror(-iVar4);
      FUN_00012828(uVar5,3,DAT_0001560c + 0x15594,0x6f3,DAT_00015610 + 0x15596,
                   DAT_00015608 + 0x1558e,acStack_1018,pcVar3);
      return iVar4;
    }
    iVar4 = strcmp((char *)&sStack_1080,(char *)(DAT_00015614 + 0x155ae));
    if (iVar4 == 0) {
      return 1;
    }
    iVar4 = strcmp((char *)&sStack_1080,(char *)(DAT_00015618 + 0x155ba));
    if (iVar4 != 0) {
      iVar4 = strcmp((char *)&sStack_1080,(char *)(DAT_0001561c + 0x155c8));
      if (iVar4 != 0) {
        iVar4 = kmod_get_log_priority(*param_1);
        if (2 < iVar4) {
          FUN_00012828(*param_1,3,DAT_00015624 + 0x155e6,0x6fe,DAT_00015628 + 0x155ec,
                       DAT_00015620 + 0x155e0,acStack_1018,&sStack_1080);
        }
        return -0x16;
      }
      return 3;
    }
LAB_00015546:
    iVar1 = 2;
  }
  return iVar1;
}



/* ===== kmod_module_probe_insert_module @ 00016670 size=950 ===== */

Elf32_Ehdr *
kmod_module_probe_insert_module
          (undefined4 *param_1,uint param_2,char *param_3,code *param_4,undefined4 param_5,
          code *param_6)

{
  uint uVar1;
  char *pcVar2;
  char *__dest;
  char *pcVar3;
  size_t sVar4;
  char *__dest_00;
  char *pcVar5;
  int iVar6;
  char *__name;
  char *pcVar7;
  undefined4 *puVar8;
  size_t sVar9;
  Elf32_Ehdr *pEVar10;
  size_t __n;
  Elf32_Ehdr *local_60;
  char *local_5c;
  Elf32_Ehdr *local_30;
  Elf32_Ehdr *local_2c [2];
  
  local_30 = (Elf32_Ehdr *)0x0;
  if (param_1 == (undefined4 *)0x0) {
    pEVar10 = (Elf32_Ehdr *)0xfffffffe;
  }
  else {
    if (((param_2 & 8) != 0) || (uVar1 = kmod_module_get_initstate(), 1 < uVar1)) {
      if ((param_1[8] != 0) &&
         (pEVar10 = (Elf32_Ehdr *)(param_2 & 0x40000), pEVar10 != (Elf32_Ehdr *)0x0))
      goto LAB_000166dc;
      pEVar10 = (Elf32_Ehdr *)(param_2 & 0x10000);
      if (pEVar10 != (Elf32_Ehdr *)0x0) goto LAB_000166dc;
      pEVar10 = (Elf32_Ehdr *)(param_2 & 0x20000);
      if (pEVar10 != (Elf32_Ehdr *)0x0) goto LAB_000166dc;
LAB_000166c4:
      pEVar10 = local_30;
      if (local_30 == (Elf32_Ehdr *)0x0) {
        FUN_00012fe0(*param_1,0);
        FUN_0001300a(*param_1,0);
        if ((-1 < (int)((uint)*(byte *)(param_1 + 0xe) << 0x1f)) &&
           (pEVar10 = (Elf32_Ehdr *)FUN_0001637c(param_1,1,(param_2 & 7) >> 2,&local_30),
           (int)pEVar10 < 0)) {
LAB_0001671a:
          kmod_module_unref_list(local_30);
          return pEVar10;
        }
        if ((param_2 & 0x10000) != 0) {
          local_2c[0] = (Elf32_Ehdr *)0x0;
          pEVar10 = (Elf32_Ehdr *)kmod_module_apply_filter(*param_1,1,local_30,local_2c);
          if ((int)pEVar10 < 0) {
            return pEVar10;
          }
          kmod_module_unref_list(local_30);
          if (local_2c[0] == (Elf32_Ehdr *)0x0) {
            return &Elf32_Ehdr_00010000;
          }
          local_30 = local_2c[0];
        }
        local_60 = local_30;
        pcVar2 = (char *)(DAT_00016a58 + 0x16944);
        pcVar5 = (char *)(DAT_00016a5c + 0x1694a);
        __name = (char *)(DAT_00016a60 + 0x16950);
        do {
          if (local_60 == (Elf32_Ehdr *)0x0) goto LAB_0001671a;
          puVar8 = *(undefined4 **)&local_60->e_ident_abiversion;
          pcVar3 = (char *)kmod_module_get_options(puVar8);
          iVar6 = kmod_module_get_install_commands(puVar8);
          if (((param_2 & 8) == 0) && (uVar1 = kmod_module_get_initstate(puVar8), uVar1 < 2)) {
LAB_00016734:
            if ((param_1 == puVar8) && ((param_2 & 0x20) != 0)) {
              pEVar10 = (Elf32_Ehdr *)0xffffffef;
              goto LAB_0001671a;
            }
LAB_000167c4:
            pEVar10 = (Elf32_Ehdr *)0x0;
          }
          else {
            pcVar7 = param_3;
            if (param_1 != puVar8) {
              pcVar7 = (char *)0x0;
            }
            if (pcVar3 == (char *)0x0) {
              __dest_00 = (char *)0x0;
              if (pcVar7 != (char *)0x0) {
                sVar9 = 0;
LAB_0001698a:
                sVar4 = strlen(pcVar7);
                goto LAB_00016992;
              }
            }
            else {
              sVar9 = strlen(pcVar3);
              if (pcVar7 != (char *)0x0) goto LAB_0001698a;
              sVar4 = 0;
LAB_00016992:
              if (sVar4 == 0 && sVar9 == 0) {
                __dest_00 = (char *)0x0;
              }
              else {
                __dest_00 = malloc(sVar4 + sVar9 + 2);
                if (pcVar3 != (char *)0x0) {
                  memcpy(__dest_00,pcVar3,sVar9);
                  __dest_00[sVar9] = ' ';
                  sVar9 = sVar9 + 1;
                }
                if (pcVar7 != (char *)0x0) {
                  memcpy(__dest_00 + sVar9,pcVar7,sVar4);
                }
                (__dest_00 + sVar9)[sVar4] = '\0';
              }
            }
            if ((iVar6 == 0) || ((int)((uint)*(byte *)(puVar8 + 0xe) << 0x1e) < 0)) {
              if (param_6 != (code *)0x0) {
                pcVar3 = __dest_00;
                if (__dest_00 == (char *)0x0) {
                  pcVar3 = pcVar2;
                }
                (*param_6)(puVar8,0,pcVar3);
              }
              if ((param_2 & 0x10) == 0) {
                pEVar10 = (Elf32_Ehdr *)kmod_module_insert_module(puVar8,param_2,__dest_00);
              }
            }
            else {
              if (param_6 != (code *)0x0) {
                pcVar3 = __dest_00;
                if (__dest_00 == (char *)0x0) {
                  pcVar3 = (char *)(DAT_00016a64 + 0x169fa);
                }
                (*param_6)(puVar8,1,pcVar3);
              }
              if ((param_2 & 0x10) == 0) {
                pcVar3 = (char *)kmod_module_get_install_commands(puVar8);
                if (pcVar3 == (char *)0x0) goto code_r0x00016a14;
                local_5c = __dest_00;
                if (__dest_00 == (char *)0x0) {
                  local_5c = (char *)(DAT_00016a34 + 0x16768);
                }
                sVar9 = strlen(local_5c);
                sVar4 = strlen(pcVar3);
                pcVar3 = (char *)FUN_00018f2a(pcVar3,sVar4 + 1);
                if (pcVar3 == (char *)0x0) {
LAB_000168cc:
                  pEVar10 = (Elf32_Ehdr *)0xfffffff4;
                }
                else {
                  while (pcVar7 = strstr(pcVar3,pcVar5), pcVar7 != (char *)0x0) {
                    __n = (int)pcVar7 - (int)pcVar3;
                    iVar6 = sVar4 - 0xd;
                    sVar4 = sVar4 + (sVar9 - 0xd);
                    __dest = malloc(sVar4 + 1);
                    if (__dest == (char *)0x0) goto LAB_000168cc;
                    memcpy(__dest,pcVar3,__n);
                    memcpy(__dest + __n,local_5c,sVar9);
                    memcpy(__dest + sVar9 + __n,pcVar7 + 0xd,iVar6 - __n);
                    __dest[sVar4] = '\0';
                    free(pcVar3);
                    pcVar3 = __dest;
                  }
                  if (param_4 == (code *)0x0) {
                    pcVar7 = (char *)kmod_module_get_name(puVar8);
                    setenv(__name,pcVar7,1);
                    uVar1 = system(pcVar3);
                    unsetenv(__name);
                    if (uVar1 == 0xffffffff) {
                      iVar6 = kmod_get_log_priority(*puVar8);
                      if (2 < iVar6) {
                        FUN_00012828(*puVar8,3,DAT_00016a3c + 0x16874,0x3d9,DAT_00016a44 + 0x16880,
                                     DAT_00016a40 + 0x1687a,DAT_00016a38 + 0x1686e,pcVar3,pcVar7);
                      }
                    }
                    else {
                      uVar1 = (uVar1 & 0xffff) >> 8;
                      pEVar10 = (Elf32_Ehdr *)0x0;
                      if (uVar1 == 0) goto LAB_000167a8;
                      iVar6 = kmod_get_log_priority(*puVar8);
                      if (2 < iVar6) {
                        FUN_00012828(*puVar8,3,DAT_00016a4c + 0x168b2,0x3df,DAT_00016a54 + 0x168c0,
                                     DAT_00016a50 + 0x168b8,DAT_00016a48 + 0x168ac,pcVar3,pcVar7,
                                     uVar1);
                      }
                    }
                    pEVar10 = (Elf32_Ehdr *)0xffffffea;
                  }
                  else {
                    pEVar10 = (Elf32_Ehdr *)(*param_4)(puVar8,pcVar3,param_5);
                  }
                }
LAB_000167a8:
                free(pcVar3);
              }
            }
            free(__dest_00);
            if (pEVar10 == (Elf32_Ehdr *)0xffffffef) goto LAB_00016734;
            if (-1 < (int)((uint)*(byte *)(puVar8 + 0xe) << 0x1d)) goto LAB_000167c4;
            if ((int)pEVar10 < 0) goto LAB_0001671a;
          }
          local_60 = *(Elf32_Ehdr **)local_60;
          if (local_60 == local_30) goto LAB_0001671a;
        } while( true );
      }
      iVar6 = 0x4a5;
      pcVar5 = (char *)(DAT_00016a2c + 0x166d8);
      pcVar2 = (char *)(DAT_00016a30 + 0x166da);
      goto LAB_000166d8;
    }
    if ((param_2 & 0x20) == 0) {
      pEVar10 = (Elf32_Ehdr *)0x0;
    }
    else {
      pEVar10 = (Elf32_Ehdr *)0xffffffef;
    }
  }
  return pEVar10;
code_r0x00016a14:
  iVar6 = 0x3f5;
  pcVar5 = (char *)(DAT_00016a6c + 0x16a24);
  pcVar2 = &UNK_00016a26 + DAT_00016a70;
LAB_000166d8:
  __assert(pcVar2,pcVar5,iVar6);
LAB_000166dc:
  iVar6 = FUN_000153e4(param_1);
  if (iVar6 != 0) {
    return pEVar10;
  }
  goto LAB_000166c4;
}



/* ===== kmod_module_get_size @ 00016a74 size=478 ===== */

int kmod_module_get_size(undefined4 *param_1)

{
  int __fd;
  int *piVar1;
  int iVar2;
  int iVar3;
  FILE *__stream;
  char *pcVar4;
  char *pcVar5;
  size_t sVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iStack_1034;
  char *pcStack_1030;
  undefined4 uStack_102c;
  char acStack_1028 [4100];
  
  iStack_1034 = -2;
  if (param_1 == (undefined4 *)0x0) {
    iStack_1034 = -2;
  }
  else {
    snprintf(acStack_1028,0x1000,(char *)(DAT_00016c54 + 0x16aa2),param_1[2]);
    __fd = open64(acStack_1028,0x80000);
    if (__fd < 0) {
      piVar1 = __errno_location();
      iStack_1034 = -*piVar1;
    }
    else {
      iVar2 = openat64(__fd,(char *)(DAT_00016c58 + 0x16ad2),0x80000);
      if (iVar2 < 0) {
        __stream = fopen64((char *)(DAT_00016c6c + 0x16b28),(char *)(DAT_00016c68 + 0x16b26));
        if (__stream == (FILE *)0x0) {
          piVar1 = __errno_location();
          iVar3 = *piVar1;
          iVar2 = kmod_get_log_priority(*param_1);
          if (2 < iVar2) {
            uVar9 = *param_1;
            pcVar4 = strerror(*piVar1);
            FUN_00012828(uVar9,3,DAT_00016c74 + 0x16b5e,0x72f,DAT_00016c78 + 0x16b60,
                         DAT_00016c70 + 0x16b58,pcVar4);
          }
          close(__fd);
          return -iVar3;
        }
        iVar2 = 0;
        pcVar4 = (char *)(DAT_00016c94 + 0x16c4e);
        while (pcVar5 = fgets(acStack_1028,0x1000,__stream), iVar3 = iStack_1034,
              pcVar5 != (char *)0x0) {
          iVar2 = iVar2 + 1;
          sVar6 = strlen(acStack_1028);
          pcVar5 = strtok_r(acStack_1028,pcVar4,&pcStack_1030);
          if ((pcVar5 != (char *)0x0) && (iVar3 = strcmp(pcVar5,(char *)param_1[2]), iVar3 == 0)) {
            pcVar4 = strtok_r((char *)0x0,pcVar4,&pcStack_1030);
            if (pcVar4 == (char *)0x0) {
              iVar7 = kmod_get_log_priority(*param_1);
              iVar3 = iStack_1034;
              if (iVar7 < 3) break;
              iVar7 = DAT_00016c88 + 0x16c22;
              iVar3 = DAT_00016c8c + 0x16c28;
              iVar8 = DAT_00016c90 + 0x16c2c;
              uVar9 = 0x740;
            }
            else {
              iVar3 = strtol(pcVar4,(char **)&uStack_102c,10);
              if (((uStack_102c != pcVar4) && (*uStack_102c == '\0')) ||
                 (iVar7 = kmod_get_log_priority(*param_1), iVar3 = iStack_1034, iVar7 < 3)) break;
              iVar7 = DAT_00016c7c + 0x16b9a;
              iVar3 = DAT_00016c80 + 0x16ba0;
              iVar8 = DAT_00016c84 + 0x16ba4;
              uVar9 = 0x747;
            }
            FUN_00012828(*param_1,3,iVar3,uVar9,iVar8,iVar7,iVar2);
            iVar3 = iStack_1034;
            break;
          }
          while ((acStack_1028[sVar6 - 1] != '\n' &&
                 (pcVar5 = fgets(acStack_1028,0x1000,__stream), pcVar5 != (char *)0x0))) {
            sVar6 = strlen(acStack_1028);
          }
        }
        iStack_1034 = iVar3;
        fclose(__stream);
      }
      else {
        iVar3 = FUN_000190b4(iVar2,&iStack_1034,10);
        if ((iVar3 < 0) && (iVar3 = kmod_get_log_priority(*param_1), 2 < iVar3)) {
          FUN_00012828(*param_1,3,DAT_00016c60 + 0x16afe,0x725,DAT_00016c64 + 0x16b02,
                       DAT_00016c5c + 0x16af8,acStack_1028);
        }
        close(iVar2);
      }
      close(__fd);
    }
  }
  return iStack_1034;
}



/* ===== kmod_module_get_refcnt @ 00016c98 size=152 ===== */

int kmod_module_get_refcnt(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iStack_101c;
  char acStack_1018 [4100];
  
  if (param_1 == (undefined4 *)0x0) {
    iStack_101c = -2;
  }
  else {
    snprintf(acStack_1018,0x1000,(char *)(DAT_00016d30 + 0x16cb4),param_1[2]);
    iVar1 = open64(acStack_1018,0x80000);
    if (iVar1 < 0) {
      piVar2 = __errno_location();
      iVar1 = *piVar2;
      strerror(iVar1);
      iStack_101c = -iVar1;
    }
    else {
      iVar3 = FUN_000190b4(iVar1,&iStack_101c,10);
      close(iVar1);
      if ((iVar3 < 0) && (iVar1 = kmod_get_log_priority(*param_1), iStack_101c = iVar3, 2 < iVar1))
      {
        uVar5 = *param_1;
        pcVar4 = strerror(-iVar3);
        FUN_00012828(uVar5,3,DAT_00016d38 + 0x16d12,0x777,DAT_00016d3c + 0x16d14,
                     DAT_00016d34 + 0x16d0c,acStack_1018,pcVar4);
      }
    }
  }
  return iStack_101c;
}



/* ===== kmod_module_get_holders @ 00016d40 size=316 ===== */

int kmod_module_get_holders(int *param_1)

{
  DIR *__dirp;
  int iVar1;
  int *piVar2;
  char *pcVar3;
  dirent64 *pdVar4;
  int iVar5;
  int iVar6;
  undefined4 local_1024;
  char acStack_1020 [4096];
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    snprintf(acStack_1020,0x1000,(char *)(DAT_00016e7c + 0x16d70),param_1[2]);
    __dirp = opendir(acStack_1020);
    if (__dirp == (DIR *)0x0) {
      iVar1 = kmod_get_log_priority(*param_1);
      if (2 < iVar1) {
        piVar2 = __errno_location();
        iVar1 = *param_1;
        pcVar3 = strerror(*piVar2);
        FUN_00012828(iVar1,3,DAT_00016e84 + 0x16da4,0x796,DAT_00016e88 + 0x16da6,
                     DAT_00016e80 + 0x16d9e,acStack_1020,pcVar3);
      }
    }
    else {
      pdVar4 = readdir64(__dirp);
      iVar1 = 0;
      while( true ) {
        if (pdVar4 == (dirent64 *)0x0) {
          closedir(__dirp);
          return iVar1;
        }
        if ((pdVar4->d_name[0] != '.') ||
           ((iVar5 = iVar1, pdVar4->d_name[1] != '\0' && (*(short *)(pdVar4->d_name + 1) != 0x2e))))
        break;
LAB_00016ddc:
        pdVar4 = readdir64(__dirp);
        iVar1 = iVar5;
      }
      iVar5 = kmod_module_new_from_name(*param_1,pdVar4->d_name,&local_1024);
      if (iVar5 < 0) {
        iVar6 = kmod_get_log_priority(*param_1);
        if (2 < iVar6) {
          iVar6 = *param_1;
          pcVar3 = strerror(-iVar5);
          FUN_00012828(iVar6,3,DAT_00016e90 + 0x16e1e,0x7a9,DAT_00016e94 + 0x16e20,
                       DAT_00016e8c + 0x16e18,pdVar4->d_name,pcVar3);
        }
      }
      else {
        iVar5 = FUN_000137be(iVar1,local_1024);
        if (iVar5 != 0) goto LAB_00016ddc;
        iVar5 = kmod_get_log_priority(*param_1);
        if (2 < iVar5) {
          FUN_00012828(*param_1,3,DAT_00016e9c + 0x16e66,0x7b1,DAT_00016ea0 + 0x16e68,
                       DAT_00016e98 + 0x16e60);
        }
        kmod_module_unref(local_1024);
      }
      closedir(__dirp);
      kmod_module_unref_list(iVar1);
    }
  }
  return 0;
}



/* ===== kmod_module_get_sections @ 00016ea4 size=442 ===== */

int kmod_module_get_sections(undefined4 *param_1)

{
  DIR *__dirp;
  int iVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  dirent64 *pdVar5;
  int iVar6;
  size_t sVar7;
  undefined4 *__ptr;
  int iVar8;
  undefined4 uVar9;
  undefined4 local_102c;
  char acStack_1028 [4100];
  
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  snprintf(acStack_1028,0x1000,(char *)(DAT_00017060 + 0x16ece),param_1[2]);
  __dirp = opendir(acStack_1028);
  if (__dirp == (DIR *)0x0) {
    iVar1 = kmod_get_log_priority(*param_1);
    if (iVar1 < 3) {
      return 0;
    }
    piVar2 = __errno_location();
    uVar9 = *param_1;
    pcVar3 = strerror(*piVar2);
    FUN_00012828(uVar9,3,DAT_00017068 + 0x16f02,0x7e7,DAT_0001706c + 0x16f04,DAT_00017064 + 0x16efc,
                 acStack_1028,pcVar3);
    return 0;
  }
  iVar4 = dirfd(__dirp);
  pdVar5 = readdir64(__dirp);
  iVar1 = 0;
  while( true ) {
    if (pdVar5 == (dirent64 *)0x0) {
      closedir(__dirp);
      return iVar1;
    }
    if ((pdVar5->d_name[0] != '.') ||
       ((iVar6 = iVar1, pdVar5->d_name[1] != '\0' && (*(short *)(pdVar5->d_name + 1) != 0x2e))))
    break;
LAB_00016f42:
    pdVar5 = readdir64(__dirp);
    iVar1 = iVar6;
  }
  pcVar3 = pdVar5->d_name;
  iVar6 = openat64(iVar4,pcVar3,0x80000);
  if (iVar6 < 0) {
    iVar4 = kmod_get_log_priority(*param_1);
    if (iVar4 < 3) goto LAB_00016f8a;
    iVar6 = DAT_00017070 + 0x16f72;
    iVar4 = DAT_00017074 + 0x16f78;
    iVar8 = DAT_00017078 + 0x16f7e;
    uVar9 = 0x7fd;
  }
  else {
    iVar8 = FUN_00019114(iVar6,&local_102c,0x10);
    close(iVar6);
    if (-1 < iVar8) {
      sVar7 = strlen(pcVar3);
      __ptr = malloc(sVar7 + 5);
      if (__ptr == (undefined4 *)0x0) {
        iVar4 = kmod_get_log_priority(*param_1);
        if (2 < iVar4) {
          FUN_00012828(*param_1,3,DAT_0001708c + 0x17006,0x80d,DAT_00017090 + 0x17008,
                       DAT_00017088 + 0x17000);
        }
        goto LAB_00016f8a;
      }
      *__ptr = local_102c;
      memcpy(__ptr + 1,pcVar3,sVar7 + 1);
      iVar6 = FUN_000137be(iVar1,__ptr);
      if (iVar6 == 0) {
        iVar4 = kmod_get_log_priority(*param_1);
        if (2 < iVar4) {
          FUN_00012828(*param_1,3,DAT_00017098 + 0x1704a,0x818,DAT_0001709c + 0x1704c,
                       DAT_00017094 + 0x17044);
        }
        free(__ptr);
        goto LAB_00016f8a;
      }
      goto LAB_00016f42;
    }
    iVar4 = kmod_get_log_priority(*param_1);
    if (iVar4 < 3) goto LAB_00016f8a;
    iVar6 = DAT_0001707c + 0x16fc4;
    iVar4 = DAT_00017080 + 0x16fca;
    iVar8 = DAT_00017084 + 0x16fd0;
    uVar9 = 0x805;
  }
  FUN_00012828(*param_1,3,iVar4,uVar9,iVar8,iVar6,acStack_1028,pcVar3);
LAB_00016f8a:
  closedir(__dirp);
  kmod_module_unref_list(iVar1);
  return 0;
}



/* ===== kmod_module_section_get_name @ 000170a0 size=8 ===== */

int kmod_module_section_get_name(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 8) + 4;
  }
  return iVar1;
}



/* ===== kmod_module_section_get_address @ 000170a8 size=14 ===== */

undefined4 kmod_module_section_get_address(int param_1)

{
  if (param_1 != 0) {
    return **(undefined4 **)(param_1 + 8);
  }
  return 0xffffffff;
}



/* ===== kmod_module_section_free_list @ 000170b6 size=22 ===== */

void kmod_module_section_free_list(int param_1)

{
  for (; param_1 != 0; param_1 = FUN_00013844(param_1)) {
    free(*(void **)(param_1 + 8));
  }
  return;
}



/* ===== kmod_module_info_get_key @ 000170cc size=8 ===== */

undefined4 kmod_module_info_get_key(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = **(undefined4 **)(param_1 + 8);
  }
  return uVar1;
}



/* ===== kmod_module_info_get_value @ 000170d4 size=8 ===== */

int kmod_module_info_get_value(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 8) + 4;
  }
  return iVar1;
}



/* ===== kmod_module_info_free_list @ 000170dc size=4 ===== */

void kmod_module_info_free_list(int param_1)

{
  for (; param_1 != 0; param_1 = FUN_00013844(param_1)) {
    free(*(void **)(param_1 + 8));
  }
  return;
}



/* ===== kmod_module_get_info @ 000170e0 size=396 ===== */

int kmod_module_get_info(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  size_t sVar3;
  int *piVar4;
  char *pcVar5;
  size_t sVar6;
  int iVar7;
  undefined4 uVar8;
  char *__s;
  int iVar9;
  char *__s_00;
  void *local_58;
  undefined4 local_54;
  char *pcStack_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  char *pcStack_40;
  char *local_3c;
  char *pcStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  char *pcStack_2c;
  
  pcStack_50 = *(char **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  local_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_34 = 0;
  local_54 = 0;
  local_44 = 0;
  local_3c = (char *)0x0;
  uStack_30 = 0;
  if ((param_1 == (undefined4 *)0x0) || (param_2 == (int *)0x0)) {
    return -2;
  }
  pcStack_40 = pcStack_50;
  pcStack_38 = pcStack_50;
  pcStack_2c = pcStack_50;
  if (*param_2 != 0) {
    __assert((char *)(DAT_00017274 + 0x17126),(char *)(DAT_00017270 + 0x17124),0x8f4);
  }
  iVar1 = FUN_00015654();
  if (iVar1 == 0) {
    iVar1 = FUN_00015d8c(param_1);
    if (iVar1 == 0) {
      piVar4 = __errno_location();
      return -*piVar4;
    }
    iVar1 = FUN_00017b26(iVar1,DAT_0001728c + 0x171fc,&local_58);
  }
  else {
    uVar8 = *param_1;
    uVar2 = kmod_module_get_name(param_1);
    iVar1 = FUN_000136a4(uVar8,uVar2,&local_58);
  }
  if (iVar1 < 0) {
    return iVar1;
  }
  for (iVar9 = 0; iVar9 != iVar1; iVar9 = iVar9 + 1) {
    __s = *(char **)((int)local_58 + iVar9 * 4);
    pcVar5 = strchr(__s,0x3d);
    if (pcVar5 == (char *)0x0) {
      sVar6 = strlen(__s);
      sVar3 = 0;
      __s_00 = __s;
    }
    else {
      __s_00 = pcVar5 + 1;
      sVar6 = (int)pcVar5 - (int)__s;
      sVar3 = strlen(__s_00);
    }
    iVar7 = FUN_00015380(param_2,__s,sVar6,__s_00,sVar3);
    if (iVar7 == 0) goto LAB_0001722c;
  }
  if ((param_1[9] != 0) &&
     (iVar9 = FUN_00018964(param_1[9],&local_54), pcVar5 = local_3c, iVar9 != 0)) {
    sVar3 = strlen(local_3c);
    iVar9 = FUN_00015380(param_2,DAT_00017278 + 0x17174,6,pcVar5,sVar3);
    if ((iVar9 != 0) &&
       ((iVar9 = FUN_00015380(param_2,DAT_0001727c + 0x1718c,6,local_54,pcStack_50), iVar9 != 0 &&
        (iVar9 = FUN_00015410(param_2,DAT_00017280 + 0x171a2,7,local_4c,local_48),
        pcVar5 = pcStack_40, iVar9 != 0)))) {
      sVar3 = strlen(pcStack_40);
      iVar9 = FUN_00015380(param_2,DAT_00017284 + 0x171bc,0xc,pcVar5,sVar3);
      if ((iVar9 != 0) &&
         (iVar9 = FUN_00015410(param_2,DAT_00017288 + 0x171d2,9,pcStack_38,local_34), iVar9 != 0)) {
        iVar1 = iVar1 + 5;
        goto LAB_00017230;
      }
    }
LAB_0001722c:
    iVar1 = -0xc;
  }
LAB_00017230:
  FUN_00018a6c(&local_54);
  if (iVar1 < 0) {
    kmod_module_info_free_list(*param_2);
    *param_2 = 0;
  }
  free(local_58);
  return iVar1;
}



/* ===== kmod_module_version_get_symbol @ 00017290 size=10 ===== */

int kmod_module_version_get_symbol(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((param_1 != 0) && (iVar1 = *(int *)(param_1 + 8), iVar1 != 0)) {
    iVar1 = iVar1 + 8;
  }
  return iVar1;
}



/* ===== kmod_module_version_get_crc @ 0001729a size=22 ===== */

undefined8 kmod_module_version_get_crc(int param_1)

{
  undefined8 uVar1;
  
  if ((param_1 == 0) || (*(undefined8 **)(param_1 + 8) == (undefined8 *)0x0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = **(undefined8 **)(param_1 + 8);
  }
  return uVar1;
}



/* ===== kmod_module_versions_free_list @ 000172b0 size=4 ===== */

void kmod_module_versions_free_list(int param_1)

{
  for (; param_1 != 0; param_1 = FUN_00013844(param_1)) {
    free(*(void **)(param_1 + 8));
  }
  return;
}



/* ===== kmod_module_get_versions @ 000172b4 size=204 ===== */

int kmod_module_get_versions(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  size_t sVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  char *__s;
  undefined8 uVar7;
  void *local_2c;
  
  if ((param_1 == 0) || (param_2 == (int *)0x0)) {
    iVar1 = -2;
  }
  else {
    iVar5 = *param_2;
    if (iVar5 != 0) {
      __assert((char *)(DAT_00017388 + 0x172de),(char *)(DAT_00017384 + 0x172dc),0x9bc);
    }
    iVar1 = FUN_00015d8c();
    if (iVar1 == 0) {
      piVar2 = __errno_location();
      iVar1 = -*piVar2;
    }
    else {
      iVar1 = FUN_00017c2c(iVar1,&local_2c);
      if (-1 < iVar1) {
        for (; iVar5 != iVar1; iVar5 = iVar5 + 1) {
          puVar4 = (undefined8 *)((int)local_2c + iVar5 * 0x10);
          __s = *(char **)((int)puVar4 + 0xc);
          uVar7 = *puVar4;
          sVar3 = strlen(__s);
          puVar4 = malloc(sVar3 + 9);
          iVar6 = *param_2;
          if (puVar4 == (undefined8 *)0x0) {
            piVar2 = __errno_location();
            iVar1 = *piVar2;
            kmod_module_versions_free_list(iVar6);
            *param_2 = 0;
            iVar1 = -iVar1;
            break;
          }
          *puVar4 = uVar7;
          memcpy(puVar4 + 1,__s,sVar3 + 1);
          iVar6 = FUN_000137be(iVar6,puVar4);
          if (iVar6 == 0) {
            iVar1 = -0xc;
            free(puVar4);
            kmod_module_versions_free_list(*param_2);
            *param_2 = 0;
            break;
          }
          *param_2 = iVar6;
        }
        free(local_2c);
      }
    }
  }
  return iVar1;
}



/* ===== kmod_module_symbol_get_symbol @ 0001738c size=10 ===== */

int kmod_module_symbol_get_symbol(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((param_1 != 0) && (iVar1 = *(int *)(param_1 + 8), iVar1 != 0)) {
    iVar1 = iVar1 + 8;
  }
  return iVar1;
}



/* ===== kmod_module_symbol_get_crc @ 00017396 size=22 ===== */

undefined8 kmod_module_symbol_get_crc(int param_1)

{
  undefined8 uVar1;
  
  if ((param_1 == 0) || (*(undefined8 **)(param_1 + 8) == (undefined8 *)0x0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = **(undefined8 **)(param_1 + 8);
  }
  return uVar1;
}



/* ===== kmod_module_symbols_free_list @ 000173ac size=4 ===== */

void kmod_module_symbols_free_list(int param_1)

{
  for (; param_1 != 0; param_1 = FUN_00013844(param_1)) {
    free(*(void **)(param_1 + 8));
  }
  return;
}



/* ===== kmod_module_get_symbols @ 000173b0 size=204 ===== */

int kmod_module_get_symbols(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  size_t sVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  char *__s;
  undefined8 uVar7;
  void *local_2c;
  
  if ((param_1 == 0) || (param_2 == (int *)0x0)) {
    iVar1 = -2;
  }
  else {
    iVar5 = *param_2;
    if (iVar5 != 0) {
      __assert((char *)(DAT_00017484 + 0x173da),(char *)(DAT_00017480 + 0x173d8),0xa48);
    }
    iVar1 = FUN_00015d8c();
    if (iVar1 == 0) {
      piVar2 = __errno_location();
      iVar1 = -*piVar2;
    }
    else {
      iVar1 = FUN_00017fe8(iVar1,&local_2c);
      if (-1 < iVar1) {
        for (; iVar5 != iVar1; iVar5 = iVar5 + 1) {
          puVar4 = (undefined8 *)((int)local_2c + iVar5 * 0x10);
          __s = *(char **)((int)puVar4 + 0xc);
          uVar7 = *puVar4;
          sVar3 = strlen(__s);
          puVar4 = malloc(sVar3 + 9);
          iVar6 = *param_2;
          if (puVar4 == (undefined8 *)0x0) {
            piVar2 = __errno_location();
            iVar1 = *piVar2;
            kmod_module_symbols_free_list(iVar6);
            *param_2 = 0;
            iVar1 = -iVar1;
            break;
          }
          *puVar4 = uVar7;
          memcpy(puVar4 + 1,__s,sVar3 + 1);
          iVar6 = FUN_000137be(iVar6,puVar4);
          if (iVar6 == 0) {
            iVar1 = -0xc;
            free(puVar4);
            kmod_module_symbols_free_list(*param_2);
            *param_2 = 0;
            break;
          }
          *param_2 = iVar6;
        }
        free(local_2c);
      }
    }
  }
  return iVar1;
}



/* ===== kmod_module_dependency_symbol_get_symbol @ 00017488 size=10 ===== */

int kmod_module_dependency_symbol_get_symbol(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((param_1 != 0) && (iVar1 = *(int *)(param_1 + 8), iVar1 != 0)) {
    iVar1 = iVar1 + 9;
  }
  return iVar1;
}



/* ===== kmod_module_dependency_symbol_get_crc @ 00017492 size=22 ===== */

undefined8 kmod_module_dependency_symbol_get_crc(int param_1)

{
  undefined8 uVar1;
  
  if ((param_1 == 0) || (*(undefined8 **)(param_1 + 8) == (undefined8 *)0x0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = **(undefined8 **)(param_1 + 8);
  }
  return uVar1;
}



/* ===== kmod_module_dependency_symbol_get_bind @ 000174a8 size=10 ===== */

undefined1 kmod_module_dependency_symbol_get_bind(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if ((param_1 != 0) && (uVar1 = 0, *(int *)(param_1 + 8) != 0)) {
    uVar1 = *(undefined1 *)(*(int *)(param_1 + 8) + 8);
  }
  return uVar1;
}



/* ===== kmod_module_dependency_symbols_free_list @ 000174b2 size=4 ===== */

void kmod_module_dependency_symbols_free_list(int param_1)

{
  for (; param_1 != 0; param_1 = FUN_00013844(param_1)) {
    free(*(void **)(param_1 + 8));
  }
  return;
}



/* ===== kmod_module_get_dependency_symbols @ 000174b8 size=214 ===== */

int kmod_module_get_dependency_symbols(int param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  size_t sVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  char *__s;
  undefined8 uVar8;
  void *local_34 [2];
  
  if ((param_1 == 0) || (param_2 == (int *)0x0)) {
    iVar2 = -2;
  }
  else {
    iVar6 = *param_2;
    if (iVar6 != 0) {
      __assert((char *)(DAT_00017598 + 0x174e2),(char *)(DAT_00017594 + 0x174e0),0xad7);
    }
    iVar2 = FUN_00015d8c();
    if (iVar2 == 0) {
      piVar3 = __errno_location();
      iVar2 = -*piVar3;
    }
    else {
      iVar2 = FUN_00018434(iVar2,local_34);
      if (-1 < iVar2) {
        for (; iVar6 != iVar2; iVar6 = iVar6 + 1) {
          puVar5 = (undefined8 *)((int)local_34[0] + iVar6 * 0x10);
          __s = *(char **)((int)puVar5 + 0xc);
          uVar8 = *puVar5;
          uVar1 = *(undefined1 *)(puVar5 + 1);
          sVar4 = strlen(__s);
          puVar5 = malloc(sVar4 + 0x11);
          iVar7 = *param_2;
          if (puVar5 == (undefined8 *)0x0) {
            piVar3 = __errno_location();
            iVar2 = *piVar3;
            kmod_module_dependency_symbols_free_list(iVar7);
            *param_2 = 0;
            iVar2 = -iVar2;
            break;
          }
          *puVar5 = uVar8;
          *(undefined1 *)(puVar5 + 1) = uVar1;
          memcpy((void *)((int)puVar5 + 9),__s,sVar4 + 1);
          iVar7 = FUN_000137be(iVar7,puVar5);
          if (iVar7 == 0) {
            iVar2 = -0xc;
            free(puVar5);
            kmod_module_dependency_symbols_free_list(*param_2);
            *param_2 = 0;
            break;
          }
          *param_2 = iVar7;
        }
        free(local_34[0]);
      }
    }
  }
  return iVar2;
}



/* ===== FUN_000175a4 @ 000175a4 size=74 ===== */

int FUN_000175a4(int *param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  stat64 sStack_70;
  
  iVar1 = fstat64(*param_1,&sStack_70);
  if (-1 < iVar1) {
    param_1[3] = sStack_70.st_size._4_4_;
    param_1[2] = (size_t)sStack_70.st_size;
    pvVar3 = mmap64((void *)0x0,(size_t)sStack_70.st_size,1,2,*param_1,0);
    param_1[4] = (int)pvVar3;
    if (pvVar3 != (void *)0xffffffff) {
      *(undefined1 *)(param_1 + 1) = 1;
      return 0;
    }
  }
  piVar2 = __errno_location();
  return -*piVar2;
}



/* ===== FUN_000175ee @ 000175ee size=22 ===== */

void FUN_000175ee(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    uVar1 = FUN_000178bc(*(undefined4 *)(param_1 + 0x10),param_2,*(undefined4 *)(param_1 + 8),
                         *(undefined4 *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0x1c) = uVar1;
  }
  return;
}



/* ===== FUN_00017604 @ 00017604 size=104 ===== */

int * FUN_00017604(int param_1,char *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar1 = calloc(1,0x20);
  piVar4 = piVar1;
  if (piVar1 != (int *)0x0) {
    iVar2 = open64(param_2,0x80000);
    *piVar1 = iVar2;
    if (iVar2 < 0) {
      piVar3 = __errno_location();
      iVar2 = -*piVar3;
    }
    else {
      *(undefined1 *)(piVar1 + 1) = 0;
      if (piVar1[5] == 0) {
        piVar1[5] = DAT_0001766c + 0x1765e;
      }
      iVar2 = (**(code **)piVar1[5])(piVar1);
      piVar1[6] = param_1;
    }
    if (iVar2 < 0) {
      if (-1 < *piVar1) {
        close(*piVar1);
      }
      piVar4 = (int *)0x0;
      free(piVar1);
      piVar1 = __errno_location();
      *piVar1 = -iVar2;
    }
  }
  return piVar4;
}



/* ===== FUN_00017670 @ 00017670 size=4 ===== */

undefined4 FUN_00017670(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* ===== FUN_00017674 @ 00017674 size=6 ===== */

undefined8 FUN_00017674(int param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* ===== FUN_0001767a @ 0001767a size=4 ===== */

undefined1 FUN_0001767a(int param_1)

{
  return *(undefined1 *)(param_1 + 4);
}



/* ===== FUN_0001767e @ 0001767e size=4 ===== */

undefined4 FUN_0001767e(undefined4 *param_1)

{
  return *param_1;
}



/* ===== FUN_00017682 @ 00017682 size=40 ===== */

void FUN_00017682(int *param_1)

{
  if (param_1[7] != 0) {
    FUN_00017a74();
  }
  (**(code **)(param_1[5] + 4))(param_1);
  if (-1 < *param_1) {
    close(*param_1);
  }
  (*(code *)PTR_free_0002b180)(param_1);
  return;
}



/* ===== FUN_000176ac @ 000176ac size=38 ===== */

int FUN_000176ac(int *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int *extraout_r0;
  uint extraout_r2;
  bool bVar1;
  
  bVar1 = (uint)param_1[3] <= param_4;
  if (param_4 == param_1[3]) {
    bVar1 = (uint)param_1[2] <= param_3;
  }
  if (bVar1) {
    __assert((char *)(DAT_000176dc + 0x176ca),(char *)(DAT_000176d8 + 0x176c8),0xca);
    param_1 = extraout_r0;
    param_3 = extraout_r2;
  }
  return *param_1 + param_3;
}



/* ===== FUN_000176e0 @ 000176e0 size=152 ===== */

undefined8 FUN_000176e0(int *param_1,undefined4 param_2,uint param_3,int param_4,ushort param_5)

{
  int *extraout_r0;
  byte *pbVar1;
  uint uVar2;
  uint extraout_r3;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  uVar2 = (uint)param_5;
  uVar5 = param_4 + (uint)CARRY4(param_3,uVar2);
  bVar7 = uVar5 <= (uint)param_1[3];
  if (param_1[3] == uVar5) {
    bVar7 = param_3 + uVar2 <= (uint)param_1[2];
  }
  if (!bVar7) {
    __assert((char *)(DAT_00017780 + 0x17710),(char *)(DAT_0001777c + 0x1770e),0x89);
    param_1 = extraout_r0;
    uVar2 = extraout_r3;
  }
  pbVar1 = (byte *)(*param_1 + param_3);
  if (param_1[4] << 0x1b < 0) {
    uVar5 = 0;
    uVar6 = 0;
    for (uVar4 = 0; uVar4 < uVar2; uVar4 = uVar4 + 1) {
      uVar6 = uVar6 << 8 | uVar5 >> 0x18;
      uVar5 = uVar5 << 8 | (uint)pbVar1[uVar4];
    }
  }
  else {
    pbVar3 = pbVar1 + uVar2;
    uVar5 = 0;
    uVar6 = 0;
    while (pbVar3 != pbVar1) {
      pbVar3 = pbVar3 + -1;
      uVar6 = uVar6 << 8 | uVar5 >> 0x18;
      uVar5 = uVar5 << 8 | (uint)*pbVar3;
    }
  }
  return CONCAT44(uVar6,uVar5);
}



/* ===== FUN_00017784 @ 00017784 size=70 ===== */

void FUN_00017784(int param_1,uint param_2)

{
  char *__assertion;
  int extraout_r0;
  char *__file;
  uint extraout_r1;
  int __line;
  
  if (param_2 != 0) goto LAB_0001779c;
  __line = 0xd5;
  __file = (char *)(DAT_000177d0 + 0x17798);
  __assertion = (char *)(DAT_000177d4 + 0x1779a);
  while( true ) {
    __assert(__assertion,__file,__line);
    param_1 = extraout_r0;
    param_2 = extraout_r1;
LAB_0001779c:
    if (param_2 < *(ushort *)(param_1 + 0x20)) break;
    __line = 0xd6;
    __file = (char *)(DAT_000177dc + 0x177b0);
    __assertion = (char *)(DAT_000177e0 + 0x177b2);
  }
  FUN_000176ac();
  return;
}



/* ===== FUN_000177e4 @ 000177e4 size=214 ===== */

undefined4
FUN_000177e4(int *param_1,undefined4 param_2,uint *param_3,uint *param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  undefined8 uVar9;
  
  uVar9 = FUN_00017784();
  uVar1 = (undefined4)((ulonglong)uVar9 >> 0x20);
  uVar5 = (int)uVar9 - *param_1;
  iVar6 = (int)uVar5 >> 0x1f;
  if ((int)uVar9 == 0) {
    param_3[0] = 0;
    param_3[1] = 0;
    param_4[0] = 0;
    param_4[1] = 0;
    *param_5 = 0;
  }
  else {
    if (param_1[4] << 0x1e < 0) {
      uVar9 = FUN_000176e0(param_1,uVar1,uVar5 + 0x14,iVar6 + (uint)(0xffffffeb < uVar5),4,param_2);
      *(undefined8 *)param_4 = uVar9;
      uVar9 = FUN_000176e0(param_1,(int)((ulonglong)uVar9 >> 0x20),uVar5 + 0x10,
                           iVar6 + (uint)(0xffffffef < uVar5),4);
      uVar1 = (undefined4)((ulonglong)uVar9 >> 0x20);
      *(undefined8 *)param_3 = uVar9;
    }
    else {
      uVar9 = FUN_000176e0(param_1,uVar1,uVar5 + 0x20,iVar6 + (uint)(0xffffffdf < uVar5),8,param_2);
      *(undefined8 *)param_4 = uVar9;
      uVar9 = FUN_000176e0(param_1,(int)((ulonglong)uVar9 >> 0x20),uVar5 + 0x18,
                           iVar6 + (uint)(0xffffffe7 < uVar5),8);
      uVar1 = (undefined4)((ulonglong)uVar9 >> 0x20);
      *(undefined8 *)param_3 = uVar9;
    }
    uVar1 = FUN_000176e0(param_1,uVar1,uVar5,iVar6,4,param_2);
    uVar3 = *param_4;
    uVar4 = param_4[1];
    *param_5 = uVar1;
    uVar5 = *param_3;
    uVar2 = param_3[1];
    uVar7 = uVar2 + uVar4 + CARRY4(uVar5,uVar3);
    if (!CARRY4(uVar2,uVar4) && !CARRY4(uVar2 + uVar4,(uint)CARRY4(uVar5,uVar3))) {
      bVar8 = uVar7 <= (uint)param_1[3];
      if (param_1[3] == uVar7) {
        bVar8 = uVar5 + uVar3 <= (uint)param_1[2];
      }
      if (bVar8) {
        return 0;
      }
      return 0xffffffea;
    }
  }
  return 0xffffffea;
}



/* ===== FUN_000178bc @ 000178bc size=434 ===== */

undefined4 * FUN_000178bc(void *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 *__ptr;
  uint uVar3;
  int *piVar4;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 extraout_r1_03;
  undefined4 extraout_r1_04;
  undefined4 extraout_r1_05;
  undefined4 extraout_r1_06;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined8 uVar10;
  void *pvVar11;
  
  if ((param_4 == 0 && param_3 < 0x11) ||
     (pvVar11 = param_1, uVar3 = param_3, iVar2 = memcmp(param_1,(void *)(DAT_00017a70 + 0x178d6),4)
     , iVar2 != 0)) {
    iVar2 = -8;
    goto LAB_000179b0;
  }
  if (*(char *)((int)param_1 + 4) == '\x01') {
    if (param_4 != 0 || 0x34 < param_3) {
      uVar6 = 2;
LAB_000178f8:
      if (*(char *)((int)param_1 + 5) == '\x01') {
        uVar6 = uVar6 | 8;
LAB_0001791a:
        __ptr = malloc(0x50);
        if (__ptr == (undefined4 *)0x0) {
          return (undefined4 *)0x0;
        }
        iVar2 = uVar6 << 0x1e;
        *__ptr = param_1;
        __ptr[1] = 0;
        __ptr[2] = param_3;
        __ptr[3] = param_4;
        __ptr[4] = uVar6;
        if (iVar2 < 0) {
          FUN_000176ac(__ptr,iVar2,0,0,pvVar11,param_2,uVar3);
          uVar10 = FUN_000176e0(__ptr,extraout_r1,0x20,0,4);
          *(undefined8 *)(__ptr + 6) = uVar10;
          uVar1 = FUN_000176e0(__ptr,(int)((ulonglong)uVar10 >> 0x20),0x30,0,2);
          *(undefined2 *)(__ptr + 8) = uVar1;
          uVar1 = FUN_000176e0(__ptr,extraout_r1_00,0x2e,0,2);
          *(undefined2 *)((int)__ptr + 0x22) = uVar1;
          uVar1 = FUN_000176e0(__ptr,extraout_r1_01,0x32,0,2);
          *(undefined2 *)(__ptr + 10) = uVar1;
          uVar1 = FUN_000176e0(__ptr,extraout_r1_02,0x12,0,2);
          *(undefined2 *)(__ptr + 0x12) = uVar1;
          uVar3 = 0x28;
        }
        else {
          FUN_000176ac(__ptr,iVar2,0,0,pvVar11,param_2,uVar3);
          uVar10 = FUN_000176e0(__ptr,extraout_r1_03,0x28,0,8);
          *(undefined8 *)(__ptr + 6) = uVar10;
          uVar1 = FUN_000176e0(__ptr,(int)((ulonglong)uVar10 >> 0x20),0x3c,0,2);
          *(undefined2 *)(__ptr + 8) = uVar1;
          uVar1 = FUN_000176e0(__ptr,extraout_r1_04,0x3a,0,2);
          *(undefined2 *)((int)__ptr + 0x22) = uVar1;
          uVar1 = FUN_000176e0(__ptr,extraout_r1_05,0x3e,0,2);
          *(undefined2 *)(__ptr + 10) = uVar1;
          uVar1 = FUN_000176e0(__ptr,extraout_r1_06,0x12,0,2);
          *(undefined2 *)(__ptr + 0x12) = uVar1;
          uVar3 = 0x40;
        }
        if (*(ushort *)((int)__ptr + 0x22) == uVar3) {
          uVar3 = *(ushort *)(__ptr + 8) * uVar3;
          uVar5 = __ptr[6];
          uVar6 = __ptr[7] + (uint)CARRY4(uVar3,uVar5);
          if (!CARRY4(__ptr[7],(uint)CARRY4(uVar3,uVar5))) {
            bVar9 = uVar6 <= param_4;
            if (param_4 == uVar6) {
              bVar9 = uVar3 + uVar5 <= param_3;
            }
            if (bVar9) {
              uVar10 = FUN_000177e4(__ptr,*(undefined2 *)(__ptr + 10),__ptr + 0xe,__ptr + 0xc,
                                    __ptr + 0x10);
              if (-1 < (int)uVar10) {
                iVar7 = __ptr[0xc];
                iVar8 = __ptr[0xd];
                iVar2 = FUN_000176ac(__ptr,(int)((ulonglong)uVar10 >> 0x20),__ptr[0xe],__ptr[0xf]);
                if ((iVar7 != 0 || iVar8 != 0) && (*(char *)(iVar2 + iVar7 + -1) == '\0')) {
                  return __ptr;
                }
              }
            }
          }
        }
        free(__ptr);
        piVar4 = __errno_location();
        *piVar4 = 0x16;
        return (undefined4 *)0x0;
      }
      if (*(char *)((int)param_1 + 5) == '\x02') {
        uVar6 = uVar6 | 0x10;
        goto LAB_0001791a;
      }
    }
  }
  else if ((*(char *)((int)param_1 + 4) == '\x02') && (param_4 != 0 || 0x40 < param_3)) {
    uVar6 = 4;
    goto LAB_000178f8;
  }
  iVar2 = -0x16;
LAB_000179b0:
  piVar4 = __errno_location();
  *piVar4 = -iVar2;
  return (undefined4 *)0x0;
}



/* ===== FUN_00017a74 @ 00017a74 size=20 ===== */

void FUN_00017a74(int param_1)

{
  free(*(void **)(param_1 + 4));
  (*(code *)PTR_free_0002b180)(param_1);
  return;
}



/* ===== FUN_00017a88 @ 00017a88 size=4 ===== */

undefined4 FUN_00017a88(undefined4 *param_1)

{
  return *param_1;
}



/* ===== FUN_00017a8c @ 00017a8c size=154 ===== */

undefined4 FUN_00017a8c(int param_1,char *param_2,undefined4 *param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  ushort uVar5;
  int iVar6;
  bool bVar7;
  uint local_3c;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined4 uStack_2c;
  
  uVar4 = *(uint *)(param_1 + 0x30);
  iVar6 = *(int *)(param_1 + 0x34);
  uVar5 = 1;
  iVar1 = FUN_000176ac(param_1,param_2,*(undefined4 *)(param_1 + 0x38),
                       *(undefined4 *)(param_1 + 0x3c));
  *param_3 = 0;
  *param_4 = 0;
  do {
    if (*(ushort *)(param_1 + 0x20) <= uVar5) {
      return 0xfffffffe;
    }
    iVar2 = FUN_000177e4(param_1,uVar5,local_38,&local_30,&local_3c);
    if (-1 < iVar2) {
      bVar7 = iVar6 == 0;
      if (iVar6 == 0) {
        bVar7 = uVar4 <= local_3c;
      }
      if ((!bVar7) && (iVar2 = strcmp(param_2,(char *)(local_3c + iVar1)), iVar2 == 0)) {
        uVar3 = FUN_000176ac(param_1);
        *param_3 = uVar3;
        *(undefined4 *)param_4 = local_30;
        *(undefined4 *)((int)param_4 + 4) = uStack_2c;
        return 0;
      }
    }
    uVar5 = uVar5 + 1;
  } while( true );
}



/* ===== FUN_00017b26 @ 00017b26 size=260 ===== */

uint FUN_00017b26(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  char *__src;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *__dest;
  bool bVar8;
  char *local_34;
  uint local_30;
  int iStack_2c;
  
  *param_3 = 0;
  uVar2 = FUN_00017a8c(param_1,param_2,&local_34,&local_30);
  if (-1 < (int)uVar2) {
    if ((local_34 != (char *)0x0) && (__src = local_34, local_30 != 0 || iStack_2c != 0)) {
      while (iVar1 = iStack_2c, uVar2 = local_30, *__src == '\0') {
        if (iStack_2c == 0 && local_30 < 2) goto LAB_00017b42;
        bVar8 = local_30 != 0;
        local_30 = local_30 - 1;
        iStack_2c = iStack_2c + -1 + (uint)bVar8;
        __src = __src + 1;
      }
      if (iStack_2c != 0 || 1 < local_30) {
        uVar7 = 0;
        uVar5 = 0;
        do {
          if (__src[uVar5] == '\0') {
            do {
              bVar8 = iStack_2c == 0;
              if (iStack_2c == 0) {
                bVar8 = local_30 <= uVar5;
              }
            } while ((!bVar8) && (uVar5 = uVar5 + 1, __src[uVar5] == '\0'));
            uVar7 = uVar7 + 1;
          }
          else {
            uVar5 = uVar5 + 1;
          }
          bVar8 = iStack_2c == 0;
          if (iStack_2c == 0) {
            bVar8 = local_30 <= uVar5;
          }
        } while (!bVar8);
        if (__src[uVar5 - 1] != '\0') {
          uVar7 = uVar7 + 1;
        }
        puVar3 = malloc(local_30 + 1 + (uVar7 + 1) * 4);
        *param_3 = puVar3;
        if (puVar3 == (undefined4 *)0x0) {
          piVar4 = __errno_location();
          return -*piVar4;
        }
        __dest = puVar3 + uVar7 + 1;
        memcpy(__dest,__src,uVar2);
        uVar5 = 1;
        uVar6 = 0;
        *(undefined1 *)((int)__dest + uVar2) = 0;
        __dest[-1] = 0;
        *puVar3 = __dest;
        do {
          while( true ) {
            if (uVar7 <= uVar5) {
              return uVar7;
            }
            bVar8 = iVar1 == 0;
            if (iVar1 == 0) {
              bVar8 = uVar2 <= uVar6;
            }
            if (bVar8) {
              return uVar7;
            }
            if (*(char *)((int)__dest + uVar6) == '\0') break;
            uVar6 = uVar6 + 1;
          }
          for (; __src[uVar6] == '\0'; uVar6 = uVar6 + 1) {
            bVar8 = iVar1 == 0;
            if (iVar1 == 0) {
              bVar8 = uVar2 <= uVar6;
            }
            if (bVar8) break;
          }
          puVar3[uVar5] = (int)__dest + uVar6;
          uVar5 = uVar5 + 1;
        } while( true );
      }
    }
LAB_00017b42:
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== FUN_00017c2c @ 00017c2c size=294 ===== */

uint FUN_00017c2c(int *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  int *piVar3;
  char *pcVar4;
  size_t sVar5;
  undefined4 uVar6;
  undefined4 extraout_r1;
  uint uVar7;
  int iVar8;
  undefined8 *__dest;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  int local_3c;
  uint local_38;
  int iStack_34;
  
  iVar8 = 0;
  uVar7 = param_1[4];
  *param_2 = 0;
  if ((uVar7 & 2) == 0) {
    iVar11 = 8;
  }
  else {
    iVar11 = 4;
  }
  uVar7 = FUN_00017a8c(param_1,DAT_00017d54 + 0x17c4e,&local_3c,&local_38);
  if (-1 < (int)uVar7) {
    if (local_3c == 0) {
      uVar7 = 0;
    }
    else if (local_38 == 0 && iStack_34 == 0) {
      uVar7 = 0;
    }
    else if ((local_38 & 0x3f) == 0) {
      iVar9 = 0;
      uVar7 = local_38 >> 6 | iStack_34 << 0x1a;
      iVar10 = local_3c - *param_1;
      iVar12 = iVar11 + iVar10;
      uVar6 = 0;
      while (iVar8 < (int)uVar7) {
        iVar8 = iVar8 + 1;
        pcVar4 = (char *)FUN_000176ac(param_1,uVar6,iVar12,0);
        iVar12 = iVar12 + 0x40;
        if (*pcVar4 == '.') {
          pcVar4 = pcVar4 + 1;
        }
        sVar5 = strlen(pcVar4);
        iVar9 = iVar9 + sVar5 + 1;
        uVar6 = extraout_r1;
      }
      puVar2 = malloc(uVar7 * 0x10 + iVar9);
      *param_2 = puVar2;
      if (puVar2 == (undefined8 *)0x0) {
        piVar3 = __errno_location();
        uVar7 = -*piVar3;
      }
      else {
        iVar8 = 0;
        __dest = puVar2 + uVar7 * 2;
        while (iVar8 < (int)uVar7) {
          iVar8 = iVar8 + 1;
          iVar9 = iVar11;
          uVar13 = FUN_000176e0(param_1);
          iVar12 = iVar10 + iVar11;
          iVar10 = iVar10 + 0x40;
          pcVar4 = (char *)FUN_000176ac(param_1,(int)((ulonglong)uVar13 >> 0x20),iVar12,0,iVar9);
          cVar1 = *pcVar4;
          *puVar2 = uVar13;
          if (cVar1 == '.') {
            pcVar4 = pcVar4 + 1;
          }
          *(undefined4 *)(puVar2 + 1) = 0x55;
          *(undefined8 **)((int)puVar2 + 0xc) = __dest;
          puVar2 = puVar2 + 2;
          sVar5 = strlen(pcVar4);
          memcpy(__dest,pcVar4,sVar5 + 1);
          __dest = (undefined8 *)((int)__dest + sVar5 + 1);
        }
      }
    }
    else {
      uVar7 = 0xffffffea;
    }
  }
  return uVar7;
}



/* ===== FUN_00017d58 @ 00017d58 size=348 ===== */

int FUN_00017d58(undefined4 *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  size_t extraout_r0;
  size_t __size;
  void *__dest;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint __n;
  int iVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ushort uVar10;
  void *__src;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  undefined8 uVar15;
  uint local_58;
  int iStack_54;
  uint local_3c;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [12];
  
  uVar5 = param_1[0xc];
  iVar7 = param_1[0xd];
  iVar1 = FUN_000176ac(param_1,param_2,param_1[0xe],param_1[0xf]);
  uVar10 = 1;
  do {
    if (*(ushort *)(param_1 + 8) <= uVar10) {
      return -2;
    }
    iVar2 = FUN_000177e4(param_1,uVar10,auStack_38,auStack_30,&local_3c);
    if (-1 < iVar2) {
      bVar14 = iVar7 == 0;
      if (iVar7 == 0) {
        bVar14 = uVar5 <= local_3c;
      }
      if ((!bVar14) && (iVar2 = strcmp(param_2,(char *)(local_3c + iVar1)), iVar2 == 0)) {
        uVar15 = FUN_00017784(param_1,uVar10);
        __src = (void *)*param_1;
        uVar5 = param_1[4];
        local_58 = (int)uVar15 - (int)__src;
        if ((int)(uVar5 << 0x1e) < 0) {
          uVar6 = 4;
        }
        else {
          uVar6 = 8;
        }
        iStack_54 = ((int)local_58 >> 0x1f) + (uint)(0xfffffff7 < local_58);
        local_58 = local_58 + 8;
        uVar15 = FUN_000176e0(param_1,(int)((ulonglong)uVar15 >> 0x20),local_58,iStack_54,uVar6);
        uVar13 = (uint)((ulonglong)uVar15 >> 0x20);
        __n = param_1[2];
        uVar12 = (uint)uVar15 & 0xfffffffd;
        uVar4 = iStack_54 + (uint)CARRY4(local_58,uVar6);
        bVar14 = uVar4 <= (uint)param_1[3];
        if (param_1[3] == uVar4) {
          bVar14 = local_58 + uVar6 <= __n;
        }
        __size = __n;
        if (!bVar14) {
          __assert((char *)(DAT_00017ebc + 0x17e50),(char *)(DAT_00017eb8 + 0x17e4e),0xa8);
          __size = extraout_r0;
        }
        if (param_1[1] == 0) {
          __dest = malloc(__size);
          param_1[1] = __dest;
          if (__dest == (void *)0x0) {
            piVar3 = __errno_location();
            return -*piVar3;
          }
          memcpy(__dest,__src,__n);
          *param_1 = __dest;
        }
        puVar8 = (undefined1 *)(local_58 + param_1[1]);
        puVar9 = puVar8 + uVar6;
        if ((uVar5 & 0x10) != 0) {
          do {
            puVar9 = puVar9 + -1;
            *puVar9 = (char)uVar12;
            uVar12 = uVar12 >> 8 | uVar13 << 0x18;
            uVar13 = uVar13 >> 8;
          } while (puVar9 != puVar8);
          return 0;
        }
        do {
          puVar11 = puVar8 + 1;
          *puVar8 = (char)uVar12;
          uVar12 = uVar12 >> 8 | uVar13 << 0x18;
          uVar13 = uVar13 >> 8;
          puVar8 = puVar11;
        } while (puVar11 != puVar9);
        return 0;
      }
    }
    uVar10 = uVar10 + 1;
  } while( true );
}



/* ===== FUN_00017ec0 @ 00017ec0 size=288 ===== */

int FUN_00017ec0(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  size_t sVar4;
  void *__dest;
  int *piVar5;
  uint uVar6;
  char *pcVar7;
  char *__s2;
  void *__src;
  uint uVar8;
  uint uVar9;
  char *__s1;
  bool bVar10;
  char *local_34;
  uint local_30;
  uint uStack_2c;
  
  iVar3 = FUN_00017a8c(param_1,DAT_00017fe0 + 98000,&local_34,&local_30);
  if (-1 < iVar3) {
    if ((local_34 != (char *)0x0) && (pcVar7 = local_34, local_30 != 0 || uStack_2c != 0)) {
      while (uVar2 = uStack_2c, uVar1 = local_30, *pcVar7 == '\0') {
        if (uStack_2c == 0 && local_30 < 2) goto LAB_00017edc;
        bVar10 = local_30 != 0;
        local_30 = local_30 - 1;
        uStack_2c = (uStack_2c - 1) + (uint)bVar10;
        pcVar7 = pcVar7 + 1;
      }
      if (uStack_2c != 0 || 1 < local_30) {
        uVar8 = 0;
        uVar9 = 0;
        __s2 = (char *)(DAT_00017fe4 + 0x17f1a);
        do {
          __s1 = pcVar7 + uVar8;
          if (*__s1 != '\0') {
            uVar6 = uVar9 + (0xfffffffe < uVar8);
            bVar10 = uVar2 <= uVar6;
            if (uVar6 == uVar2) {
              bVar10 = uVar1 <= uVar8 + 1;
            }
            if (!bVar10) {
              uVar6 = uVar9 + (0xfffffff6 < uVar8);
              bVar10 = uVar2 <= uVar6;
              if (uVar6 == uVar2) {
                bVar10 = uVar1 <= uVar8 + 9;
              }
              if (!bVar10) {
                iVar3 = strncmp(__s1,__s2,9);
                if (iVar3 == 0) {
                  __src = (void *)*param_1;
                  if (param_1[1] == 0) {
                    sVar4 = param_1[2];
                    __dest = malloc(sVar4);
                    param_1[1] = __dest;
                    if (__dest == (void *)0x0) {
                      piVar5 = __errno_location();
                      return -*piVar5;
                    }
                    memcpy(__dest,__src,sVar4);
                    *param_1 = __dest;
                  }
                  sVar4 = strlen(__s1);
                  memset(__s1 + (param_1[1] - (int)__src),0,sVar4);
                  return 0;
                }
                sVar4 = strlen(__s1);
                bVar10 = CARRY4(uVar8,sVar4);
                uVar8 = uVar8 + sVar4;
                uVar9 = uVar9 + bVar10;
              }
            }
          }
          bVar10 = 0xfffffffe < uVar8;
          uVar8 = uVar8 + 1;
          uVar9 = uVar9 + bVar10;
          bVar10 = uVar2 <= uVar9;
          if (uVar9 == uVar2) {
            bVar10 = uVar1 <= uVar8;
          }
        } while (!bVar10);
        return -2;
      }
    }
LAB_00017edc:
    iVar3 = 0;
  }
  return iVar3;
}



/* ===== FUN_00017fe8 @ 00017fe8 size=1074 ===== */

int FUN_00017fe8(int *param_1,undefined4 *param_2)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  int *piVar6;
  char *pcVar7;
  size_t sVar8;
  uint uVar9;
  int iVar10;
  int extraout_r1;
  int extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  uint uVar11;
  undefined4 uVar12;
  undefined4 extraout_r1_03;
  int extraout_r2;
  undefined4 *puVar13;
  int extraout_r3;
  void *pvVar14;
  int iVar15;
  undefined8 *puVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  char *pcVar21;
  longlong *plVar22;
  bool bVar23;
  bool bVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  longlong lVar28;
  undefined8 local_98;
  uint local_90;
  uint uStack_8c;
  int local_88;
  uint local_80;
  int iStack_7c;
  int local_64;
  int local_60;
  undefined1 auStack_5c [4];
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  char *local_48;
  undefined4 uStack_44;
  uint local_40;
  int iStack_3c;
  
  iVar3 = FUN_00017a8c(param_1,DAT_0001841c + 0x17ffc,&local_64,&local_58);
  if ((iVar3 < 0) ||
     (iVar3 = FUN_00017a8c(param_1,DAT_00018420 + 0x18018,&local_60,&local_50), iVar3 < 0)) {
LAB_000182a2:
    iVar3 = DAT_00018430;
    *param_2 = 0;
    iVar3 = FUN_00017a8c(param_1,iVar3 + 0x182ae,&local_48,&local_40);
    if (iVar3 < 0) {
      return iVar3;
    }
    if ((local_48 != (char *)0x0) && (pcVar21 = local_48, local_40 != 0 || iStack_3c != 0)) {
      while (iVar3 = iStack_3c, uVar11 = local_40, *pcVar21 == '\0') {
        if (iStack_3c == 0 && local_40 < 2) goto LAB_000182c0;
        bVar24 = local_40 != 0;
        local_40 = local_40 - 1;
        iStack_3c = iStack_3c + -1 + (uint)bVar24;
        pcVar21 = pcVar21 + 1;
      }
      if (iStack_3c != 0 || 1 < local_40) {
        uVar9 = 0;
        iVar4 = 0;
        iVar15 = 0;
        uVar19 = 0;
        iVar10 = 0;
        do {
          uVar18 = uVar19 + 1;
          iVar17 = iVar10 + (uint)(0xfffffffe < uVar19);
          if ((pcVar21[uVar19] == '\0') &&
             (bVar24 = iVar10 != iVar4, bVar23 = uVar19 != uVar9, uVar9 = uVar18, iVar4 = iVar17,
             bVar24 || bVar23)) {
            iVar15 = iVar15 + 1;
          }
          uVar19 = uVar18;
          iVar10 = iVar17;
        } while (iStack_3c != iVar17 || local_40 != uVar18);
        iVar4 = local_40 - 1;
        if (pcVar21[iVar4] != '\0') {
          iVar15 = iVar15 + 1;
        }
        pvVar5 = malloc(local_40 + 1 + iVar15 * 0x10);
        *param_2 = pvVar5;
        if (pvVar5 != (void *)0x0) {
          pvVar14 = (void *)((int)pvVar5 + iVar15 * 0x10);
          iVar15 = 0;
          local_98 = 0;
          uVar9 = 0;
          iVar10 = 0;
          do {
            uVar19 = uVar9 + 1;
            iVar17 = iVar10 + (uint)(0xfffffffe < uVar9);
            if (pcVar21[uVar9] == '\0') {
              if (iVar10 != local_98._4_4_ || uVar9 != (uint)local_98) {
                puVar13 = (undefined4 *)((int)pvVar5 + iVar15 * 0x10);
                iVar15 = iVar15 + 1;
                sVar8 = uVar9 - (uint)local_98;
                *puVar13 = 0;
                puVar13[1] = 0;
                puVar13[2] = 0x47;
                puVar13[3] = pvVar14;
                pvVar14 = memcpy(pvVar14,pcVar21 + (uint)local_98,sVar8);
                *(undefined1 *)((int)pvVar14 + sVar8) = 0;
                pvVar14 = (void *)((int)pvVar14 + sVar8 + 1);
              }
              local_98 = CONCAT44(iVar17,uVar19);
            }
            uVar9 = uVar19;
            iVar10 = iVar17;
          } while (iVar17 != iVar3 || uVar19 != uVar11);
          if (pcVar21[iVar4] == '\0') {
            return iVar15;
          }
          puVar16 = (undefined8 *)((int)pvVar5 + iVar15 * 0x10);
          *puVar16 = 0;
          *(undefined4 *)(puVar16 + 1) = 0x47;
          *(void **)((int)puVar16 + 0xc) = pvVar14;
          pvVar5 = memcpy(pvVar14,pcVar21 + (uint)local_98,uVar19 - (uint)local_98);
          *(undefined1 *)((int)pvVar5 + (uVar19 - (uint)local_98)) = 0;
          return iVar15 + 1;
        }
        goto LAB_000180a6;
      }
    }
LAB_000182c0:
    iVar3 = 0;
  }
  else {
    if ((param_1[4] & 2U) == 0) {
      iVar3 = 0x18;
    }
    else {
      iVar3 = 0x10;
    }
    uVar25 = VectorShiftRight(CONCAT44(iVar3,iVar3),0x20);
    iVar4 = FUN_00019374(local_50,uStack_4c,(int)uVar25,(int)((ulonglong)uVar25 >> 0x20));
    if (extraout_r3 != 0 || extraout_r2 != 0) goto LAB_000182a2;
    iVar10 = *param_1;
    iVar20 = 1;
    iVar3 = (local_60 - iVar10) + iVar3;
    pcVar21 = (char *)(DAT_00018424 + 0x1806a);
    iVar15 = 0;
    uVar26 = VectorShiftRight(CONCAT44(local_64 - iVar10,local_64 - iVar10),0x20);
    iVar17 = 0;
    local_98 = VectorShiftRight(CONCAT44(iVar3,iVar3),0x20);
    uVar27 = local_98;
    while( true ) {
      local_80 = (uint)uVar26;
      iStack_7c = (int)((ulonglong)uVar26 >> 0x20);
      if (iVar4 <= iVar20) break;
      uVar11 = FUN_000176e0(param_1,iVar10,(int)uVar27,(int)((ulonglong)uVar27 >> 0x20),4);
      bVar24 = iStack_54 == 0;
      if (iStack_54 == 0) {
        bVar24 = local_58 <= uVar11;
      }
      if (bVar24) goto LAB_000182a2;
      iStack_7c = iStack_7c + (uint)CARRY4(local_80,uVar11);
      pcVar7 = (char *)FUN_000176ac(param_1,iStack_7c,local_80 + uVar11,iStack_7c);
      iVar3 = strncmp(pcVar7,pcVar21,6);
      iVar10 = extraout_r1;
      if (iVar3 == 0) {
        sVar8 = strlen(pcVar7 + 6);
        iVar15 = iVar15 + 1;
        iVar17 = iVar17 + 1 + sVar8;
        iVar10 = extraout_r1_00;
      }
      iVar20 = iVar20 + 1;
      uVar27 = VectorAdd(uVar27,uVar25,8);
    }
    if (iVar15 == 0) goto LAB_000182a2;
    pvVar5 = malloc(iVar15 * 0x10 + iVar17);
    *param_2 = pvVar5;
    if (pvVar5 != (void *)0x0) {
      local_88 = 1;
      pvVar14 = (void *)((int)pvVar5 + iVar15 * 0x10);
      iVar10 = 0;
      pcVar21 = (char *)(DAT_00018428 + 0x18118);
      iVar3 = DAT_0001842c + 0x1811e;
      do {
        if (iVar4 <= local_88) {
          return iVar10;
        }
        iVar15 = local_98._4_4_ + (uint)(0xfffffffb < (uint)local_98);
        if ((param_1[4] & 2U) == 0) {
          uVar27 = FUN_000176e0(param_1);
          uVar11 = (uint)uVar27;
          lVar28 = FUN_000176e0(param_1,(int)((ulonglong)uVar27 >> 0x20),(uint)local_98 + 8,
                                local_98._4_4_ + (uint)(0xfffffff7 < (uint)local_98),8);
          bVar1 = FUN_000176e0(param_1,(int)((ulonglong)lVar28 >> 0x20),(uint)local_98 + 4,iVar15,1)
          ;
          bVar24 = 0xfffffff9 < (uint)local_98;
          iVar15 = (uint)local_98 + 6;
          uVar12 = extraout_r1_03;
        }
        else {
          uVar27 = FUN_000176e0(param_1);
          uVar11 = (uint)uVar27;
          lVar28 = FUN_000176e0(param_1,(int)((ulonglong)uVar27 >> 0x20),(uint)local_98 + 4,iVar15,4
                               );
          bVar1 = FUN_000176e0(param_1,(int)((ulonglong)lVar28 >> 0x20),(uint)local_98 + 0xc,
                               local_98._4_4_ + (uint)(0xfffffff3 < (uint)local_98),1);
          bVar24 = 0xfffffff1 < (uint)local_98;
          iVar15 = (uint)local_98 + 0xe;
          uVar12 = extraout_r1_01;
        }
        uStack_8c = (uint)((ulonglong)lVar28 >> 0x20);
        local_90 = (uint)lVar28;
        sVar2 = FUN_000176e0(param_1,uVar12,iVar15,local_98._4_4_ + (uint)bVar24,2);
        pcVar7 = (char *)FUN_000176ac(param_1,extraout_r1_02,local_80 + uVar11,
                                      iStack_7c + (uint)CARRY4(local_80,uVar11));
        iVar15 = strncmp(pcVar7,pcVar21,6);
        if (iVar15 == 0) {
          plVar22 = (longlong *)((int)pvVar5 + iVar10 * 0x10);
          if ((sVar2 != -0xf) && (sVar2 != 0)) {
            iVar15 = FUN_000177e4(param_1,sVar2,&local_48,&local_40,auStack_5c);
            if (-1 < iVar15) {
              uVar11 = iStack_3c + -1 + (uint)(3 < local_40);
              bVar24 = uStack_8c <= uVar11;
              if (uVar11 == uStack_8c) {
                bVar24 = local_90 <= local_40 - 4;
              }
              if (bVar24) {
                lVar28 = lVar28 + CONCAT44(uStack_44,local_48);
                uVar12 = (undefined4)((ulonglong)lVar28 >> 0x20);
                lVar28 = FUN_000176e0(param_1,uVar12,(int)lVar28,uVar12,4);
                goto LAB_00018216;
              }
            }
            lVar28 = 0xff;
          }
LAB_00018216:
          iVar10 = iVar10 + 1;
          *plVar22 = lVar28;
          if (bVar1 >> 4 < 3) {
            uVar11 = (uint)*(byte *)(iVar3 + (uint)(bVar1 >> 4));
          }
          else {
            uVar11 = 0;
          }
          *(uint *)(plVar22 + 1) = uVar11;
          *(void **)((int)plVar22 + 0xc) = pvVar14;
          sVar8 = strlen(pcVar7 + 6);
          memcpy(pvVar14,pcVar7 + 6,sVar8);
          *(undefined1 *)((int)pvVar14 + sVar8) = 0;
          pvVar14 = (void *)((int)pvVar14 + sVar8 + 1);
        }
        local_98 = VectorAdd(local_98,uVar25,8);
        local_88 = local_88 + 1;
      } while( true );
    }
LAB_000180a6:
    piVar6 = __errno_location();
    iVar3 = -*piVar6;
  }
  return iVar3;
}



/* ===== FUN_00018434 @ 00018434 size=1316 ===== */

int FUN_00018434(int *param_1,undefined4 *param_2)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  size_t sVar8;
  void *__ptr;
  void *__ptr_00;
  char *__s2;
  int iVar9;
  void *pvVar10;
  int *piVar11;
  size_t sVar12;
  char *pcVar13;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 uVar14;
  undefined4 extraout_r1_02;
  int extraout_r2;
  undefined4 uVar15;
  uint uVar16;
  undefined4 *puVar17;
  uint uVar18;
  int iVar19;
  int extraout_r3;
  uint uVar20;
  undefined4 *puVar21;
  undefined8 *puVar22;
  void *__dest;
  int iVar23;
  uint uVar24;
  int iVar25;
  bool bVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 local_c0;
  int local_b0;
  uint local_a8;
  uint uStack_a4;
  undefined4 local_a0;
  size_t local_90;
  uint local_80;
  int iStack_7c;
  uint local_68;
  int iStack_64;
  int local_54;
  int local_50;
  int local_4c;
  undefined8 local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  
  iVar6 = FUN_00017a8c(param_1,DAT_00018958 + 0x1844e,&local_54,&local_48);
  if (iVar6 < 0) {
    iVar6 = 0;
    local_54 = 0;
    local_a0 = 0;
    local_48 = 0;
  }
  else {
    if ((param_1[4] & 2U) == 0) {
      local_a0 = 8;
    }
    else {
      local_a0 = 4;
    }
    if ((local_48 & 0x3f) != 0) {
      local_54 = 0;
      local_48 = 0;
    }
    iVar6 = 0x40;
  }
  iVar7 = FUN_00017a8c(param_1,DAT_0001895c + 0x18472,&local_50,&local_40);
  if ((iVar7 < 0) ||
     (iVar7 = FUN_00017a8c(param_1,DAT_00018960 + 0x184c4,&local_4c,&local_38), iVar7 < 0)) {
    return -0x16;
  }
  uVar18 = param_1[4] & 2;
  if (uVar18 == 0) {
    iVar7 = 0x18;
  }
  else {
    iVar7 = 0x10;
  }
  uVar27 = VectorShiftRight(CONCAT44(iVar7,iVar7),0x20);
  iVar19 = (int)((ulonglong)uVar27 >> 0x20);
  uVar24 = (uint)uVar27;
  sVar8 = FUN_00019374(local_38,uStack_34,uVar24,iVar19);
  if (extraout_r3 != 0 || extraout_r2 != 0) {
    return -0x16;
  }
  uVar2 = (uint)local_48;
  uVar3 = local_48._4_4_;
  if (local_48._4_4_ == 0 && (uint)local_48 == 0) {
    __ptr = (void *)0x0;
    local_90 = 0;
  }
  else {
    local_90 = FUN_00019374((uint)local_48,local_48._4_4_,iVar6,0);
    __ptr = calloc(local_90,1);
    if (__ptr == (void *)0x0) {
      return -0xc;
    }
  }
  sVar1 = (short)param_1[0x12];
  iVar23 = *param_1;
  uVar28 = VectorShiftRight(CONCAT44(local_50 - iVar23,local_50 - iVar23),0x20);
  iVar7 = iVar7 + (local_4c - iVar23);
  uVar29 = VectorShiftRight(CONCAT44(iVar7,iVar7),0x20);
  __ptr_00 = calloc(sVar8,8);
  if (__ptr_00 == (void *)0x0) {
    free(__ptr);
    return -0xc;
  }
  iVar7 = 0;
  local_c0._0_4_ = (uint)uVar29;
  local_c0._4_4_ = (int)((ulonglong)uVar29 >> 0x20);
  iVar25 = 0;
  if (uVar18 == 0) {
    uVar15 = 8;
  }
  else {
    uVar15 = 4;
  }
  uVar20 = local_54 - iVar23;
  uVar30 = VectorShiftRight(CONCAT44(uVar15,uVar15),0x20);
  local_b0 = 1;
  do {
    local_80 = (uint)uVar28;
    iStack_7c = (int)((ulonglong)uVar28 >> 0x20);
    if ((int)sVar8 <= local_b0) {
      if (__ptr != (void *)0x0) {
        for (iVar19 = 0; iVar19 < (int)local_90; iVar19 = iVar19 + 1) {
          if (*(char *)((int)__ptr + iVar19) == '\0') {
            pcVar13 = (char *)FUN_000176ac(param_1);
            iVar7 = iVar7 + 1;
            sVar12 = strlen(pcVar13);
            iVar25 = iVar25 + 1 + sVar12;
          }
        }
      }
      if (iVar7 == 0) {
        free(__ptr);
        free(__ptr_00);
        *param_2 = 0;
        return 0;
      }
      pvVar10 = malloc(iVar7 * 0x10 + iVar25);
      *param_2 = pvVar10;
      if (pvVar10 == (void *)0x0) {
        free(__ptr);
        free(__ptr_00);
        piVar11 = __errno_location();
        return -*piVar11;
      }
      __dest = (void *)((int)pvVar10 + iVar7 * 0x10);
      iVar19 = 1;
      iVar7 = 0;
      local_c0 = uVar29;
      while (iVar19 < (int)sVar8) {
        if (uVar18 == 0) {
          uVar28 = FUN_000176e0(param_1);
          uVar24 = (uint)uVar28;
          sVar5 = FUN_000176e0(param_1,(int)((ulonglong)uVar28 >> 0x20),(uint)local_c0 + 6,
                               local_c0._4_4_ + (uint)(0xfffffff9 < (uint)local_c0),2);
          bVar26 = 0xfffffffb < (uint)local_c0;
          iVar23 = (uint)local_c0 + 4;
          uVar15 = extraout_r1_02;
        }
        else {
          uVar28 = FUN_000176e0(param_1);
          uVar24 = (uint)uVar28;
          sVar5 = FUN_000176e0(param_1,(int)((ulonglong)uVar28 >> 0x20),(uint)local_c0 + 0xe,
                               local_c0._4_4_ + (uint)(0xfffffff1 < (uint)local_c0),2);
          bVar26 = 0xfffffff3 < (uint)local_c0;
          iVar23 = (uint)local_c0 + 0xc;
          uVar15 = extraout_r1_01;
        }
        bVar4 = FUN_000176e0(param_1,uVar15,iVar23,local_c0._4_4_ + (uint)bVar26,1);
        if ((sVar5 == 0) &&
           (((sVar1 != 2 && sVar1 != 0x2b || ((bVar4 & 0xf) != 0xd)) &&
            (pcVar13 = (char *)FUN_000176ac(param_1,bVar4,local_80 + uVar24,
                                            iStack_7c + (uint)CARRY4(local_80,uVar24)),
            *pcVar13 != '\0')))) {
          if (bVar4 >> 4 == 2) {
            uVar15 = 0x57;
          }
          else {
            uVar15 = 0x55;
          }
          sVar12 = strlen(pcVar13);
          puVar21 = (undefined4 *)((int)pvVar10 + iVar7 * 0x10);
          iVar7 = iVar7 + 1;
          puVar17 = (undefined4 *)((int)__ptr_00 + iVar19 * 8);
          uVar14 = puVar17[1];
          *puVar21 = *puVar17;
          puVar21[1] = uVar14;
          puVar21[2] = uVar15;
          puVar21[3] = __dest;
          memcpy(__dest,pcVar13,sVar12);
          *(undefined1 *)((int)__dest + sVar12) = 0;
          __dest = (void *)((int)__dest + sVar12 + 1);
        }
        iVar19 = iVar19 + 1;
        local_c0 = VectorAdd(local_c0,uVar27,8);
      }
      free(__ptr_00);
      if (__ptr != (void *)0x0) {
        uVar18 = 0;
        iVar19 = 0;
        uVar27 = VectorShiftRight(CONCAT44(local_a0,local_a0),0x20);
        for (; iVar19 < (int)local_90; iVar19 = iVar19 + 1) {
          if (*(char *)((int)__ptr + iVar19) == '\0') {
            iVar23 = ((int)uVar20 >> 0x1f) + (uint)CARRY4(uVar20,uVar18);
            local_a8 = (uint)uVar27;
            uStack_a4 = (uint)((ulonglong)uVar27 >> 0x20);
            pcVar13 = (char *)FUN_000176ac(param_1,iVar23,local_a8 + uVar20 + uVar18,
                                           uStack_a4 + iVar23 +
                                           (uint)CARRY4(local_a8,uVar20 + uVar18));
            sVar8 = strlen(pcVar13);
            uVar28 = FUN_000176e0(param_1);
            puVar22 = (undefined8 *)((int)pvVar10 + iVar7 * 0x10);
            iVar7 = iVar7 + 1;
            *(undefined4 *)(puVar22 + 1) = 0x55;
            *(void **)((int)puVar22 + 0xc) = __dest;
            *puVar22 = uVar28;
            memcpy(__dest,pcVar13,sVar8);
            *(undefined1 *)((int)__dest + sVar8) = 0;
            __dest = (void *)((int)__dest + sVar8 + 1);
          }
          uVar18 = uVar18 + iVar6;
        }
        free(__ptr);
        return iVar7;
      }
      return iVar7;
    }
    if (uVar18 == 0) {
      uVar31 = FUN_000176e0(param_1);
      uVar16 = (uint)uVar31;
      sVar5 = FUN_000176e0(param_1,(int)((ulonglong)uVar31 >> 0x20),(uint)local_c0 + 6,
                           local_c0._4_4_ + (uint)(0xfffffff9 < (uint)local_c0),2);
      bVar26 = 0xfffffffb < (uint)local_c0;
      iVar23 = (uint)local_c0 + 4;
      uVar15 = extraout_r1_00;
    }
    else {
      uVar31 = FUN_000176e0(param_1);
      uVar16 = (uint)uVar31;
      sVar5 = FUN_000176e0(param_1,(int)((ulonglong)uVar31 >> 0x20),(uint)local_c0 + 0xe,
                           local_c0._4_4_ + (uint)(0xfffffff1 < (uint)local_c0),2);
      bVar26 = 0xfffffff3 < (uint)local_c0;
      iVar23 = (uint)local_c0 + 0xc;
      uVar15 = extraout_r1;
    }
    bVar4 = FUN_000176e0(param_1,uVar15,iVar23,local_c0._4_4_ + (uint)bVar26,1);
    if ((sVar5 == 0) && ((sVar1 != 2 && sVar1 != 0x2b || ((bVar4 & 0xf) != 0xd)))) {
      bVar26 = iStack_3c == 0;
      if (iStack_3c == 0) {
        bVar26 = local_40 <= uVar16;
      }
      if (bVar26) {
        free(__ptr);
        free(__ptr_00);
        return -0x16;
      }
      iStack_7c = iStack_7c + (uint)CARRY4(local_80,uVar16);
      pcVar13 = (char *)FUN_000176ac(param_1,iStack_7c,local_80 + uVar16,iStack_7c);
      if (*pcVar13 != '\0') {
        sVar12 = strlen(pcVar13);
        iVar7 = iVar7 + 1;
        iVar23 = 0;
        local_a8 = 0;
        uStack_a4 = 0;
        iVar25 = iVar25 + 1 + sVar12;
        uVar16 = uVar20;
        while( true ) {
          bVar26 = uVar3 <= uStack_a4;
          if (uStack_a4 == uVar3) {
            bVar26 = uVar2 <= local_a8;
          }
          if (bVar26) {
            uVar31 = 0;
            goto LAB_00018726;
          }
          local_68 = (uint)uVar30;
          iStack_64 = (int)((ulonglong)uVar30 >> 0x20);
          __s2 = (char *)FUN_000176ac(param_1,uVar3,local_68 + uVar16,
                                      iStack_64 + iVar23 + (uint)CARRY4(local_68,uVar16));
          iVar9 = strcmp(pcVar13,__s2);
          bVar26 = 0xffffffbf < uVar16;
          uVar16 = uVar16 + 0x40;
          iVar23 = iVar23 + (uint)bVar26;
          if (iVar9 == 0) break;
          bVar26 = 0xffffffbf < local_a8;
          local_a8 = local_a8 + 0x40;
          uStack_a4 = uStack_a4 + bVar26;
        }
        uVar31 = FUN_000176e0(param_1);
        uVar16 = local_a8 >> 6 | uStack_a4 << 0x1a;
        if ((-1 < (int)uVar16) && (__ptr != (void *)0x0)) {
          *(undefined1 *)(uVar16 + (int)__ptr) = 1;
        }
LAB_00018726:
        *(undefined8 *)((int)__ptr_00 + local_b0 * 8) = uVar31;
      }
    }
    local_b0 = local_b0 + 1;
    bVar26 = CARRY4(uVar24,(uint)local_c0);
    local_c0._0_4_ = uVar24 + (uint)local_c0;
    local_c0._4_4_ = iVar19 + local_c0._4_4_ + (uint)bVar26;
  } while( true );
}



/* ===== FUN_00018964 @ 00018964 size=238 ===== */

undefined4 FUN_00018964(undefined4 param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  
  lVar12 = FUN_00017674();
  iVar3 = FUN_00017670(param_1);
  if ((int)(uint)((uint)lVar12 < 0x1c) <= (int)((ulonglong)lVar12 >> 0x20)) {
    uVar8 = (uint)(lVar12 + -0x1c);
    iVar4 = memcmp((void *)(DAT_00018a54 + 0x1899a),(void *)(iVar3 + uVar8),0x1c);
    if (iVar4 == 0) {
      if ((int)((ulonglong)(lVar12 + -0x1c) >> 0x20) < (int)(uint)(uVar8 < 0xc)) {
        return 0;
      }
      uVar8 = (uint)(lVar12 + -0x28);
      pbVar7 = (byte *)(iVar3 + uVar8);
      bVar1 = *pbVar7;
      if (1 < bVar1) {
        return 0;
      }
      bVar2 = pbVar7[1];
      if (7 < bVar2) {
        return 0;
      }
      uVar5 = (uint)pbVar7[2];
      if (2 < uVar5) {
        return 0;
      }
      uVar9 = *(uint *)(pbVar7 + 8);
      uVar9 = uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
              uVar9 >> 0x18;
      if (uVar9 == 0) {
        return 0;
      }
      uVar10 = (uint)pbVar7[3];
      uVar11 = (uint)pbVar7[4];
      if ((int)((ulonglong)(lVar12 + -0x28) >> 0x20) < (int)(uint)(uVar8 < uVar10 + uVar11 + uVar9))
      {
        return 0;
      }
      if (uVar5 == 2) {
        param_2[5] = DAT_00018a58 + 0x18a02;
        iVar3 = DAT_00018a5c + 0x18a08;
      }
      else {
        iVar6 = (uVar8 - uVar9) - uVar11;
        param_2[7] = iVar3 + (uVar8 - uVar9);
        param_2[8] = uVar9;
        param_2[2] = iVar3 + iVar6;
        param_2[3] = uVar11;
        iVar4 = DAT_00018a60;
        *param_2 = (iVar6 - uVar10) + iVar3;
        param_2[1] = uVar10;
        param_2[4] = *(int *)(iVar4 + 0x18a32 + (uint)bVar1 * 4);
        param_2[5] = *(int *)(DAT_00018a64 + 0x18a3c + (uint)bVar2 * 4);
        iVar3 = *(int *)(DAT_00018a68 + 0x18a46 + uVar5 * 4);
      }
      param_2[6] = iVar3;
      return 1;
    }
  }
  return 0;
}



/* ===== FUN_00018a6c @ 00018a6c size=8 ===== */

void FUN_00018a6c(int param_1)

{
  if (*(code **)(param_1 + 0x24) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x24))();
    return;
  }
  return;
}



/* ===== FUN_00018a74 @ 00018a74 size=124 ===== */

int FUN_00018a74(ushort *param_1,uint param_2)

{
  uint uVar1;
  ushort *puVar2;
  
  uVar1 = param_2 & 3;
  puVar2 = (ushort *)((param_2 & 0xfffffffc) + (int)param_1);
  for (; param_1 != puVar2; param_1 = param_1 + 2) {
    param_2 = (*param_1 + param_2) * 0x10000 ^ (uint)param_1[1] << 0xb ^ *param_1 + param_2;
    param_2 = param_2 + (param_2 >> 0xb);
  }
  if (uVar1 == 2) {
    param_2 = param_2 + *param_1 ^ (param_2 + *param_1) * 0x800;
    param_2 = param_2 + (param_2 >> 0x11);
  }
  else if (uVar1 == 3) {
    param_2 = *param_1 + param_2 ^ (uint)(byte)param_1[1] << 0x12 ^ (*param_1 + param_2) * 0x10000;
    param_2 = param_2 + (param_2 >> 0xb);
  }
  else if (uVar1 == 1) {
    param_2 = param_2 + (byte)*param_1;
    param_2 = param_2 ^ param_2 * 0x400;
    param_2 = param_2 + (param_2 >> 1);
  }
  param_2 = param_2 ^ param_2 << 3;
  param_2 = param_2 + (param_2 >> 5);
  param_2 = param_2 ^ param_2 * 0x10;
  param_2 = param_2 + (param_2 >> 0x11);
  param_2 = param_2 ^ param_2 * 0x2000000;
  return param_2 + (param_2 >> 6);
}



/* ===== FUN_00018af8 @ 00018af8 size=64 ===== */

void FUN_00018af8(int param_1,undefined4 param_2)

{
  void *pvVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar2 = 0x20 - LZCOUNT(param_1 + -1);
  uVar4 = 1 << (uVar2 & 0xff);
  pvVar1 = calloc(1,(0xc << (uVar2 & 0xff)) + 0x10);
  if (pvVar1 != (void *)0x0) {
    *(uint *)((int)pvVar1 + 8) = uVar4;
    *(undefined4 *)((int)pvVar1 + 0xc) = param_2;
    if (uVar4 < 0x20) {
      uVar3 = 4;
    }
    else {
      if (uVar4 < 0x820) {
        *(uint *)((int)pvVar1 + 4) = uVar4 >> 5;
        return;
      }
      uVar3 = 0x40;
    }
    *(undefined4 *)((int)pvVar1 + 4) = uVar3;
  }
  return;
}



/* ===== FUN_00018b38 @ 00018b38 size=84 ===== */

void FUN_00018b38(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 8);
  for (iVar2 = param_1 + 0x1c; iVar2 - 0xcU < (uint)(iVar1 * 0xc + param_1 + 0x10);
      iVar2 = iVar2 + 0xc) {
    if (*(int *)(param_1 + 0xc) != 0) {
      uVar3 = *(uint *)(iVar2 + -0xc);
      uVar4 = uVar3 + *(int *)(iVar2 + -8) * 8;
      for (; uVar3 < uVar4; uVar3 = uVar3 + 8) {
        (**(code **)(param_1 + 0xc))(*(undefined4 *)(uVar3 + 4));
      }
    }
    free(*(void **)(iVar2 + -0xc));
  }
  (*(code *)PTR_free_0002b180)(param_1);
  return;
}



/* ===== FUN_00018d40 @ 00018d40 size=14 ===== */

void FUN_00018d40(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = param_1;
  param_2[1] = 0;
  param_2[2] = 0xffffffff;
  return;
}



/* ===== FUN_00018d4e @ 00018d4e size=92 ===== */

undefined4 FUN_00018d4e(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = *param_1 + 0x10;
  iVar4 = param_1[2];
  piVar3 = (int *)(param_1[1] * 0xc + iVar6);
  param_1[2] = iVar4 + 1U;
  if (iVar4 + 1U < (uint)piVar3[1]) {
LAB_00018d90:
    iVar4 = param_1[2];
    iVar6 = *piVar3;
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)(iVar6 + iVar4 * 8 + 4);
    }
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *(undefined4 *)(iVar6 + iVar4 * 8);
    }
    uVar1 = 1;
  }
  else {
    uVar5 = *(uint *)(*param_1 + 8);
    param_1[1] = param_1[1] + 1;
    param_1[2] = 0;
    while (uVar2 = param_1[1], uVar2 < uVar5) {
      piVar3 = (int *)(uVar2 * 0xc + iVar6);
      if (piVar3[1] != 0) goto LAB_00018d90;
      param_1[1] = uVar2 + 1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_00018daa @ 00018daa size=36 ===== */

undefined4 FUN_00018daa(undefined4 *param_1,uint param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  
  if ((param_2 & 0x7f) != 0) {
    param_2 = (param_2 & 0xffffff80) + 0x80;
  }
  pvVar1 = realloc((void *)*param_1,param_2);
  if ((param_2 == 0) || (uVar2 = 0, pvVar1 != (void *)0x0)) {
    *param_1 = pvVar1;
    param_1[1] = param_2;
    uVar2 = 1;
  }
  return uVar2;
}



/* ===== FUN_00018dce @ 00018dce size=10 ===== */

void FUN_00018dce(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== FUN_00018dd8 @ 00018dd8 size=6 ===== */

void FUN_00018dd8(undefined4 *param_1)

{
  (*(code *)PTR_free_0002b180)(*param_1);
  return;
}



/* ===== FUN_00018dde @ 00018dde size=36 ===== */

void * FUN_00018dde(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = realloc((void *)*param_1,param_1[2] + 1);
  if (pvVar1 == (void *)0x0) {
    free((void *)*param_1);
  }
  else {
    *(undefined1 *)((int)pvVar1 + param_1[2]) = 0;
  }
  return pvVar1;
}



/* ===== FUN_00018e02 @ 00018e02 size=36 ===== */

int FUN_00018e02(int *param_1)

{
  int iVar1;
  
  if (((uint)param_1[1] < param_1[2] + 1U) && (iVar1 = FUN_00018daa(), iVar1 == 0)) {
    iVar1 = 0;
  }
  else {
    *(undefined1 *)(*param_1 + param_1[2]) = 0;
    iVar1 = *param_1;
  }
  return iVar1;
}



/* ===== FUN_00018e26 @ 00018e26 size=42 ===== */

undefined4 FUN_00018e26(int *param_1,undefined1 param_2)

{
  int iVar1;
  
  if (((uint)param_1[1] < param_1[2] + 1U) && (iVar1 = FUN_00018daa(), iVar1 == 0)) {
    return 0;
  }
  *(undefined1 *)(*param_1 + param_1[2]) = param_2;
  param_1[2] = param_1[2] + 1;
  return 1;
}



/* ===== FUN_00018e50 @ 00018e50 size=100 ===== */

size_t FUN_00018e50(int *param_1,char *param_2)

{
  char *pcVar1;
  int *extraout_r0;
  int *piVar2;
  size_t __n;
  char *__file;
  char *extraout_r1;
  int iVar3;
  
  piVar2 = param_1;
  pcVar1 = param_2;
  if (param_2 != (char *)0x0) goto LAB_00018e6a;
  iVar3 = 0x62;
  __file = (char *)(DAT_00018eb8 + 0x18e66);
  pcVar1 = (char *)(DAT_00018ebc + 0x18e68);
  while( true ) {
    __assert(pcVar1,__file,iVar3);
    piVar2 = extraout_r0;
    pcVar1 = extraout_r1;
LAB_00018e6a:
    if (piVar2 != (int *)0x0) break;
    iVar3 = 99;
    __file = (char *)(DAT_00018ec4 + 0x18e7a);
    pcVar1 = (char *)(DAT_00018ec8 + 0x18e7c);
  }
  __n = strlen(pcVar1);
  if (((uint)param_1[1] < param_1[2] + __n) && (iVar3 = FUN_00018daa(param_1), iVar3 == 0)) {
    __n = 0;
  }
  else {
    memcpy((void *)(*param_1 + param_1[2]),param_2,__n);
    param_1[2] = param_1[2] + __n;
  }
  return __n;
}



/* ===== FUN_00018ecc @ 00018ecc size=30 ===== */

void FUN_00018ecc(int param_1)

{
  int extraout_r0;
  int iVar1;
  int extraout_r3;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    __assert((char *)(DAT_00018ef4 + 0x18ee2),(char *)(DAT_00018ef0 + 0x18ee0),0x72);
    param_1 = extraout_r0;
    iVar1 = extraout_r3;
  }
  *(int *)(param_1 + 8) = iVar1 + -1;
  return;
}



/* ===== FUN_00018ef8 @ 00018ef8 size=32 ===== */

void FUN_00018ef8(int param_1,uint param_2)

{
  int extraout_r0;
  uint extraout_r1;
  uint uVar1;
  uint extraout_r3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 < param_2) {
    __assert((char *)(DAT_00018f20 + 0x18f10),(char *)(DAT_00018f1c + 0x18f0e),0x78);
    param_1 = extraout_r0;
    param_2 = extraout_r1;
    uVar1 = extraout_r3;
  }
  *(uint *)(param_1 + 8) = uVar1 - param_2;
  return;
}



/* ===== FUN_00018f24 @ 00018f24 size=6 ===== */

void FUN_00018f24(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



/* ===== FUN_00018f2a @ 00018f2a size=30 ===== */

void FUN_00018f2a(undefined4 param_1,size_t param_2,undefined4 param_3,undefined4 param_4)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_2);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  (*(code *)PTR_memcpy_0002b048)(pvVar1,param_1,param_2,param_4);
  return;
}



/* ===== FUN_00018f46 @ 00018f46 size=20 ===== */

void FUN_00018f46(int param_1,uint param_2,byte param_3)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(param_1 + -1);
  while( true ) {
    pbVar1 = pbVar1 + 1;
    if (*pbVar1 == 0) break;
    if (*pbVar1 == param_2) {
      *pbVar1 = param_3;
    }
  }
  return;
}



/* ===== FUN_00018f5a @ 00018f5a size=76 ===== */

undefined4 FUN_00018f5a(int param_1,int param_2,uint *param_3)

{
  uint uVar1;
  byte bVar2;
  
  uVar1 = 0;
  do {
    bVar2 = *(byte *)(param_1 + uVar1);
    if (bVar2 == 0x2d) {
      *(undefined1 *)(param_2 + uVar1) = 0x5f;
    }
    else {
      if (bVar2 < 0x2e) {
        if (bVar2 == 0) break;
      }
      else if (bVar2 == 0x5b) {
        for (; bVar2 = *(byte *)(param_1 + uVar1), bVar2 != 0x5d; uVar1 = uVar1 + 1) {
          if (bVar2 == 0) {
            return 0xffffffea;
          }
          *(byte *)(param_2 + uVar1) = bVar2;
        }
      }
      else if (bVar2 == 0x5d) {
        return 0xffffffea;
      }
      *(byte *)(param_2 + uVar1) = bVar2;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0xfff);
  *(undefined1 *)(param_2 + uVar1) = 0;
  if (param_3 != (uint *)0x0) {
    *param_3 = uVar1;
  }
  return 0;
}



/* ===== FUN_00018fa8 @ 00018fa8 size=66 ===== */

undefined4 FUN_00018fa8(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  size_t sVar3;
  int iVar4;
  char *__reject;
  
  if (param_1 == 0) {
LAB_00018fae:
    uVar2 = 0xffffffea;
  }
  else {
    iVar4 = 0;
    __reject = &UNK_00018fea + DAT_00018fec;
    while( true ) {
      cVar1 = *(char *)(param_1 + iVar4);
      if (cVar1 == '\0') break;
      if (cVar1 == '[') {
        sVar3 = strcspn((char *)(param_1 + iVar4),__reject);
        iVar4 = iVar4 + sVar3;
        if (*(char *)(param_1 + iVar4) == '\0') goto LAB_00018fae;
      }
      else {
        if (cVar1 == ']') goto LAB_00018fae;
        if (cVar1 == '-') {
          *(char *)(param_1 + iVar4) = '_';
        }
      }
      iVar4 = iVar4 + 1;
    }
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== FUN_00018ff0 @ 00018ff0 size=48 ===== */

int FUN_00018ff0(int param_1,int param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    cVar1 = *(char *)(param_1 + iVar2);
    if (cVar1 == '-') {
      *(undefined1 *)(param_2 + iVar2) = 0x5f;
    }
    else {
      if ((cVar1 == '\0') || (cVar1 == '.')) break;
      *(char *)(param_2 + iVar2) = cVar1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0xfff);
  *(undefined1 *)(param_2 + iVar2) = 0;
  if (param_3 != (int *)0x0) {
    *param_3 = iVar2;
  }
  return param_2;
}



/* ===== FUN_00019020 @ 00019020 size=32 ===== */

undefined4 FUN_00019020(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  undefined4 uVar2;
  
  pcVar1 = basename(param_1);
  if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
    uVar2 = FUN_00018ff0(pcVar1,param_2,param_3,param_4);
    return uVar2;
  }
  return 0;
}



/* ===== FUN_00019040 @ 00019040 size=60 ===== */

int FUN_00019040(int param_1,int param_2,int param_3)

{
  ssize_t sVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  size_t __nbytes;
  
  __nbytes = param_3 - 1;
  iVar4 = 0;
  do {
    sVar1 = read(param_1,(void *)(param_2 + iVar4),__nbytes);
    if (sVar1 == 0) break;
    if (sVar1 < 1) {
      piVar2 = __errno_location();
      iVar3 = *piVar2;
      if ((iVar3 != 0xb) && (iVar3 != 4)) {
        return -iVar3;
      }
    }
    else {
      __nbytes = __nbytes - sVar1;
      iVar4 = iVar4 + sVar1;
    }
  } while (__nbytes != 0);
  *(undefined1 *)(param_2 + iVar4) = 0;
  return iVar4;
}



/* ===== FUN_0001907c @ 0001907c size=56 ===== */

int FUN_0001907c(int param_1,int param_2,size_t param_3)

{
  ssize_t sVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    sVar1 = write(param_1,(void *)(param_2 + iVar4),param_3);
    if (sVar1 == 0) {
      return iVar4;
    }
    if (sVar1 < 1) {
      piVar2 = __errno_location();
      iVar3 = *piVar2;
      if ((iVar3 != 0xb) && (iVar3 != 4)) {
        return -iVar3;
      }
    }
    else {
      param_3 = param_3 - sVar1;
      iVar4 = iVar4 + sVar1;
    }
    if (param_3 == 0) {
      return iVar4;
    }
  } while( true );
}



/* ===== FUN_000190b4 @ 000190b4 size=86 ===== */

int FUN_000190b4(undefined4 param_1,long *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  byte *local_3c;
  byte abStack_38 [32];
  
  *param_2 = 0;
  iVar1 = DAT_0001910c;
  iVar2 = FUN_00019040(param_1,abStack_38,0x20);
  if (-1 < iVar2) {
    piVar3 = __errno_location();
    *piVar3 = 0;
    lVar4 = strtol((char *)abStack_38,(char **)&local_3c,param_3);
    if ((local_3c == abStack_38) ||
       (-1 < (int)((uint)*(ushort *)
                          (**(int **)(iVar1 + 0x190d2 + DAT_00019110) + (uint)*local_3c * 2) << 0x1a
                  ))) {
      iVar2 = -0x16;
    }
    else {
      *param_2 = lVar4;
      iVar2 = 0;
    }
  }
  return iVar2;
}



/* ===== FUN_00019114 @ 00019114 size=86 ===== */

int FUN_00019114(undefined4 param_1,ulong *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  ulong uVar4;
  byte *local_3c;
  byte abStack_38 [32];
  
  *param_2 = 0;
  iVar1 = DAT_0001916c;
  iVar2 = FUN_00019040(param_1,abStack_38,0x20);
  if (-1 < iVar2) {
    piVar3 = __errno_location();
    *piVar3 = 0;
    uVar4 = strtoul((char *)abStack_38,(char **)&local_3c,param_3);
    if ((local_3c == abStack_38) ||
       (-1 < (int)((uint)*(ushort *)
                          (**(int **)(iVar1 + 0x19132 + DAT_00019170) + (uint)*local_3c * 2) << 0x1a
                  ))) {
      iVar2 = -0x16;
    }
    else {
      *param_2 = uVar4;
      iVar2 = 0;
    }
  }
  return iVar2;
}



/* ===== FUN_00019174 @ 00019174 size=180 ===== */

void * FUN_00019174(int param_1,int *param_2)

{
  void *pvVar1;
  uint uVar2;
  byte *pbVar3;
  size_t sVar4;
  void *__ptr;
  int iVar5;
  size_t __size;
  size_t sVar6;
  
  pvVar1 = malloc(0x100);
  __ptr = pvVar1;
  if (pvVar1 != (void *)0x0) {
    iVar5 = 0;
    __size = 0x100;
    sVar4 = 0;
LAB_00019192:
    do {
      do {
        __ptr = pvVar1;
        pbVar3 = *(byte **)(param_1 + 0x10);
        if (pbVar3 < *(byte **)(param_1 + 0x18)) {
          *(byte **)(param_1 + 0x10) = pbVar3 + 1;
          uVar2 = (uint)*pbVar3;
        }
        else {
          uVar2 = __fgetc_unlocked(param_1);
        }
        pvVar1 = __ptr;
        if (uVar2 == 10) {
LAB_000191ae:
          *(undefined1 *)((int)__ptr + sVar4) = 0;
          if (param_2 == (int *)0x0) {
            pvVar1 = __ptr;
            __ptr = (void *)0x0;
          }
          else {
            *param_2 = *param_2 + iVar5 + 1;
            pvVar1 = __ptr;
            __ptr = (void *)0x0;
          }
          goto LAB_000191c8;
        }
        if (uVar2 == 0x5c) {
          pbVar3 = *(byte **)(param_1 + 0x10);
          if (pbVar3 < *(byte **)(param_1 + 0x18)) {
            *(byte **)(param_1 + 0x10) = pbVar3 + 1;
            uVar2 = (uint)*pbVar3;
          }
          else {
            uVar2 = __fgetc_unlocked(param_1);
          }
          if (uVar2 == 10) {
            iVar5 = iVar5 + 1;
            goto LAB_00019192;
          }
        }
        else if (uVar2 == 0xffffffff) {
          pvVar1 = (void *)0x0;
          if (sVar4 != 0) goto LAB_000191ae;
          goto LAB_000191c8;
        }
        sVar6 = sVar4 + 1;
        *(char *)((int)__ptr + sVar4) = (char)uVar2;
        sVar4 = sVar6;
      } while (__size != sVar6);
      __size = __size << 1;
      pvVar1 = realloc(__ptr,__size);
    } while (pvVar1 != (void *)0x0);
  }
LAB_000191c8:
  free(__ptr);
  return pvVar1;
}



/* ===== FUN_00019228 @ 00019228 size=98 ===== */

char * FUN_00019228(char *param_1)

{
  char *pcVar1;
  size_t sVar2;
  size_t sVar3;
  char *__s;
  
  if (*param_1 == '/') {
    pcVar1 = strdup(param_1);
  }
  else {
    __s = get_current_dir_name();
    if (__s == (char *)0x0) {
      pcVar1 = (char *)0x0;
      goto LAB_0001923c;
    }
    sVar2 = strlen(param_1);
    sVar3 = strlen(__s);
    pcVar1 = realloc(__s,sVar2 + sVar3 + 2);
    if (pcVar1 == (char *)0x0) goto LAB_0001923c;
    pcVar1[sVar3] = '/';
    memcpy(pcVar1 + sVar3 + 1,param_1,sVar2 + 1);
  }
  __s = (char *)0x0;
LAB_0001923c:
  free(__s);
  return pcVar1;
}



/* ===== FUN_0001928c @ 0001928c size=28 ===== */

longlong FUN_0001928c(int param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_00019374(*(int *)(param_1 + 0x54),*(int *)(param_1 + 0x54) >> 0x1f,1000,0);
  return (longlong)DAT_000192a8 * (longlong)*(int *)(param_1 + 0x50) + lVar1;
}



/* ===== FUN_000192ac @ 000192ac size=168 ===== */

ulonglong FUN_000192ac(uint param_1,uint param_2)

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



/* ===== FUN_00019374 @ 00019374 size=76 ===== */

void FUN_00019374(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  if (param_4 != 0 || param_3 != 0) {
    FUN_000193c0();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_000193c0 @ 000193c0 size=328 ===== */

undefined8 FUN_000193c0(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

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



/* ===== _DT_FINI @ 00019508 size=16 ===== */

void _DT_FINI(void)

{
  return;
}



/* ===== <EXTERNAL>::secure_getenv @ 0002c000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void secure_getenv(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 0002c004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::unsetenv @ 0002c008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unsetenv(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtok_r @ 0002c00c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strtok_r(char *__s,char *__delim,char **__save_ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 0002c010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::stat64 @ 0002c014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat64(char *__file,stat64 *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memmove @ 0002c018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 0002c01c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::syscall @ 0002c020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long syscall(long __sysno,...)

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



/* ===== <EXTERNAL>::bsearch @ 0002c02c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * bsearch(void *__key,void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fgets @ 0002c030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 0002c034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_finalize @ 0002c038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::system @ 0002c03c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int system(char *__command)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 0002c040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::openat64 @ 0002c044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int openat64(int __fd,char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtoul @ 0002c048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::init_module @ 0002c04c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void init_module(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::delete_module @ 0002c050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void delete_module(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__fgetc_unlocked @ 0002c054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __fgetc_unlocked(void)

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



/* ===== <EXTERNAL>::uname @ 0002c060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int uname(utsname *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::basename @ 0002c064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * basename(char *__filename)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 0002c068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::write @ 0002c06c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 0002c070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0002c074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fseek @ 0002c078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_registerTMCloneTable @ 0002c07c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_registerTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memchr @ 0002c080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memchr(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strstr @ 0002c084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::read @ 0002c088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dirfd @ 0002c08c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int dirfd(DIR *__dirp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::get_current_dir_name @ 0002c090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * get_current_dir_name(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pread64 @ 0002c094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t pread64(int __fd,void *__buf,size_t __nbytes,__off64_t __offset)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 0002c098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 0002c09c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setenv @ 0002c0a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setenv(char *__name,char *__value,int __replace)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::realloc @ 0002c0a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::readdir64 @ 0002c0a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent64 * readdir64(DIR *__dirp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcmp @ 0002c0ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fdopen @ 0002c0b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fdopen(int __fd,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fread @ 0002c0b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_deregisterTMCloneTable @ 0002c0b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strdup @ 0002c0bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strdup(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0002c0c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fnmatch @ 0002c0c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fnmatch(char *__pattern,char *__name,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 0002c0c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::open64 @ 0002c0cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::opendir @ 0002c0d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * opendir(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 0002c0d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fstatat64 @ 0002c0d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstatat64(int __fd,char *__file,stat64 *__buf,int __flag)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 0002c0dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::asprintf @ 0002c0e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int asprintf(char **__ptr,char *__fmt,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcspn @ 0002c0e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strcspn(char *__s,char *__reject)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mmap64 @ 0002c0ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * mmap64(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off64_t __offset)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strsep @ 0002c0f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strsep(char **__stringp,char *__delim)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 0002c0f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 0002c0f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__assert @ 0002c0fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void __assert(char *__assertion,char *__file,int __line)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strchr @ 0002c100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::closedir @ 0002c104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int closedir(DIR *__dirp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 0002c108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 0002c10c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vfprintf @ 0002c110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::raise @ 0002c114 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 0002c118 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen64 @ 0002c11c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


